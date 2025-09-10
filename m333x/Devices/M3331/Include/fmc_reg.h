/**************************************************************************//**
 * @file     fmc_reg.h
 * @version  V3.00
 * @brief    FMC register definition header file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (c) 2024 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __FMC_REG_H__
#define __FMC_REG_H__

#if defined ( __CC_ARM   )
#pragma anon_unions
#endif

/**
   @addtogroup REGISTER Control Register
   @{
*/

/**
    @addtogroup FMC Flash Memory Controller (FMC)
    Memory Mapped Structure for FMC Controller
@{ */

typedef struct
{
    /**
     * @var FMC_T::ISPCTL
     * Offset: 0x00  ISP Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ISPEN     |ISP Enable Bit (Write Protect)
     * |        |          |ISP function enable bit. Set this bit to enable ISP function.
     * |        |          |0 = ISP function Disabled.
     * |        |          |1 = ISP function Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[3]     |APUEN     |APROM Update Enable Bit (Write Protect)
     * |        |          |0 = APROM cannot be updated when the chip runs in APROM.
     * |        |          |1 = APROM can be updated when the chip runs in APROM.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[4]     |CFGUEN    |CONFIG Update Enable Bit (Write Protect)
     * |        |          |0 = CONFIG cannot be updated.
     * |        |          |1 = CONFIG can be updated.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[5]     |LDUEN     |LDROM Update Enable Bit (Write Protect)
     * |        |          |0 = LDROM cannot be updated.
     * |        |          |1 = LDROM can be updated.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[6]     |ISPFF     |ISP Fail Flag (Write Protect)
     * |        |          |This bit is set by hardware when a triggered ISP meets any of the following conditions:
     * |        |          |This bit needs to be cleared by writing 1 to it.
     * |        |          |(1) APROM writes to itself if APUEN is set to 0.
     * |        |          |(2) LDROM writes to itself if LDUEN is set to 0.
     * |        |          |(3) CONFIG is erased/programmed if CFGUEN is set to 0.
     * |        |          |(4) Data Flash writes to itself if DFUEN is set to 0.
     * |        |          |(5) Erase or Program command at brown-out detected
     * |        |          |(6) Destination address is illegal, such as over an available range.
     * |        |          |(7) Invalid ISP commands
     * |        |          |(8) Page Erase command at LOCK mode with ICE connection
     * |        |          |(9) Read any content of boot loader with ICE connection
     * |        |          |(10) The base and size of new XOM regions is wrong, overlap or write twice
     * |        |          |(11) The input setting of XOM page erase function is wrong
     * |        |          |(12) The active XOM region is accessed (except for chip erase, page erase, checksum and read CID/DID)
     * |        |          |(13) The XOM setting page is accessed (except for chip erase, word program and read)
     * |        |          |(14) OTP is erased
     * |        |          |(15) Checksum or Flash All One Verification is not executed in their valid range
     * |        |          |(16) Bank erase is not executed in APROM
     * |        |          |(17) ISP conflict error
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[7]     |DFUEN     |Date Flash Update Enable Bit (Write Protect)
     * |        |          |0 = Data flash cannot be updated.
     * |        |          |1 = Data flash can be updated.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[24]    |INTEN     |ISP Interrupt Enable Bit (Write Protect)
     * |        |          |0= ISP interrupt Disabled.
     * |        |          |1= ISP interrupt Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |        |          |Before using ISP interrupt, user needs to clear the INTFLAG(FMC_ISPSTS[24]) make sure interrupt happen at correct time.
     * @var FMC_T::ISPADDR
     * Offset: 0x04  ISP Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPADDR   |ISP Address
     * |        |          |ISPADDR[1:0] must be kept 00 for ISP 32-bit operation.
     * |        |          |ISPADDR[2:0] must be kept 000 for ISP 64-bit operation.
     * |        |          |For CRC32 Checksum Calculation command, this field is the Flash starting address for checksum calculation, 1 Kbyte alignment is necessary for CRC32 checksum calculation.
     * |        |          |For Flash 32-bit Program, ISP address needs word alignment (4-byte).
     * |        |          |For Flash 64-bit Program, ISP address needs double word alignment (8-byte).
     * |        |          |Non-secure ISP address must be active at Non-secure region.
     * @var FMC_T::ISPDAT
     * Offset: 0x08  ISP Data Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPDAT    |ISP Data
     * |        |          |Write data to this register before ISP program operation.
     * |        |          |Read data from this register after ISP read operation.
     * |        |          |When ISPFF (FMC_ISPCTL[6]) is 1, ISPDAT = 0xffff_ffff.
     * |        |          |For Run CRC32 Checksum Calculation command, ISPDAT is the memory size (byte) and 1 Kbyte alignment.
     * |        |          |For ISP Read CRC32 Checksum command, ISPDAT is the checksum result.
     * |        |          |If ISPDAT = 0x0000_0000, it means that (1) the checksum calculation is in progress, or (2) the memory range for checksum calculation is incorrect.
     * @var FMC_T::ISPCMD
     * Offset: 0x0C  ISP Command Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[6:0]   |CMD       |ISP Command
     * |        |          |ISP command table is shown below:
     * |        |          |0x00 = FLASH 32-bit Read.
     * |        |          |0x04 = Read Unique ID.
     * |        |          |0x08 = Read Flash All-One Result.
     * |        |          |0x0B = Read Company ID.
     * |        |          |0x0C = Read Device ID.
     * |        |          |0x0D = Read Checksum.
     * |        |          |0x21 = FLASH 32-bit Program.
     * |        |          |0x22 = FLASH Page Erase. Erase any page, except for OTP.
     * |        |          |0x23 = FLASH Bank Erase. Erase all pages of APROM.
     * |        |          |0x24 = CFG word erase.
     * |        |          |0x28 = Run Flash All-One Verification.
     * |        |          |0x2C = Bank Remap.
     * |        |          |0x2D = Run Checksum Calculation.
     * |        |          |0x2E = Vector Remap.
     * |        |          |0x40 = FLASH 64-bit Read.
     * |        |          |0x60 = FLASH 64-bit Read without ECC.
     * |        |          |0x61 = FLASH 64-bit Program.
     * |        |          |Others = The other commands are invalid.
     * @var FMC_T::ISPTRG
     * Offset: 0x10  ISP Trigger Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ISPGO     |ISP Start Trigger (Write Protect)
     * |        |          |Write 1 to start ISP operation and this bit will be cleared to 0 by hardware automatically when ISP operation is finished.
     * |        |          |0 = ISP operation is finished.
     * |        |          |1 = ISP is progressed.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var FMC_T::ISPSTS
     * Offset: 0x40  ISP Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ISPBUSY   |ISP Busy Flag (Read Only)
     * |        |          |Write 1 to start ISP operation and this bit will be cleared to 0 by hardware automatically when ISP operation is finished.
     * |        |          |This bit is the mirror of ISPGO(FMC_ISPTRG[0]).
     * |        |          |0 = ISP operation is finished.
     * |        |          |1 = ISP is progressed.
     * |[2]     |CBS       |Chip Boot Selection (Read Only)
     * |        |          |This bit is initiated with the CBS (CONFIG0[7]) after any reset is happened except CPU reset or system reset (MCU Reset) is happened.
     * |        |          |0 = Direct boot from LDROM through bootloader.
     * |        |          |1 = Direct boot from APROM through bootloader.
     * |[4]     |SCFF      |Secure Conceal Fail Flag (Write Protect)
     * |        |          |This bit is set by hardware if any ISP command accesses secure region when secure conceal function is enable.
     * |        |          |This bit needs to be cleared by writing 1 to it.
     * |        |          |0 = ISP is not accessed secure conceal region.
     * |        |          |1 = ISP is accessed secure conceal region.
     * |[5]     |CFGWEFF   |Config Word Erase fail Flag(Read Only)
     * |        |          |Last time CFG word erase function after initial status. If CFGWEFF is set to 1, user needs to erase CFG region again.
     * |        |          |0 = Success.
     * |        |          |1 = Fail.
     * |[6]     |ISPFF     |ISP Fail Flag (Write Protect)
     * |        |          |This bit is the mirror of ISPFF (FMC_ISPCTL[6]), it needs to be cleared by writing 1 to FMC_ISPCTL[6] or FMC_ISPSTS[6]
     * |        |          |This bit is set by hardware when a triggered ISP meets any of the following conditions:
     * |        |          |(1) APROM writes to itself if APUEN is set to 0.
     * |        |          |(2) LDROM writes to itself if LDUEN is set to 0.
     * |        |          |(3) CONFIG is erased/programmed if CFGUEN is set to 0.
     * |        |          |(4) Erase or Program command at brown-out detected
     * |        |          |(5) Destination address is illegal, such as over an available range.
     * |        |          |(6) Invalid ISP commands
     * |        |          |(7) Page Erase command at LOCK mode with ICE connection
     * |        |          |(8) Invalid operations (except for chip erase) with ICE connection
     * |        |          |(9) Read any content of boot loader with ICE connection
     * |        |          |(10) The base and size of new XOM regions is wrong, overlap or write twice
     * |        |          |(11) The input setting of XOM page erase function is wrong
     * |        |          |(12) The active XOM region is accessed (except for chip erase, page erase, checksum and read CID/DID)
     * |        |          |(13) The XOM setting page is accessed (except for chip erase, word program and read)
     * |        |          |(14) OTP is erased
     * |        |          |(15) Checksum or Flash All One Verification is not executed in their valid range
     * |        |          |(16) Bank erase is not executed in APROM
     * |        |          |(17) ISP conflict error
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[7]     |ALLONE    |Flash All-one Verification Flag
     * |        |          |This bit is set by hardware if all of flash bits are 1, and clear if flash bits are not all 1 after "Run Flash All-One Verification" complete; this bit also can be clear by writing 1.
     * |        |          |0 = Flash bits are not all 1 after "Run Flash All-One Verification" complete.
     * |        |          |1 = All of flash bits are 1 after "Run Flash All-One Verification" complete.
     * |[8]     |INTFLAG   |ISP Interrupt Flag
     * |        |          |0 = ISP Not Finished.
     * |        |          |1 = ISP done or ISPFF set.
     * |        |          |Note: This function needs to be enabled by INTEN(FMC_ISPCTL[24]). It needs to be cleared by writing 1 to INTFLAG.
     * |[27:9]  |VECMAP    |Vector Page Mapping Address (Read Only)
     * |        |          |All access to 0x0000_0000~0x0000_01FF is remapped to the Flash memory address {VECMAP[18:0], 9'h000} ~ {VECMAP[18:0], 9'h1FF}.
     * |[28]    |ISPCERR   |ISP Conflict Error
     * |        |          |This bit shows when FMC is doing ISP operation. It needs to be cleared by writing 1.
     * |        |          |User cannot access FMC_ISPADDR, FMC_ISPDAT, FMC_ISPCMD, FMC_ISPTRG.
     * |        |          |It would cause ISPFF.
     * |[29]    |MIRBOUND  |Mirror Boundary (Read Only)
     * |        |          |0 = Mirror Boundary Disabled.
     * |        |          |1 = Mirror Boundary Enabled.
     * |[30]    |FBS       |Flash Bank Selection (Read Only)
     * |        |          |This bit indicate which APROM segment is selected to boot.
     * |        |          |0 = Booting from APROM segment 0.
     * |        |          |1 = Booting from APROM segment 1.
     * @var FMC_T::CYCCTL
     * Offset: 0x4C  Flash Access Cycle Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |CYCLE     |Flash Access Cycle Control (Write Protect)
     * |        |          |This register is updated by user before HCLK running in different frequency.
     * |        |          |0001 = CPU access with one wait cycle; Flash access cycle is 1.
     * |        |          |The HCLK working frequency range range is <24 MHz.
     * |        |          |0010 = CPU access with two wait cycles; Flash access cycle is 2.
     * |        |          |The optimized HCLK working frequency range is 26~50 MHz.
     * |        |          |0011 = CPU access with three wait cycles; Flash access cycle is 3.
     * |        |          |The optimized HCLK working frequency range is 51~75 MHz.
     * |        |          |0100 = CPU access with four wait cycles; Flash access cycle is 4.
     * |        |          |The optimized HCLK working frequency range is 76~100 MHz.
     * |        |          |0101 = CPU access with five wait cycles; Flash access cycle is 5.
     * |        |          |The optimized HCLK working frequency range is 101~125 MHz.
     * |        |          |0110 = CPU access with six wait cycles; Flash access cycle is 6.
     * |        |          |The optimized HCLK working frequency range is 126~150 MHz.
     * |        |          |0111 = CPU access with seven wait cycles; Flash access cycle is 7.
     * |        |          |The optimized HCLK working frequency range is 151~175 MHz.
     * |        |          |1000 = CPU access with eight wait cycles; Flash access cycle is 8.
     * |        |          |The optimized HCLK working frequency range is >176 MHz.
     * |        |          |Others = Reserved.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * @var FMC_T::MPDAT0
     * Offset: 0x80  ISP Data0 Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPDAT0   |ISP Data 0
     * |        |          |Write data to this register before ISP 64-bit program operation.
     * |        |          |Read data from this register after ISP 64-bit read operation.
     * |        |          |When ISPFF (FMC_ISPCTL[6]) is 1, ISPDAT0 = 0xffff_ffff.
     * |        |          |This register is the first 32-bit read data or write data for 32-bit/64-bit programming, and it is also the mirror of FMC_ISPDAT, both registers keep the same data.
     * @var FMC_T::MPDAT1
     * Offset: 0x84  ISP Data1 Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPDAT1   |ISP Data 1
     * |        |          |Write data to this register before ISP 64-bit program operation.
     * |        |          |Read data from this register after ISP 64-bit read operation.
     * |        |          |When ISPFF (FMC_ISPCTL[6]) is 1, ISPDAT1 = 0xffff_ffff.
     * |        |          |This register is the second 32-bit read data or write data for 64-bit programming.
     * @var FMC_T::MPDAT2
     * Offset: 0x88  ISP Data2 Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPDAT2   |ISP Data 2
     * |        |          |Read data from this register after ISP 64-bit read operation or ECCSEBCF(FMC_ECCSTS[0]) is high can know which bit is error.
     * |        |          |ISPDAT2 does not continuously store the position information of ECC errors.
     * |        |          |Therefore, if the user wants to know which bit generated the error, they need to read it before the next ISP action after an ECC single-bit error occurs, or access that position again.
     * |        |          |When ISPFF (FMC_ISPCTL[6]) is 1, ISPDAT2 = 0xff.
     * |        |          |This register is the ECC 8-bit data.
     * @var FMC_T::XOMR0STS
     * Offset: 0xD0  XOM Region 0 Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |SIZE      |XOM Region 0 Size
     * |        |          |The page number of XOM Region 0.
     * |[31:8]  |BASE      |XOM Region 0 Base Address
     * |        |          |The base address of XOM Region 0.
     * @var FMC_T::XOMR1STS
     * Offset: 0xD4  XOM Region 1 Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |SIZE      |XOM Region 1 Size
     * |        |          |The page number of XOM Region 1.
     * |[31:8]  |BASE      |XOM Region 1 Base Address
     * |        |          |The base address of XOM Region 1.
     * @var FMC_T::XOMR2STS
     * Offset: 0xD8  XOM Region 2 Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |SIZE      |XOM Region 2 Size
     * |        |          |The page number of XOM Region 2.
     * |[31:8]  |BASE      |XOM Region 2 Base Address
     * |        |          |The base address of XOM Region 2.
     * @var FMC_T::XOMR3STS
     * Offset: 0xDC  XOM Region 3 Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |SIZE      |XOM Region 3 Size
     * |        |          |The page number of XOM Region 3.
     * |[31:8]  |BASE      |XOM Region 3 Base Address
     * |        |          |The base address of XOM Region 3.
     * @var FMC_T::XOMSTS
     * Offset: 0xE0  XOM Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |XOMR0ON   |XOM Region 0 On
     * |        |          |XOM Region 0 active status.
     * |        |          |0 = No active.
     * |        |          |1 = XOM region 0 is active.
     * |[1]     |XOMR1ON   |XOM Region 1 On
     * |        |          |XOM Region 1 active status.
     * |        |          |0 = No active.
     * |        |          |1 = XOM region 1 is active.
     * |[2]     |XOMR2ON   |XOM Region 2 On
     * |        |          |XOM Region 2 active status.
     * |        |          |0 = No active.
     * |        |          |1 = XOM region 2 is active.
     * |[3]     |XOMR3ON   |XOM Region 3 On
     * |        |          |XOM Region 3 active status.
     * |        |          |0 = No active.
     * |        |          |1 = XOM region 3 is active.
     * |[4]     |XOMPEF    |XOM Page Erase Function Fail
     * |        |          |XOM page erase function status. If XOMPEF is set to 1, user needs to erase XOM region again.
     * |        |          |0 = Success.
     * |        |          |1 = Fail.
     * @var FMC_T::SOTPSTS
     * Offset: 0xE4  Secure OTP Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |SOTPLOCK  |Secure OTP Lock (Read Only)
     * |        |          |Secure OTP Storage is for provisioning at the manufacturing stage. This flag indicates that the SOTP Storage is provisioned and immutable.
     * |        |          |0 = Secure OTP is unlock.
     * |        |          |1 = Secure OTP is locked.
     * |[1]     |SOTPREVOKE|Secure OTP Revoke (Read Only)
     * |        |          |The flag indicates the end of the life cycle of SOTP. All contents in SOTP would never be accessible when the SOTPREVOKE flag is set.
     * |        |          |0 = Secure OTP is not revoked.
     * |        |          |1 = Secure OTP is revoked.
     * @var FMC_T::APWPROT0
     * Offset: 0x110  APROM Write Protect Register0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[n]     |APPROENn  |APROM Protect Enable (Write Protect)
     * | n=0,1..|          |This bit indicates which APROM region is protected.
     * | ..31   |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note 1: APROM protect region is 0x0000_0000 + n*(0x2000) to 0x0000_1fff + n*(0x2000).
     * |        |          |Note 2: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var FMC_T::APWPROT1
     * Offset: 0x114  APROM Write Protect Register1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[n-32]  |APPROENn  |APROM Protect Enable (Write Protect)
     * | n=32,33|          |This bit indicates which APROM region is protected.
     * | ..63   |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note 1: APROM protect region is 0x0004_0000 + (n-32)*(0x2000) to 0x0004_1fff + (n-32)*(0x2000).
     * |        |          |Note 2: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var FMC_T::APWPKEEP
     * Offset: 0x118  APROM Write Protect Keep Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |APWPKEEP0 |APROM Write Protect Keep 0 (Write Protect)
     * |        |          |0x55AA = APWPROT0 and APWPKEEP0 register are be locked.
     * |        |          |Others = APWPROT0 and APWPKEEP0 register are free to modify.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * |[31:16] |APWPKEEP1 |APROM Write Protect Keep 1 (Write Protect)
     * |        |          |0x55AA = APWPROT1 and APWPKEEP1 register are be locked.
     * |        |          |Others = APWPROT1 and APWPKEEP1 register are free to modify.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * @var FMC_T::SCACT
     * Offset: 0x11C  Secure Conceal Active Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |SCACT     |Secure Conceal Function Active (Write Protect)
     * |        |          |0 = Secure Conceal function is inactive.
     * |        |          |1 = Secure Conceal function is active.
     * |        |          |Note 1: Secure conceal function active will base on this bit and setting of CONFIG6 is 0x0.
     * |        |          |Note 2: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var FMC_T::LDWPROT
     * Offset: 0x120  LDROM Write Protect Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[n]     |LDPROENn  |LDROM Protect Enable (Write Protect)
     * | n=0    |          |This bit indicates which LDROM region is protected.
     * |        |          |0 = LDROM region n is not protected.
     * |        |          |1 = LDROM region n is protected.
     * |        |          |Note 1: LDROM protect region is 0xF10_0000 + n*(0x2000) to 0xF10_1fff + n*(0x2000).
     * |        |          |Note 2: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var FMC_T::LDWPKEEP
     * Offset: 0x124  LDROM Write Protect Keep Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |LDWPKEEP  |LDROM Write Protect Keep (Write Protect)
     * |        |          |0x55AA = LDWPROT and LDWPKEEP register are be locked.
     * |        |          |Others = LDWPROT and LDWPKEEP register are free to modify.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * @var FMC_T::DFWPROT
     * Offset: 0x128  Data Flash Write Protect Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[n]     |DFPROENn  |Data Flash Protect Enable (Write Protect)
     * | n=0,1..|          |This bit indicates which Data Flash region is protected.
     * | ..3    |          |0 = Data Flash region n is not protected.
     * |        |          |1 = Data Flash region n is protected.
     * |        |          |Note 1: Data Flash protect region is 0xF20_0000 + n*(0x400) to 0xF20_03ff + n*(0x400).
     * |        |          |Note 2: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var FMC_T::DFWPKEEP
     * Offset: 0x12C  Data Flash Write Protect Keep Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |DFWPKEEP  |Data Flash Write Protect Keep (Write Protect)
     * |        |          |0x55AA = DFWPROT and DFWPKEEP register are be locked.
     * |        |          |Others = DFWPROT and DFWPKEEP register are free to modify.
     * |        |          |Note: These bits are write protected. Refer to the SYS_REGLCTL register.
     * @var FMC_T::ECCCTL
     * Offset: 0x130  Error Code Correction Control Register
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
     * @var FMC_T::ECCSTS
     * Offset: 0x134  Error Code Correction Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ECCSEBCF  |ECC Single Error Bits Correction Flag
     * |        |          |This bit is set by hardware when FMC detects and corrects a ECC single error bits fault when CPU access flash or ISP read.
     * |        |          |It need to be cleared by writing 1 to ECCSEBCF.
     * |        |          |When ECCSEBCF and SEBDINTEN(FMC_ECCCTL[0])=1 cause interrupt.
     * |        |          |1 = FMC detects and corrects ECC single error bits fault.
     * |        |          |0 = FMC does not detect ECC single error bits fault.
     * |[1]     |ECCDEBDF  |ECC Double Error Bits Detection Flag
     * |        |          |This bit is set by hardware when FMC detects a ECC double error bits fault when CPU access flash or ISP read.
     * |        |          |It need to be cleared by writing 1 to ECCDEBDF.
     * |        |          |When ECCDEBDF and DEBDINTEN(FMC_ECCCTL[1])=1 cause interrupt.
     * |        |          |1 = FMC detects ECC double error bits fault.
     * |        |          |0 = FMC does not detect ECC double error bits fault.
     * @var FMC_T::ECCSEFAR
     * Offset: 0x138  Error Code Correction Single Error Fault Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ECCSEFAR  |ECC Single Error Fault Address Register (Read Only)
     * |        |          |When FMC detects a ECCSEBCF(FMC_ECCSTS[0]) would record fault address at the register. The register is cleared by writing 1 to ECCSEBCF. ECCSEFAR is 64-bit alignment so ECCSEFAR[2:0] are always 0.
     * @var FMC_T::ECCDEFAR
     * Offset: 0x13C  Error Code Correction Double Error Fault Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ECCDEFAR  |ECC Double Error Fault Address Register (Read Only)
     * |        |          |When FMC detects a ECCDEBDF(FMC_ECCSTS[1]) would record fault address at the register. The register is cleared by writing 1 to ECCDEBDF. ECCDEBDF is 64-bit alignment so ECCDEFAR[2:0] are always 0.
     */

    __IO uint32_t ISPCTL;                /*!< [0x0000] ISP Control Register                                             */
    __IO uint32_t ISPADDR;               /*!< [0x0004] ISP Address Register                                             */
    __IO uint32_t ISPDAT;                /*!< [0x0008] ISP Data Register                                                */
    __IO uint32_t ISPCMD;                /*!< [0x000c] ISP Command Register                                             */
    __IO uint32_t ISPTRG;                /*!< [0x0010] ISP Trigger Control Register                                     */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE0[11];
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t ISPSTS;                /*!< [0x0040] ISP Status Register                                              */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE1[2];
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t CYCCTL;                /*!< [0x004c] Flash Access Cycle Control Register                              */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE2[12];
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t MPDAT0;                /*!< [0x0080] ISP Data0 Register                                               */
    __IO uint32_t MPDAT1;                /*!< [0x0084] ISP Data1 Register                                               */
    __IO uint32_t MPDAT2;                /*!< [0x0088] ISP Data2 Register                                               */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE3[17];
    /// @endcond //HIDDEN_SYMBOLS
    __I  uint32_t XOMR0STS;              /*!< [0x00d0] XOM Region 0 Status Register                                     */
    __I  uint32_t XOMR1STS;              /*!< [0x00d4] XOM Region 1 Status Register                                     */
    __I  uint32_t XOMR2STS;              /*!< [0x00d8] XOM Region 2 Status Register                                     */
    __I  uint32_t XOMR3STS;              /*!< [0x00dc] XOM Region 3 Status Register                                     */
    __I  uint32_t XOMSTS;                /*!< [0x00e0] XOM Status Register                                              */
    __I  uint32_t SOTPSTS;               /*!< [0x00e4] SOTP Status Register                                             */
    __I  uint32_t RESERVE4[10];
    union
    {
        __IO uint32_t APWPROT[2];       /*!< [0x0110-0x0114] APROM Write Protect Register 0-1                           */
        struct
        {
            __IO uint32_t APWPROT0;     /*!< [0x0110] APROM Write Protect Register 0                                    */
            __IO uint32_t APWPROT1;     /*!< [0x0114] APROM Write Protect Register 1                                    */
        };
    };
    __IO uint32_t APWPKEEP;              /*!< [0x0118] APROM Write Protect Keep Register                                */
    __IO uint32_t SCACT;                 /*!< [0x011c] Secure Conceal Active Register                                   */
    __IO uint32_t LDWPROT;               /*!< [0x0120] LDROM Write Protect Register                                     */
    __IO uint32_t LDWPKEEP;              /*!< [0x0124] LDROM Write Protect Keep Register                                */
    __IO uint32_t DFWPROT;               /*!< [0x0128] Data Flash Write Protect Register                                */
    __IO uint32_t DFWPKEEP;              /*!< [0x012c] Data Flash Write Protect Keep Register                           */
    __IO uint32_t ECCCTL;                /*!< [0x0130] ECC Control Register                                             */
    __IO uint32_t ECCSTS;                /*!< [0x0134] ECC Status Register                                              */
    __I  uint32_t ECCSEFAR;              /*!< [0x0138] ECC Single Error Fault Address Register                          */
    __I  uint32_t ECCDEFAR;              /*!< [0x013c] ECC Double Error Fault Address Register                          */
} FMC_T;

/**
    @addtogroup FMC_CONST FMC Bit Field Definition
    Constant Definitions for FMC Controller
@{ */

#define FMC_ISPCTL_ISPEN_Pos             (0)                                               /*!< FMC_T::ISPCTL: ISPEN Position          */
#define FMC_ISPCTL_ISPEN_Msk             (0x1ul << FMC_ISPCTL_ISPEN_Pos)                   /*!< FMC_T::ISPCTL: ISPEN Mask              */

#define FMC_ISPCTL_APUEN_Pos             (3)                                               /*!< FMC_T::ISPCTL: APUEN Position          */
#define FMC_ISPCTL_APUEN_Msk             (0x1ul << FMC_ISPCTL_APUEN_Pos)                   /*!< FMC_T::ISPCTL: APUEN Mask              */

#define FMC_ISPCTL_CFGUEN_Pos            (4)                                               /*!< FMC_T::ISPCTL: CFGUEN Position         */
#define FMC_ISPCTL_CFGUEN_Msk            (0x1ul << FMC_ISPCTL_CFGUEN_Pos)                  /*!< FMC_T::ISPCTL: CFGUEN Mask             */

#define FMC_ISPCTL_LDUEN_Pos             (5)                                               /*!< FMC_T::ISPCTL: LDUEN Position          */
#define FMC_ISPCTL_LDUEN_Msk             (0x1ul << FMC_ISPCTL_LDUEN_Pos)                   /*!< FMC_T::ISPCTL: LDUEN Mask              */

#define FMC_ISPCTL_ISPFF_Pos             (6)                                               /*!< FMC_T::ISPCTL: ISPFF Position          */
#define FMC_ISPCTL_ISPFF_Msk             (0x1ul << FMC_ISPCTL_ISPFF_Pos)                   /*!< FMC_T::ISPCTL: ISPFF Mask              */

#define FMC_ISPCTL_DFUEN_Pos             (7)                                               /*!< FMC_T::ISPCTL: DFUEN Position          */
#define FMC_ISPCTL_DFUEN_Msk             (0x1ul << FMC_ISPCTL_DFUEN_Pos)                   /*!< FMC_T::ISPCTL: DFUEN Mask              */

#define FMC_ISPCTL_INTEN_Pos             (24)                                              /*!< FMC_T::ISPCTL: INTEN Position          */
#define FMC_ISPCTL_INTEN_Msk             (0x1ul << FMC_ISPCTL_INTEN_Pos)                   /*!< FMC_T::ISPCTL: INTEN Mask              */

#define FMC_ISPADDR_ISPADDR_Pos          (0)                                               /*!< FMC_T::ISPADDR: ISPADDR Position       */
#define FMC_ISPADDR_ISPADDR_Msk          (0xfffffffful << FMC_ISPADDR_ISPADDR_Pos)         /*!< FMC_T::ISPADDR: ISPADDR Mask           */

#define FMC_ISPDAT_ISPDAT_Pos            (0)                                               /*!< FMC_T::ISPDAT: ISPDAT Position         */
#define FMC_ISPDAT_ISPDAT_Msk            (0xfffffffful << FMC_ISPDAT_ISPDAT_Pos)           /*!< FMC_T::ISPDAT: ISPDAT Mask             */

#define FMC_ISPCMD_CMD_Pos               (0)                                               /*!< FMC_T::ISPCMD: CMD Position            */
#define FMC_ISPCMD_CMD_Msk               (0x7ful << FMC_ISPCMD_CMD_Pos)                    /*!< FMC_T::ISPCMD: CMD Mask                */

#define FMC_ISPTRG_ISPGO_Pos             (0)                                               /*!< FMC_T::ISPTRG: ISPGO Position          */
#define FMC_ISPTRG_ISPGO_Msk             (0x1ul << FMC_ISPTRG_ISPGO_Pos)                   /*!< FMC_T::ISPTRG: ISPGO Mask              */

#define FMC_ISPSTS_ISPBUSY_Pos           (0)                                               /*!< FMC_T::ISPSTS: ISPBUSY Position        */
#define FMC_ISPSTS_ISPBUSY_Msk           (0x1ul << FMC_ISPSTS_ISPBUSY_Pos)                 /*!< FMC_T::ISPSTS: ISPBUSY Mask            */

#define FMC_ISPSTS_CBS_Pos               (2)                                               /*!< FMC_T::ISPSTS: CBS Position            */
#define FMC_ISPSTS_CBS_Msk               (0x1ul << FMC_ISPSTS_CBS_Pos)                     /*!< FMC_T::ISPSTS: CBS Mask                */

#define FMC_ISPSTS_SCFF_Pos              (4)                                               /*!< FMC_T::ISPSTS: SCFF Position           */
#define FMC_ISPSTS_SCFF_Msk              (0x1ul << FMC_ISPSTS_SCFF_Pos)                    /*!< FMC_T::ISPSTS: SCFF Mask               */

#define FMC_ISPSTS_CFGWEFF_Pos           (5)                                               /*!< FMC_T::ISPSTS: CFGWEFF Position        */
#define FMC_ISPSTS_CFGWEFF_Msk           (0x1ul << FMC_ISPSTS_CFGWEFF_Pos)                 /*!< FMC_T::ISPSTS: CFGWEFF Mask            */

#define FMC_ISPSTS_ISPFF_Pos             (6)                                               /*!< FMC_T::ISPSTS: ISPFF Position          */
#define FMC_ISPSTS_ISPFF_Msk             (0x1ul << FMC_ISPSTS_ISPFF_Pos)                   /*!< FMC_T::ISPSTS: ISPFF Mask              */

#define FMC_ISPSTS_ALLONE_Pos            (7)                                               /*!< FMC_T::ISPSTS: ALLONE Position         */
#define FMC_ISPSTS_ALLONE_Msk            (0x1ul << FMC_ISPSTS_ALLONE_Pos)                  /*!< FMC_T::ISPSTS: ALLONE Mask             */

#define FMC_ISPSTS_INTFLAG_Pos           (8)                                               /*!< FMC_T::ISPSTS: INTFLAG Position        */
#define FMC_ISPSTS_INTFLAG_Msk           (0x01ul << FMC_ISPSTS_INTFLAG_Pos)                /*!< FMC_T::ISPSTS: INTFLAG Mask            */

#define FMC_ISPSTS_NSINTFLAG_Pos         (24)                                              /*!< FMC_T::ISPSTS: NSINTFLAG Position      */
#define FMC_ISPSTS_NSINTFLAG_Msk         (0x01ul << FMC_ISPSTS_NSINTFLAG_Pos)              /*!< FMC_T::ISPSTS: NSINTFLAG Mask          */

#define FMC_ISPSTS_VECMAP_Pos            (9)                                               /*!< FMC_T::ISPSTS: VECMAP Position         */
#define FMC_ISPSTS_VECMAP_Msk            (0x7fffful << FMC_ISPSTS_VECMAP_Pos)              /*!< FMC_T::ISPSTS: VECMAP Mask             */

#define FMC_ISPSTS_ISPCERR_Pos           (28)                                              /*!< FMC_T::ISPSTS: ISPCERR Position        */
#define FMC_ISPSTS_ISPCERR_Msk           (0x1ul << FMC_ISPSTS_ISPCERR_Pos)                 /*!< FMC_T::ISPSTS: ISPCERR Mask            */

#define FMC_ISPSTS_MIRBOUND_Pos          (29)                                              /*!< FMC_T::ISPSTS: MIRBOUND Position       */
#define FMC_ISPSTS_MIRBOUND_Msk          (0x1ul << FMC_ISPSTS_MIRBOUND_Pos)                /*!< FMC_T::ISPSTS: MIRBOUND Mask           */

#define FMC_ISPSTS_FBS_Pos               (30)                                              /*!< FMC_T::ISPSTS: FBS Position            */
#define FMC_ISPSTS_FBS_Msk               (0x1ul << FMC_ISPSTS_FBS_Pos)                     /*!< FMC_T::ISPSTS: FBS Mask                */

#define FMC_CYCCTL_CYCLE_Pos             (0)                                               /*!< FMC_T::CYCCTL: CYCLE Position          */
#define FMC_CYCCTL_CYCLE_Msk             (0xful << FMC_CYCCTL_CYCLE_Pos)                   /*!< FMC_T::CYCCTL: CYCLE Mask              */

#define FMC_MPDAT0_ISPDAT0_Pos           (0)                                               /*!< FMC_T::MPDAT0: ISPDAT0 Position        */
#define FMC_MPDAT0_ISPDAT0_Msk           (0xfffffffful << FMC_MPDAT0_ISPDAT0_Pos)          /*!< FMC_T::MPDAT0: ISPDAT0 Mask            */

#define FMC_MPDAT1_ISPDAT1_Pos           (0)                                               /*!< FMC_T::MPDAT1: ISPDAT1 Position        */
#define FMC_MPDAT1_ISPDAT1_Msk           (0xfffffffful << FMC_MPDAT1_ISPDAT1_Pos)          /*!< FMC_T::MPDAT1: ISPDAT1 Mask            */

#define FMC_MPDAT2_ISPDAT2_Pos           (0)                                               /*!< FMC_T::MPDAT2: ISPDAT2 Position        */
#define FMC_MPDAT2_ISPDAT2_Msk           (0xfful << FMC_MPDAT2_ISPDAT2_Pos)                /*!< FMC_T::MPDAT2: ISPDAT2 Mask            */

#define FMC_XOMR0STS_SIZE_Pos            (0)                                               /*!< FMC_T::XOMR0STS: SIZE Position         */
#define FMC_XOMR0STS_SIZE_Msk            (0xfful << FMC_XOMR0STS_SIZE_Pos)                 /*!< FMC_T::XOMR0STS: SIZE Mask             */

#define FMC_XOMR0STS_BASE_Pos            (8)                                               /*!< FMC_T::XOMR0STS: BASE Position         */
#define FMC_XOMR0STS_BASE_Msk            (0xfffffful << FMC_XOMR0STS_BASE_Pos)             /*!< FMC_T::XOMR0STS: BASE Mask             */

#define FMC_XOMR1STS_SIZE_Pos            (0)                                               /*!< FMC_T::XOMR1STS: SIZE Position         */
#define FMC_XOMR1STS_SIZE_Msk            (0xfful << FMC_XOMR1STS_SIZE_Pos)                 /*!< FMC_T::XOMR1STS: SIZE Mask             */

#define FMC_XOMR1STS_BASE_Pos            (8)                                               /*!< FMC_T::XOMR1STS: BASE Position         */
#define FMC_XOMR1STS_BASE_Msk            (0xfffffful << FMC_XOMR1STS_BASE_Pos)             /*!< FMC_T::XOMR1STS: BASE Mask             */

#define FMC_XOMR2STS_SIZE_Pos            (0)                                               /*!< FMC_T::XOMR2STS: SIZE Position         */
#define FMC_XOMR2STS_SIZE_Msk            (0xfful << FMC_XOMR2STS_SIZE_Pos)                 /*!< FMC_T::XOMR2STS: SIZE Mask             */

#define FMC_XOMR2STS_BASE_Pos            (8)                                               /*!< FMC_T::XOMR2STS: BASE Position         */
#define FMC_XOMR2STS_BASE_Msk            (0xfffffful << FMC_XOMR2STS_BASE_Pos)             /*!< FMC_T::XOMR2STS: BASE Mask             */

#define FMC_XOMR3STS_SIZE_Pos            (0)                                               /*!< FMC_T::XOMR3STS: SIZE Position         */
#define FMC_XOMR3STS_SIZE_Msk            (0xfful << FMC_XOMR3STS_SIZE_Pos)                 /*!< FMC_T::XOMR3STS: SIZE Mask             */

#define FMC_XOMR3STS_BASE_Pos            (8)                                               /*!< FMC_T::XOMR3STS: BASE Position         */
#define FMC_XOMR3STS_BASE_Msk            (0xfffffful << FMC_XOMR3STS_BASE_Pos)             /*!< FMC_T::XOMR3STS: BASE Mask             */

#define FMC_XOMSTS_XOMR0ON_Pos           (0)                                               /*!< FMC_T::XOMSTS: XOMR0ON Position        */
#define FMC_XOMSTS_XOMR0ON_Msk           (0x1ul << FMC_XOMSTS_XOMR0ON_Pos)                 /*!< FMC_T::XOMSTS: XOMR0ON Mask            */

#define FMC_XOMSTS_XOMR1ON_Pos           (1)                                               /*!< FMC_T::XOMSTS: XOMR1ON Position        */
#define FMC_XOMSTS_XOMR1ON_Msk           (0x1ul << FMC_XOMSTS_XOMR1ON_Pos)                 /*!< FMC_T::XOMSTS: XOMR1ON Mask            */

#define FMC_XOMSTS_XOMR2ON_Pos           (2)                                               /*!< FMC_T::XOMSTS: XOMR2ON Position        */
#define FMC_XOMSTS_XOMR2ON_Msk           (0x1ul << FMC_XOMSTS_XOMR2ON_Pos)                 /*!< FMC_T::XOMSTS: XOMR2ON Mask            */

#define FMC_XOMSTS_XOMR3ON_Pos           (3)                                               /*!< FMC_T::XOMSTS: XOMR3ON Position        */
#define FMC_XOMSTS_XOMR3ON_Msk           (0x1ul << FMC_XOMSTS_XOMR3ON_Pos)                 /*!< FMC_T::XOMSTS: XOMR3ON Mask            */

#define FMC_XOMSTS_XOMPEF_Pos            (4)                                               /*!< FMC_T::XOMSTS: XOMPEF Position         */
#define FMC_XOMSTS_XOMPEF_Msk            (0x1ul << FMC_XOMSTS_XOMPEF_Pos)                  /*!< FMC_T::XOMSTS: XOMPEF Mask             */

#define FMC_SOTPSTS_SOTPLOCK_Pos         (0)                                               /*!< FMC_T::SOTPSTS: SOTPLOCK Position      */
#define FMC_SOTPSTS_SOTPLOCK_Msk         (0x1ul << FMC_SOTPSTS_SOTPLOCK_Pos)               /*!< FMC_T::SOTPSTS: SOTPLOCK Mask          */

#define FMC_SOTPSTS_SOTPREVOKE_Pos       (1)                                               /*!< FMC_T::SOTPSTS: SOTPREVOKE Position    */
#define FMC_SOTPSTS_SOTPREVOKE_Msk       (0x1ul << FMC_SOTPSTS_SOTPREVOKE_Pos)             /*!< FMC_T::SOTPSTS: SOTPREVOKE Mask        */

#define FMC_APWPROT0_APPROEN0_Pos        (0)                                               /*!< FMC_T::APWPROT0: APPROEN0 Position     */
#define FMC_APWPROT0_APPROEN0_Msk        (0x1ul << FMC_APWPROT0_APPROEN0_Pos)              /*!< FMC_T::APWPROT0: APPROEN0 Mask         */

#define FMC_APWPROT0_APPROEN1_Pos        (1)                                               /*!< FMC_T::APWPROT0: APPROEN1 Position     */
#define FMC_APWPROT0_APPROEN1_Msk        (0x1ul << FMC_APWPROT0_APPROEN1_Pos)              /*!< FMC_T::APWPROT0: APPROEN1 Mask         */

#define FMC_APWPROT0_APPROEN2_Pos        (2)                                               /*!< FMC_T::APWPROT0: APPROEN2 Position     */
#define FMC_APWPROT0_APPROEN2_Msk        (0x1ul << FMC_APWPROT0_APPROEN2_Pos)              /*!< FMC_T::APWPROT0: APPROEN2 Mask         */

#define FMC_APWPROT0_APPROEN3_Pos        (3)                                               /*!< FMC_T::APWPROT0: APPROEN3 Position     */
#define FMC_APWPROT0_APPROEN3_Msk        (0x1ul << FMC_APWPROT0_APPROEN3_Pos)              /*!< FMC_T::APWPROT0: APPROEN3 Mask         */

#define FMC_APWPROT0_APPROEN4_Pos        (4)                                               /*!< FMC_T::APWPROT0: APPROEN4 Position     */
#define FMC_APWPROT0_APPROEN4_Msk        (0x1ul << FMC_APWPROT0_APPROEN4_Pos)              /*!< FMC_T::APWPROT0: APPROEN4 Mask         */

#define FMC_APWPROT0_APPROEN5_Pos        (5)                                               /*!< FMC_T::APWPROT0: APPROEN5 Position     */
#define FMC_APWPROT0_APPROEN5_Msk        (0x1ul << FMC_APWPROT0_APPROEN5_Pos)              /*!< FMC_T::APWPROT0: APPROEN5 Mask         */

#define FMC_APWPROT0_APPROEN6_Pos        (6)                                               /*!< FMC_T::APWPROT0: APPROEN6 Position     */
#define FMC_APWPROT0_APPROEN6_Msk        (0x1ul << FMC_APWPROT0_APPROEN6_Pos)              /*!< FMC_T::APWPROT0: APPROEN6 Mask         */

#define FMC_APWPROT0_APPROEN7_Pos        (7)                                               /*!< FMC_T::APWPROT0: APPROEN7 Position     */
#define FMC_APWPROT0_APPROEN7_Msk        (0x1ul << FMC_APWPROT0_APPROEN7_Pos)              /*!< FMC_T::APWPROT0: APPROEN7 Mask         */

#define FMC_APWPROT0_APPROEN8_Pos        (8)                                               /*!< FMC_T::APWPROT0: APPROEN8 Position     */
#define FMC_APWPROT0_APPROEN8_Msk        (0x1ul << FMC_APWPROT0_APPROEN8_Pos)              /*!< FMC_T::APWPROT0: APPROEN8 Mask         */

#define FMC_APWPROT0_APPROEN9_Pos        (9)                                               /*!< FMC_T::APWPROT0: APPROEN9 Position     */
#define FMC_APWPROT0_APPROEN9_Msk        (0x1ul << FMC_APWPROT0_APPROEN9_Pos)              /*!< FMC_T::APWPROT0: APPROEN9 Mask         */

#define FMC_APWPROT0_APPROEN10_Pos       (10)                                              /*!< FMC_T::APWPROT0: APPROEN10 Position    */
#define FMC_APWPROT0_APPROEN10_Msk       (0x1ul << FMC_APWPROT0_APPROEN10_Pos)             /*!< FMC_T::APWPROT0: APPROEN10 Mask        */

#define FMC_APWPROT0_APPROEN11_Pos       (11)                                              /*!< FMC_T::APWPROT0: APPROEN11 Position    */
#define FMC_APWPROT0_APPROEN11_Msk       (0x1ul << FMC_APWPROT0_APPROEN11_Pos)             /*!< FMC_T::APWPROT0: APPROEN11 Mask        */

#define FMC_APWPROT0_APPROEN12_Pos       (12)                                              /*!< FMC_T::APWPROT0: APPROEN12 Position    */
#define FMC_APWPROT0_APPROEN12_Msk       (0x1ul << FMC_APWPROT0_APPROEN12_Pos)             /*!< FMC_T::APWPROT0: APPROEN12 Mask        */

#define FMC_APWPROT0_APPROEN13_Pos       (13)                                              /*!< FMC_T::APWPROT0: APPROEN13 Position    */
#define FMC_APWPROT0_APPROEN13_Msk       (0x1ul << FMC_APWPROT0_APPROEN13_Pos)             /*!< FMC_T::APWPROT0: APPROEN13 Mask        */

#define FMC_APWPROT0_APPROEN14_Pos       (14)                                              /*!< FMC_T::APWPROT0: APPROEN14 Position    */
#define FMC_APWPROT0_APPROEN14_Msk       (0x1ul << FMC_APWPROT0_APPROEN14_Pos)             /*!< FMC_T::APWPROT0: APPROEN14 Mask        */

#define FMC_APWPROT0_APPROEN15_Pos       (15)                                              /*!< FMC_T::APWPROT0: APPROEN15 Position    */
#define FMC_APWPROT0_APPROEN15_Msk       (0x1ul << FMC_APWPROT0_APPROEN15_Pos)             /*!< FMC_T::APWPROT0: APPROEN15 Mask        */

#define FMC_APWPROT0_APPROEN16_Pos       (16)                                              /*!< FMC_T::APWPROT0: APPROEN16 Position    */
#define FMC_APWPROT0_APPROEN16_Msk       (0x1ul << FMC_APWPROT0_APPROEN16_Pos)             /*!< FMC_T::APWPROT0: APPROEN16 Mask        */

#define FMC_APWPROT0_APPROEN17_Pos       (17)                                              /*!< FMC_T::APWPROT0: APPROEN17 Position    */
#define FMC_APWPROT0_APPROEN17_Msk       (0x1ul << FMC_APWPROT0_APPROEN17_Pos)             /*!< FMC_T::APWPROT0: APPROEN17 Mask        */

#define FMC_APWPROT0_APPROEN18_Pos       (18)                                              /*!< FMC_T::APWPROT0: APPROEN18 Position    */
#define FMC_APWPROT0_APPROEN18_Msk       (0x1ul << FMC_APWPROT0_APPROEN18_Pos)             /*!< FMC_T::APWPROT0: APPROEN18 Mask        */

#define FMC_APWPROT0_APPROEN19_Pos       (19)                                              /*!< FMC_T::APWPROT0: APPROEN19 Position    */
#define FMC_APWPROT0_APPROEN19_Msk       (0x1ul << FMC_APWPROT0_APPROEN19_Pos)             /*!< FMC_T::APWPROT0: APPROEN19 Mask        */

#define FMC_APWPROT0_APPROEN20_Pos       (20)                                              /*!< FMC_T::APWPROT0: APPROEN20 Position    */
#define FMC_APWPROT0_APPROEN20_Msk       (0x1ul << FMC_APWPROT0_APPROEN20_Pos)             /*!< FMC_T::APWPROT0: APPROEN20 Mask        */

#define FMC_APWPROT0_APPROEN21_Pos       (21)                                              /*!< FMC_T::APWPROT0: APPROEN21 Position    */
#define FMC_APWPROT0_APPROEN21_Msk       (0x1ul << FMC_APWPROT0_APPROEN21_Pos)             /*!< FMC_T::APWPROT0: APPROEN21 Mask        */

#define FMC_APWPROT0_APPROEN22_Pos       (22)                                              /*!< FMC_T::APWPROT0: APPROEN22 Position    */
#define FMC_APWPROT0_APPROEN22_Msk       (0x1ul << FMC_APWPROT0_APPROEN22_Pos)             /*!< FMC_T::APWPROT0: APPROEN22 Mask        */

#define FMC_APWPROT0_APPROEN23_Pos       (23)                                              /*!< FMC_T::APWPROT0: APPROEN23 Position    */
#define FMC_APWPROT0_APPROEN23_Msk       (0x1ul << FMC_APWPROT0_APPROEN23_Pos)             /*!< FMC_T::APWPROT0: APPROEN23 Mask        */

#define FMC_APWPROT0_APPROEN24_Pos       (24)                                              /*!< FMC_T::APWPROT0: APPROEN24 Position    */
#define FMC_APWPROT0_APPROEN24_Msk       (0x1ul << FMC_APWPROT0_APPROEN24_Pos)             /*!< FMC_T::APWPROT0: APPROEN24 Mask        */

#define FMC_APWPROT0_APPROEN25_Pos       (25)                                              /*!< FMC_T::APWPROT0: APPROEN25 Position    */
#define FMC_APWPROT0_APPROEN25_Msk       (0x1ul << FMC_APWPROT0_APPROEN25_Pos)             /*!< FMC_T::APWPROT0: APPROEN25 Mask        */

#define FMC_APWPROT0_APPROEN26_Pos       (26)                                              /*!< FMC_T::APWPROT0: APPROEN26 Position    */
#define FMC_APWPROT0_APPROEN26_Msk       (0x1ul << FMC_APWPROT0_APPROEN26_Pos)             /*!< FMC_T::APWPROT0: APPROEN26 Mask        */

#define FMC_APWPROT0_APPROEN27_Pos       (27)                                              /*!< FMC_T::APWPROT0: APPROEN27 Position    */
#define FMC_APWPROT0_APPROEN27_Msk       (0x1ul << FMC_APWPROT0_APPROEN27_Pos)             /*!< FMC_T::APWPROT0: APPROEN27 Mask        */

#define FMC_APWPROT0_APPROEN28_Pos       (28)                                              /*!< FMC_T::APWPROT0: APPROEN28 Position    */
#define FMC_APWPROT0_APPROEN28_Msk       (0x1ul << FMC_APWPROT0_APPROEN28_Pos)             /*!< FMC_T::APWPROT0: APPROEN28 Mask        */

#define FMC_APWPROT0_APPROEN29_Pos       (29)                                              /*!< FMC_T::APWPROT0: APPROEN29 Position    */
#define FMC_APWPROT0_APPROEN29_Msk       (0x1ul << FMC_APWPROT0_APPROEN29_Pos)             /*!< FMC_T::APWPROT0: APPROEN29 Mask        */

#define FMC_APWPROT0_APPROEN30_Pos       (30)                                              /*!< FMC_T::APWPROT0: APPROEN30 Position    */
#define FMC_APWPROT0_APPROEN30_Msk       (0x1ul << FMC_APWPROT0_APPROEN30_Pos)             /*!< FMC_T::APWPROT0: APPROEN30 Mask        */

#define FMC_APWPROT0_APPROEN31_Pos       (31)                                              /*!< FMC_T::APWPROT0: APPROEN31 Position    */
#define FMC_APWPROT0_APPROEN31_Msk       (0x1ul << FMC_APWPROT0_APPROEN31_Pos)             /*!< FMC_T::APWPROT0: APPROEN31 Mask        */

#define FMC_APWPROT1_APPROEN32_Pos       (0)                                               /*!< FMC_T::APWPROT1: APPROEN32 Position    */
#define FMC_APWPROT1_APPROEN32_Msk       (0x1ul << FMC_APWPROT1_APPROEN32_Pos)             /*!< FMC_T::APWPROT1: APPROEN32 Mask        */

#define FMC_APWPROT1_APPROEN33_Pos       (1)                                               /*!< FMC_T::APWPROT1: APPROEN33 Position    */
#define FMC_APWPROT1_APPROEN33_Msk       (0x1ul << FMC_APWPROT1_APPROEN33_Pos)             /*!< FMC_T::APWPROT1: APPROEN33 Mask        */

#define FMC_APWPROT1_APPROEN34_Pos       (2)                                               /*!< FMC_T::APWPROT1: APPROEN34 Position    */
#define FMC_APWPROT1_APPROEN34_Msk       (0x1ul << FMC_APWPROT1_APPROEN34_Pos)             /*!< FMC_T::APWPROT1: APPROEN34 Mask        */

#define FMC_APWPROT1_APPROEN35_Pos       (3)                                               /*!< FMC_T::APWPROT1: APPROEN35 Position    */
#define FMC_APWPROT1_APPROEN35_Msk       (0x1ul << FMC_APWPROT1_APPROEN35_Pos)             /*!< FMC_T::APWPROT1: APPROEN35 Mask        */

#define FMC_APWPROT1_APPROEN36_Pos       (4)                                               /*!< FMC_T::APWPROT1: APPROEN36 Position    */
#define FMC_APWPROT1_APPROEN36_Msk       (0x1ul << FMC_APWPROT1_APPROEN36_Pos)             /*!< FMC_T::APWPROT1: APPROEN36 Mask        */

#define FMC_APWPROT1_APPROEN37_Pos       (5)                                               /*!< FMC_T::APWPROT1: APPROEN37 Position    */
#define FMC_APWPROT1_APPROEN37_Msk       (0x1ul << FMC_APWPROT1_APPROEN37_Pos)             /*!< FMC_T::APWPROT1: APPROEN37 Mask        */

#define FMC_APWPROT1_APPROEN38_Pos       (6)                                               /*!< FMC_T::APWPROT1: APPROEN38 Position    */
#define FMC_APWPROT1_APPROEN38_Msk       (0x1ul << FMC_APWPROT1_APPROEN38_Pos)             /*!< FMC_T::APWPROT1: APPROEN38 Mask        */

#define FMC_APWPROT1_APPROEN39_Pos       (7)                                               /*!< FMC_T::APWPROT1: APPROEN39 Position    */
#define FMC_APWPROT1_APPROEN39_Msk       (0x1ul << FMC_APWPROT1_APPROEN39_Pos)             /*!< FMC_T::APWPROT1: APPROEN39 Mask        */

#define FMC_APWPROT1_APPROEN40_Pos       (8)                                               /*!< FMC_T::APWPROT1: APPROEN40 Position    */
#define FMC_APWPROT1_APPROEN40_Msk       (0x1ul << FMC_APWPROT1_APPROEN40_Pos)             /*!< FMC_T::APWPROT1: APPROEN40 Mask        */

#define FMC_APWPROT1_APPROEN41_Pos       (9)                                               /*!< FMC_T::APWPROT1: APPROEN41 Position    */
#define FMC_APWPROT1_APPROEN41_Msk       (0x1ul << FMC_APWPROT1_APPROEN41_Pos)             /*!< FMC_T::APWPROT1: APPROEN41 Mask        */

#define FMC_APWPROT1_APPROEN42_Pos       (10)                                              /*!< FMC_T::APWPROT1: APPROEN42 Position    */
#define FMC_APWPROT1_APPROEN42_Msk       (0x1ul << FMC_APWPROT1_APPROEN42_Pos)             /*!< FMC_T::APWPROT1: APPROEN42 Mask        */

#define FMC_APWPROT1_APPROEN43_Pos       (11)                                              /*!< FMC_T::APWPROT1: APPROEN43 Position    */
#define FMC_APWPROT1_APPROEN43_Msk       (0x1ul << FMC_APWPROT1_APPROEN43_Pos)             /*!< FMC_T::APWPROT1: APPROEN43 Mask        */

#define FMC_APWPROT1_APPROEN44_Pos       (12)                                              /*!< FMC_T::APWPROT1: APPROEN44 Position    */
#define FMC_APWPROT1_APPROEN44_Msk       (0x1ul << FMC_APWPROT1_APPROEN44_Pos)             /*!< FMC_T::APWPROT1: APPROEN44 Mask        */

#define FMC_APWPROT1_APPROEN45_Pos       (13)                                              /*!< FMC_T::APWPROT1: APPROEN45 Position    */
#define FMC_APWPROT1_APPROEN45_Msk       (0x1ul << FMC_APWPROT1_APPROEN45_Pos)             /*!< FMC_T::APWPROT1: APPROEN45 Mask        */

#define FMC_APWPROT1_APPROEN46_Pos       (14)                                              /*!< FMC_T::APWPROT1: APPROEN46 Position    */
#define FMC_APWPROT1_APPROEN46_Msk       (0x1ul << FMC_APWPROT1_APPROEN46_Pos)             /*!< FMC_T::APWPROT1: APPROEN46 Mask        */

#define FMC_APWPROT1_APPROEN47_Pos       (15)                                              /*!< FMC_T::APWPROT1: APPROEN47 Position    */
#define FMC_APWPROT1_APPROEN47_Msk       (0x1ul << FMC_APWPROT1_APPROEN47_Pos)             /*!< FMC_T::APWPROT1: APPROEN47 Mask        */

#define FMC_APWPROT1_APPROEN48_Pos       (16)                                              /*!< FMC_T::APWPROT1: APPROEN48 Position    */
#define FMC_APWPROT1_APPROEN48_Msk       (0x1ul << FMC_APWPROT1_APPROEN48_Pos)             /*!< FMC_T::APWPROT1: APPROEN48 Mask        */

#define FMC_APWPROT1_APPROEN49_Pos       (17)                                              /*!< FMC_T::APWPROT1: APPROEN49 Position    */
#define FMC_APWPROT1_APPROEN49_Msk       (0x1ul << FMC_APWPROT1_APPROEN49_Pos)             /*!< FMC_T::APWPROT1: APPROEN49 Mask        */

#define FMC_APWPROT1_APPROEN50_Pos       (18)                                              /*!< FMC_T::APWPROT1: APPROEN50 Position    */
#define FMC_APWPROT1_APPROEN50_Msk       (0x1ul << FMC_APWPROT1_APPROEN50_Pos)             /*!< FMC_T::APWPROT1: APPROEN50 Mask        */

#define FMC_APWPROT1_APPROEN51_Pos       (19)                                              /*!< FMC_T::APWPROT1: APPROEN51 Position    */
#define FMC_APWPROT1_APPROEN51_Msk       (0x1ul << FMC_APWPROT1_APPROEN51_Pos)             /*!< FMC_T::APWPROT1: APPROEN51 Mask        */

#define FMC_APWPROT1_APPROEN52_Pos       (20)                                              /*!< FMC_T::APWPROT1: APPROEN52 Position    */
#define FMC_APWPROT1_APPROEN52_Msk       (0x1ul << FMC_APWPROT1_APPROEN52_Pos)             /*!< FMC_T::APWPROT1: APPROEN52 Mask        */

#define FMC_APWPROT1_APPROEN53_Pos       (21)                                              /*!< FMC_T::APWPROT1: APPROEN53 Position    */
#define FMC_APWPROT1_APPROEN53_Msk       (0x1ul << FMC_APWPROT1_APPROEN53_Pos)             /*!< FMC_T::APWPROT1: APPROEN53 Mask        */

#define FMC_APWPROT1_APPROEN54_Pos       (22)                                              /*!< FMC_T::APWPROT1: APPROEN54 Position    */
#define FMC_APWPROT1_APPROEN54_Msk       (0x1ul << FMC_APWPROT1_APPROEN54_Pos)             /*!< FMC_T::APWPROT1: APPROEN54 Mask        */

#define FMC_APWPROT1_APPROEN55_Pos       (23)                                              /*!< FMC_T::APWPROT1: APPROEN55 Position    */
#define FMC_APWPROT1_APPROEN55_Msk       (0x1ul << FMC_APWPROT1_APPROEN55_Pos)             /*!< FMC_T::APWPROT1: APPROEN55 Mask        */

#define FMC_APWPROT1_APPROEN56_Pos       (24)                                              /*!< FMC_T::APWPROT1: APPROEN56 Position    */
#define FMC_APWPROT1_APPROEN56_Msk       (0x1ul << FMC_APWPROT1_APPROEN56_Pos)             /*!< FMC_T::APWPROT1: APPROEN56 Mask        */

#define FMC_APWPROT1_APPROEN57_Pos       (25)                                              /*!< FMC_T::APWPROT1: APPROEN57 Position    */
#define FMC_APWPROT1_APPROEN57_Msk       (0x1ul << FMC_APWPROT1_APPROEN57_Pos)             /*!< FMC_T::APWPROT1: APPROEN57 Mask        */

#define FMC_APWPROT1_APPROEN58_Pos       (26)                                              /*!< FMC_T::APWPROT1: APPROEN58 Position    */
#define FMC_APWPROT1_APPROEN58_Msk       (0x1ul << FMC_APWPROT1_APPROEN58_Pos)             /*!< FMC_T::APWPROT1: APPROEN58 Mask        */

#define FMC_APWPROT1_APPROEN59_Pos       (27)                                              /*!< FMC_T::APWPROT1: APPROEN59 Position    */
#define FMC_APWPROT1_APPROEN59_Msk       (0x1ul << FMC_APWPROT1_APPROEN59_Pos)             /*!< FMC_T::APWPROT1: APPROEN59 Mask        */

#define FMC_APWPROT1_APPROEN60_Pos       (28)                                              /*!< FMC_T::APWPROT1: APPROEN60 Position    */
#define FMC_APWPROT1_APPROEN60_Msk       (0x1ul << FMC_APWPROT1_APPROEN60_Pos)             /*!< FMC_T::APWPROT1: APPROEN60 Mask        */

#define FMC_APWPROT1_APPROEN61_Pos       (29)                                              /*!< FMC_T::APWPROT1: APPROEN61 Position    */
#define FMC_APWPROT1_APPROEN61_Msk       (0x1ul << FMC_APWPROT1_APPROEN61_Pos)             /*!< FMC_T::APWPROT1: APPROEN61 Mask        */

#define FMC_APWPROT1_APPROEN62_Pos       (30)                                              /*!< FMC_T::APWPROT1: APPROEN62 Position    */
#define FMC_APWPROT1_APPROEN62_Msk       (0x1ul << FMC_APWPROT1_APPROEN62_Pos)             /*!< FMC_T::APWPROT1: APPROEN62 Mask        */

#define FMC_APWPROT1_APPROEN63_Pos       (31)                                              /*!< FMC_T::APWPROT1: APPROEN63 Position    */
#define FMC_APWPROT1_APPROEN63_Msk       (0x1ul << FMC_APWPROT1_APPROEN63_Pos)             /*!< FMC_T::APWPROT1: APPROEN63 Mask        */

#define FMC_APWPKEEP_APWPKEEP0_Pos       (0)                                               /*!< FMC_T::APWPKEEP: APWPKEEP0 Position    */
#define FMC_APWPKEEP_APWPKEEP0_Msk       (0xfffful << FMC_APWPKEEP_APWPKEEP0_Pos)          /*!< FMC_T::APWPKEEP: APWPKEEP0 Mask        */

#define FMC_APWPKEEP_APWPKEEP1_Pos       (16)                                              /*!< FMC_T::APWPKEEP: APWPKEEP1 Position    */
#define FMC_APWPKEEP_APWPKEEP1_Msk       (0xfffful << FMC_APWPKEEP_APWPKEEP1_Pos)          /*!< FMC_T::APWPKEEP: APWPKEEP1 Mask        */

#define FMC_SCACT_SCACT_Pos              (0)                                               /*!< FMC_T::SCACT: SCACT Position           */
#define FMC_SCACT_SCACT_Msk              (0x1ul << FMC_SCACT_SCACT_Pos)                    /*!< FMC_T::SCACT: SCACT Mask               */

#define FMC_LDWPROT_LDPROEN0_Pos         (0)                                               /*!< FMC_T::LDWPROT: LDPROEN0 Position      */
#define FMC_LDWPROT_LDPROEN0_Msk         (0x1ul << FMC_LDWPROT_LDPROEN0_Pos)               /*!< FMC_T::LDWPROT: LDPROEN0 Mask          */

#define FMC_LDWPKEEP_LDWPKEEP_Pos        (0)                                               /*!< FMC_T::LDWPKEEP: LDWPKEEP Position     */
#define FMC_LDWPKEEP_LDWPKEEP_Msk        (0xfffful << FMC_LDWPKEEP_LDWPKEEP_Pos)           /*!< FMC_T::LDWPKEEP: LDWPKEEP Mask         */

#define FMC_DFWPROT_DFPROEN0_Pos         (0)                                               /*!< FMC_T::DFWPROT: DFPROEN0 Position      */
#define FMC_DFWPROT_DFPROEN0_Msk         (0x1ul << FMC_DFWPROT_DFPROEN0_Pos)               /*!< FMC_T::DFWPROT: DFPROEN0 Mask          */

#define FMC_DFWPROT_DFPROEN1_Pos         (1)                                               /*!< FMC_T::DFWPROT: DFPROEN1 Position      */
#define FMC_DFWPROT_DFPROEN1_Msk         (0x1ul << FMC_DFWPROT_DFPROEN1_Pos)               /*!< FMC_T::DFWPROT: DFPROEN1 Mask          */

#define FMC_DFWPROT_DFPROEN2_Pos         (2)                                               /*!< FMC_T::DFWPROT: DFPROEN2 Position      */
#define FMC_DFWPROT_DFPROEN2_Msk         (0x1ul << FMC_DFWPROT_DFPROEN2_Pos)               /*!< FMC_T::DFWPROT: DFPROEN2 Mask          */

#define FMC_DFWPROT_DFPROEN3_Pos         (3)                                               /*!< FMC_T::DFWPROT: DFPROEN3 Position      */
#define FMC_DFWPROT_DFPROEN3_Msk         (0x1ul << FMC_DFWPROT_DFPROEN3_Pos)               /*!< FMC_T::DFWPROT: DFPROEN3 Mask          */

#define FMC_DFWPKEEP_DFWPKEEP_Pos        (0)                                               /*!< FMC_T::DFWPKEEP: DFWPKEEP Position     */
#define FMC_DFWPKEEP_DFWPKEEP_Msk        (0xfffful << FMC_DFWPKEEP_DFWPKEEP_Pos)           /*!< FMC_T::DFWPKEEP: DFWPKEEP Mask         */

#define FMC_ECCCTL_SEBDINTEN_Pos         (0)                                               /*!< FMC_T::ECCCTL: SEBDINTEN Position      */
#define FMC_ECCCTL_SEBDINTEN_Msk         (0x1ul << FMC_ECCCTL_SEBDINTEN_Pos)               /*!< FMC_T::ECCCTL: SEBDINTEN Mask          */

#define FMC_ECCCTL_DEBDINTEN_Pos         (1)                                               /*!< FMC_T::ECCCTL: DEBDINTEN Position      */
#define FMC_ECCCTL_DEBDINTEN_Msk         (0x1ul << FMC_ECCCTL_DEBDINTEN_Pos)               /*!< FMC_T::ECCCTL: DEBDINTEN Mask          */

#define FMC_ECCSTS_ECCSEBCF_Pos          (0)                                               /*!< FMC_T::ECCSTS: ECCSEBCF Position       */
#define FMC_ECCSTS_ECCSEBCF_Msk          (0x1ul << FMC_ECCSTS_ECCSEBCF_Pos)                /*!< FMC_T::ECCSTS: ECCSEBCF Mask           */

#define FMC_ECCSTS_ECCDEBDF_Pos          (1)                                               /*!< FMC_T::ECCSTS: ECCDEBDF Position       */
#define FMC_ECCSTS_ECCDEBDF_Msk          (0x1ul << FMC_ECCSTS_ECCDEBDF_Pos)                /*!< FMC_T::ECCSTS: ECCDEBDF Mask           */

#define FMC_ECCSEFAR_ECCSEFAR_Pos        (0)                                               /*!< FMC_T::ECCSEFAR: ECCSEFAR Position     */
#define FMC_ECCSEFAR_ECCSEFAR_Msk        (0xfffffffful << FMC_ECCSEFAR_ECCSEFAR_Pos)       /*!< FMC_T::ECCSEFAR: ECCSEFAR Mask         */

#define FMC_ECCDEFAR_ECCDEFAR_Pos        (0)                                               /*!< FMC_T::ECCDEFAR: ECCDEFAR Position     */
#define FMC_ECCDEFAR_ECCDEFAR_Msk        (0xfffffffful << FMC_ECCDEFAR_ECCDEFAR_Pos)       /*!< FMC_T::ECCDEFAR: ECCDEFAR Mask         */

/**@}*/ /* FMC_CONST */
/**@}*/ /* end of FMC register group */
/**@}*/ /* end of REGISTER group */

#if defined ( __CC_ARM   )
#pragma no_anon_unions
#endif

#endif /* __FMC_REG_H__ */
