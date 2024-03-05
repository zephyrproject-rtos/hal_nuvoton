/**************************************************************************//**
 * @file     sys.h
 * @version  V1.0
 * @brief    M2L31 series SYS driver header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/
#ifndef __SYS_H__
#define __SYS_H__

#ifdef __cplusplus
extern "C"
{
#endif


/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup SYS_Driver SYS Driver
  @{
*/

/** @addtogroup SYS_EXPORTED_CONSTANTS SYS Exported Constants
  @{
*/


/*---------------------------------------------------------------------------------------------------------*/
/*  Module Reset Control Resister constant definitions.                                                    */
/*---------------------------------------------------------------------------------------------------------*/
#define CHIP_RST        ((0UL<<24) | SYS_IPRST0_CHIPRST_Pos)        /*!< Reset CHIP \hideinitializer    */
#define CPU_RST         ((0UL<<24) | SYS_IPRST0_CPURST_Pos)         /*!< Reset CPU \hideinitializer     */
#define PDMA0_RST       ((0UL<<24) | SYS_IPRST0_PDMA0RST_Pos)       /*!< Reset PDMA0 \hideinitializer   */
#define EBI_RST         ((0UL<<24) | SYS_IPRST0_EBIRST_Pos)         /*!< Reset EBI \hideinitializer     */
#define USBH_RST        ((0UL<<24) | SYS_IPRST0_USBHRST_Pos)        /*!< Reset USBH \hideinitializer    */
#define CRC_RST         ((0UL<<24) | SYS_IPRST0_CRCRST_Pos)         /*!< Reset CRC \hideinitializer     */
#define CRPT_RST        ((0UL<<24) | SYS_IPRST0_CRPTRST_Pos)        /*!< Reset CRPT \hideinitializer    */
#define CANFD0_RST      ((0UL<<24) | SYS_IPRST0_CANFD0RST_Pos)      /*!< Reset CANFD0 \hideinitializer  */
#define CANFD1_RST      ((0UL<<24) | SYS_IPRST0_CANFD1RST_Pos)      /*!< Reset CANFD1 \hideinitializer  */

#define GPIO_RST        ((4UL<<24) | SYS_IPRST1_GPIORST_Pos)        /*!< Reset GPIO \hideinitializer    */
#define TMR0_RST        ((4UL<<24) | SYS_IPRST1_TMR0RST_Pos)        /*!< Reset TMR0 \hideinitializer    */
#define TMR1_RST        ((4UL<<24) | SYS_IPRST1_TMR1RST_Pos)        /*!< Reset TMR1 \hideinitializer    */
#define TMR2_RST        ((4UL<<24) | SYS_IPRST1_TMR2RST_Pos)        /*!< Reset TMR2 \hideinitializer    */
#define TMR3_RST        ((4UL<<24) | SYS_IPRST1_TMR3RST_Pos)        /*!< Reset TMR3 \hideinitializer    */
#define ACMP01_RST      ((4UL<<24) | SYS_IPRST1_ACMP01RST_Pos)      /*!< Reset ACMP01 \hideinitializer  */
#define I2C0_RST        ((4UL<<24) | SYS_IPRST1_I2C0RST_Pos)        /*!< Reset I2C0 \hideinitializer    */
#define I2C1_RST        ((4UL<<24) | SYS_IPRST1_I2C1RST_Pos)        /*!< Reset I2C1 \hideinitializer    */
#define I2C2_RST        ((4UL<<24) | SYS_IPRST1_I2C2RST_Pos)        /*!< Reset I2C2 \hideinitializer    */
#define I2C3_RST        ((4UL<<24) | SYS_IPRST1_I2C3RST_Pos)        /*!< Reset I2C3 \hideinitializer    */
#define QSPI0_RST       ((4UL<<24) | SYS_IPRST1_QSPI0RST_Pos)       /*!< Reset QSPI0 \hideinitializer   */
#define SPI0_RST        ((4UL<<24) | SYS_IPRST1_SPI0RST_Pos)        /*!< Reset SPI0 \hideinitializer    */
#define SPI1_RST        ((4UL<<24) | SYS_IPRST1_SPI1RST_Pos)        /*!< Reset SPI1 \hideinitializer    */
#define SPI2_RST        ((4UL<<24) | SYS_IPRST1_SPI2RST_Pos)        /*!< Reset SPI2 \hideinitializer    */
#define UART0_RST       ((4UL<<24) | SYS_IPRST1_UART0RST_Pos)       /*!< Reset UART0 \hideinitializer   */
#define UART1_RST       ((4UL<<24) | SYS_IPRST1_UART1RST_Pos)       /*!< Reset UART1 \hideinitializer   */
#define UART2_RST       ((4UL<<24) | SYS_IPRST1_UART2RST_Pos)       /*!< Reset UART2 \hideinitializer   */
#define UART3_RST       ((4UL<<24) | SYS_IPRST1_UART3RST_Pos)       /*!< Reset UART3 \hideinitializer   */
#define UART4_RST       ((4UL<<24) | SYS_IPRST1_UART4RST_Pos)       /*!< Reset UART4 \hideinitializer   */
#define UART5_RST       ((4UL<<24) | SYS_IPRST1_UART5RST_Pos)       /*!< Reset UART5 \hideinitializer   */
#define UART6_RST       ((4UL<<24) | SYS_IPRST1_UART6RST_Pos)       /*!< Reset UART6 \hideinitializer   */
#define UART7_RST       ((4UL<<24) | SYS_IPRST1_UART7RST_Pos)       /*!< Reset UART7 \hideinitializer   */
#define OTG_RST         ((4UL<<24) | SYS_IPRST1_OTGRST_Pos)         /*!< Reset OTG \hideinitializer     */
#define USBD_RST        ((4UL<<24) | SYS_IPRST1_USBDRST_Pos)        /*!< Reset USBD \hideinitializer    */
#define EADC0_RST       ((4UL<<24) | SYS_IPRST1_EADC0RST_Pos)       /*!< Reset EADC0 \hideinitializer   */
#define TRNG_RST        ((4UL<<24) | SYS_IPRST1_TRNGRST_Pos)        /*!< Reset TRNG \hideinitializer    */

#define SPI3_RST        ((8UL<<24) | SYS_IPRST2_SPI3RST_Pos)        /*!< Reset SPI3 \hideinitializer    */
#define USCI0_RST       ((8UL<<24) | SYS_IPRST2_USCI0RST_Pos)       /*!< Reset USCI0 \hideinitializer   */
#define USCI1_RST       ((8UL<<24) | SYS_IPRST2_USCI1RST_Pos)       /*!< Reset USCI1 \hideinitializer   */
#define WWDT_RST        ((8UL<<24) | SYS_IPRST2_WWDTRST_Pos)        /*!< Reset WWDT \hideinitializer    */
#define DAC_RST         ((8UL<<24) | SYS_IPRST2_DACRST_Pos)         /*!< Reset DAC \hideinitializer     */
#define EPWM0_RST       ((8UL<<24) | SYS_IPRST2_EPWM0RST_Pos)       /*!< Reset EPWM0 \hideinitializer   */
#define EPWM1_RST       ((8UL<<24) | SYS_IPRST2_EPWM1RST_Pos)       /*!< Reset EPWM1 \hideinitializer   */
#define EQEI0_RST       ((8UL<<24) | SYS_IPRST2_EQEI0RST_Pos)       /*!< Reset EQEI0 \hideinitializer   */
#define EQEI1_RST       ((8UL<<24) | SYS_IPRST2_EQEI1RST_Pos)       /*!< Reset EQEI1 \hideinitializer   */
#define TK_RST          ((8UL<<24) | SYS_IPRST2_TKRST_Pos)          /*!< Reset TK \hideinitializer      */
#define ECAP0_RST       ((8UL<<24) | SYS_IPRST2_ECAP0RST_Pos)       /*!< Reset ECAP0 \hideinitializer   */
#define ECAP1_RST       ((8UL<<24) | SYS_IPRST2_ECAP1RST_Pos)       /*!< Reset ECAP1 \hideinitializer   */

#define ACMP2_RST       ((0x18UL<<24) | SYS_IPRST3_ACMP2RST_Pos)    /*!< Reset ACMP2 \hideinitializer   */
#define PWM0_RST        ((0x18UL<<24) | SYS_IPRST3_PWM0RST_Pos)     /*!< Reset PWM0 \hideinitializer    */
#define PWM1_RST        ((0x18UL<<24) | SYS_IPRST3_PWM1RST_Pos)     /*!< Reset PWM1 \hideinitializer    */
#define UTCPD0_RST      ((0x18UL<<24) | SYS_IPRST3_UTCPD0RST_Pos)   /*!< Reset UTCPD0 \hideinitializer  */

#define LPPDMA0_RST     ((0x80UL<<24) | LPSCC_IPRST0_LPPDMA0RST_Pos) /*!< Reset LPPDMA0 \hideinitializer */
#define LPGPIO_RST      ((0x80UL<<24) | LPSCC_IPRST0_LPGPIORST_Pos) /*!< Reset LPGPIO \hideinitializer  */
#define LPSRAM_RST      ((0x80UL<<24) | LPSCC_IPRST0_LPSRAMRST_Pos) /*!< Reset LPSRAM \hideinitializer  */
#define WDT_RST         ((0x80UL<<24) | LPSCC_IPRST0_WDTRST_Pos)    /*!< Reset WDT \hideinitializer     */
#define LPSPI0_RST      ((0x80UL<<24) | LPSCC_IPRST0_LPSPI0RST_Pos) /*!< Reset LPSPI0 \hideinitializer  */
#define LPI2C0_RST      ((0x80UL<<24) | LPSCC_IPRST0_LPI2C0RST_Pos) /*!< Reset LPI2C0 \hideinitializer  */
#define LPUART0_RST     ((0x80UL<<24) | LPSCC_IPRST0_LPUART0RST_Pos) /*!< Reset LPUART0 \hideinitializer */
#define LPTMR0_RST      ((0x80UL<<24) | LPSCC_IPRST0_LPTMR0RST_Pos) /*!< Reset LPTMR0 \hideinitializer  */
#define LPTMR1_RST      ((0x80UL<<24) | LPSCC_IPRST0_LPTMR1RST_Pos) /*!< Reset LPTMR1 \hideinitializer  */
#define TTMR0_RST       ((0x80UL<<24) | LPSCC_IPRST0_TTMR0RST_Pos)  /*!< Reset TTMR0 \hideinitializer   */
#define TTMR1_RST       ((0x80UL<<24) | LPSCC_IPRST0_TTMR1RST_Pos)  /*!< Reset TTMR1 \hideinitializer   */
#define LPADC0_RST      ((0x80UL<<24) | LPSCC_IPRST0_LPADC0RST_Pos) /*!< Reset LPADC0 \hideinitializer  */
#define OPA_RST         ((0x80UL<<24) | LPSCC_IPRST0_OPARST_Pos)    /*!< Reset OPA \hideinitializer     */


/*---------------------------------------------------------------------------------------------------------*/
/*  Brown Out Detector Threshold Voltage Selection constant definitions.                                   */
/*---------------------------------------------------------------------------------------------------------*/
#define SYS_BODCTL_BOD_RST_EN           (1UL << SYS_BODCTL_BODRSTEN_Pos)    /*!< Brown-out Reset Enable \hideinitializer */
#define SYS_BODCTL_BOD_INTERRUPT_EN     (0UL << SYS_BODCTL_BODRSTEN_Pos)    /*!< Brown-out Interrupt Enable \hideinitializer */
#define SYS_BODCTL_BODVL_3_0V           (15UL << SYS_BODCTL_BODVL_Pos)      /*!< Setting Brown Out Detector Threshold Voltage as 3.0V \hideinitializer */
#define SYS_BODCTL_BODVL_2_8V           (14UL << SYS_BODCTL_BODVL_Pos)      /*!< Setting Brown Out Detector Threshold Voltage as 2.8V \hideinitializer */
#define SYS_BODCTL_BODVL_2_6V           (13UL << SYS_BODCTL_BODVL_Pos)      /*!< Setting Brown Out Detector Threshold Voltage as 2.6V \hideinitializer */
#define SYS_BODCTL_BODVL_2_4V           (12UL << SYS_BODCTL_BODVL_Pos)      /*!< Setting Brown Out Detector Threshold Voltage as 2.4V \hideinitializer */
#define SYS_BODCTL_BODVL_2_2V           (11UL << SYS_BODCTL_BODVL_Pos)      /*!< Setting Brown Out Detector Threshold Voltage as 2.2V \hideinitializer */
#define SYS_BODCTL_BODVL_2_0V           (10UL << SYS_BODCTL_BODVL_Pos)      /*!< Setting Brown Out Detector Threshold Voltage as 2.0V \hideinitializer */
#define SYS_BODCTL_BODVL_1_8V           (9UL << SYS_BODCTL_BODVL_Pos)       /*!< Setting Brown Out Detector Threshold Voltage as 1.8V \hideinitializer */
#define SYS_BODCTL_BODVL_1_6V           (8UL << SYS_BODCTL_BODVL_Pos)       /*!< Setting Brown Out Detector Threshold Voltage as 1.6V \hideinitializer */
#define SYS_BODCTL_BODVL_1_5V           (0UL << SYS_BODCTL_BODVL_Pos)       /*!< Setting Brown Out Detector Threshold Voltage as 1.5V \hideinitializer */

#define SYS_BODCTL_LVRDGSEL_0HCLK       (0x0UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time Without de-glitch function.  \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_4HCLK       (0x1UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time is selected 4HCLK            \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_8HCLK       (0x2UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time is selected 8HCLK            \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_16HCLK      (0x3UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time is selected 16HCLK           \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_32HCLK      (0x4UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time is selected 32HCLK           \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_64HCLK      (0x5UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time is selected 64HCLK           \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_128HCLK     (0x6UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time is selected 128HCLK          \hideinitializer */
#define SYS_BODCTL_LVRDGSEL_256HCLK     (0x7UL<<SYS_BODCTL_LVRDGSEL_Pos)    /*!< LVR Output De-glitch Time is selected 256HCLK          \hideinitializer */

#define SYS_BODCTL_BODDGSEL_0HCLK       (0x0UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is sampled by RC10K clock.   \hideinitializer */
#define SYS_BODCTL_BODDGSEL_4HCLK       (0x1UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is selected 4HCLK            \hideinitializer */
#define SYS_BODCTL_BODDGSEL_8HCLK       (0x2UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is selected 8HCLK            \hideinitializer */
#define SYS_BODCTL_BODDGSEL_16HCLK      (0x3UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is selected 16HCLK           \hideinitializer */
#define SYS_BODCTL_BODDGSEL_32HCLK      (0x4UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is selected 32HCLK           \hideinitializer */
#define SYS_BODCTL_BODDGSEL_64HCLK      (0x5UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is selected 64HCLK           \hideinitializer */
#define SYS_BODCTL_BODDGSEL_128HCLK     (0x6UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is selected 128HCLK          \hideinitializer */
#define SYS_BODCTL_BODDGSEL_256HCLK     (0x7UL<<SYS_BODCTL_BODDGSEL_Pos)    /*!< BOD Output De-glitch Time is selected 256HCLK          \hideinitializer */


/*---------------------------------------------------------------------------------------------------------*/
/*  Internal Voltage Source Control constant definitions.                                                  */
/*---------------------------------------------------------------------------------------------------------*/
#define SYS_IVSCTL_ADCCSEL_EADC     (0x0UL << SYS_IVSCTL_ADCCSEL_Pos)   /*!< IVSCTL ADC Control Select is EADC \hideinitializer */
#define SYS_IVSCTL_ADCCSEL_LPADC    (0x1UL << SYS_IVSCTL_ADCCSEL_Pos)   /*!< IVSCTL ADC Control Select is LPADC \hideinitializer */


/*---------------------------------------------------------------------------------------------------------*/
/*  VREFCTL constant definitions. (Write-Protection Register)                                              */
/*---------------------------------------------------------------------------------------------------------*/
#define SYS_VREFCTL_VREF_PIN        (0x0UL << SYS_VREFCTL_VREFCTL_Pos)    /*!< Vref = Vref pin \hideinitializer */
#define SYS_VREFCTL_VREF_1_6V       (0x3UL << SYS_VREFCTL_VREFCTL_Pos)    /*!< Vref = 1.6V \hideinitializer */
#define SYS_VREFCTL_VREF_2_0V       (0x7UL << SYS_VREFCTL_VREFCTL_Pos)    /*!< Vref = 2.0V \hideinitializer */
#define SYS_VREFCTL_VREF_2_5V       (0xBUL << SYS_VREFCTL_VREFCTL_Pos)    /*!< Vref = 2.5V \hideinitializer */
#define SYS_VREFCTL_VREF_3_0V       (0xFUL << SYS_VREFCTL_VREFCTL_Pos)    /*!< Vref = 3.0V \hideinitializer */


/*---------------------------------------------------------------------------------------------------------*/
/*  USBPHY constant definitions. (Write-Protection Register)                                               */
/*---------------------------------------------------------------------------------------------------------*/
#define SYS_USBPHY_USBROLE_STD_USBD     (0x0UL << SYS_USBPHY_USBROLE_Pos)   /*!<  Standard USB device \hideinitializer */
#define SYS_USBPHY_USBROLE_STD_USBH     (0x1UL << SYS_USBPHY_USBROLE_Pos)   /*!<  Standard USB host \hideinitializer */
#define SYS_USBPHY_USBROLE_ID_DEPH      (0x2UL << SYS_USBPHY_USBROLE_Pos)   /*!<  ID dependent device \hideinitializer */
#define SYS_USBPHY_USBROLE_ON_THE_GO    (0x3UL << SYS_USBPHY_USBROLE_Pos)   /*!<  On-The-Go device \hideinitializer */


/*---------------------------------------------------------------------------------------------------------*/
/*  PLCTL constant definitions. (Write-Protection Register)                                                */
/*---------------------------------------------------------------------------------------------------------*/
#define SYS_PLCTL_PLSEL_PL1     (0x1UL<<SYS_PLCTL_PLSEL_Pos)    /*!< Set power level to power level 1 */
#define SYS_PLCTL_PLSEL_PL2     (0x2UL<<SYS_PLCTL_PLSEL_Pos)    /*!< Set power level to power level 2 */

#define SYS_PLSTS_PLSTATUS_PL1  (0x1UL<<SYS_PLSTS_PLSTATUS_Pos)
#define SYS_PLSTS_PLSTATUS_PL2  (0x2UL<<SYS_PLSTS_PLSTATUS_Pos)


/*---------------------------------------------------------------------------------------------------------*/
/*  SRAMP0 constant definitions. (Write-Protection Register)                                               */
/*---------------------------------------------------------------------------------------------------------*/
#define SYS_SRAMPC0_SRAM_NORMAL         (0x0UL) /*!< Select system SRAM power mode to normal mode */
#define SYS_SRAMPC0_SRAM_RETENTION      (0x2UL) /*!< Select system SRAM power mode to retention mode */
#define SYS_SRAMPC0_SRAM_SHUT_DOWN      (0x3UL) /*!< Select system SRAM power mode to shut down mode */


/*---------------------------------------------------------------------------------------------------------*/
/*  LPSCC_CLKDIV0 constant definitions.                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define LPSCC_CLKDIV0_HCLK1(x)          (((x) - 1UL) << LPSCC_CLKDIV0_HCLK1DIV_Pos)     /*!< CLKDIV0 Setting for HCLK1 clock divider. It could be 1~16 \hideinitializer */
#define LPSCC_CLKDIV0_LPUART0(x)        (((x) - 1UL) << LPSCC_CLKDIV0_LPUART0DIV_Pos)   /*!< CLKDIV0 Setting for LPUART0 clock divider. It could be 1~16 \hideinitializer */
#define LPSCC_CLKDIV0_LPADC0(x)         (((x) - 1UL) << LPSCC_CLKDIV0_LPADC0DIV_Pos)    /*!< CLKDIV0 Setting for LPADC0 clock divider. It could be 1~16 \hideinitializer */

#define LPSCC_CLKDIV0_PCLK2DIV1         (0x0UL << LPSCC_CLKDIV0_APB2DIV_Pos)  /*!< CLKDIV0 Setting for PCLK2 = HCLK1 \hideinitializer */
#define LPSCC_CLKDIV0_PCLK2DIV2         (0x1UL << LPSCC_CLKDIV0_APB2DIV_Pos)  /*!< CLKDIV0 Setting for PCLK2 = 1/2 HCLK1 \hideinitializer */
#define LPSCC_CLKDIV0_PCLK2DIV4         (0x2UL << LPSCC_CLKDIV0_APB2DIV_Pos)  /*!< CLKDIV0 Setting for PCLK2 = 1/4 HCLK1 \hideinitializer */
#define LPSCC_CLKDIV0_PCLK2DIV8         (0x3UL << LPSCC_CLKDIV0_APB2DIV_Pos)  /*!< CLKDIV0 Setting for PCLK2 = 1/8 HCLK1 \hideinitializer */
#define LPSCC_CLKDIV0_PCLK2DIV16        (0x4UL << LPSCC_CLKDIV0_APB2DIV_Pos)  /*!< CLKDIV0 Setting for PCLK2 = 1/16 HCLK1 \hideinitializer */

#define LPSCC_CLKDIV0_APB2DIV_DIV1      (0x0UL << LPSCC_CLKDIV0_APB2DIV_Pos)  /*!< CLKDIV0 Setting for PCLK2 = HCLK1 \hideinitializer */
#define LPSCC_CLKDIV0_APB2DIV_DIV2      (0x1UL << LPSCC_CLKDIV0_APB2DIV_Pos)  /*!< CLKDIV0 Setting for PCLK2 = 1/2 HCLK1 \hideinitializer */
#define LPSCC_CLKDIV0_APB2DIV_DIV4      (0x2UL << LPSCC_CLKDIV0_APB2DIV_Pos)  /*!< CLKDIV0 Setting for PCLK2 = 1/4 HCLK1 \hideinitializer */
#define LPSCC_CLKDIV0_APB2DIV_DIV8      (0x3UL << LPSCC_CLKDIV0_APB2DIV_Pos)  /*!< CLKDIV0 Setting for PCLK2 = 1/8 HCLK1 \hideinitializer */
#define LPSCC_CLKDIV0_APB2DIV_DIV16     (0x4UL << LPSCC_CLKDIV0_APB2DIV_Pos)  /*!< CLKDIV0 Setting for PCLK2 = 1/16 HCLK1 \hideinitializer */

/*----------------------------------------------------------------------------------------------------------*/
/*  LPSCC_CLKSEL0 constant definitions.  (Write-protection)                                                 */
/*----------------------------------------------------------------------------------------------------------*/
#define LPSCC_CLKSEL0_LPUART0SEL_HIRC   (0x0UL << LPSCC_CLKSEL0_LPUART0SEL_Pos)
#define LPSCC_CLKSEL0_LPUART0SEL_MIRC   (0x1UL << LPSCC_CLKSEL0_LPUART0SEL_Pos)
#define LPSCC_CLKSEL0_LPUART0SEL_LXT    (0x2UL << LPSCC_CLKSEL0_LPUART0SEL_Pos)

#define LPSCC_CLKSEL0_LPSPI0SEL_HIRC    (0x0UL << LPSCC_CLKSEL0_LPSPI0SEL_Pos)
#define LPSCC_CLKSEL0_LPSPI0SEL_MIRC    (0x1UL << LPSCC_CLKSEL0_LPSPI0SEL_Pos)

#define LPSCC_CLKSEL0_TTMR0SEL_HIRC     (0x0UL << LPSCC_CLKSEL0_TTMR0SEL_Pos)
#define LPSCC_CLKSEL0_TTMR0SEL_MIRC     (0x1UL << LPSCC_CLKSEL0_TTMR0SEL_Pos)
#define LPSCC_CLKSEL0_TTMR0SEL_LXT      (0x2UL << LPSCC_CLKSEL0_TTMR0SEL_Pos)
#define LPSCC_CLKSEL0_TTMR0SEL_LIRC     (0x3UL << LPSCC_CLKSEL0_TTMR0SEL_Pos)

#define LPSCC_CLKSEL0_TTMR1SEL_HIRC     (0x0UL << LPSCC_CLKSEL0_TTMR1SEL_Pos)
#define LPSCC_CLKSEL0_TTMR1SEL_MIRC     (0x1UL << LPSCC_CLKSEL0_TTMR1SEL_Pos)
#define LPSCC_CLKSEL0_TTMR1SEL_LXT      (0x2UL << LPSCC_CLKSEL0_TTMR1SEL_Pos)
#define LPSCC_CLKSEL0_TTMR1SEL_LIRC     (0x3UL << LPSCC_CLKSEL0_TTMR1SEL_Pos)

#define LPSCC_CLKSEL0_LPTMR0SEL_HIRC    (0x0UL << LPSCC_CLKSEL0_LPTMR0SEL_Pos)
#define LPSCC_CLKSEL0_LPTMR0SEL_MIRC    (0x1UL << LPSCC_CLKSEL0_LPTMR0SEL_Pos)
#define LPSCC_CLKSEL0_LPTMR0SEL_LXT     (0x2UL << LPSCC_CLKSEL0_LPTMR0SEL_Pos)
#define LPSCC_CLKSEL0_LPTMR0SEL_LIRC    (0x3UL << LPSCC_CLKSEL0_LPTMR0SEL_Pos)
#define LPSCC_CLKSEL0_LPTMR0SEL_EXT     (0x4UL << LPSCC_CLKSEL0_LPTMR0SEL_Pos)

#define LPSCC_CLKSEL0_LPTMR1SEL_HIRC    (0x0UL << LPSCC_CLKSEL0_LPTMR1SEL_Pos)
#define LPSCC_CLKSEL0_LPTMR1SEL_MIRC    (0x1UL << LPSCC_CLKSEL0_LPTMR1SEL_Pos)
#define LPSCC_CLKSEL0_LPTMR1SEL_LXT     (0x2UL << LPSCC_CLKSEL0_LPTMR1SEL_Pos)
#define LPSCC_CLKSEL0_LPTMR1SEL_LIRC    (0x3UL << LPSCC_CLKSEL0_LPTMR1SEL_Pos)
#define LPSCC_CLKSEL0_LPTMR1SEL_EXT     (0x4UL << LPSCC_CLKSEL0_LPTMR1SEL_Pos)

#define LPSCC_CLKSEL0_LPADC0SEL_HIRC    (0x0UL << LPSCC_CLKSEL0_LPADC0SEL_Pos)
#define LPSCC_CLKSEL0_LPADC0SEL_MIRC    (0x1UL << LPSCC_CLKSEL0_LPADC0SEL_Pos)
#define LPSCC_CLKSEL0_LPADC0SEL_LXT     (0x2UL << LPSCC_CLKSEL0_LPADC0SEL_Pos)
#define LPSCC_CLKSEL0_LPADC0SEL_PCLK2   (0x3UL << LPSCC_CLKSEL0_LPADC0SEL_Pos)

#define LPSCC_CLKSEL0_WDTSEL_LIRC           (0x0UL << LPSCC_CLKSEL0_WDTSEL_Pos)
#define LPSCC_CLKSEL0_WDTSEL_LXT            (0x1UL << LPSCC_CLKSEL0_WDTSEL_Pos)
#define LPSCC_CLKSEL0_WDTSEL_HCLK1_DIV2048  (0x2UL << LPSCC_CLKSEL0_WDTSEL_Pos)

/*----------------------------------------------------------------------------------------------------------*/
/*  LPSCC_CLKMCTL constant definitions.  (Write-protection)                                                 */
/*----------------------------------------------------------------------------------------------------------*/
#define LPSCC_CLKMCTL_CLKM0SEL_HCLK1    (0x0UL << LPSCC_CLKMCTL_CLKM0SEL_Pos)
#define LPSCC_CLKMCTL_CLKM0SEL_HIRC     (0x1UL << LPSCC_CLKMCTL_CLKM0SEL_Pos)
#define LPSCC_CLKMCTL_CLKM0SEL_MIRC     (0x2UL << LPSCC_CLKMCTL_CLKM0SEL_Pos)

#define LPSCC_CLKMCTL_CLKM1SEL_HCLK1    (0x0UL << LPSCC_CLKMCTL_CLKM1SEL_Pos)
#define LPSCC_CLKMCTL_CLKM1SEL_HIRC     (0x1UL << LPSCC_CLKMCTL_CLKM1SEL_Pos)
#define LPSCC_CLKMCTL_CLKM1SEL_MIRC     (0x2UL << LPSCC_CLKMCTL_CLKM1SEL_Pos)


/*---------------------------------------------------------------------------------------------------------*/
/*  Multi-Function constant definitions.                                                                   */
/*---------------------------------------------------------------------------------------------------------*/
/* How to use below #define?
Example 1: If user want to set PA.0 as SC0_CLK in initial function,
           user can issue following command to achieve it.

           SYS->GPA_MFPL  = (SYS->GPA_MFPL & (~SYS_GPA_MFPL_PA0MFP_Msk) ) | SYS_GPA_MFPL_PA0_MFP_SC0_CLK  ;

*/
/* PA.0 MFP */
#define SYS_GPA_MFP0_PA0MFP_GPIO            (0x0UL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for GPIO              */
#define SYS_GPA_MFP0_PA0MFP_QSPI0_MOSI0     (0x3UL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for QSPI0_MOSI0       */
#define SYS_GPA_MFP0_PA0MFP_SPI0_MOSI       (0x4UL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for SPI0_MOSI         */
#define SYS_GPA_MFP0_PA0MFP_UART0_RXD       (0x7UL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for UART0_RXD         */
#define SYS_GPA_MFP0_PA0MFP_UART1_nRTS      (0x8UL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for UART1_nRTS        */
#define SYS_GPA_MFP0_PA0MFP_I2C2_SDA        (0x9UL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for I2C2_SDA          */
#define SYS_GPA_MFP0_PA0MFP_CANFD1_RXD      (0xAUL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for CANFD1_RXD        */
#define SYS_GPA_MFP0_PA0MFP_EPWM0_BRAKE0    (0xBUL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for EPWM0_BRAKE0      */
#define SYS_GPA_MFP0_PA0MFP_PWM0_CH0        (0xCUL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for PWM0_CH0          */
#define SYS_GPA_MFP0_PA0MFP_EPWM0_CH5       (0xDUL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for EPWM0_CH5         */
#define SYS_GPA_MFP0_PA0MFP_ACMP2_WLAT      (0xEUL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for ACMP2_WLAT        */
#define SYS_GPA_MFP0_PA0MFP_DAC0_ST         (0xFUL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for DAC0_ST           */
#define SYS_GPA_MFP0_PA0MFP_TK_TK8          (0x10UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for TK_TK8            */
#define SYS_GPA_MFP0_PA0MFP_UTCPD0_VCNEN1   (0x11UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for UTCPD0_VCNEN1     */
#define SYS_GPA_MFP0_PA0MFP_LPSPI0_MOSI     (0x14UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for LPSPI0_MOSI       */
#define SYS_GPA_MFP0_PA0MFP_LPUART0_RXD     (0x15UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for LPUART0_RXD       */
#define SYS_GPA_MFP0_PA0MFP_LPIO0           (0x17UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0 setting for LPIO0             */

/* PA.1 MFP */
#define SYS_GPA_MFP0_PA1MFP_GPIO            (0x0UL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for GPIO              */
#define SYS_GPA_MFP0_PA1MFP_QSPI0_MISO0     (0x3UL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for QSPI0_MISO0       */
#define SYS_GPA_MFP0_PA1MFP_SPI0_MISO       (0x4UL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for SPI0_MISO         */
#define SYS_GPA_MFP0_PA1MFP_UART0_TXD       (0x7UL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for UART0_TXD         */
#define SYS_GPA_MFP0_PA1MFP_UART1_nCTS      (0x8UL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for UART1_nCTS        */
#define SYS_GPA_MFP0_PA1MFP_I2C2_SCL        (0x9UL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for I2C2_SCL          */
#define SYS_GPA_MFP0_PA1MFP_CANFD1_TXD      (0xAUL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for CANFD1_TXD        */
#define SYS_GPA_MFP0_PA1MFP_EQEI0_INDEX     (0xBUL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for EQEI0_INDEX       */
#define SYS_GPA_MFP0_PA1MFP_PWM0_CH1        (0xCUL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for PWM0_CH1          */
#define SYS_GPA_MFP0_PA1MFP_EPWM0_CH4       (0xDUL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for EPWM0_CH4         */
#define SYS_GPA_MFP0_PA1MFP_ACMP2_O         (0xEUL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for ACMP2_O           */
#define SYS_GPA_MFP0_PA1MFP_DAC1_ST         (0xFUL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for DAC1_ST           */
#define SYS_GPA_MFP0_PA1MFP_TK_TK7          (0x10UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for TK_TK7            */
#define SYS_GPA_MFP0_PA1MFP_UTCPD0_FRSTX1   (0x11UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for UTCPD0_FRSTX1     */
#define SYS_GPA_MFP0_PA1MFP_UTCPD0_DISCHG   (0x12UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for UTCPD0_DISCHG     */
#define SYS_GPA_MFP0_PA1MFP_LPSPI0_MISO     (0x14UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for LPSPI0_MISO       */
#define SYS_GPA_MFP0_PA1MFP_LPUART0_TXD     (0x15UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for LPUART0_TXD       */
#define SYS_GPA_MFP0_PA1MFP_LPIO1           (0x17UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1 setting for LPIO1             */

/* PA.2 MFP */
#define SYS_GPA_MFP0_PA2MFP_GPIO            (0x0UL<<SYS_GPA_MFP0_PA2MFP_Pos)    /*!< GPA_MFP0 PA2 setting for GPIO              */
#define SYS_GPA_MFP0_PA2MFP_QSPI0_CLK       (0x3UL<<SYS_GPA_MFP0_PA2MFP_Pos)    /*!< GPA_MFP0 PA2 setting for QSPI0_CLK         */
#define SYS_GPA_MFP0_PA2MFP_SPI0_CLK        (0x4UL<<SYS_GPA_MFP0_PA2MFP_Pos)    /*!< GPA_MFP0 PA2 setting for SPI0_CLK          */
#define SYS_GPA_MFP0_PA2MFP_UART4_RXD       (0x5UL<<SYS_GPA_MFP0_PA2MFP_Pos)    /*!< GPA_MFP0 PA2 setting for UART4_RXD         */
#define SYS_GPA_MFP0_PA2MFP_I2C0_SMBSUS     (0x7UL<<SYS_GPA_MFP0_PA2MFP_Pos)    /*!< GPA_MFP0 PA2 setting for I2C0_SMBSUS       */
#define SYS_GPA_MFP0_PA2MFP_UART1_RXD       (0x8UL<<SYS_GPA_MFP0_PA2MFP_Pos)    /*!< GPA_MFP0 PA2 setting for UART1_RXD         */
#define SYS_GPA_MFP0_PA2MFP_I2C1_SDA        (0x9UL<<SYS_GPA_MFP0_PA2MFP_Pos)    /*!< GPA_MFP0 PA2 setting for I2C1_SDA          */
#define SYS_GPA_MFP0_PA2MFP_EQEI0_A         (0xBUL<<SYS_GPA_MFP0_PA2MFP_Pos)    /*!< GPA_MFP0 PA2 setting for EQEI0_A           */
#define SYS_GPA_MFP0_PA2MFP_PWM0_CH2        (0xCUL<<SYS_GPA_MFP0_PA2MFP_Pos)    /*!< GPA_MFP0 PA2 setting for PWM0_CH2          */
#define SYS_GPA_MFP0_PA2MFP_EPWM0_CH3       (0xDUL<<SYS_GPA_MFP0_PA2MFP_Pos)    /*!< GPA_MFP0 PA2 setting for EPWM0_CH3         */
#define SYS_GPA_MFP0_PA2MFP_TK_TK6          (0x10UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for TK_TK6            */
#define SYS_GPA_MFP0_PA2MFP_UTCPD0_VBSRCEN  (0x11UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for UTCPD0_VBSRCEN    */
#define SYS_GPA_MFP0_PA2MFP_LPSPI0_CLK      (0x14UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2 setting for LPSPI0_CLK        */

/* PA.3 MFP */
#define SYS_GPA_MFP0_PA3MFP_GPIO            (0x0UL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for GPIO              */
#define SYS_GPA_MFP0_PA3MFP_QSPI0_SS        (0x3UL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for QSPI0_SS          */
#define SYS_GPA_MFP0_PA3MFP_SPI0_SS         (0x4UL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for SPI0_SS           */
#define SYS_GPA_MFP0_PA3MFP_UART4_TXD       (0x5UL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for UART4_TXD         */
#define SYS_GPA_MFP0_PA3MFP_TK_SE           (0x6UL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for TK_SE             */
#define SYS_GPA_MFP0_PA3MFP_I2C0_SMBAL      (0x7UL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for I2C0_SMBAL        */
#define SYS_GPA_MFP0_PA3MFP_UART1_TXD       (0x8UL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for UART1_TXD         */
#define SYS_GPA_MFP0_PA3MFP_I2C1_SCL        (0x9UL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for I2C1_SCL          */
#define SYS_GPA_MFP0_PA3MFP_PWM1_BRAKE1     (0xAUL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for PWM1_BRAKE1       */
#define SYS_GPA_MFP0_PA3MFP_EQEI0_B         (0xBUL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for EQEI0_B           */
#define SYS_GPA_MFP0_PA3MFP_PWM0_CH3        (0xCUL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for PWM0_CH3          */
#define SYS_GPA_MFP0_PA3MFP_EPWM0_CH2       (0xDUL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for EPWM0_CH2         */
#define SYS_GPA_MFP0_PA3MFP_CLKO            (0xEUL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for CLKO              */
#define SYS_GPA_MFP0_PA3MFP_EPWM1_BRAKE1    (0xFUL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for EPWM1_BRAKE1      */
#define SYS_GPA_MFP0_PA3MFP_TK_TK5          (0x10UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for TK_TK5            */
#define SYS_GPA_MFP0_PA3MFP_UTCPD0_VBSNKEN  (0x11UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for UTCPD0_VBSNKEN    */
#define SYS_GPA_MFP0_PA3MFP_LPSPI0_SS       (0x14UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3 setting for LPSPI0_SS         */

/* PA.4 MFP */
#define SYS_GPA_MFP1_PA4MFP_GPIO            (0x0UL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for GPIO              */
#define SYS_GPA_MFP1_PA4MFP_QSPI0_MOSI1     (0x3UL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for QSPI0_MOSI1       */
#define SYS_GPA_MFP1_PA4MFP_SPI0_I2SMCLK    (0x4UL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for SPI0_I2SMCLK      */
#define SYS_GPA_MFP1_PA4MFP_UART0_nRTS      (0x7UL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for UART0_nRTS        */
#define SYS_GPA_MFP1_PA4MFP_UART0_RXD       (0x8UL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for UART0_RXD         */
#define SYS_GPA_MFP1_PA4MFP_I2C0_SDA        (0x9UL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for I2C0_SDA          */
#define SYS_GPA_MFP1_PA4MFP_CANFD0_RXD      (0xAUL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for CANFD0_RXD        */
#define SYS_GPA_MFP1_PA4MFP_UART5_RXD       (0xBUL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for UART5_RXD         */
#define SYS_GPA_MFP1_PA4MFP_PWM0_CH4        (0xCUL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for PWM0_CH4          */
#define SYS_GPA_MFP1_PA4MFP_EPWM0_CH1       (0xDUL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for EPWM0_CH1         */
#define SYS_GPA_MFP1_PA4MFP_EQEI0_A         (0xEUL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for EQEI0_A           */
#define SYS_GPA_MFP1_PA4MFP_TK_TK4          (0x10UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for TK_TK4            */
#define SYS_GPA_MFP1_PA4MFP_UTCPD0_VBSRCEN  (0x11UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for UTCPD0_VBSRCEN    */
#define SYS_GPA_MFP1_PA4MFP_LPUART0_RXD     (0x14UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for LPUART0_RXD       */
#define SYS_GPA_MFP1_PA4MFP_LPUART0_nRTS    (0x15UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for LPUART0_nRTS      */
#define SYS_GPA_MFP1_PA4MFP_LPI2C0_SDA      (0x16UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4 setting for LPI2C0_SDA        */

/* PA.5 MFP */
#define SYS_GPA_MFP1_PA5MFP_GPIO            (0x0UL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for GPIO              */
#define SYS_GPA_MFP1_PA5MFP_QSPI0_MISO1     (0x3UL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for QSPI0_MISO1       */
#define SYS_GPA_MFP1_PA5MFP_SPI1_I2SMCLK    (0x4UL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for SPI1_I2SMCLK      */
#define SYS_GPA_MFP1_PA5MFP_UART0_nCTS      (0x7UL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for UART0_nCTS        */
#define SYS_GPA_MFP1_PA5MFP_UART0_TXD       (0x8UL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for UART0_TXD         */
#define SYS_GPA_MFP1_PA5MFP_I2C0_SCL        (0x9UL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for I2C0_SCL          */
#define SYS_GPA_MFP1_PA5MFP_CANFD0_TXD      (0xAUL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for CANFD0_TXD        */
#define SYS_GPA_MFP1_PA5MFP_UART5_TXD       (0xBUL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for UART5_TXD         */
#define SYS_GPA_MFP1_PA5MFP_PWM0_CH5        (0xCUL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for PWM0_CH5          */
#define SYS_GPA_MFP1_PA5MFP_EPWM0_CH0       (0xDUL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for EPWM0_CH0         */
#define SYS_GPA_MFP1_PA5MFP_EQEI0_INDEX     (0xEUL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for EQEI0_INDEX       */
#define SYS_GPA_MFP1_PA5MFP_TK_TK3          (0x10UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for TK_TK3            */
#define SYS_GPA_MFP1_PA5MFP_UTCPD0_VBSNKEN  (0x11UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for UTCPD0_VBSNKEN    */
#define SYS_GPA_MFP1_PA5MFP_LPUART0_TXD     (0x14UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for LPUART0_TXD       */
#define SYS_GPA_MFP1_PA5MFP_LPUART0_nCTS    (0x15UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for LPUART0_nCTS      */
#define SYS_GPA_MFP1_PA5MFP_LPI2C0_SCL      (0x16UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5 setting for LPI2C0_SCL        */

/* PA.6 MFP */
#define SYS_GPA_MFP1_PA6MFP_GPIO            (0x0UL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for GPIO              */
#define SYS_GPA_MFP1_PA6MFP_EBI_AD6         (0x2UL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for EBI_AD6           */
#define SYS_GPA_MFP1_PA6MFP_SPI1_SS         (0x4UL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for SPI1_SS           */
#define SYS_GPA_MFP1_PA6MFP_UART0_RXD       (0x7UL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for UART0_RXD         */
#define SYS_GPA_MFP1_PA6MFP_I2C1_SDA        (0x8UL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for I2C1_SDA          */
#define SYS_GPA_MFP1_PA6MFP_EPWM1_CH5       (0xBUL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for EPWM1_CH5         */
#define SYS_GPA_MFP1_PA6MFP_PWM1_CH3        (0xCUL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for PWM1_CH3          */
#define SYS_GPA_MFP1_PA6MFP_ACMP1_WLAT      (0xDUL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for ACMP1_WLAT        */
#define SYS_GPA_MFP1_PA6MFP_TM3             (0xEUL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for TM3               */
#define SYS_GPA_MFP1_PA6MFP_INT0            (0xFUL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for INT0              */
#define SYS_GPA_MFP1_PA6MFP_TK_TK1          (0x10UL<<SYS_GPA_MFP1_PA6MFP_Pos)   /*!< GPA_MFP1 PA6 setting for TK_TK1            */
#define SYS_GPA_MFP1_PA6MFP_UTCPD0_VBSRCEN  (0x11UL<<SYS_GPA_MFP1_PA6MFP_Pos)   /*!< GPA_MFP1 PA6 setting for UTCPD0_VBSRCEN    */
#define SYS_GPA_MFP1_PA6MFP_LPUART0_RXD     (0x15UL<<SYS_GPA_MFP1_PA6MFP_Pos)   /*!< GPA_MFP1 PA6 setting for LPUART0_RXD       */
#define SYS_GPA_MFP1_PA6MFP_LPIO4           (0x17UL<<SYS_GPA_MFP1_PA6MFP_Pos)   /*!< GPA_MFP1 PA6 setting for LPIO4             */

/* PA.7 MFP */
#define SYS_GPA_MFP1_PA7MFP_GPIO            (0x0UL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for GPIO              */
#define SYS_GPA_MFP1_PA7MFP_EBI_AD7         (0x2UL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for EBI_AD7           */
#define SYS_GPA_MFP1_PA7MFP_SPI1_CLK        (0x4UL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for SPI1_CLK          */
#define SYS_GPA_MFP1_PA7MFP_UART0_TXD       (0x7UL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for UART0_TXD         */
#define SYS_GPA_MFP1_PA7MFP_I2C1_SCL        (0x8UL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for I2C1_SCL          */
#define SYS_GPA_MFP1_PA7MFP_EPWM1_CH4       (0xBUL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for EPWM1_CH4         */
#define SYS_GPA_MFP1_PA7MFP_PWM1_CH2        (0xCUL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for PWM1_CH2          */
#define SYS_GPA_MFP1_PA7MFP_ACMP0_WLAT      (0xDUL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for ACMP0_WLAT        */
#define SYS_GPA_MFP1_PA7MFP_TM2             (0xEUL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for TM2               */
#define SYS_GPA_MFP1_PA7MFP_INT1            (0xFUL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for INT1              */
#define SYS_GPA_MFP1_PA7MFP_TK_TK0          (0x10UL<<SYS_GPA_MFP1_PA7MFP_Pos)   /*!< GPA_MFP1 PA7 setting for TK_TK0            */
#define SYS_GPA_MFP1_PA7MFP_UTCPD0_VBSNKEN  (0x11UL<<SYS_GPA_MFP1_PA7MFP_Pos)   /*!< GPA_MFP1 PA7 setting for UTCPD0_VBSNKEN    */
#define SYS_GPA_MFP1_PA7MFP_LPUART0_TXD     (0x15UL<<SYS_GPA_MFP1_PA7MFP_Pos)   /*!< GPA_MFP1 PA7 setting for LPUART0_TXD       */
#define SYS_GPA_MFP1_PA7MFP_LPIO5           (0x17UL<<SYS_GPA_MFP1_PA7MFP_Pos)   /*!< GPA_MFP1 PA7 setting for LPIO5             */

/* PA.8 MFP */
#define SYS_GPA_MFP2_PA8MFP_GPIO            (0x0UL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for GPIO              */
#define SYS_GPA_MFP2_PA8MFP_EADC0_CH20      (0x1UL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for EADC0_CH20        */
#define SYS_GPA_MFP2_PA8MFP_LPADC0_CH20     (0x1UL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for LPADC0_CH20       */
#define SYS_GPA_MFP2_PA8MFP_OPA1_P0         (0x1UL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for OPA1_P0           */
#define SYS_GPA_MFP2_PA8MFP_EBI_ALE         (0x2UL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for EBI_ALE           */
#define SYS_GPA_MFP2_PA8MFP_SPI3_MOSI       (0x5UL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for SPI3_MOSI         */
#define SYS_GPA_MFP2_PA8MFP_USCI0_CTL1      (0x6UL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for USCI0_CTL1        */
#define SYS_GPA_MFP2_PA8MFP_UART1_RXD       (0x7UL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for UART1_RXD         */
#define SYS_GPA_MFP2_PA8MFP_UART7_RXD       (0x8UL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for UART7_RXD         */
#define SYS_GPA_MFP2_PA8MFP_PWM0_CH3        (0x9UL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for PWM0_CH3          */
#define SYS_GPA_MFP2_PA8MFP_EQEI1_B         (0xAUL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for EQEI1_B           */
#define SYS_GPA_MFP2_PA8MFP_ECAP0_IC2       (0xBUL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for ECAP0_IC2         */
#define SYS_GPA_MFP2_PA8MFP_TM3_EXT         (0xDUL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for TM3_EXT           */
#define SYS_GPA_MFP2_PA8MFP_I2C2_SMBSUS     (0xEUL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for I2C2_SMBSUS       */
#define SYS_GPA_MFP2_PA8MFP_INT4            (0xFUL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for INT4              */

/* PA.9 MFP */
#define SYS_GPA_MFP2_PA9MFP_GPIO            (0x0UL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for GPIO              */
#define SYS_GPA_MFP2_PA9MFP_EADC0_CH21      (0x1UL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for EADC0_CH21        */
#define SYS_GPA_MFP2_PA9MFP_LPADC0_CH21     (0x1UL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for LPADC0_CH21       */
#define SYS_GPA_MFP2_PA9MFP_ACMP2_P0        (0x1UL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for ACMP2_P0          */
#define SYS_GPA_MFP2_PA9MFP_OPA1_N0         (0x1UL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for OPA1_N0           */
#define SYS_GPA_MFP2_PA9MFP_EBI_MCLK        (0x2UL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for EBI_MCLK          */
#define SYS_GPA_MFP2_PA9MFP_SPI3_MISO       (0x5UL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for SPI3_MISO         */
#define SYS_GPA_MFP2_PA9MFP_USCI0_DAT1      (0x6UL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for USCI0_DAT1        */
#define SYS_GPA_MFP2_PA9MFP_UART1_TXD       (0x7UL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for UART1_TXD         */
#define SYS_GPA_MFP2_PA9MFP_UART7_TXD       (0x8UL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for UART7_TXD         */
#define SYS_GPA_MFP2_PA9MFP_PWM0_CH2        (0x9UL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for PWM0_CH2          */
#define SYS_GPA_MFP2_PA9MFP_EQEI1_A         (0xAUL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for EQEI1_A           */
#define SYS_GPA_MFP2_PA9MFP_ECAP0_IC1       (0xBUL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for ECAP0_IC1         */
#define SYS_GPA_MFP2_PA9MFP_TM2_EXT         (0xDUL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for TM2_EXT           */
#define SYS_GPA_MFP2_PA9MFP_I2C2_SMBAL      (0xEUL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for I2C2_SMBAL        */

/* PA.10 MFP */
#define SYS_GPA_MFP2_PA10MFP_GPIO           (0x0UL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for GPIO             */
#define SYS_GPA_MFP2_PA10MFP_EADC0_CH22     (0x1UL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for EADC0_CH22       */
#define SYS_GPA_MFP2_PA10MFP_LPADC0_CH22    (0x1UL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for LPADC0_CH22      */
#define SYS_GPA_MFP2_PA10MFP_ACMP1_P0       (0x1UL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for ACMP1_P0         */
#define SYS_GPA_MFP2_PA10MFP_OPA1_O         (0x1UL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for OPA1_O           */
#define SYS_GPA_MFP2_PA10MFP_EBI_nWR        (0x2UL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for EBI_nWR          */
#define SYS_GPA_MFP2_PA10MFP_SPI3_CLK       (0x5UL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for SPI3_CLK         */
#define SYS_GPA_MFP2_PA10MFP_USCI0_DAT0     (0x6UL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for USCI0_DAT0       */
#define SYS_GPA_MFP2_PA10MFP_I2C2_SDA       (0x7UL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for I2C2_SDA         */
#define SYS_GPA_MFP2_PA10MFP_UART6_RXD      (0x8UL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for UART6_RXD        */
#define SYS_GPA_MFP2_PA10MFP_PWM0_CH1       (0x9UL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for PWM0_CH1         */
#define SYS_GPA_MFP2_PA10MFP_EQEI1_INDEX    (0xAUL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for EQEI1_INDEX      */
#define SYS_GPA_MFP2_PA10MFP_ECAP0_IC0      (0xBUL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for ECAP0_IC0        */
#define SYS_GPA_MFP2_PA10MFP_TM1_EXT        (0xDUL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for TM1_EXT          */
#define SYS_GPA_MFP2_PA10MFP_DAC0_ST        (0xEUL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for DAC0_ST          */
#define SYS_GPA_MFP2_PA10MFP_LPTM1_EXT      (0x17UL<<SYS_GPA_MFP2_PA10MFP_Pos)  /*!< GPA_MFP2 PA10 setting for LPTM1_EXT        */

/* PA.11 MFP */
#define SYS_GPA_MFP2_PA11MFP_GPIO           (0x0UL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for GPIO             */
#define SYS_GPA_MFP2_PA11MFP_EADC0_CH23     (0x1UL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for EADC0_CH23       */
#define SYS_GPA_MFP2_PA11MFP_LPADC0_CH23    (0x1UL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for LPADC0_CH23      */
#define SYS_GPA_MFP2_PA11MFP_ACMP0_P0       (0x1UL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for ACMP0_P0         */
#define SYS_GPA_MFP2_PA11MFP_OPA2_O         (0x1UL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for OPA2_O           */
#define SYS_GPA_MFP2_PA11MFP_EBI_nRD        (0x2UL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for EBI_nRD          */
#define SYS_GPA_MFP2_PA11MFP_SPI3_SS        (0x5UL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for SPI3_SS          */
#define SYS_GPA_MFP2_PA11MFP_USCI0_CLK      (0x6UL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for USCI0_CLK        */
#define SYS_GPA_MFP2_PA11MFP_I2C2_SCL       (0x7UL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for I2C2_SCL         */
#define SYS_GPA_MFP2_PA11MFP_UART6_TXD      (0x8UL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for UART6_TXD        */
#define SYS_GPA_MFP2_PA11MFP_PWM0_CH0       (0x9UL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for PWM0_CH0         */
#define SYS_GPA_MFP2_PA11MFP_EPWM0_SYNC_OUT (0xAUL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for EPWM0_SYNC_OUT   */
#define SYS_GPA_MFP2_PA11MFP_TM0_EXT        (0xDUL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for TM0_EXT          */
#define SYS_GPA_MFP2_PA11MFP_DAC1_ST        (0xEUL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for DAC1_ST          */
#define SYS_GPA_MFP2_PA11MFP_LPTM0_EXT      (0x17UL<<SYS_GPA_MFP2_PA11MFP_Pos)  /*!< GPA_MFP2 PA11 setting for LPTM0_EXT        */

/* PA.12 MFP */
#define SYS_GPA_MFP3_PA12MFP_GPIO           (0x0UL<<SYS_GPA_MFP3_PA12MFP_Pos)   /*!< GPA_MFP3 PA12 setting for GPIO             */
#define SYS_GPA_MFP3_PA12MFP_UART4_TXD      (0x3UL<<SYS_GPA_MFP3_PA12MFP_Pos)   /*!< GPA_MFP3 PA12 setting for UART4_TXD        */
#define SYS_GPA_MFP3_PA12MFP_I2C1_SCL       (0x4UL<<SYS_GPA_MFP3_PA12MFP_Pos)   /*!< GPA_MFP3 PA12 setting for I2C1_SCL         */
#define SYS_GPA_MFP3_PA12MFP_SPI2_SS        (0x5UL<<SYS_GPA_MFP3_PA12MFP_Pos)   /*!< GPA_MFP3 PA12 setting for SPI2_SS          */
#define SYS_GPA_MFP3_PA12MFP_CANFD1_TXD     (0x6UL<<SYS_GPA_MFP3_PA12MFP_Pos)   /*!< GPA_MFP3 PA12 setting for CANFD1_TXD       */
#define SYS_GPA_MFP3_PA12MFP_SPI0_SS        (0x8UL<<SYS_GPA_MFP3_PA12MFP_Pos)   /*!< GPA_MFP3 PA12 setting for SPI0_SS          */
#define SYS_GPA_MFP3_PA12MFP_PWM1_CH2       (0xBUL<<SYS_GPA_MFP3_PA12MFP_Pos)   /*!< GPA_MFP3 PA12 setting for PWM1_CH2         */
#define SYS_GPA_MFP3_PA12MFP_EQEI1_INDEX    (0xCUL<<SYS_GPA_MFP3_PA12MFP_Pos)   /*!< GPA_MFP3 PA12 setting for EQEI1_INDEX      */
#define SYS_GPA_MFP3_PA12MFP_ECAP1_IC0      (0xDUL<<SYS_GPA_MFP3_PA12MFP_Pos)   /*!< GPA_MFP3 PA12 setting for ECAP1_IC0        */
#define SYS_GPA_MFP3_PA12MFP_USB_VBUS       (0xEUL<<SYS_GPA_MFP3_PA12MFP_Pos)   /*!< GPA_MFP3 PA12 setting for USB_VBUS         */
#define SYS_GPA_MFP3_PA12MFP_LPSPI0_SS      (0x14UL<<SYS_GPA_MFP3_PA12MFP_Pos)  /*!< GPA_MFP3 PA12 setting for LPSPI0_SS        */

/* PA.13 MFP */
#define SYS_GPA_MFP3_PA13MFP_GPIO           (0x0UL<<SYS_GPA_MFP3_PA13MFP_Pos)   /*!< GPA_MFP3 PA13 setting for GPIO             */
#define SYS_GPA_MFP3_PA13MFP_UART4_RXD      (0x3UL<<SYS_GPA_MFP3_PA13MFP_Pos)   /*!< GPA_MFP3 PA13 setting for UART4_RXD        */
#define SYS_GPA_MFP3_PA13MFP_I2C1_SDA       (0x4UL<<SYS_GPA_MFP3_PA13MFP_Pos)   /*!< GPA_MFP3 PA13 setting for I2C1_SDA         */
#define SYS_GPA_MFP3_PA13MFP_SPI2_CLK       (0x5UL<<SYS_GPA_MFP3_PA13MFP_Pos)   /*!< GPA_MFP3 PA13 setting for SPI2_CLK         */
#define SYS_GPA_MFP3_PA13MFP_CANFD1_RXD     (0x6UL<<SYS_GPA_MFP3_PA13MFP_Pos)   /*!< GPA_MFP3 PA13 setting for CANFD1_RXD       */
#define SYS_GPA_MFP3_PA13MFP_SPI0_CLK       (0x8UL<<SYS_GPA_MFP3_PA13MFP_Pos)   /*!< GPA_MFP3 PA13 setting for SPI0_CLK         */
#define SYS_GPA_MFP3_PA13MFP_PWM1_CH3       (0xBUL<<SYS_GPA_MFP3_PA13MFP_Pos)   /*!< GPA_MFP3 PA13 setting for PWM1_CH3         */
#define SYS_GPA_MFP3_PA13MFP_EQEI1_A        (0xCUL<<SYS_GPA_MFP3_PA13MFP_Pos)   /*!< GPA_MFP3 PA13 setting for EQEI1_A          */
#define SYS_GPA_MFP3_PA13MFP_ECAP1_IC1      (0xDUL<<SYS_GPA_MFP3_PA13MFP_Pos)   /*!< GPA_MFP3 PA13 setting for ECAP1_IC1        */
#define SYS_GPA_MFP3_PA13MFP_USB_D_N        (0xEUL<<SYS_GPA_MFP3_PA13MFP_Pos)   /*!< GPA_MFP3 PA13 setting for USB_D-           */
#define SYS_GPA_MFP3_PA13MFP_LPSPI0_CLK     (0x14UL<<SYS_GPA_MFP3_PA13MFP_Pos)  /*!< GPA_MFP3 PA13 setting for LPSPI0_CLK       */

/* PA.14 MFP */
#define SYS_GPA_MFP3_PA14MFP_GPIO           (0x0UL<<SYS_GPA_MFP3_PA14MFP_Pos)   /*!< GPA_MFP3 PA14 setting for GPIO             */
#define SYS_GPA_MFP3_PA14MFP_UART0_TXD      (0x3UL<<SYS_GPA_MFP3_PA14MFP_Pos)   /*!< GPA_MFP3 PA14 setting for UART0_TXD        */
#define SYS_GPA_MFP3_PA14MFP_EBI_AD5        (0x4UL<<SYS_GPA_MFP3_PA14MFP_Pos)   /*!< GPA_MFP3 PA14 setting for EBI_AD5          */
#define SYS_GPA_MFP3_PA14MFP_SPI2_MISO      (0x5UL<<SYS_GPA_MFP3_PA14MFP_Pos)   /*!< GPA_MFP3 PA14 setting for SPI2_MISO        */
#define SYS_GPA_MFP3_PA14MFP_I2C2_SCL       (0x6UL<<SYS_GPA_MFP3_PA14MFP_Pos)   /*!< GPA_MFP3 PA14 setting for I2C2_SCL         */
#define SYS_GPA_MFP3_PA14MFP_SPI0_MISO      (0x8UL<<SYS_GPA_MFP3_PA14MFP_Pos)   /*!< GPA_MFP3 PA14 setting for SPI0_MISO        */
#define SYS_GPA_MFP3_PA14MFP_PWM1_CH4       (0xBUL<<SYS_GPA_MFP3_PA14MFP_Pos)   /*!< GPA_MFP3 PA14 setting for PWM1_CH4         */
#define SYS_GPA_MFP3_PA14MFP_EQEI1_B        (0xCUL<<SYS_GPA_MFP3_PA14MFP_Pos)   /*!< GPA_MFP3 PA14 setting for EQEI1_B          */
#define SYS_GPA_MFP3_PA14MFP_ECAP1_IC2      (0xDUL<<SYS_GPA_MFP3_PA14MFP_Pos)   /*!< GPA_MFP3 PA14 setting for ECAP1_IC2        */
#define SYS_GPA_MFP3_PA14MFP_USB_D_P        (0xEUL<<SYS_GPA_MFP3_PA14MFP_Pos)   /*!< GPA_MFP3 PA14 setting for USB_D+           */
#define SYS_GPA_MFP3_PA14MFP_LPSPI0_MISO    (0x14UL<<SYS_GPA_MFP3_PA14MFP_Pos)  /*!< GPA_MFP3 PA14 setting for LPSPI0_MISO      */

/* PA.15 MFP */
#define SYS_GPA_MFP3_PA15MFP_GPIO           (0x0UL<<SYS_GPA_MFP3_PA15MFP_Pos)   /*!< GPA_MFP3 PA15 setting for GPIO             */
#define SYS_GPA_MFP3_PA15MFP_UART0_RXD      (0x3UL<<SYS_GPA_MFP3_PA15MFP_Pos)   /*!< GPA_MFP3 PA15 setting for UART0_RXD        */
#define SYS_GPA_MFP3_PA15MFP_SPI2_MOSI      (0x5UL<<SYS_GPA_MFP3_PA15MFP_Pos)   /*!< GPA_MFP3 PA15 setting for SPI2_MOSI        */
#define SYS_GPA_MFP3_PA15MFP_I2C2_SDA       (0x6UL<<SYS_GPA_MFP3_PA15MFP_Pos)   /*!< GPA_MFP3 PA15 setting for I2C2_SDA         */
#define SYS_GPA_MFP3_PA15MFP_SPI0_MOSI      (0x8UL<<SYS_GPA_MFP3_PA15MFP_Pos)   /*!< GPA_MFP3 PA15 setting for SPI0_MOSI        */
#define SYS_GPA_MFP3_PA15MFP_PWM1_CH5       (0xBUL<<SYS_GPA_MFP3_PA15MFP_Pos)   /*!< GPA_MFP3 PA15 setting for PWM1_CH5         */
#define SYS_GPA_MFP3_PA15MFP_EPWM0_SYNC_IN  (0xCUL<<SYS_GPA_MFP3_PA15MFP_Pos)   /*!< GPA_MFP3 PA15 setting for EPWM0_SYNC_IN    */
#define SYS_GPA_MFP3_PA15MFP_USB_OTG_ID     (0xEUL<<SYS_GPA_MFP3_PA15MFP_Pos)   /*!< GPA_MFP3 PA15 setting for USB_OTG_ID       */
#define SYS_GPA_MFP3_PA15MFP_LPSPI0_MOSI    (0x14UL<<SYS_GPA_MFP3_PA15MFP_Pos)  /*!< GPA_MFP3 PA15 setting for LPSPI0_MOSI      */

/* PB.0 MFP */
#define SYS_GPB_MFP0_PB0MFP_GPIO            (0x0UL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for GPIO              */
#define SYS_GPB_MFP0_PB0MFP_EADC0_CH0       (0x1UL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for EADC0_CH0         */
#define SYS_GPB_MFP0_PB0MFP_LPADC0_CH0      (0x1UL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for LPADC0_CH0        */
#define SYS_GPB_MFP0_PB0MFP_ACMP2_P1        (0x1UL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for ACMP2_P1          */
#define SYS_GPB_MFP0_PB0MFP_OPA0_P0         (0x1UL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for OPA0_P0           */
#define SYS_GPB_MFP0_PB0MFP_EBI_ADR9        (0x2UL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for EBI_ADR9          */
#define SYS_GPB_MFP0_PB0MFP_SPI3_I2SMCLK    (0x5UL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for SPI3_I2SMCLK      */
#define SYS_GPB_MFP0_PB0MFP_USCI0_CTL0      (0x6UL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for USCI0_CTL0        */
#define SYS_GPB_MFP0_PB0MFP_UART2_RXD       (0x7UL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for UART2_RXD         */
#define SYS_GPB_MFP0_PB0MFP_SPI0_I2SMCLK    (0x8UL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for SPI0_I2SMCLK      */
#define SYS_GPB_MFP0_PB0MFP_I2C1_SDA        (0x9UL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for I2C1_SDA          */
#define SYS_GPB_MFP0_PB0MFP_QSPI0_MOSI1     (0xAUL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for QSPI0_MOSI1       */
#define SYS_GPB_MFP0_PB0MFP_EPWM0_CH5       (0xBUL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for EPWM0_CH5         */
#define SYS_GPB_MFP0_PB0MFP_EPWM1_CH5       (0xCUL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for EPWM1_CH5         */
#define SYS_GPB_MFP0_PB0MFP_EPWM0_BRAKE1    (0xDUL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for EPWM0_BRAKE1      */
#define SYS_GPB_MFP0_PB0MFP_PWM0_BRAKE1     (0xEUL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for PWM0_BRAKE1       */
#define SYS_GPB_MFP0_PB0MFP_UTCPD0_VCNEN2   (0x11UL<<SYS_GPB_MFP0_PB0MFP_Pos)   /*!< GPB_MFP0 PB0 setting for UTCPD0_VCNEN2     */
#define SYS_GPB_MFP0_PB0MFP_LPIO2           (0x17UL<<SYS_GPB_MFP0_PB0MFP_Pos)   /*!< GPB_MFP0 PB0 setting for LPIO2             */

/* PB.1 MFP */
#define SYS_GPB_MFP0_PB1MFP_GPIO            (0x0UL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for GPIO              */
#define SYS_GPB_MFP0_PB1MFP_EADC0_CH1       (0x1UL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for EADC0_CH1         */
#define SYS_GPB_MFP0_PB1MFP_LPADC0_CH1      (0x1UL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for LPADC0_CH1        */
#define SYS_GPB_MFP0_PB1MFP_ACMP2_N         (0x1UL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for ACMP2_N           */
#define SYS_GPB_MFP0_PB1MFP_OPA0_N0         (0x1UL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for OPA0_N0           */
#define SYS_GPB_MFP0_PB1MFP_EBI_ADR8        (0x2UL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for EBI_ADR8          */
#define SYS_GPB_MFP0_PB1MFP_UART2_TXD       (0x7UL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for UART2_TXD         */
#define SYS_GPB_MFP0_PB1MFP_USCI1_CLK       (0x8UL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for USCI1_CLK         */
#define SYS_GPB_MFP0_PB1MFP_I2C1_SCL        (0x9UL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for I2C1_SCL          */
#define SYS_GPB_MFP0_PB1MFP_QSPI0_MISO1     (0xAUL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for QSPI0_MISO1       */
#define SYS_GPB_MFP0_PB1MFP_EPWM0_CH4       (0xBUL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for EPWM0_CH4         */
#define SYS_GPB_MFP0_PB1MFP_EPWM1_CH4       (0xCUL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for EPWM1_CH4         */
#define SYS_GPB_MFP0_PB1MFP_EPWM0_BRAKE0    (0xDUL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for EPWM0_BRAKE0      */
#define SYS_GPB_MFP0_PB1MFP_PWM0_BRAKE0     (0xEUL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for PWM0_BRAKE0       */
#define SYS_GPB_MFP0_PB1MFP_UTCPD0_VBDCHG   (0x11UL<<SYS_GPB_MFP0_PB1MFP_Pos)   /*!< GPB_MFP0 PB1 setting for UTCPD0_VBDCHG     */
#define SYS_GPB_MFP0_PB1MFP_LPIO3           (0x17UL<<SYS_GPB_MFP0_PB1MFP_Pos)   /*!< GPB_MFP0 PB1 setting for LPIO3             */

/* PB.2 MFP */
#define SYS_GPB_MFP0_PB2MFP_GPIO            (0x0UL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for GPIO              */
#define SYS_GPB_MFP0_PB2MFP_EADC0_CH2       (0x1UL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for EADC0_CH2         */
#define SYS_GPB_MFP0_PB2MFP_LPADC0_CH2      (0x1UL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for LPADC0_CH2        */
#define SYS_GPB_MFP0_PB2MFP_ACMP0_P1        (0x1UL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for ACMP0_P1          */
#define SYS_GPB_MFP0_PB2MFP_OPA0_O          (0x1UL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for OPA0_O            */
#define SYS_GPB_MFP0_PB2MFP_EBI_ADR3        (0x2UL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for EBI_ADR3          */
#define SYS_GPB_MFP0_PB2MFP_I2C1_SDA        (0x4UL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for I2C1_SDA          */
#define SYS_GPB_MFP0_PB2MFP_SPI1_SS         (0x5UL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for SPI1_SS           */
#define SYS_GPB_MFP0_PB2MFP_UART1_RXD       (0x6UL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for UART1_RXD         */
#define SYS_GPB_MFP0_PB2MFP_UART5_nCTS      (0x7UL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for UART5_nCTS        */
#define SYS_GPB_MFP0_PB2MFP_USCI1_DAT0      (0x8UL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for USCI1_DAT0        */
#define SYS_GPB_MFP0_PB2MFP_EPWM0_CH3       (0xBUL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for EPWM0_CH3         */
#define SYS_GPB_MFP0_PB2MFP_TM3             (0xEUL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for TM3               */
#define SYS_GPB_MFP0_PB2MFP_INT3            (0xFUL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for INT3              */
#define SYS_GPB_MFP0_PB2MFP_LPIO6           (0x17UL<<SYS_GPB_MFP0_PB2MFP_Pos)   /*!< GPB_MFP0 PB2 setting for LPIO6             */

/* PB.3 MFP */
#define SYS_GPB_MFP0_PB3MFP_GPIO            (0x0UL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for GPIO              */
#define SYS_GPB_MFP0_PB3MFP_EADC0_CH3       (0x1UL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for EADC0_CH3         */
#define SYS_GPB_MFP0_PB3MFP_LPADC0_CH3      (0x1UL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for LPADC0_CH3        */
#define SYS_GPB_MFP0_PB3MFP_ACMP0_N         (0x1UL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for ACMP0_N           */
#define SYS_GPB_MFP0_PB3MFP_OPA2_P0         (0x1UL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for OPA2_P0           */
#define SYS_GPB_MFP0_PB3MFP_EBI_ADR2        (0x2UL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for EBI_ADR2          */
#define SYS_GPB_MFP0_PB3MFP_I2C1_SCL        (0x4UL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for I2C1_SCL          */
#define SYS_GPB_MFP0_PB3MFP_SPI1_CLK        (0x5UL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for SPI1_CLK          */
#define SYS_GPB_MFP0_PB3MFP_UART1_TXD       (0x6UL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for UART1_TXD         */
#define SYS_GPB_MFP0_PB3MFP_UART5_nRTS      (0x7UL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for UART5_nRTS        */
#define SYS_GPB_MFP0_PB3MFP_USCI1_DAT1      (0x8UL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for USCI1_DAT1        */
#define SYS_GPB_MFP0_PB3MFP_EPWM0_CH2       (0xBUL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for EPWM0_CH2         */
#define SYS_GPB_MFP0_PB3MFP_PWM0_BRAKE0     (0xDUL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for PWM0_BRAKE0       */
#define SYS_GPB_MFP0_PB3MFP_TM2             (0xEUL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for TM2               */
#define SYS_GPB_MFP0_PB3MFP_INT2            (0xFUL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for INT2              */
#define SYS_GPB_MFP0_PB3MFP_LPIO7           (0x17UL<<SYS_GPB_MFP0_PB3MFP_Pos)   /*!< GPB_MFP0 PB3 setting for LPIO7             */

/* PB.4 MFP */
#define SYS_GPB_MFP1_PB4MFP_GPIO            (0x0UL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for GPIO              */
#define SYS_GPB_MFP1_PB4MFP_EADC0_CH4       (0x1UL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for EADC0_CH4         */
#define SYS_GPB_MFP1_PB4MFP_LPADC0_CH4      (0x1UL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for LPADC0_CH4        */
#define SYS_GPB_MFP1_PB4MFP_ACMP1_P1        (0x1UL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for ACMP1_P1          */
#define SYS_GPB_MFP1_PB4MFP_OPA2_N0         (0x1UL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for OPA2_N0           */
#define SYS_GPB_MFP1_PB4MFP_EBI_ADR1        (0x2UL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for EBI_ADR1          */
#define SYS_GPB_MFP1_PB4MFP_SPI1_MOSI       (0x5UL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for SPI1_MOSI         */
#define SYS_GPB_MFP1_PB4MFP_I2C0_SDA        (0x6UL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for I2C0_SDA          */
#define SYS_GPB_MFP1_PB4MFP_UART5_RXD       (0x7UL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for UART5_RXD         */
#define SYS_GPB_MFP1_PB4MFP_USCI1_CTL1      (0x8UL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for USCI1_CTL1        */
#define SYS_GPB_MFP1_PB4MFP_EPWM0_CH1       (0xBUL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for EPWM0_CH1         */
#define SYS_GPB_MFP1_PB4MFP_UART2_RXD       (0xDUL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for UART2_RXD         */
#define SYS_GPB_MFP1_PB4MFP_TM1             (0xEUL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for TM1               */
#define SYS_GPB_MFP1_PB4MFP_INT1            (0xFUL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for INT1              */
#define SYS_GPB_MFP1_PB4MFP_LPI2C0_SDA      (0x16UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for LPI2C0_SDA        */
#define SYS_GPB_MFP1_PB4MFP_LPTM1           (0x17UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4 setting for LPTM1             */

/* PB.5 MFP */
#define SYS_GPB_MFP1_PB5MFP_GPIO            (0x0UL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for GPIO              */
#define SYS_GPB_MFP1_PB5MFP_EADC0_CH5       (0x1UL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for EADC0_CH5         */
#define SYS_GPB_MFP1_PB5MFP_LPADC0_CH5      (0x1UL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for LPADC0_CH5        */
#define SYS_GPB_MFP1_PB5MFP_ACMP1_N         (0x1UL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for ACMP1_N           */
#define SYS_GPB_MFP1_PB5MFP_OPA1_P1         (0x1UL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for OPA1_P1           */
#define SYS_GPB_MFP1_PB5MFP_EBI_ADR0        (0x2UL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for EBI_ADR0          */
#define SYS_GPB_MFP1_PB5MFP_SPI1_MISO       (0x5UL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for SPI1_MISO         */
#define SYS_GPB_MFP1_PB5MFP_I2C0_SCL        (0x6UL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for I2C0_SCL          */
#define SYS_GPB_MFP1_PB5MFP_UART5_TXD       (0x7UL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for UART5_TXD         */
#define SYS_GPB_MFP1_PB5MFP_USCI1_CTL0      (0x8UL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for USCI1_CTL0        */
#define SYS_GPB_MFP1_PB5MFP_EPWM0_CH0       (0xBUL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for EPWM0_CH0         */
#define SYS_GPB_MFP1_PB5MFP_UART2_TXD       (0xDUL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for UART2_TXD         */
#define SYS_GPB_MFP1_PB5MFP_TM0             (0xEUL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for TM0               */
#define SYS_GPB_MFP1_PB5MFP_INT0            (0xFUL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for INT0              */
#define SYS_GPB_MFP1_PB5MFP_LPI2C0_SCL      (0x16UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for LPI2C0_SCL        */
#define SYS_GPB_MFP1_PB5MFP_LPTM0           (0x17UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5 setting for LPTM0             */

/* PB.6 MFP */
#define SYS_GPB_MFP1_PB6MFP_GPIO            (0x0UL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for GPIO              */
#define SYS_GPB_MFP1_PB6MFP_EADC0_CH6       (0x1UL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for EADC0_CH6         */
#define SYS_GPB_MFP1_PB6MFP_LPADC0_CH6      (0x1UL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for LPADC0_CH6        */
#define SYS_GPB_MFP1_PB6MFP_ACMP2_P2        (0x1UL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for ACMP2_P2          */
#define SYS_GPB_MFP1_PB6MFP_OPA2_P1         (0x1UL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for OPA2_P1           */
#define SYS_GPB_MFP1_PB6MFP_EBI_nWRH        (0x2UL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for EBI_nWRH          */
#define SYS_GPB_MFP1_PB6MFP_USCI1_DAT1      (0x4UL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for USCI1_DAT1        */
#define SYS_GPB_MFP1_PB6MFP_UART1_RXD       (0x6UL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for UART1_RXD         */
#define SYS_GPB_MFP1_PB6MFP_EBI_nCS1        (0x8UL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for EBI_nCS1          */
#define SYS_GPB_MFP1_PB6MFP_PWM1_CH5        (0xAUL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for PWM1_CH5          */
#define SYS_GPB_MFP1_PB6MFP_EPWM1_BRAKE1    (0xBUL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for EPWM1_BRAKE1      */
#define SYS_GPB_MFP1_PB6MFP_EPWM1_CH5       (0xCUL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for EPWM1_CH5         */
#define SYS_GPB_MFP1_PB6MFP_INT4            (0xDUL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for INT4              */
#define SYS_GPB_MFP1_PB6MFP_PWM1_BRAKE1     (0xEUL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for PWM1_BRAKE1       */
#define SYS_GPB_MFP1_PB6MFP_ACMP1_O         (0xFUL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for ACMP1_O           */

/* PB.7 MFP */
#define SYS_GPB_MFP1_PB7MFP_GPIO            (0x0UL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for GPIO              */
#define SYS_GPB_MFP1_PB7MFP_EADC0_CH7       (0x1UL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for EADC0_CH7         */
#define SYS_GPB_MFP1_PB7MFP_LPADC0_CH7      (0x1UL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for LPADC0_CH7        */
#define SYS_GPB_MFP1_PB7MFP_ACMP2_P3        (0x1UL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for ACMP2_P3          */
#define SYS_GPB_MFP1_PB7MFP_OPA2_N1         (0x1UL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for OPA2_N1           */
#define SYS_GPB_MFP1_PB7MFP_EBI_nWRL        (0x2UL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for EBI_nWRL          */
#define SYS_GPB_MFP1_PB7MFP_USCI1_DAT0      (0x4UL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for USCI1_DAT0        */
#define SYS_GPB_MFP1_PB7MFP_UART1_TXD       (0x6UL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for UART1_TXD         */
#define SYS_GPB_MFP1_PB7MFP_EBI_nCS0        (0x8UL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for EBI_nCS0          */
#define SYS_GPB_MFP1_PB7MFP_PWM1_CH4        (0xAUL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for PWM1_CH4          */
#define SYS_GPB_MFP1_PB7MFP_EPWM1_BRAKE0    (0xBUL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for EPWM1_BRAKE0      */
#define SYS_GPB_MFP1_PB7MFP_EPWM1_CH4       (0xCUL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for EPWM1_CH4         */
#define SYS_GPB_MFP1_PB7MFP_INT5            (0xDUL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for INT5              */
#define SYS_GPB_MFP1_PB7MFP_PWM1_BRAKE0     (0xEUL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for PWM1_BRAKE0       */
#define SYS_GPB_MFP1_PB7MFP_ACMP0_O         (0xFUL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for ACMP0_O           */

/* PB.8 MFP */
#define SYS_GPB_MFP2_PB8MFP_GPIO            (0x0UL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for GPIO              */
#define SYS_GPB_MFP2_PB8MFP_EADC0_CH8       (0x1UL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for EADC0_CH8         */
#define SYS_GPB_MFP2_PB8MFP_LPADC0_CH8      (0x1UL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for LPADC0_CH8        */
#define SYS_GPB_MFP2_PB8MFP_EBI_ADR19       (0x2UL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for EBI_ADR19         */
#define SYS_GPB_MFP2_PB8MFP_USCI1_CLK       (0x4UL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for USCI1_CLK         */
#define SYS_GPB_MFP2_PB8MFP_UART0_RXD       (0x5UL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for UART0_RXD         */
#define SYS_GPB_MFP2_PB8MFP_UART1_nRTS      (0x6UL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for UART1_nRTS        */
#define SYS_GPB_MFP2_PB8MFP_UART7_RXD       (0x8UL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for UART7_RXD         */
#define SYS_GPB_MFP2_PB8MFP_PWM1_CH3        (0xAUL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for PWM1_CH3          */
#define SYS_GPB_MFP2_PB8MFP_LPUART0_RXD     (0x15UL<<SYS_GPB_MFP2_PB8MFP_Pos)   /*!< GPB_MFP2 PB8 setting for LPUART0_RXD       */

/* PB.9 MFP */
#define SYS_GPB_MFP2_PB9MFP_GPIO            (0x0UL<<SYS_GPB_MFP2_PB9MFP_Pos)    /*!< GPB_MFP2 PB9 setting for GPIO              */
#define SYS_GPB_MFP2_PB9MFP_EADC0_CH9       (0x1UL<<SYS_GPB_MFP2_PB9MFP_Pos)    /*!< GPB_MFP2 PB9 setting for EADC0_CH9         */
#define SYS_GPB_MFP2_PB9MFP_LPADC0_CH9      (0x1UL<<SYS_GPB_MFP2_PB9MFP_Pos)    /*!< GPB_MFP2 PB9 setting for LPADC0_CH9        */
#define SYS_GPB_MFP2_PB9MFP_EBI_ADR18       (0x2UL<<SYS_GPB_MFP2_PB9MFP_Pos)    /*!< GPB_MFP2 PB9 setting for EBI_ADR18         */
#define SYS_GPB_MFP2_PB9MFP_USCI1_CTL1      (0x4UL<<SYS_GPB_MFP2_PB9MFP_Pos)    /*!< GPB_MFP2 PB9 setting for USCI1_CTL1        */
#define SYS_GPB_MFP2_PB9MFP_UART0_TXD       (0x5UL<<SYS_GPB_MFP2_PB9MFP_Pos)    /*!< GPB_MFP2 PB9 setting for UART0_TXD         */
#define SYS_GPB_MFP2_PB9MFP_UART1_nCTS      (0x6UL<<SYS_GPB_MFP2_PB9MFP_Pos)    /*!< GPB_MFP2 PB9 setting for UART1_nCTS        */
#define SYS_GPB_MFP2_PB9MFP_UART7_TXD       (0x8UL<<SYS_GPB_MFP2_PB9MFP_Pos)    /*!< GPB_MFP2 PB9 setting for UART7_TXD         */
#define SYS_GPB_MFP2_PB9MFP_PWM1_CH2        (0xAUL<<SYS_GPB_MFP2_PB9MFP_Pos)    /*!< GPB_MFP2 PB9 setting for PWM1_CH2          */
#define SYS_GPB_MFP2_PB9MFP_LPUART0_TXD     (0x15UL<<SYS_GPB_MFP2_PB9MFP_Pos)   /*!< GPB_MFP2 PB9 setting for LPUART0_TXD       */

/* PB.10 MFP */
#define SYS_GPB_MFP2_PB10MFP_GPIO           (0x0UL<<SYS_GPB_MFP2_PB10MFP_Pos)   /*!< GPB_MFP2 PB10 setting for GPIO             */
#define SYS_GPB_MFP2_PB10MFP_EADC0_CH10     (0x1UL<<SYS_GPB_MFP2_PB10MFP_Pos)   /*!< GPB_MFP2 PB10 setting for EADC0_CH10       */
#define SYS_GPB_MFP2_PB10MFP_LPADC0_CH10    (0x1UL<<SYS_GPB_MFP2_PB10MFP_Pos)   /*!< GPB_MFP2 PB10 setting for LPADC0_CH10      */
#define SYS_GPB_MFP2_PB10MFP_EBI_ADR17      (0x2UL<<SYS_GPB_MFP2_PB10MFP_Pos)   /*!< GPB_MFP2 PB10 setting for EBI_ADR17        */
#define SYS_GPB_MFP2_PB10MFP_USCI1_CTL0     (0x4UL<<SYS_GPB_MFP2_PB10MFP_Pos)   /*!< GPB_MFP2 PB10 setting for USCI1_CTL0       */
#define SYS_GPB_MFP2_PB10MFP_UART0_nRTS     (0x5UL<<SYS_GPB_MFP2_PB10MFP_Pos)   /*!< GPB_MFP2 PB10 setting for UART0_nRTS       */
#define SYS_GPB_MFP2_PB10MFP_UART4_RXD      (0x6UL<<SYS_GPB_MFP2_PB10MFP_Pos)   /*!< GPB_MFP2 PB10 setting for UART4_RXD        */
#define SYS_GPB_MFP2_PB10MFP_I2C1_SDA       (0x7UL<<SYS_GPB_MFP2_PB10MFP_Pos)   /*!< GPB_MFP2 PB10 setting for I2C1_SDA         */
#define SYS_GPB_MFP2_PB10MFP_CANFD1_RXD     (0x8UL<<SYS_GPB_MFP2_PB10MFP_Pos)   /*!< GPB_MFP2 PB10 setting for CANFD1_RXD       */
#define SYS_GPB_MFP2_PB10MFP_PWM1_CH1       (0xAUL<<SYS_GPB_MFP2_PB10MFP_Pos)   /*!< GPB_MFP2 PB10 setting for PWM1_CH1         */
#define SYS_GPB_MFP2_PB10MFP_LPUART0_nRTS   (0x15UL<<SYS_GPB_MFP2_PB10MFP_Pos)  /*!< GPB_MFP2 PB10 setting for LPUART0_nRTS     */

/* PB.11 MFP */
#define SYS_GPB_MFP2_PB11MFP_GPIO           (0x0UL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for GPIO             */
#define SYS_GPB_MFP2_PB11MFP_EADC0_CH11     (0x1UL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for EADC0_CH11       */
#define SYS_GPB_MFP2_PB11MFP_LPADC0_CH11    (0x1UL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for LPADC0_CH11      */
#define SYS_GPB_MFP2_PB11MFP_EBI_ADR16      (0x2UL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for EBI_ADR16        */
#define SYS_GPB_MFP2_PB11MFP_UART0_nCTS     (0x5UL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for UART0_nCTS       */
#define SYS_GPB_MFP2_PB11MFP_UART4_TXD      (0x6UL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for UART4_TXD        */
#define SYS_GPB_MFP2_PB11MFP_I2C1_SCL       (0x7UL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for I2C1_SCL         */
#define SYS_GPB_MFP2_PB11MFP_CANFD1_TXD     (0x8UL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for CANFD1_TXD       */
#define SYS_GPB_MFP2_PB11MFP_SPI0_I2SMCLK   (0x9UL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for SPI0_I2SMCLK     */
#define SYS_GPB_MFP2_PB11MFP_PWM1_CH0       (0xAUL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for PWM1_CH0         */
#define SYS_GPB_MFP2_PB11MFP_LPUART0_nCTS   (0x15UL<<SYS_GPB_MFP2_PB11MFP_Pos)  /*!< GPB_MFP2 PB11 setting for LPUART0_nCTS     */

/* PB.12 MFP */
#define SYS_GPB_MFP3_PB12MFP_GPIO           (0x0UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for GPIO             */
#define SYS_GPB_MFP3_PB12MFP_EADC0_CH12     (0x1UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for EADC0_CH12       */
#define SYS_GPB_MFP3_PB12MFP_LPADC0_CH12    (0x1UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for LPADC0_CH12      */
#define SYS_GPB_MFP3_PB12MFP_DAC0_OUT       (0x1UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for DAC0_OUT         */
#define SYS_GPB_MFP3_PB12MFP_ACMP0_P2       (0x1UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for ACMP0_P2         */
#define SYS_GPB_MFP3_PB12MFP_ACMP1_P2       (0x1UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for ACMP1_P2         */
#define SYS_GPB_MFP3_PB12MFP_EBI_AD15       (0x2UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for EBI_AD15         */
#define SYS_GPB_MFP3_PB12MFP_SPI0_MOSI      (0x4UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for SPI0_MOSI        */
#define SYS_GPB_MFP3_PB12MFP_USCI0_CLK      (0x5UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for USCI0_CLK        */
#define SYS_GPB_MFP3_PB12MFP_UART0_RXD      (0x6UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for UART0_RXD        */
#define SYS_GPB_MFP3_PB12MFP_UART3_nCTS     (0x7UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for UART3_nCTS       */
#define SYS_GPB_MFP3_PB12MFP_I2C2_SDA       (0x8UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for I2C2_SDA         */
#define SYS_GPB_MFP3_PB12MFP_CANFD0_RXD     (0xAUL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for CANFD0_RXD       */
#define SYS_GPB_MFP3_PB12MFP_EPWM1_CH3      (0xBUL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for EPWM1_CH3        */
#define SYS_GPB_MFP3_PB12MFP_TM3_EXT        (0xDUL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for TM3_EXT          */
#define SYS_GPB_MFP3_PB12MFP_LPSPI0_MOSI    (0x14UL<<SYS_GPB_MFP3_PB12MFP_Pos)  /*!< GPB_MFP3 PB12 setting for LPSPI0_MOSI      */
#define SYS_GPB_MFP3_PB12MFP_LPUART0_RXD    (0x15UL<<SYS_GPB_MFP3_PB12MFP_Pos)  /*!< GPB_MFP3 PB12 setting for LPUART0_RXD      */

/* PB.13 MFP */
#define SYS_GPB_MFP3_PB13MFP_GPIO           (0x0UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for GPIO             */
#define SYS_GPB_MFP3_PB13MFP_EADC0_CH13     (0x1UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for EADC0_CH13       */
#define SYS_GPB_MFP3_PB13MFP_LPADC0_CH13    (0x1UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for LPADC0_CH13      */
#define SYS_GPB_MFP3_PB13MFP_DAC1_OUT       (0x1UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for DAC1_OUT         */
#define SYS_GPB_MFP3_PB13MFP_ACMP0_P3       (0x1UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for ACMP0_P3         */
#define SYS_GPB_MFP3_PB13MFP_ACMP1_P3       (0x1UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for ACMP1_P3         */
#define SYS_GPB_MFP3_PB13MFP_OPA1_N1        (0x1UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for OPA1_N1          */
#define SYS_GPB_MFP3_PB13MFP_EBI_AD14       (0x2UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for EBI_AD14         */
#define SYS_GPB_MFP3_PB13MFP_SPI0_MISO      (0x4UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for SPI0_MISO        */
#define SYS_GPB_MFP3_PB13MFP_USCI0_DAT0     (0x5UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for USCI0_DAT0       */
#define SYS_GPB_MFP3_PB13MFP_UART0_TXD      (0x6UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for UART0_TXD        */
#define SYS_GPB_MFP3_PB13MFP_UART3_nRTS     (0x7UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for UART3_nRTS       */
#define SYS_GPB_MFP3_PB13MFP_I2C2_SCL       (0x8UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for I2C2_SCL         */
#define SYS_GPB_MFP3_PB13MFP_CANFD0_TXD     (0xAUL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for CANFD0_TXD       */
#define SYS_GPB_MFP3_PB13MFP_EPWM1_CH2      (0xBUL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for EPWM1_CH2        */
#define SYS_GPB_MFP3_PB13MFP_TM2_EXT        (0xDUL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for TM2_EXT          */
#define SYS_GPB_MFP3_PB13MFP_LPSPI0_MISO    (0x14UL<<SYS_GPB_MFP3_PB13MFP_Pos)  /*!< GPB_MFP3 PB13 setting for LPSPI0_MISO      */
#define SYS_GPB_MFP3_PB13MFP_LPUART0_TXD    (0x15UL<<SYS_GPB_MFP3_PB13MFP_Pos)  /*!< GPB_MFP3 PB13 setting for LPUART0_TXD      */

/* PB.14 MFP */
#define SYS_GPB_MFP3_PB14MFP_GPIO           (0x0UL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for GPIO             */
#define SYS_GPB_MFP3_PB14MFP_EADC0_CH14     (0x1UL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for EADC0_CH14       */
#define SYS_GPB_MFP3_PB14MFP_LPADC0_CH14    (0x1UL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for LPADC0_CH14      */
#define SYS_GPB_MFP3_PB14MFP_OPA0_N1        (0x1UL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for OPA0_N1          */
#define SYS_GPB_MFP3_PB14MFP_EBI_AD13       (0x2UL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for EBI_AD13         */
#define SYS_GPB_MFP3_PB14MFP_SPI0_CLK       (0x4UL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for SPI0_CLK         */
#define SYS_GPB_MFP3_PB14MFP_USCI0_DAT1     (0x5UL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for USCI0_DAT1       */
#define SYS_GPB_MFP3_PB14MFP_UART0_nRTS     (0x6UL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for UART0_nRTS       */
#define SYS_GPB_MFP3_PB14MFP_UART3_RXD      (0x7UL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for UART3_RXD        */
#define SYS_GPB_MFP3_PB14MFP_I2C2_SMBSUS    (0x8UL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for I2C2_SMBSUS      */
#define SYS_GPB_MFP3_PB14MFP_EQEI0_INDEX    (0xAUL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for EQEI0_INDEX      */
#define SYS_GPB_MFP3_PB14MFP_EPWM1_CH1      (0xBUL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for EPWM1_CH1        */
#define SYS_GPB_MFP3_PB14MFP_ECAP0_IC0      (0xCUL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for ECAP0_IC0        */
#define SYS_GPB_MFP3_PB14MFP_TM1_EXT        (0xDUL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for TM1_EXT          */
#define SYS_GPB_MFP3_PB14MFP_CLKO           (0xEUL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for CLKO             */
#define SYS_GPB_MFP3_PB14MFP_TK_SE          (0x10UL<<SYS_GPB_MFP3_PB14MFP_Pos)  /*!< GPB_MFP3 PB14 setting for TK_SE            */
#define SYS_GPB_MFP3_PB14MFP_UTCPD0_VBSRCEN (0x11UL<<SYS_GPB_MFP3_PB14MFP_Pos)  /*!< GPB_MFP3 PB14 setting for UTCPD0_VBSRCEN   */
#define SYS_GPB_MFP3_PB14MFP_LPSPI0_CLK     (0x14UL<<SYS_GPB_MFP3_PB14MFP_Pos)  /*!< GPB_MFP3 PB14 setting for LPSPI0_CLK       */
#define SYS_GPB_MFP3_PB14MFP_LPUART0_nRTS   (0x15UL<<SYS_GPB_MFP3_PB14MFP_Pos)  /*!< GPB_MFP3 PB14 setting for LPUART0_nRTS     */
#define SYS_GPB_MFP3_PB14MFP_LPTM1_EXT      (0x17UL<<SYS_GPB_MFP3_PB14MFP_Pos)  /*!< GPB_MFP3 PB14 setting for LPTM1_EXT        */

/* PB.15 MFP */
#define SYS_GPB_MFP3_PB15MFP_GPIO           (0x0UL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for GPIO             */
#define SYS_GPB_MFP3_PB15MFP_EADC0_CH15     (0x1UL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for EADC0_CH15       */
#define SYS_GPB_MFP3_PB15MFP_LPADC0_CH15    (0x1UL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for LPADC0_CH15      */
#define SYS_GPB_MFP3_PB15MFP_OPA0_P1        (0x1UL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for OPA0_P1          */
#define SYS_GPB_MFP3_PB15MFP_EBI_AD12       (0x2UL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for EBI_AD12         */
#define SYS_GPB_MFP3_PB15MFP_SPI0_SS        (0x4UL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for SPI0_SS          */
#define SYS_GPB_MFP3_PB15MFP_USCI0_CTL1     (0x5UL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for USCI0_CTL1       */
#define SYS_GPB_MFP3_PB15MFP_UART0_nCTS     (0x6UL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for UART0_nCTS       */
#define SYS_GPB_MFP3_PB15MFP_UART3_TXD      (0x7UL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for UART3_TXD        */
#define SYS_GPB_MFP3_PB15MFP_I2C2_SMBAL     (0x8UL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for I2C2_SMBAL       */
#define SYS_GPB_MFP3_PB15MFP_EPWM0_BRAKE1   (0xAUL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for EPWM0_BRAKE1     */
#define SYS_GPB_MFP3_PB15MFP_EPWM1_CH0      (0xBUL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for EPWM1_CH0        */
#define SYS_GPB_MFP3_PB15MFP_TM0_EXT        (0xDUL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for TM0_EXT          */
#define SYS_GPB_MFP3_PB15MFP_USB_VBUS_EN    (0xEUL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for USB_VBUS_EN      */
#define SYS_GPB_MFP3_PB15MFP_UTCPD0_VBSNKEN (0x11UL<<SYS_GPB_MFP3_PB15MFP_Pos)  /*!< GPB_MFP3 PB15 setting for UTCPD0_VBSNKEN   */
#define SYS_GPB_MFP3_PB15MFP_LPSPI0_SS      (0x14UL<<SYS_GPB_MFP3_PB15MFP_Pos)  /*!< GPB_MFP3 PB15 setting for LPSPI0_SS        */
#define SYS_GPB_MFP3_PB15MFP_LPUART0_nCTS   (0x15UL<<SYS_GPB_MFP3_PB15MFP_Pos)  /*!< GPB_MFP3 PB15 setting for LPUART0_nCTS     */
#define SYS_GPB_MFP3_PB15MFP_LPTM0_EXT      (0x17UL<<SYS_GPB_MFP3_PB15MFP_Pos)  /*!< GPB_MFP3 PB15 setting for LPTM0_EXT        */

/* PC.0 MFP */
#define SYS_GPC_MFP0_PC0MFP_GPIO            (0x0UL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for GPIO              */
#define SYS_GPC_MFP0_PC0MFP_EBI_AD0         (0x2UL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for EBI_AD0           */
#define SYS_GPC_MFP0_PC0MFP_QSPI0_MOSI0     (0x4UL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for QSPI0_MOSI0       */
#define SYS_GPC_MFP0_PC0MFP_SPI1_SS         (0x7UL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for SPI1_SS           */
#define SYS_GPC_MFP0_PC0MFP_UART2_RXD       (0x8UL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for UART2_RXD         */
#define SYS_GPC_MFP0_PC0MFP_I2C0_SDA        (0x9UL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for I2C0_SDA          */
#define SYS_GPC_MFP0_PC0MFP_EQEI0_B         (0xAUL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for EQEI0_B           */
#define SYS_GPC_MFP0_PC0MFP_EPWM1_CH5       (0xCUL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for EPWM1_CH5         */
#define SYS_GPC_MFP0_PC0MFP_ECAP0_IC2       (0xDUL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for ECAP0_IC2         */
#define SYS_GPC_MFP0_PC0MFP_ACMP1_O         (0xEUL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for ACMP1_O           */
#define SYS_GPC_MFP0_PC0MFP_UTCPD0_CC1      (0x11UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for UTCPD0_CC1        */
#define SYS_GPC_MFP0_PC0MFP_LPI2C0_SDA      (0x16UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for LPI2C0_SDA        */
#define SYS_GPC_MFP0_PC0MFP_LPIO4           (0x17UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0 setting for LPIO4             */

/* PC.1 MFP */
#define SYS_GPC_MFP0_PC1MFP_GPIO            (0x0UL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for GPIO              */
#define SYS_GPC_MFP0_PC1MFP_EBI_AD1         (0x2UL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for EBI_AD1           */
#define SYS_GPC_MFP0_PC1MFP_QSPI0_MISO0     (0x4UL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for QSPI0_MISO0       */
#define SYS_GPC_MFP0_PC1MFP_SPI1_CLK        (0x7UL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for SPI1_CLK          */
#define SYS_GPC_MFP0_PC1MFP_UART2_TXD       (0x8UL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for UART2_TXD         */
#define SYS_GPC_MFP0_PC1MFP_I2C0_SCL        (0x9UL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for I2C0_SCL          */
#define SYS_GPC_MFP0_PC1MFP_EQEI0_A         (0xAUL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for EQEI0_A           */
#define SYS_GPC_MFP0_PC1MFP_EPWM1_CH4       (0xCUL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for EPWM1_CH4         */
#define SYS_GPC_MFP0_PC1MFP_ECAP0_IC1       (0xDUL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for ECAP0_IC1         */
#define SYS_GPC_MFP0_PC1MFP_ACMP0_O         (0xEUL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for ACMP0_O           */
#define SYS_GPC_MFP0_PC1MFP_EADC0_ST        (0xFUL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for EADC0_ST          */
#define SYS_GPC_MFP0_PC1MFP_LPADC0_ST       (0xFUL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for LPADC0_ST         */
#define SYS_GPC_MFP0_PC1MFP_UTCPD0_CC2      (0x11UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for UTCPD0_CC2        */
#define SYS_GPC_MFP0_PC1MFP_LPI2C0_SCL      (0x16UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for LPI2C0_SCL        */
#define SYS_GPC_MFP0_PC1MFP_LPIO5           (0x17UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1 setting for LPIO5             */

/* PC.2 MFP */
#define SYS_GPC_MFP0_PC2MFP_GPIO            (0x0UL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for GPIO              */
#define SYS_GPC_MFP0_PC2MFP_EBI_AD2         (0x2UL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for EBI_AD2           */
#define SYS_GPC_MFP0_PC2MFP_QSPI0_CLK       (0x4UL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for QSPI0_CLK         */
#define SYS_GPC_MFP0_PC2MFP_SPI3_MOSI       (0x6UL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for SPI3_MOSI         */
#define SYS_GPC_MFP0_PC2MFP_SPI1_MOSI       (0x7UL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for SPI1_MOSI         */
#define SYS_GPC_MFP0_PC2MFP_UART2_nCTS      (0x8UL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for UART2_nCTS        */
#define SYS_GPC_MFP0_PC2MFP_I2C0_SMBSUS     (0x9UL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for I2C0_SMBSUS       */
#define SYS_GPC_MFP0_PC2MFP_EQEI0_INDEX     (0xAUL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for EQEI0_INDEX       */
#define SYS_GPC_MFP0_PC2MFP_UART3_RXD       (0xBUL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for UART3_RXD         */
#define SYS_GPC_MFP0_PC2MFP_EPWM1_CH3       (0xCUL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for EPWM1_CH3         */
#define SYS_GPC_MFP0_PC2MFP_ECAP0_IC0       (0xDUL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for ECAP0_IC0         */
#define SYS_GPC_MFP0_PC2MFP_I2C3_SDA        (0xFUL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for I2C3_SDA          */
#define SYS_GPC_MFP0_PC2MFP_TK_TK13         (0x10UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for TK_TK13           */
#define SYS_GPC_MFP0_PC2MFP_UTCPD0_CCDB1    (0x11UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2 setting for UTCPD0_CCDB1      */

/* PC.3 MFP */
#define SYS_GPC_MFP0_PC3MFP_GPIO            (0x0UL<<SYS_GPC_MFP0_PC3MFP_Pos)    /*!< GPC_MFP0 PC3 setting for GPIO              */
#define SYS_GPC_MFP0_PC3MFP_EBI_AD3         (0x2UL<<SYS_GPC_MFP0_PC3MFP_Pos)    /*!< GPC_MFP0 PC3 setting for EBI_AD3           */
#define SYS_GPC_MFP0_PC3MFP_QSPI0_SS        (0x4UL<<SYS_GPC_MFP0_PC3MFP_Pos)    /*!< GPC_MFP0 PC3 setting for QSPI0_SS          */
#define SYS_GPC_MFP0_PC3MFP_SPI3_MISO       (0x6UL<<SYS_GPC_MFP0_PC3MFP_Pos)    /*!< GPC_MFP0 PC3 setting for SPI3_MISO         */
#define SYS_GPC_MFP0_PC3MFP_SPI1_MISO       (0x7UL<<SYS_GPC_MFP0_PC3MFP_Pos)    /*!< GPC_MFP0 PC3 setting for SPI1_MISO         */
#define SYS_GPC_MFP0_PC3MFP_UART2_nRTS      (0x8UL<<SYS_GPC_MFP0_PC3MFP_Pos)    /*!< GPC_MFP0 PC3 setting for UART2_nRTS        */
#define SYS_GPC_MFP0_PC3MFP_I2C0_SMBAL      (0x9UL<<SYS_GPC_MFP0_PC3MFP_Pos)    /*!< GPC_MFP0 PC3 setting for I2C0_SMBAL        */
#define SYS_GPC_MFP0_PC3MFP_UART3_TXD       (0xBUL<<SYS_GPC_MFP0_PC3MFP_Pos)    /*!< GPC_MFP0 PC3 setting for UART3_TXD         */
#define SYS_GPC_MFP0_PC3MFP_EPWM1_CH2       (0xCUL<<SYS_GPC_MFP0_PC3MFP_Pos)    /*!< GPC_MFP0 PC3 setting for EPWM1_CH2         */
#define SYS_GPC_MFP0_PC3MFP_I2C3_SCL        (0xFUL<<SYS_GPC_MFP0_PC3MFP_Pos)    /*!< GPC_MFP0 PC3 setting for I2C3_SCL          */
#define SYS_GPC_MFP0_PC3MFP_TK_TK12         (0x10UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for TK_TK12           */
#define SYS_GPC_MFP0_PC3MFP_UTCPD0_CCDB2    (0x11UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3 setting for UTCPD0_CCDB2      */

/* PC.4 MFP */
#define SYS_GPC_MFP1_PC4MFP_GPIO            (0x0UL<<SYS_GPC_MFP1_PC4MFP_Pos)    /*!< GPC_MFP1 PC4 setting for GPIO              */
#define SYS_GPC_MFP1_PC4MFP_EBI_AD4         (0x2UL<<SYS_GPC_MFP1_PC4MFP_Pos)    /*!< GPC_MFP1 PC4 setting for EBI_AD4           */
#define SYS_GPC_MFP1_PC4MFP_QSPI0_MOSI1     (0x4UL<<SYS_GPC_MFP1_PC4MFP_Pos)    /*!< GPC_MFP1 PC4 setting for QSPI0_MOSI1       */
#define SYS_GPC_MFP1_PC4MFP_SPI3_CLK        (0x6UL<<SYS_GPC_MFP1_PC4MFP_Pos)    /*!< GPC_MFP1 PC4 setting for SPI3_CLK          */
#define SYS_GPC_MFP1_PC4MFP_SPI1_I2SMCLK    (0x7UL<<SYS_GPC_MFP1_PC4MFP_Pos)    /*!< GPC_MFP1 PC4 setting for SPI1_I2SMCLK      */
#define SYS_GPC_MFP1_PC4MFP_UART2_RXD       (0x8UL<<SYS_GPC_MFP1_PC4MFP_Pos)    /*!< GPC_MFP1 PC4 setting for UART2_RXD         */
#define SYS_GPC_MFP1_PC4MFP_I2C1_SDA        (0x9UL<<SYS_GPC_MFP1_PC4MFP_Pos)    /*!< GPC_MFP1 PC4 setting for I2C1_SDA          */
#define SYS_GPC_MFP1_PC4MFP_CANFD0_RXD      (0xAUL<<SYS_GPC_MFP1_PC4MFP_Pos)    /*!< GPC_MFP1 PC4 setting for CANFD0_RXD        */
#define SYS_GPC_MFP1_PC4MFP_UART4_RXD       (0xBUL<<SYS_GPC_MFP1_PC4MFP_Pos)    /*!< GPC_MFP1 PC4 setting for UART4_RXD         */
#define SYS_GPC_MFP1_PC4MFP_EPWM1_CH1       (0xCUL<<SYS_GPC_MFP1_PC4MFP_Pos)    /*!< GPC_MFP1 PC4 setting for EPWM1_CH1         */
#define SYS_GPC_MFP1_PC4MFP_I2C3_SMBSUS     (0xFUL<<SYS_GPC_MFP1_PC4MFP_Pos)    /*!< GPC_MFP1 PC4 setting for I2C3_SMBSUS       */
#define SYS_GPC_MFP1_PC4MFP_TK_TK11         (0x10UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for TK_TK11           */
#define SYS_GPC_MFP1_PC4MFP_UTCPD0_FRSTX1   (0x11UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for UTCPD0_FRSTX1     */
#define SYS_GPC_MFP1_PC4MFP_UTCPD0_DISCHG   (0x12UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4 setting for UTCPD0_DISCHG     */

/* PC.5 MFP */
#define SYS_GPC_MFP1_PC5MFP_GPIO            (0x0UL<<SYS_GPC_MFP1_PC5MFP_Pos)    /*!< GPC_MFP1 PC5 setting for GPIO              */
#define SYS_GPC_MFP1_PC5MFP_EBI_AD5         (0x2UL<<SYS_GPC_MFP1_PC5MFP_Pos)    /*!< GPC_MFP1 PC5 setting for EBI_AD5           */
#define SYS_GPC_MFP1_PC5MFP_QSPI0_MISO1     (0x4UL<<SYS_GPC_MFP1_PC5MFP_Pos)    /*!< GPC_MFP1 PC5 setting for QSPI0_MISO1       */
#define SYS_GPC_MFP1_PC5MFP_SPI3_SS         (0x6UL<<SYS_GPC_MFP1_PC5MFP_Pos)    /*!< GPC_MFP1 PC5 setting for SPI3_SS           */
#define SYS_GPC_MFP1_PC5MFP_UART2_TXD       (0x8UL<<SYS_GPC_MFP1_PC5MFP_Pos)    /*!< GPC_MFP1 PC5 setting for UART2_TXD         */
#define SYS_GPC_MFP1_PC5MFP_I2C1_SCL        (0x9UL<<SYS_GPC_MFP1_PC5MFP_Pos)    /*!< GPC_MFP1 PC5 setting for I2C1_SCL          */
#define SYS_GPC_MFP1_PC5MFP_CANFD0_TXD      (0xAUL<<SYS_GPC_MFP1_PC5MFP_Pos)    /*!< GPC_MFP1 PC5 setting for CANFD0_TXD        */
#define SYS_GPC_MFP1_PC5MFP_UART4_TXD       (0xBUL<<SYS_GPC_MFP1_PC5MFP_Pos)    /*!< GPC_MFP1 PC5 setting for UART4_TXD         */
#define SYS_GPC_MFP1_PC5MFP_EPWM1_CH0       (0xCUL<<SYS_GPC_MFP1_PC5MFP_Pos)    /*!< GPC_MFP1 PC5 setting for EPWM1_CH0         */
#define SYS_GPC_MFP1_PC5MFP_I2C3_SMBAL      (0xFUL<<SYS_GPC_MFP1_PC5MFP_Pos)    /*!< GPC_MFP1 PC5 setting for I2C3_SMBAL        */
#define SYS_GPC_MFP1_PC5MFP_TK_TK10         (0x10UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for TK_TK10           */
#define SYS_GPC_MFP1_PC5MFP_UTCPD0_FRSTX2   (0x11UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for UTCPD0_FRSTX2     */
#define SYS_GPC_MFP1_PC5MFP_UTCPD0_DISCHG   (0x12UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5 setting for UTCPD0_DISCHG     */

/* PC.6 MFP */
#define SYS_GPC_MFP1_PC6MFP_GPIO            (0x0UL<<SYS_GPC_MFP1_PC6MFP_Pos)    /*!< GPC_MFP1 PC6 setting for GPIO              */
#define SYS_GPC_MFP1_PC6MFP_EBI_AD8         (0x2UL<<SYS_GPC_MFP1_PC6MFP_Pos)    /*!< GPC_MFP1 PC6 setting for EBI_AD8           */
#define SYS_GPC_MFP1_PC6MFP_SPI1_MOSI       (0x4UL<<SYS_GPC_MFP1_PC6MFP_Pos)    /*!< GPC_MFP1 PC6 setting for SPI1_MOSI         */
#define SYS_GPC_MFP1_PC6MFP_UART4_RXD       (0x5UL<<SYS_GPC_MFP1_PC6MFP_Pos)    /*!< GPC_MFP1 PC6 setting for UART4_RXD         */
#define SYS_GPC_MFP1_PC6MFP_UART0_nRTS      (0x7UL<<SYS_GPC_MFP1_PC6MFP_Pos)    /*!< GPC_MFP1 PC6 setting for UART0_nRTS        */
#define SYS_GPC_MFP1_PC6MFP_UART6_RXD       (0x9UL<<SYS_GPC_MFP1_PC6MFP_Pos)    /*!< GPC_MFP1 PC6 setting for UART6_RXD         */
#define SYS_GPC_MFP1_PC6MFP_EPWM1_CH3       (0xBUL<<SYS_GPC_MFP1_PC6MFP_Pos)    /*!< GPC_MFP1 PC6 setting for EPWM1_CH3         */
#define SYS_GPC_MFP1_PC6MFP_PWM1_CH1        (0xCUL<<SYS_GPC_MFP1_PC6MFP_Pos)    /*!< GPC_MFP1 PC6 setting for PWM1_CH1          */
#define SYS_GPC_MFP1_PC6MFP_TM1             (0xEUL<<SYS_GPC_MFP1_PC6MFP_Pos)    /*!< GPC_MFP1 PC6 setting for TM1               */
#define SYS_GPC_MFP1_PC6MFP_INT2            (0xFUL<<SYS_GPC_MFP1_PC6MFP_Pos)    /*!< GPC_MFP1 PC6 setting for INT2              */
#define SYS_GPC_MFP1_PC6MFP_LPUART0_nRTS    (0x15UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for LPUART0_nRTS      */
#define SYS_GPC_MFP1_PC6MFP_LPTM1           (0x17UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6 setting for LPTM1             */

/* PC.7 MFP */
#define SYS_GPC_MFP1_PC7MFP_GPIO            (0x0UL<<SYS_GPC_MFP1_PC7MFP_Pos)    /*!< GPC_MFP1 PC7 setting for GPIO              */
#define SYS_GPC_MFP1_PC7MFP_EBI_AD9         (0x2UL<<SYS_GPC_MFP1_PC7MFP_Pos)    /*!< GPC_MFP1 PC7 setting for EBI_AD9           */
#define SYS_GPC_MFP1_PC7MFP_SPI1_MISO       (0x4UL<<SYS_GPC_MFP1_PC7MFP_Pos)    /*!< GPC_MFP1 PC7 setting for SPI1_MISO         */
#define SYS_GPC_MFP1_PC7MFP_UART4_TXD       (0x5UL<<SYS_GPC_MFP1_PC7MFP_Pos)    /*!< GPC_MFP1 PC7 setting for UART4_TXD         */
#define SYS_GPC_MFP1_PC7MFP_UART0_nCTS      (0x7UL<<SYS_GPC_MFP1_PC7MFP_Pos)    /*!< GPC_MFP1 PC7 setting for UART0_nCTS        */
#define SYS_GPC_MFP1_PC7MFP_UART6_TXD       (0x9UL<<SYS_GPC_MFP1_PC7MFP_Pos)    /*!< GPC_MFP1 PC7 setting for UART6_TXD         */
#define SYS_GPC_MFP1_PC7MFP_EPWM1_CH2       (0xBUL<<SYS_GPC_MFP1_PC7MFP_Pos)    /*!< GPC_MFP1 PC7 setting for EPWM1_CH2         */
#define SYS_GPC_MFP1_PC7MFP_PWM1_CH0        (0xCUL<<SYS_GPC_MFP1_PC7MFP_Pos)    /*!< GPC_MFP1 PC7 setting for PWM1_CH0          */
#define SYS_GPC_MFP1_PC7MFP_TM0             (0xEUL<<SYS_GPC_MFP1_PC7MFP_Pos)    /*!< GPC_MFP1 PC7 setting for TM0               */
#define SYS_GPC_MFP1_PC7MFP_INT3            (0xFUL<<SYS_GPC_MFP1_PC7MFP_Pos)    /*!< GPC_MFP1 PC7 setting for INT3              */
#define SYS_GPC_MFP1_PC7MFP_LPUART0_nCTS    (0x15UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for LPUART0_nCTS      */
#define SYS_GPC_MFP1_PC7MFP_LPTM0           (0x17UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7 setting for LPTM0             */

/* PC.8 MFP */
#define SYS_GPC_MFP2_PC8MFP_GPIO            (0x0UL<<SYS_GPC_MFP2_PC8MFP_Pos)    /*!< GPC_MFP2 PC8 setting for GPIO              */
#define SYS_GPC_MFP2_PC8MFP_EBI_ADR16       (0x2UL<<SYS_GPC_MFP2_PC8MFP_Pos)    /*!< GPC_MFP2 PC8 setting for EBI_ADR16         */
#define SYS_GPC_MFP2_PC8MFP_I2C0_SDA        (0x4UL<<SYS_GPC_MFP2_PC8MFP_Pos)    /*!< GPC_MFP2 PC8 setting for I2C0_SDA          */
#define SYS_GPC_MFP2_PC8MFP_UART4_nCTS      (0x5UL<<SYS_GPC_MFP2_PC8MFP_Pos)    /*!< GPC_MFP2 PC8 setting for UART4_nCTS        */
#define SYS_GPC_MFP2_PC8MFP_UART1_RXD       (0x8UL<<SYS_GPC_MFP2_PC8MFP_Pos)    /*!< GPC_MFP2 PC8 setting for UART1_RXD         */
#define SYS_GPC_MFP2_PC8MFP_EPWM1_CH1       (0xBUL<<SYS_GPC_MFP2_PC8MFP_Pos)    /*!< GPC_MFP2 PC8 setting for EPWM1_CH1         */
#define SYS_GPC_MFP2_PC8MFP_PWM1_CH4        (0xCUL<<SYS_GPC_MFP2_PC8MFP_Pos)    /*!< GPC_MFP2 PC8 setting for PWM1_CH4          */
#define SYS_GPC_MFP2_PC8MFP_LPI2C0_SDA      (0x16UL<<SYS_GPC_MFP2_PC8MFP_Pos)   /*!< GPC_MFP2 PC8 setting for LPI2C0_SDA        */

/* PC.9 MFP */
#define SYS_GPC_MFP2_PC9MFP_GPIO            (0x0UL<<SYS_GPC_MFP2_PC9MFP_Pos)    /*!< GPC_MFP2 PC9 setting for GPIO              */
#define SYS_GPC_MFP2_PC9MFP_EBI_ADR7        (0x2UL<<SYS_GPC_MFP2_PC9MFP_Pos)    /*!< GPC_MFP2 PC9 setting for EBI_ADR7          */
#define SYS_GPC_MFP2_PC9MFP_UART6_nCTS      (0x5UL<<SYS_GPC_MFP2_PC9MFP_Pos)    /*!< GPC_MFP2 PC9 setting for UART6_nCTS        */
#define SYS_GPC_MFP2_PC9MFP_SPI3_SS         (0x6UL<<SYS_GPC_MFP2_PC9MFP_Pos)    /*!< GPC_MFP2 PC9 setting for SPI3_SS           */
#define SYS_GPC_MFP2_PC9MFP_UART3_RXD       (0x7UL<<SYS_GPC_MFP2_PC9MFP_Pos)    /*!< GPC_MFP2 PC9 setting for UART3_RXD         */
#define SYS_GPC_MFP2_PC9MFP_CANFD1_RXD      (0x9UL<<SYS_GPC_MFP2_PC9MFP_Pos)    /*!< GPC_MFP2 PC9 setting for CANFD1_RXD        */
#define SYS_GPC_MFP2_PC9MFP_EPWM1_CH3       (0xCUL<<SYS_GPC_MFP2_PC9MFP_Pos)    /*!< GPC_MFP2 PC9 setting for EPWM1_CH3         */

/* PC.10 MFP */
#define SYS_GPC_MFP2_PC10MFP_GPIO           (0x0UL<<SYS_GPC_MFP2_PC10MFP_Pos)   /*!< GPC_MFP2 PC10 setting for GPIO             */
#define SYS_GPC_MFP2_PC10MFP_EBI_ADR6       (0x2UL<<SYS_GPC_MFP2_PC10MFP_Pos)   /*!< GPC_MFP2 PC10 setting for EBI_ADR6         */
#define SYS_GPC_MFP2_PC10MFP_UART6_nRTS     (0x5UL<<SYS_GPC_MFP2_PC10MFP_Pos)   /*!< GPC_MFP2 PC10 setting for UART6_nRTS       */
#define SYS_GPC_MFP2_PC10MFP_SPI3_CLK       (0x6UL<<SYS_GPC_MFP2_PC10MFP_Pos)   /*!< GPC_MFP2 PC10 setting for SPI3_CLK         */
#define SYS_GPC_MFP2_PC10MFP_UART3_TXD      (0x7UL<<SYS_GPC_MFP2_PC10MFP_Pos)   /*!< GPC_MFP2 PC10 setting for UART3_TXD        */
#define SYS_GPC_MFP2_PC10MFP_CANFD1_TXD     (0x9UL<<SYS_GPC_MFP2_PC10MFP_Pos)   /*!< GPC_MFP2 PC10 setting for CANFD1_TXD       */
#define SYS_GPC_MFP2_PC10MFP_ECAP1_IC0      (0xBUL<<SYS_GPC_MFP2_PC10MFP_Pos)   /*!< GPC_MFP2 PC10 setting for ECAP1_IC0        */
#define SYS_GPC_MFP2_PC10MFP_EPWM1_CH2      (0xCUL<<SYS_GPC_MFP2_PC10MFP_Pos)   /*!< GPC_MFP2 PC10 setting for EPWM1_CH2        */

/* PC.11 MFP */
#define SYS_GPC_MFP2_PC11MFP_GPIO           (0x0UL<<SYS_GPC_MFP2_PC11MFP_Pos)   /*!< GPC_MFP2 PC11 setting for GPIO             */
#define SYS_GPC_MFP2_PC11MFP_EBI_ADR5       (0x2UL<<SYS_GPC_MFP2_PC11MFP_Pos)   /*!< GPC_MFP2 PC11 setting for EBI_ADR5         */
#define SYS_GPC_MFP2_PC11MFP_UART0_RXD      (0x3UL<<SYS_GPC_MFP2_PC11MFP_Pos)   /*!< GPC_MFP2 PC11 setting for UART0_RXD        */
#define SYS_GPC_MFP2_PC11MFP_I2C0_SDA       (0x4UL<<SYS_GPC_MFP2_PC11MFP_Pos)   /*!< GPC_MFP2 PC11 setting for I2C0_SDA         */
#define SYS_GPC_MFP2_PC11MFP_UART6_RXD      (0x5UL<<SYS_GPC_MFP2_PC11MFP_Pos)   /*!< GPC_MFP2 PC11 setting for UART6_RXD        */
#define SYS_GPC_MFP2_PC11MFP_SPI3_MOSI      (0x6UL<<SYS_GPC_MFP2_PC11MFP_Pos)   /*!< GPC_MFP2 PC11 setting for SPI3_MOSI        */
#define SYS_GPC_MFP2_PC11MFP_ECAP1_IC1      (0xBUL<<SYS_GPC_MFP2_PC11MFP_Pos)   /*!< GPC_MFP2 PC11 setting for ECAP1_IC1        */
#define SYS_GPC_MFP2_PC11MFP_EPWM1_CH1      (0xCUL<<SYS_GPC_MFP2_PC11MFP_Pos)   /*!< GPC_MFP2 PC11 setting for EPWM1_CH1        */
#define SYS_GPC_MFP2_PC11MFP_ACMP1_O        (0xEUL<<SYS_GPC_MFP2_PC11MFP_Pos)   /*!< GPC_MFP2 PC11 setting for ACMP1_O          */
#define SYS_GPC_MFP2_PC11MFP_LPUART0_RXD    (0x15UL<<SYS_GPC_MFP2_PC11MFP_Pos)  /*!< GPC_MFP2 PC11 setting for LPUART0_RXD      */
#define SYS_GPC_MFP2_PC11MFP_LPI2C0_SDA     (0x16UL<<SYS_GPC_MFP2_PC11MFP_Pos)  /*!< GPC_MFP2 PC11 setting for LPI2C0_SDA       */

/* PC.12 MFP */
#define SYS_GPC_MFP3_PC12MFP_GPIO           (0x0UL<<SYS_GPC_MFP3_PC12MFP_Pos)   /*!< GPC_MFP3 PC12 setting for GPIO             */
#define SYS_GPC_MFP3_PC12MFP_EBI_ADR4       (0x2UL<<SYS_GPC_MFP3_PC12MFP_Pos)   /*!< GPC_MFP3 PC12 setting for EBI_ADR4         */
#define SYS_GPC_MFP3_PC12MFP_UART0_TXD      (0x3UL<<SYS_GPC_MFP3_PC12MFP_Pos)   /*!< GPC_MFP3 PC12 setting for UART0_TXD        */
#define SYS_GPC_MFP3_PC12MFP_I2C0_SCL       (0x4UL<<SYS_GPC_MFP3_PC12MFP_Pos)   /*!< GPC_MFP3 PC12 setting for I2C0_SCL         */
#define SYS_GPC_MFP3_PC12MFP_UART6_TXD      (0x5UL<<SYS_GPC_MFP3_PC12MFP_Pos)   /*!< GPC_MFP3 PC12 setting for UART6_TXD        */
#define SYS_GPC_MFP3_PC12MFP_SPI3_MISO      (0x6UL<<SYS_GPC_MFP3_PC12MFP_Pos)   /*!< GPC_MFP3 PC12 setting for SPI3_MISO        */
#define SYS_GPC_MFP3_PC12MFP_ECAP1_IC2      (0xBUL<<SYS_GPC_MFP3_PC12MFP_Pos)   /*!< GPC_MFP3 PC12 setting for ECAP1_IC2        */
#define SYS_GPC_MFP3_PC12MFP_EPWM1_CH0      (0xCUL<<SYS_GPC_MFP3_PC12MFP_Pos)   /*!< GPC_MFP3 PC12 setting for EPWM1_CH0        */
#define SYS_GPC_MFP3_PC12MFP_ACMP0_O        (0xEUL<<SYS_GPC_MFP3_PC12MFP_Pos)   /*!< GPC_MFP3 PC12 setting for ACMP0_O          */
#define SYS_GPC_MFP3_PC12MFP_LPUART0_TXD    (0x15UL<<SYS_GPC_MFP3_PC12MFP_Pos)  /*!< GPC_MFP3 PC12 setting for LPUART0_TXD      */
#define SYS_GPC_MFP3_PC12MFP_LPI2C0_SCL     (0x16UL<<SYS_GPC_MFP3_PC12MFP_Pos)  /*!< GPC_MFP3 PC12 setting for LPI2C0_SCL       */

/* PC.13 MFP */
#define SYS_GPC_MFP3_PC13MFP_GPIO           (0x0UL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for GPIO             */
#define SYS_GPC_MFP3_PC13MFP_EADC0_CH19     (0x1UL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for EADC0_CH19       */
#define SYS_GPC_MFP3_PC13MFP_LPADC0_CH19    (0x1UL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for LPADC0_CH19      */
#define SYS_GPC_MFP3_PC13MFP_EBI_ADR10      (0x2UL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for EBI_ADR10        */
#define SYS_GPC_MFP3_PC13MFP_SPI2_I2SMCLK   (0x4UL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for SPI2_I2SMCLK     */
#define SYS_GPC_MFP3_PC13MFP_CANFD1_TXD     (0x5UL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for CANFD1_TXD       */
#define SYS_GPC_MFP3_PC13MFP_USCI0_CTL0     (0x6UL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for USCI0_CTL0       */
#define SYS_GPC_MFP3_PC13MFP_UART2_TXD      (0x7UL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for UART2_TXD        */
#define SYS_GPC_MFP3_PC13MFP_PWM0_CH4       (0x9UL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for PWM0_CH4         */
#define SYS_GPC_MFP3_PC13MFP_CLKO           (0xDUL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for CLKO             */
#define SYS_GPC_MFP3_PC13MFP_EADC0_ST       (0xEUL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for EADC0_ST         */
#define SYS_GPC_MFP3_PC13MFP_LPADC0_ST      (0xEUL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for LPADC0_ST        */
#define SYS_GPC_MFP3_PC13MFP_TK_SE          (0x10UL<<SYS_GPC_MFP3_PC13MFP_Pos)  /*!< GPC_MFP3 PC13 setting for TK_SE            */

/* PC.14 MFP */
#define SYS_GPC_MFP3_PC14MFP_GPIO           (0x0UL<<SYS_GPC_MFP3_PC14MFP_Pos)   /*!< GPC_MFP3 PC14 setting for GPIO             */
#define SYS_GPC_MFP3_PC14MFP_EBI_AD11       (0x2UL<<SYS_GPC_MFP3_PC14MFP_Pos)   /*!< GPC_MFP3 PC14 setting for EBI_AD11         */
#define SYS_GPC_MFP3_PC14MFP_SPI0_I2SMCLK   (0x4UL<<SYS_GPC_MFP3_PC14MFP_Pos)   /*!< GPC_MFP3 PC14 setting for SPI0_I2SMCLK     */
#define SYS_GPC_MFP3_PC14MFP_USCI0_CTL0     (0x5UL<<SYS_GPC_MFP3_PC14MFP_Pos)   /*!< GPC_MFP3 PC14 setting for USCI0_CTL0       */
#define SYS_GPC_MFP3_PC14MFP_QSPI0_CLK      (0x6UL<<SYS_GPC_MFP3_PC14MFP_Pos)   /*!< GPC_MFP3 PC14 setting for QSPI0_CLK        */
#define SYS_GPC_MFP3_PC14MFP_EBI_nCS2       (0x8UL<<SYS_GPC_MFP3_PC14MFP_Pos)   /*!< GPC_MFP3 PC14 setting for EBI_nCS2         */
#define SYS_GPC_MFP3_PC14MFP_EPWM0_SYNC_IN  (0xBUL<<SYS_GPC_MFP3_PC14MFP_Pos)   /*!< GPC_MFP3 PC14 setting for EPWM0_SYNC_IN    */
#define SYS_GPC_MFP3_PC14MFP_TM1            (0xDUL<<SYS_GPC_MFP3_PC14MFP_Pos)   /*!< GPC_MFP3 PC14 setting for TM1              */
#define SYS_GPC_MFP3_PC14MFP_USB_VBUS_ST    (0xEUL<<SYS_GPC_MFP3_PC14MFP_Pos)   /*!< GPC_MFP3 PC14 setting for USB_VBUS_ST      */
#define SYS_GPC_MFP3_PC14MFP_ACMP2_O        (0xFUL<<SYS_GPC_MFP3_PC14MFP_Pos)   /*!< GPC_MFP3 PC14 setting for ACMP2_O          */
#define SYS_GPC_MFP3_PC14MFP_LPTM1          (0x17UL<<SYS_GPC_MFP3_PC14MFP_Pos)  /*!< GPC_MFP3 PC14 setting for LPTM1            */

/* PD.0 MFP */
#define SYS_GPD_MFP0_PD0MFP_GPIO            (0x0UL<<SYS_GPD_MFP0_PD0MFP_Pos)    /*!< GPD_MFP0 PD0 setting for GPIO              */
#define SYS_GPD_MFP0_PD0MFP_EBI_AD13        (0x2UL<<SYS_GPD_MFP0_PD0MFP_Pos)    /*!< GPD_MFP0 PD0 setting for EBI_AD13          */
#define SYS_GPD_MFP0_PD0MFP_USCI0_CLK       (0x3UL<<SYS_GPD_MFP0_PD0MFP_Pos)    /*!< GPD_MFP0 PD0 setting for USCI0_CLK         */
#define SYS_GPD_MFP0_PD0MFP_SPI0_MOSI       (0x4UL<<SYS_GPD_MFP0_PD0MFP_Pos)    /*!< GPD_MFP0 PD0 setting for SPI0_MOSI         */
#define SYS_GPD_MFP0_PD0MFP_UART3_RXD       (0x5UL<<SYS_GPD_MFP0_PD0MFP_Pos)    /*!< GPD_MFP0 PD0 setting for UART3_RXD         */
#define SYS_GPD_MFP0_PD0MFP_TM2             (0xEUL<<SYS_GPD_MFP0_PD0MFP_Pos)    /*!< GPD_MFP0 PD0 setting for TM2               */
#define SYS_GPD_MFP0_PD0MFP_TK_TK17         (0x10UL<<SYS_GPD_MFP0_PD0MFP_Pos)   /*!< GPD_MFP0 PD0 setting for TK_TK17           */
#define SYS_GPD_MFP0_PD0MFP_LPSPI0_MOSI     (0x14UL<<SYS_GPD_MFP0_PD0MFP_Pos)   /*!< GPD_MFP0 PD0 setting for LPSPI0_MOSI       */
#define SYS_GPD_MFP0_PD0MFP_LPIO6           (0x17UL<<SYS_GPD_MFP0_PD0MFP_Pos)   /*!< GPD_MFP0 PD0 setting for LPIO6             */

/* PD.1 MFP */
#define SYS_GPD_MFP0_PD1MFP_GPIO            (0x0UL<<SYS_GPD_MFP0_PD1MFP_Pos)    /*!< GPD_MFP0 PD1 setting for GPIO              */
#define SYS_GPD_MFP0_PD1MFP_EBI_AD12        (0x2UL<<SYS_GPD_MFP0_PD1MFP_Pos)    /*!< GPD_MFP0 PD1 setting for EBI_AD12          */
#define SYS_GPD_MFP0_PD1MFP_USCI0_DAT0      (0x3UL<<SYS_GPD_MFP0_PD1MFP_Pos)    /*!< GPD_MFP0 PD1 setting for USCI0_DAT0        */
#define SYS_GPD_MFP0_PD1MFP_SPI0_MISO       (0x4UL<<SYS_GPD_MFP0_PD1MFP_Pos)    /*!< GPD_MFP0 PD1 setting for SPI0_MISO         */
#define SYS_GPD_MFP0_PD1MFP_UART3_TXD       (0x5UL<<SYS_GPD_MFP0_PD1MFP_Pos)    /*!< GPD_MFP0 PD1 setting for UART3_TXD         */
#define SYS_GPD_MFP0_PD1MFP_TK_TK16         (0x10UL<<SYS_GPD_MFP0_PD1MFP_Pos)   /*!< GPD_MFP0 PD1 setting for TK_TK16           */
#define SYS_GPD_MFP0_PD1MFP_LPSPI0_MISO     (0x14UL<<SYS_GPD_MFP0_PD1MFP_Pos)   /*!< GPD_MFP0 PD1 setting for LPSPI0_MISO       */
#define SYS_GPD_MFP0_PD1MFP_LPIO7           (0x17UL<<SYS_GPD_MFP0_PD1MFP_Pos)   /*!< GPD_MFP0 PD1 setting for LPIO7             */

/* PD.2 MFP */
#define SYS_GPD_MFP0_PD2MFP_GPIO            (0x0UL<<SYS_GPD_MFP0_PD2MFP_Pos)    /*!< GPD_MFP0 PD2 setting for GPIO              */
#define SYS_GPD_MFP0_PD2MFP_EBI_AD11        (0x2UL<<SYS_GPD_MFP0_PD2MFP_Pos)    /*!< GPD_MFP0 PD2 setting for EBI_AD11          */
#define SYS_GPD_MFP0_PD2MFP_USCI0_DAT1      (0x3UL<<SYS_GPD_MFP0_PD2MFP_Pos)    /*!< GPD_MFP0 PD2 setting for USCI0_DAT1        */
#define SYS_GPD_MFP0_PD2MFP_SPI0_CLK        (0x4UL<<SYS_GPD_MFP0_PD2MFP_Pos)    /*!< GPD_MFP0 PD2 setting for SPI0_CLK          */
#define SYS_GPD_MFP0_PD2MFP_UART3_nCTS      (0x5UL<<SYS_GPD_MFP0_PD2MFP_Pos)    /*!< GPD_MFP0 PD2 setting for UART3_nCTS        */
#define SYS_GPD_MFP0_PD2MFP_UART0_RXD       (0x9UL<<SYS_GPD_MFP0_PD2MFP_Pos)    /*!< GPD_MFP0 PD2 setting for UART0_RXD         */
#define SYS_GPD_MFP0_PD2MFP_TK_TK15         (0x10UL<<SYS_GPD_MFP0_PD2MFP_Pos)   /*!< GPD_MFP0 PD2 setting for TK_TK15           */
#define SYS_GPD_MFP0_PD2MFP_LPSPI0_CLK      (0x14UL<<SYS_GPD_MFP0_PD2MFP_Pos)   /*!< GPD_MFP0 PD2 setting for LPSPI0_CLK        */
#define SYS_GPD_MFP0_PD2MFP_LPUART0_RXD     (0x15UL<<SYS_GPD_MFP0_PD2MFP_Pos)   /*!< GPD_MFP0 PD2 setting for LPUART0_RXD       */

/* PD.3 MFP */
#define SYS_GPD_MFP0_PD3MFP_GPIO            (0x0UL<<SYS_GPD_MFP0_PD3MFP_Pos)    /*!< GPD_MFP0 PD3 setting for GPIO              */
#define SYS_GPD_MFP0_PD3MFP_EBI_AD10        (0x2UL<<SYS_GPD_MFP0_PD3MFP_Pos)    /*!< GPD_MFP0 PD3 setting for EBI_AD10          */
#define SYS_GPD_MFP0_PD3MFP_USCI0_CTL1      (0x3UL<<SYS_GPD_MFP0_PD3MFP_Pos)    /*!< GPD_MFP0 PD3 setting for USCI0_CTL1        */
#define SYS_GPD_MFP0_PD3MFP_SPI0_SS         (0x4UL<<SYS_GPD_MFP0_PD3MFP_Pos)    /*!< GPD_MFP0 PD3 setting for SPI0_SS           */
#define SYS_GPD_MFP0_PD3MFP_UART3_nRTS      (0x5UL<<SYS_GPD_MFP0_PD3MFP_Pos)    /*!< GPD_MFP0 PD3 setting for UART3_nRTS        */
#define SYS_GPD_MFP0_PD3MFP_USCI1_CTL0      (0x6UL<<SYS_GPD_MFP0_PD3MFP_Pos)    /*!< GPD_MFP0 PD3 setting for USCI1_CTL0        */
#define SYS_GPD_MFP0_PD3MFP_UART0_TXD       (0x9UL<<SYS_GPD_MFP0_PD3MFP_Pos)    /*!< GPD_MFP0 PD3 setting for UART0_TXD         */
#define SYS_GPD_MFP0_PD3MFP_TK_TK14         (0x10UL<<SYS_GPD_MFP0_PD3MFP_Pos)   /*!< GPD_MFP0 PD3 setting for TK_TK14           */
#define SYS_GPD_MFP0_PD3MFP_LPSPI0_SS       (0x14UL<<SYS_GPD_MFP0_PD3MFP_Pos)   /*!< GPD_MFP0 PD3 setting for LPSPI0_SS         */
#define SYS_GPD_MFP0_PD3MFP_LPUART0_TXD     (0x15UL<<SYS_GPD_MFP0_PD3MFP_Pos)   /*!< GPD_MFP0 PD3 setting for LPUART0_TXD       */

/* PD.4 MFP */
#define SYS_GPD_MFP1_PD4MFP_GPIO            (0x0UL<<SYS_GPD_MFP1_PD4MFP_Pos)    /*!< GPD_MFP1 PD4 setting for GPIO              */
#define SYS_GPD_MFP1_PD4MFP_USCI0_CTL0      (0x3UL<<SYS_GPD_MFP1_PD4MFP_Pos)    /*!< GPD_MFP1 PD4 setting for USCI0_CTL0        */
#define SYS_GPD_MFP1_PD4MFP_I2C1_SDA        (0x4UL<<SYS_GPD_MFP1_PD4MFP_Pos)    /*!< GPD_MFP1 PD4 setting for I2C1_SDA          */
#define SYS_GPD_MFP1_PD4MFP_USCI1_CTL1      (0x6UL<<SYS_GPD_MFP1_PD4MFP_Pos)    /*!< GPD_MFP1 PD4 setting for USCI1_CTL1        */
#define SYS_GPD_MFP1_PD4MFP_TK_TK17         (0x10UL<<SYS_GPD_MFP1_PD4MFP_Pos)   /*!< GPD_MFP1 PD4 setting for TK_TK17           */

/* PD.5 MFP */
#define SYS_GPD_MFP1_PD5MFP_GPIO            (0x0UL<<SYS_GPD_MFP1_PD5MFP_Pos)    /*!< GPD_MFP1 PD5 setting for GPIO              */
#define SYS_GPD_MFP1_PD5MFP_I2C1_SCL        (0x4UL<<SYS_GPD_MFP1_PD5MFP_Pos)    /*!< GPD_MFP1 PD5 setting for I2C1_SCL          */
#define SYS_GPD_MFP1_PD5MFP_USCI1_DAT0      (0x6UL<<SYS_GPD_MFP1_PD5MFP_Pos)    /*!< GPD_MFP1 PD5 setting for USCI1_DAT0        */
#define SYS_GPD_MFP1_PD5MFP_TK_TK16         (0x10UL<<SYS_GPD_MFP1_PD5MFP_Pos)   /*!< GPD_MFP1 PD5 setting for TK_TK16           */

/* PD.6 MFP */
#define SYS_GPD_MFP1_PD6MFP_GPIO            (0x0UL<<SYS_GPD_MFP1_PD6MFP_Pos)    /*!< GPD_MFP1 PD6 setting for GPIO              */
#define SYS_GPD_MFP1_PD6MFP_UART1_RXD       (0x3UL<<SYS_GPD_MFP1_PD6MFP_Pos)    /*!< GPD_MFP1 PD6 setting for UART1_RXD         */
#define SYS_GPD_MFP1_PD6MFP_I2C0_SDA        (0x4UL<<SYS_GPD_MFP1_PD6MFP_Pos)    /*!< GPD_MFP1 PD6 setting for I2C0_SDA          */
#define SYS_GPD_MFP1_PD6MFP_USCI1_DAT1      (0x6UL<<SYS_GPD_MFP1_PD6MFP_Pos)    /*!< GPD_MFP1 PD6 setting for USCI1_DAT1        */
#define SYS_GPD_MFP1_PD6MFP_TK_TK15         (0x10UL<<SYS_GPD_MFP1_PD6MFP_Pos)   /*!< GPD_MFP1 PD6 setting for TK_TK15           */
#define SYS_GPD_MFP1_PD6MFP_LPI2C0_SDA      (0x16UL<<SYS_GPD_MFP1_PD6MFP_Pos)   /*!< GPD_MFP1 PD6 setting for LPI2C0_SDA        */

/* PD.7 MFP */
#define SYS_GPD_MFP1_PD7MFP_GPIO            (0x0UL<<SYS_GPD_MFP1_PD7MFP_Pos)    /*!< GPD_MFP1 PD7 setting for GPIO              */
#define SYS_GPD_MFP1_PD7MFP_UART1_TXD       (0x3UL<<SYS_GPD_MFP1_PD7MFP_Pos)    /*!< GPD_MFP1 PD7 setting for UART1_TXD         */
#define SYS_GPD_MFP1_PD7MFP_I2C0_SCL        (0x4UL<<SYS_GPD_MFP1_PD7MFP_Pos)    /*!< GPD_MFP1 PD7 setting for I2C0_SCL          */
#define SYS_GPD_MFP1_PD7MFP_USCI1_CLK       (0x6UL<<SYS_GPD_MFP1_PD7MFP_Pos)    /*!< GPD_MFP1 PD7 setting for USCI1_CLK         */
#define SYS_GPD_MFP1_PD7MFP_TK_TK14         (0x10UL<<SYS_GPD_MFP1_PD7MFP_Pos)   /*!< GPD_MFP1 PD7 setting for TK_TK14           */
#define SYS_GPD_MFP1_PD7MFP_LPI2C0_SCL      (0x16UL<<SYS_GPD_MFP1_PD7MFP_Pos)   /*!< GPD_MFP1 PD7 setting for LPI2C0_SCL        */

/* PD.8 MFP */
#define SYS_GPD_MFP2_PD8MFP_GPIO            (0x0UL<<SYS_GPD_MFP2_PD8MFP_Pos)    /*!< GPD_MFP2 PD8 setting for GPIO              */
#define SYS_GPD_MFP2_PD8MFP_EBI_AD6         (0x2UL<<SYS_GPD_MFP2_PD8MFP_Pos)    /*!< GPD_MFP2 PD8 setting for EBI_AD6           */
#define SYS_GPD_MFP2_PD8MFP_I2C2_SDA        (0x3UL<<SYS_GPD_MFP2_PD8MFP_Pos)    /*!< GPD_MFP2 PD8 setting for I2C2_SDA          */
#define SYS_GPD_MFP2_PD8MFP_UART2_nRTS      (0x4UL<<SYS_GPD_MFP2_PD8MFP_Pos)    /*!< GPD_MFP2 PD8 setting for UART2_nRTS        */
#define SYS_GPD_MFP2_PD8MFP_UART7_RXD       (0x5UL<<SYS_GPD_MFP2_PD8MFP_Pos)    /*!< GPD_MFP2 PD8 setting for UART7_RXD         */

/* PD.9 MFP */
#define SYS_GPD_MFP2_PD9MFP_GPIO            (0x0UL<<SYS_GPD_MFP2_PD9MFP_Pos)    /*!< GPD_MFP2 PD9 setting for GPIO              */
#define SYS_GPD_MFP2_PD9MFP_EBI_AD7         (0x2UL<<SYS_GPD_MFP2_PD9MFP_Pos)    /*!< GPD_MFP2 PD9 setting for EBI_AD7           */
#define SYS_GPD_MFP2_PD9MFP_I2C2_SCL        (0x3UL<<SYS_GPD_MFP2_PD9MFP_Pos)    /*!< GPD_MFP2 PD9 setting for I2C2_SCL          */
#define SYS_GPD_MFP2_PD9MFP_UART2_nCTS      (0x4UL<<SYS_GPD_MFP2_PD9MFP_Pos)    /*!< GPD_MFP2 PD9 setting for UART2_nCTS        */
#define SYS_GPD_MFP2_PD9MFP_UART7_TXD       (0x5UL<<SYS_GPD_MFP2_PD9MFP_Pos)    /*!< GPD_MFP2 PD9 setting for UART7_TXD         */

/* PD.10 MFP */
#define SYS_GPD_MFP2_PD10MFP_GPIO           (0x0UL<<SYS_GPD_MFP2_PD10MFP_Pos)   /*!< GPD_MFP2 PD10 setting for GPIO             */
#define SYS_GPD_MFP2_PD10MFP_EADC0_CH16     (0x1UL<<SYS_GPD_MFP2_PD10MFP_Pos)   /*!< GPD_MFP2 PD10 setting for EADC0_CH16       */
#define SYS_GPD_MFP2_PD10MFP_LPADC0_CH16    (0x1UL<<SYS_GPD_MFP2_PD10MFP_Pos)   /*!< GPD_MFP2 PD10 setting for LPADC0_CH16      */
#define SYS_GPD_MFP2_PD10MFP_EBI_nCS2       (0x2UL<<SYS_GPD_MFP2_PD10MFP_Pos)   /*!< GPD_MFP2 PD10 setting for EBI_nCS2         */
#define SYS_GPD_MFP2_PD10MFP_UART1_RXD      (0x3UL<<SYS_GPD_MFP2_PD10MFP_Pos)   /*!< GPD_MFP2 PD10 setting for UART1_RXD        */
#define SYS_GPD_MFP2_PD10MFP_CANFD0_RXD     (0x4UL<<SYS_GPD_MFP2_PD10MFP_Pos)   /*!< GPD_MFP2 PD10 setting for CANFD0_RXD       */
#define SYS_GPD_MFP2_PD10MFP_EQEI0_B        (0xAUL<<SYS_GPD_MFP2_PD10MFP_Pos)   /*!< GPD_MFP2 PD10 setting for EQEI0_B          */
#define SYS_GPD_MFP2_PD10MFP_INT7           (0xFUL<<SYS_GPD_MFP2_PD10MFP_Pos)   /*!< GPD_MFP2 PD10 setting for INT7             */

/* PD.11 MFP */
#define SYS_GPD_MFP2_PD11MFP_GPIO           (0x0UL<<SYS_GPD_MFP2_PD11MFP_Pos)   /*!< GPD_MFP2 PD11 setting for GPIO             */
#define SYS_GPD_MFP2_PD11MFP_EADC0_CH17     (0x1UL<<SYS_GPD_MFP2_PD11MFP_Pos)   /*!< GPD_MFP2 PD11 setting for EADC0_CH17       */
#define SYS_GPD_MFP2_PD11MFP_LPADC0_CH17    (0x1UL<<SYS_GPD_MFP2_PD11MFP_Pos)   /*!< GPD_MFP2 PD11 setting for LPADC0_CH17      */
#define SYS_GPD_MFP2_PD11MFP_EBI_nCS1       (0x2UL<<SYS_GPD_MFP2_PD11MFP_Pos)   /*!< GPD_MFP2 PD11 setting for EBI_nCS1         */
#define SYS_GPD_MFP2_PD11MFP_UART1_TXD      (0x3UL<<SYS_GPD_MFP2_PD11MFP_Pos)   /*!< GPD_MFP2 PD11 setting for UART1_TXD        */
#define SYS_GPD_MFP2_PD11MFP_CANFD0_TXD     (0x4UL<<SYS_GPD_MFP2_PD11MFP_Pos)   /*!< GPD_MFP2 PD11 setting for CANFD0_TXD       */
#define SYS_GPD_MFP2_PD11MFP_EQEI0_A        (0xAUL<<SYS_GPD_MFP2_PD11MFP_Pos)   /*!< GPD_MFP2 PD11 setting for EQEI0_A          */
#define SYS_GPD_MFP2_PD11MFP_INT6           (0xFUL<<SYS_GPD_MFP2_PD11MFP_Pos)   /*!< GPD_MFP2 PD11 setting for INT6             */

/* PD.12 MFP */
#define SYS_GPD_MFP3_PD12MFP_GPIO           (0x0UL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for GPIO             */
#define SYS_GPD_MFP3_PD12MFP_EADC0_CH18     (0x1UL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for EADC0_CH18       */
#define SYS_GPD_MFP3_PD12MFP_LPADC0_CH18    (0x1UL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for LPADC0_CH18      */
#define SYS_GPD_MFP3_PD12MFP_EBI_nCS0       (0x2UL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for EBI_nCS0         */
#define SYS_GPD_MFP3_PD12MFP_CANFD1_RXD     (0x5UL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for CANFD1_RXD       */
#define SYS_GPD_MFP3_PD12MFP_UART2_RXD      (0x7UL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for UART2_RXD        */
#define SYS_GPD_MFP3_PD12MFP_PWM0_CH5       (0x9UL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for PWM0_CH5         */
#define SYS_GPD_MFP3_PD12MFP_EQEI0_INDEX    (0xAUL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for EQEI0_INDEX      */
#define SYS_GPD_MFP3_PD12MFP_CLKO           (0xDUL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for CLKO             */
#define SYS_GPD_MFP3_PD12MFP_EADC0_ST       (0xEUL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for EADC0_ST         */
#define SYS_GPD_MFP3_PD12MFP_LPADC0_ST      (0xEUL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for LPADC0_ST        */
#define SYS_GPD_MFP3_PD12MFP_INT5           (0xFUL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for INT5             */
#define SYS_GPD_MFP3_PD12MFP_TK_SE          (0x10UL<<SYS_GPD_MFP3_PD12MFP_Pos)  /*!< GPD_MFP3 PD12 setting for TK_SE            */

/* PD.13 MFP */
#define SYS_GPD_MFP3_PD13MFP_GPIO           (0x0UL<<SYS_GPD_MFP3_PD13MFP_Pos)   /*!< GPD_MFP3 PD13 setting for GPIO             */
#define SYS_GPD_MFP3_PD13MFP_EBI_AD10       (0x2UL<<SYS_GPD_MFP3_PD13MFP_Pos)   /*!< GPD_MFP3 PD13 setting for EBI_AD10         */
#define SYS_GPD_MFP3_PD13MFP_SPI0_I2SMCLK   (0x4UL<<SYS_GPD_MFP3_PD13MFP_Pos)   /*!< GPD_MFP3 PD13 setting for SPI0_I2SMCLK     */
#define SYS_GPD_MFP3_PD13MFP_SPI1_I2SMCLK   (0x5UL<<SYS_GPD_MFP3_PD13MFP_Pos)   /*!< GPD_MFP3 PD13 setting for SPI1_I2SMCLK     */
#define SYS_GPD_MFP3_PD13MFP_PWM0_CH0       (0xBUL<<SYS_GPD_MFP3_PD13MFP_Pos)   /*!< GPD_MFP3 PD13 setting for PWM0_CH0         */
#define SYS_GPD_MFP3_PD13MFP_CLKO           (0xEUL<<SYS_GPD_MFP3_PD13MFP_Pos)   /*!< GPD_MFP3 PD13 setting for CLKO             */
#define SYS_GPD_MFP3_PD13MFP_EADC0_ST       (0xFUL<<SYS_GPD_MFP3_PD13MFP_Pos)   /*!< GPD_MFP3 PD13 setting for EADC0_ST         */
#define SYS_GPD_MFP3_PD13MFP_LPADC0_ST      (0xFUL<<SYS_GPD_MFP3_PD13MFP_Pos)   /*!< GPD_MFP3 PD13 setting for LPADC0_ST        */
#define SYS_GPD_MFP3_PD13MFP_TK_SE          (0x10UL<<SYS_GPD_MFP3_PD13MFP_Pos)  /*!< GPD_MFP3 PD13 setting for TK_SE            */

/* PD.14 MFP */
#define SYS_GPD_MFP3_PD14MFP_GPIO           (0x0UL<<SYS_GPD_MFP3_PD14MFP_Pos)   /*!< GPD_MFP3 PD14 setting for GPIO             */
#define SYS_GPD_MFP3_PD14MFP_EBI_nCS0       (0x2UL<<SYS_GPD_MFP3_PD14MFP_Pos)   /*!< GPD_MFP3 PD14 setting for EBI_nCS0         */
#define SYS_GPD_MFP3_PD14MFP_SPI3_I2SMCLK   (0x3UL<<SYS_GPD_MFP3_PD14MFP_Pos)   /*!< GPD_MFP3 PD14 setting for SPI3_I2SMCLK     */
#define SYS_GPD_MFP3_PD14MFP_SPI0_I2SMCLK   (0x5UL<<SYS_GPD_MFP3_PD14MFP_Pos)   /*!< GPD_MFP3 PD14 setting for SPI0_I2SMCLK     */
#define SYS_GPD_MFP3_PD14MFP_EPWM0_CH4      (0xBUL<<SYS_GPD_MFP3_PD14MFP_Pos)   /*!< GPD_MFP3 PD14 setting for EPWM0_CH4        */

/* PD.15 MFP */
#define SYS_GPD_MFP3_PD15MFP_GPIO           (0x0UL<<SYS_GPD_MFP3_PD15MFP_Pos)   /*!< GPD_MFP3 PD15 setting for GPIO             */
#define SYS_GPD_MFP3_PD15MFP_EPWM0_CH5      (0xCUL<<SYS_GPD_MFP3_PD15MFP_Pos)   /*!< GPD_MFP3 PD15 setting for EPWM0_CH5        */
#define SYS_GPD_MFP3_PD15MFP_ACMP2_WLAT     (0xDUL<<SYS_GPD_MFP3_PD15MFP_Pos)   /*!< GPD_MFP3 PD15 setting for ACMP2_WLAT       */
#define SYS_GPD_MFP3_PD15MFP_TM3            (0xEUL<<SYS_GPD_MFP3_PD15MFP_Pos)   /*!< GPD_MFP3 PD15 setting for TM3              */
#define SYS_GPD_MFP3_PD15MFP_INT1           (0xFUL<<SYS_GPD_MFP3_PD15MFP_Pos)   /*!< GPD_MFP3 PD15 setting for INT1             */
#define SYS_GPD_MFP3_PD15MFP_TK_TK2         (0x10UL<<SYS_GPD_MFP3_PD15MFP_Pos)  /*!< GPD_MFP3 PD15 setting for TK_TK2           */
#define SYS_GPD_MFP3_PD15MFP_UTCPD0_FRSTX2  (0x11UL<<SYS_GPD_MFP3_PD15MFP_Pos)  /*!< GPD_MFP3 PD15 setting for UTCPD0_FRSTX2    */
#define SYS_GPD_MFP3_PD15MFP_UTCPD0_DISCHG  (0x12UL<<SYS_GPD_MFP3_PD15MFP_Pos)  /*!< GPD_MFP3 PD15 setting for UTCPD0_DISCHG    */

/* PE.0 MFP */
#define SYS_GPE_MFP0_PE0MFP_GPIO            (0x0UL<<SYS_GPE_MFP0_PE0MFP_Pos)    /*!< GPE_MFP0 PE0 setting for GPIO              */
#define SYS_GPE_MFP0_PE0MFP_EBI_AD11        (0x2UL<<SYS_GPE_MFP0_PE0MFP_Pos)    /*!< GPE_MFP0 PE0 setting for EBI_AD11          */
#define SYS_GPE_MFP0_PE0MFP_QSPI0_MOSI0     (0x3UL<<SYS_GPE_MFP0_PE0MFP_Pos)    /*!< GPE_MFP0 PE0 setting for QSPI0_MOSI0       */
#define SYS_GPE_MFP0_PE0MFP_SPI1_MOSI       (0x6UL<<SYS_GPE_MFP0_PE0MFP_Pos)    /*!< GPE_MFP0 PE0 setting for SPI1_MOSI         */
#define SYS_GPE_MFP0_PE0MFP_UART3_RXD       (0x7UL<<SYS_GPE_MFP0_PE0MFP_Pos)    /*!< GPE_MFP0 PE0 setting for UART3_RXD         */
#define SYS_GPE_MFP0_PE0MFP_I2C1_SDA        (0x8UL<<SYS_GPE_MFP0_PE0MFP_Pos)    /*!< GPE_MFP0 PE0 setting for I2C1_SDA          */
#define SYS_GPE_MFP0_PE0MFP_UART4_nRTS      (0x9UL<<SYS_GPE_MFP0_PE0MFP_Pos)    /*!< GPE_MFP0 PE0 setting for UART4_nRTS        */
#define SYS_GPE_MFP0_PE0MFP_LPIO0           (0x17UL<<SYS_GPE_MFP0_PE0MFP_Pos)   /*!< GPE_MFP0 PE0 setting for LPIO0             */

/* PE.1 MFP */
#define SYS_GPE_MFP0_PE1MFP_GPIO            (0x0UL<<SYS_GPE_MFP0_PE1MFP_Pos)    /*!< GPE_MFP0 PE1 setting for GPIO              */
#define SYS_GPE_MFP0_PE1MFP_EBI_AD10        (0x2UL<<SYS_GPE_MFP0_PE1MFP_Pos)    /*!< GPE_MFP0 PE1 setting for EBI_AD10          */
#define SYS_GPE_MFP0_PE1MFP_QSPI0_MISO0     (0x3UL<<SYS_GPE_MFP0_PE1MFP_Pos)    /*!< GPE_MFP0 PE1 setting for QSPI0_MISO0       */
#define SYS_GPE_MFP0_PE1MFP_SPI1_MISO       (0x6UL<<SYS_GPE_MFP0_PE1MFP_Pos)    /*!< GPE_MFP0 PE1 setting for SPI1_MISO         */
#define SYS_GPE_MFP0_PE1MFP_UART3_TXD       (0x7UL<<SYS_GPE_MFP0_PE1MFP_Pos)    /*!< GPE_MFP0 PE1 setting for UART3_TXD         */
#define SYS_GPE_MFP0_PE1MFP_I2C1_SCL        (0x8UL<<SYS_GPE_MFP0_PE1MFP_Pos)    /*!< GPE_MFP0 PE1 setting for I2C1_SCL          */
#define SYS_GPE_MFP0_PE1MFP_UART4_nCTS      (0x9UL<<SYS_GPE_MFP0_PE1MFP_Pos)    /*!< GPE_MFP0 PE1 setting for UART4_nCTS        */
#define SYS_GPE_MFP0_PE1MFP_LPIO1           (0x17UL<<SYS_GPE_MFP0_PE1MFP_Pos)   /*!< GPE_MFP0 PE1 setting for LPIO1             */

/* PE.2 MFP */
#define SYS_GPE_MFP0_PE2MFP_GPIO            (0x0UL<<SYS_GPE_MFP0_PE2MFP_Pos)    /*!< GPE_MFP0 PE2 setting for GPIO              */
#define SYS_GPE_MFP0_PE2MFP_EBI_ALE         (0x2UL<<SYS_GPE_MFP0_PE2MFP_Pos)    /*!< GPE_MFP0 PE2 setting for EBI_ALE           */
#define SYS_GPE_MFP0_PE2MFP_SPI3_MOSI       (0x5UL<<SYS_GPE_MFP0_PE2MFP_Pos)    /*!< GPE_MFP0 PE2 setting for SPI3_MOSI         */
#define SYS_GPE_MFP0_PE2MFP_USCI0_CLK       (0x7UL<<SYS_GPE_MFP0_PE2MFP_Pos)    /*!< GPE_MFP0 PE2 setting for USCI0_CLK         */
#define SYS_GPE_MFP0_PE2MFP_UART6_nCTS      (0x8UL<<SYS_GPE_MFP0_PE2MFP_Pos)    /*!< GPE_MFP0 PE2 setting for UART6_nCTS        */
#define SYS_GPE_MFP0_PE2MFP_UART7_RXD       (0x9UL<<SYS_GPE_MFP0_PE2MFP_Pos)    /*!< GPE_MFP0 PE2 setting for UART7_RXD         */
#define SYS_GPE_MFP0_PE2MFP_EQEI0_B         (0xBUL<<SYS_GPE_MFP0_PE2MFP_Pos)    /*!< GPE_MFP0 PE2 setting for EQEI0_B           */
#define SYS_GPE_MFP0_PE2MFP_EPWM0_CH5       (0xCUL<<SYS_GPE_MFP0_PE2MFP_Pos)    /*!< GPE_MFP0 PE2 setting for EPWM0_CH5         */
#define SYS_GPE_MFP0_PE2MFP_PWM0_CH0        (0xDUL<<SYS_GPE_MFP0_PE2MFP_Pos)    /*!< GPE_MFP0 PE2 setting for PWM0_CH0          */

/* PE.3 MFP */
#define SYS_GPE_MFP0_PE3MFP_GPIO            (0x0UL<<SYS_GPE_MFP0_PE3MFP_Pos)    /*!< GPE_MFP0 PE3 setting for GPIO              */
#define SYS_GPE_MFP0_PE3MFP_EBI_MCLK        (0x2UL<<SYS_GPE_MFP0_PE3MFP_Pos)    /*!< GPE_MFP0 PE3 setting for EBI_MCLK          */
#define SYS_GPE_MFP0_PE3MFP_SPI3_MISO       (0x5UL<<SYS_GPE_MFP0_PE3MFP_Pos)    /*!< GPE_MFP0 PE3 setting for SPI3_MISO         */
#define SYS_GPE_MFP0_PE3MFP_USCI0_DAT0      (0x7UL<<SYS_GPE_MFP0_PE3MFP_Pos)    /*!< GPE_MFP0 PE3 setting for USCI0_DAT0        */
#define SYS_GPE_MFP0_PE3MFP_UART6_nRTS      (0x8UL<<SYS_GPE_MFP0_PE3MFP_Pos)    /*!< GPE_MFP0 PE3 setting for UART6_nRTS        */
#define SYS_GPE_MFP0_PE3MFP_UART7_TXD       (0x9UL<<SYS_GPE_MFP0_PE3MFP_Pos)    /*!< GPE_MFP0 PE3 setting for UART7_TXD         */
#define SYS_GPE_MFP0_PE3MFP_EQEI0_A         (0xBUL<<SYS_GPE_MFP0_PE3MFP_Pos)    /*!< GPE_MFP0 PE3 setting for EQEI0_A           */
#define SYS_GPE_MFP0_PE3MFP_EPWM0_CH4       (0xCUL<<SYS_GPE_MFP0_PE3MFP_Pos)    /*!< GPE_MFP0 PE3 setting for EPWM0_CH4         */
#define SYS_GPE_MFP0_PE3MFP_PWM0_CH1        (0xDUL<<SYS_GPE_MFP0_PE3MFP_Pos)    /*!< GPE_MFP0 PE3 setting for PWM0_CH1          */

/* PE.4 MFP */
#define SYS_GPE_MFP1_PE4MFP_GPIO            (0x0UL<<SYS_GPE_MFP1_PE4MFP_Pos)    /*!< GPE_MFP1 PE4 setting for GPIO              */
#define SYS_GPE_MFP1_PE4MFP_EBI_nWR         (0x2UL<<SYS_GPE_MFP1_PE4MFP_Pos)    /*!< GPE_MFP1 PE4 setting for EBI_nWR           */
#define SYS_GPE_MFP1_PE4MFP_SPI3_CLK        (0x5UL<<SYS_GPE_MFP1_PE4MFP_Pos)    /*!< GPE_MFP1 PE4 setting for SPI3_CLK          */
#define SYS_GPE_MFP1_PE4MFP_USCI0_DAT1      (0x7UL<<SYS_GPE_MFP1_PE4MFP_Pos)    /*!< GPE_MFP1 PE4 setting for USCI0_DAT1        */
#define SYS_GPE_MFP1_PE4MFP_UART6_RXD       (0x8UL<<SYS_GPE_MFP1_PE4MFP_Pos)    /*!< GPE_MFP1 PE4 setting for UART6_RXD         */
#define SYS_GPE_MFP1_PE4MFP_UART7_nCTS      (0x9UL<<SYS_GPE_MFP1_PE4MFP_Pos)    /*!< GPE_MFP1 PE4 setting for UART7_nCTS        */
#define SYS_GPE_MFP1_PE4MFP_EQEI0_INDEX     (0xBUL<<SYS_GPE_MFP1_PE4MFP_Pos)    /*!< GPE_MFP1 PE4 setting for EQEI0_INDEX       */
#define SYS_GPE_MFP1_PE4MFP_EPWM0_CH3       (0xCUL<<SYS_GPE_MFP1_PE4MFP_Pos)    /*!< GPE_MFP1 PE4 setting for EPWM0_CH3         */
#define SYS_GPE_MFP1_PE4MFP_PWM0_CH2        (0xDUL<<SYS_GPE_MFP1_PE4MFP_Pos)    /*!< GPE_MFP1 PE4 setting for PWM0_CH2          */

/* PE.5 MFP */
#define SYS_GPE_MFP1_PE5MFP_GPIO            (0x0UL<<SYS_GPE_MFP1_PE5MFP_Pos)    /*!< GPE_MFP1 PE5 setting for GPIO              */
#define SYS_GPE_MFP1_PE5MFP_EBI_nRD         (0x2UL<<SYS_GPE_MFP1_PE5MFP_Pos)    /*!< GPE_MFP1 PE5 setting for EBI_nRD           */
#define SYS_GPE_MFP1_PE5MFP_SPI3_SS         (0x5UL<<SYS_GPE_MFP1_PE5MFP_Pos)    /*!< GPE_MFP1 PE5 setting for SPI3_SS           */
#define SYS_GPE_MFP1_PE5MFP_USCI0_CTL1      (0x7UL<<SYS_GPE_MFP1_PE5MFP_Pos)    /*!< GPE_MFP1 PE5 setting for USCI0_CTL1        */
#define SYS_GPE_MFP1_PE5MFP_UART6_TXD       (0x8UL<<SYS_GPE_MFP1_PE5MFP_Pos)    /*!< GPE_MFP1 PE5 setting for UART6_TXD         */
#define SYS_GPE_MFP1_PE5MFP_UART7_nRTS      (0x9UL<<SYS_GPE_MFP1_PE5MFP_Pos)    /*!< GPE_MFP1 PE5 setting for UART7_nRTS        */
#define SYS_GPE_MFP1_PE5MFP_EQEI1_B         (0xBUL<<SYS_GPE_MFP1_PE5MFP_Pos)    /*!< GPE_MFP1 PE5 setting for EQEI1_B           */
#define SYS_GPE_MFP1_PE5MFP_EPWM0_CH2       (0xCUL<<SYS_GPE_MFP1_PE5MFP_Pos)    /*!< GPE_MFP1 PE5 setting for EPWM0_CH2         */
#define SYS_GPE_MFP1_PE5MFP_PWM0_CH3        (0xDUL<<SYS_GPE_MFP1_PE5MFP_Pos)    /*!< GPE_MFP1 PE5 setting for PWM0_CH3          */

/* PE.6 MFP */
#define SYS_GPE_MFP1_PE6MFP_GPIO            (0x0UL<<SYS_GPE_MFP1_PE6MFP_Pos)    /*!< GPE_MFP1 PE6 setting for GPIO              */
#define SYS_GPE_MFP1_PE6MFP_SPI3_I2SMCLK    (0x5UL<<SYS_GPE_MFP1_PE6MFP_Pos)    /*!< GPE_MFP1 PE6 setting for SPI3_I2SMCLK      */
#define SYS_GPE_MFP1_PE6MFP_USCI0_CTL0      (0x7UL<<SYS_GPE_MFP1_PE6MFP_Pos)    /*!< GPE_MFP1 PE6 setting for USCI0_CTL0        */
#define SYS_GPE_MFP1_PE6MFP_UART5_RXD       (0x8UL<<SYS_GPE_MFP1_PE6MFP_Pos)    /*!< GPE_MFP1 PE6 setting for UART5_RXD         */
#define SYS_GPE_MFP1_PE6MFP_CANFD1_RXD      (0x9UL<<SYS_GPE_MFP1_PE6MFP_Pos)    /*!< GPE_MFP1 PE6 setting for CANFD1_RXD        */
#define SYS_GPE_MFP1_PE6MFP_EQEI1_A         (0xBUL<<SYS_GPE_MFP1_PE6MFP_Pos)    /*!< GPE_MFP1 PE6 setting for EQEI1_A           */
#define SYS_GPE_MFP1_PE6MFP_EPWM0_CH1       (0xCUL<<SYS_GPE_MFP1_PE6MFP_Pos)    /*!< GPE_MFP1 PE6 setting for EPWM0_CH1         */
#define SYS_GPE_MFP1_PE6MFP_PWM0_CH4        (0xDUL<<SYS_GPE_MFP1_PE6MFP_Pos)    /*!< GPE_MFP1 PE6 setting for PWM0_CH4          */

/* PE.7 MFP */
#define SYS_GPE_MFP1_PE7MFP_GPIO            (0x0UL<<SYS_GPE_MFP1_PE7MFP_Pos)    /*!< GPE_MFP1 PE7 setting for GPIO              */
#define SYS_GPE_MFP1_PE7MFP_UART5_TXD       (0x8UL<<SYS_GPE_MFP1_PE7MFP_Pos)    /*!< GPE_MFP1 PE7 setting for UART5_TXD         */
#define SYS_GPE_MFP1_PE7MFP_CANFD1_TXD      (0x9UL<<SYS_GPE_MFP1_PE7MFP_Pos)    /*!< GPE_MFP1 PE7 setting for CANFD1_TXD        */
#define SYS_GPE_MFP1_PE7MFP_EQEI1_INDEX     (0xBUL<<SYS_GPE_MFP1_PE7MFP_Pos)    /*!< GPE_MFP1 PE7 setting for EQEI1_INDEX       */
#define SYS_GPE_MFP1_PE7MFP_EPWM0_CH0       (0xCUL<<SYS_GPE_MFP1_PE7MFP_Pos)    /*!< GPE_MFP1 PE7 setting for EPWM0_CH0         */
#define SYS_GPE_MFP1_PE7MFP_PWM0_CH5        (0xDUL<<SYS_GPE_MFP1_PE7MFP_Pos)    /*!< GPE_MFP1 PE7 setting for PWM0_CH5          */

/* PE.8 MFP */
#define SYS_GPE_MFP2_PE8MFP_GPIO            (0x0UL<<SYS_GPE_MFP2_PE8MFP_Pos)    /*!< GPE_MFP2 PE8 setting for GPIO              */
#define SYS_GPE_MFP2_PE8MFP_EBI_ADR10       (0x2UL<<SYS_GPE_MFP2_PE8MFP_Pos)    /*!< GPE_MFP2 PE8 setting for EBI_ADR10         */
#define SYS_GPE_MFP2_PE8MFP_SPI2_CLK        (0x5UL<<SYS_GPE_MFP2_PE8MFP_Pos)    /*!< GPE_MFP2 PE8 setting for SPI2_CLK          */
#define SYS_GPE_MFP2_PE8MFP_USCI1_CTL1      (0x6UL<<SYS_GPE_MFP2_PE8MFP_Pos)    /*!< GPE_MFP2 PE8 setting for USCI1_CTL1        */
#define SYS_GPE_MFP2_PE8MFP_UART2_TXD       (0x7UL<<SYS_GPE_MFP2_PE8MFP_Pos)    /*!< GPE_MFP2 PE8 setting for UART2_TXD         */
#define SYS_GPE_MFP2_PE8MFP_PWM0_BRAKE0     (0x9UL<<SYS_GPE_MFP2_PE8MFP_Pos)    /*!< GPE_MFP2 PE8 setting for PWM0_BRAKE0       */
#define SYS_GPE_MFP2_PE8MFP_EPWM0_CH0       (0xAUL<<SYS_GPE_MFP2_PE8MFP_Pos)    /*!< GPE_MFP2 PE8 setting for EPWM0_CH0         */
#define SYS_GPE_MFP2_PE8MFP_EPWM0_BRAKE0    (0xBUL<<SYS_GPE_MFP2_PE8MFP_Pos)    /*!< GPE_MFP2 PE8 setting for EPWM0_BRAKE0      */
#define SYS_GPE_MFP2_PE8MFP_ECAP0_IC0       (0xCUL<<SYS_GPE_MFP2_PE8MFP_Pos)    /*!< GPE_MFP2 PE8 setting for ECAP0_IC0         */

/* PE.9 MFP */
#define SYS_GPE_MFP2_PE9MFP_GPIO            (0x0UL<<SYS_GPE_MFP2_PE9MFP_Pos)    /*!< GPE_MFP2 PE9 setting for GPIO              */
#define SYS_GPE_MFP2_PE9MFP_EBI_ADR11       (0x2UL<<SYS_GPE_MFP2_PE9MFP_Pos)    /*!< GPE_MFP2 PE9 setting for EBI_ADR11         */
#define SYS_GPE_MFP2_PE9MFP_SPI2_MISO       (0x5UL<<SYS_GPE_MFP2_PE9MFP_Pos)    /*!< GPE_MFP2 PE9 setting for SPI2_MISO         */
#define SYS_GPE_MFP2_PE9MFP_USCI1_CTL0      (0x6UL<<SYS_GPE_MFP2_PE9MFP_Pos)    /*!< GPE_MFP2 PE9 setting for USCI1_CTL0        */
#define SYS_GPE_MFP2_PE9MFP_UART2_RXD       (0x7UL<<SYS_GPE_MFP2_PE9MFP_Pos)    /*!< GPE_MFP2 PE9 setting for UART2_RXD         */
#define SYS_GPE_MFP2_PE9MFP_PWM0_BRAKE1     (0x9UL<<SYS_GPE_MFP2_PE9MFP_Pos)    /*!< GPE_MFP2 PE9 setting for PWM0_BRAKE1       */
#define SYS_GPE_MFP2_PE9MFP_EPWM0_CH1       (0xAUL<<SYS_GPE_MFP2_PE9MFP_Pos)    /*!< GPE_MFP2 PE9 setting for EPWM0_CH1         */
#define SYS_GPE_MFP2_PE9MFP_EPWM0_BRAKE1    (0xBUL<<SYS_GPE_MFP2_PE9MFP_Pos)    /*!< GPE_MFP2 PE9 setting for EPWM0_BRAKE1      */
#define SYS_GPE_MFP2_PE9MFP_ECAP0_IC1       (0xCUL<<SYS_GPE_MFP2_PE9MFP_Pos)    /*!< GPE_MFP2 PE9 setting for ECAP0_IC1         */

/* PE.10 MFP */
#define SYS_GPE_MFP2_PE10MFP_GPIO           (0x0UL<<SYS_GPE_MFP2_PE10MFP_Pos)   /*!< GPE_MFP2 PE10 setting for GPIO             */
#define SYS_GPE_MFP2_PE10MFP_EBI_ADR12      (0x2UL<<SYS_GPE_MFP2_PE10MFP_Pos)   /*!< GPE_MFP2 PE10 setting for EBI_ADR12        */
#define SYS_GPE_MFP2_PE10MFP_SPI2_MOSI      (0x5UL<<SYS_GPE_MFP2_PE10MFP_Pos)   /*!< GPE_MFP2 PE10 setting for SPI2_MOSI        */
#define SYS_GPE_MFP2_PE10MFP_USCI1_DAT0     (0x6UL<<SYS_GPE_MFP2_PE10MFP_Pos)   /*!< GPE_MFP2 PE10 setting for USCI1_DAT0       */
#define SYS_GPE_MFP2_PE10MFP_UART3_TXD      (0x7UL<<SYS_GPE_MFP2_PE10MFP_Pos)   /*!< GPE_MFP2 PE10 setting for UART3_TXD        */
#define SYS_GPE_MFP2_PE10MFP_PWM1_BRAKE0    (0x9UL<<SYS_GPE_MFP2_PE10MFP_Pos)   /*!< GPE_MFP2 PE10 setting for PWM1_BRAKE0      */
#define SYS_GPE_MFP2_PE10MFP_EPWM0_CH2      (0xAUL<<SYS_GPE_MFP2_PE10MFP_Pos)   /*!< GPE_MFP2 PE10 setting for EPWM0_CH2        */
#define SYS_GPE_MFP2_PE10MFP_EPWM1_BRAKE0   (0xBUL<<SYS_GPE_MFP2_PE10MFP_Pos)   /*!< GPE_MFP2 PE10 setting for EPWM1_BRAKE0     */
#define SYS_GPE_MFP2_PE10MFP_ECAP0_IC2      (0xCUL<<SYS_GPE_MFP2_PE10MFP_Pos)   /*!< GPE_MFP2 PE10 setting for ECAP0_IC2        */

/* PE.11 MFP */
#define SYS_GPE_MFP2_PE11MFP_GPIO           (0x0UL<<SYS_GPE_MFP2_PE11MFP_Pos)   /*!< GPE_MFP2 PE11 setting for GPIO             */
#define SYS_GPE_MFP2_PE11MFP_EBI_ADR13      (0x2UL<<SYS_GPE_MFP2_PE11MFP_Pos)   /*!< GPE_MFP2 PE11 setting for EBI_ADR13        */
#define SYS_GPE_MFP2_PE11MFP_SPI2_SS        (0x5UL<<SYS_GPE_MFP2_PE11MFP_Pos)   /*!< GPE_MFP2 PE11 setting for SPI2_SS          */
#define SYS_GPE_MFP2_PE11MFP_USCI1_DAT1     (0x6UL<<SYS_GPE_MFP2_PE11MFP_Pos)   /*!< GPE_MFP2 PE11 setting for USCI1_DAT1       */
#define SYS_GPE_MFP2_PE11MFP_UART3_RXD      (0x7UL<<SYS_GPE_MFP2_PE11MFP_Pos)   /*!< GPE_MFP2 PE11 setting for UART3_RXD        */
#define SYS_GPE_MFP2_PE11MFP_UART1_nCTS     (0x8UL<<SYS_GPE_MFP2_PE11MFP_Pos)   /*!< GPE_MFP2 PE11 setting for UART1_nCTS       */
#define SYS_GPE_MFP2_PE11MFP_PWM1_BRAKE1    (0x9UL<<SYS_GPE_MFP2_PE11MFP_Pos)   /*!< GPE_MFP2 PE11 setting for PWM1_BRAKE1      */
#define SYS_GPE_MFP2_PE11MFP_EPWM0_CH3      (0xAUL<<SYS_GPE_MFP2_PE11MFP_Pos)   /*!< GPE_MFP2 PE11 setting for EPWM0_CH3        */
#define SYS_GPE_MFP2_PE11MFP_EPWM1_BRAKE1   (0xBUL<<SYS_GPE_MFP2_PE11MFP_Pos)   /*!< GPE_MFP2 PE11 setting for EPWM1_BRAKE1     */
#define SYS_GPE_MFP2_PE11MFP_ECAP1_IC2      (0xDUL<<SYS_GPE_MFP2_PE11MFP_Pos)   /*!< GPE_MFP2 PE11 setting for ECAP1_IC2        */

/* PE.12 MFP */
#define SYS_GPE_MFP3_PE12MFP_GPIO           (0x0UL<<SYS_GPE_MFP3_PE12MFP_Pos)   /*!< GPE_MFP3 PE12 setting for GPIO             */
#define SYS_GPE_MFP3_PE12MFP_EBI_ADR14      (0x2UL<<SYS_GPE_MFP3_PE12MFP_Pos)   /*!< GPE_MFP3 PE12 setting for EBI_ADR14        */
#define SYS_GPE_MFP3_PE12MFP_SPI2_I2SMCLK   (0x5UL<<SYS_GPE_MFP3_PE12MFP_Pos)   /*!< GPE_MFP3 PE12 setting for SPI2_I2SMCLK     */
#define SYS_GPE_MFP3_PE12MFP_USCI1_CLK      (0x6UL<<SYS_GPE_MFP3_PE12MFP_Pos)   /*!< GPE_MFP3 PE12 setting for USCI1_CLK        */
#define SYS_GPE_MFP3_PE12MFP_UART1_nRTS     (0x8UL<<SYS_GPE_MFP3_PE12MFP_Pos)   /*!< GPE_MFP3 PE12 setting for UART1_nRTS       */
#define SYS_GPE_MFP3_PE12MFP_EPWM0_CH4      (0xAUL<<SYS_GPE_MFP3_PE12MFP_Pos)   /*!< GPE_MFP3 PE12 setting for EPWM0_CH4        */
#define SYS_GPE_MFP3_PE12MFP_ECAP1_IC1      (0xDUL<<SYS_GPE_MFP3_PE12MFP_Pos)   /*!< GPE_MFP3 PE12 setting for ECAP1_IC1        */

/* PE.13 MFP */
#define SYS_GPE_MFP3_PE13MFP_GPIO           (0x0UL<<SYS_GPE_MFP3_PE13MFP_Pos)   /*!< GPE_MFP3 PE13 setting for GPIO             */
#define SYS_GPE_MFP3_PE13MFP_EBI_ADR15      (0x2UL<<SYS_GPE_MFP3_PE13MFP_Pos)   /*!< GPE_MFP3 PE13 setting for EBI_ADR15        */
#define SYS_GPE_MFP3_PE13MFP_I2C0_SCL       (0x4UL<<SYS_GPE_MFP3_PE13MFP_Pos)   /*!< GPE_MFP3 PE13 setting for I2C0_SCL         */
#define SYS_GPE_MFP3_PE13MFP_UART4_nRTS     (0x5UL<<SYS_GPE_MFP3_PE13MFP_Pos)   /*!< GPE_MFP3 PE13 setting for UART4_nRTS       */
#define SYS_GPE_MFP3_PE13MFP_UART1_TXD      (0x8UL<<SYS_GPE_MFP3_PE13MFP_Pos)   /*!< GPE_MFP3 PE13 setting for UART1_TXD        */
#define SYS_GPE_MFP3_PE13MFP_EPWM0_CH5      (0xAUL<<SYS_GPE_MFP3_PE13MFP_Pos)   /*!< GPE_MFP3 PE13 setting for EPWM0_CH5        */
#define SYS_GPE_MFP3_PE13MFP_EPWM1_CH0      (0xBUL<<SYS_GPE_MFP3_PE13MFP_Pos)   /*!< GPE_MFP3 PE13 setting for EPWM1_CH0        */
#define SYS_GPE_MFP3_PE13MFP_PWM1_CH5       (0xCUL<<SYS_GPE_MFP3_PE13MFP_Pos)   /*!< GPE_MFP3 PE13 setting for PWM1_CH5         */
#define SYS_GPE_MFP3_PE13MFP_ECAP1_IC0      (0xDUL<<SYS_GPE_MFP3_PE13MFP_Pos)   /*!< GPE_MFP3 PE13 setting for ECAP1_IC0        */
#define SYS_GPE_MFP3_PE13MFP_LPI2C0_SCL     (0x16UL<<SYS_GPE_MFP3_PE13MFP_Pos)  /*!< GPE_MFP3 PE13 setting for LPI2C0_SCL       */

/* PE.14 MFP */
#define SYS_GPE_MFP3_PE14MFP_GPIO           (0x0UL<<SYS_GPE_MFP3_PE14MFP_Pos)   /*!< GPE_MFP3 PE14 setting for GPIO             */
#define SYS_GPE_MFP3_PE14MFP_EBI_AD8        (0x2UL<<SYS_GPE_MFP3_PE14MFP_Pos)   /*!< GPE_MFP3 PE14 setting for EBI_AD8          */
#define SYS_GPE_MFP3_PE14MFP_UART2_TXD      (0x3UL<<SYS_GPE_MFP3_PE14MFP_Pos)   /*!< GPE_MFP3 PE14 setting for UART2_TXD        */
#define SYS_GPE_MFP3_PE14MFP_CANFD0_TXD     (0x4UL<<SYS_GPE_MFP3_PE14MFP_Pos)   /*!< GPE_MFP3 PE14 setting for CANFD0_TXD       */
#define SYS_GPE_MFP3_PE14MFP_UART6_TXD      (0x6UL<<SYS_GPE_MFP3_PE14MFP_Pos)   /*!< GPE_MFP3 PE14 setting for UART6_TXD        */
#define SYS_GPE_MFP3_PE14MFP_EPWM0_CH1      (0xCUL<<SYS_GPE_MFP3_PE14MFP_Pos)   /*!< GPE_MFP3 PE14 setting for EPWM0_CH1        */
#define SYS_GPE_MFP3_PE14MFP_TM2            (0xDUL<<SYS_GPE_MFP3_PE14MFP_Pos)   /*!< GPE_MFP3 PE14 setting for TM2              */
#define SYS_GPE_MFP3_PE14MFP_CLKO           (0xEUL<<SYS_GPE_MFP3_PE14MFP_Pos)   /*!< GPE_MFP3 PE14 setting for CLKO             */
#define SYS_GPE_MFP3_PE14MFP_INT4           (0xFUL<<SYS_GPE_MFP3_PE14MFP_Pos)   /*!< GPE_MFP3 PE14 setting for INT4             */
#define SYS_GPE_MFP3_PE14MFP_TK_TK9         (0x10UL<<SYS_GPE_MFP3_PE14MFP_Pos)  /*!< GPE_MFP3 PE14 setting for TK_TK9           */

/* PE.15 MFP */
#define SYS_GPE_MFP3_PE15MFP_GPIO           (0x0UL<<SYS_GPE_MFP3_PE15MFP_Pos)   /*!< GPE_MFP3 PE15 setting for GPIO             */
#define SYS_GPE_MFP3_PE15MFP_EBI_AD9        (0x2UL<<SYS_GPE_MFP3_PE15MFP_Pos)   /*!< GPE_MFP3 PE15 setting for EBI_AD9          */
#define SYS_GPE_MFP3_PE15MFP_UART2_RXD      (0x3UL<<SYS_GPE_MFP3_PE15MFP_Pos)   /*!< GPE_MFP3 PE15 setting for UART2_RXD        */
#define SYS_GPE_MFP3_PE15MFP_CANFD0_RXD     (0x4UL<<SYS_GPE_MFP3_PE15MFP_Pos)   /*!< GPE_MFP3 PE15 setting for CANFD0_RXD       */
#define SYS_GPE_MFP3_PE15MFP_UART6_RXD      (0x6UL<<SYS_GPE_MFP3_PE15MFP_Pos)   /*!< GPE_MFP3 PE15 setting for UART6_RXD        */

/* PF.0 MFP */
#define SYS_GPF_MFP0_PF0MFP_GPIO            (0x0UL<<SYS_GPF_MFP0_PF0MFP_Pos)    /*!< GPF_MFP0 PF0 setting for GPIO              */
#define SYS_GPF_MFP0_PF0MFP_UART1_TXD       (0x2UL<<SYS_GPF_MFP0_PF0MFP_Pos)    /*!< GPF_MFP0 PF0 setting for UART1_TXD         */
#define SYS_GPF_MFP0_PF0MFP_I2C1_SCL        (0x3UL<<SYS_GPF_MFP0_PF0MFP_Pos)    /*!< GPF_MFP0 PF0 setting for I2C1_SCL          */
#define SYS_GPF_MFP0_PF0MFP_UART0_TXD       (0x4UL<<SYS_GPF_MFP0_PF0MFP_Pos)    /*!< GPF_MFP0 PF0 setting for UART0_TXD         */
#define SYS_GPF_MFP0_PF0MFP_EPWM1_CH4       (0xBUL<<SYS_GPF_MFP0_PF0MFP_Pos)    /*!< GPF_MFP0 PF0 setting for EPWM1_CH4         */
#define SYS_GPF_MFP0_PF0MFP_PWM1_CH0        (0xCUL<<SYS_GPF_MFP0_PF0MFP_Pos)    /*!< GPF_MFP0 PF0 setting for PWM1_CH0          */
#define SYS_GPF_MFP0_PF0MFP_ICE_DAT         (0xEUL<<SYS_GPF_MFP0_PF0MFP_Pos)    /*!< GPF_MFP0 PF0 setting for ICE_DAT           */
#define SYS_GPF_MFP0_PF0MFP_UTCPD0_FRSTX2   (0x11UL<<SYS_GPF_MFP0_PF0MFP_Pos)   /*!< GPF_MFP0 PF0 setting for UTCPD0_FRSTX2     */
#define SYS_GPF_MFP0_PF0MFP_UTCPD0_DISCHG   (0x12UL<<SYS_GPF_MFP0_PF0MFP_Pos)   /*!< GPF_MFP0 PF0 setting for UTCPD0_DISCHG     */
#define SYS_GPF_MFP0_PF0MFP_LPUART0_TXD     (0x15UL<<SYS_GPF_MFP0_PF0MFP_Pos)   /*!< GPF_MFP0 PF0 setting for LPUART0_TXD       */
#define SYS_GPF_MFP0_PF0MFP_LPIO2           (0x17UL<<SYS_GPF_MFP0_PF0MFP_Pos)   /*!< GPF_MFP0 PF0 setting for LPIO2             */

/* PF.1 MFP */
#define SYS_GPF_MFP0_PF1MFP_GPIO            (0x0UL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for GPIO              */
#define SYS_GPF_MFP0_PF1MFP_UART1_RXD       (0x2UL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for UART1_RXD         */
#define SYS_GPF_MFP0_PF1MFP_I2C1_SDA        (0x3UL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for I2C1_SDA          */
#define SYS_GPF_MFP0_PF1MFP_UART0_RXD       (0x4UL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for UART0_RXD         */
#define SYS_GPF_MFP0_PF1MFP_SPI3_I2SMCLK    (0x6UL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for SPI3_I2SMCLK      */
#define SYS_GPF_MFP0_PF1MFP_EPWM1_CH5       (0xBUL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for EPWM1_CH5         */
#define SYS_GPF_MFP0_PF1MFP_PWM1_CH1        (0xCUL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for PWM1_CH1          */
#define SYS_GPF_MFP0_PF1MFP_ICE_CLK         (0xEUL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for ICE_CLK           */
#define SYS_GPF_MFP0_PF1MFP_UTCPD0_FRSTX1   (0x11UL<<SYS_GPF_MFP0_PF1MFP_Pos)   /*!< GPF_MFP0 PF1 setting for UTCPD0_FRSTX1     */
#define SYS_GPF_MFP0_PF1MFP_UTCPD0_DISCHG   (0x12UL<<SYS_GPF_MFP0_PF1MFP_Pos)   /*!< GPF_MFP0 PF1 setting for UTCPD0_DISCHG     */
#define SYS_GPF_MFP0_PF1MFP_LPUART0_RXD     (0x15UL<<SYS_GPF_MFP0_PF1MFP_Pos)   /*!< GPF_MFP0 PF1 setting for LPUART0_RXD       */
#define SYS_GPF_MFP0_PF1MFP_LPIO3           (0x17UL<<SYS_GPF_MFP0_PF1MFP_Pos)   /*!< GPF_MFP0 PF1 setting for LPIO3             */

/* PF.2 MFP */
#define SYS_GPF_MFP0_PF2MFP_GPIO            (0x0UL<<SYS_GPF_MFP0_PF2MFP_Pos)    /*!< GPF_MFP0 PF2 setting for GPIO              */
#define SYS_GPF_MFP0_PF2MFP_EBI_nCS1        (0x2UL<<SYS_GPF_MFP0_PF2MFP_Pos)    /*!< GPF_MFP0 PF2 setting for EBI_nCS1          */
#define SYS_GPF_MFP0_PF2MFP_UART0_RXD       (0x3UL<<SYS_GPF_MFP0_PF2MFP_Pos)    /*!< GPF_MFP0 PF2 setting for UART0_RXD         */
#define SYS_GPF_MFP0_PF2MFP_I2C0_SDA        (0x4UL<<SYS_GPF_MFP0_PF2MFP_Pos)    /*!< GPF_MFP0 PF2 setting for I2C0_SDA          */
#define SYS_GPF_MFP0_PF2MFP_QSPI0_CLK       (0x5UL<<SYS_GPF_MFP0_PF2MFP_Pos)    /*!< GPF_MFP0 PF2 setting for QSPI0_CLK         */
#define SYS_GPF_MFP0_PF2MFP_XT1_OUT         (0xAUL<<SYS_GPF_MFP0_PF2MFP_Pos)    /*!< GPF_MFP0 PF2 setting for XT1_OUT           */
#define SYS_GPF_MFP0_PF2MFP_PWM1_CH1        (0xBUL<<SYS_GPF_MFP0_PF2MFP_Pos)    /*!< GPF_MFP0 PF2 setting for PWM1_CH1          */
#define SYS_GPF_MFP0_PF2MFP_EQEI1_B         (0xCUL<<SYS_GPF_MFP0_PF2MFP_Pos)    /*!< GPF_MFP0 PF2 setting for EQEI1_B           */
#define SYS_GPF_MFP0_PF2MFP_ECAP1_IC2       (0xDUL<<SYS_GPF_MFP0_PF2MFP_Pos)    /*!< GPF_MFP0 PF2 setting for ECAP1_IC2         */
#define SYS_GPF_MFP0_PF2MFP_LPUART0_RXD     (0x15UL<<SYS_GPF_MFP0_PF2MFP_Pos)   /*!< GPF_MFP0 PF2 setting for LPUART0_RXD       */
#define SYS_GPF_MFP0_PF2MFP_LPI2C0_SDA      (0x16UL<<SYS_GPF_MFP0_PF2MFP_Pos)   /*!< GPF_MFP0 PF2 setting for LPI2C0_SDA        */

/* PF.3 MFP */
#define SYS_GPF_MFP0_PF3MFP_GPIO            (0x0UL<<SYS_GPF_MFP0_PF3MFP_Pos)    /*!< GPF_MFP0 PF3 setting for GPIO              */
#define SYS_GPF_MFP0_PF3MFP_EBI_nCS0        (0x2UL<<SYS_GPF_MFP0_PF3MFP_Pos)    /*!< GPF_MFP0 PF3 setting for EBI_nCS0          */
#define SYS_GPF_MFP0_PF3MFP_UART0_TXD       (0x3UL<<SYS_GPF_MFP0_PF3MFP_Pos)    /*!< GPF_MFP0 PF3 setting for UART0_TXD         */
#define SYS_GPF_MFP0_PF3MFP_I2C0_SCL        (0x4UL<<SYS_GPF_MFP0_PF3MFP_Pos)    /*!< GPF_MFP0 PF3 setting for I2C0_SCL          */
#define SYS_GPF_MFP0_PF3MFP_XT1_IN          (0xAUL<<SYS_GPF_MFP0_PF3MFP_Pos)    /*!< GPF_MFP0 PF3 setting for XT1_IN            */
#define SYS_GPF_MFP0_PF3MFP_PWM1_CH0        (0xBUL<<SYS_GPF_MFP0_PF3MFP_Pos)    /*!< GPF_MFP0 PF3 setting for PWM1_CH0          */
#define SYS_GPF_MFP0_PF3MFP_EQEI1_A         (0xCUL<<SYS_GPF_MFP0_PF3MFP_Pos)    /*!< GPF_MFP0 PF3 setting for EQEI1_A           */
#define SYS_GPF_MFP0_PF3MFP_ECAP1_IC1       (0xDUL<<SYS_GPF_MFP0_PF3MFP_Pos)    /*!< GPF_MFP0 PF3 setting for ECAP1_IC1         */
#define SYS_GPF_MFP0_PF3MFP_LPUART0_TXD     (0x15UL<<SYS_GPF_MFP0_PF3MFP_Pos)   /*!< GPF_MFP0 PF3 setting for LPUART0_TXD       */
#define SYS_GPF_MFP0_PF3MFP_LPI2C0_SCL      (0x16UL<<SYS_GPF_MFP0_PF3MFP_Pos)   /*!< GPF_MFP0 PF3 setting for LPI2C0_SCL        */

/* PF.4 MFP */
#define SYS_GPF_MFP1_PF4MFP_GPIO            (0x0UL<<SYS_GPF_MFP1_PF4MFP_Pos)    /*!< GPF_MFP1 PF4 setting for GPIO              */
#define SYS_GPF_MFP1_PF4MFP_UART2_TXD       (0x2UL<<SYS_GPF_MFP1_PF4MFP_Pos)    /*!< GPF_MFP1 PF4 setting for UART2_TXD         */
#define SYS_GPF_MFP1_PF4MFP_UART2_nRTS      (0x4UL<<SYS_GPF_MFP1_PF4MFP_Pos)    /*!< GPF_MFP1 PF4 setting for UART2_nRTS        */
#define SYS_GPF_MFP1_PF4MFP_EPWM0_CH1       (0x7UL<<SYS_GPF_MFP1_PF4MFP_Pos)    /*!< GPF_MFP1 PF4 setting for EPWM0_CH1         */
#define SYS_GPF_MFP1_PF4MFP_PWM0_CH5        (0x8UL<<SYS_GPF_MFP1_PF4MFP_Pos)    /*!< GPF_MFP1 PF4 setting for PWM0_CH5          */
#define SYS_GPF_MFP1_PF4MFP_X32_OUT         (0xAUL<<SYS_GPF_MFP1_PF4MFP_Pos)    /*!< GPF_MFP1 PF4 setting for X32_OUT           */
#define SYS_GPF_MFP1_PF4MFP_EQEI1_INDEX     (0xCUL<<SYS_GPF_MFP1_PF4MFP_Pos)    /*!< GPF_MFP1 PF4 setting for EQEI1_INDEX       */
#define SYS_GPF_MFP1_PF4MFP_ECAP1_IC0       (0xDUL<<SYS_GPF_MFP1_PF4MFP_Pos)    /*!< GPF_MFP1 PF4 setting for ECAP1_IC0         */
#define SYS_GPF_MFP1_PF4MFP_UTCPD0_VBSRCEN  (0x11UL<<SYS_GPF_MFP1_PF4MFP_Pos)   /*!< GPF_MFP1 PF4 setting for UTCPD0_VBSRCEN    */

/* PF.5 MFP */
#define SYS_GPF_MFP1_PF5MFP_GPIO            (0x0UL<<SYS_GPF_MFP1_PF5MFP_Pos)    /*!< GPF_MFP1 PF5 setting for GPIO              */
#define SYS_GPF_MFP1_PF5MFP_UART2_RXD       (0x2UL<<SYS_GPF_MFP1_PF5MFP_Pos)    /*!< GPF_MFP1 PF5 setting for UART2_RXD         */
#define SYS_GPF_MFP1_PF5MFP_UART2_nCTS      (0x4UL<<SYS_GPF_MFP1_PF5MFP_Pos)    /*!< GPF_MFP1 PF5 setting for UART2_nCTS        */
#define SYS_GPF_MFP1_PF5MFP_EPWM0_CH0       (0x7UL<<SYS_GPF_MFP1_PF5MFP_Pos)    /*!< GPF_MFP1 PF5 setting for EPWM0_CH0         */
#define SYS_GPF_MFP1_PF5MFP_PWM0_CH4        (0x8UL<<SYS_GPF_MFP1_PF5MFP_Pos)    /*!< GPF_MFP1 PF5 setting for PWM0_CH4          */
#define SYS_GPF_MFP1_PF5MFP_EPWM0_SYNC_OUT  (0x9UL<<SYS_GPF_MFP1_PF5MFP_Pos)    /*!< GPF_MFP1 PF5 setting for EPWM0_SYNC_OUT    */
#define SYS_GPF_MFP1_PF5MFP_X32_IN          (0xAUL<<SYS_GPF_MFP1_PF5MFP_Pos)    /*!< GPF_MFP1 PF5 setting for X32_IN            */
#define SYS_GPF_MFP1_PF5MFP_EADC0_ST        (0xBUL<<SYS_GPF_MFP1_PF5MFP_Pos)    /*!< GPF_MFP1 PF5 setting for EADC0_ST          */
#define SYS_GPF_MFP1_PF5MFP_LPADC0_ST       (0xBUL<<SYS_GPF_MFP1_PF5MFP_Pos)    /*!< GPC_MFP1 PF5 setting for LPADC0_ST         */
#define SYS_GPF_MFP1_PF5MFP_UTCPD0_VBSNKEN  (0x11UL<<SYS_GPF_MFP1_PF5MFP_Pos)   /*!< GPF_MFP1 PF5 setting for UTCPD0_VBSNKEN    */

/* PF.6 MFP */
#define SYS_GPF_MFP1_PF6MFP_GPIO            (0x0UL<<SYS_GPF_MFP1_PF6MFP_Pos)    /*!< GPF_MFP1 PF6 setting for GPIO              */
#define SYS_GPF_MFP1_PF6MFP_EBI_ADR19       (0x2UL<<SYS_GPF_MFP1_PF6MFP_Pos)    /*!< GPF_MFP1 PF6 setting for EBI_ADR19         */
#define SYS_GPF_MFP1_PF6MFP_SPI0_MOSI       (0x5UL<<SYS_GPF_MFP1_PF6MFP_Pos)    /*!< GPF_MFP1 PF6 setting for SPI0_MOSI         */
#define SYS_GPF_MFP1_PF6MFP_UART4_RXD       (0x6UL<<SYS_GPF_MFP1_PF6MFP_Pos)    /*!< GPF_MFP1 PF6 setting for UART4_RXD         */
#define SYS_GPF_MFP1_PF6MFP_EBI_nCS0        (0x7UL<<SYS_GPF_MFP1_PF6MFP_Pos)    /*!< GPF_MFP1 PF6 setting for EBI_nCS0          */
#define SYS_GPF_MFP1_PF6MFP_EPWM1_BRAKE0    (0x9UL<<SYS_GPF_MFP1_PF6MFP_Pos)    /*!< GPF_MFP1 PF6 setting for EPWM1_BRAKE0      */
#define SYS_GPF_MFP1_PF6MFP_TAMPER0         (0xAUL<<SYS_GPF_MFP1_PF6MFP_Pos)    /*!< GPF_MFP1 PF6 setting for TAMPER0           */
#define SYS_GPF_MFP1_PF6MFP_EPWM0_BRAKE0    (0xBUL<<SYS_GPF_MFP1_PF6MFP_Pos)    /*!< GPF_MFP1 PF6 setting for EPWM0_BRAKE0      */
#define SYS_GPF_MFP1_PF6MFP_EPWM0_CH4       (0xCUL<<SYS_GPF_MFP1_PF6MFP_Pos)    /*!< GPF_MFP1 PF6 setting for EPWM0_CH4         */
#define SYS_GPF_MFP1_PF6MFP_PWM1_BRAKE0     (0xDUL<<SYS_GPF_MFP1_PF6MFP_Pos)    /*!< GPF_MFP1 PF6 setting for PWM1_BRAKE0       */
#define SYS_GPF_MFP1_PF6MFP_PWM0_BRAKE0     (0xEUL<<SYS_GPF_MFP1_PF6MFP_Pos)    /*!< GPF_MFP1 PF6 setting for PWM0_BRAKE0       */
#define SYS_GPF_MFP1_PF6MFP_CLKO            (0xFUL<<SYS_GPF_MFP1_PF6MFP_Pos)    /*!< GPF_MFP1 PF6 setting for CLKO              */

/* PF.7 MFP */
#define SYS_GPF_MFP1_PF7MFP_GPIO            (0x0UL<<SYS_GPF_MFP1_PF7MFP_Pos)    /*!< GPF_MFP1 PF7 setting for GPIO              */
#define SYS_GPF_MFP1_PF7MFP_EBI_ADR18       (0x2UL<<SYS_GPF_MFP1_PF7MFP_Pos)    /*!< GPF_MFP1 PF7 setting for EBI_ADR18         */
#define SYS_GPF_MFP1_PF7MFP_SPI0_MISO       (0x5UL<<SYS_GPF_MFP1_PF7MFP_Pos)    /*!< GPF_MFP1 PF7 setting for SPI0_MISO         */
#define SYS_GPF_MFP1_PF7MFP_UART4_TXD       (0x6UL<<SYS_GPF_MFP1_PF7MFP_Pos)    /*!< GPF_MFP1 PF7 setting for UART4_TXD         */
#define SYS_GPF_MFP1_PF7MFP_TAMPER1         (0xAUL<<SYS_GPF_MFP1_PF7MFP_Pos)    /*!< GPF_MFP1 PF7 setting for TAMPER1           */
#define SYS_GPF_MFP1_PF7MFP_TM3             (0xEUL<<SYS_GPF_MFP1_PF7MFP_Pos)    /*!< GPF_MFP1 PF7 setting for TM3               */
#define SYS_GPF_MFP1_PF7MFP_INT5            (0xFUL<<SYS_GPF_MFP1_PF7MFP_Pos)    /*!< GPF_MFP1 PF7 setting for INT5              */

/* PF.8 MFP */
#define SYS_GPF_MFP2_PF8MFP_GPIO            (0x0UL<<SYS_GPF_MFP2_PF8MFP_Pos)    /*!< GPF_MFP2 PF8 setting for GPIO              */
#define SYS_GPF_MFP2_PF8MFP_EBI_ADR17       (0x2UL<<SYS_GPF_MFP2_PF8MFP_Pos)    /*!< GPF_MFP2 PF8 setting for EBI_ADR17         */
#define SYS_GPF_MFP2_PF8MFP_SPI0_CLK        (0x5UL<<SYS_GPF_MFP2_PF8MFP_Pos)    /*!< GPF_MFP2 PF8 setting for SPI0_CLK          */
#define SYS_GPF_MFP2_PF8MFP_UART5_nCTS      (0x6UL<<SYS_GPF_MFP2_PF8MFP_Pos)    /*!< GPF_MFP2 PF8 setting for UART5_nCTS        */
#define SYS_GPF_MFP2_PF8MFP_CANFD1_RXD      (0x8UL<<SYS_GPF_MFP2_PF8MFP_Pos)    /*!< GPF_MFP2 PF8 setting for CANFD1_RXD        */
#define SYS_GPF_MFP2_PF8MFP_TAMPER2         (0xAUL<<SYS_GPF_MFP2_PF8MFP_Pos)    /*!< GPF_MFP2 PF8 setting for TAMPER2           */

/* PF.9 MFP */
#define SYS_GPF_MFP2_PF9MFP_GPIO            (0x0UL<<SYS_GPF_MFP2_PF9MFP_Pos)    /*!< GPF_MFP2 PF9 setting for GPIO              */
#define SYS_GPF_MFP2_PF9MFP_EBI_ADR16       (0x2UL<<SYS_GPF_MFP2_PF9MFP_Pos)    /*!< GPF_MFP2 PF9 setting for EBI_ADR16         */
#define SYS_GPF_MFP2_PF9MFP_SPI0_SS         (0x5UL<<SYS_GPF_MFP2_PF9MFP_Pos)    /*!< GPF_MFP2 PF9 setting for SPI0_SS           */
#define SYS_GPF_MFP2_PF9MFP_UART5_nRTS      (0x6UL<<SYS_GPF_MFP2_PF9MFP_Pos)    /*!< GPF_MFP2 PF9 setting for UART5_nRTS        */
#define SYS_GPF_MFP2_PF9MFP_CANFD1_TXD      (0x8UL<<SYS_GPF_MFP2_PF9MFP_Pos)    /*!< GPF_MFP2 PF9 setting for CANFD1_TXD        */

/* PF.10 MFP */
#define SYS_GPF_MFP2_PF10MFP_GPIO           (0x0UL<<SYS_GPF_MFP2_PF10MFP_Pos)   /*!< GPF_MFP2 PF10 setting for GPIO             */
#define SYS_GPF_MFP2_PF10MFP_EBI_ADR15      (0x2UL<<SYS_GPF_MFP2_PF10MFP_Pos)   /*!< GPF_MFP2 PF10 setting for EBI_ADR15        */
#define SYS_GPF_MFP2_PF10MFP_SPI0_I2SMCLK   (0x5UL<<SYS_GPF_MFP2_PF10MFP_Pos)   /*!< GPF_MFP2 PF10 setting for SPI0_I2SMCLK     */
#define SYS_GPF_MFP2_PF10MFP_UART5_RXD      (0x6UL<<SYS_GPF_MFP2_PF10MFP_Pos)   /*!< GPF_MFP2 PF10 setting for UART5_RXD        */

/* PF.11 MFP */
#define SYS_GPF_MFP2_PF11MFP_GPIO           (0x0UL<<SYS_GPF_MFP2_PF11MFP_Pos)   /*!< GPF_MFP2 PF11 setting for GPIO             */
#define SYS_GPF_MFP2_PF11MFP_EBI_ADR14      (0x2UL<<SYS_GPF_MFP2_PF11MFP_Pos)   /*!< GPF_MFP2 PF11 setting for EBI_ADR14        */
#define SYS_GPF_MFP2_PF11MFP_SPI2_MOSI      (0x3UL<<SYS_GPF_MFP2_PF11MFP_Pos)   /*!< GPF_MFP2 PF11 setting for SPI2_MOSI        */
#define SYS_GPF_MFP2_PF11MFP_UART5_TXD      (0x6UL<<SYS_GPF_MFP2_PF11MFP_Pos)   /*!< GPF_MFP2 PF11 setting for UART5_TXD        */
#define SYS_GPF_MFP2_PF11MFP_TM3            (0xDUL<<SYS_GPF_MFP2_PF11MFP_Pos)   /*!< GPF_MFP2 PF11 setting for TM3              */

/* PG.2 MFP */
#define SYS_GPG_MFP0_PG2MFP_GPIO            (0x0UL<<SYS_GPG_MFP0_PG2MFP_Pos)    /*!< GPG_MFP0 PG2 setting for GPIO              */
#define SYS_GPG_MFP0_PG2MFP_EBI_ADR11       (0x2UL<<SYS_GPG_MFP0_PG2MFP_Pos)    /*!< GPG_MFP0 PG2 setting for EBI_ADR11         */
#define SYS_GPG_MFP0_PG2MFP_SPI2_SS         (0x3UL<<SYS_GPG_MFP0_PG2MFP_Pos)    /*!< GPG_MFP0 PG2 setting for SPI2_SS           */
#define SYS_GPG_MFP0_PG2MFP_I2C0_SMBAL      (0x4UL<<SYS_GPG_MFP0_PG2MFP_Pos)    /*!< GPG_MFP0 PG2 setting for I2C0_SMBAL        */
#define SYS_GPG_MFP0_PG2MFP_I2C1_SCL        (0x5UL<<SYS_GPG_MFP0_PG2MFP_Pos)    /*!< GPG_MFP0 PG2 setting for I2C1_SCL          */
#define SYS_GPG_MFP0_PG2MFP_I2C3_SMBAL      (0x9UL<<SYS_GPG_MFP0_PG2MFP_Pos)    /*!< GPG_MFP0 PG2 setting for I2C3_SMBAL        */
#define SYS_GPG_MFP0_PG2MFP_TM0             (0xDUL<<SYS_GPG_MFP0_PG2MFP_Pos)    /*!< GPG_MFP0 PG2 setting for TM0               */
#define SYS_GPG_MFP0_PG2MFP_LPTM0           (0x17UL<<SYS_GPG_MFP0_PG2MFP_Pos)   /*!< GPG_MFP0 PG2 setting for LPTM0             */

/* PG.3 MFP */
#define SYS_GPG_MFP0_PG3MFP_GPIO            (0x0UL<<SYS_GPG_MFP0_PG3MFP_Pos)    /*!< GPG_MFP0 PG3 setting for GPIO              */
#define SYS_GPG_MFP0_PG3MFP_EBI_ADR12       (0x2UL<<SYS_GPG_MFP0_PG3MFP_Pos)    /*!< GPG_MFP0 PG3 setting for EBI_ADR12         */
#define SYS_GPG_MFP0_PG3MFP_SPI2_CLK        (0x3UL<<SYS_GPG_MFP0_PG3MFP_Pos)    /*!< GPG_MFP0 PG3 setting for SPI2_CLK          */
#define SYS_GPG_MFP0_PG3MFP_I2C0_SMBSUS     (0x4UL<<SYS_GPG_MFP0_PG3MFP_Pos)    /*!< GPG_MFP0 PG3 setting for I2C0_SMBSUS       */
#define SYS_GPG_MFP0_PG3MFP_I2C1_SDA        (0x5UL<<SYS_GPG_MFP0_PG3MFP_Pos)    /*!< GPG_MFP0 PG3 setting for I2C1_SDA          */
#define SYS_GPG_MFP0_PG3MFP_I2C3_SMBSUS     (0x9UL<<SYS_GPG_MFP0_PG3MFP_Pos)    /*!< GPG_MFP0 PG3 setting for I2C3_SMBSUS       */
#define SYS_GPG_MFP0_PG3MFP_TM1             (0xDUL<<SYS_GPG_MFP0_PG3MFP_Pos)    /*!< GPG_MFP0 PG3 setting for TM1               */
#define SYS_GPG_MFP0_PG3MFP_LPTM1           (0x17UL<<SYS_GPG_MFP0_PG3MFP_Pos)   /*!< GPG_MFP0 PG3 setting for LPTM1             */

/* PG.4 MFP */
#define SYS_GPG_MFP1_PG4MFP_GPIO            (0x0UL<<SYS_GPG_MFP1_PG4MFP_Pos)    /*!< GPG_MFP1 PG4 setting for GPIO              */
#define SYS_GPG_MFP1_PG4MFP_EBI_ADR13       (0x2UL<<SYS_GPG_MFP1_PG4MFP_Pos)    /*!< GPG_MFP1 PG4 setting for EBI_ADR13         */
#define SYS_GPG_MFP1_PG4MFP_SPI2_MISO       (0x3UL<<SYS_GPG_MFP1_PG4MFP_Pos)    /*!< GPG_MFP1 PG4 setting for SPI2_MISO         */
#define SYS_GPG_MFP1_PG4MFP_TM2             (0xDUL<<SYS_GPG_MFP1_PG4MFP_Pos)    /*!< GPG_MFP1 PG4 setting for TM2               */

/* PG.9 MFP */
#define SYS_GPG_MFP2_PG9MFP_GPIO            (0x0UL<<SYS_GPG_MFP2_PG9MFP_Pos)    /*!< GPG_MFP2 PG9 setting for GPIO              */
#define SYS_GPG_MFP2_PG9MFP_EBI_AD0         (0x2UL<<SYS_GPG_MFP2_PG9MFP_Pos)    /*!< GPG_MFP2 PG9 setting for EBI_AD0           */
#define SYS_GPG_MFP2_PG9MFP_PWM0_CH5        (0xCUL<<SYS_GPG_MFP2_PG9MFP_Pos)    /*!< GPG_MFP2 PG9 setting for PWM0_CH5          */

/* PG.10 MFP */
#define SYS_GPG_MFP2_PG10MFP_GPIO           (0x0UL<<SYS_GPG_MFP2_PG10MFP_Pos)   /*!< GPG_MFP2 PG10 setting for GPIO             */
#define SYS_GPG_MFP2_PG10MFP_EBI_AD1        (0x2UL<<SYS_GPG_MFP2_PG10MFP_Pos)   /*!< GPG_MFP2 PG10 setting for EBI_AD1          */
#define SYS_GPG_MFP2_PG10MFP_PWM0_CH4       (0xCUL<<SYS_GPG_MFP2_PG10MFP_Pos)   /*!< GPG_MFP2 PG10 setting for PWM0_CH4         */

/* PG.11 MFP */
#define SYS_GPG_MFP2_PG11MFP_GPIO           (0x0UL<<SYS_GPG_MFP2_PG11MFP_Pos)   /*!< GPG_MFP2 PG11 setting for GPIO             */
#define SYS_GPG_MFP2_PG11MFP_EBI_AD2        (0x2UL<<SYS_GPG_MFP2_PG11MFP_Pos)   /*!< GPG_MFP2 PG11 setting for EBI_AD2          */
#define SYS_GPG_MFP2_PG11MFP_UART7_TXD      (0x6UL<<SYS_GPG_MFP2_PG11MFP_Pos)   /*!< GPG_MFP2 PG11 setting for UART7_TXD        */
#define SYS_GPG_MFP2_PG11MFP_PWM0_CH3       (0xCUL<<SYS_GPG_MFP2_PG11MFP_Pos)   /*!< GPG_MFP2 PG11 setting for PWM0_CH3         */

/* PG.12 MFP */
#define SYS_GPG_MFP3_PG12MFP_GPIO           (0x0UL<<SYS_GPG_MFP3_PG12MFP_Pos)   /*!< GPG_MFP3 PG12 setting for GPIO             */
#define SYS_GPG_MFP3_PG12MFP_EBI_AD3        (0x2UL<<SYS_GPG_MFP3_PG12MFP_Pos)   /*!< GPG_MFP3 PG12 setting for EBI_AD3          */
#define SYS_GPG_MFP3_PG12MFP_UART7_RXD      (0x6UL<<SYS_GPG_MFP3_PG12MFP_Pos)   /*!< GPG_MFP3 PG12 setting for UART7_RXD        */
#define SYS_GPG_MFP3_PG12MFP_PWM0_CH2       (0xCUL<<SYS_GPG_MFP3_PG12MFP_Pos)   /*!< GPG_MFP3 PG12 setting for PWM0_CH2         */

/* PG.13 MFP */
#define SYS_GPG_MFP3_PG13MFP_GPIO           (0x0UL<<SYS_GPG_MFP3_PG13MFP_Pos)   /*!< GPG_MFP3 PG13 setting for GPIO             */
#define SYS_GPG_MFP3_PG13MFP_EBI_AD4        (0x2UL<<SYS_GPG_MFP3_PG13MFP_Pos)   /*!< GPG_MFP3 PG13 setting for EBI_AD4          */
#define SYS_GPG_MFP3_PG13MFP_UART6_TXD      (0x6UL<<SYS_GPG_MFP3_PG13MFP_Pos)   /*!< GPG_MFP3 PG13 setting for UART6_TXD        */
#define SYS_GPG_MFP3_PG13MFP_PWM0_CH1       (0xCUL<<SYS_GPG_MFP3_PG13MFP_Pos)   /*!< GPG_MFP3 PG13 setting for PWM0_CH1         */

/* PG.14 MFP */
#define SYS_GPG_MFP3_PG14MFP_GPIO           (0x0UL<<SYS_GPG_MFP3_PG14MFP_Pos)   /*!< GPG_MFP3 PG14 setting for GPIO             */
#define SYS_GPG_MFP3_PG14MFP_EBI_AD5        (0x2UL<<SYS_GPG_MFP3_PG14MFP_Pos)   /*!< GPG_MFP3 PG14 setting for EBI_AD5          */
#define SYS_GPG_MFP3_PG14MFP_UART6_RXD      (0x6UL<<SYS_GPG_MFP3_PG14MFP_Pos)   /*!< GPG_MFP3 PG14 setting for UART6_RXD        */
#define SYS_GPG_MFP3_PG14MFP_PWM0_CH0       (0xCUL<<SYS_GPG_MFP3_PG14MFP_Pos)   /*!< GPG_MFP3 PG14 setting for PWM0_CH0         */

/* PG.15 MFP */
#define SYS_GPG_MFP3_PG15MFP_GPIO           (0x0UL<<SYS_GPG_MFP3_PG15MFP_Pos)   /*!< GPG_MFP3 PG15 setting for GPIO             */
#define SYS_GPG_MFP3_PG15MFP_CLKO           (0xEUL<<SYS_GPG_MFP3_PG15MFP_Pos)   /*!< GPG_MFP3 PG15 setting for CLKO             */
#define SYS_GPG_MFP3_PG15MFP_EADC0_ST       (0xFUL<<SYS_GPG_MFP3_PG15MFP_Pos)   /*!< GPG_MFP3 PG15 setting for EADC0_ST         */
#define SYS_GPG_MFP3_PG15MFP_LPADC0_ST      (0xFUL<<SYS_GPG_MFP3_PG15MFP_Pos)   /*!< GPG_MFP3 PG15 setting for LPADC0_ST        */
#define SYS_GPG_MFP3_PG15MFP_TK_SE          (0x10UL<<SYS_GPG_MFP3_PG15MFP_Pos)  /*!< GPG_MFP3 PG15 setting for TK_SE            */

/* PH.4 MFP */
#define SYS_GPH_MFP1_PH4MFP_GPIO            (0x0UL<<SYS_GPH_MFP1_PH4MFP_Pos)    /*!< GPH_MFP1 PH4 setting for GPIO              */
#define SYS_GPH_MFP1_PH4MFP_EBI_ADR3        (0x2UL<<SYS_GPH_MFP1_PH4MFP_Pos)    /*!< GPH_MFP1 PH4 setting for EBI_ADR3          */
#define SYS_GPH_MFP1_PH4MFP_SPI1_MISO       (0x3UL<<SYS_GPH_MFP1_PH4MFP_Pos)    /*!< GPH_MFP1 PH4 setting for SPI1_MISO         */
#define SYS_GPH_MFP1_PH4MFP_UART7_nRTS      (0x4UL<<SYS_GPH_MFP1_PH4MFP_Pos)    /*!< GPH_MFP1 PH4 setting for UART7_nRTS        */
#define SYS_GPH_MFP1_PH4MFP_UART6_TXD       (0x5UL<<SYS_GPH_MFP1_PH4MFP_Pos)    /*!< GPH_MFP1 PH4 setting for UART6_TXD         */

/* PH.5 MFP */
#define SYS_GPH_MFP1_PH5MFP_GPIO            (0x0UL<<SYS_GPH_MFP1_PH5MFP_Pos)    /*!< GPH_MFP1 PH5 setting for GPIO              */
#define SYS_GPH_MFP1_PH5MFP_EBI_ADR2        (0x2UL<<SYS_GPH_MFP1_PH5MFP_Pos)    /*!< GPH_MFP1 PH5 setting for EBI_ADR2          */
#define SYS_GPH_MFP1_PH5MFP_SPI1_MOSI       (0x3UL<<SYS_GPH_MFP1_PH5MFP_Pos)    /*!< GPH_MFP1 PH5 setting for SPI1_MOSI         */
#define SYS_GPH_MFP1_PH5MFP_UART7_nCTS      (0x4UL<<SYS_GPH_MFP1_PH5MFP_Pos)    /*!< GPH_MFP1 PH5 setting for UART7_nCTS        */
#define SYS_GPH_MFP1_PH5MFP_UART6_RXD       (0x5UL<<SYS_GPH_MFP1_PH5MFP_Pos)    /*!< GPH_MFP1 PH5 setting for UART6_RXD         */

/* PH.6 MFP */
#define SYS_GPH_MFP1_PH6MFP_GPIO            (0x0UL<<SYS_GPH_MFP1_PH6MFP_Pos)    /*!< GPH_MFP1 PH6 setting for GPIO              */
#define SYS_GPH_MFP1_PH6MFP_EBI_ADR1        (0x2UL<<SYS_GPH_MFP1_PH6MFP_Pos)    /*!< GPH_MFP1 PH6 setting for EBI_ADR1          */
#define SYS_GPH_MFP1_PH6MFP_SPI1_CLK        (0x3UL<<SYS_GPH_MFP1_PH6MFP_Pos)    /*!< GPH_MFP1 PH6 setting for SPI1_CLK          */
#define SYS_GPH_MFP1_PH6MFP_UART7_TXD       (0x4UL<<SYS_GPH_MFP1_PH6MFP_Pos)    /*!< GPH_MFP1 PH6 setting for UART7_TXD         */

/* PH.7 MFP */
#define SYS_GPH_MFP1_PH7MFP_GPIO            (0x0UL<<SYS_GPH_MFP1_PH7MFP_Pos)    /*!< GPH_MFP1 PH7 setting for GPIO              */
#define SYS_GPH_MFP1_PH7MFP_EBI_ADR0        (0x2UL<<SYS_GPH_MFP1_PH7MFP_Pos)    /*!< GPH_MFP1 PH7 setting for EBI_ADR0          */
#define SYS_GPH_MFP1_PH7MFP_SPI1_SS         (0x3UL<<SYS_GPH_MFP1_PH7MFP_Pos)    /*!< GPH_MFP1 PH7 setting for SPI1_SS           */
#define SYS_GPH_MFP1_PH7MFP_UART7_RXD       (0x4UL<<SYS_GPH_MFP1_PH7MFP_Pos)    /*!< GPH_MFP1 PH7 setting for UART7_RXD         */

/* PH.8 MFP */
#define SYS_GPH_MFP2_PH8MFP_GPIO            (0x0UL<<SYS_GPH_MFP2_PH8MFP_Pos)    /*!< GPH_MFP2 PH8 setting for GPIO              */
#define SYS_GPH_MFP2_PH8MFP_EBI_AD12        (0x2UL<<SYS_GPH_MFP2_PH8MFP_Pos)    /*!< GPH_MFP2 PH8 setting for EBI_AD12          */
#define SYS_GPH_MFP2_PH8MFP_QSPI0_CLK       (0x3UL<<SYS_GPH_MFP2_PH8MFP_Pos)    /*!< GPH_MFP2 PH8 setting for QSPI0_CLK         */
#define SYS_GPH_MFP2_PH8MFP_SPI1_CLK        (0x6UL<<SYS_GPH_MFP2_PH8MFP_Pos)    /*!< GPH_MFP2 PH8 setting for SPI1_CLK          */
#define SYS_GPH_MFP2_PH8MFP_UART3_nRTS      (0x7UL<<SYS_GPH_MFP2_PH8MFP_Pos)    /*!< GPH_MFP2 PH8 setting for UART3_nRTS        */
#define SYS_GPH_MFP2_PH8MFP_I2C1_SMBAL      (0x8UL<<SYS_GPH_MFP2_PH8MFP_Pos)    /*!< GPH_MFP2 PH8 setting for I2C1_SMBAL        */
#define SYS_GPH_MFP2_PH8MFP_I2C2_SCL        (0x9UL<<SYS_GPH_MFP2_PH8MFP_Pos)    /*!< GPH_MFP2 PH8 setting for I2C2_SCL          */
#define SYS_GPH_MFP2_PH8MFP_UART1_TXD       (0xAUL<<SYS_GPH_MFP2_PH8MFP_Pos)    /*!< GPH_MFP2 PH8 setting for UART1_TXD         */

/* PH.9 MFP */
#define SYS_GPH_MFP2_PH9MFP_GPIO            (0x0UL<<SYS_GPH_MFP2_PH9MFP_Pos)    /*!< GPH_MFP2 PH9 setting for GPIO              */
#define SYS_GPH_MFP2_PH9MFP_EBI_AD13        (0x2UL<<SYS_GPH_MFP2_PH9MFP_Pos)    /*!< GPH_MFP2 PH9 setting for EBI_AD13          */
#define SYS_GPH_MFP2_PH9MFP_QSPI0_SS        (0x3UL<<SYS_GPH_MFP2_PH9MFP_Pos)    /*!< GPH_MFP2 PH9 setting for QSPI0_SS          */
#define SYS_GPH_MFP2_PH9MFP_SPI1_SS         (0x6UL<<SYS_GPH_MFP2_PH9MFP_Pos)    /*!< GPH_MFP2 PH9 setting for SPI1_SS           */
#define SYS_GPH_MFP2_PH9MFP_UART3_nCTS      (0x7UL<<SYS_GPH_MFP2_PH9MFP_Pos)    /*!< GPH_MFP2 PH9 setting for UART3_nCTS        */
#define SYS_GPH_MFP2_PH9MFP_I2C1_SMBSUS     (0x8UL<<SYS_GPH_MFP2_PH9MFP_Pos)    /*!< GPH_MFP2 PH9 setting for I2C1_SMBSUS       */
#define SYS_GPH_MFP2_PH9MFP_I2C2_SDA        (0x9UL<<SYS_GPH_MFP2_PH9MFP_Pos)    /*!< GPH_MFP2 PH9 setting for I2C2_SDA          */
#define SYS_GPH_MFP2_PH9MFP_UART1_RXD       (0xAUL<<SYS_GPH_MFP2_PH9MFP_Pos)    /*!< GPH_MFP2 PH9 setting for UART1_RXD         */

/* PH.10 MFP */
#define SYS_GPH_MFP2_PH10MFP_GPIO           (0x0UL<<SYS_GPH_MFP2_PH10MFP_Pos)   /*!< GPH_MFP2 PH10 setting for GPIO             */
#define SYS_GPH_MFP2_PH10MFP_EBI_AD14       (0x2UL<<SYS_GPH_MFP2_PH10MFP_Pos)   /*!< GPH_MFP2 PH10 setting for EBI_AD14         */
#define SYS_GPH_MFP2_PH10MFP_QSPI0_MISO1    (0x3UL<<SYS_GPH_MFP2_PH10MFP_Pos)   /*!< GPH_MFP2 PH10 setting for QSPI0_MISO1      */
#define SYS_GPH_MFP2_PH10MFP_SPI1_I2SMCLK   (0x6UL<<SYS_GPH_MFP2_PH10MFP_Pos)   /*!< GPH_MFP2 PH10 setting for SPI1_I2SMCLK     */
#define SYS_GPH_MFP2_PH10MFP_UART4_TXD      (0x7UL<<SYS_GPH_MFP2_PH10MFP_Pos)   /*!< GPH_MFP2 PH10 setting for UART4_TXD        */
#define SYS_GPH_MFP2_PH10MFP_UART0_TXD      (0x8UL<<SYS_GPH_MFP2_PH10MFP_Pos)   /*!< GPH_MFP2 PH10 setting for UART0_TXD        */
#define SYS_GPH_MFP2_PH10MFP_LPUART0_TXD    (0x15UL<<SYS_GPH_MFP2_PH10MFP_Pos)  /*!< GPH_MFP2 PH10 setting for LPUART0_TXD      */

/* PH.11 MFP */
#define SYS_GPH_MFP2_PH11MFP_GPIO           (0x0UL<<SYS_GPH_MFP2_PH11MFP_Pos)   /*!< GPH_MFP2 PH11 setting for GPIO             */
#define SYS_GPH_MFP2_PH11MFP_EBI_AD15       (0x2UL<<SYS_GPH_MFP2_PH11MFP_Pos)   /*!< GPH_MFP2 PH11 setting for EBI_AD15         */
#define SYS_GPH_MFP2_PH11MFP_QSPI0_MOSI1    (0x3UL<<SYS_GPH_MFP2_PH11MFP_Pos)   /*!< GPH_MFP2 PH11 setting for QSPI0_MOSI1      */
#define SYS_GPH_MFP2_PH11MFP_UART4_RXD      (0x7UL<<SYS_GPH_MFP2_PH11MFP_Pos)   /*!< GPH_MFP2 PH11 setting for UART4_RXD        */
#define SYS_GPH_MFP2_PH11MFP_UART0_RXD      (0x8UL<<SYS_GPH_MFP2_PH11MFP_Pos)   /*!< GPH_MFP2 PH11 setting for UART0_RXD        */
#define SYS_GPH_MFP2_PH11MFP_EPWM0_CH5      (0xBUL<<SYS_GPH_MFP2_PH11MFP_Pos)   /*!< GPH_MFP2 PH11 setting for EPWM0_CH5        */
#define SYS_GPH_MFP2_PH11MFP_LPUART0_RXD    (0x15UL<<SYS_GPH_MFP2_PH11MFP_Pos)  /*!< GPH_MFP2 PH11 setting for LPUART0_RXD      */

#define SYS_TIMEOUT_ERR             (-1)    /*!< SYS timeout error value \hideinitializer */

/*@}*/ /* end of group SYS_EXPORTED_CONSTANTS */

#if 0

extern int32_t g_SYS_i32ErrCode;

/** @addtogroup SYS_EXPORTED_FUNCTIONS SYS Exported Functions
  @{
*/


/**
  * @brief      Clear Brown-out detector interrupt flag
  * @param      None
  * @return     None
  * @details    This macro clear Brown-out detector interrupt flag.
  * \hideinitializer
  */
#define SYS_CLEAR_BOD_INT_FLAG()        (SYS->BODCTL |= SYS_BODCTL_BODIF_Msk)

/**
  * @brief      Set Brown-out detector function to normal mode
  * @param      None
  * @return     None
  * @details    This macro set Brown-out detector to normal mode.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_CLEAR_BOD_LPM()             (SYS->BODCTL &= ~SYS_BODCTL_BODLPM_Msk)

/**
  * @brief      Disable Brown-out detector function
  * @param      None
  * @return     None
  * @details    This macro disable Brown-out detector function.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_DISABLE_BOD()               (SYS->BODCTL &= ~SYS_BODCTL_BODEN_Msk)

/**
  * @brief      Enable Brown-out detector function
  * @param      None
  * @return     None
  * @details    This macro enable Brown-out detector function.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_ENABLE_BOD()                (SYS->BODCTL |= SYS_BODCTL_BODEN_Msk)

/**
  * @brief      Get Brown-out detector interrupt flag
  * @param      None
  * @retval     0   Brown-out detect interrupt flag is not set.
  * @retval     >=1 Brown-out detect interrupt flag is set.
  * @details    This macro get Brown-out detector interrupt flag.
  * \hideinitializer
  */
#define SYS_GET_BOD_INT_FLAG()          (SYS->BODCTL & SYS_BODCTL_BODIF_Msk)

/**
  * @brief      Get Brown-out detector status
  * @param      None
  * @retval     0   System voltage is higher than BOD threshold voltage setting or BOD function is disabled.
  * @retval     >=1 System voltage is lower than BOD threshold voltage setting.
  * @details    This macro get Brown-out detector output status.
  *             If the BOD function is disabled, this function always return 0.
  * \hideinitializer
  */
#define SYS_GET_BOD_OUTPUT()            (SYS->BODCTL & SYS_BODCTL_BODOUT_Msk)

/**
  * @brief      Enable Brown-out detector interrupt function
  * @param      None
  * @return     None
  * @details    This macro enable Brown-out detector interrupt function.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_DISABLE_BOD_RST()           (SYS->BODCTL &= ~SYS_BODCTL_BODRSTEN_Msk)

/**
  * @brief      Enable Brown-out detector reset function
  * @param      None
  * @return     None
  * @details    This macro enable Brown-out detect reset function.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_ENABLE_BOD_RST()            (SYS->BODCTL |= SYS_BODCTL_BODRSTEN_Msk)

/**
  * @brief      Set Brown-out detector function low power mode
  * @param      None
  * @return     None
  * @details    This macro set Brown-out detector to low power mode.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_SET_BOD_LPM()               (SYS->BODCTL |= SYS_BODCTL_BODLPM_Msk)

/**
  * @brief      Set Brown-out detector voltage level
  * @param[in]  u32Level is Brown-out voltage level. Including :
  *             - \ref SYS_BODCTL_BODVL_3_0V
  *             - \ref SYS_BODCTL_BODVL_2_8V
  *             - \ref SYS_BODCTL_BODVL_2_6V
  *             - \ref SYS_BODCTL_BODVL_2_4V
  *             - \ref SYS_BODCTL_BODVL_2_2V
  *             - \ref SYS_BODCTL_BODVL_2_0V
  *             - \ref SYS_BODCTL_BODVL_1_8V
  *             - \ref SYS_BODCTL_BODVL_1_6V
  *             - \ref SYS_BODCTL_BODVL_1_5V
  * @return     None
  * @details    This macro set Brown-out detector voltage level.
  *             The write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_SET_BOD_LEVEL(u32Level)     (SYS->BODCTL = (SYS->BODCTL & ~SYS_BODCTL_BODVL_Msk) | (u32Level))

/**
  * @brief      Get reset source is from Brown-out detector reset
  * @param      None
  * @retval     0   Previous reset source is not from Brown-out detector reset
  * @retval     >=1 Previous reset source is from Brown-out detector reset
  * @details    This macro get previous reset source is from Brown-out detect reset or not.
  * \hideinitializer
  */
#define SYS_IS_BOD_RST()                (SYS->RSTSTS & SYS_RSTSTS_BODRF_Msk)

/**
  * @brief      Get reset source is from CPU reset
  * @param      None
  * @retval     0   Previous reset source is not from CPU reset
  * @retval     >=1 Previous reset source is from CPU reset
  * @details    This macro get previous reset source is from CPU reset.
  * \hideinitializer
  */
#define SYS_IS_CPU_RST()                (SYS->RSTSTS & SYS_RSTSTS_CPURF_Msk)

/**
  * @brief      Get reset source is from LVR Reset
  * @param      None
  * @retval     0   Previous reset source is not from Low-Voltage-Reset
  * @retval     >=1 Previous reset source is from Low-Voltage-Reset
  * @details    This macro get previous reset source is from Low-Voltage-Reset.
  * \hideinitializer
  */
#define SYS_IS_LVR_RST()                (SYS->RSTSTS & SYS_RSTSTS_LVRF_Msk)

/**
  * @brief      Get reset source is from Power-on Reset
  * @param      None
  * @retval     0   Previous reset source is not from Power-on Reset
  * @retval     >=1 Previous reset source is from Power-on Reset
  * @details    This macro get previous reset source is from Power-on Reset.
  * \hideinitializer
  */
#define SYS_IS_POR_RST()                (SYS->RSTSTS & SYS_RSTSTS_PORF_Msk)

/**
  * @brief      Get reset source is from reset pin reset
  * @param      None
  * @retval     0   Previous reset source is not from reset pin reset
  * @retval     >=1 Previous reset source is from reset pin reset
  * @details    This macro get previous reset source is from reset pin reset.
  * \hideinitializer
  */
#define SYS_IS_RSTPIN_RST()             (SYS->RSTSTS & SYS_RSTSTS_PINRF_Msk)

/**
  * @brief      Get reset source is from system reset
  * @param      None
  * @retval     0   Previous reset source is not from system reset
  * @retval     >=1 Previous reset source is from system reset
  * @details    This macro get previous reset source is from system reset.
  * \hideinitializer
  */
#define SYS_IS_SYSTEM_RST()             (SYS->RSTSTS & SYS_RSTSTS_SYSRF_Msk)

/**
  * @brief      Get reset source is from window watch dog reset
  * @param      None
  * @retval     0   Previous reset source is not from window watch dog reset
  * @retval     >=1 Previous reset source is from window watch dog reset
  * @details    This macro get previous reset source is from window watch dog reset.
  * \hideinitializer
  */
#define SYS_IS_WDT_RST()                (SYS->RSTSTS & SYS_RSTSTS_WDTRF_Msk)

/**
  * @brief      Disable Low-Voltage-Reset function
  * @param      None
  * @return     None
  * @details    This macro disable Low-Voltage-Reset function.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_DISABLE_LVR()               (SYS->BODCTL &= ~SYS_BODCTL_LVREN_Msk)

/**
  * @brief      Enable Low-Voltage-Reset function
  * @param      None
  * @return     None
  * @details    This macro enable Low-Voltage-Reset function.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_ENABLE_LVR()                (SYS->BODCTL |= SYS_BODCTL_LVREN_Msk)

/**
  * @brief      Disable Power-on Reset function
  * @param      None
  * @return     None
  * @details    This macro disable Power-on Reset function.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_DISABLE_POR()               (SYS->PORDISAN = 0x5AA5)

/**
  * @brief      Enable Power-on Reset function
  * @param      None
  * @return     None
  * @details    This macro enable Power-on Reset function.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_ENABLE_POR()               (SYS->PORDISAN = 0)

/**
  * @brief      Clear reset source flag
  * @param[in]  u32RstSrc is reset source. Including :
  *             - \ref SYS_RSTSTS_PORF_Msk
  *             - \ref SYS_RSTSTS_PINRF_Msk
  *             - \ref SYS_RSTSTS_WDTRF_Msk
  *             - \ref SYS_RSTSTS_LVRF_Msk
  *             - \ref SYS_RSTSTS_BODRF_Msk
  *             - \ref SYS_RSTSTS_SYSRF_Msk
  *             - \ref SYS_RSTSTS_HRESETRF_Msk
  *             - \ref SYS_RSTSTS_CPURF_Msk
  *             - \ref SYS_RSTSTS_CPULKRF_Msk
  * @return     None
  * @details    This macro clear reset source flag.
  * \hideinitializer
  */
#define SYS_CLEAR_RST_SOURCE(u32RstSrc) ((SYS->RSTSTS) = (u32RstSrc) )


/*---------------------------------------------------------------------------------------------------------*/
/* static inline functions                                                                                 */
/*---------------------------------------------------------------------------------------------------------*/
/* Declare these inline functions here to avoid MISRA C 2004 rule 8.1 error */
__STATIC_INLINE void SYS_UnlockReg(void);
__STATIC_INLINE void SYS_LockReg(void);

/**
  * @brief      Disable register write-protection function
  * @param      None
  * @return     None
  * @details    This function disable register write-protection function.
  *             To unlock the protected register to allow write access.
  */
__STATIC_INLINE void SYS_UnlockReg(void)
{
    do
    {
        SYS->REGLCTL = 0x59UL;
        SYS->REGLCTL = 0x16UL;
        SYS->REGLCTL = 0x88UL;
    }
    while(SYS->REGLCTL == 0UL);
}

/**
  * @brief      Enable register write-protection function
  * @param      None
  * @return     None
  * @details    This function is used to enable register write-protection function.
  *             To lock the protected register to forbid write access.
  */
__STATIC_INLINE void SYS_LockReg(void)
{
    SYS->REGLCTL = 0UL;
}


void     SYS_ClearResetSrc(uint32_t u32Src);
uint32_t SYS_GetBODStatus(void);
uint32_t SYS_GetResetSrc(void);
uint32_t SYS_IsRegLocked(void);
uint32_t SYS_ReadPDID(void);
void     SYS_ResetChip(void);
void     SYS_ResetCPU(void);
void     SYS_ResetModule(uint32_t u32ModuleIndex);
void     SYS_EnableBOD(int32_t i32Mode, uint32_t u32BODLevel);
void     SYS_DisableBOD(void);
int32_t  SYS_SetPowerLevel(uint32_t u32PowerLevel);
void     SYS_SetVRef(uint32_t u32VRefCTL);
int32_t  SYS_SetSSRAMPowerMode(uint32_t u32SRAMSel, uint32_t u32PowerMode);

/*@}*/ /* end of group SYS_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group SYS_Driver */

#endif

/*@}*/ /* end of group Standard_Driver */


#ifdef __cplusplus
}
#endif

#endif  /* __SYS_H__ */

/*** (C) COPYRIGHT 2023 Nuvoton Technology Corp. ***/
