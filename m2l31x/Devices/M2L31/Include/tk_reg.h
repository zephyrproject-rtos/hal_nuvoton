
/**************************************************************************//**
 * @file     tk_reg.h
 * @version  V1.00
 * @brief    TK register definition header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

/** @addtogroup REGISTER Control Register

  @{

*/


/*---------------------- Touch Key Controller -------------------------*/
/**
    @addtogroup TK Touch Key Controller(TK)
    Memory Mapped Structure for TK Controller
@{ */
 
typedef struct
{


/**
 * @var TK_T::SCANC
 * Offset: 0x00  Touch Key Scan Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |TK0SEN    |TK0 Scan Enable Bit
 * |        |          |This bit is ignored if TK0REN (TK_REFC[0]) is "1" except SCAN_ALL (TK_REFC[23]) is "1".
 * |        |          |0 = TKDAT0 (TK_DAT0[7:0]) is invalid.
 * |        |          |1 = TK0 is always enabled for Touch Key scan. TKDAT0 (TK_DAT0[7:0]) is valid.
 * |[1]     |TK1SEN    |TK1 Scan Enable Bit
 * |        |          |This bit is ignored if TK1REN (TK_REFC[1]) is "1".
 * |        |          |0 = TKDAT1 (TK_DAT0[15:8]) is invalid.
 * |        |          |1 = TK1 is always enabled for Touch Key scan. TKDAT1 (TK_DAT0[15:8]) is valid.
 * |[2]     |TK2SEN    |TK2 Scan Enable Bit
 * |        |          |This bit is ignored if TK2REN (TK_REFC[2]) is "1".
 * |        |          |0 = TKDAT2 (TK_DAT0[23:16]) is invalid.
 * |        |          |1 = TK2 is always enabled for Touch Key scan. TKDAT2 (TK_DAT0[23:16]) is valid.
 * |[3]     |TK3SEN    |TK3 Scan Enable Bit
 * |        |          |0 = TKDAT3 (TK_DAT0[31:24]) is invalid.
 * |        |          |1 = TK3 is always enabled for Touch Key scan. TKDAT3 (TK_DAT0[31:24]) is valid.
 * |        |          |This bit is ignored if TK3REN (TK_REFC[3]) is "1".
 * |[4]     |TK4SEN    |TK4 Scan Enable Bit
 * |        |          |This bit is ignored if TK4REN (TK_REFC[4]) is "1".
 * |        |          |0 = TKDAT4 (TK_DAT1[7:0]) is invalid.
 * |        |          |1 = TK4 is always enabled for Touch Key scan. TKDAT4 (TK_DAT1[7:0]) is valid.
 * |[5]     |TK5SEN    |TK5 Scan Enable Bit
 * |        |          |This bit is ignored if TK5REN (TK_REFC[5]) is "1".
 * |        |          |0 = TKDAT5 (TK_DAT1[15:8]) is invalid.
 * |        |          |1 = TK5 is always enabled for Touch Key scan. TKDAT5 (TK_DAT1[15:8]) is valid.
 * |[6]     |TK6SEN    |TK6 Scan Enable Bit
 * |        |          |This bit is ignored if TK6REN (TK_REFC[6]) is "1".
 * |        |          |0 = TKDAT6 (TK_DAT1[23:16]) is invalid.
 * |        |          |1 = TK6 is always enabled for Touch Key scan. TKDAT6 (TK_DAT1[23:16]) is valid.
 * |[7]     |TK7SEN    |TK7 Scan Enable Bit
 * |        |          |This bit is ignored if TK7REN (TK_REFC[7]) is "1".
 * |        |          |0 = TKDAT7 (TK_DAT1[31:24]) is invalid.
 * |        |          |1 = TK7 is always enabled for Touch Key scan. TKDAT7 (TK_DAT1[31:24]) is valid.
 * |[8]     |TK8SEN    |TK8 Scan Enable Bit
 * |        |          |This bit is ignored if TK8REN (TK_REFC[8]) is "1".
 * |        |          |0 = TKDAT8 (TK_DAT2[7:0]) is invalid.
 * |        |          |1 = TK8 is always enabled for Touch Key scan. TKDAT8 (TK_DAT2[7:0]) is valid.
 * |[9]     |TK9SEN    |TK9 Scan Enable Bit
 * |        |          |This bit is ignored if TK9REN (TK_REFC[9]) is "1".
 * |        |          |0 = TKDAT9 (TK_DAT2[15:8]) is invalid.
 * |        |          |1 = TK9 is always enabled for Touch Key scan. TKDAT9 (TK_DAT2[15:8]) is valid.
 * |[10]    |TK10SEN   |TK10 Scan Enable Bit
 * |        |          |This bit is ignored if TK10REN (TK_REFC[10]) is "1".
 * |        |          |0 = TKDAT10 (TK_DAT2[23:16]) is invalid.
 * |        |          |1 = TK10 is always enabled for Touch Key scan. TKDAT10 (TK_DAT2[23:16]) is valid.
 * |[11]    |TK11SEN   |TK11 Scan Enable Bit
 * |        |          |This bit is ignored if TK11REN (TK_REFC[11]) is "1".
 * |        |          |0 = TKDAT11 (TK_DAT2[31:24]) is invalid.
 * |        |          |1 = TK11 is always enabled for Touch Key scan. TKDAT11 (TK_DAT2[31:24]) is valid.
 * |[12]    |TK12SEN   |TK12 Scan Enable Bit
 * |        |          |This bit is ignored if TK12REN (TK_REFC[12]) is "1".
 * |        |          |0 = TKDAT12 (TK_DAT3[7:0]) is invalid.
 * |        |          |1 = TK12 is always enabled for Touch Key scan. TKDAT12 (TK_DAT3[7:0]) is valid. 
 * |[13]    |TK13SEN   |TK13 Scan Enable Bit
 * |        |          |This bit is ignored if TK13REN (TK_REFC[13]) is "1".
 * |        |          |0 = TKDAT13 (TK_DAT3[15:8]) is invalid.
 * |        |          |1 = TK13 is always enabled for Touch Key scan. TKDAT13 (TK_DAT3[15:8]) is valid.
 * |[14]    |TK14SEN   |TK14 Scan Enable Bit
 * |        |          |This bit is ignored if TK14REN (TK_REFC[14]) is "1".
 * |        |          |0 = TKDAT14 (TK_DAT3[23:16]) is invalid.
 * |        |          |1 = TK14 is always enabled for Touch Key scan. TKDAT14 (TK_DAT3[23:16]) is valid.
 * |[15]    |TK15SEN   |TK15 Scan Enable Bit
 * |        |          |This bit is ignored if TK15REN (TK_REFC[15]) is "1".
 * |        |          |0 = TKDAT15 (TK_DAT3[31:24]) is invalid.
 * |        |          |1 = TK15 is always enabled for Touch Key scan. TKDAT15 (TK_DAT3[31:24]) is valid.
 * |[16]    |TK16SEN   |TK16 Scan Enable Bit
 * |        |          |This bit is ignored if TK16REN (TK_REFC[16]) is "1".
 * |        |          |0 = TKDAT16 (TK_DAT4[7:0]) is invalid.
 * |        |          |1 = TK16 is always enabled for Touch Key scan. TKDAT16 (TK_DAT4[7:0]) is valid.
 * |[23:20] |AVDDH_S   |AVDDH Voltage Select
 * |        |          |0000 = 1/16 VDD.
 * |        |          |0001 = 1/8 VDD.
 * |        |          |0010 = 3/16 VDD.
 * |        |          |0011 = 1/4 VDD.
 * |        |          |0100 = 5/16 VDD.
 * |        |          |0101 = 3/8 VDD.
 * |        |          |0110 = 7/16 VDD.
 * |        |          |0111 = 1/2 VDD.
 * |        |          |1000 = 1/32 VDD.
 * |        |          |1001 = 1/16 VDD.
 * |        |          |1010 = 3/32 VDD.
 * |        |          |1011 = 1/8 VDD.
 * |        |          |1100 = 5/32 VDD.
 * |        |          |1101 = 3/16 VDD.
 * |        |          |1110 = 7/32 VDD.
 * |        |          |1111 = 1/4 VDD.
 * |[24]    |SCAN      |Scan
 * |        |          |Writing "1" to this bit will immediately initiate key scan on all channels which are enabled
 * |        |          |This bit will be self-cleared after key scan is started.
 * |[28:25] |TRG_EN    |Trigger Enable Bit
 * |        |          |Timer0~3 and RTC tick trigger key scan periodically Enabled
 * |        |          |Key scan will be initiated by timer or RTC periodically.
 * |        |          |0000 = Trigger Disabled.
 * |        |          |0001 = Timer 0 trigger Enabled.
 * |        |          |0010 = Timer 1 trigger Enabled.
 * |        |          |0011 = Timer 2 trigger Enabled.
 * |        |          |0100 = Timer 3 trigger Enabled.
 * |        |          |0101 = RTC tick event trigger Enabled.
 * |        |          |0110 = Reserved.
 * |        |          |0111 = Reserved.
 * |        |          |1000 = Reserved.
 * |        |          |1001 = Reserved.
 * |        |          |1010 = Reserved.
 * |        |          |1011 = Reserved.
 * |        |          |1100 = Reserved.
 * |        |          |1101 = Reserved.
 * |        |          |1110 = Reserved.
 * |        |          |1111 = Reserved.
 * |[31]    |TK_EN     |Touch Key Scan Enable Bit
 * |        |          |0 = Touch Key function Disabled.
 * |        |          |1 = Touch Key function Enabled. 
 * @var TK_T::REFC
 * Offset: 0x04  Touch Key Reference Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |TK0REN    |TK0 Reference Enable Bit
 * |        |          |0 = TK0 is not reference.
 * |        |          |1 = TK0 is set as reference, and TKDAT0 (TK_DAT0[7:0]) is invalid.
 * |[1]     |TK1REN    |TK1 Reference Enable Bit
 * |        |          |0 = TK1 is not reference.
 * |        |          |1 = TK1 is set as reference, and TKDAT1 (TK_DAT0[15:8]) is invalid.
 * |[2]     |TK2REN    |TK2 Reference Enable Bit
 * |        |          |0 = TK2 is not reference.
 * |        |          |1 = TK2 is set as reference, and TKDAT2 (TK_DAT0[23:16]) is invalid.
 * |[3]     |TK3REN    |TK3 Reference Enable Bit
 * |        |          |0 = TK3 is not reference.
 * |        |          |1 = TK3 is set as reference, and TKDAT3 (TK_DAT0[31:24]) is invalid.
 * |[4]     |TK4REN    |TK4 Reference Enable Bit
 * |        |          |0 = TK4 is not reference.
 * |        |          |1 = TK4 is set as reference, and TKDAT4 (TK_DAT1[7:0]) is invalid.
 * |[5]     |TK5REN    |TK5 Reference Enable Bit
 * |        |          |0 = TK5 is not reference.
 * |        |          |1 = TK5 is set as reference, and TKDAT5 (TK_DAT1[15:8]) is invalid.
 * |[6]     |TK6REN    |TK6 Reference Enable Bit
 * |        |          |0 = TK6 is not reference.
 * |        |          |1 = TK6 is set as reference, and TKDAT6 (TK_DAT1[23:16]) is invalid.
 * |[7]     |TK7REN    |TK7 Reference Enable Bit
 * |        |          |0 = TK7 is not reference.
 * |        |          |1 = TK7 is set as reference, and TKDAT7 (TK_DAT1[31:24]) is invalid.
 * |[8]     |TK8REN    |TK8 Reference Enable Bit
 * |        |          |0 = TK8 is not reference.
 * |        |          |1 = TK8 is set as reference, and TKDAT8 (TK_DAT2[7:0]) is invalid.
 * |[9]     |TK9REN    |TK9 Reference Enable Bit
 * |        |          |0 = TK9 is not reference.
 * |        |          |1 = TK9 is set as reference, and TKDAT9 (TK_DAT2[15:8]) is invalid.
 * |[10]    |TK10REN   |TK10 Reference Enable Bit
 * |        |          |0 = TK10 is not reference.
 * |        |          |1 = TK10 is set as reference, and TKDAT10 (TK_DAT2[23:16]) is invalid.
 * |[11]    |TK11REN   |TK11 Reference Enable Bit
 * |        |          |0 = TK11 is not reference.
 * |        |          |1 = TK11 is set as reference, and TKDAT11 (TK_DAT2[31:24]) is invalid.
 * |[12]    |TK12REN   |TK12 Reference Enable Bit
 * |        |          |0 = TK12 is not reference.
 * |        |          |1 = TK12 is set as reference, and TKDAT12 (TK_DAT3[7:0]) is invalid.
 * |[13]    |TK13REN   |TK13 Reference Enable Bit
 * |        |          |0 = TK13 is not reference.
 * |        |          |1 = TK13 is set as reference, and TKDAT13 (TK_DAT3[15:8]) is invalid.
 * |[14]    |TK14REN   |TK14 Reference Enable Bit
 * |        |          |0 = TK14 is not reference.
 * |        |          |1 = TK14 is set as reference, and TKDAT14 (TK_DAT3[23:16]) is invalid.
 * |[15]    |TK15REN   |TK15 Reference Enable Bit
 * |        |          |0 = TK15 is not reference.
 * |        |          |1 = TK15 is set as reference, and TKDAT15 (TK_DAT3[31:24]) is invalid.
 * |[16]    |TK16REN   |TK16 Reference Enable Bit
 * |        |          |0 = TK16 is not reference.
 * |        |          |1 = TK16 is set as reference, and TKDAT16 (TK_DAT4[7:0]) is invalid.
 * |        |          |Note: This bit is forced to "1" automatically if none is set as reference. 
 * |[23]    |SCAN_ALL  |All Keys Scan Enable Bit
 * |        |          |This function is used for low power key scanning operation
 * |        |          |TKDAT_ALL (TK_DAT4[15:8]) is the only one valid data when key scan is complete.
 * |        |          |0 = All Keys Scan function Disabled.
 * |        |          |1 = All Keys Scan function Enabled.
 * |[26:24] |SENSET    |Touch Key Sensing Time Control
 * |        |          |000 = 128 x PULSET.
 * |        |          |001 = 255 x PULSET.
 * |        |          |010 = 511 x PULSET.
 * |        |          |011 = 1023 x PULSET.
 * |        |          |100 = 8 x PULSET.
 * |        |          |101 = 16 x PULSET.
 * |        |          |110 = 32 x PULSET.
 * |        |          |111 = 64 x PULSET.
 * |[30:28] |PULSET    |Touch Key Sensing Pulse Width Time Control
 * |        |          |000 = 1us.
 * |        |          |001 = 2us.
 * |        |          |010 = 4us.
 * |        |          |011 = 8us.
 * |        |          |100 = Reserved.
 * |        |          |101 = Reserved.
 * |        |          |110 = Reserved.
 * |        |          |111 = 500ns.
 * @var TK_T::CCBD0
 * Offset: 0x08  Touch Key Complement Capacitor Bank Data Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |CCBD0     |TK0 Complement CB Data
 * |        |          |These bits are used for TK0 sensitivity adjustment. 
 * |[15:8]  |CCBD1     |TK1 Complement CB Data
 * |        |          |These bits are used for TK1 sensitivity adjustment. 
 * |[23:16] |CCBD2     |TK2 Complement CB Data
 * |        |          |These bits are used for TK2 sensitivity adjustment. 
 * |[31:24] |CCBD3     |TK3 Complement CB Data
 * |        |          |These bits are used for TK3 sensitivity adjustment. 
 * @var TK_T::CCBD1
 * Offset: 0x0C  Touch Key Complement Capacitor Bank Data Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |CCBD4     |TK4 Complement CB Data
 * |        |          |These bits are used for TK4 sensitivity adjustment. 
 * |[15:8]  |CCBD5     |TK5 Complement CB Data
 * |        |          |These bits are used for TK5 sensitivity adjustment. 
 * |[23:16] |CCBD6     |TK6 Complement CB Data
 * |        |          |These bits are used for TK6 sensitivity adjustment. 
 * |[31:24] |CCBD7     |TK7 Complement CB Data
 * |        |          |These bits are used for TK7 sensitivity adjustment. 
 * @var TK_T::CCBD2
 * Offset: 0x10  Touch Key Complement Capacitor Bank Data Register 2
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |CCBD8     |TK8 Complement CB Data
 * |        |          |These bits are used for TK8 sensitivity adjustment. 
 * |[15:8]  |CCBD9     |TK9 Complement CB Data
 * |        |          |These bits are used for TK9 sensitivity adjustment. 
 * |[23:16] |CCBD10    |TK10 Complement CB Data
 * |        |          |These bits are used for TK10 sensitivity adjustment. 
 * |[31:24] |CCBD11    |TK11 Complement CB Data
 * |        |          |These bits are used for TK11 sensitivity adjustment. 
 * @var TK_T::CCBD3
 * Offset: 0x14  Touch Key Complement Capacitor Bank Data Register 3
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |CCBD12    |TK12 Complement CB Data
 * |        |          |These bits are used for TK12 sensitivity adjustment. 
 * |[15:8]  |CCBD13    |TK13 Complement CB Data
 * |        |          |These bits are used for TK13 sensitivity adjustment. 
 * |[23:16] |CCBD14    |TK14 Complement CB Data
 * |        |          |These bits are used for TK14 sensitivity adjustment. 
 * |[31:24] |CCBD15    |TK15 Complement CB Data
 * |        |          |These bits are used for TK15 sensitivity adjustment. 
 * @var TK_T::CCBD4
 * Offset: 0x18  Touch Key Complement Capacitor Bank Data Register 4
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |CCBD16    |TK16 Complement CB Data
 * |        |          |These bits are used for TK16 sensitivity adjustment. 
 * |[15:8]  |CCBD_ALL  |All Keys Scan Complement CB Data
 * |        |          |These bits are used for All Key Scan sensitivity adjustment.
 * @var TK_T::IDLSC
 * Offset: 0x1C  Touch Key Idle State Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[1:0]   |IDLS0     |TK0 Idle State Control
 * |        |          |These bits are ignored if both TK0SEN (TK_SCANC[0]) and POLEN0 (TK_POLC[8]) are "0" or TK0REN (TK_REFC[0]) is "1".
 * |        |          |00 = TK0 connected to Gnd.
 * |        |          |01 = TK0 connected to AVDDH.
 * |        |          |10 = TK0 connected to VDD.
 * |        |          |11 = TK0 connected to VDD.
 * |[3:2]   |IDLS1     |TK1 Idle State Control
 * |        |          |These bits are ignored if both TK1SEN (TK_SCANC[1]) and POLEN1 (TK_POLC[9]) are "0" or TK1REN (TK_REFC[1]) is "1".
 * |        |          |00 = TK1 connected to Gnd.
 * |        |          |01 = TK1 connected to AVDDH.
 * |        |          |10 = TK1 connected to VDD.
 * |        |          |11 = TK1 connected to VDD.
 * |[5:4]   |IDLS2     |TK2 Idle State Control
 * |        |          |These bits are ignored if both TK2SEN (TK_SCANC[2]) and POLEN2 (TK_POLC[10]) are "0" or TK2REN (TK_REFC[2]) is "1".
 * |        |          |00 = TK2 connected to Gnd.
 * |        |          |01 = TK2 connected to AVDDH.
 * |        |          |10 = TK2 connected to VDD.
 * |        |          |11 = TK2 connected to VDD.
 * |[7:6]   |IDLS3     |TK3 Idle State Control
 * |        |          |These bits are ignored if both TK3SEN (TK_SCANC[3]) and POLEN3 (TK_POLC[11]) are "0" or TK3REN (TK_REFC[3]) is "1".
 * |        |          |00 = TK3 connected to Gnd.
 * |        |          |01 = TK3 connected to AVDDH.
 * |        |          |10 = TK3 connected to VDD.
 * |        |          |11 = TK3 connected to VDD.
 * |[9:8]   |IDLS4     |TK4 Idle State Control
 * |        |          |These bits are ignored if both TK4SEN (TK_SCANC[4]) and POLEN4 (TK_POLC[12]) are "0" or TK4REN (TK_REFC[4]) is "1".
 * |        |          |00 = TK4 connected to Gnd.
 * |        |          |01 = TK4 connected to AVDDH.
 * |        |          |10 = TK4 connected to VDD.
 * |        |          |11 = TK4 connected to VDD.
 * |[11:10] |IDLS5     |TK5 Idle State Control
 * |        |          |These bits are ignored if both TK5SEN (TK_SCANC[5]) and POLEN5 (TK_POLC[13]) are "0" or TK5REN (TK_REFC[5]) is "1".
 * |        |          |00 = TK5 connected to Gnd.
 * |        |          |01 = TK5 connected to AVDDH.
 * |        |          |10 = TK5 connected to VDD.
 * |        |          |11 = TK5 connected to VDD.
 * |[13:12] |IDLS6     |TK6 Idle State Control
 * |        |          |These bits are ignored if both TK6SEN (TK_SCANC[6]) and POLEN6 (TK_POLC[14]) are "0" or TK6REN (TK_REFC[6]) is "1".
 * |        |          |00 = TK6 connected to Gnd.
 * |        |          |01 = TK6 connected to AVDDH.
 * |        |          |10 = TK6 connected to VDD.
 * |        |          |11 = TK6 connected to VDD.
 * |[15:14] |IDLS7     |TK7 Idle State Control
 * |        |          |These bits are ignored if both TK7SEN (TK_SCANC[7]) and POLEN7 (TK_POLC[15]) are "0" or TK7REN (TK_REFC[7]) is "1".
 * |        |          |00 = TK7 connected to Gnd.
 * |        |          |01 = TK7 connected to AVDDH.
 * |        |          |10 = TK7 connected to VDD.
 * |        |          |11 = TK7 connected to VDD.
 * |[17:16] |IDLS8     |TK8 Idle State Control
 * |        |          |These bits are ignored if both TK8SEN (TK_SCANC[8]) and POLEN8 (TK_POLC[16]) are "0" or TK8REN (TK_REFC[8]) is "1".
 * |        |          |00 = TK8 connected to Gnd.
 * |        |          |01 = TK8 connected to AVDDH.
 * |        |          |10 = TK8 connected to VDD.
 * |        |          |11 = TK8 connected to VDD.
 * |[19:18] |IDLS9     |TK9 Idle State Control
 * |        |          |These bits are ignored if both TK9SEN (TK_SCANC[9]) and POLEN9 (TK_POLC[17]) are "0" or TK9REN (TK_REFC[9]) is "1".
 * |        |          |00 = TK9 connected to Gnd.
 * |        |          |01 = TK9 connected to AVDDH.
 * |        |          |10 = TK9 connected to VDD.
 * |        |          |11 = TK9 connected to VDD.
 * |[21:20] |IDLS10    |TK10 Idle State Control
 * |        |          |These bits are ignored if both TK10SEN (TK_SCANC[10]) and POLEN10 (TK_POLC[18]) are "0" or TK10REN (TK_REFC[10]) is "1".
 * |        |          |00 = TK10 connected to Gnd.
 * |        |          |01 = TK10 connected to AVDDH.
 * |        |          |10 = TK10 connected to VDD.
 * |        |          |11 = TK10 connected to VDD.
 * |[23:22] |IDLS11    |TK11 Idle State Control
 * |        |          |These bits are ignored if both TK11SEN (TK_SCANC[11]) and POLEN11 (TK_POLC[19]) are "0" or TK11REN (TK_REFC[11]) is "1".
 * |        |          |00 = TK11 connected to Gnd.
 * |        |          |01 = TK11 connected to AVDDH.
 * |        |          |10 = TK11 connected to VDD.
 * |        |          |11 = TK11 connected to VDD.
 * |[25:24] |IDLS12    |TK12 Idle State Control
 * |        |          |These bits are ignored if both TK12SEN (TK_SCANC[12]) and POLEN12 (TK_POLC[20]) are "0" or TK12REN (TK_REFC[12]) is "1".
 * |        |          |00 = TK12 connected to Gnd.
 * |        |          |01 = TK12 connected to AVDDH.
 * |        |          |10 = TK12 connected to VDD.
 * |        |          |11 = TK12 connected to VDD.
 * |[27:26] |IDLS13    |TK13 Idle State Control
 * |        |          |These bits are ignored if both TK13SEN (TK_SCANC[13]) and POLEN13 (TK_POLC[21]) are "0" or TK13REN (TK_REFC[13]) is "1".
 * |        |          |00 = TK13 connected to Gnd.
 * |        |          |01 = TK13 connected to AVDDH.
 * |        |          |10 = TK13 connected to VDD.
 * |        |          |11 = TK13 connected to VDD.
 * |[29:28] |IDLS14    |TK14 Idle State Control
 * |        |          |These bits are ignored if both TK14SEN (TK_SCANC[14]) and POLEN14 (TK_POLC[22]) are "0" or TK14REN (TK_REFC[14]) is "1".
 * |        |          |00 = TK14 connected to Gnd.
 * |        |          |01 = TK14 connected to AVDDH.
 * |        |          |10 = TK14 connected to VDD.
 * |        |          |11 = TK14 connected to VDD.
 * |[31:30] |IDLS15    |TK15 Idle State Control
 * |        |          |These bits are ignored if both TK15SEN (TK_SCANC[15]) and POLEN15 (TK_POLC[23]) are "0" or TK15REN (TK_REFC[15]) is "1".
 * |        |          |00 = TK15 connected to Gnd.
 * |        |          |01 = TK15 connected to AVDDH.
 * |        |          |10 = TK15 connected to VDD.
 * |        |          |11 = TK15 connected to VDD. 
 * @var TK_T::POLSEL
 * Offset: 0x20  Touch Key Polarity Select Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[1:0]   |POL0      |TK0 Polarity Select
 * |        |          |These bits are ignored if POLEN0 (TK_POLC[8]) is "0" or TK0REN (TK_REFC[0]) is "1".
 * |        |          |00 = TK0 connected to Gnd.
 * |        |          |01 = TK0 connected to AVDDH.
 * |        |          |10 = TK0 connected to VDD.
 * |        |          |11 = TK0 connected to VDD.
 * |[3:2]   |POL1      |TK1 Polarity Select
 * |        |          |These bits are ignored if POLEN1 (TK_POLC[9]) is "0" or TK1REN (TK_REFC[1]) is "1".
 * |        |          |00 = TK1 connected to Gnd.
 * |        |          |01 = TK1 connected to AVDDH.
 * |        |          |10 = TK1 connected to VDD.
 * |        |          |11 = TK1 connected to VDD.
 * |[5:4]   |POL2      |TK2 Polarity Select
 * |        |          |These bits are ignored if POLEN2 (TK_POLC[10]) is "0" or TK2REN (TK_REFC[2]) is "1".
 * |        |          |00 = TK2 connected to Gnd.
 * |        |          |01 = TK2 connected to AVDDH.
 * |        |          |10 = TK2 connected to VDD.
 * |        |          |11 = TK2 connected to VDD.
 * |[7:6]   |POL3      |TK3 Polarity Select
 * |        |          |These bits are ignored if POLEN3 (TK_POLC[11]) is "0" or TK3REN (TK_REFC[3]) is "1".
 * |        |          |00 = TK3 connected to Gnd.
 * |        |          |01 = TK3 connected to AVDDH.
 * |        |          |10 = TK3 connected to VDD.
 * |        |          |11 = TK3 connected to VDD.
 * |[9:8]   |POL4      |TK4 Polarity Select
 * |        |          |These bits are ignored if POLEN4 (TK_POLC[12]) is "0" or TK4REN (TK_REFC[4]) is "1".
 * |        |          |00 = TK4 connected to Gnd.
 * |        |          |01 = TK4 connected to AVDDH.
 * |        |          |10 = TK4 connected to VDD.
 * |        |          |11 = TK4 connected to VDD.
 * |[11:10] |POL5      |TK5 Polarity Select
 * |        |          |These bits are ignored if POLEN5 (TK_POLC[13]) is "0" or TK5REN (TK_REFC[5]) is "1".
 * |        |          |00 = TK5 connected to Gnd.
 * |        |          |01 = TK5 connected to AVDDH.
 * |        |          |10 = TK5 connected to VDD.
 * |        |          |11 = TK5 connected to VDD.
 * |[13:12] |POL6      |TK6 Polarity Select
 * |        |          |These bits are ignored if POLEN6 (TK_POLC[14]) is "0" or TK6REN (TK_REFC[6]) is "1".
 * |        |          |00 = TK6 connected to Gnd.
 * |        |          |01 = TK6 connected to AVDDH.
 * |        |          |10 = TK6 connected to VDD.
 * |        |          |11 = TK6 connected to VDD.
 * |[15:14] |POL7      |TK7 Polarity Select
 * |        |          |These bits are ignored if POLEN7 (TK_POLC[15]) is "0" or TK7REN (TK_REFC[7]) is "1".
 * |        |          |00 = TK7 connected to Gnd.
 * |        |          |01 = TK7 connected to AVDDH.
 * |        |          |10 = TK7 connected to VDD.
 * |        |          |11 = TK7 connected to VDD.
 * |[17:16] |POL8      |TK8 Polarity Select
 * |        |          |These bits are ignored if POLEN8 (TK_POLC[16]) is "0" or TK8REN (TK_REFC[8]) is "1".
 * |        |          |00 = TK8 connected to Gnd.
 * |        |          |01 = TK8 connected to AVDDH.
 * |        |          |10 = TK8 connected to VDD.
 * |        |          |11 = TK8 connected to VDD.
 * |[19:18] |POL9      |TK9 Polarity Select
 * |        |          |These bits are ignored if POLEN9 (TK_POLC[17]) is "0" or TK9REN (TK_REFC[9]) is "1".
 * |        |          |00 = TK9 connected to Gnd.
 * |        |          |01 = TK9 connected to AVDDH.
 * |        |          |10 = TK9 connected to VDD.
 * |        |          |11 = TK9 connected to VDD.
 * |[21:20] |POL10     |TK10 Polarity Select
 * |        |          |These bits are ignored if POLEN10 (TK_POLC[18]) is "0" or TK10REN (TK_REFC[10]) is "1".
 * |        |          |00 = TK10 connected to Gnd.
 * |        |          |01 = TK10 connected to AVDDH.
 * |        |          |10 = TK10 connected to VDD.
 * |        |          |11 = TK10 connected to VDD.
 * |[23:22] |POL11     |TK11 Polarity Select
 * |        |          |These bits are ignored if POLEN11 (TK_POLC[19]) is "0" or TK11REN (TK_REFC[11]) is "1".
 * |        |          |00 = TK11 connected to Gnd.
 * |        |          |01 = TK11 connected to AVDDH.
 * |        |          |10 = TK11 connected to VDD.
 * |        |          |11 = TK11 connected to VDD.
 * |[25:24] |POL12     |TK12 Polarity Select
 * |        |          |These bits are ignored if POLEN12 (TK_POLC[20]) is "0" or TK12REN (TK_REFC[12]) is "1".
 * |        |          |00 = TK12 connected to Gnd.
 * |        |          |01 = TK12 connected to AVDDH.
 * |        |          |10 = TK12 connected to VDD.
 * |        |          |11 = TK12 connected to VDD.
 * |[27:26] |POL13     |TK13 Polarity Select
 * |        |          |These bits are ignored if POLEN13 (TK_POLC[21]) is "0" or TK13REN (TK_REFC[13]) is "1".
 * |        |          |00 = TK13 connected to Gnd.
 * |        |          |01 = TK13 connected to AVDDH.
 * |        |          |10 = TK13 connected to VDD.
 * |        |          |11 = TK13 connected to VDD.
 * |[29:28] |POL14     |TK14 Polarity Select
 * |        |          |These bits are ignored if POLEN14 (TK_POLC[22]) is "0" or TK14REN (TK_REFC[14]) is "1".
 * |        |          |00 = TK14 connected to Gnd.
 * |        |          |01 = TK14 connected to AVDDH.
 * |        |          |10 = TK14 connected to VDD.
 * |        |          |11 = TK14 connected to VDD.
 * |[31:30] |POL15     |TK15 Polarity Select
 * |        |          |These bits are ignored if POLEN15 (TK_POLC[23]) is "0" or TK15REN (TK_REFC[15]) is "1".
 * |        |          |00 = TK15 connected to Gnd.
 * |        |          |01 = TK15 connected to AVDDH.
 * |        |          |10 = TK15 connected to VDD.
 * |        |          |11 = TK15 connected to VDD.
 * @var TK_T::POLC
 * Offset: 0x24  Touch Key Polarity Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[1:0]   |IDLS16    |TK16 Idle State Control
 * |        |          |These bits are ignored if both TK16SEN (TK_SCANC[16]) and POLEN16 (TK_POLC[24]) are "0" or TK16REN (TK_REFC[16]) is "1".
 * |        |          |00 = TK16 connected to Gnd.
 * |        |          |01 = TK16 connected to AVDDH.
 * |        |          |10 = TK16 connected to VDD.
 * |        |          |11 = TK16 connected to VDD.
 * |[3:2]   |POL16     |TK16 Polarity Control
 * |        |          |These bits are ignored if POLEN16 (TK_POLC[24]) is "0" or TK16REN (TK_REFC[16]) is "1".
 * |        |          |00 = TK16 connected to Gnd.
 * |        |          |01 = TK16 connected to AVDDH.
 * |        |          |10 = TK16 connected to VDD.
 * |        |          |11 = TK16 connected to VDD.
 * |[5:4]   |POL_CAP   |Capacitor Bank Polarity Select
 * |        |          |00 = Gnd.
 * |        |          |01 = AVDDH.
 * |        |          |10 = VDD.
 * |        |          |11 = VDD.
 * |[8]     |POLEN0    |TK0 Polarity Function Enable Bit
 * |        |          |0 = TK0 polarity function Disabled.
 * |        |          |1 = TK0 polarity function Enabled.
 * |[9]     |POLEN1    |TK1 Polarity Function Enable Bit
 * |        |          |0 = TK1 polarity function Disabled.
 * |        |          |1 = TK1 polarity function Enabled.
 * |[10]    |POLEN2    |TK2 Polarity Function Enable Bit
 * |        |          |0 = TK2 polarity function Disabled.
 * |        |          |1 = TK2 polarity function Enabled.
 * |[11]    |POLEN3    |TK3 Polarity Function Enable Bit
 * |        |          |0 = TK3 polarity function Disabled.
 * |        |          |1 = TK3 polarity function Enabled.
 * |[12]    |POLEN4    |TK4 Polarity Function Enable Bit
 * |        |          |0 = TK4 polarity function Disabled.
 * |        |          |1 = TK4 polarity function Enabled.
 * |[13]    |POLEN5    |TK5 Polarity Function Enable Bit
 * |        |          |0 = TK5 polarity function Disabled.
 * |        |          |1 = TK5 polarity function Enabled.
 * |[14]    |POLEN6    |TK6 Polarity Function Enable Bit
 * |        |          |0 = TK6 polarity function Disabled.
 * |        |          |1 = TK6 polarity function Enabled.
 * |[15]    |POLEN7    |TK7 Polarity Function Enable Bit
 * |        |          |0 = TK7 polarity function Disabled.
 * |        |          |1 = TK7 polarity function Enabled.
 * |[16]    |POLEN8    |TK8 Polarity Function Enable Bit
 * |        |          |0 = TK8 polarity function Disabled.
 * |        |          |1 = TK8 polarity function Enabled.
 * |[17]    |POLEN9    |TK9 Polarity Function Enable Bit
 * |        |          |0 = TK9 polarity function Disabled.
 * |        |          |1 = TK9 polarity function Enabled.
 * |[18]    |POLEN10   |TK10 Polarity Function Enable Bit
 * |        |          |0 = TK10 polarity function Disabled.
 * |        |          |1 = TK10 polarity function Enabled.
 * |[19]    |POLEN11   |TK11 Polarity Function Enable Bit
 * |        |          |0 = TK11 polarity function Disabled.
 * |        |          |1 = TK11 polarity function Enabled.
 * |[20]    |POLEN12   |TK12 Polarity Function Enable Bit
 * |        |          |0 = TK12 polarity function Disabled.
 * |        |          |1 = TK12 polarity function Enabled.
 * |[21]    |POLEN13   |TK13 Polarity Function Enable Bit
 * |        |          |0 = TK13 polarity function Disabled.
 * |        |          |1 = TK13 polarity function Enabled.
 * |[22]    |POLEN14   |TK14 Polarity Function Enable Bit
 * |        |          |0 = TK14 polarity function Disabled.
 * |        |          |1 = TK14 polarity function Enabled.
 * |[23]    |POLEN15   |TK15 Polarity Function Enable Bit
 * |        |          |0 = TK15 polarity function Disabled.
 * |        |          |1 = TK15 polarity function Enabled.
 * |[24]    |POLEN16   |TK16 Polarity Function Enable Bit
 * |        |          |0 = TK16 polarity function Disabled.
 * |        |          |1 = TK16 polarity function Enabled.
 * |[31]    |POL_INIT  |Touch Key Sensing Initial Potential Control
 * |        |          |0 = Key pad is connected to Gnd before sensing.
 * |        |          |1 = Key pad is connected to AVDDH before sensing.
 * @var TK_T::STA
 * Offset: 0x28  Touch Key Status Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |BUSY      |Touch Key Busy (Read Only)
 * |        |          |0 = Key scan is complete or stopped.
 * |        |          |1 = Key scan is proceeding.
 * |[1]     |SCIF      |Touch Key Scan Complete Interrupt Flag (Read Only)
 * |        |          |This bit will be cleared by writing a "1" to this bit.
 * |        |          |0 = Key scan is proceeding and data is not ready for read.
 * |        |          |1 = Key scan is complete and data is ready for read in TKDATx registers.
 * |        |          |Note 1: The Touch Key interrupt asserts if SCIE bit of TK_INTEN register is set.
 * |        |          |Note 2: The Touch Key interrupt also asserts if STHIE bit of TK_INTEN register is set and any channel data value is greater/less than its threshold setting.
 * |        |          |Note 3: This bit will be cleared by writing a "1" to this bit.
 * |[6]     |TKIF      |Key Scan Interrupt Flag (Read Only)
 * |        |          |0 = No threshold control event with each Keys Scan.
 * |        |          |1 = Threshold control event occurs with each Keys Scan.
 * |        |          |Note: This bit is 1 while any one of TKIF0~TKIF17 is 1.
 * |[7]     |TKIF_ALL  |All Keys Scan Interrupt Flag
 * |        |          |0 = No threshold control event with All Keys Scan.
 * |        |          |1 = Threshold control event occurs with All Keys Scan.
 * |        |          |Note: This bit will be cleared by writing a "1" to this bit.
 * |[8]     |TKIF0     |TK0 Interrupt Flag (Read Only)
 * |        |          |0 = No threshold control event with TK0.
 * |        |          |1 = Threshold control event occurs with TK0.
 * |        |          |Note: This bit will be cleared by writing a "1" to this bit.
 * |[9]     |TKIF1     |TK1 Interrupt Flag (Read Only)
 * |        |          |0 = No threshold control event with TK1.
 * |        |          |1 = Threshold control event occurs with TK1.
 * |        |          |Note: This bit will be cleared by writing a "1" to this bit.
 * |[10]    |TKIF2     |TK2 Interrupt Flag (Read Only)
 * |        |          |This bit will be cleared by writing a "1" to this bit.
 * |        |          |0 = No threshold control event with TK2.
 * |        |          |1 = Threshold control event occurs with TK2.
 * |[11]    |TKIF3     |TK3 Interrupt Flag (Read Only)
 * |        |          |This bit will be cleared by writing a "1" to this bit.
 * |        |          |0 = No threshold control event with TK3.
 * |        |          |1 = Threshold control event occurs with TK3.
 * |[12]    |TKIF4     |TK4 Interrupt Flag (Read Only)
 * |        |          |This bit will be cleared by writing a "1" to this bit.
 * |        |          |0 = No threshold control event with TK4.
 * |        |          |1 = Threshold control event occurs with TK4.
 * |[13]    |TKIF5     |TK5 Interrupt Flag (Read Only)
 * |        |          |This bit will be cleared by writing a "1" to this bit.
 * |        |          |0 = No threshold control event with TK5.
 * |        |          |1 = Threshold control event occurs with TK5.
 * |[14]    |TKIF6     |TK6 Interrupt Flag (Read Only)
 * |        |          |This bit will be cleared by writing a "1" to this bit.
 * |        |          |0 = No threshold control event with TK6.
 * |        |          |1 = Threshold control event occurs with TK6.
 * |[15]    |TKIF7     |TK7 Interrupt Flag (Read Only)
 * |        |          |This bit will be cleared by writing a "1" to this bit.
 * |        |          |0 = No threshold control event with TK7.
 * |        |          |1 = Threshold control event occurs with TK7.
 * |        |          |Note: This bit will be cleared by writing a "1" to this bit.
 * |[16]    |TKIF8     |TK8 Interrupt Flag (Read Only)
 * |        |          |0 = No threshold control event with TK8.
 * |        |          |1 = Threshold control event occurs with TK8.
 * |        |          |Note: This bit will be cleared by writing a "1" to this bit.
 * |[17]    |TKIF9     |TK9 Interrupt Flag (Read Only)
 * |        |          |0 = No threshold control event with TK9.
 * |        |          |1 = Threshold control event occurs with TK9.
 * |        |          |Note: This bit will be cleared by writing a "1" to this bit.
 * |[18]    |TKIF10    |TK10 Interrupt Flag (Read Only)
 * |        |          |0 = No threshold control event with TK10.
 * |        |          |1 = Threshold control event occurs with TK10.
 * |        |          |Note: This bit will be cleared by writing a "1" to this bit.
 * |[19]    |TKIF11    |TK11 Interrupt Flag (Read Only)
 * |        |          |0 = No threshold control event with TK11.
 * |        |          |1 = Threshold control event occurs with TK11.
 * |        |          |Note: This bit will be cleared by writing a "1" to this bit.
 * |[20]    |TKIF12    |TK12 Interrupt Flag (Read Only)
 * |        |          |0 = No threshold control event with TK12.
 * |        |          |1 = Threshold control event occurs with TK12.
 * |        |          |Note: This bit will be cleared by writing a "1" to this bit.
 * |[21]    |TKIF13    |TK13 Interrupt Flag (Read Only)
 * |        |          |0 = No threshold control event with TK13.
 * |        |          |1 = Threshold control event occurs with TK13.
 * |        |          |Note: This bit will be cleared by writing a "1" to this bit.
 * |[22]    |TKIF14    |TK14 Interrupt Flag (Read Only)
 * |        |          |0 = No threshold control event with TK14.
 * |        |          |1 = Threshold control event occurs with TK14.
 * |        |          |Note: This bit will be cleared by writing a "1" to this bit.
 * |[23]    |TKIF15    |TK15 Interrupt Flag (Read Only)
 * |        |          |0 = No threshold control event with TK15.
 * |        |          |1 = Threshold control event occurs with TK15.
 * |        |          |Note: This bit will be cleared by writing a "1" to this bit.
 * |[24]    |TKIF16    |TK16 Interrupt Flag (Read Only)
 * |        |          |0 = No threshold control event with TK16.
 * |        |          |1 = Threshold control event occurs with TK16.
 * |        |          |Note: This bit will be cleared by writing a "1" to this bit.
 * @var TK_T::DAT0
 * Offset: 0x2C  Touch Key Data Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |TKDAT0    |TK0 Sensing Result Data (Read Only)
 * |        |          |This data is invalid if TK0SEN (TK_SCANC[0]) is "0" or TK0REN (TK_REFC[0]) is "1" except SCAN_ALL (TK_REFC[23]) is "1".
 * |[15:8]  |TKDAT1    |TK1 Sensing Result Data (Read Only)
 * |        |          |This data is invalid if TK1SEN (TK_SCANC[1]) is "0" or TK1REN (TK_REFC[1]) is "1".
 * |[23:16] |TKDAT2    |TK2 Sensing Result Data (Read Only)
 * |        |          |This data is invalid if TK2SEN (TK_SCANC[2]) is "0" or TK2REN (TK_REFC[2]) is "1".
 * |[31:24] |TKDAT3    |TK3 Sensing Result Data (Read Only)
 * |        |          |This data is invalid if TK3SEN (TK_SCANC[3]) is "0" or TK3REN (TK_REFC[3]) is "1".
 * @var TK_T::DAT1
 * Offset: 0x30  Touch Key Data Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |TKDAT4    |TK0 Sensing Result Data (Read Only)
 * |        |          |This data is invalid if TK4SEN (TK_SCANC[4]) is "0" or TK4REN (TK_REFC[4]) is "1".
 * |[15:8]  |TKDAT5    |TK5 Sensing Result Data (Read Only)
 * |        |          |This data is invalid if TK5SEN (TK_SCANC[5]) is "0" or TK5REN (TK_REFC[5]) is "1".
 * |[23:16] |TKDAT6    |TK6 Sensing Result Data (Read Only)
 * |        |          |This data is invalid if TK6SEN (TK_SCANC[6]) is "0" or TK6REN (TK_REFC[6]) is "1".
 * |[31:24] |TKDAT7    |TK7 Sensing Result Data (Read Only)
 * |        |          |This data is invalid if TK7SEN (TK_SCANC[7]) is "0" or TK7REN (TK_REFC[7]) is "1".
 * @var TK_T::DAT2
 * Offset: 0x34  Touch Key Data Register 2
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |TKDAT8    |TK8 Sensing Result Data (Read Only)
 * |        |          |This data is invalid if TK8SEN (TK_SCANC[8]) is "0" or TK8REN (TK_REFC[8]) is "1".
 * |[15:8]  |TKDAT9    |TK9 Sensing Result Data (Read Only)
 * |        |          |This data is invalid if TK9SEN (TK_SCANC[9]) is "0" or TK9REN (TK_REFC[9]) is "1".
 * |[23:16] |TKDAT10   |TK10 Sensing Result Data (Read Only)
 * |        |          |This data is invalid if TK10SEN (TK_SCANC[10]) is "0" or TK10REN (TK_REFC[10]) is "1".
 * |[31:24] |TKDAT11   |TK11 Sensing Result Data (Read Only)
 * |        |          |This data is invalid if TK11SEN (TK_SCANC[11]) is "0" or TK11REN (TK_REFC[11]) is "1".
 * @var TK_T::DAT3
 * Offset: 0x38  Touch Key Data Register 3
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |TKDAT12   |TK12 Sensing Result Data (Read Only)
 * |        |          |This data is invalid if TK12SEN (TK_SCANC[12]) is "0" or TK12REN (TK_REFC[12]) is "1".
 * |[15:8]  |TKDAT13   |TK13 Sensing Result Data (Read Only)
 * |        |          |This data is invalid if TK13SEN (TK_SCANC[13]) is "0" or TK13REN (TK_REFC[13]) is "1".
 * |[23:16] |TKDAT14   |TK14 Sensing Result Data (Read Only)
 * |        |          |This data is invalid if TK14SEN (TK_SCANC[14]) is "0" or TK14REN (TK_REFC[14]) is "1".
 * |[31:24] |TKDAT15   |TK15 Sensing Result Data (Read Only)
 * |        |          |This data is invalid if TK15SEN (TK_SCANC[15]) is "0" or TK15REN (TK_REFC[15]) is "1".
 * @var TK_T::DAT4
 * Offset: 0x3C  Touch Key Data Register 4
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |TKDAT16   |TK16 Sensing Result Data (Read Only)
 * |        |          |This data is invalid if TK16SEN (TK_SCANC[16]) is "0" or TK16REN (TK_REFC[16]) is "1".
 * |[15:8]  |TKDAT_ALL |All Keys Scan Sensing Result Data (Read Only)
 * |        |          |This data is invalid if SCAN_ALL (TK_REFC[23]) is "0".
 * @var TK_T::INTEN
 * Offset: 0x40  Touch Key Interrupt Enable Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |SCTHIE    |Touch Key Scan Complete with High Threshold Control Interrupt Enable Bit
 * |        |          |0 = Key scan complete with threshold control interrupt Disabled.
 * |        |          |1 = Key scan complete with threshold control interrupt Enabled.
 * |[1]     |SCIE      |Touch Key Scan Complete Interrupt Enable Bit
 * |        |          |0 = Key scan complete without threshold control interrupt Disabled.
 * |        |          |1 = Key scan complete without threshold control interrupt Enabled.
 * @var TK_T::THC01
 * Offset: 0x44  Touch Key TK0/TK1 Threshold Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[15:8]  |HTH0      |High Threshold of TK0
 * |        |          |High level for TK0 threshold control.
 * |[31:24] |HTH1      |High Threshold of TK1
 * |        |          |High level for TK1 threshold control.
 * @var TK_T::THC23
 * Offset: 0x48  Touch Key TK2/TK3 Threshold Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[15:8]  |HTH2      |High Threshold of TK2
 * |        |          |High level for TK2 threshold control.
 * |[31:24] |HTH3      |High Threshold of TK3
 * |        |          |High level for TK3 threshold control.
 * @var TK_T::THC45
 * Offset: 0x4C  Touch Key TK4/TK5 Threshold Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[15:8]  |HTH4      |High Threshold of TK4
 * |        |          |High level for TK4 threshold control.
 * |[31:24] |HTH5      |High Threshold of TK5
 * |        |          |High level for TK5 threshold control.
 * @var TK_T::THC67
 * Offset: 0x50  Touch Key TK6/TK7 Threshold Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[15:8]  |HTH6      |High Threshold of TK6
 * |        |          |High level for TK6 threshold control.
 * |[31:24] |HTH7      |High Threshold of TK7
 * |        |          |High level for TK7 threshold control.
 * @var TK_T::THC89
 * Offset: 0x54  Touch Key TK8/TK9 Threshold Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[15:8]  |HTH8      |High Threshold of TK8
 * |        |          |High level for TK8 threshold control.
 * |[31:24] |HTH9      |High Threshold of TK9
 * |        |          |High level for TK9 threshold control.
 * @var TK_T::THC1011
 * Offset: 0x58  Touch Key TK10/TK11 Threshold Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[15:8]  |HTH10     |High Threshold of TK10
 * |        |          |High level for TK10 threshold control.
 * |[31:24] |HTH11     |High Threshold of TK11
 * |        |          |High level for TK11 threshold control.
 * @var TK_T::THC1213
 * Offset: 0x5C  Touch Key TK12/TK13 Threshold Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[15:8]  |HTH12     |High Threshold of TK12
 * |        |          |High level for TK12 threshold control.
 * |[31:24] |HTH13     |High Threshold of TK13
 * |        |          |High level for TK13 threshold control.
 * @var TK_T::THC1415
 * Offset: 0x60  Touch Key TK14/TK15 Threshold Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[15:8]  |HTH14     |High Threshold of TK14
 * |        |          |High level for TK14 threshold control.
 * |[31:24] |HTH15     |High Threshold of TK15
 * |        |          |High level for TK15 threshold control.
 * @var TK_T::THC16
 * Offset: 0x64  Touch Key TK16 Threshold Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[15:8]  |HTH16     |High Threshold of TK16
 * |        |          |High level for TK16 threshold control.
 * |[31:24] |HTH_ALL   |High Threshold of ALL Keys Scan
 * |        |          |High level for All Keys Scan threshold control.
 * @var TK_T::REFCBD0
 * Offset: 0x68  Touch Key Reference Capacitor Bank Data Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |CBD0      |TK0 Capacitor Bank Data
 * |        |          |These bits are used for TK0 sensitivity adjustment. 
 * |[15:8]  |CBD1      |TK1 Capacitor Bank Data
 * |        |          |These bits are used for TK1 sensitivity adjustment. 
 * |[23:16] |CBD2      |TK2 Capacitor Bank Data
 * |        |          |These bits are used for TK2 sensitivity adjustment. 
 * |[31:24] |CBD3      |TK3 Capacitor Bank Data
 * |        |          |These bits are used for TK3 sensitivity adjustment. 
 * @var TK_T::REFCBD1
 * Offset: 0x6C  Touch Key Reference Capacitor Bank Data Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |CBD4      |TK4 Capacitor Bank Data
 * |        |          |These bits are used for TK4 sensitivity adjustment. 
 * |[15:8]  |CBD5      |TK5 Capacitor Bank Data
 * |        |          |These bits are used for TK5 sensitivity adjustment. 
 * |[23:16] |CBD6      |TK6 Capacitor Bank Data
 * |        |          |These bits are used for TK6 sensitivity adjustment. 
 * |[31:24] |CBD7      |TK7 Capacitor Bank Data
 * |        |          |These bits are used for TK7 sensitivity adjustment. 
 * @var TK_T::REFCBD2
 * Offset: 0x70  Touch Key Reference Capacitor Bank Data Register 2
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |CBD8      |TK8 Capacitor Bank Data
 * |        |          |These bits are used for TK8 sensitivity adjustment. 
 * |[15:8]  |CBD9      |TK9 Capacitor Bank Data
 * |        |          |These bits are used for TK9 sensitivity adjustment. 
 * |[23:16] |CBD10     |TK10 Capacitor Bank Data
 * |        |          |These bits are used for TK10 sensitivity adjustment. 
 * |[31:24] |CBD11     |TK11 Capacitor Bank Data
 * |        |          |These bits are used for TK11 sensitivity adjustment. 
 * @var TK_T::REFCBD3
 * Offset: 0x74  Touch Key Reference Capacitor Bank Data Register 3
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |CBD12     |TK12 Capacitor Bank Data
 * |        |          |These bits are used for TK12 sensitivity adjustment. 
 * |[15:8]  |CBD13     |TK13 Capacitor Bank Data
 * |        |          |These bits are used for TK13 sensitivity adjustment. 
 * |[23:16] |CBD14     |TK14 Capacitor Bank Data
 * |        |          |These bits are used for TK14 sensitivity adjustment. 
 * |[31:24] |CBD15     |TK15 Capacitor Bank Data
 * |        |          |These bits are used for TK15 sensitivity adjustment. 
 * @var TK_T::REFCBD4
 * Offset: 0x78  Touch Key Reference Capacitor Bank Data Register 4
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |CBD16     |TK16 Capacitor Bank Data
 * |        |          |These bits are used for TK16 sensitivity adjustment. 
 * |[15:8]  |CBD_ALL   |All Keys Scan Capacitor Bank Data
 * |        |          |These bits are used for All Keys Scan sensitivity adjustment. 
 * @var TK_T::SCANC1
 * Offset: 0x80  Touch Key Scan Control Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |TK17SEN   |TK17 Scan Enable Bit
 * |        |          |This bit is ignored if TK17REN (TK_REFC[17]) is "1".
 * |        |          |0 = TKDAT17 (TK_DAT5[7:0]) is invalid.
 * |        |          |1 = TK17 is always enabled for key scan. TKDAT17 (TK_DAT5[7:0]) is valid.
 * @var TK_T::REFC1
 * Offset: 0x84  Touch Key Reference Control Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |TK17REN   |TK17 Reference Enable Bit
 * |        |          |0 = TK17 is not reference.
 * |        |          |1 = TK17 is set as reference, and TKDAT17 (TK_DAT5[7:0]) is invalid.
 * @var TK_T::CCBD5
 * Offset: 0x88  Touch Key Complement Capacitor Bank Data Register 5
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |CCBD17    |TK17 Complement CB Data
 * |        |          |These bits are used for TK17 sensitivity adjustment. 
 * @var TK_T::IDLSC1
 * Offset: 0x9C  Touch Key Idle State Control Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[1:0]   |IDLS17    |TK17 Idle State Control
 * |        |          |These bits are ignored if both TK17SEN (TK_SCANC1[0]) and POLEN17 (TK_POLC1[0]) are "0" or TK17REN (TK_REFC1[0]) is "1".
 * |        |          |00 = TK17 connected to Gnd.
 * |        |          |01 = TK17 connected to AVDDH.
 * |        |          |10 = TK17 connected to VDD.
 * |        |          |11 = TK17 connected to VDD.
 * @var TK_T::POLSEL1
 * Offset: 0xA0  Touch Key Polarity Select Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[1:0]   |POL17     |TK17 Polarity Select
 * |        |          |These bits are ignored if POLEN17 (TK_POLC1[0]) is "0" or TK17REN (TK_REFC1[0]) is "1".
 * |        |          |00 = TK17 connected to Gnd.
 * |        |          |01 = TK17 connected to AVDDH.
 * |        |          |10 = TK17 connected to VDD.
 * |        |          |11 = TK17 connected to VDD.
 * @var TK_T::POLC1
 * Offset: 0xA4  Touch Key Polarity Control Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |POLEN17   |TK17 Polarity Function Enable Bit
 * |        |          |0 = TK17 polarity function Disabled.
 * |        |          |1 = TK17 polarity function Enabled.
 * @var TK_T::STA1
 * Offset: 0xA8  Touch Key Status Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |TKIF17    |TK17 Interrupt Flag (Read Only)
 * |        |          |This bit will be cleared by writing a "1" to this bit.
 * |        |          |0 = No threshold control event with TK17.
 * |        |          |1 = Threshold control event occurs with TK17.
 * @var TK_T::DAT5
 * Offset: 0xAC  Touch Key Data Register 5
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |TKDAT17   |TK17 Sensing Result Data (Read Only)
 * |        |          |This data is invalid if TK17SEN (TK_SCANC1[0]) is "0" or TK17REN (TK_REFC1[0]) is "1".
 * @var TK_T::THC17
 * Offset: 0xC4  Touch Key TK17 Threshold Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[15:8]  |HTH17     |High Threshold of TK17
 * |        |          |High level for TK17 threshold control.
 * @var TK_T::REFCBD5
 * Offset: 0xE8  Touch Key Reference Capacitor Bank Data Register 5
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[7:0]   |CBD17     |TK17 Capacitor Bank Data
 * |        |          |These bits are used for TK17 sensitivity adjustment. 
 * @var TK_T::EXTCBC
 * Offset: 0x100  Touch Key Extend Capacitor Bank Control Register
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[1:0]   |EXT_CBSEL |TK Extend Capacitor Bank Select
 * |        |          |TK capacitor bank data and reference capacitor bank data are 9 bits
 * |        |          |These bits are used to select how the 9 bits are generated.
 * |        |          |00 = CCBDx (TK_CCBDx[8n+7:8n]) and CBDx (TK_REFCBDx[8n+7:8n]) are valid, but EXT_CCBDx (TK_EXTCCBDx[0]) and EXT_CBDx (TK_REFCBDx[0]) are invalid
 * |        |          |The capacitor touch key sensing controller adds 1'b0 to the MSB of capacitor bank data and reference capacitor bank data, and the controller finally outputs 9 bits such as {1'b0, CCBDx} or {1'b0, CBDx}
 * |        |          |01 = CCBDx (TK_CCBDx[8n+7:8n]) and CBDx (TK_REFCBDx[8n+7:8n]) are valid, but EXT_CCBDx (TK_EXTCCBDx[0]) and EXT_CBDx (TK_REFCBDx[0]) are invalid
 * |        |          |The capacitor touch key sensing controller shifts the capacitor bank data and reference capacitor bank data one bit to the left, and the controller finally outputs 9 bits such as {CCBDx, 1'b0} or {CBDx, 1'b0}.
 * |        |          |10 = CCBDx (TK_CCBDx[8n+7:8n]), CBDx (TK_REFCBDx[8n+7:8n]), EXT_CCBDx (TK_EXTCCBDx[0]) and EXT_CBDx (TK_REFCBDx[0]) are valid
 * |        |          |The capacitor touch key sensing controller outputs 9 bits such as {EXT_CCBDx, CCBDx} or {EXT_CBDx, CBDx}.
 * |        |          |11 = Reserved.
 * |        |          |Note: The above parameter x is 0 to 17.
 * |        |          |Note: The above parameter n is 0 to 3.
 * @var TK_T::EXTCCBD0
 * Offset: 0x104  Touch Key Extend Complement Capacitor Bank Data Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |CCBD0     |TK0 Extend Complement CB Data
 * |        |          |These bits are used for TK0 sensitivity adjustment. 
 * |[8]     |CCBD1     |TK1 Extend Complement CB Data
 * |        |          |These bits are used for TK1 sensitivity adjustment. 
 * |[16]    |CCBD2     |TK2 Extend Complement CB Data
 * |        |          |These bits are used for TK2 sensitivity adjustment. 
 * |[24]    |CCBD3     |TK3 Extend Complement CB Data
 * |        |          |These bits are used for TK3 sensitivity adjustment. 
 * @var TK_T::EXTCCBD1
 * Offset: 0x108  Touch Key Extend Complement Capacitor Bank Data Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |CCBD4     |TK4 Extend Complement CB Data
 * |        |          |These bits are used for TK4 sensitivity adjustment. 
 * |[8]     |CCBD5     |TK5 Extend Complement CB Data
 * |        |          |These bits are used for TK5 sensitivity adjustment. 
 * |[16]    |CCBD6     |TK6 Extend Complement CB Data
 * |        |          |These bits are used for TK6 sensitivity adjustment. 
 * |[24]    |CCBD7     |TK7 Extend Complement CB Data
 * |        |          |These bits are used for TK7 sensitivity adjustment. 
 * @var TK_T::EXTCCBD2
 * Offset: 0x10C  Touch Key Extend Complement Capacitor Bank Data Register 2
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |CCBD8     |TK8 Extend Complement CB Data
 * |        |          |These bits are used for TK8 sensitivity adjustment. 
 * |[8]     |CCBD9     |TK9 Extend Complement CB Data
 * |        |          |These bits are used for TK9 sensitivity adjustment. 
 * |[16]    |CCBD10    |TK10 Extend Complement CB Data
 * |        |          |These bits are used for TK10 sensitivity adjustment. 
 * |[24]    |CCBD11    |TK11 Extend Complement CB Data
 * |        |          |These bits are used for TK11 sensitivity adjustment. 
 * @var TK_T::EXTCCBD3
 * Offset: 0x110  Touch Key Extend Complement Capacitor Bank Data Register 3
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |CCBD12    |TK12 Extend Complement CB Data
 * |        |          |These bits are used for TK12 sensitivity adjustment. 
 * |[8]     |CCBD13    |TK13 Extend Complement CB Data
 * |        |          |These bits are used for TK13 sensitivity adjustment. 
 * |[16]    |CCBD14    |TK14 Extend Complement CB Data
 * |        |          |These bits are used for TK14 sensitivity adjustment. 
 * |[24]    |CCBD15    |TK15 Extend Complement CB Data
 * |        |          |These bits are used for TK15 sensitivity adjustment. 
 * @var TK_T::EXTCCBD4
 * Offset: 0x114  Touch Key Extend Complement Capacitor Bank Data Register 4
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |CCBD16    |TK16 Extend Complement CB Data
 * |        |          |These bits are used for TK16 sensitivity adjustment. 
 * |[8]     |CCBDALL   |All Keys Extend Complement CB Data
 * |        |          |These bits are used for All Key Scan sensitivity adjustment. 
 * @var TK_T::EXTCCBD5
 * Offset: 0x118  Touch Key Extend Complement Capacitor Bank Data Register 5
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |CCBD17    |TK17 Extend Complement CB Data
 * |        |          |These bits are used for TK17 sensitivity adjustment. 
 * @var TK_T::EXTREFCBD0
 * Offset: 0x130  Touch Key Extend Reference Capacitor Bank Data Register 0
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |EXT_CBD0  |TK0 Extend Capacitor Bank Data
 * |        |          |These bits are used for TK0 sensitivity adjustment. 
 * |[8]     |EXT_CBD1  |TK1 Extend Capacitor Bank Data
 * |        |          |These bits are used for TK1 sensitivity adjustment. 
 * |[16]    |EXT_CBD2  |TK2 Extend Capacitor Bank Data
 * |        |          |These bits are used for TK2 sensitivity adjustment. 
 * |[24]    |EXT_CBD3  |TK3 Extend Capacitor Bank Data
 * |        |          |These bits are used for TK3 sensitivity adjustment. 
 * @var TK_T::EXTREFCBD1
 * Offset: 0x134  Touch Key Extend Reference Capacitor Bank Data Register 1
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |EXT_CBD4  |TK4 Extend Capacitor Bank Data
 * |        |          |These bits are used for TK4 sensitivity adjustment. 
 * |[8]     |EXT_CBD5  |TK5 Extend Capacitor Bank Data
 * |        |          |These bits are used for TK5 sensitivity adjustment. 
 * |[16]    |EXT_CBD6  |TK6 Extend Capacitor Bank Data
 * |        |          |These bits are used for TK6 sensitivity adjustment. 
 * |[24]    |EXT_CBD7  |TK7 Extend Capacitor Bank Data
 * |        |          |These bits are used for TK7 sensitivity adjustment. 
 * @var TK_T::EXTREFCBD2
 * Offset: 0x138  Touch Key Extend Reference Capacitor Bank Data Register 2
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |EXT_CBD8  |TK8 Extend Capacitor Bank Data
 * |        |          |These bits are used for TK8 sensitivity adjustment. 
 * |[8]     |EXT_CBD9  |TK9 Extend Capacitor Bank Data
 * |        |          |These bits are used for TK9 sensitivity adjustment. 
 * |[16]    |EXT_CBD10 |TK10 Extend Capacitor Bank Data
 * |        |          |These bits are used for TK10 sensitivity adjustment. 
 * |[24]    |EXT_CBD11 |TK11 Extend Capacitor Bank Data
 * |        |          |These bits are used for TK11 sensitivity adjustment. 
 * @var TK_T::EXTREFCBD3
 * Offset: 0x13C  Touch Key Extend Reference Capacitor Bank Data Register 3
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |EXT_CBD12 |TK12 Extend Capacitor Bank Data
 * |        |          |These bits are used for TK12 sensitivity adjustment. 
 * |[8]     |EXT_CBD13 |TK13 Extend Capacitor Bank Data
 * |        |          |These bits are used for TK13 sensitivity adjustment. 
 * |[16]    |EXT_CBD14 |TK14 Extend Capacitor Bank Data
 * |        |          |These bits are used for TK14 sensitivity adjustment. 
 * |[24]    |EXT_CBD15 |TK15 Extend Capacitor Bank Data
 * |        |          |These bits are used for TK15 sensitivity adjustment. 
 * @var TK_T::EXTREFCBD4
 * Offset: 0x140  Touch Key Extend Reference Capacitor Bank Data Register 4
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |EXT_CBD16 |TK16 Extend Capacitor Bank Data
 * |        |          |These bits are used for TK16 sensitivity adjustment. 
 * |[8]     |EXT_CBDALL|All Keys Extend Capacitor Bank Data
 * |        |          |These bits are used for All Keys Scan sensitivity adjustment. 
 * @var TK_T::EXTREFCBD5
 * Offset: 0x144  Touch Key Extend Reference Capacitor Bank Data Register 5
 * ---------------------------------------------------------------------------------------------------
 * |Bits    |Field     |Descriptions
 * | :----: | :----:   | :---- |
 * |[0]     |EXT_CBD17 |TK17 Extend Capacitor Bank Data
 * |        |          |These bits are used for TK17 sensitivity adjustment. 
 */
    __IO uint32_t SCANC;                 /*!< [0x0000] Touch Key Scan Control Register                                  */
    __IO uint32_t REFC;                  /*!< [0x0004] Touch Key Reference Control Register                             */
    __IO uint32_t CCBD0;                 /*!< [0x0008] Touch Key Complement Capacitor Bank Data Register 0              */
    __IO uint32_t CCBD1;                 /*!< [0x000c] Touch Key Complement Capacitor Bank Data Register 1              */
    __IO uint32_t CCBD2;                 /*!< [0x0010] Touch Key Complement Capacitor Bank Data Register 2              */
    __IO uint32_t CCBD3;                 /*!< [0x0014] Touch Key Complement Capacitor Bank Data Register 3              */
    __IO uint32_t CCBD4;                 /*!< [0x0018] Touch Key Complement Capacitor Bank Data Register 4              */
    __IO uint32_t IDLSC;                 /*!< [0x001c] Touch Key Idle State Control Register                            */
    __IO uint32_t POLSEL;                /*!< [0x0020] Touch Key Polarity Select Register                               */
    __IO uint32_t POLC;                  /*!< [0x0024] Touch Key Polarity Control Register                              */
    __IO uint32_t STA;                   /*!< [0x0028] Touch Key Status Register                                        */
    __I  uint32_t DAT0;                  /*!< [0x002c] Touch Key Data Register 0                                        */
    __I  uint32_t DAT1;                  /*!< [0x0030] Touch Key Data Register 1                                        */
    __I  uint32_t DAT2;                  /*!< [0x0034] Touch Key Data Register 2                                        */
    __I  uint32_t DAT3;                  /*!< [0x0038] Touch Key Data Register 3                                        */
    __I  uint32_t DAT4;                  /*!< [0x003c] Touch Key Data Register 4                                        */
    __IO uint32_t INTEN;                 /*!< [0x0040] Touch Key Interrupt Enable Register                              */
    __IO uint32_t THC01;                 /*!< [0x0044] Touch Key TK0/TK1 Threshold Control Register                     */
    __IO uint32_t THC23;                 /*!< [0x0048] Touch Key TK2/TK3 Threshold Control Register                     */
    __IO uint32_t THC45;                 /*!< [0x004c] Touch Key TK4/TK5 Threshold Control Register                     */
    __IO uint32_t THC67;                 /*!< [0x0050] Touch Key TK6/TK7 Threshold Control Register                     */
    __IO uint32_t THC89;                 /*!< [0x0054] Touch Key TK8/TK9 Threshold Control Register                     */
    __IO uint32_t THC1011;               /*!< [0x0058] Touch Key TK10/TK11 Threshold Control Register                   */
    __IO uint32_t THC1213;               /*!< [0x005c] Touch Key TK12/TK13 Threshold Control Register                   */
    __IO uint32_t THC1415;               /*!< [0x0060] Touch Key TK14/TK15 Threshold Control Register                   */
    __IO uint32_t THC16;                 /*!< [0x0064] Touch Key TK16 Threshold Control Register                        */
    __IO uint32_t REFCBD0;               /*!< [0x0068] Touch Key Reference Capacitor Bank Data Register 0               */
    __IO uint32_t REFCBD1;               /*!< [0x006c] Touch Key Reference Capacitor Bank Data Register 1               */
    __IO uint32_t REFCBD2;               /*!< [0x0070] Touch Key Reference Capacitor Bank Data Register 2               */
    __IO uint32_t REFCBD3;               /*!< [0x0074] Touch Key Reference Capacitor Bank Data Register 3               */
    __IO uint32_t REFCBD4;               /*!< [0x0078] Touch Key Reference Capacitor Bank Data Register 4               */
    __I  uint32_t RESERVE0[1];
    __IO uint32_t SCANC1;                /*!< [0x0080] Touch Key Scan Control Register 1                                */
    __IO uint32_t REFC1;                 /*!< [0x0084] Touch Key Reference Control Register 1                           */
    __IO uint32_t CCBD5;                 /*!< [0x0088] Touch Key Complement Capacitor Bank Data Register 5              */
    __I  uint32_t RESERVE1[4];
    __IO uint32_t IDLSC1;                /*!< [0x009c] Touch Key Idle State Control Register 1                          */
    __IO uint32_t POLSEL1;               /*!< [0x00a0] Touch Key Polarity Select Register 1                             */
    __IO uint32_t POLC1;                 /*!< [0x00a4] Touch Key Polarity Control Register 1                            */
    __IO uint32_t STA1;                  /*!< [0x00a8] Touch Key Status Register 1                                      */
    __I  uint32_t DAT5;                  /*!< [0x00ac] Touch Key Data Register 5                                        */
    __I  uint32_t RESERVE2[5];
    __IO uint32_t THC17;                 /*!< [0x00c4] Touch Key TK17 Threshold Control Register                        */
    __I  uint32_t RESERVE3[8];
    __IO uint32_t REFCBD5;               /*!< [0x00e8] Touch Key Reference Capacitor Bank Data Register 5               */
    __I  uint32_t RESERVE4[5];
    __IO uint32_t EXTCBC;                /*!< [0x0100] Touch Key Extend Capacitor Bank Control Register                 */
    __IO uint32_t EXTCCBD0;              /*!< [0x0104] Touch Key Extend Complement Capacitor Bank Data Register 0       */
    __IO uint32_t EXTCCBD1;              /*!< [0x0108] Touch Key Extend Complement Capacitor Bank Data Register 1       */
    __IO uint32_t EXTCCBD2;              /*!< [0x010c] Touch Key Extend Complement Capacitor Bank Data Register 2       */
    __IO uint32_t EXTCCBD3;              /*!< [0x0110] Touch Key Extend Complement Capacitor Bank Data Register 3       */
    __IO uint32_t EXTCCBD4;              /*!< [0x0114] Touch Key Extend Complement Capacitor Bank Data Register 4       */
    __IO uint32_t EXTCCBD5;              /*!< [0x0118] Touch Key Extend Complement Capacitor Bank Data Register 5       */
    __I  uint32_t RESERVE5[5];
    __IO uint32_t EXTREFCBD0;            /*!< [0x0130] Touch Key Extend Reference Capacitor Bank Data Register 0        */
    __IO uint32_t EXTREFCBD1;            /*!< [0x0134] Touch Key Extend Reference Capacitor Bank Data Register 1        */
    __IO uint32_t EXTREFCBD2;            /*!< [0x0138] Touch Key Extend Reference Capacitor Bank Data Register 2        */
    __IO uint32_t EXTREFCBD3;            /*!< [0x013c] Touch Key Extend Reference Capacitor Bank Data Register 3        */
    __IO uint32_t EXTREFCBD4;            /*!< [0x0140] Touch Key Extend Reference Capacitor Bank Data Register 4        */
    __IO uint32_t EXTREFCBD5;            /*!< [0x0144] Touch Key Extend Reference Capacitor Bank Data Register 5        */

} TK_T;

/**
    @addtogroup TK_CONST TK Bit Field Definition
    Constant Definitions for TK Controller
@{ */

#define TK_SCANC_TK0SEN_Pos              (0)                                               /*!< TK_T::SCANC: TK0SEN Position           */
#define TK_SCANC_TK0SEN_Msk              (0x1ul << TK_SCANC_TK0SEN_Pos)                    /*!< TK_T::SCANC: TK0SEN Mask               */

#define TK_SCANC_TK1SEN_Pos              (1)                                               /*!< TK_T::SCANC: TK1SEN Position           */
#define TK_SCANC_TK1SEN_Msk              (0x1ul << TK_SCANC_TK1SEN_Pos)                    /*!< TK_T::SCANC: TK1SEN Mask               */

#define TK_SCANC_TK2SEN_Pos              (2)                                               /*!< TK_T::SCANC: TK2SEN Position           */
#define TK_SCANC_TK2SEN_Msk              (0x1ul << TK_SCANC_TK2SEN_Pos)                    /*!< TK_T::SCANC: TK2SEN Mask               */

#define TK_SCANC_TK3SEN_Pos              (3)                                               /*!< TK_T::SCANC: TK3SEN Position           */
#define TK_SCANC_TK3SEN_Msk              (0x1ul << TK_SCANC_TK3SEN_Pos)                    /*!< TK_T::SCANC: TK3SEN Mask               */

#define TK_SCANC_TK4SEN_Pos              (4)                                               /*!< TK_T::SCANC: TK4SEN Position           */
#define TK_SCANC_TK4SEN_Msk              (0x1ul << TK_SCANC_TK4SEN_Pos)                    /*!< TK_T::SCANC: TK4SEN Mask               */

#define TK_SCANC_TK5SEN_Pos              (5)                                               /*!< TK_T::SCANC: TK5SEN Position           */
#define TK_SCANC_TK5SEN_Msk              (0x1ul << TK_SCANC_TK5SEN_Pos)                    /*!< TK_T::SCANC: TK5SEN Mask               */

#define TK_SCANC_TK6SEN_Pos              (6)                                               /*!< TK_T::SCANC: TK6SEN Position           */
#define TK_SCANC_TK6SEN_Msk              (0x1ul << TK_SCANC_TK6SEN_Pos)                    /*!< TK_T::SCANC: TK6SEN Mask               */

#define TK_SCANC_TK7SEN_Pos              (7)                                               /*!< TK_T::SCANC: TK7SEN Position           */
#define TK_SCANC_TK7SEN_Msk              (0x1ul << TK_SCANC_TK7SEN_Pos)                    /*!< TK_T::SCANC: TK7SEN Mask               */

#define TK_SCANC_TK8SEN_Pos              (8)                                               /*!< TK_T::SCANC: TK8SEN Position           */
#define TK_SCANC_TK8SEN_Msk              (0x1ul << TK_SCANC_TK8SEN_Pos)                    /*!< TK_T::SCANC: TK8SEN Mask               */

#define TK_SCANC_TK9SEN_Pos              (9)                                               /*!< TK_T::SCANC: TK9SEN Position           */
#define TK_SCANC_TK9SEN_Msk              (0x1ul << TK_SCANC_TK9SEN_Pos)                    /*!< TK_T::SCANC: TK9SEN Mask               */

#define TK_SCANC_TK10SEN_Pos             (10)                                              /*!< TK_T::SCANC: TK10SEN Position          */
#define TK_SCANC_TK10SEN_Msk             (0x1ul << TK_SCANC_TK10SEN_Pos)                   /*!< TK_T::SCANC: TK10SEN Mask              */

#define TK_SCANC_TK11SEN_Pos             (11)                                              /*!< TK_T::SCANC: TK11SEN Position          */
#define TK_SCANC_TK11SEN_Msk             (0x1ul << TK_SCANC_TK11SEN_Pos)                   /*!< TK_T::SCANC: TK11SEN Mask              */

#define TK_SCANC_TK12SEN_Pos             (12)                                              /*!< TK_T::SCANC: TK12SEN Position          */
#define TK_SCANC_TK12SEN_Msk             (0x1ul << TK_SCANC_TK12SEN_Pos)                   /*!< TK_T::SCANC: TK12SEN Mask              */

#define TK_SCANC_TK13SEN_Pos             (13)                                              /*!< TK_T::SCANC: TK13SEN Position          */
#define TK_SCANC_TK13SEN_Msk             (0x1ul << TK_SCANC_TK13SEN_Pos)                   /*!< TK_T::SCANC: TK13SEN Mask              */

#define TK_SCANC_TK14SEN_Pos             (14)                                              /*!< TK_T::SCANC: TK14SEN Position          */
#define TK_SCANC_TK14SEN_Msk             (0x1ul << TK_SCANC_TK14SEN_Pos)                   /*!< TK_T::SCANC: TK14SEN Mask              */

#define TK_SCANC_TK15SEN_Pos             (15)                                              /*!< TK_T::SCANC: TK15SEN Position          */
#define TK_SCANC_TK15SEN_Msk             (0x1ul << TK_SCANC_TK15SEN_Pos)                   /*!< TK_T::SCANC: TK15SEN Mask              */

#define TK_SCANC_TK16SEN_Pos             (16)                                              /*!< TK_T::SCANC: TK16SEN Position          */
#define TK_SCANC_TK16SEN_Msk             (0x1ul << TK_SCANC_TK16SEN_Pos)                   /*!< TK_T::SCANC: TK16SEN Mask              */

#define TK_SCANC_AVDDH_S_Pos             (20)                                              /*!< TK_T::SCANC: AVDDH_S Position          */
#define TK_SCANC_AVDDH_S_Msk             (0xful << TK_SCANC_AVDDH_S_Pos)                   /*!< TK_T::SCANC: AVDDH_S Mask              */

#define TK_SCANC_SCAN_Pos                (24)                                              /*!< TK_T::SCANC: SCAN Position             */
#define TK_SCANC_SCAN_Msk                (0x1ul << TK_SCANC_SCAN_Pos)                      /*!< TK_T::SCANC: SCAN Mask                 */

#define TK_SCANC_TRG_EN_Pos              (25)                                              /*!< TK_T::SCANC: TRG_EN Position           */
#define TK_SCANC_TRG_EN_Msk              (0xful << TK_SCANC_TRG_EN_Pos)                    /*!< TK_T::SCANC: TRG_EN Mask               */

#define TK_SCANC_TK_EN_Pos               (31)                                              /*!< TK_T::SCANC: TK_EN Position            */
#define TK_SCANC_TK_EN_Msk               (0x1ul << TK_SCANC_TK_EN_Pos)                     /*!< TK_T::SCANC: TK_EN Mask                */

#define TK_REFC_TK0REN_Pos               (0)                                               /*!< TK_T::REFC: TK0REN Position            */
#define TK_REFC_TK0REN_Msk               (0x1ul << TK_REFC_TK0REN_Pos)                     /*!< TK_T::REFC: TK0REN Mask                */

#define TK_REFC_TK1REN_Pos               (1)                                               /*!< TK_T::REFC: TK1REN Position            */
#define TK_REFC_TK1REN_Msk               (0x1ul << TK_REFC_TK1REN_Pos)                     /*!< TK_T::REFC: TK1REN Mask                */

#define TK_REFC_TK2REN_Pos               (2)                                               /*!< TK_T::REFC: TK2REN Position            */
#define TK_REFC_TK2REN_Msk               (0x1ul << TK_REFC_TK2REN_Pos)                     /*!< TK_T::REFC: TK2REN Mask                */

#define TK_REFC_TK3REN_Pos               (3)                                               /*!< TK_T::REFC: TK3REN Position            */
#define TK_REFC_TK3REN_Msk               (0x1ul << TK_REFC_TK3REN_Pos)                     /*!< TK_T::REFC: TK3REN Mask                */

#define TK_REFC_TK4REN_Pos               (4)                                               /*!< TK_T::REFC: TK4REN Position            */
#define TK_REFC_TK4REN_Msk               (0x1ul << TK_REFC_TK4REN_Pos)                     /*!< TK_T::REFC: TK4REN Mask                */

#define TK_REFC_TK5REN_Pos               (5)                                               /*!< TK_T::REFC: TK5REN Position            */
#define TK_REFC_TK5REN_Msk               (0x1ul << TK_REFC_TK5REN_Pos)                     /*!< TK_T::REFC: TK5REN Mask                */

#define TK_REFC_TK6REN_Pos               (6)                                               /*!< TK_T::REFC: TK6REN Position            */
#define TK_REFC_TK6REN_Msk               (0x1ul << TK_REFC_TK6REN_Pos)                     /*!< TK_T::REFC: TK6REN Mask                */

#define TK_REFC_TK7REN_Pos               (7)                                               /*!< TK_T::REFC: TK7REN Position            */
#define TK_REFC_TK7REN_Msk               (0x1ul << TK_REFC_TK7REN_Pos)                     /*!< TK_T::REFC: TK7REN Mask                */

#define TK_REFC_TK8REN_Pos               (8)                                               /*!< TK_T::REFC: TK8REN Position            */
#define TK_REFC_TK8REN_Msk               (0x1ul << TK_REFC_TK8REN_Pos)                     /*!< TK_T::REFC: TK8REN Mask                */

#define TK_REFC_TK9REN_Pos               (9)                                               /*!< TK_T::REFC: TK9REN Position            */
#define TK_REFC_TK9REN_Msk               (0x1ul << TK_REFC_TK9REN_Pos)                     /*!< TK_T::REFC: TK9REN Mask                */

#define TK_REFC_TK10REN_Pos              (10)                                              /*!< TK_T::REFC: TK10REN Position           */
#define TK_REFC_TK10REN_Msk              (0x1ul << TK_REFC_TK10REN_Pos)                    /*!< TK_T::REFC: TK10REN Mask               */

#define TK_REFC_TK11REN_Pos              (11)                                              /*!< TK_T::REFC: TK11REN Position           */
#define TK_REFC_TK11REN_Msk              (0x1ul << TK_REFC_TK11REN_Pos)                    /*!< TK_T::REFC: TK11REN Mask               */

#define TK_REFC_TK12REN_Pos              (12)                                              /*!< TK_T::REFC: TK12REN Position           */
#define TK_REFC_TK12REN_Msk              (0x1ul << TK_REFC_TK12REN_Pos)                    /*!< TK_T::REFC: TK12REN Mask               */

#define TK_REFC_TK13REN_Pos              (13)                                              /*!< TK_T::REFC: TK13REN Position           */
#define TK_REFC_TK13REN_Msk              (0x1ul << TK_REFC_TK13REN_Pos)                    /*!< TK_T::REFC: TK13REN Mask               */

#define TK_REFC_TK14REN_Pos              (14)                                              /*!< TK_T::REFC: TK14REN Position           */
#define TK_REFC_TK14REN_Msk              (0x1ul << TK_REFC_TK14REN_Pos)                    /*!< TK_T::REFC: TK14REN Mask               */

#define TK_REFC_TK15REN_Pos              (15)                                              /*!< TK_T::REFC: TK15REN Position           */
#define TK_REFC_TK15REN_Msk              (0x1ul << TK_REFC_TK15REN_Pos)                    /*!< TK_T::REFC: TK15REN Mask               */

#define TK_REFC_TK16REN_Pos              (16)                                              /*!< TK_T::REFC: TK16REN Position           */
#define TK_REFC_TK16REN_Msk              (0x1ul << TK_REFC_TK16REN_Pos)                    /*!< TK_T::REFC: TK16REN Mask               */

#define TK_REFC_SCAN_ALL_Pos             (23)                                              /*!< TK_T::REFC: SCAN_ALL Position          */
#define TK_REFC_SCAN_ALL_Msk             (0x1ul << TK_REFC_SCAN_ALL_Pos)                   /*!< TK_T::REFC: SCAN_ALL Mask              */

#define TK_REFC_SENSET_Pos               (24)                                              /*!< TK_T::REFC: SENSET Position            */
#define TK_REFC_SENSET_Msk               (0x7ul << TK_REFC_SENSET_Pos)                     /*!< TK_T::REFC: SENSET Mask                */

#define TK_REFC_PULSET_Pos               (28)                                              /*!< TK_T::REFC: PULSET Position            */
#define TK_REFC_PULSET_Msk               (0x7ul << TK_REFC_PULSET_Pos)                     /*!< TK_T::REFC: PULSET Mask                */

#define TK_CCBD0_CCBD0_Pos               (0)                                               /*!< TK_T::CCBD0: CCBD0 Position            */
#define TK_CCBD0_CCBD0_Msk               (0xfful << TK_CCBD0_CCBD0_Pos)                    /*!< TK_T::CCBD0: CCBD0 Mask                */

#define TK_CCBD0_CCBD1_Pos               (8)                                               /*!< TK_T::CCBD0: CCBD1 Position            */
#define TK_CCBD0_CCBD1_Msk               (0xfful << TK_CCBD0_CCBD1_Pos)                    /*!< TK_T::CCBD0: CCBD1 Mask                */

#define TK_CCBD0_CCBD2_Pos               (16)                                              /*!< TK_T::CCBD0: CCBD2 Position            */
#define TK_CCBD0_CCBD2_Msk               (0xfful << TK_CCBD0_CCBD2_Pos)                    /*!< TK_T::CCBD0: CCBD2 Mask                */

#define TK_CCBD0_CCBD3_Pos               (24)                                              /*!< TK_T::CCBD0: CCBD3 Position            */
#define TK_CCBD0_CCBD3_Msk               (0xfful << TK_CCBD0_CCBD3_Pos)                    /*!< TK_T::CCBD0: CCBD3 Mask                */

#define TK_CCBD1_CCBD4_Pos               (0)                                               /*!< TK_T::CCBD1: CCBD4 Position            */
#define TK_CCBD1_CCBD4_Msk               (0xfful << TK_CCBD1_CCBD4_Pos)                    /*!< TK_T::CCBD1: CCBD4 Mask                */

#define TK_CCBD1_CCBD5_Pos               (8)                                               /*!< TK_T::CCBD1: CCBD5 Position            */
#define TK_CCBD1_CCBD5_Msk               (0xfful << TK_CCBD1_CCBD5_Pos)                    /*!< TK_T::CCBD1: CCBD5 Mask                */

#define TK_CCBD1_CCBD6_Pos               (16)                                              /*!< TK_T::CCBD1: CCBD6 Position            */
#define TK_CCBD1_CCBD6_Msk               (0xfful << TK_CCBD1_CCBD6_Pos)                    /*!< TK_T::CCBD1: CCBD6 Mask                */

#define TK_CCBD1_CCBD7_Pos               (24)                                              /*!< TK_T::CCBD1: CCBD7 Position            */
#define TK_CCBD1_CCBD7_Msk               (0xfful << TK_CCBD1_CCBD7_Pos)                    /*!< TK_T::CCBD1: CCBD7 Mask                */

#define TK_CCBD2_CCBD8_Pos               (0)                                               /*!< TK_T::CCBD2: CCBD8 Position            */
#define TK_CCBD2_CCBD8_Msk               (0xfful << TK_CCBD2_CCBD8_Pos)                    /*!< TK_T::CCBD2: CCBD8 Mask                */

#define TK_CCBD2_CCBD9_Pos               (8)                                               /*!< TK_T::CCBD2: CCBD9 Position            */
#define TK_CCBD2_CCBD9_Msk               (0xfful << TK_CCBD2_CCBD9_Pos)                    /*!< TK_T::CCBD2: CCBD9 Mask                */

#define TK_CCBD2_CCBD10_Pos              (16)                                              /*!< TK_T::CCBD2: CCBD10 Position           */
#define TK_CCBD2_CCBD10_Msk              (0xfful << TK_CCBD2_CCBD10_Pos)                   /*!< TK_T::CCBD2: CCBD10 Mask               */

#define TK_CCBD2_CCBD11_Pos              (24)                                              /*!< TK_T::CCBD2: CCBD11 Position           */
#define TK_CCBD2_CCBD11_Msk              (0xfful << TK_CCBD2_CCBD11_Pos)                   /*!< TK_T::CCBD2: CCBD11 Mask               */

#define TK_CCBD3_CCBD12_Pos              (0)                                               /*!< TK_T::CCBD3: CCBD12 Position           */
#define TK_CCBD3_CCBD12_Msk              (0xfful << TK_CCBD3_CCBD12_Pos)                   /*!< TK_T::CCBD3: CCBD12 Mask               */

#define TK_CCBD3_CCBD13_Pos              (8)                                               /*!< TK_T::CCBD3: CCBD13 Position           */
#define TK_CCBD3_CCBD13_Msk              (0xfful << TK_CCBD3_CCBD13_Pos)                   /*!< TK_T::CCBD3: CCBD13 Mask               */

#define TK_CCBD3_CCBD14_Pos              (16)                                              /*!< TK_T::CCBD3: CCBD14 Position           */
#define TK_CCBD3_CCBD14_Msk              (0xfful << TK_CCBD3_CCBD14_Pos)                   /*!< TK_T::CCBD3: CCBD14 Mask               */

#define TK_CCBD3_CCBD15_Pos              (24)                                              /*!< TK_T::CCBD3: CCBD15 Position           */
#define TK_CCBD3_CCBD15_Msk              (0xfful << TK_CCBD3_CCBD15_Pos)                   /*!< TK_T::CCBD3: CCBD15 Mask               */

#define TK_CCBD4_CCBD16_Pos              (0)                                               /*!< TK_T::CCBD4: CCBD16 Position           */
#define TK_CCBD4_CCBD16_Msk              (0xfful << TK_CCBD4_CCBD16_Pos)                   /*!< TK_T::CCBD4: CCBD16 Mask               */

#define TK_CCBD4_CCBD_ALL_Pos            (8)                                               /*!< TK_T::CCBD4: CCBD_ALL Position         */
#define TK_CCBD4_CCBD_ALL_Msk            (0xfful << TK_CCBD4_CCBD_ALL_Pos)                 /*!< TK_T::CCBD4: CCBD_ALL Mask             */

#define TK_IDLSC_IDLS0_Pos               (0)                                               /*!< TK_T::IDLSC: IDLS0 Position            */
#define TK_IDLSC_IDLS0_Msk               (0x3ul << TK_IDLSC_IDLS0_Pos)                     /*!< TK_T::IDLSC: IDLS0 Mask                */

#define TK_IDLSC_IDLS1_Pos               (2)                                               /*!< TK_T::IDLSC: IDLS1 Position            */
#define TK_IDLSC_IDLS1_Msk               (0x3ul << TK_IDLSC_IDLS1_Pos)                     /*!< TK_T::IDLSC: IDLS1 Mask                */

#define TK_IDLSC_IDLS2_Pos               (4)                                               /*!< TK_T::IDLSC: IDLS2 Position            */
#define TK_IDLSC_IDLS2_Msk               (0x3ul << TK_IDLSC_IDLS2_Pos)                     /*!< TK_T::IDLSC: IDLS2 Mask                */

#define TK_IDLSC_IDLS3_Pos               (6)                                               /*!< TK_T::IDLSC: IDLS3 Position            */
#define TK_IDLSC_IDLS3_Msk               (0x3ul << TK_IDLSC_IDLS3_Pos)                     /*!< TK_T::IDLSC: IDLS3 Mask                */

#define TK_IDLSC_IDLS4_Pos               (8)                                               /*!< TK_T::IDLSC: IDLS4 Position            */
#define TK_IDLSC_IDLS4_Msk               (0x3ul << TK_IDLSC_IDLS4_Pos)                     /*!< TK_T::IDLSC: IDLS4 Mask                */

#define TK_IDLSC_IDLS5_Pos               (10)                                              /*!< TK_T::IDLSC: IDLS5 Position            */
#define TK_IDLSC_IDLS5_Msk               (0x3ul << TK_IDLSC_IDLS5_Pos)                     /*!< TK_T::IDLSC: IDLS5 Mask                */

#define TK_IDLSC_IDLS6_Pos               (12)                                              /*!< TK_T::IDLSC: IDLS6 Position            */
#define TK_IDLSC_IDLS6_Msk               (0x3ul << TK_IDLSC_IDLS6_Pos)                     /*!< TK_T::IDLSC: IDLS6 Mask                */

#define TK_IDLSC_IDLS7_Pos               (14)                                              /*!< TK_T::IDLSC: IDLS7 Position            */
#define TK_IDLSC_IDLS7_Msk               (0x3ul << TK_IDLSC_IDLS7_Pos)                     /*!< TK_T::IDLSC: IDLS7 Mask                */

#define TK_IDLSC_IDLS8_Pos               (16)                                              /*!< TK_T::IDLSC: IDLS8 Position            */
#define TK_IDLSC_IDLS8_Msk               (0x3ul << TK_IDLSC_IDLS8_Pos)                     /*!< TK_T::IDLSC: IDLS8 Mask                */

#define TK_IDLSC_IDLS9_Pos               (18)                                              /*!< TK_T::IDLSC: IDLS9 Position            */
#define TK_IDLSC_IDLS9_Msk               (0x3ul << TK_IDLSC_IDLS9_Pos)                     /*!< TK_T::IDLSC: IDLS9 Mask                */

#define TK_IDLSC_IDLS10_Pos              (20)                                              /*!< TK_T::IDLSC: IDLS10 Position           */
#define TK_IDLSC_IDLS10_Msk              (0x3ul << TK_IDLSC_IDLS10_Pos)                    /*!< TK_T::IDLSC: IDLS10 Mask               */

#define TK_IDLSC_IDLS11_Pos              (22)                                              /*!< TK_T::IDLSC: IDLS11 Position           */
#define TK_IDLSC_IDLS11_Msk              (0x3ul << TK_IDLSC_IDLS11_Pos)                    /*!< TK_T::IDLSC: IDLS11 Mask               */

#define TK_IDLSC_IDLS12_Pos              (24)                                              /*!< TK_T::IDLSC: IDLS12 Position           */
#define TK_IDLSC_IDLS12_Msk              (0x3ul << TK_IDLSC_IDLS12_Pos)                    /*!< TK_T::IDLSC: IDLS12 Mask               */

#define TK_IDLSC_IDLS13_Pos              (26)                                              /*!< TK_T::IDLSC: IDLS13 Position           */
#define TK_IDLSC_IDLS13_Msk              (0x3ul << TK_IDLSC_IDLS13_Pos)                    /*!< TK_T::IDLSC: IDLS13 Mask               */

#define TK_IDLSC_IDLS14_Pos              (28)                                              /*!< TK_T::IDLSC: IDLS14 Position           */
#define TK_IDLSC_IDLS14_Msk              (0x3ul << TK_IDLSC_IDLS14_Pos)                    /*!< TK_T::IDLSC: IDLS14 Mask               */

#define TK_IDLSC_IDLS15_Pos              (30)                                              /*!< TK_T::IDLSC: IDLS15 Position           */
#define TK_IDLSC_IDLS15_Msk              (0x3ul << TK_IDLSC_IDLS15_Pos)                    /*!< TK_T::IDLSC: IDLS15 Mask               */

#define TK_POLSEL_POL0_Pos               (0)                                               /*!< TK_T::POLSEL: POL0 Position            */
#define TK_POLSEL_POL0_Msk               (0x3ul << TK_POLSEL_POL0_Pos)                     /*!< TK_T::POLSEL: POL0 Mask                */

#define TK_POLSEL_POL1_Pos               (2)                                               /*!< TK_T::POLSEL: POL1 Position            */
#define TK_POLSEL_POL1_Msk               (0x3ul << TK_POLSEL_POL1_Pos)                     /*!< TK_T::POLSEL: POL1 Mask                */

#define TK_POLSEL_POL2_Pos               (4)                                               /*!< TK_T::POLSEL: POL2 Position            */
#define TK_POLSEL_POL2_Msk               (0x3ul << TK_POLSEL_POL2_Pos)                     /*!< TK_T::POLSEL: POL2 Mask                */

#define TK_POLSEL_POL3_Pos               (6)                                               /*!< TK_T::POLSEL: POL3 Position            */
#define TK_POLSEL_POL3_Msk               (0x3ul << TK_POLSEL_POL3_Pos)                     /*!< TK_T::POLSEL: POL3 Mask                */

#define TK_POLSEL_POL4_Pos               (8)                                               /*!< TK_T::POLSEL: POL4 Position            */
#define TK_POLSEL_POL4_Msk               (0x3ul << TK_POLSEL_POL4_Pos)                     /*!< TK_T::POLSEL: POL4 Mask                */

#define TK_POLSEL_POL5_Pos               (10)                                              /*!< TK_T::POLSEL: POL5 Position            */
#define TK_POLSEL_POL5_Msk               (0x3ul << TK_POLSEL_POL5_Pos)                     /*!< TK_T::POLSEL: POL5 Mask                */

#define TK_POLSEL_POL6_Pos               (12)                                              /*!< TK_T::POLSEL: POL6 Position            */
#define TK_POLSEL_POL6_Msk               (0x3ul << TK_POLSEL_POL6_Pos)                     /*!< TK_T::POLSEL: POL6 Mask                */

#define TK_POLSEL_POL7_Pos               (14)                                              /*!< TK_T::POLSEL: POL7 Position            */
#define TK_POLSEL_POL7_Msk               (0x3ul << TK_POLSEL_POL7_Pos)                     /*!< TK_T::POLSEL: POL7 Mask                */

#define TK_POLSEL_POL8_Pos               (16)                                              /*!< TK_T::POLSEL: POL8 Position            */
#define TK_POLSEL_POL8_Msk               (0x3ul << TK_POLSEL_POL8_Pos)                     /*!< TK_T::POLSEL: POL8 Mask                */

#define TK_POLSEL_POL9_Pos               (18)                                              /*!< TK_T::POLSEL: POL9 Position            */
#define TK_POLSEL_POL9_Msk               (0x3ul << TK_POLSEL_POL9_Pos)                     /*!< TK_T::POLSEL: POL9 Mask                */

#define TK_POLSEL_POL10_Pos              (20)                                              /*!< TK_T::POLSEL: POL10 Position           */
#define TK_POLSEL_POL10_Msk              (0x3ul << TK_POLSEL_POL10_Pos)                    /*!< TK_T::POLSEL: POL10 Mask               */

#define TK_POLSEL_POL11_Pos              (22)                                              /*!< TK_T::POLSEL: POL11 Position           */
#define TK_POLSEL_POL11_Msk              (0x3ul << TK_POLSEL_POL11_Pos)                    /*!< TK_T::POLSEL: POL11 Mask               */

#define TK_POLSEL_POL12_Pos              (24)                                              /*!< TK_T::POLSEL: POL12 Position           */
#define TK_POLSEL_POL12_Msk              (0x3ul << TK_POLSEL_POL12_Pos)                    /*!< TK_T::POLSEL: POL12 Mask               */

#define TK_POLSEL_POL13_Pos              (26)                                              /*!< TK_T::POLSEL: POL13 Position           */
#define TK_POLSEL_POL13_Msk              (0x3ul << TK_POLSEL_POL13_Pos)                    /*!< TK_T::POLSEL: POL13 Mask               */

#define TK_POLSEL_POL14_Pos              (28)                                              /*!< TK_T::POLSEL: POL14 Position           */
#define TK_POLSEL_POL14_Msk              (0x3ul << TK_POLSEL_POL14_Pos)                    /*!< TK_T::POLSEL: POL14 Mask               */

#define TK_POLSEL_POL15_Pos              (30)                                              /*!< TK_T::POLSEL: POL15 Position           */
#define TK_POLSEL_POL15_Msk              (0x3ul << TK_POLSEL_POL15_Pos)                    /*!< TK_T::POLSEL: POL15 Mask               */

#define TK_POLC_IDLS16_Pos               (0)                                               /*!< TK_T::POLC: IDLS16 Position            */
#define TK_POLC_IDLS16_Msk               (0x3ul << TK_POLC_IDLS16_Pos)                     /*!< TK_T::POLC: IDLS16 Mask                */

#define TK_POLC_POL16_Pos                (2)                                               /*!< TK_T::POLC: POL16 Position             */
#define TK_POLC_POL16_Msk                (0x3ul << TK_POLC_POL16_Pos)                      /*!< TK_T::POLC: POL16 Mask                 */

#define TK_POLC_POL_CAP_Pos              (4)                                               /*!< TK_T::POLC: POL_CAP Position           */
#define TK_POLC_POL_CAP_Msk              (0x3ul << TK_POLC_POL_CAP_Pos)                    /*!< TK_T::POLC: POL_CAP Mask               */

#define TK_POLC_POLEN0_Pos               (8)                                               /*!< TK_T::POLC: POLEN0 Position            */
#define TK_POLC_POLEN0_Msk               (0x1ul << TK_POLC_POLEN0_Pos)                     /*!< TK_T::POLC: POLEN0 Mask                */

#define TK_POLC_POLEN1_Pos               (9)                                               /*!< TK_T::POLC: POLEN1 Position            */
#define TK_POLC_POLEN1_Msk               (0x1ul << TK_POLC_POLEN1_Pos)                     /*!< TK_T::POLC: POLEN1 Mask                */

#define TK_POLC_POLEN2_Pos               (10)                                              /*!< TK_T::POLC: POLEN2 Position            */
#define TK_POLC_POLEN2_Msk               (0x1ul << TK_POLC_POLEN2_Pos)                     /*!< TK_T::POLC: POLEN2 Mask                */

#define TK_POLC_POLEN3_Pos               (11)                                              /*!< TK_T::POLC: POLEN3 Position            */
#define TK_POLC_POLEN3_Msk               (0x1ul << TK_POLC_POLEN3_Pos)                     /*!< TK_T::POLC: POLEN3 Mask                */

#define TK_POLC_POLEN4_Pos               (12)                                              /*!< TK_T::POLC: POLEN4 Position            */
#define TK_POLC_POLEN4_Msk               (0x1ul << TK_POLC_POLEN4_Pos)                     /*!< TK_T::POLC: POLEN4 Mask                */

#define TK_POLC_POLEN5_Pos               (13)                                              /*!< TK_T::POLC: POLEN5 Position            */
#define TK_POLC_POLEN5_Msk               (0x1ul << TK_POLC_POLEN5_Pos)                     /*!< TK_T::POLC: POLEN5 Mask                */

#define TK_POLC_POLEN6_Pos               (14)                                              /*!< TK_T::POLC: POLEN6 Position            */
#define TK_POLC_POLEN6_Msk               (0x1ul << TK_POLC_POLEN6_Pos)                     /*!< TK_T::POLC: POLEN6 Mask                */

#define TK_POLC_POLEN7_Pos               (15)                                              /*!< TK_T::POLC: POLEN7 Position            */
#define TK_POLC_POLEN7_Msk               (0x1ul << TK_POLC_POLEN7_Pos)                     /*!< TK_T::POLC: POLEN7 Mask                */

#define TK_POLC_POLEN8_Pos               (16)                                              /*!< TK_T::POLC: POLEN8 Position            */
#define TK_POLC_POLEN8_Msk               (0x1ul << TK_POLC_POLEN8_Pos)                     /*!< TK_T::POLC: POLEN8 Mask                */

#define TK_POLC_POLEN9_Pos               (17)                                              /*!< TK_T::POLC: POLEN9 Position            */
#define TK_POLC_POLEN9_Msk               (0x1ul << TK_POLC_POLEN9_Pos)                     /*!< TK_T::POLC: POLEN9 Mask                */

#define TK_POLC_POLEN10_Pos              (18)                                              /*!< TK_T::POLC: POLEN10 Position           */
#define TK_POLC_POLEN10_Msk              (0x1ul << TK_POLC_POLEN10_Pos)                    /*!< TK_T::POLC: POLEN10 Mask               */

#define TK_POLC_POLEN11_Pos              (19)                                              /*!< TK_T::POLC: POLEN11 Position           */
#define TK_POLC_POLEN11_Msk              (0x1ul << TK_POLC_POLEN11_Pos)                    /*!< TK_T::POLC: POLEN11 Mask               */

#define TK_POLC_POLEN12_Pos              (20)                                              /*!< TK_T::POLC: POLEN12 Position           */
#define TK_POLC_POLEN12_Msk              (0x1ul << TK_POLC_POLEN12_Pos)                    /*!< TK_T::POLC: POLEN12 Mask               */

#define TK_POLC_POLEN13_Pos              (21)                                              /*!< TK_T::POLC: POLEN13 Position           */
#define TK_POLC_POLEN13_Msk              (0x1ul << TK_POLC_POLEN13_Pos)                    /*!< TK_T::POLC: POLEN13 Mask               */

#define TK_POLC_POLEN14_Pos              (22)                                              /*!< TK_T::POLC: POLEN14 Position           */
#define TK_POLC_POLEN14_Msk              (0x1ul << TK_POLC_POLEN14_Pos)                    /*!< TK_T::POLC: POLEN14 Mask               */

#define TK_POLC_POLEN15_Pos              (23)                                              /*!< TK_T::POLC: POLEN15 Position           */
#define TK_POLC_POLEN15_Msk              (0x1ul << TK_POLC_POLEN15_Pos)                    /*!< TK_T::POLC: POLEN15 Mask               */

#define TK_POLC_POLEN16_Pos              (24)                                              /*!< TK_T::POLC: POLEN16 Position           */
#define TK_POLC_POLEN16_Msk              (0x1ul << TK_POLC_POLEN16_Pos)                    /*!< TK_T::POLC: POLEN16 Mask               */

#define TK_POLC_POL_INIT_Pos             (31)                                              /*!< TK_T::POLC: POL_INIT Position          */
#define TK_POLC_POL_INIT_Msk             (0x1ul << TK_POLC_POL_INIT_Pos)                   /*!< TK_T::POLC: POL_INIT Mask              */

#define TK_STA_BUSY_Pos                  (0)                                               /*!< TK_T::STA: BUSY Position               */
#define TK_STA_BUSY_Msk                  (0x1ul << TK_STA_BUSY_Pos)                        /*!< TK_T::STA: BUSY Mask                   */

#define TK_STA_SCIF_Pos                  (1)                                               /*!< TK_T::STA: SCIF Position               */
#define TK_STA_SCIF_Msk                  (0x1ul << TK_STA_SCIF_Pos)                        /*!< TK_T::STA: SCIF Mask                   */

#define TK_STA_TKIF_Pos                  (6)                                               /*!< TK_T::STA: TKIF Position               */
#define TK_STA_TKIF_Msk                  (0x1ul << TK_STA_TKIF_Pos)                        /*!< TK_T::STA: TKIF Mask                   */

#define TK_STA_TKIF_ALL_Pos              (7)                                               /*!< TK_T::STA: TKIF_ALL Position           */
#define TK_STA_TKIF_ALL_Msk              (0x1ul << TK_STA_TKIF_ALL_Pos)                    /*!< TK_T::STA: TKIF_ALL Mask               */

#define TK_STA_TKIF0_Pos                 (8)                                               /*!< TK_T::STA: TKIF0 Position              */
#define TK_STA_TKIF0_Msk                 (0x1ul << TK_STA_TKIF0_Pos)                       /*!< TK_T::STA: TKIF0 Mask                  */

#define TK_STA_TKIF1_Pos                 (9)                                               /*!< TK_T::STA: TKIF1 Position              */
#define TK_STA_TKIF1_Msk                 (0x1ul << TK_STA_TKIF1_Pos)                       /*!< TK_T::STA: TKIF1 Mask                  */

#define TK_STA_TKIF2_Pos                 (10)                                              /*!< TK_T::STA: TKIF2 Position              */
#define TK_STA_TKIF2_Msk                 (0x1ul << TK_STA_TKIF2_Pos)                       /*!< TK_T::STA: TKIF2 Mask                  */

#define TK_STA_TKIF3_Pos                 (11)                                              /*!< TK_T::STA: TKIF3 Position              */
#define TK_STA_TKIF3_Msk                 (0x1ul << TK_STA_TKIF3_Pos)                       /*!< TK_T::STA: TKIF3 Mask                  */

#define TK_STA_TKIF4_Pos                 (12)                                              /*!< TK_T::STA: TKIF4 Position              */
#define TK_STA_TKIF4_Msk                 (0x1ul << TK_STA_TKIF4_Pos)                       /*!< TK_T::STA: TKIF4 Mask                  */

#define TK_STA_TKIF5_Pos                 (13)                                              /*!< TK_T::STA: TKIF5 Position              */
#define TK_STA_TKIF5_Msk                 (0x1ul << TK_STA_TKIF5_Pos)                       /*!< TK_T::STA: TKIF5 Mask                  */

#define TK_STA_TKIF6_Pos                 (14)                                              /*!< TK_T::STA: TKIF6 Position              */
#define TK_STA_TKIF6_Msk                 (0x1ul << TK_STA_TKIF6_Pos)                       /*!< TK_T::STA: TKIF6 Mask                  */

#define TK_STA_TKIF7_Pos                 (15)                                              /*!< TK_T::STA: TKIF7 Position              */
#define TK_STA_TKIF7_Msk                 (0x1ul << TK_STA_TKIF7_Pos)                       /*!< TK_T::STA: TKIF7 Mask                  */

#define TK_STA_TKIF8_Pos                 (16)                                              /*!< TK_T::STA: TKIF8 Position              */
#define TK_STA_TKIF8_Msk                 (0x1ul << TK_STA_TKIF8_Pos)                       /*!< TK_T::STA: TKIF8 Mask                  */

#define TK_STA_TKIF9_Pos                 (17)                                              /*!< TK_T::STA: TKIF9 Position              */
#define TK_STA_TKIF9_Msk                 (0x1ul << TK_STA_TKIF9_Pos)                       /*!< TK_T::STA: TKIF9 Mask                  */

#define TK_STA_TKIF10_Pos                (18)                                              /*!< TK_T::STA: TKIF10 Position             */
#define TK_STA_TKIF10_Msk                (0x1ul << TK_STA_TKIF10_Pos)                      /*!< TK_T::STA: TKIF10 Mask                 */

#define TK_STA_TKIF11_Pos                (19)                                              /*!< TK_T::STA: TKIF11 Position             */
#define TK_STA_TKIF11_Msk                (0x1ul << TK_STA_TKIF11_Pos)                      /*!< TK_T::STA: TKIF11 Mask                 */

#define TK_STA_TKIF12_Pos                (20)                                              /*!< TK_T::STA: TKIF12 Position             */
#define TK_STA_TKIF12_Msk                (0x1ul << TK_STA_TKIF12_Pos)                      /*!< TK_T::STA: TKIF12 Mask                 */

#define TK_STA_TKIF13_Pos                (21)                                              /*!< TK_T::STA: TKIF13 Position             */
#define TK_STA_TKIF13_Msk                (0x1ul << TK_STA_TKIF13_Pos)                      /*!< TK_T::STA: TKIF13 Mask                 */

#define TK_STA_TKIF14_Pos                (22)                                              /*!< TK_T::STA: TKIF14 Position             */
#define TK_STA_TKIF14_Msk                (0x1ul << TK_STA_TKIF14_Pos)                      /*!< TK_T::STA: TKIF14 Mask                 */

#define TK_STA_TKIF15_Pos                (23)                                              /*!< TK_T::STA: TKIF15 Position             */
#define TK_STA_TKIF15_Msk                (0x1ul << TK_STA_TKIF15_Pos)                      /*!< TK_T::STA: TKIF15 Mask                 */

#define TK_STA_TKIF16_Pos                (24)                                              /*!< TK_T::STA: TKIF16 Position             */
#define TK_STA_TKIF16_Msk                (0x1ul << TK_STA_TKIF16_Pos)                      /*!< TK_T::STA: TKIF16 Mask                 */

#define TK_DAT0_TKDAT0_Pos               (0)                                               /*!< TK_T::DAT0: TKDAT0 Position            */
#define TK_DAT0_TKDAT0_Msk               (0xfful << TK_DAT0_TKDAT0_Pos)                    /*!< TK_T::DAT0: TKDAT0 Mask                */

#define TK_DAT0_TKDAT1_Pos               (8)                                               /*!< TK_T::DAT0: TKDAT1 Position            */
#define TK_DAT0_TKDAT1_Msk               (0xfful << TK_DAT0_TKDAT1_Pos)                    /*!< TK_T::DAT0: TKDAT1 Mask                */

#define TK_DAT0_TKDAT2_Pos               (16)                                              /*!< TK_T::DAT0: TKDAT2 Position            */
#define TK_DAT0_TKDAT2_Msk               (0xfful << TK_DAT0_TKDAT2_Pos)                    /*!< TK_T::DAT0: TKDAT2 Mask                */

#define TK_DAT0_TKDAT3_Pos               (24)                                              /*!< TK_T::DAT0: TKDAT3 Position            */
#define TK_DAT0_TKDAT3_Msk               (0xfful << TK_DAT0_TKDAT3_Pos)                    /*!< TK_T::DAT0: TKDAT3 Mask                */

#define TK_DAT1_TKDAT4_Pos               (0)                                               /*!< TK_T::DAT1: TKDAT4 Position            */
#define TK_DAT1_TKDAT4_Msk               (0xfful << TK_DAT1_TKDAT4_Pos)                    /*!< TK_T::DAT1: TKDAT4 Mask                */

#define TK_DAT1_TKDAT5_Pos               (8)                                               /*!< TK_T::DAT1: TKDAT5 Position            */
#define TK_DAT1_TKDAT5_Msk               (0xfful << TK_DAT1_TKDAT5_Pos)                    /*!< TK_T::DAT1: TKDAT5 Mask                */

#define TK_DAT1_TKDAT6_Pos               (16)                                              /*!< TK_T::DAT1: TKDAT6 Position            */
#define TK_DAT1_TKDAT6_Msk               (0xfful << TK_DAT1_TKDAT6_Pos)                    /*!< TK_T::DAT1: TKDAT6 Mask                */

#define TK_DAT1_TKDAT7_Pos               (24)                                              /*!< TK_T::DAT1: TKDAT7 Position            */
#define TK_DAT1_TKDAT7_Msk               (0xfful << TK_DAT1_TKDAT7_Pos)                    /*!< TK_T::DAT1: TKDAT7 Mask                */

#define TK_DAT2_TKDAT8_Pos               (0)                                               /*!< TK_T::DAT2: TKDAT8 Position            */
#define TK_DAT2_TKDAT8_Msk               (0xfful << TK_DAT2_TKDAT8_Pos)                    /*!< TK_T::DAT2: TKDAT8 Mask                */

#define TK_DAT2_TKDAT9_Pos               (8)                                               /*!< TK_T::DAT2: TKDAT9 Position            */
#define TK_DAT2_TKDAT9_Msk               (0xfful << TK_DAT2_TKDAT9_Pos)                    /*!< TK_T::DAT2: TKDAT9 Mask                */

#define TK_DAT2_TKDAT10_Pos              (16)                                              /*!< TK_T::DAT2: TKDAT10 Position           */
#define TK_DAT2_TKDAT10_Msk              (0xfful << TK_DAT2_TKDAT10_Pos)                   /*!< TK_T::DAT2: TKDAT10 Mask               */

#define TK_DAT2_TKDAT11_Pos              (24)                                              /*!< TK_T::DAT2: TKDAT11 Position           */
#define TK_DAT2_TKDAT11_Msk              (0xfful << TK_DAT2_TKDAT11_Pos)                   /*!< TK_T::DAT2: TKDAT11 Mask               */

#define TK_DAT3_TKDAT12_Pos              (0)                                               /*!< TK_T::DAT3: TKDAT12 Position           */
#define TK_DAT3_TKDAT12_Msk              (0xfful << TK_DAT3_TKDAT12_Pos)                   /*!< TK_T::DAT3: TKDAT12 Mask               */

#define TK_DAT3_TKDAT13_Pos              (8)                                               /*!< TK_T::DAT3: TKDAT13 Position           */
#define TK_DAT3_TKDAT13_Msk              (0xfful << TK_DAT3_TKDAT13_Pos)                   /*!< TK_T::DAT3: TKDAT13 Mask               */

#define TK_DAT3_TKDAT14_Pos              (16)                                              /*!< TK_T::DAT3: TKDAT14 Position           */
#define TK_DAT3_TKDAT14_Msk              (0xfful << TK_DAT3_TKDAT14_Pos)                   /*!< TK_T::DAT3: TKDAT14 Mask               */

#define TK_DAT3_TKDAT15_Pos              (24)                                              /*!< TK_T::DAT3: TKDAT15 Position           */
#define TK_DAT3_TKDAT15_Msk              (0xfful << TK_DAT3_TKDAT15_Pos)                   /*!< TK_T::DAT3: TKDAT15 Mask               */

#define TK_DAT4_TKDAT16_Pos              (0)                                               /*!< TK_T::DAT4: TKDAT16 Position           */
#define TK_DAT4_TKDAT16_Msk              (0xfful << TK_DAT4_TKDAT16_Pos)                   /*!< TK_T::DAT4: TKDAT16 Mask               */

#define TK_DAT4_TKDAT_ALL_Pos            (8)                                               /*!< TK_T::DAT4: TKDAT_ALL Position         */
#define TK_DAT4_TKDAT_ALL_Msk            (0xfful << TK_DAT4_TKDAT_ALL_Pos)                 /*!< TK_T::DAT4: TKDAT_ALL Mask             */

#define TK_INTEN_SCTHIE_Pos              (0)                                               /*!< TK_T::INTEN: SCTHIE Position           */
#define TK_INTEN_SCTHIE_Msk              (0x1ul << TK_INTEN_SCTHIE_Pos)                    /*!< TK_T::INTEN: SCTHIE Mask               */

#define TK_INTEN_SCIE_Pos                (1)                                               /*!< TK_T::INTEN: SCIE Position             */
#define TK_INTEN_SCIE_Msk                (0x1ul << TK_INTEN_SCIE_Pos)                      /*!< TK_T::INTEN: SCIE Mask                 */

#define TK_THC01_HTH0_Pos                (8)                                               /*!< TK_T::THC01: HTH0 Position             */
#define TK_THC01_HTH0_Msk                (0xfful << TK_THC01_HTH0_Pos)                     /*!< TK_T::THC01: HTH0 Mask                 */

#define TK_THC01_HTH1_Pos                (24)                                              /*!< TK_T::THC01: HTH1 Position             */
#define TK_THC01_HTH1_Msk                (0xfful << TK_THC01_HTH1_Pos)                     /*!< TK_T::THC01: HTH1 Mask                 */

#define TK_THC23_HTH2_Pos                (8)                                               /*!< TK_T::THC23: HTH2 Position             */
#define TK_THC23_HTH2_Msk                (0xfful << TK_THC23_HTH2_Pos)                     /*!< TK_T::THC23: HTH2 Mask                 */

#define TK_THC23_HTH3_Pos                (24)                                              /*!< TK_T::THC23: HTH3 Position             */
#define TK_THC23_HTH3_Msk                (0xfful << TK_THC23_HTH3_Pos)                     /*!< TK_T::THC23: HTH3 Mask                 */

#define TK_THC45_HTH4_Pos                (8)                                               /*!< TK_T::THC45: HTH4 Position             */
#define TK_THC45_HTH4_Msk                (0xfful << TK_THC45_HTH4_Pos)                     /*!< TK_T::THC45: HTH4 Mask                 */

#define TK_THC45_HTH5_Pos                (24)                                              /*!< TK_T::THC45: HTH5 Position             */
#define TK_THC45_HTH5_Msk                (0xfful << TK_THC45_HTH5_Pos)                     /*!< TK_T::THC45: HTH5 Mask                 */

#define TK_THC67_HTH6_Pos                (8)                                               /*!< TK_T::THC67: HTH6 Position             */
#define TK_THC67_HTH6_Msk                (0xfful << TK_THC67_HTH6_Pos)                     /*!< TK_T::THC67: HTH6 Mask                 */

#define TK_THC67_HTH7_Pos                (24)                                              /*!< TK_T::THC67: HTH7 Position             */
#define TK_THC67_HTH7_Msk                (0xfful << TK_THC67_HTH7_Pos)                     /*!< TK_T::THC67: HTH7 Mask                 */

#define TK_THC89_HTH8_Pos                (8)                                               /*!< TK_T::THC89: HTH8 Position             */
#define TK_THC89_HTH8_Msk                (0xfful << TK_THC89_HTH8_Pos)                     /*!< TK_T::THC89: HTH8 Mask                 */

#define TK_THC89_HTH9_Pos                (24)                                              /*!< TK_T::THC89: HTH9 Position             */
#define TK_THC89_HTH9_Msk                (0xfful << TK_THC89_HTH9_Pos)                     /*!< TK_T::THC89: HTH9 Mask                 */

#define TK_THC1011_HTH10_Pos             (8)                                               /*!< TK_T::THC1011: HTH10 Position          */
#define TK_THC1011_HTH10_Msk             (0xfful << TK_THC1011_HTH10_Pos)                  /*!< TK_T::THC1011: HTH10 Mask              */

#define TK_THC1011_HTH11_Pos             (24)                                              /*!< TK_T::THC1011: HTH11 Position          */
#define TK_THC1011_HTH11_Msk             (0xfful << TK_THC1011_HTH11_Pos)                  /*!< TK_T::THC1011: HTH11 Mask              */

#define TK_THC1213_HTH12_Pos             (8)                                               /*!< TK_T::THC1213: HTH12 Position          */
#define TK_THC1213_HTH12_Msk             (0xfful << TK_THC1213_HTH12_Pos)                  /*!< TK_T::THC1213: HTH12 Mask              */

#define TK_THC1213_HTH13_Pos             (24)                                              /*!< TK_T::THC1213: HTH13 Position          */
#define TK_THC1213_HTH13_Msk             (0xfful << TK_THC1213_HTH13_Pos)                  /*!< TK_T::THC1213: HTH13 Mask              */

#define TK_THC1415_HTH14_Pos             (8)                                               /*!< TK_T::THC1415: HTH14 Position          */
#define TK_THC1415_HTH14_Msk             (0xfful << TK_THC1415_HTH14_Pos)                  /*!< TK_T::THC1415: HTH14 Mask              */

#define TK_THC1415_HTH15_Pos             (24)                                              /*!< TK_T::THC1415: HTH15 Position          */
#define TK_THC1415_HTH15_Msk             (0xfful << TK_THC1415_HTH15_Pos)                  /*!< TK_T::THC1415: HTH15 Mask              */

#define TK_THC16_HTH16_Pos               (8)                                               /*!< TK_T::THC16: HTH16 Position            */
#define TK_THC16_HTH16_Msk               (0xfful << TK_THC16_HTH16_Pos)                    /*!< TK_T::THC16: HTH16 Mask                */

#define TK_THC16_HTH_ALL_Pos             (24)                                              /*!< TK_T::THC16: HTH_ALL Position          */
#define TK_THC16_HTH_ALL_Msk             (0xfful << TK_THC16_HTH_ALL_Pos)                  /*!< TK_T::THC16: HTH_ALL Mask              */

#define TK_REFCBD0_CBD0_Pos              (0)                                               /*!< TK_T::REFCBD0: CBD0 Position           */
#define TK_REFCBD0_CBD0_Msk              (0xfful << TK_REFCBD0_CBD0_Pos)                   /*!< TK_T::REFCBD0: CBD0 Mask               */

#define TK_REFCBD0_CBD1_Pos              (8)                                               /*!< TK_T::REFCBD0: CBD1 Position           */
#define TK_REFCBD0_CBD1_Msk              (0xfful << TK_REFCBD0_CBD1_Pos)                   /*!< TK_T::REFCBD0: CBD1 Mask               */

#define TK_REFCBD0_CBD2_Pos              (16)                                              /*!< TK_T::REFCBD0: CBD2 Position           */
#define TK_REFCBD0_CBD2_Msk              (0xfful << TK_REFCBD0_CBD2_Pos)                   /*!< TK_T::REFCBD0: CBD2 Mask               */

#define TK_REFCBD0_CBD3_Pos              (24)                                              /*!< TK_T::REFCBD0: CBD3 Position           */
#define TK_REFCBD0_CBD3_Msk              (0xfful << TK_REFCBD0_CBD3_Pos)                   /*!< TK_T::REFCBD0: CBD3 Mask               */

#define TK_REFCBD1_CBD4_Pos              (0)                                               /*!< TK_T::REFCBD1: CBD4 Position           */
#define TK_REFCBD1_CBD4_Msk              (0xfful << TK_REFCBD1_CBD4_Pos)                   /*!< TK_T::REFCBD1: CBD4 Mask               */

#define TK_REFCBD1_CBD5_Pos              (8)                                               /*!< TK_T::REFCBD1: CBD5 Position           */
#define TK_REFCBD1_CBD5_Msk              (0xfful << TK_REFCBD1_CBD5_Pos)                   /*!< TK_T::REFCBD1: CBD5 Mask               */

#define TK_REFCBD1_CBD6_Pos              (16)                                              /*!< TK_T::REFCBD1: CBD6 Position           */
#define TK_REFCBD1_CBD6_Msk              (0xfful << TK_REFCBD1_CBD6_Pos)                   /*!< TK_T::REFCBD1: CBD6 Mask               */

#define TK_REFCBD1_CBD7_Pos              (24)                                              /*!< TK_T::REFCBD1: CBD7 Position           */
#define TK_REFCBD1_CBD7_Msk              (0xfful << TK_REFCBD1_CBD7_Pos)                   /*!< TK_T::REFCBD1: CBD7 Mask               */

#define TK_REFCBD2_CBD8_Pos              (0)                                               /*!< TK_T::REFCBD2: CBD8 Position           */
#define TK_REFCBD2_CBD8_Msk              (0xfful << TK_REFCBD2_CBD8_Pos)                   /*!< TK_T::REFCBD2: CBD8 Mask               */

#define TK_REFCBD2_CBD9_Pos              (8)                                               /*!< TK_T::REFCBD2: CBD9 Position           */
#define TK_REFCBD2_CBD9_Msk              (0xfful << TK_REFCBD2_CBD9_Pos)                   /*!< TK_T::REFCBD2: CBD9 Mask               */

#define TK_REFCBD2_CBD10_Pos             (16)                                              /*!< TK_T::REFCBD2: CBD10 Position          */
#define TK_REFCBD2_CBD10_Msk             (0xfful << TK_REFCBD2_CBD10_Pos)                  /*!< TK_T::REFCBD2: CBD10 Mask              */

#define TK_REFCBD2_CBD11_Pos             (24)                                              /*!< TK_T::REFCBD2: CBD11 Position          */
#define TK_REFCBD2_CBD11_Msk             (0xfful << TK_REFCBD2_CBD11_Pos)                  /*!< TK_T::REFCBD2: CBD11 Mask              */

#define TK_REFCBD3_CBD12_Pos             (0)                                               /*!< TK_T::REFCBD3: CBD12 Position          */
#define TK_REFCBD3_CBD12_Msk             (0xfful << TK_REFCBD3_CBD12_Pos)                  /*!< TK_T::REFCBD3: CBD12 Mask              */

#define TK_REFCBD3_CBD13_Pos             (8)                                               /*!< TK_T::REFCBD3: CBD13 Position          */
#define TK_REFCBD3_CBD13_Msk             (0xfful << TK_REFCBD3_CBD13_Pos)                  /*!< TK_T::REFCBD3: CBD13 Mask              */

#define TK_REFCBD3_CBD14_Pos             (16)                                              /*!< TK_T::REFCBD3: CBD14 Position          */
#define TK_REFCBD3_CBD14_Msk             (0xfful << TK_REFCBD3_CBD14_Pos)                  /*!< TK_T::REFCBD3: CBD14 Mask              */

#define TK_REFCBD3_CBD15_Pos             (24)                                              /*!< TK_T::REFCBD3: CBD15 Position          */
#define TK_REFCBD3_CBD15_Msk             (0xfful << TK_REFCBD3_CBD15_Pos)                  /*!< TK_T::REFCBD3: CBD15 Mask              */

#define TK_REFCBD4_CBD16_Pos             (0)                                               /*!< TK_T::REFCBD4: CBD16 Position          */
#define TK_REFCBD4_CBD16_Msk             (0xfful << TK_REFCBD4_CBD16_Pos)                  /*!< TK_T::REFCBD4: CBD16 Mask              */

#define TK_REFCBD4_CBD_ALL_Pos           (8)                                               /*!< TK_T::REFCBD4: CBD_ALL Position        */
#define TK_REFCBD4_CBD_ALL_Msk           (0xfful << TK_REFCBD4_CBD_ALL_Pos)                /*!< TK_T::REFCBD4: CBD_ALL Mask            */

#define TK_SCANC1_TK17SEN_Pos            (0)                                               /*!< TK_T::SCANC1: TK17SEN Position         */
#define TK_SCANC1_TK17SEN_Msk            (0x1ul << TK_SCANC1_TK17SEN_Pos)                  /*!< TK_T::SCANC1: TK17SEN Mask             */

#define TK_REFC1_TK17REN_Pos             (0)                                               /*!< TK_T::REFC1: TK17REN Position          */
#define TK_REFC1_TK17REN_Msk             (0x1ul << TK_REFC1_TK17REN_Pos)                   /*!< TK_T::REFC1: TK17REN Mask              */

#define TK_CCBD5_CCBD17_Pos              (0)                                               /*!< TK_T::CCBD5: CCBD17 Position           */
#define TK_CCBD5_CCBD17_Msk              (0xfful << TK_CCBD5_CCBD17_Pos)                   /*!< TK_T::CCBD5: CCBD17 Mask               */

#define TK_IDLSC1_IDLS17_Pos             (0)                                               /*!< TK_T::IDLSC1: IDLS17 Position          */
#define TK_IDLSC1_IDLS17_Msk             (0x3ul << TK_IDLSC1_IDLS17_Pos)                   /*!< TK_T::IDLSC1: IDLS17 Mask              */

#define TK_POLSEL1_POL17_Pos             (0)                                               /*!< TK_T::POLSEL1: POL17 Position          */
#define TK_POLSEL1_POL17_Msk             (0x3ul << TK_POLSEL1_POL17_Pos)                   /*!< TK_T::POLSEL1: POL17 Mask              */

#define TK_POLC1_POLEN17_Pos             (0)                                               /*!< TK_T::POLC1: POLEN17 Position          */
#define TK_POLC1_POLEN17_Msk             (0x1ul << TK_POLC1_POLEN17_Pos)                   /*!< TK_T::POLC1: POLEN17 Mask              */

#define TK_STA1_TKIF17_Pos               (0)                                               /*!< TK_T::STA1: TKIF17 Position            */
#define TK_STA1_TKIF17_Msk               (0x1ul << TK_STA1_TKIF17_Pos)                     /*!< TK_T::STA1: TKIF17 Mask                */

#define TK_DAT5_TKDAT17_Pos              (0)                                               /*!< TK_T::DAT5: TKDAT17 Position           */
#define TK_DAT5_TKDAT17_Msk              (0xfful << TK_DAT5_TKDAT17_Pos)                   /*!< TK_T::DAT5: TKDAT17 Mask               */

#define TK_THC17_HTH17_Pos               (8)                                               /*!< TK_T::THC17: HTH17 Position            */
#define TK_THC17_HTH17_Msk               (0xfful << TK_THC17_HTH17_Pos)                    /*!< TK_T::THC17: HTH17 Mask                */

#define TK_REFCBD5_CBD17_Pos             (0)                                               /*!< TK_T::REFCBD5: CBD17 Position          */
#define TK_REFCBD5_CBD17_Msk             (0xfful << TK_REFCBD5_CBD17_Pos)                  /*!< TK_T::REFCBD5: CBD17 Mask              */

#define TK_EXTCBC_EXT_CBSEL_Pos          (0)                                               /*!< TK_T::EXTCBC: EXT_CBSEL Position       */
#define TK_EXTCBC_EXT_CBSEL_Msk          (0x3ul << TK_EXTCBC_EXT_CBSEL_Pos)                /*!< TK_T::EXTCBC: EXT_CBSEL Mask           */

#define TK_EXTCCBD0_CCBD0_Pos            (0)                                               /*!< TK_T::EXTCCBD0: CCBD0 Position         */
#define TK_EXTCCBD0_CCBD0_Msk            (0x1ul << TK_EXTCCBD0_CCBD0_Pos)                  /*!< TK_T::EXTCCBD0: CCBD0 Mask             */

#define TK_EXTCCBD0_CCBD1_Pos            (8)                                               /*!< TK_T::EXTCCBD0: CCBD1 Position         */
#define TK_EXTCCBD0_CCBD1_Msk            (0x1ul << TK_EXTCCBD0_CCBD1_Pos)                  /*!< TK_T::EXTCCBD0: CCBD1 Mask             */

#define TK_EXTCCBD0_CCBD2_Pos            (16)                                              /*!< TK_T::EXTCCBD0: CCBD2 Position         */
#define TK_EXTCCBD0_CCBD2_Msk            (0x1ul << TK_EXTCCBD0_CCBD2_Pos)                  /*!< TK_T::EXTCCBD0: CCBD2 Mask             */

#define TK_EXTCCBD0_CCBD3_Pos            (24)                                              /*!< TK_T::EXTCCBD0: CCBD3 Position         */
#define TK_EXTCCBD0_CCBD3_Msk            (0x1ul << TK_EXTCCBD0_CCBD3_Pos)                  /*!< TK_T::EXTCCBD0: CCBD3 Mask             */

#define TK_EXTCCBD1_CCBD4_Pos            (0)                                               /*!< TK_T::EXTCCBD1: CCBD4 Position         */
#define TK_EXTCCBD1_CCBD4_Msk            (0x1ul << TK_EXTCCBD1_CCBD4_Pos)                  /*!< TK_T::EXTCCBD1: CCBD4 Mask             */

#define TK_EXTCCBD1_CCBD5_Pos            (8)                                               /*!< TK_T::EXTCCBD1: CCBD5 Position         */
#define TK_EXTCCBD1_CCBD5_Msk            (0x1ul << TK_EXTCCBD1_CCBD5_Pos)                  /*!< TK_T::EXTCCBD1: CCBD5 Mask             */

#define TK_EXTCCBD1_CCBD6_Pos            (16)                                              /*!< TK_T::EXTCCBD1: CCBD6 Position         */
#define TK_EXTCCBD1_CCBD6_Msk            (0x1ul << TK_EXTCCBD1_CCBD6_Pos)                  /*!< TK_T::EXTCCBD1: CCBD6 Mask             */

#define TK_EXTCCBD1_CCBD7_Pos            (24)                                              /*!< TK_T::EXTCCBD1: CCBD7 Position         */
#define TK_EXTCCBD1_CCBD7_Msk            (0x1ul << TK_EXTCCBD1_CCBD7_Pos)                  /*!< TK_T::EXTCCBD1: CCBD7 Mask             */

#define TK_EXTCCBD2_CCBD8_Pos            (0)                                               /*!< TK_T::EXTCCBD2: CCBD8 Position         */
#define TK_EXTCCBD2_CCBD8_Msk            (0x1ul << TK_EXTCCBD2_CCBD8_Pos)                  /*!< TK_T::EXTCCBD2: CCBD8 Mask             */

#define TK_EXTCCBD2_CCBD9_Pos            (8)                                               /*!< TK_T::EXTCCBD2: CCBD9 Position         */
#define TK_EXTCCBD2_CCBD9_Msk            (0x1ul << TK_EXTCCBD2_CCBD9_Pos)                  /*!< TK_T::EXTCCBD2: CCBD9 Mask             */

#define TK_EXTCCBD2_CCBD10_Pos           (16)                                              /*!< TK_T::EXTCCBD2: CCBD10 Position        */
#define TK_EXTCCBD2_CCBD10_Msk           (0x1ul << TK_EXTCCBD2_CCBD10_Pos)                 /*!< TK_T::EXTCCBD2: CCBD10 Mask            */

#define TK_EXTCCBD2_CCBD11_Pos           (24)                                              /*!< TK_T::EXTCCBD2: CCBD11 Position        */
#define TK_EXTCCBD2_CCBD11_Msk           (0x1ul << TK_EXTCCBD2_CCBD11_Pos)                 /*!< TK_T::EXTCCBD2: CCBD11 Mask            */

#define TK_EXTCCBD3_CCBD12_Pos           (0)                                               /*!< TK_T::EXTCCBD3: CCBD12 Position        */
#define TK_EXTCCBD3_CCBD12_Msk           (0x1ul << TK_EXTCCBD3_CCBD12_Pos)                 /*!< TK_T::EXTCCBD3: CCBD12 Mask            */

#define TK_EXTCCBD3_CCBD13_Pos           (8)                                               /*!< TK_T::EXTCCBD3: CCBD13 Position        */
#define TK_EXTCCBD3_CCBD13_Msk           (0x1ul << TK_EXTCCBD3_CCBD13_Pos)                 /*!< TK_T::EXTCCBD3: CCBD13 Mask            */

#define TK_EXTCCBD3_CCBD14_Pos           (16)                                              /*!< TK_T::EXTCCBD3: CCBD14 Position        */
#define TK_EXTCCBD3_CCBD14_Msk           (0x1ul << TK_EXTCCBD3_CCBD14_Pos)                 /*!< TK_T::EXTCCBD3: CCBD14 Mask            */

#define TK_EXTCCBD3_CCBD15_Pos           (24)                                              /*!< TK_T::EXTCCBD3: CCBD15 Position        */
#define TK_EXTCCBD3_CCBD15_Msk           (0x1ul << TK_EXTCCBD3_CCBD15_Pos)                 /*!< TK_T::EXTCCBD3: CCBD15 Mask            */

#define TK_EXTCCBD4_CCBD16_Pos           (0)                                               /*!< TK_T::EXTCCBD4: CCBD16 Position        */
#define TK_EXTCCBD4_CCBD16_Msk           (0x1ul << TK_EXTCCBD4_CCBD16_Pos)                 /*!< TK_T::EXTCCBD4: CCBD16 Mask            */

#define TK_EXTCCBD4_CCBDALL_Pos          (8)                                               /*!< TK_T::EXTCCBD4: CCBDALL Position       */
#define TK_EXTCCBD4_CCBDALL_Msk          (0x1ul << TK_EXTCCBD4_CCBDALL_Pos)                /*!< TK_T::EXTCCBD4: CCBDALL Mask           */

#define TK_EXTCCBD5_CCBD17_Pos           (0)                                               /*!< TK_T::EXTCCBD5: CCBD17 Position        */
#define TK_EXTCCBD5_CCBD17_Msk           (0x1ul << TK_EXTCCBD5_CCBD17_Pos)                 /*!< TK_T::EXTCCBD5: CCBD17 Mask            */

#define TK_EXTREFCBD0_EXT_CBD0_Pos       (0)                                               /*!< TK_T::EXTREFCBD0: EXT_CBD0 Position    */
#define TK_EXTREFCBD0_EXT_CBD0_Msk       (0x1ul << TK_EXTREFCBD0_EXT_CBD0_Pos)             /*!< TK_T::EXTREFCBD0: EXT_CBD0 Mask        */

#define TK_EXTREFCBD0_EXT_CBD1_Pos       (8)                                               /*!< TK_T::EXTREFCBD0: EXT_CBD1 Position    */
#define TK_EXTREFCBD0_EXT_CBD1_Msk       (0x1ul << TK_EXTREFCBD0_EXT_CBD1_Pos)             /*!< TK_T::EXTREFCBD0: EXT_CBD1 Mask        */

#define TK_EXTREFCBD0_EXT_CBD2_Pos       (16)                                              /*!< TK_T::EXTREFCBD0: EXT_CBD2 Position    */
#define TK_EXTREFCBD0_EXT_CBD2_Msk       (0x1ul << TK_EXTREFCBD0_EXT_CBD2_Pos)             /*!< TK_T::EXTREFCBD0: EXT_CBD2 Mask        */

#define TK_EXTREFCBD0_EXT_CBD3_Pos       (24)                                              /*!< TK_T::EXTREFCBD0: EXT_CBD3 Position    */
#define TK_EXTREFCBD0_EXT_CBD3_Msk       (0x1ul << TK_EXTREFCBD0_EXT_CBD3_Pos)             /*!< TK_T::EXTREFCBD0: EXT_CBD3 Mask        */

#define TK_EXTREFCBD1_EXT_CBD4_Pos       (0)                                               /*!< TK_T::EXTREFCBD1: EXT_CBD4 Position    */
#define TK_EXTREFCBD1_EXT_CBD4_Msk       (0x1ul << TK_EXTREFCBD1_EXT_CBD4_Pos)             /*!< TK_T::EXTREFCBD1: EXT_CBD4 Mask        */

#define TK_EXTREFCBD1_EXT_CBD5_Pos       (8)                                               /*!< TK_T::EXTREFCBD1: EXT_CBD5 Position    */
#define TK_EXTREFCBD1_EXT_CBD5_Msk       (0x1ul << TK_EXTREFCBD1_EXT_CBD5_Pos)             /*!< TK_T::EXTREFCBD1: EXT_CBD5 Mask        */

#define TK_EXTREFCBD1_EXT_CBD6_Pos       (16)                                              /*!< TK_T::EXTREFCBD1: EXT_CBD6 Position    */
#define TK_EXTREFCBD1_EXT_CBD6_Msk       (0x1ul << TK_EXTREFCBD1_EXT_CBD6_Pos)             /*!< TK_T::EXTREFCBD1: EXT_CBD6 Mask        */

#define TK_EXTREFCBD1_EXT_CBD7_Pos       (24)                                              /*!< TK_T::EXTREFCBD1: EXT_CBD7 Position    */
#define TK_EXTREFCBD1_EXT_CBD7_Msk       (0x1ul << TK_EXTREFCBD1_EXT_CBD7_Pos)             /*!< TK_T::EXTREFCBD1: EXT_CBD7 Mask        */

#define TK_EXTREFCBD2_EXT_CBD8_Pos       (0)                                               /*!< TK_T::EXTREFCBD2: EXT_CBD8 Position    */
#define TK_EXTREFCBD2_EXT_CBD8_Msk       (0x1ul << TK_EXTREFCBD2_EXT_CBD8_Pos)             /*!< TK_T::EXTREFCBD2: EXT_CBD8 Mask        */

#define TK_EXTREFCBD2_EXT_CBD9_Pos       (8)                                               /*!< TK_T::EXTREFCBD2: EXT_CBD9 Position    */
#define TK_EXTREFCBD2_EXT_CBD9_Msk       (0x1ul << TK_EXTREFCBD2_EXT_CBD9_Pos)             /*!< TK_T::EXTREFCBD2: EXT_CBD9 Mask        */

#define TK_EXTREFCBD2_EXT_CBD10_Pos      (16)                                              /*!< TK_T::EXTREFCBD2: EXT_CBD10 Position   */
#define TK_EXTREFCBD2_EXT_CBD10_Msk      (0x1ul << TK_EXTREFCBD2_EXT_CBD10_Pos)            /*!< TK_T::EXTREFCBD2: EXT_CBD10 Mask       */

#define TK_EXTREFCBD2_EXT_CBD11_Pos      (24)                                              /*!< TK_T::EXTREFCBD2: EXT_CBD11 Position   */
#define TK_EXTREFCBD2_EXT_CBD11_Msk      (0x1ul << TK_EXTREFCBD2_EXT_CBD11_Pos)            /*!< TK_T::EXTREFCBD2: EXT_CBD11 Mask       */

#define TK_EXTREFCBD3_EXT_CBD12_Pos      (0)                                               /*!< TK_T::EXTREFCBD3: EXT_CBD12 Position   */
#define TK_EXTREFCBD3_EXT_CBD12_Msk      (0x1ul << TK_EXTREFCBD3_EXT_CBD12_Pos)            /*!< TK_T::EXTREFCBD3: EXT_CBD12 Mask       */

#define TK_EXTREFCBD3_EXT_CBD13_Pos      (8)                                               /*!< TK_T::EXTREFCBD3: EXT_CBD13 Position   */
#define TK_EXTREFCBD3_EXT_CBD13_Msk      (0x1ul << TK_EXTREFCBD3_EXT_CBD13_Pos)            /*!< TK_T::EXTREFCBD3: EXT_CBD13 Mask       */

#define TK_EXTREFCBD3_EXT_CBD14_Pos      (16)                                              /*!< TK_T::EXTREFCBD3: EXT_CBD14 Position   */
#define TK_EXTREFCBD3_EXT_CBD14_Msk      (0x1ul << TK_EXTREFCBD3_EXT_CBD14_Pos)            /*!< TK_T::EXTREFCBD3: EXT_CBD14 Mask       */

#define TK_EXTREFCBD3_EXT_CBD15_Pos      (24)                                              /*!< TK_T::EXTREFCBD3: EXT_CBD15 Position   */
#define TK_EXTREFCBD3_EXT_CBD15_Msk      (0x1ul << TK_EXTREFCBD3_EXT_CBD15_Pos)            /*!< TK_T::EXTREFCBD3: EXT_CBD15 Mask       */

#define TK_EXTREFCBD4_EXT_CBD16_Pos      (0)                                               /*!< TK_T::EXTREFCBD4: EXT_CBD16 Position   */
#define TK_EXTREFCBD4_EXT_CBD16_Msk      (0x1ul << TK_EXTREFCBD4_EXT_CBD16_Pos)            /*!< TK_T::EXTREFCBD4: EXT_CBD16 Mask       */

#define TK_EXTREFCBD4_EXT_CBDALL_Pos     (8)                                               /*!< TK_T::EXTREFCBD4: EXT_CBDALL Position  */
#define TK_EXTREFCBD4_EXT_CBDALL_Msk     (0x1ul << TK_EXTREFCBD4_EXT_CBDALL_Pos)           /*!< TK_T::EXTREFCBD4: EXT_CBDALL Mask      */

#define TK_EXTREFCBD5_EXT_CBD17_Pos      (0)                                               /*!< TK_T::EXTREFCBD5: EXT_CBD17 Position   */
#define TK_EXTREFCBD5_EXT_CBD17_Msk      (0x1ul << TK_EXTREFCBD5_EXT_CBD17_Pos)            /*!< TK_T::EXTREFCBD5: EXT_CBD17 Mask       */

/**@}*/ /* TK_CONST */
/**@}*/ /* end of TK register group */


/**@}*/ /* end of REGISTER group */
