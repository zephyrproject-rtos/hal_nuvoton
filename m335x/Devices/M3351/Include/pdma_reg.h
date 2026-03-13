/**************************************************************************//**
 * @file     pdma_reg.h
 * @version  V1.00
 * @brief    PDMA register definition header file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

#ifndef __PDMA_REG_H__
#define __PDMA_REG_H__

#if defined ( __CC_ARM   )
    #pragma anon_unions
#endif

/**
    @addtogroup REGISTER Control Register
    @{
*/

/**
    @addtogroup PDMA Peripheral Direct Memory Access Controller (PDMA)
    Memory Mapped Structure for PDMA Controller
    @{
*/

typedef struct
{
    /**
     * @var DSCT_T::CTL
     * Offset: 0x00  Descriptor Table Control Register of PDMA Channel n.
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[1:0]   |OPMODE    |PDMA Operation Mode Selection
     * |        |          |00 = Idle state: Channel is stopped or this table is complete, when PDMA finish channel table task, OPMODE will be cleared to idle state automatically.
     * |        |          |01 = Basic mode: The descriptor table only has one task
     * |        |          |When this task is finished, the PDMA_INTSTS[n] will be asserted.
     * |        |          |10 = Scatter-Gather mode: When operating in this mode, user must give the next descriptor table address in PDMA_DSCT_NEXT register; PDMA controller will ignore this task, then load the next task to execute.
     * |        |          |11 = Reserved.
     * |        |          |Note: Before filling transfer task in the Descriptor Table, user must check if the descriptor table is complete.
     * |[2]     |TXTYPE    |Transfer Type
     * |        |          |0 = Burst transfer type.
     * |        |          |1 = Single transfer type.
     * |[6:4]   |BURSIZE   |Burst Size
     * |        |          |This field is used for peripheral to determine the burst size or used for determine the re-arbitration size.
     * |        |          |000 = 128 Transfers.
     * |        |          |001 = 64 Transfers.
     * |        |          |010 = 32 Transfers.
     * |        |          |011 = 16 Transfers.
     * |        |          |100 = 8 Transfers.
     * |        |          |101 = 4 Transfers.
     * |        |          |110 = 2 Transfers.
     * |        |          |111 = 1 Transfers.
     * |        |          |Note: This field is only useful in burst transfer type.
     * |[7]     |TBINTDIS  |Table Interrupt Disable Bit
     * |        |          |This field can be used to decide whether to enable table interrupt or not
     * |        |          |If the TBINTDIS bit is enabled when PDMA controller finishes transfer task, it will not generates transfer done interrupt.
     * |        |          |0 = Table interrupt Enabled.
     * |        |          |1 = Table interrupt Disabled.
     * |[9:8]   |SAINC     |Source Address Increment
     * |        |          |This field is used to set the source address increment size.
     * |        |          |11 = No increment (fixed address).
     * |        |          |Others = Increment and size is depended on TXWIDTH selection.
     * |[11:10] |DAINC     |Destination Address Increment
     * |        |          |This field is used to set the destination address increment size.
     * |        |          |11 = No increment (fixed address).
     * |        |          |Others = Increment and size is depended on TXWIDTH selection.
     * |[13:12] |TXWIDTH   |Transfer Width Selection
     * |        |          |This field is used for transfer width.
     * |        |          |00 = One byte (8 bit) is transferred for every operation.
     * |        |          |01= One half-word (16 bit) is transferred for every operation.
     * |        |          |10 = One word (32-bit) is transferred for every operation.
     * |        |          |11 = Reserved.
     * |        |          |Note: The PDMA transfer source address (PDMA_DSCT_SA) and PDMA transfer destination address (PDMA_DSCT_DA) should be alignment under the TXWIDTH selection
     * |[14]    |TXACK     |Transfer Acknowledge Selection
     * |        |          |0 = transfer ack when transfer done.
     * |        |          |1 = transfer ack when PDMA get transfer data.
     * |[15]    |STRIDEEN |Stride Mode Enable Bit
     * |        |          |0 = Stride transfer mode Disabled.
     * |        |          |1 = Stride transfer mode Enabled.
     * |[31:16] |TXCNT     |Transfer Count
     * |        |          |The TXCNT represents the required number of PDMA transfer, the real transfer count is (TXCNT + 1); The maximum transfer count is 32768, every transfer may be byte, half-word or word that is dependent on TXWIDTH field.
     * |        |          |Note: When PDMA finish each transfer data, this field will be decrease immediately.
     * @var DSCT_T::SA
     * Offset: 0x04  Source Address Register of PDMA Channel n
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |SA        |PDMA Transfer Source Address Register
     * |        |          |This field indicates a 32-bit source address of PDMA controller.
     * @var DSCT_T::DA
     * Offset: 0x08  Destination Address Register of PDMA Channel n
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |DA        |PDMA Transfer Destination Address Register
     * |        |          |This field indicates a 32-bit destination address of PDMA controller.
     * @var DSCT_T::NEXT
     * Offset: 0x0C  Next Scatter-Gather Descriptor Table Offset Address of PDMA Channel n
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |EXENEXT   |PDMA Execution Next Descriptor Table Offset
     * |        |          |This field indicates the offset of next descriptor table address of current execution descriptor table in system memory.
     * |        |          |Note: write operation is useless in this field.
     * |[31:16] |NEXT      |PDMA Next Descriptor Table Offset.
     * |        |          |This field indicates the offset of the next descriptor table address in system memory.
     * |        |          |Read Operation:
     * |        |          |When operating in scatter-gather mode, the last two bits NEXT[1:0] will become reserved, and indicate the first next address of system memory.
     * |        |          |Note1: The descriptor table address must be word boundary.
     * |        |          |Note2: Before filled transfer task in the descriptor table, user must check if the descriptor table is complete.
     */
    __IO uint32_t CTL;             /*!< [0x0000] Descriptor Table Control Register of PDMA Channel n.             */
    __IO uint32_t SA;              /*!< [0x0004] Source Address Register of PDMA Channel n                        */
    __IO uint32_t DA;              /*!< [0x0008] Destination Address Register of PDMA Channel n                   */
    __IO uint32_t NEXT;            /*!< [0x000c] First Scatter-Gather Descriptor Table Offset Address of PDMA Channel n */
} DSCT_T;

typedef struct
{


    /**
     * @var PDMA_T::CURSCAT
     * Offset: 0x100  Current Scatter-Gather Descriptor Table Address of PDMA Channel n
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |CURADDR   |PDMA Current Description Address Register (Read Only)
     * |        |          |This field indicates a 32-bit current external description address of PDMA controller.
     * |        |          |Note: This field is read only and only used for Scatter-Gather mode to indicate the current external description address.
     * @var PDMA_T::CHCTL
     * Offset: 0x400  PDMA Channel Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[11:0]  |CHENn     |PDMA Channel Enable Bit
     * |        |          |Set this bit to 1 to enable PDMAn operation. Channel cannot be active if it is not set as enabled.
     * |        |          |0 = PDMA channel [n] Disabled.
     * |        |          |1 = PDMA channel [n] Enabled.
     * |        |          |Note: Set corresponding bit of PDMA_PAUSE or PDMA_CHRST register will also clear this bit.
     * @var PDMA_T::PAUSE
     * Offset: 0x404  PDMA Transfer Pause Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[11:0]  |PAUSEn    |PDMA Transfer Pause Control Register (Write Only)
     * |        |          |User can set PAUSEn bit field to pause the PDMA transfer
     * |        |          |When user sets PAUSEn bit, the PDMA controller will pause the on-going transfer, then clear the channel enable bit CHEN(PDMA_CHCTL [n], n=0,1..7) and clear request active flag
     * |        |          |If re-enable the paused channel again, the remaining transfers will be processed.
     * |        |          |0 = No effect.
     * |        |          |1 = Pause PDMA channel n transfer.
     * @var PDMA_T::SWREQ
     * Offset: 0x408  PDMA Software Request Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[11:0]  |SWREQn    |PDMA Software Request Register (Write Only)
     * |        |          |Set this bit to 1 to generate a software request to PDMA [n].
     * |        |          |0 = No effect.
     * |        |          |1 = Generate a software request.
     * |        |          |Note1: User can read PDMA_TRGSTS register to know which channel is on active
     * |        |          |Active flag may be triggered by software request or peripheral request.
     * |        |          |Note2: If user does not enable corresponding PDMA channel, the software request will be ignored.
     * @var PDMA_T::TRGSTS
     * Offset: 0x40C  PDMA Channel Request Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[11:0]  |REQSTSn   |PDMA Channel Request Status (Read Only)
     * |        |          |This flag indicates whether channel[n] have a request or not, no matter request from software or peripheral
     * |        |          |When PDMA controller finishes channel transfer, this bit will be cleared automatically.
     * |        |          |0 = PDMA Channel n has no request.
     * |        |          |1 = PDMA Channel n has a request.
     * |        |          |Note: If user pauses or resets each PDMA transfer by setting PDMA_PAUSE or PDMA_CHRST register respectively, this bit will be cleared automatically after finishing current transfer.
     * @var PDMA_T::PRISET
     * Offset: 0x410  PDMA Fixed Priority Setting Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[11:0]  |FPRISETn  |PDMA Fixed Priority Setting Register
     * |        |          |Set this bit to 1 to enable fixed priority level.
     * |        |          |Write Operation:
     * |        |          |0 = No effect.
     * |        |          |1 = Set PDMA channel [n] to fixed priority channel.
     * |        |          |Read Operation:
     * |        |          |0 = Corresponding PDMA channel is round-robin priority.
     * |        |          |1 = Corresponding PDMA channel is fixed priority.
     * |        |          |Note: This field only set to fixed priority, clear fixed priority use PDMA_PRICLR register.
     * @var PDMA_T::PRICLR
     * Offset: 0x414  PDMA Fixed Priority Clear Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[11:0]  |FPRICLRn  |PDMA Fixed Priority Clear Register (Write Only)
     * |        |          |Set this bit to 1 to clear fixed priority level.
     * |        |          |0 = No effect.
     * |        |          |1 = Clear PDMA channel [n] fixed priority setting.
     * |        |          |Note: User can read PDMA_PRISET register to know the channel priority.
     * @var PDMA_T::INTEN
     * Offset: 0x418  PDMA Interrupt Enable Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[11:0]  |INTENn    |PDMA Interrupt Enable Register
     * |        |          |This field is used for enabling PDMA channel[n] interrupt.
     * |        |          |0 = PDMA channel n interrupt Disabled.
     * |        |          |1 = PDMA channel n interrupt Enabled.
     * @var PDMA_T::INTSTS
     * Offset: 0x41C  PDMA Interrupt Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ABTIF     |PDMA Read/Write Target Abort Interrupt Flag (Read-only)
     * |        |          |This bit indicates that PDMA has target abort error; Software can read PDMA_ABTSTS register to find which channel has target abort error.
     * |        |          |0 = No AHB bus ERROR response received.
     * |        |          |1 = AHB bus ERROR response received.
     * |[1]     |TDIF      |Transfer Done Interrupt Flag (Read Only)
     * |        |          |This bit indicates that PDMA controller has finished transmission; User can read PDMA_TDSTS register to indicate which channel finished transfer.
     * |        |          |0 = Not finished yet.
     * |        |          |1 = PDMA channel has finished transmission.
     * |[2]     |ALIGNF    |Transfer Alignment Interrupt Flag (Read Only)
     * |        |          |0 = PDMA channel source address and destination address both follow transfer width setting.
     * |        |          |1 = PDMA channel source address or destination address is not follow transfer width setting.
     * @var PDMA_T::ABTSTS
     * Offset: 0x420  PDMA Channel Read/Write Target Abort Flag Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[11:0]  |ABTIFn    |PDMA Read/Write Target Abort Interrupt Status Flag
     * |        |          |This bit indicates which PDMA controller has target abort error; User can write 1 to clear these bits.
     * |        |          |0 = No AHB bus ERROR response received when channel n transfer.
     * |        |          |1 = AHB bus ERROR response received when channel n transfer.
     * @var PDMA_T::TDSTS
     * Offset: 0x424  PDMA Channel Transfer Done Flag Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[11:0]  |TDIFn     |Transfer Done Flag Register
     * |        |          |This bit indicates whether PDMA controller channel transfer has been finished or not, user can write 1 to clear these bits.
     * |        |          |0 = PDMA channel transfer has not finished.
     * |        |          |1 = PDMA channel has finished transmission.
     * @var PDMA_T::ALIGN
     * Offset: 0x428  PDMA Transfer Alignment Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[11:0]  |ALIGNn    |Transfer Alignment Flag Register
     * |        |          |0 = PDMA channel source address and destination address both follow transfer width setting.
     * |        |          |1 = PDMA channel source address or destination address is not follow transfer width setting.
     * @var PDMA_T::TACTSTS
     * Offset: 0x42C  PDMA Transfer Active Flag Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[11:0]  |TXACTFn   |Transfer on Active Flag Register (Read Only)
     * |        |          |This bit indicates which PDMA channel is in active.
     * |        |          |0 = PDMA channel is not finished.
     * |        |          |1 = PDMA channel is active.
     * @var PDMA_T::CHRST
     * Offset: 0x460  PDMA Channel Reset Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[11:0]  |CHnRST    |Channel N Reset
     * |        |          |0 = corresponding channel n not reset.
     * |        |          |1 = corresponding channel n is reset.
     * @var PDMA_T::REQSEL0_3
     * Offset: 0x480  PDMA Request Source Select Register 0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[6:0]   |REQSRC0   |Channel 0 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 0
     * |        |          |User can configure the peripheral by setting REQSRC0.
     * |        |          |0 = Disable PDMA peripheral request.
     * |        |          |1 = Reserved.
     * |        |          |2 = Reserved.
     * |        |          |3 = Reserved.
     * |        |          |4 = Channel connects to UART0_TX.
     * |        |          |5 = Channel connects to UART0_RX.
     * |        |          |6 = Channel connects to UART1_TX.
     * |        |          |7 = Channel connects to UART1_RX.
     * |        |          |8 = Channel connects to UART2_TX.
     * |        |          |9 = Channel connects to UART2_RX.
     * |        |          |10 = Channel connects to UART3_TX.
     * |        |          |11 = Channel connects to UART3_RX.
     * |        |          |12 = Channel connects to UART4_TX.
     * |        |          |13 = Channel connects to UART4_RX.
     * |        |          |14 = Channel connects to UART5_TX.
     * |        |          |15 = Channel connects to UART5_RX.
     * |        |          |16 = Channel connects to USCI0_TX.
     * |        |          |17 = Channel connects to USCI0_RX.
     * |        |          |18 = Channel connects to USCI1_TX.
     * |        |          |19 = Channel connects to USCI1_RX.
     * |        |          |20 = Channel connects to QSPI0_TX.
     * |        |          |21 = Channel connects to QSPI0_RX.
     * |        |          |22 = Channel connects to SPI0_TX.
     * |        |          |23 = Channel connects to SPI0_RX.
     * |        |          |24 = Channel connects to SPI1_TX.
     * |        |          |25 = Channel connects to SPI1_RX.
     * |        |          |26 = Reserved.
     * |        |          |27 = Reserved.
     * |        |          |28 = Reserved.
     * |        |          |29 = Reserved.
     * |        |          |30 = Channel connects to ACMP0_INT.
     * |        |          |31 = Channel connects to ACMP1_INT.
     * |        |          |32 = Channel connects to PWM0_P1_RX.
     * |        |          |33 = Channel connects to PWM0_P2_RX.
     * |        |          |34 = Channel connects to PWM0_P3_RX.
     * |        |          |35 = Channel connects to PWM1_P1_RX.
     * |        |          |36 = Channel connects to PWM1_P2_RX.
     * |        |          |37 = Channel connects to PWM1_P3_RX.
     * |        |          |38 = Channel connects to I2C0_TX.
     * |        |          |39 = Channel connects to I2C0_RX.
     * |        |          |40 = Channel connects to I2C1_TX.
     * |        |          |41 = Channel connects to I2C1_RX.
     * |        |          |42 = Channel connects to I2C2_TX.
     * |        |          |43 = Channel connects to I2C2_RX.
     * |        |          |44 = Reserved.
     * |        |          |45 = Reserved.
     * |        |          |46 = Channel connects to TMR0.
     * |        |          |47 = Channel connects to TMR1.
     * |        |          |48 = Channel connects to TMR2.
     * |        |          |49 = Channel connects to TMR3.
     * |        |          |50 = Channel connects to DAC0_TX.
     * |        |          |51 = Reserved.
     * |        |          |52 = Channel connects to LLSI0_TX.
     * |        |          |53 = Channel connects to LLSI1_TX.
     * |        |          |54 = Channel connects to LLSI2_TX.
     * |        |          |55 = Channel connects to LLSI3_TX.
     * |        |          |56 = Channel connects to LLSI4_TX.
     * |        |          |57 = Channel connects to LLSI5_TX.
     * |        |          |58 = Channel connects to LLSI6_TX.
     * |        |          |59 = Channel connects to LLSI7_TX.
     * |        |          |60 = Channel connects to LLSI8_TX.
     * |        |          |61 = Channel connects to LLSI9_TX.
     * |        |          |62 = Channel connects to ELLSI0_TX.
     * |        |          |63 = Channel connects to ELLSI1_TX.
     * |        |          |64 = Channel connects to EADC0_RX.
     * |        |          |65 = Channel connects to EADC1_RX.
     * |        |          |66 = Channel connects to UART6_TX.
     * |        |          |67 = Channel connects to UART6_RX.
     * |        |          |68 = Channel connects to UART7_TX.
     * |        |          |69 = Channel connects to UART7_RX.
     * |        |          |70 = Reserved.
     * |        |          |71 = Reserved.
     * |        |          |72 = Reserved.
     * |        |          |73 = Reserved.
     * |        |          |74 = Reserved.
     * |        |          |75 = Reserved.
     * |        |          |76 = Channel connects to PWM0_CH0_TX.
     * |        |          |77 = Channel connects to PWM0_CH2_TX.
     * |        |          |78 = Channel connects to PWM0_CH4_TX.
     * |        |          |79 = Channel connects to PWM1_CH0_TX.
     * |        |          |80 = Channel connects to PWM1_CH2_TX.
     * |        |          |81 = Channel connects to PWM1_CH4_TX.
     * |        |          |82 = Channel connects to EINT0.
     * |        |          |83 = Channel connects to EINT1.
     * |        |          |84 = Channel connects to EINT2.
     * |        |          |85 = Channel connects to EINT3.
     * |        |          |86 = Channel connects to EINT4.
     * |        |          |87 = Channel connects to EINT5.
     * |        |          |88 = Reserved.
     * |        |          |89 = Reserved.
     * |        |          |90 = Channel connects to UART8_TX.
     * |        |          |91 = Channel connects to UART8_RX.
     * |        |          |92 = Channel connects to UART9_TX.
     * |        |          |93 = Channel connects to UART9_RX.
     * |        |          |94 = Channel connects to I3C0_TX.
     * |        |          |95 = Channel connects to I3C0_RX.
     * |        |          |Others = Reserved.
     * |        |          |Note 1: A peripheral cannot be assigned to two channels at the same time.
     * |        |          |Note 2: This field is useless when transfer between memory and memory.
     * |[14:8]  |REQSRC1   |Channel 1 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 1
     * |        |          |User can configure the peripheral setting by REQSRC1.
     * |        |          |Note: The channel configuration is the same as REQSRC0 field
     * |        |          |Please refer to the explanation of REQSRC0.
     * |[22:16] |REQSRC2   |Channel 2 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 2
     * |        |          |User can configure the peripheral setting by REQSRC2.
     * |        |          |Note: The channel configuration is the same as REQSRC0 field
     * |        |          |Please refer to the explanation of REQSRC0.
     * |[30:24] |REQSRC3   |Channel 3 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 3
     * |        |          |User can configure the peripheral setting by REQSRC3.
     * |        |          |Note: The channel configuration is the same as REQSRC0 field
     * |        |          |Please refer to the explanation of REQSRC0.
     * @var PDMA_T::REQSEL4_7
     * Offset: 0x484  PDMA Request Source Select Register 1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[6:0]   |REQSRC4   |Channel 4 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 4
     * |        |          |User can configure the peripheral setting by REQSRC4.
     * |        |          |Note: The channel configuration is the same as REQSRC0 field
     * |        |          |Please refer to the explanation of REQSRC0.
     * |[14:8]  |REQSRC5   |Channel 5 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 5
     * |        |          |User can configure the peripheral setting by REQSRC5.
     * |        |          |Note: The channel configuration is the same as REQSRC0 field
     * |        |          |Please refer to the explanation of REQSRC0.
     * |[22:16] |REQSRC6   |Channel 6 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 6
     * |        |          |User can configure the peripheral setting by REQSRC6.
     * |        |          |Note: The channel configuration is the same as REQSRC0 field
     * |        |          |Please refer to the explanation of REQSRC0.
     * |[30:24] |REQSRC7   |Channel 7 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 7
     * |        |          |User can configure the peripheral setting by REQSRC7.
     * |        |          |Note: The channel configuration is the same as REQSRC0 field
     * |        |          |Please refer to the explanation of REQSRC0.
     * @var PDMA_T::REQSEL8_11
     * Offset: 0x488  PDMA Request Source Select Register 2
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[6:0]   |REQSRC8   |Channel 8 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 8
     * |        |          |User can configure the peripheral setting by REQSRC8.
     * |        |          |Note: The channel configuration is the same as REQSRC0 field
     * |        |          |Please refer to the explanation of REQSRC0.
     * |[14:8]  |REQSRC9   |Channel 9 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 9
     * |        |          |User can configure the peripheral setting by REQSRC9.
     * |        |          |Note: The channel configuration is the same as REQSRC0 field
     * |        |          |Please refer to the explanation of REQSRC0.
     * |[22:16] |REQSRC10  |Channel 10 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 10
     * |        |          |User can configure the peripheral setting by REQSRC10.
     * |        |          |Note: The channel configuration is the same as REQSRC0 field
     * |        |          |Please refer to the explanation of REQSRC0.
     * |[30:24] |REQSRC11  |Channel 11 Request Source Selection
     * |        |          |This filed defines which peripheral is connected to PDMA channel 11
     * |        |          |User can configure the peripheral setting by REQSRC11.
     * |        |          |Note: The channel configuration is the same as REQSRC0 field
     * |        |          |Please refer to the explanation of REQSRC0.
     */
    DSCT_T DSCT[12];
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE1[16];
    /// @endcond //HIDDEN_SYMBOLS
    __I  uint32_t CURSCAT[12];           /*!< [0x0100] Current Scatter-Gather Descriptor Table Address of PDMA Channel n */

    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE2[180];
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t CHCTL;                 /*!< [0x0400] PDMA Channel Control Register                                    */
    __O  uint32_t PAUSE;                 /*!< [0x0404] PDMA Transfer Pause Control Register                             */
    __O  uint32_t SWREQ;                 /*!< [0x0408] PDMA Software Request Register                                   */
    __I  uint32_t TRGSTS;                /*!< [0x040c] PDMA Channel Request Status Register                             */
    __IO uint32_t PRISET;                /*!< [0x0410] PDMA Fixed Priority Setting Register                             */
    __O  uint32_t PRICLR;                /*!< [0x0414] PDMA Fixed Priority Clear Register                               */
    __IO uint32_t INTEN;                 /*!< [0x0418] PDMA Interrupt Enable Register                                   */
    __IO uint32_t INTSTS;                /*!< [0x041c] PDMA Interrupt Status Register                                   */
    __IO uint32_t ABTSTS;                /*!< [0x0420] PDMA Channel Read/Write Target Abort Flag Register               */
    __IO uint32_t TDSTS;                 /*!< [0x0424] PDMA Channel Transfer Done Flag Register                         */
    __IO uint32_t ALIGN;                 /*!< [0x0428] PDMA Transfer Alignment Status Register                          */
    __I  uint32_t TACTSTS;               /*!< [0x042c] PDMA Transfer Active Flag Register                               */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE3[12];
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t CHRST;                 /*!< [0x0460] PDMA Channel Reset Register                                      */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE4[7];
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t REQSEL0_3;             /*!< [0x0480] PDMA Request Source Select Register 0                            */
    __IO uint32_t REQSEL4_7;             /*!< [0x0484] PDMA Request Source Select Register 1                            */
    __IO uint32_t REQSEL8_11;            /*!< [0x0488] PDMA Request Source Select Register 2                            */
} PDMA_T;

/**
    @addtogroup PDMA_CONST PDMA Bit Field Definition
    Constant Definitions for PDMA Controller
    @{
*/

#define PDMA_DSCT_CTL_OPMODE_Pos         (0)                                               /*!< PDMA_T::DSCT_CTL: OPMODE Position     */
#define PDMA_DSCT_CTL_OPMODE_Msk         (0x3ul << PDMA_DSCT_CTL_OPMODE_Pos)               /*!< PDMA_T::DSCT_CTL: OPMODE Mask         */

#define PDMA_DSCT_CTL_TXTYPE_Pos         (2)                                               /*!< PDMA_T::DSCT_CTL: TXTYPE Position     */
#define PDMA_DSCT_CTL_TXTYPE_Msk         (0x1ul << PDMA_DSCT_CTL_TXTYPE_Pos)               /*!< PDMA_T::DSCT_CTL: TXTYPE Mask         */

#define PDMA_DSCT_CTL_BURSIZE_Pos        (4)                                               /*!< PDMA_T::DSCT_CTL: BURSIZE Position    */
#define PDMA_DSCT_CTL_BURSIZE_Msk        (0x7ul << PDMA_DSCT_CTL_BURSIZE_Pos)              /*!< PDMA_T::DSCT_CTL: BURSIZE Mask        */

#define PDMA_DSCT_CTL_TBINTDIS_Pos       (7)                                               /*!< PDMA_T::DSCT_CTL: TBINTDIS Position   */
#define PDMA_DSCT_CTL_TBINTDIS_Msk       (0x1ul << PDMA_DSCT_CTL_TBINTDIS_Pos)             /*!< PDMA_T::DSCT_CTL: TBINTDIS Mask       */

#define PDMA_DSCT_CTL_SAINC_Pos          (8)                                               /*!< PDMA_T::DSCT_CTL: SAINC Position      */
#define PDMA_DSCT_CTL_SAINC_Msk          (0x3ul << PDMA_DSCT_CTL_SAINC_Pos)                /*!< PDMA_T::DSCT_CTL: SAINC Mask          */

#define PDMA_DSCT_CTL_DAINC_Pos          (10)                                              /*!< PDMA_T::DSCT_CTL: DAINC Position      */
#define PDMA_DSCT_CTL_DAINC_Msk          (0x3ul << PDMA_DSCT_CTL_DAINC_Pos)                /*!< PDMA_T::DSCT_CTL: DAINC Mask          */

#define PDMA_DSCT_CTL_TXWIDTH_Pos        (12)                                              /*!< PDMA_T::DSCT_CTL: TXWIDTH Position    */
#define PDMA_DSCT_CTL_TXWIDTH_Msk        (0x3ul << PDMA_DSCT_CTL_TXWIDTH_Pos)              /*!< PDMA_T::DSCT_CTL: TXWIDTH Mask        */

#define PDMA_DSCT_CTL_STRIDEEN_Pos       (15)                                              /*!< PDMA_T::DSCT_CTL: STRIDEEN Position   */
#define PDMA_DSCT_CTL_STRIDEEN_Msk       (0x1ul << PDMA_DSCT_CTL_STRIDEEN_Pos)             /*!< PDMA_T::DSCT_CTL: STRIDEEN Mask       */

#define PDMA_DSCT_CTL_TXCNT_Pos          (16)                                              /*!< PDMA_T::DSCT_CTL: TXCNT Position      */
#define PDMA_DSCT_CTL_TXCNT_Msk          (0xfffful << PDMA_DSCT_CTL_TXCNT_Pos)             /*!< PDMA_T::DSCT_CTL: TXCNT Mask          */

#define PDMA_DSCT_SA_SA_Pos              (0)                                               /*!< PDMA_T::DSCT_SA: SA Position          */
#define PDMA_DSCT_SA_SA_Msk              (0xfffffffful << PDMA_DSCT_SA_SA_Pos)             /*!< PDMA_T::DSCT_SA: SA Mask              */

#define PDMA_DSCT_DA_DA_Pos              (0)                                               /*!< PDMA_T::DSCT_DA: DA Position          */
#define PDMA_DSCT_DA_DA_Msk              (0xfffffffful << PDMA_DSCT_DA_DA_Pos)             /*!< PDMA_T::DSCT_DA: DA Mask              */

#define PDMA_DSCT_NEXT_NEXT_Pos          (0)                                               /*!< PDMA_T::DSCT_NEXT: NEXT Position      */
#define PDMA_DSCT_NEXT_NEXT_Msk          (0xfffful << PDMA_DSCT_NEXT_NEXT_Pos)             /*!< PDMA_T::DSCT_NEXT: NEXT Mask          */

#define PDMA_DSCT_NEXT_EXENEXT_Pos       (16)                                              /*!< PDMA_T::DSCT_FIRST: NEXT Position     */
#define PDMA_DSCT_NEXT_EXENEXT_Msk       (0xfffful << PDMA_DSCT_NEXT_EXENEXT_Pos)          /*!< PDMA_T::DSCT_FIRST: NEXT Mask         */

#define PDMA_CURSCAT_CURADDR_Pos         (0)                                               /*!< PDMA_T::CURSCAT: CURADDR Position     */
#define PDMA_CURSCAT_CURADDR_Msk         (0xfffffffful << PDMA_CURSCAT_CURADDR_Pos)        /*!< PDMA_T::CURSCAT: CURADDR Mask         */

#define PDMA_CHCTL_CHENn_Pos             (0)                                               /*!< PDMA_T::CHCTL: CHENn Position         */
#define PDMA_CHCTL_CHENn_Msk             (0xfffful << PDMA_CHCTL_CHENn_Pos)                /*!< PDMA_T::CHCTL: CHENn Mask             */

#define PDMA_CHCTL_CHEN0_Pos             (0)                                               /*!< PDMA_T::CHCTL: CHEN0 Position         */
#define PDMA_CHCTL_CHEN0_Msk             (0x1ul << PDMA_CHCTL_CHEN0_Pos)                   /*!< PDMA_T::CHCTL: CHEN0 Mask             */

#define PDMA_CHCTL_CHEN1_Pos             (1)                                               /*!< PDMA_T::CHCTL: CHEN1 Position         */
#define PDMA_CHCTL_CHEN1_Msk             (0x1ul << PDMA_CHCTL_CHEN1_Pos)                   /*!< PDMA_T::CHCTL: CHEN1 Mask             */

#define PDMA_CHCTL_CHEN2_Pos             (2)                                               /*!< PDMA_T::CHCTL: CHEN2 Position         */
#define PDMA_CHCTL_CHEN2_Msk             (0x1ul << PDMA_CHCTL_CHEN2_Pos)                   /*!< PDMA_T::CHCTL: CHEN2 Mask             */

#define PDMA_CHCTL_CHEN3_Pos             (3)                                               /*!< PDMA_T::CHCTL: CHEN3 Position         */
#define PDMA_CHCTL_CHEN3_Msk             (0x1ul << PDMA_CHCTL_CHEN3_Pos)                   /*!< PDMA_T::CHCTL: CHEN3 Mask             */

#define PDMA_CHCTL_CHEN4_Pos             (4)                                               /*!< PDMA_T::CHCTL: CHEN4 Position         */
#define PDMA_CHCTL_CHEN4_Msk             (0x1ul << PDMA_CHCTL_CHEN4_Pos)                   /*!< PDMA_T::CHCTL: CHEN4 Mask             */

#define PDMA_CHCTL_CHEN5_Pos             (5)                                               /*!< PDMA_T::CHCTL: CHEN5 Position         */
#define PDMA_CHCTL_CHEN5_Msk             (0x1ul << PDMA_CHCTL_CHEN5_Pos)                   /*!< PDMA_T::CHCTL: CHEN5 Mask             */

#define PDMA_CHCTL_CHEN6_Pos             (6)                                               /*!< PDMA_T::CHCTL: CHEN6 Position         */
#define PDMA_CHCTL_CHEN6_Msk             (0x1ul << PDMA_CHCTL_CHEN6_Pos)                   /*!< PDMA_T::CHCTL: CHEN6 Mask             */

#define PDMA_CHCTL_CHEN7_Pos             (7)                                               /*!< PDMA_T::CHCTL: CHEN7 Position         */
#define PDMA_CHCTL_CHEN7_Msk             (0x1ul << PDMA_CHCTL_CHEN7_Pos)                   /*!< PDMA_T::CHCTL: CHEN7 Mask             */

#define PDMA_CHCTL_CHEN8_Pos             (8)                                               /*!< PDMA_T::CHCTL: CHEN8 Position         */
#define PDMA_CHCTL_CHEN8_Msk             (0x1ul << PDMA_CHCTL_CHEN8_Pos)                   /*!< PDMA_T::CHCTL: CHEN8 Mask             */

#define PDMA_CHCTL_CHEN9_Pos             (9)                                               /*!< PDMA_T::CHCTL: CHEN9 Position         */
#define PDMA_CHCTL_CHEN9_Msk             (0x1ul << PDMA_CHCTL_CHEN9_Pos)                   /*!< PDMA_T::CHCTL: CHEN9 Mask             */

#define PDMA_CHCTL_CHEN10_Pos            (10)                                              /*!< PDMA_T::CHCTL: CHEN10 Position        */
#define PDMA_CHCTL_CHEN10_Msk            (0x1ul << PDMA_CHCTL_CHEN10_Pos)                  /*!< PDMA_T::CHCTL: CHEN10 Mask            */

#define PDMA_CHCTL_CHEN11_Pos            (11)                                              /*!< PDMA_T::CHCTL: CHEN11 Position        */
#define PDMA_CHCTL_CHEN11_Msk            (0x1ul << PDMA_CHCTL_CHEN11_Pos)                  /*!< PDMA_T::CHCTL: CHEN11 Mask            */

#define PDMA_PAUSE_PAUSEn_Pos            (0)                                               /*!< PDMA_T::PAUSE: PAUSEn Position        */
#define PDMA_PAUSE_PAUSEn_Msk            (0xfffful << PDMA_PAUSE_PAUSEn_Pos)               /*!< PDMA_T::PAUSE: PAUSEn Mask            */

#define PDMA_PAUSE_PAUSE0_Pos            (0)                                               /*!< PDMA_T::PAUSE: PAUSE0 Position        */
#define PDMA_PAUSE_PAUSE0_Msk            (0x1ul << PDMA_PAUSE_PAUSE0_Pos)                  /*!< PDMA_T::PAUSE: PAUSE0 Mask            */

#define PDMA_PAUSE_PAUSE1_Pos            (1)                                               /*!< PDMA_T::PAUSE: PAUSE1 Position        */
#define PDMA_PAUSE_PAUSE1_Msk            (0x1ul << PDMA_PAUSE_PAUSE1_Pos)                  /*!< PDMA_T::PAUSE: PAUSE1 Mask            */

#define PDMA_PAUSE_PAUSE2_Pos            (2)                                               /*!< PDMA_T::PAUSE: PAUSE2 Position        */
#define PDMA_PAUSE_PAUSE2_Msk            (0x1ul << PDMA_PAUSE_PAUSE2_Pos)                  /*!< PDMA_T::PAUSE: PAUSE2 Mask            */

#define PDMA_PAUSE_PAUSE3_Pos            (3)                                               /*!< PDMA_T::PAUSE: PAUSE3 Position        */
#define PDMA_PAUSE_PAUSE3_Msk            (0x1ul << PDMA_PAUSE_PAUSE3_Pos)                  /*!< PDMA_T::PAUSE: PAUSE3 Mask            */

#define PDMA_PAUSE_PAUSE4_Pos            (4)                                               /*!< PDMA_T::PAUSE: PAUSE4 Position        */
#define PDMA_PAUSE_PAUSE4_Msk            (0x1ul << PDMA_PAUSE_PAUSE4_Pos)                  /*!< PDMA_T::PAUSE: PAUSE4 Mask            */

#define PDMA_PAUSE_PAUSE5_Pos            (5)                                               /*!< PDMA_T::PAUSE: PAUSE5 Position        */
#define PDMA_PAUSE_PAUSE5_Msk            (0x1ul << PDMA_PAUSE_PAUSE5_Pos)                  /*!< PDMA_T::PAUSE: PAUSE5 Mask            */

#define PDMA_PAUSE_PAUSE6_Pos            (6)                                               /*!< PDMA_T::PAUSE: PAUSE6 Position        */
#define PDMA_PAUSE_PAUSE6_Msk            (0x1ul << PDMA_PAUSE_PAUSE6_Pos)                  /*!< PDMA_T::PAUSE: PAUSE6 Mask            */

#define PDMA_PAUSE_PAUSE7_Pos            (7)                                               /*!< PDMA_T::PAUSE: PAUSE7 Position        */
#define PDMA_PAUSE_PAUSE7_Msk            (0x1ul << PDMA_PAUSE_PAUSE7_Pos)                  /*!< PDMA_T::PAUSE: PAUSE7 Mask            */

#define PDMA_PAUSE_PAUSE8_Pos            (8)                                               /*!< PDMA_T::PAUSE: PAUSE8 Position        */
#define PDMA_PAUSE_PAUSE8_Msk            (0x1ul << PDMA_PAUSE_PAUSE8_Pos)                  /*!< PDMA_T::PAUSE: PAUSE8 Mask            */

#define PDMA_PAUSE_PAUSE9_Pos            (9)                                               /*!< PDMA_T::PAUSE: PAUSE9 Position        */
#define PDMA_PAUSE_PAUSE9_Msk            (0x1ul << PDMA_PAUSE_PAUSE9_Pos)                  /*!< PDMA_T::PAUSE: PAUSE9 Mask            */

#define PDMA_PAUSE_PAUSE10_Pos           (10)                                              /*!< PDMA_T::PAUSE: PAUSE10 Position       */
#define PDMA_PAUSE_PAUSE10_Msk           (0x1ul << PDMA_PAUSE_PAUSE10_Pos)                 /*!< PDMA_T::PAUSE: PAUSE10 Mask           */

#define PDMA_PAUSE_PAUSE11_Pos           (11)                                              /*!< PDMA_T::PAUSE: PAUSE11 Position       */
#define PDMA_PAUSE_PAUSE11_Msk           (0x1ul << PDMA_PAUSE_PAUSE11_Pos)                 /*!< PDMA_T::PAUSE: PAUSE11 Mask           */

#define PDMA_SWREQ_SWREQn_Pos            (0)                                               /*!< PDMA_T::SWREQ: SWREQn Position        */
#define PDMA_SWREQ_SWREQn_Msk            (0xfffful << PDMA_SWREQ_SWREQn_Pos)               /*!< PDMA_T::SWREQ: SWREQn Mask            */

#define PDMA_SWREQ_SWREQ0_Pos            (0)                                               /*!< PDMA_T::SWREQ: SWREQ0 Position        */
#define PDMA_SWREQ_SWREQ0_Msk            (0x1ul << PDMA_SWREQ_SWREQ0_Pos)                  /*!< PDMA_T::SWREQ: SWREQ0 Mask            */

#define PDMA_SWREQ_SWREQ1_Pos            (1)                                               /*!< PDMA_T::SWREQ: SWREQ1 Position        */
#define PDMA_SWREQ_SWREQ1_Msk            (0x1ul << PDMA_SWREQ_SWREQ1_Pos)                  /*!< PDMA_T::SWREQ: SWREQ1 Mask            */

#define PDMA_SWREQ_SWREQ2_Pos            (2)                                               /*!< PDMA_T::SWREQ: SWREQ2 Position        */
#define PDMA_SWREQ_SWREQ2_Msk            (0x1ul << PDMA_SWREQ_SWREQ2_Pos)                  /*!< PDMA_T::SWREQ: SWREQ2 Mask            */

#define PDMA_SWREQ_SWREQ3_Pos            (3)                                               /*!< PDMA_T::SWREQ: SWREQ3 Position        */
#define PDMA_SWREQ_SWREQ3_Msk            (0x1ul << PDMA_SWREQ_SWREQ3_Pos)                  /*!< PDMA_T::SWREQ: SWREQ3 Mask            */

#define PDMA_SWREQ_SWREQ4_Pos            (4)                                               /*!< PDMA_T::SWREQ: SWREQ4 Position        */
#define PDMA_SWREQ_SWREQ4_Msk            (0x1ul << PDMA_SWREQ_SWREQ4_Pos)                  /*!< PDMA_T::SWREQ: SWREQ4 Mask            */

#define PDMA_SWREQ_SWREQ5_Pos            (5)                                               /*!< PDMA_T::SWREQ: SWREQ5 Position        */
#define PDMA_SWREQ_SWREQ5_Msk            (0x1ul << PDMA_SWREQ_SWREQ5_Pos)                  /*!< PDMA_T::SWREQ: SWREQ5 Mask            */

#define PDMA_SWREQ_SWREQ6_Pos            (6)                                               /*!< PDMA_T::SWREQ: SWREQ6 Position        */
#define PDMA_SWREQ_SWREQ6_Msk            (0x1ul << PDMA_SWREQ_SWREQ6_Pos)                  /*!< PDMA_T::SWREQ: SWREQ6 Mask            */

#define PDMA_SWREQ_SWREQ7_Pos            (7)                                               /*!< PDMA_T::SWREQ: SWREQ7 Position        */
#define PDMA_SWREQ_SWREQ7_Msk            (0x1ul << PDMA_SWREQ_SWREQ7_Pos)                  /*!< PDMA_T::SWREQ: SWREQ7 Mask            */

#define PDMA_SWREQ_SWREQ8_Pos            (8)                                               /*!< PDMA_T::SWREQ: SWREQ8 Position        */
#define PDMA_SWREQ_SWREQ8_Msk            (0x1ul << PDMA_SWREQ_SWREQ8_Pos)                  /*!< PDMA_T::SWREQ: SWREQ8 Mask            */

#define PDMA_SWREQ_SWREQ9_Pos            (9)                                               /*!< PDMA_T::SWREQ: SWREQ9 Position        */
#define PDMA_SWREQ_SWREQ9_Msk            (0x1ul << PDMA_SWREQ_SWREQ9_Pos)                  /*!< PDMA_T::SWREQ: SWREQ9 Mask            */

#define PDMA_SWREQ_SWREQ10_Pos           (10)                                              /*!< PDMA_T::SWREQ: SWREQ10 Position       */
#define PDMA_SWREQ_SWREQ10_Msk           (0x1ul << PDMA_SWREQ_SWREQ10_Pos)                 /*!< PDMA_T::SWREQ: SWREQ10 Mask           */

#define PDMA_SWREQ_SWREQ11_Pos           (11)                                              /*!< PDMA_T::SWREQ: SWREQ11 Position       */
#define PDMA_SWREQ_SWREQ11_Msk           (0x1ul << PDMA_SWREQ_SWREQ11_Pos)                 /*!< PDMA_T::SWREQ: SWREQ11 Mask           */

#define PDMA_TRGSTS_REQSTSn_Pos          (0)                                               /*!< PDMA_T::TRGSTS: REQSTSn Position      */
#define PDMA_TRGSTS_REQSTSn_Msk          (0xfffful << PDMA_TRGSTS_REQSTSn_Pos)             /*!< PDMA_T::TRGSTS: REQSTSn Mask          */

#define PDMA_TRGSTS_REQSTS0_Pos          (0)                                               /*!< PDMA_T::TRGSTS: REQSTS0 Position      */
#define PDMA_TRGSTS_REQSTS0_Msk          (0x1ul << PDMA_TRGSTS_REQSTS0_Pos)                /*!< PDMA_T::TRGSTS: REQSTS0 Mask          */

#define PDMA_TRGSTS_REQSTS1_Pos          (1)                                               /*!< PDMA_T::TRGSTS: REQSTS1 Position      */
#define PDMA_TRGSTS_REQSTS1_Msk          (0x1ul << PDMA_TRGSTS_REQSTS1_Pos)                /*!< PDMA_T::TRGSTS: REQSTS1 Mask          */

#define PDMA_TRGSTS_REQSTS2_Pos          (2)                                               /*!< PDMA_T::TRGSTS: REQSTS2 Position      */
#define PDMA_TRGSTS_REQSTS2_Msk          (0x1ul << PDMA_TRGSTS_REQSTS2_Pos)                /*!< PDMA_T::TRGSTS: REQSTS2 Mask          */

#define PDMA_TRGSTS_REQSTS3_Pos          (3)                                               /*!< PDMA_T::TRGSTS: REQSTS3 Position      */
#define PDMA_TRGSTS_REQSTS3_Msk          (0x1ul << PDMA_TRGSTS_REQSTS3_Pos)                /*!< PDMA_T::TRGSTS: REQSTS3 Mask          */

#define PDMA_TRGSTS_REQSTS4_Pos          (4)                                               /*!< PDMA_T::TRGSTS: REQSTS4 Position      */
#define PDMA_TRGSTS_REQSTS4_Msk          (0x1ul << PDMA_TRGSTS_REQSTS4_Pos)                /*!< PDMA_T::TRGSTS: REQSTS4 Mask          */

#define PDMA_TRGSTS_REQSTS5_Pos          (5)                                               /*!< PDMA_T::TRGSTS: REQSTS5 Position      */
#define PDMA_TRGSTS_REQSTS5_Msk          (0x1ul << PDMA_TRGSTS_REQSTS5_Pos)                /*!< PDMA_T::TRGSTS: REQSTS5 Mask          */

#define PDMA_TRGSTS_REQSTS6_Pos          (6)                                               /*!< PDMA_T::TRGSTS: REQSTS6 Position      */
#define PDMA_TRGSTS_REQSTS6_Msk          (0x1ul << PDMA_TRGSTS_REQSTS6_Pos)                /*!< PDMA_T::TRGSTS: REQSTS6 Mask          */

#define PDMA_TRGSTS_REQSTS7_Pos          (7)                                               /*!< PDMA_T::TRGSTS: REQSTS7 Position      */
#define PDMA_TRGSTS_REQSTS7_Msk          (0x1ul << PDMA_TRGSTS_REQSTS7_Pos)                /*!< PDMA_T::TRGSTS: REQSTS7 Mask          */

#define PDMA_TRGSTS_REQSTS8_Pos          (8)                                               /*!< PDMA_T::TRGSTS: REQSTS8 Position      */
#define PDMA_TRGSTS_REQSTS8_Msk          (0x1ul << PDMA_TRGSTS_REQSTS8_Pos)                /*!< PDMA_T::TRGSTS: REQSTS8 Mask          */

#define PDMA_TRGSTS_REQSTS9_Pos          (9)                                               /*!< PDMA_T::TRGSTS: REQSTS9 Position      */
#define PDMA_TRGSTS_REQSTS9_Msk          (0x1ul << PDMA_TRGSTS_REQSTS9_Pos)                /*!< PDMA_T::TRGSTS: REQSTS9 Mask          */

#define PDMA_TRGSTS_REQSTS10_Pos         (10)                                              /*!< PDMA_T::TRGSTS: REQSTS10 Position     */
#define PDMA_TRGSTS_REQSTS10_Msk         (0x1ul << PDMA_TRGSTS_REQSTS10_Pos)               /*!< PDMA_T::TRGSTS: REQSTS10 Mask         */

#define PDMA_TRGSTS_REQSTS11_Pos         (11)                                              /*!< PDMA_T::TRGSTS: REQSTS11 Position     */
#define PDMA_TRGSTS_REQSTS11_Msk         (0x1ul << PDMA_TRGSTS_REQSTS11_Pos)               /*!< PDMA_T::TRGSTS: REQSTS11 Mask         */

#define PDMA_PRISET_FPRISETn_Pos         (0)                                               /*!< PDMA_T::PRISET: FPRISETn Position     */
#define PDMA_PRISET_FPRISETn_Msk         (0xfffful << PDMA_PRISET_FPRISETn_Pos)            /*!< PDMA_T::PRISET: FPRISETn Mask         */

#define PDMA_PRISET_FPRISET0_Pos         (0)                                               /*!< PDMA_T::PRISET: FPRISET0 Position     */
#define PDMA_PRISET_FPRISET0_Msk         (0x1ul << PDMA_PRISET_FPRISET0_Pos)               /*!< PDMA_T::PRISET: FPRISET0 Mask         */

#define PDMA_PRISET_FPRISET1_Pos         (1)                                               /*!< PDMA_T::PRISET: FPRISET1 Position     */
#define PDMA_PRISET_FPRISET1_Msk         (0x1ul << PDMA_PRISET_FPRISET1_Pos)               /*!< PDMA_T::PRISET: FPRISET1 Mask         */

#define PDMA_PRISET_FPRISET2_Pos         (2)                                               /*!< PDMA_T::PRISET: FPRISET2 Position     */
#define PDMA_PRISET_FPRISET2_Msk         (0x1ul << PDMA_PRISET_FPRISET2_Pos)               /*!< PDMA_T::PRISET: FPRISET2 Mask         */

#define PDMA_PRISET_FPRISET3_Pos         (3)                                               /*!< PDMA_T::PRISET: FPRISET3 Position     */
#define PDMA_PRISET_FPRISET3_Msk         (0x1ul << PDMA_PRISET_FPRISET3_Pos)               /*!< PDMA_T::PRISET: FPRISET3 Mask         */

#define PDMA_PRISET_FPRISET4_Pos         (4)                                               /*!< PDMA_T::PRISET: FPRISET4 Position     */
#define PDMA_PRISET_FPRISET4_Msk         (0x1ul << PDMA_PRISET_FPRISET4_Pos)               /*!< PDMA_T::PRISET: FPRISET4 Mask         */

#define PDMA_PRISET_FPRISET5_Pos         (5)                                               /*!< PDMA_T::PRISET: FPRISET5 Position     */
#define PDMA_PRISET_FPRISET5_Msk         (0x1ul << PDMA_PRISET_FPRISET5_Pos)               /*!< PDMA_T::PRISET: FPRISET5 Mask         */

#define PDMA_PRISET_FPRISET6_Pos         (6)                                               /*!< PDMA_T::PRISET: FPRISET6 Position     */
#define PDMA_PRISET_FPRISET6_Msk         (0x1ul << PDMA_PRISET_FPRISET6_Pos)               /*!< PDMA_T::PRISET: FPRISET6 Mask         */

#define PDMA_PRISET_FPRISET7_Pos         (7)                                               /*!< PDMA_T::PRISET: FPRISET7 Position     */
#define PDMA_PRISET_FPRISET7_Msk         (0x1ul << PDMA_PRISET_FPRISET7_Pos)               /*!< PDMA_T::PRISET: FPRISET7 Mask         */

#define PDMA_PRISET_FPRISET8_Pos         (8)                                               /*!< PDMA_T::PRISET: FPRISET8 Position     */
#define PDMA_PRISET_FPRISET8_Msk         (0x1ul << PDMA_PRISET_FPRISET8_Pos)               /*!< PDMA_T::PRISET: FPRISET8 Mask         */

#define PDMA_PRISET_FPRISET9_Pos         (9)                                               /*!< PDMA_T::PRISET: FPRISET9 Position     */
#define PDMA_PRISET_FPRISET9_Msk         (0x1ul << PDMA_PRISET_FPRISET9_Pos)               /*!< PDMA_T::PRISET: FPRISET9 Mask         */

#define PDMA_PRISET_FPRISET10_Pos        (10)                                              /*!< PDMA_T::PRISET: FPRISET10 Position    */
#define PDMA_PRISET_FPRISET10_Msk        (0x1ul << PDMA_PRISET_FPRISET10_Pos)              /*!< PDMA_T::PRISET: FPRISET10 Mask        */

#define PDMA_PRISET_FPRISET11_Pos        (11)                                              /*!< PDMA_T::PRISET: FPRISET11 Position    */
#define PDMA_PRISET_FPRISET11_Msk        (0x1ul << PDMA_PRISET_FPRISET11_Pos)              /*!< PDMA_T::PRISET: FPRISET11 Mask        */

#define PDMA_PRICLR_FPRICLRn_Pos         (0)                                               /*!< PDMA_T::PRICLR: FPRICLRn Position     */
#define PDMA_PRICLR_FPRICLRn_Msk         (0xfffful << PDMA_PRICLR_FPRICLRn_Pos)            /*!< PDMA_T::PRICLR: FPRICLRn Mask         */

#define PDMA_PRICLR_FPRICLR0_Pos         (0)                                               /*!< PDMA_T::PRICLR: FPRICLR0 Position     */
#define PDMA_PRICLR_FPRICLR0_Msk         (0x1ul << PDMA_PRICLR_FPRICLR0_Pos)               /*!< PDMA_T::PRICLR: FPRICLR0 Mask         */

#define PDMA_PRICLR_FPRICLR1_Pos         (1)                                               /*!< PDMA_T::PRICLR: FPRICLR1 Position     */
#define PDMA_PRICLR_FPRICLR1_Msk         (0x1ul << PDMA_PRICLR_FPRICLR1_Pos)               /*!< PDMA_T::PRICLR: FPRICLR1 Mask         */

#define PDMA_PRICLR_FPRICLR2_Pos         (2)                                               /*!< PDMA_T::PRICLR: FPRICLR2 Position     */
#define PDMA_PRICLR_FPRICLR2_Msk         (0x1ul << PDMA_PRICLR_FPRICLR2_Pos)               /*!< PDMA_T::PRICLR: FPRICLR2 Mask         */

#define PDMA_PRICLR_FPRICLR3_Pos         (3)                                               /*!< PDMA_T::PRICLR: FPRICLR3 Position     */
#define PDMA_PRICLR_FPRICLR3_Msk         (0x1ul << PDMA_PRICLR_FPRICLR3_Pos)               /*!< PDMA_T::PRICLR: FPRICLR3 Mask         */

#define PDMA_PRICLR_FPRICLR4_Pos         (4)                                               /*!< PDMA_T::PRICLR: FPRICLR4 Position     */
#define PDMA_PRICLR_FPRICLR4_Msk         (0x1ul << PDMA_PRICLR_FPRICLR4_Pos)               /*!< PDMA_T::PRICLR: FPRICLR4 Mask         */

#define PDMA_PRICLR_FPRICLR5_Pos         (5)                                               /*!< PDMA_T::PRICLR: FPRICLR5 Position     */
#define PDMA_PRICLR_FPRICLR5_Msk         (0x1ul << PDMA_PRICLR_FPRICLR5_Pos)               /*!< PDMA_T::PRICLR: FPRICLR5 Mask         */

#define PDMA_PRICLR_FPRICLR6_Pos         (6)                                               /*!< PDMA_T::PRICLR: FPRICLR6 Position     */
#define PDMA_PRICLR_FPRICLR6_Msk         (0x1ul << PDMA_PRICLR_FPRICLR6_Pos)               /*!< PDMA_T::PRICLR: FPRICLR6 Mask         */

#define PDMA_PRICLR_FPRICLR7_Pos         (7)                                               /*!< PDMA_T::PRICLR: FPRICLR7 Position     */
#define PDMA_PRICLR_FPRICLR7_Msk         (0x1ul << PDMA_PRICLR_FPRICLR7_Pos)               /*!< PDMA_T::PRICLR: FPRICLR7 Mask         */

#define PDMA_PRICLR_FPRICLR8_Pos         (8)                                               /*!< PDMA_T::PRICLR: FPRICLR8 Position     */
#define PDMA_PRICLR_FPRICLR8_Msk         (0x1ul << PDMA_PRICLR_FPRICLR8_Pos)               /*!< PDMA_T::PRICLR: FPRICLR8 Mask         */

#define PDMA_PRICLR_FPRICLR9_Pos         (9)                                               /*!< PDMA_T::PRICLR: FPRICLR9 Position     */
#define PDMA_PRICLR_FPRICLR9_Msk         (0x1ul << PDMA_PRICLR_FPRICLR9_Pos)               /*!< PDMA_T::PRICLR: FPRICLR9 Mask         */

#define PDMA_PRICLR_FPRICLR10_Pos        (10)                                              /*!< PDMA_T::PRICLR: FPRICLR10 Position    */
#define PDMA_PRICLR_FPRICLR10_Msk        (0x1ul << PDMA_PRICLR_FPRICLR10_Pos)              /*!< PDMA_T::PRICLR: FPRICLR10 Mask        */

#define PDMA_PRICLR_FPRICLR11_Pos        (11)                                              /*!< PDMA_T::PRICLR: FPRICLR11 Position    */
#define PDMA_PRICLR_FPRICLR11_Msk        (0x1ul << PDMA_PRICLR_FPRICLR11_Pos)              /*!< PDMA_T::PRICLR: FPRICLR11 Mask        */

#define PDMA_INTEN_INTENn_Pos            (0)                                               /*!< PDMA_T::INTEN: INTENn Position        */
#define PDMA_INTEN_INTENn_Msk            (0xfffful << PDMA_INTEN_INTENn_Pos)               /*!< PDMA_T::INTEN: INTENn Mask            */

#define PDMA_INTEN_INTEN0_Pos            (0)                                               /*!< PDMA_T::INTEN: INTEN0 Position        */
#define PDMA_INTEN_INTEN0_Msk            (0x1ul << PDMA_INTEN_INTEN0_Pos)                  /*!< PDMA_T::INTEN: INTEN0 Mask            */

#define PDMA_INTEN_INTEN1_Pos            (1)                                               /*!< PDMA_T::INTEN: INTEN1 Position        */
#define PDMA_INTEN_INTEN1_Msk            (0x1ul << PDMA_INTEN_INTEN1_Pos)                  /*!< PDMA_T::INTEN: INTEN1 Mask            */

#define PDMA_INTEN_INTEN2_Pos            (2)                                               /*!< PDMA_T::INTEN: INTEN2 Position        */
#define PDMA_INTEN_INTEN2_Msk            (0x1ul << PDMA_INTEN_INTEN2_Pos)                  /*!< PDMA_T::INTEN: INTEN2 Mask            */

#define PDMA_INTEN_INTEN3_Pos            (3)                                               /*!< PDMA_T::INTEN: INTEN3 Position        */
#define PDMA_INTEN_INTEN3_Msk            (0x1ul << PDMA_INTEN_INTEN3_Pos)                  /*!< PDMA_T::INTEN: INTEN3 Mask            */

#define PDMA_INTEN_INTEN4_Pos            (4)                                               /*!< PDMA_T::INTEN: INTEN4 Position        */
#define PDMA_INTEN_INTEN4_Msk            (0x1ul << PDMA_INTEN_INTEN4_Pos)                  /*!< PDMA_T::INTEN: INTEN4 Mask            */

#define PDMA_INTEN_INTEN5_Pos            (5)                                               /*!< PDMA_T::INTEN: INTEN5 Position        */
#define PDMA_INTEN_INTEN5_Msk            (0x1ul << PDMA_INTEN_INTEN5_Pos)                  /*!< PDMA_T::INTEN: INTEN5 Mask            */

#define PDMA_INTEN_INTEN6_Pos            (6)                                               /*!< PDMA_T::INTEN: INTEN6 Position        */
#define PDMA_INTEN_INTEN6_Msk            (0x1ul << PDMA_INTEN_INTEN6_Pos)                  /*!< PDMA_T::INTEN: INTEN6 Mask            */

#define PDMA_INTEN_INTEN7_Pos            (7)                                               /*!< PDMA_T::INTEN: INTEN7 Position        */
#define PDMA_INTEN_INTEN7_Msk            (0x1ul << PDMA_INTEN_INTEN7_Pos)                  /*!< PDMA_T::INTEN: INTEN7 Mask            */

#define PDMA_INTEN_INTEN8_Pos            (8)                                               /*!< PDMA_T::INTEN: INTEN8 Position        */
#define PDMA_INTEN_INTEN8_Msk            (0x1ul << PDMA_INTEN_INTEN8_Pos)                  /*!< PDMA_T::INTEN: INTEN8 Mask            */

#define PDMA_INTEN_INTEN9_Pos            (9)                                               /*!< PDMA_T::INTEN: INTEN9 Position        */
#define PDMA_INTEN_INTEN9_Msk            (0x1ul << PDMA_INTEN_INTEN9_Pos)                  /*!< PDMA_T::INTEN: INTEN9 Mask            */

#define PDMA_INTEN_INTEN10_Pos           (10)                                              /*!< PDMA_T::INTEN: INTEN10 Position       */
#define PDMA_INTEN_INTEN10_Msk           (0x1ul << PDMA_INTEN_INTEN10_Pos)                 /*!< PDMA_T::INTEN: INTEN10 Mask           */

#define PDMA_INTEN_INTEN11_Pos           (11)                                              /*!< PDMA_T::INTEN: INTEN11 Position       */
#define PDMA_INTEN_INTEN11_Msk           (0x1ul << PDMA_INTEN_INTEN11_Pos)                 /*!< PDMA_T::INTEN: INTEN11 Mask           */

#define PDMA_INTSTS_ABTIF_Pos            (0)                                               /*!< PDMA_T::INTSTS: ABTIF Position        */
#define PDMA_INTSTS_ABTIF_Msk            (0x1ul << PDMA_INTSTS_ABTIF_Pos)                  /*!< PDMA_T::INTSTS: ABTIF Mask            */

#define PDMA_INTSTS_TDIF_Pos             (1)                                               /*!< PDMA_T::INTSTS: TDIF Position         */
#define PDMA_INTSTS_TDIF_Msk             (0x1ul << PDMA_INTSTS_TDIF_Pos)                   /*!< PDMA_T::INTSTS: TDIF Mask             */

#define PDMA_INTSTS_ALIGNF_Pos           (2)                                               /*!< PDMA_T::INTSTS: ALIGNF Position       */
#define PDMA_INTSTS_ALIGNF_Msk           (0x1ul << PDMA_INTSTS_ALIGNF_Pos)                 /*!< PDMA_T::INTSTS: ALIGNF Mask           */

#define PDMA_INTSTS_REQTOF0_Pos          (8)                                               /*!< PDMA_T::INTSTS: REQTOF0 Position      */
#define PDMA_INTSTS_REQTOF0_Msk          (0x1ul << PDMA_INTSTS_REQTOF0_Pos)                /*!< PDMA_T::INTSTS: REQTOF0 Mask          */

#define PDMA_INTSTS_REQTOF1_Pos          (9)                                               /*!< PDMA_T::INTSTS: REQTOF1 Position      */
#define PDMA_INTSTS_REQTOF1_Msk          (0x1ul << PDMA_INTSTS_REQTOF1_Pos)                /*!< PDMA_T::INTSTS: REQTOF1 Mask          */

#define PDMA_INTSTS_REQTOF2_Pos          (10)                                              /*!< PDMA_T::INTSTS: REQTOF2 Position      */
#define PDMA_INTSTS_REQTOF2_Msk          (0x1ul << PDMA_INTSTS_REQTOF2_Pos)                /*!< PDMA_T::INTSTS: REQTOF2 Mask          */

#define PDMA_INTSTS_REQTOF3_Pos          (11)                                              /*!< PDMA_T::INTSTS: REQTOF3 Position      */
#define PDMA_INTSTS_REQTOF3_Msk          (0x1ul << PDMA_INTSTS_REQTOF3_Pos)                /*!< PDMA_T::INTSTS: REQTOF3 Mask          */

#define PDMA_INTSTS_REQTOF4_Pos          (12)                                              /*!< PDMA_T::INTSTS: REQTOF4 Position      */
#define PDMA_INTSTS_REQTOF4_Msk          (0x1ul << PDMA_INTSTS_REQTOF4_Pos)                /*!< PDMA_T::INTSTS: REQTOF4 Mask          */

#define PDMA_INTSTS_REQTOF5_Pos          (13)                                              /*!< PDMA_T::INTSTS: REQTOF5 Position      */
#define PDMA_INTSTS_REQTOF5_Msk          (0x1ul << PDMA_INTSTS_REQTOF5_Pos)                /*!< PDMA_T::INTSTS: REQTOF5 Mask          */

#define PDMA_INTSTS_REQTOF6_Pos          (14)                                              /*!< PDMA_T::INTSTS: REQTOF6 Position      */
#define PDMA_INTSTS_REQTOF6_Msk          (0x1ul << PDMA_INTSTS_REQTOF6_Pos)                /*!< PDMA_T::INTSTS: REQTOF6 Mask          */

#define PDMA_INTSTS_REQTOF7_Pos          (15)                                              /*!< PDMA_T::INTSTS: REQTOF7 Position      */
#define PDMA_INTSTS_REQTOF7_Msk          (0x1ul << PDMA_INTSTS_REQTOF7_Pos)                /*!< PDMA_T::INTSTS: REQTOF7 Mask          */

#define PDMA_INTSTS_REQTOF8_Pos          (16)                                              /*!< PDMA_T::INTSTS: REQTOF8 Position      */
#define PDMA_INTSTS_REQTOF8_Msk          (0x1ul << PDMA_INTSTS_REQTOF8_Pos)                /*!< PDMA_T::INTSTS: REQTOF8 Mask          */

#define PDMA_INTSTS_REQTOF9_Pos          (17)                                              /*!< PDMA_T::INTSTS: REQTOF9 Position      */
#define PDMA_INTSTS_REQTOF9_Msk          (0x1ul << PDMA_INTSTS_REQTOF9_Pos)                /*!< PDMA_T::INTSTS: REQTOF9 Mask          */

#define PDMA_INTSTS_REQTOF10_Pos         (18)                                              /*!< PDMA_T::INTSTS: REQTOF10 Position     */
#define PDMA_INTSTS_REQTOF10_Msk         (0x1ul << PDMA_INTSTS_REQTOF10_Pos)               /*!< PDMA_T::INTSTS: REQTOF10 Mask         */

#define PDMA_INTSTS_REQTOF11_Pos         (19)                                              /*!< PDMA_T::INTSTS: REQTOF11 Position     */
#define PDMA_INTSTS_REQTOF11_Msk         (0x1ul << PDMA_INTSTS_REQTOF11_Pos)               /*!< PDMA_T::INTSTS: REQTOF11 Mask         */

#define PDMA_INTSTS_REQTOF12_Pos         (20)                                              /*!< PDMA_T::INTSTS: REQTOF12 Position     */
#define PDMA_INTSTS_REQTOF12_Msk         (0x1ul << PDMA_INTSTS_REQTOF12_Pos)               /*!< PDMA_T::INTSTS: REQTOF12 Mask         */

#define PDMA_INTSTS_REQTOF13_Pos         (21)                                              /*!< PDMA_T::INTSTS: REQTOF13 Position     */
#define PDMA_INTSTS_REQTOF13_Msk         (0x1ul << PDMA_INTSTS_REQTOF13_Pos)               /*!< PDMA_T::INTSTS: REQTOF13 Mask         */

#define PDMA_INTSTS_REQTOF14_Pos         (22)                                              /*!< PDMA_T::INTSTS: REQTOF14 Position     */
#define PDMA_INTSTS_REQTOF14_Msk         (0x1ul << PDMA_INTSTS_REQTOF14_Pos)               /*!< PDMA_T::INTSTS: REQTOF14 Mask         */

#define PDMA_INTSTS_REQTOF15_Pos         (23)                                              /*!< PDMA_T::INTSTS: REQTOF15 Position     */
#define PDMA_INTSTS_REQTOF15_Msk         (0x1ul << PDMA_INTSTS_REQTOF15_Pos)               /*!< PDMA_T::INTSTS: REQTOF15 Mask         */

#define PDMA_ABTSTS_ABTIF0_Pos           (0)                                               /*!< PDMA_T::ABTSTS: ABTIF0 Position       */
#define PDMA_ABTSTS_ABTIF0_Msk           (0x1ul << PDMA_ABTSTS_ABTIF0_Pos)                 /*!< PDMA_T::ABTSTS: ABTIF0 Mask           */

#define PDMA_ABTSTS_ABTIF1_Pos           (1)                                               /*!< PDMA_T::ABTSTS: ABTIF1 Position       */
#define PDMA_ABTSTS_ABTIF1_Msk           (0x1ul << PDMA_ABTSTS_ABTIF1_Pos)                 /*!< PDMA_T::ABTSTS: ABTIF1 Mask           */

#define PDMA_ABTSTS_ABTIF2_Pos           (2)                                               /*!< PDMA_T::ABTSTS: ABTIF2 Position       */
#define PDMA_ABTSTS_ABTIF2_Msk           (0x1ul << PDMA_ABTSTS_ABTIF2_Pos)                 /*!< PDMA_T::ABTSTS: ABTIF2 Mask           */

#define PDMA_ABTSTS_ABTIF3_Pos           (3)                                               /*!< PDMA_T::ABTSTS: ABTIF3 Position       */
#define PDMA_ABTSTS_ABTIF3_Msk           (0x1ul << PDMA_ABTSTS_ABTIF3_Pos)                 /*!< PDMA_T::ABTSTS: ABTIF3 Mask           */

#define PDMA_ABTSTS_ABTIF4_Pos           (4)                                               /*!< PDMA_T::ABTSTS: ABTIF4 Position       */
#define PDMA_ABTSTS_ABTIF4_Msk           (0x1ul << PDMA_ABTSTS_ABTIF4_Pos)                 /*!< PDMA_T::ABTSTS: ABTIF4 Mask           */

#define PDMA_ABTSTS_ABTIF5_Pos           (5)                                               /*!< PDMA_T::ABTSTS: ABTIF5 Position       */
#define PDMA_ABTSTS_ABTIF5_Msk           (0x1ul << PDMA_ABTSTS_ABTIF5_Pos)                 /*!< PDMA_T::ABTSTS: ABTIF5 Mask           */

#define PDMA_ABTSTS_ABTIF6_Pos           (6)                                               /*!< PDMA_T::ABTSTS: ABTIF6 Position       */
#define PDMA_ABTSTS_ABTIF6_Msk           (0x1ul << PDMA_ABTSTS_ABTIF6_Pos)                 /*!< PDMA_T::ABTSTS: ABTIF6 Mask           */

#define PDMA_ABTSTS_ABTIF7_Pos           (7)                                               /*!< PDMA_T::ABTSTS: ABTIF7 Position       */
#define PDMA_ABTSTS_ABTIF7_Msk           (0x1ul << PDMA_ABTSTS_ABTIF7_Pos)                 /*!< PDMA_T::ABTSTS: ABTIF7 Mask           */

#define PDMA_ABTSTS_ABTIF8_Pos           (8)                                               /*!< PDMA_T::ABTSTS: ABTIF8 Position       */
#define PDMA_ABTSTS_ABTIF8_Msk           (0x1ul << PDMA_ABTSTS_ABTIF8_Pos)                 /*!< PDMA_T::ABTSTS: ABTIF8 Mask           */

#define PDMA_ABTSTS_ABTIF9_Pos           (9)                                               /*!< PDMA_T::ABTSTS: ABTIF9 Position       */
#define PDMA_ABTSTS_ABTIF9_Msk           (0x1ul << PDMA_ABTSTS_ABTIF9_Pos)                 /*!< PDMA_T::ABTSTS: ABTIF9 Mask           */

#define PDMA_ABTSTS_ABTIF10_Pos          (10)                                              /*!< PDMA_T::ABTSTS: ABTIF10 Position      */
#define PDMA_ABTSTS_ABTIF10_Msk          (0x1ul << PDMA_ABTSTS_ABTIF10_Pos)                /*!< PDMA_T::ABTSTS: ABTIF10 Mask          */

#define PDMA_ABTSTS_ABTIF11_Pos          (11)                                              /*!< PDMA_T::ABTSTS: ABTIF11 Position      */
#define PDMA_ABTSTS_ABTIF11_Msk          (0x1ul << PDMA_ABTSTS_ABTIF11_Pos)                /*!< PDMA_T::ABTSTS: ABTIF11 Mask          */

#define PDMA_TDSTS_TDIF0_Pos             (0)                                               /*!< PDMA_T::TDSTS: TDIF0 Position         */
#define PDMA_TDSTS_TDIF0_Msk             (0x1ul << PDMA_TDSTS_TDIF0_Pos)                   /*!< PDMA_T::TDSTS: TDIF0 Mask             */

#define PDMA_TDSTS_TDIF1_Pos             (1)                                               /*!< PDMA_T::TDSTS: TDIF1 Position         */
#define PDMA_TDSTS_TDIF1_Msk             (0x1ul << PDMA_TDSTS_TDIF1_Pos)                   /*!< PDMA_T::TDSTS: TDIF1 Mask             */

#define PDMA_TDSTS_TDIF2_Pos             (2)                                               /*!< PDMA_T::TDSTS: TDIF2 Position         */
#define PDMA_TDSTS_TDIF2_Msk             (0x1ul << PDMA_TDSTS_TDIF2_Pos)                   /*!< PDMA_T::TDSTS: TDIF2 Mask             */

#define PDMA_TDSTS_TDIF3_Pos             (3)                                               /*!< PDMA_T::TDSTS: TDIF3 Position         */
#define PDMA_TDSTS_TDIF3_Msk             (0x1ul << PDMA_TDSTS_TDIF3_Pos)                   /*!< PDMA_T::TDSTS: TDIF3 Mask             */

#define PDMA_TDSTS_TDIF4_Pos             (4)                                               /*!< PDMA_T::TDSTS: TDIF4 Position         */
#define PDMA_TDSTS_TDIF4_Msk             (0x1ul << PDMA_TDSTS_TDIF4_Pos)                   /*!< PDMA_T::TDSTS: TDIF4 Mask             */

#define PDMA_TDSTS_TDIF5_Pos             (5)                                               /*!< PDMA_T::TDSTS: TDIF5 Position         */
#define PDMA_TDSTS_TDIF5_Msk             (0x1ul << PDMA_TDSTS_TDIF5_Pos)                   /*!< PDMA_T::TDSTS: TDIF5 Mask             */

#define PDMA_TDSTS_TDIF6_Pos             (6)                                               /*!< PDMA_T::TDSTS: TDIF6 Position         */
#define PDMA_TDSTS_TDIF6_Msk             (0x1ul << PDMA_TDSTS_TDIF6_Pos)                   /*!< PDMA_T::TDSTS: TDIF6 Mask             */

#define PDMA_TDSTS_TDIF7_Pos             (7)                                               /*!< PDMA_T::TDSTS: TDIF7 Position         */
#define PDMA_TDSTS_TDIF7_Msk             (0x1ul << PDMA_TDSTS_TDIF7_Pos)                   /*!< PDMA_T::TDSTS: TDIF7 Mask             */

#define PDMA_TDSTS_TDIF8_Pos             (8)                                               /*!< PDMA_T::TDSTS: TDIF8 Position         */
#define PDMA_TDSTS_TDIF8_Msk             (0x1ul << PDMA_TDSTS_TDIF8_Pos)                   /*!< PDMA_T::TDSTS: TDIF8 Mask             */

#define PDMA_TDSTS_TDIF9_Pos             (9)                                               /*!< PDMA_T::TDSTS: TDIF9 Position         */
#define PDMA_TDSTS_TDIF9_Msk             (0x1ul << PDMA_TDSTS_TDIF9_Pos)                   /*!< PDMA_T::TDSTS: TDIF9 Mask             */

#define PDMA_TDSTS_TDIF10_Pos            (10)                                              /*!< PDMA_T::TDSTS: TDIF10 Position        */
#define PDMA_TDSTS_TDIF10_Msk            (0x1ul << PDMA_TDSTS_TDIF10_Pos)                  /*!< PDMA_T::TDSTS: TDIF10 Mask            */

#define PDMA_TDSTS_TDIF11_Pos            (11)                                              /*!< PDMA_T::TDSTS: TDIF11 Position        */
#define PDMA_TDSTS_TDIF11_Msk            (0x1ul << PDMA_TDSTS_TDIF11_Pos)                  /*!< PDMA_T::TDSTS: TDIF11 Mask            */

#define PDMA_ALIGN_ALIGNn_Pos            (0)                                               /*!< PDMA_T::ALIGN: ALIGNn Position        */
#define PDMA_ALIGN_ALIGNn_Msk            (0xfffful << PDMA_ALIGN_ALIGNn_Pos)               /*!< PDMA_T::ALIGN: ALIGNn Mask            */

#define PDMA_ALIGN_ALIGN0_Pos            (0)                                               /*!< PDMA_T::ALIGN: ALIGN0 Position        */
#define PDMA_ALIGN_ALIGN0_Msk            (0x1ul << PDMA_ALIGN_ALIGN0_Pos)                  /*!< PDMA_T::ALIGN: ALIGN0 Mask            */

#define PDMA_ALIGN_ALIGN1_Pos            (1)                                               /*!< PDMA_T::ALIGN: ALIGN1 Position        */
#define PDMA_ALIGN_ALIGN1_Msk            (0x1ul << PDMA_ALIGN_ALIGN1_Pos)                  /*!< PDMA_T::ALIGN: ALIGN1 Mask            */

#define PDMA_ALIGN_ALIGN2_Pos            (2)                                               /*!< PDMA_T::ALIGN: ALIGN2 Position        */
#define PDMA_ALIGN_ALIGN2_Msk            (0x1ul << PDMA_ALIGN_ALIGN2_Pos)                  /*!< PDMA_T::ALIGN: ALIGN2 Mask            */

#define PDMA_ALIGN_ALIGN3_Pos            (3)                                               /*!< PDMA_T::ALIGN: ALIGN3 Position        */
#define PDMA_ALIGN_ALIGN3_Msk            (0x1ul << PDMA_ALIGN_ALIGN3_Pos)                  /*!< PDMA_T::ALIGN: ALIGN3 Mask            */

#define PDMA_ALIGN_ALIGN4_Pos            (4)                                               /*!< PDMA_T::ALIGN: ALIGN4 Position        */
#define PDMA_ALIGN_ALIGN4_Msk            (0x1ul << PDMA_ALIGN_ALIGN4_Pos)                  /*!< PDMA_T::ALIGN: ALIGN4 Mask            */

#define PDMA_ALIGN_ALIGN5_Pos            (5)                                               /*!< PDMA_T::ALIGN: ALIGN5 Position        */
#define PDMA_ALIGN_ALIGN5_Msk            (0x1ul << PDMA_ALIGN_ALIGN5_Pos)                  /*!< PDMA_T::ALIGN: ALIGN5 Mask            */

#define PDMA_ALIGN_ALIGN6_Pos            (6)                                               /*!< PDMA_T::ALIGN: ALIGN6 Position        */
#define PDMA_ALIGN_ALIGN6_Msk            (0x1ul << PDMA_ALIGN_ALIGN6_Pos)                  /*!< PDMA_T::ALIGN: ALIGN6 Mask            */

#define PDMA_ALIGN_ALIGN7_Pos            (7)                                               /*!< PDMA_T::ALIGN: ALIGN7 Position        */
#define PDMA_ALIGN_ALIGN7_Msk            (0x1ul << PDMA_ALIGN_ALIGN7_Pos)                  /*!< PDMA_T::ALIGN: ALIGN7 Mask            */

#define PDMA_ALIGN_ALIGN8_Pos            (8)                                               /*!< PDMA_T::ALIGN: ALIGN8 Position        */
#define PDMA_ALIGN_ALIGN8_Msk            (0x1ul << PDMA_ALIGN_ALIGN8_Pos)                  /*!< PDMA_T::ALIGN: ALIGN8 Mask            */

#define PDMA_ALIGN_ALIGN9_Pos            (9)                                               /*!< PDMA_T::ALIGN: ALIGN9 Position        */
#define PDMA_ALIGN_ALIGN9_Msk            (0x1ul << PDMA_ALIGN_ALIGN9_Pos)                  /*!< PDMA_T::ALIGN: ALIGN9 Mask            */

#define PDMA_ALIGN_ALIGN10_Pos           (10)                                              /*!< PDMA_T::ALIGN: ALIGN10 Position       */
#define PDMA_ALIGN_ALIGN10_Msk           (0x1ul << PDMA_ALIGN_ALIGN10_Pos)                 /*!< PDMA_T::ALIGN: ALIGN10 Mask           */

#define PDMA_ALIGN_ALIGN11_Pos           (11)                                              /*!< PDMA_T::ALIGN: ALIGN11 Position       */
#define PDMA_ALIGN_ALIGN11_Msk           (0x1ul << PDMA_ALIGN_ALIGN11_Pos)                 /*!< PDMA_T::ALIGN: ALIGN11 Mask           */

#define PDMA_TACTSTS_TXACTFn_Pos         (0)                                               /*!< PDMA_T::TACTSTS: TXACTFn Position     */
#define PDMA_TACTSTS_TXACTFn_Msk         (0xfffful << PDMA_TACTSTS_TXACTFn_Pos)            /*!< PDMA_T::TACTSTS: TXACTFn Mask         */

#define PDMA_TACTSTS_TXACTF0_Pos         (0)                                               /*!< PDMA_T::TACTSTS: TXACTF0 Position     */
#define PDMA_TACTSTS_TXACTF0_Msk         (0x1ul << PDMA_TACTSTS_TXACTF0_Pos)               /*!< PDMA_T::TACTSTS: TXACTF0 Mask         */

#define PDMA_TACTSTS_TXACTF1_Pos         (1)                                               /*!< PDMA_T::TACTSTS: TXACTF1 Position     */
#define PDMA_TACTSTS_TXACTF1_Msk         (0x1ul << PDMA_TACTSTS_TXACTF1_Pos)               /*!< PDMA_T::TACTSTS: TXACTF1 Mask         */

#define PDMA_TACTSTS_TXACTF2_Pos         (2)                                               /*!< PDMA_T::TACTSTS: TXACTF2 Position     */
#define PDMA_TACTSTS_TXACTF2_Msk         (0x1ul << PDMA_TACTSTS_TXACTF2_Pos)               /*!< PDMA_T::TACTSTS: TXACTF2 Mask         */

#define PDMA_TACTSTS_TXACTF3_Pos         (3)                                               /*!< PDMA_T::TACTSTS: TXACTF3 Position     */
#define PDMA_TACTSTS_TXACTF3_Msk         (0x1ul << PDMA_TACTSTS_TXACTF3_Pos)               /*!< PDMA_T::TACTSTS: TXACTF3 Mask         */

#define PDMA_TACTSTS_TXACTF4_Pos         (4)                                               /*!< PDMA_T::TACTSTS: TXACTF4 Position     */
#define PDMA_TACTSTS_TXACTF4_Msk         (0x1ul << PDMA_TACTSTS_TXACTF4_Pos)               /*!< PDMA_T::TACTSTS: TXACTF4 Mask         */

#define PDMA_TACTSTS_TXACTF5_Pos         (5)                                               /*!< PDMA_T::TACTSTS: TXACTF5 Position     */
#define PDMA_TACTSTS_TXACTF5_Msk         (0x1ul << PDMA_TACTSTS_TXACTF5_Pos)               /*!< PDMA_T::TACTSTS: TXACTF5 Mask         */

#define PDMA_TACTSTS_TXACTF6_Pos         (6)                                               /*!< PDMA_T::TACTSTS: TXACTF6 Position     */
#define PDMA_TACTSTS_TXACTF6_Msk         (0x1ul << PDMA_TACTSTS_TXACTF6_Pos)               /*!< PDMA_T::TACTSTS: TXACTF6 Mask         */

#define PDMA_TACTSTS_TXACTF7_Pos         (7)                                               /*!< PDMA_T::TACTSTS: TXACTF7 Position     */
#define PDMA_TACTSTS_TXACTF7_Msk         (0x1ul << PDMA_TACTSTS_TXACTF7_Pos)               /*!< PDMA_T::TACTSTS: TXACTF7 Mask         */

#define PDMA_TACTSTS_TXACTF8_Pos         (8)                                               /*!< PDMA_T::TACTSTS: TXACTF8 Position     */
#define PDMA_TACTSTS_TXACTF8_Msk         (0x1ul << PDMA_TACTSTS_TXACTF8_Pos)               /*!< PDMA_T::TACTSTS: TXACTF8 Mask         */

#define PDMA_TACTSTS_TXACTF9_Pos         (9)                                               /*!< PDMA_T::TACTSTS: TXACTF9 Position     */
#define PDMA_TACTSTS_TXACTF9_Msk         (0x1ul << PDMA_TACTSTS_TXACTF9_Pos)               /*!< PDMA_T::TACTSTS: TXACTF9 Mask         */

#define PDMA_TACTSTS_TXACTF10_Pos        (10)                                              /*!< PDMA_T::TACTSTS: TXACTF10 Position    */
#define PDMA_TACTSTS_TXACTF10_Msk        (0x1ul << PDMA_TACTSTS_TXACTF10_Pos)              /*!< PDMA_T::TACTSTS: TXACTF10 Mask        */

#define PDMA_TACTSTS_TXACTF11_Pos        (11)                                              /*!< PDMA_T::TACTSTS: TXACTF11 Position    */
#define PDMA_TACTSTS_TXACTF11_Msk        (0x1ul << PDMA_TACTSTS_TXACTF11_Pos)              /*!< PDMA_T::TACTSTS: TXACTF11 Mask        */

#define PDMA_CHRST_CHnRST_Pos            (0)                                               /*!< PDMA_T::CHRST: CHnRST Position        */
#define PDMA_CHRST_CHnRST_Msk            (0xfffful << PDMA_CHRST_CHnRST_Pos)               /*!< PDMA_T::CHRST: CHnRST Mask            */

#define PDMA_CHRST_CH0RST_Pos            (0)                                               /*!< PDMA_T::CHRST: CH0RST Position        */
#define PDMA_CHRST_CH0RST_Msk            (0x1ul << PDMA_CHRST_CH0RST_Pos)                  /*!< PDMA_T::CHRST: CH0RST Mask            */

#define PDMA_CHRST_CH1RST_Pos            (1)                                               /*!< PDMA_T::CHRST: CH1RST Position        */
#define PDMA_CHRST_CH1RST_Msk            (0x1ul << PDMA_CHRST_CH1RST_Pos)                  /*!< PDMA_T::CHRST: CH1RST Mask            */

#define PDMA_CHRST_CH2RST_Pos            (2)                                               /*!< PDMA_T::CHRST: CH2RST Position        */
#define PDMA_CHRST_CH2RST_Msk            (0x1ul << PDMA_CHRST_CH2RST_Pos)                  /*!< PDMA_T::CHRST: CH2RST Mask            */

#define PDMA_CHRST_CH3RST_Pos            (3)                                               /*!< PDMA_T::CHRST: CH3RST Position        */
#define PDMA_CHRST_CH3RST_Msk            (0x1ul << PDMA_CHRST_CH3RST_Pos)                  /*!< PDMA_T::CHRST: CH3RST Mask            */

#define PDMA_CHRST_CH4RST_Pos            (4)                                               /*!< PDMA_T::CHRST: CH4RST Position        */
#define PDMA_CHRST_CH4RST_Msk            (0x1ul << PDMA_CHRST_CH4RST_Pos)                  /*!< PDMA_T::CHRST: CH4RST Mask            */

#define PDMA_CHRST_CH5RST_Pos            (5)                                               /*!< PDMA_T::CHRST: CH5RST Position        */
#define PDMA_CHRST_CH5RST_Msk            (0x1ul << PDMA_CHRST_CH5RST_Pos)                  /*!< PDMA_T::CHRST: CH5RST Mask            */

#define PDMA_CHRST_CH6RST_Pos            (6)                                               /*!< PDMA_T::CHRST: CH6RST Position        */
#define PDMA_CHRST_CH6RST_Msk            (0x1ul << PDMA_CHRST_CH6RST_Pos)                  /*!< PDMA_T::CHRST: CH6RST Mask            */

#define PDMA_CHRST_CH7RST_Pos            (7)                                               /*!< PDMA_T::CHRST: CH7RST Position        */
#define PDMA_CHRST_CH7RST_Msk            (0x1ul << PDMA_CHRST_CH7RST_Pos)                  /*!< PDMA_T::CHRST: CH7RST Mask            */

#define PDMA_CHRST_CH8RST_Pos            (8)                                               /*!< PDMA_T::CHRST: CH8RST Position        */
#define PDMA_CHRST_CH8RST_Msk            (0x1ul << PDMA_CHRST_CH8RST_Pos)                  /*!< PDMA_T::CHRST: CH8RST Mask            */

#define PDMA_CHRST_CH9RST_Pos            (9)                                               /*!< PDMA_T::CHRST: CH9RST Position        */
#define PDMA_CHRST_CH9RST_Msk            (0x1ul << PDMA_CHRST_CH9RST_Pos)                  /*!< PDMA_T::CHRST: CH9RST Mask            */

#define PDMA_CHRST_CH10RST_Pos           (10)                                              /*!< PDMA_T::CHRST: CH10RST Position       */
#define PDMA_CHRST_CH10RST_Msk           (0x1ul << PDMA_CHRST_CH10RST_Pos)                 /*!< PDMA_T::CHRST: CH10RST Mask           */

#define PDMA_CHRST_CH11RST_Pos           (11)                                              /*!< PDMA_T::CHRST: CH11RST Position       */
#define PDMA_CHRST_CH11RST_Msk           (0x1ul << PDMA_CHRST_CH11RST_Pos)                 /*!< PDMA_T::CHRST: CH11RST Mask           */

#define PDMA_REQSEL0_3_REQSRC0_Pos       (0)                                               /*!< PDMA_T::REQSEL0_3: REQSRC0 Position     */
#define PDMA_REQSEL0_3_REQSRC0_Msk       (0x7ful << PDMA_REQSEL0_3_REQSRC0_Pos)            /*!< PDMA_T::REQSEL0_3: REQSRC0 Mask         */

#define PDMA_REQSEL0_3_REQSRC1_Pos       (8)                                               /*!< PDMA_T::REQSEL0_3: REQSRC1 Position    */
#define PDMA_REQSEL0_3_REQSRC1_Msk       (0x7ful << PDMA_REQSEL0_3_REQSRC1_Pos)            /*!< PDMA_T::REQSEL0_3: REQSRC1 Mask        */

#define PDMA_REQSEL0_3_REQSRC2_Pos       (16)                                              /*!< PDMA_T::REQSEL0_3: REQSRC2 Position    */
#define PDMA_REQSEL0_3_REQSRC2_Msk       (0x7ful << PDMA_REQSEL0_3_REQSRC2_Pos)            /*!< PDMA_T::REQSEL0_3: REQSRC2 Mask        */

#define PDMA_REQSEL0_3_REQSRC3_Pos       (24)                                              /*!< PDMA_T::REQSEL0_3: REQSRC3 Position    */
#define PDMA_REQSEL0_3_REQSRC3_Msk       (0x7ful << PDMA_REQSEL0_3_REQSRC3_Pos)            /*!< PDMA_T::REQSEL0_3: REQSRC3 Mask        */

#define PDMA_REQSEL4_7_REQSRC4_Pos       (0)                                               /*!< PDMA_T::REQSEL4_7: REQSRC4 Position    */
#define PDMA_REQSEL4_7_REQSRC4_Msk       (0x7ful << PDMA_REQSEL4_7_REQSRC4_Pos)            /*!< PDMA_T::REQSEL4_7: REQSRC4 Mask        */

#define PDMA_REQSEL4_7_REQSRC5_Pos       (8)                                               /*!< PDMA_T::REQSEL4_7: REQSRC5 Position    */
#define PDMA_REQSEL4_7_REQSRC5_Msk       (0x7ful << PDMA_REQSEL4_7_REQSRC5_Pos)            /*!< PDMA_T::REQSEL4_7: REQSRC5 Mask        */

#define PDMA_REQSEL4_7_REQSRC6_Pos       (16)                                              /*!< PDMA_T::REQSEL4_7: REQSRC6 Position    */
#define PDMA_REQSEL4_7_REQSRC6_Msk       (0x7ful << PDMA_REQSEL4_7_REQSRC6_Pos)            /*!< PDMA_T::REQSEL4_7: REQSRC6 Mask        */

#define PDMA_REQSEL4_7_REQSRC7_Pos       (24)                                              /*!< PDMA_T::REQSEL4_7: REQSRC7 Position    */
#define PDMA_REQSEL4_7_REQSRC7_Msk       (0x7ful << PDMA_REQSEL4_7_REQSRC7_Pos)            /*!< PDMA_T::REQSEL4_7: REQSRC7 Mask        */

#define PDMA_REQSEL8_11_REQSRC8_Pos      (0)                                               /*!< PDMA_T::REQSEL8_11: REQSRC8 Position   */
#define PDMA_REQSEL8_11_REQSRC8_Msk      (0x7ful << PDMA_REQSEL8_11_REQSRC8_Pos)           /*!< PDMA_T::REQSEL8_11: REQSRC8 Mask       */

#define PDMA_REQSEL8_11_REQSRC9_Pos      (8)                                               /*!< PDMA_T::REQSEL8_11: REQSRC9 Position   */
#define PDMA_REQSEL8_11_REQSRC9_Msk      (0x7ful << PDMA_REQSEL8_11_REQSRC9_Pos)           /*!< PDMA_T::REQSEL8_11: REQSRC9 Mask       */

#define PDMA_REQSEL8_11_REQSRC10_Pos     (16)                                              /*!< PDMA_T::REQSEL8_11: REQSRC10 Position  */
#define PDMA_REQSEL8_11_REQSRC10_Msk     (0x7ful << PDMA_REQSEL8_11_REQSRC10_Pos)          /*!< PDMA_T::REQSEL8_11: REQSRC10 Mask      */

#define PDMA_REQSEL8_11_REQSRC11_Pos     (24)                                              /*!< PDMA_T::REQSEL8_11: REQSRC11 Position  */
#define PDMA_REQSEL8_11_REQSRC11_Msk     (0x7ful << PDMA_REQSEL8_11_REQSRC11_Pos)          /*!< PDMA_T::REQSEL8_11: REQSRC11 Mask      */

/** @} PDMA_CONST */
/** @} end of PDMA register group */
/** @} end of REGISTER group */

#if defined ( __CC_ARM   )
    #pragma no_anon_unions
#endif

#endif /* __PDMA_REG_H__ */
