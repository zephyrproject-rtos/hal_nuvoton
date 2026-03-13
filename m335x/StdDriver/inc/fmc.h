/******************************************************************************
 * @file     fmc.h
 * @version  V1.00
 * @brief    FMC driver header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2025 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __FMC_H__
#define __FMC_H__

#ifdef __cplusplus
extern "C"
{
#endif

/** @addtogroup Standard_Driver Standard Driver
    @{
*/

/** @addtogroup FMC_Driver FMC Driver
    @{
*/

/** @addtogroup FMC_EXPORTED_CONSTANTS FMC Exported Constants
    @{
*/

/*---------------------------------------------------------------------------------------------------------*/
/* Define Base Address                                                                                     */
/*---------------------------------------------------------------------------------------------------------*/
#define FMC_APROM_BASE          0x00000000UL                            /*!< APROM base address                 \hideinitializer */
#define FMC_APROM_BANK_SIZE     0x00080000UL                            /*!< APROM Bank Size                    \hideinitializer */
#define FMC_APROM_BANK0_END     (FMC_APROM_BASE + FMC_APROM_BANK_SIZE)  /*!< APROM bank0 end address            \hideinitializer */
#define FMC_APROM_BANK0_BASE    FMC_APROM_BASE                          /*!< APROM bank0 base address           \hideinitializer */
#define FMC_APROM_BANK1_BASE    FMC_APROM_BANK0_END                     /*!< APROM bank1 base address           \hideinitializer */
#define FMC_APROM_SIZE          (FMC_APROM_BANK_SIZE * 2)               /*!< APROM Size                         \hideinitializer */
#define FMC_APROM_END           (FMC_APROM_BASE + FMC_APROM_SIZE)       /*!< APROM end address                  \hideinitializer */
#define FMC_APROM_BANK1_END     FMC_APROM_END                           /*!< APROM bank1 end address            \hideinitializer */
#define FMC_BANK_SIZE           FMC_APROM_BANK_SIZE                     /*!< For backward compatible            \hideinitializer */

#define FMC_LDROM_BASE          0x0F100000UL                            /*!< LDROM base address                 \hideinitializer */
#define FMC_LDROM_SIZE          0x4000UL                                /*!< LDROM Size                         \hideinitializer */
#define FMC_LDROM_END           (FMC_LDROM_BASE + FMC_LDROM_SIZE)       /*!< LDROM end address                  \hideinitializer */

#define FMC_DATA_FLASH_BASE     0x0F200000UL                            /*!< Data Flash base address            \hideinitializer */
#define FMC_DATA_FLASH_SIZE     0x4000UL                                /*!< Data Flash Size                    \hideinitializer */
#define FMC_DATA_FLASH_END      (FMC_DATA_FLASH_BASE + FMC_DATA_FLASH_SIZE)  /*!< Data Flash end address        \hideinitializer */

#define FMC_XOM_BASE            0x0F300040UL                            /*!< XOM  Base Address                  \hideinitializer */
#define FMC_XOM_SIZE            0x0F300044UL                            /*!< XOM  Size                          \hideinitializer */
#define FMC_XOM_CTRL            0x0F300048UL                            /*!< XOM  Control                       \hideinitializer */
#define FMC_XOMR0_BASE          FMC_XOM_BASE                            /*!< XOMR 0 Base Address                \hideinitializer */
#define FMC_XOMR1_BASE          (FMC_XOM_BASE + 0x10UL)                 /*!< XOMR 1 Base Address                \hideinitializer */

#define FMC_CONFIG_BASE         0x0F300000UL                            /*!< User Configuration address         \hideinitializer */
#define FMC_USER_CONFIG_0       (FMC_CONFIG_BASE + 0x00UL)              /*!< User Config 0 address              \hideinitializer */
#define FMC_USER_CONFIG_1       (FMC_CONFIG_BASE + 0x04UL)              /*!< User Config 1 address              \hideinitializer */
#define FMC_USER_CONFIG_2       (FMC_CONFIG_BASE + 0x08UL)              /*!< User Config 2 address              \hideinitializer */
#define FMC_USER_CONFIG_3       (FMC_CONFIG_BASE + 0x0CUL)              /*!< User Config 3 address              \hideinitializer */
#define FMC_USER_CONFIG_4       (FMC_CONFIG_BASE + 0x10UL)              /*!< User Config 4 address              \hideinitializer */
#define FMC_USER_CONFIG_5       (FMC_CONFIG_BASE + 0x14UL)              /*!< User Config 5 address              \hideinitializer */
#define FMC_USER_CONFIG_6       (FMC_CONFIG_BASE + 0x18UL)              /*!< User Config 6 address              \hideinitializer */
#define FMC_USER_CONFIG_8       (FMC_CONFIG_BASE + 0x20UL)              /*!< User Config 8 address              \hideinitializer */
#define FMC_USER_CONFIG_9       (FMC_CONFIG_BASE + 0x24UL)              /*!< User Config 9 address              \hideinitializer */
#define FMC_USER_CONFIG_10      (FMC_CONFIG_BASE + 0x28UL)              /*!< User Config 10 address             \hideinitializer */
#define FMC_USER_CONFIG_11      (FMC_CONFIG_BASE + 0x2CUL)              /*!< User Config 11 address             \hideinitializer */
#define FMC_USER_CONFIG_12      (FMC_CONFIG_BASE + 0x30UL)              /*!< User Config 12 address             \hideinitializer */
#define FMC_USER_CONFIG_13      (FMC_CONFIG_BASE + 0x34UL)              /*!< User Config 13 address             \hideinitializer */
#define FMC_USER_CONFIG_14      (FMC_CONFIG_BASE + 0x38UL)              /*!< User Config 14 address             \hideinitializer */
#define FMC_USER_CONFIG_16      (FMC_CONFIG_BASE + 0x80UL)              /*!< User Config 16 address             \hideinitializer */
#define FMC_USER_CONFIG_17      (FMC_CONFIG_BASE + 0x84UL)              /*!< User Config 17 address             \hideinitializer */
#define FMC_USER_CONFIG_18      (FMC_CONFIG_BASE + 0x88UL)              /*!< User Config 18 address             \hideinitializer */
#define FMC_USER_CONFIG_CNT     19UL                                    /*!< Total User Config count            \hideinitializer */
#define FMC_CONT_CONFIG_CNT     16
#define FMC_SCRLOCK_BASE        (FMC_USER_CONFIG_11)                    /*!< Secure Region Lock base address    \hideinitializer */
#define FMC_NSCBA_BASE          (FMC_USER_CONFIG_12)                    /*!< Non-Secure base address            \hideinitializer */
#define FMC_ARLOCK_BASE         (FMC_USER_CONFIG_13)                    /*!< All Region Lock base address       \hideinitializer */

#define FMC_SOTP_BASE           0x0F320000UL                            /*!< Secure OTP base address            \hideinitializer */
#define FMC_SOTP_SIZE           0x00000200UL                            /*!< Secure OTP size                    \hideinitializer */
#define FMC_SOTP_END            (FMC_SOTP_BASE + FMC_SOTP_SIZE)         /*!< Secure OTP end address             \hideinitializer */
#define FMC_SOTP_MEUREN         0x0F3203F4UL                            /*!< Mass Erase Unlock Revoke Enable    \hideinitializer */
#define FMC_SOTP_LOCK           0x0F3203F8UL                            /*!< Secure OTP Lock                    \hideinitializer */
#define FMC_SOTP_REVOKE         0x0F3203FCUL                            /*!< Secure OTP Revoke                  \hideinitializer */

#define FMC_FLASH_PAGE_SIZE     0x2000UL                                /*!< Flash Page Size (8K bytes)         \hideinitializer */
#define FMC_VECMAP_SIZE         0x400UL                                 /*!< VECMAP Size (1024 bytes)           \hideinitializer */
#define FMC_PAGE_ADDR_MASK      0xFFFFE000UL                            /*!< Flash page address mask            \hideinitializer */
#define FMC_APWPROT_BLOCK_SIZE  0x8000UL                                /*!< APWPROT block size (32K bytes)     \hideinitializer */
#define FMC_LDWPROT_BLK_SIZE    0x2000UL                                /*!< LDWPROT block size (8K bytes)      \hideinitializer */
#define FMC_DFWPROT_BLK_SIZE    0x2000UL                                /*!< DFWPROT block size (8K bytes)      \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  XOM region number constant definitions                                                                 */
/*---------------------------------------------------------------------------------------------------------*/
#define XOMR0                   0UL             /*!< XOM region 0                           \hideinitializer */
#define XOMR1                   1UL             /*!< XOM region 1                           \hideinitializer */
#define XOMR_CNT                2UL             /*!< Total XOM region count                 \hideinitializer */
#define XOMR_ACTIVE             1UL             /*!< XOM region is active                   \hideinitializer */
#define XOMR_INACTIVE           0UL             /*!< XOM region is not active               \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  ISPCMD Constant Definitions                                                                            */
/*---------------------------------------------------------------------------------------------------------*/
#define FMC_ISPCMD_READ         0x00UL          /*!< ISP Command: Read flash word           \hideinitializer */
#define FMC_ISPCMD_READ_UID     0x04UL          /*!< ISP Command: Read Unique ID            \hideinitializer */
#define FMC_ISPCMD_READ_ALL1    0x08UL          /*!< ISP Command: Read all-one result       \hideinitializer */
#define FMC_ISPCMD_READ_CID     0x0BUL          /*!< ISP Command: Read Company ID           \hideinitializer */
#define FMC_ISPCMD_READ_DID     0x0CUL          /*!< ISP Command: Read Device ID            \hideinitializer */
#define FMC_ISPCMD_READ_CKS     0x0DUL          /*!< ISP Command: Read checksum             \hideinitializer */
#define FMC_ISPCMD_PROGRAM      0x21UL          /*!< ISP Command: Write flash word          \hideinitializer */
#define FMC_ISPCMD_PAGE_ERASE   0x22UL          /*!< ISP Command: Page Erase Flash          \hideinitializer */
#define FMC_ISPCMD_BANK_ERASE   0x23UL          /*!< ISP Command: Erase Flash bank          \hideinitializer */
#define FMC_ISPCMD_CFG_ERASE    0x24UL          /*!< ISP Command: Erase config word         \hideinitializer */
#define FMC_ISPCMD_RUN_ALL1     0x28UL          /*!< ISP Command: Run all-one verification  \hideinitializer */
#define FMC_ISPCMD_BANK_REMAP   0x2CUL          /*!< ISP Command: Bank Remap                \hideinitializer */
#define FMC_ISPCMD_RUN_CKS      0x2DUL          /*!< ISP Command: Run checksum calculation  \hideinitializer */
#define FMC_ISPCMD_VECMAP       0x2EUL          /*!< ISP Command: Vector Page Remap         \hideinitializer */
#define FMC_ISPCMD_READ_64      0x40UL          /*!< ISP Command: Read double flash word    \hideinitializer */
#define FMC_ISPCMD_PROGRAM_64   0x61UL          /*!< ISP Command: Write double flash word   \hideinitializer */
#define FMC_ISPCMD_READ_NO_ECC  0x60UL          /*!< ISP Command: Read double flash word    \hideinitializer */
#define FMC_ISPCMD_PROGRAM_ECC  0x41UL          /*!< ISP Command: Write double flash word   \hideinitializer */

#define READ_ALLONE_YES         0xA11FFFFFUL    /*!< Check-all-one result is all one.       \hideinitializer */
#define READ_ALLONE_NOT         0xA1100000UL    /*!< Check-all-one result is not all one.   \hideinitializer */
#define READ_ALLONE_CMD_FAIL    0xFFFFFFFFUL    /*!< Check-all-one command failed.          \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/* FMC Time-out Handler Constant Definitions                                                               */
/*---------------------------------------------------------------------------------------------------------*/
#define FMC_TIMEOUT_READ        (SystemCoreClock >> 3)      /*!< Read command time-out 125 ms               \hideinitializer */
#define FMC_TIMEOUT_WRITE       (SystemCoreClock >> 3)      /*!< Write command time-out 125 ms              \hideinitializer */
#define FMC_TIMEOUT_ERASE       (SystemCoreClock >> 2)      /*!< Erase command time-out 250 ms              \hideinitializer */
#define FMC_TIMEOUT_CHKSUM      (SystemCoreClock << 1)      /*!< Get checksum command time-out 2 s          \hideinitializer */
#define FMC_TIMEOUT_CHKALLONE   (SystemCoreClock << 1)      /*!< Check-all-one command time-out 2 s         \hideinitializer */
#define FMC_OK                  ( 0L)                       /*!< FMC operation OK                           \hideinitializer */
#define FMC_ERR_FAIL            (-1L)                       /*!< FMC operation failed                       \hideinitializer */
#define FMC_ERR_TIMEOUT         (-2L)                       /*!< FMC operation abort due to timeout error   \hideinitializer */
#define FMC_ERR_ECC             (-3L)                       /*!< FMC read has ecc error                     \hideinitializer */
#define FMC_ERR_INVALID_PARAM   (-4L)                       /*!< FMC read has ecc error                     \hideinitializer */
#define FMC_ERR_XOM_INACTIVE    (-5L)                       /*!< FMC read has ecc error                     \hideinitializer */

/** @} end of group FMC_EXPORTED_CONSTANTS */

/** @addtogroup FMC_EXPORTED_MACROS FMC Exported Macros
    @{
*/
/*---------------------------------------------------------------------------------------------------------*/
/*  Macros                                                                                                 */
/*---------------------------------------------------------------------------------------------------------*/

/**
 * @brief      Enable APROM Update Function
 * @param      None
 * @return     None
 * @details    This function will set APUEN bit of FMC_ISPCTL control register to enable APROM update function.
 *             User needs to set APUEN bit before they can update APROM.
 */
#define FMC_ENABLE_AP_UPDATE()      (FMC->ISPCTL |=  FMC_ISPCTL_APUEN_Msk)                      /*!< Enable APROM update        \hideinitializer */

/**
 * @brief      Disable APROM Update Function
 * @param      None
 * @return     None
 * @details    This function will clear APUEN bit of FMC_ISPCTL control register to disable APROM update function.
 */
#define FMC_DISABLE_AP_UPDATE()     (FMC->ISPCTL &= ~FMC_ISPCTL_APUEN_Msk)                      /*!< Disable APROM update       \hideinitializer */

/**
 * @brief      Enable User Configuration Update Function
 * @param      None
 * @return     None
 * @details    This function will set CFGUEN bit of FMC_ISPCTL control register to enable User Configuration update function.
 *             User needs to set CFGUEN bit before they can update User Configuration area.
 */
#define FMC_ENABLE_CFG_UPDATE()     (FMC->ISPCTL |=  FMC_ISPCTL_CFGUEN_Msk)                     /*!< Enable User Config update  \hideinitializer */

/**
 * @brief      Disable User Configuration Update Function
 * @param      None
 * @return     None
 * @details    This function will clear CFGUEN bit of FMC_ISPCTL control register to disable User Configuration update function.
 */
#define FMC_DISABLE_CFG_UPDATE()    (FMC->ISPCTL &= ~FMC_ISPCTL_CFGUEN_Msk)                     /*!< Disable User Config update \hideinitializer */

/**
 * @brief      Enable LDROM Update Function
 * @param      None
 * @return     None
 * @details    This function will set LDUEN bit of FMC_ISPCTL control register to enable LDROM update function.
 *             User needs to set LDUEN bit before they can update LDROM.
 */
#define FMC_ENABLE_LD_UPDATE()      (FMC->ISPCTL |=  FMC_ISPCTL_LDUEN_Msk)                      /*!< Enable LDROM update        \hideinitializer */

/**
 * @brief      Disable LDROM Update Function
 * @param      None
 * @return     None
 * @details    This function will set ISPEN bit of FMC_ISPCTL control register to disable LDROM update function.
 *
 */
#define FMC_DISABLE_LD_UPDATE()     (FMC->ISPCTL &= ~FMC_ISPCTL_LDUEN_Msk)                      /*!< Disable LDROM update       \hideinitializer */

/**
 * @brief      Enable Data Flash Update Function
 * @param      None
 * @return     None
 * @details    This function will set DFUEN bit of FMC_ISPCTL control register to enable Data Flash update function.
 *             User needs to set DFUEN bit before they can update Data Flash.
 */
#define FMC_ENABLE_DF_UPDATE()      (FMC->ISPCTL |=  FMC_ISPCTL_DFUEN_Msk)                      /*!< Enable Data Flash update   \hideinitializer */

/**
 * @brief      Disable Data Flash Update Function
 * @param      None
 * @return     None
 * @details    This function will set DFUEN bit of FMC_ISPCTL control register to disable Data Flash update function.
 */
#define FMC_DISABLE_DF_UPDATE()     (FMC->ISPCTL &= ~FMC_ISPCTL_DFUEN_Msk)                      /*!< Disable Data Flash update  \hideinitializer */

/**
 * @brief      Enable ISP Function
 * @param      None
 * @return     None
 * @details    This function will set ISPEN bit of FMC_ISPCTL control register to enable ISP function.
 */
#define FMC_ENABLE_ISP()            (FMC->ISPCTL |=  FMC_ISPCTL_ISPEN_Msk)                      /*!< Enable ISP function        \hideinitializer */

/**
 * @brief      Disable ISP Function
 * @param      None
 * @return     None
 * @details    This function will clear ISPEN bit of FMC_ISPCTL control register to disable ISP function.
 */
#define FMC_DISABLE_ISP()           (FMC->ISPCTL &= ~FMC_ISPCTL_ISPEN_Msk)                      /*!< Disable ISP function       \hideinitializer */

/**
 * @brief      Get ISP Fail Flag
 * @param      None
 * @return     None
 * @details    This function is used to get ISP fail flag when do ISP action.
 */
#define FMC_GET_FAIL_FLAG()         ((FMC->ISPCTL & FMC_ISPCTL_ISPFF_Msk) ? 1UL : 0UL)          /*!< Get ISP fail flag          \hideinitializer */

/**
 * @brief      Clear ISP Fail Flag
 * @param      None
 * @return     None
 * @details    This function is used to clear ISP fail flag when ISP fail flag set.
 */
#define FMC_CLR_FAIL_FLAG()         (FMC->ISPCTL |= FMC_ISPCTL_ISPFF_Msk)                       /*!< Clear ISP fail flag        \hideinitializer */

/**
 * @brief      Enable ISP Interrupt
 * @param      None
 * @return     None
 * @details    This function will enable ISP action interrupt.
 */
#define FMC_ENABLE_ISP_INT()        (FMC->ISPCTL |=  FMC_ISPCTL_INTEN_Msk)                      /*!< Enable ISP interrupt */

/**
 * @brief      Disable ISP Interrupt
 * @param      None
 * @return     None
 * @details    This function will disable ISP action interrupt.
 */
#define FMC_DISABLE_ISP_INT()       (FMC->ISPCTL &= ~FMC_ISPCTL_INTEN_Msk)                      /*!< Disable ISP interrupt */

/**
 * @brief      Get ISP Interrupt Flag
 * @param      None
 * @return     None
 * @details    This function will get ISP action interrupt status
 */
#define FMC_GET_ISP_INT_FLAG()      ((FMC->ISPSTS & FMC_ISPSTS_INTFLAG_Msk) ? 1UL : 0UL)        /*!< Get ISP interrupt flag Status */

/**
 * @brief      Clear ISP Interrupt Flag
 * @param      None
 * @return     None
 * @details    This function will clear ISP interrupt flag
 */
#define FMC_CLR_ISP_INT_FLAG()    (FMC->ISPSTS = FMC_ISPSTS_INTFLAG_Msk)                        /*!< Clear ISP interrupt flag */

/**
 * @brief      Enable FMC APROM Write Protect
 * @param      u32Bank     : Only for API compatible (Not used)
 *             u32BlockMask: Specify APROM block mask to enable APROM block protect
 * @return     None
 */
#define FMC_ENABLE_APWPROT(u32Bank, u32BlockMask)   (FMC->APWPROT0 |=  (u32BlockMask))          /*!< Enable APWPROT Block       \hideinitializer */

/**
 * @brief      Disable FMC APROM Write Protect
 * @param      u32Bank     : Only for API compatible (Not used)
 *             u32BlockMask: Specify APROM block mask to disable APROM block protect
 * @return     None
 */
#define FMC_DISABLE_APWPROT(u32Bank, u32BlockMask)  (FMC->APWPROT0 &= ~(u32BlockMask))          /*!< Disable APWPROT Block      \hideinitializer */

/**
 * @brief      Check FMC APROM Write Protect Block is Enabled
 * @param      u32Bank     : Only for API compatible (Not used)
 *             u32BlockMask: Specify APROM block mask to check APROM block protect
 * @return     0: Block is not protect, 1: Block is protect
 */
#define FMC_IS_APWPROT(u32Bank, u32BlockMask)       (FMC->APWPROT0 & (u32BlockMask))                        /*!< Is APWPROT Block enabled   \hideinitializer */

/**
 * @brief      Lock FMC APROM Write Protect
 * @param      u32Bank     : Only for API compatible (Not used)
 * @return     None
 * @details    Lock APWPROT. Need chip reset to unlock.
 */
#define FMC_LOCK_APWPROT(u32Bank)                   (FMC->APWPKEEP = (FMC->APWPKEEP & ~0xFFFF) | 0x55AA)    /*!< Lock APWPROT (Need chip reset to unlock) \hideinitializer */
/**
 * @brief      Check if FMC APROM Write Protect is Locked
 * @param      u32Bank     : Only for API compatible (Not used)
 * @return     TRUE if locked, FALSE otherwise
 * @details    Is APWPROT locked.
 */
#define FMC_IS_APWPROT_LCOKED(u32Bank)              (((FMC->APWPKEEP & 0xFFFF) == 0x55AA) ? TRUE: FALSE)    /*!< Is APWPROT locked  \hideinitializer */

/**
 * @brief      Enable FMC LDROM Write Protect Block
 * @param      u32BlockMask: Specify LDROM block mask to enable LDROM block protect
 * @return     None
 * @details    Enable LDWPROT Block.
 */
#define FMC_ENABLE_LDWPROT(u32BlockMask)            (FMC->LDWPROT |=  (u32BlockMask))                       /*!< Enable LDWPROT Block       \hideinitializer */
/**
 * @brief      Disable FMC LDROM Write Protect Block
 * @param      u32BlockMask: Specify LDROM block mask to disable LDROM block protect
 * @return     None
 * @details    Disable LDWPROT Block.
 */
#define FMC_DISABLE_LDWPROT(u32BlockMask)           (FMC->LDWPROT &= ~(u32BlockMask))                       /*!< Disable LDWPROT Block      \hideinitializer */
/**
 * @brief      Check FMC LDROM Write Protect Block is Enabled
 * @param      u32BlockMask: Specify LDROM block mask to check LDROM block protect
 * @return     0: Block is not protect, 1: Block is protect
 * @details    Is LDWPROT Block enabled.
 */
#define FMC_IS_LDWPROT(u32BlockMask)                (FMC->LDWPROT & (u32BlockMask))                         /*!< Is LDWPROT Block enabled   \hideinitializer */
/**
 * @brief      Lock FMC LDROM Write Protect
 * @param      None
 * @return     None
 * @details    Lock LDWPROT. Need chip reset to unlock.
 */
#define FMC_LOCK_LDWPROT()                          (FMC->LDWPKEEP = (FMC->LDWPKEEP & ~0xFFFF) | 0x55AA)    /*!< Lock LDWPROT (Need chip reset to unlock) \hideinitializer */
/**
 * @brief      Check if FMC LDROM Write Protect is Locked
 * @param      None
 * @return     TRUE if locked, FALSE otherwise
 * @details    Is LDWPROT locked.
 */
#define FMC_IS_LDWPROT_LCOKED()                     (((FMC->LDWPKEEP & 0xFFFF) == 0x55AA) ? TRUE: FALSE)    /*!< Is LDWPROT locked  \hideinitializer */

/**
 * @brief      Enable FMC Data Flash Write Protect Block
 * @param      u32BlockMask: Specify Data Flash block mask to enable DFWPROT block protect
 * @return     None
 * @details    Enable DFWPROT Block.
 */
#define FMC_ENABLE_DFWPROT(u32BlockMask)            (FMC->DFWPROT |=  (u32BlockMask))            /*!< Enable DFWPROT Block       \hideinitializer */
/**
 * @brief      Disable FMC Data Flash Write Protect Block
 * @param      u32BlockMask: Specify Data Flash block mask to disable DFWPROT block protect
 * @return     None
 * @details    Disable DFWPROT Block.
 */
#define FMC_DISABLE_DFWPROT(u32BlockMask)           (FMC->DFWPROT &= ~(u32BlockMask))            /*!< Disable DFWPROT Block      \hideinitializer */
/**
 * @brief      Check FMC Data Flash Write Protect Block is Enabled
 * @param      u32BlockMask: Specify Data Flash block mask to check DFWPROT block protect
 * @return     0: Block is not protect, 1: Block is protect
 * @details    Is DFWPROT Block enabled.
 */
#define FMC_IS_DFWPROT(u32BlockMask)                (FMC->DFWPROT & (u32BlockMask))              /*!< Is DFWPROT Block enabled   \hideinitializer */
/**
 * @brief      Lock FMC Data Flash Write Protect
 * @param      None
 * @return     None
 * @details    Lock DFWPROT. Need chip reset to unlock.
 */
#define FMC_LOCK_DFWPROT()                          (FMC->DFWPKEEP = (FMC->DFWPKEEP & ~0xFFFF) | 0x55AA)    /*!< Lock DFWPROT (Need chip reset to unlock) \hideinitializer */
/**
 * @brief      Check if FMC Data Flash Write Protect is Locked
 * @param      None
 * @return     TRUE if locked, FALSE otherwise
 * @details    Is DFWPROT locked.
 */
#define FMC_IS_DFWPROT_LCOKED()                     (((FMC->DFWPKEEP & 0xFFFF) == 0x55AA) ? TRUE: FALSE)    /*!< Is DFWPROT locked  \hideinitializer */

/**
* @brief      Active FMC Secure Conceal Function
* @param      None
* @return     None
*/
#define FMC_SET_SC_ACTIVE()                         (FMC->SCACT  |= FMC_SCACT_SCACT_Msk)                          /*!< Activate secure conceal function (Need chip reset to deactivate) \hideinitializer */

/**
* @brief      Is FMC Secure Conceal Function Active
* @param      None
* @return     FALSE: Secure conceal function is not active, TRUE: Secure conceal function is active
*/
#define FMC_GET_SC_ACTIVE()                         ((FMC->SCACT & FMC_SCACT_SCACT_Msk) ? TRUE : FALSE)           /*!< Get secure conceal function active flag \hideinitializer */

/**
 * @brief      Check if Secure OTP is Locked
 * @param      None
 * @return     TRUE if locked, FALSE if not locked
 * @details    Check Secure OTP lock status.
 */
#define FMC_IS_SOTP_LOCK()                          ((FMC->SOTPSTS & FMC_SOTPSTS_SOTPLOCK_Msk) ? TRUE : FALSE)
/**
 * @brief      Check if Secure OTP is Revoked
 * @param      None
 * @return     TRUE if revoked, FALSE if not revoked
 * @details    Check Secure OTP revoke status.
 */
#define FMC_IS_SOTP_REVOKE()                        ((FMC->SOTPSTS & FMC_SOTPSTS_SOTPREVOKE_Msk) ? TRUE : FALSE)

/**
* @brief      Enable FMC ECC Single Error Interrupt
* @param      None
* @return     None
*/
#define FMC_ENABLE_SINGLE_ERR_INT()       (FMC->ECCCTL |=  FMC_ECCCTL_SEBDINTEN_Msk)                  /*!< Enable Single Error Interrupt           \hideinitializer */

/**
* @brief      Disable FMC ECC Single Error Interrupt
* @param      None
* @return     None
*/
#define FMC_DISABLE_SINGLE_ERR_INT()      (FMC->ECCCTL &= ~FMC_ECCCTL_SEBDINTEN_Msk)                  /*!< Disable Single Error Interrupt          \hideinitializer */

/**
* @brief      Get FMC ECC Single Error Flag
* @param      None
* @return     0: No ECC single error, 1: ECC single error flag is raised
*/
#define FMC_GET_SINGLE_ERR_FLAG()         ((FMC->ECCSTS & FMC_ECCSTS_ECCSEBCF_Msk) ? 1UL : 0UL)       /*!< Get ECC Single Error Flag              \hideinitializer */

/**
* @brief      Clear FMC ECC Single Error Flag
* @param      None
* @return     None
*/
#define FMC_CLR_SINGLE_ERR_FLAG()         (FMC->ECCSTS = FMC_ECCSTS_ECCSEBCF_Msk)                     /*!< Clear ECC Single Error Flag              \hideinitializer */

/**
* @brief      Get FMC ECC Single Error Address
* @param      None
* @return     ECC single error address
*/
#define FMC_GET_SINGLE_ERR_ADDR()         (FMC->ECCSEFAR)       /*!< Get ECC Single Error Address              \hideinitializer */

/**
* @brief      Enable FMC ECC Double Error Interrupt
* @param      None
* @return     None
*/
#define FMC_ENABLE_DOUBLE_ERR_INT()       (FMC->ECCCTL |=  FMC_ECCCTL_DEBDINTEN_Msk)                  /*!< Enable Double Error Interrupt           \hideinitializer */

/**
* @brief      Disable FMC ECC Double Error Interrupt
* @param      None
* @return     None
*/
#define FMC_DISABLE_DOUBLE_ERR_INT()      (FMC->ECCCTL &= ~FMC_ECCCTL_DEBDINTEN_Msk)                  /*!< Disable Double Error Interrupt          \hideinitializer */

/**
* @brief      Get FMC ECC Double Error Flag
* @param      None
* @return     0: No ECC double error, 1: ECC double error flag is raised
*/
#define FMC_GET_DOUBLE_ERR_FLAG()         ((FMC->ECCSTS & FMC_ECCSTS_ECCDEBDF_Msk) ? 1UL : 0UL)       /*!< Get ECC Double Error Flag              \hideinitializer */

/**
* @brief      Clear FMC ECC Double Error Flag
* @param      None
* @return     None
*/
#define FMC_CLR_DOUBLE_ERR_FLAG()         (FMC->ECCSTS = FMC_ECCSTS_ECCDEBDF_Msk)                     /*!< Clear ECC Double Error Flag             \hideinitializer */

/**
* @brief      Get FMC ECC Double Error Address
* @param      None
* @return     ECC double error address
*/
#define FMC_GET_DOUBLE_ERR_ADDR()         (FMC->ECCDEFAR)       /*!< Get ECC Double Error Address              \hideinitializer */

/** @} end of group FMC_EXPORTED_MACROS */

/*---------------------------------------------------------------------------------------------------------*/
/*  Global variables                                                                                       */
/*---------------------------------------------------------------------------------------------------------*/
extern int32_t  g_FMC_i32ErrCode;

/** @addtogroup FMC_EXPORTED_FUNCTIONS FMC Exported Functions
    @{
*/

/*---------------------------------------------------------------------------------------------------------*/
/* Inline functions                                                                                        */
/*---------------------------------------------------------------------------------------------------------*/
/**
  * @brief Enable FMC ISP INT function.
  */
__STATIC_INLINE void FMC_EnableINT(void)
{
    FMC->ISPCTL |= FMC_ISPCTL_INTEN_Msk;
}

/**
  * @brief Disable FMC ISP INT function.
  */
__STATIC_INLINE void FMC_DisableINT(void)
{
    FMC->ISPCTL &= ~FMC_ISPCTL_INTEN_Msk;
}

/**
  * @brief       Get current vector mapping address.
  * @param       None
  * @return      The current vector mapping address.
  * @details     To get VECMAP value which is the page address for remapping to vector page (0x0).
  */
__STATIC_INLINE uint32_t FMC_GetVECMAP(void)
{
    return (FMC->ISPSTS & FMC_ISPSTS_VECMAP_Msk);
}

/**
  * @brief    Read company ID
  * @param    None
  * @return   The company ID (32-bit). 0xFFFFFFFF means read failed.
  * @details  The company ID of Nuvoton is fixed to be 0x530000DA
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           FMC_ERR_TIMEOUT  Read time-out
  */
__STATIC_INLINE uint32_t FMC_ReadCID(void)
{
    int32_t i32TimeOutCnt = FMC_TIMEOUT_READ;

    g_FMC_i32ErrCode = 0;

    FMC->ISPCMD = FMC_ISPCMD_READ_CID;           /* Set ISP Command Code */
    FMC->ISPADDR = 0x0U;                         /* Must keep 0x0 when read CID */
    FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;          /* Trigger to start ISP procedure */

    while (FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)   /* Waiting for ISP Done */
    {
        if (i32TimeOutCnt-- <= 0)
        {
            g_FMC_i32ErrCode = FMC_ERR_TIMEOUT;
            return 0xFFFFFFFFU;
        }
    }

    return FMC->ISPDAT;
}

/**
  * @brief    Read product ID
  * @param    None
  * @return   The product ID (32-bit). 0xFFFFFFFF means read failed.
  * @details  This function is used to read product ID.
  *
  * @note     Global error code g_FMC_i32ErrCode
  *           -1  Read time-out
  */
__STATIC_INLINE uint32_t FMC_ReadPID(void)
{
    int32_t i32TimeOutCnt = FMC_TIMEOUT_READ;

    g_FMC_i32ErrCode = 0;

    FMC->ISPCMD = FMC_ISPCMD_READ_DID;          /* Set ISP Command Code */
    FMC->ISPADDR = 0x04U;                       /* Must keep 0x4 when read PID */
    FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;         /* Trigger to start ISP procedure */

    while (FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)  /* Waiting for ISP Done */
    {
        if (i32TimeOutCnt-- <= 0)
        {
            g_FMC_i32ErrCode = -1;
            return 0xFFFFFFFFU;
        }
    }

    return FMC->ISPDAT;
}

/**
 * @brief       Read Unique ID
 * @param[in]   u8Index  UID index. 0 = UID[31:0], 1 = UID[63:32], 2 = UID[95:64]
 * @return      The 32-bit unique ID data of specified UID index. 0xFFFFFFFF means read failed.
 * @details     To read out 96-bit Unique ID.
 *
 * @note        Global error code g_FMC_i32ErrCode
 *              FMC_ERR_TIMEOUT  Read time-out
 */
__STATIC_INLINE uint32_t FMC_ReadUID(uint8_t u8Index)
{
    int32_t i32TimeOutCnt = FMC_TIMEOUT_READ;

    g_FMC_i32ErrCode = 0;

    FMC->ISPCMD = FMC_ISPCMD_READ_UID;
    FMC->ISPADDR = ((uint32_t)u8Index << 2U);
    FMC->ISPDAT = 0U;
    FMC->ISPTRG = 0x1U;

    while (FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)  /* Waiting for ISP Done */
    {
        if (i32TimeOutCnt-- <= 0)
        {
            g_FMC_i32ErrCode = FMC_ERR_TIMEOUT;
            return 0xFFFFFFFFU;
        }
    }

    return FMC->ISPDAT;
}

/**
  * @brief      To read UCID
  * @param[in]  u32Index    Index of the UCID to read. u32Index must be 0, 1, 2, or 3.
  * @return     The UCID of specified index
  * @details    This function is used to read unique chip ID (UCID). 0xFFFFFFFF means read failed.
  *
  * @note       Global error code g_FMC_i32ErrCode
  *             FMC_ERR_TIMEOUT  Read time-out
  */
__STATIC_INLINE uint32_t FMC_ReadUCID(uint32_t u32Index)
{
    int32_t i32TimeOutCnt = FMC_TIMEOUT_READ;

    g_FMC_i32ErrCode = 0;

    FMC->ISPCMD = FMC_ISPCMD_READ_UID;            /* Set ISP Command Code */
    FMC->ISPADDR = (0x04U * u32Index) + 0x10U;    /* The UCID is at offset 0x10 with word alignment. */
    FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;           /* Trigger to start ISP procedure */

    while (FMC->ISPTRG & FMC_ISPTRG_ISPGO_Msk)    /* Waiting for ISP Done */
    {
        if (i32TimeOutCnt-- <= 0)
        {
            g_FMC_i32ErrCode = FMC_ERR_TIMEOUT;
            return 0xFFFFFFFFU;
        }
    }

    return FMC->ISPDAT;
}

/**
 * @brief       Set vector mapping address
 * @param[in]   u32PageAddr  The page address to remap to address 0x0. The address must be page alignment.
 * @return      To set VECMAP to remap specified page address to 0x0.
 * @details     This function is used to set VECMAP to map specified page to vector page (0x0).
 * @retval      0   Success
 * @retval      -1  Failed
 *
 * @note        Global error code g_FMC_i32ErrCode
 *              FMC_ERR_TIMEOUT  Command time-out
 */
__STATIC_INLINE int32_t FMC_SetVectorPageAddr(uint32_t u32PageAddr)
{
    int32_t i32TimeOutCnt = FMC_TIMEOUT_WRITE;

    g_FMC_i32ErrCode = 0;

    FMC->ISPCMD = FMC_ISPCMD_VECMAP;  /* Set ISP Command Code */
    FMC->ISPADDR = u32PageAddr;       /* The address of specified page which will be map to address 0x0. It must be page alignment. */
    FMC->ISPTRG = 0x1U;               /* Trigger to start ISP procedure */

    while (FMC->ISPTRG)               /* Waiting for ISP Done */
    {
        if (i32TimeOutCnt-- <= 0)
        {
            g_FMC_i32ErrCode = FMC_ERR_TIMEOUT;
            return -1;
        }
    }

    return 0;
}

/*---------------------------------------------------------------------------------------------------------*/
/*  Functions                                                                                              */
/*---------------------------------------------------------------------------------------------------------*/
extern void     FMC_Open(void);
extern void     FMC_Close(void);
extern int32_t  FMC_ConfigXOM(uint32_t u32XomNum, uint32_t u32XomBase, uint8_t u8XomPage);
extern int32_t  FMC_Erase(uint32_t u32PageAddr);
extern int32_t  FMC_EraseXOM(uint32_t u32XomNum);
extern int32_t  FMC_GetXOMState(uint32_t u32XomNum);
extern uint32_t FMC_Read(uint32_t u32Addr);
extern int32_t  FMC_Read_64(uint32_t u32Addr, uint32_t *pu32Data0, uint32_t *pu32Data1);
extern int32_t  FMC_Read8Bytes(uint32_t u32Addr, uint32_t *pu32Data0, uint32_t *pu32Data1);
extern int32_t  FMC_Read_64_ECC(uint32_t u32Addr, uint32_t au32Data[]);
extern int32_t  FMC_Read8Bytes_ECC(uint32_t u32Addr, uint32_t au32Data[]);
extern int32_t  FMC_Write(uint32_t u32Addr, uint32_t u32Data);
extern int32_t  FMC_Write8Bytes(uint32_t u32Addr, uint32_t u32Data0, uint32_t u32Data1);
extern int32_t  FMC_ReadConfig(uint32_t au32Config[], uint32_t u32Count);
extern int32_t  FMC_WriteConfig(uint32_t u32ConfigAddr, uint32_t u32ConfigVal);
extern int32_t  FMC_EraseConfig(uint32_t u32ConfigAddr);
extern uint32_t FMC_GetChkSum(uint32_t u32Addr, uint32_t u32Count);
extern uint32_t FMC_CheckAllOne(uint32_t u32Addr, uint32_t u32Count);
extern int32_t  FMC_RemapBank(uint32_t u32Bank);

/** @} end of group FMC_EXPORTED_FUNCTIONS */
/** @} end of group FMC_Driver */
/** @} end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif   // __FMC_H__
