/**************************************************************************//**
 * @file     m3331.h
 * @version  V3.00
 * @brief    M3331 peripheral access layer header file.
 *           This file contains all the peripheral register's definitions,
 *           bits definitions and memory mapping for NuMicro M3331 MCU.
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright (c) 2025 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
/**
  \mainpage NuMicro M3331 Driver Reference Guide
  *
  * <b>Introduction</b>
  *
  * This user manual describes the usage of M3331 Series MCU device driver
  *
  * <b>Disclaimer</b>
  *
  * The Software is furnished "AS IS", without warranty as to performance or results, and
  * the entire risk as to performance or results is assumed by YOU. Nuvoton disclaims all
  * warranties, express, implied or otherwise, with regard to the Software, its use, or
  * operation, including without limitation any and all warranties of merchantability, fitness
  * for a particular purpose, and non-infringement of intellectual property rights.
  *
  * <b>Important Notice</b>
  *
  * Nuvoton Products are neither intended nor warranted for usage in systems or equipment,
  * any malfunction or failure of which may cause loss of human life, bodily injury or severe
  * property damage. Such applications are deemed, "Insecure Usage".
  *
  * Insecure usage includes, but is not limited to: equipment for surgical implementation,
  * atomic energy control instruments, airplane or spaceship instruments, the control or
  * operation of dynamic, brake or safety systems designed for vehicular use, traffic signal
  * instruments, all types of safety devices, and other applications intended to support or
  * sustain life.
  *
  * All Insecure Usage shall be made at customer's risk, and in the event that third parties
  * lay claims to Nuvoton as a result of customer's Insecure Usage, customer shall indemnify
  * the damages and liabilities thus incurred by Nuvoton.
  *
  * Please note that all data and specifications are subject to change without notice. All the
  * trademarks of products and companies mentioned in this datasheet belong to their respective
  * owners.
  *
  * <b>Copyright Notice</b>
  *
  * Copyright (C) 2025 Nuvoton Technology Corp. All rights reserved.
  */
#ifndef __M3331_H__
#define __M3331_H__

#ifdef __cplusplus
extern "C" {
#endif


/******************************************************************************/
/*                Processor and Core Peripherals                              */
/******************************************************************************/
/** @addtogroup CMSIS_Device Device CMSIS Definitions
  Configuration of the Cortex-M33 Processor and Core Peripherals
  @{
*/

/**
 * @details  Interrupt Number Definition.
 */
typedef enum IRQn
{
    /******  Cortex-M33 Processor Exceptions Numbers ***************************************************/
    NonMaskableInt_IRQn           = -14,      /*!<  2 Non Maskable Interrupt                        */
    MemoryManagement_IRQn         = -12,      /*!<  4 Memory Management Interrupt                   */
    BusFault_IRQn                 = -11,      /*!<  5 Bus Fault Interrupt                           */
    UsageFault_IRQn               = -10,      /*!<  6 Usage Fault Interrupt                         */
    SVCall_IRQn                   = -5,       /*!< 11 SV Call Interrupt                             */
    DebugMonitor_IRQn             = -4,       /*!< 12 Debug Monitor Interrupt                       */
    PendSV_IRQn                   = -2,       /*!< 14 Pend SV Interrupt                             */
    SysTick_IRQn                  = -1,       /*!< 15 System Tick Interrupt                         */

    /******  M3331 Specific Interrupt Numbers ********************************************************/

    BOD_IRQn                      = 0,        /*!< Brown Out detection Interrupt                    */
    IRC_IRQn                      = 1,        /*!< Internal RC Interrupt                            */
    PWRWU_IRQn                    = 2,        /*!< Power Down Wake Up Interrupt                     */
    RAMPE_IRQn                    = 3,        /*!< SRAM parity check failed Interrupt               */
    CKFAIL_IRQn                   = 4,        /*!< Clock failed Interrupt                           */
    ISP_IRQn                      = 5,        /*!< FMC ISP Interrupt                                */
    RTC_IRQn                      = 6,        /*!< Real Time Clock Interrupt                        */
    WDT0_IRQn                     = 8,        /*!< Watchdog timer 0 Interrupt                       */
    WWDT0_IRQn                    = 9,        /*!< Window Watchdog timer 0 Interrupt                */
    EINT0_IRQn                    = 10,       /*!< External Input 0 Interrupt                       */
    EINT1_IRQn                    = 11,       /*!< External Input 1 Interrupt                       */
    EINT2_IRQn                    = 12,       /*!< External Input 2 Interrupt                       */
    EINT3_IRQn                    = 13,       /*!< External Input 3 Interrupt                       */
    EINT4_IRQn                    = 14,       /*!< External Input 4 Interrupt                       */
    EINT5_IRQn                    = 15,       /*!< External Input 5 Interrupt                       */
    GPA_IRQn                      = 16,       /*!< GPIO Port A Interrupt                            */
    GPB_IRQn                      = 17,       /*!< GPIO Port B Interrupt                            */
    GPC_IRQn                      = 18,       /*!< GPIO Port C Interrupt                            */
    GPD_IRQn                      = 19,       /*!< GPIO Port D Interrupt                            */
    GPE_IRQn                      = 20,       /*!< GPIO Port E Interrupt                            */
    GPF_IRQn                      = 21,       /*!< GPIO Port F Interrupt                            */
    QSPI0_IRQn                    = 22,       /*!< QSPI0 Interrupt                                  */
    SPI0_IRQn                     = 23,       /*!< SPI0 Interrupt                                   */
    BRAKE0_IRQn                   = 24,       /*!< BRAKE0 Interrupt                                 */
    EPWM0P0_IRQn                  = 25,       /*!< EPWM0P0 Interrupt                                */
    EPWM0P1_IRQn                  = 26,       /*!< EPWM0P1 Interrupt                                */
    EPWM0P2_IRQn                  = 27,       /*!< EPWM0P2 Interrupt                                */
    BRAKE1_IRQn                   = 28,       /*!< BRAKE1 Interrupt                                 */
    EPWM1P0_IRQn                  = 29,       /*!< EPWM1P0 Interrupt                                */
    EPWM1P1_IRQn                  = 30,       /*!< EPWM1P1 Interrupt                                */
    EPWM1P2_IRQn                  = 31,       /*!< EPWM1P2 Interrupt                                */
    TMR0_IRQn                     = 32,       /*!< Timer 0 Interrupt                                */
    TMR1_IRQn                     = 33,       /*!< Timer 1 Interrupt                                */
    TMR2_IRQn                     = 34,       /*!< Timer 2 Interrupt                                */
    TMR3_IRQn                     = 35,       /*!< Timer 3 Interrupt                                */
    UART0_IRQn                    = 36,       /*!< UART 0 Interrupt                                 */
    UART1_IRQn                    = 37,       /*!< UART 1 Interrupt                                 */
    I2C0_IRQn                     = 38,       /*!< I2C 0 Interrupt                                  */
    I2C1_IRQn                     = 39,       /*!< I2C 1 Interrupt                                  */
    PDMA0_IRQn                    = 40,       /*!< Peripheral DMA 0 Interrupt                       */
    EADC00_IRQn                   = 42,       /*!< EADC00 Interrupt                                 */
    EADC01_IRQn                   = 43,       /*!< EADC01 Interrupt                                 */
    ACMP01_IRQn                   = 44,       /*!< Analog Comparator 0 and 1 Interrupt              */
    EADC02_IRQn                   = 46,       /*!< EADC02 Interrupt                                 */
    EADC03_IRQn                   = 47,       /*!< EADC03 Interrupt                                 */
    UART2_IRQn                    = 48,       /*!< UART2 Interrupt                                  */
    UART3_IRQn                    = 49,       /*!< UART3 Interrupt                                  */
    SPI1_IRQn                     = 51,       /*!< SPI1 Interrupt                                   */
    SPI2_IRQn                     = 52,       /*!< SPI2 Interrupt                                   */
    USBH_IRQn                     = 54,       /*!< USB host Interrupt                               */
    ETI_IRQn                      = 56,       /*!< ETI Interrupt                                    */
    CRC_IRQn                      = 57,       /*!< CRC Interrupt                                    */
    NS_ISP_IRQn                   = 59,       /*!< FMC_NS ISP Interrupt                             */
    SCU_IRQn                      = 60,       /*!< SCU Interrupt                                    */
    SDH0_IRQn                     = 64,       /*!< Secure Digital Host Controller 0 Interrupt       */
    USBD20_IRQn                   = 65,       /*!< High Speed USB device Interrupt                  */
    WDT1_IRQn                     = 67,       /*!< WDT1 Interrupt                                   */
    I2S0_IRQn                     = 68,       /*!< I2S0 Interrupt                                   */
    GPG_IRQn                      = 72,       /*!< GPIO Port G Interrupt                            */
    EINT6_IRQn                    = 73,       /*!< External Input 6 Interrupt                       */
    UART4_IRQn                    = 74,       /*!< UART4 Interrupt                                  */
    USCI0_IRQn                    = 76,       /*!< USCI0 Interrupt                                  */
    USCI1_IRQn                    = 77,       /*!< USCI1 Interrupt                                  */
    BPWM0_IRQn                    = 78,       /*!< BPWM0 Interrupt                                  */
    BPWM1_IRQn                    = 79,       /*!< BPWM1 Interrupt                                  */
    I2C2_IRQn                     = 82,       /*!< I2C2 Interrupt                                   */
    EQEI0_IRQn                    = 84,       /*!< EQEI0 Interrupt                                  */
    ECAP0_IRQn                    = 86,       /*!< ECAP0 Interrupt                                  */
    GPH_IRQn                      = 88,       /*!< GPIO Port H Interrupt                            */
    EINT7_IRQn                    = 89,       /*!< External Input 7 Interrupt                       */
    WWDT1_IRQn                    = 91,       /*!< WWDT1 Interrupt                                  */
    HSUSBH_IRQn                   = 92,       /*!< High speed USB host Interrupt                    */
    USBOTG20_IRQn                 = 93,       /*!< High speed USB OTG Interrupt                     */
    NS_RAMPE_IRQn                 = 96,       /*!< NS SRAM parity check failed Interrupt            */
    PDMA1_IRQn                    = 98,       /*!< Peripheral DMA 1 Interrupt                       */
    I3C0_IRQn                     = 108,      /*!< I3C0 Interrupt                                   */
    CANFD00_IRQn                  = 112,      /*!< CANFD00 Interrupt                                */
    CANFD01_IRQn                  = 113,      /*!< CANFD01 Interrupt                                */
    CANFD10_IRQn                  = 114,      /*!< CANFD10 Interrupt                                */
    CANFD11_IRQn                  = 115,      /*!< CANFD11 Interrupt                                */
    PDCI_IRQn                     = 119,      /*!< PDCI Interrupt                                   */
    LLSI0_IRQn                    = 128,      /*!< LLSI0 Interrupt                                  */
    LLSI1_IRQn                    = 129,      /*!< LLSI1 Interrupt                                  */
    LLSI2_IRQn                    = 130,      /*!< LLSI2 Interrupt                                  */
    LLSI3_IRQn                    = 131,      /*!< LLSI3 Interrupt                                  */
    LLSI4_IRQn                    = 132,      /*!< LLSI4 Interrupt                                  */
    LLSI5_IRQn                    = 133,      /*!< LLSI5 Interrupt                                  */
    LLSI6_IRQn                    = 134,      /*!< LLSI6 Interrupt                                  */
    LLSI7_IRQn                    = 135,      /*!< LLSI7 Interrupt                                  */
    LLSI8_IRQn                    = 136,      /*!< LLSI8 Interrupt                                  */
    LLSI9_IRQn                    = 137,      /*!< LLSI9 Interrupt                                  */
    ELLSI0_IRQn                   = 138,      /*!< ELLSI0 Interrupt                                 */
    BPWM2_IRQn                    = 139,      /*!< BPWM2 Interrupt                                  */
    BPWM3_IRQn                    = 140,      /*!< BPWM3 Interrupt                                  */
    BPWM4_IRQn                    = 141,      /*!< BPWM4 Interrupt                                  */
    BPWM5_IRQn                    = 142,      /*!< BPWM5 Interrupt                                  */
}
IRQn_Type;


/*
 * ==========================================================================
 * ----------- Processor and Core Peripheral Section ------------------------
 * ==========================================================================
 */

/* Configuration of the Processor and Core Peripherals */
#define __NVIC_PRIO_BITS          3UL         /*!< Number of Bits used for Priority Levels          */
#define __Vendor_SysTickConfig    0UL         /*!< Set to 1 if different SysTick Config is used     */
#define __MPU_PRESENT             1UL         /*!< MPU present or not                               */
#define __SAU_PRESENT             0UL         /*!< SAU present or not                               */
#define __SAUREGION_PRESENT       0UL         /*!< SAU region present or not                        */
#define __FPU_PRESENT             1UL         /*!< FPU present or not                               */
#define __DSP_PRESENT             1UL         /*!< DSP present or not                               */

/*@}*/ /* end of group CMSIS_Device */


#include "core_cm33.h"               /* Cortex-M33 processor and core peripherals           */
#include "system_m3331.h"            /* System include file                         */
#include <stdint.h>



#if defined (__CC_ARM)
#pragma anon_unions
#endif

/******************************************************************************/
/*                            Register definitions                            */
/******************************************************************************/

#include "sys_reg.h"
#include "clk_reg.h"
#include "fmc_reg.h"
#include "gpio_reg.h"
#include "pdma_reg.h"
#include "timer_reg.h"
#include "wdt_reg.h"
#include "wwdt_reg.h"
#include "rtc_reg.h"
#include "epwm_reg.h"
#include "bpwm_reg.h"
#include "eqei_reg.h"
#include "ecap_reg.h"
#include "uart_reg.h"
#include "i2s_reg.h"
#include "spi_reg.h"
#include "qspi_reg.h"
#include "i2c_reg.h"
#include "uuart_reg.h"
#include "uspi_reg.h"
#include "ui2c_reg.h"
#include "canfd_reg.h"
#include "sdh_reg.h"
#include "ebi_reg.h"
#include "hsusbd_reg.h"
#include "usbh_reg.h"
#include "hsusbh_reg.h"
#include "hsotg_reg.h"
#include "crc_reg.h"
#include "eadc_reg.h"
#include "acmp_reg.h"
#include "cache_reg.h"
#include "scu_reg.h"
#include "i3c_reg.h"
#include "llsi_reg.h"
#include "ellsi_reg.h"



/** @addtogroup PERIPHERAL_MEM_MAP Peripheral Memory Base
  Memory Mapped Structure for Peripherals
  @{
 */
/* Peripheral and SRAM base address */
#define FLASH_BASE           ((uint32_t)0x00000000)      /*!< Flash base address      */
#define SRAM_BASE            ((uint32_t)0x20000000)      /*!< SRAM Base Address       */
#define PERIPH_BASE          ((uint32_t)0x40000000)      /*!< Peripheral Base Address */

/*!< AHB peripherals */
//HCLK
// CPU,CRC,EBI,FMC,PDMA,SD0,SRAM,HSUSBD, HSUSBH, USBH
#define SYS_BASE               (PERIPH_BASE + 0x00000UL)
#define CLK_BASE               (PERIPH_BASE + 0x00200UL)
#define NMI_BASE               (PERIPH_BASE + 0x00300UL)
#define SCU_BASE               (PERIPH_BASE + 0x2F000UL)
#define CACHE_BASE             (PERIPH_BASE + 0x36000UL)
#define GPIOA_BASE             (PERIPH_BASE + 0x04000UL)
#define GPIOB_BASE             (PERIPH_BASE + 0x04040UL)
#define GPIOC_BASE             (PERIPH_BASE + 0x04080UL)
#define GPIOD_BASE             (PERIPH_BASE + 0x040C0UL)
#define GPIOE_BASE             (PERIPH_BASE + 0x04100UL)
#define GPIOF_BASE             (PERIPH_BASE + 0x04140UL)
#define GPIOG_BASE             (PERIPH_BASE + 0x04180UL)
#define GPIOH_BASE             (PERIPH_BASE + 0x041C0UL)
#define GPIO_INT0_BASE         (PERIPH_BASE + 0x04440UL)
#define GPIO_INT1_BASE         (PERIPH_BASE + 0x04460UL)
#define GPIO_INT2_BASE         (PERIPH_BASE + 0x04480UL)
#define GPIO_INT3_BASE         (PERIPH_BASE + 0x044A0UL)
#define GPIO_INT4_BASE         (PERIPH_BASE + 0x044C0UL)
#define GPIO_INT5_BASE         (PERIPH_BASE + 0x044E0UL)
#define GPIO_INT6_BASE         (PERIPH_BASE + 0x04500UL)
#define GPIO_INT7_BASE         (PERIPH_BASE + 0x04520UL)
#define GPIO_PIN_DATA_BASE     (PERIPH_BASE + 0x04800UL)
#define PDMA0_BASE             (PERIPH_BASE + 0x08000UL)
#define PDMA1_BASE             (PERIPH_BASE + 0x18000UL)
#define USBH_BASE              (PERIPH_BASE + 0x09000UL)
#define HSUSBH_BASE            (PERIPH_BASE + 0x1A000UL)
#define FMC_BASE               (PERIPH_BASE + 0x0C000UL)
#define SDH0_BASE              (PERIPH_BASE + 0x0D000UL)
#define EBI_BASE               (PERIPH_BASE + 0x10000UL)
#define HSUSBD_BASE            (PERIPH_BASE + 0x19000UL)
#define CRC_BASE               (PERIPH_BASE + 0x31000UL)

//PCLK0
// BPWM0,QSPI0,ECAP2,I2C0/2/4,I2S0,OPA,EPWM0,EQEI0/2,SPI1,TMR01,UR0/2/4,USCI0,WDT

/*!< APB0 peripherals */
#define WDT0_BASE             (PERIPH_BASE + 0x40000UL)
#define WDT1_BASE             (PERIPH_BASE + 0x42000UL)
#define WWDT0_BASE            (PERIPH_BASE + 0x96000UL)
#define WWDT1_BASE            (PERIPH_BASE + 0x98000UL)
#define I2S0_BASE             (PERIPH_BASE + 0x48000UL)
#define TIMER0_BASE           (PERIPH_BASE + 0x50000UL)
#define TIMER1_BASE           (PERIPH_BASE + 0x50100UL)
#define EPWM0_BASE            (PERIPH_BASE + 0x58000UL)
#define BPWM0_BASE            (PERIPH_BASE + 0x5A000UL)
#define BPWM2_BASE            (PERIPH_BASE + 0x5C000UL)
#define BPWM4_BASE            (PERIPH_BASE + 0x5E000UL)
#define QSPI0_BASE            (PERIPH_BASE + 0x60000UL)
#define SPI1_BASE             (PERIPH_BASE + 0x62000UL)
#define UART0_BASE            (PERIPH_BASE + 0x70000UL)
#define UART2_BASE            (PERIPH_BASE + 0x72000UL)
#define UART4_BASE            (PERIPH_BASE + 0x74000UL)
#define I2C0_BASE             (PERIPH_BASE + 0x80000UL)
#define I2C2_BASE             (PERIPH_BASE + 0x82000UL)
#define I3C0_BASE             (PERIPH_BASE + 0x84000UL)
#define CANFD0_BASE           (PERIPH_BASE + 0x20000UL)
#define EQEI0_BASE            (PERIPH_BASE + 0xB0000UL)
#define ECAP0_BASE            (PERIPH_BASE + 0xB4000UL)
#define USCI0_BASE            (PERIPH_BASE + 0xD0000UL)
#define LLSI0_BASE            (PERIPH_BASE + 0x88000UL)
#define LLSI2_BASE            (PERIPH_BASE + 0x88200UL)
#define LLSI4_BASE            (PERIPH_BASE + 0x88400UL)
#define LLSI6_BASE            (PERIPH_BASE + 0x88600UL)
#define LLSI8_BASE            (PERIPH_BASE + 0x88800UL)
#define ELLSI0_BASE           (PERIPH_BASE + 0x8A000UL)


//PCLK1
// ACMP01/23,EADC0/1/2,BPWM1,DAC,ECAP1/3,I2C1/3,HSOTG,EPWM1,QEI1/3,RTC,SPI0/2,TMR23,UR1/3,USCI1,PSIO

/*!< APB1 peripherals */
#define RTC_BASE              (PERIPH_BASE + 0x41000UL)
#define EADC0_BASE            (PERIPH_BASE + 0x43000UL)
#define ACMP01_BASE           (PERIPH_BASE + 0x45000UL)
#define HSOTG_BASE            (PERIPH_BASE + 0x4F000UL)
#define TIMER2_BASE           (PERIPH_BASE + 0x51000UL)
#define TIMER3_BASE           (PERIPH_BASE + 0x51100UL)
#define EPWM1_BASE            (PERIPH_BASE + 0x59000UL)
#define BPWM1_BASE            (PERIPH_BASE + 0x5B000UL)
#define BPWM3_BASE            (PERIPH_BASE + 0x5D000UL)
#define BPWM5_BASE            (PERIPH_BASE + 0x5F000UL)
#define SPI0_BASE             (PERIPH_BASE + 0x61000UL)
#define SPI2_BASE             (PERIPH_BASE + 0x63000UL)
#define UART1_BASE            (PERIPH_BASE + 0x71000UL)
#define UART3_BASE            (PERIPH_BASE + 0x73000UL)
#define I2C1_BASE             (PERIPH_BASE + 0x81000UL)
#define CANFD1_BASE           (PERIPH_BASE + 0x24000UL)
#define USCI1_BASE            (PERIPH_BASE + 0xD1000UL)
#define LLSI1_BASE            (PERIPH_BASE + 0x89000UL)
#define LLSI3_BASE            (PERIPH_BASE + 0x89200UL)
#define LLSI5_BASE            (PERIPH_BASE + 0x89400UL)
#define LLSI7_BASE            (PERIPH_BASE + 0x89600UL)
#define LLSI9_BASE            (PERIPH_BASE + 0x89800UL)


/*@}*/ /* end of group PERIPHERAL_MEM_MAP */




/** @addtogroup PERIPHERAL_DECLARATION Peripheral Pointer
  The Declaration of Peripherals
  @{
 */


/******************************************************************************/
/*                Legacy Constants                                            */
/******************************************************************************/
/** @addtogroup Legacy_Constants Legacy Constants
  Legacy Constants
  @{
*/

#ifndef NULL
#define NULL           (0)      ///< NULL pointer
#endif

#define TRUE           (1UL)      ///< Boolean true, define to use in API parameters or return value
#define FALSE          (0UL)      ///< Boolean false, define to use in API parameters or return value

#define ENABLE         (1UL)      ///< Enable, define to use in API parameters
#define DISABLE        (0UL)      ///< Disable, define to use in API parameters

/* Define one bit mask */
#define BIT0     (0x00000001UL)       ///< Bit 0 mask of an 32 bit integer
#define BIT1     (0x00000002UL)       ///< Bit 1 mask of an 32 bit integer
#define BIT2     (0x00000004UL)       ///< Bit 2 mask of an 32 bit integer
#define BIT3     (0x00000008UL)       ///< Bit 3 mask of an 32 bit integer
#define BIT4     (0x00000010UL)       ///< Bit 4 mask of an 32 bit integer
#define BIT5     (0x00000020UL)       ///< Bit 5 mask of an 32 bit integer
#define BIT6     (0x00000040UL)       ///< Bit 6 mask of an 32 bit integer
#define BIT7     (0x00000080UL)       ///< Bit 7 mask of an 32 bit integer
#define BIT8     (0x00000100UL)       ///< Bit 8 mask of an 32 bit integer
#define BIT9     (0x00000200UL)       ///< Bit 9 mask of an 32 bit integer
#define BIT10    (0x00000400UL)       ///< Bit 10 mask of an 32 bit integer
#define BIT11    (0x00000800UL)       ///< Bit 11 mask of an 32 bit integer
#define BIT12    (0x00001000UL)       ///< Bit 12 mask of an 32 bit integer
#define BIT13    (0x00002000UL)       ///< Bit 13 mask of an 32 bit integer
#define BIT14    (0x00004000UL)       ///< Bit 14 mask of an 32 bit integer
#define BIT15    (0x00008000UL)       ///< Bit 15 mask of an 32 bit integer
#define BIT16    (0x00010000UL)       ///< Bit 16 mask of an 32 bit integer
#define BIT17    (0x00020000UL)       ///< Bit 17 mask of an 32 bit integer
#define BIT18    (0x00040000UL)       ///< Bit 18 mask of an 32 bit integer
#define BIT19    (0x00080000UL)       ///< Bit 19 mask of an 32 bit integer
#define BIT20    (0x00100000UL)       ///< Bit 20 mask of an 32 bit integer
#define BIT21    (0x00200000UL)       ///< Bit 21 mask of an 32 bit integer
#define BIT22    (0x00400000UL)       ///< Bit 22 mask of an 32 bit integer
#define BIT23    (0x00800000UL)       ///< Bit 23 mask of an 32 bit integer
#define BIT24    (0x01000000UL)       ///< Bit 24 mask of an 32 bit integer
#define BIT25    (0x02000000UL)       ///< Bit 25 mask of an 32 bit integer
#define BIT26    (0x04000000UL)       ///< Bit 26 mask of an 32 bit integer
#define BIT27    (0x08000000UL)       ///< Bit 27 mask of an 32 bit integer
#define BIT28    (0x10000000UL)       ///< Bit 28 mask of an 32 bit integer
#define BIT29    (0x20000000UL)       ///< Bit 29 mask of an 32 bit integer
#define BIT30    (0x40000000UL)       ///< Bit 30 mask of an 32 bit integer
#define BIT31    (0x80000000UL)       ///< Bit 31 mask of an 32 bit integer

/* Byte Mask Definitions */
#define BYTE0_Msk              (0x000000FFUL)         ///< Mask to get bit0~bit7 from a 32 bit integer
#define BYTE1_Msk              (0x0000FF00UL)         ///< Mask to get bit8~bit15 from a 32 bit integer
#define BYTE2_Msk              (0x00FF0000UL)         ///< Mask to get bit16~bit23 from a 32 bit integer
#define BYTE3_Msk              (0xFF000000UL)         ///< Mask to get bit24~bit31 from a 32 bit integer

#define GET_BYTE0(u32Param)    (((u32Param) & BYTE0_Msk)      )  /*!< Extract Byte 0 (Bit  0~ 7) from parameter u32Param */
#define GET_BYTE1(u32Param)    (((u32Param) & BYTE1_Msk) >>  8)  /*!< Extract Byte 1 (Bit  8~15) from parameter u32Param */
#define GET_BYTE2(u32Param)    (((u32Param) & BYTE2_Msk) >> 16)  /*!< Extract Byte 2 (Bit 16~23) from parameter u32Param */
#define GET_BYTE3(u32Param)    (((u32Param) & BYTE3_Msk) >> 24)  /*!< Extract Byte 3 (Bit 24~31) from parameter u32Param */

/*@}*/ /* end of group Legacy_Constants */




/** @addtogroup PMODULE_S Secure Peripheral Pointer
 The Declaration of Secure Peripheral Pointer
 @{
*/
#define SYS_S                ((SYS_T *)   SYS_BASE)
#define CLK_S                ((CLK_T *)   CLK_BASE)
#define NMI_S                ((NMI_T *)   NMI_BASE)
#define PA_S                 ((GPIO_T *)  GPIOA_BASE)
#define PB_S                 ((GPIO_T *)  GPIOB_BASE)
#define PC_S                 ((GPIO_T *)  GPIOC_BASE)
#define PD_S                 ((GPIO_T *)  GPIOD_BASE)
#define PE_S                 ((GPIO_T *)  GPIOE_BASE)
#define PF_S                 ((GPIO_T *)  GPIOF_BASE)
#define PG_S                 ((GPIO_T *)  GPIOG_BASE)
#define PH_S                 ((GPIO_T *)  GPIOH_BASE)
#define GPA_S                ((GPIO_T *)  GPIOA_BASE)
#define GPB_S                ((GPIO_T *)  GPIOB_BASE)
#define GPC_S                ((GPIO_T *)  GPIOC_BASE)
#define GPD_S                ((GPIO_T *)  GPIOD_BASE)
#define GPE_S                ((GPIO_T *)  GPIOE_BASE)
#define GPF_S                ((GPIO_T *)  GPIOF_BASE)
#define GPG_S                ((GPIO_T *)  GPIOG_BASE)
#define GPH_S                ((GPIO_T *)  GPIOH_BASE)
#define INT0_S               ((GPIO_INT_T *) GPIO_INT0_BASE)
#define INT1_S               ((GPIO_INT_T *) GPIO_INT1_BASE)
#define INT2_S               ((GPIO_INT_T *) GPIO_INT2_BASE)
#define INT3_S               ((GPIO_INT_T *) GPIO_INT3_BASE)
#define INT4_S               ((GPIO_INT_T *) GPIO_INT4_BASE)
#define INT5_S               ((GPIO_INT_T *) GPIO_INT5_BASE)
#define INT6_S               ((GPIO_INT_T *) GPIO_INT6_BASE)
#define INT7_S               ((GPIO_INT_T *) GPIO_INT7_BASE)
#define PDMA0_S              ((PDMA_T *)  PDMA0_BASE)
#define PDMA1_S              ((PDMA_T *)  PDMA1_BASE)
#define USBH_S               ((USBH_T *)  USBH_BASE)
#define HSUSBH_S             ((HSUSBH_T *)  HSUSBH_BASE)
#define FMC_S                ((FMC_T *)   FMC_BASE)
#define SDH0_S               ((SDH_T *)   SDH0_BASE)
#define EBI_S                ((EBI_T *)   EBI_BASE)
#define CRC_S                ((CRC_T *)   CRC_BASE)
#define WDT0_S                ((WDT_T *)   WDT0_BASE)
#define WDT1_S                ((WDT_T *)   WDT1_BASE)
#define WWDT0_S               ((WWDT_T *)  WWDT0_BASE)
#define WWDT1_S               ((WWDT_T *)  WWDT1_BASE)
#define RTC_S                ((RTC_T *)   RTC_BASE)
#define EADC0_S              ((EADC_T *)  EADC0_BASE)
#define ACMP01_S             ((ACMP_T *)  ACMP01_BASE)
#define I2S0_S               ((I2S_T *)   I2S0_BASE)
#define HSUSBD_S             ((HSUSBD_T *)HSUSBD_BASE)
#define HSOTG_S              ((HSOTG_T *) HSOTG_BASE)
#define TIMER0_S             ((TIMER_T *) TIMER0_BASE)
#define TIMER1_S             ((TIMER_T *) TIMER1_BASE)
#define TIMER2_S             ((TIMER_T *) TIMER2_BASE)
#define TIMER3_S             ((TIMER_T *) TIMER3_BASE)
#define EPWM0_S              ((EPWM_T *)  EPWM0_BASE)
#define EPWM1_S              ((EPWM_T *)  EPWM1_BASE)
#define BPWM0_S              ((BPWM_T *)  BPWM0_BASE)
#define BPWM1_S              ((BPWM_T *)  BPWM1_BASE)
#define BPWM2_S              ((BPWM_T *)  BPWM2_BASE)
#define BPWM3_S              ((BPWM_T *)  BPWM3_BASE)
#define BPWM4_S              ((BPWM_T *)  BPWM4_BASE)
#define BPWM5_S              ((BPWM_T *)  BPWM5_BASE)
#define ECAP0_S              ((ECAP_T *)  ECAP0_BASE)
#define EQEI0_S              ((EQEI_T *)   EQEI0_BASE)
#define QSPI0_S              ((QSPI_T *)  QSPI0_BASE)
#define SPI0_S               ((SPI_T *)   SPI0_BASE)
#define SPI1_S               ((SPI_T *)   SPI1_BASE)
#define SPI2_S               ((SPI_T *)   SPI2_BASE)
#define UART0_S              ((UART_T *)  UART0_BASE)
#define UART1_S              ((UART_T *)  UART1_BASE)
#define UART2_S              ((UART_T *)  UART2_BASE)
#define UART3_S              ((UART_T *)  UART3_BASE)
#define UART4_S              ((UART_T *)  UART4_BASE)
#define I2C0_S               ((I2C_T *)   I2C0_BASE)
#define I2C1_S               ((I2C_T *)   I2C1_BASE)
#define I2C2_S               ((I2C_T *)   I2C2_BASE)
#define I3C0_S               ((I3C_T *)   I3C0_BASE)
#define CANFD0_S             ((CANFD_T *)   CANFD0_BASE)
#define CANFD1_S             ((CANFD_T *)   CANFD1_BASE)
#define USPI0_S              ((USPI_T *) USCI0_BASE)                     /*!< USPI0 Configuration Struct                       */
#define USPI1_S              ((USPI_T *) USCI1_BASE)                     /*!< USPI1 Configuration Struct                       */
#define UI2C0_S              ((UI2C_T *) USCI0_BASE)                     /*!< UI2C0 Configuration Struct                       */
#define UI2C1_S              ((UI2C_T *) USCI1_BASE)                     /*!< UI2C1 Configuration Struct                       */
#define UUART0_S             ((UUART_T *) USCI0_BASE)                    /*!< UUART0 Configuration Struct                      */
#define UUART1_S             ((UUART_T *) USCI1_BASE)                    /*!< UUART1 Configuration Struct                      */
#define CACHE_S              ((CACHE_T *)  CACHE_BASE)
#define SCU_S                ((SCU_T *) SCU_BASE)                        /*!< SCU Pointer                         */
#define LLSI0_S              ((LLSI_T *) LLSI0_BASE)
#define LLSI1_S              ((LLSI_T *) LLSI1_BASE)
#define LLSI2_S              ((LLSI_T *) LLSI2_BASE)
#define LLSI3_S              ((LLSI_T *) LLSI3_BASE)
#define LLSI4_S              ((LLSI_T *) LLSI4_BASE)
#define LLSI5_S              ((LLSI_T *) LLSI5_BASE)
#define LLSI6_S              ((LLSI_T *) LLSI6_BASE)
#define LLSI7_S              ((LLSI_T *) LLSI7_BASE)
#define LLSI8_S              ((LLSI_T *) LLSI8_BASE)
#define LLSI9_S              ((LLSI_T *) LLSI9_BASE)
#define ELLSI0_S             ((ELLSI_T *) ELLSI0_BASE)
/**@}*/ /* end of group PMODULE_S */



/** @addtogroup PMODULE_NS Non-secure Peripheral Pointer
 The Declaration of Non-secure Peripheral Pointer
 @{
*/
#define SYS_NS                ((SYS_T *)   (SYS_BASE+NS_OFFSET))
#define CLK_NS                ((CLK_T *)   (CLK_BASE+NS_OFFSET))
#define NMI_NS                ((NMI_T *)   (NMI_BASE+NS_OFFSET))
#define PA_NS                 ((GPIO_T *)  (GPIOA_BASE+NS_OFFSET))
#define PB_NS                 ((GPIO_T *)  (GPIOB_BASE+NS_OFFSET))
#define PC_NS                 ((GPIO_T *)  (GPIOC_BASE+NS_OFFSET))
#define PD_NS                 ((GPIO_T *)  (GPIOD_BASE+NS_OFFSET))
#define PE_NS                 ((GPIO_T *)  (GPIOE_BASE+NS_OFFSET))
#define PF_NS                 ((GPIO_T *)  (GPIOF_BASE+NS_OFFSET))
#define PG_NS                 ((GPIO_T *)  (GPIOG_BASE+NS_OFFSET))
#define PH_NS                 ((GPIO_T *)  (GPIOH_BASE+NS_OFFSET))
#define GPA_NS                ((GPIO_T *)  (GPIOA_BASE+NS_OFFSET))
#define GPB_NS                ((GPIO_T *)  (GPIOB_BASE+NS_OFFSET))
#define GPC_NS                ((GPIO_T *)  (GPIOC_BASE+NS_OFFSET))
#define GPD_NS                ((GPIO_T *)  (GPIOD_BASE+NS_OFFSET))
#define GPE_NS                ((GPIO_T *)  (GPIOE_BASE+NS_OFFSET))
#define GPF_NS                ((GPIO_T *)  (GPIOF_BASE+NS_OFFSET))
#define GPG_NS                ((GPIO_T *)  (GPIOG_BASE+NS_OFFSET))
#define GPH_NS                ((GPIO_T *)  (GPIOH_BASE+NS_OFFSET))
#define INT0_NS               ((GPIO_INT_T *) (GPIO_INT0_BASE+NS_OFFSET))
#define INT1_NS               ((GPIO_INT_T *) (GPIO_INT1_BASE+NS_OFFSET))
#define INT2_NS               ((GPIO_INT_T *) (GPIO_INT2_BASE+NS_OFFSET))
#define INT3_NS               ((GPIO_INT_T *) (GPIO_INT3_BASE+NS_OFFSET))
#define INT4_NS               ((GPIO_INT_T *) (GPIO_INT4_BASE+NS_OFFSET))
#define INT5_NS               ((GPIO_INT_T *) (GPIO_INT5_BASE+NS_OFFSET))
#define INT6_NS               ((GPIO_INT_T *) (GPIO_INT6_BASE+NS_OFFSET))
#define INT7_NS               ((GPIO_INT_T *) (GPIO_INT7_BASE+NS_OFFSET))
#define PDMA0_NS              ((PDMA_T *)  (PDMA0_BASE+NS_OFFSET))
#define PDMA1_NS              ((PDMA_T *)  (PDMA1_BASE+NS_OFFSET))
#define USBH_NS               ((USBH_T *)  (USBH_BASE+NS_OFFSET))
#define HSUSBH_NS             ((HSUSBH_T *)  (HSUSBH_BASE+NS_OFFSET))
#define FMC_NS                ((FMC_T *)   (FMC_BASE+NS_OFFSET))
#define SDH0_NS               ((SDH_T *)   (SDH0_BASE+NS_OFFSET))
#define EBI_NS                ((EBI_T *)   (EBI_BASE+NS_OFFSET))
#define CRC_NS                ((CRC_T *)   (CRC_BASE+NS_OFFSET))
#define WDT0_NS               ((WDT_T *)   (WDT0_BASE+NS_OFFSET))
#define WDT1_NS               ((WDT_T *)   (WDT1_BASE+NS_OFFSET))
#define WWDT0_NS              ((WWDT_T *)  (WWDT0_BASE+NS_OFFSET))
#define WWDT1_NS              ((WWDT_T *)  (WWDT1_BASE+NS_OFFSET))
#define RTC_NS                ((RTC_T *)   (RTC_BASE+NS_OFFSET))
#define EADC0_NS              ((EADC_T *)  (EADC0_BASE+NS_OFFSET))
#define ACMP01_NS             ((ACMP_T *)  (ACMP01_BASE+NS_OFFSET))
#define I2S0_NS               ((I2S_T *)   (I2S0_BASE+NS_OFFSET))
#define HSUSBD_NS             ((HSUSBD_T *)(HSUSBD_BASE+NS_OFFSET))
#define HSOTG_NS              ((HSOTG_T *) (HSOTG_BASE+NS_OFFSET))
#define TIMER0_NS             ((TIMER_T *) (TIMER0_BASE+NS_OFFSET))
#define TIMER1_NS             ((TIMER_T *) (TIMER1_BASE+NS_OFFSET))
#define TIMER2_NS             ((TIMER_T *) (TIMER2_BASE+NS_OFFSET))
#define TIMER3_NS             ((TIMER_T *) (TIMER3_BASE+NS_OFFSET))
#define EPWM0_NS              ((EPWM_T *)  (EPWM0_BASE+NS_OFFSET))
#define EPWM1_NS              ((EPWM_T *)  (EPWM1_BASE+NS_OFFSET))
#define BPWM0_NS              ((BPWM_T *)  (BPWM0_BASE+NS_OFFSET))
#define BPWM1_NS              ((BPWM_T *)  (BPWM1_BASE+NS_OFFSET))
#define BPWM2_NS              ((BPWM_T *)  (BPWM2_BASE+NS_OFFSET))
#define BPWM3_NS              ((BPWM_T *)  (BPWM3_BASE+NS_OFFSET))
#define BPWM4_NS              ((BPWM_T *)  (BPWM4_BASE+NS_OFFSET))
#define BPWM5_NS              ((BPWM_T *)  (BPWM5_BASE+NS_OFFSET))
#define ECAP0_NS              ((ECAP_T *)  (ECAP0_BASE+NS_OFFSET))
#define EQEI0_NS              ((EQEI_T *)   (EQEI0_BASE+NS_OFFSET))
#define QSPI0_NS              ((QSPI_T *)  (QSPI0_BASE+NS_OFFSET))
#define SPI0_NS               ((SPI_T *)   (SPI0_BASE+NS_OFFSET))
#define SPI1_NS               ((SPI_T *)   (SPI1_BASE+NS_OFFSET))
#define SPI2_NS               ((SPI_T *)   (SPI2_BASE+NS_OFFSET))
#define UART0_NS              ((UART_T *)  (UART0_BASE+NS_OFFSET))
#define UART1_NS              ((UART_T *)  (UART1_BASE+NS_OFFSET))
#define UART2_NS              ((UART_T *)  (UART2_BASE+NS_OFFSET))
#define UART3_NS              ((UART_T *)  (UART3_BASE+NS_OFFSET))
#define UART4_NS              ((UART_T *)  (UART4_BASE+NS_OFFSET))
#define I2C0_NS               ((I2C_T *)   (I2C0_BASE+NS_OFFSET))
#define I2C1_NS               ((I2C_T *)   (I2C1_BASE+NS_OFFSET))
#define I2C2_NS               ((I2C_T *)   (I2C2_BASE+NS_OFFSET))
#define I3C0_NS               ((I3C_T *)   (I3C0_BASE+NS_OFFSET))
#define CANFD0_NS             ((CANFD_T *)   (CANFD0_BASE+NS_OFFSET))
#define CANFD1_NS             ((CANFD_T *)   (CANFD1_BASE+NS_OFFSET))
#define USPI0_NS              ((USPI_T *) (USCI0_BASE+NS_OFFSET))
#define USPI1_NS              ((USPI_T *) (USCI1_BASE+NS_OFFSET))
#define UI2C0_NS              ((UI2C_T *) (USCI0_BASE+NS_OFFSET))
#define UI2C1_NS              ((UI2C_T *) (USCI1_BASE+NS_OFFSET))
#define UUART0_NS             ((UUART_T *) (USCI0_BASE+NS_OFFSET))
#define UUART1_NS             ((UUART_T *) (USCI1_BASE+NS_OFFSET))
#define CACHE_NS              ((CACHE_T *)  (CACHE_BASE+NS_OFFSET))
#define SCU_NS                ((SCU_T *) (SCU_BASE+NS_OFFSET))
#define LLSI0_NS              ((LLSI_T *)  (LLSI0_BASE+NS_OFFSET))
#define LLSI1_NS              ((LLSI_T *)  (LLSI1_BASE+NS_OFFSET))
#define LLSI2_NS              ((LLSI_T *)  (LLSI2_BASE+NS_OFFSET))
#define LLSI3_NS              ((LLSI_T *)  (LLSI3_BASE+NS_OFFSET))
#define LLSI4_NS              ((LLSI_T *)  (LLSI4_BASE+NS_OFFSET))
#define LLSI5_NS              ((LLSI_T *)  (LLSI5_BASE+NS_OFFSET))
#define LLSI6_NS              ((LLSI_T *)  (LLSI6_BASE+NS_OFFSET))
#define LLSI7_NS              ((LLSI_T *)  (LLSI7_BASE+NS_OFFSET))
#define LLSI8_NS              ((LLSI_T *)  (LLSI8_BASE+NS_OFFSET))
#define LLSI9_NS              ((LLSI_T *)  (LLSI9_BASE+NS_OFFSET))
#define ELLSI0_NS             ((ELLSI_T *) (ELLSI0_BASE+NS_OFFSET))
/**@}*/ /* end of group PMODULE_NS */


/** @addtogroup PMODULE_SNS Peripheral Pointer
 The Declaration of Peripheral Pointer
 @{
*/

/* Always Secure Modules or Nonsecure Modules */

#if defined(__SECURE_CODE) || !defined(__NONSECURE_CODE)
/*For no TrustZone or Secure Code */
#define SYS     SYS_S
#define CLK     CLK_S
#define NMI     NMI_S
#define FMC     FMC_S
#define SCU     SCU_S
#define WDT     WDT0_S
#define WWDT    WWDT0_S
#define WDT0    WDT
#define WWDT0   WWDT
#else
/* For Non-secure */
#define FMC     FMC_NS
#define SYS     SYS_NS
#define CLK     CLK_NS
#endif



#if defined (SCU_INIT_PNSSET0_VAL) && (SCU_INIT_PNSSET0_VAL & BIT8 )
# define PDMA0 PDMA0_NS
#else
# define PDMA0 PDMA0_S
#endif

#if defined (SCU_INIT_PNSSET0_VAL) && (SCU_INIT_PNSSET0_VAL & BIT13)
# define SDH0 SDH0_NS
#else
# define SDH0 SDH0_S
#endif

#if defined (SCU_INIT_PNSSET0_VAL) && (SCU_INIT_PNSSET0_VAL & BIT16)
# define EBI EBI_NS
#else
# define EBI EBI_S
#endif

#if defined (SCU_INIT_PNSSET0_VAL) && (SCU_INIT_PNSSET0_VAL & BIT8 )
# define PDMA1 PDMA1_NS
#else
# define PDMA1 PDMA1_S
#endif

#if defined (SCU_INIT_PNSSET0_VAL) && (SCU_INIT_PNSSET0_VAL & BIT25)
# define HSUSBD HSUSBD_NS
#else
# define HSUSBD HSUSBD_S
#endif

#if defined (SCU_INIT_PNSSET0_VAL) && (SCU_INIT_PNSSET0_VAL & BIT26)
# define USBH USBH_NS
# define HSUSBH HSUSBH_NS
#else
# define USBH USBH_S
# define HSUSBH HSUSBH_S
#endif

#if defined (SCU_INIT_PNSSET0_VAL) && (SCU_INIT_PNSSET0_VAL & BIT27)
# define PDCI PDCI_NS
#else
# define PDCI PDCI_S
#endif

#if defined (SCU_INIT_PNSSET1_VAL) && (SCU_INIT_PNSSET1_VAL & BIT0 )
# define CANFD0 CANFD0_NS
#else
# define CANFD0 CANFD0_S
#endif

#if defined (SCU_INIT_PNSSET1_VAL) && (SCU_INIT_PNSSET1_VAL & BIT4 )
# define CANFD1 CANFD1_NS
#else
# define CANFD1 CANFD1_S
#endif

#if defined (SCU_INIT_PNSSET1_VAL) && (SCU_INIT_PNSSET1_VAL & BIT17)
# define CRC CRC_NS
#else
# define CRC CRC_S
#endif

#if defined (SCU_INIT_PNSSET1_VAL) && (SCU_INIT_PNSSET1_VAL & BIT22)
# define CACHE CACHE_NS
#else
# define CACHE CACHE_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & BIT1 )
# define RTC RTC_NS
#else
# define RTC RTC_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & BIT2 )
# define WDT1 WDT_NS
#else
# define WDT1 WDT1_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & BIT3 )
# define EADC0 EADC0_NS
#else
# define EADC0 EADC0_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & BIT5 )
# define ACMP01 ACMP01_NS
#else
# define ACMP01 ACMP01_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & BIT8 )
# define I2S0 I2S0_NS
#else
# define I2S0 I2S0_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & BIT13)
# define OTG OTG_NS
#else
# define OTG OTG_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & BIT15)
# define HSOTG HSOTG_NS
#else
# define HSOTG HSOTG_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & BIT16)
# define TIMER0 TIMER0_NS
# define TIMER1 TIMER1_NS
#else
# define TIMER0 TIMER0_S
# define TIMER1 TIMER1_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & BIT17)
# define TIMER2 TIMER2_NS
# define TIMER3 TIMER3_NS
#else
# define TIMER2 TIMER2_S
# define TIMER3 TIMER3_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & BIT24)
# define EPWM0 EPWM0_NS
#else
# define EPWM0 EPWM0_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & BIT25)
# define EPWM1 EPWM1_NS
#else
# define EPWM1 EPWM1_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & BIT26)
# define BPWM0 BPWM0_NS
#else
# define BPWM0 BPWM0_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & BIT27)
# define BPWM1 BPWM1_NS
#else
# define BPWM1 BPWM1_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & BIT28)
# define BPWM2 BPWM2_NS
#else
# define BPWM2 BPWM2_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & BIT29)
# define BPWM3 BPWM3_NS
#else
# define BPWM3 BPWM3_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & BIT30)
# define BPWM4 BPWM4_NS
#else
# define BPWM4 BPWM4_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & BIT31)
# define BPWM5 BPWM5_NS
#else
# define BPWM5 BPWM5_S
#endif

#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & BIT0 )
# define QSPI0 QSPI0_NS
#else
# define QSPI0 QSPI0_S
#endif

#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & BIT1 )
# define SPI0 SPI0_NS
#else
# define SPI0 SPI0_S
#endif

#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & BIT2 )
# define SPI1 SPI1_NS
#else
# define SPI1 SPI1_S
#endif

#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & BIT3 )
# define SPI2 SPI2_NS
#else
# define SPI2 SPI2_S
#endif

#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & BIT16)
# define UART0 UART0_NS
#else
# define UART0 UART0_S
#endif

#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & BIT17)
# define UART1 UART1_NS
#else
# define UART1 UART1_S
#endif

#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & BIT18)
# define UART2 UART2_NS
#else
# define UART2 UART2_S
#endif

#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & BIT19)
# define UART3 UART3_NS
#else
# define UART3 UART3_S
#endif

#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & BIT20)
# define UART4 UART4_NS
#else
# define UART4 UART4_S
#endif

#if defined (SCU_INIT_PNSSET4_VAL) && (SCU_INIT_PNSSET4_VAL & BIT0 )
# define I2C0 I2C0_NS
#else
# define I2C0 I2C0_S
#endif

#if defined (SCU_INIT_PNSSET4_VAL) && (SCU_INIT_PNSSET4_VAL & BIT1 )
# define I2C1 I2C1_NS
#else
# define I2C1 I2C1_S
#endif

#if defined (SCU_INIT_PNSSET4_VAL) && (SCU_INIT_PNSSET4_VAL & BIT2 )
# define I2C2 I2C2_NS
#else
# define I2C2 I2C2_S
#endif

#if defined (SCU_INIT_PNSSET4_VAL) && (SCU_INIT_PNSSET4_VAL & BIT6 )
# define I3C0 I3C0_NS
#else
# define I3C0 I3C0_S
#endif

#if defined (SCU_INIT_PNSSET4_VAL) && (SCU_INIT_PNSSET4_VAL & BIT8 )
# define LLSI0 LLSI0_NS
# define LLSI2 LLSI2_NS
# define LLSI4 LLSI4_NS
# define LLSI6 LLSI6_NS
# define LLSI8 LLSI8_NS
#else
# define LLSI0 LLSI0_S
# define LLSI2 LLSI2_S
# define LLSI4 LLSI4_S
# define LLSI6 LLSI6_S
# define LLSI8 LLSI8_S
#endif

#if defined (SCU_INIT_PNSSET4_VAL) && (SCU_INIT_PNSSET4_VAL & BIT9 )
# define LLSI1 LLSI1_NS
# define LLSI3 LLSI3_NS
# define LLSI5 LLSI5_NS
# define LLSI7 LLSI7_NS
# define LLSI9 LLSI9_NS
#else
# define LLSI1 LLSI1_S
# define LLSI3 LLSI3_S
# define LLSI5 LLSI5_S
# define LLSI7 LLSI7_S
# define LLSI9 LLSI9_S
#endif

#if defined (SCU_INIT_PNSSET4_VAL) && (SCU_INIT_PNSSET4_VAL & BIT10 )
# define ELLSI0 ELLSI0_NS
#else
# define ELLSI0 ELLSI0_S
#endif

#if defined (SCU_INIT_PNSSET4_VAL) && (SCU_INIT_PNSSET4_VAL & BIT24 )
# define WWDT1 WWDT_NS
#else
# define WWDT1 WWDT1_S
#endif


#if defined (SCU_INIT_PNSSET5_VAL) && (SCU_INIT_PNSSET5_VAL & BIT16)
# define EQEI0 EQEI0_NS
#else
# define EQEI0 EQEI0_S
#endif

#if defined (SCU_INIT_PNSSET5_VAL) && (SCU_INIT_PNSSET5_VAL & BIT20)
# define ECAP0 ECAP0_NS
#else
# define ECAP0 ECAP0_S
#endif

#if defined (SCU_INIT_PNSSET6_VAL) && (SCU_INIT_PNSSET6_VAL & BIT16)
# define UI2C0 UI2C0_NS
# define USPI0 USPI0_NS
# define UUART0 UUART0_NS

#else
# define UI2C0 UI2C0_S
# define USPI0 USPI0_S
# define UUART0 UUART0_S

#endif

#if defined (SCU_INIT_PNSSET6_VAL) && (SCU_INIT_PNSSET6_VAL & BIT17)
# define USPI1 USPI1_NS
# define UI2C1 UI2C1_NS
# define UUART1 UUART1_NS

#else
# define USPI1 USPI1_S
# define UI2C1 UI2C1_S
# define UUART1 UUART1_S
#endif

#if defined (SCU_INIT_EINTNS_VAL) && (SCU_INIT_EINTNS_VAL & BIT0 )
# define INT0 INT0_NS
#else
# define INT0 INT0_S
#endif

#if defined (SCU_INIT_EINTNS_VAL) && (SCU_INIT_EINTNS_VAL & BIT1 )
# define INT1 INT1_NS
#else
# define INT1 INT1_S
#endif

#if defined (SCU_INIT_EINTNS_VAL) && (SCU_INIT_EINTNS_VAL & BIT2 )
# define INT2 INT2_NS
#else
# define INT2 INT2_S
#endif

#if defined (SCU_INIT_EINTNS_VAL) && (SCU_INIT_EINTNS_VAL & BIT3 )
# define INT3 INT3_NS
#else
# define INT3 INT3_S
#endif

#if defined (SCU_INIT_EINTNS_VAL) && (SCU_INIT_EINTNS_VAL & BIT4 )
# define INT4 INT4_NS
#else
# define INT4 INT4_S
#endif

#if defined (SCU_INIT_EINTNS_VAL) && (SCU_INIT_EINTNS_VAL & BIT5 )
# define INT5 INT5_NS
#else
# define INT5 INT5_S
#endif

#if defined (SCU_INIT_EINTNS_VAL) && (SCU_INIT_EINTNS_VAL & BIT6 )
# define INT6 INT6_NS
#else
# define INT6 INT6_S
#endif

#if defined (SCU_INIT_EINTNS_VAL) && (SCU_INIT_EINTNS_VAL & BIT7 )
# define INT7 INT7_NS
#else
# define INT7 INT7_S
#endif

/*
  GPIO secure/nonsecure configuration is bit configurable.
  It means both secure and non-secure may access a GPIO port.
*/
#ifdef __NONSECURE_CODE
# define PA  PA_NS
# define PB  PB_NS
# define PC  PC_NS
# define PD  PD_NS
# define PE  PE_NS
# define PF  PF_NS
# define PG  PG_NS
# define PH  PH_NS
#else
# define PA  PA_S
# define PB  PB_S
# define PC  PC_S
# define PD  PD_S
# define PE  PE_S
# define PF  PF_S
# define PG  PG_S
# define PH  PH_S
#endif
/**@}*/ /* end of group PMODULE_SNS */




/*@}*/ /* end of group ERIPHERAL_DECLARATION */

/** @addtogroup IO_ROUTINE I/O Routines
  The Declaration of I/O Routines
  @{
 */

typedef volatile unsigned char  vu8;        ///< Define 8-bit unsigned volatile data type
typedef volatile unsigned short vu16;       ///< Define 16-bit unsigned volatile data type
typedef volatile unsigned int   vu32;       ///< Define 32-bit unsigned volatile data type

/**
  * @brief Get a 8-bit unsigned value from specified address
  * @param[in] addr Address to get 8-bit data from
  * @return  8-bit unsigned value stored in specified address
  */
#define M8(addr)  (*((vu8  *) (addr)))

/**
  * @brief Get a 16-bit unsigned value from specified address
  * @param[in] addr Address to get 16-bit data from
  * @return  16-bit unsigned value stored in specified address
  * @note The input address must be 16-bit aligned
  */
#define M16(addr) (*((vu16 *) (addr)))

/**
  * @brief Get a 32-bit unsigned value from specified address
  * @param[in] addr Address to get 32-bit data from
  * @return  32-bit unsigned value stored in specified address
  * @note The input address must be 32-bit aligned
  */
#define M32(addr) (*((vu32 *) (addr)))

/**
  * @brief Set a 32-bit unsigned value to specified I/O port
  * @param[in] port Port address to set 32-bit data
  * @param[in] value Value to write to I/O port
  * @return  None
  * @note The output port must be 32-bit aligned
  */
#define outpw(port,value)     *((volatile unsigned int *)(port)) = (value)

/**
  * @brief Get a 32-bit unsigned value from specified I/O port
  * @param[in] port Port address to get 32-bit data from
  * @return  32-bit unsigned value stored in specified I/O port
  * @note The input port must be 32-bit aligned
  */
#define inpw(port)            (*((volatile unsigned int *)(port)))

/**
  * @brief Set a 16-bit unsigned value to specified I/O port
  * @param[in] port Port address to set 16-bit data
  * @param[in] value Value to write to I/O port
  * @return  None
  * @note The output port must be 16-bit aligned
  */
#define outps(port,value)     *((volatile unsigned short *)(port)) = (value)

/**
  * @brief Get a 16-bit unsigned value from specified I/O port
  * @param[in] port Port address to get 16-bit data from
  * @return  16-bit unsigned value stored in specified I/O port
  * @note The input port must be 16-bit aligned
  */
#define inps(port)            (*((volatile unsigned short *)(port)))

/**
  * @brief Set a 8-bit unsigned value to specified I/O port
  * @param[in] port Port address to set 8-bit data
  * @param[in] value Value to write to I/O port
  * @return  None
  */
#define outpb(port,value)     *((volatile unsigned char *)(port)) = (value)

/**
  * @brief Get a 8-bit unsigned value from specified I/O port
  * @param[in] port Port address to get 8-bit data from
  * @return  8-bit unsigned value stored in specified I/O port
  */
#define inpb(port)            (*((volatile unsigned char *)(port)))

/**
  * @brief Set a 32-bit unsigned value to specified I/O port
  * @param[in] port Port address to set 32-bit data
  * @param[in] value Value to write to I/O port
  * @return  None
  * @note The output port must be 32-bit aligned
  */
#define outp32(port,value)    *((volatile unsigned int *)(port)) = (value)

/**
  * @brief Get a 32-bit unsigned value from specified I/O port
  * @param[in] port Port address to get 32-bit data from
  * @return  32-bit unsigned value stored in specified I/O port
  * @note The input port must be 32-bit aligned
  */
#define inp32(port)           (*((volatile unsigned int *)(port)))

/**
  * @brief Set a 16-bit unsigned value to specified I/O port
  * @param[in] port Port address to set 16-bit data
  * @param[in] value Value to write to I/O port
  * @return  None
  * @note The output port must be 16-bit aligned
  */
#define outp16(port,value)    *((volatile unsigned short *)(port)) = (value)

/**
  * @brief Get a 16-bit unsigned value from specified I/O port
  * @param[in] port Port address to get 16-bit data from
  * @return  16-bit unsigned value stored in specified I/O port
  * @note The input port must be 16-bit aligned
  */
#define inp16(port)           (*((volatile unsigned short *)(port)))

/**
  * @brief Set a 8-bit unsigned value to specified I/O port
  * @param[in] port Port address to set 8-bit data
  * @param[in] value Value to write to I/O port
  * @return  None
  */
#define outp8(port,value)     *((volatile unsigned char *)(port)) = (value)

/**
  * @brief Get a 8-bit unsigned value from specified I/O port
  * @param[in] port Port address to get 8-bit data from
  * @return  8-bit unsigned value stored in specified I/O port
  */
#define inp8(port)            (*((volatile unsigned char *)(port)))


/*@}*/ /* end of group IO_ROUTINE */

/******************************************************************************/
/*                         Peripheral header files                            */
/******************************************************************************/
#include "sys.h"
#include "clk.h"
#include "acmp.h"
#include "uart.h"
#include "usci_spi.h"
#include "gpio.h"
#include "ecap.h"
#include "eqei.h"
#include "timer.h"
#include "timer_pwm.h"
#include "pdma.h"
#include "fmc.h"
#include "i2c.h"
#include "i3c.h"
#include "i2s.h"
#include "epwm.h"
#include "eadc.h"
#include "bpwm.h"
#include "wdt.h"
#include "wwdt.h"
#include "crc.h"
#include "ebi.h"
#include "usci_i2c.h"
#include "spi.h"
#include "qspi.h"
#include "canfd.h"
#include "rtc.h"
#include "usci_uart.h"
#include "sdh.h"
#include "hsusbd.h"
#include "hsotg.h"
#include "llsi.h"
#include "ellsi.h"
#include "cache.h"
#ifndef __NONSECURE_CODE
#include "scu.h"
#endif

#ifdef __cplusplus
}
#endif

#endif  /* __M3331_H__ */
