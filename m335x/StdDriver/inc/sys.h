/**************************************************************************//**
 * @file     SYS.h
 * @version  V1.00
 * @brief    SYS driver header file
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
/*  Module reset control register constant definitions.                                                    */
/*---------------------------------------------------------------------------------------------------------*/
#define PDMA0_RST       ((uint32_t)(0UL<<24) | (uint32_t)SYS_IPRST0_PDMA0RST_Pos)     /*!< Reset PDMA0 \hideinitializer */
#define EBI_RST         ((uint32_t)(0UL<<24) | (uint32_t)SYS_IPRST0_EBIRST_Pos)       /*!< Reset EBI \hideinitializer */
#define USBH_RST        ((uint32_t)(0UL<<24) | (uint32_t)SYS_IPRST0_USBHRST_Pos)       /*!< Reset USBH \hideinitializer */
#define CRC_RST         ((uint32_t)(0UL<<24) | (uint32_t)SYS_IPRST0_CRCRST_Pos)       /*!< Reset CRC \hideinitializer */
#define CANFD0_RST      ((uint32_t)(0UL<<24) | (uint32_t)SYS_IPRST0_CANFD0RST_Pos)     /*!< Reset CANFD0 \hideinitializer */
#define CANFD1_RST      ((uint32_t)(0UL<<24) | (uint32_t)SYS_IPRST0_CANFD1RST_Pos)     /*!< Reset CANFD1 \hideinitializer */
#define CRPT_RST        ((uint32_t)(0UL<<24) | (uint32_t)SYS_IPRST0_CRPTRST_Pos)       /*!< Reset CRPT \hideinitializer */

#define GPIO_RST        ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_GPIORST_Pos)     /*!< Reset GPIO \hideinitializer */
#define TMR0_RST        ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_TMR0RST_Pos)     /*!< Reset TMR0 \hideinitializer */
#define TMR1_RST        ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_TMR1RST_Pos)     /*!< Reset TMR1 \hideinitializer */
#define TMR2_RST        ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_TMR2RST_Pos)     /*!< Reset TMR2 \hideinitializer */
#define TMR3_RST        ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_TMR3RST_Pos)     /*!< Reset TMR3 \hideinitializer */
#define ACMP01_RST      ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_ACMP01RST_Pos)   /*!< Reset ACMP01 \hideinitializer */
#define I2C0_RST        ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_I2C0RST_Pos)     /*!< Reset I2C0 \hideinitializer */
#define I2C1_RST        ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_I2C1RST_Pos)     /*!< Reset I2C1 \hideinitializer */
#define I2C2_RST        ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_I2C2RST_Pos)     /*!< Reset I2C2 \hideinitializer */
#define I3C0_RST        ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_I3C0RST_Pos)     /*!< Reset I3C0 \hideinitializer */
#define QSPI0_RST       ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_QSPI0RST_Pos)    /*!< Reset QSPI0 \hideinitializer */
#define SPI0_RST        ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_SPI0RST_Pos)     /*!< Reset SPI0 \hideinitializer */
#define SPI1_RST        ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_SPI1RST_Pos)     /*!< Reset SPI1 \hideinitializer */
#define UART0_RST       ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_UART0RST_Pos)    /*!< Reset UART0 \hideinitializer */
#define UART1_RST       ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_UART1RST_Pos)    /*!< Reset UART1 \hideinitializer */
#define UART2_RST       ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_UART2RST_Pos)    /*!< Reset UART2 \hideinitializer */
#define UART3_RST       ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_UART3RST_Pos)    /*!< Reset UART3 \hideinitializer */
#define UART4_RST       ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_UART4RST_Pos)    /*!< Reset UART4 \hideinitializer */
#define UART5_RST       ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_UART5RST_Pos)    /*!< Reset UART5 \hideinitializer */
#define UART8_RST       ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_UART8RST_Pos)    /*!< Reset UART8 \hideinitializer */
#define UART9_RST       ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_UART9RST_Pos)    /*!< Reset UART9 \hideinitializer */
#define WWDT0_RST       ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_WWDT0RST_Pos)    /*!< Reset WWDT0 \hideinitializer */
#define WWDT1_RST       ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_WWDT1RST_Pos)    /*!< Reset WWDT1 \hideinitializer */
#define USBD_RST        ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_USBDRST_Pos)     /*!< Reset USBD \hideinitializer */
#define EADC0_RST       ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_EADC0RST_Pos)    /*!< Reset EADC0 \hideinitializer */
#define TRNG_RST        ((uint32_t)(4UL<<24) | (uint32_t)SYS_IPRST1_TRNGRST_Pos)     /*!< Reset TRNG \hideinitializer */

#define USCI0_RST       ((uint32_t)(8UL<<24) | (uint32_t)SYS_IPRST2_USCI0RST_Pos)    /*!< Reset USCI0 \hideinitializer */
#define USCI1_RST       ((uint32_t)(8UL<<24) | (uint32_t)SYS_IPRST2_USCI1RST_Pos)    /*!< Reset USCI1 \hideinitializer */
#define DAC0_RST        ((uint32_t)(8UL<<24) | (uint32_t)SYS_IPRST2_DAC0RST_Pos)     /*!< Reset DAC0 \hideinitializer */
#define PWM0_RST        ((uint32_t)(8UL<<24) | (uint32_t)SYS_IPRST2_PWM0RST_Pos)     /*!< Reset PWM0 \hideinitializer */
#define PWM1_RST        ((uint32_t)(8UL<<24) | (uint32_t)SYS_IPRST2_PWM1RST_Pos)     /*!< Reset PWM1 \hideinitializer */
#define BPWM0_RST       ((uint32_t)(8UL<<24) | (uint32_t)SYS_IPRST2_BPWM0RST_Pos)    /*!< Reset BPWM0 \hideinitializer */
#define BPWM1_RST       ((uint32_t)(8UL<<24) | (uint32_t)SYS_IPRST2_BPWM1RST_Pos)    /*!< Reset BPWM1 \hideinitializer */
#define EQEI0_RST       ((uint32_t)(8UL<<24) | (uint32_t)SYS_IPRST2_EQEI0RST_Pos)    /*!< Reset EQEI0 \hideinitializer */
#define EQEI1_RST       ((uint32_t)(8UL<<24) | (uint32_t)SYS_IPRST2_EQEI1RST_Pos)    /*!< Reset EQEI1 \hideinitializer */
#define UART6_RST       ((uint32_t)(8UL<<24) | (uint32_t)SYS_IPRST2_UART6RST_Pos)    /*!< Reset UART6 \hideinitializer */
#define UART7_RST       ((uint32_t)(8UL<<24) | (uint32_t)SYS_IPRST2_UART7RST_Pos)    /*!< Reset UART7 \hideinitializer */
#define ECAP0_RST       ((uint32_t)(8UL<<24) | (uint32_t)SYS_IPRST2_ECAP0RST_Pos)    /*!< Reset ECAP0 \hideinitializer */
#define EADC1_RST       ((uint32_t)(8UL<<24) | (uint32_t)SYS_IPRST2_EADC1RST_Pos)    /*!< Reset EADC1 \hideinitializer */

#define LLSI0_RST       ((uint32_t)(0x18UL<<24) | (uint32_t)SYS_IPRST3_LLSI0RST_Pos)  /*!< Reset LLSI0 \hideinitializer */
#define LLSI1_RST       ((uint32_t)(0x18UL<<24) | (uint32_t)SYS_IPRST3_LLSI1RST_Pos)  /*!< Reset LLSI1 \hideinitializer */
#define LLSI2_RST       ((uint32_t)(0x18UL<<24) | (uint32_t)SYS_IPRST3_LLSI2RST_Pos)  /*!< Reset LLSI2 \hideinitializer */
#define LLSI3_RST       ((uint32_t)(0x18UL<<24) | (uint32_t)SYS_IPRST3_LLSI3RST_Pos)  /*!< Reset LLSI3 \hideinitializer */
#define LLSI4_RST       ((uint32_t)(0x18UL<<24) | (uint32_t)SYS_IPRST3_LLSI4RST_Pos)  /*!< Reset LLSI4 \hideinitializer */
#define LLSI5_RST       ((uint32_t)(0x18UL<<24) | (uint32_t)SYS_IPRST3_LLSI5RST_Pos)  /*!< Reset LLSI5 \hideinitializer */
#define LLSI6_RST       ((uint32_t)(0x18UL<<24) | (uint32_t)SYS_IPRST3_LLSI6RST_Pos)  /*!< Reset LLSI6 \hideinitializer */
#define LLSI7_RST       ((uint32_t)(0x18UL<<24) | (uint32_t)SYS_IPRST3_LLSI7RST_Pos)  /*!< Reset LLSI7 \hideinitializer */
#define LLSI8_RST       ((uint32_t)(0x18UL<<24) | (uint32_t)SYS_IPRST3_LLSI8RST_Pos)  /*!< Reset LLSI8 \hideinitializer */
#define LLSI9_RST       ((uint32_t)(0x18UL<<24) | (uint32_t)SYS_IPRST3_LLSI9RST_Pos)  /*!< Reset LLSI9 \hideinitializer */
#define ELLSI0_RST      ((uint32_t)(0x18UL<<24) | (uint32_t)SYS_IPRST3_ELLSI0RST_Pos) /*!< Reset ELLSI0 \hideinitializer */
#define ELLSI1_RST      ((uint32_t)(0x18UL<<24) | (uint32_t)SYS_IPRST3_ELLSI1RST_Pos) /*!< Reset ELLSI1 \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  Brown Out Detector Threshold Voltage Selection constant definitions.                                   */
/*---------------------------------------------------------------------------------------------------------*/
#define SYS_BODCTL_BOD_RST_EN           (1UL << SYS_BODCTL_BODRSTEN_Pos)    /*!< Brown-out Reset Enable \hideinitializer */
#define SYS_BODCTL_BOD_INTERRUPT_EN     (0UL << SYS_BODCTL_BODRSTEN_Pos)    /*!< Brown-out Interrupt Enable \hideinitializer */

#define SYS_BODCTL_BODVL_2_8V           (0xBUL << SYS_BODCTL_BODVL_Pos)     /*!< Setting Brown Out Detector Threshold Voltage as 2.8V \hideinitializer */
#define SYS_BODCTL_BODVL_3_7V           (0xDUL << SYS_BODCTL_BODVL_Pos)     /*!< Setting Brown Out Detector Threshold Voltage as 3.7V \hideinitializer */
#define SYS_BODCTL_BODVL_4_4V           (0xFUL << SYS_BODCTL_BODVL_Pos)     /*!< Setting Brown Out Detector Threshold Voltage as 4.4V \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  VREFCTL constant definitions. (Write-Protection Register)                                              */
/*---------------------------------------------------------------------------------------------------------*/
#define SYS_VREFCTL_VREF_PIN            (0x0UL << SYS_VREFCTL_VREFCTL_Pos)    /*!< Vref = Vref pin \hideinitializer */
#define SYS_VREFCTL_VREF_2_5V           (0x3UL << SYS_VREFCTL_VREFCTL_Pos)    /*!< Vref = 2.5V \hideinitializer */
#define SYS_VREFCTL_VREF_3_0V           (0x5UL << SYS_VREFCTL_VREFCTL_Pos)    /*!< Vref = 3.0V \hideinitializer */
#define SYS_VREFCTL_VREF_4_0V           (0x7UL << SYS_VREFCTL_VREFCTL_Pos)    /*!< Vref = 4.5V \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  USBPHY constant definitions. (Write-Protection Register)                                               */
/*---------------------------------------------------------------------------------------------------------*/
#define SYS_USBPHY_USBROLE_STD_USBD     (0x0UL << SYS_USBPHY_USBROLE_Pos)   /*!<  Standard USB device \hideinitializer */
#define SYS_USBPHY_USBROLE_STD_USBH     (0x1UL << SYS_USBPHY_USBROLE_Pos)   /*!<  Standard USB host \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  Multi-Function constant definitions.                                                                   */
/*---------------------------------------------------------------------------------------------------------*/
/* PA.0 MFP */
#define SYS_GPA_MFP0_PA0MFP_GPIO              (0x0UL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for GPIO               */
#define SYS_GPA_MFP0_PA0MFP_QSPI0_MOSI0       (0x3UL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for QSPI0_MOSI0        */
#define SYS_GPA_MFP0_PA0MFP_SPI0_MOSI         (0x4UL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for SPI0_MOSI          */
#define SYS_GPA_MFP0_PA0MFP_UART0_RXD         (0x7UL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for UART0_RXD          */
#define SYS_GPA_MFP0_PA0MFP_UART1_nRTS        (0x8UL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for UART1_nRTS         */
#define SYS_GPA_MFP0_PA0MFP_I2C2_SDA          (0x9UL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for I2C2_SDA           */
#define SYS_GPA_MFP0_PA0MFP_I3C0_SDA          (0xBUL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for I3C0_SDA           */
#define SYS_GPA_MFP0_PA0MFP_BPWM0_CH0         (0xCUL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for BPWM0_CH0          */
#define SYS_GPA_MFP0_PA0MFP_PWM0_CH5          (0xDUL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for PWM0_CH5           */
#define SYS_GPA_MFP0_PA0MFP_DAC0_ST           (0xFUL<<SYS_GPA_MFP0_PA0MFP_Pos)    /*!< GPA_MFP0 PA0 setting for DAC0_ST            */

/* PA.1 MFP */
#define SYS_GPA_MFP0_PA1MFP_GPIO              (0x0UL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for GPIO               */
#define SYS_GPA_MFP0_PA1MFP_QSPI0_MISO0       (0x3UL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for QSPI0_MISO0        */
#define SYS_GPA_MFP0_PA1MFP_SPI0_MISO         (0x4UL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for SPI0_MISO          */
#define SYS_GPA_MFP0_PA1MFP_LLSI6_OUT         (0x5UL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for LLSI6_OUT          */
#define SYS_GPA_MFP0_PA1MFP_UART0_TXD         (0x7UL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for UART0_TXD          */
#define SYS_GPA_MFP0_PA1MFP_UART1_nCTS        (0x8UL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for UART1_nCTS         */
#define SYS_GPA_MFP0_PA1MFP_I2C2_SCL          (0x9UL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for I2C2_SCL           */
#define SYS_GPA_MFP0_PA1MFP_I3C0_SCL          (0xBUL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for I3C0_SCL           */
#define SYS_GPA_MFP0_PA1MFP_BPWM0_CH1         (0xCUL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for BPWM0_CH1          */
#define SYS_GPA_MFP0_PA1MFP_PWM0_CH4          (0xDUL<<SYS_GPA_MFP0_PA1MFP_Pos)    /*!< GPA_MFP0 PA1 setting for PWM0_CH4           */

/* PA.2 MFP */
#define SYS_GPA_MFP0_PA2MFP_GPIO              (0x0UL<<SYS_GPA_MFP0_PA2MFP_Pos)    /*!< GPA_MFP0 PA2 setting for GPIO               */
#define SYS_GPA_MFP0_PA2MFP_QSPI0_CLK         (0x3UL<<SYS_GPA_MFP0_PA2MFP_Pos)    /*!< GPA_MFP0 PA2 setting for QSPI0_CLK          */
#define SYS_GPA_MFP0_PA2MFP_SPI0_CLK          (0x4UL<<SYS_GPA_MFP0_PA2MFP_Pos)    /*!< GPA_MFP0 PA2 setting for SPI0_CLK           */
#define SYS_GPA_MFP0_PA2MFP_LLSI5_OUT         (0x5UL<<SYS_GPA_MFP0_PA2MFP_Pos)    /*!< GPA_MFP0 PA2 setting for LLSI5_OUT          */
#define SYS_GPA_MFP0_PA2MFP_UART4_RXD         (0x7UL<<SYS_GPA_MFP0_PA2MFP_Pos)    /*!< GPA_MFP0 PA2 setting for UART4_RXD          */
#define SYS_GPA_MFP0_PA2MFP_UART1_RXD         (0x8UL<<SYS_GPA_MFP0_PA2MFP_Pos)    /*!< GPA_MFP0 PA2 setting for UART1_RXD          */
#define SYS_GPA_MFP0_PA2MFP_I2C1_SDA          (0x9UL<<SYS_GPA_MFP0_PA2MFP_Pos)    /*!< GPA_MFP0 PA2 setting for I2C1_SDA           */
#define SYS_GPA_MFP0_PA2MFP_I2C0_SMBSUS       (0xAUL<<SYS_GPA_MFP0_PA2MFP_Pos)    /*!< GPA_MFP0 PA2 setting for I2C0_SMBSUS        */
#define SYS_GPA_MFP0_PA2MFP_BPWM0_CH2         (0xCUL<<SYS_GPA_MFP0_PA2MFP_Pos)    /*!< GPA_MFP0 PA2 setting for BPWM0_CH2          */
#define SYS_GPA_MFP0_PA2MFP_PWM0_CH3          (0xDUL<<SYS_GPA_MFP0_PA2MFP_Pos)    /*!< GPA_MFP0 PA2 setting for PWM0_CH3           */
#define SYS_GPA_MFP0_PA2MFP_I3C0_PUPEN        (0xFUL<<SYS_GPA_MFP0_PA2MFP_Pos)    /*!< GPA_MFP0 PA2 setting for I3C0_PUPEN         */

/* PA.3 MFP */
#define SYS_GPA_MFP0_PA3MFP_GPIO              (0x0UL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for GPIO               */
#define SYS_GPA_MFP0_PA3MFP_QSPI0_SS          (0x3UL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for QSPI0_SS           */
#define SYS_GPA_MFP0_PA3MFP_SPI0_SS           (0x4UL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for SPI0_SS            */
#define SYS_GPA_MFP0_PA3MFP_LLSI4_OUT         (0x5UL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for LLSI4_OUT          */
#define SYS_GPA_MFP0_PA3MFP_UART0_RXD         (0x6UL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for UART0_RXD          */
#define SYS_GPA_MFP0_PA3MFP_UART4_TXD         (0x7UL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for UART4_TXD          */
#define SYS_GPA_MFP0_PA3MFP_UART1_TXD         (0x8UL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for UART1_TXD          */
#define SYS_GPA_MFP0_PA3MFP_I2C1_SCL          (0x9UL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for I2C1_SCL           */
#define SYS_GPA_MFP0_PA3MFP_I2C0_SMBAL        (0xAUL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for I2C0_SMBAL         */
#define SYS_GPA_MFP0_PA3MFP_BPWM0_CH3         (0xCUL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for BPWM0_CH3          */
#define SYS_GPA_MFP0_PA3MFP_PWM0_CH2          (0xDUL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for PWM0_CH2           */
#define SYS_GPA_MFP0_PA3MFP_EQEI0_B           (0xEUL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for EQEI0_B            */
#define SYS_GPA_MFP0_PA3MFP_PWM1_BRAKE1       (0xFUL<<SYS_GPA_MFP0_PA3MFP_Pos)    /*!< GPA_MFP0 PA3 setting for PWM1_BRAKE1        */

/* PA.4 MFP */
#define SYS_GPA_MFP1_PA4MFP_GPIO              (0x0UL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for GPIO               */
#define SYS_GPA_MFP1_PA4MFP_QSPI0_MOSI1       (0x3UL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for QSPI0_MOSI1        */
#define SYS_GPA_MFP1_PA4MFP_SPI0_I2SMCLK      (0x4UL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for SPI0_I2SMCLK       */
#define SYS_GPA_MFP1_PA4MFP_UART4_nCTS        (0x5UL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for UART4_nCTS         */
#define SYS_GPA_MFP1_PA4MFP_UART0_TXD         (0x6UL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for UART0_TXD          */
#define SYS_GPA_MFP1_PA4MFP_UART0_nRTS        (0x7UL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for UART0_nRTS         */
#define SYS_GPA_MFP1_PA4MFP_UART5_RXD         (0x8UL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for UART5_RXD          */
#define SYS_GPA_MFP1_PA4MFP_I2C0_SDA          (0x9UL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for I2C0_SDA           */
#define SYS_GPA_MFP1_PA4MFP_CANFD0_RXD        (0xAUL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for CANFD0_RXD         */
#define SYS_GPA_MFP1_PA4MFP_UART0_RXD         (0xBUL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for UART0_RXD          */
#define SYS_GPA_MFP1_PA4MFP_BPWM0_CH4         (0xCUL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for BPWM0_CH4          */
#define SYS_GPA_MFP1_PA4MFP_PWM0_CH1          (0xDUL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for PWM0_CH1           */
#define SYS_GPA_MFP1_PA4MFP_EQEI0_A           (0xEUL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for EQEI0_A            */
#define SYS_GPA_MFP1_PA4MFP_I3C0_SDA          (0xFUL<<SYS_GPA_MFP1_PA4MFP_Pos)    /*!< GPA_MFP1 PA4 setting for I3C0_SDA           */

/* PA.5 MFP */
#define SYS_GPA_MFP1_PA5MFP_GPIO              (0x0UL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for GPIO               */
#define SYS_GPA_MFP1_PA5MFP_QSPI0_MISO1       (0x3UL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for QSPI0_MISO1        */
#define SYS_GPA_MFP1_PA5MFP_UART4_nRTS        (0x5UL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for UART4_nRTS         */
#define SYS_GPA_MFP1_PA5MFP_CANFD0_TXH        (0x6UL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for CANFD0_TXH         */
#define SYS_GPA_MFP1_PA5MFP_UART0_nCTS        (0x7UL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for UART0_nCTS         */
#define SYS_GPA_MFP1_PA5MFP_UART5_TXD         (0x8UL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for UART5_TXD          */
#define SYS_GPA_MFP1_PA5MFP_I2C0_SCL          (0x9UL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for I2C0_SCL           */
#define SYS_GPA_MFP1_PA5MFP_CANFD0_TXD        (0xAUL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for CANFD0_TXD         */
#define SYS_GPA_MFP1_PA5MFP_UART0_TXD         (0xBUL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for UART0_TXD          */
#define SYS_GPA_MFP1_PA5MFP_BPWM0_CH5         (0xCUL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for BPWM0_CH5          */
#define SYS_GPA_MFP1_PA5MFP_PWM0_CH0          (0xDUL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for PWM0_CH0           */
#define SYS_GPA_MFP1_PA5MFP_EQEI0_INDEX       (0xEUL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for EQEI0_INDEX        */
#define SYS_GPA_MFP1_PA5MFP_I3C0_SCL          (0xFUL<<SYS_GPA_MFP1_PA5MFP_Pos)    /*!< GPA_MFP1 PA5 setting for I3C0_SCL           */

/* PA.6 MFP */
#define SYS_GPA_MFP1_PA6MFP_GPIO              (0x0UL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for GPIO               */
#define SYS_GPA_MFP1_PA6MFP_EBI_AD6           (0x2UL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for EBI_AD6            */
#define SYS_GPA_MFP1_PA6MFP_SPI1_SS           (0x4UL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for SPI1_SS            */
#define SYS_GPA_MFP1_PA6MFP_ELLSI1_OUT        (0x5UL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for ELLSI1_OUT         */
#define SYS_GPA_MFP1_PA6MFP_CANFD0_TXL        (0x6UL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for CANFD0_TXL         */
#define SYS_GPA_MFP1_PA6MFP_UART0_RXD         (0x7UL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for UART0_RXD          */
#define SYS_GPA_MFP1_PA6MFP_I2C1_SDA          (0x8UL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for I2C1_SDA           */
#define SYS_GPA_MFP1_PA6MFP_UART8_RXD         (0xAUL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for UART8_RXD          */
#define SYS_GPA_MFP1_PA6MFP_PWM1_CH5          (0xBUL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for PWM1_CH5           */
#define SYS_GPA_MFP1_PA6MFP_BPWM1_CH3         (0xCUL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for BPWM1_CH3          */
#define SYS_GPA_MFP1_PA6MFP_ACMP1_WLAT        (0xDUL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for ACMP1_WLAT         */
#define SYS_GPA_MFP1_PA6MFP_TM3               (0xEUL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for TM3                */
#define SYS_GPA_MFP1_PA6MFP_INT0              (0xFUL<<SYS_GPA_MFP1_PA6MFP_Pos)    /*!< GPA_MFP1 PA6 setting for INT0               */

/* PA.7 MFP */
#define SYS_GPA_MFP1_PA7MFP_GPIO              (0x0UL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for GPIO               */
#define SYS_GPA_MFP1_PA7MFP_EBI_AD7           (0x2UL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for EBI_AD7            */
#define SYS_GPA_MFP1_PA7MFP_SPI1_CLK          (0x4UL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for SPI1_CLK           */
#define SYS_GPA_MFP1_PA7MFP_ELLSI0_OUT        (0x5UL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for ELLSI0_OUT         */
#define SYS_GPA_MFP1_PA7MFP_UART0_TXD         (0x7UL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for UART0_TXD          */
#define SYS_GPA_MFP1_PA7MFP_I2C1_SCL          (0x8UL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for I2C1_SCL           */
#define SYS_GPA_MFP1_PA7MFP_UART8_TXD         (0xAUL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for UART8_TXD          */
#define SYS_GPA_MFP1_PA7MFP_PWM1_CH4          (0xBUL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for PWM1_CH4           */
#define SYS_GPA_MFP1_PA7MFP_BPWM1_CH2         (0xCUL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for BPWM1_CH2          */
#define SYS_GPA_MFP1_PA7MFP_ACMP0_WLAT        (0xDUL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for ACMP0_WLAT         */
#define SYS_GPA_MFP1_PA7MFP_TM2               (0xEUL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for TM2                */
#define SYS_GPA_MFP1_PA7MFP_INT1              (0xFUL<<SYS_GPA_MFP1_PA7MFP_Pos)    /*!< GPA_MFP1 PA7 setting for INT1               */

/* PA.8 MFP */
#define SYS_GPA_MFP2_PA8MFP_GPIO              (0x0UL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for GPIO               */
#define SYS_GPA_MFP2_PA8MFP_EADC0_CH20        (0x1UL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for EADC0_CH20         */
#define SYS_GPA_MFP2_PA8MFP_EBI_ALE           (0x2UL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for EBI_ALE            */
#define SYS_GPA_MFP2_PA8MFP_UART1_TXD         (0x4UL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for UART1_TXD          */
#define SYS_GPA_MFP2_PA8MFP_USCI0_CTL1        (0x6UL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for USCI0_CTL1         */
#define SYS_GPA_MFP2_PA8MFP_UART1_RXD         (0x7UL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for UART1_RXD          */
#define SYS_GPA_MFP2_PA8MFP_CANFD1_TXL        (0x8UL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for CANFD1_TXL         */
#define SYS_GPA_MFP2_PA8MFP_BPWM0_CH3         (0x9UL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for BPWM0_CH3          */
#define SYS_GPA_MFP2_PA8MFP_EQEI1_A           (0xAUL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for EQEI1_A            */
#define SYS_GPA_MFP2_PA8MFP_ECAP0_IC2         (0xBUL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for ECAP0_IC2          */
#define SYS_GPA_MFP2_PA8MFP_TM3_EXT           (0xDUL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for TM3_EXT            */
#define SYS_GPA_MFP2_PA8MFP_INT4              (0xFUL<<SYS_GPA_MFP2_PA8MFP_Pos)    /*!< GPA_MFP2 PA8 setting for INT4               */

/* PA.9 MFP */
#define SYS_GPA_MFP2_PA9MFP_GPIO              (0x0UL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for GPIO               */
#define SYS_GPA_MFP2_PA9MFP_EADC0_CH21        (0x1UL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for EADC0_CH21         */
#define SYS_GPA_MFP2_PA9MFP_EBI_MCLK          (0x2UL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for EBI_MCLK           */
#define SYS_GPA_MFP2_PA9MFP_USCI0_DAT1        (0x6UL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for USCI0_DAT1         */
#define SYS_GPA_MFP2_PA9MFP_UART1_TXD         (0x7UL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for UART1_TXD          */
#define SYS_GPA_MFP2_PA9MFP_BPWM0_CH2         (0x9UL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for BPWM0_CH2          */
#define SYS_GPA_MFP2_PA9MFP_EQEI1_INDEX       (0xAUL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for EQEI1_INDEX        */
#define SYS_GPA_MFP2_PA9MFP_ECAP0_IC1         (0xBUL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for ECAP0_IC1          */
#define SYS_GPA_MFP2_PA9MFP_TM2_EXT           (0xDUL<<SYS_GPA_MFP2_PA9MFP_Pos)    /*!< GPA_MFP2 PA9 setting for TM2_EXT            */

/* PA.10 MFP */
#define SYS_GPA_MFP2_PA10MFP_GPIO             (0x0UL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for GPIO              */
#define SYS_GPA_MFP2_PA10MFP_ACMP1_P0         (0x1UL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for ACMP1_P0          */
#define SYS_GPA_MFP2_PA10MFP_EADC0_CH22       (0x1UL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for EADC0_CH22        */
#define SYS_GPA_MFP2_PA10MFP_EBI_nWR          (0x2UL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for EBI_nWR           */
#define SYS_GPA_MFP2_PA10MFP_I2C2_SDA         (0x5UL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for I2C2_SDA          */
#define SYS_GPA_MFP2_PA10MFP_USCI0_DAT0       (0x6UL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for USCI0_DAT0        */
#define SYS_GPA_MFP2_PA10MFP_UART4_nCTS       (0x7UL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for UART4_nCTS        */
#define SYS_GPA_MFP2_PA10MFP_BPWM0_CH1        (0x9UL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for BPWM0_CH1         */
#define SYS_GPA_MFP2_PA10MFP_UART9_RXD        (0xAUL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for UART9_RXD         */
#define SYS_GPA_MFP2_PA10MFP_ECAP0_IC0        (0xBUL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for ECAP0_IC0         */
#define SYS_GPA_MFP2_PA10MFP_TM1_EXT          (0xDUL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for TM1_EXT           */
#define SYS_GPA_MFP2_PA10MFP_DAC0_ST          (0xEUL<<SYS_GPA_MFP2_PA10MFP_Pos)   /*!< GPA_MFP2 PA10 setting for DAC0_ST           */

/* PA.11 MFP */
#define SYS_GPA_MFP2_PA11MFP_GPIO             (0x0UL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for GPIO              */
#define SYS_GPA_MFP2_PA11MFP_ACMP0_P0         (0x1UL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for ACMP0_P0          */
#define SYS_GPA_MFP2_PA11MFP_EADC0_CH23       (0x1UL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for EADC0_CH23        */
#define SYS_GPA_MFP2_PA11MFP_EBI_nRD          (0x2UL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for EBI_nRD           */
#define SYS_GPA_MFP2_PA11MFP_I2C2_SCL         (0x5UL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for I2C2_SCL          */
#define SYS_GPA_MFP2_PA11MFP_USCI0_CLK        (0x6UL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for USCI0_CLK         */
#define SYS_GPA_MFP2_PA11MFP_UART4_nRTS       (0x7UL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for UART4_nRTS        */
#define SYS_GPA_MFP2_PA11MFP_BPWM0_CH0        (0x9UL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for BPWM0_CH0         */
#define SYS_GPA_MFP2_PA11MFP_UART9_TXD        (0xAUL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for UART9_TXD         */
#define SYS_GPA_MFP2_PA11MFP_PWM0_BRAKE1      (0xBUL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for PWM0_BRAKE1       */
#define SYS_GPA_MFP2_PA11MFP_TM0_EXT          (0xDUL<<SYS_GPA_MFP2_PA11MFP_Pos)   /*!< GPA_MFP2 PA11 setting for TM0_EXT           */

/* PA.12 MFP */
#define SYS_GPA_MFP3_PA12MFP_GPIO             (0x0UL<<SYS_GPA_MFP3_PA12MFP_Pos)   /*!< GPA_MFP3 PA12 setting for GPIO              */
#define SYS_GPA_MFP3_PA12MFP_UART4_TXD        (0x2UL<<SYS_GPA_MFP3_PA12MFP_Pos)   /*!< GPA_MFP3 PA12 setting for UART4_TXD         */
#define SYS_GPA_MFP3_PA12MFP_I2C1_SCL         (0x3UL<<SYS_GPA_MFP3_PA12MFP_Pos)   /*!< GPA_MFP3 PA12 setting for I2C1_SCL          */
#define SYS_GPA_MFP3_PA12MFP_CANFD0_TXD       (0x5UL<<SYS_GPA_MFP3_PA12MFP_Pos)   /*!< GPA_MFP3 PA12 setting for CANFD0_TXD        */
#define SYS_GPA_MFP3_PA12MFP_CANFD0_TXH       (0x7UL<<SYS_GPA_MFP3_PA12MFP_Pos)   /*!< GPA_MFP3 PA12 setting for CANFD0_TXH        */
#define SYS_GPA_MFP3_PA12MFP_BPWM1_CH2        (0xAUL<<SYS_GPA_MFP3_PA12MFP_Pos)   /*!< GPA_MFP3 PA12 setting for BPWM1_CH2         */
#define SYS_GPA_MFP3_PA12MFP_QEI1_INDEX       (0xBUL<<SYS_GPA_MFP3_PA12MFP_Pos)   /*!< GPA_MFP3 PA12 setting for QEI1_INDEX        */

/* PA.13 MFP */
#define SYS_GPA_MFP3_PA13MFP_GPIO             (0x0UL<<SYS_GPA_MFP3_PA13MFP_Pos)   /*!< GPA_MFP3 PA13 setting for GPIO              */
#define SYS_GPA_MFP3_PA13MFP_UART4_RXD        (0x2UL<<SYS_GPA_MFP3_PA13MFP_Pos)   /*!< GPA_MFP3 PA13 setting for UART4_RXD         */
#define SYS_GPA_MFP3_PA13MFP_I2C1_SDA         (0x3UL<<SYS_GPA_MFP3_PA13MFP_Pos)   /*!< GPA_MFP3 PA13 setting for I2C1_SDA          */
#define SYS_GPA_MFP3_PA13MFP_UART1_TXD        (0x4UL<<SYS_GPA_MFP3_PA13MFP_Pos)   /*!< GPA_MFP3 PA13 setting for UART1_TXD         */
#define SYS_GPA_MFP3_PA13MFP_CANFD0_RXD       (0x5UL<<SYS_GPA_MFP3_PA13MFP_Pos)   /*!< GPA_MFP3 PA13 setting for CANFD0_RXD        */
#define SYS_GPA_MFP3_PA13MFP_BPWM1_CH3        (0xAUL<<SYS_GPA_MFP3_PA13MFP_Pos)   /*!< GPA_MFP3 PA13 setting for BPWM1_CH3         */
#define SYS_GPA_MFP3_PA13MFP_QEI1_A           (0xBUL<<SYS_GPA_MFP3_PA13MFP_Pos)   /*!< GPA_MFP3 PA13 setting for QEI1_A            */

/* PA.14 MFP */
#define SYS_GPA_MFP3_PA14MFP_GPIO             (0x0UL<<SYS_GPA_MFP3_PA14MFP_Pos)   /*!< GPA_MFP3 PA14 setting for GPIO              */
#define SYS_GPA_MFP3_PA14MFP_UART0_TXD        (0x2UL<<SYS_GPA_MFP3_PA14MFP_Pos)   /*!< GPA_MFP3 PA14 setting for UART0_TXD         */
#define SYS_GPA_MFP3_PA14MFP_EBI_AD5          (0x3UL<<SYS_GPA_MFP3_PA14MFP_Pos)   /*!< GPA_MFP3 PA14 setting for EBI_AD5           */
#define SYS_GPA_MFP3_PA14MFP_UART1_RXD        (0x4UL<<SYS_GPA_MFP3_PA14MFP_Pos)   /*!< GPA_MFP3 PA14 setting for UART1_RXD         */
#define SYS_GPA_MFP3_PA14MFP_I2C2_SCL         (0x5UL<<SYS_GPA_MFP3_PA14MFP_Pos)   /*!< GPA_MFP3 PA14 setting for I2C2_SCL          */
#define SYS_GPA_MFP3_PA14MFP_BPWM1_CH4        (0xAUL<<SYS_GPA_MFP3_PA14MFP_Pos)   /*!< GPA_MFP3 PA14 setting for BPWM1_CH4         */
#define SYS_GPA_MFP3_PA14MFP_QEI1_B           (0xBUL<<SYS_GPA_MFP3_PA14MFP_Pos)   /*!< GPA_MFP3 PA14 setting for QEI1_B            */

/* PA.15 MFP */
#define SYS_GPA_MFP3_PA15MFP_GPIO             (0x0UL<<SYS_GPA_MFP3_PA15MFP_Pos)   /*!< GPA_MFP3 PA15 setting for GPIO              */
#define SYS_GPA_MFP3_PA15MFP_UART0_RXD        (0x2UL<<SYS_GPA_MFP3_PA15MFP_Pos)   /*!< GPA_MFP3 PA15 setting for UART0_RXD         */
#define SYS_GPA_MFP3_PA15MFP_I2C2_SDA         (0x5UL<<SYS_GPA_MFP3_PA15MFP_Pos)   /*!< GPA_MFP3 PA15 setting for I2C2_SDA          */
#define SYS_GPA_MFP3_PA15MFP_BPWM1_CH5        (0xAUL<<SYS_GPA_MFP3_PA15MFP_Pos)   /*!< GPA_MFP3 PA15 setting for BPWM1_CH5         */

/* PB.0 MFP */
#define SYS_GPB_MFP0_PB0MFP_GPIO              (0x0UL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for GPIO               */
#define SYS_GPB_MFP0_PB0MFP_EADC0_CH0         (0x1UL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for EADC0_CH0          */
#define SYS_GPB_MFP0_PB0MFP_ELLSI1_OUT        (0x2UL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for ELLSI1_OUT         */
#define SYS_GPB_MFP0_PB0MFP_EBI_ADR9          (0x3UL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for EBI_ADR9           */
#define SYS_GPB_MFP0_PB0MFP_USCI0_CTL0        (0x6UL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for USCI0_CTL0         */
#define SYS_GPB_MFP0_PB0MFP_UART2_RXD         (0x7UL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for UART2_RXD          */
#define SYS_GPB_MFP0_PB0MFP_SPI0_I2SMCLK      (0x8UL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for SPI0_I2SMCLK       */
#define SYS_GPB_MFP0_PB0MFP_I2C1_SDA          (0x9UL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for I2C1_SDA           */
#define SYS_GPB_MFP0_PB0MFP_PWM0_CH5          (0xBUL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for PWM0_CH5           */
#define SYS_GPB_MFP0_PB0MFP_PWM1_CH5          (0xCUL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for PWM1_CH5           */
#define SYS_GPB_MFP0_PB0MFP_PWM0_BRAKE1       (0xDUL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for PWM0_BRAKE1        */
#define SYS_GPB_MFP0_PB0MFP_I3C0_SDA          (0xEUL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for I3C0_SDA           */
#define SYS_GPB_MFP0_PB0MFP_QSPI0_MOSI1       (0xFUL<<SYS_GPB_MFP0_PB0MFP_Pos)    /*!< GPB_MFP0 PB0 setting for QSPI0_MOSI1        */

/* PB.1 MFP */
#define SYS_GPB_MFP0_PB1MFP_GPIO              (0x0UL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for GPIO               */
#define SYS_GPB_MFP0_PB1MFP_EADC0_CH1         (0x1UL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for EADC0_CH1          */
#define SYS_GPB_MFP0_PB1MFP_ELLSI0_OUT        (0x2UL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for ELLSI0_OUT         */
#define SYS_GPB_MFP0_PB1MFP_EBI_ADR8          (0x3UL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for EBI_ADR8           */
#define SYS_GPB_MFP0_PB1MFP_UART2_TXD         (0x7UL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for UART2_TXD          */
#define SYS_GPB_MFP0_PB1MFP_USCI1_CLK         (0x8UL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for USCI1_CLK          */
#define SYS_GPB_MFP0_PB1MFP_I2C1_SCL          (0x9UL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for I2C1_SCL           */
#define SYS_GPB_MFP0_PB1MFP_PWM0_CH4          (0xBUL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for PWM0_CH4           */
#define SYS_GPB_MFP0_PB1MFP_PWM1_CH4          (0xCUL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for PWM1_CH4           */
#define SYS_GPB_MFP0_PB1MFP_PWM0_BRAKE0       (0xDUL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for PWM0_BRAKE0        */
#define SYS_GPB_MFP0_PB1MFP_I3C0_SCL          (0xEUL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for I3C0_SCL           */
#define SYS_GPB_MFP0_PB1MFP_QSPI0_MISO1       (0xFUL<<SYS_GPB_MFP0_PB1MFP_Pos)    /*!< GPB_MFP0 PB1 setting for QSPI0_MISO1        */

/* PB.2 MFP */
#define SYS_GPB_MFP0_PB2MFP_GPIO              (0x0UL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for GPIO               */
#define SYS_GPB_MFP0_PB2MFP_ACMP0_P1          (0x1UL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for ACMP0_P1           */
#define SYS_GPB_MFP0_PB2MFP_EADC0_CH2         (0x1UL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for EADC0_CH2          */
#define SYS_GPB_MFP0_PB2MFP_LLSI7_OUT         (0x2UL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for LLSI7_OUT          */
#define SYS_GPB_MFP0_PB2MFP_SPI1_SS           (0x5UL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for SPI1_SS            */
#define SYS_GPB_MFP0_PB2MFP_UART1_RXD         (0x6UL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for UART1_RXD          */
#define SYS_GPB_MFP0_PB2MFP_UART5_nCTS        (0x7UL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for UART5_nCTS         */
#define SYS_GPB_MFP0_PB2MFP_USCI1_DAT0        (0x8UL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for USCI1_DAT0         */
#define SYS_GPB_MFP0_PB2MFP_PWM0_CH3          (0xBUL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for PWM0_CH3           */
#define SYS_GPB_MFP0_PB2MFP_I2C1_SDA          (0xCUL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for I2C1_SDA           */
#define SYS_GPB_MFP0_PB2MFP_TM3               (0xEUL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for TM3                */
#define SYS_GPB_MFP0_PB2MFP_INT3              (0xFUL<<SYS_GPB_MFP0_PB2MFP_Pos)    /*!< GPB_MFP0 PB2 setting for INT3               */

/* PB.3 MFP */
#define SYS_GPB_MFP0_PB3MFP_GPIO              (0x0UL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for GPIO               */
#define SYS_GPB_MFP0_PB3MFP_ACMP0_N           (0x1UL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for ACMP0_N            */
#define SYS_GPB_MFP0_PB3MFP_EADC0_CH3         (0x1UL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for EADC0_CH3          */
#define SYS_GPB_MFP0_PB3MFP_LLSI6_OUT         (0x2UL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for LLSI6_OUT          */
#define SYS_GPB_MFP0_PB3MFP_SPI1_CLK          (0x5UL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for SPI1_CLK           */
#define SYS_GPB_MFP0_PB3MFP_UART1_TXD         (0x6UL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for UART1_TXD          */
#define SYS_GPB_MFP0_PB3MFP_UART5_nRTS        (0x7UL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for UART5_nRTS         */
#define SYS_GPB_MFP0_PB3MFP_USCI1_DAT1        (0x8UL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for USCI1_DAT1         */
#define SYS_GPB_MFP0_PB3MFP_PWM0_CH2          (0xBUL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for PWM0_CH2           */
#define SYS_GPB_MFP0_PB3MFP_I2C1_SCL          (0xCUL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for I2C1_SCL           */
#define SYS_GPB_MFP0_PB3MFP_TM2               (0xEUL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for TM2                */
#define SYS_GPB_MFP0_PB3MFP_INT2              (0xFUL<<SYS_GPB_MFP0_PB3MFP_Pos)    /*!< GPB_MFP0 PB3 setting for INT2               */

/* PB.4 MFP */
#define SYS_GPB_MFP1_PB4MFP_GPIO              (0x0UL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for GPIO               */
#define SYS_GPB_MFP1_PB4MFP_ACMP1_P1          (0x1UL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for ACMP1_P1           */
#define SYS_GPB_MFP1_PB4MFP_EADC0_CH4         (0x1UL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for EADC0_CH4          */
#define SYS_GPB_MFP1_PB4MFP_LLSI5_OUT         (0x2UL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for LLSI5_OUT          */
#define SYS_GPB_MFP1_PB4MFP_SPI1_MOSI         (0x5UL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for SPI1_MOSI          */
#define SYS_GPB_MFP1_PB4MFP_I2C0_SDA          (0x6UL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for I2C0_SDA           */
#define SYS_GPB_MFP1_PB4MFP_UART5_RXD         (0x7UL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for UART5_RXD          */
#define SYS_GPB_MFP1_PB4MFP_USCI1_CTL1        (0x8UL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for USCI1_CTL1         */
#define SYS_GPB_MFP1_PB4MFP_PWM0_CH1          (0xBUL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for PWM0_CH1           */
#define SYS_GPB_MFP1_PB4MFP_UART2_RXD         (0xCUL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for UART2_RXD          */
#define SYS_GPB_MFP1_PB4MFP_TM1               (0xEUL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for TM1                */
#define SYS_GPB_MFP1_PB4MFP_INT1              (0xFUL<<SYS_GPB_MFP1_PB4MFP_Pos)    /*!< GPB_MFP1 PB4 setting for INT1               */

/* PB.5 MFP */
#define SYS_GPB_MFP1_PB5MFP_GPIO              (0x0UL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for GPIO               */
#define SYS_GPB_MFP1_PB5MFP_ACMP1_N           (0x1UL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for ACMP1_N            */
#define SYS_GPB_MFP1_PB5MFP_EADC0_CH5         (0x1UL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for EADC0_CH5          */
#define SYS_GPB_MFP1_PB5MFP_LLSI4_OUT         (0x2UL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for LLSI4_OUT          */
#define SYS_GPB_MFP1_PB5MFP_SPI1_MISO         (0x5UL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for SPI1_MISO          */
#define SYS_GPB_MFP1_PB5MFP_I2C0_SCL          (0x6UL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for I2C0_SCL           */
#define SYS_GPB_MFP1_PB5MFP_UART5_TXD         (0x7UL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for UART5_TXD          */
#define SYS_GPB_MFP1_PB5MFP_USCI1_CTL0        (0x8UL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for USCI1_CTL0         */
#define SYS_GPB_MFP1_PB5MFP_PWM0_CH0          (0xBUL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for PWM0_CH0           */
#define SYS_GPB_MFP1_PB5MFP_UART2_TXD         (0xCUL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for UART2_TXD          */
#define SYS_GPB_MFP1_PB5MFP_TM0               (0xEUL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for TM0                */
#define SYS_GPB_MFP1_PB5MFP_INT0              (0xFUL<<SYS_GPB_MFP1_PB5MFP_Pos)    /*!< GPB_MFP1 PB5 setting for INT0               */

/* PB.6 MFP */
#define SYS_GPB_MFP1_PB6MFP_GPIO              (0x0UL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for GPIO               */
#define SYS_GPB_MFP1_PB6MFP_EADC0_CH6         (0x1UL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for EADC0_CH6          */
#define SYS_GPB_MFP1_PB6MFP_EBI_nWRH          (0x2UL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for EBI_nWRH           */
#define SYS_GPB_MFP1_PB6MFP_USCI1_DAT1        (0x4UL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for USCI1_DAT1         */
#define SYS_GPB_MFP1_PB6MFP_CANFD1_RXD        (0x5UL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for CANFD1_RXD         */
#define SYS_GPB_MFP1_PB6MFP_UART1_RXD         (0x6UL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for UART1_RXD          */
#define SYS_GPB_MFP1_PB6MFP_TM1               (0x7UL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for TM1                */
#define SYS_GPB_MFP1_PB6MFP_UART9_RXD         (0x8UL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for UART9_RXD          */
#define SYS_GPB_MFP1_PB6MFP_SPI0_CLK          (0x9UL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for SPI0_CLK           */
#define SYS_GPB_MFP1_PB6MFP_BPWM1_CH5         (0xAUL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for BPWM1_CH5          */
#define SYS_GPB_MFP1_PB6MFP_PWM1_BRAKE1       (0xBUL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for PWM1_BRAKE1        */
#define SYS_GPB_MFP1_PB6MFP_PWM1_CH5          (0xCUL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for PWM1_CH5           */
#define SYS_GPB_MFP1_PB6MFP_INT4              (0xDUL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for INT4               */
#define SYS_GPB_MFP1_PB6MFP_USB_VBUS_EN       (0xEUL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for USB_VBUS_EN        */
#define SYS_GPB_MFP1_PB6MFP_ACMP1_O           (0xFUL<<SYS_GPB_MFP1_PB6MFP_Pos)    /*!< GPB_MFP1 PB6 setting for ACMP1_O            */

/* PB.7 MFP */
#define SYS_GPB_MFP1_PB7MFP_GPIO              (0x0UL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for GPIO               */
#define SYS_GPB_MFP1_PB7MFP_EADC0_CH7         (0x1UL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for EADC0_CH7          */
#define SYS_GPB_MFP1_PB7MFP_EBI_nWRL          (0x2UL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for EBI_nWRL           */
#define SYS_GPB_MFP1_PB7MFP_CANFD1_TXH        (0x3UL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for CANFD1_TXH         */
#define SYS_GPB_MFP1_PB7MFP_USCI1_DAT0        (0x4UL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for USCI1_DAT0         */
#define SYS_GPB_MFP1_PB7MFP_CANFD1_TXD        (0x5UL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for CANFD1_TXD         */
#define SYS_GPB_MFP1_PB7MFP_UART1_TXD         (0x6UL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for UART1_TXD          */
#define SYS_GPB_MFP1_PB7MFP_UART9_TXD         (0x8UL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for UART9_TXD          */
#define SYS_GPB_MFP1_PB7MFP_SPI0_SS           (0x9UL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for SPI0_SS            */
#define SYS_GPB_MFP1_PB7MFP_BPWM1_CH4         (0xAUL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for BPWM1_CH4          */
#define SYS_GPB_MFP1_PB7MFP_PWM1_BRAKE0       (0xBUL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for PWM1_BRAKE0        */
#define SYS_GPB_MFP1_PB7MFP_PWM1_CH4          (0xCUL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for PWM1_CH4           */
#define SYS_GPB_MFP1_PB7MFP_INT5              (0xDUL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for INT5               */
#define SYS_GPB_MFP1_PB7MFP_USB_VBUS_ST       (0xEUL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for USB_VBUS_ST        */
#define SYS_GPB_MFP1_PB7MFP_ACMP0_O           (0xFUL<<SYS_GPB_MFP1_PB7MFP_Pos)    /*!< GPB_MFP1 PB7 setting for ACMP0_O            */

/* PB.8 MFP */
#define SYS_GPB_MFP2_PB8MFP_GPIO              (0x0UL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for GPIO               */
#define SYS_GPB_MFP2_PB8MFP_EADC0_CH8         (0x1UL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for EADC0_CH8          */
#define SYS_GPB_MFP2_PB8MFP_EADC1_CH0         (0x1UL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for EADC1_CH0          */
#define SYS_GPB_MFP2_PB8MFP_ELLSI1_OUT        (0x2UL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for ELLSI1_OUT         */
#define SYS_GPB_MFP2_PB8MFP_CANFD1_TXL        (0x3UL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for CANFD1_TXL         */
#define SYS_GPB_MFP2_PB8MFP_USCI1_CLK         (0x4UL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for USCI1_CLK          */
#define SYS_GPB_MFP2_PB8MFP_UART0_RXD         (0x5UL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for UART0_RXD          */
#define SYS_GPB_MFP2_PB8MFP_UART1_nRTS        (0x6UL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for UART1_nRTS         */
#define SYS_GPB_MFP2_PB8MFP_EBI_ADR19         (0x7UL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for EBI_ADR19          */
#define SYS_GPB_MFP2_PB8MFP_I2C0_SDA          (0x9UL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for I2C0_SDA           */
#define SYS_GPB_MFP2_PB8MFP_BPWM1_CH3         (0xAUL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for BPWM1_CH3          */
#define SYS_GPB_MFP2_PB8MFP_USB_VBUS_ST       (0xEUL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for USB_VBUS_ST        */
#define SYS_GPB_MFP2_PB8MFP_USB_VBUS_EN       (0xFUL<<SYS_GPB_MFP2_PB8MFP_Pos)    /*!< GPB_MFP2 PB8 setting for USB_VBUS_EN        */

/* PB.9 MFP */
#define SYS_GPB_MFP2_PB9MFP_GPIO              (0x0UL<<SYS_GPB_MFP2_PB9MFP_Pos)    /*!< GPB_MFP2 PB9 setting for GPIO               */
#define SYS_GPB_MFP2_PB9MFP_EADC0_CH9         (0x1UL<<SYS_GPB_MFP2_PB9MFP_Pos)    /*!< GPB_MFP2 PB9 setting for EADC0_CH9          */
#define SYS_GPB_MFP2_PB9MFP_EADC1_CH1         (0x1UL<<SYS_GPB_MFP2_PB9MFP_Pos)    /*!< GPB_MFP2 PB9 setting for EADC1_CH1          */
#define SYS_GPB_MFP2_PB9MFP_ELLSI0_OUT        (0x2UL<<SYS_GPB_MFP2_PB9MFP_Pos)    /*!< GPB_MFP2 PB9 setting for ELLSI0_OUT         */
#define SYS_GPB_MFP2_PB9MFP_EBI_ADR18         (0x3UL<<SYS_GPB_MFP2_PB9MFP_Pos)    /*!< GPB_MFP2 PB9 setting for EBI_ADR18          */
#define SYS_GPB_MFP2_PB9MFP_USCI1_CTL1        (0x4UL<<SYS_GPB_MFP2_PB9MFP_Pos)    /*!< GPB_MFP2 PB9 setting for USCI1_CTL1         */
#define SYS_GPB_MFP2_PB9MFP_UART0_TXD         (0x5UL<<SYS_GPB_MFP2_PB9MFP_Pos)    /*!< GPB_MFP2 PB9 setting for UART0_TXD          */
#define SYS_GPB_MFP2_PB9MFP_UART1_nCTS        (0x6UL<<SYS_GPB_MFP2_PB9MFP_Pos)    /*!< GPB_MFP2 PB9 setting for UART1_nCTS         */
#define SYS_GPB_MFP2_PB9MFP_UART8_RXD         (0x8UL<<SYS_GPB_MFP2_PB9MFP_Pos)    /*!< GPB_MFP2 PB9 setting for UART8_RXD          */
#define SYS_GPB_MFP2_PB9MFP_I2C0_SCL          (0x9UL<<SYS_GPB_MFP2_PB9MFP_Pos)    /*!< GPB_MFP2 PB9 setting for I2C0_SCL           */
#define SYS_GPB_MFP2_PB9MFP_BPWM1_CH2         (0xAUL<<SYS_GPB_MFP2_PB9MFP_Pos)    /*!< GPB_MFP2 PB9 setting for BPWM1_CH2          */
#define SYS_GPB_MFP2_PB9MFP_USB_VBUS_ST       (0xFUL<<SYS_GPB_MFP2_PB9MFP_Pos)    /*!< GPB_MFP2 PB9 setting for USB_VBUS_ST        */

/* PB.10 MFP */
#define SYS_GPB_MFP2_PB10MFP_GPIO             (0x0UL<<SYS_GPB_MFP2_PB10MFP_Pos)   /*!< GPB_MFP2 PB10 setting for GPIO              */
#define SYS_GPB_MFP2_PB10MFP_EADC0_CH10       (0x1UL<<SYS_GPB_MFP2_PB10MFP_Pos)   /*!< GPB_MFP2 PB10 setting for EADC0_CH10        */
#define SYS_GPB_MFP2_PB10MFP_EADC1_CH2        (0x1UL<<SYS_GPB_MFP2_PB10MFP_Pos)   /*!< GPB_MFP2 PB10 setting for EADC1_CH2         */
#define SYS_GPB_MFP2_PB10MFP_LLSI9_OUT        (0x2UL<<SYS_GPB_MFP2_PB10MFP_Pos)   /*!< GPB_MFP2 PB10 setting for LLSI9_OUT         */
#define SYS_GPB_MFP2_PB10MFP_EBI_ADR17        (0x3UL<<SYS_GPB_MFP2_PB10MFP_Pos)   /*!< GPB_MFP2 PB10 setting for EBI_ADR17         */
#define SYS_GPB_MFP2_PB10MFP_USCI1_CTL0       (0x4UL<<SYS_GPB_MFP2_PB10MFP_Pos)   /*!< GPB_MFP2 PB10 setting for USCI1_CTL0        */
#define SYS_GPB_MFP2_PB10MFP_UART0_nRTS       (0x5UL<<SYS_GPB_MFP2_PB10MFP_Pos)   /*!< GPB_MFP2 PB10 setting for UART0_nRTS        */
#define SYS_GPB_MFP2_PB10MFP_UART4_RXD        (0x6UL<<SYS_GPB_MFP2_PB10MFP_Pos)   /*!< GPB_MFP2 PB10 setting for UART4_RXD         */
#define SYS_GPB_MFP2_PB10MFP_I2C1_SDA         (0x7UL<<SYS_GPB_MFP2_PB10MFP_Pos)   /*!< GPB_MFP2 PB10 setting for I2C1_SDA          */
#define SYS_GPB_MFP2_PB10MFP_CANFD0_RXD       (0x8UL<<SYS_GPB_MFP2_PB10MFP_Pos)   /*!< GPB_MFP2 PB10 setting for CANFD0_RXD        */
#define SYS_GPB_MFP2_PB10MFP_BPWM1_CH1        (0xAUL<<SYS_GPB_MFP2_PB10MFP_Pos)   /*!< GPB_MFP2 PB10 setting for BPWM1_CH1         */

/* PB.11 MFP */
#define SYS_GPB_MFP2_PB11MFP_GPIO             (0x0UL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for GPIO              */
#define SYS_GPB_MFP2_PB11MFP_EADC0_CH11       (0x1UL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for EADC0_CH11        */
#define SYS_GPB_MFP2_PB11MFP_EADC1_CH3        (0x1UL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for EADC1_CH3         */
#define SYS_GPB_MFP2_PB11MFP_LLSI8_OUT        (0x2UL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for LLSI8_OUT         */
#define SYS_GPB_MFP2_PB11MFP_EBI_ADR16        (0x3UL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for EBI_ADR16         */
#define SYS_GPB_MFP2_PB11MFP_UART0_nCTS       (0x5UL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for UART0_nCTS        */
#define SYS_GPB_MFP2_PB11MFP_UART4_TXD        (0x6UL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for UART4_TXD         */
#define SYS_GPB_MFP2_PB11MFP_I2C1_SCL         (0x7UL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for I2C1_SCL          */
#define SYS_GPB_MFP2_PB11MFP_CANFD0_TXD       (0x8UL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for CANFD0_TXD        */
#define SYS_GPB_MFP2_PB11MFP_SPI0_I2SMCLK     (0x9UL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for SPI0_I2SMCLK      */
#define SYS_GPB_MFP2_PB11MFP_BPWM1_CH0        (0xAUL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for BPWM1_CH0         */
#define SYS_GPB_MFP2_PB11MFP_CANFD0_TXH       (0xBUL<<SYS_GPB_MFP2_PB11MFP_Pos)   /*!< GPB_MFP2 PB11 setting for CANFD0_TXH        */

/* PB.12 MFP */
#define SYS_GPB_MFP3_PB12MFP_GPIO             (0x0UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for GPIO              */
#define SYS_GPB_MFP3_PB12MFP_ACMP0_P2         (0x1UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for ACMP0_P2          */
#define SYS_GPB_MFP3_PB12MFP_ACMP1_P2         (0x1UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for ACMP1_P2          */
#define SYS_GPB_MFP3_PB12MFP_DAC0_OUT         (0x1UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for DAC0_OUT          */
#define SYS_GPB_MFP3_PB12MFP_EADC0_CH12       (0x1UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for EADC0_CH12        */
#define SYS_GPB_MFP3_PB12MFP_EADC1_CH4        (0x1UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for EADC1_CH4         */
#define SYS_GPB_MFP3_PB12MFP_EBI_AD15         (0x2UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for EBI_AD15          */
#define SYS_GPB_MFP3_PB12MFP_I2C2_SDA         (0x3UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for I2C2_SDA          */
#define SYS_GPB_MFP3_PB12MFP_SPI0_MOSI        (0x4UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for SPI0_MOSI         */
#define SYS_GPB_MFP3_PB12MFP_USCI0_CLK        (0x5UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for USCI0_CLK         */
#define SYS_GPB_MFP3_PB12MFP_UART0_RXD        (0x6UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for UART0_RXD         */
#define SYS_GPB_MFP3_PB12MFP_UART3_nCTS       (0x7UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for UART3_nCTS        */
#define SYS_GPB_MFP3_PB12MFP_UART8_TXD        (0x8UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for UART8_TXD         */
#define SYS_GPB_MFP3_PB12MFP_CANFD0_TXL       (0x9UL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for CANFD0_TXL        */
#define SYS_GPB_MFP3_PB12MFP_SPI0_I2SMCLK     (0xAUL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for SPI0_I2SMCLK      */
#define SYS_GPB_MFP3_PB12MFP_PWM1_CH3         (0xBUL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for PWM1_CH3          */
#define SYS_GPB_MFP3_PB12MFP_QSPI0_CLK        (0xCUL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for QSPI0_CLK         */
#define SYS_GPB_MFP3_PB12MFP_TM3_EXT          (0xDUL<<SYS_GPB_MFP3_PB12MFP_Pos)   /*!< GPB_MFP3 PB12 setting for TM3_EXT           */

/* PB.13 MFP */
#define SYS_GPB_MFP3_PB13MFP_GPIO             (0x0UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for GPIO              */
#define SYS_GPB_MFP3_PB13MFP_ACMP0_P3         (0x1UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for ACMP0_P3          */
#define SYS_GPB_MFP3_PB13MFP_ACMP1_P3         (0x1UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for ACMP1_P3          */
#define SYS_GPB_MFP3_PB13MFP_EADC0_CH13       (0x1UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for EADC0_CH13        */
#define SYS_GPB_MFP3_PB13MFP_EADC1_CH5        (0x1UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for EADC1_CH5         */
#define SYS_GPB_MFP3_PB13MFP_LLSI2_OUT        (0x2UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for LLSI2_OUT         */
#define SYS_GPB_MFP3_PB13MFP_I2C2_SCL         (0x3UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for I2C2_SCL          */
#define SYS_GPB_MFP3_PB13MFP_SPI0_MISO        (0x4UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for SPI0_MISO         */
#define SYS_GPB_MFP3_PB13MFP_USCI0_DAT0       (0x5UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for USCI0_DAT0        */
#define SYS_GPB_MFP3_PB13MFP_UART0_TXD        (0x6UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for UART0_TXD         */
#define SYS_GPB_MFP3_PB13MFP_UART3_nRTS       (0x7UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for UART3_nRTS        */
#define SYS_GPB_MFP3_PB13MFP_EBI_AD14         (0x8UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for EBI_AD14          */
#define SYS_GPB_MFP3_PB13MFP_CLKO             (0x9UL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for CLKO              */
#define SYS_GPB_MFP3_PB13MFP_PWM1_CH2         (0xBUL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for PWM1_CH2          */
#define SYS_GPB_MFP3_PB13MFP_USCI0_CTL0       (0xCUL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for USCI0_CTL0        */
#define SYS_GPB_MFP3_PB13MFP_TM2_EXT          (0xDUL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for TM2_EXT           */
#define SYS_GPB_MFP3_PB13MFP_USB_VBUS_ST      (0xEUL<<SYS_GPB_MFP3_PB13MFP_Pos)   /*!< GPB_MFP3 PB13 setting for USB_VBUS_ST       */

/* PB.14 MFP */
#define SYS_GPB_MFP3_PB14MFP_GPIO             (0x0UL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for GPIO              */
#define SYS_GPB_MFP3_PB14MFP_EADC0_CH14       (0x1UL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for EADC0_CH14        */
#define SYS_GPB_MFP3_PB14MFP_EADC1_CH6        (0x1UL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for EADC1_CH6         */
#define SYS_GPB_MFP3_PB14MFP_LLSI1_OUT        (0x2UL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for LLSI1_OUT         */
#define SYS_GPB_MFP3_PB14MFP_EBI_AD13         (0x3UL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for EBI_AD13          */
#define SYS_GPB_MFP3_PB14MFP_SPI0_CLK         (0x4UL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for SPI0_CLK          */
#define SYS_GPB_MFP3_PB14MFP_USCI0_DAT1       (0x5UL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for USCI0_DAT1        */
#define SYS_GPB_MFP3_PB14MFP_UART0_nRTS       (0x6UL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for UART0_nRTS        */
#define SYS_GPB_MFP3_PB14MFP_UART3_RXD        (0x7UL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for UART3_RXD         */
#define SYS_GPB_MFP3_PB14MFP_PWM1_CH1         (0xBUL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for PWM1_CH1          */
#define SYS_GPB_MFP3_PB14MFP_TM1_EXT          (0xDUL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for TM1_EXT           */
#define SYS_GPB_MFP3_PB14MFP_CLKO             (0xEUL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for CLKO              */
#define SYS_GPB_MFP3_PB14MFP_USB_VBUS_ST      (0xFUL<<SYS_GPB_MFP3_PB14MFP_Pos)   /*!< GPB_MFP3 PB14 setting for USB_VBUS_ST       */

/* PB.15 MFP */
#define SYS_GPB_MFP3_PB15MFP_GPIO             (0x0UL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for GPIO              */
#define SYS_GPB_MFP3_PB15MFP_EADC0_CH15       (0x1UL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for EADC0_CH15        */
#define SYS_GPB_MFP3_PB15MFP_EADC1_CH7        (0x1UL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for EADC1_CH7         */
#define SYS_GPB_MFP3_PB15MFP_LLSI0_OUT        (0x2UL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for LLSI0_OUT         */
#define SYS_GPB_MFP3_PB15MFP_EBI_AD12         (0x3UL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for EBI_AD12          */
#define SYS_GPB_MFP3_PB15MFP_SPI0_SS          (0x4UL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for SPI0_SS           */
#define SYS_GPB_MFP3_PB15MFP_USCI0_CTL1       (0x5UL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for USCI0_CTL1        */
#define SYS_GPB_MFP3_PB15MFP_UART0_nCTS       (0x6UL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for UART0_nCTS        */
#define SYS_GPB_MFP3_PB15MFP_UART3_TXD        (0x7UL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for UART3_TXD         */
#define SYS_GPB_MFP3_PB15MFP_PWM0_BRAKE1      (0xAUL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for PWM0_BRAKE1       */
#define SYS_GPB_MFP3_PB15MFP_PWM1_CH0         (0xBUL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for PWM1_CH0          */
#define SYS_GPB_MFP3_PB15MFP_TM0_EXT          (0xDUL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for TM0_EXT           */
#define SYS_GPB_MFP3_PB15MFP_USB_VBUS_EN      (0xEUL<<SYS_GPB_MFP3_PB15MFP_Pos)   /*!< GPB_MFP3 PB15 setting for USB_VBUS_EN       */

/* PC.0 MFP */
#define SYS_GPC_MFP0_PC0MFP_GPIO              (0x0UL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for GPIO               */
#define SYS_GPC_MFP0_PC0MFP_LLSI9_OUT         (0x2UL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for LLSI9_OUT          */
#define SYS_GPC_MFP0_PC0MFP_EBI_AD0           (0x3UL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for EBI_AD0            */
#define SYS_GPC_MFP0_PC0MFP_QSPI0_MOSI0       (0x4UL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for QSPI0_MOSI0        */
#define SYS_GPC_MFP0_PC0MFP_ELLSI1_OUT        (0x5UL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for ELLSI1_OUT         */
#define SYS_GPC_MFP0_PC0MFP_SPI1_SS           (0x7UL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for SPI1_SS            */
#define SYS_GPC_MFP0_PC0MFP_UART2_RXD         (0x8UL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for UART2_RXD          */
#define SYS_GPC_MFP0_PC0MFP_I2C0_SDA          (0x9UL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for I2C0_SDA           */
#define SYS_GPC_MFP0_PC0MFP_UART4_nCTS        (0xBUL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for UART4_nCTS         */
#define SYS_GPC_MFP0_PC0MFP_PWM1_CH5          (0xCUL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for PWM1_CH5           */
#define SYS_GPC_MFP0_PC0MFP_ACMP1_O           (0xDUL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for ACMP1_O            */
#define SYS_GPC_MFP0_PC0MFP_EADC1_ST          (0xEUL<<SYS_GPC_MFP0_PC0MFP_Pos)    /*!< GPC_MFP0 PC0 setting for EADC1_ST           */

/* PC.1 MFP */
#define SYS_GPC_MFP0_PC1MFP_GPIO              (0x0UL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for GPIO               */
#define SYS_GPC_MFP0_PC1MFP_LLSI8_OUT         (0x2UL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for LLSI8_OUT          */
#define SYS_GPC_MFP0_PC1MFP_EBI_AD1           (0x3UL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for EBI_AD1            */
#define SYS_GPC_MFP0_PC1MFP_QSPI0_MISO0       (0x4UL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for QSPI0_MISO0        */
#define SYS_GPC_MFP0_PC1MFP_ELLSI0_OUT        (0x5UL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for ELLSI0_OUT         */
#define SYS_GPC_MFP0_PC1MFP_CANFD1_TXL        (0x6UL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for CANFD1_TXL         */
#define SYS_GPC_MFP0_PC1MFP_SPI1_CLK          (0x7UL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for SPI1_CLK           */
#define SYS_GPC_MFP0_PC1MFP_UART2_TXD         (0x8UL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for UART2_TXD          */
#define SYS_GPC_MFP0_PC1MFP_I2C0_SCL          (0x9UL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for I2C0_SCL           */
#define SYS_GPC_MFP0_PC1MFP_UART4_nRTS        (0xBUL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for UART4_nRTS         */
#define SYS_GPC_MFP0_PC1MFP_PWM1_CH4          (0xCUL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for PWM1_CH4           */
#define SYS_GPC_MFP0_PC1MFP_ACMP0_O           (0xDUL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for ACMP0_O            */
#define SYS_GPC_MFP0_PC1MFP_EADC0_ST          (0xEUL<<SYS_GPC_MFP0_PC1MFP_Pos)    /*!< GPC_MFP0 PC1 setting for EADC0_ST           */

/* PC.2 MFP */
#define SYS_GPC_MFP0_PC2MFP_GPIO              (0x0UL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for GPIO               */
#define SYS_GPC_MFP0_PC2MFP_LLSI3_OUT         (0x2UL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for LLSI3_OUT          */
#define SYS_GPC_MFP0_PC2MFP_EBI_AD2           (0x3UL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for EBI_AD2            */
#define SYS_GPC_MFP0_PC2MFP_QSPI0_CLK         (0x4UL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for QSPI0_CLK          */
#define SYS_GPC_MFP0_PC2MFP_LLSI7_OUT         (0x5UL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for LLSI7_OUT          */
#define SYS_GPC_MFP0_PC2MFP_SPI1_MOSI         (0x7UL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for SPI1_MOSI          */
#define SYS_GPC_MFP0_PC2MFP_UART2_nCTS        (0x8UL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for UART2_nCTS         */
#define SYS_GPC_MFP0_PC2MFP_I2C0_SMBSUS       (0x9UL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for I2C0_SMBSUS        */
#define SYS_GPC_MFP0_PC2MFP_CANFD1_RXD        (0xAUL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for CANFD1_RXD         */
#define SYS_GPC_MFP0_PC2MFP_UART3_RXD         (0xBUL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for UART3_RXD          */
#define SYS_GPC_MFP0_PC2MFP_PWM1_CH3          (0xCUL<<SYS_GPC_MFP0_PC2MFP_Pos)    /*!< GPC_MFP0 PC2 setting for PWM1_CH3           */

/* PC.3 MFP */
#define SYS_GPC_MFP0_PC3MFP_GPIO              (0x0UL<<SYS_GPC_MFP0_PC3MFP_Pos)    /*!< GPC_MFP0 PC3 setting for GPIO               */
#define SYS_GPC_MFP0_PC3MFP_LLSI2_OUT         (0x2UL<<SYS_GPC_MFP0_PC3MFP_Pos)    /*!< GPC_MFP0 PC3 setting for LLSI2_OUT          */
#define SYS_GPC_MFP0_PC3MFP_EBI_AD3           (0x3UL<<SYS_GPC_MFP0_PC3MFP_Pos)    /*!< GPC_MFP0 PC3 setting for EBI_AD3            */
#define SYS_GPC_MFP0_PC3MFP_QSPI0_SS          (0x4UL<<SYS_GPC_MFP0_PC3MFP_Pos)    /*!< GPC_MFP0 PC3 setting for QSPI0_SS           */
#define SYS_GPC_MFP0_PC3MFP_CANFD1_TXH        (0x6UL<<SYS_GPC_MFP0_PC3MFP_Pos)    /*!< GPC_MFP0 PC3 setting for CANFD1_TXH         */
#define SYS_GPC_MFP0_PC3MFP_SPI1_MISO         (0x7UL<<SYS_GPC_MFP0_PC3MFP_Pos)    /*!< GPC_MFP0 PC3 setting for SPI1_MISO          */
#define SYS_GPC_MFP0_PC3MFP_UART2_nRTS        (0x8UL<<SYS_GPC_MFP0_PC3MFP_Pos)    /*!< GPC_MFP0 PC3 setting for UART2_nRTS         */
#define SYS_GPC_MFP0_PC3MFP_I2C0_SMBAL        (0x9UL<<SYS_GPC_MFP0_PC3MFP_Pos)    /*!< GPC_MFP0 PC3 setting for I2C0_SMBAL         */
#define SYS_GPC_MFP0_PC3MFP_CANFD1_TXD        (0xAUL<<SYS_GPC_MFP0_PC3MFP_Pos)    /*!< GPC_MFP0 PC3 setting for CANFD1_TXD         */
#define SYS_GPC_MFP0_PC3MFP_UART3_TXD         (0xBUL<<SYS_GPC_MFP0_PC3MFP_Pos)    /*!< GPC_MFP0 PC3 setting for UART3_TXD          */
#define SYS_GPC_MFP0_PC3MFP_PWM1_CH2          (0xCUL<<SYS_GPC_MFP0_PC3MFP_Pos)    /*!< GPC_MFP0 PC3 setting for PWM1_CH2           */

/* PC.4 MFP */
#define SYS_GPC_MFP1_PC4MFP_GPIO              (0x0UL<<SYS_GPC_MFP1_PC4MFP_Pos)    /*!< GPC_MFP1 PC4 setting for GPIO               */
#define SYS_GPC_MFP1_PC4MFP_LLSI1_OUT         (0x2UL<<SYS_GPC_MFP1_PC4MFP_Pos)    /*!< GPC_MFP1 PC4 setting for LLSI1_OUT          */
#define SYS_GPC_MFP1_PC4MFP_EBI_AD4           (0x3UL<<SYS_GPC_MFP1_PC4MFP_Pos)    /*!< GPC_MFP1 PC4 setting for EBI_AD4            */
#define SYS_GPC_MFP1_PC4MFP_QSPI0_MOSI1       (0x4UL<<SYS_GPC_MFP1_PC4MFP_Pos)    /*!< GPC_MFP1 PC4 setting for QSPI0_MOSI1        */
#define SYS_GPC_MFP1_PC4MFP_UART2_RXD         (0x8UL<<SYS_GPC_MFP1_PC4MFP_Pos)    /*!< GPC_MFP1 PC4 setting for UART2_RXD          */
#define SYS_GPC_MFP1_PC4MFP_I2C1_SDA          (0x9UL<<SYS_GPC_MFP1_PC4MFP_Pos)    /*!< GPC_MFP1 PC4 setting for I2C1_SDA           */
#define SYS_GPC_MFP1_PC4MFP_CANFD0_RXD        (0xAUL<<SYS_GPC_MFP1_PC4MFP_Pos)    /*!< GPC_MFP1 PC4 setting for CANFD0_RXD         */
#define SYS_GPC_MFP1_PC4MFP_UART4_RXD         (0xBUL<<SYS_GPC_MFP1_PC4MFP_Pos)    /*!< GPC_MFP1 PC4 setting for UART4_RXD          */
#define SYS_GPC_MFP1_PC4MFP_PWM1_CH1          (0xCUL<<SYS_GPC_MFP1_PC4MFP_Pos)    /*!< GPC_MFP1 PC4 setting for PWM1_CH1           */

/* PC.5 MFP */
#define SYS_GPC_MFP1_PC5MFP_GPIO              (0x0UL<<SYS_GPC_MFP1_PC5MFP_Pos)    /*!< GPC_MFP1 PC5 setting for GPIO               */
#define SYS_GPC_MFP1_PC5MFP_LLSI0_OUT         (0x2UL<<SYS_GPC_MFP1_PC5MFP_Pos)    /*!< GPC_MFP1 PC5 setting for LLSI0_OUT          */
#define SYS_GPC_MFP1_PC5MFP_EBI_AD5           (0x3UL<<SYS_GPC_MFP1_PC5MFP_Pos)    /*!< GPC_MFP1 PC5 setting for EBI_AD5            */
#define SYS_GPC_MFP1_PC5MFP_QSPI0_MISO1       (0x4UL<<SYS_GPC_MFP1_PC5MFP_Pos)    /*!< GPC_MFP1 PC5 setting for QSPI0_MISO1        */
#define SYS_GPC_MFP1_PC5MFP_CANFD0_TXH        (0x6UL<<SYS_GPC_MFP1_PC5MFP_Pos)    /*!< GPC_MFP1 PC5 setting for CANFD0_TXH         */
#define SYS_GPC_MFP1_PC5MFP_UART2_TXD         (0x8UL<<SYS_GPC_MFP1_PC5MFP_Pos)    /*!< GPC_MFP1 PC5 setting for UART2_TXD          */
#define SYS_GPC_MFP1_PC5MFP_I2C1_SCL          (0x9UL<<SYS_GPC_MFP1_PC5MFP_Pos)    /*!< GPC_MFP1 PC5 setting for I2C1_SCL           */
#define SYS_GPC_MFP1_PC5MFP_CANFD0_TXD        (0xAUL<<SYS_GPC_MFP1_PC5MFP_Pos)    /*!< GPC_MFP1 PC5 setting for CANFD0_TXD         */
#define SYS_GPC_MFP1_PC5MFP_UART4_TXD         (0xBUL<<SYS_GPC_MFP1_PC5MFP_Pos)    /*!< GPC_MFP1 PC5 setting for UART4_TXD          */
#define SYS_GPC_MFP1_PC5MFP_PWM1_CH0          (0xCUL<<SYS_GPC_MFP1_PC5MFP_Pos)    /*!< GPC_MFP1 PC5 setting for PWM1_CH0           */
#define SYS_GPC_MFP1_PC5MFP_I3C0_PUPEN        (0xDUL<<SYS_GPC_MFP1_PC5MFP_Pos)    /*!< GPC_MFP1 PC5 setting for I3C0_PUPEN         */

/* PC.6 MFP */
#define SYS_GPC_MFP1_PC6MFP_GPIO              (0x0UL<<SYS_GPC_MFP1_PC6MFP_Pos)    /*!< GPC_MFP1 PC6 setting for GPIO               */
#define SYS_GPC_MFP1_PC6MFP_EBI_AD8           (0x2UL<<SYS_GPC_MFP1_PC6MFP_Pos)    /*!< GPC_MFP1 PC6 setting for EBI_AD8            */
#define SYS_GPC_MFP1_PC6MFP_SPI1_MOSI         (0x4UL<<SYS_GPC_MFP1_PC6MFP_Pos)    /*!< GPC_MFP1 PC6 setting for SPI1_MOSI          */
#define SYS_GPC_MFP1_PC6MFP_UART4_RXD         (0x5UL<<SYS_GPC_MFP1_PC6MFP_Pos)    /*!< GPC_MFP1 PC6 setting for UART4_RXD          */
#define SYS_GPC_MFP1_PC6MFP_UART0_nRTS        (0x7UL<<SYS_GPC_MFP1_PC6MFP_Pos)    /*!< GPC_MFP1 PC6 setting for UART0_nRTS         */
#define SYS_GPC_MFP1_PC6MFP_PWM1_CH3          (0xBUL<<SYS_GPC_MFP1_PC6MFP_Pos)    /*!< GPC_MFP1 PC6 setting for PWM1_CH3           */
#define SYS_GPC_MFP1_PC6MFP_BPWM1_CH1         (0xCUL<<SYS_GPC_MFP1_PC6MFP_Pos)    /*!< GPC_MFP1 PC6 setting for BPWM1_CH1          */
#define SYS_GPC_MFP1_PC6MFP_TM1               (0xEUL<<SYS_GPC_MFP1_PC6MFP_Pos)    /*!< GPC_MFP1 PC6 setting for TM1                */
#define SYS_GPC_MFP1_PC6MFP_INT2              (0xFUL<<SYS_GPC_MFP1_PC6MFP_Pos)    /*!< GPC_MFP1 PC6 setting for INT2               */

/* PC.7 MFP */
#define SYS_GPC_MFP1_PC7MFP_GPIO              (0x0UL<<SYS_GPC_MFP1_PC7MFP_Pos)    /*!< GPC_MFP1 PC7 setting for GPIO               */
#define SYS_GPC_MFP1_PC7MFP_EBI_AD9           (0x2UL<<SYS_GPC_MFP1_PC7MFP_Pos)    /*!< GPC_MFP1 PC7 setting for EBI_AD9            */
#define SYS_GPC_MFP1_PC7MFP_SPI1_MISO         (0x4UL<<SYS_GPC_MFP1_PC7MFP_Pos)    /*!< GPC_MFP1 PC7 setting for SPI1_MISO          */
#define SYS_GPC_MFP1_PC7MFP_UART4_TXD         (0x5UL<<SYS_GPC_MFP1_PC7MFP_Pos)    /*!< GPC_MFP1 PC7 setting for UART4_TXD          */
#define SYS_GPC_MFP1_PC7MFP_UART0_nCTS        (0x7UL<<SYS_GPC_MFP1_PC7MFP_Pos)    /*!< GPC_MFP1 PC7 setting for UART0_nCTS         */
#define SYS_GPC_MFP1_PC7MFP_PWM1_CH2          (0xBUL<<SYS_GPC_MFP1_PC7MFP_Pos)    /*!< GPC_MFP1 PC7 setting for PWM1_CH2           */
#define SYS_GPC_MFP1_PC7MFP_BPWM1_CH0         (0xCUL<<SYS_GPC_MFP1_PC7MFP_Pos)    /*!< GPC_MFP1 PC7 setting for BPWM1_CH0          */
#define SYS_GPC_MFP1_PC7MFP_TM0               (0xEUL<<SYS_GPC_MFP1_PC7MFP_Pos)    /*!< GPC_MFP1 PC7 setting for TM0                */
#define SYS_GPC_MFP1_PC7MFP_INT3              (0xFUL<<SYS_GPC_MFP1_PC7MFP_Pos)    /*!< GPC_MFP1 PC7 setting for INT3               */

/* PC.8 MFP */
#define SYS_GPC_MFP2_PC8MFP_GPIO              (0x0UL<<SYS_GPC_MFP2_PC8MFP_Pos)    /*!< GPC_MFP2 PC8 setting for GPIO               */
#define SYS_GPC_MFP2_PC8MFP_EBI_ADR16         (0x2UL<<SYS_GPC_MFP2_PC8MFP_Pos)    /*!< GPC_MFP2 PC8 setting for EBI_ADR16          */
#define SYS_GPC_MFP2_PC8MFP_I2C0_SDA          (0x4UL<<SYS_GPC_MFP2_PC8MFP_Pos)    /*!< GPC_MFP2 PC8 setting for I2C0_SDA           */
#define SYS_GPC_MFP2_PC8MFP_UART4_nCTS        (0x5UL<<SYS_GPC_MFP2_PC8MFP_Pos)    /*!< GPC_MFP2 PC8 setting for UART4_nCTS         */
#define SYS_GPC_MFP2_PC8MFP_UART1_RXD         (0x8UL<<SYS_GPC_MFP2_PC8MFP_Pos)    /*!< GPC_MFP2 PC8 setting for UART1_RXD          */
#define SYS_GPC_MFP2_PC8MFP_BPWM1_CH4         (0xCUL<<SYS_GPC_MFP2_PC8MFP_Pos)    /*!< GPC_MFP2 PC8 setting for BPWM1_CH4          */

/* PC.9 MFP */
#define SYS_GPC_MFP2_PC9MFP_GPIO              (0x0UL<<SYS_GPC_MFP2_PC9MFP_Pos)    /*!< GPC_MFP2 PC9 setting for GPIO               */
#define SYS_GPC_MFP2_PC9MFP_EBI_ADR7          (0x2UL<<SYS_GPC_MFP2_PC9MFP_Pos)    /*!< GPC_MFP2 PC9 setting for EBI_ADR7           */
#define SYS_GPC_MFP2_PC9MFP_UART6_nCTS        (0x5UL<<SYS_GPC_MFP2_PC9MFP_Pos)    /*!< GPC_MFP2 PC9 setting for UART6_nCTS         */
#define SYS_GPC_MFP2_PC9MFP_UART3_RXD         (0x7UL<<SYS_GPC_MFP2_PC9MFP_Pos)    /*!< GPC_MFP2 PC9 setting for UART3_RXD          */
#define SYS_GPC_MFP2_PC9MFP_CANFD1_RXD        (0x9UL<<SYS_GPC_MFP2_PC9MFP_Pos)    /*!< GPC_MFP2 PC9 setting for CANFD1_RXD         */
#define SYS_GPC_MFP2_PC9MFP_EADC1_ST          (0xEUL<<SYS_GPC_MFP2_PC9MFP_Pos)    /*!< GPC_MFP2 PC9 setting for EADC1_ST           */

/* PC.10 MFP */
#define SYS_GPC_MFP2_PC10MFP_GPIO             (0x0UL<<SYS_GPC_MFP2_PC10MFP_Pos)   /*!< GPC_MFP2 PC10 setting for GPIO              */
#define SYS_GPC_MFP2_PC10MFP_EBI_ADR6         (0x2UL<<SYS_GPC_MFP2_PC10MFP_Pos)   /*!< GPC_MFP2 PC10 setting for EBI_ADR6          */
#define SYS_GPC_MFP2_PC10MFP_UART6_nRTS       (0x5UL<<SYS_GPC_MFP2_PC10MFP_Pos)   /*!< GPC_MFP2 PC10 setting for UART6_nRTS        */
#define SYS_GPC_MFP2_PC10MFP_UART3_TXD        (0x7UL<<SYS_GPC_MFP2_PC10MFP_Pos)   /*!< GPC_MFP2 PC10 setting for UART3_TXD         */
#define SYS_GPC_MFP2_PC10MFP_CANFD1_TXD       (0x9UL<<SYS_GPC_MFP2_PC10MFP_Pos)   /*!< GPC_MFP2 PC10 setting for CANFD1_TXD        */
#define SYS_GPC_MFP2_PC10MFP_CANFD1_TXH       (0xAUL<<SYS_GPC_MFP2_PC10MFP_Pos)   /*!< GPC_MFP2 PC10 setting for CANFD1_TXH        */
#define SYS_GPC_MFP2_PC10MFP_EADC1_ST         (0xEUL<<SYS_GPC_MFP2_PC10MFP_Pos)   /*!< GPC_MFP2 PC10 setting for EADC1_ST          */

/* PC.11 MFP */
#define SYS_GPC_MFP2_PC11MFP_GPIO             (0x0UL<<SYS_GPC_MFP2_PC11MFP_Pos)   /*!< GPC_MFP2 PC11 setting for GPIO              */
#define SYS_GPC_MFP2_PC11MFP_EBI_ADR5         (0x2UL<<SYS_GPC_MFP2_PC11MFP_Pos)   /*!< GPC_MFP2 PC11 setting for EBI_ADR5          */
#define SYS_GPC_MFP2_PC11MFP_UART0_RXD        (0x3UL<<SYS_GPC_MFP2_PC11MFP_Pos)   /*!< GPC_MFP2 PC11 setting for UART0_RXD         */
#define SYS_GPC_MFP2_PC11MFP_I2C0_SDA         (0x4UL<<SYS_GPC_MFP2_PC11MFP_Pos)   /*!< GPC_MFP2 PC11 setting for I2C0_SDA          */
#define SYS_GPC_MFP2_PC11MFP_UART6_RXD        (0x5UL<<SYS_GPC_MFP2_PC11MFP_Pos)   /*!< GPC_MFP2 PC11 setting for UART6_RXD         */
#define SYS_GPC_MFP2_PC11MFP_CANFD1_TXL       (0xAUL<<SYS_GPC_MFP2_PC11MFP_Pos)   /*!< GPC_MFP2 PC11 setting for CANFD1_TXL        */
#define SYS_GPC_MFP2_PC11MFP_ACMP1_O          (0xEUL<<SYS_GPC_MFP2_PC11MFP_Pos)   /*!< GPC_MFP2 PC11 setting for ACMP1_O           */

/* PC.12 MFP */
#define SYS_GPC_MFP3_PC12MFP_GPIO             (0x0UL<<SYS_GPC_MFP3_PC12MFP_Pos)   /*!< GPC_MFP3 PC12 setting for GPIO              */
#define SYS_GPC_MFP3_PC12MFP_EBI_ADR4         (0x2UL<<SYS_GPC_MFP3_PC12MFP_Pos)   /*!< GPC_MFP3 PC12 setting for EBI_ADR4          */
#define SYS_GPC_MFP3_PC12MFP_UART0_TXD        (0x3UL<<SYS_GPC_MFP3_PC12MFP_Pos)   /*!< GPC_MFP3 PC12 setting for UART0_TXD         */
#define SYS_GPC_MFP3_PC12MFP_I2C0_SCL         (0x4UL<<SYS_GPC_MFP3_PC12MFP_Pos)   /*!< GPC_MFP3 PC12 setting for I2C0_SCL          */
#define SYS_GPC_MFP3_PC12MFP_UART6_TXD        (0x5UL<<SYS_GPC_MFP3_PC12MFP_Pos)   /*!< GPC_MFP3 PC12 setting for UART6_TXD         */
#define SYS_GPC_MFP3_PC12MFP_ACMP0_O          (0xEUL<<SYS_GPC_MFP3_PC12MFP_Pos)   /*!< GPC_MFP3 PC12 setting for ACMP0_O           */

/* PC.13 MFP */
#define SYS_GPC_MFP3_PC13MFP_GPIO             (0x0UL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for GPIO              */
#define SYS_GPC_MFP3_PC13MFP_EADC0_CH19       (0x1UL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for EADC0_CH19        */
#define SYS_GPC_MFP3_PC13MFP_EBI_ADR10        (0x2UL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for EBI_ADR10         */
#define SYS_GPC_MFP3_PC13MFP_UART1_RXD        (0x4UL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for UART1_RXD         */
#define SYS_GPC_MFP3_PC13MFP_CANFD1_TXD       (0x5UL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for CANFD1_TXD        */
#define SYS_GPC_MFP3_PC13MFP_USCI0_CTL0       (0x6UL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for USCI0_CTL0        */
#define SYS_GPC_MFP3_PC13MFP_UART2_TXD        (0x7UL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for UART2_TXD         */
#define SYS_GPC_MFP3_PC13MFP_CANFD1_TXH       (0x8UL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for CANFD1_TXH        */
#define SYS_GPC_MFP3_PC13MFP_BPWM0_CH4        (0x9UL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for BPWM0_CH4         */
#define SYS_GPC_MFP3_PC13MFP_EQEI1_B          (0xAUL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for EQEI1_B           */
#define SYS_GPC_MFP3_PC13MFP_CLKO             (0xDUL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for CLKO              */
#define SYS_GPC_MFP3_PC13MFP_EADC0_ST         (0xEUL<<SYS_GPC_MFP3_PC13MFP_Pos)   /*!< GPC_MFP3 PC13 setting for EADC0_ST          */

/* PC.14 MFP */
#define SYS_GPC_MFP3_PC14MFP_GPIO             (0x0UL<<SYS_GPC_MFP3_PC14MFP_Pos)   /*!< GPC_MFP3 PC14 setting for GPIO              */
#define SYS_GPC_MFP3_PC14MFP_EADC1_CH8        (0x1UL<<SYS_GPC_MFP3_PC14MFP_Pos)   /*!< GPC_MFP3 PC14 setting for EADC1_CH8         */
#define SYS_GPC_MFP3_PC14MFP_EBI_AD11         (0x3UL<<SYS_GPC_MFP3_PC14MFP_Pos)   /*!< GPC_MFP3 PC14 setting for EBI_AD11          */
#define SYS_GPC_MFP3_PC14MFP_SPI0_I2SMCLK     (0x4UL<<SYS_GPC_MFP3_PC14MFP_Pos)   /*!< GPC_MFP3 PC14 setting for SPI0_I2SMCLK      */
#define SYS_GPC_MFP3_PC14MFP_USCI0_CTL0       (0x5UL<<SYS_GPC_MFP3_PC14MFP_Pos)   /*!< GPC_MFP3 PC14 setting for USCI0_CTL0        */
#define SYS_GPC_MFP3_PC14MFP_QSPI0_CLK        (0x6UL<<SYS_GPC_MFP3_PC14MFP_Pos)   /*!< GPC_MFP3 PC14 setting for QSPI0_CLK         */
#define SYS_GPC_MFP3_PC14MFP_TM1              (0xDUL<<SYS_GPC_MFP3_PC14MFP_Pos)   /*!< GPC_MFP3 PC14 setting for TM1               */
#define SYS_GPC_MFP3_PC14MFP_USB_VBUS_ST      (0xEUL<<SYS_GPC_MFP3_PC14MFP_Pos)   /*!< GPC_MFP3 PC14 setting for USB_VBUS_ST       */
#define SYS_GPC_MFP3_PC14MFP_TRACE_SWO        (0xFUL<<SYS_GPC_MFP3_PC14MFP_Pos)   /*!< GPC_MFP3 PC14 setting for TRACE_SWO         */

/* PD.0 MFP */
#define SYS_GPD_MFP0_PD0MFP_GPIO              (0x0UL<<SYS_GPD_MFP0_PD0MFP_Pos)    /*!< GPD_MFP0 PD0 setting for GPIO               */
#define SYS_GPD_MFP0_PD0MFP_EBI_AD13          (0x2UL<<SYS_GPD_MFP0_PD0MFP_Pos)    /*!< GPD_MFP0 PD0 setting for EBI_AD13           */
#define SYS_GPD_MFP0_PD0MFP_USCI0_CLK         (0x3UL<<SYS_GPD_MFP0_PD0MFP_Pos)    /*!< GPD_MFP0 PD0 setting for USCI0_CLK          */
#define SYS_GPD_MFP0_PD0MFP_SPI0_MOSI         (0x4UL<<SYS_GPD_MFP0_PD0MFP_Pos)    /*!< GPD_MFP0 PD0 setting for SPI0_MOSI          */
#define SYS_GPD_MFP0_PD0MFP_UART3_RXD         (0x5UL<<SYS_GPD_MFP0_PD0MFP_Pos)    /*!< GPD_MFP0 PD0 setting for UART3_RXD          */
#define SYS_GPD_MFP0_PD0MFP_I2C2_SDA          (0x6UL<<SYS_GPD_MFP0_PD0MFP_Pos)    /*!< GPD_MFP0 PD0 setting for I2C2_SDA           */
#define SYS_GPD_MFP0_PD0MFP_CANFD0_TXL        (0x7UL<<SYS_GPD_MFP0_PD0MFP_Pos)    /*!< GPD_MFP0 PD0 setting for CANFD0_TXL         */
#define SYS_GPD_MFP0_PD0MFP_TM2               (0xEUL<<SYS_GPD_MFP0_PD0MFP_Pos)    /*!< GPD_MFP0 PD0 setting for TM2                */

/* PD.1 MFP */
#define SYS_GPD_MFP0_PD1MFP_GPIO              (0x0UL<<SYS_GPD_MFP0_PD1MFP_Pos)    /*!< GPD_MFP0 PD1 setting for GPIO               */
#define SYS_GPD_MFP0_PD1MFP_EBI_AD12          (0x2UL<<SYS_GPD_MFP0_PD1MFP_Pos)    /*!< GPD_MFP0 PD1 setting for EBI_AD12           */
#define SYS_GPD_MFP0_PD1MFP_USCI0_DAT0        (0x3UL<<SYS_GPD_MFP0_PD1MFP_Pos)    /*!< GPD_MFP0 PD1 setting for USCI0_DAT0         */
#define SYS_GPD_MFP0_PD1MFP_SPI0_MISO         (0x4UL<<SYS_GPD_MFP0_PD1MFP_Pos)    /*!< GPD_MFP0 PD1 setting for SPI0_MISO          */
#define SYS_GPD_MFP0_PD1MFP_UART3_TXD         (0x5UL<<SYS_GPD_MFP0_PD1MFP_Pos)    /*!< GPD_MFP0 PD1 setting for UART3_TXD          */
#define SYS_GPD_MFP0_PD1MFP_I2C2_SCL          (0x6UL<<SYS_GPD_MFP0_PD1MFP_Pos)    /*!< GPD_MFP0 PD1 setting for I2C2_SCL           */

/* PD.2 MFP */
#define SYS_GPD_MFP0_PD2MFP_GPIO              (0x0UL<<SYS_GPD_MFP0_PD2MFP_Pos)    /*!< GPD_MFP0 PD2 setting for GPIO               */
#define SYS_GPD_MFP0_PD2MFP_EBI_AD11          (0x2UL<<SYS_GPD_MFP0_PD2MFP_Pos)    /*!< GPD_MFP0 PD2 setting for EBI_AD11           */
#define SYS_GPD_MFP0_PD2MFP_USCI0_DAT1        (0x3UL<<SYS_GPD_MFP0_PD2MFP_Pos)    /*!< GPD_MFP0 PD2 setting for USCI0_DAT1         */
#define SYS_GPD_MFP0_PD2MFP_SPI0_CLK          (0x4UL<<SYS_GPD_MFP0_PD2MFP_Pos)    /*!< GPD_MFP0 PD2 setting for SPI0_CLK           */
#define SYS_GPD_MFP0_PD2MFP_UART3_nCTS        (0x5UL<<SYS_GPD_MFP0_PD2MFP_Pos)    /*!< GPD_MFP0 PD2 setting for UART3_nCTS         */
#define SYS_GPD_MFP0_PD2MFP_UART0_RXD         (0x9UL<<SYS_GPD_MFP0_PD2MFP_Pos)    /*!< GPD_MFP0 PD2 setting for UART0_RXD          */

/* PD.3 MFP */
#define SYS_GPD_MFP0_PD3MFP_GPIO              (0x0UL<<SYS_GPD_MFP0_PD3MFP_Pos)    /*!< GPD_MFP0 PD3 setting for GPIO               */
#define SYS_GPD_MFP0_PD3MFP_EBI_AD10          (0x2UL<<SYS_GPD_MFP0_PD3MFP_Pos)    /*!< GPD_MFP0 PD3 setting for EBI_AD10           */
#define SYS_GPD_MFP0_PD3MFP_USCI0_CTL1        (0x3UL<<SYS_GPD_MFP0_PD3MFP_Pos)    /*!< GPD_MFP0 PD3 setting for USCI0_CTL1         */
#define SYS_GPD_MFP0_PD3MFP_SPI0_SS           (0x4UL<<SYS_GPD_MFP0_PD3MFP_Pos)    /*!< GPD_MFP0 PD3 setting for SPI0_SS            */
#define SYS_GPD_MFP0_PD3MFP_UART3_nRTS        (0x5UL<<SYS_GPD_MFP0_PD3MFP_Pos)    /*!< GPD_MFP0 PD3 setting for UART3_nRTS         */
#define SYS_GPD_MFP0_PD3MFP_USCI1_CTL0        (0x6UL<<SYS_GPD_MFP0_PD3MFP_Pos)    /*!< GPD_MFP0 PD3 setting for USCI1_CTL0         */
#define SYS_GPD_MFP0_PD3MFP_UART0_TXD         (0x9UL<<SYS_GPD_MFP0_PD3MFP_Pos)    /*!< GPD_MFP0 PD3 setting for UART0_TXD          */

/* PD.4 MFP */
#define SYS_GPD_MFP1_PD4MFP_GPIO              (0x0UL<<SYS_GPD_MFP1_PD4MFP_Pos)    /*!< GPD_MFP1 PD4 setting for GPIO               */
#define SYS_GPD_MFP1_PD4MFP_EBI_AD5           (0x2UL<<SYS_GPD_MFP1_PD4MFP_Pos)    /*!< GPD_MFP1 PD4 setting for EBI_AD5            */
#define SYS_GPD_MFP1_PD4MFP_USCI0_CTL0        (0x3UL<<SYS_GPD_MFP1_PD4MFP_Pos)    /*!< GPD_MFP1 PD4 setting for USCI0_CTL0         */
#define SYS_GPD_MFP1_PD4MFP_I2C1_SDA          (0x4UL<<SYS_GPD_MFP1_PD4MFP_Pos)    /*!< GPD_MFP1 PD4 setting for I2C1_SDA           */
#define SYS_GPD_MFP1_PD4MFP_SPI1_SS           (0x5UL<<SYS_GPD_MFP1_PD4MFP_Pos)    /*!< GPD_MFP1 PD4 setting for SPI1_SS            */
#define SYS_GPD_MFP1_PD4MFP_USCI1_CTL1        (0x6UL<<SYS_GPD_MFP1_PD4MFP_Pos)    /*!< GPD_MFP1 PD4 setting for USCI1_CTL1         */
#define SYS_GPD_MFP1_PD4MFP_USB_VBUS_ST       (0xEUL<<SYS_GPD_MFP1_PD4MFP_Pos)    /*!< GPD_MFP1 PD4 setting for USB_VBUS_ST        */

/* PD.5 MFP */
#define SYS_GPD_MFP1_PD5MFP_GPIO              (0x0UL<<SYS_GPD_MFP1_PD5MFP_Pos)    /*!< GPD_MFP1 PD5 setting for GPIO               */
#define SYS_GPD_MFP1_PD5MFP_EBI_AD15          (0x2UL<<SYS_GPD_MFP1_PD5MFP_Pos)    /*!< GPD_MFP1 PD5 setting for EBI_AD15           */
#define SYS_GPD_MFP1_PD5MFP_I2C1_SCL          (0x4UL<<SYS_GPD_MFP1_PD5MFP_Pos)    /*!< GPD_MFP1 PD5 setting for I2C1_SCL           */
#define SYS_GPD_MFP1_PD5MFP_SPI1_CLK          (0x5UL<<SYS_GPD_MFP1_PD5MFP_Pos)    /*!< GPD_MFP1 PD5 setting for SPI1_CLK           */
#define SYS_GPD_MFP1_PD5MFP_USCI1_DAT0        (0x6UL<<SYS_GPD_MFP1_PD5MFP_Pos)    /*!< GPD_MFP1 PD5 setting for USCI1_DAT0         */

/* PD.6 MFP */
#define SYS_GPD_MFP1_PD6MFP_GPIO              (0x0UL<<SYS_GPD_MFP1_PD6MFP_Pos)    /*!< GPD_MFP1 PD6 setting for GPIO               */
#define SYS_GPD_MFP1_PD6MFP_UART1_RXD         (0x3UL<<SYS_GPD_MFP1_PD6MFP_Pos)    /*!< GPD_MFP1 PD6 setting for UART1_RXD          */
#define SYS_GPD_MFP1_PD6MFP_I2C0_SDA          (0x4UL<<SYS_GPD_MFP1_PD6MFP_Pos)    /*!< GPD_MFP1 PD6 setting for I2C0_SDA           */
#define SYS_GPD_MFP1_PD6MFP_SPI1_MOSI         (0x5UL<<SYS_GPD_MFP1_PD6MFP_Pos)    /*!< GPD_MFP1 PD6 setting for SPI1_MOSI          */
#define SYS_GPD_MFP1_PD6MFP_USCI1_DAT1        (0x6UL<<SYS_GPD_MFP1_PD6MFP_Pos)    /*!< GPD_MFP1 PD6 setting for USCI1_DAT1         */

/* PD.7 MFP */
#define SYS_GPD_MFP1_PD7MFP_GPIO              (0x0UL<<SYS_GPD_MFP1_PD7MFP_Pos)    /*!< GPD_MFP1 PD7 setting for GPIO               */
#define SYS_GPD_MFP1_PD7MFP_UART1_TXD         (0x3UL<<SYS_GPD_MFP1_PD7MFP_Pos)    /*!< GPD_MFP1 PD7 setting for UART1_TXD          */
#define SYS_GPD_MFP1_PD7MFP_I2C0_SCL          (0x4UL<<SYS_GPD_MFP1_PD7MFP_Pos)    /*!< GPD_MFP1 PD7 setting for I2C0_SCL           */
#define SYS_GPD_MFP1_PD7MFP_SPI1_MISO         (0x5UL<<SYS_GPD_MFP1_PD7MFP_Pos)    /*!< GPD_MFP1 PD7 setting for SPI1_MISO          */
#define SYS_GPD_MFP1_PD7MFP_USCI1_CLK         (0x6UL<<SYS_GPD_MFP1_PD7MFP_Pos)    /*!< GPD_MFP1 PD7 setting for USCI1_CLK          */

/* PD.8 MFP */
#define SYS_GPD_MFP2_PD8MFP_GPIO              (0x0UL<<SYS_GPD_MFP2_PD8MFP_Pos)    /*!< GPD_MFP2 PD8 setting for GPIO               */
#define SYS_GPD_MFP2_PD8MFP_EBI_AD6           (0x2UL<<SYS_GPD_MFP2_PD8MFP_Pos)    /*!< GPD_MFP2 PD8 setting for EBI_AD6            */
#define SYS_GPD_MFP2_PD8MFP_I2C2_SDA          (0x3UL<<SYS_GPD_MFP2_PD8MFP_Pos)    /*!< GPD_MFP2 PD8 setting for I2C2_SDA           */
#define SYS_GPD_MFP2_PD8MFP_UART2_nRTS        (0x4UL<<SYS_GPD_MFP2_PD8MFP_Pos)    /*!< GPD_MFP2 PD8 setting for UART2_nRTS         */
#define SYS_GPD_MFP2_PD8MFP_UART7_RXD         (0x5UL<<SYS_GPD_MFP2_PD8MFP_Pos)    /*!< GPD_MFP2 PD8 setting for UART7_RXD          */

/* PD.9 MFP */
#define SYS_GPD_MFP2_PD9MFP_GPIO              (0x0UL<<SYS_GPD_MFP2_PD9MFP_Pos)    /*!< GPD_MFP2 PD9 setting for GPIO               */
#define SYS_GPD_MFP2_PD9MFP_EBI_AD7           (0x2UL<<SYS_GPD_MFP2_PD9MFP_Pos)    /*!< GPD_MFP2 PD9 setting for EBI_AD7            */
#define SYS_GPD_MFP2_PD9MFP_I2C2_SCL          (0x3UL<<SYS_GPD_MFP2_PD9MFP_Pos)    /*!< GPD_MFP2 PD9 setting for I2C2_SCL           */
#define SYS_GPD_MFP2_PD9MFP_UART2_nCTS        (0x4UL<<SYS_GPD_MFP2_PD9MFP_Pos)    /*!< GPD_MFP2 PD9 setting for UART2_nCTS         */
#define SYS_GPD_MFP2_PD9MFP_UART7_TXD         (0x5UL<<SYS_GPD_MFP2_PD9MFP_Pos)    /*!< GPD_MFP2 PD9 setting for UART7_TXD          */

/* PD.10 MFP */
#define SYS_GPD_MFP2_PD10MFP_GPIO             (0x0UL<<SYS_GPD_MFP2_PD10MFP_Pos)   /*!< GPD_MFP2 PD10 setting for GPIO              */
#define SYS_GPD_MFP2_PD10MFP_EADC0_CH16       (0x1UL<<SYS_GPD_MFP2_PD10MFP_Pos)   /*!< GPD_MFP2 PD10 setting for EADC0_CH16        */
#define SYS_GPD_MFP2_PD10MFP_EBI_nCS2         (0x2UL<<SYS_GPD_MFP2_PD10MFP_Pos)   /*!< GPD_MFP2 PD10 setting for EBI_nCS2          */
#define SYS_GPD_MFP2_PD10MFP_UART1_RXD        (0x3UL<<SYS_GPD_MFP2_PD10MFP_Pos)   /*!< GPD_MFP2 PD10 setting for UART1_RXD         */
#define SYS_GPD_MFP2_PD10MFP_CANFD0_RXD       (0x4UL<<SYS_GPD_MFP2_PD10MFP_Pos)   /*!< GPD_MFP2 PD10 setting for CANFD0_RXD        */
#define SYS_GPD_MFP2_PD10MFP_EQEI0_B          (0xAUL<<SYS_GPD_MFP2_PD10MFP_Pos)   /*!< GPD_MFP2 PD10 setting for EQEI0_B           */
#define SYS_GPD_MFP2_PD10MFP_INT7             (0xFUL<<SYS_GPD_MFP2_PD10MFP_Pos)   /*!< GPD_MFP2 PD10 setting for INT7              */

/* PD.11 MFP */
#define SYS_GPD_MFP2_PD11MFP_GPIO             (0x0UL<<SYS_GPD_MFP2_PD11MFP_Pos)   /*!< GPD_MFP2 PD11 setting for GPIO              */
#define SYS_GPD_MFP2_PD11MFP_EADC0_CH17       (0x1UL<<SYS_GPD_MFP2_PD11MFP_Pos)   /*!< GPD_MFP2 PD11 setting for EADC0_CH17        */
#define SYS_GPD_MFP2_PD11MFP_EBI_nCS1         (0x2UL<<SYS_GPD_MFP2_PD11MFP_Pos)   /*!< GPD_MFP2 PD11 setting for EBI_nCS1          */
#define SYS_GPD_MFP2_PD11MFP_UART1_TXD        (0x3UL<<SYS_GPD_MFP2_PD11MFP_Pos)   /*!< GPD_MFP2 PD11 setting for UART1_TXD         */
#define SYS_GPD_MFP2_PD11MFP_CANFD0_TXD       (0x4UL<<SYS_GPD_MFP2_PD11MFP_Pos)   /*!< GPD_MFP2 PD11 setting for CANFD0_TXD        */
#define SYS_GPD_MFP2_PD11MFP_CANFD0_TXH       (0x8UL<<SYS_GPD_MFP2_PD11MFP_Pos)   /*!< GPD_MFP2 PD11 setting for CANFD0_TXH        */
#define SYS_GPD_MFP2_PD11MFP_EQEI0_A          (0xAUL<<SYS_GPD_MFP2_PD11MFP_Pos)   /*!< GPD_MFP2 PD11 setting for EQEI0_A           */
#define SYS_GPD_MFP2_PD11MFP_INT6             (0xFUL<<SYS_GPD_MFP2_PD11MFP_Pos)   /*!< GPD_MFP2 PD11 setting for INT6              */

/* PD.12 MFP */
#define SYS_GPD_MFP3_PD12MFP_GPIO             (0x0UL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for GPIO              */
#define SYS_GPD_MFP3_PD12MFP_EADC0_CH18       (0x1UL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for EADC0_CH18        */
#define SYS_GPD_MFP3_PD12MFP_EBI_nCS0         (0x2UL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for EBI_nCS0          */
#define SYS_GPD_MFP3_PD12MFP_CANFD1_RXD       (0x5UL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for CANFD1_RXD        */
#define SYS_GPD_MFP3_PD12MFP_UART2_RXD        (0x7UL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for UART2_RXD         */
#define SYS_GPD_MFP3_PD12MFP_BPWM0_CH5        (0x9UL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for BPWM0_CH5         */
#define SYS_GPD_MFP3_PD12MFP_EQEI0_INDEX      (0xAUL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for EQEI0_INDEX       */
#define SYS_GPD_MFP3_PD12MFP_CLKO             (0xDUL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for CLKO              */
#define SYS_GPD_MFP3_PD12MFP_EADC0_ST         (0xEUL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for EADC0_ST          */
#define SYS_GPD_MFP3_PD12MFP_INT5             (0xFUL<<SYS_GPD_MFP3_PD12MFP_Pos)   /*!< GPD_MFP3 PD12 setting for INT5              */

/* PD.13 MFP */
#define SYS_GPD_MFP3_PD13MFP_GPIO             (0x0UL<<SYS_GPD_MFP3_PD13MFP_Pos)   /*!< GPD_MFP3 PD13 setting for GPIO              */
#define SYS_GPD_MFP3_PD13MFP_EBI_AD10         (0x2UL<<SYS_GPD_MFP3_PD13MFP_Pos)   /*!< GPD_MFP3 PD13 setting for EBI_AD10          */
#define SYS_GPD_MFP3_PD13MFP_EADC0_ST         (0xDUL<<SYS_GPD_MFP3_PD13MFP_Pos)   /*!< GPD_MFP3 PD13 setting for EADC0_ST          */

/* PD.14 MFP */
#define SYS_GPD_MFP3_PD14MFP_GPIO             (0x0UL<<SYS_GPD_MFP3_PD14MFP_Pos)   /*!< GPD_MFP3 PD14 setting for GPIO              */
#define SYS_GPD_MFP3_PD14MFP_EADC1_CH9        (0x1UL<<SYS_GPD_MFP3_PD14MFP_Pos)   /*!< GPD_MFP3 PD14 setting for EADC1_CH9         */
#define SYS_GPD_MFP3_PD14MFP_EBI_nCS0         (0x2UL<<SYS_GPD_MFP3_PD14MFP_Pos)   /*!< GPD_MFP3 PD14 setting for EBI_nCS0          */
#define SYS_GPD_MFP3_PD14MFP_SPI0_I2SMCLK     (0x5UL<<SYS_GPD_MFP3_PD14MFP_Pos)   /*!< GPD_MFP3 PD14 setting for SPI0_I2SMCLK      */

/* PD.15 MFP */
#define SYS_GPD_MFP3_PD15MFP_GPIO             (0x0UL<<SYS_GPD_MFP3_PD15MFP_Pos)   /*!< GPD_MFP3 PD15 setting for GPIO              */
#define SYS_GPD_MFP3_PD15MFP_LLSI7_OUT        (0x2UL<<SYS_GPD_MFP3_PD15MFP_Pos)   /*!< GPD_MFP3 PD15 setting for LLSI7_OUT         */

/* PE.0 MFP */
#define SYS_GPE_MFP0_PE0MFP_GPIO              (0x0UL<<SYS_GPE_MFP0_PE0MFP_Pos)    /*!< GPE_MFP0 PE0 setting for GPIO               */
#define SYS_GPE_MFP0_PE0MFP_EADC1_CH14        (0x1UL<<SYS_GPE_MFP0_PE0MFP_Pos)    /*!< GPE_MFP0 PE0 setting for EADC1_CH14         */
#define SYS_GPE_MFP0_PE0MFP_EBI_AD11          (0x2UL<<SYS_GPE_MFP0_PE0MFP_Pos)    /*!< GPE_MFP0 PE0 setting for EBI_AD11           */
#define SYS_GPE_MFP0_PE0MFP_QSPI0_MOSI0       (0x3UL<<SYS_GPE_MFP0_PE0MFP_Pos)    /*!< GPE_MFP0 PE0 setting for QSPI0_MOSI0        */
#define SYS_GPE_MFP0_PE0MFP_SPI1_MOSI         (0x6UL<<SYS_GPE_MFP0_PE0MFP_Pos)    /*!< GPE_MFP0 PE0 setting for SPI1_MOSI          */
#define SYS_GPE_MFP0_PE0MFP_UART3_RXD         (0x7UL<<SYS_GPE_MFP0_PE0MFP_Pos)    /*!< GPE_MFP0 PE0 setting for UART3_RXD          */
#define SYS_GPE_MFP0_PE0MFP_I2C1_SDA          (0x8UL<<SYS_GPE_MFP0_PE0MFP_Pos)    /*!< GPE_MFP0 PE0 setting for I2C1_SDA           */
#define SYS_GPE_MFP0_PE0MFP_UART4_nRTS        (0x9UL<<SYS_GPE_MFP0_PE0MFP_Pos)    /*!< GPE_MFP0 PE0 setting for UART4_nRTS         */

/* PE.1 MFP */
#define SYS_GPE_MFP0_PE1MFP_GPIO              (0x0UL<<SYS_GPE_MFP0_PE1MFP_Pos)    /*!< GPE_MFP0 PE1 setting for GPIO               */
#define SYS_GPE_MFP0_PE1MFP_EADC1_CH15        (0x1UL<<SYS_GPE_MFP0_PE1MFP_Pos)    /*!< GPE_MFP0 PE1 setting for EADC1_CH15         */
#define SYS_GPE_MFP0_PE1MFP_EBI_AD10          (0x2UL<<SYS_GPE_MFP0_PE1MFP_Pos)    /*!< GPE_MFP0 PE1 setting for EBI_AD10           */
#define SYS_GPE_MFP0_PE1MFP_QSPI0_MISO0       (0x3UL<<SYS_GPE_MFP0_PE1MFP_Pos)    /*!< GPE_MFP0 PE1 setting for QSPI0_MISO0        */
#define SYS_GPE_MFP0_PE1MFP_SPI1_MISO         (0x6UL<<SYS_GPE_MFP0_PE1MFP_Pos)    /*!< GPE_MFP0 PE1 setting for SPI1_MISO          */
#define SYS_GPE_MFP0_PE1MFP_UART3_TXD         (0x7UL<<SYS_GPE_MFP0_PE1MFP_Pos)    /*!< GPE_MFP0 PE1 setting for UART3_TXD          */
#define SYS_GPE_MFP0_PE1MFP_I2C1_SCL          (0x8UL<<SYS_GPE_MFP0_PE1MFP_Pos)    /*!< GPE_MFP0 PE1 setting for I2C1_SCL           */
#define SYS_GPE_MFP0_PE1MFP_UART4_nCTS        (0x9UL<<SYS_GPE_MFP0_PE1MFP_Pos)    /*!< GPE_MFP0 PE1 setting for UART4_nCTS         */

/* PE.2 MFP */
#define SYS_GPE_MFP0_PE2MFP_GPIO              (0x0UL<<SYS_GPE_MFP0_PE2MFP_Pos)    /*!< GPE_MFP0 PE2 setting for GPIO               */
#define SYS_GPE_MFP0_PE2MFP_EBI_ALE           (0x2UL<<SYS_GPE_MFP0_PE2MFP_Pos)    /*!< GPE_MFP0 PE2 setting for EBI_ALE            */
#define SYS_GPE_MFP0_PE2MFP_USCI0_CLK         (0x7UL<<SYS_GPE_MFP0_PE2MFP_Pos)    /*!< GPE_MFP0 PE2 setting for USCI0_CLK          */
#define SYS_GPE_MFP0_PE2MFP_UART6_nCTS        (0x8UL<<SYS_GPE_MFP0_PE2MFP_Pos)    /*!< GPE_MFP0 PE2 setting for UART6_nCTS         */
#define SYS_GPE_MFP0_PE2MFP_UART7_RXD         (0x9UL<<SYS_GPE_MFP0_PE2MFP_Pos)    /*!< GPE_MFP0 PE2 setting for UART7_RXD          */
#define SYS_GPE_MFP0_PE2MFP_EQEI0_B           (0xBUL<<SYS_GPE_MFP0_PE2MFP_Pos)    /*!< GPE_MFP0 PE2 setting for EQEI0_B            */
#define SYS_GPE_MFP0_PE2MFP_BPWM0_CH0         (0xDUL<<SYS_GPE_MFP0_PE2MFP_Pos)    /*!< GPE_MFP0 PE2 setting for BPWM0_CH0          */

/* PE.3 MFP */
#define SYS_GPE_MFP0_PE3MFP_GPIO              (0x0UL<<SYS_GPE_MFP0_PE3MFP_Pos)    /*!< GPE_MFP0 PE3 setting for GPIO               */
#define SYS_GPE_MFP0_PE3MFP_EBI_MCLK          (0x2UL<<SYS_GPE_MFP0_PE3MFP_Pos)    /*!< GPE_MFP0 PE3 setting for EBI_MCLK           */
#define SYS_GPE_MFP0_PE3MFP_USCI0_DAT0        (0x7UL<<SYS_GPE_MFP0_PE3MFP_Pos)    /*!< GPE_MFP0 PE3 setting for USCI0_DAT0         */
#define SYS_GPE_MFP0_PE3MFP_UART6_nRTS        (0x8UL<<SYS_GPE_MFP0_PE3MFP_Pos)    /*!< GPE_MFP0 PE3 setting for UART6_nRTS         */
#define SYS_GPE_MFP0_PE3MFP_UART7_TXD         (0x9UL<<SYS_GPE_MFP0_PE3MFP_Pos)    /*!< GPE_MFP0 PE3 setting for UART7_TXD          */
#define SYS_GPE_MFP0_PE3MFP_EQEI0_A           (0xBUL<<SYS_GPE_MFP0_PE3MFP_Pos)    /*!< GPE_MFP0 PE3 setting for EQEI0_A            */
#define SYS_GPE_MFP0_PE3MFP_BPWM0_CH1         (0xDUL<<SYS_GPE_MFP0_PE3MFP_Pos)    /*!< GPE_MFP0 PE3 setting for BPWM0_CH1          */

/* PE.4 MFP */
#define SYS_GPE_MFP1_PE4MFP_GPIO              (0x0UL<<SYS_GPE_MFP1_PE4MFP_Pos)    /*!< GPE_MFP1 PE4 setting for GPIO               */
#define SYS_GPE_MFP1_PE4MFP_EBI_nWR           (0x2UL<<SYS_GPE_MFP1_PE4MFP_Pos)    /*!< GPE_MFP1 PE4 setting for EBI_nWR            */
#define SYS_GPE_MFP1_PE4MFP_USCI0_DAT1        (0x7UL<<SYS_GPE_MFP1_PE4MFP_Pos)    /*!< GPE_MFP1 PE4 setting for USCI0_DAT1         */
#define SYS_GPE_MFP1_PE4MFP_UART6_RXD         (0x8UL<<SYS_GPE_MFP1_PE4MFP_Pos)    /*!< GPE_MFP1 PE4 setting for UART6_RXD          */
#define SYS_GPE_MFP1_PE4MFP_UART7_nCTS        (0x9UL<<SYS_GPE_MFP1_PE4MFP_Pos)    /*!< GPE_MFP1 PE4 setting for UART7_nCTS         */
#define SYS_GPE_MFP1_PE4MFP_EQEI0_INDEX       (0xBUL<<SYS_GPE_MFP1_PE4MFP_Pos)    /*!< GPE_MFP1 PE4 setting for EQEI0_INDEX        */
#define SYS_GPE_MFP1_PE4MFP_BPWM0_CH2         (0xDUL<<SYS_GPE_MFP1_PE4MFP_Pos)    /*!< GPE_MFP1 PE4 setting for BPWM0_CH2          */

/* PE.5 MFP */
#define SYS_GPE_MFP1_PE5MFP_GPIO              (0x0UL<<SYS_GPE_MFP1_PE5MFP_Pos)    /*!< GPE_MFP1 PE5 setting for GPIO               */
#define SYS_GPE_MFP1_PE5MFP_EBI_nRD           (0x2UL<<SYS_GPE_MFP1_PE5MFP_Pos)    /*!< GPE_MFP1 PE5 setting for EBI_nRD            */
#define SYS_GPE_MFP1_PE5MFP_UART1_RXD         (0x4UL<<SYS_GPE_MFP1_PE5MFP_Pos)    /*!< GPE_MFP1 PE5 setting for UART1_RXD          */
#define SYS_GPE_MFP1_PE5MFP_USCI0_CTL1        (0x7UL<<SYS_GPE_MFP1_PE5MFP_Pos)    /*!< GPE_MFP1 PE5 setting for USCI0_CTL1         */
#define SYS_GPE_MFP1_PE5MFP_UART6_TXD         (0x8UL<<SYS_GPE_MFP1_PE5MFP_Pos)    /*!< GPE_MFP1 PE5 setting for UART6_TXD          */
#define SYS_GPE_MFP1_PE5MFP_UART7_nRTS        (0x9UL<<SYS_GPE_MFP1_PE5MFP_Pos)    /*!< GPE_MFP1 PE5 setting for UART7_nRTS         */
#define SYS_GPE_MFP1_PE5MFP_CANFD1_TXL        (0xAUL<<SYS_GPE_MFP1_PE5MFP_Pos)    /*!< GPE_MFP1 PE5 setting for CANFD1_TXL         */
#define SYS_GPE_MFP1_PE5MFP_EQEI1_B           (0xBUL<<SYS_GPE_MFP1_PE5MFP_Pos)    /*!< GPE_MFP1 PE5 setting for EQEI1_B            */
#define SYS_GPE_MFP1_PE5MFP_BPWM0_CH3         (0xDUL<<SYS_GPE_MFP1_PE5MFP_Pos)    /*!< GPE_MFP1 PE5 setting for BPWM0_CH3          */

/* PE.6 MFP */
#define SYS_GPE_MFP1_PE6MFP_GPIO              (0x0UL<<SYS_GPE_MFP1_PE6MFP_Pos)    /*!< GPE_MFP1 PE6 setting for GPIO               */
#define SYS_GPE_MFP1_PE6MFP_EBI_AD11          (0x2UL<<SYS_GPE_MFP1_PE6MFP_Pos)    /*!< GPE_MFP1 PE6 setting for EBI_AD11           */
#define SYS_GPE_MFP1_PE6MFP_UART1_TXD         (0x4UL<<SYS_GPE_MFP1_PE6MFP_Pos)    /*!< GPE_MFP1 PE6 setting for UART1_TXD          */
#define SYS_GPE_MFP1_PE6MFP_USCI0_CTL0        (0x7UL<<SYS_GPE_MFP1_PE6MFP_Pos)    /*!< GPE_MFP1 PE6 setting for USCI0_CTL0         */
#define SYS_GPE_MFP1_PE6MFP_UART5_RXD         (0x8UL<<SYS_GPE_MFP1_PE6MFP_Pos)    /*!< GPE_MFP1 PE6 setting for UART5_RXD          */
#define SYS_GPE_MFP1_PE6MFP_CANFD1_RXD        (0x9UL<<SYS_GPE_MFP1_PE6MFP_Pos)    /*!< GPE_MFP1 PE6 setting for CANFD1_RXD         */
#define SYS_GPE_MFP1_PE6MFP_EQEI1_A           (0xBUL<<SYS_GPE_MFP1_PE6MFP_Pos)    /*!< GPE_MFP1 PE6 setting for EQEI1_A            */
#define SYS_GPE_MFP1_PE6MFP_BPWM0_CH4         (0xDUL<<SYS_GPE_MFP1_PE6MFP_Pos)    /*!< GPE_MFP1 PE6 setting for BPWM0_CH4          */

/* PE.7 MFP */
#define SYS_GPE_MFP1_PE7MFP_GPIO              (0x0UL<<SYS_GPE_MFP1_PE7MFP_Pos)    /*!< GPE_MFP1 PE7 setting for GPIO               */
#define SYS_GPE_MFP1_PE7MFP_EBI_AD10          (0x2UL<<SYS_GPE_MFP1_PE7MFP_Pos)    /*!< GPE_MFP1 PE7 setting for EBI_AD10           */
#define SYS_GPE_MFP1_PE7MFP_UART5_TXD         (0x8UL<<SYS_GPE_MFP1_PE7MFP_Pos)    /*!< GPE_MFP1 PE7 setting for UART5_TXD          */
#define SYS_GPE_MFP1_PE7MFP_CANFD1_TXD        (0x9UL<<SYS_GPE_MFP1_PE7MFP_Pos)    /*!< GPE_MFP1 PE7 setting for CANFD1_TXD         */
#define SYS_GPE_MFP1_PE7MFP_CANFD1_TXH        (0xAUL<<SYS_GPE_MFP1_PE7MFP_Pos)    /*!< GPE_MFP1 PE7 setting for CANFD1_TXH         */
#define SYS_GPE_MFP1_PE7MFP_EQEI1_INDEX       (0xBUL<<SYS_GPE_MFP1_PE7MFP_Pos)    /*!< GPE_MFP1 PE7 setting for EQEI1_INDEX        */
#define SYS_GPE_MFP1_PE7MFP_BPWM0_CH5         (0xDUL<<SYS_GPE_MFP1_PE7MFP_Pos)    /*!< GPE_MFP1 PE7 setting for BPWM0_CH5          */

/* PE.8 MFP */
#define SYS_GPE_MFP2_PE8MFP_GPIO              (0x0UL<<SYS_GPE_MFP2_PE8MFP_Pos)    /*!< GPE_MFP2 PE8 setting for GPIO               */
#define SYS_GPE_MFP2_PE8MFP_EBI_ADR10         (0x2UL<<SYS_GPE_MFP2_PE8MFP_Pos)    /*!< GPE_MFP2 PE8 setting for EBI_ADR10          */
#define SYS_GPE_MFP2_PE8MFP_USCI1_CTL1        (0x6UL<<SYS_GPE_MFP2_PE8MFP_Pos)    /*!< GPE_MFP2 PE8 setting for USCI1_CTL1         */
#define SYS_GPE_MFP2_PE8MFP_UART2_TXD         (0x7UL<<SYS_GPE_MFP2_PE8MFP_Pos)    /*!< GPE_MFP2 PE8 setting for UART2_TXD          */
#define SYS_GPE_MFP2_PE8MFP_ECAP0_IC0         (0xCUL<<SYS_GPE_MFP2_PE8MFP_Pos)    /*!< GPE_MFP2 PE8 setting for ECAP0_IC0          */

/* PE.9 MFP */
#define SYS_GPE_MFP2_PE9MFP_GPIO              (0x0UL<<SYS_GPE_MFP2_PE9MFP_Pos)    /*!< GPE_MFP2 PE9 setting for GPIO               */
#define SYS_GPE_MFP2_PE9MFP_EBI_ADR11         (0x2UL<<SYS_GPE_MFP2_PE9MFP_Pos)    /*!< GPE_MFP2 PE9 setting for EBI_ADR11          */
#define SYS_GPE_MFP2_PE9MFP_USCI1_CTL0        (0x6UL<<SYS_GPE_MFP2_PE9MFP_Pos)    /*!< GPE_MFP2 PE9 setting for USCI1_CTL0         */
#define SYS_GPE_MFP2_PE9MFP_UART2_RXD         (0x7UL<<SYS_GPE_MFP2_PE9MFP_Pos)    /*!< GPE_MFP2 PE9 setting for UART2_RXD          */
#define SYS_GPE_MFP2_PE9MFP_ECAP0_IC1         (0xCUL<<SYS_GPE_MFP2_PE9MFP_Pos)    /*!< GPE_MFP2 PE9 setting for ECAP0_IC1          */

/* PE.10 MFP */
#define SYS_GPE_MFP2_PE10MFP_GPIO             (0x0UL<<SYS_GPE_MFP2_PE10MFP_Pos)   /*!< GPE_MFP2 PE10 setting for GPIO              */
#define SYS_GPE_MFP2_PE10MFP_EBI_ADR12        (0x2UL<<SYS_GPE_MFP2_PE10MFP_Pos)   /*!< GPE_MFP2 PE10 setting for EBI_ADR12         */
#define SYS_GPE_MFP2_PE10MFP_USCI1_DAT0       (0x6UL<<SYS_GPE_MFP2_PE10MFP_Pos)   /*!< GPE_MFP2 PE10 setting for USCI1_DAT0        */
#define SYS_GPE_MFP2_PE10MFP_UART3_TXD        (0x7UL<<SYS_GPE_MFP2_PE10MFP_Pos)   /*!< GPE_MFP2 PE10 setting for UART3_TXD         */
#define SYS_GPE_MFP2_PE10MFP_ECAP0_IC2        (0xCUL<<SYS_GPE_MFP2_PE10MFP_Pos)   /*!< GPE_MFP2 PE10 setting for ECAP0_IC2         */

/* PE.11 MFP */
#define SYS_GPE_MFP2_PE11MFP_GPIO             (0x0UL<<SYS_GPE_MFP2_PE11MFP_Pos)   /*!< GPE_MFP2 PE11 setting for GPIO              */
#define SYS_GPE_MFP2_PE11MFP_EBI_ADR13        (0x2UL<<SYS_GPE_MFP2_PE11MFP_Pos)   /*!< GPE_MFP2 PE11 setting for EBI_ADR13         */
#define SYS_GPE_MFP2_PE11MFP_USCI1_DAT1       (0x6UL<<SYS_GPE_MFP2_PE11MFP_Pos)   /*!< GPE_MFP2 PE11 setting for USCI1_DAT1        */
#define SYS_GPE_MFP2_PE11MFP_UART3_RXD        (0x7UL<<SYS_GPE_MFP2_PE11MFP_Pos)   /*!< GPE_MFP2 PE11 setting for UART3_RXD         */
#define SYS_GPE_MFP2_PE11MFP_UART1_nCTS       (0x8UL<<SYS_GPE_MFP2_PE11MFP_Pos)   /*!< GPE_MFP2 PE11 setting for UART1_nCTS        */

/* PE.12 MFP */
#define SYS_GPE_MFP3_PE12MFP_GPIO             (0x0UL<<SYS_GPE_MFP3_PE12MFP_Pos)   /*!< GPE_MFP3 PE12 setting for GPIO              */
#define SYS_GPE_MFP3_PE12MFP_EBI_ADR14        (0x2UL<<SYS_GPE_MFP3_PE12MFP_Pos)   /*!< GPE_MFP3 PE12 setting for EBI_ADR14         */
#define SYS_GPE_MFP3_PE12MFP_USCI1_CLK        (0x6UL<<SYS_GPE_MFP3_PE12MFP_Pos)   /*!< GPE_MFP3 PE12 setting for USCI1_CLK         */
#define SYS_GPE_MFP3_PE12MFP_UART1_nRTS       (0x8UL<<SYS_GPE_MFP3_PE12MFP_Pos)   /*!< GPE_MFP3 PE12 setting for UART1_nRTS        */

/* PE.13 MFP */
#define SYS_GPE_MFP3_PE13MFP_GPIO             (0x0UL<<SYS_GPE_MFP3_PE13MFP_Pos)   /*!< GPE_MFP3 PE13 setting for GPIO              */
#define SYS_GPE_MFP3_PE13MFP_EBI_ADR15        (0x2UL<<SYS_GPE_MFP3_PE13MFP_Pos)   /*!< GPE_MFP3 PE13 setting for EBI_ADR15         */
#define SYS_GPE_MFP3_PE13MFP_I2C0_SCL         (0x4UL<<SYS_GPE_MFP3_PE13MFP_Pos)   /*!< GPE_MFP3 PE13 setting for I2C0_SCL          */
#define SYS_GPE_MFP3_PE13MFP_UART4_nRTS       (0x5UL<<SYS_GPE_MFP3_PE13MFP_Pos)   /*!< GPE_MFP3 PE13 setting for UART4_nRTS        */
#define SYS_GPE_MFP3_PE13MFP_UART1_TXD        (0x8UL<<SYS_GPE_MFP3_PE13MFP_Pos)   /*!< GPE_MFP3 PE13 setting for UART1_TXD         */
#define SYS_GPE_MFP3_PE13MFP_BPWM1_CH5        (0xCUL<<SYS_GPE_MFP3_PE13MFP_Pos)   /*!< GPE_MFP3 PE13 setting for BPWM1_CH5         */

/* PE.14 MFP */
#define SYS_GPE_MFP3_PE14MFP_GPIO             (0x0UL<<SYS_GPE_MFP3_PE14MFP_Pos)   /*!< GPE_MFP3 PE14 setting for GPIO              */
#define SYS_GPE_MFP3_PE14MFP_EBI_AD8          (0x2UL<<SYS_GPE_MFP3_PE14MFP_Pos)   /*!< GPE_MFP3 PE14 setting for EBI_AD8           */
#define SYS_GPE_MFP3_PE14MFP_UART2_TXD        (0x3UL<<SYS_GPE_MFP3_PE14MFP_Pos)   /*!< GPE_MFP3 PE14 setting for UART2_TXD         */
#define SYS_GPE_MFP3_PE14MFP_CANFD0_TXD       (0x4UL<<SYS_GPE_MFP3_PE14MFP_Pos)   /*!< GPE_MFP3 PE14 setting for CANFD0_TXD        */
#define SYS_GPE_MFP3_PE14MFP_UART6_TXD        (0x6UL<<SYS_GPE_MFP3_PE14MFP_Pos)   /*!< GPE_MFP3 PE14 setting for UART6_TXD         */

/* PE.15 MFP */
#define SYS_GPE_MFP3_PE15MFP_GPIO             (0x0UL<<SYS_GPE_MFP3_PE15MFP_Pos)   /*!< GPE_MFP3 PE15 setting for GPIO              */
#define SYS_GPE_MFP3_PE15MFP_EBI_AD9          (0x2UL<<SYS_GPE_MFP3_PE15MFP_Pos)   /*!< GPE_MFP3 PE15 setting for EBI_AD9           */
#define SYS_GPE_MFP3_PE15MFP_UART2_RXD        (0x3UL<<SYS_GPE_MFP3_PE15MFP_Pos)   /*!< GPE_MFP3 PE15 setting for UART2_RXD         */
#define SYS_GPE_MFP3_PE15MFP_CANFD0_RXD       (0x4UL<<SYS_GPE_MFP3_PE15MFP_Pos)   /*!< GPE_MFP3 PE15 setting for CANFD0_RXD        */
#define SYS_GPE_MFP3_PE15MFP_UART6_RXD        (0x6UL<<SYS_GPE_MFP3_PE15MFP_Pos)   /*!< GPE_MFP3 PE15 setting for UART6_RXD         */

/* PF.0 MFP */
#define SYS_GPF_MFP0_PF0MFP_GPIO              (0x0UL<<SYS_GPF_MFP0_PF0MFP_Pos)    /*!< GPF_MFP0 PF0 setting for GPIO               */
#define SYS_GPF_MFP0_PF0MFP_UART1_TXD         (0x2UL<<SYS_GPF_MFP0_PF0MFP_Pos)    /*!< GPF_MFP0 PF0 setting for UART1_TXD          */
#define SYS_GPF_MFP0_PF0MFP_I2C1_SCL          (0x3UL<<SYS_GPF_MFP0_PF0MFP_Pos)    /*!< GPF_MFP0 PF0 setting for I2C1_SCL           */
#define SYS_GPF_MFP0_PF0MFP_UART0_TXD         (0x4UL<<SYS_GPF_MFP0_PF0MFP_Pos)    /*!< GPF_MFP0 PF0 setting for UART0_TXD          */
#define SYS_GPF_MFP0_PF0MFP_USCI0_CTL1        (0x7UL<<SYS_GPF_MFP0_PF0MFP_Pos)    /*!< GPF_MFP0 PF0 setting for USCI0_CTL1         */
#define SYS_GPF_MFP0_PF0MFP_UART2_TXD         (0x8UL<<SYS_GPF_MFP0_PF0MFP_Pos)    /*!< GPF_MFP0 PF0 setting for UART2_TXD          */
#define SYS_GPF_MFP0_PF0MFP_I2C0_SCL          (0x9UL<<SYS_GPF_MFP0_PF0MFP_Pos)    /*!< GPF_MFP0 PF0 setting for I2C0_SCL           */
#define SYS_GPF_MFP0_PF0MFP_ACMP0_O           (0xAUL<<SYS_GPF_MFP0_PF0MFP_Pos)    /*!< GPF_MFP0 PF0 setting for ACMP0_O            */
#define SYS_GPF_MFP0_PF0MFP_PWM1_CH4          (0xBUL<<SYS_GPF_MFP0_PF0MFP_Pos)    /*!< GPF_MFP0 PF0 setting for PWM1_CH4           */
#define SYS_GPF_MFP0_PF0MFP_BPWM1_CH0         (0xCUL<<SYS_GPF_MFP0_PF0MFP_Pos)    /*!< GPF_MFP0 PF0 setting for BPWM1_CH0          */
#define SYS_GPF_MFP0_PF0MFP_I3C0_SCL          (0xDUL<<SYS_GPF_MFP0_PF0MFP_Pos)    /*!< GPF_MFP0 PF0 setting for I3C0_SCL           */
#define SYS_GPF_MFP0_PF0MFP_ICE_DAT           (0xEUL<<SYS_GPF_MFP0_PF0MFP_Pos)    /*!< GPF_MFP0 PF0 setting for ICE_DAT            */
#define SYS_GPF_MFP0_PF0MFP_EADC0_ST          (0xFUL<<SYS_GPF_MFP0_PF0MFP_Pos)    /*!< GPF_MFP0 PF0 setting for EADC0_ST           */

/* PF.1 MFP */
#define SYS_GPF_MFP0_PF1MFP_GPIO              (0x0UL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for GPIO               */
#define SYS_GPF_MFP0_PF1MFP_UART1_RXD         (0x2UL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for UART1_RXD          */
#define SYS_GPF_MFP0_PF1MFP_I2C1_SDA          (0x3UL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for I2C1_SDA           */
#define SYS_GPF_MFP0_PF1MFP_UART0_RXD         (0x4UL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for UART0_RXD          */
#define SYS_GPF_MFP0_PF1MFP_CANFD0_TXL        (0x6UL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for CANFD0_TXL         */
#define SYS_GPF_MFP0_PF1MFP_USCI0_DAT1        (0x7UL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for USCI0_DAT1         */
#define SYS_GPF_MFP0_PF1MFP_UART2_RXD         (0x8UL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for UART2_RXD          */
#define SYS_GPF_MFP0_PF1MFP_I2C0_SDA          (0x9UL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for I2C0_SDA           */
#define SYS_GPF_MFP0_PF1MFP_ACMP1_O           (0xAUL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for ACMP1_O            */
#define SYS_GPF_MFP0_PF1MFP_PWM1_CH5          (0xBUL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for PWM1_CH5           */
#define SYS_GPF_MFP0_PF1MFP_BPWM1_CH1         (0xCUL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for BPWM1_CH1          */
#define SYS_GPF_MFP0_PF1MFP_I3C0_SDA          (0xDUL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for I3C0_SDA           */
#define SYS_GPF_MFP0_PF1MFP_ICE_CLK           (0xEUL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for ICE_CLK            */
#define SYS_GPF_MFP0_PF1MFP_EADC1_ST          (0xFUL<<SYS_GPF_MFP0_PF1MFP_Pos)    /*!< GPF_MFP0 PF1 setting for EADC1_ST           */

/* PF.2 MFP */
#define SYS_GPF_MFP0_PF2MFP_GPIO              (0x0UL<<SYS_GPF_MFP0_PF2MFP_Pos)    /*!< GPF_MFP0 PF2 setting for GPIO               */
#define SYS_GPF_MFP0_PF2MFP_EBI_nCS1          (0x2UL<<SYS_GPF_MFP0_PF2MFP_Pos)    /*!< GPF_MFP0 PF2 setting for EBI_nCS1           */
#define SYS_GPF_MFP0_PF2MFP_UART0_RXD         (0x3UL<<SYS_GPF_MFP0_PF2MFP_Pos)    /*!< GPF_MFP0 PF2 setting for UART0_RXD          */
#define SYS_GPF_MFP0_PF2MFP_I2C0_SDA          (0x4UL<<SYS_GPF_MFP0_PF2MFP_Pos)    /*!< GPF_MFP0 PF2 setting for I2C0_SDA           */
#define SYS_GPF_MFP0_PF2MFP_QSPI0_CLK         (0x5UL<<SYS_GPF_MFP0_PF2MFP_Pos)    /*!< GPF_MFP0 PF2 setting for QSPI0_CLK          */
#define SYS_GPF_MFP0_PF2MFP_UART9_RXD         (0x7UL<<SYS_GPF_MFP0_PF2MFP_Pos)    /*!< GPF_MFP0 PF2 setting for UART9_RXD          */
#define SYS_GPF_MFP0_PF2MFP_PWM1_CH1          (0x9UL<<SYS_GPF_MFP0_PF2MFP_Pos)    /*!< GPF_MFP0 PF2 setting for PWM1_CH1           */
#define SYS_GPF_MFP0_PF2MFP_XT1_OUT           (0xAUL<<SYS_GPF_MFP0_PF2MFP_Pos)    /*!< GPF_MFP0 PF2 setting for XT1_OUT            */
#define SYS_GPF_MFP0_PF2MFP_BPWM1_CH1         (0xBUL<<SYS_GPF_MFP0_PF2MFP_Pos)    /*!< GPF_MFP0 PF2 setting for BPWM1_CH1          */
#define SYS_GPF_MFP0_PF2MFP_TM1_EXT           (0xFUL<<SYS_GPF_MFP0_PF2MFP_Pos)    /*!< GPF_MFP0 PF2 setting for TM1_EXT            */

/* PF.3 MFP */
#define SYS_GPF_MFP0_PF3MFP_GPIO              (0x0UL<<SYS_GPF_MFP0_PF3MFP_Pos)    /*!< GPF_MFP0 PF3 setting for GPIO               */
#define SYS_GPF_MFP0_PF3MFP_EBI_nCS0          (0x2UL<<SYS_GPF_MFP0_PF3MFP_Pos)    /*!< GPF_MFP0 PF3 setting for EBI_nCS0           */
#define SYS_GPF_MFP0_PF3MFP_UART0_TXD         (0x3UL<<SYS_GPF_MFP0_PF3MFP_Pos)    /*!< GPF_MFP0 PF3 setting for UART0_TXD          */
#define SYS_GPF_MFP0_PF3MFP_I2C0_SCL          (0x4UL<<SYS_GPF_MFP0_PF3MFP_Pos)    /*!< GPF_MFP0 PF3 setting for I2C0_SCL           */
#define SYS_GPF_MFP0_PF3MFP_UART9_TXD         (0x7UL<<SYS_GPF_MFP0_PF3MFP_Pos)    /*!< GPF_MFP0 PF3 setting for UART9_TXD          */
#define SYS_GPF_MFP0_PF3MFP_UART9_RXD         (0x8UL<<SYS_GPF_MFP0_PF3MFP_Pos)    /*!< GPF_MFP0 PF3 setting for UART9_RXD          */
#define SYS_GPF_MFP0_PF3MFP_PWM1_CH0          (0x9UL<<SYS_GPF_MFP0_PF3MFP_Pos)    /*!< GPF_MFP0 PF3 setting for PWM1_CH0           */
#define SYS_GPF_MFP0_PF3MFP_XT1_IN            (0xAUL<<SYS_GPF_MFP0_PF3MFP_Pos)    /*!< GPF_MFP0 PF3 setting for XT1_IN             */
#define SYS_GPF_MFP0_PF3MFP_BPWM1_CH0         (0xBUL<<SYS_GPF_MFP0_PF3MFP_Pos)    /*!< GPF_MFP0 PF3 setting for BPWM1_CH0          */
#define SYS_GPF_MFP0_PF3MFP_TM0_EXT           (0xFUL<<SYS_GPF_MFP0_PF3MFP_Pos)    /*!< GPF_MFP0 PF3 setting for TM0_EXT            */

/* PF.4 MFP */
#define SYS_GPF_MFP1_PF4MFP_GPIO              (0x0UL<<SYS_GPF_MFP1_PF4MFP_Pos)    /*!< GPF_MFP1 PF4 setting for GPIO               */
#define SYS_GPF_MFP1_PF4MFP_UART2_TXD         (0x2UL<<SYS_GPF_MFP1_PF4MFP_Pos)    /*!< GPF_MFP1 PF4 setting for UART2_TXD          */
#define SYS_GPF_MFP1_PF4MFP_UART2_nRTS        (0x4UL<<SYS_GPF_MFP1_PF4MFP_Pos)    /*!< GPF_MFP1 PF4 setting for UART2_nRTS         */
#define SYS_GPF_MFP1_PF4MFP_UART0_nRTS        (0x5UL<<SYS_GPF_MFP1_PF4MFP_Pos)    /*!< GPF_MFP1 PF4 setting for UART0_nRTS         */
#define SYS_GPF_MFP1_PF4MFP_UART3_RXD         (0x6UL<<SYS_GPF_MFP1_PF4MFP_Pos)    /*!< GPF_MFP1 PF4 setting for UART3_RXD          */
#define SYS_GPF_MFP1_PF4MFP_PWM0_CH1          (0x7UL<<SYS_GPF_MFP1_PF4MFP_Pos)    /*!< GPF_MFP1 PF4 setting for PWM0_CH1           */
#define SYS_GPF_MFP1_PF4MFP_UART9_TXD         (0x8UL<<SYS_GPF_MFP1_PF4MFP_Pos)    /*!< GPF_MFP1 PF4 setting for UART9_TXD          */
#define SYS_GPF_MFP1_PF4MFP_X32_OUT           (0xAUL<<SYS_GPF_MFP1_PF4MFP_Pos)    /*!< GPF_MFP1 PF4 setting for X32_OUT            */
#define SYS_GPF_MFP1_PF4MFP_EADC1_ST          (0xEUL<<SYS_GPF_MFP1_PF4MFP_Pos)    /*!< GPF_MFP1 PF4 setting for EADC1_ST           */

/* PF.5 MFP */
#define SYS_GPF_MFP1_PF5MFP_GPIO              (0x0UL<<SYS_GPF_MFP1_PF5MFP_Pos)    /*!< GPF_MFP1 PF5 setting for GPIO               */
#define SYS_GPF_MFP1_PF5MFP_UART2_RXD         (0x2UL<<SYS_GPF_MFP1_PF5MFP_Pos)    /*!< GPF_MFP1 PF5 setting for UART2_RXD          */
#define SYS_GPF_MFP1_PF5MFP_UART2_nCTS        (0x4UL<<SYS_GPF_MFP1_PF5MFP_Pos)    /*!< GPF_MFP1 PF5 setting for UART2_nCTS         */
#define SYS_GPF_MFP1_PF5MFP_UART0_nCTS        (0x5UL<<SYS_GPF_MFP1_PF5MFP_Pos)    /*!< GPF_MFP1 PF5 setting for UART0_nCTS         */
#define SYS_GPF_MFP1_PF5MFP_UART3_TXD         (0x6UL<<SYS_GPF_MFP1_PF5MFP_Pos)    /*!< GPF_MFP1 PF5 setting for UART3_TXD          */
#define SYS_GPF_MFP1_PF5MFP_PWM0_CH0          (0x7UL<<SYS_GPF_MFP1_PF5MFP_Pos)    /*!< GPF_MFP1 PF5 setting for PWM0_CH0           */
#define SYS_GPF_MFP1_PF5MFP_BPWM0_CH4         (0x8UL<<SYS_GPF_MFP1_PF5MFP_Pos)    /*!< GPF_MFP1 PF5 setting for BPWM0_CH4          */
#define SYS_GPF_MFP1_PF5MFP_X32_IN            (0xAUL<<SYS_GPF_MFP1_PF5MFP_Pos)    /*!< GPF_MFP1 PF5 setting for X32_IN             */
#define SYS_GPF_MFP1_PF5MFP_EADC0_ST          (0xEUL<<SYS_GPF_MFP1_PF5MFP_Pos)    /*!< GPF_MFP1 PF5 setting for EADC0_ST           */

/* PF.6 MFP */
#define SYS_GPF_MFP1_PF6MFP_GPIO              (0x0UL<<SYS_GPF_MFP1_PF6MFP_Pos)    /*!< GPF_MFP1 PF6 setting for GPIO               */
#define SYS_GPF_MFP1_PF6MFP_EBI_ADR19         (0x2UL<<SYS_GPF_MFP1_PF6MFP_Pos)    /*!< GPF_MFP1 PF6 setting for EBI_ADR19          */
#define SYS_GPF_MFP1_PF6MFP_SPI0_MOSI         (0x5UL<<SYS_GPF_MFP1_PF6MFP_Pos)    /*!< GPF_MFP1 PF6 setting for SPI0_MOSI          */
#define SYS_GPF_MFP1_PF6MFP_UART4_RXD         (0x6UL<<SYS_GPF_MFP1_PF6MFP_Pos)    /*!< GPF_MFP1 PF6 setting for UART4_RXD          */
#define SYS_GPF_MFP1_PF6MFP_TRACE_SWO         (0xFUL<<SYS_GPF_MFP1_PF6MFP_Pos)    /*!< GPF_MFP1 PF6 setting for TRACE_SWO          */

/* PF.7 MFP */
#define SYS_GPF_MFP1_PF7MFP_GPIO              (0x0UL<<SYS_GPF_MFP1_PF7MFP_Pos)    /*!< GPF_MFP1 PF7 setting for GPIO               */
#define SYS_GPF_MFP1_PF7MFP_EBI_ADR18         (0x2UL<<SYS_GPF_MFP1_PF7MFP_Pos)    /*!< GPF_MFP1 PF7 setting for EBI_ADR18          */
#define SYS_GPF_MFP1_PF7MFP_SPI0_MISO         (0x5UL<<SYS_GPF_MFP1_PF7MFP_Pos)    /*!< GPF_MFP1 PF7 setting for SPI0_MISO          */
#define SYS_GPF_MFP1_PF7MFP_UART4_TXD         (0x6UL<<SYS_GPF_MFP1_PF7MFP_Pos)    /*!< GPF_MFP1 PF7 setting for UART4_TXD          */

/* PF.8 MFP */
#define SYS_GPF_MFP2_PF8MFP_GPIO              (0x0UL<<SYS_GPF_MFP2_PF8MFP_Pos)    /*!< GPF_MFP2 PF8 setting for GPIO               */
#define SYS_GPF_MFP2_PF8MFP_EBI_ADR17         (0x2UL<<SYS_GPF_MFP2_PF8MFP_Pos)    /*!< GPF_MFP2 PF8 setting for EBI_ADR17          */
#define SYS_GPF_MFP2_PF8MFP_SPI0_CLK          (0x5UL<<SYS_GPF_MFP2_PF8MFP_Pos)    /*!< GPF_MFP2 PF8 setting for SPI0_CLK           */
#define SYS_GPF_MFP2_PF8MFP_UART5_nCTS        (0x6UL<<SYS_GPF_MFP2_PF8MFP_Pos)    /*!< GPF_MFP2 PF8 setting for UART5_nCTS         */
#define SYS_GPF_MFP2_PF8MFP_CANFD1_RXD        (0x8UL<<SYS_GPF_MFP2_PF8MFP_Pos)    /*!< GPF_MFP2 PF8 setting for CANFD1_RXD         */

/* PF.9 MFP */
#define SYS_GPF_MFP2_PF9MFP_GPIO              (0x0UL<<SYS_GPF_MFP2_PF9MFP_Pos)    /*!< GPF_MFP2 PF9 setting for GPIO               */
#define SYS_GPF_MFP2_PF9MFP_EBI_ADR16         (0x2UL<<SYS_GPF_MFP2_PF9MFP_Pos)    /*!< GPF_MFP2 PF9 setting for EBI_ADR16          */
#define SYS_GPF_MFP2_PF9MFP_SPI0_SS           (0x5UL<<SYS_GPF_MFP2_PF9MFP_Pos)    /*!< GPF_MFP2 PF9 setting for SPI0_SS            */
#define SYS_GPF_MFP2_PF9MFP_UART5_nRTS        (0x6UL<<SYS_GPF_MFP2_PF9MFP_Pos)    /*!< GPF_MFP2 PF9 setting for UART5_nRTS         */
#define SYS_GPF_MFP2_PF9MFP_CANFD1_TXD        (0x8UL<<SYS_GPF_MFP2_PF9MFP_Pos)    /*!< GPF_MFP2 PF9 setting for CANFD1_TXD         */
#define SYS_GPF_MFP2_PF9MFP_CANFD1_TXH        (0x9UL<<SYS_GPF_MFP2_PF9MFP_Pos)    /*!< GPF_MFP2 PF9 setting for CANFD1_TXH         */

/* PF.10 MFP */
#define SYS_GPF_MFP2_PF10MFP_GPIO             (0x0UL<<SYS_GPF_MFP2_PF10MFP_Pos)   /*!< GPF_MFP2 PF10 setting for GPIO              */
#define SYS_GPF_MFP2_PF10MFP_EBI_ADR15        (0x2UL<<SYS_GPF_MFP2_PF10MFP_Pos)   /*!< GPF_MFP2 PF10 setting for EBI_ADR15         */
#define SYS_GPF_MFP2_PF10MFP_SPI0_I2SMCLK     (0x5UL<<SYS_GPF_MFP2_PF10MFP_Pos)   /*!< GPF_MFP2 PF10 setting for SPI0_I2SMCLK      */
#define SYS_GPF_MFP2_PF10MFP_UART5_RXD        (0x6UL<<SYS_GPF_MFP2_PF10MFP_Pos)   /*!< GPF_MFP2 PF10 setting for UART5_RXD         */
#define SYS_GPF_MFP2_PF10MFP_CANFD1_TXL       (0x9UL<<SYS_GPF_MFP2_PF10MFP_Pos)   /*!< GPF_MFP2 PF10 setting for CANFD1_TXL        */

/* PF.11 MFP */
#define SYS_GPF_MFP2_PF11MFP_GPIO             (0x0UL<<SYS_GPF_MFP2_PF11MFP_Pos)   /*!< GPF_MFP2 PF11 setting for GPIO              */
#define SYS_GPF_MFP2_PF11MFP_EBI_ADR14        (0x2UL<<SYS_GPF_MFP2_PF11MFP_Pos)   /*!< GPF_MFP2 PF11 setting for EBI_ADR14         */
#define SYS_GPF_MFP2_PF11MFP_UART5_TXD        (0x6UL<<SYS_GPF_MFP2_PF11MFP_Pos)   /*!< GPF_MFP2 PF11 setting for UART5_TXD         */
#define SYS_GPF_MFP2_PF11MFP_TM3              (0xDUL<<SYS_GPF_MFP2_PF11MFP_Pos)   /*!< GPF_MFP2 PF11 setting for TM3               */

/* PF.14 MFP */
#define SYS_GPF_MFP3_PF14MFP_GPIO             (0x0UL<<SYS_GPF_MFP3_PF14MFP_Pos)   /*!< GPF_MFP3 PF14 setting for GPIO              */
#define SYS_GPF_MFP3_PF14MFP_LLSI3_OUT        (0x2UL<<SYS_GPF_MFP3_PF14MFP_Pos)   /*!< GPF_MFP3 PF14 setting for LLSI3_OUT         */

/* PG.2 MFP */
#define SYS_GPG_MFP0_PG2MFP_GPIO              (0x0UL<<SYS_GPG_MFP0_PG2MFP_Pos)    /*!< GPG_MFP0 PG2 setting for GPIO               */
#define SYS_GPG_MFP0_PG2MFP_EBI_ADR11         (0x2UL<<SYS_GPG_MFP0_PG2MFP_Pos)    /*!< GPG_MFP0 PG2 setting for EBI_ADR11          */
#define SYS_GPG_MFP0_PG2MFP_I2C0_SMBAL        (0x4UL<<SYS_GPG_MFP0_PG2MFP_Pos)    /*!< GPG_MFP0 PG2 setting for I2C0_SMBAL         */
#define SYS_GPG_MFP0_PG2MFP_I2C1_SCL          (0x5UL<<SYS_GPG_MFP0_PG2MFP_Pos)    /*!< GPG_MFP0 PG2 setting for I2C1_SCL           */
#define SYS_GPG_MFP0_PG2MFP_CANFD0_TXL        (0x8UL<<SYS_GPG_MFP0_PG2MFP_Pos)    /*!< GPG_MFP0 PG2 setting for CANFD0_TXL         */
#define SYS_GPG_MFP0_PG2MFP_TM0               (0xDUL<<SYS_GPG_MFP0_PG2MFP_Pos)    /*!< GPG_MFP0 PG2 setting for TM0                */

/* PG.3 MFP */
#define SYS_GPG_MFP0_PG3MFP_GPIO              (0x0UL<<SYS_GPG_MFP0_PG3MFP_Pos)    /*!< GPG_MFP0 PG3 setting for GPIO               */
#define SYS_GPG_MFP0_PG3MFP_EBI_ADR12         (0x2UL<<SYS_GPG_MFP0_PG3MFP_Pos)    /*!< GPG_MFP0 PG3 setting for EBI_ADR12          */
#define SYS_GPG_MFP0_PG3MFP_I2C0_SMBSUS       (0x4UL<<SYS_GPG_MFP0_PG3MFP_Pos)    /*!< GPG_MFP0 PG3 setting for I2C0_SMBSUS        */
#define SYS_GPG_MFP0_PG3MFP_I2C1_SDA          (0x5UL<<SYS_GPG_MFP0_PG3MFP_Pos)    /*!< GPG_MFP0 PG3 setting for I2C1_SDA           */
#define SYS_GPG_MFP0_PG3MFP_TM1               (0xDUL<<SYS_GPG_MFP0_PG3MFP_Pos)    /*!< GPG_MFP0 PG3 setting for TM1                */

/* PG.4 MFP */
#define SYS_GPG_MFP1_PG4MFP_GPIO              (0x0UL<<SYS_GPG_MFP1_PG4MFP_Pos)    /*!< GPG_MFP1 PG4 setting for GPIO               */
#define SYS_GPG_MFP1_PG4MFP_EBI_ADR13         (0x2UL<<SYS_GPG_MFP1_PG4MFP_Pos)    /*!< GPG_MFP1 PG4 setting for EBI_ADR13          */
#define SYS_GPG_MFP1_PG4MFP_TM2               (0xDUL<<SYS_GPG_MFP1_PG4MFP_Pos)    /*!< GPG_MFP1 PG4 setting for TM2                */

/* PG.9 MFP */
#define SYS_GPG_MFP2_PG9MFP_GPIO              (0x0UL<<SYS_GPG_MFP2_PG9MFP_Pos)    /*!< GPG_MFP2 PG9 setting for GPIO               */
#define SYS_GPG_MFP2_PG9MFP_EBI_AD0           (0x2UL<<SYS_GPG_MFP2_PG9MFP_Pos)    /*!< GPG_MFP2 PG9 setting for EBI_AD0            */
#define SYS_GPG_MFP2_PG9MFP_BPWM0_CH5         (0xCUL<<SYS_GPG_MFP2_PG9MFP_Pos)    /*!< GPG_MFP2 PG9 setting for BPWM0_CH5          */

/* PG.10 MFP */
#define SYS_GPG_MFP2_PG10MFP_GPIO             (0x0UL<<SYS_GPG_MFP2_PG10MFP_Pos)   /*!< GPG_MFP2 PG10 setting for GPIO              */
#define SYS_GPG_MFP2_PG10MFP_EBI_AD1          (0x2UL<<SYS_GPG_MFP2_PG10MFP_Pos)   /*!< GPG_MFP2 PG10 setting for EBI_AD1           */
#define SYS_GPG_MFP2_PG10MFP_BPWM0_CH4        (0xCUL<<SYS_GPG_MFP2_PG10MFP_Pos)   /*!< GPG_MFP2 PG10 setting for BPWM0_CH4         */

/* PG.11 MFP */
#define SYS_GPG_MFP2_PG11MFP_GPIO             (0x0UL<<SYS_GPG_MFP2_PG11MFP_Pos)   /*!< GPG_MFP2 PG11 setting for GPIO              */
#define SYS_GPG_MFP2_PG11MFP_EBI_AD2          (0x2UL<<SYS_GPG_MFP2_PG11MFP_Pos)   /*!< GPG_MFP2 PG11 setting for EBI_AD2           */
#define SYS_GPG_MFP2_PG11MFP_UART7_TXD        (0x6UL<<SYS_GPG_MFP2_PG11MFP_Pos)   /*!< GPG_MFP2 PG11 setting for UART7_TXD         */
#define SYS_GPG_MFP2_PG11MFP_BPWM0_CH3        (0xCUL<<SYS_GPG_MFP2_PG11MFP_Pos)   /*!< GPG_MFP2 PG11 setting for BPWM0_CH3         */

/* PG.12 MFP */
#define SYS_GPG_MFP3_PG12MFP_GPIO             (0x0UL<<SYS_GPG_MFP3_PG12MFP_Pos)   /*!< GPG_MFP3 PG12 setting for GPIO              */
#define SYS_GPG_MFP3_PG12MFP_EBI_AD3          (0x2UL<<SYS_GPG_MFP3_PG12MFP_Pos)   /*!< GPG_MFP3 PG12 setting for EBI_AD3           */
#define SYS_GPG_MFP3_PG12MFP_UART7_RXD        (0x6UL<<SYS_GPG_MFP3_PG12MFP_Pos)   /*!< GPG_MFP3 PG12 setting for UART7_RXD         */
#define SYS_GPG_MFP3_PG12MFP_BPWM0_CH2        (0xCUL<<SYS_GPG_MFP3_PG12MFP_Pos)   /*!< GPG_MFP3 PG12 setting for BPWM0_CH2         */

/* PG.13 MFP */
#define SYS_GPG_MFP3_PG13MFP_GPIO             (0x0UL<<SYS_GPG_MFP3_PG13MFP_Pos)   /*!< GPG_MFP3 PG13 setting for GPIO              */
#define SYS_GPG_MFP3_PG13MFP_EBI_AD4          (0x2UL<<SYS_GPG_MFP3_PG13MFP_Pos)   /*!< GPG_MFP3 PG13 setting for EBI_AD4           */
#define SYS_GPG_MFP3_PG13MFP_UART6_TXD        (0x6UL<<SYS_GPG_MFP3_PG13MFP_Pos)   /*!< GPG_MFP3 PG13 setting for UART6_TXD         */
#define SYS_GPG_MFP3_PG13MFP_BPWM0_CH1        (0xCUL<<SYS_GPG_MFP3_PG13MFP_Pos)   /*!< GPG_MFP3 PG13 setting for BPWM0_CH1         */

/* PG.14 MFP */
#define SYS_GPG_MFP3_PG14MFP_GPIO             (0x0UL<<SYS_GPG_MFP3_PG14MFP_Pos)   /*!< GPG_MFP3 PG14 setting for GPIO              */
#define SYS_GPG_MFP3_PG14MFP_EBI_AD5          (0x2UL<<SYS_GPG_MFP3_PG14MFP_Pos)   /*!< GPG_MFP3 PG14 setting for EBI_AD5           */
#define SYS_GPG_MFP3_PG14MFP_UART6_RXD        (0x6UL<<SYS_GPG_MFP3_PG14MFP_Pos)   /*!< GPG_MFP3 PG14 setting for UART6_RXD         */
#define SYS_GPG_MFP3_PG14MFP_BPWM0_CH0        (0xCUL<<SYS_GPG_MFP3_PG14MFP_Pos)   /*!< GPG_MFP3 PG14 setting for BPWM0_CH0         */

/* PG.15 MFP */
#define SYS_GPG_MFP3_PG15MFP_GPIO             (0x0UL<<SYS_GPG_MFP3_PG15MFP_Pos)   /*!< GPG_MFP3 PG15 setting for GPIO              */
#define SYS_GPG_MFP3_PG15MFP_CLKO             (0xDUL<<SYS_GPG_MFP3_PG15MFP_Pos)   /*!< GPG_MFP3 PG15 setting for CLKO              */
#define SYS_GPG_MFP3_PG15MFP_EADC0_ST         (0xEUL<<SYS_GPG_MFP3_PG15MFP_Pos)   /*!< GPG_MFP3 PG15 setting for EADC0_ST          */

/* PH.4 MFP */
#define SYS_GPH_MFP1_PH4MFP_GPIO              (0x0UL<<SYS_GPH_MFP1_PH4MFP_Pos)    /*!< GPH_MFP1 PH4 setting for GPIO               */
#define SYS_GPH_MFP1_PH4MFP_EBI_ADR3          (0x2UL<<SYS_GPH_MFP1_PH4MFP_Pos)    /*!< GPH_MFP1 PH4 setting for EBI_ADR3           */
#define SYS_GPH_MFP1_PH4MFP_SPI1_MISO         (0x3UL<<SYS_GPH_MFP1_PH4MFP_Pos)    /*!< GPH_MFP1 PH4 setting for SPI1_MISO          */
#define SYS_GPH_MFP1_PH4MFP_UART7_nRTS        (0x4UL<<SYS_GPH_MFP1_PH4MFP_Pos)    /*!< GPH_MFP1 PH4 setting for UART7_nRTS         */
#define SYS_GPH_MFP1_PH4MFP_UART6_TXD         (0x5UL<<SYS_GPH_MFP1_PH4MFP_Pos)    /*!< GPH_MFP1 PH4 setting for UART6_TXD          */

/* PH.5 MFP */
#define SYS_GPH_MFP1_PH5MFP_GPIO              (0x0UL<<SYS_GPH_MFP1_PH5MFP_Pos)    /*!< GPH_MFP1 PH5 setting for GPIO               */
#define SYS_GPH_MFP1_PH5MFP_EBI_ADR2          (0x2UL<<SYS_GPH_MFP1_PH5MFP_Pos)    /*!< GPH_MFP1 PH5 setting for EBI_ADR2           */
#define SYS_GPH_MFP1_PH5MFP_SPI1_MOSI         (0x3UL<<SYS_GPH_MFP1_PH5MFP_Pos)    /*!< GPH_MFP1 PH5 setting for SPI1_MOSI          */
#define SYS_GPH_MFP1_PH5MFP_UART7_nCTS        (0x4UL<<SYS_GPH_MFP1_PH5MFP_Pos)    /*!< GPH_MFP1 PH5 setting for UART7_nCTS         */
#define SYS_GPH_MFP1_PH5MFP_UART6_RXD         (0x5UL<<SYS_GPH_MFP1_PH5MFP_Pos)    /*!< GPH_MFP1 PH5 setting for UART6_RXD          */

/* PH.6 MFP */
#define SYS_GPH_MFP1_PH6MFP_GPIO              (0x0UL<<SYS_GPH_MFP1_PH6MFP_Pos)    /*!< GPH_MFP1 PH6 setting for GPIO               */
#define SYS_GPH_MFP1_PH6MFP_EBI_ADR1          (0x2UL<<SYS_GPH_MFP1_PH6MFP_Pos)    /*!< GPH_MFP1 PH6 setting for EBI_ADR1           */
#define SYS_GPH_MFP1_PH6MFP_SPI1_CLK          (0x3UL<<SYS_GPH_MFP1_PH6MFP_Pos)    /*!< GPH_MFP1 PH6 setting for SPI1_CLK           */
#define SYS_GPH_MFP1_PH6MFP_UART7_TXD         (0x4UL<<SYS_GPH_MFP1_PH6MFP_Pos)    /*!< GPH_MFP1 PH6 setting for UART7_TXD          */

/* PH.7 MFP */
#define SYS_GPH_MFP1_PH7MFP_GPIO              (0x0UL<<SYS_GPH_MFP1_PH7MFP_Pos)    /*!< GPH_MFP1 PH7 setting for GPIO               */
#define SYS_GPH_MFP1_PH7MFP_EBI_ADR0          (0x2UL<<SYS_GPH_MFP1_PH7MFP_Pos)    /*!< GPH_MFP1 PH7 setting for EBI_ADR0           */
#define SYS_GPH_MFP1_PH7MFP_SPI1_SS           (0x3UL<<SYS_GPH_MFP1_PH7MFP_Pos)    /*!< GPH_MFP1 PH7 setting for SPI1_SS            */
#define SYS_GPH_MFP1_PH7MFP_UART7_RXD         (0x4UL<<SYS_GPH_MFP1_PH7MFP_Pos)    /*!< GPH_MFP1 PH7 setting for UART7_RXD          */

/* PH.8 MFP */
#define SYS_GPH_MFP2_PH8MFP_GPIO              (0x0UL<<SYS_GPH_MFP2_PH8MFP_Pos)    /*!< GPH_MFP2 PH8 setting for GPIO               */
#define SYS_GPH_MFP2_PH8MFP_EADC1_CH13        (0x1UL<<SYS_GPH_MFP2_PH8MFP_Pos)    /*!< GPH_MFP2 PH8 setting for EADC1_CH13         */
#define SYS_GPH_MFP2_PH8MFP_EBI_AD12          (0x2UL<<SYS_GPH_MFP2_PH8MFP_Pos)    /*!< GPH_MFP2 PH8 setting for EBI_AD12           */
#define SYS_GPH_MFP2_PH8MFP_QSPI0_CLK         (0x3UL<<SYS_GPH_MFP2_PH8MFP_Pos)    /*!< GPH_MFP2 PH8 setting for QSPI0_CLK          */
#define SYS_GPH_MFP2_PH8MFP_SPI1_CLK          (0x6UL<<SYS_GPH_MFP2_PH8MFP_Pos)    /*!< GPH_MFP2 PH8 setting for SPI1_CLK           */
#define SYS_GPH_MFP2_PH8MFP_UART3_nRTS        (0x7UL<<SYS_GPH_MFP2_PH8MFP_Pos)    /*!< GPH_MFP2 PH8 setting for UART3_nRTS         */
#define SYS_GPH_MFP2_PH8MFP_I2C1_SMBAL        (0x8UL<<SYS_GPH_MFP2_PH8MFP_Pos)    /*!< GPH_MFP2 PH8 setting for I2C1_SMBAL         */
#define SYS_GPH_MFP2_PH8MFP_I2C2_SCL          (0x9UL<<SYS_GPH_MFP2_PH8MFP_Pos)    /*!< GPH_MFP2 PH8 setting for I2C2_SCL           */
#define SYS_GPH_MFP2_PH8MFP_UART1_TXD         (0xAUL<<SYS_GPH_MFP2_PH8MFP_Pos)    /*!< GPH_MFP2 PH8 setting for UART1_TXD          */

/* PH.9 MFP */
#define SYS_GPH_MFP2_PH9MFP_GPIO              (0x0UL<<SYS_GPH_MFP2_PH9MFP_Pos)    /*!< GPH_MFP2 PH9 setting for GPIO               */
#define SYS_GPH_MFP2_PH9MFP_EADC1_CH12        (0x1UL<<SYS_GPH_MFP2_PH9MFP_Pos)    /*!< GPH_MFP2 PH9 setting for EADC1_CH12         */
#define SYS_GPH_MFP2_PH9MFP_EBI_AD13          (0x2UL<<SYS_GPH_MFP2_PH9MFP_Pos)    /*!< GPH_MFP2 PH9 setting for EBI_AD13           */
#define SYS_GPH_MFP2_PH9MFP_QSPI0_SS          (0x3UL<<SYS_GPH_MFP2_PH9MFP_Pos)    /*!< GPH_MFP2 PH9 setting for QSPI0_SS           */
#define SYS_GPH_MFP2_PH9MFP_SPI1_SS           (0x6UL<<SYS_GPH_MFP2_PH9MFP_Pos)    /*!< GPH_MFP2 PH9 setting for SPI1_SS            */
#define SYS_GPH_MFP2_PH9MFP_UART3_nCTS        (0x7UL<<SYS_GPH_MFP2_PH9MFP_Pos)    /*!< GPH_MFP2 PH9 setting for UART3_nCTS         */
#define SYS_GPH_MFP2_PH9MFP_I2C1_SMBSUS       (0x8UL<<SYS_GPH_MFP2_PH9MFP_Pos)    /*!< GPH_MFP2 PH9 setting for I2C1_SMBSUS        */
#define SYS_GPH_MFP2_PH9MFP_I2C2_SDA          (0x9UL<<SYS_GPH_MFP2_PH9MFP_Pos)    /*!< GPH_MFP2 PH9 setting for I2C2_SDA           */
#define SYS_GPH_MFP2_PH9MFP_UART1_RXD         (0xAUL<<SYS_GPH_MFP2_PH9MFP_Pos)    /*!< GPH_MFP2 PH9 setting for UART1_RXD          */

/* PH.10 MFP */
#define SYS_GPH_MFP2_PH10MFP_GPIO             (0x0UL<<SYS_GPH_MFP2_PH10MFP_Pos)   /*!< GPH_MFP2 PH10 setting for GPIO              */
#define SYS_GPH_MFP2_PH10MFP_EADC1_CH11       (0x1UL<<SYS_GPH_MFP2_PH10MFP_Pos)   /*!< GPH_MFP2 PH10 setting for EADC1_CH11        */
#define SYS_GPH_MFP2_PH10MFP_EBI_AD14         (0x2UL<<SYS_GPH_MFP2_PH10MFP_Pos)   /*!< GPH_MFP2 PH10 setting for EBI_AD14          */
#define SYS_GPH_MFP2_PH10MFP_QSPI0_MISO1      (0x3UL<<SYS_GPH_MFP2_PH10MFP_Pos)   /*!< GPH_MFP2 PH10 setting for QSPI0_MISO1       */
#define SYS_GPH_MFP2_PH10MFP_UART4_TXD        (0x7UL<<SYS_GPH_MFP2_PH10MFP_Pos)   /*!< GPH_MFP2 PH10 setting for UART4_TXD         */
#define SYS_GPH_MFP2_PH10MFP_UART0_TXD        (0x8UL<<SYS_GPH_MFP2_PH10MFP_Pos)   /*!< GPH_MFP2 PH10 setting for UART0_TXD         */

/* PH.11 MFP */
#define SYS_GPH_MFP2_PH11MFP_GPIO             (0x0UL<<SYS_GPH_MFP2_PH11MFP_Pos)   /*!< GPH_MFP2 PH11 setting for GPIO              */
#define SYS_GPH_MFP2_PH11MFP_EADC1_CH10       (0x1UL<<SYS_GPH_MFP2_PH11MFP_Pos)   /*!< GPH_MFP2 PH11 setting for EADC1_CH10        */
#define SYS_GPH_MFP2_PH11MFP_EBI_AD15         (0x2UL<<SYS_GPH_MFP2_PH11MFP_Pos)   /*!< GPH_MFP2 PH11 setting for EBI_AD15          */
#define SYS_GPH_MFP2_PH11MFP_QSPI0_MOSI1      (0x3UL<<SYS_GPH_MFP2_PH11MFP_Pos)   /*!< GPH_MFP2 PH11 setting for QSPI0_MOSI1       */
#define SYS_GPH_MFP2_PH11MFP_UART4_RXD        (0x7UL<<SYS_GPH_MFP2_PH11MFP_Pos)   /*!< GPH_MFP2 PH11 setting for UART4_RXD         */
#define SYS_GPH_MFP2_PH11MFP_UART0_RXD        (0x8UL<<SYS_GPH_MFP2_PH11MFP_Pos)   /*!< GPH_MFP2 PH11 setting for UART0_RXD         */


#define SET_ACMP0_N_PB3()           SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB3MFP_Msk)) | SYS_GPB_MFP0_PB3MFP_ACMP0_N)                       /*!< Set PB3 function to ACMP0_N             */
#define SET_ACMP0_O_PB7()           SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB7MFP_Msk)) | SYS_GPB_MFP1_PB7MFP_ACMP0_O)                       /*!< Set PB7 function to ACMP0_O             */
#define SET_ACMP0_O_PC1()           SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC1MFP_Msk)) | SYS_GPC_MFP0_PC1MFP_ACMP0_O)                       /*!< Set PC1 function to ACMP0_O             */
#define SET_ACMP0_O_PC12()          SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC12MFP_Msk)) | SYS_GPC_MFP3_PC12MFP_ACMP0_O)                     /*!< Set PC12 function to ACMP0_O            */
#define SET_ACMP0_O_PF0()           SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF0MFP_Msk)) | SYS_GPF_MFP0_PF0MFP_ACMP0_O)                       /*!< Set PF0 function to ACMP0_O             */
#define SET_ACMP0_P0_PA11()         SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA11MFP_Msk)) | SYS_GPA_MFP2_PA11MFP_ACMP0_P0)                    /*!< Set PA11 function to ACMP0_P0           */
#define SET_ACMP0_P1_PB2()          SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB2MFP_Msk)) | SYS_GPB_MFP0_PB2MFP_ACMP0_P1)                      /*!< Set PB2 function to ACMP0_P1            */
#define SET_ACMP0_P2_PB12()         SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB12MFP_Msk)) | SYS_GPB_MFP3_PB12MFP_ACMP0_P2)                    /*!< Set PB12 function to ACMP0_P2           */
#define SET_ACMP0_P3_PB13()         SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB13MFP_Msk)) | SYS_GPB_MFP3_PB13MFP_ACMP0_P3)                    /*!< Set PB13 function to ACMP0_P3           */
#define SET_ACMP0_WLAT_PA7()        SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA7MFP_Msk)) | SYS_GPA_MFP1_PA7MFP_ACMP0_WLAT)                    /*!< Set PA7 function to ACMP0_WLAT          */
#define SET_ACMP1_N_PB5()           SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB5MFP_Msk)) | SYS_GPB_MFP1_PB5MFP_ACMP1_N)                       /*!< Set PB5 function to ACMP1_N             */
#define SET_ACMP1_O_PB6()           SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB6MFP_Msk)) | SYS_GPB_MFP1_PB6MFP_ACMP1_O)                       /*!< Set PB6 function to ACMP1_O             */
#define SET_ACMP1_O_PC0()           SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC0MFP_Msk)) | SYS_GPC_MFP0_PC0MFP_ACMP1_O)                       /*!< Set PC0 function to ACMP1_O             */
#define SET_ACMP1_O_PC11()          SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC11MFP_Msk)) | SYS_GPC_MFP2_PC11MFP_ACMP1_O)                     /*!< Set PC11 function to ACMP1_O            */
#define SET_ACMP1_O_PF1()           SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF1MFP_Msk)) | SYS_GPF_MFP0_PF1MFP_ACMP1_O)                       /*!< Set PF1 function to ACMP1_O             */
#define SET_ACMP1_P0_PA10()         SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA10MFP_Msk)) | SYS_GPA_MFP2_PA10MFP_ACMP1_P0)                    /*!< Set PA10 function to ACMP1_P0           */
#define SET_ACMP1_P1_PB4()          SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB4MFP_Msk)) | SYS_GPB_MFP1_PB4MFP_ACMP1_P1)                      /*!< Set PB4 function to ACMP1_P1            */
#define SET_ACMP1_P2_PB12()         SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB12MFP_Msk)) | SYS_GPB_MFP3_PB12MFP_ACMP1_P2)                    /*!< Set PB12 function to ACMP1_P2           */
#define SET_ACMP1_P3_PB13()         SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB13MFP_Msk)) | SYS_GPB_MFP3_PB13MFP_ACMP1_P3)                    /*!< Set PB13 function to ACMP1_P3           */
#define SET_ACMP1_WLAT_PA6()        SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA6MFP_Msk)) | SYS_GPA_MFP1_PA6MFP_ACMP1_WLAT)                    /*!< Set PA6 function to ACMP1_WLAT          */
#define SET_BPWM0_CH0_PA0()         SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA0MFP_Msk)) | SYS_GPA_MFP0_PA0MFP_BPWM0_CH0)                     /*!< Set PA0 function to BPWM0_CH0           */
#define SET_BPWM0_CH0_PA11()        SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA11MFP_Msk)) | SYS_GPA_MFP2_PA11MFP_BPWM0_CH0)                   /*!< Set PA11 function to BPWM0_CH0          */
#define SET_BPWM0_CH0_PE2()         SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE2MFP_Msk)) | SYS_GPE_MFP0_PE2MFP_BPWM0_CH0)                     /*!< Set PE2 function to BPWM0_CH0           */
#define SET_BPWM0_CH0_PG14()        SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~SYS_GPG_MFP3_PG14MFP_Msk)) | SYS_GPG_MFP3_PG14MFP_BPWM0_CH0)                   /*!< Set PG14 function to BPWM0_CH0          */
#define SET_BPWM0_CH1_PA1()         SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA1MFP_Msk)) | SYS_GPA_MFP0_PA1MFP_BPWM0_CH1)                     /*!< Set PA1 function to BPWM0_CH1           */
#define SET_BPWM0_CH1_PA10()        SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA10MFP_Msk)) | SYS_GPA_MFP2_PA10MFP_BPWM0_CH1)                   /*!< Set PA10 function to BPWM0_CH1          */
#define SET_BPWM0_CH1_PE3()         SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE3MFP_Msk)) | SYS_GPE_MFP0_PE3MFP_BPWM0_CH1)                     /*!< Set PE3 function to BPWM0_CH1           */
#define SET_BPWM0_CH1_PG13()        SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~SYS_GPG_MFP3_PG13MFP_Msk)) | SYS_GPG_MFP3_PG13MFP_BPWM0_CH1)                   /*!< Set PG13 function to BPWM0_CH1          */
#define SET_BPWM0_CH2_PA2()         SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA2MFP_Msk)) | SYS_GPA_MFP0_PA2MFP_BPWM0_CH2)                     /*!< Set PA2 function to BPWM0_CH2           */
#define SET_BPWM0_CH2_PA9()         SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA9MFP_Msk)) | SYS_GPA_MFP2_PA9MFP_BPWM0_CH2)                     /*!< Set PA9 function to BPWM0_CH2           */
#define SET_BPWM0_CH2_PE4()         SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE4MFP_Msk)) | SYS_GPE_MFP1_PE4MFP_BPWM0_CH2)                     /*!< Set PE4 function to BPWM0_CH2           */
#define SET_BPWM0_CH2_PG12()        SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~SYS_GPG_MFP3_PG12MFP_Msk)) | SYS_GPG_MFP3_PG12MFP_BPWM0_CH2)                   /*!< Set PG12 function to BPWM0_CH2          */
#define SET_BPWM0_CH3_PA3()         SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA3MFP_Msk)) | SYS_GPA_MFP0_PA3MFP_BPWM0_CH3)                     /*!< Set PA3 function to BPWM0_CH3           */
#define SET_BPWM0_CH3_PA8()         SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA8MFP_Msk)) | SYS_GPA_MFP2_PA8MFP_BPWM0_CH3)                     /*!< Set PA8 function to BPWM0_CH3           */
#define SET_BPWM0_CH3_PE5()         SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE5MFP_Msk)) | SYS_GPE_MFP1_PE5MFP_BPWM0_CH3)                     /*!< Set PE5 function to BPWM0_CH3           */
#define SET_BPWM0_CH3_PG11()        SYS->GPG_MFP2 = ((SYS->GPG_MFP2 & (~SYS_GPG_MFP2_PG11MFP_Msk)) | SYS_GPG_MFP2_PG11MFP_BPWM0_CH3)                   /*!< Set PG11 function to BPWM0_CH3          */
#define SET_BPWM0_CH4_PA4()         SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA4MFP_Msk)) | SYS_GPA_MFP1_PA4MFP_BPWM0_CH4)                     /*!< Set PA4 function to BPWM0_CH4           */
#define SET_BPWM0_CH4_PC13()        SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC13MFP_Msk)) | SYS_GPC_MFP3_PC13MFP_BPWM0_CH4)                   /*!< Set PC13 function to BPWM0_CH4          */
#define SET_BPWM0_CH4_PE6()         SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE6MFP_Msk)) | SYS_GPE_MFP1_PE6MFP_BPWM0_CH4)                     /*!< Set PE6 function to BPWM0_CH4           */
#define SET_BPWM0_CH4_PF5()         SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF5MFP_Msk)) | SYS_GPF_MFP1_PF5MFP_BPWM0_CH4)                     /*!< Set PF5 function to BPWM0_CH4           */
#define SET_BPWM0_CH4_PG10()        SYS->GPG_MFP2 = ((SYS->GPG_MFP2 & (~SYS_GPG_MFP2_PG10MFP_Msk)) | SYS_GPG_MFP2_PG10MFP_BPWM0_CH4)                   /*!< Set PG10 function to BPWM0_CH4          */
#define SET_BPWM0_CH5_PA5()         SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA5MFP_Msk)) | SYS_GPA_MFP1_PA5MFP_BPWM0_CH5)                     /*!< Set PA5 function to BPWM0_CH5           */
#define SET_BPWM0_CH5_PD12()        SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SYS_GPD_MFP3_PD12MFP_Msk)) | SYS_GPD_MFP3_PD12MFP_BPWM0_CH5)                   /*!< Set PD12 function to BPWM0_CH5          */
#define SET_BPWM0_CH5_PE7()         SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE7MFP_Msk)) | SYS_GPE_MFP1_PE7MFP_BPWM0_CH5)                     /*!< Set PE7 function to BPWM0_CH5           */
#define SET_BPWM0_CH5_PG9()         SYS->GPG_MFP2 = ((SYS->GPG_MFP2 & (~SYS_GPG_MFP2_PG9MFP_Msk)) | SYS_GPG_MFP2_PG9MFP_BPWM0_CH5)                     /*!< Set PG9 function to BPWM0_CH5           */
#define SET_BPWM1_CH0_PB11()        SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB11MFP_Msk)) | SYS_GPB_MFP2_PB11MFP_BPWM1_CH0)                   /*!< Set PB11 function to BPWM1_CH0          */
#define SET_BPWM1_CH0_PC7()         SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC7MFP_Msk)) | SYS_GPC_MFP1_PC7MFP_BPWM1_CH0)                     /*!< Set PC7 function to BPWM1_CH0           */
#define SET_BPWM1_CH0_PF0()         SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF0MFP_Msk)) | SYS_GPF_MFP0_PF0MFP_BPWM1_CH0)                     /*!< Set PF0 function to BPWM1_CH0           */
#define SET_BPWM1_CH0_PF3()         SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF3MFP_Msk)) | SYS_GPF_MFP0_PF3MFP_BPWM1_CH0)                     /*!< Set PF3 function to BPWM1_CH0           */
#define SET_BPWM1_CH1_PB10()        SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB10MFP_Msk)) | SYS_GPB_MFP2_PB10MFP_BPWM1_CH1)                   /*!< Set PB10 function to BPWM1_CH1          */
#define SET_BPWM1_CH1_PC6()         SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC6MFP_Msk)) | SYS_GPC_MFP1_PC6MFP_BPWM1_CH1)                     /*!< Set PC6 function to BPWM1_CH1           */
#define SET_BPWM1_CH1_PF1()         SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF1MFP_Msk)) | SYS_GPF_MFP0_PF1MFP_BPWM1_CH1)                     /*!< Set PF1 function to BPWM1_CH1           */
#define SET_BPWM1_CH1_PF2()         SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF2MFP_Msk)) | SYS_GPF_MFP0_PF2MFP_BPWM1_CH1)                     /*!< Set PF2 function to BPWM1_CH1           */
#define SET_BPWM1_CH2_PA12()        SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA12MFP_Msk)) | SYS_GPA_MFP3_PA12MFP_BPWM1_CH2)                   /*!< Set PA12 function to BPWM1_CH2          */
#define SET_BPWM1_CH2_PA7()         SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA7MFP_Msk)) | SYS_GPA_MFP1_PA7MFP_BPWM1_CH2)                     /*!< Set PA7 function to BPWM1_CH2           */
#define SET_BPWM1_CH2_PB9()         SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB9MFP_Msk)) | SYS_GPB_MFP2_PB9MFP_BPWM1_CH2)                     /*!< Set PB9 function to BPWM1_CH2           */
#define SET_BPWM1_CH3_PA13()        SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA13MFP_Msk)) | SYS_GPA_MFP3_PA13MFP_BPWM1_CH3)                   /*!< Set PA13 function to BPWM1_CH3          */
#define SET_BPWM1_CH3_PA6()         SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA6MFP_Msk)) | SYS_GPA_MFP1_PA6MFP_BPWM1_CH3)                     /*!< Set PA6 function to BPWM1_CH3           */
#define SET_BPWM1_CH3_PB8()         SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB8MFP_Msk)) | SYS_GPB_MFP2_PB8MFP_BPWM1_CH3)                     /*!< Set PB8 function to BPWM1_CH3           */
#define SET_BPWM1_CH4_PA14()        SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA14MFP_Msk)) | SYS_GPA_MFP3_PA14MFP_BPWM1_CH4)                   /*!< Set PA14 function to BPWM1_CH4          */
#define SET_BPWM1_CH4_PB7()         SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB7MFP_Msk)) | SYS_GPB_MFP1_PB7MFP_BPWM1_CH4)                     /*!< Set PB7 function to BPWM1_CH4           */
#define SET_BPWM1_CH4_PC8()         SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC8MFP_Msk)) | SYS_GPC_MFP2_PC8MFP_BPWM1_CH4)                     /*!< Set PC8 function to BPWM1_CH4           */
#define SET_BPWM1_CH5_PA15()        SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA15MFP_Msk)) | SYS_GPA_MFP3_PA15MFP_BPWM1_CH5)                   /*!< Set PA15 function to BPWM1_CH5          */
#define SET_BPWM1_CH5_PB6()         SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB6MFP_Msk)) | SYS_GPB_MFP1_PB6MFP_BPWM1_CH5)                     /*!< Set PB6 function to BPWM1_CH5           */
#define SET_BPWM1_CH5_PE13()        SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~SYS_GPE_MFP3_PE13MFP_Msk)) | SYS_GPE_MFP3_PE13MFP_BPWM1_CH5)                   /*!< Set PE13 function to BPWM1_CH5          */
#define SET_CANFD0_RXD_PA13()       SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA13MFP_Msk)) | SYS_GPA_MFP3_PA13MFP_CANFD0_RXD)                  /*!< Set PA13 function to CANFD0_RXD         */
#define SET_CANFD0_RXD_PA4()        SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA4MFP_Msk)) | SYS_GPA_MFP1_PA4MFP_CANFD0_RXD)                    /*!< Set PA4 function to CANFD0_RXD          */
#define SET_CANFD0_RXD_PB10()       SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB10MFP_Msk)) | SYS_GPB_MFP2_PB10MFP_CANFD0_RXD)                  /*!< Set PB10 function to CANFD0_RXD         */
#define SET_CANFD0_RXD_PC4()        SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC4MFP_Msk)) | SYS_GPC_MFP1_PC4MFP_CANFD0_RXD)                    /*!< Set PC4 function to CANFD0_RXD          */
#define SET_CANFD0_RXD_PD10()       SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD10MFP_Msk)) | SYS_GPD_MFP2_PD10MFP_CANFD0_RXD)                  /*!< Set PD10 function to CANFD0_RXD         */
#define SET_CANFD0_RXD_PE15()       SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~SYS_GPE_MFP3_PE15MFP_Msk)) | SYS_GPE_MFP3_PE15MFP_CANFD0_RXD)                  /*!< Set PE15 function to CANFD0_RXD         */
#define SET_CANFD0_TXD_PA12()       SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA12MFP_Msk)) | SYS_GPA_MFP3_PA12MFP_CANFD0_TXD)                  /*!< Set PA12 function to CANFD0_TXD         */
#define SET_CANFD0_TXD_PA5()        SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA5MFP_Msk)) | SYS_GPA_MFP1_PA5MFP_CANFD0_TXD)                    /*!< Set PA5 function to CANFD0_TXD          */
#define SET_CANFD0_TXD_PB11()       SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB11MFP_Msk)) | SYS_GPB_MFP2_PB11MFP_CANFD0_TXD)                  /*!< Set PB11 function to CANFD0_TXD         */
#define SET_CANFD0_TXD_PC5()        SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC5MFP_Msk)) | SYS_GPC_MFP1_PC5MFP_CANFD0_TXD)                    /*!< Set PC5 function to CANFD0_TXD          */
#define SET_CANFD0_TXD_PD11()       SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD11MFP_Msk)) | SYS_GPD_MFP2_PD11MFP_CANFD0_TXD)                  /*!< Set PD11 function to CANFD0_TXD         */
#define SET_CANFD0_TXD_PE14()       SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~SYS_GPE_MFP3_PE14MFP_Msk)) | SYS_GPE_MFP3_PE14MFP_CANFD0_TXD)                  /*!< Set PE14 function to CANFD0_TXD         */
#define SET_CANFD0_TXH_PA12()       SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA12MFP_Msk)) | SYS_GPA_MFP3_PA12MFP_CANFD0_TXH)                  /*!< Set PA12 function to CANFD0_TXH         */
#define SET_CANFD0_TXH_PA5()        SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA5MFP_Msk)) | SYS_GPA_MFP1_PA5MFP_CANFD0_TXH)                    /*!< Set PA5 function to CANFD0_TXH          */
#define SET_CANFD0_TXH_PB11()       SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB11MFP_Msk)) | SYS_GPB_MFP2_PB11MFP_CANFD0_TXH)                  /*!< Set PB11 function to CANFD0_TXH         */
#define SET_CANFD0_TXH_PC5()        SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC5MFP_Msk)) | SYS_GPC_MFP1_PC5MFP_CANFD0_TXH)                    /*!< Set PC5 function to CANFD0_TXH          */
#define SET_CANFD0_TXH_PD11()       SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD11MFP_Msk)) | SYS_GPD_MFP2_PD11MFP_CANFD0_TXH)                  /*!< Set PD11 function to CANFD0_TXH         */
#define SET_CANFD0_TXL_PA6()        SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA6MFP_Msk)) | SYS_GPA_MFP1_PA6MFP_CANFD0_TXL)                    /*!< Set PA6 function to CANFD0_TXL          */
#define SET_CANFD0_TXL_PB12()       SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB12MFP_Msk)) | SYS_GPB_MFP3_PB12MFP_CANFD0_TXL)                  /*!< Set PB12 function to CANFD0_TXL         */
#define SET_CANFD0_TXL_PD0()        SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD0MFP_Msk)) | SYS_GPD_MFP0_PD0MFP_CANFD0_TXL)                    /*!< Set PD0 function to CANFD0_TXL          */
#define SET_CANFD0_TXL_PF1()        SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF1MFP_Msk)) | SYS_GPF_MFP0_PF1MFP_CANFD0_TXL)                    /*!< Set PF1 function to CANFD0_TXL          */
#define SET_CANFD0_TXL_PG2()        SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~SYS_GPG_MFP0_PG2MFP_Msk)) | SYS_GPG_MFP0_PG2MFP_CANFD0_TXL)                    /*!< Set PG2 function to CANFD0_TXL          */
#define SET_CANFD1_RXD_PB6()        SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB6MFP_Msk)) | SYS_GPB_MFP1_PB6MFP_CANFD1_RXD)                    /*!< Set PB6 function to CANFD1_RXD          */
#define SET_CANFD1_RXD_PC2()        SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC2MFP_Msk)) | SYS_GPC_MFP0_PC2MFP_CANFD1_RXD)                    /*!< Set PC2 function to CANFD1_RXD          */
#define SET_CANFD1_RXD_PC9()        SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC9MFP_Msk)) | SYS_GPC_MFP2_PC9MFP_CANFD1_RXD)                    /*!< Set PC9 function to CANFD1_RXD          */
#define SET_CANFD1_RXD_PD12()       SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SYS_GPD_MFP3_PD12MFP_Msk)) | SYS_GPD_MFP3_PD12MFP_CANFD1_RXD)                  /*!< Set PD12 function to CANFD1_RXD         */
#define SET_CANFD1_RXD_PE6()        SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE6MFP_Msk)) | SYS_GPE_MFP1_PE6MFP_CANFD1_RXD)                    /*!< Set PE6 function to CANFD1_RXD          */
#define SET_CANFD1_RXD_PF8()        SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SYS_GPF_MFP2_PF8MFP_Msk)) | SYS_GPF_MFP2_PF8MFP_CANFD1_RXD)                    /*!< Set PF8 function to CANFD1_RXD          */
#define SET_CANFD1_TXD_PB7()        SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB7MFP_Msk)) | SYS_GPB_MFP1_PB7MFP_CANFD1_TXD)                    /*!< Set PB7 function to CANFD1_TXD          */
#define SET_CANFD1_TXD_PC10()       SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC10MFP_Msk)) | SYS_GPC_MFP2_PC10MFP_CANFD1_TXD)                  /*!< Set PC10 function to CANFD1_TXD         */
#define SET_CANFD1_TXD_PC13()       SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC13MFP_Msk)) | SYS_GPC_MFP3_PC13MFP_CANFD1_TXD)                  /*!< Set PC13 function to CANFD1_TXD         */
#define SET_CANFD1_TXD_PC3()        SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC3MFP_Msk)) | SYS_GPC_MFP0_PC3MFP_CANFD1_TXD)                    /*!< Set PC3 function to CANFD1_TXD          */
#define SET_CANFD1_TXD_PE7()        SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE7MFP_Msk)) | SYS_GPE_MFP1_PE7MFP_CANFD1_TXD)                    /*!< Set PE7 function to CANFD1_TXD          */
#define SET_CANFD1_TXD_PF9()        SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SYS_GPF_MFP2_PF9MFP_Msk)) | SYS_GPF_MFP2_PF9MFP_CANFD1_TXD)                    /*!< Set PF9 function to CANFD1_TXD          */
#define SET_CANFD1_TXH_PB7()        SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB7MFP_Msk)) | SYS_GPB_MFP1_PB7MFP_CANFD1_TXH)                    /*!< Set PB7 function to CANFD1_TXH          */
#define SET_CANFD1_TXH_PC10()       SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC10MFP_Msk)) | SYS_GPC_MFP2_PC10MFP_CANFD1_TXH)                  /*!< Set PC10 function to CANFD1_TXH         */
#define SET_CANFD1_TXH_PC13()       SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC13MFP_Msk)) | SYS_GPC_MFP3_PC13MFP_CANFD1_TXH)                  /*!< Set PC13 function to CANFD1_TXH         */
#define SET_CANFD1_TXH_PC3()        SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC3MFP_Msk)) | SYS_GPC_MFP0_PC3MFP_CANFD1_TXH)                    /*!< Set PC3 function to CANFD1_TXH          */
#define SET_CANFD1_TXH_PE7()        SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE7MFP_Msk)) | SYS_GPE_MFP1_PE7MFP_CANFD1_TXH)                    /*!< Set PE7 function to CANFD1_TXH          */
#define SET_CANFD1_TXH_PF9()        SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SYS_GPF_MFP2_PF9MFP_Msk)) | SYS_GPF_MFP2_PF9MFP_CANFD1_TXH)                    /*!< Set PF9 function to CANFD1_TXH          */
#define SET_CANFD1_TXL_PA8()        SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA8MFP_Msk)) | SYS_GPA_MFP2_PA8MFP_CANFD1_TXL)                    /*!< Set PA8 function to CANFD1_TXL          */
#define SET_CANFD1_TXL_PB8()        SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB8MFP_Msk)) | SYS_GPB_MFP2_PB8MFP_CANFD1_TXL)                    /*!< Set PB8 function to CANFD1_TXL          */
#define SET_CANFD1_TXL_PC1()        SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC1MFP_Msk)) | SYS_GPC_MFP0_PC1MFP_CANFD1_TXL)                    /*!< Set PC1 function to CANFD1_TXL          */
#define SET_CANFD1_TXL_PC11()       SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC11MFP_Msk)) | SYS_GPC_MFP2_PC11MFP_CANFD1_TXL)                  /*!< Set PC11 function to CANFD1_TXL         */
#define SET_CANFD1_TXL_PE5()        SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE5MFP_Msk)) | SYS_GPE_MFP1_PE5MFP_CANFD1_TXL)                    /*!< Set PE5 function to CANFD1_TXL          */
#define SET_CANFD1_TXL_PF10()       SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SYS_GPF_MFP2_PF10MFP_Msk)) | SYS_GPF_MFP2_PF10MFP_CANFD1_TXL)                  /*!< Set PF10 function to CANFD1_TXL         */
#define SET_CLKO_PB13()             SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB13MFP_Msk)) | SYS_GPB_MFP3_PB13MFP_CLKO)                        /*!< Set PB13 function to CLKO               */
#define SET_CLKO_PB14()             SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB14MFP_Msk)) | SYS_GPB_MFP3_PB14MFP_CLKO)                        /*!< Set PB14 function to CLKO               */
#define SET_CLKO_PC13()             SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC13MFP_Msk)) | SYS_GPC_MFP3_PC13MFP_CLKO)                        /*!< Set PC13 function to CLKO               */
#define SET_CLKO_PD12()             SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SYS_GPD_MFP3_PD12MFP_Msk)) | SYS_GPD_MFP3_PD12MFP_CLKO)                        /*!< Set PD12 function to CLKO               */
#define SET_CLKO_PG15()             SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~SYS_GPG_MFP3_PG15MFP_Msk)) | SYS_GPG_MFP3_PG15MFP_CLKO)                        /*!< Set PG15 function to CLKO               */
#define SET_DAC0_OUT_PB12()         SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB12MFP_Msk)) | SYS_GPB_MFP3_PB12MFP_DAC0_OUT)                    /*!< Set PB12 function to DAC0_OUT           */
#define SET_DAC0_ST_PA0()           SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA0MFP_Msk)) | SYS_GPA_MFP0_PA0MFP_DAC0_ST)                       /*!< Set PA0 function to DAC0_ST             */
#define SET_DAC0_ST_PA10()          SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA10MFP_Msk)) | SYS_GPA_MFP2_PA10MFP_DAC0_ST)                     /*!< Set PA10 function to DAC0_ST            */
#define SET_EADC0_CH0_PB0()         SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB0MFP_Msk)) | SYS_GPB_MFP0_PB0MFP_EADC0_CH0)                     /*!< Set PB0 function to EADC0_CH0           */
#define SET_EADC0_CH10_PB10()       SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB10MFP_Msk)) | SYS_GPB_MFP2_PB10MFP_EADC0_CH10)                  /*!< Set PB10 function to EADC0_CH10         */
#define SET_EADC0_CH11_PB11()       SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB11MFP_Msk)) | SYS_GPB_MFP2_PB11MFP_EADC0_CH11)                  /*!< Set PB11 function to EADC0_CH11         */
#define SET_EADC0_CH12_PB12()       SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB12MFP_Msk)) | SYS_GPB_MFP3_PB12MFP_EADC0_CH12)                  /*!< Set PB12 function to EADC0_CH12         */
#define SET_EADC0_CH13_PB13()       SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB13MFP_Msk)) | SYS_GPB_MFP3_PB13MFP_EADC0_CH13)                  /*!< Set PB13 function to EADC0_CH13         */
#define SET_EADC0_CH14_PB14()       SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB14MFP_Msk)) | SYS_GPB_MFP3_PB14MFP_EADC0_CH14)                  /*!< Set PB14 function to EADC0_CH14         */
#define SET_EADC0_CH15_PB15()       SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB15MFP_Msk)) | SYS_GPB_MFP3_PB15MFP_EADC0_CH15)                  /*!< Set PB15 function to EADC0_CH15         */
#define SET_EADC0_CH16_PD10()       SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD10MFP_Msk)) | SYS_GPD_MFP2_PD10MFP_EADC0_CH16)                  /*!< Set PD10 function to EADC0_CH16         */
#define SET_EADC0_CH17_PD11()       SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD11MFP_Msk)) | SYS_GPD_MFP2_PD11MFP_EADC0_CH17)                  /*!< Set PD11 function to EADC0_CH17         */
#define SET_EADC0_CH18_PD12()       SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SYS_GPD_MFP3_PD12MFP_Msk)) | SYS_GPD_MFP3_PD12MFP_EADC0_CH18)                  /*!< Set PD12 function to EADC0_CH18         */
#define SET_EADC0_CH19_PC13()       SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC13MFP_Msk)) | SYS_GPC_MFP3_PC13MFP_EADC0_CH19)                  /*!< Set PC13 function to EADC0_CH19         */
#define SET_EADC0_CH1_PB1()         SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB1MFP_Msk)) | SYS_GPB_MFP0_PB1MFP_EADC0_CH1)                     /*!< Set PB1 function to EADC0_CH1           */
#define SET_EADC0_CH20_PA8()        SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA8MFP_Msk)) | SYS_GPA_MFP2_PA8MFP_EADC0_CH20)                    /*!< Set PA8 function to EADC0_CH20          */
#define SET_EADC0_CH21_PA9()        SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA9MFP_Msk)) | SYS_GPA_MFP2_PA9MFP_EADC0_CH21)                    /*!< Set PA9 function to EADC0_CH21          */
#define SET_EADC0_CH22_PA10()       SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA10MFP_Msk)) | SYS_GPA_MFP2_PA10MFP_EADC0_CH22)                  /*!< Set PA10 function to EADC0_CH22         */
#define SET_EADC0_CH23_PA11()       SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA11MFP_Msk)) | SYS_GPA_MFP2_PA11MFP_EADC0_CH23)                  /*!< Set PA11 function to EADC0_CH23         */
#define SET_EADC0_CH2_PB2()         SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB2MFP_Msk)) | SYS_GPB_MFP0_PB2MFP_EADC0_CH2)                     /*!< Set PB2 function to EADC0_CH2           */
#define SET_EADC0_CH3_PB3()         SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB3MFP_Msk)) | SYS_GPB_MFP0_PB3MFP_EADC0_CH3)                     /*!< Set PB3 function to EADC0_CH3           */
#define SET_EADC0_CH4_PB4()         SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB4MFP_Msk)) | SYS_GPB_MFP1_PB4MFP_EADC0_CH4)                     /*!< Set PB4 function to EADC0_CH4           */
#define SET_EADC0_CH5_PB5()         SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB5MFP_Msk)) | SYS_GPB_MFP1_PB5MFP_EADC0_CH5)                     /*!< Set PB5 function to EADC0_CH5           */
#define SET_EADC0_CH6_PB6()         SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB6MFP_Msk)) | SYS_GPB_MFP1_PB6MFP_EADC0_CH6)                     /*!< Set PB6 function to EADC0_CH6           */
#define SET_EADC0_CH7_PB7()         SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB7MFP_Msk)) | SYS_GPB_MFP1_PB7MFP_EADC0_CH7)                     /*!< Set PB7 function to EADC0_CH7           */
#define SET_EADC0_CH8_PB8()         SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB8MFP_Msk)) | SYS_GPB_MFP2_PB8MFP_EADC0_CH8)                     /*!< Set PB8 function to EADC0_CH8           */
#define SET_EADC0_CH9_PB9()         SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB9MFP_Msk)) | SYS_GPB_MFP2_PB9MFP_EADC0_CH9)                     /*!< Set PB9 function to EADC0_CH9           */
#define SET_EADC0_ST_PC1()          SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC1MFP_Msk)) | SYS_GPC_MFP0_PC1MFP_EADC0_ST)                      /*!< Set PC1 function to EADC0_ST            */
#define SET_EADC0_ST_PC13()         SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC13MFP_Msk)) | SYS_GPC_MFP3_PC13MFP_EADC0_ST)                    /*!< Set PC13 function to EADC0_ST           */
#define SET_EADC0_ST_PD12()         SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SYS_GPD_MFP3_PD12MFP_Msk)) | SYS_GPD_MFP3_PD12MFP_EADC0_ST)                    /*!< Set PD12 function to EADC0_ST           */
#define SET_EADC0_ST_PD13()         SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SYS_GPD_MFP3_PD13MFP_Msk)) | SYS_GPD_MFP3_PD13MFP_EADC0_ST)                    /*!< Set PD13 function to EADC0_ST           */
#define SET_EADC0_ST_PF0()          SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF0MFP_Msk)) | SYS_GPF_MFP0_PF0MFP_EADC0_ST)                      /*!< Set PF0 function to EADC0_ST            */
#define SET_EADC0_ST_PF5()          SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF5MFP_Msk)) | SYS_GPF_MFP1_PF5MFP_EADC0_ST)                      /*!< Set PF5 function to EADC0_ST            */
#define SET_EADC0_ST_PG15()         SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~SYS_GPG_MFP3_PG15MFP_Msk)) | SYS_GPG_MFP3_PG15MFP_EADC0_ST)                    /*!< Set PG15 function to EADC0_ST           */
#define SET_EADC1_CH0_PB8()         SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB8MFP_Msk)) | SYS_GPB_MFP2_PB8MFP_EADC1_CH0)                     /*!< Set PB8 function to EADC1_CH0           */
#define SET_EADC1_CH10_PH11()       SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH11MFP_Msk)) | SYS_GPH_MFP2_PH11MFP_EADC1_CH10)                  /*!< Set PH11 function to EADC1_CH10         */
#define SET_EADC1_CH11_PH10()       SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH10MFP_Msk)) | SYS_GPH_MFP2_PH10MFP_EADC1_CH11)                  /*!< Set PH10 function to EADC1_CH11         */
#define SET_EADC1_CH12_PH9()        SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH9MFP_Msk)) | SYS_GPH_MFP2_PH9MFP_EADC1_CH12)                    /*!< Set PH9 function to EADC1_CH12          */
#define SET_EADC1_CH13_PH8()        SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH8MFP_Msk)) | SYS_GPH_MFP2_PH8MFP_EADC1_CH13)                    /*!< Set PH8 function to EADC1_CH13          */
#define SET_EADC1_CH14_PE0()        SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE0MFP_Msk)) | SYS_GPE_MFP0_PE0MFP_EADC1_CH14)                    /*!< Set PE0 function to EADC1_CH14          */
#define SET_EADC1_CH15_PE1()        SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE1MFP_Msk)) | SYS_GPE_MFP0_PE1MFP_EADC1_CH15)                    /*!< Set PE1 function to EADC1_CH15          */
#define SET_EADC1_CH1_PB9()         SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB9MFP_Msk)) | SYS_GPB_MFP2_PB9MFP_EADC1_CH1)                     /*!< Set PB9 function to EADC1_CH1           */
#define SET_EADC1_CH2_PB10()        SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB10MFP_Msk)) | SYS_GPB_MFP2_PB10MFP_EADC1_CH2)                   /*!< Set PB10 function to EADC1_CH2          */
#define SET_EADC1_CH3_PB11()        SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB11MFP_Msk)) | SYS_GPB_MFP2_PB11MFP_EADC1_CH3)                   /*!< Set PB11 function to EADC1_CH3          */
#define SET_EADC1_CH4_PB12()        SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB12MFP_Msk)) | SYS_GPB_MFP3_PB12MFP_EADC1_CH4)                   /*!< Set PB12 function to EADC1_CH4          */
#define SET_EADC1_CH5_PB13()        SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB13MFP_Msk)) | SYS_GPB_MFP3_PB13MFP_EADC1_CH5)                   /*!< Set PB13 function to EADC1_CH5          */
#define SET_EADC1_CH6_PB14()        SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB14MFP_Msk)) | SYS_GPB_MFP3_PB14MFP_EADC1_CH6)                   /*!< Set PB14 function to EADC1_CH6          */
#define SET_EADC1_CH7_PB15()        SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB15MFP_Msk)) | SYS_GPB_MFP3_PB15MFP_EADC1_CH7)                   /*!< Set PB15 function to EADC1_CH7          */
#define SET_EADC1_CH8_PC14()        SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC14MFP_Msk)) | SYS_GPC_MFP3_PC14MFP_EADC1_CH8)                   /*!< Set PC14 function to EADC1_CH8          */
#define SET_EADC1_CH9_PD14()        SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SYS_GPD_MFP3_PD14MFP_Msk)) | SYS_GPD_MFP3_PD14MFP_EADC1_CH9)                   /*!< Set PD14 function to EADC1_CH9          */
#define SET_EADC1_ST_PC0()          SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC0MFP_Msk)) | SYS_GPC_MFP0_PC0MFP_EADC1_ST)                      /*!< Set PC0 function to EADC1_ST            */
#define SET_EADC1_ST_PC10()         SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC10MFP_Msk)) | SYS_GPC_MFP2_PC10MFP_EADC1_ST)                    /*!< Set PC10 function to EADC1_ST           */
#define SET_EADC1_ST_PC9()          SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC9MFP_Msk)) | SYS_GPC_MFP2_PC9MFP_EADC1_ST)                      /*!< Set PC9 function to EADC1_ST            */
#define SET_EADC1_ST_PF1()          SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF1MFP_Msk)) | SYS_GPF_MFP0_PF1MFP_EADC1_ST)                      /*!< Set PF1 function to EADC1_ST            */
#define SET_EADC1_ST_PF4()          SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF4MFP_Msk)) | SYS_GPF_MFP1_PF4MFP_EADC1_ST)                      /*!< Set PF4 function to EADC1_ST            */
#define SET_EBI_AD0_PC0()           SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC0MFP_Msk)) | SYS_GPC_MFP0_PC0MFP_EBI_AD0)                       /*!< Set PC0 function to EBI_AD0             */
#define SET_EBI_AD0_PG9()           SYS->GPG_MFP2 = ((SYS->GPG_MFP2 & (~SYS_GPG_MFP2_PG9MFP_Msk)) | SYS_GPG_MFP2_PG9MFP_EBI_AD0)                       /*!< Set PG9 function to EBI_AD0             */
#define SET_EBI_AD10_PD13()         SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SYS_GPD_MFP3_PD13MFP_Msk)) | SYS_GPD_MFP3_PD13MFP_EBI_AD10)                    /*!< Set PD13 function to EBI_AD10           */
#define SET_EBI_AD10_PD3()          SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD3MFP_Msk)) | SYS_GPD_MFP0_PD3MFP_EBI_AD10)                      /*!< Set PD3 function to EBI_AD10            */
#define SET_EBI_AD10_PE1()          SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE1MFP_Msk)) | SYS_GPE_MFP0_PE1MFP_EBI_AD10)                      /*!< Set PE1 function to EBI_AD10            */
#define SET_EBI_AD10_PE7()          SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE7MFP_Msk)) | SYS_GPE_MFP1_PE7MFP_EBI_AD10)                      /*!< Set PE7 function to EBI_AD10            */
#define SET_EBI_AD11_PC14()         SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC14MFP_Msk)) | SYS_GPC_MFP3_PC14MFP_EBI_AD11)                    /*!< Set PC14 function to EBI_AD11           */
#define SET_EBI_AD11_PD2()          SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD2MFP_Msk)) | SYS_GPD_MFP0_PD2MFP_EBI_AD11)                      /*!< Set PD2 function to EBI_AD11            */
#define SET_EBI_AD11_PE0()          SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE0MFP_Msk)) | SYS_GPE_MFP0_PE0MFP_EBI_AD11)                      /*!< Set PE0 function to EBI_AD11            */
#define SET_EBI_AD11_PE6()          SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE6MFP_Msk)) | SYS_GPE_MFP1_PE6MFP_EBI_AD11)                      /*!< Set PE6 function to EBI_AD11            */
#define SET_EBI_AD12_PB15()         SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB15MFP_Msk)) | SYS_GPB_MFP3_PB15MFP_EBI_AD12)                    /*!< Set PB15 function to EBI_AD12           */
#define SET_EBI_AD12_PD1()          SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD1MFP_Msk)) | SYS_GPD_MFP0_PD1MFP_EBI_AD12)                      /*!< Set PD1 function to EBI_AD12            */
#define SET_EBI_AD12_PH8()          SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH8MFP_Msk)) | SYS_GPH_MFP2_PH8MFP_EBI_AD12)                      /*!< Set PH8 function to EBI_AD12            */
#define SET_EBI_AD13_PB14()         SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB14MFP_Msk)) | SYS_GPB_MFP3_PB14MFP_EBI_AD13)                    /*!< Set PB14 function to EBI_AD13           */
#define SET_EBI_AD13_PD0()          SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD0MFP_Msk)) | SYS_GPD_MFP0_PD0MFP_EBI_AD13)                      /*!< Set PD0 function to EBI_AD13            */
#define SET_EBI_AD13_PH9()          SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH9MFP_Msk)) | SYS_GPH_MFP2_PH9MFP_EBI_AD13)                      /*!< Set PH9 function to EBI_AD13            */
#define SET_EBI_AD14_PB13()         SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB13MFP_Msk)) | SYS_GPB_MFP3_PB13MFP_EBI_AD14)                    /*!< Set PB13 function to EBI_AD14           */
#define SET_EBI_AD14_PH10()         SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH10MFP_Msk)) | SYS_GPH_MFP2_PH10MFP_EBI_AD14)                    /*!< Set PH10 function to EBI_AD14           */
#define SET_EBI_AD15_PB12()         SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB12MFP_Msk)) | SYS_GPB_MFP3_PB12MFP_EBI_AD15)                    /*!< Set PB12 function to EBI_AD15           */
#define SET_EBI_AD15_PD5()          SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD5MFP_Msk)) | SYS_GPD_MFP1_PD5MFP_EBI_AD15)                      /*!< Set PD5 function to EBI_AD15            */
#define SET_EBI_AD15_PH11()         SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH11MFP_Msk)) | SYS_GPH_MFP2_PH11MFP_EBI_AD15)                    /*!< Set PH11 function to EBI_AD15           */
#define SET_EBI_AD1_PC1()           SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC1MFP_Msk)) | SYS_GPC_MFP0_PC1MFP_EBI_AD1)                       /*!< Set PC1 function to EBI_AD1             */
#define SET_EBI_AD1_PG10()          SYS->GPG_MFP2 = ((SYS->GPG_MFP2 & (~SYS_GPG_MFP2_PG10MFP_Msk)) | SYS_GPG_MFP2_PG10MFP_EBI_AD1)                     /*!< Set PG10 function to EBI_AD1            */
#define SET_EBI_AD2_PC2()           SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC2MFP_Msk)) | SYS_GPC_MFP0_PC2MFP_EBI_AD2)                       /*!< Set PC2 function to EBI_AD2             */
#define SET_EBI_AD2_PG11()          SYS->GPG_MFP2 = ((SYS->GPG_MFP2 & (~SYS_GPG_MFP2_PG11MFP_Msk)) | SYS_GPG_MFP2_PG11MFP_EBI_AD2)                     /*!< Set PG11 function to EBI_AD2            */
#define SET_EBI_AD3_PC3()           SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC3MFP_Msk)) | SYS_GPC_MFP0_PC3MFP_EBI_AD3)                       /*!< Set PC3 function to EBI_AD3             */
#define SET_EBI_AD3_PG12()          SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~SYS_GPG_MFP3_PG12MFP_Msk)) | SYS_GPG_MFP3_PG12MFP_EBI_AD3)                     /*!< Set PG12 function to EBI_AD3            */
#define SET_EBI_AD4_PC4()           SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC4MFP_Msk)) | SYS_GPC_MFP1_PC4MFP_EBI_AD4)                       /*!< Set PC4 function to EBI_AD4             */
#define SET_EBI_AD4_PG13()          SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~SYS_GPG_MFP3_PG13MFP_Msk)) | SYS_GPG_MFP3_PG13MFP_EBI_AD4)                     /*!< Set PG13 function to EBI_AD4            */
#define SET_EBI_AD5_PA14()          SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA14MFP_Msk)) | SYS_GPA_MFP3_PA14MFP_EBI_AD5)                     /*!< Set PA14 function to EBI_AD5            */
#define SET_EBI_AD5_PC5()           SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC5MFP_Msk)) | SYS_GPC_MFP1_PC5MFP_EBI_AD5)                       /*!< Set PC5 function to EBI_AD5             */
#define SET_EBI_AD5_PD4()           SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD4MFP_Msk)) | SYS_GPD_MFP1_PD4MFP_EBI_AD5)                       /*!< Set PD4 function to EBI_AD5             */
#define SET_EBI_AD5_PG14()          SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~SYS_GPG_MFP3_PG14MFP_Msk)) | SYS_GPG_MFP3_PG14MFP_EBI_AD5)                     /*!< Set PG14 function to EBI_AD5            */
#define SET_EBI_AD6_PA6()           SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA6MFP_Msk)) | SYS_GPA_MFP1_PA6MFP_EBI_AD6)                       /*!< Set PA6 function to EBI_AD6             */
#define SET_EBI_AD6_PD8()           SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD8MFP_Msk)) | SYS_GPD_MFP2_PD8MFP_EBI_AD6)                       /*!< Set PD8 function to EBI_AD6             */
#define SET_EBI_AD7_PA7()           SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA7MFP_Msk)) | SYS_GPA_MFP1_PA7MFP_EBI_AD7)                       /*!< Set PA7 function to EBI_AD7             */
#define SET_EBI_AD7_PD9()           SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD9MFP_Msk)) | SYS_GPD_MFP2_PD9MFP_EBI_AD7)                       /*!< Set PD9 function to EBI_AD7             */
#define SET_EBI_AD8_PC6()           SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC6MFP_Msk)) | SYS_GPC_MFP1_PC6MFP_EBI_AD8)                       /*!< Set PC6 function to EBI_AD8             */
#define SET_EBI_AD8_PE14()          SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~SYS_GPE_MFP3_PE14MFP_Msk)) | SYS_GPE_MFP3_PE14MFP_EBI_AD8)                     /*!< Set PE14 function to EBI_AD8            */
#define SET_EBI_AD9_PC7()           SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC7MFP_Msk)) | SYS_GPC_MFP1_PC7MFP_EBI_AD9)                       /*!< Set PC7 function to EBI_AD9             */
#define SET_EBI_AD9_PE15()          SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~SYS_GPE_MFP3_PE15MFP_Msk)) | SYS_GPE_MFP3_PE15MFP_EBI_AD9)                     /*!< Set PE15 function to EBI_AD9            */
#define SET_EBI_ADR0_PH7()          SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SYS_GPH_MFP1_PH7MFP_Msk)) | SYS_GPH_MFP1_PH7MFP_EBI_ADR0)                      /*!< Set PH7 function to EBI_ADR0            */
#define SET_EBI_ADR10_PC13()        SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC13MFP_Msk)) | SYS_GPC_MFP3_PC13MFP_EBI_ADR10)                   /*!< Set PC13 function to EBI_ADR10          */
#define SET_EBI_ADR10_PE8()         SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SYS_GPE_MFP2_PE8MFP_Msk)) | SYS_GPE_MFP2_PE8MFP_EBI_ADR10)                     /*!< Set PE8 function to EBI_ADR10           */
#define SET_EBI_ADR11_PE9()         SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SYS_GPE_MFP2_PE9MFP_Msk)) | SYS_GPE_MFP2_PE9MFP_EBI_ADR11)                     /*!< Set PE9 function to EBI_ADR11           */
#define SET_EBI_ADR11_PG2()         SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~SYS_GPG_MFP0_PG2MFP_Msk)) | SYS_GPG_MFP0_PG2MFP_EBI_ADR11)                     /*!< Set PG2 function to EBI_ADR11           */
#define SET_EBI_ADR12_PE10()        SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SYS_GPE_MFP2_PE10MFP_Msk)) | SYS_GPE_MFP2_PE10MFP_EBI_ADR12)                   /*!< Set PE10 function to EBI_ADR12          */
#define SET_EBI_ADR12_PG3()         SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~SYS_GPG_MFP0_PG3MFP_Msk)) | SYS_GPG_MFP0_PG3MFP_EBI_ADR12)                     /*!< Set PG3 function to EBI_ADR12           */
#define SET_EBI_ADR13_PE11()        SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SYS_GPE_MFP2_PE11MFP_Msk)) | SYS_GPE_MFP2_PE11MFP_EBI_ADR13)                   /*!< Set PE11 function to EBI_ADR13          */
#define SET_EBI_ADR13_PG4()         SYS->GPG_MFP1 = ((SYS->GPG_MFP1 & (~SYS_GPG_MFP1_PG4MFP_Msk)) | SYS_GPG_MFP1_PG4MFP_EBI_ADR13)                     /*!< Set PG4 function to EBI_ADR13           */
#define SET_EBI_ADR14_PE12()        SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~SYS_GPE_MFP3_PE12MFP_Msk)) | SYS_GPE_MFP3_PE12MFP_EBI_ADR14)                   /*!< Set PE12 function to EBI_ADR14          */
#define SET_EBI_ADR14_PF11()        SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SYS_GPF_MFP2_PF11MFP_Msk)) | SYS_GPF_MFP2_PF11MFP_EBI_ADR14)                   /*!< Set PF11 function to EBI_ADR14          */
#define SET_EBI_ADR15_PE13()        SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~SYS_GPE_MFP3_PE13MFP_Msk)) | SYS_GPE_MFP3_PE13MFP_EBI_ADR15)                   /*!< Set PE13 function to EBI_ADR15          */
#define SET_EBI_ADR15_PF10()        SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SYS_GPF_MFP2_PF10MFP_Msk)) | SYS_GPF_MFP2_PF10MFP_EBI_ADR15)                   /*!< Set PF10 function to EBI_ADR15          */
#define SET_EBI_ADR16_PB11()        SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB11MFP_Msk)) | SYS_GPB_MFP2_PB11MFP_EBI_ADR16)                   /*!< Set PB11 function to EBI_ADR16          */
#define SET_EBI_ADR16_PC8()         SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC8MFP_Msk)) | SYS_GPC_MFP2_PC8MFP_EBI_ADR16)                     /*!< Set PC8 function to EBI_ADR16           */
#define SET_EBI_ADR16_PF9()         SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SYS_GPF_MFP2_PF9MFP_Msk)) | SYS_GPF_MFP2_PF9MFP_EBI_ADR16)                     /*!< Set PF9 function to EBI_ADR16           */
#define SET_EBI_ADR17_PB10()        SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB10MFP_Msk)) | SYS_GPB_MFP2_PB10MFP_EBI_ADR17)                   /*!< Set PB10 function to EBI_ADR17          */
#define SET_EBI_ADR17_PF8()         SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SYS_GPF_MFP2_PF8MFP_Msk)) | SYS_GPF_MFP2_PF8MFP_EBI_ADR17)                     /*!< Set PF8 function to EBI_ADR17           */
#define SET_EBI_ADR18_PB9()         SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB9MFP_Msk)) | SYS_GPB_MFP2_PB9MFP_EBI_ADR18)                     /*!< Set PB9 function to EBI_ADR18           */
#define SET_EBI_ADR18_PF7()         SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF7MFP_Msk)) | SYS_GPF_MFP1_PF7MFP_EBI_ADR18)                     /*!< Set PF7 function to EBI_ADR18           */
#define SET_EBI_ADR19_PB8()         SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB8MFP_Msk)) | SYS_GPB_MFP2_PB8MFP_EBI_ADR19)                     /*!< Set PB8 function to EBI_ADR19           */
#define SET_EBI_ADR19_PF6()         SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF6MFP_Msk)) | SYS_GPF_MFP1_PF6MFP_EBI_ADR19)                     /*!< Set PF6 function to EBI_ADR19           */
#define SET_EBI_ADR1_PH6()          SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SYS_GPH_MFP1_PH6MFP_Msk)) | SYS_GPH_MFP1_PH6MFP_EBI_ADR1)                      /*!< Set PH6 function to EBI_ADR1            */
#define SET_EBI_ADR2_PH5()          SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SYS_GPH_MFP1_PH5MFP_Msk)) | SYS_GPH_MFP1_PH5MFP_EBI_ADR2)                      /*!< Set PH5 function to EBI_ADR2            */
#define SET_EBI_ADR3_PH4()          SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SYS_GPH_MFP1_PH4MFP_Msk)) | SYS_GPH_MFP1_PH4MFP_EBI_ADR3)                      /*!< Set PH4 function to EBI_ADR3            */
#define SET_EBI_ADR4_PC12()         SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC12MFP_Msk)) | SYS_GPC_MFP3_PC12MFP_EBI_ADR4)                    /*!< Set PC12 function to EBI_ADR4           */
#define SET_EBI_ADR5_PC11()         SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC11MFP_Msk)) | SYS_GPC_MFP2_PC11MFP_EBI_ADR5)                    /*!< Set PC11 function to EBI_ADR5           */
#define SET_EBI_ADR6_PC10()         SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC10MFP_Msk)) | SYS_GPC_MFP2_PC10MFP_EBI_ADR6)                    /*!< Set PC10 function to EBI_ADR6           */
#define SET_EBI_ADR7_PC9()          SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC9MFP_Msk)) | SYS_GPC_MFP2_PC9MFP_EBI_ADR7)                      /*!< Set PC9 function to EBI_ADR7            */
#define SET_EBI_ADR8_PB1()          SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB1MFP_Msk)) | SYS_GPB_MFP0_PB1MFP_EBI_ADR8)                      /*!< Set PB1 function to EBI_ADR8            */
#define SET_EBI_ADR9_PB0()          SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB0MFP_Msk)) | SYS_GPB_MFP0_PB0MFP_EBI_ADR9)                      /*!< Set PB0 function to EBI_ADR9            */
#define SET_EBI_ALE_PA8()           SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA8MFP_Msk)) | SYS_GPA_MFP2_PA8MFP_EBI_ALE)                       /*!< Set PA8 function to EBI_ALE             */
#define SET_EBI_ALE_PE2()           SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE2MFP_Msk)) | SYS_GPE_MFP0_PE2MFP_EBI_ALE)                       /*!< Set PE2 function to EBI_ALE             */
#define SET_EBI_MCLK_PA9()          SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA9MFP_Msk)) | SYS_GPA_MFP2_PA9MFP_EBI_MCLK)                      /*!< Set PA9 function to EBI_MCLK            */
#define SET_EBI_MCLK_PE3()          SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE3MFP_Msk)) | SYS_GPE_MFP0_PE3MFP_EBI_MCLK)                      /*!< Set PE3 function to EBI_MCLK            */
#define SET_EBI_nCS0_PD12()         SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SYS_GPD_MFP3_PD12MFP_Msk)) | SYS_GPD_MFP3_PD12MFP_EBI_nCS0)                    /*!< Set PD12 function to EBI_nCS0           */
#define SET_EBI_nCS0_PD14()         SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SYS_GPD_MFP3_PD14MFP_Msk)) | SYS_GPD_MFP3_PD14MFP_EBI_nCS0)                    /*!< Set PD14 function to EBI_nCS0           */
#define SET_EBI_nCS0_PF3()          SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF3MFP_Msk)) | SYS_GPF_MFP0_PF3MFP_EBI_nCS0)                      /*!< Set PF3 function to EBI_nCS0            */
#define SET_EBI_nCS1_PD11()         SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD11MFP_Msk)) | SYS_GPD_MFP2_PD11MFP_EBI_nCS1)                    /*!< Set PD11 function to EBI_nCS1           */
#define SET_EBI_nCS1_PF2()          SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF2MFP_Msk)) | SYS_GPF_MFP0_PF2MFP_EBI_nCS1)                      /*!< Set PF2 function to EBI_nCS1            */
#define SET_EBI_nCS2_PD10()         SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD10MFP_Msk)) | SYS_GPD_MFP2_PD10MFP_EBI_nCS2)                    /*!< Set PD10 function to EBI_nCS2           */
#define SET_EBI_nRD_PA11()          SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA11MFP_Msk)) | SYS_GPA_MFP2_PA11MFP_EBI_nRD)                     /*!< Set PA11 function to EBI_nRD            */
#define SET_EBI_nRD_PE5()           SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE5MFP_Msk)) | SYS_GPE_MFP1_PE5MFP_EBI_nRD)                       /*!< Set PE5 function to EBI_nRD             */
#define SET_EBI_nWRH_PB6()          SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB6MFP_Msk)) | SYS_GPB_MFP1_PB6MFP_EBI_nWRH)                      /*!< Set PB6 function to EBI_nWRH            */
#define SET_EBI_nWRL_PB7()          SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB7MFP_Msk)) | SYS_GPB_MFP1_PB7MFP_EBI_nWRL)                      /*!< Set PB7 function to EBI_nWRL            */
#define SET_EBI_nWR_PA10()          SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA10MFP_Msk)) | SYS_GPA_MFP2_PA10MFP_EBI_nWR)                     /*!< Set PA10 function to EBI_nWR            */
#define SET_EBI_nWR_PE4()           SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE4MFP_Msk)) | SYS_GPE_MFP1_PE4MFP_EBI_nWR)                       /*!< Set PE4 function to EBI_nWR             */
#define SET_ECAP0_IC0_PA10()        SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA10MFP_Msk)) | SYS_GPA_MFP2_PA10MFP_ECAP0_IC0)                   /*!< Set PA10 function to ECAP0_IC0          */
#define SET_ECAP0_IC0_PE8()         SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SYS_GPE_MFP2_PE8MFP_Msk)) | SYS_GPE_MFP2_PE8MFP_ECAP0_IC0)                     /*!< Set PE8 function to ECAP0_IC0           */
#define SET_ECAP0_IC1_PA9()         SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA9MFP_Msk)) | SYS_GPA_MFP2_PA9MFP_ECAP0_IC1)                     /*!< Set PA9 function to ECAP0_IC1           */
#define SET_ECAP0_IC1_PE9()         SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SYS_GPE_MFP2_PE9MFP_Msk)) | SYS_GPE_MFP2_PE9MFP_ECAP0_IC1)                     /*!< Set PE9 function to ECAP0_IC1           */
#define SET_ECAP0_IC2_PA8()         SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA8MFP_Msk)) | SYS_GPA_MFP2_PA8MFP_ECAP0_IC2)                     /*!< Set PA8 function to ECAP0_IC2           */
#define SET_ECAP0_IC2_PE10()        SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SYS_GPE_MFP2_PE10MFP_Msk)) | SYS_GPE_MFP2_PE10MFP_ECAP0_IC2)                   /*!< Set PE10 function to ECAP0_IC2          */
#define SET_ELLSI0_OUT_PA7()        SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA7MFP_Msk)) | SYS_GPA_MFP1_PA7MFP_ELLSI0_OUT)                    /*!< Set PA7 function to ELLSI0_OUT          */
#define SET_ELLSI0_OUT_PB1()        SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB1MFP_Msk)) | SYS_GPB_MFP0_PB1MFP_ELLSI0_OUT)                    /*!< Set PB1 function to ELLSI0_OUT          */
#define SET_ELLSI0_OUT_PB9()        SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB9MFP_Msk)) | SYS_GPB_MFP2_PB9MFP_ELLSI0_OUT)                    /*!< Set PB9 function to ELLSI0_OUT          */
#define SET_ELLSI0_OUT_PC1()        SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC1MFP_Msk)) | SYS_GPC_MFP0_PC1MFP_ELLSI0_OUT)                    /*!< Set PC1 function to ELLSI0_OUT          */
#define SET_ELLSI1_OUT_PA6()        SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA6MFP_Msk)) | SYS_GPA_MFP1_PA6MFP_ELLSI1_OUT)                    /*!< Set PA6 function to ELLSI1_OUT          */
#define SET_ELLSI1_OUT_PB0()        SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB0MFP_Msk)) | SYS_GPB_MFP0_PB0MFP_ELLSI1_OUT)                    /*!< Set PB0 function to ELLSI1_OUT          */
#define SET_ELLSI1_OUT_PB8()        SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB8MFP_Msk)) | SYS_GPB_MFP2_PB8MFP_ELLSI1_OUT)                    /*!< Set PB8 function to ELLSI1_OUT          */
#define SET_ELLSI1_OUT_PC0()        SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC0MFP_Msk)) | SYS_GPC_MFP0_PC0MFP_ELLSI1_OUT)                    /*!< Set PC0 function to ELLSI1_OUT          */
#define SET_EQEI0_A_PA4()           SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA4MFP_Msk)) | SYS_GPA_MFP1_PA4MFP_EQEI0_A)                       /*!< Set PA4 function to EQEI0_A             */
#define SET_EQEI0_A_PD11()          SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD11MFP_Msk)) | SYS_GPD_MFP2_PD11MFP_EQEI0_A)                     /*!< Set PD11 function to EQEI0_A            */
#define SET_EQEI0_A_PE3()           SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE3MFP_Msk)) | SYS_GPE_MFP0_PE3MFP_EQEI0_A)                       /*!< Set PE3 function to EQEI0_A             */
#define SET_EQEI0_B_PA3()           SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA3MFP_Msk)) | SYS_GPA_MFP0_PA3MFP_EQEI0_B)                       /*!< Set PA3 function to EQEI0_B             */
#define SET_EQEI0_B_PD10()          SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD10MFP_Msk)) | SYS_GPD_MFP2_PD10MFP_EQEI0_B)                     /*!< Set PD10 function to EQEI0_B            */
#define SET_EQEI0_B_PE2()           SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE2MFP_Msk)) | SYS_GPE_MFP0_PE2MFP_EQEI0_B)                       /*!< Set PE2 function to EQEI0_B             */
#define SET_EQEI0_INDEX_PA5()       SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA5MFP_Msk)) | SYS_GPA_MFP1_PA5MFP_EQEI0_INDEX)                   /*!< Set PA5 function to EQEI0_INDEX         */
#define SET_EQEI0_INDEX_PD12()      SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SYS_GPD_MFP3_PD12MFP_Msk)) | SYS_GPD_MFP3_PD12MFP_EQEI0_INDEX)                 /*!< Set PD12 function to EQEI0_INDEX        */
#define SET_EQEI0_INDEX_PE4()       SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE4MFP_Msk)) | SYS_GPE_MFP1_PE4MFP_EQEI0_INDEX)                   /*!< Set PE4 function to EQEI0_INDEX         */
#define SET_EQEI1_A_PA8()           SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA8MFP_Msk)) | SYS_GPA_MFP2_PA8MFP_EQEI1_A)                       /*!< Set PA8 function to EQEI1_A             */
#define SET_EQEI1_A_PE6()           SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE6MFP_Msk)) | SYS_GPE_MFP1_PE6MFP_EQEI1_A)                       /*!< Set PE6 function to EQEI1_A             */
#define SET_EQEI1_B_PC13()          SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC13MFP_Msk)) | SYS_GPC_MFP3_PC13MFP_EQEI1_B)                     /*!< Set PC13 function to EQEI1_B            */
#define SET_EQEI1_B_PE5()           SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE5MFP_Msk)) | SYS_GPE_MFP1_PE5MFP_EQEI1_B)                       /*!< Set PE5 function to EQEI1_B             */
#define SET_EQEI1_INDEX_PA9()       SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA9MFP_Msk)) | SYS_GPA_MFP2_PA9MFP_EQEI1_INDEX)                   /*!< Set PA9 function to EQEI1_INDEX         */
#define SET_EQEI1_INDEX_PE7()       SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE7MFP_Msk)) | SYS_GPE_MFP1_PE7MFP_EQEI1_INDEX)                   /*!< Set PE7 function to EQEI1_INDEX         */
#define SET_GPIO_PA0()              SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA0MFP_Msk)) | SYS_GPA_MFP0_PA0MFP_GPIO)                          /*!< Set PA0 function to GPIO                */
#define SET_GPIO_PA1()              SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA1MFP_Msk)) | SYS_GPA_MFP0_PA1MFP_GPIO)                          /*!< Set PA1 function to GPIO                */
#define SET_GPIO_PA10()             SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA10MFP_Msk)) | SYS_GPA_MFP2_PA10MFP_GPIO)                        /*!< Set PA10 function to GPIO               */
#define SET_GPIO_PA11()             SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA11MFP_Msk)) | SYS_GPA_MFP2_PA11MFP_GPIO)                        /*!< Set PA11 function to GPIO               */
#define SET_GPIO_PA12()             SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA12MFP_Msk)) | SYS_GPA_MFP3_PA12MFP_GPIO)                        /*!< Set PA12 function to GPIO               */
#define SET_GPIO_PA13()             SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA13MFP_Msk)) | SYS_GPA_MFP3_PA13MFP_GPIO)                        /*!< Set PA13 function to GPIO               */
#define SET_GPIO_PA14()             SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA14MFP_Msk)) | SYS_GPA_MFP3_PA14MFP_GPIO)                        /*!< Set PA14 function to GPIO               */
#define SET_GPIO_PA15()             SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA15MFP_Msk)) | SYS_GPA_MFP3_PA15MFP_GPIO)                        /*!< Set PA15 function to GPIO               */
#define SET_GPIO_PA2()              SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA2MFP_Msk)) | SYS_GPA_MFP0_PA2MFP_GPIO)                          /*!< Set PA2 function to GPIO                */
#define SET_GPIO_PA3()              SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA3MFP_Msk)) | SYS_GPA_MFP0_PA3MFP_GPIO)                          /*!< Set PA3 function to GPIO                */
#define SET_GPIO_PA4()              SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA4MFP_Msk)) | SYS_GPA_MFP1_PA4MFP_GPIO)                          /*!< Set PA4 function to GPIO                */
#define SET_GPIO_PA5()              SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA5MFP_Msk)) | SYS_GPA_MFP1_PA5MFP_GPIO)                          /*!< Set PA5 function to GPIO                */
#define SET_GPIO_PA6()              SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA6MFP_Msk)) | SYS_GPA_MFP1_PA6MFP_GPIO)                          /*!< Set PA6 function to GPIO                */
#define SET_GPIO_PA7()              SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA7MFP_Msk)) | SYS_GPA_MFP1_PA7MFP_GPIO)                          /*!< Set PA7 function to GPIO                */
#define SET_GPIO_PA8()              SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA8MFP_Msk)) | SYS_GPA_MFP2_PA8MFP_GPIO)                          /*!< Set PA8 function to GPIO                */
#define SET_GPIO_PA9()              SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA9MFP_Msk)) | SYS_GPA_MFP2_PA9MFP_GPIO)                          /*!< Set PA9 function to GPIO                */
#define SET_GPIO_PB0()              SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB0MFP_Msk)) | SYS_GPB_MFP0_PB0MFP_GPIO)                          /*!< Set PB0 function to GPIO                */
#define SET_GPIO_PB1()              SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB1MFP_Msk)) | SYS_GPB_MFP0_PB1MFP_GPIO)                          /*!< Set PB1 function to GPIO                */
#define SET_GPIO_PB10()             SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB10MFP_Msk)) | SYS_GPB_MFP2_PB10MFP_GPIO)                        /*!< Set PB10 function to GPIO               */
#define SET_GPIO_PB11()             SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB11MFP_Msk)) | SYS_GPB_MFP2_PB11MFP_GPIO)                        /*!< Set PB11 function to GPIO               */
#define SET_GPIO_PB12()             SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB12MFP_Msk)) | SYS_GPB_MFP3_PB12MFP_GPIO)                        /*!< Set PB12 function to GPIO               */
#define SET_GPIO_PB13()             SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB13MFP_Msk)) | SYS_GPB_MFP3_PB13MFP_GPIO)                        /*!< Set PB13 function to GPIO               */
#define SET_GPIO_PB14()             SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB14MFP_Msk)) | SYS_GPB_MFP3_PB14MFP_GPIO)                        /*!< Set PB14 function to GPIO               */
#define SET_GPIO_PB15()             SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB15MFP_Msk)) | SYS_GPB_MFP3_PB15MFP_GPIO)                        /*!< Set PB15 function to GPIO               */
#define SET_GPIO_PB2()              SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB2MFP_Msk)) | SYS_GPB_MFP0_PB2MFP_GPIO)                          /*!< Set PB2 function to GPIO                */
#define SET_GPIO_PB3()              SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB3MFP_Msk)) | SYS_GPB_MFP0_PB3MFP_GPIO)                          /*!< Set PB3 function to GPIO                */
#define SET_GPIO_PB4()              SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB4MFP_Msk)) | SYS_GPB_MFP1_PB4MFP_GPIO)                          /*!< Set PB4 function to GPIO                */
#define SET_GPIO_PB5()              SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB5MFP_Msk)) | SYS_GPB_MFP1_PB5MFP_GPIO)                          /*!< Set PB5 function to GPIO                */
#define SET_GPIO_PB6()              SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB6MFP_Msk)) | SYS_GPB_MFP1_PB6MFP_GPIO)                          /*!< Set PB6 function to GPIO                */
#define SET_GPIO_PB7()              SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB7MFP_Msk)) | SYS_GPB_MFP1_PB7MFP_GPIO)                          /*!< Set PB7 function to GPIO                */
#define SET_GPIO_PB8()              SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB8MFP_Msk)) | SYS_GPB_MFP2_PB8MFP_GPIO)                          /*!< Set PB8 function to GPIO                */
#define SET_GPIO_PB9()              SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB9MFP_Msk)) | SYS_GPB_MFP2_PB9MFP_GPIO)                          /*!< Set PB9 function to GPIO                */
#define SET_GPIO_PC0()              SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC0MFP_Msk)) | SYS_GPC_MFP0_PC0MFP_GPIO)                          /*!< Set PC0 function to GPIO                */
#define SET_GPIO_PC1()              SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC1MFP_Msk)) | SYS_GPC_MFP0_PC1MFP_GPIO)                          /*!< Set PC1 function to GPIO                */
#define SET_GPIO_PC10()             SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC10MFP_Msk)) | SYS_GPC_MFP2_PC10MFP_GPIO)                        /*!< Set PC10 function to GPIO               */
#define SET_GPIO_PC11()             SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC11MFP_Msk)) | SYS_GPC_MFP2_PC11MFP_GPIO)                        /*!< Set PC11 function to GPIO               */
#define SET_GPIO_PC12()             SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC12MFP_Msk)) | SYS_GPC_MFP3_PC12MFP_GPIO)                        /*!< Set PC12 function to GPIO               */
#define SET_GPIO_PC13()             SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC13MFP_Msk)) | SYS_GPC_MFP3_PC13MFP_GPIO)                        /*!< Set PC13 function to GPIO               */
#define SET_GPIO_PC14()             SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC14MFP_Msk)) | SYS_GPC_MFP3_PC14MFP_GPIO)                        /*!< Set PC14 function to GPIO               */
#define SET_GPIO_PC2()              SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC2MFP_Msk)) | SYS_GPC_MFP0_PC2MFP_GPIO)                          /*!< Set PC2 function to GPIO                */
#define SET_GPIO_PC3()              SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC3MFP_Msk)) | SYS_GPC_MFP0_PC3MFP_GPIO)                          /*!< Set PC3 function to GPIO                */
#define SET_GPIO_PC4()              SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC4MFP_Msk)) | SYS_GPC_MFP1_PC4MFP_GPIO)                          /*!< Set PC4 function to GPIO                */
#define SET_GPIO_PC5()              SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC5MFP_Msk)) | SYS_GPC_MFP1_PC5MFP_GPIO)                          /*!< Set PC5 function to GPIO                */
#define SET_GPIO_PC6()              SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC6MFP_Msk)) | SYS_GPC_MFP1_PC6MFP_GPIO)                          /*!< Set PC6 function to GPIO                */
#define SET_GPIO_PC7()              SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC7MFP_Msk)) | SYS_GPC_MFP1_PC7MFP_GPIO)                          /*!< Set PC7 function to GPIO                */
#define SET_GPIO_PC8()              SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC8MFP_Msk)) | SYS_GPC_MFP2_PC8MFP_GPIO)                          /*!< Set PC8 function to GPIO                */
#define SET_GPIO_PC9()              SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC9MFP_Msk)) | SYS_GPC_MFP2_PC9MFP_GPIO)                          /*!< Set PC9 function to GPIO                */
#define SET_GPIO_PD0()              SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD0MFP_Msk)) | SYS_GPD_MFP0_PD0MFP_GPIO)                          /*!< Set PD0 function to GPIO                */
#define SET_GPIO_PD1()              SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD1MFP_Msk)) | SYS_GPD_MFP0_PD1MFP_GPIO)                          /*!< Set PD1 function to GPIO                */
#define SET_GPIO_PD10()             SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD10MFP_Msk)) | SYS_GPD_MFP2_PD10MFP_GPIO)                        /*!< Set PD10 function to GPIO               */
#define SET_GPIO_PD11()             SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD11MFP_Msk)) | SYS_GPD_MFP2_PD11MFP_GPIO)                        /*!< Set PD11 function to GPIO               */
#define SET_GPIO_PD12()             SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SYS_GPD_MFP3_PD12MFP_Msk)) | SYS_GPD_MFP3_PD12MFP_GPIO)                        /*!< Set PD12 function to GPIO               */
#define SET_GPIO_PD13()             SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SYS_GPD_MFP3_PD13MFP_Msk)) | SYS_GPD_MFP3_PD13MFP_GPIO)                        /*!< Set PD13 function to GPIO               */
#define SET_GPIO_PD14()             SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SYS_GPD_MFP3_PD14MFP_Msk)) | SYS_GPD_MFP3_PD14MFP_GPIO)                        /*!< Set PD14 function to GPIO               */
#define SET_GPIO_PD15()             SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SYS_GPD_MFP3_PD15MFP_Msk)) | SYS_GPD_MFP3_PD15MFP_GPIO)                        /*!< Set PD15 function to GPIO               */
#define SET_GPIO_PD2()              SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD2MFP_Msk)) | SYS_GPD_MFP0_PD2MFP_GPIO)                          /*!< Set PD2 function to GPIO                */
#define SET_GPIO_PD3()              SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD3MFP_Msk)) | SYS_GPD_MFP0_PD3MFP_GPIO)                          /*!< Set PD3 function to GPIO                */
#define SET_GPIO_PD4()              SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD4MFP_Msk)) | SYS_GPD_MFP1_PD4MFP_GPIO)                          /*!< Set PD4 function to GPIO                */
#define SET_GPIO_PD5()              SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD5MFP_Msk)) | SYS_GPD_MFP1_PD5MFP_GPIO)                          /*!< Set PD5 function to GPIO                */
#define SET_GPIO_PD6()              SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD6MFP_Msk)) | SYS_GPD_MFP1_PD6MFP_GPIO)                          /*!< Set PD6 function to GPIO                */
#define SET_GPIO_PD7()              SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD7MFP_Msk)) | SYS_GPD_MFP1_PD7MFP_GPIO)                          /*!< Set PD7 function to GPIO                */
#define SET_GPIO_PD8()              SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD8MFP_Msk)) | SYS_GPD_MFP2_PD8MFP_GPIO)                          /*!< Set PD8 function to GPIO                */
#define SET_GPIO_PD9()              SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD9MFP_Msk)) | SYS_GPD_MFP2_PD9MFP_GPIO)                          /*!< Set PD9 function to GPIO                */
#define SET_GPIO_PE0()              SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE0MFP_Msk)) | SYS_GPE_MFP0_PE0MFP_GPIO)                          /*!< Set PE0 function to GPIO                */
#define SET_GPIO_PE1()              SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE1MFP_Msk)) | SYS_GPE_MFP0_PE1MFP_GPIO)                          /*!< Set PE1 function to GPIO                */
#define SET_GPIO_PE10()             SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SYS_GPE_MFP2_PE10MFP_Msk)) | SYS_GPE_MFP2_PE10MFP_GPIO)                        /*!< Set PE10 function to GPIO               */
#define SET_GPIO_PE11()             SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SYS_GPE_MFP2_PE11MFP_Msk)) | SYS_GPE_MFP2_PE11MFP_GPIO)                        /*!< Set PE11 function to GPIO               */
#define SET_GPIO_PE12()             SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~SYS_GPE_MFP3_PE12MFP_Msk)) | SYS_GPE_MFP3_PE12MFP_GPIO)                        /*!< Set PE12 function to GPIO               */
#define SET_GPIO_PE13()             SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~SYS_GPE_MFP3_PE13MFP_Msk)) | SYS_GPE_MFP3_PE13MFP_GPIO)                        /*!< Set PE13 function to GPIO               */
#define SET_GPIO_PE14()             SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~SYS_GPE_MFP3_PE14MFP_Msk)) | SYS_GPE_MFP3_PE14MFP_GPIO)                        /*!< Set PE14 function to GPIO               */
#define SET_GPIO_PE15()             SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~SYS_GPE_MFP3_PE15MFP_Msk)) | SYS_GPE_MFP3_PE15MFP_GPIO)                        /*!< Set PE15 function to GPIO               */
#define SET_GPIO_PE2()              SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE2MFP_Msk)) | SYS_GPE_MFP0_PE2MFP_GPIO)                          /*!< Set PE2 function to GPIO                */
#define SET_GPIO_PE3()              SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE3MFP_Msk)) | SYS_GPE_MFP0_PE3MFP_GPIO)                          /*!< Set PE3 function to GPIO                */
#define SET_GPIO_PE4()              SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE4MFP_Msk)) | SYS_GPE_MFP1_PE4MFP_GPIO)                          /*!< Set PE4 function to GPIO                */
#define SET_GPIO_PE5()              SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE5MFP_Msk)) | SYS_GPE_MFP1_PE5MFP_GPIO)                          /*!< Set PE5 function to GPIO                */
#define SET_GPIO_PE6()              SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE6MFP_Msk)) | SYS_GPE_MFP1_PE6MFP_GPIO)                          /*!< Set PE6 function to GPIO                */
#define SET_GPIO_PE7()              SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE7MFP_Msk)) | SYS_GPE_MFP1_PE7MFP_GPIO)                          /*!< Set PE7 function to GPIO                */
#define SET_GPIO_PE8()              SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SYS_GPE_MFP2_PE8MFP_Msk)) | SYS_GPE_MFP2_PE8MFP_GPIO)                          /*!< Set PE8 function to GPIO                */
#define SET_GPIO_PE9()              SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SYS_GPE_MFP2_PE9MFP_Msk)) | SYS_GPE_MFP2_PE9MFP_GPIO)                          /*!< Set PE9 function to GPIO                */
#define SET_GPIO_PF0()              SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF0MFP_Msk)) | SYS_GPF_MFP0_PF0MFP_GPIO)                          /*!< Set PF0 function to GPIO                */
#define SET_GPIO_PF1()              SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF1MFP_Msk)) | SYS_GPF_MFP0_PF1MFP_GPIO)                          /*!< Set PF1 function to GPIO                */
#define SET_GPIO_PF10()             SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SYS_GPF_MFP2_PF10MFP_Msk)) | SYS_GPF_MFP2_PF10MFP_GPIO)                        /*!< Set PF10 function to GPIO               */
#define SET_GPIO_PF11()             SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SYS_GPF_MFP2_PF11MFP_Msk)) | SYS_GPF_MFP2_PF11MFP_GPIO)                        /*!< Set PF11 function to GPIO               */
#define SET_GPIO_PF14()             SYS->GPF_MFP3 = ((SYS->GPF_MFP3 & (~SYS_GPF_MFP3_PF14MFP_Msk)) | SYS_GPF_MFP3_PF14MFP_GPIO)                        /*!< Set PF14 function to GPIO               */
#define SET_GPIO_PF2()              SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF2MFP_Msk)) | SYS_GPF_MFP0_PF2MFP_GPIO)                          /*!< Set PF2 function to GPIO                */
#define SET_GPIO_PF3()              SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF3MFP_Msk)) | SYS_GPF_MFP0_PF3MFP_GPIO)                          /*!< Set PF3 function to GPIO                */
#define SET_GPIO_PF4()              SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF4MFP_Msk)) | SYS_GPF_MFP1_PF4MFP_GPIO)                          /*!< Set PF4 function to GPIO                */
#define SET_GPIO_PF5()              SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF5MFP_Msk)) | SYS_GPF_MFP1_PF5MFP_GPIO)                          /*!< Set PF5 function to GPIO                */
#define SET_GPIO_PF6()              SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF6MFP_Msk)) | SYS_GPF_MFP1_PF6MFP_GPIO)                          /*!< Set PF6 function to GPIO                */
#define SET_GPIO_PF7()              SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF7MFP_Msk)) | SYS_GPF_MFP1_PF7MFP_GPIO)                          /*!< Set PF7 function to GPIO                */
#define SET_GPIO_PF8()              SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SYS_GPF_MFP2_PF8MFP_Msk)) | SYS_GPF_MFP2_PF8MFP_GPIO)                          /*!< Set PF8 function to GPIO                */
#define SET_GPIO_PF9()              SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SYS_GPF_MFP2_PF9MFP_Msk)) | SYS_GPF_MFP2_PF9MFP_GPIO)                          /*!< Set PF9 function to GPIO                */
#define SET_GPIO_PG10()             SYS->GPG_MFP2 = ((SYS->GPG_MFP2 & (~SYS_GPG_MFP2_PG10MFP_Msk)) | SYS_GPG_MFP2_PG10MFP_GPIO)                        /*!< Set PG10 function to GPIO               */
#define SET_GPIO_PG11()             SYS->GPG_MFP2 = ((SYS->GPG_MFP2 & (~SYS_GPG_MFP2_PG11MFP_Msk)) | SYS_GPG_MFP2_PG11MFP_GPIO)                        /*!< Set PG11 function to GPIO               */
#define SET_GPIO_PG12()             SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~SYS_GPG_MFP3_PG12MFP_Msk)) | SYS_GPG_MFP3_PG12MFP_GPIO)                        /*!< Set PG12 function to GPIO               */
#define SET_GPIO_PG13()             SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~SYS_GPG_MFP3_PG13MFP_Msk)) | SYS_GPG_MFP3_PG13MFP_GPIO)                        /*!< Set PG13 function to GPIO               */
#define SET_GPIO_PG14()             SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~SYS_GPG_MFP3_PG14MFP_Msk)) | SYS_GPG_MFP3_PG14MFP_GPIO)                        /*!< Set PG14 function to GPIO               */
#define SET_GPIO_PG15()             SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~SYS_GPG_MFP3_PG15MFP_Msk)) | SYS_GPG_MFP3_PG15MFP_GPIO)                        /*!< Set PG15 function to GPIO               */
#define SET_GPIO_PG2()              SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~SYS_GPG_MFP0_PG2MFP_Msk)) | SYS_GPG_MFP0_PG2MFP_GPIO)                          /*!< Set PG2 function to GPIO                */
#define SET_GPIO_PG3()              SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~SYS_GPG_MFP0_PG3MFP_Msk)) | SYS_GPG_MFP0_PG3MFP_GPIO)                          /*!< Set PG3 function to GPIO                */
#define SET_GPIO_PG4()              SYS->GPG_MFP1 = ((SYS->GPG_MFP1 & (~SYS_GPG_MFP1_PG4MFP_Msk)) | SYS_GPG_MFP1_PG4MFP_GPIO)                          /*!< Set PG4 function to GPIO                */
#define SET_GPIO_PG9()              SYS->GPG_MFP2 = ((SYS->GPG_MFP2 & (~SYS_GPG_MFP2_PG9MFP_Msk)) | SYS_GPG_MFP2_PG9MFP_GPIO)                          /*!< Set PG9 function to GPIO                */
#define SET_GPIO_PH10()             SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH10MFP_Msk)) | SYS_GPH_MFP2_PH10MFP_GPIO)                        /*!< Set PH10 function to GPIO               */
#define SET_GPIO_PH11()             SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH11MFP_Msk)) | SYS_GPH_MFP2_PH11MFP_GPIO)                        /*!< Set PH11 function to GPIO               */
#define SET_GPIO_PH4()              SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SYS_GPH_MFP1_PH4MFP_Msk)) | SYS_GPH_MFP1_PH4MFP_GPIO)                          /*!< Set PH4 function to GPIO                */
#define SET_GPIO_PH5()              SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SYS_GPH_MFP1_PH5MFP_Msk)) | SYS_GPH_MFP1_PH5MFP_GPIO)                          /*!< Set PH5 function to GPIO                */
#define SET_GPIO_PH6()              SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SYS_GPH_MFP1_PH6MFP_Msk)) | SYS_GPH_MFP1_PH6MFP_GPIO)                          /*!< Set PH6 function to GPIO                */
#define SET_GPIO_PH7()              SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SYS_GPH_MFP1_PH7MFP_Msk)) | SYS_GPH_MFP1_PH7MFP_GPIO)                          /*!< Set PH7 function to GPIO                */
#define SET_GPIO_PH8()              SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH8MFP_Msk)) | SYS_GPH_MFP2_PH8MFP_GPIO)                          /*!< Set PH8 function to GPIO                */
#define SET_GPIO_PH9()              SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH9MFP_Msk)) | SYS_GPH_MFP2_PH9MFP_GPIO)                          /*!< Set PH9 function to GPIO                */
#define SET_I2C0_SCL_PA5()          SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA5MFP_Msk)) | SYS_GPA_MFP1_PA5MFP_I2C0_SCL)                      /*!< Set PA5 function to I2C0_SCL            */
#define SET_I2C0_SCL_PB5()          SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB5MFP_Msk)) | SYS_GPB_MFP1_PB5MFP_I2C0_SCL)                      /*!< Set PB5 function to I2C0_SCL            */
#define SET_I2C0_SCL_PB9()          SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB9MFP_Msk)) | SYS_GPB_MFP2_PB9MFP_I2C0_SCL)                      /*!< Set PB9 function to I2C0_SCL            */
#define SET_I2C0_SCL_PC1()          SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC1MFP_Msk)) | SYS_GPC_MFP0_PC1MFP_I2C0_SCL)                      /*!< Set PC1 function to I2C0_SCL            */
#define SET_I2C0_SCL_PC12()         SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC12MFP_Msk)) | SYS_GPC_MFP3_PC12MFP_I2C0_SCL)                    /*!< Set PC12 function to I2C0_SCL           */
#define SET_I2C0_SCL_PD7()          SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD7MFP_Msk)) | SYS_GPD_MFP1_PD7MFP_I2C0_SCL)                      /*!< Set PD7 function to I2C0_SCL            */
#define SET_I2C0_SCL_PE13()         SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~SYS_GPE_MFP3_PE13MFP_Msk)) | SYS_GPE_MFP3_PE13MFP_I2C0_SCL)                    /*!< Set PE13 function to I2C0_SCL           */
#define SET_I2C0_SCL_PF0()          SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF0MFP_Msk)) | SYS_GPF_MFP0_PF0MFP_I2C0_SCL)                      /*!< Set PF0 function to I2C0_SCL            */
#define SET_I2C0_SCL_PF3()          SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF3MFP_Msk)) | SYS_GPF_MFP0_PF3MFP_I2C0_SCL)                      /*!< Set PF3 function to I2C0_SCL            */
#define SET_I2C0_SDA_PA4()          SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA4MFP_Msk)) | SYS_GPA_MFP1_PA4MFP_I2C0_SDA)                      /*!< Set PA4 function to I2C0_SDA            */
#define SET_I2C0_SDA_PB4()          SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB4MFP_Msk)) | SYS_GPB_MFP1_PB4MFP_I2C0_SDA)                      /*!< Set PB4 function to I2C0_SDA            */
#define SET_I2C0_SDA_PB8()          SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB8MFP_Msk)) | SYS_GPB_MFP2_PB8MFP_I2C0_SDA)                      /*!< Set PB8 function to I2C0_SDA            */
#define SET_I2C0_SDA_PC0()          SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC0MFP_Msk)) | SYS_GPC_MFP0_PC0MFP_I2C0_SDA)                      /*!< Set PC0 function to I2C0_SDA            */
#define SET_I2C0_SDA_PC11()         SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC11MFP_Msk)) | SYS_GPC_MFP2_PC11MFP_I2C0_SDA)                    /*!< Set PC11 function to I2C0_SDA           */
#define SET_I2C0_SDA_PC8()          SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC8MFP_Msk)) | SYS_GPC_MFP2_PC8MFP_I2C0_SDA)                      /*!< Set PC8 function to I2C0_SDA            */
#define SET_I2C0_SDA_PD6()          SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD6MFP_Msk)) | SYS_GPD_MFP1_PD6MFP_I2C0_SDA)                      /*!< Set PD6 function to I2C0_SDA            */
#define SET_I2C0_SDA_PF1()          SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF1MFP_Msk)) | SYS_GPF_MFP0_PF1MFP_I2C0_SDA)                      /*!< Set PF1 function to I2C0_SDA            */
#define SET_I2C0_SDA_PF2()          SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF2MFP_Msk)) | SYS_GPF_MFP0_PF2MFP_I2C0_SDA)                      /*!< Set PF2 function to I2C0_SDA            */
#define SET_I2C0_SMBAL_PA3()        SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA3MFP_Msk)) | SYS_GPA_MFP0_PA3MFP_I2C0_SMBAL)                    /*!< Set PA3 function to I2C0_SMBAL          */
#define SET_I2C0_SMBAL_PC3()        SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC3MFP_Msk)) | SYS_GPC_MFP0_PC3MFP_I2C0_SMBAL)                    /*!< Set PC3 function to I2C0_SMBAL          */
#define SET_I2C0_SMBAL_PG2()        SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~SYS_GPG_MFP0_PG2MFP_Msk)) | SYS_GPG_MFP0_PG2MFP_I2C0_SMBAL)                    /*!< Set PG2 function to I2C0_SMBAL          */
#define SET_I2C0_SMBSUS_PA2()       SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA2MFP_Msk)) | SYS_GPA_MFP0_PA2MFP_I2C0_SMBSUS)                   /*!< Set PA2 function to I2C0_SMBSUS         */
#define SET_I2C0_SMBSUS_PC2()       SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC2MFP_Msk)) | SYS_GPC_MFP0_PC2MFP_I2C0_SMBSUS)                   /*!< Set PC2 function to I2C0_SMBSUS         */
#define SET_I2C0_SMBSUS_PG3()       SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~SYS_GPG_MFP0_PG3MFP_Msk)) | SYS_GPG_MFP0_PG3MFP_I2C0_SMBSUS)                   /*!< Set PG3 function to I2C0_SMBSUS         */
#define SET_I2C1_SCL_PA12()         SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA12MFP_Msk)) | SYS_GPA_MFP3_PA12MFP_I2C1_SCL)                    /*!< Set PA12 function to I2C1_SCL           */
#define SET_I2C1_SCL_PA3()          SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA3MFP_Msk)) | SYS_GPA_MFP0_PA3MFP_I2C1_SCL)                      /*!< Set PA3 function to I2C1_SCL            */
#define SET_I2C1_SCL_PA7()          SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA7MFP_Msk)) | SYS_GPA_MFP1_PA7MFP_I2C1_SCL)                      /*!< Set PA7 function to I2C1_SCL            */
#define SET_I2C1_SCL_PB1()          SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB1MFP_Msk)) | SYS_GPB_MFP0_PB1MFP_I2C1_SCL)                      /*!< Set PB1 function to I2C1_SCL            */
#define SET_I2C1_SCL_PB11()         SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB11MFP_Msk)) | SYS_GPB_MFP2_PB11MFP_I2C1_SCL)                    /*!< Set PB11 function to I2C1_SCL           */
#define SET_I2C1_SCL_PB3()          SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB3MFP_Msk)) | SYS_GPB_MFP0_PB3MFP_I2C1_SCL)                      /*!< Set PB3 function to I2C1_SCL            */
#define SET_I2C1_SCL_PC5()          SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC5MFP_Msk)) | SYS_GPC_MFP1_PC5MFP_I2C1_SCL)                      /*!< Set PC5 function to I2C1_SCL            */
#define SET_I2C1_SCL_PD5()          SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD5MFP_Msk)) | SYS_GPD_MFP1_PD5MFP_I2C1_SCL)                      /*!< Set PD5 function to I2C1_SCL            */
#define SET_I2C1_SCL_PE1()          SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE1MFP_Msk)) | SYS_GPE_MFP0_PE1MFP_I2C1_SCL)                      /*!< Set PE1 function to I2C1_SCL            */
#define SET_I2C1_SCL_PF0()          SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF0MFP_Msk)) | SYS_GPF_MFP0_PF0MFP_I2C1_SCL)                      /*!< Set PF0 function to I2C1_SCL            */
#define SET_I2C1_SCL_PG2()          SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~SYS_GPG_MFP0_PG2MFP_Msk)) | SYS_GPG_MFP0_PG2MFP_I2C1_SCL)                      /*!< Set PG2 function to I2C1_SCL            */
#define SET_I2C1_SDA_PA13()         SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA13MFP_Msk)) | SYS_GPA_MFP3_PA13MFP_I2C1_SDA)                    /*!< Set PA13 function to I2C1_SDA           */
#define SET_I2C1_SDA_PA2()          SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA2MFP_Msk)) | SYS_GPA_MFP0_PA2MFP_I2C1_SDA)                      /*!< Set PA2 function to I2C1_SDA            */
#define SET_I2C1_SDA_PA6()          SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA6MFP_Msk)) | SYS_GPA_MFP1_PA6MFP_I2C1_SDA)                      /*!< Set PA6 function to I2C1_SDA            */
#define SET_I2C1_SDA_PB0()          SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB0MFP_Msk)) | SYS_GPB_MFP0_PB0MFP_I2C1_SDA)                      /*!< Set PB0 function to I2C1_SDA            */
#define SET_I2C1_SDA_PB10()         SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB10MFP_Msk)) | SYS_GPB_MFP2_PB10MFP_I2C1_SDA)                    /*!< Set PB10 function to I2C1_SDA           */
#define SET_I2C1_SDA_PB2()          SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB2MFP_Msk)) | SYS_GPB_MFP0_PB2MFP_I2C1_SDA)                      /*!< Set PB2 function to I2C1_SDA            */
#define SET_I2C1_SDA_PC4()          SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC4MFP_Msk)) | SYS_GPC_MFP1_PC4MFP_I2C1_SDA)                      /*!< Set PC4 function to I2C1_SDA            */
#define SET_I2C1_SDA_PD4()          SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD4MFP_Msk)) | SYS_GPD_MFP1_PD4MFP_I2C1_SDA)                      /*!< Set PD4 function to I2C1_SDA            */
#define SET_I2C1_SDA_PE0()          SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE0MFP_Msk)) | SYS_GPE_MFP0_PE0MFP_I2C1_SDA)                      /*!< Set PE0 function to I2C1_SDA            */
#define SET_I2C1_SDA_PF1()          SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF1MFP_Msk)) | SYS_GPF_MFP0_PF1MFP_I2C1_SDA)                      /*!< Set PF1 function to I2C1_SDA            */
#define SET_I2C1_SDA_PG3()          SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~SYS_GPG_MFP0_PG3MFP_Msk)) | SYS_GPG_MFP0_PG3MFP_I2C1_SDA)                      /*!< Set PG3 function to I2C1_SDA            */
#define SET_I2C1_SMBAL_PH8()        SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH8MFP_Msk)) | SYS_GPH_MFP2_PH8MFP_I2C1_SMBAL)                    /*!< Set PH8 function to I2C1_SMBAL          */
#define SET_I2C1_SMBSUS_PH9()       SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH9MFP_Msk)) | SYS_GPH_MFP2_PH9MFP_I2C1_SMBSUS)                   /*!< Set PH9 function to I2C1_SMBSUS         */
#define SET_I2C2_SCL_PA1()          SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA1MFP_Msk)) | SYS_GPA_MFP0_PA1MFP_I2C2_SCL)                      /*!< Set PA1 function to I2C2_SCL            */
#define SET_I2C2_SCL_PA11()         SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA11MFP_Msk)) | SYS_GPA_MFP2_PA11MFP_I2C2_SCL)                    /*!< Set PA11 function to I2C2_SCL           */
#define SET_I2C2_SCL_PA14()         SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA14MFP_Msk)) | SYS_GPA_MFP3_PA14MFP_I2C2_SCL)                    /*!< Set PA14 function to I2C2_SCL           */
#define SET_I2C2_SCL_PB13()         SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB13MFP_Msk)) | SYS_GPB_MFP3_PB13MFP_I2C2_SCL)                    /*!< Set PB13 function to I2C2_SCL           */
#define SET_I2C2_SCL_PD1()          SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD1MFP_Msk)) | SYS_GPD_MFP0_PD1MFP_I2C2_SCL)                      /*!< Set PD1 function to I2C2_SCL            */
#define SET_I2C2_SCL_PD9()          SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD9MFP_Msk)) | SYS_GPD_MFP2_PD9MFP_I2C2_SCL)                      /*!< Set PD9 function to I2C2_SCL            */
#define SET_I2C2_SCL_PH8()          SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH8MFP_Msk)) | SYS_GPH_MFP2_PH8MFP_I2C2_SCL)                      /*!< Set PH8 function to I2C2_SCL            */
#define SET_I2C2_SDA_PA0()          SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA0MFP_Msk)) | SYS_GPA_MFP0_PA0MFP_I2C2_SDA)                      /*!< Set PA0 function to I2C2_SDA            */
#define SET_I2C2_SDA_PA10()         SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA10MFP_Msk)) | SYS_GPA_MFP2_PA10MFP_I2C2_SDA)                    /*!< Set PA10 function to I2C2_SDA           */
#define SET_I2C2_SDA_PA15()         SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA15MFP_Msk)) | SYS_GPA_MFP3_PA15MFP_I2C2_SDA)                    /*!< Set PA15 function to I2C2_SDA           */
#define SET_I2C2_SDA_PB12()         SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB12MFP_Msk)) | SYS_GPB_MFP3_PB12MFP_I2C2_SDA)                    /*!< Set PB12 function to I2C2_SDA           */
#define SET_I2C2_SDA_PD0()          SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD0MFP_Msk)) | SYS_GPD_MFP0_PD0MFP_I2C2_SDA)                      /*!< Set PD0 function to I2C2_SDA            */
#define SET_I2C2_SDA_PD8()          SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD8MFP_Msk)) | SYS_GPD_MFP2_PD8MFP_I2C2_SDA)                      /*!< Set PD8 function to I2C2_SDA            */
#define SET_I2C2_SDA_PH9()          SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH9MFP_Msk)) | SYS_GPH_MFP2_PH9MFP_I2C2_SDA)                      /*!< Set PH9 function to I2C2_SDA            */
#define SET_I3C0_PUPEN_PA2()        SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA2MFP_Msk)) | SYS_GPA_MFP0_PA2MFP_I3C0_PUPEN)                    /*!< Set PA2 function to I3C0_PUPEN          */
#define SET_I3C0_PUPEN_PC5()        SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC5MFP_Msk)) | SYS_GPC_MFP1_PC5MFP_I3C0_PUPEN)                    /*!< Set PC5 function to I3C0_PUPEN          */
#define SET_I3C0_SCL_PA1()          SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA1MFP_Msk)) | SYS_GPA_MFP0_PA1MFP_I3C0_SCL)                      /*!< Set PA1 function to I3C0_SCL            */
#define SET_I3C0_SCL_PA5()          SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA5MFP_Msk)) | SYS_GPA_MFP1_PA5MFP_I3C0_SCL)                      /*!< Set PA5 function to I3C0_SCL            */
#define SET_I3C0_SCL_PB1()          SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB1MFP_Msk)) | SYS_GPB_MFP0_PB1MFP_I3C0_SCL)                      /*!< Set PB1 function to I3C0_SCL            */
#define SET_I3C0_SCL_PF0()          SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF0MFP_Msk)) | SYS_GPF_MFP0_PF0MFP_I3C0_SCL)                      /*!< Set PF0 function to I3C0_SCL            */
#define SET_I3C0_SDA_PA0()          SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA0MFP_Msk)) | SYS_GPA_MFP0_PA0MFP_I3C0_SDA)                      /*!< Set PA0 function to I3C0_SDA            */
#define SET_I3C0_SDA_PA4()          SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA4MFP_Msk)) | SYS_GPA_MFP1_PA4MFP_I3C0_SDA)                      /*!< Set PA4 function to I3C0_SDA            */
#define SET_I3C0_SDA_PB0()          SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB0MFP_Msk)) | SYS_GPB_MFP0_PB0MFP_I3C0_SDA)                      /*!< Set PB0 function to I3C0_SDA            */
#define SET_I3C0_SDA_PF1()          SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF1MFP_Msk)) | SYS_GPF_MFP0_PF1MFP_I3C0_SDA)                      /*!< Set PF1 function to I3C0_SDA            */
#define SET_ICE_CLK_PF1()           SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF1MFP_Msk)) | SYS_GPF_MFP0_PF1MFP_ICE_CLK)                       /*!< Set PF1 function to ICE_CLK             */
#define SET_ICE_DAT_PF0()           SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF0MFP_Msk)) | SYS_GPF_MFP0_PF0MFP_ICE_DAT)                       /*!< Set PF0 function to ICE_DAT             */
#define SET_INT0_PA6()              SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA6MFP_Msk)) | SYS_GPA_MFP1_PA6MFP_INT0)                          /*!< Set PA6 function to INT0                */
#define SET_INT0_PB5()              SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB5MFP_Msk)) | SYS_GPB_MFP1_PB5MFP_INT0)                          /*!< Set PB5 function to INT0                */
#define SET_INT1_PA7()              SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA7MFP_Msk)) | SYS_GPA_MFP1_PA7MFP_INT1)                          /*!< Set PA7 function to INT1                */
#define SET_INT1_PB4()              SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB4MFP_Msk)) | SYS_GPB_MFP1_PB4MFP_INT1)                          /*!< Set PB4 function to INT1                */
#define SET_INT2_PB3()              SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB3MFP_Msk)) | SYS_GPB_MFP0_PB3MFP_INT2)                          /*!< Set PB3 function to INT2                */
#define SET_INT2_PC6()              SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC6MFP_Msk)) | SYS_GPC_MFP1_PC6MFP_INT2)                          /*!< Set PC6 function to INT2                */
#define SET_INT3_PB2()              SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB2MFP_Msk)) | SYS_GPB_MFP0_PB2MFP_INT3)                          /*!< Set PB2 function to INT3                */
#define SET_INT3_PC7()              SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC7MFP_Msk)) | SYS_GPC_MFP1_PC7MFP_INT3)                          /*!< Set PC7 function to INT3                */
#define SET_INT4_PA8()              SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA8MFP_Msk)) | SYS_GPA_MFP2_PA8MFP_INT4)                          /*!< Set PA8 function to INT4                */
#define SET_INT4_PB6()              SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB6MFP_Msk)) | SYS_GPB_MFP1_PB6MFP_INT4)                          /*!< Set PB6 function to INT4                */
#define SET_INT5_PB7()              SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB7MFP_Msk)) | SYS_GPB_MFP1_PB7MFP_INT5)                          /*!< Set PB7 function to INT5                */
#define SET_INT5_PD12()             SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SYS_GPD_MFP3_PD12MFP_Msk)) | SYS_GPD_MFP3_PD12MFP_INT5)                        /*!< Set PD12 function to INT5               */
#define SET_INT6_PD11()             SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD11MFP_Msk)) | SYS_GPD_MFP2_PD11MFP_INT6)                        /*!< Set PD11 function to INT6               */
#define SET_INT7_PD10()             SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD10MFP_Msk)) | SYS_GPD_MFP2_PD10MFP_INT7)                        /*!< Set PD10 function to INT7               */
#define SET_LLSI0_OUT_PB15()        SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB15MFP_Msk)) | SYS_GPB_MFP3_PB15MFP_LLSI0_OUT)                   /*!< Set PB15 function to LLSI0_OUT          */
#define SET_LLSI0_OUT_PC5()         SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC5MFP_Msk)) | SYS_GPC_MFP1_PC5MFP_LLSI0_OUT)                     /*!< Set PC5 function to LLSI0_OUT           */
#define SET_LLSI1_OUT_PB14()        SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB14MFP_Msk)) | SYS_GPB_MFP3_PB14MFP_LLSI1_OUT)                   /*!< Set PB14 function to LLSI1_OUT          */
#define SET_LLSI1_OUT_PC4()         SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC4MFP_Msk)) | SYS_GPC_MFP1_PC4MFP_LLSI1_OUT)                     /*!< Set PC4 function to LLSI1_OUT           */
#define SET_LLSI2_OUT_PB13()        SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB13MFP_Msk)) | SYS_GPB_MFP3_PB13MFP_LLSI2_OUT)                   /*!< Set PB13 function to LLSI2_OUT          */
#define SET_LLSI2_OUT_PC3()         SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC3MFP_Msk)) | SYS_GPC_MFP0_PC3MFP_LLSI2_OUT)                     /*!< Set PC3 function to LLSI2_OUT           */
#define SET_LLSI3_OUT_PC2()         SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC2MFP_Msk)) | SYS_GPC_MFP0_PC2MFP_LLSI3_OUT)                     /*!< Set PC2 function to LLSI3_OUT           */
#define SET_LLSI3_OUT_PF14()        SYS->GPF_MFP3 = ((SYS->GPF_MFP3 & (~SYS_GPF_MFP3_PF14MFP_Msk)) | SYS_GPF_MFP3_PF14MFP_LLSI3_OUT)                   /*!< Set PF14 function to LLSI3_OUT          */
#define SET_LLSI4_OUT_PA3()         SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA3MFP_Msk)) | SYS_GPA_MFP0_PA3MFP_LLSI4_OUT)                     /*!< Set PA3 function to LLSI4_OUT           */
#define SET_LLSI4_OUT_PB5()         SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB5MFP_Msk)) | SYS_GPB_MFP1_PB5MFP_LLSI4_OUT)                     /*!< Set PB5 function to LLSI4_OUT           */
#define SET_LLSI5_OUT_PA2()         SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA2MFP_Msk)) | SYS_GPA_MFP0_PA2MFP_LLSI5_OUT)                     /*!< Set PA2 function to LLSI5_OUT           */
#define SET_LLSI5_OUT_PB4()         SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB4MFP_Msk)) | SYS_GPB_MFP1_PB4MFP_LLSI5_OUT)                     /*!< Set PB4 function to LLSI5_OUT           */
#define SET_LLSI6_OUT_PA1()         SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA1MFP_Msk)) | SYS_GPA_MFP0_PA1MFP_LLSI6_OUT)                     /*!< Set PA1 function to LLSI6_OUT           */
#define SET_LLSI6_OUT_PB3()         SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB3MFP_Msk)) | SYS_GPB_MFP0_PB3MFP_LLSI6_OUT)                     /*!< Set PB3 function to LLSI6_OUT           */
#define SET_LLSI7_OUT_PB2()         SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB2MFP_Msk)) | SYS_GPB_MFP0_PB2MFP_LLSI7_OUT)                     /*!< Set PB2 function to LLSI7_OUT           */
#define SET_LLSI7_OUT_PC2()         SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC2MFP_Msk)) | SYS_GPC_MFP0_PC2MFP_LLSI7_OUT)                     /*!< Set PC2 function to LLSI7_OUT           */
#define SET_LLSI7_OUT_PD15()        SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SYS_GPD_MFP3_PD15MFP_Msk)) | SYS_GPD_MFP3_PD15MFP_LLSI7_OUT)                   /*!< Set PD15 function to LLSI7_OUT          */
#define SET_LLSI8_OUT_PB11()        SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB11MFP_Msk)) | SYS_GPB_MFP2_PB11MFP_LLSI8_OUT)                   /*!< Set PB11 function to LLSI8_OUT          */
#define SET_LLSI8_OUT_PC1()         SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC1MFP_Msk)) | SYS_GPC_MFP0_PC1MFP_LLSI8_OUT)                     /*!< Set PC1 function to LLSI8_OUT           */
#define SET_LLSI9_OUT_PB10()        SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB10MFP_Msk)) | SYS_GPB_MFP2_PB10MFP_LLSI9_OUT)                   /*!< Set PB10 function to LLSI9_OUT          */
#define SET_LLSI9_OUT_PC0()         SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC0MFP_Msk)) | SYS_GPC_MFP0_PC0MFP_LLSI9_OUT)                     /*!< Set PC0 function to LLSI9_OUT           */
#define SET_PWM0_BRAKE0_PB1()       SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB1MFP_Msk)) | SYS_GPB_MFP0_PB1MFP_PWM0_BRAKE0)                   /*!< Set PB1 function to PWM0_BRAKE0         */
#define SET_PWM0_BRAKE1_PA11()      SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA11MFP_Msk)) | SYS_GPA_MFP2_PA11MFP_PWM0_BRAKE1)                 /*!< Set PA11 function to PWM0_BRAKE1        */
#define SET_PWM0_BRAKE1_PB0()       SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB0MFP_Msk)) | SYS_GPB_MFP0_PB0MFP_PWM0_BRAKE1)                   /*!< Set PB0 function to PWM0_BRAKE1         */
#define SET_PWM0_BRAKE1_PB15()      SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB15MFP_Msk)) | SYS_GPB_MFP3_PB15MFP_PWM0_BRAKE1)                 /*!< Set PB15 function to PWM0_BRAKE1        */
#define SET_PWM0_CH0_PA5()          SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA5MFP_Msk)) | SYS_GPA_MFP1_PA5MFP_PWM0_CH0)                      /*!< Set PA5 function to PWM0_CH0            */
#define SET_PWM0_CH0_PB5()          SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB5MFP_Msk)) | SYS_GPB_MFP1_PB5MFP_PWM0_CH0)                      /*!< Set PB5 function to PWM0_CH0            */
#define SET_PWM0_CH0_PF5()          SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF5MFP_Msk)) | SYS_GPF_MFP1_PF5MFP_PWM0_CH0)                      /*!< Set PF5 function to PWM0_CH0            */
#define SET_PWM0_CH1_PA4()          SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA4MFP_Msk)) | SYS_GPA_MFP1_PA4MFP_PWM0_CH1)                      /*!< Set PA4 function to PWM0_CH1            */
#define SET_PWM0_CH1_PB4()          SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB4MFP_Msk)) | SYS_GPB_MFP1_PB4MFP_PWM0_CH1)                      /*!< Set PB4 function to PWM0_CH1            */
#define SET_PWM0_CH1_PF4()          SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF4MFP_Msk)) | SYS_GPF_MFP1_PF4MFP_PWM0_CH1)                      /*!< Set PF4 function to PWM0_CH1            */
#define SET_PWM0_CH2_PA3()          SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA3MFP_Msk)) | SYS_GPA_MFP0_PA3MFP_PWM0_CH2)                      /*!< Set PA3 function to PWM0_CH2            */
#define SET_PWM0_CH2_PB3()          SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB3MFP_Msk)) | SYS_GPB_MFP0_PB3MFP_PWM0_CH2)                      /*!< Set PB3 function to PWM0_CH2            */
#define SET_PWM0_CH3_PA2()          SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA2MFP_Msk)) | SYS_GPA_MFP0_PA2MFP_PWM0_CH3)                      /*!< Set PA2 function to PWM0_CH3            */
#define SET_PWM0_CH3_PB2()          SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB2MFP_Msk)) | SYS_GPB_MFP0_PB2MFP_PWM0_CH3)                      /*!< Set PB2 function to PWM0_CH3            */
#define SET_PWM0_CH4_PA1()          SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA1MFP_Msk)) | SYS_GPA_MFP0_PA1MFP_PWM0_CH4)                      /*!< Set PA1 function to PWM0_CH4            */
#define SET_PWM0_CH4_PB1()          SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB1MFP_Msk)) | SYS_GPB_MFP0_PB1MFP_PWM0_CH4)                      /*!< Set PB1 function to PWM0_CH4            */
#define SET_PWM0_CH5_PA0()          SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA0MFP_Msk)) | SYS_GPA_MFP0_PA0MFP_PWM0_CH5)                      /*!< Set PA0 function to PWM0_CH5            */
#define SET_PWM0_CH5_PB0()          SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB0MFP_Msk)) | SYS_GPB_MFP0_PB0MFP_PWM0_CH5)                      /*!< Set PB0 function to PWM0_CH5            */
#define SET_PWM1_BRAKE0_PB7()       SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB7MFP_Msk)) | SYS_GPB_MFP1_PB7MFP_PWM1_BRAKE0)                   /*!< Set PB7 function to PWM1_BRAKE0         */
#define SET_PWM1_BRAKE1_PA3()       SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA3MFP_Msk)) | SYS_GPA_MFP0_PA3MFP_PWM1_BRAKE1)                   /*!< Set PA3 function to PWM1_BRAKE1         */
#define SET_PWM1_BRAKE1_PB6()       SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB6MFP_Msk)) | SYS_GPB_MFP1_PB6MFP_PWM1_BRAKE1)                   /*!< Set PB6 function to PWM1_BRAKE1         */
#define SET_PWM1_CH0_PB15()         SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB15MFP_Msk)) | SYS_GPB_MFP3_PB15MFP_PWM1_CH0)                    /*!< Set PB15 function to PWM1_CH0           */
#define SET_PWM1_CH0_PC5()          SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC5MFP_Msk)) | SYS_GPC_MFP1_PC5MFP_PWM1_CH0)                      /*!< Set PC5 function to PWM1_CH0            */
#define SET_PWM1_CH0_PF3()          SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF3MFP_Msk)) | SYS_GPF_MFP0_PF3MFP_PWM1_CH0)                      /*!< Set PF3 function to PWM1_CH0            */
#define SET_PWM1_CH1_PB14()         SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB14MFP_Msk)) | SYS_GPB_MFP3_PB14MFP_PWM1_CH1)                    /*!< Set PB14 function to PWM1_CH1           */
#define SET_PWM1_CH1_PC4()          SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC4MFP_Msk)) | SYS_GPC_MFP1_PC4MFP_PWM1_CH1)                      /*!< Set PC4 function to PWM1_CH1            */
#define SET_PWM1_CH1_PF2()          SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF2MFP_Msk)) | SYS_GPF_MFP0_PF2MFP_PWM1_CH1)                      /*!< Set PF2 function to PWM1_CH1            */
#define SET_PWM1_CH2_PB13()         SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB13MFP_Msk)) | SYS_GPB_MFP3_PB13MFP_PWM1_CH2)                    /*!< Set PB13 function to PWM1_CH2           */
#define SET_PWM1_CH2_PC3()          SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC3MFP_Msk)) | SYS_GPC_MFP0_PC3MFP_PWM1_CH2)                      /*!< Set PC3 function to PWM1_CH2            */
#define SET_PWM1_CH2_PC7()          SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC7MFP_Msk)) | SYS_GPC_MFP1_PC7MFP_PWM1_CH2)                      /*!< Set PC7 function to PWM1_CH2            */
#define SET_PWM1_CH3_PB12()         SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB12MFP_Msk)) | SYS_GPB_MFP3_PB12MFP_PWM1_CH3)                    /*!< Set PB12 function to PWM1_CH3           */
#define SET_PWM1_CH3_PC2()          SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC2MFP_Msk)) | SYS_GPC_MFP0_PC2MFP_PWM1_CH3)                      /*!< Set PC2 function to PWM1_CH3            */
#define SET_PWM1_CH3_PC6()          SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC6MFP_Msk)) | SYS_GPC_MFP1_PC6MFP_PWM1_CH3)                      /*!< Set PC6 function to PWM1_CH3            */
#define SET_PWM1_CH4_PA7()          SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA7MFP_Msk)) | SYS_GPA_MFP1_PA7MFP_PWM1_CH4)                      /*!< Set PA7 function to PWM1_CH4            */
#define SET_PWM1_CH4_PB1()          SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB1MFP_Msk)) | SYS_GPB_MFP0_PB1MFP_PWM1_CH4)                      /*!< Set PB1 function to PWM1_CH4            */
#define SET_PWM1_CH4_PB7()          SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB7MFP_Msk)) | SYS_GPB_MFP1_PB7MFP_PWM1_CH4)                      /*!< Set PB7 function to PWM1_CH4            */
#define SET_PWM1_CH4_PC1()          SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC1MFP_Msk)) | SYS_GPC_MFP0_PC1MFP_PWM1_CH4)                      /*!< Set PC1 function to PWM1_CH4            */
#define SET_PWM1_CH4_PF0()          SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF0MFP_Msk)) | SYS_GPF_MFP0_PF0MFP_PWM1_CH4)                      /*!< Set PF0 function to PWM1_CH4            */
#define SET_PWM1_CH5_PA6()          SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA6MFP_Msk)) | SYS_GPA_MFP1_PA6MFP_PWM1_CH5)                      /*!< Set PA6 function to PWM1_CH5            */
#define SET_PWM1_CH5_PB0()          SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB0MFP_Msk)) | SYS_GPB_MFP0_PB0MFP_PWM1_CH5)                      /*!< Set PB0 function to PWM1_CH5            */
#define SET_PWM1_CH5_PB6()          SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB6MFP_Msk)) | SYS_GPB_MFP1_PB6MFP_PWM1_CH5)                      /*!< Set PB6 function to PWM1_CH5            */
#define SET_PWM1_CH5_PC0()          SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC0MFP_Msk)) | SYS_GPC_MFP0_PC0MFP_PWM1_CH5)                      /*!< Set PC0 function to PWM1_CH5            */
#define SET_PWM1_CH5_PF1()          SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF1MFP_Msk)) | SYS_GPF_MFP0_PF1MFP_PWM1_CH5)                      /*!< Set PF1 function to PWM1_CH5            */
#define SET_QEI1_A_PA13()           SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA13MFP_Msk)) | SYS_GPA_MFP3_PA13MFP_QEI1_A)                      /*!< Set PA13 function to QEI1_A             */
#define SET_QEI1_B_PA14()           SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA14MFP_Msk)) | SYS_GPA_MFP3_PA14MFP_QEI1_B)                      /*!< Set PA14 function to QEI1_B             */
#define SET_QEI1_INDEX_PA12()       SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA12MFP_Msk)) | SYS_GPA_MFP3_PA12MFP_QEI1_INDEX)                  /*!< Set PA12 function to QEI1_INDEX         */
#define SET_QSPI0_CLK_PA2()         SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA2MFP_Msk)) | SYS_GPA_MFP0_PA2MFP_QSPI0_CLK)                     /*!< Set PA2 function to QSPI0_CLK           */
#define SET_QSPI0_CLK_PB12()        SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB12MFP_Msk)) | SYS_GPB_MFP3_PB12MFP_QSPI0_CLK)                   /*!< Set PB12 function to QSPI0_CLK          */
#define SET_QSPI0_CLK_PC14()        SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC14MFP_Msk)) | SYS_GPC_MFP3_PC14MFP_QSPI0_CLK)                   /*!< Set PC14 function to QSPI0_CLK          */
#define SET_QSPI0_CLK_PC2()         SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC2MFP_Msk)) | SYS_GPC_MFP0_PC2MFP_QSPI0_CLK)                     /*!< Set PC2 function to QSPI0_CLK           */
#define SET_QSPI0_CLK_PF2()         SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF2MFP_Msk)) | SYS_GPF_MFP0_PF2MFP_QSPI0_CLK)                     /*!< Set PF2 function to QSPI0_CLK           */
#define SET_QSPI0_CLK_PH8()         SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH8MFP_Msk)) | SYS_GPH_MFP2_PH8MFP_QSPI0_CLK)                     /*!< Set PH8 function to QSPI0_CLK           */
#define SET_QSPI0_MISO0_PA1()       SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA1MFP_Msk)) | SYS_GPA_MFP0_PA1MFP_QSPI0_MISO0)                   /*!< Set PA1 function to QSPI0_MISO0         */
#define SET_QSPI0_MISO0_PC1()       SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC1MFP_Msk)) | SYS_GPC_MFP0_PC1MFP_QSPI0_MISO0)                   /*!< Set PC1 function to QSPI0_MISO0         */
#define SET_QSPI0_MISO0_PE1()       SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE1MFP_Msk)) | SYS_GPE_MFP0_PE1MFP_QSPI0_MISO0)                   /*!< Set PE1 function to QSPI0_MISO0         */
#define SET_QSPI0_MISO1_PA5()       SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA5MFP_Msk)) | SYS_GPA_MFP1_PA5MFP_QSPI0_MISO1)                   /*!< Set PA5 function to QSPI0_MISO1         */
#define SET_QSPI0_MISO1_PB1()       SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB1MFP_Msk)) | SYS_GPB_MFP0_PB1MFP_QSPI0_MISO1)                   /*!< Set PB1 function to QSPI0_MISO1         */
#define SET_QSPI0_MISO1_PC5()       SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC5MFP_Msk)) | SYS_GPC_MFP1_PC5MFP_QSPI0_MISO1)                   /*!< Set PC5 function to QSPI0_MISO1         */
#define SET_QSPI0_MISO1_PH10()      SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH10MFP_Msk)) | SYS_GPH_MFP2_PH10MFP_QSPI0_MISO1)                 /*!< Set PH10 function to QSPI0_MISO1        */
#define SET_QSPI0_MOSI0_PA0()       SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA0MFP_Msk)) | SYS_GPA_MFP0_PA0MFP_QSPI0_MOSI0)                   /*!< Set PA0 function to QSPI0_MOSI0         */
#define SET_QSPI0_MOSI0_PC0()       SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC0MFP_Msk)) | SYS_GPC_MFP0_PC0MFP_QSPI0_MOSI0)                   /*!< Set PC0 function to QSPI0_MOSI0         */
#define SET_QSPI0_MOSI0_PE0()       SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE0MFP_Msk)) | SYS_GPE_MFP0_PE0MFP_QSPI0_MOSI0)                   /*!< Set PE0 function to QSPI0_MOSI0         */
#define SET_QSPI0_MOSI1_PA4()       SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA4MFP_Msk)) | SYS_GPA_MFP1_PA4MFP_QSPI0_MOSI1)                   /*!< Set PA4 function to QSPI0_MOSI1         */
#define SET_QSPI0_MOSI1_PB0()       SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB0MFP_Msk)) | SYS_GPB_MFP0_PB0MFP_QSPI0_MOSI1)                   /*!< Set PB0 function to QSPI0_MOSI1         */
#define SET_QSPI0_MOSI1_PC4()       SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC4MFP_Msk)) | SYS_GPC_MFP1_PC4MFP_QSPI0_MOSI1)                   /*!< Set PC4 function to QSPI0_MOSI1         */
#define SET_QSPI0_MOSI1_PH11()      SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH11MFP_Msk)) | SYS_GPH_MFP2_PH11MFP_QSPI0_MOSI1)                 /*!< Set PH11 function to QSPI0_MOSI1        */
#define SET_QSPI0_SS_PA3()          SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA3MFP_Msk)) | SYS_GPA_MFP0_PA3MFP_QSPI0_SS)                      /*!< Set PA3 function to QSPI0_SS            */
#define SET_QSPI0_SS_PC3()          SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC3MFP_Msk)) | SYS_GPC_MFP0_PC3MFP_QSPI0_SS)                      /*!< Set PC3 function to QSPI0_SS            */
#define SET_QSPI0_SS_PH9()          SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH9MFP_Msk)) | SYS_GPH_MFP2_PH9MFP_QSPI0_SS)                      /*!< Set PH9 function to QSPI0_SS            */
#define SET_SPI0_CLK_PA2()          SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA2MFP_Msk)) | SYS_GPA_MFP0_PA2MFP_SPI0_CLK)                      /*!< Set PA2 function to SPI0_CLK            */
#define SET_SPI0_CLK_PB14()         SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB14MFP_Msk)) | SYS_GPB_MFP3_PB14MFP_SPI0_CLK)                    /*!< Set PB14 function to SPI0_CLK           */
#define SET_SPI0_CLK_PB6()          SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB6MFP_Msk)) | SYS_GPB_MFP1_PB6MFP_SPI0_CLK)                      /*!< Set PB6 function to SPI0_CLK            */
#define SET_SPI0_CLK_PD2()          SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD2MFP_Msk)) | SYS_GPD_MFP0_PD2MFP_SPI0_CLK)                      /*!< Set PD2 function to SPI0_CLK            */
#define SET_SPI0_CLK_PF8()          SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SYS_GPF_MFP2_PF8MFP_Msk)) | SYS_GPF_MFP2_PF8MFP_SPI0_CLK)                      /*!< Set PF8 function to SPI0_CLK            */
#define SET_SPI0_I2SMCLK_PA4()      SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA4MFP_Msk)) | SYS_GPA_MFP1_PA4MFP_SPI0_I2SMCLK)                  /*!< Set PA4 function to SPI0_I2SMCLK        */
#define SET_SPI0_I2SMCLK_PB0()      SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB0MFP_Msk)) | SYS_GPB_MFP0_PB0MFP_SPI0_I2SMCLK)                  /*!< Set PB0 function to SPI0_I2SMCLK        */
#define SET_SPI0_I2SMCLK_PB11()     SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB11MFP_Msk)) | SYS_GPB_MFP2_PB11MFP_SPI0_I2SMCLK)                /*!< Set PB11 function to SPI0_I2SMCLK       */
#define SET_SPI0_I2SMCLK_PB12()     SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB12MFP_Msk)) | SYS_GPB_MFP3_PB12MFP_SPI0_I2SMCLK)                /*!< Set PB12 function to SPI0_I2SMCLK       */
#define SET_SPI0_I2SMCLK_PC14()     SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC14MFP_Msk)) | SYS_GPC_MFP3_PC14MFP_SPI0_I2SMCLK)                /*!< Set PC14 function to SPI0_I2SMCLK       */
#define SET_SPI0_I2SMCLK_PD14()     SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SYS_GPD_MFP3_PD14MFP_Msk)) | SYS_GPD_MFP3_PD14MFP_SPI0_I2SMCLK)                /*!< Set PD14 function to SPI0_I2SMCLK       */
#define SET_SPI0_I2SMCLK_PF10()     SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SYS_GPF_MFP2_PF10MFP_Msk)) | SYS_GPF_MFP2_PF10MFP_SPI0_I2SMCLK)                /*!< Set PF10 function to SPI0_I2SMCLK       */
#define SET_SPI0_MISO_PA1()         SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA1MFP_Msk)) | SYS_GPA_MFP0_PA1MFP_SPI0_MISO)                     /*!< Set PA1 function to SPI0_MISO           */
#define SET_SPI0_MISO_PB13()        SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB13MFP_Msk)) | SYS_GPB_MFP3_PB13MFP_SPI0_MISO)                   /*!< Set PB13 function to SPI0_MISO          */
#define SET_SPI0_MISO_PD1()         SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD1MFP_Msk)) | SYS_GPD_MFP0_PD1MFP_SPI0_MISO)                     /*!< Set PD1 function to SPI0_MISO           */
#define SET_SPI0_MISO_PF7()         SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF7MFP_Msk)) | SYS_GPF_MFP1_PF7MFP_SPI0_MISO)                     /*!< Set PF7 function to SPI0_MISO           */
#define SET_SPI0_MOSI_PA0()         SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA0MFP_Msk)) | SYS_GPA_MFP0_PA0MFP_SPI0_MOSI)                     /*!< Set PA0 function to SPI0_MOSI           */
#define SET_SPI0_MOSI_PB12()        SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB12MFP_Msk)) | SYS_GPB_MFP3_PB12MFP_SPI0_MOSI)                   /*!< Set PB12 function to SPI0_MOSI          */
#define SET_SPI0_MOSI_PD0()         SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD0MFP_Msk)) | SYS_GPD_MFP0_PD0MFP_SPI0_MOSI)                     /*!< Set PD0 function to SPI0_MOSI           */
#define SET_SPI0_MOSI_PF6()         SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF6MFP_Msk)) | SYS_GPF_MFP1_PF6MFP_SPI0_MOSI)                     /*!< Set PF6 function to SPI0_MOSI           */
#define SET_SPI0_SS_PA3()           SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA3MFP_Msk)) | SYS_GPA_MFP0_PA3MFP_SPI0_SS)                       /*!< Set PA3 function to SPI0_SS             */
#define SET_SPI0_SS_PB15()          SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB15MFP_Msk)) | SYS_GPB_MFP3_PB15MFP_SPI0_SS)                     /*!< Set PB15 function to SPI0_SS            */
#define SET_SPI0_SS_PB7()           SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB7MFP_Msk)) | SYS_GPB_MFP1_PB7MFP_SPI0_SS)                       /*!< Set PB7 function to SPI0_SS             */
#define SET_SPI0_SS_PD3()           SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD3MFP_Msk)) | SYS_GPD_MFP0_PD3MFP_SPI0_SS)                       /*!< Set PD3 function to SPI0_SS             */
#define SET_SPI0_SS_PF9()           SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SYS_GPF_MFP2_PF9MFP_Msk)) | SYS_GPF_MFP2_PF9MFP_SPI0_SS)                       /*!< Set PF9 function to SPI0_SS             */
#define SET_SPI1_CLK_PA7()          SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA7MFP_Msk)) | SYS_GPA_MFP1_PA7MFP_SPI1_CLK)                      /*!< Set PA7 function to SPI1_CLK            */
#define SET_SPI1_CLK_PB3()          SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB3MFP_Msk)) | SYS_GPB_MFP0_PB3MFP_SPI1_CLK)                      /*!< Set PB3 function to SPI1_CLK            */
#define SET_SPI1_CLK_PC1()          SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC1MFP_Msk)) | SYS_GPC_MFP0_PC1MFP_SPI1_CLK)                      /*!< Set PC1 function to SPI1_CLK            */
#define SET_SPI1_CLK_PD5()          SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD5MFP_Msk)) | SYS_GPD_MFP1_PD5MFP_SPI1_CLK)                      /*!< Set PD5 function to SPI1_CLK            */
#define SET_SPI1_CLK_PH6()          SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SYS_GPH_MFP1_PH6MFP_Msk)) | SYS_GPH_MFP1_PH6MFP_SPI1_CLK)                      /*!< Set PH6 function to SPI1_CLK            */
#define SET_SPI1_CLK_PH8()          SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH8MFP_Msk)) | SYS_GPH_MFP2_PH8MFP_SPI1_CLK)                      /*!< Set PH8 function to SPI1_CLK            */
#define SET_SPI1_MISO_PB5()         SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB5MFP_Msk)) | SYS_GPB_MFP1_PB5MFP_SPI1_MISO)                     /*!< Set PB5 function to SPI1_MISO           */
#define SET_SPI1_MISO_PC3()         SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC3MFP_Msk)) | SYS_GPC_MFP0_PC3MFP_SPI1_MISO)                     /*!< Set PC3 function to SPI1_MISO           */
#define SET_SPI1_MISO_PC7()         SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC7MFP_Msk)) | SYS_GPC_MFP1_PC7MFP_SPI1_MISO)                     /*!< Set PC7 function to SPI1_MISO           */
#define SET_SPI1_MISO_PD7()         SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD7MFP_Msk)) | SYS_GPD_MFP1_PD7MFP_SPI1_MISO)                     /*!< Set PD7 function to SPI1_MISO           */
#define SET_SPI1_MISO_PE1()         SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE1MFP_Msk)) | SYS_GPE_MFP0_PE1MFP_SPI1_MISO)                     /*!< Set PE1 function to SPI1_MISO           */
#define SET_SPI1_MISO_PH4()         SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SYS_GPH_MFP1_PH4MFP_Msk)) | SYS_GPH_MFP1_PH4MFP_SPI1_MISO)                     /*!< Set PH4 function to SPI1_MISO           */
#define SET_SPI1_MOSI_PB4()         SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB4MFP_Msk)) | SYS_GPB_MFP1_PB4MFP_SPI1_MOSI)                     /*!< Set PB4 function to SPI1_MOSI           */
#define SET_SPI1_MOSI_PC2()         SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC2MFP_Msk)) | SYS_GPC_MFP0_PC2MFP_SPI1_MOSI)                     /*!< Set PC2 function to SPI1_MOSI           */
#define SET_SPI1_MOSI_PC6()         SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC6MFP_Msk)) | SYS_GPC_MFP1_PC6MFP_SPI1_MOSI)                     /*!< Set PC6 function to SPI1_MOSI           */
#define SET_SPI1_MOSI_PD6()         SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD6MFP_Msk)) | SYS_GPD_MFP1_PD6MFP_SPI1_MOSI)                     /*!< Set PD6 function to SPI1_MOSI           */
#define SET_SPI1_MOSI_PE0()         SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE0MFP_Msk)) | SYS_GPE_MFP0_PE0MFP_SPI1_MOSI)                     /*!< Set PE0 function to SPI1_MOSI           */
#define SET_SPI1_MOSI_PH5()         SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SYS_GPH_MFP1_PH5MFP_Msk)) | SYS_GPH_MFP1_PH5MFP_SPI1_MOSI)                     /*!< Set PH5 function to SPI1_MOSI           */
#define SET_SPI1_SS_PA6()           SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA6MFP_Msk)) | SYS_GPA_MFP1_PA6MFP_SPI1_SS)                       /*!< Set PA6 function to SPI1_SS             */
#define SET_SPI1_SS_PB2()           SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB2MFP_Msk)) | SYS_GPB_MFP0_PB2MFP_SPI1_SS)                       /*!< Set PB2 function to SPI1_SS             */
#define SET_SPI1_SS_PC0()           SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC0MFP_Msk)) | SYS_GPC_MFP0_PC0MFP_SPI1_SS)                       /*!< Set PC0 function to SPI1_SS             */
#define SET_SPI1_SS_PD4()           SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD4MFP_Msk)) | SYS_GPD_MFP1_PD4MFP_SPI1_SS)                       /*!< Set PD4 function to SPI1_SS             */
#define SET_SPI1_SS_PH7()           SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SYS_GPH_MFP1_PH7MFP_Msk)) | SYS_GPH_MFP1_PH7MFP_SPI1_SS)                       /*!< Set PH7 function to SPI1_SS             */
#define SET_SPI1_SS_PH9()           SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH9MFP_Msk)) | SYS_GPH_MFP2_PH9MFP_SPI1_SS)                       /*!< Set PH9 function to SPI1_SS             */
#define SET_TM0_EXT_PA11()          SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA11MFP_Msk)) | SYS_GPA_MFP2_PA11MFP_TM0_EXT)                     /*!< Set PA11 function to TM0_EXT            */
#define SET_TM0_EXT_PB15()          SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB15MFP_Msk)) | SYS_GPB_MFP3_PB15MFP_TM0_EXT)                     /*!< Set PB15 function to TM0_EXT            */
#define SET_TM0_EXT_PF3()           SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF3MFP_Msk)) | SYS_GPF_MFP0_PF3MFP_TM0_EXT)                       /*!< Set PF3 function to TM0_EXT             */
#define SET_TM0_PB5()               SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB5MFP_Msk)) | SYS_GPB_MFP1_PB5MFP_TM0)                           /*!< Set PB5 function to TM0                 */
#define SET_TM0_PC7()               SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC7MFP_Msk)) | SYS_GPC_MFP1_PC7MFP_TM0)                           /*!< Set PC7 function to TM0                 */
#define SET_TM0_PG2()               SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~SYS_GPG_MFP0_PG2MFP_Msk)) | SYS_GPG_MFP0_PG2MFP_TM0)                           /*!< Set PG2 function to TM0                 */
#define SET_TM1_EXT_PA10()          SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA10MFP_Msk)) | SYS_GPA_MFP2_PA10MFP_TM1_EXT)                     /*!< Set PA10 function to TM1_EXT            */
#define SET_TM1_EXT_PB14()          SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB14MFP_Msk)) | SYS_GPB_MFP3_PB14MFP_TM1_EXT)                     /*!< Set PB14 function to TM1_EXT            */
#define SET_TM1_EXT_PF2()           SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF2MFP_Msk)) | SYS_GPF_MFP0_PF2MFP_TM1_EXT)                       /*!< Set PF2 function to TM1_EXT             */
#define SET_TM1_PB4()               SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB4MFP_Msk)) | SYS_GPB_MFP1_PB4MFP_TM1)                           /*!< Set PB4 function to TM1                 */
#define SET_TM1_PB6()               SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB6MFP_Msk)) | SYS_GPB_MFP1_PB6MFP_TM1)                           /*!< Set PB6 function to TM1                 */
#define SET_TM1_PC14()              SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC14MFP_Msk)) | SYS_GPC_MFP3_PC14MFP_TM1)                         /*!< Set PC14 function to TM1                */
#define SET_TM1_PC6()               SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC6MFP_Msk)) | SYS_GPC_MFP1_PC6MFP_TM1)                           /*!< Set PC6 function to TM1                 */
#define SET_TM1_PG3()               SYS->GPG_MFP0 = ((SYS->GPG_MFP0 & (~SYS_GPG_MFP0_PG3MFP_Msk)) | SYS_GPG_MFP0_PG3MFP_TM1)                           /*!< Set PG3 function to TM1                 */
#define SET_TM2_EXT_PA9()           SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA9MFP_Msk)) | SYS_GPA_MFP2_PA9MFP_TM2_EXT)                       /*!< Set PA9 function to TM2_EXT             */
#define SET_TM2_EXT_PB13()          SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB13MFP_Msk)) | SYS_GPB_MFP3_PB13MFP_TM2_EXT)                     /*!< Set PB13 function to TM2_EXT            */
#define SET_TM2_PA7()               SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA7MFP_Msk)) | SYS_GPA_MFP1_PA7MFP_TM2)                           /*!< Set PA7 function to TM2                 */
#define SET_TM2_PB3()               SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB3MFP_Msk)) | SYS_GPB_MFP0_PB3MFP_TM2)                           /*!< Set PB3 function to TM2                 */
#define SET_TM2_PD0()               SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD0MFP_Msk)) | SYS_GPD_MFP0_PD0MFP_TM2)                           /*!< Set PD0 function to TM2                 */
#define SET_TM2_PG4()               SYS->GPG_MFP1 = ((SYS->GPG_MFP1 & (~SYS_GPG_MFP1_PG4MFP_Msk)) | SYS_GPG_MFP1_PG4MFP_TM2)                           /*!< Set PG4 function to TM2                 */
#define SET_TM3_EXT_PA8()           SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA8MFP_Msk)) | SYS_GPA_MFP2_PA8MFP_TM3_EXT)                       /*!< Set PA8 function to TM3_EXT             */
#define SET_TM3_EXT_PB12()          SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB12MFP_Msk)) | SYS_GPB_MFP3_PB12MFP_TM3_EXT)                     /*!< Set PB12 function to TM3_EXT            */
#define SET_TM3_PA6()               SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA6MFP_Msk)) | SYS_GPA_MFP1_PA6MFP_TM3)                           /*!< Set PA6 function to TM3                 */
#define SET_TM3_PB2()               SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB2MFP_Msk)) | SYS_GPB_MFP0_PB2MFP_TM3)                           /*!< Set PB2 function to TM3                 */
#define SET_TM3_PF11()              SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SYS_GPF_MFP2_PF11MFP_Msk)) | SYS_GPF_MFP2_PF11MFP_TM3)                         /*!< Set PF11 function to TM3                */
#define SET_TRACE_SWO_PC14()        SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC14MFP_Msk)) | SYS_GPC_MFP3_PC14MFP_TRACE_SWO)                   /*!< Set PC14 function to TRACE_SWO          */
#define SET_TRACE_SWO_PF6()         SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF6MFP_Msk)) | SYS_GPF_MFP1_PF6MFP_TRACE_SWO)                     /*!< Set PF6 function to TRACE_SWO           */
#define SET_UART0_RXD_PA0()         SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA0MFP_Msk)) | SYS_GPA_MFP0_PA0MFP_UART0_RXD)                     /*!< Set PA0 function to UART0_RXD           */
#define SET_UART0_RXD_PA15()        SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA15MFP_Msk)) | SYS_GPA_MFP3_PA15MFP_UART0_RXD)                   /*!< Set PA15 function to UART0_RXD          */
#define SET_UART0_RXD_PA3()         SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA3MFP_Msk)) | SYS_GPA_MFP0_PA3MFP_UART0_RXD)                     /*!< Set PA3 function to UART0_RXD           */
#define SET_UART0_RXD_PA4()         SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA4MFP_Msk)) | SYS_GPA_MFP1_PA4MFP_UART0_RXD)                     /*!< Set PA4 function to UART0_RXD           */
#define SET_UART0_RXD_PA6()         SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA6MFP_Msk)) | SYS_GPA_MFP1_PA6MFP_UART0_RXD)                     /*!< Set PA6 function to UART0_RXD           */
#define SET_UART0_RXD_PB12()        SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB12MFP_Msk)) | SYS_GPB_MFP3_PB12MFP_UART0_RXD)                   /*!< Set PB12 function to UART0_RXD          */
#define SET_UART0_RXD_PB8()         SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB8MFP_Msk)) | SYS_GPB_MFP2_PB8MFP_UART0_RXD)                     /*!< Set PB8 function to UART0_RXD           */
#define SET_UART0_RXD_PC11()        SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC11MFP_Msk)) | SYS_GPC_MFP2_PC11MFP_UART0_RXD)                   /*!< Set PC11 function to UART0_RXD          */
#define SET_UART0_RXD_PD2()         SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD2MFP_Msk)) | SYS_GPD_MFP0_PD2MFP_UART0_RXD)                     /*!< Set PD2 function to UART0_RXD           */
#define SET_UART0_RXD_PF1()         SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF1MFP_Msk)) | SYS_GPF_MFP0_PF1MFP_UART0_RXD)                     /*!< Set PF1 function to UART0_RXD           */
#define SET_UART0_RXD_PF2()         SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF2MFP_Msk)) | SYS_GPF_MFP0_PF2MFP_UART0_RXD)                     /*!< Set PF2 function to UART0_RXD           */
#define SET_UART0_RXD_PH11()        SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH11MFP_Msk)) | SYS_GPH_MFP2_PH11MFP_UART0_RXD)                   /*!< Set PH11 function to UART0_RXD          */
#define SET_UART0_TXD_PA1()         SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA1MFP_Msk)) | SYS_GPA_MFP0_PA1MFP_UART0_TXD)                     /*!< Set PA1 function to UART0_TXD           */
#define SET_UART0_TXD_PA14()        SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA14MFP_Msk)) | SYS_GPA_MFP3_PA14MFP_UART0_TXD)                   /*!< Set PA14 function to UART0_TXD          */
#define SET_UART0_TXD_PA4()         SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA4MFP_Msk)) | SYS_GPA_MFP1_PA4MFP_UART0_TXD)                     /*!< Set PA4 function to UART0_TXD           */
#define SET_UART0_TXD_PA5()         SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA5MFP_Msk)) | SYS_GPA_MFP1_PA5MFP_UART0_TXD)                     /*!< Set PA5 function to UART0_TXD           */
#define SET_UART0_TXD_PA7()         SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA7MFP_Msk)) | SYS_GPA_MFP1_PA7MFP_UART0_TXD)                     /*!< Set PA7 function to UART0_TXD           */
#define SET_UART0_TXD_PB13()        SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB13MFP_Msk)) | SYS_GPB_MFP3_PB13MFP_UART0_TXD)                   /*!< Set PB13 function to UART0_TXD          */
#define SET_UART0_TXD_PB9()         SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB9MFP_Msk)) | SYS_GPB_MFP2_PB9MFP_UART0_TXD)                     /*!< Set PB9 function to UART0_TXD           */
#define SET_UART0_TXD_PC12()        SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC12MFP_Msk)) | SYS_GPC_MFP3_PC12MFP_UART0_TXD)                   /*!< Set PC12 function to UART0_TXD          */
#define SET_UART0_TXD_PD3()         SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD3MFP_Msk)) | SYS_GPD_MFP0_PD3MFP_UART0_TXD)                     /*!< Set PD3 function to UART0_TXD           */
#define SET_UART0_TXD_PF0()         SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF0MFP_Msk)) | SYS_GPF_MFP0_PF0MFP_UART0_TXD)                     /*!< Set PF0 function to UART0_TXD           */
#define SET_UART0_TXD_PF3()         SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF3MFP_Msk)) | SYS_GPF_MFP0_PF3MFP_UART0_TXD)                     /*!< Set PF3 function to UART0_TXD           */
#define SET_UART0_TXD_PH10()        SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH10MFP_Msk)) | SYS_GPH_MFP2_PH10MFP_UART0_TXD)                   /*!< Set PH10 function to UART0_TXD          */
#define SET_UART0_nCTS_PA5()        SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA5MFP_Msk)) | SYS_GPA_MFP1_PA5MFP_UART0_nCTS)                    /*!< Set PA5 function to UART0_nCTS          */
#define SET_UART0_nCTS_PB11()       SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB11MFP_Msk)) | SYS_GPB_MFP2_PB11MFP_UART0_nCTS)                  /*!< Set PB11 function to UART0_nCTS         */
#define SET_UART0_nCTS_PB15()       SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB15MFP_Msk)) | SYS_GPB_MFP3_PB15MFP_UART0_nCTS)                  /*!< Set PB15 function to UART0_nCTS         */
#define SET_UART0_nCTS_PC7()        SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC7MFP_Msk)) | SYS_GPC_MFP1_PC7MFP_UART0_nCTS)                    /*!< Set PC7 function to UART0_nCTS          */
#define SET_UART0_nCTS_PF5()        SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF5MFP_Msk)) | SYS_GPF_MFP1_PF5MFP_UART0_nCTS)                    /*!< Set PF5 function to UART0_nCTS          */
#define SET_UART0_nRTS_PA4()        SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA4MFP_Msk)) | SYS_GPA_MFP1_PA4MFP_UART0_nRTS)                    /*!< Set PA4 function to UART0_nRTS          */
#define SET_UART0_nRTS_PB10()       SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB10MFP_Msk)) | SYS_GPB_MFP2_PB10MFP_UART0_nRTS)                  /*!< Set PB10 function to UART0_nRTS         */
#define SET_UART0_nRTS_PB14()       SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB14MFP_Msk)) | SYS_GPB_MFP3_PB14MFP_UART0_nRTS)                  /*!< Set PB14 function to UART0_nRTS         */
#define SET_UART0_nRTS_PC6()        SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC6MFP_Msk)) | SYS_GPC_MFP1_PC6MFP_UART0_nRTS)                    /*!< Set PC6 function to UART0_nRTS          */
#define SET_UART0_nRTS_PF4()        SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF4MFP_Msk)) | SYS_GPF_MFP1_PF4MFP_UART0_nRTS)                    /*!< Set PF4 function to UART0_nRTS          */
#define SET_UART1_RXD_PA14()        SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA14MFP_Msk)) | SYS_GPA_MFP3_PA14MFP_UART1_RXD)                   /*!< Set PA14 function to UART1_RXD          */
#define SET_UART1_RXD_PA2()         SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA2MFP_Msk)) | SYS_GPA_MFP0_PA2MFP_UART1_RXD)                     /*!< Set PA2 function to UART1_RXD           */
#define SET_UART1_RXD_PA8()         SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA8MFP_Msk)) | SYS_GPA_MFP2_PA8MFP_UART1_RXD)                     /*!< Set PA8 function to UART1_RXD           */
#define SET_UART1_RXD_PB2()         SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB2MFP_Msk)) | SYS_GPB_MFP0_PB2MFP_UART1_RXD)                     /*!< Set PB2 function to UART1_RXD           */
#define SET_UART1_RXD_PB6()         SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB6MFP_Msk)) | SYS_GPB_MFP1_PB6MFP_UART1_RXD)                     /*!< Set PB6 function to UART1_RXD           */
#define SET_UART1_RXD_PC13()        SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC13MFP_Msk)) | SYS_GPC_MFP3_PC13MFP_UART1_RXD)                   /*!< Set PC13 function to UART1_RXD          */
#define SET_UART1_RXD_PC8()         SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC8MFP_Msk)) | SYS_GPC_MFP2_PC8MFP_UART1_RXD)                     /*!< Set PC8 function to UART1_RXD           */
#define SET_UART1_RXD_PD10()        SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD10MFP_Msk)) | SYS_GPD_MFP2_PD10MFP_UART1_RXD)                   /*!< Set PD10 function to UART1_RXD          */
#define SET_UART1_RXD_PD6()         SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD6MFP_Msk)) | SYS_GPD_MFP1_PD6MFP_UART1_RXD)                     /*!< Set PD6 function to UART1_RXD           */
#define SET_UART1_RXD_PE5()         SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE5MFP_Msk)) | SYS_GPE_MFP1_PE5MFP_UART1_RXD)                     /*!< Set PE5 function to UART1_RXD           */
#define SET_UART1_RXD_PF1()         SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF1MFP_Msk)) | SYS_GPF_MFP0_PF1MFP_UART1_RXD)                     /*!< Set PF1 function to UART1_RXD           */
#define SET_UART1_RXD_PH9()         SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH9MFP_Msk)) | SYS_GPH_MFP2_PH9MFP_UART1_RXD)                     /*!< Set PH9 function to UART1_RXD           */
#define SET_UART1_TXD_PA13()        SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA13MFP_Msk)) | SYS_GPA_MFP3_PA13MFP_UART1_TXD)                   /*!< Set PA13 function to UART1_TXD          */
#define SET_UART1_TXD_PA3()         SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA3MFP_Msk)) | SYS_GPA_MFP0_PA3MFP_UART1_TXD)                     /*!< Set PA3 function to UART1_TXD           */
#define SET_UART1_TXD_PA8()         SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA8MFP_Msk)) | SYS_GPA_MFP2_PA8MFP_UART1_TXD)                     /*!< Set PA8 function to UART1_TXD           */
#define SET_UART1_TXD_PA9()         SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA9MFP_Msk)) | SYS_GPA_MFP2_PA9MFP_UART1_TXD)                     /*!< Set PA9 function to UART1_TXD           */
#define SET_UART1_TXD_PB3()         SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB3MFP_Msk)) | SYS_GPB_MFP0_PB3MFP_UART1_TXD)                     /*!< Set PB3 function to UART1_TXD           */
#define SET_UART1_TXD_PB7()         SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB7MFP_Msk)) | SYS_GPB_MFP1_PB7MFP_UART1_TXD)                     /*!< Set PB7 function to UART1_TXD           */
#define SET_UART1_TXD_PD11()        SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD11MFP_Msk)) | SYS_GPD_MFP2_PD11MFP_UART1_TXD)                   /*!< Set PD11 function to UART1_TXD          */
#define SET_UART1_TXD_PD7()         SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD7MFP_Msk)) | SYS_GPD_MFP1_PD7MFP_UART1_TXD)                     /*!< Set PD7 function to UART1_TXD           */
#define SET_UART1_TXD_PE13()        SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~SYS_GPE_MFP3_PE13MFP_Msk)) | SYS_GPE_MFP3_PE13MFP_UART1_TXD)                   /*!< Set PE13 function to UART1_TXD          */
#define SET_UART1_TXD_PE6()         SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE6MFP_Msk)) | SYS_GPE_MFP1_PE6MFP_UART1_TXD)                     /*!< Set PE6 function to UART1_TXD           */
#define SET_UART1_TXD_PF0()         SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF0MFP_Msk)) | SYS_GPF_MFP0_PF0MFP_UART1_TXD)                     /*!< Set PF0 function to UART1_TXD           */
#define SET_UART1_TXD_PH8()         SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH8MFP_Msk)) | SYS_GPH_MFP2_PH8MFP_UART1_TXD)                     /*!< Set PH8 function to UART1_TXD           */
#define SET_UART1_nCTS_PA1()        SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA1MFP_Msk)) | SYS_GPA_MFP0_PA1MFP_UART1_nCTS)                    /*!< Set PA1 function to UART1_nCTS          */
#define SET_UART1_nCTS_PB9()        SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB9MFP_Msk)) | SYS_GPB_MFP2_PB9MFP_UART1_nCTS)                    /*!< Set PB9 function to UART1_nCTS          */
#define SET_UART1_nCTS_PE11()       SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SYS_GPE_MFP2_PE11MFP_Msk)) | SYS_GPE_MFP2_PE11MFP_UART1_nCTS)                  /*!< Set PE11 function to UART1_nCTS         */
#define SET_UART1_nRTS_PA0()        SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA0MFP_Msk)) | SYS_GPA_MFP0_PA0MFP_UART1_nRTS)                    /*!< Set PA0 function to UART1_nRTS          */
#define SET_UART1_nRTS_PB8()        SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB8MFP_Msk)) | SYS_GPB_MFP2_PB8MFP_UART1_nRTS)                    /*!< Set PB8 function to UART1_nRTS          */
#define SET_UART1_nRTS_PE12()       SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~SYS_GPE_MFP3_PE12MFP_Msk)) | SYS_GPE_MFP3_PE12MFP_UART1_nRTS)                  /*!< Set PE12 function to UART1_nRTS         */
#define SET_UART2_RXD_PB0()         SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB0MFP_Msk)) | SYS_GPB_MFP0_PB0MFP_UART2_RXD)                     /*!< Set PB0 function to UART2_RXD           */
#define SET_UART2_RXD_PB4()         SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB4MFP_Msk)) | SYS_GPB_MFP1_PB4MFP_UART2_RXD)                     /*!< Set PB4 function to UART2_RXD           */
#define SET_UART2_RXD_PC0()         SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC0MFP_Msk)) | SYS_GPC_MFP0_PC0MFP_UART2_RXD)                     /*!< Set PC0 function to UART2_RXD           */
#define SET_UART2_RXD_PC4()         SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC4MFP_Msk)) | SYS_GPC_MFP1_PC4MFP_UART2_RXD)                     /*!< Set PC4 function to UART2_RXD           */
#define SET_UART2_RXD_PD12()        SYS->GPD_MFP3 = ((SYS->GPD_MFP3 & (~SYS_GPD_MFP3_PD12MFP_Msk)) | SYS_GPD_MFP3_PD12MFP_UART2_RXD)                   /*!< Set PD12 function to UART2_RXD          */
#define SET_UART2_RXD_PE15()        SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~SYS_GPE_MFP3_PE15MFP_Msk)) | SYS_GPE_MFP3_PE15MFP_UART2_RXD)                   /*!< Set PE15 function to UART2_RXD          */
#define SET_UART2_RXD_PE9()         SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SYS_GPE_MFP2_PE9MFP_Msk)) | SYS_GPE_MFP2_PE9MFP_UART2_RXD)                     /*!< Set PE9 function to UART2_RXD           */
#define SET_UART2_RXD_PF1()         SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF1MFP_Msk)) | SYS_GPF_MFP0_PF1MFP_UART2_RXD)                     /*!< Set PF1 function to UART2_RXD           */
#define SET_UART2_RXD_PF5()         SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF5MFP_Msk)) | SYS_GPF_MFP1_PF5MFP_UART2_RXD)                     /*!< Set PF5 function to UART2_RXD           */
#define SET_UART2_TXD_PB1()         SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB1MFP_Msk)) | SYS_GPB_MFP0_PB1MFP_UART2_TXD)                     /*!< Set PB1 function to UART2_TXD           */
#define SET_UART2_TXD_PB5()         SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB5MFP_Msk)) | SYS_GPB_MFP1_PB5MFP_UART2_TXD)                     /*!< Set PB5 function to UART2_TXD           */
#define SET_UART2_TXD_PC1()         SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC1MFP_Msk)) | SYS_GPC_MFP0_PC1MFP_UART2_TXD)                     /*!< Set PC1 function to UART2_TXD           */
#define SET_UART2_TXD_PC13()        SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC13MFP_Msk)) | SYS_GPC_MFP3_PC13MFP_UART2_TXD)                   /*!< Set PC13 function to UART2_TXD          */
#define SET_UART2_TXD_PC5()         SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC5MFP_Msk)) | SYS_GPC_MFP1_PC5MFP_UART2_TXD)                     /*!< Set PC5 function to UART2_TXD           */
#define SET_UART2_TXD_PE14()        SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~SYS_GPE_MFP3_PE14MFP_Msk)) | SYS_GPE_MFP3_PE14MFP_UART2_TXD)                   /*!< Set PE14 function to UART2_TXD          */
#define SET_UART2_TXD_PE8()         SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SYS_GPE_MFP2_PE8MFP_Msk)) | SYS_GPE_MFP2_PE8MFP_UART2_TXD)                     /*!< Set PE8 function to UART2_TXD           */
#define SET_UART2_TXD_PF0()         SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF0MFP_Msk)) | SYS_GPF_MFP0_PF0MFP_UART2_TXD)                     /*!< Set PF0 function to UART2_TXD           */
#define SET_UART2_TXD_PF4()         SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF4MFP_Msk)) | SYS_GPF_MFP1_PF4MFP_UART2_TXD)                     /*!< Set PF4 function to UART2_TXD           */
#define SET_UART2_nCTS_PC2()        SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC2MFP_Msk)) | SYS_GPC_MFP0_PC2MFP_UART2_nCTS)                    /*!< Set PC2 function to UART2_nCTS          */
#define SET_UART2_nCTS_PD9()        SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD9MFP_Msk)) | SYS_GPD_MFP2_PD9MFP_UART2_nCTS)                    /*!< Set PD9 function to UART2_nCTS          */
#define SET_UART2_nCTS_PF5()        SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF5MFP_Msk)) | SYS_GPF_MFP1_PF5MFP_UART2_nCTS)                    /*!< Set PF5 function to UART2_nCTS          */
#define SET_UART2_nRTS_PC3()        SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC3MFP_Msk)) | SYS_GPC_MFP0_PC3MFP_UART2_nRTS)                    /*!< Set PC3 function to UART2_nRTS          */
#define SET_UART2_nRTS_PD8()        SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD8MFP_Msk)) | SYS_GPD_MFP2_PD8MFP_UART2_nRTS)                    /*!< Set PD8 function to UART2_nRTS          */
#define SET_UART2_nRTS_PF4()        SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF4MFP_Msk)) | SYS_GPF_MFP1_PF4MFP_UART2_nRTS)                    /*!< Set PF4 function to UART2_nRTS          */
#define SET_UART3_RXD_PB14()        SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB14MFP_Msk)) | SYS_GPB_MFP3_PB14MFP_UART3_RXD)                   /*!< Set PB14 function to UART3_RXD          */
#define SET_UART3_RXD_PC2()         SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC2MFP_Msk)) | SYS_GPC_MFP0_PC2MFP_UART3_RXD)                     /*!< Set PC2 function to UART3_RXD           */
#define SET_UART3_RXD_PC9()         SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC9MFP_Msk)) | SYS_GPC_MFP2_PC9MFP_UART3_RXD)                     /*!< Set PC9 function to UART3_RXD           */
#define SET_UART3_RXD_PD0()         SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD0MFP_Msk)) | SYS_GPD_MFP0_PD0MFP_UART3_RXD)                     /*!< Set PD0 function to UART3_RXD           */
#define SET_UART3_RXD_PE0()         SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE0MFP_Msk)) | SYS_GPE_MFP0_PE0MFP_UART3_RXD)                     /*!< Set PE0 function to UART3_RXD           */
#define SET_UART3_RXD_PE11()        SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SYS_GPE_MFP2_PE11MFP_Msk)) | SYS_GPE_MFP2_PE11MFP_UART3_RXD)                   /*!< Set PE11 function to UART3_RXD          */
#define SET_UART3_RXD_PF4()         SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF4MFP_Msk)) | SYS_GPF_MFP1_PF4MFP_UART3_RXD)                     /*!< Set PF4 function to UART3_RXD           */
#define SET_UART3_TXD_PB15()        SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB15MFP_Msk)) | SYS_GPB_MFP3_PB15MFP_UART3_TXD)                   /*!< Set PB15 function to UART3_TXD          */
#define SET_UART3_TXD_PC10()        SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC10MFP_Msk)) | SYS_GPC_MFP2_PC10MFP_UART3_TXD)                   /*!< Set PC10 function to UART3_TXD          */
#define SET_UART3_TXD_PC3()         SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC3MFP_Msk)) | SYS_GPC_MFP0_PC3MFP_UART3_TXD)                     /*!< Set PC3 function to UART3_TXD           */
#define SET_UART3_TXD_PD1()         SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD1MFP_Msk)) | SYS_GPD_MFP0_PD1MFP_UART3_TXD)                     /*!< Set PD1 function to UART3_TXD           */
#define SET_UART3_TXD_PE1()         SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE1MFP_Msk)) | SYS_GPE_MFP0_PE1MFP_UART3_TXD)                     /*!< Set PE1 function to UART3_TXD           */
#define SET_UART3_TXD_PE10()        SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SYS_GPE_MFP2_PE10MFP_Msk)) | SYS_GPE_MFP2_PE10MFP_UART3_TXD)                   /*!< Set PE10 function to UART3_TXD          */
#define SET_UART3_TXD_PF5()         SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF5MFP_Msk)) | SYS_GPF_MFP1_PF5MFP_UART3_TXD)                     /*!< Set PF5 function to UART3_TXD           */
#define SET_UART3_nCTS_PB12()       SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB12MFP_Msk)) | SYS_GPB_MFP3_PB12MFP_UART3_nCTS)                  /*!< Set PB12 function to UART3_nCTS         */
#define SET_UART3_nCTS_PD2()        SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD2MFP_Msk)) | SYS_GPD_MFP0_PD2MFP_UART3_nCTS)                    /*!< Set PD2 function to UART3_nCTS          */
#define SET_UART3_nCTS_PH9()        SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH9MFP_Msk)) | SYS_GPH_MFP2_PH9MFP_UART3_nCTS)                    /*!< Set PH9 function to UART3_nCTS          */
#define SET_UART3_nRTS_PB13()       SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB13MFP_Msk)) | SYS_GPB_MFP3_PB13MFP_UART3_nRTS)                  /*!< Set PB13 function to UART3_nRTS         */
#define SET_UART3_nRTS_PD3()        SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD3MFP_Msk)) | SYS_GPD_MFP0_PD3MFP_UART3_nRTS)                    /*!< Set PD3 function to UART3_nRTS          */
#define SET_UART3_nRTS_PH8()        SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH8MFP_Msk)) | SYS_GPH_MFP2_PH8MFP_UART3_nRTS)                    /*!< Set PH8 function to UART3_nRTS          */
#define SET_UART4_RXD_PA13()        SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA13MFP_Msk)) | SYS_GPA_MFP3_PA13MFP_UART4_RXD)                   /*!< Set PA13 function to UART4_RXD          */
#define SET_UART4_RXD_PA2()         SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA2MFP_Msk)) | SYS_GPA_MFP0_PA2MFP_UART4_RXD)                     /*!< Set PA2 function to UART4_RXD           */
#define SET_UART4_RXD_PB10()        SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB10MFP_Msk)) | SYS_GPB_MFP2_PB10MFP_UART4_RXD)                   /*!< Set PB10 function to UART4_RXD          */
#define SET_UART4_RXD_PC4()         SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC4MFP_Msk)) | SYS_GPC_MFP1_PC4MFP_UART4_RXD)                     /*!< Set PC4 function to UART4_RXD           */
#define SET_UART4_RXD_PC6()         SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC6MFP_Msk)) | SYS_GPC_MFP1_PC6MFP_UART4_RXD)                     /*!< Set PC6 function to UART4_RXD           */
#define SET_UART4_RXD_PF6()         SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF6MFP_Msk)) | SYS_GPF_MFP1_PF6MFP_UART4_RXD)                     /*!< Set PF6 function to UART4_RXD           */
#define SET_UART4_RXD_PH11()        SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH11MFP_Msk)) | SYS_GPH_MFP2_PH11MFP_UART4_RXD)                   /*!< Set PH11 function to UART4_RXD          */
#define SET_UART4_TXD_PA12()        SYS->GPA_MFP3 = ((SYS->GPA_MFP3 & (~SYS_GPA_MFP3_PA12MFP_Msk)) | SYS_GPA_MFP3_PA12MFP_UART4_TXD)                   /*!< Set PA12 function to UART4_TXD          */
#define SET_UART4_TXD_PA3()         SYS->GPA_MFP0 = ((SYS->GPA_MFP0 & (~SYS_GPA_MFP0_PA3MFP_Msk)) | SYS_GPA_MFP0_PA3MFP_UART4_TXD)                     /*!< Set PA3 function to UART4_TXD           */
#define SET_UART4_TXD_PB11()        SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB11MFP_Msk)) | SYS_GPB_MFP2_PB11MFP_UART4_TXD)                   /*!< Set PB11 function to UART4_TXD          */
#define SET_UART4_TXD_PC5()         SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC5MFP_Msk)) | SYS_GPC_MFP1_PC5MFP_UART4_TXD)                     /*!< Set PC5 function to UART4_TXD           */
#define SET_UART4_TXD_PC7()         SYS->GPC_MFP1 = ((SYS->GPC_MFP1 & (~SYS_GPC_MFP1_PC7MFP_Msk)) | SYS_GPC_MFP1_PC7MFP_UART4_TXD)                     /*!< Set PC7 function to UART4_TXD           */
#define SET_UART4_TXD_PF7()         SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF7MFP_Msk)) | SYS_GPF_MFP1_PF7MFP_UART4_TXD)                     /*!< Set PF7 function to UART4_TXD           */
#define SET_UART4_TXD_PH10()        SYS->GPH_MFP2 = ((SYS->GPH_MFP2 & (~SYS_GPH_MFP2_PH10MFP_Msk)) | SYS_GPH_MFP2_PH10MFP_UART4_TXD)                   /*!< Set PH10 function to UART4_TXD          */
#define SET_UART4_nCTS_PA10()       SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA10MFP_Msk)) | SYS_GPA_MFP2_PA10MFP_UART4_nCTS)                  /*!< Set PA10 function to UART4_nCTS         */
#define SET_UART4_nCTS_PA4()        SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA4MFP_Msk)) | SYS_GPA_MFP1_PA4MFP_UART4_nCTS)                    /*!< Set PA4 function to UART4_nCTS          */
#define SET_UART4_nCTS_PC0()        SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC0MFP_Msk)) | SYS_GPC_MFP0_PC0MFP_UART4_nCTS)                    /*!< Set PC0 function to UART4_nCTS          */
#define SET_UART4_nCTS_PC8()        SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC8MFP_Msk)) | SYS_GPC_MFP2_PC8MFP_UART4_nCTS)                    /*!< Set PC8 function to UART4_nCTS          */
#define SET_UART4_nCTS_PE1()        SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE1MFP_Msk)) | SYS_GPE_MFP0_PE1MFP_UART4_nCTS)                    /*!< Set PE1 function to UART4_nCTS          */
#define SET_UART4_nRTS_PA11()       SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA11MFP_Msk)) | SYS_GPA_MFP2_PA11MFP_UART4_nRTS)                  /*!< Set PA11 function to UART4_nRTS         */
#define SET_UART4_nRTS_PA5()        SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA5MFP_Msk)) | SYS_GPA_MFP1_PA5MFP_UART4_nRTS)                    /*!< Set PA5 function to UART4_nRTS          */
#define SET_UART4_nRTS_PC1()        SYS->GPC_MFP0 = ((SYS->GPC_MFP0 & (~SYS_GPC_MFP0_PC1MFP_Msk)) | SYS_GPC_MFP0_PC1MFP_UART4_nRTS)                    /*!< Set PC1 function to UART4_nRTS          */
#define SET_UART4_nRTS_PE0()        SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE0MFP_Msk)) | SYS_GPE_MFP0_PE0MFP_UART4_nRTS)                    /*!< Set PE0 function to UART4_nRTS          */
#define SET_UART4_nRTS_PE13()       SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~SYS_GPE_MFP3_PE13MFP_Msk)) | SYS_GPE_MFP3_PE13MFP_UART4_nRTS)                  /*!< Set PE13 function to UART4_nRTS         */
#define SET_UART5_RXD_PA4()         SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA4MFP_Msk)) | SYS_GPA_MFP1_PA4MFP_UART5_RXD)                     /*!< Set PA4 function to UART5_RXD           */
#define SET_UART5_RXD_PB4()         SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB4MFP_Msk)) | SYS_GPB_MFP1_PB4MFP_UART5_RXD)                     /*!< Set PB4 function to UART5_RXD           */
#define SET_UART5_RXD_PE6()         SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE6MFP_Msk)) | SYS_GPE_MFP1_PE6MFP_UART5_RXD)                     /*!< Set PE6 function to UART5_RXD           */
#define SET_UART5_RXD_PF10()        SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SYS_GPF_MFP2_PF10MFP_Msk)) | SYS_GPF_MFP2_PF10MFP_UART5_RXD)                   /*!< Set PF10 function to UART5_RXD          */
#define SET_UART5_TXD_PA5()         SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA5MFP_Msk)) | SYS_GPA_MFP1_PA5MFP_UART5_TXD)                     /*!< Set PA5 function to UART5_TXD           */
#define SET_UART5_TXD_PB5()         SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB5MFP_Msk)) | SYS_GPB_MFP1_PB5MFP_UART5_TXD)                     /*!< Set PB5 function to UART5_TXD           */
#define SET_UART5_TXD_PE7()         SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE7MFP_Msk)) | SYS_GPE_MFP1_PE7MFP_UART5_TXD)                     /*!< Set PE7 function to UART5_TXD           */
#define SET_UART5_TXD_PF11()        SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SYS_GPF_MFP2_PF11MFP_Msk)) | SYS_GPF_MFP2_PF11MFP_UART5_TXD)                   /*!< Set PF11 function to UART5_TXD          */
#define SET_UART5_nCTS_PB2()        SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB2MFP_Msk)) | SYS_GPB_MFP0_PB2MFP_UART5_nCTS)                    /*!< Set PB2 function to UART5_nCTS          */
#define SET_UART5_nCTS_PF8()        SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SYS_GPF_MFP2_PF8MFP_Msk)) | SYS_GPF_MFP2_PF8MFP_UART5_nCTS)                    /*!< Set PF8 function to UART5_nCTS          */
#define SET_UART5_nRTS_PB3()        SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB3MFP_Msk)) | SYS_GPB_MFP0_PB3MFP_UART5_nRTS)                    /*!< Set PB3 function to UART5_nRTS          */
#define SET_UART5_nRTS_PF9()        SYS->GPF_MFP2 = ((SYS->GPF_MFP2 & (~SYS_GPF_MFP2_PF9MFP_Msk)) | SYS_GPF_MFP2_PF9MFP_UART5_nRTS)                    /*!< Set PF9 function to UART5_nRTS          */
#define SET_UART6_RXD_PC11()        SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC11MFP_Msk)) | SYS_GPC_MFP2_PC11MFP_UART6_RXD)                   /*!< Set PC11 function to UART6_RXD          */
#define SET_UART6_RXD_PE15()        SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~SYS_GPE_MFP3_PE15MFP_Msk)) | SYS_GPE_MFP3_PE15MFP_UART6_RXD)                   /*!< Set PE15 function to UART6_RXD          */
#define SET_UART6_RXD_PE4()         SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE4MFP_Msk)) | SYS_GPE_MFP1_PE4MFP_UART6_RXD)                     /*!< Set PE4 function to UART6_RXD           */
#define SET_UART6_RXD_PG14()        SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~SYS_GPG_MFP3_PG14MFP_Msk)) | SYS_GPG_MFP3_PG14MFP_UART6_RXD)                   /*!< Set PG14 function to UART6_RXD          */
#define SET_UART6_RXD_PH5()         SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SYS_GPH_MFP1_PH5MFP_Msk)) | SYS_GPH_MFP1_PH5MFP_UART6_RXD)                     /*!< Set PH5 function to UART6_RXD           */
#define SET_UART6_TXD_PC12()        SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC12MFP_Msk)) | SYS_GPC_MFP3_PC12MFP_UART6_TXD)                   /*!< Set PC12 function to UART6_TXD          */
#define SET_UART6_TXD_PE14()        SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~SYS_GPE_MFP3_PE14MFP_Msk)) | SYS_GPE_MFP3_PE14MFP_UART6_TXD)                   /*!< Set PE14 function to UART6_TXD          */
#define SET_UART6_TXD_PE5()         SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE5MFP_Msk)) | SYS_GPE_MFP1_PE5MFP_UART6_TXD)                     /*!< Set PE5 function to UART6_TXD           */
#define SET_UART6_TXD_PG13()        SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~SYS_GPG_MFP3_PG13MFP_Msk)) | SYS_GPG_MFP3_PG13MFP_UART6_TXD)                   /*!< Set PG13 function to UART6_TXD          */
#define SET_UART6_TXD_PH4()         SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SYS_GPH_MFP1_PH4MFP_Msk)) | SYS_GPH_MFP1_PH4MFP_UART6_TXD)                     /*!< Set PH4 function to UART6_TXD           */
#define SET_UART6_nCTS_PC9()        SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC9MFP_Msk)) | SYS_GPC_MFP2_PC9MFP_UART6_nCTS)                    /*!< Set PC9 function to UART6_nCTS          */
#define SET_UART6_nCTS_PE2()        SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE2MFP_Msk)) | SYS_GPE_MFP0_PE2MFP_UART6_nCTS)                    /*!< Set PE2 function to UART6_nCTS          */
#define SET_UART6_nRTS_PC10()       SYS->GPC_MFP2 = ((SYS->GPC_MFP2 & (~SYS_GPC_MFP2_PC10MFP_Msk)) | SYS_GPC_MFP2_PC10MFP_UART6_nRTS)                  /*!< Set PC10 function to UART6_nRTS         */
#define SET_UART6_nRTS_PE3()        SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE3MFP_Msk)) | SYS_GPE_MFP0_PE3MFP_UART6_nRTS)                    /*!< Set PE3 function to UART6_nRTS          */
#define SET_UART7_RXD_PD8()         SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD8MFP_Msk)) | SYS_GPD_MFP2_PD8MFP_UART7_RXD)                     /*!< Set PD8 function to UART7_RXD           */
#define SET_UART7_RXD_PE2()         SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE2MFP_Msk)) | SYS_GPE_MFP0_PE2MFP_UART7_RXD)                     /*!< Set PE2 function to UART7_RXD           */
#define SET_UART7_RXD_PG12()        SYS->GPG_MFP3 = ((SYS->GPG_MFP3 & (~SYS_GPG_MFP3_PG12MFP_Msk)) | SYS_GPG_MFP3_PG12MFP_UART7_RXD)                   /*!< Set PG12 function to UART7_RXD          */
#define SET_UART7_RXD_PH7()         SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SYS_GPH_MFP1_PH7MFP_Msk)) | SYS_GPH_MFP1_PH7MFP_UART7_RXD)                     /*!< Set PH7 function to UART7_RXD           */
#define SET_UART7_TXD_PD9()         SYS->GPD_MFP2 = ((SYS->GPD_MFP2 & (~SYS_GPD_MFP2_PD9MFP_Msk)) | SYS_GPD_MFP2_PD9MFP_UART7_TXD)                     /*!< Set PD9 function to UART7_TXD           */
#define SET_UART7_TXD_PE3()         SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE3MFP_Msk)) | SYS_GPE_MFP0_PE3MFP_UART7_TXD)                     /*!< Set PE3 function to UART7_TXD           */
#define SET_UART7_TXD_PG11()        SYS->GPG_MFP2 = ((SYS->GPG_MFP2 & (~SYS_GPG_MFP2_PG11MFP_Msk)) | SYS_GPG_MFP2_PG11MFP_UART7_TXD)                   /*!< Set PG11 function to UART7_TXD          */
#define SET_UART7_TXD_PH6()         SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SYS_GPH_MFP1_PH6MFP_Msk)) | SYS_GPH_MFP1_PH6MFP_UART7_TXD)                     /*!< Set PH6 function to UART7_TXD           */
#define SET_UART7_nCTS_PE4()        SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE4MFP_Msk)) | SYS_GPE_MFP1_PE4MFP_UART7_nCTS)                    /*!< Set PE4 function to UART7_nCTS          */
#define SET_UART7_nCTS_PH5()        SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SYS_GPH_MFP1_PH5MFP_Msk)) | SYS_GPH_MFP1_PH5MFP_UART7_nCTS)                    /*!< Set PH5 function to UART7_nCTS          */
#define SET_UART7_nRTS_PE5()        SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE5MFP_Msk)) | SYS_GPE_MFP1_PE5MFP_UART7_nRTS)                    /*!< Set PE5 function to UART7_nRTS          */
#define SET_UART7_nRTS_PH4()        SYS->GPH_MFP1 = ((SYS->GPH_MFP1 & (~SYS_GPH_MFP1_PH4MFP_Msk)) | SYS_GPH_MFP1_PH4MFP_UART7_nRTS)                    /*!< Set PH4 function to UART7_nRTS          */
#define SET_UART8_RXD_PA6()         SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA6MFP_Msk)) | SYS_GPA_MFP1_PA6MFP_UART8_RXD)                     /*!< Set PA6 function to UART8_RXD           */
#define SET_UART8_RXD_PB9()         SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB9MFP_Msk)) | SYS_GPB_MFP2_PB9MFP_UART8_RXD)                     /*!< Set PB9 function to UART8_RXD           */
#define SET_UART8_TXD_PA7()         SYS->GPA_MFP1 = ((SYS->GPA_MFP1 & (~SYS_GPA_MFP1_PA7MFP_Msk)) | SYS_GPA_MFP1_PA7MFP_UART8_TXD)                     /*!< Set PA7 function to UART8_TXD           */
#define SET_UART8_TXD_PB12()        SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB12MFP_Msk)) | SYS_GPB_MFP3_PB12MFP_UART8_TXD)                   /*!< Set PB12 function to UART8_TXD          */
#define SET_UART9_RXD_PA10()        SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA10MFP_Msk)) | SYS_GPA_MFP2_PA10MFP_UART9_RXD)                   /*!< Set PA10 function to UART9_RXD          */
#define SET_UART9_RXD_PB6()         SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB6MFP_Msk)) | SYS_GPB_MFP1_PB6MFP_UART9_RXD)                     /*!< Set PB6 function to UART9_RXD           */
#define SET_UART9_RXD_PF2()         SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF2MFP_Msk)) | SYS_GPF_MFP0_PF2MFP_UART9_RXD)                     /*!< Set PF2 function to UART9_RXD           */
#define SET_UART9_RXD_PF3()         SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF3MFP_Msk)) | SYS_GPF_MFP0_PF3MFP_UART9_RXD)                     /*!< Set PF3 function to UART9_RXD           */
#define SET_UART9_TXD_PA11()        SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA11MFP_Msk)) | SYS_GPA_MFP2_PA11MFP_UART9_TXD)                   /*!< Set PA11 function to UART9_TXD          */
#define SET_UART9_TXD_PB7()         SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB7MFP_Msk)) | SYS_GPB_MFP1_PB7MFP_UART9_TXD)                     /*!< Set PB7 function to UART9_TXD           */
#define SET_UART9_TXD_PF3()         SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF3MFP_Msk)) | SYS_GPF_MFP0_PF3MFP_UART9_TXD)                     /*!< Set PF3 function to UART9_TXD           */
#define SET_UART9_TXD_PF4()         SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF4MFP_Msk)) | SYS_GPF_MFP1_PF4MFP_UART9_TXD)                     /*!< Set PF4 function to UART9_TXD           */
#define SET_USB_VBUS_EN_PB15()      SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB15MFP_Msk)) | SYS_GPB_MFP3_PB15MFP_USB_VBUS_EN)                 /*!< Set PB15 function to USB_VBUS_EN        */
#define SET_USB_VBUS_EN_PB6()       SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB6MFP_Msk)) | SYS_GPB_MFP1_PB6MFP_USB_VBUS_EN)                   /*!< Set PB6 function to USB_VBUS_EN         */
#define SET_USB_VBUS_EN_PB8()       SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB8MFP_Msk)) | SYS_GPB_MFP2_PB8MFP_USB_VBUS_EN)                   /*!< Set PB8 function to USB_VBUS_EN         */
#define SET_USB_VBUS_ST_PB13()      SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB13MFP_Msk)) | SYS_GPB_MFP3_PB13MFP_USB_VBUS_ST)                 /*!< Set PB13 function to USB_VBUS_ST        */
#define SET_USB_VBUS_ST_PB14()      SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB14MFP_Msk)) | SYS_GPB_MFP3_PB14MFP_USB_VBUS_ST)                 /*!< Set PB14 function to USB_VBUS_ST        */
#define SET_USB_VBUS_ST_PB7()       SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB7MFP_Msk)) | SYS_GPB_MFP1_PB7MFP_USB_VBUS_ST)                   /*!< Set PB7 function to USB_VBUS_ST         */
#define SET_USB_VBUS_ST_PB8()       SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB8MFP_Msk)) | SYS_GPB_MFP2_PB8MFP_USB_VBUS_ST)                   /*!< Set PB8 function to USB_VBUS_ST         */
#define SET_USB_VBUS_ST_PB9()       SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB9MFP_Msk)) | SYS_GPB_MFP2_PB9MFP_USB_VBUS_ST)                   /*!< Set PB9 function to USB_VBUS_ST         */
#define SET_USB_VBUS_ST_PC14()      SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC14MFP_Msk)) | SYS_GPC_MFP3_PC14MFP_USB_VBUS_ST)                 /*!< Set PC14 function to USB_VBUS_ST        */
#define SET_USB_VBUS_ST_PD4()       SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD4MFP_Msk)) | SYS_GPD_MFP1_PD4MFP_USB_VBUS_ST)                   /*!< Set PD4 function to USB_VBUS_ST         */
#define SET_USCI0_CLK_PA11()        SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA11MFP_Msk)) | SYS_GPA_MFP2_PA11MFP_USCI0_CLK)                   /*!< Set PA11 function to USCI0_CLK          */
#define SET_USCI0_CLK_PB12()        SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB12MFP_Msk)) | SYS_GPB_MFP3_PB12MFP_USCI0_CLK)                   /*!< Set PB12 function to USCI0_CLK          */
#define SET_USCI0_CLK_PD0()         SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD0MFP_Msk)) | SYS_GPD_MFP0_PD0MFP_USCI0_CLK)                     /*!< Set PD0 function to USCI0_CLK           */
#define SET_USCI0_CLK_PE2()         SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE2MFP_Msk)) | SYS_GPE_MFP0_PE2MFP_USCI0_CLK)                     /*!< Set PE2 function to USCI0_CLK           */
#define SET_USCI0_CTL0_PB0()        SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB0MFP_Msk)) | SYS_GPB_MFP0_PB0MFP_USCI0_CTL0)                    /*!< Set PB0 function to USCI0_CTL0          */
#define SET_USCI0_CTL0_PB13()       SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB13MFP_Msk)) | SYS_GPB_MFP3_PB13MFP_USCI0_CTL0)                  /*!< Set PB13 function to USCI0_CTL0         */
#define SET_USCI0_CTL0_PC13()       SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC13MFP_Msk)) | SYS_GPC_MFP3_PC13MFP_USCI0_CTL0)                  /*!< Set PC13 function to USCI0_CTL0         */
#define SET_USCI0_CTL0_PC14()       SYS->GPC_MFP3 = ((SYS->GPC_MFP3 & (~SYS_GPC_MFP3_PC14MFP_Msk)) | SYS_GPC_MFP3_PC14MFP_USCI0_CTL0)                  /*!< Set PC14 function to USCI0_CTL0         */
#define SET_USCI0_CTL0_PD4()        SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD4MFP_Msk)) | SYS_GPD_MFP1_PD4MFP_USCI0_CTL0)                    /*!< Set PD4 function to USCI0_CTL0          */
#define SET_USCI0_CTL0_PE6()        SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE6MFP_Msk)) | SYS_GPE_MFP1_PE6MFP_USCI0_CTL0)                    /*!< Set PE6 function to USCI0_CTL0          */
#define SET_USCI0_CTL1_PA8()        SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA8MFP_Msk)) | SYS_GPA_MFP2_PA8MFP_USCI0_CTL1)                    /*!< Set PA8 function to USCI0_CTL1          */
#define SET_USCI0_CTL1_PB15()       SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB15MFP_Msk)) | SYS_GPB_MFP3_PB15MFP_USCI0_CTL1)                  /*!< Set PB15 function to USCI0_CTL1         */
#define SET_USCI0_CTL1_PD3()        SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD3MFP_Msk)) | SYS_GPD_MFP0_PD3MFP_USCI0_CTL1)                    /*!< Set PD3 function to USCI0_CTL1          */
#define SET_USCI0_CTL1_PE5()        SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE5MFP_Msk)) | SYS_GPE_MFP1_PE5MFP_USCI0_CTL1)                    /*!< Set PE5 function to USCI0_CTL1          */
#define SET_USCI0_CTL1_PF0()        SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF0MFP_Msk)) | SYS_GPF_MFP0_PF0MFP_USCI0_CTL1)                    /*!< Set PF0 function to USCI0_CTL1          */
#define SET_USCI0_DAT0_PA10()       SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA10MFP_Msk)) | SYS_GPA_MFP2_PA10MFP_USCI0_DAT0)                  /*!< Set PA10 function to USCI0_DAT0         */
#define SET_USCI0_DAT0_PB13()       SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB13MFP_Msk)) | SYS_GPB_MFP3_PB13MFP_USCI0_DAT0)                  /*!< Set PB13 function to USCI0_DAT0         */
#define SET_USCI0_DAT0_PD1()        SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD1MFP_Msk)) | SYS_GPD_MFP0_PD1MFP_USCI0_DAT0)                    /*!< Set PD1 function to USCI0_DAT0          */
#define SET_USCI0_DAT0_PE3()        SYS->GPE_MFP0 = ((SYS->GPE_MFP0 & (~SYS_GPE_MFP0_PE3MFP_Msk)) | SYS_GPE_MFP0_PE3MFP_USCI0_DAT0)                    /*!< Set PE3 function to USCI0_DAT0          */
#define SET_USCI0_DAT1_PA9()        SYS->GPA_MFP2 = ((SYS->GPA_MFP2 & (~SYS_GPA_MFP2_PA9MFP_Msk)) | SYS_GPA_MFP2_PA9MFP_USCI0_DAT1)                    /*!< Set PA9 function to USCI0_DAT1          */
#define SET_USCI0_DAT1_PB14()       SYS->GPB_MFP3 = ((SYS->GPB_MFP3 & (~SYS_GPB_MFP3_PB14MFP_Msk)) | SYS_GPB_MFP3_PB14MFP_USCI0_DAT1)                  /*!< Set PB14 function to USCI0_DAT1         */
#define SET_USCI0_DAT1_PD2()        SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD2MFP_Msk)) | SYS_GPD_MFP0_PD2MFP_USCI0_DAT1)                    /*!< Set PD2 function to USCI0_DAT1          */
#define SET_USCI0_DAT1_PE4()        SYS->GPE_MFP1 = ((SYS->GPE_MFP1 & (~SYS_GPE_MFP1_PE4MFP_Msk)) | SYS_GPE_MFP1_PE4MFP_USCI0_DAT1)                    /*!< Set PE4 function to USCI0_DAT1          */
#define SET_USCI0_DAT1_PF1()        SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF1MFP_Msk)) | SYS_GPF_MFP0_PF1MFP_USCI0_DAT1)                    /*!< Set PF1 function to USCI0_DAT1          */
#define SET_USCI1_CLK_PB1()         SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB1MFP_Msk)) | SYS_GPB_MFP0_PB1MFP_USCI1_CLK)                     /*!< Set PB1 function to USCI1_CLK           */
#define SET_USCI1_CLK_PB8()         SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB8MFP_Msk)) | SYS_GPB_MFP2_PB8MFP_USCI1_CLK)                     /*!< Set PB8 function to USCI1_CLK           */
#define SET_USCI1_CLK_PD7()         SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD7MFP_Msk)) | SYS_GPD_MFP1_PD7MFP_USCI1_CLK)                     /*!< Set PD7 function to USCI1_CLK           */
#define SET_USCI1_CLK_PE12()        SYS->GPE_MFP3 = ((SYS->GPE_MFP3 & (~SYS_GPE_MFP3_PE12MFP_Msk)) | SYS_GPE_MFP3_PE12MFP_USCI1_CLK)                   /*!< Set PE12 function to USCI1_CLK          */
#define SET_USCI1_CTL0_PB10()       SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB10MFP_Msk)) | SYS_GPB_MFP2_PB10MFP_USCI1_CTL0)                  /*!< Set PB10 function to USCI1_CTL0         */
#define SET_USCI1_CTL0_PB5()        SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB5MFP_Msk)) | SYS_GPB_MFP1_PB5MFP_USCI1_CTL0)                    /*!< Set PB5 function to USCI1_CTL0          */
#define SET_USCI1_CTL0_PD3()        SYS->GPD_MFP0 = ((SYS->GPD_MFP0 & (~SYS_GPD_MFP0_PD3MFP_Msk)) | SYS_GPD_MFP0_PD3MFP_USCI1_CTL0)                    /*!< Set PD3 function to USCI1_CTL0          */
#define SET_USCI1_CTL0_PE9()        SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SYS_GPE_MFP2_PE9MFP_Msk)) | SYS_GPE_MFP2_PE9MFP_USCI1_CTL0)                    /*!< Set PE9 function to USCI1_CTL0          */
#define SET_USCI1_CTL1_PB4()        SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB4MFP_Msk)) | SYS_GPB_MFP1_PB4MFP_USCI1_CTL1)                    /*!< Set PB4 function to USCI1_CTL1          */
#define SET_USCI1_CTL1_PB9()        SYS->GPB_MFP2 = ((SYS->GPB_MFP2 & (~SYS_GPB_MFP2_PB9MFP_Msk)) | SYS_GPB_MFP2_PB9MFP_USCI1_CTL1)                    /*!< Set PB9 function to USCI1_CTL1          */
#define SET_USCI1_CTL1_PD4()        SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD4MFP_Msk)) | SYS_GPD_MFP1_PD4MFP_USCI1_CTL1)                    /*!< Set PD4 function to USCI1_CTL1          */
#define SET_USCI1_CTL1_PE8()        SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SYS_GPE_MFP2_PE8MFP_Msk)) | SYS_GPE_MFP2_PE8MFP_USCI1_CTL1)                    /*!< Set PE8 function to USCI1_CTL1          */
#define SET_USCI1_DAT0_PB2()        SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB2MFP_Msk)) | SYS_GPB_MFP0_PB2MFP_USCI1_DAT0)                    /*!< Set PB2 function to USCI1_DAT0          */
#define SET_USCI1_DAT0_PB7()        SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB7MFP_Msk)) | SYS_GPB_MFP1_PB7MFP_USCI1_DAT0)                    /*!< Set PB7 function to USCI1_DAT0          */
#define SET_USCI1_DAT0_PD5()        SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD5MFP_Msk)) | SYS_GPD_MFP1_PD5MFP_USCI1_DAT0)                    /*!< Set PD5 function to USCI1_DAT0          */
#define SET_USCI1_DAT0_PE10()       SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SYS_GPE_MFP2_PE10MFP_Msk)) | SYS_GPE_MFP2_PE10MFP_USCI1_DAT0)                  /*!< Set PE10 function to USCI1_DAT0         */
#define SET_USCI1_DAT1_PB3()        SYS->GPB_MFP0 = ((SYS->GPB_MFP0 & (~SYS_GPB_MFP0_PB3MFP_Msk)) | SYS_GPB_MFP0_PB3MFP_USCI1_DAT1)                    /*!< Set PB3 function to USCI1_DAT1          */
#define SET_USCI1_DAT1_PB6()        SYS->GPB_MFP1 = ((SYS->GPB_MFP1 & (~SYS_GPB_MFP1_PB6MFP_Msk)) | SYS_GPB_MFP1_PB6MFP_USCI1_DAT1)                    /*!< Set PB6 function to USCI1_DAT1          */
#define SET_USCI1_DAT1_PD6()        SYS->GPD_MFP1 = ((SYS->GPD_MFP1 & (~SYS_GPD_MFP1_PD6MFP_Msk)) | SYS_GPD_MFP1_PD6MFP_USCI1_DAT1)                    /*!< Set PD6 function to USCI1_DAT1          */
#define SET_USCI1_DAT1_PE11()       SYS->GPE_MFP2 = ((SYS->GPE_MFP2 & (~SYS_GPE_MFP2_PE11MFP_Msk)) | SYS_GPE_MFP2_PE11MFP_USCI1_DAT1)                  /*!< Set PE11 function to USCI1_DAT1         */
#define SET_X32_IN_PF5()            SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF5MFP_Msk)) | SYS_GPF_MFP1_PF5MFP_X32_IN)                        /*!< Set PF5 function to X32_IN              */
#define SET_X32_OUT_PF4()           SYS->GPF_MFP1 = ((SYS->GPF_MFP1 & (~SYS_GPF_MFP1_PF4MFP_Msk)) | SYS_GPF_MFP1_PF4MFP_X32_OUT)                       /*!< Set PF4 function to X32_OUT             */
#define SET_XT1_IN_PF3()            SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF3MFP_Msk)) | SYS_GPF_MFP0_PF3MFP_XT1_IN)                        /*!< Set PF3 function to XT1_IN              */
#define SET_XT1_OUT_PF2()           SYS->GPF_MFP0 = ((SYS->GPF_MFP0 & (~SYS_GPF_MFP0_PF2MFP_Msk)) | SYS_GPF_MFP0_PF2MFP_XT1_OUT)                       /*!< Set PF2 function to XT1_OUT             */



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
  *             - \ref SYS_BODCTL_BODVL_2_8V
  *             - \ref SYS_BODCTL_BODVL_3_7V
  *             - \ref SYS_BODCTL_BODVL_4_4V
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
#define SYS_IS_LVR_RST()                (SYS->RSTSTS & SYS_RSTSTS_LVRRF_Msk)

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
  * @brief      Clear reset source flag
  * @param[in]  u32RstSrc is reset source. Including :
  *             - \ref SYS_RSTSTS_PORF_Msk
  *             - \ref SYS_RSTSTS_PINRF_Msk
  *             - \ref SYS_RSTSTS_WDTRF_Msk
  *             - \ref SYS_RSTSTS_LVRRF_Msk
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

/**
  * @brief      Disable SRAM ECC function
  * @param      None
  * @return     None
  * @details    This macro disable SRAM ECC function.
  * \hideinitializer
  */
#define SYS_DISABLE_SRAM_ECC()              (SYS->SRAM_ECCEN &= ~SYS_SRAM_ECCEN_ECCEN_Msk)

/**
  * @brief      Enable SRAM ECC function
  * @param      None
  * @return     None
  * @details    This macro enable SRAM ECC function.
  * \hideinitializer
  */
#define SYS_ENABLE_SRAM_ECC()               (SYS->SRAM_ECCEN |= SYS_SRAM_ECCEN_ECCEN_Msk)

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

        if (--u32TimeOutCount == 0) break;
    } while (SYS->REGLCTL == 0UL);
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
void SYS_SetVRef(uint32_t u32VRefCTL);

/** @} end of group SYS_EXPORTED_FUNCTIONS */

/** @} end of group SYS_Driver */

/** @} end of group Standard_Driver */


#ifdef __cplusplus
}
#endif

#endif  /* __SYS_H__ */
