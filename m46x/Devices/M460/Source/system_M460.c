/**************************************************************************//**
 * @file     system_m460.c
 * @version  V3.000
 * @brief    CMSIS Cortex-M4 Core Peripheral Access Layer Source File for M460
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2021 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

#include "NuMicro.h"


/*----------------------------------------------------------------------------
  DEFINES
 *----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
  Clock Variable definitions
 *----------------------------------------------------------------------------*/
uint32_t SystemCoreClock  = __SYSTEM_CLOCK;    /*!< System Clock Frequency (Core Clock)*/
uint32_t CyclesPerUs      = (__HSI / 1000000UL); /* Cycles per micro second */
uint32_t PllClock         = __HSI;             /*!< PLL Output Clock Frequency         */
uint32_t gau32ClkSrcTbl[] = {__HXT, __LXT, 0UL, __LIRC, 0UL, 0UL, 0UL, __HIRC};

/*----------------------------------------------------------------------------
  Clock functions
 *----------------------------------------------------------------------------*/
void SystemCoreClockUpdate (void)            /* Get Core Clock Frequency      */
{
    uint32_t u32Freq, u32ClkSrc;
    uint32_t u32HclkDiv;

    /* Update PLL Clock */
    PllClock = CLK_GetPLLClockFreq();

    u32ClkSrc = CLK->CLKSEL0 & CLK_CLKSEL0_HCLKSEL_Msk;

    if(u32ClkSrc == CLK_CLKSEL0_HCLKSEL_PLL)
    {
        /* Use PLL clock */
        u32Freq = PllClock;
    }
    else
    {
        /* Use the clock sources directly */
        u32Freq = gau32ClkSrcTbl[u32ClkSrc];
    }

    u32HclkDiv = (CLK->CLKDIV0 & CLK_CLKDIV0_HCLKDIV_Msk) + 1UL;

    /* Update System Core Clock */
    SystemCoreClock = u32Freq / u32HclkDiv;


    //if(SystemCoreClock == 0)
    //    __BKPT(0);

    CyclesPerUs = (SystemCoreClock + 500000UL) / 1000000UL;
}


/**
 * @brief  Initialize the System
 *
 * @param  none
 * @return none
 */
void SystemInit (void)
{

    /* Add your system initialize code here.
       Do not use global variables because this function is called before
       reaching pre-main. RW section maybe overwritten afterwards.          */

    /* FPU settings ------------------------------------------------------------*/
#if (__FPU_PRESENT == 1U) && (__FPU_USED == 1U)
    SCB->CPACR |= ((3UL << 10*2) |                 /* set CP10 Full Access */
                   (3UL << 11*2)  );               /* set CP11 Full Access */
#endif

    /* Unlock protected registers */
    SYS_UnlockReg();

    /* Set HCLK switch to be reset by HRESET reset sources */
    outpw(0x40000014, inpw(0x40000014)|BIT7);

    /* Set HXT crystal as INV type */
    CLK->PWRCTL &= ~CLK_PWRCTL_HXTSELTYP_Msk;

#ifdef HBI_ENABLE
    /* Default to Enable HyperRAM */
    CLK->AHBCLK0 |= CLK_AHBCLK0_HBICKEN_Msk;

    /* Set multi-function pins for HBI */
#if HBI_ENABLE == 1

    SET_HBI_D0_PG11();
    SET_HBI_D1_PG12();
    SET_HBI_D2_PC0();
    SET_HBI_D3_PG10();
    SET_HBI_D4_PG9();
    SET_HBI_D5_PG13();
    SET_HBI_D6_PG14();
    SET_HBI_D7_PG15();

    SET_HBI_RWDS_PC1();
    SET_HBI_nRESET_PC2();
    SET_HBI_nCS_PC3();
    SET_HBI_CK_PC4();
    SET_HBI_nCK_PC5();

    /* Slew rate control. PC0-5, PG9-15 */
    CLK->AHBCLK0 |= CLK_AHBCLK0_GPCCKEN_Msk | CLK_AHBCLK0_GPGCKEN_Msk;
    
    PC->SLEWCTL = 0xaaa;
    PG->SLEWCTL = 0xaaa80000;

#elif HBI_ENABLE == 2

    SET_HBI_D0_PJ6();
    SET_HBI_D1_PJ5();
    SET_HBI_D2_PJ4();
    SET_HBI_D3_PJ3();
    SET_HBI_D4_PH15();
    SET_HBI_D5_PD7();
    SET_HBI_D6_PD6();
    SET_HBI_D7_PD5();

    SET_HBI_RWDS_PH14();
    SET_HBI_nRESET_PJ2();
    SET_HBI_nCS_PJ7();
    SET_HBI_CK_PH13();
    SET_HBI_nCK_PH12();

    /* Slew rate control. PD5-7, PJ2-7, PH12-15 */
    CLK->AHBCLK0 |= CLK_AHBCLK0_GPDCKEN_Msk | CLK_AHBCLK0_GPHCKEN_Msk;
    CLK->AHBCLK1 |= CLK_AHBCLK1_GPJCKEN_Msk;
    
    PD->SLEWCTL = 0xa800;
    PJ->SLEWCTL = 0xaaa0;
    PH->SLEWCTL = 0xaa000000;

#else
# error "HBI_ENABLE must be 1 or 2 to set relative MFP"
#endif
#endif



    /* Lock protected registers */
    SYS_LockReg();

}
