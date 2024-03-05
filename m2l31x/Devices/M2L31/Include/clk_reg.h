/**************************************************************************//**
 * @file     clk_reg.h
 * @version  V1.00
 * @brief    CLK register definition header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __CLK_REG_H__
#define __CLK_REG_H__

#if defined ( __CC_ARM   )
    #pragma anon_unions
#endif

/**
   @addtogroup REGISTER Control Register
   @{
*/

/**
    @addtogroup CLK System Clock Controller (CLK)
    Memory Mapped Structure for CLK Controller
@{ */

typedef struct
{


/**
 * @var CLK_T::PWRCTL
 * Offset: 0x00  System Power-down Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |HXTEN     |HXT Enable Bit (Write Protect)
 * |        |          |0 = 4~32 MHz external high speed crystal (HXT) Disabled.
 * |        |          |1 = 4~32 MHz external high speed crystal (HXT) Enabled.
 * |        |          |Note 1: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |        |          |Note 2: When HXT is enabled, PF.2(XT1_OUT) and PF.3(XT1_IN) must be set as input mode.
 * |[1]     |LXTEN     |LXT Enable Bit (Write Protect)
 * |        |          |0 = 32.768 kHz external low speed crystal (LXT) Disabled.
 * |        |          |1 = 32.768 kHz external low speed crystal (LXT) Enabled.
 * |        |          |Note 1: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |        |          |Note 2: When LXT is enabled, PF.4(X32_OUT) and PF.5(X32_IN) must be set as input mode.
 * |[2]     |HIRCEN    |HIRC Enable Bit (Write Protect)
 * |        |          |0 = 12 MHz internal high speed RC oscillator (HIRC) Disabled.
 * |        |          |1 = 12 MHz internal high speed RC oscillator (HIRC) Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[3]     |LIRCEN    |LIRC Enable Bit (Write Protect)
 * |        |          |0 = 32 kHz internal low speed RC oscillator (LIRC) Disabled.
 * |        |          |1 = 32 kHz internal low speed RC oscillator (LIRC) Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[5]     |PDWKIEN   |Power-down Mode Wake-up Interrupt Enable Bit (Write Protect)
 * |        |          |0 = Power-down mode wake-up interrupt Disabled.
 * |        |          |1 = Power-down mode wake-up interrupt Enabled.
 * |        |          |Note 1: The interrupt will occur when both PDWKIF and PDWKIEN are high.
 * |        |          |Note 2: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[6]     |PDWKIF    |Power-down Mode Wake-up Interrupt Status
 * |        |          |Set by "Power-down wake-up event", it indicates that resume from Power-down mode.
 * |        |          |The flag is set if any wake-up source is occurred. Refer Power Modes and Wake-up Sources chapter.
 * |        |          |Note 1: Write 1 to clear the bit to 0.
 * |        |          |Note 2: This bit works only if PDWKIEN (CLK_PWRCTL[5]) set to 1.
 * |[7]     |PDEN      |System Power-down Enable (Write Protect)
 * |        |          |When this bit is set to 1, Power-down mode is enabled and chip keeps active till the CPU sleep mode is also active and then the chip enters Power-down mode.
 * |        |          |When chip wakes up from Power-down mode, this bit is auto cleared
 * |        |          |Users need to set this bit again for next Power-down.
 * |        |          |In Power-down mode, HXT, HIRC and the HIRC48M will be disabled in this mode, but LXT and LIRC are not controlled by Power-down mode.
 * |        |          |In Power-down mode, the PLL and system clock are disabled, and ignored the clock source selection
 * |        |          |The clocks of peripheral are not controlled by Power-down mode, if the peripheral clock source is from LXT or LIRC.
 * |        |          |0 = Chip will not enter Power-down mode after CPU sleep command WFI.
 * |        |          |1 = Chip enters Power-down mode after CPU sleep command WFI.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[12]    |HXTSELTYP |HXT Crystal Type Select Bit (Write Protect)
 * |        |          |0 = Select INV type.
 * |        |          |1 = Select GM type.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[15:14] |HIRC48MSTBS|HIRC48M Stable Count Select (Write Protect )
 * |        |          |00 = HIRC48M stable count is 1024 clocks.
 * |        |          |01 = HIRC48M stable count is 512 clocks.
 * |        |          |Others = Reserved.
 * |        |          |Note: Thes bits are write protected. Refer to the SYS_REGLCTL register.
 * |[17:16] |HIRCSTBS  |HIRC Stable Count Select (Write Protect )
 * |        |          |00 = HIRC stable count is 64 clocks.
 * |        |          |01 = HIRC stable count is 24 clocks.
 * |        |          |Others = Reserved.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |[18]    |HIRC48MEN |HIRC48M Enable Bit (Write Protect)
 * |        |          |0 = 48 MHz internal high speed RC oscillator (HIRC48M) Disabled.
 * |        |          |1 = 48 MHz internal high speed RC oscillator (HIRC48M) Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[22:20] |HXTGAIN   |HXT Gain Control Bit (Write Protect)
 * |        |          |Gain control is used to enlarge the gain of crystal to make sure crystal work normally
 * |        |          |If gain control is enabled, crystal will consume more power than gain control off.
 * |        |          |000 = HXT frequency is from 1 MHz to 4 MHz.
 * |        |          |001 = HXT frequency is from 8 MHz to 12 MHz.
 * |        |          |010 = HXT frequency is from 12 MHz to 16 MHz.
 * |        |          |011 = HXT frequency is from 16 MHz to 24 MHz.
 * |        |          |100 = HXT frequency is from 24 MHz to 32 MHz.
 * |        |          |101 = Reserved.
 * |        |          |110 = Reserved.
 * |        |          |111 = Reserved.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |[25:24] |MIRCSTBS  |MIRC Stable Count Select (Write Protect )
 * |        |          |00 = MIRC stable count is 128 clocks.
 * |        |          |01 = MIRC stable count is 32 clocks.
 * |        |          |Others = Reserved.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |[26]    |MIRCEN    |MIRC Enable Bit (Write Protect)
 * |        |          |0 = 1/2/4/8 MHz internal multiple speed RC oscillator (MIRC) Disabled.
 * |        |          |1 = 1/2/4/8 MHz internal multiple speed RC oscillator (MIRC) Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[30:28] |MIRCFSEL  |MIRC Frequency Select Bits (Write Protect)
 * |        |          |000 = Internal middle speed RC oscillator frerquency is 1 MHz.
 * |        |          |001 = Internal middle speed RC oscillator frerquency is 2 MHz.
 * |        |          |010 = Internal middle speed RC oscillator frerquency is 4 MHz.
 * |        |          |011 = Internal middle speed RC oscillator frerquency is 8 MHz.
 * |        |          |Others = Reserved.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[31]    |HXTMD     |HXT Bypass Mode (Write Protect)
 * |        |          |0 = HXT work as crystal mode. PF.2 and PF.3 are configured as external high speed crystal (HXT) pins.
 * |        |          |1 = HXT works as external clock mode. PF.3 is configured as external clock input pin.
 * |        |          |Note 1: When HXTMD = 1, PF.3 MFP should be set as GPIO mode
 * |        |          |The DC characteristic of XT1_IN is the same as GPIO.
 * |        |          |Note 2: This bit is write protected. Refer to the SYS_REGCTL register.
 * @var CLK_T::AHBCLK0
 * Offset: 0x04  AHB Devices Clock Enable Control Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[1]     |PDMA0CKEN |PDMA0 Controller Clock Enable Bit
 * |        |          |0 = PDMA0 peripheral clock Disabled.
 * |        |          |1 = PDMA0 peripheral clock Enabled.
 * |[2]     |ISPCKEN   |RRAM ISP Controller Clock Enable Bit
 * |        |          |0 = RRAM ISP peripheral clock Disabled.
 * |        |          |1 = RRAM ISP peripheral clock Enabled.
 * |[3]     |EBICKEN   |EBI Controller Clock Enable Bit
 * |        |          |0 = EBI peripheral clock Disabled.
 * |        |          |1 = EBI peripheral clock Enabled.
 * |[4]     |STCKEN    |System Tick Clock Enable Bit
 * |        |          |0 = System tick clock Disabled.
 * |        |          |1 = System tick clock Enabled.
 * |[7]     |CRCCKEN   |CRC Generator Controller Clock Enable Bit
 * |        |          |0 = CRC peripheral clock Disabled.
 * |        |          |1 = CRC peripheral clock Enabled.
 * |[12]    |CRPTCKEN  |Cryptographic Accelerator Clock Enable Bit
 * |        |          |0 = Cryptographic Accelerator clock Disabled.
 * |        |          |1 = Cryptographic Accelerator clock Enabled.
 * |[13]    |KSCKEN    |Key Store Clock Enable Bit
 * |        |          |0 = Key Store clock Disabled.
 * |        |          |1 = Key Store clock Enabled.
 * |[15]    |RMCIDLE   |RRAM Memory Controller Clock Enable Bit in IDLE Mode
 * |        |          |0 = RMC clock Disabled when chip is under IDLE mode.
 * |        |          |1 = RMC clock Enabled when chip is under IDLE mode.
 * |[16]    |USBHCKEN  |USB HOST Controller Clock Enable Bit
 * |        |          |0 = USB HOST peripheral clock Disabled.
 * |        |          |1 = USB HOST peripheral clock Enabled.
 * |[23]    |RMCFDIS   |RMC Clock Force Disable Bit
 * |        |          |0 = RMC clock Enabled.
 * |        |          |1 = RMC clock force Disable to save power.
 * |        |          |Note: User should make sure program no RRAM access during this bit is 1
 * |[24]    |GPACKEN   |GPIOA Clock Enable Bit
 * |        |          |0 = GPIOA port clock Disabled.
 * |        |          |1 = GPIOA port clock Enabled.
 * |[25]    |GPBCKEN   |GPIOB Clock Enable Bit
 * |        |          |0 = GPIOB port clock Disabled.
 * |        |          |1 = GPIOB port clock Enabled.
 * |[26]    |GPCCKEN   |GPIOC Clock Enable Bit
 * |        |          |0 = GPIOC port clock Disabled.
 * |        |          |1 = GPIOC port clock Enabled.
 * |[27]    |GPDCKEN   |GPIOD Clock Enable Bit
 * |        |          |0 = GPIOD port clock Disabled.
 * |        |          |1 = GPIOD port clock Enabled.
 * |[28]    |GPECKEN   |GPIOE Clock Enable Bit
 * |        |          |0 = GPIOE port clock Disabled.
 * |        |          |1 = GPIOE port clock Enabled.
 * |[29]    |GPFCKEN   |GPIOF Clock Enable Bit
 * |        |          |0 = GPIOF port clock Disabled.
 * |        |          |1 = GPIOF port clock Enabled.
 * |[30]    |GPGCKEN   |GPIOG Clock Enable Bit
 * |        |          |0 = GPIOG port clock Disabled.
 * |        |          |1 = GPIOG port clock Enabled.
 * |[31]    |GPHCKEN   |GPIOH Clock Enable Bit
 * |        |          |0 = GPIOH port clock Disabled.
 * |        |          |1 = GPIOH port clock Enabled.
 * @var CLK_T::APBCLK0
 * Offset: 0x08  APB Devices Clock Enable Control Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[1]     |RTCCKEN   |Real-time-clock APB Interface Clock Enable Bit
 * |        |          |This bit is used to control the RTC APB clock only.
 * |        |          |The RTC peripheral clock source is selected from RTCCKSEL (RTC_LXTCTL[7])
 * |        |          |It can be selected to external low speed crystal oscillator (LXT) or internal low speed RC oscillator (LIRC).
 * |        |          |0 = RTC clock Disabled.
 * |        |          |1 = RTC clock Enabled.
 * |[2]     |TMR0CKEN  |Timer0 Clock Enable Bit
 * |        |          |0 = Timer0 clock Disabled.
 * |        |          |1 = Timer0 clock Enabled.
 * |[3]     |TMR1CKEN  |Timer1 Clock Enable Bit
 * |        |          |0 = Timer1 clock Disabled.
 * |        |          |1 = Timer1 clock Enabled.
 * |[4]     |TMR2CKEN  |Timer2 Clock Enable Bit
 * |        |          |0 = Timer2 clock Disabled.
 * |        |          |1 = Timer2 clock Enabled.
 * |[5]     |TMR3CKEN  |Timer3 Clock Enable Bit
 * |        |          |0 = Timer3 clock Disabled.
 * |        |          |1 = Timer3 clock Enabled.
 * |[6]     |CLKOCKEN  |CLKO Clock Enable Bit
 * |        |          |0 = CLKO clock Disabled.
 * |        |          |1 = CLKO clock Enabled.
 * |[7]     |ACMP01CKEN|ACMP01 Clock Enable Bit
 * |        |          |0 = ACMP01 clock Disabled.
 * |        |          |1 = ACMP01 clock Enabled.
 * |[8]     |I2C0CKEN  |I2C0 Clock Enable Bit
 * |        |          |0 = I2C0 clock Disabled.
 * |        |          |1 = I2C0 clock Enabled.
 * |[9]     |I2C1CKEN  |I2C1 Clock Enable Bit
 * |        |          |0 = I2C1 clock Disabled.
 * |        |          |1 = I2C1 clock Enabled.
 * |[10]    |I2C2CKEN  |I2C2 Clock Enable Bit
 * |        |          |0 = I2C2 clock Disabled.
 * |        |          |1 = I2C2 clock Enabled.
 * |[11]    |I2C3CKEN  |I2C3 Clock Enable Bit
 * |        |          |0 = I2C3 clock Disabled.
 * |        |          |1 = I2C3 clock Enabled.
 * |[12]    |QSPI0CKEN |QSPI0 Clock Enable Bit
 * |        |          |0 = QSPI0 clock Disabled.
 * |        |          |1 = QSPI0 clock Enabled.
 * |[13]    |SPI0CKEN  |SPI0 Clock Enable Bit
 * |        |          |0 = SPI0 clock Disabled.
 * |        |          |1 = SPI0 clock Enabled.
 * |[14]    |SPI1CKEN  |SPI1 Clock Enable Bit
 * |        |          |0 = SPI1 clock Disabled.
 * |        |          |1 = SPI1 clock Enabled.
 * |[15]    |SPI2CKEN  |SPI2 Clock Enable Bit
 * |        |          |0 = SPI2 clock Disabled.
 * |        |          |1 = SPI2 clock Enabled.
 * |[16]    |UART0CKEN |UART0 Clock Enable Bit
 * |        |          |0 = UART0 clock Disabled.
 * |        |          |1 = UART0 clock Enabled.
 * |[17]    |UART1CKEN |UART1 Clock Enable Bit
 * |        |          |0 = UART1 clock Disabled.
 * |        |          |1 = UART1 clock Enabled.
 * |[18]    |UART2CKEN |UART2 Clock Enable Bit
 * |        |          |0 = UART2 clock Disabled.
 * |        |          |1 = UART2 clock Enabled.
 * |[19]    |UART3CKEN |UART3 Clock Enable Bit
 * |        |          |0 = UART3 clock Disabled.
 * |        |          |1 = UART3 clock Enabled.
 * |[20]    |UART4CKEN |UART4 Clock Enable Bit
 * |        |          |0 = UART4 clock Disabled.
 * |        |          |1 = UART4 clock Enabled.
 * |[21]    |UART5CKEN |UART5 Clock Enable Bit
 * |        |          |0 = UART5 clock Disabled.
 * |        |          |1 = UART5 clock Enabled.
 * |[22]    |UART6CKEN |UART6 Clock Enable Bit
 * |        |          |0 = UART6 clock Disabled.
 * |        |          |1 = UART6 clock Enabled.
 * |[23]    |UART7CKEN |UART7 Clock Enable Bit
 * |        |          |0 = UART7 clock Disabled.
 * |        |          |1 = UART7 clock Enabled.
 * |[26]    |OTGCKEN   |USB OTG Clock Enable Bit
 * |        |          |0 = USB OTG clock Disabled.
 * |        |          |1 = USB OTG clock Enabled.
 * |[27]    |USBDCKEN  |USB Device Clock Enable Bit
 * |        |          |0 = USB device clock Disabled.
 * |        |          |1 = USB device clock Enabled.
 * |[28]    |EADC0CKEN |EADC0 Clock Enable Bit
 * |        |          |0 = EADC0 clock Disabled.
 * |        |          |1 = EADC0 clock Enabled.
 * |[31]    |TRNGCKEN  |TRNG Clock Enable Bit
 * |        |          |0 = TRNG clock Disabled.
 * |        |          |1 = TRNG clock Enabled.
 * @var CLK_T::APBCLK1
 * Offset: 0x0C  APB Devices Clock Enable Control Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[6]     |SPI3CKEN  |SPI3 Clock Enable Bit
 * |        |          |0 = SPI3 clock Disabled.
 * |        |          |1 = SPI3 clock Enabled.
 * |[8]     |USCI0CKEN |USCI0 Clock Enable Bit
 * |        |          |0 = USCI0 clock Disabled.
 * |        |          |1 = USCI0 clock Enabled.
 * |[9]     |USCI1CKEN |USCI1 Clock Enable Bit
 * |        |          |0 = USCI1 clock Disabled.
 * |        |          |1 = USCI1 clock Enabled.
 * |[11]    |WWDTCKEN  |Window Watchdog Timer Clock Enable Bit (Write Protect)
 * |        |          |0 = Window Watchdog timer clock Disabled.
 * |        |          |1 = Window Watchdog timer clock Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[12]    |DACEN     |DAC Clock Enable Bit
 * |        |          |0 = DAC clock Disabled.
 * |        |          |1 = DAC clock Enabled.
 * |[16]    |EPWM0CKEN |EPWM0 Clock Enable Bit
 * |        |          |0 = EPWM0 clock Disabled.
 * |        |          |1 = EPWM0 clock Enabled.
 * |[17]    |EPWM1CKEN |EPWM1 Clock Enable Bit
 * |        |          |0 = EPWM1 clock Disabled.
 * |        |          |1 = EPWM1 clock Enabled.
 * |[22]    |EQEI0CKEN |EQEI0 Clock Enable Bit
 * |        |          |0 = EQEI0 clock Disabled.
 * |        |          |1 = EQEI0 clock Enabled.
 * |[23]    |EQEI1CKEN |EQEI1 Clock Enable Bit
 * |        |          |0 = EQEI1 clock Disabled.
 * |        |          |1 = EQEI1 clock Enabled.
 * |[25]    |TKCKEN    |TK Clock Enable Bit
 * |        |          |0 = TK clock Disabled.
 * |        |          |1 = TK clock Enabled.
 * |[26]    |ECAP0CKEN |ECAP0 Clock Enable Bit
 * |        |          |0 = ECAP0 clock Disabled.
 * |        |          |1 = ECAP0 clock Enabled.
 * |[27]    |ECAP1CKEN |ECAP1 Clock Enable Bit
 * |        |          |0 = ECAP1 clock Disabled.
 * |        |          |1 = ECAP1 clock Enabled.
 * @var CLK_T::CLKSEL0
 * Offset: 0x10  Clock Source Select Control Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[2:0]   |HCLK0SEL  |HCLK0 Clock Source Selection (Write Protect)
 * |        |          |Before clock switching, the related clock sources (both pre-select and new-select) must be turned on.
 * |        |          |000 = Clock source from HXT.
 * |        |          |001 = Clock source from LXT.
 * |        |          |010 = Clock source from PLL.
 * |        |          |011 = Clock source from LIRC.
 * |        |          |101 = Clock source from MIRC.
 * |        |          |110 = Clock source from HIRC48M.
 * |        |          |111 = Clock source from HIRC.
 * |        |          |Other = Reserved.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |[5:3]   |STCLKSEL  |Cortex-M4 SysTick Clock Source Selection (Write Protect)
 * |        |          |If SYST_CTRL[2]=0, SysTick uses listed clock source below.
 * |        |          |000 = Clock source from HXT.
 * |        |          |001 = Clock source from LXT.
 * |        |          |010 = Clock source from HXT/2.
 * |        |          |011 = Clock source from HCLK/2.
 * |        |          |111 = Clock source from HIRC/2.
 * |        |          |Others = Reserved.
 * |        |          |Note: if SysTick clock source is not from CPU clock (i.e
 * |        |          |SYST_CTRL[2] = 0), SysTick clock source must be less than or equal to CPU clock divided by 2.
 * |[8]     |USBSEL    |USB Clock Source Selection (Write Protect)
 * |        |          |0 = Clock source from HIRC48M.
 * |        |          |1 = Clock source from PLL.
 * |[11:10] |EADC0SEL  |EADC0 Clock Source Selection (Write Protect)
 * |        |          |01 = Clock source from PLL.
 * |        |          |10 = Clock source from SRHCLK0.
 * |        |          |11 = Clock source from HIRC.
 * |        |          |Others = Reserved.
 * |[14:12] |HCLK1SEL  |HCLK1 Clock Source Selection (Write Protect)
 * |        |          |Before clock switching, the related clock sources (both pre-select and new-select) must be turned on.
 * |        |          |000 = Clock source from HIRC.
 * |        |          |001 = Clock source from MIRC.
 * |        |          |010 = Clock source from LXT.
 * |        |          |011 = Clock source from LIRC.
 * |        |          |100 = Clock source from HIRC48M_divider2.
 * |        |          |Others = Reserved.
 * |        |          |Note: HIRC48M_divider2 is not work at NPD3/NPD4/NPD5/SPD0~2/DPD0~1 power down mode, change to another clk source if needed.
 * |[25:24] |CANFD0SEL |CANFD0 Clock Source Selection (Write Protect)
 * |        |          |00 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
 * |        |          |01 = Clock source from 48 MHz internal high speed RC oscillator (HIRC48M).
 * |        |          |10 = Clock source from SRHCLK0.
 * |        |          |11 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |[27:26] |CANFD1SEL |CANFD1 Clock Source Selection (Write Protect)
 * |        |          |00 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
 * |        |          |01 = Clock source from 48 MHz internal high speed RC oscillator (HIRC48M).
 * |        |          |10 = Clock source from HCLK0.
 * |        |          |11 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * @var CLK_T::CLKSEL1
 * Offset: 0x14  Clock Source Select Control Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:4]   |CLKOSEL   |Clock Divider Clock Source Selection
 * |        |          |0000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
 * |        |          |0001 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
 * |        |          |0010 = Clock source from HCLK0.
 * |        |          |0011 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |0100 = Clock source from 32 kHz internal high speed RC oscillator (LIRC).
 * |        |          |0101 = Clock source from 48 MHz internal high speed RC oscillator (HIRC48M)..
 * |        |          |0110 = Clock source from PLL.
 * |        |          |0111 = Clock source from 1/2/4/8 MHz internal miltiple speed RC oscillator (MIRC).
 * |        |          |others = Reserved.
 * |        |          |Note: CLKOSEL can only be changed under CLKOCKEN = 0.
 * |[10:8]  |TMR0SEL   |TIMER0 Clock Source Selection
 * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
 * |        |          |001 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
 * |        |          |010 = Clock source from PCLK0.
 * |        |          |011 = Clock source from external clock TM0 pin.
 * |        |          |101 = Clock source from 32 kHz internal low speed RC oscillator (LIRC).
 * |        |          |111 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |Others = Reserved.
 * |[14:12] |TMR1SEL   |TIMER1 Clock Source Selection
 * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
 * |        |          |001 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
 * |        |          |010 = Clock source from PCLK0.
 * |        |          |011 = Clock source from external clock TM1 pin.
 * |        |          |101 = Clock source from 32 kHz internal low speed RC oscillator (LIRC).
 * |        |          |111 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |Others = Reserved.
 * |[18:16] |TMR2SEL   |TIMER2 Clock Source Selection
 * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
 * |        |          |001 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
 * |        |          |010 = Clock source from PCLK1.
 * |        |          |011 = Clock source from external clock TM2 pin.
 * |        |          |101 = Clock source from 32 kHz internal low speed RC oscillator (LIRC).
 * |        |          |111 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |Others = Reserved.
 * |[22:20] |TMR3SEL   |TIMER3 Clock Source Selection
 * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
 * |        |          |001 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
 * |        |          |010 = Clock source from PCLK1.
 * |        |          |011 = Clock source from external clock TM3 pin.
 * |        |          |101 = Clock source from 32 kHz internal low speed RC oscillator (LIRC).
 * |        |          |111 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |Others = Reserved.
 * |[31:30] |WWDTSEL   |Window Watchdog Timer Clock Source Selection
 * |        |          |10 = Clock source from HCLK/2048.
 * |        |          |11 = Clock source from 32 kHz internal low speed RC oscillator (LIRC).
 * |        |          |Others = Reserved.
 * @var CLK_T::CLKSEL2
 * Offset: 0x18  Clock Source Select Control Register 2
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |EPWM0SEL  |EPWM0 Clock Source Selection
 * |        |          |The peripheral clock source of EPWM0 is defined by EPWM0SEL.
 * |        |          |0 = Clock source from SRHCLK0.
 * |        |          |1 = Clock source from PCLK0.
 * |[1]     |EPWM1SEL  |EPWM1 Clock Source Selection
 * |        |          |The peripheral clock source of EPWM1 is defined by EPWM1SEL.
 * |        |          |0 = Clock source from SRHCLK0.
 * |        |          |1 = Clock source from PCLK1.
 * |[3:2]   |QSPI0SEL  |QSPI0 Clock Source Selection
 * |        |          |00 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
 * |        |          |01 = Clock source from PLL.
 * |        |          |10 = Clock source from PCLK0.
 * |        |          |11 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |[6:4]   |SPI0SEL   |SPI0 Clock Source Selection
 * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
 * |        |          |001 = Clock source from PLL.
 * |        |          |010 = Clock source from PCLK1.
 * |        |          |011 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |100 = Clock source from 48 MHz internal high speed RC oscillator (HIRC48M).
 * |        |          |Others = Reserved.
 * |[7]     |TKSEL     |TK Clock Source Selection
 * |        |          |00 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |01 = Clock source from 1/2/4/8 MHz internal middle speed RC oscillator (MIRC).
 * |        |          |Note: The TKSEL cannot be changed when TK is operating
 * |        |          |Used should make TK disable before change TKSEL, and reset TK after change TKSEL.
 * |[14:12] |SPI1SEL   |SPI1 Clock Source Selection
 * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
 * |        |          |001 = Clock source from PLL.
 * |        |          |010 = Clock source from PCLK0.
 * |        |          |011 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |100 = Clock source from 48 MHz internal high speed RC oscillator (HIRC48M).
 * |        |          |Others = Reserved.
 * @var CLK_T::CLKSEL3
 * Offset: 0x1C  Clock Source Select Control Register 3
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[6]     |PWM0SEL   |PWM0 Clock Source Selection
 * |        |          |The peripheral clock source of PWM0 is defined by PWM0SEL.
 * |        |          |0 = Clock source from SRHCLK0.
 * |        |          |1 = Clock source from PCLK0.
 * |[7]     |PWM1SEL   |PWM1 Clock Source Selection
 * |        |          |The peripheral clock source of PWM1 is defined by PWM1SEL.
 * |        |          |0 = Clock source from SRHCLK0.
 * |        |          |1 = Clock source from PCLK1.
 * |[10:8]  |SPI2SEL   |SPI2 Clock Source Selection
 * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
 * |        |          |001 = Clock source from PLL.
 * |        |          |010 = Clock source from PCLK1.
 * |        |          |011 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |100 = Clock source from 48 MHz internal high speed RC oscillator (HIRC48M).
 * |        |          |Others = Reserved.
 * |[14:12] |SPI3SEL   |SPI3 Clock Source Selection
 * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
 * |        |          |001 = Clock source from PLL.
 * |        |          |010 = Clock source from PCLK0.
 * |        |          |011 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |100 = Clock source from 48 MHz internal high speed RC oscillator (HIRC48M).
 * |        |          |Others = Reserved.
 * @var CLK_T::CLKDIV0
 * Offset: 0x20  Clock Divider Number Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[3:0]   |HCLK0DIV  |HCLK0 Clock Divide Number from HCLK0 Clock Source
 * |        |          |HCLK0 clock frequency = (HCLK0 clock source frequency) / (HCLK0DIV + 1).
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |[7:4]   |USBDIV    |USB Clock Divide Number from USB Clock
 * |        |          |USB clock frequency = (USB clock source frequency) / (USBDIV + 1).
 * |[11:8]  |UART0DIV  |UART0 Clock Divide Number from UART0 Clock Source
 * |        |          |UART0 clock frequency = (UART0 clock source frequency) / (UART0DIV + 1).
 * |[15:12] |UART1DIV  |UART1 Clock Divide Number from UART1 Clock Source
 * |        |          |UART1 clock frequency = (UART1 clock source frequency) / (UART1DIV + 1).
 * |[23:16] |EADC0DIV  |EADC0 Clock Divide Number from EADC0 Clock Source
 * |        |          |EADC0 clock frequency = (EADC0 clock source frequency) / (EADC0DIV + 1).
 * @var CLK_T::CLKDIV4
 * Offset: 0x30  Clock Divider Number Register 4
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[3:0]   |UART2DIV  |UART2 Clock Divide Number from UART2 Clock Source
 * |        |          |UART2 clock frequency = (UART2 clock source frequency) / (UART2DIV + 1).
 * |[7:4]   |UART3DIV  |UART3 Clock Divide Number from UART3 Clock Source
 * |        |          |UART3 clock frequency = (UART3 clock source frequency) / (UART3DIV + 1).
 * |[11:8]  |UART4DIV  |UART4 Clock Divide Number from UART4 Clock Source
 * |        |          |UART4 clock frequency = (UART4 clock source frequency) / (UART4DIV + 1).
 * |[15:12] |UART5DIV  |UART5 Clock Divide Number from UART5 Clock Source
 * |        |          |UART5 clock frequency = (UART5 clock source frequency) / (UART5DIV + 1).
 * |[19:16] |UART6DIV  |UART6 Clock Divide Number from UART6 Clock Source
 * |        |          |UART6 clock frequency = (UART6 clock source frequency) / (UART6DIV + 1).
 * |[23:20] |UART7DIV  |UART7 Clock Divide Number from UART7 Clock Source
 * |        |          |UART7 clock frequency = (UART7 clock source frequency) / (UART7DIV + 1).
 * @var CLK_T::PCLKDIV
 * Offset: 0x34  APB Clock Divider Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[2:0]   |APB0DIV   |APB0 Clock Divider
 * |        |          |APB0 clock can be divided from HCLK0.
 * |        |          |000 = PCLK0 frequency is HCLK0.
 * |        |          |001= PCLK0 frequency is 1/2 HCLK0.
 * |        |          |010 = PCLK0 frequency is 1/4 HCLK0.
 * |        |          |011 = PCLK0 frequency is 1/8 HCLK0.
 * |        |          |100 = PCLK0 frequency is 1/16 HCLK0.
 * |        |          |Others = Reserved.
 * |[6:4]   |APB1DIV   |APB1 Clock Divider
 * |        |          |APB1 clock can be divided from HCLK0.
 * |        |          |000 = PCLK1 frequency is HCLK0.
 * |        |          |001 = PCLK1 frequency is 1/2 HCLK0.
 * |        |          |010 = PCLK1 frequency is 1/4 HCLK0.
 * |        |          |011 = PCLK1 frequency is 1/8 HCLK0.
 * |        |          |100 = PCLK1 frequency is 1/16 HCLK0.
 * |        |          |Others = Reserved.
 * @var CLK_T::APBCLK2
 * Offset: 0x38  APB Devices Clock Enable Control Register 2
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7]     |ACMP2CKEN |ACMP2 Clock Enable Bit
 * |        |          |0 = ACMP2 clock Disabled.
 * |        |          |1 = ACMP2 clock Enabled.
 * |[8]     |PWM0CKEN  |PWM0 Clock Enable Bit
 * |        |          |0 = PWM0 clock Disabled.
 * |        |          |1 = PWM0 clock Enabled.
 * |[9]     |PWM1CKEN  |PWM1 Clock Enable Bit
 * |        |          |0 = PWM1 clock Disabled.
 * |        |          |1 = PWM1 clock Enabled.
 * |[15]    |UTCPD0CKEN|UTCPD0 Clock Enable Bit
 * |        |          |0 = UTCPD0 clock Disabled.
 * |        |          |1 = UTCPD0 clock Enabled.
 * @var CLK_T::CLKDIV5
 * Offset: 0x3C  Clock Divider Number Register 5
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[3:0]   |CANFD0DIV |CANFD0 Clock Divide Number from CANFD0 Clock Source
 * |        |          |CANFD0 clock frequency = (CANFD0 clock source frequency) / (CANFD0DIV + 1).
 * |[7:4]   |CANFD1DIV |CANFD1 Clock Divide Number from CANFD1 Clock Source
 * |        |          |CANFD1 clock frequency = (CANFD1 clock source frequency) / (CANFD1DIV + 1).
 * @var CLK_T::PLLCTL
 * Offset: 0x40  PLL Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[16]    |PD        |Power-down Mode (Write Protect)
 * |        |          |0 = PLL is in normal mode.
 * |        |          |1 = PLL is in Power-down mode (default).
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[17]    |BP        |PLL Bypass Control (Write Protect)
 * |        |          |0 = PLL is in normal mode (default).
 * |        |          |1 = PLL clock output is same as PLL input clock FIN.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[18]    |OE        |PLL FOUT Enable Control (Write Protect)
 * |        |          |0 = PLL FOUT Enabled.
 * |        |          |1 = PLL FOUT is fixed low.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[19]    |PLLSRC    |PLL Source Clock Selection (Write Protect)
 * |        |          |0 = PLL source clock from 4~32 MHz external high-speed crystal oscillator (HXT).
 * |        |          |1 = PLL source clock from 12 MHz internal high-speed oscillator (HIRC).
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[23]    |STBSEL    |PLL Stable Counter Selection (Write Protect)
 * |        |          |0 = PLL stable time is 2500 PLL source clock (suitable for source clock is equal to or less than 12 MHz).
 * |        |          |1 = PLL stable time is 7000 PLL source clock (suitable for source clock is larger than 12 MHz).
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * @var CLK_T::PLLCTL2
 * Offset: 0x44  PLL Control Register 2
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[8:0]   |FBDIV     |PLL Feedback Divider Control (Write Protect)
 * |        |          |Refer to the formulas below the table.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |[13:9]  |INDIV     |PLL Input Divider Control (Write Protect)
 * |        |          |Refer to the formulas below the table.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |[15:14] |OUTDIV    |PLL Output Divider Control (Write Protect)
 * |        |          |Refer to the formulas below the table.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |[27:16] |FRDIV     |PLL Fractional Divider Control (Write Protect)
 * |        |          |Refer to the formulas below the table.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * @var CLK_T::CLKSEL4
 * Offset: 0x48  Clock Source Select Control Register 4
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[2:0]   |UART0SEL  |UART0 Clock Source Selection
 * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
 * |        |          |001 = Clock source from PLL.
 * |        |          |010 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
 * |        |          |011 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |100 = Clock source from 1/2/4/8 MHz internal middle speed RC oscillator (MIRC).
 * |        |          |101 = Clock source from 48 MHz internal high speed RC oscillator (HIRC48M).
 * |        |          |Others = Reserved.
 * |[6:4]   |UART1SEL  |UART1 Clock Source Selection
 * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
 * |        |          |001 = Clock source from PLL.
 * |        |          |010 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
 * |        |          |011 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |100 = Clock source from 1/2/4/8 MHz internal middle speed RC oscillator (MIRC).
 * |        |          |101 = Clock source from 48 MHz internal high speed RC oscillator (HIRC48M).
 * |        |          |Others = Reserved.
 * |[10:8]  |UART2SEL  |UART2 Clock Source Selection
 * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
 * |        |          |001 = Clock source from PLL.
 * |        |          |010 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
 * |        |          |011 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |100 = Clock source from 1/2/4/8 MHz internal middle speed RC oscillator (MIRC).
 * |        |          |101 = Clock source from 48 MHz internal high speed RC oscillator (HIRC48M).
 * |        |          |Others = Reserved.
 * |[14:12] |UART3SEL  |UART3 Clock Source Selection
 * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
 * |        |          |001 = Clock source from PLL.
 * |        |          |010 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
 * |        |          |011 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |100 = Clock source from 1/2/4/8 MHz internal middle speed RC oscillator (MIRC).
 * |        |          |101 = Clock source from 48 MHz internal high speed RC oscillator (HIRC48M).
 * |        |          |Others = Reserved.
 * |[18:16] |UART4SEL  |UART4 Clock Source Selection
 * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
 * |        |          |001 = Clock source from PLL.
 * |        |          |010 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
 * |        |          |011 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |100 = Clock source from 1/2/4/8 MHz internal middle speed RC oscillator (MIRC).
 * |        |          |101 = Clock source from 48 MHz internal high speed RC oscillator (HIRC48M).
 * |        |          |Others = Reserved.
 * |[22:20] |UART5SEL  |UART5 Clock Source Selection
 * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
 * |        |          |001 = Clock source from PLL.
 * |        |          |010 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
 * |        |          |011 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |100 = Clock source from 1/2/4/8 MHz internal middle speed RC oscillator (MIRC).
 * |        |          |101 = Clock source from 48 MHz internal high speed RC oscillator (HIRC48M).
 * |        |          |Others = Reserved.
 * |[26:24] |UART6SEL  |UART6 Clock Source Selection
 * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
 * |        |          |001 = Clock source from PLL.
 * |        |          |010 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
 * |        |          |011 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |100 = Clock source from 1/2/4/8 MHz internal middle speed RC oscillator (MIRC).
 * |        |          |101 = Clock source from 48 MHz internal high speed RC oscillator (HIRC48M).
 * |        |          |Others = Reserved.
 * |[30:28] |UART7SEL  |UART7 Clock Source Selection
 * |        |          |000 = Clock source from 4~32 MHz external high speed crystal oscillator (HXT).
 * |        |          |001 = Clock source from PLL.
 * |        |          |010 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
 * |        |          |011 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |100 = Clock source from 1/2/4/8 MHz internal middle speed RC oscillator (MIRC).
 * |        |          |101 = Clock source from 48 MHz internal high speed RC oscillator (HIRC48M).
 * |        |          |Others = Reserved.
 * @var CLK_T::STATUS
 * Offset: 0x50  Clock Status Monitor Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |HXTSTB    |HXT Clock Source Stable Flag (Read Only)
 * |        |          |0 = 4~32 MHz external high speed crystal oscillator (HXT) clock is not stable or disabled.
 * |        |          |1 = 4~32 MHz external high speed crystal oscillator (HXT) clock is stable and enabled. 
 * |[1]     |LXTSTB    |LXT Clock Source Stable Flag (Read Only)
 * |        |          |0 = 32.768 kHz external low speed crystal oscillator (LXT) clock is not stable or disabled.
 * |        |          |1 = 32.768 kHz external low speed crystal oscillator (LXT) clock is stabled and enabled.
 * |[2]     |PLLSTB    |Internal PLL Clock Source Stable Flag (Read Only)
 * |        |          |0 = Internal PLL clock is not stable or disabled.
 * |        |          |1 = Internal PLL clock is stable and enabled.
 * |[3]     |LIRCSTB   |LIRC Clock Source Stable Flag (Read Only)
 * |        |          |0 = 32 kHz internal low speed RC oscillator (LIRC) clock is not stable or disabled.
 * |        |          |1 = 32 kHz internal low speed RC oscillator (LIRC) clock is stable and enabled.
 * |[4]     |HIRCSTB   |HIRC Clock Source Stable Flag (Read Only)
 * |        |          |0 = 12 MHz internal high speed RC oscillator (HIRC) clock is not stable or disabled.
 * |        |          |1 = 12 MHz internal high speed RC oscillator (HIRC) clock is stable and enabled.
 * |[5]     |MIRCSTB   |MIRC Clock Source Stable Flag (Read Only)
 * |        |          |0 = 1/2/4/8 MHz internal high speed RC oscillator (MIRC) clock is not stable or disabled.
 * |        |          |1 = 1/2/4/8 MHz internal high speed RC oscillator (MIRC) clock is stable and enabled.
 * |[6]     |HIRC48MSTB|HIRC48M Clock Source Stable Flag (Read Only)
 * |        |          |0 = 48 MHz internal high speed RC oscillator (HIRC48M) clock is not stable or disabled.
 * |        |          |1 = 48 MHz internal high speed RC oscillator (HIRC48M) clock is stable and enabled.
 * |[7]     |CLKSFAIL  |Clock Switching Fail Flag (Read Only)
 * |        |          |This bit is updated when software switches system clock source
 * |        |          |If switch target clock is stable, this bit will be set to 0
 * |        |          |If switch target clock is not stable, this bit will be set to 1.
 * |        |          |0 = Clock switching success.
 * |        |          |1 = Clock switching failure.
 * |        |          |Note: This bit is read only
 * |        |          |After selected clock source is stable, hardware will switch system clock to selected clock automatically, and CLKSFAIL will be cleared automatically by hardware.
 * @var CLK_T::AHBCLK1
 * Offset: 0x58  AHB Devices Clock Enable Control Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[16]    |CANRAM0EN |CANFD0 Message SRAM Clock Enable Bit
 * |        |          |0 = CANFD0 Message SRAM clock Disabled.
 * |        |          |1 = CANFD0 Message SRAM clock Enabled. 
 * |[17]    |CANRAM1EN |CANFD1 Message SRAM Clock Enable Bit
 * |        |          |0 = CANFD1 Message SRAM clock Disabled.
 * |        |          |1 = CANFD1 Message SRAM clock Enabled.
 * |[20]    |CANFD0CKEN|CANFD0 Clock Enable Bit
 * |        |          |0 = CANFD0 clock Disabled.
 * |        |          |1 = CANFD0 clock Enabled.
 * |[21]    |CANFD1CKEN|CANFD1 Clock Enable Bit
 * |        |          |0 = CANFD1 clock Disabled.
 * |        |          |1 = CANFD1 clock Enabled.
 * |[28]    |HCLK1EN   |HCLK1 Clock Enable Bit
 * |        |          |0 = HCLK1 clock Disabled.
 * |        |          |1 = HCLK1 clock Enabled.
 * @var CLK_T::CLKOCTL
 * Offset: 0x60  Clock Output Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[3:0]   |FREQSEL   |Clock Output Frequency Selection
 * |        |          |The formula of output frequency is
 * |        |          |Fout = Fin/2(N+1).
 * |        |          |Fin is the input clock frequency.
 * |        |          |Fout is the frequency of divider output clock.
 * |        |          |N is the 4-bit value of FREQSEL[3:0].
 * |[4]     |CLKOEN    |Clock Output Enable Bit
 * |        |          |0 = Clock Output function Disabled.
 * |        |          |1 = Clock Output function Enabled.
 * |[5]     |DIV1EN    |Clock Output Divide One Enable Bit
 * |        |          |0 = Clock Output will output clock with source frequency divided by FREQSEL.
 * |        |          |1 = Clock Output will output clock with source frequency.
 * |[6]     |CLK1HZEN  |Clock Output 1Hz Enable Bit
 * |        |          |0 = 1 Hz clock output for 32.768 kHz frequency compensation Disabled.
 * |        |          |1 = 1 Hz clock output for 32.768 kHz frequency compensation Enabled.
 * @var CLK_T::CLKDCTL
 * Offset: 0x70  Clock Fail Detector Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4]     |HXTFDEN   |HXT Clock Fail Detector Enable Bit
 * |        |          |0 = 4~32 MHz external high speed crystal oscillator (HXT) clock fail detector Disabled.
 * |        |          |1 = 4~32 MHz external high speed crystal oscillator (HXT) clock fail detector Enabled.
 * |[5]     |HXTFIEN   |HXT Clock Fail Interrupt Enable Bit
 * |        |          |0 = 4~32 MHz external high speed crystal oscillator (HXT) clock fail interrupt Disabled.
 * |        |          |1 = 4~32 MHz external high speed crystal oscillator (HXT) clock fail interrupt Enabled.
 * |[12]    |LXTFDEN   |LXT Clock Fail Detector Enable Bit
 * |        |          |0 = 32.768 kHz external low speed crystal oscillator (LXT) clock fail detector Disabled.
 * |        |          |1 = 32.768 kHz external low speed crystal oscillator (LXT) clock fail detector Enabled.
 * |[13]    |LXTFIEN   |LXT Clock Fail Interrupt Enable Bit
 * |        |          |0 = 32.768 kHz external low speed crystal oscillator (LXT) clock fail interrupt Disabled.
 * |        |          |1 = 32.768 kHz external low speed crystal oscillator (LXT) clock fail interrupt Enabled.
 * |[16]    |HXTFQDEN  |HXT Clock Frequency Range Detector Enable Bit
 * |        |          |0 = 4~32 MHz external high speed crystal oscillator (HXT) clock frequency range detector Disabled.
 * |        |          |1 = 4~32 MHz external high speed crystal oscillator (HXT) clock frequency range detector Enabled.
 * |        |          |Note: HIRC must be enabled and stabled before enabling HXT clock frequency monitor.
 * |[17]    |HXTFQIEN  |HXT Clock Frequency Range Detector Interrupt Enable Bit
 * |        |          |0 = 4~32 MHz external high speed crystal oscillator (HXT) clock frequency range detector fail interrupt Disabled.
 * |        |          |1 = 4~32 MHz external high speed crystal oscillator (HXT) clock frequency range detector fail interrupt Enabled.
 * @var CLK_T::CLKDSTS
 * Offset: 0x74  Clock Fail Detector Status Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |HXTFIF    |HXT Clock Fail Interrupt Flag (Write Protect)
 * |        |          |0 = 4~32 MHz external high speed crystal oscillator (HXT) clock is normal.
 * |        |          |1 = 4~32 MHz external high speed crystal oscillator (HXT) clock stops.
 * |        |          |Note 1: Write 1 to clear the bit to 0.
 * |        |          |Note 2: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[1]     |LXTFIF    |LXT Clock Fail Interrupt Flag (Write Protect)
 * |        |          |0 = 32.768 kHz external low speed crystal oscillator (LXT) clock is normal.
 * |        |          |1 = 32.768 kHz external low speed crystal oscillator (LXT) stops.
 * |        |          |Note 1: Write 1 to clear the bit to 0.
 * |        |          |Note 2: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[8]     |HXTFQIF   |HXT Clock Frequency Range Detector Interrupt Flag (Write Protect)
 * |        |          |0 = 4~32 MHz external high speed crystal oscillator (HXT) clock frequency is normal.
 * |        |          |1 = 4~32 MHz external high speed crystal oscillator (HXT) clock frequency is abnormal.
 * |        |          |Note 1: Write 1 to clear the bit to 0.
 * |        |          |Note 2: This bit is write protected. Refer to the SYS_REGLCTL register.
 * @var CLK_T::CDUPB
 * Offset: 0x78  Clock Frequency Range Detector Upper Boundary Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[10:0]  |UPERBD    |HXT Clock Frequency Range Detector Upper Boundary Value
 * |        |          |The bits define the maximum value of frequency range detector window.
 * |        |          |When HXT frequency higher than this maximum frequency value, the HXT Clock Frequency Range Detector Interrupt Flag HXTFQIF(CLK_CLKDSTS[8]) will set to 1.
 * @var CLK_T::CDLOWB
 * Offset: 0x7C  Clock Frequency Range Detector Lower Boundary Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[10:0]  |LOWERBD   |HXT Clock Frequency Range Detector Lower Boundary Value
 * |        |          |The bits define the minimum value of frequency range detector window.
 * |        |          |When HXT frequency lower than this minimum frequency value, the HXT Clock Frequency Range Detector Interrupt Flag HXTFQIF(CLK_CLKDSTS[8]) will set to 1.
 * @var CLK_T::STOPREQ
 * Offset: 0x80  Clock Stop Request Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |CANFD0REQ |CANFD0 Clock Stop Request
 * |        |          |Set this bit and check the CANFD0ACK(CLK_STOPACK[0]) =1, then CANFD0 engine clock stopped.
 * |        |          |Set this bit = 0 when CANFD0 clock is not stopped by this bit (default).
 * |[1]     |CANFD1REQ |CANFD1 Clock Stop Request
 * |        |          |Set this bit and check the CANFD1ACK(CLK_STOPACK[1]) =1, then CANFD1 engine clock stopped.
 * |        |          |Set this bit = 0 when CANFD1 clock is not stopped by this bit (default).
 * @var CLK_T::STOPACK
 * Offset: 0x84  Clock Stop Acknowledge Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |CANFD0ACK |CANFD0 Clock Stop Acknowledge
 * |        |          |When this bit =1, CANFD0 engine clock stopped by setting CANFD0REQ(CLK_STOPREQ[0]).
 * |[1]     |CANFD1ACK |CANFD1 Clock Stop Acknowledge
 * |        |          |When this bit =1, CANFD1 engine clock stopped by setting CANFD1REQ(CLK_STOPREQ[1]).
 * @var CLK_T::PMUCTL
 * Offset: 0x90  Power Manager Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[3:0]   |PDMSEL    |Power-down Mode Selection (Write Protect)
 * |        |          |These bits control chip power-down mode grade selection when CPU execute WFI/WFE instruction.
 * |        |          |0000 = Normal Power-down mode 0 is selected (NPD0).
 * |        |          |0001 = Normal Power-down mode 1 is selected (NPD1).
 * |        |          |0010 = Normal Power-down mode 2 is selected (NPD2).
 * |        |          |0011 = Normal Power-down mode 3 is selected (NPD3).
 * |        |          |0100 = Normal Power-down mode 4 is selected (NPD4).
 * |        |          |0101 = Normal Power-down mode 5 is selected (NPD5).
 * |        |          |1000 = Standby Power-down mode 0 is selected (SPD0).
 * |        |          |1001 = Standby Power-down mode 1 is selected (SPD1).
 * |        |          |1010 = Standby Power-down mode 2 is selected (SPD2).
 * |        |          |1100 = Deep Power-down mode 0 is selected (DPD0).
 * |        |          |1101 = Deep Power-down mode 1 is selected (DPD1).
 * |        |          |Other = Reserved.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |[10:8]  |SRETSEL   |SRAM Retention Range Select Bit (Write Protect)
 * |        |          |Select SRAM retention range when chip enters NPD3/NPD4/NPD5/SPD0~2 mode.
 * |        |          |000 = No SRAM retention.
 * |        |          |001 = 8K SRAM retention when chip enters NPD3/NPD4/NPD5/SPD0~2 mode.
 * |        |          |010 = 24K SRAM retention when chip enters NPD3/NPD4/NPD5/SPD0~2 mode.
 * |        |          |011 = 40K SRAM retention when chip enters NPD3/NPD4/NPD5/SPD0~2 mode.
 * |        |          |100 = 72K SRAM retention when chip enters NPD3/NPD4/NPD5/SPD0~2 mode.
 * |        |          |101 = 104K SRAM retention when chip enters NPD3/NPD4/NPD5/SPD0~2 mode.
 * |        |          |110 = 168K SRAM retention when chip enters NPD3/NPD4/NPD5/SPD0~2 mode.
 * |        |          |Others = Reserved.
 * |        |          |Note 1: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |        |          |Note 2: Users should make sure program stack is within SRAM retention range before chip enters NPD3/NPD4/NPD5/SPD0~2 mode.
 * |[16]    |LSRETSEL  |LPSRAM Retention Range Select Bit (Write Protect)
 * |        |          |Select LPSRAM retention range when chip enters NPD3/NPD4/NPD5/SPD0~2/DPD0~1 mode.
 * |        |          |0 = LPSRAM shut down.
 * |        |          |1 = 8K LPSRAM retention (0x2800_0000 - 0x2800_1FFF) when chip enters NPD3/NPD4/NPD5/SPD0~2 mode.
 * |        |          |Note 1: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |        |          |Note 2: This bit should be set 1 if LPSRAM is active in NPD3/NPD4/NPD5 mode.
 * |[20]    |CARETDIS  |Cache RAM Retention Disable Bit (Write Protect)
 * |        |          |0 = Cache RAM retention when chip enters NPD3/NPD4/NPD5 mode.
 * |        |          |1 = Cache RAM shut down when chip enters NPD3/NPD4/NPD5 mode.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * @var CLK_T::PMUSTS
 * Offset: 0x94  Power Manager Status Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |WKPIN0    |Pin0 Wake-up Flag (Read Only)
 * |        |          |This flag indicates that wake-up of chip from Deep Power-down mode was requested by a transition of the WAKEUP pin (GPC.0).
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering DPD0~1 mode.
 * |[1]     |TMRWK     |Timer Wake-up Flag (Read Only)
 * |        |          |This flag indicates that wake-up of chip from NPD0~5 or Deep Power-down mode (DPD0~1) or Standby Power-down (SPD0~2) mode was requested by wakeup timer time-out.
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering NPD0~5/SPD0~2/DPD0~1 mode.
 * |[2]     |RTCWK     |RTC Wake-up Flag (Read Only)
 * |        |          |This flag indicates that wakeup of device from NPD3/NPD4/NPD5 or Deep Power-down mode (DPD0~1) or Standby Power-down (SPD0~2) mode was requested with a RTC alarm, tick time or tamper happened.
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering NPD3/NPD4/NPD5/ SPD0~2/DPD0~1 mode.
 * |[3]     |WKPIN1    |Pin1 Wake-up Flag (Read Only)
 * |        |          |This flag indicates that wake-up of chip from Deep Power-down mode was requested by a transition of the WAKEUP pin (PB.0).
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering DPD0/DPD1 mode.
 * |[4]     |WKPIN2    |Pin2 Wake-up Flag (Read Only)
 * |        |          |This flag indicates that wake-up of chip from Deep Power-down mode was requested by a transition of the WAKEUP pin (PB.2).
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering DPD0/DPD1 mode.
 * |[5]     |WKPIN3    |Pin3 Wake-up Flag (Read Only)
 * |        |          |This flag indicates that wake-up of chip from Deep Power-down mode was requested by a transition of the WAKEUP pin (PB.12).
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering DPD0/DPD1 mode.
 * |[6]     |WKPIN4    |Pin4 Wake-up Flag (Read Only)
 * |        |          |This flag indicates that wake-up of chip from Deep Power-down mode was requested by a transition of the WAKEUP pin (PF.6).
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering DPD0/DPD1 mode.
 * |[7]     |WKPIN5    |Pin5 Wake-up Flag( Read Only)
 * |        |          |This flag indicates that wake-up of chip from Deep Power-down mode was requested by a transition of the WAKEUP pin (PA.12).
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering DPD0/DPD1 mode.
 * |[8]     |GPAWK0    |GPA Wake-up 0 Flag (Read Only)
 * |        |          |This flag indicates that wake-up of chip from NPD0~5 or Standby Power-down mode (SPD0~2) was requested by a transition of selected one GPA group pins.
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering NPD0~5/SPD0~2 mode.
 * |[9]     |GPBWK0    |GPB Wake-up 0 Flag (Read Only)
 * |        |          |This flag indicates that wake-up of chip from NPD0~5 or Standby Power-down mode (SPD0~2) was requested by a transition of selected one GPB group pins.
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering NPD0~5/SPD0~2 mode.
 * |[10]    |GPCWK0    |GPC Wake-up 0 Flag (Read Only)
 * |        |          |This flag indicates that wake-up of chip from NPD0~5 or Standby Power-down mode (SPD0~2) was requested by a transition of selected one GPC group pins.
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering NPD0~5/SPD0~2 mode.
 * |[11]    |GPDWK0    |GPD Wake-up 0 Flag (Read Only)
 * |        |          |This flag indicates that wake-up of chip from NPD0~5 or Standby Power-down mode (SPD0~2) was requested by a transition of selected one GPD group pins.
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering NPD0~5/SPD0~2 mode.
 * |[12]    |LVRWK     |LVR Wake-up Flag (Read Only)
 * |        |          |This flag indicates that wakeup of device from NPD3/NPD4/NPD5 or Standby Power-down mode (SPD0~2) was requested with a LVR happened.
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering NPD3/NPD4/NPD5/SPD0~2 mode.
 * |[13]    |BODWK     |BOD Wake-up Flag (Read Only)
 * |        |          |This flag indicates that wakeup of device from NPD3/NPD4/NPD5 or Standby Power-down mode (SPD0~2) was requested with a BOD happened.
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering NPD3/NPD4/NPD5/SPD0~2 mode.
 * |[15]    |RSTWK     |RST pin Wake-up Flag (Read Only)
 * |        |          |This flag indicates that wakeup of device from NPD3/NPD4/NPD5 or Deep Power-down mode (DPD0~1) or Standby Power-down mode (SPD0~2) was requested with a RST pin trigger happened.
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering NPD3/NPD4/NPD5/SPD0~2/DPD0~1 mode.
 * |[16]    |ACMPWK0   |ACMP0 Wake-up Flag (Read Only)
 * |        |          |This flag indicates that wakeup of device from Standby Power-down mode (SPD0~2) was requested with a ACMP0 transition.
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering SPD0~2 mode.
 * |[17]    |ACMPWK1   |ACMP1 Wake-up Flag (Read Only)
 * |        |          |This flag indicates that wakeup of device from Standby Power-down mode (SPD0~2) was requested with a ACMP1 transition.
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering SPD0~2 mode.
 * |[18]    |ACMPWK2   |ACMP2 Wake-up Flag (Read Only)
 * |        |          |This flag indicates that wakeup of device from Standby Power-down mode (SPD0~2) was requested with a ACMP2 transition.
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering SPD0~2 mode.
 * |[24]    |GPAWK1    |GPA Wake-up 1 Flag (Read Only)
 * |        |          |This flag indicates that wake-up of chip from NPD0~5 or Standby Power-down mode was requested by a transition of selected one GPA group pins.
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering NPD0~5/SPD0~2 mode.
 * |[25]    |GPBWK1    |GPB Wake-up 1 Flag (Read Only)
 * |        |          |This flag indicates that wake-up of chip from NPD0~5 or Standby Power-down mode was requested by a transition of selected one GPB group pins.
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering NPD0~5/SPD0~2 mode.
 * |[26]    |GPCWK1    |GPC Wake-up 1 Flag (Read Only)
 * |        |          |This flag indicates that wake-up of chip from NPD0~5 or Standby Power-down mode was requested by a transition of selected one GPC group pins.
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering NPD0~5/SPD0~2 mode.
 * |[27]    |GPDWK1    |GPD Wake-up 1 Flag (Read Only)
 * |        |          |This flag indicates that wake-up of chip from NPD0~5 or Standby Power-down mode was requested by a transition of selected one GPD group pins.
 * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering NPD0~5/ SPD0~2 mode.
 * |[31]    |CLRWK     |Clear Wake-up Flag
 * |        |          |0 = Not cleared.
 * |        |          |1 = Clear all wake-up flags.
 * |        |          |Note 1: This bit is auto cleared by hardware.
 * |        |          |Note 2: If DISAUTOC (CLK_PMUCLK[31])=0, all wake-up flags are auto cleared when chip enters NPD3/NPD4/NPD5/SPD0~2/DPD0~1 Power-down mode.
 * @var CLK_T::PMUWKCTL
 * Offset: 0x98  Power Manager Wake-up Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |WKTMREN   |Wake-up Timer Enable Bit (Write Protect)
 * |        |          |0 = Wake-up timer Disabled.
 * |        |          |1 = Wake-up timer Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[1]     |WKTMRMOD  |Wake-up Timer Mode (Write Protect)
 * |        |          |0 = Wake-up timer started when entering any of Power-down mode (except CPU idle mode).
 * |        |          |1 = Wake-up timer started immedially when WKTMREN (CLK_PMUWKCTL[0]) =1.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[6]     |ACMPWKEN  |ACMP Standby Power-down Mode Wake-up Enable Bit (Write Protect)
 * |        |          |0 = ACMP wake-up disable at Standby Power-down mode.
 * |        |          |1 = ACMP wake-up enabled at Standby Power-down mode.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |        |          |Note: Set FILTSEL(ACMP_CTLx[15:13]) for comparator output filter count selection, the filter clock is LIRC in ACMP SPD/USPD mode wakeup function.
 * |[7]     |RTCWKEN   |RTC Wake-up Enable Bit (Write Protect)
 * |        |          |0 = RTC wake-up disable at Deep Power-down mode or Standby Power-down mode.
 * |        |          |1 = RTC wake-up enabled at Deep Power-down mode or Standby Power-down mode.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[11:8]  |WKTMRIS   |Wake-up Timer Time-out Interval Select (Write Protect)
 * |        |          |These bits control wake-up timer time-out interval when chip at DPD/SPD mode.
 * |        |          |0000 = Time-out interval is 512 LIRC clocks (16ms).
 * |        |          |0001 = Time-out interval is 1024 LIRC clocks (32ms).
 * |        |          |0010 = Time-out interval is 2048 LIRC clocks (64ms).
 * |        |          |0011 = Time-out interval is 4096 LIRC clocks (128ms).
 * |        |          |0100 = Time-out interval is 8192 LIRC clocks (256ms).
 * |        |          |0101 = Time-out interval is 16384 LIRC clocks (512ms).
 * |        |          |0110 = Time-out interval is 32768 LIRC clocks (1024ms).
 * |        |          |0111 = Time-out interval is 65536 LIRC clocks (2048ms).
 * |        |          |1000 = Time-out interval is 131072 LIRC clocks (4096ms).
 * |        |          |1001 = Time-out interval is 262144 LIRC clocks (8192ms).
 * |        |          |1010 = Time-out interval is 524288 LIRC clocks (16384ms).
 * |        |          |1011 = Time-out interval is 1048576 LIRC clocks (32768ms).
 * |        |          |1100 = Time-out interval is 2097152 LIRC clocks (65536ms).
 * |        |          |1101 = Time-out interval is 4194304 LIRC clocks (131072ms).
 * |        |          |Others = Time-out interval is 512 LIRC clocks (16ms).
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |[17:16] |WKPINEN0  |Wake-up Pin0 Enable Bit (Write Protect)
 * |        |          |This is control register for GPC.0 to wake-up pin.
 * |        |          |00 = Wake-up pin disable at Deep Power-down mode.
 * |        |          |01 = Wake-up pin rising edge enabled at Deep Power-down mode.
 * |        |          |10 = Wake-up pin falling edge enabled at Deep Power-down mode.
 * |        |          |11 = Wake-up pin both edge enabled at Deep Power-down mode.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |[19:18] |WKPINEN1  |Wake-up Pin1 Enable Bit (Write Protect)
 * |        |          |This is control register for GPB.0 to wake-up pin.
 * |        |          |00 = Wake-up pin disable at Deep Power-down mode.
 * |        |          |01 = Wake-up pin rising edge enabled at Deep Power-down mode.
 * |        |          |10 = Wake-up pin falling edge enabled at Deep Power-down mode.
 * |        |          |11 = Wake-up pin both edge enabled at Deep Power-down mode.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |[21:20] |WKPINEN2  |Wake-up Pin2 Enable Bit (Write Protect)
 * |        |          |This is control register for GPB.2 to wake-up pin.
 * |        |          |00 = Wake-up pin disable at Deep Power-down mode.
 * |        |          |01 = Wake-up pin rising edge enabled at Deep Power-down mode.
 * |        |          |10 = Wake-up pin falling edge enabled at Deep Power-down mode.
 * |        |          |11 = Wake-up pin both edge enabled at Deep Power-down mode.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |[23:22] |WKPINEN3  |Wake-up Pin3 Enable Bit (Write Protect)
 * |        |          |This is control register for GPB.12 to wake-up pin.
 * |        |          |00 = Wake-up pin disable at Deep Power-down mode.
 * |        |          |01 = Wake-up pin rising edge enabled at Deep Power-down mode.
 * |        |          |10 = Wake-up pin falling edge enabled at Deep Power-down mode.
 * |        |          |11 = Wake-up pin both edge enabled at Deep Power-down mode.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |[25:24] |WKPINEN4  |Wake-up Pin4 Enable Bit (Write Protect)
 * |        |          |This is control register for GPF.6 to wake-up pin.
 * |        |          |00 = Wake-up pin disable at Deep Power-down mode.
 * |        |          |01 = Wake-up pin rising edge enabled at Deep Power-down mode.
 * |        |          |10 = Wake-up pin falling edge enabled at Deep Power-down mode.
 * |        |          |11 = Wake-up pin both edge enabled at Deep Power-down mode.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |        |          |Note: Setting IOCTLSEL(RTC_LXTCTL[8]) to avoid GPF6 unexpected falling edge.
 * |[27:26] |WKPINEN5  |Wake-up Pin5 Enable Bit (Write Protect)
 * |        |          |This is control register for GPA.12 to wake-up pin.
 * |        |          |00 = Wake-up pin disable at Deep Power-down mode.
 * |        |          |01 = Wake-up pin rising edge enabled at Deep Power-down mode.
 * |        |          |10 = Wake-up pin falling edge enabled at Deep Power-down mode.
 * |        |          |11 = Wake-up pin both edge enabled at Deep Power-down mode.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |[31]    |DISAUTOC  |Disable Auto Clear Wakeup flag (Write Protect)
 * |        |          |0 = When CPU enter NPD3/NPD4/NPD5/SPD0~2/DPD0~1, all of wake-up flags in CLK_PMUSTS are auto cleared.
 * |        |          |1 = Disable auto clear function.
 * |        |          |Note 1:This bit is write protected. Refer to the SYS_REGLCTL register.
 * |        |          |Note 2:Wakeup from NPD3/NPD4/NPD5, this bits keep original setting.
 * |        |          |Note 3:Wakeup from SPD0~2/DPD0~1, this bits reseted.
 * |        |          |Note 4 : During hardware do auto clear wakeup flag (1 HCLK cycle period), those wakeup function not work.
 * @var CLK_T::PWDBCTL
 * Offset: 0x9C  GPIO Pin WKIO De-bounce Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[3:0]   |SWKDBCLKSEL|WKIO De-bounce Sampling Cycle Selection
 * |        |          |0000 = Sample wake-up input once per 1 clocks.
 * |        |          |0001 = Sample wake-up input once per 2 clocks.
 * |        |          |0010 = Sample wake-up input once per 4 clocks.
 * |        |          |0011 = Sample wake-up input once per 8 clocks.
 * |        |          |0100 = Sample wake-up input once per 16 clocks.
 * |        |          |0101 = Sample wake-up input once per 32 clocks.
 * |        |          |0110 = Sample wake-up input once per 64 clocks.
 * |        |          |0111 = Sample wake-up input once per 128 clocks.
 * |        |          |1000 = Sample wake-up input once per 256 clocks.
 * |        |          |1001 = Sample wake-up input once per 2*256 clocks.
 * |        |          |1010 = Sample wake-up input once per 4*256 clocks.
 * |        |          |1011 = Sample wake-up input once per 8*256 clocks.
 * |        |          |1100 = Sample wake-up input once per 16*256 clocks.
 * |        |          |1101 = Sample wake-up input once per 32*256 clocks.
 * |        |          |1110 = Sample wake-up input once per 64*256 clocks.
 * |        |          |1111 = Sample wake-up input once per 128*256 clocks..
 * |        |          |Note: De-bounce counter clock source is the 32 kHz internal low speed RC oscillator (LIRC).
 * @var CLK_T::PAPWCTL
 * Offset: 0xA0  GPA Pin WKIO Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |WKEN0     |GPA Pin 0 Wake-up-I/O Enable Bit
 * |        |          |0 = GPA group pin 0 Wake-up-I/O function Disabled.
 * |        |          |1 = GPA group pin 0 Wakeup-I/O function Enabled.
 * |[1]     |PRWKEN0   |GPA Pin 0 Rising Edge Detect Enable Bit
 * |        |          |0 = GPA group pin 0 rising edge detect function Disabled.
 * |        |          |1 = GPA group pin 0 rising edge detect function Enabled.
 * |[2]     |PFWKEN0   |GPA Pin 0 Falling Edge Detect Enable Bit
 * |        |          |0 = GPA group pin 0 falling edge detect function Disabled.
 * |        |          |1 = GPA group pin 0 falling edge detect function Enabled.
 * |[7:4]   |WKPSEL0   |GPA Pin 0 Wakeup-I/O Pin Select
 * |        |          |0000 = GPA.0 as Wake-up-I/O function select.
 * |        |          |0001 = GPA.1 as Wakeup-I/O function select.
 * |        |          |0010 = GPA.2 as Wakeup-I/O function select.
 * |        |          |0011 = GPA.3 as Wakeup-I/O function select.
 * |        |          |0100 = GPA.4 as Wakeup-I/O function select.
 * |        |          |0101 = GPA.5 as Wakeup-I/O function select.
 * |        |          |0110 = GPA.6 as Wakeup-I/O function select.
 * |        |          |0111 = GPA.7 as Wakeup-I/O function select.
 * |        |          |1000 = GPA.8 as Wakeup-I/O function select.
 * |        |          |1001 = GPA.9 as Wakeup-I/O function select.
 * |        |          |1010 = GPA.10 as Wakeup-I/O function select.
 * |        |          |1011 = GPA.11 as Wakeup-I/O function select.
 * |        |          |1100 = GPA.12 as Wakeup-I/O function select.
 * |        |          |1101 = GPA.13 as Wakeup-I/O function select.
 * |        |          |1110 = GPA.14 as Wakeup-I/O function select.
 * |        |          |1111 = GPA.15 as Wakeup-I/O function select.
 * |[8]     |DBEN0     |GPA Pin 0 Input Signal De-bounce Enable Bit
 * |        |          |The DBEN bit is used to enable the de-bounce function for each corresponding I/O
 * |        |          |If the input signal pulse width cannot be sampled by continuous two de-bounce sample cycle, the input signal transition is seen as the signal bounce and will not trigger the wake-up
 * |        |          |The de-bounce clock source is the 32 kHz internal low speed RC oscillator.
 * |        |          |0 = GPA group pin 0 Wake-up-I/O pin De-bounce function Disabled.
 * |        |          |1 = GPA group pin 0 Wakeup-I/O pin De-bounce function Enabled.
 * |        |          |The de-bounce function is valid only for edgetriggered.
 * |[10]    |TRIGM0    |GPA Pin 0 Wake-up Pin Trigger Mode Select
 * |        |          |0 = GPA group pin 0 wake-up chip Enabled, trigger ip Enabled.
 * |        |          |1 = GPA group pin 0 wake-up chip Disabled, trigger ip Enabled.
 * |[11]    |NMR0      |GPA Pin 0 Function Enable at Normal Run Mode Select
 * |        |          |0 = GPA group pin 0 wake-up function enable when chip enters power down.
 * |        |          |1 = GPA group pin 0 wake-up function enable when chip is normal run.
 * |        |          |Note: Enable this bit and the I/O wake-up function is enabled immediately.
 * |[16]    |WKEN1     |GPA Pin 1 Wake-up Enable Bit
 * |        |          |0 = GPA group pin 1 wake-up function Disabled.
 * |        |          |1 = GPA group pin 1 wake-up function Enabled.
 * |[17]    |PRWKEN1   |GPA Pin 1 Rising Edge Detect Enable Bit
 * |        |          |0 = GPA group pin 1 rising edge detect function Disabled.
 * |        |          |1 = GPA group pin 1 rising edge detect function Enabled.
 * |[18]    |PFWKEN1   |GPA Pin 1 Falling Edge Detect Enable Bit
 * |        |          |0 = GPA group pin 1 falling edge detect function Disabled.
 * |        |          |1 = GPA group pin 1 falling edge detect function Enabled.
 * |[23:20] |WKPSEL1   |GPA Pin 1 Wakeup-I/O Pin Select
 * |        |          |0000 = GPA.0 as Wakeup-I/O function select.
 * |        |          |0001 = GPA.1 as Wakeup-I/O function select.
 * |        |          |0010 = GPA.2 as Wakeup-I/O function select.
 * |        |          |0011 = GPA.3 as Wakeup-I/O function select.
 * |        |          |0100 = GPA.4 as Wakeup-I/O function select.
 * |        |          |0101 = GPA.5 as Wakeup-I/O function select.
 * |        |          |0110 = GPA.6 as Wakeup-I/O function select.
 * |        |          |0111 = GPA.7 as Wakeup-I/O function select.
 * |        |          |1000 = GPA.8 as Wakeup-I/O function select.
 * |        |          |1001 = GPA.9 as Wakeup-I/O function select.
 * |        |          |1010 = GPA.10 as Wakeup-I/O function select.
 * |        |          |1011 = GPA.11 as Wakeup-I/O function select.
 * |        |          |1100 = GPA.12 as Wakeup-I/O function select.
 * |        |          |1101 = GPA.13 as Wakeup-I/O function select.
 * |        |          |1110 = GPA.14 as Wakeup-I/O function select.
 * |        |          |1111 = GPA.15 as Wakeup-I/O function select.
 * |[24]    |DBEN1     |GPA Pin 1 Input Signal De-bounce Enable Bit
 * |        |          |The DBEN bit is used to enable the de-bounce function for each corresponding I/O
 * |        |          |If the input signal pulse width cannot be sampled by continuous two de-bounce sample cycle, the input signal transition is seen as the signal bounce and will not trigger the wake-up
 * |        |          |The de-bounce clock source is the 32 kHz internal low speed RC oscillator.
 * |        |          |0 = GPA group pin 1 Wakeup-I/O pin De-bounce function Disabled.
 * |        |          |1 = GPA group pin 1 Wakeup-I/O pin De-bounce function Enabled.
 * |        |          |The de-bounce function is valid only for edgetriggered.
 * |[26]    |TRIGM1    |GPA Pin 1 Wake-up Pin Trigger Mode Select
 * |        |          |0 = GPA group pin 1 wake-up chip Enabled, trigger ip Enabled.
 * |        |          |1 = GPA group pin 1 wake-up chip Disabled, trigger ip Enabled.
 * |[27]    |NMR1      |GPA Pin 1 Function Enable at Normal Run Mode Select
 * |        |          |0 = GPA group pin 1 wake-up function enable when chip enters power down.
 * |        |          |1 = GPA group pin 1 wake-up function enable when chip is normal run.
 * |        |          |Note: Enable this bit and the WKIO function is enabled immediately.
 * @var CLK_T::PBPWCTL
 * Offset: 0xA4  GPB Pin WKIO Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |WKEN0     |GPB Pin 0 Wakeup-I/O Enable Bit
 * |        |          |0 = GPB group pin 0 Wakeup-I/O function Disabled.
 * |        |          |1 = GPB group pin 0 Wakeup-I/O function Enabled.
 * |[1]     |PRWKEN0   |GPB Pin 0 Rising Edge Detect Enable Bit
 * |        |          |0 = GPB group pin 0 rising edge detect function Disabled.
 * |        |          |1 = GPB group pin 0 rising edge detect function Enabled.
 * |[2]     |PFWKEN0   |GPB Pin 0 Falling Edge Detect Enable Bit
 * |        |          |0 = GPB group pin 0 falling edge detect function Disabled.
 * |        |          |1 = GPB group pin 0 falling edge detect function Enabled.
 * |[7:4]   |WKPSEL0   |GPB Pin 0 Wakeup-I/O Pin Select
 * |        |          |0000 = GPB.0 as Wakeup-I/O function select.
 * |        |          |0001 = GPB.1 as Wakeup-I/O function select.
 * |        |          |0010 = GPB.2 as Wakeup-I/O function select.
 * |        |          |0011 = GPB.3 as Wakeup-I/O function select.
 * |        |          |0100 = GPB.4 as Wakeup-I/O function select.
 * |        |          |0101 = GPB.5 as Wakeup-I/O function select.
 * |        |          |0110 = GPB.6 as Wakeup-I/O function select.
 * |        |          |0111 = GPB.7 as Wakeup-I/O function select.
 * |        |          |1000 = GPB.8 as Wakeup-I/O function select.
 * |        |          |1001 = GPB.9 as Wakeup-I/O function select.
 * |        |          |1010 = GPB.10 as Wakeup-I/O function select.
 * |        |          |1011 = GPB.11 as Wakeup-I/O function select.
 * |        |          |1100 = GPB.12 as Wakeup-I/O function select.
 * |        |          |1101 = GPB.13 as Wakeup-I/O function select.
 * |        |          |1110 = GPB.14 as Wakeup-I/O function select.
 * |        |          |1111 = GPB.15 as Wakeup-I/O function select.
 * |[8]     |DBEN0     |GPB Pin 0 Input Signal De-bounce Enable Bit
 * |        |          |The DBEN bit is used to enable the de-bounce function for each corresponding I/O
 * |        |          |If the input signal pulse width cannot be sampled by continuous two de-bounce sample cycle, the input signal transition is seen as the signal bounce and will not trigger the wake-up
 * |        |          |The de-bounce clock source is the 32 kHz internal low speed RC oscillator.
 * |        |          |0 = GPB group pin 0 Wakeup-I/O pin De-bounce function Disabled.
 * |        |          |1 = GPB group pin 0 Wakeup-I/O pin De-bounce function Enabled.
 * |        |          |The de-bounce function is valid only for edgetriggered.
 * |[10]    |TRIGM0    |GPB Pin 0 Wake-up Pin Trigger Mode Select
 * |        |          |0 = GPB group pin 0 wake-up chip Enabled, trigger ip Enabled.
 * |        |          |1 = GPB group pin 0 wake-up chip Disabled, trigger ip Enabled.
 * |[11]    |NMR0      |GPB Pin 0 Function Enable at Normal Run Mode Select
 * |        |          |0 = GPB group pin 0 wake-up function enable when chip enters power down.
 * |        |          |1 = GPB group pin 0 wake-up function enable when chip is normal run.
 * |        |          |Note: Enable this bit and the I/O wake-up function is enabled immediately.
 * |[16]    |WKEN1     |GPB Pin 1 Wake-up Enable Bit
 * |        |          |0 = GPB group pin 1 wake-up function Disabled.
 * |        |          |1 = GPB group pin 1 wake-up function Enabled.
 * |[17]    |PRWKEN1   |GPB Pin 1 Rising Edge Detect Enable Bit
 * |        |          |0 = GPB group pin 1 rising edge detect function Disabled.
 * |        |          |1 = GPB group pin 1 rising edge detect function Enabled.
 * |[18]    |PFWKEN1   |GPB Pin 1 Falling Edge Detect Enable Bit
 * |        |          |0 = GPB group pin 1 falling edge detect function Disabled.
 * |        |          |1 = GPB group pin 1 falling edge detect function Enabled.
 * |[23:20] |WKPSEL1   |GPB Pin 1 Wakeup-I/O Pin Select
 * |        |          |0000 = GPB.0 as Wakeup-I/O function select.
 * |        |          |0001 = GPB.1 as Wakeup-I/O function select.
 * |        |          |0010 = GPB.2 as Wakeup-I/O function select.
 * |        |          |0011 = GPB.3 as Wakeup-I/O function select.
 * |        |          |0100 = GPB.4 as Wakeup-I/O function select.
 * |        |          |0101 = GPB.5 as Wakeup-I/O function select.
 * |        |          |0110 = GPB.6 as Wakeup-I/O function select.
 * |        |          |0111 = GPB.7 as Wakeup-I/O function select.
 * |        |          |1000 = GPB.8 as Wakeup-I/O function select.
 * |        |          |1001 = GPB.9 as Wakeup-I/O function select.
 * |        |          |1010 = GPB.10 as Wakeup-I/O function select.
 * |        |          |1011 = GPB.11 as Wakeup-I/O function select.
 * |        |          |1100 = GPB.12 as Wakeup-I/O function select.
 * |        |          |1101 = GPB.13 as Wakeup-I/O function select.
 * |        |          |1110 = GPB.14 as Wakeup-I/O function select.
 * |        |          |1111 = GPB.15 as Wakeup-I/O function select.
 * |[24]    |DBEN1     |GPB Pin 1 Input Signal De-bounce Enable Bit
 * |        |          |The DBEN bit is used to enable the de-bounce function for each corresponding I/O
 * |        |          |If the input signal pulse width cannot be sampled by continuous two de-bounce sample cycle, the input signal transition is seen as the signal bounce and will not trigger the wake-up
 * |        |          |The de-bounce clock source is the 32 kHz internal low speed RC oscillator.
 * |        |          |0 = GPB group pin 1 Wakeup-I/O pin De-bounce function Disabled.
 * |        |          |1 = GPB group pin 1 Wakeup-I/O pin De-bounce function Enabled.
 * |        |          |The de-bounce function is valid only for edgetriggered.
 * |[26]    |TRIGM1    |GPB Pin 1 Wake-up Pin Trigger Mode Select
 * |        |          |0 = GPB group pin 1 wake-up chip Enabled, trigger ip Enabled.
 * |        |          |1 = GPB group pin 1 wake-up chip Disabled, trigger ip Enabled.
 * |[27]    |NMR1      |GPB Pin 1 Function Enable at Normal Run Mode Select
 * |        |          |0 = GPB group pin 1 wake-up function enable when chip enters power down.
 * |        |          |1 = GPB group pin 1 wake-up function enable when chip is normal run.
 * |        |          |Note: Enable this bit and the WKIO function is enabled immediately.
 * @var CLK_T::PCPWCTL
 * Offset: 0xA8  GPC Pin WKIO Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |WKEN0     |GPC Pin 0 Wakeup-I/O Enable Bit
 * |        |          |0 = GPC group pin 0 Wakeup-I/O function Disabled.
 * |        |          |1 = GPC group pin 0 Wakeup-I/O function Enabled.
 * |[1]     |PRWKEN0   |GPC Pin 0 Rising Edge Detect Enable Bit
 * |        |          |0 = GPC group pin 0 rising edge detect function Disabled.
 * |        |          |1 = GPC group pin 0 rising edge detect function Enabled.
 * |[2]     |PFWKEN0   |GPC Pin 0 Falling Edge Detect Enable Bit
 * |        |          |0 = GPC group pin 0 falling edge detect function Disabled.
 * |        |          |1 = GPC group pin 0 falling edge detect function Enabled.
 * |[7:4]   |WKPSEL0   |GPC Pin 0 Wakeup-I/O Pin Select
 * |        |          |0000 = GPC.0 as Wakeup-I/O function select.
 * |        |          |0001 = GPC.1 as Wakeup-I/O function select.
 * |        |          |0010 = GPC.2 as Wakeup-I/O function select.
 * |        |          |0011 = GPC.3 as Wakeup-I/O function select.
 * |        |          |0100 = GPC.4 as Wakeup-I/O function select.
 * |        |          |0101 = GPC.5 as Wakeup-I/O function select.
 * |        |          |0110 = GPC.6 as Wakeup-I/O function select.
 * |        |          |0111 = GPC.7 as Wakeup-I/O function select.
 * |        |          |1000 = GPC.8 as Wakeup-I/O function select.
 * |        |          |1001 = GPC.9 as Wakeup-I/O function select.
 * |        |          |1010 = GPC.10 as Wakeup-I/O function select.
 * |        |          |1011 = GPC.11 as Wakeup-I/O function select.
 * |        |          |1100 = GPC.12 as Wakeup-I/O function select.
 * |        |          |1101 = GPC.13 as Wakeup-I/O function select.
 * |        |          |1110 = GPC.14 as Wakeup-I/O function select.
 * |        |          |1111 = GPC.15 as Wakeup-I/O function select.
 * |[8]     |DBEN0     |GPC Pin 0 Input Signal De-bounce Enable Bit
 * |        |          |The DBEN bit is used to enable the de-bounce function for each corresponding I/O
 * |        |          |If the input signal pulse width cannot be sampled by continuous two de-bounce sample cycle, the input signal transition is seen as the signal bounce and will not trigger the wake-up
 * |        |          |The de-bounce clock source is the 32 kHz internal low speed RC oscillator.
 * |        |          |0 = GPC group pin 0 Wakeup-I/O pin De-bounce function Disabled.
 * |        |          |1 = GPC group pin 0 Wakeup-I/O pin De-bounce function Enabled.
 * |        |          |The de-bounce function is valid only for edgetriggered.
 * |[10]    |TRIGM0    |GPC Pin 0 Wake-up Pin Trigger Mode Select
 * |        |          |0 = GPC group pin 0 wake-up chip Enabled, trigger ip Enabled.
 * |        |          |1 = GPC group pin 0 wake-up chip Disabled, trigger ip Enabled.
 * |[11]    |NMR0      |GPC Pin 0 Function Enable at Normal Run Mode Select
 * |        |          |0 = GPC group pin 0 wake-up function enabled when chip enters power down.
 * |        |          |1 = GPC group pin 0 wake-up function enabled when chip is normal run.
 * |        |          |Note: Enable this bit and the I/O wake-up function is enabled immediately.
 * |[16]    |WKEN1     |GPC Pin 1 Wake-up Enable Bit
 * |        |          |0 = GPC group pin 1 wake-up function Disabled.
 * |        |          |1 = GPC group pin 1 wake-up function Enabled.
 * |[17]    |PRWKEN1   |GPC Pin 1 Rising Edge Detect Enable Bit
 * |        |          |0 = GPC group pin 1 rising edge detect function Disabled.
 * |        |          |1 = GPC group pin 1 rising edge detect function Enabled.
 * |[18]    |PFWKEN1   |GPC Pin 1 Falling Edge Detect Enable Bit
 * |        |          |0 = GPC group pin 1 falling edge detect function Disabled.
 * |        |          |1 = GPC group pin 1 falling edge detect function Enabled.
 * |[23:20] |WKPSEL1   |GPC Pin 1 Wakeup-I/O Pin Select
 * |        |          |0000 = GPC.0 as Wakeup-I/O function select.
 * |        |          |0001 = GPC.1 as Wakeup-I/O function select.
 * |        |          |0010 = GPC.2 as Wakeup-I/O function select.
 * |        |          |0011 = GPC.3 as Wakeup-I/O function select.
 * |        |          |0100 = GPC.4 as Wakeup-I/O function select.
 * |        |          |0101 = GPC.5 as Wakeup-I/O function select.
 * |        |          |0110 = GPC.6 as Wakeup-I/O function select.
 * |        |          |0111 = GPC.7 as Wakeup-I/O function select.
 * |        |          |1000 = GPC.8 as Wakeup-I/O function select.
 * |        |          |1001 = GPC.9 as Wakeup-I/O function select.
 * |        |          |1010 = GPC.10 as Wakeup-I/O function select.
 * |        |          |1011 = GPC.11 as Wakeup-I/O function select.
 * |        |          |1100 = GPC.12 as Wakeup-I/O function select.
 * |        |          |1101 = GPC.13 as Wakeup-I/O function select.
 * |        |          |1110 = GPC.14 as Wakeup-I/O function select.
 * |        |          |1111 = GPC.15 as Wakeup-I/O function select.
 * |[24]    |DBEN1     |GPC Pin 1 Input Signal De-bounce Enable Bit
 * |        |          |The DBEN bit is used to enable the de-bounce function for each corresponding I/O
 * |        |          |If the input signal pulse width cannot be sampled by continuous two de-bounce sample cycle, the input signal transition is seen as the signal bounce and will not trigger the wake-up
 * |        |          |The de-bounce clock source is the 32 kHz internal low speed RC oscillator.
 * |        |          |0 = GPC group pin 1 Wakeup-I/O pin De-bounce function Disabled.
 * |        |          |1 = GPC group pin 1 Wakeup-I/O pin De-bounce function Enabled.
 * |        |          |The de-bounce function is valid only for edgetriggered.
 * |[26]    |TRIGM1    |GPC Pin 1 Wake-up Pin Trigger Mode Select
 * |        |          |0 = GPC group pin 1 wake-up chip Enabled, trigger ip Enabled.
 * |        |          |1 = GPC group pin 1 wake-up chip Disabled, trigger ip Enabled.
 * |[27]    |NMR1      |GPC Pin 1 Function Enable at Normal Run Mode Select
 * |        |          |0 = GPC group pin 1 wake-up function enabled when chip enters power down.
 * |        |          |1 = GPC group pin 1 wake-up function enabled when chip is normal run.
 * |        |          |Note: Enable this bit and the WKIO function is enabled immediately.
 * @var CLK_T::PDPWCTL
 * Offset: 0xAC  GPD Pin WKIO Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |WKEN0     |GPD Pin 0 Wakeup-I/O Enable Bit
 * |        |          |0 = GPD group pin 0 Wakeup-I/O function Disabled.
 * |        |          |1 = GPD group pin 0 Wakeup-I/O function Enabled.
 * |[1]     |PRWKEN0   |GPD Pin 0 Rising Edge Detect Enable Bit
 * |        |          |0 = GPD group pin 0 rising edge detect function Disabled.
 * |        |          |1 = GPD group pin 0 rising edge detect function Enabled.
 * |[2]     |PFWKEN0   |GPD Pin 0 Falling Edge Detect Enable Bit
 * |        |          |0 = GPD group pin 0 falling edge detect function Disabled.
 * |        |          |1 = GPD group pin 0 falling edge detect function Enabled.
 * |[7:4]   |WKPSEL0   |GPD Pin 0 Wakeup-I/O Pin Select
 * |        |          |0000 = GPD.0 as Wakeup-I/O function select.
 * |        |          |0001 = GPD.1 as Wakeup-I/O function select.
 * |        |          |0010 = GPD.2 as Wakeup-I/O function select.
 * |        |          |0011 = GPD.3 as Wakeup-I/O function select.
 * |        |          |0100 = GPD.4 as Wakeup-I/O function select.
 * |        |          |0101 = GPD.5 as Wakeup-I/O function select.
 * |        |          |0110 = GPD.6 as Wakeup-I/O function select.
 * |        |          |0111 = GPD.7 as Wakeup-I/O function select.
 * |        |          |1000 = GPD.8 as Wakeup-I/O function select.
 * |        |          |1001 = GPD.9 as Wakeup-I/O function select.
 * |        |          |1010 = GPD.10 as Wakeup-I/O function select.
 * |        |          |1011 = GPD.11 as Wakeup-I/O function select.
 * |        |          |1100 = GPD.12 as Wakeup-I/O function select.
 * |        |          |1101 = GPD.13 as Wakeup-I/O function select.
 * |        |          |1110 = GPD.14 as Wakeup-I/O function select.
 * |        |          |1111 = GPD.15 as Wakeup-I/O function select.
 * |[8]     |DBEN0     |GPD Pin 0 Input Signal De-bounce Enable Bit
 * |        |          |The DBEN bit is used to enable the de-bounce function for each corresponding I/O
 * |        |          |If the input signal pulse width cannot be sampled by continuous two de-bounce sample cycle, the input signal transition is seen as the signal bounce and will not trigger the wake-up
 * |        |          |The de-bounce clock source is the 32 kHz internal low speed RC oscillator.
 * |        |          |0 = GPD group pin 0 Wakeup-I/O pin De-bounce function Disabled.
 * |        |          |1 = GPD group pin 0 Wakeup-I/O pin De-bounce function Enabled.
 * |        |          |The de-bounce function is valid only for edgetriggered.
 * |[10]    |TRIGM0    |GPD Pin 0 Wake-up Pin Trigger Mode Select
 * |        |          |0 = GPD group pin 0 wake-up chip Enabled, trigger ip Enabled.
 * |        |          |1 = GPD group pin 0 wake-up chip Disabled, trigger ip Enabled.
 * |[11]    |NMR0      |GPD Pin 0 Function Enable at Normal Run Mode Select
 * |        |          |0 = GPD group pin 0 wake-up function enable when chip enters power down.
 * |        |          |1 = GPD group pin 0 wake-up function enable when chip is normal run.
 * |        |          |Note: Enable this bit and the I/O wake-up function is enabled immediately.
 * |[16]    |WKEN1     |GPD Pin 1 Wake-up Enable Bit
 * |        |          |0 = GPD group pin 1 wake-up function Disabled.
 * |        |          |1 = GPD group pin 1 wake-up function Enabled.
 * |[17]    |PRWKEN1   |GPD Pin 1 Rising Edge Detect Enable Bit
 * |        |          |0 = GPD group pin 1 rising edge detect function Disabled.
 * |        |          |1 = GPD group pin 1 rising edge detect function Enabled.
 * |[18]    |PFWKEN1   |GPD Pin 1 Falling Edge Detect Enable Bit
 * |        |          |0 = GPD group pin 1 falling edge detect function Disabled.
 * |        |          |1 = GPD group pin 1 falling edge detect function Enabled.
 * |[23:20] |WKPSEL1   |GPD Pin 1 Wakeup-I/O Pin Select
 * |        |          |0000 = GPD.0 as Wakeup-I/O function select.
 * |        |          |0001 = GPD.1 as Wakeup-I/O function select.
 * |        |          |0010 = GPD.2 as Wakeup-I/O function select.
 * |        |          |0011 = GPD.3 as Wakeup-I/O function select.
 * |        |          |0100 = GPD.4 as Wakeup-I/O function select.
 * |        |          |0101 = GPD.5 as Wakeup-I/O function select.
 * |        |          |0110 = GPD.6 as Wakeup-I/O function select.
 * |        |          |0111 = GPD.7 as Wakeup-I/O function select.
 * |        |          |1000 = GPD.8 as Wakeup-I/O function select.
 * |        |          |1001 = GPD.9 as Wakeup-I/O function select.
 * |        |          |1010 = GPD.10 as Wakeup-I/O function select.
 * |        |          |1011 = GPD.11 as Wakeup-I/O function select.
 * |        |          |1100 = GPD.12 as Wakeup-I/O function select.
 * |        |          |1101 = GPD.13 as Wakeup-I/O function select.
 * |        |          |1110 = GPD.14 as Wakeup-I/O function select.
 * |        |          |1111 = GPD.15 as Wakeup-I/O function select.
 * |[24]    |DBEN1     |GPD Pin 1 Input Signal De-bounce Enable Bit
 * |        |          |The DBEN bit is used to enable the de-bounce function for each corresponding I/O
 * |        |          |If the input signal pulse width cannot be sampled by continuous two de-bounce sample cycle, the input signal transition is seen as the signal bounce and will not trigger the wake-up
 * |        |          |The de-bounce clock source is the 32 kHz internal low speed RC oscillator.
 * |        |          |0 = GPD group pin 1 Wakeup-I/O pin De-bounce function Disabled.
 * |        |          |1 = GPD group pin 1 Wakeup-I/O pin De-bounce function Enabled.
 * |        |          |The de-bounce function is valid only for edgetriggered.
 * |[26]    |TRIGM1    |GPD Pin 1 Wake-up Pin Trigger Mode Select
 * |        |          |0 = GPD group pin 1 wake-up chip Enabled, trigger ip Enabled.
 * |        |          |1 = GPD group pin 1 wake-up chip Disabled, trigger ip Enabled.
 * |[27]    |NMR1      |GPD Pin 1 Function Enable at Normal Run Mode Select
 * |        |          |0 = GPD group pin 1 wake-up function enable when chip enters power down.
 * |        |          |1 = GPD group pin 1 wake-up function enable when chip is normal run.
 * |        |          |Note: Enable this bit and the WKIO function is enabled immediately.
 * @var CLK_T::IOPDCTL
 * Offset: 0xB0  GPIO Power-down Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |IOHR      |GPIO Hold Release
 * |        |          |When GPIO enters deep power-down mode or standby power-down mode, all I/O status are hold to keep normal operating status
 * |        |          |After chip was waked up from deep power-down mode or standby power-down mode, the I/O are still keep hold status until user set this bit to release I/O hold status.
 * |        |          |Note: This bit is auto cleared by hardware.
 * |[8]     |DPDHOLDEN |Deep-Power-Down Mode GPIO Hold Enable Bit
 * |        |          |0= When GPIO enters deep power-down mode, all I/O status are tri-state.
 * |        |          |1= When GPIO enters deep power-down mode, all I/O status are hold to keep normal operating status
 * |        |          |After chip was waked up from deep power-down mode, the I/O are still keep hold status until user set CLK_IOPDCTL[0] to release I/O hold status.
 * @var CLK_T::PMUINTC
 * Offset: 0xC0  Power Manager Interrupt Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |WKTMRIE   |Wakeup-Timer Interrupt Enable Bit
 * |        |          |0 = Wakeup-Timer interrupt function Disabled.
 * |        |          |1 = Wakeup-Timer interrupt function Enabled.
 * |[8]     |WKIOA0IE  |Wakeup-I/O GPA group Pin 0 Interrupt Enable Bit
 * |        |          |0 = Wakeup-I/O interrupt function Disabled.
 * |        |          |1 = Wakeup-I/O interrupt function Enabled.
 * |[9]     |WKIOB0IE  |Wakeup-I/O GPB group Pin 0 Interrupt Enable Bit
 * |        |          |0 = Wakeup-I/O interrupt function Disabled.
 * |        |          |1 = Wakeup-I/O interrupt function Enabled.
 * |[10]    |WKIOC0IE  |Wakeup-I/O GPC group Pin 0 Interrupt Enable Bit
 * |        |          |0 = Wakeup-I/O interrupt function Disabled.
 * |        |          |1 = Wakeup-I/O interrupt function Enabled.
 * |[11]    |WKIOD0IE  |Wakeup-I/O GPD group Pin 0 Interrupt Enable Bit
 * |        |          |0 = Wakeup-I/O interrupt function Disabled.
 * |        |          |1 = Wakeup-I/O interrupt function Enabled.
 * |[12]    |WKIOA1IE  |Wakeup-I/O GPA group Pin 1 Interrupt Enable Bit
 * |        |          |0 = Wakeup-I/O interrupt function Disabled.
 * |        |          |1 = Wakeup-I/O interrupt function Enabled.
 * |[13]    |WKIOB1IE  |Wakeup-I/O GPB group Pin 1 Interrupt Enable Bit
 * |        |          |0 = Wakeup-I/O interrupt function Disabled.
 * |        |          |1 = Wakeup-I/O interrupt function Enabled.
 * |[14]    |WKIOC1IE  |Wakeup-I/O GPC group Pin 1 Interrupt Enable Bit
 * |        |          |0 = Wakeup-I/O interrupt function Disabled.
 * |        |          |1 = Wakeup-I/O interrupt function Enabled.
 * |[15]    |WKIOD1IE  |Wakeup-I/O GPD group Pin 1 Interrupt Enable Bit
 * |        |          |0 = Wakeup-I/O interrupt function Disabled.
 * |        |          |1 = Wakeup-I/O interrupt function Enabled.
 * @var CLK_T::PMUINTS
 * Offset: 0xC4  Power Manager Interrupt Status Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |WKTMRIF   |Wakeup-Timer Interrupt Flag
 * |        |          |This flag indicates that Wakeup-Timer interrupt happened.
 * |        |          |Flag is set by hardware while Wakeup-Timer event happen when WKTMRIE(CLK_PMUINTC[0])=1.
 * |        |          |Note: Software can clear this bit by writing 1 to it.
 * |[8]     |WKIOA0IF  |Wakeup-I/O GPA group Pin 0 Interrupt Flag
 * |        |          |This flag indicates that Wakeup-I/O interrupt happened.
 * |        |          |Flag is set by hardware while Wakeup-I/O event happen when WKIOPA0IE(CLK_PMUINTC[8])=1.
 * |        |          |Note: Software can clear this bit by writing 1 to it.
 * |[9]     |WKIOB0IF  |Wakeup-I/O GPB group Pin 0 Interrupt Flag
 * |        |          |This flag indicates that Wakeup-I/O interrupt happened.
 * |        |          |Flag is set by hardware while Wakeup-I/O event happen when WKIOPB0IE(CLK_PMUINTC[9])=1.
 * |        |          |Note: Software can clear this bit by writing 1 to it.
 * |[10]    |WKIOC0IF  |Wakeup-I/O GPC group Pin 0 Interrupt Flag
 * |        |          |This flag indicates that Wakeup-I/O interrupt happened.
 * |        |          |Flag is set by hardware while Wakeup-I/O event happen when WKIOPC0IE(CLK_PMUINTC[10])=1.
 * |        |          |Note: Software can clear this bit by writing 1 to it.
 * |[11]    |WKIOD0IF  |Wakeup-I/O GPD group Pin 0 Interrupt Flag
 * |        |          |This flag indicates that Wakeup-I/O interrupt happened.
 * |        |          |Flag is set by hardware while Wakeup-I/O event happen when WKIOPD0IE (CLK_PMUINTC[11])=1.
 * |        |          |Note: Software can clear this bit by writing 1 to it.
 * |[12]    |WKIOA1IF  |Wakeup-I/O GPA group Pin 1 Interrupt Flag
 * |        |          |This flag indicates that Wakeup-I/O interrupt happened.
 * |        |          |Flag is set by hardware while Wakeup-I/O event happen when WKIOPA1IE(CLK_PMUINTC[12])=1.
 * |        |          |Note: Software can clear this bit by writing 1 to it.
 * |[13]    |WKIOB1IF  |Wakeup-I/O GPB group Pin 1 Interrupt Flag
 * |        |          |This flag indicates that Wakeup-I/O interrupt happened.
 * |        |          |Flag is set by hardware while Wakeup-I/O event happen when WKIOPB1IE(CLK_PMUINTC[13])=1.
 * |        |          |Note: Software can clear this bit by writing 1 to it.
 * |[14]    |WKIOC1IF  |Wakeup-I/O GPC group Pin 1 Interrupt Flag
 * |        |          |This flag indicates that Wakeup-I/O interrupt happened.
 * |        |          |Flag is set by hardware while Wakeup-I/O event happen when WKIOPC1IE(CLK_PMUINTC[14])=1.
 * |        |          |Note: Software can clear this bit by writing 1 to it.
 * |[15]    |WKIOD1IF  |Wakeup-I/O GPD group Pin 1 Interrupt Flag
 * |        |          |This flag indicates that Wakeup-I/O interrupt happened.
 * |        |          |Flag is set by hardware while Wakeup-I/O event happen when WKIOPD1IE(CLK_PMUINTC[15])=1.
 * |        |          |Note: Software can clear this bit by writing 1 to it.
 */
    __IO uint32_t PWRCTL;                /*!< [0x0000] System Power-down Control Register                               */
    __IO uint32_t AHBCLK0;               /*!< [0x0004] AHB Devices Clock Enable Control Register 0                      */
    __IO uint32_t APBCLK0;               /*!< [0x0008] APB Devices Clock Enable Control Register 0                      */
    __IO uint32_t APBCLK1;               /*!< [0x000c] APB Devices Clock Enable Control Register 1                      */
    __IO uint32_t CLKSEL0;               /*!< [0x0010] Clock Source Select Control Register 0                           */
    __IO uint32_t CLKSEL1;               /*!< [0x0014] Clock Source Select Control Register 1                           */
    __IO uint32_t CLKSEL2;               /*!< [0x0018] Clock Source Select Control Register 2                           */
    __IO uint32_t CLKSEL3;               /*!< [0x001c] Clock Source Select Control Register 3                           */
    __IO uint32_t CLKDIV0;               /*!< [0x0020] Clock Divider Number Register 0                                  */
    __I  uint32_t RESERVE0[3];
    __IO uint32_t CLKDIV4;               /*!< [0x0030] Clock Divider Number Register 4                                  */
    __IO uint32_t PCLKDIV;               /*!< [0x0034] APB Clock Divider Register                                       */
    __IO uint32_t APBCLK2;               /*!< [0x0038] APB Devices Clock Enable Control Register 2                      */
    __IO uint32_t CLKDIV5;               /*!< [0x003c] Clock Divider Number Register 5                                  */
    __IO uint32_t PLLCTL;                /*!< [0x0040] PLL Control Register                                             */
    __IO uint32_t PLLCTL2;               /*!< [0x0044] PLL Control Register 2                                           */
    __IO uint32_t CLKSEL4;               /*!< [0x0048] Clock Source Select Control Register 4                           */
    __I  uint32_t RESERVE1[1];
    __I  uint32_t STATUS;                /*!< [0x0050] Clock Status Monitor Register                                    */
    __I  uint32_t RESERVE2[1];
    __IO uint32_t AHBCLK1;               /*!< [0x0058] AHB Devices Clock Enable Control Register 1                      */
    __I  uint32_t RESERVE3[1];
    __IO uint32_t CLKOCTL;               /*!< [0x0060] Clock Output Control Register                                    */
    __I  uint32_t RESERVE4[3];
    __IO uint32_t CLKDCTL;               /*!< [0x0070] Clock Fail Detector Control Register                             */
    __IO uint32_t CLKDSTS;               /*!< [0x0074] Clock Fail Detector Status Register                              */
    __IO uint32_t CDUPB;                 /*!< [0x0078] Clock Frequency Range Detector Upper Boundary Register           */
    __IO uint32_t CDLOWB;                /*!< [0x007c] Clock Frequency Range Detector Lower Boundary Register           */
    __IO uint32_t STOPREQ;               /*!< [0x0080] Clock Stop Request Register                                      */
    __I  uint32_t STOPACK;               /*!< [0x0084] Clock Stop Acknowledge Register                                  */
    __I  uint32_t RESERVE5[2];
    __IO uint32_t PMUCTL;                /*!< [0x0090] Power Manager Control Register                                   */
    __IO uint32_t PMUSTS;                /*!< [0x0094] Power Manager Status Register                                    */
    __IO uint32_t PMUWKCTL;              /*!< [0x0098] Power Manager Wake-up Control Register                           */
    __IO uint32_t PWDBCTL;               /*!< [0x009c] GPIO Pin WKIO De-bounce Control Register                         */
    __IO uint32_t PAPWCTL;               /*!< [0x00a0] GPA Pin WKIO Control Register                                    */
    __IO uint32_t PBPWCTL;               /*!< [0x00a4] GPB Pin WKIO Control Register                                    */
    __IO uint32_t PCPWCTL;               /*!< [0x00a8] GPC Pin WKIO Control Register                                    */
    __IO uint32_t PDPWCTL;               /*!< [0x00ac] GPD Pin WKIO Control Register                                    */
    __IO uint32_t IOPDCTL;               /*!< [0x00b0] GPIO Power-down Control Register                                 */
    __I  uint32_t RESERVE6[3];
    __IO uint32_t PMUINTC;               /*!< [0x00c0] Power Manager Interrupt Control Register                         */
    __IO uint32_t PMUINTS;               /*!< [0x00c4] Power Manager Interrupt Status Register                          */

} CLK_T;

/**
    @addtogroup CLK_CONST CLK Bit Field Definition
    Constant Definitions for CLK Controller
@{ */

#define CLK_PWRCTL_HXTEN_Pos             (0)                                               /*!< CLK_T::PWRCTL: HXTEN Position          */
#define CLK_PWRCTL_HXTEN_Msk             (0x1ul << CLK_PWRCTL_HXTEN_Pos)                   /*!< CLK_T::PWRCTL: HXTEN Mask              */

#define CLK_PWRCTL_LXTEN_Pos             (1)                                               /*!< CLK_T::PWRCTL: LXTEN Position          */
#define CLK_PWRCTL_LXTEN_Msk             (0x1ul << CLK_PWRCTL_LXTEN_Pos)                   /*!< CLK_T::PWRCTL: LXTEN Mask              */

#define CLK_PWRCTL_HIRCEN_Pos            (2)                                               /*!< CLK_T::PWRCTL: HIRCEN Position         */
#define CLK_PWRCTL_HIRCEN_Msk            (0x1ul << CLK_PWRCTL_HIRCEN_Pos)                  /*!< CLK_T::PWRCTL: HIRCEN Mask             */

#define CLK_PWRCTL_LIRCEN_Pos            (3)                                               /*!< CLK_T::PWRCTL: LIRCEN Position         */
#define CLK_PWRCTL_LIRCEN_Msk            (0x1ul << CLK_PWRCTL_LIRCEN_Pos)                  /*!< CLK_T::PWRCTL: LIRCEN Mask             */

#define CLK_PWRCTL_PDWKIEN_Pos           (5)                                               /*!< CLK_T::PWRCTL: PDWKIEN Position        */
#define CLK_PWRCTL_PDWKIEN_Msk           (0x1ul << CLK_PWRCTL_PDWKIEN_Pos)                 /*!< CLK_T::PWRCTL: PDWKIEN Mask            */

#define CLK_PWRCTL_PDWKIF_Pos            (6)                                               /*!< CLK_T::PWRCTL: PDWKIF Position         */
#define CLK_PWRCTL_PDWKIF_Msk            (0x1ul << CLK_PWRCTL_PDWKIF_Pos)                  /*!< CLK_T::PWRCTL: PDWKIF Mask             */

#define CLK_PWRCTL_PDEN_Pos              (7)                                               /*!< CLK_T::PWRCTL: PDEN Position           */
#define CLK_PWRCTL_PDEN_Msk              (0x1ul << CLK_PWRCTL_PDEN_Pos)                    /*!< CLK_T::PWRCTL: PDEN Mask               */

#define CLK_PWRCTL_HXTSELTYP_Pos         (12)                                              /*!< CLK_T::PWRCTL: HXTSELTYP Position      */
#define CLK_PWRCTL_HXTSELTYP_Msk         (0x1ul << CLK_PWRCTL_HXTSELTYP_Pos)               /*!< CLK_T::PWRCTL: HXTSELTYP Mask          */

#define CLK_PWRCTL_HIRC48MSTBS_Pos       (14)                                              /*!< CLK_T::PWRCTL: HIRC48MSTBS Position    */
#define CLK_PWRCTL_HIRC48MSTBS_Msk       (0x3ul << CLK_PWRCTL_HIRC48MSTBS_Pos)             /*!< CLK_T::PWRCTL: HIRC48MSTBS Mask        */

#define CLK_PWRCTL_HIRCSTBS_Pos          (16)                                              /*!< CLK_T::PWRCTL: HIRCSTBS Position       */
#define CLK_PWRCTL_HIRCSTBS_Msk          (0x3ul << CLK_PWRCTL_HIRCSTBS_Pos)                /*!< CLK_T::PWRCTL: HIRCSTBS Mask           */

#define CLK_PWRCTL_HIRC48MEN_Pos         (18)                                              /*!< CLK_T::PWRCTL: HIRC48MEN Position      */
#define CLK_PWRCTL_HIRC48MEN_Msk         (0x1ul << CLK_PWRCTL_HIRC48MEN_Pos)               /*!< CLK_T::PWRCTL: HIRC48MEN Mask          */

#define CLK_PWRCTL_HXTGAIN_Pos           (20)                                              /*!< CLK_T::PWRCTL: HXTGAIN Position        */
#define CLK_PWRCTL_HXTGAIN_Msk           (0x7ul << CLK_PWRCTL_HXTGAIN_Pos)                 /*!< CLK_T::PWRCTL: HXTGAIN Mask            */

#define CLK_PWRCTL_MIRCSTBS_Pos          (24)                                              /*!< CLK_T::PWRCTL: MIRCSTBS Position       */
#define CLK_PWRCTL_MIRCSTBS_Msk          (0x3ul << CLK_PWRCTL_MIRCSTBS_Pos)                /*!< CLK_T::PWRCTL: MIRCSTBS Mask           */

#define CLK_PWRCTL_MIRCEN_Pos            (26)                                              /*!< CLK_T::PWRCTL: MIRCEN Position         */
#define CLK_PWRCTL_MIRCEN_Msk            (0x1ul << CLK_PWRCTL_MIRCEN_Pos)                  /*!< CLK_T::PWRCTL: MIRCEN Mask             */

#define CLK_PWRCTL_MIRCFSEL_Pos          (28)                                              /*!< CLK_T::PWRCTL: MIRCFSEL Position       */
#define CLK_PWRCTL_MIRCFSEL_Msk          (0x7ul << CLK_PWRCTL_MIRCFSEL_Pos)                /*!< CLK_T::PWRCTL: MIRCFSEL Mask           */

#define CLK_PWRCTL_HXTMD_Pos             (31)                                              /*!< CLK_T::PWRCTL: HXTMD Position          */
#define CLK_PWRCTL_HXTMD_Msk             (0x1ul << CLK_PWRCTL_HXTMD_Pos)                   /*!< CLK_T::PWRCTL: HXTMD Mask              */

#define CLK_AHBCLK0_PDMA0CKEN_Pos        (1)                                               /*!< CLK_T::AHBCLK0: PDMA0CKEN Position     */
#define CLK_AHBCLK0_PDMA0CKEN_Msk        (0x1ul << CLK_AHBCLK0_PDMA0CKEN_Pos)              /*!< CLK_T::AHBCLK0: PDMA0CKEN Mask         */

#define CLK_AHBCLK0_ISPCKEN_Pos          (2)                                               /*!< CLK_T::AHBCLK0: ISPCKEN Position       */
#define CLK_AHBCLK0_ISPCKEN_Msk          (0x1ul << CLK_AHBCLK0_ISPCKEN_Pos)                /*!< CLK_T::AHBCLK0: ISPCKEN Mask           */

#define CLK_AHBCLK0_EBICKEN_Pos          (3)                                               /*!< CLK_T::AHBCLK0: EBICKEN Position       */
#define CLK_AHBCLK0_EBICKEN_Msk          (0x1ul << CLK_AHBCLK0_EBICKEN_Pos)                /*!< CLK_T::AHBCLK0: EBICKEN Mask           */

#define CLK_AHBCLK0_STCKEN_Pos           (4)                                               /*!< CLK_T::AHBCLK0: STCKEN Position        */
#define CLK_AHBCLK0_STCKEN_Msk           (0x1ul << CLK_AHBCLK0_STCKEN_Pos)                 /*!< CLK_T::AHBCLK0: STCKEN Mask            */

#define CLK_AHBCLK0_CRCCKEN_Pos          (7)                                               /*!< CLK_T::AHBCLK0: CRCCKEN Position       */
#define CLK_AHBCLK0_CRCCKEN_Msk          (0x1ul << CLK_AHBCLK0_CRCCKEN_Pos)                /*!< CLK_T::AHBCLK0: CRCCKEN Mask           */

#define CLK_AHBCLK0_CRPTCKEN_Pos         (12)                                              /*!< CLK_T::AHBCLK0: CRPTCKEN Position      */
#define CLK_AHBCLK0_CRPTCKEN_Msk         (0x1ul << CLK_AHBCLK0_CRPTCKEN_Pos)               /*!< CLK_T::AHBCLK0: CRPTCKEN Mask          */

#define CLK_AHBCLK0_KSCKEN_Pos           (13)                                              /*!< CLK_T::AHBCLK0: KSCKEN Position        */
#define CLK_AHBCLK0_KSCKEN_Msk           (0x1ul << CLK_AHBCLK0_KSCKEN_Pos)                 /*!< CLK_T::AHBCLK0: KSCKEN Mask            */

#define CLK_AHBCLK0_RMCIDLE_Pos          (15)                                              /*!< CLK_T::AHBCLK0: RMCIDLE Position       */
#define CLK_AHBCLK0_RMCIDLE_Msk          (0x1ul << CLK_AHBCLK0_RMCIDLE_Pos)                /*!< CLK_T::AHBCLK0: RMCIDLE Mask           */

#define CLK_AHBCLK0_USBHCKEN_Pos         (16)                                              /*!< CLK_T::AHBCLK0: USBHCKEN Position      */
#define CLK_AHBCLK0_USBHCKEN_Msk         (0x1ul << CLK_AHBCLK0_USBHCKEN_Pos)               /*!< CLK_T::AHBCLK0: USBHCKEN Mask          */

#define CLK_AHBCLK0_RMCFDIS_Pos          (23)                                              /*!< CLK_T::AHBCLK0: RMCFDIS Position       */
#define CLK_AHBCLK0_RMCFDIS_Msk          (0x1ul << CLK_AHBCLK0_RMCFDIS_Pos)                /*!< CLK_T::AHBCLK0: RMCFDIS Mask           */

#define CLK_AHBCLK0_GPACKEN_Pos          (24)                                              /*!< CLK_T::AHBCLK0: GPACKEN Position       */
#define CLK_AHBCLK0_GPACKEN_Msk          (0x1ul << CLK_AHBCLK0_GPACKEN_Pos)                /*!< CLK_T::AHBCLK0: GPACKEN Mask           */

#define CLK_AHBCLK0_GPBCKEN_Pos          (25)                                              /*!< CLK_T::AHBCLK0: GPBCKEN Position       */
#define CLK_AHBCLK0_GPBCKEN_Msk          (0x1ul << CLK_AHBCLK0_GPBCKEN_Pos)                /*!< CLK_T::AHBCLK0: GPBCKEN Mask           */

#define CLK_AHBCLK0_GPCCKEN_Pos          (26)                                              /*!< CLK_T::AHBCLK0: GPCCKEN Position       */
#define CLK_AHBCLK0_GPCCKEN_Msk          (0x1ul << CLK_AHBCLK0_GPCCKEN_Pos)                /*!< CLK_T::AHBCLK0: GPCCKEN Mask           */

#define CLK_AHBCLK0_GPDCKEN_Pos          (27)                                              /*!< CLK_T::AHBCLK0: GPDCKEN Position       */
#define CLK_AHBCLK0_GPDCKEN_Msk          (0x1ul << CLK_AHBCLK0_GPDCKEN_Pos)                /*!< CLK_T::AHBCLK0: GPDCKEN Mask           */

#define CLK_AHBCLK0_GPECKEN_Pos          (28)                                              /*!< CLK_T::AHBCLK0: GPECKEN Position       */
#define CLK_AHBCLK0_GPECKEN_Msk          (0x1ul << CLK_AHBCLK0_GPECKEN_Pos)                /*!< CLK_T::AHBCLK0: GPECKEN Mask           */

#define CLK_AHBCLK0_GPFCKEN_Pos          (29)                                              /*!< CLK_T::AHBCLK0: GPFCKEN Position       */
#define CLK_AHBCLK0_GPFCKEN_Msk          (0x1ul << CLK_AHBCLK0_GPFCKEN_Pos)                /*!< CLK_T::AHBCLK0: GPFCKEN Mask           */

#define CLK_AHBCLK0_GPGCKEN_Pos          (30)                                              /*!< CLK_T::AHBCLK0: GPGCKEN Position       */
#define CLK_AHBCLK0_GPGCKEN_Msk          (0x1ul << CLK_AHBCLK0_GPGCKEN_Pos)                /*!< CLK_T::AHBCLK0: GPGCKEN Mask           */

#define CLK_AHBCLK0_GPHCKEN_Pos          (31)                                              /*!< CLK_T::AHBCLK0: GPHCKEN Position       */
#define CLK_AHBCLK0_GPHCKEN_Msk          (0x1ul << CLK_AHBCLK0_GPHCKEN_Pos)                /*!< CLK_T::AHBCLK0: GPHCKEN Mask           */

#define CLK_APBCLK0_RTCCKEN_Pos          (1)                                               /*!< CLK_T::APBCLK0: RTCCKEN Position       */
#define CLK_APBCLK0_RTCCKEN_Msk          (0x1ul << CLK_APBCLK0_RTCCKEN_Pos)                /*!< CLK_T::APBCLK0: RTCCKEN Mask           */

#define CLK_APBCLK0_TMR0CKEN_Pos         (2)                                               /*!< CLK_T::APBCLK0: TMR0CKEN Position      */
#define CLK_APBCLK0_TMR0CKEN_Msk         (0x1ul << CLK_APBCLK0_TMR0CKEN_Pos)               /*!< CLK_T::APBCLK0: TMR0CKEN Mask          */

#define CLK_APBCLK0_TMR1CKEN_Pos         (3)                                               /*!< CLK_T::APBCLK0: TMR1CKEN Position      */
#define CLK_APBCLK0_TMR1CKEN_Msk         (0x1ul << CLK_APBCLK0_TMR1CKEN_Pos)               /*!< CLK_T::APBCLK0: TMR1CKEN Mask          */

#define CLK_APBCLK0_TMR2CKEN_Pos         (4)                                               /*!< CLK_T::APBCLK0: TMR2CKEN Position      */
#define CLK_APBCLK0_TMR2CKEN_Msk         (0x1ul << CLK_APBCLK0_TMR2CKEN_Pos)               /*!< CLK_T::APBCLK0: TMR2CKEN Mask          */

#define CLK_APBCLK0_TMR3CKEN_Pos         (5)                                               /*!< CLK_T::APBCLK0: TMR3CKEN Position      */
#define CLK_APBCLK0_TMR3CKEN_Msk         (0x1ul << CLK_APBCLK0_TMR3CKEN_Pos)               /*!< CLK_T::APBCLK0: TMR3CKEN Mask          */

#define CLK_APBCLK0_CLKOCKEN_Pos         (6)                                               /*!< CLK_T::APBCLK0: CLKOCKEN Position      */
#define CLK_APBCLK0_CLKOCKEN_Msk         (0x1ul << CLK_APBCLK0_CLKOCKEN_Pos)               /*!< CLK_T::APBCLK0: CLKOCKEN Mask          */

#define CLK_APBCLK0_ACMP01CKEN_Pos       (7)                                               /*!< CLK_T::APBCLK0: ACMP01CKEN Position    */
#define CLK_APBCLK0_ACMP01CKEN_Msk       (0x1ul << CLK_APBCLK0_ACMP01CKEN_Pos)             /*!< CLK_T::APBCLK0: ACMP01CKEN Mask        */

#define CLK_APBCLK0_I2C0CKEN_Pos         (8)                                               /*!< CLK_T::APBCLK0: I2C0CKEN Position      */
#define CLK_APBCLK0_I2C0CKEN_Msk         (0x1ul << CLK_APBCLK0_I2C0CKEN_Pos)               /*!< CLK_T::APBCLK0: I2C0CKEN Mask          */

#define CLK_APBCLK0_I2C1CKEN_Pos         (9)                                               /*!< CLK_T::APBCLK0: I2C1CKEN Position      */
#define CLK_APBCLK0_I2C1CKEN_Msk         (0x1ul << CLK_APBCLK0_I2C1CKEN_Pos)               /*!< CLK_T::APBCLK0: I2C1CKEN Mask          */

#define CLK_APBCLK0_I2C2CKEN_Pos         (10)                                              /*!< CLK_T::APBCLK0: I2C2CKEN Position      */
#define CLK_APBCLK0_I2C2CKEN_Msk         (0x1ul << CLK_APBCLK0_I2C2CKEN_Pos)               /*!< CLK_T::APBCLK0: I2C2CKEN Mask          */

#define CLK_APBCLK0_I2C3CKEN_Pos         (11)                                              /*!< CLK_T::APBCLK0: I2C3CKEN Position      */
#define CLK_APBCLK0_I2C3CKEN_Msk         (0x1ul << CLK_APBCLK0_I2C3CKEN_Pos)               /*!< CLK_T::APBCLK0: I2C3CKEN Mask          */

#define CLK_APBCLK0_QSPI0CKEN_Pos        (12)                                              /*!< CLK_T::APBCLK0: QSPI0CKEN Position     */
#define CLK_APBCLK0_QSPI0CKEN_Msk        (0x1ul << CLK_APBCLK0_QSPI0CKEN_Pos)              /*!< CLK_T::APBCLK0: QSPI0CKEN Mask         */

#define CLK_APBCLK0_SPI0CKEN_Pos         (13)                                              /*!< CLK_T::APBCLK0: SPI0CKEN Position      */
#define CLK_APBCLK0_SPI0CKEN_Msk         (0x1ul << CLK_APBCLK0_SPI0CKEN_Pos)               /*!< CLK_T::APBCLK0: SPI0CKEN Mask          */

#define CLK_APBCLK0_SPI1CKEN_Pos         (14)                                              /*!< CLK_T::APBCLK0: SPI1CKEN Position      */
#define CLK_APBCLK0_SPI1CKEN_Msk         (0x1ul << CLK_APBCLK0_SPI1CKEN_Pos)               /*!< CLK_T::APBCLK0: SPI1CKEN Mask          */

#define CLK_APBCLK0_SPI2CKEN_Pos         (15)                                              /*!< CLK_T::APBCLK0: SPI2CKEN Position      */
#define CLK_APBCLK0_SPI2CKEN_Msk         (0x1ul << CLK_APBCLK0_SPI2CKEN_Pos)               /*!< CLK_T::APBCLK0: SPI2CKEN Mask          */

#define CLK_APBCLK0_UART0CKEN_Pos        (16)                                              /*!< CLK_T::APBCLK0: UART0CKEN Position     */
#define CLK_APBCLK0_UART0CKEN_Msk        (0x1ul << CLK_APBCLK0_UART0CKEN_Pos)              /*!< CLK_T::APBCLK0: UART0CKEN Mask         */

#define CLK_APBCLK0_UART1CKEN_Pos        (17)                                              /*!< CLK_T::APBCLK0: UART1CKEN Position     */
#define CLK_APBCLK0_UART1CKEN_Msk        (0x1ul << CLK_APBCLK0_UART1CKEN_Pos)              /*!< CLK_T::APBCLK0: UART1CKEN Mask         */

#define CLK_APBCLK0_UART2CKEN_Pos        (18)                                              /*!< CLK_T::APBCLK0: UART2CKEN Position     */
#define CLK_APBCLK0_UART2CKEN_Msk        (0x1ul << CLK_APBCLK0_UART2CKEN_Pos)              /*!< CLK_T::APBCLK0: UART2CKEN Mask         */

#define CLK_APBCLK0_UART3CKEN_Pos        (19)                                              /*!< CLK_T::APBCLK0: UART3CKEN Position     */
#define CLK_APBCLK0_UART3CKEN_Msk        (0x1ul << CLK_APBCLK0_UART3CKEN_Pos)              /*!< CLK_T::APBCLK0: UART3CKEN Mask         */

#define CLK_APBCLK0_UART4CKEN_Pos        (20)                                              /*!< CLK_T::APBCLK0: UART4CKEN Position     */
#define CLK_APBCLK0_UART4CKEN_Msk        (0x1ul << CLK_APBCLK0_UART4CKEN_Pos)              /*!< CLK_T::APBCLK0: UART4CKEN Mask         */

#define CLK_APBCLK0_UART5CKEN_Pos        (21)                                              /*!< CLK_T::APBCLK0: UART5CKEN Position     */
#define CLK_APBCLK0_UART5CKEN_Msk        (0x1ul << CLK_APBCLK0_UART5CKEN_Pos)              /*!< CLK_T::APBCLK0: UART5CKEN Mask         */

#define CLK_APBCLK0_UART6CKEN_Pos        (22)                                              /*!< CLK_T::APBCLK0: UART6CKEN Position     */
#define CLK_APBCLK0_UART6CKEN_Msk        (0x1ul << CLK_APBCLK0_UART6CKEN_Pos)              /*!< CLK_T::APBCLK0: UART6CKEN Mask         */

#define CLK_APBCLK0_UART7CKEN_Pos        (23)                                              /*!< CLK_T::APBCLK0: UART7CKEN Position     */
#define CLK_APBCLK0_UART7CKEN_Msk        (0x1ul << CLK_APBCLK0_UART7CKEN_Pos)              /*!< CLK_T::APBCLK0: UART7CKEN Mask         */

#define CLK_APBCLK0_OTGCKEN_Pos          (26)                                              /*!< CLK_T::APBCLK0: OTGCKEN Position       */
#define CLK_APBCLK0_OTGCKEN_Msk          (0x1ul << CLK_APBCLK0_OTGCKEN_Pos)                /*!< CLK_T::APBCLK0: OTGCKEN Mask           */

#define CLK_APBCLK0_USBDCKEN_Pos         (27)                                              /*!< CLK_T::APBCLK0: USBDCKEN Position      */
#define CLK_APBCLK0_USBDCKEN_Msk         (0x1ul << CLK_APBCLK0_USBDCKEN_Pos)               /*!< CLK_T::APBCLK0: USBDCKEN Mask          */

#define CLK_APBCLK0_EADC0CKEN_Pos        (28)                                              /*!< CLK_T::APBCLK0: EADC0CKEN Position     */
#define CLK_APBCLK0_EADC0CKEN_Msk        (0x1ul << CLK_APBCLK0_EADC0CKEN_Pos)              /*!< CLK_T::APBCLK0: EADC0CKEN Mask         */

#define CLK_APBCLK0_TRNGCKEN_Pos         (31)                                              /*!< CLK_T::APBCLK0: TRNGCKEN Position      */
#define CLK_APBCLK0_TRNGCKEN_Msk         (0x1ul << CLK_APBCLK0_TRNGCKEN_Pos)               /*!< CLK_T::APBCLK0: TRNGCKEN Mask          */

#define CLK_APBCLK1_SPI3CKEN_Pos         (6)                                               /*!< CLK_T::APBCLK1: SPI3CKEN Position      */
#define CLK_APBCLK1_SPI3CKEN_Msk         (0x1ul << CLK_APBCLK1_SPI3CKEN_Pos)               /*!< CLK_T::APBCLK1: SPI3CKEN Mask          */

#define CLK_APBCLK1_USCI0CKEN_Pos        (8)                                               /*!< CLK_T::APBCLK1: USCI0CKEN Position     */
#define CLK_APBCLK1_USCI0CKEN_Msk        (0x1ul << CLK_APBCLK1_USCI0CKEN_Pos)              /*!< CLK_T::APBCLK1: USCI0CKEN Mask         */

#define CLK_APBCLK1_USCI1CKEN_Pos        (9)                                               /*!< CLK_T::APBCLK1: USCI1CKEN Position     */
#define CLK_APBCLK1_USCI1CKEN_Msk        (0x1ul << CLK_APBCLK1_USCI1CKEN_Pos)              /*!< CLK_T::APBCLK1: USCI1CKEN Mask         */

#define CLK_APBCLK1_WWDTCKEN_Pos         (11)                                              /*!< CLK_T::APBCLK1: WWDTCKEN Position      */
#define CLK_APBCLK1_WWDTCKEN_Msk         (0x1ul << CLK_APBCLK1_WWDTCKEN_Pos)               /*!< CLK_T::APBCLK1: WWDTCKEN Mask          */

#define CLK_APBCLK1_DACEN_Pos            (12)                                              /*!< CLK_T::APBCLK1: DACEN Position         */
#define CLK_APBCLK1_DACEN_Msk            (0x1ul << CLK_APBCLK1_DACEN_Pos)                  /*!< CLK_T::APBCLK1: DACEN Mask             */

#define CLK_APBCLK1_EPWM0CKEN_Pos        (16)                                              /*!< CLK_T::APBCLK1: EPWM0CKEN Position     */
#define CLK_APBCLK1_EPWM0CKEN_Msk        (0x1ul << CLK_APBCLK1_EPWM0CKEN_Pos)              /*!< CLK_T::APBCLK1: EPWM0CKEN Mask         */

#define CLK_APBCLK1_EPWM1CKEN_Pos        (17)                                              /*!< CLK_T::APBCLK1: EPWM1CKEN Position     */
#define CLK_APBCLK1_EPWM1CKEN_Msk        (0x1ul << CLK_APBCLK1_EPWM1CKEN_Pos)              /*!< CLK_T::APBCLK1: EPWM1CKEN Mask         */

#define CLK_APBCLK1_EQEI0CKEN_Pos        (22)                                              /*!< CLK_T::APBCLK1: EQEI0CKEN Position     */
#define CLK_APBCLK1_EQEI0CKEN_Msk        (0x1ul << CLK_APBCLK1_EQEI0CKEN_Pos)              /*!< CLK_T::APBCLK1: EQEI0CKEN Mask         */

#define CLK_APBCLK1_EQEI1CKEN_Pos        (23)                                              /*!< CLK_T::APBCLK1: EQEI1CKEN Position     */
#define CLK_APBCLK1_EQEI1CKEN_Msk        (0x1ul << CLK_APBCLK1_EQEI1CKEN_Pos)              /*!< CLK_T::APBCLK1: EQEI1CKEN Mask         */

#define CLK_APBCLK1_TKCKEN_Pos           (25)                                              /*!< CLK_T::APBCLK1: TKCKEN Position        */
#define CLK_APBCLK1_TKCKEN_Msk           (0x1ul << CLK_APBCLK1_TKCKEN_Pos)                 /*!< CLK_T::APBCLK1: TKCKEN Mask            */

#define CLK_APBCLK1_ECAP0CKEN_Pos        (26)                                              /*!< CLK_T::APBCLK1: ECAP0CKEN Position     */
#define CLK_APBCLK1_ECAP0CKEN_Msk        (0x1ul << CLK_APBCLK1_ECAP0CKEN_Pos)              /*!< CLK_T::APBCLK1: ECAP0CKEN Mask         */

#define CLK_APBCLK1_ECAP1CKEN_Pos        (27)                                              /*!< CLK_T::APBCLK1: ECAP1CKEN Position     */
#define CLK_APBCLK1_ECAP1CKEN_Msk        (0x1ul << CLK_APBCLK1_ECAP1CKEN_Pos)              /*!< CLK_T::APBCLK1: ECAP1CKEN Mask         */

#define CLK_CLKSEL0_HCLK0SEL_Pos         (0)                                               /*!< CLK_T::CLKSEL0: HCLK0SEL Position      */
#define CLK_CLKSEL0_HCLK0SEL_Msk         (0x7ul << CLK_CLKSEL0_HCLK0SEL_Pos)               /*!< CLK_T::CLKSEL0: HCLK0SEL Mask          */

#define CLK_CLKSEL0_STCLKSEL_Pos         (3)                                               /*!< CLK_T::CLKSEL0: STCLKSEL Position      */
#define CLK_CLKSEL0_STCLKSEL_Msk         (0x7ul << CLK_CLKSEL0_STCLKSEL_Pos)               /*!< CLK_T::CLKSEL0: STCLKSEL Mask          */

#define CLK_CLKSEL0_USBSEL_Pos           (8)                                               /*!< CLK_T::CLKSEL0: USBSEL Position        */
#define CLK_CLKSEL0_USBSEL_Msk           (0x1ul << CLK_CLKSEL0_USBSEL_Pos)                 /*!< CLK_T::CLKSEL0: USBSEL Mask            */

#define CLK_CLKSEL0_EADC0SEL_Pos         (10)                                              /*!< CLK_T::CLKSEL0: EADC0SEL Position      */
#define CLK_CLKSEL0_EADC0SEL_Msk         (0x3ul << CLK_CLKSEL0_EADC0SEL_Pos)               /*!< CLK_T::CLKSEL0: EADC0SEL Mask          */

#define CLK_CLKSEL0_HCLK1SEL_Pos         (12)                                              /*!< CLK_T::CLKSEL0: HCLK1SEL Position      */
#define CLK_CLKSEL0_HCLK1SEL_Msk         (0x7ul << CLK_CLKSEL0_HCLK1SEL_Pos)               /*!< CLK_T::CLKSEL0: HCLK1SEL Mask          */

#define CLK_CLKSEL0_CANFD0SEL_Pos        (24)                                              /*!< CLK_T::CLKSEL0: CANFD0SEL Position     */
#define CLK_CLKSEL0_CANFD0SEL_Msk        (0x3ul << CLK_CLKSEL0_CANFD0SEL_Pos)              /*!< CLK_T::CLKSEL0: CANFD0SEL Mask         */

#define CLK_CLKSEL0_CANFD1SEL_Pos        (26)                                              /*!< CLK_T::CLKSEL0: CANFD1SEL Position     */
#define CLK_CLKSEL0_CANFD1SEL_Msk        (0x3ul << CLK_CLKSEL0_CANFD1SEL_Pos)              /*!< CLK_T::CLKSEL0: CANFD1SEL Mask         */

#define CLK_CLKSEL1_CLKOSEL_Pos          (4)                                               /*!< CLK_T::CLKSEL1: CLKOSEL Position       */
#define CLK_CLKSEL1_CLKOSEL_Msk          (0xful << CLK_CLKSEL1_CLKOSEL_Pos)                /*!< CLK_T::CLKSEL1: CLKOSEL Mask           */

#define CLK_CLKSEL1_TMR0SEL_Pos          (8)                                               /*!< CLK_T::CLKSEL1: TMR0SEL Position       */
#define CLK_CLKSEL1_TMR0SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR0SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR0SEL Mask           */

#define CLK_CLKSEL1_TMR1SEL_Pos          (12)                                              /*!< CLK_T::CLKSEL1: TMR1SEL Position       */
#define CLK_CLKSEL1_TMR1SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR1SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR1SEL Mask           */

#define CLK_CLKSEL1_TMR2SEL_Pos          (16)                                              /*!< CLK_T::CLKSEL1: TMR2SEL Position       */
#define CLK_CLKSEL1_TMR2SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR2SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR2SEL Mask           */

#define CLK_CLKSEL1_TMR3SEL_Pos          (20)                                              /*!< CLK_T::CLKSEL1: TMR3SEL Position       */
#define CLK_CLKSEL1_TMR3SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR3SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR3SEL Mask           */

#define CLK_CLKSEL1_WWDTSEL_Pos          (30)                                              /*!< CLK_T::CLKSEL1: WWDTSEL Position       */
#define CLK_CLKSEL1_WWDTSEL_Msk          (0x3ul << CLK_CLKSEL1_WWDTSEL_Pos)                /*!< CLK_T::CLKSEL1: WWDTSEL Mask           */

#define CLK_CLKSEL2_EPWM0SEL_Pos         (0)                                               /*!< CLK_T::CLKSEL2: EPWM0SEL Position      */
#define CLK_CLKSEL2_EPWM0SEL_Msk         (0x1ul << CLK_CLKSEL2_EPWM0SEL_Pos)               /*!< CLK_T::CLKSEL2: EPWM0SEL Mask          */

#define CLK_CLKSEL2_EPWM1SEL_Pos         (1)                                               /*!< CLK_T::CLKSEL2: EPWM1SEL Position      */
#define CLK_CLKSEL2_EPWM1SEL_Msk         (0x1ul << CLK_CLKSEL2_EPWM1SEL_Pos)               /*!< CLK_T::CLKSEL2: EPWM1SEL Mask          */

#define CLK_CLKSEL2_QSPI0SEL_Pos         (2)                                               /*!< CLK_T::CLKSEL2: QSPI0SEL Position      */
#define CLK_CLKSEL2_QSPI0SEL_Msk         (0x3ul << CLK_CLKSEL2_QSPI0SEL_Pos)               /*!< CLK_T::CLKSEL2: QSPI0SEL Mask          */

#define CLK_CLKSEL2_SPI0SEL_Pos          (4)                                               /*!< CLK_T::CLKSEL2: SPI0SEL Position       */
#define CLK_CLKSEL2_SPI0SEL_Msk          (0x7ul << CLK_CLKSEL2_SPI0SEL_Pos)                /*!< CLK_T::CLKSEL2: SPI0SEL Mask           */

#define CLK_CLKSEL2_TKSEL_Pos            (7)                                               /*!< CLK_T::CLKSEL2: TKSEL Position         */
#define CLK_CLKSEL2_TKSEL_Msk            (0x1ul << CLK_CLKSEL2_TKSEL_Pos)                  /*!< CLK_T::CLKSEL2: TKSEL Mask             */

#define CLK_CLKSEL2_SPI1SEL_Pos          (12)                                              /*!< CLK_T::CLKSEL2: SPI1SEL Position       */
#define CLK_CLKSEL2_SPI1SEL_Msk          (0x7ul << CLK_CLKSEL2_SPI1SEL_Pos)                /*!< CLK_T::CLKSEL2: SPI1SEL Mask           */

#define CLK_CLKSEL3_PWM0SEL_Pos          (6)                                               /*!< CLK_T::CLKSEL3: PWM0SEL Position       */
#define CLK_CLKSEL3_PWM0SEL_Msk          (0x1ul << CLK_CLKSEL3_PWM0SEL_Pos)                /*!< CLK_T::CLKSEL3: PWM0SEL Mask           */

#define CLK_CLKSEL3_PWM1SEL_Pos          (7)                                               /*!< CLK_T::CLKSEL3: PWM1SEL Position       */
#define CLK_CLKSEL3_PWM1SEL_Msk          (0x1ul << CLK_CLKSEL3_PWM1SEL_Pos)                /*!< CLK_T::CLKSEL3: PWM1SEL Mask           */

#define CLK_CLKSEL3_SPI2SEL_Pos          (8)                                               /*!< CLK_T::CLKSEL3: SPI2SEL Position       */
#define CLK_CLKSEL3_SPI2SEL_Msk          (0x7ul << CLK_CLKSEL3_SPI2SEL_Pos)                /*!< CLK_T::CLKSEL3: SPI2SEL Mask           */

#define CLK_CLKSEL3_SPI3SEL_Pos          (12)                                              /*!< CLK_T::CLKSEL3: SPI3SEL Position       */
#define CLK_CLKSEL3_SPI3SEL_Msk          (0x7ul << CLK_CLKSEL3_SPI3SEL_Pos)                /*!< CLK_T::CLKSEL3: SPI3SEL Mask           */

#define CLK_CLKDIV0_HCLK0DIV_Pos         (0)                                               /*!< CLK_T::CLKDIV0: HCLK0DIV Position      */
#define CLK_CLKDIV0_HCLK0DIV_Msk         (0xful << CLK_CLKDIV0_HCLK0DIV_Pos)               /*!< CLK_T::CLKDIV0: HCLK0DIV Mask          */

#define CLK_CLKDIV0_USBDIV_Pos           (4)                                               /*!< CLK_T::CLKDIV0: USBDIV Position        */
#define CLK_CLKDIV0_USBDIV_Msk           (0xful << CLK_CLKDIV0_USBDIV_Pos)                 /*!< CLK_T::CLKDIV0: USBDIV Mask            */

#define CLK_CLKDIV0_UART0DIV_Pos         (8)                                               /*!< CLK_T::CLKDIV0: UART0DIV Position      */
#define CLK_CLKDIV0_UART0DIV_Msk         (0xful << CLK_CLKDIV0_UART0DIV_Pos)               /*!< CLK_T::CLKDIV0: UART0DIV Mask          */

#define CLK_CLKDIV0_UART1DIV_Pos         (12)                                              /*!< CLK_T::CLKDIV0: UART1DIV Position      */
#define CLK_CLKDIV0_UART1DIV_Msk         (0xful << CLK_CLKDIV0_UART1DIV_Pos)               /*!< CLK_T::CLKDIV0: UART1DIV Mask          */

#define CLK_CLKDIV0_EADC0DIV_Pos         (16)                                              /*!< CLK_T::CLKDIV0: EADC0DIV Position      */
#define CLK_CLKDIV0_EADC0DIV_Msk         (0xfful << CLK_CLKDIV0_EADC0DIV_Pos)              /*!< CLK_T::CLKDIV0: EADC0DIV Mask          */

#define CLK_CLKDIV4_UART2DIV_Pos         (0)                                               /*!< CLK_T::CLKDIV4: UART2DIV Position      */
#define CLK_CLKDIV4_UART2DIV_Msk         (0xful << CLK_CLKDIV4_UART2DIV_Pos)               /*!< CLK_T::CLKDIV4: UART2DIV Mask          */

#define CLK_CLKDIV4_UART3DIV_Pos         (4)                                               /*!< CLK_T::CLKDIV4: UART3DIV Position      */
#define CLK_CLKDIV4_UART3DIV_Msk         (0xful << CLK_CLKDIV4_UART3DIV_Pos)               /*!< CLK_T::CLKDIV4: UART3DIV Mask          */

#define CLK_CLKDIV4_UART4DIV_Pos         (8)                                               /*!< CLK_T::CLKDIV4: UART4DIV Position      */
#define CLK_CLKDIV4_UART4DIV_Msk         (0xful << CLK_CLKDIV4_UART4DIV_Pos)               /*!< CLK_T::CLKDIV4: UART4DIV Mask          */

#define CLK_CLKDIV4_UART5DIV_Pos         (12)                                              /*!< CLK_T::CLKDIV4: UART5DIV Position      */
#define CLK_CLKDIV4_UART5DIV_Msk         (0xful << CLK_CLKDIV4_UART5DIV_Pos)               /*!< CLK_T::CLKDIV4: UART5DIV Mask          */

#define CLK_CLKDIV4_UART6DIV_Pos         (16)                                              /*!< CLK_T::CLKDIV4: UART6DIV Position      */
#define CLK_CLKDIV4_UART6DIV_Msk         (0xful << CLK_CLKDIV4_UART6DIV_Pos)               /*!< CLK_T::CLKDIV4: UART6DIV Mask          */

#define CLK_CLKDIV4_UART7DIV_Pos         (20)                                              /*!< CLK_T::CLKDIV4: UART7DIV Position      */
#define CLK_CLKDIV4_UART7DIV_Msk         (0xful << CLK_CLKDIV4_UART7DIV_Pos)               /*!< CLK_T::CLKDIV4: UART7DIV Mask          */

#define CLK_PCLKDIV_APB0DIV_Pos          (0)                                               /*!< CLK_T::PCLKDIV: APB0DIV Position       */
#define CLK_PCLKDIV_APB0DIV_Msk          (0x7ul << CLK_PCLKDIV_APB0DIV_Pos)                /*!< CLK_T::PCLKDIV: APB0DIV Mask           */

#define CLK_PCLKDIV_APB1DIV_Pos          (4)                                               /*!< CLK_T::PCLKDIV: APB1DIV Position       */
#define CLK_PCLKDIV_APB1DIV_Msk          (0x7ul << CLK_PCLKDIV_APB1DIV_Pos)                /*!< CLK_T::PCLKDIV: APB1DIV Mask           */

#define CLK_APBCLK2_ACMP2CKEN_Pos        (7)                                               /*!< CLK_T::APBCLK2: ACMP2CKEN Position     */
#define CLK_APBCLK2_ACMP2CKEN_Msk        (0x1ul << CLK_APBCLK2_ACMP2CKEN_Pos)              /*!< CLK_T::APBCLK2: ACMP2CKEN Mask         */

#define CLK_APBCLK2_PWM0CKEN_Pos         (8)                                               /*!< CLK_T::APBCLK2: PWM0CKEN Position      */
#define CLK_APBCLK2_PWM0CKEN_Msk         (0x1ul << CLK_APBCLK2_PWM0CKEN_Pos)               /*!< CLK_T::APBCLK2: PWM0CKEN Mask          */

#define CLK_APBCLK2_PWM1CKEN_Pos         (9)                                               /*!< CLK_T::APBCLK2: PWM1CKEN Position      */
#define CLK_APBCLK2_PWM1CKEN_Msk         (0x1ul << CLK_APBCLK2_PWM1CKEN_Pos)               /*!< CLK_T::APBCLK2: PWM1CKEN Mask          */

#define CLK_APBCLK2_UTCPD0CKEN_Pos       (15)                                              /*!< CLK_T::APBCLK2: UTCPD0CKEN Position    */
#define CLK_APBCLK2_UTCPD0CKEN_Msk       (0x1ul << CLK_APBCLK2_UTCPD0CKEN_Pos)             /*!< CLK_T::APBCLK2: UTCPD0CKEN Mask        */

#define CLK_CLKDIV5_CANFD0DIV_Pos        (0)                                               /*!< CLK_T::CLKDIV5: CANFD0DIV Position     */
#define CLK_CLKDIV5_CANFD0DIV_Msk        (0xful << CLK_CLKDIV5_CANFD0DIV_Pos)              /*!< CLK_T::CLKDIV5: CANFD0DIV Mask         */

#define CLK_CLKDIV5_CANFD1DIV_Pos        (4)                                               /*!< CLK_T::CLKDIV5: CANFD1DIV Position     */
#define CLK_CLKDIV5_CANFD1DIV_Msk        (0xful << CLK_CLKDIV5_CANFD1DIV_Pos)              /*!< CLK_T::CLKDIV5: CANFD1DIV Mask         */

#define CLK_PLLCTL_PD_Pos                (16)                                              /*!< CLK_T::PLLCTL: PD Position             */
#define CLK_PLLCTL_PD_Msk                (0x1ul << CLK_PLLCTL_PD_Pos)                      /*!< CLK_T::PLLCTL: PD Mask                 */

#define CLK_PLLCTL_BP_Pos                (17)                                              /*!< CLK_T::PLLCTL: BP Position             */
#define CLK_PLLCTL_BP_Msk                (0x1ul << CLK_PLLCTL_BP_Pos)                      /*!< CLK_T::PLLCTL: BP Mask                 */

#define CLK_PLLCTL_OE_Pos                (18)                                              /*!< CLK_T::PLLCTL: OE Position             */
#define CLK_PLLCTL_OE_Msk                (0x1ul << CLK_PLLCTL_OE_Pos)                      /*!< CLK_T::PLLCTL: OE Mask                 */

#define CLK_PLLCTL_PLLSRC_Pos            (19)                                              /*!< CLK_T::PLLCTL: PLLSRC Position         */
#define CLK_PLLCTL_PLLSRC_Msk            (0x1ul << CLK_PLLCTL_PLLSRC_Pos)                  /*!< CLK_T::PLLCTL: PLLSRC Mask             */

#define CLK_PLLCTL_STBSEL_Pos            (23)                                              /*!< CLK_T::PLLCTL: STBSEL Position         */
#define CLK_PLLCTL_STBSEL_Msk            (0x1ul << CLK_PLLCTL_STBSEL_Pos)                  /*!< CLK_T::PLLCTL: STBSEL Mask             */

#define CLK_PLLCTL2_FBDIV_Pos            (0)                                               /*!< CLK_T::PLLCTL2: FBDIV Position         */
#define CLK_PLLCTL2_FBDIV_Msk            (0x1fful << CLK_PLLCTL2_FBDIV_Pos)                /*!< CLK_T::PLLCTL2: FBDIV Mask             */

#define CLK_PLLCTL2_INDIV_Pos            (9)                                               /*!< CLK_T::PLLCTL2: INDIV Position         */
#define CLK_PLLCTL2_INDIV_Msk            (0x1ful << CLK_PLLCTL2_INDIV_Pos)                 /*!< CLK_T::PLLCTL2: INDIV Mask             */

#define CLK_PLLCTL2_OUTDIV_Pos           (14)                                              /*!< CLK_T::PLLCTL2: OUTDIV Position        */
#define CLK_PLLCTL2_OUTDIV_Msk           (0x3ul << CLK_PLLCTL2_OUTDIV_Pos)                 /*!< CLK_T::PLLCTL2: OUTDIV Mask            */

#define CLK_PLLCTL2_FRDIV_Pos            (16)                                              /*!< CLK_T::PLLCTL2: FRDIV Position         */
#define CLK_PLLCTL2_FRDIV_Msk            (0xffful << CLK_PLLCTL2_FRDIV_Pos)                /*!< CLK_T::PLLCTL2: FRDIV Mask             */

#define CLK_CLKSEL4_UART0SEL_Pos         (0)                                               /*!< CLK_T::CLKSEL4: UART0SEL Position      */
#define CLK_CLKSEL4_UART0SEL_Msk         (0x7ul << CLK_CLKSEL4_UART0SEL_Pos)               /*!< CLK_T::CLKSEL4: UART0SEL Mask          */

#define CLK_CLKSEL4_UART1SEL_Pos         (4)                                               /*!< CLK_T::CLKSEL4: UART1SEL Position      */
#define CLK_CLKSEL4_UART1SEL_Msk         (0x7ul << CLK_CLKSEL4_UART1SEL_Pos)               /*!< CLK_T::CLKSEL4: UART1SEL Mask          */

#define CLK_CLKSEL4_UART2SEL_Pos         (8)                                               /*!< CLK_T::CLKSEL4: UART2SEL Position      */
#define CLK_CLKSEL4_UART2SEL_Msk         (0x7ul << CLK_CLKSEL4_UART2SEL_Pos)               /*!< CLK_T::CLKSEL4: UART2SEL Mask          */

#define CLK_CLKSEL4_UART3SEL_Pos         (12)                                              /*!< CLK_T::CLKSEL4: UART3SEL Position      */
#define CLK_CLKSEL4_UART3SEL_Msk         (0x7ul << CLK_CLKSEL4_UART3SEL_Pos)               /*!< CLK_T::CLKSEL4: UART3SEL Mask          */

#define CLK_CLKSEL4_UART4SEL_Pos         (16)                                              /*!< CLK_T::CLKSEL4: UART4SEL Position      */
#define CLK_CLKSEL4_UART4SEL_Msk         (0x7ul << CLK_CLKSEL4_UART4SEL_Pos)               /*!< CLK_T::CLKSEL4: UART4SEL Mask          */

#define CLK_CLKSEL4_UART5SEL_Pos         (20)                                              /*!< CLK_T::CLKSEL4: UART5SEL Position      */
#define CLK_CLKSEL4_UART5SEL_Msk         (0x7ul << CLK_CLKSEL4_UART5SEL_Pos)               /*!< CLK_T::CLKSEL4: UART5SEL Mask          */

#define CLK_CLKSEL4_UART6SEL_Pos         (24)                                              /*!< CLK_T::CLKSEL4: UART6SEL Position      */
#define CLK_CLKSEL4_UART6SEL_Msk         (0x7ul << CLK_CLKSEL4_UART6SEL_Pos)               /*!< CLK_T::CLKSEL4: UART6SEL Mask          */

#define CLK_CLKSEL4_UART7SEL_Pos         (28)                                              /*!< CLK_T::CLKSEL4: UART7SEL Position      */
#define CLK_CLKSEL4_UART7SEL_Msk         (0x7ul << CLK_CLKSEL4_UART7SEL_Pos)               /*!< CLK_T::CLKSEL4: UART7SEL Mask          */

#define CLK_STATUS_HXTSTB_Pos            (0)                                               /*!< CLK_T::STATUS: HXTSTB Position         */
#define CLK_STATUS_HXTSTB_Msk            (0x1ul << CLK_STATUS_HXTSTB_Pos)                  /*!< CLK_T::STATUS: HXTSTB Mask             */

#define CLK_STATUS_LXTSTB_Pos            (1)                                               /*!< CLK_T::STATUS: LXTSTB Position         */
#define CLK_STATUS_LXTSTB_Msk            (0x1ul << CLK_STATUS_LXTSTB_Pos)                  /*!< CLK_T::STATUS: LXTSTB Mask             */

#define CLK_STATUS_PLLSTB_Pos            (2)                                               /*!< CLK_T::STATUS: PLLSTB Position         */
#define CLK_STATUS_PLLSTB_Msk            (0x1ul << CLK_STATUS_PLLSTB_Pos)                  /*!< CLK_T::STATUS: PLLSTB Mask             */

#define CLK_STATUS_LIRCSTB_Pos           (3)                                               /*!< CLK_T::STATUS: LIRCSTB Position        */
#define CLK_STATUS_LIRCSTB_Msk           (0x1ul << CLK_STATUS_LIRCSTB_Pos)                 /*!< CLK_T::STATUS: LIRCSTB Mask            */

#define CLK_STATUS_HIRCSTB_Pos           (4)                                               /*!< CLK_T::STATUS: HIRCSTB Position        */
#define CLK_STATUS_HIRCSTB_Msk           (0x1ul << CLK_STATUS_HIRCSTB_Pos)                 /*!< CLK_T::STATUS: HIRCSTB Mask            */

#define CLK_STATUS_MIRCSTB_Pos           (5)                                               /*!< CLK_T::STATUS: MIRCSTB Position        */
#define CLK_STATUS_MIRCSTB_Msk           (0x1ul << CLK_STATUS_MIRCSTB_Pos)                 /*!< CLK_T::STATUS: MIRCSTB Mask            */

#define CLK_STATUS_HIRC48MSTB_Pos        (6)                                               /*!< CLK_T::STATUS: HIRC48MSTB Position     */
#define CLK_STATUS_HIRC48MSTB_Msk        (0x1ul << CLK_STATUS_HIRC48MSTB_Pos)              /*!< CLK_T::STATUS: HIRC48MSTB Mask         */

#define CLK_STATUS_CLKSFAIL_Pos          (7)                                               /*!< CLK_T::STATUS: CLKSFAIL Position       */
#define CLK_STATUS_CLKSFAIL_Msk          (0x1ul << CLK_STATUS_CLKSFAIL_Pos)                /*!< CLK_T::STATUS: CLKSFAIL Mask           */

#define CLK_AHBCLK1_CANRAM0EN_Pos        (16)                                              /*!< CLK_T::AHBCLK1: CANRAM0EN Position     */
#define CLK_AHBCLK1_CANRAM0EN_Msk        (0x1ul << CLK_AHBCLK1_CANRAM0EN_Pos)              /*!< CLK_T::AHBCLK1: CANRAM0EN Mask         */

#define CLK_AHBCLK1_CANRAM1EN_Pos        (17)                                              /*!< CLK_T::AHBCLK1: CANRAM1EN Position     */
#define CLK_AHBCLK1_CANRAM1EN_Msk        (0x1ul << CLK_AHBCLK1_CANRAM1EN_Pos)              /*!< CLK_T::AHBCLK1: CANRAM1EN Mask         */

#define CLK_AHBCLK1_CANFD0CKEN_Pos       (20)                                              /*!< CLK_T::AHBCLK1: CANFD0CKEN Position    */
#define CLK_AHBCLK1_CANFD0CKEN_Msk       (0x1ul << CLK_AHBCLK1_CANFD0CKEN_Pos)             /*!< CLK_T::AHBCLK1: CANFD0CKEN Mask        */

#define CLK_AHBCLK1_CANFD1CKEN_Pos       (21)                                              /*!< CLK_T::AHBCLK1: CANFD1CKEN Position    */
#define CLK_AHBCLK1_CANFD1CKEN_Msk       (0x1ul << CLK_AHBCLK1_CANFD1CKEN_Pos)             /*!< CLK_T::AHBCLK1: CANFD1CKEN Mask        */

#define CLK_AHBCLK1_HCLK1EN_Pos          (28)                                              /*!< CLK_T::AHBCLK1: HCLK1EN Position       */
#define CLK_AHBCLK1_HCLK1EN_Msk          (0x1ul << CLK_AHBCLK1_HCLK1EN_Pos)                /*!< CLK_T::AHBCLK1: HCLK1EN Mask           */

#define CLK_CLKOCTL_FREQSEL_Pos          (0)                                               /*!< CLK_T::CLKOCTL: FREQSEL Position       */
#define CLK_CLKOCTL_FREQSEL_Msk          (0xful << CLK_CLKOCTL_FREQSEL_Pos)                /*!< CLK_T::CLKOCTL: FREQSEL Mask           */

#define CLK_CLKOCTL_CLKOEN_Pos           (4)                                               /*!< CLK_T::CLKOCTL: CLKOEN Position        */
#define CLK_CLKOCTL_CLKOEN_Msk           (0x1ul << CLK_CLKOCTL_CLKOEN_Pos)                 /*!< CLK_T::CLKOCTL: CLKOEN Mask            */

#define CLK_CLKOCTL_DIV1EN_Pos           (5)                                               /*!< CLK_T::CLKOCTL: DIV1EN Position        */
#define CLK_CLKOCTL_DIV1EN_Msk           (0x1ul << CLK_CLKOCTL_DIV1EN_Pos)                 /*!< CLK_T::CLKOCTL: DIV1EN Mask            */

#define CLK_CLKOCTL_CLK1HZEN_Pos         (6)                                               /*!< CLK_T::CLKOCTL: CLK1HZEN Position      */
#define CLK_CLKOCTL_CLK1HZEN_Msk         (0x1ul << CLK_CLKOCTL_CLK1HZEN_Pos)               /*!< CLK_T::CLKOCTL: CLK1HZEN Mask          */

#define CLK_CLKDCTL_HXTFDEN_Pos          (4)                                               /*!< CLK_T::CLKDCTL: HXTFDEN Position       */
#define CLK_CLKDCTL_HXTFDEN_Msk          (0x1ul << CLK_CLKDCTL_HXTFDEN_Pos)                /*!< CLK_T::CLKDCTL: HXTFDEN Mask           */

#define CLK_CLKDCTL_HXTFIEN_Pos          (5)                                               /*!< CLK_T::CLKDCTL: HXTFIEN Position       */
#define CLK_CLKDCTL_HXTFIEN_Msk          (0x1ul << CLK_CLKDCTL_HXTFIEN_Pos)                /*!< CLK_T::CLKDCTL: HXTFIEN Mask           */

#define CLK_CLKDCTL_LXTFDEN_Pos          (12)                                              /*!< CLK_T::CLKDCTL: LXTFDEN Position       */
#define CLK_CLKDCTL_LXTFDEN_Msk          (0x1ul << CLK_CLKDCTL_LXTFDEN_Pos)                /*!< CLK_T::CLKDCTL: LXTFDEN Mask           */

#define CLK_CLKDCTL_LXTFIEN_Pos          (13)                                              /*!< CLK_T::CLKDCTL: LXTFIEN Position       */
#define CLK_CLKDCTL_LXTFIEN_Msk          (0x1ul << CLK_CLKDCTL_LXTFIEN_Pos)                /*!< CLK_T::CLKDCTL: LXTFIEN Mask           */

#define CLK_CLKDCTL_HXTFQDEN_Pos         (16)                                              /*!< CLK_T::CLKDCTL: HXTFQDEN Position      */
#define CLK_CLKDCTL_HXTFQDEN_Msk         (0x1ul << CLK_CLKDCTL_HXTFQDEN_Pos)               /*!< CLK_T::CLKDCTL: HXTFQDEN Mask          */

#define CLK_CLKDCTL_HXTFQIEN_Pos         (17)                                              /*!< CLK_T::CLKDCTL: HXTFQIEN Position      */
#define CLK_CLKDCTL_HXTFQIEN_Msk         (0x1ul << CLK_CLKDCTL_HXTFQIEN_Pos)               /*!< CLK_T::CLKDCTL: HXTFQIEN Mask          */

#define CLK_CLKDSTS_HXTFIF_Pos           (0)                                               /*!< CLK_T::CLKDSTS: HXTFIF Position        */
#define CLK_CLKDSTS_HXTFIF_Msk           (0x1ul << CLK_CLKDSTS_HXTFIF_Pos)                 /*!< CLK_T::CLKDSTS: HXTFIF Mask            */

#define CLK_CLKDSTS_LXTFIF_Pos           (1)                                               /*!< CLK_T::CLKDSTS: LXTFIF Position        */
#define CLK_CLKDSTS_LXTFIF_Msk           (0x1ul << CLK_CLKDSTS_LXTFIF_Pos)                 /*!< CLK_T::CLKDSTS: LXTFIF Mask            */

#define CLK_CLKDSTS_HXTFQIF_Pos          (8)                                               /*!< CLK_T::CLKDSTS: HXTFQIF Position       */
#define CLK_CLKDSTS_HXTFQIF_Msk          (0x1ul << CLK_CLKDSTS_HXTFQIF_Pos)                /*!< CLK_T::CLKDSTS: HXTFQIF Mask           */

#define CLK_CDUPB_UPERBD_Pos             (0)                                               /*!< CLK_T::CDUPB: UPERBD Position          */
#define CLK_CDUPB_UPERBD_Msk             (0x7fful << CLK_CDUPB_UPERBD_Pos)                 /*!< CLK_T::CDUPB: UPERBD Mask              */

#define CLK_CDLOWB_LOWERBD_Pos           (0)                                               /*!< CLK_T::CDLOWB: LOWERBD Position        */
#define CLK_CDLOWB_LOWERBD_Msk           (0x7fful << CLK_CDLOWB_LOWERBD_Pos)               /*!< CLK_T::CDLOWB: LOWERBD Mask            */

#define CLK_STOPREQ_CANFD0REQ_Pos        (0)                                               /*!< CLK_T::STOPREQ: CANFD0REQ Position     */
#define CLK_STOPREQ_CANFD0REQ_Msk        (0x1ul << CLK_STOPREQ_CANFD0REQ_Pos)              /*!< CLK_T::STOPREQ: CANFD0REQ Mask         */

#define CLK_STOPREQ_CANFD1REQ_Pos        (1)                                               /*!< CLK_T::STOPREQ: CANFD1REQ Position     */
#define CLK_STOPREQ_CANFD1REQ_Msk        (0x1ul << CLK_STOPREQ_CANFD1REQ_Pos)              /*!< CLK_T::STOPREQ: CANFD1REQ Mask         */

#define CLK_STOPACK_CANFD0ACK_Pos        (0)                                               /*!< CLK_T::STOPACK: CANFD0ACK Position     */
#define CLK_STOPACK_CANFD0ACK_Msk        (0x1ul << CLK_STOPACK_CANFD0ACK_Pos)              /*!< CLK_T::STOPACK: CANFD0ACK Mask         */

#define CLK_STOPACK_CANFD1ACK_Pos        (1)                                               /*!< CLK_T::STOPACK: CANFD1ACK Position     */
#define CLK_STOPACK_CANFD1ACK_Msk        (0x1ul << CLK_STOPACK_CANFD1ACK_Pos)              /*!< CLK_T::STOPACK: CANFD1ACK Mask         */

#define CLK_PMUCTL_PDMSEL_Pos            (0)                                               /*!< CLK_T::PMUCTL: PDMSEL Position         */
#define CLK_PMUCTL_PDMSEL_Msk            (0xful << CLK_PMUCTL_PDMSEL_Pos)                  /*!< CLK_T::PMUCTL: PDMSEL Mask             */

#define CLK_PMUCTL_SRETSEL_Pos           (8)                                               /*!< CLK_T::PMUCTL: SRETSEL Position        */
#define CLK_PMUCTL_SRETSEL_Msk           (0x7ul << CLK_PMUCTL_SRETSEL_Pos)                 /*!< CLK_T::PMUCTL: SRETSEL Mask            */

#define CLK_PMUCTL_LSRETSEL_Pos          (16)                                              /*!< CLK_T::PMUCTL: LSRETSEL Position       */
#define CLK_PMUCTL_LSRETSEL_Msk          (0x1ul << CLK_PMUCTL_LSRETSEL_Pos)                /*!< CLK_T::PMUCTL: LSRETSEL Mask           */

#define CLK_PMUCTL_CARETDIS_Pos          (20)                                              /*!< CLK_T::PMUCTL: CARETDIS Position       */
#define CLK_PMUCTL_CARETDIS_Msk          (0x1ul << CLK_PMUCTL_CARETDIS_Pos)                /*!< CLK_T::PMUCTL: CARETDIS Mask           */

#define CLK_PMUSTS_WKPIN0_Pos            (0)                                               /*!< CLK_T::PMUSTS: WKPIN0 Position         */
#define CLK_PMUSTS_WKPIN0_Msk            (0x1ul << CLK_PMUSTS_WKPIN0_Pos)                  /*!< CLK_T::PMUSTS: WKPIN0 Mask             */

#define CLK_PMUSTS_TMRWK_Pos             (1)                                               /*!< CLK_T::PMUSTS: TMRWK Position          */
#define CLK_PMUSTS_TMRWK_Msk             (0x1ul << CLK_PMUSTS_TMRWK_Pos)                   /*!< CLK_T::PMUSTS: TMRWK Mask              */

#define CLK_PMUSTS_RTCWK_Pos             (2)                                               /*!< CLK_T::PMUSTS: RTCWK Position          */
#define CLK_PMUSTS_RTCWK_Msk             (0x1ul << CLK_PMUSTS_RTCWK_Pos)                   /*!< CLK_T::PMUSTS: RTCWK Mask              */

#define CLK_PMUSTS_WKPIN1_Pos            (3)                                               /*!< CLK_T::PMUSTS: WKPIN1 Position         */
#define CLK_PMUSTS_WKPIN1_Msk            (0x1ul << CLK_PMUSTS_WKPIN1_Pos)                  /*!< CLK_T::PMUSTS: WKPIN1 Mask             */

#define CLK_PMUSTS_WKPIN2_Pos            (4)                                               /*!< CLK_T::PMUSTS: WKPIN2 Position         */
#define CLK_PMUSTS_WKPIN2_Msk            (0x1ul << CLK_PMUSTS_WKPIN2_Pos)                  /*!< CLK_T::PMUSTS: WKPIN2 Mask             */

#define CLK_PMUSTS_WKPIN3_Pos            (5)                                               /*!< CLK_T::PMUSTS: WKPIN3 Position         */
#define CLK_PMUSTS_WKPIN3_Msk            (0x1ul << CLK_PMUSTS_WKPIN3_Pos)                  /*!< CLK_T::PMUSTS: WKPIN3 Mask             */

#define CLK_PMUSTS_WKPIN4_Pos            (6)                                               /*!< CLK_T::PMUSTS: WKPIN4 Position         */
#define CLK_PMUSTS_WKPIN4_Msk            (0x1ul << CLK_PMUSTS_WKPIN4_Pos)                  /*!< CLK_T::PMUSTS: WKPIN4 Mask             */

#define CLK_PMUSTS_WKPIN5_Pos            (7)                                               /*!< CLK_T::PMUSTS: WKPIN5 Position         */
#define CLK_PMUSTS_WKPIN5_Msk            (0x1ul << CLK_PMUSTS_WKPIN5_Pos)                  /*!< CLK_T::PMUSTS: WKPIN5 Mask             */

#define CLK_PMUSTS_GPAWK0_Pos            (8)                                               /*!< CLK_T::PMUSTS: GPAWK0 Position         */
#define CLK_PMUSTS_GPAWK0_Msk            (0x1ul << CLK_PMUSTS_GPAWK0_Pos)                  /*!< CLK_T::PMUSTS: GPAWK0 Mask             */

#define CLK_PMUSTS_GPBWK0_Pos            (9)                                               /*!< CLK_T::PMUSTS: GPBWK0 Position         */
#define CLK_PMUSTS_GPBWK0_Msk            (0x1ul << CLK_PMUSTS_GPBWK0_Pos)                  /*!< CLK_T::PMUSTS: GPBWK0 Mask             */

#define CLK_PMUSTS_GPCWK0_Pos            (10)                                              /*!< CLK_T::PMUSTS: GPCWK0 Position         */
#define CLK_PMUSTS_GPCWK0_Msk            (0x1ul << CLK_PMUSTS_GPCWK0_Pos)                  /*!< CLK_T::PMUSTS: GPCWK0 Mask             */

#define CLK_PMUSTS_GPDWK0_Pos            (11)                                              /*!< CLK_T::PMUSTS: GPDWK0 Position         */
#define CLK_PMUSTS_GPDWK0_Msk            (0x1ul << CLK_PMUSTS_GPDWK0_Pos)                  /*!< CLK_T::PMUSTS: GPDWK0 Mask             */

#define CLK_PMUSTS_LVRWK_Pos             (12)                                              /*!< CLK_T::PMUSTS: LVRWK Position          */
#define CLK_PMUSTS_LVRWK_Msk             (0x1ul << CLK_PMUSTS_LVRWK_Pos)                   /*!< CLK_T::PMUSTS: LVRWK Mask              */

#define CLK_PMUSTS_BODWK_Pos             (13)                                              /*!< CLK_T::PMUSTS: BODWK Position          */
#define CLK_PMUSTS_BODWK_Msk             (0x1ul << CLK_PMUSTS_BODWK_Pos)                   /*!< CLK_T::PMUSTS: BODWK Mask              */

#define CLK_PMUSTS_RSTWK_Pos             (15)                                              /*!< CLK_T::PMUSTS: RSTWK Position          */
#define CLK_PMUSTS_RSTWK_Msk             (0x1ul << CLK_PMUSTS_RSTWK_Pos)                   /*!< CLK_T::PMUSTS: RSTWK Mask              */

#define CLK_PMUSTS_ACMPWK0_Pos           (16)                                              /*!< CLK_T::PMUSTS: ACMPWK0 Position        */
#define CLK_PMUSTS_ACMPWK0_Msk           (0x1ul << CLK_PMUSTS_ACMPWK0_Pos)                 /*!< CLK_T::PMUSTS: ACMPWK0 Mask            */

#define CLK_PMUSTS_ACMPWK1_Pos           (17)                                              /*!< CLK_T::PMUSTS: ACMPWK1 Position        */
#define CLK_PMUSTS_ACMPWK1_Msk           (0x1ul << CLK_PMUSTS_ACMPWK1_Pos)                 /*!< CLK_T::PMUSTS: ACMPWK1 Mask            */

#define CLK_PMUSTS_ACMPWK2_Pos           (18)                                              /*!< CLK_T::PMUSTS: ACMPWK2 Position        */
#define CLK_PMUSTS_ACMPWK2_Msk           (0x1ul << CLK_PMUSTS_ACMPWK2_Pos)                 /*!< CLK_T::PMUSTS: ACMPWK2 Mask            */

#define CLK_PMUSTS_GPAWK1_Pos            (24)                                              /*!< CLK_T::PMUSTS: GPAWK1 Position         */
#define CLK_PMUSTS_GPAWK1_Msk            (0x1ul << CLK_PMUSTS_GPAWK1_Pos)                  /*!< CLK_T::PMUSTS: GPAWK1 Mask             */

#define CLK_PMUSTS_GPBWK1_Pos            (25)                                              /*!< CLK_T::PMUSTS: GPBWK1 Position         */
#define CLK_PMUSTS_GPBWK1_Msk            (0x1ul << CLK_PMUSTS_GPBWK1_Pos)                  /*!< CLK_T::PMUSTS: GPBWK1 Mask             */

#define CLK_PMUSTS_GPCWK1_Pos            (26)                                              /*!< CLK_T::PMUSTS: GPCWK1 Position         */
#define CLK_PMUSTS_GPCWK1_Msk            (0x1ul << CLK_PMUSTS_GPCWK1_Pos)                  /*!< CLK_T::PMUSTS: GPCWK1 Mask             */

#define CLK_PMUSTS_GPDWK1_Pos            (27)                                              /*!< CLK_T::PMUSTS: GPDWK1 Position         */
#define CLK_PMUSTS_GPDWK1_Msk            (0x1ul << CLK_PMUSTS_GPDWK1_Pos)                  /*!< CLK_T::PMUSTS: GPDWK1 Mask             */

#define CLK_PMUSTS_CLRWK_Pos             (31)                                              /*!< CLK_T::PMUSTS: CLRWK Position          */
#define CLK_PMUSTS_CLRWK_Msk             (0x1ul << CLK_PMUSTS_CLRWK_Pos)                   /*!< CLK_T::PMUSTS: CLRWK Mask              */

#define CLK_PMUWKCTL_WKTMREN_Pos         (0)                                               /*!< CLK_T::PMUWKCTL: WKTMREN Position      */
#define CLK_PMUWKCTL_WKTMREN_Msk         (0x1ul << CLK_PMUWKCTL_WKTMREN_Pos)               /*!< CLK_T::PMUWKCTL: WKTMREN Mask          */

#define CLK_PMUWKCTL_WKTMRMOD_Pos        (1)                                               /*!< CLK_T::PMUWKCTL: WKTMRMOD Position     */
#define CLK_PMUWKCTL_WKTMRMOD_Msk        (0x1ul << CLK_PMUWKCTL_WKTMRMOD_Pos)              /*!< CLK_T::PMUWKCTL: WKTMRMOD Mask         */

#define CLK_PMUWKCTL_ACMPWKEN_Pos        (6)                                               /*!< CLK_T::PMUWKCTL: ACMPWKEN Position     */
#define CLK_PMUWKCTL_ACMPWKEN_Msk        (0x1ul << CLK_PMUWKCTL_ACMPWKEN_Pos)              /*!< CLK_T::PMUWKCTL: ACMPWKEN Mask         */

#define CLK_PMUWKCTL_RTCWKEN_Pos         (7)                                               /*!< CLK_T::PMUWKCTL: RTCWKEN Position      */
#define CLK_PMUWKCTL_RTCWKEN_Msk         (0x1ul << CLK_PMUWKCTL_RTCWKEN_Pos)               /*!< CLK_T::PMUWKCTL: RTCWKEN Mask          */

#define CLK_PMUWKCTL_WKTMRIS_Pos         (8)                                               /*!< CLK_T::PMUWKCTL: WKTMRIS Position      */
#define CLK_PMUWKCTL_WKTMRIS_Msk         (0xful << CLK_PMUWKCTL_WKTMRIS_Pos)               /*!< CLK_T::PMUWKCTL: WKTMRIS Mask          */

#define CLK_PMUWKCTL_WKPINEN0_Pos        (16)                                              /*!< CLK_T::PMUWKCTL: WKPINEN0 Position     */
#define CLK_PMUWKCTL_WKPINEN0_Msk        (0x3ul << CLK_PMUWKCTL_WKPINEN0_Pos)              /*!< CLK_T::PMUWKCTL: WKPINEN0 Mask         */

#define CLK_PMUWKCTL_WKPINEN1_Pos        (18)                                              /*!< CLK_T::PMUWKCTL: WKPINEN1 Position     */
#define CLK_PMUWKCTL_WKPINEN1_Msk        (0x3ul << CLK_PMUWKCTL_WKPINEN1_Pos)              /*!< CLK_T::PMUWKCTL: WKPINEN1 Mask         */

#define CLK_PMUWKCTL_WKPINEN2_Pos        (20)                                              /*!< CLK_T::PMUWKCTL: WKPINEN2 Position     */
#define CLK_PMUWKCTL_WKPINEN2_Msk        (0x3ul << CLK_PMUWKCTL_WKPINEN2_Pos)              /*!< CLK_T::PMUWKCTL: WKPINEN2 Mask         */

#define CLK_PMUWKCTL_WKPINEN3_Pos        (22)                                              /*!< CLK_T::PMUWKCTL: WKPINEN3 Position     */
#define CLK_PMUWKCTL_WKPINEN3_Msk        (0x3ul << CLK_PMUWKCTL_WKPINEN3_Pos)              /*!< CLK_T::PMUWKCTL: WKPINEN3 Mask         */

#define CLK_PMUWKCTL_WKPINEN4_Pos        (24)                                              /*!< CLK_T::PMUWKCTL: WKPINEN4 Position     */
#define CLK_PMUWKCTL_WKPINEN4_Msk        (0x3ul << CLK_PMUWKCTL_WKPINEN4_Pos)              /*!< CLK_T::PMUWKCTL: WKPINEN4 Mask         */

#define CLK_PMUWKCTL_WKPINEN5_Pos        (26)                                              /*!< CLK_T::PMUWKCTL: WKPINEN5 Position     */
#define CLK_PMUWKCTL_WKPINEN5_Msk        (0x3ul << CLK_PMUWKCTL_WKPINEN5_Pos)              /*!< CLK_T::PMUWKCTL: WKPINEN5 Mask         */

#define CLK_PMUWKCTL_DISAUTOC_Pos        (31)                                              /*!< CLK_T::PMUWKCTL: DISAUTOC Position     */
#define CLK_PMUWKCTL_DISAUTOC_Msk        (0x1ul << CLK_PMUWKCTL_DISAUTOC_Pos)              /*!< CLK_T::PMUWKCTL: DISAUTOC Mask         */

#define CLK_PWDBCTL_SWKDBCLKSEL_Pos      (0)                                               /*!< CLK_T::PWDBCTL: SWKDBCLKSEL Position   */
#define CLK_PWDBCTL_SWKDBCLKSEL_Msk      (0xful << CLK_PWDBCTL_SWKDBCLKSEL_Pos)            /*!< CLK_T::PWDBCTL: SWKDBCLKSEL Mask       */

#define CLK_PAPWCTL_WKEN0_Pos            (0)                                               /*!< CLK_T::PAPWCTL: WKEN0 Position         */
#define CLK_PAPWCTL_WKEN0_Msk            (0x1ul << CLK_PAPWCTL_WKEN0_Pos)                  /*!< CLK_T::PAPWCTL: WKEN0 Mask             */

#define CLK_PAPWCTL_PRWKEN0_Pos          (1)                                               /*!< CLK_T::PAPWCTL: PRWKEN0 Position       */
#define CLK_PAPWCTL_PRWKEN0_Msk          (0x1ul << CLK_PAPWCTL_PRWKEN0_Pos)                /*!< CLK_T::PAPWCTL: PRWKEN0 Mask           */

#define CLK_PAPWCTL_PFWKEN0_Pos          (2)                                               /*!< CLK_T::PAPWCTL: PFWKEN0 Position       */
#define CLK_PAPWCTL_PFWKEN0_Msk          (0x1ul << CLK_PAPWCTL_PFWKEN0_Pos)                /*!< CLK_T::PAPWCTL: PFWKEN0 Mask           */

#define CLK_PAPWCTL_WKPSEL0_Pos          (4)                                               /*!< CLK_T::PAPWCTL: WKPSEL0 Position       */
#define CLK_PAPWCTL_WKPSEL0_Msk          (0xful << CLK_PAPWCTL_WKPSEL0_Pos)                /*!< CLK_T::PAPWCTL: WKPSEL0 Mask           */

#define CLK_PAPWCTL_DBEN0_Pos            (8)                                               /*!< CLK_T::PAPWCTL: DBEN0 Position         */
#define CLK_PAPWCTL_DBEN0_Msk            (0x1ul << CLK_PAPWCTL_DBEN0_Pos)                  /*!< CLK_T::PAPWCTL: DBEN0 Mask             */

#define CLK_PAPWCTL_TRIGM0_Pos           (10)                                              /*!< CLK_T::PAPWCTL: TRIGM0 Position        */
#define CLK_PAPWCTL_TRIGM0_Msk           (0x1ul << CLK_PAPWCTL_TRIGM0_Pos)                 /*!< CLK_T::PAPWCTL: TRIGM0 Mask            */

#define CLK_PAPWCTL_NMR0_Pos             (11)                                              /*!< CLK_T::PAPWCTL: NMR0 Position          */
#define CLK_PAPWCTL_NMR0_Msk             (0x1ul << CLK_PAPWCTL_NMR0_Pos)                   /*!< CLK_T::PAPWCTL: NMR0 Mask              */

#define CLK_PAPWCTL_WKEN1_Pos            (16)                                              /*!< CLK_T::PAPWCTL: WKEN1 Position         */
#define CLK_PAPWCTL_WKEN1_Msk            (0x1ul << CLK_PAPWCTL_WKEN1_Pos)                  /*!< CLK_T::PAPWCTL: WKEN1 Mask             */

#define CLK_PAPWCTL_PRWKEN1_Pos          (17)                                              /*!< CLK_T::PAPWCTL: PRWKEN1 Position       */
#define CLK_PAPWCTL_PRWKEN1_Msk          (0x1ul << CLK_PAPWCTL_PRWKEN1_Pos)                /*!< CLK_T::PAPWCTL: PRWKEN1 Mask           */

#define CLK_PAPWCTL_PFWKEN1_Pos          (18)                                              /*!< CLK_T::PAPWCTL: PFWKEN1 Position       */
#define CLK_PAPWCTL_PFWKEN1_Msk          (0x1ul << CLK_PAPWCTL_PFWKEN1_Pos)                /*!< CLK_T::PAPWCTL: PFWKEN1 Mask           */

#define CLK_PAPWCTL_WKPSEL1_Pos          (20)                                              /*!< CLK_T::PAPWCTL: WKPSEL1 Position       */
#define CLK_PAPWCTL_WKPSEL1_Msk          (0xful << CLK_PAPWCTL_WKPSEL1_Pos)                /*!< CLK_T::PAPWCTL: WKPSEL1 Mask           */

#define CLK_PAPWCTL_DBEN1_Pos            (24)                                              /*!< CLK_T::PAPWCTL: DBEN1 Position         */
#define CLK_PAPWCTL_DBEN1_Msk            (0x1ul << CLK_PAPWCTL_DBEN1_Pos)                  /*!< CLK_T::PAPWCTL: DBEN1 Mask             */

#define CLK_PAPWCTL_TRIGM1_Pos           (26)                                              /*!< CLK_T::PAPWCTL: TRIGM1 Position        */
#define CLK_PAPWCTL_TRIGM1_Msk           (0x1ul << CLK_PAPWCTL_TRIGM1_Pos)                 /*!< CLK_T::PAPWCTL: TRIGM1 Mask            */

#define CLK_PAPWCTL_NMR1_Pos             (27)                                              /*!< CLK_T::PAPWCTL: NMR1 Position          */
#define CLK_PAPWCTL_NMR1_Msk             (0x1ul << CLK_PAPWCTL_NMR1_Pos)                   /*!< CLK_T::PAPWCTL: NMR1 Mask              */

#define CLK_PBPWCTL_WKEN0_Pos            (0)                                               /*!< CLK_T::PBPWCTL: WKEN0 Position         */
#define CLK_PBPWCTL_WKEN0_Msk            (0x1ul << CLK_PBPWCTL_WKEN0_Pos)                  /*!< CLK_T::PBPWCTL: WKEN0 Mask             */

#define CLK_PBPWCTL_PRWKEN0_Pos          (1)                                               /*!< CLK_T::PBPWCTL: PRWKEN0 Position       */
#define CLK_PBPWCTL_PRWKEN0_Msk          (0x1ul << CLK_PBPWCTL_PRWKEN0_Pos)                /*!< CLK_T::PBPWCTL: PRWKEN0 Mask           */

#define CLK_PBPWCTL_PFWKEN0_Pos          (2)                                               /*!< CLK_T::PBPWCTL: PFWKEN0 Position       */
#define CLK_PBPWCTL_PFWKEN0_Msk          (0x1ul << CLK_PBPWCTL_PFWKEN0_Pos)                /*!< CLK_T::PBPWCTL: PFWKEN0 Mask           */

#define CLK_PBPWCTL_WKPSEL0_Pos          (4)                                               /*!< CLK_T::PBPWCTL: WKPSEL0 Position       */
#define CLK_PBPWCTL_WKPSEL0_Msk          (0xful << CLK_PBPWCTL_WKPSEL0_Pos)                /*!< CLK_T::PBPWCTL: WKPSEL0 Mask           */

#define CLK_PBPWCTL_DBEN0_Pos            (8)                                               /*!< CLK_T::PBPWCTL: DBEN0 Position         */
#define CLK_PBPWCTL_DBEN0_Msk            (0x1ul << CLK_PBPWCTL_DBEN0_Pos)                  /*!< CLK_T::PBPWCTL: DBEN0 Mask             */

#define CLK_PBPWCTL_TRIGM0_Pos           (10)                                              /*!< CLK_T::PBPWCTL: TRIGM0 Position        */
#define CLK_PBPWCTL_TRIGM0_Msk           (0x1ul << CLK_PBPWCTL_TRIGM0_Pos)                 /*!< CLK_T::PBPWCTL: TRIGM0 Mask            */

#define CLK_PBPWCTL_NMR0_Pos             (11)                                              /*!< CLK_T::PBPWCTL: NMR0 Position          */
#define CLK_PBPWCTL_NMR0_Msk             (0x1ul << CLK_PBPWCTL_NMR0_Pos)                   /*!< CLK_T::PBPWCTL: NMR0 Mask              */

#define CLK_PBPWCTL_WKEN1_Pos            (16)                                              /*!< CLK_T::PBPWCTL: WKEN1 Position         */
#define CLK_PBPWCTL_WKEN1_Msk            (0x1ul << CLK_PBPWCTL_WKEN1_Pos)                  /*!< CLK_T::PBPWCTL: WKEN1 Mask             */

#define CLK_PBPWCTL_PRWKEN1_Pos          (17)                                              /*!< CLK_T::PBPWCTL: PRWKEN1 Position       */
#define CLK_PBPWCTL_PRWKEN1_Msk          (0x1ul << CLK_PBPWCTL_PRWKEN1_Pos)                /*!< CLK_T::PBPWCTL: PRWKEN1 Mask           */

#define CLK_PBPWCTL_PFWKEN1_Pos          (18)                                              /*!< CLK_T::PBPWCTL: PFWKEN1 Position       */
#define CLK_PBPWCTL_PFWKEN1_Msk          (0x1ul << CLK_PBPWCTL_PFWKEN1_Pos)                /*!< CLK_T::PBPWCTL: PFWKEN1 Mask           */

#define CLK_PBPWCTL_WKPSEL1_Pos          (20)                                              /*!< CLK_T::PBPWCTL: WKPSEL1 Position       */
#define CLK_PBPWCTL_WKPSEL1_Msk          (0xful << CLK_PBPWCTL_WKPSEL1_Pos)                /*!< CLK_T::PBPWCTL: WKPSEL1 Mask           */

#define CLK_PBPWCTL_DBEN1_Pos            (24)                                              /*!< CLK_T::PBPWCTL: DBEN1 Position         */
#define CLK_PBPWCTL_DBEN1_Msk            (0x1ul << CLK_PBPWCTL_DBEN1_Pos)                  /*!< CLK_T::PBPWCTL: DBEN1 Mask             */

#define CLK_PBPWCTL_TRIGM1_Pos           (26)                                              /*!< CLK_T::PBPWCTL: TRIGM1 Position        */
#define CLK_PBPWCTL_TRIGM1_Msk           (0x1ul << CLK_PBPWCTL_TRIGM1_Pos)                 /*!< CLK_T::PBPWCTL: TRIGM1 Mask            */

#define CLK_PBPWCTL_NMR1_Pos             (27)                                              /*!< CLK_T::PBPWCTL: NMR1 Position          */
#define CLK_PBPWCTL_NMR1_Msk             (0x1ul << CLK_PBPWCTL_NMR1_Pos)                   /*!< CLK_T::PBPWCTL: NMR1 Mask              */

#define CLK_PCPWCTL_WKEN0_Pos            (0)                                               /*!< CLK_T::PCPWCTL: WKEN0 Position         */
#define CLK_PCPWCTL_WKEN0_Msk            (0x1ul << CLK_PCPWCTL_WKEN0_Pos)                  /*!< CLK_T::PCPWCTL: WKEN0 Mask             */

#define CLK_PCPWCTL_PRWKEN0_Pos          (1)                                               /*!< CLK_T::PCPWCTL: PRWKEN0 Position       */
#define CLK_PCPWCTL_PRWKEN0_Msk          (0x1ul << CLK_PCPWCTL_PRWKEN0_Pos)                /*!< CLK_T::PCPWCTL: PRWKEN0 Mask           */

#define CLK_PCPWCTL_PFWKEN0_Pos          (2)                                               /*!< CLK_T::PCPWCTL: PFWKEN0 Position       */
#define CLK_PCPWCTL_PFWKEN0_Msk          (0x1ul << CLK_PCPWCTL_PFWKEN0_Pos)                /*!< CLK_T::PCPWCTL: PFWKEN0 Mask           */

#define CLK_PCPWCTL_WKPSEL0_Pos          (4)                                               /*!< CLK_T::PCPWCTL: WKPSEL0 Position       */
#define CLK_PCPWCTL_WKPSEL0_Msk          (0xful << CLK_PCPWCTL_WKPSEL0_Pos)                /*!< CLK_T::PCPWCTL: WKPSEL0 Mask           */

#define CLK_PCPWCTL_DBEN0_Pos            (8)                                               /*!< CLK_T::PCPWCTL: DBEN0 Position         */
#define CLK_PCPWCTL_DBEN0_Msk            (0x1ul << CLK_PCPWCTL_DBEN0_Pos)                  /*!< CLK_T::PCPWCTL: DBEN0 Mask             */

#define CLK_PCPWCTL_TRIGM0_Pos           (10)                                              /*!< CLK_T::PCPWCTL: TRIGM0 Position        */
#define CLK_PCPWCTL_TRIGM0_Msk           (0x1ul << CLK_PCPWCTL_TRIGM0_Pos)                 /*!< CLK_T::PCPWCTL: TRIGM0 Mask            */

#define CLK_PCPWCTL_NMR0_Pos             (11)                                              /*!< CLK_T::PCPWCTL: NMR0 Position          */
#define CLK_PCPWCTL_NMR0_Msk             (0x1ul << CLK_PCPWCTL_NMR0_Pos)                   /*!< CLK_T::PCPWCTL: NMR0 Mask              */

#define CLK_PCPWCTL_WKEN1_Pos            (16)                                              /*!< CLK_T::PCPWCTL: WKEN1 Position         */
#define CLK_PCPWCTL_WKEN1_Msk            (0x1ul << CLK_PCPWCTL_WKEN1_Pos)                  /*!< CLK_T::PCPWCTL: WKEN1 Mask             */

#define CLK_PCPWCTL_PRWKEN1_Pos          (17)                                              /*!< CLK_T::PCPWCTL: PRWKEN1 Position       */
#define CLK_PCPWCTL_PRWKEN1_Msk          (0x1ul << CLK_PCPWCTL_PRWKEN1_Pos)                /*!< CLK_T::PCPWCTL: PRWKEN1 Mask           */

#define CLK_PCPWCTL_PFWKEN1_Pos          (18)                                              /*!< CLK_T::PCPWCTL: PFWKEN1 Position       */
#define CLK_PCPWCTL_PFWKEN1_Msk          (0x1ul << CLK_PCPWCTL_PFWKEN1_Pos)                /*!< CLK_T::PCPWCTL: PFWKEN1 Mask           */

#define CLK_PCPWCTL_WKPSEL1_Pos          (20)                                              /*!< CLK_T::PCPWCTL: WKPSEL1 Position       */
#define CLK_PCPWCTL_WKPSEL1_Msk          (0xful << CLK_PCPWCTL_WKPSEL1_Pos)                /*!< CLK_T::PCPWCTL: WKPSEL1 Mask           */

#define CLK_PCPWCTL_DBEN1_Pos            (24)                                              /*!< CLK_T::PCPWCTL: DBEN1 Position         */
#define CLK_PCPWCTL_DBEN1_Msk            (0x1ul << CLK_PCPWCTL_DBEN1_Pos)                  /*!< CLK_T::PCPWCTL: DBEN1 Mask             */

#define CLK_PCPWCTL_TRIGM1_Pos           (26)                                              /*!< CLK_T::PCPWCTL: TRIGM1 Position        */
#define CLK_PCPWCTL_TRIGM1_Msk           (0x1ul << CLK_PCPWCTL_TRIGM1_Pos)                 /*!< CLK_T::PCPWCTL: TRIGM1 Mask            */

#define CLK_PCPWCTL_NMR1_Pos             (27)                                              /*!< CLK_T::PCPWCTL: NMR1 Position          */
#define CLK_PCPWCTL_NMR1_Msk             (0x1ul << CLK_PCPWCTL_NMR1_Pos)                   /*!< CLK_T::PCPWCTL: NMR1 Mask              */

#define CLK_PDPWCTL_WKEN0_Pos            (0)                                               /*!< CLK_T::PDPWCTL: WKEN0 Position         */
#define CLK_PDPWCTL_WKEN0_Msk            (0x1ul << CLK_PDPWCTL_WKEN0_Pos)                  /*!< CLK_T::PDPWCTL: WKEN0 Mask             */

#define CLK_PDPWCTL_PRWKEN0_Pos          (1)                                               /*!< CLK_T::PDPWCTL: PRWKEN0 Position       */
#define CLK_PDPWCTL_PRWKEN0_Msk          (0x1ul << CLK_PDPWCTL_PRWKEN0_Pos)                /*!< CLK_T::PDPWCTL: PRWKEN0 Mask           */

#define CLK_PDPWCTL_PFWKEN0_Pos          (2)                                               /*!< CLK_T::PDPWCTL: PFWKEN0 Position       */
#define CLK_PDPWCTL_PFWKEN0_Msk          (0x1ul << CLK_PDPWCTL_PFWKEN0_Pos)                /*!< CLK_T::PDPWCTL: PFWKEN0 Mask           */

#define CLK_PDPWCTL_WKPSEL0_Pos          (4)                                               /*!< CLK_T::PDPWCTL: WKPSEL0 Position       */
#define CLK_PDPWCTL_WKPSEL0_Msk          (0xful << CLK_PDPWCTL_WKPSEL0_Pos)                /*!< CLK_T::PDPWCTL: WKPSEL0 Mask           */

#define CLK_PDPWCTL_DBEN0_Pos            (8)                                               /*!< CLK_T::PDPWCTL: DBEN0 Position         */
#define CLK_PDPWCTL_DBEN0_Msk            (0x1ul << CLK_PDPWCTL_DBEN0_Pos)                  /*!< CLK_T::PDPWCTL: DBEN0 Mask             */

#define CLK_PDPWCTL_TRIGM0_Pos           (10)                                              /*!< CLK_T::PDPWCTL: TRIGM0 Position        */
#define CLK_PDPWCTL_TRIGM0_Msk           (0x1ul << CLK_PDPWCTL_TRIGM0_Pos)                 /*!< CLK_T::PDPWCTL: TRIGM0 Mask            */

#define CLK_PDPWCTL_NMR0_Pos             (11)                                              /*!< CLK_T::PDPWCTL: NMR0 Position          */
#define CLK_PDPWCTL_NMR0_Msk             (0x1ul << CLK_PDPWCTL_NMR0_Pos)                   /*!< CLK_T::PDPWCTL: NMR0 Mask              */

#define CLK_PDPWCTL_WKEN1_Pos            (16)                                              /*!< CLK_T::PDPWCTL: WKEN1 Position         */
#define CLK_PDPWCTL_WKEN1_Msk            (0x1ul << CLK_PDPWCTL_WKEN1_Pos)                  /*!< CLK_T::PDPWCTL: WKEN1 Mask             */

#define CLK_PDPWCTL_PRWKEN1_Pos          (17)                                              /*!< CLK_T::PDPWCTL: PRWKEN1 Position       */
#define CLK_PDPWCTL_PRWKEN1_Msk          (0x1ul << CLK_PDPWCTL_PRWKEN1_Pos)                /*!< CLK_T::PDPWCTL: PRWKEN1 Mask           */

#define CLK_PDPWCTL_PFWKEN1_Pos          (18)                                              /*!< CLK_T::PDPWCTL: PFWKEN1 Position       */
#define CLK_PDPWCTL_PFWKEN1_Msk          (0x1ul << CLK_PDPWCTL_PFWKEN1_Pos)                /*!< CLK_T::PDPWCTL: PFWKEN1 Mask           */

#define CLK_PDPWCTL_WKPSEL1_Pos          (20)                                              /*!< CLK_T::PDPWCTL: WKPSEL1 Position       */
#define CLK_PDPWCTL_WKPSEL1_Msk          (0xful << CLK_PDPWCTL_WKPSEL1_Pos)                /*!< CLK_T::PDPWCTL: WKPSEL1 Mask           */

#define CLK_PDPWCTL_DBEN1_Pos            (24)                                              /*!< CLK_T::PDPWCTL: DBEN1 Position         */
#define CLK_PDPWCTL_DBEN1_Msk            (0x1ul << CLK_PDPWCTL_DBEN1_Pos)                  /*!< CLK_T::PDPWCTL: DBEN1 Mask             */

#define CLK_PDPWCTL_TRIGM1_Pos           (26)                                              /*!< CLK_T::PDPWCTL: TRIGM1 Position        */
#define CLK_PDPWCTL_TRIGM1_Msk           (0x1ul << CLK_PDPWCTL_TRIGM1_Pos)                 /*!< CLK_T::PDPWCTL: TRIGM1 Mask            */

#define CLK_PDPWCTL_NMR1_Pos             (27)                                              /*!< CLK_T::PDPWCTL: NMR1 Position          */
#define CLK_PDPWCTL_NMR1_Msk             (0x1ul << CLK_PDPWCTL_NMR1_Pos)                   /*!< CLK_T::PDPWCTL: NMR1 Mask              */

#define CLK_IOPDCTL_IOHR_Pos             (0)                                               /*!< CLK_T::IOPDCTL: IOHR Position          */
#define CLK_IOPDCTL_IOHR_Msk             (0x1ul << CLK_IOPDCTL_IOHR_Pos)                   /*!< CLK_T::IOPDCTL: IOHR Mask              */

#define CLK_IOPDCTL_DPDHOLDEN_Pos        (8)                                               /*!< CLK_T::IOPDCTL: DPDHOLDEN Position     */
#define CLK_IOPDCTL_DPDHOLDEN_Msk        (0x1ul << CLK_IOPDCTL_DPDHOLDEN_Pos)              /*!< CLK_T::IOPDCTL: DPDHOLDEN Mask         */

#define CLK_PMUINTC_WKTMRIE_Pos          (0)                                               /*!< CLK_T::PMUINTC: WKTMRIE Position       */
#define CLK_PMUINTC_WKTMRIE_Msk          (0x1ul << CLK_PMUINTC_WKTMRIE_Pos)                /*!< CLK_T::PMUINTC: WKTMRIE Mask           */

#define CLK_PMUINTC_WKIOA0IE_Pos         (8)                                               /*!< CLK_T::PMUINTC: WKIOA0IE Position      */
#define CLK_PMUINTC_WKIOA0IE_Msk         (0x1ul << CLK_PMUINTC_WKIOA0IE_Pos)               /*!< CLK_T::PMUINTC: WKIOA0IE Mask          */

#define CLK_PMUINTC_WKIOB0IE_Pos         (9)                                               /*!< CLK_T::PMUINTC: WKIOB0IE Position      */
#define CLK_PMUINTC_WKIOB0IE_Msk         (0x1ul << CLK_PMUINTC_WKIOB0IE_Pos)               /*!< CLK_T::PMUINTC: WKIOB0IE Mask          */

#define CLK_PMUINTC_WKIOC0IE_Pos         (10)                                              /*!< CLK_T::PMUINTC: WKIOC0IE Position      */
#define CLK_PMUINTC_WKIOC0IE_Msk         (0x1ul << CLK_PMUINTC_WKIOC0IE_Pos)               /*!< CLK_T::PMUINTC: WKIOC0IE Mask          */

#define CLK_PMUINTC_WKIOD0IE_Pos         (11)                                              /*!< CLK_T::PMUINTC: WKIOD0IE Position      */
#define CLK_PMUINTC_WKIOD0IE_Msk         (0x1ul << CLK_PMUINTC_WKIOD0IE_Pos)               /*!< CLK_T::PMUINTC: WKIOD0IE Mask          */

#define CLK_PMUINTC_WKIOA1IE_Pos         (12)                                              /*!< CLK_T::PMUINTC: WKIOA1IE Position      */
#define CLK_PMUINTC_WKIOA1IE_Msk         (0x1ul << CLK_PMUINTC_WKIOA1IE_Pos)               /*!< CLK_T::PMUINTC: WKIOA1IE Mask          */

#define CLK_PMUINTC_WKIOB1IE_Pos         (13)                                              /*!< CLK_T::PMUINTC: WKIOB1IE Position      */
#define CLK_PMUINTC_WKIOB1IE_Msk         (0x1ul << CLK_PMUINTC_WKIOB1IE_Pos)               /*!< CLK_T::PMUINTC: WKIOB1IE Mask          */

#define CLK_PMUINTC_WKIOC1IE_Pos         (14)                                              /*!< CLK_T::PMUINTC: WKIOC1IE Position      */
#define CLK_PMUINTC_WKIOC1IE_Msk         (0x1ul << CLK_PMUINTC_WKIOC1IE_Pos)               /*!< CLK_T::PMUINTC: WKIOC1IE Mask          */

#define CLK_PMUINTC_WKIOD1IE_Pos         (15)                                              /*!< CLK_T::PMUINTC: WKIOD1IE Position      */
#define CLK_PMUINTC_WKIOD1IE_Msk         (0x1ul << CLK_PMUINTC_WKIOD1IE_Pos)               /*!< CLK_T::PMUINTC: WKIOD1IE Mask          */

#define CLK_PMUINTS_WKTMRIF_Pos          (0)                                               /*!< CLK_T::PMUINTS: WKTMRIF Position       */
#define CLK_PMUINTS_WKTMRIF_Msk          (0x1ul << CLK_PMUINTS_WKTMRIF_Pos)                /*!< CLK_T::PMUINTS: WKTMRIF Mask           */

#define CLK_PMUINTS_WKIOA0IF_Pos         (8)                                               /*!< CLK_T::PMUINTS: WKIOA0IF Position      */
#define CLK_PMUINTS_WKIOA0IF_Msk         (0x1ul << CLK_PMUINTS_WKIOA0IF_Pos)               /*!< CLK_T::PMUINTS: WKIOA0IF Mask          */

#define CLK_PMUINTS_WKIOB0IF_Pos         (9)                                               /*!< CLK_T::PMUINTS: WKIOB0IF Position      */
#define CLK_PMUINTS_WKIOB0IF_Msk         (0x1ul << CLK_PMUINTS_WKIOB0IF_Pos)               /*!< CLK_T::PMUINTS: WKIOB0IF Mask          */

#define CLK_PMUINTS_WKIOC0IF_Pos         (10)                                              /*!< CLK_T::PMUINTS: WKIOC0IF Position      */
#define CLK_PMUINTS_WKIOC0IF_Msk         (0x1ul << CLK_PMUINTS_WKIOC0IF_Pos)               /*!< CLK_T::PMUINTS: WKIOC0IF Mask          */

#define CLK_PMUINTS_WKIOD0IF_Pos         (11)                                              /*!< CLK_T::PMUINTS: WKIOD0IF Position      */
#define CLK_PMUINTS_WKIOD0IF_Msk         (0x1ul << CLK_PMUINTS_WKIOD0IF_Pos)               /*!< CLK_T::PMUINTS: WKIOD0IF Mask          */

#define CLK_PMUINTS_WKIOA1IF_Pos         (12)                                              /*!< CLK_T::PMUINTS: WKIOA1IF Position      */
#define CLK_PMUINTS_WKIOA1IF_Msk         (0x1ul << CLK_PMUINTS_WKIOA1IF_Pos)               /*!< CLK_T::PMUINTS: WKIOA1IF Mask          */

#define CLK_PMUINTS_WKIOB1IF_Pos         (13)                                              /*!< CLK_T::PMUINTS: WKIOB1IF Position      */
#define CLK_PMUINTS_WKIOB1IF_Msk         (0x1ul << CLK_PMUINTS_WKIOB1IF_Pos)               /*!< CLK_T::PMUINTS: WKIOB1IF Mask          */

#define CLK_PMUINTS_WKIOC1IF_Pos         (14)                                              /*!< CLK_T::PMUINTS: WKIOC1IF Position      */
#define CLK_PMUINTS_WKIOC1IF_Msk         (0x1ul << CLK_PMUINTS_WKIOC1IF_Pos)               /*!< CLK_T::PMUINTS: WKIOC1IF Mask          */

#define CLK_PMUINTS_WKIOD1IF_Pos         (15)                                              /*!< CLK_T::PMUINTS: WKIOD1IF Position      */
#define CLK_PMUINTS_WKIOD1IF_Msk         (0x1ul << CLK_PMUINTS_WKIOD1IF_Pos)               /*!< CLK_T::PMUINTS: WKIOD1IF Mask          */

/**@}*/ /* CLK_CONST */
/**@}*/ /* end of CLK register group */
/**@}*/ /* end of REGISTER group */

#if defined ( __CC_ARM   )
    #pragma no_anon_unions
#endif

#endif /* __CLK_REG_H__ */
