/**************************************************************************//**
 * @file     scu_reg.h
 * @version  V1.00
 * @brief    SCU register definition header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (c) 2025 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __SCU_REG_H__
#define __SCU_REG_H__

#if defined ( __CC_ARM   )
    #pragma anon_unions
#endif

/** @addtogroup REGISTER Control Register
    @{
*/

/**
    @addtogroup SCU Secure Configuration Unit (SCU)
    Memory Mapped Structure for SCU Controller
    @{
*/

typedef struct
{
    /**
     * @var SCU_T::PNSSET0
     * Offset: 0x00  Peripheral Non-secure Attribution Set Register0 (0x4000_0000~0x4001_FFFF)
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[8]     |PDMA0     |Set PDMA0 to Non-secure State
     * |        |          |Write 1 to set PDMA0 to non-secure state.
     * |        |          |0 = PDMA0 is a secure module (default).
     * |        |          |1 = PDMA0 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[9]     |USBH      |Set USBH to Non-secure State
     * |        |          |Write 1 to set USBH to non-secure state.
     * |        |          |0 = USBH is a secure module (default).
     * |        |          |1 = USBH is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[16]    |EBI       |Set EBI to Non-secure State
     * |        |          |Write 1 to set EBI to non-secure state.
     * |        |          |0 = EBI is a secure module (default).
     * |        |          |1 = EBI is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * @var SCU_T::PNSSET1
     * Offset: 0x04  Peripheral Non-secure Attribution Set Register1 (0x4002_0000~0x4003_FFFF)
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CANFD0    |Set CANFD0 to Non-secure State
     * |        |          |Write 1 to set CANFD0 to non-secure state.
     * |        |          |0 = CANFD0 is a secure module (default).
     * |        |          |1 = CANFD0 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[4]     |CANFD1    |Set CANFD1 to Non-secure State
     * |        |          |Write 1 to set CANFD1 to non-secure state.
     * |        |          |0 = CANFD1 is a secure module (default).
     * |        |          |1 = CANFD1 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[17]    |CRC       |Set CRC to Non-secure State
     * |        |          |Write 1 to set CRC to non-secure state.
     * |        |          |0 = CRC is a secure module (default).
     * |        |          |1 = CRC is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[22]    |CACHE     |Set Cache Controller to Non-secure State
     * |        |          |Write 1 to set Cache controller to non-secure state.
     * |        |          |0 = Cache controller is a secure module (default).
     * |        |          |1 = Cache controller is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * @var SCU_T::PNSSET2
     * Offset: 0x08  Peripheral Non-secure Attribution Set Register2 (0x4004_0000~0x4005_FFFF)
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1]     |RTC       |Set RTC to Non-secure State
     * |        |          |Write 1 to set RTC to non-secure state.
     * |        |          |0 = RTC is a secure module (default).
     * |        |          |1 = RTC is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[2]     |WDT1      |Set WDT1 to Non-secure State
     * |        |          |Write 1 to set WDT1 to non-secure state.
     * |        |          |0 = WDT1 is a secure module (default).
     * |        |          |1 = WDT1 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[3]     |EADC0     |Set EADC0 to Non-secure State
     * |        |          |Write 1 to set EADC0 to non-secure state.
     * |        |          |0 = EADC0 is a secure module (default).
     * |        |          |1 = EADC0 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[5]     |ACMP01    |Set ACMP01 to Non-secure State
     * |        |          |Write 1 to set ACMP01 to non-secure state.
     * |        |          |0 = ACMP01 is a secure module (default).
     * |        |          |1 = ACMP01 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[7]     |DAC       |Set DAC to Non-secure State
     * |        |          |Write 1 to set DAC to non-secure state.
     * |        |          |0 = DAC is a secure module (default).
     * |        |          |1 = DAC is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[11]    |EADC1     |Set EADC1 to Non-secure State
     * |        |          |Write 1 to set EADC1 to non-secure state.
     * |        |          |0 = EADC1 is a secure module (default).
     * |        |          |1 = EADC1 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[16]    |TIMER01   |Set TIMER01 to Non-secure State
     * |        |          |Write 1 to set TIMER01 to non-secure state.
     * |        |          |0 = TIMER01 is a secure module (default).
     * |        |          |1 = TIMER01 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[17]    |TIMER23   |Set TIMER23 to Non-secure State
     * |        |          |Write 1 to set TIMER23 to non-secure state.
     * |        |          |0 = TIMER23 is a secure module (default).
     * |        |          |1 = TIMER23 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[26]    |BPWM0     |Set BPWM0 to Non-secure State
     * |        |          |Write 1 to set BPWM0 to non-secure state.
     * |        |          |0 = BPWM0 is a secure module (default).
     * |        |          |1 = BPWM0 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[27]    |BPWM1     |Set BPWM1 to Non-secure State
     * |        |          |Write 1 to set BPWM1 to non-secure state.
     * |        |          |0 = BPWM1 is a secure module (default).
     * |        |          |1 = BPWM1 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[28]    |PWM0      |Set PWM0 to Non-secure State
     * |        |          |Write 1 to set PWM0 to non-secure state.
     * |        |          |0 = PWM0 is a secure module (default).
     * |        |          |1 = PWM0 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[29]    |PWM1      |Set PWM1 to Non-secure State
     * |        |          |Write 1 to set PWM1 to non-secure state.
     * |        |          |0 = PWM1 is a secure module (default).
     * |        |          |1 = PWM1 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * @var SCU_T::PNSSET3
     * Offset: 0x0C  Peripheral Non-secure Attribution Set Register3 (0x4006_0000~0x4007_FFFF)
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |QSPI0     |Set QSPI0 to Non-secure State
     * |        |          |Write 1 to set QSPI0 to non-secure state.
     * |        |          |0 = QSPI0 is a secure module (default).
     * |        |          |1 = QSPI0 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[1]     |SPI0      |Set SPI0 to Non-secure State Write 1 to set SPI0 to non-secure state.
     * |        |          |0 = SPI0 is a secure module (default).
     * |        |          |1 = SPI0 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[2]     |SPI1      |Set SPI1 to Non-secure State
     * |        |          |Write 1 to set SPI1 to non-secure state.
     * |        |          |0 = SPI1 is a secure module (default).
     * |        |          |1 = SPI1 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[16]    |UART0     |Set UART0 to Non-secure State
     * |        |          |Write 1 to set UART0 to non-secure state.
     * |        |          |0 = UART0 is a secure module (default).
     * |        |          |1 = UART0 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[17]    |UART1     |Set UART1 to Non-secure State Write 1 to set UART1 to non-secure state.
     * |        |          |0 = UART1 is a secure module (default).
     * |        |          |1 = UART1 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[18]    |UART2     |Set UART2 to Non-secure State
     * |        |          |Write 1 to set UART2 to non-secure state.
     * |        |          |0 = UART2 is a secure module (default).
     * |        |          |1 = UART2 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[19]    |UART3     |Set UART3 to Non-secure State
     * |        |          |Write 1 to set UART3 to non-secure state.
     * |        |          |0 = UART3 is a secure module (default).
     * |        |          |1 = UART3 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[20]    |UART4     |Set UART4 to Non-secure State
     * |        |          |Write 1 to set UART4 to non-secure state.
     * |        |          |0 = UART4 is a secure module (default).
     * |        |          |1 = UART4 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[21]    |UART5     |Set UART5 to Non-secure State
     * |        |          |Write 1 to set UART5 to non-secure state.
     * |        |          |0 = UART5 is a secure module (default).
     * |        |          |1 = UART5 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[22]    |UART6     |Set UART6 to Non-secure State
     * |        |          |Write 1 to set UART6 to non-secure state.
     * |        |          |0 = UART6 is a secure module (default).
     * |        |          |1 = UART6 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[23]    |UART7     |Set UART7 to Non-secure State
     * |        |          |Write 1 to set UART7 to non-secure state.
     * |        |          |0 = UART7 is a secure module (default).
     * |        |          |1 = UART7 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[24]    |UART8     |Set UART8 to Non-secure State
     * |        |          |Write 1 to set UART8 to non-secure state.
     * |        |          |0 = UART8 is a secure module (default).
     * |        |          |1 = UART8 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[25]    |UART9     |Set UART9 to Non-secure State
     * |        |          |Write 1 to set UART9 to non-secure state.
     * |        |          |0 = UART9 is a secure module (default).
     * |        |          |1 = UART9 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * @var SCU_T::PNSSET4
     * Offset: 0x10  Peripheral Non-secure Attribution Set Register4 (0x4008_0000~0x4009_FFFF)
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |I2C0      |Set I2C0 to Non-secure State
     * |        |          |Write 1 to set I2C0 to non-secure state.
     * |        |          |0 = I2C0 is a secure module (default).
     * |        |          |1 = I2C0 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[1]     |I2C1      |Set I2C1 to Non-secure State
     * |        |          |Write 1 to set I2C1 to non-secure state.
     * |        |          |0 = I2C1 is a secure module (default).
     * |        |          |1 = I2C1 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[2]     |I2C2      |Set I2C2 to Non-secure State
     * |        |          |Write 1 to set I2C2 to non-secure state.
     * |        |          |0 = I2C2 is a secure module (default).
     * |        |          |1 = I2C2 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[6]     |I3C0      |Set I3C0 to Non-secure State
     * |        |          |Write 1 to set I3C0 to non-secure state.
     * |        |          |0 = I3C0 is a secure module (default).
     * |        |          |1 = I3C0 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[8]     |LLSI0     |Set LLSI0/2/4/6/8 to Non-secure State
     * |        |          |Write 1 to set LLSI0/2/4/6/8 to non-secure state.
     * |        |          |0 = LLSI0/2/4/6/8 is a secure module (default).
     * |        |          |1 = LLSI0/2/4/6/8 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[9]     |LLSI1     |Set LLSI1/3/5/7/9 to Non-secure State
     * |        |          |Write 1 to set LLSI1/3/5/7/9 to non-secure state.
     * |        |          |0 = LLSI1/3/5/7/9 is a secure module (default).
     * |        |          |1 = LLSI1/3/5/7/9 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[10]    |ELLSI0    |Set ELLSI0 to Non-secure State
     * |        |          |Write 1 to set ELLSI0 to non-secure state.
     * |        |          |0 = ELLSI0 is a secure module (default).
     * |        |          |1 = ELLSI0 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[11]    |ELLSI1    |Set ELLSI1 to Non-secure State
     * |        |          |Write 1 to set ELLSI1 to non-secure state.
     * |        |          |0 = ELLSI1 is a secure module (default).
     * |        |          |1 = ELLSI1 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[24]    |WWDT1     |Set WWDT1 to Non-secure State
     * |        |          |Write 1 to set WWDT1 to non-secure state.
     * |        |          |0 = WWDT1 is a secure module (default).
     * |        |          |1 = WWDT1 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * @var SCU_T::PNSSET5
     * Offset: 0x14  Peripheral Non-secure Attribution Set Register5 (0x400A_0000~0x400B_FFFF)
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[16]    |EQEI0     |Set EQEI0 to Non-secure State
     * |        |          |Write 1 to set EQEI0 to non-secure state.
     * |        |          |0 = EQEI0 is a secure module (default).
     * |        |          |1 = EQEI0 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[17]    |EQEI1     |Set EQEI1 to Non-secure State
     * |        |          |Write 1 to set EQEI1 to non-secure state.
     * |        |          |0 = EQEI1 is a secure module (default).
     * |        |          |1 = EQEI1 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[20]    |ECAP0     |Set ECAP0 to Non-secure State
     * |        |          |Write 1 to set ECAP0 to non-secure state.
     * |        |          |0 = ECAP0 is a secure module (default).
     * |        |          |1 = ECAP0 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[25]    |TRNG      |Set TRNG to Non-secure State
     * |        |          |Write 1 to set TRNG to non-secure state.
     * |        |          |0 = TRNG is a secure module (default).
     * |        |          |1 = TRNG is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * @var SCU_T::PNSSET6
     * Offset: 0x18  Peripheral Non-secure Attribution Set Register6 (0x400C_0000~0x400D_FFFF)
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |USBD      |Set USBD to Non-secure State
     * |        |          |Write 1 to set USBD to non-secure state.
     * |        |          |0 = USBD is a secure module (default).
     * |        |          |1 = USBD is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[16]    |USCI0     |Set USCI0 to Non-secure State
     * |        |          |Write 1 to set USCI0 to non-secure state.
     * |        |          |0 = USCI0 is a secure module (default).
     * |        |          |1 = USCI0 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[17]    |USCI1     |Set USCI1 to Non-secure State
     * |        |          |Write 1 to set USCI1 to non-secure state.
     * |        |          |0 = USCI1 is a secure module (default).
     * |        |          |1 = USCI1 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * @var SCU_T::SRAMNSSET
     * Offset: 0x20  SRAM Non-secure Attribution Set Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[19:0]  |SECn      |Set SRAM Section n to Non-secure State
     * |        |          |Write 1 to set SRAM section n to non-secure state.
     * |        |          |0 = SRAM Section n is secure (default).
     * |        |          |1 = SRAM Section n is non-secure.
     * |        |          |Size per section is 8 Kbytes.
     * |        |          |Secure SRAM section n is 0x2000_0000+0x2000*n to 0x2000_0000+0x2000*(n+1)-0x1
     * |        |          |Non-secure SRAM section n is 0x3000_0000+0x2000*n to 0x3000_0000+0x2000*(n+1)-0x1
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |        |          |Note: SEC16~SEC19 is only for ECC function disable.
     * @var SCU_T::FNSADDR
     * Offset: 0x2C  Flash Non-secure Boundary Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |FNSADDR   |Flash Non-secure Boundary Address
     * |        |          |Indicate the base address of Non-secure region set in user configuration, NSCBA
     * |        |          |Refer to FMC section for more details.
     * @var SCU_T::SVIEN
     * Offset: 0x30  Security Violation Interrupt Enable Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |FLASHIEN  |FLASH Security Violation Interrupt Enable Bit
     * |        |          |0 = Interrupt triggered from security violation of FLASH Disabled.
     * |        |          |1 = Interrupt triggered from security violation of FLASH Enabled.
     * |[1]     |SRAM0IEN  |SRAM0 Security Violation Interrupt Enable Bit
     * |        |          |0 = Interrupt triggered from security violation of SRAM0 Disabled.
     * |        |          |1 = Interrupt triggered from security violation of SRAM0 Enabled.
     * |[2]     |SRAM1IEN  |SRAM1 Security Violation Interrupt Enable Bit
     * |        |          |0 = Interrupt triggered from security violation of SRAM1 Disabled.
     * |        |          |1 = Interrupt triggered from security violation of SRAM1 Enabled.
     * |[3]     |SRAM2IEN  |SRAM2 Security Violation Interrupt Enable Bit
     * |        |          |0 = Interrupt triggered from security violation of SRAM2 Disabled.
     * |        |          |1 = Interrupt triggered from security violation of SRAM2 Enabled.
     * |        |          |Note: this bit is only for ECC function disable.
     * |[4]     |APB0IEN   |APB0 Security Violation Interrupt Enable Bit
     * |        |          |0 = Interrupt triggered from security violation of APB0 Disabled.
     * |        |          |1 = Interrupt triggered from security violation of APB0 Enabled.
     * |[5]     |APB1IEN   |APB1 Security Violation Interrupt Enable Bit
     * |        |          |0 = Interrupt triggered from security violation of APB1 Disabled.
     * |        |          |1 = Interrupt triggered from security violation of APB1 Enabled.
     * |[6]     |EBIIEN    |EBI Security Violation Interrupt Enable Bit
     * |        |          |0 = Interrupt triggered from security violation of EBI Disabled.
     * |        |          |1 = Interrupt triggered from security violation of EBI Enabled.
     * |[7]     |SYSIEN    |SYS Security Violation Interrupt Enable Bit
     * |        |          |0 = Interrupt triggered from security violation of SYS Disabled.
     * |        |          |1 = Interrupt triggered from security violation of SYS Enabled.
     * |[8]     |FMCIEN    |FMC Security Violation Interrupt Enable Bit
     * |        |          |0 = Interrupt triggered from security violation of FMC Disabled.
     * |        |          |1 = Interrupt triggered from security violation of FMC Enabled.
     * |[9]     |PDMA0IEN  |PDMA0 Security Violation Interrupt Enable Bit
     * |        |          |0 = Interrupt triggered from security violation of PDMA0 Disabled.
     * |        |          |1 = Interrupt triggered from security violation of PDMA0 Enabled.
     * |[10]    |CRCIEN    |CRC Security Violation Interrupt Enable Bit
     * |        |          |0 = Interrupt triggered from security violation of CRC Disabled.
     * |        |          |1 = Interrupt triggered from security violation of CRC Enabled.
     * |[11]    |CANFD0IEN |CANFD0 Security Violation Interrupt Enable Bit
     * |        |          |0 = Interrupt triggered from security violation of CANFD0 Disabled.
     * |        |          |1 = Interrupt triggered from security violation of CANFD0 Enabled.
     * |[12]    |CANFD1IEN |CANFD1 Security Violation Interrupt Enable Bit
     * |        |          |0 = Interrupt triggered from security violation of CANFD1 Disabled.
     * |        |          |1 = Interrupt triggered from security violation of CANFD1 Enabled.
     * |[13]    |SCUIEN    |SCU Security Violation Interrupt Enable Bit
     * |        |          |0 = Interrupt triggered from security violation of SCU Disabled.
     * |        |          |1 = Interrupt triggered from security violation of SCU Enabled.
     * |[14]    |GPIOIEN   |GPIO Security Violation Interrupt Enable Bit
     * |        |          |0 = Interrupt triggered from security violation of GPIO Disabled.
     * |        |          |1 = Interrupt triggered from security violation of GPIO Enabled.
     * |[15]    |USBHIEN   |USBH Security Violation Interrupt Enable Bit
     * |        |          |0 = Interrupt triggered from security violation of USBH Disabled.
     * |        |          |1 = Interrupt triggered from security violation of USBH Enabled.
     * |[18]    |CACHEIEN  |CACHE Controller Security Violation Interrupt Enable Bit
     * |        |          |0 = Interrupt triggered from security violation of Cache Controller Disabled.
     * |        |          |1 = Interrupt triggered from security violation of Cache Controller Enabled.
     * |[19]    |DFLASHIEN |DFLASH Security Violation Interrupt Enable Bit
     * |        |          |0 = Interrupt triggered from security violation of DFLASH Disabled.
     * |        |          |1 = Interrupt triggered from security violation of DFLASH Enabled.
     * |[20]    |DFMCIEN   |DFMC Security Violation Interrupt Enable Bit
     * |        |          |0 = Interrupt triggered from security violation of DFMC Disabled.
     * |        |          |1 = Interrupt triggered from security violation of DFMC Enabled.
     * @var SCU_T::SVINTSTS
     * Offset: 0x34  Security Violation Interrupt Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |FLASHIF   |FLASH Security Violation Interrupt Status
     * |        |          |0 = No FLASH violation interrupt event.
     * |        |          |1 = There is at least a FLASH violation interrupt event.
     * |        |          |Note: Write 1 to clear the interrupt flag.
     * |[1]     |SRAM0IF   |SRAM0 Security Violation Interrupt Status
     * |        |          |0 = No SRAM0 violation interrupt event.
     * |        |          |1 = There is at least a SRAM0 violation interrupt event.
     * |        |          |Note: Write 1 to clear the interrupt flag.
     * |[2]     |SRAM1IF   |SRAM1 Security Violation Interrupt Status
     * |        |          |0 = No SRAM1 violation interrupt event.
     * |        |          |1 = There is at least a SRAM1 violation interrupt event.
     * |        |          |Note: Write 1 to clear the interrupt flag.
     * |[3]     |SRAM2IF   |SRAM2 Security Violation Interrupt Status
     * |        |          |0 = No SRAM2 violation interrupt event.
     * |        |          |1 = There is at least a SRAM2 violation interrupt event.
     * |        |          |Note: Write 1 to clear the interrupt flag.
     * |        |          |Note: this bit is only for ECC function disable.
     * |[4]     |APB0IF    |APB0 Security Violation Interrupt Status
     * |        |          |0 = No APB0 violation interrupt event.
     * |        |          |1 = There is at least a APB0 violation interrupt event.
     * |        |          |Note: Write 1 to clear the interrupt flag.
     * |[5]     |APB1IF    |APB1 Security Violation Interrupt Status
     * |        |          |0 = No APB1 violation interrupt event.
     * |        |          |1 = There is at least a APB1 violation interrupt event.
     * |        |          |Note: Write 1 to clear the interrupt flag.
     * |[6]     |EBIIF     |EBI Security Violation Interrupt Status
     * |        |          |0 = No EBI violation interrupt event.
     * |        |          |1 = There is at least EBI violation interrupt event.
     * |        |          |Note: Write 1 to clear the interrupt flag.
     * |[7]     |SYSIF     |SYS Security Violation Interrupt Status
     * |        |          |0 = No SYS violation interrupt event.
     * |        |          |1 = There is at least SYS violation interrupt event.
     * |        |          |Note: Write 1 to clear the interrupt flag.
     * |[8]     |FMCIF     |FMC Security Violation Interrupt Status
     * |        |          |0 = No FMC violation interrupt event.
     * |        |          |1 = There is at least FMC violation interrupt event.
     * |        |          |Note: Write 1 to clear the interrupt flag.
     * |[9]     |PDMA0IF   |PDMA0 Security Violation Interrupt Status
     * |        |          |0 = No PDMA0 violation interrupt event.
     * |        |          |1 = There is at least a PDMA0 violation interrupt event.
     * |        |          |Note: Write 1 to clear the interrupt flag.
     * |[10]    |CRCIF     |CRC Security Violation Interrupt Status
     * |        |          |0 = No CRC violation interrupt event.
     * |        |          |1 = There is at least CRC violation interrupt event.
     * |        |          |Note: Write 1 to clear the interrupt flag.
     * |[11]    |CANFD0IF  |CANFD0 Security Violation Interrupt Status
     * |        |          |0 = No CANFD0 violation interrupt event.
     * |        |          |1 = There is at least a CANFD0 violation interrupt event.
     * |        |          |Note: Write 1 to clear the interrupt flag.
     * |[12]    |CANFD1IF  |CANFD1 Security Violation Interrupt Status
     * |        |          |0 = No CANFD1 violation interrupt event.
     * |        |          |1 = There is at least a CANFD1 violation interrupt event.
     * |        |          |Note: Write 1 to clear the interrupt flag.
     * |[13]    |SCUIF     |SCU Security Violation Interrupt Status
     * |        |          |0 = No SCU violation interrupt event.
     * |        |          |1 = There is at least a SCU violation interrupt event.
     * |        |          |Note: Write 1 to clear the interrupt flag.
     * |[14]    |GPIOIF    |GPIO Security Violation Interrupt Status
     * |        |          |0 = No GPIO violation interrupt event.
     * |        |          |1 = There is at least a GPIO violation interrupt event.
     * |        |          |Note: Write 1 to clear the interrupt flag.
     * |[15]    |USBHIF    |USBH Security Violation Interrupt Status
     * |        |          |0 = No USBH violation interrupt event.
     * |        |          |1 = There is at least a USBH violation interrupt event.
     * |        |          |Note: Write 1 to clear the interrupt flag.
     * |[18]    |CACHEIF   |CACHE Controller Security Violation Interrupt Status
     * |        |          |0 = No Cache Controller violation interrupt event.
     * |        |          |1 = There is at least a Cache Controller violation interrupt event.
     * |        |          |Note: Write 1 to clear the interrupt flag.
     * |[19]    |DFLASHIF  |Data FLASH Security Violation Interrupt Status
     * |        |          |0 = No Data FLASH violation interrupt event.
     * |        |          |1 = There is at least a Data FLASH violation interrupt event.
     * |        |          |Note: Write 1 to clear the interrupt flag.
     * |[20]    |DFMCIF    |Data FMC Security Violation Interrupt Status
     * |        |          |0 = No Data FMC violation interrupt event.
     * |        |          |1 = There is at least Data FMC violation interrupt event.
     * |        |          |Note: Write 1 to clear the interrupt flag.
     * @var SCU_T::DFNSADDR
     * Offset: 0x3C  Data Flash Non-secure Boundary Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |DFNSADDR  |DFlash Non-secure Boundary Address
     * |        |          |Indicate the base address of Non-secure region set in user configuration, NSCBA
     * |        |          |Refer to DFMC section for more details.
     * |[31]    |DFNS_EE   |DFlash to Non-secure State
     * |        |          |Write 1 to set USCI1 to non-secure state.
     * |        |          |0 = DFMC EE is a secure module.
     * |        |          |1 = DFMC EE is a non-secure module.
     * @var SCU_T::FLASHVSRC
     * Offset: 0x40  FLASH Security Policy Violation Source
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |MASTER    |Master Violating Security Policy
     * |        |          |Indicate which master invokes the security violation.
     * |        |          |0x0 = Core processor
     * |        |          |.
     * |        |          |0x2 = PDMA0
     * |        |          |0x3 = USB Host Controller (USBH)
     * |        |          |0x7 = CRC
     * |        |          |Others are undefined.
     * @var SCU_T::FLASHVA
     * Offset: 0x44  FLASH Violation Address
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |VIOADDR   |Violation Address
     * |        |          |Indicate the target address of the access, which invokes the security violation.
     * @var SCU_T::SRAM0VSRC
     * Offset: 0x48  SRAM0 Security Policy Violation Source
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |MASTER    |Master Violating Security Policy
     * |        |          |Indicate which master invokes the security violation.
     * |        |          |0x0 = Core processor
     * |        |          |.
     * |        |          |0x2 = PDMA0
     * |        |          |0x3 = USB Host Controller (USBH)
     * |        |          |0x7 = CRC
     * |        |          |Others are undefined.
     * @var SCU_T::SRAM0VA
     * Offset: 0x4C  SRAM0 Violation Address
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |VIOADDR   |Violation Address
     * |        |          |Indicate the target address of the access, which invokes the security violation.
     * @var SCU_T::SRAM1VSRC
     * Offset: 0x50  SRAM1 Security Policy Violation Source
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |MASTER    |Master Violating Security Policy
     * |        |          |Indicate which master invokes the security violation.
     * |        |          |0x0 = Core processor
     * |        |          |.
     * |        |          |0x2 = PDMA0
     * |        |          |0x3 = USB Host Controller (USBH)
     * |        |          |0x7 = CRC
     * |        |          |Others are undefined.
     * @var SCU_T::SRAM1VA
     * Offset: 0x54  SRAM1 Violation Address
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |VIOADDR   |Violation Address
     * |        |          |Indicate the target address of the access, which invokes the security violation.
     * @var SCU_T::SRAM2VSRC
     * Offset: 0x58  SRAM2 Security Policy Violation Source
    Note: this register is only for ECC function disable.
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |MASTER    |Master Violating Security Policy
     * |        |          |Indicate which master invokes the security violation.
     * |        |          |0x0 = Core processor
     * |        |          |.
     * |        |          |0x2 = PDMA0
     * |        |          |0x3 = USB Host Controller (USBH)
     * |        |          |0x7 = CRC
     * |        |          |Others are undefined.
     * @var SCU_T::SRAM2VA
     * Offset: 0x5C  SRAM2 Violation Address
    Note: this register is only for ECC function disable.
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |VIOADDR   |Violation Address
     * |        |          |Indicate the target address of the access, which invokes the security violation.
     * @var SCU_T::APB0VSRC
     * Offset: 0x60  APB0 Security Policy Violation Source
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |MASTER    |Master Violating Security Policy
     * |        |          |Indicate which master invokes the security violation.
     * |        |          |0x0 = Core processor
     * |        |          |.
     * |        |          |0x2 = PDMA0
     * |        |          |0x3 = USB Host Controller (USBH)
     * |        |          |0x7 = CRC
     * |        |          |Others are undefined.
     * @var SCU_T::APB0VA
     * Offset: 0x64  APB0 Violation Address
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |VIOADDR   |Violation Address
     * |        |          |Indicate the target address of the access, which invokes the security violation.
     * @var SCU_T::APB1VSRC
     * Offset: 0x68  APB1 Security Policy Violation Source
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |MASTER    |Master Violating Security Policy
     * |        |          |Indicate which master invokes the security violation.
     * |        |          |0x0 = Core processor
     * |        |          |.
     * |        |          |0x2 = PDMA0
     * |        |          |0x3 = USB Host Controller (USBH)
     * |        |          |0x7 = CRC
     * |        |          |Others are undefined.
     * @var SCU_T::APB1VA
     * Offset: 0x6C  APB1 Violation Address
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |VIOADDR   |Violation Address
     * |        |          |Indicate the target address of the access, which invokes the security violation.
     * @var SCU_T::EBIVSRC
     * Offset: 0x70  EBI Security Policy Violation Source
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |MASTER    |Master Violating Security Policy
     * |        |          |Indicate which master invokes the security violation.
     * |        |          |0x0 = Core processor
     * |        |          |.
     * |        |          |0x2 = PDMA0
     * |        |          |0x3 = USB Host Controller (USBH)
     * |        |          |0x7 = CRC
     * |        |          |Others are undefined.
     * @var SCU_T::EBIVA
     * Offset: 0x74  EBI Violation Address
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |VIOADDR   |Violation Address
     * |        |          |Indicate the target address of the access, which invokes the security violation.
     * @var SCU_T::SYSVSRC
     * Offset: 0x78  SYS Security Policy Violation Source
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |MASTER    |Master Violating Security Policy
     * |        |          |Indicate which master invokes the security violation.
     * |        |          |0x0 = Core processor
     * |        |          |.
     * |        |          |0x2 = PDMA0
     * |        |          |0x3 = USB Host Controller (USBH)
     * |        |          |0x7 = CRC
     * |        |          |Others are undefined.
     * @var SCU_T::SYSVA
     * Offset: 0x7C  SYS Violation Address
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |VIOADDR   |Violation Address
     * |        |          |Indicate the target address of the access, which invokes the security violation.
     * @var SCU_T::FMCVSRC
     * Offset: 0x80  FMC Security Policy Violation Source
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |MASTER    |Master Violating Security Policy
     * |        |          |Indicate which master invokes the security violation.
     * |        |          |0x0 = Core processor
     * |        |          |.
     * |        |          |0x2 = PDMA0
     * |        |          |0x3 = USB Host Controller (USBH)
     * |        |          |0x7 = CRC
     * |        |          |Others are undefined.
     * @var SCU_T::FMCVA
     * Offset: 0x84  FMC Violation Address
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |VIOADDR   |Violation Address
     * |        |          |Indicate the target address of the access, which invokes the security violation.
     * @var SCU_T::PDMA0VSRC
     * Offset: 0x88  PDMA0 Security Policy Violation Source
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |MASTER    |Master Violating Security Policy
     * |        |          |Indicate which master invokes the security violation.
     * |        |          |0x0 = Core processor
     * |        |          |.
     * |        |          |0x2 = PDMA0
     * |        |          |0x3 = USB Host Controller (USBH)
     * |        |          |0x7 = CRC
     * |        |          |Others are undefined.
     * @var SCU_T::PDMA0VA
     * Offset: 0x8C  PDMA0 Violation Address
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |VIOADDR   |Violation Address
     * |        |          |Indicate the target address of the access, which invokes the security violation.
     * @var SCU_T::CRCVSRC
     * Offset: 0x90  CRC Security Policy Violation Source
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |MASTER    |Master Violating Security Policy
     * |        |          |Indicate which master invokes the security violation.
     * |        |          |0x0 = Core processor
     * |        |          |.
     * |        |          |0x2 = PDMA0
     * |        |          |0x3 = USB Host Controller (USBH)
     * |        |          |0x7 = CRC
     * |        |          |Others are undefined.
     * @var SCU_T::CRCVA
     * Offset: 0x94  CRC Violation Address
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |VIOADDR   |Violation Address
     * |        |          |Indicate the target address of the access, which invokes the security violation.
     * @var SCU_T::CANFD0VSRC
     * Offset: 0x98  CANFD0 Security Policy Violation Source
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |MASTER    |Master Violating Security Policy
     * |        |          |Indicate which master invokes the security violation.
     * |        |          |0x0 = Core processor
     * |        |          |.
     * |        |          |0x2 = PDMA0
     * |        |          |0x3 = USB Host Controller (USBH)
     * |        |          |0x7 = CRC
     * |        |          |Others are undefined.
     * @var SCU_T::CANFD0VA
     * Offset: 0x9C  CANFD0 Violation Address
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |VIOADDR   |Violation Address
     * |        |          |Indicate the target address of the access, which invokes the security violation.
     * @var SCU_T::CANFD1VSRC
     * Offset: 0xA0  CANFD1 Security Policy Violation Source
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |MASTER    |Master Violating Security Policy
     * |        |          |Indicate which master invokes the security violation.
     * |        |          |0x0 = Core processor
     * |        |          |.
     * |        |          |0x2 = PDMA0
     * |        |          |0x3 = USB Host Controller (USBH)
     * |        |          |0x7 = CRC
     * |        |          |Others are undefined.
     * @var SCU_T::CANFD1VA
     * Offset: 0xA4  CANFD1 Violation Address
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |VIOADDR   |Violation Address
     * |        |          |Indicate the target address of the access, which invokes the security violation.
     * @var SCU_T::SCUVSRC
     * Offset: 0xA8  SCU Security Policy Violation Source
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |MASTER    |Master Violating Security Policy
     * |        |          |Indicate which master invokes the security violation.
     * |        |          |0x0 = Core processor
     * |        |          |.
     * |        |          |0x2 = PDMA0
     * |        |          |0x3 = USB Host Controller (USBH)
     * |        |          |0x7 = CRC
     * |        |          |Others are undefined.
     * @var SCU_T::SCUVA
     * Offset: 0xAC  SCU Violation Address
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |VIOADDR   |Violation Address
     * |        |          |Indicate the target address of the access, which invokes the security violation.
     * @var SCU_T::GPIOVSRC
     * Offset: 0xB0  GPIO Security Policy Violation Source
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |MASTER    |Master Violating Security Policy
     * |        |          |Indicate which master invokes the security violation.
     * |        |          |0x0 = Core processor
     * |        |          |.
     * |        |          |0x2 = PDMA0
     * |        |          |0x3 = USB Host Controller (USBH)
     * |        |          |0x7 = CRC
     * |        |          |Others are undefined.
     * @var SCU_T::GPIOVA
     * Offset: 0xB4  GPIO Violation Address
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |VIOADDR   |Violation Address
     * |        |          |Indicate the target address of the access, which invokes the security violation.
     * @var SCU_T::USBHVA
     * Offset: 0xBC  USBH Violation Address
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |VIOADDR   |Violation Address
     * |        |          |Indicate the target address of the access, which invokes the security violation.
     * @var SCU_T::USBHVSRC
     * Offset: 0xC0  USBH Security Policy Violation Source
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |MASTER    |Master Violating Security Policy
     * |        |          |Indicate which master invokes the security violation.
     * |        |          |0x0 = Core processor
     * |        |          |.
     * |        |          |0x2 = PDMA0
     * |        |          |0x3 = USB Host Controller (USBH)
     * |        |          |0x7 = CRC
     * |        |          |Others are undefined.
     * @var SCU_T::CACHEVSRC
     * Offset: 0xD0  CACHE Controller Security Policy Violation Source
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |MASTER    |Master Violating Security Policy
     * |        |          |Indicate which master invokes the security violation.
     * |        |          |0x0 = Core processor
     * |        |          |.
     * |        |          |0x2 = PDMA0
     * |        |          |0x3 = USB Host Controller (USBH)
     * |        |          |0x7 = CRC
     * |        |          |Others are undefined.
     * @var SCU_T::CACHEVA
     * Offset: 0xD4  CACHE Controller Violation Address
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |VIOADDR   |Violation Address
     * |        |          |Indicate the target address of the access, which invokes the security violation.
     * @var SCU_T::DFLASHVSRC
     * Offset: 0xD8  DFLASH Security Policy Violation Source
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |MASTER    |Master Violating Security Policy
     * |        |          |Indicate which master invokes the security violation.
     * |        |          |0x0 = Core processor
     * |        |          |.
     * |        |          |0x2 = PDMA0
     * |        |          |0x3 = USB Host Controller (USBH)
     * |        |          |0x7 = CRC
     * |        |          |Others are undefined.
     * @var SCU_T::DFLASHVA
     * Offset: 0xDC  DFLASH Violation Address
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |VIOADDR   |Violation Address
     * |        |          |Indicate the target address of the access, which invokes the security violation.
     * @var SCU_T::DFMCVSRC
     * Offset: 0xE0  DFMC Security Policy Violation Source
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |MASTER    |Master Violating Security Policy
     * |        |          |Indicate which master invokes the security violation.
     * |        |          |0x0 = Core processor
     * |        |          |.
     * |        |          |0x2 = PDMA0
     * |        |          |0x3 = USB Host Controller (USBH)
     * |        |          |0x7 = CRC
     * |        |          |Others are undefined.
     * @var SCU_T::DFMCVA
     * Offset: 0xE4  DFMC Violation Address
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |VIOADDR   |Violation Address
     * |        |          |Indicate the target address of the access, which invokes the security violation.
     * @var SCU_T::SINFAEN
     * Offset: 0xF0  Shared Information Access Enable Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |SCUSIAEN  |SCU Shared Information Access Enable Bit
     * |        |          |0 = Non-secure CPU access SCU Shared information Disabled.
     * |        |          |1 = Non-secure CPU access SCU Shared information Enabled.
     * |[1]     |SYSSIAEN  |SYS Shared Information Access Enable Bit
     * |        |          |0 = Non-secure CPU access SYS Shared information Disabled.
     * |        |          |1 = Non-secure CPU access SYS Shared information Enabled.
     * |        |          |Note: Include clock information.
     * |[2]     |FMCSIAEN  |FMC Shared Information Access Enable Bit
     * |        |          |0 = Non-secure CPU access FMC Shared information Disabled.
     * |        |          |1 = Non-secure CPU access FMC Shared information Enabled.
     * |[3]     |DFMCSIAEN |Data FMC Shared Information Access Enable Bit
     * |        |          |0 = Non-secure CPU access Data FMC Shared information Disabled.
     * |        |          |1 = Non-secure CPU access Data FMC Shared information Enabled.
     * @var SCU_T::SCWP
     * Offset: 0x134  Security Configuration Write Protection Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1]     |LOCK      |Enable Write Protection Lock Bit
     * |        |          |0 = Write protection lock Disabled.
     * |        |          |1 = Write protection Enabled and locked.
     * |        |          |Note: This bit cannot be cleared to 0 without a system-level reset after set to one.
     * |[31:16] |WVCODE    |Write Verify Code
     * |        |          |Read operation:
     * |        |          |Reserved, all zeros.
     * |        |          |Write operation:
     * |        |          |0x475A = The write verify code, 0x475A, is needed to do a valid write to SCU_SCWP.
     * |        |          |Others = Invalid write verify code.
     * @var SCU_T::EINTNS
     * Offset: 0x13C  EINT Non-secure Attribution Set Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |EINT0     |Set EINT0 to Non-secure State
     * |        |          |0 = EINT0 is a secure module (default).
     * |        |          |1 = EINT0 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[1]     |EINT1     |Set EINT1 to Non-secure State
     * |        |          |0 = EINT1 is a secure module (default).
     * |        |          |1 = EINT1 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[2]     |EINT2     |Set EINT2 to Non-secure State
     * |        |          |0 = EINT2 is a secure module (default).
     * |        |          |1 = EINT2 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[3]     |EINT3     |Set EINT3 to Non-secure State
     * |        |          |0 = EINT3 is a secure module (default).
     * |        |          |1 = EINT3 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[4]     |EINT4     |Set EINT4 to Non-secure State
     * |        |          |0 = EINT4 is a secure module (default).
     * |        |          |1 = EINT4 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[5]     |EINT5     |Set EINT5 to Non-secure State
     * |        |          |0 = EINT5 is a secure module (default).
     * |        |          |1 = EINT5 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[6]     |EINT6     |Set EINT6 to Non-secure State
     * |        |          |0 = EINT6 is a secure module (default).
     * |        |          |1 = EINT6 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * |[7]     |EINT7     |Set EINT7 to Non-secure State
     * |        |          |0 = EINT7 is a secure module (default).
     * |        |          |1 = EINT7 is a non-secure module.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * @var SCU_T::IONSSET0
     * Offset: 0x140  I/O Non-secure Attribution Set Register0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |PA        |Set GPIO Port A to Non-secure State
     * |        |          |Write 1 to set PA to non-secure state. Each bit configures one pin in GPIO port A.
     * |        |          |0 = GPIO port A is secure (default).
     * |        |          |1 = GPIO port A is non-secure.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * @var SCU_T::IONSSET1
     * Offset: 0x144  I/O Non-secure Attribution Set Register1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |PB        |Set GPIO Port B to Non-secure State
     * |        |          |Write 1 to set PB to non-secure state. Each bit configures one pin in GPIO port B.
     * |        |          |0 = GPIO port B is secure (default).
     * |        |          |1 = GPIO port B is non-secure.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * @var SCU_T::IONSSET2
     * Offset: 0x148  I/O Non-secure Attribution Set Register2
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |PC        |Set GPIO Port C to Non-secure State
     * |        |          |Write 1 to set PC to non-secure state. Each bit configures one pin in GPIO port C.
     * |        |          |0 = GPIO port C is secure (default).
     * |        |          |1 = GPIO port C is non-secure.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * @var SCU_T::IONSSET3
     * Offset: 0x14C  I/O Non-secure Attribution Set Register3
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |PD        |Set GPIO Port D to Non-secure State
     * |        |          |Write 1 to set PD to non-secure state. Each bit configures one pin in GPIO port D.
     * |        |          |0 = GPIO port D is secure (default).
     * |        |          |1 = GPIO port D is non-secure.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * @var SCU_T::IONSSET4
     * Offset: 0x150  I/O Non-secure Attribution Set Register4
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |PE        |Set GPIO Port E to Non-secure State
     * |        |          |Write 1 to set PE to non-secure state. Each bit configures one pin in GPIO port E.
     * |        |          |0 = GPIO port E is secure (default).
     * |        |          |1 = GPIO port E is non-secure.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * @var SCU_T::IONSSET5
     * Offset: 0x154  I/O Non-secure Attribution Set Register5
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |PF        |Set GPIO Port F to Non-secure State
     * |        |          |Write 1 to set PF to non-secure state. Each bit configures one pin in GPIO port F.
     * |        |          |0 = GPIO port F is secure (default).
     * |        |          |1 = GPIO port F is non-secure.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * @var SCU_T::IONSSET6
     * Offset: 0x158  I/O Non-secure Attribution Set Register6
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |PG        |Set GPIO Port G to Non-secure State
     * |        |          |Write 1 to set PG to non-secure state. Each bit configures one pin in GPIO port G.
     * |        |          |0 = GPIO port G is secure (default).
     * |        |          |1 = GPIO port G is non-secure.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * @var SCU_T::IONSSET7
     * Offset: 0x15C  I/O Non-secure Attribution Set Register7
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |PH        |Set GPIO Port H to Non-secure State
     * |        |          |Write 1 to set PH to non-secure state. Each bit configures one pin in GPIO port H.
     * |        |          |0 = GPIO port H is secure (default).
     * |        |          |1 = GPIO port H is non-secure.
     * |        |          |Note: This bit is write-protected by SCU_SCWP.
     * @var SCU_T::NSMCTL
     * Offset: 0x200  Non-secure State Monitor Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |PRESCALE  |Pre-scale Value of Non-secure State Monitor Counter
     * |        |          |0 = Counter Disabled.
     * |        |          |Others = Counter Enabled and the counter clock source = HCLK/PRESCALE.
     * |[8]     |NSMIEN    |Non-secure State Monitor Interrupt Enable Bit
     * |        |          |0 = Non-secure state monitor interrupt Disabled.
     * |        |          |1 = Non-secure state monitor interrupt Enabled.
     * |[9]     |AUTORLD   |Auto Reload Non-secure State Monitor Counter When CURRNS Changing to 1
     * |        |          |0 = Disable clearing non-secure state monitor counter automatically (default).
     * |        |          |1 = Enable clearing non-secure state monitor counter automatically when the core processor changes from secure state to non-secure state
     * |[10]    |TMRMOD    |Non-secure Monitor Mode Enable Bit
     * |        |          |0 = Monitor mode. The counter will count down when the core processor is in non-secure state. (default)
     * |        |          |1 = Free-counting mode
     * |        |          |The counter will keep counting no matter the core processor is in secure or non-secure state.
     * |[12]    |IDLEON    |Monitor Counter Keep Counting When the Chip Is in Idle Mode Enable Bit
     * |        |          |0 = The counter will be halted when the chip is in idle mode.
     * |        |          |1 = The counter will keep counting when the chip is in idle mode. (default)
     * |        |          |Note: In monitor mode, the counter is always halted when the core processor is in secure state.
     * |[13]    |DBGON     |Monitor Counter Keep Counting When the Chip Is in Debug Mode Enable Bit
     * |        |          |0 = The counter will be halted when the core processor is halted by ICE. (default)
     * |        |          |1 = The counter will keep counting when the core processor is halted by ICE.
     * @var SCU_T::NSMLOAD
     * Offset: 0x204  Non-secure State Monitor Reload Value Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[23:0]  |RELOAD    |Reload Value for Non-secure State Monitor Counter
     * |        |          |The RELOAD value will be reloaded to the counter whenever the counter counts down to 0.
     * @var SCU_T::NSMVAL
     * Offset: 0x208  Non-secure State Monitor Counter Value Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[23:0]  |VALUE     |Counter Value of Non-secure State Monitor Counter
     * |        |          |Current value of non-secure state monitor counter
     * |        |          |This is down counter and counts down only when CURRNS(SCU_NSMSTS[0]) = 1
     * |        |          |When counting down to 0, VALUE will automatically be reloaded from SCU_NSMLOAD register.
     * |        |          |A write of any value clears the VALUE to 0 and also clears NSMIF(SCU_NSMSTS[1]).
     * @var SCU_T::NSMSTS
     * Offset: 0x20C  Non-secure State Monitor Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CURRNS    |Current Core Processor Secure/Non-secure State (Read Only)
     * |        |          |0 = Core processor is in secure state.
     * |        |          |1 = Core processor is in non-secure state.
     * |        |          |Note: This bit can be used to monitor the current secure/non-secure state of the core processor, even if the non-secure state monitor counter is disabled.
     * |[1]     |NSMIF     |Non-secure State Monitor Interrupt Flag
     * |        |          |0 = Counter does not count down to 0 since the last NSMIF has been cleared.
     * |        |          |1 = Counter counts down to 0.
     * |        |          |Note: This bit is cleared by writing 1.
     */
    union
    {
        __IO uint32_t PNSSET[7];             /*!< [0x0000:0x0018] Peripheral Non-secure Attribution Set Register0 (0x4000_0000~0x400D_FFFF) */
        struct
        {
            __IO uint32_t PNSSET0;           /*!< [0x0000] Peripheral Non-secure Attribution Set Register0 (0x4000_0000~0x4001_FFFF)        */
            __IO uint32_t PNSSET1;           /*!< [0x0004] Peripheral Non-secure Attribution Set Register1 (0x4002_0000~0x4003_FFFF)        */
            __IO uint32_t PNSSET2;           /*!< [0x0008] Peripheral Non-secure Attribution Set Register2 (0x4004_0000~0x4005_FFFF)        */
            __IO uint32_t PNSSET3;           /*!< [0x000c] Peripheral Non-secure Attribution Set Register3 (0x4006_0000~0x4007_FFFF)        */
            __IO uint32_t PNSSET4;           /*!< [0x0010] Peripheral Non-secure Attribution Set Register4 (0x4008_0000~0x4009_FFFF)        */
            __IO uint32_t PNSSET5;           /*!< [0x0014] Peripheral Non-secure Attribution Set Register5 (0x400A_0000~0x400B_FFFF)        */
            __IO uint32_t PNSSET6;           /*!< [0x0018] Peripheral Non-secure Attribution Set Register6 (0x400C_0000~0x400D_FFFF)        */
        };
    };
    __I  uint32_t RESERVE0[1];
    __IO uint32_t SRAMNSSET;             /*!< [0x0020] SRAM Non-secure Attribution Set Register                         */
    __I  uint32_t RESERVE1[2];
    __I  uint32_t FNSADDR;               /*!< [0x002c] Flash Non-secure Boundary Address Register                       */
    __IO uint32_t SVIEN;                 /*!< [0x0030] Security Violation Interrupt Enable Register                     */
    __IO uint32_t SVINTSTS;              /*!< [0x0034] Security Violation Interrupt Status Register                     */
    __I  uint32_t RESERVE2[1];
    __I  uint32_t DFNSADDR;              /*!< [0x003c] Data Flash Non-secure Boundary Address Register                  */
    __I  uint32_t FLASHVSRC;             /*!< [0x0040] FLASH Security Policy Violation Source                           */
    __I  uint32_t FLASHVA;               /*!< [0x0044] FLASH Violation Address                                          */
    __I  uint32_t SRAM0VSRC;             /*!< [0x0048] SRAM0 Security Policy Violation Source                           */
    __I  uint32_t SRAM0VA;               /*!< [0x004c] SRAM0 Violation Address                                          */
    __I  uint32_t SRAM1VSRC;             /*!< [0x0050] SRAM1 Security Policy Violation Source                           */
    __I  uint32_t SRAM1VA;               /*!< [0x0054] SRAM1 Violation Address                                          */
    __I  uint32_t SRAM2VSRC;             /*!< [0x0058] SRAM2 Security Policy Violation Source
Note: this register is only for ECC function disable. */
    __I  uint32_t SRAM2VA;               /*!< [0x005c] SRAM2 Violation Address
Note: this register is only for ECC function disable. */
    __I  uint32_t APB0VSRC;              /*!< [0x0060] APB0 Security Policy Violation Source                            */
    __I  uint32_t APB0VA;                /*!< [0x0064] APB0 Violation Address                                           */
    __I  uint32_t APB1VSRC;              /*!< [0x0068] APB1 Security Policy Violation Source                            */
    __I  uint32_t APB1VA;                /*!< [0x006c] APB1 Violation Address                                           */
    __I  uint32_t EBIVSRC;               /*!< [0x0070] EBI Security Policy Violation Source                             */
    __I  uint32_t EBIVA;                 /*!< [0x0074] EBI Violation Address                                            */
    __I  uint32_t SYSVSRC;               /*!< [0x0078] SYS Security Policy Violation Source                             */
    __I  uint32_t SYSVA;                 /*!< [0x007c] SYS Violation Address                                            */
    __I  uint32_t FMCVSRC;               /*!< [0x0080] FMC Security Policy Violation Source                             */
    __I  uint32_t FMCVA;                 /*!< [0x0084] FMC Violation Address                                            */
    __I  uint32_t PDMA0VSRC;             /*!< [0x0088] PDMA0 Security Policy Violation Source                           */
    __I  uint32_t PDMA0VA;               /*!< [0x008c] PDMA0 Violation Address                                          */
    __I  uint32_t CRCVSRC;               /*!< [0x0090] CRC Security Policy Violation Source                             */
    __I  uint32_t CRCVA;                 /*!< [0x0094] CRC Violation Address                                            */
    __I  uint32_t CANFD0VSRC;            /*!< [0x0098] CANFD0 Security Policy Violation Source                          */
    __I  uint32_t CANFD0VA;              /*!< [0x009c] CANFD0 Violation Address                                         */
    __I  uint32_t CANFD1VSRC;            /*!< [0x00a0] CANFD1 Security Policy Violation Source                          */
    __I  uint32_t CANFD1VA;              /*!< [0x00a4] CANFD1 Violation Address                                         */
    __I  uint32_t SCUVSRC;               /*!< [0x00a8] SCU Security Policy Violation Source                             */
    __I  uint32_t SCUVA;                 /*!< [0x00ac] SCU Violation Address                                            */
    __I  uint32_t GPIOVSRC;              /*!< [0x00b0] GPIO Security Policy Violation Source                            */
    __I  uint32_t GPIOVA;                /*!< [0x00b4] GPIO Violation Address                                           */
    __I  uint32_t RESERVE3[1];
    __I  uint32_t USBHVA;                /*!< [0x00bc] USBH Violation Address                                           */
    __I  uint32_t USBHVSRC;              /*!< [0x00c0] USBH Security Policy Violation Source                            */
    __I  uint32_t RESERVE4[3];
    __I  uint32_t CACHEVSRC;             /*!< [0x00d0] CACHE Controller Security Policy Violation Source                */
    __I  uint32_t CACHEVA;               /*!< [0x00d4] CACHE Controller Violation Address                               */
    __I  uint32_t DFLASHVSRC;            /*!< [0x00d8] DFLASH Security Policy Violation Source                          */
    __I  uint32_t DFLASHVA;              /*!< [0x00dc] DFLASH Violation Address                                         */
    __I  uint32_t DFMCVSRC;              /*!< [0x00e0] DFMC Security Policy Violation Source                            */
    __I  uint32_t DFMCVA;                /*!< [0x00e4] DFMC Violation Address                                           */
    __I  uint32_t RESERVE5[2];
    __IO uint32_t SINFAEN;               /*!< [0x00f0] Shared Information Access Enable Register                        */
    __I  uint32_t RESERVE6[16];
    __IO uint32_t SCWP;                  /*!< [0x0134] Security Configuration Write Protection Register                 */
    __I  uint32_t RESERVE7[1];
    __IO uint32_t EINTNS;                /*!< [0x013c] EINT Non-secure Attribution Set Register                         */
    union
    {
        __IO uint32_t IONSSET[8];        /*!< [0x0140:0x015C] I/O Non-secure Attribution Set Register                   */
        struct
        {
            __IO uint32_t IONSSET0;      /*!< [0x0140] I/O Non-secure Attribution Set Register0                         */
            __IO uint32_t IONSSET1;      /*!< [0x0144] I/O Non-secure Attribution Set Register1                         */
            __IO uint32_t IONSSET2;      /*!< [0x0148] I/O Non-secure Attribution Set Register2                         */
            __IO uint32_t IONSSET3;      /*!< [0x014c] I/O Non-secure Attribution Set Register3                         */
            __IO uint32_t IONSSET4;      /*!< [0x0150] I/O Non-secure Attribution Set Register4                         */
            __IO uint32_t IONSSET5;      /*!< [0x0154] I/O Non-secure Attribution Set Register5                         */
            __IO uint32_t IONSSET6;      /*!< [0x0158] I/O Non-secure Attribution Set Register6                         */
            __IO uint32_t IONSSET7;      /*!< [0x015c] I/O Non-secure Attribution Set Register7                         */
        };
    };
    __I  uint32_t RESERVE8[40];
    __IO uint32_t NSMCTL;                /*!< [0x0200] Non-secure State Monitor Control Register                        */
    __IO uint32_t NSMLOAD;               /*!< [0x0204] Non-secure State Monitor Reload Value Register                   */
    __IO uint32_t NSMVAL;                /*!< [0x0208] Non-secure State Monitor Counter Value Register                  */
    __IO uint32_t NSMSTS;                /*!< [0x020c] Non-secure State Monitor Status Register                         */

} SCU_T;

/**
    @addtogroup SCU_CONST SCU Bit Field Definition
    Constant Definitions for SCU Controller
    @{
*/

#define SCU_PNSSET0_PDMA0_Pos            (8)                                               /*!< SCU_T::PNSSET0: PDMA0 Position         */
#define SCU_PNSSET0_PDMA0_Msk            (0x1UL << SCU_PNSSET0_PDMA0_Pos)                  /*!< SCU_T::PNSSET0: PDMA0 Mask             */

#define SCU_PNSSET0_USBH_Pos             (9)                                               /*!< SCU_T::PNSSET0: USBH Position          */
#define SCU_PNSSET0_USBH_Msk             (0x1UL << SCU_PNSSET0_USBH_Pos)                   /*!< SCU_T::PNSSET0: USBH Mask              */

#define SCU_PNSSET0_EBI_Pos              (16)                                              /*!< SCU_T::PNSSET0: EBI Position           */
#define SCU_PNSSET0_EBI_Msk              (0x1UL << SCU_PNSSET0_EBI_Pos)                    /*!< SCU_T::PNSSET0: EBI Mask               */

#define SCU_PNSSET1_CANFD0_Pos           (0)                                               /*!< SCU_T::PNSSET1: CANFD0 Position        */
#define SCU_PNSSET1_CANFD0_Msk           (0x1UL << SCU_PNSSET1_CANFD0_Pos)                 /*!< SCU_T::PNSSET1: CANFD0 Mask            */

#define SCU_PNSSET1_CANFD1_Pos           (4)                                               /*!< SCU_T::PNSSET1: CANFD1 Position        */
#define SCU_PNSSET1_CANFD1_Msk           (0x1UL << SCU_PNSSET1_CANFD1_Pos)                 /*!< SCU_T::PNSSET1: CANFD1 Mask            */

#define SCU_PNSSET1_CRC_Pos              (17)                                              /*!< SCU_T::PNSSET1: CRC Position           */
#define SCU_PNSSET1_CRC_Msk              (0x1UL << SCU_PNSSET1_CRC_Pos)                    /*!< SCU_T::PNSSET1: CRC Mask               */

#define SCU_PNSSET1_CACHE_Pos            (22)                                              /*!< SCU_T::PNSSET1: CACHE Position         */
#define SCU_PNSSET1_CACHE_Msk            (0x1UL << SCU_PNSSET1_CACHE_Pos)                  /*!< SCU_T::PNSSET1: CACHE Mask             */

#define SCU_PNSSET2_RTC_Pos              (1)                                               /*!< SCU_T::PNSSET2: RTC Position           */
#define SCU_PNSSET2_RTC_Msk              (0x1UL << SCU_PNSSET2_RTC_Pos)                    /*!< SCU_T::PNSSET2: RTC Mask               */

#define SCU_PNSSET2_WDT1_Pos             (2)                                               /*!< SCU_T::PNSSET2: WDT1 Position          */
#define SCU_PNSSET2_WDT1_Msk             (0x1UL << SCU_PNSSET2_WDT1_Pos)                   /*!< SCU_T::PNSSET2: WDT1 Mask              */

#define SCU_PNSSET2_EADC0_Pos            (3)                                               /*!< SCU_T::PNSSET2: EADC0 Position         */
#define SCU_PNSSET2_EADC0_Msk            (0x1UL << SCU_PNSSET2_EADC0_Pos)                  /*!< SCU_T::PNSSET2: EADC0 Mask             */

#define SCU_PNSSET2_ACMP01_Pos           (5)                                               /*!< SCU_T::PNSSET2: ACMP01 Position        */
#define SCU_PNSSET2_ACMP01_Msk           (0x1UL << SCU_PNSSET2_ACMP01_Pos)                 /*!< SCU_T::PNSSET2: ACMP01 Mask            */

#define SCU_PNSSET2_DAC_Pos              (7)                                               /*!< SCU_T::PNSSET2: DAC Position           */
#define SCU_PNSSET2_DAC_Msk              (0x1UL << SCU_PNSSET2_DAC_Pos)                    /*!< SCU_T::PNSSET2: DAC Mask               */

#define SCU_PNSSET2_EADC1_Pos            (11)                                              /*!< SCU_T::PNSSET2: EADC1 Position         */
#define SCU_PNSSET2_EADC1_Msk            (0x1UL << SCU_PNSSET2_EADC1_Pos)                  /*!< SCU_T::PNSSET2: EADC1 Mask             */

#define SCU_PNSSET2_TIMER01_Pos          (16)                                              /*!< SCU_T::PNSSET2: TIMER01 Position       */
#define SCU_PNSSET2_TIMER01_Msk          (0x1UL << SCU_PNSSET2_TIMER01_Pos)                /*!< SCU_T::PNSSET2: TIMER01 Mask           */

#define SCU_PNSSET2_TIMER23_Pos          (17)                                              /*!< SCU_T::PNSSET2: TIMER23 Position       */
#define SCU_PNSSET2_TIMER23_Msk          (0x1UL << SCU_PNSSET2_TIMER23_Pos)                /*!< SCU_T::PNSSET2: TIMER23 Mask           */

#define SCU_PNSSET2_BPWM0_Pos            (26)                                              /*!< SCU_T::PNSSET2: BPWM0 Position         */
#define SCU_PNSSET2_BPWM0_Msk            (0x1UL << SCU_PNSSET2_BPWM0_Pos)                  /*!< SCU_T::PNSSET2: BPWM0 Mask             */

#define SCU_PNSSET2_BPWM1_Pos            (27)                                              /*!< SCU_T::PNSSET2: BPWM1 Position         */
#define SCU_PNSSET2_BPWM1_Msk            (0x1UL << SCU_PNSSET2_BPWM1_Pos)                  /*!< SCU_T::PNSSET2: BPWM1 Mask             */

#define SCU_PNSSET2_PWM0_Pos             (28)                                              /*!< SCU_T::PNSSET2: PWM0 Position          */
#define SCU_PNSSET2_PWM0_Msk             (0x1UL << SCU_PNSSET2_PWM0_Pos)                   /*!< SCU_T::PNSSET2: PWM0 Mask              */

#define SCU_PNSSET2_PWM1_Pos             (29)                                              /*!< SCU_T::PNSSET2: PWM1 Position          */
#define SCU_PNSSET2_PWM1_Msk             (0x1UL << SCU_PNSSET2_PWM1_Pos)                   /*!< SCU_T::PNSSET2: PWM1 Mask              */

#define SCU_PNSSET3_QSPI0_Pos            (0)                                               /*!< SCU_T::PNSSET3: QSPI0 Position         */
#define SCU_PNSSET3_QSPI0_Msk            (0x1UL << SCU_PNSSET3_QSPI0_Pos)                  /*!< SCU_T::PNSSET3: QSPI0 Mask             */

#define SCU_PNSSET3_SPI0_Pos             (1)                                               /*!< SCU_T::PNSSET3: SPI0 Position          */
#define SCU_PNSSET3_SPI0_Msk             (0x1UL << SCU_PNSSET3_SPI0_Pos)                   /*!< SCU_T::PNSSET3: SPI0 Mask              */

#define SCU_PNSSET3_SPI1_Pos             (2)                                               /*!< SCU_T::PNSSET3: SPI1 Position          */
#define SCU_PNSSET3_SPI1_Msk             (0x1UL << SCU_PNSSET3_SPI1_Pos)                   /*!< SCU_T::PNSSET3: SPI1 Mask              */

#define SCU_PNSSET3_UART0_Pos            (16)                                              /*!< SCU_T::PNSSET3: UART0 Position         */
#define SCU_PNSSET3_UART0_Msk            (0x1UL << SCU_PNSSET3_UART0_Pos)                  /*!< SCU_T::PNSSET3: UART0 Mask             */

#define SCU_PNSSET3_UART1_Pos            (17)                                              /*!< SCU_T::PNSSET3: UART1 Position         */
#define SCU_PNSSET3_UART1_Msk            (0x1UL << SCU_PNSSET3_UART1_Pos)                  /*!< SCU_T::PNSSET3: UART1 Mask             */

#define SCU_PNSSET3_UART2_Pos            (18)                                              /*!< SCU_T::PNSSET3: UART2 Position         */
#define SCU_PNSSET3_UART2_Msk            (0x1UL << SCU_PNSSET3_UART2_Pos)                  /*!< SCU_T::PNSSET3: UART2 Mask             */

#define SCU_PNSSET3_UART3_Pos            (19)                                              /*!< SCU_T::PNSSET3: UART3 Position         */
#define SCU_PNSSET3_UART3_Msk            (0x1UL << SCU_PNSSET3_UART3_Pos)                  /*!< SCU_T::PNSSET3: UART3 Mask             */

#define SCU_PNSSET3_UART4_Pos            (20)                                              /*!< SCU_T::PNSSET3: UART4 Position         */
#define SCU_PNSSET3_UART4_Msk            (0x1UL << SCU_PNSSET3_UART4_Pos)                  /*!< SCU_T::PNSSET3: UART4 Mask             */

#define SCU_PNSSET3_UART5_Pos            (21)                                              /*!< SCU_T::PNSSET3: UART5 Position         */
#define SCU_PNSSET3_UART5_Msk            (0x1UL << SCU_PNSSET3_UART5_Pos)                  /*!< SCU_T::PNSSET3: UART5 Mask             */

#define SCU_PNSSET3_UART6_Pos            (22)                                              /*!< SCU_T::PNSSET3: UART6 Position         */
#define SCU_PNSSET3_UART6_Msk            (0x1UL << SCU_PNSSET3_UART6_Pos)                  /*!< SCU_T::PNSSET3: UART6 Mask             */

#define SCU_PNSSET3_UART7_Pos            (23)                                              /*!< SCU_T::PNSSET3: UART7 Position         */
#define SCU_PNSSET3_UART7_Msk            (0x1UL << SCU_PNSSET3_UART7_Pos)                  /*!< SCU_T::PNSSET3: UART7 Mask             */

#define SCU_PNSSET3_UART8_Pos            (24)                                              /*!< SCU_T::PNSSET3: UART8 Position         */
#define SCU_PNSSET3_UART8_Msk            (0x1UL << SCU_PNSSET3_UART8_Pos)                  /*!< SCU_T::PNSSET3: UART8 Mask             */

#define SCU_PNSSET3_UART9_Pos            (25)                                              /*!< SCU_T::PNSSET3: UART9 Position         */
#define SCU_PNSSET3_UART9_Msk            (0x1UL << SCU_PNSSET3_UART9_Pos)                  /*!< SCU_T::PNSSET3: UART9 Mask             */

#define SCU_PNSSET4_I2C0_Pos             (0)                                               /*!< SCU_T::PNSSET4: I2C0 Position          */
#define SCU_PNSSET4_I2C0_Msk             (0x1UL << SCU_PNSSET4_I2C0_Pos)                   /*!< SCU_T::PNSSET4: I2C0 Mask              */

#define SCU_PNSSET4_I2C1_Pos             (1)                                               /*!< SCU_T::PNSSET4: I2C1 Position          */
#define SCU_PNSSET4_I2C1_Msk             (0x1UL << SCU_PNSSET4_I2C1_Pos)                   /*!< SCU_T::PNSSET4: I2C1 Mask              */

#define SCU_PNSSET4_I2C2_Pos             (2)                                               /*!< SCU_T::PNSSET4: I2C2 Position          */
#define SCU_PNSSET4_I2C2_Msk             (0x1UL << SCU_PNSSET4_I2C2_Pos)                   /*!< SCU_T::PNSSET4: I2C2 Mask              */

#define SCU_PNSSET4_I3C0_Pos             (6)                                               /*!< SCU_T::PNSSET4: I3C0 Position          */
#define SCU_PNSSET4_I3C0_Msk             (0x1UL << SCU_PNSSET4_I3C0_Pos)                   /*!< SCU_T::PNSSET4: I3C0 Mask              */

#define SCU_PNSSET4_LLSI0_Pos            (8)                                               /*!< SCU_T::PNSSET4: LLSI0 Position         */
#define SCU_PNSSET4_LLSI0_Msk            (0x1UL << SCU_PNSSET4_LLSI0_Pos)                  /*!< SCU_T::PNSSET4: LLSI0 Mask             */

#define SCU_PNSSET4_LLSI1_Pos            (9)                                               /*!< SCU_T::PNSSET4: LLSI1 Position         */
#define SCU_PNSSET4_LLSI1_Msk            (0x1UL << SCU_PNSSET4_LLSI1_Pos)                  /*!< SCU_T::PNSSET4: LLSI1 Mask             */

#define SCU_PNSSET4_ELLSI0_Pos           (10)                                              /*!< SCU_T::PNSSET4: ELLSI0 Position        */
#define SCU_PNSSET4_ELLSI0_Msk           (0x1UL << SCU_PNSSET4_ELLSI0_Pos)                 /*!< SCU_T::PNSSET4: ELLSI0 Mask            */

#define SCU_PNSSET4_ELLSI1_Pos           (11)                                              /*!< SCU_T::PNSSET4: ELLSI1 Position        */
#define SCU_PNSSET4_ELLSI1_Msk           (0x1UL << SCU_PNSSET4_ELLSI1_Pos)                 /*!< SCU_T::PNSSET4: ELLSI1 Mask            */

#define SCU_PNSSET4_WWDT1_Pos            (24)                                              /*!< SCU_T::PNSSET4: WWDT1 Position         */
#define SCU_PNSSET4_WWDT1_Msk            (0x1UL << SCU_PNSSET4_WWDT1_Pos)                  /*!< SCU_T::PNSSET4: WWDT1 Mask             */

#define SCU_PNSSET5_EQEI0_Pos            (16)                                              /*!< SCU_T::PNSSET5: EQEI0 Position         */
#define SCU_PNSSET5_EQEI0_Msk            (0x1UL << SCU_PNSSET5_EQEI0_Pos)                  /*!< SCU_T::PNSSET5: EQEI0 Mask             */

#define SCU_PNSSET5_EQEI1_Pos            (17)                                              /*!< SCU_T::PNSSET5: EQEI1 Position         */
#define SCU_PNSSET5_EQEI1_Msk            (0x1UL << SCU_PNSSET5_EQEI1_Pos)                  /*!< SCU_T::PNSSET5: EQEI1 Mask             */

#define SCU_PNSSET5_ECAP0_Pos            (20)                                              /*!< SCU_T::PNSSET5: ECAP0 Position         */
#define SCU_PNSSET5_ECAP0_Msk            (0x1UL << SCU_PNSSET5_ECAP0_Pos)                  /*!< SCU_T::PNSSET5: ECAP0 Mask             */

#define SCU_PNSSET5_TRNG_Pos             (25)                                              /*!< SCU_T::PNSSET5: TRNG Position          */
#define SCU_PNSSET5_TRNG_Msk             (0x1UL << SCU_PNSSET5_TRNG_Pos)                   /*!< SCU_T::PNSSET5: TRNG Mask              */

#define SCU_PNSSET6_USBD_Pos             (0)                                               /*!< SCU_T::PNSSET6: USBD Position          */
#define SCU_PNSSET6_USBD_Msk             (0x1UL << SCU_PNSSET6_USBD_Pos)                   /*!< SCU_T::PNSSET6: USBD Mask              */

#define SCU_PNSSET6_USCI0_Pos            (16)                                              /*!< SCU_T::PNSSET6: USCI0 Position         */
#define SCU_PNSSET6_USCI0_Msk            (0x1UL << SCU_PNSSET6_USCI0_Pos)                  /*!< SCU_T::PNSSET6: USCI0 Mask             */

#define SCU_PNSSET6_USCI1_Pos            (17)                                              /*!< SCU_T::PNSSET6: USCI1 Position         */
#define SCU_PNSSET6_USCI1_Msk            (0x1UL << SCU_PNSSET6_USCI1_Pos)                  /*!< SCU_T::PNSSET6: USCI1 Mask             */

#define SCU_SRAMNSSET_SECn_Pos           (0)                                               /*!< SCU_T::SRAMNSSET: SECn Position        */
#define SCU_SRAMNSSET_SECn_Msk           (0xfffffUL << SCU_SRAMNSSET_SECn_Pos)             /*!< SCU_T::SRAMNSSET: SECn Mask            */

#define SCU_FNSADDR_FNSADDR_Pos          (0)                                               /*!< SCU_T::FNSADDR: FNSADDR Position       */
#define SCU_FNSADDR_FNSADDR_Msk          (0xffffffffUL << SCU_FNSADDR_FNSADDR_Pos)         /*!< SCU_T::FNSADDR: FNSADDR Mask           */

#define SCU_SVIEN_FLASHIEN_Pos           (0)                                               /*!< SCU_T::SVIEN: FLASHIEN Position        */
#define SCU_SVIEN_FLASHIEN_Msk           (0x1UL << SCU_SVIEN_FLASHIEN_Pos)                 /*!< SCU_T::SVIEN: FLASHIEN Mask            */

#define SCU_SVIEN_SRAM0IEN_Pos           (1)                                               /*!< SCU_T::SVIEN: SRAM0IEN Position        */
#define SCU_SVIEN_SRAM0IEN_Msk           (0x1UL << SCU_SVIEN_SRAM0IEN_Pos)                 /*!< SCU_T::SVIEN: SRAM0IEN Mask            */

#define SCU_SVIEN_SRAM1IEN_Pos           (2)                                               /*!< SCU_T::SVIEN: SRAM1IEN Position        */
#define SCU_SVIEN_SRAM1IEN_Msk           (0x1UL << SCU_SVIEN_SRAM1IEN_Pos)                 /*!< SCU_T::SVIEN: SRAM1IEN Mask            */

#define SCU_SVIEN_SRAM2IEN_Pos           (3)                                               /*!< SCU_T::SVIEN: SRAM2IEN Position        */
#define SCU_SVIEN_SRAM2IEN_Msk           (0x1UL << SCU_SVIEN_SRAM2IEN_Pos)                 /*!< SCU_T::SVIEN: SRAM2IEN Mask            */

#define SCU_SVIEN_APB0IEN_Pos            (4)                                               /*!< SCU_T::SVIEN: APB0IEN Position         */
#define SCU_SVIEN_APB0IEN_Msk            (0x1UL << SCU_SVIEN_APB0IEN_Pos)                  /*!< SCU_T::SVIEN: APB0IEN Mask             */

#define SCU_SVIEN_APB1IEN_Pos            (5)                                               /*!< SCU_T::SVIEN: APB1IEN Position         */
#define SCU_SVIEN_APB1IEN_Msk            (0x1UL << SCU_SVIEN_APB1IEN_Pos)                  /*!< SCU_T::SVIEN: APB1IEN Mask             */

#define SCU_SVIEN_EBIIEN_Pos             (6)                                               /*!< SCU_T::SVIEN: EBIIEN Position          */
#define SCU_SVIEN_EBIIEN_Msk             (0x1UL << SCU_SVIEN_EBIIEN_Pos)                   /*!< SCU_T::SVIEN: EBIIEN Mask              */

#define SCU_SVIEN_SYSIEN_Pos             (7)                                               /*!< SCU_T::SVIEN: SYSIEN Position          */
#define SCU_SVIEN_SYSIEN_Msk             (0x1UL << SCU_SVIEN_SYSIEN_Pos)                   /*!< SCU_T::SVIEN: SYSIEN Mask              */

#define SCU_SVIEN_FMCIEN_Pos             (8)                                               /*!< SCU_T::SVIEN: FMCIEN Position          */
#define SCU_SVIEN_FMCIEN_Msk             (0x1UL << SCU_SVIEN_FMCIEN_Pos)                   /*!< SCU_T::SVIEN: FMCIEN Mask              */

#define SCU_SVIEN_PDMA0IEN_Pos           (9)                                               /*!< SCU_T::SVIEN: PDMA0IEN Position        */
#define SCU_SVIEN_PDMA0IEN_Msk           (0x1UL << SCU_SVIEN_PDMA0IEN_Pos)                 /*!< SCU_T::SVIEN: PDMA0IEN Mask            */

#define SCU_SVIEN_CRCIEN_Pos             (10)                                              /*!< SCU_T::SVIEN: CRCIEN Position          */
#define SCU_SVIEN_CRCIEN_Msk             (0x1UL << SCU_SVIEN_CRCIEN_Pos)                   /*!< SCU_T::SVIEN: CRCIEN Mask              */

#define SCU_SVIEN_CANFD0IEN_Pos          (11)                                              /*!< SCU_T::SVIEN: CANFD0IEN Position       */
#define SCU_SVIEN_CANFD0IEN_Msk          (0x1UL << SCU_SVIEN_CANFD0IEN_Pos)                /*!< SCU_T::SVIEN: CANFD0IEN Mask           */

#define SCU_SVIEN_CANFD1IEN_Pos          (12)                                              /*!< SCU_T::SVIEN: CANFD1IEN Position       */
#define SCU_SVIEN_CANFD1IEN_Msk          (0x1UL << SCU_SVIEN_CANFD1IEN_Pos)                /*!< SCU_T::SVIEN: CANFD1IEN Mask           */

#define SCU_SVIEN_SCUIEN_Pos             (13)                                              /*!< SCU_T::SVIEN: SCUIEN Position          */
#define SCU_SVIEN_SCUIEN_Msk             (0x1UL << SCU_SVIEN_SCUIEN_Pos)                   /*!< SCU_T::SVIEN: SCUIEN Mask              */

#define SCU_SVIEN_GPIOIEN_Pos            (14)                                              /*!< SCU_T::SVIEN: GPIOIEN Position         */
#define SCU_SVIEN_GPIOIEN_Msk            (0x1UL << SCU_SVIEN_GPIOIEN_Pos)                  /*!< SCU_T::SVIEN: GPIOIEN Mask             */

#define SCU_SVIEN_USBHIEN_Pos            (15)                                              /*!< SCU_T::SVIEN: USBHIEN Position         */
#define SCU_SVIEN_USBHIEN_Msk            (0x1UL << SCU_SVIEN_USBHIEN_Pos)                  /*!< SCU_T::SVIEN: USBHIEN Mask             */

#define SCU_SVIEN_CACHEIEN_Pos           (18)                                              /*!< SCU_T::SVIEN: CACHEIEN Position        */
#define SCU_SVIEN_CACHEIEN_Msk           (0x1UL << SCU_SVIEN_CACHEIEN_Pos)                 /*!< SCU_T::SVIEN: CACHEIEN Mask            */

#define SCU_SVIEN_DFLASHIEN_Pos          (19)                                              /*!< SCU_T::SVIEN: DFLASHIEN Position       */
#define SCU_SVIEN_DFLASHIEN_Msk          (0x1UL << SCU_SVIEN_DFLASHIEN_Pos)                /*!< SCU_T::SVIEN: DFLASHIEN Mask           */

#define SCU_SVIEN_DFMCIEN_Pos            (20)                                              /*!< SCU_T::SVIEN: DFMCIEN Position         */
#define SCU_SVIEN_DFMCIEN_Msk            (0x1UL << SCU_SVIEN_DFMCIEN_Pos)                  /*!< SCU_T::SVIEN: DFMCIEN Mask             */

#define SCU_SVINTSTS_FLASHIF_Pos         (0)                                               /*!< SCU_T::SVINTSTS: FLASHIF Position      */
#define SCU_SVINTSTS_FLASHIF_Msk         (0x1UL << SCU_SVINTSTS_FLASHIF_Pos)               /*!< SCU_T::SVINTSTS: FLASHIF Mask          */

#define SCU_SVINTSTS_SRAM0IF_Pos         (1)                                               /*!< SCU_T::SVINTSTS: SRAM0IF Position      */
#define SCU_SVINTSTS_SRAM0IF_Msk         (0x1UL << SCU_SVINTSTS_SRAM0IF_Pos)               /*!< SCU_T::SVINTSTS: SRAM0IF Mask          */

#define SCU_SVINTSTS_SRAM1IF_Pos         (2)                                               /*!< SCU_T::SVINTSTS: SRAM1IF Position      */
#define SCU_SVINTSTS_SRAM1IF_Msk         (0x1UL << SCU_SVINTSTS_SRAM1IF_Pos)               /*!< SCU_T::SVINTSTS: SRAM1IF Mask          */

#define SCU_SVINTSTS_SRAM2IF_Pos         (3)                                               /*!< SCU_T::SVINTSTS: SRAM2IF Position      */
#define SCU_SVINTSTS_SRAM2IF_Msk         (0x1UL << SCU_SVINTSTS_SRAM2IF_Pos)               /*!< SCU_T::SVINTSTS: SRAM2IF Mask          */

#define SCU_SVINTSTS_APB0IF_Pos          (4)                                               /*!< SCU_T::SVINTSTS: APB0IF Position       */
#define SCU_SVINTSTS_APB0IF_Msk          (0x1UL << SCU_SVINTSTS_APB0IF_Pos)                /*!< SCU_T::SVINTSTS: APB0IF Mask           */

#define SCU_SVINTSTS_APB1IF_Pos          (5)                                               /*!< SCU_T::SVINTSTS: APB1IF Position       */
#define SCU_SVINTSTS_APB1IF_Msk          (0x1UL << SCU_SVINTSTS_APB1IF_Pos)                /*!< SCU_T::SVINTSTS: APB1IF Mask           */

#define SCU_SVINTSTS_EBIIF_Pos           (6)                                               /*!< SCU_T::SVINTSTS: EBIIF Position        */
#define SCU_SVINTSTS_EBIIF_Msk           (0x1UL << SCU_SVINTSTS_EBIIF_Pos)                 /*!< SCU_T::SVINTSTS: EBIIF Mask            */

#define SCU_SVINTSTS_SYSIF_Pos           (7)                                               /*!< SCU_T::SVINTSTS: SYSIF Position        */
#define SCU_SVINTSTS_SYSIF_Msk           (0x1UL << SCU_SVINTSTS_SYSIF_Pos)                 /*!< SCU_T::SVINTSTS: SYSIF Mask            */

#define SCU_SVINTSTS_FMCIF_Pos           (8)                                               /*!< SCU_T::SVINTSTS: FMCIF Position        */
#define SCU_SVINTSTS_FMCIF_Msk           (0x1UL << SCU_SVINTSTS_FMCIF_Pos)                 /*!< SCU_T::SVINTSTS: FMCIF Mask            */

#define SCU_SVINTSTS_PDMA0IF_Pos         (9)                                               /*!< SCU_T::SVINTSTS: PDMA0IF Position      */
#define SCU_SVINTSTS_PDMA0IF_Msk         (0x1UL << SCU_SVINTSTS_PDMA0IF_Pos)               /*!< SCU_T::SVINTSTS: PDMA0IF Mask          */

#define SCU_SVINTSTS_CRCIF_Pos           (10)                                              /*!< SCU_T::SVINTSTS: CRCIF Position        */
#define SCU_SVINTSTS_CRCIF_Msk           (0x1UL << SCU_SVINTSTS_CRCIF_Pos)                 /*!< SCU_T::SVINTSTS: CRCIF Mask            */

#define SCU_SVINTSTS_CANFD0IF_Pos        (11)                                              /*!< SCU_T::SVINTSTS: CANFD0IF Position     */
#define SCU_SVINTSTS_CANFD0IF_Msk        (0x1UL << SCU_SVINTSTS_CANFD0IF_Pos)              /*!< SCU_T::SVINTSTS: CANFD0IF Mask         */

#define SCU_SVINTSTS_CANFD1IF_Pos        (12)                                              /*!< SCU_T::SVINTSTS: CANFD1IF Position     */
#define SCU_SVINTSTS_CANFD1IF_Msk        (0x1UL << SCU_SVINTSTS_CANFD1IF_Pos)              /*!< SCU_T::SVINTSTS: CANFD1IF Mask         */

#define SCU_SVINTSTS_SCUIF_Pos           (13)                                              /*!< SCU_T::SVINTSTS: SCUIF Position        */
#define SCU_SVINTSTS_SCUIF_Msk           (0x1UL << SCU_SVINTSTS_SCUIF_Pos)                 /*!< SCU_T::SVINTSTS: SCUIF Mask            */

#define SCU_SVINTSTS_GPIOIF_Pos          (14)                                              /*!< SCU_T::SVINTSTS: GPIOIF Position       */
#define SCU_SVINTSTS_GPIOIF_Msk          (0x1UL << SCU_SVINTSTS_GPIOIF_Pos)                /*!< SCU_T::SVINTSTS: GPIOIF Mask           */

#define SCU_SVINTSTS_USBHIF_Pos          (15)                                              /*!< SCU_T::SVINTSTS: USBHIF Position       */
#define SCU_SVINTSTS_USBHIF_Msk          (0x1UL << SCU_SVINTSTS_USBHIF_Pos)                /*!< SCU_T::SVINTSTS: USBHIF Mask           */

#define SCU_SVINTSTS_CACHEIF_Pos         (18)                                              /*!< SCU_T::SVINTSTS: CACHEIF Position      */
#define SCU_SVINTSTS_CACHEIF_Msk         (0x1UL << SCU_SVINTSTS_CACHEIF_Pos)               /*!< SCU_T::SVINTSTS: CACHEIF Mask          */

#define SCU_SVINTSTS_DFLASHIF_Pos        (19)                                              /*!< SCU_T::SVINTSTS: DFLASHIF Position     */
#define SCU_SVINTSTS_DFLASHIF_Msk        (0x1UL << SCU_SVINTSTS_DFLASHIF_Pos)              /*!< SCU_T::SVINTSTS: DFLASHIF Mask         */

#define SCU_SVINTSTS_DFMCIF_Pos          (20)                                              /*!< SCU_T::SVINTSTS: DFMCIF Position       */
#define SCU_SVINTSTS_DFMCIF_Msk          (0x1UL << SCU_SVINTSTS_DFMCIF_Pos)                /*!< SCU_T::SVINTSTS: DFMCIF Mask           */

#define SCU_DFNSADDR_DFNSADDR_Pos        (0)                                               /*!< SCU_T::DFNSADDR: DFNSADDR Position     */
#define SCU_DFNSADDR_DFNSADDR_Msk        (0xfUL << SCU_DFNSADDR_DFNSADDR_Pos)              /*!< SCU_T::DFNSADDR: DFNSADDR Mask         */

#define SCU_DFNSADDR_DFNS_EE_Pos         (31)                                              /*!< SCU_T::DFNSADDR: DFNS_EE Position      */
#define SCU_DFNSADDR_DFNS_EE_Msk         (0x1UL << SCU_DFNSADDR_DFNS_EE_Pos)               /*!< SCU_T::DFNSADDR: DFNS_EE Mask          */

#define SCU_FLASHVSRC_MASTER_Pos         (0)                                               /*!< SCU_T::FLASHVSRC: MASTER Position      */
#define SCU_FLASHVSRC_MASTER_Msk         (0xfUL << SCU_FLASHVSRC_MASTER_Pos)               /*!< SCU_T::FLASHVSRC: MASTER Mask          */

#define SCU_FLASHVA_VIOADDR_Pos          (0)                                               /*!< SCU_T::FLASHVA: VIOADDR Position       */
#define SCU_FLASHVA_VIOADDR_Msk          (0xffffffffUL << SCU_FLASHVA_VIOADDR_Pos)         /*!< SCU_T::FLASHVA: VIOADDR Mask           */

#define SCU_SRAM0VSRC_MASTER_Pos         (0)                                               /*!< SCU_T::SRAM0VSRC: MASTER Position      */
#define SCU_SRAM0VSRC_MASTER_Msk         (0xfUL << SCU_SRAM0VSRC_MASTER_Pos)               /*!< SCU_T::SRAM0VSRC: MASTER Mask          */

#define SCU_SRAM0VA_VIOADDR_Pos          (0)                                               /*!< SCU_T::SRAM0VA: VIOADDR Position       */
#define SCU_SRAM0VA_VIOADDR_Msk          (0xffffffffUL << SCU_SRAM0VA_VIOADDR_Pos)         /*!< SCU_T::SRAM0VA: VIOADDR Mask           */

#define SCU_SRAM1VSRC_MASTER_Pos         (0)                                               /*!< SCU_T::SRAM1VSRC: MASTER Position      */
#define SCU_SRAM1VSRC_MASTER_Msk         (0xfUL << SCU_SRAM1VSRC_MASTER_Pos)               /*!< SCU_T::SRAM1VSRC: MASTER Mask          */

#define SCU_SRAM1VA_VIOADDR_Pos          (0)                                               /*!< SCU_T::SRAM1VA: VIOADDR Position       */
#define SCU_SRAM1VA_VIOADDR_Msk          (0xffffffffUL << SCU_SRAM1VA_VIOADDR_Pos)         /*!< SCU_T::SRAM1VA: VIOADDR Mask           */

#define SCU_SRAM2VSRC_MASTER_Pos         (0)                                               /*!< SCU_T::SRAM2VSRC: MASTER Position      */
#define SCU_SRAM2VSRC_MASTER_Msk         (0xfUL << SCU_SRAM2VSRC_MASTER_Pos)               /*!< SCU_T::SRAM2VSRC: MASTER Mask          */

#define SCU_SRAM2VA_VIOADDR_Pos          (0)                                               /*!< SCU_T::SRAM2VA: VIOADDR Position       */
#define SCU_SRAM2VA_VIOADDR_Msk          (0xffffffffUL << SCU_SRAM2VA_VIOADDR_Pos)         /*!< SCU_T::SRAM2VA: VIOADDR Mask           */

#define SCU_APB0VSRC_MASTER_Pos          (0)                                               /*!< SCU_T::APB0VSRC: MASTER Position       */
#define SCU_APB0VSRC_MASTER_Msk          (0xfUL << SCU_APB0VSRC_MASTER_Pos)                /*!< SCU_T::APB0VSRC: MASTER Mask           */

#define SCU_APB0VA_VIOADDR_Pos           (0)                                               /*!< SCU_T::APB0VA: VIOADDR Position        */
#define SCU_APB0VA_VIOADDR_Msk           (0xffffffffUL << SCU_APB0VA_VIOADDR_Pos)          /*!< SCU_T::APB0VA: VIOADDR Mask            */

#define SCU_APB1VSRC_MASTER_Pos          (0)                                               /*!< SCU_T::APB1VSRC: MASTER Position       */
#define SCU_APB1VSRC_MASTER_Msk          (0xfUL << SCU_APB1VSRC_MASTER_Pos)                /*!< SCU_T::APB1VSRC: MASTER Mask           */

#define SCU_APB1VA_VIOADDR_Pos           (0)                                               /*!< SCU_T::APB1VA: VIOADDR Position        */
#define SCU_APB1VA_VIOADDR_Msk           (0xffffffffUL << SCU_APB1VA_VIOADDR_Pos)          /*!< SCU_T::APB1VA: VIOADDR Mask            */

#define SCU_EBIVSRC_MASTER_Pos           (0)                                               /*!< SCU_T::EBIVSRC: MASTER Position        */
#define SCU_EBIVSRC_MASTER_Msk           (0xfUL << SCU_EBIVSRC_MASTER_Pos)                 /*!< SCU_T::EBIVSRC: MASTER Mask            */

#define SCU_EBIVA_VIOADDR_Pos            (0)                                               /*!< SCU_T::EBIVA: VIOADDR Position         */
#define SCU_EBIVA_VIOADDR_Msk            (0xffffffffUL << SCU_EBIVA_VIOADDR_Pos)           /*!< SCU_T::EBIVA: VIOADDR Mask             */

#define SCU_SYSVSRC_MASTER_Pos           (0)                                               /*!< SCU_T::SYSVSRC: MASTER Position        */
#define SCU_SYSVSRC_MASTER_Msk           (0xfUL << SCU_SYSVSRC_MASTER_Pos)                 /*!< SCU_T::SYSVSRC: MASTER Mask            */

#define SCU_SYSVA_VIOADDR_Pos            (0)                                               /*!< SCU_T::SYSVA: VIOADDR Position         */
#define SCU_SYSVA_VIOADDR_Msk            (0xffffffffUL << SCU_SYSVA_VIOADDR_Pos)           /*!< SCU_T::SYSVA: VIOADDR Mask             */

#define SCU_FMCVSRC_MASTER_Pos           (0)                                               /*!< SCU_T::FMCVSRC: MASTER Position        */
#define SCU_FMCVSRC_MASTER_Msk           (0xfUL << SCU_FMCVSRC_MASTER_Pos)                 /*!< SCU_T::FMCVSRC: MASTER Mask            */

#define SCU_FMCVA_VIOADDR_Pos            (0)                                               /*!< SCU_T::FMCVA: VIOADDR Position         */
#define SCU_FMCVA_VIOADDR_Msk            (0xffffffffUL << SCU_FMCVA_VIOADDR_Pos)           /*!< SCU_T::FMCVA: VIOADDR Mask             */

#define SCU_PDMA0VSRC_MASTER_Pos         (0)                                               /*!< SCU_T::PDMA0VSRC: MASTER Position      */
#define SCU_PDMA0VSRC_MASTER_Msk         (0xfUL << SCU_PDMA0VSRC_MASTER_Pos)               /*!< SCU_T::PDMA0VSRC: MASTER Mask          */

#define SCU_PDMA0VA_VIOADDR_Pos          (0)                                               /*!< SCU_T::PDMA0VA: VIOADDR Position       */
#define SCU_PDMA0VA_VIOADDR_Msk          (0xffffffffUL << SCU_PDMA0VA_VIOADDR_Pos)         /*!< SCU_T::PDMA0VA: VIOADDR Mask           */

#define SCU_CRCVSRC_MASTER_Pos           (0)                                               /*!< SCU_T::CRCVSRC: MASTER Position        */
#define SCU_CRCVSRC_MASTER_Msk           (0xfUL << SCU_CRCVSRC_MASTER_Pos)                 /*!< SCU_T::CRCVSRC: MASTER Mask            */

#define SCU_CRCVA_VIOADDR_Pos            (0)                                               /*!< SCU_T::CRCVA: VIOADDR Position         */
#define SCU_CRCVA_VIOADDR_Msk            (0xffffffffUL << SCU_CRCVA_VIOADDR_Pos)           /*!< SCU_T::CRCVA: VIOADDR Mask             */

#define SCU_CANFD0VSRC_MASTER_Pos        (0)                                               /*!< SCU_T::CANFD0VSRC: MASTER Position     */
#define SCU_CANFD0VSRC_MASTER_Msk        (0xfUL << SCU_CANFD0VSRC_MASTER_Pos)              /*!< SCU_T::CANFD0VSRC: MASTER Mask         */

#define SCU_CANFD0VA_VIOADDR_Pos         (0)                                               /*!< SCU_T::CANFD0VA: VIOADDR Position      */
#define SCU_CANFD0VA_VIOADDR_Msk         (0xffffffffUL << SCU_CANFD0VA_VIOADDR_Pos)        /*!< SCU_T::CANFD0VA: VIOADDR Mask          */

#define SCU_CANFD1VSRC_MASTER_Pos        (0)                                               /*!< SCU_T::CANFD1VSRC: MASTER Position     */
#define SCU_CANFD1VSRC_MASTER_Msk        (0xfUL << SCU_CANFD1VSRC_MASTER_Pos)              /*!< SCU_T::CANFD1VSRC: MASTER Mask         */

#define SCU_CANFD1VA_VIOADDR_Pos         (0)                                               /*!< SCU_T::CANFD1VA: VIOADDR Position      */
#define SCU_CANFD1VA_VIOADDR_Msk         (0xffffffffUL << SCU_CANFD1VA_VIOADDR_Pos)        /*!< SCU_T::CANFD1VA: VIOADDR Mask          */

#define SCU_SCUVSRC_MASTER_Pos           (0)                                               /*!< SCU_T::SCUVSRC: MASTER Position        */
#define SCU_SCUVSRC_MASTER_Msk           (0xfUL << SCU_SCUVSRC_MASTER_Pos)                 /*!< SCU_T::SCUVSRC: MASTER Mask            */

#define SCU_SCUVA_VIOADDR_Pos            (0)                                               /*!< SCU_T::SCUVA: VIOADDR Position         */
#define SCU_SCUVA_VIOADDR_Msk            (0xffffffffUL << SCU_SCUVA_VIOADDR_Pos)           /*!< SCU_T::SCUVA: VIOADDR Mask             */

#define SCU_GPIOVSRC_MASTER_Pos          (0)                                               /*!< SCU_T::GPIOVSRC: MASTER Position       */
#define SCU_GPIOVSRC_MASTER_Msk          (0xfUL << SCU_GPIOVSRC_MASTER_Pos)                /*!< SCU_T::GPIOVSRC: MASTER Mask           */

#define SCU_GPIOVA_VIOADDR_Pos           (0)                                               /*!< SCU_T::GPIOVA: VIOADDR Position        */
#define SCU_GPIOVA_VIOADDR_Msk           (0xffffffffUL << SCU_GPIOVA_VIOADDR_Pos)          /*!< SCU_T::GPIOVA: VIOADDR Mask            */

#define SCU_USBHVA_VIOADDR_Pos           (0)                                               /*!< SCU_T::USBHVA: VIOADDR Position        */
#define SCU_USBHVA_VIOADDR_Msk           (0xffffffffUL << SCU_USBHVA_VIOADDR_Pos)          /*!< SCU_T::USBHVA: VIOADDR Mask            */

#define SCU_USBHVSRC_MASTER_Pos          (0)                                               /*!< SCU_T::USBHVSRC: MASTER Position       */
#define SCU_USBHVSRC_MASTER_Msk          (0xfUL << SCU_USBHVSRC_MASTER_Pos)                /*!< SCU_T::USBHVSRC: MASTER Mask           */

#define SCU_CACHEVSRC_MASTER_Pos         (0)                                               /*!< SCU_T::CACHEVSRC: MASTER Position      */
#define SCU_CACHEVSRC_MASTER_Msk         (0xfUL << SCU_CACHEVSRC_MASTER_Pos)               /*!< SCU_T::CACHEVSRC: MASTER Mask          */

#define SCU_CACHEVA_VIOADDR_Pos          (0)                                               /*!< SCU_T::CACHEVA: VIOADDR Position       */
#define SCU_CACHEVA_VIOADDR_Msk          (0xffffffffUL << SCU_CACHEVA_VIOADDR_Pos)         /*!< SCU_T::CACHEVA: VIOADDR Mask           */

#define SCU_DFLASHVSRC_MASTER_Pos        (0)                                               /*!< SCU_T::DFLASHVSRC: MASTER Position     */
#define SCU_DFLASHVSRC_MASTER_Msk        (0xfUL << SCU_DFLASHVSRC_MASTER_Pos)              /*!< SCU_T::DFLASHVSRC: MASTER Mask         */

#define SCU_DFLASHVA_VIOADDR_Pos         (0)                                               /*!< SCU_T::DFLASHVA: VIOADDR Position      */
#define SCU_DFLASHVA_VIOADDR_Msk         (0xffffffffUL << SCU_DFLASHVA_VIOADDR_Pos)        /*!< SCU_T::DFLASHVA: VIOADDR Mask          */

#define SCU_DFMCVSRC_MASTER_Pos          (0)                                               /*!< SCU_T::DFMCVSRC: MASTER Position       */
#define SCU_DFMCVSRC_MASTER_Msk          (0xfUL << SCU_DFMCVSRC_MASTER_Pos)                /*!< SCU_T::DFMCVSRC: MASTER Mask           */

#define SCU_DFMCVA_VIOADDR_Pos           (0)                                               /*!< SCU_T::DFMCVA: VIOADDR Position        */
#define SCU_DFMCVA_VIOADDR_Msk           (0xffffffffUL << SCU_DFMCVA_VIOADDR_Pos)          /*!< SCU_T::DFMCVA: VIOADDR Mask            */

#define SCU_SINFAEN_SCUSIAEN_Pos         (0)                                               /*!< SCU_T::SINFAEN: SCUSIAEN Position      */
#define SCU_SINFAEN_SCUSIAEN_Msk         (0x1UL << SCU_SINFAEN_SCUSIAEN_Pos)               /*!< SCU_T::SINFAEN: SCUSIAEN Mask          */

#define SCU_SINFAEN_SYSSIAEN_Pos         (1)                                               /*!< SCU_T::SINFAEN: SYSSIAEN Position      */
#define SCU_SINFAEN_SYSSIAEN_Msk         (0x1UL << SCU_SINFAEN_SYSSIAEN_Pos)               /*!< SCU_T::SINFAEN: SYSSIAEN Mask          */

#define SCU_SINFAEN_FMCSIAEN_Pos         (2)                                               /*!< SCU_T::SINFAEN: FMCSIAEN Position      */
#define SCU_SINFAEN_FMCSIAEN_Msk         (0x1UL << SCU_SINFAEN_FMCSIAEN_Pos)               /*!< SCU_T::SINFAEN: FMCSIAEN Mask          */

#define SCU_SINFAEN_DFMCSIAEN_Pos        (3)                                               /*!< SCU_T::SINFAEN: DFMCSIAEN Position     */
#define SCU_SINFAEN_DFMCSIAEN_Msk        (0x1UL << SCU_SINFAEN_DFMCSIAEN_Pos)              /*!< SCU_T::SINFAEN: DFMCSIAEN Mask         */

#define SCU_SCWP_LOCK_Pos                (1)                                               /*!< SCU_T::SCWP: LOCK Position             */
#define SCU_SCWP_LOCK_Msk                (0x1UL << SCU_SCWP_LOCK_Pos)                      /*!< SCU_T::SCWP: LOCK Mask                 */

#define SCU_SCWP_WVCODE_Pos              (16)                                              /*!< SCU_T::SCWP: WVCODE Position           */
#define SCU_SCWP_WVCODE_Msk              (0xffffUL << SCU_SCWP_WVCODE_Pos)                 /*!< SCU_T::SCWP: WVCODE Mask               */

#define SCU_EINTNS_EINT0_Pos             (0)                                               /*!< SCU_T::EINTNS: EINT0 Position          */
#define SCU_EINTNS_EINT0_Msk             (0x1UL << SCU_EINTNS_EINT0_Pos)                   /*!< SCU_T::EINTNS: EINT0 Mask              */

#define SCU_EINTNS_EINT1_Pos             (1)                                               /*!< SCU_T::EINTNS: EINT1 Position          */
#define SCU_EINTNS_EINT1_Msk             (0x1UL << SCU_EINTNS_EINT1_Pos)                   /*!< SCU_T::EINTNS: EINT1 Mask              */

#define SCU_EINTNS_EINT2_Pos             (2)                                               /*!< SCU_T::EINTNS: EINT2 Position          */
#define SCU_EINTNS_EINT2_Msk             (0x1UL << SCU_EINTNS_EINT2_Pos)                   /*!< SCU_T::EINTNS: EINT2 Mask              */

#define SCU_EINTNS_EINT3_Pos             (3)                                               /*!< SCU_T::EINTNS: EINT3 Position          */
#define SCU_EINTNS_EINT3_Msk             (0x1UL << SCU_EINTNS_EINT3_Pos)                   /*!< SCU_T::EINTNS: EINT3 Mask              */

#define SCU_EINTNS_EINT4_Pos             (4)                                               /*!< SCU_T::EINTNS: EINT4 Position          */
#define SCU_EINTNS_EINT4_Msk             (0x1UL << SCU_EINTNS_EINT4_Pos)                   /*!< SCU_T::EINTNS: EINT4 Mask              */

#define SCU_EINTNS_EINT5_Pos             (5)                                               /*!< SCU_T::EINTNS: EINT5 Position          */
#define SCU_EINTNS_EINT5_Msk             (0x1UL << SCU_EINTNS_EINT5_Pos)                   /*!< SCU_T::EINTNS: EINT5 Mask              */

#define SCU_EINTNS_EINT6_Pos             (6)                                               /*!< SCU_T::EINTNS: EINT6 Position          */
#define SCU_EINTNS_EINT6_Msk             (0x1UL << SCU_EINTNS_EINT6_Pos)                   /*!< SCU_T::EINTNS: EINT6 Mask              */

#define SCU_EINTNS_EINT7_Pos             (7)                                               /*!< SCU_T::EINTNS: EINT7 Position          */
#define SCU_EINTNS_EINT7_Msk             (0x1UL << SCU_EINTNS_EINT7_Pos)                   /*!< SCU_T::EINTNS: EINT7 Mask              */

#define SCU_IONSSET0_PA_Pos              (0)                                               /*!< SCU_T::IONSSET0: PA Position           */
#define SCU_IONSSET0_PA_Msk              (0xffffUL << SCU_IONSSET0_PA_Pos)                 /*!< SCU_T::IONSSET0: PA Mask               */

#define SCU_IONSSET1_PB_Pos              (0)                                               /*!< SCU_T::IONSSET1: PB Position           */
#define SCU_IONSSET1_PB_Msk              (0xffffUL << SCU_IONSSET1_PB_Pos)                 /*!< SCU_T::IONSSET1: PB Mask               */

#define SCU_IONSSET2_PC_Pos              (0)                                               /*!< SCU_T::IONSSET2: PC Position           */
#define SCU_IONSSET2_PC_Msk              (0xffffUL << SCU_IONSSET2_PC_Pos)                 /*!< SCU_T::IONSSET2: PC Mask               */

#define SCU_IONSSET3_PD_Pos              (0)                                               /*!< SCU_T::IONSSET3: PD Position           */
#define SCU_IONSSET3_PD_Msk              (0xffffUL << SCU_IONSSET3_PD_Pos)                 /*!< SCU_T::IONSSET3: PD Mask               */

#define SCU_IONSSET4_PE_Pos              (0)                                               /*!< SCU_T::IONSSET4: PE Position           */
#define SCU_IONSSET4_PE_Msk              (0xffffUL << SCU_IONSSET4_PE_Pos)                 /*!< SCU_T::IONSSET4: PE Mask               */

#define SCU_IONSSET5_PF_Pos              (0)                                               /*!< SCU_T::IONSSET5: PF Position           */
#define SCU_IONSSET5_PF_Msk              (0xffffUL << SCU_IONSSET5_PF_Pos)                 /*!< SCU_T::IONSSET5: PF Mask               */

#define SCU_IONSSET6_PG_Pos              (0)                                               /*!< SCU_T::IONSSET6: PG Position           */
#define SCU_IONSSET6_PG_Msk              (0xffffUL << SCU_IONSSET6_PG_Pos)                 /*!< SCU_T::IONSSET6: PG Mask               */

#define SCU_IONSSET7_PH_Pos              (0)                                               /*!< SCU_T::IONSSET7: PH Position           */
#define SCU_IONSSET7_PH_Msk              (0xffffUL << SCU_IONSSET7_PH_Pos)                 /*!< SCU_T::IONSSET7: PH Mask               */

#define SCU_NSMCTL_PRESCALE_Pos          (0)                                               /*!< SCU_T::NSMCTL: PRESCALE Position       */
#define SCU_NSMCTL_PRESCALE_Msk          (0xffUL << SCU_NSMCTL_PRESCALE_Pos)               /*!< SCU_T::NSMCTL: PRESCALE Mask           */

#define SCU_NSMCTL_NSMIEN_Pos            (8)                                               /*!< SCU_T::NSMCTL: NSMIEN Position         */
#define SCU_NSMCTL_NSMIEN_Msk            (0x1UL << SCU_NSMCTL_NSMIEN_Pos)                  /*!< SCU_T::NSMCTL: NSMIEN Mask             */

#define SCU_NSMCTL_AUTORLD_Pos           (9)                                               /*!< SCU_T::NSMCTL: AUTORLD Position        */
#define SCU_NSMCTL_AUTORLD_Msk           (0x1UL << SCU_NSMCTL_AUTORLD_Pos)                 /*!< SCU_T::NSMCTL: AUTORLD Mask            */

#define SCU_NSMCTL_TMRMOD_Pos            (10)                                              /*!< SCU_T::NSMCTL: TMRMOD Position         */
#define SCU_NSMCTL_TMRMOD_Msk            (0x1UL << SCU_NSMCTL_TMRMOD_Pos)                  /*!< SCU_T::NSMCTL: TMRMOD Mask             */

#define SCU_NSMCTL_IDLEON_Pos            (12)                                              /*!< SCU_T::NSMCTL: IDLEON Position         */
#define SCU_NSMCTL_IDLEON_Msk            (0x1UL << SCU_NSMCTL_IDLEON_Pos)                  /*!< SCU_T::NSMCTL: IDLEON Mask             */

#define SCU_NSMCTL_DBGON_Pos             (13)                                              /*!< SCU_T::NSMCTL: DBGON Position          */
#define SCU_NSMCTL_DBGON_Msk             (0x1UL << SCU_NSMCTL_DBGON_Pos)                   /*!< SCU_T::NSMCTL: DBGON Mask              */

#define SCU_NSMLOAD_RELOAD_Pos           (0)                                               /*!< SCU_T::NSMLOAD: RELOAD Position        */
#define SCU_NSMLOAD_RELOAD_Msk           (0xffffffUL << SCU_NSMLOAD_RELOAD_Pos)            /*!< SCU_T::NSMLOAD: RELOAD Mask            */

#define SCU_NSMVAL_VALUE_Pos             (0)                                               /*!< SCU_T::NSMVAL: VALUE Position          */
#define SCU_NSMVAL_VALUE_Msk             (0xffffffUL << SCU_NSMVAL_VALUE_Pos)              /*!< SCU_T::NSMVAL: VALUE Mask              */

#define SCU_NSMSTS_CURRNS_Pos            (0)                                               /*!< SCU_T::NSMSTS: CURRNS Position         */
#define SCU_NSMSTS_CURRNS_Msk            (0x1UL << SCU_NSMSTS_CURRNS_Pos)                  /*!< SCU_T::NSMSTS: CURRNS Mask             */

#define SCU_NSMSTS_NSMIF_Pos             (1)                                               /*!< SCU_T::NSMSTS: NSMIF Position          */
#define SCU_NSMSTS_NSMIF_Msk             (0x1UL << SCU_NSMSTS_NSMIF_Pos)                   /*!< SCU_T::NSMSTS: NSMIF Mask              */

/**@}*/ /* end of SCU_CONST group */
/**@}*/ /* end of SCU register group */
/**@}*/ /* end of REGISTER group */

#if defined ( __CC_ARM   )
    #pragma no_anon_unions
#endif

#endif /* __SCU_REG_H__ */
