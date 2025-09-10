/**************************************************************************//**
 * @file     ellsi_reg.h
 * @version  V3.00
 * @brief    ELLSI register definition header file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (c) 2024 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __ELLSI_REG_H__
#define __ELLSI_REG_H__

#if defined ( __CC_ARM   )
    #pragma anon_unions
#endif

/**
   @addtogroup REGISTER Control Register
   @{
*/

/**
    @addtogroup ELLSI Enhanced LED Light Strip Interface(ELLSI)
    Memory Mapped Structure for ELLSI Controller
@{ */

typedef struct
{

    /**
     * @var ELLSI_FB_T::FBPCNT
     * Offset: 0x00  ELLSI Feedback Pixel Count Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[9:0]   |FBPCNT    |Feedback Pixel Count
     * |        |          |Read this register to get feedback pixel count value.
     * |[16]    |FBPOV     |Feedback Pixel Count Overflow Flag
     * |        |          |It will be set 1 when feedback pixel count over 1024.
     * |        |          |Write one to clear this register.
     * |        |          |Note: FBSTSIEN (ELLSI_CTL[29]) need to be set.
     * |[24]    |FBPCUR    |Feedback Pixel Current
     * |        |          |The current feedback from the LED.
     * @var ELLSI_FB_T::FBSID
     * Offset: 0x04  ELLSI Feedback Strip ID Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |FBSID     |Feedback Strip ID
     * |        |          |32-bit Feedback Strip ID.
     */

    __IO uint32_t FBPCNT;                /*!< [0x0000] ELLSI Feedback Pixel Count Register                              */
    __IO uint32_t FBSID;                 /*!< [0x0004] ELLSI Feedback Strip ID Register                                 */

} ELLSI_FB_T;

typedef struct
{


    /**
     * @var ELLSI_T::CTL
     * Offset: 0x00  ELLSI Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ELLSIEN   |ELLSI Enable Bit
     * |        |          |0 = ELLSI Disabled.
     * |        |          |1 = ELLSI Enabled.
     * |[1]     |RSTCEN    |Reset Command Function Enable Bit
     * |        |          |0 = Reset command function Disabled.
     * |        |          |1 = Reset command function Enabled.
     * |        |          |Note: If this bit is enabled, when FIFO and shift register are both empty, ELLSI will send reset command out.
     * |[2]     |UNDFLINTEN|Underflow Interrupt Enable Bit
     * |        |          |0 = Underflow interrupt Disabled.
     * |        |          |1 = Underflow interrupt Enabled.
     * |        |          |Note: If this bit is enabled, when the UNDFLIF interrupt flag is set to 1, the ELLSI interrupt signal is generated and inform to CPU.
     * |[3]     |FENDINTEN |Frame End Interrupt Enable Bit
     * |        |          |0 = Frame end interrupt Disabled.
     * |        |          |1 = Frame end interrupt Enabled.
     * |        |          |Note: If this bit is enabled, when the FENDIF interrupt flag is set to 1, the ELLSI interrupt signal is generated and inform to CPU.
     * |[4]     |RSTCINTEN |Reset Command Interrupt Enable Bit
     * |        |          |0 = Reset command interrupt Disabled.
     * |        |          |1 = Reset command interrupt Enabled.
     * |        |          |Note: If this bit is enabled, when the RSTCIF interrupt flag is set to 1, the ELLSI interrupt signal is generated and inform to CPU.
     * |[5]     |EMPINTEN  |FIFO Empty Interrupt Enable Bit
     * |        |          |0 = FIFO empty interrupt Disabled.
     * |        |          |1 = FIFO empty interrupt Enabled.
     * |        |          |Note: If this bit is enabled, when the EMPIF interrupt flag is set to 1, the ELLSI interrupt signal is generated and inform to CPU.
     * |[6]     |FULINTEN  |FIFO Full Interrupt Enable Bit
     * |        |          |0 = FIFO full interrupt Disabled.
     * |        |          |1 = FIFO full interrupt Enabled.
     * |        |          |Note: If this bit is enabled, when the FULIF interrupt flag is set to 1, the ELLSI interrupt signal is generated and inform to CPU.
     * |[7]     |TXTHIEN   |Transmit FIFO Threshold Interrupt Enable Bit
     * |        |          |0 = TX FIFO threshold interrupt Disabled.
     * |        |          |1 = TX FIFO threshold interrupt Enabled.
     * |        |          |Note: This bit is only supported in software mode.
     * |[8]     |ELLSIMODE |ELLSI Mode Select
     * |        |          |0 = Software mode.
     * |        |          |1 = PDMA mode.
     * |[12]    |OFDEF     |Output Format Define
     * |        |          |0 = Output RGB format.
     * |        |          |1 = Output GRB format.
     * |[17:16] |TXTH      |Transmit FIFO Threshold
     * |        |          |If the valid data count of the transmit FIFO buffer is less than or equal to the TXTH setting, the TXTHIF bit will be set to 1, else the TXTHIF bit will be cleared to 0.
     * |[25:24] |CMDMODE   |Command Mode
     * |        |          |00 = LLSI Mode.
     * |        |          |01 = Normal Command mode. It includes CLR_ID, SET_ID, CHK_ID, SPE_ID, TH20 SET Mode and Feedback mode.
     * |        |          |10 = AUTO SET Mode.
     * |        |          |11 = AUTO TH20 SET Mode.
     * |[27]    |NCMDDIEN  |Normal Command Done Interrupt Enable Bit
     * |        |          |0 = Command done interrupt Disabled.
     * |        |          |1 = Command done interrupt Enabled.
     * |[28]    |RSPIEN    |Normal Command Response Error Interrupt Enable Bit
     * |        |          |0 = Normal Command Response (SET_ID, CHK_ID) Error Interrupt Disabled.
     * |        |          |1 = Normal Command Response Error Interrupt Enabled.
     * |        |          |Note: Normal Command Responses are SET_ID, CHK_ID, and the error flags are ELLSI_CMDSTS[15:8]
     * |[29]    |FBSTSIEN  |Feedback Status Interrupt Enable Bit
     * |        |          |0 = Feedback Status Interrupt Disabled.
     * |        |          |1 = Feedback Status Interrupt Enabled.
     * |[30]    |ASETIEN   |AUTO SET Mode Interrupt Enable Bit
     * |        |          |0 = AUTO SET Mode Interrupt Disabled.
     * |        |          |1 = AUTO SET Mode Interrupt Enabled.
     * |[31]    |ATHIEN    |AUTO TH20 SET Mode Interrupt Enable Bit
     * |        |          |0 = AUTO TH20 SET Mode Interrupt Disabled.
     * |        |          |1 = AUTO TH20 SET Mode Interrupt Enabled.
     * @var ELLSI_T::RSTPERIOD
     * Offset: 0x04  ELLSI Reset Period Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |RSTPERIOD |Reset Command Period
     * |        |          |This field is used to adjust the time of reset command.
     * |        |          |Reset command time = ELLSI_CLK * (DIVIDER+1) * RSTPERIOD.
     * @var ELLSI_T::PERIOD
     * Offset: 0x08  ELLSI Period Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |PERIOD    |ELLSI Period Register
     * |        |          |This field is used to define data transfer time (TH+TL).
     * |        |          |Data transfer time = ELLSI_CLK * (DIVIDER+1) * PERIOD.
     * @var ELLSI_T::DUTY
     * Offset: 0x0C  ELLSI Duty Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |T0H       |T0H Data Register
     * |        |          |This field is used to define the time of T0H.
     * |        |          |The time of T0H = ELLSI_CLK * (DIVIDER+1) * T0H.
     * |        |          |Note: T0 (0 code) duty cycle = (T0H) / (PERIOD).
     * |[23:16] |T1H       |T1H Data Register
     * |        |          |This field is used to define the time of T1H.
     * |        |          |The time of T1H = ELLSI_CLK * (DIVIDER+1) * T1H.
     * |        |          |Note: T1 (1 code) duty cycle = (T1H) / (PERIOD).
     * @var ELLSI_T::DATA
     * Offset: 0x10  ELLSI Data Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |DATA      |Data Transmit Register
     * |        |          |The data transmit registers pass through the transmitted data into the 4-level transmit FIFO buffers.
     * @var ELLSI_T::PCNT
     * Offset: 0x14  ELLSI Pixel Count Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[11:0]  |PCNT      |Pixel Count Register
     * |        |          |User should write a frame size to this register before transfer.
     * |        |          |For example, if there are a total of 5 LED (5 pixels) in frame, user should write 5 to this control register.
     * @var ELLSI_T::CLKDIV
     * Offset: 0x18  ELLSI Clock Divider Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |DIVIDER   |ELLSI Clock Divider
     * |        |          |It indicates the ELLSI clock, F_ELLSI = F_APBCLK / (DIVIDER+1).
     * |[23:16] |CMDDIV    |ELLSI Command Clock Divider
     * |        |          |It indicates the ELLSI command clock, F_ELLSI_CMD = F_APBCLK / (DIVIDER+1) / (CMDDIV+1).
     * @var ELLSI_T::STATUS
     * Offset: 0x1C  ELLSI Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |RSTCIF    |Reset Command Interrupt Flag
     * |        |          |This bit indicates that ELLSI has finished reset command transmission.
     * |[1]     |EMPIF     |FIFO Empty Interrupt Flag
     * |        |          |0 = Transmit FIFO buffer is not empty.
     * |        |          |1 = Transmit FIFO buffer is empty.
     * |[2]     |FULIF     |FIFO Full Interrupt Flag
     * |        |          |0 = Transmit FIFO buffer is not full.
     * |        |          |1 = Transmit FIFO buffer is full.
     * |[3]     |TXTHIF    |Transmit FIFO Threshold Interrupt Flag
     * |        |          |0 = The valid data count within the transmit FIFO buffer is larger than the setting value of TXTH.
     * |        |          |1 = The valid data count within the transmit FIFO buffer is less than or equal to the setting value of TXTH.
     * |[4]     |UNDFLIF   |Under Flow Interrupt Flag
     * |        |          |Each transmission ELLSI reads 3 bytes data from the FIFO
     * |        |          |This bit is set to 1 when ELLSI reads the FIFO and the valid data in FIFO is less than 3 bytes.
     * |        |          |Software can write 1 to clear this bit.
     * |[5]     |FENDIF    |Frame End Interrupt Flag
     * |        |          |This bit indicates that ELLSI has finished data transmission (FIFO empty & shift register empty)
     * |        |          |When ELLSI transfer finish (FIFO empty & shift register empty) this bit is set to 1.
     * |        |          |User can use this flag to prepare data in advance.
     * |        |          |Software can write 1 to clear this bit.
     * |[8]     |LDT       |Last Data Transmit
     * |        |          |Software should set LDT = 1 before write last data to ELLSI_DATA
     * |        |          |This bit will auto clear by hardware after ELLSI has finished data transmission.
     * @var ELLSI_T::OCTL
     * Offset: 0x20  ELLSI Output Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |IDOS      |Idle Output Control
     * |        |          |0 = Idle will output 0.
     * |        |          |1 = Idle will output 1.
     * @var ELLSI_T::CMDCTL
     * Offset: 0x24  ELLSI Command Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |CMDTOP    |Command Timeout Period Register
     * |        |          |Time period of the command timeout.
     * |[23:16] |GETHIP    |Get HI Pulse Period Register
     * |        |          |Time period threshold to check HI Pulse.
     * |[27:24] |GETHITOL  |Get HI Pulse Tolerance Register
     * |        |          |It can set tolerance Get HI Pulse Period.
     * @var ELLSI_T::CMDGPP
     * Offset: 0x28  ELLSI Command Get Pulse Period Regiser
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * @var ELLSI_T::CMD
     * Offset: 0x2C  ELLSI Command Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |ID        |4-bit Command ID
     * |        |          |4-bit ID.
     * |[7:4]   |CMD       |4-bit Command
     * |        |          |4-bit command.
     * |[8]     |CMDGO     |Command Go Bit
     * |        |          |When this bit is set, it starts the command.
     * |        |          |This bit will be cleard automatically by hardware.
     * |[15:12] |SPECMD    |Special Command
     * |        |          |0000 = Normal command or no command.
     * |        |          |0001 = Feedback count command.
     * |        |          |0010 = Feedback ID command
     * |        |          |0011 = TH20 SET command.
     * |        |          |0100 = Send Data.
     * |        |          |0101~1000 = Reserved.
     * |[16]    |PDCMD     |Power-down Command
     * |        |          |When sending data, user can use this bit to send 0x5a after data.
     * |        |          |This bit will be cleard automatically by hardware.
     * |[17]    |WKCMD     |Wakeup Command
     * |        |          |When sending data, user can use this bit to send wakeup pulse after data.
     * |        |          |This bit will be cleard automatically by hardware after receiving low pulse.
     * @var ELLSI_T::CMDSTS
     * Offset: 0x30  ELLSI Command Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CMDDONE   |Normal Command Done
     * |        |          |It will be set 1 when Command (SET_ID, CLR_ID, CHK_ID) done in Normal Command Mode.
     * |        |          |Software can write 1 to clear this bit.
     * |        |          |Note: NCMDDIEN (ELLSI_CTL[27]) need to be set.
     * |[1]     |FBDONE    |Feedback Command Done
     * |        |          |It will be set 1 when Feedback Command done in Normal Command Mode.
     * |        |          |Software can write 1 to clear this bit.
     * |        |          |Note: FBSTSIEN (ELLSI_CTL[29]) need to be set.
     * |[2]     |TH20DONE  |TH20 Command Done Flag
     * |        |          |It will be set 1 when TH20 SET Command done in Normal Command Mode.
     * |        |          |Software can write 1 to clear this bit.
     * |        |          |Note: NCMDDIEN (ELLSI_CTL[27]) need to be set.
     * |[8]     |SETIDLONG |Set ID Get Pulse Long Flag
     * |        |          |It will be set 1 when the pulse longer than tolerance at Set ID Command Get pulse phase.
     * |        |          |Software can write 1 to clear this bit.
     * |        |          |Note: RSPIEN (ELLSI_CTL[28]) need to be set.
     * |[9]     |CHKIDLONG |Check ID Get Pulse Long Flag
     * |        |          |It will be set 1 when the pulse longer than tolerance at Check ID Command Get pulse phase.
     * |        |          |Software can write 1 to clear this bit.
     * |        |          |Note: RSPIEN (ELLSI_CTL[28]) need to be set.
     * |[10]    |SETIDSHORT|Set ID Get Pulse Short Flag
     * |        |          |It will be set 1 when the pulse shorter than tolerance at Set ID Command Get pulse phase.
     * |        |          |Software can write 1 to clear this bit.
     * |        |          |Note: RSPIEN (ELLSI_CTL[28]) need to be set.
     * |[11]    |CHKIDSHORT|Check ID Get Pulse Short Flag
     * |        |          |It will be set 1 when the pulse shorter than tolerance at Check ID Command Get pulse phase.
     * |        |          |Software can write 1 to clear this bit.
     * |        |          |Note: RSPIEN (ELLSI_CTL[28]) need to be set.
     * |[12]    |SETGETOV  |SET ID Get Pulse Overflow Flag
     * |        |          |It will be set 1 when ELLSI receive more than one pulse at the Set ID Command Get pulse phase.
     * |        |          |Software can write 1 to clear this bit.
     * |        |          |Note: RSPIEN (ELLSI_CTL[28]) need to be set.
     * |[13]    |CHKGETOV  |Check ID Get Pulse Overflow Flag
     * |        |          |It will be set 1 when ELLSI receive more than one pulse at the Check ID Command Get pulse phase.
     * |        |          |Software can write 1 to clear this bit
     * |        |          |Note: RSPIEN (ELLSI_CTL[28]) need to be set.
     * |[14]    |SETGETUN  |SET ID Get Pulse Underflow Flag
     * |        |          |It will be set 1 when ELLSI receive less than one pulse at the Set ID Command Get pulse phase.
     * |        |          |Software can write 1 to clear this bit.
     * |        |          |Note: RSPIEN (ELLSI_CTL[28]) need to be set.
     * |[15]    |CHKGETUN  |Check ID Get Pulse Underflow Flag
     * |        |          |It will be set 1 when ELLSI receive less than one pulse at the Check ID Command Get pulse phase.
     * |        |          |Software can write 1 to clear this bit
     * |        |          |Note: RSPIEN (ELLSI_CTL[28]) need to be set.
     * |[16]    |FBC0LONG  |Feedback Count 0 Pulse Long Flag
     * |        |          |It will be set 1 when the feedback count 0 pulse longer than tolerance.
     * |        |          |Software can write 1 to clear this bit.
     * |        |          |Note: FBSTSIEN (ELLSI_CTL[29]) need to be set.
     * |[17]    |FBC0SHORT |Feedback Count 0 Pulse Short Flag
     * |        |          |It will be set 1 when the feedback count 0 pulse shorter than tolerance.
     * |        |          |Software can write 1 to clear this bit.
     * |        |          |Note: FBSTSIEN (ELLSI_CTL[29]) need to be set.
     * |[18]    |FBC1LONG  |Feedback Count 1 Pulse Long Flag
     * |        |          |It will be set 1 when the feedback count 1 pulse longer than tolerance.
     * |        |          |Software can write 1 to clear this bit.
     * |        |          |Note: FBSTSIEN (ELLSI_CTL[29]) need to be set.
     * |[19]    |FBC1SHORT |Feedback Count 1 Pulse Short Flag
     * |        |          |It will be set 1 when the feedback count 1 pulse shorter than tolerance.
     * |        |          |Software can write 1 to clear this bit.
     * |        |          |Note: FBSTSIEN (ELLSI_CTL[29]) need to be set.
     * |[20]    |FBID0LONG |Feedback ID 0 Pulse Long Flag
     * |        |          |It will be set 1 when the feedback ID 0 pulse longer than tolerance.
     * |        |          |Software can write 1 to clear this bit.
     * |        |          |Note: FBSTSIEN (ELLSI_CTL[29]) need to be set.
     * |[21]    |FBID0SHORT|Feedback ID 0 Pulse Short Flag
     * |        |          |It will be set 1 when the feedback ID 0 pulse shorter than tolerance.
     * |        |          |Software can write 1 to clear this bit.
     * |        |          |Note: FBSTSIEN (ELLSI_CTL[29]) need to be set.
     * |[22]    |FBID1LONG |Feedback ID 1 Pulse Long Flag
     * |        |          |It will be set 1 when the feedback ID 1 pulse longer than tolerance.
     * |        |          |Software can write 1 to clear this bit.
     * |        |          |Note: FBSTSIEN (ELLSI_CTL[29]) need to be set.
     * |[23]    |FBID1SHORT|Feedback ID 1 Pulse Short Flag
     * |        |          |It will be set 1 when the feedback ID 1 pulse shorter than tolerance.
     * |        |          |Software can write 1 to clear this bit.
     * |        |          |Note: FBSTSIEN (ELLSI_CTL[29]) need to be set.
     * |[24]    |ASETIDOV  |AUTO SET Mode Feedback ID Overflow Flag
     * |        |          |It will be set 1 when setting ID 4bu20191111, and get two pulses back.
     * |        |          |Software can write 1 to clear this bit.
     * |        |          |Note: ASETIEN (ELLSI_CTL[30]) need to be set.
     * |[25]    |ASETDONE  |AUTO SET Mode Done Flag
     * |        |          |It will be set 1 when AUTO SET Mode is done.
     * |        |          |Software can write 1 to clear this bit.
     * |        |          |Note: ASETIEN (ELLSI_CTL[30]) need to be set.
     * |[26]    |ATHDONE   |AUTO TH20 SET Mode Done Flag
     * |        |          |It will be set 1 when AUTO TH20 SET Mode is done.
     * |        |          |Software can write 1 to clear this bit.
     * |        |          |Note: ATHIEN (ELLSI_CTL[31]) need to be set.
     * |[31:28] |IDCNT     |ID Count Register
     * |        |          |Number of Feedback Pulse. It can also be set when the register is written.
     * |        |          |Note: IDCNT will be updated only when AUTO SET Mode is done.
     * @var ELLSI_T::FBCCTL
     * Offset: 0x34  ELLSI Feedback Command Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |FBLOP1    |Feedback Command Low Period 1
     * |        |          |Feedback Command High Period 1. 
     * |[15:8]  |FBHIP1    |Feedback Command HI Period 1
     * |        |          |Feedback Command High Period 1. 
     * |[23:16] |FBLOP0    |Feedback Command Low Period 0
     * |        |          |Feedback Command Low Period 0. 
     * |[31:24] |FBHIP0    |Feedback Command HI Period 0
     * |        |          |Feedback Command High Period 0. 
     * @var ELLSI_T::FBCTCTL
     * Offset: 0x38  ELLSI Feedback Count Timing Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |FBCNT0    |Feedback Count 0 Period Register
     * |        |          |Time period threshold to check Feedback Count 0.
     * |[11:8]  |FBC0TOL   |Feedback Count 0 Tolerance Register
     * |        |          |It can set tolerance Feedback Count 0 Pulse Period.
     * |[23:16] |FBCNT1    |Feedback Count 1 Period Register
     * |        |          |Time period threshold to check Feedback Count 1.
     * |[27:24] |FBC1TOL   |Feedback Count 1 Tolerance Register
     * |        |          |It can set tolerance Feedback Count 1 Pulse Period.
     * @var ELLSI_T::FBIDTCTL
     * Offset: 0x3C  ELLSI Feedback ID Timing Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |FBID0     |Feedback Strip ID 0 Period Register
     * |        |          |Time period threshold to check Feedback Strip ID data 0.
     * |[11:8]  |FBID0TOL  |Feedback Strip ID 0 Tolerance Register
     * |        |          |It can set tolerance Feedback Strip ID data 0 Pulse Period.
     * |[23:16] |FBID1     |Feedback Strip ID 1 Period Register
     * |        |          |Time period threshold to check Feedback Strip ID data 1.
     * |[27:24] |FBID1TOL  |Feedback Strip ID 1 Tolerance Register
     * |        |          |It can set tolerance Feedback Strip ID data 1 Pulse Period.
     * @var ELLSI_T::TCCTL
     * Offset: 0xB8  ELLSI TH20 Command Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[23:0]  |TH20CMD   |24-bit TH20 Command Data
     * |        |          |24-bit TH20 command data.
     * |[24]    |TH20FCMD  |Force TH20 Command
     * |        |          |Set this bit to use TH20CMD register as TH20 24-bit command.
     * @var ELLSI_T::TCTCTL
     * Offset: 0xBC  ELLSI TH20 Command Timing Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |TH20HI    |TH20 Command HI Period
     * |        |          |TH20 Command High Period. 
     * @var ELLSI_T::WKTCTL
     * Offset: 0xC0  ELLSI Wakeup Command Timing Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |WKPULSE   |Wakeup Pulse Period
     * |        |          |Wakeup Pulse Period. 
     * |[31:16] |WKWPER    |Wakeup Wait Period
     * |        |          |A period of time include wakeup pulse and low period after sending data. 
     */
    __IO uint32_t CTL;                   /*!< [0x0000] ELLSI Control Register                                           */
    __IO uint32_t RSTPERIOD;             /*!< [0x0004] ELLSI Reset Period Control Register                              */
    __IO uint32_t PERIOD;                /*!< [0x0008] ELLSI Period Control Register                                    */
    __IO uint32_t DUTY;                  /*!< [0x000c] ELLSI Duty Control Register                                      */
    __O  uint32_t DATA;                  /*!< [0x0010] ELLSI Data Register                                              */
    __IO uint32_t PCNT;                  /*!< [0x0014] ELLSI Pixel Count Register                                       */
    __IO uint32_t CLKDIV;                /*!< [0x0018] ELLSI Clock Divider Register                                     */
    __IO uint32_t STATUS;                /*!< [0x001c] ELLSI Status Register                                            */
    __IO uint32_t OCTL;                  /*!< [0x0020] ELLSI Output Control Register                                    */
    __IO uint32_t CMDCTL;                /*!< [0x0024] ELLSI Command Control Register                                   */
    __IO uint32_t CMDGPP;                /*!< [0x0028] ELLSI Command Get Pulse Period Regiser                           */
    __IO uint32_t CMD;                   /*!< [0x002c] ELLSI Command Register                                           */
    __IO uint32_t CMDSTS;                /*!< [0x0030] ELLSI Command Status Register                                    */
    __IO uint32_t FBCCTL;                /*!< [0x0034] ELLSI Feedback Command Control Register                          */
    __IO uint32_t FBCTCTL;               /*!< [0x0038] ELLSI Feedback Count Timing Control Register                     */
    __IO uint32_t FBIDTCTL;              /*!< [0x003c] ELLSI Feedback ID Timing Control Register                        */
    
    ELLSI_FB_T FB[15];

    __IO uint32_t TCCTL;                 /*!< [0x00b8] ELLSI TH20 Command Control Register                              */
    __IO uint32_t TCTCTL;                /*!< [0x00bc] ELLSI TH20 Command Timing Control Register                       */
    __IO uint32_t WKTCTL;                /*!< [0x00c0] ELLSI Wakeup Command Timing Control Register                     */

} ELLSI_T;

/**
    @addtogroup ELLSI_CONST ELLSI Bit Field Definition
    Constant Definitions for ELLSI Controller
@{ */

#define ELLSI_CTL_ELLSIEN_Pos            (0)                                               /*!< ELLSI_T::CTL: ELLSIEN Position         */
#define ELLSI_CTL_ELLSIEN_Msk            (0x1ul << ELLSI_CTL_ELLSIEN_Pos)                  /*!< ELLSI_T::CTL: ELLSIEN Mask             */

#define ELLSI_CTL_RSTCEN_Pos             (1)                                               /*!< ELLSI_T::CTL: RSTCEN Position          */
#define ELLSI_CTL_RSTCEN_Msk             (0x1ul << ELLSI_CTL_RSTCEN_Pos)                   /*!< ELLSI_T::CTL: RSTCEN Mask              */

#define ELLSI_CTL_UNDFLINTEN_Pos         (2)                                               /*!< ELLSI_T::CTL: UNDFLINTEN Position      */
#define ELLSI_CTL_UNDFLINTEN_Msk         (0x1ul << ELLSI_CTL_UNDFLINTEN_Pos)               /*!< ELLSI_T::CTL: UNDFLINTEN Mask          */

#define ELLSI_CTL_FENDINTEN_Pos          (3)                                               /*!< ELLSI_T::CTL: FENDINTEN Position       */
#define ELLSI_CTL_FENDINTEN_Msk          (0x1ul << ELLSI_CTL_FENDINTEN_Pos)                /*!< ELLSI_T::CTL: FENDINTEN Mask           */

#define ELLSI_CTL_RSTCINTEN_Pos          (4)                                               /*!< ELLSI_T::CTL: RSTCINTEN Position       */
#define ELLSI_CTL_RSTCINTEN_Msk          (0x1ul << ELLSI_CTL_RSTCINTEN_Pos)                /*!< ELLSI_T::CTL: RSTCINTEN Mask           */

#define ELLSI_CTL_EMPINTEN_Pos           (5)                                               /*!< ELLSI_T::CTL: EMPINTEN Position        */
#define ELLSI_CTL_EMPINTEN_Msk           (0x1ul << ELLSI_CTL_EMPINTEN_Pos)                 /*!< ELLSI_T::CTL: EMPINTEN Mask            */

#define ELLSI_CTL_FULINTEN_Pos           (6)                                               /*!< ELLSI_T::CTL: FULINTEN Position        */
#define ELLSI_CTL_FULINTEN_Msk           (0x1ul << ELLSI_CTL_FULINTEN_Pos)                 /*!< ELLSI_T::CTL: FULINTEN Mask            */

#define ELLSI_CTL_TXTHIEN_Pos            (7)                                               /*!< ELLSI_T::CTL: TXTHIEN Position         */
#define ELLSI_CTL_TXTHIEN_Msk            (0x1ul << ELLSI_CTL_TXTHIEN_Pos)                  /*!< ELLSI_T::CTL: TXTHIEN Mask             */

#define ELLSI_CTL_ELLSIMODE_Pos          (8)                                               /*!< ELLSI_T::CTL: ELLSIMODE Position       */
#define ELLSI_CTL_ELLSIMODE_Msk          (0x1ul << ELLSI_CTL_ELLSIMODE_Pos)                /*!< ELLSI_T::CTL: ELLSIMODE Mask           */

#define ELLSI_CTL_OFDEF_Pos              (12)                                              /*!< ELLSI_T::CTL: OFDEF Position           */
#define ELLSI_CTL_OFDEF_Msk              (0x1ul << ELLSI_CTL_OFDEF_Pos)                    /*!< ELLSI_T::CTL: OFDEF Mask               */

#define ELLSI_CTL_TXTH_Pos               (16)                                              /*!< ELLSI_T::CTL: TXTH Position            */
#define ELLSI_CTL_TXTH_Msk               (0x3ul << ELLSI_CTL_TXTH_Pos)                     /*!< ELLSI_T::CTL: TXTH Mask                */

#define ELLSI_CTL_CMDMODE_Pos            (24)                                              /*!< ELLSI_T::CTL: CMDMODE Position         */
#define ELLSI_CTL_CMDMODE_Msk            (0x3ul << ELLSI_CTL_CMDMODE_Pos)                  /*!< ELLSI_T::CTL: CMDMODE Mask             */

#define ELLSI_CTL_NCMDDIEN_Pos           (27)                                              /*!< ELLSI_T::CTL: NCMDDIEN Position        */
#define ELLSI_CTL_NCMDDIEN_Msk           (0x1ul << ELLSI_CTL_NCMDDIEN_Pos)                 /*!< ELLSI_T::CTL: NCMDDIEN Mask            */

#define ELLSI_CTL_RSPIEN_Pos             (28)                                              /*!< ELLSI_T::CTL: RSPIEN Position          */
#define ELLSI_CTL_RSPIEN_Msk             (0x1ul << ELLSI_CTL_RSPIEN_Pos)                   /*!< ELLSI_T::CTL: RSPIEN Mask              */

#define ELLSI_CTL_FBSTSIEN_Pos           (29)                                              /*!< ELLSI_T::CTL: FBSTSIEN Position        */
#define ELLSI_CTL_FBSTSIEN_Msk           (0x1ul << ELLSI_CTL_FBSTSIEN_Pos)                 /*!< ELLSI_T::CTL: FBSTSIEN Mask            */

#define ELLSI_CTL_ASETIEN_Pos            (30)                                              /*!< ELLSI_T::CTL: ASETIEN Position         */
#define ELLSI_CTL_ASETIEN_Msk            (0x1ul << ELLSI_CTL_ASETIEN_Pos)                  /*!< ELLSI_T::CTL: ASETIEN Mask             */

#define ELLSI_CTL_ATHIEN_Pos             (31)                                              /*!< ELLSI_T::CTL: ATHIEN Position          */
#define ELLSI_CTL_ATHIEN_Msk             (0x1ul << ELLSI_CTL_ATHIEN_Pos)                   /*!< ELLSI_T::CTL: ATHIEN Mask              */

#define ELLSI_RSTPERIOD_RSTPERIOD_Pos    (0)                                               /*!< ELLSI_T::RSTPERIOD: RSTPERIOD Position */
#define ELLSI_RSTPERIOD_RSTPERIOD_Msk    (0xfffful << ELLSI_RSTPERIOD_RSTPERIOD_Pos)       /*!< ELLSI_T::RSTPERIOD: RSTPERIOD Mask     */

#define ELLSI_PERIOD_PERIOD_Pos          (0)                                               /*!< ELLSI_T::PERIOD: PERIOD Position       */
#define ELLSI_PERIOD_PERIOD_Msk          (0xfful << ELLSI_PERIOD_PERIOD_Pos)               /*!< ELLSI_T::PERIOD: PERIOD Mask           */

#define ELLSI_DUTY_T0H_Pos               (0)                                               /*!< ELLSI_T::DUTY: T0H Position            */
#define ELLSI_DUTY_T0H_Msk               (0xfful << ELLSI_DUTY_T0H_Pos)                    /*!< ELLSI_T::DUTY: T0H Mask                */

#define ELLSI_DUTY_T1H_Pos               (16)                                              /*!< ELLSI_T::DUTY: T1H Position            */
#define ELLSI_DUTY_T1H_Msk               (0xfful << ELLSI_DUTY_T1H_Pos)                    /*!< ELLSI_T::DUTY: T1H Mask                */

#define ELLSI_DATA_DATA_Pos              (0)                                               /*!< ELLSI_T::DATA: DATA Position           */
#define ELLSI_DATA_DATA_Msk              (0xfffffffful << ELLSI_DATA_DATA_Pos)             /*!< ELLSI_T::DATA: DATA Mask               */

#define ELLSI_PCNT_PCNT_Pos              (0)                                               /*!< ELLSI_T::PCNT: PCNT Position           */
#define ELLSI_PCNT_PCNT_Msk              (0xffful << ELLSI_PCNT_PCNT_Pos)                  /*!< ELLSI_T::PCNT: PCNT Mask               */

#define ELLSI_CLKDIV_DIVIDER_Pos         (0)                                               /*!< ELLSI_T::CLKDIV: DIVIDER Position      */
#define ELLSI_CLKDIV_DIVIDER_Msk         (0xfful << ELLSI_CLKDIV_DIVIDER_Pos)              /*!< ELLSI_T::CLKDIV: DIVIDER Mask          */

#define ELLSI_CLKDIV_CMDDIV_Pos          (16)                                              /*!< ELLSI_T::CLKDIV: CMDDIV Position       */
#define ELLSI_CLKDIV_CMDDIV_Msk          (0xfful << ELLSI_CLKDIV_CMDDIV_Pos)               /*!< ELLSI_T::CLKDIV: CMDDIV Mask           */

#define ELLSI_STATUS_RSTCIF_Pos          (0)                                               /*!< ELLSI_T::STATUS: RSTCIF Position       */
#define ELLSI_STATUS_RSTCIF_Msk          (0x1ul << ELLSI_STATUS_RSTCIF_Pos)                /*!< ELLSI_T::STATUS: RSTCIF Mask           */

#define ELLSI_STATUS_EMPIF_Pos           (1)                                               /*!< ELLSI_T::STATUS: EMPIF Position        */
#define ELLSI_STATUS_EMPIF_Msk           (0x1ul << ELLSI_STATUS_EMPIF_Pos)                 /*!< ELLSI_T::STATUS: EMPIF Mask            */

#define ELLSI_STATUS_FULIF_Pos           (2)                                               /*!< ELLSI_T::STATUS: FULIF Position        */
#define ELLSI_STATUS_FULIF_Msk           (0x1ul << ELLSI_STATUS_FULIF_Pos)                 /*!< ELLSI_T::STATUS: FULIF Mask            */

#define ELLSI_STATUS_TXTHIF_Pos          (3)                                               /*!< ELLSI_T::STATUS: TXTHIF Position       */
#define ELLSI_STATUS_TXTHIF_Msk          (0x1ul << ELLSI_STATUS_TXTHIF_Pos)                /*!< ELLSI_T::STATUS: TXTHIF Mask           */

#define ELLSI_STATUS_UNDFLIF_Pos         (4)                                               /*!< ELLSI_T::STATUS: UNDFLIF Position      */
#define ELLSI_STATUS_UNDFLIF_Msk         (0x1ul << ELLSI_STATUS_UNDFLIF_Pos)               /*!< ELLSI_T::STATUS: UNDFLIF Mask          */

#define ELLSI_STATUS_FENDIF_Pos          (5)                                               /*!< ELLSI_T::STATUS: FENDIF Position       */
#define ELLSI_STATUS_FENDIF_Msk          (0x1ul << ELLSI_STATUS_FENDIF_Pos)                /*!< ELLSI_T::STATUS: FENDIF Mask           */

#define ELLSI_STATUS_LDT_Pos             (8)                                               /*!< ELLSI_T::STATUS: LDT Position          */
#define ELLSI_STATUS_LDT_Msk             (0x1ul << ELLSI_STATUS_LDT_Pos)                   /*!< ELLSI_T::STATUS: LDT Mask              */

#define ELLSI_OCTL_IDOS_Pos              (0)                                               /*!< ELLSI_T::OCTL: IDOS Position           */
#define ELLSI_OCTL_IDOS_Msk              (0x1ul << ELLSI_OCTL_IDOS_Pos)                    /*!< ELLSI_T::OCTL: IDOS Mask               */

#define ELLSI_CMDCTL_ENTERLO_Pos         (0)                                               /*!< ELLSI_T::CMDCTL: ENTERLO Position      */
#define ELLSI_CMDCTL_ENTERLO_Msk         (0xfful << ELLSI_CMDCTL_ENTERLO_Pos)              /*!< ELLSI_T::CMDCTL: ENTERLO Mask          */

#define ELLSI_CMDCTL_ENTERHI_Pos         (16)                                              /*!< ELLSI_T::CMDCTL: ENTERHI Position      */
#define ELLSI_CMDCTL_ENTERHI_Msk         (0xfful << ELLSI_CMDCTL_ENTERHI_Pos)              /*!< ELLSI_T::CMDCTL: ENTERHI Mask          */

#define ELLSI_CMDGPP_CMDTOP_Pos          (0)                                               /*!< ELLSI_T::CMDGPP: CMDTOP Position       */
#define ELLSI_CMDGPP_CMDTOP_Msk          (0xfffful << ELLSI_CMDGPP_CMDTOP_Pos)             /*!< ELLSI_T::CMDGPP: CMDTOP Mask           */

#define ELLSI_CMDGPP_GETHIP_Pos          (16)                                              /*!< ELLSI_T::CMDGPP: GETHIP Position       */
#define ELLSI_CMDGPP_GETHIP_Msk          (0xfful << ELLSI_CMDGPP_GETHIP_Pos)               /*!< ELLSI_T::CMDGPP: GETHIP Mask           */

#define ELLSI_CMDGPP_GETHITOL_Pos        (24)                                              /*!< ELLSI_T::CMDGPP: GETHITOL Position     */
#define ELLSI_CMDGPP_GETHITOL_Msk        (0xful << ELLSI_CMDGPP_GETHITOL_Pos)              /*!< ELLSI_T::CMDGPP: GETHITOL Mask         */

#define ELLSI_CMD_ID_Pos                 (0)                                               /*!< ELLSI_T::CMD: ID Position              */
#define ELLSI_CMD_ID_Msk                 (0xful << ELLSI_CMD_ID_Pos)                       /*!< ELLSI_T::CMD: ID Mask                  */

#define ELLSI_CMD_CMD_Pos                (4)                                               /*!< ELLSI_T::CMD: CMD Position             */
#define ELLSI_CMD_CMD_Msk                (0xful << ELLSI_CMD_CMD_Pos)                      /*!< ELLSI_T::CMD: CMD Mask                 */

#define ELLSI_CMD_CMDGO_Pos              (8)                                               /*!< ELLSI_T::CMD: CMDGO Position           */
#define ELLSI_CMD_CMDGO_Msk              (0x1ul << ELLSI_CMD_CMDGO_Pos)                    /*!< ELLSI_T::CMD: CMDGO Mask               */

#define ELLSI_CMD_SPECMD_Pos             (12)                                              /*!< ELLSI_T::CMD: SPECMD Position          */
#define ELLSI_CMD_SPECMD_Msk             (0xful << ELLSI_CMD_SPECMD_Pos)                   /*!< ELLSI_T::CMD: SPECMD Mask              */

#define ELLSI_CMD_PDCMD_Pos              (16)                                              /*!< ELLSI_T::CMD: PDCMD Position           */
#define ELLSI_CMD_PDCMD_Msk              (0x1ul << ELLSI_CMD_PDCMD_Pos)                    /*!< ELLSI_T::CMD: PDCMD Mask               */

#define ELLSI_CMD_WKCMD_Pos              (17)                                              /*!< ELLSI_T::CMD: WKCMD Position           */
#define ELLSI_CMD_WKCMD_Msk              (0x1ul << ELLSI_CMD_WKCMD_Pos)                    /*!< ELLSI_T::CMD: WKCMD Mask               */

#define ELLSI_CMDSTS_CMDDONE_Pos         (0)                                               /*!< ELLSI_T::CMDSTS: CMDDONE Position      */
#define ELLSI_CMDSTS_CMDDONE_Msk         (0x1ul << ELLSI_CMDSTS_CMDDONE_Pos)               /*!< ELLSI_T::CMDSTS: CMDDONE Mask          */

#define ELLSI_CMDSTS_FBDONE_Pos          (1)                                               /*!< ELLSI_T::CMDSTS: FBDONE Position       */
#define ELLSI_CMDSTS_FBDONE_Msk          (0x1ul << ELLSI_CMDSTS_FBDONE_Pos)                /*!< ELLSI_T::CMDSTS: FBDONE Mask           */

#define ELLSI_CMDSTS_TH20DONE_Pos        (2)                                               /*!< ELLSI_T::CMDSTS: TH20DONE Position     */
#define ELLSI_CMDSTS_TH20DONE_Msk        (0x1ul << ELLSI_CMDSTS_TH20DONE_Pos)              /*!< ELLSI_T::CMDSTS: TH20DONE Mask         */

#define ELLSI_CMDSTS_SETIDLONG_Pos       (8)                                               /*!< ELLSI_T::CMDSTS: SETIDLONG Position    */
#define ELLSI_CMDSTS_SETIDLONG_Msk       (0x1ul << ELLSI_CMDSTS_SETIDLONG_Pos)             /*!< ELLSI_T::CMDSTS: SETIDLONG Mask        */

#define ELLSI_CMDSTS_CHKIDLONG_Pos       (9)                                               /*!< ELLSI_T::CMDSTS: CHKIDLONG Position    */
#define ELLSI_CMDSTS_CHKIDLONG_Msk       (0x1ul << ELLSI_CMDSTS_CHKIDLONG_Pos)             /*!< ELLSI_T::CMDSTS: CHKIDLONG Mask        */

#define ELLSI_CMDSTS_SETIDSHORT_Pos      (10)                                              /*!< ELLSI_T::CMDSTS: SETIDSHORT Position   */
#define ELLSI_CMDSTS_SETIDSHORT_Msk      (0x1ul << ELLSI_CMDSTS_SETIDSHORT_Pos)            /*!< ELLSI_T::CMDSTS: SETIDSHORT Mask       */

#define ELLSI_CMDSTS_CHKIDSHORT_Pos      (11)                                              /*!< ELLSI_T::CMDSTS: CHKIDSHORT Position   */
#define ELLSI_CMDSTS_CHKIDSHORT_Msk      (0x1ul << ELLSI_CMDSTS_CHKIDSHORT_Pos)            /*!< ELLSI_T::CMDSTS: CHKIDSHORT Mask       */

#define ELLSI_CMDSTS_SETGETOV_Pos        (12)                                              /*!< ELLSI_T::CMDSTS: SETGETOV Position     */
#define ELLSI_CMDSTS_SETGETOV_Msk        (0x1ul << ELLSI_CMDSTS_SETGETOV_Pos)              /*!< ELLSI_T::CMDSTS: SETGETOV Mask         */

#define ELLSI_CMDSTS_CHKGETOV_Pos        (13)                                              /*!< ELLSI_T::CMDSTS: CHKGETOV Position     */
#define ELLSI_CMDSTS_CHKGETOV_Msk        (0x1ul << ELLSI_CMDSTS_CHKGETOV_Pos)              /*!< ELLSI_T::CMDSTS: CHKGETOV Mask         */

#define ELLSI_CMDSTS_SETGETUN_Pos        (14)                                              /*!< ELLSI_T::CMDSTS: SETGETUN Position     */
#define ELLSI_CMDSTS_SETGETUN_Msk        (0x1ul << ELLSI_CMDSTS_SETGETUN_Pos)              /*!< ELLSI_T::CMDSTS: SETGETUN Mask         */

#define ELLSI_CMDSTS_CHKGETUN_Pos        (15)                                              /*!< ELLSI_T::CMDSTS: CHKGETUN Position     */
#define ELLSI_CMDSTS_CHKGETUN_Msk        (0x1ul << ELLSI_CMDSTS_CHKGETUN_Pos)              /*!< ELLSI_T::CMDSTS: CHKGETUN Mask         */

#define ELLSI_CMDSTS_FBC0LONG_Pos        (16)                                              /*!< ELLSI_T::CMDSTS: FBC0LONG Position     */
#define ELLSI_CMDSTS_FBC0LONG_Msk        (0x1ul << ELLSI_CMDSTS_FBC0LONG_Pos)              /*!< ELLSI_T::CMDSTS: FBC0LONG Mask         */

#define ELLSI_CMDSTS_FBC0SHORT_Pos       (17)                                              /*!< ELLSI_T::CMDSTS: FBC0SHORT Position    */
#define ELLSI_CMDSTS_FBC0SHORT_Msk       (0x1ul << ELLSI_CMDSTS_FBC0SHORT_Pos)             /*!< ELLSI_T::CMDSTS: FBC0SHORT Mask        */

#define ELLSI_CMDSTS_FBC1LONG_Pos        (18)                                              /*!< ELLSI_T::CMDSTS: FBC1LONG Position     */
#define ELLSI_CMDSTS_FBC1LONG_Msk        (0x1ul << ELLSI_CMDSTS_FBC1LONG_Pos)              /*!< ELLSI_T::CMDSTS: FBC1LONG Mask         */

#define ELLSI_CMDSTS_FBC1SHORT_Pos       (19)                                              /*!< ELLSI_T::CMDSTS: FBC1SHORT Position    */
#define ELLSI_CMDSTS_FBC1SHORT_Msk       (0x1ul << ELLSI_CMDSTS_FBC1SHORT_Pos)             /*!< ELLSI_T::CMDSTS: FBC1SHORT Mask        */

#define ELLSI_CMDSTS_FBID0LONG_Pos       (20)                                              /*!< ELLSI_T::CMDSTS: FBID0LONG Position    */
#define ELLSI_CMDSTS_FBID0LONG_Msk       (0x1ul << ELLSI_CMDSTS_FBID0LONG_Pos)             /*!< ELLSI_T::CMDSTS: FBID0LONG Mask        */

#define ELLSI_CMDSTS_FBID0SHORT_Pos      (21)                                              /*!< ELLSI_T::CMDSTS: FBID0SHORT Position   */
#define ELLSI_CMDSTS_FBID0SHORT_Msk      (0x1ul << ELLSI_CMDSTS_FBID0SHORT_Pos)            /*!< ELLSI_T::CMDSTS: FBID0SHORT Mask       */

#define ELLSI_CMDSTS_FBID1LONG_Pos       (22)                                              /*!< ELLSI_T::CMDSTS: FBID1LONG Position    */
#define ELLSI_CMDSTS_FBID1LONG_Msk       (0x1ul << ELLSI_CMDSTS_FBID1LONG_Pos)             /*!< ELLSI_T::CMDSTS: FBID1LONG Mask        */

#define ELLSI_CMDSTS_FBID1SHORT_Pos      (23)                                              /*!< ELLSI_T::CMDSTS: FBID1SHORT Position   */
#define ELLSI_CMDSTS_FBID1SHORT_Msk      (0x1ul << ELLSI_CMDSTS_FBID1SHORT_Pos)            /*!< ELLSI_T::CMDSTS: FBID1SHORT Mask       */

#define ELLSI_CMDSTS_ASETIDOV_Pos        (24)                                              /*!< ELLSI_T::CMDSTS: ASETIDOV Position     */
#define ELLSI_CMDSTS_ASETIDOV_Msk        (0x1ul << ELLSI_CMDSTS_ASETIDOV_Pos)              /*!< ELLSI_T::CMDSTS: ASETIDOV Mask         */

#define ELLSI_CMDSTS_ASETDONE_Pos        (25)                                              /*!< ELLSI_T::CMDSTS: ASETDONE Position     */
#define ELLSI_CMDSTS_ASETDONE_Msk        (0x1ul << ELLSI_CMDSTS_ASETDONE_Pos)              /*!< ELLSI_T::CMDSTS: ASETDONE Mask         */

#define ELLSI_CMDSTS_ATHDONE_Pos         (26)                                              /*!< ELLSI_T::CMDSTS: ATHDONE Position      */
#define ELLSI_CMDSTS_ATHDONE_Msk         (0x1ul << ELLSI_CMDSTS_ATHDONE_Pos)               /*!< ELLSI_T::CMDSTS: ATHDONE Mask          */

#define ELLSI_CMDSTS_IDCNT_Pos           (28)                                              /*!< ELLSI_T::CMDSTS: IDCNT Position        */
#define ELLSI_CMDSTS_IDCNT_Msk           (0xful << ELLSI_CMDSTS_IDCNT_Pos)                 /*!< ELLSI_T::CMDSTS: IDCNT Mask            */

#define ELLSI_FBCCTL_FBLOP1_Pos          (0)                                               /*!< ELLSI_T::FBCCTL: FBLOP1 Position       */
#define ELLSI_FBCCTL_FBLOP1_Msk          (0xfful << ELLSI_FBCCTL_FBLOP1_Pos)               /*!< ELLSI_T::FBCCTL: FBLOP1 Mask           */

#define ELLSI_FBCCTL_FBHIP1_Pos          (8)                                               /*!< ELLSI_T::FBCCTL: FBHIP1 Position       */
#define ELLSI_FBCCTL_FBHIP1_Msk          (0xfful << ELLSI_FBCCTL_FBHIP1_Pos)               /*!< ELLSI_T::FBCCTL: FBHIP1 Mask           */

#define ELLSI_FBCCTL_FBLOP0_Pos          (16)                                              /*!< ELLSI_T::FBCCTL: FBLOP0 Position       */
#define ELLSI_FBCCTL_FBLOP0_Msk          (0xfful << ELLSI_FBCCTL_FBLOP0_Pos)               /*!< ELLSI_T::FBCCTL: FBLOP0 Mask           */

#define ELLSI_FBCCTL_FBHIP0_Pos          (24)                                              /*!< ELLSI_T::FBCCTL: FBHIP0 Position       */
#define ELLSI_FBCCTL_FBHIP0_Msk          (0xfful << ELLSI_FBCCTL_FBHIP0_Pos)               /*!< ELLSI_T::FBCCTL: FBHIP0 Mask           */

#define ELLSI_FBCTCTL_FBCNT0_Pos         (0)                                               /*!< ELLSI_T::FBCTCTL: FBCNT0 Position      */
#define ELLSI_FBCTCTL_FBCNT0_Msk         (0xfful << ELLSI_FBCTCTL_FBCNT0_Pos)              /*!< ELLSI_T::FBCTCTL: FBCNT0 Mask          */

#define ELLSI_FBCTCTL_FBC0TOL_Pos        (8)                                               /*!< ELLSI_T::FBCTCTL: FBC0TOL Position     */
#define ELLSI_FBCTCTL_FBC0TOL_Msk        (0xful << ELLSI_FBCTCTL_FBC0TOL_Pos)              /*!< ELLSI_T::FBCTCTL: FBC0TOL Mask         */

#define ELLSI_FBCTCTL_FBCNT1_Pos         (16)                                              /*!< ELLSI_T::FBCTCTL: FBCNT1 Position      */
#define ELLSI_FBCTCTL_FBCNT1_Msk         (0xfful << ELLSI_FBCTCTL_FBCNT1_Pos)              /*!< ELLSI_T::FBCTCTL: FBCNT1 Mask          */

#define ELLSI_FBCTCTL_FBC1TOL_Pos        (24)                                              /*!< ELLSI_T::FBCTCTL: FBC1TOL Position     */
#define ELLSI_FBCTCTL_FBC1TOL_Msk        (0xful << ELLSI_FBCTCTL_FBC1TOL_Pos)              /*!< ELLSI_T::FBCTCTL: FBC1TOL Mask         */

#define ELLSI_FBIDTCTL_FBID0_Pos         (0)                                               /*!< ELLSI_T::FBIDTCTL: FBID0 Position      */
#define ELLSI_FBIDTCTL_FBID0_Msk         (0xfful << ELLSI_FBIDTCTL_FBID0_Pos)              /*!< ELLSI_T::FBIDTCTL: FBID0 Mask          */

#define ELLSI_FBIDTCTL_FBID0TOL_Pos      (8)                                               /*!< ELLSI_T::FBIDTCTL: FBID0TOL Position   */
#define ELLSI_FBIDTCTL_FBID0TOL_Msk      (0xful << ELLSI_FBIDTCTL_FBID0TOL_Pos)            /*!< ELLSI_T::FBIDTCTL: FBID0TOL Mask       */

#define ELLSI_FBIDTCTL_FBID1_Pos         (16)                                              /*!< ELLSI_T::FBIDTCTL: FBID1 Position      */
#define ELLSI_FBIDTCTL_FBID1_Msk         (0xfful << ELLSI_FBIDTCTL_FBID1_Pos)              /*!< ELLSI_T::FBIDTCTL: FBID1 Mask          */

#define ELLSI_FBIDTCTL_FBID1TOL_Pos      (24)                                              /*!< ELLSI_T::FBIDTCTL: FBID1TOL Position   */
#define ELLSI_FBIDTCTL_FBID1TOL_Msk      (0xful << ELLSI_FBIDTCTL_FBID1TOL_Pos)            /*!< ELLSI_T::FBIDTCTL: FBID1TOL Mask       */

#define ELLSI_FBPCNT_FBPCNT_Pos          (0)                                               /*!< ELLSI_T::FBPCNT: FBPCNT Position       */
#define ELLSI_FBPCNT_FBPCNT_Msk          (0x3fful << ELLSI_FBPCNT_FBPCNT_Pos)              /*!< ELLSI_T::FBPCNT: FBPCNT Mask           */

#define ELLSI_FBPCNT_FBPOV_Pos           (16)                                              /*!< ELLSI_T::FBPCNT: FBPOV Position        */
#define ELLSI_FBPCNT_FBPOV_Msk           (0x1ul << ELLSI_FBPCNT_FBPOV_Pos)                 /*!< ELLSI_T::FBPCNT: FBPOV Mask            */

#define ELLSI_FBPCNT_FBPCUR_Pos          (24)                                              /*!< ELLSI_T::FBPCNT: FBPCUR Position       */
#define ELLSI_FBPCNT_FBPCUR_Msk          (0x1ul << ELLSI_FBPCNT_FBPCUR_Pos)                /*!< ELLSI_T::FBPCNT: FBPCUR Mask           */

#define ELLSI_FBSID_FBSID_Pos            (0)                                               /*!< ELLSI_T::FBSID: FBSID Position         */
#define ELLSI_FBSID_FBSID_Msk            (0xfffffffful << ELLSI_FBSID_FBSID_Pos)           /*!< ELLSI_T::FBSID: FBSID Mask             */

#define ELLSI_TCCTL_TH20CMD_Pos          (0)                                               /*!< ELLSI_T::TCCTL: TH20CMD Position       */
#define ELLSI_TCCTL_TH20CMD_Msk          (0xfffffful << ELLSI_TCCTL_TH20CMD_Pos)           /*!< ELLSI_T::TCCTL: TH20CMD Mask           */

#define ELLSI_TCCTL_TH20FCMD_Pos         (24)                                              /*!< ELLSI_T::TCCTL: TH20FCMD Position      */
#define ELLSI_TCCTL_TH20FCMD_Msk         (0x1ul << ELLSI_TCCTL_TH20FCMD_Pos)               /*!< ELLSI_T::TCCTL: TH20FCMD Mask          */

#define ELLSI_TCTCTL_TH20HI_Pos          (0)                                               /*!< ELLSI_T::TCTCTL: TH20HI Position       */
#define ELLSI_TCTCTL_TH20HI_Msk          (0xfful << ELLSI_TCTCTL_TH20HI_Pos)               /*!< ELLSI_T::TCTCTL: TH20HI Mask           */

#define ELLSI_WKTCTL_WKPULSE_Pos         (0)                                               /*!< ELLSI_T::WKTCTL: WKPULSE Position      */
#define ELLSI_WKTCTL_WKPULSE_Msk         (0xfffful << ELLSI_WKTCTL_WKPULSE_Pos)            /*!< ELLSI_T::WKTCTL: WKPULSE Mask          */

#define ELLSI_WKTCTL_WKWPER_Pos          (16)                                              /*!< ELLSI_T::WKTCTL: WKWPER Position       */
#define ELLSI_WKTCTL_WKWPER_Msk          (0xfffful << ELLSI_WKTCTL_WKWPER_Pos)             /*!< ELLSI_T::WKTCTL: WKWPER Mask           */

/**@}*/ /* ELLSI_CONST */
/**@}*/ /* end of ELLSI register group */
/**@}*/ /* end of REGISTER group */

#if defined ( __CC_ARM   )
    #pragma no_anon_unions
#endif

#endif /* __ELLSI_REG_H__ */
