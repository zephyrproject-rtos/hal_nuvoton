/**************************************************************************//**
 * @file     SYS.h
 * @version  V3.0
 * @brief    M3331 Series SYS Driver Header File
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (c) 2025 Nuvoton Technology Corp. All rights reserved.
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
#define PDMA0_RST           ((0UL<<24) | SYS_IPRST0_PDMA0RST_Pos)       /*!< Reset PDMA0 \hideinitializer*/
#define EBI_RST             ((0UL<<24) | SYS_IPRST0_EBIRST_Pos)         /*!< Reset EBI \hideinitializer*/
#define PDMA1_RST           ((0UL<<24) | SYS_IPRST0_PDMA1RST_Pos)       /*!< Reset PDMA1 \hideinitializer*/
#define SDH0_RST            ((0UL<<24) | SYS_IPRST0_SDH0RST_Pos)        /*!< Reset SDH0 \hideinitializer */
#define CRC_RST             ((0UL<<24) | SYS_IPRST0_CRCRST_Pos)         /*!< Reset CRC \hideinitializer */
#define CANFD0_RST          ((0UL<<24) | SYS_IPRST0_CANFD0RST_Pos)      /*!< Reset CANFD0 \hideinitializer */
#define CANFD1_RST          ((0UL<<24) | SYS_IPRST0_CANFD1RST_Pos)      /*!< Reset CANFD1 \hideinitializer */
#define HSUSBD_RST          ((0UL<<24) | SYS_IPRST0_HSUSBDRST_Pos)      /*!< Reset HSUSBD \hideinitializer */
#define HSUSBH_RST          ((0UL<<24) | SYS_IPRST0_HSUSBHRST_Pos)      /*!< Reset HSUSBH \hideinitializer */
#define PDCI_RST            ((0UL<<24) | SYS_IPRST0_PDCIRST_Pos)        /*!< Reset PDCI \hideinitializer */

#define GPIO_RST            ((4UL<<24) | SYS_IPRST1_GPIORST_Pos)        /*!< Reset GPIO \hideinitializer */
#define TMR0_RST            ((4UL<<24) | SYS_IPRST1_TMR0RST_Pos)        /*!< Reset TMR0 \hideinitializer */
#define TMR1_RST            ((4UL<<24) | SYS_IPRST1_TMR1RST_Pos)        /*!< Reset TMR1 \hideinitializer */
#define TMR2_RST            ((4UL<<24) | SYS_IPRST1_TMR2RST_Pos)        /*!< Reset TMR2 \hideinitializer */
#define TMR3_RST            ((4UL<<24) | SYS_IPRST1_TMR3RST_Pos)        /*!< Reset TMR3 \hideinitializer */
#define ACMP01_RST          ((4UL<<24) | SYS_IPRST1_ACMP01RST_Pos)      /*!< Reset ACMP01 \hideinitializer */
#define I2C0_RST            ((4UL<<24) | SYS_IPRST1_I2C0RST_Pos)        /*!< Reset I2C0 \hideinitializer */
#define I2C1_RST            ((4UL<<24) | SYS_IPRST1_I2C1RST_Pos)        /*!< Reset I2C1 \hideinitializer */
#define I2C2_RST            ((4UL<<24) | SYS_IPRST1_I2C2RST_Pos)        /*!< Reset I2C2 \hideinitializer */
#define I3C0_RST            ((4UL<<24) | SYS_IPRST1_I3C0RST_Pos)        /*!< Reset I3C0 \hideinitializer */
#define QSPI0_RST           ((4UL<<24) | SYS_IPRST1_QSPI0RST_Pos)       /*!< Reset QSPI0 \hideinitializer */
#define SPI0_RST            ((4UL<<24) | SYS_IPRST1_SPI0RST_Pos)        /*!< Reset SPI0 \hideinitializer */
#define SPI1_RST            ((4UL<<24) | SYS_IPRST1_SPI1RST_Pos)        /*!< Reset SPI1 \hideinitializer */
#define SPI2_RST            ((4UL<<24) | SYS_IPRST1_SPI2RST_Pos)        /*!< Reset SPI2 \hideinitializer */
#define UART0_RST           ((4UL<<24) | SYS_IPRST1_UART0RST_Pos)       /*!< Reset UART0 \hideinitializer */
#define UART1_RST           ((4UL<<24) | SYS_IPRST1_UART1RST_Pos)       /*!< Reset UART1 \hideinitializer */
#define UART2_RST           ((4UL<<24) | SYS_IPRST1_UART2RST_Pos)       /*!< Reset UART2 \hideinitializer */
#define UART3_RST           ((4UL<<24) | SYS_IPRST1_UART3RST_Pos)       /*!< Reset UART3 \hideinitializer */
#define UART4_RST           ((4UL<<24) | SYS_IPRST1_UART4RST_Pos)       /*!< Reset UART4 \hideinitializer */
#define WWDT0_RST           ((4UL<<24) | SYS_IPRST1_WWDT0RST_Pos)       /*!< Reset WWDT0 \hideinitializer */
#define WWDT1_RST           ((4UL<<24) | SYS_IPRST1_WWDT1RST_Pos)       /*!< Reset WWDT1 \hideinitializer */
#define EADC0_RST           ((4UL<<24) | SYS_IPRST1_EADC0RST_Pos)       /*!< Reset EADC0 \hideinitializer */
#define I2S0_RST            ((4UL<<24) | SYS_IPRST1_I2S0RST_Pos)        /*!< Reset I2S0 \hideinitializer */
#define HSOTG_RST           ((4UL<<24) | SYS_IPRST1_HSOTGRST_Pos)       /*!< Reset HSOTG \hideinitializer */

#define USCI0_RST           ((8UL<<24) | SYS_IPRST2_USCI0RST_Pos)       /*!< Reset USCI0 \hideinitializer */
#define USCI1_RST           ((8UL<<24) | SYS_IPRST2_USCI1RST_Pos)       /*!< Reset USCI1 \hideinitializer */
#define EPWM0_RST           ((8UL<<24) | SYS_IPRST2_EPWM0RST_Pos)       /*!< Reset EPWM0 \hideinitializer */
#define EPWM1_RST           ((8UL<<24) | SYS_IPRST2_EPWM1RST_Pos)       /*!< Reset EPWM1 \hideinitializer */
#define BPWM0_RST           ((8UL<<24) | SYS_IPRST2_BPWM0RST_Pos)       /*!< Reset BPWM0 \hideinitializer */
#define BPWM1_RST           ((8UL<<24) | SYS_IPRST2_BPWM1RST_Pos)       /*!< Reset BPWM1 \hideinitializer */
#define EQEI0_RST           ((8UL<<24) | SYS_IPRST2_EQEI0RST_Pos)       /*!< Reset EQEI0 \hideinitializer */
#define ECAP0_RST           ((8UL<<24) | SYS_IPRST2_ECAP0RST_Pos)       /*!< Reset ECAP0 \hideinitializer */
#define BPWM2_RST           ((8UL<<24) | SYS_IPRST2_BPWM2RST_Pos)       /*!< Reset BPWM2 \hideinitializer */
#define BPWM3_RST           ((8UL<<24) | SYS_IPRST2_BPWM3RST_Pos)       /*!< Reset BPWM3 \hideinitializer */
#define BPWM4_RST           ((8UL<<24) | SYS_IPRST2_BPWM4RST_Pos)       /*!< Reset BPWM4 \hideinitializer */
#define BPWM5_RST           ((8UL<<24) | SYS_IPRST2_BPWM5RST_Pos)       /*!< Reset BPWM5 \hideinitializer */

#define LLSI0_RST           ((0x18UL<<24) | SYS_IPRST3_LLSI0RST_Pos)    /*!< Reset LLSI0 \hideinitializer */
#define LLSI1_RST           ((0x18UL<<24) | SYS_IPRST3_LLSI1RST_Pos)    /*!< Reset LLSI1 \hideinitializer */
#define LLSI2_RST           ((0x18UL<<24) | SYS_IPRST3_LLSI2RST_Pos)    /*!< Reset LLSI2 \hideinitializer */
#define LLSI3_RST           ((0x18UL<<24) | SYS_IPRST3_LLSI3RST_Pos)    /*!< Reset LLSI3 \hideinitializer */
#define LLSI4_RST           ((0x18UL<<24) | SYS_IPRST3_LLSI4RST_Pos)    /*!< Reset LLSI4 \hideinitializer */
#define LLSI5_RST           ((0x18UL<<24) | SYS_IPRST3_LLSI5RST_Pos)    /*!< Reset LLSI5 \hideinitializer */
#define LLSI6_RST           ((0x18UL<<24) | SYS_IPRST3_LLSI6RST_Pos)    /*!< Reset LLSI6 \hideinitializer */
#define LLSI7_RST           ((0x18UL<<24) | SYS_IPRST3_LLSI7RST_Pos)    /*!< Reset LLSI7 \hideinitializer */
#define LLSI8_RST           ((0x18UL<<24) | SYS_IPRST3_LLSI8RST_Pos)    /*!< Reset LLSI8 \hideinitializer */
#define LLSI9_RST           ((0x18UL<<24) | SYS_IPRST3_LLSI9RST_Pos)    /*!< Reset LLSI9 \hideinitializer */
#define ELLSI0_RST          ((0x18UL<<24) | SYS_IPRST3_ELLSI0RST_Pos)   /*!< Reset ELLSI0 \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  Brown Out Detector Threshold Voltage Selection constant definitions.                                   */
/*---------------------------------------------------------------------------------------------------------*/
#define SYS_BODCTL_BOD_RST_EN           (1UL << SYS_BODCTL_BODRSTEN_Pos)    /*!< Brown-out Reset Enable \hideinitializer */
#define SYS_BODCTL_BOD_INTERRUPT_EN     (0UL << SYS_BODCTL_BODRSTEN_Pos)    /*!< Brown-out Interrupt Enable \hideinitializer */
#define SYS_BODCTL_BODVL_3_0V           (0xFUL << SYS_BODCTL_BODVL_Pos)     /*!< Setting Brown Out Detector Threshold Voltage as 3.0V \hideinitializer */
#define SYS_BODCTL_BODVL_2_8V           (0xEUL << SYS_BODCTL_BODVL_Pos)     /*!< Setting Brown Out Detector Threshold Voltage as 2.8V \hideinitializer */
#define SYS_BODCTL_BODVL_2_6V           (0xDUL << SYS_BODCTL_BODVL_Pos)     /*!< Setting Brown Out Detector Threshold Voltage as 2.6V \hideinitializer */
#define SYS_BODCTL_BODVL_2_4V           (0xCUL << SYS_BODCTL_BODVL_Pos)     /*!< Setting Brown Out Detector Threshold Voltage as 2.4V \hideinitializer */
#define SYS_BODCTL_BODVL_2_2V           (0xBUL << SYS_BODCTL_BODVL_Pos)     /*!< Setting Brown Out Detector Threshold Voltage as 2.2V \hideinitializer */
#define SYS_BODCTL_BODVL_2_0V           (0xAUL << SYS_BODCTL_BODVL_Pos)     /*!< Setting Brown Out Detector Threshold Voltage as 2.0V \hideinitializer */
#define SYS_BODCTL_BODVL_1_8V           (0x9UL << SYS_BODCTL_BODVL_Pos)     /*!< Setting Brown Out Detector Threshold Voltage as 1.8V \hideinitializer */
#define SYS_BODCTL_BODVL_1_6V           (0x8UL << SYS_BODCTL_BODVL_Pos)     /*!< Setting Brown Out Detector Threshold Voltage as 1.6V \hideinitializer */
#define SYS_BODCTL_BODVL_1_5V           (0x0UL << SYS_BODCTL_BODVL_Pos)     /*!< Setting Brown Out Detector Threshold Voltage as 1.5V \hideinitializer */


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
#define SYS_USBPHY_HSUSBROLE_STD_USBD   (0x0UL << SYS_USBPHY_HSUSBROLE_Pos) /*!<  Standard HSUSB device \hideinitializer */
#define SYS_USBPHY_HSUSBROLE_STD_USBH   (0x1UL << SYS_USBPHY_HSUSBROLE_Pos) /*!<  Standard HSUSB host \hideinitializer */
#define SYS_USBPHY_HSUSBROLE_ID_DEPH    (0x2UL << SYS_USBPHY_HSUSBROLE_Pos) /*!<  ID dependent device \hideinitializer */
#define SYS_USBPHY_HSUSBROLE_ON_THE_GO  (0x3UL << SYS_USBPHY_HSUSBROLE_Pos) /*!<  On-The-Go device \hideinitializer */


/*---------------------------------------------------------------------------------------------------------*/
/*  PLCTL constant definitions. (Write-Protection Register)                                                */
/*---------------------------------------------------------------------------------------------------------*/
#define SYS_PLCTL_PLSEL_PL0     (0x0UL<<SYS_PLCTL_PLSEL_Pos)   /*!< Set power level to power level 0. Supports system clock up to 180MHz. \hideinitializer */
#define SYS_PLCTL_PLSEL_PL1     (0x1UL<<SYS_PLCTL_PLSEL_Pos)   /*!< Set power level to power level 1. Supports system clock up to 160MHz. \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  PLSTS constant definitions.                                                                            */
/*---------------------------------------------------------------------------------------------------------*/
#define SYS_PLSTS_PLSTATUS_PL0  (0x0UL<<SYS_PLSTS_PLSTATUS_Pos) /*!< Power level is power level 0. Supports system clock up to 180MHz. \hideinitializer */
#define SYS_PLSTS_PLSTATUS_PL1  (0x1UL<<SYS_PLSTS_PLSTATUS_Pos) /*!< Power level is power level 1. Supports system clock up to 160MHz. \hideinitializer */


/*---------------------------------------------------------------------------------------------------------*/
/*  Multi-Function constant definitions.                                                                   */
/*---------------------------------------------------------------------------------------------------------*/


/* PA.0 MFP */
#define SYS_GPA_MFP0_PA0MFP_GPIO             (0x00UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0  setting for GPIO            */
#define SYS_GPA_MFP0_PA0MFP_QSPI0_MOSI0      (0x03UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0  setting for QSPI0_MOSI0     */
#define SYS_GPA_MFP0_PA0MFP_SPI0_MOSI        (0x04UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0  setting for SPI0_MOSI       */
#define SYS_GPA_MFP0_PA0MFP_UART0_RXD        (0x07UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0  setting for UART0_RXD       */
#define SYS_GPA_MFP0_PA0MFP_UART1_nRTS       (0x08UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0  setting for UART1_nRTS      */
#define SYS_GPA_MFP0_PA0MFP_I2C2_SDA         (0x09UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0  setting for I2C2_SDA        */
#define SYS_GPA_MFP0_PA0MFP_I3C0_SDA         (0x0bUL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0  setting for I3C0_SDA        */
#define SYS_GPA_MFP0_PA0MFP_BPWM0_CH0        (0x0cUL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0  setting for BPWM0_CH0       */
#define SYS_GPA_MFP0_PA0MFP_EPWM0_CH5        (0x0dUL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0  setting for EPWM0_CH5       */
#define SYS_GPA_MFP0_PA0MFP_LLSI7_OUT        (0x10UL<<SYS_GPA_MFP0_PA0MFP_Pos)   /*!< GPA_MFP0 PA0  setting for LLSI7_OUT       */

/* PA.1 MFP */
#define SYS_GPA_MFP0_PA1MFP_GPIO             (0x00UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1  setting for GPIO            */
#define SYS_GPA_MFP0_PA1MFP_QSPI0_MISO0      (0x03UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1  setting for QSPI0_MISO0     */
#define SYS_GPA_MFP0_PA1MFP_SPI0_MISO        (0x04UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1  setting for SPI0_MISO       */
#define SYS_GPA_MFP0_PA1MFP_PDCI_G3_TX3      (0x05UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1  setting for PDCI_G3_TX3     */
#define SYS_GPA_MFP0_PA1MFP_UART0_TXD        (0x07UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1  setting for UART0_TXD       */
#define SYS_GPA_MFP0_PA1MFP_UART1_nCTS       (0x08UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1  setting for UART1_nCTS      */
#define SYS_GPA_MFP0_PA1MFP_I2C2_SCL         (0x09UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1  setting for I2C2_SCL        */
#define SYS_GPA_MFP0_PA1MFP_I3C0_SCL         (0x0bUL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1  setting for I3C0_SCL        */
#define SYS_GPA_MFP0_PA1MFP_BPWM0_CH1        (0x0cUL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1  setting for BPWM0_CH1       */
#define SYS_GPA_MFP0_PA1MFP_EPWM0_CH4        (0x0dUL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1  setting for EPWM0_CH4       */
#define SYS_GPA_MFP0_PA1MFP_LLSI6_OUT        (0x10UL<<SYS_GPA_MFP0_PA1MFP_Pos)   /*!< GPA_MFP0 PA1  setting for LLSI6_OUT       */

/* PA.2 MFP */
#define SYS_GPA_MFP0_PA2MFP_GPIO             (0x00UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2  setting for GPIO            */
#define SYS_GPA_MFP0_PA2MFP_QSPI0_CLK        (0x03UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2  setting for QSPI0_CLK       */
#define SYS_GPA_MFP0_PA2MFP_SPI0_CLK         (0x04UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2  setting for SPI0_CLK        */
#define SYS_GPA_MFP0_PA2MFP_PDCI_G3_TX2      (0x05UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2  setting for PDCI_G3_TX2     */
#define SYS_GPA_MFP0_PA2MFP_UART4_RXD        (0x07UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2  setting for UART4_RXD       */
#define SYS_GPA_MFP0_PA2MFP_UART1_RXD        (0x08UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2  setting for UART1_RXD       */
#define SYS_GPA_MFP0_PA2MFP_I2C1_SDA         (0x09UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2  setting for I2C1_SDA        */
#define SYS_GPA_MFP0_PA2MFP_I2C0_SMBSUS      (0x0aUL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2  setting for I2C0_SMBSUS     */
#define SYS_GPA_MFP0_PA2MFP_BPWM0_CH2        (0x0cUL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2  setting for BPWM0_CH2       */
#define SYS_GPA_MFP0_PA2MFP_EPWM0_CH3        (0x0dUL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2  setting for EPWM0_CH3       */
#define SYS_GPA_MFP0_PA2MFP_I3C0_PUPEN       (0x0fUL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2  setting for I3C0_PUPEN      */
#define SYS_GPA_MFP0_PA2MFP_LLSI5_OUT        (0x10UL<<SYS_GPA_MFP0_PA2MFP_Pos)   /*!< GPA_MFP0 PA2  setting for LLSI5_OUT       */

/* PA.3 MFP */
#define SYS_GPA_MFP0_PA3MFP_GPIO             (0x00UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3  setting for GPIO            */
#define SYS_GPA_MFP0_PA3MFP_QSPI0_SS         (0x03UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3  setting for QSPI0_SS        */
#define SYS_GPA_MFP0_PA3MFP_SPI0_SS          (0x04UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3  setting for SPI0_SS         */
#define SYS_GPA_MFP0_PA3MFP_PDCI_G3_TX1      (0x05UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3  setting for PDCI_G3_TX1     */
#define SYS_GPA_MFP0_PA3MFP_UART4_TXD        (0x07UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3  setting for UART4_TXD       */
#define SYS_GPA_MFP0_PA3MFP_UART1_TXD        (0x08UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3  setting for UART1_TXD       */
#define SYS_GPA_MFP0_PA3MFP_I2C1_SCL         (0x09UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3  setting for I2C1_SCL        */
#define SYS_GPA_MFP0_PA3MFP_I2C0_SMBAL       (0x0aUL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3  setting for I2C0_SMBAL      */
#define SYS_GPA_MFP0_PA3MFP_BPWM0_CH3        (0x0cUL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3  setting for BPWM0_CH3       */
#define SYS_GPA_MFP0_PA3MFP_EPWM0_CH2        (0x0dUL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3  setting for EPWM0_CH2       */
#define SYS_GPA_MFP0_PA3MFP_EQEI0_B          (0x0eUL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3  setting for EQEI0_B         */
#define SYS_GPA_MFP0_PA3MFP_EPWM1_BRAKE1     (0x0fUL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3  setting for EPWM1_BRAKE1    */
#define SYS_GPA_MFP0_PA3MFP_LLSI4_OUT        (0x10UL<<SYS_GPA_MFP0_PA3MFP_Pos)   /*!< GPA_MFP0 PA3  setting for LLSI4_OUT       */

/* PA.4 MFP */
#define SYS_GPA_MFP1_PA4MFP_GPIO             (0x00UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4  setting for GPIO            */
#define SYS_GPA_MFP1_PA4MFP_SPI1_MOSI        (0x02UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4  setting for SPI1_MOSI       */
#define SYS_GPA_MFP1_PA4MFP_QSPI0_MOSI1      (0x03UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4  setting for QSPI0_MOSI1     */
#define SYS_GPA_MFP1_PA4MFP_SPI0_I2SMCLK     (0x04UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4  setting for SPI0_I2SMCLK    */
#define SYS_GPA_MFP1_PA4MFP_PDCI_G3_TX0      (0x05UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4  setting for PDCI_G3_TX0     */
#define SYS_GPA_MFP1_PA4MFP_UART0_nRTS       (0x07UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4  setting for UART0_nRTS      */
#define SYS_GPA_MFP1_PA4MFP_EBI_AD1          (0x08UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4  setting for EBI_AD1         */
#define SYS_GPA_MFP1_PA4MFP_I2C0_SDA         (0x09UL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4  setting for I2C0_SDA        */
#define SYS_GPA_MFP1_PA4MFP_CANFD0_RXD       (0x0aUL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4  setting for CANFD0_RXD      */
#define SYS_GPA_MFP1_PA4MFP_UART0_RXD        (0x0bUL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4  setting for UART0_RXD       */
#define SYS_GPA_MFP1_PA4MFP_BPWM0_CH4        (0x0cUL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4  setting for BPWM0_CH4       */
#define SYS_GPA_MFP1_PA4MFP_EPWM0_CH1        (0x0dUL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4  setting for EPWM0_CH1       */
#define SYS_GPA_MFP1_PA4MFP_EQEI0_A          (0x0eUL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4  setting for EQEI0_A         */
#define SYS_GPA_MFP1_PA4MFP_I3C0_SDA         (0x0fUL<<SYS_GPA_MFP1_PA4MFP_Pos)   /*!< GPA_MFP1 PA4  setting for I3C0_SDA        */

/* PA.5 MFP */
#define SYS_GPA_MFP1_PA5MFP_GPIO             (0x00UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5  setting for GPIO            */
#define SYS_GPA_MFP1_PA5MFP_SPI1_MISO        (0x02UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5  setting for SPI1_MISO       */
#define SYS_GPA_MFP1_PA5MFP_QSPI0_MISO1      (0x03UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5  setting for QSPI0_MISO1     */
#define SYS_GPA_MFP1_PA5MFP_SPI1_I2SMCLK     (0x04UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5  setting for SPI1_I2SMCLK    */
#define SYS_GPA_MFP1_PA5MFP_PDCI_G3_CLK      (0x05UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5  setting for PDCI_G3_CLK     */
#define SYS_GPA_MFP1_PA5MFP_CANFD0_TXH       (0x06UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5  setting for CANFD0_TXH      */
#define SYS_GPA_MFP1_PA5MFP_UART0_nCTS       (0x07UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5  setting for UART0_nCTS      */
#define SYS_GPA_MFP1_PA5MFP_EBI_AD0          (0x08UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5  setting for EBI_AD0         */
#define SYS_GPA_MFP1_PA5MFP_I2C0_SCL         (0x09UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5  setting for I2C0_SCL        */
#define SYS_GPA_MFP1_PA5MFP_CANFD0_TXD       (0x0aUL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5  setting for CANFD0_TXD      */
#define SYS_GPA_MFP1_PA5MFP_UART0_TXD        (0x0bUL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5  setting for UART0_TXD       */
#define SYS_GPA_MFP1_PA5MFP_BPWM0_CH5        (0x0cUL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5  setting for BPWM0_CH5       */
#define SYS_GPA_MFP1_PA5MFP_EPWM0_CH0        (0x0dUL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5  setting for EPWM0_CH0       */
#define SYS_GPA_MFP1_PA5MFP_EQEI0_INDEX      (0x0eUL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5  setting for EQEI0_INDEX     */
#define SYS_GPA_MFP1_PA5MFP_I3C0_SCL         (0x0fUL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5  setting for I3C0_SCL        */
#define SYS_GPA_MFP1_PA5MFP_PDCI_G3_RX1      (0x10UL<<SYS_GPA_MFP1_PA5MFP_Pos)   /*!< GPA_MFP1 PA5  setting for PDCI_G3_RX1     */

/* PA.6 MFP */
#define SYS_GPA_MFP1_PA6MFP_GPIO             (0x00UL<<SYS_GPA_MFP1_PA6MFP_Pos)   /*!< GPA_MFP1 PA6  setting for GPIO            */
#define SYS_GPA_MFP1_PA6MFP_EBI_AD6          (0x02UL<<SYS_GPA_MFP1_PA6MFP_Pos)   /*!< GPA_MFP1 PA6  setting for EBI_AD6         */
#define SYS_GPA_MFP1_PA6MFP_SPI1_SS          (0x04UL<<SYS_GPA_MFP1_PA6MFP_Pos)   /*!< GPA_MFP1 PA6  setting for SPI1_SS         */
#define SYS_GPA_MFP1_PA6MFP_CANFD0_TXL       (0x06UL<<SYS_GPA_MFP1_PA6MFP_Pos)   /*!< GPA_MFP1 PA6  setting for CANFD0_TXL      */
#define SYS_GPA_MFP1_PA6MFP_UART0_RXD        (0x07UL<<SYS_GPA_MFP1_PA6MFP_Pos)   /*!< GPA_MFP1 PA6  setting for UART0_RXD       */
#define SYS_GPA_MFP1_PA6MFP_I2C1_SDA         (0x08UL<<SYS_GPA_MFP1_PA6MFP_Pos)   /*!< GPA_MFP1 PA6  setting for I2C1_SDA        */
#define SYS_GPA_MFP1_PA6MFP_PDCI_G2_TX3      (0x0aUL<<SYS_GPA_MFP1_PA6MFP_Pos)   /*!< GPA_MFP1 PA6  setting for PDCI_G2_TX3     */
#define SYS_GPA_MFP1_PA6MFP_EPWM1_CH5        (0x0bUL<<SYS_GPA_MFP1_PA6MFP_Pos)   /*!< GPA_MFP1 PA6  setting for EPWM1_CH5       */
#define SYS_GPA_MFP1_PA6MFP_BPWM1_CH3        (0x0cUL<<SYS_GPA_MFP1_PA6MFP_Pos)   /*!< GPA_MFP1 PA6  setting for BPWM1_CH3       */
#define SYS_GPA_MFP1_PA6MFP_ACMP1_WLAT       (0x0dUL<<SYS_GPA_MFP1_PA6MFP_Pos)   /*!< GPA_MFP1 PA6  setting for ACMP1_WLAT      */
#define SYS_GPA_MFP1_PA6MFP_TM3              (0x0eUL<<SYS_GPA_MFP1_PA6MFP_Pos)   /*!< GPA_MFP1 PA6  setting for TM3             */
#define SYS_GPA_MFP1_PA6MFP_INT0             (0x0fUL<<SYS_GPA_MFP1_PA6MFP_Pos)   /*!< GPA_MFP1 PA6  setting for INT0            */

/* PA.7 MFP */
#define SYS_GPA_MFP1_PA7MFP_GPIO             (0x00UL<<SYS_GPA_MFP1_PA7MFP_Pos)   /*!< GPA_MFP1 PA7  setting for GPIO            */
#define SYS_GPA_MFP1_PA7MFP_EBI_AD7          (0x02UL<<SYS_GPA_MFP1_PA7MFP_Pos)   /*!< GPA_MFP1 PA7  setting for EBI_AD7         */
#define SYS_GPA_MFP1_PA7MFP_SPI1_CLK         (0x04UL<<SYS_GPA_MFP1_PA7MFP_Pos)   /*!< GPA_MFP1 PA7  setting for SPI1_CLK        */
#define SYS_GPA_MFP1_PA7MFP_UART0_TXD        (0x07UL<<SYS_GPA_MFP1_PA7MFP_Pos)   /*!< GPA_MFP1 PA7  setting for UART0_TXD       */
#define SYS_GPA_MFP1_PA7MFP_I2C1_SCL         (0x08UL<<SYS_GPA_MFP1_PA7MFP_Pos)   /*!< GPA_MFP1 PA7  setting for I2C1_SCL        */
#define SYS_GPA_MFP1_PA7MFP_PDCI_G2_TX2      (0x0aUL<<SYS_GPA_MFP1_PA7MFP_Pos)   /*!< GPA_MFP1 PA7  setting for PDCI_G2_TX2     */
#define SYS_GPA_MFP1_PA7MFP_EPWM1_CH4        (0x0bUL<<SYS_GPA_MFP1_PA7MFP_Pos)   /*!< GPA_MFP1 PA7  setting for EPWM1_CH4       */
#define SYS_GPA_MFP1_PA7MFP_BPWM1_CH2        (0x0cUL<<SYS_GPA_MFP1_PA7MFP_Pos)   /*!< GPA_MFP1 PA7  setting for BPWM1_CH2       */
#define SYS_GPA_MFP1_PA7MFP_ACMP0_WLAT       (0x0dUL<<SYS_GPA_MFP1_PA7MFP_Pos)   /*!< GPA_MFP1 PA7  setting for ACMP0_WLAT      */
#define SYS_GPA_MFP1_PA7MFP_TM2              (0x0eUL<<SYS_GPA_MFP1_PA7MFP_Pos)   /*!< GPA_MFP1 PA7  setting for TM2             */
#define SYS_GPA_MFP1_PA7MFP_INT1             (0x0fUL<<SYS_GPA_MFP1_PA7MFP_Pos)   /*!< GPA_MFP1 PA7  setting for INT1            */
#define SYS_GPA_MFP1_PA7MFP_ELLSI0_OUT       (0x10UL<<SYS_GPA_MFP1_PA7MFP_Pos)   /*!< GPA_MFP1 PA7  setting for ELLSI0_OUT      */

/* PA.8 MFP */
#define SYS_GPA_MFP2_PA8MFP_GPIO             (0x00UL<<SYS_GPA_MFP2_PA8MFP_Pos)   /*!< GPA_MFP2 PA8  setting for GPIO            */
#define SYS_GPA_MFP2_PA8MFP_EBI_ALE          (0x02UL<<SYS_GPA_MFP2_PA8MFP_Pos)   /*!< GPA_MFP2 PA8  setting for EBI_ALE         */
#define SYS_GPA_MFP2_PA8MFP_SPI2_MOSI        (0x04UL<<SYS_GPA_MFP2_PA8MFP_Pos)   /*!< GPA_MFP2 PA8  setting for SPI2_MOSI       */
#define SYS_GPA_MFP2_PA8MFP_USCI0_CTL1       (0x06UL<<SYS_GPA_MFP2_PA8MFP_Pos)   /*!< GPA_MFP2 PA8  setting for USCI0_CTL1      */
#define SYS_GPA_MFP2_PA8MFP_UART1_RXD        (0x07UL<<SYS_GPA_MFP2_PA8MFP_Pos)   /*!< GPA_MFP2 PA8  setting for UART1_RXD       */
#define SYS_GPA_MFP2_PA8MFP_CANFD1_TXL       (0x08UL<<SYS_GPA_MFP2_PA8MFP_Pos)   /*!< GPA_MFP2 PA8  setting for CANFD1_TXL      */
#define SYS_GPA_MFP2_PA8MFP_BPWM0_CH3        (0x09UL<<SYS_GPA_MFP2_PA8MFP_Pos)   /*!< GPA_MFP2 PA8  setting for BPWM0_CH3       */
#define SYS_GPA_MFP2_PA8MFP_ECAP0_IC2        (0x0bUL<<SYS_GPA_MFP2_PA8MFP_Pos)   /*!< GPA_MFP2 PA8  setting for ECAP0_IC2       */
#define SYS_GPA_MFP2_PA8MFP_BPWM3_CH3        (0x0cUL<<SYS_GPA_MFP2_PA8MFP_Pos)   /*!< GPA_MFP2 PA8  setting for BPWM3_CH3       */
#define SYS_GPA_MFP2_PA8MFP_TM3_EXT          (0x0dUL<<SYS_GPA_MFP2_PA8MFP_Pos)   /*!< GPA_MFP2 PA8  setting for TM3_EXT         */
#define SYS_GPA_MFP2_PA8MFP_PDCI_G1_RX1      (0x0eUL<<SYS_GPA_MFP2_PA8MFP_Pos)   /*!< GPA_MFP2 PA8  setting for PDCI_G1_RX1     */
#define SYS_GPA_MFP2_PA8MFP_INT4             (0x0fUL<<SYS_GPA_MFP2_PA8MFP_Pos)   /*!< GPA_MFP2 PA8  setting for INT4            */
#define SYS_GPA_MFP2_PA8MFP_PDCI_G1_CLK      (0x10UL<<SYS_GPA_MFP2_PA8MFP_Pos)   /*!< GPA_MFP2 PA8  setting for PDCI_G1_CLK     */

/* PA.9 MFP */
#define SYS_GPA_MFP2_PA9MFP_GPIO             (0x00UL<<SYS_GPA_MFP2_PA9MFP_Pos)   /*!< GPA_MFP2 PA9  setting for GPIO            */
#define SYS_GPA_MFP2_PA9MFP_EBI_MCLK         (0x02UL<<SYS_GPA_MFP2_PA9MFP_Pos)   /*!< GPA_MFP2 PA9  setting for EBI_MCLK        */
#define SYS_GPA_MFP2_PA9MFP_SPI2_MISO        (0x04UL<<SYS_GPA_MFP2_PA9MFP_Pos)   /*!< GPA_MFP2 PA9  setting for SPI2_MISO       */
#define SYS_GPA_MFP2_PA9MFP_USCI0_DAT1       (0x06UL<<SYS_GPA_MFP2_PA9MFP_Pos)   /*!< GPA_MFP2 PA9  setting for USCI0_DAT1      */
#define SYS_GPA_MFP2_PA9MFP_UART1_TXD        (0x07UL<<SYS_GPA_MFP2_PA9MFP_Pos)   /*!< GPA_MFP2 PA9  setting for UART1_TXD       */
#define SYS_GPA_MFP2_PA9MFP_BPWM0_CH2        (0x09UL<<SYS_GPA_MFP2_PA9MFP_Pos)   /*!< GPA_MFP2 PA9  setting for BPWM0_CH2       */
#define SYS_GPA_MFP2_PA9MFP_ECAP0_IC1        (0x0bUL<<SYS_GPA_MFP2_PA9MFP_Pos)   /*!< GPA_MFP2 PA9  setting for ECAP0_IC1       */
#define SYS_GPA_MFP2_PA9MFP_BPWM3_CH2        (0x0cUL<<SYS_GPA_MFP2_PA9MFP_Pos)   /*!< GPA_MFP2 PA9  setting for BPWM3_CH2       */
#define SYS_GPA_MFP2_PA9MFP_TM2_EXT          (0x0dUL<<SYS_GPA_MFP2_PA9MFP_Pos)   /*!< GPA_MFP2 PA9  setting for TM2_EXT         */
#define SYS_GPA_MFP2_PA9MFP_PDCI_G1_TX3      (0x10UL<<SYS_GPA_MFP2_PA9MFP_Pos)   /*!< GPA_MFP2 PA9  setting for PDCI_G1_TX3     */

/* PA.10 MFP */
#define SYS_GPA_MFP2_PA10MFP_GPIO            (0x00UL<<SYS_GPA_MFP2_PA10MFP_Pos)  /*!< GPA_MFP2 PA10 setting for GPIO            */
#define SYS_GPA_MFP2_PA10MFP_ACMP1_P0        (0x01UL<<SYS_GPA_MFP2_PA10MFP_Pos)  /*!< GPA_MFP2 PA10 setting for ACMP1_P0        */
#define SYS_GPA_MFP2_PA10MFP_EBI_nWR         (0x02UL<<SYS_GPA_MFP2_PA10MFP_Pos)  /*!< GPA_MFP2 PA10 setting for EBI_nWR         */
#define SYS_GPA_MFP2_PA10MFP_SPI2_CLK        (0x04UL<<SYS_GPA_MFP2_PA10MFP_Pos)  /*!< GPA_MFP2 PA10 setting for SPI2_CLK        */
#define SYS_GPA_MFP2_PA10MFP_USCI0_DAT0      (0x06UL<<SYS_GPA_MFP2_PA10MFP_Pos)  /*!< GPA_MFP2 PA10 setting for USCI0_DAT0      */
#define SYS_GPA_MFP2_PA10MFP_I2C2_SDA        (0x07UL<<SYS_GPA_MFP2_PA10MFP_Pos)  /*!< GPA_MFP2 PA10 setting for I2C2_SDA        */
#define SYS_GPA_MFP2_PA10MFP_BPWM0_CH1       (0x09UL<<SYS_GPA_MFP2_PA10MFP_Pos)  /*!< GPA_MFP2 PA10 setting for BPWM0_CH1       */
#define SYS_GPA_MFP2_PA10MFP_ECAP0_IC0       (0x0bUL<<SYS_GPA_MFP2_PA10MFP_Pos)  /*!< GPA_MFP2 PA10 setting for ECAP0_IC0       */
#define SYS_GPA_MFP2_PA10MFP_BPWM3_CH1       (0x0cUL<<SYS_GPA_MFP2_PA10MFP_Pos)  /*!< GPA_MFP2 PA10 setting for BPWM3_CH1       */
#define SYS_GPA_MFP2_PA10MFP_TM1_EXT         (0x0dUL<<SYS_GPA_MFP2_PA10MFP_Pos)  /*!< GPA_MFP2 PA10 setting for TM1_EXT         */
#define SYS_GPA_MFP2_PA10MFP_PDCI_G1_TX2     (0x10UL<<SYS_GPA_MFP2_PA10MFP_Pos)  /*!< GPA_MFP2 PA10 setting for PDCI_G1_TX2     */

/* PA.11 MFP */
#define SYS_GPA_MFP2_PA11MFP_GPIO            (0x00UL<<SYS_GPA_MFP2_PA11MFP_Pos)  /*!< GPA_MFP2 PA11 setting for GPIO            */
#define SYS_GPA_MFP2_PA11MFP_ACMP0_P0        (0x01UL<<SYS_GPA_MFP2_PA11MFP_Pos)  /*!< GPA_MFP2 PA11 setting for ACMP0_P0        */
#define SYS_GPA_MFP2_PA11MFP_EBI_nRD         (0x02UL<<SYS_GPA_MFP2_PA11MFP_Pos)  /*!< GPA_MFP2 PA11 setting for EBI_nRD         */
#define SYS_GPA_MFP2_PA11MFP_SPI2_SS         (0x04UL<<SYS_GPA_MFP2_PA11MFP_Pos)  /*!< GPA_MFP2 PA11 setting for SPI2_SS         */
#define SYS_GPA_MFP2_PA11MFP_USCI0_CLK       (0x06UL<<SYS_GPA_MFP2_PA11MFP_Pos)  /*!< GPA_MFP2 PA11 setting for USCI0_CLK       */
#define SYS_GPA_MFP2_PA11MFP_I2C2_SCL        (0x07UL<<SYS_GPA_MFP2_PA11MFP_Pos)  /*!< GPA_MFP2 PA11 setting for I2C2_SCL        */
#define SYS_GPA_MFP2_PA11MFP_BPWM0_CH0       (0x09UL<<SYS_GPA_MFP2_PA11MFP_Pos)  /*!< GPA_MFP2 PA11 setting for BPWM0_CH0       */
#define SYS_GPA_MFP2_PA11MFP_EPWM0_SYNC_OUT  (0x0aUL<<SYS_GPA_MFP2_PA11MFP_Pos)  /*!< GPA_MFP2 PA11 setting for EPWM0_SYNC_OUT  */
#define SYS_GPA_MFP2_PA11MFP_EPWM0_BRAKE1    (0x0bUL<<SYS_GPA_MFP2_PA11MFP_Pos)  /*!< GPA_MFP2 PA11 setting for EPWM0_BRAKE1    */
#define SYS_GPA_MFP2_PA11MFP_BPWM3_CH0       (0x0cUL<<SYS_GPA_MFP2_PA11MFP_Pos)  /*!< GPA_MFP2 PA11 setting for BPWM3_CH0       */
#define SYS_GPA_MFP2_PA11MFP_TM0_EXT         (0x0dUL<<SYS_GPA_MFP2_PA11MFP_Pos)  /*!< GPA_MFP2 PA11 setting for TM0_EXT         */
#define SYS_GPA_MFP2_PA11MFP_PDCI_G1_TX1     (0x10UL<<SYS_GPA_MFP2_PA11MFP_Pos)  /*!< GPA_MFP2 PA11 setting for PDCI_G1_TX1     */

/* PA.12 MFP */
#define SYS_GPA_MFP3_PA12MFP_GPIO            (0x00UL<<SYS_GPA_MFP3_PA12MFP_Pos)  /*!< GPA_MFP3 PA12 setting for GPIO            */
#define SYS_GPA_MFP3_PA12MFP_I2S0_BCLK       (0x02UL<<SYS_GPA_MFP3_PA12MFP_Pos)  /*!< GPA_MFP3 PA12 setting for I2S0_BCLK       */
#define SYS_GPA_MFP3_PA12MFP_UART4_TXD       (0x03UL<<SYS_GPA_MFP3_PA12MFP_Pos)  /*!< GPA_MFP3 PA12 setting for UART4_TXD       */
#define SYS_GPA_MFP3_PA12MFP_I2C1_SCL        (0x04UL<<SYS_GPA_MFP3_PA12MFP_Pos)  /*!< GPA_MFP3 PA12 setting for I2C1_SCL        */
#define SYS_GPA_MFP3_PA12MFP_SPI2_SS         (0x05UL<<SYS_GPA_MFP3_PA12MFP_Pos)  /*!< GPA_MFP3 PA12 setting for SPI2_SS         */
#define SYS_GPA_MFP3_PA12MFP_CANFD0_TXD      (0x06UL<<SYS_GPA_MFP3_PA12MFP_Pos)  /*!< GPA_MFP3 PA12 setting for CANFD0_TXD      */
#define SYS_GPA_MFP3_PA12MFP_CANFD0_TXH      (0x07UL<<SYS_GPA_MFP3_PA12MFP_Pos)  /*!< GPA_MFP3 PA12 setting for CANFD0_TXH      */
#define SYS_GPA_MFP3_PA12MFP_BPWM1_CH2       (0x0bUL<<SYS_GPA_MFP3_PA12MFP_Pos)  /*!< GPA_MFP3 PA12 setting for BPWM1_CH2       */
#define SYS_GPA_MFP3_PA12MFP_BPWM2_CH3       (0x0dUL<<SYS_GPA_MFP3_PA12MFP_Pos)  /*!< GPA_MFP3 PA12 setting for BPWM2_CH3       */
#define SYS_GPA_MFP3_PA12MFP_PDCI_G5_TX0     (0x10UL<<SYS_GPA_MFP3_PA12MFP_Pos)  /*!< GPA_MFP3 PA12 setting for PDCI_G5_TX0     */

/* PA.13 MFP */
#define SYS_GPA_MFP3_PA13MFP_GPIO            (0x00UL<<SYS_GPA_MFP3_PA13MFP_Pos)  /*!< GPA_MFP3 PA13 setting for GPIO            */
#define SYS_GPA_MFP3_PA13MFP_I2S0_MCLK       (0x02UL<<SYS_GPA_MFP3_PA13MFP_Pos)  /*!< GPA_MFP3 PA13 setting for I2S0_MCLK       */
#define SYS_GPA_MFP3_PA13MFP_UART4_RXD       (0x03UL<<SYS_GPA_MFP3_PA13MFP_Pos)  /*!< GPA_MFP3 PA13 setting for UART4_RXD       */
#define SYS_GPA_MFP3_PA13MFP_I2C1_SDA        (0x04UL<<SYS_GPA_MFP3_PA13MFP_Pos)  /*!< GPA_MFP3 PA13 setting for I2C1_SDA        */
#define SYS_GPA_MFP3_PA13MFP_SPI2_CLK        (0x05UL<<SYS_GPA_MFP3_PA13MFP_Pos)  /*!< GPA_MFP3 PA13 setting for SPI2_CLK        */
#define SYS_GPA_MFP3_PA13MFP_CANFD0_RXD      (0x06UL<<SYS_GPA_MFP3_PA13MFP_Pos)  /*!< GPA_MFP3 PA13 setting for CANFD0_RXD      */
#define SYS_GPA_MFP3_PA13MFP_BPWM1_CH3       (0x0bUL<<SYS_GPA_MFP3_PA13MFP_Pos)  /*!< GPA_MFP3 PA13 setting for BPWM1_CH3       */
#define SYS_GPA_MFP3_PA13MFP_BPWM2_CH4       (0x0dUL<<SYS_GPA_MFP3_PA13MFP_Pos)  /*!< GPA_MFP3 PA13 setting for BPWM2_CH4       */
#define SYS_GPA_MFP3_PA13MFP_PDCI_G5_TX1     (0x10UL<<SYS_GPA_MFP3_PA13MFP_Pos)  /*!< GPA_MFP3 PA13 setting for PDCI_G5_TX1     */

/* PA.14 MFP */
#define SYS_GPA_MFP3_PA14MFP_GPIO            (0x00UL<<SYS_GPA_MFP3_PA14MFP_Pos)  /*!< GPA_MFP3 PA14 setting for GPIO            */
#define SYS_GPA_MFP3_PA14MFP_I2S0_DI         (0x02UL<<SYS_GPA_MFP3_PA14MFP_Pos)  /*!< GPA_MFP3 PA14 setting for I2S0_DI         */
#define SYS_GPA_MFP3_PA14MFP_UART0_TXD       (0x03UL<<SYS_GPA_MFP3_PA14MFP_Pos)  /*!< GPA_MFP3 PA14 setting for UART0_TXD       */
#define SYS_GPA_MFP3_PA14MFP_EBI_AD5         (0x04UL<<SYS_GPA_MFP3_PA14MFP_Pos)  /*!< GPA_MFP3 PA14 setting for EBI_AD5         */
#define SYS_GPA_MFP3_PA14MFP_SPI2_MISO       (0x05UL<<SYS_GPA_MFP3_PA14MFP_Pos)  /*!< GPA_MFP3 PA14 setting for SPI2_MISO       */
#define SYS_GPA_MFP3_PA14MFP_I2C2_SCL        (0x06UL<<SYS_GPA_MFP3_PA14MFP_Pos)  /*!< GPA_MFP3 PA14 setting for I2C2_SCL        */
#define SYS_GPA_MFP3_PA14MFP_BPWM1_CH4       (0x0bUL<<SYS_GPA_MFP3_PA14MFP_Pos)  /*!< GPA_MFP3 PA14 setting for BPWM1_CH4       */
#define SYS_GPA_MFP3_PA14MFP_BPWM2_CH5       (0x0dUL<<SYS_GPA_MFP3_PA14MFP_Pos)  /*!< GPA_MFP3 PA14 setting for BPWM2_CH5       */
#define SYS_GPA_MFP3_PA14MFP_PDCI_G5_TX2     (0x10UL<<SYS_GPA_MFP3_PA14MFP_Pos)  /*!< GPA_MFP3 PA14 setting for PDCI_G5_TX2     */

/* PA.15 MFP */
#define SYS_GPA_MFP3_PA15MFP_GPIO            (0x00UL<<SYS_GPA_MFP3_PA15MFP_Pos)  /*!< GPA_MFP3 PA15 setting for GPIO            */
#define SYS_GPA_MFP3_PA15MFP_I2S0_DO         (0x02UL<<SYS_GPA_MFP3_PA15MFP_Pos)  /*!< GPA_MFP3 PA15 setting for I2S0_DO         */
#define SYS_GPA_MFP3_PA15MFP_UART0_RXD       (0x03UL<<SYS_GPA_MFP3_PA15MFP_Pos)  /*!< GPA_MFP3 PA15 setting for UART0_RXD       */
#define SYS_GPA_MFP3_PA15MFP_SPI2_MOSI       (0x05UL<<SYS_GPA_MFP3_PA15MFP_Pos)  /*!< GPA_MFP3 PA15 setting for SPI2_MOSI       */
#define SYS_GPA_MFP3_PA15MFP_I2C2_SDA        (0x06UL<<SYS_GPA_MFP3_PA15MFP_Pos)  /*!< GPA_MFP3 PA15 setting for I2C2_SDA        */
#define SYS_GPA_MFP3_PA15MFP_BPWM1_CH5       (0x0bUL<<SYS_GPA_MFP3_PA15MFP_Pos)  /*!< GPA_MFP3 PA15 setting for BPWM1_CH5       */
#define SYS_GPA_MFP3_PA15MFP_EPWM0_SYNC_IN   (0x0cUL<<SYS_GPA_MFP3_PA15MFP_Pos)  /*!< GPA_MFP3 PA15 setting for EPWM0_SYNC_IN   */
#define SYS_GPA_MFP3_PA15MFP_PDCI_G5_TX3     (0x10UL<<SYS_GPA_MFP3_PA15MFP_Pos)  /*!< GPA_MFP3 PA15 setting for PDCI_G5_TX3     */

/* PB.0 MFP */
#define SYS_GPB_MFP0_PB0MFP_GPIO             (0x00UL<<SYS_GPB_MFP0_PB0MFP_Pos)   /*!< GPB_MFP0 PB0  setting for GPIO            */
#define SYS_GPB_MFP0_PB0MFP_EADC0_CH0        (0x01UL<<SYS_GPB_MFP0_PB0MFP_Pos)   /*!< GPA_MFP0 PB0  setting for EADC0_CH0       */
#define SYS_GPB_MFP0_PB0MFP_EBI_ADR9         (0x02UL<<SYS_GPB_MFP0_PB0MFP_Pos)   /*!< GPA_MFP0 PB0  setting for EBI_ADR9        */
#define SYS_GPB_MFP0_PB0MFP_SD0_CMD          (0x03UL<<SYS_GPB_MFP0_PB0MFP_Pos)   /*!< GPA_MFP0 PB0  setting for SD0_CMD         */
#define SYS_GPB_MFP0_PB0MFP_SPI2_I2SMCLK     (0x04UL<<SYS_GPB_MFP0_PB0MFP_Pos)   /*!< GPA_MFP0 PB0  setting for SPI2_I2SMCLK    */
#define SYS_GPB_MFP0_PB0MFP_USCI0_CTL0       (0x06UL<<SYS_GPB_MFP0_PB0MFP_Pos)   /*!< GPA_MFP0 PB0  setting for USCI0_CTL0      */
#define SYS_GPB_MFP0_PB0MFP_UART2_RXD        (0x07UL<<SYS_GPB_MFP0_PB0MFP_Pos)   /*!< GPA_MFP0 PB0  setting for UART2_RXD       */
#define SYS_GPB_MFP0_PB0MFP_SPI0_I2SMCLK     (0x08UL<<SYS_GPB_MFP0_PB0MFP_Pos)   /*!< GPA_MFP0 PB0  setting for SPI0_I2SMCLK    */
#define SYS_GPB_MFP0_PB0MFP_I2C1_SDA         (0x09UL<<SYS_GPB_MFP0_PB0MFP_Pos)   /*!< GPA_MFP0 PB0  setting for I2C1_SDA        */
#define SYS_GPB_MFP0_PB0MFP_EPWM0_CH5        (0x0bUL<<SYS_GPB_MFP0_PB0MFP_Pos)   /*!< GPA_MFP0 PB0  setting for EPWM0_CH5       */
#define SYS_GPB_MFP0_PB0MFP_EPWM1_CH5        (0x0cUL<<SYS_GPB_MFP0_PB0MFP_Pos)   /*!< GPA_MFP0 PB0  setting for EPWM1_CH5       */
#define SYS_GPB_MFP0_PB0MFP_EPWM0_BRAKE1     (0x0dUL<<SYS_GPB_MFP0_PB0MFP_Pos)   /*!< GPA_MFP0 PB0  setting for EPWM0_BRAKE1    */
#define SYS_GPB_MFP0_PB0MFP_I3C0_SDA         (0x0eUL<<SYS_GPB_MFP0_PB0MFP_Pos)   /*!< GPA_MFP0 PB0  setting for I3C0_SDA        */
#define SYS_GPB_MFP0_PB0MFP_QSPI0_MOSI1      (0x0fUL<<SYS_GPB_MFP0_PB0MFP_Pos)   /*!< GPA_MFP0 PB0  setting for QSPI0_MOSI1     */
#define SYS_GPB_MFP0_PB0MFP_PDCI_G1_TX0      (0x10UL<<SYS_GPB_MFP0_PB0MFP_Pos)   /*!< GPA_MFP0 PB0  setting for PDCI_G1_TX0     */

/* PB.1 MFP */
#define SYS_GPB_MFP0_PB1MFP_GPIO             (0x00UL<<SYS_GPB_MFP0_PB1MFP_Pos)   /*!< GPB_MFP0 PB1  setting for GPIO            */
#define SYS_GPB_MFP0_PB1MFP_EADC0_CH1        (0x01UL<<SYS_GPB_MFP0_PB1MFP_Pos)   /*!< GPA_MFP0 PB1  setting for EADC0_CH1       */
#define SYS_GPB_MFP0_PB1MFP_EBI_ADR8         (0x02UL<<SYS_GPB_MFP0_PB1MFP_Pos)   /*!< GPA_MFP0 PB1  setting for EBI_ADR8        */
#define SYS_GPB_MFP0_PB1MFP_SD0_CLK          (0x03UL<<SYS_GPB_MFP0_PB1MFP_Pos)   /*!< GPA_MFP0 PB1  setting for SD0_CLK         */
#define SYS_GPB_MFP0_PB1MFP_PDCI_G0_RX1      (0x04UL<<SYS_GPB_MFP0_PB1MFP_Pos)   /*!< GPA_MFP0 PB1  setting for PDCI_G0_RX1     */
#define SYS_GPB_MFP0_PB1MFP_SPI1_I2SMCLK     (0x05UL<<SYS_GPB_MFP0_PB1MFP_Pos)   /*!< GPA_MFP0 PB1  setting for SPI1_I2SMCLK    */
#define SYS_GPB_MFP0_PB1MFP_PDCI_G0_CLK      (0x06UL<<SYS_GPB_MFP0_PB1MFP_Pos)   /*!< GPA_MFP0 PB1  setting for PDCI_G0_CLK     */
#define SYS_GPB_MFP0_PB1MFP_UART2_TXD        (0x07UL<<SYS_GPB_MFP0_PB1MFP_Pos)   /*!< GPA_MFP0 PB1  setting for UART2_TXD       */
#define SYS_GPB_MFP0_PB1MFP_USCI1_CLK        (0x08UL<<SYS_GPB_MFP0_PB1MFP_Pos)   /*!< GPA_MFP0 PB1  setting for USCI1_CLK       */
#define SYS_GPB_MFP0_PB1MFP_I2C1_SCL         (0x09UL<<SYS_GPB_MFP0_PB1MFP_Pos)   /*!< GPA_MFP0 PB1  setting for I2C1_SCL        */
#define SYS_GPB_MFP0_PB1MFP_I2S0_LRCK        (0x0aUL<<SYS_GPB_MFP0_PB1MFP_Pos)   /*!< GPA_MFP0 PB1  setting for I2S0_LRCK       */
#define SYS_GPB_MFP0_PB1MFP_EPWM0_CH4        (0x0bUL<<SYS_GPB_MFP0_PB1MFP_Pos)   /*!< GPA_MFP0 PB1  setting for EPWM0_CH4       */
#define SYS_GPB_MFP0_PB1MFP_EPWM1_CH4        (0x0cUL<<SYS_GPB_MFP0_PB1MFP_Pos)   /*!< GPA_MFP0 PB1  setting for EPWM1_CH4       */
#define SYS_GPB_MFP0_PB1MFP_EPWM0_BRAKE0     (0x0dUL<<SYS_GPB_MFP0_PB1MFP_Pos)   /*!< GPA_MFP0 PB1  setting for EPWM0_BRAKE0    */
#define SYS_GPB_MFP0_PB1MFP_I3C0_SCL         (0x0eUL<<SYS_GPB_MFP0_PB1MFP_Pos)   /*!< GPA_MFP0 PB1  setting for I3C0_SCL        */
#define SYS_GPB_MFP0_PB1MFP_QSPI0_MISO1      (0x0fUL<<SYS_GPB_MFP0_PB1MFP_Pos)   /*!< GPA_MFP0 PB1  setting for QSPI0_MISO1     */
#define SYS_GPB_MFP0_PB1MFP_ELLSI0_OUT       (0x10UL<<SYS_GPB_MFP0_PB1MFP_Pos)   /*!< GPA_MFP0 PB1  setting for ELLSI0_OUT      */

/* PB.2 MFP */
#define SYS_GPB_MFP0_PB2MFP_GPIO             (0x00UL<<SYS_GPB_MFP0_PB2MFP_Pos)   /*!< GPB_MFP0 PB2  setting for GPIO            */
#define SYS_GPB_MFP0_PB2MFP_EADC0_CH2        (0x01UL<<SYS_GPB_MFP0_PB2MFP_Pos)   /*!< GPA_MFP0 PB2  setting for EADC0_CH2       */
#define SYS_GPB_MFP0_PB2MFP_ACMP0_P1         (0x01UL<<SYS_GPB_MFP0_PB2MFP_Pos)   /*!< GPA_MFP0 PB2  setting for ACMP0_P1        */
#define SYS_GPB_MFP0_PB2MFP_EBI_ADR3         (0x02UL<<SYS_GPB_MFP0_PB2MFP_Pos)   /*!< GPA_MFP0 PB2  setting for EBI_ADR3        */
#define SYS_GPB_MFP0_PB2MFP_SD0_DAT0         (0x03UL<<SYS_GPB_MFP0_PB2MFP_Pos)   /*!< GPA_MFP0 PB2  setting for SD0_DAT0        */
#define SYS_GPB_MFP0_PB2MFP_SPI1_SS          (0x05UL<<SYS_GPB_MFP0_PB2MFP_Pos)   /*!< GPA_MFP0 PB2  setting for SPI1_SS         */
#define SYS_GPB_MFP0_PB2MFP_UART1_RXD        (0x06UL<<SYS_GPB_MFP0_PB2MFP_Pos)   /*!< GPA_MFP0 PB2  setting for UART1_RXD       */
#define SYS_GPB_MFP0_PB2MFP_USCI1_DAT0       (0x08UL<<SYS_GPB_MFP0_PB2MFP_Pos)   /*!< GPA_MFP0 PB2  setting for USCI1_DAT0      */
#define SYS_GPB_MFP0_PB2MFP_I2S0_DO          (0x0aUL<<SYS_GPB_MFP0_PB2MFP_Pos)   /*!< GPA_MFP0 PB2  setting for I2S0_DO         */
#define SYS_GPB_MFP0_PB2MFP_EPWM0_CH3        (0x0bUL<<SYS_GPB_MFP0_PB2MFP_Pos)   /*!< GPA_MFP0 PB2  setting for EPWM0_CH3       */
#define SYS_GPB_MFP0_PB2MFP_I2C1_SDA         (0x0cUL<<SYS_GPB_MFP0_PB2MFP_Pos)   /*!< GPA_MFP0 PB2  setting for I2C1_SDA        */
#define SYS_GPB_MFP0_PB2MFP_PDCI_G0_TX3      (0x0dUL<<SYS_GPB_MFP0_PB2MFP_Pos)   /*!< GPA_MFP0 PB2  setting for PDCI_G0_TX3     */
#define SYS_GPB_MFP0_PB2MFP_TM3              (0x0eUL<<SYS_GPB_MFP0_PB2MFP_Pos)   /*!< GPA_MFP0 PB2  setting for TM3             */
#define SYS_GPB_MFP0_PB2MFP_INT3             (0x0fUL<<SYS_GPB_MFP0_PB2MFP_Pos)   /*!< GPA_MFP0 PB2  setting for INT3            */
#define SYS_GPB_MFP0_PB2MFP_LLSI7_OUT        (0x10UL<<SYS_GPB_MFP0_PB2MFP_Pos)   /*!< GPA_MFP0 PB2  setting for LLSI7_OUT       */

/* PB.3 MFP */
#define SYS_GPB_MFP0_PB3MFP_GPIO             (0x00UL<<SYS_GPB_MFP0_PB3MFP_Pos)   /*!< GPB_MFP0 PB3  setting for GPIO            */
#define SYS_GPB_MFP0_PB3MFP_EADC0_CH3        (0x01UL<<SYS_GPB_MFP0_PB3MFP_Pos)   /*!< GPA_MFP0 PB3  setting for EADC0_CH3       */
#define SYS_GPB_MFP0_PB3MFP_ACMP0_N          (0x01UL<<SYS_GPB_MFP0_PB3MFP_Pos)   /*!< GPA_MFP0 PB3  setting for ACMP0_N         */
#define SYS_GPB_MFP0_PB3MFP_EBI_ADR2         (0x02UL<<SYS_GPB_MFP0_PB3MFP_Pos)   /*!< GPA_MFP0 PB3  setting for EBI_ADR2        */
#define SYS_GPB_MFP0_PB3MFP_SD0_DAT1         (0x03UL<<SYS_GPB_MFP0_PB3MFP_Pos)   /*!< GPA_MFP0 PB3  setting for SD0_DAT1        */
#define SYS_GPB_MFP0_PB3MFP_SPI1_CLK         (0x05UL<<SYS_GPB_MFP0_PB3MFP_Pos)   /*!< GPA_MFP0 PB3  setting for SPI1_CLK        */
#define SYS_GPB_MFP0_PB3MFP_UART1_TXD        (0x06UL<<SYS_GPB_MFP0_PB3MFP_Pos)   /*!< GPA_MFP0 PB3  setting for UART1_TXD       */
#define SYS_GPB_MFP0_PB3MFP_USCI1_DAT1       (0x08UL<<SYS_GPB_MFP0_PB3MFP_Pos)   /*!< GPA_MFP0 PB3  setting for USCI1_DAT1      */
#define SYS_GPB_MFP0_PB3MFP_I2S0_DI          (0x0aUL<<SYS_GPB_MFP0_PB3MFP_Pos)   /*!< GPA_MFP0 PB3  setting for I2S0_DI         */
#define SYS_GPB_MFP0_PB3MFP_EPWM0_CH2        (0x0bUL<<SYS_GPB_MFP0_PB3MFP_Pos)   /*!< GPA_MFP0 PB3  setting for EPWM0_CH2       */
#define SYS_GPB_MFP0_PB3MFP_I2C1_SCL         (0x0cUL<<SYS_GPB_MFP0_PB3MFP_Pos)   /*!< GPA_MFP0 PB3  setting for I2C1_SCL        */
#define SYS_GPB_MFP0_PB3MFP_PDCI_G0_TX2      (0x0dUL<<SYS_GPB_MFP0_PB3MFP_Pos)   /*!< GPA_MFP0 PB3  setting for PDCI_G0_TX2     */
#define SYS_GPB_MFP0_PB3MFP_TM2              (0x0eUL<<SYS_GPB_MFP0_PB3MFP_Pos)   /*!< GPA_MFP0 PB3  setting for TM2             */
#define SYS_GPB_MFP0_PB3MFP_INT2             (0x0fUL<<SYS_GPB_MFP0_PB3MFP_Pos)   /*!< GPA_MFP0 PB3  setting for INT2            */
#define SYS_GPB_MFP0_PB3MFP_LLSI6_OUT        (0x10UL<<SYS_GPB_MFP0_PB3MFP_Pos)   /*!< GPA_MFP0 PB3  setting for LLSI6_OUT       */

/* PB.4 MFP */
#define SYS_GPB_MFP1_PB4MFP_GPIO             (0x00UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPB_MFP1 PB4  setting for GPIO            */
#define SYS_GPB_MFP1_PB4MFP_EADC0_CH4        (0x01UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPA_MFP1 PB4  setting for EADC0_CH4       */
#define SYS_GPB_MFP1_PB4MFP_ACMP1_P1         (0x01UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPA_MFP1 PB4  setting for ACMP1_P1        */
#define SYS_GPB_MFP1_PB4MFP_EBI_ADR1         (0x02UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPA_MFP1 PB4  setting for EBI_ADR1        */
#define SYS_GPB_MFP1_PB4MFP_SD0_DAT2         (0x03UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPA_MFP1 PB4  setting for SD0_DAT2        */
#define SYS_GPB_MFP1_PB4MFP_SPI1_MOSI        (0x05UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPA_MFP1 PB4  setting for SPI1_MOSI       */
#define SYS_GPB_MFP1_PB4MFP_I2C0_SDA         (0x06UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPA_MFP1 PB4  setting for I2C0_SDA        */
#define SYS_GPB_MFP1_PB4MFP_USCI1_CTL1       (0x08UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPA_MFP1 PB4  setting for USCI1_CTL1      */
#define SYS_GPB_MFP1_PB4MFP_I2S0_MCLK        (0x0aUL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPA_MFP1 PB4  setting for I2S0_MCLK       */
#define SYS_GPB_MFP1_PB4MFP_EPWM0_CH1        (0x0bUL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPA_MFP1 PB4  setting for EPWM0_CH1       */
#define SYS_GPB_MFP1_PB4MFP_UART2_RXD        (0x0cUL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPA_MFP1 PB4  setting for UART2_RXD       */
#define SYS_GPB_MFP1_PB4MFP_PDCI_G0_TX1      (0x0dUL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPA_MFP1 PB4  setting for PDCI_G0_TX1     */
#define SYS_GPB_MFP1_PB4MFP_TM1              (0x0eUL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPA_MFP1 PB4  setting for TM1             */
#define SYS_GPB_MFP1_PB4MFP_INT1             (0x0fUL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPA_MFP1 PB4  setting for INT1            */
#define SYS_GPB_MFP1_PB4MFP_LLSI5_OUT        (0x10UL<<SYS_GPB_MFP1_PB4MFP_Pos)   /*!< GPA_MFP1 PB4  setting for LLSI5_OUT       */

/* PB.5 MFP */
#define SYS_GPB_MFP1_PB5MFP_GPIO             (0x00UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPB_MFP1 PB5  setting for GPIO            */
#define SYS_GPB_MFP1_PB5MFP_EADC0_CH5        (0x01UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPA_MFP1 PB5  setting for EADC0_CH5       */
#define SYS_GPB_MFP1_PB5MFP_ACMP1_N          (0x01UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPA_MFP1 PB5  setting for ACMP1_N         */
#define SYS_GPB_MFP1_PB5MFP_EBI_ADR0         (0x02UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPA_MFP1 PB5  setting for EBI_ADR0        */
#define SYS_GPB_MFP1_PB5MFP_SD0_DAT3         (0x03UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPA_MFP1 PB5  setting for SD0_DAT3        */
#define SYS_GPB_MFP1_PB5MFP_SPI1_MISO        (0x05UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPA_MFP1 PB5  setting for SPI1_MISO       */
#define SYS_GPB_MFP1_PB5MFP_I2C0_SCL         (0x06UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPA_MFP1 PB5  setting for I2C0_SCL        */
#define SYS_GPB_MFP1_PB5MFP_USCI1_CTL0       (0x08UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPA_MFP1 PB5  setting for USCI1_CTL0      */
#define SYS_GPB_MFP1_PB5MFP_I2S0_BCLK        (0x0aUL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPA_MFP1 PB5  setting for I2S0_BCLK       */
#define SYS_GPB_MFP1_PB5MFP_EPWM0_CH0        (0x0bUL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPA_MFP1 PB5  setting for EPWM0_CH0       */
#define SYS_GPB_MFP1_PB5MFP_UART2_TXD        (0x0cUL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPA_MFP1 PB5  setting for UART2_TXD       */
#define SYS_GPB_MFP1_PB5MFP_PDCI_G0_TX0      (0x0dUL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPA_MFP1 PB5  setting for PDCI_G0_TX0     */
#define SYS_GPB_MFP1_PB5MFP_TM0              (0x0eUL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPA_MFP1 PB5  setting for TM0             */
#define SYS_GPB_MFP1_PB5MFP_INT0             (0x0fUL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPA_MFP1 PB5  setting for INT0            */
#define SYS_GPB_MFP1_PB5MFP_LLSI4_OUT        (0x10UL<<SYS_GPB_MFP1_PB5MFP_Pos)   /*!< GPA_MFP1 PB5  setting for LLSI4_OUT       */

/* PB.6 MFP */
#define SYS_GPB_MFP1_PB6MFP_GPIO             (0x00UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPB_MFP1 PB6  setting for GPIO            */
#define SYS_GPB_MFP1_PB6MFP_EADC0_CH6        (0x01UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPA_MFP1 PB6  setting for EADC0_CH6       */
#define SYS_GPB_MFP1_PB6MFP_EBI_nWRH         (0x02UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPA_MFP1 PB6  setting for EBI_nWRH        */
#define SYS_GPB_MFP1_PB6MFP_EPWM0_SYNC_IN    (0x03UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPA_MFP1 PB6  setting for EPWM0_SYNC_IN   */
#define SYS_GPB_MFP1_PB6MFP_USCI1_DAT1       (0x04UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPA_MFP1 PB6  setting for USCI1_DAT1      */
#define SYS_GPB_MFP1_PB6MFP_CANFD1_RXD       (0x05UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPA_MFP1 PB6  setting for CANFD1_RXD      */
#define SYS_GPB_MFP1_PB6MFP_UART1_RXD        (0x06UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPA_MFP1 PB6  setting for UART1_RXD       */
#define SYS_GPB_MFP1_PB6MFP_HSUSB_VBUS_EN    (0x07UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPA_MFP1 PB6  setting for HSUSB_VBUS_EN   */
#define SYS_GPB_MFP1_PB6MFP_EBI_nCS1         (0x08UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPA_MFP1 PB6  setting for EBI_nCS1        */
#define SYS_GPB_MFP1_PB6MFP_SPI0_CLK         (0x09UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPA_MFP1 PB6  setting for SPI0_CLK        */
#define SYS_GPB_MFP1_PB6MFP_BPWM1_CH5        (0x0aUL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPA_MFP1 PB6  setting for BPWM1_CH5       */
#define SYS_GPB_MFP1_PB6MFP_EPWM1_BRAKE1     (0x0bUL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPA_MFP1 PB6  setting for EPWM1_BRAKE1    */
#define SYS_GPB_MFP1_PB6MFP_EPWM1_CH5        (0x0cUL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPA_MFP1 PB6  setting for EPWM1_CH5       */
#define SYS_GPB_MFP1_PB6MFP_INT4             (0x0dUL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPA_MFP1 PB6  setting for INT4            */
#define SYS_GPB_MFP1_PB6MFP_PDCI_G3_TX2      (0x0eUL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPA_MFP1 PB6  setting for PDCI_G3_TX2     */
#define SYS_GPB_MFP1_PB6MFP_ACMP1_O          (0x0fUL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPA_MFP1 PB6  setting for ACMP1_O         */
#define SYS_GPB_MFP1_PB6MFP_TM1              (0x10UL<<SYS_GPB_MFP1_PB6MFP_Pos)   /*!< GPA_MFP1 PB6  setting for TM1             */

/* PB.7 MFP */
#define SYS_GPB_MFP1_PB7MFP_GPIO             (0x00UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPB_MFP1 PB7  setting for GPIO            */
#define SYS_GPB_MFP1_PB7MFP_EADC0_CH7        (0x01UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPA_MFP1 PB7  setting for EADC0_CH7       */
#define SYS_GPB_MFP1_PB7MFP_EBI_nWRL         (0x02UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPA_MFP1 PB7  setting for EBI_nWRL        */
#define SYS_GPB_MFP1_PB7MFP_CANFD1_TXH       (0x03UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPA_MFP1 PB7  setting for CANFD1_TXH      */
#define SYS_GPB_MFP1_PB7MFP_USCI1_DAT0       (0x04UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPA_MFP1 PB7  setting for USCI1_DAT0      */
#define SYS_GPB_MFP1_PB7MFP_CANFD1_TXD       (0x05UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPA_MFP1 PB7  setting for CANFD1_TXD      */
#define SYS_GPB_MFP1_PB7MFP_UART1_TXD        (0x06UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPA_MFP1 PB7  setting for UART1_TXD       */
#define SYS_GPB_MFP1_PB7MFP_HSUSB_VBUS_ST    (0x07UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPA_MFP1 PB7  setting for HSUSB_VBUS_ST   */
#define SYS_GPB_MFP1_PB7MFP_EBI_nCS0         (0x08UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPA_MFP1 PB7  setting for EBI_nCS0        */
#define SYS_GPB_MFP1_PB7MFP_SPI0_SS          (0x09UL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPA_MFP1 PB7  setting for SPI0_SS         */
#define SYS_GPB_MFP1_PB7MFP_BPWM1_CH4        (0x0aUL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPA_MFP1 PB7  setting for BPWM1_CH4       */
#define SYS_GPB_MFP1_PB7MFP_EPWM1_BRAKE0     (0x0bUL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPA_MFP1 PB7  setting for EPWM1_BRAKE0    */
#define SYS_GPB_MFP1_PB7MFP_EPWM1_CH4        (0x0cUL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPA_MFP1 PB7  setting for EPWM1_CH4       */
#define SYS_GPB_MFP1_PB7MFP_INT5             (0x0dUL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPA_MFP1 PB7  setting for INT5            */
#define SYS_GPB_MFP1_PB7MFP_PDCI_G3_TX3      (0x0eUL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPA_MFP1 PB7  setting for PDCI_G3_TX3     */
#define SYS_GPB_MFP1_PB7MFP_ACMP0_O          (0x0fUL<<SYS_GPB_MFP1_PB7MFP_Pos)   /*!< GPA_MFP1 PB7  setting for ACMP0_O         */

/* PB.8 MFP */
#define SYS_GPB_MFP2_PB8MFP_GPIO             (0x00UL<<SYS_GPB_MFP2_PB8MFP_Pos)   /*!< GPB_MFP2 PB8  setting for GPIO            */
#define SYS_GPB_MFP2_PB8MFP_EADC0_CH8        (0x01UL<<SYS_GPB_MFP2_PB8MFP_Pos)   /*!< GPA_MFP2 PB8  setting for EADC0_CH8       */
#define SYS_GPB_MFP2_PB8MFP_EBI_ADR19        (0x02UL<<SYS_GPB_MFP2_PB8MFP_Pos)   /*!< GPA_MFP2 PB8  setting for EBI_ADR19       */
#define SYS_GPB_MFP2_PB8MFP_CANFD1_TXL       (0x03UL<<SYS_GPB_MFP2_PB8MFP_Pos)   /*!< GPA_MFP2 PB8  setting for CANFD1_TXL      */
#define SYS_GPB_MFP2_PB8MFP_USCI1_CLK        (0x04UL<<SYS_GPB_MFP2_PB8MFP_Pos)   /*!< GPA_MFP2 PB8  setting for USCI1_CLK       */
#define SYS_GPB_MFP2_PB8MFP_UART0_RXD        (0x05UL<<SYS_GPB_MFP2_PB8MFP_Pos)   /*!< GPA_MFP2 PB8  setting for UART0_RXD       */
#define SYS_GPB_MFP2_PB8MFP_UART1_nRTS       (0x06UL<<SYS_GPB_MFP2_PB8MFP_Pos)   /*!< GPA_MFP2 PB8  setting for UART1_nRTS      */
#define SYS_GPB_MFP2_PB8MFP_I2C1_SMBSUS      (0x07UL<<SYS_GPB_MFP2_PB8MFP_Pos)   /*!< GPA_MFP2 PB8  setting for I2C1_SMBSUS     */
#define SYS_GPB_MFP2_PB8MFP_I2C0_SDA         (0x09UL<<SYS_GPB_MFP2_PB8MFP_Pos)   /*!< GPA_MFP2 PB8  setting for I2C0_SDA        */
#define SYS_GPB_MFP2_PB8MFP_BPWM1_CH3        (0x0aUL<<SYS_GPB_MFP2_PB8MFP_Pos)   /*!< GPA_MFP2 PB8  setting for BPWM1_CH3       */
#define SYS_GPB_MFP2_PB8MFP_INT6             (0x0dUL<<SYS_GPB_MFP2_PB8MFP_Pos)   /*!< GPA_MFP2 PB8  setting for INT6            */
#define SYS_GPB_MFP2_PB8MFP_PDCI_G3_RX1      (0x0eUL<<SYS_GPB_MFP2_PB8MFP_Pos)   /*!< GPA_MFP2 PB8  setting for PDCI_G3_RX1     */
#define SYS_GPB_MFP2_PB8MFP_PDCI_G3_CLK      (0x0fUL<<SYS_GPB_MFP2_PB8MFP_Pos)   /*!< GPA_MFP2 PB8  setting for PDCI_G3_CLK     */

/* PB.9 MFP */
#define SYS_GPB_MFP2_PB9MFP_GPIO             (0x00UL<<SYS_GPB_MFP2_PB9MFP_Pos)   /*!< GPB_MFP2 PB9  setting for GPIO            */
#define SYS_GPB_MFP2_PB9MFP_EADC0_CH9        (0x01UL<<SYS_GPB_MFP2_PB9MFP_Pos)   /*!< GPA_MFP2 PB9  setting for EADC0_CH9       */
#define SYS_GPB_MFP2_PB9MFP_EBI_ADR18        (0x02UL<<SYS_GPB_MFP2_PB9MFP_Pos)   /*!< GPA_MFP2 PB9  setting for EBI_ADR18       */
#define SYS_GPB_MFP2_PB9MFP_USCI1_CTL1       (0x04UL<<SYS_GPB_MFP2_PB9MFP_Pos)   /*!< GPA_MFP2 PB9  setting for USCI1_CTL1      */
#define SYS_GPB_MFP2_PB9MFP_UART0_TXD        (0x05UL<<SYS_GPB_MFP2_PB9MFP_Pos)   /*!< GPA_MFP2 PB9  setting for UART0_TXD       */
#define SYS_GPB_MFP2_PB9MFP_UART1_nCTS       (0x06UL<<SYS_GPB_MFP2_PB9MFP_Pos)   /*!< GPA_MFP2 PB9  setting for UART1_nCTS      */
#define SYS_GPB_MFP2_PB9MFP_I2C1_SMBAL       (0x07UL<<SYS_GPB_MFP2_PB9MFP_Pos)   /*!< GPA_MFP2 PB9  setting for I2C1_SMBAL      */
#define SYS_GPB_MFP2_PB9MFP_I2C0_SCL         (0x09UL<<SYS_GPB_MFP2_PB9MFP_Pos)   /*!< GPA_MFP2 PB9  setting for I2C0_SCL        */
#define SYS_GPB_MFP2_PB9MFP_BPWM1_CH2        (0x0aUL<<SYS_GPB_MFP2_PB9MFP_Pos)   /*!< GPA_MFP2 PB9  setting for BPWM1_CH2       */
#define SYS_GPB_MFP2_PB9MFP_INT7             (0x0dUL<<SYS_GPB_MFP2_PB9MFP_Pos)   /*!< GPA_MFP2 PB9  setting for INT7            */
#define SYS_GPB_MFP2_PB9MFP_PDCI_G3_TX1      (0x0fUL<<SYS_GPB_MFP2_PB9MFP_Pos)   /*!< GPA_MFP2 PB9  setting for PDCI_G3_TX1     */
#define SYS_GPB_MFP2_PB9MFP_ELLSI0_OUT       (0x10UL<<SYS_GPB_MFP2_PB9MFP_Pos)   /*!< GPA_MFP2 PB9  setting for ELLSI0_OUT      */

/* PB.10 MFP */
#define SYS_GPB_MFP2_PB10MFP_GPIO            (0x00UL<<SYS_GPB_MFP2_PB10MFP_Pos)  /*!< GPB_MFP2 PB10 setting for GPIO            */
#define SYS_GPB_MFP2_PB10MFP_EADC0_CH10      (0x01UL<<SYS_GPB_MFP2_PB10MFP_Pos)  /*!< GPA_MFP2 PB10 setting for EADC0_CH10      */
#define SYS_GPB_MFP2_PB10MFP_EBI_ADR17       (0x02UL<<SYS_GPB_MFP2_PB10MFP_Pos)  /*!< GPA_MFP2 PB10 setting for EBI_ADR17       */
#define SYS_GPB_MFP2_PB10MFP_USCI1_CTL0      (0x04UL<<SYS_GPB_MFP2_PB10MFP_Pos)  /*!< GPA_MFP2 PB10 setting for USCI1_CTL0      */
#define SYS_GPB_MFP2_PB10MFP_UART0_nRTS      (0x05UL<<SYS_GPB_MFP2_PB10MFP_Pos)  /*!< GPA_MFP2 PB10 setting for UART0_nRTS      */
#define SYS_GPB_MFP2_PB10MFP_UART4_RXD       (0x06UL<<SYS_GPB_MFP2_PB10MFP_Pos)  /*!< GPA_MFP2 PB10 setting for UART4_RXD       */
#define SYS_GPB_MFP2_PB10MFP_I2C1_SDA        (0x07UL<<SYS_GPB_MFP2_PB10MFP_Pos)  /*!< GPA_MFP2 PB10 setting for I2C1_SDA        */
#define SYS_GPB_MFP2_PB10MFP_CANFD0_RXD      (0x08UL<<SYS_GPB_MFP2_PB10MFP_Pos)  /*!< GPA_MFP2 PB10 setting for CANFD0_RXD      */
#define SYS_GPB_MFP2_PB10MFP_BPWM1_CH1       (0x0aUL<<SYS_GPB_MFP2_PB10MFP_Pos)  /*!< GPA_MFP2 PB10 setting for BPWM1_CH1       */
#define SYS_GPB_MFP2_PB10MFP_HSUSB_VBUS_EN   (0x0eUL<<SYS_GPB_MFP2_PB10MFP_Pos)  /*!< GPA_MFP2 PB10 setting for HSUSB_VBUS_EN   */
#define SYS_GPB_MFP2_PB10MFP_PDCI_G3_TX0     (0x0fUL<<SYS_GPB_MFP2_PB10MFP_Pos)  /*!< GPA_MFP2 PB10 setting for PDCI_G3_TX0     */
#define SYS_GPB_MFP2_PB10MFP_LLSI9_OUT       (0x10UL<<SYS_GPB_MFP2_PB10MFP_Pos)  /*!< GPA_MFP2 PB10 setting for LLSI9_OUT       */

/* PB.11 MFP */
#define SYS_GPB_MFP2_PB11MFP_GPIO            (0x00UL<<SYS_GPB_MFP2_PB11MFP_Pos)  /*!< GPB_MFP2 PB11 setting for GPIO            */
#define SYS_GPB_MFP2_PB11MFP_EADC0_CH11      (0x01UL<<SYS_GPB_MFP2_PB11MFP_Pos)  /*!< GPA_MFP2 PB11 setting for EADC0_CH11      */
#define SYS_GPB_MFP2_PB11MFP_EBI_ADR16       (0x02UL<<SYS_GPB_MFP2_PB11MFP_Pos)  /*!< GPA_MFP2 PB11 setting for EBI_ADR16       */
#define SYS_GPB_MFP2_PB11MFP_CANFD0_TXH      (0x04UL<<SYS_GPB_MFP2_PB11MFP_Pos)  /*!< GPA_MFP2 PB11 setting for CANFD0_TXH      */
#define SYS_GPB_MFP2_PB11MFP_UART0_nCTS      (0x05UL<<SYS_GPB_MFP2_PB11MFP_Pos)  /*!< GPA_MFP2 PB11 setting for UART0_nCTS      */
#define SYS_GPB_MFP2_PB11MFP_UART4_TXD       (0x06UL<<SYS_GPB_MFP2_PB11MFP_Pos)  /*!< GPA_MFP2 PB11 setting for UART4_TXD       */
#define SYS_GPB_MFP2_PB11MFP_I2C1_SCL        (0x07UL<<SYS_GPB_MFP2_PB11MFP_Pos)  /*!< GPA_MFP2 PB11 setting for I2C1_SCL        */
#define SYS_GPB_MFP2_PB11MFP_CANFD0_TXD      (0x08UL<<SYS_GPB_MFP2_PB11MFP_Pos)  /*!< GPA_MFP2 PB11 setting for CANFD0_TXD      */
#define SYS_GPB_MFP2_PB11MFP_SPI0_I2SMCLK    (0x09UL<<SYS_GPB_MFP2_PB11MFP_Pos)  /*!< GPA_MFP2 PB11 setting for SPI0_I2SMCLK    */
#define SYS_GPB_MFP2_PB11MFP_BPWM1_CH0       (0x0aUL<<SYS_GPB_MFP2_PB11MFP_Pos)  /*!< GPA_MFP2 PB11 setting for BPWM1_CH0       */
#define SYS_GPB_MFP2_PB11MFP_PDCI_G3_RX0     (0x0cUL<<SYS_GPB_MFP2_PB11MFP_Pos)  /*!< GPA_MFP2 PB11 setting for PDCI_G3_RX0     */
#define SYS_GPB_MFP2_PB11MFP_HSUSB_VBUS_ST   (0x0eUL<<SYS_GPB_MFP2_PB11MFP_Pos)  /*!< GPA_MFP2 PB11 setting for HSUSB_VBUS_ST   */
#define SYS_GPB_MFP2_PB11MFP_LLSI8_OUT       (0x10UL<<SYS_GPB_MFP2_PB11MFP_Pos)  /*!< GPA_MFP2 PB11 setting for LLSI8_OUT       */

/* PB.12 MFP */
#define SYS_GPB_MFP3_PB12MFP_GPIO            (0x00UL<<SYS_GPB_MFP3_PB12MFP_Pos)  /*!< GPB_MFP3 PB12 setting for GPIO            */
#define SYS_GPB_MFP3_PB12MFP_EADC0_CH12      (0x01UL<<SYS_GPB_MFP3_PB12MFP_Pos)  /*!< GPA_MFP3 PB12 setting for EADC0_CH12      */
#define SYS_GPB_MFP3_PB12MFP_ACMP0_P2        (0x01UL<<SYS_GPB_MFP3_PB12MFP_Pos)  /*!< GPA_MFP3 PB12 setting for ACMP0_P2        */
#define SYS_GPB_MFP3_PB12MFP_ACMP1_P2        (0x01UL<<SYS_GPB_MFP3_PB12MFP_Pos)  /*!< GPA_MFP3 PB12 setting for ACMP1_P2        */
#define SYS_GPB_MFP3_PB12MFP_EBI_AD15        (0x02UL<<SYS_GPB_MFP3_PB12MFP_Pos)  /*!< GPA_MFP3 PB12 setting for EBI_AD15        */
#define SYS_GPB_MFP3_PB12MFP_CANFD0_TXL      (0x03UL<<SYS_GPB_MFP3_PB12MFP_Pos)  /*!< GPA_MFP3 PB12 setting for CANFD0_TXL      */
#define SYS_GPB_MFP3_PB12MFP_SPI0_MOSI       (0x04UL<<SYS_GPB_MFP3_PB12MFP_Pos)  /*!< GPA_MFP3 PB12 setting for SPI0_MOSI       */
#define SYS_GPB_MFP3_PB12MFP_USCI0_CLK       (0x05UL<<SYS_GPB_MFP3_PB12MFP_Pos)  /*!< GPA_MFP3 PB12 setting for USCI0_CLK       */
#define SYS_GPB_MFP3_PB12MFP_UART0_RXD       (0x06UL<<SYS_GPB_MFP3_PB12MFP_Pos)  /*!< GPA_MFP3 PB12 setting for UART0_RXD       */
#define SYS_GPB_MFP3_PB12MFP_UART3_nCTS      (0x07UL<<SYS_GPB_MFP3_PB12MFP_Pos)  /*!< GPA_MFP3 PB12 setting for UART3_nCTS      */
#define SYS_GPB_MFP3_PB12MFP_I2C2_SDA        (0x08UL<<SYS_GPB_MFP3_PB12MFP_Pos)  /*!< GPA_MFP3 PB12 setting for I2C2_SDA        */
#define SYS_GPB_MFP3_PB12MFP_SD0_nCD         (0x09UL<<SYS_GPB_MFP3_PB12MFP_Pos)  /*!< GPA_MFP3 PB12 setting for SD0_nCD         */
#define SYS_GPB_MFP3_PB12MFP_BPWM2_CH4       (0x0aUL<<SYS_GPB_MFP3_PB12MFP_Pos)  /*!< GPA_MFP3 PB12 setting for BPWM2_CH4       */
#define SYS_GPB_MFP3_PB12MFP_EPWM1_CH3       (0x0bUL<<SYS_GPB_MFP3_PB12MFP_Pos)  /*!< GPA_MFP3 PB12 setting for EPWM1_CH3       */
#define SYS_GPB_MFP3_PB12MFP_QSPI0_CLK       (0x0cUL<<SYS_GPB_MFP3_PB12MFP_Pos)  /*!< GPA_MFP3 PB12 setting for QSPI0_CLK       */
#define SYS_GPB_MFP3_PB12MFP_TM3_EXT         (0x0dUL<<SYS_GPB_MFP3_PB12MFP_Pos)  /*!< GPA_MFP3 PB12 setting for TM3_EXT         */
#define SYS_GPB_MFP3_PB12MFP_EBI_AD11        (0x0eUL<<SYS_GPB_MFP3_PB12MFP_Pos)  /*!< GPA_MFP3 PB12 setting for EBI_AD11        */
#define SYS_GPB_MFP3_PB12MFP_SPI0_I2SMCLK    (0x0fUL<<SYS_GPB_MFP3_PB12MFP_Pos)  /*!< GPA_MFP3 PB12 setting for SPI0_I2SMCLK    */
#define SYS_GPB_MFP3_PB12MFP_LLSI3_OUT       (0x10UL<<SYS_GPB_MFP3_PB12MFP_Pos)  /*!< GPA_MFP3 PB12 setting for LLSI3_OUT       */

/* PB.13 MFP */
#define SYS_GPB_MFP3_PB13MFP_GPIO            (0x00UL<<SYS_GPB_MFP3_PB13MFP_Pos)  /*!< GPB_MFP3 PB13 setting for GPIO            */
#define SYS_GPB_MFP3_PB13MFP_EADC0_CH13      (0x01UL<<SYS_GPB_MFP3_PB13MFP_Pos)  /*!< GPA_MFP3 PB13 setting for EADC0_CH13      */
#define SYS_GPB_MFP3_PB13MFP_ACMP0_P3        (0x01UL<<SYS_GPB_MFP3_PB13MFP_Pos)  /*!< GPA_MFP3 PB13 setting for ACMP0_P3        */
#define SYS_GPB_MFP3_PB13MFP_ACMP1_P3        (0x01UL<<SYS_GPB_MFP3_PB13MFP_Pos)  /*!< GPA_MFP3 PB13 setting for ACMP1_P3        */
#define SYS_GPB_MFP3_PB13MFP_EBI_AD14        (0x02UL<<SYS_GPB_MFP3_PB13MFP_Pos)  /*!< GPA_MFP3 PB13 setting for EBI_AD14        */
#define SYS_GPB_MFP3_PB13MFP_PDCI_G3_RX0     (0x03UL<<SYS_GPB_MFP3_PB13MFP_Pos)  /*!< GPA_MFP3 PB13 setting for PDCI_G3_RX0     */
#define SYS_GPB_MFP3_PB13MFP_SPI0_MISO       (0x04UL<<SYS_GPB_MFP3_PB13MFP_Pos)  /*!< GPA_MFP3 PB13 setting for SPI0_MISO       */
#define SYS_GPB_MFP3_PB13MFP_USCI0_DAT0      (0x05UL<<SYS_GPB_MFP3_PB13MFP_Pos)  /*!< GPA_MFP3 PB13 setting for USCI0_DAT0      */
#define SYS_GPB_MFP3_PB13MFP_UART0_TXD       (0x06UL<<SYS_GPB_MFP3_PB13MFP_Pos)  /*!< GPA_MFP3 PB13 setting for UART0_TXD       */
#define SYS_GPB_MFP3_PB13MFP_UART3_nRTS      (0x07UL<<SYS_GPB_MFP3_PB13MFP_Pos)  /*!< GPA_MFP3 PB13 setting for UART3_nRTS      */
#define SYS_GPB_MFP3_PB13MFP_I2C2_SCL        (0x08UL<<SYS_GPB_MFP3_PB13MFP_Pos)  /*!< GPA_MFP3 PB13 setting for I2C2_SCL        */
#define SYS_GPB_MFP3_PB13MFP_CLKO            (0x09UL<<SYS_GPB_MFP3_PB13MFP_Pos)  /*!< GPA_MFP3 PB13 setting for CLKO            */
#define SYS_GPB_MFP3_PB13MFP_BPWM2_CH3       (0x0aUL<<SYS_GPB_MFP3_PB13MFP_Pos)  /*!< GPA_MFP3 PB13 setting for BPWM2_CH3       */
#define SYS_GPB_MFP3_PB13MFP_EPWM1_CH2       (0x0bUL<<SYS_GPB_MFP3_PB13MFP_Pos)  /*!< GPA_MFP3 PB13 setting for EPWM1_CH2       */
#define SYS_GPB_MFP3_PB13MFP_USCI0_CTL0      (0x0cUL<<SYS_GPB_MFP3_PB13MFP_Pos)  /*!< GPA_MFP3 PB13 setting for USCI0_CTL0      */
#define SYS_GPB_MFP3_PB13MFP_TM2_EXT         (0x0dUL<<SYS_GPB_MFP3_PB13MFP_Pos)  /*!< GPA_MFP3 PB13 setting for TM2_EXT         */
#define SYS_GPB_MFP3_PB13MFP_HSUSB_VBUS_ST   (0x0fUL<<SYS_GPB_MFP3_PB13MFP_Pos)  /*!< GPA_MFP3 PB13 setting for HSUSB_VBUS_ST   */
#define SYS_GPB_MFP3_PB13MFP_LLSI2_OUT       (0x10UL<<SYS_GPB_MFP3_PB13MFP_Pos)  /*!< GPA_MFP3 PB13 setting for LLSI2_OUT       */

/* PB.14 MFP */
#define SYS_GPB_MFP3_PB14MFP_GPIO            (0x00UL<<SYS_GPB_MFP3_PB14MFP_Pos)  /*!< GPB_MFP3 PB14 setting for GPIO            */
#define SYS_GPB_MFP3_PB14MFP_EADC0_CH14      (0x01UL<<SYS_GPB_MFP3_PB14MFP_Pos)  /*!< GPA_MFP3 PB14 setting for EADC0_CH14      */
#define SYS_GPB_MFP3_PB14MFP_EBI_AD13        (0x02UL<<SYS_GPB_MFP3_PB14MFP_Pos)  /*!< GPA_MFP3 PB14 setting for EBI_AD13        */
#define SYS_GPB_MFP3_PB14MFP_SPI0_CLK        (0x04UL<<SYS_GPB_MFP3_PB14MFP_Pos)  /*!< GPA_MFP3 PB14 setting for SPI0_CLK        */
#define SYS_GPB_MFP3_PB14MFP_USCI0_DAT1      (0x05UL<<SYS_GPB_MFP3_PB14MFP_Pos)  /*!< GPA_MFP3 PB14 setting for USCI0_DAT1      */
#define SYS_GPB_MFP3_PB14MFP_UART0_nRTS      (0x06UL<<SYS_GPB_MFP3_PB14MFP_Pos)  /*!< GPA_MFP3 PB14 setting for UART0_nRTS      */
#define SYS_GPB_MFP3_PB14MFP_UART3_RXD       (0x07UL<<SYS_GPB_MFP3_PB14MFP_Pos)  /*!< GPA_MFP3 PB14 setting for UART3_RXD       */
#define SYS_GPB_MFP3_PB14MFP_I2C2_SMBSUS     (0x08UL<<SYS_GPB_MFP3_PB14MFP_Pos)  /*!< GPA_MFP3 PB14 setting for I2C2_SMBSUS     */
#define SYS_GPB_MFP3_PB14MFP_PDCI_G2_RX0     (0x09UL<<SYS_GPB_MFP3_PB14MFP_Pos)  /*!< GPA_MFP3 PB14 setting for PDCI_G2_RX0     */
#define SYS_GPB_MFP3_PB14MFP_EPWM1_CH1       (0x0bUL<<SYS_GPB_MFP3_PB14MFP_Pos)  /*!< GPA_MFP3 PB14 setting for EPWM1_CH1       */
#define SYS_GPB_MFP3_PB14MFP_BPWM2_CH2       (0x0cUL<<SYS_GPB_MFP3_PB14MFP_Pos)  /*!< GPA_MFP3 PB14 setting for BPWM2_CH2       */
#define SYS_GPB_MFP3_PB14MFP_TM1_EXT         (0x0dUL<<SYS_GPB_MFP3_PB14MFP_Pos)  /*!< GPA_MFP3 PB14 setting for TM1_EXT         */
#define SYS_GPB_MFP3_PB14MFP_CLKO            (0x0eUL<<SYS_GPB_MFP3_PB14MFP_Pos)  /*!< GPA_MFP3 PB14 setting for CLKO            */
#define SYS_GPB_MFP3_PB14MFP_LLSI1_OUT       (0x10UL<<SYS_GPB_MFP3_PB14MFP_Pos)  /*!< GPA_MFP3 PB14 setting for LLSI1_OUT       */

/* PB.15 MFP */
#define SYS_GPB_MFP3_PB15MFP_GPIO            (0x00UL<<SYS_GPB_MFP3_PB15MFP_Pos)  /*!< GPB_MFP3 PB15 setting for GPIO            */
#define SYS_GPB_MFP3_PB15MFP_EADC0_CH15      (0x01UL<<SYS_GPB_MFP3_PB15MFP_Pos)  /*!< GPA_MFP3 PB15 setting for EADC0_CH15      */
#define SYS_GPB_MFP3_PB15MFP_EBI_AD12        (0x02UL<<SYS_GPB_MFP3_PB15MFP_Pos)  /*!< GPA_MFP3 PB15 setting for EBI_AD12        */
#define SYS_GPB_MFP3_PB15MFP_SPI0_SS         (0x04UL<<SYS_GPB_MFP3_PB15MFP_Pos)  /*!< GPA_MFP3 PB15 setting for SPI0_SS         */
#define SYS_GPB_MFP3_PB15MFP_USCI0_CTL1      (0x05UL<<SYS_GPB_MFP3_PB15MFP_Pos)  /*!< GPA_MFP3 PB15 setting for USCI0_CTL1      */
#define SYS_GPB_MFP3_PB15MFP_UART0_nCTS      (0x06UL<<SYS_GPB_MFP3_PB15MFP_Pos)  /*!< GPA_MFP3 PB15 setting for UART0_nCTS      */
#define SYS_GPB_MFP3_PB15MFP_UART3_TXD       (0x07UL<<SYS_GPB_MFP3_PB15MFP_Pos)  /*!< GPA_MFP3 PB15 setting for UART3_TXD       */
#define SYS_GPB_MFP3_PB15MFP_I2C2_SMBAL      (0x08UL<<SYS_GPB_MFP3_PB15MFP_Pos)  /*!< GPA_MFP3 PB15 setting for I2C2_SMBAL      */
#define SYS_GPB_MFP3_PB15MFP_PDCI_G1_RX0     (0x09UL<<SYS_GPB_MFP3_PB15MFP_Pos)  /*!< GPA_MFP3 PB15 setting for PDCI_G1_RX0     */
#define SYS_GPB_MFP3_PB15MFP_EPWM0_BRAKE1    (0x0aUL<<SYS_GPB_MFP3_PB15MFP_Pos)  /*!< GPA_MFP3 PB15 setting for EPWM0_BRAKE1    */
#define SYS_GPB_MFP3_PB15MFP_EPWM1_CH0       (0x0bUL<<SYS_GPB_MFP3_PB15MFP_Pos)  /*!< GPA_MFP3 PB15 setting for EPWM1_CH0       */
#define SYS_GPB_MFP3_PB15MFP_BPWM2_CH1       (0x0cUL<<SYS_GPB_MFP3_PB15MFP_Pos)  /*!< GPA_MFP3 PB15 setting for BPWM2_CH1       */
#define SYS_GPB_MFP3_PB15MFP_TM0_EXT         (0x0dUL<<SYS_GPB_MFP3_PB15MFP_Pos)  /*!< GPA_MFP3 PB15 setting for TM0_EXT         */
#define SYS_GPB_MFP3_PB15MFP_HSUSB_VBUS_EN   (0x0fUL<<SYS_GPB_MFP3_PB15MFP_Pos)  /*!< GPA_MFP3 PB15 setting for HSUSB_VBUS_EN   */
#define SYS_GPB_MFP3_PB15MFP_LLSI0_OUT       (0x10UL<<SYS_GPB_MFP3_PB15MFP_Pos)  /*!< GPA_MFP3 PB15 setting for LLSI0_OUT       */

/* PC.0 MFP */
#define SYS_GPC_MFP0_PC0MFP_GPIO             (0x00UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPC_MFP0 PC0  setting for GPIO            */
#define SYS_GPC_MFP0_PC0MFP_EBI_AD0          (0x02UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPA_MFP0 PC0  setting for EBI_AD0         */
#define SYS_GPC_MFP0_PC0MFP_PDCI_G5_CLK      (0x03UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPA_MFP0 PC0  setting for PDCI_G5_CLK     */
#define SYS_GPC_MFP0_PC0MFP_QSPI0_MOSI0      (0x04UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPA_MFP0 PC0  setting for QSPI0_MOSI0     */
#define SYS_GPC_MFP0_PC0MFP_PDCI_G5_RX1      (0x05UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPA_MFP0 PC0  setting for PDCI_G5_RX1     */
#define SYS_GPC_MFP0_PC0MFP_I2S0_LRCK        (0x06UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPA_MFP0 PC0  setting for I2S0_LRCK       */
#define SYS_GPC_MFP0_PC0MFP_SPI1_SS          (0x07UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPA_MFP0 PC0  setting for SPI1_SS         */
#define SYS_GPC_MFP0_PC0MFP_UART2_RXD        (0x08UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPA_MFP0 PC0  setting for UART2_RXD       */
#define SYS_GPC_MFP0_PC0MFP_I2C0_SDA         (0x09UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPA_MFP0 PC0  setting for I2C0_SDA        */
#define SYS_GPC_MFP0_PC0MFP_BPWM4_CH5        (0x0bUL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPA_MFP0 PC0  setting for BPWM4_CH5       */
#define SYS_GPC_MFP0_PC0MFP_EPWM1_CH5        (0x0cUL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPA_MFP0 PC0  setting for EPWM1_CH5       */
#define SYS_GPC_MFP0_PC0MFP_ACMP1_O          (0x0eUL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPA_MFP0 PC0  setting for ACMP1_O         */
#define SYS_GPC_MFP0_PC0MFP_LLSI9_OUT        (0x10UL<<SYS_GPC_MFP0_PC0MFP_Pos)   /*!< GPA_MFP0 PC0  setting for LLSI9_OUT       */

/* PC.1 MFP */
#define SYS_GPC_MFP0_PC1MFP_GPIO             (0x00UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPC_MFP0 PC1  setting for GPIO            */
#define SYS_GPC_MFP0_PC1MFP_EBI_AD1          (0x02UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPA_MFP0 PC1  setting for EBI_AD1         */
#define SYS_GPC_MFP0_PC1MFP_PDCI_G4_CLK      (0x03UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPA_MFP0 PC1  setting for PDCI_G4_CLK     */
#define SYS_GPC_MFP0_PC1MFP_QSPI0_MISO0      (0x04UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPA_MFP0 PC1  setting for QSPI0_MISO0     */
#define SYS_GPC_MFP0_PC1MFP_PDCI_G4_RX1      (0x05UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPA_MFP0 PC1  setting for PDCI_G4_RX1     */
#define SYS_GPC_MFP0_PC1MFP_I2S0_DO          (0x06UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPA_MFP0 PC1  setting for I2S0_DO         */
#define SYS_GPC_MFP0_PC1MFP_SPI1_CLK         (0x07UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPA_MFP0 PC1  setting for SPI1_CLK        */
#define SYS_GPC_MFP0_PC1MFP_UART2_TXD        (0x08UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPA_MFP0 PC1  setting for UART2_TXD       */
#define SYS_GPC_MFP0_PC1MFP_I2C0_SCL         (0x09UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPA_MFP0 PC1  setting for I2C0_SCL        */
#define SYS_GPC_MFP0_PC1MFP_BPWM4_CH4        (0x0bUL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPA_MFP0 PC1  setting for BPWM4_CH4       */
#define SYS_GPC_MFP0_PC1MFP_EPWM1_CH4        (0x0cUL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPA_MFP0 PC1  setting for EPWM1_CH4       */
#define SYS_GPC_MFP0_PC1MFP_ELLSI0_OUT       (0x0dUL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPA_MFP0 PC1  setting for ELLSI0_OUT      */
#define SYS_GPC_MFP0_PC1MFP_ACMP0_O          (0x0eUL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPA_MFP0 PC1  setting for ACMP0_O         */
#define SYS_GPC_MFP0_PC1MFP_EADC0_ST         (0x0fUL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPA_MFP0 PC1  setting for EADC0_ST        */
#define SYS_GPC_MFP0_PC1MFP_LLSI8_OUT        (0x10UL<<SYS_GPC_MFP0_PC1MFP_Pos)   /*!< GPA_MFP0 PC1  setting for LLSI8_OUT       */

/* PC.2 MFP */
#define SYS_GPC_MFP0_PC2MFP_GPIO             (0x00UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPC_MFP0 PC2  setting for GPIO            */
#define SYS_GPC_MFP0_PC2MFP_EBI_AD2          (0x02UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPA_MFP0 PC2  setting for EBI_AD2         */
#define SYS_GPC_MFP0_PC2MFP_PDCI_G4_TX3      (0x03UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPA_MFP0 PC2  setting for PDCI_G4_TX3     */
#define SYS_GPC_MFP0_PC2MFP_QSPI0_CLK        (0x04UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPA_MFP0 PC2  setting for QSPI0_CLK       */
#define SYS_GPC_MFP0_PC2MFP_I2S0_DI          (0x06UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPA_MFP0 PC2  setting for I2S0_DI         */
#define SYS_GPC_MFP0_PC2MFP_SPI1_MOSI        (0x07UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPA_MFP0 PC2  setting for SPI1_MOSI       */
#define SYS_GPC_MFP0_PC2MFP_UART2_nCTS       (0x08UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPA_MFP0 PC2  setting for UART2_nCTS      */
#define SYS_GPC_MFP0_PC2MFP_I2C0_SMBSUS      (0x09UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPA_MFP0 PC2  setting for I2C0_SMBSUS     */
#define SYS_GPC_MFP0_PC2MFP_CANFD1_RXD       (0x0aUL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPA_MFP0 PC2  setting for CANFD1_RXD      */
#define SYS_GPC_MFP0_PC2MFP_UART3_RXD        (0x0bUL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPA_MFP0 PC2  setting for UART3_RXD       */
#define SYS_GPC_MFP0_PC2MFP_EPWM1_CH3        (0x0cUL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPA_MFP0 PC2  setting for EPWM1_CH3       */
#define SYS_GPC_MFP0_PC2MFP_LLSI7_OUT        (0x0dUL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPA_MFP0 PC2  setting for LLSI7_OUT       */
#define SYS_GPC_MFP0_PC2MFP_BPWM4_CH3        (0x0eUL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPA_MFP0 PC2  setting for BPWM4_CH3       */
#define SYS_GPC_MFP0_PC2MFP_LLSI3_OUT        (0x10UL<<SYS_GPC_MFP0_PC2MFP_Pos)   /*!< GPA_MFP0 PC2  setting for LLSI3_OUT       */

/* PC.3 MFP */
#define SYS_GPC_MFP0_PC3MFP_GPIO             (0x00UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPC_MFP0 PC3  setting for GPIO            */
#define SYS_GPC_MFP0_PC3MFP_EBI_AD3          (0x02UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPA_MFP0 PC3  setting for EBI_AD3         */
#define SYS_GPC_MFP0_PC3MFP_PDCI_G4_TX2      (0x03UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPA_MFP0 PC3  setting for PDCI_G4_TX2     */
#define SYS_GPC_MFP0_PC3MFP_QSPI0_SS         (0x04UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPA_MFP0 PC3  setting for QSPI0_SS        */
#define SYS_GPC_MFP0_PC3MFP_CANFD1_TXH       (0x05UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPA_MFP0 PC3  setting for CANFD1_TXH      */
#define SYS_GPC_MFP0_PC3MFP_I2S0_MCLK        (0x06UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPA_MFP0 PC3  setting for I2S0_MCLK       */
#define SYS_GPC_MFP0_PC3MFP_SPI1_MISO        (0x07UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPA_MFP0 PC3  setting for SPI1_MISO       */
#define SYS_GPC_MFP0_PC3MFP_UART2_nRTS       (0x08UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPA_MFP0 PC3  setting for UART2_nRTS      */
#define SYS_GPC_MFP0_PC3MFP_I2C0_SMBAL       (0x09UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPA_MFP0 PC3  setting for I2C0_SMBAL      */
#define SYS_GPC_MFP0_PC3MFP_CANFD1_TXD       (0x0aUL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPA_MFP0 PC3  setting for CANFD1_TXD      */
#define SYS_GPC_MFP0_PC3MFP_UART3_TXD        (0x0bUL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPA_MFP0 PC3  setting for UART3_TXD       */
#define SYS_GPC_MFP0_PC3MFP_EPWM1_CH2        (0x0cUL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPA_MFP0 PC3  setting for EPWM1_CH2       */
#define SYS_GPC_MFP0_PC3MFP_BPWM4_CH2        (0x0eUL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPA_MFP0 PC3  setting for BPWM4_CH2       */
#define SYS_GPC_MFP0_PC3MFP_LLSI2_OUT        (0x10UL<<SYS_GPC_MFP0_PC3MFP_Pos)   /*!< GPA_MFP0 PC3  setting for LLSI2_OUT       */

/* PC.4 MFP */
#define SYS_GPC_MFP1_PC4MFP_GPIO             (0x00UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPC_MFP1 PC4  setting for GPIO            */
#define SYS_GPC_MFP1_PC4MFP_EBI_AD4          (0x02UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPA_MFP1 PC4  setting for EBI_AD4         */
#define SYS_GPC_MFP1_PC4MFP_PDCI_G4_TX1      (0x03UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPA_MFP1 PC4  setting for PDCI_G4_TX1     */
#define SYS_GPC_MFP1_PC4MFP_QSPI0_MOSI1      (0x04UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPA_MFP1 PC4  setting for QSPI0_MOSI1     */
#define SYS_GPC_MFP1_PC4MFP_CANFD1_TXL       (0x05UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPA_MFP1 PC4  setting for CANFD1_TXL      */
#define SYS_GPC_MFP1_PC4MFP_I2S0_BCLK        (0x06UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPA_MFP1 PC4  setting for I2S0_BCLK       */
#define SYS_GPC_MFP1_PC4MFP_SPI1_I2SMCLK     (0x07UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPA_MFP1 PC4  setting for SPI1_I2SMCLK    */
#define SYS_GPC_MFP1_PC4MFP_UART2_RXD        (0x08UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPA_MFP1 PC4  setting for UART2_RXD       */
#define SYS_GPC_MFP1_PC4MFP_I2C1_SDA         (0x09UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPA_MFP1 PC4  setting for I2C1_SDA        */
#define SYS_GPC_MFP1_PC4MFP_CANFD0_RXD       (0x0aUL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPA_MFP1 PC4  setting for CANFD0_RXD      */
#define SYS_GPC_MFP1_PC4MFP_UART4_RXD        (0x0bUL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPA_MFP1 PC4  setting for UART4_RXD       */
#define SYS_GPC_MFP1_PC4MFP_EPWM1_CH1        (0x0cUL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPA_MFP1 PC4  setting for EPWM1_CH1       */
#define SYS_GPC_MFP1_PC4MFP_BPWM4_CH1        (0x0eUL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPA_MFP1 PC4  setting for BPWM4_CH1       */
#define SYS_GPC_MFP1_PC4MFP_LLSI1_OUT        (0x10UL<<SYS_GPC_MFP1_PC4MFP_Pos)   /*!< GPA_MFP1 PC4  setting for LLSI1_OUT       */

/* PC.5 MFP */
#define SYS_GPC_MFP1_PC5MFP_GPIO             (0x00UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPC_MFP1 PC5  setting for GPIO            */
#define SYS_GPC_MFP1_PC5MFP_EBI_AD5          (0x02UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPA_MFP1 PC5  setting for EBI_AD5         */
#define SYS_GPC_MFP1_PC5MFP_PDCI_G4_TX0      (0x03UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPA_MFP1 PC5  setting for PDCI_G4_TX0     */
#define SYS_GPC_MFP1_PC5MFP_QSPI0_MISO1      (0x04UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPA_MFP1 PC5  setting for QSPI0_MISO1     */
#define SYS_GPC_MFP1_PC5MFP_CANFD0_TXH       (0x07UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPA_MFP1 PC5  setting for CANFD0_TXH      */
#define SYS_GPC_MFP1_PC5MFP_UART2_TXD        (0x08UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPA_MFP1 PC5  setting for UART2_TXD       */
#define SYS_GPC_MFP1_PC5MFP_I2C1_SCL         (0x09UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPA_MFP1 PC5  setting for I2C1_SCL        */
#define SYS_GPC_MFP1_PC5MFP_CANFD0_TXD       (0x0aUL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPA_MFP1 PC5  setting for CANFD0_TXD      */
#define SYS_GPC_MFP1_PC5MFP_UART4_TXD        (0x0bUL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPA_MFP1 PC5  setting for UART4_TXD       */
#define SYS_GPC_MFP1_PC5MFP_EPWM1_CH0        (0x0cUL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPA_MFP1 PC5  setting for EPWM1_CH0       */
#define SYS_GPC_MFP1_PC5MFP_BPWM4_CH0        (0x0eUL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPA_MFP1 PC5  setting for BPWM4_CH0       */
#define SYS_GPC_MFP1_PC5MFP_I3C0_PUPEN       (0x0fUL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPA_MFP1 PC5  setting for I3C0_PUPEN      */
#define SYS_GPC_MFP1_PC5MFP_LLSI0_OUT        (0x10UL<<SYS_GPC_MFP1_PC5MFP_Pos)   /*!< GPA_MFP1 PC5  setting for LLSI0_OUT       */

/* PC.6 MFP */
#define SYS_GPC_MFP1_PC6MFP_GPIO             (0x00UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPC_MFP1 PC6  setting for GPIO            */
#define SYS_GPC_MFP1_PC6MFP_EBI_AD8          (0x02UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPA_MFP1 PC6  setting for EBI_AD8         */
#define SYS_GPC_MFP1_PC6MFP_SPI1_MOSI        (0x04UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPA_MFP1 PC6  setting for SPI1_MOSI       */
#define SYS_GPC_MFP1_PC6MFP_UART4_RXD        (0x05UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPA_MFP1 PC6  setting for UART4_RXD       */
#define SYS_GPC_MFP1_PC6MFP_UART0_nRTS       (0x07UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPA_MFP1 PC6  setting for UART0_nRTS      */
#define SYS_GPC_MFP1_PC6MFP_I2C1_SMBSUS      (0x08UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPA_MFP1 PC6  setting for I2C1_SMBSUS     */
#define SYS_GPC_MFP1_PC6MFP_EPWM1_CH3        (0x0bUL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPA_MFP1 PC6  setting for EPWM1_CH3       */
#define SYS_GPC_MFP1_PC6MFP_BPWM1_CH1        (0x0cUL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPA_MFP1 PC6  setting for BPWM1_CH1       */
#define SYS_GPC_MFP1_PC6MFP_PDCI_G0_CLK      (0x0dUL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPA_MFP1 PC6  setting for PDCI_G0_CLK     */
#define SYS_GPC_MFP1_PC6MFP_TM1              (0x0eUL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPA_MFP1 PC6  setting for TM1             */
#define SYS_GPC_MFP1_PC6MFP_INT2             (0x0fUL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPA_MFP1 PC6  setting for INT2            */
#define SYS_GPC_MFP1_PC6MFP_PDCI_G0_RX0      (0x10UL<<SYS_GPC_MFP1_PC6MFP_Pos)   /*!< GPA_MFP1 PC6  setting for PDCI_G0_RX0     */

/* PC.7 MFP */
#define SYS_GPC_MFP1_PC7MFP_GPIO             (0x00UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPC_MFP1 PC7  setting for GPIO            */
#define SYS_GPC_MFP1_PC7MFP_EBI_AD9          (0x02UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPA_MFP1 PC7  setting for EBI_AD9         */
#define SYS_GPC_MFP1_PC7MFP_SPI1_MISO        (0x04UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPA_MFP1 PC7  setting for SPI1_MISO       */
#define SYS_GPC_MFP1_PC7MFP_UART4_TXD        (0x05UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPA_MFP1 PC7  setting for UART4_TXD       */
#define SYS_GPC_MFP1_PC7MFP_UART0_nCTS       (0x07UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPA_MFP1 PC7  setting for UART0_nCTS      */
#define SYS_GPC_MFP1_PC7MFP_I2C1_SMBAL       (0x08UL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPA_MFP1 PC7  setting for I2C1_SMBAL      */
#define SYS_GPC_MFP1_PC7MFP_EPWM1_CH2        (0x0bUL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPA_MFP1 PC7  setting for EPWM1_CH2       */
#define SYS_GPC_MFP1_PC7MFP_BPWM1_CH0        (0x0cUL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPA_MFP1 PC7  setting for BPWM1_CH0       */
#define SYS_GPC_MFP1_PC7MFP_TM0              (0x0eUL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPA_MFP1 PC7  setting for TM0             */
#define SYS_GPC_MFP1_PC7MFP_INT3             (0x0fUL<<SYS_GPC_MFP1_PC7MFP_Pos)   /*!< GPA_MFP1 PC7  setting for INT3            */

/* PC.8 MFP */
#define SYS_GPC_MFP2_PC8MFP_GPIO             (0x00UL<<SYS_GPC_MFP2_PC8MFP_Pos)   /*!< GPC_MFP2 PC8  setting for GPIO            */
#define SYS_GPC_MFP2_PC8MFP_EBI_ADR16        (0x02UL<<SYS_GPC_MFP2_PC8MFP_Pos)   /*!< GPA_MFP2 PC8  setting for EBI_ADR16       */
#define SYS_GPC_MFP2_PC8MFP_I2C0_SDA         (0x04UL<<SYS_GPC_MFP2_PC8MFP_Pos)   /*!< GPA_MFP2 PC8  setting for I2C0_SDA        */
#define SYS_GPC_MFP2_PC8MFP_UART4_nCTS       (0x05UL<<SYS_GPC_MFP2_PC8MFP_Pos)   /*!< GPA_MFP2 PC8  setting for UART4_nCTS      */
#define SYS_GPC_MFP2_PC8MFP_UART1_RXD        (0x08UL<<SYS_GPC_MFP2_PC8MFP_Pos)   /*!< GPA_MFP2 PC8  setting for UART1_RXD       */
#define SYS_GPC_MFP2_PC8MFP_EPWM1_CH1        (0x0bUL<<SYS_GPC_MFP2_PC8MFP_Pos)   /*!< GPA_MFP2 PC8  setting for EPWM1_CH1       */
#define SYS_GPC_MFP2_PC8MFP_BPWM1_CH4        (0x0cUL<<SYS_GPC_MFP2_PC8MFP_Pos)   /*!< GPA_MFP2 PC8  setting for BPWM1_CH4       */

/* PC.9 MFP */
#define SYS_GPC_MFP2_PC9MFP_GPIO             (0x00UL<<SYS_GPC_MFP2_PC9MFP_Pos)   /*!< GPC_MFP2 PC9  setting for GPIO            */
#define SYS_GPC_MFP2_PC9MFP_EBI_ADR7         (0x02UL<<SYS_GPC_MFP2_PC9MFP_Pos)   /*!< GPA_MFP2 PC9  setting for EBI_ADR7        */
#define SYS_GPC_MFP2_PC9MFP_UART3_RXD        (0x07UL<<SYS_GPC_MFP2_PC9MFP_Pos)   /*!< GPA_MFP2 PC9  setting for UART3_RXD       */
#define SYS_GPC_MFP2_PC9MFP_CANFD1_RXD       (0x09UL<<SYS_GPC_MFP2_PC9MFP_Pos)   /*!< GPA_MFP2 PC9  setting for CANFD1_RXD      */
#define SYS_GPC_MFP2_PC9MFP_EPWM1_CH3        (0x0cUL<<SYS_GPC_MFP2_PC9MFP_Pos)   /*!< GPA_MFP2 PC9  setting for EPWM1_CH3       */
#define SYS_GPC_MFP2_PC9MFP_I3C0_PUPEN       (0x0fUL<<SYS_GPC_MFP2_PC9MFP_Pos)   /*!< GPA_MFP2 PC9  setting for I3C0_PUPEN      */

/* PC.10 MFP */
#define SYS_GPC_MFP2_PC10MFP_GPIO            (0x00UL<<SYS_GPC_MFP2_PC10MFP_Pos)  /*!< GPC_MFP2 PC10 setting for GPIO            */
#define SYS_GPC_MFP2_PC10MFP_EBI_ADR6        (0x02UL<<SYS_GPC_MFP2_PC10MFP_Pos)  /*!< GPA_MFP2 PC10 setting for EBI_ADR6        */
#define SYS_GPC_MFP2_PC10MFP_UART3_TXD       (0x07UL<<SYS_GPC_MFP2_PC10MFP_Pos)  /*!< GPA_MFP2 PC10 setting for UART3_TXD       */
#define SYS_GPC_MFP2_PC10MFP_CANFD1_TXD      (0x09UL<<SYS_GPC_MFP2_PC10MFP_Pos)  /*!< GPA_MFP2 PC10 setting for CANFD1_TXD      */
#define SYS_GPC_MFP2_PC10MFP_CANFD1_TXH      (0x0aUL<<SYS_GPC_MFP2_PC10MFP_Pos)  /*!< GPA_MFP2 PC10 setting for CANFD1_TXH      */
#define SYS_GPC_MFP2_PC10MFP_EPWM1_CH2       (0x0cUL<<SYS_GPC_MFP2_PC10MFP_Pos)  /*!< GPA_MFP2 PC10 setting for EPWM1_CH2       */

/* PC.11 MFP */
#define SYS_GPC_MFP2_PC11MFP_GPIO            (0x00UL<<SYS_GPC_MFP2_PC11MFP_Pos)  /*!< GPC_MFP2 PC11 setting for GPIO            */
#define SYS_GPC_MFP2_PC11MFP_EBI_ADR5        (0x02UL<<SYS_GPC_MFP2_PC11MFP_Pos)  /*!< GPA_MFP2 PC11 setting for EBI_ADR5        */
#define SYS_GPC_MFP2_PC11MFP_UART0_RXD       (0x03UL<<SYS_GPC_MFP2_PC11MFP_Pos)  /*!< GPA_MFP2 PC11 setting for UART0_RXD       */
#define SYS_GPC_MFP2_PC11MFP_I2C0_SDA        (0x04UL<<SYS_GPC_MFP2_PC11MFP_Pos)  /*!< GPA_MFP2 PC11 setting for I2C0_SDA        */
#define SYS_GPC_MFP2_PC11MFP_CANFD1_TXL      (0x0aUL<<SYS_GPC_MFP2_PC11MFP_Pos)  /*!< GPA_MFP2 PC11 setting for CANFD1_TXL      */
#define SYS_GPC_MFP2_PC11MFP_EPWM1_CH1       (0x0cUL<<SYS_GPC_MFP2_PC11MFP_Pos)  /*!< GPA_MFP2 PC11 setting for EPWM1_CH1       */
#define SYS_GPC_MFP2_PC11MFP_ACMP1_O         (0x0eUL<<SYS_GPC_MFP2_PC11MFP_Pos)  /*!< GPA_MFP2 PC11 setting for ACMP1_O         */

/* PC.12 MFP */
#define SYS_GPC_MFP3_PC12MFP_GPIO            (0x00UL<<SYS_GPC_MFP3_PC12MFP_Pos)  /*!< GPC_MFP3 PC12 setting for GPIO            */
#define SYS_GPC_MFP3_PC12MFP_EBI_ADR4        (0x02UL<<SYS_GPC_MFP3_PC12MFP_Pos)  /*!< GPA_MFP3 PC12 setting for EBI_ADR4        */
#define SYS_GPC_MFP3_PC12MFP_UART0_TXD       (0x03UL<<SYS_GPC_MFP3_PC12MFP_Pos)  /*!< GPA_MFP3 PC12 setting for UART0_TXD       */
#define SYS_GPC_MFP3_PC12MFP_I2C0_SCL        (0x04UL<<SYS_GPC_MFP3_PC12MFP_Pos)  /*!< GPA_MFP3 PC12 setting for I2C0_SCL        */
#define SYS_GPC_MFP3_PC12MFP_EPWM1_CH0       (0x0cUL<<SYS_GPC_MFP3_PC12MFP_Pos)  /*!< GPA_MFP3 PC12 setting for EPWM1_CH0       */
#define SYS_GPC_MFP3_PC12MFP_ACMP0_O         (0x0eUL<<SYS_GPC_MFP3_PC12MFP_Pos)  /*!< GPA_MFP3 PC12 setting for ACMP0_O         */

/* PC.13 MFP */
#define SYS_GPC_MFP3_PC13MFP_GPIO            (0x00UL<<SYS_GPC_MFP3_PC13MFP_Pos)  /*!< GPC_MFP3 PC13 setting for GPIO            */
#define SYS_GPC_MFP3_PC13MFP_EBI_ADR10       (0x02UL<<SYS_GPC_MFP3_PC13MFP_Pos)  /*!< GPA_MFP3 PC13 setting for EBI_ADR10       */
#define SYS_GPC_MFP3_PC13MFP_SPI2_I2SMCLK    (0x04UL<<SYS_GPC_MFP3_PC13MFP_Pos)  /*!< GPA_MFP3 PC13 setting for SPI2_I2SMCLK    */
#define SYS_GPC_MFP3_PC13MFP_CANFD1_TXD      (0x05UL<<SYS_GPC_MFP3_PC13MFP_Pos)  /*!< GPA_MFP3 PC13 setting for CANFD1_TXD      */
#define SYS_GPC_MFP3_PC13MFP_USCI0_CTL0      (0x06UL<<SYS_GPC_MFP3_PC13MFP_Pos)  /*!< GPA_MFP3 PC13 setting for USCI0_CTL0      */
#define SYS_GPC_MFP3_PC13MFP_UART2_TXD       (0x07UL<<SYS_GPC_MFP3_PC13MFP_Pos)  /*!< GPA_MFP3 PC13 setting for UART2_TXD       */
#define SYS_GPC_MFP3_PC13MFP_CANFD1_TXH      (0x08UL<<SYS_GPC_MFP3_PC13MFP_Pos)  /*!< GPA_MFP3 PC13 setting for CANFD1_TXH      */
#define SYS_GPC_MFP3_PC13MFP_BPWM0_CH4       (0x09UL<<SYS_GPC_MFP3_PC13MFP_Pos)  /*!< GPA_MFP3 PC13 setting for BPWM0_CH4       */
#define SYS_GPC_MFP3_PC13MFP_BPWM2_CH0       (0x0cUL<<SYS_GPC_MFP3_PC13MFP_Pos)  /*!< GPA_MFP3 PC13 setting for BPWM2_CH0       */
#define SYS_GPC_MFP3_PC13MFP_CLKO            (0x0dUL<<SYS_GPC_MFP3_PC13MFP_Pos)  /*!< GPA_MFP3 PC13 setting for CLKO            */
#define SYS_GPC_MFP3_PC13MFP_EADC0_ST        (0x0eUL<<SYS_GPC_MFP3_PC13MFP_Pos)  /*!< GPA_MFP3 PC13 setting for EADC0_ST        */

/* PC.14 MFP */
#define SYS_GPC_MFP3_PC14MFP_GPIO            (0x00UL<<SYS_GPC_MFP3_PC14MFP_Pos)  /*!< GPC_MFP3 PC14 setting for GPIO            */
#define SYS_GPC_MFP3_PC14MFP_EBI_AD11        (0x02UL<<SYS_GPC_MFP3_PC14MFP_Pos)  /*!< GPA_MFP3 PC14 setting for EBI_AD11        */
#define SYS_GPC_MFP3_PC14MFP_SPI0_I2SMCLK    (0x04UL<<SYS_GPC_MFP3_PC14MFP_Pos)  /*!< GPA_MFP3 PC14 setting for SPI0_I2SMCLK    */
#define SYS_GPC_MFP3_PC14MFP_USCI0_CTL0      (0x05UL<<SYS_GPC_MFP3_PC14MFP_Pos)  /*!< GPA_MFP3 PC14 setting for USCI0_CTL0      */
#define SYS_GPC_MFP3_PC14MFP_QSPI0_CLK       (0x06UL<<SYS_GPC_MFP3_PC14MFP_Pos)  /*!< GPA_MFP3 PC14 setting for QSPI0_CLK       */
#define SYS_GPC_MFP3_PC14MFP_PDCI_G0_RX0     (0x09UL<<SYS_GPC_MFP3_PC14MFP_Pos)  /*!< GPA_MFP3 PC14 setting for PDCI_G0_RX0     */
#define SYS_GPC_MFP3_PC14MFP_TRACE_SWO       (0x0aUL<<SYS_GPC_MFP3_PC14MFP_Pos)  /*!< GPA_MFP3 PC14 setting for TRACE_SWO       */
#define SYS_GPC_MFP3_PC14MFP_EPWM0_SYNC_IN   (0x0bUL<<SYS_GPC_MFP3_PC14MFP_Pos)  /*!< GPA_MFP3 PC14 setting for EPWM0_SYNC_IN   */
#define SYS_GPC_MFP3_PC14MFP_BPWM2_CH0       (0x0cUL<<SYS_GPC_MFP3_PC14MFP_Pos)  /*!< GPA_MFP3 PC14 setting for BPWM2_CH0       */
#define SYS_GPC_MFP3_PC14MFP_TM1             (0x0dUL<<SYS_GPC_MFP3_PC14MFP_Pos)  /*!< GPA_MFP3 PC14 setting for TM1             */
#define SYS_GPC_MFP3_PC14MFP_HSUSB_VBUS_ST   (0x0fUL<<SYS_GPC_MFP3_PC14MFP_Pos)  /*!< GPA_MFP3 PC14 setting for HSUSB_VBUS_ST   */

/* PD.0 MFP */
#define SYS_GPD_MFP0_PD0MFP_GPIO             (0x00UL<<SYS_GPD_MFP0_PD0MFP_Pos)   /*!< GPD_MFP0 PD0  setting for GPIO            */
#define SYS_GPD_MFP0_PD0MFP_EBI_AD13         (0x02UL<<SYS_GPD_MFP0_PD0MFP_Pos)   /*!< GPA_MFP0 PD0  setting for EBI_AD13        */
#define SYS_GPD_MFP0_PD0MFP_USCI0_CLK        (0x03UL<<SYS_GPD_MFP0_PD0MFP_Pos)   /*!< GPA_MFP0 PD0  setting for USCI0_CLK       */
#define SYS_GPD_MFP0_PD0MFP_SPI0_MOSI        (0x04UL<<SYS_GPD_MFP0_PD0MFP_Pos)   /*!< GPA_MFP0 PD0  setting for SPI0_MOSI       */
#define SYS_GPD_MFP0_PD0MFP_UART3_RXD        (0x05UL<<SYS_GPD_MFP0_PD0MFP_Pos)   /*!< GPA_MFP0 PD0  setting for UART3_RXD       */
#define SYS_GPD_MFP0_PD0MFP_I2C2_SDA         (0x06UL<<SYS_GPD_MFP0_PD0MFP_Pos)   /*!< GPA_MFP0 PD0  setting for I2C2_SDA        */
#define SYS_GPD_MFP0_PD0MFP_TM2              (0x0eUL<<SYS_GPD_MFP0_PD0MFP_Pos)   /*!< GPA_MFP0 PD0  setting for TM2             */

/* PD.1 MFP */
#define SYS_GPD_MFP0_PD1MFP_GPIO             (0x00UL<<SYS_GPD_MFP0_PD1MFP_Pos)   /*!< GPD_MFP0 PD1  setting for GPIO            */
#define SYS_GPD_MFP0_PD1MFP_EBI_AD12         (0x02UL<<SYS_GPD_MFP0_PD1MFP_Pos)   /*!< GPA_MFP0 PD1  setting for EBI_AD12        */
#define SYS_GPD_MFP0_PD1MFP_USCI0_DAT0       (0x03UL<<SYS_GPD_MFP0_PD1MFP_Pos)   /*!< GPA_MFP0 PD1  setting for USCI0_DAT0      */
#define SYS_GPD_MFP0_PD1MFP_SPI0_MISO        (0x04UL<<SYS_GPD_MFP0_PD1MFP_Pos)   /*!< GPA_MFP0 PD1  setting for SPI0_MISO       */
#define SYS_GPD_MFP0_PD1MFP_UART3_TXD        (0x05UL<<SYS_GPD_MFP0_PD1MFP_Pos)   /*!< GPA_MFP0 PD1  setting for UART3_TXD       */
#define SYS_GPD_MFP0_PD1MFP_I2C2_SCL         (0x06UL<<SYS_GPD_MFP0_PD1MFP_Pos)   /*!< GPA_MFP0 PD1  setting for I2C2_SCL        */

/* PD.2 MFP */
#define SYS_GPD_MFP0_PD2MFP_GPIO             (0x00UL<<SYS_GPD_MFP0_PD2MFP_Pos)   /*!< GPD_MFP0 PD2  setting for GPIO            */
#define SYS_GPD_MFP0_PD2MFP_EBI_AD11         (0x02UL<<SYS_GPD_MFP0_PD2MFP_Pos)   /*!< GPA_MFP0 PD2  setting for EBI_AD11        */
#define SYS_GPD_MFP0_PD2MFP_USCI0_DAT1       (0x03UL<<SYS_GPD_MFP0_PD2MFP_Pos)   /*!< GPA_MFP0 PD2  setting for USCI0_DAT1      */
#define SYS_GPD_MFP0_PD2MFP_SPI0_CLK         (0x04UL<<SYS_GPD_MFP0_PD2MFP_Pos)   /*!< GPA_MFP0 PD2  setting for SPI0_CLK        */
#define SYS_GPD_MFP0_PD2MFP_UART3_nCTS       (0x05UL<<SYS_GPD_MFP0_PD2MFP_Pos)   /*!< GPA_MFP0 PD2  setting for UART3_nCTS      */
#define SYS_GPD_MFP0_PD2MFP_UART0_RXD        (0x09UL<<SYS_GPD_MFP0_PD2MFP_Pos)   /*!< GPA_MFP0 PD2  setting for UART0_RXD       */
#define SYS_GPD_MFP0_PD2MFP_BPWM4_CH5        (0x0dUL<<SYS_GPD_MFP0_PD2MFP_Pos)   /*!< GPA_MFP0 PD2  setting for BPWM4_CH5       */

/* PD.3 MFP */
#define SYS_GPD_MFP0_PD3MFP_GPIO             (0x00UL<<SYS_GPD_MFP0_PD3MFP_Pos)   /*!< GPD_MFP0 PD3  setting for GPIO            */
#define SYS_GPD_MFP0_PD3MFP_EBI_AD10         (0x02UL<<SYS_GPD_MFP0_PD3MFP_Pos)   /*!< GPA_MFP0 PD3  setting for EBI_AD10        */
#define SYS_GPD_MFP0_PD3MFP_USCI0_CTL1       (0x03UL<<SYS_GPD_MFP0_PD3MFP_Pos)   /*!< GPA_MFP0 PD3  setting for USCI0_CTL1      */
#define SYS_GPD_MFP0_PD3MFP_SPI0_SS          (0x04UL<<SYS_GPD_MFP0_PD3MFP_Pos)   /*!< GPA_MFP0 PD3  setting for SPI0_SS         */
#define SYS_GPD_MFP0_PD3MFP_UART3_nRTS       (0x05UL<<SYS_GPD_MFP0_PD3MFP_Pos)   /*!< GPA_MFP0 PD3  setting for UART3_nRTS      */
#define SYS_GPD_MFP0_PD3MFP_USCI1_CTL0       (0x06UL<<SYS_GPD_MFP0_PD3MFP_Pos)   /*!< GPA_MFP0 PD3  setting for USCI1_CTL0      */
#define SYS_GPD_MFP0_PD3MFP_UART0_TXD        (0x09UL<<SYS_GPD_MFP0_PD3MFP_Pos)   /*!< GPA_MFP0 PD3  setting for UART0_TXD       */
#define SYS_GPD_MFP0_PD3MFP_BPWM4_CH4        (0x0dUL<<SYS_GPD_MFP0_PD3MFP_Pos)   /*!< GPA_MFP0 PD3  setting for BPWM4_CH4       */

/* PD.4 MFP */
#define SYS_GPD_MFP1_PD4MFP_GPIO             (0x00UL<<SYS_GPD_MFP1_PD4MFP_Pos)   /*!< GPD_MFP1 PD4  setting for GPIO            */
#define SYS_GPD_MFP1_PD4MFP_EBI_AD5          (0x02UL<<SYS_GPD_MFP1_PD4MFP_Pos)   /*!< GPA_MFP1 PD4  setting for EBI_AD5         */
#define SYS_GPD_MFP1_PD4MFP_USCI0_CTL0       (0x03UL<<SYS_GPD_MFP1_PD4MFP_Pos)   /*!< GPA_MFP1 PD4  setting for USCI0_CTL0      */
#define SYS_GPD_MFP1_PD4MFP_I2C1_SDA         (0x04UL<<SYS_GPD_MFP1_PD4MFP_Pos)   /*!< GPA_MFP1 PD4  setting for I2C1_SDA        */
#define SYS_GPD_MFP1_PD4MFP_SPI1_SS          (0x05UL<<SYS_GPD_MFP1_PD4MFP_Pos)   /*!< GPA_MFP1 PD4  setting for SPI1_SS         */
#define SYS_GPD_MFP1_PD4MFP_USCI1_CTL1       (0x06UL<<SYS_GPD_MFP1_PD4MFP_Pos)   /*!< GPA_MFP1 PD4  setting for USCI1_CTL1      */
#define SYS_GPD_MFP1_PD4MFP_BPWM4_CH3        (0x0dUL<<SYS_GPD_MFP1_PD4MFP_Pos)   /*!< GPA_MFP1 PD4  setting for BPWM4_CH3       */

/* PD.5 MFP */
#define SYS_GPD_MFP1_PD5MFP_GPIO             (0x00UL<<SYS_GPD_MFP1_PD5MFP_Pos)   /*!< GPD_MFP1 PD5  setting for GPIO            */
#define SYS_GPD_MFP1_PD5MFP_EBI_AD15         (0x02UL<<SYS_GPD_MFP1_PD5MFP_Pos)   /*!< GPA_MFP1 PD5  setting for EBI_AD15        */
#define SYS_GPD_MFP1_PD5MFP_I2C1_SCL         (0x04UL<<SYS_GPD_MFP1_PD5MFP_Pos)   /*!< GPA_MFP1 PD5  setting for I2C1_SCL        */
#define SYS_GPD_MFP1_PD5MFP_SPI1_CLK         (0x05UL<<SYS_GPD_MFP1_PD5MFP_Pos)   /*!< GPA_MFP1 PD5  setting for SPI1_CLK        */
#define SYS_GPD_MFP1_PD5MFP_USCI1_DAT0       (0x06UL<<SYS_GPD_MFP1_PD5MFP_Pos)   /*!< GPA_MFP1 PD5  setting for USCI1_DAT0      */
#define SYS_GPD_MFP1_PD5MFP_BPWM4_CH2        (0x0dUL<<SYS_GPD_MFP1_PD5MFP_Pos)   /*!< GPA_MFP1 PD5  setting for BPWM4_CH2       */
#define SYS_GPD_MFP1_PD5MFP_EADC0_ST         (0x0fUL<<SYS_GPD_MFP1_PD5MFP_Pos)   /*!< GPA_MFP1 PD5  setting for EADC0_ST        */

/* PD.6 MFP */
#define SYS_GPD_MFP1_PD6MFP_GPIO             (0x00UL<<SYS_GPD_MFP1_PD6MFP_Pos)   /*!< GPD_MFP1 PD6  setting for GPIO            */
#define SYS_GPD_MFP1_PD6MFP_UART1_RXD        (0x03UL<<SYS_GPD_MFP1_PD6MFP_Pos)   /*!< GPA_MFP1 PD6  setting for UART1_RXD       */
#define SYS_GPD_MFP1_PD6MFP_I2C0_SDA         (0x04UL<<SYS_GPD_MFP1_PD6MFP_Pos)   /*!< GPA_MFP1 PD6  setting for I2C0_SDA        */
#define SYS_GPD_MFP1_PD6MFP_SPI1_MOSI        (0x05UL<<SYS_GPD_MFP1_PD6MFP_Pos)   /*!< GPA_MFP1 PD6  setting for SPI1_MOSI       */
#define SYS_GPD_MFP1_PD6MFP_USCI1_DAT1       (0x06UL<<SYS_GPD_MFP1_PD6MFP_Pos)   /*!< GPA_MFP1 PD6  setting for USCI1_DAT1      */
#define SYS_GPD_MFP1_PD6MFP_BPWM4_CH1        (0x0dUL<<SYS_GPD_MFP1_PD6MFP_Pos)   /*!< GPA_MFP1 PD6  setting for BPWM4_CH1       */

/* PD.7 MFP */
#define SYS_GPD_MFP1_PD7MFP_GPIO             (0x00UL<<SYS_GPD_MFP1_PD7MFP_Pos)   /*!< GPD_MFP1 PD7  setting for GPIO            */
#define SYS_GPD_MFP1_PD7MFP_UART1_TXD        (0x03UL<<SYS_GPD_MFP1_PD7MFP_Pos)   /*!< GPA_MFP1 PD7  setting for UART1_TXD       */
#define SYS_GPD_MFP1_PD7MFP_I2C0_SCL         (0x04UL<<SYS_GPD_MFP1_PD7MFP_Pos)   /*!< GPA_MFP1 PD7  setting for I2C0_SCL        */
#define SYS_GPD_MFP1_PD7MFP_SPI1_MISO        (0x05UL<<SYS_GPD_MFP1_PD7MFP_Pos)   /*!< GPA_MFP1 PD7  setting for SPI1_MISO       */
#define SYS_GPD_MFP1_PD7MFP_USCI1_CLK        (0x06UL<<SYS_GPD_MFP1_PD7MFP_Pos)   /*!< GPA_MFP1 PD7  setting for USCI1_CLK       */
#define SYS_GPD_MFP1_PD7MFP_BPWM4_CH0        (0x0dUL<<SYS_GPD_MFP1_PD7MFP_Pos)   /*!< GPA_MFP1 PD7  setting for BPWM4_CH0       */

/* PD.8 MFP */
#define SYS_GPD_MFP2_PD8MFP_GPIO             (0x00UL<<SYS_GPD_MFP2_PD8MFP_Pos)   /*!< GPD_MFP2 PD8  setting for GPIO            */
#define SYS_GPD_MFP2_PD8MFP_EBI_AD6          (0x02UL<<SYS_GPD_MFP2_PD8MFP_Pos)   /*!< GPA_MFP2 PD8  setting for EBI_AD6         */
#define SYS_GPD_MFP2_PD8MFP_I2C2_SDA         (0x03UL<<SYS_GPD_MFP2_PD8MFP_Pos)   /*!< GPA_MFP2 PD8  setting for I2C2_SDA        */
#define SYS_GPD_MFP2_PD8MFP_UART2_nRTS       (0x04UL<<SYS_GPD_MFP2_PD8MFP_Pos)   /*!< GPA_MFP2 PD8  setting for UART2_nRTS      */
#define SYS_GPD_MFP2_PD8MFP_CANFD0_TXL       (0x07UL<<SYS_GPD_MFP2_PD8MFP_Pos)   /*!< GPA_MFP2 PD8  setting for CANFD0_TXL      */
#define SYS_GPD_MFP2_PD8MFP_BPWM3_CH3        (0x0eUL<<SYS_GPD_MFP2_PD8MFP_Pos)   /*!< GPA_MFP2 PD8  setting for BPWM3_CH3       */

/* PD.9 MFP */
#define SYS_GPD_MFP2_PD9MFP_GPIO             (0x00UL<<SYS_GPD_MFP2_PD9MFP_Pos)   /*!< GPD_MFP2 PD9  setting for GPIO            */
#define SYS_GPD_MFP2_PD9MFP_EBI_AD7          (0x02UL<<SYS_GPD_MFP2_PD9MFP_Pos)   /*!< GPA_MFP2 PD9  setting for EBI_AD7         */
#define SYS_GPD_MFP2_PD9MFP_I2C2_SCL         (0x03UL<<SYS_GPD_MFP2_PD9MFP_Pos)   /*!< GPA_MFP2 PD9  setting for I2C2_SCL        */
#define SYS_GPD_MFP2_PD9MFP_UART2_nCTS       (0x04UL<<SYS_GPD_MFP2_PD9MFP_Pos)   /*!< GPA_MFP2 PD9  setting for UART2_nCTS      */
#define SYS_GPD_MFP2_PD9MFP_BPWM3_CH2        (0x0eUL<<SYS_GPD_MFP2_PD9MFP_Pos)   /*!< GPA_MFP2 PD9  setting for BPWM3_CH2       */

/* PD.10 MFP */
#define SYS_GPD_MFP2_PD10MFP_GPIO            (0x00UL<<SYS_GPD_MFP2_PD10MFP_Pos)  /*!< GPD_MFP2 PD10 setting for GPIO            */
#define SYS_GPD_MFP2_PD10MFP_EBI_nCS2        (0x02UL<<SYS_GPD_MFP2_PD10MFP_Pos)  /*!< GPA_MFP2 PD10 setting for EBI_nCS2        */
#define SYS_GPD_MFP2_PD10MFP_UART1_RXD       (0x03UL<<SYS_GPD_MFP2_PD10MFP_Pos)  /*!< GPA_MFP2 PD10 setting for UART1_RXD       */
#define SYS_GPD_MFP2_PD10MFP_CANFD0_RXD      (0x04UL<<SYS_GPD_MFP2_PD10MFP_Pos)  /*!< GPA_MFP2 PD10 setting for CANFD0_RXD      */
#define SYS_GPD_MFP2_PD10MFP_EQEI0_B         (0x0aUL<<SYS_GPD_MFP2_PD10MFP_Pos)  /*!< GPA_MFP2 PD10 setting for EQEI0_B         */
#define SYS_GPD_MFP2_PD10MFP_BPWM2_CH3       (0x0cUL<<SYS_GPD_MFP2_PD10MFP_Pos)  /*!< GPA_MFP2 PD10 setting for BPWM2_CH3       */
#define SYS_GPD_MFP2_PD10MFP_INT7            (0x0fUL<<SYS_GPD_MFP2_PD10MFP_Pos)  /*!< GPA_MFP2 PD10 setting for INT7            */

/* PD.11 MFP */
#define SYS_GPD_MFP2_PD11MFP_GPIO            (0x00UL<<SYS_GPD_MFP2_PD11MFP_Pos)  /*!< GPD_MFP2 PD11 setting for GPIO            */
#define SYS_GPD_MFP2_PD11MFP_EBI_nCS1        (0x02UL<<SYS_GPD_MFP2_PD11MFP_Pos)  /*!< GPA_MFP2 PD11 setting for EBI_nCS1        */
#define SYS_GPD_MFP2_PD11MFP_UART1_TXD       (0x03UL<<SYS_GPD_MFP2_PD11MFP_Pos)  /*!< GPA_MFP2 PD11 setting for UART1_TXD       */
#define SYS_GPD_MFP2_PD11MFP_CANFD0_TXD      (0x04UL<<SYS_GPD_MFP2_PD11MFP_Pos)  /*!< GPA_MFP2 PD11 setting for CANFD0_TXD      */
#define SYS_GPD_MFP2_PD11MFP_CANFD0_TXH      (0x08UL<<SYS_GPD_MFP2_PD11MFP_Pos)  /*!< GPA_MFP2 PD11 setting for CANFD0_TXH      */
#define SYS_GPD_MFP2_PD11MFP_EQEI0_A         (0x0aUL<<SYS_GPD_MFP2_PD11MFP_Pos)  /*!< GPA_MFP2 PD11 setting for EQEI0_A         */
#define SYS_GPD_MFP2_PD11MFP_BPWM2_CH2       (0x0cUL<<SYS_GPD_MFP2_PD11MFP_Pos)  /*!< GPA_MFP2 PD11 setting for BPWM2_CH2       */
#define SYS_GPD_MFP2_PD11MFP_INT6            (0x0fUL<<SYS_GPD_MFP2_PD11MFP_Pos)  /*!< GPA_MFP2 PD11 setting for INT6            */

/* PD.12 MFP */
#define SYS_GPD_MFP3_PD12MFP_GPIO            (0x00UL<<SYS_GPD_MFP3_PD12MFP_Pos)  /*!< GPD_MFP3 PD12 setting for GPIO            */
#define SYS_GPD_MFP3_PD12MFP_EBI_nCS0        (0x02UL<<SYS_GPD_MFP3_PD12MFP_Pos)  /*!< GPA_MFP3 PD12 setting for EBI_nCS0        */
#define SYS_GPD_MFP3_PD12MFP_CANFD1_RXD      (0x05UL<<SYS_GPD_MFP3_PD12MFP_Pos)  /*!< GPA_MFP3 PD12 setting for CANFD1_RXD      */
#define SYS_GPD_MFP3_PD12MFP_UART2_RXD       (0x07UL<<SYS_GPD_MFP3_PD12MFP_Pos)  /*!< GPA_MFP3 PD12 setting for UART2_RXD       */
#define SYS_GPD_MFP3_PD12MFP_CANFD0_TXL      (0x08UL<<SYS_GPD_MFP3_PD12MFP_Pos)  /*!< GPA_MFP3 PD12 setting for CANFD0_TXL      */
#define SYS_GPD_MFP3_PD12MFP_BPWM0_CH5       (0x09UL<<SYS_GPD_MFP3_PD12MFP_Pos)  /*!< GPA_MFP3 PD12 setting for BPWM0_CH5       */
#define SYS_GPD_MFP3_PD12MFP_EQEI0_INDEX     (0x0aUL<<SYS_GPD_MFP3_PD12MFP_Pos)  /*!< GPA_MFP3 PD12 setting for EQEI0_INDEX     */
#define SYS_GPD_MFP3_PD12MFP_BPWM2_CH1       (0x0cUL<<SYS_GPD_MFP3_PD12MFP_Pos)  /*!< GPA_MFP3 PD12 setting for BPWM2_CH1       */
#define SYS_GPD_MFP3_PD12MFP_CLKO            (0x0dUL<<SYS_GPD_MFP3_PD12MFP_Pos)  /*!< GPA_MFP3 PD12 setting for CLKO            */
#define SYS_GPD_MFP3_PD12MFP_EADC0_ST        (0x0eUL<<SYS_GPD_MFP3_PD12MFP_Pos)  /*!< GPA_MFP3 PD12 setting for EADC0_ST        */
#define SYS_GPD_MFP3_PD12MFP_INT5            (0x0fUL<<SYS_GPD_MFP3_PD12MFP_Pos)  /*!< GPA_MFP3 PD12 setting for INT5            */

/* PD.13 MFP */
#define SYS_GPD_MFP3_PD13MFP_GPIO            (0x00UL<<SYS_GPD_MFP3_PD13MFP_Pos)  /*!< GPD_MFP3 PD13 setting for GPIO            */
#define SYS_GPD_MFP3_PD13MFP_EBI_AD10        (0x02UL<<SYS_GPD_MFP3_PD13MFP_Pos)  /*!< GPA_MFP3 PD13 setting for EBI_AD10        */
#define SYS_GPD_MFP3_PD13MFP_SD0_nCD         (0x03UL<<SYS_GPD_MFP3_PD13MFP_Pos)  /*!< GPA_MFP3 PD13 setting for SD0_nCD         */
#define SYS_GPD_MFP3_PD13MFP_SPI0_I2SMCLK    (0x04UL<<SYS_GPD_MFP3_PD13MFP_Pos)  /*!< GPA_MFP3 PD13 setting for SPI0_I2SMCLK    */
#define SYS_GPD_MFP3_PD13MFP_SPI1_I2SMCLK    (0x05UL<<SYS_GPD_MFP3_PD13MFP_Pos)  /*!< GPA_MFP3 PD13 setting for SPI1_I2SMCLK    */
#define SYS_GPD_MFP3_PD13MFP_CANFD0_TXL      (0x07UL<<SYS_GPD_MFP3_PD13MFP_Pos)  /*!< GPA_MFP3 PD13 setting for CANFD0_TXL      */
#define SYS_GPD_MFP3_PD13MFP_BPWM0_CH0       (0x0bUL<<SYS_GPD_MFP3_PD13MFP_Pos)  /*!< GPA_MFP3 PD13 setting for BPWM0_CH0       */
#define SYS_GPD_MFP3_PD13MFP_CLKO            (0x0eUL<<SYS_GPD_MFP3_PD13MFP_Pos)  /*!< GPA_MFP3 PD13 setting for CLKO            */
#define SYS_GPD_MFP3_PD13MFP_EADC0_ST        (0x0fUL<<SYS_GPD_MFP3_PD13MFP_Pos)  /*!< GPA_MFP3 PD13 setting for EADC0_ST        */

/* PD.14 MFP */
#define SYS_GPD_MFP3_PD14MFP_GPIO            (0x00UL<<SYS_GPD_MFP3_PD14MFP_Pos)  /*!< GPD_MFP3 PD14 setting for GPIO            */
#define SYS_GPD_MFP3_PD14MFP_EBI_nCS0        (0x02UL<<SYS_GPD_MFP3_PD14MFP_Pos)  /*!< GPA_MFP3 PD14 setting for EBI_nCS0        */
#define SYS_GPD_MFP3_PD14MFP_SPI0_I2SMCLK    (0x05UL<<SYS_GPD_MFP3_PD14MFP_Pos)  /*!< GPA_MFP3 PD14 setting for SPI0_I2SMCLK    */
#define SYS_GPD_MFP3_PD14MFP_EPWM0_CH4       (0x0bUL<<SYS_GPD_MFP3_PD14MFP_Pos)  /*!< GPA_MFP3 PD14 setting for EPWM0_CH4       */

/* PE.0 MFP */
#define SYS_GPE_MFP0_PE0MFP_GPIO             (0x00UL<<SYS_GPE_MFP0_PE0MFP_Pos)   /*!< GPE_MFP0 PE0  setting for GPIO            */
#define SYS_GPE_MFP0_PE0MFP_EBI_AD11         (0x02UL<<SYS_GPE_MFP0_PE0MFP_Pos)   /*!< GPA_MFP0 PE0  setting for EBI_AD11        */
#define SYS_GPE_MFP0_PE0MFP_QSPI0_MOSI0      (0x03UL<<SYS_GPE_MFP0_PE0MFP_Pos)   /*!< GPA_MFP0 PE0  setting for QSPI0_MOSI0     */
#define SYS_GPE_MFP0_PE0MFP_I2S0_MCLK        (0x05UL<<SYS_GPE_MFP0_PE0MFP_Pos)   /*!< GPA_MFP0 PE0  setting for I2S0_MCLK       */
#define SYS_GPE_MFP0_PE0MFP_SPI1_MOSI        (0x06UL<<SYS_GPE_MFP0_PE0MFP_Pos)   /*!< GPA_MFP0 PE0  setting for SPI1_MOSI       */
#define SYS_GPE_MFP0_PE0MFP_UART3_RXD        (0x07UL<<SYS_GPE_MFP0_PE0MFP_Pos)   /*!< GPA_MFP0 PE0  setting for UART3_RXD       */
#define SYS_GPE_MFP0_PE0MFP_I2C1_SDA         (0x08UL<<SYS_GPE_MFP0_PE0MFP_Pos)   /*!< GPA_MFP0 PE0  setting for I2C1_SDA        */
#define SYS_GPE_MFP0_PE0MFP_UART4_nRTS       (0x09UL<<SYS_GPE_MFP0_PE0MFP_Pos)   /*!< GPA_MFP0 PE0  setting for UART4_nRTS      */
#define SYS_GPE_MFP0_PE0MFP_BPWM3_CH1        (0x0dUL<<SYS_GPE_MFP0_PE0MFP_Pos)   /*!< GPA_MFP0 PE0  setting for BPWM3_CH1       */

/* PE.1 MFP */
#define SYS_GPE_MFP0_PE1MFP_GPIO             (0x00UL<<SYS_GPE_MFP0_PE1MFP_Pos)   /*!< GPE_MFP0 PE1  setting for GPIO            */
#define SYS_GPE_MFP0_PE1MFP_EBI_AD10         (0x02UL<<SYS_GPE_MFP0_PE1MFP_Pos)   /*!< GPA_MFP0 PE1  setting for EBI_AD10        */
#define SYS_GPE_MFP0_PE1MFP_QSPI0_MISO0      (0x03UL<<SYS_GPE_MFP0_PE1MFP_Pos)   /*!< GPA_MFP0 PE1  setting for QSPI0_MISO0     */
#define SYS_GPE_MFP0_PE1MFP_I2S0_BCLK        (0x05UL<<SYS_GPE_MFP0_PE1MFP_Pos)   /*!< GPA_MFP0 PE1  setting for I2S0_BCLK       */
#define SYS_GPE_MFP0_PE1MFP_SPI1_MISO        (0x06UL<<SYS_GPE_MFP0_PE1MFP_Pos)   /*!< GPA_MFP0 PE1  setting for SPI1_MISO       */
#define SYS_GPE_MFP0_PE1MFP_UART3_TXD        (0x07UL<<SYS_GPE_MFP0_PE1MFP_Pos)   /*!< GPA_MFP0 PE1  setting for UART3_TXD       */
#define SYS_GPE_MFP0_PE1MFP_I2C1_SCL         (0x08UL<<SYS_GPE_MFP0_PE1MFP_Pos)   /*!< GPA_MFP0 PE1  setting for I2C1_SCL        */
#define SYS_GPE_MFP0_PE1MFP_UART4_nCTS       (0x09UL<<SYS_GPE_MFP0_PE1MFP_Pos)   /*!< GPA_MFP0 PE1  setting for UART4_nCTS      */
#define SYS_GPE_MFP0_PE1MFP_BPWM3_CH0        (0x0dUL<<SYS_GPE_MFP0_PE1MFP_Pos)   /*!< GPA_MFP0 PE1  setting for BPWM3_CH0       */

/* PE.2 MFP */
#define SYS_GPE_MFP0_PE2MFP_GPIO             (0x00UL<<SYS_GPE_MFP0_PE2MFP_Pos)   /*!< GPE_MFP0 PE2  setting for GPIO            */
#define SYS_GPE_MFP0_PE2MFP_EBI_ALE          (0x02UL<<SYS_GPE_MFP0_PE2MFP_Pos)   /*!< GPA_MFP0 PE2  setting for EBI_ALE         */
#define SYS_GPE_MFP0_PE2MFP_SD0_DAT0         (0x03UL<<SYS_GPE_MFP0_PE2MFP_Pos)   /*!< GPA_MFP0 PE2  setting for SD0_DAT0        */
#define SYS_GPE_MFP0_PE2MFP_USCI0_CLK        (0x07UL<<SYS_GPE_MFP0_PE2MFP_Pos)   /*!< GPA_MFP0 PE2  setting for USCI0_CLK       */
#define SYS_GPE_MFP0_PE2MFP_EQEI0_B          (0x0bUL<<SYS_GPE_MFP0_PE2MFP_Pos)   /*!< GPA_MFP0 PE2  setting for EQEI0_B         */
#define SYS_GPE_MFP0_PE2MFP_EPWM0_CH5        (0x0cUL<<SYS_GPE_MFP0_PE2MFP_Pos)   /*!< GPA_MFP0 PE2  setting for EPWM0_CH5       */
#define SYS_GPE_MFP0_PE2MFP_BPWM0_CH0        (0x0dUL<<SYS_GPE_MFP0_PE2MFP_Pos)   /*!< GPA_MFP0 PE2  setting for BPWM0_CH0       */
#define SYS_GPE_MFP0_PE2MFP_I2S0_MCLK        (0x0eUL<<SYS_GPE_MFP0_PE2MFP_Pos)   /*!< GPA_MFP0 PE2  setting for I2S0_MCLK       */

/* PE.3 MFP */
#define SYS_GPE_MFP0_PE3MFP_GPIO             (0x00UL<<SYS_GPE_MFP0_PE3MFP_Pos)   /*!< GPE_MFP0 PE3  setting for GPIO            */
#define SYS_GPE_MFP0_PE3MFP_EBI_MCLK         (0x02UL<<SYS_GPE_MFP0_PE3MFP_Pos)   /*!< GPA_MFP0 PE3  setting for EBI_MCLK        */
#define SYS_GPE_MFP0_PE3MFP_SD0_DAT1         (0x03UL<<SYS_GPE_MFP0_PE3MFP_Pos)   /*!< GPA_MFP0 PE3  setting for SD0_DAT1        */
#define SYS_GPE_MFP0_PE3MFP_USCI0_DAT0       (0x07UL<<SYS_GPE_MFP0_PE3MFP_Pos)   /*!< GPA_MFP0 PE3  setting for USCI0_DAT0      */
#define SYS_GPE_MFP0_PE3MFP_EQEI0_A          (0x0bUL<<SYS_GPE_MFP0_PE3MFP_Pos)   /*!< GPA_MFP0 PE3  setting for EQEI0_A         */
#define SYS_GPE_MFP0_PE3MFP_EPWM0_CH4        (0x0cUL<<SYS_GPE_MFP0_PE3MFP_Pos)   /*!< GPA_MFP0 PE3  setting for EPWM0_CH4       */
#define SYS_GPE_MFP0_PE3MFP_BPWM0_CH1        (0x0dUL<<SYS_GPE_MFP0_PE3MFP_Pos)   /*!< GPA_MFP0 PE3  setting for BPWM0_CH1       */
#define SYS_GPE_MFP0_PE3MFP_I2S0_BCLK        (0x0eUL<<SYS_GPE_MFP0_PE3MFP_Pos)   /*!< GPA_MFP0 PE3  setting for I2S0_BCLK       */

/* PE.4 MFP */
#define SYS_GPE_MFP1_PE4MFP_GPIO             (0x00UL<<SYS_GPE_MFP1_PE4MFP_Pos)   /*!< GPE_MFP1 PE4  setting for GPIO            */
#define SYS_GPE_MFP1_PE4MFP_EBI_nWR          (0x02UL<<SYS_GPE_MFP1_PE4MFP_Pos)   /*!< GPA_MFP1 PE4  setting for EBI_nWR         */
#define SYS_GPE_MFP1_PE4MFP_SD0_DAT2         (0x03UL<<SYS_GPE_MFP1_PE4MFP_Pos)   /*!< GPA_MFP1 PE4  setting for SD0_DAT2        */
#define SYS_GPE_MFP1_PE4MFP_USCI0_DAT1       (0x07UL<<SYS_GPE_MFP1_PE4MFP_Pos)   /*!< GPA_MFP1 PE4  setting for USCI0_DAT1      */
#define SYS_GPE_MFP1_PE4MFP_EQEI0_INDEX      (0x0bUL<<SYS_GPE_MFP1_PE4MFP_Pos)   /*!< GPA_MFP1 PE4  setting for EQEI0_INDEX     */
#define SYS_GPE_MFP1_PE4MFP_EPWM0_CH3        (0x0cUL<<SYS_GPE_MFP1_PE4MFP_Pos)   /*!< GPA_MFP1 PE4  setting for EPWM0_CH3       */
#define SYS_GPE_MFP1_PE4MFP_BPWM0_CH2        (0x0dUL<<SYS_GPE_MFP1_PE4MFP_Pos)   /*!< GPA_MFP1 PE4  setting for BPWM0_CH2       */
#define SYS_GPE_MFP1_PE4MFP_SPI1_MOSI        (0x0fUL<<SYS_GPE_MFP1_PE4MFP_Pos)   /*!< GPA_MFP1 PE4  setting for SPI1_MOSI       */

/* PE.5 MFP */
#define SYS_GPE_MFP1_PE5MFP_GPIO             (0x00UL<<SYS_GPE_MFP1_PE5MFP_Pos)   /*!< GPE_MFP1 PE5  setting for GPIO            */
#define SYS_GPE_MFP1_PE5MFP_EBI_nRD          (0x02UL<<SYS_GPE_MFP1_PE5MFP_Pos)   /*!< GPA_MFP1 PE5  setting for EBI_nRD         */
#define SYS_GPE_MFP1_PE5MFP_SD0_DAT3         (0x03UL<<SYS_GPE_MFP1_PE5MFP_Pos)   /*!< GPA_MFP1 PE5  setting for SD0_DAT3        */
#define SYS_GPE_MFP1_PE5MFP_USCI0_CTL1       (0x07UL<<SYS_GPE_MFP1_PE5MFP_Pos)   /*!< GPA_MFP1 PE5  setting for USCI0_CTL1      */
#define SYS_GPE_MFP1_PE5MFP_CANFD1_TXL       (0x08UL<<SYS_GPE_MFP1_PE5MFP_Pos)   /*!< GPA_MFP1 PE5  setting for CANFD1_TXL      */
#define SYS_GPE_MFP1_PE5MFP_EPWM0_CH2        (0x0cUL<<SYS_GPE_MFP1_PE5MFP_Pos)   /*!< GPA_MFP1 PE5  setting for EPWM0_CH2       */
#define SYS_GPE_MFP1_PE5MFP_BPWM0_CH3        (0x0dUL<<SYS_GPE_MFP1_PE5MFP_Pos)   /*!< GPA_MFP1 PE5  setting for BPWM0_CH3       */
#define SYS_GPE_MFP1_PE5MFP_SPI1_MISO        (0x0fUL<<SYS_GPE_MFP1_PE5MFP_Pos)   /*!< GPA_MFP1 PE5  setting for SPI1_MISO       */

/* PE.6 MFP */
#define SYS_GPE_MFP1_PE6MFP_GPIO             (0x00UL<<SYS_GPE_MFP1_PE6MFP_Pos)   /*!< GPE_MFP1 PE6  setting for GPIO            */
#define SYS_GPE_MFP1_PE6MFP_EBI_AD11         (0x02UL<<SYS_GPE_MFP1_PE6MFP_Pos)   /*!< GPA_MFP1 PE6  setting for EBI_AD11        */
#define SYS_GPE_MFP1_PE6MFP_SD0_CLK          (0x03UL<<SYS_GPE_MFP1_PE6MFP_Pos)   /*!< GPA_MFP1 PE6  setting for SD0_CLK         */
#define SYS_GPE_MFP1_PE6MFP_USCI0_CTL0       (0x07UL<<SYS_GPE_MFP1_PE6MFP_Pos)   /*!< GPA_MFP1 PE6  setting for USCI0_CTL0      */
#define SYS_GPE_MFP1_PE6MFP_CANFD1_RXD       (0x09UL<<SYS_GPE_MFP1_PE6MFP_Pos)   /*!< GPA_MFP1 PE6  setting for CANFD1_RXD      */
#define SYS_GPE_MFP1_PE6MFP_EPWM0_CH1        (0x0cUL<<SYS_GPE_MFP1_PE6MFP_Pos)   /*!< GPA_MFP1 PE6  setting for EPWM0_CH1       */
#define SYS_GPE_MFP1_PE6MFP_BPWM0_CH4        (0x0dUL<<SYS_GPE_MFP1_PE6MFP_Pos)   /*!< GPA_MFP1 PE6  setting for BPWM0_CH4       */
#define SYS_GPE_MFP1_PE6MFP_QSPI0_MOSI0      (0x0fUL<<SYS_GPE_MFP1_PE6MFP_Pos)   /*!< GPA_MFP1 PE6  setting for QSPI0_MOSI0     */

/* PE.7 MFP */
#define SYS_GPE_MFP1_PE7MFP_GPIO             (0x00UL<<SYS_GPE_MFP1_PE7MFP_Pos)   /*!< GPE_MFP1 PE7  setting for GPIO            */
#define SYS_GPE_MFP1_PE7MFP_EBI_AD10         (0x02UL<<SYS_GPE_MFP1_PE7MFP_Pos)   /*!< GPA_MFP1 PE7  setting for EBI_AD10        */
#define SYS_GPE_MFP1_PE7MFP_SD0_CMD          (0x03UL<<SYS_GPE_MFP1_PE7MFP_Pos)   /*!< GPA_MFP1 PE7  setting for SD0_CMD         */
#define SYS_GPE_MFP1_PE7MFP_CANFD1_TXH       (0x08UL<<SYS_GPE_MFP1_PE7MFP_Pos)   /*!< GPA_MFP1 PE7  setting for CANFD1_TXH      */
#define SYS_GPE_MFP1_PE7MFP_CANFD1_TXD       (0x09UL<<SYS_GPE_MFP1_PE7MFP_Pos)   /*!< GPA_MFP1 PE7  setting for CANFD1_TXD      */
#define SYS_GPE_MFP1_PE7MFP_EPWM0_CH0        (0x0cUL<<SYS_GPE_MFP1_PE7MFP_Pos)   /*!< GPA_MFP1 PE7  setting for EPWM0_CH0       */
#define SYS_GPE_MFP1_PE7MFP_BPWM0_CH5        (0x0dUL<<SYS_GPE_MFP1_PE7MFP_Pos)   /*!< GPA_MFP1 PE7  setting for BPWM0_CH5       */
#define SYS_GPE_MFP1_PE7MFP_QSPI0_MISO0      (0x0fUL<<SYS_GPE_MFP1_PE7MFP_Pos)   /*!< GPA_MFP1 PE7  setting for QSPI0_MISO0     */

/* PE.8 MFP */
#define SYS_GPE_MFP2_PE8MFP_GPIO             (0x00UL<<SYS_GPE_MFP2_PE8MFP_Pos)   /*!< GPE_MFP2 PE8  setting for GPIO            */
#define SYS_GPE_MFP2_PE8MFP_EBI_ADR10        (0x02UL<<SYS_GPE_MFP2_PE8MFP_Pos)   /*!< GPA_MFP2 PE8  setting for EBI_ADR10       */
#define SYS_GPE_MFP2_PE8MFP_I2S0_BCLK        (0x04UL<<SYS_GPE_MFP2_PE8MFP_Pos)   /*!< GPA_MFP2 PE8  setting for I2S0_BCLK       */
#define SYS_GPE_MFP2_PE8MFP_SPI2_CLK         (0x05UL<<SYS_GPE_MFP2_PE8MFP_Pos)   /*!< GPA_MFP2 PE8  setting for SPI2_CLK        */
#define SYS_GPE_MFP2_PE8MFP_USCI1_CTL1       (0x06UL<<SYS_GPE_MFP2_PE8MFP_Pos)   /*!< GPA_MFP2 PE8  setting for USCI1_CTL1      */
#define SYS_GPE_MFP2_PE8MFP_UART2_TXD        (0x07UL<<SYS_GPE_MFP2_PE8MFP_Pos)   /*!< GPA_MFP2 PE8  setting for UART2_TXD       */
#define SYS_GPE_MFP2_PE8MFP_EPWM0_CH0        (0x0aUL<<SYS_GPE_MFP2_PE8MFP_Pos)   /*!< GPA_MFP2 PE8  setting for EPWM0_CH0       */
#define SYS_GPE_MFP2_PE8MFP_EPWM0_BRAKE0     (0x0bUL<<SYS_GPE_MFP2_PE8MFP_Pos)   /*!< GPA_MFP2 PE8  setting for EPWM0_BRAKE0    */
#define SYS_GPE_MFP2_PE8MFP_ECAP0_IC0        (0x0cUL<<SYS_GPE_MFP2_PE8MFP_Pos)   /*!< GPA_MFP2 PE8  setting for ECAP0_IC0       */
#define SYS_GPE_MFP2_PE8MFP_BPWM4_CH0        (0x0dUL<<SYS_GPE_MFP2_PE8MFP_Pos)   /*!< GPA_MFP2 PE8  setting for BPWM4_CH0       */

/* PE.9 MFP */
#define SYS_GPE_MFP2_PE9MFP_GPIO             (0x00UL<<SYS_GPE_MFP2_PE9MFP_Pos)   /*!< GPE_MFP2 PE9  setting for GPIO            */
#define SYS_GPE_MFP2_PE9MFP_EBI_ADR11        (0x02UL<<SYS_GPE_MFP2_PE9MFP_Pos)   /*!< GPA_MFP2 PE9  setting for EBI_ADR11       */
#define SYS_GPE_MFP2_PE9MFP_I2S0_MCLK        (0x04UL<<SYS_GPE_MFP2_PE9MFP_Pos)   /*!< GPA_MFP2 PE9  setting for I2S0_MCLK       */
#define SYS_GPE_MFP2_PE9MFP_SPI2_MISO        (0x05UL<<SYS_GPE_MFP2_PE9MFP_Pos)   /*!< GPA_MFP2 PE9  setting for SPI2_MISO       */
#define SYS_GPE_MFP2_PE9MFP_USCI1_CTL0       (0x06UL<<SYS_GPE_MFP2_PE9MFP_Pos)   /*!< GPA_MFP2 PE9  setting for USCI1_CTL0      */
#define SYS_GPE_MFP2_PE9MFP_UART2_RXD        (0x07UL<<SYS_GPE_MFP2_PE9MFP_Pos)   /*!< GPA_MFP2 PE9  setting for UART2_RXD       */
#define SYS_GPE_MFP2_PE9MFP_EPWM0_CH1        (0x0aUL<<SYS_GPE_MFP2_PE9MFP_Pos)   /*!< GPA_MFP2 PE9  setting for EPWM0_CH1       */
#define SYS_GPE_MFP2_PE9MFP_EPWM0_BRAKE1     (0x0bUL<<SYS_GPE_MFP2_PE9MFP_Pos)   /*!< GPA_MFP2 PE9  setting for EPWM0_BRAKE1    */
#define SYS_GPE_MFP2_PE9MFP_ECAP0_IC1        (0x0cUL<<SYS_GPE_MFP2_PE9MFP_Pos)   /*!< GPA_MFP2 PE9  setting for ECAP0_IC1       */
#define SYS_GPE_MFP2_PE9MFP_BPWM4_CH1        (0x0dUL<<SYS_GPE_MFP2_PE9MFP_Pos)   /*!< GPA_MFP2 PE9  setting for BPWM4_CH1       */

/* PE.10 MFP */
#define SYS_GPE_MFP2_PE10MFP_GPIO            (0x00UL<<SYS_GPE_MFP2_PE10MFP_Pos)  /*!< GPE_MFP2 PE10 setting for GPIO            */
#define SYS_GPE_MFP2_PE10MFP_EBI_ADR12       (0x02UL<<SYS_GPE_MFP2_PE10MFP_Pos)  /*!< GPA_MFP2 PE10 setting for EBI_ADR12       */
#define SYS_GPE_MFP2_PE10MFP_I2S0_DI         (0x04UL<<SYS_GPE_MFP2_PE10MFP_Pos)  /*!< GPA_MFP2 PE10 setting for I2S0_DI         */
#define SYS_GPE_MFP2_PE10MFP_SPI2_MOSI       (0x05UL<<SYS_GPE_MFP2_PE10MFP_Pos)  /*!< GPA_MFP2 PE10 setting for SPI2_MOSI       */
#define SYS_GPE_MFP2_PE10MFP_USCI1_DAT0      (0x06UL<<SYS_GPE_MFP2_PE10MFP_Pos)  /*!< GPA_MFP2 PE10 setting for USCI1_DAT0      */
#define SYS_GPE_MFP2_PE10MFP_UART3_TXD       (0x07UL<<SYS_GPE_MFP2_PE10MFP_Pos)  /*!< GPA_MFP2 PE10 setting for UART3_TXD       */
#define SYS_GPE_MFP2_PE10MFP_EPWM0_CH2       (0x0aUL<<SYS_GPE_MFP2_PE10MFP_Pos)  /*!< GPA_MFP2 PE10 setting for EPWM0_CH2       */
#define SYS_GPE_MFP2_PE10MFP_EPWM1_BRAKE0    (0x0bUL<<SYS_GPE_MFP2_PE10MFP_Pos)  /*!< GPA_MFP2 PE10 setting for EPWM1_BRAKE0    */
#define SYS_GPE_MFP2_PE10MFP_ECAP0_IC2       (0x0cUL<<SYS_GPE_MFP2_PE10MFP_Pos)  /*!< GPA_MFP2 PE10 setting for ECAP0_IC2       */
#define SYS_GPE_MFP2_PE10MFP_BPWM4_CH2       (0x0dUL<<SYS_GPE_MFP2_PE10MFP_Pos)  /*!< GPA_MFP2 PE10 setting for BPWM4_CH2       */

/* PE.11 MFP */
#define SYS_GPE_MFP2_PE11MFP_GPIO            (0x00UL<<SYS_GPE_MFP2_PE11MFP_Pos)  /*!< GPE_MFP2 PE11 setting for GPIO            */
#define SYS_GPE_MFP2_PE11MFP_EBI_ADR13       (0x02UL<<SYS_GPE_MFP2_PE11MFP_Pos)  /*!< GPA_MFP2 PE11 setting for EBI_ADR13       */
#define SYS_GPE_MFP2_PE11MFP_I2S0_DO         (0x04UL<<SYS_GPE_MFP2_PE11MFP_Pos)  /*!< GPA_MFP2 PE11 setting for I2S0_DO         */
#define SYS_GPE_MFP2_PE11MFP_SPI2_SS         (0x05UL<<SYS_GPE_MFP2_PE11MFP_Pos)  /*!< GPA_MFP2 PE11 setting for SPI2_SS         */
#define SYS_GPE_MFP2_PE11MFP_USCI1_DAT1      (0x06UL<<SYS_GPE_MFP2_PE11MFP_Pos)  /*!< GPA_MFP2 PE11 setting for USCI1_DAT1      */
#define SYS_GPE_MFP2_PE11MFP_UART3_RXD       (0x07UL<<SYS_GPE_MFP2_PE11MFP_Pos)  /*!< GPA_MFP2 PE11 setting for UART3_RXD       */
#define SYS_GPE_MFP2_PE11MFP_UART1_nCTS      (0x08UL<<SYS_GPE_MFP2_PE11MFP_Pos)  /*!< GPA_MFP2 PE11 setting for UART1_nCTS      */
#define SYS_GPE_MFP2_PE11MFP_EPWM0_CH3       (0x0aUL<<SYS_GPE_MFP2_PE11MFP_Pos)  /*!< GPA_MFP2 PE11 setting for EPWM0_CH3       */
#define SYS_GPE_MFP2_PE11MFP_EPWM1_BRAKE1    (0x0bUL<<SYS_GPE_MFP2_PE11MFP_Pos)  /*!< GPA_MFP2 PE11 setting for EPWM1_BRAKE1    */
#define SYS_GPE_MFP2_PE11MFP_BPWM4_CH3       (0x0dUL<<SYS_GPE_MFP2_PE11MFP_Pos)  /*!< GPA_MFP2 PE11 setting for BPWM4_CH3       */

/* PE.12 MFP */
#define SYS_GPE_MFP3_PE12MFP_GPIO            (0x00UL<<SYS_GPE_MFP3_PE12MFP_Pos)  /*!< GPE_MFP3 PE12 setting for GPIO            */
#define SYS_GPE_MFP3_PE12MFP_EBI_ADR14       (0x02UL<<SYS_GPE_MFP3_PE12MFP_Pos)  /*!< GPA_MFP3 PE12 setting for EBI_ADR14       */
#define SYS_GPE_MFP3_PE12MFP_I2S0_LRCK       (0x04UL<<SYS_GPE_MFP3_PE12MFP_Pos)  /*!< GPA_MFP3 PE12 setting for I2S0_LRCK       */
#define SYS_GPE_MFP3_PE12MFP_SPI2_I2SMCLK    (0x05UL<<SYS_GPE_MFP3_PE12MFP_Pos)  /*!< GPA_MFP3 PE12 setting for SPI2_I2SMCLK    */
#define SYS_GPE_MFP3_PE12MFP_USCI1_CLK       (0x06UL<<SYS_GPE_MFP3_PE12MFP_Pos)  /*!< GPA_MFP3 PE12 setting for USCI1_CLK       */
#define SYS_GPE_MFP3_PE12MFP_UART1_nRTS      (0x08UL<<SYS_GPE_MFP3_PE12MFP_Pos)  /*!< GPA_MFP3 PE12 setting for UART1_nRTS      */
#define SYS_GPE_MFP3_PE12MFP_EPWM0_CH4       (0x0aUL<<SYS_GPE_MFP3_PE12MFP_Pos)  /*!< GPA_MFP3 PE12 setting for EPWM0_CH4       */
#define SYS_GPE_MFP3_PE12MFP_BPWM4_CH4       (0x0dUL<<SYS_GPE_MFP3_PE12MFP_Pos)  /*!< GPA_MFP3 PE12 setting for BPWM4_CH4       */

/* PE.13 MFP */
#define SYS_GPE_MFP3_PE13MFP_GPIO            (0x00UL<<SYS_GPE_MFP3_PE13MFP_Pos)  /*!< GPE_MFP3 PE13 setting for GPIO            */
#define SYS_GPE_MFP3_PE13MFP_EBI_ADR15       (0x02UL<<SYS_GPE_MFP3_PE13MFP_Pos)  /*!< GPA_MFP3 PE13 setting for EBI_ADR15       */
#define SYS_GPE_MFP3_PE13MFP_I2C0_SCL        (0x04UL<<SYS_GPE_MFP3_PE13MFP_Pos)  /*!< GPA_MFP3 PE13 setting for I2C0_SCL        */
#define SYS_GPE_MFP3_PE13MFP_UART4_nRTS      (0x05UL<<SYS_GPE_MFP3_PE13MFP_Pos)  /*!< GPA_MFP3 PE13 setting for UART4_nRTS      */
#define SYS_GPE_MFP3_PE13MFP_UART1_TXD       (0x08UL<<SYS_GPE_MFP3_PE13MFP_Pos)  /*!< GPA_MFP3 PE13 setting for UART1_TXD       */
#define SYS_GPE_MFP3_PE13MFP_EPWM0_CH5       (0x0aUL<<SYS_GPE_MFP3_PE13MFP_Pos)  /*!< GPA_MFP3 PE13 setting for EPWM0_CH5       */
#define SYS_GPE_MFP3_PE13MFP_EPWM1_CH0       (0x0bUL<<SYS_GPE_MFP3_PE13MFP_Pos)  /*!< GPA_MFP3 PE13 setting for EPWM1_CH0       */
#define SYS_GPE_MFP3_PE13MFP_BPWM1_CH5       (0x0cUL<<SYS_GPE_MFP3_PE13MFP_Pos)  /*!< GPA_MFP3 PE13 setting for BPWM1_CH5       */
#define SYS_GPE_MFP3_PE13MFP_BPWM4_CH5       (0x0dUL<<SYS_GPE_MFP3_PE13MFP_Pos)  /*!< GPA_MFP3 PE13 setting for BPWM4_CH5       */
#define SYS_GPE_MFP3_PE13MFP_TRACE_SWO       (0x0eUL<<SYS_GPE_MFP3_PE13MFP_Pos)  /*!< GPA_MFP3 PE13 setting for TRACE_SWO       */

/* PE.14 MFP */
#define SYS_GPE_MFP3_PE14MFP_GPIO            (0x00UL<<SYS_GPE_MFP3_PE14MFP_Pos)  /*!< GPE_MFP3 PE14 setting for GPIO            */
#define SYS_GPE_MFP3_PE14MFP_EBI_AD8         (0x02UL<<SYS_GPE_MFP3_PE14MFP_Pos)  /*!< GPA_MFP3 PE14 setting for EBI_AD8         */
#define SYS_GPE_MFP3_PE14MFP_UART2_TXD       (0x03UL<<SYS_GPE_MFP3_PE14MFP_Pos)  /*!< GPA_MFP3 PE14 setting for UART2_TXD       */
#define SYS_GPE_MFP3_PE14MFP_CANFD0_TXD      (0x04UL<<SYS_GPE_MFP3_PE14MFP_Pos)  /*!< GPA_MFP3 PE14 setting for CANFD0_TXD      */
#define SYS_GPE_MFP3_PE14MFP_UART3_TXD       (0x07UL<<SYS_GPE_MFP3_PE14MFP_Pos)  /*!< GPA_MFP3 PE14 setting for UART3_TXD       */
#define SYS_GPE_MFP3_PE14MFP_I2C1_SCL        (0x08UL<<SYS_GPE_MFP3_PE14MFP_Pos)  /*!< GPA_MFP3 PE14 setting for I2C1_SCL        */
#define SYS_GPE_MFP3_PE14MFP_UART4_nCTS      (0x09UL<<SYS_GPE_MFP3_PE14MFP_Pos)  /*!< GPA_MFP3 PE14 setting for UART4_nCTS      */
#define SYS_GPE_MFP3_PE14MFP_BPWM3_CH0       (0x0cUL<<SYS_GPE_MFP3_PE14MFP_Pos)  /*!< GPA_MFP3 PE14 setting for BPWM3_CH0       */
#define SYS_GPE_MFP3_PE14MFP_BPWM5_CH0       (0x0dUL<<SYS_GPE_MFP3_PE14MFP_Pos)  /*!< GPA_MFP3 PE14 setting for BPWM5_CH0       */

/* PE.15 MFP */
#define SYS_GPE_MFP3_PE15MFP_GPIO            (0x00UL<<SYS_GPE_MFP3_PE15MFP_Pos)  /*!< GPE_MFP3 PE15 setting for GPIO            */
#define SYS_GPE_MFP3_PE15MFP_EBI_AD9         (0x02UL<<SYS_GPE_MFP3_PE15MFP_Pos)  /*!< GPA_MFP3 PE15 setting for EBI_AD9         */
#define SYS_GPE_MFP3_PE15MFP_UART2_RXD       (0x03UL<<SYS_GPE_MFP3_PE15MFP_Pos)  /*!< GPA_MFP3 PE15 setting for UART2_RXD       */
#define SYS_GPE_MFP3_PE15MFP_CANFD0_RXD      (0x04UL<<SYS_GPE_MFP3_PE15MFP_Pos)  /*!< GPA_MFP3 PE15 setting for CANFD0_RXD      */
#define SYS_GPE_MFP3_PE15MFP_UART3_RXD       (0x07UL<<SYS_GPE_MFP3_PE15MFP_Pos)  /*!< GPA_MFP3 PE15 setting for UART3_RXD       */
#define SYS_GPE_MFP3_PE15MFP_I2C1_SDA        (0x08UL<<SYS_GPE_MFP3_PE15MFP_Pos)  /*!< GPA_MFP3 PE15 setting for I2C1_SDA        */
#define SYS_GPE_MFP3_PE15MFP_UART4_nRTS      (0x09UL<<SYS_GPE_MFP3_PE15MFP_Pos)  /*!< GPA_MFP3 PE15 setting for UART4_nRTS      */
#define SYS_GPE_MFP3_PE15MFP_BPWM3_CH1       (0x0cUL<<SYS_GPE_MFP3_PE15MFP_Pos)  /*!< GPA_MFP3 PE15 setting for BPWM3_CH1       */
#define SYS_GPE_MFP3_PE15MFP_BPWM5_CH1       (0x0dUL<<SYS_GPE_MFP3_PE15MFP_Pos)  /*!< GPA_MFP3 PE15 setting for BPWM5_CH1       */

/* PF.0 MFP */
#define SYS_GPF_MFP0_PF0MFP_GPIO             (0x00UL<<SYS_GPF_MFP0_PF0MFP_Pos)   /*!< GPF_MFP0 PF0  setting for GPIO            */
#define SYS_GPF_MFP0_PF0MFP_UART1_TXD        (0x02UL<<SYS_GPF_MFP0_PF0MFP_Pos)   /*!< GPA_MFP0 PF0  setting for UART1_TXD       */
#define SYS_GPF_MFP0_PF0MFP_I2C1_SCL         (0x03UL<<SYS_GPF_MFP0_PF0MFP_Pos)   /*!< GPA_MFP0 PF0  setting for I2C1_SCL        */
#define SYS_GPF_MFP0_PF0MFP_UART0_TXD        (0x04UL<<SYS_GPF_MFP0_PF0MFP_Pos)   /*!< GPA_MFP0 PF0  setting for UART0_TXD       */
#define SYS_GPF_MFP0_PF0MFP_SPI0_CLK         (0x05UL<<SYS_GPF_MFP0_PF0MFP_Pos)   /*!< GPA_MFP0 PF0  setting for SPI0_CLK        */
#define SYS_GPF_MFP0_PF0MFP_I2S0_DO          (0x06UL<<SYS_GPF_MFP0_PF0MFP_Pos)   /*!< GPA_MFP0 PF0  setting for I2S0_DO         */
#define SYS_GPF_MFP0_PF0MFP_USCI0_CTL1       (0x07UL<<SYS_GPF_MFP0_PF0MFP_Pos)   /*!< GPA_MFP0 PF0  setting for USCI0_CTL1      */
#define SYS_GPF_MFP0_PF0MFP_UART2_TXD        (0x08UL<<SYS_GPF_MFP0_PF0MFP_Pos)   /*!< GPA_MFP0 PF0  setting for UART2_TXD       */
#define SYS_GPF_MFP0_PF0MFP_I2C0_SCL         (0x09UL<<SYS_GPF_MFP0_PF0MFP_Pos)   /*!< GPA_MFP0 PF0  setting for I2C0_SCL        */
#define SYS_GPF_MFP0_PF0MFP_I3C0_SCL         (0x0aUL<<SYS_GPF_MFP0_PF0MFP_Pos)   /*!< GPA_MFP0 PF0  setting for I3C0_SCL        */
#define SYS_GPF_MFP0_PF0MFP_EPWM1_CH4        (0x0bUL<<SYS_GPF_MFP0_PF0MFP_Pos)   /*!< GPA_MFP0 PF0  setting for EPWM1_CH4       */
#define SYS_GPF_MFP0_PF0MFP_BPWM5_CH0        (0x0cUL<<SYS_GPF_MFP0_PF0MFP_Pos)   /*!< GPA_MFP0 PF0  setting for BPWM5_CH0       */
#define SYS_GPF_MFP0_PF0MFP_ACMP0_O          (0x0dUL<<SYS_GPF_MFP0_PF0MFP_Pos)   /*!< GPA_MFP0 PF0  setting for ACMP0_O         */
#define SYS_GPF_MFP0_PF0MFP_ICE_DAT          (0x0eUL<<SYS_GPF_MFP0_PF0MFP_Pos)   /*!< GPA_MFP0 PF0  setting for ICE_DAT         */
#define SYS_GPF_MFP0_PF0MFP_EADC0_ST         (0x0fUL<<SYS_GPF_MFP0_PF0MFP_Pos)   /*!< GPA_MFP0 PF0  setting for EADC0_ST        */

/* PF.1 MFP */
#define SYS_GPF_MFP0_PF1MFP_GPIO             (0x00UL<<SYS_GPF_MFP0_PF1MFP_Pos)   /*!< GPF_MFP0 PF1  setting for GPIO            */
#define SYS_GPF_MFP0_PF1MFP_UART1_RXD        (0x02UL<<SYS_GPF_MFP0_PF1MFP_Pos)   /*!< GPA_MFP0 PF1  setting for UART1_RXD       */
#define SYS_GPF_MFP0_PF1MFP_I2C1_SDA         (0x03UL<<SYS_GPF_MFP0_PF1MFP_Pos)   /*!< GPA_MFP0 PF1  setting for I2C1_SDA        */
#define SYS_GPF_MFP0_PF1MFP_UART0_RXD        (0x04UL<<SYS_GPF_MFP0_PF1MFP_Pos)   /*!< GPA_MFP0 PF1  setting for UART0_RXD       */
#define SYS_GPF_MFP0_PF1MFP_SPI0_SS          (0x05UL<<SYS_GPF_MFP0_PF1MFP_Pos)   /*!< GPA_MFP0 PF1  setting for SPI0_SS         */
#define SYS_GPF_MFP0_PF1MFP_I2S0_LRCK        (0x06UL<<SYS_GPF_MFP0_PF1MFP_Pos)   /*!< GPA_MFP0 PF1  setting for I2S0_LRCK       */
#define SYS_GPF_MFP0_PF1MFP_USCI0_DAT1       (0x07UL<<SYS_GPF_MFP0_PF1MFP_Pos)   /*!< GPA_MFP0 PF1  setting for USCI0_DAT1      */
#define SYS_GPF_MFP0_PF1MFP_UART2_RXD        (0x08UL<<SYS_GPF_MFP0_PF1MFP_Pos)   /*!< GPA_MFP0 PF1  setting for UART2_RXD       */
#define SYS_GPF_MFP0_PF1MFP_I2C0_SDA         (0x09UL<<SYS_GPF_MFP0_PF1MFP_Pos)   /*!< GPA_MFP0 PF1  setting for I2C0_SDA        */
#define SYS_GPF_MFP0_PF1MFP_I3C0_SDA         (0x0aUL<<SYS_GPF_MFP0_PF1MFP_Pos)   /*!< GPA_MFP0 PF1  setting for I3C0_SDA        */
#define SYS_GPF_MFP0_PF1MFP_EPWM1_CH5        (0x0bUL<<SYS_GPF_MFP0_PF1MFP_Pos)   /*!< GPA_MFP0 PF1  setting for EPWM1_CH5       */
#define SYS_GPF_MFP0_PF1MFP_BPWM5_CH1        (0x0cUL<<SYS_GPF_MFP0_PF1MFP_Pos)   /*!< GPA_MFP0 PF1  setting for BPWM5_CH1       */
#define SYS_GPF_MFP0_PF1MFP_ACMP1_O          (0x0dUL<<SYS_GPF_MFP0_PF1MFP_Pos)   /*!< GPA_MFP0 PF1  setting for ACMP1_O         */
#define SYS_GPF_MFP0_PF1MFP_ICE_CLK          (0x0eUL<<SYS_GPF_MFP0_PF1MFP_Pos)   /*!< GPA_MFP0 PF1  setting for ICE_CLK         */

/* PF.2 MFP */
#define SYS_GPF_MFP0_PF2MFP_GPIO             (0x00UL<<SYS_GPF_MFP0_PF2MFP_Pos)   /*!< GPF_MFP0 PF2  setting for GPIO            */
#define SYS_GPF_MFP0_PF2MFP_EBI_nCS1         (0x02UL<<SYS_GPF_MFP0_PF2MFP_Pos)   /*!< GPA_MFP0 PF2  setting for EBI_nCS1        */
#define SYS_GPF_MFP0_PF2MFP_UART0_RXD        (0x03UL<<SYS_GPF_MFP0_PF2MFP_Pos)   /*!< GPA_MFP0 PF2  setting for UART0_RXD       */
#define SYS_GPF_MFP0_PF2MFP_I2C0_SDA         (0x04UL<<SYS_GPF_MFP0_PF2MFP_Pos)   /*!< GPA_MFP0 PF2  setting for I2C0_SDA        */
#define SYS_GPF_MFP0_PF2MFP_QSPI0_CLK        (0x05UL<<SYS_GPF_MFP0_PF2MFP_Pos)   /*!< GPA_MFP0 PF2  setting for QSPI0_CLK       */
#define SYS_GPF_MFP0_PF2MFP_SPI1_SS          (0x06UL<<SYS_GPF_MFP0_PF2MFP_Pos)   /*!< GPA_MFP0 PF2  setting for SPI1_SS         */
#define SYS_GPF_MFP0_PF2MFP_I2C2_SMBSUS      (0x08UL<<SYS_GPF_MFP0_PF2MFP_Pos)   /*!< GPA_MFP0 PF2  setting for I2C2_SMBSUS     */
#define SYS_GPF_MFP0_PF2MFP_EPWM1_CH1        (0x09UL<<SYS_GPF_MFP0_PF2MFP_Pos)   /*!< GPA_MFP0 PF2  setting for EPWM1_CH1       */
#define SYS_GPF_MFP0_PF2MFP_XT1_OUT          (0x0aUL<<SYS_GPF_MFP0_PF2MFP_Pos)   /*!< GPA_MFP0 PF2  setting for XT1_OUT         */
#define SYS_GPF_MFP0_PF2MFP_BPWM1_CH1        (0x0bUL<<SYS_GPF_MFP0_PF2MFP_Pos)   /*!< GPA_MFP0 PF2  setting for BPWM1_CH1       */
#define SYS_GPF_MFP0_PF2MFP_BPWM5_CH5        (0x0cUL<<SYS_GPF_MFP0_PF2MFP_Pos)   /*!< GPA_MFP0 PF2  setting for BPWM5_CH5       */
#define SYS_GPF_MFP0_PF2MFP_TM1_EXT          (0x0fUL<<SYS_GPF_MFP0_PF2MFP_Pos)   /*!< GPA_MFP0 PF2  setting for TM1_EXT         */
#define SYS_GPF_MFP0_PF2MFP_PDCI_G2_TX3      (0x10UL<<SYS_GPF_MFP0_PF2MFP_Pos)   /*!< GPA_MFP0 PF2  setting for PDCI_G2_TX3     */

/* PF.3 MFP */
#define SYS_GPF_MFP0_PF3MFP_GPIO             (0x00UL<<SYS_GPF_MFP0_PF3MFP_Pos)   /*!< GPF_MFP0 PF3  setting for GPIO            */
#define SYS_GPF_MFP0_PF3MFP_EBI_nCS0         (0x02UL<<SYS_GPF_MFP0_PF3MFP_Pos)   /*!< GPA_MFP0 PF3  setting for EBI_nCS0        */
#define SYS_GPF_MFP0_PF3MFP_UART0_TXD        (0x03UL<<SYS_GPF_MFP0_PF3MFP_Pos)   /*!< GPA_MFP0 PF3  setting for UART0_TXD       */
#define SYS_GPF_MFP0_PF3MFP_I2C0_SCL         (0x04UL<<SYS_GPF_MFP0_PF3MFP_Pos)   /*!< GPA_MFP0 PF3  setting for I2C0_SCL        */
#define SYS_GPF_MFP0_PF3MFP_SPI1_CLK         (0x06UL<<SYS_GPF_MFP0_PF3MFP_Pos)   /*!< GPA_MFP0 PF3  setting for SPI1_CLK        */
#define SYS_GPF_MFP0_PF3MFP_I2C2_SMBAL       (0x08UL<<SYS_GPF_MFP0_PF3MFP_Pos)   /*!< GPA_MFP0 PF3  setting for I2C2_SMBAL      */
#define SYS_GPF_MFP0_PF3MFP_EPWM1_CH0        (0x09UL<<SYS_GPF_MFP0_PF3MFP_Pos)   /*!< GPA_MFP0 PF3  setting for EPWM1_CH0       */
#define SYS_GPF_MFP0_PF3MFP_XT1_IN           (0x0aUL<<SYS_GPF_MFP0_PF3MFP_Pos)   /*!< GPA_MFP0 PF3  setting for XT1_IN          */
#define SYS_GPF_MFP0_PF3MFP_BPWM1_CH0        (0x0bUL<<SYS_GPF_MFP0_PF3MFP_Pos)   /*!< GPA_MFP0 PF3  setting for BPWM1_CH0       */
#define SYS_GPF_MFP0_PF3MFP_BPWM5_CH4        (0x0cUL<<SYS_GPF_MFP0_PF3MFP_Pos)   /*!< GPA_MFP0 PF3  setting for BPWM5_CH4       */
#define SYS_GPF_MFP0_PF3MFP_TM0_EXT          (0x0fUL<<SYS_GPF_MFP0_PF3MFP_Pos)   /*!< GPA_MFP0 PF3  setting for TM0_EXT         */
#define SYS_GPF_MFP0_PF3MFP_PDCI_G2_TX2      (0x10UL<<SYS_GPF_MFP0_PF3MFP_Pos)   /*!< GPA_MFP0 PF3  setting for PDCI_G2_TX2     */

/* PF.4 MFP */
#define SYS_GPF_MFP1_PF4MFP_GPIO             (0x00UL<<SYS_GPF_MFP1_PF4MFP_Pos)   /*!< GPF_MFP1 PF4  setting for GPIO            */
#define SYS_GPF_MFP1_PF4MFP_UART2_TXD        (0x02UL<<SYS_GPF_MFP1_PF4MFP_Pos)   /*!< GPA_MFP1 PF4  setting for UART2_TXD       */
#define SYS_GPF_MFP1_PF4MFP_EBI_AD0          (0x03UL<<SYS_GPF_MFP1_PF4MFP_Pos)   /*!< GPA_MFP1 PF4  setting for EBI_AD0         */
#define SYS_GPF_MFP1_PF4MFP_UART2_nRTS       (0x04UL<<SYS_GPF_MFP1_PF4MFP_Pos)   /*!< GPA_MFP1 PF4  setting for UART2_nRTS      */
#define SYS_GPF_MFP1_PF4MFP_UART0_nRTS       (0x05UL<<SYS_GPF_MFP1_PF4MFP_Pos)   /*!< GPA_MFP1 PF4  setting for UART0_nRTS      */
#define SYS_GPF_MFP1_PF4MFP_UART3_RXD        (0x06UL<<SYS_GPF_MFP1_PF4MFP_Pos)   /*!< GPA_MFP1 PF4  setting for UART3_RXD       */
#define SYS_GPF_MFP1_PF4MFP_EPWM0_CH1        (0x07UL<<SYS_GPF_MFP1_PF4MFP_Pos)   /*!< GPA_MFP1 PF4  setting for EPWM0_CH1       */
#define SYS_GPF_MFP1_PF4MFP_BPWM0_CH5        (0x08UL<<SYS_GPF_MFP1_PF4MFP_Pos)   /*!< GPA_MFP1 PF4  setting for BPWM0_CH5       */
#define SYS_GPF_MFP1_PF4MFP_X32_OUT          (0x0aUL<<SYS_GPF_MFP1_PF4MFP_Pos)   /*!< GPA_MFP1 PF4  setting for X32_OUT         */
#define SYS_GPF_MFP1_PF4MFP_PDCI_G2_TX1      (0x10UL<<SYS_GPF_MFP1_PF4MFP_Pos)   /*!< GPA_MFP1 PF4  setting for PDCI_G2_TX1     */

/* PF.5 MFP */
#define SYS_GPF_MFP1_PF5MFP_GPIO             (0x00UL<<SYS_GPF_MFP1_PF5MFP_Pos)   /*!< GPF_MFP1 PF5  setting for GPIO            */
#define SYS_GPF_MFP1_PF5MFP_UART2_RXD        (0x02UL<<SYS_GPF_MFP1_PF5MFP_Pos)   /*!< GPA_MFP1 PF5  setting for UART2_RXD       */
#define SYS_GPF_MFP1_PF5MFP_EBI_AD1          (0x03UL<<SYS_GPF_MFP1_PF5MFP_Pos)   /*!< GPA_MFP1 PF5  setting for EBI_AD1         */
#define SYS_GPF_MFP1_PF5MFP_UART2_nCTS       (0x04UL<<SYS_GPF_MFP1_PF5MFP_Pos)   /*!< GPA_MFP1 PF5  setting for UART2_nCTS      */
#define SYS_GPF_MFP1_PF5MFP_UART0_nCTS       (0x05UL<<SYS_GPF_MFP1_PF5MFP_Pos)   /*!< GPA_MFP1 PF5  setting for UART0_nCTS      */
#define SYS_GPF_MFP1_PF5MFP_UART3_TXD        (0x06UL<<SYS_GPF_MFP1_PF5MFP_Pos)   /*!< GPA_MFP1 PF5  setting for UART3_TXD       */
#define SYS_GPF_MFP1_PF5MFP_EPWM0_CH0        (0x07UL<<SYS_GPF_MFP1_PF5MFP_Pos)   /*!< GPA_MFP1 PF5  setting for EPWM0_CH0       */
#define SYS_GPF_MFP1_PF5MFP_BPWM0_CH4        (0x08UL<<SYS_GPF_MFP1_PF5MFP_Pos)   /*!< GPA_MFP1 PF5  setting for BPWM0_CH4       */
#define SYS_GPF_MFP1_PF5MFP_EPWM0_SYNC_OUT   (0x09UL<<SYS_GPF_MFP1_PF5MFP_Pos)   /*!< GPA_MFP1 PF5  setting for EPWM0_SYNC_OUT  */
#define SYS_GPF_MFP1_PF5MFP_X32_IN           (0x0aUL<<SYS_GPF_MFP1_PF5MFP_Pos)   /*!< GPA_MFP1 PF5  setting for X32_IN          */
#define SYS_GPF_MFP1_PF5MFP_EADC0_ST         (0x0bUL<<SYS_GPF_MFP1_PF5MFP_Pos)   /*!< GPA_MFP1 PF5  setting for EADC0_ST        */
#define SYS_GPF_MFP1_PF5MFP_PDCI_G2_TX0      (0x10UL<<SYS_GPF_MFP1_PF5MFP_Pos)   /*!< GPA_MFP1 PF5  setting for PDCI_G2_TX0     */

/* PF.6 MFP */
#define SYS_GPF_MFP1_PF6MFP_GPIO             (0x00UL<<SYS_GPF_MFP1_PF6MFP_Pos)   /*!< GPF_MFP1 PF6  setting for GPIO            */
#define SYS_GPF_MFP1_PF6MFP_EBI_ADR19        (0x02UL<<SYS_GPF_MFP1_PF6MFP_Pos)   /*!< GPA_MFP1 PF6  setting for EBI_ADR19       */
#define SYS_GPF_MFP1_PF6MFP_I2S0_LRCK        (0x04UL<<SYS_GPF_MFP1_PF6MFP_Pos)   /*!< GPA_MFP1 PF6  setting for I2S0_LRCK       */
#define SYS_GPF_MFP1_PF6MFP_SPI0_MOSI        (0x05UL<<SYS_GPF_MFP1_PF6MFP_Pos)   /*!< GPA_MFP1 PF6  setting for SPI0_MOSI       */
#define SYS_GPF_MFP1_PF6MFP_UART4_RXD        (0x06UL<<SYS_GPF_MFP1_PF6MFP_Pos)   /*!< GPA_MFP1 PF6  setting for UART4_RXD       */
#define SYS_GPF_MFP1_PF6MFP_EBI_nCS0         (0x07UL<<SYS_GPF_MFP1_PF6MFP_Pos)   /*!< GPA_MFP1 PF6  setting for EBI_nCS0        */
#define SYS_GPF_MFP1_PF6MFP_BPWM3_CH4        (0x0cUL<<SYS_GPF_MFP1_PF6MFP_Pos)   /*!< GPA_MFP1 PF6  setting for BPWM3_CH4       */
#define SYS_GPF_MFP1_PF6MFP_TRACE_SWO        (0x0eUL<<SYS_GPF_MFP1_PF6MFP_Pos)   /*!< GPA_MFP1 PF6  setting for TRACE_SWO       */
#define SYS_GPF_MFP1_PF6MFP_PDCI_G4_RX0      (0x0fUL<<SYS_GPF_MFP1_PF6MFP_Pos)   /*!< GPA_MFP1 PF6  setting for PDCI_G4_RX0     */

/* PF.7 MFP */
#define SYS_GPF_MFP1_PF7MFP_GPIO             (0x00UL<<SYS_GPF_MFP1_PF7MFP_Pos)   /*!< GPF_MFP1 PF7  setting for GPIO            */
#define SYS_GPF_MFP1_PF7MFP_EBI_ADR18        (0x02UL<<SYS_GPF_MFP1_PF7MFP_Pos)   /*!< GPA_MFP1 PF7  setting for EBI_ADR18       */
#define SYS_GPF_MFP1_PF7MFP_I2S0_DO          (0x04UL<<SYS_GPF_MFP1_PF7MFP_Pos)   /*!< GPA_MFP1 PF7  setting for I2S0_DO         */
#define SYS_GPF_MFP1_PF7MFP_SPI0_MISO        (0x05UL<<SYS_GPF_MFP1_PF7MFP_Pos)   /*!< GPA_MFP1 PF7  setting for SPI0_MISO       */
#define SYS_GPF_MFP1_PF7MFP_UART4_TXD        (0x06UL<<SYS_GPF_MFP1_PF7MFP_Pos)   /*!< GPA_MFP1 PF7  setting for UART4_TXD       */
#define SYS_GPF_MFP1_PF7MFP_BPWM4_CH5        (0x0cUL<<SYS_GPF_MFP1_PF7MFP_Pos)   /*!< GPA_MFP1 PF7  setting for BPWM4_CH5       */

/* PF.8 MFP */
#define SYS_GPF_MFP2_PF8MFP_GPIO             (0x00UL<<SYS_GPF_MFP2_PF8MFP_Pos)   /*!< GPF_MFP2 PF8  setting for GPIO            */
#define SYS_GPF_MFP2_PF8MFP_EBI_ADR17        (0x02UL<<SYS_GPF_MFP2_PF8MFP_Pos)   /*!< GPA_MFP2 PF8  setting for EBI_ADR17       */
#define SYS_GPF_MFP2_PF8MFP_I2S0_DI          (0x04UL<<SYS_GPF_MFP2_PF8MFP_Pos)   /*!< GPA_MFP2 PF8  setting for I2S0_DI         */
#define SYS_GPF_MFP2_PF8MFP_SPI0_CLK         (0x05UL<<SYS_GPF_MFP2_PF8MFP_Pos)   /*!< GPA_MFP2 PF8  setting for SPI0_CLK        */
#define SYS_GPF_MFP2_PF8MFP_CANFD1_RXD       (0x08UL<<SYS_GPF_MFP2_PF8MFP_Pos)   /*!< GPA_MFP2 PF8  setting for CANFD1_RXD      */
#define SYS_GPF_MFP2_PF8MFP_BPWM4_CH4        (0x0cUL<<SYS_GPF_MFP2_PF8MFP_Pos)   /*!< GPA_MFP2 PF8  setting for BPWM4_CH4       */

/* PF.9 MFP */
#define SYS_GPF_MFP2_PF9MFP_GPIO             (0x00UL<<SYS_GPF_MFP2_PF9MFP_Pos)   /*!< GPF_MFP2 PF9  setting for GPIO            */
#define SYS_GPF_MFP2_PF9MFP_EBI_ADR16        (0x02UL<<SYS_GPF_MFP2_PF9MFP_Pos)   /*!< GPA_MFP2 PF9  setting for EBI_ADR16       */
#define SYS_GPF_MFP2_PF9MFP_I2S0_MCLK        (0x04UL<<SYS_GPF_MFP2_PF9MFP_Pos)   /*!< GPA_MFP2 PF9  setting for I2S0_MCLK       */
#define SYS_GPF_MFP2_PF9MFP_SPI0_SS          (0x05UL<<SYS_GPF_MFP2_PF9MFP_Pos)   /*!< GPA_MFP2 PF9  setting for SPI0_SS         */
#define SYS_GPF_MFP2_PF9MFP_CANFD1_TXD       (0x08UL<<SYS_GPF_MFP2_PF9MFP_Pos)   /*!< GPA_MFP2 PF9  setting for CANFD1_TXD      */
#define SYS_GPF_MFP2_PF9MFP_CANFD1_TXH       (0x09UL<<SYS_GPF_MFP2_PF9MFP_Pos)   /*!< GPA_MFP2 PF9  setting for CANFD1_TXH      */
#define SYS_GPF_MFP2_PF9MFP_BPWM4_CH3        (0x0cUL<<SYS_GPF_MFP2_PF9MFP_Pos)   /*!< GPA_MFP2 PF9  setting for BPWM4_CH3       */

/* PF.10 MFP */
#define SYS_GPF_MFP2_PF10MFP_GPIO            (0x00UL<<SYS_GPF_MFP2_PF10MFP_Pos)  /*!< GPF_MFP2 PF10 setting for GPIO            */
#define SYS_GPF_MFP2_PF10MFP_EBI_ADR15       (0x02UL<<SYS_GPF_MFP2_PF10MFP_Pos)  /*!< GPA_MFP2 PF10 setting for EBI_ADR15       */
#define SYS_GPF_MFP2_PF10MFP_I2S0_BCLK       (0x04UL<<SYS_GPF_MFP2_PF10MFP_Pos)  /*!< GPA_MFP2 PF10 setting for I2S0_BCLK       */
#define SYS_GPF_MFP2_PF10MFP_SPI0_I2SMCLK    (0x05UL<<SYS_GPF_MFP2_PF10MFP_Pos)  /*!< GPA_MFP2 PF10 setting for SPI0_I2SMCLK    */
#define SYS_GPF_MFP2_PF10MFP_CANFD1_TXL      (0x09UL<<SYS_GPF_MFP2_PF10MFP_Pos)  /*!< GPA_MFP2 PF10 setting for CANFD1_TXL      */
#define SYS_GPF_MFP2_PF10MFP_BPWM4_CH2       (0x0cUL<<SYS_GPF_MFP2_PF10MFP_Pos)  /*!< GPA_MFP2 PF10 setting for BPWM4_CH2       */

/* PF.11 MFP */
#define SYS_GPF_MFP2_PF11MFP_GPIO            (0x00UL<<SYS_GPF_MFP2_PF11MFP_Pos)  /*!< GPF_MFP2 PF11 setting for GPIO            */
#define SYS_GPF_MFP2_PF11MFP_EBI_ADR14       (0x02UL<<SYS_GPF_MFP2_PF11MFP_Pos)  /*!< GPA_MFP2 PF11 setting for EBI_ADR14       */
#define SYS_GPF_MFP2_PF11MFP_SPI2_MOSI       (0x03UL<<SYS_GPF_MFP2_PF11MFP_Pos)  /*!< GPA_MFP2 PF11 setting for SPI2_MOSI       */
#define SYS_GPF_MFP2_PF11MFP_BPWM4_CH1       (0x0cUL<<SYS_GPF_MFP2_PF11MFP_Pos)  /*!< GPA_MFP2 PF11 setting for BPWM4_CH1       */
#define SYS_GPF_MFP2_PF11MFP_TM3             (0x0dUL<<SYS_GPF_MFP2_PF11MFP_Pos)  /*!< GPA_MFP2 PF11 setting for TM3             */

/* PF.14 MFP */
#define SYS_GPF_MFP3_PF14MFP_GPIO            (0x00UL<<SYS_GPF_MFP3_PF14MFP_Pos)  /*!< GPF_MFP3 PF14 setting for GPIO            */
#define SYS_GPF_MFP3_PF14MFP_BPWM3_CH5       (0x0cUL<<SYS_GPF_MFP3_PF14MFP_Pos)  /*!< GPA_MFP3 PF14 setting for BPWM3_CH5       */
#define SYS_GPF_MFP3_PF14MFP_PDCI_G5_RX0     (0x0fUL<<SYS_GPF_MFP3_PF14MFP_Pos)  /*!< GPA_MFP3 PF14 setting for PDCI_G5_RX0     */
#define SYS_GPF_MFP3_PF14MFP_LLSI3_OUT       (0x10UL<<SYS_GPF_MFP3_PF14MFP_Pos)  /*!< GPA_MFP3 PF14 setting for LLSI3_OUT       */

/* PF.15 MFP */
#define SYS_GPF_MFP3_PF15MFP_GPIO            (0x00UL<<SYS_GPF_MFP3_PF15MFP_Pos)  /*!< GPF_MFP3 PF15 setting for GPIO            */
#define SYS_GPF_MFP3_PF15MFP_PDCI_G2_CLK     (0x05UL<<SYS_GPF_MFP3_PF15MFP_Pos)  /*!< GPA_MFP3 PF15 setting for PDCI_G2_CLK     */
#define SYS_GPF_MFP3_PF15MFP_BPWM3_CH5       (0x0cUL<<SYS_GPF_MFP3_PF15MFP_Pos)  /*!< GPA_MFP3 PF15 setting for BPWM3_CH5       */
#define SYS_GPF_MFP3_PF15MFP_PDCI_G2_RX1     (0x10UL<<SYS_GPF_MFP3_PF15MFP_Pos)  /*!< GPA_MFP3 PF15 setting for PDCI_G2_RX1     */

/* PG.2 MFP */
#define SYS_GPG_MFP0_PG2MFP_GPIO             (0x00UL<<SYS_GPG_MFP0_PG2MFP_Pos)   /*!< GPG_MFP0 PG2  setting for GPIO            */
#define SYS_GPG_MFP0_PG2MFP_EBI_ADR11        (0x02UL<<SYS_GPG_MFP0_PG2MFP_Pos)   /*!< GPA_MFP0 PG2  setting for EBI_ADR11       */
#define SYS_GPG_MFP0_PG2MFP_SPI2_SS          (0x03UL<<SYS_GPG_MFP0_PG2MFP_Pos)   /*!< GPA_MFP0 PG2  setting for SPI2_SS         */
#define SYS_GPG_MFP0_PG2MFP_I2C0_SMBAL       (0x04UL<<SYS_GPG_MFP0_PG2MFP_Pos)   /*!< GPA_MFP0 PG2  setting for I2C0_SMBAL      */
#define SYS_GPG_MFP0_PG2MFP_I2C1_SCL         (0x05UL<<SYS_GPG_MFP0_PG2MFP_Pos)   /*!< GPA_MFP0 PG2  setting for I2C1_SCL        */
#define SYS_GPG_MFP0_PG2MFP_BPWM2_CH4        (0x0cUL<<SYS_GPG_MFP0_PG2MFP_Pos)   /*!< GPA_MFP0 PG2  setting for BPWM2_CH4       */
#define SYS_GPG_MFP0_PG2MFP_TM0              (0x0dUL<<SYS_GPG_MFP0_PG2MFP_Pos)   /*!< GPA_MFP0 PG2  setting for TM0             */

/* PG.3 MFP */
#define SYS_GPG_MFP0_PG3MFP_GPIO             (0x00UL<<SYS_GPG_MFP0_PG3MFP_Pos)   /*!< GPG_MFP0 PG3  setting for GPIO            */
#define SYS_GPG_MFP0_PG3MFP_EBI_ADR12        (0x02UL<<SYS_GPG_MFP0_PG3MFP_Pos)   /*!< GPA_MFP0 PG3  setting for EBI_ADR12       */
#define SYS_GPG_MFP0_PG3MFP_SPI2_CLK         (0x03UL<<SYS_GPG_MFP0_PG3MFP_Pos)   /*!< GPA_MFP0 PG3  setting for SPI2_CLK        */
#define SYS_GPG_MFP0_PG3MFP_I2C0_SMBSUS      (0x04UL<<SYS_GPG_MFP0_PG3MFP_Pos)   /*!< GPA_MFP0 PG3  setting for I2C0_SMBSUS     */
#define SYS_GPG_MFP0_PG3MFP_I2C1_SDA         (0x05UL<<SYS_GPG_MFP0_PG3MFP_Pos)   /*!< GPA_MFP0 PG3  setting for I2C1_SDA        */
#define SYS_GPG_MFP0_PG3MFP_BPWM2_CH5        (0x0cUL<<SYS_GPG_MFP0_PG3MFP_Pos)   /*!< GPA_MFP0 PG3  setting for BPWM2_CH5       */
#define SYS_GPG_MFP0_PG3MFP_TM1              (0x0dUL<<SYS_GPG_MFP0_PG3MFP_Pos)   /*!< GPA_MFP0 PG3  setting for TM1             */

/* PG.4 MFP */
#define SYS_GPG_MFP1_PG4MFP_GPIO             (0x00UL<<SYS_GPG_MFP1_PG4MFP_Pos)   /*!< GPG_MFP1 PG4  setting for GPIO            */
#define SYS_GPG_MFP1_PG4MFP_EBI_ADR13        (0x02UL<<SYS_GPG_MFP1_PG4MFP_Pos)   /*!< GPA_MFP1 PG4  setting for EBI_ADR13       */
#define SYS_GPG_MFP1_PG4MFP_SPI2_MISO        (0x03UL<<SYS_GPG_MFP1_PG4MFP_Pos)   /*!< GPA_MFP1 PG4  setting for SPI2_MISO       */
#define SYS_GPG_MFP1_PG4MFP_BPWM4_CH0        (0x0cUL<<SYS_GPG_MFP1_PG4MFP_Pos)   /*!< GPA_MFP1 PG4  setting for BPWM4_CH0       */
#define SYS_GPG_MFP1_PG4MFP_TM2              (0x0dUL<<SYS_GPG_MFP1_PG4MFP_Pos)   /*!< GPA_MFP1 PG4  setting for TM2             */

/* PG.9 MFP */
#define SYS_GPG_MFP2_PG9MFP_GPIO             (0x00UL<<SYS_GPG_MFP2_PG9MFP_Pos)   /*!< GPG_MFP2 PG9  setting for GPIO            */
#define SYS_GPG_MFP2_PG9MFP_EBI_AD0          (0x02UL<<SYS_GPG_MFP2_PG9MFP_Pos)   /*!< GPA_MFP2 PG9  setting for EBI_AD0         */
#define SYS_GPG_MFP2_PG9MFP_BPWM0_CH5        (0x0cUL<<SYS_GPG_MFP2_PG9MFP_Pos)   /*!< GPA_MFP2 PG9  setting for BPWM0_CH5       */
#define SYS_GPG_MFP2_PG9MFP_BPWM5_CH5        (0x0dUL<<SYS_GPG_MFP2_PG9MFP_Pos)   /*!< GPA_MFP2 PG9  setting for BPWM5_CH5       */

/* PG.10 MFP */
#define SYS_GPG_MFP2_PG10MFP_GPIO            (0x00UL<<SYS_GPG_MFP2_PG10MFP_Pos)  /*!< GPG_MFP2 PG10 setting for GPIO            */
#define SYS_GPG_MFP2_PG10MFP_EBI_AD1         (0x02UL<<SYS_GPG_MFP2_PG10MFP_Pos)  /*!< GPA_MFP2 PG10 setting for EBI_AD1         */
#define SYS_GPG_MFP2_PG10MFP_BPWM0_CH4       (0x0cUL<<SYS_GPG_MFP2_PG10MFP_Pos)  /*!< GPA_MFP2 PG10 setting for BPWM0_CH4       */
#define SYS_GPG_MFP2_PG10MFP_BPWM5_CH4       (0x0dUL<<SYS_GPG_MFP2_PG10MFP_Pos)  /*!< GPA_MFP2 PG10 setting for BPWM5_CH4       */

/* PG.11 MFP */
#define SYS_GPG_MFP2_PG11MFP_GPIO            (0x00UL<<SYS_GPG_MFP2_PG11MFP_Pos)  /*!< GPG_MFP2 PG11 setting for GPIO            */
#define SYS_GPG_MFP2_PG11MFP_EBI_AD2         (0x02UL<<SYS_GPG_MFP2_PG11MFP_Pos)  /*!< GPA_MFP2 PG11 setting for EBI_AD2         */
#define SYS_GPG_MFP2_PG11MFP_BPWM0_CH3       (0x0cUL<<SYS_GPG_MFP2_PG11MFP_Pos)  /*!< GPA_MFP2 PG11 setting for BPWM0_CH3       */
#define SYS_GPG_MFP2_PG11MFP_BPWM5_CH3       (0x0dUL<<SYS_GPG_MFP2_PG11MFP_Pos)  /*!< GPA_MFP2 PG11 setting for BPWM5_CH3       */

/* PG.12 MFP */
#define SYS_GPG_MFP3_PG12MFP_GPIO            (0x00UL<<SYS_GPG_MFP3_PG12MFP_Pos)  /*!< GPG_MFP3 PG12 setting for GPIO            */
#define SYS_GPG_MFP3_PG12MFP_EBI_AD3         (0x02UL<<SYS_GPG_MFP3_PG12MFP_Pos)  /*!< GPA_MFP3 PG12 setting for EBI_AD3         */
#define SYS_GPG_MFP3_PG12MFP_BPWM0_CH2       (0x0cUL<<SYS_GPG_MFP3_PG12MFP_Pos)  /*!< GPA_MFP3 PG12 setting for BPWM0_CH2       */
#define SYS_GPG_MFP3_PG12MFP_BPWM5_CH2       (0x0dUL<<SYS_GPG_MFP3_PG12MFP_Pos)  /*!< GPA_MFP3 PG12 setting for BPWM5_CH2       */

/* PG.13 MFP */
#define SYS_GPG_MFP3_PG13MFP_GPIO            (0x00UL<<SYS_GPG_MFP3_PG13MFP_Pos)  /*!< GPG_MFP3 PG13 setting for GPIO            */
#define SYS_GPG_MFP3_PG13MFP_EBI_AD4         (0x02UL<<SYS_GPG_MFP3_PG13MFP_Pos)  /*!< GPA_MFP3 PG13 setting for EBI_AD4         */
#define SYS_GPG_MFP3_PG13MFP_BPWM0_CH1       (0x0cUL<<SYS_GPG_MFP3_PG13MFP_Pos)  /*!< GPA_MFP3 PG13 setting for BPWM0_CH1       */
#define SYS_GPG_MFP3_PG13MFP_BPWM3_CH4       (0x0dUL<<SYS_GPG_MFP3_PG13MFP_Pos)  /*!< GPA_MFP3 PG13 setting for BPWM3_CH4       */

/* PG.14 MFP */
#define SYS_GPG_MFP3_PG14MFP_GPIO            (0x00UL<<SYS_GPG_MFP3_PG14MFP_Pos)  /*!< GPG_MFP3 PG14 setting for GPIO            */
#define SYS_GPG_MFP3_PG14MFP_EBI_AD5         (0x02UL<<SYS_GPG_MFP3_PG14MFP_Pos)  /*!< GPA_MFP3 PG14 setting for EBI_AD5         */
#define SYS_GPG_MFP3_PG14MFP_BPWM0_CH0       (0x0cUL<<SYS_GPG_MFP3_PG14MFP_Pos)  /*!< GPA_MFP3 PG14 setting for BPWM0_CH0       */
#define SYS_GPG_MFP3_PG14MFP_BPWM3_CH5       (0x0dUL<<SYS_GPG_MFP3_PG14MFP_Pos)  /*!< GPA_MFP3 PG14 setting for BPWM3_CH5       */
#define SYS_GPG_MFP3_PG14MFP_ACMP0_O         (0x0eUL<<SYS_GPG_MFP3_PG14MFP_Pos)  /*!< GPA_MFP3 PG14 setting for ACMP0_O         */
#define SYS_GPG_MFP3_PG14MFP_EADC0_ST        (0x0fUL<<SYS_GPG_MFP3_PG14MFP_Pos)  /*!< GPA_MFP3 PG14 setting for EADC0_ST        */

/* PG.15 MFP */
#define SYS_GPG_MFP3_PG15MFP_GPIO            (0x00UL<<SYS_GPG_MFP3_PG15MFP_Pos)  /*!< GPG_MFP3 PG15 setting for GPIO            */
#define SYS_GPG_MFP3_PG15MFP_ACMP1_O         (0x0eUL<<SYS_GPG_MFP3_PG15MFP_Pos)  /*!< GPA_MFP3 PG15 setting for ACMP1_O         */

/* PH.4 MFP */
#define SYS_GPH_MFP1_PH4MFP_GPIO             (0x00UL<<SYS_GPH_MFP1_PH4MFP_Pos)   /*!< GPH_MFP1 PH4  setting for GPIO            */
#define SYS_GPH_MFP1_PH4MFP_EBI_ADR3         (0x02UL<<SYS_GPH_MFP1_PH4MFP_Pos)   /*!< GPA_MFP1 PH4  setting for EBI_ADR3        */
#define SYS_GPH_MFP1_PH4MFP_SPI1_MISO        (0x03UL<<SYS_GPH_MFP1_PH4MFP_Pos)   /*!< GPA_MFP1 PH4  setting for SPI1_MISO       */
#define SYS_GPH_MFP1_PH4MFP_EPWM0_CH5        (0x0bUL<<SYS_GPH_MFP1_PH4MFP_Pos)   /*!< GPA_MFP1 PH4  setting for EPWM0_CH5       */
#define SYS_GPH_MFP1_PH4MFP_BPWM5_CH0        (0x0cUL<<SYS_GPH_MFP1_PH4MFP_Pos)   /*!< GPA_MFP1 PH4  setting for BPWM5_CH0       */

/* PH.5 MFP */
#define SYS_GPH_MFP1_PH5MFP_GPIO             (0x00UL<<SYS_GPH_MFP1_PH5MFP_Pos)   /*!< GPH_MFP1 PH5  setting for GPIO            */
#define SYS_GPH_MFP1_PH5MFP_EBI_ADR2         (0x02UL<<SYS_GPH_MFP1_PH5MFP_Pos)   /*!< GPA_MFP1 PH5  setting for EBI_ADR2        */
#define SYS_GPH_MFP1_PH5MFP_SPI1_MOSI        (0x03UL<<SYS_GPH_MFP1_PH5MFP_Pos)   /*!< GPA_MFP1 PH5  setting for SPI1_MOSI       */
#define SYS_GPH_MFP1_PH5MFP_EPWM0_CH4        (0x0bUL<<SYS_GPH_MFP1_PH5MFP_Pos)   /*!< GPA_MFP1 PH5  setting for EPWM0_CH4       */
#define SYS_GPH_MFP1_PH5MFP_BPWM5_CH1        (0x0cUL<<SYS_GPH_MFP1_PH5MFP_Pos)   /*!< GPA_MFP1 PH5  setting for BPWM5_CH1       */

/* PH.6 MFP */
#define SYS_GPH_MFP1_PH6MFP_GPIO             (0x00UL<<SYS_GPH_MFP1_PH6MFP_Pos)   /*!< GPH_MFP1 PH6  setting for GPIO            */
#define SYS_GPH_MFP1_PH6MFP_EBI_ADR1         (0x02UL<<SYS_GPH_MFP1_PH6MFP_Pos)   /*!< GPA_MFP1 PH6  setting for EBI_ADR1        */
#define SYS_GPH_MFP1_PH6MFP_SPI1_CLK         (0x03UL<<SYS_GPH_MFP1_PH6MFP_Pos)   /*!< GPA_MFP1 PH6  setting for SPI1_CLK        */
#define SYS_GPH_MFP1_PH6MFP_BPWM5_CH2        (0x0cUL<<SYS_GPH_MFP1_PH6MFP_Pos)   /*!< GPA_MFP1 PH6  setting for BPWM5_CH2       */

/* PH.7 MFP */
#define SYS_GPH_MFP1_PH7MFP_GPIO             (0x00UL<<SYS_GPH_MFP1_PH7MFP_Pos)   /*!< GPH_MFP1 PH7  setting for GPIO            */
#define SYS_GPH_MFP1_PH7MFP_EBI_ADR0         (0x02UL<<SYS_GPH_MFP1_PH7MFP_Pos)   /*!< GPA_MFP1 PH7  setting for EBI_ADR0        */
#define SYS_GPH_MFP1_PH7MFP_SPI1_SS          (0x03UL<<SYS_GPH_MFP1_PH7MFP_Pos)   /*!< GPA_MFP1 PH7  setting for SPI1_SS         */
#define SYS_GPH_MFP1_PH7MFP_BPWM5_CH3        (0x0cUL<<SYS_GPH_MFP1_PH7MFP_Pos)   /*!< GPA_MFP1 PH7  setting for BPWM5_CH3       */

/* PH.8 MFP */
#define SYS_GPH_MFP2_PH8MFP_GPIO             (0x00UL<<SYS_GPH_MFP2_PH8MFP_Pos)   /*!< GPH_MFP2 PH8  setting for GPIO            */
#define SYS_GPH_MFP2_PH8MFP_EBI_AD12         (0x02UL<<SYS_GPH_MFP2_PH8MFP_Pos)   /*!< GPA_MFP2 PH8  setting for EBI_AD12        */
#define SYS_GPH_MFP2_PH8MFP_QSPI0_CLK        (0x03UL<<SYS_GPH_MFP2_PH8MFP_Pos)   /*!< GPA_MFP2 PH8  setting for QSPI0_CLK       */
#define SYS_GPH_MFP2_PH8MFP_I2S0_DI          (0x05UL<<SYS_GPH_MFP2_PH8MFP_Pos)   /*!< GPA_MFP2 PH8  setting for I2S0_DI         */
#define SYS_GPH_MFP2_PH8MFP_SPI1_CLK         (0x06UL<<SYS_GPH_MFP2_PH8MFP_Pos)   /*!< GPA_MFP2 PH8  setting for SPI1_CLK        */
#define SYS_GPH_MFP2_PH8MFP_UART3_nRTS       (0x07UL<<SYS_GPH_MFP2_PH8MFP_Pos)   /*!< GPA_MFP2 PH8  setting for UART3_nRTS      */
#define SYS_GPH_MFP2_PH8MFP_I2C1_SMBAL       (0x08UL<<SYS_GPH_MFP2_PH8MFP_Pos)   /*!< GPA_MFP2 PH8  setting for I2C1_SMBAL      */
#define SYS_GPH_MFP2_PH8MFP_I2C2_SCL         (0x09UL<<SYS_GPH_MFP2_PH8MFP_Pos)   /*!< GPA_MFP2 PH8  setting for I2C2_SCL        */
#define SYS_GPH_MFP2_PH8MFP_UART1_TXD        (0x0aUL<<SYS_GPH_MFP2_PH8MFP_Pos)   /*!< GPA_MFP2 PH8  setting for UART1_TXD       */
#define SYS_GPH_MFP2_PH8MFP_BPWM3_CH2        (0x0dUL<<SYS_GPH_MFP2_PH8MFP_Pos)   /*!< GPA_MFP2 PH8  setting for BPWM3_CH2       */
#define SYS_GPH_MFP2_PH8MFP_I3C0_SCL         (0x0fUL<<SYS_GPH_MFP2_PH8MFP_Pos)   /*!< GPA_MFP2 PH8  setting for I3C0_SCL        */

/* PH.9 MFP */
#define SYS_GPH_MFP2_PH9MFP_GPIO             (0x00UL<<SYS_GPH_MFP2_PH9MFP_Pos)   /*!< GPH_MFP2 PH9  setting for GPIO            */
#define SYS_GPH_MFP2_PH9MFP_EBI_AD13         (0x02UL<<SYS_GPH_MFP2_PH9MFP_Pos)   /*!< GPA_MFP2 PH9  setting for EBI_AD13        */
#define SYS_GPH_MFP2_PH9MFP_QSPI0_SS         (0x03UL<<SYS_GPH_MFP2_PH9MFP_Pos)   /*!< GPA_MFP2 PH9  setting for QSPI0_SS        */
#define SYS_GPH_MFP2_PH9MFP_I2S0_DO          (0x05UL<<SYS_GPH_MFP2_PH9MFP_Pos)   /*!< GPA_MFP2 PH9  setting for I2S0_DO         */
#define SYS_GPH_MFP2_PH9MFP_SPI1_SS          (0x06UL<<SYS_GPH_MFP2_PH9MFP_Pos)   /*!< GPA_MFP2 PH9  setting for SPI1_SS         */
#define SYS_GPH_MFP2_PH9MFP_UART3_nCTS       (0x07UL<<SYS_GPH_MFP2_PH9MFP_Pos)   /*!< GPA_MFP2 PH9  setting for UART3_nCTS      */
#define SYS_GPH_MFP2_PH9MFP_I2C1_SMBSUS      (0x08UL<<SYS_GPH_MFP2_PH9MFP_Pos)   /*!< GPA_MFP2 PH9  setting for I2C1_SMBSUS     */
#define SYS_GPH_MFP2_PH9MFP_I2C2_SDA         (0x09UL<<SYS_GPH_MFP2_PH9MFP_Pos)   /*!< GPA_MFP2 PH9  setting for I2C2_SDA        */
#define SYS_GPH_MFP2_PH9MFP_UART1_RXD        (0x0aUL<<SYS_GPH_MFP2_PH9MFP_Pos)   /*!< GPA_MFP2 PH9  setting for UART1_RXD       */
#define SYS_GPH_MFP2_PH9MFP_BPWM3_CH3        (0x0dUL<<SYS_GPH_MFP2_PH9MFP_Pos)   /*!< GPA_MFP2 PH9  setting for BPWM3_CH3       */
#define SYS_GPH_MFP2_PH9MFP_I3C0_SDA         (0x0fUL<<SYS_GPH_MFP2_PH9MFP_Pos)   /*!< GPA_MFP2 PH9  setting for I3C0_SDA        */

/* PH.10 MFP */
#define SYS_GPH_MFP2_PH10MFP_GPIO            (0x00UL<<SYS_GPH_MFP2_PH10MFP_Pos)  /*!< GPH_MFP2 PH10 setting for GPIO            */
#define SYS_GPH_MFP2_PH10MFP_EBI_AD14        (0x02UL<<SYS_GPH_MFP2_PH10MFP_Pos)  /*!< GPA_MFP2 PH10 setting for EBI_AD14        */
#define SYS_GPH_MFP2_PH10MFP_QSPI0_MISO1     (0x03UL<<SYS_GPH_MFP2_PH10MFP_Pos)  /*!< GPA_MFP2 PH10 setting for QSPI0_MISO1     */
#define SYS_GPH_MFP2_PH10MFP_I2S0_LRCK       (0x05UL<<SYS_GPH_MFP2_PH10MFP_Pos)  /*!< GPA_MFP2 PH10 setting for I2S0_LRCK       */
#define SYS_GPH_MFP2_PH10MFP_SPI1_I2SMCLK    (0x06UL<<SYS_GPH_MFP2_PH10MFP_Pos)  /*!< GPA_MFP2 PH10 setting for SPI1_I2SMCLK    */
#define SYS_GPH_MFP2_PH10MFP_UART4_TXD       (0x07UL<<SYS_GPH_MFP2_PH10MFP_Pos)  /*!< GPA_MFP2 PH10 setting for UART4_TXD       */
#define SYS_GPH_MFP2_PH10MFP_UART0_TXD       (0x08UL<<SYS_GPH_MFP2_PH10MFP_Pos)  /*!< GPA_MFP2 PH10 setting for UART0_TXD       */
#define SYS_GPH_MFP2_PH10MFP_BPWM3_CH4       (0x0dUL<<SYS_GPH_MFP2_PH10MFP_Pos)  /*!< GPA_MFP2 PH10 setting for BPWM3_CH4       */
#define SYS_GPH_MFP2_PH10MFP_I3C0_PUPEN      (0x0fUL<<SYS_GPH_MFP2_PH10MFP_Pos)  /*!< GPA_MFP2 PH10 setting for I3C0_PUPEN      */

/* PH.11 MFP */
#define SYS_GPH_MFP2_PH11MFP_GPIO            (0x00UL<<SYS_GPH_MFP2_PH11MFP_Pos)  /*!< GPH_MFP2 PH11 setting for GPIO            */
#define SYS_GPH_MFP2_PH11MFP_EBI_AD15        (0x02UL<<SYS_GPH_MFP2_PH11MFP_Pos)  /*!< GPA_MFP2 PH11 setting for EBI_AD15        */
#define SYS_GPH_MFP2_PH11MFP_QSPI0_MOSI1     (0x03UL<<SYS_GPH_MFP2_PH11MFP_Pos)  /*!< GPA_MFP2 PH11 setting for QSPI0_MOSI1     */
#define SYS_GPH_MFP2_PH11MFP_UART4_RXD       (0x07UL<<SYS_GPH_MFP2_PH11MFP_Pos)  /*!< GPA_MFP2 PH11 setting for UART4_RXD       */
#define SYS_GPH_MFP2_PH11MFP_UART0_RXD       (0x08UL<<SYS_GPH_MFP2_PH11MFP_Pos)  /*!< GPA_MFP2 PH11 setting for UART0_RXD       */
#define SYS_GPH_MFP2_PH11MFP_EPWM0_CH5       (0x0bUL<<SYS_GPH_MFP2_PH11MFP_Pos)  /*!< GPA_MFP2 PH11 setting for EPWM0_CH5       */
#define SYS_GPH_MFP2_PH11MFP_BPWM3_CH5       (0x0dUL<<SYS_GPH_MFP2_PH11MFP_Pos)  /*!< GPA_MFP2 PH11 setting for BPWM3_CH5       */


/* ACMP0 MFP Pins */
#define ACMP0_O_PB7               SYS_GPB_MFP1_PB7MFP_ACMP0_O          /*!< GPB_MFP1  PB7  setting for ACMP0_O         */
#define ACMP0_O_PC1               SYS_GPC_MFP0_PC1MFP_ACMP0_O          /*!< GPC_MFP0  PC1  setting for ACMP0_O         */
#define ACMP0_O_PC12              SYS_GPC_MFP3_PC12MFP_ACMP0_O         /*!< GPC_MFP3  PC12 setting for ACMP0_O         */
#define ACMP0_O_PF0               SYS_GPF_MFP0_PF0MFP_ACMP0_O          /*!< GPF_MFP0  PF0  setting for ACMP0_O         */
#define ACMP0_O_PG14              SYS_GPG_MFP3_PG14MFP_ACMP0_O         /*!< GPG_MFP3  PG14 setting for ACMP0_O         */
#define ACMP0_WLAT_PA7            SYS_GPA_MFP1_PA7MFP_ACMP0_WLAT       /*!< GPA_MFP1  PA7  setting for ACMP0_WLAT      */
#define ACMP0_N_PB3               SYS_GPB_MFP0_PB3MFP_ACMP0_N          /*!< GPB_MFP0  PB3  setting for ACMP0_N         */
#define ACMP0_P1_PB2              SYS_GPB_MFP0_PB2MFP_ACMP0_P1         /*!< GPB_MFP0  PB2  setting for ACMP0_P1        */
#define ACMP0_P0_PA11             SYS_GPA_MFP2_PA11MFP_ACMP0_P0        /*!< GPA_MFP2  PA11 setting for ACMP0_P0        */
#define ACMP0_P3_PB13             SYS_GPB_MFP3_PB13MFP_ACMP0_P3        /*!< GPB_MFP3  PB13 setting for ACMP0_P3        */
#define ACMP0_P2_PB12             SYS_GPB_MFP3_PB12MFP_ACMP0_P2        /*!< GPB_MFP3  PB12 setting for ACMP0_P2        */

/* ACMP1 MFP Pins */
#define ACMP1_O_PB6               SYS_GPB_MFP1_PB6MFP_ACMP1_O          /*!< GPB_MFP1  PB6  setting for ACMP1_O         */
#define ACMP1_O_PC0               SYS_GPC_MFP0_PC0MFP_ACMP1_O          /*!< GPC_MFP0  PC0  setting for ACMP1_O         */
#define ACMP1_O_PC11              SYS_GPC_MFP2_PC11MFP_ACMP1_O         /*!< GPC_MFP2  PC11 setting for ACMP1_O         */
#define ACMP1_O_PF1               SYS_GPF_MFP0_PF1MFP_ACMP1_O          /*!< GPF_MFP0  PF1  setting for ACMP1_O         */
#define ACMP1_O_PG15              SYS_GPG_MFP3_PG15MFP_ACMP1_O         /*!< GPG_MFP3  PG15 setting for ACMP1_O         */
#define ACMP1_WLAT_PA6            SYS_GPA_MFP1_PA6MFP_ACMP1_WLAT       /*!< GPA_MFP1  PA6  setting for ACMP1_WLAT      */
#define ACMP1_N_PB5               SYS_GPB_MFP1_PB5MFP_ACMP1_N          /*!< GPB_MFP1  PB5  setting for ACMP1_N         */
#define ACMP1_P1_PB4              SYS_GPB_MFP1_PB4MFP_ACMP1_P1         /*!< GPB_MFP1  PB4  setting for ACMP1_P1        */
#define ACMP1_P0_PA10             SYS_GPA_MFP2_PA10MFP_ACMP1_P0        /*!< GPA_MFP2  PA10 setting for ACMP1_P0        */
#define ACMP1_P3_PB13             SYS_GPB_MFP3_PB13MFP_ACMP1_P3        /*!< GPB_MFP3  PB13 setting for ACMP1_P3        */
#define ACMP1_P2_PB12             SYS_GPB_MFP3_PB12MFP_ACMP1_P2        /*!< GPB_MFP3  PB12 setting for ACMP1_P2        */

/* BPWM0 MFP Pins */
#define BPWM0_CH0_PA0             SYS_GPA_MFP0_PA0MFP_BPWM0_CH0        /*!< GPA_MFP0  PA0  setting for BPWM0_CH0       */
#define BPWM0_CH0_PA11            SYS_GPA_MFP2_PA11MFP_BPWM0_CH0       /*!< GPA_MFP2  PA11 setting for BPWM0_CH0       */
#define BPWM0_CH0_PD13            SYS_GPD_MFP3_PD13MFP_BPWM0_CH0       /*!< GPD_MFP3  PD13 setting for BPWM0_CH0       */
#define BPWM0_CH0_PE2             SYS_GPE_MFP0_PE2MFP_BPWM0_CH0        /*!< GPE_MFP0  PE2  setting for BPWM0_CH0       */
#define BPWM0_CH0_PG14            SYS_GPG_MFP3_PG14MFP_BPWM0_CH0       /*!< GPG_MFP3  PG14 setting for BPWM0_CH0       */
#define BPWM0_CH1_PA1             SYS_GPA_MFP0_PA1MFP_BPWM0_CH1        /*!< GPA_MFP0  PA1  setting for BPWM0_CH1       */
#define BPWM0_CH1_PA10            SYS_GPA_MFP2_PA10MFP_BPWM0_CH1       /*!< GPA_MFP2  PA10 setting for BPWM0_CH1       */
#define BPWM0_CH1_PE3             SYS_GPE_MFP0_PE3MFP_BPWM0_CH1        /*!< GPE_MFP0  PE3  setting for BPWM0_CH1       */
#define BPWM0_CH1_PG13            SYS_GPG_MFP3_PG13MFP_BPWM0_CH1       /*!< GPG_MFP3  PG13 setting for BPWM0_CH1       */
#define BPWM0_CH2_PA2             SYS_GPA_MFP0_PA2MFP_BPWM0_CH2        /*!< GPA_MFP0  PA2  setting for BPWM0_CH2       */
#define BPWM0_CH2_PA9             SYS_GPA_MFP2_PA9MFP_BPWM0_CH2        /*!< GPA_MFP2  PA9  setting for BPWM0_CH2       */
#define BPWM0_CH2_PE4             SYS_GPE_MFP1_PE4MFP_BPWM0_CH2        /*!< GPE_MFP1  PE4  setting for BPWM0_CH2       */
#define BPWM0_CH2_PG12            SYS_GPG_MFP3_PG12MFP_BPWM0_CH2       /*!< GPG_MFP3  PG12 setting for BPWM0_CH2       */
#define BPWM0_CH3_PA3             SYS_GPA_MFP0_PA3MFP_BPWM0_CH3        /*!< GPA_MFP0  PA3  setting for BPWM0_CH3       */
#define BPWM0_CH3_PA8             SYS_GPA_MFP2_PA8MFP_BPWM0_CH3        /*!< GPA_MFP2  PA8  setting for BPWM0_CH3       */
#define BPWM0_CH3_PE5             SYS_GPE_MFP1_PE5MFP_BPWM0_CH3        /*!< GPE_MFP1  PE5  setting for BPWM0_CH3       */
#define BPWM0_CH3_PG11            SYS_GPG_MFP2_PG11MFP_BPWM0_CH3       /*!< GPG_MFP2  PG11 setting for BPWM0_CH3       */
#define BPWM0_CH4_PA4             SYS_GPA_MFP1_PA4MFP_BPWM0_CH4        /*!< GPA_MFP1  PA4  setting for BPWM0_CH4       */
#define BPWM0_CH4_PC13            SYS_GPC_MFP3_PC13MFP_BPWM0_CH4       /*!< GPC_MFP3  PC13 setting for BPWM0_CH4       */
#define BPWM0_CH4_PE6             SYS_GPE_MFP1_PE6MFP_BPWM0_CH4        /*!< GPE_MFP1  PE6  setting for BPWM0_CH4       */
#define BPWM0_CH4_PF5             SYS_GPF_MFP1_PF5MFP_BPWM0_CH4        /*!< GPF_MFP1  PF5  setting for BPWM0_CH4       */
#define BPWM0_CH4_PG10            SYS_GPG_MFP2_PG10MFP_BPWM0_CH4       /*!< GPG_MFP2  PG10 setting for BPWM0_CH4       */
#define BPWM0_CH5_PA5             SYS_GPA_MFP1_PA5MFP_BPWM0_CH5        /*!< GPA_MFP1  PA5  setting for BPWM0_CH5       */
#define BPWM0_CH5_PD12            SYS_GPD_MFP3_PD12MFP_BPWM0_CH5       /*!< GPD_MFP3  PD12 setting for BPWM0_CH5       */
#define BPWM0_CH5_PE7             SYS_GPE_MFP1_PE7MFP_BPWM0_CH5        /*!< GPE_MFP1  PE7  setting for BPWM0_CH5       */
#define BPWM0_CH5_PF4             SYS_GPF_MFP1_PF4MFP_BPWM0_CH5        /*!< GPF_MFP1  PF4  setting for BPWM0_CH5       */
#define BPWM0_CH5_PG9             SYS_GPG_MFP2_PG9MFP_BPWM0_CH5        /*!< GPG_MFP2  PG9  setting for BPWM0_CH5       */

/* BPWM1 MFP Pins */
#define BPWM1_CH0_PB11            SYS_GPB_MFP2_PB11MFP_BPWM1_CH0       /*!< GPB_MFP2  PB11 setting for BPWM1_CH0       */
#define BPWM1_CH0_PC7             SYS_GPC_MFP1_PC7MFP_BPWM1_CH0        /*!< GPC_MFP1  PC7  setting for BPWM1_CH0       */
#define BPWM1_CH0_PF3             SYS_GPF_MFP0_PF3MFP_BPWM1_CH0        /*!< GPF_MFP0  PF3  setting for BPWM1_CH0       */
#define BPWM1_CH1_PB10            SYS_GPB_MFP2_PB10MFP_BPWM1_CH1       /*!< GPB_MFP2  PB10 setting for BPWM1_CH1       */
#define BPWM1_CH1_PC6             SYS_GPC_MFP1_PC6MFP_BPWM1_CH1        /*!< GPC_MFP1  PC6  setting for BPWM1_CH1       */
#define BPWM1_CH1_PF2             SYS_GPF_MFP0_PF2MFP_BPWM1_CH1        /*!< GPF_MFP0  PF2  setting for BPWM1_CH1       */
#define BPWM1_CH2_PA7             SYS_GPA_MFP1_PA7MFP_BPWM1_CH2        /*!< GPA_MFP1  PA7  setting for BPWM1_CH2       */
#define BPWM1_CH2_PA12            SYS_GPA_MFP3_PA12MFP_BPWM1_CH2       /*!< GPA_MFP3  PA12 setting for BPWM1_CH2       */
#define BPWM1_CH2_PB9             SYS_GPB_MFP2_PB9MFP_BPWM1_CH2        /*!< GPB_MFP2  PB9  setting for BPWM1_CH2       */
#define BPWM1_CH3_PA6             SYS_GPA_MFP1_PA6MFP_BPWM1_CH3        /*!< GPA_MFP1  PA6  setting for BPWM1_CH3       */
#define BPWM1_CH3_PA13            SYS_GPA_MFP3_PA13MFP_BPWM1_CH3       /*!< GPA_MFP3  PA13 setting for BPWM1_CH3       */
#define BPWM1_CH3_PB8             SYS_GPB_MFP2_PB8MFP_BPWM1_CH3        /*!< GPB_MFP2  PB8  setting for BPWM1_CH3       */
#define BPWM1_CH4_PA14            SYS_GPA_MFP3_PA14MFP_BPWM1_CH4       /*!< GPA_MFP3  PA14 setting for BPWM1_CH4       */
#define BPWM1_CH4_PB7             SYS_GPB_MFP1_PB7MFP_BPWM1_CH4        /*!< GPB_MFP1  PB7  setting for BPWM1_CH4       */
#define BPWM1_CH4_PC8             SYS_GPC_MFP2_PC8MFP_BPWM1_CH4        /*!< GPC_MFP2  PC8  setting for BPWM1_CH4       */
#define BPWM1_CH5_PA15            SYS_GPA_MFP3_PA15MFP_BPWM1_CH5       /*!< GPA_MFP3  PA15 setting for BPWM1_CH5       */
#define BPWM1_CH5_PB6             SYS_GPB_MFP1_PB6MFP_BPWM1_CH5        /*!< GPB_MFP1  PB6  setting for BPWM1_CH5       */
#define BPWM1_CH5_PE13            SYS_GPE_MFP3_PE13MFP_BPWM1_CH5       /*!< GPE_MFP3  PE13 setting for BPWM1_CH5       */

/* BPWM2 MFP Pins */
#define BPWM2_CH0_PC13            SYS_GPC_MFP3_PC13MFP_BPWM2_CH0       /*!< GPC_MFP3  PC13 setting for BPWM2_CH0       */
#define BPWM2_CH0_PC14            SYS_GPC_MFP3_PC14MFP_BPWM2_CH0       /*!< GPC_MFP3  PC14 setting for BPWM2_CH0       */
#define BPWM2_CH1_PB15            SYS_GPB_MFP3_PB15MFP_BPWM2_CH1       /*!< GPB_MFP3  PB15 setting for BPWM2_CH1       */
#define BPWM2_CH1_PD12            SYS_GPD_MFP3_PD12MFP_BPWM2_CH1       /*!< GPD_MFP3  PD12 setting for BPWM2_CH1       */
#define BPWM2_CH2_PB14            SYS_GPB_MFP3_PB14MFP_BPWM2_CH2       /*!< GPB_MFP3  PB14 setting for BPWM2_CH2       */
#define BPWM2_CH2_PD11            SYS_GPD_MFP2_PD11MFP_BPWM2_CH2       /*!< GPD_MFP2  PD11 setting for BPWM2_CH2       */
#define BPWM2_CH3_PA12            SYS_GPA_MFP3_PA12MFP_BPWM2_CH3       /*!< GPA_MFP3  PA12 setting for BPWM2_CH3       */
#define BPWM2_CH3_PB13            SYS_GPB_MFP3_PB13MFP_BPWM2_CH3       /*!< GPB_MFP3  PB13 setting for BPWM2_CH3       */
#define BPWM2_CH3_PD10            SYS_GPD_MFP2_PD10MFP_BPWM2_CH3       /*!< GPD_MFP2  PD10 setting for BPWM2_CH3       */
#define BPWM2_CH4_PA13            SYS_GPA_MFP3_PA13MFP_BPWM2_CH4       /*!< GPA_MFP3  PA13 setting for BPWM2_CH4       */
#define BPWM2_CH4_PB12            SYS_GPB_MFP3_PB12MFP_BPWM2_CH4       /*!< GPB_MFP3  PB12 setting for BPWM2_CH4       */
#define BPWM2_CH4_PG2             SYS_GPG_MFP0_PG2MFP_BPWM2_CH4        /*!< GPG_MFP0  PG2  setting for BPWM2_CH4       */
#define BPWM2_CH5_PA14            SYS_GPA_MFP3_PA14MFP_BPWM2_CH5       /*!< GPA_MFP3  PA14 setting for BPWM2_CH5       */
#define BPWM2_CH5_PG3             SYS_GPG_MFP0_PG3MFP_BPWM2_CH5        /*!< GPG_MFP0  PG3  setting for BPWM2_CH5       */

/* BPWM3 MFP Pins */
#define BPWM3_CH0_PA11            SYS_GPA_MFP2_PA11MFP_BPWM3_CH0       /*!< GPA_MFP2  PA11 setting for BPWM3_CH0       */
#define BPWM3_CH0_PE1             SYS_GPE_MFP0_PE1MFP_BPWM3_CH0        /*!< GPE_MFP0  PE1  setting for BPWM3_CH0       */
#define BPWM3_CH0_PE14            SYS_GPE_MFP3_PE14MFP_BPWM3_CH0       /*!< GPE_MFP3  PE14 setting for BPWM3_CH0       */
#define BPWM3_CH1_PA10            SYS_GPA_MFP2_PA10MFP_BPWM3_CH1       /*!< GPA_MFP2  PA10 setting for BPWM3_CH1       */
#define BPWM3_CH1_PE0             SYS_GPE_MFP0_PE0MFP_BPWM3_CH1        /*!< GPE_MFP0  PE0  setting for BPWM3_CH1       */
#define BPWM3_CH1_PE15            SYS_GPE_MFP3_PE15MFP_BPWM3_CH1       /*!< GPE_MFP3  PE15 setting for BPWM3_CH1       */
#define BPWM3_CH2_PA9             SYS_GPA_MFP2_PA9MFP_BPWM3_CH2        /*!< GPA_MFP2  PA9  setting for BPWM3_CH2       */
#define BPWM3_CH2_PD9             SYS_GPD_MFP2_PD9MFP_BPWM3_CH2        /*!< GPD_MFP2  PD9  setting for BPWM3_CH2       */
#define BPWM3_CH2_PH8             SYS_GPH_MFP2_PH8MFP_BPWM3_CH2        /*!< GPH_MFP2  PH8  setting for BPWM3_CH2       */
#define BPWM3_CH3_PA8             SYS_GPA_MFP2_PA8MFP_BPWM3_CH3        /*!< GPA_MFP2  PA8  setting for BPWM3_CH3       */
#define BPWM3_CH3_PD8             SYS_GPD_MFP2_PD8MFP_BPWM3_CH3        /*!< GPD_MFP2  PD8  setting for BPWM3_CH3       */
#define BPWM3_CH3_PH9             SYS_GPH_MFP2_PH9MFP_BPWM3_CH3        /*!< GPH_MFP2  PH9  setting for BPWM3_CH3       */
#define BPWM3_CH4_PF6             SYS_GPF_MFP1_PF6MFP_BPWM3_CH4        /*!< GPF_MFP1  PF6  setting for BPWM3_CH4       */
#define BPWM3_CH4_PG13            SYS_GPG_MFP3_PG13MFP_BPWM3_CH4       /*!< GPG_MFP3  PG13 setting for BPWM3_CH4       */
#define BPWM3_CH4_PH10            SYS_GPH_MFP2_PH10MFP_BPWM3_CH4       /*!< GPH_MFP2  PH10 setting for BPWM3_CH4       */
#define BPWM3_CH5_PF14            SYS_GPF_MFP3_PF14MFP_BPWM3_CH5       /*!< GPF_MFP3  PF14 setting for BPWM3_CH5       */
#define BPWM3_CH5_PF15            SYS_GPF_MFP3_PF15MFP_BPWM3_CH5       /*!< GPF_MFP3  PF15 setting for BPWM3_CH5       */
#define BPWM3_CH5_PG14            SYS_GPG_MFP3_PG14MFP_BPWM3_CH5       /*!< GPG_MFP3  PG14 setting for BPWM3_CH5       */
#define BPWM3_CH5_PH11            SYS_GPH_MFP2_PH11MFP_BPWM3_CH5       /*!< GPH_MFP2  PH11 setting for BPWM3_CH5       */

/* BPWM4 MFP Pins */
#define BPWM4_CH0_PC5             SYS_GPC_MFP1_PC5MFP_BPWM4_CH0        /*!< GPC_MFP1  PC5  setting for BPWM4_CH0       */
#define BPWM4_CH0_PD7             SYS_GPD_MFP1_PD7MFP_BPWM4_CH0        /*!< GPD_MFP1  PD7  setting for BPWM4_CH0       */
#define BPWM4_CH0_PE8             SYS_GPE_MFP2_PE8MFP_BPWM4_CH0        /*!< GPE_MFP2  PE8  setting for BPWM4_CH0       */
#define BPWM4_CH0_PG4             SYS_GPG_MFP1_PG4MFP_BPWM4_CH0        /*!< GPG_MFP1  PG4  setting for BPWM4_CH0       */
#define BPWM4_CH1_PC4             SYS_GPC_MFP1_PC4MFP_BPWM4_CH1        /*!< GPC_MFP1  PC4  setting for BPWM4_CH1       */
#define BPWM4_CH1_PD6             SYS_GPD_MFP1_PD6MFP_BPWM4_CH1        /*!< GPD_MFP1  PD6  setting for BPWM4_CH1       */
#define BPWM4_CH1_PE9             SYS_GPE_MFP2_PE9MFP_BPWM4_CH1        /*!< GPE_MFP2  PE9  setting for BPWM4_CH1       */
#define BPWM4_CH1_PF11            SYS_GPF_MFP2_PF11MFP_BPWM4_CH1       /*!< GPF_MFP2  PF11 setting for BPWM4_CH1       */
#define BPWM4_CH2_PC3             SYS_GPC_MFP0_PC3MFP_BPWM4_CH2        /*!< GPC_MFP0  PC3  setting for BPWM4_CH2       */
#define BPWM4_CH2_PD5             SYS_GPD_MFP1_PD5MFP_BPWM4_CH2        /*!< GPD_MFP1  PD5  setting for BPWM4_CH2       */
#define BPWM4_CH2_PE10            SYS_GPE_MFP2_PE10MFP_BPWM4_CH2       /*!< GPE_MFP2  PE10 setting for BPWM4_CH2       */
#define BPWM4_CH2_PF10            SYS_GPF_MFP2_PF10MFP_BPWM4_CH2       /*!< GPF_MFP2  PF10 setting for BPWM4_CH2       */
#define BPWM4_CH3_PC2             SYS_GPC_MFP0_PC2MFP_BPWM4_CH3        /*!< GPC_MFP0  PC2  setting for BPWM4_CH3       */
#define BPWM4_CH3_PD4             SYS_GPD_MFP1_PD4MFP_BPWM4_CH3        /*!< GPD_MFP1  PD4  setting for BPWM4_CH3       */
#define BPWM4_CH3_PE11            SYS_GPE_MFP2_PE11MFP_BPWM4_CH3       /*!< GPE_MFP2  PE11 setting for BPWM4_CH3       */
#define BPWM4_CH3_PF9             SYS_GPF_MFP2_PF9MFP_BPWM4_CH3        /*!< GPF_MFP2  PF9  setting for BPWM4_CH3       */
#define BPWM4_CH4_PC1             SYS_GPC_MFP0_PC1MFP_BPWM4_CH4        /*!< GPC_MFP0  PC1  setting for BPWM4_CH4       */
#define BPWM4_CH4_PD3             SYS_GPD_MFP0_PD3MFP_BPWM4_CH4        /*!< GPD_MFP0  PD3  setting for BPWM4_CH4       */
#define BPWM4_CH4_PE12            SYS_GPE_MFP3_PE12MFP_BPWM4_CH4       /*!< GPE_MFP3  PE12 setting for BPWM4_CH4       */
#define BPWM4_CH4_PF8             SYS_GPF_MFP2_PF8MFP_BPWM4_CH4        /*!< GPF_MFP2  PF8  setting for BPWM4_CH4       */
#define BPWM4_CH5_PC0             SYS_GPC_MFP0_PC0MFP_BPWM4_CH5        /*!< GPC_MFP0  PC0  setting for BPWM4_CH5       */
#define BPWM4_CH5_PD2             SYS_GPD_MFP0_PD2MFP_BPWM4_CH5        /*!< GPD_MFP0  PD2  setting for BPWM4_CH5       */
#define BPWM4_CH5_PE13            SYS_GPE_MFP3_PE13MFP_BPWM4_CH5       /*!< GPE_MFP3  PE13 setting for BPWM4_CH5       */
#define BPWM4_CH5_PF7             SYS_GPF_MFP1_PF7MFP_BPWM4_CH5        /*!< GPF_MFP1  PF7  setting for BPWM4_CH5       */

/* BPWM5 MFP Pins */
#define BPWM5_CH0_PE14            SYS_GPE_MFP3_PE14MFP_BPWM5_CH0       /*!< GPE_MFP3  PE14 setting for BPWM5_CH0       */
#define BPWM5_CH0_PF0             SYS_GPF_MFP0_PF0MFP_BPWM5_CH0        /*!< GPF_MFP0  PF0  setting for BPWM5_CH0       */
#define BPWM5_CH0_PH4             SYS_GPH_MFP1_PH4MFP_BPWM5_CH0        /*!< GPH_MFP1  PH4  setting for BPWM5_CH0       */
#define BPWM5_CH1_PE15            SYS_GPE_MFP3_PE15MFP_BPWM5_CH1       /*!< GPE_MFP3  PE15 setting for BPWM5_CH1       */
#define BPWM5_CH1_PF1             SYS_GPF_MFP0_PF1MFP_BPWM5_CH1        /*!< GPF_MFP0  PF1  setting for BPWM5_CH1       */
#define BPWM5_CH1_PH5             SYS_GPH_MFP1_PH5MFP_BPWM5_CH1        /*!< GPH_MFP1  PH5  setting for BPWM5_CH1       */
#define BPWM5_CH2_PG12            SYS_GPG_MFP3_PG12MFP_BPWM5_CH2       /*!< GPG_MFP3  PG12 setting for BPWM5_CH2       */
#define BPWM5_CH2_PH6             SYS_GPH_MFP1_PH6MFP_BPWM5_CH2        /*!< GPH_MFP1  PH6  setting for BPWM5_CH2       */
#define BPWM5_CH3_PG11            SYS_GPG_MFP2_PG11MFP_BPWM5_CH3       /*!< GPG_MFP2  PG11 setting for BPWM5_CH3       */
#define BPWM5_CH3_PH7             SYS_GPH_MFP1_PH7MFP_BPWM5_CH3        /*!< GPH_MFP1  PH7  setting for BPWM5_CH3       */
#define BPWM5_CH4_PF3             SYS_GPF_MFP0_PF3MFP_BPWM5_CH4        /*!< GPF_MFP0  PF3  setting for BPWM5_CH4       */
#define BPWM5_CH4_PG10            SYS_GPG_MFP2_PG10MFP_BPWM5_CH4       /*!< GPG_MFP2  PG10 setting for BPWM5_CH4       */
#define BPWM5_CH5_PF2             SYS_GPF_MFP0_PF2MFP_BPWM5_CH5        /*!< GPF_MFP0  PF2  setting for BPWM5_CH5       */
#define BPWM5_CH5_PG9             SYS_GPG_MFP2_PG9MFP_BPWM5_CH5        /*!< GPG_MFP2  PG9  setting for BPWM5_CH5       */

/* CANFD0 MFP Pins */
#define CANFD0_RXD_PA4            SYS_GPA_MFP1_PA4MFP_CANFD0_RXD       /*!< GPA_MFP1  PA4  setting for CANFD0_RXD      */
#define CANFD0_RXD_PA13           SYS_GPA_MFP3_PA13MFP_CANFD0_RXD      /*!< GPA_MFP3  PA13 setting for CANFD0_RXD      */
#define CANFD0_RXD_PB10           SYS_GPB_MFP2_PB10MFP_CANFD0_RXD      /*!< GPB_MFP2  PB10 setting for CANFD0_RXD      */
#define CANFD0_RXD_PC4            SYS_GPC_MFP1_PC4MFP_CANFD0_RXD       /*!< GPC_MFP1  PC4  setting for CANFD0_RXD      */
#define CANFD0_RXD_PD10           SYS_GPD_MFP2_PD10MFP_CANFD0_RXD      /*!< GPD_MFP2  PD10 setting for CANFD0_RXD      */
#define CANFD0_RXD_PE15           SYS_GPE_MFP3_PE15MFP_CANFD0_RXD      /*!< GPE_MFP3  PE15 setting for CANFD0_RXD      */
#define CANFD0_TXD_PA5            SYS_GPA_MFP1_PA5MFP_CANFD0_TXD       /*!< GPA_MFP1  PA5  setting for CANFD0_TXD      */
#define CANFD0_TXD_PA12           SYS_GPA_MFP3_PA12MFP_CANFD0_TXD      /*!< GPA_MFP3  PA12 setting for CANFD0_TXD      */
#define CANFD0_TXD_PB11           SYS_GPB_MFP2_PB11MFP_CANFD0_TXD      /*!< GPB_MFP2  PB11 setting for CANFD0_TXD      */
#define CANFD0_TXD_PC5            SYS_GPC_MFP1_PC5MFP_CANFD0_TXD       /*!< GPC_MFP1  PC5  setting for CANFD0_TXD      */
#define CANFD0_TXD_PD11           SYS_GPD_MFP2_PD11MFP_CANFD0_TXD      /*!< GPD_MFP2  PD11 setting for CANFD0_TXD      */
#define CANFD0_TXD_PE14           SYS_GPE_MFP3_PE14MFP_CANFD0_TXD      /*!< GPE_MFP3  PE14 setting for CANFD0_TXD      */
#define CANFD0_TXH_PA5            SYS_GPA_MFP1_PA5MFP_CANFD0_TXH       /*!< GPA_MFP1  PA5  setting for CANFD0_TXH      */
#define CANFD0_TXH_PA12           SYS_GPA_MFP3_PA12MFP_CANFD0_TXH      /*!< GPA_MFP3  PA12 setting for CANFD0_TXH      */
#define CANFD0_TXH_PB11           SYS_GPB_MFP2_PB11MFP_CANFD0_TXH      /*!< GPB_MFP2  PB11 setting for CANFD0_TXH      */
#define CANFD0_TXH_PC5            SYS_GPC_MFP1_PC5MFP_CANFD0_TXH       /*!< GPC_MFP1  PC5  setting for CANFD0_TXH      */
#define CANFD0_TXH_PD11           SYS_GPD_MFP2_PD11MFP_CANFD0_TXH      /*!< GPD_MFP2  PD11 setting for CANFD0_TXH      */
#define CANFD0_TXL_PA6            SYS_GPA_MFP1_PA6MFP_CANFD0_TXL       /*!< GPA_MFP1  PA6  setting for CANFD0_TXL      */
#define CANFD0_TXL_PB12           SYS_GPB_MFP3_PB12MFP_CANFD0_TXL      /*!< GPB_MFP3  PB12 setting for CANFD0_TXL      */
#define CANFD0_TXL_PD8            SYS_GPD_MFP2_PD8MFP_CANFD0_TXL       /*!< GPD_MFP2  PD8  setting for CANFD0_TXL      */
#define CANFD0_TXL_PD12           SYS_GPD_MFP3_PD12MFP_CANFD0_TXL      /*!< GPD_MFP3  PD12 setting for CANFD0_TXL      */
#define CANFD0_TXL_PD13           SYS_GPD_MFP3_PD13MFP_CANFD0_TXL      /*!< GPD_MFP3  PD13 setting for CANFD0_TXL      */

/* CANFD1 MFP Pins */
#define CANFD1_RXD_PB6            SYS_GPB_MFP1_PB6MFP_CANFD1_RXD       /*!< GPB_MFP1  PB6  setting for CANFD1_RXD      */
#define CANFD1_RXD_PC2            SYS_GPC_MFP0_PC2MFP_CANFD1_RXD       /*!< GPC_MFP0  PC2  setting for CANFD1_RXD      */
#define CANFD1_RXD_PC9            SYS_GPC_MFP2_PC9MFP_CANFD1_RXD       /*!< GPC_MFP2  PC9  setting for CANFD1_RXD      */
#define CANFD1_RXD_PD12           SYS_GPD_MFP3_PD12MFP_CANFD1_RXD      /*!< GPD_MFP3  PD12 setting for CANFD1_RXD      */
#define CANFD1_RXD_PE6            SYS_GPE_MFP1_PE6MFP_CANFD1_RXD       /*!< GPE_MFP1  PE6  setting for CANFD1_RXD      */
#define CANFD1_RXD_PF8            SYS_GPF_MFP2_PF8MFP_CANFD1_RXD       /*!< GPF_MFP2  PF8  setting for CANFD1_RXD      */
#define CANFD1_TXD_PB7            SYS_GPB_MFP1_PB7MFP_CANFD1_TXD       /*!< GPB_MFP1  PB7  setting for CANFD1_TXD      */
#define CANFD1_TXD_PC3            SYS_GPC_MFP0_PC3MFP_CANFD1_TXD       /*!< GPC_MFP0  PC3  setting for CANFD1_TXD      */
#define CANFD1_TXD_PC10           SYS_GPC_MFP2_PC10MFP_CANFD1_TXD      /*!< GPC_MFP2  PC10 setting for CANFD1_TXD      */
#define CANFD1_TXD_PC13           SYS_GPC_MFP3_PC13MFP_CANFD1_TXD      /*!< GPC_MFP3  PC13 setting for CANFD1_TXD      */
#define CANFD1_TXD_PE7            SYS_GPE_MFP1_PE7MFP_CANFD1_TXD       /*!< GPE_MFP1  PE7  setting for CANFD1_TXD      */
#define CANFD1_TXD_PF9            SYS_GPF_MFP2_PF9MFP_CANFD1_TXD       /*!< GPF_MFP2  PF9  setting for CANFD1_TXD      */
#define CANFD1_TXH_PB7            SYS_GPB_MFP1_PB7MFP_CANFD1_TXH       /*!< GPB_MFP1  PB7  setting for CANFD1_TXH      */
#define CANFD1_TXH_PC3            SYS_GPC_MFP0_PC3MFP_CANFD1_TXH       /*!< GPC_MFP0  PC3  setting for CANFD1_TXH      */
#define CANFD1_TXH_PC10           SYS_GPC_MFP2_PC10MFP_CANFD1_TXH      /*!< GPC_MFP2  PC10 setting for CANFD1_TXH      */
#define CANFD1_TXH_PC13           SYS_GPC_MFP3_PC13MFP_CANFD1_TXH      /*!< GPC_MFP3  PC13 setting for CANFD1_TXH      */
#define CANFD1_TXH_PE7            SYS_GPE_MFP1_PE7MFP_CANFD1_TXH       /*!< GPE_MFP1  PE7  setting for CANFD1_TXH      */
#define CANFD1_TXH_PF9            SYS_GPF_MFP2_PF9MFP_CANFD1_TXH       /*!< GPF_MFP2  PF9  setting for CANFD1_TXH      */
#define CANFD1_TXL_PA8            SYS_GPA_MFP2_PA8MFP_CANFD1_TXL       /*!< GPA_MFP2  PA8  setting for CANFD1_TXL      */
#define CANFD1_TXL_PB8            SYS_GPB_MFP2_PB8MFP_CANFD1_TXL       /*!< GPB_MFP2  PB8  setting for CANFD1_TXL      */
#define CANFD1_TXL_PC4            SYS_GPC_MFP1_PC4MFP_CANFD1_TXL       /*!< GPC_MFP1  PC4  setting for CANFD1_TXL      */
#define CANFD1_TXL_PC11           SYS_GPC_MFP2_PC11MFP_CANFD1_TXL      /*!< GPC_MFP2  PC11 setting for CANFD1_TXL      */
#define CANFD1_TXL_PE5            SYS_GPE_MFP1_PE5MFP_CANFD1_TXL       /*!< GPE_MFP1  PE5  setting for CANFD1_TXL      */
#define CANFD1_TXL_PF10           SYS_GPF_MFP2_PF10MFP_CANFD1_TXL      /*!< GPF_MFP2  PF10 setting for CANFD1_TXL      */

/* CLKO MFP Pins */
#define CLKO_PB13                 SYS_GPB_MFP3_PB13MFP_CLKO            /*!< GPB_MFP3  PB13 setting for CLKO            */
#define CLKO_PB14                 SYS_GPB_MFP3_PB14MFP_CLKO            /*!< GPB_MFP3  PB14 setting for CLKO            */
#define CLKO_PC13                 SYS_GPC_MFP3_PC13MFP_CLKO            /*!< GPC_MFP3  PC13 setting for CLKO            */
#define CLKO_PD12                 SYS_GPD_MFP3_PD12MFP_CLKO            /*!< GPD_MFP3  PD12 setting for CLKO            */
#define CLKO_PD13                 SYS_GPD_MFP3_PD13MFP_CLKO            /*!< GPD_MFP3  PD13 setting for CLKO            */

/* EADC0 MFP Pins */
#define EADC0_ST_PC1              SYS_GPC_MFP0_PC1MFP_EADC0_ST         /*!< GPC_MFP0  PC1  setting for EADC0_ST        */
#define EADC0_ST_PC13             SYS_GPC_MFP3_PC13MFP_EADC0_ST        /*!< GPC_MFP3  PC13 setting for EADC0_ST        */
#define EADC0_ST_PD5              SYS_GPD_MFP1_PD5MFP_EADC0_ST         /*!< GPD_MFP1  PD5  setting for EADC0_ST        */
#define EADC0_ST_PD12             SYS_GPD_MFP3_PD12MFP_EADC0_ST        /*!< GPD_MFP3  PD12 setting for EADC0_ST        */
#define EADC0_ST_PD13             SYS_GPD_MFP3_PD13MFP_EADC0_ST        /*!< GPD_MFP3  PD13 setting for EADC0_ST        */
#define EADC0_ST_PF0              SYS_GPF_MFP0_PF0MFP_EADC0_ST         /*!< GPF_MFP0  PF0  setting for EADC0_ST        */
#define EADC0_ST_PF5              SYS_GPF_MFP1_PF5MFP_EADC0_ST         /*!< GPF_MFP1  PF5  setting for EADC0_ST        */
#define EADC0_ST_PG14             SYS_GPG_MFP3_PG14MFP_EADC0_ST        /*!< GPG_MFP3  PG14 setting for EADC0_ST        */
#define EADC0_CH5_PB5             SYS_GPB_MFP1_PB5MFP_EADC0_CH5        /*!< GPB_MFP1  PB5  setting for EADC0_CH5       */
#define EADC0_CH4_PB4             SYS_GPB_MFP1_PB4MFP_EADC0_CH4        /*!< GPB_MFP1  PB4  setting for EADC0_CH4       */
#define EADC0_CH3_PB3             SYS_GPB_MFP0_PB3MFP_EADC0_CH3        /*!< GPB_MFP0  PB3  setting for EADC0_CH3       */
#define EADC0_CH2_PB2             SYS_GPB_MFP0_PB2MFP_EADC0_CH2        /*!< GPB_MFP0  PB2  setting for EADC0_CH2       */
#define EADC0_CH1_PB1             SYS_GPB_MFP0_PB1MFP_EADC0_CH1        /*!< GPB_MFP0  PB1  setting for EADC0_CH1       */
#define EADC0_CH0_PB0             SYS_GPB_MFP0_PB0MFP_EADC0_CH0        /*!< GPB_MFP0  PB0  setting for EADC0_CH0       */
#define EADC0_CH15_PB15           SYS_GPB_MFP3_PB15MFP_EADC0_CH15      /*!< GPB_MFP3  PB15 setting for EADC0_CH15      */
#define EADC0_CH14_PB14           SYS_GPB_MFP3_PB14MFP_EADC0_CH14      /*!< GPB_MFP3  PB14 setting for EADC0_CH14      */
#define EADC0_CH13_PB13           SYS_GPB_MFP3_PB13MFP_EADC0_CH13      /*!< GPB_MFP3  PB13 setting for EADC0_CH13      */
#define EADC0_CH12_PB12           SYS_GPB_MFP3_PB12MFP_EADC0_CH12      /*!< GPB_MFP3  PB12 setting for EADC0_CH12      */
#define EADC0_CH11_PB11           SYS_GPB_MFP2_PB11MFP_EADC0_CH11      /*!< GPB_MFP2  PB11 setting for EADC0_CH11      */
#define EADC0_CH10_PB10           SYS_GPB_MFP2_PB10MFP_EADC0_CH10      /*!< GPB_MFP2  PB10 setting for EADC0_CH10      */
#define EADC0_CH9_PB9             SYS_GPB_MFP2_PB9MFP_EADC0_CH9        /*!< GPB_MFP2  PB9  setting for EADC0_CH9       */
#define EADC0_CH8_PB8             SYS_GPB_MFP2_PB8MFP_EADC0_CH8        /*!< GPB_MFP2  PB8  setting for EADC0_CH8       */
#define EADC0_CH7_PB7             SYS_GPB_MFP1_PB7MFP_EADC0_CH7        /*!< GPB_MFP1  PB7  setting for EADC0_CH7       */
#define EADC0_CH6_PB6             SYS_GPB_MFP1_PB6MFP_EADC0_CH6        /*!< GPB_MFP1  PB6  setting for EADC0_CH6       */

/* EBI MFP Pins */
#define EBI_AD0_PA5               SYS_GPA_MFP1_PA5MFP_EBI_AD0          /*!< GPA_MFP1  PA5  setting for EBI_AD0         */
#define EBI_AD0_PC0               SYS_GPC_MFP0_PC0MFP_EBI_AD0          /*!< GPC_MFP0  PC0  setting for EBI_AD0         */
#define EBI_AD0_PF4               SYS_GPF_MFP1_PF4MFP_EBI_AD0          /*!< GPF_MFP1  PF4  setting for EBI_AD0         */
#define EBI_AD0_PG9               SYS_GPG_MFP2_PG9MFP_EBI_AD0          /*!< GPG_MFP2  PG9  setting for EBI_AD0         */
#define EBI_AD1_PA4               SYS_GPA_MFP1_PA4MFP_EBI_AD1          /*!< GPA_MFP1  PA4  setting for EBI_AD1         */
#define EBI_AD1_PC1               SYS_GPC_MFP0_PC1MFP_EBI_AD1          /*!< GPC_MFP0  PC1  setting for EBI_AD1         */
#define EBI_AD1_PF5               SYS_GPF_MFP1_PF5MFP_EBI_AD1          /*!< GPF_MFP1  PF5  setting for EBI_AD1         */
#define EBI_AD1_PG10              SYS_GPG_MFP2_PG10MFP_EBI_AD1         /*!< GPG_MFP2  PG10 setting for EBI_AD1         */
#define EBI_AD10_PD3              SYS_GPD_MFP0_PD3MFP_EBI_AD10         /*!< GPD_MFP0  PD3  setting for EBI_AD10        */
#define EBI_AD10_PD13             SYS_GPD_MFP3_PD13MFP_EBI_AD10        /*!< GPD_MFP3  PD13 setting for EBI_AD10        */
#define EBI_AD10_PE1              SYS_GPE_MFP0_PE1MFP_EBI_AD10         /*!< GPE_MFP0  PE1  setting for EBI_AD10        */
#define EBI_AD10_PE7              SYS_GPE_MFP1_PE7MFP_EBI_AD10         /*!< GPE_MFP1  PE7  setting for EBI_AD10        */
#define EBI_AD11_PB12             SYS_GPB_MFP3_PB12MFP_EBI_AD11        /*!< GPB_MFP3  PB12 setting for EBI_AD11        */
#define EBI_AD11_PC14             SYS_GPC_MFP3_PC14MFP_EBI_AD11        /*!< GPC_MFP3  PC14 setting for EBI_AD11        */
#define EBI_AD11_PD2              SYS_GPD_MFP0_PD2MFP_EBI_AD11         /*!< GPD_MFP0  PD2  setting for EBI_AD11        */
#define EBI_AD11_PE0              SYS_GPE_MFP0_PE0MFP_EBI_AD11         /*!< GPE_MFP0  PE0  setting for EBI_AD11        */
#define EBI_AD11_PE6              SYS_GPE_MFP1_PE6MFP_EBI_AD11         /*!< GPE_MFP1  PE6  setting for EBI_AD11        */
#define EBI_AD12_PB15             SYS_GPB_MFP3_PB15MFP_EBI_AD12        /*!< GPB_MFP3  PB15 setting for EBI_AD12        */
#define EBI_AD12_PD1              SYS_GPD_MFP0_PD1MFP_EBI_AD12         /*!< GPD_MFP0  PD1  setting for EBI_AD12        */
#define EBI_AD12_PH8              SYS_GPH_MFP2_PH8MFP_EBI_AD12         /*!< GPH_MFP2  PH8  setting for EBI_AD12        */
#define EBI_AD13_PB14             SYS_GPB_MFP3_PB14MFP_EBI_AD13        /*!< GPB_MFP3  PB14 setting for EBI_AD13        */
#define EBI_AD13_PD0              SYS_GPD_MFP0_PD0MFP_EBI_AD13         /*!< GPD_MFP0  PD0  setting for EBI_AD13        */
#define EBI_AD13_PH9              SYS_GPH_MFP2_PH9MFP_EBI_AD13         /*!< GPH_MFP2  PH9  setting for EBI_AD13        */
#define EBI_AD14_PB13             SYS_GPB_MFP3_PB13MFP_EBI_AD14        /*!< GPB_MFP3  PB13 setting for EBI_AD14        */
#define EBI_AD14_PH10             SYS_GPH_MFP2_PH10MFP_EBI_AD14        /*!< GPH_MFP2  PH10 setting for EBI_AD14        */
#define EBI_AD15_PB12             SYS_GPB_MFP3_PB12MFP_EBI_AD15        /*!< GPB_MFP3  PB12 setting for EBI_AD15        */
#define EBI_AD15_PD5              SYS_GPD_MFP1_PD5MFP_EBI_AD15         /*!< GPD_MFP1  PD5  setting for EBI_AD15        */
#define EBI_AD15_PH11             SYS_GPH_MFP2_PH11MFP_EBI_AD15        /*!< GPH_MFP2  PH11 setting for EBI_AD15        */
#define EBI_AD2_PC2               SYS_GPC_MFP0_PC2MFP_EBI_AD2          /*!< GPC_MFP0  PC2  setting for EBI_AD2         */
#define EBI_AD2_PG11              SYS_GPG_MFP2_PG11MFP_EBI_AD2         /*!< GPG_MFP2  PG11 setting for EBI_AD2         */
#define EBI_AD3_PC3               SYS_GPC_MFP0_PC3MFP_EBI_AD3          /*!< GPC_MFP0  PC3  setting for EBI_AD3         */
#define EBI_AD3_PG12              SYS_GPG_MFP3_PG12MFP_EBI_AD3         /*!< GPG_MFP3  PG12 setting for EBI_AD3         */
#define EBI_AD4_PC4               SYS_GPC_MFP1_PC4MFP_EBI_AD4          /*!< GPC_MFP1  PC4  setting for EBI_AD4         */
#define EBI_AD4_PG13              SYS_GPG_MFP3_PG13MFP_EBI_AD4         /*!< GPG_MFP3  PG13 setting for EBI_AD4         */
#define EBI_AD5_PA14              SYS_GPA_MFP3_PA14MFP_EBI_AD5         /*!< GPA_MFP3  PA14 setting for EBI_AD5         */
#define EBI_AD5_PC5               SYS_GPC_MFP1_PC5MFP_EBI_AD5          /*!< GPC_MFP1  PC5  setting for EBI_AD5         */
#define EBI_AD5_PD4               SYS_GPD_MFP1_PD4MFP_EBI_AD5          /*!< GPD_MFP1  PD4  setting for EBI_AD5         */
#define EBI_AD5_PG14              SYS_GPG_MFP3_PG14MFP_EBI_AD5         /*!< GPG_MFP3  PG14 setting for EBI_AD5         */
#define EBI_AD6_PA6               SYS_GPA_MFP1_PA6MFP_EBI_AD6          /*!< GPA_MFP1  PA6  setting for EBI_AD6         */
#define EBI_AD6_PD8               SYS_GPD_MFP2_PD8MFP_EBI_AD6          /*!< GPD_MFP2  PD8  setting for EBI_AD6         */
#define EBI_AD7_PA7               SYS_GPA_MFP1_PA7MFP_EBI_AD7          /*!< GPA_MFP1  PA7  setting for EBI_AD7         */
#define EBI_AD7_PD9               SYS_GPD_MFP2_PD9MFP_EBI_AD7          /*!< GPD_MFP2  PD9  setting for EBI_AD7         */
#define EBI_AD8_PC6               SYS_GPC_MFP1_PC6MFP_EBI_AD8          /*!< GPC_MFP1  PC6  setting for EBI_AD8         */
#define EBI_AD8_PE14              SYS_GPE_MFP3_PE14MFP_EBI_AD8         /*!< GPE_MFP3  PE14 setting for EBI_AD8         */
#define EBI_AD9_PC7               SYS_GPC_MFP1_PC7MFP_EBI_AD9          /*!< GPC_MFP1  PC7  setting for EBI_AD9         */
#define EBI_AD9_PE15              SYS_GPE_MFP3_PE15MFP_EBI_AD9         /*!< GPE_MFP3  PE15 setting for EBI_AD9         */
#define EBI_ADR0_PB5              SYS_GPB_MFP1_PB5MFP_EBI_ADR0         /*!< GPB_MFP1  PB5  setting for EBI_ADR0        */
#define EBI_ADR0_PH7              SYS_GPH_MFP1_PH7MFP_EBI_ADR0         /*!< GPH_MFP1  PH7  setting for EBI_ADR0        */
#define EBI_ADR1_PB4              SYS_GPB_MFP1_PB4MFP_EBI_ADR1         /*!< GPB_MFP1  PB4  setting for EBI_ADR1        */
#define EBI_ADR1_PH6              SYS_GPH_MFP1_PH6MFP_EBI_ADR1         /*!< GPH_MFP1  PH6  setting for EBI_ADR1        */
#define EBI_ADR10_PC13            SYS_GPC_MFP3_PC13MFP_EBI_ADR10       /*!< GPC_MFP3  PC13 setting for EBI_ADR10       */
#define EBI_ADR10_PE8             SYS_GPE_MFP2_PE8MFP_EBI_ADR10        /*!< GPE_MFP2  PE8  setting for EBI_ADR10       */
#define EBI_ADR11_PE9             SYS_GPE_MFP2_PE9MFP_EBI_ADR11        /*!< GPE_MFP2  PE9  setting for EBI_ADR11       */
#define EBI_ADR11_PG2             SYS_GPG_MFP0_PG2MFP_EBI_ADR11        /*!< GPG_MFP0  PG2  setting for EBI_ADR11       */
#define EBI_ADR12_PE10            SYS_GPE_MFP2_PE10MFP_EBI_ADR12       /*!< GPE_MFP2  PE10 setting for EBI_ADR12       */
#define EBI_ADR12_PG3             SYS_GPG_MFP0_PG3MFP_EBI_ADR12        /*!< GPG_MFP0  PG3  setting for EBI_ADR12       */
#define EBI_ADR13_PE11            SYS_GPE_MFP2_PE11MFP_EBI_ADR13       /*!< GPE_MFP2  PE11 setting for EBI_ADR13       */
#define EBI_ADR13_PG4             SYS_GPG_MFP1_PG4MFP_EBI_ADR13        /*!< GPG_MFP1  PG4  setting for EBI_ADR13       */
#define EBI_ADR14_PE12            SYS_GPE_MFP3_PE12MFP_EBI_ADR14       /*!< GPE_MFP3  PE12 setting for EBI_ADR14       */
#define EBI_ADR14_PF11            SYS_GPF_MFP2_PF11MFP_EBI_ADR14       /*!< GPF_MFP2  PF11 setting for EBI_ADR14       */
#define EBI_ADR15_PE13            SYS_GPE_MFP3_PE13MFP_EBI_ADR15       /*!< GPE_MFP3  PE13 setting for EBI_ADR15       */
#define EBI_ADR15_PF10            SYS_GPF_MFP2_PF10MFP_EBI_ADR15       /*!< GPF_MFP2  PF10 setting for EBI_ADR15       */
#define EBI_ADR16_PB11            SYS_GPB_MFP2_PB11MFP_EBI_ADR16       /*!< GPB_MFP2  PB11 setting for EBI_ADR16       */
#define EBI_ADR16_PC8             SYS_GPC_MFP2_PC8MFP_EBI_ADR16        /*!< GPC_MFP2  PC8  setting for EBI_ADR16       */
#define EBI_ADR16_PF9             SYS_GPF_MFP2_PF9MFP_EBI_ADR16        /*!< GPF_MFP2  PF9  setting for EBI_ADR16       */
#define EBI_ADR17_PB10            SYS_GPB_MFP2_PB10MFP_EBI_ADR17       /*!< GPB_MFP2  PB10 setting for EBI_ADR17       */
#define EBI_ADR17_PF8             SYS_GPF_MFP2_PF8MFP_EBI_ADR17        /*!< GPF_MFP2  PF8  setting for EBI_ADR17       */
#define EBI_ADR18_PB9             SYS_GPB_MFP2_PB9MFP_EBI_ADR18        /*!< GPB_MFP2  PB9  setting for EBI_ADR18       */
#define EBI_ADR18_PF7             SYS_GPF_MFP1_PF7MFP_EBI_ADR18        /*!< GPF_MFP1  PF7  setting for EBI_ADR18       */
#define EBI_ADR19_PB8             SYS_GPB_MFP2_PB8MFP_EBI_ADR19        /*!< GPB_MFP2  PB8  setting for EBI_ADR19       */
#define EBI_ADR19_PF6             SYS_GPF_MFP1_PF6MFP_EBI_ADR19        /*!< GPF_MFP1  PF6  setting for EBI_ADR19       */
#define EBI_ADR2_PB3              SYS_GPB_MFP0_PB3MFP_EBI_ADR2         /*!< GPB_MFP0  PB3  setting for EBI_ADR2        */
#define EBI_ADR2_PH5              SYS_GPH_MFP1_PH5MFP_EBI_ADR2         /*!< GPH_MFP1  PH5  setting for EBI_ADR2        */
#define EBI_ADR3_PB2              SYS_GPB_MFP0_PB2MFP_EBI_ADR3         /*!< GPB_MFP0  PB2  setting for EBI_ADR3        */
#define EBI_ADR3_PH4              SYS_GPH_MFP1_PH4MFP_EBI_ADR3         /*!< GPH_MFP1  PH4  setting for EBI_ADR3        */
#define EBI_ADR4_PC12             SYS_GPC_MFP3_PC12MFP_EBI_ADR4        /*!< GPC_MFP3  PC12 setting for EBI_ADR4        */
#define EBI_ADR5_PC11             SYS_GPC_MFP2_PC11MFP_EBI_ADR5        /*!< GPC_MFP2  PC11 setting for EBI_ADR5        */
#define EBI_ADR6_PC10             SYS_GPC_MFP2_PC10MFP_EBI_ADR6        /*!< GPC_MFP2  PC10 setting for EBI_ADR6        */
#define EBI_ADR7_PC9              SYS_GPC_MFP2_PC9MFP_EBI_ADR7         /*!< GPC_MFP2  PC9  setting for EBI_ADR7        */
#define EBI_ADR8_PB1              SYS_GPB_MFP0_PB1MFP_EBI_ADR8         /*!< GPB_MFP0  PB1  setting for EBI_ADR8        */
#define EBI_ADR9_PB0              SYS_GPB_MFP0_PB0MFP_EBI_ADR9         /*!< GPB_MFP0  PB0  setting for EBI_ADR9        */
#define EBI_ALE_PA8               SYS_GPA_MFP2_PA8MFP_EBI_ALE          /*!< GPA_MFP2  PA8  setting for EBI_ALE         */
#define EBI_ALE_PE2               SYS_GPE_MFP0_PE2MFP_EBI_ALE          /*!< GPE_MFP0  PE2  setting for EBI_ALE         */
#define EBI_MCLK_PA9              SYS_GPA_MFP2_PA9MFP_EBI_MCLK         /*!< GPA_MFP2  PA9  setting for EBI_MCLK        */
#define EBI_MCLK_PE3              SYS_GPE_MFP0_PE3MFP_EBI_MCLK         /*!< GPE_MFP0  PE3  setting for EBI_MCLK        */
#define EBI_nCS0_PB7              SYS_GPB_MFP1_PB7MFP_EBI_nCS0         /*!< GPB_MFP1  PB7  setting for EBI_nCS0        */
#define EBI_nCS0_PD12             SYS_GPD_MFP3_PD12MFP_EBI_nCS0        /*!< GPD_MFP3  PD12 setting for EBI_nCS0        */
#define EBI_nCS0_PD14             SYS_GPD_MFP3_PD14MFP_EBI_nCS0        /*!< GPD_MFP3  PD14 setting for EBI_nCS0        */
#define EBI_nCS0_PF3              SYS_GPF_MFP0_PF3MFP_EBI_nCS0         /*!< GPF_MFP0  PF3  setting for EBI_nCS0        */
#define EBI_nCS0_PF6              SYS_GPF_MFP1_PF6MFP_EBI_nCS0         /*!< GPF_MFP1  PF6  setting for EBI_nCS0        */
#define EBI_nCS1_PB6              SYS_GPB_MFP1_PB6MFP_EBI_nCS1         /*!< GPB_MFP1  PB6  setting for EBI_nCS1        */
#define EBI_nCS1_PD11             SYS_GPD_MFP2_PD11MFP_EBI_nCS1        /*!< GPD_MFP2  PD11 setting for EBI_nCS1        */
#define EBI_nCS1_PF2              SYS_GPF_MFP0_PF2MFP_EBI_nCS1         /*!< GPF_MFP0  PF2  setting for EBI_nCS1        */
#define EBI_nCS2_PD10             SYS_GPD_MFP2_PD10MFP_EBI_nCS2        /*!< GPD_MFP2  PD10 setting for EBI_nCS2        */
#define EBI_nRD_PA11              SYS_GPA_MFP2_PA11MFP_EBI_nRD         /*!< GPA_MFP2  PA11 setting for EBI_nRD         */
#define EBI_nRD_PE5               SYS_GPE_MFP1_PE5MFP_EBI_nRD          /*!< GPE_MFP1  PE5  setting for EBI_nRD         */
#define EBI_nWR_PA10              SYS_GPA_MFP2_PA10MFP_EBI_nWR         /*!< GPA_MFP2  PA10 setting for EBI_nWR         */
#define EBI_nWR_PE4               SYS_GPE_MFP1_PE4MFP_EBI_nWR          /*!< GPE_MFP1  PE4  setting for EBI_nWR         */
#define EBI_nWRH_PB6              SYS_GPB_MFP1_PB6MFP_EBI_nWRH         /*!< GPB_MFP1  PB6  setting for EBI_nWRH        */
#define EBI_nWRL_PB7              SYS_GPB_MFP1_PB7MFP_EBI_nWRL         /*!< GPB_MFP1  PB7  setting for EBI_nWRL        */

/* ECAP0 MFP Pins */
#define ECAP0_IC0_PA10            SYS_GPA_MFP2_PA10MFP_ECAP0_IC0       /*!< GPA_MFP2  PA10 setting for ECAP0_IC0       */
#define ECAP0_IC0_PE8             SYS_GPE_MFP2_PE8MFP_ECAP0_IC0        /*!< GPE_MFP2  PE8  setting for ECAP0_IC0       */
#define ECAP0_IC1_PA9             SYS_GPA_MFP2_PA9MFP_ECAP0_IC1        /*!< GPA_MFP2  PA9  setting for ECAP0_IC1       */
#define ECAP0_IC1_PE9             SYS_GPE_MFP2_PE9MFP_ECAP0_IC1        /*!< GPE_MFP2  PE9  setting for ECAP0_IC1       */
#define ECAP0_IC2_PA8             SYS_GPA_MFP2_PA8MFP_ECAP0_IC2        /*!< GPA_MFP2  PA8  setting for ECAP0_IC2       */
#define ECAP0_IC2_PE10            SYS_GPE_MFP2_PE10MFP_ECAP0_IC2       /*!< GPE_MFP2  PE10 setting for ECAP0_IC2       */

/* ELLSI0 MFP Pins */
#define ELLSI0_OUT_PA7            SYS_GPA_MFP1_PA7MFP_ELLSI0_OUT       /*!< GPA_MFP1  PA7  setting for ELLSI0_OUT      */
#define ELLSI0_OUT_PB1            SYS_GPB_MFP0_PB1MFP_ELLSI0_OUT       /*!< GPB_MFP0  PB1  setting for ELLSI0_OUT      */
#define ELLSI0_OUT_PB9            SYS_GPB_MFP2_PB9MFP_ELLSI0_OUT       /*!< GPB_MFP2  PB9  setting for ELLSI0_OUT      */
#define ELLSI0_OUT_PC1            SYS_GPC_MFP0_PC1MFP_ELLSI0_OUT       /*!< GPC_MFP0  PC1  setting for ELLSI0_OUT      */

/* EPWM0 MFP Pins */
#define EPWM0_BRAKE0_PB1          SYS_GPB_MFP0_PB1MFP_EPWM0_BRAKE0     /*!< GPB_MFP0  PB1  setting for EPWM0_BRAKE0    */
#define EPWM0_BRAKE0_PE8          SYS_GPE_MFP2_PE8MFP_EPWM0_BRAKE0     /*!< GPE_MFP2  PE8  setting for EPWM0_BRAKE0    */
#define EPWM0_BRAKE1_PA11         SYS_GPA_MFP2_PA11MFP_EPWM0_BRAKE1    /*!< GPA_MFP2  PA11 setting for EPWM0_BRAKE1    */
#define EPWM0_BRAKE1_PB0          SYS_GPB_MFP0_PB0MFP_EPWM0_BRAKE1     /*!< GPB_MFP0  PB0  setting for EPWM0_BRAKE1    */
#define EPWM0_BRAKE1_PB15         SYS_GPB_MFP3_PB15MFP_EPWM0_BRAKE1    /*!< GPB_MFP3  PB15 setting for EPWM0_BRAKE1    */
#define EPWM0_BRAKE1_PE9          SYS_GPE_MFP2_PE9MFP_EPWM0_BRAKE1     /*!< GPE_MFP2  PE9  setting for EPWM0_BRAKE1    */
#define EPWM0_CH0_PA5             SYS_GPA_MFP1_PA5MFP_EPWM0_CH0        /*!< GPA_MFP1  PA5  setting for EPWM0_CH0       */
#define EPWM0_CH0_PB5             SYS_GPB_MFP1_PB5MFP_EPWM0_CH0        /*!< GPB_MFP1  PB5  setting for EPWM0_CH0       */
#define EPWM0_CH0_PE7             SYS_GPE_MFP1_PE7MFP_EPWM0_CH0        /*!< GPE_MFP1  PE7  setting for EPWM0_CH0       */
#define EPWM0_CH0_PE8             SYS_GPE_MFP2_PE8MFP_EPWM0_CH0        /*!< GPE_MFP2  PE8  setting for EPWM0_CH0       */
#define EPWM0_CH0_PF5             SYS_GPF_MFP1_PF5MFP_EPWM0_CH0        /*!< GPF_MFP1  PF5  setting for EPWM0_CH0       */
#define EPWM0_CH1_PA4             SYS_GPA_MFP1_PA4MFP_EPWM0_CH1        /*!< GPA_MFP1  PA4  setting for EPWM0_CH1       */
#define EPWM0_CH1_PB4             SYS_GPB_MFP1_PB4MFP_EPWM0_CH1        /*!< GPB_MFP1  PB4  setting for EPWM0_CH1       */
#define EPWM0_CH1_PE6             SYS_GPE_MFP1_PE6MFP_EPWM0_CH1        /*!< GPE_MFP1  PE6  setting for EPWM0_CH1       */
#define EPWM0_CH1_PE9             SYS_GPE_MFP2_PE9MFP_EPWM0_CH1        /*!< GPE_MFP2  PE9  setting for EPWM0_CH1       */
#define EPWM0_CH1_PF4             SYS_GPF_MFP1_PF4MFP_EPWM0_CH1        /*!< GPF_MFP1  PF4  setting for EPWM0_CH1       */
#define EPWM0_CH2_PA3             SYS_GPA_MFP0_PA3MFP_EPWM0_CH2        /*!< GPA_MFP0  PA3  setting for EPWM0_CH2       */
#define EPWM0_CH2_PB3             SYS_GPB_MFP0_PB3MFP_EPWM0_CH2        /*!< GPB_MFP0  PB3  setting for EPWM0_CH2       */
#define EPWM0_CH2_PE5             SYS_GPE_MFP1_PE5MFP_EPWM0_CH2        /*!< GPE_MFP1  PE5  setting for EPWM0_CH2       */
#define EPWM0_CH2_PE10            SYS_GPE_MFP2_PE10MFP_EPWM0_CH2       /*!< GPE_MFP2  PE10 setting for EPWM0_CH2       */
#define EPWM0_CH3_PA2             SYS_GPA_MFP0_PA2MFP_EPWM0_CH3        /*!< GPA_MFP0  PA2  setting for EPWM0_CH3       */
#define EPWM0_CH3_PB2             SYS_GPB_MFP0_PB2MFP_EPWM0_CH3        /*!< GPB_MFP0  PB2  setting for EPWM0_CH3       */
#define EPWM0_CH3_PE4             SYS_GPE_MFP1_PE4MFP_EPWM0_CH3        /*!< GPE_MFP1  PE4  setting for EPWM0_CH3       */
#define EPWM0_CH3_PE11            SYS_GPE_MFP2_PE11MFP_EPWM0_CH3       /*!< GPE_MFP2  PE11 setting for EPWM0_CH3       */
#define EPWM0_CH4_PA1             SYS_GPA_MFP0_PA1MFP_EPWM0_CH4        /*!< GPA_MFP0  PA1  setting for EPWM0_CH4       */
#define EPWM0_CH4_PB1             SYS_GPB_MFP0_PB1MFP_EPWM0_CH4        /*!< GPB_MFP0  PB1  setting for EPWM0_CH4       */
#define EPWM0_CH4_PD14            SYS_GPD_MFP3_PD14MFP_EPWM0_CH4       /*!< GPD_MFP3  PD14 setting for EPWM0_CH4       */
#define EPWM0_CH4_PE3             SYS_GPE_MFP0_PE3MFP_EPWM0_CH4        /*!< GPE_MFP0  PE3  setting for EPWM0_CH4       */
#define EPWM0_CH4_PE12            SYS_GPE_MFP3_PE12MFP_EPWM0_CH4       /*!< GPE_MFP3  PE12 setting for EPWM0_CH4       */
#define EPWM0_CH4_PH5             SYS_GPH_MFP1_PH5MFP_EPWM0_CH4        /*!< GPH_MFP1  PH5  setting for EPWM0_CH4       */
#define EPWM0_CH5_PA0             SYS_GPA_MFP0_PA0MFP_EPWM0_CH5        /*!< GPA_MFP0  PA0  setting for EPWM0_CH5       */
#define EPWM0_CH5_PB0             SYS_GPB_MFP0_PB0MFP_EPWM0_CH5        /*!< GPB_MFP0  PB0  setting for EPWM0_CH5       */
#define EPWM0_CH5_PE2             SYS_GPE_MFP0_PE2MFP_EPWM0_CH5        /*!< GPE_MFP0  PE2  setting for EPWM0_CH5       */
#define EPWM0_CH5_PE13            SYS_GPE_MFP3_PE13MFP_EPWM0_CH5       /*!< GPE_MFP3  PE13 setting for EPWM0_CH5       */
#define EPWM0_CH5_PH4             SYS_GPH_MFP1_PH4MFP_EPWM0_CH5        /*!< GPH_MFP1  PH4  setting for EPWM0_CH5       */
#define EPWM0_CH5_PH11            SYS_GPH_MFP2_PH11MFP_EPWM0_CH5       /*!< GPH_MFP2  PH11 setting for EPWM0_CH5       */
#define EPWM0_SYNC_OUT_PA11       SYS_GPA_MFP2_PA11MFP_EPWM0_SYNC_OUT  /*!< GPA_MFP2  PA11 setting for EPWM0_SYNC_OUT  */
#define EPWM0_SYNC_OUT_PF5        SYS_GPF_MFP1_PF5MFP_EPWM0_SYNC_OUT   /*!< GPF_MFP1  PF5  setting for EPWM0_SYNC_OUT  */
#define EPWM0_SYNC_IN_PA15        SYS_GPA_MFP3_PA15MFP_EPWM0_SYNC_IN   /*!< GPA_MFP3  PA15 setting for EPWM0_SYNC_IN   */
#define EPWM0_SYNC_IN_PB6         SYS_GPB_MFP1_PB6MFP_EPWM0_SYNC_IN    /*!< GPB_MFP1  PB6  setting for EPWM0_SYNC_IN   */
#define EPWM0_SYNC_IN_PC14        SYS_GPC_MFP3_PC14MFP_EPWM0_SYNC_IN   /*!< GPC_MFP3  PC14 setting for EPWM0_SYNC_IN   */

/* EPWM1 MFP Pins */
#define EPWM1_BRAKE0_PB7          SYS_GPB_MFP1_PB7MFP_EPWM1_BRAKE0     /*!< GPB_MFP1  PB7  setting for EPWM1_BRAKE0    */
#define EPWM1_BRAKE0_PE10         SYS_GPE_MFP2_PE10MFP_EPWM1_BRAKE0    /*!< GPE_MFP2  PE10 setting for EPWM1_BRAKE0    */
#define EPWM1_BRAKE1_PA3          SYS_GPA_MFP0_PA3MFP_EPWM1_BRAKE1     /*!< GPA_MFP0  PA3  setting for EPWM1_BRAKE1    */
#define EPWM1_BRAKE1_PB6          SYS_GPB_MFP1_PB6MFP_EPWM1_BRAKE1     /*!< GPB_MFP1  PB6  setting for EPWM1_BRAKE1    */
#define EPWM1_BRAKE1_PE11         SYS_GPE_MFP2_PE11MFP_EPWM1_BRAKE1    /*!< GPE_MFP2  PE11 setting for EPWM1_BRAKE1    */
#define EPWM1_CH0_PB15            SYS_GPB_MFP3_PB15MFP_EPWM1_CH0       /*!< GPB_MFP3  PB15 setting for EPWM1_CH0       */
#define EPWM1_CH0_PC5             SYS_GPC_MFP1_PC5MFP_EPWM1_CH0        /*!< GPC_MFP1  PC5  setting for EPWM1_CH0       */
#define EPWM1_CH0_PC12            SYS_GPC_MFP3_PC12MFP_EPWM1_CH0       /*!< GPC_MFP3  PC12 setting for EPWM1_CH0       */
#define EPWM1_CH0_PE13            SYS_GPE_MFP3_PE13MFP_EPWM1_CH0       /*!< GPE_MFP3  PE13 setting for EPWM1_CH0       */
#define EPWM1_CH0_PF3             SYS_GPF_MFP0_PF3MFP_EPWM1_CH0        /*!< GPF_MFP0  PF3  setting for EPWM1_CH0       */
#define EPWM1_CH1_PB14            SYS_GPB_MFP3_PB14MFP_EPWM1_CH1       /*!< GPB_MFP3  PB14 setting for EPWM1_CH1       */
#define EPWM1_CH1_PC4             SYS_GPC_MFP1_PC4MFP_EPWM1_CH1        /*!< GPC_MFP1  PC4  setting for EPWM1_CH1       */
#define EPWM1_CH1_PC8             SYS_GPC_MFP2_PC8MFP_EPWM1_CH1        /*!< GPC_MFP2  PC8  setting for EPWM1_CH1       */
#define EPWM1_CH1_PC11            SYS_GPC_MFP2_PC11MFP_EPWM1_CH1       /*!< GPC_MFP2  PC11 setting for EPWM1_CH1       */
#define EPWM1_CH1_PF2             SYS_GPF_MFP0_PF2MFP_EPWM1_CH1        /*!< GPF_MFP0  PF2  setting for EPWM1_CH1       */
#define EPWM1_CH2_PB13            SYS_GPB_MFP3_PB13MFP_EPWM1_CH2       /*!< GPB_MFP3  PB13 setting for EPWM1_CH2       */
#define EPWM1_CH2_PC3             SYS_GPC_MFP0_PC3MFP_EPWM1_CH2        /*!< GPC_MFP0  PC3  setting for EPWM1_CH2       */
#define EPWM1_CH2_PC7             SYS_GPC_MFP1_PC7MFP_EPWM1_CH2        /*!< GPC_MFP1  PC7  setting for EPWM1_CH2       */
#define EPWM1_CH2_PC10            SYS_GPC_MFP2_PC10MFP_EPWM1_CH2       /*!< GPC_MFP2  PC10 setting for EPWM1_CH2       */
#define EPWM1_CH3_PB12            SYS_GPB_MFP3_PB12MFP_EPWM1_CH3       /*!< GPB_MFP3  PB12 setting for EPWM1_CH3       */
#define EPWM1_CH3_PC2             SYS_GPC_MFP0_PC2MFP_EPWM1_CH3        /*!< GPC_MFP0  PC2  setting for EPWM1_CH3       */
#define EPWM1_CH3_PC6             SYS_GPC_MFP1_PC6MFP_EPWM1_CH3        /*!< GPC_MFP1  PC6  setting for EPWM1_CH3       */
#define EPWM1_CH3_PC9             SYS_GPC_MFP2_PC9MFP_EPWM1_CH3        /*!< GPC_MFP2  PC9  setting for EPWM1_CH3       */
#define EPWM1_CH4_PA7             SYS_GPA_MFP1_PA7MFP_EPWM1_CH4        /*!< GPA_MFP1  PA7  setting for EPWM1_CH4       */
#define EPWM1_CH4_PB1             SYS_GPB_MFP0_PB1MFP_EPWM1_CH4        /*!< GPB_MFP0  PB1  setting for EPWM1_CH4       */
#define EPWM1_CH4_PB7             SYS_GPB_MFP1_PB7MFP_EPWM1_CH4        /*!< GPB_MFP1  PB7  setting for EPWM1_CH4       */
#define EPWM1_CH4_PC1             SYS_GPC_MFP0_PC1MFP_EPWM1_CH4        /*!< GPC_MFP0  PC1  setting for EPWM1_CH4       */
#define EPWM1_CH4_PF0             SYS_GPF_MFP0_PF0MFP_EPWM1_CH4        /*!< GPF_MFP0  PF0  setting for EPWM1_CH4       */
#define EPWM1_CH5_PA6             SYS_GPA_MFP1_PA6MFP_EPWM1_CH5        /*!< GPA_MFP1  PA6  setting for EPWM1_CH5       */
#define EPWM1_CH5_PB0             SYS_GPB_MFP0_PB0MFP_EPWM1_CH5        /*!< GPB_MFP0  PB0  setting for EPWM1_CH5       */
#define EPWM1_CH5_PB6             SYS_GPB_MFP1_PB6MFP_EPWM1_CH5        /*!< GPB_MFP1  PB6  setting for EPWM1_CH5       */
#define EPWM1_CH5_PC0             SYS_GPC_MFP0_PC0MFP_EPWM1_CH5        /*!< GPC_MFP0  PC0  setting for EPWM1_CH5       */
#define EPWM1_CH5_PF1             SYS_GPF_MFP0_PF1MFP_EPWM1_CH5        /*!< GPF_MFP0  PF1  setting for EPWM1_CH5       */

/* EQEI0 MFP Pins */
#define EQEI0_A_PA4               SYS_GPA_MFP1_PA4MFP_EQEI0_A          /*!< GPA_MFP1  PA4  setting for EQEI0_A         */
#define EQEI0_A_PD11              SYS_GPD_MFP2_PD11MFP_EQEI0_A         /*!< GPD_MFP2  PD11 setting for EQEI0_A         */
#define EQEI0_A_PE3               SYS_GPE_MFP0_PE3MFP_EQEI0_A          /*!< GPE_MFP0  PE3  setting for EQEI0_A         */
#define EQEI0_B_PA3               SYS_GPA_MFP0_PA3MFP_EQEI0_B          /*!< GPA_MFP0  PA3  setting for EQEI0_B         */
#define EQEI0_B_PD10              SYS_GPD_MFP2_PD10MFP_EQEI0_B         /*!< GPD_MFP2  PD10 setting for EQEI0_B         */
#define EQEI0_B_PE2               SYS_GPE_MFP0_PE2MFP_EQEI0_B          /*!< GPE_MFP0  PE2  setting for EQEI0_B         */
#define EQEI0_INDEX_PA5           SYS_GPA_MFP1_PA5MFP_EQEI0_INDEX      /*!< GPA_MFP1  PA5  setting for EQEI0_INDEX     */
#define EQEI0_INDEX_PD12          SYS_GPD_MFP3_PD12MFP_EQEI0_INDEX     /*!< GPD_MFP3  PD12 setting for EQEI0_INDEX     */
#define EQEI0_INDEX_PE4           SYS_GPE_MFP1_PE4MFP_EQEI0_INDEX      /*!< GPE_MFP1  PE4  setting for EQEI0_INDEX     */

/* HSUSB MFP Pins */
#define HSUSB_VBUS_EN_PB6         SYS_GPB_MFP1_PB6MFP_HSUSB_VBUS_EN    /*!< GPB_MFP1  PB6  setting for HSUSB_VBUS_EN   */
#define HSUSB_VBUS_EN_PB10        SYS_GPB_MFP2_PB10MFP_HSUSB_VBUS_EN   /*!< GPB_MFP2  PB10 setting for HSUSB_VBUS_EN   */
#define HSUSB_VBUS_EN_PB15        SYS_GPB_MFP3_PB15MFP_HSUSB_VBUS_EN   /*!< GPB_MFP3  PB15 setting for HSUSB_VBUS_EN   */
#define HSUSB_VBUS_ST_PB7         SYS_GPB_MFP1_PB7MFP_HSUSB_VBUS_ST    /*!< GPB_MFP1  PB7  setting for HSUSB_VBUS_ST   */
#define HSUSB_VBUS_ST_PB11        SYS_GPB_MFP2_PB11MFP_HSUSB_VBUS_ST   /*!< GPB_MFP2  PB11 setting for HSUSB_VBUS_ST   */
#define HSUSB_VBUS_ST_PB13        SYS_GPB_MFP3_PB13MFP_HSUSB_VBUS_ST   /*!< GPB_MFP3  PB13 setting for HSUSB_VBUS_ST   */
#define HSUSB_VBUS_ST_PC14        SYS_GPC_MFP3_PC14MFP_HSUSB_VBUS_ST   /*!< GPC_MFP3  PC14 setting for HSUSB_VBUS_ST   */

/* I2C0 MFP Pins */
#define I2C0_SCL_PA5              SYS_GPA_MFP1_PA5MFP_I2C0_SCL         /*!< GPA_MFP1  PA5  setting for I2C0_SCL        */
#define I2C0_SCL_PB5              SYS_GPB_MFP1_PB5MFP_I2C0_SCL         /*!< GPB_MFP1  PB5  setting for I2C0_SCL        */
#define I2C0_SCL_PB9              SYS_GPB_MFP2_PB9MFP_I2C0_SCL         /*!< GPB_MFP2  PB9  setting for I2C0_SCL        */
#define I2C0_SCL_PC1              SYS_GPC_MFP0_PC1MFP_I2C0_SCL         /*!< GPC_MFP0  PC1  setting for I2C0_SCL        */
#define I2C0_SCL_PC12             SYS_GPC_MFP3_PC12MFP_I2C0_SCL        /*!< GPC_MFP3  PC12 setting for I2C0_SCL        */
#define I2C0_SCL_PD7              SYS_GPD_MFP1_PD7MFP_I2C0_SCL         /*!< GPD_MFP1  PD7  setting for I2C0_SCL        */
#define I2C0_SCL_PE13             SYS_GPE_MFP3_PE13MFP_I2C0_SCL        /*!< GPE_MFP3  PE13 setting for I2C0_SCL        */
#define I2C0_SCL_PF0              SYS_GPF_MFP0_PF0MFP_I2C0_SCL         /*!< GPF_MFP0  PF0  setting for I2C0_SCL        */
#define I2C0_SCL_PF3              SYS_GPF_MFP0_PF3MFP_I2C0_SCL         /*!< GPF_MFP0  PF3  setting for I2C0_SCL        */
#define I2C0_SDA_PA4              SYS_GPA_MFP1_PA4MFP_I2C0_SDA         /*!< GPA_MFP1  PA4  setting for I2C0_SDA        */
#define I2C0_SDA_PB4              SYS_GPB_MFP1_PB4MFP_I2C0_SDA         /*!< GPB_MFP1  PB4  setting for I2C0_SDA        */
#define I2C0_SDA_PB8              SYS_GPB_MFP2_PB8MFP_I2C0_SDA         /*!< GPB_MFP2  PB8  setting for I2C0_SDA        */
#define I2C0_SDA_PC0              SYS_GPC_MFP0_PC0MFP_I2C0_SDA         /*!< GPC_MFP0  PC0  setting for I2C0_SDA        */
#define I2C0_SDA_PC8              SYS_GPC_MFP2_PC8MFP_I2C0_SDA         /*!< GPC_MFP2  PC8  setting for I2C0_SDA        */
#define I2C0_SDA_PC11             SYS_GPC_MFP2_PC11MFP_I2C0_SDA        /*!< GPC_MFP2  PC11 setting for I2C0_SDA        */
#define I2C0_SDA_PD6              SYS_GPD_MFP1_PD6MFP_I2C0_SDA         /*!< GPD_MFP1  PD6  setting for I2C0_SDA        */
#define I2C0_SDA_PF1              SYS_GPF_MFP0_PF1MFP_I2C0_SDA         /*!< GPF_MFP0  PF1  setting for I2C0_SDA        */
#define I2C0_SDA_PF2              SYS_GPF_MFP0_PF2MFP_I2C0_SDA         /*!< GPF_MFP0  PF2  setting for I2C0_SDA        */
#define I2C0_SMBAL_PA3            SYS_GPA_MFP0_PA3MFP_I2C0_SMBAL       /*!< GPA_MFP0  PA3  setting for I2C0_SMBAL      */
#define I2C0_SMBAL_PC3            SYS_GPC_MFP0_PC3MFP_I2C0_SMBAL       /*!< GPC_MFP0  PC3  setting for I2C0_SMBAL      */
#define I2C0_SMBAL_PG2            SYS_GPG_MFP0_PG2MFP_I2C0_SMBAL       /*!< GPG_MFP0  PG2  setting for I2C0_SMBAL      */
#define I2C0_SMBSUS_PA2           SYS_GPA_MFP0_PA2MFP_I2C0_SMBSUS      /*!< GPA_MFP0  PA2  setting for I2C0_SMBSUS     */
#define I2C0_SMBSUS_PC2           SYS_GPC_MFP0_PC2MFP_I2C0_SMBSUS      /*!< GPC_MFP0  PC2  setting for I2C0_SMBSUS     */
#define I2C0_SMBSUS_PG3           SYS_GPG_MFP0_PG3MFP_I2C0_SMBSUS      /*!< GPG_MFP0  PG3  setting for I2C0_SMBSUS     */

/* I2C1 MFP Pins */
#define I2C1_SCL_PA3              SYS_GPA_MFP0_PA3MFP_I2C1_SCL         /*!< GPA_MFP0  PA3  setting for I2C1_SCL        */
#define I2C1_SCL_PA7              SYS_GPA_MFP1_PA7MFP_I2C1_SCL         /*!< GPA_MFP1  PA7  setting for I2C1_SCL        */
#define I2C1_SCL_PA12             SYS_GPA_MFP3_PA12MFP_I2C1_SCL        /*!< GPA_MFP3  PA12 setting for I2C1_SCL        */
#define I2C1_SCL_PB1              SYS_GPB_MFP0_PB1MFP_I2C1_SCL         /*!< GPB_MFP0  PB1  setting for I2C1_SCL        */
#define I2C1_SCL_PB3              SYS_GPB_MFP0_PB3MFP_I2C1_SCL         /*!< GPB_MFP0  PB3  setting for I2C1_SCL        */
#define I2C1_SCL_PB11             SYS_GPB_MFP2_PB11MFP_I2C1_SCL        /*!< GPB_MFP2  PB11 setting for I2C1_SCL        */
#define I2C1_SCL_PC5              SYS_GPC_MFP1_PC5MFP_I2C1_SCL         /*!< GPC_MFP1  PC5  setting for I2C1_SCL        */
#define I2C1_SCL_PD5              SYS_GPD_MFP1_PD5MFP_I2C1_SCL         /*!< GPD_MFP1  PD5  setting for I2C1_SCL        */
#define I2C1_SCL_PE1              SYS_GPE_MFP0_PE1MFP_I2C1_SCL         /*!< GPE_MFP0  PE1  setting for I2C1_SCL        */
#define I2C1_SCL_PE14             SYS_GPE_MFP3_PE14MFP_I2C1_SCL        /*!< GPE_MFP3  PE14 setting for I2C1_SCL        */
#define I2C1_SCL_PF0              SYS_GPF_MFP0_PF0MFP_I2C1_SCL         /*!< GPF_MFP0  PF0  setting for I2C1_SCL        */
#define I2C1_SCL_PG2              SYS_GPG_MFP0_PG2MFP_I2C1_SCL         /*!< GPG_MFP0  PG2  setting for I2C1_SCL        */
#define I2C1_SDA_PA2              SYS_GPA_MFP0_PA2MFP_I2C1_SDA         /*!< GPA_MFP0  PA2  setting for I2C1_SDA        */
#define I2C1_SDA_PA6              SYS_GPA_MFP1_PA6MFP_I2C1_SDA         /*!< GPA_MFP1  PA6  setting for I2C1_SDA        */
#define I2C1_SDA_PA13             SYS_GPA_MFP3_PA13MFP_I2C1_SDA        /*!< GPA_MFP3  PA13 setting for I2C1_SDA        */
#define I2C1_SDA_PB0              SYS_GPB_MFP0_PB0MFP_I2C1_SDA         /*!< GPB_MFP0  PB0  setting for I2C1_SDA        */
#define I2C1_SDA_PB2              SYS_GPB_MFP0_PB2MFP_I2C1_SDA         /*!< GPB_MFP0  PB2  setting for I2C1_SDA        */
#define I2C1_SDA_PB10             SYS_GPB_MFP2_PB10MFP_I2C1_SDA        /*!< GPB_MFP2  PB10 setting for I2C1_SDA        */
#define I2C1_SDA_PC4              SYS_GPC_MFP1_PC4MFP_I2C1_SDA         /*!< GPC_MFP1  PC4  setting for I2C1_SDA        */
#define I2C1_SDA_PD4              SYS_GPD_MFP1_PD4MFP_I2C1_SDA         /*!< GPD_MFP1  PD4  setting for I2C1_SDA        */
#define I2C1_SDA_PE0              SYS_GPE_MFP0_PE0MFP_I2C1_SDA         /*!< GPE_MFP0  PE0  setting for I2C1_SDA        */
#define I2C1_SDA_PE15             SYS_GPE_MFP3_PE15MFP_I2C1_SDA        /*!< GPE_MFP3  PE15 setting for I2C1_SDA        */
#define I2C1_SDA_PF1              SYS_GPF_MFP0_PF1MFP_I2C1_SDA         /*!< GPF_MFP0  PF1  setting for I2C1_SDA        */
#define I2C1_SDA_PG3              SYS_GPG_MFP0_PG3MFP_I2C1_SDA         /*!< GPG_MFP0  PG3  setting for I2C1_SDA        */
#define I2C1_SMBAL_PB9            SYS_GPB_MFP2_PB9MFP_I2C1_SMBAL       /*!< GPB_MFP2  PB9  setting for I2C1_SMBAL      */
#define I2C1_SMBAL_PC7            SYS_GPC_MFP1_PC7MFP_I2C1_SMBAL       /*!< GPC_MFP1  PC7  setting for I2C1_SMBAL      */
#define I2C1_SMBAL_PH8            SYS_GPH_MFP2_PH8MFP_I2C1_SMBAL       /*!< GPH_MFP2  PH8  setting for I2C1_SMBAL      */
#define I2C1_SMBSUS_PB8           SYS_GPB_MFP2_PB8MFP_I2C1_SMBSUS      /*!< GPB_MFP2  PB8  setting for I2C1_SMBSUS     */
#define I2C1_SMBSUS_PC6           SYS_GPC_MFP1_PC6MFP_I2C1_SMBSUS      /*!< GPC_MFP1  PC6  setting for I2C1_SMBSUS     */
#define I2C1_SMBSUS_PH9           SYS_GPH_MFP2_PH9MFP_I2C1_SMBSUS      /*!< GPH_MFP2  PH9  setting for I2C1_SMBSUS     */

/* I2C2 MFP Pins */
#define I2C2_SCL_PA1              SYS_GPA_MFP0_PA1MFP_I2C2_SCL         /*!< GPA_MFP0  PA1  setting for I2C2_SCL        */
#define I2C2_SCL_PA11             SYS_GPA_MFP2_PA11MFP_I2C2_SCL        /*!< GPA_MFP2  PA11 setting for I2C2_SCL        */
#define I2C2_SCL_PA14             SYS_GPA_MFP3_PA14MFP_I2C2_SCL        /*!< GPA_MFP3  PA14 setting for I2C2_SCL        */
#define I2C2_SCL_PB13             SYS_GPB_MFP3_PB13MFP_I2C2_SCL        /*!< GPB_MFP3  PB13 setting for I2C2_SCL        */
#define I2C2_SCL_PD1              SYS_GPD_MFP0_PD1MFP_I2C2_SCL         /*!< GPD_MFP0  PD1  setting for I2C2_SCL        */
#define I2C2_SCL_PD9              SYS_GPD_MFP2_PD9MFP_I2C2_SCL         /*!< GPD_MFP2  PD9  setting for I2C2_SCL        */
#define I2C2_SCL_PH8              SYS_GPH_MFP2_PH8MFP_I2C2_SCL         /*!< GPH_MFP2  PH8  setting for I2C2_SCL        */
#define I2C2_SDA_PA0              SYS_GPA_MFP0_PA0MFP_I2C2_SDA         /*!< GPA_MFP0  PA0  setting for I2C2_SDA        */
#define I2C2_SDA_PA10             SYS_GPA_MFP2_PA10MFP_I2C2_SDA        /*!< GPA_MFP2  PA10 setting for I2C2_SDA        */
#define I2C2_SDA_PA15             SYS_GPA_MFP3_PA15MFP_I2C2_SDA        /*!< GPA_MFP3  PA15 setting for I2C2_SDA        */
#define I2C2_SDA_PB12             SYS_GPB_MFP3_PB12MFP_I2C2_SDA        /*!< GPB_MFP3  PB12 setting for I2C2_SDA        */
#define I2C2_SDA_PD0              SYS_GPD_MFP0_PD0MFP_I2C2_SDA         /*!< GPD_MFP0  PD0  setting for I2C2_SDA        */
#define I2C2_SDA_PD8              SYS_GPD_MFP2_PD8MFP_I2C2_SDA         /*!< GPD_MFP2  PD8  setting for I2C2_SDA        */
#define I2C2_SDA_PH9              SYS_GPH_MFP2_PH9MFP_I2C2_SDA         /*!< GPH_MFP2  PH9  setting for I2C2_SDA        */
#define I2C2_SMBAL_PB15           SYS_GPB_MFP3_PB15MFP_I2C2_SMBAL      /*!< GPB_MFP3  PB15 setting for I2C2_SMBAL      */
#define I2C2_SMBAL_PF3            SYS_GPF_MFP0_PF3MFP_I2C2_SMBAL       /*!< GPF_MFP0  PF3  setting for I2C2_SMBAL      */
#define I2C2_SMBSUS_PB14          SYS_GPB_MFP3_PB14MFP_I2C2_SMBSUS     /*!< GPB_MFP3  PB14 setting for I2C2_SMBSUS     */
#define I2C2_SMBSUS_PF2           SYS_GPF_MFP0_PF2MFP_I2C2_SMBSUS      /*!< GPF_MFP0  PF2  setting for I2C2_SMBSUS     */

/* I2S0 MFP Pins */
#define I2S0_BCLK_PA12            SYS_GPA_MFP3_PA12MFP_I2S0_BCLK       /*!< GPA_MFP3  PA12 setting for I2S0_BCLK       */
#define I2S0_BCLK_PB5             SYS_GPB_MFP1_PB5MFP_I2S0_BCLK        /*!< GPB_MFP1  PB5  setting for I2S0_BCLK       */
#define I2S0_BCLK_PC4             SYS_GPC_MFP1_PC4MFP_I2S0_BCLK        /*!< GPC_MFP1  PC4  setting for I2S0_BCLK       */
#define I2S0_BCLK_PE1             SYS_GPE_MFP0_PE1MFP_I2S0_BCLK        /*!< GPE_MFP0  PE1  setting for I2S0_BCLK       */
#define I2S0_BCLK_PE3             SYS_GPE_MFP0_PE3MFP_I2S0_BCLK        /*!< GPE_MFP0  PE3  setting for I2S0_BCLK       */
#define I2S0_BCLK_PE8             SYS_GPE_MFP2_PE8MFP_I2S0_BCLK        /*!< GPE_MFP2  PE8  setting for I2S0_BCLK       */
#define I2S0_BCLK_PF10            SYS_GPF_MFP2_PF10MFP_I2S0_BCLK       /*!< GPF_MFP2  PF10 setting for I2S0_BCLK       */
#define I2S0_DI_PA14              SYS_GPA_MFP3_PA14MFP_I2S0_DI         /*!< GPA_MFP3  PA14 setting for I2S0_DI         */
#define I2S0_DI_PB3               SYS_GPB_MFP0_PB3MFP_I2S0_DI          /*!< GPB_MFP0  PB3  setting for I2S0_DI         */
#define I2S0_DI_PC2               SYS_GPC_MFP0_PC2MFP_I2S0_DI          /*!< GPC_MFP0  PC2  setting for I2S0_DI         */
#define I2S0_DI_PE10              SYS_GPE_MFP2_PE10MFP_I2S0_DI         /*!< GPE_MFP2  PE10 setting for I2S0_DI         */
#define I2S0_DI_PF8               SYS_GPF_MFP2_PF8MFP_I2S0_DI          /*!< GPF_MFP2  PF8  setting for I2S0_DI         */
#define I2S0_DI_PH8               SYS_GPH_MFP2_PH8MFP_I2S0_DI          /*!< GPH_MFP2  PH8  setting for I2S0_DI         */
#define I2S0_DO_PA15              SYS_GPA_MFP3_PA15MFP_I2S0_DO         /*!< GPA_MFP3  PA15 setting for I2S0_DO         */
#define I2S0_DO_PB2               SYS_GPB_MFP0_PB2MFP_I2S0_DO          /*!< GPB_MFP0  PB2  setting for I2S0_DO         */
#define I2S0_DO_PC1               SYS_GPC_MFP0_PC1MFP_I2S0_DO          /*!< GPC_MFP0  PC1  setting for I2S0_DO         */
#define I2S0_DO_PE11              SYS_GPE_MFP2_PE11MFP_I2S0_DO         /*!< GPE_MFP2  PE11 setting for I2S0_DO         */
#define I2S0_DO_PF0               SYS_GPF_MFP0_PF0MFP_I2S0_DO          /*!< GPF_MFP0  PF0  setting for I2S0_DO         */
#define I2S0_DO_PF7               SYS_GPF_MFP1_PF7MFP_I2S0_DO          /*!< GPF_MFP1  PF7  setting for I2S0_DO         */
#define I2S0_DO_PH9               SYS_GPH_MFP2_PH9MFP_I2S0_DO          /*!< GPH_MFP2  PH9  setting for I2S0_DO         */
#define I2S0_LRCK_PB1             SYS_GPB_MFP0_PB1MFP_I2S0_LRCK        /*!< GPB_MFP0  PB1  setting for I2S0_LRCK       */
#define I2S0_LRCK_PC0             SYS_GPC_MFP0_PC0MFP_I2S0_LRCK        /*!< GPC_MFP0  PC0  setting for I2S0_LRCK       */
#define I2S0_LRCK_PE12            SYS_GPE_MFP3_PE12MFP_I2S0_LRCK       /*!< GPE_MFP3  PE12 setting for I2S0_LRCK       */
#define I2S0_LRCK_PF1             SYS_GPF_MFP0_PF1MFP_I2S0_LRCK        /*!< GPF_MFP0  PF1  setting for I2S0_LRCK       */
#define I2S0_LRCK_PF6             SYS_GPF_MFP1_PF6MFP_I2S0_LRCK        /*!< GPF_MFP1  PF6  setting for I2S0_LRCK       */
#define I2S0_LRCK_PH10            SYS_GPH_MFP2_PH10MFP_I2S0_LRCK       /*!< GPH_MFP2  PH10 setting for I2S0_LRCK       */
#define I2S0_MCLK_PA13            SYS_GPA_MFP3_PA13MFP_I2S0_MCLK       /*!< GPA_MFP3  PA13 setting for I2S0_MCLK       */
#define I2S0_MCLK_PB4             SYS_GPB_MFP1_PB4MFP_I2S0_MCLK        /*!< GPB_MFP1  PB4  setting for I2S0_MCLK       */
#define I2S0_MCLK_PC3             SYS_GPC_MFP0_PC3MFP_I2S0_MCLK        /*!< GPC_MFP0  PC3  setting for I2S0_MCLK       */
#define I2S0_MCLK_PE0             SYS_GPE_MFP0_PE0MFP_I2S0_MCLK        /*!< GPE_MFP0  PE0  setting for I2S0_MCLK       */
#define I2S0_MCLK_PE2             SYS_GPE_MFP0_PE2MFP_I2S0_MCLK        /*!< GPE_MFP0  PE2  setting for I2S0_MCLK       */
#define I2S0_MCLK_PE9             SYS_GPE_MFP2_PE9MFP_I2S0_MCLK        /*!< GPE_MFP2  PE9  setting for I2S0_MCLK       */
#define I2S0_MCLK_PF9             SYS_GPF_MFP2_PF9MFP_I2S0_MCLK        /*!< GPF_MFP2  PF9  setting for I2S0_MCLK       */

/* I3C0 MFP Pins */
#define I3C0_PUPEN_PA2            SYS_GPA_MFP0_PA2MFP_I3C0_PUPEN       /*!< GPA_MFP0  PA2  setting for I3C0_PUPEN      */
#define I3C0_PUPEN_PC5            SYS_GPC_MFP1_PC5MFP_I3C0_PUPEN       /*!< GPC_MFP1  PC5  setting for I3C0_PUPEN      */
#define I3C0_PUPEN_PC9            SYS_GPC_MFP2_PC9MFP_I3C0_PUPEN       /*!< GPC_MFP2  PC9  setting for I3C0_PUPEN      */
#define I3C0_PUPEN_PH10           SYS_GPH_MFP2_PH10MFP_I3C0_PUPEN      /*!< GPH_MFP2  PH10 setting for I3C0_PUPEN      */
#define I3C0_SCL_PA1              SYS_GPA_MFP0_PA1MFP_I3C0_SCL         /*!< GPA_MFP0  PA1  setting for I3C0_SCL        */
#define I3C0_SCL_PA5              SYS_GPA_MFP1_PA5MFP_I3C0_SCL         /*!< GPA_MFP1  PA5  setting for I3C0_SCL        */
#define I3C0_SCL_PB1              SYS_GPB_MFP0_PB1MFP_I3C0_SCL         /*!< GPB_MFP0  PB1  setting for I3C0_SCL        */
#define I3C0_SCL_PF0              SYS_GPF_MFP0_PF0MFP_I3C0_SCL         /*!< GPF_MFP0  PF0  setting for I3C0_SCL        */
#define I3C0_SCL_PH8              SYS_GPH_MFP2_PH8MFP_I3C0_SCL         /*!< GPH_MFP2  PH8  setting for I3C0_SCL        */
#define I3C0_SDA_PA0              SYS_GPA_MFP0_PA0MFP_I3C0_SDA         /*!< GPA_MFP0  PA0  setting for I3C0_SDA        */
#define I3C0_SDA_PA4              SYS_GPA_MFP1_PA4MFP_I3C0_SDA         /*!< GPA_MFP1  PA4  setting for I3C0_SDA        */
#define I3C0_SDA_PB0              SYS_GPB_MFP0_PB0MFP_I3C0_SDA         /*!< GPB_MFP0  PB0  setting for I3C0_SDA        */
#define I3C0_SDA_PF1              SYS_GPF_MFP0_PF1MFP_I3C0_SDA         /*!< GPF_MFP0  PF1  setting for I3C0_SDA        */
#define I3C0_SDA_PH9              SYS_GPH_MFP2_PH9MFP_I3C0_SDA         /*!< GPH_MFP2  PH9  setting for I3C0_SDA        */

/* ICE MFP Pins */
#define ICE_CLK_PF1               SYS_GPF_MFP0_PF1MFP_ICE_CLK          /*!< GPF_MFP0  PF1  setting for ICE_CLK         */
#define ICE_DAT_PF0               SYS_GPF_MFP0_PF0MFP_ICE_DAT          /*!< GPF_MFP0  PF0  setting for ICE_DAT         */

/* INT0 MFP Pins */
#define INT0_PA6                  SYS_GPA_MFP1_PA6MFP_INT0             /*!< GPA_MFP1  PA6  setting for INT0            */
#define INT0_PB5                  SYS_GPB_MFP1_PB5MFP_INT0             /*!< GPB_MFP1  PB5  setting for INT0            */

/* INT1 MFP Pins */
#define INT1_PA7                  SYS_GPA_MFP1_PA7MFP_INT1             /*!< GPA_MFP1  PA7  setting for INT1            */
#define INT1_PB4                  SYS_GPB_MFP1_PB4MFP_INT1             /*!< GPB_MFP1  PB4  setting for INT1            */

/* INT2 MFP Pins */
#define INT2_PB3                  SYS_GPB_MFP0_PB3MFP_INT2             /*!< GPB_MFP0  PB3  setting for INT2            */
#define INT2_PC6                  SYS_GPC_MFP1_PC6MFP_INT2             /*!< GPC_MFP1  PC6  setting for INT2            */

/* INT3 MFP Pins */
#define INT3_PB2                  SYS_GPB_MFP0_PB2MFP_INT3             /*!< GPB_MFP0  PB2  setting for INT3            */
#define INT3_PC7                  SYS_GPC_MFP1_PC7MFP_INT3             /*!< GPC_MFP1  PC7  setting for INT3            */

/* INT4 MFP Pins */
#define INT4_PA8                  SYS_GPA_MFP2_PA8MFP_INT4             /*!< GPA_MFP2  PA8  setting for INT4            */
#define INT4_PB6                  SYS_GPB_MFP1_PB6MFP_INT4             /*!< GPB_MFP1  PB6  setting for INT4            */

/* INT5 MFP Pins */
#define INT5_PB7                  SYS_GPB_MFP1_PB7MFP_INT5             /*!< GPB_MFP1  PB7  setting for INT5            */
#define INT5_PD12                 SYS_GPD_MFP3_PD12MFP_INT5            /*!< GPD_MFP3  PD12 setting for INT5            */

/* INT6 MFP Pins */
#define INT6_PB8                  SYS_GPB_MFP2_PB8MFP_INT6             /*!< GPB_MFP2  PB8  setting for INT6            */
#define INT6_PD11                 SYS_GPD_MFP2_PD11MFP_INT6            /*!< GPD_MFP2  PD11 setting for INT6            */

/* INT7 MFP Pins */
#define INT7_PB9                  SYS_GPB_MFP2_PB9MFP_INT7             /*!< GPB_MFP2  PB9  setting for INT7            */
#define INT7_PD10                 SYS_GPD_MFP2_PD10MFP_INT7            /*!< GPD_MFP2  PD10 setting for INT7            */

/* LLSI0 MFP Pins */
#define LLSI0_OUT_PB15            SYS_GPB_MFP3_PB15MFP_LLSI0_OUT       /*!< GPB_MFP3  PB15 setting for LLSI0_OUT       */
#define LLSI0_OUT_PC5             SYS_GPC_MFP1_PC5MFP_LLSI0_OUT        /*!< GPC_MFP1  PC5  setting for LLSI0_OUT       */

/* LLSI1 MFP Pins */
#define LLSI1_OUT_PB14            SYS_GPB_MFP3_PB14MFP_LLSI1_OUT       /*!< GPB_MFP3  PB14 setting for LLSI1_OUT       */
#define LLSI1_OUT_PC4             SYS_GPC_MFP1_PC4MFP_LLSI1_OUT        /*!< GPC_MFP1  PC4  setting for LLSI1_OUT       */

/* LLSI2 MFP Pins */
#define LLSI2_OUT_PB13            SYS_GPB_MFP3_PB13MFP_LLSI2_OUT       /*!< GPB_MFP3  PB13 setting for LLSI2_OUT       */
#define LLSI2_OUT_PC3             SYS_GPC_MFP0_PC3MFP_LLSI2_OUT        /*!< GPC_MFP0  PC3  setting for LLSI2_OUT       */

/* LLSI3 MFP Pins */
#define LLSI3_OUT_PB12            SYS_GPB_MFP3_PB12MFP_LLSI3_OUT       /*!< GPB_MFP3  PB12 setting for LLSI3_OUT       */
#define LLSI3_OUT_PC2             SYS_GPC_MFP0_PC2MFP_LLSI3_OUT        /*!< GPC_MFP0  PC2  setting for LLSI3_OUT       */
#define LLSI3_OUT_PF14            SYS_GPF_MFP3_PF14MFP_LLSI3_OUT       /*!< GPF_MFP3  PF14 setting for LLSI3_OUT       */

/* LLSI4 MFP Pins */
#define LLSI4_OUT_PA3             SYS_GPA_MFP0_PA3MFP_LLSI4_OUT        /*!< GPA_MFP0  PA3  setting for LLSI4_OUT       */
#define LLSI4_OUT_PB5             SYS_GPB_MFP1_PB5MFP_LLSI4_OUT        /*!< GPB_MFP1  PB5  setting for LLSI4_OUT       */

/* LLSI5 MFP Pins */
#define LLSI5_OUT_PA2             SYS_GPA_MFP0_PA2MFP_LLSI5_OUT        /*!< GPA_MFP0  PA2  setting for LLSI5_OUT       */
#define LLSI5_OUT_PB4             SYS_GPB_MFP1_PB4MFP_LLSI5_OUT        /*!< GPB_MFP1  PB4  setting for LLSI5_OUT       */

/* LLSI6 MFP Pins */
#define LLSI6_OUT_PA1             SYS_GPA_MFP0_PA1MFP_LLSI6_OUT        /*!< GPA_MFP0  PA1  setting for LLSI6_OUT       */
#define LLSI6_OUT_PB3             SYS_GPB_MFP0_PB3MFP_LLSI6_OUT        /*!< GPB_MFP0  PB3  setting for LLSI6_OUT       */

/* LLSI7 MFP Pins */
#define LLSI7_OUT_PA0             SYS_GPA_MFP0_PA0MFP_LLSI7_OUT        /*!< GPA_MFP0  PA0  setting for LLSI7_OUT       */
#define LLSI7_OUT_PB2             SYS_GPB_MFP0_PB2MFP_LLSI7_OUT        /*!< GPB_MFP0  PB2  setting for LLSI7_OUT       */
#define LLSI7_OUT_PC2             SYS_GPC_MFP0_PC2MFP_LLSI7_OUT        /*!< GPC_MFP0  PC2  setting for LLSI7_OUT       */

/* LLSI8 MFP Pins */
#define LLSI8_OUT_PB11            SYS_GPB_MFP2_PB11MFP_LLSI8_OUT       /*!< GPB_MFP2  PB11 setting for LLSI8_OUT       */
#define LLSI8_OUT_PC1             SYS_GPC_MFP0_PC1MFP_LLSI8_OUT        /*!< GPC_MFP0  PC1  setting for LLSI8_OUT       */

/* LLSI9 MFP Pins */
#define LLSI9_OUT_PB10            SYS_GPB_MFP2_PB10MFP_LLSI9_OUT       /*!< GPB_MFP2  PB10 setting for LLSI9_OUT       */
#define LLSI9_OUT_PC0             SYS_GPC_MFP0_PC0MFP_LLSI9_OUT        /*!< GPC_MFP0  PC0  setting for LLSI9_OUT       */

/* QSPI0 MFP Pins */
#define QSPI0_CLK_PA2             SYS_GPA_MFP0_PA2MFP_QSPI0_CLK        /*!< GPA_MFP0  PA2  setting for QSPI0_CLK       */
#define QSPI0_CLK_PB12            SYS_GPB_MFP3_PB12MFP_QSPI0_CLK       /*!< GPB_MFP3  PB12 setting for QSPI0_CLK       */
#define QSPI0_CLK_PC2             SYS_GPC_MFP0_PC2MFP_QSPI0_CLK        /*!< GPC_MFP0  PC2  setting for QSPI0_CLK       */
#define QSPI0_CLK_PC14            SYS_GPC_MFP3_PC14MFP_QSPI0_CLK       /*!< GPC_MFP3  PC14 setting for QSPI0_CLK       */
#define QSPI0_CLK_PF2             SYS_GPF_MFP0_PF2MFP_QSPI0_CLK        /*!< GPF_MFP0  PF2  setting for QSPI0_CLK       */
#define QSPI0_CLK_PH8             SYS_GPH_MFP2_PH8MFP_QSPI0_CLK        /*!< GPH_MFP2  PH8  setting for QSPI0_CLK       */
#define QSPI0_MISO0_PA1           SYS_GPA_MFP0_PA1MFP_QSPI0_MISO0      /*!< GPA_MFP0  PA1  setting for QSPI0_MISO0     */
#define QSPI0_MISO0_PC1           SYS_GPC_MFP0_PC1MFP_QSPI0_MISO0      /*!< GPC_MFP0  PC1  setting for QSPI0_MISO0     */
#define QSPI0_MISO0_PE1           SYS_GPE_MFP0_PE1MFP_QSPI0_MISO0      /*!< GPE_MFP0  PE1  setting for QSPI0_MISO0     */
#define QSPI0_MISO0_PE7           SYS_GPE_MFP1_PE7MFP_QSPI0_MISO0      /*!< GPE_MFP1  PE7  setting for QSPI0_MISO0     */
#define QSPI0_MISO1_PA5           SYS_GPA_MFP1_PA5MFP_QSPI0_MISO1      /*!< GPA_MFP1  PA5  setting for QSPI0_MISO1     */
#define QSPI0_MISO1_PB1           SYS_GPB_MFP0_PB1MFP_QSPI0_MISO1      /*!< GPB_MFP0  PB1  setting for QSPI0_MISO1     */
#define QSPI0_MISO1_PC5           SYS_GPC_MFP1_PC5MFP_QSPI0_MISO1      /*!< GPC_MFP1  PC5  setting for QSPI0_MISO1     */
#define QSPI0_MISO1_PH10          SYS_GPH_MFP2_PH10MFP_QSPI0_MISO1     /*!< GPH_MFP2  PH10 setting for QSPI0_MISO1     */
#define QSPI0_MOSI0_PA0           SYS_GPA_MFP0_PA0MFP_QSPI0_MOSI0      /*!< GPA_MFP0  PA0  setting for QSPI0_MOSI0     */
#define QSPI0_MOSI0_PC0           SYS_GPC_MFP0_PC0MFP_QSPI0_MOSI0      /*!< GPC_MFP0  PC0  setting for QSPI0_MOSI0     */
#define QSPI0_MOSI0_PE0           SYS_GPE_MFP0_PE0MFP_QSPI0_MOSI0      /*!< GPE_MFP0  PE0  setting for QSPI0_MOSI0     */
#define QSPI0_MOSI0_PE6           SYS_GPE_MFP1_PE6MFP_QSPI0_MOSI0      /*!< GPE_MFP1  PE6  setting for QSPI0_MOSI0     */
#define QSPI0_MOSI1_PA4           SYS_GPA_MFP1_PA4MFP_QSPI0_MOSI1      /*!< GPA_MFP1  PA4  setting for QSPI0_MOSI1     */
#define QSPI0_MOSI1_PB0           SYS_GPB_MFP0_PB0MFP_QSPI0_MOSI1      /*!< GPB_MFP0  PB0  setting for QSPI0_MOSI1     */
#define QSPI0_MOSI1_PC4           SYS_GPC_MFP1_PC4MFP_QSPI0_MOSI1      /*!< GPC_MFP1  PC4  setting for QSPI0_MOSI1     */
#define QSPI0_MOSI1_PH11          SYS_GPH_MFP2_PH11MFP_QSPI0_MOSI1     /*!< GPH_MFP2  PH11 setting for QSPI0_MOSI1     */
#define QSPI0_SS_PA3              SYS_GPA_MFP0_PA3MFP_QSPI0_SS         /*!< GPA_MFP0  PA3  setting for QSPI0_SS        */
#define QSPI0_SS_PC3              SYS_GPC_MFP0_PC3MFP_QSPI0_SS         /*!< GPC_MFP0  PC3  setting for QSPI0_SS        */
#define QSPI0_SS_PH9              SYS_GPH_MFP2_PH9MFP_QSPI0_SS         /*!< GPH_MFP2  PH9  setting for QSPI0_SS        */

/* SD0 MFP Pins */
#define SD0_CLK_PB1               SYS_GPB_MFP0_PB1MFP_SD0_CLK          /*!< GPB_MFP0  PB1  setting for SD0_CLK         */
#define SD0_CLK_PE6               SYS_GPE_MFP1_PE6MFP_SD0_CLK          /*!< GPE_MFP1  PE6  setting for SD0_CLK         */
#define SD0_CMD_PB0               SYS_GPB_MFP0_PB0MFP_SD0_CMD          /*!< GPB_MFP0  PB0  setting for SD0_CMD         */
#define SD0_CMD_PE7               SYS_GPE_MFP1_PE7MFP_SD0_CMD          /*!< GPE_MFP1  PE7  setting for SD0_CMD         */
#define SD0_DAT0_PB2              SYS_GPB_MFP0_PB2MFP_SD0_DAT0         /*!< GPB_MFP0  PB2  setting for SD0_DAT0        */
#define SD0_DAT0_PE2              SYS_GPE_MFP0_PE2MFP_SD0_DAT0         /*!< GPE_MFP0  PE2  setting for SD0_DAT0        */
#define SD0_DAT1_PB3              SYS_GPB_MFP0_PB3MFP_SD0_DAT1         /*!< GPB_MFP0  PB3  setting for SD0_DAT1        */
#define SD0_DAT1_PE3              SYS_GPE_MFP0_PE3MFP_SD0_DAT1         /*!< GPE_MFP0  PE3  setting for SD0_DAT1        */
#define SD0_DAT2_PB4              SYS_GPB_MFP1_PB4MFP_SD0_DAT2         /*!< GPB_MFP1  PB4  setting for SD0_DAT2        */
#define SD0_DAT2_PE4              SYS_GPE_MFP1_PE4MFP_SD0_DAT2         /*!< GPE_MFP1  PE4  setting for SD0_DAT2        */
#define SD0_DAT3_PB5              SYS_GPB_MFP1_PB5MFP_SD0_DAT3         /*!< GPB_MFP1  PB5  setting for SD0_DAT3        */
#define SD0_DAT3_PE5              SYS_GPE_MFP1_PE5MFP_SD0_DAT3         /*!< GPE_MFP1  PE5  setting for SD0_DAT3        */
#define SD0_nCD_PB12              SYS_GPB_MFP3_PB12MFP_SD0_nCD         /*!< GPB_MFP3  PB12 setting for SD0_nCD         */
#define SD0_nCD_PD13              SYS_GPD_MFP3_PD13MFP_SD0_nCD         /*!< GPD_MFP3  PD13 setting for SD0_nCD         */

/* PDCI MFP Pins */
#define PDCI_G0_RX0_PC6           SYS_GPC_MFP1_PC6MFP_PDCI_G0_RX0      /*!< GPC_MFP1  PC6  setting for PDCI_G0_RX0     */
#define PDCI_G0_RX0_PC14          SYS_GPC_MFP3_PC14MFP_PDCI_G0_RX0     /*!< GPC_MFP3  PC14 setting for PDCI_G0_RX0     */
#define PDCI_G0_RX1_PB1           SYS_GPB_MFP0_PB1MFP_PDCI_G0_RX1      /*!< GPB_MFP0  PB1  setting for PDCI_G0_RX1     */
#define PDCI_G0_CLK_PB1           SYS_GPB_MFP0_PB1MFP_PDCI_G0_CLK      /*!< GPB_MFP0  PB1  setting for PDCI_G0_CLK     */
#define PDCI_G0_CLK_PC6           SYS_GPC_MFP1_PC6MFP_PDCI_G0_CLK      /*!< GPC_MFP1  PC6  setting for PDCI_G0_CLK     */
#define PDCI_G0_TX0_PB5           SYS_GPB_MFP1_PB5MFP_PDCI_G0_TX0      /*!< GPB_MFP1  PB5  setting for PDCI_G0_TX0     */
#define PDCI_G0_TX2_PB3           SYS_GPB_MFP0_PB3MFP_PDCI_G0_TX2      /*!< GPB_MFP0  PB3  setting for PDCI_G0_TX2     */
#define PDCI_G0_TX1_PB4           SYS_GPB_MFP1_PB4MFP_PDCI_G0_TX1      /*!< GPB_MFP1  PB4  setting for PDCI_G0_TX1     */
#define PDCI_G0_TX3_PB2           SYS_GPB_MFP0_PB2MFP_PDCI_G0_TX3      /*!< GPB_MFP0  PB2  setting for PDCI_G0_TX3     */
#define PDCI_G1_TX0_PB0           SYS_GPB_MFP0_PB0MFP_PDCI_G1_TX0      /*!< GPB_MFP0  PB0  setting for PDCI_G1_TX0     */
#define PDCI_G1_TX3_PA9           SYS_GPA_MFP2_PA9MFP_PDCI_G1_TX3      /*!< GPA_MFP2  PA9  setting for PDCI_G1_TX3     */
#define PDCI_G1_CLK_PA8           SYS_GPA_MFP2_PA8MFP_PDCI_G1_CLK      /*!< GPA_MFP2  PA8  setting for PDCI_G1_CLK     */
#define PDCI_G1_TX2_PA10          SYS_GPA_MFP2_PA10MFP_PDCI_G1_TX2     /*!< GPA_MFP2  PA10 setting for PDCI_G1_TX2     */
#define PDCI_G1_RX0_PB15          SYS_GPB_MFP3_PB15MFP_PDCI_G1_RX0     /*!< GPB_MFP3  PB15 setting for PDCI_G1_RX0     */
#define PDCI_G1_TX1_PA11          SYS_GPA_MFP2_PA11MFP_PDCI_G1_TX1     /*!< GPA_MFP2  PA11 setting for PDCI_G1_TX1     */
#define PDCI_G1_RX1_PA8           SYS_GPA_MFP2_PA8MFP_PDCI_G1_RX1      /*!< GPA_MFP2  PA8  setting for PDCI_G1_RX1     */
#define PDCI_G2_CLK_PF15          SYS_GPF_MFP3_PF15MFP_PDCI_G2_CLK     /*!< GPF_MFP3  PF15 setting for PDCI_G2_CLK     */
#define PDCI_G2_TX3_PA6           SYS_GPA_MFP1_PA6MFP_PDCI_G2_TX3      /*!< GPA_MFP1  PA6  setting for PDCI_G2_TX3     */
#define PDCI_G2_TX3_PF2           SYS_GPF_MFP0_PF2MFP_PDCI_G2_TX3      /*!< GPF_MFP0  PF2  setting for PDCI_G2_TX3     */
#define PDCI_G2_RX0_PB14          SYS_GPB_MFP3_PB14MFP_PDCI_G2_RX0     /*!< GPB_MFP3  PB14 setting for PDCI_G2_RX0     */
#define PDCI_G2_TX1_PF4           SYS_GPF_MFP1_PF4MFP_PDCI_G2_TX1      /*!< GPF_MFP1  PF4  setting for PDCI_G2_TX1     */
#define PDCI_G2_RX1_PF15          SYS_GPF_MFP3_PF15MFP_PDCI_G2_RX1     /*!< GPF_MFP3  PF15 setting for PDCI_G2_RX1     */
#define PDCI_G2_TX2_PA7           SYS_GPA_MFP1_PA7MFP_PDCI_G2_TX2      /*!< GPA_MFP1  PA7  setting for PDCI_G2_TX2     */
#define PDCI_G2_TX2_PF3           SYS_GPF_MFP0_PF3MFP_PDCI_G2_TX2      /*!< GPF_MFP0  PF3  setting for PDCI_G2_TX2     */
#define PDCI_G2_TX0_PF5           SYS_GPF_MFP1_PF5MFP_PDCI_G2_TX0      /*!< GPF_MFP1  PF5  setting for PDCI_G2_TX0     */
#define PDCI_G3_TX0_PA4           SYS_GPA_MFP1_PA4MFP_PDCI_G3_TX0      /*!< GPA_MFP1  PA4  setting for PDCI_G3_TX0     */
#define PDCI_G3_TX0_PB10          SYS_GPB_MFP2_PB10MFP_PDCI_G3_TX0     /*!< GPB_MFP2  PB10 setting for PDCI_G3_TX0     */
#define PDCI_G3_RX1_PA5           SYS_GPA_MFP1_PA5MFP_PDCI_G3_RX1      /*!< GPA_MFP1  PA5  setting for PDCI_G3_RX1     */
#define PDCI_G3_RX1_PB8           SYS_GPB_MFP2_PB8MFP_PDCI_G3_RX1      /*!< GPB_MFP2  PB8  setting for PDCI_G3_RX1     */
#define PDCI_G3_TX1_PA3           SYS_GPA_MFP0_PA3MFP_PDCI_G3_TX1      /*!< GPA_MFP0  PA3  setting for PDCI_G3_TX1     */
#define PDCI_G3_TX1_PB9           SYS_GPB_MFP2_PB9MFP_PDCI_G3_TX1      /*!< GPB_MFP2  PB9  setting for PDCI_G3_TX1     */
#define PDCI_G3_CLK_PA5           SYS_GPA_MFP1_PA5MFP_PDCI_G3_CLK      /*!< GPA_MFP1  PA5  setting for PDCI_G3_CLK     */
#define PDCI_G3_CLK_PB8           SYS_GPB_MFP2_PB8MFP_PDCI_G3_CLK      /*!< GPB_MFP2  PB8  setting for PDCI_G3_CLK     */
#define PDCI_G3_TX3_PA1           SYS_GPA_MFP0_PA1MFP_PDCI_G3_TX3      /*!< GPA_MFP0  PA1  setting for PDCI_G3_TX3     */
#define PDCI_G3_TX3_PB7           SYS_GPB_MFP1_PB7MFP_PDCI_G3_TX3      /*!< GPB_MFP1  PB7  setting for PDCI_G3_TX3     */
#define PDCI_G3_RX0_PB11          SYS_GPB_MFP2_PB11MFP_PDCI_G3_RX0     /*!< GPB_MFP2  PB11 setting for PDCI_G3_RX0     */
#define PDCI_G3_RX0_PB13          SYS_GPB_MFP3_PB13MFP_PDCI_G3_RX0     /*!< GPB_MFP3  PB13 setting for PDCI_G3_RX0     */
#define PDCI_G3_TX2_PA2           SYS_GPA_MFP0_PA2MFP_PDCI_G3_TX2      /*!< GPA_MFP0  PA2  setting for PDCI_G3_TX2     */
#define PDCI_G3_TX2_PB6           SYS_GPB_MFP1_PB6MFP_PDCI_G3_TX2      /*!< GPB_MFP1  PB6  setting for PDCI_G3_TX2     */
#define PDCI_G4_TX0_PC5           SYS_GPC_MFP1_PC5MFP_PDCI_G4_TX0      /*!< GPC_MFP1  PC5  setting for PDCI_G4_TX0     */
#define PDCI_G4_TX1_PC4           SYS_GPC_MFP1_PC4MFP_PDCI_G4_TX1      /*!< GPC_MFP1  PC4  setting for PDCI_G4_TX1     */
#define PDCI_G4_RX0_PF6           SYS_GPF_MFP1_PF6MFP_PDCI_G4_RX0      /*!< GPF_MFP1  PF6  setting for PDCI_G4_RX0     */
#define PDCI_G4_RX1_PC1           SYS_GPC_MFP0_PC1MFP_PDCI_G4_RX1      /*!< GPC_MFP0  PC1  setting for PDCI_G4_RX1     */
#define PDCI_G4_CLK_PC1           SYS_GPC_MFP0_PC1MFP_PDCI_G4_CLK      /*!< GPC_MFP0  PC1  setting for PDCI_G4_CLK     */
#define PDCI_G4_TX2_PC3           SYS_GPC_MFP0_PC3MFP_PDCI_G4_TX2      /*!< GPC_MFP0  PC3  setting for PDCI_G4_TX2     */
#define PDCI_G4_TX3_PC2           SYS_GPC_MFP0_PC2MFP_PDCI_G4_TX3      /*!< GPC_MFP0  PC2  setting for PDCI_G4_TX3     */
#define PDCI_G5_TX2_PA14          SYS_GPA_MFP3_PA14MFP_PDCI_G5_TX2     /*!< GPA_MFP3  PA14 setting for PDCI_G5_TX2     */
#define PDCI_G5_RX0_PF14          SYS_GPF_MFP3_PF14MFP_PDCI_G5_RX0     /*!< GPF_MFP3  PF14 setting for PDCI_G5_RX0     */
#define PDCI_G5_TX1_PA13          SYS_GPA_MFP3_PA13MFP_PDCI_G5_TX1     /*!< GPA_MFP3  PA13 setting for PDCI_G5_TX1     */
#define PDCI_G5_RX1_PC0           SYS_GPC_MFP0_PC0MFP_PDCI_G5_RX1      /*!< GPC_MFP0  PC0  setting for PDCI_G5_RX1     */
#define PDCI_G5_CLK_PC0           SYS_GPC_MFP0_PC0MFP_PDCI_G5_CLK      /*!< GPC_MFP0  PC0  setting for PDCI_G5_CLK     */
#define PDCI_G5_TX0_PA12          SYS_GPA_MFP3_PA12MFP_PDCI_G5_TX0     /*!< GPA_MFP3  PA12 setting for PDCI_G5_TX0     */
#define PDCI_G5_TX3_PA15          SYS_GPA_MFP3_PA15MFP_PDCI_G5_TX3     /*!< GPA_MFP3  PA15 setting for PDCI_G5_TX3     */

/* SPI0 MFP Pins */
#define SPI0_CLK_PA2              SYS_GPA_MFP0_PA2MFP_SPI0_CLK         /*!< GPA_MFP0  PA2  setting for SPI0_CLK        */
#define SPI0_CLK_PB6              SYS_GPB_MFP1_PB6MFP_SPI0_CLK         /*!< GPB_MFP1  PB6  setting for SPI0_CLK        */
#define SPI0_CLK_PB14             SYS_GPB_MFP3_PB14MFP_SPI0_CLK        /*!< GPB_MFP3  PB14 setting for SPI0_CLK        */
#define SPI0_CLK_PD2              SYS_GPD_MFP0_PD2MFP_SPI0_CLK         /*!< GPD_MFP0  PD2  setting for SPI0_CLK        */
#define SPI0_CLK_PF8              SYS_GPF_MFP2_PF8MFP_SPI0_CLK         /*!< GPF_MFP2  PF8  setting for SPI0_CLK        */
#define SPI0_CLK_PF0              SYS_GPF_MFP0_PF0MFP_SPI0_CLK         /*!< GPF_MFP0  PF0  setting for SPI0_CLK        */
#define SPI0_I2SMCLK_PA4          SYS_GPA_MFP1_PA4MFP_SPI0_I2SMCLK     /*!< GPA_MFP1  PA4  setting for SPI0_I2SMCLK    */
#define SPI0_I2SMCLK_PB0          SYS_GPB_MFP0_PB0MFP_SPI0_I2SMCLK     /*!< GPB_MFP0  PB0  setting for SPI0_I2SMCLK    */
#define SPI0_I2SMCLK_PB11         SYS_GPB_MFP2_PB11MFP_SPI0_I2SMCLK    /*!< GPB_MFP2  PB11 setting for SPI0_I2SMCLK    */
#define SPI0_I2SMCLK_PB12         SYS_GPB_MFP3_PB12MFP_SPI0_I2SMCLK    /*!< GPB_MFP3  PB12 setting for SPI0_I2SMCLK    */
#define SPI0_I2SMCLK_PC14         SYS_GPC_MFP3_PC14MFP_SPI0_I2SMCLK    /*!< GPC_MFP3  PC14 setting for SPI0_I2SMCLK    */
#define SPI0_I2SMCLK_PD13         SYS_GPD_MFP3_PD13MFP_SPI0_I2SMCLK    /*!< GPD_MFP3  PD13 setting for SPI0_I2SMCLK    */
#define SPI0_I2SMCLK_PD14         SYS_GPD_MFP3_PD14MFP_SPI0_I2SMCLK    /*!< GPD_MFP3  PD14 setting for SPI0_I2SMCLK    */
#define SPI0_I2SMCLK_PF10         SYS_GPF_MFP2_PF10MFP_SPI0_I2SMCLK    /*!< GPF_MFP2  PF10 setting for SPI0_I2SMCLK    */
#define SPI0_MISO_PA1             SYS_GPA_MFP0_PA1MFP_SPI0_MISO        /*!< GPA_MFP0  PA1  setting for SPI0_MISO       */
#define SPI0_MISO_PB13            SYS_GPB_MFP3_PB13MFP_SPI0_MISO       /*!< GPB_MFP3  PB13 setting for SPI0_MISO       */
#define SPI0_MISO_PD1             SYS_GPD_MFP0_PD1MFP_SPI0_MISO        /*!< GPD_MFP0  PD1  setting for SPI0_MISO       */
#define SPI0_MISO_PF7             SYS_GPF_MFP1_PF7MFP_SPI0_MISO        /*!< GPF_MFP1  PF7  setting for SPI0_MISO       */
#define SPI0_MOSI_PA0             SYS_GPA_MFP0_PA0MFP_SPI0_MOSI        /*!< GPA_MFP0  PA0  setting for SPI0_MOSI       */
#define SPI0_MOSI_PB12            SYS_GPB_MFP3_PB12MFP_SPI0_MOSI       /*!< GPB_MFP3  PB12 setting for SPI0_MOSI       */
#define SPI0_MOSI_PD0             SYS_GPD_MFP0_PD0MFP_SPI0_MOSI        /*!< GPD_MFP0  PD0  setting for SPI0_MOSI       */
#define SPI0_MOSI_PF6             SYS_GPF_MFP1_PF6MFP_SPI0_MOSI        /*!< GPF_MFP1  PF6  setting for SPI0_MOSI       */
#define SPI0_SS_PA3               SYS_GPA_MFP0_PA3MFP_SPI0_SS          /*!< GPA_MFP0  PA3  setting for SPI0_SS         */
#define SPI0_SS_PB7               SYS_GPB_MFP1_PB7MFP_SPI0_SS          /*!< GPB_MFP1  PB7  setting for SPI0_SS         */
#define SPI0_SS_PB15              SYS_GPB_MFP3_PB15MFP_SPI0_SS         /*!< GPB_MFP3  PB15 setting for SPI0_SS         */
#define SPI0_SS_PD3               SYS_GPD_MFP0_PD3MFP_SPI0_SS          /*!< GPD_MFP0  PD3  setting for SPI0_SS         */
#define SPI0_SS_PF9               SYS_GPF_MFP2_PF9MFP_SPI0_SS          /*!< GPF_MFP2  PF9  setting for SPI0_SS         */
#define SPI0_SS_PF1               SYS_GPF_MFP0_PF1MFP_SPI0_SS          /*!< GPF_MFP0  PF1  setting for SPI0_SS         */

/* SPI1 MFP Pins */
#define SPI1_CLK_PA7              SYS_GPA_MFP1_PA7MFP_SPI1_CLK         /*!< GPA_MFP1  PA7  setting for SPI1_CLK        */
#define SPI1_CLK_PB3              SYS_GPB_MFP0_PB3MFP_SPI1_CLK         /*!< GPB_MFP0  PB3  setting for SPI1_CLK        */
#define SPI1_CLK_PC1              SYS_GPC_MFP0_PC1MFP_SPI1_CLK         /*!< GPC_MFP0  PC1  setting for SPI1_CLK        */
#define SPI1_CLK_PD5              SYS_GPD_MFP1_PD5MFP_SPI1_CLK         /*!< GPD_MFP1  PD5  setting for SPI1_CLK        */
#define SPI1_CLK_PF3              SYS_GPF_MFP0_PF3MFP_SPI1_CLK         /*!< GPF_MFP0  PF3  setting for SPI1_CLK        */
#define SPI1_CLK_PH6              SYS_GPH_MFP1_PH6MFP_SPI1_CLK         /*!< GPH_MFP1  PH6  setting for SPI1_CLK        */
#define SPI1_CLK_PH8              SYS_GPH_MFP2_PH8MFP_SPI1_CLK         /*!< GPH_MFP2  PH8  setting for SPI1_CLK        */
#define SPI1_I2SMCLK_PA5          SYS_GPA_MFP1_PA5MFP_SPI1_I2SMCLK     /*!< GPA_MFP1  PA5  setting for SPI1_I2SMCLK    */
#define SPI1_I2SMCLK_PB1          SYS_GPB_MFP0_PB1MFP_SPI1_I2SMCLK     /*!< GPB_MFP0  PB1  setting for SPI1_I2SMCLK    */
#define SPI1_I2SMCLK_PC4          SYS_GPC_MFP1_PC4MFP_SPI1_I2SMCLK     /*!< GPC_MFP1  PC4  setting for SPI1_I2SMCLK    */
#define SPI1_I2SMCLK_PD13         SYS_GPD_MFP3_PD13MFP_SPI1_I2SMCLK    /*!< GPD_MFP3  PD13 setting for SPI1_I2SMCLK    */
#define SPI1_I2SMCLK_PH10         SYS_GPH_MFP2_PH10MFP_SPI1_I2SMCLK    /*!< GPH_MFP2  PH10 setting for SPI1_I2SMCLK    */
#define SPI1_MISO_PA5             SYS_GPA_MFP1_PA5MFP_SPI1_MISO        /*!< GPA_MFP1  PA5  setting for SPI1_MISO       */
#define SPI1_MISO_PB5             SYS_GPB_MFP1_PB5MFP_SPI1_MISO        /*!< GPB_MFP1  PB5  setting for SPI1_MISO       */
#define SPI1_MISO_PC3             SYS_GPC_MFP0_PC3MFP_SPI1_MISO        /*!< GPC_MFP0  PC3  setting for SPI1_MISO       */
#define SPI1_MISO_PC7             SYS_GPC_MFP1_PC7MFP_SPI1_MISO        /*!< GPC_MFP1  PC7  setting for SPI1_MISO       */
#define SPI1_MISO_PD7             SYS_GPD_MFP1_PD7MFP_SPI1_MISO        /*!< GPD_MFP1  PD7  setting for SPI1_MISO       */
#define SPI1_MISO_PE1             SYS_GPE_MFP0_PE1MFP_SPI1_MISO        /*!< GPE_MFP0  PE1  setting for SPI1_MISO       */
#define SPI1_MISO_PE5             SYS_GPE_MFP1_PE5MFP_SPI1_MISO        /*!< GPE_MFP1  PE5  setting for SPI1_MISO       */
#define SPI1_MISO_PH4             SYS_GPH_MFP1_PH4MFP_SPI1_MISO        /*!< GPH_MFP1  PH4  setting for SPI1_MISO       */
#define SPI1_MOSI_PA4             SYS_GPA_MFP1_PA4MFP_SPI1_MOSI        /*!< GPA_MFP1  PA4  setting for SPI1_MOSI       */
#define SPI1_MOSI_PB4             SYS_GPB_MFP1_PB4MFP_SPI1_MOSI        /*!< GPB_MFP1  PB4  setting for SPI1_MOSI       */
#define SPI1_MOSI_PC2             SYS_GPC_MFP0_PC2MFP_SPI1_MOSI        /*!< GPC_MFP0  PC2  setting for SPI1_MOSI       */
#define SPI1_MOSI_PC6             SYS_GPC_MFP1_PC6MFP_SPI1_MOSI        /*!< GPC_MFP1  PC6  setting for SPI1_MOSI       */
#define SPI1_MOSI_PD6             SYS_GPD_MFP1_PD6MFP_SPI1_MOSI        /*!< GPD_MFP1  PD6  setting for SPI1_MOSI       */
#define SPI1_MOSI_PE0             SYS_GPE_MFP0_PE0MFP_SPI1_MOSI        /*!< GPE_MFP0  PE0  setting for SPI1_MOSI       */
#define SPI1_MOSI_PE4             SYS_GPE_MFP1_PE4MFP_SPI1_MOSI        /*!< GPE_MFP1  PE4  setting for SPI1_MOSI       */
#define SPI1_MOSI_PH5             SYS_GPH_MFP1_PH5MFP_SPI1_MOSI        /*!< GPH_MFP1  PH5  setting for SPI1_MOSI       */
#define SPI1_SS_PA6               SYS_GPA_MFP1_PA6MFP_SPI1_SS          /*!< GPA_MFP1  PA6  setting for SPI1_SS         */
#define SPI1_SS_PB2               SYS_GPB_MFP0_PB2MFP_SPI1_SS          /*!< GPB_MFP0  PB2  setting for SPI1_SS         */
#define SPI1_SS_PC0               SYS_GPC_MFP0_PC0MFP_SPI1_SS          /*!< GPC_MFP0  PC0  setting for SPI1_SS         */
#define SPI1_SS_PD4               SYS_GPD_MFP1_PD4MFP_SPI1_SS          /*!< GPD_MFP1  PD4  setting for SPI1_SS         */
#define SPI1_SS_PH7               SYS_GPH_MFP1_PH7MFP_SPI1_SS          /*!< GPH_MFP1  PH7  setting for SPI1_SS         */
#define SPI1_SS_PH9               SYS_GPH_MFP2_PH9MFP_SPI1_SS          /*!< GPH_MFP2  PH9  setting for SPI1_SS         */

/* SPI2 MFP Pins */
#define SPI2_CLK_PA10             SYS_GPA_MFP2_PA10MFP_SPI2_CLK        /*!< GPA_MFP2  PA10 setting for SPI2_CLK        */
#define SPI2_CLK_PA13             SYS_GPA_MFP3_PA13MFP_SPI2_CLK        /*!< GPA_MFP3  PA13 setting for SPI2_CLK        */
#define SPI2_CLK_PE8              SYS_GPE_MFP2_PE8MFP_SPI2_CLK         /*!< GPE_MFP2  PE8  setting for SPI2_CLK        */
#define SPI2_CLK_PG3              SYS_GPG_MFP0_PG3MFP_SPI2_CLK         /*!< GPG_MFP0  PG3  setting for SPI2_CLK        */
#define SPI2_I2SMCLK_PB0          SYS_GPB_MFP0_PB0MFP_SPI2_I2SMCLK     /*!< GPB_MFP0  PB0  setting for SPI2_I2SMCLK    */
#define SPI2_I2SMCLK_PC13         SYS_GPC_MFP3_PC13MFP_SPI2_I2SMCLK    /*!< GPC_MFP3  PC13 setting for SPI2_I2SMCLK    */
#define SPI2_I2SMCLK_PE12         SYS_GPE_MFP3_PE12MFP_SPI2_I2SMCLK    /*!< GPE_MFP3  PE12 setting for SPI2_I2SMCLK    */
#define SPI2_MISO_PA9             SYS_GPA_MFP2_PA9MFP_SPI2_MISO        /*!< GPA_MFP2  PA9  setting for SPI2_MISO       */
#define SPI2_MISO_PA14            SYS_GPA_MFP3_PA14MFP_SPI2_MISO       /*!< GPA_MFP3  PA14 setting for SPI2_MISO       */
#define SPI2_MISO_PE9             SYS_GPE_MFP2_PE9MFP_SPI2_MISO        /*!< GPE_MFP2  PE9  setting for SPI2_MISO       */
#define SPI2_MISO_PG4             SYS_GPG_MFP1_PG4MFP_SPI2_MISO        /*!< GPG_MFP1  PG4  setting for SPI2_MISO       */
#define SPI2_MOSI_PA8             SYS_GPA_MFP2_PA8MFP_SPI2_MOSI        /*!< GPA_MFP2  PA8  setting for SPI2_MOSI       */
#define SPI2_MOSI_PA15            SYS_GPA_MFP3_PA15MFP_SPI2_MOSI       /*!< GPA_MFP3  PA15 setting for SPI2_MOSI       */
#define SPI2_MOSI_PE10            SYS_GPE_MFP2_PE10MFP_SPI2_MOSI       /*!< GPE_MFP2  PE10 setting for SPI2_MOSI       */
#define SPI2_MOSI_PF11            SYS_GPF_MFP2_PF11MFP_SPI2_MOSI       /*!< GPF_MFP2  PF11 setting for SPI2_MOSI       */
#define SPI2_SS_PA11              SYS_GPA_MFP2_PA11MFP_SPI2_SS         /*!< GPA_MFP2  PA11 setting for SPI2_SS         */
#define SPI2_SS_PA12              SYS_GPA_MFP3_PA12MFP_SPI2_SS         /*!< GPA_MFP3  PA12 setting for SPI2_SS         */
#define SPI2_SS_PE11              SYS_GPE_MFP2_PE11MFP_SPI2_SS         /*!< GPE_MFP2  PE11 setting for SPI2_SS         */
#define SPI1_SS_PF2               SYS_GPF_MFP0_PF2MFP_SPI1_SS          /*!< GPF_MFP0  PF2  setting for SPI1_SS         */
#define SPI2_SS_PG2               SYS_GPG_MFP0_PG2MFP_SPI2_SS          /*!< GPG_MFP0  PG2  setting for SPI2_SS         */

/* TM0 MFP Pins */
#define TM0_EXT_PA11              SYS_GPA_MFP2_PA11MFP_TM0_EXT         /*!< GPA_MFP2  PA11 setting for TM0_EXT         */
#define TM0_EXT_PB15              SYS_GPB_MFP3_PB15MFP_TM0_EXT         /*!< GPB_MFP3  PB15 setting for TM0_EXT         */
#define TM0_EXT_PF3               SYS_GPF_MFP0_PF3MFP_TM0_EXT          /*!< GPF_MFP0  PF3  setting for TM0_EXT         */
#define TM0_PB5                   SYS_GPB_MFP1_PB5MFP_TM0              /*!< GPB_MFP1  PB5  setting for TM0             */
#define TM0_PC7                   SYS_GPC_MFP1_PC7MFP_TM0              /*!< GPC_MFP1  PC7  setting for TM0             */
#define TM0_PG2                   SYS_GPG_MFP0_PG2MFP_TM0              /*!< GPG_MFP0  PG2  setting for TM0             */

/* TM1 MFP Pins */
#define TM1_EXT_PA10              SYS_GPA_MFP2_PA10MFP_TM1_EXT         /*!< GPA_MFP2  PA10 setting for TM1_EXT         */
#define TM1_EXT_PB14              SYS_GPB_MFP3_PB14MFP_TM1_EXT         /*!< GPB_MFP3  PB14 setting for TM1_EXT         */
#define TM1_EXT_PF2               SYS_GPF_MFP0_PF2MFP_TM1_EXT          /*!< GPF_MFP0  PF2  setting for TM1_EXT         */
#define TM1_PB4                   SYS_GPB_MFP1_PB4MFP_TM1              /*!< GPB_MFP1  PB4  setting for TM1             */
#define TM1_PB6                   SYS_GPB_MFP1_PB6MFP_TM1              /*!< GPB_MFP1  PB6  setting for TM1             */
#define TM1_PC6                   SYS_GPC_MFP1_PC6MFP_TM1              /*!< GPC_MFP1  PC6  setting for TM1             */
#define TM1_PC14                  SYS_GPC_MFP3_PC14MFP_TM1             /*!< GPC_MFP3  PC14 setting for TM1             */
#define TM1_PG3                   SYS_GPG_MFP0_PG3MFP_TM1              /*!< GPG_MFP0  PG3  setting for TM1             */

/* TM2 MFP Pins */
#define TM2_EXT_PA9               SYS_GPA_MFP2_PA9MFP_TM2_EXT          /*!< GPA_MFP2  PA9  setting for TM2_EXT         */
#define TM2_EXT_PB13              SYS_GPB_MFP3_PB13MFP_TM2_EXT         /*!< GPB_MFP3  PB13 setting for TM2_EXT         */
#define TM2_PA7                   SYS_GPA_MFP1_PA7MFP_TM2              /*!< GPA_MFP1  PA7  setting for TM2             */
#define TM2_PB3                   SYS_GPB_MFP0_PB3MFP_TM2              /*!< GPB_MFP0  PB3  setting for TM2             */
#define TM2_PD0                   SYS_GPD_MFP0_PD0MFP_TM2              /*!< GPD_MFP0  PD0  setting for TM2             */
#define TM2_PG4                   SYS_GPG_MFP1_PG4MFP_TM2              /*!< GPG_MFP1  PG4  setting for TM2             */

/* TM3 MFP Pins */
#define TM3_EXT_PA8               SYS_GPA_MFP2_PA8MFP_TM3_EXT          /*!< GPA_MFP2  PA8  setting for TM3_EXT         */
#define TM3_EXT_PB12              SYS_GPB_MFP3_PB12MFP_TM3_EXT         /*!< GPB_MFP3  PB12 setting for TM3_EXT         */
#define TM3_PA6                   SYS_GPA_MFP1_PA6MFP_TM3              /*!< GPA_MFP1  PA6  setting for TM3             */
#define TM3_PB2                   SYS_GPB_MFP0_PB2MFP_TM3              /*!< GPB_MFP0  PB2  setting for TM3             */
#define TM3_PF11                  SYS_GPF_MFP2_PF11MFP_TM3             /*!< GPF_MFP2  PF11 setting for TM3             */

/* TRACE MFP Pins */
#define TRACE_SWO_PC14            SYS_GPC_MFP3_PC14MFP_TRACE_SWO       /*!< GPC_MFP3  PC14 setting for TRACE_SWO       */
#define TRACE_SWO_PE13            SYS_GPE_MFP3_PE13MFP_TRACE_SWO       /*!< GPE_MFP3  PE13 setting for TRACE_SWO       */
#define TRACE_SWO_PF6             SYS_GPF_MFP1_PF6MFP_TRACE_SWO        /*!< GPF_MFP1  PF6  setting for TRACE_SWO       */

/* UART0 MFP Pins */
#define UART0_RXD_PA0             SYS_GPA_MFP0_PA0MFP_UART0_RXD        /*!< GPA_MFP0  PA0  setting for UART0_RXD       */
#define UART0_RXD_PA4             SYS_GPA_MFP1_PA4MFP_UART0_RXD        /*!< GPA_MFP1  PA4  setting for UART0_RXD       */
#define UART0_RXD_PA6             SYS_GPA_MFP1_PA6MFP_UART0_RXD        /*!< GPA_MFP1  PA6  setting for UART0_RXD       */
#define UART0_RXD_PA15            SYS_GPA_MFP3_PA15MFP_UART0_RXD       /*!< GPA_MFP3  PA15 setting for UART0_RXD       */
#define UART0_RXD_PB8             SYS_GPB_MFP2_PB8MFP_UART0_RXD        /*!< GPB_MFP2  PB8  setting for UART0_RXD       */
#define UART0_RXD_PB12            SYS_GPB_MFP3_PB12MFP_UART0_RXD       /*!< GPB_MFP3  PB12 setting for UART0_RXD       */
#define UART0_RXD_PC11            SYS_GPC_MFP2_PC11MFP_UART0_RXD       /*!< GPC_MFP2  PC11 setting for UART0_RXD       */
#define UART0_RXD_PD2             SYS_GPD_MFP0_PD2MFP_UART0_RXD        /*!< GPD_MFP0  PD2  setting for UART0_RXD       */
#define UART0_RXD_PF1             SYS_GPF_MFP0_PF1MFP_UART0_RXD        /*!< GPF_MFP0  PF1  setting for UART0_RXD       */
#define UART0_RXD_PF2             SYS_GPF_MFP0_PF2MFP_UART0_RXD        /*!< GPF_MFP0  PF2  setting for UART0_RXD       */
#define UART0_RXD_PH11            SYS_GPH_MFP2_PH11MFP_UART0_RXD       /*!< GPH_MFP2  PH11 setting for UART0_RXD       */
#define UART0_TXD_PA1             SYS_GPA_MFP0_PA1MFP_UART0_TXD        /*!< GPA_MFP0  PA1  setting for UART0_TXD       */
#define UART0_TXD_PA5             SYS_GPA_MFP1_PA5MFP_UART0_TXD        /*!< GPA_MFP1  PA5  setting for UART0_TXD       */
#define UART0_TXD_PA7             SYS_GPA_MFP1_PA7MFP_UART0_TXD        /*!< GPA_MFP1  PA7  setting for UART0_TXD       */
#define UART0_TXD_PA14            SYS_GPA_MFP3_PA14MFP_UART0_TXD       /*!< GPA_MFP3  PA14 setting for UART0_TXD       */
#define UART0_TXD_PB9             SYS_GPB_MFP2_PB9MFP_UART0_TXD        /*!< GPB_MFP2  PB9  setting for UART0_TXD       */
#define UART0_TXD_PB13            SYS_GPB_MFP3_PB13MFP_UART0_TXD       /*!< GPB_MFP3  PB13 setting for UART0_TXD       */
#define UART0_TXD_PC12            SYS_GPC_MFP3_PC12MFP_UART0_TXD       /*!< GPC_MFP3  PC12 setting for UART0_TXD       */
#define UART0_TXD_PD3             SYS_GPD_MFP0_PD3MFP_UART0_TXD        /*!< GPD_MFP0  PD3  setting for UART0_TXD       */
#define UART0_TXD_PF0             SYS_GPF_MFP0_PF0MFP_UART0_TXD        /*!< GPF_MFP0  PF0  setting for UART0_TXD       */
#define UART0_TXD_PF3             SYS_GPF_MFP0_PF3MFP_UART0_TXD        /*!< GPF_MFP0  PF3  setting for UART0_TXD       */
#define UART0_TXD_PH10            SYS_GPH_MFP2_PH10MFP_UART0_TXD       /*!< GPH_MFP2  PH10 setting for UART0_TXD       */
#define UART0_nCTS_PA5            SYS_GPA_MFP1_PA5MFP_UART0_nCTS       /*!< GPA_MFP1  PA5  setting for UART0_nCTS      */
#define UART0_nCTS_PB11           SYS_GPB_MFP2_PB11MFP_UART0_nCTS      /*!< GPB_MFP2  PB11 setting for UART0_nCTS      */
#define UART0_nCTS_PB15           SYS_GPB_MFP3_PB15MFP_UART0_nCTS      /*!< GPB_MFP3  PB15 setting for UART0_nCTS      */
#define UART0_nCTS_PC7            SYS_GPC_MFP1_PC7MFP_UART0_nCTS       /*!< GPC_MFP1  PC7  setting for UART0_nCTS      */
#define UART0_nCTS_PF5            SYS_GPF_MFP1_PF5MFP_UART0_nCTS       /*!< GPF_MFP1  PF5  setting for UART0_nCTS      */
#define UART0_nRTS_PA4            SYS_GPA_MFP1_PA4MFP_UART0_nRTS       /*!< GPA_MFP1  PA4  setting for UART0_nRTS      */
#define UART0_nRTS_PB10           SYS_GPB_MFP2_PB10MFP_UART0_nRTS      /*!< GPB_MFP2  PB10 setting for UART0_nRTS      */
#define UART0_nRTS_PB14           SYS_GPB_MFP3_PB14MFP_UART0_nRTS      /*!< GPB_MFP3  PB14 setting for UART0_nRTS      */
#define UART0_nRTS_PC6            SYS_GPC_MFP1_PC6MFP_UART0_nRTS       /*!< GPC_MFP1  PC6  setting for UART0_nRTS      */
#define UART0_nRTS_PF4            SYS_GPF_MFP1_PF4MFP_UART0_nRTS       /*!< GPF_MFP1  PF4  setting for UART0_nRTS      */

/* UART1 MFP Pins */
#define UART1_RXD_PA2             SYS_GPA_MFP0_PA2MFP_UART1_RXD        /*!< GPA_MFP0  PA2  setting for UART1_RXD       */
#define UART1_RXD_PA8             SYS_GPA_MFP2_PA8MFP_UART1_RXD        /*!< GPA_MFP2  PA8  setting for UART1_RXD       */
#define UART1_RXD_PB2             SYS_GPB_MFP0_PB2MFP_UART1_RXD        /*!< GPB_MFP0  PB2  setting for UART1_RXD       */
#define UART1_RXD_PB6             SYS_GPB_MFP1_PB6MFP_UART1_RXD        /*!< GPB_MFP1  PB6  setting for UART1_RXD       */
#define UART1_RXD_PC8             SYS_GPC_MFP2_PC8MFP_UART1_RXD        /*!< GPC_MFP2  PC8  setting for UART1_RXD       */
#define UART1_RXD_PD6             SYS_GPD_MFP1_PD6MFP_UART1_RXD        /*!< GPD_MFP1  PD6  setting for UART1_RXD       */
#define UART1_RXD_PD10            SYS_GPD_MFP2_PD10MFP_UART1_RXD       /*!< GPD_MFP2  PD10 setting for UART1_RXD       */
#define UART1_RXD_PF1             SYS_GPF_MFP0_PF1MFP_UART1_RXD        /*!< GPF_MFP0  PF1  setting for UART1_RXD       */
#define UART1_RXD_PH9             SYS_GPH_MFP2_PH9MFP_UART1_RXD        /*!< GPH_MFP2  PH9  setting for UART1_RXD       */
#define UART1_TXD_PA3             SYS_GPA_MFP0_PA3MFP_UART1_TXD        /*!< GPA_MFP0  PA3  setting for UART1_TXD       */
#define UART1_TXD_PA9             SYS_GPA_MFP2_PA9MFP_UART1_TXD        /*!< GPA_MFP2  PA9  setting for UART1_TXD       */
#define UART1_TXD_PB3             SYS_GPB_MFP0_PB3MFP_UART1_TXD        /*!< GPB_MFP0  PB3  setting for UART1_TXD       */
#define UART1_TXD_PB7             SYS_GPB_MFP1_PB7MFP_UART1_TXD        /*!< GPB_MFP1  PB7  setting for UART1_TXD       */
#define UART1_TXD_PD7             SYS_GPD_MFP1_PD7MFP_UART1_TXD        /*!< GPD_MFP1  PD7  setting for UART1_TXD       */
#define UART1_TXD_PD11            SYS_GPD_MFP2_PD11MFP_UART1_TXD       /*!< GPD_MFP2  PD11 setting for UART1_TXD       */
#define UART1_TXD_PE13            SYS_GPE_MFP3_PE13MFP_UART1_TXD       /*!< GPE_MFP3  PE13 setting for UART1_TXD       */
#define UART1_TXD_PF0             SYS_GPF_MFP0_PF0MFP_UART1_TXD        /*!< GPF_MFP0  PF0  setting for UART1_TXD       */
#define UART1_TXD_PH8             SYS_GPH_MFP2_PH8MFP_UART1_TXD        /*!< GPH_MFP2  PH8  setting for UART1_TXD       */
#define UART1_nCTS_PA1            SYS_GPA_MFP0_PA1MFP_UART1_nCTS       /*!< GPA_MFP0  PA1  setting for UART1_nCTS      */
#define UART1_nCTS_PB9            SYS_GPB_MFP2_PB9MFP_UART1_nCTS       /*!< GPB_MFP2  PB9  setting for UART1_nCTS      */
#define UART1_nCTS_PE11           SYS_GPE_MFP2_PE11MFP_UART1_nCTS      /*!< GPE_MFP2  PE11 setting for UART1_nCTS      */
#define UART1_nRTS_PA0            SYS_GPA_MFP0_PA0MFP_UART1_nRTS       /*!< GPA_MFP0  PA0  setting for UART1_nRTS      */
#define UART1_nRTS_PB8            SYS_GPB_MFP2_PB8MFP_UART1_nRTS       /*!< GPB_MFP2  PB8  setting for UART1_nRTS      */
#define UART1_nRTS_PE12           SYS_GPE_MFP3_PE12MFP_UART1_nRTS      /*!< GPE_MFP3  PE12 setting for UART1_nRTS      */

/* UART2 MFP Pins */
#define UART2_RXD_PB0             SYS_GPB_MFP0_PB0MFP_UART2_RXD        /*!< GPB_MFP0  PB0  setting for UART2_RXD       */
#define UART2_RXD_PB4             SYS_GPB_MFP1_PB4MFP_UART2_RXD        /*!< GPB_MFP1  PB4  setting for UART2_RXD       */
#define UART2_RXD_PC0             SYS_GPC_MFP0_PC0MFP_UART2_RXD        /*!< GPC_MFP0  PC0  setting for UART2_RXD       */
#define UART2_RXD_PC4             SYS_GPC_MFP1_PC4MFP_UART2_RXD        /*!< GPC_MFP1  PC4  setting for UART2_RXD       */
#define UART2_RXD_PD12            SYS_GPD_MFP3_PD12MFP_UART2_RXD       /*!< GPD_MFP3  PD12 setting for UART2_RXD       */
#define UART2_RXD_PE9             SYS_GPE_MFP2_PE9MFP_UART2_RXD        /*!< GPE_MFP2  PE9  setting for UART2_RXD       */
#define UART2_RXD_PE15            SYS_GPE_MFP3_PE15MFP_UART2_RXD       /*!< GPE_MFP3  PE15 setting for UART2_RXD       */
#define UART2_RXD_PF1             SYS_GPF_MFP0_PF1MFP_UART2_RXD        /*!< GPF_MFP0  PF1  setting for UART2_RXD       */
#define UART2_RXD_PF5             SYS_GPF_MFP1_PF5MFP_UART2_RXD        /*!< GPF_MFP1  PF5  setting for UART2_RXD       */
#define UART2_TXD_PB1             SYS_GPB_MFP0_PB1MFP_UART2_TXD        /*!< GPB_MFP0  PB1  setting for UART2_TXD       */
#define UART2_TXD_PB5             SYS_GPB_MFP1_PB5MFP_UART2_TXD        /*!< GPB_MFP1  PB5  setting for UART2_TXD       */
#define UART2_TXD_PC1             SYS_GPC_MFP0_PC1MFP_UART2_TXD        /*!< GPC_MFP0  PC1  setting for UART2_TXD       */
#define UART2_TXD_PC5             SYS_GPC_MFP1_PC5MFP_UART2_TXD        /*!< GPC_MFP1  PC5  setting for UART2_TXD       */
#define UART2_TXD_PC13            SYS_GPC_MFP3_PC13MFP_UART2_TXD       /*!< GPC_MFP3  PC13 setting for UART2_TXD       */
#define UART2_TXD_PE8             SYS_GPE_MFP2_PE8MFP_UART2_TXD        /*!< GPE_MFP2  PE8  setting for UART2_TXD       */
#define UART2_TXD_PE14            SYS_GPE_MFP3_PE14MFP_UART2_TXD       /*!< GPE_MFP3  PE14 setting for UART2_TXD       */
#define UART2_TXD_PF0             SYS_GPF_MFP0_PF0MFP_UART2_TXD        /*!< GPF_MFP0  PF0  setting for UART2_TXD       */
#define UART2_TXD_PF4             SYS_GPF_MFP1_PF4MFP_UART2_TXD        /*!< GPF_MFP1  PF4  setting for UART2_TXD       */
#define UART2_nCTS_PC2            SYS_GPC_MFP0_PC2MFP_UART2_nCTS       /*!< GPC_MFP0  PC2  setting for UART2_nCTS      */
#define UART2_nCTS_PD9            SYS_GPD_MFP2_PD9MFP_UART2_nCTS       /*!< GPD_MFP2  PD9  setting for UART2_nCTS      */
#define UART2_nCTS_PF5            SYS_GPF_MFP1_PF5MFP_UART2_nCTS       /*!< GPF_MFP1  PF5  setting for UART2_nCTS      */
#define UART2_nRTS_PC3            SYS_GPC_MFP0_PC3MFP_UART2_nRTS       /*!< GPC_MFP0  PC3  setting for UART2_nRTS      */
#define UART2_nRTS_PD8            SYS_GPD_MFP2_PD8MFP_UART2_nRTS       /*!< GPD_MFP2  PD8  setting for UART2_nRTS      */
#define UART2_nRTS_PF4            SYS_GPF_MFP1_PF4MFP_UART2_nRTS       /*!< GPF_MFP1  PF4  setting for UART2_nRTS      */

/* UART3 MFP Pins */
#define UART3_RXD_PB14            SYS_GPB_MFP3_PB14MFP_UART3_RXD       /*!< GPB_MFP3  PB14 setting for UART3_RXD       */
#define UART3_RXD_PC2             SYS_GPC_MFP0_PC2MFP_UART3_RXD        /*!< GPC_MFP0  PC2  setting for UART3_RXD       */
#define UART3_RXD_PC9             SYS_GPC_MFP2_PC9MFP_UART3_RXD        /*!< GPC_MFP2  PC9  setting for UART3_RXD       */
#define UART3_RXD_PD0             SYS_GPD_MFP0_PD0MFP_UART3_RXD        /*!< GPD_MFP0  PD0  setting for UART3_RXD       */
#define UART3_RXD_PE0             SYS_GPE_MFP0_PE0MFP_UART3_RXD        /*!< GPE_MFP0  PE0  setting for UART3_RXD       */
#define UART3_RXD_PE11            SYS_GPE_MFP2_PE11MFP_UART3_RXD       /*!< GPE_MFP2  PE11 setting for UART3_RXD       */
#define UART3_RXD_PE15            SYS_GPE_MFP3_PE15MFP_UART3_RXD       /*!< GPE_MFP3  PE15 setting for UART3_RXD       */
#define UART3_RXD_PF4             SYS_GPF_MFP1_PF4MFP_UART3_RXD        /*!< GPF_MFP1  PF4  setting for UART3_RXD       */
#define UART3_TXD_PB15            SYS_GPB_MFP3_PB15MFP_UART3_TXD       /*!< GPB_MFP3  PB15 setting for UART3_TXD       */
#define UART3_TXD_PC3             SYS_GPC_MFP0_PC3MFP_UART3_TXD        /*!< GPC_MFP0  PC3  setting for UART3_TXD       */
#define UART3_TXD_PC10            SYS_GPC_MFP2_PC10MFP_UART3_TXD       /*!< GPC_MFP2  PC10 setting for UART3_TXD       */
#define UART3_TXD_PD1             SYS_GPD_MFP0_PD1MFP_UART3_TXD        /*!< GPD_MFP0  PD1  setting for UART3_TXD       */
#define UART3_TXD_PE1             SYS_GPE_MFP0_PE1MFP_UART3_TXD        /*!< GPE_MFP0  PE1  setting for UART3_TXD       */
#define UART3_TXD_PE10            SYS_GPE_MFP2_PE10MFP_UART3_TXD       /*!< GPE_MFP2  PE10 setting for UART3_TXD       */
#define UART3_TXD_PE14            SYS_GPE_MFP3_PE14MFP_UART3_TXD       /*!< GPE_MFP3  PE14 setting for UART3_TXD       */
#define UART3_TXD_PF5             SYS_GPF_MFP1_PF5MFP_UART3_TXD        /*!< GPF_MFP1  PF5  setting for UART3_TXD       */
#define UART3_nCTS_PB12           SYS_GPB_MFP3_PB12MFP_UART3_nCTS      /*!< GPB_MFP3  PB12 setting for UART3_nCTS      */
#define UART3_nCTS_PD2            SYS_GPD_MFP0_PD2MFP_UART3_nCTS       /*!< GPD_MFP0  PD2  setting for UART3_nCTS      */
#define UART3_nCTS_PH9            SYS_GPH_MFP2_PH9MFP_UART3_nCTS       /*!< GPH_MFP2  PH9  setting for UART3_nCTS      */
#define UART3_nRTS_PB13           SYS_GPB_MFP3_PB13MFP_UART3_nRTS      /*!< GPB_MFP3  PB13 setting for UART3_nRTS      */
#define UART3_nRTS_PD3            SYS_GPD_MFP0_PD3MFP_UART3_nRTS       /*!< GPD_MFP0  PD3  setting for UART3_nRTS      */
#define UART3_nRTS_PH8            SYS_GPH_MFP2_PH8MFP_UART3_nRTS       /*!< GPH_MFP2  PH8  setting for UART3_nRTS      */

/* UART4 MFP Pins */
#define UART4_RXD_PA2             SYS_GPA_MFP0_PA2MFP_UART4_RXD        /*!< GPA_MFP0  PA2  setting for UART4_RXD       */
#define UART4_RXD_PA13            SYS_GPA_MFP3_PA13MFP_UART4_RXD       /*!< GPA_MFP3  PA13 setting for UART4_RXD       */
#define UART4_RXD_PB10            SYS_GPB_MFP2_PB10MFP_UART4_RXD       /*!< GPB_MFP2  PB10 setting for UART4_RXD       */
#define UART4_RXD_PC4             SYS_GPC_MFP1_PC4MFP_UART4_RXD        /*!< GPC_MFP1  PC4  setting for UART4_RXD       */
#define UART4_RXD_PC6             SYS_GPC_MFP1_PC6MFP_UART4_RXD        /*!< GPC_MFP1  PC6  setting for UART4_RXD       */
#define UART4_RXD_PF6             SYS_GPF_MFP1_PF6MFP_UART4_RXD        /*!< GPF_MFP1  PF6  setting for UART4_RXD       */
#define UART4_RXD_PH11            SYS_GPH_MFP2_PH11MFP_UART4_RXD       /*!< GPH_MFP2  PH11 setting for UART4_RXD       */
#define UART4_TXD_PA3             SYS_GPA_MFP0_PA3MFP_UART4_TXD        /*!< GPA_MFP0  PA3  setting for UART4_TXD       */
#define UART4_TXD_PA12            SYS_GPA_MFP3_PA12MFP_UART4_TXD       /*!< GPA_MFP3  PA12 setting for UART4_TXD       */
#define UART4_TXD_PB11            SYS_GPB_MFP2_PB11MFP_UART4_TXD       /*!< GPB_MFP2  PB11 setting for UART4_TXD       */
#define UART4_TXD_PC5             SYS_GPC_MFP1_PC5MFP_UART4_TXD        /*!< GPC_MFP1  PC5  setting for UART4_TXD       */
#define UART4_TXD_PC7             SYS_GPC_MFP1_PC7MFP_UART4_TXD        /*!< GPC_MFP1  PC7  setting for UART4_TXD       */
#define UART4_TXD_PF7             SYS_GPF_MFP1_PF7MFP_UART4_TXD        /*!< GPF_MFP1  PF7  setting for UART4_TXD       */
#define UART4_TXD_PH10            SYS_GPH_MFP2_PH10MFP_UART4_TXD       /*!< GPH_MFP2  PH10 setting for UART4_TXD       */
#define UART4_nCTS_PC8            SYS_GPC_MFP2_PC8MFP_UART4_nCTS       /*!< GPC_MFP2  PC8  setting for UART4_nCTS      */
#define UART4_nCTS_PE1            SYS_GPE_MFP0_PE1MFP_UART4_nCTS       /*!< GPE_MFP0  PE1  setting for UART4_nCTS      */
#define UART4_nCTS_PE14           SYS_GPE_MFP3_PE14MFP_UART4_nCTS      /*!< GPE_MFP3  PE14 setting for UART4_nCTS      */
#define UART4_nRTS_PE0            SYS_GPE_MFP0_PE0MFP_UART4_nRTS       /*!< GPE_MFP0  PE0  setting for UART4_nRTS      */
#define UART4_nRTS_PE13           SYS_GPE_MFP3_PE13MFP_UART4_nRTS      /*!< GPE_MFP3  PE13 setting for UART4_nRTS      */
#define UART4_nRTS_PE15           SYS_GPE_MFP3_PE15MFP_UART4_nRTS      /*!< GPE_MFP3  PE15 setting for UART4_nRTS      */

/* USCI0 MFP Pins */
#define USCI0_CLK_PA11            SYS_GPA_MFP2_PA11MFP_USCI0_CLK       /*!< GPA_MFP2  PA11 setting for USCI0_CLK       */
#define USCI0_CLK_PB12            SYS_GPB_MFP3_PB12MFP_USCI0_CLK       /*!< GPB_MFP3  PB12 setting for USCI0_CLK       */
#define USCI0_CLK_PD0             SYS_GPD_MFP0_PD0MFP_USCI0_CLK        /*!< GPD_MFP0  PD0  setting for USCI0_CLK       */
#define USCI0_CLK_PE2             SYS_GPE_MFP0_PE2MFP_USCI0_CLK        /*!< GPE_MFP0  PE2  setting for USCI0_CLK       */
#define USCI0_CTL0_PB0            SYS_GPB_MFP0_PB0MFP_USCI0_CTL0       /*!< GPB_MFP0  PB0  setting for USCI0_CTL0      */
#define USCI0_CTL0_PB13           SYS_GPB_MFP3_PB13MFP_USCI0_CTL0      /*!< GPB_MFP3  PB13 setting for USCI0_CTL0      */
#define USCI0_CTL0_PC13           SYS_GPC_MFP3_PC13MFP_USCI0_CTL0      /*!< GPC_MFP3  PC13 setting for USCI0_CTL0      */
#define USCI0_CTL0_PC14           SYS_GPC_MFP3_PC14MFP_USCI0_CTL0      /*!< GPC_MFP3  PC14 setting for USCI0_CTL0      */
#define USCI0_CTL0_PD4            SYS_GPD_MFP1_PD4MFP_USCI0_CTL0       /*!< GPD_MFP1  PD4  setting for USCI0_CTL0      */
#define USCI0_CTL0_PE6            SYS_GPE_MFP1_PE6MFP_USCI0_CTL0       /*!< GPE_MFP1  PE6  setting for USCI0_CTL0      */
#define USCI0_CTL1_PA8            SYS_GPA_MFP2_PA8MFP_USCI0_CTL1       /*!< GPA_MFP2  PA8  setting for USCI0_CTL1      */
#define USCI0_CTL1_PB15           SYS_GPB_MFP3_PB15MFP_USCI0_CTL1      /*!< GPB_MFP3  PB15 setting for USCI0_CTL1      */
#define USCI0_CTL1_PD3            SYS_GPD_MFP0_PD3MFP_USCI0_CTL1       /*!< GPD_MFP0  PD3  setting for USCI0_CTL1      */
#define USCI0_CTL1_PE5            SYS_GPE_MFP1_PE5MFP_USCI0_CTL1       /*!< GPE_MFP1  PE5  setting for USCI0_CTL1      */
#define USCI0_CTL1_PF0            SYS_GPF_MFP0_PF0MFP_USCI0_CTL1       /*!< GPF_MFP0  PF0  setting for USCI0_CTL1      */
#define USCI0_DAT0_PA10           SYS_GPA_MFP2_PA10MFP_USCI0_DAT0      /*!< GPA_MFP2  PA10 setting for USCI0_DAT0      */
#define USCI0_DAT0_PB13           SYS_GPB_MFP3_PB13MFP_USCI0_DAT0      /*!< GPB_MFP3  PB13 setting for USCI0_DAT0      */
#define USCI0_DAT0_PD1            SYS_GPD_MFP0_PD1MFP_USCI0_DAT0       /*!< GPD_MFP0  PD1  setting for USCI0_DAT0      */
#define USCI0_DAT0_PE3            SYS_GPE_MFP0_PE3MFP_USCI0_DAT0       /*!< GPE_MFP0  PE3  setting for USCI0_DAT0      */
#define USCI0_DAT1_PA9            SYS_GPA_MFP2_PA9MFP_USCI0_DAT1       /*!< GPA_MFP2  PA9  setting for USCI0_DAT1      */
#define USCI0_DAT1_PB14           SYS_GPB_MFP3_PB14MFP_USCI0_DAT1      /*!< GPB_MFP3  PB14 setting for USCI0_DAT1      */
#define USCI0_DAT1_PD2            SYS_GPD_MFP0_PD2MFP_USCI0_DAT1       /*!< GPD_MFP0  PD2  setting for USCI0_DAT1      */
#define USCI0_DAT1_PE4            SYS_GPE_MFP1_PE4MFP_USCI0_DAT1       /*!< GPE_MFP1  PE4  setting for USCI0_DAT1      */
#define USCI0_DAT1_PF1            SYS_GPF_MFP0_PF1MFP_USCI0_DAT1       /*!< GPF_MFP0  PF1  setting for USCI0_DAT1      */

/* USCI1 MFP Pins */
#define USCI1_CLK_PB1             SYS_GPB_MFP0_PB1MFP_USCI1_CLK        /*!< GPB_MFP0  PB1  setting for USCI1_CLK       */
#define USCI1_CLK_PB8             SYS_GPB_MFP2_PB8MFP_USCI1_CLK        /*!< GPB_MFP2  PB8  setting for USCI1_CLK       */
#define USCI1_CLK_PD7             SYS_GPD_MFP1_PD7MFP_USCI1_CLK        /*!< GPD_MFP1  PD7  setting for USCI1_CLK       */
#define USCI1_CLK_PE12            SYS_GPE_MFP3_PE12MFP_USCI1_CLK       /*!< GPE_MFP3  PE12 setting for USCI1_CLK       */
#define USCI1_CTL0_PB5            SYS_GPB_MFP1_PB5MFP_USCI1_CTL0       /*!< GPB_MFP1  PB5  setting for USCI1_CTL0      */
#define USCI1_CTL0_PB10           SYS_GPB_MFP2_PB10MFP_USCI1_CTL0      /*!< GPB_MFP2  PB10 setting for USCI1_CTL0      */
#define USCI1_CTL0_PD3            SYS_GPD_MFP0_PD3MFP_USCI1_CTL0       /*!< GPD_MFP0  PD3  setting for USCI1_CTL0      */
#define USCI1_CTL0_PE9            SYS_GPE_MFP2_PE9MFP_USCI1_CTL0       /*!< GPE_MFP2  PE9  setting for USCI1_CTL0      */
#define USCI1_CTL1_PB4            SYS_GPB_MFP1_PB4MFP_USCI1_CTL1       /*!< GPB_MFP1  PB4  setting for USCI1_CTL1      */
#define USCI1_CTL1_PB9            SYS_GPB_MFP2_PB9MFP_USCI1_CTL1       /*!< GPB_MFP2  PB9  setting for USCI1_CTL1      */
#define USCI1_CTL1_PD4            SYS_GPD_MFP1_PD4MFP_USCI1_CTL1       /*!< GPD_MFP1  PD4  setting for USCI1_CTL1      */
#define USCI1_CTL1_PE8            SYS_GPE_MFP2_PE8MFP_USCI1_CTL1       /*!< GPE_MFP2  PE8  setting for USCI1_CTL1      */
#define USCI1_DAT0_PB2            SYS_GPB_MFP0_PB2MFP_USCI1_DAT0       /*!< GPB_MFP0  PB2  setting for USCI1_DAT0      */
#define USCI1_DAT0_PB7            SYS_GPB_MFP1_PB7MFP_USCI1_DAT0       /*!< GPB_MFP1  PB7  setting for USCI1_DAT0      */
#define USCI1_DAT0_PD5            SYS_GPD_MFP1_PD5MFP_USCI1_DAT0       /*!< GPD_MFP1  PD5  setting for USCI1_DAT0      */
#define USCI1_DAT0_PE10           SYS_GPE_MFP2_PE10MFP_USCI1_DAT0      /*!< GPE_MFP2  PE10 setting for USCI1_DAT0      */
#define USCI1_DAT1_PB3            SYS_GPB_MFP0_PB3MFP_USCI1_DAT1       /*!< GPB_MFP0  PB3  setting for USCI1_DAT1      */
#define USCI1_DAT1_PB6            SYS_GPB_MFP1_PB6MFP_USCI1_DAT1       /*!< GPB_MFP1  PB6  setting for USCI1_DAT1      */
#define USCI1_DAT1_PD6            SYS_GPD_MFP1_PD6MFP_USCI1_DAT1       /*!< GPD_MFP1  PD6  setting for USCI1_DAT1      */
#define USCI1_DAT1_PE11           SYS_GPE_MFP2_PE11MFP_USCI1_DAT1      /*!< GPE_MFP2  PE11 setting for USCI1_DAT1      */

/* X32 MFP Pins */
#define X32_IN_PF5                SYS_GPF_MFP1_PF5MFP_X32_IN           /*!< GPF_MFP1  PF5  setting for X32_IN          */
#define X32_OUT_PF4               SYS_GPF_MFP1_PF4MFP_X32_OUT          /*!< GPF_MFP1  PF4  setting for X32_OUT         */

/* XT1 MFP Pins */
#define XT1_IN_PF3                SYS_GPF_MFP0_PF3MFP_XT1_IN           /*!< GPF_MFP0  PF3  setting for XT1_IN          */
#define XT1_OUT_PF2               SYS_GPF_MFP0_PF2MFP_XT1_OUT          /*!< GPF_MFP0  PF2  setting for XT1_OUT         */

/* ACMP0 MFP Pin Mask */
#define ACMP0_O_PB7_Msk          SYS_GPB_MFP1_PB7MFP_Msk     /*!< ACMP0_O          PB7  MFP Mask */
#define ACMP0_O_PC1_Msk          SYS_GPC_MFP0_PC1MFP_Msk     /*!< ACMP0_O          PC1  MFP Mask */
#define ACMP0_O_PC12_Msk         SYS_GPC_MFP3_PC12MFP_Msk    /*!< ACMP0_O          PC12 MFP Mask */
#define ACMP0_O_PF0_Msk          SYS_GPF_MFP0_PF0MFP_Msk     /*!< ACMP0_O          PF0  MFP Mask */
#define ACMP0_O_PG14_Msk         SYS_GPG_MFP3_PG14MFP_Msk    /*!< ACMP0_O          PG14 MFP Mask */
#define ACMP0_WLAT_PA7_Msk       SYS_GPA_MFP1_PA7MFP_Msk     /*!< ACMP0_WLAT       PA7  MFP Mask */
#define ACMP0_N_PB3_Msk          SYS_GPB_MFP0_PB3MFP_Msk     /*!< ACMP0_N          PB3  MFP Mask */
#define ACMP0_P1_PB2_Msk         SYS_GPB_MFP0_PB2MFP_Msk     /*!< ACMP0_P1         PB2  MFP Mask */
#define ACMP0_P0_PA11_Msk        SYS_GPA_MFP2_PA11MFP_Msk    /*!< ACMP0_P0         PA11 MFP Mask */
#define ACMP0_P3_PB13_Msk        SYS_GPB_MFP3_PB13MFP_Msk    /*!< ACMP0_P3         PB13 MFP Mask */
#define ACMP0_P2_PB12_Msk        SYS_GPB_MFP3_PB12MFP_Msk    /*!< ACMP0_P2         PB12 MFP Mask */

/* ACMP1 MFP Pin Mask */
#define ACMP1_O_PB6_Msk          SYS_GPB_MFP1_PB6MFP_Msk     /*!< ACMP1_O          PB6  MFP Mask */
#define ACMP1_O_PC0_Msk          SYS_GPC_MFP0_PC0MFP_Msk     /*!< ACMP1_O          PC0  MFP Mask */
#define ACMP1_O_PC11_Msk         SYS_GPC_MFP2_PC11MFP_Msk    /*!< ACMP1_O          PC11 MFP Mask */
#define ACMP1_O_PF1_Msk          SYS_GPF_MFP0_PF1MFP_Msk     /*!< ACMP1_O          PF1  MFP Mask */
#define ACMP1_O_PG15_Msk         SYS_GPG_MFP3_PG15MFP_Msk    /*!< ACMP1_O          PG15 MFP Mask */
#define ACMP1_WLAT_PA6_Msk       SYS_GPA_MFP1_PA6MFP_Msk     /*!< ACMP1_WLAT       PA6  MFP Mask */
#define ACMP1_N_PB5_Msk          SYS_GPB_MFP1_PB5MFP_Msk     /*!< ACMP1_N          PB5  MFP Mask */
#define ACMP1_P1_PB4_Msk         SYS_GPB_MFP1_PB4MFP_Msk     /*!< ACMP1_P1         PB4  MFP Mask */
#define ACMP1_P0_PA10_Msk        SYS_GPA_MFP2_PA10MFP_Msk    /*!< ACMP1_P0         PA10 MFP Mask */
#define ACMP1_P3_PB13_Msk        SYS_GPB_MFP3_PB13MFP_Msk    /*!< ACMP1_P3         PB13 MFP Mask */
#define ACMP1_P2_PB12_Msk        SYS_GPB_MFP3_PB12MFP_Msk    /*!< ACMP1_P2         PB12 MFP Mask */

/* BPWM0 MFP Pin Mask */
#define BPWM0_CH0_PA0_Msk        SYS_GPA_MFP0_PA0MFP_Msk     /*!< BPWM0_CH0        PA0  MFP Mask */
#define BPWM0_CH0_PA11_Msk       SYS_GPA_MFP2_PA11MFP_Msk    /*!< BPWM0_CH0        PA11 MFP Mask */
#define BPWM0_CH0_PD13_Msk       SYS_GPD_MFP3_PD13MFP_Msk    /*!< BPWM0_CH0        PD13 MFP Mask */
#define BPWM0_CH0_PE2_Msk        SYS_GPE_MFP0_PE2MFP_Msk     /*!< BPWM0_CH0        PE2  MFP Mask */
#define BPWM0_CH0_PG14_Msk       SYS_GPG_MFP3_PG14MFP_Msk    /*!< BPWM0_CH0        PG14 MFP Mask */
#define BPWM0_CH1_PA1_Msk        SYS_GPA_MFP0_PA1MFP_Msk     /*!< BPWM0_CH1        PA1  MFP Mask */
#define BPWM0_CH1_PA10_Msk       SYS_GPA_MFP2_PA10MFP_Msk    /*!< BPWM0_CH1        PA10 MFP Mask */
#define BPWM0_CH1_PE3_Msk        SYS_GPE_MFP0_PE3MFP_Msk     /*!< BPWM0_CH1        PE3  MFP Mask */
#define BPWM0_CH1_PG13_Msk       SYS_GPG_MFP3_PG13MFP_Msk    /*!< BPWM0_CH1        PG13 MFP Mask */
#define BPWM0_CH2_PA2_Msk        SYS_GPA_MFP0_PA2MFP_Msk     /*!< BPWM0_CH2        PA2  MFP Mask */
#define BPWM0_CH2_PA9_Msk        SYS_GPA_MFP2_PA9MFP_Msk     /*!< BPWM0_CH2        PA9  MFP Mask */
#define BPWM0_CH2_PE4_Msk        SYS_GPE_MFP1_PE4MFP_Msk     /*!< BPWM0_CH2        PE4  MFP Mask */
#define BPWM0_CH2_PG12_Msk       SYS_GPG_MFP3_PG12MFP_Msk    /*!< BPWM0_CH2        PG12 MFP Mask */
#define BPWM0_CH3_PA3_Msk        SYS_GPA_MFP0_PA3MFP_Msk     /*!< BPWM0_CH3        PA3  MFP Mask */
#define BPWM0_CH3_PA8_Msk        SYS_GPA_MFP2_PA8MFP_Msk     /*!< BPWM0_CH3        PA8  MFP Mask */
#define BPWM0_CH3_PE5_Msk        SYS_GPE_MFP1_PE5MFP_Msk     /*!< BPWM0_CH3        PE5  MFP Mask */
#define BPWM0_CH3_PG11_Msk       SYS_GPG_MFP2_PG11MFP_Msk    /*!< BPWM0_CH3        PG11 MFP Mask */
#define BPWM0_CH4_PA4_Msk        SYS_GPA_MFP1_PA4MFP_Msk     /*!< BPWM0_CH4        PA4  MFP Mask */
#define BPWM0_CH4_PC13_Msk       SYS_GPC_MFP3_PC13MFP_Msk    /*!< BPWM0_CH4        PC13 MFP Mask */
#define BPWM0_CH4_PE6_Msk        SYS_GPE_MFP1_PE6MFP_Msk     /*!< BPWM0_CH4        PE6  MFP Mask */
#define BPWM0_CH4_PF5_Msk        SYS_GPF_MFP1_PF5MFP_Msk     /*!< BPWM0_CH4        PF5  MFP Mask */
#define BPWM0_CH4_PG10_Msk       SYS_GPG_MFP2_PG10MFP_Msk    /*!< BPWM0_CH4        PG10 MFP Mask */
#define BPWM0_CH5_PA5_Msk        SYS_GPA_MFP1_PA5MFP_Msk     /*!< BPWM0_CH5        PA5  MFP Mask */
#define BPWM0_CH5_PD12_Msk       SYS_GPD_MFP3_PD12MFP_Msk    /*!< BPWM0_CH5        PD12 MFP Mask */
#define BPWM0_CH5_PE7_Msk        SYS_GPE_MFP1_PE7MFP_Msk     /*!< BPWM0_CH5        PE7  MFP Mask */
#define BPWM0_CH5_PF4_Msk        SYS_GPF_MFP1_PF4MFP_Msk     /*!< BPWM0_CH5        PF4  MFP Mask */
#define BPWM0_CH5_PG9_Msk        SYS_GPG_MFP2_PG9MFP_Msk     /*!< BPWM0_CH5        PG9  MFP Mask */

/* BPWM1 MFP Pin Mask */
#define BPWM1_CH0_PB11_Msk       SYS_GPB_MFP2_PB11MFP_Msk    /*!< BPWM1_CH0        PB11 MFP Mask */
#define BPWM1_CH0_PC7_Msk        SYS_GPC_MFP1_PC7MFP_Msk     /*!< BPWM1_CH0        PC7  MFP Mask */
#define BPWM1_CH0_PF3_Msk        SYS_GPF_MFP0_PF3MFP_Msk     /*!< BPWM1_CH0        PF3  MFP Mask */
#define BPWM1_CH1_PB10_Msk       SYS_GPB_MFP2_PB10MFP_Msk    /*!< BPWM1_CH1        PB10 MFP Mask */
#define BPWM1_CH1_PC6_Msk        SYS_GPC_MFP1_PC6MFP_Msk     /*!< BPWM1_CH1        PC6  MFP Mask */
#define BPWM1_CH1_PF2_Msk        SYS_GPF_MFP0_PF2MFP_Msk     /*!< BPWM1_CH1        PF2  MFP Mask */
#define BPWM1_CH2_PA7_Msk        SYS_GPA_MFP1_PA7MFP_Msk     /*!< BPWM1_CH2        PA7  MFP Mask */
#define BPWM1_CH2_PA12_Msk       SYS_GPA_MFP3_PA12MFP_Msk    /*!< BPWM1_CH2        PA12 MFP Mask */
#define BPWM1_CH2_PB9_Msk        SYS_GPB_MFP2_PB9MFP_Msk     /*!< BPWM1_CH2        PB9  MFP Mask */
#define BPWM1_CH3_PA6_Msk        SYS_GPA_MFP1_PA6MFP_Msk     /*!< BPWM1_CH3        PA6  MFP Mask */
#define BPWM1_CH3_PA13_Msk       SYS_GPA_MFP3_PA13MFP_Msk    /*!< BPWM1_CH3        PA13 MFP Mask */
#define BPWM1_CH3_PB8_Msk        SYS_GPB_MFP2_PB8MFP_Msk     /*!< BPWM1_CH3        PB8  MFP Mask */
#define BPWM1_CH4_PA14_Msk       SYS_GPA_MFP3_PA14MFP_Msk    /*!< BPWM1_CH4        PA14 MFP Mask */
#define BPWM1_CH4_PB7_Msk        SYS_GPB_MFP1_PB7MFP_Msk     /*!< BPWM1_CH4        PB7  MFP Mask */
#define BPWM1_CH4_PC8_Msk        SYS_GPC_MFP2_PC8MFP_Msk     /*!< BPWM1_CH4        PC8  MFP Mask */
#define BPWM1_CH5_PA15_Msk       SYS_GPA_MFP3_PA15MFP_Msk    /*!< BPWM1_CH5        PA15 MFP Mask */
#define BPWM1_CH5_PB6_Msk        SYS_GPB_MFP1_PB6MFP_Msk     /*!< BPWM1_CH5        PB6  MFP Mask */
#define BPWM1_CH5_PE13_Msk       SYS_GPE_MFP3_PE13MFP_Msk    /*!< BPWM1_CH5        PE13 MFP Mask */

/* BPWM2 MFP Pin Mask */
#define BPWM2_CH0_PC13_Msk       SYS_GPC_MFP3_PC13MFP_Msk    /*!< BPWM2_CH0        PC13 MFP Mask */
#define BPWM2_CH0_PC14_Msk       SYS_GPC_MFP3_PC14MFP_Msk    /*!< BPWM2_CH0        PC14 MFP Mask */
#define BPWM2_CH1_PB15_Msk       SYS_GPB_MFP3_PB15MFP_Msk    /*!< BPWM2_CH1        PB15 MFP Mask */
#define BPWM2_CH1_PD12_Msk       SYS_GPD_MFP3_PD12MFP_Msk    /*!< BPWM2_CH1        PD12 MFP Mask */
#define BPWM2_CH2_PB14_Msk       SYS_GPB_MFP3_PB14MFP_Msk    /*!< BPWM2_CH2        PB14 MFP Mask */
#define BPWM2_CH2_PD11_Msk       SYS_GPD_MFP2_PD11MFP_Msk    /*!< BPWM2_CH2        PD11 MFP Mask */
#define BPWM2_CH3_PA12_Msk       SYS_GPA_MFP3_PA12MFP_Msk    /*!< BPWM2_CH3        PA12 MFP Mask */
#define BPWM2_CH3_PB13_Msk       SYS_GPB_MFP3_PB13MFP_Msk    /*!< BPWM2_CH3        PB13 MFP Mask */
#define BPWM2_CH3_PD10_Msk       SYS_GPD_MFP2_PD10MFP_Msk    /*!< BPWM2_CH3        PD10 MFP Mask */
#define BPWM2_CH4_PA13_Msk       SYS_GPA_MFP3_PA13MFP_Msk    /*!< BPWM2_CH4        PA13 MFP Mask */
#define BPWM2_CH4_PB12_Msk       SYS_GPB_MFP3_PB12MFP_Msk    /*!< BPWM2_CH4        PB12 MFP Mask */
#define BPWM2_CH4_PG2_Msk        SYS_GPG_MFP0_PG2MFP_Msk     /*!< BPWM2_CH4        PG2  MFP Mask */
#define BPWM2_CH5_PA14_Msk       SYS_GPA_MFP3_PA14MFP_Msk    /*!< BPWM2_CH5        PA14 MFP Mask */
#define BPWM2_CH5_PG3_Msk        SYS_GPG_MFP0_PG3MFP_Msk     /*!< BPWM2_CH5        PG3  MFP Mask */

/* BPWM3 MFP Pin Mask */
#define BPWM3_CH0_PA11_Msk       SYS_GPA_MFP2_PA11MFP_Msk    /*!< BPWM3_CH0        PA11 MFP Mask */
#define BPWM3_CH0_PE1_Msk        SYS_GPE_MFP0_PE1MFP_Msk     /*!< BPWM3_CH0        PE1  MFP Mask */
#define BPWM3_CH0_PE14_Msk       SYS_GPE_MFP3_PE14MFP_Msk    /*!< BPWM3_CH0        PE14 MFP Mask */
#define BPWM3_CH1_PA10_Msk       SYS_GPA_MFP2_PA10MFP_Msk    /*!< BPWM3_CH1        PA10 MFP Mask */
#define BPWM3_CH1_PE0_Msk        SYS_GPE_MFP0_PE0MFP_Msk     /*!< BPWM3_CH1        PE0  MFP Mask */
#define BPWM3_CH1_PE15_Msk       SYS_GPE_MFP3_PE15MFP_Msk    /*!< BPWM3_CH1        PE15 MFP Mask */
#define BPWM3_CH2_PA9_Msk        SYS_GPA_MFP2_PA9MFP_Msk     /*!< BPWM3_CH2        PA9  MFP Mask */
#define BPWM3_CH2_PD9_Msk        SYS_GPD_MFP2_PD9MFP_Msk     /*!< BPWM3_CH2        PD9  MFP Mask */
#define BPWM3_CH2_PH8_Msk        SYS_GPH_MFP2_PH8MFP_Msk     /*!< BPWM3_CH2        PH8  MFP Mask */
#define BPWM3_CH3_PA8_Msk        SYS_GPA_MFP2_PA8MFP_Msk     /*!< BPWM3_CH3        PA8  MFP Mask */
#define BPWM3_CH3_PD8_Msk        SYS_GPD_MFP2_PD8MFP_Msk     /*!< BPWM3_CH3        PD8  MFP Mask */
#define BPWM3_CH3_PH9_Msk        SYS_GPH_MFP2_PH9MFP_Msk     /*!< BPWM3_CH3        PH9  MFP Mask */
#define BPWM3_CH4_PF6_Msk        SYS_GPF_MFP1_PF6MFP_Msk     /*!< BPWM3_CH4        PF6  MFP Mask */
#define BPWM3_CH4_PG13_Msk       SYS_GPG_MFP3_PG13MFP_Msk    /*!< BPWM3_CH4        PG13 MFP Mask */
#define BPWM3_CH4_PH10_Msk       SYS_GPH_MFP2_PH10MFP_Msk    /*!< BPWM3_CH4        PH10 MFP Mask */
#define BPWM3_CH5_PF14_Msk       SYS_GPF_MFP3_PF14MFP_Msk    /*!< BPWM3_CH5        PF14 MFP Mask */
#define BPWM3_CH5_PF15_Msk       SYS_GPF_MFP3_PF15MFP_Msk    /*!< BPWM3_CH5        PF15 MFP Mask */
#define BPWM3_CH5_PG14_Msk       SYS_GPG_MFP3_PG14MFP_Msk    /*!< BPWM3_CH5        PG14 MFP Mask */
#define BPWM3_CH5_PH11_Msk       SYS_GPH_MFP2_PH11MFP_Msk    /*!< BPWM3_CH5        PH11 MFP Mask */

/* BPWM4 MFP Pin Mask */
#define BPWM4_CH0_PC5_Msk        SYS_GPC_MFP1_PC5MFP_Msk     /*!< BPWM4_CH0        PC5  MFP Mask */
#define BPWM4_CH0_PD7_Msk        SYS_GPD_MFP1_PD7MFP_Msk     /*!< BPWM4_CH0        PD7  MFP Mask */
#define BPWM4_CH0_PE8_Msk        SYS_GPE_MFP2_PE8MFP_Msk     /*!< BPWM4_CH0        PE8  MFP Mask */
#define BPWM4_CH0_PG4_Msk        SYS_GPG_MFP1_PG4MFP_Msk     /*!< BPWM4_CH0        PG4  MFP Mask */
#define BPWM4_CH1_PC4_Msk        SYS_GPC_MFP1_PC4MFP_Msk     /*!< BPWM4_CH1        PC4  MFP Mask */
#define BPWM4_CH1_PD6_Msk        SYS_GPD_MFP1_PD6MFP_Msk     /*!< BPWM4_CH1        PD6  MFP Mask */
#define BPWM4_CH1_PE9_Msk        SYS_GPE_MFP2_PE9MFP_Msk     /*!< BPWM4_CH1        PE9  MFP Mask */
#define BPWM4_CH1_PF11_Msk       SYS_GPF_MFP2_PF11MFP_Msk    /*!< BPWM4_CH1        PF11 MFP Mask */
#define BPWM4_CH2_PC3_Msk        SYS_GPC_MFP0_PC3MFP_Msk     /*!< BPWM4_CH2        PC3  MFP Mask */
#define BPWM4_CH2_PD5_Msk        SYS_GPD_MFP1_PD5MFP_Msk     /*!< BPWM4_CH2        PD5  MFP Mask */
#define BPWM4_CH2_PE10_Msk       SYS_GPE_MFP2_PE10MFP_Msk    /*!< BPWM4_CH2        PE10 MFP Mask */
#define BPWM4_CH2_PF10_Msk       SYS_GPF_MFP2_PF10MFP_Msk    /*!< BPWM4_CH2        PF10 MFP Mask */
#define BPWM4_CH3_PC2_Msk        SYS_GPC_MFP0_PC2MFP_Msk     /*!< BPWM4_CH3        PC2  MFP Mask */
#define BPWM4_CH3_PD4_Msk        SYS_GPD_MFP1_PD4MFP_Msk     /*!< BPWM4_CH3        PD4  MFP Mask */
#define BPWM4_CH3_PE11_Msk       SYS_GPE_MFP2_PE11MFP_Msk    /*!< BPWM4_CH3        PE11 MFP Mask */
#define BPWM4_CH3_PF9_Msk        SYS_GPF_MFP2_PF9MFP_Msk     /*!< BPWM4_CH3        PF9  MFP Mask */
#define BPWM4_CH4_PC1_Msk        SYS_GPC_MFP0_PC1MFP_Msk     /*!< BPWM4_CH4        PC1  MFP Mask */
#define BPWM4_CH4_PD3_Msk        SYS_GPD_MFP0_PD3MFP_Msk     /*!< BPWM4_CH4        PD3  MFP Mask */
#define BPWM4_CH4_PE12_Msk       SYS_GPE_MFP3_PE12MFP_Msk    /*!< BPWM4_CH4        PE12 MFP Mask */
#define BPWM4_CH4_PF8_Msk        SYS_GPF_MFP2_PF8MFP_Msk     /*!< BPWM4_CH4        PF8  MFP Mask */
#define BPWM4_CH5_PC0_Msk        SYS_GPC_MFP0_PC0MFP_Msk     /*!< BPWM4_CH5        PC0  MFP Mask */
#define BPWM4_CH5_PD2_Msk        SYS_GPD_MFP0_PD2MFP_Msk     /*!< BPWM4_CH5        PD2  MFP Mask */
#define BPWM4_CH5_PE13_Msk       SYS_GPE_MFP3_PE13MFP_Msk    /*!< BPWM4_CH5        PE13 MFP Mask */
#define BPWM4_CH5_PF7_Msk        SYS_GPF_MFP1_PF7MFP_Msk     /*!< BPWM4_CH5        PF7  MFP Mask */

/* BPWM5 MFP Pin Mask */
#define BPWM5_CH0_PE14_Msk       SYS_GPE_MFP3_PE14MFP_Msk    /*!< BPWM5_CH0        PE14 MFP Mask */
#define BPWM5_CH0_PF0_Msk        SYS_GPF_MFP0_PF0MFP_Msk     /*!< BPWM5_CH0        PF0  MFP Mask */
#define BPWM5_CH0_PH4_Msk        SYS_GPH_MFP1_PH4MFP_Msk     /*!< BPWM5_CH0        PH4  MFP Mask */
#define BPWM5_CH1_PE15_Msk       SYS_GPE_MFP3_PE15MFP_Msk    /*!< BPWM5_CH1        PE15 MFP Mask */
#define BPWM5_CH1_PF1_Msk        SYS_GPF_MFP0_PF1MFP_Msk     /*!< BPWM5_CH1        PF1  MFP Mask */
#define BPWM5_CH1_PH5_Msk        SYS_GPH_MFP1_PH5MFP_Msk     /*!< BPWM5_CH1        PH5  MFP Mask */
#define BPWM5_CH2_PG12_Msk       SYS_GPG_MFP3_PG12MFP_Msk    /*!< BPWM5_CH2        PG12 MFP Mask */
#define BPWM5_CH2_PH6_Msk        SYS_GPH_MFP1_PH6MFP_Msk     /*!< BPWM5_CH2        PH6  MFP Mask */
#define BPWM5_CH3_PG11_Msk       SYS_GPG_MFP2_PG11MFP_Msk    /*!< BPWM5_CH3        PG11 MFP Mask */
#define BPWM5_CH3_PH7_Msk        SYS_GPH_MFP1_PH7MFP_Msk     /*!< BPWM5_CH3        PH7  MFP Mask */
#define BPWM5_CH4_PF3_Msk        SYS_GPF_MFP0_PF3MFP_Msk     /*!< BPWM5_CH4        PF3  MFP Mask */
#define BPWM5_CH4_PG10_Msk       SYS_GPG_MFP2_PG10MFP_Msk    /*!< BPWM5_CH4        PG10 MFP Mask */
#define BPWM5_CH5_PF2_Msk        SYS_GPF_MFP0_PF2MFP_Msk     /*!< BPWM5_CH5        PF2  MFP Mask */
#define BPWM5_CH5_PG9_Msk        SYS_GPG_MFP2_PG9MFP_Msk     /*!< BPWM5_CH5        PG9  MFP Mask */

/* CANFD0 MFP Pin Mask */
#define CANFD0_RXD_PA4_Msk       SYS_GPA_MFP1_PA4MFP_Msk     /*!< CANFD0_RXD       PA4  MFP Mask */
#define CANFD0_RXD_PA13_Msk      SYS_GPA_MFP3_PA13MFP_Msk    /*!< CANFD0_RXD       PA13 MFP Mask */
#define CANFD0_RXD_PB10_Msk      SYS_GPB_MFP2_PB10MFP_Msk    /*!< CANFD0_RXD       PB10 MFP Mask */
#define CANFD0_RXD_PC4_Msk       SYS_GPC_MFP1_PC4MFP_Msk     /*!< CANFD0_RXD       PC4  MFP Mask */
#define CANFD0_RXD_PD10_Msk      SYS_GPD_MFP2_PD10MFP_Msk    /*!< CANFD0_RXD       PD10 MFP Mask */
#define CANFD0_RXD_PE15_Msk      SYS_GPE_MFP3_PE15MFP_Msk    /*!< CANFD0_RXD       PE15 MFP Mask */
#define CANFD0_TXD_PA5_Msk       SYS_GPA_MFP1_PA5MFP_Msk     /*!< CANFD0_TXD       PA5  MFP Mask */
#define CANFD0_TXD_PA12_Msk      SYS_GPA_MFP3_PA12MFP_Msk    /*!< CANFD0_TXD       PA12 MFP Mask */
#define CANFD0_TXD_PB11_Msk      SYS_GPB_MFP2_PB11MFP_Msk    /*!< CANFD0_TXD       PB11 MFP Mask */
#define CANFD0_TXD_PC5_Msk       SYS_GPC_MFP1_PC5MFP_Msk     /*!< CANFD0_TXD       PC5  MFP Mask */
#define CANFD0_TXD_PD11_Msk      SYS_GPD_MFP2_PD11MFP_Msk    /*!< CANFD0_TXD       PD11 MFP Mask */
#define CANFD0_TXD_PE14_Msk      SYS_GPE_MFP3_PE14MFP_Msk    /*!< CANFD0_TXD       PE14 MFP Mask */
#define CANFD0_TXH_PA5_Msk       SYS_GPA_MFP1_PA5MFP_Msk     /*!< CANFD0_TXH       PA5  MFP Mask */
#define CANFD0_TXH_PA12_Msk      SYS_GPA_MFP3_PA12MFP_Msk    /*!< CANFD0_TXH       PA12 MFP Mask */
#define CANFD0_TXH_PB11_Msk      SYS_GPB_MFP2_PB11MFP_Msk    /*!< CANFD0_TXH       PB11 MFP Mask */
#define CANFD0_TXH_PC5_Msk       SYS_GPC_MFP1_PC5MFP_Msk     /*!< CANFD0_TXH       PC5  MFP Mask */
#define CANFD0_TXH_PD11_Msk      SYS_GPD_MFP2_PD11MFP_Msk    /*!< CANFD0_TXH       PD11 MFP Mask */
#define CANFD0_TXL_PA6_Msk       SYS_GPA_MFP1_PA6MFP_Msk     /*!< CANFD0_TXL       PA6  MFP Mask */
#define CANFD0_TXL_PB12_Msk      SYS_GPB_MFP3_PB12MFP_Msk    /*!< CANFD0_TXL       PB12 MFP Mask */
#define CANFD0_TXL_PD8_Msk       SYS_GPD_MFP2_PD8MFP_Msk     /*!< CANFD0_TXL       PD8  MFP Mask */
#define CANFD0_TXL_PD12_Msk      SYS_GPD_MFP3_PD12MFP_Msk    /*!< CANFD0_TXL       PD12 MFP Mask */
#define CANFD0_TXL_PD13_Msk      SYS_GPD_MFP3_PD13MFP_Msk    /*!< CANFD0_TXL       PD13 MFP Mask */

/* CANFD1 MFP Pin Mask */
#define CANFD1_RXD_PB6_Msk       SYS_GPB_MFP1_PB6MFP_Msk     /*!< CANFD1_RXD       PB6  MFP Mask */
#define CANFD1_RXD_PC2_Msk       SYS_GPC_MFP0_PC2MFP_Msk     /*!< CANFD1_RXD       PC2  MFP Mask */
#define CANFD1_RXD_PC9_Msk       SYS_GPC_MFP2_PC9MFP_Msk     /*!< CANFD1_RXD       PC9  MFP Mask */
#define CANFD1_RXD_PD12_Msk      SYS_GPD_MFP3_PD12MFP_Msk    /*!< CANFD1_RXD       PD12 MFP Mask */
#define CANFD1_RXD_PE6_Msk       SYS_GPE_MFP1_PE6MFP_Msk     /*!< CANFD1_RXD       PE6  MFP Mask */
#define CANFD1_RXD_PF8_Msk       SYS_GPF_MFP2_PF8MFP_Msk     /*!< CANFD1_RXD       PF8  MFP Mask */
#define CANFD1_TXD_PB7_Msk       SYS_GPB_MFP1_PB7MFP_Msk     /*!< CANFD1_TXD       PB7  MFP Mask */
#define CANFD1_TXD_PC3_Msk       SYS_GPC_MFP0_PC3MFP_Msk     /*!< CANFD1_TXD       PC3  MFP Mask */
#define CANFD1_TXD_PC10_Msk      SYS_GPC_MFP2_PC10MFP_Msk    /*!< CANFD1_TXD       PC10 MFP Mask */
#define CANFD1_TXD_PC13_Msk      SYS_GPC_MFP3_PC13MFP_Msk    /*!< CANFD1_TXD       PC13 MFP Mask */
#define CANFD1_TXD_PE7_Msk       SYS_GPE_MFP1_PE7MFP_Msk     /*!< CANFD1_TXD       PE7  MFP Mask */
#define CANFD1_TXD_PF9_Msk       SYS_GPF_MFP2_PF9MFP_Msk     /*!< CANFD1_TXD       PF9  MFP Mask */
#define CANFD1_TXH_PB7_Msk       SYS_GPB_MFP1_PB7MFP_Msk     /*!< CANFD1_TXH       PB7  MFP Mask */
#define CANFD1_TXH_PC3_Msk       SYS_GPC_MFP0_PC3MFP_Msk     /*!< CANFD1_TXH       PC3  MFP Mask */
#define CANFD1_TXH_PC10_Msk      SYS_GPC_MFP2_PC10MFP_Msk    /*!< CANFD1_TXH       PC10 MFP Mask */
#define CANFD1_TXH_PC13_Msk      SYS_GPC_MFP3_PC13MFP_Msk    /*!< CANFD1_TXH       PC13 MFP Mask */
#define CANFD1_TXH_PE7_Msk       SYS_GPE_MFP1_PE7MFP_Msk     /*!< CANFD1_TXH       PE7  MFP Mask */
#define CANFD1_TXH_PF9_Msk       SYS_GPF_MFP2_PF9MFP_Msk     /*!< CANFD1_TXH       PF9  MFP Mask */
#define CANFD1_TXL_PA8_Msk       SYS_GPA_MFP2_PA8MFP_Msk     /*!< CANFD1_TXL       PA8  MFP Mask */
#define CANFD1_TXL_PB8_Msk       SYS_GPB_MFP2_PB8MFP_Msk     /*!< CANFD1_TXL       PB8  MFP Mask */
#define CANFD1_TXL_PC4_Msk       SYS_GPC_MFP1_PC4MFP_Msk     /*!< CANFD1_TXL       PC4  MFP Mask */
#define CANFD1_TXL_PC11_Msk      SYS_GPC_MFP2_PC11MFP_Msk    /*!< CANFD1_TXL       PC11 MFP Mask */
#define CANFD1_TXL_PE5_Msk       SYS_GPE_MFP1_PE5MFP_Msk     /*!< CANFD1_TXL       PE5  MFP Mask */
#define CANFD1_TXL_PF10_Msk      SYS_GPF_MFP2_PF10MFP_Msk    /*!< CANFD1_TXL       PF10 MFP Mask */

/* CLKO MFP Pin Mask */
#define CLKO_PB13_Msk            SYS_GPB_MFP3_PB13MFP_Msk    /*!< CLKO             PB13 MFP Mask */
#define CLKO_PB14_Msk            SYS_GPB_MFP3_PB14MFP_Msk    /*!< CLKO             PB14 MFP Mask */
#define CLKO_PC13_Msk            SYS_GPC_MFP3_PC13MFP_Msk    /*!< CLKO             PC13 MFP Mask */
#define CLKO_PD12_Msk            SYS_GPD_MFP3_PD12MFP_Msk    /*!< CLKO             PD12 MFP Mask */
#define CLKO_PD13_Msk            SYS_GPD_MFP3_PD13MFP_Msk    /*!< CLKO             PD13 MFP Mask */

/* EADC0 MFP Pin Mask */
#define EADC0_ST_PC1_Msk         SYS_GPC_MFP0_PC1MFP_Msk     /*!< EADC0_ST         PC1  MFP Mask */
#define EADC0_ST_PC13_Msk        SYS_GPC_MFP3_PC13MFP_Msk    /*!< EADC0_ST         PC13 MFP Mask */
#define EADC0_ST_PD5_Msk         SYS_GPD_MFP1_PD5MFP_Msk     /*!< EADC0_ST         PD5  MFP Mask */
#define EADC0_ST_PD12_Msk        SYS_GPD_MFP3_PD12MFP_Msk    /*!< EADC0_ST         PD12 MFP Mask */
#define EADC0_ST_PD13_Msk        SYS_GPD_MFP3_PD13MFP_Msk    /*!< EADC0_ST         PD13 MFP Mask */
#define EADC0_ST_PF0_Msk         SYS_GPF_MFP0_PF0MFP_Msk     /*!< EADC0_ST         PF0  MFP Mask */
#define EADC0_ST_PF5_Msk         SYS_GPF_MFP1_PF5MFP_Msk     /*!< EADC0_ST         PF5  MFP Mask */
#define EADC0_ST_PG14_Msk        SYS_GPG_MFP3_PG14MFP_Msk    /*!< EADC0_ST         PG14 MFP Mask */
#define EADC0_CH5_PB5_Msk        SYS_GPB_MFP1_PB5MFP_Msk     /*!< EADC0_CH5        PB5  MFP Mask */
#define EADC0_CH4_PB4_Msk        SYS_GPB_MFP1_PB4MFP_Msk     /*!< EADC0_CH4        PB4  MFP Mask */
#define EADC0_CH3_PB3_Msk        SYS_GPB_MFP0_PB3MFP_Msk     /*!< EADC0_CH3        PB3  MFP Mask */
#define EADC0_CH2_PB2_Msk        SYS_GPB_MFP0_PB2MFP_Msk     /*!< EADC0_CH2        PB2  MFP Mask */
#define EADC0_CH1_PB1_Msk        SYS_GPB_MFP0_PB1MFP_Msk     /*!< EADC0_CH1        PB1  MFP Mask */
#define EADC0_CH0_PB0_Msk        SYS_GPB_MFP0_PB0MFP_Msk     /*!< EADC0_CH0        PB0  MFP Mask */
#define EADC0_CH15_PB15_Msk      SYS_GPB_MFP3_PB15MFP_Msk    /*!< EADC0_CH15       PB15 MFP Mask */
#define EADC0_CH14_PB14_Msk      SYS_GPB_MFP3_PB14MFP_Msk    /*!< EADC0_CH14       PB14 MFP Mask */
#define EADC0_CH13_PB13_Msk      SYS_GPB_MFP3_PB13MFP_Msk    /*!< EADC0_CH13       PB13 MFP Mask */
#define EADC0_CH12_PB12_Msk      SYS_GPB_MFP3_PB12MFP_Msk    /*!< EADC0_CH12       PB12 MFP Mask */
#define EADC0_CH11_PB11_Msk      SYS_GPB_MFP2_PB11MFP_Msk    /*!< EADC0_CH11       PB11 MFP Mask */
#define EADC0_CH10_PB10_Msk      SYS_GPB_MFP2_PB10MFP_Msk    /*!< EADC0_CH10       PB10 MFP Mask */
#define EADC0_CH9_PB9_Msk        SYS_GPB_MFP2_PB9MFP_Msk     /*!< EADC0_CH9        PB9  MFP Mask */
#define EADC0_CH8_PB8_Msk        SYS_GPB_MFP2_PB8MFP_Msk     /*!< EADC0_CH8        PB8  MFP Mask */
#define EADC0_CH7_PB7_Msk        SYS_GPB_MFP1_PB7MFP_Msk     /*!< EADC0_CH7        PB7  MFP Mask */
#define EADC0_CH6_PB6_Msk        SYS_GPB_MFP1_PB6MFP_Msk     /*!< EADC0_CH6        PB6  MFP Mask */

/* EBI MFP Pin Mask */
#define EBI_AD0_PA5_Msk          SYS_GPA_MFP1_PA5MFP_Msk     /*!< EBI_AD0          PA5  MFP Mask */
#define EBI_AD0_PC0_Msk          SYS_GPC_MFP0_PC0MFP_Msk     /*!< EBI_AD0          PC0  MFP Mask */
#define EBI_AD0_PF4_Msk          SYS_GPF_MFP1_PF4MFP_Msk     /*!< EBI_AD0          PF4  MFP Mask */
#define EBI_AD0_PG9_Msk          SYS_GPG_MFP2_PG9MFP_Msk     /*!< EBI_AD0          PG9  MFP Mask */
#define EBI_AD1_PA4_Msk          SYS_GPA_MFP1_PA4MFP_Msk     /*!< EBI_AD1          PA4  MFP Mask */
#define EBI_AD1_PC1_Msk          SYS_GPC_MFP0_PC1MFP_Msk     /*!< EBI_AD1          PC1  MFP Mask */
#define EBI_AD1_PF5_Msk          SYS_GPF_MFP1_PF5MFP_Msk     /*!< EBI_AD1          PF5  MFP Mask */
#define EBI_AD1_PG10_Msk         SYS_GPG_MFP2_PG10MFP_Msk    /*!< EBI_AD1          PG10 MFP Mask */
#define EBI_AD10_PD3_Msk         SYS_GPD_MFP0_PD3MFP_Msk     /*!< EBI_AD10         PD3  MFP Mask */
#define EBI_AD10_PD13_Msk        SYS_GPD_MFP3_PD13MFP_Msk    /*!< EBI_AD10         PD13 MFP Mask */
#define EBI_AD10_PE1_Msk         SYS_GPE_MFP0_PE1MFP_Msk     /*!< EBI_AD10         PE1  MFP Mask */
#define EBI_AD10_PE7_Msk         SYS_GPE_MFP1_PE7MFP_Msk     /*!< EBI_AD10         PE7  MFP Mask */
#define EBI_AD11_PB12_Msk        SYS_GPB_MFP3_PB12MFP_Msk    /*!< EBI_AD11         PB12 MFP Mask */
#define EBI_AD11_PC14_Msk        SYS_GPC_MFP3_PC14MFP_Msk    /*!< EBI_AD11         PC14 MFP Mask */
#define EBI_AD11_PD2_Msk         SYS_GPD_MFP0_PD2MFP_Msk     /*!< EBI_AD11         PD2  MFP Mask */
#define EBI_AD11_PE0_Msk         SYS_GPE_MFP0_PE0MFP_Msk     /*!< EBI_AD11         PE0  MFP Mask */
#define EBI_AD11_PE6_Msk         SYS_GPE_MFP1_PE6MFP_Msk     /*!< EBI_AD11         PE6  MFP Mask */
#define EBI_AD12_PB15_Msk        SYS_GPB_MFP3_PB15MFP_Msk    /*!< EBI_AD12         PB15 MFP Mask */
#define EBI_AD12_PD1_Msk         SYS_GPD_MFP0_PD1MFP_Msk     /*!< EBI_AD12         PD1  MFP Mask */
#define EBI_AD12_PH8_Msk         SYS_GPH_MFP2_PH8MFP_Msk     /*!< EBI_AD12         PH8  MFP Mask */
#define EBI_AD13_PB14_Msk        SYS_GPB_MFP3_PB14MFP_Msk    /*!< EBI_AD13         PB14 MFP Mask */
#define EBI_AD13_PD0_Msk         SYS_GPD_MFP0_PD0MFP_Msk     /*!< EBI_AD13         PD0  MFP Mask */
#define EBI_AD13_PH9_Msk         SYS_GPH_MFP2_PH9MFP_Msk     /*!< EBI_AD13         PH9  MFP Mask */
#define EBI_AD14_PB13_Msk        SYS_GPB_MFP3_PB13MFP_Msk    /*!< EBI_AD14         PB13 MFP Mask */
#define EBI_AD14_PH10_Msk        SYS_GPH_MFP2_PH10MFP_Msk    /*!< EBI_AD14         PH10 MFP Mask */
#define EBI_AD15_PB12_Msk        SYS_GPB_MFP3_PB12MFP_Msk    /*!< EBI_AD15         PB12 MFP Mask */
#define EBI_AD15_PD5_Msk         SYS_GPD_MFP1_PD5MFP_Msk     /*!< EBI_AD15         PD5  MFP Mask */
#define EBI_AD15_PH11_Msk        SYS_GPH_MFP2_PH11MFP_Msk    /*!< EBI_AD15         PH11 MFP Mask */
#define EBI_AD2_PC2_Msk          SYS_GPC_MFP0_PC2MFP_Msk     /*!< EBI_AD2          PC2  MFP Mask */
#define EBI_AD2_PG11_Msk         SYS_GPG_MFP2_PG11MFP_Msk    /*!< EBI_AD2          PG11 MFP Mask */
#define EBI_AD3_PC3_Msk          SYS_GPC_MFP0_PC3MFP_Msk     /*!< EBI_AD3          PC3  MFP Mask */
#define EBI_AD3_PG12_Msk         SYS_GPG_MFP3_PG12MFP_Msk    /*!< EBI_AD3          PG12 MFP Mask */
#define EBI_AD4_PC4_Msk          SYS_GPC_MFP1_PC4MFP_Msk     /*!< EBI_AD4          PC4  MFP Mask */
#define EBI_AD4_PG13_Msk         SYS_GPG_MFP3_PG13MFP_Msk    /*!< EBI_AD4          PG13 MFP Mask */
#define EBI_AD5_PA14_Msk         SYS_GPA_MFP3_PA14MFP_Msk    /*!< EBI_AD5          PA14 MFP Mask */
#define EBI_AD5_PC5_Msk          SYS_GPC_MFP1_PC5MFP_Msk     /*!< EBI_AD5          PC5  MFP Mask */
#define EBI_AD5_PD4_Msk          SYS_GPD_MFP1_PD4MFP_Msk     /*!< EBI_AD5          PD4  MFP Mask */
#define EBI_AD5_PG14_Msk         SYS_GPG_MFP3_PG14MFP_Msk    /*!< EBI_AD5          PG14 MFP Mask */
#define EBI_AD6_PA6_Msk          SYS_GPA_MFP1_PA6MFP_Msk     /*!< EBI_AD6          PA6  MFP Mask */
#define EBI_AD6_PD8_Msk          SYS_GPD_MFP2_PD8MFP_Msk     /*!< EBI_AD6          PD8  MFP Mask */
#define EBI_AD7_PA7_Msk          SYS_GPA_MFP1_PA7MFP_Msk     /*!< EBI_AD7          PA7  MFP Mask */
#define EBI_AD7_PD9_Msk          SYS_GPD_MFP2_PD9MFP_Msk     /*!< EBI_AD7          PD9  MFP Mask */
#define EBI_AD8_PC6_Msk          SYS_GPC_MFP1_PC6MFP_Msk     /*!< EBI_AD8          PC6  MFP Mask */
#define EBI_AD8_PE14_Msk         SYS_GPE_MFP3_PE14MFP_Msk    /*!< EBI_AD8          PE14 MFP Mask */
#define EBI_AD9_PC7_Msk          SYS_GPC_MFP1_PC7MFP_Msk     /*!< EBI_AD9          PC7  MFP Mask */
#define EBI_AD9_PE15_Msk         SYS_GPE_MFP3_PE15MFP_Msk    /*!< EBI_AD9          PE15 MFP Mask */
#define EBI_ADR0_PB5_Msk         SYS_GPB_MFP1_PB5MFP_Msk     /*!< EBI_ADR0         PB5  MFP Mask */
#define EBI_ADR0_PH7_Msk         SYS_GPH_MFP1_PH7MFP_Msk     /*!< EBI_ADR0         PH7  MFP Mask */
#define EBI_ADR1_PB4_Msk         SYS_GPB_MFP1_PB4MFP_Msk     /*!< EBI_ADR1         PB4  MFP Mask */
#define EBI_ADR1_PH6_Msk         SYS_GPH_MFP1_PH6MFP_Msk     /*!< EBI_ADR1         PH6  MFP Mask */
#define EBI_ADR10_PC13_Msk       SYS_GPC_MFP3_PC13MFP_Msk    /*!< EBI_ADR10        PC13 MFP Mask */
#define EBI_ADR10_PE8_Msk        SYS_GPE_MFP2_PE8MFP_Msk     /*!< EBI_ADR10        PE8  MFP Mask */
#define EBI_ADR11_PE9_Msk        SYS_GPE_MFP2_PE9MFP_Msk     /*!< EBI_ADR11        PE9  MFP Mask */
#define EBI_ADR11_PG2_Msk        SYS_GPG_MFP0_PG2MFP_Msk     /*!< EBI_ADR11        PG2  MFP Mask */
#define EBI_ADR12_PE10_Msk       SYS_GPE_MFP2_PE10MFP_Msk    /*!< EBI_ADR12        PE10 MFP Mask */
#define EBI_ADR12_PG3_Msk        SYS_GPG_MFP0_PG3MFP_Msk     /*!< EBI_ADR12        PG3  MFP Mask */
#define EBI_ADR13_PE11_Msk       SYS_GPE_MFP2_PE11MFP_Msk    /*!< EBI_ADR13        PE11 MFP Mask */
#define EBI_ADR13_PG4_Msk        SYS_GPG_MFP1_PG4MFP_Msk     /*!< EBI_ADR13        PG4  MFP Mask */
#define EBI_ADR14_PE12_Msk       SYS_GPE_MFP3_PE12MFP_Msk    /*!< EBI_ADR14        PE12 MFP Mask */
#define EBI_ADR14_PF11_Msk       SYS_GPF_MFP2_PF11MFP_Msk    /*!< EBI_ADR14        PF11 MFP Mask */
#define EBI_ADR15_PE13_Msk       SYS_GPE_MFP3_PE13MFP_Msk    /*!< EBI_ADR15        PE13 MFP Mask */
#define EBI_ADR15_PF10_Msk       SYS_GPF_MFP2_PF10MFP_Msk    /*!< EBI_ADR15        PF10 MFP Mask */
#define EBI_ADR16_PB11_Msk       SYS_GPB_MFP2_PB11MFP_Msk    /*!< EBI_ADR16        PB11 MFP Mask */
#define EBI_ADR16_PC8_Msk        SYS_GPC_MFP2_PC8MFP_Msk     /*!< EBI_ADR16        PC8  MFP Mask */
#define EBI_ADR16_PF9_Msk        SYS_GPF_MFP2_PF9MFP_Msk     /*!< EBI_ADR16        PF9  MFP Mask */
#define EBI_ADR17_PB10_Msk       SYS_GPB_MFP2_PB10MFP_Msk    /*!< EBI_ADR17        PB10 MFP Mask */
#define EBI_ADR17_PF8_Msk        SYS_GPF_MFP2_PF8MFP_Msk     /*!< EBI_ADR17        PF8  MFP Mask */
#define EBI_ADR18_PB9_Msk        SYS_GPB_MFP2_PB9MFP_Msk     /*!< EBI_ADR18        PB9  MFP Mask */
#define EBI_ADR18_PF7_Msk        SYS_GPF_MFP1_PF7MFP_Msk     /*!< EBI_ADR18        PF7  MFP Mask */
#define EBI_ADR19_PB8_Msk        SYS_GPB_MFP2_PB8MFP_Msk     /*!< EBI_ADR19        PB8  MFP Mask */
#define EBI_ADR19_PF6_Msk        SYS_GPF_MFP1_PF6MFP_Msk     /*!< EBI_ADR19        PF6  MFP Mask */
#define EBI_ADR2_PB3_Msk         SYS_GPB_MFP0_PB3MFP_Msk     /*!< EBI_ADR2         PB3  MFP Mask */
#define EBI_ADR2_PH5_Msk         SYS_GPH_MFP1_PH5MFP_Msk     /*!< EBI_ADR2         PH5  MFP Mask */
#define EBI_ADR3_PB2_Msk         SYS_GPB_MFP0_PB2MFP_Msk     /*!< EBI_ADR3         PB2  MFP Mask */
#define EBI_ADR3_PH4_Msk         SYS_GPH_MFP1_PH4MFP_Msk     /*!< EBI_ADR3         PH4  MFP Mask */
#define EBI_ADR4_PC12_Msk        SYS_GPC_MFP3_PC12MFP_Msk    /*!< EBI_ADR4         PC12 MFP Mask */
#define EBI_ADR5_PC11_Msk        SYS_GPC_MFP2_PC11MFP_Msk    /*!< EBI_ADR5         PC11 MFP Mask */
#define EBI_ADR6_PC10_Msk        SYS_GPC_MFP2_PC10MFP_Msk    /*!< EBI_ADR6         PC10 MFP Mask */
#define EBI_ADR7_PC9_Msk         SYS_GPC_MFP2_PC9MFP_Msk     /*!< EBI_ADR7         PC9  MFP Mask */
#define EBI_ADR8_PB1_Msk         SYS_GPB_MFP0_PB1MFP_Msk     /*!< EBI_ADR8         PB1  MFP Mask */
#define EBI_ADR9_PB0_Msk         SYS_GPB_MFP0_PB0MFP_Msk     /*!< EBI_ADR9         PB0  MFP Mask */
#define EBI_ALE_PA8_Msk          SYS_GPA_MFP2_PA8MFP_Msk     /*!< EBI_ALE          PA8  MFP Mask */
#define EBI_ALE_PE2_Msk          SYS_GPE_MFP0_PE2MFP_Msk     /*!< EBI_ALE          PE2  MFP Mask */
#define EBI_MCLK_PA9_Msk         SYS_GPA_MFP2_PA9MFP_Msk     /*!< EBI_MCLK         PA9  MFP Mask */
#define EBI_MCLK_PE3_Msk         SYS_GPE_MFP0_PE3MFP_Msk     /*!< EBI_MCLK         PE3  MFP Mask */
#define EBI_nCS0_PB7_Msk         SYS_GPB_MFP1_PB7MFP_Msk     /*!< EBI_nCS0         PB7  MFP Mask */
#define EBI_nCS0_PD12_Msk        SYS_GPD_MFP3_PD12MFP_Msk    /*!< EBI_nCS0         PD12 MFP Mask */
#define EBI_nCS0_PD14_Msk        SYS_GPD_MFP3_PD14MFP_Msk    /*!< EBI_nCS0         PD14 MFP Mask */
#define EBI_nCS0_PF3_Msk         SYS_GPF_MFP0_PF3MFP_Msk     /*!< EBI_nCS0         PF3  MFP Mask */
#define EBI_nCS0_PF6_Msk         SYS_GPF_MFP1_PF6MFP_Msk     /*!< EBI_nCS0         PF6  MFP Mask */
#define EBI_nCS1_PB6_Msk         SYS_GPB_MFP1_PB6MFP_Msk     /*!< EBI_nCS1         PB6  MFP Mask */
#define EBI_nCS1_PD11_Msk        SYS_GPD_MFP2_PD11MFP_Msk    /*!< EBI_nCS1         PD11 MFP Mask */
#define EBI_nCS1_PF2_Msk         SYS_GPF_MFP0_PF2MFP_Msk     /*!< EBI_nCS1         PF2  MFP Mask */
#define EBI_nCS2_PD10_Msk        SYS_GPD_MFP2_PD10MFP_Msk    /*!< EBI_nCS2         PD10 MFP Mask */
#define EBI_nRD_PA11_Msk         SYS_GPA_MFP2_PA11MFP_Msk    /*!< EBI_nRD          PA11 MFP Mask */
#define EBI_nRD_PE5_Msk          SYS_GPE_MFP1_PE5MFP_Msk     /*!< EBI_nRD          PE5  MFP Mask */
#define EBI_nWR_PA10_Msk         SYS_GPA_MFP2_PA10MFP_Msk    /*!< EBI_nWR          PA10 MFP Mask */
#define EBI_nWR_PE4_Msk          SYS_GPE_MFP1_PE4MFP_Msk     /*!< EBI_nWR          PE4  MFP Mask */
#define EBI_nWRH_PB6_Msk         SYS_GPB_MFP1_PB6MFP_Msk     /*!< EBI_nWRH         PB6  MFP Mask */
#define EBI_nWRL_PB7_Msk         SYS_GPB_MFP1_PB7MFP_Msk     /*!< EBI_nWRL         PB7  MFP Mask */

/* ECAP0 MFP Pin Mask */
#define ECAP0_IC0_PA10_Msk       SYS_GPA_MFP2_PA10MFP_Msk    /*!< ECAP0_IC0        PA10 MFP Mask */
#define ECAP0_IC0_PE8_Msk        SYS_GPE_MFP2_PE8MFP_Msk     /*!< ECAP0_IC0        PE8  MFP Mask */
#define ECAP0_IC1_PA9_Msk        SYS_GPA_MFP2_PA9MFP_Msk     /*!< ECAP0_IC1        PA9  MFP Mask */
#define ECAP0_IC1_PE9_Msk        SYS_GPE_MFP2_PE9MFP_Msk     /*!< ECAP0_IC1        PE9  MFP Mask */
#define ECAP0_IC2_PA8_Msk        SYS_GPA_MFP2_PA8MFP_Msk     /*!< ECAP0_IC2        PA8  MFP Mask */
#define ECAP0_IC2_PE10_Msk       SYS_GPE_MFP2_PE10MFP_Msk    /*!< ECAP0_IC2        PE10 MFP Mask */

/* ELLSI0 MFP Pin Mask */
#define ELLSI0_OUT_PA7_Msk       SYS_GPA_MFP1_PA7MFP_Msk     /*!< ELLSI0_OUT       PA7  MFP Mask */
#define ELLSI0_OUT_PB1_Msk       SYS_GPB_MFP0_PB1MFP_Msk     /*!< ELLSI0_OUT       PB1  MFP Mask */
#define ELLSI0_OUT_PB9_Msk       SYS_GPB_MFP2_PB9MFP_Msk     /*!< ELLSI0_OUT       PB9  MFP Mask */
#define ELLSI0_OUT_PC1_Msk       SYS_GPC_MFP0_PC1MFP_Msk     /*!< ELLSI0_OUT       PC1  MFP Mask */

/* EPWM0 MFP Pin Mask */
#define EPWM0_BRAKE0_PB1_Msk     SYS_GPB_MFP0_PB1MFP_Msk     /*!< EPWM0_BRAKE0     PB1  MFP Mask */
#define EPWM0_BRAKE0_PE8_Msk     SYS_GPE_MFP2_PE8MFP_Msk     /*!< EPWM0_BRAKE0     PE8  MFP Mask */
#define EPWM0_BRAKE1_PA11_Msk    SYS_GPA_MFP2_PA11MFP_Msk    /*!< EPWM0_BRAKE1     PA11 MFP Mask */
#define EPWM0_BRAKE1_PB0_Msk     SYS_GPB_MFP0_PB0MFP_Msk     /*!< EPWM0_BRAKE1     PB0  MFP Mask */
#define EPWM0_BRAKE1_PB15_Msk    SYS_GPB_MFP3_PB15MFP_Msk    /*!< EPWM0_BRAKE1     PB15 MFP Mask */
#define EPWM0_BRAKE1_PE9_Msk     SYS_GPE_MFP2_PE9MFP_Msk     /*!< EPWM0_BRAKE1     PE9  MFP Mask */
#define EPWM0_CH0_PA5_Msk        SYS_GPA_MFP1_PA5MFP_Msk     /*!< EPWM0_CH0        PA5  MFP Mask */
#define EPWM0_CH0_PB5_Msk        SYS_GPB_MFP1_PB5MFP_Msk     /*!< EPWM0_CH0        PB5  MFP Mask */
#define EPWM0_CH0_PE7_Msk        SYS_GPE_MFP1_PE7MFP_Msk     /*!< EPWM0_CH0        PE7  MFP Mask */
#define EPWM0_CH0_PE8_Msk        SYS_GPE_MFP2_PE8MFP_Msk     /*!< EPWM0_CH0        PE8  MFP Mask */
#define EPWM0_CH0_PF5_Msk        SYS_GPF_MFP1_PF5MFP_Msk     /*!< EPWM0_CH0        PF5  MFP Mask */
#define EPWM0_CH1_PA4_Msk        SYS_GPA_MFP1_PA4MFP_Msk     /*!< EPWM0_CH1        PA4  MFP Mask */
#define EPWM0_CH1_PB4_Msk        SYS_GPB_MFP1_PB4MFP_Msk     /*!< EPWM0_CH1        PB4  MFP Mask */
#define EPWM0_CH1_PE6_Msk        SYS_GPE_MFP1_PE6MFP_Msk     /*!< EPWM0_CH1        PE6  MFP Mask */
#define EPWM0_CH1_PE9_Msk        SYS_GPE_MFP2_PE9MFP_Msk     /*!< EPWM0_CH1        PE9  MFP Mask */
#define EPWM0_CH1_PF4_Msk        SYS_GPF_MFP1_PF4MFP_Msk     /*!< EPWM0_CH1        PF4  MFP Mask */
#define EPWM0_CH2_PA3_Msk        SYS_GPA_MFP0_PA3MFP_Msk     /*!< EPWM0_CH2        PA3  MFP Mask */
#define EPWM0_CH2_PB3_Msk        SYS_GPB_MFP0_PB3MFP_Msk     /*!< EPWM0_CH2        PB3  MFP Mask */
#define EPWM0_CH2_PE5_Msk        SYS_GPE_MFP1_PE5MFP_Msk     /*!< EPWM0_CH2        PE5  MFP Mask */
#define EPWM0_CH2_PE10_Msk       SYS_GPE_MFP2_PE10MFP_Msk    /*!< EPWM0_CH2        PE10 MFP Mask */
#define EPWM0_CH3_PA2_Msk        SYS_GPA_MFP0_PA2MFP_Msk     /*!< EPWM0_CH3        PA2  MFP Mask */
#define EPWM0_CH3_PB2_Msk        SYS_GPB_MFP0_PB2MFP_Msk     /*!< EPWM0_CH3        PB2  MFP Mask */
#define EPWM0_CH3_PE4_Msk        SYS_GPE_MFP1_PE4MFP_Msk     /*!< EPWM0_CH3        PE4  MFP Mask */
#define EPWM0_CH3_PE11_Msk       SYS_GPE_MFP2_PE11MFP_Msk    /*!< EPWM0_CH3        PE11 MFP Mask */
#define EPWM0_CH4_PA1_Msk        SYS_GPA_MFP0_PA1MFP_Msk     /*!< EPWM0_CH4        PA1  MFP Mask */
#define EPWM0_CH4_PB1_Msk        SYS_GPB_MFP0_PB1MFP_Msk     /*!< EPWM0_CH4        PB1  MFP Mask */
#define EPWM0_CH4_PD14_Msk       SYS_GPD_MFP3_PD14MFP_Msk    /*!< EPWM0_CH4        PD14 MFP Mask */
#define EPWM0_CH4_PE3_Msk        SYS_GPE_MFP0_PE3MFP_Msk     /*!< EPWM0_CH4        PE3  MFP Mask */
#define EPWM0_CH4_PE12_Msk       SYS_GPE_MFP3_PE12MFP_Msk    /*!< EPWM0_CH4        PE12 MFP Mask */
#define EPWM0_CH4_PH5_Msk        SYS_GPH_MFP1_PH5MFP_Msk     /*!< EPWM0_CH4        PH5  MFP Mask */
#define EPWM0_CH5_PA0_Msk        SYS_GPA_MFP0_PA0MFP_Msk     /*!< EPWM0_CH5        PA0  MFP Mask */
#define EPWM0_CH5_PB0_Msk        SYS_GPB_MFP0_PB0MFP_Msk     /*!< EPWM0_CH5        PB0  MFP Mask */
#define EPWM0_CH5_PE2_Msk        SYS_GPE_MFP0_PE2MFP_Msk     /*!< EPWM0_CH5        PE2  MFP Mask */
#define EPWM0_CH5_PE13_Msk       SYS_GPE_MFP3_PE13MFP_Msk    /*!< EPWM0_CH5        PE13 MFP Mask */
#define EPWM0_CH5_PH4_Msk        SYS_GPH_MFP1_PH4MFP_Msk     /*!< EPWM0_CH5        PH4  MFP Mask */
#define EPWM0_CH5_PH11_Msk       SYS_GPH_MFP2_PH11MFP_Msk    /*!< EPWM0_CH5        PH11 MFP Mask */
#define EPWM0_SYNC_OUT_PA11_Msk  SYS_GPA_MFP2_PA11MFP_Msk    /*!< EPWM0_SYNC_OUT   PA11 MFP Mask */
#define EPWM0_SYNC_OUT_PF5_Msk   SYS_GPF_MFP1_PF5MFP_Msk     /*!< EPWM0_SYNC_OUT   PF5  MFP Mask */
#define EPWM0_SYNC_IN_PA15_Msk   SYS_GPA_MFP3_PA15MFP_Msk    /*!< EPWM0_SYNC_IN    PA15 MFP Mask */
#define EPWM0_SYNC_IN_PB6_Msk    SYS_GPB_MFP1_PB6MFP_Msk     /*!< EPWM0_SYNC_IN    PB6  MFP Mask */
#define EPWM0_SYNC_IN_PC14_Msk   SYS_GPC_MFP3_PC14MFP_Msk    /*!< EPWM0_SYNC_IN    PC14 MFP Mask */

/* EPWM1 MFP Pin Mask */
#define EPWM1_BRAKE0_PB7_Msk     SYS_GPB_MFP1_PB7MFP_Msk     /*!< EPWM1_BRAKE0     PB7  MFP Mask */
#define EPWM1_BRAKE0_PE10_Msk    SYS_GPE_MFP2_PE10MFP_Msk    /*!< EPWM1_BRAKE0     PE10 MFP Mask */
#define EPWM1_BRAKE1_PA3_Msk     SYS_GPA_MFP0_PA3MFP_Msk     /*!< EPWM1_BRAKE1     PA3  MFP Mask */
#define EPWM1_BRAKE1_PB6_Msk     SYS_GPB_MFP1_PB6MFP_Msk     /*!< EPWM1_BRAKE1     PB6  MFP Mask */
#define EPWM1_BRAKE1_PE11_Msk    SYS_GPE_MFP2_PE11MFP_Msk    /*!< EPWM1_BRAKE1     PE11 MFP Mask */
#define EPWM1_CH0_PB15_Msk       SYS_GPB_MFP3_PB15MFP_Msk    /*!< EPWM1_CH0        PB15 MFP Mask */
#define EPWM1_CH0_PC5_Msk        SYS_GPC_MFP1_PC5MFP_Msk     /*!< EPWM1_CH0        PC5  MFP Mask */
#define EPWM1_CH0_PC12_Msk       SYS_GPC_MFP3_PC12MFP_Msk    /*!< EPWM1_CH0        PC12 MFP Mask */
#define EPWM1_CH0_PE13_Msk       SYS_GPE_MFP3_PE13MFP_Msk    /*!< EPWM1_CH0        PE13 MFP Mask */
#define EPWM1_CH0_PF3_Msk        SYS_GPF_MFP0_PF3MFP_Msk     /*!< EPWM1_CH0        PF3  MFP Mask */
#define EPWM1_CH1_PB14_Msk       SYS_GPB_MFP3_PB14MFP_Msk    /*!< EPWM1_CH1        PB14 MFP Mask */
#define EPWM1_CH1_PC4_Msk        SYS_GPC_MFP1_PC4MFP_Msk     /*!< EPWM1_CH1        PC4  MFP Mask */
#define EPWM1_CH1_PC8_Msk        SYS_GPC_MFP2_PC8MFP_Msk     /*!< EPWM1_CH1        PC8  MFP Mask */
#define EPWM1_CH1_PC11_Msk       SYS_GPC_MFP2_PC11MFP_Msk    /*!< EPWM1_CH1        PC11 MFP Mask */
#define EPWM1_CH1_PF2_Msk        SYS_GPF_MFP0_PF2MFP_Msk     /*!< EPWM1_CH1        PF2  MFP Mask */
#define EPWM1_CH2_PB13_Msk       SYS_GPB_MFP3_PB13MFP_Msk    /*!< EPWM1_CH2        PB13 MFP Mask */
#define EPWM1_CH2_PC3_Msk        SYS_GPC_MFP0_PC3MFP_Msk     /*!< EPWM1_CH2        PC3  MFP Mask */
#define EPWM1_CH2_PC7_Msk        SYS_GPC_MFP1_PC7MFP_Msk     /*!< EPWM1_CH2        PC7  MFP Mask */
#define EPWM1_CH2_PC10_Msk       SYS_GPC_MFP2_PC10MFP_Msk    /*!< EPWM1_CH2        PC10 MFP Mask */
#define EPWM1_CH3_PB12_Msk       SYS_GPB_MFP3_PB12MFP_Msk    /*!< EPWM1_CH3        PB12 MFP Mask */
#define EPWM1_CH3_PC2_Msk        SYS_GPC_MFP0_PC2MFP_Msk     /*!< EPWM1_CH3        PC2  MFP Mask */
#define EPWM1_CH3_PC6_Msk        SYS_GPC_MFP1_PC6MFP_Msk     /*!< EPWM1_CH3        PC6  MFP Mask */
#define EPWM1_CH3_PC9_Msk        SYS_GPC_MFP2_PC9MFP_Msk     /*!< EPWM1_CH3        PC9  MFP Mask */
#define EPWM1_CH4_PA7_Msk        SYS_GPA_MFP1_PA7MFP_Msk     /*!< EPWM1_CH4        PA7  MFP Mask */
#define EPWM1_CH4_PB1_Msk        SYS_GPB_MFP0_PB1MFP_Msk     /*!< EPWM1_CH4        PB1  MFP Mask */
#define EPWM1_CH4_PB7_Msk        SYS_GPB_MFP1_PB7MFP_Msk     /*!< EPWM1_CH4        PB7  MFP Mask */
#define EPWM1_CH4_PC1_Msk        SYS_GPC_MFP0_PC1MFP_Msk     /*!< EPWM1_CH4        PC1  MFP Mask */
#define EPWM1_CH4_PF0_Msk        SYS_GPF_MFP0_PF0MFP_Msk     /*!< EPWM1_CH4        PF0  MFP Mask */
#define EPWM1_CH5_PA6_Msk        SYS_GPA_MFP1_PA6MFP_Msk     /*!< EPWM1_CH5        PA6  MFP Mask */
#define EPWM1_CH5_PB0_Msk        SYS_GPB_MFP0_PB0MFP_Msk     /*!< EPWM1_CH5        PB0  MFP Mask */
#define EPWM1_CH5_PB6_Msk        SYS_GPB_MFP1_PB6MFP_Msk     /*!< EPWM1_CH5        PB6  MFP Mask */
#define EPWM1_CH5_PC0_Msk        SYS_GPC_MFP0_PC0MFP_Msk     /*!< EPWM1_CH5        PC0  MFP Mask */
#define EPWM1_CH5_PF1_Msk        SYS_GPF_MFP0_PF1MFP_Msk     /*!< EPWM1_CH5        PF1  MFP Mask */

/* EQEI0 MFP Pin Mask */
#define EQEI0_A_PA4_Msk          SYS_GPA_MFP1_PA4MFP_Msk     /*!< EQEI0_A          PA4  MFP Mask */
#define EQEI0_A_PD11_Msk         SYS_GPD_MFP2_PD11MFP_Msk    /*!< EQEI0_A          PD11 MFP Mask */
#define EQEI0_A_PE3_Msk          SYS_GPE_MFP0_PE3MFP_Msk     /*!< EQEI0_A          PE3  MFP Mask */
#define EQEI0_B_PA3_Msk          SYS_GPA_MFP0_PA3MFP_Msk     /*!< EQEI0_B          PA3  MFP Mask */
#define EQEI0_B_PD10_Msk         SYS_GPD_MFP2_PD10MFP_Msk    /*!< EQEI0_B          PD10 MFP Mask */
#define EQEI0_B_PE2_Msk          SYS_GPE_MFP0_PE2MFP_Msk     /*!< EQEI0_B          PE2  MFP Mask */
#define EQEI0_INDEX_PA5_Msk      SYS_GPA_MFP1_PA5MFP_Msk     /*!< EQEI0_INDEX      PA5  MFP Mask */
#define EQEI0_INDEX_PD12_Msk     SYS_GPD_MFP3_PD12MFP_Msk    /*!< EQEI0_INDEX      PD12 MFP Mask */
#define EQEI0_INDEX_PE4_Msk      SYS_GPE_MFP1_PE4MFP_Msk     /*!< EQEI0_INDEX      PE4  MFP Mask */

/* HSUSB MFP Pin Mask */
#define HSUSB_VBUS_EN_PB6_Msk    SYS_GPB_MFP1_PB6MFP_Msk     /*!< HSUSB_VBUS_EN    PB6  MFP Mask */
#define HSUSB_VBUS_EN_PB10_Msk   SYS_GPB_MFP2_PB10MFP_Msk    /*!< HSUSB_VBUS_EN    PB10 MFP Mask */
#define HSUSB_VBUS_EN_PB15_Msk   SYS_GPB_MFP3_PB15MFP_Msk    /*!< HSUSB_VBUS_EN    PB15 MFP Mask */
#define HSUSB_VBUS_ST_PB7_Msk    SYS_GPB_MFP1_PB7MFP_Msk     /*!< HSUSB_VBUS_ST    PB7  MFP Mask */
#define HSUSB_VBUS_ST_PB11_Msk   SYS_GPB_MFP2_PB11MFP_Msk    /*!< HSUSB_VBUS_ST    PB11 MFP Mask */
#define HSUSB_VBUS_ST_PB13_Msk   SYS_GPB_MFP3_PB13MFP_Msk    /*!< HSUSB_VBUS_ST    PB13 MFP Mask */
#define HSUSB_VBUS_ST_PC14_Msk   SYS_GPC_MFP3_PC14MFP_Msk    /*!< HSUSB_VBUS_ST    PC14 MFP Mask */

/* I2C0 MFP Pin Mask */
#define I2C0_SCL_PA5_Msk         SYS_GPA_MFP1_PA5MFP_Msk     /*!< I2C0_SCL         PA5  MFP Mask */
#define I2C0_SCL_PB5_Msk         SYS_GPB_MFP1_PB5MFP_Msk     /*!< I2C0_SCL         PB5  MFP Mask */
#define I2C0_SCL_PB9_Msk         SYS_GPB_MFP2_PB9MFP_Msk     /*!< I2C0_SCL         PB9  MFP Mask */
#define I2C0_SCL_PC1_Msk         SYS_GPC_MFP0_PC1MFP_Msk     /*!< I2C0_SCL         PC1  MFP Mask */
#define I2C0_SCL_PC12_Msk        SYS_GPC_MFP3_PC12MFP_Msk    /*!< I2C0_SCL         PC12 MFP Mask */
#define I2C0_SCL_PD7_Msk         SYS_GPD_MFP1_PD7MFP_Msk     /*!< I2C0_SCL         PD7  MFP Mask */
#define I2C0_SCL_PE13_Msk        SYS_GPE_MFP3_PE13MFP_Msk    /*!< I2C0_SCL         PE13 MFP Mask */
#define I2C0_SCL_PF0_Msk         SYS_GPF_MFP0_PF0MFP_Msk     /*!< I2C0_SCL         PF0  MFP Mask */
#define I2C0_SCL_PF3_Msk         SYS_GPF_MFP0_PF3MFP_Msk     /*!< I2C0_SCL         PF3  MFP Mask */
#define I2C0_SDA_PA4_Msk         SYS_GPA_MFP1_PA4MFP_Msk     /*!< I2C0_SDA         PA4  MFP Mask */
#define I2C0_SDA_PB4_Msk         SYS_GPB_MFP1_PB4MFP_Msk     /*!< I2C0_SDA         PB4  MFP Mask */
#define I2C0_SDA_PB8_Msk         SYS_GPB_MFP2_PB8MFP_Msk     /*!< I2C0_SDA         PB8  MFP Mask */
#define I2C0_SDA_PC0_Msk         SYS_GPC_MFP0_PC0MFP_Msk     /*!< I2C0_SDA         PC0  MFP Mask */
#define I2C0_SDA_PC8_Msk         SYS_GPC_MFP2_PC8MFP_Msk     /*!< I2C0_SDA         PC8  MFP Mask */
#define I2C0_SDA_PC11_Msk        SYS_GPC_MFP2_PC11MFP_Msk    /*!< I2C0_SDA         PC11 MFP Mask */
#define I2C0_SDA_PD6_Msk         SYS_GPD_MFP1_PD6MFP_Msk     /*!< I2C0_SDA         PD6  MFP Mask */
#define I2C0_SDA_PF1_Msk         SYS_GPF_MFP0_PF1MFP_Msk     /*!< I2C0_SDA         PF1  MFP Mask */
#define I2C0_SDA_PF2_Msk         SYS_GPF_MFP0_PF2MFP_Msk     /*!< I2C0_SDA         PF2  MFP Mask */
#define I2C0_SMBAL_PA3_Msk       SYS_GPA_MFP0_PA3MFP_Msk     /*!< I2C0_SMBAL       PA3  MFP Mask */
#define I2C0_SMBAL_PC3_Msk       SYS_GPC_MFP0_PC3MFP_Msk     /*!< I2C0_SMBAL       PC3  MFP Mask */
#define I2C0_SMBAL_PG2_Msk       SYS_GPG_MFP0_PG2MFP_Msk     /*!< I2C0_SMBAL       PG2  MFP Mask */
#define I2C0_SMBSUS_PA2_Msk      SYS_GPA_MFP0_PA2MFP_Msk     /*!< I2C0_SMBSUS      PA2  MFP Mask */
#define I2C0_SMBSUS_PC2_Msk      SYS_GPC_MFP0_PC2MFP_Msk     /*!< I2C0_SMBSUS      PC2  MFP Mask */
#define I2C0_SMBSUS_PG3_Msk      SYS_GPG_MFP0_PG3MFP_Msk     /*!< I2C0_SMBSUS      PG3  MFP Mask */

/* I2C1 MFP Pin Mask */
#define I2C1_SCL_PA3_Msk         SYS_GPA_MFP0_PA3MFP_Msk     /*!< I2C1_SCL         PA3  MFP Mask */
#define I2C1_SCL_PA7_Msk         SYS_GPA_MFP1_PA7MFP_Msk     /*!< I2C1_SCL         PA7  MFP Mask */
#define I2C1_SCL_PA12_Msk        SYS_GPA_MFP3_PA12MFP_Msk    /*!< I2C1_SCL         PA12 MFP Mask */
#define I2C1_SCL_PB1_Msk         SYS_GPB_MFP0_PB1MFP_Msk     /*!< I2C1_SCL         PB1  MFP Mask */
#define I2C1_SCL_PB3_Msk         SYS_GPB_MFP0_PB3MFP_Msk     /*!< I2C1_SCL         PB3  MFP Mask */
#define I2C1_SCL_PB11_Msk        SYS_GPB_MFP2_PB11MFP_Msk    /*!< I2C1_SCL         PB11 MFP Mask */
#define I2C1_SCL_PC5_Msk         SYS_GPC_MFP1_PC5MFP_Msk     /*!< I2C1_SCL         PC5  MFP Mask */
#define I2C1_SCL_PD5_Msk         SYS_GPD_MFP1_PD5MFP_Msk     /*!< I2C1_SCL         PD5  MFP Mask */
#define I2C1_SCL_PE1_Msk         SYS_GPE_MFP0_PE1MFP_Msk     /*!< I2C1_SCL         PE1  MFP Mask */
#define I2C1_SCL_PE14_Msk        SYS_GPE_MFP3_PE14MFP_Msk    /*!< I2C1_SCL         PE14 MFP Mask */
#define I2C1_SCL_PF0_Msk         SYS_GPF_MFP0_PF0MFP_Msk     /*!< I2C1_SCL         PF0  MFP Mask */
#define I2C1_SCL_PG2_Msk         SYS_GPG_MFP0_PG2MFP_Msk     /*!< I2C1_SCL         PG2  MFP Mask */
#define I2C1_SDA_PA2_Msk         SYS_GPA_MFP0_PA2MFP_Msk     /*!< I2C1_SDA         PA2  MFP Mask */
#define I2C1_SDA_PA6_Msk         SYS_GPA_MFP1_PA6MFP_Msk     /*!< I2C1_SDA         PA6  MFP Mask */
#define I2C1_SDA_PA13_Msk        SYS_GPA_MFP3_PA13MFP_Msk    /*!< I2C1_SDA         PA13 MFP Mask */
#define I2C1_SDA_PB0_Msk         SYS_GPB_MFP0_PB0MFP_Msk     /*!< I2C1_SDA         PB0  MFP Mask */
#define I2C1_SDA_PB2_Msk         SYS_GPB_MFP0_PB2MFP_Msk     /*!< I2C1_SDA         PB2  MFP Mask */
#define I2C1_SDA_PB10_Msk        SYS_GPB_MFP2_PB10MFP_Msk    /*!< I2C1_SDA         PB10 MFP Mask */
#define I2C1_SDA_PC4_Msk         SYS_GPC_MFP1_PC4MFP_Msk     /*!< I2C1_SDA         PC4  MFP Mask */
#define I2C1_SDA_PD4_Msk         SYS_GPD_MFP1_PD4MFP_Msk     /*!< I2C1_SDA         PD4  MFP Mask */
#define I2C1_SDA_PE0_Msk         SYS_GPE_MFP0_PE0MFP_Msk     /*!< I2C1_SDA         PE0  MFP Mask */
#define I2C1_SDA_PE15_Msk        SYS_GPE_MFP3_PE15MFP_Msk    /*!< I2C1_SDA         PE15 MFP Mask */
#define I2C1_SDA_PF1_Msk         SYS_GPF_MFP0_PF1MFP_Msk     /*!< I2C1_SDA         PF1  MFP Mask */
#define I2C1_SDA_PG3_Msk         SYS_GPG_MFP0_PG3MFP_Msk     /*!< I2C1_SDA         PG3  MFP Mask */
#define I2C1_SMBAL_PB9_Msk       SYS_GPB_MFP2_PB9MFP_Msk     /*!< I2C1_SMBAL       PB9  MFP Mask */
#define I2C1_SMBAL_PC7_Msk       SYS_GPC_MFP1_PC7MFP_Msk     /*!< I2C1_SMBAL       PC7  MFP Mask */
#define I2C1_SMBAL_PH8_Msk       SYS_GPH_MFP2_PH8MFP_Msk     /*!< I2C1_SMBAL       PH8  MFP Mask */
#define I2C1_SMBSUS_PB8_Msk      SYS_GPB_MFP2_PB8MFP_Msk     /*!< I2C1_SMBSUS      PB8  MFP Mask */
#define I2C1_SMBSUS_PC6_Msk      SYS_GPC_MFP1_PC6MFP_Msk     /*!< I2C1_SMBSUS      PC6  MFP Mask */
#define I2C1_SMBSUS_PH9_Msk      SYS_GPH_MFP2_PH9MFP_Msk     /*!< I2C1_SMBSUS      PH9  MFP Mask */

/* I2C2 MFP Pin Mask */
#define I2C2_SCL_PA1_Msk         SYS_GPA_MFP0_PA1MFP_Msk     /*!< I2C2_SCL         PA1  MFP Mask */
#define I2C2_SCL_PA11_Msk        SYS_GPA_MFP2_PA11MFP_Msk    /*!< I2C2_SCL         PA11 MFP Mask */
#define I2C2_SCL_PA14_Msk        SYS_GPA_MFP3_PA14MFP_Msk    /*!< I2C2_SCL         PA14 MFP Mask */
#define I2C2_SCL_PB13_Msk        SYS_GPB_MFP3_PB13MFP_Msk    /*!< I2C2_SCL         PB13 MFP Mask */
#define I2C2_SCL_PD1_Msk         SYS_GPD_MFP0_PD1MFP_Msk     /*!< I2C2_SCL         PD1  MFP Mask */
#define I2C2_SCL_PD9_Msk         SYS_GPD_MFP2_PD9MFP_Msk     /*!< I2C2_SCL         PD9  MFP Mask */
#define I2C2_SCL_PH8_Msk         SYS_GPH_MFP2_PH8MFP_Msk     /*!< I2C2_SCL         PH8  MFP Mask */
#define I2C2_SDA_PA0_Msk         SYS_GPA_MFP0_PA0MFP_Msk     /*!< I2C2_SDA         PA0  MFP Mask */
#define I2C2_SDA_PA10_Msk        SYS_GPA_MFP2_PA10MFP_Msk    /*!< I2C2_SDA         PA10 MFP Mask */
#define I2C2_SDA_PA15_Msk        SYS_GPA_MFP3_PA15MFP_Msk    /*!< I2C2_SDA         PA15 MFP Mask */
#define I2C2_SDA_PB12_Msk        SYS_GPB_MFP3_PB12MFP_Msk    /*!< I2C2_SDA         PB12 MFP Mask */
#define I2C2_SDA_PD0_Msk         SYS_GPD_MFP0_PD0MFP_Msk     /*!< I2C2_SDA         PD0  MFP Mask */
#define I2C2_SDA_PD8_Msk         SYS_GPD_MFP2_PD8MFP_Msk     /*!< I2C2_SDA         PD8  MFP Mask */
#define I2C2_SDA_PH9_Msk         SYS_GPH_MFP2_PH9MFP_Msk     /*!< I2C2_SDA         PH9  MFP Mask */
#define I2C2_SMBAL_PB15_Msk      SYS_GPB_MFP3_PB15MFP_Msk    /*!< I2C2_SMBAL       PB15 MFP Mask */
#define I2C2_SMBAL_PF3_Msk       SYS_GPF_MFP0_PF3MFP_Msk     /*!< I2C2_SMBAL       PF3  MFP Mask */
#define I2C2_SMBSUS_PB14_Msk     SYS_GPB_MFP3_PB14MFP_Msk    /*!< I2C2_SMBSUS      PB14 MFP Mask */
#define I2C2_SMBSUS_PF2_Msk      SYS_GPF_MFP0_PF2MFP_Msk     /*!< I2C2_SMBSUS      PF2  MFP Mask */

/* I2S0 MFP Pin Mask */
#define I2S0_BCLK_PA12_Msk       SYS_GPA_MFP3_PA12MFP_Msk    /*!< I2S0_BCLK        PA12 MFP Mask */
#define I2S0_BCLK_PB5_Msk        SYS_GPB_MFP1_PB5MFP_Msk     /*!< I2S0_BCLK        PB5  MFP Mask */
#define I2S0_BCLK_PC4_Msk        SYS_GPC_MFP1_PC4MFP_Msk     /*!< I2S0_BCLK        PC4  MFP Mask */
#define I2S0_BCLK_PE1_Msk        SYS_GPE_MFP0_PE1MFP_Msk     /*!< I2S0_BCLK        PE1  MFP Mask */
#define I2S0_BCLK_PE3_Msk        SYS_GPE_MFP0_PE3MFP_Msk     /*!< I2S0_BCLK        PE3  MFP Mask */
#define I2S0_BCLK_PE8_Msk        SYS_GPE_MFP2_PE8MFP_Msk     /*!< I2S0_BCLK        PE8  MFP Mask */
#define I2S0_BCLK_PF10_Msk       SYS_GPF_MFP2_PF10MFP_Msk    /*!< I2S0_BCLK        PF10 MFP Mask */
#define I2S0_DI_PA14_Msk         SYS_GPA_MFP3_PA14MFP_Msk    /*!< I2S0_DI          PA14 MFP Mask */
#define I2S0_DI_PB3_Msk          SYS_GPB_MFP0_PB3MFP_Msk     /*!< I2S0_DI          PB3  MFP Mask */
#define I2S0_DI_PC2_Msk          SYS_GPC_MFP0_PC2MFP_Msk     /*!< I2S0_DI          PC2  MFP Mask */
#define I2S0_DI_PE10_Msk         SYS_GPE_MFP2_PE10MFP_Msk    /*!< I2S0_DI          PE10 MFP Mask */
#define I2S0_DI_PF8_Msk          SYS_GPF_MFP2_PF8MFP_Msk     /*!< I2S0_DI          PF8  MFP Mask */
#define I2S0_DI_PH8_Msk          SYS_GPH_MFP2_PH8MFP_Msk     /*!< I2S0_DI          PH8  MFP Mask */
#define I2S0_DO_PA15_Msk         SYS_GPA_MFP3_PA15MFP_Msk    /*!< I2S0_DO          PA15 MFP Mask */
#define I2S0_DO_PB2_Msk          SYS_GPB_MFP0_PB2MFP_Msk     /*!< I2S0_DO          PB2  MFP Mask */
#define I2S0_DO_PC1_Msk          SYS_GPC_MFP0_PC1MFP_Msk     /*!< I2S0_DO          PC1  MFP Mask */
#define I2S0_DO_PE11_Msk         SYS_GPE_MFP2_PE11MFP_Msk    /*!< I2S0_DO          PE11 MFP Mask */
#define I2S0_DO_PF0_Msk          SYS_GPF_MFP0_PF0MFP_Msk     /*!< I2S0_DO          PF0  MFP Mask */
#define I2S0_DO_PF7_Msk          SYS_GPF_MFP1_PF7MFP_Msk     /*!< I2S0_DO          PF7  MFP Mask */
#define I2S0_DO_PH9_Msk          SYS_GPH_MFP2_PH9MFP_Msk     /*!< I2S0_DO          PH9  MFP Mask */
#define I2S0_LRCK_PB1_Msk        SYS_GPB_MFP0_PB1MFP_Msk     /*!< I2S0_LRCK        PB1  MFP Mask */
#define I2S0_LRCK_PC0_Msk        SYS_GPC_MFP0_PC0MFP_Msk     /*!< I2S0_LRCK        PC0  MFP Mask */
#define I2S0_LRCK_PE12_Msk       SYS_GPE_MFP3_PE12MFP_Msk    /*!< I2S0_LRCK        PE12 MFP Mask */
#define I2S0_LRCK_PF1_Msk        SYS_GPF_MFP0_PF1MFP_Msk     /*!< I2S0_LRCK        PF1  MFP Mask */
#define I2S0_LRCK_PF6_Msk        SYS_GPF_MFP1_PF6MFP_Msk     /*!< I2S0_LRCK        PF6  MFP Mask */
#define I2S0_LRCK_PH10_Msk       SYS_GPH_MFP2_PH10MFP_Msk    /*!< I2S0_LRCK        PH10 MFP Mask */
#define I2S0_MCLK_PA13_Msk       SYS_GPA_MFP3_PA13MFP_Msk    /*!< I2S0_MCLK        PA13 MFP Mask */
#define I2S0_MCLK_PB4_Msk        SYS_GPB_MFP1_PB4MFP_Msk     /*!< I2S0_MCLK        PB4  MFP Mask */
#define I2S0_MCLK_PC3_Msk        SYS_GPC_MFP0_PC3MFP_Msk     /*!< I2S0_MCLK        PC3  MFP Mask */
#define I2S0_MCLK_PE0_Msk        SYS_GPE_MFP0_PE0MFP_Msk     /*!< I2S0_MCLK        PE0  MFP Mask */
#define I2S0_MCLK_PE2_Msk        SYS_GPE_MFP0_PE2MFP_Msk     /*!< I2S0_MCLK        PE2  MFP Mask */
#define I2S0_MCLK_PE9_Msk        SYS_GPE_MFP2_PE9MFP_Msk     /*!< I2S0_MCLK        PE9  MFP Mask */
#define I2S0_MCLK_PF9_Msk        SYS_GPF_MFP2_PF9MFP_Msk     /*!< I2S0_MCLK        PF9  MFP Mask */

/* I3C0 MFP Pin Mask */
#define I3C0_PUPEN_PA2_Msk       SYS_GPA_MFP0_PA2MFP_Msk     /*!< I3C0_PUPEN       PA2  MFP Mask */
#define I3C0_PUPEN_PC5_Msk       SYS_GPC_MFP1_PC5MFP_Msk     /*!< I3C0_PUPEN       PC5  MFP Mask */
#define I3C0_PUPEN_PC9_Msk       SYS_GPC_MFP2_PC9MFP_Msk     /*!< I3C0_PUPEN       PC9  MFP Mask */
#define I3C0_PUPEN_PH10_Msk      SYS_GPH_MFP2_PH10MFP_Msk    /*!< I3C0_PUPEN       PH10 MFP Mask */
#define I3C0_SCL_PA1_Msk         SYS_GPA_MFP0_PA1MFP_Msk     /*!< I3C0_SCL         PA1  MFP Mask */
#define I3C0_SCL_PA5_Msk         SYS_GPA_MFP1_PA5MFP_Msk     /*!< I3C0_SCL         PA5  MFP Mask */
#define I3C0_SCL_PB1_Msk         SYS_GPB_MFP0_PB1MFP_Msk     /*!< I3C0_SCL         PB1  MFP Mask */
#define I3C0_SCL_PF0_Msk         SYS_GPF_MFP0_PF0MFP_Msk     /*!< I3C0_SCL         PF0  MFP Mask */
#define I3C0_SCL_PH8_Msk         SYS_GPH_MFP2_PH8MFP_Msk     /*!< I3C0_SCL         PH8  MFP Mask */
#define I3C0_SDA_PA0_Msk         SYS_GPA_MFP0_PA0MFP_Msk     /*!< I3C0_SDA         PA0  MFP Mask */
#define I3C0_SDA_PA4_Msk         SYS_GPA_MFP1_PA4MFP_Msk     /*!< I3C0_SDA         PA4  MFP Mask */
#define I3C0_SDA_PB0_Msk         SYS_GPB_MFP0_PB0MFP_Msk     /*!< I3C0_SDA         PB0  MFP Mask */
#define I3C0_SDA_PF1_Msk         SYS_GPF_MFP0_PF1MFP_Msk     /*!< I3C0_SDA         PF1  MFP Mask */
#define I3C0_SDA_PH9_Msk         SYS_GPH_MFP2_PH9MFP_Msk     /*!< I3C0_SDA         PH9  MFP Mask */

/* ICE MFP Pin Mask */
#define ICE_CLK_PF1_Msk          SYS_GPF_MFP0_PF1MFP_Msk     /*!< ICE_CLK          PF1  MFP Mask */
#define ICE_DAT_PF0_Msk          SYS_GPF_MFP0_PF0MFP_Msk     /*!< ICE_DAT          PF0  MFP Mask */

/* INT0 MFP Pin Mask */
#define INT0_PA6_Msk             SYS_GPA_MFP1_PA6MFP_Msk     /*!< INT0             PA6  MFP Mask */
#define INT0_PB5_Msk             SYS_GPB_MFP1_PB5MFP_Msk     /*!< INT0             PB5  MFP Mask */

/* INT1 MFP Pin Mask */
#define INT1_PA7_Msk             SYS_GPA_MFP1_PA7MFP_Msk     /*!< INT1             PA7  MFP Mask */
#define INT1_PB4_Msk             SYS_GPB_MFP1_PB4MFP_Msk     /*!< INT1             PB4  MFP Mask */

/* INT2 MFP Pin Mask */
#define INT2_PB3_Msk             SYS_GPB_MFP0_PB3MFP_Msk     /*!< INT2             PB3  MFP Mask */
#define INT2_PC6_Msk             SYS_GPC_MFP1_PC6MFP_Msk     /*!< INT2             PC6  MFP Mask */

/* INT3 MFP Pin Mask */
#define INT3_PB2_Msk             SYS_GPB_MFP0_PB2MFP_Msk     /*!< INT3             PB2  MFP Mask */
#define INT3_PC7_Msk             SYS_GPC_MFP1_PC7MFP_Msk     /*!< INT3             PC7  MFP Mask */

/* INT4 MFP Pin Mask */
#define INT4_PA8_Msk             SYS_GPA_MFP2_PA8MFP_Msk     /*!< INT4             PA8  MFP Mask */
#define INT4_PB6_Msk             SYS_GPB_MFP1_PB6MFP_Msk     /*!< INT4             PB6  MFP Mask */

/* INT5 MFP Pin Mask */
#define INT5_PB7_Msk             SYS_GPB_MFP1_PB7MFP_Msk     /*!< INT5             PB7  MFP Mask */
#define INT5_PD12_Msk            SYS_GPD_MFP3_PD12MFP_Msk    /*!< INT5             PD12 MFP Mask */

/* INT6 MFP Pin Mask */
#define INT6_PB8_Msk             SYS_GPB_MFP2_PB8MFP_Msk     /*!< INT6             PB8  MFP Mask */
#define INT6_PD11_Msk            SYS_GPD_MFP2_PD11MFP_Msk    /*!< INT6             PD11 MFP Mask */

/* INT7 MFP Pin Mask */
#define INT7_PB9_Msk             SYS_GPB_MFP2_PB9MFP_Msk     /*!< INT7             PB9  MFP Mask */
#define INT7_PD10_Msk            SYS_GPD_MFP2_PD10MFP_Msk    /*!< INT7             PD10 MFP Mask */

/* LLSI0 MFP Pin Mask */
#define LLSI0_OUT_PB15_Msk       SYS_GPB_MFP3_PB15MFP_Msk    /*!< LLSI0_OUT        PB15 MFP Mask */
#define LLSI0_OUT_PC5_Msk        SYS_GPC_MFP1_PC5MFP_Msk     /*!< LLSI0_OUT        PC5  MFP Mask */

/* LLSI1 MFP Pin Mask */
#define LLSI1_OUT_PB14_Msk       SYS_GPB_MFP3_PB14MFP_Msk    /*!< LLSI1_OUT        PB14 MFP Mask */
#define LLSI1_OUT_PC4_Msk        SYS_GPC_MFP1_PC4MFP_Msk     /*!< LLSI1_OUT        PC4  MFP Mask */

/* LLSI2 MFP Pin Mask */
#define LLSI2_OUT_PB13_Msk       SYS_GPB_MFP3_PB13MFP_Msk    /*!< LLSI2_OUT        PB13 MFP Mask */
#define LLSI2_OUT_PC3_Msk        SYS_GPC_MFP0_PC3MFP_Msk     /*!< LLSI2_OUT        PC3  MFP Mask */

/* LLSI3 MFP Pin Mask */
#define LLSI3_OUT_PB12_Msk       SYS_GPB_MFP3_PB12MFP_Msk    /*!< LLSI3_OUT        PB12 MFP Mask */
#define LLSI3_OUT_PC2_Msk        SYS_GPC_MFP0_PC2MFP_Msk     /*!< LLSI3_OUT        PC2  MFP Mask */
#define LLSI3_OUT_PF14_Msk       SYS_GPF_MFP3_PF14MFP_Msk    /*!< LLSI3_OUT        PF14 MFP Mask */

/* LLSI4 MFP Pin Mask */
#define LLSI4_OUT_PA3_Msk        SYS_GPA_MFP0_PA3MFP_Msk     /*!< LLSI4_OUT        PA3  MFP Mask */
#define LLSI4_OUT_PB5_Msk        SYS_GPB_MFP1_PB5MFP_Msk     /*!< LLSI4_OUT        PB5  MFP Mask */

/* LLSI5 MFP Pin Mask */
#define LLSI5_OUT_PA2_Msk        SYS_GPA_MFP0_PA2MFP_Msk     /*!< LLSI5_OUT        PA2  MFP Mask */
#define LLSI5_OUT_PB4_Msk        SYS_GPB_MFP1_PB4MFP_Msk     /*!< LLSI5_OUT        PB4  MFP Mask */

/* LLSI6 MFP Pin Mask */
#define LLSI6_OUT_PA1_Msk        SYS_GPA_MFP0_PA1MFP_Msk     /*!< LLSI6_OUT        PA1  MFP Mask */
#define LLSI6_OUT_PB3_Msk        SYS_GPB_MFP0_PB3MFP_Msk     /*!< LLSI6_OUT        PB3  MFP Mask */

/* LLSI7 MFP Pin Mask */
#define LLSI7_OUT_PA0_Msk        SYS_GPA_MFP0_PA0MFP_Msk     /*!< LLSI7_OUT        PA0  MFP Mask */
#define LLSI7_OUT_PB2_Msk        SYS_GPB_MFP0_PB2MFP_Msk     /*!< LLSI7_OUT        PB2  MFP Mask */
#define LLSI7_OUT_PC2_Msk        SYS_GPC_MFP0_PC2MFP_Msk     /*!< LLSI7_OUT        PC2  MFP Mask */

/* LLSI8 MFP Pin Mask */
#define LLSI8_OUT_PB11_Msk       SYS_GPB_MFP2_PB11MFP_Msk    /*!< LLSI8_OUT        PB11 MFP Mask */
#define LLSI8_OUT_PC1_Msk        SYS_GPC_MFP0_PC1MFP_Msk     /*!< LLSI8_OUT        PC1  MFP Mask */

/* LLSI9 MFP Pin Mask */
#define LLSI9_OUT_PB10_Msk       SYS_GPB_MFP2_PB10MFP_Msk    /*!< LLSI9_OUT        PB10 MFP Mask */
#define LLSI9_OUT_PC0_Msk        SYS_GPC_MFP0_PC0MFP_Msk     /*!< LLSI9_OUT        PC0  MFP Mask */

/* QSPI0 MFP Pin Mask */
#define QSPI0_CLK_PA2_Msk        SYS_GPA_MFP0_PA2MFP_Msk     /*!< QSPI0_CLK        PA2  MFP Mask */
#define QSPI0_CLK_PB12_Msk       SYS_GPB_MFP3_PB12MFP_Msk    /*!< QSPI0_CLK        PB12 MFP Mask */
#define QSPI0_CLK_PC2_Msk        SYS_GPC_MFP0_PC2MFP_Msk     /*!< QSPI0_CLK        PC2  MFP Mask */
#define QSPI0_CLK_PC14_Msk       SYS_GPC_MFP3_PC14MFP_Msk    /*!< QSPI0_CLK        PC14 MFP Mask */
#define QSPI0_CLK_PF2_Msk        SYS_GPF_MFP0_PF2MFP_Msk     /*!< QSPI0_CLK        PF2  MFP Mask */
#define QSPI0_CLK_PH8_Msk        SYS_GPH_MFP2_PH8MFP_Msk     /*!< QSPI0_CLK        PH8  MFP Mask */
#define QSPI0_MISO0_PA1_Msk      SYS_GPA_MFP0_PA1MFP_Msk     /*!< QSPI0_MISO0      PA1  MFP Mask */
#define QSPI0_MISO0_PC1_Msk      SYS_GPC_MFP0_PC1MFP_Msk     /*!< QSPI0_MISO0      PC1  MFP Mask */
#define QSPI0_MISO0_PE1_Msk      SYS_GPE_MFP0_PE1MFP_Msk     /*!< QSPI0_MISO0      PE1  MFP Mask */
#define QSPI0_MISO0_PE7_Msk      SYS_GPE_MFP1_PE7MFP_Msk     /*!< QSPI0_MISO0      PE7  MFP Mask */
#define QSPI0_MISO1_PA5_Msk      SYS_GPA_MFP1_PA5MFP_Msk     /*!< QSPI0_MISO1      PA5  MFP Mask */
#define QSPI0_MISO1_PB1_Msk      SYS_GPB_MFP0_PB1MFP_Msk     /*!< QSPI0_MISO1      PB1  MFP Mask */
#define QSPI0_MISO1_PC5_Msk      SYS_GPC_MFP1_PC5MFP_Msk     /*!< QSPI0_MISO1      PC5  MFP Mask */
#define QSPI0_MISO1_PH10_Msk     SYS_GPH_MFP2_PH10MFP_Msk    /*!< QSPI0_MISO1      PH10 MFP Mask */
#define QSPI0_MOSI0_PA0_Msk      SYS_GPA_MFP0_PA0MFP_Msk     /*!< QSPI0_MOSI0      PA0  MFP Mask */
#define QSPI0_MOSI0_PC0_Msk      SYS_GPC_MFP0_PC0MFP_Msk     /*!< QSPI0_MOSI0      PC0  MFP Mask */
#define QSPI0_MOSI0_PE0_Msk      SYS_GPE_MFP0_PE0MFP_Msk     /*!< QSPI0_MOSI0      PE0  MFP Mask */
#define QSPI0_MOSI0_PE6_Msk      SYS_GPE_MFP1_PE6MFP_Msk     /*!< QSPI0_MOSI0      PE6  MFP Mask */
#define QSPI0_MOSI1_PA4_Msk      SYS_GPA_MFP1_PA4MFP_Msk     /*!< QSPI0_MOSI1      PA4  MFP Mask */
#define QSPI0_MOSI1_PB0_Msk      SYS_GPB_MFP0_PB0MFP_Msk     /*!< QSPI0_MOSI1      PB0  MFP Mask */
#define QSPI0_MOSI1_PC4_Msk      SYS_GPC_MFP1_PC4MFP_Msk     /*!< QSPI0_MOSI1      PC4  MFP Mask */
#define QSPI0_MOSI1_PH11_Msk     SYS_GPH_MFP2_PH11MFP_Msk    /*!< QSPI0_MOSI1      PH11 MFP Mask */
#define QSPI0_SS_PA3_Msk         SYS_GPA_MFP0_PA3MFP_Msk     /*!< QSPI0_SS         PA3  MFP Mask */
#define QSPI0_SS_PC3_Msk         SYS_GPC_MFP0_PC3MFP_Msk     /*!< QSPI0_SS         PC3  MFP Mask */
#define QSPI0_SS_PH9_Msk         SYS_GPH_MFP2_PH9MFP_Msk     /*!< QSPI0_SS         PH9  MFP Mask */

/* SD0 MFP Pin Mask */
#define SD0_CLK_PB1_Msk          SYS_GPB_MFP0_PB1MFP_Msk     /*!< SD0_CLK          PB1  MFP Mask */
#define SD0_CLK_PE6_Msk          SYS_GPE_MFP1_PE6MFP_Msk     /*!< SD0_CLK          PE6  MFP Mask */
#define SD0_CMD_PB0_Msk          SYS_GPB_MFP0_PB0MFP_Msk     /*!< SD0_CMD          PB0  MFP Mask */
#define SD0_CMD_PE7_Msk          SYS_GPE_MFP1_PE7MFP_Msk     /*!< SD0_CMD          PE7  MFP Mask */
#define SD0_DAT0_PB2_Msk         SYS_GPB_MFP0_PB2MFP_Msk     /*!< SD0_DAT0         PB2  MFP Mask */
#define SD0_DAT0_PE2_Msk         SYS_GPE_MFP0_PE2MFP_Msk     /*!< SD0_DAT0         PE2  MFP Mask */
#define SD0_DAT1_PB3_Msk         SYS_GPB_MFP0_PB3MFP_Msk     /*!< SD0_DAT1         PB3  MFP Mask */
#define SD0_DAT1_PE3_Msk         SYS_GPE_MFP0_PE3MFP_Msk     /*!< SD0_DAT1         PE3  MFP Mask */
#define SD0_DAT2_PB4_Msk         SYS_GPB_MFP1_PB4MFP_Msk     /*!< SD0_DAT2         PB4  MFP Mask */
#define SD0_DAT2_PE4_Msk         SYS_GPE_MFP1_PE4MFP_Msk     /*!< SD0_DAT2         PE4  MFP Mask */
#define SD0_DAT3_PB5_Msk         SYS_GPB_MFP1_PB5MFP_Msk     /*!< SD0_DAT3         PB5  MFP Mask */
#define SD0_DAT3_PE5_Msk         SYS_GPE_MFP1_PE5MFP_Msk     /*!< SD0_DAT3         PE5  MFP Mask */
#define SD0_nCD_PB12_Msk         SYS_GPB_MFP3_PB12MFP_Msk    /*!< SD0_nCD          PB12 MFP Mask */
#define SD0_nCD_PD13_Msk         SYS_GPD_MFP3_PD13MFP_Msk    /*!< SD0_nCD          PD13 MFP Mask */

/* PDCI MFP Pin Mask */
#define PDCI_G0_RX0_PC6_Msk      SYS_GPC_MFP1_PC6MFP_Msk     /*!< PDCI_G0_RX0      PC6  MFP Mask */
#define PDCI_G0_RX0_PC14_Msk     SYS_GPC_MFP3_PC14MFP_Msk    /*!< PDCI_G0_RX0      PC14 MFP Mask */
#define PDCI_G0_RX1_PB1_Msk      SYS_GPB_MFP0_PB1MFP_Msk     /*!< PDCI_G0_RX1      PB1  MFP Mask */
#define PDCI_G0_CLK_PB1_Msk      SYS_GPB_MFP0_PB1MFP_Msk     /*!< PDCI_G0_CLK      PB1  MFP Mask */
#define PDCI_G0_CLK_PC6_Msk      SYS_GPC_MFP1_PC6MFP_Msk     /*!< PDCI_G0_CLK      PC6  MFP Mask */
#define PDCI_G0_TX0_PB5_Msk      SYS_GPB_MFP1_PB5MFP_Msk     /*!< PDCI_G0_TX0      PB5  MFP Mask */
#define PDCI_G0_TX2_PB3_Msk      SYS_GPB_MFP0_PB3MFP_Msk     /*!< PDCI_G0_TX2      PB3  MFP Mask */
#define PDCI_G0_TX1_PB4_Msk      SYS_GPB_MFP1_PB4MFP_Msk     /*!< PDCI_G0_TX1      PB4  MFP Mask */
#define PDCI_G0_TX3_PB2_Msk      SYS_GPB_MFP0_PB2MFP_Msk     /*!< PDCI_G0_TX3      PB2  MFP Mask */
#define PDCI_G1_TX0_PB0_Msk      SYS_GPB_MFP0_PB0MFP_Msk     /*!< PDCI_G1_TX0      PB0  MFP Mask */
#define PDCI_G1_TX3_PA9_Msk      SYS_GPA_MFP2_PA9MFP_Msk     /*!< PDCI_G1_TX3      PA9  MFP Mask */
#define PDCI_G1_CLK_PA8_Msk      SYS_GPA_MFP2_PA8MFP_Msk     /*!< PDCI_G1_CLK      PA8  MFP Mask */
#define PDCI_G1_TX2_PA10_Msk     SYS_GPA_MFP2_PA10MFP_Msk    /*!< PDCI_G1_TX2      PA10 MFP Mask */
#define PDCI_G1_RX0_PB15_Msk     SYS_GPB_MFP3_PB15MFP_Msk    /*!< PDCI_G1_RX0      PB15 MFP Mask */
#define PDCI_G1_TX1_PA11_Msk     SYS_GPA_MFP2_PA11MFP_Msk    /*!< PDCI_G1_TX1      PA11 MFP Mask */
#define PDCI_G1_RX1_PA8_Msk      SYS_GPA_MFP2_PA8MFP_Msk     /*!< PDCI_G1_RX1      PA8  MFP Mask */
#define PDCI_G2_CLK_PF15_Msk     SYS_GPF_MFP3_PF15MFP_Msk    /*!< PDCI_G2_CLK      PF15 MFP Mask */
#define PDCI_G2_TX3_PA6_Msk      SYS_GPA_MFP1_PA6MFP_Msk     /*!< PDCI_G2_TX3      PA6  MFP Mask */
#define PDCI_G2_TX3_PF2_Msk      SYS_GPF_MFP0_PF2MFP_Msk     /*!< PDCI_G2_TX3      PF2  MFP Mask */
#define PDCI_G2_RX0_PB14_Msk     SYS_GPB_MFP3_PB14MFP_Msk    /*!< PDCI_G2_RX0      PB14 MFP Mask */
#define PDCI_G2_TX1_PF4_Msk      SYS_GPF_MFP1_PF4MFP_Msk     /*!< PDCI_G2_TX1      PF4  MFP Mask */
#define PDCI_G2_RX1_PF15_Msk     SYS_GPF_MFP3_PF15MFP_Msk    /*!< PDCI_G2_RX1      PF15 MFP Mask */
#define PDCI_G2_TX2_PA7_Msk      SYS_GPA_MFP1_PA7MFP_Msk     /*!< PDCI_G2_TX2      PA7  MFP Mask */
#define PDCI_G2_TX2_PF3_Msk      SYS_GPF_MFP0_PF3MFP_Msk     /*!< PDCI_G2_TX2      PF3  MFP Mask */
#define PDCI_G2_TX0_PF5_Msk      SYS_GPF_MFP1_PF5MFP_Msk     /*!< PDCI_G2_TX0      PF5  MFP Mask */
#define PDCI_G3_TX0_PA4_Msk      SYS_GPA_MFP1_PA4MFP_Msk     /*!< PDCI_G3_TX0      PA4  MFP Mask */
#define PDCI_G3_TX0_PB10_Msk     SYS_GPB_MFP2_PB10MFP_Msk    /*!< PDCI_G3_TX0      PB10 MFP Mask */
#define PDCI_G3_RX1_PA5_Msk      SYS_GPA_MFP1_PA5MFP_Msk     /*!< PDCI_G3_RX1      PA5  MFP Mask */
#define PDCI_G3_RX1_PB8_Msk      SYS_GPB_MFP2_PB8MFP_Msk     /*!< PDCI_G3_RX1      PB8  MFP Mask */
#define PDCI_G3_TX1_PA3_Msk      SYS_GPA_MFP0_PA3MFP_Msk     /*!< PDCI_G3_TX1      PA3  MFP Mask */
#define PDCI_G3_TX1_PB9_Msk      SYS_GPB_MFP2_PB9MFP_Msk     /*!< PDCI_G3_TX1      PB9  MFP Mask */
#define PDCI_G3_CLK_PA5_Msk      SYS_GPA_MFP1_PA5MFP_Msk     /*!< PDCI_G3_CLK      PA5  MFP Mask */
#define PDCI_G3_CLK_PB8_Msk      SYS_GPB_MFP2_PB8MFP_Msk     /*!< PDCI_G3_CLK      PB8  MFP Mask */
#define PDCI_G3_TX3_PA1_Msk      SYS_GPA_MFP0_PA1MFP_Msk     /*!< PDCI_G3_TX3      PA1  MFP Mask */
#define PDCI_G3_TX3_PB7_Msk      SYS_GPB_MFP1_PB7MFP_Msk     /*!< PDCI_G3_TX3      PB7  MFP Mask */
#define PDCI_G3_RX0_PB11_Msk     SYS_GPB_MFP2_PB11MFP_Msk    /*!< PDCI_G3_RX0      PB11 MFP Mask */
#define PDCI_G3_RX0_PB13_Msk     SYS_GPB_MFP3_PB13MFP_Msk    /*!< PDCI_G3_RX0      PB13 MFP Mask */
#define PDCI_G3_TX2_PA2_Msk      SYS_GPA_MFP0_PA2MFP_Msk     /*!< PDCI_G3_TX2      PA2  MFP Mask */
#define PDCI_G3_TX2_PB6_Msk      SYS_GPB_MFP1_PB6MFP_Msk     /*!< PDCI_G3_TX2      PB6  MFP Mask */
#define PDCI_G4_TX0_PC5_Msk      SYS_GPC_MFP1_PC5MFP_Msk     /*!< PDCI_G4_TX0      PC5  MFP Mask */
#define PDCI_G4_TX1_PC4_Msk      SYS_GPC_MFP1_PC4MFP_Msk     /*!< PDCI_G4_TX1      PC4  MFP Mask */
#define PDCI_G4_RX0_PF6_Msk      SYS_GPF_MFP1_PF6MFP_Msk     /*!< PDCI_G4_RX0      PF6  MFP Mask */
#define PDCI_G4_RX1_PC1_Msk      SYS_GPC_MFP0_PC1MFP_Msk     /*!< PDCI_G4_RX1      PC1  MFP Mask */
#define PDCI_G4_CLK_PC1_Msk      SYS_GPC_MFP0_PC1MFP_Msk     /*!< PDCI_G4_CLK      PC1  MFP Mask */
#define PDCI_G4_TX2_PC3_Msk      SYS_GPC_MFP0_PC3MFP_Msk     /*!< PDCI_G4_TX2      PC3  MFP Mask */
#define PDCI_G4_TX3_PC2_Msk      SYS_GPC_MFP0_PC2MFP_Msk     /*!< PDCI_G4_TX3      PC2  MFP Mask */
#define PDCI_G5_TX2_PA14_Msk     SYS_GPA_MFP3_PA14MFP_Msk    /*!< PDCI_G5_TX2      PA14 MFP Mask */
#define PDCI_G5_RX0_PF14_Msk     SYS_GPF_MFP3_PF14MFP_Msk    /*!< PDCI_G5_RX0      PF14 MFP Mask */
#define PDCI_G5_TX1_PA13_Msk     SYS_GPA_MFP3_PA13MFP_Msk    /*!< PDCI_G5_TX1      PA13 MFP Mask */
#define PDCI_G5_RX1_PC0_Msk      SYS_GPC_MFP0_PC0MFP_Msk     /*!< PDCI_G5_RX1      PC0  MFP Mask */
#define PDCI_G5_CLK_PC0_Msk      SYS_GPC_MFP0_PC0MFP_Msk     /*!< PDCI_G5_CLK      PC0  MFP Mask */
#define PDCI_G5_TX0_PA12_Msk     SYS_GPA_MFP3_PA12MFP_Msk    /*!< PDCI_G5_TX0      PA12 MFP Mask */
#define PDCI_G5_TX3_PA15_Msk     SYS_GPA_MFP3_PA15MFP_Msk    /*!< PDCI_G5_TX3      PA15 MFP Mask */

/* SPI0 MFP Pin Mask */
#define SPI0_CLK_PA2_Msk         SYS_GPA_MFP0_PA2MFP_Msk     /*!< SPI0_CLK         PA2  MFP Mask */
#define SPI0_CLK_PB6_Msk         SYS_GPB_MFP1_PB6MFP_Msk     /*!< SPI0_CLK         PB6  MFP Mask */
#define SPI0_CLK_PB14_Msk        SYS_GPB_MFP3_PB14MFP_Msk    /*!< SPI0_CLK         PB14 MFP Mask */
#define SPI0_CLK_PD2_Msk         SYS_GPD_MFP0_PD2MFP_Msk     /*!< SPI0_CLK         PD2  MFP Mask */
#define SPI0_CLK_PF8_Msk         SYS_GPF_MFP2_PF8MFP_Msk     /*!< SPI0_CLK         PF8  MFP Mask */
#define SPI0_CLK_PF0_Msk         SYS_GPF_MFP0_PF0MFP_Msk     /*!< SPI0_CLK         PF0  MFP Mask */
#define SPI0_I2SMCLK_PA4_Msk     SYS_GPA_MFP1_PA4MFP_Msk     /*!< SPI0_I2SMCLK     PA4  MFP Mask */
#define SPI0_I2SMCLK_PB0_Msk     SYS_GPB_MFP0_PB0MFP_Msk     /*!< SPI0_I2SMCLK     PB0  MFP Mask */
#define SPI0_I2SMCLK_PB11_Msk    SYS_GPB_MFP2_PB11MFP_Msk    /*!< SPI0_I2SMCLK     PB11 MFP Mask */
#define SPI0_I2SMCLK_PB12_Msk    SYS_GPB_MFP3_PB12MFP_Msk    /*!< SPI0_I2SMCLK     PB12 MFP Mask */
#define SPI0_I2SMCLK_PC14_Msk    SYS_GPC_MFP3_PC14MFP_Msk    /*!< SPI0_I2SMCLK     PC14 MFP Mask */
#define SPI0_I2SMCLK_PD13_Msk    SYS_GPD_MFP3_PD13MFP_Msk    /*!< SPI0_I2SMCLK     PD13 MFP Mask */
#define SPI0_I2SMCLK_PD14_Msk    SYS_GPD_MFP3_PD14MFP_Msk    /*!< SPI0_I2SMCLK     PD14 MFP Mask */
#define SPI0_I2SMCLK_PF10_Msk    SYS_GPF_MFP2_PF10MFP_Msk    /*!< SPI0_I2SMCLK     PF10 MFP Mask */
#define SPI0_MISO_PA1_Msk        SYS_GPA_MFP0_PA1MFP_Msk     /*!< SPI0_MISO        PA1  MFP Mask */
#define SPI0_MISO_PB13_Msk       SYS_GPB_MFP3_PB13MFP_Msk    /*!< SPI0_MISO        PB13 MFP Mask */
#define SPI0_MISO_PD1_Msk        SYS_GPD_MFP0_PD1MFP_Msk     /*!< SPI0_MISO        PD1  MFP Mask */
#define SPI0_MISO_PF7_Msk        SYS_GPF_MFP1_PF7MFP_Msk     /*!< SPI0_MISO        PF7  MFP Mask */
#define SPI0_MOSI_PA0_Msk        SYS_GPA_MFP0_PA0MFP_Msk     /*!< SPI0_MOSI        PA0  MFP Mask */
#define SPI0_MOSI_PB12_Msk       SYS_GPB_MFP3_PB12MFP_Msk    /*!< SPI0_MOSI        PB12 MFP Mask */
#define SPI0_MOSI_PD0_Msk        SYS_GPD_MFP0_PD0MFP_Msk     /*!< SPI0_MOSI        PD0  MFP Mask */
#define SPI0_MOSI_PF6_Msk        SYS_GPF_MFP1_PF6MFP_Msk     /*!< SPI0_MOSI        PF6  MFP Mask */
#define SPI0_SS_PA3_Msk          SYS_GPA_MFP0_PA3MFP_Msk     /*!< SPI0_SS          PA3  MFP Mask */
#define SPI0_SS_PB7_Msk          SYS_GPB_MFP1_PB7MFP_Msk     /*!< SPI0_SS          PB7  MFP Mask */
#define SPI0_SS_PB15_Msk         SYS_GPB_MFP3_PB15MFP_Msk    /*!< SPI0_SS          PB15 MFP Mask */
#define SPI0_SS_PD3_Msk          SYS_GPD_MFP0_PD3MFP_Msk     /*!< SPI0_SS          PD3  MFP Mask */
#define SPI0_SS_PF9_Msk          SYS_GPF_MFP2_PF9MFP_Msk     /*!< SPI0_SS          PF9  MFP Mask */
#define SPI0_SS_PF1_Msk          SYS_GPF_MFP0_PF1MFP_Msk     /*!< SPI0_SS          PF1  MFP Mask */

/* SPI1 MFP Pin Mask */
#define SPI1_CLK_PA7_Msk         SYS_GPA_MFP1_PA7MFP_Msk     /*!< SPI1_CLK         PA7  MFP Mask */
#define SPI1_CLK_PB3_Msk         SYS_GPB_MFP0_PB3MFP_Msk     /*!< SPI1_CLK         PB3  MFP Mask */
#define SPI1_CLK_PC1_Msk         SYS_GPC_MFP0_PC1MFP_Msk     /*!< SPI1_CLK         PC1  MFP Mask */
#define SPI1_CLK_PD5_Msk         SYS_GPD_MFP1_PD5MFP_Msk     /*!< SPI1_CLK         PD5  MFP Mask */
#define SPI1_CLK_PH6_Msk         SYS_GPH_MFP1_PH6MFP_Msk     /*!< SPI1_CLK         PH6  MFP Mask */
#define SPI1_CLK_PH8_Msk         SYS_GPH_MFP2_PH8MFP_Msk     /*!< SPI1_CLK         PH8  MFP Mask */
#define SPI1_CLK_PF3_Msk         SYS_GPF_MFP0_PF3MFP_Msk     /*!< SPI1_CLK         PF3  MFP Mask */
#define SPI1_I2SMCLK_PA5_Msk     SYS_GPA_MFP1_PA5MFP_Msk     /*!< SPI1_I2SMCLK     PA5  MFP Mask */
#define SPI1_I2SMCLK_PB1_Msk     SYS_GPB_MFP0_PB1MFP_Msk     /*!< SPI1_I2SMCLK     PB1  MFP Mask */
#define SPI1_I2SMCLK_PC4_Msk     SYS_GPC_MFP1_PC4MFP_Msk     /*!< SPI1_I2SMCLK     PC4  MFP Mask */
#define SPI1_I2SMCLK_PD13_Msk    SYS_GPD_MFP3_PD13MFP_Msk    /*!< SPI1_I2SMCLK     PD13 MFP Mask */
#define SPI1_I2SMCLK_PH10_Msk    SYS_GPH_MFP2_PH10MFP_Msk    /*!< SPI1_I2SMCLK     PH10 MFP Mask */
#define SPI1_MISO_PA5_Msk        SYS_GPA_MFP1_PA5MFP_Msk     /*!< SPI1_MISO        PA5  MFP Mask */
#define SPI1_MISO_PB5_Msk        SYS_GPB_MFP1_PB5MFP_Msk     /*!< SPI1_MISO        PB5  MFP Mask */
#define SPI1_MISO_PC3_Msk        SYS_GPC_MFP0_PC3MFP_Msk     /*!< SPI1_MISO        PC3  MFP Mask */
#define SPI1_MISO_PC7_Msk        SYS_GPC_MFP1_PC7MFP_Msk     /*!< SPI1_MISO        PC7  MFP Mask */
#define SPI1_MISO_PD7_Msk        SYS_GPD_MFP1_PD7MFP_Msk     /*!< SPI1_MISO        PD7  MFP Mask */
#define SPI1_MISO_PE1_Msk        SYS_GPE_MFP0_PE1MFP_Msk     /*!< SPI1_MISO        PE1  MFP Mask */
#define SPI1_MISO_PE5_Msk        SYS_GPE_MFP1_PE5MFP_Msk     /*!< SPI1_MISO        PE5  MFP Mask */
#define SPI1_MISO_PH4_Msk        SYS_GPH_MFP1_PH4MFP_Msk     /*!< SPI1_MISO        PH4  MFP Mask */
#define SPI1_MOSI_PA4_Msk        SYS_GPA_MFP1_PA4MFP_Msk     /*!< SPI1_MOSI        PA4  MFP Mask */
#define SPI1_MOSI_PB4_Msk        SYS_GPB_MFP1_PB4MFP_Msk     /*!< SPI1_MOSI        PB4  MFP Mask */
#define SPI1_MOSI_PC2_Msk        SYS_GPC_MFP0_PC2MFP_Msk     /*!< SPI1_MOSI        PC2  MFP Mask */
#define SPI1_MOSI_PC6_Msk        SYS_GPC_MFP1_PC6MFP_Msk     /*!< SPI1_MOSI        PC6  MFP Mask */
#define SPI1_MOSI_PD6_Msk        SYS_GPD_MFP1_PD6MFP_Msk     /*!< SPI1_MOSI        PD6  MFP Mask */
#define SPI1_MOSI_PE0_Msk        SYS_GPE_MFP0_PE0MFP_Msk     /*!< SPI1_MOSI        PE0  MFP Mask */
#define SPI1_MOSI_PE4_Msk        SYS_GPE_MFP1_PE4MFP_Msk     /*!< SPI1_MOSI        PE4  MFP Mask */
#define SPI1_MOSI_PH5_Msk        SYS_GPH_MFP1_PH5MFP_Msk     /*!< SPI1_MOSI        PH5  MFP Mask */
#define SPI1_SS_PA6_Msk          SYS_GPA_MFP1_PA6MFP_Msk     /*!< SPI1_SS          PA6  MFP Mask */
#define SPI1_SS_PB2_Msk          SYS_GPB_MFP0_PB2MFP_Msk     /*!< SPI1_SS          PB2  MFP Mask */
#define SPI1_SS_PC0_Msk          SYS_GPC_MFP0_PC0MFP_Msk     /*!< SPI1_SS          PC0  MFP Mask */
#define SPI1_SS_PD4_Msk          SYS_GPD_MFP1_PD4MFP_Msk     /*!< SPI1_SS          PD4  MFP Mask */
#define SPI1_SS_PF2_Msk          SYS_GPF_MFP0_PF2MFP_Msk     /*!< SPI1_SS          PF2  MFP Mask */
#define SPI1_SS_PH7_Msk          SYS_GPH_MFP1_PH7MFP_Msk     /*!< SPI1_SS          PH7  MFP Mask */
#define SPI1_SS_PH9_Msk          SYS_GPH_MFP2_PH9MFP_Msk     /*!< SPI1_SS          PH9  MFP Mask */

/* SPI2 MFP Pin Mask */
#define SPI2_CLK_PA10_Msk        SYS_GPA_MFP2_PA10MFP_Msk    /*!< SPI2_CLK         PA10 MFP Mask */
#define SPI2_CLK_PA13_Msk        SYS_GPA_MFP3_PA13MFP_Msk    /*!< SPI2_CLK         PA13 MFP Mask */
#define SPI2_CLK_PE8_Msk         SYS_GPE_MFP2_PE8MFP_Msk     /*!< SPI2_CLK         PE8  MFP Mask */
#define SPI2_CLK_PG3_Msk         SYS_GPG_MFP0_PG3MFP_Msk     /*!< SPI2_CLK         PG3  MFP Mask */
#define SPI2_I2SMCLK_PB0_Msk     SYS_GPB_MFP0_PB0MFP_Msk     /*!< SPI2_I2SMCLK     PB0  MFP Mask */
#define SPI2_I2SMCLK_PC13_Msk    SYS_GPC_MFP3_PC13MFP_Msk    /*!< SPI2_I2SMCLK     PC13 MFP Mask */
#define SPI2_I2SMCLK_PE12_Msk    SYS_GPE_MFP3_PE12MFP_Msk    /*!< SPI2_I2SMCLK     PE12 MFP Mask */
#define SPI2_MISO_PA9_Msk        SYS_GPA_MFP2_PA9MFP_Msk     /*!< SPI2_MISO        PA9  MFP Mask */
#define SPI2_MISO_PA14_Msk       SYS_GPA_MFP3_PA14MFP_Msk    /*!< SPI2_MISO        PA14 MFP Mask */
#define SPI2_MISO_PE9_Msk        SYS_GPE_MFP2_PE9MFP_Msk     /*!< SPI2_MISO        PE9  MFP Mask */
#define SPI2_MISO_PG4_Msk        SYS_GPG_MFP1_PG4MFP_Msk     /*!< SPI2_MISO        PG4  MFP Mask */
#define SPI2_MOSI_PA8_Msk        SYS_GPA_MFP2_PA8MFP_Msk     /*!< SPI2_MOSI        PA8  MFP Mask */
#define SPI2_MOSI_PA15_Msk       SYS_GPA_MFP3_PA15MFP_Msk    /*!< SPI2_MOSI        PA15 MFP Mask */
#define SPI2_MOSI_PE10_Msk       SYS_GPE_MFP2_PE10MFP_Msk    /*!< SPI2_MOSI        PE10 MFP Mask */
#define SPI2_MOSI_PF11_Msk       SYS_GPF_MFP2_PF11MFP_Msk    /*!< SPI2_MOSI        PF11 MFP Mask */
#define SPI2_SS_PA11_Msk         SYS_GPA_MFP2_PA11MFP_Msk    /*!< SPI2_SS          PA11 MFP Mask */
#define SPI2_SS_PA12_Msk         SYS_GPA_MFP3_PA12MFP_Msk    /*!< SPI2_SS          PA12 MFP Mask */
#define SPI2_SS_PE11_Msk         SYS_GPE_MFP2_PE11MFP_Msk    /*!< SPI2_SS          PE11 MFP Mask */
#define SPI2_SS_PG2_Msk          SYS_GPG_MFP0_PG2MFP_Msk     /*!< SPI2_SS          PG2  MFP Mask */

/* TM0 MFP Pin Mask */
#define TM0_EXT_PA11_Msk         SYS_GPA_MFP2_PA11MFP_Msk    /*!< TM0_EXT          PA11 MFP Mask */
#define TM0_EXT_PB15_Msk         SYS_GPB_MFP3_PB15MFP_Msk    /*!< TM0_EXT          PB15 MFP Mask */
#define TM0_EXT_PF3_Msk          SYS_GPF_MFP0_PF3MFP_Msk     /*!< TM0_EXT          PF3  MFP Mask */
#define TM0_PB5_Msk              SYS_GPB_MFP1_PB5MFP_Msk     /*!< TM0              PB5  MFP Mask */
#define TM0_PC7_Msk              SYS_GPC_MFP1_PC7MFP_Msk     /*!< TM0              PC7  MFP Mask */
#define TM0_PG2_Msk              SYS_GPG_MFP0_PG2MFP_Msk     /*!< TM0              PG2  MFP Mask */

/* TM1 MFP Pin Mask */
#define TM1_EXT_PA10_Msk         SYS_GPA_MFP2_PA10MFP_Msk    /*!< TM1_EXT          PA10 MFP Mask */
#define TM1_EXT_PB14_Msk         SYS_GPB_MFP3_PB14MFP_Msk    /*!< TM1_EXT          PB14 MFP Mask */
#define TM1_EXT_PF2_Msk          SYS_GPF_MFP0_PF2MFP_Msk     /*!< TM1_EXT          PF2  MFP Mask */
#define TM1_PB4_Msk              SYS_GPB_MFP1_PB4MFP_Msk     /*!< TM1              PB4  MFP Mask */
#define TM1_PB6_Msk              SYS_GPB_MFP1_PB6MFP_Msk     /*!< TM1              PB6  MFP Mask */
#define TM1_PC6_Msk              SYS_GPC_MFP1_PC6MFP_Msk     /*!< TM1              PC6  MFP Mask */
#define TM1_PC14_Msk             SYS_GPC_MFP3_PC14MFP_Msk    /*!< TM1              PC14 MFP Mask */
#define TM1_PG3_Msk              SYS_GPG_MFP0_PG3MFP_Msk     /*!< TM1              PG3  MFP Mask */

/* TM2 MFP Pin Mask */
#define TM2_EXT_PA9_Msk          SYS_GPA_MFP2_PA9MFP_Msk     /*!< TM2_EXT          PA9  MFP Mask */
#define TM2_EXT_PB13_Msk         SYS_GPB_MFP3_PB13MFP_Msk    /*!< TM2_EXT          PB13 MFP Mask */
#define TM2_PA7_Msk              SYS_GPA_MFP1_PA7MFP_Msk     /*!< TM2              PA7  MFP Mask */
#define TM2_PB3_Msk              SYS_GPB_MFP0_PB3MFP_Msk     /*!< TM2              PB3  MFP Mask */
#define TM2_PD0_Msk              SYS_GPD_MFP0_PD0MFP_Msk     /*!< TM2              PD0  MFP Mask */
#define TM2_PG4_Msk              SYS_GPG_MFP1_PG4MFP_Msk     /*!< TM2              PG4  MFP Mask */

/* TM3 MFP Pin Mask */
#define TM3_EXT_PA8_Msk          SYS_GPA_MFP2_PA8MFP_Msk     /*!< TM3_EXT          PA8  MFP Mask */
#define TM3_EXT_PB12_Msk         SYS_GPB_MFP3_PB12MFP_Msk    /*!< TM3_EXT          PB12 MFP Mask */
#define TM3_PA6_Msk              SYS_GPA_MFP1_PA6MFP_Msk     /*!< TM3              PA6  MFP Mask */
#define TM3_PB2_Msk              SYS_GPB_MFP0_PB2MFP_Msk     /*!< TM3              PB2  MFP Mask */
#define TM3_PF11_Msk             SYS_GPF_MFP2_PF11MFP_Msk    /*!< TM3              PF11 MFP Mask */

/* TRACE MFP Pin Mask */
#define TRACE_SWO_PC14_Msk       SYS_GPC_MFP3_PC14MFP_Msk    /*!< TRACE_SWO        PC14 MFP Mask */
#define TRACE_SWO_PE13_Msk       SYS_GPE_MFP3_PE13MFP_Msk    /*!< TRACE_SWO        PE13 MFP Mask */
#define TRACE_SWO_PF6_Msk        SYS_GPF_MFP1_PF6MFP_Msk     /*!< TRACE_SWO        PF6  MFP Mask */

/* UART0 MFP Pin Mask */
#define UART0_RXD_PA0_Msk        SYS_GPA_MFP0_PA0MFP_Msk     /*!< UART0_RXD        PA0  MFP Mask */
#define UART0_RXD_PA4_Msk        SYS_GPA_MFP1_PA4MFP_Msk     /*!< UART0_RXD        PA4  MFP Mask */
#define UART0_RXD_PA6_Msk        SYS_GPA_MFP1_PA6MFP_Msk     /*!< UART0_RXD        PA6  MFP Mask */
#define UART0_RXD_PA15_Msk       SYS_GPA_MFP3_PA15MFP_Msk    /*!< UART0_RXD        PA15 MFP Mask */
#define UART0_RXD_PB8_Msk        SYS_GPB_MFP2_PB8MFP_Msk     /*!< UART0_RXD        PB8  MFP Mask */
#define UART0_RXD_PB12_Msk       SYS_GPB_MFP3_PB12MFP_Msk    /*!< UART0_RXD        PB12 MFP Mask */
#define UART0_RXD_PC11_Msk       SYS_GPC_MFP2_PC11MFP_Msk    /*!< UART0_RXD        PC11 MFP Mask */
#define UART0_RXD_PD2_Msk        SYS_GPD_MFP0_PD2MFP_Msk     /*!< UART0_RXD        PD2  MFP Mask */
#define UART0_RXD_PF1_Msk        SYS_GPF_MFP0_PF1MFP_Msk     /*!< UART0_RXD        PF1  MFP Mask */
#define UART0_RXD_PF2_Msk        SYS_GPF_MFP0_PF2MFP_Msk     /*!< UART0_RXD        PF2  MFP Mask */
#define UART0_RXD_PH11_Msk       SYS_GPH_MFP2_PH11MFP_Msk    /*!< UART0_RXD        PH11 MFP Mask */
#define UART0_TXD_PA1_Msk        SYS_GPA_MFP0_PA1MFP_Msk     /*!< UART0_TXD        PA1  MFP Mask */
#define UART0_TXD_PA5_Msk        SYS_GPA_MFP1_PA5MFP_Msk     /*!< UART0_TXD        PA5  MFP Mask */
#define UART0_TXD_PA7_Msk        SYS_GPA_MFP1_PA7MFP_Msk     /*!< UART0_TXD        PA7  MFP Mask */
#define UART0_TXD_PA14_Msk       SYS_GPA_MFP3_PA14MFP_Msk    /*!< UART0_TXD        PA14 MFP Mask */
#define UART0_TXD_PB9_Msk        SYS_GPB_MFP2_PB9MFP_Msk     /*!< UART0_TXD        PB9  MFP Mask */
#define UART0_TXD_PB13_Msk       SYS_GPB_MFP3_PB13MFP_Msk    /*!< UART0_TXD        PB13 MFP Mask */
#define UART0_TXD_PC12_Msk       SYS_GPC_MFP3_PC12MFP_Msk    /*!< UART0_TXD        PC12 MFP Mask */
#define UART0_TXD_PD3_Msk        SYS_GPD_MFP0_PD3MFP_Msk     /*!< UART0_TXD        PD3  MFP Mask */
#define UART0_TXD_PF0_Msk        SYS_GPF_MFP0_PF0MFP_Msk     /*!< UART0_TXD        PF0  MFP Mask */
#define UART0_TXD_PF3_Msk        SYS_GPF_MFP0_PF3MFP_Msk     /*!< UART0_TXD        PF3  MFP Mask */
#define UART0_TXD_PH10_Msk       SYS_GPH_MFP2_PH10MFP_Msk    /*!< UART0_TXD        PH10 MFP Mask */
#define UART0_nCTS_PA5_Msk       SYS_GPA_MFP1_PA5MFP_Msk     /*!< UART0_nCTS       PA5  MFP Mask */
#define UART0_nCTS_PB11_Msk      SYS_GPB_MFP2_PB11MFP_Msk    /*!< UART0_nCTS       PB11 MFP Mask */
#define UART0_nCTS_PB15_Msk      SYS_GPB_MFP3_PB15MFP_Msk    /*!< UART0_nCTS       PB15 MFP Mask */
#define UART0_nCTS_PC7_Msk       SYS_GPC_MFP1_PC7MFP_Msk     /*!< UART0_nCTS       PC7  MFP Mask */
#define UART0_nCTS_PF5_Msk       SYS_GPF_MFP1_PF5MFP_Msk     /*!< UART0_nCTS       PF5  MFP Mask */
#define UART0_nRTS_PA4_Msk       SYS_GPA_MFP1_PA4MFP_Msk     /*!< UART0_nRTS       PA4  MFP Mask */
#define UART0_nRTS_PB10_Msk      SYS_GPB_MFP2_PB10MFP_Msk    /*!< UART0_nRTS       PB10 MFP Mask */
#define UART0_nRTS_PB14_Msk      SYS_GPB_MFP3_PB14MFP_Msk    /*!< UART0_nRTS       PB14 MFP Mask */
#define UART0_nRTS_PC6_Msk       SYS_GPC_MFP1_PC6MFP_Msk     /*!< UART0_nRTS       PC6  MFP Mask */
#define UART0_nRTS_PF4_Msk       SYS_GPF_MFP1_PF4MFP_Msk     /*!< UART0_nRTS       PF4  MFP Mask */

/* UART1 MFP Pin Mask */
#define UART1_RXD_PA2_Msk        SYS_GPA_MFP0_PA2MFP_Msk     /*!< UART1_RXD        PA2  MFP Mask */
#define UART1_RXD_PA8_Msk        SYS_GPA_MFP2_PA8MFP_Msk     /*!< UART1_RXD        PA8  MFP Mask */
#define UART1_RXD_PB2_Msk        SYS_GPB_MFP0_PB2MFP_Msk     /*!< UART1_RXD        PB2  MFP Mask */
#define UART1_RXD_PB6_Msk        SYS_GPB_MFP1_PB6MFP_Msk     /*!< UART1_RXD        PB6  MFP Mask */
#define UART1_RXD_PC8_Msk        SYS_GPC_MFP2_PC8MFP_Msk     /*!< UART1_RXD        PC8  MFP Mask */
#define UART1_RXD_PD6_Msk        SYS_GPD_MFP1_PD6MFP_Msk     /*!< UART1_RXD        PD6  MFP Mask */
#define UART1_RXD_PD10_Msk       SYS_GPD_MFP2_PD10MFP_Msk    /*!< UART1_RXD        PD10 MFP Mask */
#define UART1_RXD_PF1_Msk        SYS_GPF_MFP0_PF1MFP_Msk     /*!< UART1_RXD        PF1  MFP Mask */
#define UART1_RXD_PH9_Msk        SYS_GPH_MFP2_PH9MFP_Msk     /*!< UART1_RXD        PH9  MFP Mask */
#define UART1_TXD_PA3_Msk        SYS_GPA_MFP0_PA3MFP_Msk     /*!< UART1_TXD        PA3  MFP Mask */
#define UART1_TXD_PA9_Msk        SYS_GPA_MFP2_PA9MFP_Msk     /*!< UART1_TXD        PA9  MFP Mask */
#define UART1_TXD_PB3_Msk        SYS_GPB_MFP0_PB3MFP_Msk     /*!< UART1_TXD        PB3  MFP Mask */
#define UART1_TXD_PB7_Msk        SYS_GPB_MFP1_PB7MFP_Msk     /*!< UART1_TXD        PB7  MFP Mask */
#define UART1_TXD_PD7_Msk        SYS_GPD_MFP1_PD7MFP_Msk     /*!< UART1_TXD        PD7  MFP Mask */
#define UART1_TXD_PD11_Msk       SYS_GPD_MFP2_PD11MFP_Msk    /*!< UART1_TXD        PD11 MFP Mask */
#define UART1_TXD_PE13_Msk       SYS_GPE_MFP3_PE13MFP_Msk    /*!< UART1_TXD        PE13 MFP Mask */
#define UART1_TXD_PF0_Msk        SYS_GPF_MFP0_PF0MFP_Msk     /*!< UART1_TXD        PF0  MFP Mask */
#define UART1_TXD_PH8_Msk        SYS_GPH_MFP2_PH8MFP_Msk     /*!< UART1_TXD        PH8  MFP Mask */
#define UART1_nCTS_PA1_Msk       SYS_GPA_MFP0_PA1MFP_Msk     /*!< UART1_nCTS       PA1  MFP Mask */
#define UART1_nCTS_PB9_Msk       SYS_GPB_MFP2_PB9MFP_Msk     /*!< UART1_nCTS       PB9  MFP Mask */
#define UART1_nCTS_PE11_Msk      SYS_GPE_MFP2_PE11MFP_Msk    /*!< UART1_nCTS       PE11 MFP Mask */
#define UART1_nRTS_PA0_Msk       SYS_GPA_MFP0_PA0MFP_Msk     /*!< UART1_nRTS       PA0  MFP Mask */
#define UART1_nRTS_PB8_Msk       SYS_GPB_MFP2_PB8MFP_Msk     /*!< UART1_nRTS       PB8  MFP Mask */
#define UART1_nRTS_PE12_Msk      SYS_GPE_MFP3_PE12MFP_Msk    /*!< UART1_nRTS       PE12 MFP Mask */

/* UART2 MFP Pin Mask */
#define UART2_RXD_PB0_Msk        SYS_GPB_MFP0_PB0MFP_Msk     /*!< UART2_RXD        PB0  MFP Mask */
#define UART2_RXD_PB4_Msk        SYS_GPB_MFP1_PB4MFP_Msk     /*!< UART2_RXD        PB4  MFP Mask */
#define UART2_RXD_PC0_Msk        SYS_GPC_MFP0_PC0MFP_Msk     /*!< UART2_RXD        PC0  MFP Mask */
#define UART2_RXD_PC4_Msk        SYS_GPC_MFP1_PC4MFP_Msk     /*!< UART2_RXD        PC4  MFP Mask */
#define UART2_RXD_PD12_Msk       SYS_GPD_MFP3_PD12MFP_Msk    /*!< UART2_RXD        PD12 MFP Mask */
#define UART2_RXD_PE9_Msk        SYS_GPE_MFP2_PE9MFP_Msk     /*!< UART2_RXD        PE9  MFP Mask */
#define UART2_RXD_PE15_Msk       SYS_GPE_MFP3_PE15MFP_Msk    /*!< UART2_RXD        PE15 MFP Mask */
#define UART2_RXD_PF1_Msk        SYS_GPF_MFP0_PF1MFP_Msk     /*!< UART2_RXD        PF1  MFP Mask */
#define UART2_RXD_PF5_Msk        SYS_GPF_MFP1_PF5MFP_Msk     /*!< UART2_RXD        PF5  MFP Mask */
#define UART2_TXD_PB1_Msk        SYS_GPB_MFP0_PB1MFP_Msk     /*!< UART2_TXD        PB1  MFP Mask */
#define UART2_TXD_PB5_Msk        SYS_GPB_MFP1_PB5MFP_Msk     /*!< UART2_TXD        PB5  MFP Mask */
#define UART2_TXD_PC1_Msk        SYS_GPC_MFP0_PC1MFP_Msk     /*!< UART2_TXD        PC1  MFP Mask */
#define UART2_TXD_PC5_Msk        SYS_GPC_MFP1_PC5MFP_Msk     /*!< UART2_TXD        PC5  MFP Mask */
#define UART2_TXD_PC13_Msk       SYS_GPC_MFP3_PC13MFP_Msk    /*!< UART2_TXD        PC13 MFP Mask */
#define UART2_TXD_PE8_Msk        SYS_GPE_MFP2_PE8MFP_Msk     /*!< UART2_TXD        PE8  MFP Mask */
#define UART2_TXD_PE14_Msk       SYS_GPE_MFP3_PE14MFP_Msk    /*!< UART2_TXD        PE14 MFP Mask */
#define UART2_TXD_PF0_Msk        SYS_GPF_MFP0_PF0MFP_Msk     /*!< UART2_TXD        PF0  MFP Mask */
#define UART2_TXD_PF4_Msk        SYS_GPF_MFP1_PF4MFP_Msk     /*!< UART2_TXD        PF4  MFP Mask */
#define UART2_nCTS_PC2_Msk       SYS_GPC_MFP0_PC2MFP_Msk     /*!< UART2_nCTS       PC2  MFP Mask */
#define UART2_nCTS_PD9_Msk       SYS_GPD_MFP2_PD9MFP_Msk     /*!< UART2_nCTS       PD9  MFP Mask */
#define UART2_nCTS_PF5_Msk       SYS_GPF_MFP1_PF5MFP_Msk     /*!< UART2_nCTS       PF5  MFP Mask */
#define UART2_nRTS_PC3_Msk       SYS_GPC_MFP0_PC3MFP_Msk     /*!< UART2_nRTS       PC3  MFP Mask */
#define UART2_nRTS_PD8_Msk       SYS_GPD_MFP2_PD8MFP_Msk     /*!< UART2_nRTS       PD8  MFP Mask */
#define UART2_nRTS_PF4_Msk       SYS_GPF_MFP1_PF4MFP_Msk     /*!< UART2_nRTS       PF4  MFP Mask */

/* UART3 MFP Pin Mask */
#define UART3_RXD_PB14_Msk       SYS_GPB_MFP3_PB14MFP_Msk    /*!< UART3_RXD        PB14 MFP Mask */
#define UART3_RXD_PC2_Msk        SYS_GPC_MFP0_PC2MFP_Msk     /*!< UART3_RXD        PC2  MFP Mask */
#define UART3_RXD_PC9_Msk        SYS_GPC_MFP2_PC9MFP_Msk     /*!< UART3_RXD        PC9  MFP Mask */
#define UART3_RXD_PD0_Msk        SYS_GPD_MFP0_PD0MFP_Msk     /*!< UART3_RXD        PD0  MFP Mask */
#define UART3_RXD_PE0_Msk        SYS_GPE_MFP0_PE0MFP_Msk     /*!< UART3_RXD        PE0  MFP Mask */
#define UART3_RXD_PE11_Msk       SYS_GPE_MFP2_PE11MFP_Msk    /*!< UART3_RXD        PE11 MFP Mask */
#define UART3_RXD_PE15_Msk       SYS_GPE_MFP3_PE15MFP_Msk    /*!< UART3_RXD        PE15 MFP Mask */
#define UART3_RXD_PF4_Msk        SYS_GPF_MFP1_PF4MFP_Msk     /*!< UART3_RXD        PF4  MFP Mask */
#define UART3_TXD_PB15_Msk       SYS_GPB_MFP3_PB15MFP_Msk    /*!< UART3_TXD        PB15 MFP Mask */
#define UART3_TXD_PC3_Msk        SYS_GPC_MFP0_PC3MFP_Msk     /*!< UART3_TXD        PC3  MFP Mask */
#define UART3_TXD_PC10_Msk       SYS_GPC_MFP2_PC10MFP_Msk    /*!< UART3_TXD        PC10 MFP Mask */
#define UART3_TXD_PD1_Msk        SYS_GPD_MFP0_PD1MFP_Msk     /*!< UART3_TXD        PD1  MFP Mask */
#define UART3_TXD_PE1_Msk        SYS_GPE_MFP0_PE1MFP_Msk     /*!< UART3_TXD        PE1  MFP Mask */
#define UART3_TXD_PE10_Msk       SYS_GPE_MFP2_PE10MFP_Msk    /*!< UART3_TXD        PE10 MFP Mask */
#define UART3_TXD_PE14_Msk       SYS_GPE_MFP3_PE14MFP_Msk    /*!< UART3_TXD        PE14 MFP Mask */
#define UART3_TXD_PF5_Msk        SYS_GPF_MFP1_PF5MFP_Msk     /*!< UART3_TXD        PF5  MFP Mask */
#define UART3_nCTS_PB12_Msk      SYS_GPB_MFP3_PB12MFP_Msk    /*!< UART3_nCTS       PB12 MFP Mask */
#define UART3_nCTS_PD2_Msk       SYS_GPD_MFP0_PD2MFP_Msk     /*!< UART3_nCTS       PD2  MFP Mask */
#define UART3_nCTS_PH9_Msk       SYS_GPH_MFP2_PH9MFP_Msk     /*!< UART3_nCTS       PH9  MFP Mask */
#define UART3_nRTS_PB13_Msk      SYS_GPB_MFP3_PB13MFP_Msk    /*!< UART3_nRTS       PB13 MFP Mask */
#define UART3_nRTS_PD3_Msk       SYS_GPD_MFP0_PD3MFP_Msk     /*!< UART3_nRTS       PD3  MFP Mask */
#define UART3_nRTS_PH8_Msk       SYS_GPH_MFP2_PH8MFP_Msk     /*!< UART3_nRTS       PH8  MFP Mask */

/* UART4 MFP Pin Mask */
#define UART4_RXD_PA2_Msk        SYS_GPA_MFP0_PA2MFP_Msk     /*!< UART4_RXD        PA2  MFP Mask */
#define UART4_RXD_PA13_Msk       SYS_GPA_MFP3_PA13MFP_Msk    /*!< UART4_RXD        PA13 MFP Mask */
#define UART4_RXD_PB10_Msk       SYS_GPB_MFP2_PB10MFP_Msk    /*!< UART4_RXD        PB10 MFP Mask */
#define UART4_RXD_PC4_Msk        SYS_GPC_MFP1_PC4MFP_Msk     /*!< UART4_RXD        PC4  MFP Mask */
#define UART4_RXD_PC6_Msk        SYS_GPC_MFP1_PC6MFP_Msk     /*!< UART4_RXD        PC6  MFP Mask */
#define UART4_RXD_PF6_Msk        SYS_GPF_MFP1_PF6MFP_Msk     /*!< UART4_RXD        PF6  MFP Mask */
#define UART4_RXD_PH11_Msk       SYS_GPH_MFP2_PH11MFP_Msk    /*!< UART4_RXD        PH11 MFP Mask */
#define UART4_TXD_PA3_Msk        SYS_GPA_MFP0_PA3MFP_Msk     /*!< UART4_TXD        PA3  MFP Mask */
#define UART4_TXD_PA12_Msk       SYS_GPA_MFP3_PA12MFP_Msk    /*!< UART4_TXD        PA12 MFP Mask */
#define UART4_TXD_PB11_Msk       SYS_GPB_MFP2_PB11MFP_Msk    /*!< UART4_TXD        PB11 MFP Mask */
#define UART4_TXD_PC5_Msk        SYS_GPC_MFP1_PC5MFP_Msk     /*!< UART4_TXD        PC5  MFP Mask */
#define UART4_TXD_PC7_Msk        SYS_GPC_MFP1_PC7MFP_Msk     /*!< UART4_TXD        PC7  MFP Mask */
#define UART4_TXD_PF7_Msk        SYS_GPF_MFP1_PF7MFP_Msk     /*!< UART4_TXD        PF7  MFP Mask */
#define UART4_TXD_PH10_Msk       SYS_GPH_MFP2_PH10MFP_Msk    /*!< UART4_TXD        PH10 MFP Mask */
#define UART4_nCTS_PC8_Msk       SYS_GPC_MFP2_PC8MFP_Msk     /*!< UART4_nCTS       PC8  MFP Mask */
#define UART4_nCTS_PE1_Msk       SYS_GPE_MFP0_PE1MFP_Msk     /*!< UART4_nCTS       PE1  MFP Mask */
#define UART4_nCTS_PE14_Msk      SYS_GPE_MFP3_PE14MFP_Msk    /*!< UART4_nCTS       PE14 MFP Mask */
#define UART4_nRTS_PE0_Msk       SYS_GPE_MFP0_PE0MFP_Msk     /*!< UART4_nRTS       PE0  MFP Mask */
#define UART4_nRTS_PE13_Msk      SYS_GPE_MFP3_PE13MFP_Msk    /*!< UART4_nRTS       PE13 MFP Mask */
#define UART4_nRTS_PE15_Msk      SYS_GPE_MFP3_PE15MFP_Msk    /*!< UART4_nRTS       PE15 MFP Mask */

/* USCI0 MFP Pin Mask */
#define USCI0_CLK_PA11_Msk       SYS_GPA_MFP2_PA11MFP_Msk    /*!< USCI0_CLK        PA11 MFP Mask */
#define USCI0_CLK_PB12_Msk       SYS_GPB_MFP3_PB12MFP_Msk    /*!< USCI0_CLK        PB12 MFP Mask */
#define USCI0_CLK_PD0_Msk        SYS_GPD_MFP0_PD0MFP_Msk     /*!< USCI0_CLK        PD0  MFP Mask */
#define USCI0_CLK_PE2_Msk        SYS_GPE_MFP0_PE2MFP_Msk     /*!< USCI0_CLK        PE2  MFP Mask */
#define USCI0_CTL0_PB0_Msk       SYS_GPB_MFP0_PB0MFP_Msk     /*!< USCI0_CTL0       PB0  MFP Mask */
#define USCI0_CTL0_PB13_Msk      SYS_GPB_MFP3_PB13MFP_Msk    /*!< USCI0_CTL0       PB13 MFP Mask */
#define USCI0_CTL0_PC13_Msk      SYS_GPC_MFP3_PC13MFP_Msk    /*!< USCI0_CTL0       PC13 MFP Mask */
#define USCI0_CTL0_PC14_Msk      SYS_GPC_MFP3_PC14MFP_Msk    /*!< USCI0_CTL0       PC14 MFP Mask */
#define USCI0_CTL0_PD4_Msk       SYS_GPD_MFP1_PD4MFP_Msk     /*!< USCI0_CTL0       PD4  MFP Mask */
#define USCI0_CTL0_PE6_Msk       SYS_GPE_MFP1_PE6MFP_Msk     /*!< USCI0_CTL0       PE6  MFP Mask */
#define USCI0_CTL1_PA8_Msk       SYS_GPA_MFP2_PA8MFP_Msk     /*!< USCI0_CTL1       PA8  MFP Mask */
#define USCI0_CTL1_PB15_Msk      SYS_GPB_MFP3_PB15MFP_Msk    /*!< USCI0_CTL1       PB15 MFP Mask */
#define USCI0_CTL1_PD3_Msk       SYS_GPD_MFP0_PD3MFP_Msk     /*!< USCI0_CTL1       PD3  MFP Mask */
#define USCI0_CTL1_PE5_Msk       SYS_GPE_MFP1_PE5MFP_Msk     /*!< USCI0_CTL1       PE5  MFP Mask */
#define USCI0_CTL1_PF0_Msk       SYS_GPF_MFP0_PF0MFP_Msk     /*!< USCI0_CTL1       PF0  MFP Mask */
#define USCI0_DAT0_PA10_Msk      SYS_GPA_MFP2_PA10MFP_Msk    /*!< USCI0_DAT0       PA10 MFP Mask */
#define USCI0_DAT0_PB13_Msk      SYS_GPB_MFP3_PB13MFP_Msk    /*!< USCI0_DAT0       PB13 MFP Mask */
#define USCI0_DAT0_PD1_Msk       SYS_GPD_MFP0_PD1MFP_Msk     /*!< USCI0_DAT0       PD1  MFP Mask */
#define USCI0_DAT0_PE3_Msk       SYS_GPE_MFP0_PE3MFP_Msk     /*!< USCI0_DAT0       PE3  MFP Mask */
#define USCI0_DAT1_PA9_Msk       SYS_GPA_MFP2_PA9MFP_Msk     /*!< USCI0_DAT1       PA9  MFP Mask */
#define USCI0_DAT1_PB14_Msk      SYS_GPB_MFP3_PB14MFP_Msk    /*!< USCI0_DAT1       PB14 MFP Mask */
#define USCI0_DAT1_PD2_Msk       SYS_GPD_MFP0_PD2MFP_Msk     /*!< USCI0_DAT1       PD2  MFP Mask */
#define USCI0_DAT1_PE4_Msk       SYS_GPE_MFP1_PE4MFP_Msk     /*!< USCI0_DAT1       PE4  MFP Mask */
#define USCI0_DAT1_PF1_Msk       SYS_GPF_MFP0_PF1MFP_Msk     /*!< USCI0_DAT1       PF1  MFP Mask */

/* USCI1 MFP Pin Mask */
#define USCI1_CLK_PB1_Msk        SYS_GPB_MFP0_PB1MFP_Msk     /*!< USCI1_CLK        PB1  MFP Mask */
#define USCI1_CLK_PB8_Msk        SYS_GPB_MFP2_PB8MFP_Msk     /*!< USCI1_CLK        PB8  MFP Mask */
#define USCI1_CLK_PD7_Msk        SYS_GPD_MFP1_PD7MFP_Msk     /*!< USCI1_CLK        PD7  MFP Mask */
#define USCI1_CLK_PE12_Msk       SYS_GPE_MFP3_PE12MFP_Msk    /*!< USCI1_CLK        PE12 MFP Mask */
#define USCI1_CTL0_PB5_Msk       SYS_GPB_MFP1_PB5MFP_Msk     /*!< USCI1_CTL0       PB5  MFP Mask */
#define USCI1_CTL0_PB10_Msk      SYS_GPB_MFP2_PB10MFP_Msk    /*!< USCI1_CTL0       PB10 MFP Mask */
#define USCI1_CTL0_PD3_Msk       SYS_GPD_MFP0_PD3MFP_Msk     /*!< USCI1_CTL0       PD3  MFP Mask */
#define USCI1_CTL0_PE9_Msk       SYS_GPE_MFP2_PE9MFP_Msk     /*!< USCI1_CTL0       PE9  MFP Mask */
#define USCI1_CTL1_PB4_Msk       SYS_GPB_MFP1_PB4MFP_Msk     /*!< USCI1_CTL1       PB4  MFP Mask */
#define USCI1_CTL1_PB9_Msk       SYS_GPB_MFP2_PB9MFP_Msk     /*!< USCI1_CTL1       PB9  MFP Mask */
#define USCI1_CTL1_PD4_Msk       SYS_GPD_MFP1_PD4MFP_Msk     /*!< USCI1_CTL1       PD4  MFP Mask */
#define USCI1_CTL1_PE8_Msk       SYS_GPE_MFP2_PE8MFP_Msk     /*!< USCI1_CTL1       PE8  MFP Mask */
#define USCI1_DAT0_PB2_Msk       SYS_GPB_MFP0_PB2MFP_Msk     /*!< USCI1_DAT0       PB2  MFP Mask */
#define USCI1_DAT0_PB7_Msk       SYS_GPB_MFP1_PB7MFP_Msk     /*!< USCI1_DAT0       PB7  MFP Mask */
#define USCI1_DAT0_PD5_Msk       SYS_GPD_MFP1_PD5MFP_Msk     /*!< USCI1_DAT0       PD5  MFP Mask */
#define USCI1_DAT0_PE10_Msk      SYS_GPE_MFP2_PE10MFP_Msk    /*!< USCI1_DAT0       PE10 MFP Mask */
#define USCI1_DAT1_PB3_Msk       SYS_GPB_MFP0_PB3MFP_Msk     /*!< USCI1_DAT1       PB3  MFP Mask */
#define USCI1_DAT1_PB6_Msk       SYS_GPB_MFP1_PB6MFP_Msk     /*!< USCI1_DAT1       PB6  MFP Mask */
#define USCI1_DAT1_PD6_Msk       SYS_GPD_MFP1_PD6MFP_Msk     /*!< USCI1_DAT1       PD6  MFP Mask */
#define USCI1_DAT1_PE11_Msk      SYS_GPE_MFP2_PE11MFP_Msk    /*!< USCI1_DAT1       PE11 MFP Mask */

/* X32 MFP Pin Mask */
#define X32_IN_PF5_Msk           SYS_GPF_MFP1_PF5MFP_Msk     /*!< X32_IN           PF5  MFP Mask */
#define X32_OUT_PF4_Msk          SYS_GPF_MFP1_PF4MFP_Msk     /*!< X32_OUT          PF4  MFP Mask */

/* XT1 MFP Pin Mask */
#define XT1_IN_PF3_Msk           SYS_GPF_MFP0_PF3MFP_Msk     /*!< XT1_IN           PF3  MFP Mask */
#define XT1_OUT_PF2_Msk          SYS_GPF_MFP0_PF2MFP_Msk     /*!< XT1_OUT          PF2  MFP Mask */


/*@}*/ /* end of group SYS_EXPORTED_CONSTANTS */

/** @addtogroup SYS_EXPORTED_FUNCTIONS SYS Exported Functions
  @{
*/


/*---------------------------------------------------------------------------------------------------------*/
/*  Multi-Function macro definitions.                                                                      */
/*---------------------------------------------------------------------------------------------------------*/


/* ACMP0 MFP Macros*/
#define SET_ACMP0_O_PB7()        SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~ACMP0_O_PB7_Msk       ))) | ACMP0_O_PB7           /*!< Set PB7  function to ACMP0_O          */
#define SET_ACMP0_O_PC1()        SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~ACMP0_O_PC1_Msk       ))) | ACMP0_O_PC1           /*!< Set PC1  function to ACMP0_O          */
#define SET_ACMP0_O_PC12()       SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~ACMP0_O_PC12_Msk      ))) | ACMP0_O_PC12          /*!< Set PC12 function to ACMP0_O          */
#define SET_ACMP0_O_PF0()        SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~ACMP0_O_PF0_Msk       ))) | ACMP0_O_PF0           /*!< Set PF0  function to ACMP0_O          */
#define SET_ACMP0_O_PG14()       SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~ACMP0_O_PG14_Msk      ))) | ACMP0_O_PG14          /*!< Set PG14 function to ACMP0_O          */
#define SET_ACMP0_WLAT_PA7()     SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~ACMP0_WLAT_PA7_Msk    ))) | ACMP0_WLAT_PA7        /*!< Set PA7  function to ACMP0_WLAT       */
#define SET_ACMP0_N_PB3()        SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~ACMP0_N_PB3_Msk       ))) | ACMP0_N_PB3           /*!< Set PB3  function to ACMP0_N          */
#define SET_ACMP0_P1_PB2()       SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~ACMP0_P1_PB2_Msk      ))) | ACMP0_P1_PB2          /*!< Set PB2  function to ACMP0_P1         */
#define SET_ACMP0_P0_PA11()      SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~ACMP0_P0_PA11_Msk     ))) | ACMP0_P0_PA11         /*!< Set PA11 function to ACMP0_P0         */
#define SET_ACMP0_P3_PB13()      SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~ACMP0_P3_PB13_Msk     ))) | ACMP0_P3_PB13         /*!< Set PB13 function to ACMP0_P3         */
#define SET_ACMP0_P2_PB12()      SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~ACMP0_P2_PB12_Msk     ))) | ACMP0_P2_PB12         /*!< Set PB12 function to ACMP0_P2         */

/* ACMP1 MFP Macros*/
#define SET_ACMP1_O_PB6()        SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~ACMP1_O_PB6_Msk       ))) | ACMP1_O_PB6           /*!< Set PB6  function to ACMP1_O          */
#define SET_ACMP1_O_PC0()        SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~ACMP1_O_PC0_Msk       ))) | ACMP1_O_PC0           /*!< Set PC0  function to ACMP1_O          */
#define SET_ACMP1_O_PC11()       SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~ACMP1_O_PC11_Msk      ))) | ACMP1_O_PC11          /*!< Set PC11 function to ACMP1_O          */
#define SET_ACMP1_O_PF1()        SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~ACMP1_O_PF1_Msk       ))) | ACMP1_O_PF1           /*!< Set PF1  function to ACMP1_O          */
#define SET_ACMP1_O_PG15()       SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~ACMP1_O_PG15_Msk      ))) | ACMP1_O_PG15          /*!< Set PG15 function to ACMP1_O          */
#define SET_ACMP1_WLAT_PA6()     SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~ACMP1_WLAT_PA6_Msk    ))) | ACMP1_WLAT_PA6        /*!< Set PA6  function to ACMP1_WLAT       */
#define SET_ACMP1_N_PB5()        SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~ACMP1_N_PB5_Msk       ))) | ACMP1_N_PB5           /*!< Set PB5  function to ACMP1_N          */
#define SET_ACMP1_P1_PB4()       SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~ACMP1_P1_PB4_Msk      ))) | ACMP1_P1_PB4          /*!< Set PB4  function to ACMP1_P1         */
#define SET_ACMP1_P0_PA10()      SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~ACMP1_P0_PA10_Msk     ))) | ACMP1_P0_PA10         /*!< Set PA10 function to ACMP1_P0         */
#define SET_ACMP1_P3_PB13()      SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~ACMP1_P3_PB13_Msk     ))) | ACMP1_P3_PB13         /*!< Set PB13 function to ACMP1_P3         */
#define SET_ACMP1_P2_PB12()      SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~ACMP1_P2_PB12_Msk     ))) | ACMP1_P2_PB12         /*!< Set PB12 function to ACMP1_P2         */

/* BPWM0 MFP Macros*/
#define SET_BPWM0_CH0_PA0()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~BPWM0_CH0_PA0_Msk     ))) | BPWM0_CH0_PA0         /*!< Set PA0  function to BPWM0_CH0        */
#define SET_BPWM0_CH0_PA11()     SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~BPWM0_CH0_PA11_Msk    ))) | BPWM0_CH0_PA11        /*!< Set PA11 function to BPWM0_CH0        */
#define SET_BPWM0_CH0_PD13()     SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~BPWM0_CH0_PD13_Msk    ))) | BPWM0_CH0_PD13        /*!< Set PD13 function to BPWM0_CH0        */
#define SET_BPWM0_CH0_PE2()      SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~BPWM0_CH0_PE2_Msk     ))) | BPWM0_CH0_PE2         /*!< Set PE2  function to BPWM0_CH0        */
#define SET_BPWM0_CH0_PG14()     SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~BPWM0_CH0_PG14_Msk    ))) | BPWM0_CH0_PG14        /*!< Set PG14 function to BPWM0_CH0        */
#define SET_BPWM0_CH1_PA1()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~BPWM0_CH1_PA1_Msk     ))) | BPWM0_CH1_PA1         /*!< Set PA1  function to BPWM0_CH1        */
#define SET_BPWM0_CH1_PA10()     SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~BPWM0_CH1_PA10_Msk    ))) | BPWM0_CH1_PA10        /*!< Set PA10 function to BPWM0_CH1        */
#define SET_BPWM0_CH1_PE3()      SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~BPWM0_CH1_PE3_Msk     ))) | BPWM0_CH1_PE3         /*!< Set PE3  function to BPWM0_CH1        */
#define SET_BPWM0_CH1_PG13()     SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~BPWM0_CH1_PG13_Msk    ))) | BPWM0_CH1_PG13        /*!< Set PG13 function to BPWM0_CH1        */
#define SET_BPWM0_CH2_PA2()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~BPWM0_CH2_PA2_Msk     ))) | BPWM0_CH2_PA2         /*!< Set PA2  function to BPWM0_CH2        */
#define SET_BPWM0_CH2_PA9()      SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~BPWM0_CH2_PA9_Msk     ))) | BPWM0_CH2_PA9         /*!< Set PA9  function to BPWM0_CH2        */
#define SET_BPWM0_CH2_PE4()      SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~BPWM0_CH2_PE4_Msk     ))) | BPWM0_CH2_PE4         /*!< Set PE4  function to BPWM0_CH2        */
#define SET_BPWM0_CH2_PG12()     SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~BPWM0_CH2_PG12_Msk    ))) | BPWM0_CH2_PG12        /*!< Set PG12 function to BPWM0_CH2        */
#define SET_BPWM0_CH3_PA3()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~BPWM0_CH3_PA3_Msk     ))) | BPWM0_CH3_PA3         /*!< Set PA3  function to BPWM0_CH3        */
#define SET_BPWM0_CH3_PA8()      SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~BPWM0_CH3_PA8_Msk     ))) | BPWM0_CH3_PA8         /*!< Set PA8  function to BPWM0_CH3        */
#define SET_BPWM0_CH3_PE5()      SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~BPWM0_CH3_PE5_Msk     ))) | BPWM0_CH3_PE5         /*!< Set PE5  function to BPWM0_CH3        */
#define SET_BPWM0_CH3_PG11()     SYS->GPG_MFP2 = ((SYS->GPG_MFP2 & (~BPWM0_CH3_PG11_Msk    ))) | BPWM0_CH3_PG11        /*!< Set PG11 function to BPWM0_CH3        */
#define SET_BPWM0_CH4_PA4()      SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~BPWM0_CH4_PA4_Msk     ))) | BPWM0_CH4_PA4         /*!< Set PA4  function to BPWM0_CH4        */
#define SET_BPWM0_CH4_PC13()     SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~BPWM0_CH4_PC13_Msk    ))) | BPWM0_CH4_PC13        /*!< Set PC13 function to BPWM0_CH4        */
#define SET_BPWM0_CH4_PE6()      SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~BPWM0_CH4_PE6_Msk     ))) | BPWM0_CH4_PE6         /*!< Set PE6  function to BPWM0_CH4        */
#define SET_BPWM0_CH4_PF5()      SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~BPWM0_CH4_PF5_Msk     ))) | BPWM0_CH4_PF5         /*!< Set PF5  function to BPWM0_CH4        */
#define SET_BPWM0_CH4_PG10()     SYS->GPG_MFP2 = ((SYS->GPG_MFP2 & (~BPWM0_CH4_PG10_Msk    ))) | BPWM0_CH4_PG10        /*!< Set PG10 function to BPWM0_CH4        */
#define SET_BPWM0_CH5_PA5()      SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~BPWM0_CH5_PA5_Msk     ))) | BPWM0_CH5_PA5         /*!< Set PA5  function to BPWM0_CH5        */
#define SET_BPWM0_CH5_PD12()     SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~BPWM0_CH5_PD12_Msk    ))) | BPWM0_CH5_PD12        /*!< Set PD12 function to BPWM0_CH5        */
#define SET_BPWM0_CH5_PE7()      SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~BPWM0_CH5_PE7_Msk     ))) | BPWM0_CH5_PE7         /*!< Set PE7  function to BPWM0_CH5        */
#define SET_BPWM0_CH5_PF4()      SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~BPWM0_CH5_PF4_Msk     ))) | BPWM0_CH5_PF4         /*!< Set PF4  function to BPWM0_CH5        */
#define SET_BPWM0_CH5_PG9()      SYS->GPG_MFP2 = ((SYS->GPG_MFP2 & (~BPWM0_CH5_PG9_Msk     ))) | BPWM0_CH5_PG9         /*!< Set PG9  function to BPWM0_CH5        */

/* BPWM1 MFP Macros*/
#define SET_BPWM1_CH0_PB11()     SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~BPWM1_CH0_PB11_Msk    ))) | BPWM1_CH0_PB11        /*!< Set PB11 function to BPWM1_CH0        */
#define SET_BPWM1_CH0_PC7()      SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~BPWM1_CH0_PC7_Msk     ))) | BPWM1_CH0_PC7         /*!< Set PC7  function to BPWM1_CH0        */
#define SET_BPWM1_CH0_PF0()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~BPWM1_CH0_PF0_Msk     ))) | BPWM1_CH0_PF0         /*!< Set PF0  function to BPWM1_CH0        */
#define SET_BPWM1_CH0_PF3()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~BPWM1_CH0_PF3_Msk     ))) | BPWM1_CH0_PF3         /*!< Set PF3  function to BPWM1_CH0        */
#define SET_BPWM1_CH1_PB10()     SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~BPWM1_CH1_PB10_Msk    ))) | BPWM1_CH1_PB10        /*!< Set PB10 function to BPWM1_CH1        */
#define SET_BPWM1_CH1_PC6()      SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~BPWM1_CH1_PC6_Msk     ))) | BPWM1_CH1_PC6         /*!< Set PC6  function to BPWM1_CH1        */
#define SET_BPWM1_CH1_PF1()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~BPWM1_CH1_PF1_Msk     ))) | BPWM1_CH1_PF1         /*!< Set PF1  function to BPWM1_CH1        */
#define SET_BPWM1_CH1_PF2()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~BPWM1_CH1_PF2_Msk     ))) | BPWM1_CH1_PF2         /*!< Set PF2  function to BPWM1_CH1        */
#define SET_BPWM1_CH2_PA7()      SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~BPWM1_CH2_PA7_Msk     ))) | BPWM1_CH2_PA7         /*!< Set PA7  function to BPWM1_CH2        */
#define SET_BPWM1_CH2_PA12()     SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~BPWM1_CH2_PA12_Msk    ))) | BPWM1_CH2_PA12        /*!< Set PA12 function to BPWM1_CH2        */
#define SET_BPWM1_CH2_PB9()      SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~BPWM1_CH2_PB9_Msk     ))) | BPWM1_CH2_PB9         /*!< Set PB9  function to BPWM1_CH2        */
#define SET_BPWM1_CH3_PA6()      SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~BPWM1_CH3_PA6_Msk     ))) | BPWM1_CH3_PA6         /*!< Set PA6  function to BPWM1_CH3        */
#define SET_BPWM1_CH3_PA13()     SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~BPWM1_CH3_PA13_Msk    ))) | BPWM1_CH3_PA13        /*!< Set PA13 function to BPWM1_CH3        */
#define SET_BPWM1_CH3_PB8()      SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~BPWM1_CH3_PB8_Msk     ))) | BPWM1_CH3_PB8         /*!< Set PB8  function to BPWM1_CH3        */
#define SET_BPWM1_CH4_PA14()     SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~BPWM1_CH4_PA14_Msk    ))) | BPWM1_CH4_PA14        /*!< Set PA14 function to BPWM1_CH4        */
#define SET_BPWM1_CH4_PB7()      SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~BPWM1_CH4_PB7_Msk     ))) | BPWM1_CH4_PB7         /*!< Set PB7  function to BPWM1_CH4        */
#define SET_BPWM1_CH4_PC8()      SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~BPWM1_CH4_PC8_Msk     ))) | BPWM1_CH4_PC8         /*!< Set PC8  function to BPWM1_CH4        */
#define SET_BPWM1_CH5_PA15()     SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~BPWM1_CH5_PA15_Msk    ))) | BPWM1_CH5_PA15        /*!< Set PA15 function to BPWM1_CH5        */
#define SET_BPWM1_CH5_PB6()      SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~BPWM1_CH5_PB6_Msk     ))) | BPWM1_CH5_PB6         /*!< Set PB6  function to BPWM1_CH5        */
#define SET_BPWM1_CH5_PE13()     SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~BPWM1_CH5_PE13_Msk    ))) | BPWM1_CH5_PE13        /*!< Set PE13 function to BPWM1_CH5        */

/* BPWM2 MFP Macros*/
#define SET_BPWM2_CH0_PC13()     SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~BPWM2_CH0_PC13_Msk    ))) | BPWM2_CH0_PC13        /*!< Set PC13 function to BPWM2_CH0        */
#define SET_BPWM2_CH0_PC14()     SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~BPWM2_CH0_PC14_Msk    ))) | BPWM2_CH0_PC14        /*!< Set PC14 function to BPWM2_CH0        */
#define SET_BPWM2_CH1_PB15()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~BPWM2_CH1_PB15_Msk    ))) | BPWM2_CH1_PB15        /*!< Set PB15 function to BPWM2_CH1        */
#define SET_BPWM2_CH1_PD12()     SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~BPWM2_CH1_PD12_Msk    ))) | BPWM2_CH1_PD12        /*!< Set PD12 function to BPWM2_CH1        */
#define SET_BPWM2_CH2_PB14()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~BPWM2_CH2_PB14_Msk    ))) | BPWM2_CH2_PB14        /*!< Set PB14 function to BPWM2_CH2        */
#define SET_BPWM2_CH2_PD11()     SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~BPWM2_CH2_PD11_Msk    ))) | BPWM2_CH2_PD11        /*!< Set PD11 function to BPWM2_CH2        */
#define SET_BPWM2_CH3_PA12()     SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~BPWM2_CH3_PA12_Msk    ))) | BPWM2_CH3_PA12        /*!< Set PA12 function to BPWM2_CH3        */
#define SET_BPWM2_CH3_PB13()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~BPWM2_CH3_PB13_Msk    ))) | BPWM2_CH3_PB13        /*!< Set PB13 function to BPWM2_CH3        */
#define SET_BPWM2_CH3_PD10()     SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~BPWM2_CH3_PD10_Msk    ))) | BPWM2_CH3_PD10        /*!< Set PD10 function to BPWM2_CH3        */
#define SET_BPWM2_CH4_PA13()     SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~BPWM2_CH4_PA13_Msk    ))) | BPWM2_CH4_PA13        /*!< Set PA13 function to BPWM2_CH4        */
#define SET_BPWM2_CH4_PB12()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~BPWM2_CH4_PB12_Msk    ))) | BPWM2_CH4_PB12        /*!< Set PB12 function to BPWM2_CH4        */
#define SET_BPWM2_CH4_PG2()      SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~BPWM2_CH4_PG2_Msk     ))) | BPWM2_CH4_PG2         /*!< Set PG2  function to BPWM2_CH4        */
#define SET_BPWM2_CH5_PA14()     SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~BPWM2_CH5_PA14_Msk    ))) | BPWM2_CH5_PA14        /*!< Set PA14 function to BPWM2_CH5        */
#define SET_BPWM2_CH5_PG3()      SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~BPWM2_CH5_PG3_Msk     ))) | BPWM2_CH5_PG3         /*!< Set PG3  function to BPWM2_CH5        */

/* BPWM3 MFP Macros*/
#define SET_BPWM3_CH0_PA11()     SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~BPWM3_CH0_PA11_Msk    ))) | BPWM3_CH0_PA11        /*!< Set PA11 function to BPWM3_CH0        */
#define SET_BPWM3_CH0_PE1()      SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~BPWM3_CH0_PE1_Msk     ))) | BPWM3_CH0_PE1         /*!< Set PE1  function to BPWM3_CH0        */
#define SET_BPWM3_CH0_PE14()     SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~BPWM3_CH0_PE14_Msk    ))) | BPWM3_CH0_PE14        /*!< Set PE14 function to BPWM3_CH0        */
#define SET_BPWM3_CH1_PA10()     SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~BPWM3_CH1_PA10_Msk    ))) | BPWM3_CH1_PA10        /*!< Set PA10 function to BPWM3_CH1        */
#define SET_BPWM3_CH1_PE0()      SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~BPWM3_CH1_PE0_Msk     ))) | BPWM3_CH1_PE0         /*!< Set PE0  function to BPWM3_CH1        */
#define SET_BPWM3_CH1_PE15()     SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~BPWM3_CH1_PE15_Msk    ))) | BPWM3_CH1_PE15        /*!< Set PE15 function to BPWM3_CH1        */
#define SET_BPWM3_CH2_PA9()      SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~BPWM3_CH2_PA9_Msk     ))) | BPWM3_CH2_PA9         /*!< Set PA9  function to BPWM3_CH2        */
#define SET_BPWM3_CH2_PD9()      SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~BPWM3_CH2_PD9_Msk     ))) | BPWM3_CH2_PD9         /*!< Set PD9  function to BPWM3_CH2        */
#define SET_BPWM3_CH2_PH8()      SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~BPWM3_CH2_PH8_Msk     ))) | BPWM3_CH2_PH8         /*!< Set PH8  function to BPWM3_CH2        */
#define SET_BPWM3_CH3_PA8()      SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~BPWM3_CH3_PA8_Msk     ))) | BPWM3_CH3_PA8         /*!< Set PA8  function to BPWM3_CH3        */
#define SET_BPWM3_CH3_PD8()      SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~BPWM3_CH3_PD8_Msk     ))) | BPWM3_CH3_PD8         /*!< Set PD8  function to BPWM3_CH3        */
#define SET_BPWM3_CH3_PH9()      SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~BPWM3_CH3_PH9_Msk     ))) | BPWM3_CH3_PH9         /*!< Set PH9  function to BPWM3_CH3        */
#define SET_BPWM3_CH4_PF6()      SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~BPWM3_CH4_PF6_Msk     ))) | BPWM3_CH4_PF6         /*!< Set PF6  function to BPWM3_CH4        */
#define SET_BPWM3_CH4_PG13()     SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~BPWM3_CH4_PG13_Msk    ))) | BPWM3_CH4_PG13        /*!< Set PG13 function to BPWM3_CH4        */
#define SET_BPWM3_CH4_PH10()     SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~BPWM3_CH4_PH10_Msk    ))) | BPWM3_CH4_PH10        /*!< Set PH10 function to BPWM3_CH4        */
#define SET_BPWM3_CH5_PF14()     SYS->GPF_MFP3 = ((SYS->GPF_MFP3 & (~BPWM3_CH5_PF14_Msk    ))) | BPWM3_CH5_PF14        /*!< Set PF14 function to BPWM3_CH5        */
#define SET_BPWM3_CH5_PF15()     SYS->GPF_MFP3 = ((SYS->GPF_MFP3 & (~BPWM3_CH5_PF15_Msk    ))) | BPWM3_CH5_PF15        /*!< Set PF15 function to BPWM3_CH5        */
#define SET_BPWM3_CH5_PG14()     SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~BPWM3_CH5_PG14_Msk    ))) | BPWM3_CH5_PG14        /*!< Set PG14 function to BPWM3_CH5        */
#define SET_BPWM3_CH5_PH11()     SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~BPWM3_CH5_PH11_Msk    ))) | BPWM3_CH5_PH11        /*!< Set PH11 function to BPWM3_CH5        */

/* BPWM4 MFP Macros*/
#define SET_BPWM4_CH0_PC5()      SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~BPWM4_CH0_PC5_Msk     ))) | BPWM4_CH0_PC5         /*!< Set PC5  function to BPWM4_CH0        */
#define SET_BPWM4_CH0_PD7()      SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~BPWM4_CH0_PD7_Msk     ))) | BPWM4_CH0_PD7         /*!< Set PD7  function to BPWM4_CH0        */
#define SET_BPWM4_CH0_PE8()      SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~BPWM4_CH0_PE8_Msk     ))) | BPWM4_CH0_PE8         /*!< Set PE8  function to BPWM4_CH0        */
#define SET_BPWM4_CH0_PG4()      SYS->GPG_MFP1 = ((SYS->GPG_MFP1 & (~BPWM4_CH0_PG4_Msk     ))) | BPWM4_CH0_PG4         /*!< Set PG4  function to BPWM4_CH0        */
#define SET_BPWM4_CH1_PC4()      SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~BPWM4_CH1_PC4_Msk     ))) | BPWM4_CH1_PC4         /*!< Set PC4  function to BPWM4_CH1        */
#define SET_BPWM4_CH1_PD6()      SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~BPWM4_CH1_PD6_Msk     ))) | BPWM4_CH1_PD6         /*!< Set PD6  function to BPWM4_CH1        */
#define SET_BPWM4_CH1_PE9()      SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~BPWM4_CH1_PE9_Msk     ))) | BPWM4_CH1_PE9         /*!< Set PE9  function to BPWM4_CH1        */
#define SET_BPWM4_CH1_PF11()     SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~BPWM4_CH1_PF11_Msk    ))) | BPWM4_CH1_PF11        /*!< Set PF11 function to BPWM4_CH1        */
#define SET_BPWM4_CH2_PC3()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~BPWM4_CH2_PC3_Msk     ))) | BPWM4_CH2_PC3         /*!< Set PC3  function to BPWM4_CH2        */
#define SET_BPWM4_CH2_PD5()      SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~BPWM4_CH2_PD5_Msk     ))) | BPWM4_CH2_PD5         /*!< Set PD5  function to BPWM4_CH2        */
#define SET_BPWM4_CH2_PE10()     SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~BPWM4_CH2_PE10_Msk    ))) | BPWM4_CH2_PE10        /*!< Set PE10 function to BPWM4_CH2        */
#define SET_BPWM4_CH2_PF10()     SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~BPWM4_CH2_PF10_Msk    ))) | BPWM4_CH2_PF10        /*!< Set PF10 function to BPWM4_CH2        */
#define SET_BPWM4_CH3_PC2()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~BPWM4_CH3_PC2_Msk     ))) | BPWM4_CH3_PC2         /*!< Set PC2  function to BPWM4_CH3        */
#define SET_BPWM4_CH3_PD4()      SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~BPWM4_CH3_PD4_Msk     ))) | BPWM4_CH3_PD4         /*!< Set PD4  function to BPWM4_CH3        */
#define SET_BPWM4_CH3_PE11()     SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~BPWM4_CH3_PE11_Msk    ))) | BPWM4_CH3_PE11        /*!< Set PE11 function to BPWM4_CH3        */
#define SET_BPWM4_CH3_PF9()      SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~BPWM4_CH3_PF9_Msk     ))) | BPWM4_CH3_PF9         /*!< Set PF9  function to BPWM4_CH3        */
#define SET_BPWM4_CH4_PC1()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~BPWM4_CH4_PC1_Msk     ))) | BPWM4_CH4_PC1         /*!< Set PC1  function to BPWM4_CH4        */
#define SET_BPWM4_CH4_PD3()      SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~BPWM4_CH4_PD3_Msk     ))) | BPWM4_CH4_PD3         /*!< Set PD3  function to BPWM4_CH4        */
#define SET_BPWM4_CH4_PE12()     SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~BPWM4_CH4_PE12_Msk    ))) | BPWM4_CH4_PE12        /*!< Set PE12 function to BPWM4_CH4        */
#define SET_BPWM4_CH4_PF8()      SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~BPWM4_CH4_PF8_Msk     ))) | BPWM4_CH4_PF8         /*!< Set PF8  function to BPWM4_CH4        */
#define SET_BPWM4_CH5_PC0()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~BPWM4_CH5_PC0_Msk     ))) | BPWM4_CH5_PC0         /*!< Set PC0  function to BPWM4_CH5        */
#define SET_BPWM4_CH5_PD2()      SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~BPWM4_CH5_PD2_Msk     ))) | BPWM4_CH5_PD2         /*!< Set PD2  function to BPWM4_CH5        */
#define SET_BPWM4_CH5_PE13()     SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~BPWM4_CH5_PE13_Msk    ))) | BPWM4_CH5_PE13        /*!< Set PE13 function to BPWM4_CH5        */
#define SET_BPWM4_CH5_PF7()      SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~BPWM4_CH5_PF7_Msk     ))) | BPWM4_CH5_PF7         /*!< Set PF7  function to BPWM4_CH5        */

/* BPWM5 MFP Macros*/
#define SET_BPWM5_CH0_PE14()     SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~BPWM5_CH0_PE14_Msk    ))) | BPWM5_CH0_PE14        /*!< Set PE14 function to BPWM5_CH0        */
#define SET_BPWM5_CH0_PF0()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~BPWM5_CH0_PF0_Msk     ))) | BPWM5_CH0_PF0         /*!< Set PF0  function to BPWM5_CH0        */
#define SET_BPWM5_CH0_PH4()      SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~BPWM5_CH0_PH4_Msk     ))) | BPWM5_CH0_PH4         /*!< Set PH4  function to BPWM5_CH0        */
#define SET_BPWM5_CH1_PE15()     SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~BPWM5_CH1_PE15_Msk    ))) | BPWM5_CH1_PE15        /*!< Set PE15 function to BPWM5_CH1        */
#define SET_BPWM5_CH1_PF1()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~BPWM5_CH1_PF1_Msk     ))) | BPWM5_CH1_PF1         /*!< Set PF1  function to BPWM5_CH1        */
#define SET_BPWM5_CH1_PH5()      SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~BPWM5_CH1_PH5_Msk     ))) | BPWM5_CH1_PH5         /*!< Set PH5  function to BPWM5_CH1        */
#define SET_BPWM5_CH2_PG12()     SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~BPWM5_CH2_PG12_Msk    ))) | BPWM5_CH2_PG12        /*!< Set PG12 function to BPWM5_CH2        */
#define SET_BPWM5_CH2_PH6()      SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~BPWM5_CH2_PH6_Msk     ))) | BPWM5_CH2_PH6         /*!< Set PH6  function to BPWM5_CH2        */
#define SET_BPWM5_CH3_PG11()     SYS->GPG_MFP2 = ((SYS->GPG_MFP2 & (~BPWM5_CH3_PG11_Msk    ))) | BPWM5_CH3_PG11        /*!< Set PG11 function to BPWM5_CH3        */
#define SET_BPWM5_CH3_PH7()      SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~BPWM5_CH3_PH7_Msk     ))) | BPWM5_CH3_PH7         /*!< Set PH7  function to BPWM5_CH3        */
#define SET_BPWM5_CH4_PF3()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~BPWM5_CH4_PF3_Msk     ))) | BPWM5_CH4_PF3         /*!< Set PF3  function to BPWM5_CH4        */
#define SET_BPWM5_CH4_PG10()     SYS->GPG_MFP2 = ((SYS->GPG_MFP2 & (~BPWM5_CH4_PG10_Msk    ))) | BPWM5_CH4_PG10        /*!< Set PG10 function to BPWM5_CH4        */
#define SET_BPWM5_CH5_PF2()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~BPWM5_CH5_PF2_Msk     ))) | BPWM5_CH5_PF2         /*!< Set PF2  function to BPWM5_CH5        */
#define SET_BPWM5_CH5_PG9()      SYS->GPG_MFP2 = ((SYS->GPG_MFP2 & (~BPWM5_CH5_PG9_Msk     ))) | BPWM5_CH5_PG9         /*!< Set PG9  function to BPWM5_CH5        */

/* CANFD0 MFP Macros*/
#define SET_CANFD0_RXD_PA4()     SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~CANFD0_RXD_PA4_Msk    ))) | CANFD0_RXD_PA4        /*!< Set PA4  function to CANFD0_RXD       */
#define SET_CANFD0_RXD_PA13()    SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~CANFD0_RXD_PA13_Msk   ))) | CANFD0_RXD_PA13       /*!< Set PA13 function to CANFD0_RXD       */
#define SET_CANFD0_RXD_PB10()    SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~CANFD0_RXD_PB10_Msk   ))) | CANFD0_RXD_PB10       /*!< Set PB10 function to CANFD0_RXD       */
#define SET_CANFD0_RXD_PC4()     SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~CANFD0_RXD_PC4_Msk    ))) | CANFD0_RXD_PC4        /*!< Set PC4  function to CANFD0_RXD       */
#define SET_CANFD0_RXD_PD10()    SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~CANFD0_RXD_PD10_Msk   ))) | CANFD0_RXD_PD10       /*!< Set PD10 function to CANFD0_RXD       */
#define SET_CANFD0_RXD_PE15()    SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~CANFD0_RXD_PE15_Msk   ))) | CANFD0_RXD_PE15       /*!< Set PE15 function to CANFD0_RXD       */
#define SET_CANFD0_TXD_PA5()     SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~CANFD0_TXD_PA5_Msk    ))) | CANFD0_TXD_PA5        /*!< Set PA5  function to CANFD0_TXD       */
#define SET_CANFD0_TXD_PA12()    SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~CANFD0_TXD_PA12_Msk   ))) | CANFD0_TXD_PA12       /*!< Set PA12 function to CANFD0_TXD       */
#define SET_CANFD0_TXD_PB11()    SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~CANFD0_TXD_PB11_Msk   ))) | CANFD0_TXD_PB11       /*!< Set PB11 function to CANFD0_TXD       */
#define SET_CANFD0_TXD_PC5()     SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~CANFD0_TXD_PC5_Msk    ))) | CANFD0_TXD_PC5        /*!< Set PC5  function to CANFD0_TXD       */
#define SET_CANFD0_TXD_PD11()    SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~CANFD0_TXD_PD11_Msk   ))) | CANFD0_TXD_PD11       /*!< Set PD11 function to CANFD0_TXD       */
#define SET_CANFD0_TXD_PE14()    SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~CANFD0_TXD_PE14_Msk   ))) | CANFD0_TXD_PE14       /*!< Set PE14 function to CANFD0_TXD       */
#define SET_CANFD0_TXH_PA5()     SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~CANFD0_TXH_PA5_Msk    ))) | CANFD0_TXH_PA5        /*!< Set PA5  function to CANFD0_TXH       */
#define SET_CANFD0_TXH_PA12()    SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~CANFD0_TXH_PA12_Msk   ))) | CANFD0_TXH_PA12       /*!< Set PA12 function to CANFD0_TXH       */
#define SET_CANFD0_TXH_PB11()    SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~CANFD0_TXH_PB11_Msk   ))) | CANFD0_TXH_PB11       /*!< Set PB11 function to CANFD0_TXH       */
#define SET_CANFD0_TXH_PC5()     SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~CANFD0_TXH_PC5_Msk    ))) | CANFD0_TXH_PC5        /*!< Set PC5  function to CANFD0_TXH       */
#define SET_CANFD0_TXH_PD11()    SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~CANFD0_TXH_PD11_Msk   ))) | CANFD0_TXH_PD11       /*!< Set PD11 function to CANFD0_TXH       */
#define SET_CANFD0_TXL_PA6()     SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~CANFD0_TXL_PA6_Msk    ))) | CANFD0_TXL_PA6        /*!< Set PA6  function to CANFD0_TXL       */
#define SET_CANFD0_TXL_PB12()    SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~CANFD0_TXL_PB12_Msk   ))) | CANFD0_TXL_PB12       /*!< Set PB12 function to CANFD0_TXL       */
#define SET_CANFD0_TXL_PD8()     SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~CANFD0_TXL_PD8_Msk    ))) | CANFD0_TXL_PD8        /*!< Set PD8  function to CANFD0_TXL       */
#define SET_CANFD0_TXL_PD12()    SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~CANFD0_TXL_PD12_Msk   ))) | CANFD0_TXL_PD12       /*!< Set PD12 function to CANFD0_TXL       */
#define SET_CANFD0_TXL_PD13()    SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~CANFD0_TXL_PD13_Msk   ))) | CANFD0_TXL_PD13       /*!< Set PD13 function to CANFD0_TXL       */

/* CANFD1 MFP Macros*/
#define SET_CANFD1_RXD_PB6()     SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~CANFD1_RXD_PB6_Msk    ))) | CANFD1_RXD_PB6        /*!< Set PB6  function to CANFD1_RXD       */
#define SET_CANFD1_RXD_PC2()     SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~CANFD1_RXD_PC2_Msk    ))) | CANFD1_RXD_PC2        /*!< Set PC2  function to CANFD1_RXD       */
#define SET_CANFD1_RXD_PC9()     SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~CANFD1_RXD_PC9_Msk    ))) | CANFD1_RXD_PC9        /*!< Set PC9  function to CANFD1_RXD       */
#define SET_CANFD1_RXD_PD12()    SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~CANFD1_RXD_PD12_Msk   ))) | CANFD1_RXD_PD12       /*!< Set PD12 function to CANFD1_RXD       */
#define SET_CANFD1_RXD_PE6()     SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~CANFD1_RXD_PE6_Msk    ))) | CANFD1_RXD_PE6        /*!< Set PE6  function to CANFD1_RXD       */
#define SET_CANFD1_RXD_PF8()     SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~CANFD1_RXD_PF8_Msk    ))) | CANFD1_RXD_PF8        /*!< Set PF8  function to CANFD1_RXD       */
#define SET_CANFD1_TXD_PB7()     SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~CANFD1_TXD_PB7_Msk    ))) | CANFD1_TXD_PB7        /*!< Set PB7  function to CANFD1_TXD       */
#define SET_CANFD1_TXD_PC3()     SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~CANFD1_TXD_PC3_Msk    ))) | CANFD1_TXD_PC3        /*!< Set PC3  function to CANFD1_TXD       */
#define SET_CANFD1_TXD_PC10()    SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~CANFD1_TXD_PC10_Msk   ))) | CANFD1_TXD_PC10       /*!< Set PC10 function to CANFD1_TXD       */
#define SET_CANFD1_TXD_PC13()    SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~CANFD1_TXD_PC13_Msk   ))) | CANFD1_TXD_PC13       /*!< Set PC13 function to CANFD1_TXD       */
#define SET_CANFD1_TXD_PE7()     SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~CANFD1_TXD_PE7_Msk    ))) | CANFD1_TXD_PE7        /*!< Set PE7  function to CANFD1_TXD       */
#define SET_CANFD1_TXD_PF9()     SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~CANFD1_TXD_PF9_Msk    ))) | CANFD1_TXD_PF9        /*!< Set PF9  function to CANFD1_TXD       */
#define SET_CANFD1_TXH_PB7()     SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~CANFD1_TXH_PB7_Msk    ))) | CANFD1_TXH_PB7        /*!< Set PB7  function to CANFD1_TXH       */
#define SET_CANFD1_TXH_PC3()     SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~CANFD1_TXH_PC3_Msk    ))) | CANFD1_TXH_PC3        /*!< Set PC3  function to CANFD1_TXH       */
#define SET_CANFD1_TXH_PC10()    SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~CANFD1_TXH_PC10_Msk   ))) | CANFD1_TXH_PC10       /*!< Set PC10 function to CANFD1_TXH       */
#define SET_CANFD1_TXH_PC13()    SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~CANFD1_TXH_PC13_Msk   ))) | CANFD1_TXH_PC13       /*!< Set PC13 function to CANFD1_TXH       */
#define SET_CANFD1_TXH_PE7()     SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~CANFD1_TXH_PE7_Msk    ))) | CANFD1_TXH_PE7        /*!< Set PE7  function to CANFD1_TXH       */
#define SET_CANFD1_TXH_PF9()     SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~CANFD1_TXH_PF9_Msk    ))) | CANFD1_TXH_PF9        /*!< Set PF9  function to CANFD1_TXH       */
#define SET_CANFD1_TXL_PA8()     SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~CANFD1_TXL_PA8_Msk    ))) | CANFD1_TXL_PA8        /*!< Set PA8  function to CANFD1_TXL       */
#define SET_CANFD1_TXL_PB8()     SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~CANFD1_TXL_PB8_Msk    ))) | CANFD1_TXL_PB8        /*!< Set PB8  function to CANFD1_TXL       */
#define SET_CANFD1_TXL_PC4()     SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~CANFD1_TXL_PC4_Msk    ))) | CANFD1_TXL_PC4        /*!< Set PC4  function to CANFD1_TXL       */
#define SET_CANFD1_TXL_PC11()    SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~CANFD1_TXL_PC11_Msk   ))) | CANFD1_TXL_PC11       /*!< Set PC11 function to CANFD1_TXL       */
#define SET_CANFD1_TXL_PE5()     SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~CANFD1_TXL_PE5_Msk    ))) | CANFD1_TXL_PE5        /*!< Set PE5  function to CANFD1_TXL       */
#define SET_CANFD1_TXL_PF10()    SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~CANFD1_TXL_PF10_Msk   ))) | CANFD1_TXL_PF10       /*!< Set PF10 function to CANFD1_TXL       */

/* CLKO MFP Macros*/
#define SET_CLKO_PB13()          SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~CLKO_PB13_Msk         ))) | CLKO_PB13             /*!< Set PB13 function to CLKO             */
#define SET_CLKO_PB14()          SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~CLKO_PB14_Msk         ))) | CLKO_PB14             /*!< Set PB14 function to CLKO             */
#define SET_CLKO_PC13()          SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~CLKO_PC13_Msk         ))) | CLKO_PC13             /*!< Set PC13 function to CLKO             */
#define SET_CLKO_PD12()          SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~CLKO_PD12_Msk         ))) | CLKO_PD12             /*!< Set PD12 function to CLKO             */
#define SET_CLKO_PD13()          SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~CLKO_PD13_Msk         ))) | CLKO_PD13             /*!< Set PD13 function to CLKO             */

/* EADC0 MFP Macros*/
#define SET_EADC0_ST_PC1()       SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~EADC0_ST_PC1_Msk      ))) | EADC0_ST_PC1          /*!< Set PC1  function to EADC0_ST         */
#define SET_EADC0_ST_PC13()      SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~EADC0_ST_PC13_Msk     ))) | EADC0_ST_PC13         /*!< Set PC13 function to EADC0_ST         */
#define SET_EADC0_ST_PD5()       SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~EADC0_ST_PD5_Msk      ))) | EADC0_ST_PD5          /*!< Set PD5  function to EADC0_ST         */
#define SET_EADC0_ST_PD12()      SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~EADC0_ST_PD12_Msk     ))) | EADC0_ST_PD12         /*!< Set PD12 function to EADC0_ST         */
#define SET_EADC0_ST_PD13()      SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~EADC0_ST_PD13_Msk     ))) | EADC0_ST_PD13         /*!< Set PD13 function to EADC0_ST         */
#define SET_EADC0_ST_PF0()       SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~EADC0_ST_PF0_Msk      ))) | EADC0_ST_PF0          /*!< Set PF0  function to EADC0_ST         */
#define SET_EADC0_ST_PF5()       SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~EADC0_ST_PF5_Msk      ))) | EADC0_ST_PF5          /*!< Set PF5  function to EADC0_ST         */
#define SET_EADC0_ST_PG14()      SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~EADC0_ST_PG14_Msk     ))) | EADC0_ST_PG14         /*!< Set PG14 function to EADC0_ST         */
#define SET_EADC0_CH5_PB5()      SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~EADC0_CH5_PB5_Msk     ))) | EADC0_CH5_PB5         /*!< Set PB5  function to EADC0_CH5        */
#define SET_EADC0_CH4_PB4()      SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~EADC0_CH4_PB4_Msk     ))) | EADC0_CH4_PB4         /*!< Set PB4  function to EADC0_CH4        */
#define SET_EADC0_CH3_PB3()      SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~EADC0_CH3_PB3_Msk     ))) | EADC0_CH3_PB3         /*!< Set PB3  function to EADC0_CH3        */
#define SET_EADC0_CH2_PB2()      SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~EADC0_CH2_PB2_Msk     ))) | EADC0_CH2_PB2         /*!< Set PB2  function to EADC0_CH2        */
#define SET_EADC0_CH1_PB1()      SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~EADC0_CH1_PB1_Msk     ))) | EADC0_CH1_PB1         /*!< Set PB1  function to EADC0_CH1        */
#define SET_EADC0_CH0_PB0()      SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~EADC0_CH0_PB0_Msk     ))) | EADC0_CH0_PB0         /*!< Set PB0  function to EADC0_CH0        */
#define SET_EADC0_CH15_PB15()    SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~EADC0_CH15_PB15_Msk   ))) | EADC0_CH15_PB15       /*!< Set PB15 function to EADC0_CH15       */
#define SET_EADC0_CH14_PB14()    SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~EADC0_CH14_PB14_Msk   ))) | EADC0_CH14_PB14       /*!< Set PB14 function to EADC0_CH14       */
#define SET_EADC0_CH13_PB13()    SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~EADC0_CH13_PB13_Msk   ))) | EADC0_CH13_PB13       /*!< Set PB13 function to EADC0_CH13       */
#define SET_EADC0_CH12_PB12()    SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~EADC0_CH12_PB12_Msk   ))) | EADC0_CH12_PB12       /*!< Set PB12 function to EADC0_CH12       */
#define SET_EADC0_CH11_PB11()    SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~EADC0_CH11_PB11_Msk   ))) | EADC0_CH11_PB11       /*!< Set PB11 function to EADC0_CH11       */
#define SET_EADC0_CH10_PB10()    SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~EADC0_CH10_PB10_Msk   ))) | EADC0_CH10_PB10       /*!< Set PB10 function to EADC0_CH10       */
#define SET_EADC0_CH9_PB9()      SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~EADC0_CH9_PB9_Msk     ))) | EADC0_CH9_PB9         /*!< Set PB9  function to EADC0_CH9        */
#define SET_EADC0_CH8_PB8()      SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~EADC0_CH8_PB8_Msk     ))) | EADC0_CH8_PB8         /*!< Set PB8  function to EADC0_CH8        */
#define SET_EADC0_CH7_PB7()      SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~EADC0_CH7_PB7_Msk     ))) | EADC0_CH7_PB7         /*!< Set PB7  function to EADC0_CH7        */
#define SET_EADC0_CH6_PB6()      SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~EADC0_CH6_PB6_Msk     ))) | EADC0_CH6_PB6         /*!< Set PB6  function to EADC0_CH6        */

/* EBI MFP Macros*/
#define SET_EBI_AD0_PA5()        SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~EBI_AD0_PA5_Msk       ))) | EBI_AD0_PA5           /*!< Set PA5  function to EBI_AD0          */
#define SET_EBI_AD0_PC0()        SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~EBI_AD0_PC0_Msk       ))) | EBI_AD0_PC0           /*!< Set PC0  function to EBI_AD0          */
#define SET_EBI_AD0_PF4()        SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~EBI_AD0_PF4_Msk       ))) | EBI_AD0_PF4           /*!< Set PF4  function to EBI_AD0          */
#define SET_EBI_AD0_PG9()        SYS->GPG_MFP2 = ((SYS->GPG_MFP2 & (~EBI_AD0_PG9_Msk       ))) | EBI_AD0_PG9           /*!< Set PG9  function to EBI_AD0          */
#define SET_EBI_AD1_PA4()        SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~EBI_AD1_PA4_Msk       ))) | EBI_AD1_PA4           /*!< Set PA4  function to EBI_AD1          */
#define SET_EBI_AD1_PC1()        SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~EBI_AD1_PC1_Msk       ))) | EBI_AD1_PC1           /*!< Set PC1  function to EBI_AD1          */
#define SET_EBI_AD1_PF5()        SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~EBI_AD1_PF5_Msk       ))) | EBI_AD1_PF5           /*!< Set PF5  function to EBI_AD1          */
#define SET_EBI_AD1_PG10()       SYS->GPG_MFP2 = ((SYS->GPG_MFP2 & (~EBI_AD1_PG10_Msk      ))) | EBI_AD1_PG10          /*!< Set PG10 function to EBI_AD1          */
#define SET_EBI_AD10_PD3()       SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~EBI_AD10_PD3_Msk      ))) | EBI_AD10_PD3          /*!< Set PD3  function to EBI_AD10         */
#define SET_EBI_AD10_PD13()      SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~EBI_AD10_PD13_Msk     ))) | EBI_AD10_PD13         /*!< Set PD13 function to EBI_AD10         */
#define SET_EBI_AD10_PE1()       SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~EBI_AD10_PE1_Msk      ))) | EBI_AD10_PE1          /*!< Set PE1  function to EBI_AD10         */
#define SET_EBI_AD10_PE7()       SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~EBI_AD10_PE7_Msk      ))) | EBI_AD10_PE7          /*!< Set PE7  function to EBI_AD10         */
#define SET_EBI_AD11_PB12()      SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~EBI_AD11_PB12_Msk     ))) | EBI_AD11_PB12         /*!< Set PB12 function to EBI_AD11         */
#define SET_EBI_AD11_PC14()      SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~EBI_AD11_PC14_Msk     ))) | EBI_AD11_PC14         /*!< Set PC14 function to EBI_AD11         */
#define SET_EBI_AD11_PD2()       SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~EBI_AD11_PD2_Msk      ))) | EBI_AD11_PD2          /*!< Set PD2  function to EBI_AD11         */
#define SET_EBI_AD11_PE0()       SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~EBI_AD11_PE0_Msk      ))) | EBI_AD11_PE0          /*!< Set PE0  function to EBI_AD11         */
#define SET_EBI_AD11_PE6()       SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~EBI_AD11_PE6_Msk      ))) | EBI_AD11_PE6          /*!< Set PE6  function to EBI_AD11         */
#define SET_EBI_AD12_PB15()      SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~EBI_AD12_PB15_Msk     ))) | EBI_AD12_PB15         /*!< Set PB15 function to EBI_AD12         */
#define SET_EBI_AD12_PD1()       SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~EBI_AD12_PD1_Msk      ))) | EBI_AD12_PD1          /*!< Set PD1  function to EBI_AD12         */
#define SET_EBI_AD12_PH8()       SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~EBI_AD12_PH8_Msk      ))) | EBI_AD12_PH8          /*!< Set PH8  function to EBI_AD12         */
#define SET_EBI_AD13_PB14()      SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~EBI_AD13_PB14_Msk     ))) | EBI_AD13_PB14         /*!< Set PB14 function to EBI_AD13         */
#define SET_EBI_AD13_PD0()       SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~EBI_AD13_PD0_Msk      ))) | EBI_AD13_PD0          /*!< Set PD0  function to EBI_AD13         */
#define SET_EBI_AD13_PH9()       SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~EBI_AD13_PH9_Msk      ))) | EBI_AD13_PH9          /*!< Set PH9  function to EBI_AD13         */
#define SET_EBI_AD14_PB13()      SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~EBI_AD14_PB13_Msk     ))) | EBI_AD14_PB13         /*!< Set PB13 function to EBI_AD14         */
#define SET_EBI_AD14_PH10()      SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~EBI_AD14_PH10_Msk     ))) | EBI_AD14_PH10         /*!< Set PH10 function to EBI_AD14         */
#define SET_EBI_AD15_PB12()      SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~EBI_AD15_PB12_Msk     ))) | EBI_AD15_PB12         /*!< Set PB12 function to EBI_AD15         */
#define SET_EBI_AD15_PD5()       SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~EBI_AD15_PD5_Msk      ))) | EBI_AD15_PD5          /*!< Set PD5  function to EBI_AD15         */
#define SET_EBI_AD15_PH11()      SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~EBI_AD15_PH11_Msk     ))) | EBI_AD15_PH11         /*!< Set PH11 function to EBI_AD15         */
#define SET_EBI_AD2_PC2()        SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~EBI_AD2_PC2_Msk       ))) | EBI_AD2_PC2           /*!< Set PC2  function to EBI_AD2          */
#define SET_EBI_AD2_PG11()       SYS->GPG_MFP2 = ((SYS->GPG_MFP2 & (~EBI_AD2_PG11_Msk      ))) | EBI_AD2_PG11          /*!< Set PG11 function to EBI_AD2          */
#define SET_EBI_AD3_PC3()        SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~EBI_AD3_PC3_Msk       ))) | EBI_AD3_PC3           /*!< Set PC3  function to EBI_AD3          */
#define SET_EBI_AD3_PG12()       SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~EBI_AD3_PG12_Msk      ))) | EBI_AD3_PG12          /*!< Set PG12 function to EBI_AD3          */
#define SET_EBI_AD4_PC4()        SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~EBI_AD4_PC4_Msk       ))) | EBI_AD4_PC4           /*!< Set PC4  function to EBI_AD4          */
#define SET_EBI_AD4_PG13()       SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~EBI_AD4_PG13_Msk      ))) | EBI_AD4_PG13          /*!< Set PG13 function to EBI_AD4          */
#define SET_EBI_AD5_PA14()       SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~EBI_AD5_PA14_Msk      ))) | EBI_AD5_PA14          /*!< Set PA14 function to EBI_AD5          */
#define SET_EBI_AD5_PC5()        SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~EBI_AD5_PC5_Msk       ))) | EBI_AD5_PC5           /*!< Set PC5  function to EBI_AD5          */
#define SET_EBI_AD5_PD4()        SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~EBI_AD5_PD4_Msk       ))) | EBI_AD5_PD4           /*!< Set PD4  function to EBI_AD5          */
#define SET_EBI_AD5_PG14()       SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~EBI_AD5_PG14_Msk      ))) | EBI_AD5_PG14          /*!< Set PG14 function to EBI_AD5          */
#define SET_EBI_AD6_PA6()        SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~EBI_AD6_PA6_Msk       ))) | EBI_AD6_PA6           /*!< Set PA6  function to EBI_AD6          */
#define SET_EBI_AD6_PD8()        SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~EBI_AD6_PD8_Msk       ))) | EBI_AD6_PD8           /*!< Set PD8  function to EBI_AD6          */
#define SET_EBI_AD7_PA7()        SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~EBI_AD7_PA7_Msk       ))) | EBI_AD7_PA7           /*!< Set PA7  function to EBI_AD7          */
#define SET_EBI_AD7_PD9()        SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~EBI_AD7_PD9_Msk       ))) | EBI_AD7_PD9           /*!< Set PD9  function to EBI_AD7          */
#define SET_EBI_AD8_PC6()        SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~EBI_AD8_PC6_Msk       ))) | EBI_AD8_PC6           /*!< Set PC6  function to EBI_AD8          */
#define SET_EBI_AD8_PE14()       SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~EBI_AD8_PE14_Msk      ))) | EBI_AD8_PE14          /*!< Set PE14 function to EBI_AD8          */
#define SET_EBI_AD9_PC7()        SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~EBI_AD9_PC7_Msk       ))) | EBI_AD9_PC7           /*!< Set PC7  function to EBI_AD9          */
#define SET_EBI_AD9_PE15()       SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~EBI_AD9_PE15_Msk      ))) | EBI_AD9_PE15          /*!< Set PE15 function to EBI_AD9          */
#define SET_EBI_ADR0_PB5()       SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~EBI_ADR0_PB5_Msk      ))) | EBI_ADR0_PB5          /*!< Set PB5  function to EBI_ADR0         */
#define SET_EBI_ADR0_PH7()       SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~EBI_ADR0_PH7_Msk      ))) | EBI_ADR0_PH7          /*!< Set PH7  function to EBI_ADR0         */
#define SET_EBI_ADR1_PB4()       SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~EBI_ADR1_PB4_Msk      ))) | EBI_ADR1_PB4          /*!< Set PB4  function to EBI_ADR1         */
#define SET_EBI_ADR1_PH6()       SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~EBI_ADR1_PH6_Msk      ))) | EBI_ADR1_PH6          /*!< Set PH6  function to EBI_ADR1         */
#define SET_EBI_ADR10_PC13()     SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~EBI_ADR10_PC13_Msk    ))) | EBI_ADR10_PC13        /*!< Set PC13 function to EBI_ADR10        */
#define SET_EBI_ADR10_PE8()      SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~EBI_ADR10_PE8_Msk     ))) | EBI_ADR10_PE8         /*!< Set PE8  function to EBI_ADR10        */
#define SET_EBI_ADR11_PE9()      SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~EBI_ADR11_PE9_Msk     ))) | EBI_ADR11_PE9         /*!< Set PE9  function to EBI_ADR11        */
#define SET_EBI_ADR11_PG2()      SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~EBI_ADR11_PG2_Msk     ))) | EBI_ADR11_PG2         /*!< Set PG2  function to EBI_ADR11        */
#define SET_EBI_ADR12_PE10()     SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~EBI_ADR12_PE10_Msk    ))) | EBI_ADR12_PE10        /*!< Set PE10 function to EBI_ADR12        */
#define SET_EBI_ADR12_PG3()      SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~EBI_ADR12_PG3_Msk     ))) | EBI_ADR12_PG3         /*!< Set PG3  function to EBI_ADR12        */
#define SET_EBI_ADR13_PE11()     SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~EBI_ADR13_PE11_Msk    ))) | EBI_ADR13_PE11        /*!< Set PE11 function to EBI_ADR13        */
#define SET_EBI_ADR13_PG4()      SYS->GPG_MFP1 = ((SYS->GPG_MFP1 & (~EBI_ADR13_PG4_Msk     ))) | EBI_ADR13_PG4         /*!< Set PG4  function to EBI_ADR13        */
#define SET_EBI_ADR14_PE12()     SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~EBI_ADR14_PE12_Msk    ))) | EBI_ADR14_PE12        /*!< Set PE12 function to EBI_ADR14        */
#define SET_EBI_ADR14_PF11()     SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~EBI_ADR14_PF11_Msk    ))) | EBI_ADR14_PF11        /*!< Set PF11 function to EBI_ADR14        */
#define SET_EBI_ADR15_PE13()     SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~EBI_ADR15_PE13_Msk    ))) | EBI_ADR15_PE13        /*!< Set PE13 function to EBI_ADR15        */
#define SET_EBI_ADR15_PF10()     SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~EBI_ADR15_PF10_Msk    ))) | EBI_ADR15_PF10        /*!< Set PF10 function to EBI_ADR15        */
#define SET_EBI_ADR16_PB11()     SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~EBI_ADR16_PB11_Msk    ))) | EBI_ADR16_PB11        /*!< Set PB11 function to EBI_ADR16        */
#define SET_EBI_ADR16_PC8()      SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~EBI_ADR16_PC8_Msk     ))) | EBI_ADR16_PC8         /*!< Set PC8  function to EBI_ADR16        */
#define SET_EBI_ADR16_PF9()      SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~EBI_ADR16_PF9_Msk     ))) | EBI_ADR16_PF9         /*!< Set PF9  function to EBI_ADR16        */
#define SET_EBI_ADR17_PB10()     SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~EBI_ADR17_PB10_Msk    ))) | EBI_ADR17_PB10        /*!< Set PB10 function to EBI_ADR17        */
#define SET_EBI_ADR17_PF8()      SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~EBI_ADR17_PF8_Msk     ))) | EBI_ADR17_PF8         /*!< Set PF8  function to EBI_ADR17        */
#define SET_EBI_ADR18_PB9()      SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~EBI_ADR18_PB9_Msk     ))) | EBI_ADR18_PB9         /*!< Set PB9  function to EBI_ADR18        */
#define SET_EBI_ADR18_PF7()      SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~EBI_ADR18_PF7_Msk     ))) | EBI_ADR18_PF7         /*!< Set PF7  function to EBI_ADR18        */
#define SET_EBI_ADR19_PB8()      SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~EBI_ADR19_PB8_Msk     ))) | EBI_ADR19_PB8         /*!< Set PB8  function to EBI_ADR19        */
#define SET_EBI_ADR19_PF6()      SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~EBI_ADR19_PF6_Msk     ))) | EBI_ADR19_PF6         /*!< Set PF6  function to EBI_ADR19        */
#define SET_EBI_ADR2_PB3()       SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~EBI_ADR2_PB3_Msk      ))) | EBI_ADR2_PB3          /*!< Set PB3  function to EBI_ADR2         */
#define SET_EBI_ADR2_PH5()       SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~EBI_ADR2_PH5_Msk      ))) | EBI_ADR2_PH5          /*!< Set PH5  function to EBI_ADR2         */
#define SET_EBI_ADR3_PB2()       SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~EBI_ADR3_PB2_Msk      ))) | EBI_ADR3_PB2          /*!< Set PB2  function to EBI_ADR3         */
#define SET_EBI_ADR3_PH4()       SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~EBI_ADR3_PH4_Msk      ))) | EBI_ADR3_PH4          /*!< Set PH4  function to EBI_ADR3         */
#define SET_EBI_ADR4_PC12()      SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~EBI_ADR4_PC12_Msk     ))) | EBI_ADR4_PC12         /*!< Set PC12 function to EBI_ADR4         */
#define SET_EBI_ADR5_PC11()      SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~EBI_ADR5_PC11_Msk     ))) | EBI_ADR5_PC11         /*!< Set PC11 function to EBI_ADR5         */
#define SET_EBI_ADR6_PC10()      SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~EBI_ADR6_PC10_Msk     ))) | EBI_ADR6_PC10         /*!< Set PC10 function to EBI_ADR6         */
#define SET_EBI_ADR7_PC9()       SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~EBI_ADR7_PC9_Msk      ))) | EBI_ADR7_PC9          /*!< Set PC9  function to EBI_ADR7         */
#define SET_EBI_ADR8_PB1()       SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~EBI_ADR8_PB1_Msk      ))) | EBI_ADR8_PB1          /*!< Set PB1  function to EBI_ADR8         */
#define SET_EBI_ADR9_PB0()       SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~EBI_ADR9_PB0_Msk      ))) | EBI_ADR9_PB0          /*!< Set PB0  function to EBI_ADR9         */
#define SET_EBI_ALE_PA8()        SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~EBI_ALE_PA8_Msk       ))) | EBI_ALE_PA8           /*!< Set PA8  function to EBI_ALE          */
#define SET_EBI_ALE_PE2()        SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~EBI_ALE_PE2_Msk       ))) | EBI_ALE_PE2           /*!< Set PE2  function to EBI_ALE          */
#define SET_EBI_MCLK_PA9()       SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~EBI_MCLK_PA9_Msk      ))) | EBI_MCLK_PA9          /*!< Set PA9  function to EBI_MCLK         */
#define SET_EBI_MCLK_PE3()       SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~EBI_MCLK_PE3_Msk      ))) | EBI_MCLK_PE3          /*!< Set PE3  function to EBI_MCLK         */
#define SET_EBI_nCS0_PB7()       SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~EBI_nCS0_PB7_Msk      ))) | EBI_nCS0_PB7          /*!< Set PB7  function to EBI_nCS0         */
#define SET_EBI_nCS0_PD12()      SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~EBI_nCS0_PD12_Msk     ))) | EBI_nCS0_PD12         /*!< Set PD12 function to EBI_nCS0         */
#define SET_EBI_nCS0_PD14()      SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~EBI_nCS0_PD14_Msk     ))) | EBI_nCS0_PD14         /*!< Set PD14 function to EBI_nCS0         */
#define SET_EBI_nCS0_PF3()       SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~EBI_nCS0_PF3_Msk      ))) | EBI_nCS0_PF3          /*!< Set PF3  function to EBI_nCS0         */
#define SET_EBI_nCS0_PF6()       SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~EBI_nCS0_PF6_Msk      ))) | EBI_nCS0_PF6          /*!< Set PF6  function to EBI_nCS0         */
#define SET_EBI_nCS1_PB6()       SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~EBI_nCS1_PB6_Msk      ))) | EBI_nCS1_PB6          /*!< Set PB6  function to EBI_nCS1         */
#define SET_EBI_nCS1_PD11()      SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~EBI_nCS1_PD11_Msk     ))) | EBI_nCS1_PD11         /*!< Set PD11 function to EBI_nCS1         */
#define SET_EBI_nCS1_PF2()       SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~EBI_nCS1_PF2_Msk      ))) | EBI_nCS1_PF2          /*!< Set PF2  function to EBI_nCS1         */
#define SET_EBI_nCS2_PD10()      SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~EBI_nCS2_PD10_Msk     ))) | EBI_nCS2_PD10         /*!< Set PD10 function to EBI_nCS2         */
#define SET_EBI_nRD_PA11()       SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~EBI_nRD_PA11_Msk      ))) | EBI_nRD_PA11          /*!< Set PA11 function to EBI_nRD          */
#define SET_EBI_nRD_PE5()        SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~EBI_nRD_PE5_Msk       ))) | EBI_nRD_PE5           /*!< Set PE5  function to EBI_nRD          */
#define SET_EBI_nWR_PA10()       SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~EBI_nWR_PA10_Msk      ))) | EBI_nWR_PA10          /*!< Set PA10 function to EBI_nWR          */
#define SET_EBI_nWR_PE4()        SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~EBI_nWR_PE4_Msk       ))) | EBI_nWR_PE4           /*!< Set PE4  function to EBI_nWR          */
#define SET_EBI_nWRH_PB6()       SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~EBI_nWRH_PB6_Msk      ))) | EBI_nWRH_PB6          /*!< Set PB6  function to EBI_nWRH         */
#define SET_EBI_nWRL_PB7()       SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~EBI_nWRL_PB7_Msk      ))) | EBI_nWRL_PB7          /*!< Set PB7  function to EBI_nWRL         */

/* ECAP0 MFP Macros*/
#define SET_ECAP0_IC0_PA10()     SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~ECAP0_IC0_PA10_Msk    ))) | ECAP0_IC0_PA10        /*!< Set PA10 function to ECAP0_IC0        */
#define SET_ECAP0_IC0_PE8()      SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~ECAP0_IC0_PE8_Msk     ))) | ECAP0_IC0_PE8         /*!< Set PE8  function to ECAP0_IC0        */
#define SET_ECAP0_IC1_PA9()      SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~ECAP0_IC1_PA9_Msk     ))) | ECAP0_IC1_PA9         /*!< Set PA9  function to ECAP0_IC1        */
#define SET_ECAP0_IC1_PE9()      SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~ECAP0_IC1_PE9_Msk     ))) | ECAP0_IC1_PE9         /*!< Set PE9  function to ECAP0_IC1        */
#define SET_ECAP0_IC2_PA8()      SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~ECAP0_IC2_PA8_Msk     ))) | ECAP0_IC2_PA8         /*!< Set PA8  function to ECAP0_IC2        */
#define SET_ECAP0_IC2_PE10()     SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~ECAP0_IC2_PE10_Msk    ))) | ECAP0_IC2_PE10        /*!< Set PE10 function to ECAP0_IC2        */

/* ELLSI0 MFP Macros*/
#define SET_ELLSI0_OUT_PA7()     SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~ELLSI0_OUT_PA7_Msk    ))) | ELLSI0_OUT_PA7        /*!< Set PA7  function to ELLSI0_OUT       */
#define SET_ELLSI0_OUT_PB1()     SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~ELLSI0_OUT_PB1_Msk    ))) | ELLSI0_OUT_PB1        /*!< Set PB1  function to ELLSI0_OUT       */
#define SET_ELLSI0_OUT_PB9()     SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~ELLSI0_OUT_PB9_Msk    ))) | ELLSI0_OUT_PB9        /*!< Set PB9  function to ELLSI0_OUT       */
#define SET_ELLSI0_OUT_PC1()     SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~ELLSI0_OUT_PC1_Msk    ))) | ELLSI0_OUT_PC1        /*!< Set PC1  function to ELLSI0_OUT       */

/* EPWM0 MFP Macros*/
#define SET_EPWM0_BRAKE0_PB1()   SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~EPWM0_BRAKE0_PB1_Msk  ))) | EPWM0_BRAKE0_PB1      /*!< Set PB1  function to EPWM0_BRAKE0     */
#define SET_EPWM0_BRAKE0_PE8()   SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~EPWM0_BRAKE0_PE8_Msk  ))) | EPWM0_BRAKE0_PE8      /*!< Set PE8  function to EPWM0_BRAKE0     */
#define SET_EPWM0_BRAKE1_PA11()  SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~EPWM0_BRAKE1_PA11_Msk ))) | EPWM0_BRAKE1_PA11     /*!< Set PA11 function to EPWM0_BRAKE1     */
#define SET_EPWM0_BRAKE1_PB0()   SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~EPWM0_BRAKE1_PB0_Msk  ))) | EPWM0_BRAKE1_PB0      /*!< Set PB0  function to EPWM0_BRAKE1     */
#define SET_EPWM0_BRAKE1_PB15()  SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~EPWM0_BRAKE1_PB15_Msk ))) | EPWM0_BRAKE1_PB15     /*!< Set PB15 function to EPWM0_BRAKE1     */
#define SET_EPWM0_BRAKE1_PE9()   SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~EPWM0_BRAKE1_PE9_Msk  ))) | EPWM0_BRAKE1_PE9      /*!< Set PE9  function to EPWM0_BRAKE1     */
#define SET_EPWM0_CH0_PA5()      SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~EPWM0_CH0_PA5_Msk     ))) | EPWM0_CH0_PA5         /*!< Set PA5  function to EPWM0_CH0        */
#define SET_EPWM0_CH0_PB5()      SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~EPWM0_CH0_PB5_Msk     ))) | EPWM0_CH0_PB5         /*!< Set PB5  function to EPWM0_CH0        */
#define SET_EPWM0_CH0_PE7()      SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~EPWM0_CH0_PE7_Msk     ))) | EPWM0_CH0_PE7         /*!< Set PE7  function to EPWM0_CH0        */
#define SET_EPWM0_CH0_PE8()      SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~EPWM0_CH0_PE8_Msk     ))) | EPWM0_CH0_PE8         /*!< Set PE8  function to EPWM0_CH0        */
#define SET_EPWM0_CH0_PF5()      SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~EPWM0_CH0_PF5_Msk     ))) | EPWM0_CH0_PF5         /*!< Set PF5  function to EPWM0_CH0        */
#define SET_EPWM0_CH1_PA4()      SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~EPWM0_CH1_PA4_Msk     ))) | EPWM0_CH1_PA4         /*!< Set PA4  function to EPWM0_CH1        */
#define SET_EPWM0_CH1_PB4()      SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~EPWM0_CH1_PB4_Msk     ))) | EPWM0_CH1_PB4         /*!< Set PB4  function to EPWM0_CH1        */
#define SET_EPWM0_CH1_PE6()      SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~EPWM0_CH1_PE6_Msk     ))) | EPWM0_CH1_PE6         /*!< Set PE6  function to EPWM0_CH1        */
#define SET_EPWM0_CH1_PE9()      SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~EPWM0_CH1_PE9_Msk     ))) | EPWM0_CH1_PE9         /*!< Set PE9  function to EPWM0_CH1        */
#define SET_EPWM0_CH1_PF4()      SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~EPWM0_CH1_PF4_Msk     ))) | EPWM0_CH1_PF4         /*!< Set PF4  function to EPWM0_CH1        */
#define SET_EPWM0_CH2_PA3()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~EPWM0_CH2_PA3_Msk     ))) | EPWM0_CH2_PA3         /*!< Set PA3  function to EPWM0_CH2        */
#define SET_EPWM0_CH2_PB3()      SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~EPWM0_CH2_PB3_Msk     ))) | EPWM0_CH2_PB3         /*!< Set PB3  function to EPWM0_CH2        */
#define SET_EPWM0_CH2_PE5()      SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~EPWM0_CH2_PE5_Msk     ))) | EPWM0_CH2_PE5         /*!< Set PE5  function to EPWM0_CH2        */
#define SET_EPWM0_CH2_PE10()     SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~EPWM0_CH2_PE10_Msk    ))) | EPWM0_CH2_PE10        /*!< Set PE10 function to EPWM0_CH2        */
#define SET_EPWM0_CH3_PA2()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~EPWM0_CH3_PA2_Msk     ))) | EPWM0_CH3_PA2         /*!< Set PA2  function to EPWM0_CH3        */
#define SET_EPWM0_CH3_PB2()      SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~EPWM0_CH3_PB2_Msk     ))) | EPWM0_CH3_PB2         /*!< Set PB2  function to EPWM0_CH3        */
#define SET_EPWM0_CH3_PE4()      SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~EPWM0_CH3_PE4_Msk     ))) | EPWM0_CH3_PE4         /*!< Set PE4  function to EPWM0_CH3        */
#define SET_EPWM0_CH3_PE11()     SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~EPWM0_CH3_PE11_Msk    ))) | EPWM0_CH3_PE11        /*!< Set PE11 function to EPWM0_CH3        */
#define SET_EPWM0_CH4_PA1()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~EPWM0_CH4_PA1_Msk     ))) | EPWM0_CH4_PA1         /*!< Set PA1  function to EPWM0_CH4        */
#define SET_EPWM0_CH4_PB1()      SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~EPWM0_CH4_PB1_Msk     ))) | EPWM0_CH4_PB1         /*!< Set PB1  function to EPWM0_CH4        */
#define SET_EPWM0_CH4_PD14()     SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~EPWM0_CH4_PD14_Msk    ))) | EPWM0_CH4_PD14        /*!< Set PD14 function to EPWM0_CH4        */
#define SET_EPWM0_CH4_PE3()      SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~EPWM0_CH4_PE3_Msk     ))) | EPWM0_CH4_PE3         /*!< Set PE3  function to EPWM0_CH4        */
#define SET_EPWM0_CH4_PE12()     SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~EPWM0_CH4_PE12_Msk    ))) | EPWM0_CH4_PE12        /*!< Set PE12 function to EPWM0_CH4        */
#define SET_EPWM0_CH4_PH5()      SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~EPWM0_CH4_PH5_Msk     ))) | EPWM0_CH4_PH5         /*!< Set PH5  function to EPWM0_CH4        */
#define SET_EPWM0_CH5_PA0()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~EPWM0_CH5_PA0_Msk     ))) | EPWM0_CH5_PA0         /*!< Set PA0  function to EPWM0_CH5        */
#define SET_EPWM0_CH5_PB0()      SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~EPWM0_CH5_PB0_Msk     ))) | EPWM0_CH5_PB0         /*!< Set PB0  function to EPWM0_CH5        */
#define SET_EPWM0_CH5_PE2()      SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~EPWM0_CH5_PE2_Msk     ))) | EPWM0_CH5_PE2         /*!< Set PE2  function to EPWM0_CH5        */
#define SET_EPWM0_CH5_PE13()     SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~EPWM0_CH5_PE13_Msk    ))) | EPWM0_CH5_PE13        /*!< Set PE13 function to EPWM0_CH5        */
#define SET_EPWM0_CH5_PH4()      SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~EPWM0_CH5_PH4_Msk     ))) | EPWM0_CH5_PH4         /*!< Set PH4  function to EPWM0_CH5        */
#define SET_EPWM0_CH5_PH11()     SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~EPWM0_CH5_PH11_Msk    ))) | EPWM0_CH5_PH11        /*!< Set PH11 function to EPWM0_CH5        */
#define SET_EPWM0_SYNC_OUT_PA11() SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~EPWM0_SYNC_OUT_PA11_Msk))) | EPWM0_SYNC_OUT_PA11 /*!< Set PA11 function to EPWM0_SYNC_OUT   */
#define SET_EPWM0_SYNC_OUT_PF5() SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~EPWM0_SYNC_OUT_PF5_Msk))) | EPWM0_SYNC_OUT_PF5    /*!< Set PF5  function to EPWM0_SYNC_OUT   */
#define SET_EPWM0_SYNC_IN_PA15() SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~EPWM0_SYNC_IN_PA15_Msk))) | EPWM0_SYNC_IN_PA15    /*!< Set PA15 function to EPWM0_SYNC_IN    */
#define SET_EPWM0_SYNC_IN_PB6()  SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~EPWM0_SYNC_IN_PB6_Msk ))) | EPWM0_SYNC_IN_PB6     /*!< Set PB6  function to EPWM0_SYNC_IN    */
#define SET_EPWM0_SYNC_IN_PC14() SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~EPWM0_SYNC_IN_PC14_Msk))) | EPWM0_SYNC_IN_PC14    /*!< Set PC14 function to EPWM0_SYNC_IN    */

/* EPWM1 MFP Macros*/
#define SET_EPWM1_BRAKE0_PB7()   SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~EPWM1_BRAKE0_PB7_Msk  ))) | EPWM1_BRAKE0_PB7      /*!< Set PB7  function to EPWM1_BRAKE0     */
#define SET_EPWM1_BRAKE0_PE10()  SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~EPWM1_BRAKE0_PE10_Msk ))) | EPWM1_BRAKE0_PE10     /*!< Set PE10 function to EPWM1_BRAKE0     */
#define SET_EPWM1_BRAKE1_PA3()   SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~EPWM1_BRAKE1_PA3_Msk  ))) | EPWM1_BRAKE1_PA3      /*!< Set PA3  function to EPWM1_BRAKE1     */
#define SET_EPWM1_BRAKE1_PB6()   SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~EPWM1_BRAKE1_PB6_Msk  ))) | EPWM1_BRAKE1_PB6      /*!< Set PB6  function to EPWM1_BRAKE1     */
#define SET_EPWM1_BRAKE1_PE11()  SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~EPWM1_BRAKE1_PE11_Msk ))) | EPWM1_BRAKE1_PE11     /*!< Set PE11 function to EPWM1_BRAKE1     */
#define SET_EPWM1_CH0_PB15()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~EPWM1_CH0_PB15_Msk    ))) | EPWM1_CH0_PB15        /*!< Set PB15 function to EPWM1_CH0        */
#define SET_EPWM1_CH0_PC5()      SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~EPWM1_CH0_PC5_Msk     ))) | EPWM1_CH0_PC5         /*!< Set PC5  function to EPWM1_CH0        */
#define SET_EPWM1_CH0_PC12()     SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~EPWM1_CH0_PC12_Msk    ))) | EPWM1_CH0_PC12        /*!< Set PC12 function to EPWM1_CH0        */
#define SET_EPWM1_CH0_PE13()     SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~EPWM1_CH0_PE13_Msk    ))) | EPWM1_CH0_PE13        /*!< Set PE13 function to EPWM1_CH0        */
#define SET_EPWM1_CH0_PF3()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~EPWM1_CH0_PF3_Msk     ))) | EPWM1_CH0_PF3         /*!< Set PF3  function to EPWM1_CH0        */
#define SET_EPWM1_CH1_PB14()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~EPWM1_CH1_PB14_Msk    ))) | EPWM1_CH1_PB14        /*!< Set PB14 function to EPWM1_CH1        */
#define SET_EPWM1_CH1_PC4()      SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~EPWM1_CH1_PC4_Msk     ))) | EPWM1_CH1_PC4         /*!< Set PC4  function to EPWM1_CH1        */
#define SET_EPWM1_CH1_PC8()      SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~EPWM1_CH1_PC8_Msk     ))) | EPWM1_CH1_PC8         /*!< Set PC8  function to EPWM1_CH1        */
#define SET_EPWM1_CH1_PC11()     SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~EPWM1_CH1_PC11_Msk    ))) | EPWM1_CH1_PC11        /*!< Set PC11 function to EPWM1_CH1        */
#define SET_EPWM1_CH1_PF2()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~EPWM1_CH1_PF2_Msk     ))) | EPWM1_CH1_PF2         /*!< Set PF2  function to EPWM1_CH1        */
#define SET_EPWM1_CH2_PB13()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~EPWM1_CH2_PB13_Msk    ))) | EPWM1_CH2_PB13        /*!< Set PB13 function to EPWM1_CH2        */
#define SET_EPWM1_CH2_PC3()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~EPWM1_CH2_PC3_Msk     ))) | EPWM1_CH2_PC3         /*!< Set PC3  function to EPWM1_CH2        */
#define SET_EPWM1_CH2_PC7()      SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~EPWM1_CH2_PC7_Msk     ))) | EPWM1_CH2_PC7         /*!< Set PC7  function to EPWM1_CH2        */
#define SET_EPWM1_CH2_PC10()     SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~EPWM1_CH2_PC10_Msk    ))) | EPWM1_CH2_PC10        /*!< Set PC10 function to EPWM1_CH2        */
#define SET_EPWM1_CH3_PB12()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~EPWM1_CH3_PB12_Msk    ))) | EPWM1_CH3_PB12        /*!< Set PB12 function to EPWM1_CH3        */
#define SET_EPWM1_CH3_PC2()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~EPWM1_CH3_PC2_Msk     ))) | EPWM1_CH3_PC2         /*!< Set PC2  function to EPWM1_CH3        */
#define SET_EPWM1_CH3_PC6()      SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~EPWM1_CH3_PC6_Msk     ))) | EPWM1_CH3_PC6         /*!< Set PC6  function to EPWM1_CH3        */
#define SET_EPWM1_CH3_PC9()      SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~EPWM1_CH3_PC9_Msk     ))) | EPWM1_CH3_PC9         /*!< Set PC9  function to EPWM1_CH3        */
#define SET_EPWM1_CH4_PA7()      SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~EPWM1_CH4_PA7_Msk     ))) | EPWM1_CH4_PA7         /*!< Set PA7  function to EPWM1_CH4        */
#define SET_EPWM1_CH4_PB1()      SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~EPWM1_CH4_PB1_Msk     ))) | EPWM1_CH4_PB1         /*!< Set PB1  function to EPWM1_CH4        */
#define SET_EPWM1_CH4_PB7()      SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~EPWM1_CH4_PB7_Msk     ))) | EPWM1_CH4_PB7         /*!< Set PB7  function to EPWM1_CH4        */
#define SET_EPWM1_CH4_PC1()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~EPWM1_CH4_PC1_Msk     ))) | EPWM1_CH4_PC1         /*!< Set PC1  function to EPWM1_CH4        */
#define SET_EPWM1_CH4_PF0()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~EPWM1_CH4_PF0_Msk     ))) | EPWM1_CH4_PF0         /*!< Set PF0  function to EPWM1_CH4        */
#define SET_EPWM1_CH5_PA6()      SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~EPWM1_CH5_PA6_Msk     ))) | EPWM1_CH5_PA6         /*!< Set PA6  function to EPWM1_CH5        */
#define SET_EPWM1_CH5_PB0()      SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~EPWM1_CH5_PB0_Msk     ))) | EPWM1_CH5_PB0         /*!< Set PB0  function to EPWM1_CH5        */
#define SET_EPWM1_CH5_PB6()      SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~EPWM1_CH5_PB6_Msk     ))) | EPWM1_CH5_PB6         /*!< Set PB6  function to EPWM1_CH5        */
#define SET_EPWM1_CH5_PC0()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~EPWM1_CH5_PC0_Msk     ))) | EPWM1_CH5_PC0         /*!< Set PC0  function to EPWM1_CH5        */
#define SET_EPWM1_CH5_PF1()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~EPWM1_CH5_PF1_Msk     ))) | EPWM1_CH5_PF1         /*!< Set PF1  function to EPWM1_CH5        */

/* EQEI0 MFP Macros*/
#define SET_EQEI0_A_PA4()        SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~EQEI0_A_PA4_Msk       ))) | EQEI0_A_PA4           /*!< Set PA4  function to EQEI0_A          */
#define SET_EQEI0_A_PD11()       SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~EQEI0_A_PD11_Msk      ))) | EQEI0_A_PD11          /*!< Set PD11 function to EQEI0_A          */
#define SET_EQEI0_A_PE3()        SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~EQEI0_A_PE3_Msk       ))) | EQEI0_A_PE3           /*!< Set PE3  function to EQEI0_A          */
#define SET_EQEI0_B_PA3()        SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~EQEI0_B_PA3_Msk       ))) | EQEI0_B_PA3           /*!< Set PA3  function to EQEI0_B          */
#define SET_EQEI0_B_PD10()       SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~EQEI0_B_PD10_Msk      ))) | EQEI0_B_PD10          /*!< Set PD10 function to EQEI0_B          */
#define SET_EQEI0_B_PE2()        SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~EQEI0_B_PE2_Msk       ))) | EQEI0_B_PE2           /*!< Set PE2  function to EQEI0_B          */
#define SET_EQEI0_INDEX_PA5()    SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~EQEI0_INDEX_PA5_Msk   ))) | EQEI0_INDEX_PA5       /*!< Set PA5  function to EQEI0_INDEX      */
#define SET_EQEI0_INDEX_PD12()   SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~EQEI0_INDEX_PD12_Msk  ))) | EQEI0_INDEX_PD12      /*!< Set PD12 function to EQEI0_INDEX      */
#define SET_EQEI0_INDEX_PE4()    SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~EQEI0_INDEX_PE4_Msk   ))) | EQEI0_INDEX_PE4       /*!< Set PE4  function to EQEI0_INDEX      */

/* HSUSB MFP Macros*/
#define SET_HSUSB_VBUS_EN_PB6()  SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~HSUSB_VBUS_EN_PB6_Msk ))) | HSUSB_VBUS_EN_PB6     /*!< Set PB6  function to HSUSB_VBUS_EN    */
#define SET_HSUSB_VBUS_EN_PB10() SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~HSUSB_VBUS_EN_PB10_Msk))) | HSUSB_VBUS_EN_PB10    /*!< Set PB10 function to HSUSB_VBUS_EN    */
#define SET_HSUSB_VBUS_EN_PB15() SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~HSUSB_VBUS_EN_PB15_Msk))) | HSUSB_VBUS_EN_PB15    /*!< Set PB15 function to HSUSB_VBUS_EN    */
#define SET_HSUSB_VBUS_ST_PB7()  SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~HSUSB_VBUS_ST_PB7_Msk ))) | HSUSB_VBUS_ST_PB7     /*!< Set PB7  function to HSUSB_VBUS_ST    */
#define SET_HSUSB_VBUS_ST_PB11() SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~HSUSB_VBUS_ST_PB11_Msk))) | HSUSB_VBUS_ST_PB11    /*!< Set PB11 function to HSUSB_VBUS_ST    */
#define SET_HSUSB_VBUS_ST_PB13() SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~HSUSB_VBUS_ST_PB13_Msk))) | HSUSB_VBUS_ST_PB13    /*!< Set PB13 function to HSUSB_VBUS_ST    */
#define SET_HSUSB_VBUS_ST_PC14() SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~HSUSB_VBUS_ST_PC14_Msk))) | HSUSB_VBUS_ST_PC14    /*!< Set PC14 function to HSUSB_VBUS_ST    */

/* I2C0 MFP Macros*/
#define SET_I2C0_SCL_PA5()       SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~I2C0_SCL_PA5_Msk      ))) | I2C0_SCL_PA5          /*!< Set PA5  function to I2C0_SCL         */
#define SET_I2C0_SCL_PB5()       SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~I2C0_SCL_PB5_Msk      ))) | I2C0_SCL_PB5          /*!< Set PB5  function to I2C0_SCL         */
#define SET_I2C0_SCL_PB9()       SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~I2C0_SCL_PB9_Msk      ))) | I2C0_SCL_PB9          /*!< Set PB9  function to I2C0_SCL         */
#define SET_I2C0_SCL_PC1()       SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~I2C0_SCL_PC1_Msk      ))) | I2C0_SCL_PC1          /*!< Set PC1  function to I2C0_SCL         */
#define SET_I2C0_SCL_PC12()      SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~I2C0_SCL_PC12_Msk     ))) | I2C0_SCL_PC12         /*!< Set PC12 function to I2C0_SCL         */
#define SET_I2C0_SCL_PD7()       SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~I2C0_SCL_PD7_Msk      ))) | I2C0_SCL_PD7          /*!< Set PD7  function to I2C0_SCL         */
#define SET_I2C0_SCL_PE13()      SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~I2C0_SCL_PE13_Msk     ))) | I2C0_SCL_PE13         /*!< Set PE13 function to I2C0_SCL         */
#define SET_I2C0_SCL_PF0()       SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~I2C0_SCL_PF0_Msk      ))) | I2C0_SCL_PF0          /*!< Set PF0  function to I2C0_SCL         */
#define SET_I2C0_SCL_PF3()       SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~I2C0_SCL_PF3_Msk      ))) | I2C0_SCL_PF3          /*!< Set PF3  function to I2C0_SCL         */
#define SET_I2C0_SDA_PA4()       SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~I2C0_SDA_PA4_Msk      ))) | I2C0_SDA_PA4          /*!< Set PA4  function to I2C0_SDA         */
#define SET_I2C0_SDA_PB4()       SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~I2C0_SDA_PB4_Msk      ))) | I2C0_SDA_PB4          /*!< Set PB4  function to I2C0_SDA         */
#define SET_I2C0_SDA_PB8()       SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~I2C0_SDA_PB8_Msk      ))) | I2C0_SDA_PB8          /*!< Set PB8  function to I2C0_SDA         */
#define SET_I2C0_SDA_PC0()       SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~I2C0_SDA_PC0_Msk      ))) | I2C0_SDA_PC0          /*!< Set PC0  function to I2C0_SDA         */
#define SET_I2C0_SDA_PC8()       SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~I2C0_SDA_PC8_Msk      ))) | I2C0_SDA_PC8          /*!< Set PC8  function to I2C0_SDA         */
#define SET_I2C0_SDA_PC11()      SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~I2C0_SDA_PC11_Msk     ))) | I2C0_SDA_PC11         /*!< Set PC11 function to I2C0_SDA         */
#define SET_I2C0_SDA_PD6()       SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~I2C0_SDA_PD6_Msk      ))) | I2C0_SDA_PD6          /*!< Set PD6  function to I2C0_SDA         */
#define SET_I2C0_SDA_PF1()       SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~I2C0_SDA_PF1_Msk      ))) | I2C0_SDA_PF1          /*!< Set PF1  function to I2C0_SDA         */
#define SET_I2C0_SDA_PF2()       SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~I2C0_SDA_PF2_Msk      ))) | I2C0_SDA_PF2          /*!< Set PF2  function to I2C0_SDA         */
#define SET_I2C0_SMBAL_PA3()     SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~I2C0_SMBAL_PA3_Msk    ))) | I2C0_SMBAL_PA3        /*!< Set PA3  function to I2C0_SMBAL       */
#define SET_I2C0_SMBAL_PC3()     SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~I2C0_SMBAL_PC3_Msk    ))) | I2C0_SMBAL_PC3        /*!< Set PC3  function to I2C0_SMBAL       */
#define SET_I2C0_SMBAL_PG2()     SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~I2C0_SMBAL_PG2_Msk    ))) | I2C0_SMBAL_PG2        /*!< Set PG2  function to I2C0_SMBAL       */
#define SET_I2C0_SMBSUS_PA2()    SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~I2C0_SMBSUS_PA2_Msk   ))) | I2C0_SMBSUS_PA2       /*!< Set PA2  function to I2C0_SMBSUS      */
#define SET_I2C0_SMBSUS_PC2()    SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~I2C0_SMBSUS_PC2_Msk   ))) | I2C0_SMBSUS_PC2       /*!< Set PC2  function to I2C0_SMBSUS      */
#define SET_I2C0_SMBSUS_PG3()    SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~I2C0_SMBSUS_PG3_Msk   ))) | I2C0_SMBSUS_PG3       /*!< Set PG3  function to I2C0_SMBSUS      */

/* I2C1 MFP Macros*/
#define SET_I2C1_SCL_PA3()       SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~I2C1_SCL_PA3_Msk      ))) | I2C1_SCL_PA3          /*!< Set PA3  function to I2C1_SCL         */
#define SET_I2C1_SCL_PA7()       SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~I2C1_SCL_PA7_Msk      ))) | I2C1_SCL_PA7          /*!< Set PA7  function to I2C1_SCL         */
#define SET_I2C1_SCL_PA12()      SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~I2C1_SCL_PA12_Msk     ))) | I2C1_SCL_PA12         /*!< Set PA12 function to I2C1_SCL         */
#define SET_I2C1_SCL_PB1()       SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~I2C1_SCL_PB1_Msk      ))) | I2C1_SCL_PB1          /*!< Set PB1  function to I2C1_SCL         */
#define SET_I2C1_SCL_PB3()       SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~I2C1_SCL_PB3_Msk      ))) | I2C1_SCL_PB3          /*!< Set PB3  function to I2C1_SCL         */
#define SET_I2C1_SCL_PB11()      SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~I2C1_SCL_PB11_Msk     ))) | I2C1_SCL_PB11         /*!< Set PB11 function to I2C1_SCL         */
#define SET_I2C1_SCL_PC5()       SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~I2C1_SCL_PC5_Msk      ))) | I2C1_SCL_PC5          /*!< Set PC5  function to I2C1_SCL         */
#define SET_I2C1_SCL_PD5()       SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~I2C1_SCL_PD5_Msk      ))) | I2C1_SCL_PD5          /*!< Set PD5  function to I2C1_SCL         */
#define SET_I2C1_SCL_PE1()       SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~I2C1_SCL_PE1_Msk      ))) | I2C1_SCL_PE1          /*!< Set PE1  function to I2C1_SCL         */
#define SET_I2C1_SCL_PE14()      SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~I2C1_SCL_PE14_Msk     ))) | I2C1_SCL_PE14         /*!< Set PE14 function to I2C1_SCL         */
#define SET_I2C1_SCL_PF0()       SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~I2C1_SCL_PF0_Msk      ))) | I2C1_SCL_PF0          /*!< Set PF0  function to I2C1_SCL         */
#define SET_I2C1_SCL_PG2()       SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~I2C1_SCL_PG2_Msk      ))) | I2C1_SCL_PG2          /*!< Set PG2  function to I2C1_SCL         */
#define SET_I2C1_SDA_PA2()       SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~I2C1_SDA_PA2_Msk      ))) | I2C1_SDA_PA2          /*!< Set PA2  function to I2C1_SDA         */
#define SET_I2C1_SDA_PA6()       SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~I2C1_SDA_PA6_Msk      ))) | I2C1_SDA_PA6          /*!< Set PA6  function to I2C1_SDA         */
#define SET_I2C1_SDA_PA13()      SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~I2C1_SDA_PA13_Msk     ))) | I2C1_SDA_PA13         /*!< Set PA13 function to I2C1_SDA         */
#define SET_I2C1_SDA_PB0()       SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~I2C1_SDA_PB0_Msk      ))) | I2C1_SDA_PB0          /*!< Set PB0  function to I2C1_SDA         */
#define SET_I2C1_SDA_PB2()       SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~I2C1_SDA_PB2_Msk      ))) | I2C1_SDA_PB2          /*!< Set PB2  function to I2C1_SDA         */
#define SET_I2C1_SDA_PB10()      SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~I2C1_SDA_PB10_Msk     ))) | I2C1_SDA_PB10         /*!< Set PB10 function to I2C1_SDA         */
#define SET_I2C1_SDA_PC4()       SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~I2C1_SDA_PC4_Msk      ))) | I2C1_SDA_PC4          /*!< Set PC4  function to I2C1_SDA         */
#define SET_I2C1_SDA_PD4()       SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~I2C1_SDA_PD4_Msk      ))) | I2C1_SDA_PD4          /*!< Set PD4  function to I2C1_SDA         */
#define SET_I2C1_SDA_PE0()       SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~I2C1_SDA_PE0_Msk      ))) | I2C1_SDA_PE0          /*!< Set PE0  function to I2C1_SDA         */
#define SET_I2C1_SDA_PE15()      SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~I2C1_SDA_PE15_Msk     ))) | I2C1_SDA_PE15         /*!< Set PE15 function to I2C1_SDA         */
#define SET_I2C1_SDA_PF1()       SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~I2C1_SDA_PF1_Msk      ))) | I2C1_SDA_PF1          /*!< Set PF1  function to I2C1_SDA         */
#define SET_I2C1_SDA_PG3()       SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~I2C1_SDA_PG3_Msk      ))) | I2C1_SDA_PG3          /*!< Set PG3  function to I2C1_SDA         */
#define SET_I2C1_SMBAL_PB9()     SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~I2C1_SMBAL_PB9_Msk    ))) | I2C1_SMBAL_PB9        /*!< Set PB9  function to I2C1_SMBAL       */
#define SET_I2C1_SMBAL_PC7()     SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~I2C1_SMBAL_PC7_Msk    ))) | I2C1_SMBAL_PC7        /*!< Set PC7  function to I2C1_SMBAL       */
#define SET_I2C1_SMBAL_PH8()     SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~I2C1_SMBAL_PH8_Msk    ))) | I2C1_SMBAL_PH8        /*!< Set PH8  function to I2C1_SMBAL       */
#define SET_I2C1_SMBSUS_PB8()    SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~I2C1_SMBSUS_PB8_Msk   ))) | I2C1_SMBSUS_PB8       /*!< Set PB8  function to I2C1_SMBSUS      */
#define SET_I2C1_SMBSUS_PC6()    SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~I2C1_SMBSUS_PC6_Msk   ))) | I2C1_SMBSUS_PC6       /*!< Set PC6  function to I2C1_SMBSUS      */
#define SET_I2C1_SMBSUS_PH9()    SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~I2C1_SMBSUS_PH9_Msk   ))) | I2C1_SMBSUS_PH9       /*!< Set PH9  function to I2C1_SMBSUS      */

/* I2C2 MFP Macros*/
#define SET_I2C2_SCL_PA1()       SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~I2C2_SCL_PA1_Msk      ))) | I2C2_SCL_PA1          /*!< Set PA1  function to I2C2_SCL         */
#define SET_I2C2_SCL_PA11()      SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~I2C2_SCL_PA11_Msk     ))) | I2C2_SCL_PA11         /*!< Set PA11 function to I2C2_SCL         */
#define SET_I2C2_SCL_PA14()      SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~I2C2_SCL_PA14_Msk     ))) | I2C2_SCL_PA14         /*!< Set PA14 function to I2C2_SCL         */
#define SET_I2C2_SCL_PB13()      SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~I2C2_SCL_PB13_Msk     ))) | I2C2_SCL_PB13         /*!< Set PB13 function to I2C2_SCL         */
#define SET_I2C2_SCL_PD1()       SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~I2C2_SCL_PD1_Msk      ))) | I2C2_SCL_PD1          /*!< Set PD1  function to I2C2_SCL         */
#define SET_I2C2_SCL_PD9()       SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~I2C2_SCL_PD9_Msk      ))) | I2C2_SCL_PD9          /*!< Set PD9  function to I2C2_SCL         */
#define SET_I2C2_SCL_PH8()       SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~I2C2_SCL_PH8_Msk      ))) | I2C2_SCL_PH8          /*!< Set PH8  function to I2C2_SCL         */
#define SET_I2C2_SDA_PA0()       SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~I2C2_SDA_PA0_Msk      ))) | I2C2_SDA_PA0          /*!< Set PA0  function to I2C2_SDA         */
#define SET_I2C2_SDA_PA10()      SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~I2C2_SDA_PA10_Msk     ))) | I2C2_SDA_PA10         /*!< Set PA10 function to I2C2_SDA         */
#define SET_I2C2_SDA_PA15()      SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~I2C2_SDA_PA15_Msk     ))) | I2C2_SDA_PA15         /*!< Set PA15 function to I2C2_SDA         */
#define SET_I2C2_SDA_PB12()      SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~I2C2_SDA_PB12_Msk     ))) | I2C2_SDA_PB12         /*!< Set PB12 function to I2C2_SDA         */
#define SET_I2C2_SDA_PD0()       SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~I2C2_SDA_PD0_Msk      ))) | I2C2_SDA_PD0          /*!< Set PD0  function to I2C2_SDA         */
#define SET_I2C2_SDA_PD8()       SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~I2C2_SDA_PD8_Msk      ))) | I2C2_SDA_PD8          /*!< Set PD8  function to I2C2_SDA         */
#define SET_I2C2_SDA_PH9()       SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~I2C2_SDA_PH9_Msk      ))) | I2C2_SDA_PH9          /*!< Set PH9  function to I2C2_SDA         */
#define SET_I2C2_SMBAL_PB15()    SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~I2C2_SMBAL_PB15_Msk   ))) | I2C2_SMBAL_PB15       /*!< Set PB15 function to I2C2_SMBAL       */
#define SET_I2C2_SMBAL_PF3()     SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~I2C2_SMBAL_PF3_Msk    ))) | I2C2_SMBAL_PF3        /*!< Set PF3  function to I2C2_SMBAL       */
#define SET_I2C2_SMBSUS_PB14()   SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~I2C2_SMBSUS_PB14_Msk  ))) | I2C2_SMBSUS_PB14      /*!< Set PB14 function to I2C2_SMBSUS      */
#define SET_I2C2_SMBSUS_PF2()    SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~I2C2_SMBSUS_PF2_Msk   ))) | I2C2_SMBSUS_PF2       /*!< Set PF2  function to I2C2_SMBSUS      */

/* I2S0 MFP Macros*/
#define SET_I2S0_BCLK_PA12()     SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~I2S0_BCLK_PA12_Msk    ))) | I2S0_BCLK_PA12        /*!< Set PA12 function to I2S0_BCLK        */
#define SET_I2S0_BCLK_PB5()      SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~I2S0_BCLK_PB5_Msk     ))) | I2S0_BCLK_PB5         /*!< Set PB5  function to I2S0_BCLK        */
#define SET_I2S0_BCLK_PC4()      SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~I2S0_BCLK_PC4_Msk     ))) | I2S0_BCLK_PC4         /*!< Set PC4  function to I2S0_BCLK        */
#define SET_I2S0_BCLK_PE1()      SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~I2S0_BCLK_PE1_Msk     ))) | I2S0_BCLK_PE1         /*!< Set PE1  function to I2S0_BCLK        */
#define SET_I2S0_BCLK_PE3()      SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~I2S0_BCLK_PE3_Msk     ))) | I2S0_BCLK_PE3         /*!< Set PE3  function to I2S0_BCLK        */
#define SET_I2S0_BCLK_PE8()      SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~I2S0_BCLK_PE8_Msk     ))) | I2S0_BCLK_PE8         /*!< Set PE8  function to I2S0_BCLK        */
#define SET_I2S0_BCLK_PF10()     SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~I2S0_BCLK_PF10_Msk    ))) | I2S0_BCLK_PF10        /*!< Set PF10 function to I2S0_BCLK        */
#define SET_I2S0_DI_PA14()       SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~I2S0_DI_PA14_Msk      ))) | I2S0_DI_PA14          /*!< Set PA14 function to I2S0_DI          */
#define SET_I2S0_DI_PB3()        SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~I2S0_DI_PB3_Msk       ))) | I2S0_DI_PB3           /*!< Set PB3  function to I2S0_DI          */
#define SET_I2S0_DI_PC2()        SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~I2S0_DI_PC2_Msk       ))) | I2S0_DI_PC2           /*!< Set PC2  function to I2S0_DI          */
#define SET_I2S0_DI_PE10()       SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~I2S0_DI_PE10_Msk      ))) | I2S0_DI_PE10          /*!< Set PE10 function to I2S0_DI          */
#define SET_I2S0_DI_PF8()        SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~I2S0_DI_PF8_Msk       ))) | I2S0_DI_PF8           /*!< Set PF8  function to I2S0_DI          */
#define SET_I2S0_DI_PH8()        SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~I2S0_DI_PH8_Msk       ))) | I2S0_DI_PH8           /*!< Set PH8  function to I2S0_DI          */
#define SET_I2S0_DO_PA15()       SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~I2S0_DO_PA15_Msk      ))) | I2S0_DO_PA15          /*!< Set PA15 function to I2S0_DO          */
#define SET_I2S0_DO_PB2()        SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~I2S0_DO_PB2_Msk       ))) | I2S0_DO_PB2           /*!< Set PB2  function to I2S0_DO          */
#define SET_I2S0_DO_PC1()        SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~I2S0_DO_PC1_Msk       ))) | I2S0_DO_PC1           /*!< Set PC1  function to I2S0_DO          */
#define SET_I2S0_DO_PE11()       SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~I2S0_DO_PE11_Msk      ))) | I2S0_DO_PE11          /*!< Set PE11 function to I2S0_DO          */
#define SET_I2S0_DO_PF0()        SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~I2S0_DO_PF0_Msk       ))) | I2S0_DO_PF0           /*!< Set PF0  function to I2S0_DO          */
#define SET_I2S0_DO_PF7()        SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~I2S0_DO_PF7_Msk       ))) | I2S0_DO_PF7           /*!< Set PF7  function to I2S0_DO          */
#define SET_I2S0_DO_PH9()        SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~I2S0_DO_PH9_Msk       ))) | I2S0_DO_PH9           /*!< Set PH9  function to I2S0_DO          */
#define SET_I2S0_LRCK_PB1()      SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~I2S0_LRCK_PB1_Msk     ))) | I2S0_LRCK_PB1         /*!< Set PB1  function to I2S0_LRCK        */
#define SET_I2S0_LRCK_PC0()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~I2S0_LRCK_PC0_Msk     ))) | I2S0_LRCK_PC0         /*!< Set PC0  function to I2S0_LRCK        */
#define SET_I2S0_LRCK_PE12()     SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~I2S0_LRCK_PE12_Msk    ))) | I2S0_LRCK_PE12        /*!< Set PE12 function to I2S0_LRCK        */
#define SET_I2S0_LRCK_PF1()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~I2S0_LRCK_PF1_Msk     ))) | I2S0_LRCK_PF1         /*!< Set PF1  function to I2S0_LRCK        */
#define SET_I2S0_LRCK_PF6()      SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~I2S0_LRCK_PF6_Msk     ))) | I2S0_LRCK_PF6         /*!< Set PF6  function to I2S0_LRCK        */
#define SET_I2S0_LRCK_PH10()     SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~I2S0_LRCK_PH10_Msk    ))) | I2S0_LRCK_PH10        /*!< Set PH10 function to I2S0_LRCK        */
#define SET_I2S0_MCLK_PA13()     SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~I2S0_MCLK_PA13_Msk    ))) | I2S0_MCLK_PA13        /*!< Set PA13 function to I2S0_MCLK        */
#define SET_I2S0_MCLK_PB4()      SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~I2S0_MCLK_PB4_Msk     ))) | I2S0_MCLK_PB4         /*!< Set PB4  function to I2S0_MCLK        */
#define SET_I2S0_MCLK_PC3()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~I2S0_MCLK_PC3_Msk     ))) | I2S0_MCLK_PC3         /*!< Set PC3  function to I2S0_MCLK        */
#define SET_I2S0_MCLK_PE0()      SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~I2S0_MCLK_PE0_Msk     ))) | I2S0_MCLK_PE0         /*!< Set PE0  function to I2S0_MCLK        */
#define SET_I2S0_MCLK_PE2()      SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~I2S0_MCLK_PE2_Msk     ))) | I2S0_MCLK_PE2         /*!< Set PE2  function to I2S0_MCLK        */
#define SET_I2S0_MCLK_PE9()      SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~I2S0_MCLK_PE9_Msk     ))) | I2S0_MCLK_PE9         /*!< Set PE9  function to I2S0_MCLK        */
#define SET_I2S0_MCLK_PF9()      SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~I2S0_MCLK_PF9_Msk     ))) | I2S0_MCLK_PF9         /*!< Set PF9  function to I2S0_MCLK        */

/* I3C0 MFP Macros*/
#define SET_I3C0_PUPEN_PA2()     SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~I3C0_PUPEN_PA2_Msk    ))) | I3C0_PUPEN_PA2        /*!< Set PA2  function to I3C0_PUPEN       */
#define SET_I3C0_PUPEN_PC5()     SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~I3C0_PUPEN_PC5_Msk    ))) | I3C0_PUPEN_PC5        /*!< Set PC5  function to I3C0_PUPEN       */
#define SET_I3C0_PUPEN_PC9()     SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~I3C0_PUPEN_PC9_Msk    ))) | I3C0_PUPEN_PC9        /*!< Set PC9  function to I3C0_PUPEN       */
#define SET_I3C0_PUPEN_PH10()    SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~I3C0_PUPEN_PH10_Msk   ))) | I3C0_PUPEN_PH10       /*!< Set PH10 function to I3C0_PUPEN       */
#define SET_I3C0_SCL_PA1()       SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~I3C0_SCL_PA1_Msk      ))) | I3C0_SCL_PA1          /*!< Set PA1  function to I3C0_SCL         */
#define SET_I3C0_SCL_PA5()       SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~I3C0_SCL_PA5_Msk      ))) | I3C0_SCL_PA5          /*!< Set PA5  function to I3C0_SCL         */
#define SET_I3C0_SCL_PB1()       SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~I3C0_SCL_PB1_Msk      ))) | I3C0_SCL_PB1          /*!< Set PB1  function to I3C0_SCL         */
#define SET_I3C0_SCL_PF0()       SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~I3C0_SCL_PF0_Msk      ))) | I3C0_SCL_PF0          /*!< Set PF0  function to I3C0_SCL         */
#define SET_I3C0_SCL_PH8()       SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~I3C0_SCL_PH8_Msk      ))) | I3C0_SCL_PH8          /*!< Set PH8  function to I3C0_SCL         */
#define SET_I3C0_SDA_PA0()       SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~I3C0_SDA_PA0_Msk      ))) | I3C0_SDA_PA0          /*!< Set PA0  function to I3C0_SDA         */
#define SET_I3C0_SDA_PA4()       SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~I3C0_SDA_PA4_Msk      ))) | I3C0_SDA_PA4          /*!< Set PA4  function to I3C0_SDA         */
#define SET_I3C0_SDA_PB0()       SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~I3C0_SDA_PB0_Msk      ))) | I3C0_SDA_PB0          /*!< Set PB0  function to I3C0_SDA         */
#define SET_I3C0_SDA_PF1()       SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~I3C0_SDA_PF1_Msk      ))) | I3C0_SDA_PF1          /*!< Set PF1  function to I3C0_SDA         */
#define SET_I3C0_SDA_PH9()       SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~I3C0_SDA_PH9_Msk      ))) | I3C0_SDA_PH9          /*!< Set PH9  function to I3C0_SDA         */

/* ICE MFP Macros*/
#define SET_ICE_CLK_PF1()        SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~ICE_CLK_PF1_Msk       ))) | ICE_CLK_PF1           /*!< Set PF1  function to ICE_CLK          */
#define SET_ICE_DAT_PF0()        SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~ICE_DAT_PF0_Msk       ))) | ICE_DAT_PF0           /*!< Set PF0  function to ICE_DAT          */

/* INT0 MFP Macros*/
#define SET_INT0_PA6()           SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~INT0_PA6_Msk          ))) | INT0_PA6              /*!< Set PA6  function to INT0             */
#define SET_INT0_PB5()           SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~INT0_PB5_Msk          ))) | INT0_PB5              /*!< Set PB5  function to INT0             */

/* INT1 MFP Macros*/
#define SET_INT1_PA7()           SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~INT1_PA7_Msk          ))) | INT1_PA7              /*!< Set PA7  function to INT1             */
#define SET_INT1_PB4()           SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~INT1_PB4_Msk          ))) | INT1_PB4              /*!< Set PB4  function to INT1             */

/* INT2 MFP Macros*/
#define SET_INT2_PB3()           SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~INT2_PB3_Msk          ))) | INT2_PB3              /*!< Set PB3  function to INT2             */
#define SET_INT2_PC6()           SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~INT2_PC6_Msk          ))) | INT2_PC6              /*!< Set PC6  function to INT2             */

/* INT3 MFP Macros*/
#define SET_INT3_PB2()           SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~INT3_PB2_Msk          ))) | INT3_PB2              /*!< Set PB2  function to INT3             */
#define SET_INT3_PC7()           SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~INT3_PC7_Msk          ))) | INT3_PC7              /*!< Set PC7  function to INT3             */

/* INT4 MFP Macros*/
#define SET_INT4_PA8()           SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~INT4_PA8_Msk          ))) | INT4_PA8              /*!< Set PA8  function to INT4             */
#define SET_INT4_PB6()           SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~INT4_PB6_Msk          ))) | INT4_PB6              /*!< Set PB6  function to INT4             */

/* INT5 MFP Macros*/
#define SET_INT5_PB7()           SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~INT5_PB7_Msk          ))) | INT5_PB7              /*!< Set PB7  function to INT5             */
#define SET_INT5_PD12()          SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~INT5_PD12_Msk         ))) | INT5_PD12             /*!< Set PD12 function to INT5             */

/* INT6 MFP Macros*/
#define SET_INT6_PB8()           SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~INT6_PB8_Msk          ))) | INT6_PB8              /*!< Set PB8  function to INT6             */
#define SET_INT6_PD11()          SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~INT6_PD11_Msk         ))) | INT6_PD11             /*!< Set PD11 function to INT6             */

/* INT7 MFP Macros*/
#define SET_INT7_PB9()           SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~INT7_PB9_Msk          ))) | INT7_PB9              /*!< Set PB9  function to INT7             */
#define SET_INT7_PD10()          SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~INT7_PD10_Msk         ))) | INT7_PD10             /*!< Set PD10 function to INT7             */

/* LLSI0 MFP Macros*/
#define SET_LLSI0_OUT_PB15()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~LLSI0_OUT_PB15_Msk    ))) | LLSI0_OUT_PB15        /*!< Set PB15 function to LLSI0_OUT        */
#define SET_LLSI0_OUT_PC5()      SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~LLSI0_OUT_PC5_Msk     ))) | LLSI0_OUT_PC5         /*!< Set PC5  function to LLSI0_OUT        */

/* LLSI1 MFP Macros*/
#define SET_LLSI1_OUT_PB14()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~LLSI1_OUT_PB14_Msk    ))) | LLSI1_OUT_PB14        /*!< Set PB14 function to LLSI1_OUT        */
#define SET_LLSI1_OUT_PC4()      SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~LLSI1_OUT_PC4_Msk     ))) | LLSI1_OUT_PC4         /*!< Set PC4  function to LLSI1_OUT        */

/* LLSI2 MFP Macros*/
#define SET_LLSI2_OUT_PB13()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~LLSI2_OUT_PB13_Msk    ))) | LLSI2_OUT_PB13        /*!< Set PB13 function to LLSI2_OUT        */
#define SET_LLSI2_OUT_PC3()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~LLSI2_OUT_PC3_Msk     ))) | LLSI2_OUT_PC3         /*!< Set PC3  function to LLSI2_OUT        */

/* LLSI3 MFP Macros*/
#define SET_LLSI3_OUT_PB12()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~LLSI3_OUT_PB12_Msk    ))) | LLSI3_OUT_PB12        /*!< Set PB12 function to LLSI3_OUT        */
#define SET_LLSI3_OUT_PC2()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~LLSI3_OUT_PC2_Msk     ))) | LLSI3_OUT_PC2         /*!< Set PC2  function to LLSI3_OUT        */
#define SET_LLSI3_OUT_PF14()     SYS->GPF_MFP3 = ((SYS->GPF_MFP3 & (~LLSI3_OUT_PF14_Msk    ))) | LLSI3_OUT_PF14        /*!< Set PF14 function to LLSI3_OUT        */

/* LLSI4 MFP Macros*/
#define SET_LLSI4_OUT_PA3()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~LLSI4_OUT_PA3_Msk     ))) | LLSI4_OUT_PA3         /*!< Set PA3  function to LLSI4_OUT        */
#define SET_LLSI4_OUT_PB5()      SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~LLSI4_OUT_PB5_Msk     ))) | LLSI4_OUT_PB5         /*!< Set PB5  function to LLSI4_OUT        */

/* LLSI5 MFP Macros*/
#define SET_LLSI5_OUT_PA2()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~LLSI5_OUT_PA2_Msk     ))) | LLSI5_OUT_PA2         /*!< Set PA2  function to LLSI5_OUT        */
#define SET_LLSI5_OUT_PB4()      SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~LLSI5_OUT_PB4_Msk     ))) | LLSI5_OUT_PB4         /*!< Set PB4  function to LLSI5_OUT        */

/* LLSI6 MFP Macros*/
#define SET_LLSI6_OUT_PA1()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~LLSI6_OUT_PA1_Msk     ))) | LLSI6_OUT_PA1         /*!< Set PA1  function to LLSI6_OUT        */
#define SET_LLSI6_OUT_PB3()      SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~LLSI6_OUT_PB3_Msk     ))) | LLSI6_OUT_PB3         /*!< Set PB3  function to LLSI6_OUT        */

/* LLSI7 MFP Macros*/
#define SET_LLSI7_OUT_PA0()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~LLSI7_OUT_PA0_Msk     ))) | LLSI7_OUT_PA0         /*!< Set PA0  function to LLSI7_OUT        */
#define SET_LLSI7_OUT_PB2()      SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~LLSI7_OUT_PB2_Msk     ))) | LLSI7_OUT_PB2         /*!< Set PB2  function to LLSI7_OUT        */
#define SET_LLSI7_OUT_PC2()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~LLSI7_OUT_PC2_Msk     ))) | LLSI7_OUT_PC2         /*!< Set PC2  function to LLSI7_OUT        */

/* LLSI8 MFP Macros*/
#define SET_LLSI8_OUT_PB11()     SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~LLSI8_OUT_PB11_Msk    ))) | LLSI8_OUT_PB11        /*!< Set PB11 function to LLSI8_OUT        */
#define SET_LLSI8_OUT_PC1()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~LLSI8_OUT_PC1_Msk     ))) | LLSI8_OUT_PC1         /*!< Set PC1  function to LLSI8_OUT        */

/* LLSI9 MFP Macros*/
#define SET_LLSI9_OUT_PB10()     SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~LLSI9_OUT_PB10_Msk    ))) | LLSI9_OUT_PB10        /*!< Set PB10 function to LLSI9_OUT        */
#define SET_LLSI9_OUT_PC0()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~LLSI9_OUT_PC0_Msk     ))) | LLSI9_OUT_PC0         /*!< Set PC0  function to LLSI9_OUT        */

/* QSPI0 MFP Macros*/
#define SET_QSPI0_CLK_PA2()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~QSPI0_CLK_PA2_Msk     ))) | QSPI0_CLK_PA2         /*!< Set PA2  function to QSPI0_CLK        */
#define SET_QSPI0_CLK_PB12()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~QSPI0_CLK_PB12_Msk    ))) | QSPI0_CLK_PB12        /*!< Set PB12 function to QSPI0_CLK        */
#define SET_QSPI0_CLK_PC2()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~QSPI0_CLK_PC2_Msk     ))) | QSPI0_CLK_PC2         /*!< Set PC2  function to QSPI0_CLK        */
#define SET_QSPI0_CLK_PC14()     SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~QSPI0_CLK_PC14_Msk    ))) | QSPI0_CLK_PC14        /*!< Set PC14 function to QSPI0_CLK        */
#define SET_QSPI0_CLK_PF2()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~QSPI0_CLK_PF2_Msk     ))) | QSPI0_CLK_PF2         /*!< Set PF2  function to QSPI0_CLK        */
#define SET_QSPI0_CLK_PH8()      SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~QSPI0_CLK_PH8_Msk     ))) | QSPI0_CLK_PH8         /*!< Set PH8  function to QSPI0_CLK        */
#define SET_QSPI0_MISO0_PA1()    SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~QSPI0_MISO0_PA1_Msk   ))) | QSPI0_MISO0_PA1       /*!< Set PA1  function to QSPI0_MISO0      */
#define SET_QSPI0_MISO0_PC1()    SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~QSPI0_MISO0_PC1_Msk   ))) | QSPI0_MISO0_PC1       /*!< Set PC1  function to QSPI0_MISO0      */
#define SET_QSPI0_MISO0_PE1()    SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~QSPI0_MISO0_PE1_Msk   ))) | QSPI0_MISO0_PE1       /*!< Set PE1  function to QSPI0_MISO0      */
#define SET_QSPI0_MISO0_PE7()    SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~QSPI0_MISO0_PE7_Msk   ))) | QSPI0_MISO0_PE7       /*!< Set PE7  function to QSPI0_MISO0      */
#define SET_QSPI0_MISO1_PA5()    SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~QSPI0_MISO1_PA5_Msk   ))) | QSPI0_MISO1_PA5       /*!< Set PA5  function to QSPI0_MISO1      */
#define SET_QSPI0_MISO1_PB1()    SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~QSPI0_MISO1_PB1_Msk   ))) | QSPI0_MISO1_PB1       /*!< Set PB1  function to QSPI0_MISO1      */
#define SET_QSPI0_MISO1_PC5()    SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~QSPI0_MISO1_PC5_Msk   ))) | QSPI0_MISO1_PC5       /*!< Set PC5  function to QSPI0_MISO1      */
#define SET_QSPI0_MISO1_PH10()   SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~QSPI0_MISO1_PH10_Msk  ))) | QSPI0_MISO1_PH10      /*!< Set PH10 function to QSPI0_MISO1      */
#define SET_QSPI0_MOSI0_PA0()    SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~QSPI0_MOSI0_PA0_Msk   ))) | QSPI0_MOSI0_PA0       /*!< Set PA0  function to QSPI0_MOSI0      */
#define SET_QSPI0_MOSI0_PC0()    SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~QSPI0_MOSI0_PC0_Msk   ))) | QSPI0_MOSI0_PC0       /*!< Set PC0  function to QSPI0_MOSI0      */
#define SET_QSPI0_MOSI0_PE0()    SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~QSPI0_MOSI0_PE0_Msk   ))) | QSPI0_MOSI0_PE0       /*!< Set PE0  function to QSPI0_MOSI0      */
#define SET_QSPI0_MOSI0_PE6()    SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~QSPI0_MOSI0_PE6_Msk   ))) | QSPI0_MOSI0_PE6       /*!< Set PE6  function to QSPI0_MOSI0      */
#define SET_QSPI0_MOSI1_PA4()    SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~QSPI0_MOSI1_PA4_Msk   ))) | QSPI0_MOSI1_PA4       /*!< Set PA4  function to QSPI0_MOSI1      */
#define SET_QSPI0_MOSI1_PB0()    SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~QSPI0_MOSI1_PB0_Msk   ))) | QSPI0_MOSI1_PB0       /*!< Set PB0  function to QSPI0_MOSI1      */
#define SET_QSPI0_MOSI1_PC4()    SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~QSPI0_MOSI1_PC4_Msk   ))) | QSPI0_MOSI1_PC4       /*!< Set PC4  function to QSPI0_MOSI1      */
#define SET_QSPI0_MOSI1_PH11()   SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~QSPI0_MOSI1_PH11_Msk  ))) | QSPI0_MOSI1_PH11      /*!< Set PH11 function to QSPI0_MOSI1      */
#define SET_QSPI0_SS_PA3()       SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~QSPI0_SS_PA3_Msk      ))) | QSPI0_SS_PA3          /*!< Set PA3  function to QSPI0_SS         */
#define SET_QSPI0_SS_PC3()       SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~QSPI0_SS_PC3_Msk      ))) | QSPI0_SS_PC3          /*!< Set PC3  function to QSPI0_SS         */
#define SET_QSPI0_SS_PH9()       SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~QSPI0_SS_PH9_Msk      ))) | QSPI0_SS_PH9          /*!< Set PH9  function to QSPI0_SS         */

/* SD0 MFP Macros*/
#define SET_SD0_CLK_PB1()        SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SD0_CLK_PB1_Msk       ))) | SD0_CLK_PB1           /*!< Set PB1  function to SD0_CLK          */
#define SET_SD0_CLK_PE6()        SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SD0_CLK_PE6_Msk       ))) | SD0_CLK_PE6           /*!< Set PE6  function to SD0_CLK          */
#define SET_SD0_CMD_PB0()        SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SD0_CMD_PB0_Msk       ))) | SD0_CMD_PB0           /*!< Set PB0  function to SD0_CMD          */
#define SET_SD0_CMD_PE7()        SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SD0_CMD_PE7_Msk       ))) | SD0_CMD_PE7           /*!< Set PE7  function to SD0_CMD          */
#define SET_SD0_DAT0_PB2()       SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SD0_DAT0_PB2_Msk      ))) | SD0_DAT0_PB2          /*!< Set PB2  function to SD0_DAT0         */
#define SET_SD0_DAT0_PE2()       SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SD0_DAT0_PE2_Msk      ))) | SD0_DAT0_PE2          /*!< Set PE2  function to SD0_DAT0         */
#define SET_SD0_DAT1_PB3()       SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SD0_DAT1_PB3_Msk      ))) | SD0_DAT1_PB3          /*!< Set PB3  function to SD0_DAT1         */
#define SET_SD0_DAT1_PE3()       SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SD0_DAT1_PE3_Msk      ))) | SD0_DAT1_PE3          /*!< Set PE3  function to SD0_DAT1         */
#define SET_SD0_DAT2_PB4()       SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SD0_DAT2_PB4_Msk      ))) | SD0_DAT2_PB4          /*!< Set PB4  function to SD0_DAT2         */
#define SET_SD0_DAT2_PE4()       SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SD0_DAT2_PE4_Msk      ))) | SD0_DAT2_PE4          /*!< Set PE4  function to SD0_DAT2         */
#define SET_SD0_DAT3_PB5()       SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SD0_DAT3_PB5_Msk      ))) | SD0_DAT3_PB5          /*!< Set PB5  function to SD0_DAT3         */
#define SET_SD0_DAT3_PE5()       SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SD0_DAT3_PE5_Msk      ))) | SD0_DAT3_PE5          /*!< Set PE5  function to SD0_DAT3         */
#define SET_SD0_nCD_PB12()       SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SD0_nCD_PB12_Msk      ))) | SD0_nCD_PB12          /*!< Set PB12 function to SD0_nCD          */
#define SET_SD0_nCD_PD13()       SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SD0_nCD_PD13_Msk      ))) | SD0_nCD_PD13          /*!< Set PD13 function to SD0_nCD          */

/* PDCI MFP Macros*/
#define SET_PDCI_G0_RX0_PC6()    SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~PDCI_G0_RX0_PC6_Msk   ))) | PDCI_G0_RX0_PC6       /*!< Set PC6  function to PDCI_G0_RX0      */
#define SET_PDCI_G0_RX0_PC14()   SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~PDCI_G0_RX0_PC14_Msk  ))) | PDCI_G0_RX0_PC14      /*!< Set PC14 function to PDCI_G0_RX0      */
#define SET_PDCI_G0_RX1_PB1()    SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~PDCI_G0_RX1_PB1_Msk   ))) | PDCI_G0_RX1_PB1       /*!< Set PB1  function to PDCI_G0_RX1      */
#define SET_PDCI_G0_CLK_PB1()    SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~PDCI_G0_CLK_PB1_Msk   ))) | PDCI_G0_CLK_PB1       /*!< Set PB1  function to PDCI_G0_CLK      */
#define SET_PDCI_G0_CLK_PC6()    SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~PDCI_G0_CLK_PC6_Msk   ))) | PDCI_G0_CLK_PC6       /*!< Set PC6  function to PDCI_G0_CLK      */
#define SET_PDCI_G0_TX0_PB5()    SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~PDCI_G0_TX0_PB5_Msk   ))) | PDCI_G0_TX0_PB5       /*!< Set PB5  function to PDCI_G0_TX0      */
#define SET_PDCI_G0_TX2_PB3()    SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~PDCI_G0_TX2_PB3_Msk   ))) | PDCI_G0_TX2_PB3       /*!< Set PB3  function to PDCI_G0_TX2      */
#define SET_PDCI_G0_TX1_PB4()    SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~PDCI_G0_TX1_PB4_Msk   ))) | PDCI_G0_TX1_PB4       /*!< Set PB4  function to PDCI_G0_TX1      */
#define SET_PDCI_G0_TX3_PB2()    SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~PDCI_G0_TX3_PB2_Msk   ))) | PDCI_G0_TX3_PB2       /*!< Set PB2  function to PDCI_G0_TX3      */
#define SET_PDCI_G1_TX0_PB0()    SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~PDCI_G1_TX0_PB0_Msk   ))) | PDCI_G1_TX0_PB0       /*!< Set PB0  function to PDCI_G1_TX0      */
#define SET_PDCI_G1_TX3_PA9()    SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~PDCI_G1_TX3_PA9_Msk   ))) | PDCI_G1_TX3_PA9       /*!< Set PA9  function to PDCI_G1_TX3      */
#define SET_PDCI_G1_CLK_PA8()    SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~PDCI_G1_CLK_PA8_Msk   ))) | PDCI_G1_CLK_PA8       /*!< Set PA8  function to PDCI_G1_CLK      */
#define SET_PDCI_G1_TX2_PA10()   SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~PDCI_G1_TX2_PA10_Msk  ))) | PDCI_G1_TX2_PA10      /*!< Set PA10 function to PDCI_G1_TX2      */
#define SET_PDCI_G1_RX0_PB15()   SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~PDCI_G1_RX0_PB15_Msk  ))) | PDCI_G1_RX0_PB15      /*!< Set PB15 function to PDCI_G1_RX0      */
#define SET_PDCI_G1_RX1_PA8()    SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~PDCI_G1_RX1_PA8_Msk   ))) | PDCI_G1_RX1_PA8       /*!< Set PA8  function to PDCI_G1_RX1      */
#define SET_PDCI_G2_CLK_PF15()   SYS->GPF_MFP3 = ((SYS->GPF_MFP3 & (~PDCI_G2_CLK_PF15_Msk  ))) | PDCI_G2_CLK_PF15      /*!< Set PF15 function to PDCI_G2_CLK      */
#define SET_PDCI_G2_TX3_PA6()    SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~PDCI_G2_TX3_PA6_Msk   ))) | PDCI_G2_TX3_PA6       /*!< Set PA6  function to PDCI_G2_TX3      */
#define SET_PDCI_G2_TX3_PF2()    SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~PDCI_G2_TX3_PF2_Msk   ))) | PDCI_G2_TX3_PF2       /*!< Set PF2  function to PDCI_G2_TX3      */
#define SET_PDCI_G2_RX0_PB14()   SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~PDCI_G2_RX0_PB14_Msk  ))) | PDCI_G2_RX0_PB14      /*!< Set PB14 function to PDCI_G2_RX0      */
#define SET_PDCI_G2_TX1_PF4()    SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~PDCI_G2_TX1_PF4_Msk   ))) | PDCI_G2_TX1_PF4       /*!< Set PF4  function to PDCI_G2_TX1      */
#define SET_PDCI_G2_RX1_PF15()   SYS->GPF_MFP3 = ((SYS->GPF_MFP3 & (~PDCI_G2_RX1_PF15_Msk  ))) | PDCI_G2_RX1_PF15      /*!< Set PF15 function to PDCI_G2_RX1      */
#define SET_PDCI_G2_TX2_PA7()    SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~PDCI_G2_TX2_PA7_Msk   ))) | PDCI_G2_TX2_PA7       /*!< Set PA7  function to PDCI_G2_TX2      */
#define SET_PDCI_G2_TX2_PF3()    SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~PDCI_G2_TX2_PF3_Msk   ))) | PDCI_G2_TX2_PF3       /*!< Set PF3  function to PDCI_G2_TX2      */
#define SET_PDCI_G2_TX0_PF5()    SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~PDCI_G2_TX0_PF5_Msk   ))) | PDCI_G2_TX0_PF5       /*!< Set PF5  function to PDCI_G2_TX0      */
#define SET_PDCI_G3_TX0_PA4()    SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~PDCI_G3_TX0_PA4_Msk   ))) | PDCI_G3_TX0_PA4       /*!< Set PA4  function to PDCI_G3_TX0      */
#define SET_PDCI_G3_TX0_PB10()   SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~PDCI_G3_TX0_PB10_Msk  ))) | PDCI_G3_TX0_PB10      /*!< Set PB10 function to PDCI_G3_TX0      */
#define SET_PDCI_G3_RX1_PA5()    SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~PDCI_G3_RX1_PA5_Msk   ))) | PDCI_G3_RX1_PA5       /*!< Set PA5  function to PDCI_G3_RX1      */
#define SET_PDCI_G3_RX1_PB8()    SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~PDCI_G3_RX1_PB8_Msk   ))) | PDCI_G3_RX1_PB8       /*!< Set PB8  function to PDCI_G3_RX1      */
#define SET_PDCI_G3_TX1_PA3()    SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~PDCI_G3_TX1_PA3_Msk   ))) | PDCI_G3_TX1_PA3       /*!< Set PA3  function to PDCI_G3_TX1      */
#define SET_PDCI_G3_TX1_PB9()    SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~PDCI_G3_TX1_PB9_Msk   ))) | PDCI_G3_TX1_PB9       /*!< Set PB9  function to PDCI_G3_TX1      */
#define SET_PDCI_G3_CLK_PA5()    SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~PDCI_G3_CLK_PA5_Msk   ))) | PDCI_G3_CLK_PA5       /*!< Set PA5  function to PDCI_G3_CLK      */
#define SET_PDCI_G3_CLK_PB8()    SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~PDCI_G3_CLK_PB8_Msk   ))) | PDCI_G3_CLK_PB8       /*!< Set PB8  function to PDCI_G3_CLK      */
#define SET_PDCI_G3_TX3_PA1()    SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~PDCI_G3_TX3_PA1_Msk   ))) | PDCI_G3_TX3_PA1       /*!< Set PA1  function to PDCI_G3_TX3      */
#define SET_PDCI_G3_TX3_PB7()    SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~PDCI_G3_TX3_PB7_Msk   ))) | PDCI_G3_TX3_PB7       /*!< Set PB7  function to PDCI_G3_TX3      */
#define SET_PDCI_G3_RX0_PB11()   SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~PDCI_G3_RX0_PB11_Msk  ))) | PDCI_G3_RX0_PB11      /*!< Set PB11 function to PDCI_G3_RX0      */
#define SET_PDCI_G3_RX0_PB13()   SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~PDCI_G3_RX0_PB13_Msk  ))) | PDCI_G3_RX0_PB13      /*!< Set PB13 function to PDCI_G3_RX0      */
#define SET_PDCI_G3_TX2_PA2()    SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~PDCI_G3_TX2_PA2_Msk   ))) | PDCI_G3_TX2_PA2       /*!< Set PA2  function to PDCI_G3_TX2      */
#define SET_PDCI_G3_TX2_PB6()    SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~PDCI_G3_TX2_PB6_Msk   ))) | PDCI_G3_TX2_PB6       /*!< Set PB6  function to PDCI_G3_TX2      */
#define SET_PDCI_G4_TX0_PC5()    SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~PDCI_G4_TX0_PC5_Msk   ))) | PDCI_G4_TX0_PC5       /*!< Set PC5  function to PDCI_G4_TX0      */
#define SET_PDCI_G4_TX1_PC4()    SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~PDCI_G4_TX1_PC4_Msk   ))) | PDCI_G4_TX1_PC4       /*!< Set PC4  function to PDCI_G4_TX1      */
#define SET_PDCI_G4_RX0_PF6()    SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~PDCI_G4_RX0_PF6_Msk   ))) | PDCI_G4_RX0_PF6       /*!< Set PF6  function to PDCI_G4_RX0      */
#define SET_PDCI_G4_RX1_PC1()    SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~PDCI_G4_RX1_PC1_Msk   ))) | PDCI_G4_RX1_PC1       /*!< Set PC1  function to PDCI_G4_RX1      */
#define SET_PDCI_G4_CLK_PC1()    SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~PDCI_G4_CLK_PC1_Msk   ))) | PDCI_G4_CLK_PC1       /*!< Set PC1  function to PDCI_G4_CLK      */
#define SET_PDCI_G4_TX2_PC3()    SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~PDCI_G4_TX2_PC3_Msk   ))) | PDCI_G4_TX2_PC3       /*!< Set PC3  function to PDCI_G4_TX2      */
#define SET_PDCI_G4_TX3_PC2()    SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~PDCI_G4_TX3_PC2_Msk   ))) | PDCI_G4_TX3_PC2       /*!< Set PC2  function to PDCI_G4_TX3      */
#define SET_PDCI_G5_TX2_PA14()   SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~PDCI_G5_TX2_PA14_Msk  ))) | PDCI_G5_TX2_PA14      /*!< Set PA14 function to PDCI_G5_TX2      */
#define SET_PDCI_G5_RX0_PF14()   SYS->GPF_MFP3 = ((SYS->GPF_MFP3 & (~PDCI_G5_RX0_PF14_Msk  ))) | PDCI_G5_RX0_PF14      /*!< Set PF14 function to PDCI_G5_RX0      */
#define SET_PDCI_G5_TX1_PA13()   SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~PDCI_G5_TX1_PA13_Msk  ))) | PDCI_G5_TX1_PA13      /*!< Set PA13 function to PDCI_G5_TX1      */
#define SET_PDCI_G5_RX1_PC0()    SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~PDCI_G5_RX1_PC0_Msk   ))) | PDCI_G5_RX1_PC0       /*!< Set PC0  function to PDCI_G5_RX1      */
#define SET_PDCI_G5_CLK_PC0()    SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~PDCI_G5_CLK_PC0_Msk   ))) | PDCI_G5_CLK_PC0       /*!< Set PC0  function to PDCI_G5_CLK      */
#define SET_PDCI_G5_TX0_PA12()   SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~PDCI_G5_TX0_PA12_Msk  ))) | PDCI_G5_TX0_PA12      /*!< Set PA12 function to PDCI_G5_TX0      */
#define SET_PDCI_G5_TX3_PA15()   SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~PDCI_G5_TX3_PA15_Msk  ))) | PDCI_G5_TX3_PA15      /*!< Set PA15 function to PDCI_G5_TX3      */

/* SPI0 MFP Macros*/
#define SET_QSPI0_CLK_PA2()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~QSPI0_CLK_PA2_Msk     ))) | QSPI0_CLK_PA2         /*!< Set PA2  function to QSPI0_CLK        */
#define SET_QSPI0_CLK_PB12()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~QSPI0_CLK_PB12_Msk    ))) | QSPI0_CLK_PB12        /*!< Set PB12 function to QSPI0_CLK        */
#define SET_QSPI0_CLK_PC2()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~QSPI0_CLK_PC2_Msk     ))) | QSPI0_CLK_PC2         /*!< Set PC2  function to QSPI0_CLK        */
#define SET_QSPI0_CLK_PC14()     SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~QSPI0_CLK_PC14_Msk    ))) | QSPI0_CLK_PC14        /*!< Set PC14 function to QSPI0_CLK        */
#define SET_QSPI0_CLK_PF2()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~QSPI0_CLK_PF2_Msk     ))) | QSPI0_CLK_PF2         /*!< Set PF2  function to QSPI0_CLK        */
#define SET_QSPI0_CLK_PH8()      SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~QSPI0_CLK_PH8_Msk     ))) | QSPI0_CLK_PH8         /*!< Set PH8  function to QSPI0_CLK        */
#define SET_QSPI0_MISO0_PA1()    SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~QSPI0_MISO0_PA1_Msk   ))) | QSPI0_MISO0_PA1       /*!< Set PA1  function to QSPI0_MISO0      */
#define SET_QSPI0_MISO0_PC1()    SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~QSPI0_MISO0_PC1_Msk   ))) | QSPI0_MISO0_PC1       /*!< Set PC1  function to QSPI0_MISO0      */
#define SET_QSPI0_MISO0_PE1()    SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~QSPI0_MISO0_PE1_Msk   ))) | QSPI0_MISO0_PE1       /*!< Set PE1  function to QSPI0_MISO0      */
#define SET_QSPI0_MISO0_PE7()    SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~QSPI0_MISO0_PE7_Msk   ))) | QSPI0_MISO0_PE7       /*!< Set PE7  function to QSPI0_MISO0      */
#define SET_QSPI0_MISO1_PA5()    SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~QSPI0_MISO1_PA5_Msk   ))) | QSPI0_MISO1_PA5       /*!< Set PA5  function to QSPI0_MISO1      */
#define SET_QSPI0_MISO1_PB1()    SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~QSPI0_MISO1_PB1_Msk   ))) | QSPI0_MISO1_PB1       /*!< Set PB1  function to QSPI0_MISO1      */
#define SET_QSPI0_MISO1_PC5()    SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~QSPI0_MISO1_PC5_Msk   ))) | QSPI0_MISO1_PC5       /*!< Set PC5  function to QSPI0_MISO1      */
#define SET_QSPI0_MISO1_PH10()   SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~QSPI0_MISO1_PH10_Msk  ))) | QSPI0_MISO1_PH10      /*!< Set PH10 function to QSPI0_MISO1      */
#define SET_QSPI0_MOSI0_PA0()    SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~QSPI0_MOSI0_PA0_Msk   ))) | QSPI0_MOSI0_PA0       /*!< Set PA0  function to QSPI0_MOSI0      */
#define SET_QSPI0_MOSI0_PC0()    SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~QSPI0_MOSI0_PC0_Msk   ))) | QSPI0_MOSI0_PC0       /*!< Set PC0  function to QSPI0_MOSI0      */
#define SET_QSPI0_MOSI0_PE0()    SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~QSPI0_MOSI0_PE0_Msk   ))) | QSPI0_MOSI0_PE0       /*!< Set PE0  function to QSPI0_MOSI0      */
#define SET_QSPI0_MOSI0_PE6()    SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~QSPI0_MOSI0_PE6_Msk   ))) | QSPI0_MOSI0_PE6       /*!< Set PE6  function to QSPI0_MOSI0      */
#define SET_QSPI0_MOSI1_PA4()    SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~QSPI0_MOSI1_PA4_Msk   ))) | QSPI0_MOSI1_PA4       /*!< Set PA4  function to QSPI0_MOSI1      */
#define SET_QSPI0_MOSI1_PB0()    SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~QSPI0_MOSI1_PB0_Msk   ))) | QSPI0_MOSI1_PB0       /*!< Set PB0  function to QSPI0_MOSI1      */
#define SET_QSPI0_MOSI1_PC4()    SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~QSPI0_MOSI1_PC4_Msk   ))) | QSPI0_MOSI1_PC4       /*!< Set PC4  function to QSPI0_MOSI1      */
#define SET_QSPI0_MOSI1_PH11()   SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~QSPI0_MOSI1_PH11_Msk  ))) | QSPI0_MOSI1_PH11      /*!< Set PH11 function to QSPI0_MOSI1      */
#define SET_QSPI0_SS_PA3()       SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~QSPI0_SS_PA3_Msk      ))) | QSPI0_SS_PA3          /*!< Set PA3  function to QSPI0_SS         */
#define SET_QSPI0_SS_PC3()       SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~QSPI0_SS_PC3_Msk      ))) | QSPI0_SS_PC3          /*!< Set PC3  function to QSPI0_SS         */
#define SET_QSPI0_SS_PH9()       SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~QSPI0_SS_PH9_Msk      ))) | QSPI0_SS_PH9          /*!< Set PH9  function to QSPI0_SS         */
#define SET_SPI0_CLK_PA2()       SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SPI0_CLK_PA2_Msk      ))) | SPI0_CLK_PA2          /*!< Set PA2  function to SPI0_CLK         */
#define SET_SPI0_CLK_PB6()       SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SPI0_CLK_PB6_Msk      ))) | SPI0_CLK_PB6          /*!< Set PB6  function to SPI0_CLK         */
#define SET_SPI0_CLK_PB14()      SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SPI0_CLK_PB14_Msk     ))) | SPI0_CLK_PB14         /*!< Set PB14 function to SPI0_CLK         */
#define SET_SPI0_CLK_PD2()       SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SPI0_CLK_PD2_Msk      ))) | SPI0_CLK_PD2          /*!< Set PD2  function to SPI0_CLK         */
#define SET_SPI0_CLK_PF0()       SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SPI0_CLK_PF0_Msk      ))) | SPI0_CLK_PF0          /*!< Set PF0  function to SPI0_CLK         */
#define SET_SPI0_CLK_PF8()       SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SPI0_CLK_PF8_Msk      ))) | SPI0_CLK_PF8          /*!< Set PF8  function to SPI0_CLK         */
#define SET_SPI0_I2SMCLK_PA4()   SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SPI0_I2SMCLK_PA4_Msk  ))) | SPI0_I2SMCLK_PA4      /*!< Set PA4  function to SPI0_I2SMCLK     */
#define SET_SPI0_I2SMCLK_PB0()   SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SPI0_I2SMCLK_PB0_Msk  ))) | SPI0_I2SMCLK_PB0      /*!< Set PB0  function to SPI0_I2SMCLK     */
#define SET_SPI0_I2SMCLK_PB11()  SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SPI0_I2SMCLK_PB11_Msk ))) | SPI0_I2SMCLK_PB11     /*!< Set PB11 function to SPI0_I2SMCLK     */
#define SET_SPI0_I2SMCLK_PB12()  SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SPI0_I2SMCLK_PB12_Msk ))) | SPI0_I2SMCLK_PB12     /*!< Set PB12 function to SPI0_I2SMCLK     */
#define SET_SPI0_I2SMCLK_PC14()  SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SPI0_I2SMCLK_PC14_Msk ))) | SPI0_I2SMCLK_PC14     /*!< Set PC14 function to SPI0_I2SMCLK     */
#define SET_SPI0_I2SMCLK_PD13()  SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SPI0_I2SMCLK_PD13_Msk ))) | SPI0_I2SMCLK_PD13     /*!< Set PD13 function to SPI0_I2SMCLK     */
#define SET_SPI0_I2SMCLK_PD14()  SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SPI0_I2SMCLK_PD14_Msk ))) | SPI0_I2SMCLK_PD14     /*!< Set PD14 function to SPI0_I2SMCLK     */
#define SET_SPI0_I2SMCLK_PF10()  SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SPI0_I2SMCLK_PF10_Msk ))) | SPI0_I2SMCLK_PF10     /*!< Set PF10 function to SPI0_I2SMCLK     */
#define SET_SPI0_MISO_PA1()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SPI0_MISO_PA1_Msk     ))) | SPI0_MISO_PA1         /*!< Set PA1  function to SPI0_MISO        */
#define SET_SPI0_MISO_PB13()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SPI0_MISO_PB13_Msk    ))) | SPI0_MISO_PB13        /*!< Set PB13 function to SPI0_MISO        */
#define SET_SPI0_MISO_PD1()      SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SPI0_MISO_PD1_Msk     ))) | SPI0_MISO_PD1         /*!< Set PD1  function to SPI0_MISO        */
#define SET_SPI0_MISO_PF7()      SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SPI0_MISO_PF7_Msk     ))) | SPI0_MISO_PF7         /*!< Set PF7  function to SPI0_MISO        */
#define SET_SPI0_MOSI_PA0()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SPI0_MOSI_PA0_Msk     ))) | SPI0_MOSI_PA0         /*!< Set PA0  function to SPI0_MOSI        */
#define SET_SPI0_MOSI_PB12()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SPI0_MOSI_PB12_Msk    ))) | SPI0_MOSI_PB12        /*!< Set PB12 function to SPI0_MOSI        */
#define SET_SPI0_MOSI_PD0()      SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SPI0_MOSI_PD0_Msk     ))) | SPI0_MOSI_PD0         /*!< Set PD0  function to SPI0_MOSI        */
#define SET_SPI0_MOSI_PF6()      SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SPI0_MOSI_PF6_Msk     ))) | SPI0_MOSI_PF6         /*!< Set PF6  function to SPI0_MOSI        */
#define SET_SPI0_SS_PA3()        SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SPI0_SS_PA3_Msk       ))) | SPI0_SS_PA3           /*!< Set PA3  function to SPI0_SS          */
#define SET_SPI0_SS_PB7()        SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SPI0_SS_PB7_Msk       ))) | SPI0_SS_PB7           /*!< Set PB7  function to SPI0_SS          */
#define SET_SPI0_SS_PB15()       SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SPI0_SS_PB15_Msk      ))) | SPI0_SS_PB15          /*!< Set PB15 function to SPI0_SS          */
#define SET_SPI0_SS_PD3()        SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SPI0_SS_PD3_Msk       ))) | SPI0_SS_PD3           /*!< Set PD3  function to SPI0_SS          */
#define SET_SPI0_SS_PF1()        SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SPI0_SS_PF1_Msk       ))) | SPI0_SS_PF1           /*!< Set PF1  function to SPI0_SS          */
#define SET_SPI0_SS_PF9()        SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SPI0_SS_PF9_Msk       ))) | SPI0_SS_PF9           /*!< Set PF9  function to SPI0_SS          */

/* SPI1 MFP Macros*/
#define SET_SPI1_CLK_PA7()       SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SPI1_CLK_PA7_Msk      ))) | SPI1_CLK_PA7          /*!< Set PA7  function to SPI1_CLK         */
#define SET_SPI1_CLK_PB3()       SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SPI1_CLK_PB3_Msk      ))) | SPI1_CLK_PB3          /*!< Set PB3  function to SPI1_CLK         */
#define SET_SPI1_CLK_PC1()       SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SPI1_CLK_PC1_Msk      ))) | SPI1_CLK_PC1          /*!< Set PC1  function to SPI1_CLK         */
#define SET_SPI1_CLK_PD5()       SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SPI1_CLK_PD5_Msk      ))) | SPI1_CLK_PD5          /*!< Set PD5  function to SPI1_CLK         */
#define SET_SPI1_CLK_PF3()       SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SPI1_CLK_PF3_Msk      ))) | SPI1_CLK_PF3          /*!< Set PF3  function to SPI1_CLK         */
#define SET_SPI1_CLK_PH6()       SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SPI1_CLK_PH6_Msk      ))) | SPI1_CLK_PH6          /*!< Set PH6  function to SPI1_CLK         */
#define SET_SPI1_CLK_PH8()       SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SPI1_CLK_PH8_Msk      ))) | SPI1_CLK_PH8          /*!< Set PH8  function to SPI1_CLK         */
#define SET_SPI1_I2SMCLK_PA5()   SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SPI1_I2SMCLK_PA5_Msk  ))) | SPI1_I2SMCLK_PA5      /*!< Set PA5  function to SPI1_I2SMCLK     */
#define SET_SPI1_I2SMCLK_PB1()   SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SPI1_I2SMCLK_PB1_Msk  ))) | SPI1_I2SMCLK_PB1      /*!< Set PB1  function to SPI1_I2SMCLK     */
#define SET_SPI1_I2SMCLK_PC4()   SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SPI1_I2SMCLK_PC4_Msk  ))) | SPI1_I2SMCLK_PC4      /*!< Set PC4  function to SPI1_I2SMCLK     */
#define SET_SPI1_I2SMCLK_PD13()  SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SPI1_I2SMCLK_PD13_Msk ))) | SPI1_I2SMCLK_PD13     /*!< Set PD13 function to SPI1_I2SMCLK     */
#define SET_SPI1_I2SMCLK_PH10()  SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SPI1_I2SMCLK_PH10_Msk ))) | SPI1_I2SMCLK_PH10     /*!< Set PH10 function to SPI1_I2SMCLK     */
#define SET_SPI1_MISO_PA5()      SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SPI1_MISO_PA5_Msk     ))) | SPI1_MISO_PA5         /*!< Set PA5  function to SPI1_MISO        */
#define SET_SPI1_MISO_PB5()      SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SPI1_MISO_PB5_Msk     ))) | SPI1_MISO_PB5         /*!< Set PB5  function to SPI1_MISO        */
#define SET_SPI1_MISO_PC3()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SPI1_MISO_PC3_Msk     ))) | SPI1_MISO_PC3         /*!< Set PC3  function to SPI1_MISO        */
#define SET_SPI1_MISO_PC7()      SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SPI1_MISO_PC7_Msk     ))) | SPI1_MISO_PC7         /*!< Set PC7  function to SPI1_MISO        */
#define SET_SPI1_MOSI_PA4()      SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SPI1_MOSI_PA4_Msk     ))) | SPI1_MOSI_PA4         /*!< Set PA4  function to SPI1_MOSI        */
#define SET_SPI1_MISO_PD7()      SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SPI1_MISO_PD7_Msk     ))) | SPI1_MISO_PD7         /*!< Set PD7  function to SPI1_MISO        */
#define SET_SPI1_MISO_PE1()      SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SPI1_MISO_PE1_Msk     ))) | SPI1_MISO_PE1         /*!< Set PE1  function to SPI1_MISO        */
#define SET_SPI1_MISO_PE5()      SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SPI1_MISO_PE5_Msk     ))) | SPI1_MISO_PE5         /*!< Set PE5  function to SPI1_MISO        */
#define SET_SPI1_MISO_PH4()      SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SPI1_MISO_PH4_Msk     ))) | SPI1_MISO_PH4         /*!< Set PH4  function to SPI1_MISO        */
#define SET_SPI1_MOSI_PB4()      SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SPI1_MOSI_PB4_Msk     ))) | SPI1_MOSI_PB4         /*!< Set PB4  function to SPI1_MOSI        */
#define SET_SPI1_MOSI_PC2()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SPI1_MOSI_PC2_Msk     ))) | SPI1_MOSI_PC2         /*!< Set PC2  function to SPI1_MOSI        */
#define SET_SPI1_MOSI_PC6()      SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SPI1_MOSI_PC6_Msk     ))) | SPI1_MOSI_PC6         /*!< Set PC6  function to SPI1_MOSI        */
#define SET_SPI1_MOSI_PD6()      SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SPI1_MOSI_PD6_Msk     ))) | SPI1_MOSI_PD6         /*!< Set PD6  function to SPI1_MOSI        */
#define SET_SPI1_MOSI_PE0()      SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SPI1_MOSI_PE0_Msk     ))) | SPI1_MOSI_PE0         /*!< Set PE0  function to SPI1_MOSI        */
#define SET_SPI1_MOSI_PE4()      SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SPI1_MOSI_PE4_Msk     ))) | SPI1_MOSI_PE4         /*!< Set PE4  function to SPI1_MOSI        */
#define SET_SPI1_MOSI_PH5()      SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SPI1_MOSI_PH5_Msk     ))) | SPI1_MOSI_PH5         /*!< Set PH5  function to SPI1_MOSI        */
#define SET_SPI1_SS_PA6()        SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SPI1_SS_PA6_Msk       ))) | SPI1_SS_PA6           /*!< Set PA6  function to SPI1_SS          */
#define SET_SPI1_SS_PB2()        SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SPI1_SS_PB2_Msk       ))) | SPI1_SS_PB2           /*!< Set PB2  function to SPI1_SS          */
#define SET_SPI1_SS_PC0()        SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SPI1_SS_PC0_Msk       ))) | SPI1_SS_PC0           /*!< Set PC0  function to SPI1_SS          */
#define SET_SPI1_SS_PD4()        SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SPI1_SS_PD4_Msk       ))) | SPI1_SS_PD4           /*!< Set PD4  function to SPI1_SS          */
#define SET_SPI1_SS_PF2()        SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SPI1_SS_PF2_Msk       ))) | SPI1_SS_PF2           /*!< Set PF2  function to SPI1_SS          */
#define SET_SPI1_SS_PH7()        SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SPI1_SS_PH7_Msk       ))) | SPI1_SS_PH7           /*!< Set PH7  function to SPI1_SS          */
#define SET_SPI1_SS_PH9()        SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SPI1_SS_PH9_Msk       ))) | SPI1_SS_PH9           /*!< Set PH9  function to SPI1_SS          */

/* SPI2 MFP Macros*/
#define SET_SPI2_CLK_PA10()      SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SPI2_CLK_PA10_Msk     ))) | SPI2_CLK_PA10         /*!< Set PA10 function to SPI2_CLK         */
#define SET_SPI2_CLK_PA13()      SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SPI2_CLK_PA13_Msk     ))) | SPI2_CLK_PA13         /*!< Set PA13 function to SPI2_CLK         */
#define SET_SPI2_CLK_PE8()       SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SPI2_CLK_PE8_Msk      ))) | SPI2_CLK_PE8          /*!< Set PE8  function to SPI2_CLK         */
#define SET_SPI2_CLK_PG3()       SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~SPI2_CLK_PG3_Msk      ))) | SPI2_CLK_PG3          /*!< Set PG3  function to SPI2_CLK         */
#define SET_SPI2_I2SMCLK_PB0()   SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SPI2_I2SMCLK_PB0_Msk  ))) | SPI2_I2SMCLK_PB0      /*!< Set PB0  function to SPI2_I2SMCLK     */
#define SET_SPI2_I2SMCLK_PC13()  SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SPI2_I2SMCLK_PC13_Msk ))) | SPI2_I2SMCLK_PC13     /*!< Set PC13 function to SPI2_I2SMCLK     */
#define SET_SPI2_I2SMCLK_PE12()  SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~SPI2_I2SMCLK_PE12_Msk ))) | SPI2_I2SMCLK_PE12     /*!< Set PE12 function to SPI2_I2SMCLK     */
#define SET_SPI2_MISO_PA9()      SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SPI2_MISO_PA9_Msk     ))) | SPI2_MISO_PA9         /*!< Set PA9  function to SPI2_MISO        */
#define SET_SPI2_MISO_PA14()     SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SPI2_MISO_PA14_Msk    ))) | SPI2_MISO_PA14        /*!< Set PA14 function to SPI2_MISO        */
#define SET_SPI2_MISO_PE9()      SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SPI2_MISO_PE9_Msk     ))) | SPI2_MISO_PE9         /*!< Set PE9  function to SPI2_MISO        */
#define SET_SPI2_MISO_PG4()      SYS->GPG_MFP1 = ((SYS->GPG_MFP1 & (~SPI2_MISO_PG4_Msk     ))) | SPI2_MISO_PG4         /*!< Set PG4  function to SPI2_MISO        */
#define SET_SPI2_MOSI_PA8()      SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SPI2_MOSI_PA8_Msk     ))) | SPI2_MOSI_PA8         /*!< Set PA8  function to SPI2_MOSI        */
#define SET_SPI2_MOSI_PA15()     SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SPI2_MOSI_PA15_Msk    ))) | SPI2_MOSI_PA15        /*!< Set PA15 function to SPI2_MOSI        */
#define SET_SPI2_MOSI_PE10()     SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SPI2_MOSI_PE10_Msk    ))) | SPI2_MOSI_PE10        /*!< Set PE10 function to SPI2_MOSI        */
#define SET_SPI2_MOSI_PF11()     SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SPI2_MOSI_PF11_Msk    ))) | SPI2_MOSI_PF11        /*!< Set PF11 function to SPI2_MOSI        */
#define SET_SPI2_SS_PA11()       SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SPI2_SS_PA11_Msk      ))) | SPI2_SS_PA11          /*!< Set PA11 function to SPI2_SS          */
#define SET_SPI2_SS_PA12()       SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SPI2_SS_PA12_Msk      ))) | SPI2_SS_PA12          /*!< Set PA12 function to SPI2_SS          */
#define SET_SPI2_SS_PE11()       SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SPI2_SS_PE11_Msk      ))) | SPI2_SS_PE11          /*!< Set PE11 function to SPI2_SS          */
#define SET_SPI2_SS_PG2()        SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~SPI2_SS_PG2_Msk       ))) | SPI2_SS_PG2           /*!< Set PG2  function to SPI2_SS          */

/* TM0 MFP Macros*/
#define SET_TM0_EXT_PA11()       SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~TM0_EXT_PA11_Msk      ))) | TM0_EXT_PA11          /*!< Set PA11 function to TM0_EXT          */
#define SET_TM0_EXT_PB15()       SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~TM0_EXT_PB15_Msk      ))) | TM0_EXT_PB15          /*!< Set PB15 function to TM0_EXT          */
#define SET_TM0_EXT_PF3()        SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~TM0_EXT_PF3_Msk       ))) | TM0_EXT_PF3           /*!< Set PF3  function to TM0_EXT          */
#define SET_TM0_PB5()            SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~TM0_PB5_Msk           ))) | TM0_PB5               /*!< Set PB5  function to TM0              */
#define SET_TM0_PC7()            SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~TM0_PC7_Msk           ))) | TM0_PC7               /*!< Set PC7  function to TM0              */
#define SET_TM0_PG2()            SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~TM0_PG2_Msk           ))) | TM0_PG2               /*!< Set PG2  function to TM0              */

/* TM1 MFP Macros*/
#define SET_TM1_EXT_PA10()       SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~TM1_EXT_PA10_Msk      ))) | TM1_EXT_PA10          /*!< Set PA10 function to TM1_EXT          */
#define SET_TM1_EXT_PB14()       SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~TM1_EXT_PB14_Msk      ))) | TM1_EXT_PB14          /*!< Set PB14 function to TM1_EXT          */
#define SET_TM1_EXT_PF2()        SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~TM1_EXT_PF2_Msk       ))) | TM1_EXT_PF2           /*!< Set PF2  function to TM1_EXT          */
#define SET_TM1_PB4()            SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~TM1_PB4_Msk           ))) | TM1_PB4               /*!< Set PB4  function to TM1              */
#define SET_TM1_PB6()            SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~TM1_PB6_Msk           ))) | TM1_PB6               /*!< Set PB6  function to TM1              */
#define SET_TM1_PC6()            SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~TM1_PC6_Msk           ))) | TM1_PC6               /*!< Set PC6  function to TM1              */
#define SET_TM1_PC14()           SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~TM1_PC14_Msk          ))) | TM1_PC14              /*!< Set PC14 function to TM1              */
#define SET_TM1_PG3()            SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~TM1_PG3_Msk           ))) | TM1_PG3               /*!< Set PG3  function to TM1              */

/* TM2 MFP Macros*/
#define SET_TM2_EXT_PA9()        SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~TM2_EXT_PA9_Msk       ))) | TM2_EXT_PA9           /*!< Set PA9  function to TM2_EXT          */
#define SET_TM2_EXT_PB13()       SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~TM2_EXT_PB13_Msk      ))) | TM2_EXT_PB13          /*!< Set PB13 function to TM2_EXT          */
#define SET_TM2_PA7()            SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~TM2_PA7_Msk           ))) | TM2_PA7               /*!< Set PA7  function to TM2              */
#define SET_TM2_PB3()            SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~TM2_PB3_Msk           ))) | TM2_PB3               /*!< Set PB3  function to TM2              */
#define SET_TM2_PD0()            SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~TM2_PD0_Msk           ))) | TM2_PD0               /*!< Set PD0  function to TM2              */
#define SET_TM2_PG4()            SYS->GPG_MFP1 = ((SYS->GPG_MFP1 & (~TM2_PG4_Msk           ))) | TM2_PG4               /*!< Set PG4  function to TM2              */

/* TM3 MFP Macros*/
#define SET_TM3_EXT_PA8()        SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~TM3_EXT_PA8_Msk       ))) | TM3_EXT_PA8           /*!< Set PA8  function to TM3_EXT          */
#define SET_TM3_EXT_PB12()       SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~TM3_EXT_PB12_Msk      ))) | TM3_EXT_PB12          /*!< Set PB12 function to TM3_EXT          */
#define SET_TM3_PA6()            SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~TM3_PA6_Msk           ))) | TM3_PA6               /*!< Set PA6  function to TM3              */
#define SET_TM3_PB2()            SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~TM3_PB2_Msk           ))) | TM3_PB2               /*!< Set PB2  function to TM3              */
#define SET_TM3_PF11()           SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~TM3_PF11_Msk          ))) | TM3_PF11              /*!< Set PF11 function to TM3              */

/* TRACE MFP Macros*/
#define SET_TRACE_SWO_PC14()     SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~TRACE_SWO_PC14_Msk    ))) | TRACE_SWO_PC14        /*!< Set PC14 function to TRACE_SWO        */
#define SET_TRACE_SWO_PE13()     SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~TRACE_SWO_PE13_Msk    ))) | TRACE_SWO_PE13        /*!< Set PE13 function to TRACE_SWO        */
#define SET_TRACE_SWO_PF6()      SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~TRACE_SWO_PF6_Msk     ))) | TRACE_SWO_PF6         /*!< Set PF6  function to TRACE_SWO        */

/* UART0 MFP Macros*/
#define SET_UART0_RXD_PA0()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~UART0_RXD_PA0_Msk     ))) | UART0_RXD_PA0         /*!< Set PA0  function to UART0_RXD        */
#define SET_UART0_RXD_PA4()      SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~UART0_RXD_PA4_Msk     ))) | UART0_RXD_PA4         /*!< Set PA4  function to UART0_RXD        */
#define SET_UART0_RXD_PA6()      SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~UART0_RXD_PA6_Msk     ))) | UART0_RXD_PA6         /*!< Set PA6  function to UART0_RXD        */
#define SET_UART0_RXD_PA15()     SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~UART0_RXD_PA15_Msk    ))) | UART0_RXD_PA15        /*!< Set PA15 function to UART0_RXD        */
#define SET_UART0_RXD_PB8()      SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~UART0_RXD_PB8_Msk     ))) | UART0_RXD_PB8         /*!< Set PB8  function to UART0_RXD        */
#define SET_UART0_RXD_PB12()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~UART0_RXD_PB12_Msk    ))) | UART0_RXD_PB12        /*!< Set PB12 function to UART0_RXD        */
#define SET_UART0_RXD_PC11()     SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~UART0_RXD_PC11_Msk    ))) | UART0_RXD_PC11        /*!< Set PC11 function to UART0_RXD        */
#define SET_UART0_RXD_PD2()      SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~UART0_RXD_PD2_Msk     ))) | UART0_RXD_PD2         /*!< Set PD2  function to UART0_RXD        */
#define SET_UART0_RXD_PF1()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~UART0_RXD_PF1_Msk     ))) | UART0_RXD_PF1         /*!< Set PF1  function to UART0_RXD        */
#define SET_UART0_RXD_PF2()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~UART0_RXD_PF2_Msk     ))) | UART0_RXD_PF2         /*!< Set PF2  function to UART0_RXD        */
#define SET_UART0_RXD_PH11()     SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~UART0_RXD_PH11_Msk    ))) | UART0_RXD_PH11        /*!< Set PH11 function to UART0_RXD        */
#define SET_UART0_TXD_PA1()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~UART0_TXD_PA1_Msk     ))) | UART0_TXD_PA1         /*!< Set PA1  function to UART0_TXD        */
#define SET_UART0_TXD_PA5()      SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~UART0_TXD_PA5_Msk     ))) | UART0_TXD_PA5         /*!< Set PA5  function to UART0_TXD        */
#define SET_UART0_TXD_PA7()      SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~UART0_TXD_PA7_Msk     ))) | UART0_TXD_PA7         /*!< Set PA7  function to UART0_TXD        */
#define SET_UART0_TXD_PA14()     SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~UART0_TXD_PA14_Msk    ))) | UART0_TXD_PA14        /*!< Set PA14 function to UART0_TXD        */
#define SET_UART0_TXD_PB9()      SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~UART0_TXD_PB9_Msk     ))) | UART0_TXD_PB9         /*!< Set PB9  function to UART0_TXD        */
#define SET_UART0_TXD_PB13()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~UART0_TXD_PB13_Msk    ))) | UART0_TXD_PB13        /*!< Set PB13 function to UART0_TXD        */
#define SET_UART0_TXD_PC12()     SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~UART0_TXD_PC12_Msk    ))) | UART0_TXD_PC12        /*!< Set PC12 function to UART0_TXD        */
#define SET_UART0_TXD_PD3()      SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~UART0_TXD_PD3_Msk     ))) | UART0_TXD_PD3         /*!< Set PD3  function to UART0_TXD        */
#define SET_UART0_TXD_PF0()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~UART0_TXD_PF0_Msk     ))) | UART0_TXD_PF0         /*!< Set PF0  function to UART0_TXD        */
#define SET_UART0_TXD_PF3()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~UART0_TXD_PF3_Msk     ))) | UART0_TXD_PF3         /*!< Set PF3  function to UART0_TXD        */
#define SET_UART0_TXD_PH10()     SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~UART0_TXD_PH10_Msk    ))) | UART0_TXD_PH10        /*!< Set PH10 function to UART0_TXD        */
#define SET_UART0_nCTS_PA5()     SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~UART0_nCTS_PA5_Msk    ))) | UART0_nCTS_PA5        /*!< Set PA5  function to UART0_nCTS       */
#define SET_UART0_nCTS_PB11()    SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~UART0_nCTS_PB11_Msk   ))) | UART0_nCTS_PB11       /*!< Set PB11 function to UART0_nCTS       */
#define SET_UART0_nCTS_PB15()    SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~UART0_nCTS_PB15_Msk   ))) | UART0_nCTS_PB15       /*!< Set PB15 function to UART0_nCTS       */
#define SET_UART0_nCTS_PC7()     SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~UART0_nCTS_PC7_Msk    ))) | UART0_nCTS_PC7        /*!< Set PC7  function to UART0_nCTS       */
#define SET_UART0_nCTS_PF5()     SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~UART0_nCTS_PF5_Msk    ))) | UART0_nCTS_PF5        /*!< Set PF5  function to UART0_nCTS       */
#define SET_UART0_nRTS_PA4()     SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~UART0_nRTS_PA4_Msk    ))) | UART0_nRTS_PA4        /*!< Set PA4  function to UART0_nRTS       */
#define SET_UART0_nRTS_PB10()    SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~UART0_nRTS_PB10_Msk   ))) | UART0_nRTS_PB10       /*!< Set PB10 function to UART0_nRTS       */
#define SET_UART0_nRTS_PB14()    SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~UART0_nRTS_PB14_Msk   ))) | UART0_nRTS_PB14       /*!< Set PB14 function to UART0_nRTS       */
#define SET_UART0_nRTS_PC6()     SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~UART0_nRTS_PC6_Msk    ))) | UART0_nRTS_PC6        /*!< Set PC6  function to UART0_nRTS       */
#define SET_UART0_nRTS_PF4()     SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~UART0_nRTS_PF4_Msk    ))) | UART0_nRTS_PF4        /*!< Set PF4  function to UART0_nRTS       */

/* UART1 MFP Macros*/
#define SET_UART1_RXD_PA2()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~UART1_RXD_PA2_Msk     ))) | UART1_RXD_PA2         /*!< Set PA2  function to UART1_RXD        */
#define SET_UART1_RXD_PA8()      SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~UART1_RXD_PA8_Msk     ))) | UART1_RXD_PA8         /*!< Set PA8  function to UART1_RXD        */
#define SET_UART1_RXD_PB2()      SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~UART1_RXD_PB2_Msk     ))) | UART1_RXD_PB2         /*!< Set PB2  function to UART1_RXD        */
#define SET_UART1_RXD_PB6()      SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~UART1_RXD_PB6_Msk     ))) | UART1_RXD_PB6         /*!< Set PB6  function to UART1_RXD        */
#define SET_UART1_RXD_PC8()      SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~UART1_RXD_PC8_Msk     ))) | UART1_RXD_PC8         /*!< Set PC8  function to UART1_RXD        */
#define SET_UART1_RXD_PD6()      SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~UART1_RXD_PD6_Msk     ))) | UART1_RXD_PD6         /*!< Set PD6  function to UART1_RXD        */
#define SET_UART1_RXD_PD10()     SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~UART1_RXD_PD10_Msk    ))) | UART1_RXD_PD10        /*!< Set PD10 function to UART1_RXD        */
#define SET_UART1_RXD_PF1()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~UART1_RXD_PF1_Msk     ))) | UART1_RXD_PF1         /*!< Set PF1  function to UART1_RXD        */
#define SET_UART1_RXD_PH9()      SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~UART1_RXD_PH9_Msk     ))) | UART1_RXD_PH9         /*!< Set PH9  function to UART1_RXD        */
#define SET_UART1_TXD_PA3()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~UART1_TXD_PA3_Msk     ))) | UART1_TXD_PA3         /*!< Set PA3  function to UART1_TXD        */
#define SET_UART1_TXD_PA9()      SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~UART1_TXD_PA9_Msk     ))) | UART1_TXD_PA9         /*!< Set PA9  function to UART1_TXD        */
#define SET_UART1_TXD_PB3()      SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~UART1_TXD_PB3_Msk     ))) | UART1_TXD_PB3         /*!< Set PB3  function to UART1_TXD        */
#define SET_UART1_TXD_PB7()      SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~UART1_TXD_PB7_Msk     ))) | UART1_TXD_PB7         /*!< Set PB7  function to UART1_TXD        */
#define SET_UART1_TXD_PD7()      SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~UART1_TXD_PD7_Msk     ))) | UART1_TXD_PD7         /*!< Set PD7  function to UART1_TXD        */
#define SET_UART1_TXD_PD11()     SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~UART1_TXD_PD11_Msk    ))) | UART1_TXD_PD11        /*!< Set PD11 function to UART1_TXD        */
#define SET_UART1_TXD_PE13()     SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~UART1_TXD_PE13_Msk    ))) | UART1_TXD_PE13        /*!< Set PE13 function to UART1_TXD        */
#define SET_UART1_TXD_PF0()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~UART1_TXD_PF0_Msk     ))) | UART1_TXD_PF0         /*!< Set PF0  function to UART1_TXD        */
#define SET_UART1_TXD_PH8()      SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~UART1_TXD_PH8_Msk     ))) | UART1_TXD_PH8         /*!< Set PH8  function to UART1_TXD        */
#define SET_UART1_nCTS_PA1()     SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~UART1_nCTS_PA1_Msk    ))) | UART1_nCTS_PA1        /*!< Set PA1  function to UART1_nCTS       */
#define SET_UART1_nCTS_PB9()     SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~UART1_nCTS_PB9_Msk    ))) | UART1_nCTS_PB9        /*!< Set PB9  function to UART1_nCTS       */
#define SET_UART1_nCTS_PE11()    SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~UART1_nCTS_PE11_Msk   ))) | UART1_nCTS_PE11       /*!< Set PE11 function to UART1_nCTS       */
#define SET_UART1_nRTS_PA0()     SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~UART1_nRTS_PA0_Msk    ))) | UART1_nRTS_PA0        /*!< Set PA0  function to UART1_nRTS       */
#define SET_UART1_nRTS_PB8()     SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~UART1_nRTS_PB8_Msk    ))) | UART1_nRTS_PB8        /*!< Set PB8  function to UART1_nRTS       */
#define SET_UART1_nRTS_PE12()    SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~UART1_nRTS_PE12_Msk   ))) | UART1_nRTS_PE12       /*!< Set PE12 function to UART1_nRTS       */

/* UART2 MFP Macros*/
#define SET_UART2_RXD_PB0()      SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~UART2_RXD_PB0_Msk     ))) | UART2_RXD_PB0         /*!< Set PB0  function to UART2_RXD        */
#define SET_UART2_RXD_PB4()      SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~UART2_RXD_PB4_Msk     ))) | UART2_RXD_PB4         /*!< Set PB4  function to UART2_RXD        */
#define SET_UART2_RXD_PC0()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~UART2_RXD_PC0_Msk     ))) | UART2_RXD_PC0         /*!< Set PC0  function to UART2_RXD        */
#define SET_UART2_RXD_PC4()      SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~UART2_RXD_PC4_Msk     ))) | UART2_RXD_PC4         /*!< Set PC4  function to UART2_RXD        */
#define SET_UART2_RXD_PD12()     SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~UART2_RXD_PD12_Msk    ))) | UART2_RXD_PD12        /*!< Set PD12 function to UART2_RXD        */
#define SET_UART2_RXD_PE9()      SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~UART2_RXD_PE9_Msk     ))) | UART2_RXD_PE9         /*!< Set PE9  function to UART2_RXD        */
#define SET_UART2_RXD_PE15()     SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~UART2_RXD_PE15_Msk    ))) | UART2_RXD_PE15        /*!< Set PE15 function to UART2_RXD        */
#define SET_UART2_RXD_PF1()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~UART2_RXD_PF1_Msk     ))) | UART2_RXD_PF1         /*!< Set PF1  function to UART2_RXD        */
#define SET_UART2_RXD_PF5()      SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~UART2_RXD_PF5_Msk     ))) | UART2_RXD_PF5         /*!< Set PF5  function to UART2_RXD        */
#define SET_UART2_TXD_PB1()      SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~UART2_TXD_PB1_Msk     ))) | UART2_TXD_PB1         /*!< Set PB1  function to UART2_TXD        */
#define SET_UART2_TXD_PB5()      SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~UART2_TXD_PB5_Msk     ))) | UART2_TXD_PB5         /*!< Set PB5  function to UART2_TXD        */
#define SET_UART2_TXD_PC1()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~UART2_TXD_PC1_Msk     ))) | UART2_TXD_PC1         /*!< Set PC1  function to UART2_TXD        */
#define SET_UART2_TXD_PC5()      SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~UART2_TXD_PC5_Msk     ))) | UART2_TXD_PC5         /*!< Set PC5  function to UART2_TXD        */
#define SET_UART2_TXD_PC13()     SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~UART2_TXD_PC13_Msk    ))) | UART2_TXD_PC13        /*!< Set PC13 function to UART2_TXD        */
#define SET_UART2_TXD_PE8()      SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~UART2_TXD_PE8_Msk     ))) | UART2_TXD_PE8         /*!< Set PE8  function to UART2_TXD        */
#define SET_UART2_TXD_PE14()     SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~UART2_TXD_PE14_Msk    ))) | UART2_TXD_PE14        /*!< Set PE14 function to UART2_TXD        */
#define SET_UART2_TXD_PF0()      SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~UART2_TXD_PF0_Msk     ))) | UART2_TXD_PF0         /*!< Set PF0  function to UART2_TXD        */
#define SET_UART2_TXD_PF4()      SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~UART2_TXD_PF4_Msk     ))) | UART2_TXD_PF4         /*!< Set PF4  function to UART2_TXD        */
#define SET_UART2_nCTS_PC2()     SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~UART2_nCTS_PC2_Msk    ))) | UART2_nCTS_PC2        /*!< Set PC2  function to UART2_nCTS       */
#define SET_UART2_nCTS_PD9()     SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~UART2_nCTS_PD9_Msk    ))) | UART2_nCTS_PD9        /*!< Set PD9  function to UART2_nCTS       */
#define SET_UART2_nCTS_PF5()     SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~UART2_nCTS_PF5_Msk    ))) | UART2_nCTS_PF5        /*!< Set PF5  function to UART2_nCTS       */
#define SET_UART2_nRTS_PC3()     SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~UART2_nRTS_PC3_Msk    ))) | UART2_nRTS_PC3        /*!< Set PC3  function to UART2_nRTS       */
#define SET_UART2_nRTS_PD8()     SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~UART2_nRTS_PD8_Msk    ))) | UART2_nRTS_PD8        /*!< Set PD8  function to UART2_nRTS       */
#define SET_UART2_nRTS_PF4()     SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~UART2_nRTS_PF4_Msk    ))) | UART2_nRTS_PF4        /*!< Set PF4  function to UART2_nRTS       */

/* UART3 MFP Macros*/
#define SET_UART3_RXD_PB14()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~UART3_RXD_PB14_Msk    ))) | UART3_RXD_PB14        /*!< Set PB14 function to UART3_RXD        */
#define SET_UART3_RXD_PC2()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~UART3_RXD_PC2_Msk     ))) | UART3_RXD_PC2         /*!< Set PC2  function to UART3_RXD        */
#define SET_UART3_RXD_PC9()      SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~UART3_RXD_PC9_Msk     ))) | UART3_RXD_PC9         /*!< Set PC9  function to UART3_RXD        */
#define SET_UART3_RXD_PD0()      SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~UART3_RXD_PD0_Msk     ))) | UART3_RXD_PD0         /*!< Set PD0  function to UART3_RXD        */
#define SET_UART3_RXD_PE0()      SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~UART3_RXD_PE0_Msk     ))) | UART3_RXD_PE0         /*!< Set PE0  function to UART3_RXD        */
#define SET_UART3_RXD_PE11()     SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~UART3_RXD_PE11_Msk    ))) | UART3_RXD_PE11        /*!< Set PE11 function to UART3_RXD        */
#define SET_UART3_RXD_PE15()     SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~UART3_RXD_PE15_Msk    ))) | UART3_RXD_PE15        /*!< Set PE15 function to UART3_RXD        */
#define SET_UART3_RXD_PF4()      SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~UART3_RXD_PF4_Msk     ))) | UART3_RXD_PF4         /*!< Set PF4  function to UART3_RXD        */
#define SET_UART3_TXD_PB15()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~UART3_TXD_PB15_Msk    ))) | UART3_TXD_PB15        /*!< Set PB15 function to UART3_TXD        */
#define SET_UART3_TXD_PC3()      SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~UART3_TXD_PC3_Msk     ))) | UART3_TXD_PC3         /*!< Set PC3  function to UART3_TXD        */
#define SET_UART3_TXD_PC10()     SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~UART3_TXD_PC10_Msk    ))) | UART3_TXD_PC10        /*!< Set PC10 function to UART3_TXD        */
#define SET_UART3_TXD_PD1()      SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~UART3_TXD_PD1_Msk     ))) | UART3_TXD_PD1         /*!< Set PD1  function to UART3_TXD        */
#define SET_UART3_TXD_PE1()      SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~UART3_TXD_PE1_Msk     ))) | UART3_TXD_PE1         /*!< Set PE1  function to UART3_TXD        */
#define SET_UART3_TXD_PE10()     SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~UART3_TXD_PE10_Msk    ))) | UART3_TXD_PE10        /*!< Set PE10 function to UART3_TXD        */
#define SET_UART3_TXD_PE14()     SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~UART3_TXD_PE14_Msk    ))) | UART3_TXD_PE14        /*!< Set PE14 function to UART3_TXD        */
#define SET_UART3_TXD_PF5()      SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~UART3_TXD_PF5_Msk     ))) | UART3_TXD_PF5         /*!< Set PF5  function to UART3_TXD        */
#define SET_UART3_nCTS_PB12()    SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~UART3_nCTS_PB12_Msk   ))) | UART3_nCTS_PB12       /*!< Set PB12 function to UART3_nCTS       */
#define SET_UART3_nCTS_PD2()     SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~UART3_nCTS_PD2_Msk    ))) | UART3_nCTS_PD2        /*!< Set PD2  function to UART3_nCTS       */
#define SET_UART3_nCTS_PH9()     SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~UART3_nCTS_PH9_Msk    ))) | UART3_nCTS_PH9        /*!< Set PH9  function to UART3_nCTS       */
#define SET_UART3_nRTS_PB13()    SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~UART3_nRTS_PB13_Msk   ))) | UART3_nRTS_PB13       /*!< Set PB13 function to UART3_nRTS       */
#define SET_UART3_nRTS_PD3()     SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~UART3_nRTS_PD3_Msk    ))) | UART3_nRTS_PD3        /*!< Set PD3  function to UART3_nRTS       */
#define SET_UART3_nRTS_PH8()     SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~UART3_nRTS_PH8_Msk    ))) | UART3_nRTS_PH8        /*!< Set PH8  function to UART3_nRTS       */

/* UART4 MFP Macros*/
#define SET_UART4_RXD_PA2()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~UART4_RXD_PA2_Msk     ))) | UART4_RXD_PA2         /*!< Set PA2  function to UART4_RXD        */
#define SET_UART4_RXD_PA13()     SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~UART4_RXD_PA13_Msk    ))) | UART4_RXD_PA13        /*!< Set PA13 function to UART4_RXD        */
#define SET_UART4_RXD_PB10()     SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~UART4_RXD_PB10_Msk    ))) | UART4_RXD_PB10        /*!< Set PB10 function to UART4_RXD        */
#define SET_UART4_RXD_PC4()      SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~UART4_RXD_PC4_Msk     ))) | UART4_RXD_PC4         /*!< Set PC4  function to UART4_RXD        */
#define SET_UART4_RXD_PC6()      SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~UART4_RXD_PC6_Msk     ))) | UART4_RXD_PC6         /*!< Set PC6  function to UART4_RXD        */
#define SET_UART4_RXD_PF6()      SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~UART4_RXD_PF6_Msk     ))) | UART4_RXD_PF6         /*!< Set PF6  function to UART4_RXD        */
#define SET_UART4_RXD_PH11()     SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~UART4_RXD_PH11_Msk    ))) | UART4_RXD_PH11        /*!< Set PH11 function to UART4_RXD        */
#define SET_UART4_TXD_PA3()      SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~UART4_TXD_PA3_Msk     ))) | UART4_TXD_PA3         /*!< Set PA3  function to UART4_TXD        */
#define SET_UART4_TXD_PA12()     SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~UART4_TXD_PA12_Msk    ))) | UART4_TXD_PA12        /*!< Set PA12 function to UART4_TXD        */
#define SET_UART4_TXD_PB11()     SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~UART4_TXD_PB11_Msk    ))) | UART4_TXD_PB11        /*!< Set PB11 function to UART4_TXD        */
#define SET_UART4_TXD_PC5()      SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~UART4_TXD_PC5_Msk     ))) | UART4_TXD_PC5         /*!< Set PC5  function to UART4_TXD        */
#define SET_UART4_TXD_PC7()      SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~UART4_TXD_PC7_Msk     ))) | UART4_TXD_PC7         /*!< Set PC7  function to UART4_TXD        */
#define SET_UART4_TXD_PF7()      SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~UART4_TXD_PF7_Msk     ))) | UART4_TXD_PF7         /*!< Set PF7  function to UART4_TXD        */
#define SET_UART4_TXD_PH10()     SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~UART4_TXD_PH10_Msk    ))) | UART4_TXD_PH10        /*!< Set PH10 function to UART4_TXD        */
#define SET_UART4_nCTS_PC8()     SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~UART4_nCTS_PC8_Msk    ))) | UART4_nCTS_PC8        /*!< Set PC8  function to UART4_nCTS       */
#define SET_UART4_nCTS_PE1()     SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~UART4_nCTS_PE1_Msk    ))) | UART4_nCTS_PE1        /*!< Set PE1  function to UART4_nCTS       */
#define SET_UART4_nCTS_PE14()    SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~UART4_nCTS_PE14_Msk   ))) | UART4_nCTS_PE14       /*!< Set PE14 function to UART4_nCTS       */
#define SET_UART4_nRTS_PE0()     SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~UART4_nRTS_PE0_Msk    ))) | UART4_nRTS_PE0        /*!< Set PE0  function to UART4_nRTS       */
#define SET_UART4_nRTS_PE13()    SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~UART4_nRTS_PE13_Msk   ))) | UART4_nRTS_PE13       /*!< Set PE13 function to UART4_nRTS       */
#define SET_UART4_nRTS_PE15()    SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~UART4_nRTS_PE15_Msk   ))) | UART4_nRTS_PE15       /*!< Set PE15 function to UART4_nRTS       */

/* USCI0 MFP Macros*/
#define SET_USCI0_CLK_PA11()     SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~USCI0_CLK_PA11_Msk    ))) | USCI0_CLK_PA11        /*!< Set PA11 function to USCI0_CLK        */
#define SET_USCI0_CLK_PB12()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~USCI0_CLK_PB12_Msk    ))) | USCI0_CLK_PB12        /*!< Set PB12 function to USCI0_CLK        */
#define SET_USCI0_CLK_PD0()      SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~USCI0_CLK_PD0_Msk     ))) | USCI0_CLK_PD0         /*!< Set PD0  function to USCI0_CLK        */
#define SET_USCI0_CLK_PE2()      SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~USCI0_CLK_PE2_Msk     ))) | USCI0_CLK_PE2         /*!< Set PE2  function to USCI0_CLK        */
#define SET_USCI0_CTL0_PB0()     SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~USCI0_CTL0_PB0_Msk    ))) | USCI0_CTL0_PB0        /*!< Set PB0  function to USCI0_CTL0       */
#define SET_USCI0_CTL0_PB13()    SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~USCI0_CTL0_PB13_Msk   ))) | USCI0_CTL0_PB13       /*!< Set PB13 function to USCI0_CTL0       */
#define SET_USCI0_CTL0_PC13()    SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~USCI0_CTL0_PC13_Msk   ))) | USCI0_CTL0_PC13       /*!< Set PC13 function to USCI0_CTL0       */
#define SET_USCI0_CTL0_PC14()    SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~USCI0_CTL0_PC14_Msk   ))) | USCI0_CTL0_PC14       /*!< Set PC14 function to USCI0_CTL0       */
#define SET_USCI0_CTL0_PD4()     SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~USCI0_CTL0_PD4_Msk    ))) | USCI0_CTL0_PD4        /*!< Set PD4  function to USCI0_CTL0       */
#define SET_USCI0_CTL0_PE6()     SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~USCI0_CTL0_PE6_Msk    ))) | USCI0_CTL0_PE6        /*!< Set PE6  function to USCI0_CTL0       */
#define SET_USCI0_CTL1_PA8()     SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~USCI0_CTL1_PA8_Msk    ))) | USCI0_CTL1_PA8        /*!< Set PA8  function to USCI0_CTL1       */
#define SET_USCI0_CTL1_PB15()    SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~USCI0_CTL1_PB15_Msk   ))) | USCI0_CTL1_PB15       /*!< Set PB15 function to USCI0_CTL1       */
#define SET_USCI0_CTL1_PD3()     SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~USCI0_CTL1_PD3_Msk    ))) | USCI0_CTL1_PD3        /*!< Set PD3  function to USCI0_CTL1       */
#define SET_USCI0_CTL1_PE5()     SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~USCI0_CTL1_PE5_Msk    ))) | USCI0_CTL1_PE5        /*!< Set PE5  function to USCI0_CTL1       */
#define SET_USCI0_CTL1_PF0()     SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~USCI0_CTL1_PF0_Msk    ))) | USCI0_CTL1_PF0        /*!< Set PF0  function to USCI0_CTL1       */
#define SET_USCI0_DAT0_PA10()    SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~USCI0_DAT0_PA10_Msk   ))) | USCI0_DAT0_PA10       /*!< Set PA10 function to USCI0_DAT0       */
#define SET_USCI0_DAT0_PB13()    SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~USCI0_DAT0_PB13_Msk   ))) | USCI0_DAT0_PB13       /*!< Set PB13 function to USCI0_DAT0       */
#define SET_USCI0_DAT0_PD1()     SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~USCI0_DAT0_PD1_Msk    ))) | USCI0_DAT0_PD1        /*!< Set PD1  function to USCI0_DAT0       */
#define SET_USCI0_DAT0_PE3()     SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~USCI0_DAT0_PE3_Msk    ))) | USCI0_DAT0_PE3        /*!< Set PE3  function to USCI0_DAT0       */
#define SET_USCI0_DAT1_PA9()     SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~USCI0_DAT1_PA9_Msk    ))) | USCI0_DAT1_PA9        /*!< Set PA9  function to USCI0_DAT1       */
#define SET_USCI0_DAT1_PB14()    SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~USCI0_DAT1_PB14_Msk   ))) | USCI0_DAT1_PB14       /*!< Set PB14 function to USCI0_DAT1       */
#define SET_USCI0_DAT1_PD2()     SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~USCI0_DAT1_PD2_Msk    ))) | USCI0_DAT1_PD2        /*!< Set PD2  function to USCI0_DAT1       */
#define SET_USCI0_DAT1_PE4()     SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~USCI0_DAT1_PE4_Msk    ))) | USCI0_DAT1_PE4        /*!< Set PE4  function to USCI0_DAT1       */
#define SET_USCI0_DAT1_PF1()     SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~USCI0_DAT1_PF1_Msk    ))) | USCI0_DAT1_PF1        /*!< Set PF1  function to USCI0_DAT1       */

/* USCI1 MFP Macros*/
#define SET_USCI1_CLK_PB1()      SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~USCI1_CLK_PB1_Msk     ))) | USCI1_CLK_PB1         /*!< Set PB1  function to USCI1_CLK        */
#define SET_USCI1_CLK_PB8()      SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~USCI1_CLK_PB8_Msk     ))) | USCI1_CLK_PB8         /*!< Set PB8  function to USCI1_CLK        */
#define SET_USCI1_CLK_PD7()      SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~USCI1_CLK_PD7_Msk     ))) | USCI1_CLK_PD7         /*!< Set PD7  function to USCI1_CLK        */
#define SET_USCI1_CLK_PE12()     SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~USCI1_CLK_PE12_Msk    ))) | USCI1_CLK_PE12        /*!< Set PE12 function to USCI1_CLK        */
#define SET_USCI1_CTL0_PB5()     SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~USCI1_CTL0_PB5_Msk    ))) | USCI1_CTL0_PB5        /*!< Set PB5  function to USCI1_CTL0       */
#define SET_USCI1_CTL0_PB10()    SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~USCI1_CTL0_PB10_Msk   ))) | USCI1_CTL0_PB10       /*!< Set PB10 function to USCI1_CTL0       */
#define SET_USCI1_CTL0_PD3()     SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~USCI1_CTL0_PD3_Msk    ))) | USCI1_CTL0_PD3        /*!< Set PD3  function to USCI1_CTL0       */
#define SET_USCI1_CTL0_PE9()     SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~USCI1_CTL0_PE9_Msk    ))) | USCI1_CTL0_PE9        /*!< Set PE9  function to USCI1_CTL0       */
#define SET_USCI1_CTL1_PB4()     SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~USCI1_CTL1_PB4_Msk    ))) | USCI1_CTL1_PB4        /*!< Set PB4  function to USCI1_CTL1       */
#define SET_USCI1_CTL1_PB9()     SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~USCI1_CTL1_PB9_Msk    ))) | USCI1_CTL1_PB9        /*!< Set PB9  function to USCI1_CTL1       */
#define SET_USCI1_CTL1_PD4()     SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~USCI1_CTL1_PD4_Msk    ))) | USCI1_CTL1_PD4        /*!< Set PD4  function to USCI1_CTL1       */
#define SET_USCI1_CTL1_PE8()     SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~USCI1_CTL1_PE8_Msk    ))) | USCI1_CTL1_PE8        /*!< Set PE8  function to USCI1_CTL1       */
#define SET_USCI1_DAT0_PB2()     SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~USCI1_DAT0_PB2_Msk    ))) | USCI1_DAT0_PB2        /*!< Set PB2  function to USCI1_DAT0       */
#define SET_USCI1_DAT0_PB7()     SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~USCI1_DAT0_PB7_Msk    ))) | USCI1_DAT0_PB7        /*!< Set PB7  function to USCI1_DAT0       */
#define SET_USCI1_DAT0_PD5()     SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~USCI1_DAT0_PD5_Msk    ))) | USCI1_DAT0_PD5        /*!< Set PD5  function to USCI1_DAT0       */
#define SET_USCI1_DAT0_PE10()    SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~USCI1_DAT0_PE10_Msk   ))) | USCI1_DAT0_PE10       /*!< Set PE10 function to USCI1_DAT0       */
#define SET_USCI1_DAT1_PB3()     SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~USCI1_DAT1_PB3_Msk    ))) | USCI1_DAT1_PB3        /*!< Set PB3  function to USCI1_DAT1       */
#define SET_USCI1_DAT1_PB6()     SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~USCI1_DAT1_PB6_Msk    ))) | USCI1_DAT1_PB6        /*!< Set PB6  function to USCI1_DAT1       */
#define SET_USCI1_DAT1_PD6()     SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~USCI1_DAT1_PD6_Msk    ))) | USCI1_DAT1_PD6        /*!< Set PD6  function to USCI1_DAT1       */
#define SET_USCI1_DAT1_PE11()    SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~USCI1_DAT1_PE11_Msk   ))) | USCI1_DAT1_PE11       /*!< Set PE11 function to USCI1_DAT1       */

/* X32 MFP Macros*/
#define SET_X32_IN_PF5()         SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~X32_IN_PF5_Msk        ))) | X32_IN_PF5            /*!< Set PF5  function to X32_IN           */
#define SET_X32_OUT_PF4()        SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~X32_OUT_PF4_Msk       ))) | X32_OUT_PF4           /*!< Set PF4  function to X32_OUT          */

/* XT1 MFP Macros*/
#define SET_XT1_IN_PF3()         SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~XT1_IN_PF3_Msk        ))) | XT1_IN_PF3            /*!< Set PF3  function to XT1_IN           */
#define SET_XT1_OUT_PF2()        SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~XT1_OUT_PF2_Msk       ))) | XT1_OUT_PF2           /*!< Set PF2  function to XT1_OUT          */


/*---------------------------------------------------------------------------------------------------------*/
/*  Multi-Function macro definitions for GPIO                                                              */
/*---------------------------------------------------------------------------------------------------------*/

#define SET_GPIO_PA0()                       SYS->GPA_MFP0 = (SYS->GPA_MFP0 & (~(SYS_GPA_MFP0_PA0MFP_Msk )))     /*!< Set GPA0  function to GPIO */
#define SET_GPIO_PA1()                       SYS->GPA_MFP0 = (SYS->GPA_MFP0 & (~(SYS_GPA_MFP0_PA1MFP_Msk )))     /*!< Set GPA1  function to GPIO */
#define SET_GPIO_PA2()                       SYS->GPA_MFP0 = (SYS->GPA_MFP0 & (~(SYS_GPA_MFP0_PA2MFP_Msk )))     /*!< Set GPA2  function to GPIO */
#define SET_GPIO_PA3()                       SYS->GPA_MFP0 = (SYS->GPA_MFP0 & (~(SYS_GPA_MFP0_PA3MFP_Msk )))     /*!< Set GPA3  function to GPIO */
#define SET_GPIO_PA4()                       SYS->GPA_MFP1 = (SYS->GPA_MFP1 & (~(SYS_GPA_MFP1_PA4MFP_Msk )))     /*!< Set GPA4  function to GPIO */
#define SET_GPIO_PA5()                       SYS->GPA_MFP1 = (SYS->GPA_MFP1 & (~(SYS_GPA_MFP1_PA5MFP_Msk )))     /*!< Set GPA5  function to GPIO */
#define SET_GPIO_PA6()                       SYS->GPA_MFP1 = (SYS->GPA_MFP1 & (~(SYS_GPA_MFP1_PA6MFP_Msk )))     /*!< Set GPA6  function to GPIO */
#define SET_GPIO_PA7()                       SYS->GPA_MFP1 = (SYS->GPA_MFP1 & (~(SYS_GPA_MFP1_PA7MFP_Msk )))     /*!< Set GPA7  function to GPIO */
#define SET_GPIO_PA8()                       SYS->GPA_MFP2 = (SYS->GPA_MFP2 & (~(SYS_GPA_MFP2_PA8MFP_Msk )))     /*!< Set GPA8  function to GPIO */
#define SET_GPIO_PA9()                       SYS->GPA_MFP2 = (SYS->GPA_MFP2 & (~(SYS_GPA_MFP2_PA9MFP_Msk )))     /*!< Set GPA9  function to GPIO */
#define SET_GPIO_PA10()                      SYS->GPA_MFP2 = (SYS->GPA_MFP2 & (~(SYS_GPA_MFP2_PA10MFP_Msk)))     /*!< Set GPA10 function to GPIO */
#define SET_GPIO_PA11()                      SYS->GPA_MFP2 = (SYS->GPA_MFP2 & (~(SYS_GPA_MFP2_PA11MFP_Msk)))     /*!< Set GPA11 function to GPIO */
#define SET_GPIO_PA12()                      SYS->GPA_MFP3 = (SYS->GPA_MFP3 & (~(SYS_GPA_MFP3_PA12MFP_Msk)))     /*!< Set GPA12 function to GPIO */
#define SET_GPIO_PA13()                      SYS->GPA_MFP3 = (SYS->GPA_MFP3 & (~(SYS_GPA_MFP3_PA13MFP_Msk)))     /*!< Set GPA13 function to GPIO */
#define SET_GPIO_PA14()                      SYS->GPA_MFP3 = (SYS->GPA_MFP3 & (~(SYS_GPA_MFP3_PA14MFP_Msk)))     /*!< Set GPA14 function to GPIO */
#define SET_GPIO_PA15()                      SYS->GPA_MFP3 = (SYS->GPA_MFP3 & (~(SYS_GPA_MFP3_PA15MFP_Msk)))     /*!< Set GPA15 function to GPIO */
#define SET_GPIO_PB0()                       SYS->GPB_MFP0 = (SYS->GPB_MFP0 & (~(SYS_GPB_MFP0_PB0MFP_Msk )))     /*!< Set GPB0  function to GPIO */
#define SET_GPIO_PB1()                       SYS->GPB_MFP0 = (SYS->GPB_MFP0 & (~(SYS_GPB_MFP0_PB1MFP_Msk )))     /*!< Set GPB1  function to GPIO */
#define SET_GPIO_PB2()                       SYS->GPB_MFP0 = (SYS->GPB_MFP0 & (~(SYS_GPB_MFP0_PB2MFP_Msk )))     /*!< Set GPB2  function to GPIO */
#define SET_GPIO_PB3()                       SYS->GPB_MFP0 = (SYS->GPB_MFP0 & (~(SYS_GPB_MFP0_PB3MFP_Msk )))     /*!< Set GPB3  function to GPIO */
#define SET_GPIO_PB4()                       SYS->GPB_MFP1 = (SYS->GPB_MFP1 & (~(SYS_GPB_MFP1_PB4MFP_Msk )))     /*!< Set GPB4  function to GPIO */
#define SET_GPIO_PB5()                       SYS->GPB_MFP1 = (SYS->GPB_MFP1 & (~(SYS_GPB_MFP1_PB5MFP_Msk )))     /*!< Set GPB5  function to GPIO */
#define SET_GPIO_PB6()                       SYS->GPB_MFP1 = (SYS->GPB_MFP1 & (~(SYS_GPB_MFP1_PB6MFP_Msk )))     /*!< Set GPB6  function to GPIO */
#define SET_GPIO_PB7()                       SYS->GPB_MFP1 = (SYS->GPB_MFP1 & (~(SYS_GPB_MFP1_PB7MFP_Msk )))     /*!< Set GPB7  function to GPIO */
#define SET_GPIO_PB8()                       SYS->GPB_MFP2 = (SYS->GPB_MFP2 & (~(SYS_GPB_MFP2_PB8MFP_Msk )))     /*!< Set GPB8  function to GPIO */
#define SET_GPIO_PB9()                       SYS->GPB_MFP2 = (SYS->GPB_MFP2 & (~(SYS_GPB_MFP2_PB9MFP_Msk )))     /*!< Set GPB9  function to GPIO */
#define SET_GPIO_PB10()                      SYS->GPB_MFP2 = (SYS->GPB_MFP2 & (~(SYS_GPB_MFP2_PB10MFP_Msk)))     /*!< Set GPB10 function to GPIO */
#define SET_GPIO_PB11()                      SYS->GPB_MFP2 = (SYS->GPB_MFP2 & (~(SYS_GPB_MFP2_PB11MFP_Msk)))     /*!< Set GPB11 function to GPIO */
#define SET_GPIO_PB12()                      SYS->GPB_MFP3 = (SYS->GPB_MFP3 & (~(SYS_GPB_MFP3_PB12MFP_Msk)))     /*!< Set GPB12 function to GPIO */
#define SET_GPIO_PB13()                      SYS->GPB_MFP3 = (SYS->GPB_MFP3 & (~(SYS_GPB_MFP3_PB13MFP_Msk)))     /*!< Set GPB13 function to GPIO */
#define SET_GPIO_PB14()                      SYS->GPB_MFP3 = (SYS->GPB_MFP3 & (~(SYS_GPB_MFP3_PB14MFP_Msk)))     /*!< Set GPB14 function to GPIO */
#define SET_GPIO_PB15()                      SYS->GPB_MFP3 = (SYS->GPB_MFP3 & (~(SYS_GPB_MFP3_PB15MFP_Msk)))     /*!< Set GPB15 function to GPIO */
#define SET_GPIO_PC0()                       SYS->GPC_MFP0 = (SYS->GPC_MFP0 & (~(SYS_GPC_MFP0_PC0MFP_Msk )))     /*!< Set GPC0  function to GPIO */
#define SET_GPIO_PC1()                       SYS->GPC_MFP0 = (SYS->GPC_MFP0 & (~(SYS_GPC_MFP0_PC1MFP_Msk )))     /*!< Set GPC1  function to GPIO */
#define SET_GPIO_PC2()                       SYS->GPC_MFP0 = (SYS->GPC_MFP0 & (~(SYS_GPC_MFP0_PC2MFP_Msk )))     /*!< Set GPC2  function to GPIO */
#define SET_GPIO_PC3()                       SYS->GPC_MFP0 = (SYS->GPC_MFP0 & (~(SYS_GPC_MFP0_PC3MFP_Msk )))     /*!< Set GPC3  function to GPIO */
#define SET_GPIO_PC4()                       SYS->GPC_MFP1 = (SYS->GPC_MFP1 & (~(SYS_GPC_MFP1_PC4MFP_Msk )))     /*!< Set GPC4  function to GPIO */
#define SET_GPIO_PC5()                       SYS->GPC_MFP1 = (SYS->GPC_MFP1 & (~(SYS_GPC_MFP1_PC5MFP_Msk )))     /*!< Set GPC5  function to GPIO */
#define SET_GPIO_PC6()                       SYS->GPC_MFP1 = (SYS->GPC_MFP1 & (~(SYS_GPC_MFP1_PC6MFP_Msk )))     /*!< Set GPC6  function to GPIO */
#define SET_GPIO_PC7()                       SYS->GPC_MFP1 = (SYS->GPC_MFP1 & (~(SYS_GPC_MFP1_PC7MFP_Msk )))     /*!< Set GPC7  function to GPIO */
#define SET_GPIO_PC8()                       SYS->GPC_MFP2 = (SYS->GPC_MFP2 & (~(SYS_GPC_MFP2_PC8MFP_Msk )))     /*!< Set GPC8  function to GPIO */
#define SET_GPIO_PC9()                       SYS->GPC_MFP2 = (SYS->GPC_MFP2 & (~(SYS_GPC_MFP2_PC9MFP_Msk )))     /*!< Set GPC9  function to GPIO */
#define SET_GPIO_PC10()                      SYS->GPC_MFP2 = (SYS->GPC_MFP2 & (~(SYS_GPC_MFP2_PC10MFP_Msk)))     /*!< Set GPC10 function to GPIO */
#define SET_GPIO_PC11()                      SYS->GPC_MFP2 = (SYS->GPC_MFP2 & (~(SYS_GPC_MFP2_PC11MFP_Msk)))     /*!< Set GPC11 function to GPIO */
#define SET_GPIO_PC12()                      SYS->GPC_MFP3 = (SYS->GPC_MFP3 & (~(SYS_GPC_MFP3_PC12MFP_Msk)))     /*!< Set GPC12 function to GPIO */
#define SET_GPIO_PC13()                      SYS->GPC_MFP3 = (SYS->GPC_MFP3 & (~(SYS_GPC_MFP3_PC13MFP_Msk)))     /*!< Set GPC13 function to GPIO */
#define SET_GPIO_PC14()                      SYS->GPC_MFP3 = (SYS->GPC_MFP3 & (~(SYS_GPC_MFP3_PC14MFP_Msk)))     /*!< Set GPC14 function to GPIO */
#define SET_GPIO_PD0()                       SYS->GPD_MFP0 = (SYS->GPD_MFP0 & (~(SYS_GPD_MFP0_PD0MFP_Msk )))     /*!< Set GPD0  function to GPIO */
#define SET_GPIO_PD1()                       SYS->GPD_MFP0 = (SYS->GPD_MFP0 & (~(SYS_GPD_MFP0_PD1MFP_Msk )))     /*!< Set GPD1  function to GPIO */
#define SET_GPIO_PD2()                       SYS->GPD_MFP0 = (SYS->GPD_MFP0 & (~(SYS_GPD_MFP0_PD2MFP_Msk )))     /*!< Set GPD2  function to GPIO */
#define SET_GPIO_PD3()                       SYS->GPD_MFP0 = (SYS->GPD_MFP0 & (~(SYS_GPD_MFP0_PD3MFP_Msk )))     /*!< Set GPD3  function to GPIO */
#define SET_GPIO_PD4()                       SYS->GPD_MFP1 = (SYS->GPD_MFP1 & (~(SYS_GPD_MFP1_PD4MFP_Msk )))     /*!< Set GPD4  function to GPIO */
#define SET_GPIO_PD5()                       SYS->GPD_MFP1 = (SYS->GPD_MFP1 & (~(SYS_GPD_MFP1_PD5MFP_Msk )))     /*!< Set GPD5  function to GPIO */
#define SET_GPIO_PD6()                       SYS->GPD_MFP1 = (SYS->GPD_MFP1 & (~(SYS_GPD_MFP1_PD6MFP_Msk )))     /*!< Set GPD6  function to GPIO */
#define SET_GPIO_PD7()                       SYS->GPD_MFP1 = (SYS->GPD_MFP1 & (~(SYS_GPD_MFP1_PD7MFP_Msk )))     /*!< Set GPD7  function to GPIO */
#define SET_GPIO_PD8()                       SYS->GPD_MFP2 = (SYS->GPD_MFP2 & (~(SYS_GPD_MFP2_PD8MFP_Msk )))     /*!< Set GPD8  function to GPIO */
#define SET_GPIO_PD9()                       SYS->GPD_MFP2 = (SYS->GPD_MFP2 & (~(SYS_GPD_MFP2_PD9MFP_Msk )))     /*!< Set GPD9  function to GPIO */
#define SET_GPIO_PD10()                      SYS->GPD_MFP2 = (SYS->GPD_MFP2 & (~(SYS_GPD_MFP2_PD10MFP_Msk)))     /*!< Set GPD10 function to GPIO */
#define SET_GPIO_PD11()                      SYS->GPD_MFP2 = (SYS->GPD_MFP2 & (~(SYS_GPD_MFP2_PD11MFP_Msk)))     /*!< Set GPD11 function to GPIO */
#define SET_GPIO_PD12()                      SYS->GPD_MFP3 = (SYS->GPD_MFP3 & (~(SYS_GPD_MFP3_PD12MFP_Msk)))     /*!< Set GPD12 function to GPIO */
#define SET_GPIO_PD13()                      SYS->GPD_MFP3 = (SYS->GPD_MFP3 & (~(SYS_GPD_MFP3_PD13MFP_Msk)))     /*!< Set GPD13 function to GPIO */
#define SET_GPIO_PD14()                      SYS->GPD_MFP3 = (SYS->GPD_MFP3 & (~(SYS_GPD_MFP3_PD14MFP_Msk)))     /*!< Set GPD14 function to GPIO */
#define SET_GPIO_PE0()                       SYS->GPE_MFP0 = (SYS->GPE_MFP0 & (~(SYS_GPE_MFP0_PE0MFP_Msk )))     /*!< Set GPE0  function to GPIO */
#define SET_GPIO_PE1()                       SYS->GPE_MFP0 = (SYS->GPE_MFP0 & (~(SYS_GPE_MFP0_PE1MFP_Msk )))     /*!< Set GPE1  function to GPIO */
#define SET_GPIO_PE2()                       SYS->GPE_MFP0 = (SYS->GPE_MFP0 & (~(SYS_GPE_MFP0_PE2MFP_Msk )))     /*!< Set GPE2  function to GPIO */
#define SET_GPIO_PE3()                       SYS->GPE_MFP0 = (SYS->GPE_MFP0 & (~(SYS_GPE_MFP0_PE3MFP_Msk )))     /*!< Set GPE3  function to GPIO */
#define SET_GPIO_PE4()                       SYS->GPE_MFP1 = (SYS->GPE_MFP1 & (~(SYS_GPE_MFP1_PE4MFP_Msk )))     /*!< Set GPE4  function to GPIO */
#define SET_GPIO_PE5()                       SYS->GPE_MFP1 = (SYS->GPE_MFP1 & (~(SYS_GPE_MFP1_PE5MFP_Msk )))     /*!< Set GPE5  function to GPIO */
#define SET_GPIO_PE6()                       SYS->GPE_MFP1 = (SYS->GPE_MFP1 & (~(SYS_GPE_MFP1_PE6MFP_Msk )))     /*!< Set GPE6  function to GPIO */
#define SET_GPIO_PE7()                       SYS->GPE_MFP1 = (SYS->GPE_MFP1 & (~(SYS_GPE_MFP1_PE7MFP_Msk )))     /*!< Set GPE7  function to GPIO */
#define SET_GPIO_PE8()                       SYS->GPE_MFP2 = (SYS->GPE_MFP2 & (~(SYS_GPE_MFP2_PE8MFP_Msk )))     /*!< Set GPE8  function to GPIO */
#define SET_GPIO_PE9()                       SYS->GPE_MFP2 = (SYS->GPE_MFP2 & (~(SYS_GPE_MFP2_PE9MFP_Msk )))     /*!< Set GPE9  function to GPIO */
#define SET_GPIO_PE10()                      SYS->GPE_MFP2 = (SYS->GPE_MFP2 & (~(SYS_GPE_MFP2_PE10MFP_Msk)))     /*!< Set GPE10 function to GPIO */
#define SET_GPIO_PE11()                      SYS->GPE_MFP2 = (SYS->GPE_MFP2 & (~(SYS_GPE_MFP2_PE11MFP_Msk)))     /*!< Set GPE11 function to GPIO */
#define SET_GPIO_PE12()                      SYS->GPE_MFP3 = (SYS->GPE_MFP3 & (~(SYS_GPE_MFP3_PE12MFP_Msk)))     /*!< Set GPE12 function to GPIO */
#define SET_GPIO_PE13()                      SYS->GPE_MFP3 = (SYS->GPE_MFP3 & (~(SYS_GPE_MFP3_PE13MFP_Msk)))     /*!< Set GPE13 function to GPIO */
#define SET_GPIO_PE14()                      SYS->GPE_MFP3 = (SYS->GPE_MFP3 & (~(SYS_GPE_MFP3_PE14MFP_Msk)))     /*!< Set GPE14 function to GPIO */
#define SET_GPIO_PE15()                      SYS->GPE_MFP3 = (SYS->GPE_MFP3 & (~(SYS_GPE_MFP3_PE15MFP_Msk)))     /*!< Set GPE15 function to GPIO */
#define SET_GPIO_PF0()                       SYS->GPF_MFP0 = (SYS->GPF_MFP0 & (~(SYS_GPF_MFP0_PF0MFP_Msk )))     /*!< Set GPF0  function to GPIO */
#define SET_GPIO_PF1()                       SYS->GPF_MFP0 = (SYS->GPF_MFP0 & (~(SYS_GPF_MFP0_PF1MFP_Msk )))     /*!< Set GPF1  function to GPIO */
#define SET_GPIO_PF2()                       SYS->GPF_MFP0 = (SYS->GPF_MFP0 & (~(SYS_GPF_MFP0_PF2MFP_Msk )))     /*!< Set GPF2  function to GPIO */
#define SET_GPIO_PF3()                       SYS->GPF_MFP0 = (SYS->GPF_MFP0 & (~(SYS_GPF_MFP0_PF3MFP_Msk )))     /*!< Set GPF3  function to GPIO */
#define SET_GPIO_PF4()                       SYS->GPF_MFP1 = (SYS->GPF_MFP1 & (~(SYS_GPF_MFP1_PF4MFP_Msk )))     /*!< Set GPF4  function to GPIO */
#define SET_GPIO_PF5()                       SYS->GPF_MFP1 = (SYS->GPF_MFP1 & (~(SYS_GPF_MFP1_PF5MFP_Msk )))     /*!< Set GPF5  function to GPIO */
#define SET_GPIO_PF6()                       SYS->GPF_MFP1 = (SYS->GPF_MFP1 & (~(SYS_GPF_MFP1_PF6MFP_Msk )))     /*!< Set GPF6  function to GPIO */
#define SET_GPIO_PF7()                       SYS->GPF_MFP1 = (SYS->GPF_MFP1 & (~(SYS_GPF_MFP1_PF7MFP_Msk )))     /*!< Set GPF7  function to GPIO */
#define SET_GPIO_PF8()                       SYS->GPF_MFP2 = (SYS->GPF_MFP2 & (~(SYS_GPF_MFP2_PF8MFP_Msk )))     /*!< Set GPF8  function to GPIO */
#define SET_GPIO_PF9()                       SYS->GPF_MFP2 = (SYS->GPF_MFP2 & (~(SYS_GPF_MFP2_PF9MFP_Msk )))     /*!< Set GPF9  function to GPIO */
#define SET_GPIO_PF10()                      SYS->GPF_MFP2 = (SYS->GPF_MFP2 & (~(SYS_GPF_MFP2_PF10MFP_Msk)))     /*!< Set GPF10 function to GPIO */
#define SET_GPIO_PF11()                      SYS->GPF_MFP2 = (SYS->GPF_MFP2 & (~(SYS_GPF_MFP2_PF11MFP_Msk)))     /*!< Set GPF11 function to GPIO */
#define SET_GPIO_PF12()                      SYS->GPF_MFP3 = (SYS->GPF_MFP3 & (~(SYS_GPF_MFP3_PF12MFP_Msk)))     /*!< Set GPF12 function to GPIO */
#define SET_GPIO_PF13()                      SYS->GPF_MFP3 = (SYS->GPF_MFP3 & (~(SYS_GPF_MFP3_PF13MFP_Msk)))     /*!< Set GPF13 function to GPIO */
#define SET_GPIO_PF14()                      SYS->GPF_MFP3 = (SYS->GPF_MFP3 & (~(SYS_GPF_MFP3_PF14MFP_Msk)))     /*!< Set GPF14 function to GPIO */
#define SET_GPIO_PF15()                      SYS->GPF_MFP3 = (SYS->GPF_MFP3 & (~(SYS_GPF_MFP3_PF15MFP_Msk)))     /*!< Set GPF15 function to GPIO */
#define SET_GPIO_PG0()                       SYS->GPG_MFP0 = (SYS->GPG_MFP0 & (~(SYS_GPG_MFP0_PG0MFP_Msk )))     /*!< Set GPG0  function to GPIO */
#define SET_GPIO_PG1()                       SYS->GPG_MFP0 = (SYS->GPG_MFP0 & (~(SYS_GPG_MFP0_PG1MFP_Msk )))     /*!< Set GPG1  function to GPIO */
#define SET_GPIO_PG2()                       SYS->GPG_MFP0 = (SYS->GPG_MFP0 & (~(SYS_GPG_MFP0_PG2MFP_Msk )))     /*!< Set GPG2  function to GPIO */
#define SET_GPIO_PG3()                       SYS->GPG_MFP0 = (SYS->GPG_MFP0 & (~(SYS_GPG_MFP0_PG3MFP_Msk )))     /*!< Set GPG3  function to GPIO */
#define SET_GPIO_PG4()                       SYS->GPG_MFP1 = (SYS->GPG_MFP1 & (~(SYS_GPG_MFP1_PG4MFP_Msk )))     /*!< Set GPG4  function to GPIO */
#define SET_GPIO_PG5()                       SYS->GPG_MFP1 = (SYS->GPG_MFP1 & (~(SYS_GPG_MFP1_PG5MFP_Msk )))     /*!< Set GPG5  function to GPIO */
#define SET_GPIO_PG6()                       SYS->GPG_MFP1 = (SYS->GPG_MFP1 & (~(SYS_GPG_MFP1_PG6MFP_Msk )))     /*!< Set GPG6  function to GPIO */
#define SET_GPIO_PG7()                       SYS->GPG_MFP1 = (SYS->GPG_MFP1 & (~(SYS_GPG_MFP1_PG7MFP_Msk )))     /*!< Set GPG7  function to GPIO */
#define SET_GPIO_PG8()                       SYS->GPG_MFP2 = (SYS->GPG_MFP2 & (~(SYS_GPG_MFP2_PG8MFP_Msk )))     /*!< Set GPG8  function to GPIO */
#define SET_GPIO_PG9()                       SYS->GPG_MFP2 = (SYS->GPG_MFP2 & (~(SYS_GPG_MFP2_PG9MFP_Msk )))     /*!< Set GPG9  function to GPIO */
#define SET_GPIO_PG10()                      SYS->GPG_MFP2 = (SYS->GPG_MFP2 & (~(SYS_GPG_MFP2_PG10MFP_Msk)))     /*!< Set GPG10 function to GPIO */
#define SET_GPIO_PG11()                      SYS->GPG_MFP2 = (SYS->GPG_MFP2 & (~(SYS_GPG_MFP2_PG11MFP_Msk)))     /*!< Set GPG11 function to GPIO */
#define SET_GPIO_PG12()                      SYS->GPG_MFP3 = (SYS->GPG_MFP3 & (~(SYS_GPG_MFP3_PG12MFP_Msk)))     /*!< Set GPG12 function to GPIO */
#define SET_GPIO_PG13()                      SYS->GPG_MFP3 = (SYS->GPG_MFP3 & (~(SYS_GPG_MFP3_PG13MFP_Msk)))     /*!< Set GPG13 function to GPIO */
#define SET_GPIO_PG14()                      SYS->GPG_MFP3 = (SYS->GPG_MFP3 & (~(SYS_GPG_MFP3_PG14MFP_Msk)))     /*!< Set GPG14 function to GPIO */
#define SET_GPIO_PG15()                      SYS->GPG_MFP3 = (SYS->GPG_MFP3 & (~(SYS_GPG_MFP3_PG15MFP_Msk)))     /*!< Set GPG15 function to GPIO */
#define SET_GPIO_PH0()                       SYS->GPH_MFP0 = (SYS->GPH_MFP0 & (~(SYS_GPH_MFP0_PH0MFP_Msk )))     /*!< Set GPH0  function to GPIO */
#define SET_GPIO_PH1()                       SYS->GPH_MFP0 = (SYS->GPH_MFP0 & (~(SYS_GPH_MFP0_PH1MFP_Msk )))     /*!< Set GPH1  function to GPIO */
#define SET_GPIO_PH2()                       SYS->GPH_MFP0 = (SYS->GPH_MFP0 & (~(SYS_GPH_MFP0_PH2MFP_Msk )))     /*!< Set GPH2  function to GPIO */
#define SET_GPIO_PH3()                       SYS->GPH_MFP0 = (SYS->GPH_MFP0 & (~(SYS_GPH_MFP0_PH3MFP_Msk )))     /*!< Set GPH3  function to GPIO */
#define SET_GPIO_PH4()                       SYS->GPH_MFP1 = (SYS->GPH_MFP1 & (~(SYS_GPH_MFP1_PH4MFP_Msk )))     /*!< Set GPH4  function to GPIO */
#define SET_GPIO_PH5()                       SYS->GPH_MFP1 = (SYS->GPH_MFP1 & (~(SYS_GPH_MFP1_PH5MFP_Msk )))     /*!< Set GPH5  function to GPIO */
#define SET_GPIO_PH6()                       SYS->GPH_MFP1 = (SYS->GPH_MFP1 & (~(SYS_GPH_MFP1_PH6MFP_Msk )))     /*!< Set GPH6  function to GPIO */
#define SET_GPIO_PH7()                       SYS->GPH_MFP1 = (SYS->GPH_MFP1 & (~(SYS_GPH_MFP1_PH7MFP_Msk )))     /*!< Set GPH7  function to GPIO */
#define SET_GPIO_PH8()                       SYS->GPH_MFP2 = (SYS->GPH_MFP2 & (~(SYS_GPH_MFP2_PH8MFP_Msk )))     /*!< Set GPH8  function to GPIO */
#define SET_GPIO_PH9()                       SYS->GPH_MFP2 = (SYS->GPH_MFP2 & (~(SYS_GPH_MFP2_PH9MFP_Msk )))     /*!< Set GPH9  function to GPIO */
#define SET_GPIO_PH10()                      SYS->GPH_MFP2 = (SYS->GPH_MFP2 & (~(SYS_GPH_MFP2_PH10MFP_Msk)))     /*!< Set GPH10 function to GPIO */
#define SET_GPIO_PH11()                      SYS->GPH_MFP2 = (SYS->GPH_MFP2 & (~(SYS_GPH_MFP2_PH11MFP_Msk)))     /*!< Set GPH11 function to GPIO */


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
  *             The register write-protection function should be disabled before using this macro.
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
  * @brief      Get reset source is from system (MCU) reset
  * @param      None
  * @retval     0   Previous reset source is not from system (MCU) reset
  * @retval     >=1 Previous reset source is from system (MCU) reset
  * @details    This macro get previous reset source is from system (MCU) reset.
  * \hideinitializer
  */
#define SYS_IS_SYSTEM_RST()             (SYS->RSTSTS & SYS_RSTSTS_MCURF_Msk)

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
#define SYS_DISABLE_POR() \
            (SYS->PORCTL = 0x5AA5); \
            (SYS->PORDISAN = 0x5AA5);

/**
  * @brief      Enable Power-on Reset function
  * @param      None
  * @return     None
  * @details    This macro enable Power-on Reset function.
  *             The register write-protection function should be disabled before using this macro.
  * \hideinitializer
  */
#define SYS_ENABLE_POR() \
            (SYS->PORCTL = 0); \
            (SYS->PORDISAN = 0);

/**
  * @brief      Clear reset source flag
  * @param[in]  u32RstSrc is reset source. Including :
  *             - \ref SYS_RSTSTS_PORF_Msk
  *             - \ref SYS_RSTSTS_PINRF_Msk
  *             - \ref SYS_RSTSTS_WDTRF_Msk
  *             - \ref SYS_RSTSTS_LVRF_Msk
  *             - \ref SYS_RSTSTS_BODRF_Msk
  *             - \ref SYS_RSTSTS_MCURF_Msk
  *             - \ref SYS_RSTSTS_HRESETRF_Msk
  *             - \ref SYS_RSTSTS_CPURF_Msk
  *             - \ref SYS_RSTSTS_CPULKRF_Msk
  * @return     None
  * @details    This macro clear reset source flag.
  * \hideinitializer
  */
#define SYS_CLEAR_RST_SOURCE(u32RstSrc) ((SYS->RSTSTS) = (u32RstSrc) )

#if 0
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
    uint32_t u32TimeOutCount = __HIRC;

    do
    {
        SYS->REGLCTL = 0x59UL;
        SYS->REGLCTL = 0x16UL;
        SYS->REGLCTL = 0x88UL;

        if(--u32TimeOutCount == 0) break;
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


void SYS_ClearResetSrc(uint32_t u32Src);
uint32_t SYS_GetBODStatus(void);
uint32_t SYS_GetResetSrc(void);
uint32_t SYS_IsRegLocked(void);
uint32_t SYS_ReadPDID(void);
void SYS_ResetChip(void);
void SYS_ResetCPU(void);
void SYS_ResetModule(uint32_t u32ModuleIndex);
void SYS_EnableBOD(int32_t i32Mode, uint32_t u32BODLevel);
void SYS_DisableBOD(void);
int32_t SYS_SetPowerLevel(uint32_t u32PowerLevel);
void SYS_SetVRef(uint32_t u32VRefCTL);

/*@}*/ /* end of group SYS_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group SYS_Driver */

/*@}*/ /* end of group Standard_Driver */
#endif

#ifdef __cplusplus
}
#endif

#endif  /* __SYS_H__ */
