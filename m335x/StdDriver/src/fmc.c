/******************************************************************************
 * @file     fmc.c
 * @version  V1.00
 * @brief    FMC driver source file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2025 Nuvoton Technology Corp. All rights reserved.
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

int32_t g_FMC_i32ErrCode = FMC_OK; /*!< FMC global error code */
/* MISRA Rule 8.9 Deviation: static buffer due to limited stack size */
static uint8_t s_au8FMC_ECC_ErrorBit[72] =
{
    0x23, 0x43, 0x83, 0x3d, 0x45, 0x85, 0x89, 0x49,
    0x46, 0x86, 0x07, 0x7a, 0x8a, 0x0b, 0x13, 0x92,
    0x8c, 0x0d, 0x0e, 0xf4, 0x15, 0x16, 0x26, 0x25,
    0x19, 0x1a, 0x1c, 0xe9, 0x2a, 0x2c, 0x4c, 0x4a,
    0x32, 0x34, 0x38, 0xd3, 0x54, 0x58, 0x98, 0x94,
    0x64, 0x68, 0x70, 0xa7, 0xa8, 0xb0, 0x31, 0x29,
    0xc8, 0xd0, 0xe0, 0x4f, 0x51, 0x61, 0x62, 0x52,
    0x91, 0xa1, 0xc1, 0x9e, 0xa2, 0xc2, 0xc4, 0xa4,
    0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80
};

/**
  * @brief Get the current boot source.
  * @return The current boot source.
  * @retval   0: Boot from APROM.
  * @retval   1: Boot from LDROM.
  */
int32_t FMC_GetBootSource(void)
{
    if (FMC->ISPCTL & FMC_ISPCTL_BS_Msk)
    {
        return 1;
    }

    return 0;
}

/**
  * @brief    Enable FMC ISP function
  * @param    None
  * @return   None
  * @details  ISPEN bit of FMC_ISPCTL must be set before we can use ISP commands.
  *           Therefore, To use all FMC function APIs, user needs to call FMC_Open() first to enable ISP functions.
  *
  * @note     ISP functions are write-protected. user also needs to unlock it by calling SYS_UnlockReg() before using all ISP functions.
  */
void FMC_Open(void)
{
    FMC->ISPCTL |=  FMC_ISPCTL_ISPEN_Msk;
}

/**
  * @brief    Disable FMC ISP Functions
  * @param    None
  * @return   None
  * @details  This function will clear ISPEN bit of FMC_ISPCTL to disable ISP function.
  */
void FMC_Close(void)
{
    FMC->ISPCTL &= ~FMC_ISPCTL_ISPEN_Msk;
}

/**
  * @brief Execute FMC_ISPCMD_PAGE_ERASE command to erase a flash page. The page size is 8192 bytes.
  * @param[in]  u32PageAddr Address of the flash page to be erased.
  *             It must be a 8192 bytes aligned address.
  * @return ISP page erase success or not.
  * @retval   FMC_OK:         Success
  * @retval   FMC_ERR_TIMEOUT: Erase time-out.
  * @retval   FMC_ERR_FAIL:    Erase failed.
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           FMC_ERR_TIMEOUT: Erase time-out.
  *           FMC_ERR_FAIL:    Erase failed.
  */
int32_t FMC_Erase(uint32_t u32PageAddr)
{
    int32_t i32RetCode = FMC_OK;
    int32_t i32TimeOutCnt;

    g_FMC_i32ErrCode = FMC_OK;

    FMC->ISPCMD  = FMC_ISPCMD_PAGE_ERASE;
    FMC->ISPADDR = u32PageAddr;
    FMC->ISPTRG  = FMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = FMC_TIMEOUT_ERASE;

    while (FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            i32RetCode = FMC_ERR_TIMEOUT;
            g_FMC_i32ErrCode = i32RetCode;
            break;
        }
    }

    if (FMC->ISPCTL & FMC_ISPCTL_ISPFF_Msk)
    {
        FMC->ISPCTL |= FMC_ISPCTL_ISPFF_Msk;
        i32RetCode = FMC_ERR_FAIL;
        g_FMC_i32ErrCode = i32RetCode;
    }

    return i32RetCode;
}

/**
  * @brief Execute FMC_ISPCMD_PAGE_ERASE command to erase a flash bank.
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
    int32_t i32RetCode = FMC_OK;
    int32_t i32TimeOutCnt;
    int page_nums = (FMC_BANK_SIZE / FMC_FLASH_PAGE_SIZE);
    uint32_t u32PageAddr = u32BankAddr;

    g_FMC_i32ErrCode = FMC_OK;

    FMC->ISPCMD  = FMC_ISPCMD_PAGE_ERASE;
    FMC->ISPTRG  = FMC_ISPTRG_ISPGO_Msk;

    while (page_nums)
    {
        FMC->ISPADDR = u32PageAddr;
        i32TimeOutCnt = FMC_TIMEOUT_ERASE;

        while (FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)
        {
            if (i32TimeOutCnt-- <= 0)
            {
                i32RetCode = FMC_ERR_TIMEOUT;
                g_FMC_i32ErrCode = i32RetCode;
                break;
            }
        }

        if (FMC->ISPCTL & FMC_ISPCTL_ISPFF_Msk)
        {
            FMC->ISPCTL |= FMC_ISPCTL_ISPFF_Msk;
            i32RetCode = FMC_ERR_FAIL;
            g_FMC_i32ErrCode = i32RetCode;
	    break;
        }
	page_nums--;
	u32PageAddr += FMC_FLASH_PAGE_SIZE;
    }
    
    return i32RetCode;
}

/**
  * @brief  Execute Erase XOM Region
  *
  * @param[in]  u32XomNum  The XOM number (0~1).
  *
  * @return   XOM erase success or not.
  * @retval   FMC_OK:                Success
  * @retval   FMC_ERR_FAIL:          Erase failed.
  * @retval   FMC_ERR_TIMEOUT:       Erase time-out.
  * @retval   FMC_ERR_INVALID_PARAM: Invalid XOM number.
  *
  * @details Execute FMC_ISPCMD_PAGE_ERASE command to erase XOM.
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           FMC_ERR_FAIL:          Erase failed.
  *           FMC_ERR_TIMEOUT:       Erase time-out.
  *           FMC_ERR_INVALID_PARAM: Invalid XOM number.
  */
int32_t FMC_EraseXOM(uint32_t u32XomNum)
{
    int32_t  i32RetCode = FMC_OK;
    int32_t  i32Active;
    int32_t  i32TimeOutCnt;
    uint32_t u32Addr;

    g_FMC_i32ErrCode = FMC_OK;

    if (u32XomNum >= XOMR_CNT)
    {
        i32RetCode = FMC_ERR_INVALID_PARAM;
        g_FMC_i32ErrCode = i32RetCode;
        return i32RetCode;
    }

    i32Active = FMC_GetXOMState(u32XomNum);

    if (i32Active)
    {
        switch (u32XomNum)
        {
            case 0u:
                u32Addr = (FMC->XOMR0STS & 0xFFFFFF00U) >> 8U;
                break;
            default:
                u32Addr = (FMC->XOMR1STS & 0xFFFFFF00U) >> 8U;
                break;
        }

        if (i32RetCode == FMC_OK)
        {
            FMC->ISPCMD  = FMC_ISPCMD_PAGE_ERASE;
            FMC->ISPADDR = u32Addr;
            FMC->ISPDAT  = 0x55aa03U;
            FMC->ISPTRG  = FMC_ISPTRG_ISPGO_Msk;
#if defined (ISBEN) && (ISBEN == 1)
            __ISB();
#endif
            i32TimeOutCnt = FMC_TIMEOUT_ERASE;

            while (FMC->ISPTRG)
            {
                if (i32TimeOutCnt-- <= 0)
                {
                    i32RetCode = FMC_ERR_TIMEOUT;
                    break;
                }
            }

            /* Check ISPFF flag to know whether erase OK or fail. */
            if (FMC->ISPCTL & FMC_ISPCTL_ISPFF_Msk)
            {
                FMC->ISPCTL |= FMC_ISPCTL_ISPFF_Msk;
                i32RetCode = FMC_ERR_FAIL;
            }
        }
    }
    else
    {
        i32RetCode = FMC_ERR_XOM_INACTIVE;
    }

    g_FMC_i32ErrCode = i32RetCode;
    return i32RetCode;
}

/**
  * @brief  Check the XOM is actived or not.
  *
  * @param[in] u32XomNum    The XOM number (0~1).
  *
  * @retval   XOMR_ACTIVE:           XOM is actived.
  * @retval   XOMR_INACTIVE:         XOM is not actived.
  * @retval   FMC_ERR_INVALID_PARAM: Invalid XOM number.
  *
  * @details To get specify XOMRn(n=0~1) active status
  */
int32_t FMC_GetXOMState(uint32_t u32XomNum)
{
    int32_t  i32RetCode = 0;

    if (u32XomNum >= XOMR_CNT)
    {
        i32RetCode = FMC_ERR_INVALID_PARAM;
    }
    else
    {
        if (((FMC->XOMSTS & 0xFU) & (1U << u32XomNum)) == (1U << u32XomNum))
        {
            return XOMR_ACTIVE;
        }
        else
        {
            return XOMR_INACTIVE;
        }
    }

    return i32RetCode;
}

/**
  * @brief     Config XOM Region
  * @param[in] u32XomNum    The XOM number (0~1).
  * @param[in] u32XomBase   The XOM region base address.
  * @param[in] u8XomPage    The XOM page number of region size.
  *
  * @retval   FMC_OK:                Success
  * @retval   XOMR_ACTIVE:           XOM has already actived.
  * @retval   FMC_ERR_FAIL:          Program failed.
  * @retval   FMC_ERR_INVALID_PARAM: Invalid XOM number.
  *
  * @details  Program XOM base address and XOM size(page).
  *           The CONFIG update enable bit CFGUEN(FMC_ISPCTL[4]) should be enabled before using this function.
  * @note     Global error code g_FMC_i32ErrCode
  *           FMC_ERR_FAIL:          Program failed.
  *           FMC_ERR_TIMEOUT:       Program time-out.
  *           FMC_ERR_INVALID_PARAM: Invalid XOM number.
  */
int32_t FMC_ConfigXOM(uint32_t u32XomNum, uint32_t u32XomBase, uint8_t u8XomPage)
{
    int32_t i32RetCode = 0;
    int32_t i32TimeOutCnt;

    g_FMC_i32ErrCode = 0;

    if (u32XomNum >= XOMR_CNT)
    {
        i32RetCode = FMC_ERR_INVALID_PARAM;
        g_FMC_i32ErrCode = i32RetCode;
        return i32RetCode;
    }


    if (FMC_GetXOMState(u32XomNum) == (int32_t)XOMR_ACTIVE)
    {
        return XOMR_ACTIVE;
    }

    FMC->ISPCMD  = FMC_ISPCMD_PROGRAM;
    FMC->ISPADDR = FMC_XOM_BASE + (u32XomNum * 0x10U);
    FMC->ISPDAT  = u32XomBase;
    FMC->ISPTRG  = FMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = FMC_TIMEOUT_WRITE;

    while (FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            i32RetCode = FMC_ERR_TIMEOUT;
            g_FMC_i32ErrCode = i32RetCode;
            break;
        }
    }

    if (FMC->ISPSTS & FMC_ISPSTS_ISPFF_Msk)
    {
        FMC->ISPSTS |= FMC_ISPSTS_ISPFF_Msk;
        i32RetCode = FMC_ERR_FAIL;
        g_FMC_i32ErrCode = i32RetCode;
    }

    if (i32RetCode == 0)
    {
        FMC->ISPCMD  = FMC_ISPCMD_PROGRAM;
        FMC->ISPADDR = FMC_XOM_BASE + ((u32XomNum * 0x10U) + 0x04U);
        FMC->ISPDAT  = u8XomPage;
        FMC->ISPTRG  = FMC_ISPTRG_ISPGO_Msk;
        i32TimeOutCnt = FMC_TIMEOUT_WRITE;

        while (FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)
        {
            if (i32TimeOutCnt-- <= 0)
            {
                i32RetCode = FMC_ERR_TIMEOUT;
                g_FMC_i32ErrCode = i32RetCode;
                break;
            }
        }

        if (FMC->ISPSTS & FMC_ISPSTS_ISPFF_Msk)
        {
            FMC->ISPSTS |= FMC_ISPSTS_ISPFF_Msk;
            i32RetCode = FMC_ERR_FAIL;
            g_FMC_i32ErrCode = i32RetCode;
        }
    }

    if (i32RetCode == FMC_OK)
    {
        FMC->ISPCMD  = FMC_ISPCMD_PROGRAM;
        FMC->ISPADDR = FMC_XOM_BASE + ((u32XomNum * 0x10U) + 0x08U);
        FMC->ISPDAT  = 0u;
        FMC->ISPTRG  = FMC_ISPTRG_ISPGO_Msk;
        i32TimeOutCnt = FMC_TIMEOUT_WRITE;

        while (FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)
        {
            if (i32TimeOutCnt-- <= 0)
            {
                i32RetCode = FMC_ERR_TIMEOUT;
                g_FMC_i32ErrCode = i32RetCode;
                break;
            }
        }

        if (FMC->ISPSTS & FMC_ISPSTS_ISPFF_Msk)
        {
            FMC->ISPSTS |= FMC_ISPSTS_ISPFF_Msk;
            i32RetCode = FMC_ERR_FAIL;
            g_FMC_i32ErrCode = i32RetCode;
        }
    }

    return i32RetCode;
}

/**
  * @brief Execute FMC_ISPCMD_READ command to read a word from flash.
  * @param[in]  u32Addr Address of the flash location to be read.
  *             It must be a word aligned address.
  * @return The word data read from specified flash address.
  *         Return 0xFFFFFFFF if read failed.
  * @note   Global error code g_FMC_i32ErrCode
  *         FMC_ERR_FAIL:     Read failed.
  *         FMC_ERR_TIMEOUT:  Read time-out.
  */
uint32_t FMC_Read(uint32_t u32Addr)
{
    int32_t i32TimeOutCnt;

    g_FMC_i32ErrCode = FMC_OK;
    FMC->ISPCMD = FMC_ISPCMD_READ;
    FMC->ISPADDR = u32Addr;
    FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = FMC_TIMEOUT_READ;

    while (FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            g_FMC_i32ErrCode = FMC_ERR_TIMEOUT;
            return 0xFFFFFFFFU;
        }
    }

    if (FMC->ISPSTS & FMC_ISPSTS_ISPFF_Msk)
    {
        g_FMC_i32ErrCode = FMC_ERR_FAIL;
        return 0xFFFFFFFFU;
    }

    return FMC->ISPDAT;
}


/**
  * @brief Execute FMC_ISPCMD_READ_64 command to read a double-word from flash.
  * @param[in]  u32Addr   Address of the flash location to be read.
  *             It must be a double-word aligned address.
  * @param[out] pu32Data0  holds data read from flash address u32Addr.
  * @param[out] pu32Data1  holds data read from flash address u32Addr + 4.
  * @return   FMC_OK:          Success
  * @return   FMC_ERR_TIMEOUT: Read time-out.
  * @return   FMC_ERR_FAIL:    Read failed.
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           FMC_ERR_TIMEOUT: Read time-out.
  *           FMC_ERR_FAIL:    Read failed.
  */
int32_t FMC_Read_64(uint32_t u32Addr, uint32_t *pu32Data0, uint32_t *pu32Data1)
{
    int32_t  i32RetCode = FMC_OK;
    int32_t i32TimeOutCnt;

    g_FMC_i32ErrCode = FMC_OK;
    FMC->ISPCMD  = FMC_ISPCMD_READ_64;
    FMC->ISPADDR = u32Addr;
    FMC->ISPDAT  = 0x0UL;
    FMC->ISPTRG  = FMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = FMC_TIMEOUT_READ;

    while (FMC->ISPSTS & FMC_ISPSTS_ISPBUSY_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            i32RetCode = FMC_ERR_TIMEOUT;
            g_FMC_i32ErrCode = i32RetCode;
            break;
        }
    }

    if (FMC->ISPSTS & FMC_ISPSTS_ISPFF_Msk)
    {
        FMC->ISPSTS |= FMC_ISPSTS_ISPFF_Msk;
        i32RetCode = FMC_ERR_FAIL;
        g_FMC_i32ErrCode = i32RetCode;
    }
    else
    {
        *pu32Data0 = FMC->MPDAT0;
        *pu32Data1 = FMC->MPDAT1;
    }

    return i32RetCode;
}

/**
  * @brief A wrapper function of FMC_Read_64
  */
int32_t FMC_Read8Bytes(uint32_t u32Addr, uint32_t *pu32Data0, uint32_t *pu32Data1)
{
    return FMC_Read_64(u32Addr, pu32Data0, pu32Data1);
}

/**
  * @brief Execute FMC_ISPCMD_READ_64 command to read a double-word from flash.
  * @param[in]  u32Addr   Address of the flash location to be read.
  *             It must be a double-word aligned address.
  * @param[out] au32Data     The output data array.
  *                          - au32Data[0]: holds data read from flash address u32Addr.
  *                          - au32Data[1]: holds data read from flash address u32Addr + 4.
  *                          - au32Data[2]: If ECC error happened, au32Data[2] holds the bit number of error bit.
  * @return   FMC_OK:          Success
  * @return   FMC_ERR_TIMEOUT: Read time-out.
  * @return   FMC_ERR_FAIL:    Read failed.
  * @return   FMC_ERR_ECC:     ECC error is detected.
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           FMC_ERR_TIMEOUT: Read time-out.
  *           FMC_ERR_FAIL:    Read failed.
  *           FMC_ERR_ECC:     ECC error is detected.
  */
int32_t FMC_Read_64_ECC(uint32_t u32Addr, uint32_t au32Data[])
{
    int32_t i32RetCode = 0;
    int32_t i32TimeOutCnt;

    g_FMC_i32ErrCode = FMC_OK;
    FMC->ISPCMD  = FMC_ISPCMD_READ_64;
    FMC->ISPADDR = u32Addr;
    FMC->MPDAT0  = 0;
    FMC->MPDAT1  = 0;
    FMC->MPDATE  = 0;
    FMC->ISPTRG  = FMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = FMC_TIMEOUT_READ;

    while (FMC->ISPSTS & FMC_ISPSTS_ISPBUSY_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            i32RetCode = FMC_ERR_TIMEOUT;
            g_FMC_i32ErrCode = i32RetCode;
            break;
        }
    }

    if (FMC->ISPSTS & FMC_ISPSTS_ISPFF_Msk)
    {
        FMC->ISPSTS = FMC_ISPSTS_ISPFF_Msk;
        i32RetCode = FMC_ERR_FAIL;
        g_FMC_i32ErrCode = i32RetCode;
    }
    else
    {
        au32Data[0] = FMC->MPDAT0;
        au32Data[1] = FMC->MPDAT1;

        if (FMC->ECCSTS != 0U)
        {
            i32RetCode = FMC_ERR_ECC;
            g_FMC_i32ErrCode = i32RetCode;

            if (FMC->MPDATE != 0U)   // Return ECC correction bit
            {
                uint32_t i;

                for (i = 0; i < (sizeof(s_au8FMC_ECC_ErrorBit) / sizeof(s_au8FMC_ECC_ErrorBit[0])); i++)
                {
                    if (s_au8FMC_ECC_ErrorBit[i] == FMC->MPDATE)
                    {
                        au32Data[2] = i;
                        break;
                    }
                }
            }
        }
    }

    return i32RetCode;
}

/**
  * @brief A wrapper function of FMC_Read_64_ECC
  */
int32_t FMC_Read8Bytes_ECC(uint32_t u32Addr, uint32_t au32Data[])
{
    return FMC_Read_64_ECC(u32Addr, au32Data);
}
/**
  * @brief Execute ISP FMC_ISPCMD_PROGRAM to program a word to flash.
  * @param[in]  u32Addr Address of the flash location to be programmed.
  *             It must be a word aligned address.
  * @param[in]  u32Data The word data to be programmed.
  * @retval   FMC_OK:          Success
  * @retval   FMC_ERR_FAIL:    Program failed.
  * @retval   FMC_ERR_TIMEOUT: Program time-out.
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           FMC_ERR_FAIL:    Program failed.
  *           FMC_ERR_TIMEOUT: Program time-out.
  */
int32_t FMC_Write(uint32_t u32Addr, uint32_t u32Data)
{
    int32_t i32TimeOutCnt;

    g_FMC_i32ErrCode = FMC_OK;
    FMC->ISPCMD = FMC_ISPCMD_PROGRAM;
    FMC->ISPADDR = u32Addr;
    FMC->ISPDAT = u32Data;
    FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = FMC_TIMEOUT_WRITE;

    while (FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            g_FMC_i32ErrCode = FMC_ERR_TIMEOUT;
            return g_FMC_i32ErrCode;
        }
    }

    if (FMC->ISPSTS & FMC_ISPSTS_ISPFF_Msk)
    {
        g_FMC_i32ErrCode = FMC_ERR_FAIL;
        return g_FMC_i32ErrCode;
    }

    return FMC_OK;
}

/**
  * @brief Execute ISP FMC_ISPCMD_PROGRAM_64 to program a double-word to flash.
  * @param[in]  u32Addr Address of the flash location to be programmed.
  *             It must be a double-word aligned address.
  * @param[in]  u32Data0   The word data to be programmed to flash address u32Addr.
  * @param[in]  u32Data1   The word data to be programmed to flash address u32Addr+4.
  * @retval   FMC_OK:          Success
  * @retval   FMC_ERR_FAIL:    Program failed.
  * @retval   FMC_ERR_TIMEOUT: Program time-out.
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           FMC_ERR_FAIL:    Program failed.
  *           FMC_ERR_TIMEOUT: Program time-out.
  */
int32_t FMC_Write8Bytes(uint32_t u32Addr, uint32_t u32Data0, uint32_t u32Data1)
{
    int32_t i32RetCode = FMC_OK;
    int32_t i32TimeOutCnt;

    g_FMC_i32ErrCode = FMC_OK;
    FMC->ISPCMD  = FMC_ISPCMD_PROGRAM_64;
    FMC->ISPADDR = u32Addr;
    FMC->MPDAT0  = u32Data0;
    FMC->MPDAT1  = u32Data1;
    FMC->ISPTRG  = FMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = FMC_TIMEOUT_WRITE;

    while (FMC->ISPSTS & FMC_ISPSTS_ISPBUSY_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            i32RetCode = FMC_ERR_TIMEOUT;
            g_FMC_i32ErrCode = i32RetCode;
        }
    }

    if (FMC->ISPSTS & FMC_ISPSTS_ISPFF_Msk)
    {
        FMC->ISPSTS |= FMC_ISPSTS_ISPFF_Msk;
        i32RetCode = FMC_ERR_FAIL;
        g_FMC_i32ErrCode = i32RetCode;
    }

    return i32RetCode;
}

/**
  * @brief Execute FMC_ISPCMD_READ command to read User Configuration.
  * @param[out]  au32Config A word array.
  *              au32Config[0] holds CONFIG0, while au32Config[1] holds CONFIG1.
  * @param[in] u32Count Available word count in u32Config.

  * @return Success or not.
  * @retval   FMC_OK:                Success
  * @retval   FMC_ERR_FAIL:          Read failed.
  * @retval   FMC_ERR_INVALID_PARAM: Invalid parameter.
  * @retval   FMC_ERR_TIMEOUT:       Read time-out.
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           FMC_ERR_FAIL:          Read failed.
  *           FMC_ERR_INVALID_PARAM: Invalid parameter.
  *           FMC_ERR_TIMEOUT:       Read time-out.
  */
int32_t FMC_ReadConfig(uint32_t au32Config[], uint32_t u32Count)
{
    int32_t  i32RetCode = FMC_OK;

    g_FMC_i32ErrCode = FMC_OK;

    if (u32Count > FMC_USER_CONFIG_CNT)
    {
        g_FMC_i32ErrCode = FMC_ERR_INVALID_PARAM;
    }
    else
    {
        uint32_t i;

        for (i = 0UL; i < u32Count; i++)
        {
            if (i < (uint32_t)FMC_CONT_CONFIG_CNT)
            {
                au32Config[i] = FMC_Read(FMC_CONFIG_BASE + (i << 2));
            }
            else
            {
                au32Config[i] = FMC_Read(FMC_USER_CONFIG_16 + ((i - (uint32_t)FMC_CONT_CONFIG_CNT) << 2));
            }

            if (g_FMC_i32ErrCode != FMC_OK)
            {
                break;
            }
        }
    }

    i32RetCode = g_FMC_i32ErrCode;
    return i32RetCode;
}


/**
  * @brief Execute ISP commands to erase then write User Configuration.
  * @param[in] u32ConfigAddr   Address of config word
  * @param[in] u32ConfigVal    New config value to be written.
  * @retval    FMC_OK:          Success
  * @retval    FMC_ERR_FAIL:    Erase/program/read config failed.
  * @retval    FMC_ERR_TIMEOUT: Erase/program/read config time-out.
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           FMC_ERR_FAIL:    Erase/program/read config failed.
  *           FMC_ERR_TIMEOUT: Erase/program/read config time-out.
  */
int32_t FMC_WriteConfig(uint32_t u32ConfigAddr, uint32_t u32ConfigVal)
{
    int32_t  i32RetCode = FMC_OK;
    uint32_t bIsCFGUEN = (FMC->ISPCTL & FMC_ISPCTL_CFGUEN_Msk) >> FMC_ISPCTL_CFGUEN_Pos;

    if (!bIsCFGUEN)
    {
        FMC_ENABLE_CFG_UPDATE();
    }

    if (FMC_EraseConfig(u32ConfigAddr) == FMC_OK)
    {
        if ((FMC_Read(u32ConfigAddr) == 0xFFFFFFFFU) && (g_FMC_i32ErrCode == FMC_OK))
        {
            if (FMC_Write(u32ConfigAddr, u32ConfigVal) == FMC_OK)
            {
                if ((FMC_Read(u32ConfigAddr) != u32ConfigVal) && (g_FMC_i32ErrCode == FMC_OK))
                {
                    g_FMC_i32ErrCode = FMC_ERR_FAIL;
                }
            }
        }
    }

    if (g_FMC_i32ErrCode != FMC_OK)
    {
        FMC_CLR_FAIL_FLAG();
        i32RetCode = g_FMC_i32ErrCode;
    }

    if (!bIsCFGUEN)
    {
        FMC_DISABLE_CFG_UPDATE();
    }

    return i32RetCode;
}

/**
  * @brief      Execute FMC_ISPCMD_CFG_ERASE command to erase a config word.
  * @param[in]  u32ConfigAddr Address of config word to be erased.
  * @return     ISP config erase success or not.
  * @retval     FMC_OK:          Success
  * @retval     FMC_ERR_FAIL:    Erase failed.
  * @retval     FMC_ERR_TIMEOUT: Erase time-out.
  *
  * @note       Global error code g_FMC_i32ErrCode
  *             FMC_ERR_FAIL:    Erase failed.
  *             FMC_ERR_TIMEOUT: Erase time-out.
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

    while (FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            i32RetCode = FMC_ERR_TIMEOUT;
            g_FMC_i32ErrCode = i32RetCode;
            break;
        }
    }

    if (FMC->ISPCTL & FMC_ISPCTL_ISPFF_Msk)
    {
        FMC->ISPCTL |= FMC_ISPCTL_ISPFF_Msk;
        i32RetCode = FMC_ERR_FAIL;
        g_FMC_i32ErrCode = i32RetCode;
    }

    return i32RetCode;
}


/**
  * @brief Run CRC32 checksum calculation and get result.
  * @param[in] u32Addr   Starting flash address. It must be a page aligned address.
  * @param[in] u32Count  Byte count of flash to be calculated. It must be multiple of page size.
  * @retval   0xFFFFFFFF: Invalid parameter or command failed.
  * @retval   Otherwise:  The CRC32 checksum result.
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           FMC_ERR_TIMEOUT:       Run/Read check sum time-out failed.
  *           FMC_ERR_INVALID_PARAM: u32Addr or u32Count must be aligned with page size.
  */
uint32_t  FMC_GetChkSum(uint32_t u32Addr, uint32_t u32Count)
{
    uint32_t u32RetCode;

    g_FMC_i32ErrCode = FMC_OK;

    if ((u32Addr % FMC_FLASH_PAGE_SIZE) || (u32Count % FMC_FLASH_PAGE_SIZE))
    {
        g_FMC_i32ErrCode = FMC_ERR_INVALID_PARAM;
        return 0xFFFFFFFFU;
    }
    else
    {
        int32_t  i32TimeOutCnt;

        FMC->ISPCMD  = FMC_ISPCMD_RUN_CKS;
        FMC->ISPADDR = u32Addr;
        FMC->ISPDAT  = u32Count;
        FMC->ISPTRG  = FMC_ISPTRG_ISPGO_Msk;

        i32TimeOutCnt = FMC_TIMEOUT_CHKSUM;

        while (FMC->ISPSTS & FMC_ISPSTS_ISPBUSY_Msk)
        {
            if (i32TimeOutCnt-- <= 0)
            {
                g_FMC_i32ErrCode = FMC_ERR_TIMEOUT;
                return 0xFFFFFFFFU;
            }
        }

        FMC->ISPCMD  = FMC_ISPCMD_READ_CKS;
        FMC->ISPADDR = u32Addr;
        FMC->ISPTRG  = FMC_ISPTRG_ISPGO_Msk;

        i32TimeOutCnt = FMC_TIMEOUT_CHKSUM;

        while (FMC->ISPSTS & FMC_ISPSTS_ISPBUSY_Msk)
        {
            if (i32TimeOutCnt-- <= 0)
            {
                g_FMC_i32ErrCode = FMC_ERR_TIMEOUT;
                return 0xFFFFFFFFU;
            }
        }

        u32RetCode = FMC->ISPDAT;
    }

    return u32RetCode;
}


/**
  * @brief Run flash all one verification and get result.
  * @param[in] u32Addr   Starting flash address. It must be a page aligned address.
  * @param[in] u32Count  Byte count of flash to be calculated. It must be multiple of page size.
  * @retval   READ_ALLONE_YES:      The contents of verified flash area are 0xFFFFFFFF.
  * @retval   READ_ALLONE_NOT:      Some contents of verified flash area are not 0xFFFFFFFF.
  * @retval   READ_ALLONE_CMD_FAIL: Unexpected error occurred.
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           FMC_ERR_FAIL:    RUN_ALL_ONE or CHECK_ALL_ONE command failed.
  *           FMC_ERR_TIMEOUT: RUN_ALL_ONE or CHECK_ALL_ONE command time-out.
  */
uint32_t  FMC_CheckAllOne(uint32_t u32Addr, uint32_t u32Count)
{
    uint32_t u32RetCode = READ_ALLONE_CMD_FAIL;
    int32_t  i32TimeOutCnt0;

    g_FMC_i32ErrCode = FMC_OK;

    FMC->ISPSTS   = FMC_ISPSTS_ALLONE_Msk;   /* Clear check all one bit */

    FMC->ISPCMD   = FMC_ISPCMD_RUN_ALL1;
    FMC->ISPADDR  = u32Addr;
    FMC->ISPDAT   = u32Count;
    FMC->ISPTRG   = FMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt0 = FMC_TIMEOUT_CHKALLONE;

    while (FMC->ISPSTS & FMC_ISPSTS_ISPBUSY_Msk)
    {
        if (i32TimeOutCnt0-- <= 0)
        {
            g_FMC_i32ErrCode = FMC_ERR_TIMEOUT;
            break;
        }
    }

    if (g_FMC_i32ErrCode == FMC_OK)
    {
        int32_t i32TimeOutCnt1 = FMC_TIMEOUT_CHKALLONE;

        do
        {
            FMC->ISPCMD = FMC_ISPCMD_READ_ALL1;
            FMC->ISPADDR = u32Addr;
            FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;

            i32TimeOutCnt0 = FMC_TIMEOUT_CHKALLONE;

            while (FMC->ISPSTS & FMC_ISPSTS_ISPBUSY_Msk)
            {
                if (i32TimeOutCnt0-- <= 0)
                {
                    g_FMC_i32ErrCode = FMC_ERR_TIMEOUT;
                    break;
                }
            }

            if (i32TimeOutCnt1-- <= 0)
            {
                g_FMC_i32ErrCode = FMC_ERR_TIMEOUT;
            }
        } while ((FMC->ISPDAT == 0UL) && (g_FMC_i32ErrCode == 0));
    }

    if (g_FMC_i32ErrCode == FMC_OK)
    {
        if (FMC->ISPDAT == READ_ALLONE_YES)
        {
            u32RetCode = READ_ALLONE_YES;
        }
        else if (FMC->ISPDAT == READ_ALLONE_NOT)
        {
            u32RetCode = READ_ALLONE_NOT;
        }
        else
        {
            g_FMC_i32ErrCode = FMC_ERR_FAIL;
        }
    }

    return u32RetCode;
}

/**
  * @brief Execute FMC_ISPCMD_BANK_REMAP command to remap Bank0/Bank1.
  * @param[in] u32Bank    Target bank number (0 or 1) to remap.
  * @return Bank remap operation success or not.
  * @retval   FMC_OK:          Success
  * @retval   FMC_ERR_FAIL:    Remap failed.
  * @retval   FMC_ERR_TIMEOUT: Remap time-out.
  *
  * @note     Global error code g_FMC_i32ErrCode as return value.
  */
int32_t FMC_RemapBank(uint32_t u32Bank)
{
    int32_t i32RetCode = FMC_OK;
    int32_t i32TimeOutCnt;

    g_FMC_i32ErrCode = FMC_OK;

    FMC->ISPCMD  = FMC_ISPCMD_BANK_REMAP;
    FMC->ISPADDR = u32Bank;
    FMC->ISPDAT  = 0x5AA55AA5UL;
    FMC->ISPTRG  = FMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = FMC_TIMEOUT_WRITE;

    while (FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            i32RetCode = FMC_ERR_TIMEOUT;
            g_FMC_i32ErrCode = i32RetCode;
            break;
        }
    }

    if (FMC->ISPCTL & FMC_ISPCTL_ISPFF_Msk)
    {
        FMC->ISPCTL |= FMC_ISPCTL_ISPFF_Msk;
        i32RetCode = FMC_ERR_FAIL;
        g_FMC_i32ErrCode = i32RetCode;
    }

    return i32RetCode;
}

/**@}*/ /* end of group FMC_EXPORTED_FUNCTIONS */
/**@}*/ /* end of group FMC_Driver */
/**@}*/ /* end of group Standard_Driver */

/*** (C) COPYRIGHT 2025 Nuvoton Technology Corp. ***/
