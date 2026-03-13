/**************************************************************************//**
 * @file     partition_M3351_template.h
 * @version  V1.00
 * @brief    Device Initial Setup for Secure/Non-Secure Zones for NuMicro M3351
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2025 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/

#ifndef __PARTITION_M3351_TEMPLATE_H__
#define __PARTITION_M3351_TEMPLATE_H__

/*
//-------- <<< Use Configuration Wizard in Context Menu >>> -----------------
*/

/*
    Secure SRAM Size
*/
/*
// Bit 0..19
// <o.0..19> Secure SRAM Size   <0x2000=>  8 KB
//                              <0x4000=>  16 KB
//                              <0x6000=>  24 KB
//                              <0x8000=>  32 KB
//                              <0xA000=>  40 KB
//                              <0xc000=>  48 KB
//                              <0xE000=>  56 KB
//                              <0x10000=> 64 KB
//                              <0x12000=> 72 KB
//                              <0x14000=> 80 KB
//                              <0x16000=> 88 KB
//                              <0x18000=> 96 KB
//                              <0x1A000=> 104 KB
//                              <0x1C000=> 112 KB
//                              <0x1E000=> 120 KB
//                              <0x20000=> 128 KB
//                              <0x22000=> 136 KB (If ECC disabled)
//                              <0x24000=> 144 KB (If ECC disabled)
//                              <0x28000=> 160 KB (If ECC disabled)
*/
#define SCU_SECURE_SRAM_SIZE        0x008000
#define NON_SECURE_SRAM_BASE        (SRAM_BASE + NS_OFFSET + SCU_SECURE_SRAM_SIZE)

/*
// <h> Non-secure Base Address (NSCBA)
*/
#define FMC_INIT_NSCBA              1
/*
//    <o> Secure APROM Flash Size <0x2000-0x200000:0x2000>
*/

#define FMC_SECURE_REGION_SIZE      0x20000
#define FMC_SECURE_END              (FMC_APROM_BASE + FMC_SECURE_REGION_SIZE)
#define FMC_NON_SECURE_BASE         (FMC_SECURE_END + NS_OFFSET)

/*
// <q>Enable Mirror Boundary (Bank Remap Function)
*/
#define FMC_INIT_MIRROR_BOUND       0x0
/*
// </h>
*/

/*
// <e> DFMC Non-secure Base Address
*/
#define DFMC_INIT_NSCBA              1
/*
//    <o> Secure DFMC Flash Size <0x1000-0x10000:0x1000>
*/
#define DFMC_SECURE_REGION_SIZE      0x4000
#define DFMC_SECURE_END              (DFMC_DATA_FLASH_BASE + DFMC_SECURE_REGION_SIZE)
#define DFMC_NON_SECURE_BASE         (DFMC_SECURE_END + NS_OFFSET)

/*
// <e> Enable EEPROM
*/
#define DFMC_ENABLE_EEPROM          1

/*
// <o.0>  EEPROM Secure Attribute   <1=> Secure <0=> Non-Secure
*/
#define DFMC_SECURE_EEPROM          0x1
/*
// </e>
*/
/*
// </e>
*/
/*============================================================================*/

/*
// <h> Peripheral Secure Attribution Configuration
*/

/*
    PNSSET0
*/
/*
// Module 0..31
//   <o.8>  PDMA        <0=> Secure <1=> Non-Secure
//   <o.9>  USBH        <0=> Secure <1=> Non-Secure
//   <o.16> EBI         <0=> Secure <1=> Non-Secure
*/
#define SCU_INIT_PNSSET0_VAL      0x0
/*
    PNSSET1
*/
/*
// Module 0..31
//   <h> CANFD
//   <o.0>  CANFD0      <0=> Secure <1=> Non-Secure
//   <o.4>  CANFD1      <0=> Secure <1=> Non-Secure
//   </h>
//   <o.17> CRC         <0=> Secure <1=> Non-Secure
//   <o.22> CACHE       <0=> Secure <1=> Non-Secure
*/
#define SCU_INIT_PNSSET1_VAL      0x00000
/*
    PNSSET2
*/
/*
// Module 0..31
//   <o.1>  RTC         <0=> Secure <1=> Non-Secure
//   <o.2>  WDT1        <0=> Secure <1=> Non-Secure
//   <o.3>  EADC0       <0=> Secure <1=> Non-Secure
//   <o.5>  ACMP01      <0=> Secure <1=> Non-Secure
//   <o.7>  DAC         <0=> Secure <1=> Non-Secure
//   <o.11> EADC1       <0=> Secure <1=> Non-Secure
//   <h> TIMER
//   <o.16> TMR01       <0=> Secure <1=> Non-Secure
//   <o.17> TMR23       <0=> Secure <1=> Non-Secure
//   </h>
//   <h> BPWM
//   <o.26>  BPWM0      <0=> Secure <1=> Non-Secure
//   <o.27>  BPWM1      <0=> Secure <1=> Non-Secure
//   </h>
//   <h> PWM
//   <o.28> PWM0        <0=> Secure <1=> Non-Secure
//   <o.29> PWM1        <0=> Secure <1=> Non-Secure
//   </h>
*/
#define SCU_INIT_PNSSET2_VAL      0x0
/*
    PNSSET3
*/
/*
// Module 0..31
//   <h>  SPI
//   <o.0>  QSPI0       <0=> Secure <1=> Non-Secure
//   <o.1>  SPI0        <0=> Secure <1=> Non-Secure
//   <o.2>  SPI1        <0=> Secure <1=> Non-Secure
//   </h>
//   <h> UART
//   <o.16> UART0       <0=> Secure <1=> Non-Secure
//   <o.17> UART1       <0=> Secure <1=> Non-Secure
//   <o.18> UART2       <0=> Secure <1=> Non-Secure
//   <o.19> UART3       <0=> Secure <1=> Non-Secure
//   <o.20> UART4       <0=> Secure <1=> Non-Secure
//   <o.21> UART5       <0=> Secure <1=> Non-Secure
//   <o.22> UART6       <0=> Secure <1=> Non-Secure
//   <o.23> UART7       <0=> Secure <1=> Non-Secure
//   <o.24> UART8       <0=> Secure <1=> Non-Secure
//   <o.25> UART9       <0=> Secure <1=> Non-Secure
//   </h>
*/
#define SCU_INIT_PNSSET3_VAL      0x0
/*
    PNSSET4
*/
/*
// Module 0..31
//   <h> I2C
//   <o.0>  I2C0        <0=> Secure <1=> Non-Secure
//   <o.1>  I2C1        <0=> Secure <1=> Non-Secure
//   <o.2>  I2C2        <0=> Secure <1=> Non-Secure
//   </h>
//   <o.6>  I3C         <0=> Secure <1=> Non-Secure
//   <h> LLSI
//   <o.8>  LLSI0       <0=> Secure <1=> Non-Secure
//   <o.9>  LLSI1       <0=> Secure <1=> Non-Secure
//   <o.10> ELLSI0      <0=> Secure <1=> Non-Secure
//   <o.11> ELLSI1      <0=> Secure <1=> Non-Secure
//   </h>
//   <o.24> WWDT1       <0=> Secure <1=> Non-Secure
*/
#define SCU_INIT_PNSSET4_VAL      0x0
/*
    PNSSET5
*/
/*
// Module 0..31
//   <h> QEI
//   <o.16> QEI0        <0=> Secure <1=> Non-Secure
//   <o.17> QEI1        <0=> Secure <1=> Non-Secure
//   </h>
//   <o.20> ECAP0       <0=> Secure <1=> Non-Secure
//   <o.25> TRNG        <0=> Secure <1=> Non-Secure
*/
#define SCU_INIT_PNSSET5_VAL      0x0
/*
    PNSSET6
*/
/*
// Module 0..31
//   <o.0>  USBD        <0=> Secure <1=> Non-Secure
//   <h> USCI
//   <o.16> USCI0       <0=> Secure <1=> Non-Secure
//   <o.17> USCI1       <0=> Secure <1=> Non-Secure
//   </h>
*/
#define SCU_INIT_PNSSET6_VAL      0x0
/*
// </h>
*/

/*
// <h> GPIO Secure Attribution Configuration
*/

/*
    IONSSET
*/

/*
// Bit 0..15
//   <h> PA
//   <i> PA12 ~ PA15 are reserved for USB
//   <o.0>  PA0         <0=> Secure <1=> Non-Secure
//   <o.1>  PA1         <0=> Secure <1=> Non-Secure
//   <o.2>  PA2         <0=> Secure <1=> Non-Secure
//   <o.3>  PA3         <0=> Secure <1=> Non-Secure
//   <o.4>  PA4         <0=> Secure <1=> Non-Secure
//   <o.5>  PA5         <0=> Secure <1=> Non-Secure
//   <o.6>  PA6         <0=> Secure <1=> Non-Secure
//   <o.7>  PA7         <0=> Secure <1=> Non-Secure
//   <o.8>  PA8         <0=> Secure <1=> Non-Secure
//   <o.9>  PA9         <0=> Secure <1=> Non-Secure
//   <o.10> PA10        <0=> Secure <1=> Non-Secure
//   <o.11> PA11        <0=> Secure <1=> Non-Secure
//   </h>

*/
#define SCU_INIT_IONSSET0_VAL      0x00000000

/*
// Bit 0..15
//   <h> PB
//   <o.0>  PB0         <0=> Secure <1=> Non-Secure
//   <o.1>  PB1         <0=> Secure <1=> Non-Secure
//   <o.2>  PB2         <0=> Secure <1=> Non-Secure
//   <o.3>  PB3         <0=> Secure <1=> Non-Secure
//   <o.4>  PB4         <0=> Secure <1=> Non-Secure
//   <o.5>  PB5         <0=> Secure <1=> Non-Secure
//   <o.6>  PB6         <0=> Secure <1=> Non-Secure
//   <o.7>  PB7         <0=> Secure <1=> Non-Secure
//   <o.8>  PB8         <0=> Secure <1=> Non-Secure
//   <o.9>  PB9         <0=> Secure <1=> Non-Secure
//   <o.10> PB10        <0=> Secure <1=> Non-Secure
//   <o.11> PB11        <0=> Secure <1=> Non-Secure
//   <o.12> PB12        <0=> Secure <1=> Non-Secure
//   <o.13> PB13        <0=> Secure <1=> Non-Secure
//   <o.14> PB14        <0=> Secure <1=> Non-Secure
//   <o.15> PB15        <0=> Secure <1=> Non-Secure
//   </h>
*/
#define SCU_INIT_IONSSET1_VAL      0x00000000


/*
// Bit 0..15
//   <h> PC
//   <o.0>  PC0         <0=> Secure <1=> Non-Secure
//   <o.1>  PC1         <0=> Secure <1=> Non-Secure
//   <o.2>  PC2         <0=> Secure <1=> Non-Secure
//   <o.3>  PC3         <0=> Secure <1=> Non-Secure
//   <o.4>  PC4         <0=> Secure <1=> Non-Secure
//   <o.5>  PC5         <0=> Secure <1=> Non-Secure
//   <o.6>  PC6         <0=> Secure <1=> Non-Secure
//   <o.7>  PC7         <0=> Secure <1=> Non-Secure
//   <o.8>  PC8         <0=> Secure <1=> Non-Secure
//   <o.9>  PC9         <0=> Secure <1=> Non-Secure
//   <o.10> PC10        <0=> Secure <1=> Non-Secure
//   <o.11> PC11        <0=> Secure <1=> Non-Secure
//   <o.12> PC12        <0=> Secure <1=> Non-Secure
//   <o.13> PC13        <0=> Secure <1=> Non-Secure
//   <o.14> PC14        <0=> Secure <1=> Non-Secure
//   </h>
*/
#define SCU_INIT_IONSSET2_VAL      0x00000000

/*
// Bit 0..15
//   <h> PD
//   <o.0>  PD0         <0=> Secure <1=> Non-Secure
//   <o.1>  PD1         <0=> Secure <1=> Non-Secure
//   <o.2>  PD2         <0=> Secure <1=> Non-Secure
//   <o.3>  PD3         <0=> Secure <1=> Non-Secure
//   <o.4>  PD4         <0=> Secure <1=> Non-Secure
//   <o.5>  PD5         <0=> Secure <1=> Non-Secure
//   <o.6>  PD6         <0=> Secure <1=> Non-Secure
//   <o.7>  PD7         <0=> Secure <1=> Non-Secure
//   <o.8>  PD8         <0=> Secure <1=> Non-Secure
//   <o.9>  PD9         <0=> Secure <1=> Non-Secure
//   <o.10> PD10        <0=> Secure <1=> Non-Secure
//   <o.11> PD11        <0=> Secure <1=> Non-Secure
//   <o.12> PD12        <0=> Secure <1=> Non-Secure
//   <o.13> PD13        <0=> Secure <1=> Non-Secure
//   <o.14> PD14        <0=> Secure <1=> Non-Secure
//   <o.15> PD15        <0=> Secure <1=> Non-Secure
//   </h>
*/
#define SCU_INIT_IONSSET3_VAL      0x00000000


/*
// Bit 0..15
//   <h> PE
//   <o.0>  PE0         <0=> Secure <1=> Non-Secure
//   <o.1>  PE1         <0=> Secure <1=> Non-Secure
//   <o.2>  PE2         <0=> Secure <1=> Non-Secure
//   <o.3>  PE3         <0=> Secure <1=> Non-Secure
//   <o.4>  PE4         <0=> Secure <1=> Non-Secure
//   <o.5>  PE5         <0=> Secure <1=> Non-Secure
//   <o.6>  PE6         <0=> Secure <1=> Non-Secure
//   <o.7>  PE7         <0=> Secure <1=> Non-Secure
//   <o.8>  PE8         <0=> Secure <1=> Non-Secure
//   <o.9>  PE9         <0=> Secure <1=> Non-Secure
//   <o.10> PE10        <0=> Secure <1=> Non-Secure
//   <o.11> PE11        <0=> Secure <1=> Non-Secure
//   <o.12> PE12        <0=> Secure <1=> Non-Secure
//   <o.13> PE13        <0=> Secure <1=> Non-Secure
//   <o.14> PE14        <0=> Secure <1=> Non-Secure
//   <o.15> PE15        <0=> Secure <1=> Non-Secure
//   </h>
*/
#define SCU_INIT_IONSSET4_VAL      0x00000000


/*
// Bit 0..15
//   <h> PF
//   <o.0>  PF0         <0=> Secure <1=> Non-Secure
//   <o.1>  PF1         <0=> Secure <1=> Non-Secure
//   <o.2>  PF2         <0=> Secure <1=> Non-Secure
//   <o.3>  PF3         <0=> Secure <1=> Non-Secure
//   <o.4>  PF4         <0=> Secure <1=> Non-Secure
//   <o.5>  PF5         <0=> Secure <1=> Non-Secure
//   <o.6>  PF6         <0=> Secure <1=> Non-Secure
//   <o.7>  PF7         <0=> Secure <1=> Non-Secure
//   <o.8>  PF8         <0=> Secure <1=> Non-Secure
//   <o.9>  PF9         <0=> Secure <1=> Non-Secure
//   <o.10> PF10        <0=> Secure <1=> Non-Secure
//   <o.11> PF11        <0=> Secure <1=> Non-Secure
//   <o.14> PF14        <0=> Secure <1=> Non-Secure
//   </h>
*/
#define SCU_INIT_IONSSET5_VAL      0x00000000


/*
// Bit 0..15
//   <h> PG
//   <o.2>  PG2         <0=> Secure <1=> Non-Secure
//   <o.3>  PG3         <0=> Secure <1=> Non-Secure
//   <o.4>  PG4         <0=> Secure <1=> Non-Secure
//   <o.9>  PG9         <0=> Secure <1=> Non-Secure
//   <o.10> PG10        <0=> Secure <1=> Non-Secure
//   <o.11> PG11        <0=> Secure <1=> Non-Secure
//   <o.12> PG12        <0=> Secure <1=> Non-Secure
//   <o.13> PG13        <0=> Secure <1=> Non-Secure
//   <o.14> PG14        <0=> Secure <1=> Non-Secure
//   <o.15> PG15        <0=> Secure <1=> Non-Secure
//   </h>
*/
#define SCU_INIT_IONSSET6_VAL      0x00000000

/*
// Bit 0..15
//   <h> PH
//   <o.4>  PH4         <0=> Secure <1=> Non-Secure
//   <o.5>  PH5         <0=> Secure <1=> Non-Secure
//   <o.6>  PH6         <0=> Secure <1=> Non-Secure
//   <o.7>  PH7         <0=> Secure <1=> Non-Secure
//   <o.8>  PH8         <0=> Secure <1=> Non-Secure
//   <o.9>  PH9         <0=> Secure <1=> Non-Secure
//   <o.10> PH10        <0=> Secure <1=> Non-Secure
//   <o.11> PH11        <0=> Secure <1=> Non-Secure
//   </h>
*/
#define SCU_INIT_IONSSET7_VAL      0x00000000

/*
// </h>
*/

/*
// <h> GPIO EINT Secure Attribution Configuration
*/


/*
    EINTNS
*/

/*
// Bit 0..7
//   <o.0>  EINT0       <0=> Secure <1=> Non-Secure
//   <o.1>  EINT1       <0=> Secure <1=> Non-Secure
//   <o.2>  EINT2       <0=> Secure <1=> Non-Secure
//   <o.3>  EINT3       <0=> Secure <1=> Non-Secure
//   <o.4>  EINT4       <0=> Secure <1=> Non-Secure
//   <o.5>  EINT5       <0=> Secure <1=> Non-Secure
//   <o.6>  EINT6       <0=> Secure <1=> Non-Secure
//   <o.7>  EINT7       <0=> Secure <1=> Non-Secure
*/
#define SCU_INIT_EINTNS_VAL      0x0000
/*
// </h>
*/


/*
// <h>Assign GPIO Interrupt to Secure or Non-secure Vector
*/


/*
    Initialize GPIO ITNS (Interrupts 0..31)
*/

/*
// Bit 0..7
//   <o.0>  GPA         <0=> Secure <1=> Non-Secure
//   <o.1>  GPB         <0=> Secure <1=> Non-Secure
//   <o.2>  GPC         <0=> Secure <1=> Non-Secure
//   <o.3>  GPD         <0=> Secure <1=> Non-Secure
//   <o.4>  GPE         <0=> Secure <1=> Non-Secure
//   <o.5>  GPF         <0=> Secure <1=> Non-Secure
//   <o.6>  GPG         <0=> Secure <1=> Non-Secure
//   <o.7>  GPH         <0=> Secure <1=> Non-Secure
*/
#define SCU_INIT_IONSSET_VAL      0x0000
/*
// </h>
*/

/*============================================================================*/

/*
// <e>Initialize Security Attribution Unit (SAU) CTRL register
*/
#define SAU_INIT_CTRL 1

/*
//   <q> Enable SAU
//   <i> To enable Secure Attribute Unit (SAU).
*/
#define SAU_INIT_CTRL_ENABLE 1

/*
//   <o> All Memory Attribute When SAU is disabled
//     <0=> All Memory is Secure
//     <1=> All Memory is Non-secure
//   <i> To set the ALLNS bit in SAU CTRL.
//   <i> When all Memory is Non-secure (ALLNS is 1), IDAU can override memory map configuration.
*/
#define SAU_INIT_CTRL_ALLNS  0

/*
// </e>
*/


/*
// <h>Initialize Security Attribution Unit (SAU) Address Regions
// <i>SAU configuration specifies regions to be one of:
// <i> - Secure and Non-secure Callable
// <i> - Non-secure
// <i>Note: All memory regions not configured by SAU are Secure
*/
#define SAU_REGIONS_MAX   8                 /* Max. number of SAU regions */

/*
//   <e>Initialize SAU Region 0
//   <i> Setup SAU Region 0 memory attributes
*/
#define SAU_INIT_REGION0    0
/*
//     <o>Start Address <0-0xFFFFFFE0>
*/
#define SAU_INIT_START0     0x0003F000      /* start address of SAU region 0 */
/*
//     <o>End Address <0x1F-0xFFFFFFFF>
*/
#define SAU_INIT_END0       0x0003FFFF      /* end address of SAU region 0 */
/*
//     <o>Region is
//         <0=>Non-secure
//         <1=>Secure, Non-secure Callable
*/
#define SAU_INIT_NSC0       1
/*
//   </e>
*/

/*
//   <e>Initialize SAU Region 1
//   <i> Setup SAU Region 1 memory attributes
*/
#define SAU_INIT_REGION1    0
/*
//     <o>Start Address <0-0xFFFFFFE0>
*/
#define SAU_INIT_START1     0x10040000
/*
//     <o>End Address <0x1F-0xFFFFFFFF>
*/
#define SAU_INIT_END1       0x1007FFFF
/*
//     <o>Region is
//         <0=>Non-secure
//         <1=>Secure, Non-secure Callable
*/
#define SAU_INIT_NSC1       0
/*
//   </e>
*/

/*
//   <e>Initialize SAU Region 2
//   <i> Setup SAU Region 2 memory attributes
*/
#define SAU_INIT_REGION2    0
/*
//     <o>Start Address <0-0xFFFFFFE0>
*/
#define SAU_INIT_START2     0x2000F000
/*
//     <o>End Address <0x1F-0xFFFFFFFF>
*/
#define SAU_INIT_END2       0x2000FFFF
/*
//     <o>Region is
//         <0=>Non-secure
//         <1=>Secure, Non-secure Callable
*/
#define SAU_INIT_NSC2       1
/*
//   </e>
*/

/*
//   <e>Initialize SAU Region 3
//   <i> Setup SAU Region 3 memory attributes
*/
#define SAU_INIT_REGION3    0
/*
//     <o>Start Address <0-0xFFFFFFE0>
*/
#define SAU_INIT_START3     0x3F000
/*
//     <o>End Address <0x1F-0xFFFFFFFF>
*/
#define SAU_INIT_END3       0x3FFFF
/*
//     <o>Region is
//         <0=>Non-secure
//         <1=>Secure, Non-secure Callable
*/
#define SAU_INIT_NSC3       1
/*
//   </e>
*/

/*
//   <e>Initialize SAU Region 4 (Config Non-secure Callable in system_M3351.c)
//   <i> Setup SAU Region 4 memory attributes
*/
#define SAU_INIT_REGION4    0
/*
//     <o>Start Address <0-0xFFFFFFE0>
*/
#define SAU_INIT_START4     0      /* start address of SAU region 4 */

/*
//     <o>End Address <0x1F-0xFFFFFFFF>
*/
#define SAU_INIT_END4       0      /* end address of SAU region 4 */

/*
//     <o>Region is
//         <0=>Non-secure
//         <1=>Secure, Non-secure Callable
*/
#define SAU_INIT_NSC4       1
/*
//   </e>
*/

/*
//   <e>Initialize SAU Region 5 (Non-secure APROM)
//   <i> Setup SAU Region 5 memory attributes
*/
#define SAU_INIT_REGION5    1
/*
//     <o>Start Address <0-0xFFFFFFE0>
*/
#define SAU_INIT_START5     FMC_NON_SECURE_BASE     /* start address of SAU region 5 */

/*
//     <o>End Address <0x1F-0xFFFFFFFF>
*/
#define SAU_INIT_END5       0x100FFFFF              /* end address of SAU region 5 */

/*
//     <o>Region is
//         <0=>Non-secure
//         <1=>Secure, Non-secure Callable
*/
#define SAU_INIT_NSC5       0
/*
//   </e>
*/

/*
//   <e>Initialize SAU Region 6 (Non-secure SRAM)
//   <i> Setup SAU Region 6 memory attributes
*/
#define SAU_INIT_REGION6    1

/*
//     <o>Start Address <0-0xFFFFFFE0>
*/
#define SAU_INIT_START6     NON_SECURE_SRAM_BASE    /* start address of SAU region 6 */

/*
//     <o>End Address <0x1F-0xFFFFFFFF>
*/
#define SAU_INIT_END6       0x30027FFF              /* end address of SAU region 6 */

/*
//     <o>Region is
//         <0=>Non-secure
//         <1=>Secure, Non-secure Callable
*/
#define SAU_INIT_NSC6       0
/*
//   </e>
*/

/*
//   <e>Initialize SAU Region 7 (Non-secure IP region)
//   <i> Setup SAU Region 7 memory attributes
*/
#define SAU_INIT_REGION7    1

/*
//     <o>Start Address <0-0xFFFFFFE0>
*/
#define SAU_INIT_START7     0x50000000      /* start address of SAU region 7 */

/*
//     <o>End Address <0x1F-0xFFFFFFFF>
*/
#define SAU_INIT_END7       0x5FFFFFFF      /* end address of SAU region 7 */

/*
//     <o>Region is
//         <0=>Non-secure
//         <1=>Secure, Non-secure Callable
*/
#define SAU_INIT_NSC7       0
/*
//   </e>
*/

/*
// </h>
*/

/*
// <e>Setup behavior of Sleep and Exception Handling
*/
#define SCB_CSR_AIRCR_INIT  1

/*
//   <o> Deep Sleep can be enabled by
//     <0=>Secure and Non-secure state
//     <1=>Secure state only
//   <i> Value for SCB->CSR register bit DEEPSLEEPS
*/
#define SCB_CSR_DEEPSLEEPS_VAL  0

/*
//   <o>System reset request accessible from
//     <0=> Secure and Non-secure state
//     <1=> Secure state only
//   <i> Value for SCB->AIRCR register bit SYSRESETREQS
*/
#define SCB_AIRCR_SYSRESETREQS_VAL  0

/*
//   <o>Priority of Non-secure exceptions is
//     <0=> Not altered
//     <1=> Lowered to 0x80-0xFF
//   <i> Value for SCB->AIRCR register bit PRIS
*/
#define SCB_AIRCR_PRIS_VAL      0

/* Assign HardFault to be always Secure for safe */
#define SCB_AIRCR_BFHFNMINS_VAL 0

/*
// </e>
*/

/*
// <e>Setup behaviour of Floating Point Unit (FPU)
*/
#define TZ_FPU_NS_USAGE 1

/*
// <o>Floating Point Unit usage
//     <0=> Secure state only
//     <3=> Secure and Non-secure state
//   <i> Value for SCB->NSACR register bits CP10, CP11
*/
#define SCB_NSACR_CP10_11_VAL       3

/*
// <o>Treat floating-point registers as Secure
//     <0=> Disabled
//     <1=> Enabled
//   <i> Value for FPU->FPCCR register bit TS
*/
#define FPU_FPCCR_TS_VAL            0

/*
// <o>Clear on return (CLRONRET) accessibility
//     <0=> Secure and Non-secure state
//     <1=> Secure state only
//   <i> Value for FPU->FPCCR register bit CLRONRETS
*/
#define FPU_FPCCR_CLRONRETS_VAL     0

/*
// <o>Clear floating-point caller saved registers on exception return
//     <0=> Disabled
//     <1=> Enabled
//   <i> Value for FPU->FPCCR register bit CLRONRET
*/
#define FPU_FPCCR_CLRONRET_VAL      1

/*
// </e>
*/

/*
    max 128 SAU regions.
    SAU regions are defined in partition.h
 */

#define SAU_INIT_REGION(n) \
    SAU->RNR  =  ((n)                                    & SAU_RNR_REGION_Msk); \
    SAU->RBAR =  (SAU_INIT_START##n                      & SAU_RBAR_BADDR_Msk); \
    SAU->RLAR =  (SAU_INIT_END##n                        & SAU_RLAR_LADDR_Msk) | \
                 ((SAU_INIT_NSC##n << SAU_RLAR_NSC_Pos)  & SAU_RLAR_NSC_Msk)   | 1U

#endif  /* __PARTITION_M3351_TEMPLATE_H__ */

