/**************************************************************************//**
 * @file     dfmc_reg.h
 * @version  V1.00
 * @brief    DFMC register definition header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2025 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

#ifndef __DFMC_REG_H__
#define __DFMC_REG_H__

#if defined ( __CC_ARM   )
    #pragma anon_unions
#endif

/** @addtogroup REGISTER Control Register
    @{
*/

/**
    @addtogroup DFMC Data Flash Memory Controller (DFMC)
    Memory Mapped Structure for DFMC Controller
    @{
*/

typedef struct
{
    /**
     * @var DFMC_T::ISPCTL
     * Offset: 0x00  ISP Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ISPEN     |ISP Enable Bit (Write Protect)
     * |        |          |ISP function enable bit. Set this bit to enable ISP function.
     * |        |          |0 = ISP function Disabled.
     * |        |          |1 = ISP function Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[3]     |DATAEN    |Data Flash Update Enable Bit (Write Protect)
     * |        |          |0 = Data Flash cannot be updated.
     * |        |          |1 = Data Flash can be updated.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[6]     |ISPFF     |ISP Fail Flag (Write Protect)
     * |        |          |This bit is set by hardware when a triggered ISP meets any of the following conditions:
     * |        |          |This bit needs to be cleared by writing 1 to it.
     * |        |          |l Data Flash writes to itself if DATAEN is set to 0.
     * |        |          |l Erase or Program command at brown-out detected
     * |        |          |l Destination address is illegal, such as over an available range.
     * |        |          |l Invalid ISP commands
     * |        |          |l Violate the load code read protection
     * |        |          |l Checksum or Flash All One Verification is not executed in their valid range
     * |        |          |l Mass erase is not executed in Data Flash
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[24]    |ISPIFEN   |ISP Interrupt Enable bit (Write Protect)
     * |        |          |0 = ISP Interrupt Disabled.
     * |        |          |1 = ISP Interrupt Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var DFMC_T::ISPADDR
     * Offset: 0x04  ISP Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPADDR   |ISP Address
     * |        |          |The M3351 is equipped with embedded Data Flash. ISPADDR[1:0] must be kept 00 for ISP 32-bit operation.
     * |        |          |For CRC32 Checksum Calculation command, this field is the Data Flash starting address for checksum calculation, 4K bytes alignment is necessary for CRC32 checksum calculation.
     * |        |          |For Data Flash32-bit Program, ISP address needs word alignment (4-byte).
     * @var DFMC_T::ISPDAT
     * Offset: 0x08  ISP Data Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPDAT    |ISP Data
     * |        |          |Write data to this register before ISP program operation.
     * |        |          |Read data from this register after ISP read operation.
     * |        |          |When ISPFF (DFMC_ISPCTL[6]) is 1, ISPDAT = 0xffff_ffff
     * |        |          |For Run CRC32 Checksum Calculation command, ISPDAT is the memory size (byte) and 4096 bytes alignment
     * |        |          |For ISP Read CRC32 Checksum command, ISPDAT is the checksum result
     * |        |          |If ISPDAT = 0x0000_0000, it means that (1) the checksum calculation is in progress, or (2) the memory range for checksum calculation is incorrect
     * @var DFMC_T::ISPCMD
     * Offset: 0x0C  ISP Command Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[6:0]   |CMD       |ISP Command
     * |        |          |ISP command table is shown below:
     * |        |          |0x00= Data FLASH Read.
     * |        |          |0x08= Read Data Flash All-One Result.
     * |        |          |0x0B= Read Company ID.
     * |        |          |0x0C= Read Device ID.
     * |        |          |0x0D= Read Checksum.
     * |        |          |0x21= Data FLASH 32-bit Program.
     * |        |          |0x22= Data FLASH Page Erase. Erase any page in Data Flash.
     * |        |          |0x26= Data FLASH Mass Erase. Erase all pages in Data Flash.
     * |        |          |0x28= Run Data Flash All-One Verification.
     * |        |          |0x2D= Run Checksum Calculation.
     * |        |          |0x30 = EEPROM emulation read
     * |        |          |0x31= EEPROM emulation 8 bit program
     * |        |          |0x32 = EEPROM emulation 32 bit program
     * |        |          |0x33 = EEPROM emulation initial read
     * |        |          |The other commands are invalid.
     * @var DFMC_T::ISPTRG
     * Offset: 0x10  ISP Trigger Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ISPGO     |ISP Start Trigger (Write Protect)
     * |        |          |Write 1 to start ISP operation and this bit will be cleared to 0 by hardware automatically when ISP operation is finished.
     * |        |          |0 = ISP operation is finished.
     * |        |          |1 = ISP is progressed.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var DFMC_T::ISPSTS
     * Offset: 0x40  ISP Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ISPBUSY   |ISP Busy Flag (Read Only)
     * |        |          |Write 1 to start ISP operation and this bit will be cleared to 0 by hardware automatically when ISP operation is finished.
     * |        |          |This bit is the mirror of ISPGO(DFMC_ISPTRG[0]).
     * |        |          |0 = ISP operation is finished.
     * |        |          |1 = ISP is progressed.
     * |[6]     |ISPFF     |ISP Fail Flag (Write Protect)
     * |        |          |This bit is the mirror of ISPFF (DFMC_ISPCTL[6]), it needs to be cleared by writing 1 to DFMC_ISPCTL[6] or DFMC_ISPSTS[6]
     * |        |          |This bit is set by hardware when a triggered ISP meets any of the following conditions:
     * |        |          |l Data Flash writes to itself if DATAEN is set to 0.
     * |        |          |l Erase or Program command at brown-out detected
     * |        |          |l Destination address is illegal, such as over an available range.
     * |        |          |l Invalid ISP commands
     * |        |          |l Violate the load code read protection
     * |        |          |l Checksum or Flash All One Verification is not executed in their valid range
     * |        |          |l Mass erase is not executed in Data Flash
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[7]     |ALLONE    |Data Flash All-one Verification Flag
     * |        |          |This bit is set by hardware if all of Flash bits are 1, and clear if Flash bits are not all 1 after “Run Data Flash All-One Verification” complete; this bit also can be clear by writing 1
     * |        |          |0 = Data Flash bits are not all 1 after "Run Data Flash All-One Verification" is complete.
     * |        |          |1 = All of Data Flash bits are 1 after "Run Data Flash All-One Verification" is complete.
     * |[8]     |EEP_PGFULL|EEPROM Emulation in the page full processing
     * |        |          |This bit is set by hardware if EEPROM program and flash page full
     * |        |          |EEPROM emulation will automatic start the page full processing it need program current EEPPROM emulation SRAM data to next page and Erase current page.
     * |        |          |0: Not in page full processing
     * |        |          |1: in the page full processing
     * |[9]     |EEP_INIT  |EEPROM Emulation in the initial processing
     * |[10]    |EEP_SPE   |EEPROM Emulation SRAM Parity check error. (Write Protect)
     * |[11]    |EEP_SECOK |EEPROM Emulation Active and Secure Region Status (Read Only)
     * |        |          |This bit is set by hardware when EEPROM emulation is enabled and the region is marked as Secure.
     * |        |          |0 = Not in EEPROM Secure Mode
     * |        |          |1 = In EEPROM Secure Mode
     * |[24]    |ISPIF     |ISP Interrupt Flag (Write Protect)
     * |        |          |0 = ISP command not finish or ISP fail flag is 0.
     * |        |          |1 = ISP command finish or ISP fail is 1.
     * |        |          |Note: Write 1 to clear this bit.
     * @var DFMC_T::CYCCTL
     * Offset: 0x4C  Data Flash Access Cycle Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |CYCLE     |Data Flash Access Cycle Control (Write Protect)
     * |        |          |This register is updated by software.
     * |        |          |0000 = CPU access with zero wait cycle ; Flash access cycle is 1;.
     * |        |          |The HCLK working frequency range is <27 MHz; Cache is disabled by hardware.
     * |        |          |0001 = CPU access with one wait cycle if cache miss; Flash access cycle is 1;.
     * |        |          |The HCLK working frequency range range is<27 MHz
     * |        |          |0010 = CPU access with two wait cycles if cache miss; Flash access cycle is 2;.
     * |        |          |The optimized HCLK working frequency range is 27~54 MHz
     * |        |          |0011 = CPU access with three wait cycles if cache miss; Flash access cycle is 3;.
     * |        |          |The optimized HCLK working frequency range is 54~81 MHz
     * |        |          |0100 = CPU access with four wait cycles if cache miss; Flash access cycle is 4;.
     * |        |          |The optimized HCLK working frequency range is81~108 MHz
     * |        |          |0101 = CPU access with five wait cycles if cache miss; Flash access cycle is 5;.
     * |        |          |The optimized HCLK working frequency range is 108~135 MHz
     * |        |          |0110 = CPU access with six wait cycles if cache miss; Flash access cycle is 6;.
     * |        |          |The optimized HCLK working frequency range is 135~162 MHz
     * |        |          |0111 = CPU access with seven wait cycles if cache miss; Flash access cycle is 7;.
     * |        |          |The optimized HCLK working frequency range is 162~192 MHz
     * |        |          |1000 = CPU access with eight wait cycles if cache miss; Flash access cycle is 8;.
     * |        |          |The optimized HCLK working frequency range is >192 MHz
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var DFMC_T::MPDATE
     * Offset: 0x90  ISP Data Error Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[6:0]   |ISPDATE   |ISP Data Error Register
     * |        |          |Read data from this register after ISP 32-bit read operation or ECCSEBCF(FMC_ECCSTS[0]) is high can know which bit is error
     * |        |          |ISPDATE does not continuously store the position information of ECC errors
     * |        |          |Therefore, if the user wants to know which bit generated the error, they need to read it before the next ISP action after an ECC single-bit error occurs, or access that position again.
     * |        |          |When ISPFF (FMC_ISPCTL[6]) is 1, ISPDAT = 0x7f.
     * |        |          |This register is the ECC 7-bit data.
     * @var DFMC_T::ECCCTL
     * Offset: 0x130  DFMC Error Code Correction Control
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |SEBDINTEN |Single Error Bits Detection Interrupt Enable (Write Protect)
     * |        |          |1 = Single Error Bit Detection Interrupt Enabled.
     * |        |          |0 = Single Error Bit Detection Interrupt Disabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[1]     |DEBDINTEN |Double Error Bits Detection Interrupt Enable (Write Protect)
     * |        |          |1 = Double Error Bits Detection Interrupt Enabled.
     * |        |          |0 = Double Error Bits Detection Interrupt Disabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var DFMC_T::ECCSTS
     * Offset: 0x134  DFMC Error Code Correction status
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ECCSEBCF  |ECC Single Error Bits Correction Flag
     * |        |          |This bit is set by hardware when FMC detects and corrects a ECC single error bits fault when CPU access Flash or ISP read
     * |        |          |It need to be cleared by writing 1 to ECCSEBCF
     * |        |          |When ECCSEBCF and SEBDINTEN(FMC_ECCCTL[0])=1 cause interrupt.
     * |        |          |1 = FMC detects and corrects ECC single error bits fault.
     * |        |          |0 = FMC does not detect ECC single error bits fault.
     * |[1]     |ECCDEBDF  |ECC Double Error Bits Detection Flag
     * |        |          |This bit is set by hardware when FMC detects a ECC double error bits fault when CPU access Flash or ISP read
     * |        |          |It need to be cleared by writing 1 to ECCDEBDF
     * |        |          |When ECCDEBDF and DEBDINTEN(FMC_ECCCTL[1])=1 cause interrupt.
     * |        |          |1 = FMC detects ECC double error bits fault.
     * |        |          |0 = FMC does not detect ECC double error bits fault.
     * @var DFMC_T::ECCSEFAR
     * Offset: 0x138  DFMC ECC Single Error fault Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ECCSEFAR  |ECC Single Error Fault Address Register (Read Only)
     * |        |          |When FMC detects a ECCSEBCF(FMC_ECCSTS[0]) would record fault address at the register
     * |        |          |The register is cleared by writing 1 to ECCSEBCF
     * |        |          |ECCSEFAR is 64-bit alignment so ECCSEFAR[2:0] are always 0.
     * @var DFMC_T::ECCDEFAR
     * Offset: 0x13C  DFMC ECC Double Error fault Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ECCDEFAR  |ECC Double Error Fault Address Register (Read Only)
     * |        |          |When FMC detects a ECCDEBDF(FMC_ECCSTS[1]) would record fault address at the register
     * |        |          |The register is cleared by writing 1 to ECCDEBDF
     * |        |          |ECCDEBDF is 64-bit alignment so ECCDEFAR[2:0] are always 0.
     * @var DFMC_T::EEP_STS
     * Offset: 0x140  DFMC EEPROM Emulation Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[19:0]  |PETIMES   |Page erase times
     * |        |          |Two EEPROM emulation total erase times.The number is two pages total, So if the number is 100 it means each page erase 50 times.
     * |[29:20] |EEPWPTR   |Current page write pointer
     * |        |          |(When >= 1022 EEPROM emulation will do the page full processing automatically)
     * |[30]    |EEP_PGFULL|EEPROM Emulation in the page full processing
     * |        |          |This bit is set by hardware if EEPROM program and flash page full
     * |        |          |EEPROM emulation will automatic start the page full processing it need program current EEPPROM emulation SRAM data to next page and Erase current page.
     * |        |          |0: Not in page full processing
     * |        |          |1: in the page full processing
     * |[31]    |EEP_INIT  |EEPROM Emulation in the initial processing
     * @var DFMC_T::SMWR_CFG0
     * Offset: 0x150  DFMC Smart Write Config Register0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * @var DFMC_T::SMWR_CFG1
     * Offset: 0x154  DFMC Smart Write Config Register1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * @var DFMC_T::SMWR_CFG2
     * Offset: 0x158  DFMC Smart Write Config Register2
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * @var DFMC_T::SMWR_CFG3
     * Offset: 0x15C  DFMC Smart Write Config Register3
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * @var DFMC_T::SMWR_CFG4
     * Offset: 0x160  DFMC Smart Write Config Register4
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     */
    __IO uint32_t ISPCTL;                /*!< [0x0000] ISP Control Register                                             */
    __IO uint32_t ISPADDR;               /*!< [0x0004] ISP Address Register                                             */
    __IO uint32_t ISPDAT;                /*!< [0x0008] ISP Data Register                                                */
    __IO uint32_t ISPCMD;                /*!< [0x000c] ISP Command Register                                             */
    __IO uint32_t ISPTRG;                /*!< [0x0010] ISP Trigger Control Register                                     */
    __I  uint32_t RESERVE0[11];
    __IO uint32_t ISPSTS;                /*!< [0x0040] ISP Status Register                                              */
    __I  uint32_t RESERVE1[2];
    __IO uint32_t CYCCTL;                /*!< [0x004c] Data Flash Access Cycle Control Register                         */
    __I  uint32_t RESERVE2[16];
    __IO uint32_t MPDATE;                /*!< [0x0090] ISP Data Error Register                                          */
    __I  uint32_t RESERVE3[39];
    __IO uint32_t ECCCTL;                /*!< [0x0130] DFMC Error Code Correction Control                               */
    __IO uint32_t ECCSTS;                /*!< [0x0134] DFMC Error Code Correction status                                */
    __I  uint32_t ECCSEFAR;              /*!< [0x0138] DFMC ECC Single Error fault Address Register                     */
    __I  uint32_t ECCDEFAR;              /*!< [0x013c] DFMC ECC Double Error fault Address Register                     */
    __I  uint32_t EEP_STS;               /*!< [0x0140] DFMC EEPROM Emulation Status Register                            */
    __I  uint32_t RESERVE4[3];
    __IO uint32_t SMWR_CFG0;             /*!< [0x0150] DFMC Smart Write Config Register0                                */
    __IO uint32_t SMWR_CFG1;             /*!< [0x0154] DFMC Smart Write Config Register1                                */
    __IO uint32_t SMWR_CFG2;             /*!< [0x0158] DFMC Smart Write Config Register2                                */
    __IO uint32_t SMWR_CFG3;             /*!< [0x015c] DFMC Smart Write Config Register3                                */
    __IO uint32_t SMWR_CFG4;             /*!< [0x0160] DFMC Smart Write Config Register4                                */

} DFMC_T;

/**
    @addtogroup DFMC_CONST DFMC Bit Field Definition
    Constant Definitions for DFMC Controller
    @{
*/

#define DFMC_ISPCTL_ISPEN_Pos            (0)                                               /*!< DFMC_T::ISPCTL: ISPEN Position         */
#define DFMC_ISPCTL_ISPEN_Msk            (0x1UL << DFMC_ISPCTL_ISPEN_Pos)                  /*!< DFMC_T::ISPCTL: ISPEN Mask             */

#define DFMC_ISPCTL_DATAEN_Pos           (3)                                               /*!< DFMC_T::ISPCTL: DATAEN Position        */
#define DFMC_ISPCTL_DATAEN_Msk           (0x1UL << DFMC_ISPCTL_DATAEN_Pos)                 /*!< DFMC_T::ISPCTL: DATAEN Mask            */

#define DFMC_ISPCTL_ISPFF_Pos            (6)                                               /*!< DFMC_T::ISPCTL: ISPFF Position         */
#define DFMC_ISPCTL_ISPFF_Msk            (0x1UL << DFMC_ISPCTL_ISPFF_Pos)                  /*!< DFMC_T::ISPCTL: ISPFF Mask             */

#define DFMC_ISPCTL_ISPIFEN_Pos          (24)                                              /*!< DFMC_T::ISPCTL: ISPIFEN Position       */
#define DFMC_ISPCTL_ISPIFEN_Msk          (0x1UL << DFMC_ISPCTL_ISPIFEN_Pos)                /*!< DFMC_T::ISPCTL: ISPIFEN Mask           */

#define DFMC_ISPADDR_ISPADDR_Pos         (0)                                               /*!< DFMC_T::ISPADDR: ISPADDR Position      */
#define DFMC_ISPADDR_ISPADDR_Msk         (0xffffffffUL << DFMC_ISPADDR_ISPADDR_Pos)        /*!< DFMC_T::ISPADDR: ISPADDR Mask          */

#define DFMC_ISPDAT_ISPDAT_Pos           (0)                                               /*!< DFMC_T::ISPDAT: ISPDAT Position        */
#define DFMC_ISPDAT_ISPDAT_Msk           (0xffffffffUL << DFMC_ISPDAT_ISPDAT_Pos)          /*!< DFMC_T::ISPDAT: ISPDAT Mask            */

#define DFMC_ISPCMD_CMD_Pos              (0)                                               /*!< DFMC_T::ISPCMD: CMD Position           */
#define DFMC_ISPCMD_CMD_Msk              (0x7fUL << DFMC_ISPCMD_CMD_Pos)                   /*!< DFMC_T::ISPCMD: CMD Mask               */

#define DFMC_ISPTRG_ISPGO_Pos            (0)                                               /*!< DFMC_T::ISPTRG: ISPGO Position         */
#define DFMC_ISPTRG_ISPGO_Msk            (0x1UL << DFMC_ISPTRG_ISPGO_Pos)                  /*!< DFMC_T::ISPTRG: ISPGO Mask             */

#define DFMC_ISPSTS_ISPBUSY_Pos          (0)                                               /*!< DFMC_T::ISPSTS: ISPBUSY Position       */
#define DFMC_ISPSTS_ISPBUSY_Msk          (0x1UL << DFMC_ISPSTS_ISPBUSY_Pos)                /*!< DFMC_T::ISPSTS: ISPBUSY Mask           */

#define DFMC_ISPSTS_ISPFF_Pos            (6)                                               /*!< DFMC_T::ISPSTS: ISPFF Position         */
#define DFMC_ISPSTS_ISPFF_Msk            (0x1UL << DFMC_ISPSTS_ISPFF_Pos)                  /*!< DFMC_T::ISPSTS: ISPFF Mask             */

#define DFMC_ISPSTS_ALLONE_Pos           (7)                                               /*!< DFMC_T::ISPSTS: ALLONE Position        */
#define DFMC_ISPSTS_ALLONE_Msk           (0x1UL << DFMC_ISPSTS_ALLONE_Pos)                 /*!< DFMC_T::ISPSTS: ALLONE Mask            */

#define DFMC_ISPSTS_EEP_PGFULL_Pos       (8)                                               /*!< DFMC_T::ISPSTS: EEP_PGFULL Position    */
#define DFMC_ISPSTS_EEP_PGFULL_Msk       (0x1UL << DFMC_ISPSTS_EEP_PGFULL_Pos)             /*!< DFMC_T::ISPSTS: EEP_PGFULL Mask        */

#define DFMC_ISPSTS_EEP_INIT_Pos         (9)                                               /*!< DFMC_T::ISPSTS: EEP_INIT Position      */
#define DFMC_ISPSTS_EEP_INIT_Msk         (0x1UL << DFMC_ISPSTS_EEP_INIT_Pos)               /*!< DFMC_T::ISPSTS: EEP_INIT Mask          */

#define DFMC_ISPSTS_EEP_SPE_Pos          (10)                                              /*!< DFMC_T::ISPSTS: EEP_SPE Position       */
#define DFMC_ISPSTS_EEP_SPE_Msk          (0x1UL << DFMC_ISPSTS_EEP_SPE_Pos)                /*!< DFMC_T::ISPSTS: EEP_SPE Mask           */

#define DFMC_ISPSTS_EEP_SECOK_Pos        (11)                                              /*!< DFMC_T::ISPSTS: EEP_SECOK Position     */
#define DFMC_ISPSTS_EEP_SECOK_Msk        (0x1UL << DFMC_ISPSTS_EEP_SECOK_Pos)              /*!< DFMC_T::ISPSTS: EEP_SECOK Mask         */

#define DFMC_ISPSTS_ISPIF_Pos            (24)                                              /*!< DFMC_T::ISPSTS: ISPIF Position         */
#define DFMC_ISPSTS_ISPIF_Msk            (0x1UL << DFMC_ISPSTS_ISPIF_Pos)                  /*!< DFMC_T::ISPSTS: ISPIF Mask             */

#define DFMC_CYCCTL_CYCLE_Pos            (0)                                               /*!< DFMC_T::CYCCTL: CYCLE Position         */
#define DFMC_CYCCTL_CYCLE_Msk            (0xfUL << DFMC_CYCCTL_CYCLE_Pos)                  /*!< DFMC_T::CYCCTL: CYCLE Mask             */

#define DFMC_MPDATE_ISPDATE_Pos          (0)                                               /*!< DFMC_T::MPDATE: ISPDATE Position       */
#define DFMC_MPDATE_ISPDATE_Msk          (0x7fUL << DFMC_MPDATE_ISPDATE_Pos)               /*!< DFMC_T::MPDATE: ISPDATE Mask           */

#define DFMC_ECCCTL_SEBDINTEN_Pos        (0)                                               /*!< DFMC_T::ECCCTL: SEBDINTEN Position     */
#define DFMC_ECCCTL_SEBDINTEN_Msk        (0x1UL << DFMC_ECCCTL_SEBDINTEN_Pos)              /*!< DFMC_T::ECCCTL: SEBDINTEN Mask         */

#define DFMC_ECCCTL_DEBDINTEN_Pos        (1)                                               /*!< DFMC_T::ECCCTL: DEBDINTEN Position     */
#define DFMC_ECCCTL_DEBDINTEN_Msk        (0x1UL << DFMC_ECCCTL_DEBDINTEN_Pos)              /*!< DFMC_T::ECCCTL: DEBDINTEN Mask         */

#define DFMC_ECCSTS_ECCSEBCF_Pos         (0)                                               /*!< DFMC_T::ECCSTS: ECCSEBCF Position      */
#define DFMC_ECCSTS_ECCSEBCF_Msk         (0x1UL << DFMC_ECCSTS_ECCSEBCF_Pos)               /*!< DFMC_T::ECCSTS: ECCSEBCF Mask          */

#define DFMC_ECCSTS_ECCDEBDF_Pos         (1)                                               /*!< DFMC_T::ECCSTS: ECCDEBDF Position      */
#define DFMC_ECCSTS_ECCDEBDF_Msk         (0x1UL << DFMC_ECCSTS_ECCDEBDF_Pos)               /*!< DFMC_T::ECCSTS: ECCDEBDF Mask          */

#define DFMC_ECCSEFAR_ECCSEFAR_Pos       (0)                                               /*!< DFMC_T::ECCSEFAR: ECCSEFAR Position    */
#define DFMC_ECCSEFAR_ECCSEFAR_Msk       (0xffffffffUL << DFMC_ECCSEFAR_ECCSEFAR_Pos)      /*!< DFMC_T::ECCSEFAR: ECCSEFAR Mask        */

#define DFMC_ECCDEFAR_ECCDEFAR_Pos       (0)                                               /*!< DFMC_T::ECCDEFAR: ECCDEFAR Position    */
#define DFMC_ECCDEFAR_ECCDEFAR_Msk       (0xffffffffUL << DFMC_ECCDEFAR_ECCDEFAR_Pos)      /*!< DFMC_T::ECCDEFAR: ECCDEFAR Mask        */

#define DFMC_EEP_STS_PETIMES_Pos         (0)                                               /*!< DFMC_T::EEP_STS: PETIMES Position      */
#define DFMC_EEP_STS_PETIMES_Msk         (0xfffffUL << DFMC_EEP_STS_PETIMES_Pos)           /*!< DFMC_T::EEP_STS: PETIMES Mask          */

#define DFMC_EEP_STS_EEPWPTR_Pos         (20)                                              /*!< DFMC_T::EEP_STS: EEPWPTR Position      */
#define DFMC_EEP_STS_EEPWPTR_Msk         (0x3ffUL << DFMC_EEP_STS_EEPWPTR_Pos)             /*!< DFMC_T::EEP_STS: EEPWPTR Mask          */

#define DFMC_EEP_STS_EEP_PGFULL_Pos      (30)                                              /*!< DFMC_T::EEP_STS: EEP_PGFULL Position   */
#define DFMC_EEP_STS_EEP_PGFULL_Msk      (0x1UL << DFMC_EEP_STS_EEP_PGFULL_Pos)            /*!< DFMC_T::EEP_STS: EEP_PGFULL Mask       */

#define DFMC_EEP_STS_EEP_INIT_Pos        (31)                                              /*!< DFMC_T::EEP_STS: EEP_INIT Position     */
#define DFMC_EEP_STS_EEP_INIT_Msk        (0x1UL << DFMC_EEP_STS_EEP_INIT_Pos)              /*!< DFMC_T::EEP_STS: EEP_INIT Mask         */

/** @} end of DFMC_CONST group */
/** @} end of DFMC register group */
/** @} end of REGISTER group */

#if defined ( __CC_ARM   )
    #pragma no_anon_unions
#endif

#endif /* __DFMC_REG_H__ */
