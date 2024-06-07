/**************************************************************************//**
 * @file     M2L31.h
 * @version  V1.0
 * @brief    Peripheral Access Layer Header File
 *
 * @note
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/

/**
  \mainpage NuMicro M2L31 Series CMSIS BSP Driver Reference
  *
  * <b>Introduction</b>
  *
  * This user manual describes the usage of M2L31 Series MCU device driver
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
 * SPDX-License-Identifier: Apache-2.0
  * @copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
  */

#ifndef __M2L31_H__
#define __M2L31_H__

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************/
/*                Processor and Core Peripherals                              */
/******************************************************************************/
/** @addtogroup CMSIS_Device CMSIS Definitions
  Configuration of the Cortex-M23 Processor and Core Peripherals
  @{
*/


/*
 * ==========================================================================
 * ---------- Interrupt Number Definition -----------------------------------
 * ==========================================================================
 */

/**
 * @details  Interrupt Number Definition.
 */
typedef enum IRQn
{
    /******  Cortex-M0 Processor Exceptions Numbers ***********************************************/
    NonMaskableInt_IRQn = -14,  /*!< 2 Non Maskable Interrupt                             */
    HardFault_IRQn      = -13,  /*!< 3 Cortex-M0 Hard Fault Interrupt                     */
    SVCall_IRQn         = -5,   /*!< 11 Cortex-M0 SV Call Interrupt                       */
    PendSV_IRQn         = -2,   /*!< 14 Cortex-M0 Pend SV Interrupt                       */
    SysTick_IRQn        = -1,   /*!< 15 Cortex-M0 System Tick Interrupt                   */

    /******  ARMIKMCU Swift specific Interrupt Numbers ********************************************/
    BOD_IRQn            = 0,    /*!< Brown-Out low voltage detected interrupt   */
    IRCTRIM_IRQn        = 1,    /*!< IRC TRIM interrupt                         */
    PWRWU_IRQn          = 2,    /*!< Clock controller interrupt for chip wake-up from power-down state */
    SRAM_PERR_IRQn      = 3,    /*!< SRAM parity check error interrupt          */
    CLKFAIL_IRQn        = 4,    /*!< Clock fail detected interrupt              */
    RMC_IRQn            = 5,    /*!< RRAM Memory Controller interrupt           */
    RTC_IRQn            = 6,    /*!< Real time clock interrupt                  */
    TAMPER_IRQn         = 7,    /*!< Backup register tamper interrupt           */
    WDT_IRQn            = 8,    /*!< Watchdog Timer interrupt                   */
    WWDT_IRQn           = 9,    /*!< Window Watchdog Timer interrupt            */
    EINT0_IRQn          = 10,   /*!< External interrupt from INT0 pins          */
    EINT1_IRQn          = 11,   /*!< External interrupt from INT1 pins          */
    EINT2_IRQn          = 12,   /*!< External interrupt from INT2 pin           */
    EINT3_IRQn          = 13,   /*!< External interrupt from INT3 pin           */
    EINT4_IRQn          = 14,   /*!< External interrupt from INT4 pin           */
    EINT5_IRQn          = 15,   /*!< External interrupt from INT5 pin           */
    GPA_IRQn            = 16,   /*!< External interrupt from PA[15:0] pin       */
    GPB_IRQn            = 17,   /*!< External interrupt from PB[15:0] pin       */
    GPC_IRQn            = 18,   /*!< External interrupt from PC[15:0] pin       */
    GPD_IRQn            = 19,   /*!< External interrupt from PD[15:0] pin       */
    GPE_IRQn            = 20,   /*!< External interrupt from PE[15:0] pin       */
    GPF_IRQn            = 21,   /*!< External interrupt from PF[15:0] pin       */
    QSPI0_IRQn          = 22,   /*!< QSPI0 interrupt                            */
    SPI0_IRQn           = 23,   /*!< SPI0 interrupt                             */
    EBRAKE0_IRQn        = 24,   /*!< EPWM0 brake interrupt                      */
    EPWM0_P0_IRQn       = 25,   /*!< EPWM0 pair 0 interrupt                     */
    EPWM0_P1_IRQn       = 26,   /*!< EPWM0 pair 1 interrupt                     */
    EPWM0_P2_IRQn       = 27,   /*!< EPWM0 pair 2 interrupt                     */
    EBRAKE1_IRQn        = 28,   /*!< EPWM1 brake interrupt                      */
    EPWM1_P0_IRQn       = 29,   /*!< EPWM1 pair 0 interrupt                     */
    EPWM1_P1_IRQn       = 30,   /*!< EPWM1 pair 1 interrupt                     */
    EPWM1_P2_IRQn       = 31,   /*!< EPWM1 pair 2 interrupt                     */
    TMR0_IRQn           = 32,   /*!< Timer 0 interrupt                          */
    TMR1_IRQn           = 33,   /*!< Timer 1 interrupt                          */
    TMR2_IRQn           = 34,   /*!< Timer 2 interrupt                          */
    TMR3_IRQn           = 35,   /*!< Timer 3 interrupt                          */
    UART0_IRQn          = 36,   /*!< UART0 interrupt                            */
    UART1_IRQn          = 37,   /*!< UART1 interrupt                            */
    I2C0_IRQn           = 38,   /*!< I2C0 interrupt                             */
    I2C1_IRQn           = 39,   /*!< I2C1 interrupt                             */
    PDMA0_IRQn          = 40,   /*!< PDMA0 interrupt                            */
    DAC_IRQn            = 41,   /*!< DAC interrupt                              */
    EADC0_INT0_IRQn     = 42,   /*!< EADC0 interrupt source 0                   */
    EADC0_INT1_IRQn     = 43,   /*!< EADC0 interrupt source 1                   */
    ACMP01_IRQn         = 44,   /*!< ACMP0 and ACMP1 interrupt                  */
    ACMP2_IRQn          = 45,   /*!< ACMP2 interrupt                            */
    EADC0_INT2_IRQn     = 46,   /*!< EADC0 interrupt source 2                   */
    EADC0_INT3_IRQn     = 47,   /*!< EADC0 interrupt source 3                   */
    UART2_IRQn          = 48,   /*!< UART2 interrupt                            */
    UART3_IRQn          = 49,   /*!< UART3 interrupt                            */
    RESERVED0           = 50,   /*!< Reserved                                   */
    SPI1_IRQn           = 51,   /*!< SPI1 interrupt                             */
    SPI2_IRQn           = 52,   /*!< SPI2 interrupt                             */
    USBD_IRQn           = 53,   /*!< USB device interrupt                       */
    USBH_IRQn           = 54,   /*!< USB host interrupt                         */
    USBOTG_IRQn         = 55,   /*!< USB OTG interrupt                          */
    ETI_IRQn            = 56,   /*!< External Trigger Interface interrupt       */
    CRC0_IRQn           = 57,   /*!< CRC0 interrupt                             */
    RESERVED1           = 58,   /*!< Reserved                                   */
    RESERVED2           = 59,   /*!< Reserved                                   */
    RESERVED3           = 60,   /*!< Reserved                                   */
    RESERVED4           = 61,   /*!< Reserved                                   */
    SPI3_IRQn           = 62,   /*!< SPI3 interrupt                             */
    TK_IRQn             = 63,   /*!< Touchkey interrupt                         */
    RESERVED5           = 64,   /*!< Reserved                                   */
    RESERVED6           = 65,   /*!< Reserved                                   */
    RESERVED7           = 66,   /*!< Reserved                                   */
    RESERVED8           = 67,   /*!< Reserved                                   */
    RESERVED9           = 68,   /*!< Reserved                                   */
    RESERVED10          = 69,   /*!< Reserved                                   */
    OPA_IRQn            = 70,   /*!< Analog OPA interrupt                       */
    CRPT_IRQn           = 71,   /*!< Crypto interrupt                           */
    GPG_IRQn            = 72,   /*!< External interrupt from PG[15:0] pin       */
    EINT6_IRQn          = 73,   /*!< External interrupt from INT6 pin           */
    UART4_IRQn          = 74,   /*!< UART4 interrupt                            */
    UART5_IRQn          = 75,   /*!< UART5 interrupt                            */
    USCI0_IRQn          = 76,   /*!< USCI0 interrupt                            */
    USCI1_IRQn          = 77,   /*!< USCI1 interrupt                            */
    RESERVED11          = 78,   /*!< Reserved                                   */
    RESERVED12          = 79,   /*!< Reserved                                   */
    RESERVED13          = 80,   /*!< Reserved                                   */
    RESERVED14          = 81,   /*!< Reserved                                   */
    I2C2_IRQn           = 82,   /*!< I2C2 interrupt                             */
    I2C3_IRQn           = 83,   /*!< I2C3 interrupt                             */
    EQEI0_IRQn          = 84,   /*!< EQEI0 interrupt                            */
    EQEI1_IRQn          = 85,   /*!< EQEI1 interrupt                            */
    ECAP0_IRQn          = 86,   /*!< ECAP0 interrupt                            */
    ECAP1_IRQn          = 87,   /*!< ECAP1 interrupt                            */
    GPH_IRQn            = 88,   /*!< External interrupt from PH[15:0] pin       */
    EINT7_IRQn          = 89,   /*!< External interrupt from INT7 pin           */
    RESERVED15          = 90,   /*!< Reserved                                   */
    RESERVED16          = 91,   /*!< Reserved                                   */
    RESERVED17          = 92,   /*!< Reserved                                   */
    RESERVED18          = 93,   /*!< Reserved                                   */
    RESERVED19          = 94,   /*!< Reserved                                   */
    RESERVED20          = 95,   /*!< Reserved                                   */
    RESERVED21          = 96,   /*!< Reserved                                   */
    RESERVED22          = 97,   /*!< Reserved                                   */
    LPPDMA0_IRQn        = 98,   /*!< LPPDMA0 interrupt                          */
    RESERVED23          = 99,   /*!< Reserved                                   */
    RESERVED24          = 100,  /*!< Reserved                                   */
    TRNG_IRQn           = 101,  /*!< TRNG interrupt                             */
    UART6_IRQn          = 102,  /*!< UART6 interrupt                            */
    UART7_IRQn          = 103,  /*!< UART7 interrupt                            */
    RESERVED25          = 104,  /*!< Reserved                                   */
    RESERVED26          = 105,  /*!< Reserved                                   */
    RESERVED27          = 106,  /*!< Reserved                                   */
    RESERVED28          = 107,  /*!< Reserved                                   */
    UTCPD_IRQn          = 108,  /*!< UTCPD interrupt                            */
    RESERVED29          = 109,  /*!< Reserved                                   */
    RESERVED30          = 110,  /*!< Reserved                                   */
    RESERVED31          = 111,  /*!< Reserved                                   */
    CANFD00_IRQn        = 112,  /*!< CANFD00 interrupt                          */
    CANFD01_IRQn        = 113,  /*!< CANFD01 interrupt                          */
    CANFD10_IRQn        = 114,  /*!< CANFD10 interrupt                          */
    CANFD11_IRQn        = 115,  /*!< CANFD11 interrupt                          */
    RESERVED32          = 116,  /*!< Reserved                                   */
    RESERVED33          = 117,  /*!< Reserved                                   */
    RESERVED34          = 118,  /*!< Reserved                                   */
    RESERVED35          = 119,  /*!< Reserved                                   */
    RESERVED36          = 120,  /*!< Reserved                                   */
    RESERVED37          = 121,  /*!< Reserved                                   */
    RESERVED38          = 122,  /*!< Reserved                                   */
    RESERVED39          = 123,  /*!< Reserved                                   */
    RESERVED40          = 124,  /*!< Reserved                                   */
    RESERVED41          = 125,  /*!< Reserved                                   */
    RESERVED42          = 126,  /*!< Reserved                                   */
    RESERVED43          = 127,  /*!< Reserved                                   */
    BRAKE0_IRQn         = 128,  /*!< PWM0 brake interrupt                       */
    PWM0_P0_IRQn        = 129,  /*!< PWM0 pair 0 interrupt                      */
    PWM0_P1_IRQn        = 130,  /*!< PWM0 pair 1 interrupt                      */
    PWM0_P2_IRQn        = 131,  /*!< PWM0 pair 2 interrupt                      */
    BRAKE1_IRQn         = 132,  /*!< PWM1 brake interrupt                       */
    PWM1_P0_IRQn        = 133,  /*!< PWM1 pair 0 interrupt                      */
    PWM1_P1_IRQn        = 134,  /*!< PWM1 pair 1 interrupt                      */
    PWM1_P2_IRQn        = 135,  /*!< PWM1 pair 2 interrupt                      */
    LPADC0_IRQn         = 136,  /*!< LPADC0 interrupt                           */
    LPUART0_IRQn        = 137,  /*!< LPUART0 interrupt                          */
    LPI2C0_IRQn         = 138,  /*!< LPI2C0 interrupt                           */
    LPSPI0_IRQn         = 139,  /*!< LPSPI0 interrupt                           */
    LPTMR0_IRQn         = 140,  /*!< LPTMR0 interrupt                           */
    LPTMR1_IRQn         = 141,  /*!< LPTMR1 interrupt                           */
    TTMR0_IRQn          = 142,  /*!< TTMR0 interrupt                            */
    TTMR1_IRQn          = 143,  /*!< TTMR1 interrupt                            */
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


/* --------  Configuration of the Cortex-ARMv8MBL Processor and Core Peripherals  ------- */
#define __ARMv8MBL_REV            0x0000U   /* Core revision r0p0                         */
#define __SAU_PRESENT             0U        /* SAU present                                */
#define __MPU_PRESENT             1U        /* MPU present                                */
#define __VTOR_PRESENT            1U        /* VTOR present                               */
#define __NVIC_PRIO_BITS          2U        /* Number of Bits used for Priority Levels    */
#define __Vendor_SysTickConfig    0U        /* Set to 1 if different SysTick Config is used */
#define USE_ASSERT                0U        /* Define to use Assert function or not       */

/*@}*/ /* end of group CMSIS_Device */


#include "core_cm23.h"                      /* Processor and core peripherals             */
#include "system_M2L31.h"                   /* System Header                              */

/**
 * Initialize the system clock
 *
 * @param  none
 * @return none
 *
 * @brief  Setup the micro controller system
 *         Initialize the PLL and update the SystemFrequency variable
 */
extern void SystemInit(void);


/******************************************************************************/
/*                Device Specific Peripheral registers structures             */
/******************************************************************************/

/** @addtogroup REGISTER Control Register

  @{

*/

#include "acmp_reg.h"
#include "canfd_reg.h"
#include "clk_reg.h"
#include "crc_reg.h"
#include "crypto_reg.h"
#include "dac_reg.h"
#include "eadc_reg.h"
#include "ebi_reg.h"
#include "ecap_reg.h"
#include "epwm_reg.h"
#include "eqei_reg.h"
#include "gpio_reg.h"
#include "i2c_reg.h"
#include "lpadc_reg.h"
#include "lpgpio_reg.h"
#include "lpi2c_reg.h"
#include "lppdma_reg.h"
#include "lpspi_reg.h"
#include "lptmr_reg.h"
#include "lpuart_reg.h"
#include "opa_reg.h"
#include "otg_reg.h"
#include "pdma_reg.h"
#include "pwm_reg.h"
#include "qspi_reg.h"
#include "rmc_reg.h"
#include "rtc_reg.h"
#include "spi_reg.h"
#include "sys_reg.h"
#include "timer_reg.h"
#include "tk_reg.h"
#include "trng_reg.h"
#include "ttmr_reg.h"
#include "uart_reg.h"
#include "ui2c_reg.h"
#include "usbd_reg.h"
#include "usbh_reg.h"
#include "uspi_reg.h"
#include "utcpd_reg.h"
#include "uuart_reg.h"
#include "wdt_reg.h"
#include "wwdt_reg.h"


/**@}*/ /* end of REGISTER group */


/******************************************************************************/
/*                         Peripheral memory map                              */
/******************************************************************************/
/** @addtogroup PERIPHERAL_BASE Peripheral Memory Base
  Memory Mapped Structure for Series Peripheral
  @{
 */


/* Peripheral and SRAM base address */
#define FLASH_BASE              ((uint32_t)0x00000000UL)        /*!< Flash Base Address      */
#define SRAM_BASE               ((uint32_t)0x20000000UL)        /*!< SRAM Base Address       */
#define LPSRAM_BASE             ((uint32_t)0x28000000UL)        /*!< LPSRAM Base Address     */
#define PERIPH_BASE             ((uint32_t)0x40000000UL)        /*!< Peripheral Base Address */

/* Peripheral memory map */
#define AHBPERIPH_BASE          (PERIPH_BASE)                   /*!< AHB Base Address        */
#define APBPERIPH_BASE          (PERIPH_BASE + 0x00040000UL)    /*!< APB Base Address        */

/*!< AHB peripherals */
#define SYS_BASE                (AHBPERIPH_BASE + 0x00000UL)
#define CLK_BASE                (AHBPERIPH_BASE + 0x00200UL)
#define NMI_BASE                (AHBPERIPH_BASE + 0x00300UL)
#define GPIO_BASE               (AHBPERIPH_BASE + 0x04000UL)
#define GPIOA_BASE              (AHBPERIPH_BASE + 0x04000UL)
#define GPIOB_BASE              (AHBPERIPH_BASE + 0x04040UL)
#define GPIOC_BASE              (AHBPERIPH_BASE + 0x04080UL)
#define GPIOD_BASE              (AHBPERIPH_BASE + 0x040C0UL)
#define GPIOE_BASE              (AHBPERIPH_BASE + 0x04100UL)
#define GPIOF_BASE              (AHBPERIPH_BASE + 0x04140UL)
#define GPIOG_BASE              (AHBPERIPH_BASE + 0x04180UL)
#define GPIOH_BASE              (AHBPERIPH_BASE + 0x041C0UL)
#define GPIO_DBCTL_BASE         (AHBPERIPH_BASE + 0x04450UL)
#define GPIO_PIN_DATA_BASE      (AHBPERIPH_BASE + 0x04800UL)
#define PDMA0_BASE              (AHBPERIPH_BASE + 0x08000UL)
#define USBH_BASE               (AHBPERIPH_BASE + 0x09000UL)
#define RMC_BASE                (AHBPERIPH_BASE + 0x0C000UL)
#define EBI_BASE                (AHBPERIPH_BASE + 0x10000UL)
#define CANFD0_BASE             (AHBPERIPH_BASE + 0x20000UL)
#define CANFD1_BASE             (AHBPERIPH_BASE + 0x24000UL)
#define CRC_BASE                (AHBPERIPH_BASE + 0x31000UL)
#define CRYP_BASE               (AHBPERIPH_BASE + 0x32000UL)
#define LPSCC_BASE              (AHBPERIPH_BASE + 0x38000UL)
#define LPPDMA0_BASE            (AHBPERIPH_BASE + 0x39000UL)
#define LPGPIO_BASE             (AHBPERIPH_BASE + 0x3A000UL)

/*!< APB peripherals */
#define WDT_BASE                (APBPERIPH_BASE + 0x00000UL)
#define RTC_BASE                (APBPERIPH_BASE + 0x01000UL)
#define EADC0_BASE              (APBPERIPH_BASE + 0x03000UL)
#define ACMP01_BASE             (APBPERIPH_BASE + 0x05000UL)
#define OPA_BASE                (APBPERIPH_BASE + 0x06000UL)
#define DAC_BASE                (APBPERIPH_BASE + 0x07000UL)
#define OTG_BASE                (APBPERIPH_BASE + 0x0D000UL)
#define TIMER01_BASE            (APBPERIPH_BASE + 0x10000UL)
#define TIMER0_BASE             (APBPERIPH_BASE + 0x10000UL)
#define TIMER1_BASE             (APBPERIPH_BASE + 0x10100UL)
#define TIMER23_BASE            (APBPERIPH_BASE + 0x11000UL)
#define TIMER2_BASE             (APBPERIPH_BASE + 0x11000UL)
#define TIMER3_BASE             (APBPERIPH_BASE + 0x11100UL)
#define EPWM0_BASE              (APBPERIPH_BASE + 0x18000UL)
#define EPWM1_BASE              (APBPERIPH_BASE + 0x19000UL)
#define PWM0_BASE               (APBPERIPH_BASE + 0x1C000UL)
#define PWM1_BASE               (APBPERIPH_BASE + 0x1D000UL)
#define QSPI0_BASE              (APBPERIPH_BASE + 0x20000UL)
#define SPI0_BASE               (APBPERIPH_BASE + 0x21000UL)
#define SPI1_BASE               (APBPERIPH_BASE + 0x22000UL)
#define SPI2_BASE               (APBPERIPH_BASE + 0x23000UL)
#define SPI3_BASE               (APBPERIPH_BASE + 0x24000UL)
#define UART0_BASE              (APBPERIPH_BASE + 0x30000UL)
#define UART1_BASE              (APBPERIPH_BASE + 0x31000UL)
#define UART2_BASE              (APBPERIPH_BASE + 0x32000UL)
#define UART3_BASE              (APBPERIPH_BASE + 0x33000UL)
#define UART4_BASE              (APBPERIPH_BASE + 0x34000UL)
#define UART5_BASE              (APBPERIPH_BASE + 0x35000UL)
#define UART6_BASE              (APBPERIPH_BASE + 0x36000UL)
#define UART7_BASE              (APBPERIPH_BASE + 0x37000UL)
#define I2C0_BASE               (APBPERIPH_BASE + 0x40000UL)
#define I2C1_BASE               (APBPERIPH_BASE + 0x41000UL)
#define I2C2_BASE               (APBPERIPH_BASE + 0x42000UL)
#define I2C3_BASE               (APBPERIPH_BASE + 0x43000UL)
#define WWDT_BASE               (APBPERIPH_BASE + 0x56000UL)
#define EQEI0_BASE              (APBPERIPH_BASE + 0x70000UL)
#define EQEI1_BASE              (APBPERIPH_BASE + 0x71000UL)
#define ECAP0_BASE              (APBPERIPH_BASE + 0x74000UL)
#define ECAP1_BASE              (APBPERIPH_BASE + 0x75000UL)
#define TRNG_BASE               (APBPERIPH_BASE + 0x79000UL)
#define USBD_BASE               (APBPERIPH_BASE + 0x80000UL)
#define TK_BASE                 (APBPERIPH_BASE + 0x84000UL)
#define UTCPD_BASE              (APBPERIPH_BASE + 0x86000UL)
#define UTCPD0_BASE             (APBPERIPH_BASE + 0x86000UL)
#define UTCPD1_BASE             (APBPERIPH_BASE + 0x86000UL)
#define ACMP2_BASE              (APBPERIPH_BASE + 0x89000UL)
#define USCI0_BASE              (APBPERIPH_BASE + 0x90000UL)
#define USCI1_BASE              (APBPERIPH_BASE + 0x91000UL)
#define LPUART0_BASE            (APBPERIPH_BASE + 0xA0000UL)
#define LPSPI0_BASE             (APBPERIPH_BASE + 0xA1000UL)
#define LPI2C0_BASE             (APBPERIPH_BASE + 0xA2000UL)
#define LPADC0_BASE             (APBPERIPH_BASE + 0xA3000UL)
#define LPTMR01_BASE            (APBPERIPH_BASE + 0xA4000UL)
#define TTMR01_BASE             (APBPERIPH_BASE + 0xA5000UL)
#define KS_BASE                 (0x40035000UL)

/**@}*/ /* end of group PERIPHERAL_BASE */


/******************************************************************************/
/*                         Peripheral declaration                             */
/******************************************************************************/

/** @addtogroup PERIPHERAL_DECLARATION Peripheral Pointer
  The Declaration of Peripheral Pointer
  @{
 */

/*!< AHB peripherals */
#define SYS                 ((SYS_T *)              SYS_BASE)
#define CLK                 ((CLK_T *)              CLK_BASE)
#define NMI                 ((NMI_T *)              NMI_BASE)
#define PA                  ((GPIO_T *)             GPIOA_BASE)
#define PB                  ((GPIO_T *)             GPIOB_BASE)
#define PC                  ((GPIO_T *)             GPIOC_BASE)
#define PD                  ((GPIO_T *)             GPIOD_BASE)
#define PE                  ((GPIO_T *)             GPIOE_BASE)
#define PF                  ((GPIO_T *)             GPIOF_BASE)
#define PG                  ((GPIO_T *)             GPIOG_BASE)
#define PH                  ((GPIO_T *)             GPIOH_BASE)
#define GPIO                ((GPIO_DBCTL_T *)       GPIO_DBCTL_BASE)
#define PDMA0               ((PDMA_T *)             PDMA0_BASE)
#define PDMA                ((PDMA_T *)             PDMA0_BASE)
#define USBH                ((USBH_T *)             USBH_BASE)
#define RMC                 ((RMC_T *)              RMC_BASE)
#define EBI                 ((EBI_T *)              EBI_BASE)
#define CANFD0              ((CANFD_T *)            CANFD0_BASE)
#define CANFD1              ((CANFD_T *)            CANFD1_BASE)
#define CRC                 ((CRC_T *)              CRC_BASE)
#define CRPT                ((CRPT_T *)             CRYP_BASE)
#define LPSCC               ((LPSCC_T *)            LPSCC_BASE)
#define LPPDMA0             ((LPPDMA_T *)           LPPDMA0_BASE)
#define LPGPIO              ((LPGPIO_T *)           LPGPIO_BASE)

/*!< APB0 peripherals */
#define WDT                 ((WDT_T *)              WDT_BASE)
#define RTC                 ((RTC_T *)              RTC_BASE)
#define EADC                ((EADC_T *)             EADC0_BASE)
#define EADC0               ((EADC_T *)             EADC0_BASE)
#define ACMP01              ((ACMP_T *)             ACMP01_BASE)
#define OPA                 ((OPA_T *)              OPA_BASE)
#define DAC0                ((DAC_T *)              DAC_BASE)
#define DAC1                ((DAC_T *)              (DAC_BASE+0x40UL))
#define OTG                 ((OTG_T *)              OTG_BASE)
#define TIMER0              ((TIMER_T *)            TIMER01_BASE)
#define TIMER1              ((TIMER_T *)            (TIMER01_BASE + 0x100UL))
#define TIMER2              ((TIMER_T *)            TIMER23_BASE)
#define TIMER3              ((TIMER_T *)            (TIMER23_BASE+ 0x100UL))
#define TTMR0               ((TTMR_T *)             TTMR01_BASE)
#define TTMR1               ((TTMR_T *)             (TTMR01_BASE + 0x100UL))
#define EPWM0               ((EPWM_T *)             EPWM0_BASE)
#define EPWM1               ((EPWM_T *)             EPWM1_BASE)
#define PWM0                ((PWM_T *)              PWM0_BASE)
#define PWM1                ((PWM_T *)              PWM1_BASE)
#define QSPI0               ((QSPI_T *)             QSPI0_BASE)
#define SPI0                ((SPI_T *)              SPI0_BASE)
#define SPI1                ((SPI_T *)              SPI1_BASE)
#define SPI2                ((SPI_T *)              SPI2_BASE)
#define SPI3                ((SPI_T *)              SPI3_BASE)
#define UART0               ((UART_T *)             UART0_BASE)
#define UART1               ((UART_T *)             UART1_BASE)
#define UART2               ((UART_T *)             UART2_BASE)
#define UART3               ((UART_T *)             UART3_BASE)
#define UART4               ((UART_T *)             UART4_BASE)
#define UART5               ((UART_T *)             UART5_BASE)
#define UART6               ((UART_T *)             UART6_BASE)
#define UART7               ((UART_T *)             UART7_BASE)
#define I2C0                ((I2C_T *)              I2C0_BASE)
#define I2C1                ((I2C_T *)              I2C1_BASE)
#define I2C2                ((I2C_T *)              I2C2_BASE)
#define I2C3                ((I2C_T *)              I2C3_BASE)
#define WWDT                ((WWDT_T *)             WWDT_BASE)
#define EQEI0               ((EQEI_T *)             EQEI0_BASE)
#define EQEI1               ((EQEI_T *)             EQEI1_BASE)
#define ECAP0               ((ECAP_T *)             ECAP0_BASE)
#define ECAP1               ((ECAP_T *)             ECAP1_BASE)
#define TRNG                ((TRNG_T *)             TRNG_BASE)
#define USBD                ((USBD_T *)             USBD_BASE)
#define TK                  ((TK_T *)               TK_BASE)
#define UTCPD               ((UTCPD_T *)            UTCPD_BASE)
#define ACMP2               ((ACMP_T *)             ACMP2_BASE)
#define UI2C0               ((UI2C_T *)             USCI0_BASE)
#define USPI0               ((USPI_T *)             USCI0_BASE)
#define UUART0              ((UUART_T *)            USCI0_BASE)
#define UI2C1               ((UI2C_T *)             USCI1_BASE)
#define USPI1               ((USPI_T *)             USCI1_BASE)
#define UUART1              ((UUART_T *)            USCI1_BASE)
#define LPUART0             ((LPUART_T *)           LPUART0_BASE)
#define LPSPI0              ((LPSPI_T *)            LPSPI0_BASE)
#define LPI2C0              ((LPI2C_T *)            LPI2C0_BASE)
#define LPADC0              ((LPADC_T *)            LPADC0_BASE)
#define LPTMR0              ((LPTMR_T *)            LPTMR01_BASE)
#define LPTMR1              ((LPTMR_T *)            (LPTMR01_BASE + 0x100UL))
#define TTMR0               ((TTMR_T *)             TTMR01_BASE)
#define TTMR1               ((TTMR_T *)             (TTMR01_BASE + 0x100UL))

/**@}*/ /* end of group PERIPHERAL_DECLARATION */


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

#ifdef __cplusplus
}
#endif


/*=============================================================================*/

/** @addtogroup IO_ROUTINE I/O Routines
  The Declaration of I/O Routines
  @{
 */

typedef volatile unsigned char  vu8;
typedef volatile unsigned long  vu32;
typedef volatile unsigned short vu16;

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

/*@}*/ /* end of group IO_ROUTINE */


/******************************************************************************/
/*                Legacy Constants                                            */
/******************************************************************************/

/** @addtogroup Legacy_Constants Legacy Constants
  Legacy Constants
  @{
*/

#define E_SUCCESS     (0)

#ifndef NULL
    #define NULL      (0)                  ///< NULL pointer
#endif

/*
 * Avoid redefined warning in the integration with cmsis_rtos_v2, so to match wrapper.h
 * #define TRUE           (1UL)      ///< Boolean true, define to use in API parameters or return value
 * #define FALSE          (0UL)      ///< Boolean false, define to use in API parameters or return value
 */
#define TRUE    1
#define FALSE   0

#define ENABLE        (1UL)                ///< Enable, define to use in API parameters
#define DISABLE       (0UL)                ///< Disable, define to use in API parameters

/* Define one bit mask */
#define BIT0          (0x00000001UL)       ///< Bit 0 mask of an 32 bit integer
#define BIT1          (0x00000002UL)       ///< Bit 1 mask of an 32 bit integer
#define BIT2          (0x00000004UL)       ///< Bit 2 mask of an 32 bit integer
#define BIT3          (0x00000008UL)       ///< Bit 3 mask of an 32 bit integer
#define BIT4          (0x00000010UL)       ///< Bit 4 mask of an 32 bit integer
#define BIT5          (0x00000020UL)       ///< Bit 5 mask of an 32 bit integer
#define BIT6          (0x00000040UL)       ///< Bit 6 mask of an 32 bit integer
#define BIT7          (0x00000080UL)       ///< Bit 7 mask of an 32 bit integer
#define BIT8          (0x00000100UL)       ///< Bit 8 mask of an 32 bit integer
#define BIT9          (0x00000200UL)       ///< Bit 9 mask of an 32 bit integer
#define BIT10         (0x00000400UL)       ///< Bit 10 mask of an 32 bit integer
#define BIT11         (0x00000800UL)       ///< Bit 11 mask of an 32 bit integer
#define BIT12         (0x00001000UL)       ///< Bit 12 mask of an 32 bit integer
#define BIT13         (0x00002000UL)       ///< Bit 13 mask of an 32 bit integer
#define BIT14         (0x00004000UL)       ///< Bit 14 mask of an 32 bit integer
#define BIT15         (0x00008000UL)       ///< Bit 15 mask of an 32 bit integer
#define BIT16         (0x00010000UL)       ///< Bit 16 mask of an 32 bit integer
#define BIT17         (0x00020000UL)       ///< Bit 17 mask of an 32 bit integer
#define BIT18         (0x00040000UL)       ///< Bit 18 mask of an 32 bit integer
#define BIT19         (0x00080000UL)       ///< Bit 19 mask of an 32 bit integer
#define BIT20         (0x00100000UL)       ///< Bit 20 mask of an 32 bit integer
#define BIT21         (0x00200000UL)       ///< Bit 21 mask of an 32 bit integer
#define BIT22         (0x00400000UL)       ///< Bit 22 mask of an 32 bit integer
#define BIT23         (0x00800000UL)       ///< Bit 23 mask of an 32 bit integer
#define BIT24         (0x01000000UL)       ///< Bit 24 mask of an 32 bit integer
#define BIT25         (0x02000000UL)       ///< Bit 25 mask of an 32 bit integer
#define BIT26         (0x04000000UL)       ///< Bit 26 mask of an 32 bit integer
#define BIT27         (0x08000000UL)       ///< Bit 27 mask of an 32 bit integer
#define BIT28         (0x10000000UL)       ///< Bit 28 mask of an 32 bit integer
#define BIT29         (0x20000000UL)       ///< Bit 29 mask of an 32 bit integer
#define BIT30         (0x40000000UL)       ///< Bit 30 mask of an 32 bit integer
#define BIT31         (0x80000000UL)       ///< Bit 31 mask of an 32 bit integer

/* Byte Mask Definitions */
#define BYTE0_Msk     (0x000000FFUL)       ///< Mask to get bit0~bit7 from a 32 bit integer
#define BYTE1_Msk     (0x0000FF00UL)       ///< Mask to get bit8~bit15 from a 32 bit integer
#define BYTE2_Msk     (0x00FF0000UL)       ///< Mask to get bit16~bit23 from a 32 bit integer
#define BYTE3_Msk     (0xFF000000UL)       ///< Mask to get bit24~bit31 from a 32 bit integer

#define GET_BYTE0(u32Param)    (((u32Param) & BYTE0_Msk)      ) /*!< Extract Byte 0 (Bit  0~ 7) from parameter u32Param */
#define GET_BYTE1(u32Param)    (((u32Param) & BYTE1_Msk) >>  8) /*!< Extract Byte 1 (Bit  8~15) from parameter u32Param */
#define GET_BYTE2(u32Param)    (((u32Param) & BYTE2_Msk) >> 16) /*!< Extract Byte 2 (Bit 16~23) from parameter u32Param */
#define GET_BYTE3(u32Param)    (((u32Param) & BYTE3_Msk) >> 24) /*!< Extract Byte 3 (Bit 24~31) from parameter u32Param */

/*@}*/ /* end of group Legacy_Constants */


/******************************************************************************/
/*                         Peripheral header files                            */
/******************************************************************************/
#include "acmp.h"
#include "canfd.h"
#include "clk.h"
#include "crc.h"
#include "crypto.h"
#include "dac.h"
#include "eadc.h"
#include "ebi.h"
#include "ecap.h"
#include "epwm.h"
#include "gpio.h"
#include "i2c.h"
#include "lpadc.h"
#include "lpgpio.h"
#include "lpi2c.h"
#include "lppdma.h"
#include "lptmr.h"
#include "lptmr_pwm.h"
#include "lpuart.h"
#include "opa.h"
#include "otg.h"
#include "lpspi.h"
#include "pdma.h"
#include "pwm.h"
#include "eqei.h"
#include "qspi.h"
#include "rmc.h"
#include "rng.h"
#include "rtc.h"
#include "spi.h"
#include "sys.h"
#include "timer.h"
#include "timer_pwm.h"
#include "tk.h"
#include "trng.h"
#include "ttmr.h"
#include "uart.h"
#include "usbd.h"
#include "usci_i2c.h"
#include "usci_spi.h"
#include "usci_uart.h"
#include "utcpd.h"
#include "wdt.h"
#include "wwdt.h"

#endif  /* __M2L31_H__ */
