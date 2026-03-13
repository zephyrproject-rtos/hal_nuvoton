/******************************************************************************
 * @file     dfmc.c
 * @version  V1.00
 * @brief    DFMC driver source file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2025 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

#include <stdio.h>
#include "NuMicro.h"

/** @addtogroup Standard_Driver Standard Driver
    @{
*/

/** @addtogroup DFMC_Driver DFMC Driver
    @{
*/

/** @addtogroup DFMC_EXPORTED_FUNCTIONS DFMC Exported Functions
    @{
*/

//#define CHCKE_EE_INIT_STATUS
//#define CHCKE_PAGE_FULL_PROC

int32_t g_DFMC_i32ErrCode = DFMC_OK;    /*!< DFMC global error code */
/* MISRA Rule 8.9 Deviation: static buffer due to limited stack size */
static uint8_t s_au8DFMC_ECC_ErrorBit[] =
{
    0x03, 0x05, 0x06, 0x07, 0x09, 0x0A, 0x0B, 0x0C,
    0x0D, 0x0E, 0x0F, 0x11, 0x12, 0x13, 0x14, 0x15,
    0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D,
    0x1E, 0x1F, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26
};

/**
  * @brief   Enable DFMC ISP function
  * @param   None
  * @return  None
  * @details ISPEN bit of DFMC_ISPCTL must be set before we can use ISP commands.
  *          Therefore, To use all DFMC function APIs, user needs to call DFMC_Open() first to enable ISP functions.
  *
  * @note    ISP functions are write-protected. user also needs to unlock it by calling SYS_UnlockReg() before using all ISP functions.
  */
void DFMC_Open(void)
{
    DFMC->CYCCTL = FMC->CYCCTL;
    DFMC->ISPCTL |=  DFMC_ISPCTL_ISPEN_Msk;
}

/**
  * @brief   Disable DFMC ISP Functions
  * @param   None
  * @return  None
  * @details This function will clear ISPEN bit of DFMC_ISPCTL to disable ISP function.
  */
void DFMC_Close(void)
{
    DFMC->ISPCTL &= ~DFMC_ISPCTL_ISPEN_Msk;
}

/**
  * @brief     Execute DFMC_ISPCMD_PAGE_ERASE command to erase a flash page.
  *            The page size is DFMC_FLASH_PAGE_SIZE bytes.
  * @param[in] u32PageAddr Address of the flash page to be erased.
  *            It must be a DFMC_FLASH_PAGE_SIZE bytes aligned address.
  * @return    ISP page erase success or not.
  * @retval    DFMC_OK         : Success
  *            DFMC_ERR_FAIL   : Erase failed
  *            DFMC_ERR_TIMEOUT: Erase time-out
  *
  * @note      Global error code g_DFMC_i32ErrCode holds the same value as the return value
  */
int32_t DFMC_Erase(uint32_t u32PageAddr)
{
    int32_t i32RetCode = DFMC_OK;
    int32_t i32TimeOutCnt;

    g_DFMC_i32ErrCode = DFMC_OK;

    DFMC->ISPCMD  = DFMC_ISPCMD_PAGE_ERASE;
    DFMC->ISPADDR = u32PageAddr;
    DFMC->ISPTRG  = DFMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = DFMC_TIMEOUT_ERASE;

    while (DFMC->ISPTRG & DFMC_ISPTRG_ISPGO_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            i32RetCode = DFMC_ERR_TIMEOUT;
            g_DFMC_i32ErrCode = i32RetCode;
            break;
        }
    }

    if (DFMC->ISPCTL & DFMC_ISPCTL_ISPFF_Msk)
    {
        DFMC->ISPCTL |= DFMC_ISPCTL_ISPFF_Msk;
        i32RetCode = DFMC_ERR_FAIL;
        g_DFMC_i32ErrCode = i32RetCode;
    }

    return i32RetCode;
}

/**
  * @brief     Execute DFMC_ISPCMD_PAGE_ERASE command to erase a flash page with non-blocking mode. The page size is DFMC_FLASH_PAGE_SIZE bytes.
  * @param[in] u32PageAddr Address of the flash page to be erased.
  *            It must be a DFMC_FLASH_PAGE_SIZE bytes aligned address.
  * @return    None
  */
void DFMC_Erase_NonBlocking(uint32_t u32PageAddr)
{
    DFMC->ISPCMD  = DFMC_ISPCMD_PAGE_ERASE;
    DFMC->ISPADDR = u32PageAddr;
    DFMC->ISPTRG  = DFMC_ISPTRG_ISPGO_Msk;
}

/**
  * @brief  Execute DFMC_ISPCMD_MASS_ERASE command to erase entire data flash.
  * @return ISP mass erase success or not.
  * @retval DFMC_OK         : Success
  * @retval DFMC_ERR_FAIL   : Erase failed
  * @retval DFMC_ERR_TIMEOUT: Erase time-out
  *
  * @note  Global error code g_DFMC_i32ErrCode holds the same value as the return value
  */
int32_t DFMC_Mass_Erase(void)
{
    int32_t i32RetCode = DFMC_OK;
    int32_t i32TimeOutCnt;

    g_DFMC_i32ErrCode = DFMC_OK;

    DFMC->ISPCMD  = DFMC_ISPCMD_MASS_ERASE;
    DFMC->ISPADDR = DFMC_DFLASH_BASE;
    DFMC->ISPTRG  = DFMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = DFMC_TIMEOUT_ERASE;

    while (DFMC->ISPTRG & DFMC_ISPTRG_ISPGO_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            i32RetCode = DFMC_ERR_TIMEOUT;
            g_DFMC_i32ErrCode = i32RetCode;
            break;
        }
    }

    if (DFMC->ISPCTL & DFMC_ISPCTL_ISPFF_Msk)
    {
        DFMC->ISPCTL |= DFMC_ISPCTL_ISPFF_Msk;
        i32RetCode = DFMC_ERR_FAIL;
        g_DFMC_i32ErrCode = i32RetCode;
    }

    return i32RetCode;
}

/**
  * @brief  Execute DFMC_ISPCMD_MASS_ERASE command to erase a entire data flash with non-blocking mode.
  * @return None
  */
void DFMC_Mass_Erase_NonBlocking(void)
{
    DFMC->ISPCMD  = DFMC_ISPCMD_MASS_ERASE;
    DFMC->ISPADDR = DFMC_DFLASH_BASE;
    DFMC->ISPTRG  = DFMC_ISPTRG_ISPGO_Msk;
}

/**
  * @brief     Execute DFMC_ISPCMD_READ command to read a word from flash.
  * @param[in] u32Addr Address of the flash location to be read.
  *            It must be a word aligned address.
  * @return    The word data read from specified flash address.
  *            If return 0xFFFFFFFF, check g_DFMC_i32ErrCode to know if read is successful or not.
  * @note      Global error code g_DFMC_i32ErrCode
  *            DFMC_OK         : Success
  *            DFMC_ERR_FAIL   : Read failed
  *            DFMC_ERR_TIMEOUT: Read time-out
  */
uint32_t DFMC_Read(uint32_t u32Addr)
{
    int32_t i32TimeOutCnt;

    g_DFMC_i32ErrCode = DFMC_OK;

    DFMC->ISPCMD  = DFMC_ISPCMD_READ;
    DFMC->ISPADDR = u32Addr;
    DFMC->ISPTRG  = DFMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = DFMC_TIMEOUT_READ;

    while (DFMC->ISPSTS & DFMC_ISPSTS_ISPBUSY_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            g_DFMC_i32ErrCode = DFMC_ERR_TIMEOUT;
            return 0xFFFFFFFFU;
        }
    }

    if (DFMC->ISPCTL & DFMC_ISPCTL_ISPFF_Msk)
    {
        DFMC->ISPCTL |= DFMC_ISPCTL_ISPFF_Msk;
        g_DFMC_i32ErrCode = DFMC_ERR_FAIL;
        return 0xFFFFFFFFU;
    }

    return DFMC->ISPDAT;
}

/**
  * @brief      Execute DFMC_ISPCMD_READ_ECC command to read a word from flash.
  * @param[in]  u32Addr Address of the flash location to be read.
  *             It must be a word aligned address.
  * @param[out] pi32ErrBit
  *               -1    : No ECC Error
  *               Others: Error bit location if ECC single error is detected.
  * @return     The word data read from specified flash address.
  *             If return 0xFFFFFFFF, check g_DFMC_i32ErrCode to know if read is successful or not.
  * @note       Global error code g_DFMC_i32ErrCode
  *             DFMC_OK         : Success
  *             DFMC_ERR_FAIL   : Read failed
  *             DFMC_ERR_ECC    : ECC error is detected
  *             DFMC_ERR_TIMEOUT: Read time-out
  */
uint32_t DFMC_Read_ECC(uint32_t u32Addr, int32_t *pi32ErrBit)
{
    int32_t i32TimeOutCnt;

    g_DFMC_i32ErrCode = DFMC_OK;
    *pi32ErrBit = -1;

    DFMC->ISPCMD  = DFMC_ISPCMD_READ;
    DFMC->ISPADDR = u32Addr;
    DFMC->MPDATE  = 0;
    DFMC->ISPTRG  = DFMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = DFMC_TIMEOUT_READ;

    while (DFMC->ISPSTS & DFMC_ISPSTS_ISPBUSY_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            g_DFMC_i32ErrCode = DFMC_ERR_TIMEOUT;
            return 0xFFFFFFFFU;
        }
    }

    if (DFMC->ISPCTL & DFMC_ISPCTL_ISPFF_Msk)
    {
        DFMC->ISPCTL |= DFMC_ISPCTL_ISPFF_Msk;
        g_DFMC_i32ErrCode = DFMC_ERR_FAIL;
        return 0xFFFFFFFFU;
    }

    if (DFMC->ECCSTS != 0U)
    {
        g_DFMC_i32ErrCode = DFMC_ERR_ECC;

        if (DFMC->MPDATE != 0U)
        {
            uint32_t i;

            for (i = 0; i < (sizeof(s_au8DFMC_ECC_ErrorBit) / sizeof(s_au8DFMC_ECC_ErrorBit[0])); i++)
            {
                if (s_au8DFMC_ECC_ErrorBit[i] == DFMC->MPDATE)
                {
                    *pi32ErrBit = i;
                    break;
                }
            }
        }
    }

    return DFMC->ISPDAT;
}

/**
  * @brief     Execute ISP DFMC_ISPCMD_PROGRAM to program a word to flash.
  * @param[in] u32Addr Address of the flash location to be programmed.
  *            It must be a word aligned address.
  * @param[in] u32Data The word data to be programmed.
  * @return    DFMC_OK         : Success
  *            DFMC_ERR_FAIL   : Program failed
  *            DFMC_ERR_TIMEOUT: Program time-out
  *
  * @note      Global error code g_DFMC_i32ErrCode holds the same value as the return value
  */
int32_t DFMC_Write(uint32_t u32Addr, uint32_t u32Data)
{
    int32_t i32TimeOutCnt;

    g_DFMC_i32ErrCode = DFMC_OK;
    DFMC->ISPCMD  = DFMC_ISPCMD_PROGRAM;
    DFMC->ISPADDR = u32Addr;
    DFMC->ISPDAT  = u32Data;
    DFMC->ISPTRG  = DFMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = DFMC_TIMEOUT_WRITE;

    while (DFMC->ISPTRG & DFMC_ISPTRG_ISPGO_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            g_DFMC_i32ErrCode = DFMC_ERR_TIMEOUT;
            return DFMC_ERR_TIMEOUT;
        }
    }

    if (DFMC->ISPCTL & DFMC_ISPCTL_ISPFF_Msk)
    {
        DFMC->ISPCTL |= DFMC_ISPCTL_ISPFF_Msk;
        g_DFMC_i32ErrCode = DFMC_ERR_FAIL;
        return DFMC_ERR_FAIL;
    }

    return DFMC_OK;
}

/**
  * @brief     Execute ISP DFMC_ISPCMD_PROGRAM to program a word to flash in non-blocking mode.
  * @param[in] u32Addr Address of the flash location to be programmed.
  *            It must be a word aligned address.
  * @param[in] u32Data The word data to be programmed.
  * @return    None
  */
void DFMC_Write_NonBlocking(uint32_t u32Addr, uint32_t u32Data)
{
    DFMC->ISPCMD  = DFMC_ISPCMD_PROGRAM;
    DFMC->ISPADDR = u32Addr;
    DFMC->ISPDAT  = u32Data;
    DFMC->ISPTRG  = DFMC_ISPTRG_ISPGO_Msk;
}

/**
  * @brief     Run CRC32 checksum calculation and get result.
  * @param[in] u32Addr   Starting flash address. It must be a page aligned address.
  * @param[in] u32Count  Byte count of flash to be calculated. It must be multiple of page size.
  * @retval    0xFFFFFFFF  Invalid parameter or command failed.
  * @retval    Others      The CRC32 checksum value of specified flash area.
  *
  * @note      Global error code g_DFMC_i32ErrCode
  *            DFMC_OK           : Success
  *            DFMC_ERR_TIMEOUT  : Run/Read check sum time-out
  *            DFMC_ERR_FAIL     : Run/Read check sum failed
  *            DFMC_ERR_NON_ALIGN: u32Addr or u32Count must be aligned with page size
  */
uint32_t  DFMC_GetChkSum(uint32_t u32Addr, uint32_t u32Count)
{
    uint32_t u32RetCode;

    g_DFMC_i32ErrCode = DFMC_OK;

    if ((u32Addr % DFMC_FLASH_PAGE_SIZE) || (u32Count % DFMC_FLASH_PAGE_SIZE))
    {
        g_DFMC_i32ErrCode = DFMC_ERR_NON_ALIGN;
        return 0xFFFFFFFFU;
    }
    else
    {
        int32_t  i32TimeOutCnt;

        DFMC->ISPCMD  = DFMC_ISPCMD_RUN_CKS;
        DFMC->ISPADDR = u32Addr;
        DFMC->ISPDAT  = u32Count;
        DFMC->ISPTRG  = DFMC_ISPTRG_ISPGO_Msk;

        i32TimeOutCnt = DFMC_TIMEOUT_CHKSUM;

        while (DFMC->ISPSTS & DFMC_ISPSTS_ISPBUSY_Msk)
        {
            if (i32TimeOutCnt-- <= 0)
            {
                g_DFMC_i32ErrCode = DFMC_ERR_TIMEOUT;
                return 0xFFFFFFFFU;
            }
        }

        if (DFMC->ISPCTL & DFMC_ISPCTL_ISPFF_Msk)
        {
            DFMC->ISPCTL |= DFMC_ISPCTL_ISPFF_Msk;
            g_DFMC_i32ErrCode = DFMC_ERR_FAIL;
            return 0xFFFFFFFFU;
        }

        DFMC->ISPCMD  = DFMC_ISPCMD_READ_CKS;
        DFMC->ISPADDR = u32Addr;
        DFMC->ISPTRG  = DFMC_ISPTRG_ISPGO_Msk;

        i32TimeOutCnt = DFMC_TIMEOUT_CHKSUM;

        while (DFMC->ISPSTS & DFMC_ISPSTS_ISPBUSY_Msk)
        {
            if (i32TimeOutCnt-- <= 0)
            {
                g_DFMC_i32ErrCode = DFMC_ERR_TIMEOUT;
                return 0xFFFFFFFFU;
            }
        }

        if (DFMC->ISPCTL & DFMC_ISPCTL_ISPFF_Msk)
        {
            DFMC->ISPCTL |= DFMC_ISPCTL_ISPFF_Msk;
            g_DFMC_i32ErrCode = DFMC_ERR_FAIL;
            return 0xFFFFFFFFU;
        }

        u32RetCode = DFMC->ISPDAT;
    }

    return u32RetCode;
}

/**
  * @brief     Run flash all one verification and get result.
  * @param[in] u32Addr   Starting flash address. It must be a page aligned address.
  * @param[in] u32Count  Byte count of flash to be calculated. It must be multiple of page size.
  * @retval    READ_ALLONE_YES     : The contents of verified flash area are 0xFFFFFFFF.
  * @retval    READ_ALLONE_NOT     : Some contents of verified flash area are not 0xFFFFFFFF.
  * @retval    READ_ALLONE_CMD_FAIL: Unexpected error occurred.
  *
  * @note      Global error code g_DFMC_i32ErrCode
  *            DFMC_OK         : Success
  *            DFMC_ERR_TIMEOUT: RUN_ALL_ONE or CHECK_ALL_ONE command time-out
  *            DFMC_ERR_FAIL   : RUN_ALL_ONE or CHECK_ALL_ONE command failed
  */
uint32_t  DFMC_CheckAllOne(uint32_t u32Addr, uint32_t u32Count)
{
    uint32_t u32RetCode = READ_ALLONE_CMD_FAIL;
    int32_t  i32TimeOutCnt0;

    g_DFMC_i32ErrCode = DFMC_OK;

    DFMC->ISPSTS = DFMC_ISPSTS_ALLONE_Msk;   /* Clear check all one bit */

    DFMC->ISPCMD   = DFMC_ISPCMD_RUN_ALL1;
    DFMC->ISPADDR  = u32Addr;
    DFMC->ISPDAT   = u32Count;
    DFMC->ISPTRG   = DFMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt0 = DFMC_TIMEOUT_CHKALLONE;

    while (DFMC->ISPSTS & DFMC_ISPSTS_ISPBUSY_Msk)
    {
        if (i32TimeOutCnt0-- <= 0)
        {
            g_DFMC_i32ErrCode = DFMC_ERR_TIMEOUT;
            break;
        }
    }

    if (DFMC->ISPCTL & DFMC_ISPCTL_ISPFF_Msk)
    {
        DFMC->ISPCTL |= DFMC_ISPCTL_ISPFF_Msk;
        g_DFMC_i32ErrCode = DFMC_ERR_FAIL;
    }

    if (g_DFMC_i32ErrCode == DFMC_OK)
    {
        int32_t i32TimeOutCnt1 = DFMC_TIMEOUT_CHKALLONE;

        do
        {
            DFMC->ISPCMD = DFMC_ISPCMD_READ_ALL1;
            DFMC->ISPADDR = u32Addr;
            DFMC->ISPTRG = DFMC_ISPTRG_ISPGO_Msk;

            i32TimeOutCnt0 = DFMC_TIMEOUT_CHKALLONE;

            while (DFMC->ISPSTS & DFMC_ISPSTS_ISPBUSY_Msk)
            {
                if (i32TimeOutCnt0-- <= 0)
                {
                    g_DFMC_i32ErrCode = DFMC_ERR_TIMEOUT;
                    break;
                }
            }

            if (i32TimeOutCnt1-- <= 0)
            {
                g_DFMC_i32ErrCode = DFMC_ERR_TIMEOUT;
            }
        } while ((DFMC->ISPDAT == 0UL) && (g_DFMC_i32ErrCode == DFMC_OK));
    }

    if (g_DFMC_i32ErrCode == DFMC_OK)
    {
        if (DFMC->ISPDAT == DFMC_READ_ALLONE_YES)
        {
            u32RetCode = DFMC_READ_ALLONE_YES;
        }
        else if (DFMC->ISPDAT == DFMC_READ_ALLONE_NOT)
        {
            u32RetCode = DFMC_READ_ALLONE_NOT;
        }
        else
        {
            g_DFMC_i32ErrCode = DFMC_ERR_FAIL;
        }
    }

    return u32RetCode;
}

/**
  * @brief     Execute DFMC_ISPCMD_EEPROM_INIT command to initialize EEPROM.
  * @param[in] None
  * @retval    DFMC_OK         : Success
  * @retval    DFMC_ERR_FAIL   : Init failed
  * @retval    DFMC_ERR_TIMEOUT: Init time-out
  *
  * @note      Global error code g_DFMC_i32ErrCode holds the same value as the return value
  */
int32_t DFMC_EEPROM_Init(void)
{
    int32_t i32TimeOutCnt;

    g_DFMC_i32ErrCode = DFMC_OK;

    DFMC->ISPCMD  = DFMC_ISPCMD_EEPROM_INIT;
    DFMC->ISPADDR = DFMC_EEPROM_BASE;
    DFMC->ISPTRG  = DFMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = DFMC_TIMEOUT_EEPROM_INIT;

    while (DFMC->ISPTRG & DFMC_ISPTRG_ISPGO_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            g_DFMC_i32ErrCode = DFMC_ERR_TIMEOUT;
            return DFMC_ERR_TIMEOUT;
        }
    }

#if defined (CHCKE_EE_INIT_STATUS) && (CHCKE_EE_INIT_STATUS == 1)
    i32TimeOutCnt = DFMC_TIMEOUT_EEPROM_INIT;

    while (DFMC->ISPSTS & DFMC_ISPSTS_EEP_INIT_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            g_DFMC_i32ErrCode = DFMC_ERR_TIMEOUT;
            return DFMC_ERR_TIMEOUT;
        }
    }

#endif

    if (DFMC->ISPSTS & DFMC_ISPSTS_ISPFF_Msk)
    {
        DFMC->ISPSTS = DFMC_ISPSTS_ISPFF_Msk;
        g_DFMC_i32ErrCode = DFMC_ERR_FAIL;

        return DFMC_ERR_FAIL;
    }

    return DFMC_OK;
}

/**
  * @brief     Execute DFMC_ISPCMD_EEPROM_READ command to read a word from EEPROM.
  * @param[in] u32Addr Address of the EEPROM location to be read.
  *            It must be a word aligned address.
  * @return    The word data read from specified EEPROM address.
  *            If return 0xFFFFFFFF, check g_DFMC_i32ErrCode to know if read is successful or not.
  * @note      Global error code g_DFMC_i32ErrCode
  *            DFMC_OK         : Success
  *            DFMC_ERR_FAIL   : Read failed
  *            DFMC_ERR_TIMEOUT: Read time-out
  */
uint32_t DFMC_EEPROM_Read(uint32_t u32Addr)
{
    int32_t i32TimeOutCnt;

    g_DFMC_i32ErrCode = DFMC_OK;

#if defined (CHCKE_PAGE_FULL_PROC) && (CHCKE_PAGE_FULL_PROC == 1)
    i32TimeOutCnt = DFMC_TIMEOUT_ERASE;

    while (DFMC->ISPSTS & DFMC_ISPSTS_EEP_PGFULL_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            g_DFMC_i32ErrCode = DFMC_ERR_TIMEOUT;
            return 0xFFFFFFFF;
        }
    }

#endif

    DFMC->ISPCMD  = DFMC_ISPCMD_EEPROM_READ;
    DFMC->ISPADDR = u32Addr;
    DFMC->ISPTRG  = DFMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = DFMC_TIMEOUT_EEPROM_INIT;

    while (DFMC->ISPTRG & DFMC_ISPTRG_ISPGO_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            g_DFMC_i32ErrCode = DFMC_ERR_TIMEOUT;
            return 0xFFFFFFFFU;
        }
    }

    if (DFMC->ISPSTS & DFMC_ISPSTS_ISPFF_Msk)
    {
        DFMC->ISPSTS = DFMC_ISPSTS_ISPFF_Msk;
        g_DFMC_i32ErrCode = DFMC_ERR_FAIL;
        return 0xFFFFFFFFU;
    }

    return DFMC->ISPDAT;
}

/**
  * @brief     Execute ISP DFMC_ISPCMD_EEPROM_WRITE_BYTE to program a byte to EEPROM.
  * @param[in] u32Addr Address of the EEPROM location to be programmed.
  *            It must be a byte aligned address.
  * @param[in] u8Data The byte data to be programmed.
  * @retval    DFMC_OK         : Success
  * @retval    DFMC_ERR_FAIL   : Program failed
  * @retval    DFMC_ERR_TIMEOUT: Program time-out
  *
  * @note      Global error code g_DFMC_i32ErrCode holds the same value as the return value
  */
int32_t DFMC_EEPROM_WriteByte(uint32_t u32Addr, uint8_t u8Data)
{
    int32_t i32TimeOutCnt;

    g_DFMC_i32ErrCode = DFMC_OK;

#if defined (CHCKE_PAGE_FULL_PROC) && (CHCKE_PAGE_FULL_PROC == 1)
    i32TimeOutCnt = DFMC_TIMEOUT_ERASE;

    while (DFMC->ISPSTS & DFMC_ISPSTS_EEP_PGFULL_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            g_DFMC_i32ErrCode = DFMC_ERR_TIMEOUT;
            return DFMC_ERR_TIMEOUT;
        }
    }

#endif

    DFMC->ISPCMD  = DFMC_ISPCMD_EEPROM_WRITE_BYTE;
    DFMC->ISPADDR = u32Addr;
    DFMC->ISPDAT  = u8Data;
    DFMC->ISPTRG  = DFMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = DFMC_TIMEOUT_WRITE;

    while (DFMC->ISPTRG & DFMC_ISPTRG_ISPGO_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            g_DFMC_i32ErrCode = DFMC_ERR_TIMEOUT;
            return DFMC_ERR_TIMEOUT;
        }
    }

    if (DFMC->ISPSTS & DFMC_ISPSTS_ISPFF_Msk)
    {
        DFMC->ISPSTS = DFMC_ISPSTS_ISPFF_Msk;
        g_DFMC_i32ErrCode = DFMC_ERR_FAIL;
        return DFMC_ERR_FAIL;
    }

    return DFMC_OK;
}

/**
  * @brief     Execute ISP DFMC_ISPCMD_EEPROM_WRITE_WORD to program a word to EEPROM.
  * @param[in] u32Addr Address of the EEPROM location to be programmed.
  *            It must be a word aligned address.
  * @param[in] u32Data The word data to be programmed.
  * @retval    DFMC_OK         : Success
  * @retval    DFMC_ERR_FAIL   : Program failed
  * @retval    DFMC_ERR_TIMEOUT: Program time-out
  *
  * @note      Global error code g_DFMC_i32ErrCode holds the same value as the return value
  */
int32_t DFMC_EEPROM_Write(uint32_t u32Addr, uint32_t u32Data)
{
    int32_t i32TimeOutCnt;

    g_DFMC_i32ErrCode = DFMC_OK;

#if defined (CHCKE_PAGE_FULL_PROC) && (CHCKE_PAGE_FULL_PROC == 1)
    i32TimeOutCnt = DFMC_TIMEOUT_ERASE;

    while (DFMC->ISPSTS & DFMC_ISPSTS_EEP_PGFULL_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            g_DFMC_i32ErrCode = DFMC_ERR_TIMEOUT;
            return DFMC_ERR_TIMEOUT;
        }
    }

#endif

    DFMC->ISPCMD  = DFMC_ISPCMD_EEPROM_WRITE_WORD;
    DFMC->ISPADDR = u32Addr;
    DFMC->ISPDAT  = u32Data;
    DFMC->ISPTRG  = DFMC_ISPTRG_ISPGO_Msk;

    i32TimeOutCnt = DFMC_TIMEOUT_WRITE;

    while (DFMC->ISPTRG & DFMC_ISPTRG_ISPGO_Msk)
    {
        if (i32TimeOutCnt-- <= 0)
        {
            g_DFMC_i32ErrCode = DFMC_ERR_TIMEOUT;
            return DFMC_ERR_TIMEOUT;
        }
    }

    if (DFMC->ISPSTS & DFMC_ISPSTS_ISPFF_Msk)
    {
        DFMC->ISPSTS = DFMC_ISPSTS_ISPFF_Msk;
        g_DFMC_i32ErrCode = DFMC_ERR_FAIL;
        return DFMC_ERR_FAIL;
    }

    return DFMC_OK;
}

/**@}*/ /* end of group DFMC_EXPORTED_FUNCTIONS */
/**@}*/ /* end of group DFMC_Driver */
/**@}*/ /* end of group Standard_Driver */

/*** (C) COPYRIGHT 2025 Nuvoton Technology Corp. ***/
