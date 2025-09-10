/**************************************************************************//**
 * @file     i3c.c
 * @version  V1.00
 * @brief    I3C driver source file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2024 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/
#include "NuMicro.h"

/** @cond HIDDEN_SYMBOLS */
#ifndef I3C_DrvMsg
#define I3C_DrvMsg(...)
#endif
/** @endcond HIDDEN_SYMBOLS */


/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup I3C_Driver I3C Driver
  @{
*/

/** @addtogroup I3C_EXPORTED_FUNCTIONS I3C Exported Functions
  @{
*/


/**
  * @brief  Initial I3C Device Type
  */
int32_t I3C_DeviceInit(I3C_DEVICE_T *dev)
{
    /* Response buffer threshold */
    dev->port->QUETHCTL  = (0 << I3C_QUETHCTL_RESPTH_Pos);
    /* Command buffer empty threshold */
    dev->port->QUETHCTL |= (1 << I3C_QUETHCTL_CMDETH_Pos);
    /* IBI data segment size to 2-words(8-bytes) */
    dev->port->QUETHCTL |= (2 << I3C_QUETHCTL_IBIDATTH_Pos);

    /* Rx receive and Tx empty threshold */
    dev->port->DBTHCTL  = ((0 << I3C_DBTHCTL_TXTH_Pos) | (0 << I3C_DBTHCTL_RXTH_Pos));
    /* Rx and Tx start threshold */
    dev->port->DBTHCTL |= ((0 << I3C_DBTHCTL_TXSTATH_Pos) | (0 << I3C_DBTHCTL_RXSTATH_Pos));

    /* Clear current interrupt status */
    dev->port->INTSTS |= dev->port->INTSTS;

    /* Enable all interrupt status */
    dev->port->INTSTSEN = ~0ul;
    /* Enable specified interrupt signal */
    dev->port->INTEN = (I3C_INTEN_RESPRDY_Msk  | I3C_INTEN_CCCUPD_Msk   | I3C_INTEN_DAA_Msk |
                        I3C_INTEN_TFRERR_Msk   | I3C_INTEN_READREQ_Msk  | I3C_INTEN_TFRABORT_Msk |
                        I3C_INTEN_IBIUPD_Msk   | I3C_INTEN_DEFTGTS_Msk  | I3C_INTEN_BUSOWNER_Msk |
                        I3C_INTEN_BUSRSTDN_Msk | I3C_INTEN_RSTPTDET_Msk | I3C_INTEN_GRPADDRA_Msk |
                        I3C_INTEN_SDARES_Msk   | I3C_INTEN_EXTFINS_Msk  | I3C_INTEN_IBITH_Msk);

    /* Configure related bus timings, SCL clock */
    if(dev->engclk == 0)
        return I3C_STS_INVALID_INPUT;

    I3C_BusClkConfig(dev);

    if(dev->device_role == I3C_CONTROLLER)
    {
        /* Program Dynamic Address for Controller */
        dev->port->DEVADDR = (I3C_DEVADDR_DAVALID_Msk | (dev->main_controller_da << I3C_DEVADDR_DA_Pos));

        /* Set as Controller role */
        dev->port->DEVCTLE = dev->device_role;

        /* Set Conroller includes I3C Broadcast Address */
        dev->port->DEVCTL |= (I3C_DEVCTL_ENABLE_Msk | I3C_DEVCTL_IBAINCL_Msk);

        /* Enable device */
        dev->port->DEVCTL |= I3C_DEVCTL_ENABLE_Msk;
        
        /* Enable GETMXDS CCC response */
        dev->port->SLVCHAR |= I3C_SLVCHAR_MXDSLIMT_Msk;
    }
    else if(dev->device_role == I3C_TARGET)
    {
        /* Set as Target role */
        dev->port->DEVCTLE = dev->device_role;

        /* Includes I3C Broadcast Address */
        dev->port->DEVCTL |= (I3C_DEVCTL_IBAINCL_Msk);

        if(dev->main_target_sa != 0)
        {
            /* Program Statis Address for Target */
            dev->port->DEVADDR |= (I3C_DEVADDR_SAVALID_Msk | (dev->main_target_sa << I3C_DEVADDR_SA_Pos));
            dev->target_sa[0] = dev->main_target_sa;
        }

        /* Select the Target ability for enter I3C mode */
        if(dev->target_daa_mode == I3C_SUPPORT_ENTDAA)
        {
            /* HJEN disabled: Target supports ENTDAA CCC */
            dev->port->DEVCTL |= I3C_DEVCTL_ADAPTIVE_Msk;
            dev->port->SLVEVNTS &= ~I3C_SLVEVNTS_HJEN_Msk;
        }
        else if(dev->target_daa_mode == I3C_SUPPORT_ADAPTIVE_HJ)
        {
            /* Both ADAPTIVE and HJEN enabled: Target generates a Hot-Join request until receive I3C header 7'h7E on the bus */
            dev->port->DEVCTL |= I3C_DEVCTL_ADAPTIVE_Msk;
            dev->port->SLVEVNTS |= I3C_SLVEVNTS_HJEN_Msk;
        }
        else if(dev->target_daa_mode == I3C_SUPPORT_IMMEDIATE_HJ)
        {
            /* Only HJEN enabled: Target generates a Hot-Join request immediately */
            dev->port->DEVCTL &= ~I3C_DEVCTL_ADAPTIVE_Msk;
            dev->port->SLVEVNTS |= I3C_SLVEVNTS_HJEN_Msk;
        }
        else
        {
            /* HJEN disabled: Target supports ENTDAA CCC */
            dev->port->DEVCTL |= I3C_DEVCTL_ADAPTIVE_Msk;
            dev->port->SLVEVNTS &= ~I3C_SLVEVNTS_HJEN_Msk;
        }
        
        /* Enable GETMXDS CCC response */
        dev->port->SLVCHAR |= I3C_SLVCHAR_MXDSLIMT_Msk;
    }
    else
    {
        return I3C_STS_INVALID_INPUT;
    }

    if(dev->device_role == I3C_CONTROLLER)
    {
        if(!(dev->port->DEVCTL & I3C_DEVCTL_ENABLE_Msk))
            return (~I3C_STS_NO_ERR);
    }

    return I3C_STS_NO_ERR;
}

/**
  * @brief      Setup I2C / I3C Device Address Table
  *
  * @param[in]  *i3c            Point to I3C peripheral
  * @param[in]  u8DevIndex      the offset of Device Address Table.
  *                             It could be 0 ~ 6 for DEV1ADR to DEV7ADR.
  * @param[in]  u8DevType       the Target device type. It could be I3C_DEVTYPE_I3C for I3C device and I3C_DEVTYPE_I2C for I2C device
  * @param[in]  u8DAddr         7Bits Device Synamic Address
  * @param[in]  u8SAddr         7Bits Device Static Address
  *
  * @retval     I3C_STS_NO_ERR          No error
  * @retval     I3C_STS_INVALID_INPUT   Invalid input parameter
  *
  * @details    The function is used for I3C Controller to setup Device Address Table.
  * @note       Device Address Table must be set before communication with Target Devices.
  *
  */
int32_t I3C_SetDeviceAddr(I3C_T *i3c, uint8_t u8DevIndex, uint8_t u8DevType, uint8_t u8DAddr, uint8_t u8SAddr)
{
    volatile uint32_t i, count, u32Device = 0;

    if ((u8DAddr & 0x80) || (u8SAddr & 0x80))
    {
        return I3C_STS_INVALID_INPUT;
    }

    // I3C Device Dynamic Address with Odd Parity
    for (i = 0, count = 0; i < 8; i++)
    {
        if ((u8DAddr >> i) & 0x1)
        {
            count ++;
        }
    }

    if ((count % 2) == 0)
    {
        u32Device = ((u8DAddr | 0x80) << I3C_TGTCFG_DADDR_Pos);
    }
    else
    {
        u32Device = (u8DAddr << I3C_TGTCFG_DADDR_Pos);
    }

    // I2C Device Static Address
    u32Device |= (u8SAddr << I3C_TGTCFG_SADDR_Pos);

    // Support IBI with one or more Mandatory Bytes
    u32Device |= (I3C_TGTCFG_IBIWMDB_Msk);

    // Device Type
    if (u8DevType != I3C_DEVTYPE_I3C)
    {
        u32Device |= I3C_TGTCFG_DEVTYPE_Msk;
    }

    switch (u8DevIndex)
    {
        case 0ul:
        case 1ul:
        case 2ul:
        case 3ul:
        case 4ul:
        case 5ul:
        case 6ul:
            /* Configure device address on specify table location */
            i3c->TGTCFG[u8DevIndex] = u32Device;
            break;

        default:
            return I3C_STS_INVALID_INPUT;
            break;
    }

    return I3C_STS_NO_ERR;
}

/**
  * @brief  Configure Bus Timing
  */
void I3C_BusClkConfig(I3C_DEVICE_T *dev)
{
    volatile uint32_t count;

    I3C_DrvMsg("\n");

    if(dev->i2c_fm_freq != 0)
    {
        /* SCL freq for I2C FM mode */
        if(dev->i2c_fm_freq > dev->engclk)
            dev->i2c_fm_freq = dev->engclk;
        count = ((dev->engclk/dev->i2c_fm_freq) / 2); if(count<5) count = 5;
        dev->port->SCLFM = ((count << I3C_SCLFM_FMHCNT_Pos) | (count << I3C_SCLFM_FMLCNT_Pos));
    }

    if(dev->i2c_fm_plus_freq != 0)
    {
        /* SCL freq for I2C FM+ mode */
        if(dev->i2c_fm_plus_freq > dev->engclk)
            dev->i2c_fm_plus_freq = dev->engclk;
        count = ((dev->engclk/dev->i2c_fm_plus_freq) / 2); if(count<5) count = 5;
        dev->port->SCLFMP = ((count << I3C_SCLFMP_FMPHCNT_Pos) | (count << I3C_SCLFMP_FMPLCNT_Pos));
    }

    if(dev->i3c_sdr_freq != 0)
    {
        if(dev->i3c_sdr_freq > 12500000)
            dev->i3c_sdr_freq = 12500000;

        /* Set OD mode SCL freq 1MHz */
        count = ((dev->engclk/(1000*1000)) / 2); if(count<5) count = 5;
        dev->port->SCLOD = ((count << I3C_SCLOD_ODHCNT_Pos) | (count << I3C_SCLOD_ODLCNT_Pos));

        /* Set PP mode SCL freq for SDR0 */
        if(dev->i3c_sdr_freq > dev->engclk)
            dev->i3c_sdr_freq = dev->engclk;
        count = ((dev->engclk/dev->i3c_sdr_freq) / 2); if(count<5) count = 5;
        if((dev->i3c_sdr_freq == 12500000) && ((dev->engclk%dev->i3c_sdr_freq) != 0))
        {
            dev->port->SCLPP =  (count << I3C_SCLPP_PPLCNT_Pos);
            dev->port->SCLPP |= ((count+1) << I3C_SCLPP_PPHCNT_Pos);
            dev->i3c_sdr_freq = (dev->engclk / ((count + 1) + count));
        }
        else
        {
            dev->port->SCLPP = ((count << I3C_SCLPP_PPHCNT_Pos) | (count << I3C_SCLPP_PPLCNT_Pos));
            dev->i3c_sdr_freq = (dev->engclk / (count + count));
        }
        I3C_DrvMsg("[ DRV ] Set SCL %d Hz\n", dev->i3c_sdr_freq);

        /* Set PP mode SCL freq for SDR1, 2, 3, 4 */
        dev->port->SCLEXTLO = (((count*5) << 24) | ((count*4) << 16) | ((count*3) << 8) | ((count*2) << 0));
    }

    /*  Bus Idle Timing ~ 200us */
    count = (uint32_t)(((float)200 * (float)dev->engclk) / (float)1000000); if(count == 0) count = 0x50;
    dev->port->BUSIDLET = count;

    /* Bus Available(1.0us) Timing ~ 1.0us */
    count = (uint32_t)(((float)1 * (float)dev->engclk) / (float)1000000); if(count == 0) count = 0x50;
    dev->port->BUSFAT = (count << I3C_BUSFAT_AVAILTC_Pos);
    /* Bus Free Timing ~ 38.4ns/0.5us/1.3us */
    count = (uint32_t)(((float)1300 * (float)dev->engclk) / (float)1000000000); if(count == 0) count = 0x50;
    dev->port->BUSFAT |= (count << I3C_BUSFAT_FREETC_Pos);
}

/**
  * @brief  Show Present State Information
  */
void I3C_PresentStateInfo(I3C_DEVICE_T *dev)
{
    volatile uint32_t role, sts, reg_val[2];

    I3C_DrvMsg("\n");

    role = ((dev->port->DEVCTLE & I3C_DEVCTLE_OPERMODE_Msk) >> I3C_DEVCTLE_OPERMODE_Pos);

    reg_val[0] = dev->port->PRESENTS;
    reg_val[1] = dev->port->CCCDEVS;
    I3C_DrvMsg("[ DRV ] Present state info: 0x%08x (%s mode)\n", reg_val[0], (role==0)? "Controller":"Target");

    sts = ((reg_val[0] & I3C_PRESENTS_TFRTYPE_Msk) >> I3C_PRESENTS_TFRTYPE_Pos);
    if(sts == 0)
    {
        I3C_DrvMsg("\tDevice in IDLE state\n");
    }
    else
    {
        if (role == 0)
        {
            if (reg_val[0] & I3C_PRESENTS_CTRIDLES_Msk)
            {
                I3C_DrvMsg("\tController is in IDLE State\n");
            }
            else
            {
                I3C_DrvMsg("\tController is NOT in IDLE State\n");
            }

            if (sts == 0xF)
            {
                I3C_DrvMsg("\tController in Halt State, waiting for resume\n");
            }
            else
            {
                I3C_DrvMsg("\tController error code: 0x%x\n", sts);
            }
        }
        else
        {
            if (sts == 1)
            {
                I3C_DrvMsg("\tHot-Join Transfer State\n");
            }
            else if (sts == 2)
            {
                I3C_DrvMsg("\nIBI Transfer State\n");
            }
            else if (sts == 3)
            {
                I3C_DrvMsg("\nController Write Transfer Ongoing\n");
            }
            //else if(sts == 4) Not support in M3331
            //    I3C_DrvMsg("\nRead Data Prefetch State\n");
            else if (sts == 5)
            {
                I3C_DrvMsg("\nController Read Transfer Ongoing\n");
            }
            else if (sts == 6)
            {
                I3C_DrvMsg("\nTarget in Halt State, waiting for resume\n");
            }
            else
            {
                I3C_DrvMsg("\nTarget error code: 0x%x\n", sts);
            }
        }
    }

    I3C_DrvMsg("\n");
}

/**
  * @brief  Enable I3C Rx DMA function on PDMA ch-n.
  */
int32_t I3C_ConfigRxDMA(I3C_DEVICE_T *dev, uint32_t u32Src, uint32_t u32Dest, uint32_t u32ByteCnts)
{
    PDMA_T *pdma = dev->DMAPort;
    uint8_t ch = dev->RxDMACh;
    __IO uint32_t *reg = &((pdma)->REQSEL0_3);

    if(ch >= PDMA_CH_MAX)
        return -1;

    PDMA_RESET(pdma, ch);

    /* PDMA-ch for I3C Rx */
    pdma->DSCT[ch].CTL =
        PDMA_OP_BASIC | PDMA_REQ_SINGLE |
        PDMA_SAR_FIX  | PDMA_DAR_INC |
        PDMA_WIDTH_32 |
        ((((u32ByteCnts + 3) / 4) - 1) << PDMA_DSCT_CTL_TXCNT_Pos);

    pdma->DSCT[ch].SA = u32Src;
    pdma->DSCT[ch].DA = u32Dest;

    /* Select peripheral for the channel */
    reg[(ch / 4)] = (reg[(ch / 4)] & ~(PDMA_REQSEL0_3_REQSRC0_Msk << ((ch % 4) * 8))) | (PDMA_I3C0_RX << ((ch % 4) * 8));

    pdma->CHCTL |= (1 << ch);

    return 0;
}

/**
  * @brief  Enable I3C Tx DMA function on PDMA ch-n.
  */
int32_t I3C_ConfigTxDMA(I3C_DEVICE_T *dev, uint32_t u32Src, uint32_t u32Dest, uint32_t u32ByteCnts)
{
    PDMA_T *pdma = dev->DMAPort;
    uint8_t ch = dev->TxDMACh;
    __IO uint32_t *reg = &((pdma)->REQSEL0_3);

    if(ch >= PDMA_CH_MAX)
        return -1;

    PDMA_RESET(pdma, ch);

    /* PDMA-ch for I3C Tx */
    pdma->DSCT[ch].CTL =
        PDMA_OP_BASIC | PDMA_REQ_SINGLE |
        PDMA_SAR_INC  | PDMA_DAR_FIX |
        PDMA_WIDTH_32 |
        ((((u32ByteCnts + 3) / 4) - 1) << PDMA_DSCT_CTL_TXCNT_Pos);

    pdma->DSCT[ch].SA = u32Src;
    pdma->DSCT[ch].DA = u32Dest;

    /* Select peripheral for the channel */
    reg[(ch / 4)] = (reg[(ch / 4)] & ~(PDMA_REQSEL0_3_REQSRC0_Msk << ((ch % 4) * 8))) | (PDMA_I3C0_TX << ((ch % 4) * 8));

    pdma->CHCTL |= (1 << ch);

    /* Set DMAEN bit 0 then 1 to load Tx data by I3C DMA */
    I3C_EnableDMA(dev->port);

    return 0;
}

/**
  * @brief  Perform Dynamic Address Assignment by ENTDAA and SETDASA CCC
  */
int32_t I3C_CtrDAA(I3C_DEVICE_T *dev)
{
	uint32_t val, count, index;

    I3C_DrvMsg("\n");

	/* Initialize command response value */
    dev->cmd_response = I3C_CTRRESP_INITIAL_VALUE;

    if( !((dev->ccc_code == I3C_CCC_ENTDAA) || (dev->ccc_code == I3C_CCC_SETDASA)) )
        return I3C_STS_INVALID_INPUT;

    if(dev->ccc_code == I3C_CCC_SETDASA)
    {
        if(dev->target_index > 6)
            return I3C_STS_INVALID_INPUT;

        index = dev->target_index;
        count = 1;
    }
    else
    {
        if(dev->target_count > 7)
            return I3C_STS_INVALID_INPUT;

        index = dev->target_index;
        count = dev->target_count;
    }

	/* Program Address Assignment Command Data Structure */
    val = 0;
	val |= (  (count << I3C_CMDQUE_DEVCOUNT_Pos)
            | (index << I3C_CMDQUE_DEVINDX_Pos)
            | (dev->tx_id << I3C_CMDQUE_TID_Pos)
            | (dev->ccc_code << I3C_CMDQUE_CMD_Pos)
            | I3C_CMDATTR_ADDR_ASSGN_CMD );

    /* Stop and Response Status on Transfer Completion */
    val |= (I3C_CMDQUE_TOC_Msk | I3C_CMDQUE_ROC_Msk);

    I3C_DrvMsg("[CMD val: 0x%08x] - I3C_CtrDAA\n", val);
    dev->port->CMDQUE = val;

    /* Clear parameters */
    dev->is_last_cmd  = TRUE;
    dev->is_HDR_cmd   = FALSE;
    dev->is_HDRBT_cmd = FALSE;
    dev->is_DB        = FALSE;
    dev->speed_mode   = I3C_DEVI3C_SPEED_SDR0;

	return I3C_STS_NO_ERR;
}

/**
  * @brief  Perform Write CCC Operation
  */
int32_t I3C_CtrCCCSet(I3C_DEVICE_T *dev)
{
	volatile uint32_t i;
	uint32_t val, *p32Buf;

    I3C_DrvMsg("\n");

	/* Initialize command response value */
    dev->cmd_response = I3C_CTRRESP_INITIAL_VALUE;

    val = 0;

	/* Try to use SDAP */
	if((dev->tx_len > 0) && (dev->tx_len <= I3C_SDAP_MAX_SIZE))
    {
		/* Set transfer argument params */
		switch (dev->tx_len)
        {
            case 3:
                val |= (1 << (I3C_CMDQUE_BYTESTRB_Pos + 2));
                val |= (dev->tx_buf[2] << I3C_CMDQUE_DATBYTE2_Pos);
            case 2:
                val |= (1 << (I3C_CMDQUE_BYTESTRB_Pos + 1));
                val |= (dev->tx_buf[1] << I3C_CMDQUE_DATBYTE1_Pos);
            case 1:
                val |= (1 << (I3C_CMDQUE_BYTESTRB_Pos + 0));
                val |= (dev->tx_buf[0] << I3C_CMDQUE_DATBYTE0_Pos);
            default:
                break;
		}
		val |= I3C_CMDATTR_SHORT_DATA_ARG;

        I3C_DrvMsg("[SDAP val: 0x%08x] - I3C_CtrCCCSet\n", val);
        dev->port->CMDQUE = val;

		/* Set transfer command params */
		val = I3C_CMDQUE_SDAP_Msk;
	}
	else if(dev->tx_len > I3C_SDAP_MAX_SIZE)
    {
        p32Buf = (uint32_t *)dev->tx_buf;

		/* Write bytes to tx port */
        for(i=0; i<((dev->tx_len + 3) / 4); i++)
        {
            dev->port->TXRXDAT = p32Buf[i];
		}

		/* Program transfer argument */
		val = ((dev->tx_len << I3C_CMDQUE_DATLEN_Pos) | I3C_CMDATTR_TRANSFER_ARG);

        I3C_DrvMsg("[TRANS val: 0x%08x] - I3C_CtrCCCSet\n", val);
        dev->port->CMDQUE = val;

		val = 0;
	}

	/* Program transfer command */
	val |= (  I3C_CMDQUE_CP_Msk
            | (dev->target_index << I3C_CMDQUE_DEVINDX_Pos)
            | (dev->tx_id << I3C_CMDQUE_TID_Pos)
            | (dev->ccc_code << I3C_CMDQUE_CMD_Pos)
            | I3C_CMDATTR_TRANSFER_CMD );

	if(dev->is_last_cmd)
    {
        /* Stop and Response Status on Transfer Completion */
		val |= (I3C_CMDQUE_TOC_Msk | I3C_CMDQUE_ROC_Msk);
    }

    I3C_DrvMsg("[CMD val: 0x%08x] - I3C_CtrCCCSet\n", val);
    dev->port->CMDQUE = val;

    /* Clear parameters */
    dev->is_last_cmd  = TRUE;
    dev->is_HDR_cmd   = FALSE;
    dev->is_HDRBT_cmd = FALSE;
    dev->is_DB        = FALSE;
    dev->speed_mode   = I3C_DEVI3C_SPEED_SDR0;

	return I3C_STS_NO_ERR;
}

/**
  * @brief  Perform Read CCC Operation
  */
int32_t I3C_CtrCCCGet(I3C_DEVICE_T *dev)
{
    uint32_t val;

    I3C_DrvMsg("\n");

	/* Initialize command response value */
    dev->cmd_response = I3C_CTRRESP_INITIAL_VALUE;

	/* Program transfer argument */
    val = ( (dev->rx_len << I3C_CMDQUE_DATLEN_Pos) |
            I3C_CMDATTR_TRANSFER_ARG );

    /* Program Defining Byte Value */
    if(dev->is_DB)
        val |= (dev->DB << I3C_CMDQUE_DB_Pos);

    I3C_DrvMsg("[ DRV ] [ARG val: 0x%08x] - I3C_CtrCCCGet\n", val);
    dev->port->CMDQUE = val;

	/* Program transfer command */
	val = (  I3C_CMDQUE_CP_Msk
           | I3C_CMDQUE_RNW_Msk
           | dev->speed_mode
           | (dev->target_index << I3C_CMDQUE_DEVINDX_Pos)
           | (dev->tx_id << I3C_CMDQUE_TID_Pos)
           | (dev->ccc_code << I3C_CMDQUE_CMD_Pos)
           | I3C_CMDATTR_TRANSFER_CMD );

    /* Program Defining Byte Present */
    if(dev->is_DB)
    {
        val |= I3C_CMDQUE_DBP_Msk;
    }
	if(dev->is_last_cmd)
    {
        /* Stop and Response Status on Transfer Completion */
		val |= (I3C_CMDQUE_TOC_Msk | I3C_CMDQUE_ROC_Msk);
    }

    I3C_DrvMsg("[ DRV ] [CMD val: 0x%08x] - I3C_CtrCCCGet\n", val);
    dev->port->CMDQUE = val;

    /* Clear parameters */
    dev->is_last_cmd  = TRUE;
    dev->is_HDR_cmd   = FALSE;
    dev->is_HDRBT_cmd = FALSE;
    dev->is_DB        = FALSE;
    dev->speed_mode   = I3C_DEVI3C_SPEED_SDR0;

	return I3C_STS_NO_ERR;
}

/**
  * @brief  Perform Private/HDR-DDR Write Oeration in Controller
  */
int32_t I3C_CtrWrite(I3C_DEVICE_T *dev)
{
	volatile uint32_t i;
	uint32_t val, *p32Buf;

    I3C_DrvMsg("\n");

	/* Initialize command response value */
    dev->cmd_response = I3C_CTRRESP_INITIAL_VALUE;

    val = 0;

	/* Try to use SDAP */
	if((dev->tx_len > 0) && (dev->tx_len <= I3C_SDAP_MAX_SIZE))
    {
		/* Set transfer argument params */
		switch (dev->tx_len)
        {
            case 3:
                val |= (1 << (I3C_CMDQUE_BYTESTRB_Pos + 2));
                val |= (dev->tx_buf[2] << I3C_CMDQUE_DATBYTE2_Pos);
            case 2:
                val |= (1 << (I3C_CMDQUE_BYTESTRB_Pos + 1));
                val |= (dev->tx_buf[1] << I3C_CMDQUE_DATBYTE1_Pos);
            case 1:
                val |= (1 << (I3C_CMDQUE_BYTESTRB_Pos + 0));
                val |= (dev->tx_buf[0] << I3C_CMDQUE_DATBYTE0_Pos);
            default:
                break;
		}
		val |= I3C_CMDATTR_SHORT_DATA_ARG;

        I3C_DrvMsg("[ DRV ] [SDAP val: 0x%08x] - I3C_CtrWrite\n", val);
        dev->port->CMDQUE = val;

		/* Set transfer command params */
		val = I3C_CMDQUE_SDAP_Msk;
	}
	else if(dev->tx_len > I3C_SDAP_MAX_SIZE)
    {
        p32Buf = (uint32_t *)dev->tx_buf;

		/* Write bytes to tx port */
        if(dev->is_DMA)
        {
            /* Use Tx PDAM */
            I3C_ConfigTxDMA(dev, (uint32_t)(p32Buf), (uint32_t)(&dev->port->TXRXDAT), dev->tx_len);
        }
        else
        {
            for(i=0; i<((dev->tx_len + 3) / 4); i++)
            {
                dev->port->TXRXDAT = p32Buf[i];
            }
        }

		/* Program transfer argument */
		val = ((dev->tx_len << I3C_CMDQUE_DATLEN_Pos) | I3C_CMDATTR_TRANSFER_ARG);

        I3C_DrvMsg("[ DRV ] [TRANS val: 0x%08x] - I3C_CtrWrite\n", val);
        dev->port->CMDQUE = val;

		val = 0;
	}

	/* Program transfer command */
	val |= (  dev->speed_mode
            | (dev->target_index << I3C_CMDQUE_DEVINDX_Pos)
            | (dev->tx_id << I3C_CMDQUE_TID_Pos)
            | I3C_CMDATTR_TRANSFER_CMD );

    /* Program HDR command */
    if(dev->is_HDR_cmd)
    {
        val |= (I3C_CMDQUE_CP_Msk | (dev->ccc_code << I3C_CMDQUE_CMD_Pos));
    }

	if(dev->is_last_cmd)
    {
        /* Stop and Response Status on Transfer Completion */
		val |= (I3C_CMDQUE_TOC_Msk | I3C_CMDQUE_ROC_Msk);
    }

    I3C_DrvMsg("[ DRV ] [CMD val: 0x%08x] - I3C_CtrWrite\n", val);
    dev->port->CMDQUE = val;

    /* Clear parameters */
    dev->is_last_cmd  = TRUE;
    dev->is_HDR_cmd   = FALSE;
    dev->is_HDRBT_cmd = FALSE;
    dev->is_DB        = FALSE;
    dev->speed_mode   = I3C_DEVI3C_SPEED_SDR0;

	return I3C_STS_NO_ERR;
}

/**
  * @brief  Perform Private/HDR-DDR Read Oeration in Controller
  */
int32_t I3C_CtrRead(I3C_DEVICE_T *dev)
{
    uint32_t val;

    I3C_DrvMsg("\n");

	/* Initialize command response value */
    dev->cmd_response = I3C_CTRRESP_INITIAL_VALUE;

    /* Program transfer argument */
    val = ( (dev->rx_len << I3C_CMDQUE_DATLEN_Pos) |
          I3C_CMDATTR_TRANSFER_ARG );

    I3C_DrvMsg("[ DRV ] [ARG val: 0x%08x] - I3C_CtrRead\n", val);
    dev->port->CMDQUE = val;

	/* Program transfer command */
	val = (  I3C_CMDQUE_RNW_Msk
           | dev->speed_mode
           | (dev->target_index << I3C_CMDQUE_DEVINDX_Pos)
           | (dev->tx_id << I3C_CMDQUE_TID_Pos)
           | I3C_CMDATTR_TRANSFER_CMD );

    /* Program HDR command */
    if(dev->is_HDR_cmd)
    {
        val |= (I3C_CMDQUE_CP_Msk | (dev->HDR_cmd << I3C_CMDQUE_CMD_Pos));
    }

	if(dev->is_last_cmd)
    {
        /* Stop and Response Status on Transfer Completion */
		val |= (I3C_CMDQUE_TOC_Msk | I3C_CMDQUE_ROC_Msk);
    }

    I3C_DrvMsg("[ DRV ] [CMD val: 0x%08x] - I3C_CtrRead\n", val);
    dev->port->CMDQUE = val;

    /* Clear parameters */
    dev->is_last_cmd  = TRUE;
    dev->is_HDR_cmd   = FALSE;
    dev->is_HDRBT_cmd = FALSE;
    dev->is_DB        = FALSE;
    dev->speed_mode   = I3C_DEVI3C_SPEED_SDR0;

	return I3C_STS_NO_ERR;
}

/**
  * @brief  Perform HDR-BT Write Oeration in Controller
  */
int32_t I3C_CtrBTWrite(I3C_DEVICE_T *dev)
{
	volatile uint32_t i;
	uint32_t val, *p32Buf;

    I3C_DrvMsg("\n");

	/* Initialize command response value */
    dev->cmd_response = I3C_CTRRESP_INITIAL_VALUE;

    /* Write bytes to tx port */
    p32Buf = (uint32_t *)dev->tx_buf;
    if(dev->is_DMA)
    {
        /* Use Tx PDAM */
        I3C_ConfigTxDMA(dev, (uint32_t)(p32Buf), (uint32_t)(&dev->port->TXRXDAT), dev->tx_len);
    }
    else
    {
        for(i=0; i<((dev->tx_len + 3) / 4); i++)
        {
            dev->port->TXRXDAT = p32Buf[i];
        }
    }

    // DWORD0
	val = ( (0 << I3C_UNICMD_RW_Pos)
            | (dev->target_index << I3C_UNICMD_DEVINDX_Pos)
            | dev->speed_mode
            | I3C_UNICMD_WROC_Msk
            | I3C_UNICMD_TOC_Msk
            | I3C_UNICMDATTR_UNIFIED_CMD );
    I3C_DrvMsg("[ DRV ] [DWORD0 val: 0x%08x] - I3C_CtrBTWrite\n", val);
    dev->port->CMDQUE = val;
    
    // DWORD1
	val = (dev->tx_len<< I3C_UNICMD_DATLEN_Pos);
    I3C_DrvMsg("[ DRV ] [DWORD1 val: 0x%08x] - I3C_CtrBTWrite\n", val);
    dev->port->CMDQUE = val;
    
    // DWORD2
	val = dev->HDRBT_cmd;
    I3C_DrvMsg("[ DRV ] [DWORD2 val: 0x%08x] - I3C_CtrBTWrite\n", val);
    dev->port->CMDQUE = val;
    
    // DWORD3
	val = 0x1;
    I3C_DrvMsg("[ DRV ] [DWORD3 val: 0x%08x] - I3C_CtrBTWrite\n", val);
    dev->port->CMDQUE = val;

    /* Clear parameters */
    dev->is_last_cmd  = TRUE;
    dev->is_HDR_cmd   = FALSE;
    dev->is_HDRBT_cmd = FALSE;
    dev->is_DB        = FALSE;
    dev->speed_mode   = I3C_DEVI3C_SPEED_SDR0;

	return I3C_STS_NO_ERR;
}

/**
  * @brief  Perform HDR-BT Read Oeration in Controller
  */
int32_t I3C_CtrBTRead(I3C_DEVICE_T *dev)
{
    uint32_t val;

    I3C_DrvMsg("\n");

	/* Initialize command response value */
    dev->cmd_response = I3C_CTRRESP_INITIAL_VALUE;

    // DWORD0
	val = ( (1 << I3C_UNICMD_RW_Pos)
            | (dev->target_index << I3C_UNICMD_DEVINDX_Pos)
            | dev->speed_mode
            | I3C_UNICMD_WROC_Msk
            | I3C_UNICMD_TOC_Msk
            | I3C_UNICMDATTR_UNIFIED_CMD );
    I3C_DrvMsg("[ DRV ] [DWORD0 val: 0x%08x] - I3C_CtrBTRead\n", val);
    dev->port->CMDQUE = val;

    // DWORD1
	val = (dev->tx_len<< I3C_UNICMD_DATLEN_Pos);
    I3C_DrvMsg("[ DRV ] [DWORD1 val: 0x%08x] - I3C_CtrBTRead\n", val);
    dev->port->CMDQUE = val;

    // DWORD2
	val = dev->HDRBT_cmd;
    I3C_DrvMsg("[ DRV ] [DWORD2 val: 0x%08x] - I3C_CtrBTRead\n", val);
    dev->port->CMDQUE = val;

    // DWORD3
	val = 0x1;
    I3C_DrvMsg("[ DRV ] [DWORD3 val: 0x%08x] - I3C_CtrBTRead\n", val);
    dev->port->CMDQUE = val;

    /* Clear parameters */
    dev->is_last_cmd  = TRUE;
    dev->is_HDR_cmd   = FALSE;
    dev->is_HDRBT_cmd = FALSE;
    dev->is_DB        = FALSE;
    dev->speed_mode   = I3C_DEVI3C_SPEED_SDR0;

	return I3C_STS_NO_ERR;
}

/**
  * @brief  Perform DEFTGTS CCC to Secondary Controller (Target)
  */
int32_t I3C_CtrDEFTGTS(I3C_DEVICE_T *dev)
{
    volatile uint32_t i, j;

    I3C_DrvMsg("\n");

    /* DEFTGTS CCC */

    /* 1-bytes: Set valid Target counts for Secondary Controller */
    dev->tx_buf[0] = dev->target_count;

    /* 4-bytes: Set Controller's info */
    dev->tx_buf[1] = (dev->main_controller_da << 1); // DA
    dev->tx_buf[2] = ((dev->port->SLVCHAR & I3C_SLVCHAR_DCR_Msk) >> I3C_SLVCHAR_DCR_Pos); // DCR;
    dev->tx_buf[3] = (dev->port->SLVCHAR & 0xFF); // BCR;
    dev->tx_buf[4] = 0x0; // SA

    /* N-bytes: Set valid Target's info */
    for(i=0, j=0; i<dev->tx_buf[0]; i++)
    {
        if(dev->ibi_id == dev->port->TGTCHAR[i].DADDR)
            continue;

        dev->tx_buf[(j*4)+5+0] = (dev->port->TGTCHAR[i].DADDR << 1); // DA
        dev->tx_buf[(j*4)+5+1] = (dev->port->TGTCHAR[i].BCRDCR & 0xFF); // DCR;
        dev->tx_buf[(j*4)+5+2] = ((dev->port->TGTCHAR[i].BCRDCR & 0xFF00) >> 8); // BCR;
        dev->tx_buf[(j*4)+5+3] = 0x0; // SA
        j++;
    }

    dev->target_index = 0; // for Broadcast CCC
    dev->tx_len       = (1 + 4 + (dev->tx_buf[0] * 4));
    dev->is_last_cmd  = TRUE;
    dev->ccc_code     = I3C_CCC_DEFTGTS; // Not support IRQ  
    I3C_CtrCCCSet(dev);
    while((dev->port->INTSTS & I3C_INTSTS_RESPRDY_Msk) == 0) {}
    dev->cmd_response = dev->port->RESPQUE;
    I3C_DrvMsg("[ DRV ] DEFTGTS CCC - RespQ status 0x%08x.\n", dev->cmd_response);        
    if((dev->cmd_response&I3C_CTRRESP_ERRSTS_Msk) == I3C_CTRRESP_NO_ERR)
    {
        I3C_DrvMsg("[ DRV ] [ DEFTGTS, PASS ] (RESP: 0x%08x)\n", dev->cmd_response);
    }
    else
    {
        I3C_DrvMsg("[ DRV ] [ DEFTGTS, error code %d ] (RESP: 0x%08x)\n",
            (uint32_t)((dev->cmd_response&I3C_CTRRESP_ERRSTS_Msk) >> I3C_CTRRESP_ERRSTS_Pos), dev->cmd_response);
        return -1;
    }
    
    I3C_DrvMsg("\n");
    
    return I3C_STS_NO_ERR;
}

/**
  * @brief  Perform GETACCCR CCC for Active the Secondary Controller
  */
int32_t I3C_CtrGETACCCR(I3C_DEVICE_T *dev)
{
	volatile uint32_t i;
	uint32_t *p32Buf;
    
    I3C_DrvMsg("\n");

    //dev->target_index = i; /* Set target_index in I3C_CtrGetIBI(...) */
    dev->rx_len       = 1;
    dev->is_last_cmd  = TRUE;
    dev->ccc_code     = I3C_CCC_GETACCCR; // Not support IRQ
    I3C_CtrCCCGet(dev);
    while((dev->port->INTSTS & I3C_INTSTS_RESPRDY_Msk) == 0) {}
    dev->cmd_response = dev->port->RESPQUE;
    I3C_DrvMsg("[ DRV ] GETACCCR CCC - RespQ status 0x%08x.\n", dev->cmd_response);
    if(dev->is_DMA)
    {                        
        /* Enable PDMA channel for I3C Rx function */
        I3C_ConfigRxDMA(dev, (uint32_t)(&dev->port->TXRXDAT), (uint32_t)(dev->rx_buf), (I3C_DEVICE_RX_BUF_CNT * 4));
    }
    if((dev->cmd_response&I3C_CTRRESP_ERRSTS_Msk) == I3C_CTRRESP_NO_ERR)
    {
        p32Buf = (uint32_t *)&dev->rx_buf[0];
        if(dev->is_DMA == 0)
            p32Buf[0] = dev->port->TXRXDAT;

        if(dev->ibi_id == ((p32Buf[0]&0xFF) >> 1))
        {
            I3C_DrvMsg("[ DRV ] [ GETACCCR result ] matched: 0x%02x.\n", dev->ibi_id);
        }
        else
        {
            I3C_DrvMsg("[ DRV ] [ GETACCCR result ] mismatch: 0x%02x, 0x%02x\n", dev->ibi_id, ((p32Buf[0]&0xFF) >> 1));
            return -1;
        }
    }
    else
    {
        I3C_DrvMsg("[ DRV ] [ GETACCCR, error code %d ]\n", (uint32_t)((dev->cmd_response&I3C_CTRRESP_ERRSTS_Msk) >> I3C_CTRRESP_ERRSTS_Pos));
        return -1;
    }
    
    I3C_DrvMsg("\n");
    
	return I3C_STS_NO_ERR;
}

/**
  * @brief  Get In-Band Interrupt Event in Controller
  */
int32_t I3C_CtrGetIBI(I3C_DEVICE_T *dev)
{
	volatile uint32_t i;
	uint32_t ibi_len, ibi_id, *p32Buf, word_cnt, remain_cnts, RWBit = 0;

    if(dev->ibi_status & BIT31)
    {
        I3C_DrvMsg("\n[ DRV ] NACK IBI, status 0x%08x\n", dev->ibi_status);
    }
    else
    {
        ibi_len = ((dev->ibi_status & I3C_IBISTS_DATLEN_Msk) >> I3C_IBISTS_DATLEN_Pos);
        ibi_id  = (((dev->ibi_status & I3C_IBISTS_IBIID_Msk) >> I3C_IBISTS_IBIID_Pos) >> 1);
        RWBit   = ((dev->ibi_status >> I3C_IBISTS_IBIID_Pos) & BIT0);

        if(ibi_len == 0)
        {
            /* For Hot-Join request or CR operation */
            if(RWBit == BIT0)
            {
                I3C_DrvMsg("\n[ DRV ] Error Hot-Join or CR request RW bit=%d.\n", RWBit);
                    return -1;
            }

            if(ibi_id == 0x2)
            {
                dev->ibi_type = I3C_IBI_TYPE_HJ;
                dev->ibi_id   = ibi_id;
                dev->ibi_len  = ibi_len;

                // perform ENTDAA for new Hot-Join Target and update Target's DA table
                for(i=0; i<7; i++)
                {
                    if(dev->target_da[i] != 0x0)
                    {
                        i++; // set next target index
                        break;
                    }
                }
                I3C_DrvMsg("\n[ DRV ] Hot-Join ID (0x02) is detected ... process ENTDAA (get idx: %d)\n", i);

                if(i > 7)
                    return -2;
                else
                {
                    if(i == 7)
                        i = 0;
                    dev->target_index = i;  // set ENTDAA index to max. target count
                }

                /* Add delay loop */
                I3C_DelayLoop(SystemCoreClock/500);

                dev->target_count = 7;
                dev->ccc_code     = I3C_CCC_ENTDAA;
                I3C_CtrDAA(dev);
                if(dev->irq_enable)
                {
                    while((dev->port->INTSTS & I3C_INTSTS_RESPRDY_Msk) == 0) {}
                    dev->cmd_response = dev->port->RESPQUE;
                }
                else
                {
                    while((dev->port->INTSTS & I3C_INTSTS_RESPRDY_Msk) == 0) {}
                    dev->cmd_response = dev->port->RESPQUE;
                }
                if((dev->cmd_response&I3C_CTRRESP_ERRSTS_Msk) == I3C_CTRRESP_NO_ERR)
                {
                    dev->target_count = dev->target_index + dev->target_count;
                    I3C_DrvMsg("\t[ ENTDAA PASS ] (total cnts: %d)\n", dev->target_count);

                    //i = dev->target_index;
                    //I3C_DrvMsg("\tTarget #%d:\n", dev->target_index);
                    //dev->target_da[i] = ((dev->port->TGTCHAR[i].DADDR & I3C_TGTCHAR4_DADDR_Msk) >> I3C_TGTCHAR4_DADDR_Pos);
                    //I3C_DrvMsg("\t - Provisional ID = 0x%08x%02x \n", dev->port->TGTCHAR[i].PIDMSB, dev->port->TGTCHAR[i].PIDLSB);
                    //I3C_DrvMsg("\t - BCR, DCR       = 0x%08x \n", dev->port->TGTCHAR[i].BCRDCR);
                    //I3C_DrvMsg("\t - DADDR          = 0x%02x \n", dev->target_da[i]);
                }
                else
                {
                    remain_cnts = (((uint32_t)dev->cmd_response & I3C_CTRRESP_DATLEN_Msk) >> I3C_CTRRESP_DATLEN_Pos);
                    if(dev->target_count > remain_cnts)
                    {
                        dev->target_count = dev->target_index + (dev->target_count - remain_cnts);
                        I3C_DrvMsg("\t[ ENTDAA get valid Target, error code %d ]\n", (uint32_t)((dev->cmd_response&I3C_CTRRESP_ERRSTS_Msk) >> I3C_CTRRESP_ERRSTS_Pos));
                    }
                    else
                    {
                        dev->ibi_id = 0x0;
                        dev->target_count = dev->target_index; // ENTDAA fail, and restore target count
                        I3C_DrvMsg("\t[ ENTDAA no valid Target, error code %d ]\n", (uint32_t)((dev->cmd_response&I3C_CTRRESP_ERRSTS_Msk) >> I3C_CTRRESP_ERRSTS_Pos));
                    }

                    I3C_DrvMsg("\tResuming the Controller\n\n");
                    dev->port->DEVCTL |= I3C_DEVCTL_RESUME_Msk;
                }
            }
            else
            {
                I3C_DrvMsg("\n[ DRV ] Get Target Addr 0x%02x for CR request ...\n", ibi_id);

                dev->ibi_type = I3C_IBI_TYPE_CR;
                dev->ibi_id   = ibi_id;
                dev->ibi_len  = ibi_len;

                // accept Target CR request after Target DA matched
                if(dev->ibi_id != 0)
                {
                    // Check if Target's DA matched and send GETACCCR CCC
                    for(i=0; i<7; i++)
                    {
                        if(dev->target_da[i] == dev->ibi_id)
                            break;
                    }
                    if(i >= 7)
                        return -3; /* No Target's DA matched */

                    if(dev->ibi_id == dev->main_controller_da)
                    {
                        /* 
                            Device Role of Main Controller will return to Controller Role from Target Role.
                            Current active Controller no need to send DEFTGTS CCC.
                        */ 
                        I3C_DrvMsg("\t[ DRV ] Direct return to Controller\n");
                    }
                    else
                    {
                        /* Perform DEFTGTS CCC while "ibi_id is matched with valid Target DA" */
                        if(I3C_CtrDEFTGTS(dev) != I3C_STS_NO_ERR)
                            return -4; /* I3C_DEFTGTS error */
                    }

                    /* Add delay loop */
                    I3C_DelayLoop(SystemCoreClock/500);
                    
                    /* Perform GETACCCR CCC */
                    if(I3C_CtrGETACCCR(dev) != I3C_STS_NO_ERR)
                        return -5; /* I3C_DEFTGTS error */
                }

                // monitor bus owner status
                if(dev->port->INTSTS & I3C_INTSTS_BUSOWNER_UPDATED)
                {
                    dev->port->INTSTS  = I3C_INTSTS_BUSOWNER_UPDATED;
                    dev->intsts       |= I3C_INTSTS_BUSOWNER_UPDATED;

                    dev->port->DEVCTL |= I3C_DEVCTL_RESUME_Msk;
                    while((dev->port->DEVCTL & I3C_DEVCTL_RESUME_Msk) == I3C_DEVCTL_RESUME_Msk) {}

                    if(I3C_IS_CONTROLLER(dev->port))
                    {
                        I3C_DrvMsg("[ DRV ]I3C role change from Target to Controller\n");
                    }
                    else
                    {
                        I3C_DrvMsg("[ DRV ]I3C role change from Controller to Target\n");
                    }
                }
            }
        }
        else
        {
            /* For In-Band interrupt payload */
            p32Buf   = (uint32_t *)&dev->rx_buf[0];
            word_cnt = (ibi_len + 3) / 4;
            for(i=0; i<word_cnt; i++)
                p32Buf[i] = dev->port->IBIQUE;

            I3C_DrvMsg("\n[ DRV ] ibi_id: 0x%02x, len: %d\n\t", ibi_id, ibi_len);
            for(i=0; i<ibi_len; i++)
            {
                I3C_DrvMsg(" 0x%02x", dev->rx_buf[i]);
            }
            I3C_DrvMsg("\n");

            dev->ibi_type    = I3C_IBI_TYPE_TIR;
            dev->ibi_MDB     = dev->rx_buf[0];
            dev->ibi_id      = ibi_id;
            dev->ibi_len     = ibi_len - 1;
            dev->ibi_buf     = (uint8_t *)&dev->rx_buf[1];
            //dev->ibi_payload = p32Buf[0];
        }
    }

	return I3C_STS_NO_ERR;
}

/**
  * @brief  Parse Error Condition and Recovery in Controller
  */
void I3C_CtrHandleTransErr(I3C_DEVICE_T *dev)
{
    uint32_t    err_status;
    uint8_t     resume = FALSE;
    uint32_t    TID, LEN;

    I3C_DrvMsg("\n");
    
    err_status = (dev->cmd_response & I3C_CTRRESP_ERRSTS_Msk);
    TID        = (((uint32_t)dev->cmd_response & I3C_CTRRESP_TID_Msk) >> I3C_CTRRESP_TID_Pos);
    LEN        = (((uint32_t)dev->cmd_response & I3C_CTRRESP_DATLEN_Msk) >> I3C_CTRRESP_DATLEN_Pos);

    I3C_DrvMsg("[ DRV ] Controller error status 0x%08x.\n", err_status);
    switch(err_status)
    {
        case I3C_CTRRESP_CRC_ERR:
            I3C_DrvMsg("\t# Transfer Error: CRC Error occurred in the HDR-DDR or HDR-BT Read Transfer \n");
            resume = TRUE;
            break;
        case I3C_CTRRESP_PARITY_ERR:
            I3C_DrvMsg("\t# Transfer Error: Parity Error occurred in HDR Read Transfers \n");
            resume = TRUE;
            break;
        case I3C_CTRRESP_FRAME_ERR:
            I3C_DrvMsg("\t# Transfer Error: Frame Error occurred in HDR Read Transfers \n");;
            resume = TRUE;
            break;
        case I3C_CTRRESP_BRD_ADDR_NACK_ERR:
            if(dev->ibi_type == I3C_IBI_TYPE_HJ)
            {
                // set dev->target_count in I3C_CtrGetIBI()
            }
            else
            {
                I3C_DrvMsg("\t# Transfer Error: I3C Broadcast Address NACK Error \n");
                I3C_DrvMsg("\tTID %d, remaining device count %d\n", TID, LEN);
                if(dev->target_count >= LEN)
                    dev->target_count = dev->target_count - LEN;
            }
            resume = TRUE;
            break;
        case I3C_CTRRESP_ADDR_NACK_ERR:
            I3C_DrvMsg("\t# Transfer Error: Target Address NACK \n");
            resume = TRUE;
            break;
        case I3C_CTRRESP_FLOW_ERR:
            I3C_DrvMsg("\t# Transfer Error: Receive Buffer Overflow/Transmit Buffer Underflow in HDR Transfers \n");
            resume = TRUE;
            break;
        case I3C_CTRRESP_TRANS_ABORTED_ERR:
            I3C_DrvMsg("\t# Transfer Error: Transfer Aborted \n");
            resume = TRUE;
            break;
        case I3C_CTRRESP_WRITE_NACK_ERR:
            I3C_DrvMsg("\t# Transfer Error: I2C Target Write Data NACK Error \n");
            resume = TRUE;
            break;
        case I3C_CTRRESP_DA_MISMATCH_ERR:
            I3C_DrvMsg("\t# Transfer Error: Dynamic Address Mismatch Error in GETACCCR \n");
            resume = TRUE;
            break;
        case I3C_CTRRESP_PEC_ERR:
            I3C_DrvMsg("\t# Transfer Error: PEC byte validation error occurs in read transfers \n");
            resume = TRUE;
            break;
        case I3C_CTRRESP_HDRBT_ERR:
            I3C_DrvMsg("\t# Transfer Error: Delay Byte Count expiry in HDR-BT \n");
            resume = TRUE;
            break;
        default:
            I3C_DrvMsg("\t# Unkown Error \n");
            resume = TRUE;
            break;
	}

    /* Reset all FIFO */
    dev->port->RSTCTL = (I3C_RSTCTL_RESPRST_Msk | I3C_RSTCTL_RXRST_Msk | I3C_RSTCTL_TXRST_Msk);
    while(dev->port->RSTCTL != 0) {}

	/* Resume Controller if necessary */
	if(resume)
    {
		I3C_DrvMsg("\tResuming the Controller\n\n");
        dev->port->DEVCTL |= I3C_DEVCTL_RESUME_Msk;
	}
}

static void I3C_TgtResetAndResume(I3C_DEVICE_T *dev, uint8_t ExtCmdIdx)
{
    I3C_DrvMsg("\n");
    
    /* Reset all FIFO -> apply resume */
    dev->port->RSTCTL = (I3C_RSTCTL_RESPRST_Msk | I3C_RSTCTL_RXRST_Msk | I3C_RSTCTL_IBIQRST_Msk);
    while(dev->port->RSTCTL != 0) {}

    /* Reset Extended Command Transmit Data Buffer */
    if(ExtCmdIdx == 0xFF)
        dev->port->EXTDBRST = 0xFF;
    else
        dev->port->EXTDBRST = (1 << ExtCmdIdx);
    while(dev->port->EXTDBRST != 0) {}

    dev->port->DEVCTL |= I3C_DEVCTL_RESUME_Msk;
    while((dev->port->DEVCTL&I3C_DEVCTL_RESUME_Msk) != 0) {}
    I3C_DrvMsg("[ DRV ] Target Reset and Resume Completed.\n");
}

/**
  * @brief  Get Target Response Result in Controller Write Operation
  */
int32_t I3C_TgtRecv(I3C_DEVICE_T *dev)
{
    uint8_t             u8DataLen, u8TargetID, u8CmdSize, u8ErrSts;
    volatile uint16_t   i, RxBufIdx;
    volatile uint32_t   u32RespQ;
    uint32_t            *pu32RxBuf;

    I3C_DrvMsg("\n");
    
    dev->tgtRespQ[0].ErrSts = (uint8_t)I3C_TGTRESP_INITIAL_VALUE;

    if( !(dev->port->INTSTS & I3C_INTSTS_RESPRDY_Msk) )
        return I3C_STS_RESPQ_EMPTY;

    dev->tgtRespQ[0].RxBufAddr = 0;
    dev->tgtRespQ[0].RxBufLen  = 0;

    /* Step 1. Get and parse the first RespQ */
    u32RespQ = dev->port->RESPQUE;

    if( !(u32RespQ & I3C_TGTRESP_FIRST_Msk) )
        return I3C_STS_RESPQ_NOT_FIRST;

    u8DataLen  = ((u32RespQ & I3C_TGTRESP_DATLEN_Msk) >> I3C_TGTRESP_DATLEN_Pos);
    u8TargetID = ((u32RespQ & I3C_TGTRESP_TID_Msk) >> I3C_TGTRESP_TID_Pos);
    u8CmdSize  = ((u32RespQ & I3C_TGTRESP_CMDSIZE_Msk) >> I3C_TGTRESP_CMDSIZE_Pos);
    u8ErrSts   = ((u32RespQ & I3C_TGTRESP_ERRSTS_Msk) >> I3C_TGTRESP_ERRSTS_Pos);
    if(u8ErrSts != I3C_STS_NO_ERR)
    {
        //I3C_DrvMsg("\tError RESPQ: 0x%08x (TID: %d) (L-%d)\n", u32RespQ, u8TargetID, __LINE__);
        return (u32RespQ & I3C_TGTRESP_ERRSTS_Msk);
    }

    dev->tgtRespQ[0].IsDEFTGTS  = ((u32RespQ&I3C_TGTRESP_DEFTGTS_Msk)==0)? 0:1;
    dev->tgtRespQ[0].IsCCCWrite = ((u32RespQ&I3C_TGTRESP_CCCWR_Msk)==0)? 0:1;
    dev->tgtRespQ[0].TargetID = u8TargetID;
    dev->tgtRespQ[0].ErrSts   = u8ErrSts;
    dev->tgtRespQ[0].CmdSize  = u8CmdSize;
    dev->tgtRespQ[0].CmdWord  = 0;
    dev->tgtRespQ[0].CmdCCC   = 0;
    
    RxBufIdx  = 0;
    pu32RxBuf = (uint32_t *)dev->rx_buf;

    /*
        u8CmdSize 0x0: First RX is the first Data Word of the Transfer.
        u8CmdSize 0x1: Command Word in the First RX FIFO. Only byte-0 is valid for the HDR CMD code or the CCC code.
        u8CmdSize 0x2: Command Word in the First RX FIFO. Only byte-0 for the HDR CMD code or the CCC code and byte-1 for CCC Defining Byte.
        u8CmdSize 0x4: Command Word in the First RX FIFO. All 4-bytes are for HDR-BT Transfer Command words 0, 1, 2 and 3.
    */
    if(dev->is_DMA)
    {
        /* Use Rx PDAM */
        if(u8CmdSize != 0)
        {
            I3C_DrvMsg("[ DRV ] CCC/CMD code: 0x%08x\n", pu32RxBuf[RxBufIdx]);

            RxBufIdx++;
        }
    }
    else
    {
        if(u8CmdSize != 0)
        {
            pu32RxBuf[RxBufIdx] = dev->port->TXRXDAT;
            I3C_DrvMsg("[ DRV ] CCC/CMD code: 0x%08x\n", pu32RxBuf[RxBufIdx]);

            RxBufIdx++;
        }

        for(i=0; i<((u8DataLen + 3) / 4); i++, RxBufIdx++)
        {
            pu32RxBuf[RxBufIdx] = dev->port->TXRXDAT;
            //if( (u32RespQ & I3C_TGTRESP_CCCWR_Msk) ) // for CCC Write operation
            //    I3C_DrvMsg("\tRX: 0x%08x\n", pu32RxBuf[RxBufIdx]);
        }
    }
    I3C_DrvMsg("[ DRV ] RESPQ: 0x%08x (TID: %d) (#0)\n", u32RespQ, u8TargetID);

    if(u8CmdSize != 0)
    {
        if(u8CmdSize == 2)
        {
            dev->tgtRespQ[0].CmdWord = (pu32RxBuf[0] & 0xFFFF);
            dev->tgtRespQ[0].CmdCCC = dev->rx_buf[0];
        }
        else if(u8CmdSize == 4)
        {
            dev->tgtRespQ[0].CmdWord = pu32RxBuf[0];
            dev->tgtRespQ[0].CmdCCC = I3C_CCC_HDRBT;
        }
        else            
        {
            // u8CmdSize 1 or Others
            dev->tgtRespQ[0].CmdWord = (pu32RxBuf[0] & 0xFF);
            dev->tgtRespQ[0].CmdCCC = dev->rx_buf[0];
        }
        dev->tgtRespQ[0].RxBufAddr = (uint32_t)(&pu32RxBuf[1]); // the First Data entry in the RX FIFO for the transfer's encoded command word
    }
    else
    {
        dev->tgtRespQ[0].RxBufAddr = (uint32_t)(&pu32RxBuf[0]);
    }
    dev->tgtRespQ[0].RxBufLen = u8DataLen;

    if( (u32RespQ & I3C_TGTRESP_LAST_Msk) )
        return I3C_STS_NO_ERR;


    /* Step 2. Parse the remains RespQ(s) */
    while(dev->port->INTSTS & I3C_INTSTS_RESPRDY_Msk)
    {
        u32RespQ = dev->port->RESPQUE;

        u8DataLen  = ((u32RespQ & I3C_TGTRESP_DATLEN_Msk) >> I3C_TGTRESP_DATLEN_Pos);
        u8TargetID = ((u32RespQ & I3C_TGTRESP_TID_Msk) >> I3C_TGTRESP_TID_Pos);
        //u8CmdSize  = ((u32RespQ & I3C_TGTRESP_CMDSIZE_Msk) >> I3C_TGTRESP_CMDSIZE_Pos);
        u8ErrSts   = ((u32RespQ & I3C_TGTRESP_ERRSTS_Msk) >> I3C_TGTRESP_ERRSTS_Pos);
        if(u8ErrSts != I3C_STS_NO_ERR)
        {
            //I3C_DrvMsg("\tError RESPQ: 0x%08x (TID: %d) (L-%d)\n", u32RespQ, u8TargetID, __LINE__);
            return (u32RespQ & I3C_TGTRESP_ERRSTS_Msk);
        }

        if(dev->is_DMA)
        {
            /* Use PDAM RX */
        }
        else
        {
            for(i=0; i<((u8DataLen + 3) / 4); i++, RxBufIdx++)
            {
                pu32RxBuf[RxBufIdx] = dev->port->TXRXDAT;
                //if( (u32RespQ & I3C_TGTRESP_CCCWR_Msk) ) // for CCC Write operation
                //    I3C_DrvMsg("\tRX: 0x%08x\n", pu32RxBuf[RxBufIdx]);
            }
        }
        I3C_DrvMsg("[ DRV ] RESPQ: 0x%08x (TID: %d) (#1)\n", u32RespQ, u8TargetID);

        dev->tgtRespQ[0].RxBufLen += u8DataLen;

        if( (u32RespQ & I3C_TGTRESP_LAST_Msk) )
            return I3C_STS_NO_ERR;
    }

    return I3C_STS_NO_ERR;
}

/**
  * @brief  Prepare Target Extended Transmit Command Data for Controller Read Operation
  */
int32_t I3C_TgtSend(I3C_DEVICE_T *dev)
{
    volatile uint32_t i;
    uint8_t target_idx = dev->target_index;
    uint8_t cmd_idx    = dev->target_extcmd;
    uint8_t ccc_code   = dev->ccc_code;
    uint8_t def_byte   = (dev->is_DB==TRUE)? dev->DB:0x0;
    uint32_t txlen     = dev->tx_len;
    uint32_t *p32Buf;

    I3C_DrvMsg("\n");

    I3C_DrvMsg("[ DRV ] I3C_TgtSend. CCC 0x%x.\n", dev->ccc_code);
    
    /* Reset EXT CMD Transmit Data Buffer first */
    dev->port->EXTDBRST = ((1 << cmd_idx));
    while(dev->port->EXTDBRST != 0) {}

    /* Push data to EXT CMD TX Buffer */
    p32Buf = (uint32_t *)dev->tx_buf;
    if(dev->is_DMA)
    {
        /* Use Tx PDAM */
        I3C_ConfigTxDMA(dev, (uint32_t)(p32Buf), (uint32_t)&dev->port->EXTDAT[cmd_idx], txlen);
    }
    else
    {
        for(i=0; i<((txlen+3) / 4); i++)
            dev->port->EXTDAT[cmd_idx] = p32Buf[i];
    }

    if(ccc_code == 0)
    {
        /* For SDR read transfer */

        dev->port->EXTCMD[cmd_idx].WORD2 = (txlen << I3C_TGTCMDW2_DATALEN_Pos);

        dev->port->EXTCMD[cmd_idx].WORD3 = 0; // For HDR-BT Transfer Read command

        dev->port->EXTCMD[cmd_idx].WORD1 =
            ( (target_idx << I3C_TGTCMDW1_ADDRIDX_Pos) |
              I3C_TGTCMDW1_CMDVLD_Msk |
              I3C_TGTCMDW1_FINITEDL_Msk |
              I3C_TGTCMDW1_CMDEN );
    }
    else
    {
        /* For CCC, HDR-DDR and BT read transfer */

        if(dev->is_HDRBT_cmd == TRUE)
        {
            I3C_DrvMsg("[ DRV ] EXTCMD WORD2 - 0x%08x.\n", dev->HDRBT_cmd);
            dev->port->EXTCMD[cmd_idx].WORD2 = dev->HDRBT_cmd;

            I3C_DrvMsg("[ DRV ] EXTCMD WORD3 - 0x%08x.\n", (txlen << I3C_TGTCMDW3_BTDL_Pos));
            dev->port->EXTCMD[cmd_idx].WORD3 = (txlen << I3C_TGTCMDW3_BTDL_Pos);
        }
        else
        {
            if(dev->is_HDR_cmd == TRUE)
                ccc_code = dev->HDR_cmd;

            dev->port->EXTCMD[cmd_idx].WORD2 =
                ( (txlen << I3C_TGTCMDW2_DATALEN_Pos) |
                  (def_byte << I3C_TGTCMDW2_DEFBYTE_Pos) |
                  (ccc_code << I3C_TGTCMDW2_CCCHEAD_Pos) );

            dev->port->EXTCMD[cmd_idx].WORD3 = 0; // For HDR-BT Transfer Read command
        }
               
        I3C_DrvMsg("[ DRV ] EXTCMD WORD1 - 0x%08x.\n", (uint32_t)( (target_idx << I3C_TGTCMDW1_ADDRIDX_Pos) |
                                                                ((dev->is_HDR_cmd==TRUE)? 0x0:((dev->is_HDRBT_cmd==TRUE)? 0x0:I3C_TGTCMDW1_CCC_Msk)) |
                                                                I3C_TGTCMDW1_CMDVLD_Msk |
                                                                ((dev->is_HDRBT_cmd==TRUE)? I3C_TGTCMDW1_BTDLEN_Msk:0x0) |
                                                                I3C_TGTCMDW1_FINITEDL_Msk |
                                                                I3C_TGTCMDW1_CMDEN ));
        dev->port->EXTCMD[cmd_idx].WORD1 =
            ( (target_idx << I3C_TGTCMDW1_ADDRIDX_Pos) |
              ((dev->is_HDR_cmd==TRUE)? 0x0:((dev->is_HDRBT_cmd==TRUE)? 0x0:I3C_TGTCMDW1_CCC_Msk)) |
              I3C_TGTCMDW1_CMDVLD_Msk |
              ((dev->is_HDRBT_cmd==TRUE)? I3C_TGTCMDW1_BTDLEN_Msk:0x0) |
              I3C_TGTCMDW1_FINITEDL_Msk |
              I3C_TGTCMDW1_CMDEN );
    }

    /*
        User need to parse Extended Command Status in EXTCMD.WORD1[15:8] while EXTFINS set to 1 (EXTCMD Has Finished Status).
        Refer to I3C_TgtGetSendResult(...) API.
    */

    dev->ccc_code     = 0x0;
    dev->is_DB        = FALSE;
    dev->is_HDR_cmd   = FALSE;
    dev->is_HDRBT_cmd = FALSE;

	return I3C_STS_NO_ERR;
}

/**
  * @brief  Get Target Extended Transmit Command Result in Controller Read Operation
  */
int32_t I3C_TgtGetSendResult(I3C_DEVICE_T *dev)
{
    volatile uint32_t i, u32CMDDoneBitMsk;
    uint32_t CmdRegVal[3], err_sts, dat_len, dev_sts;

    I3C_DrvMsg("\n");

    if( !(dev->port->INTSTS & I3C_INTSTS_EXTFINS_Msk) )
    {
        return I3C_STS_INVALID_STATE;
    }

    u32CMDDoneBitMsk = dev->port->EXTCMDFS;
    dev->extcmdsts = u32CMDDoneBitMsk;

    for(i=0; i<8; i++)
    {
        if(u32CMDDoneBitMsk & (1<<i))
        {
            CmdRegVal[0] = dev->port->EXTCMD[i].WORD1;
            CmdRegVal[1] = dev->port->EXTCMD[i].WORD2;
            CmdRegVal[2] = dev->port->EXTCMD[i].WORD3;

            I3C_DrvMsg("[ DRV ] EXT CMD %d Reg:\n", i);
            I3C_DrvMsg("\tReg 0: 0x%08x\n", CmdRegVal[0]);
            I3C_DrvMsg("\tReg 1: 0x%08x\n", CmdRegVal[1]);
            I3C_DrvMsg("\tReg 2: 0x%08x\n", CmdRegVal[2]);
            I3C_DrvMsg("\t====================\n");

            err_sts = (CmdRegVal[0] & I3C_TGTCMDW1_ERRSTS_Msk);
            dat_len = ((CmdRegVal[1] & I3C_TGTCMDW2_DATALEN_Msk) >> I3C_TGTCMDW2_DATALEN_Pos);
            if(err_sts == I3C_TGTCMDSTS_NO_ERR)
            {
                I3C_DrvMsg("\t[ EXTCMD no ERROR ]\n");
                I3C_DrvMsg("\t[ %s Read ]\n", ((CmdRegVal[0]&I3C_TGTCMDW1_CCC_Msk)==0)? "Private":"CCC Direct");

                if(CmdRegVal[0] & I3C_TGTCMDW1_BTDLEN_Msk)
                {
                    I3C_DrvMsg("\t[ HDR-BT transfer ]\n");
                    dat_len = ((CmdRegVal[2] & I3C_TGTCMDW3_BTDL_Msk) >> I3C_TGTCMDW3_BTDL_Pos);
                }

                if(CmdRegVal[0] & I3C_TGTCMDW1_FINITEDL_Msk)    //Finite length transfer
                {
                    I3C_DrvMsg("\t[ Remains %d-bytes ]\n", dat_len);
                }
                else
                {
                    I3C_DrvMsg("\t[ Transfer %d-bytes ]\n", dat_len);
                }
            }
            else
            {
                I3C_DrvMsg("\t[ EXTCMD ERROR Status : 0x%08x ] (CMD W1: 0x%08x)\n", err_sts, CmdRegVal[0]);
                switch(err_sts)
                {
                    case I3C_TGTCMDSTS_CRC_ERR:
                        I3C_DrvMsg("\t# CRC Error \n");
                        break;
                    case I3C_TGTCMDSTS_PARITY_ERR:
                        I3C_DrvMsg("\t# Parity Error \n");
                        break;
                    case I3C_TGTCMDSTS_FRAME_ERR:
                        I3C_DrvMsg("\t# Frame Error \n");;
                        break;
                    case I3C_TGTCMDSTS_FLOW_ERR:
                        I3C_DrvMsg("\t# Underflow/Overflow Error \n");
                        break;
                    case I3C_TGTCMDSTS_SDA_STUCK_ERR:
                        I3C_DrvMsg("\t# SDA Stuck Error \n");
                        break;
                    case I3C_TGTCMDSTS_CONTROLLER_TERMINATE_ERR:
                        I3C_DrvMsg("\t# Controller early terminal Error \n");
                        break;
                    case I3C_TGTCMDSTS_PEC_ERR:
                        I3C_DrvMsg("\t# PEC Error \n");
                        break;
                    default:
                        I3C_DrvMsg("# Unkown Error \n");
                        break;
                }

                dev_sts = dev->port->CCCDEVS;
                I3C_DrvMsg("\t[  Device Operating Status : 0x%08x ]\n", dev_sts);
                if(dev_sts != 0)
                {
                    if(dev_sts & I3C_CCCDEVS_PROTERR_Msk)
                    {
                        I3C_DrvMsg("\t# Protocol Error \n");
                    }

                    if(dev_sts & I3C_CCCDEVS_UDFERR_Msk)
                    {
                        I3C_DrvMsg("\t# Underflow Error \n");
                    }

                    if(dev_sts & I3C_CCCDEVS_OVFERR_Msk)
                    {
                        I3C_DrvMsg("\t# Overflow Error \n");
                    }

                    if(dev_sts & I3C_CCCDEVS_DATNRDY_Msk)
                    {
                        I3C_DrvMsg("\t# Data Not Ready \n");
                    }

                    if(dev_sts & I3C_CCCDEVS_BFNAVAIL_Msk)
                    {
                        I3C_DrvMsg("\t# Buffer Not Available \n");
                    }

                    if(dev_sts & I3C_CCCDEVS_FRAMEERR_Msk)
                    {
                        I3C_DrvMsg("\t# Frame Error \n");
                    }
                    
                    if(dev_sts & I3C_CCCDEVS_SLVBUSY_Msk)
                    {
                        I3C_DrvMsg("\t# Target Busy \n");
                        I3C_TgtResetAndResume(dev, i);
                    }
                }

                I3C_DrvMsg("\n");
            }
        }
    }

    I3C_DrvMsg("\n");

	return I3C_STS_NO_ERR;
}

/**
  * @brief  Issue In-Band Interrupt Event in Target
  */
int32_t I3C_TgtIssueIBI(I3C_DEVICE_T *dev)
{
    I3C_DrvMsg("\n");

    if((dev->port->SLVEVNTS & I3C_SLVEVNTS_SIREN_Msk) == 0)
    {
        I3C_DrvMsg("[ DRV ] ERROR. Target Interrupt Request NOT Enabled. \n\n");
        return I3C_STS_INVALID_INPUT;
    }
    if((dev->port->SIR & (I3C_SIR_EN_Msk | I3C_SIR_MR_Msk)) != 0)
    {
        I3C_DrvMsg("[ DRV ] ERROR. SIR pending, 0x%x. \n\n", dev->port->SIR);
        return I3C_STS_INVALID_INPUT;
    }
    if(dev->target_index > 4)
    {
        I3C_DrvMsg("[ DRV ] ERROR. Invalid Target index, 0x%x. \n\n", dev->target_index);
        return I3C_STS_INVALID_INPUT;
    }

    switch(dev->ibi_type)
    {
        case I3C_IBI_TYPE_TS:
            /* Timestamp Counter Auto Mode Enable */
            dev->port->DEVCTL |= (I3C_DEVCTL_TSCAUTO_Msk);
        case I3C_IBI_TYPE_TIR:
            break;

        case I3C_IBI_TYPE_CR:
            if((dev->port->SLVEVNTS & I3C_SLVEVNTS_MREN_Msk) == 0)
            {
                I3C_DrvMsg("[ DRV ] ERROR. Controller Request NOT Enabled.\n\n");
                return I3C_STS_INVALID_INPUT;
            }

            /* Support "ACK GETACCCR CCC" */
            dev->port->DEVCTLE &= ~(I3C_DEVCTLE_MRACKCTL_Msk);

            /* [2:1] 1 = Pull SDA line low and release SDA after sampling SCL low (pulled by Controller). Used for CE3 recovery during Controller Handover procedure. */
            dev->port->SIR = ((dev->target_index << I3C_SIR_TGTIDX_Pos) | (0 << I3C_SIR_CTL_Pos));

            /* Trigger MR request */
            dev->port->SIR |= I3C_SIR_MR_Msk;

            /* Bus Owner Updated event in Target's IRQ Handler */

            /* The Controller sends GETACCCR CCC (Get Accept Controller Role) while received Controller request from Target */

            return I3C_STS_NO_ERR;

            break;

        default:
            return I3C_STS_INVALID_INPUT;
            break;
    }

    /* Check if payload length > 4-bytes */
    if(dev->ibi_len > 4)
        return I3C_STS_INVALID_INPUT;

    /* Program IBI payload data, payload length and MDB */
    dev->port->SIR    = ((dev->ibi_len << I3C_SIR_DATLEN_Pos) | (dev->ibi_MDB << I3C_SIR_MDB_Pos) | (0 << I3C_SIR_CTL_Pos));
    dev->port->SIRDAT = dev->ibi_payload;

    /* Trigger IBI request */
    /* SIR EN bit be cleared automatically after the Controller accepts the IBI request or Target unable to issue the IBI request */
    if(dev->ibi_type == I3C_IBI_TYPE_TS)
    {
        dev->port->SIR |= ((dev->target_index << I3C_SIR_TGTIDX_Pos) | I3C_SIR_EN_Msk | I3C_SIR_TS_Msk);
    }
    else
    {
        dev->port->SIR |= ((dev->target_index << I3C_SIR_TGTIDX_Pos) | I3C_SIR_EN_Msk);
    }


	return I3C_STS_NO_ERR;
}

/**
  * @brief  Parse Error Condition and Recovery in Target
  */
void I3C_TgtHandleTransErr(I3C_DEVICE_T *dev)
{
    uint32_t dev_status, err_status;
    uint8_t resume = FALSE;

    I3C_DrvMsg("\n");

    dev_status = dev->port->CCCDEVS;

    I3C_DrvMsg("[ DRV ] Target device status 0x%08x.\n", dev_status);
	if(dev_status)
    {
		if(dev_status & I3C_CCCDEVS_SLVBUSY_Msk)
        {
			I3C_DrvMsg("\t#Target busy status\n");
			resume = TRUE;
		}
        if (dev_status & I3C_CCCDEVS_FRAMEERR_Msk)
        {
            I3C_DrvMsg("\t# Dev frame error\n");
        }

        if (dev_status & I3C_CCCDEVS_BFNAVAIL_Msk)
        {
            I3C_DrvMsg("\t# Dev buffer not available\n");
        }

        if (dev_status & I3C_CCCDEVS_DATNRDY_Msk)
        {
            I3C_DrvMsg("\t# Dev data not ready\n");
        }

        if (dev_status & I3C_CCCDEVS_OVFERR_Msk)
        {
            I3C_DrvMsg("\t# Dev overflow error\n");
        }

        if (dev_status & I3C_CCCDEVS_UDFERR_Msk)
        {
            I3C_DrvMsg("\t# Dev underflow error\n");
        }

        if (dev_status & I3C_CCCDEVS_PROTERR_Msk)
        {
            I3C_DrvMsg("\t# Dev protocol error\n");
        }

		I3C_DrvMsg("\t# Activity Mode:[0x%x] / Pending Interrupt:[0x%x]",
            (uint32_t)((dev_status&I3C_CCCDEVS_ACTMODE_Msk) >> I3C_CCCDEVS_ACTMODE_Pos),
            (uint32_t)((dev_status&I3C_CCCDEVS_PENDINT_Msk) >> I3C_CCCDEVS_PENDINT_Pos));

        /* Resume Target if necessary */
        if(resume)
        {
            I3C_DrvMsg("\tResuming the Target\n\n");

            dev->port->DEVCTL |= I3C_DEVCTL_RESUME_Msk;
        }
	}

    err_status = dev->tgtRespQ[0].ErrSts;
    I3C_DrvMsg("[ DRV ] Target response error status 0x%08x.\n", err_status);
    switch(err_status)
    {
        case I3C_TGTRESP_CRC_ERR:
            I3C_DrvMsg("\t# Transfer Error: CRC Error (Controller write in DDR mode) \n");
            break;
        case I3C_TGTRESP_PARITY_ERR:
            I3C_DrvMsg("\t# Transfer Error: Parity Error (Controller write in both DDR and SDR mode) \n");
            break;
        case I3C_TGTRESP_FRAME_ERR:
            I3C_DrvMsg("\t# Transfer Error: Frame Error (Controller write in HDR mode) \n");;
            break;
        case I3C_TGTRESP_FLOW_ERR:
            I3C_DrvMsg("\t# Transfer Error: Underflow/Overflow Error \n");
            break;
        case I3C_TGTRESP_SDA_STUCK_ERR:
            I3C_DrvMsg("\t# Transfer Error: SDA Stuck Error \n");
            break;
        case I3C_TGTRESP_CONTROLLER_TERMINATE_ERR:
            I3C_DrvMsg("\t# Transfer Error: Controller early terminal Error \n");
            break;
        case I3C_TGTRESP_PEC_ERR:
            I3C_DrvMsg("\t# Transfer Error: PEC Error \n");
            break;
        default:
            I3C_DrvMsg("\t# Unkown Error \n");
            break;
	}

    I3C_DrvMsg("\n");
}

/**
  * @brief  Handle Target Interrupt Status
  */
void I3C_TgtHandleIntSts(I3C_DEVICE_T *dev)
{
    volatile uint32_t i, idx;

    I3C_DrvMsg("\n");

    if(dev->intsts & I3C_INTSTS_DA_ASSIGNED)
    {
        /* Main Target Address */
        if(dev->port->DEVADDR & I3C_DEVADDR_DAVALID_Msk)
        {
            I3C_DrvMsg("[ DRV ] Set to I3C mode, DA: 0x%02x.\n", (uint8_t)((dev->port->DEVADDR&I3C_DEVADDR_DA_Msk) >> I3C_DEVADDR_DA_Pos));
            dev->target_da[0] = (uint8_t)((dev->port->DEVADDR&I3C_DEVADDR_DA_Msk) >> I3C_DEVADDR_DA_Pos);
        }
        else
        {
            I3C_DrvMsg("[ DRV ] Set to I2C mode, SA: 0x%02x.\n", (uint8_t)((dev->port->DEVADDR&I3C_DEVADDR_SA_Msk) >> I3C_DEVADDR_SA_Pos));
            dev->target_da[0] = 0x0;
            dev->target_sa[0] = (uint8_t)((dev->port->DEVADDR&I3C_DEVADDR_SA_Msk) >> I3C_DEVADDR_SA_Pos);
        }

        /* Virtual Target 1~4 Address */
        for(i=0; i<4; i++)
        {
            idx = i + 1;
            if(dev->port->VTGTCFG[i].ADDR & I3C_VTGTADDR_DAVALID_Msk)
            {
                I3C_DrvMsg("[ DRV ] Set to I3C mode, DA: 0x%02x. (VT%d)\n", (uint8_t)((dev->port->VTGTCFG[i].ADDR&I3C_VTGTADDR_DADDR_Msk)>>I3C_VTGTADDR_DADDR_Pos), idx);
                dev->target_da[idx] = (uint8_t)((dev->port->VTGTCFG[i].ADDR&I3C_VTGTADDR_DADDR_Msk) >> I3C_VTGTADDR_DADDR_Pos);
            }
            else
            {
                I3C_DrvMsg("[ DRV ] Set to I2C mode, SA: 0x%02x. (VT%d)\n", (uint8_t)((dev->port->VTGTCFG[i].ADDR&I3C_VTGTADDR_SADDR_Msk)>>I3C_VTGTADDR_SADDR_Pos), idx);
                dev->target_da[idx] = 0;
                dev->target_sa[idx] = (uint8_t)((dev->port->VTGTCFG[i].ADDR&I3C_VTGTADDR_SADDR_Msk) >> I3C_VTGTADDR_SADDR_Pos);
            }
        }
    }

    if(dev->intsts & I3C_INTSTS_GRPDA_ASSIGNED)
    {
        /* Group Address 0~3 */
        for(i=0; i<4; i++)
        {
            idx = i + 5;
            if((dev->port->GRPASTS[i] & (0x1F<<I3C_GRPASTS_GRPAVLD0_Pos)) != 0 )
            {
                dev->target_da[idx] = (uint8_t)(dev->port->GRPASTS[i] & I3C_GRPASTS_GRPADDR_Msk);
                I3C_DrvMsg("[ DRV ] Group-%d Addr 0x%02x ... Enabled to 0x%x.\n", i, dev->target_da[idx], (dev->port->GRPASTS[i]>>I3C_GRPASTS_GRPAVLD0_Pos));
            }
            else
            {
                dev->target_da[idx] = 0;
                I3C_DrvMsg("[ DRV ] Group-%d Addr 0x%02x ... Disabled.\n", i, dev->target_da[idx]);
            }
        }
    }

    if(dev->intsts & I3C_INTSTS_CCC_UPDATED)
    {
        if(dev->port->SLVEVNTS & I3C_SLVEVNTS_MWLUPD_Msk)
        {
            dev->port->SLVEVNTS = I3C_SLVEVNTS_MWLUPD_Msk;
            I3C_DrvMsg("[ DRV ] Updated MWL to 0x%x.\n", (uint32_t)((dev->port->SLVMXLEN&I3C_SLVMXLEN_MWL_Msk) >> I3C_SLVMXLEN_MWL_Pos));
        }
        else if(dev->port->SLVEVNTS & I3C_SLVEVNTS_MRLUPD_Msk)
        {
            dev->port->SLVEVNTS = I3C_SLVEVNTS_MRLUPD_Msk;
            I3C_DrvMsg("[ DRV ] Updated MRL to 0x%x. IBI len %d.\n",
                (uint32_t)((dev->port->SLVMXLEN&I3C_SLVMXLEN_MRL_Msk) >> I3C_SLVMXLEN_MRL_Pos),
                (uint32_t)((dev->port->DEVCTL&I3C_DEVCTL_IBIPSIZE_Msk) >> I3C_DEVCTL_IBIPSIZE_Pos));

            I3C_TgtResetAndResume(dev, 0xFF);
        }
        else
        {
            I3C_DrvMsg("[ DRV ] Updated - ENTAS%d.\n", (uint32_t)((dev->port->SLVEVNTS&I3C_SLVEVNTS_ACTSTSTS_Msk) >> I3C_SLVEVNTS_ACTSTSTS_Pos));
            I3C_DrvMsg("[ DRV ] Updated - HJEN %d.\n", (uint32_t)((dev->port->SLVEVNTS&I3C_SLVEVNTS_HJEN_Msk) >> I3C_SLVEVNTS_HJEN_Pos));
            I3C_DrvMsg("[ DRV ] Updated - SIREN %d.\n", (uint32_t)((dev->port->SLVEVNTS&I3C_SLVEVNTS_SIREN_Msk) >> I3C_SLVEVNTS_SIREN_Pos));
        }
    }

    I3C_DrvMsg("\n");
}

/** @} end of group I3C_EXPORTED_FUNCTIONS */
/** @} end of group I3C_Driver */
/** @} end of group Standard_Driver */
