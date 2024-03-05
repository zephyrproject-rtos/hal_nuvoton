/**************************************************************************//**
 * @file     clk.c
 * @version  V1.0
 * @brief    M2L31 series CLK driver source file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

#include "NuMicro.h"

/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup CLK_Driver CLK Driver
  @{
*/

int32_t g_CLK_i32ErrCode = 0;   /*!< CLK global error code */

/** @addtogroup CLK_EXPORTED_FUNCTIONS CLK Exported Functions
  @{
*/

/**
  * @brief      Disable clock divider output function
  * @param      None
  * @return     None
  * @details    This function disable clock divider output function.
  */
void CLK_DisableCKO(void)
{
    /* Disable CKO clock source */
    CLK_DisableModuleClock(CLKO_MODULE);
}

/**
  * @brief      This function enable clock divider output module clock,
  *             enable clock divider output function and set frequency selection.
  * @param[in]  u32ClkSrc is frequency divider function clock source. Including :
  *             - \ref CLK_CLKSEL1_CLKOSEL_HXT
  *             - \ref CLK_CLKSEL1_CLKOSEL_LXT
  *             - \ref CLK_CLKSEL1_CLKOSEL_HCLK
  *             - \ref CLK_CLKSEL1_CLKOSEL_HIRC
  *             - \ref CLK_CLKSEL1_CLKOSEL_LIRC
  *             - \ref CLK_CLKSEL1_CLKOSEL_PLL
  *             - \ref CLK_CLKSEL1_CLKOSEL_HIRC48M
  *             - \ref CLK_CLKSEL1_CLKOSEL_MIRC
  * @param[in]  u32ClkDiv is divider output frequency selection. It could be 0~15.
  * @param[in]  u32ClkDivBy1En is clock divided by one enabled.
  * @return     None
  * @details    Output selected clock to CKO. The output clock frequency is divided by u32ClkDiv. \n
  *             The formula is: \n
  *                 CKO frequency = (Clock source frequency) / 2^(u32ClkDiv + 1) \n
  *             This function is just used to set CKO clock.
  *             User must enable I/O for CKO clock output pin by themselves. \n
  */
void CLK_EnableCKO(uint32_t u32ClkSrc, uint32_t u32ClkDiv, uint32_t u32ClkDivBy1En)
{
    /* CKO = clock source / 2^(u32ClkDiv + 1) */
    CLK->CLKOCTL = CLK_CLKOCTL_CLKOEN_Msk | (u32ClkDiv) | (u32ClkDivBy1En << CLK_CLKOCTL_DIV1EN_Pos);

    /* Enable CKO clock source */
    CLK_EnableModuleClock(CLKO_MODULE);

    /* Select CKO clock source */
    CLK_SetModuleClock(CLKO_MODULE, u32ClkSrc, 0UL);
}

/**
  * @brief      Enter to Power-down mode
  * @param      None
  * @return     None
  * @details    This function is used to let system enter to Power-down mode. \n
  *             The register write-protection function should be disabled before using this function.
  */
void CLK_PowerDown(void)
{
    uint32_t u32HIRCTRIMCTL;

    /* Set the processor uses deep sleep as its low power mode */
    SCB->SCR |= SCB_SCR_SLEEPDEEP_Msk;

    /* Set system Power-down enabled */
    CLK->PWRCTL |= (CLK_PWRCTL_PDEN_Msk);

    /* Store HIRC control register */
    u32HIRCTRIMCTL = SYS->IRCTCTL;

    /* Disable HIRC auto trim */
    SYS->HIRCTCTL &= (~SYS_HIRCTCTL_FREQSEL_Msk);

    /* Chip enter Power-down mode after CPU run WFI instruction */
    __WFI();

    /* Restore HIRC control register */
    SYS->IRCTCTL = u32HIRCTRIMCTL;
}

/**
  * @brief      Enter to Idle mode
  * @param      None
  * @return     None
  * @details    This function let system enter to Idle mode. \n
  *             The register write-protection function should be disabled before using this function.
  */
void CLK_Idle(void)
{
    /* Set the processor uses sleep as its low power mode */
    SCB->SCR &= ~SCB_SCR_SLEEPDEEP_Msk;

    /* Set chip in idle mode because of WFI command */
    CLK->PWRCTL &= ~CLK_PWRCTL_PDEN_Msk;

    /* Chip enter idle mode after CPU run WFI instruction */
    __WFI();
}

/**
  * @brief      Get external high speed crystal clock frequency
  * @param      None
  * @return     External high frequency crystal frequency
  * @details    This function get external high frequency crystal frequency. The frequency unit is Hz.
  */
uint32_t CLK_GetHXTFreq(void)
{
    uint32_t u32Freq;

    if((CLK->PWRCTL & CLK_PWRCTL_HXTEN_Msk) == CLK_PWRCTL_HXTEN_Msk)
    {
        u32Freq = __HXT;
    }
    else
    {
        u32Freq = 0UL;
    }

    return u32Freq;
}


/**
  * @brief      Get external low speed crystal clock frequency
  * @param      None
  * @return     External low speed crystal clock frequency
  * @details    This function get external low frequency crystal frequency. The frequency unit is Hz.
  */
uint32_t CLK_GetLXTFreq(void)
{
    uint32_t u32Freq;
    if((CLK->PWRCTL & CLK_PWRCTL_LXTEN_Msk) == CLK_PWRCTL_LXTEN_Msk)
    {
        u32Freq = __LXT;
    }
    else
    {
        u32Freq = 0UL;
    }

    return u32Freq;
}

/**
  * @brief      Get PCLK0 frequency
  * @param      None
  * @return     PCLK0 frequency
  * @details    This function get PCLK0 frequency. The frequency unit is Hz.
  */
uint32_t CLK_GetPCLK0Freq(void)
{
    uint32_t u32Freq;
    SystemCoreClockUpdate();

    if((CLK->PCLKDIV & CLK_PCLKDIV_APB0DIV_Msk) == CLK_PCLKDIV_APB0DIV_DIV1)
    {
        u32Freq = SystemCoreClock;
    }
    else if((CLK->PCLKDIV & CLK_PCLKDIV_APB0DIV_Msk) == CLK_PCLKDIV_APB0DIV_DIV2)
    {
        u32Freq = SystemCoreClock / 2UL;
    }
    else if((CLK->PCLKDIV & CLK_PCLKDIV_APB0DIV_Msk) == CLK_PCLKDIV_APB0DIV_DIV4)
    {
        u32Freq = SystemCoreClock / 4UL;
    }
    else if((CLK->PCLKDIV & CLK_PCLKDIV_APB0DIV_Msk) == CLK_PCLKDIV_APB0DIV_DIV8)
    {
        u32Freq = SystemCoreClock / 8UL;
    }
    else if((CLK->PCLKDIV & CLK_PCLKDIV_APB0DIV_Msk) == CLK_PCLKDIV_APB0DIV_DIV16)
    {
        u32Freq = SystemCoreClock / 16UL;
    }
    else
    {
        u32Freq = SystemCoreClock;
    }

    return u32Freq;
}


/**
  * @brief      Get PCLK1 frequency
  * @param      None
  * @return     PCLK1 frequency
  * @details    This function get PCLK1 frequency. The frequency unit is Hz.
  */
uint32_t CLK_GetPCLK1Freq(void)
{
    uint32_t u32Freq;
    SystemCoreClockUpdate();

    if((CLK->PCLKDIV & CLK_PCLKDIV_APB1DIV_Msk) == CLK_PCLKDIV_APB1DIV_DIV1)
    {
        u32Freq = SystemCoreClock;
    }
    else if((CLK->PCLKDIV & CLK_PCLKDIV_APB1DIV_Msk) == CLK_PCLKDIV_APB1DIV_DIV2)
    {
        u32Freq = SystemCoreClock / 2UL;
    }
    else if((CLK->PCLKDIV & CLK_PCLKDIV_APB1DIV_Msk) == CLK_PCLKDIV_APB1DIV_DIV4)
    {
        u32Freq = SystemCoreClock / 4UL;
    }
    else if((CLK->PCLKDIV & CLK_PCLKDIV_APB1DIV_Msk) == CLK_PCLKDIV_APB1DIV_DIV8)
    {
        u32Freq = SystemCoreClock / 8UL;
    }
    else if((CLK->PCLKDIV & CLK_PCLKDIV_APB1DIV_Msk) == CLK_PCLKDIV_APB1DIV_DIV16)
    {
        u32Freq = SystemCoreClock / 16UL;
    }
    else
    {
        u32Freq = SystemCoreClock;
    }

    return u32Freq;
}


/**
  * @brief      Get HCLK frequency
  * @param      None
  * @return     HCLK frequency
  * @details    This function get HCLK frequency. The frequency unit is Hz.
  */
uint32_t CLK_GetHCLKFreq(void)
{
    SystemCoreClockUpdate();
    return SystemCoreClock;
}


/**
  * @brief      Get HCLK1 frequency
  * @param      None
  * @return     HCLK1 frequency
  * @details    This function get HCLK1 frequency. The frequency unit is Hz.
  */
uint32_t CLK_GetHCLK1Freq(void)
{
    uint32_t u32Freq, u32ClkSrc;
    uint32_t u32Hclk1Div;
    uint32_t au32Hclk1SrcTbl[5] = {__HIRC, __MIRC, __LXT, __LIRC, __HIRC48 };

    if (CLK->AHBCLK1 & CLK_AHBCLK1_HCLK1EN_Msk)
    {
        u32ClkSrc = (CLK->CLKSEL0 & CLK_CLKSEL0_HCLK1SEL_Msk) >> CLK_CLKSEL0_HCLK1SEL_Pos;
        u32Hclk1Div = (LPSCC->CLKDIV0 & LPSCC_CLKDIV0_HCLK1DIV_Msk) >> LPSCC_CLKDIV0_HCLK1DIV_Pos;
        u32Freq = au32Hclk1SrcTbl[u32ClkSrc] / (u32Hclk1Div + 1);
        if (u32ClkSrc == 4)     // For HIRC48M div 2
            u32Freq = u32Freq / 2;
    }
    else
    {
        u32Freq = 0;
    }

    return u32Freq;
}


/**
  * @brief      Get PCLK2 frequency
  * @param      None
  * @return     PCLK2 frequency
  * @details    This function get PCLK2 frequency. The frequency unit is Hz.
  */
uint32_t CLK_GetPCLK2Freq(void)
{
    uint32_t u32Freq;

    if((LPSCC->CLKDIV0 & LPSCC_CLKDIV0_APB2DIV_Msk) == LPSCC_CLKDIV0_PCLK2DIV1)
    {
        u32Freq = CLK_GetHCLK1Freq();
    }
    else if((LPSCC->CLKDIV0 & LPSCC_CLKDIV0_APB2DIV_Msk) == LPSCC_CLKDIV0_PCLK2DIV2)
    {
        u32Freq = CLK_GetHCLK1Freq() / 2UL;
    }
    else if((LPSCC->CLKDIV0 & LPSCC_CLKDIV0_APB2DIV_Msk) == LPSCC_CLKDIV0_PCLK2DIV4)
    {
        u32Freq = CLK_GetHCLK1Freq() / 4UL;
    }
    else if((LPSCC->CLKDIV0 & LPSCC_CLKDIV0_APB2DIV_Msk) == LPSCC_CLKDIV0_PCLK2DIV8)
    {
        u32Freq = CLK_GetHCLK1Freq() / 8UL;
    }
    else if((LPSCC->CLKDIV0 & LPSCC_CLKDIV0_APB2DIV_Msk) == LPSCC_CLKDIV0_PCLK2DIV16)
    {
        u32Freq = CLK_GetHCLK1Freq() / 16UL;
    }
    else
    {
        u32Freq = CLK_GetHCLK1Freq();
    }

    return u32Freq;
}

/**
  * @brief      Get CPU frequency
  * @param      None
  * @return     CPU frequency
  * @details    This function get CPU frequency. The frequency unit is Hz.
  */
uint32_t CLK_GetCPUFreq(void)
{
    SystemCoreClockUpdate();
    return SystemCoreClock;
}


/**
  * @brief      Set HCLK frequency
  * @param[in]  u32Hclk is HCLK frequency. The range of u32Hclk is running up to 72MHz.
  * @return     HCLK frequency
  * @details    This function is used to set HCLK frequency. The frequency unit is Hz. \n
  *             The register write-protection function should be disabled before using this function.
  */
uint32_t CLK_SetCoreClock(uint32_t u32Hclk)
{
    uint32_t u32HIRCSTB;

    /* Read HIRC clock source stable flag */
    u32HIRCSTB = CLK->STATUS & CLK_STATUS_HIRCSTB_Msk;

    /* The range of u32Hclk is running up to 72 MHz */
    if(u32Hclk > FREQ_72MHZ)
    {
        u32Hclk = FREQ_72MHZ;
    }

    /* Switch HCLK clock source to HIRC clock for safe */
    CLK->PWRCTL |= CLK_PWRCTL_HIRCEN_Msk;
    CLK_WaitClockReady(CLK_STATUS_HIRCSTB_Msk);
    CLK->CLKSEL0 |= CLK_CLKSEL0_HCLK0SEL_Msk;
    CLK->CLKDIV0 &= (~CLK_CLKDIV0_HCLK0DIV_Msk);

    /* Configure PLL setting if HXT clock is enabled */
    if((CLK->PWRCTL & CLK_PWRCTL_HXTEN_Msk) == CLK_PWRCTL_HXTEN_Msk)
    {
        u32Hclk = CLK_EnablePLL(CLK_PLLCTL_PLLSRC_HXT, u32Hclk);
    }
    /* Configure PLL setting if HXT clock is not enabled */
    else
    {
        u32Hclk = CLK_EnablePLL(CLK_PLLCTL_PLLSRC_HIRC, u32Hclk);

        /* Read HIRC clock source stable flag */
        u32HIRCSTB = CLK->STATUS & CLK_STATUS_HIRCSTB_Msk;
    }

    /* Select HCLK clock source to PLL,
       and update system core clock
    */
    CLK_SetHCLK(CLK_CLKSEL0_HCLKSEL_PLL, CLK_CLKDIV0_HCLK(1UL));

    /* Disable HIRC if HIRC is disabled before setting core clock */
    if(u32HIRCSTB == 0UL)
    {
        CLK->PWRCTL &= ~CLK_PWRCTL_HIRCEN_Msk;
    }

    /* Return actually HCLK frequency is PLL frequency divide 1 */
    return u32Hclk;
}

/**
  * @brief      This function set HCLK clock source and HCLK clock divider
  * @param[in]  u32ClkSrc is HCLK clock source. Including :
  *             - \ref CLK_CLKSEL0_HCLKSEL_HXT
  *             - \ref CLK_CLKSEL0_HCLKSEL_LXT
  *             - \ref CLK_CLKSEL0_HCLKSEL_PLL
  *             - \ref CLK_CLKSEL0_HCLKSEL_LIRC
  *             - \ref CLK_CLKSEL0_HCLKSEL_HIRC
  *             - \ref CLK_CLKSEL0_HCLKSEL_MIRC
  *             - \ref CLK_CLKSEL0_HCLKSEL_HIRC48M
  * @param[in]  u32ClkDiv is HCLK clock divider. Including :
  *             - \ref CLK_CLKDIV0_HCLK(x)
  * @return     None
  * @details    This function set HCLK clock source and HCLK clock divider. \n
  *             The register write-protection function should be disabled before using this function.
  */
void CLK_SetHCLK(uint32_t u32ClkSrc, uint32_t u32ClkDiv)
{
    uint32_t u32HIRCSTB;

    /* Read HIRC clock source stable flag */
    u32HIRCSTB = CLK->STATUS & CLK_STATUS_HIRCSTB_Msk;

    /* Switch RMC access cycle to maximum value for safe */
    RMC->CYCCTL = 4;

    /* Switch to HIRC for Safe. Avoid HCLK too high when applying new divider. */
    CLK->PWRCTL |= CLK_PWRCTL_HIRCEN_Msk;
    CLK_WaitClockReady(CLK_STATUS_HIRCSTB_Msk);
    CLK->CLKSEL0 = (CLK->CLKSEL0 & (~CLK_CLKSEL0_HCLK0SEL_Msk)) | CLK_CLKSEL0_HCLK0SEL_HIRC;

    /* Apply new Divider */
    CLK->CLKDIV0 = (CLK->CLKDIV0 & (~CLK_CLKDIV0_HCLK0DIV_Msk)) | u32ClkDiv;

    /* Switch HCLK to new HCLK source */
    CLK->CLKSEL0 = (CLK->CLKSEL0 & (~CLK_CLKSEL0_HCLK0SEL_Msk)) | u32ClkSrc;

    /* Update System Core Clock */
    SystemCoreClockUpdate();

    /* Switch RMC access cycle to suitable value base on HCLK */
    if (SystemCoreClock > 50000000)
        RMC->CYCCTL = 4;
    else if (SystemCoreClock > 25000000)
        RMC->CYCCTL = 3;
    else
        RMC->CYCCTL = 2;

    /* Disable HIRC if HIRC is disabled before switching HCLK source */
    if(u32HIRCSTB == 0UL)
    {
        CLK->PWRCTL &= ~CLK_PWRCTL_HIRCEN_Msk;
    }
}

/**
  * @brief      This function set selected module clock source and module clock divider
  * @param[in]  u32ModuleIdx is module index.
  * @param[in]  u32ClkSrc is module clock source.
  * @param[in]  u32ClkDiv is module clock divider.
  * @return     None
  * @details    Valid parameter combinations listed in following table:
  *
  * |Module index       |Clock source                           |Divider                    |
  * | :---------------- | :-----------------------------------  | :----------------------   |
  * |\ref CANFD0_MODULE |\ref CLK_CLKSEL0_CANFD0SEL_HCLK        |\ref CLK_CLKDIV5_CANFD0(x) |
  * |\ref CANFD0_MODULE |\ref CLK_CLKSEL0_CANFD0SEL_HIRC        |\ref CLK_CLKDIV5_CANFD0(x) |
  * |\ref CANFD0_MODULE |\ref CLK_CLKSEL0_CANFD0SEL_HIRC48M     |\ref CLK_CLKDIV5_CANFD0(x) |
  * |\ref CANFD0_MODULE |\ref CLK_CLKSEL0_CANFD0SEL_HXT         |\ref CLK_CLKDIV5_CANFD0(x) |
  * |\ref CANFD1_MODULE |\ref CLK_CLKSEL0_CANFD1SEL_HCLK        |\ref CLK_CLKDIV5_CANFD1(x) |
  * |\ref CANFD1_MODULE |\ref CLK_CLKSEL0_CANFD1SEL_HIRC        |\ref CLK_CLKDIV5_CANFD1(x) |
  * |\ref CANFD1_MODULE |\ref CLK_CLKSEL0_CANFD1SEL_HIRC48M     |\ref CLK_CLKDIV5_CANFD1(x) |
  * |\ref CANFD1_MODULE |\ref CLK_CLKSEL0_CANFD1SEL_HXT         |\ref CLK_CLKDIV5_CANFD1(x) |
  * |\ref CLKO_MODULE   |\ref CLK_CLKSEL1_CLKOSEL_HCLK          | x                         |
  * |\ref CLKO_MODULE   |\ref CLK_CLKSEL1_CLKOSEL_HIRC          | x                         |
  * |\ref CLKO_MODULE   |\ref CLK_CLKSEL1_CLKOSEL_HIRC48M       | x                         |
  * |\ref CLKO_MODULE   |\ref CLK_CLKSEL1_CLKOSEL_HXT           | x                         |
  * |\ref CLKO_MODULE   |\ref CLK_CLKSEL1_CLKOSEL_LIRC          | x                         |
  * |\ref CLKO_MODULE   |\ref CLK_CLKSEL1_CLKOSEL_LXT           | x                         |
  * |\ref CLKO_MODULE   |\ref CLK_CLKSEL1_CLKOSEL_MIRC          | x                         |
  * |\ref CLKO_MODULE   |\ref CLK_CLKSEL1_CLKOSEL_PLL           | x                         |
  * |\ref EADC0_MODULE  |\ref CLK_CLKSEL0_EADC0SEL_HCLK         |\ref CLK_CLKDIV0_EADC0(x)  |
  * |\ref EADC0_MODULE  |\ref CLK_CLKSEL0_EADC0SEL_HIRC         |\ref CLK_CLKDIV0_EADC0(x)  |
  * |\ref EADC0_MODULE  |\ref CLK_CLKSEL0_EADC0SEL_PLL          |\ref CLK_CLKDIV0_EADC0(x)  |
  * |\ref EPWM0_MODULE  |\ref CLK_CLKSEL2_EPWM0SEL_HCLK         | x                         |
  * |\ref EPWM0_MODULE  |\ref CLK_CLKSEL2_EPWM0SEL_PCLK0        | x                         |
  * |\ref EPWM1_MODULE  |\ref CLK_CLKSEL2_EPWM1SEL_HCLK         | x                         |
  * |\ref EPWM1_MODULE  |\ref CLK_CLKSEL2_EPWM1SEL_PCLK1        | x                         |
  * |\ref HCLK1_MODULE  |\ref CLK_CLKSEL0_HCLK1SEL_HIRC         |\ref LPSCC_CLKDIV0_HCLK1(x)|
  * |\ref HCLK1_MODULE  |\ref CLK_CLKSEL0_HCLK1SEL_HIRC48M_DIV2 |\ref LPSCC_CLKDIV0_HCLK1(x)|
  * |\ref HCLK1_MODULE  |\ref CLK_CLKSEL0_HCLK1SEL_LIRC         |\ref LPSCC_CLKDIV0_HCLK1(x)|
  * |\ref HCLK1_MODULE  |\ref CLK_CLKSEL0_HCLK1SEL_LXT          |\ref LPSCC_CLKDIV0_HCLK1(x)|
  * |\ref HCLK1_MODULE  |\ref CLK_CLKSEL0_HCLK1SEL_MIRC         |\ref LPSCC_CLKDIV0_HCLK1(x)|
  * |\ref LPADC0_MODULE |\ref LPSCC_CLKSEL0_LPADC0SEL_HIRC      |\ref LPSCC_CLKDIV0_LPADC0(x)|
  * |\ref LPADC0_MODULE |\ref LPSCC_CLKSEL0_LPADC0SEL_LXT       |\ref LPSCC_CLKDIV0_LPADC0(x)|
  * |\ref LPADC0_MODULE |\ref LPSCC_CLKSEL0_LPADC0SEL_MIRC      |\ref LPSCC_CLKDIV0_LPADC0(x)|
  * |\ref LPADC0_MODULE |\ref LPSCC_CLKSEL0_LPADC0SEL_PCLK2     |\ref LPSCC_CLKDIV0_LPADC0(x)|
  * |\ref LPSPI0_MODULE |\ref LPSCC_CLKSEL0_LPSPI0SEL_HIRC      | x                         |
  * |\ref LPSPI0_MODULE |\ref LPSCC_CLKSEL0_LPSPI0SEL_MIRC      | x                         |
  * |\ref LPTMR0_MODULE |\ref LPSCC_CLKSEL0_LPTMR0SEL_EXT       | x                         |
  * |\ref LPTMR0_MODULE |\ref LPSCC_CLKSEL0_LPTMR0SEL_HIRC      | x                         |
  * |\ref LPTMR0_MODULE |\ref LPSCC_CLKSEL0_LPTMR0SEL_LIRC      | x                         |
  * |\ref LPTMR0_MODULE |\ref LPSCC_CLKSEL0_LPTMR0SEL_LXT       | x                         |
  * |\ref LPTMR0_MODULE |\ref LPSCC_CLKSEL0_LPTMR0SEL_MIRC      | x                         |
  * |\ref LPTMR1_MODULE |\ref LPSCC_CLKSEL0_LPTMR1SEL_EXT       | x                         |
  * |\ref LPTMR1_MODULE |\ref LPSCC_CLKSEL0_LPTMR1SEL_HIRC      | x                         |
  * |\ref LPTMR1_MODULE |\ref LPSCC_CLKSEL0_LPTMR1SEL_LIRC      | x                         |
  * |\ref LPTMR1_MODULE |\ref LPSCC_CLKSEL0_LPTMR1SEL_LXT       | x                         |
  * |\ref LPTMR1_MODULE |\ref LPSCC_CLKSEL0_LPTMR1SEL_MIRC      | x                         |
  * |\ref LPUART0_MODULE|\ref LPSCC_CLKSEL0_LPUART0SEL_HIRC     |\ref LPSCC_CLKDIV0_LPUART0(x)|
  * |\ref LPUART0_MODULE|\ref LPSCC_CLKSEL0_LPUART0SEL_LXT      |\ref LPSCC_CLKDIV0_LPUART0(x)|
  * |\ref LPUART0_MODULE|\ref LPSCC_CLKSEL0_LPUART0SEL_MIRC     |\ref LPSCC_CLKDIV0_LPUART0(x)|
  * |\ref PWM0_MODULE   |\ref CLK_CLKSEL3_PWM0SEL_HCLK          | x                         |
  * |\ref PWM0_MODULE   |\ref CLK_CLKSEL3_PWM0SEL_PCLK0         | x                         |
  * |\ref PWM1_MODULE   |\ref CLK_CLKSEL3_PWM1SEL_HCLK          | x                         |
  * |\ref PWM1_MODULE   |\ref CLK_CLKSEL3_PWM1SEL_PCLK1         | x                         |
  * |\ref QSPI0_MODULE  |\ref CLK_CLKSEL2_QSPI0SEL_HIRC         | x                         |
  * |\ref QSPI0_MODULE  |\ref CLK_CLKSEL2_QSPI0SEL_HXT          | x                         |
  * |\ref QSPI0_MODULE  |\ref CLK_CLKSEL2_QSPI0SEL_PCLK0        | x                         |
  * |\ref QSPI0_MODULE  |\ref CLK_CLKSEL2_QSPI0SEL_PLL          | x                         |
  * |\ref SPI0_MODULE   |\ref CLK_CLKSEL2_SPI0SEL_HIRC          | x                         |
  * |\ref SPI0_MODULE   |\ref CLK_CLKSEL2_SPI0SEL_HIRC48M       | x                         |
  * |\ref SPI0_MODULE   |\ref CLK_CLKSEL2_SPI0SEL_HXT           | x                         |
  * |\ref SPI0_MODULE   |\ref CLK_CLKSEL2_SPI0SEL_PCLK1         | x                         |
  * |\ref SPI0_MODULE   |\ref CLK_CLKSEL2_SPI0SEL_PLL           | x                         |
  * |\ref SPI1_MODULE   |\ref CLK_CLKSEL2_SPI1SEL_HIRC          | x                         |
  * |\ref SPI1_MODULE   |\ref CLK_CLKSEL2_SPI1SEL_HIRC48M       | x                         |
  * |\ref SPI1_MODULE   |\ref CLK_CLKSEL2_SPI1SEL_HXT           | x                         |
  * |\ref SPI1_MODULE   |\ref CLK_CLKSEL2_SPI1SEL_PCLK0         | x                         |
  * |\ref SPI1_MODULE   |\ref CLK_CLKSEL2_SPI1SEL_PLL           | x                         |
  * |\ref SPI2_MODULE   |\ref CLK_CLKSEL3_SPI2SEL_HIRC          | x                         |
  * |\ref SPI2_MODULE   |\ref CLK_CLKSEL3_SPI2SEL_HIRC48M       | x                         |
  * |\ref SPI2_MODULE   |\ref CLK_CLKSEL3_SPI2SEL_HXT           | x                         |
  * |\ref SPI2_MODULE   |\ref CLK_CLKSEL3_SPI2SEL_PCLK1         | x                         |
  * |\ref SPI2_MODULE   |\ref CLK_CLKSEL3_SPI2SEL_PLL           | x                         |
  * |\ref SPI3_MODULE   |\ref CLK_CLKSEL3_SPI3SEL_HIRC          | x                         |
  * |\ref SPI3_MODULE   |\ref CLK_CLKSEL3_SPI3SEL_HIRC48M       | x                         |
  * |\ref SPI3_MODULE   |\ref CLK_CLKSEL3_SPI3SEL_HXT           | x                         |
  * |\ref SPI3_MODULE   |\ref CLK_CLKSEL3_SPI3SEL_PCLK0         | x                         |
  * |\ref SPI3_MODULE   |\ref CLK_CLKSEL3_SPI3SEL_PLL           | x                         |
  * |\ref ST_MODULE     |\ref CLK_CLKSEL0_STCLKSEL_HCLK         | x                         |
  * |\ref ST_MODULE     |\ref CLK_CLKSEL0_STCLKSEL_HCLK_DIV2    | x                         |
  * |\ref ST_MODULE     |\ref CLK_CLKSEL0_STCLKSEL_HIRC_DIV2    | x                         |
  * |\ref ST_MODULE     |\ref CLK_CLKSEL0_STCLKSEL_HXT          | x                         |
  * |\ref ST_MODULE     |\ref CLK_CLKSEL0_STCLKSEL_HXT_DIV2     | x                         |
  * |\ref ST_MODULE     |\ref CLK_CLKSEL0_STCLKSEL_LXT          | x                         |
  * |\ref TK_MODULE     |\ref CLK_CLKSEL2_TKSEL_HIRC            | x                         |
  * |\ref TK_MODULE     |\ref CLK_CLKSEL2_TKSEL_MIRC            | x                         |
  * |\ref TMR0_MODULE   |\ref CLK_CLKSEL1_TMR0SEL_EXT           | x                         |
  * |\ref TMR0_MODULE   |\ref CLK_CLKSEL1_TMR0SEL_HIRC          | x                         |
  * |\ref TMR0_MODULE   |\ref CLK_CLKSEL1_TMR0SEL_HXT           | x                         |
  * |\ref TMR0_MODULE   |\ref CLK_CLKSEL1_TMR0SEL_LIRC          | x                         |
  * |\ref TMR0_MODULE   |\ref CLK_CLKSEL1_TMR0SEL_LXT           | x                         |
  * |\ref TMR0_MODULE   |\ref CLK_CLKSEL1_TMR0SEL_PCLK0         | x                         |
  * |\ref TMR1_MODULE   |\ref CLK_CLKSEL1_TMR1SEL_EXT           | x                         |
  * |\ref TMR1_MODULE   |\ref CLK_CLKSEL1_TMR1SEL_HIRC          | x                         |
  * |\ref TMR1_MODULE   |\ref CLK_CLKSEL1_TMR1SEL_HXT           | x                         |
  * |\ref TMR1_MODULE   |\ref CLK_CLKSEL1_TMR1SEL_LIRC          | x                         |
  * |\ref TMR1_MODULE   |\ref CLK_CLKSEL1_TMR1SEL_LXT           | x                         |
  * |\ref TMR1_MODULE   |\ref CLK_CLKSEL1_TMR1SEL_PCLK0         | x                         |
  * |\ref TMR2_MODULE   |\ref CLK_CLKSEL1_TMR2SEL_EXT           | x                         |
  * |\ref TMR2_MODULE   |\ref CLK_CLKSEL1_TMR2SEL_HIRC          | x                         |
  * |\ref TMR2_MODULE   |\ref CLK_CLKSEL1_TMR2SEL_HXT           | x                         |
  * |\ref TMR2_MODULE   |\ref CLK_CLKSEL1_TMR2SEL_LIRC          | x                         |
  * |\ref TMR2_MODULE   |\ref CLK_CLKSEL1_TMR2SEL_LXT           | x                         |
  * |\ref TMR2_MODULE   |\ref CLK_CLKSEL1_TMR2SEL_PCLK1         | x                         |
  * |\ref TMR3_MODULE   |\ref CLK_CLKSEL1_TMR3SEL_EXT           | x                         |
  * |\ref TMR3_MODULE   |\ref CLK_CLKSEL1_TMR3SEL_HIRC          | x                         |
  * |\ref TMR3_MODULE   |\ref CLK_CLKSEL1_TMR3SEL_HXT           | x                         |
  * |\ref TMR3_MODULE   |\ref CLK_CLKSEL1_TMR3SEL_LIRC          | x                         |
  * |\ref TMR3_MODULE   |\ref CLK_CLKSEL1_TMR3SEL_LXT           | x                         |
  * |\ref TMR3_MODULE   |\ref CLK_CLKSEL1_TMR3SEL_PCLK1         | x                         |
  * |\ref TTMR0_MODULE  |\ref LPSCC_CLKSEL0_TTMR0SEL_HIRC       | x                         |
  * |\ref TTMR0_MODULE  |\ref LPSCC_CLKSEL0_TTMR0SEL_LIRC       | x                         |
  * |\ref TTMR0_MODULE  |\ref LPSCC_CLKSEL0_TTMR0SEL_LXT        | x                         |
  * |\ref TTMR0_MODULE  |\ref LPSCC_CLKSEL0_TTMR0SEL_MIRC       | x                         |
  * |\ref TTMR1_MODULE  |\ref LPSCC_CLKSEL0_TTMR1SEL_HIRC       | x                         |
  * |\ref TTMR1_MODULE  |\ref LPSCC_CLKSEL0_TTMR1SEL_LIRC       | x                         |
  * |\ref TTMR1_MODULE  |\ref LPSCC_CLKSEL0_TTMR1SEL_LXT        | x                         |
  * |\ref TTMR1_MODULE  |\ref LPSCC_CLKSEL0_TTMR1SEL_MIRC       | x                         |
  * |\ref UART0_MODULE  |\ref CLK_CLKSEL4_UART0SEL_HIRC         |\ref CLK_CLKDIV0_UART0(x)  |
  * |\ref UART0_MODULE  |\ref CLK_CLKSEL4_UART0SEL_HIRC48M      |\ref CLK_CLKDIV0_UART0(x)  |
  * |\ref UART0_MODULE  |\ref CLK_CLKSEL4_UART0SEL_HXT          |\ref CLK_CLKDIV0_UART0(x)  |
  * |\ref UART0_MODULE  |\ref CLK_CLKSEL4_UART0SEL_LXT          |\ref CLK_CLKDIV0_UART0(x)  |
  * |\ref UART0_MODULE  |\ref CLK_CLKSEL4_UART0SEL_MIRC         |\ref CLK_CLKDIV0_UART0(x)  |
  * |\ref UART0_MODULE  |\ref CLK_CLKSEL4_UART0SEL_PLL          |\ref CLK_CLKDIV0_UART0(x)  |
  * |\ref UART1_MODULE  |\ref CLK_CLKSEL4_UART1SEL_HIRC         |\ref CLK_CLKDIV0_UART1(x)  |
  * |\ref UART1_MODULE  |\ref CLK_CLKSEL4_UART1SEL_HIRC48M      |\ref CLK_CLKDIV0_UART1(x)  |
  * |\ref UART1_MODULE  |\ref CLK_CLKSEL4_UART1SEL_HXT          |\ref CLK_CLKDIV0_UART1(x)  |
  * |\ref UART1_MODULE  |\ref CLK_CLKSEL4_UART1SEL_LXT          |\ref CLK_CLKDIV0_UART1(x)  |
  * |\ref UART1_MODULE  |\ref CLK_CLKSEL4_UART1SEL_MIRC         |\ref CLK_CLKDIV0_UART1(x)  |
  * |\ref UART1_MODULE  |\ref CLK_CLKSEL4_UART1SEL_PLL          |\ref CLK_CLKDIV0_UART1(x)  |
  * |\ref UART2_MODULE  |\ref CLK_CLKSEL4_UART2SEL_HIRC         |\ref CLK_CLKDIV4_UART2(x)  |
  * |\ref UART2_MODULE  |\ref CLK_CLKSEL4_UART2SEL_HIRC48M      |\ref CLK_CLKDIV4_UART2(x)  |
  * |\ref UART2_MODULE  |\ref CLK_CLKSEL4_UART2SEL_HXT          |\ref CLK_CLKDIV4_UART2(x)  |
  * |\ref UART2_MODULE  |\ref CLK_CLKSEL4_UART2SEL_LXT          |\ref CLK_CLKDIV4_UART2(x)  |
  * |\ref UART2_MODULE  |\ref CLK_CLKSEL4_UART2SEL_MIRC         |\ref CLK_CLKDIV4_UART2(x)  |
  * |\ref UART2_MODULE  |\ref CLK_CLKSEL4_UART2SEL_PLL          |\ref CLK_CLKDIV4_UART2(x)  |
  * |\ref UART3_MODULE  |\ref CLK_CLKSEL4_UART3SEL_HIRC         |\ref CLK_CLKDIV4_UART3(x)  |
  * |\ref UART3_MODULE  |\ref CLK_CLKSEL4_UART3SEL_HIRC48M      |\ref CLK_CLKDIV4_UART3(x)  |
  * |\ref UART3_MODULE  |\ref CLK_CLKSEL4_UART3SEL_HXT          |\ref CLK_CLKDIV4_UART3(x)  |
  * |\ref UART3_MODULE  |\ref CLK_CLKSEL4_UART3SEL_LXT          |\ref CLK_CLKDIV4_UART3(x)  |
  * |\ref UART3_MODULE  |\ref CLK_CLKSEL4_UART3SEL_MIRC         |\ref CLK_CLKDIV4_UART3(x)  |
  * |\ref UART3_MODULE  |\ref CLK_CLKSEL4_UART3SEL_PLL          |\ref CLK_CLKDIV4_UART3(x)  |
  * |\ref UART4_MODULE  |\ref CLK_CLKSEL4_UART4SEL_HIRC         |\ref CLK_CLKDIV4_UART4(x)  |
  * |\ref UART4_MODULE  |\ref CLK_CLKSEL4_UART4SEL_HIRC48M      |\ref CLK_CLKDIV4_UART4(x)  |
  * |\ref UART4_MODULE  |\ref CLK_CLKSEL4_UART4SEL_HXT          |\ref CLK_CLKDIV4_UART4(x)  |
  * |\ref UART4_MODULE  |\ref CLK_CLKSEL4_UART4SEL_LXT          |\ref CLK_CLKDIV4_UART4(x)  |
  * |\ref UART4_MODULE  |\ref CLK_CLKSEL4_UART4SEL_MIRC         |\ref CLK_CLKDIV4_UART4(x)  |
  * |\ref UART4_MODULE  |\ref CLK_CLKSEL4_UART4SEL_PLL          |\ref CLK_CLKDIV4_UART4(x)  |
  * |\ref UART5_MODULE  |\ref CLK_CLKSEL4_UART5SEL_HIRC         |\ref CLK_CLKDIV4_UART5(x)  |
  * |\ref UART5_MODULE  |\ref CLK_CLKSEL4_UART5SEL_HIRC48M      |\ref CLK_CLKDIV4_UART5(x)  |
  * |\ref UART5_MODULE  |\ref CLK_CLKSEL4_UART5SEL_HXT          |\ref CLK_CLKDIV4_UART5(x)  |
  * |\ref UART5_MODULE  |\ref CLK_CLKSEL4_UART5SEL_LXT          |\ref CLK_CLKDIV4_UART5(x)  |
  * |\ref UART5_MODULE  |\ref CLK_CLKSEL4_UART5SEL_MIRC         |\ref CLK_CLKDIV4_UART5(x)  |
  * |\ref UART5_MODULE  |\ref CLK_CLKSEL4_UART5SEL_PLL          |\ref CLK_CLKDIV4_UART5(x)  |
  * |\ref UART6_MODULE  |\ref CLK_CLKSEL4_UART6SEL_HIRC         |\ref CLK_CLKDIV4_UART6(x)  |
  * |\ref UART6_MODULE  |\ref CLK_CLKSEL4_UART6SEL_HIRC48M      |\ref CLK_CLKDIV4_UART6(x)  |
  * |\ref UART6_MODULE  |\ref CLK_CLKSEL4_UART6SEL_HXT          |\ref CLK_CLKDIV4_UART6(x)  |
  * |\ref UART6_MODULE  |\ref CLK_CLKSEL4_UART6SEL_LXT          |\ref CLK_CLKDIV4_UART6(x)  |
  * |\ref UART6_MODULE  |\ref CLK_CLKSEL4_UART6SEL_MIRC         |\ref CLK_CLKDIV4_UART6(x)  |
  * |\ref UART6_MODULE  |\ref CLK_CLKSEL4_UART6SEL_PLL          |\ref CLK_CLKDIV4_UART6(x)  |
  * |\ref UART7_MODULE  |\ref CLK_CLKSEL4_UART7SEL_HIRC         |\ref CLK_CLKDIV4_UART7(x)  |
  * |\ref UART7_MODULE  |\ref CLK_CLKSEL4_UART7SEL_HIRC48M      |\ref CLK_CLKDIV4_UART7(x)  |
  * |\ref UART7_MODULE  |\ref CLK_CLKSEL4_UART7SEL_HXT          |\ref CLK_CLKDIV4_UART7(x)  |
  * |\ref UART7_MODULE  |\ref CLK_CLKSEL4_UART7SEL_LXT          |\ref CLK_CLKDIV4_UART7(x)  |
  * |\ref UART7_MODULE  |\ref CLK_CLKSEL4_UART7SEL_MIRC         |\ref CLK_CLKDIV4_UART7(x)  |
  * |\ref UART7_MODULE  |\ref CLK_CLKSEL4_UART7SEL_PLL          |\ref CLK_CLKDIV4_UART7(x)  |
  * |\ref USBD_MODULE   |\ref CLK_CLKSEL0_USBSEL_HIRC48M        |\ref CLK_CLKDIV0_USB(x)    |
  * |\ref USBD_MODULE   |\ref CLK_CLKSEL0_USBSEL_PLL            |\ref CLK_CLKDIV0_USB(x)    |
  * |\ref USBH_MODULE   |\ref CLK_CLKSEL0_USBSEL_HIRC48M        |\ref CLK_CLKDIV0_USB(x)    |
  * |\ref USBH_MODULE   |\ref CLK_CLKSEL0_USBSEL_PLL            |\ref CLK_CLKDIV0_USB(x)    |
  * |\ref WDT_MODULE    |\ref LPSCC_CLKSEL0_WDTSEL_HCLK1_DIV2048| x                         |
  * |\ref WDT_MODULE    |\ref LPSCC_CLKSEL0_WDTSEL_LIRC         | x                         |
  * |\ref WDT_MODULE    |\ref LPSCC_CLKSEL0_WDTSEL_LXT          | x                         |
  * |\ref WWDT_MODULE   |\ref CLK_CLKSEL1_WWDTSEL_HCLK_DIV2048  | x                         |
  * |\ref WWDT_MODULE   |\ref CLK_CLKSEL1_WWDTSEL_LIRC          | x                         |
  *
  */
void CLK_SetModuleClock(uint32_t u32ModuleIdx, uint32_t u32ClkSrc, uint32_t u32ClkDiv)
{
    uint32_t u32sel = 0, u32div = 0;
    uint32_t u32SelTbl[6] = {0x0, 0x04, 0x08, 0x0C, 0x38, 0x0}; /* CLKSEL offset on MODULE index, 0x0:CLKSEL0, 0x1:CLKSEL1, 0x2:CLKSEL2, 0x3:CLKSEL3, 0x4:CLKSEL4, 0x5:LPSCC_CLKSEL0 */
    uint32_t u32DivTbl[4] = {0x0, 0x10, 0x1C, 0x0};             /* CLKDIV offset on MODULE index, 0x0:CLKDIV0, 0x1:CLKDIV4, 0x2:CLKDIV5, 0x3:LPSCC_CLKDIV0 */
    uint32_t u32mask;

    if(MODULE_CLKDIV_Msk(u32ModuleIdx) != MODULE_NoMsk)
    {
        /* Get clock divider control register address */
        if (MODULE_CLKDIV(u32ModuleIdx) == 3)
        {
            u32div = (uint32_t)&LPSCC->CLKDIV0;
        }
        else
        {
            u32div = (uint32_t)&CLK->CLKDIV0 + (u32DivTbl[MODULE_CLKDIV(u32ModuleIdx)]);
        }

        /* Convert mask bit number to mask */
        switch(MODULE_CLKDIV_Msk(u32ModuleIdx))
        {
        case 1:
            u32mask = 0x1;
            break;
        case 2:
            u32mask = 0x3;
            break;
        case 3:
            u32mask = 0x7;
            break;
        case 4:
            u32mask = 0xF;
            break;
        case 8:
            u32mask = 0xFF;
            break;
        default:
            u32mask = 0;
            break;
        }

        /* Apply new divider */
        M32(u32div) = (M32(u32div) & (~(u32mask << MODULE_CLKDIV_Pos(u32ModuleIdx)))) | u32ClkDiv;
    }

    if(MODULE_CLKSEL_Msk(u32ModuleIdx) != MODULE_NoMsk)
    {
        /* Get clock select control register address */
        if (MODULE_CLKSEL(u32ModuleIdx) == 5)
        {
            u32sel = (uint32_t)&LPSCC->CLKSEL0;
        }
        else
        {
            u32sel = (uint32_t)&CLK->CLKSEL0 + (u32SelTbl[MODULE_CLKSEL(u32ModuleIdx)]);
        }

        /* Convert mask bit number to mask */
        switch(MODULE_CLKSEL_Msk(u32ModuleIdx))
        {
        case 1:
            u32mask = 0x1;
            break;
        case 2:
            u32mask = 0x3;
            break;
        case 3:
            u32mask = 0x7;
            break;
        case 4:
            u32mask = 0xF;
            break;
        case 8:
            u32mask = 0xFF;
            break;
        default:
            u32mask = 0;
            break;
        }

        /* Set new clock selection setting */
        M32(u32sel) = (M32(u32sel) & (~(u32mask << MODULE_CLKSEL_Pos(u32ModuleIdx)))) | u32ClkSrc;
    }
}

/**
  * @brief      Set SysTick clock source
  * @param[in]  u32ClkSrc is module clock source. Including:
  *             - \ref CLK_CLKSEL0_STCLKSEL_HXT
  *             - \ref CLK_CLKSEL0_STCLKSEL_LXT
  *             - \ref CLK_CLKSEL0_STCLKSEL_HXT_DIV2
  *             - \ref CLK_CLKSEL0_STCLKSEL_HCLK_DIV2
  *             - \ref CLK_CLKSEL0_STCLKSEL_HIRC_DIV2
  *             - \ref CLK_CLKSEL0_STCLKSEL_HCLK
  * @return     None
  * @details    This function set SysTick clock source. \n
  *             The register write-protection function should be disabled before using this function.
  */
void CLK_SetSysTickClockSrc(uint32_t u32ClkSrc)
{
    CLK->CLKSEL0 = (CLK->CLKSEL0 & ~CLK_CLKSEL0_STCLKSEL_Msk) | u32ClkSrc;
}

/**
  * @brief      Enable clock source
  * @param[in]  u32ClkMask is clock source mask. Including :
  *             - \ref CLK_PWRCTL_HXTEN_Msk
  *             - \ref CLK_PWRCTL_LXTEN_Msk
  *             - \ref CLK_PWRCTL_HIRCEN_Msk
  *             - \ref CLK_PWRCTL_LIRCEN_Msk
  *             - \ref CLK_PWRCTL_HIRC48MEN_Msk
  *             - \ref CLK_PWRCTL_MIRCEN_Msk
  * @return     None
  * @details    This function enable clock source. \n
  *             The register write-protection function should be disabled before using this function.
  */
void CLK_EnableXtalRC(uint32_t u32ClkMask)
{
    CLK->PWRCTL |= u32ClkMask;
}

/**
  * @brief      Disable clock source
  * @param[in]  u32ClkMask is clock source mask. Including :
  *             - \ref CLK_PWRCTL_HXTEN_Msk
  *             - \ref CLK_PWRCTL_LXTEN_Msk
  *             - \ref CLK_PWRCTL_HIRCEN_Msk
  *             - \ref CLK_PWRCTL_LIRCEN_Msk
  *             - \ref CLK_PWRCTL_HIRC48MEN_Msk
  *             - \ref CLK_PWRCTL_MIRCEN_Msk
  * @return     None
  * @details    This function disable clock source. \n
  *             The register write-protection function should be disabled before using this function.
  */
void CLK_DisableXtalRC(uint32_t u32ClkMask)
{
    CLK->PWRCTL &= ~u32ClkMask;
}

/**
  * @brief      Enable module clock
  * @param[in]  u32ModuleIdx is module index. Including :
  *             - \ref ACMP01_MODULE
  *             - \ref ACMP2_MODULE
  *             - \ref CANFD0_MODULE
  *             - \ref CANFD1_MODULE
  *             - \ref CANRAM0_MODULE
  *             - \ref CANRAM1_MODULE
  *             - \ref CLKO_MODULE
  *             - \ref CRC_MODULE
  *             - \ref CRPT_MODULE
  *             - \ref DAC_MODULE
  *             - \ref EADC0_MODULE
  *             - \ref EBI_MODULE
  *             - \ref ECAP0_MODULE
  *             - \ref ECAP1_MODULE
  *             - \ref EPWM0_MODULE
  *             - \ref EPWM1_MODULE
  *             - \ref EQEI0_MODULE
  *             - \ref EQEI1_MODULE
  *             - \ref GPA_MODULE
  *             - \ref GPB_MODULE
  *             - \ref GPC_MODULE
  *             - \ref GPD_MODULE
  *             - \ref GPE_MODULE
  *             - \ref GPF_MODULE
  *             - \ref GPG_MODULE
  *             - \ref GPH_MODULE
  *             - \ref HCLK1_MODULE
  *             - \ref I2C0_MODULE
  *             - \ref I2C1_MODULE
  *             - \ref I2C2_MODULE
  *             - \ref I2C3_MODULE
  *             - \ref ISP_MODULE
  *             - \ref KS_MODULE
  *             - \ref LPADC0_MODULE
  *             - \ref LPGPIO_MODULE
  *             - \ref LPI2C0_MODULE
  *             - \ref LPI2C0_MODULE
  *             - \ref LPPDMA0_MODULE
  *             - \ref LPSPI0_MODULE
  *             - \ref LPSRAM_MODULE
  *             - \ref LPTMR0_MODULE
  *             - \ref LPTMR1_MODULE
  *             - \ref LPUART0_MODULE
  *             - \ref OPA_MODULE
  *             - \ref OTG_MODULE
  *             - \ref PDMA0_MODULE
  *             - \ref PWM0_MODULE
  *             - \ref PWM1_MODULE
  *             - \ref QSPI0_MODULE
  *             - \ref RTC_MODULE
  *             - \ref SPI0_MODULE
  *             - \ref SPI1_MODULE
  *             - \ref SPI2_MODULE
  *             - \ref SPI3_MODULE
  *             - \ref ST_MODULE
  *             - \ref TK_MODULE
  *             - \ref TMR0_MODULE
  *             - \ref TMR1_MODULE
  *             - \ref TMR2_MODULE
  *             - \ref TMR3_MODULE
  *             - \ref TRNG_MODULE
  *             - \ref TTMR0_MODULE
  *             - \ref TTMR1_MODULE
  *             - \ref UART0_MODULE
  *             - \ref UART1_MODULE
  *             - \ref UART2_MODULE
  *             - \ref UART3_MODULE
  *             - \ref UART4_MODULE
  *             - \ref UART5_MODULE
  *             - \ref UART6_MODULE
  *             - \ref UART7_MODULE
  *             - \ref USBD_MODULE
  *             - \ref USBH_MODULE
  *             - \ref USCI0_MODULE
  *             - \ref USCI1_MODULE
  *             - \ref UTCPD0_MODULE
  *             - \ref WDT_MODULE
  *             - \ref WWDT_MODULE
  * @return     None
  * @details    This function is used to enable module clock.
  */
void CLK_EnableModuleClock(uint32_t u32ModuleIdx)
{
    uint32_t u32ClkTbl[6] = {0x0, 0x4, 0x8, 0x34, 0x54, 00};    /* AHBCLK/APBCLK offset on MODULE index, 0x0:AHBCLK, 0x1:APBCLK0, 0x2:APBCLK1, 0x3:APBCLK2, 0x4:AHBCLK1, 0x5:LPSCC_CLKEN0 */

    if (MODULE_APBCLK(u32ModuleIdx) == 5)
    {
        *(volatile uint32_t *)((uint32_t)&LPSCC->CLKEN0)  |= 1 << MODULE_IP_EN_Pos(u32ModuleIdx);
    }
    else
    {
        *(volatile uint32_t *)((uint32_t)&CLK->AHBCLK0 + (u32ClkTbl[MODULE_APBCLK(u32ModuleIdx)]))  |= 1 << MODULE_IP_EN_Pos(u32ModuleIdx);
    }
}

/**
  * @brief      Disable module clock
  * @param[in]  u32ModuleIdx is module index. Including :
  *             - \ref ACMP01_MODULE
  *             - \ref ACMP2_MODULE
  *             - \ref CANFD0_MODULE
  *             - \ref CANFD1_MODULE
  *             - \ref CANRAM0_MODULE
  *             - \ref CANRAM1_MODULE
  *             - \ref CLKO_MODULE
  *             - \ref CRC_MODULE
  *             - \ref CRPT_MODULE
  *             - \ref DAC_MODULE
  *             - \ref EADC0_MODULE
  *             - \ref EBI_MODULE
  *             - \ref ECAP0_MODULE
  *             - \ref ECAP1_MODULE
  *             - \ref EPWM0_MODULE
  *             - \ref EPWM1_MODULE
  *             - \ref EQEI0_MODULE
  *             - \ref EQEI1_MODULE
  *             - \ref GPA_MODULE
  *             - \ref GPB_MODULE
  *             - \ref GPC_MODULE
  *             - \ref GPD_MODULE
  *             - \ref GPE_MODULE
  *             - \ref GPF_MODULE
  *             - \ref GPG_MODULE
  *             - \ref GPH_MODULE
  *             - \ref HCLK1_MODULE
  *             - \ref I2C0_MODULE
  *             - \ref I2C1_MODULE
  *             - \ref I2C2_MODULE
  *             - \ref I2C3_MODULE
  *             - \ref ISP_MODULE
  *             - \ref KS_MODULE
  *             - \ref LPADC0_MODULE
  *             - \ref LPGPIO_MODULE
  *             - \ref LPI2C0_MODULE
  *             - \ref LPI2C0_MODULE
  *             - \ref LPPDMA0_MODULE
  *             - \ref LPSPI0_MODULE
  *             - \ref LPSRAM_MODULE
  *             - \ref LPTMR0_MODULE
  *             - \ref LPTMR1_MODULE
  *             - \ref LPUART0_MODULE
  *             - \ref OPA_MODULE
  *             - \ref OTG_MODULE
  *             - \ref PDMA0_MODULE
  *             - \ref PWM0_MODULE
  *             - \ref PWM1_MODULE
  *             - \ref QSPI0_MODULE
  *             - \ref RTC_MODULE
  *             - \ref SPI0_MODULE
  *             - \ref SPI1_MODULE
  *             - \ref SPI2_MODULE
  *             - \ref SPI3_MODULE
  *             - \ref ST_MODULE
  *             - \ref TK_MODULE
  *             - \ref TMR0_MODULE
  *             - \ref TMR1_MODULE
  *             - \ref TMR2_MODULE
  *             - \ref TMR3_MODULE
  *             - \ref TRNG_MODULE
  *             - \ref TTMR0_MODULE
  *             - \ref TTMR1_MODULE
  *             - \ref UART0_MODULE
  *             - \ref UART1_MODULE
  *             - \ref UART2_MODULE
  *             - \ref UART3_MODULE
  *             - \ref UART4_MODULE
  *             - \ref UART5_MODULE
  *             - \ref UART6_MODULE
  *             - \ref UART7_MODULE
  *             - \ref USBD_MODULE
  *             - \ref USBH_MODULE
  *             - \ref USCI0_MODULE
  *             - \ref USCI1_MODULE
  *             - \ref UTCPD0_MODULE
  *             - \ref WDT_MODULE
  *             - \ref WWDT_MODULE
  * @return     None
  * @details    This function is used to disable module clock.
  */
void CLK_DisableModuleClock(uint32_t u32ModuleIdx)
{
    uint32_t u32ClkTbl[6] = {0x0, 0x4, 0x8, 0x34, 0x54, 00};    /* AHBCLK/APBCLK offset on MODULE index, 0x0:AHBCLK, 0x1:APBCLK0, 0x2:APBCLK1, 0x3:APBCLK2, 0x4:AHBCLK1, 0x5:LPSCC_CLKEN0 */

    if (MODULE_APBCLK(u32ModuleIdx) == 5)
    {
        *(volatile uint32_t *)((uint32_t)&LPSCC->CLKEN0)  &= ~(1 << MODULE_IP_EN_Pos(u32ModuleIdx));
    }
    else
    {
        *(volatile uint32_t *)((uint32_t)&CLK->AHBCLK0 + (u32ClkTbl[MODULE_APBCLK(u32ModuleIdx)]))  &= ~(1 << MODULE_IP_EN_Pos(u32ModuleIdx));
    }
}


/**
  * @brief      Set PLL frequency
  * @param[in]  u32PllClkSrc is PLL clock source. Including :
  *             - \ref CLK_PLLCTL_PLLSRC_HXT
  *             - \ref CLK_PLLCTL_PLLSRC_HIRC
  * @param[in]  u32PllFreq is PLL frequency.
  * @return     PLL frequency
  * @details    This function is used to configure PLLCTL register to set specified PLL frequency. \n
  *             The register write-protection function should be disabled before using this function.
  */
uint32_t CLK_EnablePLL(uint32_t u32PllClkSrc, uint32_t u32PllFreq)
{
    uint32_t u32PllSrcClk, u32NR, u32NF, u32NO, u32CLK_SRC, u32Outdiv;
    uint32_t u32Fref, u32Fvco, u32FoutOffset, u32Fout, u32MinFoutOffset, u32MinNF, u32MinNR;
    uint32_t u32PLL_UpperLimit;

    /* Disable PLL first to avoid unstable when setting PLL */
    CLK_DisablePLL();

    /* PLL source clock is from HXT */
    if(u32PllClkSrc == CLK_PLLCTL_PLLSRC_HXT)
    {
        /* Enable HXT clock */
        CLK->PWRCTL |= CLK_PWRCTL_HXTEN_Msk;

        /* Wait for HXT clock ready */
        CLK_WaitClockReady(CLK_STATUS_HXTSTB_Msk);

        /* Select PLL source clock from HXT */
        u32CLK_SRC = CLK_PLLCTL_PLLSRC_HXT;
        u32PllSrcClk = __HXT;

        /* u32NR start from 1 since NR = INDIV + 1 */
        u32NR = 1UL;
    }

    /* PLL source clock is from HIRC */
    else
    {
        /* Enable HIRC clock */
        CLK->PWRCTL |= CLK_PWRCTL_HIRCEN_Msk;

        /* Wait for HIRC clock ready */
        CLK_WaitClockReady(CLK_STATUS_HIRCSTB_Msk);

        /* Select PLL source clock from HIRC */
        u32CLK_SRC = CLK_PLLCTL_PLLSRC_HIRC;
        u32PllSrcClk = __HIRC;

        /* u32NR start from 1 since NR = INDIV + 1 */
        u32NR = 1UL;
    }

    /* u32PllFreq = FOUT = (FIN * 2 * (NF.x) / NR / NO) */

    /* Select "NO" according to request frequency */
    /* Constraint: PLL output frequency must <= 500MHz */
    /*             PLL output frequency must > 25MHz */
    u32PLL_UpperLimit = FREQ_500MHZ;
    if((u32PllFreq <= u32PLL_UpperLimit) && (u32PllFreq >= FREQ_25MHZ))
    {
        if (u32PllFreq <= FREQ_120MHZ)
        {
            /* NO = 4 only can support up to 120MHz to meet all constraints */
            u32NO = 4;
            u32Outdiv = 3;
        }
        else if (u32PllFreq <= FREQ_240MHZ)
        {
            /* NO = 2 only can support up to 240MHz to meet all constraints */
            u32NO = 2;
            u32Outdiv = 1;
        }
        else
        {
            /* NO = 1 only can support up to 500MHz to meet all constraints */
            u32NO = 1;
            u32Outdiv = 0;
        }
    }
    else
    {
        /* Wrong frequency request. Just return default setting. */
        goto lexit;
    }

    /* Find best solution for NR and NF */
    u32MinFoutOffset = (uint32_t) 0xFFFFFFFF;   /* initial u32MinFoutOffset to max value of uint32_t */
    u32MinNR = 0;
    u32MinNF = 0;
    for(; u32NR <= 32; u32NR++) /* max NR = 32 since NR = INDIV + 1 and INDIV = 0 ~ 31 */
    {
        u32Fref = u32PllSrcClk / u32NR;         /* FREF = FIN / NR */
        /* Constraint 2: 1MHz <= FREF <= 8MHz */
        if((u32Fref >= 1000000) && (u32Fref <= 8000000))
        {
            for(u32NF = 12; u32NF <= 255; u32NF++) /* NF = 12~255 and NF = FBDIV + 2 */
            {
                u32Fvco = u32Fref * 2 * u32NF;  /* FVCO = FIN * 2 * (NF.x) / NR */
                /* Constraint 3: 100MHz <= FVCO <= 500MHz */
                if((u32Fvco >= 100000000) && (u32Fvco < 500000000))
                {
                    u32Fout = u32Fvco / u32NO;
                    u32FoutOffset = (u32Fout > u32PllFreq) ? (u32Fout - u32PllFreq) : (u32PllFreq - u32Fout);
                    if(u32FoutOffset < u32MinFoutOffset)
                    {
                        /* Keep current FOUT and try to find better one */
                        u32MinFoutOffset = u32FoutOffset;
                        u32MinNR = u32NR;
                        u32MinNF = u32NF;

                        /* Break when get perfect results */
                        if(u32MinFoutOffset == 0)
                            break;
                    }
                }
            }
        }
    }

    /* Enable and apply new PLL setting. */
    CLK->PLLCTL2 = (u32Outdiv << CLK_PLLCTL2_OUTDIV_Pos) |
                   ((u32MinNR - 1) << CLK_PLLCTL2_INDIV_Pos) |
                   ((u32MinNF - 2) << CLK_PLLCTL2_FBDIV_Pos);
    CLK->PLLCTL = u32CLK_SRC;

    /* Wait for PLL clock stable */
    CLK_WaitClockReady(CLK_STATUS_PLLSTB_Msk);

    /* Return actual PLL output clock frequency */
    return (u32PllSrcClk / (u32NO * u32MinNR) * u32MinNF);

lexit:

    /* Apply default PLL setting and return */
    CLK->PLLCTL2 = CLK_PLLCTL_72MHz;
    if(u32PllClkSrc == CLK_PLLCTL_PLLSRC_HXT)
        CLK->PLLCTL = CLK_PLLCTL_PLLSRC_HXT;
    else
        CLK->PLLCTL = CLK_PLLCTL_PLLSRC_HIRC;

    /* Wait for PLL clock stable */
    CLK_WaitClockReady(CLK_STATUS_PLLSTB_Msk);

    return CLK_GetPLLClockFreq();
}

/**
  * @brief      Disable PLL
  * @param      None
  * @return     None
  * @details    This function set PLL in Power-down mode. \n
  *             The register write-protection function should be disabled before using this function.
  */
void CLK_DisablePLL(void)
{
    CLK->PLLCTL |= CLK_PLLCTL_PD_Msk;
}


/**
  * @brief      This function check selected clock source status
  * @param[in]  u32ClkMask is selected clock source. Including :
  *             - \ref CLK_STATUS_HXTSTB_Msk
  *             - \ref CLK_STATUS_LXTSTB_Msk
  *             - \ref CLK_STATUS_HIRCSTB_Msk
  *             - \ref CLK_STATUS_LIRCSTB_Msk
  *             - \ref CLK_STATUS_PLLSTB_Msk
  *             - \ref CLK_STATUS_MIRCSTB_Msk
  *             - \ref CLK_STATUS_HIRC48MSTB_Msk
  * @retval     0  clock is not stable
  * @retval     1  clock is stable
  * @details    To wait for clock ready by specified clock source stable flag or timeout (~300ms)
  * @note       This function sets g_CLK_i32ErrCode to CLK_TIMEOUT_ERR if clock source status is not stable
  */
uint32_t CLK_WaitClockReady(uint32_t u32ClkMask)
{
    int32_t i32TimeOutCnt = 2160000;
    uint32_t u32Ret = 1U;

    while((CLK->STATUS & u32ClkMask) != u32ClkMask)
    {
        if(i32TimeOutCnt-- <= 0)
        {
            u32Ret = 0U;
            break;
        }
    }

    if(i32TimeOutCnt == 0)
        g_CLK_i32ErrCode = CLK_TIMEOUT_ERR;

    return u32Ret;
}

/**
  * @brief      Enable System Tick counter
  * @param[in]  u32ClkSrc is System Tick clock source. Including:
  *             - \ref CLK_CLKSEL0_STCLKSEL_HXT
  *             - \ref CLK_CLKSEL0_STCLKSEL_LXT
  *             - \ref CLK_CLKSEL0_STCLKSEL_HXT_DIV2
  *             - \ref CLK_CLKSEL0_STCLKSEL_HCLK_DIV2
  *             - \ref CLK_CLKSEL0_STCLKSEL_HIRC_DIV2
  *             - \ref CLK_CLKSEL0_STCLKSEL_HCLK
  * @param[in]  u32Count is System Tick reload value. It could be 0~0xFFFFFF.
  * @return     None
  * @details    This function set System Tick clock source, reload value, enable System Tick counter and interrupt. \n
  *             The register write-protection function should be disabled before using this function.
  */
void CLK_EnableSysTick(uint32_t u32ClkSrc, uint32_t u32Count)
{
    /* Set System Tick counter disabled */
    SysTick->CTRL = 0UL;

    /* Set System Tick clock source */
    if( u32ClkSrc == CLK_CLKSEL0_STCLKSEL_HCLK )
    {
        /* Disable System Tick clock source from external reference clock */
        CLK->AHBCLK0 &= ~CLK_AHBCLK0_STCKEN_Msk;

        /* Select System Tick clock source from core clock */
        SysTick->CTRL |= SysTick_CTRL_CLKSOURCE_Msk;
    }
    else
    {
        /* Enable System Tick clock source from external reference clock */
        CLK->AHBCLK0 |= CLK_AHBCLK0_STCKEN_Msk;

        /* Select System Tick external reference clock source */
        CLK->CLKSEL0 = (CLK->CLKSEL0 & ~CLK_CLKSEL0_STCLKSEL_Msk) | u32ClkSrc;

        /* Select System Tick clock source from external reference clock */
        SysTick->CTRL &= ~SysTick_CTRL_CLKSOURCE_Msk;
    }

    /* Set System Tick reload value */
    SysTick->LOAD = u32Count;

    /* Clear System Tick current value and counter flag */
    SysTick->VAL = 0UL;

    /* Set System Tick interrupt enabled and counter enabled */
    SysTick->CTRL |= SysTick_CTRL_TICKINT_Msk | SysTick_CTRL_ENABLE_Msk;
}

/**
  * @brief      Disable System Tick counter
  * @param      None
  * @return     None
  * @details    This function disable System Tick counter.
  */
void CLK_DisableSysTick(void)
{
    /* Set System Tick counter disabled */
    SysTick->CTRL = 0UL;
}


/**
  * @brief      Power-down mode selected
  * @param[in]  u32PDMode is power down mode index. Including :
  *             - \ref CLK_PMUCTL_PDMSEL_NPD0
  *             - \ref CLK_PMUCTL_PDMSEL_NPD1
  *             - \ref CLK_PMUCTL_PDMSEL_NPD2
  *             - \ref CLK_PMUCTL_PDMSEL_NPD3
  *             - \ref CLK_PMUCTL_PDMSEL_NPD4
  *             - \ref CLK_PMUCTL_PDMSEL_NPD5
  *             - \ref CLK_PMUCTL_PDMSEL_SPD0
  *             - \ref CLK_PMUCTL_PDMSEL_SPD1
  *             - \ref CLK_PMUCTL_PDMSEL_SPD2
  *             - \ref CLK_PMUCTL_PDMSEL_DPD0
  *             - \ref CLK_PMUCTL_PDMSEL_DPD1
  * @return     None
  * @details    This function is used to set power-down mode.
  */

void CLK_SetPowerDownMode(uint32_t u32PDMode)
{
    CLK->PMUCTL = (CLK->PMUCTL & ~(CLK_PMUCTL_PDMSEL_Msk)) | u32PDMode;
}


/**
 * @brief       Set Wake-up pin trigger type at Deep Power down mode
 *
 * @param[in]   u32Pin  The pin of specified GPIO.
 *                      CLK_DPDWKPIN_0:GPC.0, CLK_DPDWKPIN_1:GPB.0, CLK_DPDWKPIN_2:GPB.2, CLK_DPDWKPIN_3:GPB.12, CLK_DPDWKPIN_4:GPF.6, CLK_DPDWKPIN_5:GPA.12
 *              - \ref CLK_DPDWKPIN_0
 *              - \ref CLK_DPDWKPIN_1
 *              - \ref CLK_DPDWKPIN_2
 *              - \ref CLK_DPDWKPIN_3
 *              - \ref CLK_DPDWKPIN_4
 *              - \ref CLK_DPDWKPIN_5
 * @param[in]   u32TriggerType
 *              - \ref CLK_DPDWKPIN_DISABLE
 *              - \ref CLK_DPDWKPIN_RISING
 *              - \ref CLK_DPDWKPIN_FALLING
 *              - \ref CLK_DPDWKPIN_BOTHEDGE
 * @return      None
 *
 * @details     This function is used to enable Wake-up pin trigger type.
 */
void CLK_EnableDPDWKPin(uint32_t u32Pin, uint32_t u32TriggerType)
{
    switch (u32Pin)
    {
    case CLK_DPDWKPIN_0:
        CLK->PMUWKCTL = (CLK->PMUWKCTL & ~CLK_PMUWKCTL_WKPINEN0_Msk) | (u32TriggerType << CLK_PMUWKCTL_WKPINEN0_Pos);
        break;
    case CLK_DPDWKPIN_1:
        CLK->PMUWKCTL = (CLK->PMUWKCTL & ~CLK_PMUWKCTL_WKPINEN1_Msk) | (u32TriggerType << CLK_PMUWKCTL_WKPINEN1_Pos);
        break;
    case CLK_DPDWKPIN_2:
        CLK->PMUWKCTL = (CLK->PMUWKCTL & ~CLK_PMUWKCTL_WKPINEN2_Msk) | (u32TriggerType << CLK_PMUWKCTL_WKPINEN2_Pos);
        break;
    case CLK_DPDWKPIN_3:
        CLK->PMUWKCTL = (CLK->PMUWKCTL & ~CLK_PMUWKCTL_WKPINEN3_Msk) | (u32TriggerType << CLK_PMUWKCTL_WKPINEN3_Pos);
        break;
    case CLK_DPDWKPIN_4:
        CLK->PMUWKCTL = (CLK->PMUWKCTL & ~CLK_PMUWKCTL_WKPINEN4_Msk) | (u32TriggerType << CLK_PMUWKCTL_WKPINEN4_Pos);
        break;
    case CLK_DPDWKPIN_5:
        CLK->PMUWKCTL = (CLK->PMUWKCTL & ~CLK_PMUWKCTL_WKPINEN5_Msk) | (u32TriggerType << CLK_PMUWKCTL_WKPINEN5_Pos);
        break;
    }
}

/**
 * @brief      Get power manager wake up source
 *
 * @param[in]   None
 * @return      None
 *
 * @details     This function get power manager wake up source.
 */

uint32_t CLK_GetPMUWKSrc(void)
{
    return (CLK->PMUSTS);
}

/**
 * @brief       Set specified GPIO as wake up source at Stand-by Power down mode
 *
 * @param[in]   u32Port GPIO port. It could be 0 ~ 3.
 * @param[in]   u32Pin  The pin of specified GPIO port. It could be 0 ~ 15.
 * @param[in]   u32TriggerType
 *              - \ref CLK_SPDWKPIN_RISING
 *              - \ref CLK_SPDWKPIN_FALLING
 * @param[in]   u32DebounceEn
 *              - \ref CLK_SPDWKPIN_DEBOUNCEEN
 *              - \ref CLK_SPDWKPIN_DEBOUNCEDIS
 * @return      None
 *
 * @details     This function is used to set specified GPIO as wake up source
 *              at Stand-by Power down mode.
 */
void CLK_EnableSPDWKPin(uint32_t u32Port, uint32_t u32Pin, uint32_t u32TriggerType, uint32_t u32DebounceEn)
{
    uint32_t u32tmpAddr = 0UL;
    uint32_t u32tmpVal = 0UL;

    /* GPx Stand-by Power-down Wake-up Pin Select */
    u32tmpAddr = (uint32_t)&CLK->PAPWCTL;
    u32tmpAddr += (0x4UL * u32Port);

    u32tmpVal = inpw((uint32_t *)u32tmpAddr);
    u32tmpVal = (u32tmpVal & ~(CLK_PAPWCTL_WKPSEL0_Msk | CLK_PAPWCTL_PRWKEN0_Msk | CLK_PAPWCTL_PFWKEN0_Msk | CLK_PAPWCTL_DBEN0_Msk | CLK_PAPWCTL_WKEN0_Msk)) |
                (u32Pin << CLK_PAPWCTL_WKPSEL0_Pos) | u32TriggerType | u32DebounceEn | CLK_SPDWKPIN_ENABLE;
    outpw((uint32_t *)u32tmpAddr, u32tmpVal);
}

/**
  * @brief      Get PLL clock frequency
  * @param      None
  * @return     PLL frequency
  * @details    This function get PLL frequency. The frequency unit is Hz.
  */
uint32_t CLK_GetPLLClockFreq(void)
{
    uint32_t u32PllFreq = 0UL, u32PllReg, u32Pll2Reg;
    uint32_t u32FIN, u32NF, u32NR, u32NO;
    uint8_t au8NoTbl[4] = {1U, 2U, 2U, 4U};

    u32PllReg = CLK->PLLCTL;
    u32Pll2Reg = CLK->PLLCTL2;

    if(u32PllReg & (CLK_PLLCTL_PD_Msk | CLK_PLLCTL_OE_Msk))
    {
        u32PllFreq = 0UL;           /* PLL is in power down mode or fix low */
    }
    else if((u32PllReg & CLK_PLLCTL_BP_Msk) == CLK_PLLCTL_BP_Msk)
    {
        if((u32PllReg & CLK_PLLCTL_PLLSRC_HIRC) == CLK_PLLCTL_PLLSRC_HIRC)
        {
            u32FIN = __HIRC;    /* PLL source clock from HIRC */
        }
        else
        {
            u32FIN = __HXT;     /* PLL source clock from HXT */
        }

        u32PllFreq = u32FIN;
    }
    else
    {
        if((u32PllReg & CLK_PLLCTL_PLLSRC_HIRC) == CLK_PLLCTL_PLLSRC_HIRC)
        {
            u32FIN = __HIRC;    /* PLL source clock from HIRC */
        }
        else
        {
            u32FIN = __HXT;     /* PLL source clock from HXT */
        }
        /* PLL is output enabled in normal work mode */
        u32NO = au8NoTbl[((u32Pll2Reg & CLK_PLLCTL2_OUTDIV_Msk) >> CLK_PLLCTL2_OUTDIV_Pos)];
        u32NF = ((u32Pll2Reg & CLK_PLLCTL2_FBDIV_Msk) >> CLK_PLLCTL2_FBDIV_Pos) + 2UL;
        u32NR = ((u32Pll2Reg & CLK_PLLCTL2_INDIV_Msk) >> CLK_PLLCTL2_INDIV_Pos) + 1UL;

        /* u32FIN is shifted right 2 bits first to avoid overflow. */
        /* It will be shifted left 2 bits back later. */
        u32PllFreq = (((u32FIN >> 2) * u32NF) / (u32NR * u32NO) << 2) * 2UL;
    }

    return u32PllFreq;
}

/**
  * @brief      Get selected module clock source
  * @param[in]  u32ModuleIdx is module index.
  *             - \ref CANFD0_MODULE
  *             - \ref CANFD1_MODULE
  *             - \ref CLKO_MODULE
  *             - \ref EADC0_MODULE
  *             - \ref EPWM0_MODULE
  *             - \ref EPWM1_MODULE
  *             - \ref HCLK1_MODULE
  *             - \ref LPADC0_MODULE
  *             - \ref LPSPI0_MODULE
  *             - \ref LPTMR0_MODULE
  *             - \ref LPTMR1_MODULE
  *             - \ref LPUART0_MODULE
  *             - \ref PWM0_MODULE
  *             - \ref PWM1_MODULE
  *             - \ref QSPI0_MODULE
  *             - \ref SPI0_MODULE
  *             - \ref SPI1_MODULE
  *             - \ref SPI2_MODULE
  *             - \ref SPI3_MODULE
  *             - \ref ST_MODULE
  *             - \ref TK_MODULE
  *             - \ref TMR0_MODULE
  *             - \ref TMR1_MODULE
  *             - \ref TMR2_MODULE
  *             - \ref TMR3_MODULE
  *             - \ref TTMR0_MODULE
  *             - \ref TTMR1_MODULE
  *             - \ref UART0_MODULE
  *             - \ref UART1_MODULE
  *             - \ref UART2_MODULE
  *             - \ref UART3_MODULE
  *             - \ref UART4_MODULE
  *             - \ref UART5_MODULE
  *             - \ref UART6_MODULE
  *             - \ref UART7_MODULE
  *             - \ref USBD_MODULE
  *             - \ref USBH_MODULE
  *             - \ref WDT_MODULE
  *             - \ref WWDT_MODULE
  * @return     Selected module clock source setting
  * @details    This function get selected module clock source.
  */
uint32_t CLK_GetModuleClockSource(uint32_t u32ModuleIdx)
{
    uint32_t u32sel = 0;
    uint32_t u32SelTbl[6] = {0x0, 0x04, 0x08, 0x0C, 0x38, 0x0}; /* CLKSEL offset on MODULE index, 0x0:CLKSEL0, 0x1:CLKSEL1, 0x2:CLKSEL2, 0x3:CLKSEL3, 0x4:CLKSEL4, 0x5:LPSCC_CLKSEL0 */
    uint32_t u32mask;

    /* Get clock source selection setting */
    if(MODULE_CLKSEL_Msk(u32ModuleIdx) != MODULE_NoMsk)
    {
        /* Get clock select control register address */
        if (MODULE_CLKSEL(u32ModuleIdx) == 5)
        {
            u32sel = (uint32_t)&LPSCC->CLKSEL0;
        }
        else
        {
            u32sel = (uint32_t)&CLK->CLKSEL0 + (u32SelTbl[MODULE_CLKSEL(u32ModuleIdx)]);
        }

        /* Convert mask bit number to mask */
        switch(MODULE_CLKSEL_Msk(u32ModuleIdx))
        {
        case 1:
            u32mask = 0x1;
            break;
        case 2:
            u32mask = 0x3;
            break;
        case 3:
            u32mask = 0x7;
            break;
        case 4:
            u32mask = 0xF;
            break;
        case 8:
            u32mask = 0xFF;
            break;
        default:
            u32mask = 0;
            break;
        }

        /* Get clock source selection setting */
        return ((M32(u32sel) & (u32mask << MODULE_CLKSEL_Pos(u32ModuleIdx))) >> MODULE_CLKSEL_Pos(u32ModuleIdx));
    }
    else
        return 0;
}

/**
  * @brief      Get selected module clock divider number
  * @param[in]  u32ModuleIdx is module index.
  *             - \ref CANFD0_MODULE
  *             - \ref CANFD1_MODULE
  *             - \ref EADC0_MODULE
  *             - \ref HCLK1_MODULE
  *             - \ref LPADC0_MODULE
  *             - \ref LPUART0_MODULE
  *             - \ref UART0_MODULE
  *             - \ref UART1_MODULE
  *             - \ref UART2_MODULE
  *             - \ref UART3_MODULE
  *             - \ref UART4_MODULE
  *             - \ref UART5_MODULE
  *             - \ref UART6_MODULE
  *             - \ref UART7_MODULE
  *             - \ref USBD_MODULE
  *             - \ref USBH_MODULE
  * @return     Selected module clock divider number setting
  * @details    This function get selected module clock divider number.
  */
uint32_t CLK_GetModuleClockDivider(uint32_t u32ModuleIdx)
{
    uint32_t u32div = 0;
    uint32_t u32DivTbl[4] = {0x0, 0x10, 0x1C, 0x0};             /* CLKDIV offset on MODULE index, 0x0:CLKDIV0, 0x1:CLKDIV4, 0x2:CLKDIV5, 0x3:LPSCC_CLKDIV0 */
    uint32_t u32mask;

    if(MODULE_CLKDIV_Msk(u32ModuleIdx) != MODULE_NoMsk)
    {
        /* Get clock divider control register address */
        if (MODULE_CLKDIV(u32ModuleIdx) == 3)
        {
            u32div = (uint32_t)&LPSCC->CLKDIV0;
        }
        else
        {
            u32div = (uint32_t)&CLK->CLKDIV0 + (u32DivTbl[MODULE_CLKDIV(u32ModuleIdx)]);
        }

        /* Convert mask bit number to mask */
        switch(MODULE_CLKDIV_Msk(u32ModuleIdx))
        {
        case 1:
            u32mask = 0x1;
            break;
        case 2:
            u32mask = 0x3;
            break;
        case 3:
            u32mask = 0x7;
            break;
        case 4:
            u32mask = 0xF;
            break;
        case 8:
            u32mask = 0xFF;
            break;
        default:
            u32mask = 0;
            break;
        }

        /* Get clock divider number setting */
        return ((M32(u32div) & (u32mask << MODULE_CLKDIV_Pos(u32ModuleIdx))) >> MODULE_CLKDIV_Pos(u32ModuleIdx));
    }
    else
        return 0;
}

/**
  * @brief      Get internal multiple speed RC oscillator (MIRC) clock frequency
  * @param      None
  * @return     Internal multiple speed RC oscillator (MIRC) clock frequency
  * @details    This function get internal multiple speed RC oscillator (MIRC) clock frequency. The frequency unit is Hz.
  */
uint32_t CLK_GetMIRCFreq(void)
{
    uint32_t u32Freq = 0UL;

    if((CLK->PWRCTL & CLK_PWRCTL_MIRCEN_Msk) == CLK_PWRCTL_MIRCEN_Msk)
    {
        switch (CLK->PWRCTL & CLK_PWRCTL_MIRCFSEL_Msk)
        {
        case CLK_PWRCTL_MIRCFSEL_1M:
            u32Freq = FREQ_1MHZ;
            break;
        case CLK_PWRCTL_MIRCFSEL_2M:
            u32Freq = FREQ_2MHZ;
            break;
        case CLK_PWRCTL_MIRCFSEL_4M:
            u32Freq = FREQ_4MHZ;
            break;
        case CLK_PWRCTL_MIRCFSEL_8M:
            u32Freq = FREQ_8MHZ;
            break;
        default:
            u32Freq = __MIRC;
            break;
        }
    }
    else
    {
        u32Freq = 0UL;
    }

    return u32Freq;
}

/**
  * @brief      Disable MIRC
  * @param      None
  * @return     None
  * @details    This function disable MIRC clock. \n
  *             The register write-protection function should be disabled before using this function.
  */
void CLK_DisableMIRC(void)
{
    CLK->PWRCTL &= ~CLK_PWRCTL_MIRCEN_Msk;
}

/**
  * @brief      Set MIRC frequency
  * @param[in]  u32MircFreq is MIRC clock frequency. Including :
  *             - \ref CLK_PWRCTL_MIRCFSEL_1M
  *             - \ref CLK_PWRCTL_MIRCFSEL_2M
  *             - \ref CLK_PWRCTL_MIRCFSEL_4M
  *             - \ref CLK_PWRCTL_MIRCFSEL_8M
  * @return     MIRC frequency
  * @details    This function is used to configure PWRCTL register to set specified MIRC frequency. \n
  *             The register write-protection function should be disabled before using this function.
  */
uint32_t CLK_EnableMIRC(uint32_t u32MircFreq)
{
    /* Disable MIRC first to avoid unstable when setting MIRC */
    CLK_DisableMIRC();

    /* Enable and apply new MIRC setting. */
    CLK->PWRCTL = (CLK->PWRCTL & ~(CLK_PWRCTL_MIRCFSEL_Msk)) | (u32MircFreq | CLK_PWRCTL_MIRCEN_Msk);

    /* Wait for MIRC clock stable */
    CLK_WaitClockReady(CLK_STATUS_MIRCSTB_Msk);

    /* Return actual MIRC output clock frequency */
    return CLK_GetMIRCFreq();
}


/*@}*/ /* end of group CLK_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group CLK_Driver */

/*@}*/ /* end of group Standard_Driver */

/*** (C) COPYRIGHT 2016 Nuvoton Technology Corp. ***/
