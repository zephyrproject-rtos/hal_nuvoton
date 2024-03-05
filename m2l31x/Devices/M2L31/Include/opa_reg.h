/**************************************************************************//**
 * @file     opa_reg.h
 * @version  V1.00
 * @brief    OPA register definition header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *
 *****************************************************************************/
#ifndef __OPA_REG_H__
#define __OPA_REG_H__

#if defined ( __CC_ARM   )
#pragma anon_unions
#endif

/**
   @addtogroup REGISTER Control Register
   @{
*/

/**
    @addtogroup OPA OP Amplifier(OPA)
    Memory Mapped Structure for OPA Controller
@{ */
 
typedef struct
{


/**
 * @var OPA_T::CTL
 * Offset: 0x00  OP Amplifier Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |OPEN0     |OP Amplifier 0 Enable Bit
 * |        |          |0 = OP amplifier 0 Disabled.
 * |        |          |1 = OP amplifier 0 Enabled.
 * |        |          |Note: OP amplifier 0 output needs wait stable 20us after OPEN0 is set.
 * |[1]     |OPEN1     |OP Amplifier 1 Enable Bit
 * |        |          |0 = OP amplifier 1 Disabled.
 * |        |          |1 = OP amplifier 1 Enabled.
 * |        |          |Note: OP amplifier 1 output needs wait stable 20us after OPEN1 is set.
 * |[2]     |OPEN2     |OP Amplifier 2 Enable Bit
 * |        |          |0 = OP amplifier 2 Disabled.
 * |        |          |1 = OP amplifier 2 Enabled.
 * |        |          |Note: OP amplifier 2 output needs wait stable 20us after OPEN2 is set.
 * |[4]     |OPDOEN0   |OP Amplifier 0 Schmitt Trigger Non-inverting Buffer Enable Bit
 * |        |          |0 = OP amplifier 0 schmitt trigger non-invert buffer Disabled.
 * |        |          |1 = OP amplifier 0 schmitt trigger non-invert buffer Enabled.
 * |[5]     |OPDOEN1   |OP Amplifier 1 Schmitt Trigger Non-inverting Buffer Enable Bit
 * |        |          |0 = OP amplifier 1 schmitt trigger non-invert buffer Disabled.
 * |        |          |1 = OP amplifier 1 schmitt trigger non-invert buffer Enabled.
 * |[6]     |OPDOEN2   |OP Amplifier 2 Schmitt Trigger Non-inverting Buffer Enable Bit
 * |        |          |0 = OP amplifier 2 schmitt trigger non-invert buffer Disabled.
 * |        |          |1 = OP amplifier 2 schmitt trigger non-invert buffer Enabled.
 * |[8]     |OPDOIEN0  |OP Amplifier 0 Schmitt Trigger Digital Output Interrupt Enable Bit
 * |        |          |0 = OP amplifier 0 digital output interrupt function Disabled.
 * |        |          |1 = OP amplifier 0 digital output interrupt function Enabled.
 * |        |          |Note: The OPDOIF0 interrupt flag is set by hardware whenever the OP amplifier 0 Schmitt trigger non-inverting buffer digital output changes state, in the meanwhile, if OPDOIEN0 is set to 1, an OPA interrupt request is generated.
 * |[9]     |OPDOIEN1  |OP Amplifier 1 Schmitt Trigger Digital Output Interrupt Enable Bit
 * |        |          |0 = OP amplifier 1 digital output interrupt function Disabled.
 * |        |          |1 = OP amplifier 1 digital output interrupt function Enabled.
 * |        |          |Note: The OPDOIF1 interrupt flag is set by hardware whenever the OP amplifier 1 Schmitt trigger non-inverting buffer digital output changes state, in the meanwhile, if OPDOIEN1 is set to 1, an OPA interrupt request is generated.
 * |[10]    |OPDOIEN2  |OP Amplifier 2 Schmitt Trigger Digital Output Interrupt Enable Bit
 * |        |          |0 = OP amplifier 2 digital output interrupt function Disabled.
 * |        |          |1 = OP amplifier 2 digital output interrupt function Enabled.
 * |        |          |Note: The OPDOIF2 interrupt flag is set by hardware whenever the OP amplifier 2 Schmitt trigger non-inverting buffer digital output changes state, in the meanwhile, if OPDOIEN2 is set to 1, an OPA interrupt request is generated.
 * |[12]    |OPDOWKE0  |OP Amplifier 0 Schmitt Trigger Digital Output Wake-up Enable Bit
 * |        |          |0 = OP amplifier 0 digital output wake-up function Disabled.
 * |        |          |1 = OP amplifier 0 digital output wake-up function Enabled.
 * |        |          |Note: If OPDOWKE0 is set to 1 and the OP amplifier 0 Schmitt trigger non-inverting buffer digital output changes state in power-down mode, an OPA wake-up is generated.
 * |[13]    |OPDOWKE1  |OP Amplifier 1 Schmitt Trigger Digital Output Wake-up Enable Bit
 * |        |          |0 = OP amplifier 1 digital output wake-up function Disabled.
 * |        |          |1 = OP amplifier 1 digital output wake-up function Enabled.
 * |        |          |Note: If OPDOWKE1 is set to 1 and the OP amplifier 1 Schmitt trigger non-inverting buffer digital output changes state in power-down mode, an OPA wake-up is generated.
 * |[14]    |OPDOWKE2  |OP Amplifier 2 Schmitt Trigger Digital Output Wake-up Enable Bit
 * |        |          |0 = OP amplifier 2 digital output wake-up function Disabled.
 * |        |          |1 = OP amplifier 2 digital output wake-up function Enabled.
 * |        |          |Note: If OPDOWKE2 is set to 1 and the OP amplifier 2 Schmitt trigger non-inverting buffer digital output changes state in power-down mode, an OPA wake-up is generated.
 * @var OPA_T::MODE0
 * Offset: 0x04  OP Amplifier Mode Control Register0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[3:0]   |POSCHEN   |OP Amplifier 0 Positvie Input Channel Enable Bit
 * |        |          |00000 = disable all positive input channel.
 * |        |          |00001 = enable OPA0_P0.
 * |        |          |00010 = enable OPA0_P1.
 * |        |          |00100 = enable DAC0_OUT.
 * |        |          |01000 = enable DAC1_OUT.
 * |        |          |10000 = enable OPA1_int_OUT.
 * |        |          |Note 1: OPA1_int_OUT means the input from OPA1 internal output
 * |        |          |Note 2: For example: if POSCHEN is selected as 00011, PGA0_P0 and PGA0_P1 are both enabled.
 * |[11:8]  |NEGCHEN   |OP Amplifier 0 Negative Input Channel Enable Bit
 * |        |          |0000 = disable all negative input channel.
 * |        |          |0001 = OPA0_N0.
 * |        |          |0010 = OPA0_N1.
 * |        |          |0100 = OPA1_int_OUT.
 * |        |          |1000 = Vf_int.
 * |        |          |Note 1: OPA_int_OUT means the input from OPA1 internal output
 * |        |          |Note 2: For example: if NEGCHEN is selected as 0011, OPA0_N0 and OPA0_N1 are both enabled.
 * |[18:16] |GAIN      |OP Amplifier 0 Gain Control
 * |        |          |3'b000: normal mode
 * |        |          |3'b001: Gain x1
 * |        |          |3'b010: Gain x2
 * |        |          |3'b011: Gain x4
 * |        |          |3'b100: Gain x8
 * |        |          |3'b101: Gain x16
 * |        |          |3'b110: Gian x32
 * |        |          |3'b111: Reserved
 * |        |          |Note: when inverting gain setting, these bits represent gain -1x, -3x, -5x, -7x, -15x, -31x from GIAIN = 3'b001 to 3'b110 respectively.
 * |[20]    |OUTOE     |OP Amplifier 0 Output Enable Bit
 * |        |          |0 = OP Amplifier 0 Output floating.
 * |        |          |1 = OP Amplifier 0 Output to PAD.
 * |[23]    |LMODE     |Low Power Mode Enable Bit
 * |        |          |0= OPA operate at normal mode.
 * |        |          |1= OPA operate at low power mode.
 * |[25:24] |SWSEL     |OP Amplifier 0 Resistor End Switch Selection
 * |        |          |00 = input channel from OPA0 negative channel 0 (OPA0_N0) is enabled.
 * |        |          |01 = input channel connected to AVSS is enabled.
 * |        |          |10 = input channel connected to OPA1_int_OUT is enabled.
 * |        |          |11 = Reserved.
 * @var OPA_T::MODE1
 * Offset: 0x08  OP Amplifier Mode Control Register1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[3:0]   |POSCHEN   |OP Amplifier 1 Positvie Input Channel Enable Bit
 * |        |          |00000 = disable all positive input channel.
 * |        |          |00001 = OPA1_P0.
 * |        |          |00010 = OPA1_P1.
 * |        |          |00100 = DAC0_OUT.
 * |        |          |01000 = DAC1_OUT.
 * |        |          |10000 = OPA0_int_OUT.
 * |        |          |Note 1: OPA0_int_OUT means the input from OPA0 internal output
 * |        |          |Note 2: For example: if POSCHEN is selected as 00011, PGA1_P0 and PGA1_P1 are both enabled.
 * |[11:8]  |NEGCHEN   |OP Amplifier 1 Negative Input Channel Enable Bit
 * |        |          |0000 = disable all negative input channel.
 * |        |          |0001 = OPA1_N0.
 * |        |          |0010 = OPA1_N1.
 * |        |          |0100 = OPA0_int_OUT.
 * |        |          |1000 = Vf_int.
 * |        |          |Note 1: OPA0_int_OUT means the input from OPA0 internal output
 * |        |          |Note 2: For example: if NEGCHEN is selected as 0011, PGA1_N0 and PGA1_N1 are both enabled.
 * |[18:16] |GAIN      |OP Amplifier 1 Gain Control
 * |        |          |3'b000: normal mode
 * |        |          |3'b001: Gain x1
 * |        |          |3'b010: Gain x2
 * |        |          |3'b011: Gain x4
 * |        |          |3'b100: Gain x8
 * |        |          |3'b101: Gain x16
 * |        |          |3'b110: Gian x32
 * |        |          |3'b111: Reserved
 * |        |          |Note: when inverting gain setting, these bits represent gain -1x, -3x, -5x, -7x, -15x, -31x from GIAIN = 3'b001 to 3'b110 respectively.
 * |[20]    |OUTOE     |OP Amplifier 1 Output Enable Bit
 * |        |          |0 = OP Amplifier 1 Output floating.
 * |        |          |1 = OP Amplifier 1 Output to PAD.
 * |[23]    |LMODE     |Low Power Mode Enable Bit
 * |        |          |0= OPA operates at normal mode.
 * |        |          |1= OPA operates at low power mode.
 * |[25:24] |SWSEL     |OP Amplifier Resistor End Switch Selection
 * |        |          |00 = input channel from OPA1 negative channel 0 (OPA1_N0) is enabled.
 * |        |          |01 = input channel connected to AVSS is enabled.
 * |        |          |10 = input channel connected to OPA0_int_OUT is enabled.
 * |        |          |11 = Reserved.
 * @var OPA_T::MODE2
 * Offset: 0x0C  OP Amplifier Mode Control Register2
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[4:0]   |POSCHEN   |OP Amplifier 2 Positvie Input Channel Enable Bit
 * |        |          |00000 = disable all positive input channel.
 * |        |          |00001 = OPA2_P0.
 * |        |          |00010 = OPA2_P1.
 * |        |          |00100 = DAC0_OUT.
 * |        |          |01000 = DAC1_OUT.
 * |        |          |10000 = OPA1_int_OUT.
 * |        |          |Note 1: OPA1_int_OUT means the input from OPA1 internal output
 * |        |          |Note 2: For example: if POSCHEN is selected as 00011, PGA2_P0 and PGA2_P1 are both enabled.
 * |[11:8]  |NEGCHEN   |OP Amplifier 2 Negative Input Channel Enable Bit
 * |        |          |0000 = disable all negative input channel.
 * |        |          |0001 = OPA2_N0.
 * |        |          |0010 = OPA2_N1.
 * |        |          |0100 = OPA1_int_OUT.
 * |        |          |1000 = Vf_int.
 * |        |          |Note 1: OPA1_int_OUT means the input from OPA1 internal output
 * |        |          |Note 2: For example: if NEGCHEN is selected as 0011, PGA2_N0 and PGA2_N1 are both enabled.
 * |[18:16] |GAIN      |OP Amplifier 2 Gain Control
 * |        |          |3'b000: normal mode
 * |        |          |3'b001: Gain x1
 * |        |          |3'b010: Gain x2
 * |        |          |3'b011: Gain x4
 * |        |          |3'b100: Gain x8
 * |        |          |3'b101: Gain x16
 * |        |          |3'b110: Gian x32
 * |        |          |3'b111: Reserved
 * |        |          |Note: when inverting gain setting, these bits represent gain -1x, -3x, -5x, -7x, -15x, -31x from GIAIN = 3'b001 to 3'b110 respectively.
 * |[20]    |OUTOE     |OP Amplifier 2 Output Enable Bit
 * |        |          |0 = OP Amplifier 2 Output floating.
 * |        |          |1 = OP Amplifier 2 Output to PAD.
 * |[23]    |LMODE     |Low Power Mode Enable Bit
 * |        |          |0= OPA operate at normal mode.
 * |        |          |1= OPA operate at low power mode.
 * |[25:24] |SWSEL     |OP Amplifier Resistor End Switch Selection
 * |        |          |00 = input channel from OPA2 negative channel 0 (OPA2_N0) is enabled.
 * |        |          |01 = input channel connected to AVSS is enabled.
 * |        |          |10 = input channel connected to OPA1_int_OUT is enabled.
 * |        |          |11 = Reserved.
 * @var OPA_T::STATUS
 * Offset: 0x20  OP Amplifier Status Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |OPDO0     |OP Amplifier 0 Digital Output
 * |        |          |Synchronized to the APB clock to allow reading by software
 * |        |          |Cleared when the Schmitt trigger buffer is disabled (OPDOEN0 = 0)
 * |[1]     |OPDO1     |OP Amplifier 1 Digital Output
 * |        |          |Synchronized to the APB clock to allow reading by software
 * |        |          |Cleared when the Schmitt trigger buffer is disabled (OPDOEN1 = 0)
 * |[2]     |OPDO2     |OP Amplifier 2 Digital Output
 * |        |          |Synchronized to the APB clock to allow reading by software
 * |        |          |Cleared when the Schmitt trigger buffer is disabled (OPDOEN2 = 0)
 * |[4]     |OPDOIF0   |OP Amplifier 0 Schmitt Trigger Digital Output Interrupt Flag
 * |        |          |If chip is not in power-down mode, OPDOIF0 interrupt flag is set by hardware whenever the OP amplifier 0 Schmitt trigger non-inverting buffer digital output changes state
 * |        |          |If chip is in power-down mode, OPDOIF0 interrupt flag is set by hardware whenever the OP amplifier 0 Schmitt trigger non-inverting buffer digital output changes state and OPDOWKE0 is set to 1
 * |        |          |This bit is cleared by writing 1 to it.
 * |[5]     |OPDOIF1   |OP Amplifier 1 Schmitt Trigger Digital Output Interrupt Flag
 * |        |          |If chip is not in power-down mode, OPDOIF1 interrupt flag is set by hardware whenever the OP amplifier 1 Schmitt trigger non-inverting buffer digital output changes state
 * |        |          |If chip is in power-down mode, OPDOIF1 interrupt flag is set by hardware whenever the OP amplifier 1 Schmitt trigger non-inverting buffer digital output changes state and OPDOWKE1 is set to 1
 * |        |          |This bit is cleared by writing 1 to it.
 * |[6]     |OPDOIF2   |OP Amplifier 2 Schmitt Trigger Digital Output Interrupt Flag
 * |        |          |If chip is not in power-down mode, OPDOIF2 interrupt flag is set by hardware whenever the OP amplifier 2 Schmitt trigger non-inverting buffer digital output changes state
 * |        |          |If chip is in power-down mode, OPDOIF2 interrupt flag is set by hardware whenever the OP amplifier 2 Schmitt trigger non-inverting buffer digital output changes state and OPDOWKE2 is set to 1
 * |        |          |This bit is cleared by writing 1 to it.
 * |[8]     |OPDOWKF0  |OP Amplifier 0 Schmitt Trigger Digital Output Wake-Up Flag
 * |        |          |OPDOWKF0 wake-up flag is set by hardware whenever OPDOWKE0 is set to 1 and the OP amplifier 0 Schmitt trigger non-inverting buffer digital output changes state in chip power-down mode
 * |        |          |This bit is cleared by writing 1 to it.
 * |[9]     |OPDOWKF1  |OP Amplifier 1 Schmitt Trigger Digital Output Wake-Up Flag
 * |        |          |OPDOWKF1 wake-up flag is set by hardware whenever OPDOWKE1 is set to 1 and the OP amplifier 1 Schmitt trigger non-inverting buffer digital output changes state in chip power-down mode
 * |        |          |This bit is cleared by writing 1 to it.
 * |[10]    |OPDOWKF2  |OP Amplifier 2 Schmitt Trigger Digital Output Wake-Up Flag
 * |        |          |OPDOWKF2 wake-up flag is set by hardware whenever OPDOWKE2 is set to 1 and the OP amplifier 2 Schmitt trigger non-inverting buffer digital output changes state in chip power-down mode
 * |        |          |This bit is cleared by writing 1 to it.
 * @var OPA_T::CALCTL
 * Offset: 0x24  OP Amplifier Calibration Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |CALTRG0   |OP Amplifier 0 Calibration Trigger Bit
 * |        |          |0 = Calibration is stopped.
 * |        |          |1 = Calibration is triggered.
 * |        |          |Note 1: Before this bit is enabled, OPEN0 should be set and the internal high speed RC oscillator (HIRC) should be enabled in advance.
 * |        |          |Note 2: Hardware will auto clear this bit when calibration is finished.
 * |[1]     |CALTRG1   |OP Amplifier 1 Calibration Trigger Bit
 * |        |          |0 = Calibration is stopped.
 * |        |          |1 = Calibration is triggered.
 * |        |          |Note 1: Before this bit is enabled, OPEN1 should be set and the internal high speed RC oscillator (HIRC) should be enabled in advance.
 * |        |          |Note 2: Hardware will auto clear this bit when calibration is finished.
 * |[2]     |CALTRG2   |OP Amplifier 2 Calibration Trigger Bit
 * |        |          |0 = Calibration is stopped,.
 * |        |          |1 = Calibration is triggered.
 * |        |          |Note 1: Before this bit is enabled, OPEN2 should be set and the internal high speed RC oscillator (HIRC) should be enabled in advance.
 * |        |          |Note 2: Hardware will auto clear this bit when calibration is finished.
 * |[5:4]   |CALCLK0   |OP Amplifier 0 Calibration Clock Rate Selection
 * |        |          |00 = 1 kHz.
 * |        |          |01 = Reserved.
 * |        |          |10 = Reserved.
 * |        |          |11 = Reserved.
 * |[7:6]   |CALCLK1   |OP Amplifier 1 Calibration Clock Rate Selection
 * |        |          |00 = 1 kHz.
 * |        |          |01 = Reserved.
 * |        |          |10 = Reserved.
 * |        |          |11 = Reserved.
 * |[9:8]   |CALCLK2   |OP Amplifier 2 Calibration Clock Rate Selection
 * |        |          |00 = 1 kHz.
 * |        |          |01 = Reserved.
 * |        |          |10 = Reserved.
 * |        |          |11 = Reserved.
 * |[16]    |CALRVS0   |OPA0 Calibration Reference Voltage Selection
 * |        |          |0 = VREF is AVDD.
 * |        |          |1 = VREF from high vcm to low vcm.
 * |[17]    |CALRVS1   |OPA1 Calibration Reference Voltage Selection
 * |        |          |0 = VREF is AVDD.
 * |        |          |1 = VREF from high vcm to low vcm.
 * |[18]    |CALRVS2   |OPA2 Calibration Reference Voltage Selection
 * |        |          |0 = VREF is AVDD.
 * |        |          |1 = VREF from high vcm to low vcm.
 * |[24]    |TRIMOPT0  |OPA0 Calibration Trim Option
 * |        |          |0 = Calibration trim from NMOS to PMOS
 * |        |          |1 = Calibration trim from PMOS to NMOS
 * |        |          |Note: This option is only effective when CALRVS0 = 0 (OPA_CALCTL[4])
 * |[25]    |TRIMOPT1  |OPA1 Calibration Trim Option
 * |        |          |0 = Calibration trim from NMOS to PMOS.
 * |        |          |1 = Calibration trim from PMOS to NMOS.
 * |        |          |Note: This option is only effective when CALRVS1 = 0 (OPA_CALCTL[5])
 * |[26]    |TRIMOPT2  |OPA2 Calibration Trim Option
 * |        |          |0 = Calibration trim from NMOS to PMOS.
 * |        |          |1 = Calibration trim from PMOS to NMOS.
 * |        |          |Note: This option is only effective when CALRVS2 = 0 (OPA_CALCTL[6])
 * @var OPA_T::CALST
 * Offset: 0x28  OP Amplifier Calibration Status Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |DONE0     |OP Amplifier 0 Calibration Done Status
 * |        |          |0 = Calibrating.
 * |        |          |1 = Calibration Done.
 * |[1]     |CALNS0    |OP Amplifier 0 Calibration Result Status for NMOS
 * |        |          |0 = Pass.
 * |        |          |1 = Fail.
 * |[2]     |CALPS0    |OP Amplifier 0 Calibration Result Status for PMOS
 * |        |          |0 = Pass.
 * |        |          |1 = Fail.
 * |[4]     |DONE1     |OP Amplifier 1 Calibration Done Status
 * |        |          |0 = Calibrating.
 * |        |          |1 = Calibration Done.
 * |[5]     |CALNS1    |OP Amplifier 1 Calibration Result Status for NMOS
 * |        |          |0 = Pass.
 * |        |          |1 = Fail.
 * |[6]     |CALPS1    |OP Amplifier 1 Calibration Result Status for PMOS
 * |        |          |0 = Pass.
 * |        |          |1 = Fail.
 * |[8]     |DONE2     |OP Amplifier 2 Calibration Done Status
 * |        |          |0 = Calibrating.
 * |        |          |1 = Calibration Done.
 * |[9]     |CALNS2    |OP Amplifier 2 Calibration Result Status for NMOS
 * |        |          |0 = Pass.
 * |        |          |1 = Fail.
 * |[10]    |CALPS2    |OP Amplifier 2 Calibration Result Status for PMOS
 * |        |          |0 = Pass.
 * |        |          |1 = Fail.
 */
    __IO uint32_t CTL;                   /*!< [0x0000] OP Amplifier Control Register                                    */
    __IO uint32_t MODE0;                 /*!< [0x0004] OP Amplifier Mode Control Register0                              */
    __IO uint32_t MODE1;                 /*!< [0x0008] OP Amplifier Mode Control Register1                              */
    __IO uint32_t MODE2;                 /*!< [0x000c] OP Amplifier Mode Control Register2                              */
    __I  uint32_t RESERVE0[4];
    __IO uint32_t STATUS;                /*!< [0x0020] OP Amplifier Status Register                                     */
    __IO uint32_t CALCTL;                /*!< [0x0024] OP Amplifier Calibration Control Register                        */
    __I  uint32_t CALST;                 /*!< [0x0028] OP Amplifier Calibration Status Register                         */

} OPA_T;

/**
    @addtogroup OPA_CONST OPA Bit Field Definition
    Constant Definitions for OPA Controller
@{ */

#define OPA_CTL_OPEN0_Pos                (0)                                               /*!< OPA_T::CTL: OPEN0 Position             */
#define OPA_CTL_OPEN0_Msk                (0x1ul << OPA_CTL_OPEN0_Pos)                      /*!< OPA_T::CTL: OPEN0 Mask                 */

#define OPA_CTL_OPEN1_Pos                (1)                                               /*!< OPA_T::CTL: OPEN1 Position             */
#define OPA_CTL_OPEN1_Msk                (0x1ul << OPA_CTL_OPEN1_Pos)                      /*!< OPA_T::CTL: OPEN1 Mask                 */

#define OPA_CTL_OPEN2_Pos                (2)                                               /*!< OPA_T::CTL: OPEN2 Position             */
#define OPA_CTL_OPEN2_Msk                (0x1ul << OPA_CTL_OPEN2_Pos)                      /*!< OPA_T::CTL: OPEN2 Mask                 */

#define OPA_CTL_OPDOEN0_Pos              (4)                                               /*!< OPA_T::CTL: OPDOEN0 Position           */
#define OPA_CTL_OPDOEN0_Msk              (0x1ul << OPA_CTL_OPDOEN0_Pos)                    /*!< OPA_T::CTL: OPDOEN0 Mask               */

#define OPA_CTL_OPDOEN1_Pos              (5)                                               /*!< OPA_T::CTL: OPDOEN1 Position           */
#define OPA_CTL_OPDOEN1_Msk              (0x1ul << OPA_CTL_OPDOEN1_Pos)                    /*!< OPA_T::CTL: OPDOEN1 Mask               */

#define OPA_CTL_OPDOEN2_Pos              (6)                                               /*!< OPA_T::CTL: OPDOEN2 Position           */
#define OPA_CTL_OPDOEN2_Msk              (0x1ul << OPA_CTL_OPDOEN2_Pos)                    /*!< OPA_T::CTL: OPDOEN2 Mask               */

#define OPA_CTL_OPDOIEN0_Pos             (8)                                               /*!< OPA_T::CTL: OPDOIEN0 Position          */
#define OPA_CTL_OPDOIEN0_Msk             (0x1ul << OPA_CTL_OPDOIEN0_Pos)                   /*!< OPA_T::CTL: OPDOIEN0 Mask              */

#define OPA_CTL_OPDOIEN1_Pos             (9)                                               /*!< OPA_T::CTL: OPDOIEN1 Position          */
#define OPA_CTL_OPDOIEN1_Msk             (0x1ul << OPA_CTL_OPDOIEN1_Pos)                   /*!< OPA_T::CTL: OPDOIEN1 Mask              */

#define OPA_CTL_OPDOIEN2_Pos             (10)                                              /*!< OPA_T::CTL: OPDOIEN2 Position          */
#define OPA_CTL_OPDOIEN2_Msk             (0x1ul << OPA_CTL_OPDOIEN2_Pos)                   /*!< OPA_T::CTL: OPDOIEN2 Mask              */

#define OPA_CTL_OPDOWKE0_Pos             (12)                                              /*!< OPA_T::CTL: OPDOWKE0 Position          */
#define OPA_CTL_OPDOWKE0_Msk             (0x1ul << OPA_CTL_OPDOWKE0_Pos)                   /*!< OPA_T::CTL: OPDOWKE0 Mask              */

#define OPA_CTL_OPDOWKE1_Pos             (13)                                              /*!< OPA_T::CTL: OPDOWKE1 Position          */
#define OPA_CTL_OPDOWKE1_Msk             (0x1ul << OPA_CTL_OPDOWKE1_Pos)                   /*!< OPA_T::CTL: OPDOWKE1 Mask              */

#define OPA_CTL_OPDOWKE2_Pos             (14)                                              /*!< OPA_T::CTL: OPDOWKE2 Position          */
#define OPA_CTL_OPDOWKE2_Msk             (0x1ul << OPA_CTL_OPDOWKE2_Pos)                   /*!< OPA_T::CTL: OPDOWKE2 Mask              */

#define OPA_MODE_POSCHEN_Pos            (0)                                         /*!< OPA_T::MODE0: POSCHEN Position             */
#define OPA_MODE_POSCHEN_Msk            (0x1fUL << OPA_MODE_POSCHEN_Pos)           /*!< OPA_T::MODE0: POSCHEN Mask                 */

#define OPA_MODE_NEGCHEN_Pos            (8)                                         /*!< OPA_T::MODE0: NEGCHEN Position             */
#define OPA_MODE_NEGCHEN_Msk            (0xfUL << OPA_MODE_NEGCHEN_Pos)            /*!< OPA_T::MODE0: NEGCHEN Mask                 */

#define OPA_MODE_GAIN_Pos               (16)                                        /*!< OPA_T::MODE0: GAIN Position                */
#define OPA_MODE_GAIN_Msk               (0x7UL << OPA_MODE_GAIN_Pos)               /*!< OPA_T::MODE0: GAIN Mask                    */

#define OPA_MODE_OUTOE_Pos              (20)                                        /*!< OPA_T::MODE0: OUTOE Position               */
#define OPA_MODE_OUTOE_Msk              (0x1UL << OPA_MODE_OUTOE_Pos)              /*!< OPA_T::MODE0: OUTOE Mask                   */

#define OPA_MODE_LMODE_Pos              (23)                                        /*!< OPA_T::MODE0: LMODE Position               */
#define OPA_MODE_LMODE_Msk              (0x1UL << OPA_MODE_LMODE_Pos)              /*!< OPA_T::MODE0: LMODE Mask                   */

#define OPA_MODE_SWSEL_Pos              (24)                                        /*!< OPA_T::MODE0: SWSEL Position               */
#define OPA_MODE_SWSEL_Msk              (0x3UL << OPA_MODE_SWSEL_Pos)              /*!< OPA_T::MODE0: SWSEL Mask                   */

#define OPA_STATUS_OPDO0_Pos             (0)                                               /*!< OPA_T::STATUS: OPDO0 Position          */
#define OPA_STATUS_OPDO0_Msk             (0x1ul << OPA_STATUS_OPDO0_Pos)                   /*!< OPA_T::STATUS: OPDO0 Mask              */

#define OPA_STATUS_OPDO1_Pos             (1)                                               /*!< OPA_T::STATUS: OPDO1 Position          */
#define OPA_STATUS_OPDO1_Msk             (0x1ul << OPA_STATUS_OPDO1_Pos)                   /*!< OPA_T::STATUS: OPDO1 Mask              */

#define OPA_STATUS_OPDO2_Pos             (2)                                               /*!< OPA_T::STATUS: OPDO2 Position          */
#define OPA_STATUS_OPDO2_Msk             (0x1ul << OPA_STATUS_OPDO2_Pos)                   /*!< OPA_T::STATUS: OPDO2 Mask              */

#define OPA_STATUS_OPDOIF0_Pos           (4)                                               /*!< OPA_T::STATUS: OPDOIF0 Position        */
#define OPA_STATUS_OPDOIF0_Msk           (0x1ul << OPA_STATUS_OPDOIF0_Pos)                 /*!< OPA_T::STATUS: OPDOIF0 Mask            */

#define OPA_STATUS_OPDOIF1_Pos           (5)                                               /*!< OPA_T::STATUS: OPDOIF1 Position        */
#define OPA_STATUS_OPDOIF1_Msk           (0x1ul << OPA_STATUS_OPDOIF1_Pos)                 /*!< OPA_T::STATUS: OPDOIF1 Mask            */

#define OPA_STATUS_OPDOIF2_Pos           (6)                                               /*!< OPA_T::STATUS: OPDOIF2 Position        */
#define OPA_STATUS_OPDOIF2_Msk           (0x1ul << OPA_STATUS_OPDOIF2_Pos)                 /*!< OPA_T::STATUS: OPDOIF2 Mask            */

#define OPA_STATUS_OPDOWKF0_Pos          (8)                                               /*!< OPA_T::STATUS: OPDOWKF0 Position       */
#define OPA_STATUS_OPDOWKF0_Msk          (0x1ul << OPA_STATUS_OPDOWKF0_Pos)                /*!< OPA_T::STATUS: OPDOWKF0 Mask           */

#define OPA_STATUS_OPDOWKF1_Pos          (9)                                               /*!< OPA_T::STATUS: OPDOWKF1 Position       */
#define OPA_STATUS_OPDOWKF1_Msk          (0x1ul << OPA_STATUS_OPDOWKF1_Pos)                /*!< OPA_T::STATUS: OPDOWKF1 Mask           */

#define OPA_STATUS_OPDOWKF2_Pos          (10)                                              /*!< OPA_T::STATUS: OPDOWKF2 Position       */
#define OPA_STATUS_OPDOWKF2_Msk          (0x1ul << OPA_STATUS_OPDOWKF2_Pos)                /*!< OPA_T::STATUS: OPDOWKF2 Mask           */

#define OPA_CALCTL_CALTRG0_Pos           (0)                                               /*!< OPA_T::CALCTL: CALTRG0 Position        */
#define OPA_CALCTL_CALTRG0_Msk           (0x1ul << OPA_CALCTL_CALTRG0_Pos)                 /*!< OPA_T::CALCTL: CALTRG0 Mask            */

#define OPA_CALCTL_CALTRG1_Pos           (1)                                               /*!< OPA_T::CALCTL: CALTRG1 Position        */
#define OPA_CALCTL_CALTRG1_Msk           (0x1ul << OPA_CALCTL_CALTRG1_Pos)                 /*!< OPA_T::CALCTL: CALTRG1 Mask            */

#define OPA_CALCTL_CALTRG2_Pos           (2)                                               /*!< OPA_T::CALCTL: CALTRG2 Position        */
#define OPA_CALCTL_CALTRG2_Msk           (0x1ul << OPA_CALCTL_CALTRG2_Pos)                 /*!< OPA_T::CALCTL: CALTRG2 Mask            */

#define OPA_CALCTL_CALCLK0_Pos           (4)                                               /*!< OPA_T::CALCTL: CALCLK0 Position        */
#define OPA_CALCTL_CALCLK0_Msk           (0x3ul << OPA_CALCTL_CALCLK0_Pos)                 /*!< OPA_T::CALCTL: CALCLK0 Mask            */

#define OPA_CALCTL_CALCLK1_Pos           (6)                                               /*!< OPA_T::CALCTL: CALCLK1 Position        */
#define OPA_CALCTL_CALCLK1_Msk           (0x3ul << OPA_CALCTL_CALCLK1_Pos)                 /*!< OPA_T::CALCTL: CALCLK1 Mask            */

#define OPA_CALCTL_CALCLK2_Pos           (8)                                               /*!< OPA_T::CALCTL: CALCLK2 Position        */
#define OPA_CALCTL_CALCLK2_Msk           (0x3ul << OPA_CALCTL_CALCLK2_Pos)                 /*!< OPA_T::CALCTL: CALCLK2 Mask            */

#define OPA_CALCTL_CALRVS0_Pos           (16)                                              /*!< OPA_T::CALCTL: CALRVS0 Position        */
#define OPA_CALCTL_CALRVS0_Msk           (0x1ul << OPA_CALCTL_CALRVS0_Pos)                 /*!< OPA_T::CALCTL: CALRVS0 Mask            */

#define OPA_CALCTL_CALRVS1_Pos           (17)                                              /*!< OPA_T::CALCTL: CALRVS1 Position        */
#define OPA_CALCTL_CALRVS1_Msk           (0x1ul << OPA_CALCTL_CALRVS1_Pos)                 /*!< OPA_T::CALCTL: CALRVS1 Mask            */

#define OPA_CALCTL_CALRVS2_Pos           (18)                                              /*!< OPA_T::CALCTL: CALRVS2 Position        */
#define OPA_CALCTL_CALRVS2_Msk           (0x1ul << OPA_CALCTL_CALRVS2_Pos)                 /*!< OPA_T::CALCTL: CALRVS2 Mask            */

#define OPA_CALCTL_TRIMOPT0_Pos          (24)                                              /*!< OPA_T::CALCTL: TRIMOPT0 Position       */
#define OPA_CALCTL_TRIMOPT0_Msk          (0x1ul << OPA_CALCTL_TRIMOPT0_Pos)                /*!< OPA_T::CALCTL: TRIMOPT0 Mask           */

#define OPA_CALCTL_TRIMOPT1_Pos          (25)                                              /*!< OPA_T::CALCTL: TRIMOPT1 Position       */
#define OPA_CALCTL_TRIMOPT1_Msk          (0x1ul << OPA_CALCTL_TRIMOPT1_Pos)                /*!< OPA_T::CALCTL: TRIMOPT1 Mask           */

#define OPA_CALCTL_TRIMOPT2_Pos          (26)                                              /*!< OPA_T::CALCTL: TRIMOPT2 Position       */
#define OPA_CALCTL_TRIMOPT2_Msk          (0x1ul << OPA_CALCTL_TRIMOPT2_Pos)                /*!< OPA_T::CALCTL: TRIMOPT2 Mask           */

#define OPA_CALST_DONE0_Pos              (0)                                               /*!< OPA_T::CALST: DONE0 Position           */
#define OPA_CALST_DONE0_Msk              (0x1ul << OPA_CALST_DONE0_Pos)                    /*!< OPA_T::CALST: DONE0 Mask               */

#define OPA_CALST_CALNS0_Pos             (1)                                               /*!< OPA_T::CALST: CALNS0 Position          */
#define OPA_CALST_CALNS0_Msk             (0x1ul << OPA_CALST_CALNS0_Pos)                   /*!< OPA_T::CALST: CALNS0 Mask              */

#define OPA_CALST_CALPS0_Pos             (2)                                               /*!< OPA_T::CALST: CALPS0 Position          */
#define OPA_CALST_CALPS0_Msk             (0x1ul << OPA_CALST_CALPS0_Pos)                   /*!< OPA_T::CALST: CALPS0 Mask              */

#define OPA_CALST_DONE1_Pos              (4)                                               /*!< OPA_T::CALST: DONE1 Position           */
#define OPA_CALST_DONE1_Msk              (0x1ul << OPA_CALST_DONE1_Pos)                    /*!< OPA_T::CALST: DONE1 Mask               */

#define OPA_CALST_CALNS1_Pos             (5)                                               /*!< OPA_T::CALST: CALNS1 Position          */
#define OPA_CALST_CALNS1_Msk             (0x1ul << OPA_CALST_CALNS1_Pos)                   /*!< OPA_T::CALST: CALNS1 Mask              */

#define OPA_CALST_CALPS1_Pos             (6)                                               /*!< OPA_T::CALST: CALPS1 Position          */
#define OPA_CALST_CALPS1_Msk             (0x1ul << OPA_CALST_CALPS1_Pos)                   /*!< OPA_T::CALST: CALPS1 Mask              */

#define OPA_CALST_DONE2_Pos              (8)                                               /*!< OPA_T::CALST: DONE2 Position           */
#define OPA_CALST_DONE2_Msk              (0x1ul << OPA_CALST_DONE2_Pos)                    /*!< OPA_T::CALST: DONE2 Mask               */

#define OPA_CALST_CALNS2_Pos             (9)                                               /*!< OPA_T::CALST: CALNS2 Position          */
#define OPA_CALST_CALNS2_Msk             (0x1ul << OPA_CALST_CALNS2_Pos)                   /*!< OPA_T::CALST: CALNS2 Mask              */

#define OPA_CALST_CALPS2_Pos             (10)                                              /*!< OPA_T::CALST: CALPS2 Position          */
#define OPA_CALST_CALPS2_Msk             (0x1ul << OPA_CALST_CALPS2_Pos)                   /*!< OPA_T::CALST: CALPS2 Mask              */

/**@}*/ /* OPA_CONST */
/**@}*/ /* end of OPA register group */
/**@}*/ /* end of REGISTER group */

#if defined ( __CC_ARM   )
#pragma no_anon_unions
#endif

#endif /* __OPA_REG_H__ */
