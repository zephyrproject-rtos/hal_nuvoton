/**************************************************************************//**
 * @file     acmp_reg.h
 * @version  V1.00
 * @brief    ACMP register definition header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2025 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

#ifndef __ACMP_REG_H__
#define __ACMP_REG_H__

#if defined ( __CC_ARM   )
    #pragma anon_unions
#endif

/******************************************************************************/
/*                Device Specific Peripheral registers structures             */
/******************************************************************************/

/**
    @addtogroup REGISTER Control Register
    @{
*/

/**
    @addtogroup ACMP Analog Comparator Controller (ACMP)
    Memory Mapped Structure for ACMP Controller
    @{
*/

typedef struct
{


    /**
     * @var ACMP_T::CTL[2]
     * Offset: 0x00  Analog Comparator Control Register n
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ACMPEN    |ACMP Enable Bit
     * |        |          |0 = ACMP n Disabled.
     * |        |          |1 = ACMP n Enabled.
     * |[1]     |ACMPIE    |ACMP Interrupt Enable Bit
     * |        |          |0 = ACMPn interrupt Disabled.
     * |        |          |1 = ACMPn interrupt Enabled.
     * |        |          |Note:If WKEN (ACMP_CTLn[16]) is set to 1, the wake-up interrupt function will be enabled as well.
     * |[3]     |ACMPOINV  |ACMP Output Inverse
     * |        |          |0 = ACMPn output inverse Disabled.
     * |        |          |1 = ACMPn output inverse Enabled.
     * |[6:4]   |NEGSEL    |ACMP Negative Input Selection
     * |        |          |000 = ACMPn_N.
     * |        |          |001 = Internal comparator reference voltage (CRVn).
     * |        |          |010 = Band-gap voltage.
     * |        |          |011 = DAC0.
     * |        |          |Othe = Reserved.
     * |        |          |Note: NEGSEL must select 0x1 in calibration mode.
     * |[10:8]  |POSSEL    |ACMP Positive Input Selection
     * |        |          |000 = ACMPn_P0 pin.
     * |        |          |001 = ACMPn_P1 pin.
     * |        |          |010 = ACMPn_P2 pin.
     * |        |          |011 = ACMPn_P3 pin.
     * |        |          |Others = Reserved.
     * |[12]    |OUTSEL    |ACMP Output Select
     * |        |          |0 = ACMPn output to ACMPn_O pin is unfiltered ACMP output.
     * |        |          |1 = ACMPn output to ACMPn_O pin is from filter output.
     * |[15:13] |FILTSEL   |ACMP Output Filter Count Selection
     * |        |          |000 = Filter function is Disabled.
     * |        |          |001 = ACMPn output is sampled 1 consecutive PCLK.
     * |        |          |010 = ACMPn output is sampled 2 consecutive PCLKs.
     * |        |          |011 = ACMPn output is sampled 4 consecutive PCLKs.
     * |        |          |100 = ACMPn output is sampled 8 consecutive PCLKs.
     * |        |          |101 = ACMPn output is sampled 16 consecutive PCLKs.
     * |        |          |110 = ACMPn output is sampled 32 consecutive PCLKs.
     * |        |          |111 = ACMPn output is sampled 64 consecutive PCLKs.
     * |[16]    |WKEN      |Power-down Wake-up Enable Bit
     * |        |          |0 = Wake-up function Disabled.
     * |        |          |1 = Wake-up function Enabled.
     * |[17]    |WLATEN    |Window Latch Mode Enable Bit
     * |        |          |0 = Window Latch Mode Disabled.
     * |        |          |1 = Window Latch Mode Enabled.
     * |[18]    |WCMPSEL   |Window Compare Mode Selection
     * |        |          |0 = Window Compare Mode Disabled.
     * |        |          |1 = Window Compare Mode is Selected.
     * |[21:20] |FCLKDIV   |ACMP Output Filter Clock Divider
     * |        |          |00 = ACMPn output filter clock = PCLK.
     * |        |          |01 = ACMPn output filter clock = PCLK/2.
     * |        |          |10 = ACMPn output filter clock = PCLK/4.
     * |        |          |11 = Reserved.
     * |        |          |Note: Use FCLKDIV under the condition of FILTSEL = 3'h7, then set FCLKDIV to get the effect of filtering 128,256 consecutive PCLKs.
     * |[26:24] |HYSSEL    |Hysteresis Mode Selection
     * |        |          |000 = Hysteresis is 0mV.
     * |        |          |001 = Hysteresis is 10mV.
     * |        |          |010 = Hysteresis is 20mV.
     * |        |          |011 = Hysteresis is 30mV.
     * |        |          |100 = Hysteresis is 40mV.
     * |        |          |Others = Reserved.
     * |[29:28] |MODESEL   |ACMP Operating Mode Selection
     * |        |          |The register affects analog characteristics as operating current, input offset voltage, setup time, propagation delay, etc.
     * |        |          |00 = ACMPn operating mode0.
     * |        |          |01 = ACMPn operating mode1.
     * |        |          |10 = ACMPn operating mode2.
     * |        |          |11 = ACMPn operating mode3.
     * |        |          |Note: Please refer to Analog comparator (ACMP) of Analog characteristics in the Datasheet.
     * |[31:30] |INTPOL    |Interrupt Condition Polarity Selection
     * |        |          |ACMPIF0 will be set to 1 when ACMP output edge condition is detected.
     * |        |          |00 = Rising edge or falling edge.
     * |        |          |01 = Rising edge.
     * |        |          |10 = Falling edge.
     * |        |          |11 = Reserved.
     * @var ACMP_T::STATUS
     * Offset: 0x08  Analog Comparator Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ACMPIF0   |ACMP Interrupt Flag 0
     * |        |          |This bit is set by hardware when the edge condition defined by INTPOL (ACMP_CTL0[31:30]) is detected on ACMP0 output
     * |        |          |This will generate an interrupt if ACMPIE (ACMP_CTL0[1]) is set to 1.
     * |        |          |Note: Write 1 to clear this bit to 0.
     * |[1]     |ACMPIF1   |ACMP Interrupt Flag 1
     * |        |          |This bit is set by hardware when the edge condition defined by INTPOL (ACMP_CTL1[31:30]) is detected on ACMP1 output
     * |        |          |This will cause an interrupt if ACMPIE (ACMP_CTL1[1]) is set to 1.
     * |        |          |Note: Write 1 to clear this bit to 0.
     * |[4]     |ACMPO0    |ACMP Output 0
     * |        |          |Synchronized to the PCLK to allow reading by software
     * |        |          |Cleared when the ACMP0 is disabled, i.e
     * |        |          |ACMPEN (ACMP_CTL0[0]) is cleared to 0.
     * |[5]     |ACMPO1    |ACMP Output 1
     * |        |          |Synchronized to the PCLK to allow reading by software
     * |        |          |Cleared when the ACMP1 is disabled, i.e
     * |        |          |ACMPEN (ACMP_CTL1[0]) is cleared to 0.
     * |[8]     |WKIF0     |ACMP Power-down Wake-up Interrupt Flag 0
     * |        |          |This bit will be set to 1 when ACMP0 wake-up interrupt event occurs.
     * |        |          |0 = No power-down wake-up occurred.
     * |        |          |1 = Power-down wake-up occurred.
     * |        |          |Note: Write 1 to clear this bit to 0.
     * |[9]     |WKIF1     |ACMP Power-down Wake-up Interrupt Flag 1
     * |        |          |This bit will be set to 1 when ACMP1 wake-up interrupt event occurs.
     * |        |          |0 = No power-down wake-up occurred.
     * |        |          |1 = Power-down wake-up occurred.
     * |        |          |Note: Write 1 to clear this bit to 0.
     * |[12]    |ACMPS0    |ACMP Status 0
     * |        |          |Synchronized to the PCLK to allow reading by software
     * |        |          |Cleared when the ACMP 0 is disabled, i.e
     * |        |          |ACMPEN (ACMP_CTL0[0]) is cleared to 0.
     * |[13]    |ACMPS1    |ACMP Status 1
     * |        |          |Synchronized to the PCLK to allow reading by software
     * |        |          |Cleared when the ACMP1 is disabled, i.e
     * |        |          |ACMPEN (ACMP_CTL1[0]) is cleared to 0.
     * |[16]    |ACMPWO    |ACMP Window Output
     * |        |          |This bit shows the output status of window compare mode
     * |        |          |0 = The positive input voltage is outside the window.
     * |        |          |1 = The positive input voltage is in the window.
     * @var ACMP_T::VREF
     * Offset: 0x0C  Analog Comparator Reference Voltage Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |CRV0SEL   |ACMP Reference Voltage Setting 0
     * |        |          |Set CRV output voltage for ACMP0 negtive input.
     * |        |          |CRV0 = CRV0 source voltage * (CRV0SEL)/ 255.
     * |[8]     |CRV0EN    |CRV0 Enable Bit
     * |        |          |0 = CRV0 Disabled.
     * |        |          |1 = CRV0 Enabled.
     * |[9]     |CRV0SSEL  |CRV0 Source Voltage Selection
     * |        |          |0 = AVDD is selected as CRV0 source voltage.
     * |        |          |1 = The reference voltage defined by VREFCTL (SYS_VREFCTL[4:0]) register is selected as CRV0 source voltage.
     * |[15]    |CLAMPEN0  |ACMP Speed Up Function Enable Bit
     * |        |          |0 = ACMP0 Speed Up Function Disabled.
     * |        |          |1 = ACMP0 Speed Up Function Enabled.
     * |        |          |Note: ACMP speed up function only support MODESEL(ACMP_CTL0 [29:28])=2b’11 & 2b’10.
     * |[23:16] |CRV1SEL   |ACMP Reference Voltage Setting 1
     * |        |          |Set CRV output voltage for ACMP1 negtive input.
     * |        |          |CRV1 = CRV1 source voltage * (CRV1SEL)/ 255.
     * |[24]    |CRV1EN    |CRV1 Enable Bit
     * |        |          |0 = CRV1 Disabled.
     * |        |          |1 = CRV1 Enabled.
     * |[25]    |CRV1SSEL  |CRV1 Source Voltage Selection
     * |        |          |0 = AVDD is selected as CRV1 source voltage.
     * |        |          |1 = The reference voltage defined by VREFCTL (SYS_VREFCTL[4:0]) register is selected as CRV1 source voltage.
     * |[31]    |CLAMPEN1  |ACMP Speed Up Function Enable Bit
     * |        |          |0 = ACMP1 Speed Up Function Disabled.
     * |        |          |1 = ACMP1 Speed Up Function Enabled.
     * |        |          |Note: ACMP speed up function only support MODESEL(ACMP_CTL1 [29:28])=2b’11 & 2b’10.
     * @var ACMP_T::CALCTL
     * Offset: 0x10  Analog Comparator Calibration Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CALTRG0   |ACMP Calibration Trigger 0
     * |        |          |Set ACMP0 calibration trigger.
     * |        |          |0 = Calibration is stopped.
     * |        |          |1 = Calibration is triggered.
     * |        |          |Note 1: Before this bit is enabled, ACMPEN(ACMP_CTL0[0]) should be set and the internal high speed RC oscillator (HIRC) should be enabled in advance.
     * |        |          |Note 2: Hardware will automatically clear this bit when the next calibration is triggered by software.
     * |        |          |Note 3: If user must trigger calibration twice or more times, the second trigger has to wait at least 300us after the previous calibration is done.
     * |[1]     |CALTRG1   |ACMP Calibration Trigger 1
     * |        |          |Set ACMP1 calibration trigger.
     * |        |          |0 = Calibration is stopped.
     * |        |          |1 = Calibration is triggered.
     * |        |          |Note 1: Before this bit is enabled, ACMPEN(ACMP_CTL1[0]) should be set and the internal high speed RC oscillator (HIRC) should be enabled in advance.
     * |        |          |Note 2: Hardware will automatically clear this bit when the next calibration is triggered by software.
     * |        |          |Note 3: If user must trigger calibration twice or more times, the second trigger has to wait at least 300us after the previous calibration is done.
     * @var ACMP_T::CALSTS
     * Offset: 0x14  Analog Comparator Calibration Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |DONE0     |ACMP Calibration Done Status 0
     * |        |          |This bit will be set when ACMP0 calibration is done.
     * |        |          |0 = Calibrating.
     * |        |          |1 = Calibration done.
     * |        |          |Note: Write 1 to clear this bit to 0.
     * |[4]     |DONE1     |ACMP Calibration Done Status 1
     * |        |          |This bit will be set when ACMP1 calibration is done.
     * |        |          |0 = Calibrating.
     * |        |          |1 = Calibration done.
     * |        |          |Note: Write 1 to clear this bit to 0.
     */
    __IO uint32_t CTL[2];                /*!< [0x0000-0x0004] Analog Comparator 0/1 Control Register                    */
    __IO uint32_t STATUS;                /*!< [0x0008] Analog Comparator Status Register                                */
    __IO uint32_t VREF;                  /*!< [0x000c] Analog Comparator Reference Voltage Control Register             */
    __IO uint32_t CALCTL;                /*!< [0x0010] Analog Comparator Calibration Control Register                   */
    __IO uint32_t CALSTS;                /*!< [0x0014] Analog Comparator Calibration Status Register                    */

} ACMP_T;

/**
    @addtogroup ACMP_CONST ACMP Bit Field Definition
    Constant Definitions for ACMP Controller
@{ */

#define ACMP_CTL_ACMPEN_Pos              (0)                                               /*!< ACMP_T::CTL: ACMPEN Position           */
#define ACMP_CTL_ACMPEN_Msk              (0x1ul << ACMP_CTL_ACMPEN_Pos)                    /*!< ACMP_T::CTL: ACMPEN Mask               */

#define ACMP_CTL_ACMPIE_Pos              (1)                                               /*!< ACMP_T::CTL: ACMPIE Position           */
#define ACMP_CTL_ACMPIE_Msk              (0x1ul << ACMP_CTL_ACMPIE_Pos)                    /*!< ACMP_T::CTL: ACMPIE Mask               */

#define ACMP_CTL_ACMPOINV_Pos            (3)                                               /*!< ACMP_T::CTL: ACMPOINV Position         */
#define ACMP_CTL_ACMPOINV_Msk            (0x1ul << ACMP_CTL_ACMPOINV_Pos)                  /*!< ACMP_T::CTL: ACMPOINV Mask             */

#define ACMP_CTL_NEGSEL_Pos              (4)                                               /*!< ACMP_T::CTL: NEGSEL Position           */
#define ACMP_CTL_NEGSEL_Msk              (0x7ul << ACMP_CTL_NEGSEL_Pos)                    /*!< ACMP_T::CTL: NEGSEL Mask               */

#define ACMP_CTL_POSSEL_Pos              (8)                                               /*!< ACMP_T::CTL: POSSEL Position           */
#define ACMP_CTL_POSSEL_Msk              (0x7ul << ACMP_CTL_POSSEL_Pos)                    /*!< ACMP_T::CTL: POSSEL Mask               */

#define ACMP_CTL_OUTSEL_Pos              (12)                                              /*!< ACMP_T::CTL: OUTSEL Position           */
#define ACMP_CTL_OUTSEL_Msk              (0x1ul << ACMP_CTL_OUTSEL_Pos)                    /*!< ACMP_T::CTL: OUTSEL Mask               */

#define ACMP_CTL_FILTSEL_Pos             (13)                                              /*!< ACMP_T::CTL: FILTSEL Position          */
#define ACMP_CTL_FILTSEL_Msk             (0x7ul << ACMP_CTL_FILTSEL_Pos)                   /*!< ACMP_T::CTL: FILTSEL Mask              */

#define ACMP_CTL_WKEN_Pos                (16)                                              /*!< ACMP_T::CTL: WKEN Position             */
#define ACMP_CTL_WKEN_Msk                (0x1ul << ACMP_CTL_WKEN_Pos)                      /*!< ACMP_T::CTL: WKEN Mask                 */

#define ACMP_CTL_WLATEN_Pos              (17)                                              /*!< ACMP_T::CTL: WLATEN Position           */
#define ACMP_CTL_WLATEN_Msk              (0x1ul << ACMP_CTL_WLATEN_Pos)                    /*!< ACMP_T::CTL: WLATEN Mask               */

#define ACMP_CTL_WCMPSEL_Pos             (18)                                              /*!< ACMP_T::CTL: WCMPSEL Position          */
#define ACMP_CTL_WCMPSEL_Msk             (0x1ul << ACMP_CTL_WCMPSEL_Pos)                   /*!< ACMP_T::CTL: WCMPSEL Mask              */

#define ACMP_CTL_FCLKDIV_Pos             (20)                                              /*!< ACMP_T::CTL: FCLKDIV Position          */
#define ACMP_CTL_FCLKDIV_Msk             (0x3ul << ACMP_CTL_FCLKDIV_Pos)                   /*!< ACMP_T::CTL: FCLKDIV Mask              */

#define ACMP_CTL_HYSSEL_Pos              (24)                                              /*!< ACMP_T::CTL: HYSSEL Position           */
#define ACMP_CTL_HYSSEL_Msk              (0x7ul << ACMP_CTL_HYSSEL_Pos)                    /*!< ACMP_T::CTL: HYSSEL Mask               */

#define ACMP_CTL_MODESEL_Pos             (28)                                              /*!< ACMP_T::CTL: MODESEL Position          */
#define ACMP_CTL_MODESEL_Msk             (0x3ul << ACMP_CTL_MODESEL_Pos)                   /*!< ACMP_T::CTL: MODESEL Mask              */

#define ACMP_CTL_INTPOL_Pos              (30)                                              /*!< ACMP_T::CTL: INTPOL Position           */
#define ACMP_CTL_INTPOL_Msk              (0x3ul << ACMP_CTL_INTPOL_Pos)                    /*!< ACMP_T::CTL: INTPOL Mask               */

#define ACMP_STATUS_ACMPIF0_Pos          (0)                                               /*!< ACMP_T::STATUS: ACMPIF0 Position       */
#define ACMP_STATUS_ACMPIF0_Msk          (0x1ul << ACMP_STATUS_ACMPIF0_Pos)                /*!< ACMP_T::STATUS: ACMPIF0 Mask           */

#define ACMP_STATUS_ACMPIF1_Pos          (1)                                               /*!< ACMP_T::STATUS: ACMPIF1 Position       */
#define ACMP_STATUS_ACMPIF1_Msk          (0x1ul << ACMP_STATUS_ACMPIF1_Pos)                /*!< ACMP_T::STATUS: ACMPIF1 Mask           */

#define ACMP_STATUS_ACMPO0_Pos           (4)                                               /*!< ACMP_T::STATUS: ACMPO0 Position        */
#define ACMP_STATUS_ACMPO0_Msk           (0x1ul << ACMP_STATUS_ACMPO0_Pos)                 /*!< ACMP_T::STATUS: ACMPO0 Mask            */

#define ACMP_STATUS_ACMPO1_Pos           (5)                                               /*!< ACMP_T::STATUS: ACMPO1 Position        */
#define ACMP_STATUS_ACMPO1_Msk           (0x1ul << ACMP_STATUS_ACMPO1_Pos)                 /*!< ACMP_T::STATUS: ACMPO1 Mask            */

#define ACMP_STATUS_WKIF0_Pos            (8)                                               /*!< ACMP_T::STATUS: WKIF0 Position         */
#define ACMP_STATUS_WKIF0_Msk            (0x1ul << ACMP_STATUS_WKIF0_Pos)                  /*!< ACMP_T::STATUS: WKIF0 Mask             */

#define ACMP_STATUS_WKIF1_Pos            (9)                                               /*!< ACMP_T::STATUS: WKIF1 Position         */
#define ACMP_STATUS_WKIF1_Msk            (0x1ul << ACMP_STATUS_WKIF1_Pos)                  /*!< ACMP_T::STATUS: WKIF1 Mask             */

#define ACMP_STATUS_ACMPS0_Pos           (12)                                              /*!< ACMP_T::STATUS: ACMPS0 Position        */
#define ACMP_STATUS_ACMPS0_Msk           (0x1ul << ACMP_STATUS_ACMPS0_Pos)                 /*!< ACMP_T::STATUS: ACMPS0 Mask            */

#define ACMP_STATUS_ACMPS1_Pos           (13)                                              /*!< ACMP_T::STATUS: ACMPS1 Position        */
#define ACMP_STATUS_ACMPS1_Msk           (0x1ul << ACMP_STATUS_ACMPS1_Pos)                 /*!< ACMP_T::STATUS: ACMPS1 Mask            */

#define ACMP_STATUS_ACMPWO_Pos           (16)                                              /*!< ACMP_T::STATUS: ACMPWO Position        */
#define ACMP_STATUS_ACMPWO_Msk           (0x1ul << ACMP_STATUS_ACMPWO_Pos)                 /*!< ACMP_T::STATUS: ACMPWO Mask            */

#define ACMP_VREF_CRV0SEL_Pos            (0)                                               /*!< ACMP_T::VREF: CRV0SEL Position         */
#define ACMP_VREF_CRV0SEL_Msk            (0xfful << ACMP_VREF_CRV0SEL_Pos)                 /*!< ACMP_T::VREF: CRV0SEL Mask             */

#define ACMP_VREF_CRV0EN_Pos             (8)                                               /*!< ACMP_T::VREF: CRV0EN Position          */
#define ACMP_VREF_CRV0EN_Msk             (0x1ul << ACMP_VREF_CRV0EN_Pos)                   /*!< ACMP_T::VREF: CRV0EN Mask              */

#define ACMP_VREF_CRV0SSEL_Pos           (9)                                               /*!< ACMP_T::VREF: CRV0SSEL Position        */
#define ACMP_VREF_CRV0SSEL_Msk           (0x1ul << ACMP_VREF_CRV0SSEL_Pos)                 /*!< ACMP_T::VREF: CRV0SSEL Mask            */

#define ACMP_VREF_CLAMPEN0_Pos           (15)                                              /*!< ACMP_T::VREF: CLAMPEN0 Position        */
#define ACMP_VREF_CLAMPEN0_Msk           (0x1ul << ACMP_VREF_CLAMPEN0_Pos)                 /*!< ACMP_T::VREF: CLAMPEN0 Mask            */

#define ACMP_VREF_CRV1SEL_Pos            (16)                                              /*!< ACMP_T::VREF: CRV1SEL Position         */
#define ACMP_VREF_CRV1SEL_Msk            (0xfful << ACMP_VREF_CRV1SEL_Pos)                 /*!< ACMP_T::VREF: CRV1SEL Mask             */

#define ACMP_VREF_CRV1EN_Pos             (24)                                              /*!< ACMP_T::VREF: CRV1EN Position          */
#define ACMP_VREF_CRV1EN_Msk             (0x1ul << ACMP_VREF_CRV1EN_Pos)                   /*!< ACMP_T::VREF: CRV1EN Mask              */

#define ACMP_VREF_CRV1SSEL_Pos           (25)                                              /*!< ACMP_T::VREF: CRV1SSEL Position        */
#define ACMP_VREF_CRV1SSEL_Msk           (0x1ul << ACMP_VREF_CRV1SSEL_Pos)                 /*!< ACMP_T::VREF: CRV1SSEL Mask            */

#define ACMP_VREF_CLAMPEN1_Pos           (31)                                              /*!< ACMP_T::VREF: CLAMPEN1 Position        */
#define ACMP_VREF_CLAMPEN1_Msk           (0x1ul << ACMP_VREF_CLAMPEN1_Pos)                 /*!< ACMP_T::VREF: CLAMPEN1 Mask            */

#define ACMP_CALCTL_CALTRG0_Pos          (0)                                               /*!< ACMP_T::CALCTL: CALTRG0 Position       */
#define ACMP_CALCTL_CALTRG0_Msk          (0x1ul << ACMP_CALCTL_CALTRG0_Pos)                /*!< ACMP_T::CALCTL: CALTRG0 Mask           */

#define ACMP_CALCTL_CALTRG1_Pos          (1)                                               /*!< ACMP_T::CALCTL: CALTRG1 Position       */
#define ACMP_CALCTL_CALTRG1_Msk          (0x1ul << ACMP_CALCTL_CALTRG1_Pos)                /*!< ACMP_T::CALCTL: CALTRG1 Mask           */

#define ACMP_CALSTS_DONE0_Pos            (0)                                               /*!< ACMP_T::CALSTS: DONE0 Position         */
#define ACMP_CALSTS_DONE0_Msk            (0x1ul << ACMP_CALSTS_DONE0_Pos)                  /*!< ACMP_T::CALSTS: DONE0 Mask             */

#define ACMP_CALSTS_DONE1_Pos            (4)                                               /*!< ACMP_T::CALSTS: DONE1 Position         */
#define ACMP_CALSTS_DONE1_Msk            (0x1ul << ACMP_CALSTS_DONE1_Pos)                  /*!< ACMP_T::CALSTS: DONE1 Mask             */

/**@}*/ /* ACMP_CONST */
/**@}*/ /* end of ACMP register group */
/**@}*/ /* end of REGISTER group */

#if defined ( __CC_ARM   )
    #pragma no_anon_unions
#endif

#endif /* __ACMP_REG_H__ */
