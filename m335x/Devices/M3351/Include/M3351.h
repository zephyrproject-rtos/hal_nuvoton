/**************************************************************************//**
 * @file     M3351.h
 * @version  V1.00
 * @brief    Peripheral Access Layer Header File for NuMicro M3351
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2025 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/

/**
  \mainpage NuMicro M3351 Series CMSIS BSP Driver Reference
  *
  * <b>Introduction</b>
  *
  * This user manual describes the usage of M3351 Series MCU device driver
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
  * SPDX-License-Identifier: Apache-2.0<br/>
  * Copyright (C) 2025 Nuvoton Technology Corp. All rights reserved.
  */


#ifndef __M3351_H__
#define __M3351_H__

#ifdef __cplusplus
extern "C" {
#endif


/******************************************************************************/
/*                Processor and Core peripheral                              */
/******************************************************************************/
/** @addtogroup CMSIS_Device Device CMSIS Definitions
    Configuration of the Cortex-M33 Processor and Core peripheral
    @{
*/

/* -------------------  Interrupt Number Definition  ------------------------------ */

typedef enum IRQn
{
    /* -----------------------  Processor Exceptions Numbers  ----------------------------- */
    NonMaskableInt_IRQn           = -14,      /*  2 */ /*!< Non Maskable Interrupt          */
    HardFault_IRQn                = -13,      /*  3 */ /*!< HardFault Interrupt             */
    MemoryManagement_IRQn         = -12,      /*  4 */ /*!< Memory Management Interrupt     */
    BusFault_IRQn                 = -11,      /*  5 */ /*!< Bus Fault Interrupt             */
    UsageFault_IRQn               = -10,      /*  6 */ /*!< Usage Fault Interrupt           */
    SecureFault_IRQn              =  -9,      /*  7 */ /*!< Secure Fault Interrupt          */
    /* Reserved                                                                             */
    /* Reserved                                                                             */
    /* Reserved                                                                             */
    SVCall_IRQn                   =  -5,      /* 11 */ /*!< SVC Interrupt                   */
    DebugMonitor_IRQn             =  -4,      /* 12 */ /*!< Debug Monitor Interrupt         */
    /* Reserved                                                                             */
    PendSV_IRQn                   =  -2,      /* 14 */ /*!< Pend SV Interrupt               */
    SysTick_IRQn                  =  -1,      /* 15 */ /*!< System Tick Interrupt           */

    /* -----------------------  Processor Interrupt Numbers  ------------------------------ */
    BODOUT_IRQn                   =   0,      /*!< Brown-Out Low Voltage Detected Interrupt */
    IRC_IRQn                      =   1,      /*!< IRC TRIM Interrupt                       */
    PWRWU_IRQn                    =   2,      /*!< Power Down Wake Up Interrupt             */
    SRAMPERR_IRQn                 =   3,      /*!< SRAM Parity Check Error Interrupt        */
    CKFAIL_IRQn                   =   4,      /*!< Clock Fail Detected Interrupt            */
    ISP_IRQn                      =   5,      /*!< FMC ISP Interrupt                        */
    RTC_IRQn                      =   6,      /*!< Real Time Clock Interrupt                */
    /* Reserved                                                                             */
    WDT0_IRQn                     =   8,      /*!< Watchdog Timer 0 Interrupt               */
    WWDT0_IRQn                    =   9,      /*!< Window Watchdog Timer 0 Interrupt        */

    EINT0_IRQn                    =  10,      /*!< External Input 0 Interrupt               */
    EINT1_IRQn                    =  11,      /*!< External Input 1 Interrupt               */
    EINT2_IRQn                    =  12,      /*!< External Input 2 Interrupt               */
    EINT3_IRQn                    =  13,      /*!< External Input 3 Interrupt               */
    EINT4_IRQn                    =  14,      /*!< External Input 4 Interrupt               */
    EINT5_IRQn                    =  15,      /*!< External Input 5 Interrupt               */
    GPA_IRQn                      =  16,      /*!< GPIO Port A Interrupt                    */
    GPB_IRQn                      =  17,      /*!< GPIO Port B Interrupt                    */
    GPC_IRQn                      =  18,      /*!< GPIO Port C Interrupt                    */
    GPD_IRQn                      =  19,      /*!< GPIO Port D Interrupt                    */

    GPE_IRQn                      =  20,      /*!< GPIO Port E Interrupt                    */
    GPF_IRQn                      =  21,      /*!< GPIO Port F Interrupt                    */
    QSPI0_IRQn                    =  22,      /*!< QSPI0 Interrupt                          */
    SPI0_IRQn                     =  23,      /*!< SPI0 Interrupt                           */
    BRAKE0_IRQn                   =  24,      /*!< PWM0 Brake Interrupt                     */
    PWM0P0_IRQn                   =  25,      /*!< PWM0 Pair 0 Interrupt                    */
    PWM0P1_IRQn                   =  26,      /*!< PWM0 Pair 1 Interrupt                    */
    PWM0P2_IRQn                   =  27,      /*!< PWM0 Pair 2 Interrupt                    */
    BRAKE1_IRQn                   =  28,      /*!< PWM1 Brake Interrupt                     */
    PWM1P0_IRQn                   =  29,      /*!< PWM1 Pair 0 Interrupt                    */

    PWM1P1_IRQn                   =  30,      /*!< PWM1 Pair 1 Interrupt                    */
    PWM1P2_IRQn                   =  31,      /*!< PWM1 Pair 2 Interrupt                    */
    TIMER0_IRQn                   =  32,      /*!< Timer0 Interrupt                         */
    TIMER1_IRQn                   =  33,      /*!< Timer1 Interrupt                         */
    TIMER2_IRQn                   =  34,      /*!< Timer2 Interrupt                         */
    TIMER3_IRQn                   =  35,      /*!< Timer3 Interrupt                         */
    UART0_IRQn                    =  36,      /*!< UART0 Interrupt                          */
    UART1_IRQn                    =  37,      /*!< UART1 Interrupt                          */
    I2C0_IRQn                     =  38,      /*!< I2C0 Interrupt                           */
    I2C1_IRQn                     =  39,      /*!< I2C1 Interrupt                           */

    PDMA0_IRQn                    =  40,      /*!< PDMA0 Interrupt                          */
    DAC0_IRQn                     =  41,      /*!< DAC0 Interrupt                           */
    EADC00_IRQn                   =  42,      /*!< EADC0 Interrupt 0                        */
    EADC01_IRQn                   =  43,      /*!< EADC0 Interrupt 1                        */
    ACMP01_IRQn                   =  44,      /*!< ACMP0 and ACMP1 Interrupt                */
    /* Reserved                                                                             */
    EADC02_IRQn                   =  46,      /*!< EADC0 Interrupt 2                        */
    EADC03_IRQn                   =  47,      /*!< EADC0 Interrupt 3                        */
    UART2_IRQn                    =  48,      /*!< UART2 Interrupt                          */
    UART3_IRQn                    =  49,      /*!< UART3 Interrupt                          */

    /* Reserved                                                                             */
    SPI1_IRQn                     =  51,      /*!< SPI1 Interrupt                           */
    /* Reserved                                                                             */
    USBD_IRQn                     =  53,      /*!< USB Device Interrupt                     */
    USBH_IRQn                     =  54,      /*!< USB Host Interrupt                       */
    /* Reserved                                                                             */
    ETI_IRQn                      =  56,      /*!< ETI Interrupt                            */
    CRC_IRQn                      =  57,      /*!< CRC Interrupt                            */
    /* Reserved                                                                             */
    NS_ISP_IRQn                   =  59,      /*!< FMC_NS ISP Interrupt                     */

    SCU_IRQn                      =  60,      /*!< SCU Interrupt                            */
    /* Reserved                                                                             */
    /* Reserved                                                                             */
    /* Reserved                                                                             */
    /* Reserved                                                                             */
    /* Reserved                                                                             */
    /* Reserved                                                                             */
    WDT1_IRQn                     =  67,      /*!< Watchdog Timer 1 Interrupt               */
    /* Reserved                                                                             */
    /* Reserved                                                                             */

    /* Reserved                                                                             */
    CRYPTO_IRQn                   =  71,      /*!< CRYPTO Interrupt                         */
    GPG_IRQn                      =  72,      /*!< GPIO Port G Interrupt                    */
    EINT6_IRQn                    =  73,      /*!< External Input 6 Interrupt               */
    UART4_IRQn                    =  74,      /*!< UART4 Interrupt                          */
    UART5_IRQn                    =  75,      /*!< UART5 Interrupt                          */
    USCI0_IRQn                    =  76,      /*!< USCI0 Interrupt                          */
    USCI1_IRQn                    =  77,      /*!< USCI1 Interrupt                          */
    BPWM0_IRQn                    =  78,      /*!< BPWM0 Interrupt                          */
    BPWM1_IRQn                    =  79,      /*!< BPWM1 Interrupt                          */

    /* Reserved                                                                             */
    /* Reserved                                                                             */
    I2C2_IRQn                     =  82,      /*!< I2C2 Interrupt                           */
    /* Reserved                                                                             */
    EQEI0_IRQn                    =  84,      /*!< EQEI0 Interrupt                          */
    EQEI1_IRQn                    =  85,      /*!< EQEI1 Interrupt                          */
    ECAP0_IRQn                    =  86,      /*!< ECAP0 Interrupt                          */
    /* Reserved                                                                             */
    GPH_IRQn                      =  88,      /*!< GPIO Port H Interrupt                    */
    EINT7_IRQn                    =  89,      /*!< External Input 7 Interrupt               */

    /* Reserved                                                                             */
    WWDT1_IRQn                    =  91,      /*!< Window Watchdog Timer 1 Interrupt        */
    /* Reserved                                                                             */
    /* Reserved                                                                             */
    /* Reserved                                                                             */
    /* Reserved                                                                             */
    NS_SRAMPE_IRQn                =  96,      /*!< NS SRAM parity check failed Interrupt    */
    CACHE_IRQn                    =  97,      /*!< CACHE parity error interrupt             */
    /* Reserved                                                                             */
    UART8_IRQn                    =  99,      /*!< UART8 Interrupt                          */

    UART9_IRQn                    = 100,      /*!< UART9 Interrupt                          */
    TRNG_IRQn                     = 101,      /*!< TRNG Interrupt                           */
    UART6_IRQn                    = 102,      /*!< UART6 Interrupt                          */
    UART7_IRQn                    = 103,      /*!< UART7 Interrupt                          */
    EADC10_IRQn                   = 104,      /*!< EADC1 Interrupt 0                        */
    EADC11_IRQn                   = 105,      /*!< EADC1 Interrupt 1                        */
    EADC12_IRQn                   = 106,      /*!< EADC1 Interrupt 2                        */
    EADC13_IRQn                   = 107,      /*!< EADC1 Interrupt 3                        */
    I3C0_IRQn                     = 108,      /*!< I3C0 Interrupt                           */
    /* Reserved                                                                             */

    /* Reserved                                                                             */
    DFMC_IRQn                     = 111,      /*!< DFMC Interrupt                           */
    CANFD00_IRQn                  = 112,      /*!< CANFD00 Interrupt                        */
    CANFD01_IRQn                  = 113,      /*!< CANFD01 Interrupt                        */
    CANFD10_IRQn                  = 114,      /*!< CANFD10 Interrupt                        */
    CANFD11_IRQn                  = 115,      /*!< CANFD11 Interrupt                        */
    /* Reserved                                                                             */
    /* Reserved                                                                             */
    /* Reserved                                                                             */
    NS_DFMC_IRQn                  = 119,      /*!< NS DFMC Interrupt                        */

    /* Reserved                                                                             */
    /* Reserved                                                                             */
    /* Reserved                                                                             */
    /* Reserved                                                                             */
    /* Reserved                                                                             */
    /* Reserved                                                                             */
    /* Reserved                                                                             */
    /* Reserved                                                                             */
    LLSI0_IRQn                    = 128,      /*!< LLSI0 Interrupt                          */
    LLSI1_IRQn                    = 129,      /*!< LLSI1 Interrupt                          */

    LLSI2_IRQn                    = 130,      /*!< LLSI2 Interrupt                          */
    LLSI3_IRQn                    = 131,      /*!< LLSI3 Interrupt                          */
    LLSI4_IRQn                    = 132,      /*!< LLSI4 Interrupt                          */
    LLSI5_IRQn                    = 133,      /*!< LLSI5 Interrupt                          */
    LLSI6_IRQn                    = 134,      /*!< LLSI6 Interrupt                          */
    LLSI7_IRQn                    = 135,      /*!< LLSI7 Interrupt                          */
    LLSI8_IRQn                    = 136,      /*!< LLSI8 Interrupt                          */
    LLSI9_IRQn                    = 137,      /*!< LLSI9 Interrupt                          */
    ELLSI0_IRQn                   = 138,      /*!< ELLSI0 Interrupt                         */
    ELLSI1_IRQn                   = 139,      /*!< ELLSI1 Interrupt                         */

    /** @cond DOXYGEN_IGNORE */
    IRQ_OFFSET                    = 16,       /* To omit MISRA_C Rule 10.4                  */
    TOTAL_IRQn_CNT                = ELLSI1_IRQn + IRQ_OFFSET,
    /** @endcond */
} IRQn_Type;


/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

/* -------  Start of section using anonymous unions and disabling warnings  ------- */
#if   defined (__CC_ARM)
#pragma push
#pragma anon_unions
#elif defined (__ICCARM__)
#pragma language=extended
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc11-extensions"
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#elif defined (__GNUC__)
/* anonymous unions are enabled by default */
#elif defined (__TMS470__)
/* anonymous unions are enabled by default */
#elif defined (__TASKING__)
#pragma warning 586
#elif defined (__CSMC__)
/* anonymous unions are enabled by default */
#else
#warning Not supported compiler type
#endif


/* --------  Configuration of Core Peripherals  ----------------------------------- */
#define __CM33_REV                0x0000U   /* Core revision r0p1 */
#define __SAUREGION_PRESENT       0U        /* SAU regions present */
#define __MPU_PRESENT             1U        /* MPU present */
#define __VTOR_PRESENT            1U        /* VTOR present */
#define __NVIC_PRIO_BITS          3U        /* Number of Bits used for Priority Levels */
#define __Vendor_SysTickConfig    0U        /* Set to 1 if different SysTick Config is used */
#define __FPU_PRESENT             1U        /* FPU present */
#define __DSP_PRESENT             1U        /* DSP extension present */

/** @} end of group CMSIS_Device */


#include "core_cm33.h"                        /* Processor and core peripheral */
#include "system_M3351.h"                     /* System header */

#if __has_include("partition_M3351.h")
#include "partition_M3351.h"                  /* User defined setup for Secure/Non-Secure Zones */
#else
#include "partition_M3351_template.h"         /* Default setup for Secure/Non-Secure Zones */
#endif

#if __has_include("mpu_config_M3351.h")
#include "mpu_config_M3351.h"                  /* User defined setup for MPU regions */
#else
#include "mpu_config_M3351_template.h"         /* Default setup for MPU regions */
#endif

/******************************************************************************/
/*                        Peripheral Register Structures                      */
/******************************************************************************/

/** @addtogroup REGISTER Control Register
    @{
*/

#include "acmp_reg.h"
#include "bpwm_reg.h"
#include "cache_reg.h"
#include "canfd_reg.h"
#include "clk_reg.h"
#include "crc_reg.h"
#include "crypto_reg.h"
#include "dac_reg.h"
#include "dfmc_reg.h"
#include "eadc_reg.h"
#include "ebi_reg.h"
#include "ecap_reg.h"
#include "ellsi_reg.h"
#include "pwm_reg.h"
#include "eqei_reg.h"
#include "fmc_reg.h"
#include "gpio_reg.h"
#include "i2c_reg.h"
#include "i3c_reg.h"
#include "llsi_reg.h"
#include "pdma_reg.h"
#include "qspi_reg.h"
#include "rtc_reg.h"
#include "scu_reg.h"
#include "spi_reg.h"
#include "sys_reg.h"
#include "timer_reg.h"
#include "trng_reg.h"
#include "uart_reg.h"
#include "ui2c_reg.h"
#include "usbd_reg.h"
#include "usbh_reg.h"
#include "uspi_reg.h"
#include "uuart_reg.h"
#include "wdt_reg.h"
#include "wwdt_reg.h"

/** @} end of group REGISTER */

/******************************************************************************/
/*                         Peripheral Memory Map                              */
/******************************************************************************/

/** @addtogroup PERIPHERAL_MEMMAP Peripheral Memory Base
    Memory Mapped Structure for peripheral
    @{
 */

/* Peripheral and SRAM base address */
#define FLASH_BASE                ((uint32_t)     0x00000000UL)  /*!< Flash Base Address        */
#define SRAM_BASE                 ((uint32_t)     0x20000000UL)  /*!< SRAM0~2 Base Address      */
#define PERIPH_BASE               ((uint32_t)     0x40000000UL)  /*!< Peripheral Base Address   */

/* Peripheral memory map */
#define AHBPERIPH_BASE            (PERIPH_BASE +  0x00000000UL)  /*!< AHB Base Address          */
#define APBPERIPH_BASE            (PERIPH_BASE +  0x00040000UL)  /*!< APB Base Address          */

/* AHB0 peripheral (HCLK clock domain) */
#define SYS_BASE                  (AHBPERIPH_BASE + 0x00000UL)
#define CLK_BASE                  (AHBPERIPH_BASE + 0x00200UL)
#define NMI_BASE                  (AHBPERIPH_BASE + 0x00300UL)

#define GPIO_BASE                 (AHBPERIPH_BASE + 0x04000UL)
#define GPIOA_BASE                (AHBPERIPH_BASE + 0x04000UL)
#define GPIOB_BASE                (AHBPERIPH_BASE + 0x04040UL)
#define GPIOC_BASE                (AHBPERIPH_BASE + 0x04080UL)
#define GPIOD_BASE                (AHBPERIPH_BASE + 0x040C0UL)
#define GPIOE_BASE                (AHBPERIPH_BASE + 0x04100UL)
#define GPIOF_BASE                (AHBPERIPH_BASE + 0x04140UL)
#define GPIOG_BASE                (AHBPERIPH_BASE + 0x04180UL)
#define GPIOH_BASE                (AHBPERIPH_BASE + 0x041C0UL)
#define GPIO_INT_BASE             (AHBPERIPH_BASE + 0x04440UL)
#define GPIO_PIN_DATA_BASE        (AHBPERIPH_BASE + 0x04800UL)

#define PDMA0_BASE                (AHBPERIPH_BASE + 0x08000UL)
#define USBH_BASE                 (AHBPERIPH_BASE + 0x09000UL)
#define FMC_BASE                  (AHBPERIPH_BASE + 0x0C000UL)
#define DFMC_BASE                 (AHBPERIPH_BASE + 0x0F000UL)

#define EBI_BASE                  (AHBPERIPH_BASE + 0x10000UL)

#define CANFD0_BASE               (AHBPERIPH_BASE + 0x20000UL)
#define CANFD1_BASE               (AHBPERIPH_BASE + 0x24000UL)
#define SCU_BASE                  (AHBPERIPH_BASE + 0x2F000UL)

#define CRC_BASE                  (AHBPERIPH_BASE + 0x31000UL)
#define CRYPTO_BASE               (AHBPERIPH_BASE + 0x32000UL)
#define CACHE_BASE                (AHBPERIPH_BASE + 0x36000UL)

/* APB0 peripheral (PCLK0 clock domain) */
#define WDT0_BASE                 (APBPERIPH_BASE + 0x00000UL)
#define WDT1_BASE                 (APBPERIPH_BASE + 0x02000UL)

#define TIMER0_BASE               (APBPERIPH_BASE + 0x10000UL)
#define TIMER1_BASE               (APBPERIPH_BASE + 0x10100UL)
#define BPWM0_BASE                (APBPERIPH_BASE + 0x1A000UL)
#define PWM0_BASE                 (APBPERIPH_BASE + 0x1C000UL)

#define QSPI0_BASE                (APBPERIPH_BASE + 0x20000UL)
#define SPI1_BASE                 (APBPERIPH_BASE + 0x22000UL)

#define UART0_BASE                (APBPERIPH_BASE + 0x30000UL)
#define UART2_BASE                (APBPERIPH_BASE + 0x32000UL)
#define UART4_BASE                (APBPERIPH_BASE + 0x34000UL)
#define UART6_BASE                (APBPERIPH_BASE + 0x36000UL)
#define UART8_BASE                (APBPERIPH_BASE + 0x38000UL)

#define I2C0_BASE                 (APBPERIPH_BASE + 0x40000UL)
#define I2C2_BASE                 (APBPERIPH_BASE + 0x42000UL)
#define LLSI0_BASE                (APBPERIPH_BASE + 0x48000UL)
#define LLSI2_BASE                (APBPERIPH_BASE + 0x48200UL)
#define LLSI4_BASE                (APBPERIPH_BASE + 0x48400UL)
#define LLSI6_BASE                (APBPERIPH_BASE + 0x48600UL)
#define LLSI8_BASE                (APBPERIPH_BASE + 0x48800UL)
#define ELLSI0_BASE               (APBPERIPH_BASE + 0x4A000UL)

#define WWDT0_BASE                (APBPERIPH_BASE + 0x56000UL)

#define EQEI0_BASE                (APBPERIPH_BASE + 0x70000UL)
#define ECAP0_BASE                (APBPERIPH_BASE + 0x74000UL)

#define USBD_BASE                 (APBPERIPH_BASE + 0x80000UL)

#define USCI0_BASE                (APBPERIPH_BASE + 0x90000UL)

/* APB1 peripheral (PCLK1 clock domain) */
#define RTC_BASE                  (APBPERIPH_BASE + 0x01000UL)
#define EADC0_BASE                (APBPERIPH_BASE + 0x03000UL)
#define ACMP01_BASE               (APBPERIPH_BASE + 0x05000UL)
#define DAC0_BASE                 (APBPERIPH_BASE + 0x07000UL)
#define EADC1_BASE                (APBPERIPH_BASE + 0x0B000UL)

#define TIMER2_BASE               (APBPERIPH_BASE + 0x11000UL)
#define TIMER3_BASE               (APBPERIPH_BASE + 0x11100UL)
#define BPWM1_BASE                (APBPERIPH_BASE + 0x1B000UL)
#define PWM1_BASE                 (APBPERIPH_BASE + 0x1D000UL)

#define SPI0_BASE                 (APBPERIPH_BASE + 0x21000UL)

#define UART1_BASE                (APBPERIPH_BASE + 0x31000UL)
#define UART3_BASE                (APBPERIPH_BASE + 0x33000UL)
#define UART5_BASE                (APBPERIPH_BASE + 0x35000UL)
#define UART7_BASE                (APBPERIPH_BASE + 0x37000UL)
#define UART9_BASE                (APBPERIPH_BASE + 0x39000UL)

#define I2C1_BASE                 (APBPERIPH_BASE + 0x41000UL)
#define I3C0_BASE                 (APBPERIPH_BASE + 0x46000UL)
#define LLSI1_BASE                (APBPERIPH_BASE + 0x49000UL)
#define LLSI3_BASE                (APBPERIPH_BASE + 0x49200UL)
#define LLSI5_BASE                (APBPERIPH_BASE + 0x49400UL)
#define LLSI7_BASE                (APBPERIPH_BASE + 0x49600UL)
#define LLSI9_BASE                (APBPERIPH_BASE + 0x49800UL)
#define ELLSI1_BASE               (APBPERIPH_BASE + 0x4B000UL)

#define WWDT1_BASE                (APBPERIPH_BASE + 0x58000UL)

#define EQEI1_BASE                (APBPERIPH_BASE + 0x71000UL)
#define TRNG_BASE                 (APBPERIPH_BASE + 0x79000UL)

#define USCI1_BASE                (APBPERIPH_BASE + 0x91000UL)

/** @} end of group PERIPHERAL_MEMMAP */


/******************************************************************************/
/*                         Peripheral Declaration                             */
/******************************************************************************/

/** @addtogroup PERIPHERAL_DECLARATION Peripheral Pointer
    The Declaration of Peripheral Pointer
    @{
 */

/** @addtogroup PERIPHERAL_S Secure Peripheral Pointer
    The Declaration of Secure Peripheral Pointer
    @{
*/

#define ACMP01_S                  ((ACMP_T *)     ACMP01_BASE)
#define BPWM0_S                   ((BPWM_T *)     BPWM0_BASE)
#define BPWM1_S                   ((BPWM_T *)     BPWM1_BASE)
#define CACHE_S                   ((CACHE_T *)    CACHE_BASE)
#define CANFD0_S                  ((CANFD_T *)    CANFD0_BASE)
#define CANFD1_S                  ((CANFD_T *)    CANFD1_BASE)
#define CLK_S                     ((CLK_T *)      CLK_BASE)
#define CRC_S                     ((CRC_T *)      CRC_BASE)
#define CRYPTO_S                  ((CRYPTO_T *)   CRYPTO_BASE)
#define DAC0_S                    ((DAC_T *)      DAC0_BASE)
#define DFMC_S                    ((DFMC_T *)     DFMC_BASE)
#define EADC0_S                   ((EADC_T *)     EADC0_BASE)
#define EADC1_S                   ((EADC_T *)     EADC1_BASE)
#define EBI_S                     ((EBI_T *)      EBI_BASE)
#define ECAP0_S                   ((ECAP_T *)     ECAP0_BASE)
#define ECAP1_S                   ((ECAP_T *)     ECAP1_BASE)
#define ELLSI0_S                  ((ELLSI_T *)    ELLSI0_BASE)
#define ELLSI1_S                  ((ELLSI_T *)    ELLSI1_BASE)
#define EQEI0_S                   ((EQEI_T *)     EQEI0_BASE)
#define EQEI1_S                   ((EQEI_T *)     EQEI1_BASE)
#define FMC_S                     ((FMC_T *)      FMC_BASE)

#define GPIO_S                    ((GPIO_INT_T *) GPIO_INT_BASE)
#define I2C0_S                    ((I2C_T *)      I2C0_BASE)
#define I2C1_S                    ((I2C_T *)      I2C1_BASE)
#define I2C2_S                    ((I2C_T *)      I2C2_BASE)
#define I3C0_S                    ((I3C_T *)      I3C0_BASE)
#define LLSI0_S                   ((LLSI_T *)     LLSI0_BASE)
#define LLSI1_S                   ((LLSI_T *)     LLSI1_BASE)
#define LLSI2_S                   ((LLSI_T *)     LLSI2_BASE)
#define LLSI3_S                   ((LLSI_T *)     LLSI3_BASE)
#define LLSI4_S                   ((LLSI_T *)     LLSI4_BASE)
#define LLSI5_S                   ((LLSI_T *)     LLSI5_BASE)
#define LLSI6_S                   ((LLSI_T *)     LLSI6_BASE)
#define LLSI7_S                   ((LLSI_T *)     LLSI7_BASE)
#define LLSI8_S                   ((LLSI_T *)     LLSI8_BASE)
#define LLSI9_S                   ((LLSI_T *)     LLSI9_BASE)

#define PA_S                      ((GPIO_T *)     GPIOA_BASE)
#define PB_S                      ((GPIO_T *)     GPIOB_BASE)
#define PC_S                      ((GPIO_T *)     GPIOC_BASE)
#define PD_S                      ((GPIO_T *)     GPIOD_BASE)
#define PE_S                      ((GPIO_T *)     GPIOE_BASE)
#define PF_S                      ((GPIO_T *)     GPIOF_BASE)
#define PG_S                      ((GPIO_T *)     GPIOG_BASE)
#define PH_S                      ((GPIO_T *)     GPIOH_BASE)
#define PDMA0_S                   ((PDMA_T *)     PDMA0_BASE)
#define PWM0_S                    ((PWM_T *)      PWM0_BASE)
#define PWM1_S                    ((PWM_T *)      PWM1_BASE)
#define QSPI0_S                   ((QSPI_T *)     QSPI0_BASE)
#define RTC_S                     ((RTC_T *)      RTC_BASE)

#define SCU_S                     ((SCU_T *)      SCU_BASE)
#define SPI0_S                    ((SPI_T *)      SPI0_BASE)
#define SPI1_S                    ((SPI_T *)      SPI1_BASE)
#define SYS_S                     ((SYS_T *)      SYS_BASE)
#define TIMER0_S                  ((TIMER_T *)    TIMER0_BASE)
#define TIMER1_S                  ((TIMER_T *)    TIMER1_BASE)
#define TIMER2_S                  ((TIMER_T *)    TIMER2_BASE)
#define TIMER3_S                  ((TIMER_T *)    TIMER3_BASE)
#define TRNG_S                    ((TRNG_T *)     TRNG_BASE)
#define UART0_S                   ((UART_T *)     UART0_BASE)
#define UART1_S                   ((UART_T *)     UART1_BASE)
#define UART2_S                   ((UART_T *)     UART2_BASE)
#define UART3_S                   ((UART_T *)     UART3_BASE)
#define UART4_S                   ((UART_T *)     UART4_BASE)
#define UART5_S                   ((UART_T *)     UART5_BASE)
#define UART6_S                   ((UART_T *)     UART6_BASE)
#define UART7_S                   ((UART_T *)     UART7_BASE)
#define UART8_S                   ((UART_T *)     UART8_BASE)
#define UART9_S                   ((UART_T *)     UART9_BASE)
#define UI2C0_S                   ((UI2C_T *)     USCI0_BASE)
#define UI2C1_S                   ((UI2C_T *)     USCI1_BASE)
#define USBD_S                    ((USBD_T *)     USBD_BASE)
#define USBH_S                    ((USBH_T *)     USBH_BASE)
#define USPI0_S                   ((USPI_T *)     USCI0_BASE)
#define USPI1_S                   ((USPI_T *)     USCI1_BASE)
#define UUART0_S                  ((UUART_T *)    USCI0_BASE)
#define UUART1_S                  ((UUART_T *)    USCI1_BASE)
#define WDT0_S                    ((WDT_T *)      WDT0_BASE)
#define WDT1_S                    ((WDT_T *)      WDT1_BASE)
#define WWDT0_S                   ((WWDT_T *)     WWDT0_BASE)
#define WWDT1_S                   ((WWDT_T *)     WWDT1_BASE)

/** @} end of group PERIPHERAL_S */

/** @addtogroup PERIPHERAL_NS Non-Secure Peripheral Pointer
    The Declaration of Non-Secure Peripheral Pointer
    @{
*/

#define NS_OFFSET                 ((uint32_t)     0x10000000UL)   /*!< Non-Secure Address Offset */

#define ACMP01_NS                 ((ACMP_T *)     (ACMP01_BASE    + NS_OFFSET))
#define BPWM0_NS                  ((BPWM_T *)     (BPWM0_BASE     + NS_OFFSET))
#define BPWM1_NS                  ((BPWM_T *)     (BPWM1_BASE     + NS_OFFSET))
#define CACHE_NS                  ((CACHE_T *)    (CACHE_BASE     + NS_OFFSET))
#define CANFD0_NS                 ((CANFD_T *)    (CANFD0_BASE    + NS_OFFSET))
#define CANFD1_NS                 ((CANFD_T *)    (CANFD1_BASE    + NS_OFFSET))
#define CLK_NS                    ((CLK_T *)      (CLK_BASE       + NS_OFFSET))
#define CRC_NS                    ((CRC_T *)      (CRC_BASE       + NS_OFFSET))
#define CRYPTO_NS                 ((CRYPTO_T *)   (CRYPTO_BASE    + NS_OFFSET))
#define DAC0_NS                   ((DAC_T *)      (DAC0_BASE      + NS_OFFSET))
#define DFMC_NS                   ((DFMC_T *)     (DFMC_BASE      + NS_OFFSET))
#define EADC0_NS                  ((EADC_T *)     (EADC0_BASE     + NS_OFFSET))
#define EADC1_NS                  ((EADC_T *)     (EADC1_BASE     + NS_OFFSET))
#define EBI_NS                    ((EBI_T *)      (EBI_BASE       + NS_OFFSET))
#define ECAP0_NS                  ((ECAP_T *)     (ECAP0_BASE     + NS_OFFSET))
#define ECAP1_NS                  ((ECAP_T *)     (ECAP1_BASE     + NS_OFFSET))
#define ELLSI0_NS                 ((ELLSI_T *)    (ELLSI0_BASE    + NS_OFFSET))
#define ELLSI1_NS                 ((ELLSI_T *)    (ELLSI1_BASE    + NS_OFFSET))
#define EQEI0_NS                  ((EQEI_T *)     (EQEI0_BASE     + NS_OFFSET))
#define EQEI1_NS                  ((EQEI_T *)     (EQEI1_BASE     + NS_OFFSET))
#define FMC_NS                    ((FMC_T *)      (FMC_BASE       + NS_OFFSET))

#define GPIO_NS                   ((GPIO_INT_T *) (GPIO_INT_BASE  + NS_OFFSET))
#define I2C0_NS                   ((I2C_T *)      (I2C0_BASE      + NS_OFFSET))
#define I2C1_NS                   ((I2C_T *)      (I2C1_BASE      + NS_OFFSET))
#define I2C2_NS                   ((I2C_T *)      (I2C2_BASE      + NS_OFFSET))
#define I3C0_NS                   ((I3C_T *)      (I3C0_BASE      + NS_OFFSET))
#define LLSI0_NS                  ((LLSI_T *)     (LLSI0_BASE     + NS_OFFSET))
#define LLSI1_NS                  ((LLSI_T *)     (LLSI1_BASE     + NS_OFFSET))
#define LLSI2_NS                  ((LLSI_T *)     (LLSI2_BASE     + NS_OFFSET))
#define LLSI3_NS                  ((LLSI_T *)     (LLSI3_BASE     + NS_OFFSET))
#define LLSI4_NS                  ((LLSI_T *)     (LLSI4_BASE     + NS_OFFSET))
#define LLSI5_NS                  ((LLSI_T *)     (LLSI5_BASE     + NS_OFFSET))
#define LLSI6_NS                  ((LLSI_T *)     (LLSI6_BASE     + NS_OFFSET))
#define LLSI7_NS                  ((LLSI_T *)     (LLSI7_BASE     + NS_OFFSET))
#define LLSI8_NS                  ((LLSI_T *)     (LLSI8_BASE     + NS_OFFSET))
#define LLSI9_NS                  ((LLSI_T *)     (LLSI9_BASE     + NS_OFFSET))

#define PA_NS                     ((GPIO_T *)     (GPIOA_BASE     + NS_OFFSET))
#define PB_NS                     ((GPIO_T *)     (GPIOB_BASE     + NS_OFFSET))
#define PC_NS                     ((GPIO_T *)     (GPIOC_BASE     + NS_OFFSET))
#define PD_NS                     ((GPIO_T *)     (GPIOD_BASE     + NS_OFFSET))
#define PE_NS                     ((GPIO_T *)     (GPIOE_BASE     + NS_OFFSET))
#define PF_NS                     ((GPIO_T *)     (GPIOF_BASE     + NS_OFFSET))
#define PG_NS                     ((GPIO_T *)     (GPIOG_BASE     + NS_OFFSET))
#define PH_NS                     ((GPIO_T *)     (GPIOH_BASE     + NS_OFFSET))
#define PDMA0_NS                  ((PDMA_T *)     (PDMA0_BASE     + NS_OFFSET))
#define PWM0_NS                   ((PWM_T *)      (PWM0_BASE      + NS_OFFSET))
#define PWM1_NS                   ((PWM_T *)      (PWM1_BASE      + NS_OFFSET))
#define QSPI0_NS                  ((QSPI_T *)     (QSPI0_BASE     + NS_OFFSET))

#define SCU_NS                    ((SCU_T *)      (SCU_BASE       + NS_OFFSET))
#define SPI0_NS                   ((SPI_T *)      (SPI0_BASE      + NS_OFFSET))
#define SPI1_NS                   ((SPI_T *)      (SPI1_BASE      + NS_OFFSET))
#define SYS_NS                    ((SYS_T *)      (SYS_BASE       + NS_OFFSET))
#define TIMER0_NS                 ((TIMER_T *)    (TIMER0_BASE    + NS_OFFSET))
#define TIMER1_NS                 ((TIMER_T *)    (TIMER1_BASE    + NS_OFFSET))
#define TIMER2_NS                 ((TIMER_T *)    (TIMER2_BASE    + NS_OFFSET))
#define TIMER3_NS                 ((TIMER_T *)    (TIMER3_BASE    + NS_OFFSET))
#define TRNG_NS                   ((TRNG_T *)     (TRNG_BASE      + NS_OFFSET))
#define UART0_NS                  ((UART_T *)     (UART0_BASE     + NS_OFFSET))
#define UART1_NS                  ((UART_T *)     (UART1_BASE     + NS_OFFSET))
#define UART2_NS                  ((UART_T *)     (UART2_BASE     + NS_OFFSET))
#define UART3_NS                  ((UART_T *)     (UART3_BASE     + NS_OFFSET))
#define UART4_NS                  ((UART_T *)     (UART4_BASE     + NS_OFFSET))
#define UART5_NS                  ((UART_T *)     (UART5_BASE     + NS_OFFSET))
#define UART6_NS                  ((UART_T *)     (UART6_BASE     + NS_OFFSET))
#define UART7_NS                  ((UART_T *)     (UART7_BASE     + NS_OFFSET))
#define UART8_NS                  ((UART_T *)     (UART8_BASE     + NS_OFFSET))
#define UART9_NS                  ((UART_T *)     (UART9_BASE     + NS_OFFSET))
#define UI2C0_NS                  ((UI2C_T *)     (USCI0_BASE     + NS_OFFSET))
#define UI2C1_NS                  ((UI2C_T *)     (USCI1_BASE     + NS_OFFSET))
#define USBD_NS                   ((USBD_T *)     (USBD_BASE      + NS_OFFSET))
#define USBH_NS                   ((USBH_T *)     (USBH_BASE      + NS_OFFSET))
#define USPI0_NS                  ((USPI_T *)     (USCI0_BASE     + NS_OFFSET))
#define USPI1_NS                  ((USPI_T *)     (USCI1_BASE     + NS_OFFSET))
#define UUART0_NS                 ((UUART_T *)    (USCI0_BASE     + NS_OFFSET))
#define UUART1_NS                 ((UUART_T *)    (USCI1_BASE     + NS_OFFSET))
#define WDT0_NS                   ((WDT_T *)      (WDT0_BASE      + NS_OFFSET))
#define WDT1_NS                   ((WDT_T *)      (WDT1_BASE      + NS_OFFSET))
#define WWDT0_NS                  ((WWDT_T *)     (WWDT0_BASE     + NS_OFFSET))
#define WWDT1_NS                  ((WWDT_T *)     (WWDT1_BASE     + NS_OFFSET))

/** @} end of group PERIPHERAL_NS */

/** @addtogroup PERIPHERAL_SNS Peripheral Pointer
    The Declaration of Peripheral Pointer
    @{
*/

/* Always Secure peripheral */
#define CACHE   CACHE_S
#define CRYPTO  CRYPTO_S
#define GPIO    GPIO_S
#define WDT0    WDT0_S
#define WWDT0   WWDT0_S

/* Always Secure Modules with Shared Register */
#if !defined(NVT_CMSE_NON_SECURE)
/* For TrustZone disabled or Secure Mode */
#define CLK     CLK_S
#define FMC     FMC_S
#define DFMC    DFMC_S
#define NMI     NMI_S
#define SCU     SCU_S
#define SYS     SYS_S
#else
/* For Non-Secure Mode to access Shared Register */
#define CLK     CLK_NS
#define FMC     FMC_NS
#define DFMC    DFMC_NS
#define NMI     NMI_NS
#define SCU     SCU_NS
#define SYS     SYS_NS
#endif


/*
  GPIO Secure/Non-Secure configuration is bit configurable.
  It means both Secure and Non-Secure may access a GPIO port.
*/
#if !defined(NVT_CMSE_NON_SECURE)
#define PA  PA_S
#define PB  PB_S
#define PC  PC_S
#define PD  PD_S
#define PE  PE_S
#define PF  PF_S
#define PG  PG_S
#define PH  PH_S
#else
#define PA  PA_NS
#define PB  PB_NS
#define PC  PC_NS
#define PD  PD_NS
#define PE  PE_NS
#define PF  PF_NS
#define PG  PG_NS
#define PH  PH_NS
#endif

/* SCU Configured peripheral */
/* SCU_PNSSET0 */
#if defined (SCU_INIT_PNSSET0_VAL) && (SCU_INIT_PNSSET0_VAL & SCU_PNSSET0_PDMA0_Msk)
# define PDMA0 PDMA0_NS
#else
# define PDMA0 PDMA0_S
#endif

#if defined (SCU_INIT_PNSSET0_VAL) && (SCU_INIT_PNSSET0_VAL & SCU_PNSSET0_USBH_Msk)
# define USBH USBH_NS
#else
# define USBH USBH_S
#endif

#if defined (SCU_INIT_PNSSET0_VAL) && (SCU_INIT_PNSSET0_VAL & SCU_PNSSET0_EBI_Msk)
# define EBI EBI_NS
#else
# define EBI EBI_S
#endif

/* SCU_PNSSET1 */
#if defined (SCU_INIT_PNSSET1_VAL) && (SCU_INIT_PNSSET1_VAL & SCU_PNSSET1_CANFD0_Msk)
# define CANFD0 CANFD0_NS
#else
# define CANFD0 CANFD0_S
#endif

#if defined (SCU_INIT_PNSSET1_VAL) && (SCU_INIT_PNSSET1_VAL & SCU_PNSSET1_CANFD1_Msk)
# define CANFD1 CANFD1_NS
#else
# define CANFD1 CANFD1_S
#endif

#if defined (SCU_INIT_PNSSET1_VAL) && (SCU_INIT_PNSSET1_VAL & SCU_PNSSET1_CRC_Msk)
# define CRC CRC_NS
#else
# define CRC CRC_S
#endif

#if defined (SCU_INIT_PNSSET1_VAL) && (SCU_INIT_PNSSET1_VAL & SCU_PNSSET1_CACHE_Msk)
# define CACHE CACHE_NS
#else
# define CACHE CACHE_S
#endif

/* SCU_PNSSET2 */
#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_RTC_Msk)
# define RTC RTC_NS
#else
# define RTC RTC_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_WDT1_Msk)
# define WDT1    WDT1_NS
#else
# define WDT1    WDT1_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_EADC0_Msk)
# define EADC0 EADC0_NS
#else
# define EADC0 EADC0_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_ACMP01_Msk)
# define ACMP01 ACMP01_NS
#else
# define ACMP01 ACMP01_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_DAC_Msk)
# define DAC0 DAC0_NS
#else
# define DAC0 DAC0_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_EADC1_Msk)
# define EADC1 EADC1_NS
#else
# define EADC1 EADC1_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_TIMER01_Msk)
# define TIMER0 TIMER0_NS
# define TIMER1 TIMER1_NS
#else
# define TIMER0 TIMER0_S
# define TIMER1 TIMER1_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_TIMER23_Msk)
# define TIMER2 TIMER2_NS
# define TIMER3 TIMER3_NS
#else
# define TIMER2 TIMER2_S
# define TIMER3 TIMER3_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_BPWM0_Msk)
# define BPWM0 BPWM0_NS
#else
# define BPWM0 BPWM0_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_BPWM1_Msk)
# define BPWM1 BPWM1_NS
#else
# define BPWM1 BPWM1_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_PWM0_Msk)
# define PWM0 PWM0_NS
#else
# define PWM0 PWM0_S
#endif

#if defined (SCU_INIT_PNSSET2_VAL) && (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_PWM1_Msk)
# define PWM1 PWM1_NS
#else
# define PWM1 PWM1_S
#endif

/* SCU_PNSSET3 */
#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_QSPI0_Msk)
# define QSPI0 QSPI0_NS
#else
# define QSPI0 QSPI0_S
#endif

#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_SPI0_Msk)
# define SPI0 SPI0_NS
#else
# define SPI0 SPI0_S
#endif

#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_SPI1_Msk)
# define SPI1 SPI1_NS
#else
# define SPI1 SPI1_S
#endif

#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_UART0_Msk)
# define UART0 UART0_NS
#else
# define UART0 UART0_S
#endif

#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_UART1_Msk)
# define UART1 UART1_NS
#else
# define UART1 UART1_S
#endif

#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_UART2_Msk)
# define UART2 UART2_NS
#else
# define UART2 UART2_S
#endif

#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_UART3_Msk)
# define UART3 UART3_NS
#else
# define UART3 UART3_S
#endif

#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_UART4_Msk)
# define UART4 UART4_NS
#else
# define UART4 UART4_S
#endif

#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_UART5_Msk)
# define UART5 UART5_NS
#else
# define UART5 UART5_S
#endif

#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_UART6_Msk)
# define UART6 UART6_NS
#else
# define UART6 UART6_S
#endif

#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_UART7_Msk)
# define UART7 UART7_NS
#else
# define UART7 UART7_S
#endif

#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_UART8_Msk)
# define UART8 UART8_NS
#else
# define UART8 UART8_S
#endif

#if defined (SCU_INIT_PNSSET3_VAL) && (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_UART9_Msk)
# define UART9 UART9_NS
#else
# define UART9 UART9_S
#endif

/* SCU_PNSSET4 */
#if defined (SCU_INIT_PNSSET4_VAL) && (SCU_INIT_PNSSET4_VAL & SCU_PNSSET4_I2C0_Msk)
# define I2C0 I2C0_NS
#else
# define I2C0 I2C0_S
#endif

#if defined (SCU_INIT_PNSSET4_VAL) && (SCU_INIT_PNSSET4_VAL & SCU_PNSSET4_I2C1_Msk)
# define I2C1 I2C1_NS
#else
# define I2C1 I2C1_S
#endif

#if defined (SCU_INIT_PNSSET4_VAL) && (SCU_INIT_PNSSET4_VAL & SCU_PNSSET4_I2C2_Msk)
# define I2C2 I2C2_NS
#else
# define I2C2 I2C2_S
#endif

#if defined (SCU_INIT_PNSSET4_VAL) && (SCU_INIT_PNSSET4_VAL & SCU_PNSSET4_I3C0_Msk)
# define I3C0 I3C0_NS
#else
# define I3C0 I3C0_S
#endif

#if defined (SCU_INIT_PNSSET4_VAL) && (SCU_INIT_PNSSET4_VAL & SCU_PNSSET4_LLSI0_Msk)
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

#if defined (SCU_INIT_PNSSET4_VAL) && (SCU_INIT_PNSSET4_VAL & SCU_PNSSET4_LLSI1_Msk)
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

#if defined (SCU_INIT_PNSSET4_VAL) && (SCU_INIT_PNSSET4_VAL & SCU_PNSSET4_ELLSI0_Msk)
# define ELLSI0 ELLSI0_NS
#else
# define ELLSI0 ELLSI0_S
#endif

#if defined (SCU_INIT_PNSSET4_VAL) && (SCU_INIT_PNSSET4_VAL & SCU_PNSSET4_ELLSI1_Msk)
# define ELLSI1 ELLSI1_NS
#else
# define ELLSI1 ELLSI1_S
#endif

#if defined (SCU_INIT_PNSSET4_VAL) && (SCU_INIT_PNSSET4_VAL & SCU_PNSSET4_WWDT1_Msk)
# define WWDT1 WWDT_NS
#else
# define WWDT1 WWDT1_S
#endif

/* SCU_PNSSET5 */
#if defined (SCU_INIT_PNSSET5_VAL) && (SCU_INIT_PNSSET5_VAL & SCU_PNSSET5_EQEI0_Msk)
# define EQEI0 EQEI0_NS
#else
# define EQEI0 EQEI0_S
#endif

#if defined (SCU_INIT_PNSSET5_VAL) && (SCU_INIT_PNSSET5_VAL & SCU_PNSSET5_EQEI1_Msk)
# define EQEI1 EQEI1_NS
#else
# define EQEI1 EQEI1_S
#endif

#if defined (SCU_INIT_PNSSET5_VAL) && (SCU_INIT_PNSSET5_VAL & SCU_PNSSET5_ECAP0_Msk)
# define ECAP0 ECAP0_NS
#else
# define ECAP0 ECAP0_S
#endif

#if defined (SCU_INIT_PNSSET5_VAL) && (SCU_INIT_PNSSET5_VAL & SCU_PNSSET5_TRNG_Msk)
# define TRNG TRNG_NS
#else
# define TRNG TRNG_S
#endif

/* SCU_PNSSET6 */
#if defined (SCU_INIT_PNSSET6_VAL) && (SCU_INIT_PNSSET6_VAL & SCU_PNSSET6_USBD_Msk)
# define USBD USBD_NS
#else
# define USBD USBD_S
#endif

#if defined (SCU_INIT_PNSSET6_VAL) && (SCU_INIT_PNSSET6_VAL & SCU_PNSSET6_USCI0_Msk)
# define UI2C0  UI2C0_NS
# define USPI0  USPI0_NS
# define UUART0 UUART0_NS
#else
# define UI2C0  UI2C0_S
# define USPI0  USPI0_S
# define UUART0 UUART0_S
#endif

#if defined (SCU_INIT_PNSSET6_VAL) && (SCU_INIT_PNSSET6_VAL & SCU_PNSSET6_USCI1_Msk)
# define USPI1  USPI1_NS
# define UI2C1  UI2C1_NS
# define UUART1 UUART1_NS
#else
# define USPI1  USPI1_S
# define UI2C1  UI2C1_S
# define UUART1 UUART1_S
#endif

/** @} end of group PERIPHERAL_SNS */
/** @} end of group PERIPHERAL_DECLARATION */

/* --------------------  End of section using anonymous unions  ------------------- */
#if   defined (__CC_ARM)
#pragma pop
#elif defined (__ICCARM__)
/* leave anonymous unions enabled */
#elif (__ARMCC_VERSION >= 6010050)
#pragma clang diagnostic pop
#elif defined (__GNUC__)
/* anonymous unions are enabled by default */
#elif defined (__TMS470__)
/* anonymous unions are enabled by default */
#elif defined (__TASKING__)
#pragma warning restore
#elif defined (__CSMC__)
/* anonymous unions are enabled by default */
#else
#warning Not supported compiler type
#endif


/*=============================================================================*/

/** @addtogroup IO_ROUTINE I/O Routines
    The Declaration of I/O Routines
    @{
 */

typedef volatile uint8_t  vu8;    ///< Define  8-bit unsigned volatile data type
typedef volatile uint16_t vu16;   ///< Define 16-bit unsigned volatile data type
typedef volatile uint32_t vu32;   ///< Define 32-bit unsigned volatile data type
typedef volatile uint64_t vu64;   ///< Define 64-bit unsigned volatile data type

/**
  * @brief Get a 8-bit unsigned value from specified address
  * @param[in] addr Address to get 8-bit data from
  * @return  8-bit unsigned value stored in specified address
  */
#define M8(addr)            (*((vu8  *) (addr)))

/**
  * @brief Get a 16-bit unsigned value from specified address
  * @param[in] addr Address to get 16-bit data from
  * @return  16-bit unsigned value stored in specified address
  * @note The input address must be 16-bit aligned
  */
#define M16(addr)           (*((vu16 *) (addr)))

/**
  * @brief Get a 32-bit unsigned value from specified address
  * @param[in] addr Address to get 32-bit data from
  * @return  32-bit unsigned value stored in specified address
  * @note The input address must be 32-bit aligned
  */
#define M32(addr)           (*((vu32 *) (addr)))

/**
  * @brief Set a 32-bit unsigned value to specified I/O port
  * @param[in] port Port address to set 32-bit data
  * @param[in] value Value to write to I/O port
  * @return  None
  * @note The output port must be 32-bit aligned
  */
#define outpw(port,value)   (*((volatile unsigned int *)(port))=(value))

/**
  * @brief Get a 32-bit unsigned value from specified I/O port
  * @param[in] port Port address to get 32-bit data from
  * @return  32-bit unsigned value stored in specified I/O port
  * @note The input port must be 32-bit aligned
  */
#define inpw(port)          ((*((volatile unsigned int *)(port))))

/**
  * @brief Set a 16-bit unsigned value to specified I/O port
  * @param[in] port Port address to set 16-bit data
  * @param[in] value Value to write to I/O port
  * @return  None
  * @note The output port must be 16-bit aligned
  */
#define outps(port,value)   (*((volatile unsigned short *)(port))=(value))

/**
  * @brief Get a 16-bit unsigned value from specified I/O port
  * @param[in] port Port address to get 16-bit data from
  * @return  16-bit unsigned value stored in specified I/O port
  * @note The input port must be 16-bit aligned
  */
#define inps(port)          ((*((volatile unsigned short *)(port))))

/**
  * @brief Set a 8-bit unsigned value to specified I/O port
  * @param[in] port Port address to set 8-bit data
  * @param[in] value Value to write to I/O port
  * @return  None
  */
#define outpb(port,value)   (*((volatile unsigned char *)(port))=(value))

/**
  * @brief Get a 8-bit unsigned value from specified I/O port
  * @param[in] port Port address to get 8-bit data from
  * @return  8-bit unsigned value stored in specified I/O port
  */
#define inpb(port)          ((*((volatile unsigned char *)(port))))

/**
  * @brief Set a 32-bit unsigned value to specified I/O port
  * @param[in] port Port address to set 32-bit data
  * @param[in] value Value to write to I/O port
  * @return  None
  * @note The output port must be 32-bit aligned
  */
#define outp32(port,value)  (*((volatile unsigned int *)(port))=(value))

/**
  * @brief Get a 32-bit unsigned value from specified I/O port
  * @param[in] port Port address to get 32-bit data from
  * @return  32-bit unsigned value stored in specified I/O port
  * @note The input port must be 32-bit aligned
  */
#define inp32(port)         ((*((volatile unsigned int *)(port))))

/**
  * @brief Set a 16-bit unsigned value to specified I/O port
  * @param[in] port Port address to set 16-bit data
  * @param[in] value Value to write to I/O port
  * @return  None
  * @note The output port must be 16-bit aligned
  */
#define outp16(port,value)  (*((volatile unsigned short *)(port))=(value))

/**
  * @brief Get a 16-bit unsigned value from specified I/O port
  * @param[in] port Port address to get 16-bit data from
  * @return  16-bit unsigned value stored in specified I/O port
  * @note The input port must be 16-bit aligned
  */
#define inp16(port)         ((*((volatile unsigned short *)(port))))

/**
  * @brief Set a 8-bit unsigned value to specified I/O port
  * @param[in] port Port address to set 8-bit data
  * @param[in] value Value to write to I/O port
  * @return  None
  */
#define outp8(port,value)   (*((volatile unsigned char *)(port))=(value))

/**
  * @brief Get a 8-bit unsigned value from specified I/O port
  * @param[in] port Port address to get 8-bit data from
  * @return  8-bit unsigned value stored in specified I/O port
  */
#define inp8(port)          ((*((volatile unsigned char *)(port))))

/** @} end of group IO_ROUTINE */


/******************************************************************************/
/*                Legacy Constants                                            */
/******************************************************************************/

/** @addtogroup Legacy_Constants Legacy Constants
    Legacy Constants
    @{
*/

#define E_SUCCESS           (0)

#ifndef NULL
#define NULL                (0)                 ///< NULL pointer
#endif

#define TRUE                (1UL)               ///< Boolean true, define to use in API parameters or return value
#define FALSE               (0UL)               ///< Boolean false, define to use in API parameters or return value

#define ENABLE              (1UL)               ///< Enable, define to use in API parameters
#define DISABLE             (0UL)               ///< Disable, define to use in API parameters

/* Define one bit mask */
#define BIT0                (0x00000001UL)      ///< Bit 0 mask of an 32 bit integer
#define BIT1                (0x00000002UL)      ///< Bit 1 mask of an 32 bit integer
#define BIT2                (0x00000004UL)      ///< Bit 2 mask of an 32 bit integer
#define BIT3                (0x00000008UL)      ///< Bit 3 mask of an 32 bit integer
#define BIT4                (0x00000010UL)      ///< Bit 4 mask of an 32 bit integer
#define BIT5                (0x00000020UL)      ///< Bit 5 mask of an 32 bit integer
#define BIT6                (0x00000040UL)      ///< Bit 6 mask of an 32 bit integer
#define BIT7                (0x00000080UL)      ///< Bit 7 mask of an 32 bit integer
#define BIT8                (0x00000100UL)      ///< Bit 8 mask of an 32 bit integer
#define BIT9                (0x00000200UL)      ///< Bit 9 mask of an 32 bit integer
#define BIT10               (0x00000400UL)      ///< Bit 10 mask of an 32 bit integer
#define BIT11               (0x00000800UL)      ///< Bit 11 mask of an 32 bit integer
#define BIT12               (0x00001000UL)      ///< Bit 12 mask of an 32 bit integer
#define BIT13               (0x00002000UL)      ///< Bit 13 mask of an 32 bit integer
#define BIT14               (0x00004000UL)      ///< Bit 14 mask of an 32 bit integer
#define BIT15               (0x00008000UL)      ///< Bit 15 mask of an 32 bit integer
#define BIT16               (0x00010000UL)      ///< Bit 16 mask of an 32 bit integer
#define BIT17               (0x00020000UL)      ///< Bit 17 mask of an 32 bit integer
#define BIT18               (0x00040000UL)      ///< Bit 18 mask of an 32 bit integer
#define BIT19               (0x00080000UL)      ///< Bit 19 mask of an 32 bit integer
#define BIT20               (0x00100000UL)      ///< Bit 20 mask of an 32 bit integer
#define BIT21               (0x00200000UL)      ///< Bit 21 mask of an 32 bit integer
#define BIT22               (0x00400000UL)      ///< Bit 22 mask of an 32 bit integer
#define BIT23               (0x00800000UL)      ///< Bit 23 mask of an 32 bit integer
#define BIT24               (0x01000000UL)      ///< Bit 24 mask of an 32 bit integer
#define BIT25               (0x02000000UL)      ///< Bit 25 mask of an 32 bit integer
#define BIT26               (0x04000000UL)      ///< Bit 26 mask of an 32 bit integer
#define BIT27               (0x08000000UL)      ///< Bit 27 mask of an 32 bit integer
#define BIT28               (0x10000000UL)      ///< Bit 28 mask of an 32 bit integer
#define BIT29               (0x20000000UL)      ///< Bit 29 mask of an 32 bit integer
#define BIT30               (0x40000000UL)      ///< Bit 30 mask of an 32 bit integer
#define BIT31               (0x80000000UL)      ///< Bit 31 mask of an 32 bit integer

/* Byte Mask Definitions */
#define BYTE0_Msk           (0x000000FFUL)      ///< Mask to get bit0~bit7 from a 32 bit integer
#define BYTE1_Msk           (0x0000FF00UL)      ///< Mask to get bit8~bit15 from a 32 bit integer
#define BYTE2_Msk           (0x00FF0000UL)      ///< Mask to get bit16~bit23 from a 32 bit integer
#define BYTE3_Msk           (0xFF000000UL)      ///< Mask to get bit24~bit31 from a 32 bit integer

#define GET_BYTE0(u32Param) (((u32Param) & BYTE0_Msk)      )  /*!< Extract Byte 0 (Bit  0~ 7) from parameter u32Param */
#define GET_BYTE1(u32Param) (((u32Param) & BYTE1_Msk) >>  8)  /*!< Extract Byte 1 (Bit  8~15) from parameter u32Param */
#define GET_BYTE2(u32Param) (((u32Param) & BYTE2_Msk) >> 16)  /*!< Extract Byte 2 (Bit 16~23) from parameter u32Param */
#define GET_BYTE3(u32Param) (((u32Param) & BYTE3_Msk) >> 24)  /*!< Extract Byte 3 (Bit 24~31) from parameter u32Param */

/** @} end of group Legacy_Constants */

/******************************************************************************/
/*                         Peripheral header files                            */
/******************************************************************************/

#include "acmp.h"
#include "bpwm.h"
#include "cache.h"
#include "canfd.h"
#include "clk.h"
#include "crc.h"
#include "crypto.h"
#include "dac.h"
#include "dfmc.h"
#include "eadc.h"
#include "ebi.h"
#include "ecap.h"
#include "eqei.h"
#include "fmc.h"
#include "gpio.h"
#include "i2c.h"
#include "i3c.h"
#include "pdma.h"
#include "pwm.h"
#include "epwm.h"
#include "qspi.h"
#include "rng.h"
#include "rtc.h"
#include "scu.h"
#include "spi.h"
#include "sys.h"
#include "timer.h"
#include "timer_pwm.h"
#include "trng.h"
#include "uart.h"
#include "usbd.h"
#include "usci_i2c.h"
#include "usci_spi.h"
#include "usci_uart.h"
#include "wdt.h"
#include "wwdt.h"


#ifdef __cplusplus
}
#endif

#endif  /* __M3351_H__ */
