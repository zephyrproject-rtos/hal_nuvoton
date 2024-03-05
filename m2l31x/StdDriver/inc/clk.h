/**************************************************************************//**
 * @file     clk.h
 * @version  V1.0
 * @brief    M2L31 series CLK driver header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/
#ifndef __CLK_H__
#define __CLK_H__

#ifdef __cplusplus
extern "C"
{
#endif


/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup CLK_Driver CLK Driver
  @{
*/

/** @addtogroup CLK_EXPORTED_CONSTANTS CLK Exported Constants
  @{
*/

#define FREQ_1MHZ            1000000UL  /*!< 1 MHz \hideinitializer */
#define FREQ_2MHZ            2000000UL  /*!< 2 MHz \hideinitializer */
#define FREQ_4MHZ            4000000UL  /*!< 4 MHz \hideinitializer */
#define FREQ_8MHZ            8000000UL  /*!< 8 MHz \hideinitializer */
#define FREQ_25MHZ          25000000UL  /*!< 25 MHz \hideinitializer */
#define FREQ_36MHZ          36000000UL  /*!< 36 MHz \hideinitializer */
#define FREQ_48MHZ          48000000UL  /*!< 48 MHz \hideinitializer */
#define FREQ_50MHZ          50000000UL  /*!< 50 MHz \hideinitializer */
#define FREQ_64MHZ          64000000UL  /*!< 64 MHz \hideinitializer */
#define FREQ_72MHZ          72000000UL  /*!< 72 MHz \hideinitializer */
#define FREQ_80MHZ          80000000UL  /*!< 80 MHz \hideinitializer */
#define FREQ_96MHZ          96000000UL  /*!< 96 MHz \hideinitializer */
#define FREQ_100MHZ        100000000UL  /*!< 100 MHz \hideinitializer */
#define FREQ_120MHZ        120000000UL  /*!< 120 MHz \hideinitializer */
#define FREQ_125MHZ        125000000UL  /*!< 125 MHz \hideinitializer */
#define FREQ_144MHZ        144000000UL  /*!< 144 MHz \hideinitializer */
#define FREQ_160MHZ        160000000UL  /*!< 160 MHz \hideinitializer */
#define FREQ_192MHZ        192000000UL  /*!< 192 MHz \hideinitializer */
#define FREQ_200MHZ        200000000UL  /*!< 200 MHz \hideinitializer */
#define FREQ_240MHZ        240000000UL  /*!< 240 MHz \hideinitializer */
#define FREQ_250MHZ        250000000UL  /*!< 250 MHz \hideinitializer */
#define FREQ_492MHZ        492000000UL  /*!< 492 MHz \hideinitializer */
#define FREQ_500MHZ        500000000UL  /*!< 500 MHz \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  PWRCTL constant definitions.  (Write-protection)                                                      */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_PWRCTL_MIRCFSEL_1M          (0x0UL << CLK_PWRCTL_MIRCFSEL_Pos)          /*!< Select MIRC clock to 1 MHz \hideinitializer */
#define CLK_PWRCTL_MIRCFSEL_2M          (0x1UL << CLK_PWRCTL_MIRCFSEL_Pos)          /*!< Select MIRC clock to 2 MHz \hideinitializer */
#define CLK_PWRCTL_MIRCFSEL_4M          (0x2UL << CLK_PWRCTL_MIRCFSEL_Pos)          /*!< Select MIRC clock to 4 MHz \hideinitializer */
#define CLK_PWRCTL_MIRCFSEL_8M          (0x3UL << CLK_PWRCTL_MIRCFSEL_Pos)          /*!< Select MIRC clock to 8 MHz \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  CLKSEL0 constant definitions.  (Write-protection)                                                      */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKSEL0_HCLKSEL_HXT         (0x0UL << CLK_CLKSEL0_HCLK0SEL_Pos)         /*!< Select HCLK0 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL0_HCLKSEL_LXT         (0x1UL << CLK_CLKSEL0_HCLK0SEL_Pos)         /*!< Select HCLK0 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL0_HCLKSEL_PLL         (0x2UL << CLK_CLKSEL0_HCLK0SEL_Pos)         /*!< Select HCLK0 clock source from PLL \hideinitializer */
#define CLK_CLKSEL0_HCLKSEL_LIRC        (0x3UL << CLK_CLKSEL0_HCLK0SEL_Pos)         /*!< Select HCLK0 clock source from low speed oscillator \hideinitializer */
#define CLK_CLKSEL0_HCLKSEL_MIRC        (0x5UL << CLK_CLKSEL0_HCLK0SEL_Pos)         /*!< Select HCLK0 clock source from middle speed oscillator \hideinitializer */
#define CLK_CLKSEL0_HCLKSEL_HIRC48M     (0x6UL << CLK_CLKSEL0_HCLK0SEL_Pos)         /*!< Select HCLK0 clock source from 48 MHz high speed oscillator \hideinitializer */
#define CLK_CLKSEL0_HCLKSEL_HIRC        (0x7UL << CLK_CLKSEL0_HCLK0SEL_Pos)         /*!< Select HCLK0 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL0_HCLK0SEL_HXT        (0x0UL << CLK_CLKSEL0_HCLK0SEL_Pos)         /*!< Select HCLK0 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL0_HCLK0SEL_LXT        (0x1UL << CLK_CLKSEL0_HCLK0SEL_Pos)         /*!< Select HCLK0 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL0_HCLK0SEL_PLL        (0x2UL << CLK_CLKSEL0_HCLK0SEL_Pos)         /*!< Select HCLK0 clock source from PLL \hideinitializer */
#define CLK_CLKSEL0_HCLK0SEL_LIRC       (0x3UL << CLK_CLKSEL0_HCLK0SEL_Pos)         /*!< Select HCLK0 clock source from low speed oscillator \hideinitializer */
#define CLK_CLKSEL0_HCLK0SEL_MIRC       (0x5UL << CLK_CLKSEL0_HCLK0SEL_Pos)         /*!< Select HCLK0 clock source from middle speed oscillator \hideinitializer */
#define CLK_CLKSEL0_HCLK0SEL_HIRC48M    (0x6UL << CLK_CLKSEL0_HCLK0SEL_Pos)         /*!< Select HCLK0 clock source from 48 MHz high speed oscillator \hideinitializer */
#define CLK_CLKSEL0_HCLK0SEL_HIRC       (0x7UL << CLK_CLKSEL0_HCLK0SEL_Pos)         /*!< Select HCLK0 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL0_STCLKSEL_HXT        (0x0UL << CLK_CLKSEL0_STCLKSEL_Pos)         /*!< Select SysTick clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL0_STCLKSEL_LXT        (0x1UL << CLK_CLKSEL0_STCLKSEL_Pos)         /*!< Select SysTick clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL0_STCLKSEL_HXT_DIV2   (0x2UL << CLK_CLKSEL0_STCLKSEL_Pos)         /*!< Select SysTick clock source from HXT/2 \hideinitializer */
#define CLK_CLKSEL0_STCLKSEL_HCLK_DIV2  (0x3UL << CLK_CLKSEL0_STCLKSEL_Pos)         /*!< Select SysTick clock source from HCLK/2 \hideinitializer */
#define CLK_CLKSEL0_STCLKSEL_HIRC_DIV2  (0x7UL << CLK_CLKSEL0_STCLKSEL_Pos)         /*!< Select SysTick clock source from HIRC/2 \hideinitializer */
#define CLK_CLKSEL0_STCLKSEL_HCLK       (0x1UL << SysTick_CTRL_CLKSOURCE_Pos)       /*!< Select SysTick clock source from HCLK0 \hideinitializer */
#define CLK_CLKSEL0_STCLKSEL_HCLK0      (0x1UL << SysTick_CTRL_CLKSOURCE_Pos)       /*!< Select SysTick clock source from HCLK0 \hideinitializer */

#define CLK_CLKSEL0_HCLK1SEL_HIRC       (0x0UL << CLK_CLKSEL0_HCLK1SEL_Pos)         /*!< Select HCLK1 clock source from high speed oscillator \hideinitializer */
#define CLK_CLKSEL0_HCLK1SEL_MIRC       (0x1UL << CLK_CLKSEL0_HCLK1SEL_Pos)         /*!< Select HCLK1 clock source from middle speed oscillator \hideinitializer */
#define CLK_CLKSEL0_HCLK1SEL_LXT        (0x2UL << CLK_CLKSEL0_HCLK1SEL_Pos)         /*!< Select HCLK1 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL0_HCLK1SEL_LIRC       (0x3UL << CLK_CLKSEL0_HCLK1SEL_Pos)         /*!< Select HCLK1 clock source from low speed oscillator \hideinitializer */
#define CLK_CLKSEL0_HCLK1SEL_HIRC48M_DIV2 (0x4UL << CLK_CLKSEL0_HCLK1SEL_Pos)       /*!< Select HCLK1 clock source from 48 MHz high speed oscillator / 2 \hideinitializer */

#define CLK_CLKSEL0_USBSEL_HIRC48M      (0x0UL << CLK_CLKSEL0_USBSEL_Pos)           /*!< Select USB clock source from 48 MHz high speed oscillator \hideinitializer */
#define CLK_CLKSEL0_USBSEL_PLL          (0x1UL << CLK_CLKSEL0_USBSEL_Pos)           /*!< Select USB clock source from PLL \hideinitializer */

#define CLK_CLKSEL0_EADC0SEL_PLL        (0x1UL << CLK_CLKSEL0_EADC0SEL_Pos)         /*!< Select EADC0 clock source from PLL \hideinitializer */
#define CLK_CLKSEL0_EADC0SEL_HCLK       (0x2UL << CLK_CLKSEL0_EADC0SEL_Pos)         /*!< Select EADC0 clock source from HCLK0 \hideinitializer */
#define CLK_CLKSEL0_EADC0SEL_HCLK0      (0x2UL << CLK_CLKSEL0_EADC0SEL_Pos)         /*!< Select EADC0 clock source from HCLK0 \hideinitializer */
#define CLK_CLKSEL0_EADC0SEL_HIRC       (0x3UL << CLK_CLKSEL0_EADC0SEL_Pos)         /*!< Select EADC0 clock source from HIRC \hideinitializer */

#define CLK_CLKSEL0_CANFD0SEL_HXT       (0x0UL << CLK_CLKSEL0_CANFD0SEL_Pos)        /*!< Select CANFD0 clock source from HXT \hideinitializer */
#define CLK_CLKSEL0_CANFD0SEL_HIRC48M   (0x1UL << CLK_CLKSEL0_CANFD0SEL_Pos)        /*!< Select CANFD0 clock source from 48 MHz high speed oscillator \hideinitializer */
#define CLK_CLKSEL0_CANFD0SEL_HCLK      (0x2UL << CLK_CLKSEL0_CANFD0SEL_Pos)        /*!< Select CANFD0 clock source from HCLK0 \hideinitializer */
#define CLK_CLKSEL0_CANFD0SEL_HCLK0     (0x2UL << CLK_CLKSEL0_CANFD0SEL_Pos)        /*!< Select CANFD0 clock source from HCLK0 \hideinitializer */
#define CLK_CLKSEL0_CANFD0SEL_HIRC      (0x3UL << CLK_CLKSEL0_CANFD0SEL_Pos)        /*!< Select CANFD0 clock source from HIRC \hideinitializer */

#define CLK_CLKSEL0_CANFD1SEL_HXT       (0x0UL << CLK_CLKSEL0_CANFD1SEL_Pos)        /*!< Select CANFD1 clock source from HXT \hideinitializer */
#define CLK_CLKSEL0_CANFD1SEL_HIRC48M   (0x1UL << CLK_CLKSEL0_CANFD1SEL_Pos)        /*!< Select CANFD1 clock source from 48 MHz high speed oscillator \hideinitializer */
#define CLK_CLKSEL0_CANFD1SEL_HCLK      (0x2UL << CLK_CLKSEL0_CANFD1SEL_Pos)        /*!< Select CANFD1 clock source from HCLK0 \hideinitializer */
#define CLK_CLKSEL0_CANFD1SEL_HCLK0     (0x2UL << CLK_CLKSEL0_CANFD1SEL_Pos)        /*!< Select CANFD1 clock source from HCLK0 \hideinitializer */
#define CLK_CLKSEL0_CANFD1SEL_HIRC      (0x3UL << CLK_CLKSEL0_CANFD1SEL_Pos)        /*!< Select CANFD1 clock source from HIRC \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  CLKSEL1 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKSEL1_CLKOSEL_HXT         (0x0UL << CLK_CLKSEL1_CLKOSEL_Pos)          /*!< Select CLKO clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL1_CLKOSEL_LXT         (0x1UL << CLK_CLKSEL1_CLKOSEL_Pos)          /*!< Select CLKO clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL1_CLKOSEL_HCLK        (0x2UL << CLK_CLKSEL1_CLKOSEL_Pos)          /*!< Select CLKO clock source from HCLK0 \hideinitializer */
#define CLK_CLKSEL1_CLKOSEL_HCLK0       (0x2UL << CLK_CLKSEL1_CLKOSEL_Pos)          /*!< Select CLKO clock source from HCLK0 \hideinitializer */
#define CLK_CLKSEL1_CLKOSEL_HIRC        (0x3UL << CLK_CLKSEL1_CLKOSEL_Pos)          /*!< Select CLKO clock source from high speed oscillator \hideinitializer */
#define CLK_CLKSEL1_CLKOSEL_LIRC        (0x4UL << CLK_CLKSEL1_CLKOSEL_Pos)          /*!< Select CLKO clock source from low speed oscillator \hideinitializer */
#define CLK_CLKSEL1_CLKOSEL_HIRC48M     (0x5UL << CLK_CLKSEL1_CLKOSEL_Pos)          /*!< Select CLKO clock source from 48 MHz high speed oscillator \hideinitializer */
#define CLK_CLKSEL1_CLKOSEL_PLL         (0x6UL << CLK_CLKSEL1_CLKOSEL_Pos)          /*!< Select CLKO clock source from PLL \hideinitializer */
#define CLK_CLKSEL1_CLKOSEL_MIRC        (0x7UL << CLK_CLKSEL1_CLKOSEL_Pos)          /*!< Select CLKO clock source from middle speed oscillator \hideinitializer */

#define CLK_CLKSEL1_TMR0SEL_HXT         (0x0UL << CLK_CLKSEL1_TMR0SEL_Pos)          /*!< Select TMR0 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL1_TMR0SEL_LXT         (0x1UL << CLK_CLKSEL1_TMR0SEL_Pos)          /*!< Select TMR0 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL1_TMR0SEL_PCLK0       (0x2UL << CLK_CLKSEL1_TMR0SEL_Pos)          /*!< Select TMR0 clock source from PCLK0 \hideinitializer */
#define CLK_CLKSEL1_TMR0SEL_EXT         (0x3UL << CLK_CLKSEL1_TMR0SEL_Pos)          /*!< Select TMR0 clock source from external trigger \hideinitializer */
#define CLK_CLKSEL1_TMR0SEL_LIRC        (0x5UL << CLK_CLKSEL1_TMR0SEL_Pos)          /*!< Select TMR0 clock source from low speed oscillator \hideinitializer */
#define CLK_CLKSEL1_TMR0SEL_HIRC        (0x7UL << CLK_CLKSEL1_TMR0SEL_Pos)          /*!< Select TMR0 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL1_TMR1SEL_HXT         (0x0UL << CLK_CLKSEL1_TMR1SEL_Pos)          /*!< Select TMR1 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL1_TMR1SEL_LXT         (0x1UL << CLK_CLKSEL1_TMR1SEL_Pos)          /*!< Select TMR1 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL1_TMR1SEL_PCLK0       (0x2UL << CLK_CLKSEL1_TMR1SEL_Pos)          /*!< Select TMR1 clock source from PCLK0 \hideinitializer */
#define CLK_CLKSEL1_TMR1SEL_EXT         (0x3UL << CLK_CLKSEL1_TMR1SEL_Pos)          /*!< Select TMR1 clock source from external trigger \hideinitializer */
#define CLK_CLKSEL1_TMR1SEL_LIRC        (0x5UL << CLK_CLKSEL1_TMR1SEL_Pos)          /*!< Select TMR1 clock source from low speed oscillator \hideinitializer */
#define CLK_CLKSEL1_TMR1SEL_HIRC        (0x7UL << CLK_CLKSEL1_TMR1SEL_Pos)          /*!< Select TMR1 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL1_TMR2SEL_HXT         (0x0UL << CLK_CLKSEL1_TMR2SEL_Pos)          /*!< Select TMR2 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL1_TMR2SEL_LXT         (0x1UL << CLK_CLKSEL1_TMR2SEL_Pos)          /*!< Select TMR2 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL1_TMR2SEL_PCLK1       (0x2UL << CLK_CLKSEL1_TMR2SEL_Pos)          /*!< Select TMR2 clock source from PCLK1 \hideinitializer */
#define CLK_CLKSEL1_TMR2SEL_EXT         (0x3UL << CLK_CLKSEL1_TMR2SEL_Pos)          /*!< Select TMR2 clock source from external trigger \hideinitializer */
#define CLK_CLKSEL1_TMR2SEL_LIRC        (0x5UL << CLK_CLKSEL1_TMR2SEL_Pos)          /*!< Select TMR2 clock source from low speed oscillator \hideinitializer */
#define CLK_CLKSEL1_TMR2SEL_HIRC        (0x7UL << CLK_CLKSEL1_TMR2SEL_Pos)          /*!< Select TMR2 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL1_TMR3SEL_HXT         (0x0UL << CLK_CLKSEL1_TMR3SEL_Pos)          /*!< Select TMR3 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL1_TMR3SEL_LXT         (0x1UL << CLK_CLKSEL1_TMR3SEL_Pos)          /*!< Select TMR3 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL1_TMR3SEL_PCLK1       (0x2UL << CLK_CLKSEL1_TMR3SEL_Pos)          /*!< Select TMR3 clock source from PCLK1 \hideinitializer */
#define CLK_CLKSEL1_TMR3SEL_EXT         (0x3UL << CLK_CLKSEL1_TMR3SEL_Pos)          /*!< Select TMR3 clock source from external trigger \hideinitializer */
#define CLK_CLKSEL1_TMR3SEL_LIRC        (0x5UL << CLK_CLKSEL1_TMR3SEL_Pos)          /*!< Select TMR3 clock source from low speed oscillator \hideinitializer */
#define CLK_CLKSEL1_TMR3SEL_HIRC        (0x7UL << CLK_CLKSEL1_TMR3SEL_Pos)          /*!< Select TMR3 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL1_WWDTSEL_HCLK_DIV2048  (0x2UL << CLK_CLKSEL1_WWDTSEL_Pos)         /*!< Select WWDT clock source from HCLK0/2048 \hideinitializer */
#define CLK_CLKSEL1_WWDTSEL_HCLK0_DIV2048 (0x2UL << CLK_CLKSEL1_WWDTSEL_Pos)         /*!< Select WWDT clock source from HCLK0/2048 \hideinitializer */
#define CLK_CLKSEL1_WWDTSEL_LIRC        (0x3UL << CLK_CLKSEL1_WWDTSEL_Pos)          /*!< Select WWDT clock source from low speed oscillator \hideinitializer */


/*---------------------------------------------------------------------------------------------------------*/
/*  CLKSEL2 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKSEL2_EPWM0SEL_HCLK       (0x0UL << CLK_CLKSEL2_EPWM0SEL_Pos)         /*!< Select EPWM0 clock source from HCLK0 \hideinitializer */
#define CLK_CLKSEL2_EPWM0SEL_HCLK0      (0x0UL << CLK_CLKSEL2_EPWM0SEL_Pos)         /*!< Select EPWM0 clock source from HCLK0 \hideinitializer */
#define CLK_CLKSEL2_EPWM0SEL_PCLK0      (0x1UL << CLK_CLKSEL2_EPWM0SEL_Pos)         /*!< Select EPWM0 clock source from PCLK0 \hideinitializer */

#define CLK_CLKSEL2_EPWM1SEL_HCLK       (0x0UL << CLK_CLKSEL2_EPWM1SEL_Pos)         /*!< Select EPWM1 clock source from HCLK0 \hideinitializer */
#define CLK_CLKSEL2_EPWM1SEL_HCLK0      (0x0UL << CLK_CLKSEL2_EPWM1SEL_Pos)         /*!< Select EPWM1 clock source from HCLK0 \hideinitializer */
#define CLK_CLKSEL2_EPWM1SEL_PCLK1      (0x1UL << CLK_CLKSEL2_EPWM1SEL_Pos)         /*!< Select EPWM1 clock source from PCLK1 \hideinitializer */

#define CLK_CLKSEL2_QSPI0SEL_HXT        (0x0UL << CLK_CLKSEL2_QSPI0SEL_Pos)         /*!< Select QSPI0 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL2_QSPI0SEL_PLL        (0x1UL << CLK_CLKSEL2_QSPI0SEL_Pos)         /*!< Select QSPI0 clock source from PLL \hideinitializer */
#define CLK_CLKSEL2_QSPI0SEL_PCLK0      (0x2UL << CLK_CLKSEL2_QSPI0SEL_Pos)         /*!< Select QSPI0 clock source from PCLK0 \hideinitializer */
#define CLK_CLKSEL2_QSPI0SEL_HIRC       (0x3UL << CLK_CLKSEL2_QSPI0SEL_Pos)         /*!< Select QSPI0 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL2_SPI0SEL_HXT         (0x0UL << CLK_CLKSEL2_SPI0SEL_Pos)          /*!< Select SPI0 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL2_SPI0SEL_PLL         (0x1UL << CLK_CLKSEL2_SPI0SEL_Pos)          /*!< Select SPI0 clock source from PLL \hideinitializer */
#define CLK_CLKSEL2_SPI0SEL_PCLK1       (0x2UL << CLK_CLKSEL2_SPI0SEL_Pos)          /*!< Select SPI0 clock source from PCLK1 \hideinitializer */
#define CLK_CLKSEL2_SPI0SEL_HIRC        (0x3UL << CLK_CLKSEL2_SPI0SEL_Pos)          /*!< Select SPI0 clock source from high speed oscillator \hideinitializer */
#define CLK_CLKSEL2_SPI0SEL_HIRC48M     (0x4UL << CLK_CLKSEL2_SPI0SEL_Pos)          /*!< Select SPI0 clock source from 48MHz high speed oscillator \hideinitializer */

#define CLK_CLKSEL2_TKSEL_HIRC          (0x0UL << CLK_CLKSEL2_TKSEL_Pos)            /*!< Select TK clock source from HCLK0 \hideinitializer */
#define CLK_CLKSEL2_TKSEL_MIRC          (0x1UL << CLK_CLKSEL2_TKSEL_Pos)            /*!< Select TK clock source from PCLK0 \hideinitializer */

#define CLK_CLKSEL2_SPI1SEL_HXT         (0x0UL << CLK_CLKSEL2_SPI1SEL_Pos)          /*!< Select SPI1 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL2_SPI1SEL_PLL         (0x1UL << CLK_CLKSEL2_SPI1SEL_Pos)          /*!< Select SPI1 clock source from PLL \hideinitializer */
#define CLK_CLKSEL2_SPI1SEL_PCLK0       (0x2UL << CLK_CLKSEL2_SPI1SEL_Pos)          /*!< Select SPI1 clock source from PCLK0 \hideinitializer */
#define CLK_CLKSEL2_SPI1SEL_HIRC        (0x3UL << CLK_CLKSEL2_SPI1SEL_Pos)          /*!< Select SPI1 clock source from high speed oscillator \hideinitializer */
#define CLK_CLKSEL2_SPI1SEL_HIRC48M     (0x4UL << CLK_CLKSEL2_SPI1SEL_Pos)          /*!< Select SPI1 clock source from 48MHz high speed oscillator \hideinitializer */


/*---------------------------------------------------------------------------------------------------------*/
/*  CLKSEL3 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKSEL3_PWM0SEL_HCLK        (0x0UL << CLK_CLKSEL3_PWM0SEL_Pos)          /*!< Select PWM0 clock source from HCLK0 \hideinitializer */
#define CLK_CLKSEL3_PWM0SEL_HCLK0       (0x0UL << CLK_CLKSEL3_PWM0SEL_Pos)          /*!< Select PWM0 clock source from HCLK0 \hideinitializer */
#define CLK_CLKSEL3_PWM0SEL_PCLK0       (0x1UL << CLK_CLKSEL3_PWM0SEL_Pos)          /*!< Select PWM0 clock source from PCLK0 \hideinitializer */

#define CLK_CLKSEL3_PWM1SEL_HCLK        (0x0UL << CLK_CLKSEL3_PWM1SEL_Pos)          /*!< Select PWM1 clock source from HCLK0 \hideinitializer */
#define CLK_CLKSEL3_PWM1SEL_HCLK0       (0x0UL << CLK_CLKSEL3_PWM1SEL_Pos)          /*!< Select PWM1 clock source from HCLK0 \hideinitializer */
#define CLK_CLKSEL3_PWM1SEL_PCLK1       (0x1UL << CLK_CLKSEL3_PWM1SEL_Pos)          /*!< Select PWM1 clock source from PCLK1 \hideinitializer */

#define CLK_CLKSEL3_SPI2SEL_HXT         (0x0UL << CLK_CLKSEL3_SPI2SEL_Pos)          /*!< Select SPI2 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL3_SPI2SEL_PLL         (0x1UL << CLK_CLKSEL3_SPI2SEL_Pos)          /*!< Select SPI2 clock source from PLL \hideinitializer */
#define CLK_CLKSEL3_SPI2SEL_PCLK1       (0x2UL << CLK_CLKSEL3_SPI2SEL_Pos)          /*!< Select SPI2 clock source from PCLK1 \hideinitializer */
#define CLK_CLKSEL3_SPI2SEL_HIRC        (0x3UL << CLK_CLKSEL3_SPI2SEL_Pos)          /*!< Select SPI2 clock source from high speed oscillator \hideinitializer */
#define CLK_CLKSEL3_SPI2SEL_HIRC48M     (0x4UL << CLK_CLKSEL3_SPI2SEL_Pos)          /*!< Select SPI2 clock source from 48MHz high speed oscillator \hideinitializer */

#define CLK_CLKSEL3_SPI3SEL_HXT         (0x0UL << CLK_CLKSEL3_SPI3SEL_Pos)          /*!< Select SPI3 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL3_SPI3SEL_PLL         (0x1UL << CLK_CLKSEL3_SPI3SEL_Pos)          /*!< Select SPI3 clock source from PLL \hideinitializer */
#define CLK_CLKSEL3_SPI3SEL_PCLK0       (0x2UL << CLK_CLKSEL3_SPI3SEL_Pos)          /*!< Select SPI3 clock source from PCLK0 \hideinitializer */
#define CLK_CLKSEL3_SPI3SEL_HIRC        (0x3UL << CLK_CLKSEL3_SPI3SEL_Pos)          /*!< Select SPI3 clock source from high speed oscillator \hideinitializer */
#define CLK_CLKSEL3_SPI3SEL_HIRC48M     (0x4UL << CLK_CLKSEL3_SPI3SEL_Pos)          /*!< Select SPI3 clock source from 48MHz high speed oscillator \hideinitializer */


/*---------------------------------------------------------------------------------------------------------*/
/*  CLKSEL4 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKSEL4_UART0SEL_HXT        (0x0UL << CLK_CLKSEL4_UART0SEL_Pos)         /*!< Select UART0 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL4_UART0SEL_PLL        (0x1UL << CLK_CLKSEL4_UART0SEL_Pos)         /*!< Select UART0 clock source from PLL \hideinitializer */
#define CLK_CLKSEL4_UART0SEL_LXT        (0x2UL << CLK_CLKSEL4_UART0SEL_Pos)         /*!< Select UART0 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL4_UART0SEL_HIRC       (0x3UL << CLK_CLKSEL4_UART0SEL_Pos)         /*!< Select UART0 clock source from high speed oscillator \hideinitializer */
#define CLK_CLKSEL4_UART0SEL_MIRC       (0x4UL << CLK_CLKSEL4_UART0SEL_Pos)         /*!< Select UART0 clock source from middle speed oscillator \hideinitializer */
#define CLK_CLKSEL4_UART0SEL_HIRC48M    (0x5UL << CLK_CLKSEL4_UART0SEL_Pos)         /*!< Select UART0 clock source from 48MHz high speed oscillator \hideinitializer */

#define CLK_CLKSEL4_UART1SEL_HXT        (0x0UL << CLK_CLKSEL4_UART1SEL_Pos)         /*!< Select UART1 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL4_UART1SEL_PLL        (0x1UL << CLK_CLKSEL4_UART1SEL_Pos)         /*!< Select UART1 clock source from PLL \hideinitializer */
#define CLK_CLKSEL4_UART1SEL_LXT        (0x2UL << CLK_CLKSEL4_UART1SEL_Pos)         /*!< Select UART1 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL4_UART1SEL_HIRC       (0x3UL << CLK_CLKSEL4_UART1SEL_Pos)         /*!< Select UART1 clock source from high speed oscillator \hideinitializer */
#define CLK_CLKSEL4_UART1SEL_MIRC       (0x4UL << CLK_CLKSEL4_UART1SEL_Pos)         /*!< Select UART1 clock source from middle speed oscillator \hideinitializer */
#define CLK_CLKSEL4_UART1SEL_HIRC48M    (0x5UL << CLK_CLKSEL4_UART1SEL_Pos)         /*!< Select UART1 clock source from 48MHz high speed oscillator \hideinitializer */

#define CLK_CLKSEL4_UART2SEL_HXT        (0x0UL << CLK_CLKSEL4_UART2SEL_Pos)         /*!< Select UART2 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL4_UART2SEL_PLL        (0x1UL << CLK_CLKSEL4_UART2SEL_Pos)         /*!< Select UART2 clock source from PLL \hideinitializer */
#define CLK_CLKSEL4_UART2SEL_LXT        (0x2UL << CLK_CLKSEL4_UART2SEL_Pos)         /*!< Select UART2 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL4_UART2SEL_HIRC       (0x3UL << CLK_CLKSEL4_UART2SEL_Pos)         /*!< Select UART2 clock source from high speed oscillator \hideinitializer */
#define CLK_CLKSEL4_UART2SEL_MIRC       (0x4UL << CLK_CLKSEL4_UART2SEL_Pos)         /*!< Select UART2 clock source from middle speed oscillator \hideinitializer */
#define CLK_CLKSEL4_UART2SEL_HIRC48M    (0x5UL << CLK_CLKSEL4_UART2SEL_Pos)         /*!< Select UART2 clock source from 48MHz high speed oscillator \hideinitializer */

#define CLK_CLKSEL4_UART3SEL_HXT        (0x0UL << CLK_CLKSEL4_UART3SEL_Pos)         /*!< Select UART3 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL4_UART3SEL_PLL        (0x1UL << CLK_CLKSEL4_UART3SEL_Pos)         /*!< Select UART3 clock source from PLL \hideinitializer */
#define CLK_CLKSEL4_UART3SEL_LXT        (0x2UL << CLK_CLKSEL4_UART3SEL_Pos)         /*!< Select UART3 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL4_UART3SEL_HIRC       (0x3UL << CLK_CLKSEL4_UART3SEL_Pos)         /*!< Select UART3 clock source from high speed oscillator \hideinitializer */
#define CLK_CLKSEL4_UART3SEL_MIRC       (0x4UL << CLK_CLKSEL4_UART3SEL_Pos)         /*!< Select UART3 clock source from middle speed oscillator \hideinitializer */
#define CLK_CLKSEL4_UART3SEL_HIRC48M    (0x5UL << CLK_CLKSEL4_UART3SEL_Pos)         /*!< Select UART3 clock source from 48MHz high speed oscillator \hideinitializer */

#define CLK_CLKSEL4_UART4SEL_HXT        (0x0UL << CLK_CLKSEL4_UART4SEL_Pos)         /*!< Select UART4 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL4_UART4SEL_PLL        (0x1UL << CLK_CLKSEL4_UART4SEL_Pos)         /*!< Select UART4 clock source from PLL \hideinitializer */
#define CLK_CLKSEL4_UART4SEL_LXT        (0x2UL << CLK_CLKSEL4_UART4SEL_Pos)         /*!< Select UART4 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL4_UART4SEL_HIRC       (0x3UL << CLK_CLKSEL4_UART4SEL_Pos)         /*!< Select UART4 clock source from high speed oscillator \hideinitializer */
#define CLK_CLKSEL4_UART4SEL_MIRC       (0x4UL << CLK_CLKSEL4_UART4SEL_Pos)         /*!< Select UART4 clock source from middle speed oscillator \hideinitializer */
#define CLK_CLKSEL4_UART4SEL_HIRC48M    (0x5UL << CLK_CLKSEL4_UART4SEL_Pos)         /*!< Select UART4 clock source from 48MHz high speed oscillator \hideinitializer */

#define CLK_CLKSEL4_UART5SEL_HXT        (0x0UL << CLK_CLKSEL4_UART5SEL_Pos)         /*!< Select UART5 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL4_UART5SEL_PLL        (0x1UL << CLK_CLKSEL4_UART5SEL_Pos)         /*!< Select UART5 clock source from PLL \hideinitializer */
#define CLK_CLKSEL4_UART5SEL_LXT        (0x2UL << CLK_CLKSEL4_UART5SEL_Pos)         /*!< Select UART5 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL4_UART5SEL_HIRC       (0x3UL << CLK_CLKSEL4_UART5SEL_Pos)         /*!< Select UART5 clock source from high speed oscillator \hideinitializer */
#define CLK_CLKSEL4_UART5SEL_MIRC       (0x4UL << CLK_CLKSEL4_UART5SEL_Pos)         /*!< Select UART5 clock source from middle speed oscillator \hideinitializer */
#define CLK_CLKSEL4_UART5SEL_HIRC48M    (0x5UL << CLK_CLKSEL4_UART5SEL_Pos)         /*!< Select UART5 clock source from 48MHz high speed oscillator \hideinitializer */

#define CLK_CLKSEL4_UART6SEL_HXT        (0x0UL << CLK_CLKSEL4_UART6SEL_Pos)         /*!< Select UART6 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL4_UART6SEL_PLL        (0x1UL << CLK_CLKSEL4_UART6SEL_Pos)         /*!< Select UART6 clock source from PLL \hideinitializer */
#define CLK_CLKSEL4_UART6SEL_LXT        (0x2UL << CLK_CLKSEL4_UART6SEL_Pos)         /*!< Select UART6 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL4_UART6SEL_HIRC       (0x3UL << CLK_CLKSEL4_UART6SEL_Pos)         /*!< Select UART6 clock source from high speed oscillator \hideinitializer */
#define CLK_CLKSEL4_UART6SEL_MIRC       (0x4UL << CLK_CLKSEL4_UART6SEL_Pos)         /*!< Select UART6 clock source from middle speed oscillator \hideinitializer */
#define CLK_CLKSEL4_UART6SEL_HIRC48M    (0x5UL << CLK_CLKSEL4_UART6SEL_Pos)         /*!< Select UART6 clock source from 48MHz high speed oscillator \hideinitializer */

#define CLK_CLKSEL4_UART7SEL_HXT        (0x0UL << CLK_CLKSEL4_UART7SEL_Pos)         /*!< Select UART7 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL4_UART7SEL_PLL        (0x1UL << CLK_CLKSEL4_UART7SEL_Pos)         /*!< Select UART7 clock source from PLL \hideinitializer */
#define CLK_CLKSEL4_UART7SEL_LXT        (0x2UL << CLK_CLKSEL4_UART7SEL_Pos)         /*!< Select UART7 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL4_UART7SEL_HIRC       (0x3UL << CLK_CLKSEL4_UART7SEL_Pos)         /*!< Select UART7 clock source from high speed oscillator \hideinitializer */
#define CLK_CLKSEL4_UART7SEL_MIRC       (0x4UL << CLK_CLKSEL4_UART7SEL_Pos)         /*!< Select UART7 clock source from middle speed oscillator \hideinitializer */
#define CLK_CLKSEL4_UART7SEL_HIRC48M    (0x5UL << CLK_CLKSEL4_UART7SEL_Pos)         /*!< Select UART7 clock source from 48MHz high speed oscillator \hideinitializer */


/*---------------------------------------------------------------------------------------------------------*/
/*  CLKDIV0 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKDIV0_HCLK(x)             (((x) - 1UL) << CLK_CLKDIV0_HCLK0DIV_Pos)   /*!< CLKDIV0 Setting for HCLK0 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV0_HCLK0(x)            (((x) - 1UL) << CLK_CLKDIV0_HCLK0DIV_Pos)   /*!< CLKDIV0 Setting for HCLK0 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV0_USB(x)              (((x) - 1UL) << CLK_CLKDIV0_USBDIV_Pos)     /*!< CLKDIV0 Setting for USB clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV0_UART0(x)            (((x) - 1UL) << CLK_CLKDIV0_UART0DIV_Pos)   /*!< CLKDIV0 Setting for UART0 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV0_UART1(x)            (((x) - 1UL) << CLK_CLKDIV0_UART1DIV_Pos)   /*!< CLKDIV0 Setting for UART1 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV0_EADC0(x)            (((x) - 1UL) << CLK_CLKDIV0_EADC0DIV_Pos)   /*!< CLKDIV0 Setting for EADC clock divider. It could be 1~256 \hideinitializer */


/*---------------------------------------------------------------------------------------------------------*/
/*  CLKDIV4 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKDIV4_UART2(x)            (((x) - 1UL) << CLK_CLKDIV4_UART2DIV_Pos)   /*!< CLKDIV4 Setting for UART2 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV4_UART3(x)            (((x) - 1UL) << CLK_CLKDIV4_UART3DIV_Pos)   /*!< CLKDIV4 Setting for UART3 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV4_UART4(x)            (((x) - 1UL) << CLK_CLKDIV4_UART4DIV_Pos)   /*!< CLKDIV4 Setting for UART4 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV4_UART5(x)            (((x) - 1UL) << CLK_CLKDIV4_UART5DIV_Pos)   /*!< CLKDIV4 Setting for UART5 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV4_UART6(x)            (((x) - 1UL) << CLK_CLKDIV4_UART6DIV_Pos)   /*!< CLKDIV4 Setting for UART6 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV4_UART7(x)            (((x) - 1UL) << CLK_CLKDIV4_UART7DIV_Pos)   /*!< CLKDIV4 Setting for UART7 clock divider. It could be 1~16 \hideinitializer */


/*---------------------------------------------------------------------------------------------------------*/
/*  CLKDIV5 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKDIV5_CANFD0(x)           (((x) - 1UL) << CLK_CLKDIV5_CANFD0DIV_Pos)  /*!< CLKDIV5 Setting for CANFD0 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV5_CANFD1(x)           (((x) - 1UL) << CLK_CLKDIV5_CANFD1DIV_Pos)  /*!< CLKDIV5 Setting for CANFD1 clock divider. It could be 1~16 \hideinitializer */


/*---------------------------------------------------------------------------------------------------------*/
/*  PCLKDIV constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_PCLKDIV_PCLK0DIV1           (0x0UL << CLK_PCLKDIV_APB0DIV_Pos)  /*!< PCLKDIV Setting for PCLK0 = HCLK \hideinitializer */
#define CLK_PCLKDIV_PCLK0DIV2           (0x1UL << CLK_PCLKDIV_APB0DIV_Pos)  /*!< PCLKDIV Setting for PCLK0 = 1/2 HCLK \hideinitializer */
#define CLK_PCLKDIV_PCLK0DIV4           (0x2UL << CLK_PCLKDIV_APB0DIV_Pos)  /*!< PCLKDIV Setting for PCLK0 = 1/4 HCLK \hideinitializer */
#define CLK_PCLKDIV_PCLK0DIV8           (0x3UL << CLK_PCLKDIV_APB0DIV_Pos)  /*!< PCLKDIV Setting for PCLK0 = 1/8 HCLK \hideinitializer */
#define CLK_PCLKDIV_PCLK0DIV16          (0x4UL << CLK_PCLKDIV_APB0DIV_Pos)  /*!< PCLKDIV Setting for PCLK0 = 1/16 HCLK \hideinitializer */

#define CLK_PCLKDIV_APB0DIV_DIV1        (0x0UL << CLK_PCLKDIV_APB0DIV_Pos)  /*!< PCLKDIV Setting for PCLK0 = HCLK \hideinitializer */
#define CLK_PCLKDIV_APB0DIV_DIV2        (0x1UL << CLK_PCLKDIV_APB0DIV_Pos)  /*!< PCLKDIV Setting for PCLK0 = 1/2 HCLK \hideinitializer */
#define CLK_PCLKDIV_APB0DIV_DIV4        (0x2UL << CLK_PCLKDIV_APB0DIV_Pos)  /*!< PCLKDIV Setting for PCLK0 = 1/4 HCLK \hideinitializer */
#define CLK_PCLKDIV_APB0DIV_DIV8        (0x3UL << CLK_PCLKDIV_APB0DIV_Pos)  /*!< PCLKDIV Setting for PCLK0 = 1/8 HCLK \hideinitializer */
#define CLK_PCLKDIV_APB0DIV_DIV16       (0x4UL << CLK_PCLKDIV_APB0DIV_Pos)  /*!< PCLKDIV Setting for PCLK0 = 1/16 HCLK \hideinitializer */

#define CLK_PCLKDIV_PCLK1DIV1           (0x0UL << CLK_PCLKDIV_APB1DIV_Pos)  /*!< PCLKDIV Setting for PCLK1 = HCLK \hideinitializer */
#define CLK_PCLKDIV_PCLK1DIV2           (0x1UL << CLK_PCLKDIV_APB1DIV_Pos)  /*!< PCLKDIV Setting for PCLK1 = 1/2 HCLK \hideinitializer */
#define CLK_PCLKDIV_PCLK1DIV4           (0x2UL << CLK_PCLKDIV_APB1DIV_Pos)  /*!< PCLKDIV Setting for PCLK1 = 1/4 HCLK \hideinitializer */
#define CLK_PCLKDIV_PCLK1DIV8           (0x3UL << CLK_PCLKDIV_APB1DIV_Pos)  /*!< PCLKDIV Setting for PCLK1 = 1/8 HCLK \hideinitializer */
#define CLK_PCLKDIV_PCLK1DIV16          (0x4UL << CLK_PCLKDIV_APB1DIV_Pos)  /*!< PCLKDIV Setting for PCLK1 = 1/16 HCLK \hideinitializer */

#define CLK_PCLKDIV_APB1DIV_DIV1        (0x0UL << CLK_PCLKDIV_APB1DIV_Pos)  /*!< PCLKDIV Setting for PCLK1 = HCLK \hideinitializer */
#define CLK_PCLKDIV_APB1DIV_DIV2        (0x1UL << CLK_PCLKDIV_APB1DIV_Pos)  /*!< PCLKDIV Setting for PCLK1 = 1/2 HCLK \hideinitializer */
#define CLK_PCLKDIV_APB1DIV_DIV4        (0x2UL << CLK_PCLKDIV_APB1DIV_Pos)  /*!< PCLKDIV Setting for PCLK1 = 1/4 HCLK \hideinitializer */
#define CLK_PCLKDIV_APB1DIV_DIV8        (0x3UL << CLK_PCLKDIV_APB1DIV_Pos)  /*!< PCLKDIV Setting for PCLK1 = 1/8 HCLK \hideinitializer */
#define CLK_PCLKDIV_APB1DIV_DIV16       (0x4UL << CLK_PCLKDIV_APB1DIV_Pos)  /*!< PCLKDIV Setting for PCLK1 = 1/16 HCLK \hideinitializer */


/*---------------------------------------------------------------------------------------------------------*/
/*  PLLCTL constant definitions. PLL = FIN * 2 * NF / NR / NO                                              */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_PLLCTL_PLLSRC_HXT   (0x0UL << CLK_PLLCTL_PLLSRC_Pos)    /*!< For PLL clock source is HXT.  1MHz < FIN/NR < 8MHz \hideinitializer */
#define CLK_PLLCTL_PLLSRC_HIRC  (0x1UL << CLK_PLLCTL_PLLSRC_Pos)    /*!< For PLL clock source is HIRC. 1MHz < FIN/NR < 8MHz \hideinitializer */

#define CLK_PLLCTL_NF(x)        (((x)-2UL)<<CLK_PLLCTL2_FBDIV_Pos)  /*!< x must be constant and 2 <= x <= 255. 100MHz < FIN*2*NF/NR < 500MHz. \hideinitializer */
#define CLK_PLLCTL_NR(x)        (((x)-1UL)<<CLK_PLLCTL2_INDIV_Pos)  /*!< x must be constant and 1 <= x <= 32.  1MHz < FIN/NR < 8MHz \hideinitializer */

#define CLK_PLLCTL_NO_1         (0x0UL << CLK_PLLCTL2_OUTDIV_Pos)   /*!< For output divider is 1 \hideinitializer */
#define CLK_PLLCTL_NO_2         (0x1UL << CLK_PLLCTL2_OUTDIV_Pos)   /*!< For output divider is 2 \hideinitializer */
#define CLK_PLLCTL_NO_4         (0x3UL << CLK_PLLCTL2_OUTDIV_Pos)   /*!< For output divider is 4 \hideinitializer */

#define CLK_PLLCTL_48MHz        (CLK_PLLCTL_NR(2UL) | CLK_PLLCTL_NF( 16UL) | CLK_PLLCTL_NO_4)   /*!< Predefined PLLCTL setting for 48MHz PLL output \hideinitializer */
#define CLK_PLLCTL_64MHz        (CLK_PLLCTL_NR(3UL) | CLK_PLLCTL_NF( 32UL) | CLK_PLLCTL_NO_4)   /*!< Predefined PLLCTL setting for 64MHz PLL output \hideinitializer */
#define CLK_PLLCTL_72MHz        (CLK_PLLCTL_NR(3UL) | CLK_PLLCTL_NF( 36UL) | CLK_PLLCTL_NO_4)   /*!< Predefined PLLCTL setting for 72MHz PLL output \hideinitializer */
#define CLK_PLLCTL_80MHz        (CLK_PLLCTL_NR(3UL) | CLK_PLLCTL_NF( 40UL) | CLK_PLLCTL_NO_4)   /*!< Predefined PLLCTL setting for 80MHz PLL output \hideinitializer */
#define CLK_PLLCTL_96MHz        (CLK_PLLCTL_NR(3UL) | CLK_PLLCTL_NF( 48UL) | CLK_PLLCTL_NO_4)   /*!< Predefined PLLCTL setting for 96MHz PLL output \hideinitializer */
#define CLK_PLLCTL_144MHz       (CLK_PLLCTL_NR(2UL) | CLK_PLLCTL_NF( 24UL) | CLK_PLLCTL_NO_2)   /*!< Predefined PLLCTL setting for 144MHz PLL output \hideinitializer */
#define CLK_PLLCTL_160MHz       (CLK_PLLCTL_NR(3UL) | CLK_PLLCTL_NF( 40UL) | CLK_PLLCTL_NO_2)   /*!< Predefined PLLCTL setting for 160MHz PLL output \hideinitializer */
#define CLK_PLLCTL_192MHz       (CLK_PLLCTL_NR(2UL) | CLK_PLLCTL_NF( 32UL) | CLK_PLLCTL_NO_2)   /*!< Predefined PLLCTL setting for 192MHz PLL output \hideinitializer */


/*---------------------------------------------------------------------------------------------------------*/
/*  MODULE constant definitions.                                                                           */
/*---------------------------------------------------------------------------------------------------------*/

/* APBCLK(31:29)|CLKSEL(28:26)|CLKSEL_Msk(25:23) |CLKSEL_Pos(22:18)|CLKDIV(17:16)|CLKDIV_Msk(15:10)|CLKDIV_Pos(9:5)|IP_EN_Pos(4:0) */

#define MODULE_APBCLK(x)            (((x) >> 29) & 0x07UL)  /*!< Calculate AHBCLK/APBCLK offset on MODULE index, 0x0:AHBCLK, 0x1:APBCLK0, 0x2:APBCLK1, 0x3:APBCLK2, 0x4:AHBCLK1, 0x5:LPSCC_CLKEN0 \hideinitializer */
#define MODULE_CLKSEL(x)            (((x) >> 26) & 0x07UL)  /*!< Calculate CLKSEL offset on MODULE index, 0x0:CLKSEL0, 0x1:CLKSEL1, 0x2:CLKSEL2, 0x3:CLKSEL3, 0x4:CLKSEL4, 0x5:LPSCC_CLKSEL0 \hideinitializer */
#define MODULE_CLKSEL_Msk(x)        (((x) >> 23) & 0x07UL)  /*!< Calculate CLKSEL mask BIT NUMBER on MODULE index \hideinitializer */
#define MODULE_CLKSEL_Pos(x)        (((x) >> 18) & 0x1FUL)  /*!< Calculate CLKSEL position offset on MODULE index \hideinitializer */
#define MODULE_CLKDIV(x)            (((x) >> 16) & 0x03UL)  /*!< Calculate APBCLK CLKDIV on MODULE index, 0x0:CLKDIV0, 0x1:CLKDIV4, 0x2:CLKDIV5, 0x3:LPSCC_CLKDIV0 \hideinitializer */
#define MODULE_CLKDIV_Msk(x)        (((x) >> 10) & 0x3FUL)  /*!< Calculate CLKDIV mask BIT NUMBER on MODULE index \hideinitializer */
#define MODULE_CLKDIV_Pos(x)        (((x) >>  5) & 0x1FUL)  /*!< Calculate CLKDIV position offset on MODULE index \hideinitializer */
#define MODULE_IP_EN_Pos(x)         (((x) >>  0) & 0x1FUL)  /*!< Calculate AHBCLK/APBCLK offset on MODULE index \hideinitializer */
#define MODULE_NoMsk                (0x0UL)                 /*!< Not mask on MODULE index \hideinitializer */
#define NA                          MODULE_NoMsk            /*!< Not Available \hideinitializer */

#define MODULE_APBCLK_ENC(x)        (((x) & 0x07UL) << 29)  /*!< MODULE index, 0x0:AHBCLK, 0x1:APBCLK0, 0x2:APBCLK1, 0x3:APBCLK2, 0x4:AHBCLK1, 0x5:LPSCC_CLKEN0 \hideinitializer */
#define MODULE_CLKSEL_ENC(x)        (((x) & 0x07UL) << 26)  /*!< CLKSEL offset on MODULE index, 0x0:CLKSEL0, 0x1:CLKSEL1, 0x2:CLKSEL2, 0x3:CLKSEL3, 0x4:CLKSEL4, 0x5:LPSCC_CLKSEL0 \hideinitializer */
#define MODULE_CLKSEL_Msk_ENC(x)    (((x) & 0x07UL) << 23)  /*!< CLKSEL mask BIT NUMBER on MODULE index \hideinitializer */
#define MODULE_CLKSEL_Pos_ENC(x)    (((x) & 0x1FUL) << 18)  /*!< CLKSEL position offset on MODULE index \hideinitializer */
#define MODULE_CLKDIV_ENC(x)        (((x) & 0x03UL) << 16)  /*!< APBCLK CLKDIV on MODULE index, 0x0:CLKDIV0, 0x1:CLKDIV4, 0x2:CLKDIV5, 0x3:LPSCC_CLKDIV0 \hideinitializer */
#define MODULE_CLKDIV_Msk_ENC(x)    (((x) & 0x3FUL) << 10)  /*!< CLKDIV mask BIT NUMBER on MODULE index \hideinitializer */
#define MODULE_CLKDIV_Pos_ENC(x)    (((x) & 0x1FUL) <<  5)  /*!< CLKDIV position offset on MODULE index \hideinitializer */
#define MODULE_IP_EN_Pos_ENC(x)     (((x) & 0x1FUL) <<  0)  /*!< AHBCLK/APBCLK offset on MODULE index \hideinitializer */

/* AHBCLK */
                     /* CLKEN reg | CLKSEL reg       | CLKSEL mask      | CLKSEL pos       | CLKDIV reg       | CLKDIV mask      | CLKDIV pos       | CLKEN pos */
#define PDMA0_MODULE    ((0UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(1UL<<0))	/*!< PDMA0 Module */
#define ISP_MODULE      ((0UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(2UL<<0))	/*!< ISP Module */
#define EBI_MODULE      ((0UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(3UL<<0))	/*!< EBI Module */
#define ST_MODULE       ((0UL<<29)|(0UL<<26)         |(3UL<<23)         |(3UL<<18)         |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(4UL<<0))	/*!< ST Module */
#define CRC_MODULE      ((0UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(7UL<<0))	/*!< CRC Module */
#define CRPT_MODULE     ((0UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(12UL<<0))	/*!< CRPT Module */
#define KS_MODULE       ((0UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(13UL<<0))	/*!< KS Module */
#define USBH_MODULE     ((0UL<<29)|(0UL<<26)         |(1UL<<23)         |(8UL<<18)         |(0UL<<16)         |(4UL<<10)         |(4UL<<5)          |(16UL<<0))	/*!< USBH Module */
#define GPA_MODULE      ((0UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(24UL<<0))	/*!< GPA Module */
#define GPB_MODULE      ((0UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(25UL<<0))	/*!< GPB Module */
#define GPC_MODULE      ((0UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(26UL<<0))	/*!< GPC Module */
#define GPD_MODULE      ((0UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(27UL<<0))	/*!< GPD Module */
#define GPE_MODULE      ((0UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(28UL<<0))	/*!< GPE Module */
#define GPF_MODULE      ((0UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(29UL<<0))	/*!< GPF Module */
#define GPG_MODULE      ((0UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(30UL<<0))	/*!< GPG Module */
#define GPH_MODULE      ((0UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(31UL<<0))	/*!< GPH Module */

/* APBCLK0 */
#define RTC_MODULE      ((1UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(1UL<<0))	/*!< RTC Module */
#define TMR0_MODULE     ((1UL<<29)|(1UL<<26)         |(3UL<<23)         |(8UL<<18)         |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(2UL<<0))	/*!< TMR0 Module */
#define TMR1_MODULE     ((1UL<<29)|(1UL<<26)         |(3UL<<23)         |(12UL<<18)        |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(3UL<<0))	/*!< TMR1 Module */
#define TMR2_MODULE     ((1UL<<29)|(1UL<<26)         |(3UL<<23)         |(16UL<<18)        |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(4UL<<0))	/*!< TMR2 Module */
#define TMR3_MODULE     ((1UL<<29)|(1UL<<26)         |(3UL<<23)         |(20UL<<18)        |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(5UL<<0))	/*!< TMR3 Module */
#define CLKO_MODULE     ((1UL<<29)|(1UL<<26)         |(4UL<<23)         |(4UL<<18)         |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(6UL<<0))	/*!< CLKO Module */
#define ACMP01_MODULE   ((1UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(7UL<<0))	/*!< ACMP01 Module */
#define I2C0_MODULE     ((1UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(8UL<<0))	/*!< I2C0 Module */
#define I2C1_MODULE     ((1UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(9UL<<0))	/*!< I2C1 Module */
#define I2C2_MODULE     ((1UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(10UL<<0))	/*!< I2C2 Module */
#define I2C3_MODULE     ((1UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(11UL<<0))	/*!< I2C3 Module */
#define QSPI0_MODULE    ((1UL<<29)|(2UL<<26)         |(2UL<<23)         |(2UL<<18)         |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(12UL<<0))	/*!< QSPI0 Module */
#define SPI0_MODULE     ((1UL<<29)|(2UL<<26)         |(3UL<<23)         |(4UL<<18)         |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(13UL<<0))	/*!< SPI0 Module */
#define SPI1_MODULE     ((1UL<<29)|(2UL<<26)         |(3UL<<23)         |(12UL<<18)        |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(14UL<<0))	/*!< SPI1 Module */
#define SPI2_MODULE     ((1UL<<29)|(3UL<<26)         |(3UL<<23)         |(8UL<<18)         |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(15UL<<0))	/*!< SPI2 Module */
#define UART0_MODULE    ((1UL<<29)|(4UL<<26)         |(3UL<<23)         |(0UL<<18)         |(0UL<<16)         |(4UL<<10)         |(8UL<<5)          |(16UL<<0))	/*!< UART0 Module */
#define UART1_MODULE    ((1UL<<29)|(4UL<<26)         |(3UL<<23)         |(4UL<<18)         |(0UL<<16)         |(4UL<<10)         |(12UL<<5)         |(17UL<<0))	/*!< UART1 Module */
#define UART2_MODULE    ((1UL<<29)|(4UL<<26)         |(3UL<<23)         |(8UL<<18)         |(1UL<<16)         |(4UL<<10)         |(0UL<<5)          |(18UL<<0))	/*!< UART2 Module */
#define UART3_MODULE    ((1UL<<29)|(4UL<<26)         |(3UL<<23)         |(12UL<<18)        |(1UL<<16)         |(4UL<<10)         |(4UL<<5)          |(19UL<<0))	/*!< UART3 Module */
#define UART4_MODULE    ((1UL<<29)|(4UL<<26)         |(3UL<<23)         |(16UL<<18)        |(1UL<<16)         |(4UL<<10)         |(8UL<<5)          |(20UL<<0))	/*!< UART4 Module */
#define UART5_MODULE    ((1UL<<29)|(4UL<<26)         |(3UL<<23)         |(20UL<<18)        |(1UL<<16)         |(4UL<<10)         |(12UL<<5)         |(21UL<<0))	/*!< UART5 Module */
#define UART6_MODULE    ((1UL<<29)|(4UL<<26)         |(3UL<<23)         |(24UL<<18)        |(1UL<<16)         |(4UL<<10)         |(16UL<<5)         |(22UL<<0))	/*!< UART6 Module */
#define UART7_MODULE    ((1UL<<29)|(4UL<<26)         |(3UL<<23)         |(28UL<<18)        |(1UL<<16)         |(4UL<<10)         |(20UL<<5)         |(23UL<<0))	/*!< UART7 Module */
#define OTG_MODULE      ((1UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(26UL<<0))	/*!< OTG Module */
#define USBD_MODULE     ((1UL<<29)|(0UL<<26)         |(1UL<<23)         |(8UL<<18)         |(0UL<<16)         |(4UL<<10)         |(4UL<<5)          |(27UL<<0))	/*!< USBD Module */
#define EADC0_MODULE    ((1UL<<29)|(0UL<<26)         |(2UL<<23)         |(10UL<<18)        |(0UL<<16)         |(8UL<<10)         |(16UL<<5)         |(28UL<<0))	/*!< EADC0 Module */
#define TRNG_MODULE     ((1UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(31UL<<0))	/*!< TRNG Module */

/* APBCLK1 */
#define SPI3_MODULE     ((2UL<<29)|(3UL<<26)         |(3UL<<23)         |(12UL<<18)        |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(6UL<<0))  /*!< SPI3 Module */
#define USCI0_MODULE    ((2UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(8UL<<0))  /*!< USCI0 Module */
#define USCI1_MODULE    ((2UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(9UL<<0))  /*!< USCI1 Module */
#define WWDT_MODULE     ((2UL<<29)|(1UL<<26)         |(2UL<<23)         |(30UL<<18)        |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(11UL<<0)) /*!< WWDT Module */
#define DAC_MODULE      ((2UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(12UL<<0)) /*!< DAC Module */
#define EPWM0_MODULE    ((2UL<<29)|(2UL<<26)         |(1UL<<23)         |(0UL<<18)         |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(16UL<<0)) /*!< EPWM0 Module */
#define EPWM1_MODULE    ((2UL<<29)|(2UL<<26)         |(1UL<<23)         |(1UL<<18)         |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(17UL<<0)) /*!< EPWM1 Module */
#define EQEI0_MODULE    ((2UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(22UL<<0)) /*!< EQEI0 Module */
#define EQEI1_MODULE    ((2UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(23UL<<0)) /*!< EQEI1 Module */
#define TK_MODULE       ((2UL<<29)|(2UL<<26)         |(1UL<<23)         |(7UL<<18)         |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(25UL<<0)) /*!< TK Module */
#define ECAP0_MODULE    ((2UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(26UL<<0)) /*!< ECAP0 Module */
#define ECAP1_MODULE    ((2UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(27UL<<0)) /*!< ECAP1 Module */

/* APBCLK2 */
#define ACMP2_MODULE    ((3UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(7UL<<0))  /*!< ACMP2 Module */
#define PWM0_MODULE     ((3UL<<29)|(3UL<<26)         |(1UL<<23)         |(6UL<<18)         |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(8UL<<0))  /*!< PWM0 Module */
#define PWM1_MODULE     ((3UL<<29)|(3UL<<26)         |(1UL<<23)         |(7UL<<18)         |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(9UL<<0))  /*!< PWM1 Module */
#define UTCPD0_MODULE   ((3UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(15UL<<0)) /*!< UTCPD0 Module */

/* AHBCLK1 */
#define CANRAM0_MODULE  ((4UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(16UL<<0)) /*!< CANRAM0 Module */
#define CANRAM1_MODULE  ((4UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(17UL<<0)) /*!< CANRAM1 Module */
#define CANFD0_MODULE   ((4UL<<29)|(0UL<<26)         |(2UL<<23)         |(24UL<<18)        |(2UL<<16)         |(4UL<<10)         |(0UL<<5)          |(20UL<<0)) /*!< CANFD0 Module */
#define CANFD1_MODULE   ((4UL<<29)|(0UL<<26)         |(2UL<<23)         |(26UL<<18)        |(2UL<<16)         |(4UL<<10)         |(4UL<<5)          |(21UL<<0)) /*!< CANFD1 Module */
#define HCLK1_MODULE    ((4UL<<29)|(0UL<<26)         |(3UL<<23)         |(12UL<<18)        |(3UL<<16)         |(4UL<<10)         |(0UL<<5)          |(28UL<<0)) /*!< HCLK1 Module */

/* LPSCC_CLKEN0 */
#define LPPDMA0_MODULE  ((5UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(0UL<<0))  /*!< LPPDMA0 Module */
#define LPGPIO_MODULE   ((5UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(1UL<<0))  /*!< LPGPIO Module */
#define LPSRAM_MODULE   ((5UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(2UL<<0))  /*!< LPSRAM Module */
#define WDT_MODULE      ((5UL<<29)|(5UL<<26)         |(2UL<<23)         |(24UL<<18)        |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(16UL<<0)) /*!< WDT Module */
#define LPSPI0_MODULE   ((5UL<<29)|(5UL<<26)         |(2UL<<23)         |(2UL<<18)         |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(17UL<<0)) /*!< LPSPI0 Module */
#define LPI2C0_MODULE   ((5UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(18UL<<0)) /*!< LPI2C0 Module */
#define LPUART0_MODULE  ((5UL<<29)|(5UL<<26)         |(2UL<<23)         |(0UL<<18)         |(3UL<<16)         |(4UL<<10)         |(8UL<<5)          |(19UL<<0)) /*!< LPUART0 Module */
#define LPTMR0_MODULE   ((5UL<<29)|(5UL<<26)         |(3UL<<23)         |(8UL<<18)         |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(20UL<<0)) /*!< LPTMR0 Module */
#define LPTMR1_MODULE   ((5UL<<29)|(5UL<<26)         |(3UL<<23)         |(12UL<<18)        |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(21UL<<0)) /*!< LPTMR1 Module */
#define TTMR0_MODULE    ((5UL<<29)|(5UL<<26)         |(2UL<<23)         |(4UL<<18)         |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(22UL<<0)) /*!< TTMR0 Module */
#define TTMR1_MODULE    ((5UL<<29)|(5UL<<26)         |(2UL<<23)         |(6UL<<18)         |(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(23UL<<0)) /*!< TTMR1 Module */
#define LPADC0_MODULE   ((5UL<<29)|(5UL<<26)         |(2UL<<23)         |(16UL<<18)        |(3UL<<16)         |(4UL<<10)         |(16UL<<5)         |(24UL<<0)) /*!< LPADC0 Module */
#define OPA_MODULE      ((5UL<<29)|(MODULE_NoMsk<<26)|(MODULE_NoMsk<<23)|(MODULE_NoMsk<<18)|(MODULE_NoMsk<<16)|(MODULE_NoMsk<<10)|(MODULE_NoMsk<<5) |(27UL<<0)) /*!< OPA Module */

/*---------------------------------------------------------------------------------------------------------*/
/*  PDMSEL constant definitions.                                                                           */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_PMUCTL_PDMSEL_PD        (0x0UL << CLK_PMUCTL_PDMSEL_Pos)        /*!< Select power down mode is Normal Power-down mode 0 \hideinitializer */
#define CLK_PMUCTL_PDMSEL_NPD0      (0x0UL << CLK_PMUCTL_PDMSEL_Pos)        /*!< Select power down mode is Normal Power-down mode 0 \hideinitializer */
#define CLK_PMUCTL_PDMSEL_NPD1      (0x1UL << CLK_PMUCTL_PDMSEL_Pos)        /*!< Select power down mode is Normal Power-down mode 1 \hideinitializer */
#define CLK_PMUCTL_PDMSEL_NPD2      (0x2UL << CLK_PMUCTL_PDMSEL_Pos)        /*!< Select power down mode is Normal Power-down mode 2 \hideinitializer */
#define CLK_PMUCTL_PDMSEL_NPD3      (0x3UL << CLK_PMUCTL_PDMSEL_Pos)        /*!< Select power down mode is Normal Power-down mode 3 \hideinitializer */
#define CLK_PMUCTL_PDMSEL_NPD4      (0x4UL << CLK_PMUCTL_PDMSEL_Pos)        /*!< Select power down mode is Normal Power-down mode 4 \hideinitializer */
#define CLK_PMUCTL_PDMSEL_NPD5      (0x5UL << CLK_PMUCTL_PDMSEL_Pos)        /*!< Select power down mode is Normal Power-down mode 5 \hideinitializer */
#define CLK_PMUCTL_PDMSEL_SPD0      (0x8UL << CLK_PMUCTL_PDMSEL_Pos)        /*!< Select power down mode is Standby Power-down mode 0 \hideinitializer */
#define CLK_PMUCTL_PDMSEL_SPD1      (0x9UL << CLK_PMUCTL_PDMSEL_Pos)        /*!< Select power down mode is Standby Power-down mode 1 \hideinitializer */
#define CLK_PMUCTL_PDMSEL_SPD2      (0xAUL << CLK_PMUCTL_PDMSEL_Pos)        /*!< Select power down mode is Standby Power-down mode 2 \hideinitializer */
#define CLK_PMUCTL_PDMSEL_DPD0      (0xCUL << CLK_PMUCTL_PDMSEL_Pos)        /*!< Select power down mode is Deep Power-down mode 0 \hideinitializer */
#define CLK_PMUCTL_PDMSEL_DPD1      (0xDUL << CLK_PMUCTL_PDMSEL_Pos)        /*!< Select power down mode is Deep Power-down mode 1 \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  LSRETSEL constant definitions.                                                                         */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_SPDLSRETSEL_NO          (0x0UL << CLK_PMUCTL_LSRETSEL_Pos)      /*!< No LPSRAM retention when chip enter NPD3/NPD4/NPD5/SPDx mode \hideinitializer */
#define CLK_SPDLSRETSEL_8K          (0x1UL << CLK_PMUCTL_LSRETSEL_Pos)      /*!< 8K LPSRAM retention when chip enter NPD3/NPD4/NPD5/SPDx mode \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  WKTMRIS constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_PMUWKCTL_WKTMRIS_512        (0x0UL << CLK_PMUWKCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 512 LIRC clocks (16 ms) \hideinitializer */
#define CLK_PMUWKCTL_WKTMRIS_1024       (0x1UL << CLK_PMUWKCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 1024 LIRC clocks (32 ms) \hideinitializer */
#define CLK_PMUWKCTL_WKTMRIS_2048       (0x2UL << CLK_PMUWKCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 2048 LIRC clocks (64 ms) \hideinitializer */
#define CLK_PMUWKCTL_WKTMRIS_4096       (0x3UL << CLK_PMUWKCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 4096 LIRC clocks (128 ms) \hideinitializer */
#define CLK_PMUWKCTL_WKTMRIS_8192       (0x4UL << CLK_PMUWKCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 8192 LIRC clocks (256 ms) \hideinitializer */
#define CLK_PMUWKCTL_WKTMRIS_16384      (0x5UL << CLK_PMUWKCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 16384 LIRC clocks (512 ms) \hideinitializer */
#define CLK_PMUWKCTL_WKTMRIS_32768      (0x6UL << CLK_PMUWKCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 32768 LIRC clocks (1024 ms) \hideinitializer */
#define CLK_PMUWKCTL_WKTMRIS_65536      (0x7UL << CLK_PMUWKCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 65536 LIRC clocks (2048 ms) \hideinitializer */
#define CLK_PMUWKCTL_WKTMRIS_131072     (0x8UL << CLK_PMUWKCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 131072 LIRC clocks (4096 ms) \hideinitializer */
#define CLK_PMUWKCTL_WKTMRIS_262144     (0x9UL << CLK_PMUWKCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 262144 LIRC clocks (8192 ms) \hideinitializer */
#define CLK_PMUWKCTL_WKTMRIS_524288     (0xAUL << CLK_PMUWKCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 524288 LIRC clocks (16384 ms) \hideinitializer */
#define CLK_PMUWKCTL_WKTMRIS_1048576    (0xBUL << CLK_PMUWKCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 1048576 LIRC clocks (32768 ms) \hideinitializer */
#define CLK_PMUWKCTL_WKTMRIS_2097152    (0xCUL << CLK_PMUWKCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 2097152 LIRC clocks (65536 ms) \hideinitializer */
#define CLK_PMUWKCTL_WKTMRIS_4194304    (0xDUL << CLK_PMUWKCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 4194304 LIRC clocks (131072 ms) \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  SWKDBCLKSEL constant definitions.                                                                      */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_PWDBCTL_SWKDBCLKSEL_1           (0x0UL << CLK_PWDBCTL_SWKDBCLKSEL_Pos)      /*!< Select Standby Power-down Pin De-bounce Sampling Cycle is 1 clocks \hideinitializer */
#define CLK_PWDBCTL_SWKDBCLKSEL_2           (0x1UL << CLK_PWDBCTL_SWKDBCLKSEL_Pos)      /*!< Select Standby Power-down Pin De-bounce Sampling Cycle is 2 clocks \hideinitializer */
#define CLK_PWDBCTL_SWKDBCLKSEL_4           (0x2UL << CLK_PWDBCTL_SWKDBCLKSEL_Pos)      /*!< Select Standby Power-down Pin De-bounce Sampling Cycle is 4 clocks \hideinitializer */
#define CLK_PWDBCTL_SWKDBCLKSEL_8           (0x3UL << CLK_PWDBCTL_SWKDBCLKSEL_Pos)      /*!< Select Standby Power-down Pin De-bounce Sampling Cycle is 8 clocks \hideinitializer */
#define CLK_PWDBCTL_SWKDBCLKSEL_16          (0x4UL << CLK_PWDBCTL_SWKDBCLKSEL_Pos)      /*!< Select Standby Power-down Pin De-bounce Sampling Cycle is 16 clocks \hideinitializer */
#define CLK_PWDBCTL_SWKDBCLKSEL_32          (0x5UL << CLK_PWDBCTL_SWKDBCLKSEL_Pos)      /*!< Select Standby Power-down Pin De-bounce Sampling Cycle is 32 clocks \hideinitializer */
#define CLK_PWDBCTL_SWKDBCLKSEL_64          (0x6UL << CLK_PWDBCTL_SWKDBCLKSEL_Pos)      /*!< Select Standby Power-down Pin De-bounce Sampling Cycle is 64 clocks \hideinitializer */
#define CLK_PWDBCTL_SWKDBCLKSEL_128         (0x7UL << CLK_PWDBCTL_SWKDBCLKSEL_Pos)      /*!< Select Standby Power-down Pin De-bounce Sampling Cycle is 128 clocks \hideinitializer */
#define CLK_PWDBCTL_SWKDBCLKSEL_256         (0x8UL << CLK_PWDBCTL_SWKDBCLKSEL_Pos)      /*!< Select Standby Power-down Pin De-bounce Sampling Cycle is 256 clocks \hideinitializer */
#define CLK_PWDBCTL_SWKDBCLKSEL_2x256       (0x9UL << CLK_PWDBCTL_SWKDBCLKSEL_Pos)      /*!< Select Standby Power-down Pin De-bounce Sampling Cycle is 2x256 clocks \hideinitializer */
#define CLK_PWDBCTL_SWKDBCLKSEL_4x256       (0xaUL << CLK_PWDBCTL_SWKDBCLKSEL_Pos)      /*!< Select Standby Power-down Pin De-bounce Sampling Cycle is 4x256 clocks \hideinitializer */
#define CLK_PWDBCTL_SWKDBCLKSEL_8x256       (0xbUL << CLK_PWDBCTL_SWKDBCLKSEL_Pos)      /*!< Select Standby Power-down Pin De-bounce Sampling Cycle is 8x256 clocks \hideinitializer */
#define CLK_PWDBCTL_SWKDBCLKSEL_16x256      (0xcUL << CLK_PWDBCTL_SWKDBCLKSEL_Pos)      /*!< Select Standby Power-down Pin De-bounce Sampling Cycle is 16x256 clocks \hideinitializer */
#define CLK_PWDBCTL_SWKDBCLKSEL_32x256      (0xdUL << CLK_PWDBCTL_SWKDBCLKSEL_Pos)      /*!< Select Standby Power-down Pin De-bounce Sampling Cycle is 32x256 clocks \hideinitializer */
#define CLK_PWDBCTL_SWKDBCLKSEL_64x256      (0xeUL << CLK_PWDBCTL_SWKDBCLKSEL_Pos)      /*!< Select Standby Power-down Pin De-bounce Sampling Cycle is 64x256 clocks \hideinitializer */
#define CLK_PWDBCTL_SWKDBCLKSEL_128x256     (0xfUL << CLK_PWDBCTL_SWKDBCLKSEL_Pos)      /*!< Select Standby Power-down Pin De-bounce Sampling Cycle is 128x256 clocks \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  DPD Pin (WKPIN) Rising/Falling Edge Wake-up Enable constant definitions.                                       */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_DPDWKPIN_0          (0x0UL)     /*!< Wake-up pin0 (GPC.0) at Deep Power-down mode */
#define CLK_DPDWKPIN_1          (0x1UL)     /*!< Wake-up pin1 (GPB.0) at Deep Power-down mode */
#define CLK_DPDWKPIN_2          (0x2UL)     /*!< Wake-up pin2 (GPB.2) at Deep Power-down mode */
#define CLK_DPDWKPIN_3          (0x3UL)     /*!< Wake-up pin3 (GPB.12) at Deep Power-down mode */
#define CLK_DPDWKPIN_4          (0x4UL)     /*!< Wake-up pin4 (GPF.6) at Deep Power-down mode */
#define CLK_DPDWKPIN_5          (0x5UL)     /*!< Wake-up pin5 (GPA.12) at Deep Power-down mode */

#define CLK_DPDWKPIN_DISABLE    (0x0UL)
#define CLK_DPDWKPIN_RISING     (0x1UL)
#define CLK_DPDWKPIN_FALLING    (0x2UL)
#define CLK_DPDWKPIN_BOTHEDGE   (0x3UL)

#define CLK_DISABLE_DPDWKPIN(void)    (CLK->PMUWKCTL &= ~CLK_PMUWKCTL_WKPINEN0_Msk)   /*!< Disable Wake-up pin0 (GPC.0) at Deep Power-down mode \hideinitializer */
#define CLK_DISABLE_DPDWKPIN0(void)   (CLK->PMUWKCTL &= ~CLK_PMUWKCTL_WKPINEN0_Msk)   /*!< Disable Wake-up pin0 (GPC.0) at Deep Power-down mode \hideinitializer */
#define CLK_DISABLE_DPDWKPIN1(void)   (CLK->PMUWKCTL &= ~CLK_PMUWKCTL_WKPINEN1_Msk)   /*!< Disable Wake-up pin1 (GPB.0) at Deep Power-down mode \hideinitializer */
#define CLK_DISABLE_DPDWKPIN2(void)   (CLK->PMUWKCTL &= ~CLK_PMUWKCTL_WKPINEN2_Msk)   /*!< Disable Wake-up pin2 (GPB.2) at Deep Power-down mode \hideinitializer */
#define CLK_DISABLE_DPDWKPIN3(void)   (CLK->PMUWKCTL &= ~CLK_PMUWKCTL_WKPINEN3_Msk)   /*!< Disable Wake-up pin3 (GPB.12) at Deep Power-down mode \hideinitializer */
#define CLK_DISABLE_DPDWKPIN4(void)   (CLK->PMUWKCTL &= ~CLK_PMUWKCTL_WKPINEN4_Msk)   /*!< Disable Wake-up pin4 (GPF.6) at Deep Power-down mode \hideinitializer */
#define CLK_DISABLE_DPDWKPIN5(void)   (CLK->PMUWKCTL &= ~CLK_PMUWKCTL_WKPINEN5_Msk)   /*!< Disable Wake-up pin5 (GPA.12) at Deep Power-down mode \hideinitializer */
#define CLK_DISABLE_SPDACMP(void)     (CLK->PMUWKCTL &= ~CLK_PMUWKCTL_ACMPWKEN_Msk)   /*!< Disable ACMP wake-up at Standby Power-down mode \hideinitializer */
#define CLK_ENABLE_SPDACMP(void)      (CLK->PMUWKCTL |= CLK_PMUWKCTL_ACMPWKEN_Msk)    /*!< Enable ACMP wake-up at Standby Power-down mode \hideinitializer */
#define CLK_DISABLE_RTCWK(void)       (CLK->PMUWKCTL &= ~CLK_PMUWKCTL_RTCWKEN_Msk)    /*!< Disable RTC Wake-up at Standby or Deep Power-down mode \hideinitializer */
#define CLK_ENABLE_RTCWK(void)        (CLK->PMUWKCTL |= CLK_PMUWKCTL_RTCWKEN_Msk)     /*!< Enable RTC Wake-up at Standby or Deep Power-down mode \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  SPD Pin (WKIO) Rising/Falling Edge Wake-up Enable constant definitions.                                       */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_SPDWKPIN_ENABLE         (0x1UL << CLK_PAPWCTL_WKEN0_Pos)        /*!< Enable Standby Power-down Pin Wake-up \hideinitializer */
#define CLK_SPDWKPIN_RISING         (0x1UL << CLK_PAPWCTL_PRWKEN0_Pos)      /*!< Standby Power-down Wake-up on Standby Power-down Pin rising edge \hideinitializer */
#define CLK_SPDWKPIN_FALLING        (0x1UL << CLK_PAPWCTL_PFWKEN0_Pos)      /*!< Standby Power-down Wake-up on Standby Power-down Pin falling edge \hideinitializer */
#define CLK_SPDWKPIN_DEBOUNCEEN     (0x1UL << CLK_PAPWCTL_DBEN0_Pos)        /*!< Enable Standby power-down pin De-bounce function \hideinitializer */
#define CLK_SPDWKPIN_DEBOUNCEDIS    (0x0UL << CLK_PAPWCTL_DBEN0_Pos)        /*!< Disable Standby power-down pin De-bounce function \hideinitializer */

#define CLK_SPDSRETSEL_NO           (0x0UL << CLK_PMUCTL_SRETSEL_Pos)       /*!< No SRAM retention when chip enter NPD3/NPD4/NPD5/SPDx mode \hideinitializer */
#define CLK_SPDSRETSEL_8K           (0x1UL << CLK_PMUCTL_SRETSEL_Pos)       /*!< 8K SRAM retention when chip enter NPD3/NPD4/NPD5/SPDx mode \hideinitializer */
#define CLK_SPDSRETSEL_24K          (0x2UL << CLK_PMUCTL_SRETSEL_Pos)       /*!< 24K SRAM retention when chip enter NPD3/NPD4/NPD5/SPDx mode \hideinitializer */
#define CLK_SPDSRETSEL_40K          (0x3UL << CLK_PMUCTL_SRETSEL_Pos)       /*!< 40K SRAM retention when chip enter NPD3/NPD4/NPD5/SPDx mode \hideinitializer */
#define CLK_SPDSRETSEL_72K          (0x4UL << CLK_PMUCTL_SRETSEL_Pos)       /*!< 72K SRAM retention when chip enter NPD3/NPD4/NPD5/SPDx mode \hideinitializer */
#define CLK_SPDSRETSEL_104K         (0x5UL << CLK_PMUCTL_SRETSEL_Pos)       /*!< 104K SRAM retention when chip enter NPD3/NPD4/NPD5/SPDx mode \hideinitializer */
#define CLK_SPDSRETSEL_168K         (0x6UL << CLK_PMUCTL_SRETSEL_Pos)       /*!< 168K SRAM retention when chip enter NPD3/NPD4/NPD5/SPDx mode \hideinitializer */

#define CLK_DISABLE_WKTMR(void)     (CLK->PMUWKCTL &= ~CLK_PMUWKCTL_WKTMREN_Msk)    /*!< Disable Wake-up timer at Standby or Deep Power-down mode \hideinitializer */
#define CLK_ENABLE_WKTMR(void)      (CLK->PMUWKCTL |= CLK_PMUWKCTL_WKTMREN_Msk)     /*!< Enable Wake-up timer at Standby or Deep Power-down mode \hideinitializer */

#define CLK_TIMEOUT_ERR             (-1)    /*!< Clock timeout error value \hideinitializer */

/*@}*/ /* end of group CLK_EXPORTED_CONSTANTS */

extern int32_t g_CLK_i32ErrCode;

/** @addtogroup CLK_EXPORTED_FUNCTIONS CLK Exported Functions
  @{
*/

/**
 * @brief       Set Wake-up Timer Time-out Interval
 *
 * @param[in]   u32Interval   The Wake-up Timer Time-out Interval selection. It could be
 *                             - \ref CLK_PMUWKCTL_WKTMRIS_512
 *                             - \ref CLK_PMUWKCTL_WKTMRIS_1024
 *                             - \ref CLK_PMUWKCTL_WKTMRIS_2048
 *                             - \ref CLK_PMUWKCTL_WKTMRIS_4096
 *                             - \ref CLK_PMUWKCTL_WKTMRIS_8192
 *                             - \ref CLK_PMUWKCTL_WKTMRIS_16384
 *                             - \ref CLK_PMUWKCTL_WKTMRIS_32768
 *                             - \ref CLK_PMUWKCTL_WKTMRIS_65536
 *                             - \ref CLK_PMUWKCTL_WKTMRIS_131072
 *                             - \ref CLK_PMUWKCTL_WKTMRIS_262144
 *                             - \ref CLK_PMUWKCTL_WKTMRIS_524288
 *                             - \ref CLK_PMUWKCTL_WKTMRIS_1048576
 *                             - \ref CLK_PMUWKCTL_WKTMRIS_2097152
 *                             - \ref CLK_PMUWKCTL_WKTMRIS_4194304
 *
 * @return      None
 *
 * @details     This function set Wake-up Timer Time-out Interval.
 *
 * \hideinitializer
 */
#define CLK_SET_WKTMR_INTERVAL(u32Interval)     (CLK->PMUWKCTL = (CLK->PMUWKCTL & ~CLK_PMUWKCTL_WKTMRIS_Msk) | u32Interval)

/**
 * @brief       Set De-bounce Sampling Cycle Time
 *
 * @param[in]   u32CycleSel   The de-bounce sampling cycle selection. It could be
 *                             - \ref CLK_PWDBCTL_SWKDBCLKSEL_1
 *                             - \ref CLK_PWDBCTL_SWKDBCLKSEL_2
 *                             - \ref CLK_PWDBCTL_SWKDBCLKSEL_4
 *                             - \ref CLK_PWDBCTL_SWKDBCLKSEL_8
 *                             - \ref CLK_PWDBCTL_SWKDBCLKSEL_16
 *                             - \ref CLK_PWDBCTL_SWKDBCLKSEL_32
 *                             - \ref CLK_PWDBCTL_SWKDBCLKSEL_64
 *                             - \ref CLK_PWDBCTL_SWKDBCLKSEL_128
 *                             - \ref CLK_PWDBCTL_SWKDBCLKSEL_256
 *                             - \ref CLK_PWDBCTL_SWKDBCLKSEL_2x256
 *                             - \ref CLK_PWDBCTL_SWKDBCLKSEL_4x256
 *                             - \ref CLK_PWDBCTL_SWKDBCLKSEL_8x256
 *                             - \ref CLK_PWDBCTL_SWKDBCLKSEL_16x256
 *                             - \ref CLK_PWDBCTL_SWKDBCLKSEL_32x256
 *                             - \ref CLK_PWDBCTL_SWKDBCLKSEL_64x256
 *                             - \ref CLK_PWDBCTL_SWKDBCLKSEL_128x256
 *
 * @return      None
 *
 * @details     This function set Set De-bounce Sampling Cycle Time.
 *
 * \hideinitializer
 */
#define CLK_SET_SPDDEBOUNCETIME(u32CycleSel)    (CLK->PWDBCTL = (u32CycleSel))

/*---------------------------------------------------------------------------------------------------------*/
/* static inline functions                                                                                 */
/*---------------------------------------------------------------------------------------------------------*/
/* Declare these inline functions here to avoid MISRA C 2004 rule 8.1 error */
__STATIC_INLINE int32_t CLK_SysTickDelay(uint32_t us);
__STATIC_INLINE int32_t CLK_SysTickLongDelay(uint32_t us);

/**
  * @brief      This function execute delay function.
  * @param[in]  us  Delay time. The Max value is 2^24 / CPU Clock(MHz). Ex:
  *                             72MHz => 233016us, 50MHz => 335544us,
  *                             48MHz => 349525us, 28MHz => 699050us ...
  * @return     Delay success or not
  * @retval     0                   Success, target delay time reached
  * @retval     CLK_TIMEOUT_ERR     Delay function execute failed due to SysTick stop working
  * @details    Use the SysTick to generate the delay time and the unit is in us.
  *             The SysTick clock source is from HCLK, i.e the same as system core clock.
  */
__STATIC_INLINE int32_t CLK_SysTickDelay(uint32_t us)
{
    /* The u32TimeOutCnt value must be greater than the max delay time of 1398ms if HCLK=12MHz */
    uint32_t u32TimeOutCnt = SystemCoreClock * 2;

    SysTick->LOAD = us * CyclesPerUs;
    SysTick->VAL  = 0x0UL;
    SysTick->CTRL = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk;

    /* Waiting for down-count to zero */
    while((SysTick->CTRL & SysTick_CTRL_COUNTFLAG_Msk) == 0UL)
    {
        if(--u32TimeOutCnt == 0)
        {
            break;
        }
    }

    /* Disable SysTick counter */
    SysTick->CTRL = 0UL;

    if(u32TimeOutCnt == 0)
        return CLK_TIMEOUT_ERR;
    else
        return 0;
}

/**
  * @brief      This function execute long delay function.
  * @param[in]  us  Delay time.
  * @return     Delay success or not
  * @retval     0                   Success, target delay time reached
  * @retval     CLK_TIMEOUT_ERR     Delay function execute failed due to SysTick stop working
  * @details    Use the SysTick to generate the long delay time and the UNIT is in us.
  *             The SysTick clock source is from HCLK, i.e the same as system core clock.
  *             User can use SystemCoreClockUpdate() to calculate CyclesPerUs automatically before using this function.
  */
__STATIC_INLINE int32_t CLK_SysTickLongDelay(uint32_t us)
{
    /* The u32TimeOutCnt value must be greater than the max delay time of 1398ms if HCLK=12MHz */
    uint32_t u32TimeOutCnt = SystemCoreClock * 2;
    uint32_t delay;

    /* It should <= 349525us for each delay loop */
    delay = 349525UL;

    do
    {
        if(us > delay)
        {
            us -= delay;
        }
        else
        {
            delay = us;
            us = 0UL;
        }

        SysTick->LOAD = delay * CyclesPerUs;
        SysTick->VAL  = (0x0UL);
        SysTick->CTRL = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk;

        /* Waiting for down-count to zero */
        while((SysTick->CTRL & SysTick_CTRL_COUNTFLAG_Msk) == 0UL)
        {
            if(--u32TimeOutCnt == 0)
            {
                break;
            }
        }

        /* Disable SysTick counter */
        SysTick->CTRL = 0UL;

        if(u32TimeOutCnt == 0)
            return CLK_TIMEOUT_ERR;
        else
            return 0;
    }
    while(us > 0UL);
}


void     CLK_DisableCKO(void);
void     CLK_EnableCKO(uint32_t u32ClkSrc, uint32_t u32ClkDiv, uint32_t u32ClkDivBy1En);
void     CLK_PowerDown(void);
void     CLK_Idle(void);
uint32_t CLK_GetHXTFreq(void);
uint32_t CLK_GetLXTFreq(void);
uint32_t CLK_GetHCLKFreq(void);
uint32_t CLK_GetPCLK0Freq(void);
uint32_t CLK_GetPCLK1Freq(void);
uint32_t CLK_GetCPUFreq(void);
uint32_t CLK_SetCoreClock(uint32_t u32Hclk);
void     CLK_SetHCLK(uint32_t u32ClkSrc, uint32_t u32ClkDiv);
void     CLK_SetModuleClock(uint32_t u32ModuleIdx, uint32_t u32ClkSrc, uint32_t u32ClkDiv);
void     CLK_SetSysTickClockSrc(uint32_t u32ClkSrc);
void     CLK_EnableXtalRC(uint32_t u32ClkMask);
void     CLK_DisableXtalRC(uint32_t u32ClkMask);
void     CLK_EnableModuleClock(uint32_t u32ModuleIdx);
void     CLK_DisableModuleClock(uint32_t u32ModuleIdx);
uint32_t CLK_EnablePLL(uint32_t u32PllClkSrc, uint32_t u32PllFreq);
void     CLK_DisablePLL(void);
uint32_t CLK_WaitClockReady(uint32_t u32ClkMask);
void     CLK_EnableSysTick(uint32_t u32ClkSrc, uint32_t u32Count);
void     CLK_DisableSysTick(void);
void     CLK_SetPowerDownMode(uint32_t u32PDMode);
void     CLK_EnableDPDWKPin(uint32_t u32Pin, uint32_t u32TriggerType);
uint32_t CLK_GetPMUWKSrc(void);
void     CLK_EnableSPDWKPin(uint32_t u32Port, uint32_t u32Pin, uint32_t u32TriggerType, uint32_t u32DebounceEn);
uint32_t CLK_GetPLLClockFreq(void);
uint32_t CLK_GetModuleClockSource(uint32_t u32ModuleIdx);
uint32_t CLK_GetModuleClockDivider(uint32_t u32ModuleIdx);
uint32_t CLK_GetMIRCFreq(void);
void     CLK_DisableMIRC(void);
uint32_t CLK_EnableMIRC(uint32_t u32MircFreq);
uint32_t CLK_GetHCLK1Freq(void);
uint32_t CLK_GetPCLK2Freq(void);

/*@}*/ /* end of group CLK_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group CLK_Driver */

/*@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif  /* __CLK_H__ */

/*** (C) COPYRIGHT 2023 Nuvoton Technology Corp. ***/
