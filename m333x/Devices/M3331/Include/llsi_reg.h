/**************************************************************************//**
 * @file     llsi_reg.h
 * @version  V3.00
 * @brief    LLSI register definition header file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (c) 2024 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __LLSI_REG_H__
#define __LLSI_REG_H__

#if defined ( __CC_ARM   )
    #pragma anon_unions
#endif

/**
   @addtogroup REGISTER Control Register
   @{
*/

/**
    @addtogroup LLSI LED Light Strip Interface(LLSI)
    Memory Mapped Structure for LLSI Controller
@{ */

typedef struct
{


    /**
     * @var LLSI_T::CTL
     * Offset: 0x00  LLSI Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |LLSIEN    |LLSI Enable Bit
     * |        |          |0 = LLSI Disabled.
     * |        |          |1 = LLSI Enabled.
     * |[1]     |RSTCEN    |Reset Command Function Enable Bit
     * |        |          |0 = Reset command function Disabled.
     * |        |          |1 = Reset command function Enabled.
     * |        |          |Note: If this bit is enabled, when FIFO and shift register are both empty, LLSI will send reset command out.
     * |[2]     |UNDFLINTEN|Underflow Interrupt Enable Bit
     * |        |          |0 = Underflow interrupt Disabled.
     * |        |          |1 = Underflow interrupt Enabled.
     * |        |          |Note: If this bit is enabled, when the UNDFLIF interrupt flag is set to 1, the LLSI interrupt signal is generated and inform to CPU.
     * |[3]     |FENDINTEN |Frame End Interrupt Enable Bit
     * |        |          |0 = Frame end interrupt Disabled.
     * |        |          |1 = Frame end interrupt Enabled.
     * |        |          |Note: If this bit is enabled, when the FENDIF interrupt flag is set to 1, the LLSI interrupt signal is generated and inform to CPU.
     * |[4]     |RSTCINTEN |Reset Command Interrupt Enable Bit
     * |        |          |0 = Reset command interrupt Disabled.
     * |        |          |1 = Reset command interrupt Enabled.
     * |        |          |Note: If this bit is enabled, when the RSTCIF interrupt flag is set to 1, the LLSI interrupt signal is generated and inform to CPU.
     * |[5]     |EMPINTEN  |FIFO Empty Interrupt Enable Bit
     * |        |          |0 = FIFO empty interrupt Disabled.
     * |        |          |1 = FIFO empty interrupt Enabled.
     * |        |          |Note: If this bit is enabled, when the EMPIF interrupt flag is set to 1, the LLSI interrupt signal is generated and inform to CPU.
     * |[6]     |FULINTEN  |FIFO Full Interrupt Enable Bit
     * |        |          |0 = FIFO full interrupt Disabled.
     * |        |          |1 = FIFO full interrupt Enabled.
     * |        |          |Note: If this bit is enabled, when the FULIF interrupt flag is set to 1, the LLSI interrupt signal is generated and inform to CPU.
     * |[7]     |TXTHIEN   |Transmit FIFO Threshold Interrupt Enable Bit
     * |        |          |0 = TX FIFO threshold interrupt Disabled.
     * |        |          |1 = TX FIFO threshold interrupt Enabled.
     * |        |          |Note: This bit is only supported in software mode.
     * |[8]     |LLSIMODE  |LLSI Mode Select
     * |        |          |0 = Software mode.
     * |        |          |1 = PDMA mode.
     * |[12]    |OFDEF     |Output Format Define
     * |        |          |0 = Output RGB format.
     * |        |          |1 = Output GRB format.
     * |[17:16] |TXTH      |Transmit FIFO Threshold
     * |        |          |If the valid data count of the transmit FIFO buffer is less than or equal to the TXTH setting, the TXTHIF bit will be set to 1, else the TXTHIF bit will be cleared to 0.
     * @var LLSI_T::RSTPERIOD
     * Offset: 0x04  LLSI Reset Period Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |RSTPERIOD |Reset Command Period
     * |        |          |This field is used to adjust the time of reset command.
     * |        |          |Reset command time = LLSI_CLK * (DIVIDER+1) * RSTPERIOD.
     * @var LLSI_T::PERIOD
     * Offset: 0x08  LLSI Period Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |PERIOD    |LLSI Period Register
     * |        |          |This field is used to define data transfer time (TH+TL).
     * |        |          |Data transfer time = LLSI_CLK * (DIVIDER+1) * PERIOD.
     * @var LLSI_T::DUTY
     * Offset: 0x0C  LLSI Duty Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |T0H       |T0H Data Register
     * |        |          |This field is used to define the time of T0H.
     * |        |          |The time of T0H = LLSI_CLK * (DIVIDER+1) * T0H.
     * |        |          |Note: T0 (0 code) duty cycle = (T0H) / (PERIOD).
     * |[23:16] |T1H       |T1H Data Register
     * |        |          |This field is used to define the time of T1H.
     * |        |          |The time of T1H = LLSI_CLK * (DIVIDER+1) * T1H.
     * |        |          |Note: T1 (1 code) duty cycle = (T1H) / (PERIOD).
     * @var LLSI_T::DATA
     * Offset: 0x10  LLSI Data Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |DATA      |Data Transmit Register
     * |        |          |The data transmit registers pass through the transmitted data into the 4-level transmit FIFO buffers.
     * @var LLSI_T::PCNT
     * Offset: 0x14  LLSI Pixel Count Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[11:0]  |PCNT      |Pixel Count Register
     * |        |          |User should write a frame size to this register before transfer.
     * |        |          |For example, if there are a total of 5 LED (5 pixels) in frame, user should write 5 to this control register.
     * @var LLSI_T::CLKDIV
     * Offset: 0x18  LLSI Clock Divider Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |DIVIDER   |LLSI Clock Divider
     * |        |          |It indicates the LLSI clock, F_LLSI = F_APBCLK / (DIVIDER+1).
     * @var LLSI_T::STATUS
     * Offset: 0x1C  LLSI Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |RSTCIF    |Reset Command Interrupt Flag
     * |        |          |This bit indicates that LLSI has finished reset command transmission.
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
     * |        |          |Each transmission LLSI reads 3 bytes data from the FIFO
     * |        |          |This bit is set to 1 when LLSI reads the FIFO and the valid data in FIFO is less than 3 bytes.
     * |        |          |Software can write 1 to clear this bit.
     * |[5]     |FENDIF    |Frame End Interrupt Flag
     * |        |          |This bit indicates that LLSI has finished data transmission (FIFO empty & shift register empty)
     * |        |          |When LLSI transfer finish (FIFO empty & shift register empty) this bit is set to 1.
     * |        |          |User can use this flag to prepare data in advance.
     * |        |          |Software can write 1 to clear this bit.
     * |[8]     |LDT       |Last Data Transmit
     * |        |          |Software should set LDT = 1 before write last data to LLSI_DATA
     * |        |          |This bit will auto clear by hardware after LLSI has finished data transmission.
     * @var LLSI_T::OCTL
     * Offset: 0x20  LLSI Output Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |IDOS      |Idle Output Control
     * |        |          |0 = Idle will output 0.
     * |        |          |1 = Idle will output 1.
     */
    __IO uint32_t CTL;                   /*!< [0x0000] LLSI Control Register                                            */
    __IO uint32_t RSTPERIOD;             /*!< [0x0004] LLSI Reset Period Control Register                               */
    __IO uint32_t PERIOD;                /*!< [0x0008] LLSI Period Control Register                                     */
    __IO uint32_t DUTY;                  /*!< [0x000c] LLSI Duty Control Register                                       */
    __O  uint32_t DATA;                  /*!< [0x0010] LLSI Data Register                                               */
    __IO uint32_t PCNT;                  /*!< [0x0014] LLSI Pixel Count Register                                        */
    __IO uint32_t CLKDIV;                /*!< [0x0018] LLSI Clock Divider Register                                      */
    __IO uint32_t STATUS;                /*!< [0x001c] LLSI Status Register                                             */
    __IO uint32_t OCTL;                  /*!< [0x0020] LLSI Output Control Register                                     */

} LLSI_T;

/**
    @addtogroup LLSI_CONST LLSI Bit Field Definition
    Constant Definitions for LLSI Controller
@{ */

#define LLSI_CTL_LLSIEN_Pos              (0)                                               /*!< LLSI_T::CTL: LLSIEN Position           */
#define LLSI_CTL_LLSIEN_Msk              (0x1ul << LLSI_CTL_LLSIEN_Pos)                    /*!< LLSI_T::CTL: LLSIEN Mask               */

#define LLSI_CTL_RSTCEN_Pos              (1)                                               /*!< LLSI_T::CTL: RSTCEN Position           */
#define LLSI_CTL_RSTCEN_Msk              (0x1ul << LLSI_CTL_RSTCEN_Pos)                    /*!< LLSI_T::CTL: RSTCEN Mask               */

#define LLSI_CTL_UNDFLINTEN_Pos          (2)                                               /*!< LLSI_T::CTL: UNDFLINTEN Position       */
#define LLSI_CTL_UNDFLINTEN_Msk          (0x1ul << LLSI_CTL_UNDFLINTEN_Pos)                /*!< LLSI_T::CTL: UNDFLINTEN Mask           */

#define LLSI_CTL_FENDINTEN_Pos           (3)                                               /*!< LLSI_T::CTL: FENDINTEN Position        */
#define LLSI_CTL_FENDINTEN_Msk           (0x1ul << LLSI_CTL_FENDINTEN_Pos)                 /*!< LLSI_T::CTL: FENDINTEN Mask            */

#define LLSI_CTL_RSTCINTEN_Pos           (4)                                               /*!< LLSI_T::CTL: RSTCINTEN Position        */
#define LLSI_CTL_RSTCINTEN_Msk           (0x1ul << LLSI_CTL_RSTCINTEN_Pos)                 /*!< LLSI_T::CTL: RSTCINTEN Mask            */

#define LLSI_CTL_EMPINTEN_Pos            (5)                                               /*!< LLSI_T::CTL: EMPINTEN Position         */
#define LLSI_CTL_EMPINTEN_Msk            (0x1ul << LLSI_CTL_EMPINTEN_Pos)                  /*!< LLSI_T::CTL: EMPINTEN Mask             */

#define LLSI_CTL_FULINTEN_Pos            (6)                                               /*!< LLSI_T::CTL: FULINTEN Position         */
#define LLSI_CTL_FULINTEN_Msk            (0x1ul << LLSI_CTL_FULINTEN_Pos)                  /*!< LLSI_T::CTL: FULINTEN Mask             */

#define LLSI_CTL_TXTHIEN_Pos             (7)                                               /*!< LLSI_T::CTL: TXTHIEN Position          */
#define LLSI_CTL_TXTHIEN_Msk             (0x1ul << LLSI_CTL_TXTHIEN_Pos)                   /*!< LLSI_T::CTL: TXTHIEN Mask              */

#define LLSI_CTL_LLSIMODE_Pos            (8)                                               /*!< LLSI_T::CTL: LLSIMODE Position         */
#define LLSI_CTL_LLSIMODE_Msk            (0x1ul << LLSI_CTL_LLSIMODE_Pos)                  /*!< LLSI_T::CTL: LLSIMODE Mask             */

#define LLSI_CTL_OFDEF_Pos               (12)                                              /*!< LLSI_T::CTL: OFDEF Position            */
#define LLSI_CTL_OFDEF_Msk               (0x1ul << LLSI_CTL_OFDEF_Pos)                     /*!< LLSI_T::CTL: OFDEF Mask                */

#define LLSI_CTL_TXTH_Pos                (16)                                              /*!< LLSI_T::CTL: TXTH Position             */
#define LLSI_CTL_TXTH_Msk                (0x3ul << LLSI_CTL_TXTH_Pos)                      /*!< LLSI_T::CTL: TXTH Mask                 */

#define LLSI_RSTPERIOD_RSTPERIOD_Pos     (0)                                               /*!< LLSI_T::RSTPERIOD: RSTPERIOD Position  */
#define LLSI_RSTPERIOD_RSTPERIOD_Msk     (0xfffful << LLSI_RSTPERIOD_RSTPERIOD_Pos)        /*!< LLSI_T::RSTPERIOD: RSTPERIOD Mask      */

#define LLSI_PERIOD_PERIOD_Pos           (0)                                               /*!< LLSI_T::PERIOD: PERIOD Position        */
#define LLSI_PERIOD_PERIOD_Msk           (0xfful << LLSI_PERIOD_PERIOD_Pos)                /*!< LLSI_T::PERIOD: PERIOD Mask            */

#define LLSI_DUTY_T0H_Pos                (0)                                               /*!< LLSI_T::DUTY: T0H Position             */
#define LLSI_DUTY_T0H_Msk                (0xfful << LLSI_DUTY_T0H_Pos)                     /*!< LLSI_T::DUTY: T0H Mask                 */

#define LLSI_DUTY_T1H_Pos                (16)                                              /*!< LLSI_T::DUTY: T1H Position             */
#define LLSI_DUTY_T1H_Msk                (0xfful << LLSI_DUTY_T1H_Pos)                     /*!< LLSI_T::DUTY: T1H Mask                 */

#define LLSI_DATA_DATA_Pos               (0)                                               /*!< LLSI_T::DATA: DATA Position            */
#define LLSI_DATA_DATA_Msk               (0xfffffffful << LLSI_DATA_DATA_Pos)              /*!< LLSI_T::DATA: DATA Mask                */

#define LLSI_PCNT_PCNT_Pos               (0)                                               /*!< LLSI_T::PCNT: PCNT Position            */
#define LLSI_PCNT_PCNT_Msk               (0xffful << LLSI_PCNT_PCNT_Pos)                   /*!< LLSI_T::PCNT: PCNT Mask                */

#define LLSI_CLKDIV_DIVIDER_Pos          (0)                                               /*!< LLSI_T::CLKDIV: DIVIDER Position       */
#define LLSI_CLKDIV_DIVIDER_Msk          (0xfful << LLSI_CLKDIV_DIVIDER_Pos)               /*!< LLSI_T::CLKDIV: DIVIDER Mask           */

#define LLSI_STATUS_RSTCIF_Pos           (0)                                               /*!< LLSI_T::STATUS: RSTCIF Position        */
#define LLSI_STATUS_RSTCIF_Msk           (0x1ul << LLSI_STATUS_RSTCIF_Pos)                 /*!< LLSI_T::STATUS: RSTCIF Mask            */

#define LLSI_STATUS_EMPIF_Pos            (1)                                               /*!< LLSI_T::STATUS: EMPIF Position         */
#define LLSI_STATUS_EMPIF_Msk            (0x1ul << LLSI_STATUS_EMPIF_Pos)                  /*!< LLSI_T::STATUS: EMPIF Mask             */

#define LLSI_STATUS_FULIF_Pos            (2)                                               /*!< LLSI_T::STATUS: FULIF Position         */
#define LLSI_STATUS_FULIF_Msk            (0x1ul << LLSI_STATUS_FULIF_Pos)                  /*!< LLSI_T::STATUS: FULIF Mask             */

#define LLSI_STATUS_TXTHIF_Pos           (3)                                               /*!< LLSI_T::STATUS: TXTHIF Position        */
#define LLSI_STATUS_TXTHIF_Msk           (0x1ul << LLSI_STATUS_TXTHIF_Pos)                 /*!< LLSI_T::STATUS: TXTHIF Mask            */

#define LLSI_STATUS_UNDFLIF_Pos          (4)                                               /*!< LLSI_T::STATUS: UNDFLIF Position       */
#define LLSI_STATUS_UNDFLIF_Msk          (0x1ul << LLSI_STATUS_UNDFLIF_Pos)                /*!< LLSI_T::STATUS: UNDFLIF Mask           */

#define LLSI_STATUS_FENDIF_Pos           (5)                                               /*!< LLSI_T::STATUS: FENDIF Position        */
#define LLSI_STATUS_FENDIF_Msk           (0x1ul << LLSI_STATUS_FENDIF_Pos)                 /*!< LLSI_T::STATUS: FENDIF Mask            */

#define LLSI_STATUS_LDT_Pos              (8)                                               /*!< LLSI_T::STATUS: LDT Position           */
#define LLSI_STATUS_LDT_Msk              (0x1ul << LLSI_STATUS_LDT_Pos)                    /*!< LLSI_T::STATUS: LDT Mask               */

#define LLSI_OCTL_IDOS_Pos               (0)                                               /*!< LLSI_T::OCTL: IDOS Position            */
#define LLSI_OCTL_IDOS_Msk               (0x1ul << LLSI_OCTL_IDOS_Pos)                     /*!< LLSI_T::OCTL: IDOS Mask                */

/**@}*/ /* LLSI_CONST */
/**@}*/ /* end of LLSI register group */
/**@}*/ /* end of REGISTER group */

#if defined ( __CC_ARM   )
    #pragma no_anon_unions
#endif

#endif /* __LLSI_REG_H__ */
