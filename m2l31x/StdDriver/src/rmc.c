/**************************************************************************//**
 * @file     RMC.c
 * @version  V1.00
 * @brief    M2L31 series RRAM Memory Controller driver source file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2016-2020 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/

#include <stdio.h>

#include "NuMicro.h"


/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup RMC_Driver RMC Driver
  @{
*/


/** @addtogroup RMC_EXPORTED_FUNCTIONS RMC Exported Functions
  @{
*/

int32_t  g_RMC_i32ErrCode;

/**
  * @brief    Disable ISP Functions
  *
  * @param    None
  *
  * @return   None
  *
  * @details  This function will clear ISPEN bit of ISPCON to disable ISP function
  *
  */
void RMC_Close(void)
{
    RMC->ISPCTL &= ~RMC_ISPCTL_ISPEN_Msk;
}

/**
  * @brief     Config XOM Region
  * @param[in] u32XomNum    The XOM number(0~3)
  * @param[in] u32XomBase   The XOM region base address.
  * @param[in] u8XomPage   The XOM page number of region size.
  *
  * @retval   0   Success
  * @retval   1   XOM is has already actived.
  * @retval   -1  Program failed.
  * @retval   -2  Invalid XOM number.
  *
  * @details  Program XOM base address and XOM size(page)
  */
int32_t RMC_ConfigXOM(uint32_t u32XomNum, uint32_t u32XomBase, uint8_t u8XomPage)
{
    int32_t  ret = 0;

    g_RMC_i32ErrCode = 0;

    if(u32XomNum >= 4UL)
    {
        ret = -2;
    }

    if(ret == 0)
    {
        ret = RMC_GetXOMState(u32XomNum);
    }

    if(ret == 0)
    {
        ret = g_RMC_i32ErrCode = RMC_Write(RMC_XOM_BASE + (u32XomNum * 0x10u),u32XomBase);
        if(g_RMC_i32ErrCode == 0)
            ret = g_RMC_i32ErrCode = RMC_Write(RMC_XOM_BASE + (u32XomNum * 0x10u + 0x04u),u8XomPage);

        if(g_RMC_i32ErrCode == 0)
            ret = g_RMC_i32ErrCode = RMC_Write(RMC_XOM_BASE + (u32XomNum * 0x10u + 0x08u),0);

    }
    return ret;
}

/**
  * @brief  Execute Erase XOM Region
  *
  * @param[in]  u32XomNum  The XOMRn(n=0~3)
  *
  * @return   XOM erase success or not.
  * @retval    0  Success
  * @retval   -1  Erase failed
  * @retval   -2  Invalid XOM number.
  *
  * @details Execute RMC_ISPCMD_PAGE_ERASE command to erase XOM.
  */
int32_t RMC_EraseXOM(uint32_t u32XomNum)
{
    uint32_t u32Addr = 0UL;
    int32_t i32Active, err = 0;
    uint32_t  tout;
    g_RMC_i32ErrCode = 0;
    if(u32XomNum >= 5UL)
    {
        err = -2;
    }

    if(err == 0)
    {
        i32Active = RMC_GetXOMState(u32XomNum);

        RMC->ISPCTL = RMC->ISPCTL & ~BIT8;
        if(i32Active)
        {
            switch(u32XomNum)
            {
            case 0u:
                u32Addr = (RMC->XOMR0STS & 0xFFFFFF00u) >> 8u;
                break;
            case 1u:
                u32Addr = (RMC->XOMR1STS & 0xFFFFFF00u) >> 8u;
                break;
            case 2u:
                u32Addr = (RMC->XOMR2STS & 0xFFFFFF00u) >> 8u;
                break;
            case 3u:
                u32Addr = (RMC->XOMR3STS & 0xFFFFFF00u) >> 8u;
                break;
            case 4u:
                u32Addr = (RMC->XOMR0STS & 0xFFFFFF00u) >> 8u;
                RMC->ISPCMD = RMC_ISPCMD_PAGE_ERASE;
                RMC->ISPADDR = u32Addr;
                RMC->ISPDAT = 0x0u;
                RMC->ISPTRG = 0x1u;
                goto test;
                break;
            default:
                break;
            }
            RMC->ISPCMD = RMC_ISPCMD_PAGE_ERASE;
            RMC->ISPADDR = u32Addr;
            RMC->ISPDAT = 0x55aa03u;
            RMC->ISPTRG = 0x1u;
test:
#if ISBEN
            __ISB();
#endif
            tout = RMC_TIMEOUT_ERASE;
            while ((--tout > 0) && RMC->ISPTRG) {}
            if (tout == 0)
                err = -1;

            /* Check ISPFF flag to know whether erase OK or fail. */
            if(RMC->ISPCTL & RMC_ISPCTL_ISPFF_Msk)
            {
                RMC->ISPCTL |= RMC_ISPCTL_ISPFF_Msk;
                printf(" * ISPFF is set\n");
                err = -1;
            }
        }
        else
        {
            err = -1;
        }
    }
    return err;
}

/**
  * @brief  Check the XOM is actived or not.
  *
  * @param[in] u32XomNum    The xom number(0~3).
  *
  * @retval   1   XOM is actived.
  * @retval   0   XOM is not actived.
  * @retval   -2  Invalid XOM number.
  *
  * @details To get specify XOMRn(n=0~3) active status
  */
int32_t RMC_GetXOMState(uint32_t u32XomNum)
{
    uint32_t u32act;
    int32_t  ret = 0;

    if(u32XomNum >= 4UL)
    {
        ret = -2;
    }

    if(ret >= 0)
    {
        u32act = (((RMC->XOMSTS) & 0xful) & (1ul << u32XomNum)) >> u32XomNum;
        ret = (int32_t)u32act;
    }
    return ret;
}

/**
  * @brief Enable RMC ISP function
  * @return None
  */
void RMC_Open(void)
{
    RMC->ISPCTL |=  RMC_ISPCTL_ISPEN_Msk;
}


/**
  * @brief Execute RMC_ISPCMD_READ command to read a word from flash.
  * @param[in]  u32Addr Address of the flash location to be read.
  *             It must be a word aligned address.
  * @return The word data read from specified flash address.
  */
uint32_t RMC_Read(uint32_t u32Addr)
{
    uint32_t  tout;

    g_RMC_i32ErrCode = 0;
    RMC->ISPCTL = RMC->ISPCTL & ~BIT8;
    RMC->ISPCMD = RMC_ISPCMD_READ;
    RMC->ISPADDR = u32Addr;
    RMC->ISPTRG = RMC_ISPTRG_ISPGO_Msk;
    tout = RMC_TIMEOUT_READ;
    while ((--tout > 0) && (RMC->ISPTRG & RMC_ISPTRG_ISPGO_Msk)) {}
    if (tout == 0)
    {
        g_RMC_i32ErrCode = -1;
        return 0xFFFFFFFF;
    }
    if(RMC->ISPCTL & RMC_ISPCTL_ISPFF_Msk)
    {
        RMC->ISPCTL |= RMC_ISPCTL_ISPFF_Msk;
//        printf(" * ISPFF is set\n");
        g_RMC_i32ErrCode = -1;
        return 0xFFFFFFFF;
    }
    return RMC->ISPDAT;
}

/**
  * @brief    Get the base address of Data Flash if enabled.
  * @retval   The base address of Data Flash
  */
uint32_t RMC_ReadDataFlashBaseAddr(void)
{
    return RMC->DFBA;
}

/**
  * @brief      Set boot source from LDROM or APROM after next software reset
  * @param[in]  i32BootSrc
  *                1: Boot from LDROM
  *                0: Boot from APROM
  * @return    None
  * @details   This function is used to switch APROM boot or LDROM boot. User need to call
  *            RMC_SetBootSource to select boot source first, then use CPU reset or
  *            System Reset Request to reset system.
  */
void RMC_SetBootSource(int32_t i32BootSrc)
{
    if(i32BootSrc)
    {
        RMC->ISPCTL |= RMC_ISPCTL_BS_Msk; /* Boot from LDROM */
    }
    else
    {
        RMC->ISPCTL &= ~RMC_ISPCTL_BS_Msk;/* Boot from APROM */
    }
}

/**
  * @brief Get the current boot source.
  * @return The current boot source.
  * @retval   0  Is boot from APROM.
  * @retval   1  Is boot from LDROM.
  */
int32_t RMC_GetBootSource (void)
{
    int32_t  ret = 0;

    if (RMC->ISPCTL & RMC_ISPCTL_BS_Msk)
    {
        ret = 1;
    }

    return ret;
}

/**
  * @brief Execute ISP RMC_ISPCMD_PROGRAM to program a word to flash.
  * @param[in]  u32Addr Address of the flash location to be programmed.
  *             It must be a word aligned address.
  * @param[in]  u32Data The word data to be programmed.
  * @return None
  */
int32_t RMC_Write(uint32_t u32Addr, uint32_t u32Data)
{
    uint32_t  tout;

    g_RMC_i32ErrCode = 0;
    RMC->ISPCTL = RMC->ISPCTL & ~BIT8;
    RMC->ISPCMD = RMC_ISPCMD_CLEAR_DATA_BUFFER;
    RMC->ISPADDR = 0x00000000;
    RMC->ISPTRG = RMC_ISPTRG_ISPGO_Msk;

    tout = RMC_TIMEOUT_WRITE;
    while ((--tout > 0) && (RMC->ISPTRG & RMC_ISPTRG_ISPGO_Msk)) {}
    if (tout == 0)
    {
        g_RMC_i32ErrCode = -1;
        return -1;
    }

    if (RMC->ISPSTS & RMC_ISPSTS_ISPFF_Msk)
    {
        RMC->ISPSTS |= RMC_ISPSTS_ISPFF_Msk;
        g_RMC_i32ErrCode = -1;
        return -1;
    }
    RMC->ISPCMD = RMC_ISPCMD_LOAD_DATA_BUFFER;
    RMC->ISPADDR = u32Addr;
    RMC->ISPDAT = u32Data;
    RMC->ISPTRG = RMC_ISPTRG_ISPGO_Msk;

    tout = RMC_TIMEOUT_WRITE;
    while ((--tout > 0) && (RMC->ISPTRG & RMC_ISPTRG_ISPGO_Msk)) {}
    if (tout == 0)
    {
        g_RMC_i32ErrCode = -1;
        return -1;
    }

    if (RMC->ISPSTS & RMC_ISPSTS_ISPFF_Msk)
    {
        RMC->ISPSTS |= RMC_ISPSTS_ISPFF_Msk;
        g_RMC_i32ErrCode = -1;
        return -1;
    }

    RMC->ISPCMD = RMC_ISPCMD_PROGRAM;
    RMC->ISPADDR = u32Addr;
    RMC->ISPDAT = u32Data;
    RMC->ISPTRG = RMC_ISPTRG_ISPGO_Msk;

    tout = RMC_TIMEOUT_WRITE;
    while ((--tout > 0) && (RMC->ISPTRG & RMC_ISPTRG_ISPGO_Msk)) {}
    if (tout == 0)
    {
        g_RMC_i32ErrCode = -1;
        return -1;
    }

    if (RMC->ISPSTS & RMC_ISPSTS_ISPFF_Msk)
    {
        RMC->ISPSTS |= RMC_ISPSTS_ISPFF_Msk;
        g_RMC_i32ErrCode = -1;
        return -1;
    }
    return 0;
}

/**
  * @brief Execute RMC_ISPCMD_PAGE_ERASE command to erase a flash page. The page size is 4096 bytes.
  * @param[in]  u32PageAddr Address of the flash page to be erased.
  *             It must be a 4096 bytes aligned address.
  * @return ISP page erase success or not.
  * @retval   0  Success
  * @retval   -1  Erase failed
  */
int32_t RMC_Erase(uint32_t u32PageAddr)
{
    uint32_t  addr = 0;
    int32_t  ret = 0;
    for(addr =0; addr<RMC_FLASH_PAGE_SIZE; addr+=4)
        ret = ret | RMC_Write(u32PageAddr + addr, 0xFFFFFFFF);

    return ret;
}


/**
  * @brief Execute RMC_ISPCMD_PAGE_ERASE command to erase a flash page. The page size is 4096 bytes.
  * @param[in]  u32PageAddr Address of the flash page to be erased.
  *             It must be a 4096 bytes aligned address.
  * @return ISP page erase success or not.
  * @retval   0  Success
  * @retval   -1  Erase failed
  */
int32_t RMC_MassErase(void)
{
    int32_t  ret = 0;

    uint32_t  tout;

    g_RMC_i32ErrCode = 0;
    RMC->ISPCMD = 0x26;
    RMC->ISPADDR = 0;
    RMC->ISPTRG = RMC_ISPTRG_ISPGO_Msk;

    tout = 0xFFFFFFFF;
    while ((--tout > 0) && (RMC->ISPTRG & RMC_ISPTRG_ISPGO_Msk)) {}
    if (tout == 0)
    {
        g_RMC_i32ErrCode = -1;
        return -1;
    }

    if (RMC->ISPSTS & RMC_ISPSTS_ISPFF_Msk)
    {
        RMC->ISPSTS |= RMC_ISPSTS_ISPFF_Msk;
        g_RMC_i32ErrCode = -1;
        return -1;
    }

    return ret;
}
/**
  * @brief Execute RMC_ISPCMD_READ command to read User Configuration.
  * @param[out]  u32Config A two-word array.
  *              u32Config[0] holds CONFIG0, while u32Config[1] holds CONFIG1.
  * @param[in] u32Count Available word count in u32Config.
  * @return Success or not.
  * @retval   0  Success.
  * @retval   -1  Invalid parameter.
  */
int32_t RMC_ReadConfig(uint32_t u32Config[], uint32_t u32Count)
{
    int32_t   ret = 0;

    u32Config[0] = RMC_Read(RMC_CONFIG_BASE);

    if (u32Count < 2UL)
    {
        ret = -1;
    }
    else
    {
        u32Config[1] = RMC_Read(RMC_CONFIG_BASE+4UL);
    }
    return ret;
}


/**
  * @brief Execute ISP commands to erase then write User Configuration.
  * @param[in] u32Config   A two-word array.
  *            u32Config[0] holds CONFIG0, while u32Config[1] holds CONFIG1.
  * @param[in] u32Count    The number of User Configuration words to be written.
  * @return Success or not.
  * @retval   0   Success
  * @retval   -1  Failed
  */
int32_t RMC_WriteConfig(uint32_t u32Config[], uint32_t u32Count)
{
    int   i;

    RMC_ENABLE_CFG_UPDATE();

    RMC->ISPCTL = RMC->ISPCTL & ~BIT8;

    for (i = 0; i < u32Count; i++)
    {
        if (RMC_Write(RMC_CONFIG_BASE+i*4UL, u32Config[i]) != 0)
        {
            RMC_DISABLE_CFG_UPDATE();
            return -1;
        }
        if (RMC_Read(RMC_CONFIG_BASE+i*4UL) != u32Config[i])
        {
            RMC_DISABLE_CFG_UPDATE();
            return -1;
        }
        if (g_RMC_i32ErrCode != 0)
        {
            RMC_DISABLE_CFG_UPDATE();
            return -1;
        }
    }

    RMC_DISABLE_CFG_UPDATE();
    return 0;
}


/**
  * @brief Run CRC32 checksum calculation and get result.
  * @param[in] u32addr   Starting flash address. It must be a page aligned address.
  * @param[in] u32count  Byte count of flash to be calculated. It must be multiple of 512 bytes.
  * @return Success or not.
  * @retval   0           Success.
  * @retval   0xFFFFFFFF  Invalid parameter.
  */
uint32_t  RMC_GetChkSum(uint32_t u32addr, uint32_t u32count)
{
    uint32_t   ret, tout;

    g_RMC_i32ErrCode = 0;

    if ((u32addr % 512UL) || (u32count % 512UL))
    {
        ret = 0xFFFFFFFF;
    }
    else
    {
        RMC->ISPCTL = RMC->ISPCTL & ~BIT8;
        RMC->ISPCMD  = RMC_ISPCMD_RUN_CKS;
        RMC->ISPADDR = u32addr;
        RMC->ISPDAT  = u32count;
        RMC->ISPTRG  = RMC_ISPTRG_ISPGO_Msk;

        tout = RMC_TIMEOUT_CHKSUM;
        while ((--tout > 0) && (RMC->ISPSTS & RMC_ISPSTS_ISPBUSY_Msk)) {}
        if (tout == 0)
        {
            g_RMC_i32ErrCode = -1;
            return 0xFFFFFFFF;
        }

        if (RMC->ISPSTS & RMC_ISPSTS_ISPFF_Msk)
        {
            RMC->ISPSTS |= RMC_ISPSTS_ISPFF_Msk;
            g_RMC_i32ErrCode = -1;
            return -1;
        }
        RMC->ISPCMD = RMC_ISPCMD_READ_CKS;
        RMC->ISPADDR    = u32addr;
        RMC->ISPTRG = RMC_ISPTRG_ISPGO_Msk;

        tout = RMC_TIMEOUT_CHKSUM;
        while ((--tout > 0) && (RMC->ISPSTS & RMC_ISPSTS_ISPBUSY_Msk)) {}
        if (tout == 0)
        {
            g_RMC_i32ErrCode = -1;
            return 0xFFFFFFFF;
        }

        if (RMC->ISPSTS & RMC_ISPSTS_ISPFF_Msk)
        {
            RMC->ISPSTS |= RMC_ISPSTS_ISPFF_Msk;
            g_RMC_i32ErrCode = -1;
            return 0xFFFFFFFF;
        }
        ret = RMC->ISPDAT;
    }

    return ret;
}


/**
  * @brief Run flash all one verification and get result.
  * @param[in] u32addr   Starting flash address. It must be a page aligned address.
  * @param[in] u32count  Byte count of flash to be calculated. It must be multiple of 512 bytes.
  * @retval   READ_ALLONE_YES      The contents of verified flash area are 0xFFFFFFFF.
  * @retval   READ_ALLONE_NOT  Some contents of verified flash area are not 0xFFFFFFFF.
  * @retval   READ_ALLONE_CMD_FAIL  Unexpected error occurred.
  * @note     Global error code g_RMC_i32ErrCode
  *           -1  RUN_ALL_ONE or CHECK_ALL_ONE commands time-out
  */
uint32_t  RMC_CheckAllOne(uint32_t u32addr, uint32_t u32count)
{
    uint32_t  ret = READ_ALLONE_CMD_FAIL;
    int32_t   i32TimeOutCnt0, i32TimeOutCnt1;

    g_RMC_i32ErrCode = 0;

    RMC->ISPSTS = 0x80UL;   /* clear check all one bit */

    RMC->ISPCMD   = RMC_ISPCMD_RUN_ALL1;
    RMC->ISPADDR  = u32addr;
    RMC->ISPDAT   = u32count;
    RMC->ISPTRG   = RMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt0 = RMC_TIMEOUT_CHKALLONE;
    while(RMC->ISPSTS & RMC_ISPSTS_ISPBUSY_Msk)
    {
        if( i32TimeOutCnt0-- <= 0)
        {
            g_RMC_i32ErrCode = -1;
            break;
        }
    }

    if(g_RMC_i32ErrCode == 0)
    {
        i32TimeOutCnt1 = RMC_TIMEOUT_CHKALLONE;
        do
        {
            RMC->ISPCMD = RMC_ISPCMD_READ_ALL1;
            RMC->ISPADDR = u32addr;
            RMC->ISPTRG = RMC_ISPTRG_ISPGO_Msk;

            i32TimeOutCnt0 = RMC_TIMEOUT_CHKALLONE;
            while(RMC->ISPSTS & RMC_ISPSTS_ISPBUSY_Msk)
            {
                if( i32TimeOutCnt0-- <= 0)
                {
                    g_RMC_i32ErrCode = -1;
                    break;
                }
            }

            if( i32TimeOutCnt1-- <= 0)
            {
                g_RMC_i32ErrCode = -1;
            }
        }
        while( (RMC->ISPDAT == 0UL) && (g_RMC_i32ErrCode == 0) );
    }

    if( g_RMC_i32ErrCode == 0 )
    {
        if(RMC->ISPDAT == READ_ALLONE_YES)
            ret = READ_ALLONE_YES;
        else if(RMC->ISPDAT == READ_ALLONE_NOT)
            ret = READ_ALLONE_NOT;
        else
            g_RMC_i32ErrCode = -1;
    }

    return ret;
}

/**
  * @brief     Remap Bank0/Bank1
  *
  * @param[in] u32Bank    Bank Num which will remap to.
  *
  * @retval    0   Success
  * @retval    -1  Program failed.
  *
  * @details  Remap Bank0/Bank1
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           -1  Program failed or time-out
  */
int32_t RMC_RemapBank(uint32_t u32BankAddr)
{
    int32_t  ret = 0;
    uint32_t  tout;

    g_RMC_i32ErrCode = 0;
    RMC->ISPCMD = RMC_ISPCMD_BANK_REMAP;
    RMC->ISPADDR = u32BankAddr;
    RMC->ISPDAT = 0x5AA55AA5UL;
    RMC->ISPTRG = RMC_ISPTRG_ISPGO_Msk;

    tout = RMC_TIMEOUT_WRITE;
    while ((--tout > 0) && (RMC->ISPTRG & RMC_ISPTRG_ISPGO_Msk)) {}
    if (tout == 0)
    {
        g_RMC_i32ErrCode = -1;
        return -1;
    }

    if (RMC->ISPSTS & RMC_ISPSTS_ISPFF_Msk)
    {
        RMC->ISPSTS |= RMC_ISPSTS_ISPFF_Msk;
        g_RMC_i32ErrCode = -1;
        printf("ispff is set!!\n");
        return -1;
    }

    return ret;
}

/**
  * @brief  Read the 64-bits data from the specified OTP.
  * @param[in] otp_num    The OTP number.
  * @param[in] low_word   Low word of the 64-bits data.
  * @param[in] high_word   Low word of the 64-bits data.
  * @retval   0   Success
  * @retval   -1  Read failed.
  * @retval   -2  Invalid OTP number.
  */
int32_t RMC_ReadOTP(uint32_t otp_num, uint32_t *low_word, uint32_t *high_word)
{
    int32_t  ret = 0;

    if (otp_num > 255UL)
    {
        ret = -2;
    }

    if (ret == 0)
    {
        *low_word  = RMC_Read(RMC_OTP_BASE + otp_num * 8UL);
        if(g_RMC_i32ErrCode == 0)
            *high_word = RMC_Read(RMC_OTP_BASE + otp_num * 8UL +4);
    }
    return ret;
}

/**
  * @brief  Lock the specified OTP.
  * @param[in] otp_num    The OTP number.
  * @retval   0   Success
  * @retval   -1  Failed to write OTP lock bits.
  * @retval   -2  Invalid OTP number.
  */
int32_t RMC_LockOTP(uint32_t otp_num)
{
    int32_t  ret = 0;

    if (otp_num > 255UL)
    {
        ret = -2;
    }

    if (ret == 0)
    {
        RMC_Write(RMC_OTP_BASE + 0x800UL + otp_num * 4UL, 0);
    }
    return ret;
}

/**
  * @brief  Check the OTP is locked or not.
  * @param[in] otp_num    The OTP number.
  * @retval   1   OTP is locked.
  * @retval   0   OTP is not locked.
  * @retval   -1  Failed to read OTP lock bits.
  * @retval   -2  Invalid OTP number.
  */
int32_t RMC_IsOTPLocked(uint32_t otp_num)
{
    int32_t  ret = 0;
    uint32_t  u32data = 0;

    if (otp_num > 255UL)
    {
        ret = -2;
    }

    if (ret == 0)
    {
        u32data = RMC_Read(RMC_OTP_BASE + 0x800UL + otp_num * 4UL);
        if (u32data != 0xFFFFFFFFUL)
        {
            ret = 1;   /* Lock work was progrmmed. OTP was locked. */
        }
    }
    return ret;
}

/**
  * @brief Program a 64-bits data to the specified OTP.
  * @param[in] otp_num    The OTP number.
  * @param[in] low_word   Low word of the 64-bits data.
  * @param[in] high_word   Low word of the 64-bits data.
  * @retval   0   Success
  * @retval   -1  Program failed.
  * @retval   -2  Invalid OTP number.
  */
int32_t RMC_WriteOTP(uint32_t otp_num, uint32_t low_word, uint32_t high_word)
{
    int32_t  ret = 0;

    if (otp_num > 255UL)
    {
        ret = -2;
    }

    if (ret == 0)
    {
        RMC_Write(RMC_OTP_BASE + otp_num * 8UL, low_word);
    }

    if (g_RMC_i32ErrCode == 0)
    {
        RMC_Write(RMC_OTP_BASE + otp_num * 8UL+ 4UL, high_word);
    }

    return ret;
}


/*@}*/ /* end of group RMC_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group RMC_Driver */

/*@}*/ /* end of group Standard_Driver */

/*** (C) COPYRIGHT 2016 Nuvoton Technology Corp. ***/


