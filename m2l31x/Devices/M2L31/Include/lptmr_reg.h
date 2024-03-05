/**************************************************************************//**
 * @file     lptmr_reg.h
 * @version  V1.00
 * @brief    LPTMR register definition header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __LPTMR_REG_H__
#define __LPTMR_REG_H__

#if defined ( __CC_ARM   )
    #pragma anon_unions
#endif

/**
   @addtogroup REGISTER Control Register
   @{
*/

/**
    @addtogroup LPTMR Low Power Timer Controller (LPTMR)
    Memory Mapped Structure for LPTMR Controller
@{ */

typedef struct
{


/**
 * @var LPTMR_T::CTL
 * Offset: 0x00  LPTMR0 Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |PSC       |Prescale Counter
 * |        |          |Low Power Timer input clock or event source is divided by (PSC+1) before it is fed to the low power timer up counter
 * |        |          |If this field is 0 (PSC = 0), then there is no scaling.
 * |        |          |Note: Update prescale counter value will reset internal 8-bit prescale counter and 24-bit up counter value.
 * |[15]    |FUNCSEL   |Function Selection
 * |        |          |0 = Low Power Timer controller is used as timer function.
 * |        |          |1 = Low Power Timer controller is used as PWM function.
 * |[16]    |PDCLKEN   |Power-down Engine Clock Enable
 * |        |          |0 = Disable engine clock in power-down mode.
 * |        |          |1 = Enable engine clock in power-down mode.
 * |[20]    |PERIOSEL  |Periodic Mode Behavior Selection Enable Bit
 * |        |          |0 = The behavior selection in periodic mode is Disabled.
 * |        |          |When user updates CMPDAT while timer is running in periodic mode,
 * |        |          |CNT will be reset to default value.
 * |        |          |1 = The behavior selection in periodic mode is Enabled.
 * |        |          |When user updates CMPDAT while timer is running in periodic mode, the limitations as bellows list,
 * |        |          |If updated CMPDAT value > CNT, CMPDAT will be updated and CNT keep running continually.
 * |        |          |If updated CMPDAT value = CNT, timer time-out interrupt will be asserted immediately.
 * |        |          |If updated CMPDAT value < CNT, CNT will be reset to default value.
 * |[21]    |TGLPINSEL |Toggle-output Pin Select
 * |        |          |0 = Toggle mode output to LPTMRx (Low Power Timer Event Counter Pin).
 * |        |          |1 = Toggle mode output to LPTMRx_EXT (Low Power Timer External Capture Pin).
 * |[22]    |CAPSRC    |Capture Pin Source Selection
 * |        |          |0 = Capture Function source is from LPTMRx_EXT (x= 0~1) pin.
 * |        |          |1 = Capture Function source is from internal ACMP output signal
 * |        |          |Note: When CAPSRC = 1,User can set INTERCAPSEL (LPTMRx_EXTCTL[10:8]) to decide which internal ACMP output signal or which clock is as timer capture source.
 * |[23]    |WKEN      |Wake-up Function Enable Bit
 * |        |          |If this bit is set to 1, while timer interrupt flag TIF (LPTMRx_INTSTS[0]) is 1 and INTEN (LPTMRx_CTL[29]) is enabled, the low power timer interrupt signal will generate a wake-up trigger event to CPU.
 * |        |          |0 = Wake-up function Disabled if timer interrupt signal generated.
 * |        |          |1 = Wake-up function Enabled if timer interrupt signal generated.
 * |[24]    |EXTCNTEN  |Event Counter Mode Enable Bit
 * |        |          |This bit is for external counting pin function enabled.
 * |        |          |0 = Event counter mode Disabled.
 * |        |          |1 = Event counter mode Enabled.
 * |        |          |Note: When timer is used as an event counter, this bit should be set to 1.
 * |[25]    |ACTSTS    |Low Power Timer Active Status Bit (Read Only)
 * |        |          |This bit indicates the 24-bit up counter status.
 * |        |          |0 = 24-bit up counter is not active.
 * |        |          |1 = 24-bit up counter is active.
 * |        |          |Note: This bit may active when CNT 0 transition to CNT 1.
 * |[28:27] |OPMODE    |Low Power Timer Counting Mode Select
 * |        |          |00 = The low power timer controller is operated in One-shot mode.
 * |        |          |01 = The low power timer controller is operated in Periodic mode.
 * |        |          |10 = The low power timer controller is operated in Toggle-output mode.
 * |        |          |11 = The low power timer controller is operated in Continuous Counting mode.
 * |[29]    |INTEN     |Low Power Timer Interrupt Enable Bit
 * |        |          |0 = Low Power Timer time-out interrupt Disabled.
 * |        |          |1 = Low Power Timer time-out interrupt Enabled.
 * |        |          |Note: If this bit is enabled, when the low power timer time-out interrupt flag TIF is set to 1, the low power timer interrupt signal is generated and inform to CPU.
 * |[30]    |CNTEN     |Low Power Timer Counting Enable Bit
 * |        |          |0 = Stops/Suspends counting.
 * |        |          |1 = Starts counting.
 * |        |          |Note 1: In stop status, and then set CNTEN to 1 will enable the 24-bit up counter to keep counting from the last stop counting value.
 * |        |          |Note 2: This bit is auto-cleared by hardware in one-shot mode (LPTMR_CTL[28:27] = 00) when the low power timer time-out interrupt flag TIF (LPTMRx_INTSTS[0]) is generated.
 * |        |          |Note 3: Set enable/disable this bit needs 2 * LPTMR_CLK period to become active, user can read ACTSTS (LPTMRx_CTL[25]) to check enable/disable command is completed or not.
 * |[31]    |ICEDEBUG  |ICE Debug Mode Acknowledge Disable Bit (Write Protect)
 * |        |          |0 = ICE debug mode acknowledgement effects TIMER counting.
 * |        |          |TIMER counter will be held while CPU is held by ICE.
 * |        |          |1 = ICE debug mode acknowledgement Disabled.
 * |        |          |TIMER counter will keep going no matter CPU is held by ICE or not.
 * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
 * @var LPTMR_T::CMP
 * Offset: 0x04  LPTMR0 Comparator Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[23:0]  |CMPDAT    |Low Power Timer Comparator Value
 * |        |          |CMPDAT is a 24-bit compared value register
 * |        |          |When the internal 24-bit up counter value is equal to CMPDAT value, the TIF (LPTMRx_INTSTS[0] Low Power Timer Interrupt Flag) will set to 1.
 * |        |          |Time-out period = (Period of timer clock input) * (8-bit PSC + 1) * (24-bit CMPDAT).
 * |        |          |Note 1: Never write 0x0 or 0x1 in CMPDAT field, or the core will run into unknown state.
 * |        |          |Note 2: When timer is operating at continuous counting mode, the 24-bit up counter will keep counting continuously even if user writes a new value into CMPDAT field
 * |        |          |But if timer is operating at other modes, the 24-bit up counter will restart counting from 0 and using newest CMPDAT value to be the low power timer compared value while user writes a new value into CMPDAT field.
 * @var LPTMR_T::INTSTS
 * Offset: 0x08  LPTMR0 Interrupt Status Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |TIF       |Low Power Timer Interrupt Flag
 * |        |          |This bit indicates the interrupt flag status of Low Power Timer while 24-bit timer up counter CNT (LPTMRx_CNT[23:0]) value reaches to CMPDAT (LPTMRx_CMP[23:0]) value.
 * |        |          |0 = No effect.
 * |        |          |1 = CNT value matches the CMPDAT value.
 * |        |          |Note: This bit is cleared by writing 1 to it.
 * |[1]     |TWKF      |Low Power Timer Wake-up Flag
 * |        |          |This bit indicates the interrupt wake-up flag status of timer.
 * |        |          |0 = Low Power Timer does not cause CPU wake-up.
 * |        |          |1 = CPU wake-up from Idle or Power-down mode if timer time-out interrupt signal generated.
 * |        |          |Note: This bit is cleared by writing 1 to it.
 * @var LPTMR_T::CNT
 * Offset: 0x0C  LPTMR0 Data Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[23:0]  |CNT       |Low Power Timer Data Register
 * |        |          |Read operation.
 * |        |          |Read this register to get CNT value. For example:
 * |        |          |If EXTCNTEN (LPTMRx_CTL[24]) is 0, user can read CNT value for getting current 24-bit counter value.
 * |        |          |If EXTCNTEN (LPTMRx_CTL[24]) is 1, user can read CNT value for getting current 24-bit event input counter value.
 * |        |          |Write operation.
 * |        |          |Writing any value to this register will reset current CNT value to 0 and reload internal 8-bit prescale counter.
 * |[31]    |RSTACT    |Low Power Timer Data Register Reset Active (Read Only)
 * |        |          |This bit indicates if the counter reset operation active.
 * |        |          |When user writes this CNT register, low power timer starts to reset its internal 24-bit timer up-counter to 0 and reload 8-bit pre-scale counter
 * |        |          |At the same time, timer set this flag to 1 to indicate the counter reset operation is in progress
 * |        |          |Once the counter reset operation done, low power timer clear this bit to 0 automatically.
 * |        |          |0 = Reset operation is done.
 * |        |          |1 = Reset operation triggered by writing LPTMRx_CNT is in progress.
 * @var LPTMR_T::CAP
 * Offset: 0x10  LPTMR0 Capture Data Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[23:0]  |CAPDAT    |Low Power Timer Capture Data Register
 * |        |          |When CAPEN (LPTMRx_EXTCTL[3]) bit is set, CAPFUNCS (LPTMRx_EXTCTL[4]) bit is 0, and a transition on LPTMRx_EXT pin matched the CAPEDGE (LPTMRx_EXTCTL[14:12]) setting, CAPIF (LPTMRx_EINTSTS[0]) will set to 1 and the current timer counter value CNT (LPTMRx_CNT[23:0]) will be auto-loaded into this CAPDAT field.
 * @var LPTMR_T::EXTCTL
 * Offset: 0x14  LPTMR0 External Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |CNTPHASE  |Low Power Timer External Count Phase
 * |        |          |This bit indicates the detection phase of external counting pin LPTMRx (x= 0~1).
 * |        |          |0 = A falling edge of external counting pin will be counted.
 * |        |          |1 = A rising edge of external counting pin will be counted.
 * |[3]     |CAPEN     |Low Power Timer Capture Enable Bit
 * |        |          |This bit enables the capture input function.
 * |        |          |0 =Capture source Disabled.
 * |        |          |1 =Capture source Enabled.
 * |        |          |Note: When CAPEN is 1, user can set INTERCAPSEL (LPTMRx_EXTCTL [10:8]) to select capture source.
 * |[4]     |CAPFUNCS  |Capture Function Selection
 * |        |          |0 = External Capture Mode Enabled.
 * |        |          |1 = External Reset Mode Enabled.
 * |        |          |Note 1: When CAPFUNCS is 0, transition on LPTMRx_EXT (x= 0~1) pin is using to save current 24-bit timer counter value (CNT value) to CAPDAT field.
 * |        |          |Note 2: When CAPFUNCS is 1, transition on LPTMRx_EXT (x= 0~1) pin is using to save current 24-bit timer counter value (CNT value) to CAPDAT field then CNT value will be reset immediately.
 * |[5]     |CAPIEN    |Low Power Timer External Capture Interrupt Enable Bit
 * |        |          |0 = LPTMRx_EXT (x= 0~1) pin, ACMP, internal clock, or external clock detection Interrupt Disabled.
 * |        |          |1 = LPTMRx_EXT (x= 0~1) pin, ACMP, internal clock, or external clock detection Interrupt Enabled.
 * |        |          |Note: CAPIEN is used to enable timer external interrupt
 * |        |          |If CAPIEN enabled, timer will rise an interrupt when CAPIF (LPTMRx_EINTSTS[0]) is 1.
 * |        |          |For example, while CAPIEN = 1, CAPEN = 1, and CAPEDGE = 00, a 1 to 0 transition on the LPTMRx_EXT (x= 0~1) pin, ACMP, internal clock, or external clock will cause the CAPIF to be set then the interrupt signal is generated and sent to NVIC to inform CPU.
 * |[6]     |CAPDBEN   |Low Power Timer External Capture Pin De-bounce Enable Bit
 * |        |          |0 = LPTMRx_EXT (x= 0~1) pin de-bounce or ACMP output de-bounce Disabled.
 * |        |          |1 = LPTMRx_EXT (x= 0~1) pin de-bounce or ACMP output de-bounce Enabled.
 * |        |          |Note: If this bit is enabled, the edge detection of LPTMRx_EXT pin or ACMP output is detected with de-bounce circuit.
 * |[7]     |CNTDBEN   |Low Power Timer Counter Pin De-bounce Enable Bit
 * |        |          |0 = LPTMRx (x= 0~1) pin de-bounce Disabled.
 * |        |          |1 = LPTMRx (x= 0~1) pin de-bounce Enabled.
 * |        |          |Note: If this bit is enabled, the edge detection of LPTMRx pin is detected with de-bounce circuit.
 * |[10:8]  |INTERCAPSEL|Internal Capture Source Select
 * |        |          |000 = Capture Function source is from internal ACMP0 output signal.
 * |        |          |001 = Capture Function source is from internal ACMP1 output signal.
 * |        |          |111 = Capture Function source is from internal ACMP2 output signal..
 * |        |          |Note: these bits only available when CAPSRC (LPTMRx_CTL[22]) is 1.
 * |[14:12] |CAPEDGE   |Low Power Timer External Capture Pin Edge Detect
 * |        |          |When first capture event is generated, the CNT (LPTMRx_CNT[23:0]) will be reset to 0 and first CAPDAT (LPTMRx_CAP[23:0]) should be to 0.
 * |        |          |000 = Capture event occurred when detect falling edge transfer on LPTMRx_EXT (x= 0~1) pin.
 * |        |          |001 = Capture event occurred when detect rising edge transfer on LPTMRx_EXT (x= 0~1) pin.
 * |        |          |010 = Capture event occurred when detect both falling and rising edge transfer on LPTMRx_EXT (x= 0~1) pin, and first capture event occurred at falling edge transfer.
 * |        |          |011 = Capture event occurred when detect both rising and falling edge transfer on LPTMRx_EXT (x= 0~1) pin, and first capture event occurred at rising edge transfer.
 * |        |          |110 = First capture event occurred at falling edge, follows capture events are at rising edge transfer on LPTMRx_EXT (x= 0~1) pin.
 * |        |          |111 = First capture event occurred at rising edge, follows capture events are at falling edge transfer on LPTMRx_EXT (x= 0~1) pin.
 * |        |          |100, 101 = Reserved.
 * |        |          |Note: Set CAPSRC (LPTMRx_CTL[22]) and INTERCAPSEL (LPTMRx_EXTCTL[10:8]) to select capture source.
 * |[18:16] |ECNTSSEL  |Event Counter Source Selection to Trigger Event Counter Function
 * |        |          |000 = Event Counter input source is from external LPTMRx (x= 0~1) pin.
 * |        |          |010 = Event Counter input source is from internal ACMP0 output signal.
 * |        |          |011 = Event Counter input source is from internal ACMP1 output signal.
 * |        |          |100 = Event Counter input source is from internal ACMP2 output signal.
 * |        |          |101~111 = Reserved.
 * |[31:28] |CAPDIVSCL |Low Power Timer Capture Source Divider Scale
 * |        |          |This bits indicate the divide scale for capture source divider
 * |        |          |0000 = Capture source/1.
 * |        |          |0001 = Capture source/2.
 * |        |          |0010 = Capture source/4.
 * |        |          |0011 = Capture source/8.
 * |        |          |0100 = Capture source/16.
 * |        |          |0101 = Capture source/32.
 * |        |          |0110 = Capture source/64.
 * |        |          |0111 = Capture source/128.
 * |        |          |1000 = Capture source/256.
 * |        |          |1001~1111 = Reserved.
 * |        |          |Note: Set INTERCAPSEL (LPTMRx_EXTCTL[10:8]) and CAPSRC (LPTMRx_CTL[22]) to select capture source.
 * @var LPTMR_T::EINTSTS
 * Offset: 0x18  LPTMR0 External Interrupt Status Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |CAPIF     |Low Power Timer External Capture Interrupt Flag
 * |        |          |This bit indicates the low power timer external capture interrupt flag status.
 * |        |          |0 = LPTMRx_EXT (x= 0~1) pin, ACMP, internal clock, or external clock interrupt did not occur.
 * |        |          |1 = LPTMRx_EXT (x= 0~1) pin, ACMP, internal clock, or external clock interrupt occurred.
 * |        |          |Note 1: This bit is cleared by writing 1 to it.
 * |        |          |Note 2: When CAPEN (LPTMRx_EXTCTL[3]) bit is set, CAPFUNCS (LPTMRx_EXTCTL[4]) bit is 0, and a transition on LPTMRx_EXT (x= 0~1) pin, ACMP, internal clock, or external clock matched the CAPEDGE (LPTMRx_EXTCTL[2:1]) setting, this bit will set to 1 by hardware.
 * |        |          |Note 3: There is a new incoming capture event detected before CPU clearing the CAPIF status
 * |        |          |If the above condition occurred, the Low Power Timer will keep register LPTMRx_CAP unchanged and drop the new capture value.
 * |[1]     |CAPIFOV   |Capture Latch Interrupt Flag Overrun Status (Read Only)
 * |        |          |0 = Capture latch happened when the corresponding CAPIF is 0.
 * |        |          |1 = Capture latch happened when the corresponding CAPIF is 1.
 * |        |          |Note: This bit will be cleared automatically when user clear corresponding CAPIF.
 * @var LPTMR_T::TRGCTL
 * Offset: 0x1C  LPTMR0 Trigger Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |TRGSSEL   |Trigger Source Select Bit
 * |        |          |This bit is used to select internal trigger source is from timer time-out interrupt signal or capture interrupt signal.
 * |        |          |0 = Time-out interrupt signal is used to internal trigger LPADC0, , LPI2C0, LPSPI0, LPUART, , and LPPDMA.
 * |        |          |1 = Capture interrupt signal is used to internal trigger LPADC0, LPI2C0, LPSPI0, LPUART, , and LPPDMA.
 * |[1]     |TRGEN     |Trigger Low power IPs Enable Bit
 * |        |          |If this bit is set to 1, each timer time-out event or capture event can trigger Low Power IPs.
 * |        |          |0 = Low Power Timer interrupt trigger Low Power IPs Disabled.
 * |        |          |1 = Low Power Timer interrupt trigger Low Power IPs Enabled.
 * |        |          |Note: If TRGSSEL (LPTMRx_TRGCTL[0]) = 0, time-out interrupt signal will trigger Low Power IPs conversion.
 * |        |          |Note: If TRGSSEL (LPTMRx_TRGCTL[0]) = 1, capture interrupt signal will trigger Low Power IPs conversion.
 * |[4]     |TRGLPPDMA |Trigger LPPDMA Enable Bit
 * |        |          |If this bit is set to 1, each timer time-out event or capture event can be triggered LPPDMA transfer.
 * |        |          |0 = Low Power Timer interrupt trigger LPPDMA Disabled.
 * |        |          |1 = Low Power Timer interrupt trigger LPPDMA Enabled.
 * |        |          |Note: If TRGSSEL (LPTMRx_TRGCTL[0]) = 0, time-out interrupt signal will trigger LPPDMA transfer.
 * |        |          |Note: If TRGSSEL (LPTMRx_TRGCTL[0]) = 1, capture interrupt signal will trigger LPPDMA transfer.
 * @var LPTMR_T::CAPNF
 * Offset: 0x24  LPTMR0 Capture Input Noise Filter Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |CAPNFEN   |Capture Noise Filter Enable
 * |        |          |0 = Capture Noise Filter function Disabled.
 * |        |          |1 = Capture Noise Filter function Enabled.
 * |[6:4]   |CAPNFSEL  |Capture Edge Detector Noise Filter Clock Selection
 * |        |          |000 = Noise filter clock is ECLKx.
 * |        |          |001 = Noise filter clock is ECLKx/2.
 * |        |          |010 = Noise filter clock is ECLKx/4.
 * |        |          |011 = Noise filter clock is ECLKx/8.
 * |        |          |100 = Noise filter clock is ECLKx/16.
 * |        |          |101 = Noise filter clock is ECLKx/32.
 * |        |          |110 = Noise filter clock is ECLKx/64.
 * |        |          |111 = Noise filter clock is ECLKx/128.
 * |[10:8]  |CAPNFCNT  |Capture Edge Detector Noise Filter Count
 * |        |          |These bits control the capture filter counter to count from 0 to CAPNFCNT.
 * @var LPTMR_T::PWMCTL
 * Offset: 0x40  LPTMR0 PWM Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |CNTEN     |PWM Counter Enable Bit
 * |        |          |0 = PWM counter and clock prescale Stop Running.
 * |        |          |1 = PWM counter and clock prescale Start Running.
 * |[3]     |CNTMODE   |PWM Counter Mode
 * |        |          |0 = Auto-reload mode.
 * |        |          |1 = One-shot mode.
 * |[12]    |PWMINTWKEN|PWM Interrupt Wake-up Enable Bit
 * |        |          |If PWM interrupt occurs when chip is in Power-down mode, PWMINTWKEN can determine whether chip wake-up occurs or not.
 * |        |          |0 = PWM interrupt wake-up Disabled.
 * |        |          |1 = PWM interrupt wake-up Enabled. 
 * |[30]    |DBGHALT   |ICE Debug Mode Counter Halt (Write Protect)
 * |        |          |If debug mode counter halt is enabled, PWM counter will keep current value until exit ICE debug mode.
 * |        |          |0 = ICE debug mode counter halt Disabled.
 * |        |          |1 = ICE debug mode counter halt Enabled.
 * |        |          |Note: This bit is write protected. Refer to SYS_REGLCTL control register.
 * |[31]    |DBGTRIOFF |ICE Debug Mode Acknowledge Disable Bit (Write Protect)
 * |        |          |0 = ICE debug mode acknowledgement effects PWM output.
 * |        |          |PWM output pin will be forced as tri-state while ICE debug mode acknowledged.
 * |        |          |1 = ICE debug mode acknowledgement disabled.
 * |        |          |PWM output pin will keep output no matter ICE debug mode acknowledged or not.
 * |        |          |Note: This bit is write protected. Refer to SYS_REGLCTL control register.
 * @var LPTMR_T::PWMCLKPSC
 * Offset: 0x44  LPTMR0 PWM Counter Clock Pre-scale Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |CLKPSC    |PWM Counter Clock Pre-scale
 * |        |          |The active clock of PWM counter is decided by counter clock prescale and divided by (CLKPSC + 1)
 * |        |          |If CLKPSC is 0, then there is no scaling in PWM counter clock source.
 * @var LPTMR_T::PWMCNTCLR
 * Offset: 0x48  LPTMR0 PWM Clear Counter Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |CNTCLR    |Clear PWM Counter Control Bit
 * |        |          |It is automatically cleared by hardware.
 * |        |          |0 = No effect.
 * |        |          |1 = Clear 16-bit PWM counter to 0x0000 in up count type.
 * @var LPTMR_T::PWMPERIOD
 * Offset: 0x4C  LPTMR0 PWM Period Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[15:0]  |PERIOD    |PWM Period Register
 * |        |          |In up count type: PWM counter counts from 0 to PERIOD, and restarts from 0.
 * |        |          |In up count type:
 * |        |          |PWM period time = (PERIOD + 1) * (CLKPSC + 1) * LPTMRx_PWMCLK.
 * @var LPTMR_T::PWMCMPDAT
 * Offset: 0x50  LPTMR0 PWM Comparator Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[15:0]  |CMP       |PWM Comparator Register
 * |        |          |PWM CMP is used to compare with PWM CNT to generate PWM output waveform, interrupt events and trigger EADC, PDMA, and DAC start conversion.
 * @var LPTMR_T::PWMCNT
 * Offset: 0x54  LPTMR0 PWM Counter Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[15:0]  |CNT       |PWM Counter Value Register (Read Only)
 * |        |          |User can monitor CNT to know the current counter value in 16-bit period counter.
 * @var LPTMR_T::PWMPOLCTL
 * Offset: 0x58  LPTMR0 PWM Pin Output Polar Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |PINV      |PWMx Output Pin Polar Control Bit
 * |        |          |The bit is used to control polarity state of PWMx_OUT pin.
 * |        |          |0 = PWMx_OUT pin polar inverse Disabled.
 * |        |          |1 = PWMx_OUT polar inverse Enabled.
 * |        |          |Note: Set POSEL (LPTMRx_PWMPOCTL[8]) to select LPTMRx or LPTMRx_EXT as PWMx output pin.
 * @var LPTMR_T::PWMPOCTL
 * Offset: 0x5C  LPTMR0 PWM Pin Output Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |POEN      |PWMx Output Pin Enable Bit
 * |        |          |0 = PWMx_OUT pin at tri-state mode.
 * |        |          |1 = PWMx_OUT pin in output mode.
 * |        |          |Note: Set POSEL (LPTMRx_PWMPOCTL[8]) to select LPTMRx or LPTMRx_EXT as PWMx output pin.
 * |[8]     |POSEL     |PWM Output Pin Select
 * |        |          |0 = PWMx_OUT pin is LPTMRx.
 * |        |          |1 = PWMx_OUT pin is LPTMRx_EXT.
 * @var LPTMR_T::PWMINTEN0
 * Offset: 0x60  LPTMR0 PWM Interrupt Enable Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[1]     |PIEN      |PWM Period Point Interrupt Enable Bit
 * |        |          |0 = Period point interrupt Disabled.
 * |        |          |1 = Period point interrupt Enabled.
 * |[2]     |CMPUIEN   |PWM Compare Up Count Interrupt Enable Bit
 * |        |          |0 = Compare up count interrupt Disabled.
 * |        |          |1 = Compare up count interrupt Enabled.
 * @var LPTMR_T::PWMINTSTS0
 * Offset: 0x64  LPTMR0 PWM Interrupt Status Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[1]     |PIF       |PWM Period Point Interrupt Flag
 * |        |          |This bit is set by hardware when LPTMRx_PWM counter reaches PERIOD.
 * |        |          |Note: This bit is cleared by writing 1 to it.
 * |[2]     |CMPUIF    |PWM Compare Up Count Interrupt Flag
 * |        |          |This bit is set by hardware when LPTMRx_PWM counter in up count direction and reaches CMP.
 * |        |          |Note: If CMP equal to PERIOD, there is no CMPUIF flag in up count type
 * |        |          |Note 2: This bit is cleared by writing 1 to it.
 * @var LPTMR_T::PWMTRGCTL
 * Offset: 0x68  LPTMR0 PWM Trigger Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[1:0]   |TRGSEL    |PWM Counter Event Source Select to Trigger Conversion
 * |        |          |00 = Trigger conversion at period point (PIF).
 * |        |          |01 = Trigger conversion at compare up count point (CMPUIF).
 * |        |          |10 = Trigger conversion at period or compare up count point (PIF or CMPUIF).
 * |        |          |11 = Reserved.
 * |[2]     |TRGEN     |Trigger Low power IPs Enable Bit
 * |        |          |f this bit is set to 1, each timer time-out event or capture event can trigger Low Power IP.
 * |        |          |0 = Low Power Timer PWM counter event trigger Low Power IPs Disabled.
 * |        |          |1 = Low Power Timer PWM counter event trigger Low Power IPs Enabled.
 * |[9]     |PWMTRGLPPDMA|PWM Counter Event Trigger LPPDMA Conversion Enable Bit
 * |        |          |If this bit is set to 1, PWM can trigger LPPDMA conversion.
 * |        |          |0 = PWM trigger LPPDMA Disabled.
 * |        |          |1 = PWM trigger LPPDMA Enabled.
 * |        |          |Note: Set TRGSEL (LPTMRx_PWMTRGCTL[1:0]) to select PWM trigger conversion source.
 * |        |          |Note: TRGEN (LPTMRx_PWMTRGCTL[2]) is needed to be set to 1.
 * @var LPTMR_T::PWMSTATUS
 * Offset: 0x6C  LPTMR0 PWM Status Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |CNTMAXF   |PWM Counter Equal to 0xFFFF Flag
 * |        |          |0 = The PWM counter value never reached its maximum value 0xFFFF.
 * |        |          |1 = The PWM counter value has reached its maximum value.
 * |        |          |Note: This bit is cleared by writing 1 to it.
 * |[8]     |PWMINTWKF |PWM Interrupt Wake-up Flag
 * |        |          |0 = PWM interrupt wake-up has not occurred.
 * |        |          |1 = PWM interrupt wake-up has occurred.
 * |        |          |Note: This bit is cleared by writing 1 to it.
 * @var LPTMR_T::PWMPBUF
 * Offset: 0x70  LPTMR0 PWM Period Buffer Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[15:0]  |PBUF      |PWM Period Buffer Register (Read Only)
 * |        |          |Used as PERIOD active register.
 * @var LPTMR_T::PWMCMPBUF
 * Offset: 0x74  LPTMR0 PWM Comparator Buffer Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[15:0]  |CMPBUF    |PWM Comparator Buffer Register (Read Only)
 * |        |          |Used as CMP active register.
 * @var LPTMR_T::PWMIFA
 * Offset: 0xA8  LPTMR0 PWM Interrupt Flag Accumulator Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[15:0]  |IFACNT    |PWM Interrupt Flag Accumulator Counter
 * |        |          |This field sets the count number which defines (IFACNT+1) times of specify PWM interrupt occurs to set IFAIF bit to request the PWM accumulator interrupt.
 * |        |          |PWM accumulator flag (IFAIF) will be set in every (IFACNT+1) times during the the PWM counter operation.
 * |[24]    |STPMOD    |PWM Accumulator Stop Mode Enable Bit
 * |        |          |0 = PWM interrupt accumulator event to stop counting Disabled.
 * |        |          |1 = PWM interrupt accumulator event to stop counting Enabled.
 * |[29:28] |IFASEL    |PWM Interrupt Flag Accumulator Source Select
 * |        |          |01 = Accumulate at each PWM period point.
 * |        |          |10 = Accumulate at each PWM up-count compared point.
 * |[31]    |IFAEN     |PWM Interrupt Flag Accumulator Enable Bit
 * |        |          |0 = PWM interrupt flag accumulator function Disabled.
 * |        |          |1 = PWM interrupt flag accumulator function Enabled.
 * @var LPTMR_T::PWMAINTSTS
 * Offset: 0xAC  LPTMR0 PWM Accumulator Interrupt Flag Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |IFAIF     |PWM Interrupt Flag Accumulator Interrupt Flag
 * |        |          |This bit is set by hardware when the accumulator value reaches (IFACNT+1)
 * |        |          |Note 1: This bit is cleared by writing 1 to it.
 * |        |          |Note 2: If APDMAEN (LPTMRx_PWMAPDMACTL[0]) is set, this bit will be auto clear after PDMA transfer done.
 * @var LPTMR_T::PWMAINTEN
 * Offset: 0xB0  LPTMR0 PWM Accumulator Interrupt Enable Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |IFAIEN    |PWM Interrupt Flag Accumulator Interrupt Enable Bit
 * |        |          |0 = Interrupt Flag Accumulator interrupt Disabled.
 * |        |          |1 = Interrupt Flag Accumulator interrupt Enabled.
 * @var LPTMR_T::PWMAPDMACTL
 * Offset: 0xB4  LPTMR0 PWM Accumulator LPPDMA Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |APDMAEN   |PWM Accumulator LPPDMA Enable Bit
 * |        |          |0 = PWM interrupt accumulator event to trigger LPPDMA transfer Disabled.
 * |        |          |1 = PWM interrupt accumulator event to trigger LPPDMA transfer Enabled.
 */
    __IO uint32_t CTL;                   /*!< [0x0000] LPTMR0 Control Register                                          */
    __IO uint32_t CMP;                   /*!< [0x0004] LPTMR0 Comparator Register                                       */
    __IO uint32_t INTSTS;                /*!< [0x0008] LPTMR0 Interrupt Status Register                                 */
    __IO uint32_t CNT;                   /*!< [0x000c] LPTMR0 Data Register                                             */
    __I  uint32_t CAP;                   /*!< [0x0010] LPTMR0 Capture Data Register                                     */
    __IO uint32_t EXTCTL;                /*!< [0x0014] LPTMR0 External Control Register                                 */
    __IO uint32_t EINTSTS;               /*!< [0x0018] LPTMR0 External Interrupt Status Register                        */
    __IO uint32_t TRGCTL;                /*!< [0x001c] LPTMR0 Trigger Control Register                                  */
    __I  uint32_t RESERVE0[1];
    __IO uint32_t CAPNF;                 /*!< [0x0024] LPTMR0 Capture Input Noise Filter Register                       */
    __I  uint32_t RESERVE1[6];
    __IO uint32_t PWMCTL;                /*!< [0x0040] LPTMR0 PWM Control Register                                      */
    __IO uint32_t PWMCLKPSC;             /*!< [0x0044] LPTMR0 PWM Counter Clock Pre-scale Register                      */
    __IO uint32_t PWMCNTCLR;             /*!< [0x0048] LPTMR0 PWM Clear Counter Register                                */
    __IO uint32_t PWMPERIOD;             /*!< [0x004c] LPTMR0 PWM Period Register                                       */
    __IO uint32_t PWMCMPDAT;             /*!< [0x0050] LPTMR0 PWM Comparator Register                                   */
    __I  uint32_t PWMCNT;                /*!< [0x0054] LPTMR0 PWM Counter Register                                      */
    __IO uint32_t PWMPOLCTL;             /*!< [0x0058] LPTMR0 PWM Pin Output Polar Control Register                     */
    __IO uint32_t PWMPOCTL;              /*!< [0x005c] LPTMR0 PWM Pin Output Control Register                           */
    __IO uint32_t PWMINTEN0;             /*!< [0x0060] LPTMR0 PWM Interrupt Enable Register 0                           */
    __IO uint32_t PWMINTSTS0;            /*!< [0x0064] LPTMR0 PWM Interrupt Status Register 0                           */
    __IO uint32_t PWMTRGCTL;             /*!< [0x0068] LPTMR0 PWM Trigger Control Register                              */
    __IO uint32_t PWMSTATUS;             /*!< [0x006c] LPTMR0 PWM Status Register                                       */
    __I  uint32_t PWMPBUF;               /*!< [0x0070] LPTMR0 PWM Period Buffer Register                                */
    __I  uint32_t PWMCMPBUF;             /*!< [0x0074] LPTMR0 PWM Comparator Buffer Register                            */
    __I  uint32_t RESERVE2[12];
    __IO uint32_t PWMIFA;                /*!< [0x00a8] LPTMR0 PWM Interrupt Flag Accumulator Register                   */
    __IO uint32_t PWMAINTSTS;            /*!< [0x00ac] LPTMR0 PWM Accumulator Interrupt Flag Register                   */
    __IO uint32_t PWMAINTEN;             /*!< [0x00b0] LPTMR0 PWM Accumulator Interrupt Enable Register                 */
    __IO uint32_t PWMAPDMACTL;           /*!< [0x00b4] LPTMR0 PWM Accumulator LPPDMA Control Register                   */
} LPTMR_T;

/**
    @addtogroup LPTMR_CONST LPTMR Bit Field Definition
    Constant Definitions for LPTMR Controller
@{ */

#define LPTMR_CTL_PSC_Pos                (0)                                               /*!< LPTMR_T::CTL: PSC Position             */
#define LPTMR_CTL_PSC_Msk                (0xfful << LPTMR_CTL_PSC_Pos)                     /*!< LPTMR_T::CTL: PSC Mask                 */

#define LPTMR_CTL_FUNCSEL_Pos            (15)                                              /*!< LPTMR_T::CTL: FUNCSEL Position         */
#define LPTMR_CTL_FUNCSEL_Msk            (0x1ul << LPTMR_CTL_FUNCSEL_Pos)                  /*!< LPTMR_T::CTL: FUNCSEL Mask             */

#define LPTMR_CTL_PDCLKEN_Pos            (16)                                              /*!< LPTMR_T::CTL: PDCLKEN Position         */
#define LPTMR_CTL_PDCLKEN_Msk            (0x1ul << LPTMR_CTL_PDCLKEN_Pos)                  /*!< LPTMR_T::CTL: PDCLKEN Mask             */

#define LPTMR_CTL_PERIOSEL_Pos           (20)                                              /*!< LPTMR_T::CTL: PERIOSEL Position        */
#define LPTMR_CTL_PERIOSEL_Msk           (0x1ul << LPTMR_CTL_PERIOSEL_Pos)                 /*!< LPTMR_T::CTL: PERIOSEL Mask            */

#define LPTMR_CTL_TGLPINSEL_Pos          (21)                                              /*!< LPTMR_T::CTL: TGLPINSEL Position       */
#define LPTMR_CTL_TGLPINSEL_Msk          (0x1ul << LPTMR_CTL_TGLPINSEL_Pos)                /*!< LPTMR_T::CTL: TGLPINSEL Mask           */

#define LPTMR_CTL_CAPSRC_Pos             (22)                                              /*!< LPTMR_T::CTL: CAPSRC Position          */
#define LPTMR_CTL_CAPSRC_Msk             (0x1ul << LPTMR_CTL_CAPSRC_Pos)                   /*!< LPTMR_T::CTL: CAPSRC Mask              */

#define LPTMR_CTL_WKEN_Pos               (23)                                              /*!< LPTMR_T::CTL: WKEN Position            */
#define LPTMR_CTL_WKEN_Msk               (0x1ul << LPTMR_CTL_WKEN_Pos)                     /*!< LPTMR_T::CTL: WKEN Mask                */

#define LPTMR_CTL_EXTCNTEN_Pos           (24)                                              /*!< LPTMR_T::CTL: EXTCNTEN Position        */
#define LPTMR_CTL_EXTCNTEN_Msk           (0x1ul << LPTMR_CTL_EXTCNTEN_Pos)                 /*!< LPTMR_T::CTL: EXTCNTEN Mask            */

#define LPTMR_CTL_ACTSTS_Pos             (25)                                              /*!< LPTMR_T::CTL: ACTSTS Position          */
#define LPTMR_CTL_ACTSTS_Msk             (0x1ul << LPTMR_CTL_ACTSTS_Pos)                   /*!< LPTMR_T::CTL: ACTSTS Mask              */

#define LPTMR_CTL_OPMODE_Pos             (27)                                              /*!< LPTMR_T::CTL: OPMODE Position          */
#define LPTMR_CTL_OPMODE_Msk             (0x3ul << LPTMR_CTL_OPMODE_Pos)                   /*!< LPTMR_T::CTL: OPMODE Mask              */

#define LPTMR_CTL_INTEN_Pos              (29)                                              /*!< LPTMR_T::CTL: INTEN Position           */
#define LPTMR_CTL_INTEN_Msk              (0x1ul << LPTMR_CTL_INTEN_Pos)                    /*!< LPTMR_T::CTL: INTEN Mask               */

#define LPTMR_CTL_CNTEN_Pos              (30)                                              /*!< LPTMR_T::CTL: CNTEN Position           */
#define LPTMR_CTL_CNTEN_Msk              (0x1ul << LPTMR_CTL_CNTEN_Pos)                    /*!< LPTMR_T::CTL: CNTEN Mask               */

#define LPTMR_CTL_ICEDEBUG_Pos           (31)                                              /*!< LPTMR_T::CTL: ICEDEBUG Position        */
#define LPTMR_CTL_ICEDEBUG_Msk           (0x1ul << LPTMR_CTL_ICEDEBUG_Pos)                 /*!< LPTMR_T::CTL: ICEDEBUG Mask            */

#define LPTMR_CMP_CMPDAT_Pos             (0)                                               /*!< LPTMR_T::CMP: CMPDAT Position          */
#define LPTMR_CMP_CMPDAT_Msk             (0xfffffful << LPTMR_CMP_CMPDAT_Pos)              /*!< LPTMR_T::CMP: CMPDAT Mask              */

#define LPTMR_INTSTS_TIF_Pos             (0)                                               /*!< LPTMR_T::INTSTS: TIF Position          */
#define LPTMR_INTSTS_TIF_Msk             (0x1ul << LPTMR_INTSTS_TIF_Pos)                   /*!< LPTMR_T::INTSTS: TIF Mask              */

#define LPTMR_INTSTS_TWKF_Pos            (1)                                               /*!< LPTMR_T::INTSTS: TWKF Position         */
#define LPTMR_INTSTS_TWKF_Msk            (0x1ul << LPTMR_INTSTS_TWKF_Pos)                  /*!< LPTMR_T::INTSTS: TWKF Mask             */

#define LPTMR_CNT_CNT_Pos                (0)                                               /*!< LPTMR_T::CNT: CNT Position             */
#define LPTMR_CNT_CNT_Msk                (0xfffffful << LPTMR_CNT_CNT_Pos)                 /*!< LPTMR_T::CNT: CNT Mask                 */

#define LPTMR_CNT_RSTACT_Pos             (31)                                              /*!< LPTMR_T::CNT: RSTACT Position          */
#define LPTMR_CNT_RSTACT_Msk             (0x1ul << LPTMR_CNT_RSTACT_Pos)                   /*!< LPTMR_T::CNT: RSTACT Mask              */

#define LPTMR_CAP_CAPDAT_Pos             (0)                                               /*!< LPTMR_T::CAP: CAPDAT Position          */
#define LPTMR_CAP_CAPDAT_Msk             (0xfffffful << LPTMR_CAP_CAPDAT_Pos)              /*!< LPTMR_T::CAP: CAPDAT Mask              */

#define LPTMR_EXTCTL_CNTPHASE_Pos        (0)                                               /*!< LPTMR_T::EXTCTL: CNTPHASE Position     */
#define LPTMR_EXTCTL_CNTPHASE_Msk        (0x1ul << LPTMR_EXTCTL_CNTPHASE_Pos)              /*!< LPTMR_T::EXTCTL: CNTPHASE Mask         */

#define LPTMR_EXTCTL_CAPEN_Pos           (3)                                               /*!< LPTMR_T::EXTCTL: CAPEN Position        */
#define LPTMR_EXTCTL_CAPEN_Msk           (0x1ul << LPTMR_EXTCTL_CAPEN_Pos)                 /*!< LPTMR_T::EXTCTL: CAPEN Mask            */

#define LPTMR_EXTCTL_CAPFUNCS_Pos        (4)                                               /*!< LPTMR_T::EXTCTL: CAPFUNCS Position     */
#define LPTMR_EXTCTL_CAPFUNCS_Msk        (0x1ul << LPTMR_EXTCTL_CAPFUNCS_Pos)              /*!< LPTMR_T::EXTCTL: CAPFUNCS Mask         */

#define LPTMR_EXTCTL_CAPIEN_Pos          (5)                                               /*!< LPTMR_T::EXTCTL: CAPIEN Position       */
#define LPTMR_EXTCTL_CAPIEN_Msk          (0x1ul << LPTMR_EXTCTL_CAPIEN_Pos)                /*!< LPTMR_T::EXTCTL: CAPIEN Mask           */

#define LPTMR_EXTCTL_CAPDBEN_Pos         (6)                                               /*!< LPTMR_T::EXTCTL: CAPDBEN Position      */
#define LPTMR_EXTCTL_CAPDBEN_Msk         (0x1ul << LPTMR_EXTCTL_CAPDBEN_Pos)               /*!< LPTMR_T::EXTCTL: CAPDBEN Mask          */

#define LPTMR_EXTCTL_CNTDBEN_Pos         (7)                                               /*!< LPTMR_T::EXTCTL: CNTDBEN Position      */
#define LPTMR_EXTCTL_CNTDBEN_Msk         (0x1ul << LPTMR_EXTCTL_CNTDBEN_Pos)               /*!< LPTMR_T::EXTCTL: CNTDBEN Mask          */

#define LPTMR_EXTCTL_INTERCAPSEL_Pos     (8)                                               /*!< LPTMR_T::EXTCTL: INTERCAPSEL Position  */
#define LPTMR_EXTCTL_INTERCAPSEL_Msk     (0x7ul << LPTMR_EXTCTL_INTERCAPSEL_Pos)           /*!< LPTMR_T::EXTCTL: INTERCAPSEL Mask      */

#define LPTMR_EXTCTL_CAPEDGE_Pos         (12)                                              /*!< LPTMR_T::EXTCTL: CAPEDGE Position      */
#define LPTMR_EXTCTL_CAPEDGE_Msk         (0x7ul << LPTMR_EXTCTL_CAPEDGE_Pos)               /*!< LPTMR_T::EXTCTL: CAPEDGE Mask          */

#define LPTMR_EXTCTL_ECNTSSEL_Pos        (16)                                              /*!< LPTMR_T::EXTCTL: ECNTSSEL Position     */
#define LPTMR_EXTCTL_ECNTSSEL_Msk        (0x7ul << LPTMR_EXTCTL_ECNTSSEL_Pos)              /*!< LPTMR_T::EXTCTL: ECNTSSEL Mask         */

#define LPTMR_EXTCTL_CAPDIVSCL_Pos       (28)                                              /*!< LPTMR_T::EXTCTL: CAPDIVSCL Position    */
#define LPTMR_EXTCTL_CAPDIVSCL_Msk       (0xful << LPTMR_EXTCTL_CAPDIVSCL_Pos)             /*!< LPTMR_T::EXTCTL: CAPDIVSCL Mask        */

#define LPTMR_EINTSTS_CAPIF_Pos          (0)                                               /*!< LPTMR_T::EINTSTS: CAPIF Position       */
#define LPTMR_EINTSTS_CAPIF_Msk          (0x1ul << LPTMR_EINTSTS_CAPIF_Pos)                /*!< LPTMR_T::EINTSTS: CAPIF Mask           */

#define LPTMR_EINTSTS_CAPIFOV_Pos        (1)                                               /*!< LPTMR_T::EINTSTS: CAPIFOV Position     */
#define LPTMR_EINTSTS_CAPIFOV_Msk        (0x1ul << LPTMR_EINTSTS_CAPIFOV_Pos)              /*!< LPTMR_T::EINTSTS: CAPIFOV Mask         */

#define LPTMR_TRGCTL_TRGSSEL_Pos         (0)                                               /*!< LPTMR_T::TRGCTL: TRGSSEL Position      */
#define LPTMR_TRGCTL_TRGSSEL_Msk         (0x1ul << LPTMR_TRGCTL_TRGSSEL_Pos)               /*!< LPTMR_T::TRGCTL: TRGSSEL Mask          */

#define LPTMR_TRGCTL_TRGEN_Pos           (1)                                               /*!< LPTMR_T::TRGCTL: TRGEN Position        */
#define LPTMR_TRGCTL_TRGEN_Msk           (0x1ul << LPTMR_TRGCTL_TRGEN_Pos)                 /*!< LPTMR_T::TRGCTL: TRGEN Mask            */

#define LPTMR_TRGCTL_TRGLPPDMA_Pos       (4)                                               /*!< LPTMR_T::TRGCTL: TRGLPPDMA Position    */
#define LPTMR_TRGCTL_TRGLPPDMA_Msk       (0x1ul << LPTMR_TRGCTL_TRGLPPDMA_Pos)             /*!< LPTMR_T::TRGCTL: TRGLPPDMA Mask        */

#define LPTMR_CAPNF_CAPNFEN_Pos          (0)                                               /*!< LPTMR_T::CAPNF: CAPNFEN Position       */
#define LPTMR_CAPNF_CAPNFEN_Msk          (0x1ul << LPTMR_CAPNF_CAPNFEN_Pos)                /*!< LPTMR_T::CAPNF: CAPNFEN Mask           */

#define LPTMR_CAPNF_CAPNFSEL_Pos         (4)                                               /*!< LPTMR_T::CAPNF: CAPNFSEL Position      */
#define LPTMR_CAPNF_CAPNFSEL_Msk         (0x7ul << LPTMR_CAPNF_CAPNFSEL_Pos)               /*!< LPTMR_T::CAPNF: CAPNFSEL Mask          */

#define LPTMR_CAPNF_CAPNFCNT_Pos         (8)                                               /*!< LPTMR_T::CAPNF: CAPNFCNT Position      */
#define LPTMR_CAPNF_CAPNFCNT_Msk         (0x7ul << LPTMR_CAPNF_CAPNFCNT_Pos)               /*!< LPTMR_T::CAPNF: CAPNFCNT Mask          */

#define LPTMR_PWMCTL_CNTEN_Pos           (0)                                               /*!< LPTMR_T::PWMCTL: CNTEN Position        */
#define LPTMR_PWMCTL_CNTEN_Msk           (0x1ul << LPTMR_PWMCTL_CNTEN_Pos)                 /*!< LPTMR_T::PWMCTL: CNTEN Mask            */

#define LPTMR_PWMCTL_CNTMODE_Pos         (3)                                               /*!< LPTMR_T::PWMCTL: CNTMODE Position      */
#define LPTMR_PWMCTL_CNTMODE_Msk         (0x1ul << LPTMR_PWMCTL_CNTMODE_Pos)               /*!< LPTMR_T::PWMCTL: CNTMODE Mask          */

#define LPTMR_PWMCTL_PWMINTWKEN_Pos      (12)                                              /*!< LPTMR_T::PWMCTL: PWMINTWKEN Position   */
#define LPTMR_PWMCTL_PWMINTWKEN_Msk      (0x1ul << LPTMR_PWMCTL_PWMINTWKEN_Pos)            /*!< LPTMR_T::PWMCTL: PWMINTWKEN Mask       */

#define LPTMR_PWMCTL_DBGHALT_Pos         (30)                                              /*!< LPTMR_T::PWMCTL: DBGHALT Position      */
#define LPTMR_PWMCTL_DBGHALT_Msk         (0x1ul << LPTMR_PWMCTL_DBGHALT_Pos)               /*!< LPTMR_T::PWMCTL: DBGHALT Mask          */

#define LPTMR_PWMCTL_DBGTRIOFF_Pos       (31)                                              /*!< LPTMR_T::PWMCTL: DBGTRIOFF Position    */
#define LPTMR_PWMCTL_DBGTRIOFF_Msk       (0x1ul << LPTMR_PWMCTL_DBGTRIOFF_Pos)             /*!< LPTMR_T::PWMCTL: DBGTRIOFF Mask        */

#define LPTMR_PWMCLKPSC_CLKPSC_Pos       (0)                                               /*!< LPTMR_T::PWMCLKPSC: CLKPSC Position    */
#define LPTMR_PWMCLKPSC_CLKPSC_Msk       (0xfful << LPTMR_PWMCLKPSC_CLKPSC_Pos)            /*!< LPTMR_T::PWMCLKPSC: CLKPSC Mask        */

#define LPTMR_PWMCNTCLR_CNTCLR_Pos       (0)                                               /*!< LPTMR_T::PWMCNTCLR: CNTCLR Position    */
#define LPTMR_PWMCNTCLR_CNTCLR_Msk       (0x1ul << LPTMR_PWMCNTCLR_CNTCLR_Pos)             /*!< LPTMR_T::PWMCNTCLR: CNTCLR Mask        */

#define LPTMR_PWMPERIOD_PERIOD_Pos       (0)                                               /*!< LPTMR_T::PWMPERIOD: PERIOD Position    */
#define LPTMR_PWMPERIOD_PERIOD_Msk       (0xfffful << LPTMR_PWMPERIOD_PERIOD_Pos)          /*!< LPTMR_T::PWMPERIOD: PERIOD Mask        */

#define LPTMR_PWMCMPDAT_CMP_Pos          (0)                                               /*!< LPTMR_T::PWMCMPDAT: CMP Position       */
#define LPTMR_PWMCMPDAT_CMP_Msk          (0xfffful << LPTMR_PWMCMPDAT_CMP_Pos)             /*!< LPTMR_T::PWMCMPDAT: CMP Mask           */

#define LPTMR_PWMCNT_CNT_Pos             (0)                                               /*!< LPTMR_T::PWMCNT: CNT Position          */
#define LPTMR_PWMCNT_CNT_Msk             (0xfffful << LPTMR_PWMCNT_CNT_Pos)                /*!< LPTMR_T::PWMCNT: CNT Mask              */

#define LPTMR_PWMPOLCTL_PINV_Pos         (0)                                               /*!< LPTMR_T::PWMPOLCTL: PINV Position      */
#define LPTMR_PWMPOLCTL_PINV_Msk         (0x1ul << LPTMR_PWMPOLCTL_PINV_Pos)               /*!< LPTMR_T::PWMPOLCTL: PINV Mask          */

#define LPTMR_PWMPOCTL_POEN_Pos          (0)                                               /*!< LPTMR_T::PWMPOCTL: POEN Position       */
#define LPTMR_PWMPOCTL_POEN_Msk          (0x1ul << LPTMR_PWMPOCTL_POEN_Pos)                /*!< LPTMR_T::PWMPOCTL: POEN Mask           */

#define LPTMR_PWMPOCTL_POSEL_Pos         (8)                                               /*!< LPTMR_T::PWMPOCTL: POSEL Position      */
#define LPTMR_PWMPOCTL_POSEL_Msk         (0x1ul << LPTMR_PWMPOCTL_POSEL_Pos)               /*!< LPTMR_T::PWMPOCTL: POSEL Mask          */

#define LPTMR_PWMINTEN0_PIEN_Pos         (1)                                               /*!< LPTMR_T::PWMINTEN0: PIEN Position      */
#define LPTMR_PWMINTEN0_PIEN_Msk         (0x1ul << LPTMR_PWMINTEN0_PIEN_Pos)               /*!< LPTMR_T::PWMINTEN0: PIEN Mask          */

#define LPTMR_PWMINTEN0_CMPUIEN_Pos      (2)                                               /*!< LPTMR_T::PWMINTEN0: CMPUIEN Position   */
#define LPTMR_PWMINTEN0_CMPUIEN_Msk      (0x1ul << LPTMR_PWMINTEN0_CMPUIEN_Pos)            /*!< LPTMR_T::PWMINTEN0: CMPUIEN Mask       */

#define LPTMR_PWMINTSTS0_PIF_Pos         (1)                                               /*!< LPTMR_T::PWMINTSTS0: PIF Position      */
#define LPTMR_PWMINTSTS0_PIF_Msk         (0x1ul << LPTMR_PWMINTSTS0_PIF_Pos)               /*!< LPTMR_T::PWMINTSTS0: PIF Mask          */

#define LPTMR_PWMINTSTS0_CMPUIF_Pos      (2)                                               /*!< LPTMR_T::PWMINTSTS0: CMPUIF Position   */
#define LPTMR_PWMINTSTS0_CMPUIF_Msk      (0x1ul << LPTMR_PWMINTSTS0_CMPUIF_Pos)            /*!< LPTMR_T::PWMINTSTS0: CMPUIF Mask       */

#define LPTMR_PWMTRGCTL_TRGSEL_Pos       (0)                                               /*!< LPTMR_T::PWMTRGCTL: TRGSEL Position    */
#define LPTMR_PWMTRGCTL_TRGSEL_Msk       (0x3ul << LPTMR_PWMTRGCTL_TRGSEL_Pos)             /*!< LPTMR_T::PWMTRGCTL: TRGSEL Mask        */

#define LPTMR_PWMTRGCTL_TRGEN_Pos        (2)                                               /*!< LPTMR_T::PWMTRGCTL: TRGEN Position     */
#define LPTMR_PWMTRGCTL_TRGEN_Msk        (0x1ul << LPTMR_PWMTRGCTL_TRGEN_Pos)              /*!< LPTMR_T::PWMTRGCTL: TRGEN Mask         */

#define LPTMR_PWMTRGCTL_PWMTRGLPPDMA_Pos (9)                                               /*!< LPTMR_T::PWMTRGCTL: PWMTRGLPPDMA Position*/
#define LPTMR_PWMTRGCTL_PWMTRGLPPDMA_Msk (0x1ul << LPTMR_PWMTRGCTL_PWMTRGLPPDMA_Pos)       /*!< LPTMR_T::PWMTRGCTL: PWMTRGLPPDMA Mask  */

#define LPTMR_PWMSTATUS_CNTMAXF_Pos      (0)                                               /*!< LPTMR_T::PWMSTATUS: CNTMAXF Position   */
#define LPTMR_PWMSTATUS_CNTMAXF_Msk      (0x1ul << LPTMR_PWMSTATUS_CNTMAXF_Pos)            /*!< LPTMR_T::PWMSTATUS: CNTMAXF Mask       */

#define LPTMR_PWMSTATUS_PWMINTWKF_Pos    (8)                                               /*!< LPTMR_T::PWMSTATUS: PWMINTWKF Position */
#define LPTMR_PWMSTATUS_PWMINTWKF_Msk    (0x1ul << LPTMR_PWMSTATUS_PWMINTWKF_Pos)          /*!< LPTMR_T::PWMSTATUS: PWMINTWKF Mask     */

#define LPTMR_PWMPBUF_PBUF_Pos           (0)                                               /*!< LPTMR_T::PWMPBUF: PBUF Position        */
#define LPTMR_PWMPBUF_PBUF_Msk           (0xfffful << LPTMR_PWMPBUF_PBUF_Pos)              /*!< LPTMR_T::PWMPBUF: PBUF Mask            */

#define LPTMR_PWMCMPBUF_CMPBUF_Pos       (0)                                               /*!< LPTMR_T::PWMCMPBUF: CMPBUF Position    */
#define LPTMR_PWMCMPBUF_CMPBUF_Msk       (0xfffful << LPTMR_PWMCMPBUF_CMPBUF_Pos)          /*!< LPTMR_T::PWMCMPBUF: CMPBUF Mask        */

#define LPTMR_PWMIFA_IFACNT_Pos          (0)                                               /*!< LPTMR_T::PWMIFA: IFACNT Position       */
#define LPTMR_PWMIFA_IFACNT_Msk          (0xfffful << LPTMR_PWMIFA_IFACNT_Pos)             /*!< LPTMR_T::PWMIFA: IFACNT Mask           */

#define LPTMR_PWMIFA_STPMOD_Pos          (24)                                              /*!< LPTMR_T::PWMIFA: STPMOD Position       */
#define LPTMR_PWMIFA_STPMOD_Msk          (0x1ul << LPTMR_PWMIFA_STPMOD_Pos)                /*!< LPTMR_T::PWMIFA: STPMOD Mask           */

#define LPTMR_PWMIFA_IFASEL_Pos          (28)                                              /*!< LPTMR_T::PWMIFA: IFASEL Position       */
#define LPTMR_PWMIFA_IFASEL_Msk          (0x3ul << LPTMR_PWMIFA_IFASEL_Pos)                /*!< LPTMR_T::PWMIFA: IFASEL Mask           */

#define LPTMR_PWMIFA_IFAEN_Pos           (31)                                              /*!< LPTMR_T::PWMIFA: IFAEN Position        */
#define LPTMR_PWMIFA_IFAEN_Msk           (0x1ul << LPTMR_PWMIFA_IFAEN_Pos)                 /*!< LPTMR_T::PWMIFA: IFAEN Mask            */

#define LPTMR_PWMAINTSTS_IFAIF_Pos       (0)                                               /*!< LPTMR_T::PWMAINTSTS: IFAIF Position    */
#define LPTMR_PWMAINTSTS_IFAIF_Msk       (0x1ul << LPTMR_PWMAINTSTS_IFAIF_Pos)             /*!< LPTMR_T::PWMAINTSTS: IFAIF Mask        */

#define LPTMR_PWMAINTEN_IFAIEN_Pos       (0)                                               /*!< LPTMR_T::PWMAINTEN: IFAIEN Position    */
#define LPTMR_PWMAINTEN_IFAIEN_Msk       (0x1ul << LPTMR_PWMAINTEN_IFAIEN_Pos)             /*!< LPTMR_T::PWMAINTEN: IFAIEN Mask        */

#define LPTMR_PWMAPDMACTL_APDMAEN_Pos    (0)                                               /*!< LPTMR_T::PWMAPDMACTL: APDMAEN Position */
#define LPTMR_PWMAPDMACTL_APDMAEN_Msk    (0x1ul << LPTMR_PWMAPDMACTL_APDMAEN_Pos)          /*!< LPTMR_T::PWMAPDMACTL: APDMAEN Mask     */

/**@}*/ /* LPTMR_CONST */
/**@}*/ /* end of LPTMR register group */
/**@}*/ /* end of REGISTER group */

#if defined ( __CC_ARM   )
#pragma no_anon_unions
#endif

#endif /* __LPTMR_REG_H__ */
