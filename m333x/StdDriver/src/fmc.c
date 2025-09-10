/**************************************************************************//**
 * @file     fmc.c
 * @version  V3.00
 * @brief    M3331 series FMC driver source file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (c) 2024 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/

#include <stdio.h>

#include "NuMicro.h"


/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup FMC_Driver FMC Driver
  @{
*/


/** @addtogroup FMC_EXPORTED_FUNCTIONS FMC Exported Functions
  @{
*/

int32_t g_FMC_i32ErrCode = 0; /*!< FMC global error code */

/**
  * @brief    Disable ISP Functions
  *
  * @param    None
  *
  * @return   None
  *
  * @details  This function will clear ISPEN bit of FMC_ISPCTL to disable ISP function.
  *
  */
void FMC_Close(void)
{
    FMC->ISPCTL &= ~FMC_ISPCTL_ISPEN_Msk;
}

/**
  * @brief     Config XOM Region
  * @param[in] u32XomNum    The XOM number(0~3)
  * @param[in] u32XomBase   The XOM region base address.
  * @param[in] u8XomPage    The XOM page number of region size.
  *
  * @retval   0   Success
  * @retval   1   XOM is has already actived.
  * @retval   -1  Program failed.
  * @retval   -2  Invalid XOM number.
  *
  * @details  Program XOM base address and XOM size(page).
  *           The CONFIG update enable bit CFGUEN(FMC_ISPCTL[4]) should be enabled before using this function.
  * @note     Global error code g_FMC_i32ErrCode
  *           -1  Program failed or program time-out
  *           -2  Invalid XOM number.
  */
int32_t FMC_ConfigXOM(uint32_t u32XomNum, uint32_t u32XomBase, uint8_t u8XomPage)
{
    int32_t  ret = 0;
    int32_t i32TimeOutCnt;

    g_FMC_i32ErrCode = 0;

    if(u32XomNum >= 4UL)
    {
        g_FMC_i32ErrCode = -2;
        ret = -2;
    }

    if(ret == 0)
    {
        ret = FMC_GetXOMState(u32XomNum);
    }

    if(ret == 0)
    {
        FMC->ISPCMD = FMC_ISPCMD_PROGRAM;
        FMC->ISPADDR = FMC_XOM_BASE + (u32XomNum * 0x10u);
        FMC->ISPDAT = u32XomBase;
        FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;
        i32TimeOutCnt = FMC_TIMEOUT_WRITE;
        while(FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)
        {
            if(i32TimeOutCnt-- <= 0)
            {
                g_FMC_i32ErrCode = -1;
                ret = -1;
                break;
            }
        }

        if(FMC->ISPSTS & FMC_ISPSTS_ISPFF_Msk)
        {
            FMC->ISPSTS |= FMC_ISPSTS_ISPFF_Msk;
            g_FMC_i32ErrCode = -1;
            ret = -1;
        }
    }

    if(ret == 0)
    {
        FMC->ISPCMD = FMC_ISPCMD_PROGRAM;
        FMC->ISPADDR = FMC_XOM_BASE + (u32XomNum * 0x10u + 0x04u);
        FMC->ISPDAT = u8XomPage;
        FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;
        i32TimeOutCnt = FMC_TIMEOUT_WRITE;
        while(FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)
        {
            if(i32TimeOutCnt-- <= 0)
            {
                g_FMC_i32ErrCode = -1;
                ret = -1;
                break;
            }
        }

        if(FMC->ISPSTS & FMC_ISPSTS_ISPFF_Msk)
        {
            FMC->ISPSTS |= FMC_ISPSTS_ISPFF_Msk;
            g_FMC_i32ErrCode = -1;
            ret = -1;
        }
    }

    if(ret == 0)
    {
        FMC->ISPCMD = FMC_ISPCMD_PROGRAM;
        FMC->ISPADDR = FMC_XOM_BASE + (u32XomNum * 0x10u + 0x08u);
        FMC->ISPDAT = 0u;
        FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;
        i32TimeOutCnt = FMC_TIMEOUT_WRITE;
        while(FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)
        {
            if(i32TimeOutCnt-- <= 0)
            {
                g_FMC_i32ErrCode = -1;
                ret = -1;
                break;
            }
        }

        if(FMC->ISPSTS & FMC_ISPSTS_ISPFF_Msk)
        {
            FMC->ISPSTS |= FMC_ISPSTS_ISPFF_Msk;
            g_FMC_i32ErrCode = -1;
            ret = -1;
        }
    }

    return ret;
}

/**
  * @brief Execute FMC_ISPCMD_PAGE_ERASE command to erase a flash page. The page size is 1024 bytes.
  * @param[in]  u32PageAddr Address of the flash page to be erased.
  *             It must be a 1024 bytes aligned address.
  * @return ISP page erase success or not.
  * @retval   0  Success
  * @retval   -1  Erase failed
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           -1  Erase failed or erase time-out
  */
int32_t FMC_Erase(uint32_t u32PageAddr)
{
    int32_t  ret = 0;
    int32_t i32TimeOutCnt;

    g_FMC_i32ErrCode = 0;

    FMC->ISPCMD = FMC_ISPCMD_PAGE_ERASE;
    FMC->ISPADDR = u32PageAddr;
    FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = FMC_TIMEOUT_ERASE;
    while(FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)
    {
        if(i32TimeOutCnt-- <= 0)
        {
            g_FMC_i32ErrCode = -1;
            ret = -1;
            break;
        }
    }

    if(FMC->ISPCTL & FMC_ISPCTL_ISPFF_Msk)
    {
        FMC->ISPCTL |= FMC_ISPCTL_ISPFF_Msk;
        g_FMC_i32ErrCode = -1;
        ret = -1;
    }

    return ret;
}


/**
  * @brief Execute FMC_ISPCMD_BANK_ERASE command to erase a flash bank.
  * @param[in]  u32BankAddr Base address of the flash bank to be erased.
  * @return ISP page erase success or not.
  * @retval   0  Success
  * @retval   -1  Erase failed
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           -1  Erase failed or erase time-out
  */
int32_t FMC_Erase_Bank(uint32_t u32BankAddr)
{
    int32_t  ret = 0;
    int32_t i32TimeOutCnt;

    g_FMC_i32ErrCode = 0;

    FMC->ISPCMD = FMC_ISPCMD_BANK_ERASE;
    FMC->ISPADDR = u32BankAddr;
    FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = FMC_TIMEOUT_ERASE;
    while(FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)
    {
        if(i32TimeOutCnt-- <= 0)
        {
            g_FMC_i32ErrCode = -1;
            ret = -1;
            break;
        }
    }

    if(FMC->ISPCTL & FMC_ISPCTL_ISPFF_Msk)
    {
        FMC->ISPCTL |= FMC_ISPCTL_ISPFF_Msk;
        g_FMC_i32ErrCode = -1;
        ret = -1;
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
  * @details Execute FMC_ISPCMD_PAGE_ERASE command to erase XOM.
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           -1  Program failed or program time-out
  *           -2  Invalid XOM number.
  */
int32_t FMC_EraseXOM(uint32_t u32XomNum)
{
    uint32_t u32Addr;
    int32_t i32Active, err = 0;
    int32_t i32TimeOutCnt;

    g_FMC_i32ErrCode = 0;

    if(u32XomNum >= 4UL)
    {
        err = -2;
    }

    if(err == 0)
    {
        i32Active = FMC_GetXOMState(u32XomNum);

        if(i32Active)
        {
            switch(u32XomNum)
            {
                case 0u:
                    u32Addr = (FMC->XOMR0STS & 0xFFFFFF00u) >> 8u;
                    break;
                case 1u:
                    u32Addr = (FMC->XOMR1STS & 0xFFFFFF00u) >> 8u;
                    break;
                case 2u:
                    u32Addr = (FMC->XOMR2STS & 0xFFFFFF00u) >> 8u;
                    break;
                case 3u:
                    u32Addr = (FMC->XOMR3STS & 0xFFFFFF00u) >> 8u;
                    break;
                default:
                    /* Should not be here */
                    err = -2;
                    goto lexit;
            }
            FMC->ISPCMD = FMC_ISPCMD_PAGE_ERASE;
            FMC->ISPADDR = u32Addr;
            FMC->ISPDAT = 0x55aa03u;
            FMC->ISPTRG = 0x1u;
#if ISBEN
            __ISB();
#endif
            i32TimeOutCnt = FMC_TIMEOUT_ERASE;
            while(FMC->ISPTRG)
            {
                if(i32TimeOutCnt-- <= 0)
                {
                    err = -1;
                    break;
                }
            }

            /* Check ISPFF flag to know whether erase OK or fail. */
            if(FMC->ISPCTL & FMC_ISPCTL_ISPFF_Msk)
            {
                FMC->ISPCTL |= FMC_ISPCTL_ISPFF_Msk;
                err = -1;
            }
        }
        else
        {
            err = -1;
        }
    }

lexit:
    g_FMC_i32ErrCode = err;
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
int32_t FMC_GetXOMState(uint32_t u32XomNum)
{
    uint32_t u32act;
    int32_t  ret = 0;

    if(u32XomNum >= 4UL)
    {
        ret = -2;
    }

    if(ret >= 0)
    {
        u32act = (((FMC->XOMSTS) & 0xful) & (1ul << u32XomNum)) >> u32XomNum;
        ret = (int32_t)u32act;
    }
    return ret;
}

/**
  * @brief    Enable FMC ISP function
  *
  * @param    None
  *
  * @return   None
  *
  * @details  ISPEN bit of FMC_ISPCTL must be set before we can use ISP commands.
  *           Therefore, To use all FMC function APIs, user needs to call FMC_Open() first to enable ISP functions.
  *
  * @note     ISP functions are write-protected. user also needs to unlock it by calling SYS_UnlockReg() before using all ISP functions.
  *
  */
void FMC_Open(void)
{
    FMC->ISPCTL |=  FMC_ISPCTL_ISPEN_Msk;
}


/**
  * @brief Execute FMC_ISPCMD_READ command to read a word from flash.
  * @param[in]  u32Addr Address of the flash location to be read.
  *             It must be a word aligned address.
  * @return The word data read from specified flash address.
  *         Return 0xFFFFFFFF if read failed.
  * @note   Global error code g_FMC_i32ErrCode
  *         -1  Read time-out
  */
uint32_t FMC_Read(uint32_t u32Addr)
{
    int32_t i32TimeOutCnt;

    g_FMC_i32ErrCode = 0;
    FMC->ISPCMD = FMC_ISPCMD_READ;
    FMC->ISPADDR = u32Addr;
    FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = FMC_TIMEOUT_READ;
    while(FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)
    {
        if(i32TimeOutCnt-- <= 0)
        {
            g_FMC_i32ErrCode = -1;
            return 0xFFFFFFFF;
        }
    }

    return FMC->ISPDAT;
}


/**
  * @brief Execute FMC_ISPCMD_READ_64 command to read a double-word from flash.
  * @param[in]  u32addr   Address of the flash location to be read.
  *             It must be a double-word aligned address.
  * @param[out] u32data0  Place holder of word read from flash address u32addr.
  * @param[out] u32data1  Place holder of word read from flash address u32addr+4.
  * @return   0   Success
  * @return   -1  Failed
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           -1  Read time-out
  */
int32_t FMC_Read_64(uint32_t u32addr, uint32_t * u32data0, uint32_t * u32data1)
{
    int32_t  ret = 0;
    int32_t i32TimeOutCnt;

    g_FMC_i32ErrCode = 0;
    FMC->ISPCMD = FMC_ISPCMD_READ_64;
    FMC->ISPADDR = u32addr;
    FMC->ISPDAT = 0x0UL;
    FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = FMC_TIMEOUT_READ;
    while(FMC->ISPSTS & FMC_ISPSTS_ISPBUSY_Msk)
    {
        if(i32TimeOutCnt-- <= 0)
        {
            g_FMC_i32ErrCode = -1;
            ret = -1;
            break;
        }
    }

    if(FMC->ISPSTS & FMC_ISPSTS_ISPFF_Msk)
    {
        FMC->ISPSTS |= FMC_ISPSTS_ISPFF_Msk;
        g_FMC_i32ErrCode = -1;
        ret = -1;
    }
    else
    {
        *u32data0 = FMC->MPDAT0;
        *u32data1 = FMC->MPDAT1;
    }
    return ret;
}


/**
  * @brief Execute ISP FMC_ISPCMD_PROGRAM to program a word to flash.
  * @param[in]  u32Addr Address of the flash location to be programmed.
  *             It must be a word aligned address.
  * @param[in]  u32Data The word data to be programmed.
  * @return   0   Success
  * @return   -1  Failed
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           -1  Program failed or time-out
  */
int32_t FMC_Write(uint32_t u32Addr, uint32_t u32Data)
{
    int32_t i32TimeOutCnt;

    g_FMC_i32ErrCode = 0;
    FMC->ISPCMD = FMC_ISPCMD_PROGRAM;
    FMC->ISPADDR = u32Addr;
    FMC->ISPDAT = u32Data;
    FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = FMC_TIMEOUT_WRITE;
    while(FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)
    {
        if(i32TimeOutCnt-- <= 0)
        {
            g_FMC_i32ErrCode = -1;
            return -1;
        }
    }

    return 0;
}

/**
  * @brief Execute ISP FMC_ISPCMD_PROGRAM_64 to program a double-word to flash.
  * @param[in]  u32addr Address of the flash location to be programmed.
  *             It must be a double-word aligned address.
  * @param[in]  u32data0   The word data to be programmed to flash address u32addr.
  * @param[in]  u32data1   The word data to be programmed to flash address u32addr+4.
  * @return   0   Success
  * @return   -1  Failed
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           -1  Program failed or time-out
  */
int32_t FMC_Write8Bytes(uint32_t u32addr, uint32_t u32data0, uint32_t u32data1)
{
    int32_t  ret = 0;
    int32_t i32TimeOutCnt;

    g_FMC_i32ErrCode = 0;
    FMC->ISPCMD  = FMC_ISPCMD_PROGRAM_64;
    FMC->ISPADDR = u32addr;
    FMC->MPDAT0  = u32data0;
    FMC->MPDAT1  = u32data1;
    FMC->ISPTRG  = FMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = FMC_TIMEOUT_WRITE;
    while(FMC->ISPSTS & FMC_ISPSTS_ISPBUSY_Msk)
    {
        if(i32TimeOutCnt-- <= 0)
        {
            g_FMC_i32ErrCode = -1;
            ret = -1;
        }
    }

    if(FMC->ISPSTS & FMC_ISPSTS_ISPFF_Msk)
    {
        FMC->ISPSTS |= FMC_ISPSTS_ISPFF_Msk;
        g_FMC_i32ErrCode = -1;
        ret = -1;
    }
    return ret;
}

/**
  * @brief Execute FMC_ISPCMD_READ command to read User Configuration.
  * @param[out]  u32Config A word array.
  *              u32Config[0] holds CONFIG0, while u32Config[1] holds CONFIG1.
  * @param[in] u32Count Available word count in u32Config.
  * @return Success or not.
  * @retval   0  Success.
  * @retval   -1  Read failed
  * @retval   -2  Invalid parameter.
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           -1  Read failed
  *           -2  Invalid parameter
  */
int32_t FMC_ReadConfig(uint32_t u32Config[], uint32_t u32Count)
{
    int32_t  i32ret = 0UL;
    uint32_t i;

    g_FMC_i32ErrCode = 0;

    if(u32Count > 19UL)
    {
        g_FMC_i32ErrCode = -2;
    }
    else
    {
        for (i = 0UL; i < u32Count; i++)
        {
            u32Config[i] = FMC_Read(FMC_CONFIG_BASE + (i<<2));
            if (g_FMC_i32ErrCode != 0) break;
        }
    }

    i32ret = g_FMC_i32ErrCode;
    return i32ret;
}


/**
  * @brief Execute ISP commands to erase then write User Configuration.
  * @param[in] u32ConfigAddr   Address of config word
  * @param[in] u32ConfigVal    New config value to be written.
  * @retval   0   Success
  * @retval   -1  Erase/program/read/verify failed
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           < 0  Errors caused by erase/program/read failed or time-out
  */
int32_t FMC_WriteConfig(uint32_t u32ConfigAddr, uint32_t u32ConfigVal)
{
    FMC_ENABLE_CFG_UPDATE();

    if(FMC_EraseConfig(u32ConfigAddr) != 0)
    {
        return -1;
    }

    if(FMC_Read(u32ConfigAddr) != 0xFFFFFFFF)
    {
        FMC_DISABLE_CFG_UPDATE();
        return -1;
    }

    if(g_FMC_i32ErrCode != FMC_OK)
    {
        FMC_DISABLE_CFG_UPDATE();
        return -1;
    }

    if(FMC_Write(u32ConfigAddr, u32ConfigVal) != FMC_OK)
    {
        FMC_DISABLE_CFG_UPDATE();
        return -1;
    }

    if(FMC_Read(u32ConfigAddr) != u32ConfigVal)
    {
        FMC_DISABLE_CFG_UPDATE();
        return -1;
    }

    if(g_FMC_i32ErrCode != FMC_OK)
    {
        FMC_DISABLE_CFG_UPDATE();
        return -1;
    }

    FMC_DISABLE_CFG_UPDATE();
    return 0;
}

/**
  * @brief      Execute FMC_ISPCMD_CFG_ERASE command to erase a config word.
  * @param[in]  u32ConfigAddr Address of config word to be erased.
  * @return     ISP config erase success or not.
  * @retval     FMC_OK           Success
  * @retval     FMC_ERR_FAIL     Erase failed
  * @retval     FMC_ERR_TIMEOUT  Erase time-out
  *
  * @note       Global error code g_FMC_i32ErrCode
  *             FMC_ERR_FAIL     Erase failed
  *             FMC_ERR_TIMEOUT  Erase time-out
  */
int32_t FMC_EraseConfig(uint32_t u32ConfigAddr)
{
    int32_t i32RetCode = FMC_OK;
    int32_t i32TimeOutCnt;

    g_FMC_i32ErrCode = FMC_OK;

    FMC->ISPCMD  = FMC_ISPCMD_CFG_ERASE;
    FMC->ISPADDR = u32ConfigAddr;
    FMC->ISPTRG  = FMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = FMC_TIMEOUT_ERASE;

    while(FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)
    {
        if(i32TimeOutCnt-- <= 0)
        {
            g_FMC_i32ErrCode = FMC_ERR_TIMEOUT;
            i32RetCode = FMC_ERR_TIMEOUT;
            break;
        }
    }

    if(FMC->ISPCTL & FMC_ISPCTL_ISPFF_Msk)
    {
        FMC->ISPCTL |= FMC_ISPCTL_ISPFF_Msk;
        g_FMC_i32ErrCode = FMC_ERR_FAIL;
        i32RetCode = FMC_ERR_FAIL;
    }

    return i32RetCode;
}


/**
  * @brief Run CRC32 checksum calculation and get result.
  * @param[in] u32addr   Starting flash address. It must be a page aligned address.
  * @param[in] u32count  Byte count of flash to be calculated. It must be multiple of page size.
  * @retval   0           Success.
  * @retval   0xFFFFFFFF  Invalid parameter or command failed.
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           -1  Run/Read check sum time-out failed
  *           -2  u32addr or u32count must be aligned with page size
  */
uint32_t  FMC_GetChkSum(uint32_t u32addr, uint32_t u32count)
{
    uint32_t   ret;
    int32_t i32TimeOutCnt;

    g_FMC_i32ErrCode = 0;

    if((u32addr % FMC_FLASH_PAGE_SIZE) || (u32count % FMC_FLASH_PAGE_SIZE))
    {
        g_FMC_i32ErrCode = -2;
        ret = 0xFFFFFFFF;
    }
    else
    {
        FMC->ISPCMD  = FMC_ISPCMD_RUN_CKS;
        FMC->ISPADDR = u32addr;
        FMC->ISPDAT  = u32count;
        FMC->ISPTRG  = FMC_ISPTRG_ISPGO_Msk;

        i32TimeOutCnt = FMC_TIMEOUT_CHKSUM;
        while(FMC->ISPSTS & FMC_ISPSTS_ISPBUSY_Msk)
        {
            if(i32TimeOutCnt-- <= 0)
            {
                g_FMC_i32ErrCode = -1;
                return 0xFFFFFFFF;
            }
        }

        FMC->ISPCMD = FMC_ISPCMD_READ_CKS;
        FMC->ISPADDR = u32addr;
        FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;

        i32TimeOutCnt = FMC_TIMEOUT_CHKSUM;
        while(FMC->ISPSTS & FMC_ISPSTS_ISPBUSY_Msk)
        {
            if(i32TimeOutCnt-- <= 0)
            {
                g_FMC_i32ErrCode = -1;
                return 0xFFFFFFFF;
            }
        }

        ret = FMC->ISPDAT;
    }

    return ret;
}


/**
  * @brief Run flash all one verification and get result.
  * @param[in] u32addr   Starting flash address. It must be a page aligned address.
  * @param[in] u32count  Byte count of flash to be calculated. It must be multiple of page size.
  * @retval   READ_ALLONE_YES       The contents of verified flash area are 0xFFFFFFFF.
  * @retval   READ_ALLONE_NOT       Some contents of verified flash area are not 0xFFFFFFFF.
  * @retval   READ_ALLONE_CMD_FAIL  Unexpected error occurred.
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           -1  RUN_ALL_ONE or CHECK_ALL_ONE commands time-out
  */
uint32_t  FMC_CheckAllOne(uint32_t u32addr, uint32_t u32count)
{
    uint32_t  ret = READ_ALLONE_CMD_FAIL;
    int32_t i32TimeOutCnt0, i32TimeOutCnt1;

    g_FMC_i32ErrCode = 0;

    FMC->ISPSTS = FMC_ISPSTS_ALLONE_Msk;   /* clear check all one bit */

    FMC->ISPCMD   = FMC_ISPCMD_RUN_ALL1;
    FMC->ISPADDR  = u32addr;
    FMC->ISPDAT   = u32count;
    FMC->ISPTRG   = FMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt0 = FMC_TIMEOUT_CHKALLONE;
    while(FMC->ISPSTS & FMC_ISPSTS_ISPBUSY_Msk)
    {
        if(i32TimeOutCnt0-- <= 0)
        {
            g_FMC_i32ErrCode = -1;
            break;
        }
    }

    if(g_FMC_i32ErrCode == 0)
    {
        i32TimeOutCnt1 = FMC_TIMEOUT_CHKALLONE;
        do
        {
            FMC->ISPCMD = FMC_ISPCMD_READ_ALL1;
            FMC->ISPADDR = u32addr;
            FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;

            i32TimeOutCnt0 = FMC_TIMEOUT_CHKALLONE;
            while(FMC->ISPSTS & FMC_ISPSTS_ISPBUSY_Msk)
            {
                if(i32TimeOutCnt0-- <= 0)
                {
                    g_FMC_i32ErrCode = -1;
                    break;
                }
            }

            if(i32TimeOutCnt1-- <= 0)
            {
                g_FMC_i32ErrCode = -1;
            }
        }
        while((FMC->ISPDAT == 0UL) && (g_FMC_i32ErrCode == 0));
    }

    if(g_FMC_i32ErrCode == 0)
    {
        if(FMC->ISPDAT == READ_ALLONE_YES)
            ret = READ_ALLONE_YES;
        else if(FMC->ISPDAT == READ_ALLONE_NOT)
            ret = READ_ALLONE_NOT;
        else
            g_FMC_i32ErrCode = -1;
    }

    return ret;
}

/**
  * @brief     Remap Bank0/Bank1 or Segment0/Segment1
  *
  * @param[in] u32Bank    Bank/Segment number which will remap to.
  *
  * @retval    0   Success
  * @retval    -1  Program failed.
  *
  * @details  Remap Bank0/Bank1 or Segment0/Segment1
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           -1  Program failed or time-out
  */
int32_t FMC_RemapBank(uint32_t u32Bank)
{
    int32_t  ret = 0;
    int32_t i32TimeOutCnt;

    g_FMC_i32ErrCode = 0;

    FMC->ISPCMD = FMC_ISPCMD_BANK_REMAP;
    FMC->ISPADDR = u32Bank;
    FMC->ISPDAT = 0x5AA55AA5UL;
    FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = FMC_TIMEOUT_WRITE;
    while(FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)
    {
        if(i32TimeOutCnt-- <= 0)
        {
            g_FMC_i32ErrCode = -1;
            ret = -1;
            break;
        }
    }

    if(FMC->ISPCTL & FMC_ISPCTL_ISPFF_Msk)
    {
        FMC->ISPCTL |= FMC_ISPCTL_ISPFF_Msk;
        g_FMC_i32ErrCode = -1;
        ret = -1;
    }
    return ret;
}


/*@}*/ /* end of group FMC_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group FMC_Driver */

/*@}*/ /* end of group Standard_Driver */
