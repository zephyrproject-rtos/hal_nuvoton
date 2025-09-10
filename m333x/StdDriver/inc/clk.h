/**************************************************************************//**
 * @file     CLK.h
 * @version  V3.00
 * @brief    CLK Driver Header File
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (c) 2025 Nuvoton Technology Corp. All rights reserved.
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


#define FREQ_1MHZ          1000000UL    /*!< 1 MHz \hideinitializer */
#define FREQ_4MHZ          4000000UL    /*!< 4 MHz \hideinitializer */
#define FREQ_8MHZ          8000000UL    /*!< 8 MHz \hideinitializer */
#define FREQ_24MHZ         24000000UL   /*!< 24 MHz \hideinitializer */
#define FREQ_25MHZ         25000000UL   /*!< 25 MHz \hideinitializer */
#define FREQ_48MHZ         48000000UL   /*!< 48 MHz \hideinitializer */
#define FREQ_50MHZ         50000000UL   /*!< 50 MHz \hideinitializer */
#define FREQ_64MHZ         64000000UL   /*!< 64 MHz \hideinitializer */
#define FREQ_75MHZ         75000000UL   /*!< 75 MHz \hideinitializer */
#define FREQ_96MHZ         96000000UL   /*!< 96 MHz \hideinitializer */
#define FREQ_100MHZ        100000000UL  /*!< 100 MHz \hideinitializer */
#define FREQ_125MHZ        125000000UL  /*!< 125 MHz \hideinitializer */
#define FREQ_150MHZ        150000000UL  /*!< 150 MHz \hideinitializer */
#define FREQ_160MHZ        160000000UL  /*!< 160 MHz \hideinitializer */
#define FREQ_175MHZ        175000000UL  /*!< 175 MHz \hideinitializer */
#define FREQ_180MHZ        180000000UL  /*!< 180 MHz \hideinitializer */
#define FREQ_192MHZ        192000000UL  /*!< 192 MHz \hideinitializer */
#define FREQ_200MHZ        200000000UL  /*!< 200 MHz \hideinitializer */
#define FREQ_500MHZ        500000000UL  /*!< 500 MHz \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  CLKSEL0 constant definitions.  (Write-protection)                                                      */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKSEL0_HCLKSEL_HXT          (0x0UL << CLK_CLKSEL0_HCLKSEL_Pos)         /*!< Select HCLK clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL0_HCLKSEL_LXT          (0x1UL << CLK_CLKSEL0_HCLKSEL_Pos)         /*!< Select HCLK clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL0_HCLKSEL_PLL          (0x2UL << CLK_CLKSEL0_HCLKSEL_Pos)         /*!< Select HCLK clock source from PLL \hideinitializer */
#define CLK_CLKSEL0_HCLKSEL_LIRC         (0x3UL << CLK_CLKSEL0_HCLKSEL_Pos)         /*!< Select HCLK clock source from low speed oscillator \hideinitializer */
#define CLK_CLKSEL0_HCLKSEL_HIRC         (0x7UL << CLK_CLKSEL0_HCLKSEL_Pos)         /*!< Select HCLK clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL0_STCLKSEL_HXT         (0x0UL << CLK_CLKSEL0_STCLKSEL_Pos)        /*!< Select SysTick clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL0_STCLKSEL_LXT         (0x1UL << CLK_CLKSEL0_STCLKSEL_Pos)        /*!< Select SysTick clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL0_STCLKSEL_HXT_DIV2    (0x2UL << CLK_CLKSEL0_STCLKSEL_Pos)        /*!< Select SysTick clock source from HXT/2 \hideinitializer */
#define CLK_CLKSEL0_STCLKSEL_HCLK_DIV2   (0x3UL << CLK_CLKSEL0_STCLKSEL_Pos)        /*!< Select SysTick clock source from HCLK/2 \hideinitializer */
#define CLK_CLKSEL0_STCLKSEL_HIRC_DIV2   (0x7UL << CLK_CLKSEL0_STCLKSEL_Pos)        /*!< Select SysTick clock source from HIRC/2 \hideinitializer */
#define CLK_CLKSEL0_STCLKSEL_HCLK        (0x1UL << SysTick_CTRL_CLKSOURCE_Pos)      /*!< Select SysTick clock source from HCLK \hideinitializer */

#define CLK_CLKSEL0_EADC0SEL_HCLK        (0x0UL << CLK_CLKSEL0_EADC0SEL_Pos)        /*!< Select EADC0 clock source from HCLK \hideinitializer */
#define CLK_CLKSEL0_EADC0SEL_PLL_DIV2    (0x1UL << CLK_CLKSEL0_EADC0SEL_Pos)        /*!< Select EADC0 clock source from PLL/2 \hideinitializer */

#define CLK_CLKSEL0_SDH0SEL_HXT          (0x0UL << CLK_CLKSEL0_SDH0SEL_Pos)         /*!< Select SDH0 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL0_SDH0SEL_PLL_DIV2     (0x1UL << CLK_CLKSEL0_SDH0SEL_Pos)         /*!< Select SDH0 clock source from PLL/2 \hideinitializer */
#define CLK_CLKSEL0_SDH0SEL_HCLK         (0x2UL << CLK_CLKSEL0_SDH0SEL_Pos)         /*!< Select SDH0 clock source from HCLK \hideinitializer */
#define CLK_CLKSEL0_SDH0SEL_HIRC         (0x3UL << CLK_CLKSEL0_SDH0SEL_Pos)         /*!< Select SDH0 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL0_CANFD0SEL_HXT        (0x0UL << CLK_CLKSEL0_CANFD0SEL_Pos)       /*!< Select CANFD0 clock source from HXT \hideinitializer */
#define CLK_CLKSEL0_CANFD0SEL_PLL_DIV2   (0x1UL << CLK_CLKSEL0_CANFD0SEL_Pos)       /*!< Select CANFD0 clock source from PLL/2 \hideinitializer */
#define CLK_CLKSEL0_CANFD0SEL_HCLK       (0x2UL << CLK_CLKSEL0_CANFD0SEL_Pos)       /*!< Select CANFD0 clock source from HCLK \hideinitializer */
#define CLK_CLKSEL0_CANFD0SEL_HIRC       (0x3UL << CLK_CLKSEL0_CANFD0SEL_Pos)       /*!< Select CANFD0 clock source from HIRC \hideinitializer */

#define CLK_CLKSEL0_CANFD1SEL_HXT        (0x0UL << CLK_CLKSEL0_CANFD1SEL_Pos)       /*!< Select CANFD1 clock source from HXT \hideinitializer */
#define CLK_CLKSEL0_CANFD1SEL_PLL_DIV2   (0x1UL << CLK_CLKSEL0_CANFD1SEL_Pos)       /*!< Select CANFD1 clock source from PLL/2 \hideinitializer */
#define CLK_CLKSEL0_CANFD1SEL_HCLK       (0x2UL << CLK_CLKSEL0_CANFD1SEL_Pos)       /*!< Select CANFD1 clock source from HCLK \hideinitializer */
#define CLK_CLKSEL0_CANFD1SEL_HIRC       (0x3UL << CLK_CLKSEL0_CANFD1SEL_Pos)       /*!< Select CANFD1 clock source from HIRC \hideinitializer */


/*---------------------------------------------------------------------------------------------------------*/
/*  CLKSEL1 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKSEL1_WDT0SEL_LXT          (0x1UL << CLK_CLKSEL1_WDT0SEL_Pos)         /*!< Select WDT0 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL1_WDT0SEL_HCLK_DIV2048 (0x2UL << CLK_CLKSEL1_WDT0SEL_Pos)         /*!< Select WDT0 clock source from HCLK/2048 \hideinitializer */
#define CLK_CLKSEL1_WDT0SEL_LIRC         (0x3UL << CLK_CLKSEL1_WDT0SEL_Pos)         /*!< Select WDT0 clock source from low speed oscillator \hideinitializer */

#define CLK_CLKSEL1_WDT1SEL_LXT          (0x1UL << CLK_CLKSEL1_WDT1SEL_Pos)         /*!< Select WDT1 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL1_WDT1SEL_HCLK_DIV2048 (0x2UL << CLK_CLKSEL1_WDT1SEL_Pos)         /*!< Select WDT1 clock source from HCLK/2048 \hideinitializer */
#define CLK_CLKSEL1_WDT1SEL_LIRC         (0x3UL << CLK_CLKSEL1_WDT1SEL_Pos)         /*!< Select WDT1 clock source from low speed oscillator \hideinitializer */

#define CLK_CLKSEL1_CLKOSEL_HXT          (0x0UL << CLK_CLKSEL1_CLKOSEL_Pos)         /*!< Select CLKO clock source from HXT \hideinitializer */
#define CLK_CLKSEL1_CLKOSEL_LXT          (0x1UL << CLK_CLKSEL1_CLKOSEL_Pos)         /*!< Select CLKO clock source from LXT \hideinitializer */
#define CLK_CLKSEL1_CLKOSEL_HCLK         (0x2UL << CLK_CLKSEL1_CLKOSEL_Pos)         /*!< Select CLKO clock source from HCLK \hideinitializer */
#define CLK_CLKSEL1_CLKOSEL_HIRC         (0x3UL << CLK_CLKSEL1_CLKOSEL_Pos)         /*!< Select CLKO clock source from HIRC \hideinitializer */
#define CLK_CLKSEL1_CLKOSEL_LIRC         (0x4UL << CLK_CLKSEL1_CLKOSEL_Pos)         /*!< Select CLKO clock source from LIRC \hideinitializer */
#define CLK_CLKSEL1_CLKOSEL_PLL_DIV2     (0x5UL << CLK_CLKSEL1_CLKOSEL_Pos)         /*!< Select CLKO clock source from PLL/2 \hideinitializer */

#define CLK_CLKSEL1_TMR0SEL_HXT          (0x0UL << CLK_CLKSEL1_TMR0SEL_Pos)         /*!< Select TMR0 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL1_TMR0SEL_LXT          (0x1UL << CLK_CLKSEL1_TMR0SEL_Pos)         /*!< Select TMR0 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL1_TMR0SEL_PCLK0        (0x2UL << CLK_CLKSEL1_TMR0SEL_Pos)         /*!< Select TMR0 clock source from PCLK0 \hideinitializer */
#define CLK_CLKSEL1_TMR0SEL_EXT          (0x3UL << CLK_CLKSEL1_TMR0SEL_Pos)         /*!< Select TMR0 clock source from external trigger \hideinitializer */
#define CLK_CLKSEL1_TMR0SEL_LIRC         (0x5UL << CLK_CLKSEL1_TMR0SEL_Pos)         /*!< Select TMR0 clock source from low speed oscillator \hideinitializer */
#define CLK_CLKSEL1_TMR0SEL_HIRC         (0x7UL << CLK_CLKSEL1_TMR0SEL_Pos)         /*!< Select TMR0 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL1_TMR1SEL_HXT          (0x0UL << CLK_CLKSEL1_TMR1SEL_Pos)         /*!< Select TMR1 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL1_TMR1SEL_LXT          (0x1UL << CLK_CLKSEL1_TMR1SEL_Pos)         /*!< Select TMR1 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL1_TMR1SEL_PCLK0        (0x2UL << CLK_CLKSEL1_TMR1SEL_Pos)         /*!< Select TMR1 clock source from PCLK0 \hideinitializer */
#define CLK_CLKSEL1_TMR1SEL_EXT          (0x3UL << CLK_CLKSEL1_TMR1SEL_Pos)         /*!< Select TMR1 clock source from external trigger \hideinitializer */
#define CLK_CLKSEL1_TMR1SEL_LIRC         (0x5UL << CLK_CLKSEL1_TMR1SEL_Pos)         /*!< Select TMR1 clock source from low speed oscillator \hideinitializer */
#define CLK_CLKSEL1_TMR1SEL_HIRC         (0x7UL << CLK_CLKSEL1_TMR1SEL_Pos)         /*!< Select TMR1 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL1_TMR2SEL_HXT          (0x0UL << CLK_CLKSEL1_TMR2SEL_Pos)         /*!< Select TMR2 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL1_TMR2SEL_LXT          (0x1UL << CLK_CLKSEL1_TMR2SEL_Pos)         /*!< Select TMR2 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL1_TMR2SEL_PCLK1        (0x2UL << CLK_CLKSEL1_TMR2SEL_Pos)         /*!< Select TMR2 clock source from PCLK1 \hideinitializer */
#define CLK_CLKSEL1_TMR2SEL_EXT          (0x3UL << CLK_CLKSEL1_TMR2SEL_Pos)         /*!< Select TMR2 clock source from external trigger \hideinitializer */
#define CLK_CLKSEL1_TMR2SEL_LIRC         (0x5UL << CLK_CLKSEL1_TMR2SEL_Pos)         /*!< Select TMR2 clock source from low speed oscillator \hideinitializer */
#define CLK_CLKSEL1_TMR2SEL_HIRC         (0x7UL << CLK_CLKSEL1_TMR2SEL_Pos)         /*!< Select TMR2 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL1_TMR3SEL_HXT          (0x0UL << CLK_CLKSEL1_TMR3SEL_Pos)         /*!< Select TMR3 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL1_TMR3SEL_LXT          (0x1UL << CLK_CLKSEL1_TMR3SEL_Pos)         /*!< Select TMR3 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL1_TMR3SEL_PCLK1        (0x2UL << CLK_CLKSEL1_TMR3SEL_Pos)         /*!< Select TMR3 clock source from PCLK1 \hideinitializer */
#define CLK_CLKSEL1_TMR3SEL_EXT          (0x3UL << CLK_CLKSEL1_TMR3SEL_Pos)         /*!< Select TMR3 clock source from external trigger \hideinitializer */
#define CLK_CLKSEL1_TMR3SEL_LIRC         (0x5UL << CLK_CLKSEL1_TMR3SEL_Pos)         /*!< Select TMR3 clock source from low speed oscillator \hideinitializer */
#define CLK_CLKSEL1_TMR3SEL_HIRC         (0x7UL << CLK_CLKSEL1_TMR3SEL_Pos)         /*!< Select TMR3 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL1_UART0SEL_HXT         (0x0UL << CLK_CLKSEL1_UART0SEL_Pos)        /*!< Select UART0 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL1_UART0SEL_PLL_DIV2    (0x1UL << CLK_CLKSEL1_UART0SEL_Pos)        /*!< Select UART0 clock source from PLL/2 \hideinitializer */
#define CLK_CLKSEL1_UART0SEL_LXT         (0x2UL << CLK_CLKSEL1_UART0SEL_Pos)        /*!< Select UART0 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL1_UART0SEL_HIRC        (0x3UL << CLK_CLKSEL1_UART0SEL_Pos)        /*!< Select UART0 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL1_UART1SEL_HXT         (0x0UL << CLK_CLKSEL1_UART1SEL_Pos)        /*!< Select UART1 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL1_UART1SEL_PLL_DIV2    (0x1UL << CLK_CLKSEL1_UART1SEL_Pos)        /*!< Select UART1 clock source from PLL/2 \hideinitializer */
#define CLK_CLKSEL1_UART1SEL_LXT         (0x2UL << CLK_CLKSEL1_UART1SEL_Pos)        /*!< Select UART1 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL1_UART1SEL_HIRC        (0x3UL << CLK_CLKSEL1_UART1SEL_Pos)        /*!< Select UART1 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL1_WWDT0SEL_HCLK_DIV2048 (0x2UL << CLK_CLKSEL1_WWDT0SEL_Pos)       /*!< Select WWDT0 clock source from HCLK/2048 \hideinitializer */
#define CLK_CLKSEL1_WWDT0SEL_LIRC         (0x3UL << CLK_CLKSEL1_WWDT0SEL_Pos)       /*!< Select WWDT0 clock source from low speed oscillator \hideinitializer */

#define CLK_CLKSEL1_WWDT1SEL_HCLK_DIV2048 (0x2UL << CLK_CLKSEL1_WWDT1SEL_Pos)       /*!< Select WWDT0 clock source from HCLK/2048 \hideinitializer */
#define CLK_CLKSEL1_WWDT1SEL_LIRC         (0x3UL << CLK_CLKSEL1_WWDT1SEL_Pos)       /*!< Select WWDT0 clock source from low speed oscillator \hideinitializer */


/*---------------------------------------------------------------------------------------------------------*/
/*  CLKSEL2 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKSEL2_EPWM0SEL_HCLK        (0x0UL << CLK_CLKSEL2_EPWM0SEL_Pos)        /*!< Select EPWM0 clock source from HCLK \hideinitializer */
#define CLK_CLKSEL2_EPWM0SEL_PCLK0       (0x1UL << CLK_CLKSEL2_EPWM0SEL_Pos)        /*!< Select EPWM0 clock source from PCLK0 \hideinitializer */

#define CLK_CLKSEL2_EPWM1SEL_HCLK        (0x0UL << CLK_CLKSEL2_EPWM1SEL_Pos)        /*!< Select EPWM1 clock source from HCLK \hideinitializer */
#define CLK_CLKSEL2_EPWM1SEL_PCLK1       (0x1UL << CLK_CLKSEL2_EPWM1SEL_Pos)        /*!< Select EPWM1 clock source from PCLK1 \hideinitializer */

#define CLK_CLKSEL2_QSPI0SEL_HXT         (0x0UL << CLK_CLKSEL2_QSPI0SEL_Pos)        /*!< Select QSPI0 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL2_QSPI0SEL_PLL_DIV2    (0x1UL << CLK_CLKSEL2_QSPI0SEL_Pos)        /*!< Select QSPI0 clock source from PLL/2 \hideinitializer */
#define CLK_CLKSEL2_QSPI0SEL_PCLK0       (0x2UL << CLK_CLKSEL2_QSPI0SEL_Pos)        /*!< Select QSPI0 clock source from PCLK0 \hideinitializer */
#define CLK_CLKSEL2_QSPI0SEL_HIRC        (0x3UL << CLK_CLKSEL2_QSPI0SEL_Pos)        /*!< Select QSPI0 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL2_SPI0SEL_HXT          (0x0UL << CLK_CLKSEL2_SPI0SEL_Pos)         /*!< Select SPI0 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL2_SPI0SEL_PLL_DIV2     (0x1UL << CLK_CLKSEL2_SPI0SEL_Pos)         /*!< Select SPI0 clock source from PLL/2 \hideinitializer */
#define CLK_CLKSEL2_SPI0SEL_PCLK1        (0x2UL << CLK_CLKSEL2_SPI0SEL_Pos)         /*!< Select SPI0 clock source from PCLK1 \hideinitializer */
#define CLK_CLKSEL2_SPI0SEL_HIRC         (0x3UL << CLK_CLKSEL2_SPI0SEL_Pos)         /*!< Select SPI0 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL2_SPI1SEL_HXT          (0x0UL << CLK_CLKSEL2_SPI1SEL_Pos)         /*!< Select SPI1 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL2_SPI1SEL_PLL_DIV2     (0x1UL << CLK_CLKSEL2_SPI1SEL_Pos)         /*!< Select SPI1 clock source from PLL/2 \hideinitializer */
#define CLK_CLKSEL2_SPI1SEL_PCLK0        (0x2UL << CLK_CLKSEL2_SPI1SEL_Pos)         /*!< Select SPI1 clock source from PCLK0 \hideinitializer */
#define CLK_CLKSEL2_SPI1SEL_HIRC         (0x3UL << CLK_CLKSEL2_SPI1SEL_Pos)         /*!< Select SPI1 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL2_BPWM0SEL_HCLK        (0x0UL << CLK_CLKSEL2_BPWM0SEL_Pos)        /*!< Select BPWM0 clock source from HCLK \hideinitializer */
#define CLK_CLKSEL2_BPWM0SEL_PCLK0       (0x1UL << CLK_CLKSEL2_BPWM0SEL_Pos)        /*!< Select BPWM0 clock source from PCLK0 \hideinitializer */

#define CLK_CLKSEL2_BPWM1SEL_HCLK        (0x0UL << CLK_CLKSEL2_BPWM1SEL_Pos)        /*!< Select BPWM1 clock source from HCLK \hideinitializer */
#define CLK_CLKSEL2_BPWM1SEL_PCLK1       (0x1UL << CLK_CLKSEL2_BPWM1SEL_Pos)        /*!< Select BPWM1 clock source from PCLK1 \hideinitializer */

#define CLK_CLKSEL2_SPI2SEL_HXT          (0x0UL << CLK_CLKSEL2_SPI2SEL_Pos)         /*!< Select SPI2 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL2_SPI2SEL_PLL_DIV2     (0x1UL << CLK_CLKSEL2_SPI2SEL_Pos)         /*!< Select SPI2 clock source from PLL/2 \hideinitializer */
#define CLK_CLKSEL2_SPI2SEL_PCLK1        (0x2UL << CLK_CLKSEL2_SPI2SEL_Pos)         /*!< Select SPI2 clock source from PCLK1 \hideinitializer */
#define CLK_CLKSEL2_SPI2SEL_HIRC         (0x3UL << CLK_CLKSEL2_SPI2SEL_Pos)         /*!< Select SPI2 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL2_BPWM2SEL_HCLK        (0x0UL << CLK_CLKSEL2_BPWM2SEL_Pos)        /*!< Select BPWM2 clock source from HCLK \hideinitializer */
#define CLK_CLKSEL2_BPWM2SEL_PCLK0       (0x1UL << CLK_CLKSEL2_BPWM2SEL_Pos)        /*!< Select BPWM2 clock source from PCLK0 \hideinitializer */

#define CLK_CLKSEL2_BPWM3SEL_HCLK        (0x0UL << CLK_CLKSEL2_BPWM3SEL_Pos)        /*!< Select BPWM3 clock source from HCLK \hideinitializer */
#define CLK_CLKSEL2_BPWM3SEL_PCLK1       (0x1UL << CLK_CLKSEL2_BPWM3SEL_Pos)        /*!< Select BPWM3 clock source from PCLK1 \hideinitializer */

#define CLK_CLKSEL2_BPWM4SEL_HCLK        (0x0UL << CLK_CLKSEL2_BPWM4SEL_Pos)        /*!< Select BPWM4 clock source from HCLK \hideinitializer */
#define CLK_CLKSEL2_BPWM4SEL_PCLK0       (0x1UL << CLK_CLKSEL2_BPWM4SEL_Pos)        /*!< Select BPWM4 clock source from PCLK0 \hideinitializer */

#define CLK_CLKSEL2_BPWM5SEL_HCLK        (0x0UL << CLK_CLKSEL2_BPWM5SEL_Pos)        /*!< Select BPWM5 clock source from HCLK \hideinitializer */
#define CLK_CLKSEL2_BPWM5SEL_PCLK1       (0x1UL << CLK_CLKSEL2_BPWM5SEL_Pos)        /*!< Select BPWM6 clock source from PCLK1 \hideinitializer */


/*---------------------------------------------------------------------------------------------------------*/
/*  CLKSEL3 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKSEL3_I2S0SEL_HXT          (0x0UL << CLK_CLKSEL3_I2S0SEL_Pos)         /*!< Select I2S0 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL3_I2S0SEL_PLL_DIV2     (0x1UL << CLK_CLKSEL3_I2S0SEL_Pos)         /*!< Select I2S0 clock source from PLL/2 \hideinitializer */
#define CLK_CLKSEL3_I2S0SEL_PCLK0        (0x2UL << CLK_CLKSEL3_I2S0SEL_Pos)         /*!< Select I2S0 clock source from PCLK0 \hideinitializer */
#define CLK_CLKSEL3_I2S0SEL_HIRC         (0x3UL << CLK_CLKSEL3_I2S0SEL_Pos)         /*!< Select I2S0 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL3_I3C0SEL_HXT          (0x0UL << CLK_CLKSEL3_I3C0SEL_Pos)         /*!< Select I3C0 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL3_I3C0SEL_HCLK         (0x1UL << CLK_CLKSEL3_I3C0SEL_Pos)         /*!< Select I3C0 clock source from HCLK \hideinitializer */
#define CLK_CLKSEL3_I3C0SEL_PCLK0        (0x2UL << CLK_CLKSEL3_I3C0SEL_Pos)         /*!< Select I3C0 clock source from PCLK0 \hideinitializer */
#define CLK_CLKSEL3_I3C0SEL_HIRC         (0x3UL << CLK_CLKSEL3_I3C0SEL_Pos)         /*!< Select I3C0 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL3_UART2SEL_HXT         (0x0UL << CLK_CLKSEL3_UART2SEL_Pos)        /*!< Select UART2 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL3_UART2SEL_PLL_DIV2    (0x1UL << CLK_CLKSEL3_UART2SEL_Pos)        /*!< Select UART2 clock source from PLL/2 \hideinitializer */
#define CLK_CLKSEL3_UART2SEL_LXT         (0x2UL << CLK_CLKSEL3_UART2SEL_Pos)        /*!< Select UART2 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL3_UART2SEL_HIRC        (0x3UL << CLK_CLKSEL3_UART2SEL_Pos)        /*!< Select UART2 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL3_UART3SEL_HXT         (0x0UL << CLK_CLKSEL3_UART3SEL_Pos)        /*!< Select UART3 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL3_UART3SEL_PLL_DIV2    (0x1UL << CLK_CLKSEL3_UART3SEL_Pos)        /*!< Select UART3 clock source from PLL/2 \hideinitializer */
#define CLK_CLKSEL3_UART3SEL_LXT         (0x2UL << CLK_CLKSEL3_UART3SEL_Pos)        /*!< Select UART3 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL3_UART3SEL_HIRC        (0x3UL << CLK_CLKSEL3_UART3SEL_Pos)        /*!< Select UART3 clock source from high speed oscillator \hideinitializer */

#define CLK_CLKSEL3_UART4SEL_HXT         (0x0UL << CLK_CLKSEL3_UART4SEL_Pos)        /*!< Select UART4 clock source from high speed crystal \hideinitializer */
#define CLK_CLKSEL3_UART4SEL_PLL_DIV2    (0x1UL << CLK_CLKSEL3_UART4SEL_Pos)        /*!< Select UART4 clock source from PLL/2 \hideinitializer */
#define CLK_CLKSEL3_UART4SEL_LXT         (0x2UL << CLK_CLKSEL3_UART4SEL_Pos)        /*!< Select UART4 clock source from low speed crystal \hideinitializer */
#define CLK_CLKSEL3_UART4SEL_HIRC        (0x3UL << CLK_CLKSEL3_UART4SEL_Pos)        /*!< Select UART4 clock source from high speed oscillator \hideinitializer */


/*---------------------------------------------------------------------------------------------------------*/
/*  RTC clock source constant definitions.                                                                 */
/*---------------------------------------------------------------------------------------------------------*/
#define RTC_LXTCTL_RTCCKSEL_LXT          (0x0UL<<RTC_LXTCTL_RTCCKSEL_Pos)           /*!< Setting RTC clock source as LXT \hideinitializer */
#define RTC_LXTCTL_RTCCKSEL_LIRC         (0x1UL<<RTC_LXTCTL_RTCCKSEL_Pos)           /*!< Setting RTC clock source as LIRC \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  CLKDIV0 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKDIV0_HCLK(x)              (((x) - 1UL) << CLK_CLKDIV0_HCLKDIV_Pos)   /*!< CLKDIV0 Setting for HCLK clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV0_SDH0(x)              (((x) - 1UL) << CLK_CLKDIV0_SDH0DIV_Pos)   /*!< CLKDIV0 Setting for SDH0 clock divider. It could be 1~256 \hideinitializer */
#define CLK_CLKDIV0_UART0(x)             (((x) - 1UL) << CLK_CLKDIV0_UART0DIV_Pos)  /*!< CLKDIV0 Setting for UART0 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV0_UART1(x)             (((x) - 1UL) << CLK_CLKDIV0_UART1DIV_Pos)  /*!< CLKDIV0 Setting for UART1 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV0_EADC0(x)             (((x) - 1UL) << CLK_CLKDIV0_EADC0DIV_Pos)  /*!< CLKDIV0 Setting for EADC0 clock divider. It could be 1~256 \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  CLKDIV1 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_CLKDIV1_UART2(x)             (((x) - 1UL) << CLK_CLKDIV1_UART2DIV_Pos)  /*!< CLKDIV1 Setting for UART2 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV1_UART3(x)             (((x) - 1UL) << CLK_CLKDIV1_UART3DIV_Pos)  /*!< CLKDIV1 Setting for UART3 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV1_UART4(x)             (((x) - 1UL) << CLK_CLKDIV1_UART4DIV_Pos)  /*!< CLKDIV1 Setting for UART4 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV1_I2S0(x)              (((x) - 1UL) << CLK_CLKDIV1_I2S0DIV_Pos)   /*!< CLKDIV1 Setting for I2S0 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV1_CANFD0(x)            (((x) - 1UL) << CLK_CLKDIV1_CANFD0DIV_Pos) /*!< CLKDIV1 Setting for CANFD0 clock divider. It could be 1~16 \hideinitializer */
#define CLK_CLKDIV1_CANFD1(x)            (((x) - 1UL) << CLK_CLKDIV1_CANFD1DIV_Pos) /*!< CLKDIV1 Setting for CANFD1 clock divider. It could be 1~16 \hideinitializer */


/*---------------------------------------------------------------------------------------------------------*/
/*  PCLKDIV constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_PCLKDIV_PCLK0DIV1            (0x0UL << CLK_PCLKDIV_APB0DIV_Pos)  /*!< PCLKDIV Setting for PCLK0 = HCLK \hideinitializer */
#define CLK_PCLKDIV_PCLK0DIV2            (0x1UL << CLK_PCLKDIV_APB0DIV_Pos)  /*!< PCLKDIV Setting for PCLK0 = 1/2 HCLK \hideinitializer */
#define CLK_PCLKDIV_PCLK0DIV4            (0x2UL << CLK_PCLKDIV_APB0DIV_Pos)  /*!< PCLKDIV Setting for PCLK0 = 1/4 HCLK \hideinitializer */
#define CLK_PCLKDIV_PCLK0DIV8            (0x3UL << CLK_PCLKDIV_APB0DIV_Pos)  /*!< PCLKDIV Setting for PCLK0 = 1/8 HCLK \hideinitializer */
#define CLK_PCLKDIV_PCLK0DIV16           (0x4UL << CLK_PCLKDIV_APB0DIV_Pos)  /*!< PCLKDIV Setting for PCLK0 = 1/16 HCLK \hideinitializer */
#define CLK_PCLKDIV_PCLK1DIV1            (0x0UL << CLK_PCLKDIV_APB1DIV_Pos)  /*!< PCLKDIV Setting for PCLK1 = HCLK \hideinitializer */
#define CLK_PCLKDIV_PCLK1DIV2            (0x1UL << CLK_PCLKDIV_APB1DIV_Pos)  /*!< PCLKDIV Setting for PCLK1 = 1/2 HCLK \hideinitializer */
#define CLK_PCLKDIV_PCLK1DIV4            (0x2UL << CLK_PCLKDIV_APB1DIV_Pos)  /*!< PCLKDIV Setting for PCLK1 = 1/4 HCLK \hideinitializer */
#define CLK_PCLKDIV_PCLK1DIV8            (0x3UL << CLK_PCLKDIV_APB1DIV_Pos)  /*!< PCLKDIV Setting for PCLK1 = 1/8 HCLK \hideinitializer */
#define CLK_PCLKDIV_PCLK1DIV16           (0x4UL << CLK_PCLKDIV_APB1DIV_Pos)  /*!< PCLKDIV Setting for PCLK1 = 1/16 HCLK \hideinitializer */

#define CLK_PCLKDIV_APB0DIV_DIV1         (0x0UL << CLK_PCLKDIV_APB0DIV_Pos)  /*!< PCLKDIV Setting for PCLK0 = HCLK \hideinitializer */
#define CLK_PCLKDIV_APB0DIV_DIV2         (0x1UL << CLK_PCLKDIV_APB0DIV_Pos)  /*!< PCLKDIV Setting for PCLK0 = 1/2 HCLK \hideinitializer */
#define CLK_PCLKDIV_APB0DIV_DIV4         (0x2UL << CLK_PCLKDIV_APB0DIV_Pos)  /*!< PCLKDIV Setting for PCLK0 = 1/4 HCLK \hideinitializer */
#define CLK_PCLKDIV_APB0DIV_DIV8         (0x3UL << CLK_PCLKDIV_APB0DIV_Pos)  /*!< PCLKDIV Setting for PCLK0 = 1/8 HCLK \hideinitializer */
#define CLK_PCLKDIV_APB0DIV_DIV16        (0x4UL << CLK_PCLKDIV_APB0DIV_Pos)  /*!< PCLKDIV Setting for PCLK0 = 1/16 HCLK \hideinitializer */
#define CLK_PCLKDIV_APB1DIV_DIV1         (0x0UL << CLK_PCLKDIV_APB1DIV_Pos)  /*!< PCLKDIV Setting for PCLK1 = HCLK \hideinitializer */
#define CLK_PCLKDIV_APB1DIV_DIV2         (0x1UL << CLK_PCLKDIV_APB1DIV_Pos)  /*!< PCLKDIV Setting for PCLK1 = 1/2 HCLK \hideinitializer */
#define CLK_PCLKDIV_APB1DIV_DIV4         (0x2UL << CLK_PCLKDIV_APB1DIV_Pos)  /*!< PCLKDIV Setting for PCLK1 = 1/4 HCLK \hideinitializer */
#define CLK_PCLKDIV_APB1DIV_DIV8         (0x3UL << CLK_PCLKDIV_APB1DIV_Pos)  /*!< PCLKDIV Setting for PCLK1 = 1/8 HCLK \hideinitializer */
#define CLK_PCLKDIV_APB1DIV_DIV16        (0x4UL << CLK_PCLKDIV_APB1DIV_Pos)  /*!< PCLKDIV Setting for PCLK1 = 1/16 HCLK \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  PLLCTL constant definitions. PLL = FIN * 2 * NF / NR / NO                                              */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_PLLCTL_PLLSRC_HXT           (0x0UL << CLK_PLLCTL_PLLSRC_Pos)    /*!< For PLL clock source is HXT.    1MHz < FIN/NR < 8MHz \hideinitializer */
#define CLK_PLLCTL_PLLSRC_HIRC_DIV4     (0x1UL << CLK_PLLCTL_PLLSRC_Pos)    /*!< For PLL clock source is HIRC/4. 1MHz < FIN/NR < 8MHz \hideinitializer */

#define CLK_PLLCTL_NF(x)                (((x)-2UL)<<CLK_PLLCTL_FBDIV_Pos)   /*!< x must be constant and 12 <= x <= 255. 200MHz < FIN*2*NF/NR < 500MHz. \hideinitializer */
#define CLK_PLLCTL_NR(x)                (((x)-1UL)<<CLK_PLLCTL_INDIV_Pos)   /*!< x must be constant and 1 <= x <= 32.  1MHz < FIN/NR < 8MHz \hideinitializer */

#define CLK_PLLCTL_NO_1                 (0x0UL << CLK_PLLCTL_OUTDIV_Pos)    /*!< For output divider is 1 \hideinitializer */
#define CLK_PLLCTL_NO_2                 (0x1UL << CLK_PLLCTL_OUTDIV_Pos)    /*!< For output divider is 2 \hideinitializer */
#define CLK_PLLCTL_NO_4                 (0x3UL << CLK_PLLCTL_OUTDIV_Pos)    /*!< For output divider is 4 \hideinitializer */

#define CLK_PLLCTL_STBSEL_1200          (0x0UL<<CLK_PLLCTL_STBSEL_Pos)      /*!< PLL stable time is 1200 PLL source clock (suitable for source clock equal to or less than 12 MHz) */
#define CLK_PLLCTL_STBSEL_2400          (0x1UL<<CLK_PLLCTL_STBSEL_Pos)      /*!< PLL stable time is 2400 PLL source clock (suitable for source clock greater than 12 MHz) */

#if (__HXT == 12000000)
#define CLK_PLLCTL_72MHz_HXT    (CLK_PLLCTL_PLLSRC_HXT  | CLK_PLLCTL_NR(3UL) | CLK_PLLCTL_NF( 36UL) | CLK_PLLCTL_NO_4) /*!< Predefined PLLCTL setting for 72MHz PLL output with HXT(12MHz X'tal) \hideinitializer */
#define CLK_PLLCTL_80MHz_HXT    (CLK_PLLCTL_PLLSRC_HXT  | CLK_PLLCTL_NR(3UL) | CLK_PLLCTL_NF( 40UL) | CLK_PLLCTL_NO_4) /*!< Predefined PLLCTL setting for 80MHz PLL output with HXT(12MHz X'tal) \hideinitializer */
#define CLK_PLLCTL_144MHz_HXT   (CLK_PLLCTL_PLLSRC_HXT  | CLK_PLLCTL_NR(2UL) | CLK_PLLCTL_NF( 24UL) | CLK_PLLCTL_NO_2) /*!< Predefined PLLCTL setting for 144MHz PLL output with HXT(12MHz X'tal) \hideinitializer */
#define CLK_PLLCTL_160MHz_HXT   (CLK_PLLCTL_PLLSRC_HXT  | CLK_PLLCTL_NR(3UL) | CLK_PLLCTL_NF( 40UL) | CLK_PLLCTL_NO_2) /*!< Predefined PLLCTL setting for 160MHz PLL output with HXT(12MHz X'tal) \hideinitializer */
#define CLK_PLLCTL_180MHz_HXT   (CLK_PLLCTL_PLLSRC_HXT  | CLK_PLLCTL_NR(3UL) | CLK_PLLCTL_NF( 45UL) | CLK_PLLCTL_NO_2) /*!< Predefined PLLCTL setting for 180MHz PLL output with HXT(12MHz X'tal) \hideinitializer */
#else
#define CLK_PLLCTL_72MHz_HXT    CLK_CalculatePLLSetting(CLK_PLLCTL_PLLSRC_HXT, 72000000)  /*!< PLLCTL setting for 72MHz PLL output with HXT */
#define CLK_PLLCTL_80MHz_HXT    CLK_CalculatePLLSetting(CLK_PLLCTL_PLLSRC_HXT, 80000000)  /*!< PLLCTL setting for 80MHz PLL output with HXT */
#define CLK_PLLCTL_144MHz_HXT   CLK_CalculatePLLSetting(CLK_PLLCTL_PLLSRC_HXT, 144000000) /*!< PLLCTL setting for 144MHz PLL output with HXT */
#define CLK_PLLCTL_160MHz_HXT   CLK_CalculatePLLSetting(CLK_PLLCTL_PLLSRC_HXT, 160000000) /*!< PLLCTL setting for 160MHz PLL output with HXT */
#define CLK_PLLCTL_180MHz_HXT   CLK_CalculatePLLSetting(CLK_PLLCTL_PLLSRC_HXT, 180000000) /*!< PLLCTL setting for 180MHz PLL output with HXT */
#endif
#define CLK_PLLCTL_72MHz_HIRC_DIV4   (CLK_PLLCTL_PLLSRC_HIRC_DIV4 | CLK_PLLCTL_NR(3UL) | CLK_PLLCTL_NF( 36UL) | CLK_PLLCTL_NO_4) /*!< Predefined PLLCTL setting for 72MHz PLL output with HIRC(48MHz IRC)/4 \hideinitializer */
#define CLK_PLLCTL_80MHz_HIRC_DIV4   (CLK_PLLCTL_PLLSRC_HIRC_DIV4 | CLK_PLLCTL_NR(3UL) | CLK_PLLCTL_NF( 40UL) | CLK_PLLCTL_NO_4) /*!< Predefined PLLCTL setting for 80MHz PLL output with HIRC(48MHz IRC)/4 \hideinitializer */
#define CLK_PLLCTL_144MHz_HIRC_DIV4  (CLK_PLLCTL_PLLSRC_HIRC_DIV4 | CLK_PLLCTL_NR(2UL) | CLK_PLLCTL_NF( 24UL) | CLK_PLLCTL_NO_2) /*!< Predefined PLLCTL setting for 144MHz PLL output with HIRC(48MHz IRC)/4 \hideinitializer */
#define CLK_PLLCTL_160MHz_HIRC_DIV4  (CLK_PLLCTL_PLLSRC_HIRC_DIV4 | CLK_PLLCTL_NR(3UL) | CLK_PLLCTL_NF( 40UL) | CLK_PLLCTL_NO_2) /*!< Predefined PLLCTL setting for 160MHz PLL output with HIRC(48MHz IRC)/4 \hideinitializer */
#define CLK_PLLCTL_180MHz_HIRC_DIV4  (CLK_PLLCTL_PLLSRC_HIRC_DIV4 | CLK_PLLCTL_NR(3UL) | CLK_PLLCTL_NF( 45UL) | CLK_PLLCTL_NO_2) /*!< Predefined PLLCTL setting for 180MHz PLL output with HIRC(48MHz IRC)/4 \hideinitializer */


/*---------------------------------------------------------------------------------------------------------*/
/*  MODULE constant definitions.                                                                           */
/*---------------------------------------------------------------------------------------------------------*/
/* APBCLK(31:29)|CLKSEL(28:26)|CLKSEL_Msk(25:22)|CLKSEL_Pos(21:17)|CLKDIV(16:14)|CLKDIV_Msk(13:10)|CLKDIV_Pos(9:5)|IP_EN_Pos(4:0) */

#define MODULE_APBCLK(x)        (((x) >>29) & 0x07UL)   /*!< Calculate AHBCLK/APBCLK offset on MODULE index, 0x0:AHBCLK0, 0x1:APBCLK0, 0x2:APBCLK1, 0x3:APBCLK2 \hideinitializer */
#define MODULE_CLKSEL(x)        (((x) >>26) & 0x07UL)   /*!< Calculate CLKSEL offset on MODULE index, 0x0:CLKSEL0, 0x1:CLKSEL1, 0x2:CLKSEL2, 0x3:CLKSEL3 \hideinitializer */
#define MODULE_CLKSEL_Msk(x)    (((x) >>22) & 0x0fUL)   /*!< Calculate CLKSEL mask offset on MODULE index \hideinitializer */
#define MODULE_CLKSEL_Pos(x)    (((x) >>17) & 0x1fUL)   /*!< Calculate CLKSEL position offset on MODULE index \hideinitializer */
#define MODULE_CLKDIV(x)        (((x) >>14) & 0x07UL)   /*!< Calculate CLKDIV offset on MODULE index, 0x0:CLKDIV0, 0x1:CLKDIV1 \hideinitializer */
#define MODULE_CLKDIV_Msk(x)    (((x) >>10) & 0x0fUL)   /*!< Calculate CLKDIV mask offset on MODULE index \hideinitializer */
#define MODULE_CLKDIV_Pos(x)    (((x) >>5 ) & 0x1fUL)   /*!< Calculate CLKDIV position offset on MODULE index \hideinitializer */
#define MODULE_IP_EN_Pos(x)     (((x) >>0 ) & 0x1fUL)   /*!< Calculate APBCLK offset on MODULE index \hideinitializer */
#define MODULE_NoMsk            0x0UL                   /*!< Not mask on MODULE index \hideinitializer */
#define NA                      MODULE_NoMsk            /*!< Not Available \hideinitializer */

#define MODULE_APBCLK_ENC(x)        (((x) & 0x07UL) << 29)   /*!< MODULE index, 0x0:AHBCLK0, 0x1:APBCLK0, 0x2:APBCLK1, 0x3:APBCLK2 \hideinitializer */
#define MODULE_CLKSEL_ENC(x)        (((x) & 0x07UL) << 26)   /*!< CLKSEL offset on MODULE index, 0x0:CLKSEL0, 0x1:CLKSEL1, 0x2:CLKSEL2, 0x3:CLKSEL3 \hideinitializer */
#define MODULE_CLKSEL_Msk_ENC(x)    (((x) & 0x0fUL) << 22)   /*!< CLKSEL mask offset on MODULE index \hideinitializer */
#define MODULE_CLKSEL_Pos_ENC(x)    (((x) & 0x1fUL) << 17)   /*!< CLKSEL position offset on MODULE index \hideinitializer */
#define MODULE_CLKDIV_ENC(x)        (((x) & 0x07UL) << 14)   /*!< APBCLK CLKDIV on MODULE index, 0x0:CLKDIV0, 0x1:CLKDIV1 \hideinitializer */
#define MODULE_CLKDIV_Msk_ENC(x)    (((x) & 0x0fUL) << 10)   /*!< CLKDIV mask offset on MODULE index \hideinitializer */
#define MODULE_CLKDIV_Pos_ENC(x)    (((x) & 0x1fUL) <<  5)   /*!< CLKDIV position offset on MODULE index \hideinitializer */
#define MODULE_IP_EN_Pos_ENC(x)     (((x) & 0x1fUL) <<  0)   /*!< AHBCLK/APBCLK offset on MODULE index \hideinitializer */

/* AHBCLK0 */
#define PDMA0_MODULE   (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_PDMA0CKEN_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< PDMA0 Module */

#define ISP_MODULE     (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_ISPCKEN_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< ISP Module */

#define EBI_MODULE     (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_EBICKEN_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< EBI Module */

#define ST_MODULE      (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_STCKEN_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< ST Module */

#define SDH0_MODULE    (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_SDH0CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 0UL)|MODULE_CLKSEL_Msk_ENC(   3UL)|MODULE_CLKSEL_Pos_ENC(20UL)|\
                        MODULE_CLKDIV_ENC( 0UL)|MODULE_CLKDIV_Msk_ENC(0x0FUL)|MODULE_CLKDIV_Pos_ENC(24UL))  /*!< SDH0 Module */

#define PDMA1_MODULE   (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_PDMA1CKEN_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< PDMA1 Module */

#define CRC_MODULE     (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_CRCCKEN_Pos)|\
                        MODULE_CLKSEL_ENC( NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC( NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))         /*!< CRC Module */

#define CANFD0_MODULE  (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_CANFD0CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 0UL)|MODULE_CLKSEL_Msk_ENC(   3UL)|MODULE_CLKSEL_Pos_ENC((uint32_t)CLK_CLKSEL0_CANFD0SEL_Pos)|\
                        MODULE_CLKDIV_ENC( 1UL)|MODULE_CLKDIV_Msk_ENC(0x0FUL)|MODULE_CLKDIV_Pos_ENC((uint32_t)CLK_CLKDIV1_CANFD0DIV_Pos))  /*!< CANFD0 Module */

#define CANFD1_MODULE  (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_CANFD1CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 0UL)|MODULE_CLKSEL_Msk_ENC(   3UL)|MODULE_CLKSEL_Pos_ENC((uint32_t)CLK_CLKSEL0_CANFD1SEL_Pos)|\
                        MODULE_CLKDIV_ENC( 1UL)|MODULE_CLKDIV_Msk_ENC(0x0FUL)|MODULE_CLKDIV_Pos_ENC((uint32_t)CLK_CLKDIV1_CANFD1DIV_Pos))  /*!< CANFD1 Module */

#define HSUSBD_MODULE  (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_HSUSBDCKEN_Pos)|\
                        MODULE_CLKSEL_ENC( NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC( NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))         /*!< HSUSBD Module */

#define PDCI_MODULE    (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_PDCICKEN_Pos)|\
                        MODULE_CLKSEL_ENC( NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC( NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))         /*!< PDCI Module */

#define FMCIDLE_MODULE (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_FMCIDLE_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< FMCIDLE Module */

#define USBH_MODULE    (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_USBHCKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 0UL)|MODULE_CLKSEL_Msk_ENC(  1UL)|MODULE_CLKSEL_Pos_ENC( 8UL)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(   NA)|MODULE_CLKDIV_Pos_ENC( NA))   /*!< USBH Module */

#define CANRAM0_MODULE (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_CANRAM0EN_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< CANRAM0 Module */

#define CANRAM1_MODULE (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_CANRAM1EN_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< CANRAM1 Module */

#define TRACE_MODULE   (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_TRACECKEN_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< TRACE Module */

#define GPA_MODULE     (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_GPACKEN_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< GPA Module */

#define GPB_MODULE     (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_GPBCKEN_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< GPB Module */

#define GPC_MODULE     (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_GPCCKEN_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< GPC Module */

#define GPD_MODULE     (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_GPDCKEN_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< GPD Module */

#define GPE_MODULE     (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_GPECKEN_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< GPE Module */

#define GPF_MODULE     (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_GPFCKEN_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< GPF Module */

#define GPG_MODULE     (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_GPGCKEN_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< GPG Module */

#define GPH_MODULE     (MODULE_APBCLK_ENC( 0UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_AHBCLK0_GPHCKEN_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< GPH Module */

/* APBCLK0 */
#define WDT0_MODULE    (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_WDT0CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 1UL)|MODULE_CLKSEL_Msk_ENC( 3UL)|MODULE_CLKSEL_Pos_ENC((uint32_t)CLK_CLKSEL1_WDT0SEL_Pos)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(  NA)|MODULE_CLKDIV_Pos_ENC( NA))     /*!< WDT0 Module */

#define WDT1_MODULE    (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_WDT1CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 1UL)|MODULE_CLKSEL_Msk_ENC( 3UL)|MODULE_CLKSEL_Pos_ENC((uint32_t)CLK_CLKSEL1_WDT1SEL_Pos)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(  NA)|MODULE_CLKDIV_Pos_ENC( NA))     /*!< WDT1 Module */

#define WWDT0_MODULE   (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_WWDT0CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 1UL)|MODULE_CLKSEL_Msk_ENC( 3UL)|MODULE_CLKSEL_Pos_ENC((uint32_t)CLK_CLKSEL1_WWDT0SEL_Pos)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(  NA)|MODULE_CLKDIV_Pos_ENC(  NA))    /*!< WWDT0 Module */

#define WWDT1_MODULE   (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_WWDT1CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 1UL)|MODULE_CLKSEL_Msk_ENC( 3UL)|MODULE_CLKSEL_Pos_ENC((uint32_t)CLK_CLKSEL1_WWDT1SEL_Pos)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(  NA)|MODULE_CLKDIV_Pos_ENC(  NA))    /*!< WWDT1 Module */

#define RTC_MODULE     (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_RTCCKEN_Pos)|\
                        MODULE_CLKSEL_ENC( NA)|MODULE_CLKSEL_Msk_ENC( NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC( NA)|MODULE_CLKDIV_Msk_ENC( NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< RTC Module */

#define TMR0_MODULE    (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_TMR0CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 1UL)|MODULE_CLKSEL_Msk_ENC( 7UL)|MODULE_CLKSEL_Pos_ENC( 8UL)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(  NA)|MODULE_CLKDIV_Pos_ENC(  NA))    /*!< TMR0 Module */

#define TMR1_MODULE    (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_TMR1CKEN_Pos) |\
                        MODULE_CLKSEL_ENC( 1UL)|MODULE_CLKSEL_Msk_ENC( 7UL)|MODULE_CLKSEL_Pos_ENC(12UL)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(   NA))     /*!< TMR1 Module */

#define TMR2_MODULE    (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_TMR2CKEN_Pos) |\
                        MODULE_CLKSEL_ENC( 1UL)|MODULE_CLKSEL_Msk_ENC( 7UL)|MODULE_CLKSEL_Pos_ENC(16UL)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(    NA))    /*!< TMR2 Module */

#define TMR3_MODULE    (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_TMR3CKEN_Pos) |\
                        MODULE_CLKSEL_ENC( 1UL)|MODULE_CLKSEL_Msk_ENC( 7UL)|MODULE_CLKSEL_Pos_ENC(20UL)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(   NA))     /*!< TMR3 Module */

#define CLKO_MODULE    (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_CLKOCKEN_Pos) |\
                        MODULE_CLKSEL_ENC( 1UL)|MODULE_CLKSEL_Msk_ENC( 7UL)|MODULE_CLKSEL_Pos_ENC( 4UL)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(   NA))     /*!< CLKO Module */

#define ACMP01_MODULE  (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_ACMP01CKEN_Pos) |\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< ACMP01 Module */

#define I2C0_MODULE    (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_I2C0CKEN_Pos) |\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< I2C0 Module */

#define I2C1_MODULE    (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_I2C1CKEN_Pos) |\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< I2C1 Module */

#define I2C2_MODULE    (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_I2C2CKEN_Pos) |\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< I2C2 Module */

#define I3C0_MODULE    (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_I3C0CKEN_Pos) |\
                        MODULE_CLKSEL_ENC( 3UL)|MODULE_CLKSEL_Msk_ENC(3UL)|MODULE_CLKSEL_Pos_ENC((uint32_t)CLK_CLKSEL3_I3C0SEL_Pos)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC( NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< I3C0 Module */

#define QSPI0_MODULE   (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_QSPI0CKEN_Pos) |\
                        MODULE_CLKSEL_ENC( 2UL)|MODULE_CLKSEL_Msk_ENC( 3UL)|MODULE_CLKSEL_Pos_ENC( 2UL)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(  NA)|MODULE_CLKDIV_Pos_ENC(  NA))    /*!< QSPI0 Module */

#define SPI0_MODULE    (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_SPI0CKEN_Pos) |\
                        MODULE_CLKSEL_ENC( 2UL)|MODULE_CLKSEL_Msk_ENC( 3UL)|MODULE_CLKSEL_Pos_ENC((uint32_t)CLK_CLKSEL2_SPI0SEL_Pos)|\
                        MODULE_CLKDIV_ENC(NA)|MODULE_CLKDIV_Msk_ENC(   NA)|MODULE_CLKDIV_Pos_ENC(  NA))     /*!< SPI0 Module */

#define SPI1_MODULE    (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_SPI1CKEN_Pos) |\
                        MODULE_CLKSEL_ENC( 2UL)|MODULE_CLKSEL_Msk_ENC( 3UL)|MODULE_CLKSEL_Pos_ENC((uint32_t)CLK_CLKSEL2_SPI1SEL_Pos)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(  NA)|MODULE_CLKDIV_Pos_ENC(  NA))    /*!< SPI1 Module */

#define SPI2_MODULE    (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_SPI2CKEN_Pos) |\
                        MODULE_CLKSEL_ENC( 2UL)|MODULE_CLKSEL_Msk_ENC( 3UL)|MODULE_CLKSEL_Pos_ENC((uint32_t)CLK_CLKSEL2_SPI2SEL_Pos)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(  NA)|MODULE_CLKDIV_Pos_ENC(  NA))    /*!< SPI2 Module */

#define UART0_MODULE   (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_UART0CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 1UL)|MODULE_CLKSEL_Msk_ENC(   3UL)|MODULE_CLKSEL_Pos_ENC(24UL)|\
                        MODULE_CLKDIV_ENC( 0UL)|MODULE_CLKDIV_Msk_ENC(0x0FUL)|MODULE_CLKDIV_Pos_ENC( 8UL))  /*!< UART0 Module */

#define UART1_MODULE   (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_UART1CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 1UL)|MODULE_CLKSEL_Msk_ENC(   3UL)|MODULE_CLKSEL_Pos_ENC(26UL)|\
                        MODULE_CLKDIV_ENC( 0UL)|MODULE_CLKDIV_Msk_ENC(0x0FUL)|MODULE_CLKDIV_Pos_ENC(12UL))  /*!< UART1 Module */

#define UART2_MODULE   (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_UART2CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 3UL)|MODULE_CLKSEL_Msk_ENC( 3UL)|MODULE_CLKSEL_Pos_ENC(24UL)|\
                        MODULE_CLKDIV_ENC( 1UL)|MODULE_CLKDIV_Msk_ENC(0x0FUL)|MODULE_CLKDIV_Pos_ENC((uint32_t)CLK_CLKDIV1_UART2DIV_Pos))  /*!< UART2 Module */

#define UART3_MODULE   (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_UART3CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 3UL)|MODULE_CLKSEL_Msk_ENC(   3UL)|MODULE_CLKSEL_Pos_ENC(26UL)|\
                        MODULE_CLKDIV_ENC( 1UL)|MODULE_CLKDIV_Msk_ENC(0x0FUL)|MODULE_CLKDIV_Pos_ENC((uint32_t)CLK_CLKDIV1_UART3DIV_Pos))  /*!< UART3 Module */

#define UART4_MODULE   (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_UART4CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 3UL)|MODULE_CLKSEL_Msk_ENC(   3UL)|MODULE_CLKSEL_Pos_ENC(28UL)|\
                        MODULE_CLKDIV_ENC( 1UL)|MODULE_CLKDIV_Msk_ENC(0x0FUL)|MODULE_CLKDIV_Pos_ENC((uint32_t)CLK_CLKDIV1_UART4DIV_Pos))  /*!< UART4 Module */

#define EADC0_MODULE   (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_EADC0CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 0UL)|MODULE_CLKSEL_Msk_ENC(   1UL)|MODULE_CLKSEL_Pos_ENC(10UL)|\
                        MODULE_CLKDIV_ENC( 0UL)|MODULE_CLKDIV_Msk_ENC(0x0FUL)|MODULE_CLKDIV_Pos_ENC(16UL))  /*!< EADC0 Module */

#define I2S0_MODULE    (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_I2S0CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 3UL)|MODULE_CLKSEL_Msk_ENC(   3UL)|MODULE_CLKSEL_Pos_ENC((uint32_t)CLK_CLKSEL3_I2S0SEL_Pos)|\
                        MODULE_CLKDIV_ENC( 1UL)|MODULE_CLKDIV_Msk_ENC(0x0FUL)|MODULE_CLKDIV_Pos_ENC((uint32_t)CLK_CLKDIV1_I2S0DIV_Pos))  /*!< I2S0 Module */

#define HSOTG_MODULE   (MODULE_APBCLK_ENC( 1UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK0_HSOTGCKEN_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< HSOTG Module */

/* APBCLK1 */
#define USCI0_MODULE   (MODULE_APBCLK_ENC( 2UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK1_USCI0CKEN_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< USCI0 Module */

#define USCI1_MODULE   (MODULE_APBCLK_ENC( 2UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK1_USCI1CKEN_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< USCI1 Module */

#define EPWM0_MODULE   (MODULE_APBCLK_ENC( 2UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK1_EPWM0CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 2UL)|MODULE_CLKSEL_Msk_ENC( 1UL)|MODULE_CLKSEL_Pos_ENC( 0UL)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< EPWM0 Module */

#define EPWM1_MODULE   (MODULE_APBCLK_ENC( 2UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK1_EPWM1CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 2UL)|MODULE_CLKSEL_Msk_ENC( 1UL)|MODULE_CLKSEL_Pos_ENC( 1UL)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< EPWM1 Module */

#define BPWM0_MODULE   (MODULE_APBCLK_ENC( 2UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK1_BPWM0CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 2UL)|MODULE_CLKSEL_Msk_ENC( 1UL)|MODULE_CLKSEL_Pos_ENC( 8UL)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< BPWM0 Module */

#define BPWM1_MODULE   (MODULE_APBCLK_ENC( 2UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK1_BPWM1CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 2UL)|MODULE_CLKSEL_Msk_ENC( 1UL)|MODULE_CLKSEL_Pos_ENC( 9UL)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< BPWM1 Module */

#define EQEI0_MODULE   (MODULE_APBCLK_ENC( 2UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK1_EQEI0CKEN_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< EQEI0 Module */

#define ECAP0_MODULE   (MODULE_APBCLK_ENC( 2UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK1_ECAP0CKEN_Pos)|\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< ECAP0 Module */

#define BPWM2_MODULE   (MODULE_APBCLK_ENC( 2UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK1_BPWM2CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 2UL)|MODULE_CLKSEL_Msk_ENC( 1UL)|MODULE_CLKSEL_Pos_ENC((uint32_t)CLK_CLKSEL2_BPWM2SEL_Pos)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< BPWM2 Module */

#define BPWM3_MODULE   (MODULE_APBCLK_ENC( 2UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK1_BPWM3CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 2UL)|MODULE_CLKSEL_Msk_ENC( 1UL)|MODULE_CLKSEL_Pos_ENC((uint32_t)CLK_CLKSEL2_BPWM3SEL_Pos)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< BPWM3 Module */

#define BPWM4_MODULE   (MODULE_APBCLK_ENC( 2UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK1_BPWM4CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 2UL)|MODULE_CLKSEL_Msk_ENC( 1UL)|MODULE_CLKSEL_Pos_ENC((uint32_t)CLK_CLKSEL2_BPWM4SEL_Pos)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< BPWM4 Module */

#define BPWM5_MODULE   (MODULE_APBCLK_ENC( 2UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK1_BPWM5CKEN_Pos)|\
                        MODULE_CLKSEL_ENC( 2UL)|MODULE_CLKSEL_Msk_ENC( 1UL)|MODULE_CLKSEL_Pos_ENC((uint32_t)CLK_CLKSEL2_BPWM5SEL_Pos)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< BPWM5 Module */

/* APBCLK2 */
#define LLSI0_MODULE   (MODULE_APBCLK_ENC( 3UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK2_LLSI0CKEN_Pos)  |\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< LLSI0 Module */

#define LLSI1_MODULE   (MODULE_APBCLK_ENC( 3UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK2_LLSI1CKEN_Pos)  |\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< LLSI1 Module */

#define LLSI2_MODULE   (MODULE_APBCLK_ENC( 3UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK2_LLSI2CKEN_Pos)  |\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< LLSI2 Module */

#define LLSI3_MODULE   (MODULE_APBCLK_ENC( 3UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK2_LLSI3CKEN_Pos)  |\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< LLSI3 Module */

#define LLSI4_MODULE   (MODULE_APBCLK_ENC( 3UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK2_LLSI4CKEN_Pos)  |\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< LLSI4 Module */

#define LLSI5_MODULE   (MODULE_APBCLK_ENC( 3UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK2_LLSI5CKEN_Pos)  |\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< LLSI5 Module */

#define LLSI6_MODULE   (MODULE_APBCLK_ENC( 3UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK2_LLSI6CKEN_Pos)  |\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< LLSI6 Module */

#define LLSI7_MODULE   (MODULE_APBCLK_ENC( 3UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK2_LLSI7CKEN_Pos)  |\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< LLSI7 Module */

#define LLSI8_MODULE   (MODULE_APBCLK_ENC( 3UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK2_LLSI8CKEN_Pos)  |\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< LLSI8 Module */

#define LLSI9_MODULE   (MODULE_APBCLK_ENC( 3UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK2_LLSI9CKEN_Pos)  |\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< LLSI9 Module */

#define ELLSI0_MODULE  (MODULE_APBCLK_ENC( 3UL)|MODULE_IP_EN_Pos_ENC((uint32_t)CLK_APBCLK2_ELLSI0CKEN_Pos)  |\
                        MODULE_CLKSEL_ENC(  NA)|MODULE_CLKSEL_Msk_ENC(NA)|MODULE_CLKSEL_Pos_ENC(NA)|\
                        MODULE_CLKDIV_ENC(  NA)|MODULE_CLKDIV_Msk_ENC(NA)|MODULE_CLKDIV_Pos_ENC(NA))        /*!< ELLSI0 Module */


/*---------------------------------------------------------------------------------------------------------*/
/*  PDMSEL constant definitions.                                                                           */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_PMUCTL_PDMSEL_NPD0  (0x2UL << CLK_PMUCTL_PDMSEL_Pos)    /*!< Select power down mode is Normal Power-down mode 0 (NPD0) \hideinitializer */
#define CLK_PMUCTL_PDMSEL_NPD1  (0x0UL << CLK_PMUCTL_PDMSEL_Pos)    /*!< Select power down mode is Normal Power-down mode 1 (NPD1) \hideinitializer */
#define CLK_PMUCTL_PDMSEL_NPD2  (0x1UL << CLK_PMUCTL_PDMSEL_Pos)    /*!< Select power down mode is Normal Power-down mode 2 (NPD2) \hideinitializer */
#define CLK_PMUCTL_PDMSEL_SPD   (0x4UL << CLK_PMUCTL_PDMSEL_Pos)    /*!< Select power down mode is Standby Power-down mode \hideinitializer */
#define CLK_PMUCTL_PDMSEL_DPD   (0x6UL << CLK_PMUCTL_PDMSEL_Pos)    /*!< Select power down mode is Deep Power-down mode \hideinitializer */

#define CLK_PMUCTL_PDMSEL_FWPD   CLK_PMUCTL_PDMSEL_NPD0             /*!< Select power down mode is Fast wake-up Power-down mode (FWPD) \hideinitializer */
#define CLK_PMUCTL_PDMSEL_NPD    CLK_PMUCTL_PDMSEL_NPD1             /*!< Select power down mode is Normal Power-down mode (NPD) \hideinitializer */
#define CLK_PMUCTL_PDMSEL_LLPD   CLK_PMUCTL_PDMSEL_NPD2             /*!< Select power down mode is Low leakage Power-down mode (LLPD) \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  WKTMRIS constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_PMUCTL_WKTMRIS_512          (0x0UL << CLK_PMUCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 512 LIRC clocks \hideinitializer */
#define CLK_PMUCTL_WKTMRIS_1024         (0x1UL << CLK_PMUCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 1024 LIRC clocks \hideinitializer */
#define CLK_PMUCTL_WKTMRIS_2048         (0x2UL << CLK_PMUCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 2048 LIRC clocks \hideinitializer */
#define CLK_PMUCTL_WKTMRIS_4096         (0x3UL << CLK_PMUCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 4096 LIRC clocks \hideinitializer */
#define CLK_PMUCTL_WKTMRIS_8192         (0x4UL << CLK_PMUCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 8192 LIRC clocks \hideinitializer */
#define CLK_PMUCTL_WKTMRIS_16384        (0x5UL << CLK_PMUCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 16384 LIRC clocks \hideinitializer */
#define CLK_PMUCTL_WKTMRIS_32768        (0x6UL << CLK_PMUCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 32768 LIRC clocks \hideinitializer */
#define CLK_PMUCTL_WKTMRIS_65536        (0x7UL << CLK_PMUCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 65536 LIRC clocks \hideinitializer */
#define CLK_PMUCTL_WKTMRIS_131072       (0x8UL << CLK_PMUCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 131072 LIRC clocks \hideinitializer */
#define CLK_PMUCTL_WKTMRIS_262144       (0x9UL << CLK_PMUCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 262144 LIRC clocks \hideinitializer */
#define CLK_PMUCTL_WKTMRIS_524288       (0xaUL << CLK_PMUCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 524288 LIRC clocks \hideinitializer */
#define CLK_PMUCTL_WKTMRIS_1048576      (0xbUL << CLK_PMUCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 1048576 LIRC clocks \hideinitializer */
#define CLK_PMUCTL_WKTMRIS_2097152      (0xcUL << CLK_PMUCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 2097152 LIRC clocks \hideinitializer */
#define CLK_PMUCTL_WKTMRIS_4194304      (0xdUL << CLK_PMUCTL_WKTMRIS_Pos)     /*!< Select Wake-up Timer Time-out Interval is 4194304 LIRC clocks \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  WKDBCLKSEL constant definitions.                                                                       */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_PWDBCTL_WKDBCLKSEL_1          (0x0UL << CLK_PWDBCTL_WKDBCLKSEL_Pos)     /*!< Select Wake-up I/O De-bounce Sampling Cycle is 1 clocks \hideinitializer */
#define CLK_PWDBCTL_WKDBCLKSEL_2          (0x1UL << CLK_PWDBCTL_WKDBCLKSEL_Pos)     /*!< Select Wake-up I/O De-bounce Sampling Cycle is 2 clocks \hideinitializer */
#define CLK_PWDBCTL_WKDBCLKSEL_4          (0x2UL << CLK_PWDBCTL_WKDBCLKSEL_Pos)     /*!< Select Wake-up I/O De-bounce Sampling Cycle is 4 clocks \hideinitializer */
#define CLK_PWDBCTL_WKDBCLKSEL_8          (0x3UL << CLK_PWDBCTL_WKDBCLKSEL_Pos)     /*!< Select Wake-up I/O De-bounce Sampling Cycle is 8 clocks \hideinitializer */
#define CLK_PWDBCTL_WKDBCLKSEL_16         (0x4UL << CLK_PWDBCTL_WKDBCLKSEL_Pos)     /*!< Select Wake-up I/O De-bounce Sampling Cycle is 16 clocks \hideinitializer */
#define CLK_PWDBCTL_WKDBCLKSEL_32         (0x5UL << CLK_PWDBCTL_WKDBCLKSEL_Pos)     /*!< Select Wake-up I/O De-bounce Sampling Cycle is 32 clocks \hideinitializer */
#define CLK_PWDBCTL_WKDBCLKSEL_64         (0x6UL << CLK_PWDBCTL_WKDBCLKSEL_Pos)     /*!< Select Wake-up I/O De-bounce Sampling Cycle is 64 clocks \hideinitializer */
#define CLK_PWDBCTL_WKDBCLKSEL_128        (0x7UL << CLK_PWDBCTL_WKDBCLKSEL_Pos)     /*!< Select Wake-up I/O De-bounce Sampling Cycle is 128 clocks \hideinitializer */
#define CLK_PWDBCTL_WKDBCLKSEL_256        (0x8UL << CLK_PWDBCTL_WKDBCLKSEL_Pos)     /*!< Select Wake-up I/O De-bounce Sampling Cycle is 256 clocks \hideinitializer */
#define CLK_PWDBCTL_WKDBCLKSEL_2x256      (0x9UL << CLK_PWDBCTL_WKDBCLKSEL_Pos)     /*!< Select Wake-up I/O De-bounce Sampling Cycle is 2x256 clocks \hideinitializer */
#define CLK_PWDBCTL_WKDBCLKSEL_4x256      (0xaUL << CLK_PWDBCTL_WKDBCLKSEL_Pos)     /*!< Select Wake-up I/O De-bounce Sampling Cycle is 4x256 clocks \hideinitializer */
#define CLK_PWDBCTL_WKDBCLKSEL_8x256      (0xbUL << CLK_PWDBCTL_WKDBCLKSEL_Pos)     /*!< Select Wake-up I/O De-bounce Sampling Cycle is 8x256 clocks \hideinitializer */
#define CLK_PWDBCTL_WKDBCLKSEL_16x256     (0xcUL << CLK_PWDBCTL_WKDBCLKSEL_Pos)     /*!< Select Wake-up I/O De-bounce Sampling Cycle is 16x256 clocks \hideinitializer */
#define CLK_PWDBCTL_WKDBCLKSEL_32x256     (0xdUL << CLK_PWDBCTL_WKDBCLKSEL_Pos)     /*!< Select Wake-up I/O De-bounce Sampling Cycle is 32x256 clocks \hideinitializer */
#define CLK_PWDBCTL_WKDBCLKSEL_64x256     (0xeUL << CLK_PWDBCTL_WKDBCLKSEL_Pos)     /*!< Select Wake-up I/O De-bounce Sampling Cycle is 64x256 clocks \hideinitializer */
#define CLK_PWDBCTL_WKDBCLKSEL_128x256    (0xfUL << CLK_PWDBCTL_WKDBCLKSEL_Pos)     /*!< Select Wake-up I/O De-bounce Sampling Cycle is 128x256 clocks \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  DPD Pin Rising/Falling Edge Wake-up Enable constant definitions.                                       */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_DPDWKPIN0_DISABLE    (0x0UL << CLK_PMUCTL_WKPINEN0_Pos)    /*!< Disable Wake-up pin0 (GPC.0) at Deep Power-down mode \hideinitializer */
#define CLK_DPDWKPIN0_RISING     (0x1UL << CLK_PMUCTL_WKPINEN0_Pos)    /*!< Enable Wake-up pin0 (GPC.0) rising edge at Deep Power-down mode \hideinitializer */
#define CLK_DPDWKPIN0_FALLING    (0x2UL << CLK_PMUCTL_WKPINEN0_Pos)    /*!< Enable Wake-up pin0 (GPC.0) falling edge at Deep Power-down mode \hideinitializer */
#define CLK_DPDWKPIN0_BOTHEDGE   (0x3UL << CLK_PMUCTL_WKPINEN0_Pos)    /*!< Enable Wake-up pin0 (GPC.0) both edge at Deep Power-down mode \hideinitializer */

#define CLK_DPDWKPIN1_DISABLE    (0x0UL << CLK_PMUCTL_WKPINEN1_Pos)    /*!< Disable Wake-up pin1 (GPB.0) at Deep Power-down mode \hideinitializer */
#define CLK_DPDWKPIN1_RISING     (0x1UL << CLK_PMUCTL_WKPINEN1_Pos)    /*!< Enable Wake-up pin1 (GPB.0) rising edge at Deep Power-down mode \hideinitializer */
#define CLK_DPDWKPIN1_FALLING    (0x2UL << CLK_PMUCTL_WKPINEN1_Pos)    /*!< Enable Wake-up pin1 (GPB.0) falling edge at Deep Power-down mode \hideinitializer */
#define CLK_DPDWKPIN1_BOTHEDGE   (0x3UL << CLK_PMUCTL_WKPINEN1_Pos)    /*!< Enable Wake-up pin1 (GPB.0) both edge at Deep Power-down mode \hideinitializer */

#define CLK_DPDWKPIN2_DISABLE    (0x0UL << CLK_PMUCTL_WKPINEN2_Pos)    /*!< Disable Wake-up pin2 (GPB.2) at Deep Power-down mode \hideinitializer */
#define CLK_DPDWKPIN2_RISING     (0x1UL << CLK_PMUCTL_WKPINEN2_Pos)    /*!< Enable Wake-up pin2 (GPB.2) rising edge at Deep Power-down mode \hideinitializer */
#define CLK_DPDWKPIN2_FALLING    (0x2UL << CLK_PMUCTL_WKPINEN2_Pos)    /*!< Enable Wake-up pin2 (GPB.2) falling edge at Deep Power-down mode \hideinitializer */
#define CLK_DPDWKPIN2_BOTHEDGE   (0x3UL << CLK_PMUCTL_WKPINEN2_Pos)    /*!< Enable Wake-up pin2 (GPB.2) both edge at Deep Power-down mode \hideinitializer */

#define CLK_DPDWKPIN3_DISABLE    (0x0UL << CLK_PMUCTL_WKPINEN3_Pos)    /*!< Disable Wake-up pin3 (GPB.12) at Deep Power-down mode \hideinitializer */
#define CLK_DPDWKPIN3_RISING     (0x1UL << CLK_PMUCTL_WKPINEN3_Pos)    /*!< Enable Wake-up pin3 (GPB.12) rising edge at Deep Power-down mode \hideinitializer */
#define CLK_DPDWKPIN3_FALLING    (0x2UL << CLK_PMUCTL_WKPINEN3_Pos)    /*!< Enable Wake-up pin3 (GPB.12) falling edge at Deep Power-down mode \hideinitializer */
#define CLK_DPDWKPIN3_BOTHEDGE   (0x3UL << CLK_PMUCTL_WKPINEN3_Pos)    /*!< Enable Wake-up pin3 (GPB.12) both edge at Deep Power-down mode \hideinitializer */

#define CLK_DPDWKPIN4_DISABLE    (0x0UL << CLK_PMUCTL_WKPINEN4_Pos)    /*!< Disable Wake-up pin4 (GPF.6) at Deep Power-down mode \hideinitializer */
#define CLK_DPDWKPIN4_RISING     (0x1UL << CLK_PMUCTL_WKPINEN4_Pos)    /*!< Enable Wake-up pin4 (GPF.6) rising edge at Deep Power-down mode \hideinitializer */
#define CLK_DPDWKPIN4_FALLING    (0x2UL << CLK_PMUCTL_WKPINEN4_Pos)    /*!< Enable Wake-up pin4 (GPF.6) falling edge at Deep Power-down mode \hideinitializer */
#define CLK_DPDWKPIN4_BOTHEDGE   (0x3UL << CLK_PMUCTL_WKPINEN4_Pos)    /*!< Enable Wake-up pin4 (GPF.6) both edge at Deep Power-down mode \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  SPD Pin (WKIO) Rising/Falling Edge Wake-up Enable constant definitions.                                */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_SPDWKPIN_ENABLE         (0x1UL << CLK_PAPWCTL_WKEN0_Pos)      /*!< Enable Standby Power-down Pin Wake-up \hideinitializer */
#define CLK_SPDWKPIN_RISING         (0x1UL << CLK_PAPWCTL_PRWKEN0_Pos)    /*!< Standby Power-down Wake-up on Standby Power-down Pin rising edge \hideinitializer */
#define CLK_SPDWKPIN_FALLING        (0x1UL << CLK_PAPWCTL_PFWKEN0_Pos)    /*!< Standby Power-down Wake-up on Standby Power-down Pin falling edge \hideinitializer */
#define CLK_SPDWKPIN_DEBOUNCEEN     (0x1UL << CLK_PAPWCTL_DBEN0_Pos)      /*!< Enable Standby power-down pin De-bounce function \hideinitializer */
#define CLK_SPDWKPIN_DEBOUNCEDIS    (0x0UL << CLK_PAPWCTL_DBEN0_Pos)      /*!< Disable Standby power-down pin De-bounce function \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  SRAM Retention Range Selection constant definitions.                                                   */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_SPDSRETSEL_NO           (0x0UL << CLK_PMUCTL_SRETSEL_Pos)     /*!< No SRAM retention when chip enter SPD mode \hideinitializer */

/* For M3331G */
#define CLK_SPDSRETSEL_32K_M3331G   (0x1UL << CLK_PMUCTL_SRETSEL_Pos)     /*!< 32K SRAM retention when chip enter SPD mode for M3331G \hideinitializer */
#define CLK_SPDSRETSEL_64K_M3331G   (0x2UL << CLK_PMUCTL_SRETSEL_Pos)     /*!< 64K SRAM retention when chip enter SPD mode for M3331G \hideinitializer */
#define CLK_SPDSRETSEL_96K_M3331G   (0x3UL << CLK_PMUCTL_SRETSEL_Pos)     /*!< 96K SRAM retention when chip enter SPD mode for M3331G \hideinitializer */

/* For M3331I */
#define CLK_SPDSRETSEL_64K_M3331I   (0x1UL << CLK_PMUCTL_SRETSEL_Pos)     /*!< 64K SRAM retention when chip enter SPD mode for M3331I \hideinitializer */
#define CLK_SPDSRETSEL_192K_M3331I  (0x2UL << CLK_PMUCTL_SRETSEL_Pos)     /*!< 192K SRAM retention when chip enter SPD mode for M3331I \hideinitializer */
#define CLK_SPDSRETSEL_320K_M3331I  (0x3UL << CLK_PMUCTL_SRETSEL_Pos)     /*!< 320K SRAM retention when chip enter SPD mode for M3331I \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  HXT Mode Selection constant definitions.                                                               */
/*---------------------------------------------------------------------------------------------------------*/
#define CLK_PWRCTL_EXTEN_Msk        (CLK_PWRCTL_HXTMD_Msk|CLK_PWRCTL_HXTEN_Msk) /*!< Enable HXT and work as external clock mode. \hideinitializer */


/*@}*/ /* end of group CLK_EXPORTED_CONSTANTS */

/** @addtogroup CLK_EXPORTED_FUNCTIONS CLK Exported Functions
  @{
*/

/**
  * @brief      Disable Wake-up Timer
  * @param      None
  * @return     None
  * @details    This macro disables Wake-up timer.
  */
#define CLK_DISABLE_WKTMR()       (CLK->PMUCTL &= ~CLK_PMUCTL_WKTMREN_Msk)

/**
  * @brief      Enable Wake-up Timer
  * @param      None
  * @return     None
  * @details    This macro enables Wake-up timer.
  */
#define CLK_ENABLE_WKTMR()        (CLK->PMUCTL |= CLK_PMUCTL_WKTMREN_Msk)

/**
  * @brief      Disable DPD Mode Wake-up Pin 0
  * @param      None
  * @return     None
  * @details    This macro disables Wake-up pin 0 (GPC.0) at Deep Power-down mode.
  */
#define CLK_DISABLE_DPDWKPIN0()   (CLK->PMUCTL &= ~CLK_PMUCTL_WKPINEN0_Msk)

/**
  * @brief      Disable DPD Mode Wake-up Pin 1
  * @param      None
  * @return     None
  * @details    This macro disables Wake-up pin 1 (GPB.0) at Deep Power-down mode.
  */
#define CLK_DISABLE_DPDWKPIN1()   (CLK->PMUCTL &= ~CLK_PMUCTL_WKPINEN1_Msk)

/**
  * @brief      Disable DPD Mode Wake-up Pin 2
  * @param      None
  * @return     None
  * @details    This macro disables Wake-up pin 2 (GPB.2) at Deep Power-down mode.
  */
#define CLK_DISABLE_DPDWKPIN2()   (CLK->PMUCTL &= ~CLK_PMUCTL_WKPINEN2_Msk)

/**
  * @brief      Disable DPD Mode Wake-up Pin 3
  * @param      None
  * @return     None
  * @details    This macro disables Wake-up pin 3 (GPB.12) at Deep Power-down mode.
  */
#define CLK_DISABLE_DPDWKPIN3()   (CLK->PMUCTL &= ~CLK_PMUCTL_WKPINEN3_Msk)

/**
  * @brief      Disable DPD Mode Wake-up Pin 4
  * @param      None
  * @return     None
  * @details    This macro disables Wake-up pin 4 (GPF.6) at Deep Power-down mode.
  */
#define CLK_DISABLE_DPDWKPIN4()   (CLK->PMUCTL &= ~CLK_PMUCTL_WKPINEN4_Msk)

/**
  * @brief      Disable DPD Mode VBUS Wake-up
  * @param      None
  * @return     None
  * @details    This macro disables VBUS Wake-up pin (GPA.12) at Deep Power-down mode.
  */
#define CLK_DISABLE_DPDVBUS()     (CLK->PMUCTL &= ~CLK_PMUCTL_VBUSWKEN_Msk)

/**
  * @brief      Enable DPD Mode VBUS Wake-up
  * @param      None
  * @return     None
  * @details    This macro enables VBUS Wake-up pin (GPA.12) at Deep Power-down mode.
  */
#define CLK_ENABLE_DPDVBUS()      (CLK->PMUCTL |= CLK_PMUCTL_VBUSWKEN_Msk)

/**
  * @brief      Disable SPD Mode ACMP Wake-up
  * @param      None
  * @return     None
  * @details    This macro disables ACMP wake-up at Standby Power-down mode.
  */
#define CLK_DISABLE_SPDACMP()     (CLK->PMUCTL &= ~CLK_PMUCTL_ACMPSPWK_Msk)

/**
  * @brief      Enable SPD Mode ACMP Wake-up
  * @param      None
  * @return     None
  * @details    This macro enables ACMP wake-up at Standby Power-down mode.
  */
#define CLK_ENABLE_SPDACMP()      (CLK->PMUCTL |= CLK_PMUCTL_ACMPSPWK_Msk)

/**
  * @brief      Disable SPD and DPD Mode RTC Wake-up
  * @param      None
  * @return     None
  * @details    This macro disables RTC Wake-up at Standby Power-down mode.
  */
#define CLK_DISABLE_RTCWK()       (CLK->PMUCTL &= ~CLK_PMUCTL_RTCWKEN_Msk)

/**
  * @brief      Enable SPD and DPD Mode RTC Wake-up
  * @param      None
  * @return     None
  * @details    This macro enables RTC Wake-up at Standby Power-down mode.
  */
#define CLK_ENABLE_RTCWK()        (CLK->PMUCTL |= CLK_PMUCTL_RTCWKEN_Msk)

/**
 * @brief       Set Wake-up Timer Time-out Interval
 *
 * @param[in]   u32Interval   The Wake-up Timer Time-out Interval selection. It could be
 *                             - \ref CLK_PMUCTL_WKTMRIS_512
 *                             - \ref CLK_PMUCTL_WKTMRIS_1024
 *                             - \ref CLK_PMUCTL_WKTMRIS_2048
 *                             - \ref CLK_PMUCTL_WKTMRIS_4096
 *                             - \ref CLK_PMUCTL_WKTMRIS_8192
 *                             - \ref CLK_PMUCTL_WKTMRIS_16384
 *                             - \ref CLK_PMUCTL_WKTMRIS_32768
 *                             - \ref CLK_PMUCTL_WKTMRIS_65536
 *                             - \ref CLK_PMUCTL_WKTMRIS_131072
 *                             - \ref CLK_PMUCTL_WKTMRIS_262144
 *                             - \ref CLK_PMUCTL_WKTMRIS_524288
 *                             - \ref CLK_PMUCTL_WKTMRIS_1048576
 *                             - \ref CLK_PMUCTL_WKTMRIS_2097152
 *                             - \ref CLK_PMUCTL_WKTMRIS_4194304
 *
 * @return      None
 *
 * @details     This function set Wake-up Timer Time-out Interval.
 *
 * \hideinitializer
 */
#define CLK_SET_WKTMR_INTERVAL(u32Interval)   CLK->PMUCTL = (CLK->PMUCTL & (~CLK_PMUCTL_WKTMRIS_Msk)) | (u32Interval)

/**
 * @brief       Set De-bounce Sampling Cycle Time for wake-up I/O
 *
 * @param[in]   u32CycleSel   The de-bounce sampling cycle selection. It could be
 *                             - \ref CLK_PWDBCTL_WKDBCLKSEL_1
 *                             - \ref CLK_PWDBCTL_WKDBCLKSEL_2
 *                             - \ref CLK_PWDBCTL_WKDBCLKSEL_4
 *                             - \ref CLK_PWDBCTL_WKDBCLKSEL_8
 *                             - \ref CLK_PWDBCTL_WKDBCLKSEL_16
 *                             - \ref CLK_PWDBCTL_WKDBCLKSEL_32
 *                             - \ref CLK_PWDBCTL_WKDBCLKSEL_64
 *                             - \ref CLK_PWDBCTL_WKDBCLKSEL_128
 *                             - \ref CLK_PWDBCTL_WKDBCLKSEL_256
 *                             - \ref CLK_PWDBCTL_WKDBCLKSEL_2x256
 *                             - \ref CLK_PWDBCTL_WKDBCLKSEL_4x256
 *                             - \ref CLK_PWDBCTL_WKDBCLKSEL_8x256
 *                             - \ref CLK_PWDBCTL_WKDBCLKSEL_16x256
 *                             - \ref CLK_PWDBCTL_WKDBCLKSEL_32x256
 *                             - \ref CLK_PWDBCTL_WKDBCLKSEL_64x256
 *                             - \ref CLK_PWDBCTL_WKDBCLKSEL_128x256
 *
 * @return      None
 *
 * @details     This function set De-bounce Sampling Cycle Time for wake-up I/O.
 *
 * \hideinitializer
 */
#define CLK_SET_SPDDEBOUNCETIME(u32CycleSel)    (CLK->PWDBCTL = (u32CycleSel))

/*---------------------------------------------------------------------------------------------------------*/
/* static inline functions                                                                                 */
/*---------------------------------------------------------------------------------------------------------*/
/* Declare these inline functions here to avoid MISRA C 2004 rule 8.1 error */
__STATIC_INLINE void CLK_SysTickDelay(uint32_t us);
__STATIC_INLINE void CLK_SysTickLongDelay(uint32_t us);

/**
  * @brief      This function execute delay function.
  * @param[in]  us  Delay time. The Max value is 2^24 / CPU Clock(MHz). Ex:
  *                             180MHz => 93206us, 160MHz => 104857us ...
  * @return     None
  * @details    Use the SysTick to generate the delay time and the unit is in us.
  *             The SysTick clock source is from HCLK, i.e the same as system core clock.
  *             User can use SystemCoreClockUpdate() to calculate CyclesPerUs automatically before using this function.
  */
__STATIC_INLINE void CLK_SysTickDelay(uint32_t us)
{
    SysTick->LOAD = us * CyclesPerUs;
    SysTick->VAL  = 0x0UL;
    SysTick->CTRL = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk;

    /* Waiting for down-count to zero */
    while((SysTick->CTRL & SysTick_CTRL_COUNTFLAG_Msk) == 0UL)
    {
    }

    /* Disable SysTick counter */
    SysTick->CTRL = 0UL;
}

/**
  * @brief      This function execute long delay function.
  * @param[in]  us  Delay time.
  * @return     None
  * @details    Use the SysTick to generate the long delay time and the UNIT is in us.
  *             The SysTick clock source is from HCLK, i.e the same as system core clock.
  *             User can use SystemCoreClockUpdate() to calculate CyclesPerUs automatically before using this function.
  */
__STATIC_INLINE void CLK_SysTickLongDelay(uint32_t us)
{
    uint32_t u32Delay;

    /* It should <= 65536us for each delay loop */
    u32Delay = 65536UL;

    do
    {
        if(us > u32Delay)
        {
            us -= u32Delay;
        }
        else
        {
            u32Delay = us;
            us = 0UL;
        }

        SysTick->LOAD = u32Delay * CyclesPerUs;
        SysTick->VAL  = (0x0UL);
        SysTick->CTRL = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk;

        /* Waiting for down-count to zero */
        while((SysTick->CTRL & SysTick_CTRL_COUNTFLAG_Msk) == 0UL);

        /* Disable SysTick counter */
        SysTick->CTRL = 0UL;
    }
    while(us > 0UL);
}

/**
  * @brief      Calculate PLL Setting
  * @param[in]  u32PllClkSrc is PLL clock source. Including :
  *             - \ref CLK_PLLCTL_PLLSRC_HXT
  *             - \ref CLK_PLLCTL_PLLSRC_HIRC
  * @param[in]  u32PllFreq is PLL frequency. The range of u32PllFreq is 50 MHz ~ 500 MHz.
  * @return     PLL setting for CLK_PLLCTL register
  * @details    This function is used to calculate CLK_PLLCTL register setting for specified PLL clock source and frequency.
  */
__STATIC_INLINE uint32_t CLK_CalculatePLLSetting(uint32_t u32PllClkSrc, uint32_t u32PllFreq)
{
    uint32_t u32PllSrcFreq, u32NR, u32NF, u32NO;
    uint32_t u32Tmp, u32Tmp2, u32Tmp3, u32Min, u32MinNF, u32MinNR;

    /* PLL source clock is from HXT */
    if(u32PllClkSrc == CLK_PLLCTL_PLLSRC_HXT)
    {
        /* Select PLL source clock from HXT */
        u32PllSrcFreq = __HXT;
    }

    /* PLL source clock is from HIRC */
    else
    {
        /* Select PLL source clock from HIRC/4 */
        u32PllSrcFreq = (__HIRC>>2);
    }

    /* Check PLL frequency range */
    /* Constraint 1: 50MHz < FOUT < 500MHz */
    if((u32PllFreq <= FREQ_500MHZ) && (u32PllFreq >= FREQ_50MHZ))
    {
        /* Select "NO" according to request frequency */
        if((u32PllFreq < FREQ_100MHZ) && (u32PllFreq >= FREQ_50MHZ))
        {
            u32NO = 3UL;
            u32PllFreq = u32PllFreq << 2;
        }
        else if((u32PllFreq < FREQ_200MHZ) && (u32PllFreq >= FREQ_100MHZ))
        {
            u32NO = 1UL;
            u32PllFreq = u32PllFreq << 1;
        }
        else
        {
            u32NO = 0UL;
        }

        /* Find best solution */
        u32Min = (uint32_t) - 1;    /* initial u32Min to max value of uint32_t (0xFFFFFFFF) */
        u32MinNR = 0UL;
        u32MinNF = 0UL;

        for(u32NR = 1UL; u32NR <= 32UL; u32NR++)   /* NR = 1~32 since NR = INDIV+1 and INDIV = 0~31 */
        {
            u32Tmp = u32PllSrcFreq / u32NR;                     /* FREF = FIN/NR */
            if((u32Tmp >= FREQ_1MHZ) && (u32Tmp <= FREQ_8MHZ))  /* Constraint 2: 1MHz < FREF < 8MHz. */
            {
                for(u32NF = 12UL; u32NF <= 100UL; u32NF++)      /* NF = 12~255. NF = FBDIV+2 and FBDIV = 0~511 */
                                                                /* max NF = 100 to avoid calculation overflow */
                {
                    u32Tmp2 = (u32Tmp * u32NF) << 1;                            /* FVCO = FREF*2*NF */
                    if((u32Tmp2 >= FREQ_200MHZ) && (u32Tmp2 <= FREQ_500MHZ))    /* Constraint 3: 200MHz < FVCO < 500MHz */
                    {
                        u32Tmp3 = (u32Tmp2 > u32PllFreq) ? u32Tmp2 - u32PllFreq : u32PllFreq - u32Tmp2;
                        if(u32Tmp3 < u32Min)
                        {
                            u32Min = u32Tmp3;
                            u32MinNR = u32NR;
                            u32MinNF = u32NF;

                            /* Break when get good results */
                            if(u32Min == 0)
                                break;
                        }
                    }
                }
                if(u32Min == 0)
                    break;
            }
        }

        /* Return PLL setting for CLK_PLLCTL register */
        return ( u32PllClkSrc |
                 (u32NO << CLK_PLLCTL_OUTDIV_Pos) |
                 ((u32MinNR - 1UL) << CLK_PLLCTL_INDIV_Pos) |
                 ((u32MinNF - 2UL) << CLK_PLLCTL_FBDIV_Pos) );
    }
    else
        /* Return PLL power-down setting if input PLL frquency parameter is out of range */
        return CLK_PLLCTL_PD_Msk;

}


void CLK_DisableCKO(void);
void CLK_EnableCKO(uint32_t u32ClkSrc, uint32_t u32ClkDiv, uint32_t u32ClkDivBy1En);
void CLK_PowerDown(void);
void CLK_Idle(void);
__NONSECURE_ENTRY uint32_t CLK_GetHXTFreq(void);
__NONSECURE_ENTRY uint32_t CLK_GetLXTFreq(void);
__NONSECURE_ENTRY uint32_t CLK_GetHCLKFreq(void);
__NONSECURE_ENTRY uint32_t CLK_GetPCLK0Freq(void);
__NONSECURE_ENTRY uint32_t CLK_GetPCLK1Freq(void);
__NONSECURE_ENTRY uint32_t CLK_GetCPUFreq(void);
uint32_t CLK_SetCoreClock(uint32_t u32Hclk);
void CLK_SetHCLK(uint32_t u32ClkSrc, uint32_t u32ClkDiv);
void CLK_SetModuleClock(uint32_t u32ModuleIdx, uint32_t u32ClkSrc, uint32_t u32ClkDiv);
void CLK_SetSysTickClockSrc(uint32_t u32ClkSrc);
void CLK_EnableXtalRC(uint32_t u32ClkMask);
void CLK_DisableXtalRC(uint32_t u32ClkMask);
void CLK_EnableModuleClock(uint32_t u32ModuleIdx);
void CLK_DisableModuleClock(uint32_t u32ModuleIdx);
uint32_t CLK_EnablePLL(uint32_t u32PllClkSrc, uint32_t u32PllFreq);
void CLK_DisablePLL(void);
uint32_t CLK_WaitClockReady(uint32_t u32ClkMask);
void CLK_EnableSysTick(uint32_t u32ClkSrc, uint32_t u32Count);
void CLK_DisableSysTick(void);
void CLK_SetPowerDownMode(uint32_t u32PDMode);
void CLK_EnableDPDWKPin(uint32_t u32TriggerType);
uint32_t CLK_GetPMUWKSrc(void);
void CLK_EnableSPDWKPin(uint32_t u32Port, uint32_t u32Pin, uint32_t u32TriggerType, uint32_t u32DebounceEn);
__NONSECURE_ENTRY uint32_t CLK_GetPLLClockFreq(void);
__NONSECURE_ENTRY uint32_t CLK_GetModuleClockSource(uint32_t u32ModuleIdx);
__NONSECURE_ENTRY uint32_t CLK_GetModuleClockDivider(uint32_t u32ModuleIdx);

/*@}*/ /* end of group CLK_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group CLK_Driver */

/*@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif  /* __CLK_H__ */
