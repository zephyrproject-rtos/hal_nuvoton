/**************************************************************************//**
 * @file     lptmr_pwm.h
 * @version  V1.01
 * @brief    M2L31 series LPTMR PWM Controller(LPTMR PWM) driver header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

#ifndef __LPTMR_PWM_H__
#define __LPTMR_PWM_H__

#ifdef __cplusplus
extern "C"
{
#endif


/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup LPTMR_PWM_Driver LPTMR PWM Driver
  @{
*/

/** @addtogroup LPTMR_PWM_EXPORTED_CONSTANTS LPTMR PWM Exported Constants
  @{
*/
/*---------------------------------------------------------------------------------------------------------*/
/*  LPTPWM Output Channel Constant Definitions                                                               */
/*---------------------------------------------------------------------------------------------------------*/
#define LPTPWM_CH0                                (BIT0)       /*!< Indicate PWMx_CH0 \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  LPTPWM Output Channel Selection Definitions                                                               */
/*---------------------------------------------------------------------------------------------------------*/
#define LPTPWM_TOUT_PIN_FROM_TX                   (0UL << LPTMR_PWMPOCTL_POSEL_Pos)   /*!< Indicate PWMx output to Tx pins \hideinitializer */
#define LPTPWM_TOUT_PIN_FROM_TX_EXT               (1UL << LPTMR_PWMPOCTL_POSEL_Pos)   /*!< Indicate PWMx output to Tx_ext pins \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  LPTPWM Counter Mode Constant Definitions                                                                 */
/*---------------------------------------------------------------------------------------------------------*/
#define LPTPWM_AUTO_RELOAD_MODE                   (0UL)       /*!< Auto-reload mode \hideinitializer */
#define LPTPWM_ONE_SHOT_MODE                      (1UL)       /*!< One-shot mode \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  LPTPWM Trigger LPPDMA Source Select Constant Definitions                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define LPTPWM_TRIGGER_AT_PERIOD_POINT            (0UL << LPTMR_PWMTRGCTL_TRGSEL_Pos) /*!< Timer PWM trigger LPPDMA while counter period point event occurred \hideinitializer */
#define LPTPWM_TRIGGER_AT_COMPARE_POINT           (1UL << LPTMR_PWMTRGCTL_TRGSEL_Pos) /*!< Timer PWM trigger LPPDMA while counter compare point event occurred \hideinitializer */
#define LPTPWM_TRIGGER_AT_PERIOD_OR_COMPARE_POINT (2UL << LPTMR_PWMTRGCTL_TRGSEL_Pos) /*!< Timer PWM trigger LPPDMA while counter period or compare point event occurred \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  Interrupt Flag Accumulator Constant Definitions                                                        */
/*---------------------------------------------------------------------------------------------------------*/
#define LPTPWM_IFA_PERIOD_POINT                (1U)         /*!< Low Power Timer PWM counter equal to period \hideinitializer */
#define LPTPWM_IFA_COMPARE_UP_COUNT_POINT      (2U)         /*!< Low Power Timer PWM counter up count to comparator value \hideinitializer */

/*@}*/ /* end of group LPTMR_PWM_EXPORTED_CONSTANTS */


/** @addtogroup LPTMR_PWM_EXPORTED_FUNCTIONS LPTMR PWM Exported Functions
  @{
*/

/**
  * @brief      Enable LPTPWM Counter Mode
  *
  * @param[in]  lptmr   The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @return     None
  *
  * @details    This macro is used to enable specified LPTMR channel as PWM counter mode, then lptmr counter mode is invalid.
  * @note       All registers about time counter function will be cleared to 0 and lptmr clock source will be changed to PCLKx automatically after executing this macro.
  * \hideinitializer
  */
#define LPTPWM_ENABLE_PWM_MODE(lptmr)         ((lptmr)->CTL |= LPTMR_CTL_FUNCSEL_Msk)

/**
  * @brief      Disable LPTPWM Counter Mode
  *
  * @param[in]  lptmr   The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @return     None
  *
  * @details    This macro is used to disable specified LPTMR channel as PWM counter mode, then lptmr counter mode is available.
  * @note       All registers about LPTPWM counter function will be cleared to 0 after executing this macro.
  * \hideinitializer
  */
#define LPTPWM_DISABLE_PWM_MODE(lptmr)        ((lptmr)->CTL &= ~LPTMR_CTL_FUNCSEL_Msk)

/**
  * @brief      Start LPTPWM Counter
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @return     None
  *
  * @details    This macro is used to enable LPTPWM generator and start counter counting.
  * \hideinitializer
  */
#define LPTPWM_START_COUNTER(lptmr)               ((lptmr)->PWMCTL |= LPTMR_PWMCTL_CNTEN_Msk)

/**
  * @brief      Stop LPTPWM Counter
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @return     None
  *
  * @details    This macro is used to stop LPTPWM counter after current period is completed.
  * \hideinitializer
  */
#define LPTPWM_STOP_COUNTER(lptmr)                ((lptmr)->PWMPERIOD = 0x0UL)

/**
  * @brief      Set Counter Clock Prescaler
  *
  * @param[in]  lptmr           The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @param[in]  u32Prescaler    Clock prescaler of specified channel. Valid values are between 0x0~0xFF.
  *
  * @return     None
  *
  * @details    This macro is used to set the prescaler of specified LPTMR PWM.
  * @note       If prescaler is 0, then there is no scaling in counter clock source.
  * \hideinitializer
  */
#define LPTPWM_SET_PRESCALER(lptmr, u32Prescaler) ((lptmr)->PWMCLKPSC = (u32Prescaler))

/**
  * @brief      Get Counter Clock Prescaler
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @return     Target prescaler setting, CLKPSC (LPTMRx_PWMCLKPSC[7:0])
  *
  * @details    Get the prescaler setting, the target counter clock divider is (CLKPSC + 1).
  * \hideinitializer
  */
#define LPTPWM_GET_PRESCALER(lptmr)       ((lptmr)->PWMCLKPSC)

/**
  * @brief      Set Counter Period
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @param[in]  u32Period   Period of specified channel. Valid values are between 0x0~0xFFFF.
  *
  * @return     None
  *
  * @details    This macro is used to set the period of specified LPTMR PWM.
  * \hideinitializer
  */
#define LPTPWM_SET_PERIOD(lptmr, u32Period)  ((lptmr)->PWMPERIOD = (u32Period))

/**
  * @brief      Get Counter Period
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @return     Target period setting, PERIOD (LPTMRx_PWMPERIOD[15:0])
  *
  * @details    This macro is used to get the period of specified LPTMR PWM.
  * \hideinitializer
  */
#define LPTPWM_GET_PERIOD(lptmr)          ((lptmr)->PWMPERIOD)

/**
  * @brief      Set Comparator Value
  *
  * @param[in]  lptmr   The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @param[in]  u32Cmp  Comparator of specified channel. Valid values are between 0x0~0xFFFF.
  *
  * @return     None
  *
  * @details    This macro is used to set the comparator value of specified LPTMR PWM.
  * \hideinitializer
  */
#define LPTPWM_SET_CMPDAT(lptmr, u32Cmp)     ((lptmr)->PWMCMPDAT = (u32Cmp))

/**
  * @brief      Get Comparator Value
  *
  * @param[in]  lptmr   The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @return     Target comparator setting, CMPDAT (LPTMRx_PWMCMPDAT[15:0])
  *
  * @details    This macro is used to get the comparator value of specified LPTMR PWM.
  * \hideinitializer
  */
#define LPTPWM_GET_CMPDAT(lptmr)          ((lptmr)->PWMCMPDAT)

/**
  * @brief      Clear Counter
  *
  * @param[in]  lptmr   The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @return     None
  *
  * @details    This macro is used to clear counter of specified LPTMR PWM.
  * \hideinitializer
  */
#define LPTPWM_CLEAR_COUNTER(lptmr)       ((lptmr)->PWMCNTCLR = LPTMR_PWMCNTCLR_CNTCLR_Msk)

/**
  * @brief      Enable Output Function
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @param[in]  u32Channel  Enable specified channel output function. Valid values are:
  *                             - \ref LPTPWM_CH0
  *
  * @return     None
  *
  * @details    This macro is used to enable output function of specified output pins.
  * @note       If the corresponding bit in u32ChMask parameter is 0, then output function will be disabled in this channel.
  * \hideinitializer
  */
#define LPTPWM_ENABLE_OUTPUT(lptmr, u32Channel)  ((lptmr)->PWMPOCTL = (u32Channel))

/**
  * @brief      Select Toggle-output Pin
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  * @param[in]  u32ToutSel  Toggle-output pin selection, valid values are:
  *                         - \ref LPTPWM_TOUT_PIN_FROM_TX
  *                         - \ref LPTPWM_TOUT_PIN_FROM_TX_EXT
  *
  * @return     None
  *
  * @details    This macro is used to select LPTPWM toggle-output pin is output on Tx or Tx_EXT pin.
  */
#define LPTPWM_SELECT_TOUT_PIN(lptmr, u32ToutSel)    ((lptmr)->PWMPOCTL = ((lptmr)->PWMPOCTL & ~LPTMR_PWMPOCTL_POSEL_Msk) | (u32ToutSel))

/**
  * @brief      Set Output Inverse
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @param[in]  u32Channel  Set specified channel output is inversed or not. Valid values are:
  *                             - \ref LPTPWM_CH0
    *
  * @return     None
  *
  * @details    This macro is used to enable output inverse of specified output pins.
  * @note       If u32ChMask parameter is 0, then output inverse function will be disabled.
  * \hideinitializer
  */
#define LPTPWM_SET_OUTPUT_INVERSE(lptmr, u32Channel)  ((lptmr)->PWMPOLCTL = (u32Channel))

/**
  * @brief      Enable Period Event Interrupt
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @return     None
  *
  * @details    This macro is used to enable the period event interrupt function.
  * \hideinitializer
  */
#define LPTPWM_ENABLE_PERIOD_INT(lptmr)       ((lptmr)->PWMINTEN0 |= LPTMR_PWMINTEN0_PIEN_Msk)

/**
  * @brief      Disable Period Event Interrupt
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @return     None
  *
  * @details    This macro is used to disable the period event interrupt function.
  * \hideinitializer
  */
#define LPTPWM_DISABLE_PERIOD_INT(lptmr)      ((lptmr)->PWMINTEN0 &= ~LPTMR_PWMINTEN0_PIEN_Msk)

/**
  * @brief      Get Period Event Interrupt Flag
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @retval     0   Period event interrupt did not occur
  * @retval     1   Period event interrupt occurred
  *
  * @details    This macro indicates period event occurred or not.
  * \hideinitializer
  */
#define LPTPWM_GET_PERIOD_INT_FLAG(lptmr)     (((lptmr)->PWMINTSTS0 & LPTMR_PWMINTSTS0_PIF_Msk)? 1 : 0)

/**
  * @brief      Clear Period Event Interrupt Flag
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @return     None
  *
  * @details    This macro clears period event interrupt flag.
  * \hideinitializer
  */
#define LPTPWM_CLEAR_PERIOD_INT_FLAG(lptmr)   ((lptmr)->PWMINTSTS0 = LPTMR_PWMINTSTS0_PIF_Msk)

/**
  * @brief      Enable Compare Up Event Interrupt
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @return     None
  *
  * @details    This macro is used to enable the compare up event interrupt function.
  * \hideinitializer
  */
#define LPTPWM_ENABLE_CMP_UP_INT(lptmr)       ((lptmr)->PWMINTEN0 |= LPTMR_PWMINTEN0_CMPUIEN_Msk)

/**
  * @brief      Disable Compare Up Event Interrupt
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @return     None
  *
  * @details    This macro is used to disable the compare up event interrupt function.
  * \hideinitializer
  */
#define LPTPWM_DISABLE_CMP_UP_INT(lptmr)      ((lptmr)->PWMINTEN0 &= ~LPTMR_PWMINTEN0_CMPUIEN_Msk)

/**
  * @brief      Get Compare Up Event Interrupt Flag
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @retval     0   Compare up event interrupt did not occur
  * @retval     1   Compare up event interrupt occurred
  *
  * @details    This macro indicates compare up event occurred or not.
  * \hideinitializer
  */
#define LPTPWM_GET_CMP_UP_INT_FLAG(lptmr)     (((lptmr)->PWMINTSTS0 & LPTMR_PWMINTSTS0_CMPUIF_Msk)? 1 : 0)

/**
  * @brief      Clear Compare Up Event Interrupt Flag
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @return     None
  *
  * @details    This macro clears compare up event interrupt flag.
  * \hideinitializer
  */
#define LPTPWM_CLEAR_CMP_UP_INT_FLAG(lptmr)   ((lptmr)->PWMINTSTS0 = LPTMR_PWMINTSTS0_CMPUIF_Msk)

/**
  * @brief      Get Counter Reach Maximum Count Status
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @retval     0   LPTMR PWM counter never counts to maximum value
  * @retval     1   LPTMR PWM counter counts to maximum value, 0xFFFF
  *
  * @details    This macro indicates LPTMR PWM counter has count to 0xFFFF or not.
  * \hideinitializer
  */
#define LPTPWM_GET_REACH_MAX_CNT_STATUS(lptmr)    (((lptmr)->PWMSTATUS & LPTMR_PWMSTATUS_CNTMAXF_Msk)? 1 : 0)

/**
  * @brief      Clear Counter Reach Maximum Count Status
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @return     None
  *
  * @details    This macro clears reach maximum count status.
  * \hideinitializer
  */
#define LPTPWM_CLEAR_REACH_MAX_CNT_STATUS(lptmr)  ((lptmr)->PWMSTATUS = LPTMR_PWMSTATUS_CNTMAXF_Msk)

uint32_t LPTPWM_ConfigOutputFreqAndDuty(LPTMR_T *lptmr, uint32_t u32Frequency, uint32_t u32DutyCycle);
void LPTPWM_EnableCounter(LPTMR_T *lptmr);
void LPTPWM_DisableCounter(LPTMR_T *lptmr);
void LPTPWM_EnableTrigger(LPTMR_T *lptmr, uint32_t u32TargetMask, uint32_t u32Condition);
void LPTPWM_DisableTrigger(LPTMR_T *lptmr, uint32_t u32TargetMask);


/**
  * @brief      Enable Trigger LPPDMA
  *
  * @param[in]  lptmr           The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  * @param[in]  u32Condition    The condition to trigger LPPDMA. It could be one of following conditions:
  *                                 - \ref LPTPWM_TRIGGER_AT_PERIOD_POINT
  *                                 - \ref LPTPWM_TRIGGER_AT_COMPARE_POINT
  *                                 - \ref LPTPWM_TRIGGER_AT_PERIOD_OR_COMPARE_POINT
  * @return     None
  *
  * @details    This function is used to enable specified counter compare event to trigger LPPDMA.
  */
#define LPTPWM_EnableTriggerLPPDMA(lptmr, u32Condition) LPTPWM_EnableTrigger(lptmr, LPTMR_PWMTRGCTL_PWMTRGLPPDMA_Msk, u32Condition)

/**
  * @brief      Disable Trigger LPPDMA
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @return     None
  *
  * @details    This function is used to disable counter compare event to trigger LPPDMA.
  */
#define LPTPWM_DisableTriggerLPPDMA(lptmr)              LPTPWM_DisableTrigger(lptmr, LPTMR_PWMTRGCTL_PWMTRGLPPDMA_Msk)

/* Declare these inline functions here to avoid MISRA C 2004 rule 8.1 error */
__STATIC_INLINE void LPTPWM_EnableWakeup(LPTMR_T *lptmr);
__STATIC_INLINE void LPTPWM_DisableWakeup(LPTMR_T *lptmr);
__STATIC_INLINE uint32_t LPTPWM_GetWakeupFlag(LPTMR_T *lptmr);
__STATIC_INLINE void LPTPWM_ClearWakeupFlag(LPTMR_T *lptmr);

/**
  * @brief      Enable LPTPWM Interrupt Wake-up Function
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @return     None
  *
  * @details    This function is used to enable the LPTPWM interrupt Wake-up function and interrupt source could be period interrupt, \n
  *             or compare interrupt.
  * @note       To wake the system from Power-down mode, PCLKx source must be ether LXT or LIRC.
  * \hideinitializer
  */
__STATIC_INLINE void LPTPWM_EnableWakeup(LPTMR_T *lptmr)
{
    lptmr->PWMCTL |= LPTMR_PWMCTL_PWMINTWKEN_Msk;
}

/**
  * @brief      Disable LPTPWM Interrupt Wake-up Function
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @return     None
  *
  * @details    This function is used to disable the LPTPWM interrupt Wake-up function.
  * \hideinitializer
  */
__STATIC_INLINE void LPTPWM_DisableWakeup(LPTMR_T *lptmr)
{
    lptmr->PWMCTL &= ~LPTMR_PWMCTL_PWMINTWKEN_Msk;
}

/**
  * @brief      Get LPTPWM Wake-up Flag
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @retval     0   LPTPWM does not cause CPU wake-up
  * @retval     1   LPTPWM interrupt event cause CPU wake-up
  *
  * @details    This function indicates LPTPWM interrupt event has waked up system or not.
  * \hideinitializer
  */
__STATIC_INLINE uint32_t LPTPWM_GetWakeupFlag(LPTMR_T *lptmr)
{
    return ((lptmr->PWMSTATUS & LPTMR_PWMSTATUS_PWMINTWKF_Msk) ? 1 : 0);
}

/**
  * @brief      Clear LPTPWM Wake-up Flag
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @return     None
  *
  * @details    This function clears LPTPWM Wake-up flag.
  * \hideinitializer
  */
__STATIC_INLINE void LPTPWM_ClearWakeupFlag(LPTMR_T *lptmr)
{
    lptmr->PWMSTATUS = LPTMR_PWMSTATUS_PWMINTWKF_Msk;
}

void LPTPWM_EnableAcc(LPTMR_T *lptmr, uint32_t u32IntFlagCnt, uint32_t u32IntAccSrc);
void LPTPWM_DisableAcc(LPTMR_T *lptmr);
void LPTPWM_EnableAccInt(LPTMR_T *lptmr);
void LPTPWM_DisableAccInt(LPTMR_T *lptmr);
void LPTPWM_ClearAccInt(LPTMR_T *lptmr);
uint32_t LPTPWM_GetAccInt(LPTMR_T *lptmr);
void LPTPWM_EnableAccLPPDMA(LPTMR_T *lptmr);
void LPTPWM_DisableAccPDMA(LPTMR_T *lptmr);
void LPTPWM_EnableAccStopMode(LPTMR_T *lptmr);
void LPTPWM_DisableAccStopMode(LPTMR_T *lptmr);

/*@}*/ /* end of group LPTMR_PWM_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group LPTMR_PWM_Driver */

/*@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif /* __LPTMR_PWM_H__ */

/*** (C) COPYRIGHT 2020 Nuvoton Technology Corp. ***/
