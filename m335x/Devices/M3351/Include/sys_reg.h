/**************************************************************************//**
 * @file     sys_reg.h
 * @version  V1.00
 * @brief    SYS register definition header file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright (c) 2025 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __SYS_REG_H__
#define __SYS_REG_H__


#if defined ( __CC_ARM   )
    #pragma anon_unions
#endif

/******************************************************************************/
/*                Device Specific Peripheral registers structures             */
/******************************************************************************/

/** @addtogroup REGISTER Control Register

  @{

*/

/*---------------------- NMI Controller -------------------------*/
/**
    @addtogroup NMI NMI Controller(NMI)
    Memory Mapped Structure for NMI Controller
@{ */

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
     * |[1]     |IRCINT    |IRC TRIM NMI Source Enable (Write Protect)
     * |        |          |0 = IRC TRIM NMI source Disabled.
     * |        |          |1 = IRC TRIM NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[2]     |PWRWUINT  |Power-down Mode Wake-up NMI Source Enable (Write Protect)
     * |        |          |0 = Power-down mode wake-up NMI source Disabled.
     * |        |          |1 = Power-down mode wake-up NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[3]     |SRAME     |SRAM ECC Check Error NMI Source Enable (Write Protect)
     * |        |          |0 = SRAM ECC check error NMI source Disabled.
     * |        |          |1 = SRAM ECC check error NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[4]     |CLKFAIL   |Clock Fail Detected NMI Source Enable (Write Protect)
     * |        |          |0 = Clock fail detected interrupt NMI source Disabled.
     * |        |          |1 = Clock fail detected interrupt NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[5]     |FLASHE    |FLASH ECC Check Error NMI Source Enable (Write Protect)
     * |        |          |0 = FLASH ECC check error NMI source Disabled.
     * |        |          |1 = FLASH ECC check error NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[6]     |RTCINT    |RTC NMI Source Enable (Write Protect)
     * |        |          |0 = RTC NMI source Disabled.
     * |        |          |1 = RTC NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[8]     |EINT0     |External Interrupt from INT0 Pins NMI Source Enable (Write Protect)
     * |        |          |0 = External interrupt from INT0(PB.5) pins NMI source Disabled.
     * |        |          |1 = External interrupt from INT0(PB.5) pins NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[9]     |EINT1     |External Interrupt from INT1 Pins NMI Source Enable (Write Protect)
     * |        |          |0 = External interrupt from INT1(PB.4) pins NMI source Disabled.
     * |        |          |1 = External interrupt from INT1(PB.4) pins NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[10]    |EINT2     |External Interrupt from INT2 Pins NMI Source Enable (Write Protect)
     * |        |          |0 = External interrupt from INT2(PB.3) pins NMI source Disabled.
     * |        |          |1 = External interrupt from INT2(PB.3) pins NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[11]    |EINT3     |External Interrupt from INT3 Pins NMI Source Enable (Write Protect)
     * |        |          |0 = External interrupt from INT3(PB.2) pins NMI source Disabled.
     * |        |          |1 = External interrupt from INT3(PB.2) pins NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[12]    |EINT4     |External Interrupt from INT4 Pins NMI Source Enable (Write Protect)
     * |        |          |0 = External interrupt from INT4(PA.8) pins NMI source Disabled.
     * |        |          |1 = External interrupt from INT4(PA.8) pins NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[13]    |EINT5     |External Interrupt from INT5 Pins NMI Source Enable (Write Protect)
     * |        |          |0 = External interrupt from INT5(PD.12) pins NMI source Disabled.
     * |        |          |1 = External interrupt from INT5(PD.12) pins NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[14]    |EINT6     |External Interrupt from INT6 Pins NMI Source Enable (Write Protect)
     * |        |          |0 = External interrupt from INT6(PD.11) pins NMI source Disabled.
     * |        |          |1 = External interrupt from INT6(PD.11) pins NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[15]    |EINT7     |External Interrupt from INT7 Pins NMI Source Enable (Write Protect)
     * |        |          |0 = External interrupt from INT7(PD.10) pins NMI source Disabled.
     * |        |          |1 = External interrupt from INT7(PD.10) pins NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[16]    |UART0INT  |UART0 NMI Source Enable (Write Protect)
     * |        |          |0 = UART0 NMI source Disabled.
     * |        |          |1 = UART0 NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[17]    |UART1INT  |UART1 NMI Source Enable (Write Protect)
     * |        |          |0 = UART1 NMI source Disabled.
     * |        |          |1 = UART1 NMI source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[18]    |INTMUX    |NMI Multiplexer Source Enable (Write Protect)
     * |        |          |0 = NMI multiplexer source Disabled.
     * |        |          |1 = NMI multiplexer source Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var NMI_T::NMISTS
     * Offset: 0x04  NMI Source Interrupt Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |BODOUT    |BOD Interrupt Flag (Read Only)
     * |        |          |0 = BOD interrupt is deasserted.
     * |        |          |1 = BOD interrupt is asserted.
     * |[1]     |IRCINT    |IRC TRIM Interrupt Flag (Read Only)
     * |        |          |0 = IRC TRIM interrupt is deasserted.
     * |        |          |1 = IRC TRIM interrupt is asserted.
     * |[2]     |PWRWUINT  |Power-down Mode Wake-up Interrupt Flag (Read Only)
     * |        |          |0 = Power-down mode wake-up interrupt is deasserted.
     * |        |          |1 = Power-down mode wake-up interrupt is asserted.
     * |[3]     |SRAME     |SRAM ECC Check Error Interrupt Flag (Read Only)
     * |        |          |0 = SRAM ECC check error interrupt is deasserted.
     * |        |          |1 = SRAM ECC check error interrupt is asserted.
     * |[4]     |CLKFAIL   |Clock Fail Detected Interrupt Flag (Read Only)
     * |        |          |0 = Clock fail detected interrupt is deasserted.
     * |        |          |1 = Clock fail detected interrupt is asserted.
     * |[5]     |FLASHE    |FLASH ECC Check Error Interrupt Flag (Read Only)
     * |        |          |0 = FLASH ECC check error interrupt is deasserted.
     * |        |          |1 = FLASH ECC check error interrupt is asserted.
     * |[6]     |RTCINT    |RTC Interrupt Flag (Read Only)
     * |        |          |0 = RTC interrupt is deasserted.
     * |        |          |1 = RTC interrupt is asserted.
     * |[8]     |EINT0     |External Interrupt from INT0 Pins Interrupt Flag (Read Only)
     * |        |          |0 = External Interrupt from INT0(PB.5) interrupt is deasserted.
     * |        |          |1 = External Interrupt from INT0(PB.5) interrupt is asserted.
     * |[9]     |EINT1     |External Interrupt from INT1 Pins Interrupt Flag (Read Only)
     * |        |          |0 = External Interrupt from INT1(PB.4) interrupt is deasserted.
     * |        |          |1 = External Interrupt from INT1(PB.4) interrupt is asserted.
     * |[10]    |EINT2     |External Interrupt from INT2 Pins Interrupt Flag (Read Only)
     * |        |          |0 = External Interrupt from INT2(PB.3) interrupt is deasserted.
     * |        |          |1 = External Interrupt from INT2(PB.3) interrupt is asserted.
     * |[11]    |EINT3     |External Interrupt from INT3 Pins Interrupt Flag (Read Only)
     * |        |          |0 = External Interrupt from INT3(PB.2) interrupt is deasserted.
     * |        |          |1 = External Interrupt from INT3(PB.2) interrupt is asserted.
     * |[12]    |EINT4     |External Interrupt from INT4 Pins Interrupt Flag (Read Only)
     * |        |          |0 = External Interrupt from INT4(PA.8) interrupt is deasserted.
     * |        |          |1 = External Interrupt from INT4(PA.8) interrupt is asserted.
     * |[13]    |EINT5     |External Interrupt from INT5 Pins Interrupt Flag (Read Only)
     * |        |          |0 = External Interrupt from INT5(PD.12) interrupt is deasserted.
     * |        |          |1 = External Interrupt from INT5(PD.12) interrupt is asserted.
     * |[14]    |EINT6     |External Interrupt from INT6 Pins Interrupt Flag (Read Only)
     * |        |          |0 = External Interrupt from INT6(PD.11) interrupt is deasserted.
     * |        |          |1 = External Interrupt from INT6(PD.11) interrupt is asserted.
     * |[15]    |EINT7     |External Interrupt from INT7 Pins Interrupt Flag (Read Only)
     * |        |          |0 = External Interrupt from INT7(PD.10) interrupt is deasserted.
     * |        |          |1 = External Interrupt from INT7(PD.10) interrupt is asserted.
     * |[16]    |UART0_INT |UART0 Interrupt Flag (Read Only)
     * |        |          |0 = UART1 interrupt is deasserted.
     * |        |          |1 = UART1 interrupt is asserted.
     * |[17]    |UART1_INT |UART1 Interrupt Flag (Read Only)
     * |        |          |0 = UART1 interrupt is deasserted.
     * |        |          |1 = UART1 interrupt is asserted.
     * |[18]    |INTMUX    |NMI Multiple source Interrupt Flag (Read Only)
     * |        |          |0 = NMI Multiple source Interrupt is deasserted.
     * |        |          |1 = NMI Multiple source Interrupt is asserted.
     * @var NMI_T::NMIMSEL
     * Offset: 0x08  NMI Multiplexer Source Select Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |NMIMSEL   |NMI Multiplexer Source Selection
     * |        |          |This bit field is to select NMI interrupt INTMUX from one of IRQ.
     * |        |          |Note: Please refer to Table 1.1-10.
     */
    __IO uint32_t NMIEN;                 /*!< [0x0000] NMI Source Interrupt Enable Register                             */
    __I  uint32_t NMISTS;                /*!< [0x0004] NMI Source Interrupt Status Register                             */
    __IO uint32_t NMIMSEL;               /*!< [0x0008] NMI Multiplexer Source Select Control Register                   */

} NMI_T;

/**
    @addtogroup NMI_CONST NMI Bit Field Definition
    Constant Definitions for NMI Controller
@{ */

#define NMI_NMIEN_BODOUT_Pos             (0)                                               /*!< NMI_T::NMIEN: BODOUT Position          */
#define NMI_NMIEN_BODOUT_Msk             (0x1ul << NMI_NMIEN_BODOUT_Pos)                   /*!< NMI_T::NMIEN: BODOUT Mask              */

#define NMI_NMIEN_IRCINT_Pos             (1)                                               /*!< NMI_T::NMIEN: IRCINT Position          */
#define NMI_NMIEN_IRCINT_Msk             (0x1ul << NMI_NMIEN_IRCINT_Pos)                   /*!< NMI_T::NMIEN: IRCINT Mask              */

#define NMI_NMIEN_PWRWUINT_Pos           (2)                                               /*!< NMI_T::NMIEN: PWRWUINT Position        */
#define NMI_NMIEN_PWRWUINT_Msk           (0x1ul << NMI_NMIEN_PWRWUINT_Pos)                 /*!< NMI_T::NMIEN: PWRWUINT Mask            */

#define NMI_NMIEN_SRAME_Pos              (3)                                               /*!< NMI_T::NMIEN: SRAME Position           */
#define NMI_NMIEN_SRAME_Msk              (0x1ul << NMI_NMIEN_SRAME_Pos)                    /*!< NMI_T::NMIEN: SRAME Mask               */

#define NMI_NMIEN_CLKFAIL_Pos            (4)                                               /*!< NMI_T::NMIEN: CLKFAIL Position         */
#define NMI_NMIEN_CLKFAIL_Msk            (0x1ul << NMI_NMIEN_CLKFAIL_Pos)                  /*!< NMI_T::NMIEN: CLKFAIL Mask             */

#define NMI_NMIEN_FLASHE_Pos             (5)                                               /*!< NMI_T::NMIEN: FLASHE Position          */
#define NMI_NMIEN_FLASHE_Msk             (0x1ul << NMI_NMIEN_FLASHE_Pos)                   /*!< NMI_T::NMIEN: FLASHE Mask              */

#define NMI_NMIEN_RTCINT_Pos             (6)                                               /*!< NMI_T::NMIEN: RTCINT Position          */
#define NMI_NMIEN_RTCINT_Msk             (0x1ul << NMI_NMIEN_RTCINT_Pos)                   /*!< NMI_T::NMIEN: RTCINT Mask              */

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

#define NMI_NMIEN_EINT6_Pos              (14)                                              /*!< NMI_T::NMIEN: EINT6 Position           */
#define NMI_NMIEN_EINT6_Msk              (0x1ul << NMI_NMIEN_EINT6_Pos)                    /*!< NMI_T::NMIEN: EINT6 Mask               */

#define NMI_NMIEN_EINT7_Pos              (15)                                              /*!< NMI_T::NMIEN: EINT7 Position           */
#define NMI_NMIEN_EINT7_Msk              (0x1ul << NMI_NMIEN_EINT7_Pos)                    /*!< NMI_T::NMIEN: EINT7 Mask               */

#define NMI_NMIEN_UART0INT_Pos           (16)                                              /*!< NMI_T::NMIEN: UART0INT Position        */
#define NMI_NMIEN_UART0INT_Msk           (0x1ul << NMI_NMIEN_UART0INT_Pos)                 /*!< NMI_T::NMIEN: UART0INT Mask            */

#define NMI_NMIEN_UART1INT_Pos           (17)                                              /*!< NMI_T::NMIEN: UART1INT Position        */
#define NMI_NMIEN_UART1INT_Msk           (0x1ul << NMI_NMIEN_UART1INT_Pos)                 /*!< NMI_T::NMIEN: UART1INT Mask            */

#define NMI_NMIEN_INTMUX_Pos             (18)                                              /*!< NMI_T::NMIEN: INTMUX Position          */
#define NMI_NMIEN_INTMUX_Msk             (0x1ul << NMI_NMIEN_INTMUX_Pos)                   /*!< NMI_T::NMIEN: INTMUX Mask              */

#define NMI_NMISTS_BODOUT_Pos            (0)                                               /*!< NMI_T::NMISTS: BODOUT Position         */
#define NMI_NMISTS_BODOUT_Msk            (0x1ul << NMI_NMISTS_BODOUT_Pos)                  /*!< NMI_T::NMISTS: BODOUT Mask             */

#define NMI_NMISTS_IRCINT_Pos            (1)                                               /*!< NMI_T::NMISTS: IRCINT Position         */
#define NMI_NMISTS_IRCINT_Msk            (0x1ul << NMI_NMISTS_IRCINT_Pos)                  /*!< NMI_T::NMISTS: IRCINT Mask             */

#define NMI_NMISTS_PWRWUINT_Pos          (2)                                               /*!< NMI_T::NMISTS: PWRWUINT Position       */
#define NMI_NMISTS_PWRWUINT_Msk          (0x1ul << NMI_NMISTS_PWRWUINT_Pos)                /*!< NMI_T::NMISTS: PWRWUINT Mask           */

#define NMI_NMISTS_SRAME_Pos             (3)                                               /*!< NMI_T::NMISTS: SRAME Position          */
#define NMI_NMISTS_SRAME_Msk             (0x1ul << NMI_NMISTS_SRAME_Pos)                   /*!< NMI_T::NMISTS: SRAME Mask              */

#define NMI_NMISTS_CLKFAIL_Pos           (4)                                               /*!< NMI_T::NMISTS: CLKFAIL Position        */
#define NMI_NMISTS_CLKFAIL_Msk           (0x1ul << NMI_NMISTS_CLKFAIL_Pos)                 /*!< NMI_T::NMISTS: CLKFAIL Mask            */

#define NMI_NMISTS_FLASHE_Pos            (5)                                               /*!< NMI_T::NMISTS: FLASHE Position         */
#define NMI_NMISTS_FLASHE_Msk            (0x1ul << NMI_NMISTS_FLASHE_Pos)                  /*!< NMI_T::NMISTS: FLASHE Mask             */

#define NMI_NMISTS_RTCINT_Pos            (6)                                               /*!< NMI_T::NMISTS: RTCINT Position         */
#define NMI_NMISTS_RTCINT_Msk            (0x1ul << NMI_NMISTS_RTCINT_Pos)                  /*!< NMI_T::NMISTS: RTCINT Mask             */

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

#define NMI_NMISTS_EINT6_Pos             (14)                                              /*!< NMI_T::NMISTS: EINT6 Position          */
#define NMI_NMISTS_EINT6_Msk             (0x1ul << NMI_NMISTS_EINT6_Pos)                   /*!< NMI_T::NMISTS: EINT6 Mask              */

#define NMI_NMISTS_EINT7_Pos             (15)                                              /*!< NMI_T::NMISTS: EINT7 Position          */
#define NMI_NMISTS_EINT7_Msk             (0x1ul << NMI_NMISTS_EINT7_Pos)                   /*!< NMI_T::NMISTS: EINT7 Mask              */

#define NMI_NMISTS_UART0_INT_Pos         (16)                                              /*!< NMI_T::NMISTS: UART0_INT Position      */
#define NMI_NMISTS_UART0_INT_Msk         (0x1ul << NMI_NMISTS_UART0_INT_Pos)               /*!< NMI_T::NMISTS: UART0_INT Mask          */

#define NMI_NMISTS_UART1_INT_Pos         (17)                                              /*!< NMI_T::NMISTS: UART1_INT Position      */
#define NMI_NMISTS_UART1_INT_Msk         (0x1ul << NMI_NMISTS_UART1_INT_Pos)               /*!< NMI_T::NMISTS: UART1_INT Mask          */

#define NMI_NMISTS_INTMUX_Pos            (18)                                              /*!< NMI_T::NMISTS: INTMUX Position         */
#define NMI_NMISTS_INTMUX_Msk            (0x1ul << NMI_NMISTS_INTMUX_Pos)                  /*!< NMI_T::NMISTS: INTMUX Mask             */

#define NMI_NMIMSEL_NMIMSEL_Pos          (0)                                               /*!< NMI_T::NMIMSEL: NMIMSEL Position       */
#define NMI_NMIMSEL_NMIMSEL_Msk          (0xfful << NMI_NMIMSEL_NMIMSEL_Pos)               /*!< NMI_T::NMIMSEL: NMIMSEL Mask           */

/**@}*/ /* NMI_CONST */
/**@}*/ /* end of NMI register group */


/*---------------------- System Manger Controller -------------------------*/
/**
    @addtogroup SYS System Manger Controller(SYS)
    Memory Mapped Structure for SYS Controller
@{ */

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
     * |        |          |The nRESET pin reset flag is set by the "Reset Signal" from the nRESET pin to indicate the previous reset source.
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
     * |[3]     |LVRRF     |LVR Reset Flag
     * |        |          |The LVR reset flag is set by the "Reset Signal" from the Low Voltage Reset Controller to indicate the previous reset source.
     * |        |          |0 = No reset from LVR.
     * |        |          |1 = LVR controller had issued the reset signal to reset the system.
     * |        |          |Note: Write 1 to clear this bit to 0.
     * |[4]     |BODRF     |BOD Reset Flag
     * |        |          |The BOD reset flag is set by the "Reset Signal" from the Brown-Out Detector to indicate the previous reset source.
     * |        |          |0 = No reset from BOD.
     * |        |          |1 = The BOD had issued the reset signal to reset the system.
     * |        |          |Note: Write 1 to clear this bit to 0.
     * |[5]     |MCURF     |MCU Reset Flag
     * |        |          |The MCU reset flag is set by the "Reset Signal" from the Cortex-M33 Core to indicate the previous reset source.
     * |        |          |0 = No reset from Cortex-M33.
     * |        |          |1 = The Cortex-M33 had issued the reset signal to reset the system by writing 1 to the bit SYSRESETREQ(AIRCR[2], Application Interrupt and Reset Control Register, address = 0xE000ED0C) in system control registers of Cortex-M33 core.
     * |        |          |Note: Write 1 to clear this bit to 0.
     * |[6]     |HRESETRF  |HRESET Reset Flag
     * |        |          |The HRESET reset flag is set by the "Reset Signal" from the HRESET.
     * |        |          |0 = No reset from HRESET.
     * |        |          |1 = Reset from HRESET.
     * |        |          |Note 1: Write 1 to clear this bit to 0.
     * |        |          |Note 2: HRESET includes: POR, Reset Pin, LVR, BOD, WDT, WWDT, CPU lockup, CHIP and MCU reset.
     * |[7]     |CPURF     |CPU Reset Flag
     * |        |          |The CPU reset flag is set by hardware if software writes CPURST (SYS_IPRST0[1]) 1 to reset Cortex-M33 Core and Flash Memory Controller (FMC).
     * |        |          |0 = No reset from CPU.
     * |        |          |1 = The Cortex-M33 Core and FMC are reset by software setting CPURST to 1.
     * |        |          |Note: Write 1 to clear this bit to 0.
     * |[8]     |CPULKRF   |CPU Lockup Reset Flag
     * |        |          |0 = No reset from CPU lockup happened.
     * |        |          |1 = The Cortex-M33 lockup happened and chip is reset.
     * |        |          |Note 1: Write 1 to clear this bit to 0.
     * |        |          |Note 2: When CPU lockup happened under ICE is connected, this flag will set to 1 but chip will not reset.
     * @var SYS_T::IPRST0
     * Offset: 0x08  Peripheral Reset Control Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CHIPRST   |Chip One-shot Reset (Write Protect)
     * |        |          |Setting this bit will reset the whole chip, including Processor core and all peripherals, and this bit will automatically return to 0 after the 2 clock cycles.
     * |        |          |The CHIPRST is same as the POR reset, all the chip controllers are reset and the chip setting from Flash are also reload.
     * |        |          |About the difference between CHIPRST and SYSRESETREQ(AIRCR[2]), please refer to System Reset section.
     * |        |          |0 = Chip normal operation.
     * |        |          |1 = Chip one-shot reset.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[1]     |CPURST    |Processor Core One-shot Reset (Write Protect)
     * |        |          |Setting this bit will only reset the processor core and Flash Memory Controller(FMC), and this bit will automatically return to 0 after the 2 clock cycles.
     * |        |          |0 = Processor core normal operation.
     * |        |          |1 = Processor core one-shot reset.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[2]     |PDMA0RST  |PDMA0 Controller Reset (Write Protect)
     * |        |          |Setting this bit to 1 will generate a reset signal to the PDMA0 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = PDMA0 controller normal operation.
     * |        |          |1 = PDMA0 controller reset.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[3]     |EBIRST    |EBI Controller Reset (Write Protect)
     * |        |          |Set this bit to 1 will generate a reset signal to the EBI controller
     * |        |          |User needs to set this bit to 0 to release from the reset state.
     * |        |          |0 = EBI controller normal operation.
     * |        |          |1 = EBI controller reset.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[4]     |USBHRST   |USBH Controller Reset (Write Protect)
     * |        |          |Setting this bit to 1 will generate a reset signal to the USBH controller
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
     * |[8]     |CANFD0RST |CANFD0 Controller Reset (Write Protect)
     * |        |          |Setting this bit to 1 will generate a reset signal to the CANFD0 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = CANFD0 controller normal operation.
     * |        |          |1 = CANFD0 controller reset.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[9]     |CANFD1RST |CANFD1 Controller Reset (Write Protect)
     * |        |          |Setting this bit to 1 will generate a reset signal to the CANFD1 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = CANFD1 controller normal operation.
     * |        |          |1 = CANFD1 controller reset.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[12]    |CRPTRST   |CRYPTO Controller Reset (Write Protect)
     * |        |          |Setting this bit to 1 will generate a reset signal to the CRYPTO controller
     * |        |          |User needs to set this bit to 0 to release from the reset state.
     * |        |          |0 = CRYPTO controller normal operation.
     * |        |          |1 = CRYPTO controller reset.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var SYS_T::IPRST1
     * Offset: 0x0C  Peripheral Reset Control Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1]     |GPIORST   |GPIO Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the GPIO controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = GPIO controller normal operation.
     * |        |          |1 = GPIO controller reset.
     * |[2]     |TMR0RST   |Timer0 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the Timer0 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = Timer0 controller normal operation.
     * |        |          |1 = Timer0 controller reset.
     * |[3]     |TMR1RST   |Timer1 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the Timer1 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = Timer1 controller normal operation.
     * |        |          |1 = Timer1 controller reset.
     * |[4]     |TMR2RST   |Timer2 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the Timer2 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = Timer2 controller normal operation.
     * |        |          |1 = Timer2 controller reset.
     * |[5]     |TMR3RST   |Timer3 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the Timer3 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = Timer3 controller normal operation.
     * |        |          |1 = Timer3 controller reset.
     * |[7]     |ACMP01RST |Analog Comparator 0/1 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the ACMP01 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = Analog Comparator 0/1 controller normal operation.
     * |        |          |1 = Analog Comparator 0/1 controller reset.
     * |[8]     |I2C0RST   |I2C0 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the I2C0 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = I2C0 controller normal operation.
     * |        |          |1 = I2C0 controller reset.
     * |[9]     |I2C1RST   |I2C1 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the I2C1 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = I2C1 controller normal operation.
     * |        |          |1 = I2C1 controller reset.
     * |[10]    |I2C2RST   |I2C2 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the I2C2 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = I2C2 controller normal operation.
     * |        |          |1 = I2C2 controller reset.
     * |[11]    |I3C0RST   |I3C0 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the I3C0 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = I3C0 normal operation.
     * |        |          |1 = I3C0 reset.
     * |[12]    |QSPI0RST  |QSPI0 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the QSPI0 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = QSPI0 controller normal operation.
     * |        |          |1 = QSPI0 controller reset.
     * |[13]    |SPI0RST   |SPI0 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the SPI0 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = SPI0 controller normal operation.
     * |        |          |1 = SPI0 controller reset.
     * |[14]    |SPI1RST   |SPI1 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the SPI1 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = SPI1 controller normal operation.
     * |        |          |1 = SPI1 controller reset.
     * |[16]    |UART0RST  |UART0 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the UART0 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = UART0 controller normal operation.
     * |        |          |1 = UART0 controller reset.
     * |[17]    |UART1RST  |UART1 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the UART1 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = UART1 controller normal operation.
     * |        |          |1 = UART1 controller reset.
     * |[18]    |UART2RST  |UART2 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the UART2 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = UART2 controller normal operation.
     * |        |          |1 = UART2 controller reset.
     * |[19]    |UART3RST  |UART3 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the UART3 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = UART3 controller normal operation.
     * |        |          |1 = UART3 controller reset.
     * |[20]    |UART4RST  |UART4 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the UART4 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = UART4 controller normal operation.
     * |        |          |1 = UART4 controller reset.
     * |[21]    |UART5RST  |UART5 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the UART5 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = UART5 controller normal operation.
     * |        |          |1 = UART5 controller reset.
     * |[22]    |UART8RST  |UART8 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the UART8 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = UART8 controller normal operation.
     * |        |          |1 = UART8 controller reset.
     * |[23]    |UART9RST  |UART9 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the UART9 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = UART9 controller normal operation.
     * |        |          |1 = UART9 controller reset.
     * |[24]    |WWDT0RST  |WWDT0 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the WWDT0 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = WWDT0 controller normal operation.
     * |        |          |1 = WWDT0 controller reset.
     * |[25]    |WWDT1RST  |WWDT1 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the WWDT1 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = WWDT1 controller normal operation.
     * |        |          |1 = WWDT1 controller reset.
     * |[27]    |USBDRST   |USBD Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the USBD controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = USBD controller normal operation.
     * |        |          |1 = USBD controller reset.
     * |[28]    |EADC0RST  |EADC0 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the EADC0 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = EADC0 controller normal operation.
     * |        |          |1 = EADC0 controller reset.
     * |[31]    |TRNGRST   |TRNG Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the TRNG controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = TRNG controller normal operation.
     * |        |          |1 = TRNG controller reset.
     * @var SYS_T::IPRST2
     * Offset: 0x10  Peripheral Reset Control Register 2
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[8]     |USCI0RST  |USCI0 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the USCI0 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = USCI0 controller normal operation.
     * |        |          |1 = USCI0 controller reset.
     * |[9]     |USCI1RST  |USCI1 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the USCI1 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = USCI1 controller normal operation.
     * |        |          |1 = USCI1 controller reset.
     * |[12]    |DAC0RST   |DAC0 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the DAC0 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = DAC0 controller normal operation.
     * |        |          |1 = DAC0 controller reset.
     * |[16]    |PWM0RST   |PWM0 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the PWM0 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = PWM0 controller normal operation.
     * |        |          |1 = PWM0 controller reset.
     * |[17]    |PWM1RST   |PWM1 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the PWM1 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = PWM1 controller normal operation.
     * |        |          |1 = PWM1 controller reset.
     * |[18]    |BPWM0RST  |BPWM0 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the BPWM0 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = BPWM0 controller normal operation.
     * |        |          |1 = BPWM0 controller reset.
     * |[19]    |BPWM1RST  |BPWM1 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the BPWM1 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = BPWM1 controller normal operation.
     * |        |          |1 = BPWM1 controller reset.
     * |[20]    |EQEI0RST  |EQEI0 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the EQEI0 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = EQEI0 controller normal operation.
     * |        |          |1 = EQEI0 controller reset.
     * |[21]    |EQEI1RST  |EQEI1 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the EQEI1 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = EQEI1 controller normal operation.
     * |        |          |1 = EQEI1 controller reset.
     * |[24]    |UART6RST  |UART6 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the UART6 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = UART6 controller normal operation.
     * |        |          |1 = UART6 controller reset.
     * |[25]    |UART7RST  |UART7 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the UART7 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = UART7 controller normal operation.
     * |        |          |1 = UART7 controller reset.
     * |[26]    |ECAP0RST  |ECAP0 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the ECAP0 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = ECAP0 controller normal operation.
     * |        |          |1 = ECAP0 controller reset.
     * |[31]    |EADC1RST  |EADC1 Controller Reset
     * |        |          |Setting this bit to 1 will generate a reset signal to the EADC1 controller
     * |        |          |User needs to set this bit to 0 to release from reset state.
     * |        |          |0 = EADC1 controller normal operation.
     * |        |          |1 = EADC1 controller reset.
     * @var SYS_T::BODCTL
     * Offset: 0x18  Brown-out Detector Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |BODEN     |Brown-out Detector Enable Bit (Write Protect)
     * |        |          |The default value is set by Flash controller user configuration register CBODEN (CONFIG0 [19]).
     * |        |          |0 = Brown-out Detector function Disabled.
     * |        |          |1 = Brown-out Detector function Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[3]     |BODRSTEN  |Brown-out Reset Enable Bit (Write Protect)
     * |        |          |The default value is set by Flash controller user configuration register CBORST(CONFIG0[20]) bit.
     * |        |          |0 = Brown-out "INTERRUPT" function Enabled.
     * |        |          |1 = Brown-out "RESET" function Enabled.
     * |        |          |Note 1: While the Brown-out Detector function is enabled (BODEN high) and BOD reset function is enabled (BODRSTEN high), BOD will assert a signal to reset chip when the detected voltage is lower than the threshold (BODOUT high).
     * |        |          |While the BOD function is enabled (BODEN high) and BOD interrupt function is enabled (BODRSTEN low), BOD will assert an interrupt if BODIF is high
     * |        |          |BOD interrupt will keep till the BODIF set to 0
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
     * |        |          |If the BODEN is 0, BOD function disabled, this bit always responds 0.
     * |[7]     |LVREN     |Low Voltage Reset Enable Bit (Write Protect)
     * |        |          |The LVR function resets the chip when the input power voltage is lower than LVR circuit setting.
     * |        |          |0 = Low Voltage Reset function Disabled.
     * |        |          |1 = Low Voltage Reset function Enabled (default).
     * |        |          |Note 1: After enabling the bit, the LVR function will be active with 100us ~ 200us delay for LVR output stable
     * |        |          |LVRRDY(SYS_BODCTL[15]) is used to indicate LVR ready status.
     * |        |          |Note 2: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[10:8]  |BODDGSEL  |Brown-out Detector Output De-glitch Time Select (Write Protect)
     * |        |          |000 = BOD output is sampled by LIRC clock.
     * |        |          |001 = 4 system clock (HCLK).
     * |        |          |010 = 8 system clock (HCLK).
     * |        |          |011 = 16 system clock (HCLK).
     * |        |          |100 = 32 system clock (HCLK).
     * |        |          |101 = 64 system clock (HCLK).
     * |        |          |110 = 128 system clock (HCLK).
     * |        |          |111 = 256 system clock (HCLK).
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[14:12] |LVRDGSEL  |LVR Output De-glitch Time Select (Write Protect)
     * |        |          |000 = Without de-glitch function.
     * |        |          |001 = 4 system clock (HCLK).
     * |        |          |010 = 8 system clock (HCLK).
     * |        |          |011 = 16 system clock (HCLK).
     * |        |          |100 = 32 system clock (HCLK).
     * |        |          |101 = 64 system clock (HCLK).
     * |        |          |110 = 128 system clock (HCLK).
     * |        |          |111 = 256 system clock (HCLK).
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[15]    |LVRRDY    |Low Voltage Reset Ready Flag (Read Only)
     * |        |          |When the LVR function first enable, need more HCLK to wait LVR ready.
     * |        |          |0 = Low Voltage Reset function not ready.
     * |        |          |1 = Low Voltage Reset function ready.
     * |[19:16] |BODVL     |Brown-out Detector Threshold Voltage Selection (Write Protect)
     * |        |          |The default value is set by Flash controller user configuration register CBOV ({1'b1, CONFIG0 [23:21]}).
     * |        |          |1011 = Brown-Out Detector threshold voltage is 2.8V.
     * |        |          |1101 = Brown-Out Detector threshold voltage is 3.7V.
     * |        |          |1111 = Brown-Out Detector threshold voltage is 4.4V.
     * |        |          |Others = Reserved.
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
     * |[2]     |AVDDDIV4EN|AVDD Divide 4 Enable Bit
     * |        |          |This bit is used to enable/disable AVDD divide 4 function.
     * |        |          |0 = AVDD divide 4 function Disabled (default).
     * |        |          |1 = AVDD divide 4 function Enabled.
     * |        |          |Note: After this bit is set to 1, the value of AVDD divide 4 output voltage can be obtained from ADC conversion result.
     * |[4]     |VTEMPSEL  |Temperature Sensor Slope Select Bit
     * |        |          |This bit is used to select temperature sensor slope trend.
     * |        |          |0 = Temperature sensor CTAT slope.
     * |        |          |1 = Temperature sensor PTAT slope.
     * @var SYS_T::IPRST3
     * Offset: 0x20  Peripheral Reset Control Register 3
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |LLSI0RST  |LLSI0 Controller Reset
     * |        |          |0 = LLSI0 normal operation.
     * |        |          |1 = LLSI0 reset.
     * |[1]     |LLSI1RST  |LLSI1 Controller Reset
     * |        |          |0 = LLSI1 normal operation.
     * |        |          |1 = LLSI1 reset.
     * |[2]     |LLSI2RST  |LLSI2 Controller Reset
     * |        |          |0 = LLSI2 normal operation.
     * |        |          |1 = LLSI2 reset.
     * |[3]     |LLSI3RST  |LLSI3 Controller Reset
     * |        |          |0 = LLSI3 normal operation.
     * |        |          |1 = LLSI3 reset.
     * |[4]     |LLSI4RST  |LLSI4 Controller Reset
     * |        |          |0 = LLSI4 normal operation.
     * |        |          |1 = LLSI4 reset.
     * |[5]     |LLSI5RST  |LLSI5 Controller Reset
     * |        |          |0 = LLSI5 normal operation.
     * |        |          |1 = LLSI5 reset.
     * |[6]     |LLSI6RST  |LLSI6 Controller Reset
     * |        |          |0 = LLSI6 normal operation.
     * |        |          |1 = LLSI6 reset.
     * |[7]     |LLSI7RST  |LLSI7 Controller Reset
     * |        |          |0 = LLSI7 normal operation.
     * |        |          |1 = LLSI7 reset.
     * |[8]     |LLSI8RST  |LLSI8 Controller Reset
     * |        |          |0 = LLSI8 normal operation.
     * |        |          |1 = LLSI8 reset.
     * |[9]     |LLSI9RST  |LLSI9 Controller Reset
     * |        |          |0 = LLSI9 normal operation.
     * |        |          |1 = LLSI9 reset.
     * |[10]    |ELLSI0RST |ELLSI0 Controller Reset
     * |        |          |0 = ELLSI0 normal operation.
     * |        |          |1 = ELLSI0 reset.
     * |[11]    |ELLSI1RST |ELLSI1 Controller Reset
     * |        |          |0 = ELLSI1 normal operation.
     * |        |          |1 = ELLSI1 reset.
     * @var SYS_T::VREFCTL
     * Offset: 0x28  VREF Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[2:0]   |VREFCTL   |VREF Control Bits (Write Protect)
     * |        |          |000 = VREF is from external pin.
     * |        |          |011 = VREF is internal 2.5V.
     * |        |          |101 = VREF is internal 3.072V.
     * |        |          |111 = VREF is internal 4.096V.
     * |        |          |Others = Reserved.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[7:6]   |PRELOAD_SEL|VREF Preload Time Select (Write Protect)
     * |        |          |00 = 60us (default).
     * |        |          |01 = 966us.
     * |        |          |10 = 2000us.
     * |        |          |11 = 2.65ms.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * @var SYS_T::USBPHY
     * Offset: 0x2C  USB PHY Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1:0]   |USBROLE   |USB Role Option (Write Protect)
     * |        |          |These two bits are used to select the role of USB.
     * |        |          |00 = Standard USB Device mode.
     * |        |          |01 = Standard USB Host mode.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[8]     |USBEN     |USB PHY Enable
     * |        |          |This bit is used to enable/disable USB PHY.
     * |        |          |0 = USB PHY Disabled.
     * |        |          |1 = USB PHY Enabled.
     * @var SYS_T::GPA_MFOS
     * Offset: 0x80  GPIOA Multiple Function Output Select Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |MFOS0     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[1]     |MFOS1     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[2]     |MFOS2     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[3]     |MFOS3     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[4]     |MFOS4     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[5]     |MFOS5     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[6]     |MFOS6     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[7]     |MFOS7     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[8]     |MFOS8     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[9]     |MFOS9     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[10]    |MFOS10    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[11]    |MFOS11    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[12]    |MFOS12    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[13]    |MFOS13    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[14]    |MFOS14    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[15]    |MFOS15    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * @var SYS_T::GPB_MFOS
     * Offset: 0x84  GPIOB Multiple Function Output Select Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |MFOS0     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[1]     |MFOS1     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[2]     |MFOS2     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[3]     |MFOS3     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[4]     |MFOS4     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[5]     |MFOS5     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[6]     |MFOS6     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[7]     |MFOS7     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[8]     |MFOS8     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[9]     |MFOS9     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[10]    |MFOS10    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[11]    |MFOS11    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[12]    |MFOS12    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[13]    |MFOS13    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[14]    |MFOS14    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[15]    |MFOS15    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * @var SYS_T::GPC_MFOS
     * Offset: 0x88  GPIOC Multiple Function Output Select Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |MFOS0     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[1]     |MFOS1     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[2]     |MFOS2     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[3]     |MFOS3     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[4]     |MFOS4     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[5]     |MFOS5     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[6]     |MFOS6     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[7]     |MFOS7     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[8]     |MFOS8     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[9]     |MFOS9     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[10]    |MFOS10    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[11]    |MFOS11    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[12]    |MFOS12    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[13]    |MFOS13    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[14]    |MFOS14    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[15]    |MFOS15    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * @var SYS_T::GPD_MFOS
     * Offset: 0x8C  GPIOD Multiple Function Output Select Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |MFOS0     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[1]     |MFOS1     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[2]     |MFOS2     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[3]     |MFOS3     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[4]     |MFOS4     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[5]     |MFOS5     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[6]     |MFOS6     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[7]     |MFOS7     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[8]     |MFOS8     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[9]     |MFOS9     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[10]    |MFOS10    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[11]    |MFOS11    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[12]    |MFOS12    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[13]    |MFOS13    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[14]    |MFOS14    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[15]    |MFOS15    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * @var SYS_T::GPE_MFOS
     * Offset: 0x90  GPIOE Multiple Function Output Select Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |MFOS0     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[1]     |MFOS1     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[2]     |MFOS2     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[3]     |MFOS3     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[4]     |MFOS4     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[5]     |MFOS5     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[6]     |MFOS6     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[7]     |MFOS7     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[8]     |MFOS8     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[9]     |MFOS9     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[10]    |MFOS10    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[11]    |MFOS11    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[12]    |MFOS12    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[13]    |MFOS13    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[14]    |MFOS14    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[15]    |MFOS15    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * @var SYS_T::GPF_MFOS
     * Offset: 0x94  GPIOF Multiple Function Output Select Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |MFOS0     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[1]     |MFOS1     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[2]     |MFOS2     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[3]     |MFOS3     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[4]     |MFOS4     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[5]     |MFOS5     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[6]     |MFOS6     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[7]     |MFOS7     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[8]     |MFOS8     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[9]     |MFOS9     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[10]    |MFOS10    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[11]    |MFOS11    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[12]    |MFOS12    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[13]    |MFOS13    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[14]    |MFOS14    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[15]    |MFOS15    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * @var SYS_T::GPG_MFOS
     * Offset: 0x98  GPIOG Multiple Function Output Select Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |MFOS0     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[1]     |MFOS1     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[2]     |MFOS2     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[3]     |MFOS3     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[4]     |MFOS4     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[5]     |MFOS5     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[6]     |MFOS6     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[7]     |MFOS7     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[8]     |MFOS8     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[9]     |MFOS9     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[10]    |MFOS10    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[11]    |MFOS11    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[12]    |MFOS12    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[13]    |MFOS13    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[14]    |MFOS14    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[15]    |MFOS15    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * @var SYS_T::GPH_MFOS
     * Offset: 0x9C  GPIOH Multiple Function Output Select Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |MFOS0     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[1]     |MFOS1     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[2]     |MFOS2     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[3]     |MFOS3     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[4]     |MFOS4     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[5]     |MFOS5     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[6]     |MFOS6     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[7]     |MFOS7     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[8]     |MFOS8     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[9]     |MFOS9     |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[10]    |MFOS10    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[11]    |MFOS11    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[12]    |MFOS12    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[13]    |MFOS13    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[14]    |MFOS14    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * |[15]    |MFOS15    |GPIOA-H Pin[n] Multiple Function Pin Output Mode Select
     * |        |          |This bit used to select multiple function pin output mode type for Px.n pin.
     * |        |          |0 = Multiple function pin output mode type is Push-pull mode.
     * |        |          |1 = Multiple function pin output mode type is Open-drain mode.
     * |        |          |Note:
     * |        |          |Max. N=15 for port A/B/E/F/G.
     * |        |          |Max. n=14 for port C/D.
     * |        |          |Max. n=11 for port H.
     * @var SYS_T::VTORSET
     * Offset: 0xA8  VTOR Setting Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:7]  |VTORSET   |VTOR Setting After SPD Wakeup (Write Protect)
     * |        |          |This is the register to set the address of vector table after chip is waked up from SPD mode.
     * |        |          |The value will be loaded to Vector Table Offset Register, which is at the address 0xE000ED08, when chip wake up from SPD mode.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * @var SYS_T::SRAM_INTCTL
     * Offset: 0xC0  System SRAM Secure ECC Interrupt Enable Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |EERRIEN   |SRAM ECC Check Error Interrupt Enable Bit
     * |        |          |0 = SRAM ECC check error interrupt Disabled.
     * |        |          |1 = SRAM ECC check error interrupt Enabled.
     * |[1]     |ECCSINGLE |SRAM ECC Check single Error Enable Bit
     * |        |          |0 = SRAM ECC check single error Disabled.
     * |        |          |1 = SRAM ECC check single error Enabled.
     * @var SYS_T::SRAM_STATUS
     * Offset: 0xC4  System SRAM Secure ECC Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |EERRIF    |SRAM ECC Check Error Flag
     * |        |          |This bit indicates the System SRAM ECC error occurred. Write 1 to clear this to 0.
     * |        |          |0 = No System SRAM ECC error.
     * |        |          |1 = System SRAM ECC error occur.
     * |        |          |*This function only works if ECCEN set to 1.
     * @var SYS_T::SRAM_ERRADDR
     * Offset: 0xC8  System SRAM Secure ECC Error Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ERRADDR   |System SRAM ECC Error Address (Read Only)
     * |        |          |This register shows system SRAM ECC error byte address
     * |        |          |(If ECC errors are detected in multiple SRAM banks, a single address will be randomly chosen for reporting)
     * |        |          |Note: This function only works if ECCEN set to 1.
     * @var SYS_T::SRAM_LSCTL
     * Offset: 0xCC  SRAM Light Sleep Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |MKROM_LS  |MKROM Light Sleep Mode Enable bit (Write Protect)
     * |        |          |0 = Light Sleep disable.
     * |        |          |1 = Light Sleep enable, SRAM goes into low leakage mode, there is no change in the output state.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[1]     |MCAN0_LS  |MCAN0 SRAM Light Sleep Mode Enable bit (Write Protect)
     * |        |          |0 = Light Sleep disable.
     * |        |          |1 = Light Sleep enable, SRAM goes into low leakage mode, there is no change in the output state.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[2]     |MCAN1_LS  |MCAN1 SRAM Light Sleep Mode Enable bit (Write Protect)
     * |        |          |0 = Light Sleep disable.
     * |        |          |1 = Light Sleep enable, SRAM goes into low leakage mode, there is no change in the output state.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[4]     |USBD_LS   |USBD SRAM Light Sleep Mode Enable bit (Write Protect)
     * |        |          |0 = Light Sleep disable.
     * |        |          |1 = Light Sleep enable, SRAM goes into low leakage mode, there is no change in the output state.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[6]     |I3C_LS    |I3C SRAM Light Sleep Mode Enable bit (Write Protect)
     * |        |          |0 = Light Sleep disable.
     * |        |          |1 = Light Sleep enable, SRAM goes into low leakage mode, there is no change in the output state.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var SYS_T::SRAM_BISTCTL
     * Offset: 0xD0  System SRAM BIST Test Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |SRBIST0   |System SRAM Bank0 BIST Enable Bit (Write Protect)
     * |        |          |This bit enables BIST test for system SRAM bank0.
     * |        |          |0 = System SRAM bank0 BIST Disabled.
     * |        |          |1 = System SRAM bank0 BIST Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[1]     |SRBIST1   |System SRAM Bank1 BIST Enable Bit (Write Protect)
     * |        |          |This bit enables BIST test for system SRAM bank1.
     * |        |          |0 = System SRAM bank1 BIST Disabled.
     * |        |          |1 = System SRAM bank1 BIST Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[2]     |CACHEBIST |CACHE SRAM BIST Enable Bit (Write Protect)
     * |        |          |This bit enables BIST test for CACHE SRAM.
     * |        |          |0 = CACHE SRAM BIST Disabled.
     * |        |          |1 = CACHE SRAM BIST Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[3]     |CANBIST   |CAN SRAM BIST Enable Bit (Write Protect)
     * |        |          |This bit enables BIST test for CAN SRAM.
     * |        |          |0 = CAN SRAM BIST Disabled.
     * |        |          |1 = CAN SRAM BIST Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[4]     |USBDBIST  |USBD SRAM BIST Enable Bit (Write Protect)
     * |        |          |This bit enables BIST test for USBD SRAM.
     * |        |          |0 = USBD SRAM BIST Disabled.
     * |        |          |1 = USBD SRAM BIST Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[12]    |I3CBIST   |I3C SRAM BIST Enable Bit (Write Protect)
     * |        |          |This bit enables BIST test for I3C SRAM.
     * |        |          |0 = I3C SRAM BIST Disabled.
     * |        |          |1 = I3C SRAM BIST Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[13]    |EEPROMBIST|EEPROM SRAM BIST Enable Bit (Write Protect)
     * |        |          |This bit enables BIST test for EEPROM SRAM.
     * |        |          |0 = EEPROM SRAM BIST Disabled.
     * |        |          |1 = EEPROM SRAM BIST Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var SYS_T::SRAM_BISTSTS
     * Offset: 0xD4  System SRAM BIST Test Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |SRBISTEF0 |System SRAM Bank0 BIST Fail Flag (Read Only)
     * |        |          |0 = System SRAM bank0 BIST test pass.
     * |        |          |1 = System SRAM bank0 BIST test fail.
     * |[1]     |SRBISTEF1 |System SRAM Bank1 BIST Fail Flag (Read Only)
     * |        |          |0 = System SRAM bank1 BIST test pass.
     * |        |          |1 = System SRAM bank1 BIST test fail.
     * |[2]     |CACHEBISTEF|CACHE SRAM BIST Fail Flag (Read Only)
     * |        |          |0 = CACHE RAM BIST test pass.
     * |        |          |1 = CACHE RAM BIST test fail.
     * |[3]     |CANBEF    |CAN SRAM BIST Fail Flag (Read Only)
     * |        |          |0 = CAN SRAM BIST test pass.
     * |        |          |1 = CAN SRAM BIST test fail.
     * |        |          |Note: Any of the CAN SRAM macros BIST fail, this flag is 1.
     * |[4]     |USBDBEF   |USBD SRAM BIST Fail Flag (Read Only)
     * |        |          |0 = USBD SRAM BIST test pass.
     * |        |          |1 = USBD SRAM BIST test fail.
     * |[12]    |I3CBEF    |I3C SRAM BIST Fail Flag (Read Only)
     * |        |          |0 = I3C SRAM BIST test pass.
     * |        |          |1 = I3C SRAM BIST test fail.
     * |[13]    |EEPROMBEF |EEPROM SRAM BIST Fail Flag (Read Only)
     * |        |          |0 = EEPROM SRAM BIST test pass.
     * |        |          |1 = EEPROM SRAM BIST test fail.
     * |[16]    |SRBEND0   |System SRAM Bank0 BIST Test Finish (Read Only)
     * |        |          |0 = System SRAM bank0 BIST active.
     * |        |          |1 = System SRAM bank0 BIST finished.
     * |[17]    |SRBEND1   |System SRAM Bank1 BIST Test Finish (Read Only)
     * |        |          |0 = System SRAM bank1 BIST is active.
     * |        |          |1 = System SRAM bank1 BIST finished.
     * |[18]    |CACHEBEND |CACHE SRAM BIST Test Finish (Read Only)
     * |        |          |0 = CACHE SRAM BIST is active.
     * |        |          |1 = CACHE SRAM BIST test finished.
     * |[19]    |CANBEND   |CAN SRAM BIST Test Finish (Read Only)
     * |        |          |0 = CAN SRAM BIST is active.
     * |        |          |1 = CAN SRAM BIST test finished.
     * |        |          |Note: All of the CAN SRAM macros BIST finished; this flag is 1.
     * |[20]    |USBDBEND  |USBD SRAM BIST Test Finish (Read Only)
     * |        |          |0 = USBD SRAM BIST is active.
     * |        |          |1 = USBD SRAM BIST test finished.
     * |[28]    |I3CBEND   |I3C SRAM BIST Test Finish (Read Only)
     * |        |          |0 = I3C SRAM BIST is active.
     * |        |          |1 = I3C SRAM BIST test finished.
     * |[29]    |EEPROMBEND|EEPROM SRAM BIST Test Finish (Read Only)
     * |        |          |0 = EEPROM SRAM BIST is active.
     * |        |          |1 = EEPROM SRAM BIST test finished.
     * @var SYS_T::SRAM_ECCEN
     * Offset: 0xDC  System SRAM ECC Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ECCEN     |SRAM ECC Function Enable
     * |        |          |0 = No System SRAM ECC function.
     * |        |          |1 = System SRAM ECC error function.
     * |        |          |Note: When chip reset, default value comes from CONFIG0[29]
     * @var SYS_T::HIRCTCTL
     * Offset: 0xE4  HIRC48M Trim Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1:0]   |FREQSEL   |Trim Frequency Selection
     * |        |          |This field indicates the target frequency of 48 MHz internal high speed RC oscillator (HIRC48M) auto trim.
     * |        |          |During auto trim operation, if clock error detected with CESTOPEN is set to 1 or trim retry limitation count reached, this field will be cleared to 00 automatically.
     * |        |          |00 = Disable HIRC auto trim function.
     * |        |          |01 = Enable HIRC auto trim function and trim HIRC to 48 MHz.
     * |        |          |10 = Reserved.
     * |        |          |11 = Reserved.
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
     * |[20:16] |BOUNDARY  |Boundary Selection
     * |        |          |Fill the boundary range from 0x1 to 0x31, 0x0 is reserved.
     * |        |          |Note: This field is effective only when the BOUNDEN(SYS_HIRCTCTL[9]) is enabled.
     * @var SYS_T::HIRCTIEN
     * Offset: 0xE8  HIRC48M Trim Interrupt Enable Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1]     |TFAILIEN  |Trim Failure Interrupt Enable Bit
     * |        |          |This bit controls if an interrupt will be triggered while HIRC trim value update limitation count reached and HIRC frequency still not locked on target frequency set by FREQSEL(SYS_HIRCTCTL[1:0]).
     * |        |          |If this bit is high and TFAILIF(SYS_HIRCTISTS[1]) is set during auto trim operation, an interrupt will be triggered to notify that HIRC trim value update limitation count was reached.
     * |        |          |0 = Disable TFAILIF(SYS_HIRCTISTS[1]) status to trigger an interrupt to CPU.
     * |        |          |1 = Enable TFAILIF(SYS_HIRCTISTS[1]) status to trigger an interrupt to CPU.
     * |[2]     |CLKEIEN   |Clock Error Interrupt Enable Bit
     * |        |          |This bit controls if CPU would get an interrupt while clock is inaccuracy during auto trim operation.
     * |        |          |If this bit is set to1, and CLKERRIF(SYS_HIRCTISTS[2]) is set during auto trim operation, an interrupt will be triggered to notify the clock frequency is inaccuracy.
     * |        |          |0 = Disable CLKERRIF(SYS_HIRCTISTS[2]) status to trigger an interrupt to CPU.
     * |        |          |1 = Enable CLKERRIF(SYS_HIRCTISTS[2]) status to trigger an interrupt to CPU.
     * @var SYS_T::HIRCTISTS
     * Offset: 0xEC  HIRC48M Trim Interrupt Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |FREQLOCK  |HIRC Frequency Lock Status
     * |        |          |This bit indicates the HIRC frequency is locked.
     * |        |          |This is a status bit and doesn't trigger any interrupt.
     * |        |          |Write 1 to clear this to 0
     * |        |          |This bit will be set automatically, if the frequency is lock and the RC_TRIM is enabled.
     * |        |          |0 = The internal high-speed oscillator frequency doesn't lock at 48 MHz yet.
     * |        |          |1 = The internal high-speed oscillator frequency locked at 48 MHz.
     * |[1]     |TFAILIF   |Trim Failure Interrupt Status
     * |        |          |This bit indicates that HIRC trim value update limitation count reached and the HIRC clock frequency still doesn't be locked
     * |        |          |Once this bit is set, the auto trim operation stopped and FREQSEL(SYS_HIRCTCTL[1:0]) will be cleared to 00 by hardware automatically.
     * |        |          |If this bit is set and TFAILIEN(SYS_HIRCTIEN[1]) is high, an interrupt will be triggered to notify that HIRC trim value update limitation count was reached
     * |        |          |Write 1 to clear this to 0.
     * |        |          |0 = Trim value update limitation count does not reach.
     * |        |          |1 = Trim value update limitation count reached and HIRC frequency still not locked.
     * |[2]     |CLKERRIF  |Clock Error Interrupt Status
     * |        |          |When the frequency of 32.768 kHz external low speed crystal oscillator (LXT) or 48 MHz internal high speed RC oscillator (HIRC48M) is shift larger to unreasonable value, this bit will be set and to be an indicate that clock frequency is inaccuracy.
     * |        |          |Once this bit is set to 1, the auto trim operation stopped and FREQSEL(SYS_HIRCTCTL[1:0]) will be cleared to 00 by hardware automatically if CESTOPEN(SYS_HIRCTCTL[8]) is set to 1.
     * |        |          |If this bit is set and CLKEIEN(SYS_HIRCTIEN[2]) is high, an interrupt will be triggered to notify the clock frequency is inaccuracy
     * |        |          |Write 1 to clear this to 0.
     * |        |          |0 = Clock frequency is accuracy.
     * |        |          |1 = Clock frequency is inaccuracy.
     * |[3]     |OVBDIF    |Over Boundary Status
     * |        |          |When the over boundary function is set, if there occurs the over boundary condition, this flag will be set.
     * |        |          |0 = Over boundary condition did not occur.
     * |        |          |1 = Over boundary condition occurred.
     * |        |          |Note: Write 1 to clear this flag.
     * @var SYS_T::SRAM_NSINTCTL
     * Offset: 0xF0  System SRAM Non-Secure ECC Interrupt Enable Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |PERRIEN   |SRAM ECC Check Error Interrupt Enable Bit
     * |        |          |0 = SRAM ECC check error interrupt Disabled.
     * |        |          |1 = SRAM ECC check error interrupt Enabled.
     * |[1]     |ECCSINGLE |SRAM ECC Single Error check
     * |        |          |0=The SRAM ECC logic non check single-bit error.
     * |        |          |1=The SRAM ECC logic checks for single-bit error.
     * @var SYS_T::SRAM_NSSTATUS
     * Offset: 0xF4  System SRAM Non-Secure ECC Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |PERRIF    |SRAM Parity Check Error Flag
     * |        |          |This bit indicates the System SRAM parity error occurred. Write 1 to clear this to 0.
     * |        |          |0 = No System SRAM ECC error.
     * |        |          |1 = System SRAM ECC error occur.
     * |        |          |Note: This function only works if ECCEN set to 1.
     * @var SYS_T::SRAM_NSERRADDR
     * Offset: 0xF8  System SRAM Non-Secure ECC Error Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ERRADDR   |System SRAM ECC Error Address (Read Only)
     * |        |          |This register shows system SRAM ECC error byte address.
     * |        |          |*This function only works if ECCEN set to 1.
     * @var SYS_T::REGLCTL
     * Offset: 0x100  Register Lock Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |REGLCTL   |Register Lock Control Code (Write Only)
     * |        |          |Some registers have write-protection function
     * |        |          |Writing these registers have to disable the protected function by writing the sequence value "59h", "16h", "88h" to this field
     * |        |          |After this sequence is completed, the REGLCTL bit will be set to 1 and write-protection registers can be normal write.
     * |        |          |REGLCTL[0]
     * |        |          |Register Lock Control Disable Index (Read Only)
     * |        |          |0 = Write-protection Enabled for writing protected registers
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
     * @var SYS_T::AHBMCTL
     * Offset: 0x400  AHB Bus Matrix Priority Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |INTACTEN  |Highest AHB Bus Priority of Cortex-M33 Core Enable Bit (Write Protect)
     * |        |          |Enable Cortex-M33 Core with Highest AHB Bus Priority in AHB Bus Matrix.
     * |        |          |0 = Round-robin mode.
     * |        |          |1 = Cortex-M33 CPU with highest bus priority when interrupt occurred.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var SYS_T::GPA_MFP0
     * Offset: 0x500  GPIOA Multiple Function Control Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PA0MFP    |PA.0 Multi-function Pin Selection
     * |[12:8]  |PA1MFP    |PA.1 Multi-function Pin Selection
     * |[20:16] |PA2MFP    |PA.2 Multi-function Pin Selection
     * |[28:24] |PA3MFP    |PA.3 Multi-function Pin Selection
     * @var SYS_T::GPA_MFP1
     * Offset: 0x504  GPIOA Multiple Function Control Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PA4MFP    |PA.4 Multi-function Pin Selection
     * |[12:8]  |PA5MFP    |PA.5 Multi-function Pin Selection
     * |[20:16] |PA6MFP    |PA.6 Multi-function Pin Selection
     * |[28:24] |PA7MFP    |PA.7 Multi-function Pin Selection
     * @var SYS_T::GPA_MFP2
     * Offset: 0x508  GPIOA Multiple Function Control Register 2
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PA8MFP    |PA.8 Multi-function Pin Selection
     * |[12:8]  |PA9MFP    |PA.9 Multi-function Pin Selection
     * |[20:16] |PA10MFP   |PA.10 Multi-function Pin Selection
     * |[28:24] |PA11MFP   |PA.11 Multi-function Pin Selection
     * @var SYS_T::GPA_MFP3
     * Offset: 0x50C  GPIOA Multiple Function Control Register 3
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PA12MFP   |PA.12 Multi-function Pin Selection
     * |[12:8]  |PA13MFP   |PA.13 Multi-function Pin Selection
     * |[20:16] |PA14MFP   |PA.14 Multi-function Pin Selection
     * |[28:24] |PA15MFP   |PA.15 Multi-function Pin Selection
     * @var SYS_T::GPB_MFP0
     * Offset: 0x510  GPIOB Multiple Function Control Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PB0MFP    |PB.0 Multi-function Pin Selection
     * |[12:8]  |PB1MFP    |PB.1 Multi-function Pin Selection
     * |[20:16] |PB2MFP    |PB.2 Multi-function Pin Selection
     * |[28:24] |PB3MFP    |PB.3 Multi-function Pin Selection
     * @var SYS_T::GPB_MFP1
     * Offset: 0x514  GPIOB Multiple Function Control Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PB4MFP    |PB.4 Multi-function Pin Selection
     * |[12:8]  |PB5MFP    |PB.5 Multi-function Pin Selection
     * |[20:16] |PB6MFP    |PB.6 Multi-function Pin Selection
     * |[28:24] |PB7MFP    |PB.7 Multi-function Pin Selection
     * @var SYS_T::GPB_MFP2
     * Offset: 0x518  GPIOB Multiple Function Control Register 2
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PB8MFP    |PB.8 Multi-function Pin Selection
     * |[12:8]  |PB9MFP    |PB.9 Multi-function Pin Selection
     * |[20:16] |PB10MFP   |PB.10 Multi-function Pin Selection
     * |[28:24] |PB11MFP   |PB.11 Multi-function Pin Selection
     * @var SYS_T::GPB_MFP3
     * Offset: 0x51C  GPIOB Multiple Function Control Register 3
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PB12MFP   |PB.12 Multi-function Pin Selection
     * |[12:8]  |PB13MFP   |PB.13 Multi-function Pin Selection
     * |[20:16] |PB14MFP   |PB.14 Multi-function Pin Selection
     * |[28:24] |PB15MFP   |PB.15 Multi-function Pin Selection
     * @var SYS_T::GPC_MFP0
     * Offset: 0x520  GPIOC Multiple Function Control Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PC0MFP    |PC.0 Multi-function Pin Selection
     * |[12:8]  |PC1MFP    |PC.1 Multi-function Pin Selection
     * |[20:16] |PC2MFP    |PC.2 Multi-function Pin Selection
     * |[28:24] |PC3MFP    |PC.3 Multi-function Pin Selection
     * @var SYS_T::GPC_MFP1
     * Offset: 0x524  GPIOC Multiple Function Control Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PC4MFP    |PC.4 Multi-function Pin Selection
     * |[12:8]  |PC5MFP    |PC.5 Multi-function Pin Selection
     * |[20:16] |PC6MFP    |PC.6 Multi-function Pin Selection
     * |[28:24] |PC7MFP    |PC.7 Multi-function Pin Selection
     * @var SYS_T::GPC_MFP2
     * Offset: 0x528  GPIOC Multiple Function Control Register 2
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PC8MFP    |PC.8 Multi-function Pin Selection
     * |[12:8]  |PC9MFP    |PC.9 Multi-function Pin Selection
     * |[20:16] |PC10MFP   |PC.10 Multi-function Pin Selection
     * |[28:24] |PC11MFP   |PC.11 Multi-function Pin Selection
     * @var SYS_T::GPC_MFP3
     * Offset: 0x52C  GPIOC Multiple Function Control Register 3
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PC12MFP   |PC.12 Multi-function Pin Selection
     * |[12:8]  |PC13MFP   |PC.13 Multi-function Pin Selection
     * |[20:16] |PC14MFP   |PC.14 Multi-function Pin Selection
     * |[28:24] |PC15MFP   |PC.15 Multi-function Pin Selection
     * @var SYS_T::GPD_MFP0
     * Offset: 0x530  GPIOD Multiple Function Control Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PD0MFP    |PD.0 Multi-function Pin Selection
     * |[12:8]  |PD1MFP    |PD.1 Multi-function Pin Selection
     * |[20:16] |PD2MFP    |PD.2 Multi-function Pin Selection
     * |[28:24] |PD3MFP    |PD.3 Multi-function Pin Selection
     * @var SYS_T::GPD_MFP1
     * Offset: 0x534  GPIOD Multiple Function Control Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PD4MFP    |PD.4 Multi-function Pin Selection
     * |[12:8]  |PD5MFP    |PD.5 Multi-function Pin Selection
     * |[20:16] |PD6MFP    |PD.6 Multi-function Pin Selection
     * |[28:24] |PD7MFP    |PD.7 Multi-function Pin Selection
     * @var SYS_T::GPD_MFP2
     * Offset: 0x538  GPIOD Multiple Function Control Register 2
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PD8MFP    |PD.8 Multi-function Pin Selection
     * |[12:8]  |PD9MFP    |PD.9 Multi-function Pin Selection
     * |[20:16] |PD10MFP   |PD.10 Multi-function Pin Selection
     * |[28:24] |PD11MFP   |PD.11 Multi-function Pin Selection
     * @var SYS_T::GPD_MFP3
     * Offset: 0x53C  GPIOD Multiple Function Control Register 3
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PD12MFP   |PD.12 Multi-function Pin Selection
     * |[12:8]  |PD13MFP   |PD.13 Multi-function Pin Selection
     * |[20:16] |PD14MFP   |PD.14 Multi-function Pin Selection
     * |[28:24] |PD15MFP   |PD.15 Multi-function Pin Selection
     * @var SYS_T::GPE_MFP0
     * Offset: 0x540  GPIOE Multiple Function Control Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PE0MFP    |PE.0 Multi-function Pin Selection
     * |[12:8]  |PE1MFP    |PE.1 Multi-function Pin Selection
     * |[20:16] |PE2MFP    |PE.2 Multi-function Pin Selection
     * |[28:24] |PE3MFP    |PE.3 Multi-function Pin Selection
     * @var SYS_T::GPE_MFP1
     * Offset: 0x544  GPIOE Multiple Function Control Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PE4MFP    |PE.4 Multi-function Pin Selection
     * |[12:8]  |PE5MFP    |PE.5 Multi-function Pin Selection
     * |[20:16] |PE6MFP    |PE.6 Multi-function Pin Selection
     * |[28:24] |PE7MFP    |PE.7 Multi-function Pin Selection
     * @var SYS_T::GPE_MFP2
     * Offset: 0x548  GPIOE Multiple Function Control Register 2
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PE8MFP    |PE.8 Multi-function Pin Selection
     * |[12:8]  |PE9MFP    |PE.9 Multi-function Pin Selection
     * |[20:16] |PE10MFP   |PE.10 Multi-function Pin Selection
     * |[28:24] |PE11MFP   |PE.11 Multi-function Pin Selection
     * @var SYS_T::GPE_MFP3
     * Offset: 0x54C  GPIOE Multiple Function Control Register 3
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PE12MFP   |PE.12 Multi-function Pin Selection
     * |[12:8]  |PE13MFP   |PE.13 Multi-function Pin Selection
     * |[20:16] |PE14MFP   |PE.14 Multi-function Pin Selection
     * |[28:24] |PE15MFP   |PE.15 Multi-function Pin Selection
     * @var SYS_T::GPF_MFP0
     * Offset: 0x550  GPIOF Multiple Function Control Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PF0MFP    |PF.0 Multi-function Pin Selection
     * |[12:8]  |PF1MFP    |PF.1 Multi-function Pin Selection
     * |[20:16] |PF2MFP    |PF.2 Multi-function Pin Selection
     * |[28:24] |PF3MFP    |PF.3 Multi-function Pin Selection
     * @var SYS_T::GPF_MFP1
     * Offset: 0x554  GPIOF Multiple Function Control Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PF4MFP    |PF.4 Multi-function Pin Selection
     * |[12:8]  |PF5MFP    |PF.5 Multi-function Pin Selection
     * |[20:16] |PF6MFP    |PF.6 Multi-function Pin Selection
     * |[28:24] |PF7MFP    |PF.7 Multi-function Pin Selection
     * @var SYS_T::GPF_MFP2
     * Offset: 0x558  GPIOF Multiple Function Control Register 2
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PF8MFP    |PF.8 Multi-function Pin Selection
     * |[12:8]  |PF9MFP    |PF.9 Multi-function Pin Selection
     * |[20:16] |PF10MFP   |PF.10 Multi-function Pin Selection
     * |[28:24] |PF11MFP   |PF.11 Multi-function Pin Selection
     * @var SYS_T::GPF_MFP3
     * Offset: 0x55C  GPIOF Multiple Function Control Register 3
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PF12MFP   |PF.12 Multi-function Pin Selection
     * |[12:8]  |PF13MFP   |PF.13 Multi-function Pin Selection
     * |[20:16] |PF14MFP   |PF.14 Multi-function Pin Selection
     * |[28:24] |PF15MFP   |PF.15 Multi-function Pin Selection
     * @var SYS_T::GPG_MFP0
     * Offset: 0x560  GPIOG Multiple Function Control Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PG0MFP    |PG.0 Multi-function Pin Selection
     * |[12:8]  |PG1MFP    |PG.1 Multi-function Pin Selection
     * |[20:16] |PG2MFP    |PG.2 Multi-function Pin Selection
     * |[28:24] |PG3MFP    |PG.3 Multi-function Pin Selection
     * @var SYS_T::GPG_MFP1
     * Offset: 0x564  GPIOG Multiple Function Control Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PG4MFP    |PG.4 Multi-function Pin Selection
     * |[12:8]  |PG5MFP    |PG.5 Multi-function Pin Selection
     * |[20:16] |PG6MFP    |PG.6 Multi-function Pin Selection
     * |[28:24] |PG7MFP    |PG.7 Multi-function Pin Selection
     * @var SYS_T::GPG_MFP2
     * Offset: 0x568  GPIOG Multiple Function Control Register 2
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PG8MFP    |PG.8 Multi-function Pin Selection
     * |[12:8]  |PG9MFP    |PG.9 Multi-function Pin Selection
     * |[20:16] |PG10MFP   |PG.10 Multi-function Pin Selection
     * |[28:24] |PG11MFP   |PG.11 Multi-function Pin Selection
     * @var SYS_T::GPG_MFP3
     * Offset: 0x56C  GPIOG Multiple Function Control Register 3
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PG12MFP   |PG.12 Multi-function Pin Selection
     * |[12:8]  |PG13MFP   |PG.13 Multi-function Pin Selection
     * |[20:16] |PG14MFP   |PG.14 Multi-function Pin Selection
     * |[28:24] |PG15MFP   |PG.15 Multi-function Pin Selection
     * @var SYS_T::GPH_MFP0
     * Offset: 0x570  GPIOH Multiple Function Control Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PH0MFP    |PH.0 Multi-function Pin Selection
     * |[12:8]  |PH1MFP    |PH.1 Multi-function Pin Selection
     * |[20:16] |PH2MFP    |PH.2 Multi-function Pin Selection
     * |[28:24] |PH3MFP    |PH.3 Multi-function Pin Selection
     * @var SYS_T::GPH_MFP1
     * Offset: 0x574  GPIOH Multiple Function Control Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PH4MFP    |PH.4 Multi-function Pin Selection
     * |[12:8]  |PH5MFP    |PH.5 Multi-function Pin Selection
     * |[20:16] |PH6MFP    |PH.6 Multi-function Pin Selection
     * |[28:24] |PH7MFP    |PH.7 Multi-function Pin Selection
     * @var SYS_T::GPH_MFP2
     * Offset: 0x578  GPIOH Multiple Function Control Register 2
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[4:0]   |PH8MFP    |PH.8 Multi-function Pin Selection
     * |[12:8]  |PH9MFP    |PH.9 Multi-function Pin Selection
     * |[20:16] |PH10MFP   |PH.10 Multi-function Pin Selection
     * |[28:24] |PH11MFP   |PH.11 Multi-function Pin Selection
     * @var SYS_T::I3C0PADCTL
     * Offset: 0x600  I3C0 PAD Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |SCL_PUCTLEN|I3C0 SCL PAD Pullup Control Enable Bit
     * |        |          |0 = I3C0 SCL PAD pullup controlled by GPIO(Default).
     * |        |          |1 = I3C0 SCL PAD pullup controlled by I3C0 controller.
     * |        |          |Note 1: If set to 0, pullup controllerd by PxPUSEL (x=A~H).
     * |        |          |Note 2: If set to 1, an external pullup resistor is required to provide the pullup function.
     * |        |          |Note 3: Only effective when the I3C0_SCL is selected in multi-function pin selection.
     * |[1]     |SDA_PUCTLEN|I3C0 SDA PAD Pullup Control Enable Bit
     * |        |          |0 = I3C0 SDA PAD pullup controlled by GPIO(Default).
     * |        |          |1 = I3C0 SDA PAD pullup controlled by I3C0 controller.
     * |        |          |Note 1: If set to 0, pullup controllerd by PxPUSEL (x=A~H).
     * |        |          |Note 2: If set to 1, an external pullup resistor is required to provide the pullup function.
     * |        |          |Note 3: Only effective when the I3C0_SDA is selected in multi-function pin selection.
     * |[4]     |PA0_MODE1P8V|PA.0 Additional PMOS/NMOS Enable Bit
     * |        |          |For stronger sink/source current ~3mA at VDDIO=1.8V.
     * |        |          |0 = Disable(Default).
     * |        |          |1 = Enable.
     * |[5]     |PA1_MODE1P8V|PA.1 Additional PMOS/NMOS Enable Bit
     * |        |          |For stronger sink/source current ~3mA at VDDIO=1.8V.
     * |        |          |0 = Disable(Default).
     * |        |          |1 = Enable.
     * |[6]     |PA4_MODE1P8V|PA.4 Additional PMOS/NMOS Enable Bit
     * |        |          |For stronger sink/source current ~3mA at VDDIO=1.8V.
     * |        |          |0 = Disable(Default).
     * |        |          |1 = Enable.
     * |[7]     |PA5_MODE1P8V|PA.5 Additional PMOS/NMOS Enable Bit
     * |        |          |For stronger sink/source current ~3mA at VDDIO=1.8V.
     * |        |          |0 = Disable(Default).
     * |        |          |1 = Enable.
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
    __I  uint32_t RESERVE2[20];
    __IO uint32_t GPA_MFOS;              /*!< [0x0080] GPIOA Multiple Function Output Select Register                   */
    __IO uint32_t GPB_MFOS;              /*!< [0x0084] GPIOB Multiple Function Output Select Register                   */
    __IO uint32_t GPC_MFOS;              /*!< [0x0088] GPIOC Multiple Function Output Select Register                   */
    __IO uint32_t GPD_MFOS;              /*!< [0x008c] GPIOD Multiple Function Output Select Register                   */
    __IO uint32_t GPE_MFOS;              /*!< [0x0090] GPIOE Multiple Function Output Select Register                   */
    __IO uint32_t GPF_MFOS;              /*!< [0x0094] GPIOF Multiple Function Output Select Register                   */
    __IO uint32_t GPG_MFOS;              /*!< [0x0098] GPIOG Multiple Function Output Select Register                   */
    __IO uint32_t GPH_MFOS;              /*!< [0x009c] GPIOH Multiple Function Output Select Register                   */
    __I  uint32_t RESERVE3[2];
    __IO uint32_t VTORSET;               /*!< [0x00a8] VTOR Setting Register                                            */
    __I  uint32_t RESERVE4[5];
    __IO uint32_t SRAM_INTCTL;           /*!< [0x00c0] System SRAM Secure ECC Interrupt Enable Control Register         */
    __IO uint32_t SRAM_STATUS;           /*!< [0x00c4] System SRAM Secure ECC Status Register                           */
    __I  uint32_t SRAM_ERRADDR;          /*!< [0x00c8] System SRAM Secure ECC Error Address Register                    */
    __IO uint32_t SRAM_LSCTL;            /*!< [0x00cc] SRAM Light Sleep Control Register                                */
    __IO uint32_t SRAM_BISTCTL;          /*!< [0x00d0] System SRAM BIST Test Control Register                           */
    __I  uint32_t SRAM_BISTSTS;          /*!< [0x00d4] System SRAM BIST Test Status Register                            */
    __I  uint32_t RESERVE5[1];
    __IO uint32_t SRAM_ECCEN;            /*!< [0x00dc] System SRAM ECC Control Register                                 */
    __I  uint32_t RESERVE6[1];
    __IO uint32_t HIRCTCTL;              /*!< [0x00e4] HIRC48M Trim Control Register                                    */
    __IO uint32_t HIRCTIEN;              /*!< [0x00e8] HIRC48M Trim Interrupt Enable Register                           */
    __IO uint32_t HIRCTISTS;             /*!< [0x00ec] HIRC48M Trim Interrupt Status Register                           */
    __IO uint32_t SRAM_NSINTCTL;         /*!< [0x00f0] System SRAM Non-Secure ECC Interrupt Enable Control Register     */
    __IO uint32_t SRAM_NSSTATUS;         /*!< [0x00f4] System SRAM Non-Secure ECC Status Register                       */
    __I  uint32_t SRAM_NSERRADDR;        /*!< [0x00f8] System SRAM Non-Secure ECC Error Address Register                */
    __I  uint32_t RESERVE7[1];
    __O  uint32_t REGLCTL;               /*!< [0x0100] Register Lock Control Register                                   */
    __I  uint32_t RESERVE8[58];
    __IO uint32_t PORDISAN;              /*!< [0x01ec] Analog POR Disable Control Register                              */
    __I  uint32_t RESERVE9[132];
    __IO uint32_t AHBMCTL;               /*!< [0x0400] AHB Bus Matrix Priority Control Register                         */
    __I  uint32_t RESERVE10[63];
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
    __IO uint32_t GPF_MFP3;              /*!< [0x055c] GPIOF Multiple Function Control Register 3                       */
    __IO uint32_t GPG_MFP0;              /*!< [0x0560] GPIOG Multiple Function Control Register 0                       */
    __IO uint32_t GPG_MFP1;              /*!< [0x0564] GPIOG Multiple Function Control Register 1                       */
    __IO uint32_t GPG_MFP2;              /*!< [0x0568] GPIOG Multiple Function Control Register 2                       */
    __IO uint32_t GPG_MFP3;              /*!< [0x056c] GPIOG Multiple Function Control Register 3                       */
    __IO uint32_t GPH_MFP0;              /*!< [0x0570] GPIOH Multiple Function Control Register 0                       */
    __IO uint32_t GPH_MFP1;              /*!< [0x0574] GPIOH Multiple Function Control Register 1                       */
    __IO uint32_t GPH_MFP2;              /*!< [0x0578] GPIOH Multiple Function Control Register 2                       */
    __I  uint32_t RESERVE11[33];
    __IO uint32_t I3C0PADCTL;            /*!< [0x0600] I3C0 PAD Control Register                                        */

} SYS_T;

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

#define SYS_RSTSTS_LVRRF_Pos             (3)                                               /*!< SYS_T::RSTSTS: LVRRF Position          */
#define SYS_RSTSTS_LVRRF_Msk             (0x1ul << SYS_RSTSTS_LVRRF_Pos)                   /*!< SYS_T::RSTSTS: LVRRF Mask              */

#define SYS_RSTSTS_BODRF_Pos             (4)                                               /*!< SYS_T::RSTSTS: BODRF Position          */
#define SYS_RSTSTS_BODRF_Msk             (0x1ul << SYS_RSTSTS_BODRF_Pos)                   /*!< SYS_T::RSTSTS: BODRF Mask              */

#define SYS_RSTSTS_MCURF_Pos             (5)                                               /*!< SYS_T::RSTSTS: MCURF Position          */
#define SYS_RSTSTS_MCURF_Msk             (0x1ul << SYS_RSTSTS_MCURF_Pos)                   /*!< SYS_T::RSTSTS: MCURF Mask              */

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

#define SYS_IPRST0_CANFD0RST_Pos         (8)                                               /*!< SYS_T::IPRST0: CANFD0RST Position      */
#define SYS_IPRST0_CANFD0RST_Msk         (0x1ul << SYS_IPRST0_CANFD0RST_Pos)               /*!< SYS_T::IPRST0: CANFD0RST Mask          */

#define SYS_IPRST0_CANFD1RST_Pos         (9)                                               /*!< SYS_T::IPRST0: CANFD1RST Position      */
#define SYS_IPRST0_CANFD1RST_Msk         (0x1ul << SYS_IPRST0_CANFD1RST_Pos)               /*!< SYS_T::IPRST0: CANFD1RST Mask          */

#define SYS_IPRST0_CRPTRST_Pos           (12)                                              /*!< SYS_T::IPRST0: CRPTRST Position        */
#define SYS_IPRST0_CRPTRST_Msk           (0x1ul << SYS_IPRST0_CRPTRST_Pos)                 /*!< SYS_T::IPRST0: CRPTRST Mask            */

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

#define SYS_IPRST1_I3C0RST_Pos           (11)                                              /*!< SYS_T::IPRST1: I3C0RST Position        */
#define SYS_IPRST1_I3C0RST_Msk           (0x1ul << SYS_IPRST1_I3C0RST_Pos)                 /*!< SYS_T::IPRST1: I3C0RST Mask            */

#define SYS_IPRST1_QSPI0RST_Pos          (12)                                              /*!< SYS_T::IPRST1: QSPI0RST Position       */
#define SYS_IPRST1_QSPI0RST_Msk          (0x1ul << SYS_IPRST1_QSPI0RST_Pos)                /*!< SYS_T::IPRST1: QSPI0RST Mask           */

#define SYS_IPRST1_SPI0RST_Pos           (13)                                              /*!< SYS_T::IPRST1: SPI0RST Position        */
#define SYS_IPRST1_SPI0RST_Msk           (0x1ul << SYS_IPRST1_SPI0RST_Pos)                 /*!< SYS_T::IPRST1: SPI0RST Mask            */

#define SYS_IPRST1_SPI1RST_Pos           (14)                                              /*!< SYS_T::IPRST1: SPI1RST Position        */
#define SYS_IPRST1_SPI1RST_Msk           (0x1ul << SYS_IPRST1_SPI1RST_Pos)                 /*!< SYS_T::IPRST1: SPI1RST Mask            */

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

#define SYS_IPRST1_UART8RST_Pos          (22)                                              /*!< SYS_T::IPRST1: UART8RST Position       */
#define SYS_IPRST1_UART8RST_Msk          (0x1ul << SYS_IPRST1_UART8RST_Pos)                /*!< SYS_T::IPRST1: UART8RST Mask           */

#define SYS_IPRST1_UART9RST_Pos          (23)                                              /*!< SYS_T::IPRST1: UART9RST Position       */
#define SYS_IPRST1_UART9RST_Msk          (0x1ul << SYS_IPRST1_UART9RST_Pos)                /*!< SYS_T::IPRST1: UART9RST Mask           */

#define SYS_IPRST1_WWDT0RST_Pos          (24)                                              /*!< SYS_T::IPRST1: WWDT0RST Position       */
#define SYS_IPRST1_WWDT0RST_Msk          (0x1ul << SYS_IPRST1_WWDT0RST_Pos)                /*!< SYS_T::IPRST1: WWDT0RST Mask           */

#define SYS_IPRST1_WWDT1RST_Pos          (25)                                              /*!< SYS_T::IPRST1: WWDT1RST Position       */
#define SYS_IPRST1_WWDT1RST_Msk          (0x1ul << SYS_IPRST1_WWDT1RST_Pos)                /*!< SYS_T::IPRST1: WWDT1RST Mask           */

#define SYS_IPRST1_USBDRST_Pos           (27)                                              /*!< SYS_T::IPRST1: USBDRST Position        */
#define SYS_IPRST1_USBDRST_Msk           (0x1ul << SYS_IPRST1_USBDRST_Pos)                 /*!< SYS_T::IPRST1: USBDRST Mask            */

#define SYS_IPRST1_EADC0RST_Pos          (28)                                              /*!< SYS_T::IPRST1: EADC0RST Position       */
#define SYS_IPRST1_EADC0RST_Msk          (0x1ul << SYS_IPRST1_EADC0RST_Pos)                /*!< SYS_T::IPRST1: EADC0RST Mask           */

#define SYS_IPRST1_TRNGRST_Pos           (31)                                              /*!< SYS_T::IPRST1: TRNGRST Position        */
#define SYS_IPRST1_TRNGRST_Msk           (0x1ul << SYS_IPRST1_TRNGRST_Pos)                 /*!< SYS_T::IPRST1: TRNGRST Mask            */

#define SYS_IPRST2_USCI0RST_Pos          (8)                                               /*!< SYS_T::IPRST2: USCI0RST Position       */
#define SYS_IPRST2_USCI0RST_Msk          (0x1ul << SYS_IPRST2_USCI0RST_Pos)                /*!< SYS_T::IPRST2: USCI0RST Mask           */

#define SYS_IPRST2_USCI1RST_Pos          (9)                                               /*!< SYS_T::IPRST2: USCI1RST Position       */
#define SYS_IPRST2_USCI1RST_Msk          (0x1ul << SYS_IPRST2_USCI1RST_Pos)                /*!< SYS_T::IPRST2: USCI1RST Mask           */

#define SYS_IPRST2_DAC0RST_Pos           (12)                                              /*!< SYS_T::IPRST2: DAC0RST Position        */
#define SYS_IPRST2_DAC0RST_Msk           (0x1ul << SYS_IPRST2_DAC0RST_Pos)                 /*!< SYS_T::IPRST2: DAC0RST Mask            */

#define SYS_IPRST2_PWM0RST_Pos           (16)                                              /*!< SYS_T::IPRST2: PWM0RST Position        */
#define SYS_IPRST2_PWM0RST_Msk           (0x1ul << SYS_IPRST2_PWM0RST_Pos)                 /*!< SYS_T::IPRST2: PWM0RST Mask            */

#define SYS_IPRST2_PWM1RST_Pos           (17)                                              /*!< SYS_T::IPRST2: PWM1RST Position        */
#define SYS_IPRST2_PWM1RST_Msk           (0x1ul << SYS_IPRST2_PWM1RST_Pos)                 /*!< SYS_T::IPRST2: PWM1RST Mask            */

#define SYS_IPRST2_BPWM0RST_Pos          (18)                                              /*!< SYS_T::IPRST2: BPWM0RST Position       */
#define SYS_IPRST2_BPWM0RST_Msk          (0x1ul << SYS_IPRST2_BPWM0RST_Pos)                /*!< SYS_T::IPRST2: BPWM0RST Mask           */

#define SYS_IPRST2_BPWM1RST_Pos          (19)                                              /*!< SYS_T::IPRST2: BPWM1RST Position       */
#define SYS_IPRST2_BPWM1RST_Msk          (0x1ul << SYS_IPRST2_BPWM1RST_Pos)                /*!< SYS_T::IPRST2: BPWM1RST Mask           */

#define SYS_IPRST2_EQEI0RST_Pos          (20)                                              /*!< SYS_T::IPRST2: EQEI0RST Position       */
#define SYS_IPRST2_EQEI0RST_Msk          (0x1ul << SYS_IPRST2_EQEI0RST_Pos)                /*!< SYS_T::IPRST2: EQEI0RST Mask           */

#define SYS_IPRST2_EQEI1RST_Pos          (21)                                              /*!< SYS_T::IPRST2: EQEI1RST Position       */
#define SYS_IPRST2_EQEI1RST_Msk          (0x1ul << SYS_IPRST2_EQEI1RST_Pos)                /*!< SYS_T::IPRST2: EQEI1RST Mask           */

#define SYS_IPRST2_UART6RST_Pos          (24)                                              /*!< SYS_T::IPRST2: UART6RST Position       */
#define SYS_IPRST2_UART6RST_Msk          (0x1ul << SYS_IPRST2_UART6RST_Pos)                /*!< SYS_T::IPRST2: UART6RST Mask           */

#define SYS_IPRST2_UART7RST_Pos          (25)                                              /*!< SYS_T::IPRST2: UART7RST Position       */
#define SYS_IPRST2_UART7RST_Msk          (0x1ul << SYS_IPRST2_UART7RST_Pos)                /*!< SYS_T::IPRST2: UART7RST Mask           */

#define SYS_IPRST2_ECAP0RST_Pos          (26)                                              /*!< SYS_T::IPRST2: ECAP0RST Position       */
#define SYS_IPRST2_ECAP0RST_Msk          (0x1ul << SYS_IPRST2_ECAP0RST_Pos)                /*!< SYS_T::IPRST2: ECAP0RST Mask           */

#define SYS_IPRST2_EADC1RST_Pos          (31)                                              /*!< SYS_T::IPRST2: EADC1RST Position       */
#define SYS_IPRST2_EADC1RST_Msk          (0x1ul << SYS_IPRST2_EADC1RST_Pos)                /*!< SYS_T::IPRST2: EADC1RST Mask           */

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

#define SYS_IVSCTL_AVDDDIV4EN_Pos        (2)                                               /*!< SYS_T::IVSCTL: AVDDDIV4EN Position     */
#define SYS_IVSCTL_AVDDDIV4EN_Msk        (0x1ul << SYS_IVSCTL_AVDDDIV4EN_Pos)              /*!< SYS_T::IVSCTL: AVDDDIV4EN Mask         */

#define SYS_IVSCTL_VTEMPSEL_Pos          (4)                                               /*!< SYS_T::IVSCTL: VTEMPSEL Position       */
#define SYS_IVSCTL_VTEMPSEL_Msk          (0x1ul << SYS_IVSCTL_VTEMPSEL_Pos)                /*!< SYS_T::IVSCTL: VTEMPSEL Mask           */

#define SYS_IPRST3_LLSI0RST_Pos          (0)                                               /*!< SYS_T::IPRST3: LLSI0RST Position       */
#define SYS_IPRST3_LLSI0RST_Msk          (0x1ul << SYS_IPRST3_LLSI0RST_Pos)                /*!< SYS_T::IPRST3: LLSI0RST Mask           */

#define SYS_IPRST3_LLSI1RST_Pos          (1)                                               /*!< SYS_T::IPRST3: LLSI1RST Position       */
#define SYS_IPRST3_LLSI1RST_Msk          (0x1ul << SYS_IPRST3_LLSI1RST_Pos)                /*!< SYS_T::IPRST3: LLSI1RST Mask           */

#define SYS_IPRST3_LLSI2RST_Pos          (2)                                               /*!< SYS_T::IPRST3: LLSI2RST Position       */
#define SYS_IPRST3_LLSI2RST_Msk          (0x1ul << SYS_IPRST3_LLSI2RST_Pos)                /*!< SYS_T::IPRST3: LLSI2RST Mask           */

#define SYS_IPRST3_LLSI3RST_Pos          (3)                                               /*!< SYS_T::IPRST3: LLSI3RST Position       */
#define SYS_IPRST3_LLSI3RST_Msk          (0x1ul << SYS_IPRST3_LLSI3RST_Pos)                /*!< SYS_T::IPRST3: LLSI3RST Mask           */

#define SYS_IPRST3_LLSI4RST_Pos          (4)                                               /*!< SYS_T::IPRST3: LLSI4RST Position       */
#define SYS_IPRST3_LLSI4RST_Msk          (0x1ul << SYS_IPRST3_LLSI4RST_Pos)                /*!< SYS_T::IPRST3: LLSI4RST Mask           */

#define SYS_IPRST3_LLSI5RST_Pos          (5)                                               /*!< SYS_T::IPRST3: LLSI5RST Position       */
#define SYS_IPRST3_LLSI5RST_Msk          (0x1ul << SYS_IPRST3_LLSI5RST_Pos)                /*!< SYS_T::IPRST3: LLSI5RST Mask           */

#define SYS_IPRST3_LLSI6RST_Pos          (6)                                               /*!< SYS_T::IPRST3: LLSI6RST Position       */
#define SYS_IPRST3_LLSI6RST_Msk          (0x1ul << SYS_IPRST3_LLSI6RST_Pos)                /*!< SYS_T::IPRST3: LLSI6RST Mask           */

#define SYS_IPRST3_LLSI7RST_Pos          (7)                                               /*!< SYS_T::IPRST3: LLSI7RST Position       */
#define SYS_IPRST3_LLSI7RST_Msk          (0x1ul << SYS_IPRST3_LLSI7RST_Pos)                /*!< SYS_T::IPRST3: LLSI7RST Mask           */

#define SYS_IPRST3_LLSI8RST_Pos          (8)                                               /*!< SYS_T::IPRST3: LLSI8RST Position       */
#define SYS_IPRST3_LLSI8RST_Msk          (0x1ul << SYS_IPRST3_LLSI8RST_Pos)                /*!< SYS_T::IPRST3: LLSI8RST Mask           */

#define SYS_IPRST3_LLSI9RST_Pos          (9)                                               /*!< SYS_T::IPRST3: LLSI9RST Position       */
#define SYS_IPRST3_LLSI9RST_Msk          (0x1ul << SYS_IPRST3_LLSI9RST_Pos)                /*!< SYS_T::IPRST3: LLSI9RST Mask           */

#define SYS_IPRST3_ELLSI0RST_Pos         (10)                                              /*!< SYS_T::IPRST3: ELLSI0RST Position      */
#define SYS_IPRST3_ELLSI0RST_Msk         (0x1ul << SYS_IPRST3_ELLSI0RST_Pos)               /*!< SYS_T::IPRST3: ELLSI0RST Mask          */

#define SYS_IPRST3_ELLSI1RST_Pos         (11)                                              /*!< SYS_T::IPRST3: ELLSI1RST Position      */
#define SYS_IPRST3_ELLSI1RST_Msk         (0x1ul << SYS_IPRST3_ELLSI1RST_Pos)               /*!< SYS_T::IPRST3: ELLSI1RST Mask          */

#define SYS_VREFCTL_VREFCTL_Pos          (0)                                               /*!< SYS_T::VREFCTL: VREFCTL Position       */
#define SYS_VREFCTL_VREFCTL_Msk          (0x7ul << SYS_VREFCTL_VREFCTL_Pos)                /*!< SYS_T::VREFCTL: VREFCTL Mask           */

#define SYS_VREFCTL_PRELOAD_SEL_Pos      (6)                                               /*!< SYS_T::VREFCTL: PRELOAD_SEL Position   */
#define SYS_VREFCTL_PRELOAD_SEL_Msk      (0x3ul << SYS_VREFCTL_PRELOAD_SEL_Pos)            /*!< SYS_T::VREFCTL: PRELOAD_SEL Mask       */

#define SYS_USBPHY_USBROLE_Pos           (0)                                               /*!< SYS_T::USBPHY: USBROLE Position        */
#define SYS_USBPHY_USBROLE_Msk           (0x3ul << SYS_USBPHY_USBROLE_Pos)                 /*!< SYS_T::USBPHY: USBROLE Mask            */

#define SYS_USBPHY_USBEN_Pos             (8)                                               /*!< SYS_T::USBPHY: USBEN Position          */
#define SYS_USBPHY_USBEN_Msk             (0x1ul << SYS_USBPHY_USBEN_Pos)                   /*!< SYS_T::USBPHY: USBEN Mask              */

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

#define SYS_VTORSET_VTORSET_Pos          (7)                                               /*!< SYS_T::VTORSET: VTORSET Position       */
#define SYS_VTORSET_VTORSET_Msk          (0x1fffffful << SYS_VTORSET_VTORSET_Pos)          /*!< SYS_T::VTORSET: VTORSET Mask           */

#define SYS_SRAM_INTCTL_EERRIEN_Pos      (0)                                               /*!< SYS_T::SRAM_INTCTL: EERRIEN Position   */
#define SYS_SRAM_INTCTL_EERRIEN_Msk      (0x1ul << SYS_SRAM_INTCTL_EERRIEN_Pos)            /*!< SYS_T::SRAM_INTCTL: EERRIEN Mask       */

#define SYS_SRAM_INTCTL_ECCSINGLE_Pos    (1)                                               /*!< SYS_T::SRAM_INTCTL: ECCSINGLE Position */
#define SYS_SRAM_INTCTL_ECCSINGLE_Msk    (0x1ul << SYS_SRAM_INTCTL_ECCSINGLE_Pos)          /*!< SYS_T::SRAM_INTCTL: ECCSINGLE Mask     */

#define SYS_SRAM_STATUS_EERRIF_Pos       (0)                                               /*!< SYS_T::SRAM_STATUS: EERRIF Position    */
#define SYS_SRAM_STATUS_EERRIF_Msk       (0x1ul << SYS_SRAM_STATUS_EERRIF_Pos)             /*!< SYS_T::SRAM_STATUS: EERRIF Mask        */

#define SYS_SRAM_ERRADDR_ERRADDR_Pos     (0)                                               /*!< SYS_T::SRAM_ERRADDR: ERRADDR Position  */
#define SYS_SRAM_ERRADDR_ERRADDR_Msk     (0xfffffffful << SYS_SRAM_ERRADDR_ERRADDR_Pos)    /*!< SYS_T::SRAM_ERRADDR: ERRADDR Mask      */

#define SYS_SRAM_LSCTL_MKROM_LS_Pos      (0)                                               /*!< SYS_T::SRAM_LSCTL: MKROM_LS Position   */
#define SYS_SRAM_LSCTL_MKROM_LS_Msk      (0x1ul << SYS_SRAM_LSCTL_MKROM_LS_Pos)            /*!< SYS_T::SRAM_LSCTL: MKROM_LS Mask       */

#define SYS_SRAM_LSCTL_MCAN0_LS_Pos      (1)                                               /*!< SYS_T::SRAM_LSCTL: MCAN0_LS Position   */
#define SYS_SRAM_LSCTL_MCAN0_LS_Msk      (0x1ul << SYS_SRAM_LSCTL_MCAN0_LS_Pos)            /*!< SYS_T::SRAM_LSCTL: MCAN0_LS Mask       */

#define SYS_SRAM_LSCTL_MCAN1_LS_Pos      (2)                                               /*!< SYS_T::SRAM_LSCTL: MCAN1_LS Position   */
#define SYS_SRAM_LSCTL_MCAN1_LS_Msk      (0x1ul << SYS_SRAM_LSCTL_MCAN1_LS_Pos)            /*!< SYS_T::SRAM_LSCTL: MCAN1_LS Mask       */

#define SYS_SRAM_LSCTL_USBD_LS_Pos       (4)                                               /*!< SYS_T::SRAM_LSCTL: USBD_LS Position    */
#define SYS_SRAM_LSCTL_USBD_LS_Msk       (0x1ul << SYS_SRAM_LSCTL_USBD_LS_Pos)             /*!< SYS_T::SRAM_LSCTL: USBD_LS Mask        */

#define SYS_SRAM_LSCTL_I3C_LS_Pos        (6)                                               /*!< SYS_T::SRAM_LSCTL: I3C_LS Position     */
#define SYS_SRAM_LSCTL_I3C_LS_Msk        (0x1ul << SYS_SRAM_LSCTL_I3C_LS_Pos)              /*!< SYS_T::SRAM_LSCTL: I3C_LS Mask         */

#define SYS_SRAM_BISTCTL_SRBIST0_Pos     (0)                                               /*!< SYS_T::SRAM_BISTCTL: SRBIST0 Position  */
#define SYS_SRAM_BISTCTL_SRBIST0_Msk     (0x1ul << SYS_SRAM_BISTCTL_SRBIST0_Pos)           /*!< SYS_T::SRAM_BISTCTL: SRBIST0 Mask      */

#define SYS_SRAM_BISTCTL_SRBIST1_Pos     (1)                                               /*!< SYS_T::SRAM_BISTCTL: SRBIST1 Position  */
#define SYS_SRAM_BISTCTL_SRBIST1_Msk     (0x1ul << SYS_SRAM_BISTCTL_SRBIST1_Pos)           /*!< SYS_T::SRAM_BISTCTL: SRBIST1 Mask      */

#define SYS_SRAM_BISTCTL_CACHEBIST_Pos   (2)                                               /*!< SYS_T::SRAM_BISTCTL: CACHEBIST Position*/
#define SYS_SRAM_BISTCTL_CACHEBIST_Msk   (0x1ul << SYS_SRAM_BISTCTL_CACHEBIST_Pos)         /*!< SYS_T::SRAM_BISTCTL: CACHEBIST Mask    */

#define SYS_SRAM_BISTCTL_CANBIST_Pos     (3)                                               /*!< SYS_T::SRAM_BISTCTL: CANBIST Position  */
#define SYS_SRAM_BISTCTL_CANBIST_Msk     (0x1ul << SYS_SRAM_BISTCTL_CANBIST_Pos)           /*!< SYS_T::SRAM_BISTCTL: CANBIST Mask      */

#define SYS_SRAM_BISTCTL_USBDBIST_Pos    (4)                                               /*!< SYS_T::SRAM_BISTCTL: USBDBIST Position */
#define SYS_SRAM_BISTCTL_USBDBIST_Msk    (0x1ul << SYS_SRAM_BISTCTL_USBDBIST_Pos)          /*!< SYS_T::SRAM_BISTCTL: USBDBIST Mask     */

#define SYS_SRAM_BISTCTL_I3CBIST_Pos     (12)                                              /*!< SYS_T::SRAM_BISTCTL: I3CBIST Position  */
#define SYS_SRAM_BISTCTL_I3CBIST_Msk     (0x1ul << SYS_SRAM_BISTCTL_I3CBIST_Pos)           /*!< SYS_T::SRAM_BISTCTL: I3CBIST Mask      */

#define SYS_SRAM_BISTCTL_EEPROMBIST_Pos  (13)                                              /*!< SYS_T::SRAM_BISTCTL: EEPROMBIST Position*/
#define SYS_SRAM_BISTCTL_EEPROMBIST_Msk  (0x1ul << SYS_SRAM_BISTCTL_EEPROMBIST_Pos)        /*!< SYS_T::SRAM_BISTCTL: EEPROMBIST Mask   */

#define SYS_SRAM_BISTSTS_SRBISTEF0_Pos   (0)                                               /*!< SYS_T::SRAM_BISTSTS: SRBISTEF0 Position*/
#define SYS_SRAM_BISTSTS_SRBISTEF0_Msk   (0x1ul << SYS_SRAM_BISTSTS_SRBISTEF0_Pos)         /*!< SYS_T::SRAM_BISTSTS: SRBISTEF0 Mask    */

#define SYS_SRAM_BISTSTS_SRBISTEF1_Pos   (1)                                               /*!< SYS_T::SRAM_BISTSTS: SRBISTEF1 Position*/
#define SYS_SRAM_BISTSTS_SRBISTEF1_Msk   (0x1ul << SYS_SRAM_BISTSTS_SRBISTEF1_Pos)         /*!< SYS_T::SRAM_BISTSTS: SRBISTEF1 Mask    */

#define SYS_SRAM_BISTSTS_CACHEBISTEF_Pos (2)                                               /*!< SYS_T::SRAM_BISTSTS: CACHEBISTEF Position*/
#define SYS_SRAM_BISTSTS_CACHEBISTEF_Msk (0x1ul << SYS_SRAM_BISTSTS_CACHEBISTEF_Pos)       /*!< SYS_T::SRAM_BISTSTS: CACHEBISTEF Mask  */

#define SYS_SRAM_BISTSTS_CANBEF_Pos      (3)                                               /*!< SYS_T::SRAM_BISTSTS: CANBEF Position   */
#define SYS_SRAM_BISTSTS_CANBEF_Msk      (0x1ul << SYS_SRAM_BISTSTS_CANBEF_Pos)            /*!< SYS_T::SRAM_BISTSTS: CANBEF Mask       */

#define SYS_SRAM_BISTSTS_USBDBEF_Pos     (4)                                               /*!< SYS_T::SRAM_BISTSTS: USBDBEF Position  */
#define SYS_SRAM_BISTSTS_USBDBEF_Msk     (0x1ul << SYS_SRAM_BISTSTS_USBDBEF_Pos)           /*!< SYS_T::SRAM_BISTSTS: USBDBEF Mask      */

#define SYS_SRAM_BISTSTS_I3CBEF_Pos      (12)                                              /*!< SYS_T::SRAM_BISTSTS: I3CBEF Position   */
#define SYS_SRAM_BISTSTS_I3CBEF_Msk      (0x1ul << SYS_SRAM_BISTSTS_I3CBEF_Pos)            /*!< SYS_T::SRAM_BISTSTS: I3CBEF Mask       */

#define SYS_SRAM_BISTSTS_EEPROMBEF_Pos   (13)                                              /*!< SYS_T::SRAM_BISTSTS: EEPROMBEF Position*/
#define SYS_SRAM_BISTSTS_EEPROMBEF_Msk   (0x1ul << SYS_SRAM_BISTSTS_EEPROMBEF_Pos)         /*!< SYS_T::SRAM_BISTSTS: EEPROMBEF Mask    */

#define SYS_SRAM_BISTSTS_SRBEND0_Pos     (16)                                              /*!< SYS_T::SRAM_BISTSTS: SRBEND0 Position  */
#define SYS_SRAM_BISTSTS_SRBEND0_Msk     (0x1ul << SYS_SRAM_BISTSTS_SRBEND0_Pos)           /*!< SYS_T::SRAM_BISTSTS: SRBEND0 Mask      */

#define SYS_SRAM_BISTSTS_SRBEND1_Pos     (17)                                              /*!< SYS_T::SRAM_BISTSTS: SRBEND1 Position  */
#define SYS_SRAM_BISTSTS_SRBEND1_Msk     (0x1ul << SYS_SRAM_BISTSTS_SRBEND1_Pos)           /*!< SYS_T::SRAM_BISTSTS: SRBEND1 Mask      */

#define SYS_SRAM_BISTSTS_CACHEBEND_Pos   (18)                                              /*!< SYS_T::SRAM_BISTSTS: CACHEBEND Position*/
#define SYS_SRAM_BISTSTS_CACHEBEND_Msk   (0x1ul << SYS_SRAM_BISTSTS_CACHEBEND_Pos)         /*!< SYS_T::SRAM_BISTSTS: CACHEBEND Mask    */

#define SYS_SRAM_BISTSTS_CANBEND_Pos     (19)                                              /*!< SYS_T::SRAM_BISTSTS: CANBEND Position  */
#define SYS_SRAM_BISTSTS_CANBEND_Msk     (0x1ul << SYS_SRAM_BISTSTS_CANBEND_Pos)           /*!< SYS_T::SRAM_BISTSTS: CANBEND Mask      */

#define SYS_SRAM_BISTSTS_USBDBEND_Pos    (20)                                              /*!< SYS_T::SRAM_BISTSTS: USBDBEND Position */
#define SYS_SRAM_BISTSTS_USBDBEND_Msk    (0x1ul << SYS_SRAM_BISTSTS_USBDBEND_Pos)          /*!< SYS_T::SRAM_BISTSTS: USBDBEND Mask     */

#define SYS_SRAM_BISTSTS_I3CBEND_Pos     (28)                                              /*!< SYS_T::SRAM_BISTSTS: I3CBEND Position  */
#define SYS_SRAM_BISTSTS_I3CBEND_Msk     (0x1ul << SYS_SRAM_BISTSTS_I3CBEND_Pos)           /*!< SYS_T::SRAM_BISTSTS: I3CBEND Mask      */

#define SYS_SRAM_BISTSTS_EEPROMBEND_Pos  (29)                                              /*!< SYS_T::SRAM_BISTSTS: EEPROMBEND Position*/
#define SYS_SRAM_BISTSTS_EEPROMBEND_Msk  (0x1ul << SYS_SRAM_BISTSTS_EEPROMBEND_Pos)        /*!< SYS_T::SRAM_BISTSTS: EEPROMBEND Mask   */

#define SYS_SRAM_ECCEN_ECCEN_Pos         (0)                                               /*!< SYS_T::SRAM_ECCEN: ECCEN Position      */
#define SYS_SRAM_ECCEN_ECCEN_Msk         (0x1ul << SYS_SRAM_ECCEN_ECCEN_Pos)               /*!< SYS_T::SRAM_ECCEN: ECCEN Mask          */

#define SYS_HIRCTCTL_FREQSEL_Pos         (0)                                               /*!< SYS_T::HIRCTCTL: FREQSEL Position      */
#define SYS_HIRCTCTL_FREQSEL_Msk         (0x3ul << SYS_HIRCTCTL_FREQSEL_Pos)               /*!< SYS_T::HIRCTCTL: FREQSEL Mask          */

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

#define SYS_SRAM_NSINTCTL_PERRIEN_Pos    (0)                                               /*!< SYS_T::SRAM_NSINTCTL: PERRIEN Position */
#define SYS_SRAM_NSINTCTL_PERRIEN_Msk    (0x1ul << SYS_SRAM_NSINTCTL_PERRIEN_Pos)          /*!< SYS_T::SRAM_NSINTCTL: PERRIEN Mask     */

#define SYS_SRAM_NSINTCTL_ECCSINGLE_Pos  (1)                                               /*!< SYS_T::SRAM_NSINTCTL: ECCSINGLE Position*/
#define SYS_SRAM_NSINTCTL_ECCSINGLE_Msk  (0x1ul << SYS_SRAM_NSINTCTL_ECCSINGLE_Pos)        /*!< SYS_T::SRAM_NSINTCTL: ECCSINGLE Mask   */

#define SYS_SRAM_NSSTATUS_PERRIF_Pos     (0)                                               /*!< SYS_T::SRAM_NSSTATUS: PERRIF Position  */
#define SYS_SRAM_NSSTATUS_PERRIF_Msk     (0x1ul << SYS_SRAM_NSSTATUS_PERRIF_Pos)           /*!< SYS_T::SRAM_NSSTATUS: PERRIF Mask      */

#define SYS_SRAM_NSERRADDR_ERRADDR_Pos   (0)                                               /*!< SYS_T::SRAM_NSERRADDR: ERRADDR Position*/
#define SYS_SRAM_NSERRADDR_ERRADDR_Msk   (0xfffffffful << SYS_SRAM_NSERRADDR_ERRADDR_Pos)  /*!< SYS_T::SRAM_NSERRADDR: ERRADDR Mask    */

#define SYS_REGLCTL_REGLCTL_Pos          (0)                                               /*!< SYS_T::REGLCTL: REGLCTL Position       */
#define SYS_REGLCTL_REGLCTL_Msk          (0xfful << SYS_REGLCTL_REGLCTL_Pos)               /*!< SYS_T::REGLCTL: REGLCTL Mask           */

#define SYS_PORDISAN_POROFFAN_Pos        (0)                                               /*!< SYS_T::PORDISAN: POROFFAN Position     */
#define SYS_PORDISAN_POROFFAN_Msk        (0xfffful << SYS_PORDISAN_POROFFAN_Pos)           /*!< SYS_T::PORDISAN: POROFFAN Mask         */

#define SYS_AHBMCTL_INTACTEN_Pos         (0)                                               /*!< SYS_T::AHBMCTL: INTACTEN Position      */
#define SYS_AHBMCTL_INTACTEN_Msk         (0x1ul << SYS_AHBMCTL_INTACTEN_Pos)               /*!< SYS_T::AHBMCTL: INTACTEN Mask          */

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

#define SYS_GPC_MFP3_PC15MFP_Pos         (24)                                              /*!< SYS_T::GPC_MFP3: PC15MFP Position      */
#define SYS_GPC_MFP3_PC15MFP_Msk         (0x1ful << SYS_GPC_MFP3_PC15MFP_Pos)              /*!< SYS_T::GPC_MFP3: PC15MFP Mask          */

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

#define SYS_GPF_MFP3_PF12MFP_Pos         (0)                                               /*!< SYS_T::GPF_MFP3: PF12MFP Position      */
#define SYS_GPF_MFP3_PF12MFP_Msk         (0x1ful << SYS_GPF_MFP3_PF12MFP_Pos)              /*!< SYS_T::GPF_MFP3: PF12MFP Mask          */

#define SYS_GPF_MFP3_PF13MFP_Pos         (8)                                               /*!< SYS_T::GPF_MFP3: PF13MFP Position      */
#define SYS_GPF_MFP3_PF13MFP_Msk         (0x1ful << SYS_GPF_MFP3_PF13MFP_Pos)              /*!< SYS_T::GPF_MFP3: PF13MFP Mask          */

#define SYS_GPF_MFP3_PF14MFP_Pos         (16)                                              /*!< SYS_T::GPF_MFP3: PF14MFP Position      */
#define SYS_GPF_MFP3_PF14MFP_Msk         (0x1ful << SYS_GPF_MFP3_PF14MFP_Pos)              /*!< SYS_T::GPF_MFP3: PF14MFP Mask          */

#define SYS_GPF_MFP3_PF15MFP_Pos         (24)                                              /*!< SYS_T::GPF_MFP3: PF15MFP Position      */
#define SYS_GPF_MFP3_PF15MFP_Msk         (0x1ful << SYS_GPF_MFP3_PF15MFP_Pos)              /*!< SYS_T::GPF_MFP3: PF15MFP Mask          */

#define SYS_GPG_MFP0_PG0MFP_Pos          (0)                                               /*!< SYS_T::GPG_MFP0: PG0MFP Position       */
#define SYS_GPG_MFP0_PG0MFP_Msk          (0x1ful << SYS_GPG_MFP0_PG0MFP_Pos)               /*!< SYS_T::GPG_MFP0: PG0MFP Mask           */

#define SYS_GPG_MFP0_PG1MFP_Pos          (8)                                               /*!< SYS_T::GPG_MFP0: PG1MFP Position       */
#define SYS_GPG_MFP0_PG1MFP_Msk          (0x1ful << SYS_GPG_MFP0_PG1MFP_Pos)               /*!< SYS_T::GPG_MFP0: PG1MFP Mask           */

#define SYS_GPG_MFP0_PG2MFP_Pos          (16)                                              /*!< SYS_T::GPG_MFP0: PG2MFP Position       */
#define SYS_GPG_MFP0_PG2MFP_Msk          (0x1ful << SYS_GPG_MFP0_PG2MFP_Pos)               /*!< SYS_T::GPG_MFP0: PG2MFP Mask           */

#define SYS_GPG_MFP0_PG3MFP_Pos          (24)                                              /*!< SYS_T::GPG_MFP0: PG3MFP Position       */
#define SYS_GPG_MFP0_PG3MFP_Msk          (0x1ful << SYS_GPG_MFP0_PG3MFP_Pos)               /*!< SYS_T::GPG_MFP0: PG3MFP Mask           */

#define SYS_GPG_MFP1_PG4MFP_Pos          (0)                                               /*!< SYS_T::GPG_MFP1: PG4MFP Position       */
#define SYS_GPG_MFP1_PG4MFP_Msk          (0x1ful << SYS_GPG_MFP1_PG4MFP_Pos)               /*!< SYS_T::GPG_MFP1: PG4MFP Mask           */

#define SYS_GPG_MFP1_PG5MFP_Pos          (8)                                               /*!< SYS_T::GPG_MFP1: PG5MFP Position       */
#define SYS_GPG_MFP1_PG5MFP_Msk          (0x1ful << SYS_GPG_MFP1_PG5MFP_Pos)               /*!< SYS_T::GPG_MFP1: PG5MFP Mask           */

#define SYS_GPG_MFP1_PG6MFP_Pos          (16)                                              /*!< SYS_T::GPG_MFP1: PG6MFP Position       */
#define SYS_GPG_MFP1_PG6MFP_Msk          (0x1ful << SYS_GPG_MFP1_PG6MFP_Pos)               /*!< SYS_T::GPG_MFP1: PG6MFP Mask           */

#define SYS_GPG_MFP1_PG7MFP_Pos          (24)                                              /*!< SYS_T::GPG_MFP1: PG7MFP Position       */
#define SYS_GPG_MFP1_PG7MFP_Msk          (0x1ful << SYS_GPG_MFP1_PG7MFP_Pos)               /*!< SYS_T::GPG_MFP1: PG7MFP Mask           */

#define SYS_GPG_MFP2_PG8MFP_Pos          (0)                                               /*!< SYS_T::GPG_MFP2: PG8MFP Position       */
#define SYS_GPG_MFP2_PG8MFP_Msk          (0x1ful << SYS_GPG_MFP2_PG8MFP_Pos)               /*!< SYS_T::GPG_MFP2: PG8MFP Mask           */

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

#define SYS_GPH_MFP0_PH0MFP_Pos          (0)                                               /*!< SYS_T::GPH_MFP0: PH0MFP Position       */
#define SYS_GPH_MFP0_PH0MFP_Msk          (0x1ful << SYS_GPH_MFP0_PH0MFP_Pos)               /*!< SYS_T::GPH_MFP0: PH0MFP Mask           */

#define SYS_GPH_MFP0_PH1MFP_Pos          (8)                                               /*!< SYS_T::GPH_MFP0: PH1MFP Position       */
#define SYS_GPH_MFP0_PH1MFP_Msk          (0x1ful << SYS_GPH_MFP0_PH1MFP_Pos)               /*!< SYS_T::GPH_MFP0: PH1MFP Mask           */

#define SYS_GPH_MFP0_PH2MFP_Pos          (16)                                              /*!< SYS_T::GPH_MFP0: PH2MFP Position       */
#define SYS_GPH_MFP0_PH2MFP_Msk          (0x1ful << SYS_GPH_MFP0_PH2MFP_Pos)               /*!< SYS_T::GPH_MFP0: PH2MFP Mask           */

#define SYS_GPH_MFP0_PH3MFP_Pos          (24)                                              /*!< SYS_T::GPH_MFP0: PH3MFP Position       */
#define SYS_GPH_MFP0_PH3MFP_Msk          (0x1ful << SYS_GPH_MFP0_PH3MFP_Pos)               /*!< SYS_T::GPH_MFP0: PH3MFP Mask           */

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

#define SYS_I3C0PADCTL_SCL_PUCTLEN_Pos   (0)                                               /*!< SYS_T::I3C0PADCTL: SCL_PUCTLEN Position*/
#define SYS_I3C0PADCTL_SCL_PUCTLEN_Msk   (0x1ul << SYS_I3C0PADCTL_SCL_PUCTLEN_Pos)         /*!< SYS_T::I3C0PADCTL: SCL_PUCTLEN Mask    */

#define SYS_I3C0PADCTL_SDA_PUCTLEN_Pos   (1)                                               /*!< SYS_T::I3C0PADCTL: SDA_PUCTLEN Position*/
#define SYS_I3C0PADCTL_SDA_PUCTLEN_Msk   (0x1ul << SYS_I3C0PADCTL_SDA_PUCTLEN_Pos)         /*!< SYS_T::I3C0PADCTL: SDA_PUCTLEN Mask    */

#define SYS_I3C0PADCTL_PA0_MODE1P8V_Pos  (4)                                               /*!< SYS_T::I3C0PADCTL: PA0_MODE1P8V Position*/
#define SYS_I3C0PADCTL_PA0_MODE1P8V_Msk  (0x1ul << SYS_I3C0PADCTL_PA0_MODE1P8V_Pos)        /*!< SYS_T::I3C0PADCTL: PA0_MODE1P8V Mask   */

#define SYS_I3C0PADCTL_PA1_MODE1P8V_Pos  (5)                                               /*!< SYS_T::I3C0PADCTL: PA1_MODE1P8V Position*/
#define SYS_I3C0PADCTL_PA1_MODE1P8V_Msk  (0x1ul << SYS_I3C0PADCTL_PA1_MODE1P8V_Pos)        /*!< SYS_T::I3C0PADCTL: PA1_MODE1P8V Mask   */

#define SYS_I3C0PADCTL_PA4_MODE1P8V_Pos  (6)                                               /*!< SYS_T::I3C0PADCTL: PA4_MODE1P8V Position*/
#define SYS_I3C0PADCTL_PA4_MODE1P8V_Msk  (0x1ul << SYS_I3C0PADCTL_PA4_MODE1P8V_Pos)        /*!< SYS_T::I3C0PADCTL: PA4_MODE1P8V Mask   */

#define SYS_I3C0PADCTL_PA5_MODE1P8V_Pos  (7)                                               /*!< SYS_T::I3C0PADCTL: PA5_MODE1P8V Position*/
#define SYS_I3C0PADCTL_PA5_MODE1P8V_Msk  (0x1ul << SYS_I3C0PADCTL_PA5_MODE1P8V_Pos)        /*!< SYS_T::I3C0PADCTL: PA5_MODE1P8V Mask   */

/**@}*/ /* SYS_CONST */
/**@}*/ /* end of SYS register group */
/**@}*/ /* end of REGISTER group */

#if defined ( __CC_ARM   )
    #pragma no_anon_unions
#endif

#endif /* __SYS_REG_H__ */


