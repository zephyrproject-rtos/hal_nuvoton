/****************************************************************************//**
 * @file     lpi2c.h
 * @version  V1.00
 * @brief    M2L31 series LPI2C driver header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/
#ifndef __LPI2C_H__
#define __LPI2C_H__

#ifdef __cplusplus
extern "C"
{
#endif


/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup LPI2C_Driver LPI2C Driver
  @{
*/

/** @addtogroup LPI2C_EXPORTED_CONSTANTS LPI2C Exported Constants
  @{
*/

#define LPI2C_TIMEOUT_ERR    (-1L)          /*!< LPI2C operation abort due to timeout error \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  LPI2C_CTL constant definitions.                                                                        */
/*---------------------------------------------------------------------------------------------------------*/
#define LPI2C_CTL_STA_SI            0x28UL /*!< LPI2C_CTL setting for LPI2C control bits. It would set STA and SI bits          \hideinitializer */
#define LPI2C_CTL_STA_SI_AA         0x2CUL /*!< LPI2C_CTL setting for LPI2C control bits. It would set STA, SI and AA bits      \hideinitializer */
#define LPI2C_CTL_STO_SI            0x18UL /*!< LPI2C_CTL setting for LPI2C control bits. It would set STO and SI bits          \hideinitializer */
#define LPI2C_CTL_STO_SI_AA         0x1CUL /*!< LPI2C_CTL setting for LPI2C control bits. It would set STO, SI and AA bits      \hideinitializer */
#define LPI2C_CTL_SI                0x08UL /*!< LPI2C_CTL setting for LPI2C control bits. It would set SI bit                   \hideinitializer */
#define LPI2C_CTL_SI_AA             0x0CUL /*!< LPI2C_CTL setting for LPI2C control bits. It would set SI and AA bits           \hideinitializer */
#define LPI2C_CTL_STA               0x20UL /*!< LPI2C_CTL setting for LPI2C control bits. It would set STA bit                  \hideinitializer */
#define LPI2C_CTL_STO               0x10UL /*!< LPI2C_CTL setting for LPI2C control bits. It would set STO bit                  \hideinitializer */
#define LPI2C_CTL_AA                0x04UL /*!< LPI2C_CTL setting for LPI2C control bits. It would set AA bit                   \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  LPI2C GCMode constant definitions.                                                                     */
/*---------------------------------------------------------------------------------------------------------*/
#define LPI2C_GCMODE_ENABLE           1    /*!< Enable  LPI2C GC Mode                                                         \hideinitializer */
#define LPI2C_GCMODE_DISABLE          0    /*!< Disable LPI2C GC Mode                                                         \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  LPI2C AUTOMode constant definitions.                                                                   */
/*---------------------------------------------------------------------------------------------------------*/
#define LPI2C_AUTO_TXPDMA           (1UL << LPI2C_AUTOCTL_AUTOMODE_Pos)    /*!< LPI2C working in auto TXPDMA mode                                         \hideinitializer */
#define LPI2C_AUTO_RXPDMA           (2UL << LPI2C_AUTOCTL_AUTOMODE_Pos)    /*!< LPI2C working in auto RXPDMA mode                                         \hideinitializer */
#define LPI2C_RANDOM_REPEAT_STA     (3UL << LPI2C_AUTOCTL_AUTOMODE_Pos)    /*!< LPI2C working in random read mode, repeat start between TX/RX             \hideinitializer */
#define LPI2C_RANDOM_STO_STA        (4UL << LPI2C_AUTOCTL_AUTOMODE_Pos)    /*!< LPI2C working in random read mode, stop and start between TX/RX           \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  LPI2C trigger source constant definitions.                                                             */
/*---------------------------------------------------------------------------------------------------------*/
#define LPI2C_TRGSRC_LPTMR0         0UL    /*!< LPI2C Auto-operation trigger source from LPTMR0                               \hideinitializer */
#define LPI2C_TRGSRC_LPTMR1         1UL    /*!< LPI2C Auto-operation trigger source from LPTMR1                               \hideinitializer */
#define LPI2C_TRGSRC_TTMR0          2UL    /*!< LPI2C Auto-operation trigger source from TTMR0                                \hideinitializer */
#define LPI2C_TRGSRC_TTMR1          3UL    /*!< LPI2C Auto-operation trigger source from TTMR1                                \hideinitializer */
#define LPI2C_TRGSRC_WKIOA0         4UL    /*!< LPI2C Auto-operation trigger source from WKIOA0                               \hideinitializer */
#define LPI2C_TRGSRC_WKIOB0         5UL    /*!< LPI2C Auto-operation trigger source from WKIOB0                               \hideinitializer */
#define LPI2C_TRGSRC_WKIOC0         6UL    /*!< LPI2C Auto-operation trigger source from WKIOC0                               \hideinitializer */
#define LPI2C_TRGSRC_WKIOD0         7UL    /*!< LPI2C Auto-operation trigger source from WKIOD0                               \hideinitializer */
#define LPI2C_TRGSRC_SWTRG          8UL    /*!< LPI2C Auto-operation trigger source from SWTRG                                \hideinitializer */

/*@}*/ /* end of group LPI2C_EXPORTED_CONSTANTS */

extern int32_t g_LPI2C_i32ErrCode;

/** @addtogroup LPI2C_EXPORTED_FUNCTIONS LPI2C Exported Functions
  @{
*/
/**
 *    @brief        The macro is used to set LPI2C bus condition at One Time
 *
 *    @param[in]    lpi2c        Specify LPI2C port
 *    @param[in]    u8Ctrl     A byte writes to LPI2C control register
 *
 *    @return       None
 *
 *    @details      Set LPI2C_CTL register to control LPI2C bus conditions of START, STOP, SI, ACK.
 *    \hideinitializer
 */
#define LPI2C_SET_CONTROL_REG(lpi2c, u8Ctrl) ((lpi2c)->CTL0 = ((lpi2c)->CTL0 & ~0x3C) | (u8Ctrl))

/**
 *    @brief        The macro is used to set START condition of LPI2C Bus
 *
 *    @param[in]    lpi2c        Specify LPI2C port
 *
 *    @return       None
 *
 *    @details      Set the LPI2C bus START condition in LPI2C_CTL register.
 *    \hideinitializer
 */
#define LPI2C_START(lpi2c)  ((lpi2c)->CTL0 = ((lpi2c)->CTL0 | LPI2C_CTL0_SI_Msk) | LPI2C_CTL0_STA_Msk)

/**
 *    @brief        The macro is used to wait LPI2C bus status get ready
 *
 *    @param[in]    lpi2c        Specify LPI2C port
 *
 *    @return       None
 *
 *    @details      When a new status is presented of LPI2C bus, the SI flag will be set in LPI2C_CTL register.
 *    \hideinitializer
 */
#define LPI2C_WAIT_READY(lpi2c)     while(!((lpi2c)->CTL0 & LPI2C_CTL0_SI_Msk))

/**
 *    @brief        The macro is used to Read LPI2C Bus Data Register
 *
 *    @param[in]    lpi2c        Specify LPI2C port
 *
 *    @return       A byte of LPI2C data register
 *
 *    @details      LPI2C controller read data from bus and save it in LPI2C_DAT register.
 *    \hideinitializer
 */
#define LPI2C_GET_DATA(lpi2c)   ((lpi2c)->DAT)

/**
 *    @brief        Write a Data to LPI2C Data Register
 *
 *    @param[in]    lpi2c         Specify LPI2C port
 *    @param[in]    u8Data      A byte that writes to data register
 *
 *    @return       None
 *
 *    @details      When write a data to LPI2C_DAT register, the LPI2C controller will shift it to LPI2C bus.
 *    \hideinitializer
 */
#define LPI2C_SET_DATA(lpi2c, u8Data) ((lpi2c)->DAT = (u8Data))

/**
 *    @brief        Get LPI2C Bus status code
 *
 *    @param[in]    lpi2c        Specify LPI2C port
 *
 *    @return       LPI2C status code
 *
 *    @details      To get this status code to monitor LPI2C bus event.
 *    \hideinitializer
 */
#define LPI2C_GET_STATUS(lpi2c) ((lpi2c)->STATUS0)

/**
 *    @brief        Get Time-out flag from LPI2C Bus
 *
 *    @param[in]    lpi2c     Specify LPI2C port
 *
 *    @retval       0       LPI2C Bus time-out is not happened
 *    @retval       1       LPI2C Bus time-out is happened
 *
 *    @details      When LPI2C bus occurs time-out event, the time-out flag will be set.
 *    \hideinitializer
 */
#define LPI2C_GET_TIMEOUT_FLAG(lpi2c)   ( ((lpi2c)->TOCTL & LPI2C_TOCTL_TOIF_Msk) == LPI2C_TOCTL_TOIF_Msk ? 1:0 )

/**
 *    @brief        To get wake-up flag from LPI2C Bus
 *
 *    @param[in]    lpi2c     Specify LPI2C port
 *
 *    @retval       0       Chip is not woken-up from power-down mode
 *    @retval       1       Chip is woken-up from power-down mode
 *
 *    @details      LPI2C bus occurs wake-up event, wake-up flag will be set.
 *    \hideinitializer
 */
#define LPI2C_GET_WAKEUP_FLAG(lpi2c) ( ((lpi2c)->WKSTS & LPI2C_WKSTS_WKIF_Msk) == LPI2C_WKSTS_WKIF_Msk ? 1:0  )

/**
 *    @brief        To clear wake-up flag
 *
 *    @param[in]    lpi2c     Specify LPI2C port
 *
 *    @return       None
 *
 *    @details      If wake-up flag is set, use this macro to clear it.
 *    \hideinitializer
 */
#define LPI2C_CLEAR_WAKEUP_FLAG(lpi2c)  ((lpi2c)->WKSTS = LPI2C_WKSTS_WKIF_Msk)

/**
 *    @brief        To get wake-up address frame ACK done flag from LPI2C Bus
 *
 *    @param[in]    lpi2c     Specify LPI2C port
 *
 *    @retval       0       The ACK bit cycle of address match frame is not done
 *    @retval       1       The ACK bit cycle of address match frame is done in power-down
 *
 *    @details      LPI2C bus occurs wake-up event and address frame ACK is done, this flag will be set.
 *    \hideinitializer
 */
#define LPI2C_GET_WAKEUP_DONE(lpi2c) ( ((lpi2c)->WKSTS & LPI2C_WKSTS_WKAKDONE_Msk) == LPI2C_WKSTS_WKAKDONE_Msk ? 1 : 0)

/**
 *    @brief        To clear address frame ACK done flag
 *
 *    @param[in]    lpi2c     Specify LPI2C port
 *
 *    @return       None
 *
 *    @details      If wake-up done is set, use this macro to clear it.
 *    \hideinitializer
 */
#define LPI2C_CLEAR_WAKEUP_DONE(lpi2c)  ((lpi2c)->WKSTS = LPI2C_WKSTS_WKAKDONE_Msk)

/**
 *    @brief        To get read/write status bit in address wakeup frame
 *
 *    @param[in]    lpi2c     Specify LPI2C port
 *
 *    @retval       0       Write command be record on the address match wakeup frame
 *    @retval       1       Read command be record on the address match wakeup frame.
 *
 *    @details      LPI2C bus occurs wake-up event and address frame is received, this bit will record read/write status.
 *    \hideinitializer
*/
#define LPI2C_GET_WAKEUP_WR_STATUS(lpi2c) ( ((lpi2c)->WKSTS & LPI2C_WKSTS_WRSTSWK_Msk) == LPI2C_WKSTS_WRSTSWK_Msk ? 1 : 0)

/**
  * @brief      Enable RX PDMA function.
  * @param[in]  lpi2c The pointer of the specified LPI2C module.
  * @return     None.
  * @details    Set RXPDMAEN bit of LPI2C_CTL1 register to enable RX PDMA transfer function.
  * \hideinitializer
  */
#define LPI2C_ENABLE_RX_PDMA(lpi2c)   ((lpi2c)->CTL1 |= LPI2C_CTL1_RXPDMAEN_Msk)

/**
  * @brief      Enable TX PDMA function.
  * @param[in]  lpi2c The pointer of the specified LPI2C module.
  * @return     None.
  * @details    Set TXPDMAEN bit of LPI2C_CTL1 register to enable TX PDMA transfer function.
  * \hideinitializer
  */
#define LPI2C_ENABLE_TX_PDMA(lpi2c)   ((lpi2c)->CTL1 |= LPI2C_CTL1_TXPDMAEN_Msk)

/**
  * @brief      Disable RX PDMA transfer.
  * @param[in]  lpi2c The pointer of the specified LPI2C module.
  * @return     None.
  * @details    Clear RXPDMAEN bit of LPI2C_CTL1 register to disable RX PDMA transfer function.
  * \hideinitializer
  */
#define LPI2C_DISABLE_RX_PDMA(lpi2c)   ((lpi2c)->CTL1 &= ~LPI2C_CTL1_RXPDMAEN_Msk)

/**
  * @brief      Disable TX PDMA transfer.
  * @param[in]  lpi2c The pointer of the specified LPI2C module.
  * @return     None.
  * @details    Clear TXPDMAEN bit of LPI2C_CTL1 register to disable TX PDMA transfer function.
  * \hideinitializer
  */
#define LPI2C_DISABLE_TX_PDMA(lpi2c)   ((lpi2c)->CTL1 &= ~LPI2C_CTL1_TXPDMAEN_Msk)

/**
  * @brief      Enable PDMA stretch function.
  * @param[in]  lpi2c The pointer of the specified LPI2C module.
  * @return     None.
  * @details    Enable this function is to stretch bus by hardware after PDMA transfer is done if SI is not cleared.
  * \hideinitializer
  */
#define LPI2C_ENABLE_PDMA_STRETCH(lpi2c)   ((lpi2c)->CTL1 |= LPI2C_CTL1_PDMASTR_Msk)

/**
  * @brief      Disable PDMA stretch function.
  * @param[in]  lpi2c The pointer of the specified LPI2C module.
  * @return     None.
  * @details    LPI2C will send STOP after PDMA transfers done automatically.
  * \hideinitializer
  */
#define LPI2C_DISABLE_PDMA_STRETCH(lpi2c)   ((lpi2c)->CTL1 &= ~LPI2C_CTL1_PDMASTR_Msk)

/**
  * @brief      Reset PDMA function.
  * @param[in]  lpi2c The pointer of the specified LPI2C module.
  * @return     None.
  * @details    LPI2C PDMA engine will be reset after this function is called.
  * \hideinitializer
  */
#define LPI2C_DISABLE_RST_PDMA(lpi2c)   ((lpi2c)->CTL1 |= LPI2C_CTL1_PDMARST_Msk)

/**
 *    @brief        Enable specified LPI2C interrupt
 *
 *    @param[in]    lpi2c        The pointer of the specified LPI2C module
 *    @param[in]    u32eIntSel  Interrupt type select
 *                              - \ref LPI2C_AUTOCTL_TXWKEN_Msk   : TX Transfer Count Match Interrupt
 *                              - \ref LPI2C_AUTOCTL_RXWKEN_Msk     : RX Transfer Count Match Interrupt
 *                              - \ref LPI2C_AUTOCTL_NACKWKEN_Msk    : Receive Slave NACK Interrupt
 *
 *    @return       None
 *
 *    @details      This macro enable specified LPI2C auto-operation mode interrupt.
 *    \hideinitializer
 */
#define LPI2C_ENABLE_AUTO_MODE_INT(lpi2c, u32eIntSel)    ((lpi2c)->AUTOCTL |= (u32eIntSel))

/**
 *    @brief        Disable specified LPI2C interrupt
 *
 *    @param[in]    lpi2c        The pointer of the specified LPI2C module
 *    @param[in]    u32eIntSel  Interrupt type select
 *                              - \ref LPI2C_AUTOCTL_TXWKEN_Msk   : TX Transfer Count Match Interrupt
 *                              - \ref LPI2C_AUTOCTL_RXWKEN_Msk     : RX Transfer Count Match Interrupt
 *                              - \ref LPI2C_AUTOCTL_NACKWKEN_Msk    : Receive Slave NACK Interrupt
 *
 *    @return       None
 *
 *    @details      This macro disable specified LPI2C auto-operation mode interrupt.
 *    \hideinitializer
 */
#define LPI2C_DISABLE_AUTO_MODE_INT(lpi2c, u32eIntSel)    ((lpi2c)->AUTOCTL |= (u32eIntSel))

/**
 *    @brief        Get specified interrupt flag
 *
 *    @param[in]    lpi2c            The pointer of the specified LPI2C module
 *    @param[in]    u32eIntTypeFlag Interrupt Type Flag, should be
 *                                  - \ref LPI2C_AUTOSTS_TXWKF_Msk   : TX Transfer Count Match Interrupt Flag
 *                                  - \ref LPI2C_AUTOSTS_RXWKF_Msk  : RX Transfer Count Match Interrupt Flag
 *                                  - \ref LPI2C_AUTOSTS_ERRORWKF_Msk    : Error Condition Interrupt Flag
 *
 *    @retval       0 The specified interrupt is not happened.
 *    @retval       1 The specified interrupt is happened.
 *
 *    @details      This macro get specified LPI2C auto-operation mode interrupt flag.
 *    \hideinitializer
 */
#define LPI2C_GET_AUTO_MODE_INT_FLAG(lpi2c,u32eIntTypeFlag)    (((lpi2c)->AUTOSTS & (u32eIntTypeFlag))?1:0)

/**
 *    @brief        Clear specified interrupt flag
 *
 *    @param[in]    lpi2c            The pointer of the specified LPI2C module
 *    @param[in]    u32eIntTypeFlag Interrupt Type Flag, should be
 *                                  - \ref LPI2C_AUTOSTS_TXWKF_Msk   : TX Transfer Count Match Interrupt Flag
 *                                  - \ref LPI2C_AUTOSTS_RXWKF_Msk  : RX Transfer Count Match Interrupt Flag
 *                                  - \ref LPI2C_AUTOSTS_ERRORWKF_Msk    : Error Condition Interrupt Flag
 *
 *    @return       None
 *
 *    @details      This macro clear specified LPI2C auto-operation mode interrupt flag.
 *    \hideinitializer
 */
#define LPI2C_CLEAR_AUTO_MODE_INT_FLAG(lpi2c,u32eIntTypeFlag)    ((lpi2c)->AUTOSTS = (u32eIntTypeFlag))

/**
 *    @brief        Auto-operation mode software trigger
 *
 *    @param[in]    lpi2c            The pointer of the specified LPI2C module
 *
 *    @return       None
 *
 *    @details      This macro set auto-operation mode software trigger bit.
 *    \hideinitializer
 */
#define LPI2C_AUTO_MODE_SW_TRIGGER(lpi2c)    ((lpi2c)->AUTOCTL |= LPI2C_AUTOCTL_SWTRG_Msk)

/*---------------------------------------------------------------------------------------------------------*/
/* inline functions                                                                                        */
/*---------------------------------------------------------------------------------------------------------*/

/* Declare these inline functions here to avoid MISRA C 2004 rule 8.1 error */
__STATIC_INLINE void LPI2C_STOP(LPI2C_T *lpi2c);

/**
 *    @brief        The macro is used to set STOP condition of LPI2C Bus
 *
 *    @param[in]    lpi2c        Specify LPI2C port
 *
 *    @return       None
 *
 *    @details      Set the LPI2C bus STOP condition in LPI2C_CTL register.
 */
__STATIC_INLINE void LPI2C_STOP(LPI2C_T *lpi2c)
{
    uint32_t u32TimeOutCount = SystemCoreClock;

    (lpi2c)->CTL0 |= (LPI2C_CTL0_SI_Msk | LPI2C_CTL0_STO_Msk);
    while(lpi2c->CTL0 & LPI2C_CTL0_STO_Msk)
    {
        u32TimeOutCount--;
        if(u32TimeOutCount == 0) break;
    }
}

void LPI2C_ClearTimeoutFlag(LPI2C_T *lpi2c);
void LPI2C_Close(LPI2C_T *lpi2c);
void LPI2C_Trigger(LPI2C_T *lpi2c, uint8_t u8Start, uint8_t u8Stop, uint8_t u8Si, uint8_t u8Ack);
void LPI2C_DisableInt(LPI2C_T *lpi2c);
void LPI2C_EnableInt(LPI2C_T *lpi2c);
uint32_t LPI2C_GetBusClockFreq(LPI2C_T *lpi2c);
uint32_t LPI2C_GetIntFlag(LPI2C_T *lpi2c);
uint32_t LPI2C_GetStatus(LPI2C_T *lpi2c);
uint32_t LPI2C_Open(LPI2C_T *lpi2c, uint32_t u32BusClock);
uint8_t LPI2C_GetData(LPI2C_T *lpi2c);
void LPI2C_SetSlaveAddr(LPI2C_T *lpi2c, uint8_t u8SlaveNo, uint8_t u8SlaveAddr, uint8_t u8GCMode);
void LPI2C_SetSlaveAddrMask(LPI2C_T *lpi2c, uint8_t u8SlaveNo, uint8_t u8SlaveAddrMask);
uint32_t LPI2C_SetBusClockFreq(LPI2C_T *lpi2c, uint32_t u32BusClock);
void LPI2C_EnableTimeout(LPI2C_T *lpi2c, uint8_t u8LongTimeout);
void LPI2C_DisableTimeout(LPI2C_T *lpi2c);
void LPI2C_EnableWakeup(LPI2C_T *lpi2c);
void LPI2C_DisableWakeup(LPI2C_T *lpi2c);
void LPI2C_SetData(LPI2C_T *lpi2c, uint8_t u8Data);
uint8_t LPI2C_WriteByte(LPI2C_T *lpi2c, uint8_t u8SlaveAddr, uint8_t data);
uint32_t LPI2C_WriteMultiBytes(LPI2C_T *lpi2c, uint8_t u8SlaveAddr, uint8_t data[], uint32_t u32wLen);
uint8_t LPI2C_WriteByteOneReg(LPI2C_T *lpi2c, uint8_t u8SlaveAddr, uint8_t u8DataAddr, uint8_t data);
uint32_t LPI2C_WriteMultiBytesOneReg(LPI2C_T *lpi2c, uint8_t u8SlaveAddr, uint8_t u8DataAddr, uint8_t data[], uint32_t u32wLen);
uint8_t LPI2C_WriteByteTwoRegs(LPI2C_T *lpi2c, uint8_t u8SlaveAddr, uint16_t u16DataAddr, uint8_t data);
uint32_t LPI2C_WriteMultiBytesTwoRegs(LPI2C_T *lpi2c, uint8_t u8SlaveAddr, uint16_t u16DataAddr, uint8_t data[], uint32_t u32wLen);
uint8_t LPI2C_ReadByte(LPI2C_T *lpi2c, uint8_t u8SlaveAddr);
uint32_t LPI2C_ReadMultiBytes(LPI2C_T *lpi2c, uint8_t u8SlaveAddr, uint8_t rdata[], uint32_t u32rLen);
uint8_t LPI2C_ReadByteOneReg(LPI2C_T *lpi2c, uint8_t u8SlaveAddr, uint8_t u8DataAddr);
uint32_t LPI2C_ReadMultiBytesOneReg(LPI2C_T *lpi2c, uint8_t u8SlaveAddr, uint8_t u8DataAddr, uint8_t rdata[], uint32_t u32rLen);
uint8_t LPI2C_ReadByteTwoRegs(LPI2C_T *lpi2c, uint8_t u8SlaveAddr, uint16_t u16DataAddr);
uint32_t LPI2C_ReadMultiBytesTwoRegs(LPI2C_T *lpi2c, uint8_t u8SlaveAddr, uint16_t u16DataAddr, uint8_t rdata[], uint32_t u32rLen);

/*@}*/ /* end of group LPI2C_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group LPI2C_Driver */

/*@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif

/*** (C) COPYRIGHT 2023 Nuvoton Technology Corp. ***/
