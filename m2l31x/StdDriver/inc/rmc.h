/**************************************************************************//**
 * @file     RMC.h
 * @version  V1.00
 * @brief    M2L31 Series RRAM Memory Controller Driver Header File
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2016-2020 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/
#ifndef __RMC_H__
#define __RMC_H__

#ifdef __cplusplus
extern "C"
{
#endif

/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup RMC_Driver RMC Driver
  @{
*/


/** @addtogroup RMC_EXPORTED_CONSTANTS RMC Exported Constants
  @{
*/


/*---------------------------------------------------------------------------------------------------------*/
/* Define Base Address                                                                                     */
/*---------------------------------------------------------------------------------------------------------*/
#define RMC_APROM_BASE          0x00000000UL         /*!< APROM base address          \hideinitializer */
#define RMC_APROM_END           0x00080000UL         /*!< APROM end address           \hideinitializer */
#define RMC_APROM_BANK0_END     (RMC_APROM_END/2UL)  /*!< APROM bank0 end address     \hideinitializer */
#define RMC_LDROM_BASE          0x0F100000UL         /*!< LDROM base address          \hideinitializer */
#define RMC_LDROM_END           0x0F102000UL         /*!< LDROM end address           \hideinitializer */
#define RMC_XOM_BASE            0x0F200000UL         /*!< XOM  Base Address           \hideinitializer */
#define RMC_XOMR0_BASE          0x0F200000UL         /*!< XOMR 0 Base Address         \hideinitializer */
#define RMC_XOMR1_BASE          0x0F200010UL         /*!< XOMR 1 Base Address         \hideinitializer */
#define RMC_XOMR2_BASE          0x0F200020UL         /*!< XOMR 2 Base Address         \hideinitializer */
#define RMC_XOMR3_BASE          0x0F200030UL         /*!< XOMR 3 Base Address         \hideinitializer */
#define RMC_CONFIG_BASE         0x0F300000UL         /*!< User Configuration address  \hideinitializer */
#define RMC_USER_CONFIG_0       0x0F300000UL         /*!< User Config 0 address       \hideinitializer */
#define RMC_USER_CONFIG_1       0x0F300004UL         /*!< User Config 1 address       \hideinitializer */
#define RMC_USER_CONFIG_2       0x0F300008UL         /*!< User Config 2 address       \hideinitializer */
#define RMC_USER_CONFIG_3       0x0F30000CUL         /*!< User Config 3 address       \hideinitializer */
#define RMC_OTP_BASE            0x0F310000UL         /*!< OTP flash base address      \hideinitializer */

#define RMC_FLASH_PAGE_SIZE     0x1000UL        /*!< Flash Page Size (4K bytes)  \hideinitializer */
#define RMC_PAGE_ADDR_MASK      0xFFFFF000UL    /*!< Flash page address mask     \hideinitializer */
#define RMC_MULTI_WORD_PROG_LEN 512             /*!< The maximum length of a multi-word program.  */

#define RMC_APROM_SIZE          RMC_APROM_END         /*!< APROM Size                  \hideinitializer */
#define RMC_BANK_SIZE           (RMC_APROM_SIZE/2UL)  /*!< APROM Bank Size             \hideinitializer */
#define RMC_LDROM_SIZE          0x1000UL              /*!< LDROM Size (4 Kbytes)       \hideinitializer */
#define RMC_OTP_ENTRY_CNT       256UL                 /*!< OTP entry number            \hideinitializer */

#define XOM_OFF_MARK            0x5A
#define XOM_DEBUG_MARK          0x50


/*---------------------------------------------------------------------------------------------------------*/
/*  XOM region number constant definitions                                                                 */
/*---------------------------------------------------------------------------------------------------------*/
#define XOMR0   0UL                             /*!< XOM region 0     */
#define XOMR1   1UL                             /*!< XOM region 1     */
#define XOMR2   2UL                             /*!< XOM region 2     */
#define XOMR3   3UL                             /*!< XOM region 3     */

/*---------------------------------------------------------------------------------------------------------*/
/*  ISPCTL constant definitions                                                                            */
/*---------------------------------------------------------------------------------------------------------*/
#define IS_BOOT_FROM_LDROM      0x1UL           /*!< ISPCTL setting to select to boot from LDROM */
#define IS_BOOT_FROM_APROM      0x0UL           /*!< ISPCTL setting to select to boot from APROM */

/*---------------------------------------------------------------------------------------------------------*/
/*  ISPCMD constant definitions                                                                            */
/*---------------------------------------------------------------------------------------------------------*/
#define RMC_ISPCMD_READ                  0x00UL          /*!< ISP Command: Read flash word         \hideinitializer */
#define RMC_ISPCMD_READ_UID              0x04UL          /*!< ISP Command: Read Unique ID          \hideinitializer */
#define RMC_ISPCMD_READ_ALL1             0x08UL          /*!< ISP Command: Read all-one result     \hideinitializer */
#define RMC_ISPCMD_READ_CID              0x0BUL          /*!< ISP Command: Read Company ID         \hideinitializer */
#define RMC_ISPCMD_READ_DID              0x0CUL          /*!< ISP Command: Read Device ID          \hideinitializer */
#define RMC_ISPCMD_READ_CKS              0x0DUL          /*!< ISP Command: Read checksum           \hideinitializer */
#define RMC_ISPCMD_PROGRAM               0x21UL          /*!< ISP Command: Write flash word        \hideinitializer */
#define RMC_ISPCMD_LOAD_DATA_BUFFER      0x27UL          /*!< ISP Command: Load Data Buffer        \hideinitializer */
#define RMC_ISPCMD_CLEAR_DATA_BUFFER     0x2FUL          /*!< ISP Command: Clear Data Buffer        \hideinitializer */
#define RMC_ISPCMD_BANK_REMAP            0x2CUL          /*!< ISP Command: Bank Remap                \hideinitializer */

#define RMC_ISPCMD_PAGE_ERASE   0x22UL          /*!< ISP Command: Page Erase Flash        \hideinitializer */
#define RMC_ISPCMD_RUN_ALL1     0x28UL          /*!< ISP Command: Run all-one verification \hideinitializer */
#define RMC_ISPCMD_RUN_CKS      0x2DUL          /*!< ISP Command: Run checksum calculation \hideinitializer */
#define RMC_ISPCMD_VECMAP       0x2EUL          /*!< ISP Command: Vector Page Remap       \hideinitializer */

#define READ_ALLONE_YES         0xA11FFFFFUL    /*!< Check-all-one result is all one.     \hideinitializer */
#define READ_ALLONE_NOT         0xA1100000UL    /*!< Check-all-one result is not all one. \hideinitializer */
#define READ_ALLONE_CMD_FAIL    0xFFFFFFFFUL    /*!< Check-all-one command failed.        \hideinitializer */

#define RMC_TIMEOUT_READ        ((SystemCoreClock/10)/4) /*!< Read command time-out 100 ms         \hideinitializer */
#define RMC_TIMEOUT_WRITE       ((SystemCoreClock/10)/4) /*!< Write command time-out 100 ms        \hideinitializer */
#define RMC_TIMEOUT_ERASE       ((SystemCoreClock/10)/2) /*!< Erase command time-out 200 ms        \hideinitializer */
#define RMC_TIMEOUT_CHKSUM      (SystemCoreClock/2)      /*!< Get checksum command time-out 2 s    \hideinitializer */
#define RMC_TIMEOUT_CHKALLONE   (SystemCoreClock/2)      /*!< Check-all-one command time-out 2 s   \hideinitializer */

/*@}*/ /* end of group RMC_EXPORTED_CONSTANTS */


/** @addtogroup RMC_EXPORTED_MACROS RMC Exported Macros
  @{
*/

/*---------------------------------------------------------------------------------------------------------*/
/*  RMC Macro Definitions                                                                                  */
/*---------------------------------------------------------------------------------------------------------*/
/**
 * @brief      Set Boot from APROM
 *
 * @param      None
 *
 * @return     None
 *
 * @details    This function is select booting from APROM.
 *
 */
#define RMC_SET_APROM_BOOT()        (RMC->ISPCTL &= ~RMC_ISPCTL_BS_Msk)         /*!< Select booting from APROM  \hideinitializer */

/**
 * @brief      Set Boot from LDROM
 *
 * @param      None
 *
 * @return     None
 *
 * @details    This function is select booting from LDROM.
 *
 */
#define RMC_SET_LDROM_BOOT()        (RMC->ISPCTL |= RMC_ISPCTL_BS_Msk)          /*!< Select booting from LDROM  \hideinitializer */

/**
 * @brief      Enable APROM Update Function
 *
 * @param      None
 *
 * @return     None
 *
 * @details    This function will set APUEN bit of ISPCTL control register to enable APROM update function.
 *             User needs to set APUEN bit before they can update APROM in APROM boot mode.
 *
 */
#define RMC_ENABLE_AP_UPDATE()      (RMC->ISPCTL |=  RMC_ISPCTL_APUEN_Msk)      /*!< Enable APROM update        \hideinitializer */

/**
 * @brief      Disable APROM Update Function
 *
 * @param      None
 *
 * @return     None
 *
 * @details    This function will clear APUEN bit of ISPCTL control register to disable APROM update function.
 *
 */
#define RMC_DISABLE_AP_UPDATE()     (RMC->ISPCTL &= ~RMC_ISPCTL_APUEN_Msk)      /*!< Disable APROM update       \hideinitializer */

/**
 * @brief      Enable User Configuration Update Function
 *
 * @param      None
 *
 * @return     None
 *
 * @details    This function will set CFGUEN bit of ISPCTL control register to enable User Configuration update function.
 *             User needs to set CFGUEN bit before they can update User Configuration area.
 *
 */
#define RMC_ENABLE_CFG_UPDATE()     (RMC->ISPCTL |=  RMC_ISPCTL_CFGUEN_Msk)     /*!< Enable User Config update  \hideinitializer */

/**
 * @brief      Disable User Configuration Update Function
 *
 * @param      None
 *
 * @return     None
 *
 * @details    This function will clear CFGUEN bit of ISPCTL control register to disable User Configuration update function.
 *
 */
#define RMC_DISABLE_CFG_UPDATE()    (RMC->ISPCTL &= ~RMC_ISPCTL_CFGUEN_Msk)     /*!< Disable User Config update \hideinitializer */

/**
 * @brief      Enable LDROM Update Function
 *
 * @param      None
 *
 * @return     None
 *
 * @details    This function will set LDUEN bit of ISPCTL control register to enable LDROM update function.
 *             User needs to set LDUEN bit before they can update LDROM.
 *
 */
#define RMC_ENABLE_LD_UPDATE()      (RMC->ISPCTL |=  RMC_ISPCTL_LDUEN_Msk)      /*!< Enable LDROM update        \hideinitializer */

/**
 * @brief      Disable LDROM Update Function
 *
 * @param      None
 *
 * @return     None
 *
 * @details    This function will set ISPEN bit of ISPCTL control register to disable LDROM update function.
 *
 */
#define RMC_DISABLE_LD_UPDATE()     (RMC->ISPCTL &= ~RMC_ISPCTL_LDUEN_Msk)      /*!< Disable LDROM update       \hideinitializer */

/**
 * @brief      Disable ISP Function
 *
 * @param      None
 *
 * @return     None
 *
 * @details    This function will clear ISPEN bit of ISPCTL control register to disable ISP function.
 *
 */
#define RMC_DISABLE_ISP()           (RMC->ISPCTL &= ~RMC_ISPCTL_ISPEN_Msk)      /*!< Disable ISP function       \hideinitializer */

/**
 * @brief      Enable ISP Function
 *
 * @param      None
 *
 * @return     None
 *
 * @details    This function will set ISPEN bit of ISPCTL control register to enable ISP function.
 *
 */
#define RMC_ENABLE_ISP()            (RMC->ISPCTL |=  RMC_ISPCTL_ISPEN_Msk)      /*!< Enable ISP function        \hideinitializer */

/**
 * @brief      Get ISP Fail Flag
 *
 * @param      None
 *
 * @return     None
 *
 * @details    This function is used to get ISP fail flag when do ISP actoin.
 *
 */
#define RMC_GET_FAIL_FLAG()         ((RMC->ISPCTL & RMC_ISPCTL_ISPFF_Msk) ? 1UL : 0UL)  /*!< Get ISP fail flag  \hideinitializer */

/**
 * @brief      Clear ISP Fail Flag
 *
 * @param      None
 *
 * @return     None
 *
 * @details    This function is used to clear ISP fail flag when ISP fail flag set.
 *
 */
#define RMC_CLR_FAIL_FLAG()         (RMC->ISPCTL |= RMC_ISPCTL_ISPFF_Msk)       /*!< Clear ISP fail flag        \hideinitializer */


/**
 * @brief      Enable ISP Interrupt
 *
 * @param      None
 *
 * @return     None
 *
 * @details    This function will enable ISP action interrupt.
 *
 */
#define RMC_ENABLE_ISP_INT()     (RMC_ISP->ISPCTL |=  RMC_ISPCTL_INTEN_Msk) /*!< Enable ISP interrupt */

/**
 * @brief      Disable ISP Interrupt
 *
 * @param      None
 *
 * @return     None
 *
 * @details    This function will disable ISP action interrupt.
 *
 */
#define RMC_DISABLE_ISP_INT()     (RMC_ISP->ISPCTL &= ~RMC_ISPCTL_INTEN_Msk) /*!< Disable ISP interrupt */

/**
 * @brief      Get ISP Interrupt Flag
 *
 * @param      None
 *
 * @return     None
 *
 * @details    This function will get ISP action interrupt status
 *
 */
#define RMC_GET_ISP_INT_FLAG()     ((RMC_ISP->ISPSTS & RMC_ISPSTS_INTFLAG_Msk) ? 1UL : 0UL) /*!< Get ISP interrupt flag Status */

/**
 * @brief      Clear ISP Interrupt Flag
 *
 * @param      None
 *
 * @return     None
 *
 * @details    This function will clear ISP interrupt flag
 *
 */
#define RMC_CLEAR_ISP_INT_FLAG()     (RMC_ISP->ISPSTS = RMC_ISPSTS_INTFLAG_Msk) /*!< Clear ISP interrupt flag*/

/*@}*/ /* end of group RMC_EXPORTED_MACROS */

extern int32_t  g_RMC_i32ErrCode;

/** @addtogroup RMC_EXPORTED_FUNCTIONS RMC Exported Functions
  @{
*/

/*---------------------------------------------------------------------------------------------------------*/
/* inline functions                                                                                        */
/*---------------------------------------------------------------------------------------------------------*/
__STATIC_INLINE uint32_t RMC_ReadCID(void);
__STATIC_INLINE uint32_t RMC_ReadPID(void);
__STATIC_INLINE uint32_t RMC_ReadUID(uint8_t u8Index);
__STATIC_INLINE uint32_t RMC_ReadUCID(uint32_t u32Index);
__STATIC_INLINE int32_t RMC_SetVectorPageAddr(uint32_t u32PageAddr);
__STATIC_INLINE uint32_t RMC_GetVECMAP(void);

/**
 * @brief       Get current vector mapping address.
 * @param       None
 * @return      The current vector mapping address.
 * @details     To get VECMAP value which is the page address for remapping to vector page (0x0).
 * @note
 *              VECMAP only valid when new IAP function is enabled. (CBS = 10'b or 00'b)
 */
__STATIC_INLINE uint32_t RMC_GetVECMAP(void)
{
	  if((RMC->ISPSTS & RMC_ISPSTS_VECMAP_Msk) & 0x100000)
		    return (RMC->ISPSTS & RMC_ISPSTS_VECMAP_Msk) | 0xF000000;
		else
        return (RMC->ISPSTS & RMC_ISPSTS_VECMAP_Msk); 
}

/**
  * @brief    Read company ID
  * @param    None
  * @return   The company ID (32-bit)
  * @details  The company ID of Nuvoton is fixed to be 0xDA
  */
__STATIC_INLINE uint32_t RMC_ReadCID(void)
{
    uint32_t  tout = RMC_TIMEOUT_READ;

    g_RMC_i32ErrCode = 0;

    RMC->ISPCMD = RMC_ISPCMD_READ_CID;           /* Set ISP Command Code */
    RMC->ISPADDR = 0x0u;                         /* Must keep 0x0 when read CID */
    RMC->ISPTRG = RMC_ISPTRG_ISPGO_Msk;          /* Trigger to start ISP procedure */
#if ISBEN
    __ISB();
#endif                                           /* To make sure ISP/CPU be Synchronized */
    while (tout-- > 0)
    {
        if (!(RMC->ISPTRG & RMC_ISPTRG_ISPGO_Msk))  /* Waiting for ISP Done */
        {
            if (RMC->ISPDAT != 0x530000DA)
                g_RMC_i32ErrCode = -1;
            return RMC->ISPDAT;
        }
    }
    g_RMC_i32ErrCode = -1;
    return 0xFFFFFFFF;
}

/**
  * @brief    Read product ID
  * @param    None
  * @return   The product ID (32-bit)
  * @details  This function is used to read product ID.
  */
__STATIC_INLINE uint32_t RMC_ReadPID(void)
{
    uint32_t  tout = RMC_TIMEOUT_READ;

    g_RMC_i32ErrCode = 0;

    RMC->ISPCMD = RMC_ISPCMD_READ_DID;          /* Set ISP Command Code */
    RMC->ISPADDR = 0x04u;                       /* Must keep 0x4 when read PID */
    RMC->ISPTRG = RMC_ISPTRG_ISPGO_Msk;         /* Trigger to start ISP procedure */
#if ISBEN
    __ISB();
#endif                                          /* To make sure ISP/CPU be Synchronized */
    while (tout-- > 0)
    {
        if (!(RMC->ISPTRG & RMC_ISPTRG_ISPGO_Msk))  /* Waiting for ISP Done */
            return RMC->ISPDAT;
    }
    g_RMC_i32ErrCode = -1;
    return 0xFFFFFFFF;
}

/**
 * @brief       Read Unique ID
 * @param[in]   u8Index  UID index. 0 = UID[31:0], 1 = UID[63:32], 2 = UID[95:64]
 * @return      The 32-bit unique ID data of specified UID index.
 * @details     To read out 96-bit Unique ID.
 */
__STATIC_INLINE uint32_t RMC_ReadUID(uint8_t u8Index)
{
    uint32_t  tout = RMC_TIMEOUT_READ;

    g_RMC_i32ErrCode = 0;

    RMC->ISPCMD = RMC_ISPCMD_READ_UID;
    RMC->ISPADDR = ((uint32_t)u8Index << 2u);
    RMC->ISPDAT = 0u;
    RMC->ISPTRG = 0x1u;
#if ISBEN
    __ISB();
#endif
    while (tout-- > 0)
    {
        if (!(RMC->ISPTRG & RMC_ISPTRG_ISPGO_Msk))  /* Waiting for ISP Done */
            return RMC->ISPDAT;
    }
    g_RMC_i32ErrCode = -1;
    return 0xFFFFFFFF;
}

/**
  * @brief      To read UCID
  * @param[in]  u32Index    Index of the UCID to read. u32Index must be 0, 1, 2, or 3.
  * @return     The UCID of specified index
  * @details    This function is used to read unique chip ID (UCID).
  */
__STATIC_INLINE uint32_t RMC_ReadUCID(uint32_t u32Index)
{         
    uint32_t  tout = RMC_TIMEOUT_READ;

    g_RMC_i32ErrCode = 0;

    RMC->ISPCMD = RMC_ISPCMD_READ_UID;            /* Set ISP Command Code */
    RMC->ISPADDR = (0x04u * u32Index) + 0x10u;    /* The UCID is at offset 0x10 with word alignment. */
    RMC->ISPTRG = RMC_ISPTRG_ISPGO_Msk;           /* Trigger to start ISP procedure */
#if ISBEN
    __ISB();
#endif                                            /* To make sure ISP/CPU be Synchronized */
    while (tout-- > 0)
    {
        if (!(RMC->ISPTRG & RMC_ISPTRG_ISPGO_Msk))  /* Waiting for ISP Done */
            return RMC->ISPDAT;
    }
    g_RMC_i32ErrCode = -1;
    return 0xFFFFFFFF;
}

/**
 * @brief       Set vector mapping address
 * @param[in]   u32PageAddr  The page address to remap to address 0x0. The address must be page alignment.
 * @return      To set VECMAP to remap specified page address to 0x0.
 * @details     This function is used to set VECMAP to map specified page to vector page (0x0).
 * @note
 *              VECMAP only valid when new IAP function is enabled. (CBS = 10'b or 00'b)
 */
__STATIC_INLINE int32_t RMC_SetVectorPageAddr(uint32_t u32PageAddr)
{
    uint32_t  tout = RMC_TIMEOUT_WRITE;

    g_RMC_i32ErrCode = 0;

    RMC->ISPCMD = RMC_ISPCMD_VECMAP;  /* Set ISP Command Code */
    RMC->ISPADDR = u32PageAddr;       /* The address of specified page which will be map to address 0x0. It must be page alignment. */
    RMC->ISPTRG = 0x1u;               /* Trigger to start ISP procedure */
#if ISBEN
    __ISB();
#endif                                /* To make sure ISP/CPU be Synchronized */
    while (tout-- > 0)
    {
        if (!RMC->ISPTRG)             /* Waiting for ISP Done */
            return 0;
    }
    g_RMC_i32ErrCode = -1;
    return -1;
}


/*---------------------------------------------------------------------------------------------------------*/
/*  Functions                                                                                              */
/*---------------------------------------------------------------------------------------------------------*/

extern void     RMC_Close(void);
extern int32_t  RMC_ConfigXOM(uint32_t xom_num, uint32_t xom_base, uint8_t xom_page);
extern int32_t  RMC_Erase(uint32_t u32PageAddr);
extern int32_t  RMC_EraseXOM(uint32_t xom_num);
extern int32_t  RMC_GetXOMState(uint32_t xom_num);
extern int32_t  RMC_GetBootSource(void);
extern void     RMC_Open(void);
extern uint32_t RMC_Read(uint32_t u32Addr);
extern uint32_t RMC_ReadDataFlashBaseAddr(void);
extern void     RMC_SetBootSource(int32_t i32BootSrc);
extern int32_t  RMC_Write(uint32_t u32Addr, uint32_t u32Data);
extern int32_t  RMC_ReadConfig(uint32_t u32Config[], uint32_t u32Count);
extern int32_t  RMC_WriteConfig(uint32_t u32Config[], uint32_t u32Count);
extern uint32_t RMC_GetChkSum(uint32_t u32addr, uint32_t u32count);
extern uint32_t RMC_CheckAllOne(uint32_t u32addr, uint32_t u32count);
extern int32_t  RMC_ReadOTP(uint32_t otp_num, uint32_t *low_word, uint32_t *high_word);
extern int32_t  RMC_WriteOTP(uint32_t otp_num, uint32_t low_word, uint32_t high_word);
extern int32_t  RMC_IsOTPLocked(uint32_t otp_num);
extern int32_t  RMC_LockOTP(uint32_t otp_num);

/*@}*/ /* end of group RMC_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group RMC_Driver */

/*@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif   /* __RMC_H__ */

/*** (C) COPYRIGHT 2016 Nuvoton Technology Corp. ***/
