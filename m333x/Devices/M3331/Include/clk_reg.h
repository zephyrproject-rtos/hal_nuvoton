/**************************************************************************//**
 * @file     clk_reg.h
 * @version  V3.00
 * @brief    CLK register definition header file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright (c) 2025 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __CLK_REG_H__
#define __CLK_REG_H__

#if defined ( __CC_ARM   )
    #pragma anon_unions
#endif

/******************************************************************************/
/*                Device Specific Peripheral registers structures             */
/******************************************************************************/

/** @addtogroup REGISTER Control Register

  @{

*/



/*---------------------- System Clock Controller -------------------------*/
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
     * |        |          |0 = HXT Disabled.
     * |        |          |1 = HXT Enabled.
     * |        |          |Note 1: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note 2: HXT cannot be disabled and HXTEN will read as 1 if HCLK clock source is selected from HXT or PLL (clock source from HXT).
     * |[1]     |LXTEN     |LXT Enable Bit (Write Protect)
     * |        |          |0 = LXT Disabled.
     * |        |          |1 = LXT Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[2]     |HIRCEN    |HIRC Enable Bit (Write Protect)
     * |        |          |0 = HIRC Disabled.
     * |        |          |1 = HIRC Enabled.
     * |        |          |Note 1: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note 2: HIRC cannot be disabled and HIRCEN will read as 1 if HCLK clock source is selected from HIRC or PLL (clock source from HIRC).
     * |[3]     |LIRCEN    |LIRC Enable Bit (Write Protect)
     * |        |          |0 = LIRC Disabled.
     * |        |          |1 = LIRC Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[4]     |PDWKDLY   |Enable the Wake-up Delay Counter (Write Protect)
     * |        |          |When the chip wakes up from Power-down mode, the clock control will delay certain clock cycles to wait system clock stable.
     * |        |          |The delayed clock cycle is 4096 clock cycles when chip works using HXT, and 256 or 128 clock cycles when chip works using HIRC.
     * |        |          |0 = Clock cycles delay Disabled.
     * |        |          |1 = Clock cycles delay Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[5]     |PDWKIEN   |Power-down Mode Wake-up Interrupt Enable Bit (Write Protect)
     * |        |          |0 = Power-down mode wake-up interrupt Disabled.
     * |        |          |1 = Power-down mode wake-up interrupt Enabled.
     * |        |          |Note 1: The interrupt will occur when both PDWKIF and PDWKIEN are high.
     * |        |          |Note 2: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[6]     |PDWKIF    |Power-down Mode Wake-up Interrupt Status
     * |        |          |Set by Power-down wake-up event, it indicates that resume from Power-down mode.
     * |        |          |The flag is set if any wake-up source occurred.
     * |        |          |Note 1: Write 1 to clear the bit to 0.
     * |        |          |Note 2: This bit works only if PDWKIEN (CLK_PWRCTL[5]) set to 1.
     * |[7]     |PDEN      |System Power-down Enable (Write Protect)
     * |        |          |When this bit is set to 1, Power-down mode is enabled and chip keeps active till the CPU sleep mode is also active and then the chip enters Power-down mode.
     * |        |          |When chip wakes up from Power-down mode, this bit is auto cleared
     * |        |          |Users need to set this bit again for next Power-down.
     * |        |          |In Power-down mode, HXT and the HIRC will be disabled in this mode, but LXT and LIRC are not controlled by Power-down mode.
     * |        |          |In Power-down mode, the PLL, PLLFN and system clock are disabled, and ignored the clock source selection.
     * |        |          |The clocks of peripheral are not controlled by Power-down mode, if the peripheral clock source is from LXT or LIRC.
     * |        |          |0 = Chip will not enter Power-down mode after CPU sleep command WFI.
     * |        |          |1 = Chip enters Power-down mode after CPU sleep command WFI.
     * |        |          |Note 1: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note 2: System tick interrupt TICKINT(SYS_CTRL[1]) has to be disabled before entering to Power-down mode, to avoid system tick interrupt may influence system not entering power-down mode and keep operation.
     * |[12]    |HXTSELTYP |HXT Crystal Type Select Bit (Write Protect)
     * |        |          |0 = Select INV type.
     * |        |          |1 = Select GM type.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[17:16] |HIRCSTBS  |HIRC Stable Count Select (Write Protect)
     * |        |          |00 = HIRC stable count is 256 clocks.
     * |        |          |01 = HIRC stable count is 128 clocks.
     * |        |          |Others = Reserved.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[22:20] |HXTGAIN   |HXT Gain Control Bit (Write Protect)
     * |        |          |Gain control is used to enlarge the gain of crystal to make sure crystal work normally.
     * |        |          |If gain control is enabled, crystal will consume more power than gain control off.
     * |        |          |000 = HXT frequency is from 4 MHz to 8 MHz. (Gain control off)
     * |        |          |001 = HXT frequency is from 8 MHz to 12 MHz.
     * |        |          |010 = HXT frequency is from 12 MHz to 16 MHz.
     * |        |          |011 = = HXT frequency is from 16 MHz to 24 MHz.
     * |        |          |Others = HXT frequency is from 24 MHz to 32 MHz.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[31]    |HXTMD     |HXT Bypass Mode (Write Protect)
     * |        |          |0 = HXT work as crystal mode. PF.2 and PF.3 are configured as external high speed crystal (HXT) pins.
     * |        |          |1 = HXT works as external clock mode. PF.3 is configured as external clock input pin.
     * |        |          |Note 1: When HXTMD = 1, PF.3 MFP should be setting as GPIO mode. The DC characteristic of XT1_IN is the same as GPIO.
     * |        |          |Note 2: This bit is write protected. Refer to the SYS_REGCTL register.
     * |        |          |Note 3: When external clock mode enable, HXTSELTYP(CLK_PWRCTL[12]) must be set as GM type.
     * @var CLK_T::AHBCLK0
     * Offset: 0x04  AHB Devices Clock Enable Control Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1]     |PDMA0CKEN |PDMA0 Controller Clock Enable Bit
     * |        |          |0 = PDMA0 peripheral clock Disabled.
     * |        |          |1 = PDMA0 peripheral clock Enabled.
     * |[2]     |ISPCKEN   |Flash ISP Controller Clock Enable Bit
     * |        |          |0 = Flash ISP peripheral clock Disabled.
     * |        |          |1 = Flash ISP peripheral clock Enabled.
     * |[3]     |EBICKEN   |EBI Controller Clock Enable Bit
     * |        |          |0 = EBI peripheral clock Disabled.
     * |        |          |1 = EBI peripheral clock Enabled.
     * |[4]     |STCKEN    |System Tick Clock Enable Bit
     * |        |          |0 = System tick clock Disabled.
     * |        |          |1 = System tick clock Enabled.
     * |[5]     |PDMA1CKEN |PDMA1 Controller Clock Enable Bit
     * |        |          |0 = PDMA1 peripheral clock Disabled.
     * |        |          |1 = PDMA1 peripheral clock Enabled.
     * |[6]     |SDH0CKEN  |SDH0 Controller Clock Enable Bit
     * |        |          |0 = SDH0 clock Disabled.
     * |        |          |1 = SDH0 clock Enabled.
     * |[7]     |CRCCKEN   |CRC Generator Controller Clock Enable Bit
     * |        |          |0 = CRC peripheral clock Disabled.
     * |        |          |1 = CRC peripheral clock Enabled.
     * |[8]     |CANFD0CKEN|CANFD0 Clock Enable Bit
     * |        |          |0 = CANFD0 clock Disabled.
     * |        |          |1 = CANFD0 clock Enabled.
     * |[9]     |CANFD1CKEN|CANFD1 Clock Enable Bit
     * |        |          |0 = CANFD1 clock Disabled.
     * |        |          |1 = CANFD1 clock Enabled.
     * |[10]    |HSUSBDCKEN|HSUSB Device Clock Enable Bit
     * |        |          |0 = HSUSB device controller clock Disabled.
     * |        |          |1 = HSUSB device controller clock Enabled.
     * |[11]    |PDCICKEN  |PDCI Clock Enable Bit
     * |        |          |0 = PDCI clock Disabled.
     * |        |          |1 = PDCI clock Enabled.
     * |[15]    |FMCIDLE   |Flash Memory Controller Clock Enable Bit in IDLE Mode
     * |        |          |0 = FMC clock Disabled when chip is under IDLE mode.
     * |        |          |1 = FMC clock Enabled when chip is under IDLE mode.
     * |[16]    |USBHCKEN  |USB HOST Controller Clock Enable Bit
     * |        |          |0 = USB HOST peripheral clock Disabled.
     * |        |          |1 = USB HOST peripheral clock Enabled.
     * |[17]    |CANRAM0EN |CANFD0 Message SRAM Clock Enable Bit
     * |        |          |0 = CANFD0 Message SRAM clock Disabled.
     * |        |          |1 = CANFD0 Message SRAM clock Enabled.
     * |[18]    |CANRAM1EN |CANFD1 Message SRAM Clock Enable Bit
     * |        |          |0 = CANFD1 Message SRAM clock Disabled.
     * |        |          |1 = CANFD1 Message SRAM clock Enabled.
     * |[19]    |TRACECKEN |TRACE Clock Enable Bit
     * |        |          |0 = TRACE clock Disabled.
     * |        |          |1 = TRACE clock Enabled.
     * |[24]    |GPACKEN   |GPIOA Clock Enable Bit
     * |        |          |0 = GPIOA clock Disabled.
     * |        |          |1 = GPIOA clock Enabled.
     * |[25]    |GPBCKEN   |GPIOB Clock Enable Bit
     * |        |          |0 = GPIOB clock Disabled.
     * |        |          |1 = GPIOB clock Enabled.
     * |[26]    |GPCCKEN   |GPIOC Clock Enable Bit
     * |        |          |0 = GPIOC clock Disabled.
     * |        |          |1 = GPIOC clock Enabled.
     * |[27]    |GPDCKEN   |GPIOD Clock Enable Bit
     * |        |          |0 = GPIOD clock Disabled.
     * |        |          |1 = GPIOD clock Enabled.
     * |[28]    |GPECKEN   |GPIOE Clock Enable Bit
     * |        |          |0 = GPIOE clock Disabled.
     * |        |          |1 = GPIOE clock Enabled.
     * |[29]    |GPFCKEN   |GPIOF Clock Enable Bit
     * |        |          |0 = GPIOF clock Disabled.
     * |        |          |1 = GPIOF clock Enabled.
     * |[30]    |GPGCKEN   |GPIOG Clock Enable Bit
     * |        |          |0 = GPIOG clock Disabled.
     * |        |          |1 = GPIOG clock Enabled.
     * |[31]    |GPHCKEN   |GPIOH Clock Enable Bit
     * |        |          |0 = GPIOH clock Disabled.
     * |        |          |1 = GPIOH clock Enabled.
     * @var CLK_T::APBCLK0
     * Offset: 0x08  APB Devices Clock Enable Control Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |WDT0CKEN  |Watchdog Timer Clock 0 Enable Bit (Write Protect)
     * |        |          |0 = Watchdog timer 0 clock Disabled.
     * |        |          |1 = Watchdog timer 0 clock Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[1]     |RTCCKEN   |Real-time-clock APB Interface Clock Enable Bit
     * |        |          |This bit is used to control the RTC APB clock only.
     * |        |          |The RTC peripheral clock source is selected from RTCCKSEL(RTC_LXTCTL[7]).
     * |        |          |It can be selected to LXT or LIRC.
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
     * |[7]     |ACMP01CKEN|Analog Comparator 0/1 Clock Enable Bit
     * |        |          |0 = Analog comparator 0/1 clock Disabled.
     * |        |          |1 = Analog comparator 0/1 clock Enabled.
     * |[8]     |I2C0CKEN  |I2C0 Clock Enable Bit
     * |        |          |0 = I2C0 clock Disabled.
     * |        |          |1 = I2C0 clock Enabled.
     * |[9]     |I2C1CKEN  |I2C1 Clock Enable Bit
     * |        |          |0 = I2C1 clock Disabled.
     * |        |          |1 = I2C1 clock Enabled.
     * |[10]    |I2C2CKEN  |I2C2 Clock Enable Bit
     * |        |          |0 = I2C2 clock Disabled.
     * |        |          |1 = I2C2 clock Enabled.
     * |[11]    |I3C0CKEN  |I3C0 Clock Enable Bit
     * |        |          |0 = I3C0 clock Disabled.
     * |        |          |1 = I3C0 clock Enabled.
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
     * |[24]    |WWDT0CKEN |Window Watchdog Timer 0 Clock Enable Bit (Write Protect)
     * |        |          |0 = Window Watchdog timer 0 clock Disabled.
     * |        |          |1 = Window Watchdog timer 0 clock Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[25]    |WWDT1CKEN |Window Watchdog Timer 1 Clock Enable Bit (Write Protect)
     * |        |          |0 = Window Watchdog timer 1 clock Disabled.
     * |        |          |1 = Window Watchdog timer 1 clock Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[28]    |EADC0CKEN |EADC0 Clock Enable Bit
     * |        |          |0 = EADC0 clock Disabled.
     * |        |          |1 = EADC0 clock Enabled.
     * |[29]    |I2S0CKEN  |I2S0 Clock Enable Bit
     * |        |          |0 = I2S0 clock Disabled.
     * |        |          |1 = I2S0 clock Enabled.
     * |[30]    |HSOTGCKEN |HSUSB OTG Clock Enable Bit
     * |        |          |0 = HSUSB OTG clock Disabled.
     * |        |          |1 = HSUSB OTG clock Enabled.
     * |[31]    |WDT1CKEN  |Watchdog Timer Clock 1 Enable Bit (Write Protect)
     * |        |          |0 = Watchdog timer 1 clock Disabled.
     * |        |          |1 = Watchdog timer 1 clock Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var CLK_T::APBCLK1
     * Offset: 0x0C  APB Devices Clock Enable Control Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[8]     |USCI0CKEN |USCI0 Clock Enable Bit
     * |        |          |0 = USCI0 clock Disabled.
     * |        |          |1 = USCI0 clock Enabled.
     * |[9]     |USCI1CKEN |USCI1 Clock Enable Bit
     * |        |          |0 = USCI1 clock Disabled.
     * |        |          |1 = USCI1 clock Enabled.
     * |[16]    |EPWM0CKEN |EPWM0 Clock Enable Bit
     * |        |          |0 = EPWM0 clock Disabled.
     * |        |          |1 = EPWM0 clock Enabled.
     * |[17]    |EPWM1CKEN |EPWM1 Clock Enable Bit
     * |        |          |0 = EPWM1 clock Disabled.
     * |        |          |1 = EPWM1 clock Enabled.
     * |[18]    |BPWM0CKEN |BPWM0 Clock Enable Bit
     * |        |          |0 = BPWM0 clock Disabled.
     * |        |          |1 = BPWM0 clock Enabled.
     * |[19]    |BPWM1CKEN |BPWM1 Clock Enable Bit
     * |        |          |0 = BPWM1 clock Disabled.
     * |        |          |1 = BPWM1 clock Enabled.
     * |[20]    |EQEI0CKEN |EQEI0 Clock Enable Bit
     * |        |          |0 = EQEI0 clock Disabled.
     * |        |          |1 = EQEI0 clock Enabled.
     * |[26]    |ECAP0CKEN |ECAP0 Clock Enable Bit
     * |        |          |0 = ECAP0 clock Disabled.
     * |        |          |1 = ECAP0 clock Enabled.
     * |[28]    |BPWM2CKEN |BPWM2 Clock Enable Bit
     * |        |          |0 = BPWM2 clock Disabled.
     * |        |          |1 = BPWM2 clock Enabled.
     * |[29]    |BPWM3CKEN |BPWM3 Clock Enable Bit
     * |        |          |0 = BPWM3 clock Disabled.
     * |        |          |1 = BPWM3 clock Enabled.
     * |[30]    |BPWM4CKEN |BPWM4 Clock Enable Bit
     * |        |          |0 = BPWM4 clock Disabled.
     * |        |          |1 = BPWM4 clock Enabled.
     * |[31]    |BPWM5CKEN |BPWM5 Clock Enable Bit
     * |        |          |0 = BPWM5 clock Disabled.
     * |        |          |1 = BPWM5 clock Enabled.
     * @var CLK_T::CLKSEL0
     * Offset: 0x10  Clock Source Select Control Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[2:0]   |HCLKSEL   |HCLK Clock Source Selection (Write Protect)
     * |        |          |Before clock switching, the related clock sources (both pre-select and new-select) must be turned on.
     * |        |          |000 = Clock source from HXT.
     * |        |          |001 = Clock source from LXT.
     * |        |          |010 = Clock source from PLL.
     * |        |          |011 = Clock source from LIRC.
     * |        |          |111 = Clock source from HIRC.
     * |        |          |Others = Reserved.
     * |        |          |Note: Theses bits are write protected. Refer to the SYS_REGLCTL register.
     * |[5:3]   |STCLKSEL  |Cortex-M33 SysTick Clock Source Selection (Write Protect)
     * |        |          |If SYST_CTRL[2]=0, SysTick uses listed clock source below.
     * |        |          |000 = Clock source from HXT.
     * |        |          |001 = Clock source from LXT.
     * |        |          |010 = Clock source from HXT/2.
     * |        |          |011 = Clock source from HCLK/2.
     * |        |          |111 = Clock source from HIRC/2.
     * |        |          |Note 1: If SysTick clock source is not from HCLK (i.e. SYST_CTRL[2] = 0), SysTick needs to enable STCKEN(CLK_AHBCLK0[4]).
     * |        |          |SysTick clock source must less than or equal to HCLK/2.
     * |        |          |Note 2: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[10]    |EADC0SEL  |EADC0 Clock Source Selection (Write Protect)
     * |        |          |0 = Clock source from HCLK.
     * |        |          |1 = Clock source from PLL/2.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[21:20] |SDH0SEL   |SDH0 Clock Source Selection (Write Protect)
     * |        |          |00 = Clock source from HXT.
     * |        |          |01 = Clock source from PLL/2 clock.
     * |        |          |10 = Clock source from HCLK.
     * |        |          |11 = Clock source from HIRC.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[25:24] |CANFD0SEL |CANFD0 Clock Source Selection (Write Protect)
     * |        |          |00 = Clock source from HXT.
     * |        |          |01 = Clock source from PLL/2 clock.
     * |        |          |10 = Clock source from HCLK.
     * |        |          |11 = Clock source from HIRC.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[27:26] |CANFD1SEL |CANFD1 Clock Source Selection (Write Protect)
     * |        |          |00 = Clock source from HXT.
     * |        |          |01 = Clock source from PLL/2 clock.
     * |        |          |10 = Clock source from HCLK.
     * |        |          |11 = Clock source from HIRC.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * @var CLK_T::CLKSEL1
     * Offset: 0x14  Clock Source Select Control Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1:0]   |WDT0SEL   |Watchdog Timer 0 Clock Source Selection (Write Protect)
     * |        |          |00 = Reserved.
     * |        |          |01 = Clock source from LXT.
     * |        |          |10 = Clock source from HCLK/2048.
     * |        |          |11 = Clock source from LIRC.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[3:2]   |WDT1SEL   |Watchdog Timer 1 Clock Source Selection (Write Protect)
     * |        |          |00 = Reserved.
     * |        |          |01 = Clock source from LXT.
     * |        |          |10 = Clock source from HCLK/2048.
     * |        |          |11 = Clock source from LIRC.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[6:4]   |CLKOSEL   |Clock Output Clock Source Selection
     * |        |          |000 = Clock source from HXT.
     * |        |          |001 = Clock source from LXT.
     * |        |          |010 = Clock source from HCLK.
     * |        |          |011 = Clock source from HIRC.
     * |        |          |100 = Clock source from LIRC.
     * |        |          |101 = Clock source from PLL/2.
     * |        |          |111 = Reserved.
     * |[10:8]  |TMR0SEL   |TIMER0 Clock Source Selection
     * |        |          |000 = Clock source from HXT.
     * |        |          |001 = Clock source from LXT.
     * |        |          |010 = Clock source from PCLK0.
     * |        |          |011 = Clock source from external clock TM0 pin.
     * |        |          |101 = Clock source from LIRC.
     * |        |          |111 = Clock source from HIRC.
     * |        |          |Others = Reserved.
     * |[14:12] |TMR1SEL   |TIMER1 Clock Source Selection
     * |        |          |000 = Clock source from HXT.
     * |        |          |001 = Clock source from LXT.
     * |        |          |010 = Clock source from PCLK0.
     * |        |          |011 = Clock source from external clock TM1 pin.
     * |        |          |101 = Clock source from LIRC.
     * |        |          |111 = Clock source from HIRC.
     * |        |          |Others = Reserved.
     * |[18:16] |TMR2SEL   |TIMER2 Clock Source Selection
     * |        |          |000 = Clock source from HXT.
     * |        |          |001 = Clock source from LXT.
     * |        |          |010 = Clock source from PCLK1.
     * |        |          |011 = Clock source from external clock TM2 pin.
     * |        |          |101 = Clock source from LIRC.
     * |        |          |111 = Clock source from HIRC.
     * |        |          |Others = Reserved.
     * |[22:20] |TMR3SEL   |TIMER3 Clock Source Selection
     * |        |          |000 = Clock source from HXT.
     * |        |          |001 = Clock source from LXT.
     * |        |          |010 = Clock source from PCLK1.
     * |        |          |011 = Clock source from external clock TM3 pin.
     * |        |          |101 = Clock source from LIRC.
     * |        |          |111 = Clock source from HIRC.
     * |        |          |Others = Reserved.
     * |[25:24] |UART0SEL  |UART0 Clock Source Selection
     * |        |          |00 = Clock source from HXT.
     * |        |          |01 = Clock source from PLL/2.
     * |        |          |10 = Clock source from LXT.
     * |        |          |11 = Clock source from HIRC.
     * |[27:26] |UART1SEL  |UART1 Clock Source Selection
     * |        |          |00 = Clock source from HXT.
     * |        |          |01 = Clock source from PLL/2.
     * |        |          |10 = Clock source from LXT.
     * |        |          |11 = Clock source from HIRC.
     * |[29:28] |WWDT0SEL  |Window Watchdog Timer 0 Clock Source Selection
     * |        |          |10 = Clock source from HCLK/2048.
     * |        |          |11 = Clock source from LIRC.
     * |        |          |Others = Reserved.
     * |[31:30] |WWDT1SEL  |Window Watchdog Timer 1 Clock Source Selection
     * |        |          |10 = Clock source from HCLK/2048.
     * |        |          |11 = Clock source from LIRC.
     * |        |          |Others = Reserved.
     * @var CLK_T::CLKSEL2
     * Offset: 0x18  Clock Source Select Control Register 2
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |EPWM0SEL  |EPWM0 Clock Source Selection
     * |        |          |The peripheral clock source of EPWM0 is defined by EPWM0SEL.
     * |        |          |0 = Clock source from HCLK.
     * |        |          |1 = Clock source from PCLK0.
     * |[1]     |EPWM1SEL  |EPWM1 Clock Source Selection
     * |        |          |The peripheral clock source of EPWM1 is defined by EPWM1SEL.
     * |        |          |0 = Clock source from HCLK.
     * |        |          |1 = Clock source from PCLK1.
     * |[3:2]   |QSPI0SEL  |QSPI0 Clock Source Selection
     * |        |          |00 = Clock source from HXT.
     * |        |          |01 = Clock source from PLL/2.
     * |        |          |10 = Clock source from PCLK0.
     * |        |          |11 = Clock source from HIRC.
     * |[5:4]   |SPI0SEL   |SPI0 Clock Source Selection
     * |        |          |00 = Clock source from HXT.
     * |        |          |01 = Clock source from PLL/2.
     * |        |          |10 = Clock source from PCLK1.
     * |        |          |11 = Clock source from HIRC.
     * |[7:6]   |SPI1SEL   |SPI1 Clock Source Selection
     * |        |          |00 = Clock source from HXT.
     * |        |          |01 = Clock source from PLL/2.
     * |        |          |10 = Clock source from PCLK0.
     * |        |          |11 = Clock source from HIRC.
     * |[8]     |BPWM0SEL  |BPWM0 Clock Source Selection
     * |        |          |The peripheral clock source of BPWM0 is defined by BPWM0SEL.
     * |        |          |0 = Clock source from HCLK.
     * |        |          |1 = Clock source from PCLK0.
     * |[9]     |BPWM1SEL  |BPWM1 Clock Source Selection
     * |        |          |The peripheral clock source of BPWM1 is defined by BPWM1SEL.
     * |        |          |0 = Clock source from HCLK.
     * |        |          |1 = Clock source from PCLK1.
     * |[13:12] |SPI2SEL   |SPI2 Clock Source Selection
     * |        |          |00 = Clock source from HXT.
     * |        |          |01 = Clock source from PLL/2.
     * |        |          |10 = Clock source from PCLK1.
     * |        |          |11 = Clock source from HIRC.
     * |[16]    |BPWM2SEL  |BPWM2 Clock Source Selection
     * |        |          |The peripheral clock source of BPWM2 is defined by BPWM2SEL.
     * |        |          |0 = Clock source from HCLK.
     * |        |          |1 = Clock source from PCLK0.
     * |[17]    |BPWM3SEL  |BPWM3 Clock Source Selection
     * |        |          |The peripheral clock source of BPWM3 is defined by BPWM3SEL.
     * |        |          |0 = Clock source from HCLK.
     * |        |          |1 = Clock source from PCLK1.
     * |[18]    |BPWM4SEL  |BPWM4 Clock Source Selection
     * |        |          |The peripheral clock source of BPWM4 is defined by BPWM4SEL.
     * |        |          |0 = Clock source from HCLK.
     * |        |          |1 = Clock source from PCLK0.
     * |[18]    |BPWM5SEL  |BPWM5 Clock Source Selection
     * |        |          |The peripheral clock source of BPWM5 is defined by BPWM5SEL.
     * |        |          |0 = Clock source from HCLK.
     * |        |          |1 = Clock source from PCLK1.
     * @var CLK_T::CLKSEL3
     * Offset: 0x1C  Clock Source Select Control Register 3
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[17:16] |I2S0SEL   |I2S0 Clock Source Selection
     * |        |          |00 = Clock source from HXT.
     * |        |          |01 = Clock source from PLL/2.
     * |        |          |10 = Clock source from PCLK0.
     * |        |          |11 = Clock source from HIRC.
     * |[19:18] |I3C0SEL   |I3C0 Clock Source Selection
     * |        |          |00 = Clock source from HXT.
     * |        |          |01 = Clock source from HCLK.
     * |        |          |10 = Clock source from PCLK0.
     * |        |          |11 = Clock source from HIRC.
     * |[25:24] |UART2SEL  |UART2 Clock Source Selection
     * |        |          |00 = Clock source from HXT.
     * |        |          |01 = Clock source from PLL/2.
     * |        |          |10 = Clock source from LXT.
     * |        |          |11 = Clock source from HIRC.
     * |[27:26] |UART3SEL  |UART3 Clock Source Selection
     * |        |          |00 = Clock source from HXT.
     * |        |          |01 = Clock source from PLL/2.
     * |        |          |10 = Clock source from LXT.
     * |        |          |11 = Clock source from HIRC.
     * |[29:28] |UART4SEL  |UART4 Clock Source Selection
     * |        |          |00 = Clock source from HXT.
     * |        |          |01 = Clock source from PLL/2.
     * |        |          |10 = Clock source from LXT.
     * |        |          |11 = Clock source from HIRC.
     * @var CLK_T::CLKDIV0
     * Offset: 0x20  Clock Divider Number Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |HCLKDIV   |HCLK Clock Divide Number from HCLK Clock Source
     * |        |          |HCLK clock frequency = (HCLK clock source frequency) / (HCLKDIV + 1).
     * |[11:8]  |UART0DIV  |UART0 Clock Divide Number from UART0 Clock Source
     * |        |          |UART0 clock frequency = (UART0 clock source frequency) / (UART0DIV + 1).
     * |[15:12] |UART1DIV  |UART1 Clock Divide Number from UART1 Clock Source
     * |        |          |UART1 clock frequency = (UART1 clock source frequency) / (UART1DIV + 1).
     * |[23:16] |EADC0DIV  |EADC0 Clock Divide Number from EADC0 Clock Source
     * |        |          |EADC0 clock frequency = (EADC0 clock source frequency) / (EADC0DIV + 1).
     * |[31:24] |SDH0DIV   |SDH0 Clock Divide Number from SDH0 Clock Source
     * |        |          |SDH0 clock frequency = (SDH0 clock source frequency) / (SDH0DIV + 1).
     * @var CLK_T::CLKDIV1
     * Offset: 0x24  Clock Divider Number Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |UART2DIV  |UART2 Clock Divide Number from UART2 Clock Source
     * |        |          |UART2 clock frequency = (UART2 clock source frequency) / (UART2DIV + 1).
     * |[7:4]   |UART3DIV  |UART3 Clock Divide Number from UART3 Clock Source
     * |        |          |UART3 clock frequency = (UART3 clock source frequency) / (UART3DIV + 1).
     * |[11:8]  |UART4DIV  |UART4 Clock Divide Number from UART4 Clock Source
     * |        |          |UART4 clock frequency = (UART4 clock source frequency) / (UART4DIV + 1).
     * |[12:15] |I2S0DIV   |I2S0 Clock Divide Number from I2S0 Clock Source
     * |        |          |I2S0 clock frequency = (I2S0 clock source frequency) / (I2S0DIV + 1).
     * |[16:19] |CANFD0DIV |CANFD0 Clock Divide Number from CANFD0 Clock Source
     * |        |          |CANFD0 clock frequency = (CANFD0 clock source frequency) / (CANFD1DIV + 1).
     * |[23:20] |CANFD1DIV |CANFD1 Clock Divide Number from CANFD1 Clock Source
     * |        |          |CANFD1 clock frequency = (CANFD1 clock source frequency) / (CANFD1DIV + 1).
     * @var CLK_T::PCLKDIV
     * Offset: 0x34  APB Clock Divider Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[2:0]   |APB0DIV   |APB0 Clock Divider
     * |        |          |APB0 clock can be divided from HCLK.
     * |        |          |000 = PCLK0 frequency is HCLK.
     * |        |          |001 = PCLK0 frequency is HCLK/2.
     * |        |          |010 = PCLK0 frequency is HCLK/4.
     * |        |          |011 = PCLK0 frequency is HCLK/8.
     * |        |          |100 = PCLK0 frequency is HCLK/16.
     * |        |          |Others = Reserved.
     * |[6:4]   |APB1DIV   |APB1 Clock Divider
     * |        |          |APB1 clock can be divided from HCLK.
     * |        |          |000 = PCLK1 frequency is HCLK.
     * |        |          |001 = PCLK1 frequency is HCLK/2.
     * |        |          |010 = PCLK1 frequency is HCLK/4.
     * |        |          |011 = PCLK1 frequency is HCLK/8.
     * |        |          |100 = PCLK1 frequency is HCLK/16.
     * |        |          |Others = Reserved.
     * @var CLK_T::APBCLK2
     * Offset: 0x38  APB Devices Clock Enable Control Register 2
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |LLSI0CKEN |LLSI0 Clock Enable Bit
     * |        |          |0 = LLSI0 clock Disabled.
     * |        |          |1 = LLSI0 clock Enabled.
     * |[1]     |LLSI1CKEN |LLSI1 Clock Enable Bit
     * |        |          |0 = LLSI1 clock Disabled.
     * |        |          |1 = LLSI1 clock Enabled.
     * |[2]     |LLSI2CKEN |LLSI2 Clock Enable Bit
     * |        |          |0 = LLSI2 clock Disabled.
     * |        |          |1 = LLSI2 clock Enabled.
     * |[3]     |LLSI3CKEN |LLSI3 Clock Enable Bit
     * |        |          |0 = LLSI3 clock Disabled.
     * |        |          |1 = LLSI3 clock Enabled.
     * |[4]     |LLSI4CKEN |LLSI4 Clock Enable Bit
     * |        |          |0 = LLSI4 clock Disabled.
     * |        |          |1 = LLSI4 clock Enabled.
     * |[5]     |LLSI5CKEN |LLSI5 Clock Enable Bit
     * |        |          |0 = LLSI5 clock Disabled.
     * |        |          |1 = LLSI5 clock Enabled.
     * |[6]     |LLSI6CKEN |LLSI6 Clock Enable Bit
     * |        |          |0 = LLSI6 clock Disabled.
     * |        |          |1 = LLSI6 clock Enabled.
     * |[7]     |LLSI7CKEN |LLSI7 Clock Enable Bit
     * |        |          |0 = LLSI7 clock Disabled.
     * |        |          |1 = LLSI7 clock Enabled.
     * |[8]     |LLSI8CKEN |LLSI8 Clock Enable Bit
     * |        |          |0 = LLSI8 clock Disabled.
     * |        |          |1 = LLSI8 clock Enabled.
     * |[9]     |LLSI9CKEN |LLSI9 Clock Enable Bit
     * |        |          |0 = LLSI9 clock Disabled.
     * |        |          |1 = LLSI9 clock Enabled.
     * |[10]    |ELLSI0CKEN|ELLSI0 Clock Enable Bit
     * |        |          |0 = ELLSI0 clock Disabled.
     * |        |          |1 = ELLSI0 clock Enabled.
     * @var CLK_T::PLLCTL
     * Offset: 0x40  PLL Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[8:0]   |FBDIV     |PLL Feedback Divider Control (Write Protect)
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[13:9]  |INDIV     |PLL Input Divider Control (Write Protect)
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[15:14] |OUTDIV    |PLL Output Divider Control (Write Protect)
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[16]    |PD        |Power-down Mode (Write Protect)
     * |        |          |If set the PDEN bit to 1 in CLK_PWRCTL register, the PLL will enter Power-down mode, too.
     * |        |          |0 = PLL is in normal mode.
     * |        |          |1 = PLL is in Power-down mode (default).
     * |        |          |Note 1: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note 2: PLL cannot be disabled and PD will read as 1 if HCLK clock source is selected from PLL.
     * |[17]    |BP        |PLL Bypass Control (Write Protect)
     * |        |          |0 = PLL is in normal mode (default).
     * |        |          |1 = PLL clock output is same as PLL input clock FIN.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[18]    |OE        |PLL FOUT Enable Control (Write Protect)
     * |        |          |0 = PLL FOUT Enabled.
     * |        |          |1 = PLL FOUT is fixed low.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[19]    |PLLSRC    |PLL Source Clock Selection (Write Protect)
     * |        |          |0 = PLL source clock from HXT.
     * |        |          |1 = PLL source clock from HIRC/4.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[23]    |STBSEL    |PLL Stable Counter Selection (Write Protect)
     * |        |          |0 = PLL stable time is 1200 PLL source clock (suitable for source clock equal to or less than 12 MHz).
     * |        |          |1 = PLL stable time is 2400 PLL source clock (suitable for source clock larger than 12 MHz).
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
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
     * |        |          |0 = 38.4 kHz internal low speed RC oscillator (LIRC) clock is not stable or disabled.
     * |        |          |1 = 38.4 kHz internal low speed RC oscillator (LIRC) clock is stable and enabled.
     * |[4]     |HIRCSTB   |HIRC Clock Source Stable Flag (Read Only)
     * |        |          |0 = 48 MHz internal high speed RC oscillator (HIRC) clock is not stable or disabled.
     * |        |          |1 = 48 MHz internal high speed RC oscillator (HIRC) clock is stable and enabled.
     * |[7]     |CLKSFAIL  |Clock Switching Fail Flag (Read Only)
     * |        |          |This bit is updated when software switches system clock source.
     * |        |          |If switch target clock is stable, this bit will be set to 0.
     * |        |          |If switch target clock is not stable, this bit will be set to 1.
     * |        |          |0 = Clock switching success.
     * |        |          |1 = Clock switching failure.
     * |        |          |Note: This bit is read only.
     * |        |          |After selected clock source is stable, hardware will switch system clock to selected clock automatically, and CLKSFAIL will be cleared automatically by hardware.
     * @var CLK_T::CLKOCTL
     * Offset: 0x60  Clock Output Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |FREQSEL   |Clock Output Frequency Selection
     * |        |          |The formula of output frequency is Fout = Fin/2^(N+1).
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
     * |        |          |1 = 4~32MHz external high speed crystal oscillator (HXT) clock fail interrupt Enabled.
     * |[12]    |LXTFDEN   |LXT Clock Fail Detector Enable Bit
     * |        |          |0 = 32.768 kHz external low speed crystal oscillator (LXT) clock fail detector Disabled.
     * |        |          |1 = 32.768 kHz external low speed crystal oscillator (LXT) clock fail detector Enabled.
     * |[13]    |LXTFIEN   |LXT Clock Fail Interrupt Enable Bit
     * |        |          |0 = 32.768 kHz external low speed crystal oscillator (LXT) clock fail interrupt Disabled.
     * |        |          |1 = 32.768 kHz external low speed crystal oscillator (LXT) clock fail interrupt Enabled.
     * |[16]    |HXTFQDEN  |HXT Clock Frequency Range Detector Enable Bit
     * |        |          |0 = 4~32 MHz external high speed crystal oscillator (HXT) clock frequency range detector Disabled.
     * |        |          |1 = 4~32MHz external high speed crystal oscillator (HXT) clock frequency range detector Enabled.
     * |[17]    |HXTFQIEN  |HXT Clock Frequency Range Detector Interrupt Enable Bit
     * |        |          |0 = 4~32 MHz external high speed crystal oscillator (HXT) clock frequency range detector fail interrupt Disabled.
     * |        |          |1 = 4~32 MHz external high speed crystal oscillator (HXT) clock frequency range detector fail interrupt Enabled.
     * |[18]    |HXTFQASW  |HXT Clock Frequency Range Detector Event Auto Switch Enable Bit
     * |        |          |0 = 4~32 MHz external high speed crystal oscillator (HXT) clock frequency range detector fail event happened and HCLK will not switch to HIRC automatically.
     * |        |          |1 = 4~32 MHz external high speed crystal oscillator (HXT) clock frequency range detector fail event happened and HCLK will switch to HIRC automatically.
     * |        |          |Note: This bit should be set before HXTFQDEN(CLK_CLKDCTL[16]).
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
     * |[9:0]   |UPERBD    |HXT Clock Frequency Range Detector Upper Boundary Value
     * |        |          |The bits define the maximum value of frequency range detector window.
     * |        |          |When HXT frequency higher than this maximum frequency value, the HXT Clock Frequency Range Detector Interrupt Flag will set to 1.
     * @var CLK_T::CDLOWB
     * Offset: 0x7C  Clock Frequency Range Detector Lower Boundary Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[9:0]   |LOWERBD   |HXT Clock Frequency Range Detector Lower Boundary Value
     * |        |          |The bits define the minimum value of frequency range detector window.
     * |        |          |When HXT frequency lower than this minimum frequency value, the HXT Clock Frequency Range Detector Interrupt Flag will set to 1.
     * @var CLK_T::STOPREQ
     * Offset: 0x80  Clock Stop Request Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CANFD0STR |CANFD0 Clock Stop Request
     * |        |          |This bit is used to stop CANFD0 clock.
     * |        |          |0 = CANFD0 clock is not stoped by this bit. (default)
     * |        |          |1 = Set this bit and check the CANFD0STA(CLK_STOPACK[0]) is 1, then CANFD0 clock stop.
     * |[1]     |CANFD1STR |CANFD1 Clock Stop Request
     * |        |          |This bit is used to stop CANFD1 clock.
     * |        |          |0 = CANFD1 clock is not stoped by this bit. (default)
     * |        |          |1 = Set this bit and check the CANFD1STA(CLK_STOPACK[1]) is 1, then CANFD1 clock stop.
     * @var CLK_T::STOPACK
     * Offset: 0x84  Clock Stop Acknowledge Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CANFD0STA |CANFD0 Clock Stop Acknowledge (Read Only)
     * |        |          |This bit is used to check CANFD0 clock stop by setting CANFD0STR(CLK_STOPREQ[0]).
     * |        |          |0 = CANFD0 clock not stoped.
     * |        |          |1 = CANFD0 clock stoped.
     * |[1]     |CANFD1STA |CANFD1 Clock Stop Acknowledge (Read Only)
     * |        |          |This bit is used to check CANFD1 clock stop by setting CANFD1STR(CLK_STOPREQ[1]).
     * |        |          |0 = CANFD1 clock not stoped.
     * |        |          |1 = CANFD1 clock stoped.
     * @var CLK_T::PMUCTL
     * Offset: 0x90  Power Manager Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[2:0]   |PDMSEL    |Power-down Mode Selection (Write Protect)
     * |        |          |These bits control chip power-down mode grade selection when CPU execute WFI/WFE instruction.
     * |        |          |000 = Normal Power-down mode 1 is selected (NPD1).
     * |        |          |001 = Normal Power-down mode 2 is selected (NPD2).
     * |        |          |010 = Normal Power-down mode 0 is selected (NPD0).
     * |        |          |011 = Reserved.
     * |        |          |100 = Standby Power-down mode is selected (SPD).
     * |        |          |101 = Reserved.
     * |        |          |110 = Deep Power-down mode is selected (DPD).
     * |        |          |111 = Reserved.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[3]     |DPDHOLDEN |Deep-Power-Down Mode GPIO Hold Enable Bit (Write Protect)
     * |        |          |0= When GPIO enters deep power-down mode, all I/O status are tri-state.
     * |        |          |1= When GPIO enters deep power-down mode, all I/O status are hold to keep normal operating status.
     * |        |          |After chip was woken up from deep power-down mode, the I/O are still keep hold status until user set CLK_IOPDCTL[0] to release I/O hold status.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[6:4]   |SRETSEL   |SRAM Retention Range Select Bit (Write Protect)
     * |        |          |Select SRAM retention range when chip enter SPD mode.
     * |        |          |For M3331Gx:
     * |        |          |000 = No SRAM retention.
     * |        |          |001 = 32K SRAM retention when chip enter SPD mode.
     * |        |          |010 = 64K SRAM retention when chip enter SPD mode.
     * |        |          |011 = 96K SRAM retention when chip enter SPD mode.(default)
     * |        |          |Others = Reserved.
     * |        |          |For M3331Ix:
     * |        |          |000 = No SRAM retention.
     * |        |          |001 = 64K SRAM retention when chip enter SPD mode.
     * |        |          |010 = 192K SRAM retention when chip enter SPD mode.
     * |        |          |011 = 320K SRAM retention when chip enter SPD mode.(default)
     * |        |          |Others = Reserved.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[8]     |WKTMREN   |Wake-up Timer Enable Bit (Write Protect)
     * |        |          |0 = Wake-up timer Disabled.
     * |        |          |1 = Wake-up timer Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[12:9]  |WKTMRIS   |Wake-up Timer Time-out Interval Select (Write Protect)
     * |        |          |These bits control wake-up timer time-out interval.
     * |        |          |0000 = Time-out interval is 512 LIRC clocks (13.33ms).
     * |        |          |0001 = Time-out interval is 1024 LIRC clocks (26.67ms).
     * |        |          |0010 = Time-out interval is 2048 LIRC clocks (53.33ms).
     * |        |          |0011 = Time-out interval is 4096 LIRC clocks (106.67ms).
     * |        |          |0100 = Time-out interval is 8192 LIRC clocks (213.33ms).
     * |        |          |0101 = Time-out interval is 16384 LIRC clocks (426.67ms).
     * |        |          |0110 = Time-out interval is 32768 LIRC clocks (853.33ms).
     * |        |          |0111 = Time-out interval is 65536 LIRC clocks (1706.67ms).
     * |        |          |1000 = Time-out interval is 131072 LIRC clocks (3413.33ms).
     * |        |          |1001 = Time-out interval is 262144 LIRC clocks (6826.67ms).
     * |        |          |1010 = Time-out interval is 524288 LIRC clocks (13653.33ms).
     * |        |          |1011 = Time-out interval is 1048576 LIRC clocks (27306.67ms).
     * |        |          |1100 = Time-out interval is 2097152 LIRC clocks (54613.33ms).
     * |        |          |1101 = Time-out interval is 4194304 LIRC clocks (109226.67ms).
     * |        |          |Others = Time-out interval is 512 LIRC clocks (13.3ms).
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[13]    |WKTMRMOD  |Wake-up Timer Mode (Write Protect)
     * |        |          |0 = Wake-up timer started when entering power down mode.
     * |        |          |1 = Wake-up timer started immediately when WKTMREN (CLK_PMUCTL[8]) = 1.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[17:16] |WKPINEN0  |Wake-up Pin0 Enable Bit (Write Protect)
     * |        |          |This is control register for GPC.0 to wake-up pin.
     * |        |          |00 = Wake-up pin disabled at Deep Power-down mode.
     * |        |          |01 = Wake-up pin rising edge enabled at Deep Power-down mode.
     * |        |          |10 = Wake-up pin falling edge enabled at Deep Power-down mode.
     * |        |          |11 = Wake-up pin both edge enabled at Deep Power-down mode.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[18]    |ACMPSPWK  |ACMP Standby Power-down Mode Wake-up Enable Bit (Write Protect)
     * |        |          |0 = ACMP wake-up disabled at Standby Power-down mode.
     * |        |          |1 = ACMP wake-up enabled at Standby Power-down mode.
     * |        |          |Note 1: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Note 2: Set FILTSEL(ACMP_CTLx[15:13]) for comparator output filter count selection, the filter clock is LIRC/3 in ACMP SPD mode wakeup function.
     * |[22]    |VBUSWKEN  |VBUS Wake-up Enable Bit (Write Protect)
     * |        |          |0 = VBUS transition wake-up disabled at Deep Power-down mode.
     * |        |          |1 = VBUS transition wake-up enabled at Deep Power-down mode.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[23]    |RTCWKEN   |RTC Wake-up Enable Bit (Write Protect)
     * |        |          |0 = RTC wake-up disabled at Standby Power-down mode.
     * |        |          |1 = RTC wake-up enabled at Standby Power-down mode.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[25:24] |WKPINEN1  |Wake-up Pin1 Enable Bit (Write Protect)
     * |        |          |This is control register for GPB.0 to wake-up pin.
     * |        |          |00 = Wake-up pin disable at Deep Power-down mode.
     * |        |          |01 = Wake-up pin rising edge enabled at Deep Power-down mode.
     * |        |          |10 = Wake-up pin falling edge enabled at Deep Power-down mode.
     * |        |          |11 = Wake-up pin both edge enabled at Deep Power-down mode.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[27:26] |WKPINEN2  |Wake-up Pin2 Enable Bit (Write Protect)
     * |        |          |This is control register for GPB.2 to wake-up pin.
     * |        |          |00 = Wake-up pin disabled at Deep Power-down mode.
     * |        |          |01 = Wake-up pin rising edge enabled at Deep Power-down mode.
     * |        |          |10 = Wake-up pin falling edge enabled at Deep Power-down mode.
     * |        |          |11 = Wake-up pin both edge enabled at Deep Power-down mode.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[29:28] |WKPINEN3  |Wake-up Pin3 Enable Bit (Write Protect)
     * |        |          |This is control register for GPB.12 to wake-up pin.
     * |        |          |00 = Wake-up pin disabled at Deep Power-down mode.
     * |        |          |01 = Wake-up pin rising edge enabled at Deep Power-down mode.
     * |        |          |10 = Wake-up pin falling edge enabled at Deep Power-down mode.
     * |        |          |11 = Wake-up pin both edge enabled at Deep Power-down mode.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[31:30] |WKPINEN4  |Wake-up Pin4 Enable Bit (Write Protect)
     * |        |          |This is control register for GPF.6 to wake-up pin.
     * |        |          |00 = Wake-up pin disabled at Deep Power-down mode.
     * |        |          |01 = Wake-up pin rising edge enabled at Deep Power-down mode.
     * |        |          |10 = Wake-up pin falling edge enabled at Deep Power-down mode.
     * |        |          |11 = Wake-up pin both edge enabled at Deep Power-down mode.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * @var CLK_T::PMUSTS
     * Offset: 0x94  Power Manager Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |PINWK0    |Pin0 Wake-up Flag (Read Only)
     * |        |          |This flag indicates that wake-up of chip from Deep Power-down mode was requested by a transition of the WAKEUP pin (GPC.0).
     * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering DPD mode.
     * |[1]     |TMRWK     |Timer Wake-up Flag (Read Only)
     * |        |          |This flag indicates that wake-up of chip from Deep Power-down mode (DPD) or Standby Power-down (SPD) mode was requested by wake-up timer time-out.
     * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering SPD/DPD mode.
     * |[2]     |RTCWK     |RTC Wake-up Flag (Read Only)
     * |        |          |This flag indicates that wake-up of device from Standby Power-down (SPD) mode was requested with a RTC alarm or tick time happened.
     * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering SPD mode.
     * |[3]     |PINWK1    |Pin1 Wake-up Flag (Read Only)
     * |        |          |This flag indicates that wake-up of chip from Deep Power-down mode was requested by a transition of the WAKEUP pin (PB.0).
     * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering DPD mode.
     * |[4]     |PINWK2    |Pin2 Wake-up Flag (Read Only)
     * |        |          |This flag indicates that wake-up of chip from Deep Power-down mode was requested by a transition of the WAKEUP pin (PB.2).
     * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering DPD mode.
     * |[5]     |PINWK3    |Pin3 Wake-up Flag (Read Only)
     * |        |          |This flag indicates that wake-up of chip from Deep Power-down mode was requested by a transition of the WAKEUP pin (PB.12).
     * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering DPD mode.
     * |[6]     |PINWK4    |Pin4 Wake-up Flag (Read Only)
     * |        |          |This flag indicates that wake-up of chip from Deep Power-down mode was requested by a transition of the WAKEUP pin (PF.6).
     * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering DPD mode.
     * |[7]     |VBUSWK    |VBUS Wake-up Flag( Read Only)
     * |        |          |This flag indicates that wake-up of chip from Deep Power-down mode was requested by a transition of the WAKEUP pin (PA.12).
     * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering DPD mode.
     * |[8]     |GPAWK0    |GPA Wake-up 0 Flag (Read Only)
     * |        |          |This flag indicates that wake-up of chip from Standby Power-down mode was requested by a transition of selected one GPA group pins.
     * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering SPD mode.
     * |[9]     |GPBWK0    |GPB Wake-up 0 Flag (Read Only)
     * |        |          |This flag indicates that wake-up of chip from Standby Power-down mode was requested by a transition of selected one GPB group pins.
     * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering SPD mode.
     * |[10]    |GPCWK0    |GPC Wake-up 0 Flag (Read Only)
     * |        |          |This flag indicates that wake-up of chip from Standby Power-down mode was requested by a transition of selected one GPC group pins.
     * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering SPD mode.
     * |[11]    |GPDWK0    |GPD Wake-up 0 Flag (Read Only)
     * |        |          |This flag indicates that wake-up of chip from Standby Power-down mode was requested by a transition of selected one GPD group pins.
     * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering SPD mode.
     * |[12]    |LVRWK     |LVR Wake-up Flag (Read Only)
     * |        |          |This flag indicates that wake-up of device from Standby Power-down mode was requested with a LVR happened.
     * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering SPD mode.
     * |[13]    |BODWK     |BOD Wake-up Flag (Read Only)
     * |        |          |This flag indicates that wake-up of device from Standby Power-down mode (SPD) was requested with a BOD happened.
     * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering SPD mode.
     * |[15]    |RSTWK     |RST pin Wake-up Flag (Read Only)
     * |        |          |This flag indicates that wake-up of device from Deep Power-down mode (DPD) or Standby Power-down (SPD) mode was requested with a RST pin trigger happened.
     * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering SPD/DPD mode.
     * |[16]    |ACMPWK0   |ACMP0 Wake-up Flag (Read Only)
     * |        |          |This flag indicates that wake-up of device from Standby Power-down mode (SPD) was requested with an ACMP0 transition.
     * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering SPD mode.
     * |[17]    |ACMPWK1   |ACMP1 Wake-up Flag (Read Only)
     * |        |          |This flag indicates that wake-up of device from Standby Power-down mode (SPD) was requested with an ACMP1 transition.
     * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering SPD mode.
     * |[24]    |GPAWK1    |GPA Wake-up 1 Flag (Read Only)
     * |        |          |This flag indicates that wake-up of chip from Standby Power-down mode was requested by a transition of selected one GPA group pins.
     * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering SPD mode.
     * |[25]    |GPBWK1    |GPB Wake-up 1 Flag (Read Only)
     * |        |          |This flag indicates that wake-up of chip from Standby Power-down mode was requested by a transition of selected one GPB group pins.
     * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering SPD mode.
     * |[26]    |GPCWK1    |GPC Wake-up 1 Flag (Read Only)
     * |        |          |This flag indicates that wake-up of chip from Standby Power-down mode was requested by a transition of selected one GPC group pins.
     * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering SPD mode.
     * |[27]    |GPDWK1    |GPD Wake-up 1 Flag (Read Only)
     * |        |          |This flag indicates that wake-up of chip from Standby Power-down mode was requested by a transition of selected one GPD group pins.
     * |        |          |Note: This flag needs to be cleared by setting CLRWK(CLK_PMUSTS[31] when entering SPD mode.
     * |[31]    |CLRWK     |Clear Wake-up Flag
     * |        |          |0 = No clear.
     * |        |          |1= Clear all wake-up flag.
     * |        |          |Note: This bit is auto cleared by hardware.
     * @var CLK_T::PWDBCTL
     * Offset: 0x9C  GPIO Pin WKIO De-bounce Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |WKDBCLKSEL|WKIO De-bounce Sampling Cycle Selection
     * |        |          |0000 = Sample wake-up input once per 1 clock.
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
     * |        |          |1111 = Sample wake-up input once per 128*256 clocks.
     * |        |          |Note: De-bounce counter clock source is LIRC/3.
     * @var CLK_T::PAPWCTL
     * Offset: 0xA0  GPA Pin WKIO Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |WKEN0     |GPA Pin 0 Wake-up I/O Enable Bit
     * |        |          |0 = GPA group pin 0 Wake-up I/O function Disabled.
     * |        |          |1 = GPA group pin 0 Wake-up I/O function Enabled.
     * |[1]     |PRWKEN0   |GPA Pin 0 Rising Edge Detect Enable Bit
     * |        |          |0 = GPA group pin 0 rising edge detect function Disabled.
     * |        |          |1 = GPA group pin 0 rising edge detect function Enabled.
     * |[2]     |PFWKEN0   |GPA Pin 0 Falling Edge Detect Enable Bit
     * |        |          |0 = GPA group pin 0 falling edge detect function Disabled.
     * |        |          |1 = GPA group pin 0 falling edge detect function Enabled.
     * |[7:4]   |WKPSEL0   |GPA Pin 0 Wake-up I/O Pin Select
     * |        |          |0000 = GPA.0 as Wake-up I/O function select.
     * |        |          |0001 = GPA.1 as Wake-up I/O function select.
     * |        |          |0010 = GPA.2 as Wake-up I/O function select.
     * |        |          |0011 = GPA.3 as Wake-up I/O function select.
     * |        |          |0100 = GPA.4 as Wake-up I/O function select.
     * |        |          |0101 = GPA.5 as Wake-up I/O function select.
     * |        |          |0110 = GPA.6 as Wake-up I/O function select.
     * |        |          |0111 = GPA.7 as Wake-up I/O function select.
     * |        |          |1000 = GPA.8 as Wake-up I/O function select.
     * |        |          |1001 = GPA.9 as Wake-up I/O function select.
     * |        |          |1010 = GPA.10 as Wake-up I/O function select.
     * |        |          |1011 = GPA.11 as Wake-up I/O function select.
     * |        |          |1100 = GPA.12 as Wake-up I/O function select.
     * |        |          |1101 = GPA.13 as Wake-up I/O function select.
     * |        |          |1110 = GPA.14 as Wake-up I/O function select.
     * |        |          |1111 = GPA.15 as Wake-up I/O function select.
     * |[8]     |DBEN0     |GPA Pin 0 Input Signal De-bounce Enable Bit
     * |        |          |This bit is used to enable the de-bounce function for each corresponding I/O.
     * |        |          |If the input signal pulse width cannot be sampled by continuous two de-bounce sample cycle, the input signal transition is seen as the signal bounce and will not trigger the wake-up.
     * |        |          |The de-bounce clock source is LIRC/3.
     * |        |          |The de-bounce function is valid only for edge triggered.
     * |        |          |0 = GPA group pin 0 Wake-up I/O pin De-bounce function Disabled.
     * |        |          |1 = GPA group pin 0 Wake-up I/O pin De-bounce function Enabled.
     * |[11]    |NMR0      |GPA Pin 0 Function Enable at Normal Run Mode Select
     * |        |          |0 = GPA group pin 0 wake-up function enable when chip enters power down.
     * |        |          |1 = GPA group pin 0 wake-up function enable when chip is normal run.
     * |        |          |Note: Enable this bit and the I/O wake-up function is enabled immediately.
     * |[16]    |WKEN1     |GPA Pin 1 Wake-up I/O Enable Bit
     * |        |          |0 = GPA group pin 0 Wake-up I/O function Disabled.
     * |        |          |1 = GPA group pin 0 Wake-up I/O function Enabled.
     * |[17]    |PRWKEN1   |GPA Pin 1 Rising Edge Detect Enable Bit
     * |        |          |0 = GPA group pin 1 rising edge detect function Disabled.
     * |        |          |1 = GPA group pin 1 rising edge detect function Enabled.
     * |[18]    |PFWKEN1   |GPA Pin 1 Falling Edge Detect Enable Bit
     * |        |          |0 = GPA group pin 1 falling edge detect function Disabled.
     * |        |          |1 = GPA group pin 1 falling edge detect function Enabled.
     * |[23:20] |WKPSEL1   |GPA Pin 1 Wake-up I/O Pin Select
     * |        |          |0000 = GPA.0 as Wake-up I/O function select.
     * |        |          |0001 = GPA.1 as Wake-up I/O function select.
     * |        |          |0010 = GPA.2 as Wake-up I/O function select.
     * |        |          |0011 = GPA.3 as Wake-up I/O function select.
     * |        |          |0100 = GPA.4 as Wake-up I/O function select.
     * |        |          |0101 = GPA.5 as Wake-up I/O function select.
     * |        |          |0110 = GPA.6 as Wake-up I/O function select.
     * |        |          |0111 = GPA.7 as Wake-up I/O function select.
     * |        |          |1000 = GPA.8 as Wake-up I/O function select.
     * |        |          |1001 = GPA.9 as Wake-up I/O function select.
     * |        |          |1010 = GPA.10 as Wake-up I/O function select.
     * |        |          |1011 = GPA.11 as Wake-up I/O function select.
     * |        |          |1100 = GPA.12 as Wake-up I/O function select.
     * |        |          |1101 = GPA.13 as Wake-up I/O function select.
     * |        |          |1110 = GPA.14 as Wake-up I/O function select.
     * |        |          |1111 = GPA.15 as Wake-up I/O function select.
     * |[24]    |DBEN1     |GPA Pin 1 Input Signal De-bounce Enable Bit
     * |        |          |This bit is used to enable the de-bounce function for each corresponding I/O.
     * |        |          |If the input signal pulse width cannot be sampled by continuous two de-bounce sample cycle, the input signal transition is seen as the signal bounce and will not trigger the wake-up.
     * |        |          |The de-bounce clock source is LIRC/3.
     * |        |          |The de-bounce function is valid only for edge triggered.
     * |        |          |0 = GPA group pin 1 Wake-up I/O pin De-bounce function Disabled.
     * |        |          |1 = GPA group pin 1 Wake-up I/O pin De-bounce function Enabled.
     * |[27]    |NMR1      |GPA Pin 1 Function Enable at Normal Run Mode Select
     * |        |          |0 = GPA group pin 1 wake-up function enable when chip enters power down.
     * |        |          |1 = GPA group pin 1 wake-up function enable when chip is normal run.
     * |        |          |Note: Enable this bit and the I/O wake-up function is enabled immediately.
     * @var CLK_T::PBPWCTL
     * Offset: 0xA4  GPB Pin WKIO Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |WKEN0     |GPB Pin 0 Wake-up I/O Enable Bit
     * |        |          |0 = GPB group pin 0 Wake-up I/O function Disabled.
     * |        |          |1 = GPB group pin 0 Wake-up I/O function Enabled.
     * |[1]     |PRWKEN0   |GPB Pin 0 Rising Edge Detect Enable Bit
     * |        |          |0 = GPB group pin 0 rising edge detect function Disabled.
     * |        |          |1 = GPB group pin 0 rising edge detect function Enabled.
     * |[2]     |PFWKEN0   |GPB Pin 0 Falling Edge Detect Enable Bit
     * |        |          |0 = GPB group pin 0 falling edge detect function Disabled.
     * |        |          |1 = GPB group pin 0 falling edge detect function Enabled.
     * |[7:4]   |WKPSEL0   |GPB Pin 0 Wake-up I/O Pin Select
     * |        |          |0000 = GPB.0 as Wake-up I/O function select.
     * |        |          |0001 = GPB.1 as Wake-up I/O function select.
     * |        |          |0010 = GPB.2 as Wake-up I/O function select.
     * |        |          |0011 = GPB.3 as Wake-up I/O function select.
     * |        |          |0100 = GPB.4 as Wake-up I/O function select.
     * |        |          |0101 = GPB.5 as Wake-up I/O function select.
     * |        |          |0110 = GPB.6 as Wake-up I/O function select.
     * |        |          |0111 = GPB.7 as Wake-up I/O function select.
     * |        |          |1000 = GPB.8 as Wake-up I/O function select.
     * |        |          |1001 = GPB.9 as Wake-up I/O function select.
     * |        |          |1010 = GPB.10 as Wake-up I/O function select.
     * |        |          |1011 = GPB.11 as Wake-up I/O function select.
     * |        |          |1100 = GPB.12 as Wake-up I/O function select.
     * |        |          |1101 = GPB.13 as Wake-up I/O function select.
     * |        |          |1110 = GPB.14 as Wake-up I/O function select.
     * |        |          |1111 = GPB.15 as Wake-up I/O function select.
     * |[8]     |DBEN0     |GPB Pin 0 Input Signal De-bounce Enable Bit
     * |        |          |This bit is used to enable the de-bounce function for each corresponding I/O.
     * |        |          |If the input signal pulse width cannot be sampled by continuous two de-bounce sample cycle, the input signal transition is seen as the signal bounce and will not trigger the wake-up.
     * |        |          |The de-bounce clock source is LIRC/3.
     * |        |          |The de-bounce function is valid only for edge triggered.
     * |        |          |0 = GPB group pin 0 Wake-up I/O pin De-bounce function Disabled.
     * |        |          |1 = GPB group pin 0 Wake-up I/O pin De-bounce function Enabled.
     * |[11]    |NMR0      |GPB Pin 0 Function Enable at Normal Run Mode Select
     * |        |          |0 = GPB group pin 0 wake-up function enable when chip enters power down.
     * |        |          |1 = GPB group pin 0 wake-up function enable when chip is normal run.
     * |        |          |Note: Enable this bit and the I/O wake-up function is enabled immediately.
     * |[16]    |WKEN1     |GPB Pin 1 Wake-up I/O Enable Bit
     * |        |          |0 = GPB group pin 0 Wake-up I/O function Disabled.
     * |        |          |1 = GPB group pin 0 Wake-up I/O function Enabled.
     * |[17]    |PRWKEN1   |GPB Pin 1 Rising Edge Detect Enable Bit
     * |        |          |0 = GPB group pin 1 rising edge detect function Disabled.
     * |        |          |1 = GPB group pin 1 rising edge detect function Enabled.
     * |[18]    |PFWKEN1   |GPB Pin 1 Falling Edge Detect Enable Bit
     * |        |          |0 = GPB group pin 1 falling edge detect function Disabled.
     * |        |          |1 = GPB group pin 1 falling edge detect function Enabled.
     * |[23:20] |WKPSEL1   |GPB Pin 1 Wake-up I/O Pin Select
     * |        |          |0000 = GPB.0 as Wake-up I/O function select.
     * |        |          |0001 = GPB.1 as Wake-up I/O function select.
     * |        |          |0010 = GPB.2 as Wake-up I/O function select.
     * |        |          |0011 = GPB.3 as Wake-up I/O function select.
     * |        |          |0100 = GPB.4 as Wake-up I/O function select.
     * |        |          |0101 = GPB.5 as Wake-up I/O function select.
     * |        |          |0110 = GPB.6 as Wake-up I/O function select.
     * |        |          |0111 = GPB.7 as Wake-up I/O function select.
     * |        |          |1000 = GPB.8 as Wake-up I/O function select.
     * |        |          |1001 = GPB.9 as Wake-up I/O function select.
     * |        |          |1010 = GPB.10 as Wake-up I/O function select.
     * |        |          |1011 = GPB.11 as Wake-up I/O function select.
     * |        |          |1100 = GPB.12 as Wake-up I/O function select.
     * |        |          |1101 = GPB.13 as Wake-up I/O function select.
     * |        |          |1110 = GPB.14 as Wake-up I/O function select.
     * |        |          |1111 = GPB.15 as Wake-up I/O function select.
     * |[24]    |DBEN1     |GPB Pin 1 Input Signal De-bounce Enable Bit
     * |        |          |This bit is used to enable the de-bounce function for each corresponding I/O.
     * |        |          |If the input signal pulse width cannot be sampled by continuous two de-bounce sample cycle, the input signal transition is seen as the signal bounce and will not trigger the wake-up.
     * |        |          |The de-bounce clock source is LIRC/3.
     * |        |          |The de-bounce function is valid only for edge triggered.
     * |        |          |0 = GPB group pin 1 Wake-up I/O pin De-bounce function Disabled.
     * |        |          |1 = GPB group pin 1 Wake-up I/O pin De-bounce function Enabled.
     * |[27]    |NMR1      |GPB Pin 1 Function Enable at Normal Run Mode Select
     * |        |          |0 = GPB group pin 1 wake-up function enable when chip enters power down.
     * |        |          |1 = GPB group pin 1 wake-up function enable when chip is normal run.
     * |        |          |Note: Enable this bit and the I/O wake-up function is enabled immediately.
     * @var CLK_T::PCPWCTL
     * Offset: 0xA8  GPC Pin WKIO Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |WKEN0     |GPC Pin 0 Wake-up I/O Enable Bit
     * |        |          |0 = GPC group pin 0 Wake-up I/O function Disabled.
     * |        |          |1 = GPC group pin 0 Wake-up I/O function Enabled.
     * |[1]     |PRWKEN0   |GPC Pin 0 Rising Edge Detect Enable Bit
     * |        |          |0 = GPC group pin 0 rising edge detect function Disabled.
     * |        |          |1 = GPC group pin 0 rising edge detect function Enabled.
     * |[2]     |PFWKEN0   |GPC Pin 0 Falling Edge Detect Enable Bit
     * |        |          |0 = GPC group pin 0 falling edge detect function Disabled.
     * |        |          |1 = GPC group pin 0 falling edge detect function Enabled.
     * |[7:4]   |WKPSEL0   |GPC Pin 0 Wake-up I/O Pin Select
     * |        |          |0000 = GPC.0 as Wake-up I/O function select.
     * |        |          |0001 = GPC.1 as Wake-up I/O function select.
     * |        |          |0010 = GPC.2 as Wake-up I/O function select.
     * |        |          |0011 = GPC.3 as Wake-up I/O function select.
     * |        |          |0100 = GPC.4 as Wake-up I/O function select.
     * |        |          |0101 = GPC.5 as Wake-up I/O function select.
     * |        |          |0110 = GPC.6 as Wake-up I/O function select.
     * |        |          |0111 = GPC.7 as Wake-up I/O function select.
     * |        |          |1000 = GPC.8 as Wake-up I/O function select.
     * |        |          |1001 = GPC.9 as Wake-up I/O function select.
     * |        |          |1010 = GPC.10 as Wake-up I/O function select.
     * |        |          |1011 = GPC.11 as Wake-up I/O function select.
     * |        |          |1100 = GPC.12 as Wake-up I/O function select.
     * |        |          |1101 = GPC.13 as Wake-up I/O function select.
     * |        |          |1110 = GPC.14 as Wake-up I/O function select.
     * |        |          |1111 = GPC.15 as Wake-up I/O function select.
     * |[8]     |DBEN0     |GPC Pin 0 Input Signal De-bounce Enable Bit
     * |        |          |This bit is used to enable the de-bounce function for each corresponding I/O.
     * |        |          |If the input signal pulse width cannot be sampled by continuous two de-bounce sample cycle, the input signal transition is seen as the signal bounce and will not trigger the wake-up.
     * |        |          |The de-bounce clock source is LIRC/3.
     * |        |          |The de-bounce function is valid only for edge triggered.
     * |        |          |0 = GPC group pin 0 Wake-up I/O pin De-bounce function Disabled.
     * |        |          |1 = GPC group pin 0 Wake-up I/O pin De-bounce function Enabled.
     * |[11]    |NMR0      |GPC Pin 0 Function Enable at Normal Run Mode Select
     * |        |          |0 = GPC group pin 0 wake-up function enable when chip enters power down.
     * |        |          |1 = GPC group pin 0 wake-up function enable when chip is normal run.
     * |        |          |Note: Enable this bit and the I/O wake-up function is enabled immediately.
     * |[16]    |WKEN1     |GPC Pin 1 Wake-up I/O Enable Bit
     * |        |          |0 = GPC group pin 0 Wake-up I/O function Disabled.
     * |        |          |1 = GPC group pin 0 Wake-up I/O function Enabled.
     * |[17]    |PRWKEN1   |GPC Pin 1 Rising Edge Detect Enable Bit
     * |        |          |0 = GPC group pin 1 rising edge detect function Disabled.
     * |        |          |1 = GPC group pin 1 rising edge detect function Enabled.
     * |[18]    |PFWKEN1   |GPC Pin 1 Falling Edge Detect Enable Bit
     * |        |          |0 = GPC group pin 1 falling edge detect function Disabled.
     * |        |          |1 = GPC group pin 1 falling edge detect function Enabled.
     * |[23:20] |WKPSEL1   |GPC Pin 1 Wake-up I/O Pin Select
     * |        |          |0000 = GPC.0 as Wake-up I/O function select.
     * |        |          |0001 = GPC.1 as Wake-up I/O function select.
     * |        |          |0010 = GPC.2 as Wake-up I/O function select.
     * |        |          |0011 = GPC.3 as Wake-up I/O function select.
     * |        |          |0100 = GPC.4 as Wake-up I/O function select.
     * |        |          |0101 = GPC.5 as Wake-up I/O function select.
     * |        |          |0110 = GPC.6 as Wake-up I/O function select.
     * |        |          |0111 = GPC.7 as Wake-up I/O function select.
     * |        |          |1000 = GPC.8 as Wake-up I/O function select.
     * |        |          |1001 = GPC.9 as Wake-up I/O function select.
     * |        |          |1010 = GPC.10 as Wake-up I/O function select.
     * |        |          |1011 = GPC.11 as Wake-up I/O function select.
     * |        |          |1100 = GPC.12 as Wake-up I/O function select.
     * |        |          |1101 = GPC.13 as Wake-up I/O function select.
     * |        |          |1110 = GPC.14 as Wake-up I/O function select.
     * |        |          |1111 = GPC.15 as Wake-up I/O function select.
     * |[24]    |DBEN1     |GPC Pin 1 Input Signal De-bounce Enable Bit
     * |        |          |This bit is used to enable the de-bounce function for each corresponding I/O.
     * |        |          |If the input signal pulse width cannot be sampled by continuous two de-bounce sample cycle, the input signal transition is seen as the signal bounce and will not trigger the wake-up.
     * |        |          |The de-bounce clock source is LIRC/3.
     * |        |          |The de-bounce function is valid only for edge triggered.
     * |        |          |0 = GPC group pin 1 Wake-up I/O pin De-bounce function Disabled.
     * |        |          |1 = GPC group pin 1 Wake-up I/O pin De-bounce function Enabled.
     * |[27]    |NMR1      |GPC Pin 1 Function Enable at Normal Run Mode Select
     * |        |          |0 = GPC group pin 1 wake-up function enable when chip enters power down.
     * |        |          |1 = GPC group pin 1 wake-up function enable when chip is normal run.
     * |        |          |Note: Enable this bit and the I/O wake-up function is enabled immediately.
     * @var CLK_T::PDPWCTL
     * Offset: 0xAC  GPD Pin WKIO Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |WKEN0     |GPD Pin 0 Wake-up I/O Enable Bit
     * |        |          |0 = GPD group pin 0 Wake-up I/O function Disabled.
     * |        |          |1 = GPD group pin 0 Wake-up I/O function Enabled.
     * |[1]     |PRWKEN0   |GPD Pin 0 Rising Edge Detect Enable Bit
     * |        |          |0 = GPD group pin 0 rising edge detect function Disabled.
     * |        |          |1 = GPD group pin 0 rising edge detect function Enabled.
     * |[2]     |PFWKEN0   |GPD Pin 0 Falling Edge Detect Enable Bit
     * |        |          |0 = GPD group pin 0 falling edge detect function Disabled.
     * |        |          |1 = GPD group pin 0 falling edge detect function Enabled.
     * |[7:4]   |WKPSEL0   |GPD Pin 0 Wake-up I/O Pin Select
     * |        |          |0000 = GPD.0 as Wake-up I/O function select.
     * |        |          |0001 = GPD.1 as Wake-up I/O function select.
     * |        |          |0010 = GPD.2 as Wake-up I/O function select.
     * |        |          |0011 = GPD.3 as Wake-up I/O function select.
     * |        |          |0100 = GPD.4 as Wake-up I/O function select.
     * |        |          |0101 = GPD.5 as Wake-up I/O function select.
     * |        |          |0110 = GPD.6 as Wake-up I/O function select.
     * |        |          |0111 = GPD.7 as Wake-up I/O function select.
     * |        |          |1000 = GPD.8 as Wake-up I/O function select.
     * |        |          |1001 = GPD.9 as Wake-up I/O function select.
     * |        |          |1010 = GPD.10 as Wake-up I/O function select.
     * |        |          |1011 = GPD.11 as Wake-up I/O function select.
     * |        |          |1100 = GPD.12 as Wake-up I/O function select.
     * |        |          |1101 = GPD.13 as Wake-up I/O function select.
     * |        |          |1110 = GPD.14 as Wake-up I/O function select.
     * |        |          |1111 = GPD.15 as Wake-up I/O function select.
     * |[8]     |DBEN0     |GPD Pin 0 Input Signal De-bounce Enable Bit
     * |        |          |This bit is used to enable the de-bounce function for each corresponding I/O.
     * |        |          |If the input signal pulse width cannot be sampled by continuous two de-bounce sample cycle, the input signal transition is seen as the signal bounce and will not trigger the wake-up.
     * |        |          |The de-bounce clock source is LIRC/3.
     * |        |          |The de-bounce function is valid only for edge triggered.
     * |        |          |0 = GPD group pin 0 Wake-up I/O pin De-bounce function Disabled.
     * |        |          |1 = GPD group pin 0 Wake-up I/O pin De-bounce function Enabled.
     * |[11]    |NMR0      |GPD Pin 0 Function Enable at Normal Run Mode Select
     * |        |          |0 = GPD group pin 0 wake-up function enable when chip enters power down.
     * |        |          |1 = GPD group pin 0 wake-up function enable when chip is normal run.
     * |        |          |Note: Enable this bit and the I/O wake-up function is enabled immediately.
     * |[16]    |WKEN1     |GPD Pin 1 Wake-up I/O Enable Bit
     * |        |          |0 = GPD group pin 0 Wake-up I/O function Disabled.
     * |        |          |1 = GPD group pin 0 Wake-up I/O function Enabled.
     * |[17]    |PRWKEN1   |GPD Pin 1 Rising Edge Detect Enable Bit
     * |        |          |0 = GPD group pin 1 rising edge detect function Disabled.
     * |        |          |1 = GPD group pin 1 rising edge detect function Enabled.
     * |[18]    |PFWKEN1   |GPD Pin 1 Falling Edge Detect Enable Bit
     * |        |          |0 = GPD group pin 1 falling edge detect function Disabled.
     * |        |          |1 = GPD group pin 1 falling edge detect function Enabled.
     * |[23:20] |WKPSEL1   |GPD Pin 1 Wake-up I/O Pin Select
     * |        |          |0000 = GPD.0 as Wake-up I/O function select.
     * |        |          |0001 = GPD.1 as Wake-up I/O function select.
     * |        |          |0010 = GPD.2 as Wake-up I/O function select.
     * |        |          |0011 = GPD.3 as Wake-up I/O function select.
     * |        |          |0100 = GPD.4 as Wake-up I/O function select.
     * |        |          |0101 = GPD.5 as Wake-up I/O function select.
     * |        |          |0110 = GPD.6 as Wake-up I/O function select.
     * |        |          |0111 = GPD.7 as Wake-up I/O function select.
     * |        |          |1000 = GPD.8 as Wake-up I/O function select.
     * |        |          |1001 = GPD.9 as Wake-up I/O function select.
     * |        |          |1010 = GPD.10 as Wake-up I/O function select.
     * |        |          |1011 = GPD.11 as Wake-up I/O function select.
     * |        |          |1100 = GPD.12 as Wake-up I/O function select.
     * |        |          |1101 = GPD.13 as Wake-up I/O function select.
     * |        |          |1110 = GPD.14 as Wake-up I/O function select.
     * |        |          |1111 = GPD.15 as Wake-up I/O function select.
     * |[24]    |DBEN1     |GPD Pin 1 Input Signal De-bounce Enable Bit
     * |        |          |This bit is used to enable the de-bounce function for each corresponding I/O.
     * |        |          |If the input signal pulse width cannot be sampled by continuous two de-bounce sample cycle, the input signal transition is seen as the signal bounce and will not trigger the wake-up.
     * |        |          |The de-bounce clock source is LIRC/3.
     * |        |          |The de-bounce function is valid only for edge triggered.
     * |        |          |0 = GPD group pin 1 Wake-up I/O pin De-bounce function Disabled.
     * |        |          |1 = GPD group pin 1 Wake-up I/O pin De-bounce function Enabled.
     * |[27]    |NMR1      |GPD Pin 1 Function Enable at Normal Run Mode Select
     * |        |          |0 = GPD group pin 1 wake-up function enable when chip enters power down.
     * |        |          |1 = GPD group pin 1 wake-up function enable when chip is normal run.
     * |        |          |Note: Enable this bit and the I/O wake-up function is enabled immediately.
     * @var CLK_T::IOPDCTL
     * Offset: 0xB0  GPIO Standby Power-down Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |IOHR      |GPIO Hold Release
     * |        |          |When GPIO enters deep power-down mode or standby power-down mode, all I/O status are hold to keep normal operating status.
     * |        |          |After chip is woken up from deep power-down mode or standby power-down mode, the I/O are still keep hold status until user set this bit to release I/O hold status.
     * |        |          |Note: This bit is auto cleared by hardware.
     * @var CLK_T::PMUINTC
     * Offset: 0xC0  Power Manager Interrupt Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |WKTMRIE   |Wake-up Timer Interrupt Enable Bit
     * |        |          |0 = Wake-up Timer interrupt function Disabled.
     * |        |          |1 = Wake-up Timer interrupt function Enabled.
     * |[8]     |WKIOA0IE  |Wake-up I/O GPA group Pin 0 Interrupt Enable Bit
     * |        |          |0 = Wake-up I/O interrupt function Disabled.
     * |        |          |1 = Wake-up I/O interrupt function Enabled.
     * |[9]     |WKIOB0IE  |Wake-up I/O GPB group Pin 0 Interrupt Enable Bit
     * |        |          |0 = Wake-up I/O interrupt function Disabled.
     * |        |          |1 = Wake-up I/O interrupt function Enabled.
     * |[10]    |WKIOC0IE  |Wake-upI/O GPC group Pin 0 Interrupt Enable Bit
     * |        |          |0 = Wake-up I/O interrupt function Disabled.
     * |        |          |1 = Wake-up I/O interrupt function Enabled.
     * |[11]    |WKIOD0IE  |Wake-up I/O GPD group Pin 0 Interrupt Enable Bit
     * |        |          |0 = Wake-up I/O interrupt function Disabled.
     * |        |          |1 = Wake-up I/O interrupt function Enabled.
     * |[12]    |WKIOA1IE  |Wake-up I/O GPA group Pin 1 Interrupt Enable Bit
     * |        |          |0 = Wake-up I/O interrupt function Disabled.
     * |        |          |1 = Wake-up I/O interrupt function Enabled.
     * |[13]    |WKIOB1IE  |Wake-up I/O GPB group Pin 1 Interrupt Enable Bit
     * |        |          |0 = Wake-up I/O interrupt function Disabled.
     * |        |          |1 = Wake-up I/O interrupt function Enabled.
     * |[14]    |WKIOC1IE  |Wake-up I/O GPC group Pin 1 Interrupt Enable Bit
     * |        |          |0 = Wake-up I/O interrupt function Disabled.
     * |        |          |1 = Wake-up I/O interrupt function Enabled.
     * |[15]    |WKIOD1IE  |Wake-up I/O GPD group Pin 1 Interrupt Enable Bit
     * |        |          |0 = Wake-up I/O interrupt function Disabled.
     * |        |          |1 = Wake-up I/O interrupt function Enabled.
     * @var CLK_T::PMUINTS
     * Offset: 0xC4  Power Manager Interrupt Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |WKTMRIF   |Wake-up Timer Interrupt Flag
     * |        |          |This flag indicates that Wake-up Timer interrupt happened.
     * |        |          |Flag is set by hardware while Wake-up Timer event happen when WKTMRIE(CLK_PMUINTC[0])=1.
     * |        |          |Note: Software can clear this bit by writing 1 to it.
     * |[8]     |WKIOA0IF  |Wake-up I/O GPA group Pin 0 Interrupt Flag
     * |        |          |This flag indicates that Wake-upI/O interrupt happened.
     * |        |          |Flag is set by hardware while Wake-up I/O event happen when WKIOA0IE(CLK_PMUINTC[8])=1.
     * |        |          |Note: Software can clear this bit by writing 1 to it.
     * |[9]     |WKIOB0IF  |Wake-up I/O GPB group Pin 0 Interrupt Flag
     * |        |          |This flag indicates that Wake-up I/O interrupt happened.
     * |        |          |Flag is set by hardware while Wake-up I/O event happen when WKIOB0IE(CLK_PMUINTC[9])=1.
     * |        |          |Note: Software can clear this bit by writing 1 to it.
     * |[10]    |WKIOC0IF  |Wake-up I/O GPC group Pin 0 Interrupt Flag
     * |        |          |This flag indicates that Wake-up I/O interrupt happened.
     * |        |          |Flag is set by hardware while Wake-up I/O event happen when WKIOC0IE(CLK_PMUINTC[10])=1.
     * |        |          |Note: Software can clear this bit by writing 1 to it.
     * |[11]    |WKIOD0IF  |Wake-up I/O GPD group Pin 0 Interrupt Flag
     * |        |          |This flag indicates that Wake-up I/O interrupt happened.
     * |        |          |Flag is set by hardware while Wake-up I/O event happen when WKIOD0IE (CLK_PMUINTC[11])=1.
     * |        |          |Note: Software can clear this bit by writing 1 to it.
     * |[12]    |WKIOA1IF  |Wake-up I/O GPA group Pin 1 Interrupt Flag
     * |        |          |This flag indicates that Wake-up I/O interrupt happened.
     * |        |          |Flag is set by hardware while Wake-up I/O event happen when WKIOA1IE(CLK_PMUINTC[12])=1.
     * |        |          |Note: Software can clear this bit by writing 1 to it.
     * |[13]    |WKIOB1IF  |Wake-up I/O GPB group Pin 1 Interrupt Flag
     * |        |          |This flag indicates that Wake-up I/O interrupt happened.
     * |        |          |Flag is set by hardware while Wake-up- /O event happen when WKIOB1IE(CLK_PMUINTC[13])=1.
     * |        |          |Note: Software can clear this bit by writing 1 to it.
     * |[14]    |WKIOC1IF  |Wake-up I/O GPC group Pin 1 Interrupt Flag
     * |        |          |This flag indicates that Wake-up I/O interrupt happened.
     * |        |          |Flag is set by hardware while Wake-up I/O event happen when WKIOC1IE(CLK_PMUINTC[14])=1.
     * |        |          |Note: Software can clear this bit by writing 1 to it.
     * |[15]    |WKIOD1IF  |Wake-up I/O GPD group Pin 1 Interrupt Flag
     * |        |          |This flag indicates that Wake-up I/O interrupt happened.
     * |        |          |Flag is set by hardware while Wake-up I/O event happen when WKIOD1IE(CLK_PMUINTC[15])=1.
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
    __IO uint32_t CLKDIV1;               /*!< [0x0024] Clock Divider Number Register 1                                  */
    __I  uint32_t RESERVE0[3];
    __IO uint32_t PCLKDIV;               /*!< [0x0034] APB Clock Divider Register                                       */
    __IO uint32_t APBCLK2;               /*!< [0x0038] APB Devices Clock Enable Control Register 2                      */
    __I  uint32_t RESERVE1[1];
    __IO uint32_t PLLCTL;                /*!< [0x0040] PLL Control Register                                             */
    __I  uint32_t RESERVE2[3];
    __I  uint32_t STATUS;                /*!< [0x0050] Clock Status Monitor Register                                    */
    __I  uint32_t RESERVE3[3];
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
    __I  uint32_t RESERVE6[1];
    __IO uint32_t PWDBCTL;               /*!< [0x009c] GPIO Pin WKIO De-bounce Control Register                         */
    __IO uint32_t PAPWCTL;               /*!< [0x00a0] GPA Pin WKIO Control Register                                    */
    __IO uint32_t PBPWCTL;               /*!< [0x00a4] GPB Pin WKIO Control Register                                    */
    __IO uint32_t PCPWCTL;               /*!< [0x00a8] GPC Pin WKIO Control Register                                    */
    __IO uint32_t PDPWCTL;               /*!< [0x00ac] GPD Pin WKIO Control Register                                    */
    __IO uint32_t IOPDCTL;               /*!< [0x00b0] GPIO Standby Power-down Control Register                         */
    __I  uint32_t RESERVE7[3];
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

#define CLK_PWRCTL_PDWKDLY_Pos           (4)                                               /*!< CLK_T::PWRCTL: PDWKDLY Position        */
#define CLK_PWRCTL_PDWKDLY_Msk           (0x1ul << CLK_PWRCTL_PDWKDLY_Pos)                 /*!< CLK_T::PWRCTL: PDWKDLY Mask            */

#define CLK_PWRCTL_PDWKIEN_Pos           (5)                                               /*!< CLK_T::PWRCTL: PDWKIEN Position        */
#define CLK_PWRCTL_PDWKIEN_Msk           (0x1ul << CLK_PWRCTL_PDWKIEN_Pos)                 /*!< CLK_T::PWRCTL: PDWKIEN Mask            */

#define CLK_PWRCTL_PDWKIF_Pos            (6)                                               /*!< CLK_T::PWRCTL: PDWKIF Position         */
#define CLK_PWRCTL_PDWKIF_Msk            (0x1ul << CLK_PWRCTL_PDWKIF_Pos)                  /*!< CLK_T::PWRCTL: PDWKIF Mask             */

#define CLK_PWRCTL_PDEN_Pos              (7)                                               /*!< CLK_T::PWRCTL: PDEN Position           */
#define CLK_PWRCTL_PDEN_Msk              (0x1ul << CLK_PWRCTL_PDEN_Pos)                    /*!< CLK_T::PWRCTL: PDEN Mask               */

#define CLK_PWRCTL_HXTSELTYP_Pos         (12)                                              /*!< CLK_T::PWRCTL: HXTSELTYP Position      */
#define CLK_PWRCTL_HXTSELTYP_Msk         (0x1ul << CLK_PWRCTL_HXTSELTYP_Pos)               /*!< CLK_T::PWRCTL: HXTSELTYP Mask          */

#define CLK_PWRCTL_HIRCSTBS_Pos          (16)                                              /*!< CLK_T::PWRCTL: HIRCSTBS Position       */
#define CLK_PWRCTL_HIRCSTBS_Msk          (0x3ul << CLK_PWRCTL_HIRCSTBS_Pos)                /*!< CLK_T::PWRCTL: HIRCSTBS Mask           */

#define CLK_PWRCTL_HXTGAIN_Pos           (20)                                              /*!< CLK_T::PWRCTL: HXTGAIN Position        */
#define CLK_PWRCTL_HXTGAIN_Msk           (0x7ul << CLK_PWRCTL_HXTGAIN_Pos)                 /*!< CLK_T::PWRCTL: HXTGAIN Mask            */

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

#define CLK_AHBCLK0_SDH0CKEN_Pos         (6)                                               /*!< CLK_T::AHBCLK0: SDH0CKEN Position      */
#define CLK_AHBCLK0_SDH0CKEN_Msk         (0x1ul << CLK_AHBCLK0_SDH0CKEN_Pos)               /*!< CLK_T::AHBCLK0: SDH0CKEN Mask          */

#define CLK_AHBCLK0_CRCCKEN_Pos          (7)                                               /*!< CLK_T::AHBCLK0: CRCCKEN Position       */
#define CLK_AHBCLK0_CRCCKEN_Msk          (0x1ul << CLK_AHBCLK0_CRCCKEN_Pos)                /*!< CLK_T::AHBCLK0: CRCCKEN Mask           */

#define CLK_AHBCLK0_CANFD0CKEN_Pos       (8)                                               /*!< CLK_T::AHBCLK0: CANFD0CKEN Position    */
#define CLK_AHBCLK0_CANFD0CKEN_Msk       (0x1ul << CLK_AHBCLK0_CANFD0CKEN_Pos)             /*!< CLK_T::AHBCLK0: CANFD0CKEN Mask        */

#define CLK_AHBCLK0_CANFD1CKEN_Pos       (9)                                               /*!< CLK_T::AHBCLK0: CANFD1CKEN Position    */
#define CLK_AHBCLK0_CANFD1CKEN_Msk       (0x1ul << CLK_AHBCLK0_CANFD1CKEN_Pos)             /*!< CLK_T::AHBCLK0: CANFD1CKEN Mask        */

#define CLK_AHBCLK0_HSUSBDCKEN_Pos       (10)                                              /*!< CLK_T::AHBCLK0: HSUSBDCKEN Position    */
#define CLK_AHBCLK0_HSUSBDCKEN_Msk       (0x1ul << CLK_AHBCLK0_HSUSBDCKEN_Pos)             /*!< CLK_T::AHBCLK0: HSUSBDCKEN Mask        */

#define CLK_AHBCLK0_PDCICKEN_Pos         (11)                                              /*!< CLK_T::AHBCLK0: PDCICKEN Position      */
#define CLK_AHBCLK0_PDCICKEN_Msk         (0x1ul << CLK_AHBCLK0_PDCICKEN_Pos)               /*!< CLK_T::AHBCLK0: PDCICKEN Mask          */

#define CLK_AHBCLK0_FMCIDLE_Pos          (15)                                              /*!< CLK_T::AHBCLK0: FMCIDLE Position       */
#define CLK_AHBCLK0_FMCIDLE_Msk          (0x1ul << CLK_AHBCLK0_FMCIDLE_Pos)                /*!< CLK_T::AHBCLK0: FMCIDLE Mask           */

#define CLK_AHBCLK0_USBHCKEN_Pos         (16)                                              /*!< CLK_T::AHBCLK0: USBHCKEN Position      */
#define CLK_AHBCLK0_USBHCKEN_Msk         (0x1ul << CLK_AHBCLK0_USBHCKEN_Pos)               /*!< CLK_T::AHBCLK0: USBHCKEN Mask          */

#define CLK_AHBCLK0_CANRAM0EN_Pos        (17)                                              /*!< CLK_T::AHBCLK0: CANRAM0EN Position     */
#define CLK_AHBCLK0_CANRAM0EN_Msk        (0x1ul << CLK_AHBCLK0_CANRAM0EN_Pos)              /*!< CLK_T::AHBCLK0: CANRAM0EN Mask         */

#define CLK_AHBCLK0_CANRAM1EN_Pos        (18)                                              /*!< CLK_T::AHBCLK0: CANRAM1EN Position     */
#define CLK_AHBCLK0_CANRAM1EN_Msk        (0x1ul << CLK_AHBCLK0_CANRAM1EN_Pos)              /*!< CLK_T::AHBCLK0: CANRAM1EN Mask         */

#define CLK_AHBCLK0_TRACECKEN_Pos        (19)                                              /*!< CLK_T::AHBCLK0: TRACECKEN Position     */
#define CLK_AHBCLK0_TRACECKEN_Msk        (0x1ul << CLK_AHBCLK0_TRACECKEN_Pos)              /*!< CLK_T::AHBCLK0: TRACECKEN Mask         */

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

#define CLK_APBCLK0_WDT0CKEN_Pos         (0)                                               /*!< CLK_T::APBCLK0: WDT0CKEN Position      */
#define CLK_APBCLK0_WDT0CKEN_Msk         (0x1ul << CLK_APBCLK0_WDT0CKEN_Pos)               /*!< CLK_T::APBCLK0: WDT0CKEN Mask          */

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

#define CLK_APBCLK0_I3C0CKEN_Pos         (11)                                              /*!< CLK_T::APBCLK0: I3C0CKEN Position      */
#define CLK_APBCLK0_I3C0CKEN_Msk         (0x1ul << CLK_APBCLK0_I3C0CKEN_Pos)               /*!< CLK_T::APBCLK0: I3C0CKEN Mask          */

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

#define CLK_APBCLK0_WWDT0CKEN_Pos        (24)                                              /*!< CLK_T::APBCLK0: WWDT0CKEN Position     */
#define CLK_APBCLK0_WWDT0CKEN_Msk        (0x1ul << CLK_APBCLK0_WWDT0CKEN_Pos)              /*!< CLK_T::APBCLK0: WWDT0CKEN Mask         */

#define CLK_APBCLK0_WWDT1CKEN_Pos        (25)                                              /*!< CLK_T::APBCLK0: WWDT1CKEN Position     */
#define CLK_APBCLK0_WWDT1CKEN_Msk        (0x1ul << CLK_APBCLK0_WWDT1CKEN_Pos)              /*!< CLK_T::APBCLK0: WWDT1CKEN Mask         */

#define CLK_APBCLK0_EADC0CKEN_Pos        (28)                                              /*!< CLK_T::APBCLK0: EADC0CKEN Position     */
#define CLK_APBCLK0_EADC0CKEN_Msk        (0x1ul << CLK_APBCLK0_EADC0CKEN_Pos)              /*!< CLK_T::APBCLK0: EADC0CKEN Mask         */

#define CLK_APBCLK0_I2S0CKEN_Pos         (29)                                              /*!< CLK_T::APBCLK0: I2S0CKEN Position      */
#define CLK_APBCLK0_I2S0CKEN_Msk         (0x1ul << CLK_APBCLK0_I2S0CKEN_Pos)               /*!< CLK_T::APBCLK0: I2S0CKEN Mask          */

#define CLK_APBCLK0_HSOTGCKEN_Pos        (30)                                              /*!< CLK_T::APBCLK0: HSOTGCKEN Position     */
#define CLK_APBCLK0_HSOTGCKEN_Msk        (0x1ul << CLK_APBCLK0_HSOTGCKEN_Pos)              /*!< CLK_T::APBCLK0: HSOTGCKEN Mask         */

#define CLK_APBCLK0_WDT1CKEN_Pos         (31)                                              /*!< CLK_T::APBCLK0: WDT1CKEN Position      */
#define CLK_APBCLK0_WDT1CKEN_Msk         (0x1ul << CLK_APBCLK0_WDT1CKEN_Pos)               /*!< CLK_T::APBCLK0: WDT1CKEN Mask          */

#define CLK_APBCLK1_USCI0CKEN_Pos        (8)                                               /*!< CLK_T::APBCLK1: USCI0CKEN Position     */
#define CLK_APBCLK1_USCI0CKEN_Msk        (0x1ul << CLK_APBCLK1_USCI0CKEN_Pos)              /*!< CLK_T::APBCLK1: USCI0CKEN Mask         */

#define CLK_APBCLK1_USCI1CKEN_Pos        (9)                                               /*!< CLK_T::APBCLK1: USCI1CKEN Position     */
#define CLK_APBCLK1_USCI1CKEN_Msk        (0x1ul << CLK_APBCLK1_USCI1CKEN_Pos)              /*!< CLK_T::APBCLK1: USCI1CKEN Mask         */

#define CLK_APBCLK1_EPWM0CKEN_Pos        (16)                                              /*!< CLK_T::APBCLK1: EPWM0CKEN Position     */
#define CLK_APBCLK1_EPWM0CKEN_Msk        (0x1ul << CLK_APBCLK1_EPWM0CKEN_Pos)              /*!< CLK_T::APBCLK1: EPWM0CKEN Mask         */

#define CLK_APBCLK1_EPWM1CKEN_Pos        (17)                                              /*!< CLK_T::APBCLK1: EPWM1CKEN Position     */
#define CLK_APBCLK1_EPWM1CKEN_Msk        (0x1ul << CLK_APBCLK1_EPWM1CKEN_Pos)              /*!< CLK_T::APBCLK1: EPWM1CKEN Mask         */

#define CLK_APBCLK1_BPWM0CKEN_Pos        (18)                                              /*!< CLK_T::APBCLK1: BPWM0CKEN Position     */
#define CLK_APBCLK1_BPWM0CKEN_Msk        (0x1ul << CLK_APBCLK1_BPWM0CKEN_Pos)              /*!< CLK_T::APBCLK1: BPWM0CKEN Mask         */

#define CLK_APBCLK1_BPWM1CKEN_Pos        (19)                                              /*!< CLK_T::APBCLK1: BPWM1CKEN Position     */
#define CLK_APBCLK1_BPWM1CKEN_Msk        (0x1ul << CLK_APBCLK1_BPWM1CKEN_Pos)              /*!< CLK_T::APBCLK1: BPWM1CKEN Mask         */

#define CLK_APBCLK1_EQEI0CKEN_Pos        (20)                                              /*!< CLK_T::APBCLK1: EQEI0CKEN Position     */
#define CLK_APBCLK1_EQEI0CKEN_Msk        (0x1ul << CLK_APBCLK1_EQEI0CKEN_Pos)              /*!< CLK_T::APBCLK1: EQEI0CKEN Mask         */

#define CLK_APBCLK1_ECAP0CKEN_Pos        (26)                                              /*!< CLK_T::APBCLK1: ECAP0CKEN Position     */
#define CLK_APBCLK1_ECAP0CKEN_Msk        (0x1ul << CLK_APBCLK1_ECAP0CKEN_Pos)              /*!< CLK_T::APBCLK1: ECAP0CKEN Mask         */

#define CLK_APBCLK1_BPWM2CKEN_Pos        (28)                                              /*!< CLK_T::APBCLK1: BPWM2CKEN Position     */
#define CLK_APBCLK1_BPWM2CKEN_Msk        (0x1ul << CLK_APBCLK1_BPWM2CKEN_Pos)              /*!< CLK_T::APBCLK1: BPWM2CKEN Mask         */

#define CLK_APBCLK1_BPWM3CKEN_Pos        (29)                                              /*!< CLK_T::APBCLK1: BPWM3CKEN Position     */
#define CLK_APBCLK1_BPWM3CKEN_Msk        (0x1ul << CLK_APBCLK1_BPWM3CKEN_Pos)              /*!< CLK_T::APBCLK1: BPWM3CKEN Mask         */

#define CLK_APBCLK1_BPWM4CKEN_Pos        (30)                                              /*!< CLK_T::APBCLK1: BPWM4CKEN Position     */
#define CLK_APBCLK1_BPWM4CKEN_Msk        (0x1ul << CLK_APBCLK1_BPWM4CKEN_Pos)              /*!< CLK_T::APBCLK1: BPWM4CKEN Mask         */

#define CLK_APBCLK1_BPWM5CKEN_Pos        (31)                                              /*!< CLK_T::APBCLK1: BPWM5CKEN Position     */
#define CLK_APBCLK1_BPWM5CKEN_Msk        (0x1ul << CLK_APBCLK1_BPWM5CKEN_Pos)              /*!< CLK_T::APBCLK1: BPWM5CKEN Mask         */

#define CLK_CLKSEL0_HCLKSEL_Pos          (0)                                               /*!< CLK_T::CLKSEL0: HCLKSEL Position       */
#define CLK_CLKSEL0_HCLKSEL_Msk          (0x7ul << CLK_CLKSEL0_HCLKSEL_Pos)                /*!< CLK_T::CLKSEL0: HCLKSEL Mask           */

#define CLK_CLKSEL0_STCLKSEL_Pos         (3)                                               /*!< CLK_T::CLKSEL0: STCLKSEL Position      */
#define CLK_CLKSEL0_STCLKSEL_Msk         (0x7ul << CLK_CLKSEL0_STCLKSEL_Pos)               /*!< CLK_T::CLKSEL0: STCLKSEL Mask          */

#define CLK_CLKSEL0_EADC0SEL_Pos         (10)                                              /*!< CLK_T::CLKSEL0: EADC0SEL Position      */
#define CLK_CLKSEL0_EADC0SEL_Msk         (0x1ul << CLK_CLKSEL0_EADC0SEL_Pos)               /*!< CLK_T::CLKSEL0: EADC0SEL Mask          */

#define CLK_CLKSEL0_SDH0SEL_Pos          (20)                                              /*!< CLK_T::CLKSEL0: SDH0SEL Position       */
#define CLK_CLKSEL0_SDH0SEL_Msk          (0x3ul << CLK_CLKSEL0_SDH0SEL_Pos)                /*!< CLK_T::CLKSEL0: SDH0SEL Mask           */

#define CLK_CLKSEL0_CANFD0SEL_Pos        (24)                                              /*!< CLK_T::CLKSEL0: CANFD0SEL Position     */
#define CLK_CLKSEL0_CANFD0SEL_Msk        (0x3ul << CLK_CLKSEL0_CANFD0SEL_Pos)              /*!< CLK_T::CLKSEL0: CANFD0SEL Mask         */

#define CLK_CLKSEL0_CANFD1SEL_Pos        (26)                                              /*!< CLK_T::CLKSEL0: CANFD1SEL Position     */
#define CLK_CLKSEL0_CANFD1SEL_Msk        (0x3ul << CLK_CLKSEL0_CANFD1SEL_Pos)              /*!< CLK_T::CLKSEL0: CANFD1SEL Mask         */

#define CLK_CLKSEL1_WDT0SEL_Pos          (0)                                               /*!< CLK_T::CLKSEL1: WDT0SEL Position       */
#define CLK_CLKSEL1_WDT0SEL_Msk          (0x3ul << CLK_CLKSEL1_WDT0SEL_Pos)                /*!< CLK_T::CLKSEL1: WDT0SEL Mask           */

#define CLK_CLKSEL1_WDT1SEL_Pos          (2)                                               /*!< CLK_T::CLKSEL1: WDT1SEL Position       */
#define CLK_CLKSEL1_WDT1SEL_Msk          (0x3ul << CLK_CLKSEL1_WDT1SEL_Pos)                /*!< CLK_T::CLKSEL1: WDT1SEL Mask           */

#define CLK_CLKSEL1_CLKOSEL_Pos          (4)                                               /*!< CLK_T::CLKSEL1: CLKOSEL Position       */
#define CLK_CLKSEL1_CLKOSEL_Msk          (0x7ul << CLK_CLKSEL1_CLKOSEL_Pos)                /*!< CLK_T::CLKSEL1: CLKOSEL Mask           */

#define CLK_CLKSEL1_TMR0SEL_Pos          (8)                                               /*!< CLK_T::CLKSEL1: TMR0SEL Position       */
#define CLK_CLKSEL1_TMR0SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR0SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR0SEL Mask           */

#define CLK_CLKSEL1_TMR1SEL_Pos          (12)                                              /*!< CLK_T::CLKSEL1: TMR1SEL Position       */
#define CLK_CLKSEL1_TMR1SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR1SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR1SEL Mask           */

#define CLK_CLKSEL1_TMR2SEL_Pos          (16)                                              /*!< CLK_T::CLKSEL1: TMR2SEL Position       */
#define CLK_CLKSEL1_TMR2SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR2SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR2SEL Mask           */

#define CLK_CLKSEL1_TMR3SEL_Pos          (20)                                              /*!< CLK_T::CLKSEL1: TMR3SEL Position       */
#define CLK_CLKSEL1_TMR3SEL_Msk          (0x7ul << CLK_CLKSEL1_TMR3SEL_Pos)                /*!< CLK_T::CLKSEL1: TMR3SEL Mask           */

#define CLK_CLKSEL1_UART0SEL_Pos         (24)                                              /*!< CLK_T::CLKSEL1: UART0SEL Position      */
#define CLK_CLKSEL1_UART0SEL_Msk         (0x3ul << CLK_CLKSEL1_UART0SEL_Pos)               /*!< CLK_T::CLKSEL1: UART0SEL Mask          */

#define CLK_CLKSEL1_UART1SEL_Pos         (26)                                              /*!< CLK_T::CLKSEL1: UART1SEL Position      */
#define CLK_CLKSEL1_UART1SEL_Msk         (0x3ul << CLK_CLKSEL1_UART1SEL_Pos)               /*!< CLK_T::CLKSEL1: UART1SEL Mask          */

#define CLK_CLKSEL1_WWDT0SEL_Pos         (28)                                              /*!< CLK_T::CLKSEL1: WWDT0SEL Position      */
#define CLK_CLKSEL1_WWDT0SEL_Msk         (0x3ul << CLK_CLKSEL1_WWDT0SEL_Pos)               /*!< CLK_T::CLKSEL1: WWDT0SEL Mask          */

#define CLK_CLKSEL1_WWDT1SEL_Pos         (30)                                              /*!< CLK_T::CLKSEL1: WWDT1SEL Position      */
#define CLK_CLKSEL1_WWDT1SEL_Msk         (0x3ul << CLK_CLKSEL1_WWDT1SEL_Pos)               /*!< CLK_T::CLKSEL1: WWDT1SEL Mask          */

#define CLK_CLKSEL2_EPWM0SEL_Pos         (0)                                               /*!< CLK_T::CLKSEL2: EPWM0SEL Position      */
#define CLK_CLKSEL2_EPWM0SEL_Msk         (0x1ul << CLK_CLKSEL2_EPWM0SEL_Pos)               /*!< CLK_T::CLKSEL2: EPWM0SEL Mask          */

#define CLK_CLKSEL2_EPWM1SEL_Pos         (1)                                               /*!< CLK_T::CLKSEL2: EPWM1SEL Position      */
#define CLK_CLKSEL2_EPWM1SEL_Msk         (0x1ul << CLK_CLKSEL2_EPWM1SEL_Pos)               /*!< CLK_T::CLKSEL2: EPWM1SEL Mask          */

#define CLK_CLKSEL2_QSPI0SEL_Pos         (2)                                               /*!< CLK_T::CLKSEL2: QSPI0SEL Position      */
#define CLK_CLKSEL2_QSPI0SEL_Msk         (0x3ul << CLK_CLKSEL2_QSPI0SEL_Pos)               /*!< CLK_T::CLKSEL2: QSPI0SEL Mask          */

#define CLK_CLKSEL2_SPI0SEL_Pos          (4)                                               /*!< CLK_T::CLKSEL2: SPI0SEL Position       */
#define CLK_CLKSEL2_SPI0SEL_Msk          (0x3ul << CLK_CLKSEL2_SPI0SEL_Pos)                /*!< CLK_T::CLKSEL2: SPI0SEL Mask           */

#define CLK_CLKSEL2_SPI1SEL_Pos          (6)                                               /*!< CLK_T::CLKSEL2: SPI1SEL Position       */
#define CLK_CLKSEL2_SPI1SEL_Msk          (0x3ul << CLK_CLKSEL2_SPI1SEL_Pos)                /*!< CLK_T::CLKSEL2: SPI1SEL Mask           */

#define CLK_CLKSEL2_BPWM0SEL_Pos         (8)                                               /*!< CLK_T::CLKSEL2: BPWM0SEL Position      */
#define CLK_CLKSEL2_BPWM0SEL_Msk         (0x1ul << CLK_CLKSEL2_BPWM0SEL_Pos)               /*!< CLK_T::CLKSEL2: BPWM0SEL Mask          */

#define CLK_CLKSEL2_BPWM1SEL_Pos         (9)                                               /*!< CLK_T::CLKSEL2: BPWM1SEL Position      */
#define CLK_CLKSEL2_BPWM1SEL_Msk         (0x1ul << CLK_CLKSEL2_BPWM1SEL_Pos)               /*!< CLK_T::CLKSEL2: BPWM1SEL Mask          */

#define CLK_CLKSEL2_SPI2SEL_Pos          (12)                                              /*!< CLK_T::CLKSEL3: SPI2SEL Position       */
#define CLK_CLKSEL2_SPI2SEL_Msk          (0x3ul << CLK_CLKSEL2_SPI2SEL_Pos)                /*!< CLK_T::CLKSEL3: SPI2SEL Mask           */

#define CLK_CLKSEL2_BPWM2SEL_Pos         (16)                                              /*!< CLK_T::CLKSEL2: BPWM2SEL Position      */
#define CLK_CLKSEL2_BPWM2SEL_Msk         (0x1ul << CLK_CLKSEL2_BPWM2SEL_Pos)               /*!< CLK_T::CLKSEL2: BPWM2SEL Mask          */

#define CLK_CLKSEL2_BPWM3SEL_Pos         (17)                                              /*!< CLK_T::CLKSEL2: BPWM3SEL Position      */
#define CLK_CLKSEL2_BPWM3SEL_Msk         (0x1ul << CLK_CLKSEL2_BPWM3SEL_Pos)               /*!< CLK_T::CLKSEL2: BPWM3SEL Mask          */

#define CLK_CLKSEL2_BPWM4SEL_Pos         (18)                                              /*!< CLK_T::CLKSEL2: BPWM4SEL Position      */
#define CLK_CLKSEL2_BPWM4SEL_Msk         (0x1ul << CLK_CLKSEL2_BPWM4SEL_Pos)               /*!< CLK_T::CLKSEL2: BPWM4SEL Mask          */

#define CLK_CLKSEL2_BPWM5SEL_Pos         (19)                                              /*!< CLK_T::CLKSEL2: BPWM5SEL Position      */
#define CLK_CLKSEL2_BPWM5SEL_Msk         (0x1ul << CLK_CLKSEL2_BPWM5SEL_Pos)               /*!< CLK_T::CLKSEL2: BPWM5SEL Mask          */

#define CLK_CLKSEL3_I2S0SEL_Pos          (16)                                              /*!< CLK_T::CLKSEL3: I2S0SEL Position       */
#define CLK_CLKSEL3_I2S0SEL_Msk          (0x3ul << CLK_CLKSEL3_I2S0SEL_Pos)                /*!< CLK_T::CLKSEL3: I2S0SEL Mask           */

#define CLK_CLKSEL3_I3C0SEL_Pos          (18)                                              /*!< CLK_T::CLKSEL3: I3C0SEL Position       */
#define CLK_CLKSEL3_I3C0SEL_Msk          (0x3ul << CLK_CLKSEL3_I3C0SEL_Pos)                /*!< CLK_T::CLKSEL3: I3C0SEL Mask           */

#define CLK_CLKSEL3_UART2SEL_Pos         (24)                                              /*!< CLK_T::CLKSEL3: UART2SEL Position      */
#define CLK_CLKSEL3_UART2SEL_Msk         (0x3ul << CLK_CLKSEL3_UART2SEL_Pos)               /*!< CLK_T::CLKSEL3: UART2SEL Mask          */

#define CLK_CLKSEL3_UART3SEL_Pos         (26)                                              /*!< CLK_T::CLKSEL3: UART3SEL Position      */
#define CLK_CLKSEL3_UART3SEL_Msk         (0x3ul << CLK_CLKSEL3_UART3SEL_Pos)               /*!< CLK_T::CLKSEL3: UART3SEL Mask          */

#define CLK_CLKSEL3_UART4SEL_Pos         (28)                                              /*!< CLK_T::CLKSEL3: UART4SEL Position      */
#define CLK_CLKSEL3_UART4SEL_Msk         (0x3ul << CLK_CLKSEL3_UART4SEL_Pos)               /*!< CLK_T::CLKSEL3: UART4SEL Mask          */

#define CLK_CLKDIV0_HCLKDIV_Pos          (0)                                               /*!< CLK_T::CLKDIV0: HCLKDIV Position       */
#define CLK_CLKDIV0_HCLKDIV_Msk          (0xful << CLK_CLKDIV0_HCLKDIV_Pos)                /*!< CLK_T::CLKDIV0: HCLKDIV Mask           */

#define CLK_CLKDIV0_UART0DIV_Pos         (8)                                               /*!< CLK_T::CLKDIV0: UART0DIV Position      */
#define CLK_CLKDIV0_UART0DIV_Msk         (0xful << CLK_CLKDIV0_UART0DIV_Pos)               /*!< CLK_T::CLKDIV0: UART0DIV Mask          */

#define CLK_CLKDIV0_UART1DIV_Pos         (12)                                              /*!< CLK_T::CLKDIV0: UART1DIV Position      */
#define CLK_CLKDIV0_UART1DIV_Msk         (0xful << CLK_CLKDIV0_UART1DIV_Pos)               /*!< CLK_T::CLKDIV0: UART1DIV Mask          */

#define CLK_CLKDIV0_EADC0DIV_Pos         (16)                                              /*!< CLK_T::CLKDIV0: EADC0DIV Position      */
#define CLK_CLKDIV0_EADC0DIV_Msk         (0xfful << CLK_CLKDIV0_EADC0DIV_Pos)              /*!< CLK_T::CLKDIV0: EADC0DIV Mask          */

#define CLK_CLKDIV0_SDH0DIV_Pos          (24)                                              /*!< CLK_T::CLKDIV0: SDH0DIV Position       */
#define CLK_CLKDIV0_SDH0DIV_Msk          (0xfful << CLK_CLKDIV0_SDH0DIV_Pos)               /*!< CLK_T::CLKDIV0: SDH0DIV Mask           */

#define CLK_CLKDIV1_UART2DIV_Pos         (0)                                               /*!< CLK_T::CLKDIV1: UART2DIV Position      */
#define CLK_CLKDIV1_UART2DIV_Msk         (0xful << CLK_CLKDIV1_UART2DIV_Pos)               /*!< CLK_T::CLKDIV1: UART2DIV Mask          */

#define CLK_CLKDIV1_UART3DIV_Pos         (4)                                               /*!< CLK_T::CLKDIV1: UART3DIV Position      */
#define CLK_CLKDIV1_UART3DIV_Msk         (0xful << CLK_CLKDIV1_UART3DIV_Pos)               /*!< CLK_T::CLKDIV1: UART3DIV Mask          */

#define CLK_CLKDIV1_UART4DIV_Pos         (8)                                               /*!< CLK_T::CLKDIV1: UART4DIV Position      */
#define CLK_CLKDIV1_UART4DIV_Msk         (0xful << CLK_CLKDIV1_UART4DIV_Pos)               /*!< CLK_T::CLKDIV1: UART4DIV Mask          */

#define CLK_CLKDIV1_I2S0DIV_Pos          (12)                                              /*!< CLK_T::CLKDIV1: I2S0DIV Position       */
#define CLK_CLKDIV1_I2S0DIV_Msk          (0xful << CLK_CLKDIV1_I2S0DIV_Pos)                /*!< CLK_T::CLKDIV1: I2S0DIV Mask           */

#define CLK_CLKDIV1_CANFD0DIV_Pos        (16)                                              /*!< CLK_T::CLKDIV1: CANFD0DIV Position     */
#define CLK_CLKDIV1_CANFD0DIV_Msk        (0xful << CLK_CLKDIV1_CANFD0DIV_Pos)              /*!< CLK_T::CLKDIV1: CANFD0DIV Mask         */

#define CLK_CLKDIV1_CANFD1DIV_Pos        (20)                                              /*!< CLK_T::CLKDIV1: CANFD1DIV Position     */
#define CLK_CLKDIV1_CANFD1DIV_Msk        (0xful << CLK_CLKDIV1_CANFD1DIV_Pos)              /*!< CLK_T::CLKDIV1: CANFD1DIV Mask         */

#define CLK_PCLKDIV_APB0DIV_Pos          (0)                                               /*!< CLK_T::PCLKDIV: APB0DIV Position       */
#define CLK_PCLKDIV_APB0DIV_Msk          (0x7ul << CLK_PCLKDIV_APB0DIV_Pos)                /*!< CLK_T::PCLKDIV: APB0DIV Mask           */

#define CLK_PCLKDIV_APB1DIV_Pos          (4)                                               /*!< CLK_T::PCLKDIV: APB1DIV Position       */
#define CLK_PCLKDIV_APB1DIV_Msk          (0x7ul << CLK_PCLKDIV_APB1DIV_Pos)                /*!< CLK_T::PCLKDIV: APB1DIV Mask           */

#define CLK_APBCLK2_LLSI0CKEN_Pos        (0)                                               /*!< CLK_T::APBCLK2: LLSI0CKEN Position     */
#define CLK_APBCLK2_LLSI0CKEN_Msk        (0x1ul << CLK_APBCLK2_LLSI0CKEN_Pos)              /*!< CLK_T::APBCLK2: LLSI0CKEN Mask         */

#define CLK_APBCLK2_LLSI1CKEN_Pos        (1)                                               /*!< CLK_T::APBCLK2: LLSI1CKEN Position     */
#define CLK_APBCLK2_LLSI1CKEN_Msk        (0x1ul << CLK_APBCLK2_LLSI1CKEN_Pos)              /*!< CLK_T::APBCLK2: LLSI1CKEN Mask         */

#define CLK_APBCLK2_LLSI2CKEN_Pos        (2)                                               /*!< CLK_T::APBCLK2: LLSI2CKEN Position     */
#define CLK_APBCLK2_LLSI2CKEN_Msk        (0x1ul << CLK_APBCLK2_LLSI2CKEN_Pos)              /*!< CLK_T::APBCLK2: LLSI2CKEN Mask         */

#define CLK_APBCLK2_LLSI3CKEN_Pos        (3)                                               /*!< CLK_T::APBCLK2: LLSI3CKEN Position     */
#define CLK_APBCLK2_LLSI3CKEN_Msk        (0x1ul << CLK_APBCLK2_LLSI3CKEN_Pos)              /*!< CLK_T::APBCLK2: LLSI3CKEN Mask         */

#define CLK_APBCLK2_LLSI4CKEN_Pos        (4)                                               /*!< CLK_T::APBCLK2: LLSI4CKEN Position     */
#define CLK_APBCLK2_LLSI4CKEN_Msk        (0x1ul << CLK_APBCLK2_LLSI4CKEN_Pos)              /*!< CLK_T::APBCLK2: LLSI4CKEN Mask         */

#define CLK_APBCLK2_LLSI5CKEN_Pos        (5)                                               /*!< CLK_T::APBCLK2: LLSI5CKEN Position     */
#define CLK_APBCLK2_LLSI5CKEN_Msk        (0x1ul << CLK_APBCLK2_LLSI5CKEN_Pos)              /*!< CLK_T::APBCLK2: LLSI5CKEN Mask         */

#define CLK_APBCLK2_LLSI6CKEN_Pos        (6)                                               /*!< CLK_T::APBCLK2: LLSI6CKEN Position     */
#define CLK_APBCLK2_LLSI6CKEN_Msk        (0x1ul << CLK_APBCLK2_LLSI6CKEN_Pos)              /*!< CLK_T::APBCLK2: LLSI6CKEN Mask         */

#define CLK_APBCLK2_LLSI7CKEN_Pos        (7)                                               /*!< CLK_T::APBCLK2: LLSI7CKEN Position     */
#define CLK_APBCLK2_LLSI7CKEN_Msk        (0x1ul << CLK_APBCLK2_LLSI7CKEN_Pos)              /*!< CLK_T::APBCLK2: LLSI7CKEN Mask         */

#define CLK_APBCLK2_LLSI8CKEN_Pos        (8)                                               /*!< CLK_T::APBCLK2: LLSI8CKEN Position     */
#define CLK_APBCLK2_LLSI8CKEN_Msk        (0x1ul << CLK_APBCLK2_LLSI8CKEN_Pos)              /*!< CLK_T::APBCLK2: LLSI8CKEN Mask         */

#define CLK_APBCLK2_LLSI9CKEN_Pos        (9)                                               /*!< CLK_T::APBCLK2: LLSI9CKEN Position     */
#define CLK_APBCLK2_LLSI9CKEN_Msk        (0x1ul << CLK_APBCLK2_LLSI9CKEN_Pos)              /*!< CLK_T::APBCLK2: LLSI9CKEN Mask         */

#define CLK_APBCLK2_ELLSI0CKEN_Pos       (10)                                              /*!< CLK_T::APBCLK2: ELLSI0CKEN Position    */
#define CLK_APBCLK2_ELLSI0CKEN_Msk       (0x1ul << CLK_APBCLK2_ELLSI0CKEN_Pos)             /*!< CLK_T::APBCLK2: ELLSI0CKEN Mask        */

#define CLK_PLLCTL_FBDIV_Pos             (0)                                               /*!< CLK_T::PLLCTL: FBDIV Position          */
#define CLK_PLLCTL_FBDIV_Msk             (0x1fful << CLK_PLLCTL_FBDIV_Pos)                 /*!< CLK_T::PLLCTL: FBDIV Mask              */

#define CLK_PLLCTL_INDIV_Pos             (9)                                               /*!< CLK_T::PLLCTL: INDIV Position          */
#define CLK_PLLCTL_INDIV_Msk             (0x1ful << CLK_PLLCTL_INDIV_Pos)                  /*!< CLK_T::PLLCTL: INDIV Mask              */

#define CLK_PLLCTL_OUTDIV_Pos            (14)                                              /*!< CLK_T::PLLCTL: OUTDIV Position         */
#define CLK_PLLCTL_OUTDIV_Msk            (0x3ul << CLK_PLLCTL_OUTDIV_Pos)                  /*!< CLK_T::PLLCTL: OUTDIV Mask             */

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

#define CLK_STATUS_CLKSFAIL_Pos          (7)                                               /*!< CLK_T::STATUS: CLKSFAIL Position       */
#define CLK_STATUS_CLKSFAIL_Msk          (0x1ul << CLK_STATUS_CLKSFAIL_Pos)                /*!< CLK_T::STATUS: CLKSFAIL Mask           */

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

#define CLK_CLKDCTL_HXTFQASW_Pos         (18)                                              /*!< CLK_T::CLKDCTL: HXTFQASW Position      */
#define CLK_CLKDCTL_HXTFQASW_Msk         (0x1ul << CLK_CLKDCTL_HXTFQASW_Pos)               /*!< CLK_T::CLKDCTL: HXTFQASW Mask          */

#define CLK_CLKDSTS_HXTFIF_Pos           (0)                                               /*!< CLK_T::CLKDSTS: HXTFIF Position        */
#define CLK_CLKDSTS_HXTFIF_Msk           (0x1ul << CLK_CLKDSTS_HXTFIF_Pos)                 /*!< CLK_T::CLKDSTS: HXTFIF Mask            */

#define CLK_CLKDSTS_LXTFIF_Pos           (1)                                               /*!< CLK_T::CLKDSTS: LXTFIF Position        */
#define CLK_CLKDSTS_LXTFIF_Msk           (0x1ul << CLK_CLKDSTS_LXTFIF_Pos)                 /*!< CLK_T::CLKDSTS: LXTFIF Mask            */

#define CLK_CLKDSTS_HXTFQIF_Pos          (8)                                               /*!< CLK_T::CLKDSTS: HXTFQIF Position       */
#define CLK_CLKDSTS_HXTFQIF_Msk          (0x1ul << CLK_CLKDSTS_HXTFQIF_Pos)                /*!< CLK_T::CLKDSTS: HXTFQIF Mask           */

#define CLK_CDUPB_UPERBD_Pos             (0)                                               /*!< CLK_T::CDUPB: UPERBD Position          */
#define CLK_CDUPB_UPERBD_Msk             (0x3fful << CLK_CDUPB_UPERBD_Pos)                 /*!< CLK_T::CDUPB: UPERBD Mask              */

#define CLK_CDLOWB_LOWERBD_Pos           (0)                                               /*!< CLK_T::CDLOWB: LOWERBD Position        */
#define CLK_CDLOWB_LOWERBD_Msk           (0x3fful << CLK_CDLOWB_LOWERBD_Pos)               /*!< CLK_T::CDLOWB: LOWERBD Mask            */

#define CLK_STOPREQ_CANFD0STR_Pos        (0)                                               /*!< CLK_T::STOPREQ: CANFD0STR Position     */
#define CLK_STOPREQ_CANFD0STR_Msk        (0x1ul << CLK_STOPREQ_CANFD0STR_Pos)              /*!< CLK_T::STOPREQ: CANFD0STR Mask         */

#define CLK_STOPREQ_CANFD1STR_Pos        (1)                                               /*!< CLK_T::STOPREQ: CANFD1STR Position     */
#define CLK_STOPREQ_CANFD1STR_Msk        (0x1ul << CLK_STOPREQ_CANFD1STR_Pos)              /*!< CLK_T::STOPREQ: CANFD1STR Mask         */

#define CLK_STOPACK_CANFD0STA_Pos        (0)                                               /*!< CLK_T::STOPACK: CANFD0STA Position     */
#define CLK_STOPACK_CANFD0STA_Msk        (0x1ul << CLK_STOPACK_CANFD0STA_Pos)              /*!< CLK_T::STOPACK: CANFD0STA Mask         */

#define CLK_STOPACK_CANFD1STA_Pos        (1)                                               /*!< CLK_T::STOPACK: CANFD1STA Position     */
#define CLK_STOPACK_CANFD1STA_Msk        (0x1ul << CLK_STOPACK_CANFD1STA_Pos)              /*!< CLK_T::STOPACK: CANFD1STA Mask         */

#define CLK_PMUCTL_PDMSEL_Pos            (0)                                               /*!< CLK_T::PMUCTL: PDMSEL Position         */
#define CLK_PMUCTL_PDMSEL_Msk            (0x7ul << CLK_PMUCTL_PDMSEL_Pos)                  /*!< CLK_T::PMUCTL: PDMSEL Mask             */

#define CLK_PMUCTL_DPDHOLDEN_Pos         (3)                                               /*!< CLK_T::PMUCTL: DPDHOLDEN Position      */
#define CLK_PMUCTL_DPDHOLDEN_Msk         (0x1ul << CLK_PMUCTL_DPDHOLDEN_Pos)               /*!< CLK_T::PMUCTL: DPDHOLDEN Mask          */

#define CLK_PMUCTL_SRETSEL_Pos           (4)                                               /*!< CLK_T::PMUCTL: SRETSEL Position        */
#define CLK_PMUCTL_SRETSEL_Msk           (0x7ul << CLK_PMUCTL_SRETSEL_Pos)                 /*!< CLK_T::PMUCTL: SRETSEL Mask            */

#define CLK_PMUCTL_WKTMREN_Pos           (8)                                               /*!< CLK_T::PMUCTL: WKTMREN Position        */
#define CLK_PMUCTL_WKTMREN_Msk           (0x1ul << CLK_PMUCTL_WKTMREN_Pos)                 /*!< CLK_T::PMUCTL: WKTMREN Mask            */

#define CLK_PMUCTL_WKTMRIS_Pos           (9)                                               /*!< CLK_T::PMUCTL: WKTMRIS Position        */
#define CLK_PMUCTL_WKTMRIS_Msk           (0xful << CLK_PMUCTL_WKTMRIS_Pos)                 /*!< CLK_T::PMUCTL: WKTMRIS Mask            */

#define CLK_PMUCTL_WKTMRMOD_Pos          (13)                                              /*!< CLK_T::PMUCTL: WKTMRMOD Position       */
#define CLK_PMUCTL_WKTMRMOD_Msk          (0x1ul << CLK_PMUCTL_WKTMRMOD_Pos)                /*!< CLK_T::PMUCTL: WKTMRMOD Mask           */

#define CLK_PMUCTL_WKPINEN0_Pos          (16)                                              /*!< CLK_T::PMUCTL: WKPINEN0 Position       */
#define CLK_PMUCTL_WKPINEN0_Msk          (0x3ul << CLK_PMUCTL_WKPINEN0_Pos)                /*!< CLK_T::PMUCTL: WKPINEN0 Mask           */

#define CLK_PMUCTL_ACMPSPWK_Pos          (18)                                              /*!< CLK_T::PMUCTL: ACMPSPWK Position       */
#define CLK_PMUCTL_ACMPSPWK_Msk          (0x1ul << CLK_PMUCTL_ACMPSPWK_Pos)                /*!< CLK_T::PMUCTL: ACMPSPWK Mask           */

#define CLK_PMUCTL_VBUSWKEN_Pos          (22)                                              /*!< CLK_T::PMUCTL: VBUSWKEN Position       */
#define CLK_PMUCTL_VBUSWKEN_Msk          (0x1ul << CLK_PMUCTL_VBUSWKEN_Pos)                /*!< CLK_T::PMUCTL: VBUSWKEN Mask           */

#define CLK_PMUCTL_RTCWKEN_Pos           (23)                                              /*!< CLK_T::PMUCTL: RTCWKEN Position        */
#define CLK_PMUCTL_RTCWKEN_Msk           (0x1ul << CLK_PMUCTL_RTCWKEN_Pos)                 /*!< CLK_T::PMUCTL: RTCWKEN Mask            */

#define CLK_PMUCTL_WKPINEN1_Pos          (24)                                              /*!< CLK_T::PMUCTL: WKPINEN1 Position       */
#define CLK_PMUCTL_WKPINEN1_Msk          (0x3ul << CLK_PMUCTL_WKPINEN1_Pos)                /*!< CLK_T::PMUCTL: WKPINEN1 Mask           */

#define CLK_PMUCTL_WKPINEN2_Pos          (26)                                              /*!< CLK_T::PMUCTL: WKPINEN2 Position       */
#define CLK_PMUCTL_WKPINEN2_Msk          (0x3ul << CLK_PMUCTL_WKPINEN2_Pos)                /*!< CLK_T::PMUCTL: WKPINEN2 Mask           */

#define CLK_PMUCTL_WKPINEN3_Pos          (28)                                              /*!< CLK_T::PMUCTL: WKPINEN3 Position       */
#define CLK_PMUCTL_WKPINEN3_Msk          (0x3ul << CLK_PMUCTL_WKPINEN3_Pos)                /*!< CLK_T::PMUCTL: WKPINEN3 Mask           */

#define CLK_PMUCTL_WKPINEN4_Pos          (30)                                              /*!< CLK_T::PMUCTL: WKPINEN4 Position       */
#define CLK_PMUCTL_WKPINEN4_Msk          (0x3ul << CLK_PMUCTL_WKPINEN4_Pos)                /*!< CLK_T::PMUCTL: WKPINEN4 Mask           */

#define CLK_PMUSTS_PINWK0_Pos            (0)                                               /*!< CLK_T::PMUSTS: PINWK0 Position         */
#define CLK_PMUSTS_PINWK0_Msk            (0x1ul << CLK_PMUSTS_PINWK0_Pos)                  /*!< CLK_T::PMUSTS: PINWK0 Mask             */

#define CLK_PMUSTS_TMRWK_Pos             (1)                                               /*!< CLK_T::PMUSTS: TMRWK Position          */
#define CLK_PMUSTS_TMRWK_Msk             (0x1ul << CLK_PMUSTS_TMRWK_Pos)                   /*!< CLK_T::PMUSTS: TMRWK Mask              */

#define CLK_PMUSTS_RTCWK_Pos             (2)                                               /*!< CLK_T::PMUSTS: RTCWK Position          */
#define CLK_PMUSTS_RTCWK_Msk             (0x1ul << CLK_PMUSTS_RTCWK_Pos)                   /*!< CLK_T::PMUSTS: RTCWK Mask              */

#define CLK_PMUSTS_PINWK1_Pos            (3)                                               /*!< CLK_T::PMUSTS: PINWK1 Position         */
#define CLK_PMUSTS_PINWK1_Msk            (0x1ul << CLK_PMUSTS_PINWK1_Pos)                  /*!< CLK_T::PMUSTS: PINWK1 Mask             */

#define CLK_PMUSTS_PINWK2_Pos            (4)                                               /*!< CLK_T::PMUSTS: PINWK2 Position         */
#define CLK_PMUSTS_PINWK2_Msk            (0x1ul << CLK_PMUSTS_PINWK2_Pos)                  /*!< CLK_T::PMUSTS: PINWK2 Mask             */

#define CLK_PMUSTS_PINWK3_Pos            (5)                                               /*!< CLK_T::PMUSTS: PINWK3 Position         */
#define CLK_PMUSTS_PINWK3_Msk            (0x1ul << CLK_PMUSTS_PINWK3_Pos)                  /*!< CLK_T::PMUSTS: PINWK3 Mask             */

#define CLK_PMUSTS_PINWK4_Pos            (6)                                               /*!< CLK_T::PMUSTS: PINWK4 Position         */
#define CLK_PMUSTS_PINWK4_Msk            (0x1ul << CLK_PMUSTS_PINWK4_Pos)                  /*!< CLK_T::PMUSTS: PINWK4 Mask             */

#define CLK_PMUSTS_VBUSWK_Pos            (7)                                               /*!< CLK_T::PMUSTS: VBUSWK Position         */
#define CLK_PMUSTS_VBUSWK_Msk            (0x1ul << CLK_PMUSTS_VBUSWK_Pos)                  /*!< CLK_T::PMUSTS: VBUSWK Mask             */

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

#define CLK_PWDBCTL_WKDBCLKSEL_Pos       (0)                                               /*!< CLK_T::PWDBCTL: WKDBCLKSEL Position    */
#define CLK_PWDBCTL_WKDBCLKSEL_Msk       (0xful << CLK_PWDBCTL_WKDBCLKSEL_Pos)             /*!< CLK_T::PWDBCTL: WKDBCLKSEL Mask        */

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

#define CLK_PDPWCTL_NMR1_Pos             (27)                                              /*!< CLK_T::PDPWCTL: NMR1 Position          */
#define CLK_PDPWCTL_NMR1_Msk             (0x1ul << CLK_PDPWCTL_NMR0_Pos)                   /*!< CLK_T::PDPWCTL: NMR1 Mask              */

#define CLK_IOPDCTL_IOHR_Pos             (0)                                               /*!< CLK_T::IOPDCTL: IOHR Position          */
#define CLK_IOPDCTL_IOHR_Msk             (0x1ul << CLK_IOPDCTL_IOHR_Pos)                   /*!< CLK_T::IOPDCTL: IOHR Mask              */

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
