/**************************************************************************//**
 * @file     clk.c
 * @version  V1.00
 * @brief    CLK driver source file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (c) 2025 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

#include "NuMicro.h"

/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup CLK_Driver CLK Driver
  @{
*/

/** @addtogroup CLK_EXPORTED_FUNCTIONS CLK Exported Functions
  @{
*/

/**
  * @brief      Get PLL clock frequency
  * @param      None
  * @return     PLL frequency
  * @details    This function gets the PLL frequency. The frequency unit is Hz.
  */
static uint32_t GetPLLClockFreq(void)
{
    uint32_t u32PllFreq = 0UL;
    uint32_t u32PllReg;
    const uint32_t au32NoTbl[4] = {1UL, 2UL, 2UL, 4UL};

    u32PllReg = CLK->PLLCTL;

    if (u32PllReg & (CLK_PLLCTL_PD_Msk | CLK_PLLCTL_OE_Msk))
    {
        u32PllFreq = 0UL;       /* PLL is in power down mode or fix low */
    }
    else                        /* PLL is in normal mode */
    {
        uint32_t u32FIN;

        /* PLL source clock */
        if (u32PllReg & CLK_PLLCTL_PLLSRC_Msk)
        {
            u32FIN = (__HIRC >> 2);  /* PLL source clock from HIRC/4 */
        }
        else
        {
            u32FIN = __HXT;     /* PLL source clock from HXT */
        }

        /* Calculate PLL frequency */
        if (u32PllReg & CLK_PLLCTL_BP_Msk)
        {
            u32PllFreq = u32FIN;  /* PLL is in bypass mode */
        }
        else
        {
            uint32_t u32NF;
            uint32_t u32NR;
            uint32_t u32NO;

            /* PLL is output enabled in normal work mode */
            u32NO = au32NoTbl[((u32PllReg & CLK_PLLCTL_OUTDIV_Msk) >> CLK_PLLCTL_OUTDIV_Pos)];
            u32NF = ((u32PllReg & CLK_PLLCTL_FBDIV_Msk) >> CLK_PLLCTL_FBDIV_Pos) + 2UL;
            u32NR = ((u32PllReg & CLK_PLLCTL_INDIV_Msk) >> CLK_PLLCTL_INDIV_Pos) + 1UL;

            /* u32FIN is shifted 2 bits to avoid overflow */
            u32PllFreq = (((u32FIN >> 2) * (u32NF << 1)) / (u32NR * u32NO) << 2);
        }
    }

    return u32PllFreq;
}

/**
  * @brief      Disable clock divider output function
  * @param      None
  * @return     None
  * @details    This function disable clock divider output function.
  */
void CLK_DisableCKO(void)
{
    /* Disable CKO clock source */
    CLK->APBCLK0 &= (~CLK_APBCLK0_CLKOCKEN_Msk);
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
    CLK->APBCLK0 |= CLK_APBCLK0_CLKOCKEN_Msk;

    /* Select CKO clock source */
    CLK->CLKSEL1 = (CLK->CLKSEL1 & (~CLK_CLKSEL1_CLKOSEL_Msk)) | (u32ClkSrc);
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
    volatile uint32_t u32SysTickTICKINT = 0;
    volatile uint32_t u32HIRCTCTL = 0;

    /* Set the processor uses deep sleep as its low power mode */
    SCB->SCR |= SCB_SCR_SLEEPDEEP_Msk;

    /* Set system Power-down enabled */
    CLK->PWRCTL |= (CLK_PWRCTL_PDEN_Msk);

    /* Store SysTick interrupt and HIRC auto trim setting */
    u32SysTickTICKINT = SysTick->CTRL & SysTick_CTRL_TICKINT_Msk;
    u32HIRCTCTL = SYS->HIRCTCTL;

    /* Disable SysTick interrupt and HIRC auto trim */
    SysTick->CTRL &= ~SysTick_CTRL_TICKINT_Msk;
    SYS->HIRCTCTL &= (~SYS_HIRCTCTL_FREQSEL_Msk);

    /* Chip enter Power-down mode after CPU run WFI instruction */
    __WFI();

    /* Restore SysTick interrupt and HIRC auto trim setting */
    if (u32SysTickTICKINT)
    {
        SysTick->CTRL |= SysTick_CTRL_TICKINT_Msk;
    }

    SYS->HIRCTCTL = u32HIRCTCTL;
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
  * @details    This function gets the external high frequency crystal frequency. The frequency unit is Hz.
  */
__NONSECURE_ENTRY_WEAK
uint32_t CLK_GetHXTFreq(void)
{
    uint32_t u32Freq;

    if (CLK->PWRCTL & CLK_PWRCTL_HXTEN_Msk)
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
  * @details    This function gets the external low frequency crystal frequency. The frequency unit is Hz.
  */
__NONSECURE_ENTRY_WEAK
uint32_t CLK_GetLXTFreq(void)
{
    uint32_t u32Freq;

    if (CLK->PWRCTL & CLK_PWRCTL_LXTEN_Msk)
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
  * @details    This function gets the PCLK0 frequency. The frequency unit is Hz.
  */
__NONSECURE_ENTRY_WEAK
uint32_t CLK_GetPCLK0Freq(void)
{
    uint32_t u32Freq;
    SystemCoreClockUpdate();

    if ((CLK->PCLKDIV & CLK_PCLKDIV_APB0DIV_Msk) == CLK_PCLKDIV_APB0DIV_DIV1)
    {
        u32Freq = SystemCoreClock;
    }
    else if ((CLK->PCLKDIV & CLK_PCLKDIV_APB0DIV_Msk) == CLK_PCLKDIV_APB0DIV_DIV2)
    {
        u32Freq = SystemCoreClock >> 1;
    }
    else if ((CLK->PCLKDIV & CLK_PCLKDIV_APB0DIV_Msk) == CLK_PCLKDIV_APB0DIV_DIV4)
    {
        u32Freq = SystemCoreClock >> 2;
    }
    else if ((CLK->PCLKDIV & CLK_PCLKDIV_APB0DIV_Msk) == CLK_PCLKDIV_APB0DIV_DIV8)
    {
        u32Freq = SystemCoreClock >> 3;
    }
    else if ((CLK->PCLKDIV & CLK_PCLKDIV_APB0DIV_Msk) == CLK_PCLKDIV_APB0DIV_DIV16)
    {
        u32Freq = SystemCoreClock >> 4;
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
  * @details    This function gets the PCLK1 frequency. The frequency unit is Hz.
  */
__NONSECURE_ENTRY_WEAK
uint32_t CLK_GetPCLK1Freq(void)
{
    uint32_t u32Freq;
    SystemCoreClockUpdate();

    if ((CLK->PCLKDIV & CLK_PCLKDIV_APB1DIV_Msk) == CLK_PCLKDIV_APB1DIV_DIV1)
    {
        u32Freq = SystemCoreClock;
    }
    else if ((CLK->PCLKDIV & CLK_PCLKDIV_APB1DIV_Msk) == CLK_PCLKDIV_APB1DIV_DIV2)
    {
        u32Freq = SystemCoreClock >> 1;
    }
    else if ((CLK->PCLKDIV & CLK_PCLKDIV_APB1DIV_Msk) == CLK_PCLKDIV_APB1DIV_DIV4)
    {
        u32Freq = SystemCoreClock >> 2;
    }
    else if ((CLK->PCLKDIV & CLK_PCLKDIV_APB1DIV_Msk) == CLK_PCLKDIV_APB1DIV_DIV8)
    {
        u32Freq = SystemCoreClock >> 3;
    }
    else if ((CLK->PCLKDIV & CLK_PCLKDIV_APB1DIV_Msk) == CLK_PCLKDIV_APB1DIV_DIV16)
    {
        u32Freq = SystemCoreClock >> 4;
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
  * @details    This function gets the HCLK frequency. The frequency unit is Hz.
  */
__NONSECURE_ENTRY_WEAK
uint32_t CLK_GetHCLKFreq(void)
{
    SystemCoreClockUpdate();
    return SystemCoreClock;
}

/**
  * @brief      Get CPU frequency
  * @param      None
  * @return     CPU frequency
  * @details    This function gets the CPU frequency. The frequency unit is Hz.
  */
__NONSECURE_ENTRY_WEAK
uint32_t CLK_GetCPUFreq(void)
{
    uint32_t u32Freq;
    uint32_t u32HclkSrc;
    uint32_t u32HclkDiv;
    const uint32_t au32ClkTbl[] = {__HXT, __LXT, 0UL, __LIRC, 0UL, 0UL, 0UL, __HIRC};

    /* HCLK clock source */
    u32HclkSrc = CLK->CLKSEL0 & CLK_CLKSEL0_HCLKSEL_Msk;

    if (u32HclkSrc == CLK_CLKSEL0_HCLKSEL_PLL)
    {
        u32Freq = GetPLLClockFreq();    /* Use PLL clock */
    }
    else
    {
        u32Freq = au32ClkTbl[u32HclkSrc]; /* Use the clock sources directly */
    }

    /* HCLK clock source divider */
    u32HclkDiv = (CLK->CLKDIV0 & CLK_CLKDIV0_HCLKDIV_Msk) + 1UL;

    /* Update System Core Clock */
    SystemCoreClock = u32Freq / u32HclkDiv;

    /* Update Cycles per micro second */
    CyclesPerUs = (SystemCoreClock + 500000UL) / 1000000UL;

    return SystemCoreClock;

}

/**
  * @brief      Set HCLK frequency
  * @param[in]  u32Hclk is HCLK frequency. The range of u32Hclk is 30MHz ~ 144MHz.
  * @return     HCLK frequency
  * @details    This function is used to set HCLK frequency by using PLL. The frequency unit is Hz. \n
  *             Power level and flash access cycle are also set according to HCLK frequency. \n
  *             The register write-protection function should be disabled before using this function.
  */
uint32_t CLK_SetCoreClock(uint32_t u32Hclk)
{
    uint32_t u32HIRCSTB;
    uint32_t u32HclkTmp = u32Hclk;

    /* Read HIRC clock source stable flag */
    u32HIRCSTB = CLK->STATUS & CLK_STATUS_HIRCSTB_Msk;

    /* Check HCLK frequency range is 30MHz ~ 144MHz */
    if (u32HclkTmp > FREQ_144MHZ)
    {
        u32HclkTmp = FREQ_144MHZ;
    }

    if (u32HclkTmp < FREQ_30MHZ)
    {
        u32HclkTmp = FREQ_30MHZ;
    }

    /* PCLK limitation */
    if (u32HclkTmp > FREQ_72MHZ)
    {
        /* Set PCLK0 to HCLK/2 */
        CLK_SET_PCLK0DIV(CLK_PCLKDIV_APB0DIV_DIV2);
        /* Set PCLK1 to HCLK/2 */
        CLK_SET_PCLK1DIV(CLK_PCLKDIV_APB1DIV_DIV2);
    }

    /* Switch HCLK clock source to HIRC clock for safe */
    CLK->PWRCTL |= CLK_PWRCTL_HIRCEN_Msk;
    (void)CLK_WaitClockReady(CLK_STATUS_HIRCSTB_Msk);

    FMC->CYCCTL = (FMC->CYCCTL & (~FMC_CYCCTL_CYCLE_Msk)) | (8UL);
    CLK->CLKSEL0 |= CLK_CLKSEL0_HCLKSEL_Msk;
    FMC->CYCCTL = (FMC->CYCCTL & (~FMC_CYCCTL_CYCLE_Msk)) | (2UL);
    CLK->CLKDIV0 &= (~CLK_CLKDIV0_HCLKDIV_Msk);

    /* Configure PLL setting if HXT clock is stable */
    if (CLK->STATUS & CLK_STATUS_HXTSTB_Msk)
    {
        u32HclkTmp = CLK_EnablePLL(CLK_PLLCTL_PLLSRC_HXT, u32HclkTmp);
    }
    else    /* Configure PLL setting if HXT clock is not stable */
    {
        u32HclkTmp = CLK_EnablePLL(CLK_PLLCTL_PLLSRC_HIRC_DIV4, u32HclkTmp);

        /* Read HIRC clock source stable flag */
        u32HIRCSTB = CLK->STATUS & CLK_STATUS_HIRCSTB_Msk;
    }

    /* Select HCLK clock source to PLL,
       select HCLK clock source divider as 1,
       adjust power level, flash access cycle and update system core clock
    */
    CLK_SetHCLK(CLK_CLKSEL0_HCLKSEL_PLL, CLK_CLKDIV0_HCLK(1UL));

    /* Disable HIRC if HIRC is disabled before setting core clock */
    if (u32HIRCSTB == 0UL)
    {
        CLK->PWRCTL &= ~CLK_PWRCTL_HIRCEN_Msk;
    }

    /* Return actually HCLK frequency is PLL frequency divide 1 */
    return u32HclkTmp;
}

/**
  * @brief      Set HCLK clock source and HCLK clock divider
  * @param[in]  u32ClkSrc is HCLK clock source. Including :
  *             - \ref CLK_CLKSEL0_HCLKSEL_HXT
  *             - \ref CLK_CLKSEL0_HCLKSEL_LXT
  *             - \ref CLK_CLKSEL0_HCLKSEL_PLL
  *             - \ref CLK_CLKSEL0_HCLKSEL_LIRC
  *             - \ref CLK_CLKSEL0_HCLKSEL_HIRC
  * @param[in]  u32ClkDiv is HCLK clock divider. Including :
  *             - \ref CLK_CLKDIV0_HCLK(x)
  * @return     None
  * @details    This function set HCLK clock source and HCLK clock divider. \n
  *             Power level and flash access cycle are also set according to HCLK operation frequency. \n
  *             The register write-protection function should be disabled before using this function.
  */
void CLK_SetHCLK(uint32_t u32ClkSrc, uint32_t u32ClkDiv)
{
    uint32_t u32HIRCSTB;

    /* Read HIRC clock source stable flag */
    u32HIRCSTB = CLK->STATUS & CLK_STATUS_HIRCSTB_Msk;

    /* Switch to HIRC for safe. Avoid HCLK too high when applying new divider. */
    CLK->PWRCTL |= CLK_PWRCTL_HIRCEN_Msk;
    (void)CLK_WaitClockReady(CLK_STATUS_HIRCSTB_Msk);

    FMC->CYCCTL = (FMC->CYCCTL & (~FMC_CYCCTL_CYCLE_Msk)) | (8UL);
    CLK->CLKSEL0 |= CLK_CLKSEL0_HCLKSEL_Msk;
    FMC->CYCCTL = (FMC->CYCCTL & (~FMC_CYCCTL_CYCLE_Msk)) | (2UL);

    /* Set Flash Access Cycle to 8 for safe */
    FMC->CYCCTL = (FMC->CYCCTL & (~FMC_CYCCTL_CYCLE_Msk)) | (8UL);

    /* Apply new Divider */
    CLK->CLKDIV0 = (CLK->CLKDIV0 & (~CLK_CLKDIV0_HCLKDIV_Msk)) | u32ClkDiv;

    /* Switch HCLK to new HCLK source */
    CLK->CLKSEL0 = (CLK->CLKSEL0 & (~CLK_CLKSEL0_HCLKSEL_Msk)) | u32ClkSrc;

    /* Update System Core Clock */
    SystemCoreClockUpdate();

    /* Switch flash access cycle to suitable value base on HCLK */
    if (SystemCoreClock >= FREQ_125MHZ)
    {
        FMC->CYCCTL = (FMC->CYCCTL & (~FMC_CYCCTL_CYCLE_Msk)) | (6UL);
    }
    else if (SystemCoreClock >= FREQ_100MHZ)
    {
        FMC->CYCCTL = (FMC->CYCCTL & (~FMC_CYCCTL_CYCLE_Msk)) | (5UL);
    }
    else if (SystemCoreClock >= FREQ_75MHZ)
    {
        FMC->CYCCTL = (FMC->CYCCTL & (~FMC_CYCCTL_CYCLE_Msk)) | (4UL);
    }
    else if (SystemCoreClock >= FREQ_50MHZ)
    {
        FMC->CYCCTL = (FMC->CYCCTL & (~FMC_CYCCTL_CYCLE_Msk)) | (3UL);
    }
    else if (SystemCoreClock >= FREQ_25MHZ)
    {
        FMC->CYCCTL = (FMC->CYCCTL & (~FMC_CYCCTL_CYCLE_Msk)) | (2UL);
    }
    else /* SystemCoreClock < FREQ_25MHZ */
    {
        FMC->CYCCTL = (FMC->CYCCTL & (~FMC_CYCCTL_CYCLE_Msk)) | (1UL);
    }

    /* Disable HIRC if HIRC is disabled before switching HCLK source */
    if (u32HIRCSTB == 0UL)
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
  * |Module index        |Clock source                           |Divider                        |
  * | :----------------  | :-----------------------------------  | :--------------------------   |
  * |\ref USBH_MODULE    |\ref CLK_CLKSEL0_USBSEL_HIRC           |\ref CLK_CLKDIV0_USB(x)        |
  * |\ref USBH_MODULE    |\ref CLK_CLKSEL0_USBSEL_PLL            |\ref CLK_CLKDIV0_USB(x)        |
  * |\ref USBD_MODULE    |\ref CLK_CLKSEL0_USBSEL_HIRC           |\ref CLK_CLKDIV0_USB(x)        |
  * |\ref USBD_MODULE    |\ref CLK_CLKSEL0_USBSEL_PLL            |\ref CLK_CLKDIV0_USB(x)        |

  * |\ref EADC0_MODULE   |\ref CLK_CLKSEL0_EADC0SEL_HCLK         |\ref CLK_CLKDIV0_EADC0(x)      |
  * |\ref EADC0_MODULE   |\ref CLK_CLKSEL0_EADC0SEL_PLL          |\ref CLK_CLKDIV0_EADC0(x)      |

  * |\ref EADC1_MODULE   |\ref CLK_CLKSEL0_EADC1SEL_HCLK         |\ref CLK_CLKDIV2_EADC1(x)      |
  * |\ref EADC1_MODULE   |\ref CLK_CLKSEL0_EADC1SEL_PLL          |\ref CLK_CLKDIV2_EADC1(x)      |

  * |\ref CANFD0_MODULE  |\ref CLK_CLKSEL0_CANFD0SEL_HXT         |\ref CLK_CLKDIV1_CANFD0(x)     |
  * |\ref CANFD0_MODULE  |\ref CLK_CLKSEL0_CANFD0SEL_PLL         |\ref CLK_CLKDIV1_CANFD0(x)     |
  * |\ref CANFD0_MODULE  |\ref CLK_CLKSEL0_CANFD0SEL_HCLK        |\ref CLK_CLKDIV1_CANFD0(x)     |
  * |\ref CANFD0_MODULE  |\ref CLK_CLKSEL0_CANFD0SEL_HIRC        |\ref CLK_CLKDIV1_CANFD0(x)     |

  * |\ref CANFD1_MODULE  |\ref CLK_CLKSEL0_CANFD1SEL_HXT         |\ref CLK_CLKDIV1_CANFD1(x)     |
  * |\ref CANFD1_MODULE  |\ref CLK_CLKSEL0_CANFD1SEL_PLL         |\ref CLK_CLKDIV1_CANFD1(x)     |
  * |\ref CANFD1_MODULE  |\ref CLK_CLKSEL0_CANFD1SEL_HCLK        |\ref CLK_CLKDIV1_CANFD1(x)     |
  * |\ref CANFD1_MODULE  |\ref CLK_CLKSEL0_CANFD1SEL_HIRC        |\ref CLK_CLKDIV1_CANFD1(x)     |

  * |\ref WDT0_MODULE    |\ref CLK_CLKSEL1_WDT0SEL_LXT           | x                             |
  * |\ref WDT0_MODULE    |\ref CLK_CLKSEL1_WDT0SEL_HCLK_DIV2048  | x                             |
  * |\ref WDT0_MODULE    |\ref CLK_CLKSEL1_WDT0SEL_LIRC          | x                             |

  * |\ref WDT1_MODULE    |\ref CLK_CLKSEL1_WDT1SEL_LXT           | x                             |
  * |\ref WDT1_MODULE    |\ref CLK_CLKSEL1_WDT1SEL_HCLK_DIV2048  | x                             |
  * |\ref WDT1_MODULE    |\ref CLK_CLKSEL1_WDT1SEL_LIRC          | x                             |

  * |\ref CLKO_MODULE    |\ref CLK_CLKSEL1_CLKOSEL_HXT           | x                             |
  * |\ref CLKO_MODULE    |\ref CLK_CLKSEL1_CLKOSEL_LXT           | x                             |
  * |\ref CLKO_MODULE    |\ref CLK_CLKSEL1_CLKOSEL_HCLK          | x                             |
  * |\ref CLKO_MODULE    |\ref CLK_CLKSEL1_CLKOSEL_HIRC          | x                             |
  * |\ref CLKO_MODULE    |\ref CLK_CLKSEL1_CLKOSEL_LIRC          | x                             |
  * |\ref CLKO_MODULE    |\ref CLK_CLKSEL1_CLKOSEL_PLL           | x                             |
  * |\ref CLKO_MODULE    |\ref CLK_CLKSEL1_CLKOSEL_USBD_SOF      | x                             |

  * |\ref TMR0_MODULE    |\ref CLK_CLKSEL1_TMR0SEL_HXT           | x                             |
  * |\ref TMR0_MODULE    |\ref CLK_CLKSEL1_TMR0SEL_LXT           | x                             |
  * |\ref TMR0_MODULE    |\ref CLK_CLKSEL1_TMR0SEL_PCLK0         | x                             |
  * |\ref TMR0_MODULE    |\ref CLK_CLKSEL1_TMR0SEL_EXT           | x                             |
  * |\ref TMR0_MODULE    |\ref CLK_CLKSEL1_TMR0SEL_LIRC          | x                             |
  * |\ref TMR0_MODULE    |\ref CLK_CLKSEL1_TMR0SEL_HIRC          | x                             |

  * |\ref TMR1_MODULE    |\ref CLK_CLKSEL1_TMR1SEL_HXT           | x                             |
  * |\ref TMR1_MODULE    |\ref CLK_CLKSEL1_TMR1SEL_LXT           | x                             |
  * |\ref TMR1_MODULE    |\ref CLK_CLKSEL1_TMR1SEL_PCLK0         | x                             |
  * |\ref TMR1_MODULE    |\ref CLK_CLKSEL1_TMR1SEL_EXT           | x                             |
  * |\ref TMR1_MODULE    |\ref CLK_CLKSEL1_TMR1SEL_LIRC          | x                             |
  * |\ref TMR1_MODULE    |\ref CLK_CLKSEL1_TMR1SEL_HIRC          | x                             |

  * |\ref TMR2_MODULE    |\ref CLK_CLKSEL1_TMR2SEL_HXT           | x                             |
  * |\ref TMR2_MODULE    |\ref CLK_CLKSEL1_TMR2SEL_LXT           | x                             |
  * |\ref TMR2_MODULE    |\ref CLK_CLKSEL1_TMR2SEL_PCLK1         | x                             |
  * |\ref TMR2_MODULE    |\ref CLK_CLKSEL1_TMR2SEL_EXT           | x                             |
  * |\ref TMR2_MODULE    |\ref CLK_CLKSEL1_TMR2SEL_LIRC          | x                             |
  * |\ref TMR2_MODULE    |\ref CLK_CLKSEL1_TMR2SEL_HIRC          | x                             |

  * |\ref TMR3_MODULE    |\ref CLK_CLKSEL1_TMR3SEL_HXT           | x                             |
  * |\ref TMR3_MODULE    |\ref CLK_CLKSEL1_TMR3SEL_LXT           | x                             |
  * |\ref TMR3_MODULE    |\ref CLK_CLKSEL1_TMR3SEL_PCLK1         | x                             |
  * |\ref TMR3_MODULE    |\ref CLK_CLKSEL1_TMR3SEL_EXT           | x                             |
  * |\ref TMR3_MODULE    |\ref CLK_CLKSEL1_TMR3SEL_LIRC          | x                             |
  * |\ref TMR3_MODULE    |\ref CLK_CLKSEL1_TMR3SEL_HIRC          | x                             |

  * |\ref UART0_MODULE   |\ref CLK_CLKSEL1_UART0SEL_HXT          |\ref CLK_CLKDIV0_UART0(x)      |
  * |\ref UART0_MODULE   |\ref CLK_CLKSEL1_UART0SEL_PLL          |\ref CLK_CLKDIV0_UART0(x)      |
  * |\ref UART0_MODULE   |\ref CLK_CLKSEL1_UART0SEL_LXT          |\ref CLK_CLKDIV0_UART0(x)      |
  * |\ref UART0_MODULE   |\ref CLK_CLKSEL1_UART0SEL_HIRC         |\ref CLK_CLKDIV0_UART0(x)      |

  * |\ref UART1_MODULE   |\ref CLK_CLKSEL1_UART1SEL_HXT          |\ref CLK_CLKDIV0_UART1(x)      |
  * |\ref UART1_MODULE   |\ref CLK_CLKSEL1_UART1SEL_PLL          |\ref CLK_CLKDIV0_UART1(x)      |
  * |\ref UART1_MODULE   |\ref CLK_CLKSEL1_UART1SEL_LXT          |\ref CLK_CLKDIV0_UART1(x)      |
  * |\ref UART1_MODULE   |\ref CLK_CLKSEL1_UART1SEL_HIRC         |\ref CLK_CLKDIV0_UART1(x)      |

  * |\ref UART2_MODULE   |\ref CLK_CLKSEL3_UART2SEL_HXT          |\ref CLK_CLKDIV1_UART2(x)      |
  * |\ref UART2_MODULE   |\ref CLK_CLKSEL3_UART2SEL_PLL          |\ref CLK_CLKDIV1_UART2(x)      |
  * |\ref UART2_MODULE   |\ref CLK_CLKSEL3_UART2SEL_LXT          |\ref CLK_CLKDIV1_UART2(x)      |
  * |\ref UART2_MODULE   |\ref CLK_CLKSEL3_UART2SEL_HIRC         |\ref CLK_CLKDIV1_UART2(x)      |

  * |\ref UART3_MODULE   |\ref CLK_CLKSEL3_UART3SEL_HXT          |\ref CLK_CLKDIV1_UART3(x)      |
  * |\ref UART3_MODULE   |\ref CLK_CLKSEL3_UART3SEL_PLL          |\ref CLK_CLKDIV1_UART3(x)      |
  * |\ref UART3_MODULE   |\ref CLK_CLKSEL3_UART3SEL_LXT          |\ref CLK_CLKDIV1_UART3(x)      |
  * |\ref UART3_MODULE   |\ref CLK_CLKSEL3_UART3SEL_HIRC         |\ref CLK_CLKDIV1_UART3(x)      |

  * |\ref UART4_MODULE   |\ref CLK_CLKSEL3_UART4SEL_HXT          |\ref CLK_CLKDIV1_UART4(x)      |
  * |\ref UART4_MODULE   |\ref CLK_CLKSEL3_UART4SEL_PLL          |\ref CLK_CLKDIV1_UART4(x)      |
  * |\ref UART4_MODULE   |\ref CLK_CLKSEL3_UART4SEL_LXT          |\ref CLK_CLKDIV1_UART4(x)      |
  * |\ref UART4_MODULE   |\ref CLK_CLKSEL3_UART4SEL_HIRC         |\ref CLK_CLKDIV1_UART4(x)      |

  * |\ref UART5_MODULE   |\ref CLK_CLKSEL3_UART5SEL_HXT          |\ref CLK_CLKDIV2_UART5(x)      |
  * |\ref UART5_MODULE   |\ref CLK_CLKSEL3_UART5SEL_PLL          |\ref CLK_CLKDIV2_UART5(x)      |
  * |\ref UART5_MODULE   |\ref CLK_CLKSEL3_UART5SEL_LXT          |\ref CLK_CLKDIV2_UART5(x)      |
  * |\ref UART5_MODULE   |\ref CLK_CLKSEL3_UART5SEL_HIRC         |\ref CLK_CLKDIV2_UART5(x)      |

  * |\ref UART6_MODULE   |\ref CLK_CLKSEL3_UART6SEL_HXT          |\ref CLK_CLKDIV2_UART6(x)      |
  * |\ref UART6_MODULE   |\ref CLK_CLKSEL3_UART6SEL_PLL          |\ref CLK_CLKDIV2_UART6(x)      |
  * |\ref UART6_MODULE   |\ref CLK_CLKSEL3_UART6SEL_LXT          |\ref CLK_CLKDIV2_UART6(x)      |
  * |\ref UART6_MODULE   |\ref CLK_CLKSEL3_UART6SEL_HIRC         |\ref CLK_CLKDIV2_UART6(x)      |

  * |\ref UART7_MODULE   |\ref CLK_CLKSEL3_UART7SEL_HXT          |\ref CLK_CLKDIV2_UART7(x)      |
  * |\ref UART7_MODULE   |\ref CLK_CLKSEL3_UART7SEL_PLL          |\ref CLK_CLKDIV2_UART7(x)      |
  * |\ref UART7_MODULE   |\ref CLK_CLKSEL3_UART7SEL_LXT          |\ref CLK_CLKDIV2_UART7(x)      |
  * |\ref UART7_MODULE   |\ref CLK_CLKSEL3_UART7SEL_HIRC         |\ref CLK_CLKDIV2_UART7(x)      |

  * |\ref UART8_MODULE   |\ref CLK_CLKSEL3_UART8SEL_HXT          |\ref CLK_CLKDIV2_UART8(x)      |
  * |\ref UART8_MODULE   |\ref CLK_CLKSEL3_UART8SEL_PLL          |\ref CLK_CLKDIV2_UART8(x)      |
  * |\ref UART8_MODULE   |\ref CLK_CLKSEL3_UART8SEL_LXT          |\ref CLK_CLKDIV2_UART8(x)      |
  * |\ref UART8_MODULE   |\ref CLK_CLKSEL3_UART8SEL_HIRC         |\ref CLK_CLKDIV2_UART8(x)      |

  * |\ref UART9_MODULE   |\ref CLK_CLKSEL3_UART9SEL_HXT          |\ref CLK_CLKDIV2_UART9(x)      |
  * |\ref UART9_MODULE   |\ref CLK_CLKSEL3_UART9SEL_PLL          |\ref CLK_CLKDIV2_UART9(x)      |
  * |\ref UART9_MODULE   |\ref CLK_CLKSEL3_UART9SEL_LXT          |\ref CLK_CLKDIV2_UART9(x)      |
  * |\ref UART9_MODULE   |\ref CLK_CLKSEL3_UART9SEL_HIRC         |\ref CLK_CLKDIV2_UART9(x)      |

  * |\ref WWDT0_MODULE   |\ref CLK_CLKSEL1_WWDT0SEL_HCLK_DIV2048 | x                             |
  * |\ref WWDT0_MODULE   |\ref CLK_CLKSEL1_WWDT0SEL_LIRC         | x                             |

  * |\ref WWDT1_MODULE   |\ref CLK_CLKSEL1_WWDT1SEL_HCLK_DIV2048 | x                             |
  * |\ref WWDT1_MODULE   |\ref CLK_CLKSEL1_WWDT1SEL_LIRC         | x                             |

  * |\ref PWM0_MODULE    |\ref CLK_CLKSEL2_PWM0SEL_HCLK          | x                             |
  * |\ref PWM0_MODULE    |\ref CLK_CLKSEL2_PWM0SEL_PCLK0         | x                             |

  * |\ref PWM1_MODULE    |\ref CLK_CLKSEL2_PWM1SEL_HCLK          | x                             |
  * |\ref PWM1_MODULE    |\ref CLK_CLKSEL2_PWM1SEL_PCLK1         | x                             |

  * |\ref QSPI0_MODULE   |\ref CLK_CLKSEL2_QSPI0SEL_HXT          | x                             |
  * |\ref QSPI0_MODULE   |\ref CLK_CLKSEL2_QSPI0SEL_PLL          | x                             |
  * |\ref QSPI0_MODULE   |\ref CLK_CLKSEL2_QSPI0SEL_PCLK0        | x                             |
  * |\ref QSPI0_MODULE   |\ref CLK_CLKSEL2_QSPI0SEL_HIRC         | x                             |

  * |\ref SPI0_MODULE    |\ref CLK_CLKSEL2_SPI0SEL_HXT           | x                             |
  * |\ref SPI0_MODULE    |\ref CLK_CLKSEL2_SPI0SEL_PLL           | x                             |
  * |\ref SPI0_MODULE    |\ref CLK_CLKSEL2_SPI0SEL_PCLK1         | x                             |
  * |\ref SPI0_MODULE    |\ref CLK_CLKSEL2_SPI0SEL_HIRC          | x                             |

  * |\ref SPI1_MODULE    |\ref CLK_CLKSEL2_SPI1SEL_HXT           | x                             |
  * |\ref SPI1_MODULE    |\ref CLK_CLKSEL2_SPI1SEL_PLL           | x                             |
  * |\ref SPI1_MODULE    |\ref CLK_CLKSEL2_SPI1SEL_PCLK0         | x                             |
  * |\ref SPI1_MODULE    |\ref CLK_CLKSEL2_SPI1SEL_HIRC          | x                             |

  * |\ref BPWM0_MODULE   |\ref CLK_CLKSEL2_BPWM0SEL_HCLK         | x                             |
  * |\ref BPWM0_MODULE   |\ref CLK_CLKSEL2_BPWM0SEL_PCLK0        | x                             |

  * |\ref BPWM1_MODULE   |\ref CLK_CLKSEL2_BPWM1SEL_HCLK         | x                             |
  * |\ref BPWM1_MODULE   |\ref CLK_CLKSEL2_BPWM1SEL_PCLK1        | x                             |

  * |\ref I3C0_MODULE    |\ref CLK_CLKSEL3_I3C0SEL_HCLK          | x                             |
  * |\ref I3C0_MODULE    |\ref CLK_CLKSEL3_I3C0SEL_PLL           | x                             |

  */
void CLK_SetModuleClock(uint32_t u32ModuleIdx, uint32_t u32ClkSrc, uint32_t u32ClkDiv)
{
    uint32_t u32RTCCKEN = CLK->APBCLK0 & CLK_APBCLK0_RTCCKEN_Msk;

    if (u32ModuleIdx == RTC_MODULE)     /* RTC clock source configuration */
    {
        if (u32RTCCKEN == 0UL)
        {
            CLK->APBCLK0 |= CLK_APBCLK0_RTCCKEN_Msk; /* Enable RTC clock to get LXT clock source */
        }

        /* Select RTC clock source */
        RTC->LXTCTL = (RTC->LXTCTL & (~RTC_LXTCTL_RTCCKSEL_Msk)) | (u32ClkSrc);

        if (u32RTCCKEN == 0UL)
        {
            CLK->APBCLK0 &= (~CLK_APBCLK0_RTCCKEN_Msk); /* Disable RTC clock if it is disabled before */
        }
    }
    else /* Others clock source configuration */
    {
        /* Configure clock source divider */
        switch (u32ModuleIdx)
        {
            /* For 8 bits divider */
            case EADC0_MODULE:
                CLK->CLKDIV0 = (CLK->CLKDIV0 & (~CLK_CLKDIV0_EADC0DIV_Msk)) | (u32ClkDiv);
                break;

            case EADC1_MODULE:
                CLK->CLKDIV2 = (CLK->CLKDIV2 & (~CLK_CLKDIV2_EADC1DIV_Msk)) | (u32ClkDiv);
                break;

            /* Others */
            default:
            {
                if (MODULE_CLKDIV_Msk(u32ModuleIdx) != MODULE_NoMsk)
                {
                    const uint32_t au32DivTbl[3] = {0x0UL, 0x4UL, 0x8UL};                /* CLK_CLKDIV0~2 */
                    uint32_t u32Div = 0UL;

                    /* Get clock divider control register address */
                    u32Div = (uint32_t)&CLK->CLKDIV0 + (au32DivTbl[MODULE_CLKDIV(u32ModuleIdx)]);
                    /* Apply new divider */
                    M32(u32Div) = (M32(u32Div) & (~(MODULE_CLKDIV_Msk(u32ModuleIdx) << MODULE_CLKDIV_Pos(u32ModuleIdx)))) | u32ClkDiv;
                }
            }
            break;
        }

        /* Configure clock source */
        if (MODULE_CLKSEL_Msk(u32ModuleIdx) != MODULE_NoMsk)
        {
            const uint32_t au32SelTbl[4] = {0x0UL, 0x4UL, 0x8UL, 0xCUL};  /* CLK_CLKSEL0~3 */
            uint32_t u32Sel = 0UL;

            /* Get clock select control register address */
            u32Sel = (uint32_t)&CLK->CLKSEL0 + (au32SelTbl[MODULE_CLKSEL(u32ModuleIdx)]);
            /* Set new clock selection setting */
            M32(u32Sel) = (M32(u32Sel) & (~(MODULE_CLKSEL_Msk(u32ModuleIdx) << MODULE_CLKSEL_Pos(u32ModuleIdx)))) | u32ClkSrc;
        }
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
  * @return     None
  * @details    This function enable clock source. \n
  *             The register write-protection function should be disabled before using this function.
  */
void CLK_EnableXtalRC(uint32_t u32ClkMask)
{
	/* WORKAROUND */
	if ((u32ClkMask & CLK_PWRCTL_HXTEN_Msk) == CLK_PWRCTL_HXTEN_Msk)
	{
		outp32(SYS_BASE + 0x190, (inp32(SYS_BASE + 0x190) & ~(BIT21|BIT22|BIT23)) | BIT22);
	}

    CLK->PWRCTL |= u32ClkMask;
}

/**
  * @brief      Disable clock source
  * @param[in]  u32ClkMask is clock source mask. Including :
  *             - \ref CLK_PWRCTL_HXTEN_Msk
  *             - \ref CLK_PWRCTL_LXTEN_Msk
  *             - \ref CLK_PWRCTL_HIRCEN_Msk
  *             - \ref CLK_PWRCTL_LIRCEN_Msk
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
*             - \ref PDMA0_MODULE
*             - \ref ISP_MODULE
*             - \ref EBI_MODULE
*             - \ref ST_MODULE
*             - \ref CRC_MODULE
*             - \ref CANFD0_MODULE
*             - \ref CANFD1_MODULE
*             - \ref CRPT_MODULE
*             - \ref DFMC_MODULE
*             - \ref FMCIDLE_MODULE
*             - \ref USBH_MODULE
*             - \ref CANRAM0_MODULE
*             - \ref CANRAM1_MODULE
*             - \ref GPA_MODULE
*             - \ref GPB_MODULE
*             - \ref GPC_MODULE
*             - \ref GPD_MODULE
*             - \ref GPE_MODULE
*             - \ref GPF_MODULE
*             - \ref GPG_MODULE
*             - \ref GPH_MODULE
*             - \ref WDT0_MODULE
*             - \ref RTC_MODULE
*             - \ref TMR0_MODULE
*             - \ref TMR1_MODULE
*             - \ref TMR2_MODULE
*             - \ref TMR3_MODULE
*             - \ref CLKO_MODULE
*             - \ref ACMP01_MODULE
*             - \ref I2C0_MODULE
*             - \ref I2C1_MODULE
*             - \ref I2C2_MODULE
*             - \ref I3C0_MODULE
*             - \ref QSPI0_MODULE
*             - \ref SPI0_MODULE
*             - \ref SPI1_MODULE
*             - \ref UART0_MODULE
*             - \ref UART1_MODULE
*             - \ref UART2_MODULE
*             - \ref UART3_MODULE
*             - \ref UART4_MODULE
*             - \ref UART5_MODULE
*             - \ref UART6_MODULE
*             - \ref UART7_MODULE
*             - \ref UART8_MODULE
*             - \ref UART9_MODULE
*             - \ref WWDT0_MODULE
*             - \ref WWDT1_MODULE
*             - \ref USBD_MODULE
*             - \ref EADC0_MODULE
*             - \ref WDT1_MODULE
*             - \ref USCI0_MODULE
*             - \ref USCI1_MODULE
*             - \ref DAC_MODULE
*             - \ref PWM0_MODULE
*             - \ref PWM1_MODULE
*             - \ref BPWM0_MODULE
*             - \ref BPWM1_MODULE
*             - \ref EQEI0_MODULE
*             - \ref EQEI1_MODULE
*             - \ref ECAP0_MODULE
*             - \ref EADC1_MODULE
*             - \ref LLSI0_MODULE
*             - \ref LLSI1_MODULE
*             - \ref LLSI2_MODULE
*             - \ref LLSI3_MODULE
*             - \ref LLSI4_MODULE
*             - \ref LLSI5_MODULE
*             - \ref LLSI6_MODULE
*             - \ref LLSI7_MODULE
*             - \ref LLSI8_MODULE
*             - \ref LLSI9_MODULE
*             - \ref ELLSI0_MODULE
*             - \ref ELLSI1_MODULE
*             - \ref TRNG_MODULE
  * @return     None
  * @details    This function is used to enable module clock.
  */
void CLK_EnableModuleClock(uint32_t u32ModuleIdx)
{
    uint32_t u32TmpVal = 0UL;
    uint32_t u32TmpAddr = 0UL;

    /* Index, 0x0:AHBCLK0, 0x1:APBCLK0, 0x2:APBCLK1, 0x3:APBCLK2 */
    const uint32_t au32ClkEnTbl[4] = {0x0UL, 0x4UL, 0x8UL, 0x34UL};

    u32TmpVal = (1UL << MODULE_IP_EN_Pos(u32ModuleIdx));
    u32TmpAddr = (uint32_t)&CLK->AHBCLK0 + au32ClkEnTbl[MODULE_APBCLK(u32ModuleIdx)];

    *(volatile uint32_t *)u32TmpAddr |= u32TmpVal;
}

/**
  * @brief      Disable module clock
  * @param[in]  u32ModuleIdx is module index. Including :
*             - \ref PDMA0_MODULE
*             - \ref ISP_MODULE
*             - \ref EBI_MODULE
*             - \ref ST_MODULE
*             - \ref CRC_MODULE
*             - \ref CANFD0_MODULE
*             - \ref CANFD1_MODULE
*             - \ref CRPT_MODULE
*             - \ref DFMC_MODULE
*             - \ref FMCIDLE_MODULE
*             - \ref USBH_MODULE
*             - \ref CANRAM0_MODULE
*             - \ref CANRAM1_MODULE
*             - \ref GPA_MODULE
*             - \ref GPB_MODULE
*             - \ref GPC_MODULE
*             - \ref GPD_MODULE
*             - \ref GPE_MODULE
*             - \ref GPF_MODULE
*             - \ref GPG_MODULE
*             - \ref GPH_MODULE
*             - \ref WDT0_MODULE
*             - \ref RTC_MODULE
*             - \ref TMR0_MODULE
*             - \ref TMR1_MODULE
*             - \ref TMR2_MODULE
*             - \ref TMR3_MODULE
*             - \ref CLKO_MODULE
*             - \ref ACMP01_MODULE
*             - \ref I2C0_MODULE
*             - \ref I2C1_MODULE
*             - \ref I2C2_MODULE
*             - \ref I3C0_MODULE
*             - \ref QSPI0_MODULE
*             - \ref SPI0_MODULE
*             - \ref SPI1_MODULE
*             - \ref UART0_MODULE
*             - \ref UART1_MODULE
*             - \ref UART2_MODULE
*             - \ref UART3_MODULE
*             - \ref UART4_MODULE
*             - \ref UART5_MODULE
*             - \ref UART6_MODULE
*             - \ref UART7_MODULE
*             - \ref UART8_MODULE
*             - \ref UART9_MODULE
*             - \ref WWDT0_MODULE
*             - \ref WWDT1_MODULE
*             - \ref USBD_MODULE
*             - \ref EADC0_MODULE
*             - \ref WDT1_MODULE
*             - \ref USCI0_MODULE
*             - \ref USCI1_MODULE
*             - \ref DAC_MODULE
*             - \ref PWM0_MODULE
*             - \ref PWM1_MODULE
*             - \ref BPWM0_MODULE
*             - \ref BPWM1_MODULE
*             - \ref EQEI0_MODULE
*             - \ref EQEI1_MODULE
*             - \ref ECAP0_MODULE
*             - \ref EADC1_MODULE
*             - \ref LLSI0_MODULE
*             - \ref LLSI1_MODULE
*             - \ref LLSI2_MODULE
*             - \ref LLSI3_MODULE
*             - \ref LLSI4_MODULE
*             - \ref LLSI5_MODULE
*             - \ref LLSI6_MODULE
*             - \ref LLSI7_MODULE
*             - \ref LLSI8_MODULE
*             - \ref LLSI9_MODULE
*             - \ref ELLSI0_MODULE
*             - \ref ELLSI1_MODULE
*             - \ref TRNG_MODULE
  * @return     None
  * @details    This function is used to disable module clock.
  */
void CLK_DisableModuleClock(uint32_t u32ModuleIdx)
{
    uint32_t u32TmpVal = 0UL;
    uint32_t u32TmpAddr = 0UL;

    /* Index, 0x0:AHBCLK0, 0x1:APBCLK0, 0x2:APBCLK1, 0x3:APBCLK2 */
    const uint32_t au32ClkEnTbl[4] = {0x0UL, 0x4UL, 0x8UL, 0x34UL};

    u32TmpVal = ~(1UL << MODULE_IP_EN_Pos(u32ModuleIdx));
    u32TmpAddr = (uint32_t)&CLK->AHBCLK0 + au32ClkEnTbl[MODULE_APBCLK(u32ModuleIdx)];

    *(uint32_t *)u32TmpAddr &= u32TmpVal;
}

/**
  * @brief      Set PLL frequency
  * @param[in]  u32PllClkSrc is PLL clock source. Including :
  *             - \ref CLK_PLLCTL_PLLSRC_HXT
  *             - \ref CLK_PLLCTL_PLLSRC_HIRC_DIV4
  * @param[in]  u32PllFreq is PLL frequency. The range of u32PllFreq is 30 MHz ~ 320 MHz.
  * @return     PLL frequency
  * @details    This function is used to configure CLK_PLLCTL register to set specified PLL frequency. \n
  *             The register write-protection function should be disabled before using this function.
  */
uint32_t CLK_EnablePLL(uint32_t u32PllClkSrc, uint32_t u32PllFreq)
{
    uint32_t u32PllSrcClk;
    uint32_t u32NR;
    uint32_t u32NF;
    uint32_t u32NO;
    uint32_t u32PllClk = 0U;
    uint32_t u32Tmp;
    uint32_t u32Tmp2;
    uint32_t u32Tmp3;
    uint32_t u32Min;
    uint32_t u32MinNF;
    uint32_t u32MinNR;
    uint32_t u32PllFreqTmp = u32PllFreq;

    /* Check if HCLK is PLL before configure PLL */
    if ((CLK->CLKSEL0 & CLK_CLKSEL0_HCLKSEL_Msk) == CLK_CLKSEL0_HCLKSEL_PLL)
    {
        /* Return PLL frequency directly if HCLK is PLL */
        return GetPLLClockFreq();
    }
    else
    {
        /* Disable PLL first to avoid unstable when setting PLL */
        CLK->PLLCTL |= CLK_PLLCTL_PD_Msk;
    }

    /* PLL source clock is from HXT */
    if (u32PllClkSrc == CLK_PLLCTL_PLLSRC_HXT)
    {
        /* Enable HXT clock */
        CLK->PWRCTL |= CLK_PWRCTL_HXTEN_Msk;

        /* Wait for HXT clock ready */
        (void)CLK_WaitClockReady(CLK_STATUS_HXTSTB_Msk);

        /* Select PLL source clock from HXT */
        u32PllSrcClk = __HXT;
    }
    else/* PLL source clock is from HIRC */
    {
        /* Enable HIRC clock */
        CLK->PWRCTL |= CLK_PWRCTL_HIRCEN_Msk;

        /* Wait for HIRC clock ready */
        (void)CLK_WaitClockReady(CLK_STATUS_HIRCSTB_Msk);

        /* Select PLL source clock from HIRC/4 */
        u32PllSrcClk = (__HIRC >> 2);
    }

    /* Check PLL frequency range */
    /* Constraint 1: 30MHz < FOUT < 320MHz */
    if ((u32PllFreqTmp <= FREQ_320MHZ) && (u32PllFreqTmp >= FREQ_30MHZ))
    {
        /* Select "NO" according to request frequency */
        if ((u32PllFreqTmp < FREQ_80MHZ) && (u32PllFreqTmp >= FREQ_30MHZ))
        {
            u32NO = 3UL;
            u32PllFreqTmp = u32PllFreqTmp << 2;
        }
        else if ((u32PllFreqTmp < FREQ_160MHZ) && (u32PllFreqTmp >= FREQ_80MHZ))
        {
            u32NO = 1UL;
            u32PllFreqTmp = u32PllFreqTmp << 1;
        }
        else
        {
            u32NO = 0UL;
        }

        /* Find best solution */
        u32Min = (uint32_t) - 1;    /* initial u32Min to max value of uint32_t (0xFFFFFFFF) */
        u32MinNR = 1UL;
        u32MinNF = 12UL;

        for (u32NR = 1UL; u32NR <= 32UL; u32NR++)  /* NR = 1~32 since NR = INDIV+1 and INDIV = 0~31 */
        {
            u32Tmp = u32PllSrcClk / u32NR;                      /* FREF = FIN/NR */

            if ((u32Tmp >= FREQ_1MHZ) && (u32Tmp <= FREQ_8MHZ)) /* Constraint 2: 1MHz < FREF < 8MHz. */
            {
                for (u32NF = 12UL; u32NF <= 100UL; u32NF++)     /* NF = 12~255. NF = FBDIV+2 and FBDIV = 0~511 */
                    /* max NF = 100 to avoid calculation overflow */
                {
                    u32Tmp2 = (u32Tmp * u32NF) << 1;                            /* FVCO = FREF*2*NF */

                    if ((u32Tmp2 >= FREQ_120MHZ) && (u32Tmp2 <= FREQ_320MHZ))   /* Constraint 3: 120MHz < FVCO < 320MHz */
                    {
                        u32Tmp3 = (u32Tmp2 > u32PllFreqTmp) ? (u32Tmp2 - u32PllFreqTmp) : (u32PllFreqTmp - u32Tmp2);

                        if (u32Tmp3 < u32Min)
                        {
                            u32Min = u32Tmp3;
                            u32MinNR = u32NR;
                            u32MinNF = u32NF;

                            /* Break when get good results */
                            if (u32Min == 0UL)
                            {
                                break;
                            }
                        }
                    }
                }
            }
        }

        /* Enable and apply new PLL setting. */
        CLK->PLLCTL = u32PllClkSrc |
                      (u32NO << CLK_PLLCTL_OUTDIV_Pos) |
                      ((u32MinNR - 1UL) << CLK_PLLCTL_INDIV_Pos) |
                      ((u32MinNF - 2UL) << CLK_PLLCTL_FBDIV_Pos);

        /* Actual PLL output clock frequency. FOUT = (FIN/NR)*2*NF*(1/NO) */
        u32PllClk = u32PllSrcClk / ((u32NO + 1UL) * u32MinNR) * (u32MinNF << 1);
    }
    else
    {
        if (u32PllClkSrc == CLK_PLLCTL_PLLSRC_HXT)
        {
#if (__HXT == 12000000)
            /* Apply default PLL setting and return */
            CLK->PLLCTL = CLK_PLLCTL_144MHz_HXT;

            /* Actual PLL output clock frequency */
            u32PllClk = FREQ_144MHZ;
#else
            /* No default PLL setting */
            u32PllClk = 0;
#endif
        }
        else
        {
            /* Apply default PLL setting and return */
            CLK->PLLCTL = CLK_PLLCTL_144MHz_HIRC_DIV4;

            /* Actual PLL output clock frequency */
            u32PllClk = FREQ_144MHZ;
        }
    }

    if (u32PllClk != 0UL)
    {
        /* Wait for PLL clock stable */
        (void)CLK_WaitClockReady(CLK_STATUS_PLLSTB_Msk);
    }

    /* Return actual PLL output clock frequency */
    return u32PllClk;
}

/**
  * @brief      Disable PLL
  * @param      None
  * @return     None
  * @details    This function set PLL in Power-down mode. It is skipped if HCLK is selected as PLL. \n
  *             The register write-protection function should be disabled before using this function.
  */
void CLK_DisablePLL(void)
{
    if ((CLK->CLKSEL0 & CLK_CLKSEL0_HCLKSEL_Msk) != CLK_CLKSEL0_HCLKSEL_PLL)
    {
        CLK->PLLCTL |= CLK_PLLCTL_PD_Msk;
    }
}

/**
  * @brief      This function check selected clock source status
  * @param[in]  u32ClkMask is selected clock source. Including :
  *             - \ref CLK_STATUS_HXTSTB_Msk
  *             - \ref CLK_STATUS_LXTSTB_Msk
  *             - \ref CLK_STATUS_HIRCSTB_Msk
  *             - \ref CLK_STATUS_LIRCSTB_Msk
  *             - \ref CLK_STATUS_PLLSTB_Msk
  * @retval     0  clock is not stable
  * @retval     1  clock is stable
  * @details    To wait for clock ready by specified clock source stable flag or timeout (>500ms)
  */
uint32_t CLK_WaitClockReady(uint32_t u32ClkMask)
{
    uint32_t u32TimeOutCnt = SystemCoreClock >> 1; /* 500ms time-out */
    uint32_t u32Ret = 1U;

    while ((CLK->STATUS & u32ClkMask) != u32ClkMask)
    {
        if (--u32TimeOutCnt == 0)
        {
            u32Ret = 0U;
            break;
        }
    }

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
    if (u32ClkSrc == CLK_CLKSEL0_STCLKSEL_HCLK)
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
  *             - \ref CLK_PMUCTL_PDMSEL_SPD0
  *             - \ref CLK_PMUCTL_PDMSEL_SPD1
  * @return     None
  * @details    This function is used to set power-down mode.
  *             The register write-protection function should be disabled before using this function.
  */
void CLK_SetPowerDownMode(uint32_t u32PDMode)
{
    /* WORKAROUND */
    if (u32PDMode == CLK_PMUCTL_PDMSEL_NPD2)
    {
        outp32(CLK_BASE + 0xD4, inp32(CLK_BASE + 0xD4) | BIT2);
    }

    CLK->PMUCTL = (CLK->PMUCTL & ~(CLK_PMUCTL_PDMSEL_Msk)) | u32PDMode;
}

/**
 * @brief      Get power manager wake up source
 *
 * @param[in]   None
 * @return      None
 *
 * @details     This function gets the power manager wake up source.
 */
uint32_t CLK_GetPMUWKSrc(void)
{
    return (CLK->PMUSTS);
}

/**
 * @brief       Set specified GPIO as wake up source at Standby Power-down mode
 *
 * @param[in]   u32Port GPIO port. It could be 0~3(GPA~GPD).
 * @param[in]   u32Pin  The pin of specified GPIO port. It could be 0~15.
 * @param[in]   u32TriggerType Wake-up pin trigger type
 *              - \ref CLK_SPDWKPIN0_RISING
 *              - \ref CLK_SPDWKPIN0_FALLING
 *              - \ref CLK_SPDWKPIN1_RISING
 *              - \ref CLK_SPDWKPIN1_FALLING
 * @param[in]   u32DebounceEn Standby Power-down mode wake-up pin de-bounce function
 *              - \ref CLK_SPDWKPIN0_DEBOUNCEEN
 *              - \ref CLK_SPDWKPIN0_DEBOUNCEDIS
 *              - \ref CLK_SPDWKPIN1_DEBOUNCEEN
 *              - \ref CLK_SPDWKPIN1_DEBOUNCEDIS
 * @return      None
 *
 * @details     This function is used to set specified GPIO as wake up source at Standby Power-down mode.
 */
void CLK_EnableSPDWKPin(uint32_t u32Port, uint32_t u32Pin, uint32_t u32TriggerType, uint32_t u32DebounceEn)
{
    uint32_t u32tmpAddr = 0UL;
    uint32_t u32tmpVal = 0UL;

    /* GPx Stand-by Power-down Wake-up Pin Select */
    u32tmpAddr = (uint32_t)&CLK->PASWKCTL;
    u32tmpAddr += (0x4UL * u32Port);

    u32tmpVal = inpw((uint32_t *)u32tmpAddr);

    if (u32TriggerType & (CLK_SPDWKPIN0_RISING | CLK_SPDWKPIN0_FALLING))
    {
        u32tmpVal = (u32tmpVal & ~(CLK_PASWKCTL_WKPSEL0_Msk | CLK_PASWKCTL_PRWKEN0_Msk | CLK_PASWKCTL_PFWKEN0_Msk | CLK_PASWKCTL_DBEN0_Msk | CLK_PASWKCTL_WKEN0_Msk)) |
                    (u32Pin << CLK_PASWKCTL_WKPSEL0_Pos) | u32TriggerType | u32DebounceEn | CLK_SPDWKPIN0_ENABLE;
    }

    if (u32TriggerType & (CLK_SPDWKPIN1_RISING | CLK_SPDWKPIN1_FALLING))
    {
        u32tmpVal = (u32tmpVal & ~(CLK_PASWKCTL_WKPSEL1_Msk | CLK_PASWKCTL_PRWKEN1_Msk | CLK_PASWKCTL_PFWKEN1_Msk | CLK_PASWKCTL_DBEN1_Msk | CLK_PASWKCTL_WKEN1_Msk)) |
                    (u32Pin << CLK_PASWKCTL_WKPSEL1_Pos) | u32TriggerType | u32DebounceEn | CLK_SPDWKPIN1_ENABLE;
    }

    outpw((uint32_t *)u32tmpAddr, u32tmpVal);
}

/**
  * @brief      Get PLL clock frequency
  * @param      None
  * @return     PLL frequency
  * @details    This function gets the PLL frequency. The frequency unit is Hz.
  */
__NONSECURE_ENTRY_WEAK
uint32_t CLK_GetPLLClockFreq(void)
{
    return GetPLLClockFreq();
}

/**
  * @brief      Get selected module clock source
  * @param[in]  u32ModuleIdx is module index.
*             - \ref USBH_MODULE
*             - \ref USBD_MODULE
*             - \ref EADC0_MODULE
*             - \ref EADC1_MODULE
*             - \ref CANFD0_MODULE
*             - \ref CANFD1_MODULE
*             - \ref WDT0_MODULE
*             - \ref WDT1_MODULE
*             - \ref CLKO_MODULE
*             - \ref TMR0_MODULE
*             - \ref TMR1_MODULE
*             - \ref TMR2_MODULE
*             - \ref TMR3_MODULE
*             - \ref UART0_MODULE
*             - \ref UART1_MODULE
*             - \ref UART2_MODULE
*             - \ref UART3_MODULE
*             - \ref UART4_MODULE
*             - \ref UART5_MODULE
*             - \ref UART6_MODULE
*             - \ref UART7_MODULE
*             - \ref UART8_MODULE
*             - \ref UART9_MODULE
*             - \ref WWDT0_MODULE
*             - \ref WWDT1_MODULE
*             - \ref QSPI0_MODULE
*             - \ref SPI0_MODULE
*             - \ref SPI1_MODULE
*             - \ref PWM0_MODULE
*             - \ref PWM1_MODULE
*             - \ref BPWM0_MODULE
*             - \ref BPWM1_MODULE
*             - \ref I3C0_MODULE
*             - \ref RTC_MODULE
  * @return     Selected module clock source setting
  * @details    This function gets the selected module clock source.
  */
__NONSECURE_ENTRY_WEAK
uint32_t CLK_GetModuleClockSource(uint32_t u32ModuleIdx)
{
    uint32_t u32TmpVal = 0UL;
    uint32_t u32RTCCKEN = CLK->APBCLK0 & CLK_APBCLK0_RTCCKEN_Msk;

    /* Get clock source selection setting */
    if (u32ModuleIdx == RTC_MODULE)
    {
        if (u32RTCCKEN == 0UL)
        {
            /* Enable RTC clock to get LXT clock source */
            CLK->APBCLK0 |= CLK_APBCLK0_RTCCKEN_Msk;
        }

        u32TmpVal = ((RTC->LXTCTL & RTC_LXTCTL_RTCCKSEL_Msk) >> RTC_LXTCTL_RTCCKSEL_Pos);

        if (u32RTCCKEN == 0UL)
        {
            /* Disable RTC clock if it is disabled before */
            CLK->APBCLK0 &= (~CLK_APBCLK0_RTCCKEN_Msk);
        }
    }
    else if (MODULE_CLKSEL_Msk(u32ModuleIdx) != MODULE_NoMsk)
    {
        const uint32_t au32SelTbl[4] = {0x0UL, 0x4UL, 0x8UL, 0xCUL}; /* CLK_CLKSEL0~3 */
        uint32_t u32TmpAddr = 0UL;

        /* Get clock select control register address */
        u32TmpAddr = (uint32_t)&CLK->CLKSEL0 + (au32SelTbl[MODULE_CLKSEL(u32ModuleIdx)]);

        /* Get clock source selection setting */
        u32TmpVal = ((inpw((uint32_t *)u32TmpAddr) & (MODULE_CLKSEL_Msk(u32ModuleIdx) << MODULE_CLKSEL_Pos(u32ModuleIdx))) >> MODULE_CLKSEL_Pos(u32ModuleIdx));
    }
    else
    {
        return MODULE_NoMsk;
    }

    return u32TmpVal;

}

/**
  * @brief      Get selected module clock divider number
  * @param[in]  u32ModuleIdx is module index.
*             - \ref USBH_MODULE
*             - \ref USBD_MODULE
*             - \ref EADC0_MODULE
*             - \ref EADC1_MODULE
*             - \ref CANFD0_MODULE
*             - \ref CANFD1_MODULE
*             - \ref UART0_MODULE
*             - \ref UART1_MODULE
*             - \ref UART2_MODULE
*             - \ref UART3_MODULE
*             - \ref UART4_MODULE
*             - \ref UART5_MODULE
*             - \ref UART6_MODULE
*             - \ref UART7_MODULE
*             - \ref UART8_MODULE
*             - \ref UART9_MODULE
  * @return     Selected module clock divider number setting
  * @details    This function gets the selected module clock divider number.
  */
__NONSECURE_ENTRY_WEAK
uint32_t CLK_GetModuleClockDivider(uint32_t u32ModuleIdx)
{
    uint32_t u32DivVal = 0UL;

    switch (u32ModuleIdx)
    {
        /* For 8 bits divider */
        case EADC0_MODULE:
            u32DivVal = (CLK->CLKDIV0 & CLK_CLKDIV0_EADC0DIV_Msk) >> CLK_CLKDIV0_EADC0DIV_Pos;
            break;

        case EADC1_MODULE:
            u32DivVal = (CLK->CLKDIV2 & CLK_CLKDIV2_EADC1DIV_Msk) >> CLK_CLKDIV2_EADC1DIV_Pos;
            break;

        /* Others */
        default:
        {
            const uint32_t au32DivTbl[3] = {0x0UL, 0x4UL, 0x8UL}; /* CLK_CLKDIV0~2 */
            uint32_t u32DivAddr = 0UL;

            /* Get clock divider control register address */
            u32DivAddr = (uint32_t)&CLK->CLKDIV0 + (au32DivTbl[MODULE_CLKDIV(u32ModuleIdx)]);
            /* Get clock divider number setting */
            u32DivVal = ((inpw((uint32_t *)u32DivAddr) & (MODULE_CLKDIV_Msk(u32ModuleIdx) << MODULE_CLKDIV_Pos(u32ModuleIdx))) >> MODULE_CLKDIV_Pos(u32ModuleIdx));
        }
        break;
    }

    return u32DivVal;
}

/**
  * @brief      This function execute delay function.
  * @param[in]  us  Delay time. The Max value is 2^24 / CPU Clock(MHz). Ex:
  *                             144MHz => 116508, 100MHz => 167772...
  * @return     None
  * @details    Use the SysTick to generate the delay time and the unit is in us.
  *             The SysTick clock source is from HCLK, i.e the same as system core clock.
  *             User can use SystemCoreClockUpdate() to calculate CyclesPerUs automatically before using this function.
  */
void CLK_SysTickDelay(uint32_t us)
{
    uint32_t u32TargetValue;
    uint32_t u32TargetInt;
    uint32_t u32TargetRem;
    uint32_t u32DelayCycles;
    uint32_t SysTickValue;

    /* Systick function is using and clock source is core clock */
    if ((SysTick->CTRL & (SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk)) == (SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk))
    {
        u32DelayCycles = us * CyclesPerUs;

        if (u32DelayCycles > SysTick->LOAD)
        {
            /* Calculate re-load cycles with current SysTick->LOAD */
            u32TargetInt = u32DelayCycles / SysTick->LOAD;

            /* Calculate remainder delay cycles */
            u32TargetRem = u32DelayCycles % SysTick->LOAD;
        }
        else
        {
            u32TargetInt = 0;
            u32TargetRem = u32DelayCycles;
        }

        SysTickValue = SysTick->VAL;

        if (u32TargetRem > SysTickValue)
        {
            u32TargetValue = SysTick->LOAD;
            u32TargetValue = u32TargetValue - (u32TargetRem - SysTickValue);
            u32TargetInt++;
        }
        else
        {
            u32TargetValue = SysTickValue - u32TargetRem;
        }

        while (u32TargetInt > 0)
        {
            /* Wait for the countdown to reach zero */
            while ((SysTick->CTRL & SysTick_CTRL_COUNTFLAG_Msk) == 0UL)
            {
            }

            u32TargetInt--;
        }

        /* Wait for the countdown to reach the target value */
        while (SysTick->VAL > u32TargetValue)
        {
            /* Current value has been reloaded */
            if (SysTick->CTRL & SysTick_CTRL_COUNTFLAG_Msk)
                break;
        }
    }
    else
    {
        SysTick->LOAD = us * CyclesPerUs;
        SysTick->VAL  = 0x0UL;
        SysTick->CTRL = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk;

        /* Waiting for down-count to zero */
        while ((SysTick->CTRL & SysTick_CTRL_COUNTFLAG_Msk) == 0UL)
        {
        }

        /* Disable SysTick counter */
        SysTick->CTRL = 0UL;
    }
}

/**
  * @brief      This function execute long delay function.
  * @param[in]  us  Delay time.
  * @return     None
  * @details    Use the SysTick to generate the long delay time and the UNIT is in us.
  *             The SysTick clock source is from HCLK, i.e the same as system core clock.
  *             User can use SystemCoreClockUpdate() to calculate CyclesPerUs automatically before using this function.
  */
void CLK_SysTickLongDelay(uint32_t us)
{
    uint32_t u32Delay;
    uint32_t u32usTemp = us;

    /* It should <= 65536us for each delay loop */
    u32Delay = 65536UL;

    do
    {
        if (u32usTemp > u32Delay)
        {
            u32usTemp -= u32Delay;
        }
        else
        {
            u32Delay = u32usTemp;
            u32usTemp = 0UL;
        }

        SysTick->LOAD = u32Delay * CyclesPerUs;
        SysTick->VAL  = (0x0UL);
        SysTick->CTRL = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk;

        /* Waiting for down-count to zero */
        while ((SysTick->CTRL & SysTick_CTRL_COUNTFLAG_Msk) == 0UL);

        /* Disable SysTick counter */
        SysTick->CTRL = 0UL;
    } while (u32usTemp > 0UL);
}

/** @} end of group CLK_EXPORTED_FUNCTIONS */

/** @} end of group CLK_Driver */

/** @} end of group Standard_Driver */
