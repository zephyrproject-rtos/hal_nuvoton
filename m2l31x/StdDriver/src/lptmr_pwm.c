/**************************************************************************//**
 * @file     lptmr_pwm.c
 * @version  V3.01
 * @brief    LPTMR PWM Controller(LPTMR PWM) driver source file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/
#include "NuMicro.h"


/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup LPTMR_PWM_Driver LPTMR PWM Driver
  @{
*/

/** @addtogroup LPTMR_PWM_EXPORTED_FUNCTIONS LPTMR PWM Exported Functions
  @{
*/

/**
  * @brief      Configure LPTPWM Output Frequency and Duty Cycle
  *
  * @param[in]  lptmr           The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  * @param[in]  u32Frequency    Target generator frequency.
  * @param[in]  u32DutyCycle    Target generator duty cycle percentage. Valid range are between 0~100. 10 means 10%, 20 means 20%...
  *
  * @return     Nearest frequency clock in nano second
  *
  * @details    This API is used to configure LPTPWM output frequency and duty cycle in up count type and auto-reload operation mode.
  * @note       This API is only available if LPTMR PWM counter clock source is from TMRx_CLK.
  */
uint32_t LPTPWM_ConfigOutputFreqAndDuty(LPTMR_T *lptmr, uint32_t u32Frequency, uint32_t u32DutyCycle)
{
    uint32_t u32PWMClockFreq, u32TargetFreq;
    uint32_t u32Prescaler = 0x100UL, u32Period, u32CMP;
    const uint32_t u32ClkTbl[4] = {__HIRC, __MIRC, __LXT, __LIRC};
    uint32_t u32Src;

    if (lptmr == LPTMR0)
    {
        u32Src = (LPSCC->CLKSEL0 & LPSCC_CLKSEL0_LPTMR0SEL_Msk) >> LPSCC_CLKSEL0_LPTMR0SEL_Pos;
    }
    else if (lptmr == LPTMR1)
    {
        u32Src = (LPSCC->CLKSEL0 & LPSCC_CLKSEL0_LPTMR1SEL_Msk) >> LPSCC_CLKSEL0_LPTMR1SEL_Pos;
    }

    u32PWMClockFreq = u32ClkTbl[u32Src];

    /* Calculate u8PERIOD and u8PSC */
    for (u32Prescaler = 1; u32Prescaler <= 0x100UL; u32Prescaler++)
    {
        u32Period = (u32PWMClockFreq / u32Prescaler) / u32Frequency;

        /* If target u32Period is larger than 0x10000, need to use a larger prescaler */
        if (u32Period > 0x10000UL)
            continue;

        break;
    }

    if (u32Prescaler == 0x101UL)
    {
        u32Prescaler = 0x100UL;
        u32Period = 0x10000UL;
    }

    /* Store return value here 'cos we're gonna change u32Prescaler & u32Period to the real value to fill into register */
    u32TargetFreq = (u32PWMClockFreq / u32Prescaler) / u32Period;

    /* Set PWM to auto-reload mode */
    lptmr->PWMCTL = (lptmr->PWMCTL & ~LPTMR_PWMCTL_CNTMODE_Msk) | (LPTPWM_AUTO_RELOAD_MODE << LPTMR_PWMCTL_CNTMODE_Pos);

    /* Convert to real register value */
    LPTPWM_SET_PRESCALER(lptmr, (u32Prescaler - 1UL));

    LPTPWM_SET_PERIOD(lptmr, (u32Period - 1UL));

    if (u32DutyCycle)
    {
        u32CMP = (u32DutyCycle * u32Period) / 100UL;
    }
    else
    {
        u32CMP = 0UL;
    }

    LPTPWM_SET_CMPDAT(lptmr, u32CMP);
    return (u32TargetFreq);
}

/**
  * @brief      Enable LPTPWM Counter
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @return     None
  *
  * @details    This function is used to enable LPTPWM generator and start counter counting.
  */
void LPTPWM_EnableCounter(LPTMR_T *lptmr)
{
    lptmr->PWMCTL |= LPTMR_PWMCTL_CNTEN_Msk;
}

/**
  * @brief      Disable LPTPWM Generator
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1.
  *
  * @return     None
  *
  * @details This function is used to disable LPTPWM counter immediately by clear CNTEN (LPTMRx_PWMCTL[0]) bit.
  */
void LPTPWM_DisableCounter(LPTMR_T *lptmr)
{
    lptmr->PWMCTL &= ~LPTMR_PWMCTL_CNTEN_Msk;
}

/**
  * @brief      Enable LPTPWM Trigger LPPDMA
  *
  * @param[in]  lptmr           The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1
  * @param[in]  u32TargetMask   The mask of modules (LPPDMA) trigger by LPTPWM, the combination of:
  *                                 - \ref LPTMR_PWMTRGCTL_PWMTRGLPPDMA_Msk
  * @param[in]  u32Condition    The condition to trigger LPPDMA. It could be one of following conditions:
  *                                 - \ref LPTPWM_TRIGGER_AT_PERIOD_POINT
  *                                 - \ref LPTPWM_TRIGGER_AT_COMPARE_POINT
  *                                 - \ref LPTPWM_TRIGGER_AT_PERIOD_OR_COMPARE_POINT
  * @return     None
  *
  * @details    This function is used to enable specified counter event to trigger ADC/DAC/PDMA.
  */
void LPTPWM_EnableTrigger(LPTMR_T *lptmr, uint32_t u32TargetMask, uint32_t u32Condition)
{
    lptmr->PWMTRGCTL &= ~( LPTMR_PWMTRGCTL_PWMTRGLPPDMA_Msk | LPTMR_PWMTRGCTL_TRGEN_Msk| LPTMR_PWMTRGCTL_TRGSEL_Msk);
    lptmr->PWMTRGCTL |= (u32TargetMask) | (u32Condition);
}

/**
  * @brief      Disable Trigger LPPDMA
  *
  * @param[in]  lptmr       The pointer of the specified LPTMR module. It could be LPTMR0, LPTMR1
  * @param[in]  u32TargetMask   The mask of modules (LPPDMA) trigger by LPTPWM, the combination of:
  *                                 - \ref LPTMR_PWMTRGCTL_PWMTRGLPPDMA_Msk
  *
  * @return     None
  *
  * @details    This function is used to disable counter event to trigger LPPDMA.
  */
void LPTPWM_DisableTrigger(LPTMR_T *lptmr, uint32_t u32TargetMask)
{
    lptmr->PWMTRGCTL &= ~(u32TargetMask);
}

/**
  * @brief      Enable Interrupt Flag Accumulator
  * @param[in]  lptmr           The pointer of the specified Timer module. It could be LPTMR0, LPTMR1
  * @param[in]  u32IntFlagCnt   Interrupt flag counter. Valid values are between 0~65535.
  * @param[in]  u32IntAccSrc    Interrupt flag accumulator source selection.
  *                                 - \ref LPTPWM_IFA_PERIOD_POINT
  *                                 - \ref LPTPWM_IFA_COMPARE_UP_COUNT_POINT
  * @return     None
  * @details    This function is used to enable interrupt flag accumulator.
  */
void LPTPWM_EnableAcc(LPTMR_T *lptmr, uint32_t u32IntFlagCnt, uint32_t u32IntAccSrc)
{
    lptmr->PWMIFA = (((lptmr)->PWMIFA & ~(LPTMR_PWMIFA_IFACNT_Msk | LPTMR_PWMIFA_IFASEL_Msk | LPTMR_PWMIFA_STPMOD_Msk))
                     | (LPTMR_PWMIFA_IFAEN_Msk | (u32IntFlagCnt << LPTMR_PWMIFA_IFACNT_Pos) | (u32IntAccSrc << LPTMR_PWMIFA_IFASEL_Pos)));
}

/**
  * @brief      Disable Interrupt Flag Accumulator
  * @param[in]  lptmr       The pointer of the specified Timer module. It could be LPTMR0, LPTMR1
  * @return     None
  * @details    This function is used to disable interrupt flag accumulator.
  */
void LPTPWM_DisableAcc(LPTMR_T *lptmr)
{
    lptmr->PWMIFA &= ~LPTMR_PWMIFA_IFAEN_Msk;
}

/**
  * @brief      Enable Interrupt Flag Accumulator Interrupt Function
  * @param[in]  lptmr       The pointer of the specified Timer module. It could be LPTMR0, LPTMR1
  * @return     None
  * @details    This function is used to enable interrupt flag accumulator interrupt.
  */
void LPTPWM_EnableAccInt(LPTMR_T *lptmr)
{
    lptmr->PWMAINTEN |= LPTMR_PWMAINTEN_IFAIEN_Msk;
}

/**
  * @brief      Disable Interrupt Flag Accumulator Interrupt Function
  * @param[in]  lptmr       The pointer of the specified Timer module. It could be LPTMR0, LPTMR1
  * @return     None
  * @details    This function is used to disable interrupt flag accumulator interrupt.
  */
void LPTPWM_DisableAccInt(LPTMR_T *lptmr)
{
    lptmr->PWMAINTEN &= ~LPTMR_PWMAINTEN_IFAIEN_Msk;
}

/**
  * @brief      Clear Interrupt Flag Accumulator Interrupt Flag
  * @param[in]  lptmr       The pointer of the specified Timer module. It could be LPTMR0, LPTMR1
  * @return     None
  * @details    This function is used to clear interrupt flag accumulator interrupt.
  */
void LPTPWM_ClearAccInt(LPTMR_T *lptmr)
{
    lptmr->PWMAINTSTS = LPTMR_PWMAINTSTS_IFAIF_Msk;
}

/**
  * @brief      Get Interrupt Flag Accumulator Interrupt Flag
  * @param[in]  lptmr       The pointer of the specified Timer module. It could be LPTMR0, LPTMR1
  * @retval     0   Accumulator interrupt did not occur
  * @retval     1   Accumulator interrupt occurred
  * @details    This function is used to get interrupt flag accumulator interrupt.
  */
uint32_t LPTPWM_GetAccInt(LPTMR_T *lptmr)
{
    return (((lptmr)->PWMAINTSTS & LPTMR_PWMAINTSTS_IFAIF_Msk)? 1UL : 0UL);
}

/**
  * @brief      Enable Accumulator Interrupt Trigger LPPDMA
  * @param[in]  lptmr       The pointer of the specified Timer module. It could be LPTMR0, LPTMR1
  * @return     None
  * @details    This function is used to enable accumulator interrupt trigger PDMA transfer.
  */
void LPTPWM_EnableAccLPPDMA(LPTMR_T *lptmr)
{
    lptmr->PWMAPDMACTL |= LPTMR_PWMAPDMACTL_APDMAEN_Msk;
}

/**
  * @brief      Disable Accumulator Interrupt Trigger PDMA
  * @param[in]  lptmr       The pointer of the specified Timer module. It could be LPTMR0, LPTMR1
  * @return     None
  * @details    This function is used to disable accumulator interrupt trigger PDMA transfer.
  */
void LPTPWM_DisableAccPDMA(LPTMR_T *lptmr)
{
    lptmr->PWMAPDMACTL &= ~LPTMR_PWMAPDMACTL_APDMAEN_Msk;
}

/**
  * @brief      Enable Interrupt Flag Accumulator Stop Mode
  * @param[in]  lptmr       The pointer of the specified Timer module. It could be LPTMR0, LPTMR1
  * @return     None
  * @details    This function is used to enable interrupt flag accumulator event to stop PWM counting.
  */
void LPTPWM_EnableAccStopMode(LPTMR_T *lptmr)
{
    lptmr->PWMIFA |= LPTMR_PWMIFA_STPMOD_Msk;
}

/**
  * @brief      Disable Interrupt Flag Accumulator Stop Mode
  * @param[in]  lptmr       The pointer of the specified Timer module. It could be LPTMR0, LPTMR1
  * @return     None
  * @details    This function is used to disable interrupt flag accumulator event to stop PWM counting.
  */
void LPTPWM_DisableAccStopMode(LPTMR_T *lptmr)
{
    lptmr->PWMIFA &= ~LPTMR_PWMIFA_STPMOD_Msk;
}

/*@}*/ /* end of group LPTMR_PWM_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group LPTMR_PWM_Driver */

/*@}*/ /* end of group Standard_Driver */

/*** (C) COPYRIGHT 2019 Nuvoton Technology Corp. ***/
