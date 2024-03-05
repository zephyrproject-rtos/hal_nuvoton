/**************************************************************************//**
 * @file     sys_reg.h
 * @version  V1.00
 * @brief    SYS register definition header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __SYS_REG_H__
#define __SYS_REG_H__

#if defined ( __CC_ARM   )
    #pragma anon_unions
#endif

/**
   @addtogroup REGISTER Control Register
   @{
*/

/**
    @addtogroup LPSCC Low Power System and Clock Controller (LPSCC)
    Memory Mapped Structure for LPSCC Controller
@{ */
#if 0
typedef struct
{


/**
 * @var LPSCC_T::IPRST0
 * Offset: 0x04  Peripheral Reset Control Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |LPPDMA0RST|LPPDMA0 Controller Reset
 * |        |          |0 = LPPDMA0 controller normal operation.
 * |        |          |1 = LPPDMA0 controller reset.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[1]     |LPGPIORST |LPGPIO Controller Reset
 * |        |          |0 = LPGPIO controller normal operation.
 * |        |          |1 = LPGPIO controller reset.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[2]     |LPSRAMRST |LPSRAM Controller Reset
 * |        |          |0 = LPSRAM controller normal operation.
 * |        |          |1 = LPSRAM controller reset.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[16]    |WDTRST    |WDT Controller Reset
 * |        |          |0 = WDT controller normal operation.
 * |        |          |1 = WDT controller reset.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[17]    |LPSPI0RST |LPSPI0 Controller Reset
 * |        |          |0 = LPSPI0 controller normal operation.
 * |        |          |1 = LPSPI0 controller reset.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[18]    |LPI2C0RST |LPI2C0 Controller Reset
 * |        |          |0 = LPI2C0 controller normal operation.
 * |        |          |1 = LPI2C0 controller reset.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[19]    |LPUART0RST|LPUART0 Controller Reset
 * |        |          |0 = LPUART0 controller normal operation.
 * |        |          |1 = LPUART0 controller reset.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[20]    |LPTMR0RST |LPTMR0 Controller Reset
 * |        |          |0 = LPTMR0 controller normal operation.
 * |        |          |1 = LPTMR0 controller reset.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[21]    |LPTMR1RST |LPTMR1 Controller Reset
 * |        |          |0 = LPTMR1 controller normal operation.
 * |        |          |1 = LPTMR1 controller reset.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[22]    |TTMR0RST  |TTMR0 Controller Reset
 * |        |          |0 = TTMR0 controller normal operation.
 * |        |          |1 = TTMR0 controller reset.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[23]    |TTMR1RST  |TTMR1 Controller Reset
 * |        |          |0 = TTMR1 controller normal operation.
 * |        |          |1 = TTMR1 controller reset.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[24]    |LPADC0RST |LPADC0 Controller Reset
 * |        |          |0 = LPADC0 controller normal operation.
 * |        |          |1 = LPADC0 controller reset.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[27]    |OPARST    |OP Amplifier Controller Reset
 * |        |          |0 = OPA controller normal operation.
 * |        |          |1 = OPA controller reset.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * @var LPSCC_T::CLKEN0
 * Offset: 0x40  Peripheral Clock Enable Control Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |LPPDMA0CKEN|LPPDMA0 Clock Enable Bit
 * |        |          |0 = LPPDMA0 clock Disabled.
 * |        |          |1 = LPPDMA0 clock Enabled.
 * |[1]     |LPGPIOCKEN|LPGPIO Clock Enable Bit
 * |        |          |0 = LPGPIO clock Disabled.
 * |        |          |1 = LPGPIO clock Enabled.
 * |[2]     |LPSRAMCKEN|LPSRAM Clock Enable Bit
 * |        |          |0 = LPSRAM clock Disabled.
 * |        |          |1 = LPSRAM clock Enabled.
 * |[16]    |WDTCKEN   |WDT Clock Enable Bit
 * |        |          |0 = WDT clock Disabled.
 * |        |          |1 = WDT clock Enabled.
 * |[17]    |LPSPI0CKEN|LPSPI0 Clock Enable Bit
 * |        |          |0 = LPSPI0 clock Disabled.
 * |        |          |1 = LPSPI0 clock Enabled.
 * |[18]    |LPI2C0CKEN|LPI2C0 Clock Enable Bit
 * |        |          |0 = LPI2C0 clock Disabled.
 * |        |          |1 = LPI2C0 clock Enabled.
 * |[19]    |LPUART0CKEN|LPUART0 Clock Enable Bit
 * |        |          |0 = LPUART0 clock Disabled.
 * |        |          |1 = LPUART0 clock Enabled.
 * |[20]    |LPTMR0CKEN|LPTMR0 Clock Enable Bit
 * |        |          |0 = LPTMR0 clock Disabled.
 * |        |          |1 = LPTMR0 clock Enabled.
 * |[21]    |LPTMR1CKEN|LPTMR1 Clock Enable Bit
 * |        |          |0 = LPTMR1 clock Disabled.
 * |        |          |1 = LPTMR1 clock Enabled.
 * |[22]    |TTMR0CKEN |TTMR0 Clock Enable Bit
 * |        |          |0 = TTMR0 clock Disabled.
 * |        |          |1 = TTMR0 clock Enabled.
 * |[23]    |TTMR1CKEN |TTMR1 Clock Enable Bit
 * |        |          |0 = TTMR1 clock Disabled.
 * |        |          |1 = TTMR1 clock Enabled.
 * |[24]    |LPADC0CKEN|LPADC0 Clock Enable Bit
 * |        |          |0 = LPADC0 clock Disabled.
 * |        |          |1 = LPADC0 clock Enabled.
 * |[27]    |OPACKEN   |OP Amplifier Clock Enable Bit
 * |        |          |0 = OPA clock Disabled.
 * |        |          |1 = OPA clock Enabled.
 * @var LPSCC_T::CLKKEEP0
 * Offset: 0x44  Peripheral Clock Keep Control Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |LPPDMA0KEEP|LPPDMA0 Clock Keep Bit
 * |        |          |0 = LPPDMA0 clock Disabled when enter NPD0~5/SPD0~2 mode.
 * |        |          |1 = LPPDMA0 clock Enabled when enter NPD0~5/SPD0~2 mode.
 * |[1]     |LPGPIOKEEP|LPGPIO Clock Keep Bit
 * |        |          |0 = LPGPIO clock Disabled when enter NPD0~5/SPD0~2 mode.
 * |        |          |1 = LPGPIO clock Enabled when enter NPD0~5/SPD0~2 mode.
 * |[2]     |LPSRAMKEEP|LPSRAM Clock Keep Bit
 * |        |          |0 = LPSRAM clock Disabled when enter NPD0~5/SPD0~2 mode.
 * |        |          |1 = LPSRAM clock Enabled when enter NPD0~5/SPD0~2 mode.
 * |[16]    |WDTKEEP   |WDT Clock Keep Bit
 * |        |          |0 = WDT clock Disabled when enter NPD0~5/SPD0~2 mode.
 * |        |          |1 = WDT clock Enabled when enter NPD0~5/SPD0~2 mode.
 * |[17]    |LPSPI0KEEP|LPSPI0 Clock Keep Bit
 * |        |          |0 = LPSPI0 clock Disabled when enter NPD0~5/SPD0~2 mode.
 * |        |          |1 = LPSPI0 clock Enabled when enter NPD0~5/SPD0~2 mode.
 * |[18]    |LPI2C0KEEP|LPI2C0 Clock Keep Bit
 * |        |          |0 = LPI2C0 clock Disabled when enter NPD0~5/SPD0~2 mode.
 * |        |          |1 = LPI2C0 clock Enabled when enter NPD0~5/SPD0~2 mode.
 * |[19]    |LPUART0KEEP|LPUART0 Clock Keep Bit
 * |        |          |0 = LPUART0 clock Disabled when enter NPD0~5/SPD0~2 mode.
 * |        |          |1 = LPUART0 clock Enabled when enter NPD0~5/SPD0~2 mode.
 * |[20]    |LPTMR0KEEP|LPTMR0 Clock Keep Bit
 * |        |          |0 = LPTMR0 clock Disabled when enter NPD0~5/SPD0~2 mode.
 * |        |          |1 = LPTMR0 clock Enabled when enter NPD0~5/SPD0~2 mode.
 * |[21]    |LPTMR1KEEP|LPTMR1 Clock Keep Bit
 * |        |          |0 = LPTMR1 clock Disabled when enter NPD0~5/SPD0~2 mode.
 * |        |          |1 = LPTMR1 clock Enabled when enter NPD0~5/SPD0~2 mode.
 * |[22]    |TTMR0KEEP |TTMR0 Clock Keep Bit
 * |        |          |0 = TTMR0 clock Disabled when enter NPD0~5/SPD0~2 mode.
 * |        |          |1 = TTMR0 clock Enabled when enter NPD0~5/SPD0~2 mode.
 * |[23]    |TTMR1KEEP |TTMR1 Clock Keep Bit
 * |        |          |0 = TTMR1 clock Disabled when enter NPD0~5/SPD0~2 mode.
 * |        |          |1 = TTMR1 clock Enabled when enter NPD0~5/SPD0~2 mode.
 * |[24]    |LPADC0KEEP|LPADC0 Clock Keep Bit
 * |        |          |0 = LPADC0 clock Disabled when enter NPD0~5/SPD0~2 mode.
 * |        |          |1 = LPADC0 clock Enabled when enter NPD0~5/SPD0~2 mode.
 * |[27]    |OPAKEEP   |OP Amplifier Clock Keep Bit
 * |        |          |0 = OPA clock Disabled when enter NPD0~5/SPD0~2 mode.
 * |        |          |1 = OPA clock Enabled when enter NPD0~5/SPD0~2 mode.
 * @var LPSCC_T::CLKSEL0
 * Offset: 0x50  Peripheral Clock Source Select Control Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[1:0]   |LPUART0SEL|LPUART0 Clock Source Selection
 * |        |          |00 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |01 = Clock source from 1~24 MHz internal middle speed RC oscillator (MIRC).
 * |        |          |10 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
 * |        |          |11 = Reserved.
 * |        |          |Note: The LPUART0SEL cannot be changed when LPUART0 is operating
 * |        |          |Used should make LPUART0 disable before change LPUART0SEL, and reset LPUART0 after change LPUART0SEL.
 * |[3:2]   |LPSPI0SEL |LPSPI0 Clock Source Selection
 * |        |          |00 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |01 = Clock source from 1~24 MHz internal middle speed RC oscillator (MIRC).
 * |        |          |10 = Reserved.
 * |        |          |11 = Reserved.
 * |        |          |Note: The LPSPI0SEL cannot be changed when LPSPI0 is operating
 * |        |          |Used should make LPSPI0 disable before change LPSPI0SEL, and reset LPSPI0 after change LPSPI0SEL.
 * |[5:4]   |TTMR0SEL  |TTMR0 Clock Source Selection
 * |        |          |00 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |01 = Clock source from 1~24 MHz internal middle speed RC oscillator (MIRC).
 * |        |          |10 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
 * |        |          |11 = Clock source from 32 kHz internal low speed RC oscillator (LIRC).
 * |        |          |Note: The TTMR0SEL cannot be changed when TTMR0 is operating
 * |        |          |Used should make TTMR0 disable before change TTMR0SEL, and reset TTMR0 after change TTMR0SEL.
 * |[7:6]   |TTMR1SEL  |TTMR1 Clock Source Selection
 * |        |          |00 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |01 = Clock source from 1~24 MHz internal middle speed RC oscillator (MIRC).
 * |        |          |10 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
 * |        |          |11 = Clock source from 32 kHz internal low speed RC oscillator (LIRC).
 * |        |          |Note: The TTMR1SEL cannot be changed when TTMR1 is operating
 * |        |          |Used should make TTMR1 disable before change TTMR1SEL, and reset TTMR1 after change TTMR1SEL.
 * |[10:8]  |LPTMR0SEL |LPTMR0 Clock Source Selection
 * |        |          |000 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |001 = Clock source from 1~24 MHz internal middle speed RC oscillator (MIRC).
 * |        |          |010 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
 * |        |          |011 = Clock source from 32 kHz internal low speed RC oscillator (LIRC).
 * |        |          |100 = Clock source from external clock LPTM0 pin.
 * |        |          |Others = Reserved.
 * |        |          |Note: The LPTMR0SEL cannot be changed when LPTMR0 is operating
 * |        |          |Used should make LPTMR0 disable before change LPTMR0SEL, and reset LPTMR0 after change LPTMR0SEL.
 * |[14:12] |LPTMR1SEL |LPTMR1 Clock Source Selection
 * |        |          |000 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |001 = Clock source from 1~24 MHz internal middle speed RC oscillator (MIRC).
 * |        |          |010 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
 * |        |          |011 = Clock source from 32 kHz internal low speed RC oscillator (LIRC).
 * |        |          |100 = Clock source from external clock LPTM1 pin.
 * |        |          |Others = Reserved.
 * |        |          |Note: The LPTMR1SEL cannot be changed when LPTMR1 is operating
 * |        |          |Used should make LPTMR1 disable before change LPTMR1SEL, and reset LPTMR1 after change LPTMR1SEL.
 * |[17:16] |LPADC0SEL |LPADC0 Clock Source Selection
 * |        |          |00 = Clock source from 12 MHz internal high speed RC oscillator (HIRC).
 * |        |          |01 = Clock source from 1~24 MHz internal middle speed RC oscillator (MIRC).
 * |        |          |10 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
 * |        |          |11 = Clock source from PCLK2.
 * |        |          |Note: The LPADC0SEL cannot be changed when LPADC0 is operating
 * |        |          |Used should make LPADC0 disable before change LPADC0SEL, and reset LPADC0 after change LPADC0SEL.
 * |[25:24] |WDTSEL    |WDT Clock Source Selection
 * |        |          |00 = Clock source from 32 kHz internal low speed RC oscillator (LIRC).
 * |        |          |01 = Clock source from 32.768 kHz external low speed crystal oscillator (LXT).
 * |        |          |10 = Clock source from HCLK1/2048.
 * |        |          |11 = Reserved.
 * |        |          |Note: The WDTSEL cannot be changed when WDT is operating
 * |        |          |Used should make WDT disable before change WDTSEL, and reset WDT after change WDTSEL.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * @var LPSCC_T::CLKDIV0
 * Offset: 0x60  Peripheral Clock Divider Number Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[3:0]   |HCLK1DIV  |HCLK1 Clock Divide Number from HCLK1 Clock Source
 * |        |          |HCLK1 clock frequency = (HCLK1 clock source frequency) / (HCLK1DIV + 1).
 * |[6:4]   |APB2DIV   |APB2 Clock Divider
 * |        |          |APB2 clock can be divided from HCLK1.
 * |        |          |000 = PCLK2 frequency is HCLK1.
 * |        |          |001 = PCLK2 frequency is 1/2 HCLK1.
 * |        |          |010 = PCLK2 frequency is 1/4 HCLK1.
 * |        |          |011 = PCLK2 frequency is 1/8 HCLK1.
 * |        |          |100 = PCLK2 frequency is 1/16 HCLK1.
 * |        |          |Others = Reserved.
 * |[11:8]  |LPUART0DIV|LPUART0 Clock Divide Number from LPUART0 Clock Source
 * |        |          |LPUART0 clock frequency = (LPUART0 clock source frequency) / (LPUART0DIV + 1).
 * |[19:16] |LPADC0DIV |LPADC0 Clock Divide Number from CANFD1 Clock Source
 * |        |          |LPADC0 clock frequency = (LPADC0 clock source frequency) / (LPADC0DIV + 1).
 * @var LPSCC_T::CLKMCTL
 * Offset: 0x80  Clock Monitor Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[1:0]   |CLKM0SEL  |Clock Monitor 0 Source Select
 * |        |          |00 = Clock monitor source is HCLK1.
 * |        |          |01 = Clock monitor source is HIRC12M.
 * |        |          |10 = Clock monitor source is MIRC1TO24M.
 * |        |          |Others = Reserved.
 * |        |          |The CLKM0 output high means clock source is enabled, else clock source is disabled
 * |[9:8]   |CLKM1SEL  |Clock Monitor 1 Source Select
 * |        |          |00 = Clock monitor source is HCLK1.
 * |        |          |01 = Clock monitor source is HIRC12M.
 * |        |          |10 = Clock monitor source is MIRC1TO24M.
 * |        |          |Others = Reserved.
 * |        |          |The CLKM1 output high means clock source is enabled, else clock source is disabled
 * |[24]    |AOCMEN1   |Auto-operation Clock Monitor Enable 1
 * |        |          |0 = No auto-operation clock monitor function.
 * |        |          |1 = PF.0 will output AOCM0 (controlled by CLKM0SEL (LPSCC_CLKMCTL[1:0])
 * |        |          |PF.1 will output AOCM1 (controlled by CLKM1SEL (LPSCC_CLKMCTL[9:8]).
 * |        |          |Note: when ICE connect to chip, DO NOT set this register or may cause chip damage by I/O conflict
 * |[25]    |AOCMEN2   |Auto-operation Clock Monitor Enable 2
 * |        |          |0 = No auto-operation clock monitor function.
 * |        |          |1 = PF.2 will output AOCM0 (controlled by CLKM0SEL (LPSCC_CLKMCTL[1:0])
 * |        |          |PF.3 will output AOCM1 (controlled by CLKM1SEL (LPSCC_CLKMCTL[9:8]).
 * |        |          |Note: when crystal connect to chip, DO NOT set this register or may cause chip damage by I/O conflict
 * @var LPSCC_T::SRAMCTL
 * Offset: 0xA0  Low Power SRAM Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |LPSRAMEN  |Force LPSRAM Enable Bit
 * |        |          |0 = LPSRAM will be auto-enable when SRAM needed suting suto-operating mode
 * |        |          |If auto-operating mode is not enabled, the LPSRAM power mode is controlled by CLK_PMUCTL
 * |        |          |1 = Force LPSRAM enable for auto-operating mode usage.
 * |[4]     |LPSRAMDR  |LPSRAM Retention at idle Enabled
 * |        |          |0 = LPSRAM retention at idel when cpu in run mode/NPD0/NPD1/NPD2 Disabled.
 * |        |          |1 = LPSRAM retention at idel when cpu in run mode/NPD0/NPD1/NPD2 Enabled.(.default)
 * |        |          |When LPSRAMDR = 1, the LPSRAM will auto change to active mode when LPPDMA need to access LPSRAM, else enter power mode which controlled by CLK_PMUCTL.
 * |[5]     |LPSRAMDRL |LPSRAM low power Retention at idle Enabled
 * |        |          |0 = LPSRAM retention at idle only.(default)
 * |        |          |1 = LPSRAM retention at idle with low power mode.
 * |        |          |Note : This control works when LPSRAMDR=1.
 * @var LPSCC_T::IOHCTL
 * Offset: 0x100  I/O Hold Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |SCHDIS    |I/O Schmitt-Trigger Disable Bit
 * |        |          |When chip enter NPD3/NPD4/NPD5, the I/O will be hold and the input mode is default at Schmitt-Trigger mode
 * |        |          |Setting this bit can change all I/O input mode to TTL mode
 * |        |          |0 = I/O hold with Schmitt-Trigger iput mode.
 * |        |          |1 = I/O hold with TTL input mode.
 */
    __I  uint32_t RESERVE0[1];
    __IO uint32_t IPRST0;                /*!< [0x0004] Peripheral Reset Control Register 0                              */
    __I  uint32_t RESERVE1[14];
    __IO uint32_t CLKEN0;                /*!< [0x0040] Peripheral Clock Enable Control Register 0                       */
    __IO uint32_t CLKKEEP0;              /*!< [0x0044] Peripheral Clock Keep Control Register 0                         */
    __I  uint32_t RESERVE2[2];
    __IO uint32_t CLKSEL0;               /*!< [0x0050] Peripheral Clock Source Select Control Register 0                */
    __I  uint32_t RESERVE3[3];
    __IO uint32_t CLKDIV0;               /*!< [0x0060] Peripheral Clock Divider Number Register 0                       */
    __I  uint32_t RESERVE4[7];
    __IO uint32_t CLKMCTL;               /*!< [0x0080] Clock Monitor Control Register                                   */
    __I  uint32_t RESERVE5[7];
    __IO uint32_t SRAMCTL;               /*!< [0x00a0] Low Power SRAM Control Register                                  */
    __I  uint32_t RESERVE6[23];
    __IO uint32_t IOHCTL;                /*!< [0x0100] I/O Hold Control Register                                        */
} LPSCC_T;
#endif
/**
    @addtogroup LPSCC_CONST LPSCC Bit Field Definition
    Constant Definitions for LPSCC Controller
@{ */

#define LPSCC_IPRST0_LPPDMA0RST_Pos      (0)                                               /*!< LPSCC_T::IPRST0: LPPDMA0RST Position   */
#define LPSCC_IPRST0_LPPDMA0RST_Msk      (0x1ul << LPSCC_IPRST0_LPPDMA0RST_Pos)            /*!< LPSCC_T::IPRST0: LPPDMA0RST Mask       */

#define LPSCC_IPRST0_LPGPIORST_Pos       (1)                                               /*!< LPSCC_T::IPRST0: LPGPIORST Position    */
#define LPSCC_IPRST0_LPGPIORST_Msk       (0x1ul << LPSCC_IPRST0_LPGPIORST_Pos)             /*!< LPSCC_T::IPRST0: LPGPIORST Mask        */

#define LPSCC_IPRST0_LPSRAMRST_Pos       (2)                                               /*!< LPSCC_T::IPRST0: LPSRAMRST Position    */
#define LPSCC_IPRST0_LPSRAMRST_Msk       (0x1ul << LPSCC_IPRST0_LPSRAMRST_Pos)             /*!< LPSCC_T::IPRST0: LPSRAMRST Mask        */

#define LPSCC_IPRST0_WDTRST_Pos          (16)                                              /*!< LPSCC_T::IPRST0: WDTRST Position       */
#define LPSCC_IPRST0_WDTRST_Msk          (0x1ul << LPSCC_IPRST0_WDTRST_Pos)                /*!< LPSCC_T::IPRST0: WDTRST Mask           */

#define LPSCC_IPRST0_LPSPI0RST_Pos       (17)                                              /*!< LPSCC_T::IPRST0: LPSPI0RST Position    */
#define LPSCC_IPRST0_LPSPI0RST_Msk       (0x1ul << LPSCC_IPRST0_LPSPI0RST_Pos)             /*!< LPSCC_T::IPRST0: LPSPI0RST Mask        */

#define LPSCC_IPRST0_LPI2C0RST_Pos       (18)                                              /*!< LPSCC_T::IPRST0: LPI2C0RST Position    */
#define LPSCC_IPRST0_LPI2C0RST_Msk       (0x1ul << LPSCC_IPRST0_LPI2C0RST_Pos)             /*!< LPSCC_T::IPRST0: LPI2C0RST Mask        */

#define LPSCC_IPRST0_LPUART0RST_Pos      (19)                                              /*!< LPSCC_T::IPRST0: LPUART0RST Position   */
#define LPSCC_IPRST0_LPUART0RST_Msk      (0x1ul << LPSCC_IPRST0_LPUART0RST_Pos)            /*!< LPSCC_T::IPRST0: LPUART0RST Mask       */

#define LPSCC_IPRST0_LPTMR0RST_Pos       (20)                                              /*!< LPSCC_T::IPRST0: LPTMR0RST Position    */
#define LPSCC_IPRST0_LPTMR0RST_Msk       (0x1ul << LPSCC_IPRST0_LPTMR0RST_Pos)             /*!< LPSCC_T::IPRST0: LPTMR0RST Mask        */

#define LPSCC_IPRST0_LPTMR1RST_Pos       (21)                                              /*!< LPSCC_T::IPRST0: LPTMR1RST Position    */
#define LPSCC_IPRST0_LPTMR1RST_Msk       (0x1ul << LPSCC_IPRST0_LPTMR1RST_Pos)             /*!< LPSCC_T::IPRST0: LPTMR1RST Mask        */

#define LPSCC_IPRST0_TTMR0RST_Pos        (22)                                              /*!< LPSCC_T::IPRST0: TTMR0RST Position     */
#define LPSCC_IPRST0_TTMR0RST_Msk        (0x1ul << LPSCC_IPRST0_TTMR0RST_Pos)              /*!< LPSCC_T::IPRST0: TTMR0RST Mask         */

#define LPSCC_IPRST0_TTMR1RST_Pos        (23)                                              /*!< LPSCC_T::IPRST0: TTMR1RST Position     */
#define LPSCC_IPRST0_TTMR1RST_Msk        (0x1ul << LPSCC_IPRST0_TTMR1RST_Pos)              /*!< LPSCC_T::IPRST0: TTMR1RST Mask         */

#define LPSCC_IPRST0_LPADC0RST_Pos       (24)                                              /*!< LPSCC_T::IPRST0: LPADC0RST Position    */
#define LPSCC_IPRST0_LPADC0RST_Msk       (0x1ul << LPSCC_IPRST0_LPADC0RST_Pos)             /*!< LPSCC_T::IPRST0: LPADC0RST Mask        */

#define LPSCC_IPRST0_OPARST_Pos          (27)                                              /*!< LPSCC_T::IPRST0: OPARST Position       */
#define LPSCC_IPRST0_OPARST_Msk          (0x1ul << LPSCC_IPRST0_OPARST_Pos)                /*!< LPSCC_T::IPRST0: OPARST Mask           */

#define LPSCC_CLKEN0_LPPDMA0CKEN_Pos     (0)                                               /*!< LPSCC_T::CLKEN0: LPPDMA0CKEN Position  */
#define LPSCC_CLKEN0_LPPDMA0CKEN_Msk     (0x1ul << LPSCC_CLKEN0_LPPDMA0CKEN_Pos)           /*!< LPSCC_T::CLKEN0: LPPDMA0CKEN Mask      */

#define LPSCC_CLKEN0_LPGPIOCKEN_Pos      (1)                                               /*!< LPSCC_T::CLKEN0: LPGPIOCKEN Position   */
#define LPSCC_CLKEN0_LPGPIOCKEN_Msk      (0x1ul << LPSCC_CLKEN0_LPGPIOCKEN_Pos)            /*!< LPSCC_T::CLKEN0: LPGPIOCKEN Mask       */

#define LPSCC_CLKEN0_LPSRAMCKEN_Pos      (2)                                               /*!< LPSCC_T::CLKEN0: LPSRAMCKEN Position   */
#define LPSCC_CLKEN0_LPSRAMCKEN_Msk      (0x1ul << LPSCC_CLKEN0_LPSRAMCKEN_Pos)            /*!< LPSCC_T::CLKEN0: LPSRAMCKEN Mask       */

#define LPSCC_CLKEN0_WDTCKEN_Pos         (16)                                              /*!< LPSCC_T::CLKEN0: WDTCKEN Position      */
#define LPSCC_CLKEN0_WDTCKEN_Msk         (0x1ul << LPSCC_CLKEN0_WDTCKEN_Pos)               /*!< LPSCC_T::CLKEN0: WDTCKEN Mask          */

#define LPSCC_CLKEN0_LPSPI0CKEN_Pos      (17)                                              /*!< LPSCC_T::CLKEN0: LPSPI0CKEN Position   */
#define LPSCC_CLKEN0_LPSPI0CKEN_Msk      (0x1ul << LPSCC_CLKEN0_LPSPI0CKEN_Pos)            /*!< LPSCC_T::CLKEN0: LPSPI0CKEN Mask       */

#define LPSCC_CLKEN0_LPI2C0CKEN_Pos      (18)                                              /*!< LPSCC_T::CLKEN0: LPI2C0CKEN Position   */
#define LPSCC_CLKEN0_LPI2C0CKEN_Msk      (0x1ul << LPSCC_CLKEN0_LPI2C0CKEN_Pos)            /*!< LPSCC_T::CLKEN0: LPI2C0CKEN Mask       */

#define LPSCC_CLKEN0_LPUART0CKEN_Pos     (19)                                              /*!< LPSCC_T::CLKEN0: LPUART0CKEN Position  */
#define LPSCC_CLKEN0_LPUART0CKEN_Msk     (0x1ul << LPSCC_CLKEN0_LPUART0CKEN_Pos)           /*!< LPSCC_T::CLKEN0: LPUART0CKEN Mask      */

#define LPSCC_CLKEN0_LPTMR0CKEN_Pos      (20)                                              /*!< LPSCC_T::CLKEN0: LPTMR0CKEN Position   */
#define LPSCC_CLKEN0_LPTMR0CKEN_Msk      (0x1ul << LPSCC_CLKEN0_LPTMR0CKEN_Pos)            /*!< LPSCC_T::CLKEN0: LPTMR0CKEN Mask       */

#define LPSCC_CLKEN0_LPTMR1CKEN_Pos      (21)                                              /*!< LPSCC_T::CLKEN0: LPTMR1CKEN Position   */
#define LPSCC_CLKEN0_LPTMR1CKEN_Msk      (0x1ul << LPSCC_CLKEN0_LPTMR1CKEN_Pos)            /*!< LPSCC_T::CLKEN0: LPTMR1CKEN Mask       */

#define LPSCC_CLKEN0_TTMR0CKEN_Pos       (22)                                              /*!< LPSCC_T::CLKEN0: TTMR0CKEN Position    */
#define LPSCC_CLKEN0_TTMR0CKEN_Msk       (0x1ul << LPSCC_CLKEN0_TTMR0CKEN_Pos)             /*!< LPSCC_T::CLKEN0: TTMR0CKEN Mask        */

#define LPSCC_CLKEN0_TTMR1CKEN_Pos       (23)                                              /*!< LPSCC_T::CLKEN0: TTMR1CKEN Position    */
#define LPSCC_CLKEN0_TTMR1CKEN_Msk       (0x1ul << LPSCC_CLKEN0_TTMR1CKEN_Pos)             /*!< LPSCC_T::CLKEN0: TTMR1CKEN Mask        */

#define LPSCC_CLKEN0_LPADC0CKEN_Pos      (24)                                              /*!< LPSCC_T::CLKEN0: LPADC0CKEN Position   */
#define LPSCC_CLKEN0_LPADC0CKEN_Msk      (0x1ul << LPSCC_CLKEN0_LPADC0CKEN_Pos)            /*!< LPSCC_T::CLKEN0: LPADC0CKEN Mask       */

#define LPSCC_CLKEN0_OPACKEN_Pos         (27)                                              /*!< LPSCC_T::CLKEN0: OPACKEN Position      */
#define LPSCC_CLKEN0_OPACKEN_Msk         (0x1ul << LPSCC_CLKEN0_OPACKEN_Pos)               /*!< LPSCC_T::CLKEN0: OPACKEN Mask          */

#define LPSCC_CLKKEEP0_LPPDMA0KEEP_Pos   (0)                                               /*!< LPSCC_T::CLKKEEP0: LPPDMA0KEEP Position*/
#define LPSCC_CLKKEEP0_LPPDMA0KEEP_Msk   (0x1ul << LPSCC_CLKKEEP0_LPPDMA0KEEP_Pos)         /*!< LPSCC_T::CLKKEEP0: LPPDMA0KEEP Mask    */

#define LPSCC_CLKKEEP0_LPGPIOKEEP_Pos    (1)                                               /*!< LPSCC_T::CLKKEEP0: LPGPIOKEEP Position */
#define LPSCC_CLKKEEP0_LPGPIOKEEP_Msk    (0x1ul << LPSCC_CLKKEEP0_LPGPIOKEEP_Pos)          /*!< LPSCC_T::CLKKEEP0: LPGPIOKEEP Mask     */

#define LPSCC_CLKKEEP0_LPSRAMKEEP_Pos    (2)                                               /*!< LPSCC_T::CLKKEEP0: LPSRAMKEEP Position */
#define LPSCC_CLKKEEP0_LPSRAMKEEP_Msk    (0x1ul << LPSCC_CLKKEEP0_LPSRAMKEEP_Pos)          /*!< LPSCC_T::CLKKEEP0: LPSRAMKEEP Mask     */

#define LPSCC_CLKKEEP0_WDTKEEP_Pos       (16)                                              /*!< LPSCC_T::CLKKEEP0: WDTKEEP Position    */
#define LPSCC_CLKKEEP0_WDTKEEP_Msk       (0x1ul << LPSCC_CLKKEEP0_WDTKEEP_Pos)             /*!< LPSCC_T::CLKKEEP0: WDTKEEP Mask        */

#define LPSCC_CLKKEEP0_LPSPI0KEEP_Pos    (17)                                              /*!< LPSCC_T::CLKKEEP0: LPSPI0KEEP Position */
#define LPSCC_CLKKEEP0_LPSPI0KEEP_Msk    (0x1ul << LPSCC_CLKKEEP0_LPSPI0KEEP_Pos)          /*!< LPSCC_T::CLKKEEP0: LPSPI0KEEP Mask     */

#define LPSCC_CLKKEEP0_LPI2C0KEEP_Pos    (18)                                              /*!< LPSCC_T::CLKKEEP0: LPI2C0KEEP Position */
#define LPSCC_CLKKEEP0_LPI2C0KEEP_Msk    (0x1ul << LPSCC_CLKKEEP0_LPI2C0KEEP_Pos)          /*!< LPSCC_T::CLKKEEP0: LPI2C0KEEP Mask     */

#define LPSCC_CLKKEEP0_LPUART0KEEP_Pos   (19)                                              /*!< LPSCC_T::CLKKEEP0: LPUART0KEEP Position*/
#define LPSCC_CLKKEEP0_LPUART0KEEP_Msk   (0x1ul << LPSCC_CLKKEEP0_LPUART0KEEP_Pos)         /*!< LPSCC_T::CLKKEEP0: LPUART0KEEP Mask    */

#define LPSCC_CLKKEEP0_LPTMR0KEEP_Pos    (20)                                              /*!< LPSCC_T::CLKKEEP0: LPTMR0KEEP Position */
#define LPSCC_CLKKEEP0_LPTMR0KEEP_Msk    (0x1ul << LPSCC_CLKKEEP0_LPTMR0KEEP_Pos)          /*!< LPSCC_T::CLKKEEP0: LPTMR0KEEP Mask     */

#define LPSCC_CLKKEEP0_LPTMR1KEEP_Pos    (21)                                              /*!< LPSCC_T::CLKKEEP0: LPTMR1KEEP Position */
#define LPSCC_CLKKEEP0_LPTMR1KEEP_Msk    (0x1ul << LPSCC_CLKKEEP0_LPTMR1KEEP_Pos)          /*!< LPSCC_T::CLKKEEP0: LPTMR1KEEP Mask     */

#define LPSCC_CLKKEEP0_TTMR0KEEP_Pos     (22)                                              /*!< LPSCC_T::CLKKEEP0: TTMR0KEEP Position  */
#define LPSCC_CLKKEEP0_TTMR0KEEP_Msk     (0x1ul << LPSCC_CLKKEEP0_TTMR0KEEP_Pos)           /*!< LPSCC_T::CLKKEEP0: TTMR0KEEP Mask      */

#define LPSCC_CLKKEEP0_TTMR1KEEP_Pos     (23)                                              /*!< LPSCC_T::CLKKEEP0: TTMR1KEEP Position  */
#define LPSCC_CLKKEEP0_TTMR1KEEP_Msk     (0x1ul << LPSCC_CLKKEEP0_TTMR1KEEP_Pos)           /*!< LPSCC_T::CLKKEEP0: TTMR1KEEP Mask      */

#define LPSCC_CLKKEEP0_LPADC0KEEP_Pos    (24)                                              /*!< LPSCC_T::CLKKEEP0: LPADC0KEEP Position */
#define LPSCC_CLKKEEP0_LPADC0KEEP_Msk    (0x1ul << LPSCC_CLKKEEP0_LPADC0KEEP_Pos)          /*!< LPSCC_T::CLKKEEP0: LPADC0KEEP Mask     */

#define LPSCC_CLKKEEP0_OPAKEEP_Pos       (27)                                              /*!< LPSCC_T::CLKKEEP0: OPAKEEP Position    */
#define LPSCC_CLKKEEP0_OPAKEEP_Msk       (0x1ul << LPSCC_CLKKEEP0_OPAKEEP_Pos)             /*!< LPSCC_T::CLKKEEP0: OPAKEEP Mask        */

#define LPSCC_CLKSEL0_LPUART0SEL_Pos     (0)                                               /*!< LPSCC_T::CLKSEL0: LPUART0SEL Position  */
#define LPSCC_CLKSEL0_LPUART0SEL_Msk     (0x3ul << LPSCC_CLKSEL0_LPUART0SEL_Pos)           /*!< LPSCC_T::CLKSEL0: LPUART0SEL Mask      */

#define LPSCC_CLKSEL0_LPSPI0SEL_Pos      (2)                                               /*!< LPSCC_T::CLKSEL0: LPSPI0SEL Position   */
#define LPSCC_CLKSEL0_LPSPI0SEL_Msk      (0x3ul << LPSCC_CLKSEL0_LPSPI0SEL_Pos)            /*!< LPSCC_T::CLKSEL0: LPSPI0SEL Mask       */

#define LPSCC_CLKSEL0_TTMR0SEL_Pos       (4)                                               /*!< LPSCC_T::CLKSEL0: TTMR0SEL Position    */
#define LPSCC_CLKSEL0_TTMR0SEL_Msk       (0x3ul << LPSCC_CLKSEL0_TTMR0SEL_Pos)             /*!< LPSCC_T::CLKSEL0: TTMR0SEL Mask        */

#define LPSCC_CLKSEL0_TTMR1SEL_Pos       (6)                                               /*!< LPSCC_T::CLKSEL0: TTMR1SEL Position    */
#define LPSCC_CLKSEL0_TTMR1SEL_Msk       (0x3ul << LPSCC_CLKSEL0_TTMR1SEL_Pos)             /*!< LPSCC_T::CLKSEL0: TTMR1SEL Mask        */

#define LPSCC_CLKSEL0_LPTMR0SEL_Pos      (8)                                               /*!< LPSCC_T::CLKSEL0: LPTMR0SEL Position   */
#define LPSCC_CLKSEL0_LPTMR0SEL_Msk      (0x7ul << LPSCC_CLKSEL0_LPTMR0SEL_Pos)            /*!< LPSCC_T::CLKSEL0: LPTMR0SEL Mask       */

#define LPSCC_CLKSEL0_LPTMR1SEL_Pos      (12)                                              /*!< LPSCC_T::CLKSEL0: LPTMR1SEL Position   */
#define LPSCC_CLKSEL0_LPTMR1SEL_Msk      (0x7ul << LPSCC_CLKSEL0_LPTMR1SEL_Pos)            /*!< LPSCC_T::CLKSEL0: LPTMR1SEL Mask       */

#define LPSCC_CLKSEL0_LPADC0SEL_Pos      (16)                                              /*!< LPSCC_T::CLKSEL0: LPADC0SEL Position   */
#define LPSCC_CLKSEL0_LPADC0SEL_Msk      (0x3ul << LPSCC_CLKSEL0_LPADC0SEL_Pos)            /*!< LPSCC_T::CLKSEL0: LPADC0SEL Mask       */

#define LPSCC_CLKSEL0_WDTSEL_Pos         (24)                                              /*!< LPSCC_T::CLKSEL0: WDTSEL Position      */
#define LPSCC_CLKSEL0_WDTSEL_Msk         (0x3ul << LPSCC_CLKSEL0_WDTSEL_Pos)               /*!< LPSCC_T::CLKSEL0: WDTSEL Mask          */

#define LPSCC_CLKDIV0_HCLK1DIV_Pos       (0)                                               /*!< LPSCC_T::CLKDIV0: HCLK1DIV Position    */
#define LPSCC_CLKDIV0_HCLK1DIV_Msk       (0xful << LPSCC_CLKDIV0_HCLK1DIV_Pos)             /*!< LPSCC_T::CLKDIV0: HCLK1DIV Mask        */

#define LPSCC_CLKDIV0_APB2DIV_Pos        (4)                                               /*!< LPSCC_T::CLKDIV0: APB2DIV Position     */
#define LPSCC_CLKDIV0_APB2DIV_Msk        (0x7ul << LPSCC_CLKDIV0_APB2DIV_Pos)              /*!< LPSCC_T::CLKDIV0: APB2DIV Mask         */

#define LPSCC_CLKDIV0_LPUART0DIV_Pos     (8)                                               /*!< LPSCC_T::CLKDIV0: LPUART0DIV Position  */
#define LPSCC_CLKDIV0_LPUART0DIV_Msk     (0xful << LPSCC_CLKDIV0_LPUART0DIV_Pos)           /*!< LPSCC_T::CLKDIV0: LPUART0DIV Mask      */

#define LPSCC_CLKDIV0_LPADC0DIV_Pos      (16)                                              /*!< LPSCC_T::CLKDIV0: LPADC0DIV Position   */
#define LPSCC_CLKDIV0_LPADC0DIV_Msk      (0xful << LPSCC_CLKDIV0_LPADC0DIV_Pos)            /*!< LPSCC_T::CLKDIV0: LPADC0DIV Mask       */

#define LPSCC_CLKMCTL_CLKM0SEL_Pos       (0)                                               /*!< LPSCC_T::CLKMCTL: CLKM0SEL Position    */
#define LPSCC_CLKMCTL_CLKM0SEL_Msk       (0x3ul << LPSCC_CLKMCTL_CLKM0SEL_Pos)             /*!< LPSCC_T::CLKMCTL: CLKM0SEL Mask        */

#define LPSCC_CLKMCTL_CLKM1SEL_Pos       (8)                                               /*!< LPSCC_T::CLKMCTL: CLKM1SEL Position    */
#define LPSCC_CLKMCTL_CLKM1SEL_Msk       (0x3ul << LPSCC_CLKMCTL_CLKM1SEL_Pos)             /*!< LPSCC_T::CLKMCTL: CLKM1SEL Mask        */

#define LPSCC_CLKMCTL_AOCMEN1_Pos        (24)                                              /*!< LPSCC_T::CLKMCTL: AOCMEN1 Position     */
#define LPSCC_CLKMCTL_AOCMEN1_Msk        (0x1ul << LPSCC_CLKMCTL_AOCMEN1_Pos)              /*!< LPSCC_T::CLKMCTL: AOCMEN1 Mask         */

#define LPSCC_CLKMCTL_AOCMEN2_Pos        (25)                                              /*!< LPSCC_T::CLKMCTL: AOCMEN2 Position     */
#define LPSCC_CLKMCTL_AOCMEN2_Msk        (0x1ul << LPSCC_CLKMCTL_AOCMEN2_Pos)              /*!< LPSCC_T::CLKMCTL: AOCMEN2 Mask         */

#define LPSCC_SRAMCTL_LPSRAMEN_Pos       (0)                                               /*!< LPSCC_T::SRAMCTL: LPSRAMEN Position    */
#define LPSCC_SRAMCTL_LPSRAMEN_Msk       (0x1ul << LPSCC_SRAMCTL_LPSRAMEN_Pos)             /*!< LPSCC_T::SRAMCTL: LPSRAMEN Mask        */

#define LPSCC_SRAMCTL_LPSRAMDR_Pos       (4)                                               /*!< LPSCC_T::SRAMCTL: LPSRAMDR Position    */
#define LPSCC_SRAMCTL_LPSRAMDR_Msk       (0x1ul << LPSCC_SRAMCTL_LPSRAMDR_Pos)             /*!< LPSCC_T::SRAMCTL: LPSRAMDR Mask        */

#define LPSCC_SRAMCTL_LPSRAMDRL_Pos      (5)                                               /*!< LPSCC_T::SRAMCTL: LPSRAMDRL Position   */
#define LPSCC_SRAMCTL_LPSRAMDRL_Msk      (0x1ul << LPSCC_SRAMCTL_LPSRAMDRL_Pos)            /*!< LPSCC_T::SRAMCTL: LPSRAMDRL Mask       */

#define LPSCC_IOHCTL_SCHDIS_Pos          (0)                                               /*!< LPSCC_T::IOHCTL: SCHDIS Position       */
#define LPSCC_IOHCTL_SCHDIS_Msk          (0x1ul << LPSCC_IOHCTL_SCHDIS_Pos)                /*!< LPSCC_T::IOHCTL: SCHDIS Mask           */

/**@}*/ /* LPSCC_CONST */
/**@}*/ /* end of LPSCC register group */


/*---------------------- NMI Controller -------------------------*/
/**
    @addtogroup NMI NMI Controller(NMI)
    Memory Mapped Structure for NMI Controller
@{ */
#if 0
typedef struct
{


/**
 * @var NMI_T::NMIEN
 * Offset: 0x00  NMI Source Interrupt Enable Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |BODOUT    |BOD NMI Source Enable (Write Protect)
 * |        |          |0 = BOD NMI source Disabled.
 * |        |          |1 = BOD NMI source Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[1]     |IRC_INT   |IRC TRIM NMI Source Enable (Write Protect)
 * |        |          |0 = IRC TRIM NMI source Disabled.
 * |        |          |1 = IRC TRIM NMI source Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[2]     |PWRWU_INT |Power-down Mode Wake-up NMI Source Enable (Write Protect)
 * |        |          |0 = Power-down mode wake-up NMI source Disabled.
 * |        |          |1 = Power-down mode wake-up NMI source Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[3]     |SRAM_PERR |SRAM ParityCheck Error NMI Source Enable (Write Protect)
 * |        |          |0 = SRAM parity check error NMI source Disabled.
 * |        |          |1 = SRAM parity check error NMI source Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[4]     |CLKFAIL   |Clock Fail Detected NMI Source Enable (Write Protect)
 * |        |          |0 = Clock fail detected interrupt NMI source Disabled.
 * |        |          |1 = Clock fail detected interrupt NMI source Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[6]     |RTC_INT   |RTC NMI Source Enable (Write Protect)
 * |        |          |0 = RTC NMI source Disabled.
 * |        |          |1 = RTC NMI source Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[7]     |TAMPER_INT|TAMPER_INT NMI Source Enable (Write Protect)
 * |        |          |0 = Backup register tamper detected interrupt.NMI source Disabled.
 * |        |          |1 = Backup register tamper detected interrupt.NMI source Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[8]     |EINT0     |External Interrupt From INT0 Pin NMI Source Enable (Write Protect)
 * |        |          |0 = External interrupt from INT0 pin NMI source Disabled.
 * |        |          |1 = External interrupt from INT0 pin NMI source Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[9]     |EINT1     |External Interrupt From INT1 Pin NMI Source Enable (Write Protect)
 * |        |          |0 = External interrupt from INT1 pin NMI source Disabled.
 * |        |          |1 = External interrupt from INT1 pin NMI source Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[10]    |EINT2     |External Interrupt From INT2 Pin NMI Source Enable (Write Protect)
 * |        |          |0 = External interrupt from INT2 pin NMI source Disabled.
 * |        |          |1 = External interrupt from INT2 pin NMI source Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[11]    |EINT3     |External Interrupt From INT3 Pin NMI Source Enable (Write Protect)
 * |        |          |0 = External interrupt from INT3 pin NMI source Disabled.
 * |        |          |1 = External interrupt from INT3 pin NMI source Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[12]    |EINT4     |External Interrupt From INT4 Pin NMI Source Enable (Write Protect)
 * |        |          |0 = External interrupt from INT4 pin NMI source Disabled.
 * |        |          |1 = External interrupt from INT4 pin NMI source Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[13]    |EINT5     |External Interrupt From INT5 Pin NMI Source Enable (Write Protect)
 * |        |          |0 = External interrupt from INT5 pin NMI source Disabled.
 * |        |          |1 = External interrupt from INT5 pin NMI source Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[14]    |UART0_INT |UART0 NMI Source Enable (Write Protect)
 * |        |          |0 = UART0 NMI source Disabled.
 * |        |          |1 = UART0 NMI source Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[15]    |UART1_INT |UART1 NMI Source Enable (Write Protect)
 * |        |          |0 = UART1 NMI source Disabled.
 * |        |          |1 = UART1 NMI source Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * @var NMI_T::NMISTS
 * Offset: 0x04  NMI Source Interrupt Status Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |BODOUT    |BOD Interrupt Flag (Read Only)
 * |        |          |0 = BOD interrupt is deasserted.
 * |        |          |1 = BOD interrupt is asserted.
 * |[1]     |IRC_INT   |IRC TRIM Interrupt Flag (Read Only)
 * |        |          |0 = HIRC TRIM interrupt is deasserted.
 * |        |          |1 = HIRC TRIM interrupt is asserted.
 * |[2]     |PWRWU_INT |Power-down Mode Wake-up Interrupt Flag (Read Only)
 * |        |          |0 = Power-down mode wake-up interrupt is deasserted.
 * |        |          |1 = Power-down mode wake-up interrupt is asserted.
 * |[3]     |SRAM_PERR |SRAM ParityCheck Error Interrupt Flag (Read Only)
 * |        |          |0 = SRAM parity check error interrupt is deasserted.
 * |        |          |1 = SRAM parity check error interrupt is asserted.
 * |[4]     |CLKFAIL   |Clock Fail Detected Interrupt Flag (Read Only)
 * |        |          |0 = Clock fail detected interrupt is deasserted.
 * |        |          |1 = Clock fail detected interrupt is asserted.
 * |[6]     |RTC_INT   |RTC Interrupt Flag (Read Only)
 * |        |          |0 = RTC interrupt is deasserted.
 * |        |          |1 = RTC interrupt is asserted.
 * |[7]     |TAMPER_INT|TAMPER_INT Interrupt Flag (Read Only)
 * |        |          |0 = Backup register tamper detected interrupt is deasserted.
 * |        |          |1 = Backup register tamper detected interrupt is asserted.
 * |[8]     |EINT0     |External Interrupt From INT0 Pin Interrupt Flag (Read Only)
 * |        |          |0 = External Interrupt from INT0 interrupt is deasserted.
 * |        |          |1 = External Interrupt from INT0 interrupt is asserted.
 * |[9]     |EINT1     |External Interrupt From INT1 Pin Interrupt Flag (Read Only)
 * |        |          |0 = External Interrupt from INT1 interrupt is deasserted.
 * |        |          |1 = External Interrupt from INT1 interrupt is asserted.
 * |[10]    |EINT2     |External Interrupt From INT2 Pin Interrupt Flag (Read Only)
 * |        |          |0 = External Interrupt from INT2 interrupt is deasserted.
 * |        |          |1 = External Interrupt from INT2 interrupt is asserted.
 * |[11]    |EINT3     |External Interrupt From INT3 Pin Interrupt Flag (Read Only)
 * |        |          |0 = External Interrupt from INT3 interrupt is deasserted.
 * |        |          |1 = External Interrupt from INT3 interrupt is asserted.
 * |[12]    |EINT4     |External Interrupt From INT4 Pin Interrupt Flag (Read Only)
 * |        |          |0 = External Interrupt from INT4 interrupt is deasserted.
 * |        |          |1 = External Interrupt from INT4 interrupt is asserted.
 * |[13]    |EINT5     |External Interrupt From INT5 Pin Interrupt Flag (Read Only)
 * |        |          |0 = External Interrupt from INT5 interrupt is deasserted.
 * |        |          |1 = External Interrupt from INT5 interrupt is asserted.
 * |[14]    |UART0_INT |UART0 Interrupt Flag (Read Only)
 * |        |          |0 = UART1 interrupt is deasserted.
 * |        |          |1 = UART1 interrupt is asserted.
 * |[15]    |UART1_INT |UART1 Interrupt Flag (Read Only)
 * |        |          |0 = UART1 interrupt is deasserted.
 * |        |          |1 = UART1 interrupt is asserted.
 */
    __IO uint32_t NMIEN;                 /*!< [0x0000] NMI Source Interrupt Enable Register                             */
    __I  uint32_t NMISTS;                /*!< [0x0004] NMI Source Interrupt Status Register                             */

} NMI_T;
#endif
/**
    @addtogroup NMI_CONST NMI Bit Field Definition
    Constant Definitions for NMI Controller
@{ */

#define NMI_NMIEN_BODOUT_Pos             (0)                                               /*!< NMI_T::NMIEN: BODOUT Position          */
#define NMI_NMIEN_BODOUT_Msk             (0x1ul << NMI_NMIEN_BODOUT_Pos)                   /*!< NMI_T::NMIEN: BODOUT Mask              */

#define NMI_NMIEN_IRC_INT_Pos            (1)                                               /*!< NMI_T::NMIEN: IRC_INT Position         */
#define NMI_NMIEN_IRC_INT_Msk            (0x1ul << NMI_NMIEN_IRC_INT_Pos)                  /*!< NMI_T::NMIEN: IRC_INT Mask             */

#define NMI_NMIEN_PWRWU_INT_Pos          (2)                                               /*!< NMI_T::NMIEN: PWRWU_INT Position       */
#define NMI_NMIEN_PWRWU_INT_Msk          (0x1ul << NMI_NMIEN_PWRWU_INT_Pos)                /*!< NMI_T::NMIEN: PWRWU_INT Mask           */

#define NMI_NMIEN_SRAM_PERR_Pos          (3)                                               /*!< NMI_T::NMIEN: SRAM_PERR Position       */
#define NMI_NMIEN_SRAM_PERR_Msk          (0x1ul << NMI_NMIEN_SRAM_PERR_Pos)                /*!< NMI_T::NMIEN: SRAM_PERR Mask           */

#define NMI_NMIEN_CLKFAIL_Pos            (4)                                               /*!< NMI_T::NMIEN: CLKFAIL Position         */
#define NMI_NMIEN_CLKFAIL_Msk            (0x1ul << NMI_NMIEN_CLKFAIL_Pos)                  /*!< NMI_T::NMIEN: CLKFAIL Mask             */

#define NMI_NMIEN_RTC_INT_Pos            (6)                                               /*!< NMI_T::NMIEN: RTC_INT Position         */
#define NMI_NMIEN_RTC_INT_Msk            (0x1ul << NMI_NMIEN_RTC_INT_Pos)                  /*!< NMI_T::NMIEN: RTC_INT Mask             */

#define NMI_NMIEN_TAMPER_INT_Pos         (7)                                               /*!< NMI_T::NMIEN: TAMPER_INT Position      */
#define NMI_NMIEN_TAMPER_INT_Msk         (0x1ul << NMI_NMIEN_TAMPER_INT_Pos)               /*!< NMI_T::NMIEN: TAMPER_INT Mask          */

#define NMI_NMIEN_EINT0_Pos              (8)                                               /*!< NMI_T::NMIEN: EINT0 Position           */
#define NMI_NMIEN_EINT0_Msk              (0x1ul << NMI_NMIEN_EINT0_Pos)                    /*!< NMI_T::NMIEN: EINT0 Mask               */

#define NMI_NMIEN_EINT1_Pos              (9)                                               /*!< NMI_T::NMIEN: EINT1 Position           */
#define NMI_NMIEN_EINT1_Msk              (0x1ul << NMI_NMIEN_EINT1_Pos)                    /*!< NMI_T::NMIEN: EINT1 Mask               */

#define NMI_NMIEN_EINT2_Pos              (10)                                              /*!< NMI_T::NMIEN: EINT2 Position           */
#define NMI_NMIEN_EINT2_Msk              (0x1ul << NMI_NMIEN_EINT2_Pos)                    /*!< NMI_T::NMIEN: EINT2 Mask               */

#define NMI_NMIEN_EINT3_Pos              (11)                                              /*!< NMI_T::NMIEN: EINT3 Position           */
#define NMI_NMIEN_EINT3_Msk              (0x1ul << NMI_NMIEN_EINT3_Pos)                    /*!< NMI_T::NMIEN: EINT3 Mask               */

#define NMI_NMIEN_EINT4_Pos              (12)                                              /*!< NMI_T::NMIEN: EINT4 Position           */
#define NMI_NMIEN_EINT4_Msk              (0x1ul << NMI_NMIEN_EINT4_Pos)                    /*!< NMI_T::NMIEN: EINT4 Mask               */

#define NMI_NMIEN_EINT5_Pos              (13)                                              /*!< NMI_T::NMIEN: EINT5 Position           */
#define NMI_NMIEN_EINT5_Msk              (0x1ul << NMI_NMIEN_EINT5_Pos)                    /*!< NMI_T::NMIEN: EINT5 Mask               */

#define NMI_NMIEN_UART0_INT_Pos          (14)                                              /*!< NMI_T::NMIEN: UART0_INT Position       */
#define NMI_NMIEN_UART0_INT_Msk          (0x1ul << NMI_NMIEN_UART0_INT_Pos)                /*!< NMI_T::NMIEN: UART0_INT Mask           */

#define NMI_NMIEN_UART1_INT_Pos          (15)                                              /*!< NMI_T::NMIEN: UART1_INT Position       */
#define NMI_NMIEN_UART1_INT_Msk          (0x1ul << NMI_NMIEN_UART1_INT_Pos)                /*!< NMI_T::NMIEN: UART1_INT Mask           */

#define NMI_NMISTS_BODOUT_Pos            (0)                                               /*!< NMI_T::NMISTS: BODOUT Position         */
#define NMI_NMISTS_BODOUT_Msk            (0x1ul << NMI_NMISTS_BODOUT_Pos)                  /*!< NMI_T::NMISTS: BODOUT Mask             */

#define NMI_NMISTS_IRC_INT_Pos           (1)                                               /*!< NMI_T::NMISTS: IRC_INT Position        */
#define NMI_NMISTS_IRC_INT_Msk           (0x1ul << NMI_NMISTS_IRC_INT_Pos)                 /*!< NMI_T::NMISTS: IRC_INT Mask            */

#define NMI_NMISTS_PWRWU_INT_Pos         (2)                                               /*!< NMI_T::NMISTS: PWRWU_INT Position      */
#define NMI_NMISTS_PWRWU_INT_Msk         (0x1ul << NMI_NMISTS_PWRWU_INT_Pos)               /*!< NMI_T::NMISTS: PWRWU_INT Mask          */

#define NMI_NMISTS_SRAM_PERR_Pos         (3)                                               /*!< NMI_T::NMISTS: SRAM_PERR Position      */
#define NMI_NMISTS_SRAM_PERR_Msk         (0x1ul << NMI_NMISTS_SRAM_PERR_Pos)               /*!< NMI_T::NMISTS: SRAM_PERR Mask          */

#define NMI_NMISTS_CLKFAIL_Pos           (4)                                               /*!< NMI_T::NMISTS: CLKFAIL Position        */
#define NMI_NMISTS_CLKFAIL_Msk           (0x1ul << NMI_NMISTS_CLKFAIL_Pos)                 /*!< NMI_T::NMISTS: CLKFAIL Mask            */

#define NMI_NMISTS_RTC_INT_Pos           (6)                                               /*!< NMI_T::NMISTS: RTC_INT Position        */
#define NMI_NMISTS_RTC_INT_Msk           (0x1ul << NMI_NMISTS_RTC_INT_Pos)                 /*!< NMI_T::NMISTS: RTC_INT Mask            */

#define NMI_NMISTS_TAMPER_INT_Pos        (7)                                               /*!< NMI_T::NMISTS: TAMPER_INT Position     */
#define NMI_NMISTS_TAMPER_INT_Msk        (0x1ul << NMI_NMISTS_TAMPER_INT_Pos)              /*!< NMI_T::NMISTS: TAMPER_INT Mask         */

#define NMI_NMISTS_EINT0_Pos             (8)                                               /*!< NMI_T::NMISTS: EINT0 Position          */
#define NMI_NMISTS_EINT0_Msk             (0x1ul << NMI_NMISTS_EINT0_Pos)                   /*!< NMI_T::NMISTS: EINT0 Mask              */

#define NMI_NMISTS_EINT1_Pos             (9)                                               /*!< NMI_T::NMISTS: EINT1 Position          */
#define NMI_NMISTS_EINT1_Msk             (0x1ul << NMI_NMISTS_EINT1_Pos)                   /*!< NMI_T::NMISTS: EINT1 Mask              */

#define NMI_NMISTS_EINT2_Pos             (10)                                              /*!< NMI_T::NMISTS: EINT2 Position          */
#define NMI_NMISTS_EINT2_Msk             (0x1ul << NMI_NMISTS_EINT2_Pos)                   /*!< NMI_T::NMISTS: EINT2 Mask              */

#define NMI_NMISTS_EINT3_Pos             (11)                                              /*!< NMI_T::NMISTS: EINT3 Position          */
#define NMI_NMISTS_EINT3_Msk             (0x1ul << NMI_NMISTS_EINT3_Pos)                   /*!< NMI_T::NMISTS: EINT3 Mask              */

#define NMI_NMISTS_EINT4_Pos             (12)                                              /*!< NMI_T::NMISTS: EINT4 Position          */
#define NMI_NMISTS_EINT4_Msk             (0x1ul << NMI_NMISTS_EINT4_Pos)                   /*!< NMI_T::NMISTS: EINT4 Mask              */

#define NMI_NMISTS_EINT5_Pos             (13)                                              /*!< NMI_T::NMISTS: EINT5 Position          */
#define NMI_NMISTS_EINT5_Msk             (0x1ul << NMI_NMISTS_EINT5_Pos)                   /*!< NMI_T::NMISTS: EINT5 Mask              */

#define NMI_NMISTS_UART0_INT_Pos         (14)                                              /*!< NMI_T::NMISTS: UART0_INT Position      */
#define NMI_NMISTS_UART0_INT_Msk         (0x1ul << NMI_NMISTS_UART0_INT_Pos)               /*!< NMI_T::NMISTS: UART0_INT Mask          */

#define NMI_NMISTS_UART1_INT_Pos         (15)                                              /*!< NMI_T::NMISTS: UART1_INT Position      */
#define NMI_NMISTS_UART1_INT_Msk         (0x1ul << NMI_NMISTS_UART1_INT_Pos)               /*!< NMI_T::NMISTS: UART1_INT Mask          */

/**@}*/ /* NMI_CONST */
/**@}*/ /* end of NMI register group */



/*---------------------- System Manger Controller -------------------------*/
/**
    @addtogroup SYS System Manger Controller(SYS)
    Memory Mapped Structure for SYS Controller
@{ */
#if 0
typedef struct
{
/**
 * @var SYS_T::PDID
 * Offset: 0x00  Part Device Identification Number Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[31:0]  |PDID      |Part Device Identification Number (Read Only)
 * |        |          |This register reflects device part number code
 * |        |          |Software can read this register to identify which device is used.
 * @var SYS_T::RSTSTS
 * Offset: 0x04  System Reset Status Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |PORF      |POR Reset Flag
 * |        |          |The POR reset flag is set by the "Reset Signal" from the Power-on Reset (POR) Controller or bit CHIPRST (SYS_IPRST0[0]) to indicate the previous reset source.
 * |        |          |0 = No reset from POR or CHIPRST.
 * |        |          |1 = Power-on Reset (POR) or CHIPRST had issued the reset signal to reset the system.
 * |        |          |Note: Write 1 to clear this bit to 0.
 * |[1]     |PINRF     |NRESET Pin Reset Flag
 * |        |          |The nRESET pin reset flag is set by the "Reset Signal" from the nRESET Pin to indicate the previous reset source.
 * |        |          |0 = No reset from nRESET pin.
 * |        |          |1 = Pin nRESET had issued the reset signal to reset the system.
 * |        |          |Note: Write 1 to clear this bit to 0.
 * |[2]     |WDTRF     |WDT Reset Flag
 * |        |          |The WDT reset flag is set by the "Reset Signal" from the Watchdog Timer or Window Watchdog Timer to indicate the previous reset source.
 * |        |          |0 = No reset from watchdog timer or window watchdog timer.
 * |        |          |1 = The watchdog timer or window watchdog timer had issued the reset signal to reset the system.
 * |        |          |Note 1: Write 1 to clear this bit to 0.
 * |        |          |Note 2: Watchdog Timer register RSTF(WDT_CTL[2]) bit is set if the system has been reset by WDT time-out reset
 * |        |          |Window Watchdog Timer register WWDTRF(WWDT_STATUS[1]) bit is set if the system has been reset by WWDT time-out reset.
 * |[3]     |LVRF      |LVR Reset Flag
 * |        |          |The LVR reset flag is set by the "Reset Signal" from the Low Voltage Reset Controller to indicate the previous reset source.
 * |        |          |0 = No reset from LVR.
 * |        |          |1 = LVR controller had issued the reset signal to reset the system.
 * |        |          |Note: Write 1 to clear this bit to 0.
 * |[4]     |BODRF     |BOD Reset Flag
 * |        |          |The BOD reset flag is set by the "Reset Signal" from the Brown-Out Detector to indicate the previous reset source.
 * |        |          |0 = No reset from BOD.
 * |        |          |1 = The BOD had issued the reset signal to reset the system.
 * |        |          |Note: Write 1 to clear this bit to 0.
 * |[5]     |SYSRF     |System Reset Flag
 * |        |          |The system reset flag is set by the "Reset Signal" from the Cortex-M23 core to indicate the previous reset source.
 * |        |          |0 = No reset from Cortex-M23.
 * |        |          |1 = The Cortex-M23 had issued the reset signal to reset the system by writing 1 to the bit SYSRESETREQ(AIRCR[2], Application Interrupt and Reset Control Register, address = 0xE000ED0C) in system control registers of Cortex-M23 core.
 * |        |          |Note: Write 1 to clear this bit to 0.
 * |[6]     |HRESETRF  |HRESET Reset Flag
 * |        |          |The HRESET reset flag is set by the "Reset Signal" from the HRESET.
 * |        |          |0 = No reset from HRESET.
 * |        |          |1 = Reset from HRESET.
 * |        |          |Note: Write 1 to clear this bit to 0.
 * |[7]     |CPURF     |CPU Reset Flag
 * |        |          |The CPU reset flag is set by hardware if software writes CPURST (SYS_IPRST0[1]) 1 to reset Cortex-M23 core and RRAM Memory Controller (RMC).
 * |        |          |0 = No reset from CPU.
 * |        |          |1 = The Cortex-M23 core and RMC are reset by software setting CPURST to 1.
 * |        |          |Note: Write 1 to clear this bit to 0.
 * |[8]     |CPULKRF   |CPU Lockup Reset Flag
 * |        |          |0 = No reset from CPU lockup happened.
 * |        |          |1 = The Cortex-M23 lockup happened and chip is reset.
 * |        |          |Note 1: Write 1 to clear this bit to 0.
 * |        |          |Note 2: When CPU lockup happened under ICE is connected, this flag will set to 1 but chip will not reset.
 * @var SYS_T::IPRST0
 * Offset: 0x08  Peripheral Reset Control Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |CHIPRST   |Chip One-shot Reset (Write Protect)
 * |        |          |Setting this bit will reset the whole chip, including Processor core and all peripherals, and this bit will automatically return to 0 after the 2 clock cycles.
 * |        |          |The CHIPRST is same as the POR reset, all the chip controllers is reset and the chip setting from RRAM are also reload.
 * |        |          |About the difference between CHIPRST and SYSRESETREQ(AIRCR[2]), please refer to section 7.2.2
 * |        |          |0 = Chip normal operation.
 * |        |          |1 = Chip one-shot reset.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[1]     |CPURST    |Processor Core One-shot Reset (Write Protect)
 * |        |          |Setting this bit will only reset the processor core and RRAM Memory Controller (RMC), and this bit will automatically return to 0 after the 2 clock cycles.
 * |        |          |0 = Processor core normal operation.
 * |        |          |1 = Processor core one-shot reset.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[2]     |PDMA0RST  |PDMA0 Controller Reset (Write Protect)
 * |        |          |Setting this bit to 1 will generate a reset signal to the PDMA0
 * |        |          |User needs to set this bit to 0 to release from reset state.
 * |        |          |0 = PDMA0 controller normal operation.
 * |        |          |1 = PDMA0 controller reset.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[3]     |EBIRST    |EBI Controller Reset (Write Protect)
 * |        |          |Set this bit to 1 will generate a reset signal to the EBI
 * |        |          |User needs to set this bit to 0 to release from the reset state.
 * |        |          |0 = EBI controller normal operation.
 * |        |          |1 = EBI controller reset.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[4]     |USBHRST   |USBH Controller Reset (Write Protect)
 * |        |          |Set this bit to 1 will generate a reset signal to the USBH
 * |        |          |User needs to set this bit to 0 to release from the reset state.
 * |        |          |0 = USBH controller normal operation.
 * |        |          |1 = USBH controller reset.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[7]     |CRCRST    |CRC Calculation Controller Reset (Write Protect)
 * |        |          |Set this bit to 1 will generate a reset signal to the CRC calculation controller
 * |        |          |User needs to set this bit to 0 to release from the reset state.
 * |        |          |0 = CRC calculation controller normal operation.
 * |        |          |1 = CRC calculation controller reset.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[12]    |CRPTRST   |CRYPTO Controller Reset (Write Protect)
 * |        |          |Setting this bit to 1 will generate a reset signal to the CRYPTO controller
 * |        |          |User needs to set this bit to 0 to release from the reset state.
 * |        |          |0 = CRYPTO controller normal operation.
 * |        |          |1 = CRYPTO controller reset.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[20]    |CANFD0RST |CANFD0 Controller Reset
 * |        |          |Setting this bit to 1 will generate a reset signal to the CANFD0 controller
 * |        |          |User needs to set this bit to 0 to release from the reset state.
 * |        |          |0 = CANFD0 controller normal operation.
 * |        |          |1 = CANFD0 controller reset.
 * |[21]    |CANFD1RST |CANFD1 Controller Reset
 * |        |          |Setting this bit to 1 will generate a reset signal to the CANFD1 controller
 * |        |          |User needs to set this bit to 0 to release from the reset state.
 * |        |          |0 = CANFD1 controller normal operation.
 * |        |          |1 = CANFD1 controller reset.
 * @var SYS_T::IPRST1
 * Offset: 0x0C  Peripheral Reset Control Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[1]     |GPIORST   |GPIO Controller Reset
 * |        |          |0 = GPIO controller normal operation.
 * |        |          |1 = GPIO controller reset.
 * |[2]     |TMR0RST   |Timer0 Controller Reset
 * |        |          |0 = Timer0 controller normal operation.
 * |        |          |1 = Timer0 controller reset.
 * |[3]     |TMR1RST   |Timer1 Controller Reset
 * |        |          |0 = Timer1 controller normal operation.
 * |        |          |1 = Timer1 controller reset.
 * |[4]     |TMR2RST   |Timer2 Controller Reset
 * |        |          |0 = Timer2 controller normal operation.
 * |        |          |1 = Timer2 controller reset.
 * |[5]     |TMR3RST   |Timer3 Controller Reset
 * |        |          |0 = Timer3 controller normal operation.
 * |        |          |1 = Timer3 controller reset.
 * |[7]     |ACMP01RST |ACMP01 Controller Reset
 * |        |          |0 = ACMP01 controller normal operation.
 * |        |          |1 = ACMP01 controller reset.
 * |[8]     |I2C0RST   |I2C0 Controller Reset
 * |        |          |0 = I2C0 controller normal operation.
 * |        |          |1 = I2C0 controller reset.
 * |[9]     |I2C1RST   |I2C1 Controller Reset
 * |        |          |0 = I2C1 controller normal operation.
 * |        |          |1 = I2C1 controller reset.
 * |[10]    |I2C2RST   |I2C2 Controller Reset
 * |        |          |0 = I2C2 controller normal operation.
 * |        |          |1 = I2C2 controller reset.`.
 * |[11]    |I2C3RST   |I2C3 Controller Reset
 * |        |          |0 = I2C3 controller normal operation.
 * |        |          |1 = I2C3 controller reset.
 * |[12]    |QSPI0RST  |Qual SPI0 Controller Reset
 * |        |          |0 = Qual SPI0 controller normal operation.
 * |        |          |1 = Qual SPI0 controller reset.
 * |[13]    |SPI0RST   |SPI0 Controller Reset
 * |        |          |0 = SPI0 controller normal operation.
 * |        |          |1 = SPI0 controller reset.
 * |[14]    |SPI1RST   |SPI1 Controller Reset
 * |        |          |0 = SPI1 controller normal operation.
 * |        |          |1 = SPI1 controller reset.
 * |[15]    |SPI2RST   |SPI2 Controller Reset
 * |        |          |0 = SPI2 controller normal operation.
 * |        |          |1 = SPI2 controller reset.
 * |[16]    |UART0RST  |UART0 Controller Reset
 * |        |          |0 = UART0 controller normal operation.
 * |        |          |1 = UART0 controller reset.
 * |[17]    |UART1RST  |UART1 Controller Reset
 * |        |          |0 = UART1 controller normal operation.
 * |        |          |1 = UART1 controller reset.
 * |[18]    |UART2RST  |UART2 Controller Reset
 * |        |          |0 = UART2 controller normal operation.
 * |        |          |1 = UART2 controller reset.
 * |[19]    |UART3RST  |UART3 Controller Reset
 * |        |          |0 = UART3 controller normal operation.
 * |        |          |1 = UART3 controller reset.
 * |[20]    |UART4RST  |UART4 Controller Reset
 * |        |          |0 = UART4 controller normal operation.
 * |        |          |1 = UART4 controller reset.
 * |[21]    |UART5RST  |UART5 Controller Reset
 * |        |          |0 = UART5 controller normal operation.
 * |        |          |1 = UART5 controller reset.
 * |[22]    |UART6RST  |UART6 Controller Reset
 * |        |          |0 = UART6 controller normal operation.
 * |        |          |1 = UART6 controller reset.
 * |[23]    |UART7RST  |UART7 Controller Reset
 * |        |          |0 = UART7 controller normal operation.
 * |        |          |1 = UART7 controller reset.
 * |[26]    |OTGRST    |OTG Controller Reset
 * |        |          |0 = OTG controller normal operation.
 * |        |          |1 = OTG controller reset.
 * |[27]    |USBDRST   |USBD Controller Reset
 * |        |          |0 = USBD controller normal operation.
 * |        |          |1 = USBD controller reset.
 * |[28]    |EADC0RST  |EADC0 Controller Reset
 * |        |          |0 = EADC0 controller normal operation.
 * |        |          |1 = EADC0 controller reset.
 * |[31]    |TRNGRST   |TRNG Controller Reset
 * |        |          |0 = TRNG controller normal operation.
 * |        |          |1 = TRNG controller reset.
 * @var SYS_T::IPRST2
 * Offset: 0x10  Peripheral Reset Control Register 2
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[6]     |SPI3RST   |SPI3 Controller Reset
 * |        |          |0 = SPI3 controller normal operation.
 * |        |          |1 = SPI3 controller reset.
 * |[8]     |USCI0RST  |USCI0 Controller Reset
 * |        |          |0 = USCI0 controller normal operation.
 * |        |          |1 = USCI0 controller reset.
 * |[9]     |USCI1RST  |USCI1 Controller Reset
 * |        |          |0 = USCI1 controller normal operation.
 * |        |          |1 = USCI1 controller reset.
 * |[11]    |WWDTRST   |WWDT Controller Reset
 * |        |          |0 = WWDT controller normal operation.
 * |        |          |1 = WWDT controller reset.
 * |[12]    |DACRST    |DAC Controller Reset
 * |        |          |0 = DAC controller normal operation.
 * |        |          |1 = DAC controller reset.
 * |[16]    |EPWM0RST  |EPWM0 Controller Reset
 * |        |          |0 = EPWM0 controller normal operation.
 * |        |          |1 = EPWM0 controller reset.
 * |[17]    |EPWM1RST  |EPWM1 Controller Reset
 * |        |          |0 = EPWM1 controller normal operation.
 * |        |          |1 = EPWM1 controller reset.
 * |[22]    |EQEI0RST  |EQEI0 Controller Reset
 * |        |          |0 = EQEI0 controller normal operation.
 * |        |          |1 = EQEI0 controller reset.
 * |[23]    |EQEI1RST  |EQEI1 Controller Reset
 * |        |          |0 = EQEI1 controller normal operation.
 * |        |          |1 = EQEI1 controller reset.
 * |[25]    |TKRST     |TK Controller Reset
 * |        |          |0 = TK controller normal operation.
 * |        |          |1 = TK controller reset.
 * |[26]    |ECAP0RST  |ECAP0 Controller Reset
 * |        |          |0 = ECAP0 controller normal operation.
 * |        |          |1 = ECAP0 controller reset.
 * |[27]    |ECAP1RST  |ECAP1 Controller Reset
 * |        |          |0 = ECAP1 controller normal operation.
 * |        |          |1 = ECAP1 controller reset.
 * @var SYS_T::BODCTL
 * Offset: 0x18  Brown-out Detector Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |BODEN     |Brown-out Detector Enable Bit (Write Protect)
 * |        |          |The default value is set by RRAM controller user configuration register CBODEN (CONFIG0 [19]).
 * |        |          |0 = Brown-out Detector function Disabled.
 * |        |          |1 = Brown-out Detector function Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[3]     |BODRSTEN  |Brown-out Reset Enable Bit (Write Protect)
 * |        |          |The default value is set by RRAM controller user configuration register CBORST(CONFIG0[20]) bit.
 * |        |          |0 = Brown-out "INTERRUPT" function Enabled.
 * |        |          |1 = Brown-out "RESET" function Enabled.
 * |        |          |Note 1: While the Brown-out Detector function is enabled (BODEN high) and BOD reset function is enabled (BODRSTEN high), BOD will assert a signal to reset chip when the detected voltage is lower than the threshold (BODOUT high).
 * |        |          |While the BOD function is enabled (BODEN high) and BOD interrupt function is enabled (BODRSTEN low), BOD will assert an interrupt if BODOUT is high
 * |        |          |BOD interrupt will keep till to the BODEN set to 0
 * |        |          |BOD interrupt can be blocked by disabling the NVIC BOD interrupt or disabling BOD function (set BODEN low).
 * |        |          |Note 2: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[4]     |BODIF     |Brown-out Detector Interrupt Flag
 * |        |          |0 = Brown-out Detector does not detect any voltage draft at AVDD down through or up through the voltage of BODVL setting.
 * |        |          |1 = When Brown-out Detector detects the AVDD is dropped down through the voltage of BODVL setting or the AVDD is raised up through the voltage of BODVL setting, this bit is set to 1 and the brown-out interrupt is requested if brown-out interrupt is enabled.
 * |        |          |Note: Write 1 to clear this bit to 0.
 * |[5]     |BODLPM    |Brown-out Detector Low Power Mode (Write Protect)
 * |        |          |0 = BOD operate in normal mode (default).
 * |        |          |1 = BOD Low Power mode Enabled.
 * |        |          |Note 1: The BOD consumes about 100uA in normal mode, the low power mode can reduce the current to about 1/10 but slow the BOD response.
 * |        |          |Note 2: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[6]     |BODOUT    |Brown-out Detector Output Status
 * |        |          |0 = Brown-out Detector output status is 0.
 * |        |          |It means the detected voltage is higher than BODVL setting or BODEN is 0.
 * |        |          |1 = Brown-out Detector output status is 1.
 * |        |          |It means the detected voltage is lower than BODVL setting
 * |        |          |If the BODEN is 0, BOD function disabled, this bit always responds 0000.
 * |[7]     |LVREN     |Low Voltage Reset Enable Bit (Write Protect)
 * |        |          |The LVR function resets the chip when the input power voltage is lower than LVR circuit setting
 * |        |          |LVR function is enabled by default.
 * |        |          |0 = Low Voltage Reset function Disabled.
 * |        |          |1 = Low Voltage Reset function Enabled.
 * |        |          |Note 1: After enabling the bit, the LVR function will be active with 100us delay for LVR output stable (default).
 * |        |          |Note 2: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[10:8]  |BODDGSEL  |Brown-out Detector Output De-glitch Time Select (Write Protect)
 * |        |          |000 = BOD output is sampled by RC10K clock.
 * |        |          |001 = 3~4 system clock (HCLK).
 * |        |          |010 = 7~8 system clock (HCLK).
 * |        |          |011 = 15~16 system clock (HCLK).
 * |        |          |100 = 31~32 system clock (HCLK).
 * |        |          |101 = 63~64 system clock (HCLK).
 * |        |          |110 = 127~128 system clock (HCLK).
 * |        |          |111 = 255~256 system clock (HCLK).
 * |        |          |Note 1: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |        |          |Note 2: In NPD3/NPD4/NPD5/SPD0~2 mode, BOD output is sampled by RC10K clock.
 * |[14:12] |LVRDGSEL  |LVR Output De-glitch Time Select (Write Protect)
 * |        |          |000 = Without de-glitch function.
 * |        |          |001 = 4 system clock (HCLK).
 * |        |          |010 = 8 system clock (HCLK).
 * |        |          |011 = 16 system clock (HCLK).
 * |        |          |100 = 32 system clock (HCLK).
 * |        |          |101 = 64 system clock (HCLK).
 * |        |          |110 = 128 system clock (HCLK).
 * |        |          |111 = 256 system clock (HCLK).
 * |        |          |Note 1: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |        |          |Note 2: In NPD3/NPD4/NPD5/SPD0~2 mode, LVR output is sampled by RC10K clock.
 * |[15]    |LVRRDY    |LVR Enable Ready Flag (Read Only)
 * |        |          |0 = LVR disabled and not ready.
 * |        |          |1 = LVR enabled and ready.
 * |[19:16] |BODVL     |Brown-out Detector Threshold Voltage Selection (Write Protect)
 * |        |          |The default value is set by RRAM controller user configuration register CBOV ({1'b1, CONFIG0 [23:21]}).
 * |        |          |0000 = Brown-Out Detector threshold voltage is 1.5V.
 * |        |          |1000 = Brown-Out Detector threshold voltage is 1.6V.
 * |        |          |1001 = Brown-Out Detector threshold voltage is 1.8V.
 * |        |          |1010 = Brown-Out Detector threshold voltage is 2.0V.
 * |        |          |1011 = Brown-Out Detector threshold voltage is 2.2V.
 * |        |          |1100 = Brown-Out Detector threshold voltage is 2.4V.
 * |        |          |1101 = Brown-Out Detector threshold voltage is 2.6V.
 * |        |          |1110 = Brown-Out Detector threshold voltage is 2.8V.
 * |        |          |1111 = Brown-Out Detector threshold voltage is 3.0V.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * @var SYS_T::IVSCTL
 * Offset: 0x1C  Internal Voltage Source Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |VTEMPEN   |Temperature Sensor Enable Bit
 * |        |          |This bit is used to enable/disable temperature sensor function.
 * |        |          |0 = Temperature sensor function Disabled (default).
 * |        |          |1 = Temperature sensor function Enabled.
 * |[1]     |VBATUGEN  |VBAT Unity Gain Buffer Enable Bit
 * |        |          |This bit is used to enable/disable VBAT unity gain buffer function.
 * |        |          |0 = VBAT unity gain buffer function Disabled (default).
 * |        |          |1 = VBAT unity gain buffer function Enabled.
 * |        |          |Note: After this bit is set to 1, the value of VBAT unity gain buffer output voltage can be obtained from ADC conversion result
 * |[2]     |AVDDDIV4EN|AVDD divide 4 Enable Bit
 * |        |          |This bit is used to enable/disable AVDD divide 4 function.
 * |        |          |0 = AVDD divide 4 function Disabled (default).
 * |        |          |1 = AVDD divide 4 function Enabled.
 * |        |          |Note: After this bit is set to 1, the value of AVDD divide 4 output voltage can be obtained from ADC conversion result
 * |[4]     |VTEMPSEL  |Temperature Sensor Slope Select Bit
 * |        |          |This bit is used to select temperature sensor slope trend.
 * |        |          |0 = Temperature sensor negative temperature coefficient slope.
 * |        |          |1 = Temperature sensor positive temperature coefficient slope.
 * |[7]     |ADCCSEL   |ADC Controller Select Bit
 * |        |          |This bit is used to select ADC controller.
 * |        |          |0 = EADC0 controlled is active.
 * |        |          |1 = LPADC0 controller is active.
 * @var SYS_T::IPRST3
 * Offset: 0x20  Peripheral Reset Control Register 3
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7]     |ACMP2RST  |ACMP2 Controller Reset
 * |        |          |0 = ACMP2 controller normal operation.
 * |        |          |1 = ACMP2 controller reset.
 * |[8]     |PWM0RST   |PWM0 Controller Reset
 * |        |          |0 = PWM0 controller normal operation.
 * |        |          |1 = PWM0 controller reset.
 * |[9]     |PWM1RST   |PWM1 Controller Reset
 * |        |          |0 = PWM1 controller normal operation.
 * |        |          |1 = PWM1 controller reset.
 * |[15]    |UTCPD0RST |UTCPD0 Controller Reset
 * |        |          |0 = UTCPD0 controller normal operation.
 * |        |          |1 = UTCPD0 controller reset.
 * @var SYS_T::VREFCTL
 * Offset: 0x28  VREF Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |VREFCTL   |VREF Control Bits (Write Protect)
 * |        |          |00000 = VREF is from external pin.
 * |        |          |00011 = VREF is internal 1.6V.
 * |        |          |00111 = VREF is internal 2.0V.
 * |        |          |01011 = VREF is internal 2.5V.
 * |        |          |01111 = VREF is internal 3.0V.
 * |        |          |Others = Reserved.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |[7:6]   |PRELOAD_SEL|Pre-load Timing Selection (Write Protect)
 * |        |          |00 = pre-load time is 60us for 0.1uF Capacitor.
 * |        |          |01 = pre-load time is 310us for 1uF Capacitor.
 * |        |          |10 = pre-load time is 1270us for 4.7uF Capacitor.
 * |        |          |11 = pre-load time is 2650us for 10uF Capacitor.
 * |[24]    |VBGFEN    |Chip Internal Voltage Band-gap Force Enable Bit (Write Only)
 * |        |          |0 = Chip internal voltage band-gap controlled by ADC/ACMP/USB PHY if source selected.
 * |        |          |1 = Chip internal voltage band-gap force enable.
 * @var SYS_T::USBPHY
 * Offset: 0x2C  USB PHY Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[1:0]   |USBROLE   |USB Role Option (Write Protect)
 * |        |          |These two bits are used to select the role of USB.
 * |        |          |00 = Standard USB Device mode.
 * |        |          |01 = Standard USB Host mode.
 * |        |          |10 = ID dependent mode.
 * |        |          |11 = On-The-Go device mode.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |[2]     |SBO       |Note: This bit must always be kept 1 If set to 0, the result is unpredictable
 * |[8]     |USBEN     |USB PHY Enable Bit
 * |        |          |This bit is used to enable/disable USB PHY.
 * |        |          |0 = USB PHY Disabled.
 * |        |          |1 = USB PHY Enabled.
 * @var SYS_T::UTCPDCTL
 * Offset: 0x30  UTCPD Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |IOMODE    |UTCPD0 as I/O mode
 * |        |          |This bit is used to define UTCPD0 CCx and CCDBx function
 * |        |          |0 = Pin as UTCPD0 CCx and CCDBx function.
 * |        |          |1 = Pin as general I/O function.
 * |[1]     |POREN0    |UTCPD0 Power-on Enable Bit
 * |        |          |0 = UTCPD0 PHY in reset mode.
 * |        |          |1 = UTCPD0 PHY in normal mode.
 * |        |          |Note: user should set POREN0 to 1 after IOMODE is setting down.
 * |[10:8]  |PD0VBDSS  |UTCPD0 VBUS Detect Source Select
 * |        |          |UTCPD0 controller need a VBUS detect result to note if VBUS is connected
 * |        |          |For SPD0~2/NPD3/NPD4/NPD5 usage, ACMP can be another voltage detect method to detect VBUS pulg in or out
 * |        |          |This bit field is used to select UTCPD0 VBUS detect source
 * |        |          |And the selected result is VBDETSW0
 * |        |          |000 = UTCPD0 VBUS detect source from UTCPD0 PHY.
 * |        |          |001 = UTCPD0 VBUS detect source from ACMP0 output.
 * |        |          |010 = UTCPD0 VBUS detect source from ACMP1 output.
 * |        |          |011 = UTCPD0 VBUS detect source from ACMP2 output.
 * |        |          |Others = Reserved.
 * |        |          |Note: Before use UTCPD0 function, PDVBDETS should be set and cannot change during UTCPD0 operating.
 * |[12]    |UDVBDETS  |UDC11 VBUS Detect Source Select
 * |        |          |0 = UDC11 VBUS detect source from OTGPHY.
 * |        |          |1 = UDC11 VBUS detect source from VBDETSW0.
 * |        |          |Note: Before use UDC11 function, UDVBDETS should be set and cannot change during UDC11 operating.
 * @var SYS_T::GPA_MFOS
 * Offset: 0x80  GPIOA Multiple Function Output Select Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |MFOS0     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[1]     |MFOS1     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[2]     |MFOS2     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[3]     |MFOS3     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[4]     |MFOS4     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[5]     |MFOS5     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[6]     |MFOS6     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[7]     |MFOS7     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[8]     |MFOS8     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[9]     |MFOS9     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[10]    |MFOS10    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[11]    |MFOS11    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[12]    |MFOS12    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[13]    |MFOS13    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[14]    |MFOS14    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[15]    |MFOS15    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * @var SYS_T::GPB_MFOS
 * Offset: 0x84  GPIOB Multiple Function Output Select Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |MFOS0     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[1]     |MFOS1     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[2]     |MFOS2     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[3]     |MFOS3     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[4]     |MFOS4     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[5]     |MFOS5     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[6]     |MFOS6     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[7]     |MFOS7     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[8]     |MFOS8     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[9]     |MFOS9     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[10]    |MFOS10    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[11]    |MFOS11    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[12]    |MFOS12    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[13]    |MFOS13    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[14]    |MFOS14    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[15]    |MFOS15    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * @var SYS_T::GPC_MFOS
 * Offset: 0x88  GPIOC Multiple Function Output Select Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |MFOS0     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[1]     |MFOS1     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[2]     |MFOS2     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[3]     |MFOS3     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[4]     |MFOS4     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[5]     |MFOS5     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[6]     |MFOS6     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[7]     |MFOS7     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[8]     |MFOS8     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[9]     |MFOS9     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[10]    |MFOS10    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[11]    |MFOS11    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[12]    |MFOS12    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[13]    |MFOS13    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[14]    |MFOS14    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[15]    |MFOS15    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * @var SYS_T::GPD_MFOS
 * Offset: 0x8C  GPIOD Multiple Function Output Select Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |MFOS0     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[1]     |MFOS1     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[2]     |MFOS2     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[3]     |MFOS3     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[4]     |MFOS4     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[5]     |MFOS5     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[6]     |MFOS6     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[7]     |MFOS7     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[8]     |MFOS8     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[9]     |MFOS9     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[10]    |MFOS10    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[11]    |MFOS11    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[12]    |MFOS12    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[13]    |MFOS13    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[14]    |MFOS14    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[15]    |MFOS15    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * @var SYS_T::GPE_MFOS
 * Offset: 0x90  GPIOE Multiple Function Output Select Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |MFOS0     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[1]     |MFOS1     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[2]     |MFOS2     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[3]     |MFOS3     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[4]     |MFOS4     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[5]     |MFOS5     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[6]     |MFOS6     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[7]     |MFOS7     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[8]     |MFOS8     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[9]     |MFOS9     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[10]    |MFOS10    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[11]    |MFOS11    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[12]    |MFOS12    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[13]    |MFOS13    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[14]    |MFOS14    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[15]    |MFOS15    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * @var SYS_T::GPF_MFOS
 * Offset: 0x94  GPIOF Multiple Function Output Select Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |MFOS0     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[1]     |MFOS1     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[2]     |MFOS2     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[3]     |MFOS3     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[4]     |MFOS4     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[5]     |MFOS5     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[6]     |MFOS6     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[7]     |MFOS7     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[8]     |MFOS8     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[9]     |MFOS9     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[10]    |MFOS10    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[11]    |MFOS11    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[12]    |MFOS12    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[13]    |MFOS13    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[14]    |MFOS14    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[15]    |MFOS15    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * @var SYS_T::GPG_MFOS
 * Offset: 0x98  GPIOG Multiple Function Output Select Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |MFOS0     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[1]     |MFOS1     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[2]     |MFOS2     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[3]     |MFOS3     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[4]     |MFOS4     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[5]     |MFOS5     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[6]     |MFOS6     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[7]     |MFOS7     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[8]     |MFOS8     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[9]     |MFOS9     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[10]    |MFOS10    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[11]    |MFOS11    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[12]    |MFOS12    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[13]    |MFOS13    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[14]    |MFOS14    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[15]    |MFOS15    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * @var SYS_T::GPH_MFOS
 * Offset: 0x9C  GPIOH Multiple Function Output Select Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |MFOS0     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[1]     |MFOS1     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[2]     |MFOS2     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[3]     |MFOS3     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[4]     |MFOS4     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[5]     |MFOS5     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[6]     |MFOS6     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[7]     |MFOS7     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[8]     |MFOS8     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[9]     |MFOS9     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[10]    |MFOS10    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[11]    |MFOS11    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[12]    |MFOS12    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[13]    |MFOS13    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[14]    |MFOS14    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * |[15]    |MFOS15    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
 * |        |          |This bit used to select multiple function pin output mode type for Px.n pin
 * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
 * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
 * |        |          |Note: For more information about Px.n, please refer to the "PIN CONFIGURATION" chapter.
 * @var SYS_T::MIRCTCTL
 * Offset: 0xB0  MIRC1M Trim Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[1:0]   |FREQSEL   |Trim Frequency Selection
 * |        |          |This field indicates the target frequency of 1 MHz internal high speed RC oscillator (MIRC) auto trim.
 * |        |          |During auto trim operation, if clock error detected with CESTOPEN is set to 1 or trim retry limitation count reached, this field will be cleared to 00 automatically.
 * |        |          |00 = Disable MIRC auto trim function.
 * |        |          |01 = Enable MIRC auto trim function and trim MIRC to 1 MHz.
 * |        |          |10 = Reserved.
 * |        |          |11 = Reserved.
 * |[3:2]   |ACCURSEL  |Trim Accuracy Selection
 * |        |          |This field indicates the target frequency accuracy of 1 MHz internal high speed RC oscillator (MIRC) auto trim.
 * |        |          |00 = Accuracy is +-0.25% deviation within all temperature ranges.
 * |        |          |01 = Accuracy is +-0.50% deviation within all temperature ranges.
 * |        |          |10 = Accuracy is +-0.75% deviation within all temperature ranges.
 * |        |          |11 = Accuracy is +-1% deviation within all temperature ranges.
 * |[5:4]   |LOOPSEL   |Trim Calculation Loop Selection
 * |        |          |This field defines that trim value calculation is based on how many reference clocks.
 * |        |          |00 = Trim value calculation is based on average difference in 32 clocks of reference clock.
 * |        |          |01 = Trim value calculation is based on average difference in 64 clocks of reference clock.
 * |        |          |10 = Trim value calculation is based on average difference in 96 clocks of reference clock.
 * |        |          |11 = Trim value calculation is based on average difference in 128 clocks of reference clock.
 * |        |          |Note: For example, if LOOPSEL is set as 00, auto trim circuit will calculate trim value based on the average frequency difference in 4 clocks of reference clock.
 * |[7:6]   |RETRYCNT  |Trim Value Update Limitation Count
 * |        |          |This field defines that how many times the auto trim circuit will try to update the MIRC trim value before the frequency of MIRC locked.
 * |        |          |Once the MIRC locked, the internal trim value update counter will be reset.
 * |        |          |If the trim value update counter reached this limitation value and frequency of MIRC still doesn't lock, the auto trim operation will be disabled and FREQSEL will be cleared to 00.
 * |        |          |00 = Trim retry count limitation is 64 loops.
 * |        |          |01 = Trim retry count limitation is 128 loops.
 * |        |          |10 = Trim retry count limitation is 256 loops.
 * |        |          |11 = Trim retry count limitation is 512 loops.
 * |[8]     |CESTOPEN  |Clock Error Stop Enable Bit
 * |        |          |0 = The trim operation is keep going if clock is inaccuracy.
 * |        |          |1 = The trim operation is stopped if clock is inaccuracy.
 * |[9]     |BOUNDEN   |Boundary Enable Bit
 * |        |          |0 = Boundary function Disabled.
 * |        |          |1 = Boundary function Enabled.
 * |[10]    |REFCKSEL  |Reference Clock Selection
 * |        |          |0 = MIRC trim reference clock is from LXT (32.768 kHz).
 * |        |          |1 = Reserved.
 * |        |          |Note: MIRC trim reference clock is 20 kHz in test mode.
 * |[20:16] |BOUNDARY  |Boundary Selection
 * |        |          |Fill the boundary range from 0x1 to 0x31, 0x0 is reserved.
 * |        |          |Note: This field is effective only when the BOUNDEN(SYS_MIRCTRIMCTL[9]) is enabled.
 * @var SYS_T::MIRCTIEN
 * Offset: 0xB4  MIRC1M Trim Interrupt Enable Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[1]     |TFAILIEN  |Trim Failure Interrupt Enable Bit
 * |        |          |This bit controls if an interrupt will be triggered while MIRC trim value update limitation count reached and MIRC frequency still not locked on target frequency set by FREQSEL(SYS_MIRCTCTL[1:0]).
 * |        |          |If this bit is high and TFAILIF(SYS_MIRCTISTS[1]) is set during auto trim operation, an interrupt will be triggered to notify that MIRC trim value update limitation count was reached.
 * |        |          |0 = Disable TFAILIF(SYS_MIRCTISTS[1]) status to trigger an interrupt to CPU.
 * |        |          |1 = Enable TFAILIF(SYS_MIRCTISTS[1]) status to trigger an interrupt to CPU.
 * |[2]     |CLKEIEN   |Clock Error Interrupt Enable Bit
 * |        |          |This bit controls if CPU would get an interrupt while clock is inaccuracy during auto trim operation.
 * |        |          |If this bit is set to1, and CLKERRIF(SYS_MIRCTISTS[2]) is set during auto trim operation, an interrupt will be triggered to notify the clock frequency is inaccuracy.
 * |        |          |0 = Disable CLKERRIF(SYS_MIRCTISTS[2]) status to trigger an interrupt to CPU.
 * |        |          |1 = Enable CLKERRIF(SYS_MIRCTISTS[2]) status to trigger an interrupt to CPU.
 * @var SYS_T::MIRCTISTS
 * Offset: 0xB8  MIRC1M Trim Interrupt Status Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |FREQLOCK  |MIRC Frequency Lock Status
 * |        |          |This bit indicates the MIRC frequency is locked.
 * |        |          |This is a status bit and doesn't trigger any interrupt
 * |        |          |Write 1 to clear this to 0
 * |        |          |This bit will be set automatically, if the frequency is lock and the RC_TRIM is enabled.
 * |        |          |0 = The internal high-speed oscillator frequency doesn't lock at 1 MHz yet.
 * |        |          |1 = The internal high-speed oscillator frequency locked at 1 MHz.
 * |[1]     |TFAILIF   |Trim Failure Interrupt Status
 * |        |          |This bit indicates that MIRC trim value update limitation count reached and the MIRC clock frequency still doesn't be locked
 * |        |          |Once this bit is set, the auto trim operation stopped and FREQSEL(SYS_MIRCTCTL[1:0]) will be cleared to 00 by hardware automatically.
 * |        |          |If this bit is set and TFAILIEN(SYS_MIRCTIEN[1]) is high, an interrupt will be triggered to notify that MIRC trim value update limitation count was reached
 * |        |          |Write 1 to clear this to 0.
 * |        |          |0 = Trim value update limitation count does not reach.
 * |        |          |1 = Trim value update limitation count reached and MIRC frequency still not locked.
 * |[2]     |CLKERRIF  |Clock Error Interrupt Status
 * |        |          |When the frequency of 32.768 kHz external low speed crystal oscillator (LXT) or 1 MHz internal high speed RC oscillator (MIRC) is shift larger to unreasonable value, this bit will be set and to be an indicate that clock frequency is inaccuracy
 * |        |          |Once this bit is set to 1, the auto trim operation stopped and FREQSEL(SYS_MIRCTCL[1:0]) will be cleared to 00 by hardware automatically if CESTOPEN(SYS_MIRCTCTL[8]) is set to 1.
 * |        |          |If this bit is set and CLKEIEN(SYS_MIRCTIEN[2]) is high, an interrupt will be triggered to notify the clock frequency is inaccuracy
 * |        |          |Write 1 to clear this to 0.
 * |        |          |0 = Clock frequency is accuracy.
 * |        |          |1 = Clock frequency is inaccuracy.
 * |[3]     |OVBDIF    |Over Boundary Status
 * |        |          |When the over boundary function is set, if there occurs the over boundary condition, this flag will be set.
 * |        |          |0 = Over boundary coundition did not occur.
 * |        |          |1 = Over boundary coundition occurred.
 * |        |          |Note 1: Write 1 to clear this flag.
 * @var SYS_T::SRAM_INTCTL
 * Offset: 0xC0  System SRAM Interrupt Enable Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |PERRIEN   |SRAM Parity Check Error Interrupt Enable Bit
 * |        |          |0 = SRAM parity check error interrupt Disabled.
 * |        |          |1 = SRAM parity check error interrupt Enabled.
 * @var SYS_T::SRAM_STATUS
 * Offset: 0xC4  System SRAM Parity Error Status Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |PERRIF    |SRAM Parity Check Error Flag
 * |        |          |This bit indicates the System SRAM parity error occurred. Write 1 to clear this to 0.
 * |        |          |0 = No System SRAM parity error.
 * |        |          |1 = System SRAM parity error occur.
 * @var SYS_T::SRAM_ERRADDR
 * Offset: 0xC8  System SRAM Parity Check Error Address Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[31:0]  |ERRADDR   |System SRAM Parity Error Address
 * |        |          |This register shows system SRAM parity error byte address.
 * @var SYS_T::SRAM_BISTCTL
 * Offset: 0xD0  System SRAM BIST Test Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |SRBIST0   |SRAM Bank0 BIST Enable Bit (Write Protect)
 * |        |          |This bit enables BIST test for SRAM bank0.
 * |        |          |0 = system SRAM bank0 BIST Disabled.
 * |        |          |1 = system SRAM bank0 BIST Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[1]     |SRBIST1   |SRAM Bank1 BIST Enable Bit (Write Protect)
 * |        |          |This bit enables BIST test for SRAM bank1.
 * |        |          |0 = system SRAM bank1 BIST Disabled.
 * |        |          |1 = system SRAM bank1 BIST Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[2]     |CRBIST    |CACHE BIST Enable Bit (Write Protect)
 * |        |          |This bit enables BIST test for CACHE RAM.
 * |        |          |0 = system CACHE BIST Disabled.
 * |        |          |1 = system CACHE BIST Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[3]     |CANFDBIST |CANFDx BIST Enable Bit (Write Protect)
 * |        |          |This bit enables BIST test for CANFDx RAM.
 * |        |          |0 = system CANFDx BIST Disabled.
 * |        |          |1 = system CANFDx BIST Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[4]     |USBBIST   |USB BIST Enable Bit (Write Protect)
 * |        |          |This bit enables BIST test for USB RAM.
 * |        |          |0 = system USB BIST Disabled.
 * |        |          |1 = system USB BIST Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * |[11]    |LPSRBIST  |Low Power SRAM BIST Enable Bit (Write Protect)
 * |        |          |This bit enables BIST test for LPSRAM.
 * |        |          |0 = system LPSRAM BIST Disabled.
 * |        |          |1 = system LPSRAM BIST Enabled.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * @var SYS_T::SRAM_BISTSTS
 * Offset: 0xD4  System SRAM BIST Test Status Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |SRBISTEF0 |1st System SRAM BIST Fail Flag
 * |        |          |0 = 1st system SRAM BIST test pass.
 * |        |          |1 = 1st system SRAM BIST test fail.
 * |[1]     |SRBISTEF1 |2nd System SRAM BIST Fail Flag
 * |        |          |0 = 2nd system SRAM BIST test pass.
 * |        |          |1 = 2nd system SRAM BIST test fail.
 * |[2]     |CRBISTEF  |CACHE SRAM BIST Fail Flag
 * |        |          |0 = System CACHE RAM BIST test pass.
 * |        |          |1 = System CACHE RAM BIST test fail.
 * |[3]     |CANBEF    |CAN SRAM BIST Fail Flag
 * |        |          |0 = CAN SRAM BIST test pass.
 * |        |          |1 = CAN SRAM BIST test fail.
 * |[4]     |USBBEF    |USB SRAM BIST Fail Flag
 * |        |          |0 = USB SRAM BIST test pass.
 * |        |          |1 = USB SRAM BIST test fail.
 * |[11]    |LPSRBEF   |Low Power SRAM BIST Fail Flag
 * |        |          |0 = LPSRAM BIST test pass.
 * |        |          |1 = LPSRAM BIST test fail.
 * |[16]    |SRBEND0   |1st SRAM BIST Test Finish
 * |        |          |0 = 1st system SRAM BIST active.
 * |        |          |1 =1st system SRAM BIST finish.
 * |[17]    |SRBEND1   |2nd SRAM BIST Test Finish
 * |        |          |0 = 2nd system SRAM BIST is active.
 * |        |          |1 = 2nd system SRAM BIST finish.
 * |[18]    |CRBEND    |CACHE SRAM BIST Test Finish
 * |        |          |0 = System CACHE RAM BIST is active.
 * |        |          |1 = System CACHE RAM BIST test finish.
 * |[19]    |CANBEND   |CAN SRAM BIST Test Finish
 * |        |          |0 = CAN SRAM BIST is active.
 * |        |          |1 = CAN SRAM BIST test finish.
 * |[20]    |USBBEND   |USB SRAM BIST Test Finish
 * |        |          |0 = USB SRAM BIST is active.
 * |        |          |1 = USB SRAM BIST test finish.
 * |[27]    |LPSRBEND  |Low Power SRAM BIST Test Finish
 * |        |          |0 = LPSRAM BIST is active.
 * |        |          |1 = LPSRAM BIST test finish.
 * @var SYS_T::SRAMPC0
 * Offset: 0xDC  SRAM Power Mode Control Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[2:0]   |SRAM0PM   |SRAM Group 0 Power Mode Select (Write Protect)
 * |        |          |This field can control SRAM group0 in bank0 (8k) power mode for range 0x2000_0000 - 0x2000_1FFF.
 * |        |          |000 = Normal mode.
 * |        |          |010 = Retention mode.
 * |        |          |011 = Shut down mode (No Retention).
 * |        |          |Other = Reserved.
 * |        |          |Note 1: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |        |          |Note 2: Mode change need to wait PCBUSY=0.
 * |        |          |Note 3: Only support from normal mode to each Power-down mode and each Power-down mode to normal mode, not mode change between Power-down mode.
 * |        |          |Note 4: Power saving priority first
 * |        |          |If CLK_PMUCTL setting SRAM at retention mode but SYS_SRAMPC0 setting to shut mode, SRAM go to shut down mode.
 * |[6:4]   |SRAM1PM   |SRAM Group 1 Power Mode Select (Write Protect)
 * |        |          |This field can control SRAM group1 in bank0 (16k) power mode for range 0x2000_2000 - 0x2000_5FFF.
 * |        |          |000 = Normal mode.
 * |        |          |010 = Retention mode.
 * |        |          |011 = Shut down mode (No Retention).
 * |        |          |Other = Reserved.
 * |        |          |Note 1: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |        |          |Note 2: Mode change need to wait PCBUSY=0.
 * |        |          |Note 3: Only support from normal mode to each Power-down mode and each Power-down mode to normal mode, not mode change between Power-down mode.
 * |        |          |Note 4: Power saving priority first
 * |        |          |If CLK_PMUCTL setting SRAM at retention mode but SYS_SRAMPC0 setting to shut mode, SRAM go to shut down mode.
 * |[10:8]  |SRAM2PM   |SRAM Group 2 Power Mode Select (Write Protect)
 * |        |          |This field can control SRAM group2 in bank0 (16k) power mode for range 0x2000_6000 - 0x2000_9FFF.
 * |        |          |000 = Normal mode.
 * |        |          |010 = Retention mode.
 * |        |          |011 = Shut down mode (No Retention).
 * |        |          |Other = Reserved.
 * |        |          |Note 1: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |        |          |Note 2: Mode change need to wait PCBUSY=0.
 * |        |          |Note 3: Only support from normal mode to each Power-down mode and each Power-down mode to normal mode, not mode change between Power-down mode.
 * |        |          |Note 4: Power saving priority first
 * |        |          |If CLK_PMUCTL setting SRAM at retention mode but SYS_SRAMPC0 setting to shut mode, SRAM go to shut down mode.
 * |[14:12] |SRAM3PM   |SRAM Group 3 Power Mode Select (Write Protect)
 * |        |          |This field can control SRAM group 3 in bank1 (32k) power mode for range 0x2000_A000 - 0x2001_1FFF.
 * |        |          |000 = Normal mode.
 * |        |          |010 = Retention mode.
 * |        |          |011 = Shut down mode (No Retention).
 * |        |          |Other = Reserved.
 * |        |          |Note 1: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |        |          |Note 2: Mode change need to wait PCBUSY=0.
 * |        |          |Note 3: Only support from normal mode to each Power-down mode and each Power-down mode to normal mode, not mode change between Power-down mode.
 * |        |          |Note 4: Power saving priority first
 * |        |          |If CLK_PMUCTL setting SRAM at retention mode but SYS_SRAMPC0 setting to shut mode, SRAM go to shut down mode.
 * |[18:16] |SRAM4PM   |SRAM Group 4 Power Mode Select (Write Protect)
 * |        |          |This field can control SRAM group 4 in bank1 (32k) power mode for range 0x2001_2000 - 0x2001_9FFF.
 * |        |          |000 = Normal mode.
 * |        |          |010 = Retention mode.
 * |        |          |011 = Shut down mode (No Retention).
 * |        |          |Other = Reserved.
 * |        |          |Note 1: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |        |          |Note 2: Mode change need to wait PCBUSY=0.
 * |        |          |Note 3: Only support from normal mode to each Power-down mode and each Power-down mode to normal mode, not mode change between Power-down mode.
 * |        |          |Note 4: Power saving priority first
 * |        |          |If CLK_PMUCTL setting SRAM at retention mode but SYS_SRAMPC0 setting to shut mode, SRAM go to shut down mode.
 * |[22:20] |SRAM5PM   |SRAM Group 5 Power Mode Select (Write Protect)
 * |        |          |This field can control SRAM group 5 in bank1 (64k) power mode for range 0x2001_A000 - 0x2002_9FFF.
 * |        |          |000 = Normal mode.
 * |        |          |010 = Retention mode.
 * |        |          |011 = Shut down mode (No Retention).
 * |        |          |Other = Reserved.
 * |        |          |Note 1: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |        |          |Note 2: Mode change need to wait PCBUSY=0.
 * |        |          |Note 3: Only support from normal mode to each Power-down mode and each Power-down mode to normal mode, not mode change between Power-down mode.
 * |        |          |Note 4: Power saving priority first
 * |        |          |If CLK_PMUCTL setting SRAM at retention mode but SYS_SRAMPC0 setting to shut mode, SRAM go to shut down mode.
 * |[26:24] |SRAM6PM   |SRAM Group 6 Power Mode Select (Write Protect)
 * |        |          |This field can control SRAM group 6 in bank2 (8k) power mode for range 0x2800_0000 - 0x2800_1FFF.
 * |        |          |000 = Normal mode.
 * |        |          |010 = Retention mode.
 * |        |          |011 = Shut down mode (No Retention).
 * |        |          |Other = Reserved.
 * |        |          |Note 1: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |        |          |Note 2: Mode change need to wait PCBUSY=0.
 * |        |          |Note 3: Only support from normal mode to each Power-down mode and each Power-down mode to normal mode, not mode change between Power-down mode.
 * |        |          |Note 4: Power saving priority first
 * |        |          |If CLK_PMUCTL setting SRAM at retention mode but SYS_SRAMPC0 setting to shut mode, SRAM go to shut down mode.
 * |        |          |Note 5: Beforce setting SRAM6PM, set LPSRAMDR(LPSCC_SRAMCTL[4])=0 firstly.
 * |[31]    |PCBUSY    |Power Changing Busy Flag (Read Only)
 * |        |          |This bit indicate SRAM power changing.
 * |        |          |0 = SRAM power change finish.
 * |        |          |1 = SRAM power changing.
 * @var SYS_T::HIRCTCTL
 * Offset: 0xE4  HIRC48M Trim Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[1:0]   |FREQSEL   |Trim Frequency Selection
 * |        |          |This field indicates the target frequency of 48 MHz internal high speed RC oscillator (HIRC) auto trim.
 * |        |          |During auto trim operation, if clock error detected with CESTOPEN is set to 1 or trim retry limitation count reached, this field will be cleared to 00 automatically.
 * |        |          |00 = Disable HIRC auto trim function.
 * |        |          |01 = Enable HIRC auto trim function and trim HIRC to 48 MHz.
 * |        |          |10 = Reserved.
 * |        |          |11 = Reserved.
 * |[3:2]   |ACCURSEL  |Trim Accuracy Selection
 * |        |          |This field indicates the target frequency accuracy of 48 MHz internal high speed RC oscillator (HIRC) auto trim.
 * |        |          |00 = Accuracy is +-0.25% deviation within all temperature ranges.
 * |        |          |01 = Accuracy is +-0.50% deviation within all temperature ranges.
 * |        |          |10 = Accuracy is +-0.75% deviation within all temperature ranges.
 * |        |          |11 = Accuracy is +-1% deviation within all temperature ranges.
 * |[5:4]   |LOOPSEL   |Trim Calculation Loop Selection
 * |        |          |This field defines that trim value calculation is based on how many reference clocks.
 * |        |          |00 = Trim value calculation is based on average difference in 4 clocks of reference clock.
 * |        |          |01 = Trim value calculation is based on average difference in 8 clocks of reference clock.
 * |        |          |10 = Trim value calculation is based on average difference in 16 clocks of reference clock.
 * |        |          |11 = Trim value calculation is based on average difference in 32 clocks of reference clock.
 * |        |          |Note: For example, if LOOPSEL is set as 00, auto trim circuit will calculate trim value based on the average frequency difference in 4 clocks of reference clock.
 * |[7:6]   |RETRYCNT  |Trim Value Update Limitation Count
 * |        |          |This field defines that how many times the auto trim circuit will try to update the HIRC trim value before the frequency of HIRC locked.
 * |        |          |Once the HIRC locked, the internal trim value update counter will be reset.
 * |        |          |If the trim value update counter reached this limitation value and frequency of HIRC still doesn't lock, the auto trim operation will be disabled and FREQSEL will be cleared to 00.
 * |        |          |00 = Trim retry count limitation is 64 loops.
 * |        |          |01 = Trim retry count limitation is 128 loops.
 * |        |          |10 = Trim retry count limitation is 256 loops.
 * |        |          |11 = Trim retry count limitation is 512 loops.
 * |[8]     |CESTOPEN  |Clock Error Stop Enable Bit
 * |        |          |0 = The trim operation is keep going if clock is inaccuracy.
 * |        |          |1 = The trim operation is stopped if clock is inaccuracy.
 * |[9]     |BOUNDEN   |Boundary Enable Bit
 * |        |          |0 = Boundary function Disabled.
 * |        |          |1 = Boundary function Enabled.
 * |[10]    |REFCKSEL  |Reference Clock Selection
 * |        |          |0 = HIRC trim reference clock is from LXT (32.768 kHz).
 * |        |          |1 = HIRC trim reference clock is from internal USB synchronous mode.
 * |        |          |Note: HIRC trim reference clock is 20 kHz in test mode.
 * |[20:16] |BOUNDARY  |Boundary Selection
 * |        |          |Fill the boundary range from 0x1 to 0x31, 0x0 is reserved.
 * |        |          |Note: This field is effective only when the BOUNDEN(SYS_HIRCTRIMCTL[9]) is enabled.
 * @var SYS_T::HIRCTIEN
 * Offset: 0xE8  HIRC48M Trim Interrupt Enable Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[1]     |TFAILIEN  |Trim Failure Interrupt Enable Bit
 * |        |          |This bit controls if an interrupt will be triggered while HIRC trim value update limitation count reached and HIRC frequency still not locked on target frequency set by FREQSEL(SYS_IRCTCTL[1:0]).
 * |        |          |If this bit is high and TFAILIF(SYS_IRCTISTS[1]) is set during auto trim operation, an interrupt will be triggered to notify that HIRC trim value update limitation count was reached.
 * |        |          |0 = Disable TFAILIF(SYS_IRCTISTS[1]) status to trigger an interrupt to CPU.
 * |        |          |1 = Enable TFAILIF(SYS_IRCTISTS[1]) status to trigger an interrupt to CPU.
 * |[2]     |CLKEIEN   |Clock Error Interrupt Enable Bit
 * |        |          |This bit controls if CPU would get an interrupt while clock is inaccuracy during auto trim operation.
 * |        |          |If this bit is set to1, and CLKERRIF(SYS_IRCTISTS[2]) is set during auto trim operation, an interrupt will be triggered to notify the clock frequency is inaccuracy.
 * |        |          |0 = Disable CLKERRIF(SYS_IRCTISTS[2]) status to trigger an interrupt to CPU.
 * |        |          |1 = Enable CLKERRIF(SYS_IRCTISTS[2]) status to trigger an interrupt to CPU.
 * @var SYS_T::HIRCTISTS
 * Offset: 0xEC  HIRC48M Trim Interrupt Status Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |FREQLOCK  |HIRC Frequency Lock Status
 * |        |          |This bit indicates the HIRC frequency is locked.
 * |        |          |This is a status bit and doesn't trigger any interrupt
 * |        |          |Write 1 to clear this to 0
 * |        |          |This bit will be set automatically, if the frequency is lock and the RC_TRIM is enabled.
 * |        |          |0 = The internal high-speed oscillator frequency doesn't lock at 48 MHz yet.
 * |        |          |1 = The internal high-speed oscillator frequency locked at 48 MHz.
 * |[1]     |TFAILIF   |Trim Failure Interrupt Status
 * |        |          |This bit indicates that HIRC trim value update limitation count reached and the HIRC clock frequency still doesn't be locked
 * |        |          |Once this bit is set, the auto trim operation stopped and FREQSEL(SYS_IRCTCTL[1:0]) will be cleared to 00 by hardware automatically.
 * |        |          |If this bit is set and TFAILIEN(SYS_IRCTIEN[1]) is high, an interrupt will be triggered to notify that HIRC trim value update limitation count was reached
 * |        |          |Write 1 to clear this to 0.
 * |        |          |0 = Trim value update limitation count does not reach.
 * |        |          |1 = Trim value update limitation count reached and HIRC frequency still not locked.
 * |[2]     |CLKERRIF  |Clock Error Interrupt Status
 * |        |          |When the frequency of 32.768 kHz external low speed crystal oscillator (LXT) or 48 MHz internal high speed RC oscillator (HIRC) is shift larger to unreasonable value, this bit will be set and to be an indicate that clock frequency is inaccuracy
 * |        |          |Once this bit is set to 1, the auto trim operation stopped and FREQSEL(SYS_IRCTCL[1:0]) will be cleared to 00 by hardware automatically if CESTOPEN(SYS_IRCTCTL[8]) is set to 1.
 * |        |          |If this bit is set and CLKEIEN(SYS_IRCTIEN[2]) is high, an interrupt will be triggered to notify the clock frequency is inaccuracy
 * |        |          |Write 1 to clear this to 0.
 * |        |          |0 = Clock frequency is accuracy.
 * |        |          |1 = Clock frequency is inaccuracy.
 * |[3]     |OVBDIF    |Over Boundary Status
 * |        |          |When the over boundary function is set, if there occurs the over boundary condition, this flag will be set.
 * |        |          |0 = Over boundary coundition did not occur.
 * |        |          |1 = Over boundary coundition occurred.
 * |        |          |Note: Write 1 to clear this flag.
 * @var SYS_T::IRCTCTL
 * Offset: 0xF0  HIRC Trim Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[1:0]   |FREQSEL   |Trim Frequency Selection
 * |        |          |This field indicates the target frequency of 12 MHz internal high speed RC oscillator (HIRC) auto trim.
 * |        |          |During auto trim operation, if clock error detected with CESTOPEN is set to 1 or trim retry limitation count reached, this field will be cleared to 00 automatically.
 * |        |          |00 = Disable HIRC auto trim function.
 * |        |          |01 = Enable HIRC auto trim function and trim HIRC to 12 MHz.
 * |        |          |10 = Reserved.
 * |        |          |11 = Reserved.
 * |[3:2]   |ACCURSEL  |Trim Accuracy Selection
 * |        |          |This field indicates the target frequency accuracy of 12 MHz internal high speed RC oscillator (IRC) auto trim.
 * |        |          |00 = Accuracy is +-0.25% deviation within all temperature ranges.
 * |        |          |01 = Accuracy is +-0.50% deviation within all temperature ranges.
 * |        |          |10 = Accuracy is +-0.75% deviation within all temperature ranges.
 * |        |          |11 = Accuracy is +-1% deviation within all temperature ranges.
 * |[5:4]   |LOOPSEL   |Trim Calculation Loop Selection
 * |        |          |This field defines that trim value calculation is based on how many reference clocks.
 * |        |          |00 = Trim value calculation is based on average difference in 4 clocks of reference clock.
 * |        |          |01 = Trim value calculation is based on average difference in 8 clocks of reference clock.
 * |        |          |10 = Trim value calculation is based on average difference in 16 clocks of reference clock.
 * |        |          |11 = Trim value calculation is based on average difference in 32 clocks of reference clock.
 * |        |          |Note: For example, if LOOPSEL is set as 00, auto trim circuit will calculate trim value based on the average frequency difference in 4 clocks of reference clock.
 * |[7:6]   |RETRYCNT  |Trim Value Update Limitation Count
 * |        |          |This field defines that how many times the auto trim circuit will try to update the HIRC trim value before the frequency of HIRC locked.
 * |        |          |Once the HIRC locked, the internal trim value update counter will be reset.
 * |        |          |If the trim value update counter reached this limitation value and frequency of HIRC still doesn't lock, the auto trim operation will be disabled and FREQSEL will be cleared to 00.
 * |        |          |00 = Trim retry count limitation is 64 loops.
 * |        |          |01 = Trim retry count limitation is 128 loops.
 * |        |          |10 = Trim retry count limitation is 256 loops.
 * |        |          |11 = Trim retry count limitation is 512 loops.
 * |[8]     |CESTOPEN  |Clock Error Stop Enable Bit
 * |        |          |0 = The trim operation is keep going if clock is inaccuracy.
 * |        |          |1 = The trim operation is stopped if clock is inaccuracy.
 * |[9]     |BOUNDEN   |Boundary Enable Bit
 * |        |          |0 = Boundary function Disabled.
 * |        |          |1 = Boundary function Enabled.
 * |[10]    |REFCKSEL  |Reference Clock Selection
 * |        |          |0 = HIRC trim reference clock is from LXT (32.768 kHz).
 * |        |          |1 = HIRC trim reference clock is from internal USB synchronous mode.
 * |        |          |Note: HIRC trim reference clock is 20 kHz in test mode.
 * |[20:16] |BOUNDARY  |Boundary Selection
 * |        |          |Fill the boundary range from 0x1 to 0x31, 0x0 is reserved.
 * |        |          |Note: This field is effective only when the BOUNDEN(SYS_HIRCTRIMCTL[9]) is enabled.
 * @var SYS_T::IRCTIEN
 * Offset: 0xF4  HIRC Trim Interrupt Enable Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[1]     |TFAILIEN  |Trim Failure Interrupt Enable Bit
 * |        |          |This bit controls if an interrupt will be triggered while HIRC trim value update limitation count reached and HIRC frequency still not locked on target frequency set by FREQSEL(SYS_IRCTCTL[1:0]).
 * |        |          |If this bit is high and TFAILIF(SYS_IRCTISTS[1]) is set during auto trim operation, an interrupt will be triggered to notify that HIRC trim value update limitation count was reached.
 * |        |          |0 = Disable TFAILIF(SYS_IRCTISTS[1]) status to trigger an interrupt to CPU.
 * |        |          |1 = Enable TFAILIF(SYS_IRCTISTS[1]) status to trigger an interrupt to CPU.
 * |[2]     |CLKEIEN   |Clock Error Interrupt Enable Bit
 * |        |          |This bit controls if CPU would get an interrupt while clock is inaccuracy during auto trim operation.
 * |        |          |If this bit is set to1, and CLKERRIF(SYS_IRCTISTS[2]) is set during auto trim operation, an interrupt will be triggered to notify the clock frequency is inaccuracy.
 * |        |          |0 = Disable CLKERRIF(SYS_IRCTISTS[2]) status to trigger an interrupt to CPU.
 * |        |          |1 = Enable CLKERRIF(SYS_IRCTISTS[2]) status to trigger an interrupt to CPU.
 * @var SYS_T::IRCTISTS
 * Offset: 0xF8  HIRC Trim Interrupt Status Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |FREQLOCK  |HIRC Frequency Lock Status
 * |        |          |This bit indicates the HIRC frequency is locked.
 * |        |          |This is a status bit and doesn't trigger any interrupt
 * |        |          |Write 1 to clear this to 0
 * |        |          |This bit will be set automatically, if the frequency is lock and the RC_TRIM is enabled.
 * |        |          |0 = The internal high-speed oscillator frequency doesn't lock at 12 MHz yet.
 * |        |          |1 = The internal high-speed oscillator frequency locked at 12 MHz.
 * |[1]     |TFAILIF   |Trim Failure Interrupt Status
 * |        |          |This bit indicates that HIRC trim value update limitation count reached and the HIRC clock frequency still doesn't be locked
 * |        |          |Once this bit is set, the auto trim operation stopped and FREQSEL(SYS_IRCTCTL[1:0]) will be cleared to 00 by hardware automatically.
 * |        |          |If this bit is set and TFAILIEN(SYS_IRCTIEN[1]) is high, an interrupt will be triggered to notify that HIRC trim value update limitation count was reached
 * |        |          |Write 1 to clear this to 0.
 * |        |          |0 = Trim value update limitation count does not reach.
 * |        |          |1 = Trim value update limitation count reached and HIRC frequency still not locked.
 * |[2]     |CLKERRIF  |Clock Error Interrupt Status
 * |        |          |When the frequency of 32.768 kHz external low speed crystal oscillator (LXT) or 12 MHz internal high speed RC oscillator (HIRC) is shift larger to unreasonable value, this bit will be set and to be an indicate that clock frequency is inaccuracy
 * |        |          |Once this bit is set to 1, the auto trim operation stopped and FREQSEL(SYS_IRCTCL[1:0]) will be cleared to 00 by hardware automatically if CESTOPEN(SYS_IRCTCTL[8]) is set to 1.
 * |        |          |If this bit is set and CLKEIEN(SYS_IRCTIEN[2]) is high, an interrupt will be triggered to notify the clock frequency is inaccuracy
 * |        |          |Write 1 to clear this to 0.
 * |        |          |0 = Clock frequency is accuracy.
 * |        |          |1 = Clock frequency is inaccuracy.
 * |[3]     |OVBDIF    |Over Boundary Status
 * |        |          |When the over boundary function is set, if there occurs the over boundary condition, this flag will be set.
 * |        |          |0 = Over boundary coundition did not occur.
 * |        |          |1 = Over boundary coundition occurred.
 * |        |          |Note: Write 1 to clear this flag.
 * @var SYS_T::RAMPGCTL
 * Offset: 0xFC  RRAM Power Gating Contol Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |RRAMPGEN0 |RRAM Bank0 Power Gating Enable Bit
 * |        |          |0 = RRAM bank0 power gating disabled.
 * |        |          |1 = RRAM bank0 power gating enabled.
 * |[1]     |RRAMPGDN0 |RRAM Bank0 Power Gating Done Flag(Read Only)
 * |        |          |0 = RRAM bank0 power switch is openoing.
 * |        |          |1 = RRAM bank0 power gating done.
 * |[2]     |RRAMBUSY0 |RRAM Bank0 Busy Flag (Read Only)
 * |        |          |0 = RRAM bank0 in stand by mode.
 * |        |          |1 = RRAM bank0 is busy.
 * |[4]     |RRAMPGEN1 |RRAM Bank1 Power Gating Enable Bit
 * |        |          |0 = RRAM bank1 power gating disabled.
 * |        |          |1 = RRAM bank1 power gating enabled.
 * |[5]     |RRAMPGDN1 |RRAM Bank1 Power Gating Done Flag(Read Only)
 * |        |          |0 = RRAM bank1 power switch is openoing.
 * |        |          |1 = RRAM bank1 power gating done.
 * |[6]     |RRAMBUSY1 |RRAM Bank1 Busy Flag(Read Only)
 * |        |          |0 = RRAM bank1 in stand by mode.
 * |        |          |1 = RRAM bank1 is busy.
 * @var SYS_T::REGLCTL
 * Offset: 0x100  Register Lock Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |REGLCTL   |Register Lock Control Code (Write Only)
 * |        |          |Some registers have write-protection function
 * |        |          |Writing these registers have to disable the protected function by writing the sequence value "59h", "16h", "88h" to this field.
 * |        |          |After this sequence is completed, the REGLCTL bit will be set to 1 and write-protection registers can be normal write.
 * |        |          |REGLCTL[0]
 * |        |          |Register Lock Control Disable Index (Read Only)
 * |        |          |0 = Write-protection Enabled for writing protected registers.
 * |        |          |Any write to the protected register is ignored.
 * |        |          |1 = Write-protection Disabled for writing protected registers.
 * @var SYS_T::PORDISAN
 * Offset: 0x1EC  Analog POR Disable Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[15:0]  |POROFFAN  |Power-on Reset Enable Bit (Write Protect)
 * |        |          |After powered on, User can turn off internal analog POR circuit to save power by writing 0x5AA5 to this field.
 * |        |          |The analog POR circuit will be active again when this field is set to another value or chip is reset by other reset source, including:
 * |        |          |nRESET, Watchdog, LVR reset, BOD reset, ICE reset command and the software-chip reset function.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * @var SYS_T::CSERVER
 * Offset: 0x1F4  Chip Series Version Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |VERSION   |Chip Series Version
 * |        |          |These bits indicate the series version of chip.
 * |        |          |00 = M2L31xxDAE.
 * |        |          |01 = M2L31xx4AE.
 * |        |          |Others = Reserved.
 * @var SYS_T::PLCTL
 * Offset: 0x1F8  Power Level Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[2:0]   |PLSEL     |Power Level Select (Write Protect)
 * |        |          |These bits indicate the status of power level.
 * |        |          |001 = Power level is PL1.
 * |        |          |010 = Power level is PL2.
 * |        |          |011 = Power level is PL3.
 * |        |          |Others = Reserved.
 * |        |          |Note : Write ignore when wtire reserved setting.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * |[3]     |PLKEEP    |Power Level keep for wakeup(Write Protect)
 * |        |          |0 = Power level back to default PL1 when SPD0~2 wakeup.
 * |        |          |1 = Power level back to normal run voltage when SPD0~2 wakeup.
 * |        |          |Note : SPD reset type wakeup, power level back to default PL1 even if PLKEEP=1.
 * @var SYS_T::PLSTS
 * Offset: 0x1FC  Power Level Status Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |PLCBUSY   |Power Level Change Busy Bit (Read Only)
 * |        |          |This bit is set by hardware when power level is changing
 * |        |          |After power level change is completed, this bit will be cleared automatically by hardware.
 * |        |          |0 = Core voltage change is completed.
 * |        |          |1 = Core voltage change is ongoing.
 * |[10:8]  |PLSTATUS  |Power Level Status (Read Only)
 * |        |          |This bit indicates the status of power level.
 * |        |          |001 = Power level is PL1.
 * |        |          |010 = Power level is PL2.
 * |        |          |011 = Power level is PL3.
 * |        |          |Others = Reserved.
 * @var SYS_T::INIVTOR
 * Offset: 0x310  Initial VTOR Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[31:10] |INIVTOR   |Initial VTOR Control Register
 * |        |          |This is the register to set the address of vector table after CPU reseted or chip waked up from SPD0~2 mode.
 * |        |          |The value will be loaded to Vector Table Offset Register, which is at the address 0xE000ED08, when CPU reseted or chip wake up from SPD0~2 mode.
 * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
 * @var SYS_T::GPA_MFP0
 * Offset: 0x500  GPIOA Multiple Function Control Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PA0MFP    |PA.0 Multi-function Pin Selection
 * |        |          |03 = QSPI0_MOSI0
 * |        |          |04 = SPI0_MOSI
 * |        |          |07 = UART0_RXD
 * |        |          |08 = UART1_nRTS
 * |        |          |09 = I2C2_SDA
 * |        |          |10 = CANFD1_RXD
 * |        |          |11 = EPWM0_BRAKE0
 * |        |          |12 = PWM0_CH0
 * |        |          |13 = EPWM0_CH5
 * |        |          |14 = ACMP2_WLAT
 * |        |          |15 = DAC0_ST
 * |        |          |16 = TK_TK8
 * |        |          |17 = UTCPD0_VCNEN1
 * |        |          |20 = LPSPI0_MOSI
 * |        |          |21 = LPUART0_RXD
 * |        |          |23 = LPIO0
 * |[12:8]  |PA1MFP    |PA.1 Multi-function Pin Selection
 * |        |          |03 = QSPI0_MISO0
 * |        |          |04 = SPI0_MISO
 * |        |          |07 = UART0_TXD
 * |        |          |08 = UART1_nCTS
 * |        |          |09 = I2C2_SCL
 * |        |          |10 = CANFD1_TXD
 * |        |          |11 = EQEI0_INDEX
 * |        |          |12 = PWM0_CH1
 * |        |          |13 = EPWM0_CH4
 * |        |          |14 = ACMP2_O
 * |        |          |15 = DAC1_ST
 * |        |          |16 = TK_TK7
 * |        |          |17 = UTCPD0_FRSTX1
 * |        |          |18 = UTCPD0_DISCHG
 * |        |          |20 = LPSPI0_MISO
 * |        |          |21 = LPUART0_TXD
 * |        |          |23 = LPIO1
 * |[20:16] |PA2MFP    |PA.2 Multi-function Pin Selection
 * |        |          |03 = QSPI0_CLK
 * |        |          |04 = SPI0_CLK
 * |        |          |05 = UART4_RXD
 * |        |          |07 = I2C0_SMBSUS
 * |        |          |08 = UART1_RXD
 * |        |          |09 = I2C1_SDA
 * |        |          |11 = EQEI0_A
 * |        |          |12 = PWM0_CH2
 * |        |          |13 = EPWM0_CH3
 * |        |          |16 = TK_TK6
 * |        |          |17 = UTCPD0_VBSRCEN
 * |        |          |20 = LPSPI0_CLK
 * |[28:24] |PA3MFP    |PA.3 Multi-function Pin Selection
 * |        |          |03 = QSPI0_SS
 * |        |          |04 = SPI0_SS
 * |        |          |05 = UART4_TXD
 * |        |          |06 = TK_SE
 * |        |          |07 = I2C0_SMBAL
 * |        |          |08 = UART1_TXD
 * |        |          |09 = I2C1_SCL
 * |        |          |10 = PWM1_BRAKE1
 * |        |          |11 = EQEI0_B
 * |        |          |12 = PWM0_CH3
 * |        |          |13 = EPWM0_CH2
 * |        |          |14 = CLKO
 * |        |          |15 = EPWM1_BRAKE1
 * |        |          |16 = TK_TK5
 * |        |          |17 = UTCPD0_VBSNKEN
 * |        |          |20 = LPSPI0_SS
 * @var SYS_T::GPA_MFP1
 * Offset: 0x504  GPIOA Multiple Function Control Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PA4MFP    |PA.4 Multi-function Pin Selection
 * |        |          |03 = QSPI0_MOSI1
 * |        |          |04 = SPI0_I2SMCLK
 * |        |          |07 = UART0_nRTS
 * |        |          |08 = UART0_RXD
 * |        |          |09 = I2C0_SDA
 * |        |          |10 = CANFD0_RXD
 * |        |          |11 = UART5_RXD
 * |        |          |12 = PWM0_CH4
 * |        |          |13 = EPWM0_CH1
 * |        |          |14 = EQEI0_A
 * |        |          |16 = TK_TK4
 * |        |          |17 = UTCPD0_VBSRCEN
 * |        |          |20 = LPUART0_RXD
 * |        |          |21 = LPUART0_nRTS
 * |        |          |22 = LPI2C0_SDA
 * |[12:8]  |PA5MFP    |PA.5 Multi-function Pin Selection
 * |        |          |03 = QSPI0_MISO1
 * |        |          |04 = SPI1_I2SMCLK
 * |        |          |07 = UART0_nCTS
 * |        |          |08 = UART0_TXD
 * |        |          |09 = I2C0_SCL
 * |        |          |10 = CANFD0_TXD
 * |        |          |11 = UART5_TXD
 * |        |          |12 = PWM0_CH5
 * |        |          |13 = EPWM0_CH0
 * |        |          |14 = EQEI0_INDEX
 * |        |          |16 = TK_TK3
 * |        |          |17 = UTCPD0_VBSNKEN
 * |        |          |20 = LPUART0_TXD
 * |        |          |21 = LPUART0_nCTS
 * |        |          |22 = LPI2C0_SCL
 * |[20:16] |PA6MFP    |PA.6 Multi-function Pin Selection
 * |        |          |02 = EBI_AD6
 * |        |          |04 = SPI1_SS
 * |        |          |07 = UART0_RXD
 * |        |          |08 = I2C1_SDA
 * |        |          |11 = EPWM1_CH5
 * |        |          |12 = PWM1_CH3
 * |        |          |13 = ACMP1_WLAT
 * |        |          |14 = TM3
 * |        |          |15 = INT0
 * |        |          |16 = TK_TK1
 * |        |          |17 = UTCPD0_VBSRCEN
 * |        |          |21 = LPUART0_RXD
 * |        |          |23 = LPIO4
 * |[28:24] |PA7MFP    |PA.7 Multi-function Pin Selection
 * |        |          |02 = EBI_AD7
 * |        |          |04 = SPI1_CLK
 * |        |          |07 = UART0_TXD
 * |        |          |08 = I2C1_SCL
 * |        |          |11 = EPWM1_CH4
 * |        |          |12 = PWM1_CH2
 * |        |          |13 = ACMP0_WLAT
 * |        |          |14 = TM2
 * |        |          |15 = INT1
 * |        |          |16 = TK_TK0
 * |        |          |17 = UTCPD0_VBSNKEN
 * |        |          |21 = LPUART0_TXD
 * |        |          |23 = LPIO5
 * @var SYS_T::GPA_MFP2
 * Offset: 0x508  GPIOA Multiple Function Control Register 2
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PA8MFP    |PA.8 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH20, OPA1_P0
 * |        |          |02 = EBI_ALE
 * |        |          |05 = SPI3_MOSI
 * |        |          |06 = USCI0_CTL1
 * |        |          |07 = UART1_RXD
 * |        |          |08 = UART7_RXD
 * |        |          |09 = PWM0_CH3
 * |        |          |10 = EQEI1_B
 * |        |          |11 = ECAP0_IC2
 * |        |          |13 = TM3_EXT
 * |        |          |14 = I2C2_SMBSUS
 * |        |          |15 = INT4
 * |[12:8]  |PA9MFP    |PA.9 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH21, ACMP2_P0, OPA1_N0
 * |        |          |02 = EBI_MCLK
 * |        |          |05 = SPI3_MISO
 * |        |          |06 = USCI0_DAT1
 * |        |          |07 = UART1_TXD
 * |        |          |08 = UART7_TXD
 * |        |          |09 = PWM0_CH2
 * |        |          |10 = EQEI1_A
 * |        |          |11 = ECAP0_IC1
 * |        |          |13 = TM2_EXT
 * |        |          |14 = I2C2_SMBAL
 * |[20:16] |PA10MFP   |PA.10 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH22, ACMP1_P0, OPA1_O
 * |        |          |02 = EBI_nWR
 * |        |          |05 = SPI3_CLK
 * |        |          |06 = USCI0_DAT0
 * |        |          |07 = I2C2_SDA
 * |        |          |08 = UART6_RXD
 * |        |          |09 = PWM0_CH1
 * |        |          |10 = EQEI1_INDEX
 * |        |          |11 = ECAP0_IC0
 * |        |          |13 = TM1_EXT
 * |        |          |14 = DAC0_ST
 * |        |          |23 = LPTM1_EXT
 * |[28:24] |PA11MFP   |PA.11 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH23, ACMP0_P0, OPA2_O
 * |        |          |02 = EBI_nRD
 * |        |          |05 = SPI3_SS
 * |        |          |06 = USCI0_CLK
 * |        |          |07 = I2C2_SCL
 * |        |          |08 = UART6_TXD
 * |        |          |09 = PWM0_CH0
 * |        |          |10 = EPWM0_SYNC_OUT
 * |        |          |13 = TM0_EXT
 * |        |          |14 = DAC1_ST
 * |        |          |23 = LPTM0_EXT
 * @var SYS_T::GPA_MFP3
 * Offset: 0x50C  GPIOA Multiple Function Control Register 3
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PA12MFP   |PA.12 Multi-function Pin Selection
 * |        |          |03 = UART4_TXD
 * |        |          |04 = I2C1_SCL
 * |        |          |05 = SPI2_SS
 * |        |          |06 = CANFD1_TXD
 * |        |          |08 = SPI0_SS
 * |        |          |11 = PWM1_CH2
 * |        |          |12 = EQEI1_INDEX
 * |        |          |13 = ECAP1_IC0
 * |        |          |14 = USB_VBUS
 * |        |          |20 = LPSPI0_SS
 * |[12:8]  |PA13MFP   |PA.13 Multi-function Pin Selection
 * |        |          |03 = UART4_RXD
 * |        |          |04 = I2C1_SDA
 * |        |          |05 = SPI2_CLK
 * |        |          |06 = CANFD1_RXD
 * |        |          |08 = SPI0_CLK
 * |        |          |11 = PWM1_CH3
 * |        |          |12 = EQEI1_A
 * |        |          |13 = ECAP1_IC1
 * |        |          |14 = USB_D-
 * |        |          |20 = LPSPI0_CLK
 * |[20:16] |PA14MFP   |PA.14 Multi-function Pin Selection
 * |        |          |03 = UART0_TXD
 * |        |          |04 = EBI_AD5
 * |        |          |05 = SPI2_MISO
 * |        |          |06 = I2C2_SCL
 * |        |          |08 = SPI0_MISO
 * |        |          |11 = PWM1_CH4
 * |        |          |12 = EQEI1_B
 * |        |          |13 = ECAP1_IC2
 * |        |          |14 = USB_D+
 * |        |          |20 = LPSPI0_MISO
 * |[28:24] |PA15MFP   |PA.15 Multi-function Pin Selection
 * |        |          |03 = UART0_RXD
 * |        |          |05 = SPI2_MOSI
 * |        |          |06 = I2C2_SDA
 * |        |          |08 = SPI0_MOSI
 * |        |          |11 = PWM1_CH5
 * |        |          |12 = EPWM0_SYNC_IN
 * |        |          |14 = USB_OTG_ID
 * |        |          |20 = LPSPI0_MOSI
 * @var SYS_T::GPB_MFP0
 * Offset: 0x510  GPIOB Multiple Function Control Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PB0MFP    |PB.0 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH0, LPADC0_CH0, ACMP2_P1, OPA0_P0
 * |        |          |02 = EBI_ADR9
 * |        |          |05 = SPI3_I2SMCLK
 * |        |          |06 = USCI0_CTL0
 * |        |          |07 = UART2_RXD
 * |        |          |08 = SPI0_I2SMCLK
 * |        |          |09 = I2C1_SDA
 * |        |          |10 = QSPI0_MOSI1
 * |        |          |11 = EPWM0_CH5
 * |        |          |12 = EPWM1_CH5
 * |        |          |13 = EPWM0_BRAKE1
 * |        |          |14 = PWM0_BRAKE1
 * |        |          |17 = UTCPD0_VCNEN2
 * |        |          |23 = LPIO2
 * |[12:8]  |PB1MFP    |PB.1 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH1, LPADC0_CH1, ACMP2_N, OPA0_N0
 * |        |          |02 = EBI_ADR8
 * |        |          |07 = UART2_TXD
 * |        |          |08 = USCI1_CLK
 * |        |          |09 = I2C1_SCL
 * |        |          |10 = QSPI0_MISO1
 * |        |          |11 = EPWM0_CH4
 * |        |          |12 = EPWM1_CH4
 * |        |          |13 = EPWM0_BRAKE0
 * |        |          |14 = PWM0_BRAKE0
 * |        |          |17 = UTCPD0_VBDCHG
 * |        |          |23 = LPIO3
 * |[20:16] |PB2MFP    |PB.2 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH2, LPADC0_CH2, ACMP0_P1, OPA0_O
 * |        |          |02 = EBI_ADR3
 * |        |          |04 = I2C1_SDA
 * |        |          |05 = SPI1_SS
 * |        |          |06 = UART1_RXD
 * |        |          |07 = UART5_nCTS
 * |        |          |08 = USCI1_DAT0
 * |        |          |11 = EPWM0_CH3
 * |        |          |14 = TM3
 * |        |          |15 = INT3
 * |        |          |23 = LPIO6
 * |[28:24] |PB3MFP    |PB.3 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH3, LPADC0_CH3, ACMP0_N, OPA2_P0
 * |        |          |02 = EBI_ADR2
 * |        |          |04 = I2C1_SCL
 * |        |          |05 = SPI1_CLK
 * |        |          |06 = UART1_TXD
 * |        |          |07 = UART5_nRTS
 * |        |          |08 = USCI1_DAT1
 * |        |          |11 = EPWM0_CH2
 * |        |          |13 = PWM0_BRAKE0
 * |        |          |14 = TM2
 * |        |          |15 = INT2
 * |        |          |23 = LPIO7
 * @var SYS_T::GPB_MFP1
 * Offset: 0x514  GPIOB Multiple Function Control Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PB4MFP    |PB.4 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH4, LPADC0_CH4, ACMP1_P1, OPA2_N0
 * |        |          |02 = EBI_ADR1
 * |        |          |05 = SPI1_MOSI
 * |        |          |06 = I2C0_SDA
 * |        |          |07 = UART5_RXD
 * |        |          |08 = USCI1_CTL1
 * |        |          |11 = EPWM0_CH1
 * |        |          |13 = UART2_RXD
 * |        |          |14 = TM1
 * |        |          |15 = INT1
 * |        |          |22 = LPI2C0_SDA
 * |        |          |23 = LPTM1
 * |[12:8]  |PB5MFP    |PB.5 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH5, LPADC0_CH5, ACMP1_N, OPA1_P1
 * |        |          |02 = EBI_ADR0
 * |        |          |05 = SPI1_MISO
 * |        |          |06 = I2C0_SCL
 * |        |          |07 = UART5_TXD
 * |        |          |08 = USCI1_CTL0
 * |        |          |11 = EPWM0_CH0
 * |        |          |13 = UART2_TXD
 * |        |          |14 = TM0
 * |        |          |15 = INT0
 * |        |          |22 = LPI2C0_SCL
 * |        |          |23 = LPTM0
 * |[20:16] |PB6MFP    |PB.6 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH6, LPADC0_CH6, ACMP2_P2, OPA2_P1
 * |        |          |02 = EBI_nWRH
 * |        |          |04 = USCI1_DAT1
 * |        |          |06 = UART1_RXD
 * |        |          |08 = EBI_nCS1
 * |        |          |10 = PWM1_CH5
 * |        |          |11 = EPWM1_BRAKE1
 * |        |          |12 = EPWM1_CH5
 * |        |          |13 = INT4
 * |        |          |14 = PWM1_BRAKE1
 * |        |          |15 = ACMP1_O
 * |[28:24] |PB7MFP    |PB.7 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH7, LPADC0_CH7, ACMP2_P3, OPA2_N1
 * |        |          |02 = EBI_nWRL
 * |        |          |04 = USCI1_DAT0
 * |        |          |06 = UART1_TXD
 * |        |          |08 = EBI_nCS0
 * |        |          |10 = PWM1_CH4
 * |        |          |11 = EPWM1_BRAKE0
 * |        |          |12 = EPWM1_CH4
 * |        |          |13 = INT5
 * |        |          |14 = PWM1_BRAKE0
 * |        |          |15 = ACMP0_O
 * @var SYS_T::GPB_MFP2
 * Offset: 0x518  GPIOB Multiple Function Control Register 2
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PB8MFP    |PB.8 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH8, LPADC0_CH8
 * |        |          |02 = EBI_ADR19
 * |        |          |04 = USCI1_CLK
 * |        |          |05 = UART0_RXD
 * |        |          |06 = UART1_nRTS
 * |        |          |08 = UART7_RXD
 * |        |          |10 = PWM1_CH3
 * |        |          |21 = LPUART0_RXD
 * |[12:8]  |PB9MFP    |PB.9 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH9, LPADC0_CH9
 * |        |          |02 = EBI_ADR18
 * |        |          |04 = USCI1_CTL1
 * |        |          |05 = UART0_TXD
 * |        |          |06 = UART1_nCTS
 * |        |          |08 = UART7_TXD
 * |        |          |10 = PWM1_CH2
 * |        |          |21 = LPUART0_TXD
 * |[20:16] |PB10MFP   |PB.10 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH10, LPADC0_CH10
 * |        |          |02 = EBI_ADR17
 * |        |          |04 = USCI1_CTL0
 * |        |          |05 = UART0_nRTS
 * |        |          |06 = UART4_RXD
 * |        |          |07 = I2C1_SDA
 * |        |          |08 = CANFD1_RXD
 * |        |          |10 = PWM1_CH1
 * |        |          |21 = LPUART0_nRTS
 * |[28:24] |PB11MFP   |PB.11 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH11, LPADC0_CH11
 * |        |          |02 = EBI_ADR16
 * |        |          |05 = UART0_nCTS
 * |        |          |06 = UART4_TXD
 * |        |          |07 = I2C1_SCL
 * |        |          |08 = CANFD1_TXD
 * |        |          |09 = SPI0_I2SMCLK
 * |        |          |10 = PWM1_CH0
 * |        |          |21 = LPUART0_nCTS
 * @var SYS_T::GPB_MFP3
 * Offset: 0x51C  GPIOB Multiple Function Control Register 3
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PB12MFP   |PB.12 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH12, LPADC0_CH12, DAC0_OUT, ACMP0_P2, ACMP1_P2
 * |        |          |02 = EBI_AD15
 * |        |          |04 = SPI0_MOSI
 * |        |          |05 = USCI0_CLK
 * |        |          |06 = UART0_RXD
 * |        |          |07 = UART3_nCTS
 * |        |          |08 = I2C2_SDA
 * |        |          |10 = CANFD0_RXD
 * |        |          |11 = EPWM1_CH3
 * |        |          |13 = TM3_EXT
 * |        |          |20 = LPSPI0_MOSI
 * |        |          |21 = LPUART0_RXD
 * |[12:8]  |PB13MFP   |PB.13 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH13, LPADC0_CH13, DAC1_OUT, ACMP0_P3, ACMP1_P3, OPA1_N1
 * |        |          |02 = EBI_AD14
 * |        |          |04 = SPI0_MISO
 * |        |          |05 = USCI0_DAT0
 * |        |          |06 = UART0_TXD
 * |        |          |07 = UART3_nRTS
 * |        |          |08 = I2C2_SCL
 * |        |          |10 = CANFD0_TXD
 * |        |          |11 = EPWM1_CH2
 * |        |          |13 = TM2_EXT
 * |        |          |20 = LPSPI0_MISO
 * |        |          |21 = LPUART0_TXD
 * |[20:16] |PB14MFP   |PB.14 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH14, LPADC0_CH14, OPA0_N1
 * |        |          |02 = EBI_AD13
 * |        |          |04 = SPI0_CLK
 * |        |          |05 = USCI0_DAT1
 * |        |          |06 = UART0_nRTS
 * |        |          |07 = UART3_RXD
 * |        |          |08 = I2C2_SMBSUS
 * |        |          |10 = EQEI0_INDEX
 * |        |          |11 = EPWM1_CH1
 * |        |          |12 = ECAP0_IC0
 * |        |          |13 = TM1_EXT
 * |        |          |14 = CLKO
 * |        |          |16 = TK_SE
 * |        |          |17 = UTCPD0_VBSRCEN
 * |        |          |20 = LPSPI0_CLK
 * |        |          |21 = LPUART0_nRTS
 * |        |          |23 = LPTM1_EXT
 * |[28:24] |PB15MFP   |PB.15 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH15, LPADC0_CH15, OPA0_P1
 * |        |          |02 = EBI_AD12
 * |        |          |04 = SPI0_SS
 * |        |          |05 = USCI0_CTL1
 * |        |          |06 = UART0_nCTS
 * |        |          |07 = UART3_TXD
 * |        |          |08 = I2C2_SMBAL
 * |        |          |10 = EPWM0_BRAKE1
 * |        |          |11 = EPWM1_CH0
 * |        |          |13 = TM0_EXT
 * |        |          |14 = USB_VBUS_EN
 * |        |          |17 = UTCPD0_VBSNKEN
 * |        |          |20 = LPSPI0_SS
 * |        |          |21 = LPUART0_nCTS
 * |        |          |23 = LPTM0_EXT
 * @var SYS_T::GPC_MFP0
 * Offset: 0x520  GPIOC Multiple Function Control Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PC0MFP    |PC.0 Multi-function Pin Selection
 * |        |          |02 = EBI_AD0
 * |        |          |04 = QSPI0_MOSI0
 * |        |          |07 = SPI1_SS
 * |        |          |08 = UART2_RXD
 * |        |          |09 = I2C0_SDA
 * |        |          |10 = EQEI0_B
 * |        |          |12 = EPWM1_CH5
 * |        |          |13 = ECAP0_IC2
 * |        |          |14 = ACMP1_O
 * |        |          |17 = UTCPD0_CC1
 * |        |          |22 = LPI2C0_SDA
 * |        |          |23 = LPIO4
 * |[12:8]  |PC1MFP    |PC.1 Multi-function Pin Selection
 * |        |          |02 = EBI_AD1
 * |        |          |04 = QSPI0_MISO0
 * |        |          |07 = SPI1_CLK
 * |        |          |08 = UART2_TXD
 * |        |          |09 = I2C0_SCL
 * |        |          |10 = EQEI0_A
 * |        |          |12 = EPWM1_CH4
 * |        |          |13 = ECAP0_IC1
 * |        |          |14 = ACMP0_O
 * |        |          |15 = EADC0_ST
 * |        |          |17 = UTCPD0_CC2
 * |        |          |22 = LPI2C0_SCL
 * |        |          |23 = LPIO5
 * |[20:16] |PC2MFP    |PC.2 Multi-function Pin Selection
 * |        |          |02 = EBI_AD2
 * |        |          |04 = QSPI0_CLK
 * |        |          |06 = SPI3_MOSI
 * |        |          |07 = SPI1_MOSI
 * |        |          |08 = UART2_nCTS
 * |        |          |09 = I2C0_SMBSUS
 * |        |          |10 = EQEI0_INDEX
 * |        |          |11 = UART3_RXD
 * |        |          |12 = EPWM1_CH3
 * |        |          |13 = ECAP0_IC0
 * |        |          |15 = I2C3_SDA
 * |        |          |16 = TK_TK13
 * |        |          |17 = UTCPD0_CCDB1
 * |[28:24] |PC3MFP    |PC.3 Multi-function Pin Selection
 * |        |          |02 = EBI_AD3
 * |        |          |04 = QSPI0_SS
 * |        |          |06 = SPI3_MISO
 * |        |          |07 = SPI1_MISO
 * |        |          |08 = UART2_nRTS
 * |        |          |09 = I2C0_SMBAL
 * |        |          |11 = UART3_TXD
 * |        |          |12 = EPWM1_CH2
 * |        |          |15 = I2C3_SCL
 * |        |          |16 = TK_TK12
 * |        |          |17 = UTCPD0_CCDB2
 * @var SYS_T::GPC_MFP1
 * Offset: 0x524  GPIOC Multiple Function Control Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PC4MFP    |PC.4 Multi-function Pin Selection
 * |        |          |02 = EBI_AD4
 * |        |          |04 = QSPI0_MOSI1
 * |        |          |06 = SPI3_CLK
 * |        |          |07 = SPI1_I2SMCLK
 * |        |          |08 = UART2_RXD
 * |        |          |09 = I2C1_SDA
 * |        |          |10 = CANFD0_RXD
 * |        |          |11 = UART4_RXD
 * |        |          |12 = EPWM1_CH1
 * |        |          |15 = I2C3_SMBSUS
 * |        |          |16 = TK_TK11
 * |        |          |17 = UTCPD0_FRSTX1
 * |        |          |18 = UTCPD0_DISCHG
 * |[12:8]  |PC5MFP    |PC.5 Multi-function Pin Selection
 * |        |          |02 = EBI_AD5
 * |        |          |04 = QSPI0_MISO1
 * |        |          |06 = SPI3_SS
 * |        |          |08 = UART2_TXD
 * |        |          |09 = I2C1_SCL
 * |        |          |10 = CANFD0_TXD
 * |        |          |11 = UART4_TXD
 * |        |          |12 = EPWM1_CH0
 * |        |          |15 = I2C3_SMBAL
 * |        |          |16 = TK_TK10
 * |        |          |17 = UTCPD0_FRSTX2
 * |        |          |18 = UTCPD0_DISCHG
 * |[20:16] |PC6MFP    |PC.6 Multi-function Pin Selection
 * |        |          |02 = EBI_AD8
 * |        |          |04 = SPI1_MOSI
 * |        |          |05 = UART4_RXD
 * |        |          |07 = UART0_nRTS
 * |        |          |09 = UART6_RXD
 * |        |          |11 = EPWM1_CH3
 * |        |          |12 = PWM1_CH1
 * |        |          |14 = TM1
 * |        |          |15 = INT2
 * |        |          |21 = LPUART0_nRTS
 * |        |          |23 = LPTM1
 * |[28:24] |PC7MFP    |PC.7 Multi-function Pin Selection
 * |        |          |02 = EBI_AD9
 * |        |          |04 = SPI1_MISO
 * |        |          |05 = UART4_TXD
 * |        |          |07 = UART0_nCTS
 * |        |          |09 = UART6_TXD
 * |        |          |11 = EPWM1_CH2
 * |        |          |12 = PWM1_CH0
 * |        |          |14 = TM0
 * |        |          |15 = INT3
 * |        |          |21 = LPUART0_nCTS
 * |        |          |23 = LPTM0
 * @var SYS_T::GPC_MFP2
 * Offset: 0x528  GPIOC Multiple Function Control Register 2
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PC8MFP    |PC.8 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR16
 * |        |          |04 = I2C0_SDA
 * |        |          |05 = UART4_nCTS
 * |        |          |08 = UART1_RXD
 * |        |          |11 = EPWM1_CH1
 * |        |          |12 = PWM1_CH4
 * |        |          |22 = LPI2C0_SDA
 * |[12:8]  |PC9MFP    |PC.9 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR7
 * |        |          |05 = UART6_nCTS
 * |        |          |06 = SPI3_SS
 * |        |          |07 = UART3_RXD
 * |        |          |09 = CANFD1_RXD
 * |        |          |12 = EPWM1_CH3
 * |[20:16] |PC10MFP   |PC.10 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR6
 * |        |          |05 = UART6_nRTS
 * |        |          |06 = SPI3_CLK
 * |        |          |07 = UART3_TXD
 * |        |          |09 = CANFD1_TXD
 * |        |          |11 = ECAP1_IC0
 * |        |          |12 = EPWM1_CH2
 * |[28:24] |PC11MFP   |PC.11 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR5
 * |        |          |03 = UART0_RXD
 * |        |          |04 = I2C0_SDA
 * |        |          |05 = UART6_RXD
 * |        |          |06 = SPI3_MOSI
 * |        |          |11 = ECAP1_IC1
 * |        |          |12 = EPWM1_CH1
 * |        |          |14 = ACMP1_O
 * |        |          |21 = LPUART0_RXD
 * |        |          |22 = LPI2C0_SDA
 * @var SYS_T::GPC_MFP3
 * Offset: 0x52C  GPIOC Multiple Function Control Register 3
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PC12MFP   |PC.12 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR4
 * |        |          |03 = UART0_TXD
 * |        |          |04 = I2C0_SCL
 * |        |          |05 = UART6_TXD
 * |        |          |06 = SPI3_MISO
 * |        |          |11 = ECAP1_IC2
 * |        |          |12 = EPWM1_CH0
 * |        |          |14 = ACMP0_O
 * |        |          |21 = LPUART0_TXD
 * |        |          |22 = LPI2C0_SCL
 * |[12:8]  |PC13MFP   |PC.13 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH19
 * |        |          |02 = EBI_ADR10
 * |        |          |04 = SPI2_I2SMCLK
 * |        |          |05 = CANFD1_TXD
 * |        |          |06 = USCI0_CTL0
 * |        |          |07 = UART2_TXD
 * |        |          |09 = PWM0_CH4
 * |        |          |13 = CLKO
 * |        |          |14 = EADC0_ST
 * |        |          |16 = TK_SE
 * |        |          |23 = LPADC0_ST
 * |[20:16] |PC14MFP   |PC.14 Multi-function Pin Selection
 * |        |          |02 = EBI_AD11
 * |        |          |04 = SPI0_I2SMCLK
 * |        |          |05 = USCI0_CTL0
 * |        |          |06 = QSPI0_CLK
 * |        |          |08 = EBI_nCS2
 * |        |          |11 = EPWM0_SYNC_IN
 * |        |          |13 = TM1
 * |        |          |14 = USB_VBUS_ST
 * |        |          |15 = ACMP2_O
 * |        |          |23 = LPTM1
 * @var SYS_T::GPD_MFP0
 * Offset: 0x530  GPIOD Multiple Function Control Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PD0MFP    |PD.0 Multi-function Pin Selection
 * |        |          |02 = EBI_AD13
 * |        |          |03 = USCI0_CLK
 * |        |          |04 = SPI0_MOSI
 * |        |          |05 = UART3_RXD
 * |        |          |14 = TM2
 * |        |          |16 = TK_TK17
 * |        |          |20 = LPSPI0_MOSI
 * |        |          |23 = LPIO6
 * |[12:8]  |PD1MFP    |PD.1 Multi-function Pin Selection
 * |        |          |02 = EBI_AD12
 * |        |          |03 = USCI0_DAT0
 * |        |          |04 = SPI0_MISO
 * |        |          |05 = UART3_TXD
 * |        |          |16 = TK_TK16
 * |        |          |20 = LPSPI0_MISO
 * |        |          |23 = LPIO7
 * |[20:16] |PD2MFP    |PD.2 Multi-function Pin Selection
 * |        |          |02 = EBI_AD11
 * |        |          |03 = USCI0_DAT1
 * |        |          |04 = SPI0_CLK
 * |        |          |05 = UART3_nCTS
 * |        |          |09 = UART0_RXD
 * |        |          |16 = TK_TK15
 * |        |          |20 = LPSPI0_CLK
 * |        |          |21 = LPUART0_RXD
 * |[28:24] |PD3MFP    |PD.3 Multi-function Pin Selection
 * |        |          |02 = EBI_AD10
 * |        |          |03 = USCI0_CTL1
 * |        |          |04 = SPI0_SS
 * |        |          |05 = UART3_nRTS
 * |        |          |06 = USCI1_CTL0
 * |        |          |09 = UART0_TXD
 * |        |          |16 = TK_TK14
 * |        |          |20 = LPSPI0_SS
 * |        |          |21 = LPUART0_TXD
 * @var SYS_T::GPD_MFP1
 * Offset: 0x534  GPIOD Multiple Function Control Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PD4MFP    |PD.4 Multi-function Pin Selection
 * |        |          |03 = USCI0_CTL0
 * |        |          |04 = I2C1_SDA
 * |        |          |06 = USCI1_CTL1
 * |        |          |16 = TK_TK17
 * |[12:8]  |PD5MFP    |PD.5 Multi-function Pin Selection
 * |        |          |04 = I2C1_SCL
 * |        |          |06 = USCI1_DAT0
 * |        |          |16 = TK_TK16
 * |[20:16] |PD6MFP    |PD.6 Multi-function Pin Selection
 * |        |          |03 = UART1_RXD
 * |        |          |04 = I2C0_SDA
 * |        |          |06 = USCI1_DAT1
 * |        |          |16 = TK_TK15
 * |        |          |22 = LPI2C0_SDA
 * |[28:24] |PD7MFP    |PD.7 Multi-function Pin Selection
 * |        |          |03 = UART1_TXD
 * |        |          |04 = I2C0_SCL
 * |        |          |06 = USCI1_CLK
 * |        |          |16 = TK_TK14
 * |        |          |22 = LPI2C0_SCL
 * @var SYS_T::GPD_MFP2
 * Offset: 0x538  GPIOD Multiple Function Control Register 2
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PD8MFP    |PD.8 Multi-function Pin Selection
 * |        |          |02 = EBI_AD6
 * |        |          |03 = I2C2_SDA
 * |        |          |04 = UART2_nRTS
 * |        |          |05 = UART7_RXD
 * |[12:8]  |PD9MFP    |PD.9 Multi-function Pin Selection
 * |        |          |02 = EBI_AD7
 * |        |          |03 = I2C2_SCL
 * |        |          |04 = UART2_nCTS
 * |        |          |05 = UART7_TXD
 * |[20:16] |PD10MFP   |PD.10 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH16
 * |        |          |02 = EBI_nCS2
 * |        |          |03 = UART1_RXD
 * |        |          |04 = CANFD0_RXD
 * |        |          |10 = EQEI0_B
 * |        |          |15 = INT7
 * |[28:24] |PD11MFP   |PD.11 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH17
 * |        |          |02 = EBI_nCS1
 * |        |          |03 = UART1_TXD
 * |        |          |04 = CANFD0_TXD
 * |        |          |10 = EQEI0_A
 * |        |          |15 = INT6
 * @var SYS_T::GPD_MFP3
 * Offset: 0x53C  GPIOD Multiple Function Control Register 3
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PD12MFP   |PD.12 Multi-function Pin Selection
 * |        |          |01 = EADC0_CH18
 * |        |          |02 = EBI_nCS0
 * |        |          |05 = CANFD1_RXD
 * |        |          |07 = UART2_RXD
 * |        |          |09 = PWM0_CH5
 * |        |          |10 = EQEI0_INDEX
 * |        |          |13 = CLKO
 * |        |          |14 = EADC0_ST
 * |        |          |15 = INT5
 * |        |          |16 = TK_SE
 * |        |          |23 = LPADC0_ST
 * |[12:8]  |PD13MFP   |PD.13 Multi-function Pin Selection
 * |        |          |02 = EBI_AD10
 * |        |          |04 = SPI0_I2SMCLK
 * |        |          |05 = SPI1_I2SMCLK
 * |        |          |11 = PWM0_CH0
 * |        |          |14 = CLKO
 * |        |          |15 = EADC0_ST
 * |        |          |16 = TK_SE
 * |        |          |23 = LPADC0_ST
 * |[20:16] |PD14MFP   |PD.14 Multi-function Pin Selection
 * |        |          |02 = EBI_nCS0
 * |        |          |03 = SPI3_I2SMCLK
 * |        |          |05 = SPI0_I2SMCLK
 * |        |          |11 = EPWM0_CH4
 * |[28:24] |PD15MFP   |PD.15 Multi-function Pin Selection
 * |        |          |12 = EPWM0_CH5
 * |        |          |13 = ACMP2_WLAT
 * |        |          |14 = TM3
 * |        |          |15 = INT1
 * |        |          |16 = TK_TK2
 * |        |          |17 = UTCPD0_FRSTX2
 * |        |          |18 = UTCPD0_DISCHG
 * @var SYS_T::GPE_MFP0
 * Offset: 0x540  GPIOE Multiple Function Control Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PE0MFP    |PE.0 Multi-function Pin Selection
 * |        |          |02 = EBI_AD11
 * |        |          |03 = QSPI0_MOSI0
 * |        |          |06 = SPI1_MOSI
 * |        |          |07 = UART3_RXD
 * |        |          |08 = I2C1_SDA
 * |        |          |09 = UART4_nRTS
 * |        |          |23 = LPIO0
 * |[12:8]  |PE1MFP    |PE.1 Multi-function Pin Selection
 * |        |          |02 = EBI_AD10
 * |        |          |03 = QSPI0_MISO0
 * |        |          |06 = SPI1_MISO
 * |        |          |07 = UART3_TXD
 * |        |          |08 = I2C1_SCL
 * |        |          |09 = UART4_nCTS
 * |        |          |23 = LPIO1
 * |[20:16] |PE2MFP    |PE.2 Multi-function Pin Selection
 * |        |          |02 = EBI_ALE
 * |        |          |05 = SPI3_MOSI
 * |        |          |07 = USCI0_CLK
 * |        |          |08 = UART6_nCTS
 * |        |          |09 = UART7_RXD
 * |        |          |11 = EQEI0_B
 * |        |          |12 = EPWM0_CH5
 * |        |          |13 = PWM0_CH0
 * |[28:24] |PE3MFP    |PE.3 Multi-function Pin Selection
 * |        |          |02 = EBI_MCLK
 * |        |          |05 = SPI3_MISO
 * |        |          |07 = USCI0_DAT0
 * |        |          |08 = UART6_nRTS
 * |        |          |09 = UART7_TXD
 * |        |          |11 = EQEI0_A
 * |        |          |12 = EPWM0_CH4
 * |        |          |13 = PWM0_CH1
 * @var SYS_T::GPE_MFP1
 * Offset: 0x544  GPIOE Multiple Function Control Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PE4MFP    |PE.4 Multi-function Pin Selection
 * |        |          |02 = EBI_nWR
 * |        |          |05 = SPI3_CLK
 * |        |          |07 = USCI0_DAT1
 * |        |          |08 = UART6_RXD
 * |        |          |09 = UART7_nCTS
 * |        |          |11 = EQEI0_INDEX
 * |        |          |12 = EPWM0_CH3
 * |        |          |13 = PWM0_CH2
 * |[12:8]  |PE5MFP    |PE.5 Multi-function Pin Selection
 * |        |          |02 = EBI_nRD
 * |        |          |05 = SPI3_SS
 * |        |          |07 = USCI0_CTL1
 * |        |          |08 = UART6_TXD
 * |        |          |09 = UART7_nRTS
 * |        |          |11 = EQEI1_B
 * |        |          |12 = EPWM0_CH2
 * |        |          |13 = PWM0_CH3
 * |[20:16] |PE6MFP    |PE.6 Multi-function Pin Selection
 * |        |          |05 = SPI3_I2SMCLK
 * |        |          |07 = USCI0_CTL0
 * |        |          |08 = UART5_RXD
 * |        |          |09 = CANFD1_RXD
 * |        |          |11 = EQEI1_A
 * |        |          |12 = EPWM0_CH1
 * |        |          |13 = PWM0_CH4
 * |[28:24] |PE7MFP    |PE.7 Multi-function Pin Selection
 * |        |          |08 = UART5_TXD
 * |        |          |09 = CANFD1_TXD
 * |        |          |11 = EQEI1_INDEX
 * |        |          |12 = EPWM0_CH0
 * |        |          |13 = PWM0_CH5
 * @var SYS_T::GPE_MFP2
 * Offset: 0x548  GPIOE Multiple Function Control Register 2
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PE8MFP    |PE.8 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR10
 * |        |          |05 = SPI2_CLK
 * |        |          |06 = USCI1_CTL1
 * |        |          |07 = UART2_TXD
 * |        |          |09 = PWM0_BRAKE0
 * |        |          |10 = EPWM0_CH0
 * |        |          |11 = EPWM0_BRAKE0
 * |        |          |12 = ECAP0_IC0
 * |[12:8]  |PE9MFP    |PE.9 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR11
 * |        |          |05 = SPI2_MISO
 * |        |          |06 = USCI1_CTL0
 * |        |          |07 = UART2_RXD
 * |        |          |09 = PWM0_BRAKE1
 * |        |          |10 = EPWM0_CH1
 * |        |          |11 = EPWM0_BRAKE1
 * |        |          |12 = ECAP0_IC1
 * |[20:16] |PE10MFP   |PE.10 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR12
 * |        |          |05 = SPI2_MOSI
 * |        |          |06 = USCI1_DAT0
 * |        |          |07 = UART3_TXD
 * |        |          |09 = PWM1_BRAKE0
 * |        |          |10 = EPWM0_CH2
 * |        |          |11 = EPWM1_BRAKE0
 * |        |          |12 = ECAP0_IC2
 * |[28:24] |PE11MFP   |PE.11 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR13
 * |        |          |05 = SPI2_SS
 * |        |          |06 = USCI1_DAT1
 * |        |          |07 = UART3_RXD
 * |        |          |08 = UART1_nCTS
 * |        |          |09 = PWM1_BRAKE1
 * |        |          |10 = EPWM0_CH3
 * |        |          |11 = EPWM1_BRAKE1
 * |        |          |13 = ECAP1_IC2
 * @var SYS_T::GPE_MFP3
 * Offset: 0x54C  GPIOE Multiple Function Control Register 3
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PE12MFP   |PE.12 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR14
 * |        |          |05 = SPI2_I2SMCLK
 * |        |          |06 = USCI1_CLK
 * |        |          |08 = UART1_nRTS
 * |        |          |10 = EPWM0_CH4
 * |        |          |13 = ECAP1_IC1
 * |[12:8]  |PE13MFP   |PE.13 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR15
 * |        |          |04 = I2C0_SCL
 * |        |          |05 = UART4_nRTS
 * |        |          |08 = UART1_TXD
 * |        |          |10 = EPWM0_CH5
 * |        |          |11 = EPWM1_CH0
 * |        |          |12 = PWM1_CH5
 * |        |          |13 = ECAP1_IC0
 * |        |          |22 = LPI2C0_SCL
 * |[20:16] |PE14MFP   |PE.14 Multi-function Pin Selection
 * |        |          |02 = EBI_AD8
 * |        |          |03 = UART2_TXD
 * |        |          |04 = CANFD0_TXD
 * |        |          |06 = UART6_TXD
 * |        |          |12 = EPWM0_CH1
 * |        |          |13 = TM2
 * |        |          |14 = CLKO
 * |        |          |15 = INT4
 * |        |          |16 = TK_TK9
 * |[28:24] |PE15MFP   |PE.15 Multi-function Pin Selection
 * |        |          |02 = EBI_AD9
 * |        |          |03 = UART2_RXD
 * |        |          |04 = CANFD0_RXD
 * |        |          |06 = UART6_RXD
 * @var SYS_T::GPF_MFP0
 * Offset: 0x550  GPIOF Multiple Function Control Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PF0MFP    |PF.0 Multi-function Pin Selection
 * |        |          |02 = UART1_TXD
 * |        |          |03 = I2C1_SCL
 * |        |          |04 = UART0_TXD
 * |        |          |11 = EPWM1_CH4
 * |        |          |12 = PWM1_CH0
 * |        |          |14 = ICE_DAT
 * |        |          |17 = UTCPD0_FRSTX2
 * |        |          |18 = UTCPD0_DISCHG
 * |        |          |21 = LPUART0_TXD
 * |        |          |23 = LPIO2
 * |[12:8]  |PF1MFP    |PF.1 Multi-function Pin Selection
 * |        |          |02 = UART1_RXD
 * |        |          |03 = I2C1_SDA
 * |        |          |04 = UART0_RXD
 * |        |          |06 = SPI3_I2SMCLK
 * |        |          |11 = EPWM1_CH5
 * |        |          |12 = PWM1_CH1
 * |        |          |14 = ICE_CLK
 * |        |          |17 = UTCPD0_FRSTX1
 * |        |          |18 = UTCPD0_DISCHG
 * |        |          |21 = LPUART0_RXD
 * |        |          |23 = LPIO3
 * |[20:16] |PF2MFP    |PF.2 Multi-function Pin Selection
 * |        |          |02 = EBI_nCS1
 * |        |          |03 = UART0_RXD
 * |        |          |04 = I2C0_SDA
 * |        |          |05 = QSPI0_CLK
 * |        |          |10 = XT1_OUT
 * |        |          |11 = PWM1_CH1
 * |        |          |12 = EQEI1_B
 * |        |          |13 = ECAP1_IC2
 * |        |          |21 = LPUART0_RXD
 * |        |          |22 = LPI2C0_SDA
 * |[28:24] |PF3MFP    |PF.3 Multi-function Pin Selection
 * |        |          |02 = EBI_nCS0
 * |        |          |03 = UART0_TXD
 * |        |          |04 = I2C0_SCL
 * |        |          |10 = XT1_IN
 * |        |          |11 = PWM1_CH0
 * |        |          |12 = EQEI1_A
 * |        |          |13 = ECAP1_IC1
 * |        |          |21 = LPUART0_TXD
 * |        |          |22 = LPI2C0_SCL
 * @var SYS_T::GPF_MFP1
 * Offset: 0x554  GPIOF Multiple Function Control Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PF4MFP    |PF.4 Multi-function Pin Selection
 * |        |          |02 = UART2_TXD
 * |        |          |04 = UART2_nRTS
 * |        |          |07 = EPWM0_CH1
 * |        |          |08 = PWM0_CH5
 * |        |          |10 = X32_OUT
 * |        |          |12 = EQEI1_INDEX
 * |        |          |13 = ECAP1_IC0
 * |        |          |17 = UTCPD0_VBSRCEN
 * |[12:8]  |PF5MFP    |PF.5 Multi-function Pin Selection
 * |        |          |02 = UART2_RXD
 * |        |          |04 = UART2_nCTS
 * |        |          |07 = EPWM0_CH0
 * |        |          |08 = PWM0_CH4
 * |        |          |09 = EPWM0_SYNC_OUT
 * |        |          |10 = X32_IN
 * |        |          |11 = EADC0_ST
 * |        |          |17 = UTCPD0_VBSNKEN
 * |[20:16] |PF6MFP    |PF.6 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR19
 * |        |          |05 = SPI0_MOSI
 * |        |          |06 = UART4_RXD
 * |        |          |07 = EBI_nCS0
 * |        |          |09 = EPWM1_BRAKE0
 * |        |          |10 = TAMPER0
 * |        |          |11 = EPWM0_BRAKE0
 * |        |          |12 = EPWM0_CH4
 * |        |          |13 = PWM1_BRAKE0
 * |        |          |14 = PWM0_BRAKE0
 * |        |          |15 = CLKO
 * |        |          |20 = LPSPI0_MOSI
 * |[28:24] |PF7MFP    |PF.7 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR18
 * |        |          |05 = SPI0_MISO
 * |        |          |06 = UART4_TXD
 * |        |          |10 = TAMPER1
 * |        |          |14 = TM3
 * |        |          |15 = INT5
 * |        |          |20 = LPSPI0_MISO
 * @var SYS_T::GPF_MFP2
 * Offset: 0x558  GPIOF Multiple Function Control Register 2
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PF8MFP    |PF.8 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR17
 * |        |          |05 = SPI0_CLK
 * |        |          |06 = UART5_nCTS
 * |        |          |08 = CANFD1_RXD
 * |        |          |10 = TAMPER2
 * |        |          |20 = LPSPI0_CLK
 * |[12:8]  |PF9MFP    |PF.9 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR16
 * |        |          |05 = SPI0_SS
 * |        |          |06 = UART5_nRTS
 * |        |          |08 = CANFD1_TXD
 * |        |          |20 = LPSPI0_SS
 * |[20:16] |PF10MFP   |PF.10 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR15
 * |        |          |05 = SPI0_I2SMCLK
 * |        |          |06 = UART5_RXD
 * |[28:24] |PF11MFP   |PF.11 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR14
 * |        |          |03 = SPI2_MOSI
 * |        |          |06 = UART5_TXD
 * |        |          |13 = TM3
 * @var SYS_T::GPG_MFP0
 * Offset: 0x560  GPIOG Multiple Function Control Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[20:16] |PG2MFP    |PG.2 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR11
 * |        |          |03 = SPI2_SS
 * |        |          |04 = I2C0_SMBAL
 * |        |          |05 = I2C1_SCL
 * |        |          |09 = I2C3_SMBAL
 * |        |          |13 = TM0
 * |        |          |23 = LPTM0
 * |[28:24] |PG3MFP    |PG.3 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR12
 * |        |          |03 = SPI2_CLK
 * |        |          |04 = I2C0_SMBSUS
 * |        |          |05 = I2C1_SDA
 * |        |          |09 = I2C3_SMBSUS
 * |        |          |13 = TM1
 * |        |          |23 = LPTM1
 * @var SYS_T::GPG_MFP1
 * Offset: 0x564  GPIOG Multiple Function Control Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PG4MFP    |PG.4 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR13
 * |        |          |03 = SPI2_MISO
 * |        |          |13 = TM2
 * @var SYS_T::GPG_MFP2
 * Offset: 0x568  GPIOG Multiple Function Control Register 2
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[12:8]  |PG9MFP    |PG.9 Multi-function Pin Selection
 * |        |          |02 = EBI_AD0
 * |        |          |12 = PWM0_CH5
 * |[20:16] |PG10MFP   |PG.10 Multi-function Pin Selection
 * |        |          |02 = EBI_AD1
 * |        |          |12 = PWM0_CH4
 * |[28:24] |PG11MFP   |PG.11 Multi-function Pin Selection
 * |        |          |02 = EBI_AD2
 * |        |          |06 = UART7_TXD
 * |        |          |12 = PWM0_CH3
 * @var SYS_T::GPG_MFP3
 * Offset: 0x56C  GPIOG Multiple Function Control Register 3
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PG12MFP   |PG.12 Multi-function Pin Selection
 * |        |          |02 = EBI_AD3
 * |        |          |06 = UART7_RXD
 * |        |          |12 = PWM0_CH2
 * |[12:8]  |PG13MFP   |PG.13 Multi-function Pin Selection
 * |        |          |02 = EBI_AD4
 * |        |          |06 = UART6_TXD
 * |        |          |12 = PWM0_CH1
 * |[20:16] |PG14MFP   |PG.14 Multi-function Pin Selection
 * |        |          |02 = EBI_AD5
 * |        |          |06 = UART6_RXD
 * |        |          |12 = PWM0_CH0
 * |[28:24] |PG15MFP   |PG.15 Multi-function Pin Selection
 * |        |          |14 = CLKO
 * |        |          |15 = EADC0_ST
 * |        |          |16 = TK_SE
 * |        |          |23 = LPADC0_ST
 * @var SYS_T::GPH_MFP1
 * Offset: 0x574  GPIOH Multiple Function Control Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PH4MFP    |PH.4 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR3
 * |        |          |03 = SPI1_MISO
 * |        |          |04 = UART7_nRTS
 * |        |          |05 = UART6_TXD
 * |[12:8]  |PH5MFP    |PH.5 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR2
 * |        |          |03 = SPI1_MOSI
 * |        |          |04 = UART7_nCTS
 * |        |          |05 = UART6_RXD
 * |[20:16] |PH6MFP    |PH.6 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR1
 * |        |          |03 = SPI1_CLK
 * |        |          |04 = UART7_TXD
 * |[28:24] |PH7MFP    |PH.7 Multi-function Pin Selection
 * |        |          |02 = EBI_ADR0
 * |        |          |03 = SPI1_SS
 * |        |          |04 = UART7_RXD
 * @var SYS_T::GPH_MFP2
 * Offset: 0x578  GPIOH Multiple Function Control Register 2
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |PH8MFP    |PH.8 Multi-function Pin Selection
 * |        |          |02 = EBI_AD12
 * |        |          |03 = QSPI0_CLK
 * |        |          |06 = SPI1_CLK
 * |        |          |07 = UART3_nRTS
 * |        |          |08 = I2C1_SMBAL
 * |        |          |09 = I2C2_SCL
 * |        |          |10 = UART1_TXD
 * |[12:8]  |PH9MFP    |PH.9 Multi-function Pin Selection
 * |        |          |02 = EBI_AD13
 * |        |          |03 = QSPI0_SS
 * |        |          |06 = SPI1_SS
 * |        |          |07 = UART3_nCTS
 * |        |          |08 = I2C1_SMBSUS
 * |        |          |09 = I2C2_SDA
 * |        |          |10 = UART1_RXD
 * |[20:16] |PH10MFP   |PH.10 Multi-function Pin Selection
 * |        |          |02 = EBI_AD14
 * |        |          |03 = QSPI0_MISO1
 * |        |          |06 = SPI1_I2SMCLK
 * |        |          |07 = UART4_TXD
 * |        |          |08 = UART0_TXD
 * |        |          |21 = LPUART0_TXD
 * |[28:24] |PH11MFP   |PH.11 Multi-function Pin Selection
 * |        |          |02 = EBI_AD15
 * |        |          |03 = QSPI0_MOSI1
 * |        |          |07 = UART4_RXD
 * |        |          |08 = UART0_RXD
 * |        |          |11 = EPWM0_CH5
 * |        |          |21 = LPUART0_RXD
 */
    __I  uint32_t PDID;                  /*!< [0x0000] Part Device Identification Number Register                       */
    __IO uint32_t RSTSTS;                /*!< [0x0004] System Reset Status Register                                     */
    __IO uint32_t IPRST0;                /*!< [0x0008] Peripheral Reset Control Register 0                              */
    __IO uint32_t IPRST1;                /*!< [0x000c] Peripheral Reset Control Register 1                              */
    __IO uint32_t IPRST2;                /*!< [0x0010] Peripheral Reset Control Register 2                              */
    __I  uint32_t RESERVE0[1];
    __IO uint32_t BODCTL;                /*!< [0x0018] Brown-out Detector Control Register                              */
    __IO uint32_t IVSCTL;                /*!< [0x001c] Internal Voltage Source Control Register                         */
    __IO uint32_t IPRST3;                /*!< [0x0020] Peripheral Reset Control Register 3                              */
    __I  uint32_t RESERVE1[1];
    __IO uint32_t VREFCTL;               /*!< [0x0028] VREF Control Register                                            */
    __IO uint32_t USBPHY;                /*!< [0x002c] USB PHY Control Register                                         */
    __IO uint32_t UTCPDCTL;              /*!< [0x0030] UTCPD Control Register                                           */
    __I  uint32_t RESERVE2[19];
    __IO uint32_t GPA_MFOS;              /*!< [0x0080] GPIOA Multiple Function Output Select Register                   */
    __IO uint32_t GPB_MFOS;              /*!< [0x0084] GPIOB Multiple Function Output Select Register                   */
    __IO uint32_t GPC_MFOS;              /*!< [0x0088] GPIOC Multiple Function Output Select Register                   */
    __IO uint32_t GPD_MFOS;              /*!< [0x008c] GPIOD Multiple Function Output Select Register                   */
    __IO uint32_t GPE_MFOS;              /*!< [0x0090] GPIOE Multiple Function Output Select Register                   */
    __IO uint32_t GPF_MFOS;              /*!< [0x0094] GPIOF Multiple Function Output Select Register                   */
    __IO uint32_t GPG_MFOS;              /*!< [0x0098] GPIOG Multiple Function Output Select Register                   */
    __IO uint32_t GPH_MFOS;              /*!< [0x009c] GPIOH Multiple Function Output Select Register                   */
    __I  uint32_t RESERVE3[4];
    __IO uint32_t MIRCTCTL;              /*!< [0x00b0] MIRC1M Trim Control Register                                     */
    __IO uint32_t MIRCTIEN;              /*!< [0x00b4] MIRC1M Trim Interrupt Enable Register                            */
    __IO uint32_t MIRCTISTS;             /*!< [0x00b8] MIRC1M Trim Interrupt Status Register                            */
    __I  uint32_t RESERVE4[1];
    __IO uint32_t SRAM_INTCTL;           /*!< [0x00c0] System SRAM Interrupt Enable Control Register                    */
    __IO uint32_t SRAM_STATUS;           /*!< [0x00c4] System SRAM Parity Error Status Register                         */
    __I  uint32_t SRAM_ERRADDR;          /*!< [0x00c8] System SRAM Parity Check Error Address Register                  */
    __I  uint32_t RESERVE5[1];
    __IO uint32_t SRAM_BISTCTL;          /*!< [0x00d0] System SRAM BIST Test Control Register                           */
    __I  uint32_t SRAM_BISTSTS;          /*!< [0x00d4] System SRAM BIST Test Status Register                            */
    __I  uint32_t RESERVE6[1];
    __IO uint32_t SRAMPC0;               /*!< [0x00dc] SRAM Power Mode Control Register 0                               */
    __I  uint32_t RESERVE7[1];
    __IO uint32_t HIRCTCTL;              /*!< [0x00e4] HIRC48M Trim Control Register                                    */
    __IO uint32_t HIRCTIEN;              /*!< [0x00e8] HIRC48M Trim Interrupt Enable Register                           */
    __IO uint32_t HIRCTISTS;             /*!< [0x00ec] HIRC48M Trim Interrupt Status Register                           */
    __IO uint32_t IRCTCTL;               /*!< [0x00f0] HIRC Trim Control Register                                       */
    __IO uint32_t IRCTIEN;               /*!< [0x00f4] HIRC Trim Interrupt Enable Register                              */
    __IO uint32_t IRCTISTS;              /*!< [0x00f8] HIRC Trim Interrupt Status Register                              */
    __IO uint32_t RAMPGCTL;              /*!< [0x00fc] RRAM Power Gating Contol Register                                */
    __O  uint32_t REGLCTL;               /*!< [0x0100] Register Lock Control Register                                   */
    __I  uint32_t RESERVE8[58];
    __IO uint32_t PORDISAN;              /*!< [0x01ec] Analog POR Disable Control Register                              */
    __I  uint32_t RESERVE9[1];
    __I  uint32_t CSERVER;               /*!< [0x01f4] Chip Series Version Register                                     */
    __IO uint32_t PLCTL;                 /*!< [0x01f8] Power Level Control Register                                     */
    __IO uint32_t PLSTS;                 /*!< [0x01fc] Power Level Status Register                                      */
    __I  uint32_t RESERVE10[68];
    __IO uint32_t INIVTOR;               /*!< [0x0310] Initial VTOR Control Register                                    */
    __I  uint32_t RESERVE11[123];
    __IO uint32_t GPA_MFP0;              /*!< [0x0500] GPIOA Multiple Function Control Register 0                       */
    __IO uint32_t GPA_MFP1;              /*!< [0x0504] GPIOA Multiple Function Control Register 1                       */
    __IO uint32_t GPA_MFP2;              /*!< [0x0508] GPIOA Multiple Function Control Register 2                       */
    __IO uint32_t GPA_MFP3;              /*!< [0x050c] GPIOA Multiple Function Control Register 3                       */
    __IO uint32_t GPB_MFP0;              /*!< [0x0510] GPIOB Multiple Function Control Register 0                       */
    __IO uint32_t GPB_MFP1;              /*!< [0x0514] GPIOB Multiple Function Control Register 1                       */
    __IO uint32_t GPB_MFP2;              /*!< [0x0518] GPIOB Multiple Function Control Register 2                       */
    __IO uint32_t GPB_MFP3;              /*!< [0x051c] GPIOB Multiple Function Control Register 3                       */
    __IO uint32_t GPC_MFP0;              /*!< [0x0520] GPIOC Multiple Function Control Register 0                       */
    __IO uint32_t GPC_MFP1;              /*!< [0x0524] GPIOC Multiple Function Control Register 1                       */
    __IO uint32_t GPC_MFP2;              /*!< [0x0528] GPIOC Multiple Function Control Register 2                       */
    __IO uint32_t GPC_MFP3;              /*!< [0x052c] GPIOC Multiple Function Control Register 3                       */
    __IO uint32_t GPD_MFP0;              /*!< [0x0530] GPIOD Multiple Function Control Register 0                       */
    __IO uint32_t GPD_MFP1;              /*!< [0x0534] GPIOD Multiple Function Control Register 1                       */
    __IO uint32_t GPD_MFP2;              /*!< [0x0538] GPIOD Multiple Function Control Register 2                       */
    __IO uint32_t GPD_MFP3;              /*!< [0x053c] GPIOD Multiple Function Control Register 3                       */
    __IO uint32_t GPE_MFP0;              /*!< [0x0540] GPIOE Multiple Function Control Register 0                       */
    __IO uint32_t GPE_MFP1;              /*!< [0x0544] GPIOE Multiple Function Control Register 1                       */
    __IO uint32_t GPE_MFP2;              /*!< [0x0548] GPIOE Multiple Function Control Register 2                       */
    __IO uint32_t GPE_MFP3;              /*!< [0x054c] GPIOE Multiple Function Control Register 3                       */
    __IO uint32_t GPF_MFP0;              /*!< [0x0550] GPIOF Multiple Function Control Register 0                       */
    __IO uint32_t GPF_MFP1;              /*!< [0x0554] GPIOF Multiple Function Control Register 1                       */
    __IO uint32_t GPF_MFP2;              /*!< [0x0558] GPIOF Multiple Function Control Register 2                       */
    __I  uint32_t RESERVE12[1];
    __IO uint32_t GPG_MFP0;              /*!< [0x0560] GPIOG Multiple Function Control Register 0                       */
    __IO uint32_t GPG_MFP1;              /*!< [0x0564] GPIOG Multiple Function Control Register 1                       */
    __IO uint32_t GPG_MFP2;              /*!< [0x0568] GPIOG Multiple Function Control Register 2                       */
    __IO uint32_t GPG_MFP3;              /*!< [0x056c] GPIOG Multiple Function Control Register 3                       */
    __I  uint32_t RESERVE13[1];
    __IO uint32_t GPH_MFP1;              /*!< [0x0574] GPIOH Multiple Function Control Register 1                       */
    __IO uint32_t GPH_MFP2;              /*!< [0x0578] GPIOH Multiple Function Control Register 2                       */

} SYS_T;
#endif
/**
    @addtogroup SYS_CONST SYS Bit Field Definition
    Constant Definitions for SYS Controller
@{ */

#define SYS_PDID_PDID_Pos                (0)                                               /*!< SYS_T::PDID: PDID Position             */
#define SYS_PDID_PDID_Msk                (0xfffffffful << SYS_PDID_PDID_Pos)               /*!< SYS_T::PDID: PDID Mask                 */

#define SYS_RSTSTS_PORF_Pos              (0)                                               /*!< SYS_T::RSTSTS: PORF Position           */
#define SYS_RSTSTS_PORF_Msk              (0x1ul << SYS_RSTSTS_PORF_Pos)                    /*!< SYS_T::RSTSTS: PORF Mask               */

#define SYS_RSTSTS_PINRF_Pos             (1)                                               /*!< SYS_T::RSTSTS: PINRF Position          */
#define SYS_RSTSTS_PINRF_Msk             (0x1ul << SYS_RSTSTS_PINRF_Pos)                   /*!< SYS_T::RSTSTS: PINRF Mask              */

#define SYS_RSTSTS_WDTRF_Pos             (2)                                               /*!< SYS_T::RSTSTS: WDTRF Position          */
#define SYS_RSTSTS_WDTRF_Msk             (0x1ul << SYS_RSTSTS_WDTRF_Pos)                   /*!< SYS_T::RSTSTS: WDTRF Mask              */

#define SYS_RSTSTS_LVRF_Pos              (3)                                               /*!< SYS_T::RSTSTS: LVRF Position           */
#define SYS_RSTSTS_LVRF_Msk              (0x1ul << SYS_RSTSTS_LVRF_Pos)                    /*!< SYS_T::RSTSTS: LVRF Mask               */

#define SYS_RSTSTS_BODRF_Pos             (4)                                               /*!< SYS_T::RSTSTS: BODRF Position          */
#define SYS_RSTSTS_BODRF_Msk             (0x1ul << SYS_RSTSTS_BODRF_Pos)                   /*!< SYS_T::RSTSTS: BODRF Mask              */

#define SYS_RSTSTS_SYSRF_Pos             (5)                                               /*!< SYS_T::RSTSTS: SYSRF Position          */
#define SYS_RSTSTS_SYSRF_Msk             (0x1ul << SYS_RSTSTS_SYSRF_Pos)                   /*!< SYS_T::RSTSTS: SYSRF Mask              */

#define SYS_RSTSTS_HRESETRF_Pos          (6)                                               /*!< SYS_T::RSTSTS: HRESETRF Position       */
#define SYS_RSTSTS_HRESETRF_Msk          (0x1ul << SYS_RSTSTS_HRESETRF_Pos)                /*!< SYS_T::RSTSTS: HRESETRF Mask           */

#define SYS_RSTSTS_CPURF_Pos             (7)                                               /*!< SYS_T::RSTSTS: CPURF Position          */
#define SYS_RSTSTS_CPURF_Msk             (0x1ul << SYS_RSTSTS_CPURF_Pos)                   /*!< SYS_T::RSTSTS: CPURF Mask              */

#define SYS_RSTSTS_CPULKRF_Pos           (8)                                               /*!< SYS_T::RSTSTS: CPULKRF Position        */
#define SYS_RSTSTS_CPULKRF_Msk           (0x1ul << SYS_RSTSTS_CPULKRF_Pos)                 /*!< SYS_T::RSTSTS: CPULKRF Mask            */

#define SYS_IPRST0_CHIPRST_Pos           (0)                                               /*!< SYS_T::IPRST0: CHIPRST Position        */
#define SYS_IPRST0_CHIPRST_Msk           (0x1ul << SYS_IPRST0_CHIPRST_Pos)                 /*!< SYS_T::IPRST0: CHIPRST Mask            */

#define SYS_IPRST0_CPURST_Pos            (1)                                               /*!< SYS_T::IPRST0: CPURST Position         */
#define SYS_IPRST0_CPURST_Msk            (0x1ul << SYS_IPRST0_CPURST_Pos)                  /*!< SYS_T::IPRST0: CPURST Mask             */

#define SYS_IPRST0_PDMA0RST_Pos          (2)                                               /*!< SYS_T::IPRST0: PDMA0RST Position       */
#define SYS_IPRST0_PDMA0RST_Msk          (0x1ul << SYS_IPRST0_PDMA0RST_Pos)                /*!< SYS_T::IPRST0: PDMA0RST Mask           */

#define SYS_IPRST0_EBIRST_Pos            (3)                                               /*!< SYS_T::IPRST0: EBIRST Position         */
#define SYS_IPRST0_EBIRST_Msk            (0x1ul << SYS_IPRST0_EBIRST_Pos)                  /*!< SYS_T::IPRST0: EBIRST Mask             */

#define SYS_IPRST0_USBHRST_Pos           (4)                                               /*!< SYS_T::IPRST0: USBHRST Position        */
#define SYS_IPRST0_USBHRST_Msk           (0x1ul << SYS_IPRST0_USBHRST_Pos)                 /*!< SYS_T::IPRST0: USBHRST Mask            */

#define SYS_IPRST0_CRCRST_Pos            (7)                                               /*!< SYS_T::IPRST0: CRCRST Position         */
#define SYS_IPRST0_CRCRST_Msk            (0x1ul << SYS_IPRST0_CRCRST_Pos)                  /*!< SYS_T::IPRST0: CRCRST Mask             */

#define SYS_IPRST0_CRPTRST_Pos           (12)                                              /*!< SYS_T::IPRST0: CRPTRST Position        */
#define SYS_IPRST0_CRPTRST_Msk           (0x1ul << SYS_IPRST0_CRPTRST_Pos)                 /*!< SYS_T::IPRST0: CRPTRST Mask            */

#define SYS_IPRST0_CANFD0RST_Pos         (20)                                              /*!< SYS_T::IPRST0: CANFD0RST Position      */
#define SYS_IPRST0_CANFD0RST_Msk         (0x1ul << SYS_IPRST0_CANFD0RST_Pos)               /*!< SYS_T::IPRST0: CANFD0RST Mask          */

#define SYS_IPRST0_CANFD1RST_Pos         (21)                                              /*!< SYS_T::IPRST0: CANFD1RST Position      */
#define SYS_IPRST0_CANFD1RST_Msk         (0x1ul << SYS_IPRST0_CANFD1RST_Pos)               /*!< SYS_T::IPRST0: CANFD1RST Mask          */

#define SYS_IPRST1_GPIORST_Pos           (1)                                               /*!< SYS_T::IPRST1: GPIORST Position        */
#define SYS_IPRST1_GPIORST_Msk           (0x1ul << SYS_IPRST1_GPIORST_Pos)                 /*!< SYS_T::IPRST1: GPIORST Mask            */

#define SYS_IPRST1_TMR0RST_Pos           (2)                                               /*!< SYS_T::IPRST1: TMR0RST Position        */
#define SYS_IPRST1_TMR0RST_Msk           (0x1ul << SYS_IPRST1_TMR0RST_Pos)                 /*!< SYS_T::IPRST1: TMR0RST Mask            */

#define SYS_IPRST1_TMR1RST_Pos           (3)                                               /*!< SYS_T::IPRST1: TMR1RST Position        */
#define SYS_IPRST1_TMR1RST_Msk           (0x1ul << SYS_IPRST1_TMR1RST_Pos)                 /*!< SYS_T::IPRST1: TMR1RST Mask            */

#define SYS_IPRST1_TMR2RST_Pos           (4)                                               /*!< SYS_T::IPRST1: TMR2RST Position        */
#define SYS_IPRST1_TMR2RST_Msk           (0x1ul << SYS_IPRST1_TMR2RST_Pos)                 /*!< SYS_T::IPRST1: TMR2RST Mask            */

#define SYS_IPRST1_TMR3RST_Pos           (5)                                               /*!< SYS_T::IPRST1: TMR3RST Position        */
#define SYS_IPRST1_TMR3RST_Msk           (0x1ul << SYS_IPRST1_TMR3RST_Pos)                 /*!< SYS_T::IPRST1: TMR3RST Mask            */

#define SYS_IPRST1_ACMP01RST_Pos         (7)                                               /*!< SYS_T::IPRST1: ACMP01RST Position      */
#define SYS_IPRST1_ACMP01RST_Msk         (0x1ul << SYS_IPRST1_ACMP01RST_Pos)               /*!< SYS_T::IPRST1: ACMP01RST Mask          */

#define SYS_IPRST1_I2C0RST_Pos           (8)                                               /*!< SYS_T::IPRST1: I2C0RST Position        */
#define SYS_IPRST1_I2C0RST_Msk           (0x1ul << SYS_IPRST1_I2C0RST_Pos)                 /*!< SYS_T::IPRST1: I2C0RST Mask            */

#define SYS_IPRST1_I2C1RST_Pos           (9)                                               /*!< SYS_T::IPRST1: I2C1RST Position        */
#define SYS_IPRST1_I2C1RST_Msk           (0x1ul << SYS_IPRST1_I2C1RST_Pos)                 /*!< SYS_T::IPRST1: I2C1RST Mask            */

#define SYS_IPRST1_I2C2RST_Pos           (10)                                              /*!< SYS_T::IPRST1: I2C2RST Position        */
#define SYS_IPRST1_I2C2RST_Msk           (0x1ul << SYS_IPRST1_I2C2RST_Pos)                 /*!< SYS_T::IPRST1: I2C2RST Mask            */

#define SYS_IPRST1_I2C3RST_Pos           (11)                                              /*!< SYS_T::IPRST1: I2C3RST Position        */
#define SYS_IPRST1_I2C3RST_Msk           (0x1ul << SYS_IPRST1_I2C3RST_Pos)                 /*!< SYS_T::IPRST1: I2C3RST Mask            */

#define SYS_IPRST1_QSPI0RST_Pos          (12)                                              /*!< SYS_T::IPRST1: QSPI0RST Position       */
#define SYS_IPRST1_QSPI0RST_Msk          (0x1ul << SYS_IPRST1_QSPI0RST_Pos)                /*!< SYS_T::IPRST1: QSPI0RST Mask           */

#define SYS_IPRST1_SPI0RST_Pos           (13)                                              /*!< SYS_T::IPRST1: SPI0RST Position        */
#define SYS_IPRST1_SPI0RST_Msk           (0x1ul << SYS_IPRST1_SPI0RST_Pos)                 /*!< SYS_T::IPRST1: SPI0RST Mask            */

#define SYS_IPRST1_SPI1RST_Pos           (14)                                              /*!< SYS_T::IPRST1: SPI1RST Position        */
#define SYS_IPRST1_SPI1RST_Msk           (0x1ul << SYS_IPRST1_SPI1RST_Pos)                 /*!< SYS_T::IPRST1: SPI1RST Mask            */

#define SYS_IPRST1_SPI2RST_Pos           (15)                                              /*!< SYS_T::IPRST1: SPI2RST Position        */
#define SYS_IPRST1_SPI2RST_Msk           (0x1ul << SYS_IPRST1_SPI2RST_Pos)                 /*!< SYS_T::IPRST1: SPI2RST Mask            */

#define SYS_IPRST1_UART0RST_Pos          (16)                                              /*!< SYS_T::IPRST1: UART0RST Position       */
#define SYS_IPRST1_UART0RST_Msk          (0x1ul << SYS_IPRST1_UART0RST_Pos)                /*!< SYS_T::IPRST1: UART0RST Mask           */

#define SYS_IPRST1_UART1RST_Pos          (17)                                              /*!< SYS_T::IPRST1: UART1RST Position       */
#define SYS_IPRST1_UART1RST_Msk          (0x1ul << SYS_IPRST1_UART1RST_Pos)                /*!< SYS_T::IPRST1: UART1RST Mask           */

#define SYS_IPRST1_UART2RST_Pos          (18)                                              /*!< SYS_T::IPRST1: UART2RST Position       */
#define SYS_IPRST1_UART2RST_Msk          (0x1ul << SYS_IPRST1_UART2RST_Pos)                /*!< SYS_T::IPRST1: UART2RST Mask           */

#define SYS_IPRST1_UART3RST_Pos          (19)                                              /*!< SYS_T::IPRST1: UART3RST Position       */
#define SYS_IPRST1_UART3RST_Msk          (0x1ul << SYS_IPRST1_UART3RST_Pos)                /*!< SYS_T::IPRST1: UART3RST Mask           */

#define SYS_IPRST1_UART4RST_Pos          (20)                                              /*!< SYS_T::IPRST1: UART4RST Position       */
#define SYS_IPRST1_UART4RST_Msk          (0x1ul << SYS_IPRST1_UART4RST_Pos)                /*!< SYS_T::IPRST1: UART4RST Mask           */

#define SYS_IPRST1_UART5RST_Pos          (21)                                              /*!< SYS_T::IPRST1: UART5RST Position       */
#define SYS_IPRST1_UART5RST_Msk          (0x1ul << SYS_IPRST1_UART5RST_Pos)                /*!< SYS_T::IPRST1: UART5RST Mask           */

#define SYS_IPRST1_UART6RST_Pos          (22)                                              /*!< SYS_T::IPRST1: UART6RST Position       */
#define SYS_IPRST1_UART6RST_Msk          (0x1ul << SYS_IPRST1_UART6RST_Pos)                /*!< SYS_T::IPRST1: UART6RST Mask           */

#define SYS_IPRST1_UART7RST_Pos          (23)                                              /*!< SYS_T::IPRST1: UART7RST Position       */
#define SYS_IPRST1_UART7RST_Msk          (0x1ul << SYS_IPRST1_UART7RST_Pos)                /*!< SYS_T::IPRST1: UART7RST Mask           */

#define SYS_IPRST1_OTGRST_Pos            (26)                                              /*!< SYS_T::IPRST1: OTGRST Position         */
#define SYS_IPRST1_OTGRST_Msk            (0x1ul << SYS_IPRST1_OTGRST_Pos)                  /*!< SYS_T::IPRST1: OTGRST Mask             */

#define SYS_IPRST1_USBDRST_Pos           (27)                                              /*!< SYS_T::IPRST1: USBDRST Position        */
#define SYS_IPRST1_USBDRST_Msk           (0x1ul << SYS_IPRST1_USBDRST_Pos)                 /*!< SYS_T::IPRST1: USBDRST Mask            */

#define SYS_IPRST1_EADC0RST_Pos          (28)                                              /*!< SYS_T::IPRST1: EADC0RST Position       */
#define SYS_IPRST1_EADC0RST_Msk          (0x1ul << SYS_IPRST1_EADC0RST_Pos)                /*!< SYS_T::IPRST1: EADC0RST Mask           */

#define SYS_IPRST1_TRNGRST_Pos           (31)                                              /*!< SYS_T::IPRST1: TRNGRST Position        */
#define SYS_IPRST1_TRNGRST_Msk           (0x1ul << SYS_IPRST1_TRNGRST_Pos)                 /*!< SYS_T::IPRST1: TRNGRST Mask            */

#define SYS_IPRST2_SPI3RST_Pos           (6)                                               /*!< SYS_T::IPRST2: SPI3RST Position        */
#define SYS_IPRST2_SPI3RST_Msk           (0x1ul << SYS_IPRST2_SPI3RST_Pos)                 /*!< SYS_T::IPRST2: SPI3RST Mask            */

#define SYS_IPRST2_USCI0RST_Pos          (8)                                               /*!< SYS_T::IPRST2: USCI0RST Position       */
#define SYS_IPRST2_USCI0RST_Msk          (0x1ul << SYS_IPRST2_USCI0RST_Pos)                /*!< SYS_T::IPRST2: USCI0RST Mask           */

#define SYS_IPRST2_USCI1RST_Pos          (9)                                               /*!< SYS_T::IPRST2: USCI1RST Position       */
#define SYS_IPRST2_USCI1RST_Msk          (0x1ul << SYS_IPRST2_USCI1RST_Pos)                /*!< SYS_T::IPRST2: USCI1RST Mask           */

#define SYS_IPRST2_WWDTRST_Pos           (11)                                              /*!< SYS_T::IPRST2: WWDTRST Position        */
#define SYS_IPRST2_WWDTRST_Msk           (0x1ul << SYS_IPRST2_WWDTRST_Pos)                 /*!< SYS_T::IPRST2: WWDTRST Mask            */

#define SYS_IPRST2_DACRST_Pos            (12)                                              /*!< SYS_T::IPRST2: DACRST Position         */
#define SYS_IPRST2_DACRST_Msk            (0x1ul << SYS_IPRST2_DACRST_Pos)                  /*!< SYS_T::IPRST2: DACRST Mask             */

#define SYS_IPRST2_EPWM0RST_Pos          (16)                                              /*!< SYS_T::IPRST2: EPWM0RST Position       */
#define SYS_IPRST2_EPWM0RST_Msk          (0x1ul << SYS_IPRST2_EPWM0RST_Pos)                /*!< SYS_T::IPRST2: EPWM0RST Mask           */

#define SYS_IPRST2_EPWM1RST_Pos          (17)                                              /*!< SYS_T::IPRST2: EPWM1RST Position       */
#define SYS_IPRST2_EPWM1RST_Msk          (0x1ul << SYS_IPRST2_EPWM1RST_Pos)                /*!< SYS_T::IPRST2: EPWM1RST Mask           */

#define SYS_IPRST2_EQEI0RST_Pos          (22)                                              /*!< SYS_T::IPRST2: EQEI0RST Position       */
#define SYS_IPRST2_EQEI0RST_Msk          (0x1ul << SYS_IPRST2_EQEI0RST_Pos)                /*!< SYS_T::IPRST2: EQEI0RST Mask           */

#define SYS_IPRST2_EQEI1RST_Pos          (23)                                              /*!< SYS_T::IPRST2: EQEI1RST Position       */
#define SYS_IPRST2_EQEI1RST_Msk          (0x1ul << SYS_IPRST2_EQEI1RST_Pos)                /*!< SYS_T::IPRST2: EQEI1RST Mask           */

#define SYS_IPRST2_TKRST_Pos             (25)                                              /*!< SYS_T::IPRST2: TKRST Position          */
#define SYS_IPRST2_TKRST_Msk             (0x1ul << SYS_IPRST2_TKRST_Pos)                   /*!< SYS_T::IPRST2: TKRST Mask              */

#define SYS_IPRST2_ECAP0RST_Pos          (26)                                              /*!< SYS_T::IPRST2: ECAP0RST Position       */
#define SYS_IPRST2_ECAP0RST_Msk          (0x1ul << SYS_IPRST2_ECAP0RST_Pos)                /*!< SYS_T::IPRST2: ECAP0RST Mask           */

#define SYS_IPRST2_ECAP1RST_Pos          (27)                                              /*!< SYS_T::IPRST2: ECAP1RST Position       */
#define SYS_IPRST2_ECAP1RST_Msk          (0x1ul << SYS_IPRST2_ECAP1RST_Pos)                /*!< SYS_T::IPRST2: ECAP1RST Mask           */

#define SYS_BODCTL_BODEN_Pos             (0)                                               /*!< SYS_T::BODCTL: BODEN Position          */
#define SYS_BODCTL_BODEN_Msk             (0x1ul << SYS_BODCTL_BODEN_Pos)                   /*!< SYS_T::BODCTL: BODEN Mask              */

#define SYS_BODCTL_BODRSTEN_Pos          (3)                                               /*!< SYS_T::BODCTL: BODRSTEN Position       */
#define SYS_BODCTL_BODRSTEN_Msk          (0x1ul << SYS_BODCTL_BODRSTEN_Pos)                /*!< SYS_T::BODCTL: BODRSTEN Mask           */

#define SYS_BODCTL_BODIF_Pos             (4)                                               /*!< SYS_T::BODCTL: BODIF Position          */
#define SYS_BODCTL_BODIF_Msk             (0x1ul << SYS_BODCTL_BODIF_Pos)                   /*!< SYS_T::BODCTL: BODIF Mask              */

#define SYS_BODCTL_BODLPM_Pos            (5)                                               /*!< SYS_T::BODCTL: BODLPM Position         */
#define SYS_BODCTL_BODLPM_Msk            (0x1ul << SYS_BODCTL_BODLPM_Pos)                  /*!< SYS_T::BODCTL: BODLPM Mask             */

#define SYS_BODCTL_BODOUT_Pos            (6)                                               /*!< SYS_T::BODCTL: BODOUT Position         */
#define SYS_BODCTL_BODOUT_Msk            (0x1ul << SYS_BODCTL_BODOUT_Pos)                  /*!< SYS_T::BODCTL: BODOUT Mask             */

#define SYS_BODCTL_LVREN_Pos             (7)                                               /*!< SYS_T::BODCTL: LVREN Position          */
#define SYS_BODCTL_LVREN_Msk             (0x1ul << SYS_BODCTL_LVREN_Pos)                   /*!< SYS_T::BODCTL: LVREN Mask              */

#define SYS_BODCTL_BODDGSEL_Pos          (8)                                               /*!< SYS_T::BODCTL: BODDGSEL Position       */
#define SYS_BODCTL_BODDGSEL_Msk          (0x7ul << SYS_BODCTL_BODDGSEL_Pos)                /*!< SYS_T::BODCTL: BODDGSEL Mask           */

#define SYS_BODCTL_LVRDGSEL_Pos          (12)                                              /*!< SYS_T::BODCTL: LVRDGSEL Position       */
#define SYS_BODCTL_LVRDGSEL_Msk          (0x7ul << SYS_BODCTL_LVRDGSEL_Pos)                /*!< SYS_T::BODCTL: LVRDGSEL Mask           */

#define SYS_BODCTL_LVRRDY_Pos            (15)                                              /*!< SYS_T::BODCTL: LVRRDY Position         */
#define SYS_BODCTL_LVRRDY_Msk            (0x1ul << SYS_BODCTL_LVRRDY_Pos)                  /*!< SYS_T::BODCTL: LVRRDY Mask             */

#define SYS_BODCTL_BODVL_Pos             (16)                                              /*!< SYS_T::BODCTL: BODVL Position          */
#define SYS_BODCTL_BODVL_Msk             (0xful << SYS_BODCTL_BODVL_Pos)                   /*!< SYS_T::BODCTL: BODVL Mask              */

#define SYS_IVSCTL_VTEMPEN_Pos           (0)                                               /*!< SYS_T::IVSCTL: VTEMPEN Position        */
#define SYS_IVSCTL_VTEMPEN_Msk           (0x1ul << SYS_IVSCTL_VTEMPEN_Pos)                 /*!< SYS_T::IVSCTL: VTEMPEN Mask            */

#define SYS_IVSCTL_VBATUGEN_Pos          (1)                                               /*!< SYS_T::IVSCTL: VBATUGEN Position       */
#define SYS_IVSCTL_VBATUGEN_Msk          (0x1ul << SYS_IVSCTL_VBATUGEN_Pos)                /*!< SYS_T::IVSCTL: VBATUGEN Mask           */

#define SYS_IVSCTL_AVDDDIV4EN_Pos        (2)                                               /*!< SYS_T::IVSCTL: AVDDDIV4EN Position     */
#define SYS_IVSCTL_AVDDDIV4EN_Msk        (0x1ul << SYS_IVSCTL_AVDDDIV4EN_Pos)              /*!< SYS_T::IVSCTL: AVDDDIV4EN Mask         */

#define SYS_IVSCTL_VTEMPSEL_Pos          (4)                                               /*!< SYS_T::IVSCTL: VTEMPSEL Position       */
#define SYS_IVSCTL_VTEMPSEL_Msk          (0x1ul << SYS_IVSCTL_VTEMPSEL_Pos)                /*!< SYS_T::IVSCTL: VTEMPSEL Mask           */

#define SYS_IVSCTL_ADCCSEL_Pos           (7)                                               /*!< SYS_T::IVSCTL: ADCCSEL Position        */
#define SYS_IVSCTL_ADCCSEL_Msk           (0x1ul << SYS_IVSCTL_ADCCSEL_Pos)                 /*!< SYS_T::IVSCTL: ADCCSEL Mask            */

#define SYS_IPRST3_ACMP2RST_Pos          (7)                                               /*!< SYS_T::IPRST3: ACMP2RST Position       */
#define SYS_IPRST3_ACMP2RST_Msk          (0x1ul << SYS_IPRST3_ACMP2RST_Pos)                /*!< SYS_T::IPRST3: ACMP2RST Mask           */

#define SYS_IPRST3_PWM0RST_Pos           (8)                                               /*!< SYS_T::IPRST3: PWM0RST Position        */
#define SYS_IPRST3_PWM0RST_Msk           (0x1ul << SYS_IPRST3_PWM0RST_Pos)                 /*!< SYS_T::IPRST3: PWM0RST Mask            */

#define SYS_IPRST3_PWM1RST_Pos           (9)                                               /*!< SYS_T::IPRST3: PWM1RST Position        */
#define SYS_IPRST3_PWM1RST_Msk           (0x1ul << SYS_IPRST3_PWM1RST_Pos)                 /*!< SYS_T::IPRST3: PWM1RST Mask            */

#define SYS_IPRST3_UTCPD0RST_Pos         (15)                                              /*!< SYS_T::IPRST3: UTCPD0RST Position      */
#define SYS_IPRST3_UTCPD0RST_Msk         (0x1ul << SYS_IPRST3_UTCPD0RST_Pos)               /*!< SYS_T::IPRST3: UTCPD0RST Mask          */

#define SYS_VREFCTL_VREFCTL_Pos          (0)                                               /*!< SYS_T::VREFCTL: VREFCTL Position       */
#define SYS_VREFCTL_VREFCTL_Msk          (0x1ful << SYS_VREFCTL_VREFCTL_Pos)               /*!< SYS_T::VREFCTL: VREFCTL Mask           */

#define SYS_VREFCTL_PRELOAD_SEL_Pos      (6)                                               /*!< SYS_T::VREFCTL: PRELOAD_SEL Position   */
#define SYS_VREFCTL_PRELOAD_SEL_Msk      (0x3ul << SYS_VREFCTL_PRELOAD_SEL_Pos)            /*!< SYS_T::VREFCTL: PRELOAD_SEL Mask       */

#define SYS_VREFCTL_VBGFEN_Pos           (24)                                              /*!< SYS_T::VREFCTL: VBGFEN Position        */
#define SYS_VREFCTL_VBGFEN_Msk           (0x1ul << SYS_VREFCTL_VBGFEN_Pos)                 /*!< SYS_T::VREFCTL: VBGFEN Mask            */

#define SYS_USBPHY_USBROLE_Pos           (0)                                               /*!< SYS_T::USBPHY: USBROLE Position        */
#define SYS_USBPHY_USBROLE_Msk           (0x3ul << SYS_USBPHY_USBROLE_Pos)                 /*!< SYS_T::USBPHY: USBROLE Mask            */

#define SYS_USBPHY_SBO_Pos               (2)                                               /*!< SYS_T::USBPHY: SBO Position            */
#define SYS_USBPHY_SBO_Msk               (0x1ul << SYS_USBPHY_SBO_Pos)                     /*!< SYS_T::USBPHY: SBO Mask                */

#define SYS_USBPHY_USBEN_Pos             (8)                                               /*!< SYS_T::USBPHY: USBEN Position          */
#define SYS_USBPHY_USBEN_Msk             (0x1ul << SYS_USBPHY_USBEN_Pos)                   /*!< SYS_T::USBPHY: USBEN Mask              */

#define SYS_UTCPDCTL_IOMODE_Pos          (0)                                               /*!< SYS_T::UTCPDCTL: IOMODE Position       */
#define SYS_UTCPDCTL_IOMODE_Msk          (0x1ul << SYS_UTCPDCTL_IOMODE_Pos)                /*!< SYS_T::UTCPDCTL: IOMODE Mask           */

#define SYS_UTCPDCTL_POREN0_Pos          (1)                                               /*!< SYS_T::UTCPDCTL: POREN0 Position       */
#define SYS_UTCPDCTL_POREN0_Msk          (0x1ul << SYS_UTCPDCTL_POREN0_Pos)                /*!< SYS_T::UTCPDCTL: POREN0 Mask           */

#define SYS_UTCPDCTL_PD0VBDSS_Pos        (8)                                               /*!< SYS_T::UTCPDCTL: PD0VBDSS Position     */
#define SYS_UTCPDCTL_PD0VBDSS_Msk        (0x7ul << SYS_UTCPDCTL_PD0VBDSS_Pos)              /*!< SYS_T::UTCPDCTL: PD0VBDSS Mask         */

#define SYS_UTCPDCTL_UDVBDETS_Pos        (12)                                              /*!< SYS_T::UTCPDCTL: UDVBDETS Position     */
#define SYS_UTCPDCTL_UDVBDETS_Msk        (0x1ul << SYS_UTCPDCTL_UDVBDETS_Pos)              /*!< SYS_T::UTCPDCTL: UDVBDETS Mask         */

#define SYS_GPA_MFOS_MFOS0_Pos           (0)                                               /*!< SYS_T::GPA_MFOS: MFOS0 Position        */
#define SYS_GPA_MFOS_MFOS0_Msk           (0x1ul << SYS_GPA_MFOS_MFOS0_Pos)                 /*!< SYS_T::GPA_MFOS: MFOS0 Mask            */

#define SYS_GPA_MFOS_MFOS1_Pos           (1)                                               /*!< SYS_T::GPA_MFOS: MFOS1 Position        */
#define SYS_GPA_MFOS_MFOS1_Msk           (0x1ul << SYS_GPA_MFOS_MFOS1_Pos)                 /*!< SYS_T::GPA_MFOS: MFOS1 Mask            */

#define SYS_GPA_MFOS_MFOS2_Pos           (2)                                               /*!< SYS_T::GPA_MFOS: MFOS2 Position        */
#define SYS_GPA_MFOS_MFOS2_Msk           (0x1ul << SYS_GPA_MFOS_MFOS2_Pos)                 /*!< SYS_T::GPA_MFOS: MFOS2 Mask            */

#define SYS_GPA_MFOS_MFOS3_Pos           (3)                                               /*!< SYS_T::GPA_MFOS: MFOS3 Position        */
#define SYS_GPA_MFOS_MFOS3_Msk           (0x1ul << SYS_GPA_MFOS_MFOS3_Pos)                 /*!< SYS_T::GPA_MFOS: MFOS3 Mask            */

#define SYS_GPA_MFOS_MFOS4_Pos           (4)                                               /*!< SYS_T::GPA_MFOS: MFOS4 Position        */
#define SYS_GPA_MFOS_MFOS4_Msk           (0x1ul << SYS_GPA_MFOS_MFOS4_Pos)                 /*!< SYS_T::GPA_MFOS: MFOS4 Mask            */

#define SYS_GPA_MFOS_MFOS5_Pos           (5)                                               /*!< SYS_T::GPA_MFOS: MFOS5 Position        */
#define SYS_GPA_MFOS_MFOS5_Msk           (0x1ul << SYS_GPA_MFOS_MFOS5_Pos)                 /*!< SYS_T::GPA_MFOS: MFOS5 Mask            */

#define SYS_GPA_MFOS_MFOS6_Pos           (6)                                               /*!< SYS_T::GPA_MFOS: MFOS6 Position        */
#define SYS_GPA_MFOS_MFOS6_Msk           (0x1ul << SYS_GPA_MFOS_MFOS6_Pos)                 /*!< SYS_T::GPA_MFOS: MFOS6 Mask            */

#define SYS_GPA_MFOS_MFOS7_Pos           (7)                                               /*!< SYS_T::GPA_MFOS: MFOS7 Position        */
#define SYS_GPA_MFOS_MFOS7_Msk           (0x1ul << SYS_GPA_MFOS_MFOS7_Pos)                 /*!< SYS_T::GPA_MFOS: MFOS7 Mask            */

#define SYS_GPA_MFOS_MFOS8_Pos           (8)                                               /*!< SYS_T::GPA_MFOS: MFOS8 Position        */
#define SYS_GPA_MFOS_MFOS8_Msk           (0x1ul << SYS_GPA_MFOS_MFOS8_Pos)                 /*!< SYS_T::GPA_MFOS: MFOS8 Mask            */

#define SYS_GPA_MFOS_MFOS9_Pos           (9)                                               /*!< SYS_T::GPA_MFOS: MFOS9 Position        */
#define SYS_GPA_MFOS_MFOS9_Msk           (0x1ul << SYS_GPA_MFOS_MFOS9_Pos)                 /*!< SYS_T::GPA_MFOS: MFOS9 Mask            */

#define SYS_GPA_MFOS_MFOS10_Pos          (10)                                              /*!< SYS_T::GPA_MFOS: MFOS10 Position       */
#define SYS_GPA_MFOS_MFOS10_Msk          (0x1ul << SYS_GPA_MFOS_MFOS10_Pos)                /*!< SYS_T::GPA_MFOS: MFOS10 Mask           */

#define SYS_GPA_MFOS_MFOS11_Pos          (11)                                              /*!< SYS_T::GPA_MFOS: MFOS11 Position       */
#define SYS_GPA_MFOS_MFOS11_Msk          (0x1ul << SYS_GPA_MFOS_MFOS11_Pos)                /*!< SYS_T::GPA_MFOS: MFOS11 Mask           */

#define SYS_GPA_MFOS_MFOS12_Pos          (12)                                              /*!< SYS_T::GPA_MFOS: MFOS12 Position       */
#define SYS_GPA_MFOS_MFOS12_Msk          (0x1ul << SYS_GPA_MFOS_MFOS12_Pos)                /*!< SYS_T::GPA_MFOS: MFOS12 Mask           */

#define SYS_GPA_MFOS_MFOS13_Pos          (13)                                              /*!< SYS_T::GPA_MFOS: MFOS13 Position       */
#define SYS_GPA_MFOS_MFOS13_Msk          (0x1ul << SYS_GPA_MFOS_MFOS13_Pos)                /*!< SYS_T::GPA_MFOS: MFOS13 Mask           */

#define SYS_GPA_MFOS_MFOS14_Pos          (14)                                              /*!< SYS_T::GPA_MFOS: MFOS14 Position       */
#define SYS_GPA_MFOS_MFOS14_Msk          (0x1ul << SYS_GPA_MFOS_MFOS14_Pos)                /*!< SYS_T::GPA_MFOS: MFOS14 Mask           */

#define SYS_GPA_MFOS_MFOS15_Pos          (15)                                              /*!< SYS_T::GPA_MFOS: MFOS15 Position       */
#define SYS_GPA_MFOS_MFOS15_Msk          (0x1ul << SYS_GPA_MFOS_MFOS15_Pos)                /*!< SYS_T::GPA_MFOS: MFOS15 Mask           */

#define SYS_GPB_MFOS_MFOS0_Pos           (0)                                               /*!< SYS_T::GPB_MFOS: MFOS0 Position        */
#define SYS_GPB_MFOS_MFOS0_Msk           (0x1ul << SYS_GPB_MFOS_MFOS0_Pos)                 /*!< SYS_T::GPB_MFOS: MFOS0 Mask            */

#define SYS_GPB_MFOS_MFOS1_Pos           (1)                                               /*!< SYS_T::GPB_MFOS: MFOS1 Position        */
#define SYS_GPB_MFOS_MFOS1_Msk           (0x1ul << SYS_GPB_MFOS_MFOS1_Pos)                 /*!< SYS_T::GPB_MFOS: MFOS1 Mask            */

#define SYS_GPB_MFOS_MFOS2_Pos           (2)                                               /*!< SYS_T::GPB_MFOS: MFOS2 Position        */
#define SYS_GPB_MFOS_MFOS2_Msk           (0x1ul << SYS_GPB_MFOS_MFOS2_Pos)                 /*!< SYS_T::GPB_MFOS: MFOS2 Mask            */

#define SYS_GPB_MFOS_MFOS3_Pos           (3)                                               /*!< SYS_T::GPB_MFOS: MFOS3 Position        */
#define SYS_GPB_MFOS_MFOS3_Msk           (0x1ul << SYS_GPB_MFOS_MFOS3_Pos)                 /*!< SYS_T::GPB_MFOS: MFOS3 Mask            */

#define SYS_GPB_MFOS_MFOS4_Pos           (4)                                               /*!< SYS_T::GPB_MFOS: MFOS4 Position        */
#define SYS_GPB_MFOS_MFOS4_Msk           (0x1ul << SYS_GPB_MFOS_MFOS4_Pos)                 /*!< SYS_T::GPB_MFOS: MFOS4 Mask            */

#define SYS_GPB_MFOS_MFOS5_Pos           (5)                                               /*!< SYS_T::GPB_MFOS: MFOS5 Position        */
#define SYS_GPB_MFOS_MFOS5_Msk           (0x1ul << SYS_GPB_MFOS_MFOS5_Pos)                 /*!< SYS_T::GPB_MFOS: MFOS5 Mask            */

#define SYS_GPB_MFOS_MFOS6_Pos           (6)                                               /*!< SYS_T::GPB_MFOS: MFOS6 Position        */
#define SYS_GPB_MFOS_MFOS6_Msk           (0x1ul << SYS_GPB_MFOS_MFOS6_Pos)                 /*!< SYS_T::GPB_MFOS: MFOS6 Mask            */

#define SYS_GPB_MFOS_MFOS7_Pos           (7)                                               /*!< SYS_T::GPB_MFOS: MFOS7 Position        */
#define SYS_GPB_MFOS_MFOS7_Msk           (0x1ul << SYS_GPB_MFOS_MFOS7_Pos)                 /*!< SYS_T::GPB_MFOS: MFOS7 Mask            */

#define SYS_GPB_MFOS_MFOS8_Pos           (8)                                               /*!< SYS_T::GPB_MFOS: MFOS8 Position        */
#define SYS_GPB_MFOS_MFOS8_Msk           (0x1ul << SYS_GPB_MFOS_MFOS8_Pos)                 /*!< SYS_T::GPB_MFOS: MFOS8 Mask            */

#define SYS_GPB_MFOS_MFOS9_Pos           (9)                                               /*!< SYS_T::GPB_MFOS: MFOS9 Position        */
#define SYS_GPB_MFOS_MFOS9_Msk           (0x1ul << SYS_GPB_MFOS_MFOS9_Pos)                 /*!< SYS_T::GPB_MFOS: MFOS9 Mask            */

#define SYS_GPB_MFOS_MFOS10_Pos          (10)                                              /*!< SYS_T::GPB_MFOS: MFOS10 Position       */
#define SYS_GPB_MFOS_MFOS10_Msk          (0x1ul << SYS_GPB_MFOS_MFOS10_Pos)                /*!< SYS_T::GPB_MFOS: MFOS10 Mask           */

#define SYS_GPB_MFOS_MFOS11_Pos          (11)                                              /*!< SYS_T::GPB_MFOS: MFOS11 Position       */
#define SYS_GPB_MFOS_MFOS11_Msk          (0x1ul << SYS_GPB_MFOS_MFOS11_Pos)                /*!< SYS_T::GPB_MFOS: MFOS11 Mask           */

#define SYS_GPB_MFOS_MFOS12_Pos          (12)                                              /*!< SYS_T::GPB_MFOS: MFOS12 Position       */
#define SYS_GPB_MFOS_MFOS12_Msk          (0x1ul << SYS_GPB_MFOS_MFOS12_Pos)                /*!< SYS_T::GPB_MFOS: MFOS12 Mask           */

#define SYS_GPB_MFOS_MFOS13_Pos          (13)                                              /*!< SYS_T::GPB_MFOS: MFOS13 Position       */
#define SYS_GPB_MFOS_MFOS13_Msk          (0x1ul << SYS_GPB_MFOS_MFOS13_Pos)                /*!< SYS_T::GPB_MFOS: MFOS13 Mask           */

#define SYS_GPB_MFOS_MFOS14_Pos          (14)                                              /*!< SYS_T::GPB_MFOS: MFOS14 Position       */
#define SYS_GPB_MFOS_MFOS14_Msk          (0x1ul << SYS_GPB_MFOS_MFOS14_Pos)                /*!< SYS_T::GPB_MFOS: MFOS14 Mask           */

#define SYS_GPB_MFOS_MFOS15_Pos          (15)                                              /*!< SYS_T::GPB_MFOS: MFOS15 Position       */
#define SYS_GPB_MFOS_MFOS15_Msk          (0x1ul << SYS_GPB_MFOS_MFOS15_Pos)                /*!< SYS_T::GPB_MFOS: MFOS15 Mask           */

#define SYS_GPC_MFOS_MFOS0_Pos           (0)                                               /*!< SYS_T::GPC_MFOS: MFOS0 Position        */
#define SYS_GPC_MFOS_MFOS0_Msk           (0x1ul << SYS_GPC_MFOS_MFOS0_Pos)                 /*!< SYS_T::GPC_MFOS: MFOS0 Mask            */

#define SYS_GPC_MFOS_MFOS1_Pos           (1)                                               /*!< SYS_T::GPC_MFOS: MFOS1 Position        */
#define SYS_GPC_MFOS_MFOS1_Msk           (0x1ul << SYS_GPC_MFOS_MFOS1_Pos)                 /*!< SYS_T::GPC_MFOS: MFOS1 Mask            */

#define SYS_GPC_MFOS_MFOS2_Pos           (2)                                               /*!< SYS_T::GPC_MFOS: MFOS2 Position        */
#define SYS_GPC_MFOS_MFOS2_Msk           (0x1ul << SYS_GPC_MFOS_MFOS2_Pos)                 /*!< SYS_T::GPC_MFOS: MFOS2 Mask            */

#define SYS_GPC_MFOS_MFOS3_Pos           (3)                                               /*!< SYS_T::GPC_MFOS: MFOS3 Position        */
#define SYS_GPC_MFOS_MFOS3_Msk           (0x1ul << SYS_GPC_MFOS_MFOS3_Pos)                 /*!< SYS_T::GPC_MFOS: MFOS3 Mask            */

#define SYS_GPC_MFOS_MFOS4_Pos           (4)                                               /*!< SYS_T::GPC_MFOS: MFOS4 Position        */
#define SYS_GPC_MFOS_MFOS4_Msk           (0x1ul << SYS_GPC_MFOS_MFOS4_Pos)                 /*!< SYS_T::GPC_MFOS: MFOS4 Mask            */

#define SYS_GPC_MFOS_MFOS5_Pos           (5)                                               /*!< SYS_T::GPC_MFOS: MFOS5 Position        */
#define SYS_GPC_MFOS_MFOS5_Msk           (0x1ul << SYS_GPC_MFOS_MFOS5_Pos)                 /*!< SYS_T::GPC_MFOS: MFOS5 Mask            */

#define SYS_GPC_MFOS_MFOS6_Pos           (6)                                               /*!< SYS_T::GPC_MFOS: MFOS6 Position        */
#define SYS_GPC_MFOS_MFOS6_Msk           (0x1ul << SYS_GPC_MFOS_MFOS6_Pos)                 /*!< SYS_T::GPC_MFOS: MFOS6 Mask            */

#define SYS_GPC_MFOS_MFOS7_Pos           (7)                                               /*!< SYS_T::GPC_MFOS: MFOS7 Position        */
#define SYS_GPC_MFOS_MFOS7_Msk           (0x1ul << SYS_GPC_MFOS_MFOS7_Pos)                 /*!< SYS_T::GPC_MFOS: MFOS7 Mask            */

#define SYS_GPC_MFOS_MFOS8_Pos           (8)                                               /*!< SYS_T::GPC_MFOS: MFOS8 Position        */
#define SYS_GPC_MFOS_MFOS8_Msk           (0x1ul << SYS_GPC_MFOS_MFOS8_Pos)                 /*!< SYS_T::GPC_MFOS: MFOS8 Mask            */

#define SYS_GPC_MFOS_MFOS9_Pos           (9)                                               /*!< SYS_T::GPC_MFOS: MFOS9 Position        */
#define SYS_GPC_MFOS_MFOS9_Msk           (0x1ul << SYS_GPC_MFOS_MFOS9_Pos)                 /*!< SYS_T::GPC_MFOS: MFOS9 Mask            */

#define SYS_GPC_MFOS_MFOS10_Pos          (10)                                              /*!< SYS_T::GPC_MFOS: MFOS10 Position       */
#define SYS_GPC_MFOS_MFOS10_Msk          (0x1ul << SYS_GPC_MFOS_MFOS10_Pos)                /*!< SYS_T::GPC_MFOS: MFOS10 Mask           */

#define SYS_GPC_MFOS_MFOS11_Pos          (11)                                              /*!< SYS_T::GPC_MFOS: MFOS11 Position       */
#define SYS_GPC_MFOS_MFOS11_Msk          (0x1ul << SYS_GPC_MFOS_MFOS11_Pos)                /*!< SYS_T::GPC_MFOS: MFOS11 Mask           */

#define SYS_GPC_MFOS_MFOS12_Pos          (12)                                              /*!< SYS_T::GPC_MFOS: MFOS12 Position       */
#define SYS_GPC_MFOS_MFOS12_Msk          (0x1ul << SYS_GPC_MFOS_MFOS12_Pos)                /*!< SYS_T::GPC_MFOS: MFOS12 Mask           */

#define SYS_GPC_MFOS_MFOS13_Pos          (13)                                              /*!< SYS_T::GPC_MFOS: MFOS13 Position       */
#define SYS_GPC_MFOS_MFOS13_Msk          (0x1ul << SYS_GPC_MFOS_MFOS13_Pos)                /*!< SYS_T::GPC_MFOS: MFOS13 Mask           */

#define SYS_GPC_MFOS_MFOS14_Pos          (14)                                              /*!< SYS_T::GPC_MFOS: MFOS14 Position       */
#define SYS_GPC_MFOS_MFOS14_Msk          (0x1ul << SYS_GPC_MFOS_MFOS14_Pos)                /*!< SYS_T::GPC_MFOS: MFOS14 Mask           */

#define SYS_GPC_MFOS_MFOS15_Pos          (15)                                              /*!< SYS_T::GPC_MFOS: MFOS15 Position       */
#define SYS_GPC_MFOS_MFOS15_Msk          (0x1ul << SYS_GPC_MFOS_MFOS15_Pos)                /*!< SYS_T::GPC_MFOS: MFOS15 Mask           */

#define SYS_GPD_MFOS_MFOS0_Pos           (0)                                               /*!< SYS_T::GPD_MFOS: MFOS0 Position        */
#define SYS_GPD_MFOS_MFOS0_Msk           (0x1ul << SYS_GPD_MFOS_MFOS0_Pos)                 /*!< SYS_T::GPD_MFOS: MFOS0 Mask            */

#define SYS_GPD_MFOS_MFOS1_Pos           (1)                                               /*!< SYS_T::GPD_MFOS: MFOS1 Position        */
#define SYS_GPD_MFOS_MFOS1_Msk           (0x1ul << SYS_GPD_MFOS_MFOS1_Pos)                 /*!< SYS_T::GPD_MFOS: MFOS1 Mask            */

#define SYS_GPD_MFOS_MFOS2_Pos           (2)                                               /*!< SYS_T::GPD_MFOS: MFOS2 Position        */
#define SYS_GPD_MFOS_MFOS2_Msk           (0x1ul << SYS_GPD_MFOS_MFOS2_Pos)                 /*!< SYS_T::GPD_MFOS: MFOS2 Mask            */

#define SYS_GPD_MFOS_MFOS3_Pos           (3)                                               /*!< SYS_T::GPD_MFOS: MFOS3 Position        */
#define SYS_GPD_MFOS_MFOS3_Msk           (0x1ul << SYS_GPD_MFOS_MFOS3_Pos)                 /*!< SYS_T::GPD_MFOS: MFOS3 Mask            */

#define SYS_GPD_MFOS_MFOS4_Pos           (4)                                               /*!< SYS_T::GPD_MFOS: MFOS4 Position        */
#define SYS_GPD_MFOS_MFOS4_Msk           (0x1ul << SYS_GPD_MFOS_MFOS4_Pos)                 /*!< SYS_T::GPD_MFOS: MFOS4 Mask            */

#define SYS_GPD_MFOS_MFOS5_Pos           (5)                                               /*!< SYS_T::GPD_MFOS: MFOS5 Position        */
#define SYS_GPD_MFOS_MFOS5_Msk           (0x1ul << SYS_GPD_MFOS_MFOS5_Pos)                 /*!< SYS_T::GPD_MFOS: MFOS5 Mask            */

#define SYS_GPD_MFOS_MFOS6_Pos           (6)                                               /*!< SYS_T::GPD_MFOS: MFOS6 Position        */
#define SYS_GPD_MFOS_MFOS6_Msk           (0x1ul << SYS_GPD_MFOS_MFOS6_Pos)                 /*!< SYS_T::GPD_MFOS: MFOS6 Mask            */

#define SYS_GPD_MFOS_MFOS7_Pos           (7)                                               /*!< SYS_T::GPD_MFOS: MFOS7 Position        */
#define SYS_GPD_MFOS_MFOS7_Msk           (0x1ul << SYS_GPD_MFOS_MFOS7_Pos)                 /*!< SYS_T::GPD_MFOS: MFOS7 Mask            */

#define SYS_GPD_MFOS_MFOS8_Pos           (8)                                               /*!< SYS_T::GPD_MFOS: MFOS8 Position        */
#define SYS_GPD_MFOS_MFOS8_Msk           (0x1ul << SYS_GPD_MFOS_MFOS8_Pos)                 /*!< SYS_T::GPD_MFOS: MFOS8 Mask            */

#define SYS_GPD_MFOS_MFOS9_Pos           (9)                                               /*!< SYS_T::GPD_MFOS: MFOS9 Position        */
#define SYS_GPD_MFOS_MFOS9_Msk           (0x1ul << SYS_GPD_MFOS_MFOS9_Pos)                 /*!< SYS_T::GPD_MFOS: MFOS9 Mask            */

#define SYS_GPD_MFOS_MFOS10_Pos          (10)                                              /*!< SYS_T::GPD_MFOS: MFOS10 Position       */
#define SYS_GPD_MFOS_MFOS10_Msk          (0x1ul << SYS_GPD_MFOS_MFOS10_Pos)                /*!< SYS_T::GPD_MFOS: MFOS10 Mask           */

#define SYS_GPD_MFOS_MFOS11_Pos          (11)                                              /*!< SYS_T::GPD_MFOS: MFOS11 Position       */
#define SYS_GPD_MFOS_MFOS11_Msk          (0x1ul << SYS_GPD_MFOS_MFOS11_Pos)                /*!< SYS_T::GPD_MFOS: MFOS11 Mask           */

#define SYS_GPD_MFOS_MFOS12_Pos          (12)                                              /*!< SYS_T::GPD_MFOS: MFOS12 Position       */
#define SYS_GPD_MFOS_MFOS12_Msk          (0x1ul << SYS_GPD_MFOS_MFOS12_Pos)                /*!< SYS_T::GPD_MFOS: MFOS12 Mask           */

#define SYS_GPD_MFOS_MFOS13_Pos          (13)                                              /*!< SYS_T::GPD_MFOS: MFOS13 Position       */
#define SYS_GPD_MFOS_MFOS13_Msk          (0x1ul << SYS_GPD_MFOS_MFOS13_Pos)                /*!< SYS_T::GPD_MFOS: MFOS13 Mask           */

#define SYS_GPD_MFOS_MFOS14_Pos          (14)                                              /*!< SYS_T::GPD_MFOS: MFOS14 Position       */
#define SYS_GPD_MFOS_MFOS14_Msk          (0x1ul << SYS_GPD_MFOS_MFOS14_Pos)                /*!< SYS_T::GPD_MFOS: MFOS14 Mask           */

#define SYS_GPD_MFOS_MFOS15_Pos          (15)                                              /*!< SYS_T::GPD_MFOS: MFOS15 Position       */
#define SYS_GPD_MFOS_MFOS15_Msk          (0x1ul << SYS_GPD_MFOS_MFOS15_Pos)                /*!< SYS_T::GPD_MFOS: MFOS15 Mask           */

#define SYS_GPE_MFOS_MFOS0_Pos           (0)                                               /*!< SYS_T::GPE_MFOS: MFOS0 Position        */
#define SYS_GPE_MFOS_MFOS0_Msk           (0x1ul << SYS_GPE_MFOS_MFOS0_Pos)                 /*!< SYS_T::GPE_MFOS: MFOS0 Mask            */

#define SYS_GPE_MFOS_MFOS1_Pos           (1)                                               /*!< SYS_T::GPE_MFOS: MFOS1 Position        */
#define SYS_GPE_MFOS_MFOS1_Msk           (0x1ul << SYS_GPE_MFOS_MFOS1_Pos)                 /*!< SYS_T::GPE_MFOS: MFOS1 Mask            */

#define SYS_GPE_MFOS_MFOS2_Pos           (2)                                               /*!< SYS_T::GPE_MFOS: MFOS2 Position        */
#define SYS_GPE_MFOS_MFOS2_Msk           (0x1ul << SYS_GPE_MFOS_MFOS2_Pos)                 /*!< SYS_T::GPE_MFOS: MFOS2 Mask            */

#define SYS_GPE_MFOS_MFOS3_Pos           (3)                                               /*!< SYS_T::GPE_MFOS: MFOS3 Position        */
#define SYS_GPE_MFOS_MFOS3_Msk           (0x1ul << SYS_GPE_MFOS_MFOS3_Pos)                 /*!< SYS_T::GPE_MFOS: MFOS3 Mask            */

#define SYS_GPE_MFOS_MFOS4_Pos           (4)                                               /*!< SYS_T::GPE_MFOS: MFOS4 Position        */
#define SYS_GPE_MFOS_MFOS4_Msk           (0x1ul << SYS_GPE_MFOS_MFOS4_Pos)                 /*!< SYS_T::GPE_MFOS: MFOS4 Mask            */

#define SYS_GPE_MFOS_MFOS5_Pos           (5)                                               /*!< SYS_T::GPE_MFOS: MFOS5 Position        */
#define SYS_GPE_MFOS_MFOS5_Msk           (0x1ul << SYS_GPE_MFOS_MFOS5_Pos)                 /*!< SYS_T::GPE_MFOS: MFOS5 Mask            */

#define SYS_GPE_MFOS_MFOS6_Pos           (6)                                               /*!< SYS_T::GPE_MFOS: MFOS6 Position        */
#define SYS_GPE_MFOS_MFOS6_Msk           (0x1ul << SYS_GPE_MFOS_MFOS6_Pos)                 /*!< SYS_T::GPE_MFOS: MFOS6 Mask            */

#define SYS_GPE_MFOS_MFOS7_Pos           (7)                                               /*!< SYS_T::GPE_MFOS: MFOS7 Position        */
#define SYS_GPE_MFOS_MFOS7_Msk           (0x1ul << SYS_GPE_MFOS_MFOS7_Pos)                 /*!< SYS_T::GPE_MFOS: MFOS7 Mask            */

#define SYS_GPE_MFOS_MFOS8_Pos           (8)                                               /*!< SYS_T::GPE_MFOS: MFOS8 Position        */
#define SYS_GPE_MFOS_MFOS8_Msk           (0x1ul << SYS_GPE_MFOS_MFOS8_Pos)                 /*!< SYS_T::GPE_MFOS: MFOS8 Mask            */

#define SYS_GPE_MFOS_MFOS9_Pos           (9)                                               /*!< SYS_T::GPE_MFOS: MFOS9 Position        */
#define SYS_GPE_MFOS_MFOS9_Msk           (0x1ul << SYS_GPE_MFOS_MFOS9_Pos)                 /*!< SYS_T::GPE_MFOS: MFOS9 Mask            */

#define SYS_GPE_MFOS_MFOS10_Pos          (10)                                              /*!< SYS_T::GPE_MFOS: MFOS10 Position       */
#define SYS_GPE_MFOS_MFOS10_Msk          (0x1ul << SYS_GPE_MFOS_MFOS10_Pos)                /*!< SYS_T::GPE_MFOS: MFOS10 Mask           */

#define SYS_GPE_MFOS_MFOS11_Pos          (11)                                              /*!< SYS_T::GPE_MFOS: MFOS11 Position       */
#define SYS_GPE_MFOS_MFOS11_Msk          (0x1ul << SYS_GPE_MFOS_MFOS11_Pos)                /*!< SYS_T::GPE_MFOS: MFOS11 Mask           */

#define SYS_GPE_MFOS_MFOS12_Pos          (12)                                              /*!< SYS_T::GPE_MFOS: MFOS12 Position       */
#define SYS_GPE_MFOS_MFOS12_Msk          (0x1ul << SYS_GPE_MFOS_MFOS12_Pos)                /*!< SYS_T::GPE_MFOS: MFOS12 Mask           */

#define SYS_GPE_MFOS_MFOS13_Pos          (13)                                              /*!< SYS_T::GPE_MFOS: MFOS13 Position       */
#define SYS_GPE_MFOS_MFOS13_Msk          (0x1ul << SYS_GPE_MFOS_MFOS13_Pos)                /*!< SYS_T::GPE_MFOS: MFOS13 Mask           */

#define SYS_GPE_MFOS_MFOS14_Pos          (14)                                              /*!< SYS_T::GPE_MFOS: MFOS14 Position       */
#define SYS_GPE_MFOS_MFOS14_Msk          (0x1ul << SYS_GPE_MFOS_MFOS14_Pos)                /*!< SYS_T::GPE_MFOS: MFOS14 Mask           */

#define SYS_GPE_MFOS_MFOS15_Pos          (15)                                              /*!< SYS_T::GPE_MFOS: MFOS15 Position       */
#define SYS_GPE_MFOS_MFOS15_Msk          (0x1ul << SYS_GPE_MFOS_MFOS15_Pos)                /*!< SYS_T::GPE_MFOS: MFOS15 Mask           */

#define SYS_GPF_MFOS_MFOS0_Pos           (0)                                               /*!< SYS_T::GPF_MFOS: MFOS0 Position        */
#define SYS_GPF_MFOS_MFOS0_Msk           (0x1ul << SYS_GPF_MFOS_MFOS0_Pos)                 /*!< SYS_T::GPF_MFOS: MFOS0 Mask            */

#define SYS_GPF_MFOS_MFOS1_Pos           (1)                                               /*!< SYS_T::GPF_MFOS: MFOS1 Position        */
#define SYS_GPF_MFOS_MFOS1_Msk           (0x1ul << SYS_GPF_MFOS_MFOS1_Pos)                 /*!< SYS_T::GPF_MFOS: MFOS1 Mask            */

#define SYS_GPF_MFOS_MFOS2_Pos           (2)                                               /*!< SYS_T::GPF_MFOS: MFOS2 Position        */
#define SYS_GPF_MFOS_MFOS2_Msk           (0x1ul << SYS_GPF_MFOS_MFOS2_Pos)                 /*!< SYS_T::GPF_MFOS: MFOS2 Mask            */

#define SYS_GPF_MFOS_MFOS3_Pos           (3)                                               /*!< SYS_T::GPF_MFOS: MFOS3 Position        */
#define SYS_GPF_MFOS_MFOS3_Msk           (0x1ul << SYS_GPF_MFOS_MFOS3_Pos)                 /*!< SYS_T::GPF_MFOS: MFOS3 Mask            */

#define SYS_GPF_MFOS_MFOS4_Pos           (4)                                               /*!< SYS_T::GPF_MFOS: MFOS4 Position        */
#define SYS_GPF_MFOS_MFOS4_Msk           (0x1ul << SYS_GPF_MFOS_MFOS4_Pos)                 /*!< SYS_T::GPF_MFOS: MFOS4 Mask            */

#define SYS_GPF_MFOS_MFOS5_Pos           (5)                                               /*!< SYS_T::GPF_MFOS: MFOS5 Position        */
#define SYS_GPF_MFOS_MFOS5_Msk           (0x1ul << SYS_GPF_MFOS_MFOS5_Pos)                 /*!< SYS_T::GPF_MFOS: MFOS5 Mask            */

#define SYS_GPF_MFOS_MFOS6_Pos           (6)                                               /*!< SYS_T::GPF_MFOS: MFOS6 Position        */
#define SYS_GPF_MFOS_MFOS6_Msk           (0x1ul << SYS_GPF_MFOS_MFOS6_Pos)                 /*!< SYS_T::GPF_MFOS: MFOS6 Mask            */

#define SYS_GPF_MFOS_MFOS7_Pos           (7)                                               /*!< SYS_T::GPF_MFOS: MFOS7 Position        */
#define SYS_GPF_MFOS_MFOS7_Msk           (0x1ul << SYS_GPF_MFOS_MFOS7_Pos)                 /*!< SYS_T::GPF_MFOS: MFOS7 Mask            */

#define SYS_GPF_MFOS_MFOS8_Pos           (8)                                               /*!< SYS_T::GPF_MFOS: MFOS8 Position        */
#define SYS_GPF_MFOS_MFOS8_Msk           (0x1ul << SYS_GPF_MFOS_MFOS8_Pos)                 /*!< SYS_T::GPF_MFOS: MFOS8 Mask            */

#define SYS_GPF_MFOS_MFOS9_Pos           (9)                                               /*!< SYS_T::GPF_MFOS: MFOS9 Position        */
#define SYS_GPF_MFOS_MFOS9_Msk           (0x1ul << SYS_GPF_MFOS_MFOS9_Pos)                 /*!< SYS_T::GPF_MFOS: MFOS9 Mask            */

#define SYS_GPF_MFOS_MFOS10_Pos          (10)                                              /*!< SYS_T::GPF_MFOS: MFOS10 Position       */
#define SYS_GPF_MFOS_MFOS10_Msk          (0x1ul << SYS_GPF_MFOS_MFOS10_Pos)                /*!< SYS_T::GPF_MFOS: MFOS10 Mask           */

#define SYS_GPF_MFOS_MFOS11_Pos          (11)                                              /*!< SYS_T::GPF_MFOS: MFOS11 Position       */
#define SYS_GPF_MFOS_MFOS11_Msk          (0x1ul << SYS_GPF_MFOS_MFOS11_Pos)                /*!< SYS_T::GPF_MFOS: MFOS11 Mask           */

#define SYS_GPF_MFOS_MFOS12_Pos          (12)                                              /*!< SYS_T::GPF_MFOS: MFOS12 Position       */
#define SYS_GPF_MFOS_MFOS12_Msk          (0x1ul << SYS_GPF_MFOS_MFOS12_Pos)                /*!< SYS_T::GPF_MFOS: MFOS12 Mask           */

#define SYS_GPF_MFOS_MFOS13_Pos          (13)                                              /*!< SYS_T::GPF_MFOS: MFOS13 Position       */
#define SYS_GPF_MFOS_MFOS13_Msk          (0x1ul << SYS_GPF_MFOS_MFOS13_Pos)                /*!< SYS_T::GPF_MFOS: MFOS13 Mask           */

#define SYS_GPF_MFOS_MFOS14_Pos          (14)                                              /*!< SYS_T::GPF_MFOS: MFOS14 Position       */
#define SYS_GPF_MFOS_MFOS14_Msk          (0x1ul << SYS_GPF_MFOS_MFOS14_Pos)                /*!< SYS_T::GPF_MFOS: MFOS14 Mask           */

#define SYS_GPF_MFOS_MFOS15_Pos          (15)                                              /*!< SYS_T::GPF_MFOS: MFOS15 Position       */
#define SYS_GPF_MFOS_MFOS15_Msk          (0x1ul << SYS_GPF_MFOS_MFOS15_Pos)                /*!< SYS_T::GPF_MFOS: MFOS15 Mask           */

#define SYS_GPG_MFOS_MFOS0_Pos           (0)                                               /*!< SYS_T::GPG_MFOS: MFOS0 Position        */
#define SYS_GPG_MFOS_MFOS0_Msk           (0x1ul << SYS_GPG_MFOS_MFOS0_Pos)                 /*!< SYS_T::GPG_MFOS: MFOS0 Mask            */

#define SYS_GPG_MFOS_MFOS1_Pos           (1)                                               /*!< SYS_T::GPG_MFOS: MFOS1 Position        */
#define SYS_GPG_MFOS_MFOS1_Msk           (0x1ul << SYS_GPG_MFOS_MFOS1_Pos)                 /*!< SYS_T::GPG_MFOS: MFOS1 Mask            */

#define SYS_GPG_MFOS_MFOS2_Pos           (2)                                               /*!< SYS_T::GPG_MFOS: MFOS2 Position        */
#define SYS_GPG_MFOS_MFOS2_Msk           (0x1ul << SYS_GPG_MFOS_MFOS2_Pos)                 /*!< SYS_T::GPG_MFOS: MFOS2 Mask            */

#define SYS_GPG_MFOS_MFOS3_Pos           (3)                                               /*!< SYS_T::GPG_MFOS: MFOS3 Position        */
#define SYS_GPG_MFOS_MFOS3_Msk           (0x1ul << SYS_GPG_MFOS_MFOS3_Pos)                 /*!< SYS_T::GPG_MFOS: MFOS3 Mask            */

#define SYS_GPG_MFOS_MFOS4_Pos           (4)                                               /*!< SYS_T::GPG_MFOS: MFOS4 Position        */
#define SYS_GPG_MFOS_MFOS4_Msk           (0x1ul << SYS_GPG_MFOS_MFOS4_Pos)                 /*!< SYS_T::GPG_MFOS: MFOS4 Mask            */

#define SYS_GPG_MFOS_MFOS5_Pos           (5)                                               /*!< SYS_T::GPG_MFOS: MFOS5 Position        */
#define SYS_GPG_MFOS_MFOS5_Msk           (0x1ul << SYS_GPG_MFOS_MFOS5_Pos)                 /*!< SYS_T::GPG_MFOS: MFOS5 Mask            */

#define SYS_GPG_MFOS_MFOS6_Pos           (6)                                               /*!< SYS_T::GPG_MFOS: MFOS6 Position        */
#define SYS_GPG_MFOS_MFOS6_Msk           (0x1ul << SYS_GPG_MFOS_MFOS6_Pos)                 /*!< SYS_T::GPG_MFOS: MFOS6 Mask            */

#define SYS_GPG_MFOS_MFOS7_Pos           (7)                                               /*!< SYS_T::GPG_MFOS: MFOS7 Position        */
#define SYS_GPG_MFOS_MFOS7_Msk           (0x1ul << SYS_GPG_MFOS_MFOS7_Pos)                 /*!< SYS_T::GPG_MFOS: MFOS7 Mask            */

#define SYS_GPG_MFOS_MFOS8_Pos           (8)                                               /*!< SYS_T::GPG_MFOS: MFOS8 Position        */
#define SYS_GPG_MFOS_MFOS8_Msk           (0x1ul << SYS_GPG_MFOS_MFOS8_Pos)                 /*!< SYS_T::GPG_MFOS: MFOS8 Mask            */

#define SYS_GPG_MFOS_MFOS9_Pos           (9)                                               /*!< SYS_T::GPG_MFOS: MFOS9 Position        */
#define SYS_GPG_MFOS_MFOS9_Msk           (0x1ul << SYS_GPG_MFOS_MFOS9_Pos)                 /*!< SYS_T::GPG_MFOS: MFOS9 Mask            */

#define SYS_GPG_MFOS_MFOS10_Pos          (10)                                              /*!< SYS_T::GPG_MFOS: MFOS10 Position       */
#define SYS_GPG_MFOS_MFOS10_Msk          (0x1ul << SYS_GPG_MFOS_MFOS10_Pos)                /*!< SYS_T::GPG_MFOS: MFOS10 Mask           */

#define SYS_GPG_MFOS_MFOS11_Pos          (11)                                              /*!< SYS_T::GPG_MFOS: MFOS11 Position       */
#define SYS_GPG_MFOS_MFOS11_Msk          (0x1ul << SYS_GPG_MFOS_MFOS11_Pos)                /*!< SYS_T::GPG_MFOS: MFOS11 Mask           */

#define SYS_GPG_MFOS_MFOS12_Pos          (12)                                              /*!< SYS_T::GPG_MFOS: MFOS12 Position       */
#define SYS_GPG_MFOS_MFOS12_Msk          (0x1ul << SYS_GPG_MFOS_MFOS12_Pos)                /*!< SYS_T::GPG_MFOS: MFOS12 Mask           */

#define SYS_GPG_MFOS_MFOS13_Pos          (13)                                              /*!< SYS_T::GPG_MFOS: MFOS13 Position       */
#define SYS_GPG_MFOS_MFOS13_Msk          (0x1ul << SYS_GPG_MFOS_MFOS13_Pos)                /*!< SYS_T::GPG_MFOS: MFOS13 Mask           */

#define SYS_GPG_MFOS_MFOS14_Pos          (14)                                              /*!< SYS_T::GPG_MFOS: MFOS14 Position       */
#define SYS_GPG_MFOS_MFOS14_Msk          (0x1ul << SYS_GPG_MFOS_MFOS14_Pos)                /*!< SYS_T::GPG_MFOS: MFOS14 Mask           */

#define SYS_GPG_MFOS_MFOS15_Pos          (15)                                              /*!< SYS_T::GPG_MFOS: MFOS15 Position       */
#define SYS_GPG_MFOS_MFOS15_Msk          (0x1ul << SYS_GPG_MFOS_MFOS15_Pos)                /*!< SYS_T::GPG_MFOS: MFOS15 Mask           */

#define SYS_GPH_MFOS_MFOS0_Pos           (0)                                               /*!< SYS_T::GPH_MFOS: MFOS0 Position        */
#define SYS_GPH_MFOS_MFOS0_Msk           (0x1ul << SYS_GPH_MFOS_MFOS0_Pos)                 /*!< SYS_T::GPH_MFOS: MFOS0 Mask            */

#define SYS_GPH_MFOS_MFOS1_Pos           (1)                                               /*!< SYS_T::GPH_MFOS: MFOS1 Position        */
#define SYS_GPH_MFOS_MFOS1_Msk           (0x1ul << SYS_GPH_MFOS_MFOS1_Pos)                 /*!< SYS_T::GPH_MFOS: MFOS1 Mask            */

#define SYS_GPH_MFOS_MFOS2_Pos           (2)                                               /*!< SYS_T::GPH_MFOS: MFOS2 Position        */
#define SYS_GPH_MFOS_MFOS2_Msk           (0x1ul << SYS_GPH_MFOS_MFOS2_Pos)                 /*!< SYS_T::GPH_MFOS: MFOS2 Mask            */

#define SYS_GPH_MFOS_MFOS3_Pos           (3)                                               /*!< SYS_T::GPH_MFOS: MFOS3 Position        */
#define SYS_GPH_MFOS_MFOS3_Msk           (0x1ul << SYS_GPH_MFOS_MFOS3_Pos)                 /*!< SYS_T::GPH_MFOS: MFOS3 Mask            */

#define SYS_GPH_MFOS_MFOS4_Pos           (4)                                               /*!< SYS_T::GPH_MFOS: MFOS4 Position        */
#define SYS_GPH_MFOS_MFOS4_Msk           (0x1ul << SYS_GPH_MFOS_MFOS4_Pos)                 /*!< SYS_T::GPH_MFOS: MFOS4 Mask            */

#define SYS_GPH_MFOS_MFOS5_Pos           (5)                                               /*!< SYS_T::GPH_MFOS: MFOS5 Position        */
#define SYS_GPH_MFOS_MFOS5_Msk           (0x1ul << SYS_GPH_MFOS_MFOS5_Pos)                 /*!< SYS_T::GPH_MFOS: MFOS5 Mask            */

#define SYS_GPH_MFOS_MFOS6_Pos           (6)                                               /*!< SYS_T::GPH_MFOS: MFOS6 Position        */
#define SYS_GPH_MFOS_MFOS6_Msk           (0x1ul << SYS_GPH_MFOS_MFOS6_Pos)                 /*!< SYS_T::GPH_MFOS: MFOS6 Mask            */

#define SYS_GPH_MFOS_MFOS7_Pos           (7)                                               /*!< SYS_T::GPH_MFOS: MFOS7 Position        */
#define SYS_GPH_MFOS_MFOS7_Msk           (0x1ul << SYS_GPH_MFOS_MFOS7_Pos)                 /*!< SYS_T::GPH_MFOS: MFOS7 Mask            */

#define SYS_GPH_MFOS_MFOS8_Pos           (8)                                               /*!< SYS_T::GPH_MFOS: MFOS8 Position        */
#define SYS_GPH_MFOS_MFOS8_Msk           (0x1ul << SYS_GPH_MFOS_MFOS8_Pos)                 /*!< SYS_T::GPH_MFOS: MFOS8 Mask            */

#define SYS_GPH_MFOS_MFOS9_Pos           (9)                                               /*!< SYS_T::GPH_MFOS: MFOS9 Position        */
#define SYS_GPH_MFOS_MFOS9_Msk           (0x1ul << SYS_GPH_MFOS_MFOS9_Pos)                 /*!< SYS_T::GPH_MFOS: MFOS9 Mask            */

#define SYS_GPH_MFOS_MFOS10_Pos          (10)                                              /*!< SYS_T::GPH_MFOS: MFOS10 Position       */
#define SYS_GPH_MFOS_MFOS10_Msk          (0x1ul << SYS_GPH_MFOS_MFOS10_Pos)                /*!< SYS_T::GPH_MFOS: MFOS10 Mask           */

#define SYS_GPH_MFOS_MFOS11_Pos          (11)                                              /*!< SYS_T::GPH_MFOS: MFOS11 Position       */
#define SYS_GPH_MFOS_MFOS11_Msk          (0x1ul << SYS_GPH_MFOS_MFOS11_Pos)                /*!< SYS_T::GPH_MFOS: MFOS11 Mask           */

#define SYS_GPH_MFOS_MFOS12_Pos          (12)                                              /*!< SYS_T::GPH_MFOS: MFOS12 Position       */
#define SYS_GPH_MFOS_MFOS12_Msk          (0x1ul << SYS_GPH_MFOS_MFOS12_Pos)                /*!< SYS_T::GPH_MFOS: MFOS12 Mask           */

#define SYS_GPH_MFOS_MFOS13_Pos          (13)                                              /*!< SYS_T::GPH_MFOS: MFOS13 Position       */
#define SYS_GPH_MFOS_MFOS13_Msk          (0x1ul << SYS_GPH_MFOS_MFOS13_Pos)                /*!< SYS_T::GPH_MFOS: MFOS13 Mask           */

#define SYS_GPH_MFOS_MFOS14_Pos          (14)                                              /*!< SYS_T::GPH_MFOS: MFOS14 Position       */
#define SYS_GPH_MFOS_MFOS14_Msk          (0x1ul << SYS_GPH_MFOS_MFOS14_Pos)                /*!< SYS_T::GPH_MFOS: MFOS14 Mask           */

#define SYS_GPH_MFOS_MFOS15_Pos          (15)                                              /*!< SYS_T::GPH_MFOS: MFOS15 Position       */
#define SYS_GPH_MFOS_MFOS15_Msk          (0x1ul << SYS_GPH_MFOS_MFOS15_Pos)                /*!< SYS_T::GPH_MFOS: MFOS15 Mask           */

#define SYS_MIRCTCTL_FREQSEL_Pos         (0)                                               /*!< SYS_T::MIRCTCTL: FREQSEL Position      */
#define SYS_MIRCTCTL_FREQSEL_Msk         (0x3ul << SYS_MIRCTCTL_FREQSEL_Pos)               /*!< SYS_T::MIRCTCTL: FREQSEL Mask          */

#define SYS_MIRCTCTL_ACCURSEL_Pos        (2)                                               /*!< SYS_T::MIRCTCTL: ACCURSEL Position     */
#define SYS_MIRCTCTL_ACCURSEL_Msk        (0x3ul << SYS_MIRCTCTL_ACCURSEL_Pos)              /*!< SYS_T::MIRCTCTL: ACCURSEL Mask         */

#define SYS_MIRCTCTL_LOOPSEL_Pos         (4)                                               /*!< SYS_T::MIRCTCTL: LOOPSEL Position      */
#define SYS_MIRCTCTL_LOOPSEL_Msk         (0x3ul << SYS_MIRCTCTL_LOOPSEL_Pos)               /*!< SYS_T::MIRCTCTL: LOOPSEL Mask          */

#define SYS_MIRCTCTL_RETRYCNT_Pos        (6)                                               /*!< SYS_T::MIRCTCTL: RETRYCNT Position     */
#define SYS_MIRCTCTL_RETRYCNT_Msk        (0x3ul << SYS_MIRCTCTL_RETRYCNT_Pos)              /*!< SYS_T::MIRCTCTL: RETRYCNT Mask         */

#define SYS_MIRCTCTL_CESTOPEN_Pos        (8)                                               /*!< SYS_T::MIRCTCTL: CESTOPEN Position     */
#define SYS_MIRCTCTL_CESTOPEN_Msk        (0x1ul << SYS_MIRCTCTL_CESTOPEN_Pos)              /*!< SYS_T::MIRCTCTL: CESTOPEN Mask         */

#define SYS_MIRCTCTL_BOUNDEN_Pos         (9)                                               /*!< SYS_T::MIRCTCTL: BOUNDEN Position      */
#define SYS_MIRCTCTL_BOUNDEN_Msk         (0x1ul << SYS_MIRCTCTL_BOUNDEN_Pos)               /*!< SYS_T::MIRCTCTL: BOUNDEN Mask          */

#define SYS_MIRCTCTL_REFCKSEL_Pos        (10)                                              /*!< SYS_T::MIRCTCTL: REFCKSEL Position     */
#define SYS_MIRCTCTL_REFCKSEL_Msk        (0x1ul << SYS_MIRCTCTL_REFCKSEL_Pos)              /*!< SYS_T::MIRCTCTL: REFCKSEL Mask         */

#define SYS_MIRCTCTL_BOUNDARY_Pos        (16)                                              /*!< SYS_T::MIRCTCTL: BOUNDARY Position     */
#define SYS_MIRCTCTL_BOUNDARY_Msk        (0x1ful << SYS_MIRCTCTL_BOUNDARY_Pos)             /*!< SYS_T::MIRCTCTL: BOUNDARY Mask         */

#define SYS_MIRCTIEN_TFAILIEN_Pos        (1)                                               /*!< SYS_T::MIRCTIEN: TFAILIEN Position     */
#define SYS_MIRCTIEN_TFAILIEN_Msk        (0x1ul << SYS_MIRCTIEN_TFAILIEN_Pos)              /*!< SYS_T::MIRCTIEN: TFAILIEN Mask         */

#define SYS_MIRCTIEN_CLKEIEN_Pos         (2)                                               /*!< SYS_T::MIRCTIEN: CLKEIEN Position      */
#define SYS_MIRCTIEN_CLKEIEN_Msk         (0x1ul << SYS_MIRCTIEN_CLKEIEN_Pos)               /*!< SYS_T::MIRCTIEN: CLKEIEN Mask          */

#define SYS_MIRCTISTS_FREQLOCK_Pos       (0)                                               /*!< SYS_T::MIRCTISTS: FREQLOCK Position    */
#define SYS_MIRCTISTS_FREQLOCK_Msk       (0x1ul << SYS_MIRCTISTS_FREQLOCK_Pos)             /*!< SYS_T::MIRCTISTS: FREQLOCK Mask        */

#define SYS_MIRCTISTS_TFAILIF_Pos        (1)                                               /*!< SYS_T::MIRCTISTS: TFAILIF Position     */
#define SYS_MIRCTISTS_TFAILIF_Msk        (0x1ul << SYS_MIRCTISTS_TFAILIF_Pos)              /*!< SYS_T::MIRCTISTS: TFAILIF Mask         */

#define SYS_MIRCTISTS_CLKERRIF_Pos       (2)                                               /*!< SYS_T::MIRCTISTS: CLKERRIF Position    */
#define SYS_MIRCTISTS_CLKERRIF_Msk       (0x1ul << SYS_MIRCTISTS_CLKERRIF_Pos)             /*!< SYS_T::MIRCTISTS: CLKERRIF Mask        */

#define SYS_MIRCTISTS_OVBDIF_Pos         (3)                                               /*!< SYS_T::MIRCTISTS: OVBDIF Position      */
#define SYS_MIRCTISTS_OVBDIF_Msk         (0x1ul << SYS_MIRCTISTS_OVBDIF_Pos)               /*!< SYS_T::MIRCTISTS: OVBDIF Mask          */

#define SYS_SRAM_INTCTL_PERRIEN_Pos      (0)                                               /*!< SYS_T::SRAM_INTCTL: PERRIEN Position   */
#define SYS_SRAM_INTCTL_PERRIEN_Msk      (0x1ul << SYS_SRAM_INTCTL_PERRIEN_Pos)            /*!< SYS_T::SRAM_INTCTL: PERRIEN Mask       */

#define SYS_SRAM_STATUS_PERRIF_Pos       (0)                                               /*!< SYS_T::SRAM_STATUS: PERRIF Position    */
#define SYS_SRAM_STATUS_PERRIF_Msk       (0x1ul << SYS_SRAM_STATUS_PERRIF_Pos)             /*!< SYS_T::SRAM_STATUS: PERRIF Mask        */

#define SYS_SRAM_ERRADDR_ERRADDR_Pos     (0)                                               /*!< SYS_T::SRAM_ERRADDR: ERRADDR Position  */
#define SYS_SRAM_ERRADDR_ERRADDR_Msk     (0xfffffffful << SYS_SRAM_ERRADDR_ERRADDR_Pos)    /*!< SYS_T::SRAM_ERRADDR: ERRADDR Mask      */

#define SYS_SRAM_BISTCTL_SRBIST0_Pos     (0)                                               /*!< SYS_T::SRAM_BISTCTL: SRBIST0 Position  */
#define SYS_SRAM_BISTCTL_SRBIST0_Msk     (0x1ul << SYS_SRAM_BISTCTL_SRBIST0_Pos)           /*!< SYS_T::SRAM_BISTCTL: SRBIST0 Mask      */

#define SYS_SRAM_BISTCTL_SRBIST1_Pos     (1)                                               /*!< SYS_T::SRAM_BISTCTL: SRBIST1 Position  */
#define SYS_SRAM_BISTCTL_SRBIST1_Msk     (0x1ul << SYS_SRAM_BISTCTL_SRBIST1_Pos)           /*!< SYS_T::SRAM_BISTCTL: SRBIST1 Mask      */

#define SYS_SRAM_BISTCTL_CRBIST_Pos      (2)                                               /*!< SYS_T::SRAM_BISTCTL: CRBIST Position   */
#define SYS_SRAM_BISTCTL_CRBIST_Msk      (0x1ul << SYS_SRAM_BISTCTL_CRBIST_Pos)            /*!< SYS_T::SRAM_BISTCTL: CRBIST Mask       */

#define SYS_SRAM_BISTCTL_CANFDBIST_Pos   (3)                                               /*!< SYS_T::SRAM_BISTCTL: CANFDBIST Position*/
#define SYS_SRAM_BISTCTL_CANFDBIST_Msk   (0x1ul << SYS_SRAM_BISTCTL_CANFDBIST_Pos)         /*!< SYS_T::SRAM_BISTCTL: CANFDBIST Mask    */

#define SYS_SRAM_BISTCTL_USBBIST_Pos     (4)                                               /*!< SYS_T::SRAM_BISTCTL: USBBIST Position  */
#define SYS_SRAM_BISTCTL_USBBIST_Msk     (0x1ul << SYS_SRAM_BISTCTL_USBBIST_Pos)           /*!< SYS_T::SRAM_BISTCTL: USBBIST Mask      */

#define SYS_SRAM_BISTCTL_LPSRBIST_Pos    (11)                                              /*!< SYS_T::SRAM_BISTCTL: LPSRBIST Position */
#define SYS_SRAM_BISTCTL_LPSRBIST_Msk    (0x1ul << SYS_SRAM_BISTCTL_LPSRBIST_Pos)          /*!< SYS_T::SRAM_BISTCTL: LPSRBIST Mask     */

#define SYS_SRAM_BISTSTS_SRBISTEF0_Pos   (0)                                               /*!< SYS_T::SRAM_BISTSTS: SRBISTEF0 Position*/
#define SYS_SRAM_BISTSTS_SRBISTEF0_Msk   (0x1ul << SYS_SRAM_BISTSTS_SRBISTEF0_Pos)         /*!< SYS_T::SRAM_BISTSTS: SRBISTEF0 Mask    */

#define SYS_SRAM_BISTSTS_SRBISTEF1_Pos   (1)                                               /*!< SYS_T::SRAM_BISTSTS: SRBISTEF1 Position*/
#define SYS_SRAM_BISTSTS_SRBISTEF1_Msk   (0x1ul << SYS_SRAM_BISTSTS_SRBISTEF1_Pos)         /*!< SYS_T::SRAM_BISTSTS: SRBISTEF1 Mask    */

#define SYS_SRAM_BISTSTS_CRBISTEF_Pos    (2)                                               /*!< SYS_T::SRAM_BISTSTS: CRBISTEF Position */
#define SYS_SRAM_BISTSTS_CRBISTEF_Msk    (0x1ul << SYS_SRAM_BISTSTS_CRBISTEF_Pos)          /*!< SYS_T::SRAM_BISTSTS: CRBISTEF Mask     */

#define SYS_SRAM_BISTSTS_CANBEF_Pos      (3)                                               /*!< SYS_T::SRAM_BISTSTS: CANBEF Position   */
#define SYS_SRAM_BISTSTS_CANBEF_Msk      (0x1ul << SYS_SRAM_BISTSTS_CANBEF_Pos)            /*!< SYS_T::SRAM_BISTSTS: CANBEF Mask       */

#define SYS_SRAM_BISTSTS_USBBEF_Pos      (4)                                               /*!< SYS_T::SRAM_BISTSTS: USBBEF Position   */
#define SYS_SRAM_BISTSTS_USBBEF_Msk      (0x1ul << SYS_SRAM_BISTSTS_USBBEF_Pos)            /*!< SYS_T::SRAM_BISTSTS: USBBEF Mask       */

#define SYS_SRAM_BISTSTS_LPSRBEF_Pos     (11)                                              /*!< SYS_T::SRAM_BISTSTS: LPSRBEF Position  */
#define SYS_SRAM_BISTSTS_LPSRBEF_Msk     (0x1ul << SYS_SRAM_BISTSTS_LPSRBEF_Pos)           /*!< SYS_T::SRAM_BISTSTS: LPSRBEF Mask      */

#define SYS_SRAM_BISTSTS_SRBEND0_Pos     (16)                                              /*!< SYS_T::SRAM_BISTSTS: SRBEND0 Position  */
#define SYS_SRAM_BISTSTS_SRBEND0_Msk     (0x1ul << SYS_SRAM_BISTSTS_SRBEND0_Pos)           /*!< SYS_T::SRAM_BISTSTS: SRBEND0 Mask      */

#define SYS_SRAM_BISTSTS_SRBEND1_Pos     (17)                                              /*!< SYS_T::SRAM_BISTSTS: SRBEND1 Position  */
#define SYS_SRAM_BISTSTS_SRBEND1_Msk     (0x1ul << SYS_SRAM_BISTSTS_SRBEND1_Pos)           /*!< SYS_T::SRAM_BISTSTS: SRBEND1 Mask      */

#define SYS_SRAM_BISTSTS_CRBEND_Pos      (18)                                              /*!< SYS_T::SRAM_BISTSTS: CRBEND Position   */
#define SYS_SRAM_BISTSTS_CRBEND_Msk      (0x1ul << SYS_SRAM_BISTSTS_CRBEND_Pos)            /*!< SYS_T::SRAM_BISTSTS: CRBEND Mask       */

#define SYS_SRAM_BISTSTS_CANBEND_Pos     (19)                                              /*!< SYS_T::SRAM_BISTSTS: CANBEND Position  */
#define SYS_SRAM_BISTSTS_CANBEND_Msk     (0x1ul << SYS_SRAM_BISTSTS_CANBEND_Pos)           /*!< SYS_T::SRAM_BISTSTS: CANBEND Mask      */

#define SYS_SRAM_BISTSTS_USBBEND_Pos     (20)                                              /*!< SYS_T::SRAM_BISTSTS: USBBEND Position  */
#define SYS_SRAM_BISTSTS_USBBEND_Msk     (0x1ul << SYS_SRAM_BISTSTS_USBBEND_Pos)           /*!< SYS_T::SRAM_BISTSTS: USBBEND Mask      */

#define SYS_SRAM_BISTSTS_LPSRBEND_Pos    (27)                                              /*!< SYS_T::SRAM_BISTSTS: LPSRBEND Position */
#define SYS_SRAM_BISTSTS_LPSRBEND_Msk    (0x1ul << SYS_SRAM_BISTSTS_LPSRBEND_Pos)          /*!< SYS_T::SRAM_BISTSTS: LPSRBEND Mask     */

#define SYS_SRAMPC0_SRAM0PM_Pos          (0)                                               /*!< SYS_T::SRAMPC0: SRAM0PM Position       */
#define SYS_SRAMPC0_SRAM0PM_Msk          (0x7ul << SYS_SRAMPC0_SRAM0PM_Pos)                /*!< SYS_T::SRAMPC0: SRAM0PM Mask           */

#define SYS_SRAMPC0_SRAM1PM_Pos          (4)                                               /*!< SYS_T::SRAMPC0: SRAM1PM Position       */
#define SYS_SRAMPC0_SRAM1PM_Msk          (0x7ul << SYS_SRAMPC0_SRAM1PM_Pos)                /*!< SYS_T::SRAMPC0: SRAM1PM Mask           */

#define SYS_SRAMPC0_SRAM2PM_Pos          (8)                                               /*!< SYS_T::SRAMPC0: SRAM2PM Position       */
#define SYS_SRAMPC0_SRAM2PM_Msk          (0x7ul << SYS_SRAMPC0_SRAM2PM_Pos)                /*!< SYS_T::SRAMPC0: SRAM2PM Mask           */

#define SYS_SRAMPC0_SRAM3PM_Pos          (12)                                              /*!< SYS_T::SRAMPC0: SRAM3PM Position       */
#define SYS_SRAMPC0_SRAM3PM_Msk          (0x7ul << SYS_SRAMPC0_SRAM3PM_Pos)                /*!< SYS_T::SRAMPC0: SRAM3PM Mask           */

#define SYS_SRAMPC0_SRAM4PM_Pos          (16)                                              /*!< SYS_T::SRAMPC0: SRAM4PM Position       */
#define SYS_SRAMPC0_SRAM4PM_Msk          (0x7ul << SYS_SRAMPC0_SRAM4PM_Pos)                /*!< SYS_T::SRAMPC0: SRAM4PM Mask           */

#define SYS_SRAMPC0_SRAM5PM_Pos          (20)                                              /*!< SYS_T::SRAMPC0: SRAM5PM Position       */
#define SYS_SRAMPC0_SRAM5PM_Msk          (0x7ul << SYS_SRAMPC0_SRAM5PM_Pos)                /*!< SYS_T::SRAMPC0: SRAM5PM Mask           */

#define SYS_SRAMPC0_SRAM6PM_Pos          (24)                                              /*!< SYS_T::SRAMPC0: SRAM6PM Position       */
#define SYS_SRAMPC0_SRAM6PM_Msk          (0x7ul << SYS_SRAMPC0_SRAM6PM_Pos)                /*!< SYS_T::SRAMPC0: SRAM6PM Mask           */

#define SYS_SRAMPC0_PCBUSY_Pos           (31)                                              /*!< SYS_T::SRAMPC0: PCBUSY Position        */
#define SYS_SRAMPC0_PCBUSY_Msk           (0x1ul << SYS_SRAMPC0_PCBUSY_Pos)                 /*!< SYS_T::SRAMPC0: PCBUSY Mask            */

#define SYS_HIRCTCTL_FREQSEL_Pos         (0)                                               /*!< SYS_T::HIRCTCTL: FREQSEL Position      */
#define SYS_HIRCTCTL_FREQSEL_Msk         (0x3ul << SYS_HIRCTCTL_FREQSEL_Pos)               /*!< SYS_T::HIRCTCTL: FREQSEL Mask          */

#define SYS_HIRCTCTL_ACCURSEL_Pos        (2)                                               /*!< SYS_T::HIRCTCTL: ACCURSEL Position     */
#define SYS_HIRCTCTL_ACCURSEL_Msk        (0x3ul << SYS_HIRCTCTL_ACCURSEL_Pos)              /*!< SYS_T::HIRCTCTL: ACCURSEL Mask         */

#define SYS_HIRCTCTL_LOOPSEL_Pos         (4)                                               /*!< SYS_T::HIRCTCTL: LOOPSEL Position      */
#define SYS_HIRCTCTL_LOOPSEL_Msk         (0x3ul << SYS_HIRCTCTL_LOOPSEL_Pos)               /*!< SYS_T::HIRCTCTL: LOOPSEL Mask          */

#define SYS_HIRCTCTL_RETRYCNT_Pos        (6)                                               /*!< SYS_T::HIRCTCTL: RETRYCNT Position     */
#define SYS_HIRCTCTL_RETRYCNT_Msk        (0x3ul << SYS_HIRCTCTL_RETRYCNT_Pos)              /*!< SYS_T::HIRCTCTL: RETRYCNT Mask         */

#define SYS_HIRCTCTL_CESTOPEN_Pos        (8)                                               /*!< SYS_T::HIRCTCTL: CESTOPEN Position     */
#define SYS_HIRCTCTL_CESTOPEN_Msk        (0x1ul << SYS_HIRCTCTL_CESTOPEN_Pos)              /*!< SYS_T::HIRCTCTL: CESTOPEN Mask         */

#define SYS_HIRCTCTL_BOUNDEN_Pos         (9)                                               /*!< SYS_T::HIRCTCTL: BOUNDEN Position      */
#define SYS_HIRCTCTL_BOUNDEN_Msk         (0x1ul << SYS_HIRCTCTL_BOUNDEN_Pos)               /*!< SYS_T::HIRCTCTL: BOUNDEN Mask          */

#define SYS_HIRCTCTL_REFCKSEL_Pos        (10)                                              /*!< SYS_T::HIRCTCTL: REFCKSEL Position     */
#define SYS_HIRCTCTL_REFCKSEL_Msk        (0x1ul << SYS_HIRCTCTL_REFCKSEL_Pos)              /*!< SYS_T::HIRCTCTL: REFCKSEL Mask         */

#define SYS_HIRCTCTL_BOUNDARY_Pos        (16)                                              /*!< SYS_T::HIRCTCTL: BOUNDARY Position     */
#define SYS_HIRCTCTL_BOUNDARY_Msk        (0x1ful << SYS_HIRCTCTL_BOUNDARY_Pos)             /*!< SYS_T::HIRCTCTL: BOUNDARY Mask         */

#define SYS_HIRCTIEN_TFAILIEN_Pos        (1)                                               /*!< SYS_T::HIRCTIEN: TFAILIEN Position     */
#define SYS_HIRCTIEN_TFAILIEN_Msk        (0x1ul << SYS_HIRCTIEN_TFAILIEN_Pos)              /*!< SYS_T::HIRCTIEN: TFAILIEN Mask         */

#define SYS_HIRCTIEN_CLKEIEN_Pos         (2)                                               /*!< SYS_T::HIRCTIEN: CLKEIEN Position      */
#define SYS_HIRCTIEN_CLKEIEN_Msk         (0x1ul << SYS_HIRCTIEN_CLKEIEN_Pos)               /*!< SYS_T::HIRCTIEN: CLKEIEN Mask          */

#define SYS_HIRCTISTS_FREQLOCK_Pos       (0)                                               /*!< SYS_T::HIRCTISTS: FREQLOCK Position    */
#define SYS_HIRCTISTS_FREQLOCK_Msk       (0x1ul << SYS_HIRCTISTS_FREQLOCK_Pos)             /*!< SYS_T::HIRCTISTS: FREQLOCK Mask        */

#define SYS_HIRCTISTS_TFAILIF_Pos        (1)                                               /*!< SYS_T::HIRCTISTS: TFAILIF Position     */
#define SYS_HIRCTISTS_TFAILIF_Msk        (0x1ul << SYS_HIRCTISTS_TFAILIF_Pos)              /*!< SYS_T::HIRCTISTS: TFAILIF Mask         */

#define SYS_HIRCTISTS_CLKERRIF_Pos       (2)                                               /*!< SYS_T::HIRCTISTS: CLKERRIF Position    */
#define SYS_HIRCTISTS_CLKERRIF_Msk       (0x1ul << SYS_HIRCTISTS_CLKERRIF_Pos)             /*!< SYS_T::HIRCTISTS: CLKERRIF Mask        */

#define SYS_HIRCTISTS_OVBDIF_Pos         (3)                                               /*!< SYS_T::HIRCTISTS: OVBDIF Position      */
#define SYS_HIRCTISTS_OVBDIF_Msk         (0x1ul << SYS_HIRCTISTS_OVBDIF_Pos)               /*!< SYS_T::HIRCTISTS: OVBDIF Mask          */

#define SYS_IRCTCTL_FREQSEL_Pos          (0)                                               /*!< SYS_T::IRCTCTL: FREQSEL Position       */
#define SYS_IRCTCTL_FREQSEL_Msk          (0x3ul << SYS_IRCTCTL_FREQSEL_Pos)                /*!< SYS_T::IRCTCTL: FREQSEL Mask           */

#define SYS_IRCTCTL_ACCURSEL_Pos         (2)                                               /*!< SYS_T::IRCTCTL: ACCURSEL Position      */
#define SYS_IRCTCTL_ACCURSEL_Msk         (0x3ul << SYS_IRCTCTL_ACCURSEL_Pos)               /*!< SYS_T::IRCTCTL: ACCURSEL Mask          */

#define SYS_IRCTCTL_LOOPSEL_Pos          (4)                                               /*!< SYS_T::IRCTCTL: LOOPSEL Position       */
#define SYS_IRCTCTL_LOOPSEL_Msk          (0x3ul << SYS_IRCTCTL_LOOPSEL_Pos)                /*!< SYS_T::IRCTCTL: LOOPSEL Mask           */

#define SYS_IRCTCTL_RETRYCNT_Pos         (6)                                               /*!< SYS_T::IRCTCTL: RETRYCNT Position      */
#define SYS_IRCTCTL_RETRYCNT_Msk         (0x3ul << SYS_IRCTCTL_RETRYCNT_Pos)               /*!< SYS_T::IRCTCTL: RETRYCNT Mask          */

#define SYS_IRCTCTL_CESTOPEN_Pos         (8)                                               /*!< SYS_T::IRCTCTL: CESTOPEN Position      */
#define SYS_IRCTCTL_CESTOPEN_Msk         (0x1ul << SYS_IRCTCTL_CESTOPEN_Pos)               /*!< SYS_T::IRCTCTL: CESTOPEN Mask          */

#define SYS_IRCTCTL_BOUNDEN_Pos          (9)                                               /*!< SYS_T::IRCTCTL: BOUNDEN Position       */
#define SYS_IRCTCTL_BOUNDEN_Msk          (0x1ul << SYS_IRCTCTL_BOUNDEN_Pos)                /*!< SYS_T::IRCTCTL: BOUNDEN Mask           */

#define SYS_IRCTCTL_REFCKSEL_Pos         (10)                                              /*!< SYS_T::IRCTCTL: REFCKSEL Position      */
#define SYS_IRCTCTL_REFCKSEL_Msk         (0x1ul << SYS_IRCTCTL_REFCKSEL_Pos)               /*!< SYS_T::IRCTCTL: REFCKSEL Mask          */

#define SYS_IRCTCTL_BOUNDARY_Pos         (16)                                              /*!< SYS_T::IRCTCTL: BOUNDARY Position      */
#define SYS_IRCTCTL_BOUNDARY_Msk         (0x1ful << SYS_IRCTCTL_BOUNDARY_Pos)              /*!< SYS_T::IRCTCTL: BOUNDARY Mask          */

#define SYS_IRCTIEN_TFAILIEN_Pos         (1)                                               /*!< SYS_T::IRCTIEN: TFAILIEN Position      */
#define SYS_IRCTIEN_TFAILIEN_Msk         (0x1ul << SYS_IRCTIEN_TFAILIEN_Pos)               /*!< SYS_T::IRCTIEN: TFAILIEN Mask          */

#define SYS_IRCTIEN_CLKEIEN_Pos          (2)                                               /*!< SYS_T::IRCTIEN: CLKEIEN Position       */
#define SYS_IRCTIEN_CLKEIEN_Msk          (0x1ul << SYS_IRCTIEN_CLKEIEN_Pos)                /*!< SYS_T::IRCTIEN: CLKEIEN Mask           */

#define SYS_IRCTISTS_FREQLOCK_Pos        (0)                                               /*!< SYS_T::IRCTISTS: FREQLOCK Position     */
#define SYS_IRCTISTS_FREQLOCK_Msk        (0x1ul << SYS_IRCTISTS_FREQLOCK_Pos)              /*!< SYS_T::IRCTISTS: FREQLOCK Mask         */

#define SYS_IRCTISTS_TFAILIF_Pos         (1)                                               /*!< SYS_T::IRCTISTS: TFAILIF Position      */
#define SYS_IRCTISTS_TFAILIF_Msk         (0x1ul << SYS_IRCTISTS_TFAILIF_Pos)               /*!< SYS_T::IRCTISTS: TFAILIF Mask          */

#define SYS_IRCTISTS_CLKERRIF_Pos        (2)                                               /*!< SYS_T::IRCTISTS: CLKERRIF Position     */
#define SYS_IRCTISTS_CLKERRIF_Msk        (0x1ul << SYS_IRCTISTS_CLKERRIF_Pos)              /*!< SYS_T::IRCTISTS: CLKERRIF Mask         */

#define SYS_IRCTISTS_OVBDIF_Pos          (3)                                               /*!< SYS_T::IRCTISTS: OVBDIF Position       */
#define SYS_IRCTISTS_OVBDIF_Msk          (0x1ul << SYS_IRCTISTS_OVBDIF_Pos)                /*!< SYS_T::IRCTISTS: OVBDIF Mask           */

#define SYS_RAMPGCTL_RRAMPGEN0_Pos       (0)                                               /*!< SYS_T::RAMPGCTL: RRAMPGEN0 Position    */
#define SYS_RAMPGCTL_RRAMPGEN0_Msk       (0x1ul << SYS_RAMPGCTL_RRAMPGEN0_Pos)             /*!< SYS_T::RAMPGCTL: RRAMPGEN0 Mask        */

#define SYS_RAMPGCTL_RRAMPGDN0_Pos       (1)                                               /*!< SYS_T::RAMPGCTL: RRAMPGDN0 Position    */
#define SYS_RAMPGCTL_RRAMPGDN0_Msk       (0x1ul << SYS_RAMPGCTL_RRAMPGDN0_Pos)             /*!< SYS_T::RAMPGCTL: RRAMPGDN0 Mask        */

#define SYS_RAMPGCTL_RRAMBUSY0_Pos       (2)                                               /*!< SYS_T::RAMPGCTL: RRAMBUSY0 Position    */
#define SYS_RAMPGCTL_RRAMBUSY0_Msk       (0x1ul << SYS_RAMPGCTL_RRAMBUSY0_Pos)             /*!< SYS_T::RAMPGCTL: RRAMBUSY0 Mask        */

#define SYS_RAMPGCTL_RRAMPGEN1_Pos       (4)                                               /*!< SYS_T::RAMPGCTL: RRAMPGEN1 Position    */
#define SYS_RAMPGCTL_RRAMPGEN1_Msk       (0x1ul << SYS_RAMPGCTL_RRAMPGEN1_Pos)             /*!< SYS_T::RAMPGCTL: RRAMPGEN1 Mask        */

#define SYS_RAMPGCTL_RRAMPGDN1_Pos       (5)                                               /*!< SYS_T::RAMPGCTL: RRAMPGDN1 Position    */
#define SYS_RAMPGCTL_RRAMPGDN1_Msk       (0x1ul << SYS_RAMPGCTL_RRAMPGDN1_Pos)             /*!< SYS_T::RAMPGCTL: RRAMPGDN1 Mask        */

#define SYS_RAMPGCTL_RRAMBUSY1_Pos       (6)                                               /*!< SYS_T::RAMPGCTL: RRAMBUSY1 Position    */
#define SYS_RAMPGCTL_RRAMBUSY1_Msk       (0x1ul << SYS_RAMPGCTL_RRAMBUSY1_Pos)             /*!< SYS_T::RAMPGCTL: RRAMBUSY1 Mask        */

#define SYS_REGLCTL_REGLCTL_Pos          (0)                                               /*!< SYS_T::REGLCTL: REGLCTL Position       */
#define SYS_REGLCTL_REGLCTL_Msk          (0xfful << SYS_REGLCTL_REGLCTL_Pos)               /*!< SYS_T::REGLCTL: REGLCTL Mask           */

#define SYS_PORDISAN_POROFFAN_Pos        (0)                                               /*!< SYS_T::PORDISAN: POROFFAN Position     */
#define SYS_PORDISAN_POROFFAN_Msk        (0xfffful << SYS_PORDISAN_POROFFAN_Pos)           /*!< SYS_T::PORDISAN: POROFFAN Mask         */

#define SYS_CSERVER_VERSION_Pos          (0)                                               /*!< SYS_T::CSERVER: VERSION Position       */
#define SYS_CSERVER_VERSION_Msk          (0xfful << SYS_CSERVER_VERSION_Pos)               /*!< SYS_T::CSERVER: VERSION Mask           */

#define SYS_PLCTL_PLSEL_Pos              (0)                                               /*!< SYS_T::PLCTL: PLSEL Position           */
#define SYS_PLCTL_PLSEL_Msk              (0x7ul << SYS_PLCTL_PLSEL_Pos)                    /*!< SYS_T::PLCTL: PLSEL Mask               */

#define SYS_PLCTL_PLKEEP_Pos             (3)                                               /*!< SYS_T::PLCTL: PLKEEP Position          */
#define SYS_PLCTL_PLKEEP_Msk             (0x1ul << SYS_PLCTL_PLKEEP_Pos)                   /*!< SYS_T::PLCTL: PLKEEP Mask              */

#define SYS_PLSTS_PLCBUSY_Pos            (0)                                               /*!< SYS_T::PLSTS: PLCBUSY Position         */
#define SYS_PLSTS_PLCBUSY_Msk            (0x1ul << SYS_PLSTS_PLCBUSY_Pos)                  /*!< SYS_T::PLSTS: PLCBUSY Mask             */

#define SYS_PLSTS_PLSTATUS_Pos           (8)                                               /*!< SYS_T::PLSTS: PLSTATUS Position        */
#define SYS_PLSTS_PLSTATUS_Msk           (0x7ul << SYS_PLSTS_PLSTATUS_Pos)                 /*!< SYS_T::PLSTS: PLSTATUS Mask            */

#define SYS_INIVTOR_INIVTOR_Pos          (10)                                              /*!< SYS_T::INIVTOR: INIVTOR Position       */
#define SYS_INIVTOR_INIVTOR_Msk          (0x3ffffful << SYS_INIVTOR_INIVTOR_Pos)           /*!< SYS_T::INIVTOR: INIVTOR Mask           */

#define SYS_GPA_MFP0_PA0MFP_Pos          (0)                                               /*!< SYS_T::GPA_MFP0: PA0MFP Position       */
#define SYS_GPA_MFP0_PA0MFP_Msk          (0x1ful << SYS_GPA_MFP0_PA0MFP_Pos)               /*!< SYS_T::GPA_MFP0: PA0MFP Mask           */

#define SYS_GPA_MFP0_PA1MFP_Pos          (8)                                               /*!< SYS_T::GPA_MFP0: PA1MFP Position       */
#define SYS_GPA_MFP0_PA1MFP_Msk          (0x1ful << SYS_GPA_MFP0_PA1MFP_Pos)               /*!< SYS_T::GPA_MFP0: PA1MFP Mask           */

#define SYS_GPA_MFP0_PA2MFP_Pos          (16)                                              /*!< SYS_T::GPA_MFP0: PA2MFP Position       */
#define SYS_GPA_MFP0_PA2MFP_Msk          (0x1ful << SYS_GPA_MFP0_PA2MFP_Pos)               /*!< SYS_T::GPA_MFP0: PA2MFP Mask           */

#define SYS_GPA_MFP0_PA3MFP_Pos          (24)                                              /*!< SYS_T::GPA_MFP0: PA3MFP Position       */
#define SYS_GPA_MFP0_PA3MFP_Msk          (0x1ful << SYS_GPA_MFP0_PA3MFP_Pos)               /*!< SYS_T::GPA_MFP0: PA3MFP Mask           */

#define SYS_GPA_MFP1_PA4MFP_Pos          (0)                                               /*!< SYS_T::GPA_MFP1: PA4MFP Position       */
#define SYS_GPA_MFP1_PA4MFP_Msk          (0x1ful << SYS_GPA_MFP1_PA4MFP_Pos)               /*!< SYS_T::GPA_MFP1: PA4MFP Mask           */

#define SYS_GPA_MFP1_PA5MFP_Pos          (8)                                               /*!< SYS_T::GPA_MFP1: PA5MFP Position       */
#define SYS_GPA_MFP1_PA5MFP_Msk          (0x1ful << SYS_GPA_MFP1_PA5MFP_Pos)               /*!< SYS_T::GPA_MFP1: PA5MFP Mask           */

#define SYS_GPA_MFP1_PA6MFP_Pos          (16)                                              /*!< SYS_T::GPA_MFP1: PA6MFP Position       */
#define SYS_GPA_MFP1_PA6MFP_Msk          (0x1ful << SYS_GPA_MFP1_PA6MFP_Pos)               /*!< SYS_T::GPA_MFP1: PA6MFP Mask           */

#define SYS_GPA_MFP1_PA7MFP_Pos          (24)                                              /*!< SYS_T::GPA_MFP1: PA7MFP Position       */
#define SYS_GPA_MFP1_PA7MFP_Msk          (0x1ful << SYS_GPA_MFP1_PA7MFP_Pos)               /*!< SYS_T::GPA_MFP1: PA7MFP Mask           */

#define SYS_GPA_MFP2_PA8MFP_Pos          (0)                                               /*!< SYS_T::GPA_MFP2: PA8MFP Position       */
#define SYS_GPA_MFP2_PA8MFP_Msk          (0x1ful << SYS_GPA_MFP2_PA8MFP_Pos)               /*!< SYS_T::GPA_MFP2: PA8MFP Mask           */

#define SYS_GPA_MFP2_PA9MFP_Pos          (8)                                               /*!< SYS_T::GPA_MFP2: PA9MFP Position       */
#define SYS_GPA_MFP2_PA9MFP_Msk          (0x1ful << SYS_GPA_MFP2_PA9MFP_Pos)               /*!< SYS_T::GPA_MFP2: PA9MFP Mask           */

#define SYS_GPA_MFP2_PA10MFP_Pos         (16)                                              /*!< SYS_T::GPA_MFP2: PA10MFP Position      */
#define SYS_GPA_MFP2_PA10MFP_Msk         (0x1ful << SYS_GPA_MFP2_PA10MFP_Pos)              /*!< SYS_T::GPA_MFP2: PA10MFP Mask          */

#define SYS_GPA_MFP2_PA11MFP_Pos         (24)                                              /*!< SYS_T::GPA_MFP2: PA11MFP Position      */
#define SYS_GPA_MFP2_PA11MFP_Msk         (0x1ful << SYS_GPA_MFP2_PA11MFP_Pos)              /*!< SYS_T::GPA_MFP2: PA11MFP Mask          */

#define SYS_GPA_MFP3_PA12MFP_Pos         (0)                                               /*!< SYS_T::GPA_MFP3: PA12MFP Position      */
#define SYS_GPA_MFP3_PA12MFP_Msk         (0x1ful << SYS_GPA_MFP3_PA12MFP_Pos)              /*!< SYS_T::GPA_MFP3: PA12MFP Mask          */

#define SYS_GPA_MFP3_PA13MFP_Pos         (8)                                               /*!< SYS_T::GPA_MFP3: PA13MFP Position      */
#define SYS_GPA_MFP3_PA13MFP_Msk         (0x1ful << SYS_GPA_MFP3_PA13MFP_Pos)              /*!< SYS_T::GPA_MFP3: PA13MFP Mask          */

#define SYS_GPA_MFP3_PA14MFP_Pos         (16)                                              /*!< SYS_T::GPA_MFP3: PA14MFP Position      */
#define SYS_GPA_MFP3_PA14MFP_Msk         (0x1ful << SYS_GPA_MFP3_PA14MFP_Pos)              /*!< SYS_T::GPA_MFP3: PA14MFP Mask          */

#define SYS_GPA_MFP3_PA15MFP_Pos         (24)                                              /*!< SYS_T::GPA_MFP3: PA15MFP Position      */
#define SYS_GPA_MFP3_PA15MFP_Msk         (0x1ful << SYS_GPA_MFP3_PA15MFP_Pos)              /*!< SYS_T::GPA_MFP3: PA15MFP Mask          */

#define SYS_GPB_MFP0_PB0MFP_Pos          (0)                                               /*!< SYS_T::GPB_MFP0: PB0MFP Position       */
#define SYS_GPB_MFP0_PB0MFP_Msk          (0x1ful << SYS_GPB_MFP0_PB0MFP_Pos)               /*!< SYS_T::GPB_MFP0: PB0MFP Mask           */

#define SYS_GPB_MFP0_PB1MFP_Pos          (8)                                               /*!< SYS_T::GPB_MFP0: PB1MFP Position       */
#define SYS_GPB_MFP0_PB1MFP_Msk          (0x1ful << SYS_GPB_MFP0_PB1MFP_Pos)               /*!< SYS_T::GPB_MFP0: PB1MFP Mask           */

#define SYS_GPB_MFP0_PB2MFP_Pos          (16)                                              /*!< SYS_T::GPB_MFP0: PB2MFP Position       */
#define SYS_GPB_MFP0_PB2MFP_Msk          (0x1ful << SYS_GPB_MFP0_PB2MFP_Pos)               /*!< SYS_T::GPB_MFP0: PB2MFP Mask           */

#define SYS_GPB_MFP0_PB3MFP_Pos          (24)                                              /*!< SYS_T::GPB_MFP0: PB3MFP Position       */
#define SYS_GPB_MFP0_PB3MFP_Msk          (0x1ful << SYS_GPB_MFP0_PB3MFP_Pos)               /*!< SYS_T::GPB_MFP0: PB3MFP Mask           */

#define SYS_GPB_MFP1_PB4MFP_Pos          (0)                                               /*!< SYS_T::GPB_MFP1: PB4MFP Position       */
#define SYS_GPB_MFP1_PB4MFP_Msk          (0x1ful << SYS_GPB_MFP1_PB4MFP_Pos)               /*!< SYS_T::GPB_MFP1: PB4MFP Mask           */

#define SYS_GPB_MFP1_PB5MFP_Pos          (8)                                               /*!< SYS_T::GPB_MFP1: PB5MFP Position       */
#define SYS_GPB_MFP1_PB5MFP_Msk          (0x1ful << SYS_GPB_MFP1_PB5MFP_Pos)               /*!< SYS_T::GPB_MFP1: PB5MFP Mask           */

#define SYS_GPB_MFP1_PB6MFP_Pos          (16)                                              /*!< SYS_T::GPB_MFP1: PB6MFP Position       */
#define SYS_GPB_MFP1_PB6MFP_Msk          (0x1ful << SYS_GPB_MFP1_PB6MFP_Pos)               /*!< SYS_T::GPB_MFP1: PB6MFP Mask           */

#define SYS_GPB_MFP1_PB7MFP_Pos          (24)                                              /*!< SYS_T::GPB_MFP1: PB7MFP Position       */
#define SYS_GPB_MFP1_PB7MFP_Msk          (0x1ful << SYS_GPB_MFP1_PB7MFP_Pos)               /*!< SYS_T::GPB_MFP1: PB7MFP Mask           */

#define SYS_GPB_MFP2_PB8MFP_Pos          (0)                                               /*!< SYS_T::GPB_MFP2: PB8MFP Position       */
#define SYS_GPB_MFP2_PB8MFP_Msk          (0x1ful << SYS_GPB_MFP2_PB8MFP_Pos)               /*!< SYS_T::GPB_MFP2: PB8MFP Mask           */

#define SYS_GPB_MFP2_PB9MFP_Pos          (8)                                               /*!< SYS_T::GPB_MFP2: PB9MFP Position       */
#define SYS_GPB_MFP2_PB9MFP_Msk          (0x1ful << SYS_GPB_MFP2_PB9MFP_Pos)               /*!< SYS_T::GPB_MFP2: PB9MFP Mask           */

#define SYS_GPB_MFP2_PB10MFP_Pos         (16)                                              /*!< SYS_T::GPB_MFP2: PB10MFP Position      */
#define SYS_GPB_MFP2_PB10MFP_Msk         (0x1ful << SYS_GPB_MFP2_PB10MFP_Pos)              /*!< SYS_T::GPB_MFP2: PB10MFP Mask          */

#define SYS_GPB_MFP2_PB11MFP_Pos         (24)                                              /*!< SYS_T::GPB_MFP2: PB11MFP Position      */
#define SYS_GPB_MFP2_PB11MFP_Msk         (0x1ful << SYS_GPB_MFP2_PB11MFP_Pos)              /*!< SYS_T::GPB_MFP2: PB11MFP Mask          */

#define SYS_GPB_MFP3_PB12MFP_Pos         (0)                                               /*!< SYS_T::GPB_MFP3: PB12MFP Position      */
#define SYS_GPB_MFP3_PB12MFP_Msk         (0x1ful << SYS_GPB_MFP3_PB12MFP_Pos)              /*!< SYS_T::GPB_MFP3: PB12MFP Mask          */

#define SYS_GPB_MFP3_PB13MFP_Pos         (8)                                               /*!< SYS_T::GPB_MFP3: PB13MFP Position      */
#define SYS_GPB_MFP3_PB13MFP_Msk         (0x1ful << SYS_GPB_MFP3_PB13MFP_Pos)              /*!< SYS_T::GPB_MFP3: PB13MFP Mask          */

#define SYS_GPB_MFP3_PB14MFP_Pos         (16)                                              /*!< SYS_T::GPB_MFP3: PB14MFP Position      */
#define SYS_GPB_MFP3_PB14MFP_Msk         (0x1ful << SYS_GPB_MFP3_PB14MFP_Pos)              /*!< SYS_T::GPB_MFP3: PB14MFP Mask          */

#define SYS_GPB_MFP3_PB15MFP_Pos         (24)                                              /*!< SYS_T::GPB_MFP3: PB15MFP Position      */
#define SYS_GPB_MFP3_PB15MFP_Msk         (0x1ful << SYS_GPB_MFP3_PB15MFP_Pos)              /*!< SYS_T::GPB_MFP3: PB15MFP Mask          */

#define SYS_GPC_MFP0_PC0MFP_Pos          (0)                                               /*!< SYS_T::GPC_MFP0: PC0MFP Position       */
#define SYS_GPC_MFP0_PC0MFP_Msk          (0x1ful << SYS_GPC_MFP0_PC0MFP_Pos)               /*!< SYS_T::GPC_MFP0: PC0MFP Mask           */

#define SYS_GPC_MFP0_PC1MFP_Pos          (8)                                               /*!< SYS_T::GPC_MFP0: PC1MFP Position       */
#define SYS_GPC_MFP0_PC1MFP_Msk          (0x1ful << SYS_GPC_MFP0_PC1MFP_Pos)               /*!< SYS_T::GPC_MFP0: PC1MFP Mask           */

#define SYS_GPC_MFP0_PC2MFP_Pos          (16)                                              /*!< SYS_T::GPC_MFP0: PC2MFP Position       */
#define SYS_GPC_MFP0_PC2MFP_Msk          (0x1ful << SYS_GPC_MFP0_PC2MFP_Pos)               /*!< SYS_T::GPC_MFP0: PC2MFP Mask           */

#define SYS_GPC_MFP0_PC3MFP_Pos          (24)                                              /*!< SYS_T::GPC_MFP0: PC3MFP Position       */
#define SYS_GPC_MFP0_PC3MFP_Msk          (0x1ful << SYS_GPC_MFP0_PC3MFP_Pos)               /*!< SYS_T::GPC_MFP0: PC3MFP Mask           */

#define SYS_GPC_MFP1_PC4MFP_Pos          (0)                                               /*!< SYS_T::GPC_MFP1: PC4MFP Position       */
#define SYS_GPC_MFP1_PC4MFP_Msk          (0x1ful << SYS_GPC_MFP1_PC4MFP_Pos)               /*!< SYS_T::GPC_MFP1: PC4MFP Mask           */

#define SYS_GPC_MFP1_PC5MFP_Pos          (8)                                               /*!< SYS_T::GPC_MFP1: PC5MFP Position       */
#define SYS_GPC_MFP1_PC5MFP_Msk          (0x1ful << SYS_GPC_MFP1_PC5MFP_Pos)               /*!< SYS_T::GPC_MFP1: PC5MFP Mask           */

#define SYS_GPC_MFP1_PC6MFP_Pos          (16)                                              /*!< SYS_T::GPC_MFP1: PC6MFP Position       */
#define SYS_GPC_MFP1_PC6MFP_Msk          (0x1ful << SYS_GPC_MFP1_PC6MFP_Pos)               /*!< SYS_T::GPC_MFP1: PC6MFP Mask           */

#define SYS_GPC_MFP1_PC7MFP_Pos          (24)                                              /*!< SYS_T::GPC_MFP1: PC7MFP Position       */
#define SYS_GPC_MFP1_PC7MFP_Msk          (0x1ful << SYS_GPC_MFP1_PC7MFP_Pos)               /*!< SYS_T::GPC_MFP1: PC7MFP Mask           */

#define SYS_GPC_MFP2_PC8MFP_Pos          (0)                                               /*!< SYS_T::GPC_MFP2: PC8MFP Position       */
#define SYS_GPC_MFP2_PC8MFP_Msk          (0x1ful << SYS_GPC_MFP2_PC8MFP_Pos)               /*!< SYS_T::GPC_MFP2: PC8MFP Mask           */

#define SYS_GPC_MFP2_PC9MFP_Pos          (8)                                               /*!< SYS_T::GPC_MFP2: PC9MFP Position       */
#define SYS_GPC_MFP2_PC9MFP_Msk          (0x1ful << SYS_GPC_MFP2_PC9MFP_Pos)               /*!< SYS_T::GPC_MFP2: PC9MFP Mask           */

#define SYS_GPC_MFP2_PC10MFP_Pos         (16)                                              /*!< SYS_T::GPC_MFP2: PC10MFP Position      */
#define SYS_GPC_MFP2_PC10MFP_Msk         (0x1ful << SYS_GPC_MFP2_PC10MFP_Pos)              /*!< SYS_T::GPC_MFP2: PC10MFP Mask          */

#define SYS_GPC_MFP2_PC11MFP_Pos         (24)                                              /*!< SYS_T::GPC_MFP2: PC11MFP Position      */
#define SYS_GPC_MFP2_PC11MFP_Msk         (0x1ful << SYS_GPC_MFP2_PC11MFP_Pos)              /*!< SYS_T::GPC_MFP2: PC11MFP Mask          */

#define SYS_GPC_MFP3_PC12MFP_Pos         (0)                                               /*!< SYS_T::GPC_MFP3: PC12MFP Position      */
#define SYS_GPC_MFP3_PC12MFP_Msk         (0x1ful << SYS_GPC_MFP3_PC12MFP_Pos)              /*!< SYS_T::GPC_MFP3: PC12MFP Mask          */

#define SYS_GPC_MFP3_PC13MFP_Pos         (8)                                               /*!< SYS_T::GPC_MFP3: PC13MFP Position      */
#define SYS_GPC_MFP3_PC13MFP_Msk         (0x1ful << SYS_GPC_MFP3_PC13MFP_Pos)              /*!< SYS_T::GPC_MFP3: PC13MFP Mask          */

#define SYS_GPC_MFP3_PC14MFP_Pos         (16)                                              /*!< SYS_T::GPC_MFP3: PC14MFP Position      */
#define SYS_GPC_MFP3_PC14MFP_Msk         (0x1ful << SYS_GPC_MFP3_PC14MFP_Pos)              /*!< SYS_T::GPC_MFP3: PC14MFP Mask          */

#define SYS_GPD_MFP0_PD0MFP_Pos          (0)                                               /*!< SYS_T::GPD_MFP0: PD0MFP Position       */
#define SYS_GPD_MFP0_PD0MFP_Msk          (0x1ful << SYS_GPD_MFP0_PD0MFP_Pos)               /*!< SYS_T::GPD_MFP0: PD0MFP Mask           */

#define SYS_GPD_MFP0_PD1MFP_Pos          (8)                                               /*!< SYS_T::GPD_MFP0: PD1MFP Position       */
#define SYS_GPD_MFP0_PD1MFP_Msk          (0x1ful << SYS_GPD_MFP0_PD1MFP_Pos)               /*!< SYS_T::GPD_MFP0: PD1MFP Mask           */

#define SYS_GPD_MFP0_PD2MFP_Pos          (16)                                              /*!< SYS_T::GPD_MFP0: PD2MFP Position       */
#define SYS_GPD_MFP0_PD2MFP_Msk          (0x1ful << SYS_GPD_MFP0_PD2MFP_Pos)               /*!< SYS_T::GPD_MFP0: PD2MFP Mask           */

#define SYS_GPD_MFP0_PD3MFP_Pos          (24)                                              /*!< SYS_T::GPD_MFP0: PD3MFP Position       */
#define SYS_GPD_MFP0_PD3MFP_Msk          (0x1ful << SYS_GPD_MFP0_PD3MFP_Pos)               /*!< SYS_T::GPD_MFP0: PD3MFP Mask           */

#define SYS_GPD_MFP1_PD4MFP_Pos          (0)                                               /*!< SYS_T::GPD_MFP1: PD4MFP Position       */
#define SYS_GPD_MFP1_PD4MFP_Msk          (0x1ful << SYS_GPD_MFP1_PD4MFP_Pos)               /*!< SYS_T::GPD_MFP1: PD4MFP Mask           */

#define SYS_GPD_MFP1_PD5MFP_Pos          (8)                                               /*!< SYS_T::GPD_MFP1: PD5MFP Position       */
#define SYS_GPD_MFP1_PD5MFP_Msk          (0x1ful << SYS_GPD_MFP1_PD5MFP_Pos)               /*!< SYS_T::GPD_MFP1: PD5MFP Mask           */

#define SYS_GPD_MFP1_PD6MFP_Pos          (16)                                              /*!< SYS_T::GPD_MFP1: PD6MFP Position       */
#define SYS_GPD_MFP1_PD6MFP_Msk          (0x1ful << SYS_GPD_MFP1_PD6MFP_Pos)               /*!< SYS_T::GPD_MFP1: PD6MFP Mask           */

#define SYS_GPD_MFP1_PD7MFP_Pos          (24)                                              /*!< SYS_T::GPD_MFP1: PD7MFP Position       */
#define SYS_GPD_MFP1_PD7MFP_Msk          (0x1ful << SYS_GPD_MFP1_PD7MFP_Pos)               /*!< SYS_T::GPD_MFP1: PD7MFP Mask           */

#define SYS_GPD_MFP2_PD8MFP_Pos          (0)                                               /*!< SYS_T::GPD_MFP2: PD8MFP Position       */
#define SYS_GPD_MFP2_PD8MFP_Msk          (0x1ful << SYS_GPD_MFP2_PD8MFP_Pos)               /*!< SYS_T::GPD_MFP2: PD8MFP Mask           */

#define SYS_GPD_MFP2_PD9MFP_Pos          (8)                                               /*!< SYS_T::GPD_MFP2: PD9MFP Position       */
#define SYS_GPD_MFP2_PD9MFP_Msk          (0x1ful << SYS_GPD_MFP2_PD9MFP_Pos)               /*!< SYS_T::GPD_MFP2: PD9MFP Mask           */

#define SYS_GPD_MFP2_PD10MFP_Pos         (16)                                              /*!< SYS_T::GPD_MFP2: PD10MFP Position      */
#define SYS_GPD_MFP2_PD10MFP_Msk         (0x1ful << SYS_GPD_MFP2_PD10MFP_Pos)              /*!< SYS_T::GPD_MFP2: PD10MFP Mask          */

#define SYS_GPD_MFP2_PD11MFP_Pos         (24)                                              /*!< SYS_T::GPD_MFP2: PD11MFP Position      */
#define SYS_GPD_MFP2_PD11MFP_Msk         (0x1ful << SYS_GPD_MFP2_PD11MFP_Pos)              /*!< SYS_T::GPD_MFP2: PD11MFP Mask          */

#define SYS_GPD_MFP3_PD12MFP_Pos         (0)                                               /*!< SYS_T::GPD_MFP3: PD12MFP Position      */
#define SYS_GPD_MFP3_PD12MFP_Msk         (0x1ful << SYS_GPD_MFP3_PD12MFP_Pos)              /*!< SYS_T::GPD_MFP3: PD12MFP Mask          */

#define SYS_GPD_MFP3_PD13MFP_Pos         (8)                                               /*!< SYS_T::GPD_MFP3: PD13MFP Position      */
#define SYS_GPD_MFP3_PD13MFP_Msk         (0x1ful << SYS_GPD_MFP3_PD13MFP_Pos)              /*!< SYS_T::GPD_MFP3: PD13MFP Mask          */

#define SYS_GPD_MFP3_PD14MFP_Pos         (16)                                              /*!< SYS_T::GPD_MFP3: PD14MFP Position      */
#define SYS_GPD_MFP3_PD14MFP_Msk         (0x1ful << SYS_GPD_MFP3_PD14MFP_Pos)              /*!< SYS_T::GPD_MFP3: PD14MFP Mask          */

#define SYS_GPD_MFP3_PD15MFP_Pos         (24)                                              /*!< SYS_T::GPD_MFP3: PD15MFP Position      */
#define SYS_GPD_MFP3_PD15MFP_Msk         (0x1ful << SYS_GPD_MFP3_PD15MFP_Pos)              /*!< SYS_T::GPD_MFP3: PD15MFP Mask          */

#define SYS_GPE_MFP0_PE0MFP_Pos          (0)                                               /*!< SYS_T::GPE_MFP0: PE0MFP Position       */
#define SYS_GPE_MFP0_PE0MFP_Msk          (0x1ful << SYS_GPE_MFP0_PE0MFP_Pos)               /*!< SYS_T::GPE_MFP0: PE0MFP Mask           */

#define SYS_GPE_MFP0_PE1MFP_Pos          (8)                                               /*!< SYS_T::GPE_MFP0: PE1MFP Position       */
#define SYS_GPE_MFP0_PE1MFP_Msk          (0x1ful << SYS_GPE_MFP0_PE1MFP_Pos)               /*!< SYS_T::GPE_MFP0: PE1MFP Mask           */

#define SYS_GPE_MFP0_PE2MFP_Pos          (16)                                              /*!< SYS_T::GPE_MFP0: PE2MFP Position       */
#define SYS_GPE_MFP0_PE2MFP_Msk          (0x1ful << SYS_GPE_MFP0_PE2MFP_Pos)               /*!< SYS_T::GPE_MFP0: PE2MFP Mask           */

#define SYS_GPE_MFP0_PE3MFP_Pos          (24)                                              /*!< SYS_T::GPE_MFP0: PE3MFP Position       */
#define SYS_GPE_MFP0_PE3MFP_Msk          (0x1ful << SYS_GPE_MFP0_PE3MFP_Pos)               /*!< SYS_T::GPE_MFP0: PE3MFP Mask           */

#define SYS_GPE_MFP1_PE4MFP_Pos          (0)                                               /*!< SYS_T::GPE_MFP1: PE4MFP Position       */
#define SYS_GPE_MFP1_PE4MFP_Msk          (0x1ful << SYS_GPE_MFP1_PE4MFP_Pos)               /*!< SYS_T::GPE_MFP1: PE4MFP Mask           */

#define SYS_GPE_MFP1_PE5MFP_Pos          (8)                                               /*!< SYS_T::GPE_MFP1: PE5MFP Position       */
#define SYS_GPE_MFP1_PE5MFP_Msk          (0x1ful << SYS_GPE_MFP1_PE5MFP_Pos)               /*!< SYS_T::GPE_MFP1: PE5MFP Mask           */

#define SYS_GPE_MFP1_PE6MFP_Pos          (16)                                              /*!< SYS_T::GPE_MFP1: PE6MFP Position       */
#define SYS_GPE_MFP1_PE6MFP_Msk          (0x1ful << SYS_GPE_MFP1_PE6MFP_Pos)               /*!< SYS_T::GPE_MFP1: PE6MFP Mask           */

#define SYS_GPE_MFP1_PE7MFP_Pos          (24)                                              /*!< SYS_T::GPE_MFP1: PE7MFP Position       */
#define SYS_GPE_MFP1_PE7MFP_Msk          (0x1ful << SYS_GPE_MFP1_PE7MFP_Pos)               /*!< SYS_T::GPE_MFP1: PE7MFP Mask           */

#define SYS_GPE_MFP2_PE8MFP_Pos          (0)                                               /*!< SYS_T::GPE_MFP2: PE8MFP Position       */
#define SYS_GPE_MFP2_PE8MFP_Msk          (0x1ful << SYS_GPE_MFP2_PE8MFP_Pos)               /*!< SYS_T::GPE_MFP2: PE8MFP Mask           */

#define SYS_GPE_MFP2_PE9MFP_Pos          (8)                                               /*!< SYS_T::GPE_MFP2: PE9MFP Position       */
#define SYS_GPE_MFP2_PE9MFP_Msk          (0x1ful << SYS_GPE_MFP2_PE9MFP_Pos)               /*!< SYS_T::GPE_MFP2: PE9MFP Mask           */

#define SYS_GPE_MFP2_PE10MFP_Pos         (16)                                              /*!< SYS_T::GPE_MFP2: PE10MFP Position      */
#define SYS_GPE_MFP2_PE10MFP_Msk         (0x1ful << SYS_GPE_MFP2_PE10MFP_Pos)              /*!< SYS_T::GPE_MFP2: PE10MFP Mask          */

#define SYS_GPE_MFP2_PE11MFP_Pos         (24)                                              /*!< SYS_T::GPE_MFP2: PE11MFP Position      */
#define SYS_GPE_MFP2_PE11MFP_Msk         (0x1ful << SYS_GPE_MFP2_PE11MFP_Pos)              /*!< SYS_T::GPE_MFP2: PE11MFP Mask          */

#define SYS_GPE_MFP3_PE12MFP_Pos         (0)                                               /*!< SYS_T::GPE_MFP3: PE12MFP Position      */
#define SYS_GPE_MFP3_PE12MFP_Msk         (0x1ful << SYS_GPE_MFP3_PE12MFP_Pos)              /*!< SYS_T::GPE_MFP3: PE12MFP Mask          */

#define SYS_GPE_MFP3_PE13MFP_Pos         (8)                                               /*!< SYS_T::GPE_MFP3: PE13MFP Position      */
#define SYS_GPE_MFP3_PE13MFP_Msk         (0x1ful << SYS_GPE_MFP3_PE13MFP_Pos)              /*!< SYS_T::GPE_MFP3: PE13MFP Mask          */

#define SYS_GPE_MFP3_PE14MFP_Pos         (16)                                              /*!< SYS_T::GPE_MFP3: PE14MFP Position      */
#define SYS_GPE_MFP3_PE14MFP_Msk         (0x1ful << SYS_GPE_MFP3_PE14MFP_Pos)              /*!< SYS_T::GPE_MFP3: PE14MFP Mask          */

#define SYS_GPE_MFP3_PE15MFP_Pos         (24)                                              /*!< SYS_T::GPE_MFP3: PE15MFP Position      */
#define SYS_GPE_MFP3_PE15MFP_Msk         (0x1ful << SYS_GPE_MFP3_PE15MFP_Pos)              /*!< SYS_T::GPE_MFP3: PE15MFP Mask          */

#define SYS_GPF_MFP0_PF0MFP_Pos          (0)                                               /*!< SYS_T::GPF_MFP0: PF0MFP Position       */
#define SYS_GPF_MFP0_PF0MFP_Msk          (0x1ful << SYS_GPF_MFP0_PF0MFP_Pos)               /*!< SYS_T::GPF_MFP0: PF0MFP Mask           */

#define SYS_GPF_MFP0_PF1MFP_Pos          (8)                                               /*!< SYS_T::GPF_MFP0: PF1MFP Position       */
#define SYS_GPF_MFP0_PF1MFP_Msk          (0x1ful << SYS_GPF_MFP0_PF1MFP_Pos)               /*!< SYS_T::GPF_MFP0: PF1MFP Mask           */

#define SYS_GPF_MFP0_PF2MFP_Pos          (16)                                              /*!< SYS_T::GPF_MFP0: PF2MFP Position       */
#define SYS_GPF_MFP0_PF2MFP_Msk          (0x1ful << SYS_GPF_MFP0_PF2MFP_Pos)               /*!< SYS_T::GPF_MFP0: PF2MFP Mask           */

#define SYS_GPF_MFP0_PF3MFP_Pos          (24)                                              /*!< SYS_T::GPF_MFP0: PF3MFP Position       */
#define SYS_GPF_MFP0_PF3MFP_Msk          (0x1ful << SYS_GPF_MFP0_PF3MFP_Pos)               /*!< SYS_T::GPF_MFP0: PF3MFP Mask           */

#define SYS_GPF_MFP1_PF4MFP_Pos          (0)                                               /*!< SYS_T::GPF_MFP1: PF4MFP Position       */
#define SYS_GPF_MFP1_PF4MFP_Msk          (0x1ful << SYS_GPF_MFP1_PF4MFP_Pos)               /*!< SYS_T::GPF_MFP1: PF4MFP Mask           */

#define SYS_GPF_MFP1_PF5MFP_Pos          (8)                                               /*!< SYS_T::GPF_MFP1: PF5MFP Position       */
#define SYS_GPF_MFP1_PF5MFP_Msk          (0x1ful << SYS_GPF_MFP1_PF5MFP_Pos)               /*!< SYS_T::GPF_MFP1: PF5MFP Mask           */

#define SYS_GPF_MFP1_PF6MFP_Pos          (16)                                              /*!< SYS_T::GPF_MFP1: PF6MFP Position       */
#define SYS_GPF_MFP1_PF6MFP_Msk          (0x1ful << SYS_GPF_MFP1_PF6MFP_Pos)               /*!< SYS_T::GPF_MFP1: PF6MFP Mask           */

#define SYS_GPF_MFP1_PF7MFP_Pos          (24)                                              /*!< SYS_T::GPF_MFP1: PF7MFP Position       */
#define SYS_GPF_MFP1_PF7MFP_Msk          (0x1ful << SYS_GPF_MFP1_PF7MFP_Pos)               /*!< SYS_T::GPF_MFP1: PF7MFP Mask           */

#define SYS_GPF_MFP2_PF8MFP_Pos          (0)                                               /*!< SYS_T::GPF_MFP2: PF8MFP Position       */
#define SYS_GPF_MFP2_PF8MFP_Msk          (0x1ful << SYS_GPF_MFP2_PF8MFP_Pos)               /*!< SYS_T::GPF_MFP2: PF8MFP Mask           */

#define SYS_GPF_MFP2_PF9MFP_Pos          (8)                                               /*!< SYS_T::GPF_MFP2: PF9MFP Position       */
#define SYS_GPF_MFP2_PF9MFP_Msk          (0x1ful << SYS_GPF_MFP2_PF9MFP_Pos)               /*!< SYS_T::GPF_MFP2: PF9MFP Mask           */

#define SYS_GPF_MFP2_PF10MFP_Pos         (16)                                              /*!< SYS_T::GPF_MFP2: PF10MFP Position      */
#define SYS_GPF_MFP2_PF10MFP_Msk         (0x1ful << SYS_GPF_MFP2_PF10MFP_Pos)              /*!< SYS_T::GPF_MFP2: PF10MFP Mask          */

#define SYS_GPF_MFP2_PF11MFP_Pos         (24)                                              /*!< SYS_T::GPF_MFP2: PF11MFP Position      */
#define SYS_GPF_MFP2_PF11MFP_Msk         (0x1ful << SYS_GPF_MFP2_PF11MFP_Pos)              /*!< SYS_T::GPF_MFP2: PF11MFP Mask          */

#define SYS_GPG_MFP0_PG2MFP_Pos          (16)                                              /*!< SYS_T::GPG_MFP0: PG2MFP Position       */
#define SYS_GPG_MFP0_PG2MFP_Msk          (0x1ful << SYS_GPG_MFP0_PG2MFP_Pos)               /*!< SYS_T::GPG_MFP0: PG2MFP Mask           */

#define SYS_GPG_MFP0_PG3MFP_Pos          (24)                                              /*!< SYS_T::GPG_MFP0: PG3MFP Position       */
#define SYS_GPG_MFP0_PG3MFP_Msk          (0x1ful << SYS_GPG_MFP0_PG3MFP_Pos)               /*!< SYS_T::GPG_MFP0: PG3MFP Mask           */

#define SYS_GPG_MFP1_PG4MFP_Pos          (0)                                               /*!< SYS_T::GPG_MFP1: PG4MFP Position       */
#define SYS_GPG_MFP1_PG4MFP_Msk          (0x1ful << SYS_GPG_MFP1_PG4MFP_Pos)               /*!< SYS_T::GPG_MFP1: PG4MFP Mask           */

#define SYS_GPG_MFP2_PG9MFP_Pos          (8)                                               /*!< SYS_T::GPG_MFP2: PG9MFP Position       */
#define SYS_GPG_MFP2_PG9MFP_Msk          (0x1ful << SYS_GPG_MFP2_PG9MFP_Pos)               /*!< SYS_T::GPG_MFP2: PG9MFP Mask           */

#define SYS_GPG_MFP2_PG10MFP_Pos         (16)                                              /*!< SYS_T::GPG_MFP2: PG10MFP Position      */
#define SYS_GPG_MFP2_PG10MFP_Msk         (0x1ful << SYS_GPG_MFP2_PG10MFP_Pos)              /*!< SYS_T::GPG_MFP2: PG10MFP Mask          */

#define SYS_GPG_MFP2_PG11MFP_Pos         (24)                                              /*!< SYS_T::GPG_MFP2: PG11MFP Position      */
#define SYS_GPG_MFP2_PG11MFP_Msk         (0x1ful << SYS_GPG_MFP2_PG11MFP_Pos)              /*!< SYS_T::GPG_MFP2: PG11MFP Mask          */

#define SYS_GPG_MFP3_PG12MFP_Pos         (0)                                               /*!< SYS_T::GPG_MFP3: PG12MFP Position      */
#define SYS_GPG_MFP3_PG12MFP_Msk         (0x1ful << SYS_GPG_MFP3_PG12MFP_Pos)              /*!< SYS_T::GPG_MFP3: PG12MFP Mask          */

#define SYS_GPG_MFP3_PG13MFP_Pos         (8)                                               /*!< SYS_T::GPG_MFP3: PG13MFP Position      */
#define SYS_GPG_MFP3_PG13MFP_Msk         (0x1ful << SYS_GPG_MFP3_PG13MFP_Pos)              /*!< SYS_T::GPG_MFP3: PG13MFP Mask          */

#define SYS_GPG_MFP3_PG14MFP_Pos         (16)                                              /*!< SYS_T::GPG_MFP3: PG14MFP Position      */
#define SYS_GPG_MFP3_PG14MFP_Msk         (0x1ful << SYS_GPG_MFP3_PG14MFP_Pos)              /*!< SYS_T::GPG_MFP3: PG14MFP Mask          */

#define SYS_GPG_MFP3_PG15MFP_Pos         (24)                                              /*!< SYS_T::GPG_MFP3: PG15MFP Position      */
#define SYS_GPG_MFP3_PG15MFP_Msk         (0x1ful << SYS_GPG_MFP3_PG15MFP_Pos)              /*!< SYS_T::GPG_MFP3: PG15MFP Mask          */

#define SYS_GPH_MFP1_PH4MFP_Pos          (0)                                               /*!< SYS_T::GPH_MFP1: PH4MFP Position       */
#define SYS_GPH_MFP1_PH4MFP_Msk          (0x1ful << SYS_GPH_MFP1_PH4MFP_Pos)               /*!< SYS_T::GPH_MFP1: PH4MFP Mask           */

#define SYS_GPH_MFP1_PH5MFP_Pos          (8)                                               /*!< SYS_T::GPH_MFP1: PH5MFP Position       */
#define SYS_GPH_MFP1_PH5MFP_Msk          (0x1ful << SYS_GPH_MFP1_PH5MFP_Pos)               /*!< SYS_T::GPH_MFP1: PH5MFP Mask           */

#define SYS_GPH_MFP1_PH6MFP_Pos          (16)                                              /*!< SYS_T::GPH_MFP1: PH6MFP Position       */
#define SYS_GPH_MFP1_PH6MFP_Msk          (0x1ful << SYS_GPH_MFP1_PH6MFP_Pos)               /*!< SYS_T::GPH_MFP1: PH6MFP Mask           */

#define SYS_GPH_MFP1_PH7MFP_Pos          (24)                                              /*!< SYS_T::GPH_MFP1: PH7MFP Position       */
#define SYS_GPH_MFP1_PH7MFP_Msk          (0x1ful << SYS_GPH_MFP1_PH7MFP_Pos)               /*!< SYS_T::GPH_MFP1: PH7MFP Mask           */

#define SYS_GPH_MFP2_PH8MFP_Pos          (0)                                               /*!< SYS_T::GPH_MFP2: PH8MFP Position       */
#define SYS_GPH_MFP2_PH8MFP_Msk          (0x1ful << SYS_GPH_MFP2_PH8MFP_Pos)               /*!< SYS_T::GPH_MFP2: PH8MFP Mask           */

#define SYS_GPH_MFP2_PH9MFP_Pos          (8)                                               /*!< SYS_T::GPH_MFP2: PH9MFP Position       */
#define SYS_GPH_MFP2_PH9MFP_Msk          (0x1ful << SYS_GPH_MFP2_PH9MFP_Pos)               /*!< SYS_T::GPH_MFP2: PH9MFP Mask           */

#define SYS_GPH_MFP2_PH10MFP_Pos         (16)                                              /*!< SYS_T::GPH_MFP2: PH10MFP Position      */
#define SYS_GPH_MFP2_PH10MFP_Msk         (0x1ful << SYS_GPH_MFP2_PH10MFP_Pos)              /*!< SYS_T::GPH_MFP2: PH10MFP Mask          */

#define SYS_GPH_MFP2_PH11MFP_Pos         (24)                                              /*!< SYS_T::GPH_MFP2: PH11MFP Position      */
#define SYS_GPH_MFP2_PH11MFP_Msk         (0x1ful << SYS_GPH_MFP2_PH11MFP_Pos)              /*!< SYS_T::GPH_MFP2: PH11MFP Mask          */

/**@}*/ /* SYS_CONST */
/**@}*/ /* end of SYS register group */
/**@}*/ /* end of REGISTER group */

#if defined ( __CC_ARM   )
    #pragma no_anon_unions
#endif

#endif /* __SYS_REG_H__ */
