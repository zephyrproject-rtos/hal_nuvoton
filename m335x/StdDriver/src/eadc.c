/**************************************************************************//**
 * @file     eadc.c
 * @version  V1.00
 * @brief    EADC driver source file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (c) 2025 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/

#include "NuMicro.h"

/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup EADC_Driver EADC Driver
  @{
*/

/** @addtogroup EADC_EXPORTED_FUNCTIONS EADC Exported Functions
  @{
*/

/**
  * @brief This function make EADC_module be ready to convert.
  * @param[in] eadc The pointer of the specified EADC module.
  * @param[in] u32InputMode Decides the input mode.
  *                       - \ref EADC_CTL_DIFFEN_SINGLE_END      :Single end input mode.
  *                       - \ref EADC_CTL_DIFFEN_DIFFERENTIAL    :Differential input type.
  * @return None
  * @details This function is used to set analog input mode and enable A/D Converter.
  *         Before starting A/D conversion function, ADCEN bit (EADC_CTL[0]) should be set to 1.
  * @note
  */
void EADC_Open(EADC_T *eadc, uint32_t u32InputMode)
{
    /* Enable EADC Boost mode(debug mode) */
    outpw((uint32_t)eadc + 0xFF4UL, inpw((uint32_t)eadc + 0xFF4UL) | BIT1);

    /* Add one cycle in the decode trigger event is used to improve EADC accuracy.*/
    //outpw((uint32_t)eadc + 0xFF0UL, inpw((uint32_t)eadc + 0xFF0UL) | BIT8);

    eadc->CTL &= (~EADC_CTL_DIFFEN_Msk);

    eadc->CTL |= (u32InputMode | EADC_CTL_ADCEN_Msk);
}

/**
  * @brief  Calibration the specified EADC module
  *
  * @param[in]  eadc The pointer of the specified EADC module
  *
  * @retval 0                EADC calibration OK.
  * @retval EADC_TIMEOUT_ERR EADC operation abort due to timeout error.
  * @retval EADC_CAL_ERR     EADC has calibration error.
  *
  * @details    To decrease the effect of electrical random noise, the calibration mode performs an offset and mismatch measurement cycles.
  *             Afterwards, in normal operation mode, the calibration engine applies to the capacitor array, so that the offset and mismatch are removed.
  * @note       This API will reset and calibrate EADC if EADC never be calibrated after chip power on.
  * @note       If chip power off, calibration function should be executed again.
  * @note       If you use the calibration function again, you must write 1 to clear CALIF (EADC_CALSR[[16]).
  */

int32_t EADC_Calibration(EADC_T *eadc)
{
    uint32_t u32ClkDivBackup;
    uint32_t u32PclkDivBackup;
    uint32_t u32RegLockBackup;

    /* Unlock protected registers */
    u32RegLockBackup = SYS_IsRegLocked();
    SYS_UnlockReg();

    /* record EADC clock settings */
    u32PclkDivBackup = CLK->PCLKDIV;

    /* Set EADCCLK equal to PCLK according to calibration requirements */
    if (eadc == EADC0)
    {
        u32ClkDivBackup = CLK->CLKDIV0;
        CLK->CLKSEL0 = (CLK->CLKSEL0 & ~CLK_CLKSEL0_EADC0SEL_Msk) | CLK_CLKSEL0_EADC0SEL_HCLK;
        CLK->CLKDIV0 = (CLK->CLKDIV0 & ~CLK_CLKDIV0_EADC0DIV_Msk) | (2UL << CLK_CLKDIV0_EADC0DIV_Pos);
    }
    else if (eadc == EADC1)
    {
        u32ClkDivBackup = CLK->CLKDIV2;
        CLK->CLKSEL0 = (CLK->CLKSEL0 & ~CLK_CLKSEL0_EADC1SEL_Msk) | CLK_CLKSEL0_EADC1SEL_HCLK;
        CLK->CLKDIV2 = (CLK->CLKDIV2 & ~CLK_CLKDIV2_EADC1DIV_Msk) | (2UL << CLK_CLKDIV2_EADC1DIV_Pos);
    }
    else
    {
        return EADC_ARG_ERR;
    }

    CLK->PCLKDIV = (CLK->PCLKDIV & ~CLK_PCLKDIV_APB1DIV_Msk);

    /* EADC Converter Enable  */
    eadc->CTL |= EADC_CTL_ADCEN_Msk;

    /* Do calibration for EADC to decrease the effect of electrical random noise. */
    if ((eadc->CALSR & EADC_CALSR_CALIF_Msk) == 0UL)
    {
        volatile uint32_t u32Delay;

        /* Must reset EADC before EADC calibration */
        EADC_CONV_RESET(eadc);

        u32Delay = SystemCoreClock >> 4;

        while ((eadc->CTL & EADC_CTL_ADCRST_Msk) == EADC_CTL_ADCRST_Msk)
        {
            if (--u32Delay == 0)
            {
                return EADC_TIMEOUT_ERR;
            }
        }

        eadc->CALSR |= EADC_CALSR_CALIF_Msk;        /* Clear Calibration Finish Interrupt Flag */
        eadc->CALCTL |= EADC_CALCTL_CAL_Msk;        /* Enable Calibration function */

        u32Delay = SystemCoreClock >> 4UL;

        while ((eadc->CALSR & EADC_CALSR_CALIF_Msk) != EADC_CALSR_CALIF_Msk) /* Wait calibration finish */
        {
            if (--u32Delay == 0)
            {
                return EADC_CAL_ERR;
            }
        }
    }

    /* Restore EADC clock settings */
    CLK->PCLKDIV = u32PclkDivBackup;

    if (eadc == EADC0)
    {
        CLK->CLKDIV0 = u32ClkDivBackup;
    }
    else if (eadc == EADC1)
    {
        CLK->CLKDIV2 = u32ClkDivBackup;
    }
    else
    {
        return EADC_ARG_ERR;
    }

    if (u32RegLockBackup)
    {
        /* Lock protected registers */
        SYS_LockReg();
    }

    return 0;
}

/**
  * @brief Disable EADC_module.
  * @param[in] eadc The pointer of the specified EADC module..
  * @return None
  * @details Clear ADCEN bit (EADC_CTL[0]) to disable A/D converter analog circuit power consumption.
  */
void EADC_Close(EADC_T *eadc)
{
    eadc->CTL &= ~EADC_CTL_ADCEN_Msk;
}

/**
  * @brief Configure the sample control logic module.
  * @param[in] eadc The pointer of the specified EADC module.
  * @param[in] u32ModuleNum Decides the sample module number (valid values: EADC0 = 0~26, EADC1 = 0~15).
  * @param[in] u32TriggerSrc Decides the trigger source. Valid values are:
  *                            - \ref EADC_SOFTWARE_TRIGGER              : Disable trigger
  *                            - \ref EADC_FALLING_EDGE_TRIGGER          : STADC pin falling edge trigger
  *                            - \ref EADC_RISING_EDGE_TRIGGER           : STADC pin rising edge trigger
  *                            - \ref EADC_FALLING_RISING_EDGE_TRIGGER   : STADC pin both falling and rising edge trigger
  *                            - \ref EADC_ADINT0_TRIGGER                : EADC ADINT0 interrupt EOC pulse trigger
  *                            - \ref EADC_ADINT1_TRIGGER                : EADC ADINT1 interrupt EOC pulse trigger
  *                            - \ref EADC_TIMER0_TRIGGER                : Timer0 overflow pulse trigger
  *                            - \ref EADC_TIMER1_TRIGGER                : Timer1 overflow pulse trigger
  *                            - \ref EADC_TIMER2_TRIGGER                : Timer2 overflow pulse trigger
  *                            - \ref EADC_TIMER3_TRIGGER                : Timer3 overflow pulse trigger
  *                            - \ref EADC_PWM0TG0_TRIGGER               : PWM0TG0 trigger
  *                            - \ref EADC_PWM0TG1_TRIGGER               : PWM0TG1 trigger
  *                            - \ref EADC_PWM0TG2_TRIGGER               : PWM0TG2 trigger
  *                            - \ref EADC_PWM0TG3_TRIGGER               : PWM0TG3 trigger
  *                            - \ref EADC_PWM0TG4_TRIGGER               : PWM0TG4 trigger
  *                            - \ref EADC_PWM0TG5_TRIGGER               : PWM0TG5 trigger
  *                            - \ref EADC_PWM1TG0_TRIGGER               : PWM1TG0 trigger
  *                            - \ref EADC_PWM1TG1_TRIGGER               : PWM1TG1 trigger
  *                            - \ref EADC_PWM1TG2_TRIGGER               : PWM1TG2 trigger
  *                            - \ref EADC_PWM1TG3_TRIGGER               : PWM1TG3 trigger
  *                            - \ref EADC_PWM1TG4_TRIGGER               : PWM1TG4 trigger
  *                            - \ref EADC_PWM1TG5_TRIGGER               : PWM1TG5 trigger
  *                            - \ref EADC_BPWM0TG_TRIGGER               : BPWM0TG trigger
  *                            - \ref EADC_BPWM1TG_TRIGGER               : BPWM1TG trigger
  *                            - \ref EADC_ACMP0_INT_TRIGGER             : ACMP0 interrupt trigger
  *                            - \ref EADC_ACMP1_INT_TRIGGER             : ACMP1 interrupt trigger
  * @param[in] u32Channel Specifies the sample module channel (valid values: EADC0 = 0~26, EADC1 = 0~15).
  * @return None
  * @details EADC0 control logic modules 0~23 which is configurable for ADC converter channel EADC_CH0~23 and trigger source.
  *         sample module 24~26 is fixed for ADC channel 24, 25, 26 input sources as band-gap voltage, AVDD/4, and temperature sensor.
  *         EADC1 control logic modules 0~15 which is configurable for ADC converter channel EADC_CH0~15 and trigger source.
  *
  */
void EADC_ConfigSampleModule(EADC_T *eadc, uint32_t u32ModuleNum, uint32_t u32TriggerSrc, uint32_t u32Channel)
{
    if (u32ModuleNum < 19UL)
    {
        eadc->SCTL[u32ModuleNum] &= ~(EADC_SCTL_EXTFEN_Msk | EADC_SCTL_EXTREN_Msk | EADC_SCTL_TRGSEL_Msk | EADC_SCTL_CHSEL_Msk);
        eadc->SCTL[u32ModuleNum] |= (u32TriggerSrc | u32Channel);
    }
    else
    {
        eadc->SCTL19[u32ModuleNum - 19UL] &= ~(EADC_SCTL_EXTFEN_Msk | EADC_SCTL_EXTREN_Msk | EADC_SCTL_TRGSEL_Msk | EADC_SCTL_CHSEL_Msk);
        eadc->SCTL19[u32ModuleNum - 19UL] |= (u32TriggerSrc | u32Channel);
    }
}


/**
  * @brief Set trigger delay time.
  * @param[in] eadc The pointer of the specified EADC module.
  * @param[in] u32ModuleNum Decides the sample module number (valid values: EADC0 = 0~26, EADC1 = 0~15).
  * @param[in] u32TriggerDelayTime Decides the trigger delay time, valid range are between 0~0xFF.
  * @param[in] u32DelayClockDivider Decides the trigger delay clock divider. Valid values are:
    *                                - \ref EADC_SCTL_TRGDLYDIV_DIVIDER_1    : Trigger delay clock frequency is ADC_CLK/1
    *                                - \ref EADC_SCTL_TRGDLYDIV_DIVIDER_2    : Trigger delay clock frequency is ADC_CLK/2
    *                                - \ref EADC_SCTL_TRGDLYDIV_DIVIDER_4    : Trigger delay clock frequency is ADC_CLK/4
    *                                - \ref EADC_SCTL_TRGDLYDIV_DIVIDER_16   : Trigger delay clock frequency is ADC_CLK/16
  * @return None
  * @details User can configure the trigger delay time by setting TRGDLYCNT (EADC_SCTLn[15:8], n=0~15) and TRGDLYDIV (EADC_SCTLn[7:6], n=0~15).
  *         Trigger delay time = (u32TriggerDelayTime) x Trigger delay clock period.
  */
void EADC_SetTriggerDelayTime(EADC_T *eadc, uint32_t u32ModuleNum, uint32_t u32TriggerDelayTime, uint32_t u32DelayClockDivider)
{
    if (u32ModuleNum < 19UL)
    {
        eadc->SCTL[u32ModuleNum] &= ~(EADC_SCTL_TRGDLYDIV_Msk | EADC_SCTL_TRGDLYCNT_Msk);
        eadc->SCTL[u32ModuleNum] |= ((u32TriggerDelayTime << EADC_SCTL_TRGDLYCNT_Pos) | u32DelayClockDivider);
    }
    else
    {
        eadc->SCTL19[u32ModuleNum - 19UL] &= ~(EADC_SCTL_TRGDLYDIV_Msk | EADC_SCTL_TRGDLYCNT_Msk);
        eadc->SCTL19[u32ModuleNum - 19UL] |= ((u32TriggerDelayTime << EADC_SCTL_TRGDLYCNT_Pos) | u32DelayClockDivider);
    }
}

/**
  * @brief Set ADC extend sample time.
  * @param[in] eadc The pointer of the specified EADC module.
  * @param[in] u32ModuleNum specifies the sample module number (valid values: EADC0 = 0~26, EADC1 = 0~15).
  * @param[in] u32ExtendSampleTime Decides the extend sampling time, the range is from 0~255 ADC clock. Valid value are from 0 to 0xFF.
  * @return None
  * @details When A/D converting at high conversion rate, the sampling time of analog input voltage may not enough if input channel loading is heavy,
  *         user can extend A/D sampling time after trigger source is coming to get enough sampling time.
  */
void EADC_SetExtendSampleTime(EADC_T *eadc, uint32_t u32ModuleNum, uint32_t u32ExtendSampleTime)
{
    if (u32ModuleNum < 19UL)
    {
        eadc->SCTL[u32ModuleNum] &= ~EADC_SCTL_EXTSMPT_Msk;
        eadc->SCTL[u32ModuleNum] |= (u32ExtendSampleTime << EADC_SCTL_EXTSMPT_Pos);
    }
    else
    {
        eadc->SCTL19[u32ModuleNum - 19UL] &= ~EADC_SCTL_EXTSMPT_Msk;
        eadc->SCTL19[u32ModuleNum - 19UL] |= (u32ExtendSampleTime << EADC_SCTL_EXTSMPT_Pos);
    }
}

/** @} end of group EADC_EXPORTED_FUNCTIONS */

/** @} end of group EADC_Driver */

/** @} end of group Standard_Driver */
