
/******************************************************************************/
/*                Device Specific Peripheral registers structures             */
/******************************************************************************/

/** @addtogroup REGISTER Control Register

  @{

*/


/**
    @addtogroup RMC RRAM Memory Controller(RMC)
    Memory Mapped Structure for RMC Controller
@{ */

typedef struct
{


    /**
     * @var RMC_T::ISPCTL
     * Offset: 0x00  ISP Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ISPEN     |ISP Enable Bit (Write Protect)
     * |        |          |ISP function enable bit. Set this bit to enable ISP function.
     * |        |          |0 = ISP function Disabled.
     * |        |          |1 = ISP function Enabled.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[1]     |BS        |Boot Select (Write Protect)
     * |        |          |0 = Boot from APROM.
     * |        |          |1 = Boot from LDROM.
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
     * |        |          |l APROM writes to itself if APUEN is set to 0.
     * |        |          |l LDROM writes to itself if LDUEN is set to 0.
     * |        |          |l CONFIG is programmed if CFGUEN is set to 0.
     * |        |          |l Program command at brown-out detected
     * |        |          |l Destination address is illegal, such as over an available range.
     * |        |          |l Invalid ISP commands
     * |        |          |l The base and size of new XOM regions is wrong, overlap.
     * |        |          |l The input setting of XOM page erase function is wrong
     * |        |          |l The active XOM region is accessed (except for chip erase, page erase, chksum and read CID/DID)
     * |        |          |l The XOM setting page is accessed (except for chip erase, word program and read)
     * |        |          |l The XOM setting page is erased when XOM off.
     * |        |          |l Violate the load code read protection
     * |        |          |l OTP is erased.
     * |        |          |l Checksum or Flash All One Verification is not executed in their valid range
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[24]    |INTEN     |Secure ISP INT Enable Bit (Write Protect)
     * |        |          |0= ISP INT Disabled.
     * |        |          |1= ISP INT Enabled.
     * |        |          |Note: This bit is write protected
     * |        |          |Refer to the SYS_REGLCTL register
     * |        |          |Before using INT, user needs to clear the INTFLAG(RMC_ISPSTS[24]) make sure INT happen at correct time.
     * @var RMC_T::ISPADDR
     * Offset: 0x04  ISP Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPADDR   |ISP Address
     * |        |          |The M2L31 series is equipped with embedded RRAM. ISPADDR[1:0] must be kept 00 for ISP 32-bit operation.
     * |        |          |For CRC32 Checksum Calculation command, this field is the RRAM starting address for checksum calculation, 4 Kbytes alignment is necessary for CRC32 checksum calculation.
     * |        |          |For RRAM32-bit Program, ISP address needs word alignment (4-byte).
     * @var RMC_T::ISPDAT
     * Offset: 0x08  ISP Data Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ISPDAT    |ISP Data
     * |        |          |Write data to this register before ISP program operation.
     * |        |          |Read data from this register after ISP read operation.
     * |        |          |When ISPFF (RMC_ISPCTL[6]) is 1, ISPDAT = 0xffff_ffff
     * |        |          |For Run CRC32 Checksum Calculation command, ISPDAT is the memory size (byte) and 4 Kbytes alignment
     * |        |          |For ISP Read CRC32 Checksum command, ISPDAT is the checksum result
     * |        |          |If ISPDAT = 0x0000_0000, it means that (1) the checksum calculation is in progress, or (2) the memory range for checksum calculation is incorrect
     * @var RMC_T::ISPCMD
     * Offset: 0x0C  ISP Command Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[6:0]   |CMD       |ISP Command
     * |        |          |ISP command table is shown below:
     * |        |          |0x00= RRAM Read.
     * |        |          |0x04= Read Unique ID.
     * |        |          |0x08= Read RRAM All-One Result.
     * |        |          |0x0B= Read Company ID.
     * |        |          |0x0C= Read Device ID.
     * |        |          |0x0D= Read Checksum.
     * |        |          |0x21= RRAM 32-bits Program.
     * |        |          |0x26= RRAM Mass Erase. Erase all pages in all banks, except for OTP.
     * |        |          |0x27= RRAM 32-bits Load Data Buffer.
     * |        |          |0x28= Run RRAM All-One Verification.
     * |        |          |0x2C=Bank REMAP.
     * |        |          |0x2D= Run Checksum Calculation.
     * |        |          |0x2E= Vector Remap.
     * |        |          |0x2F= RRAM 32-bits Clear Data Buffer.
     * |        |          |The other commands are invalid.
     * @var RMC_T::ISPTRG
     * Offset: 0x10  ISP Trigger Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ISPGO     |ISP Start Trigger (Write Protect)
     * |        |          |Write 1 to start ISP operation and this bit will be cleared to 0 by hardware automatically when ISP operation is finished.
     * |        |          |0 = ISP operation is finished.
     * |        |          |1 = ISP is progressed.
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var RMC_T::DFBA
     * Offset: 0x14  Data RRAM Base Address
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |DFBA      |Data RRAM Base Address
     * |        |          |This register indicates Data RRAM start address. It is a read only register.
     * |        |          |The Data RRAM is shared with APROM. the content of this register is loaded from CONFIG1
     * |        |          |This register is valid when DFEN (CONFIG0[0]) =0 .
     * @var RMC_T::FTCTL
     * Offset: 0x18  RRAM Access Time Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[9]     |CACHEINV  |RRAM Cache Invalidation (Write Protect)
     * |        |          |0 = RRAM Cache Invalidation finished (default).
     * |        |          |1 = RRAM Cache Invalidation.
     * |        |          |Note 1: Write 1 to start cache invalidation. The value will be changed to 0 once the process finishes.
     * |        |          |Note 2: This bit is write-protected. Refer to the SYS_REGLCTL register.
     * @var RMC_T::ISPSTS
     * Offset: 0x40  ISP Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |ISPBUSY   |ISP Busy Flag (Read Only)
     * |        |          |Write 1 to start ISP operation and this bit will be cleared to 0 by hardware automatically when ISP operation is finished.
     * |        |          |This bit is the mirror of ISPGO(RMC_ISPTRG[0]).
     * |        |          |0 = ISP operation is finished.
     * |        |          |1 = ISP is progressed.
     * |[2]     |CBS       |Boot Selection of CONFIG (Read Only)
     * |        |          |This bit is initiated with the CBS (CONFIG0[7]) after any reset is happened except CPU reset (CPU is 1) or system reset (SYS) is happened.
     * |        |          |0 = LDROM with IAP mode.
     * |        |          |1 = APROM with IAP mode.
     * |[6]     |ISPFF     |ISP Fail Flag (Write Protect)
     * |        |          |This bit is the mirror of ISPFF (RMC_ISPCTL[6]), it needs to be cleared by writing 1 to RMC_ISPCTL[6] or RMC_ISPSTS[6]
     * |        |          |This bit is set by hardware when a triggered ISP meets any of the following conditions:
     * |        |          |l APROM writes to itself if APUEN is set to 0.
     * |        |          |l LDROM writes to itself if LDUEN is set to 0.
     * |        |          |l CONFIG is programmed if CFGUEN is set to 0.
     * |        |          |l Program command at brown-out detected
     * |        |          |l Destination address is illegal, such as over an available range.
     * |        |          |l Invalid ISP commands
     * |        |          |l The base and size of new XOM regions is wrong, overlap.
     * |        |          |l The input setting of XOM erase function is wrong
     * |        |          |l The active XOM region is accessed (except for chip erase, chksum and read CID/DID)
     * |        |          |l The XOM setting page is accessed (except for chip erase, word program and read)
     * |        |          |l The XOM setting page is erased when XOM off.
     * |        |          |l Violate the load code read protection
     * |        |          |l OTP is erased.
     * |        |          |l Checksum or Flash All One Verification is not executed in their valid range
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * |[7]     |ALLONE    |RRAM All-one Verification Flag
     * |        |          |This bit is set by hardware if all of RRAM bits are 1, and clear if RRAM bits are not all 1 after u201CRun RRAM All-One Verificationu201D complete; this bit also can be clear by writing 1
     * |        |          |0 = All of RRAM bits are 1 after u201CRun RRAM All-One Verificationu201D complete.
     * |        |          |1 = RRAM bits are not all 1 after u201CRun RRAM All-One Verificationu201D complete.
     * |[23:9]  |VECMAP    |Vector Page Mapping Address (Read Only)
     * |        |          |All access to 0x0000_0000~0x0000_01FF is remapped to the RRAM memory address {VECMAP[14:0], 9'h000} ~ {VECMAP[14:0], 9'h1FF}
     * |        |          |Note: If VECMAP[14:11]=0x1, LDROM code is mapped to system memory vector
     * |        |          |If VECMAP[14:11]=0x0, APROM code is mapped to system memory vector.
     * |[24]    |INTFLAG   |ISP Interrupt Flag
     * |        |          |0 = ISP Not Finished.
     * |        |          |1 = ISP done or ISPFF set.
     * |        |          |Note: This function needs to be enabled by RMC_ISPCTRL[24].
     * |[25]    |SCFF      |Secure Conceal Fail Flag (Write Protect)
     * |        |          |This bit is set by hardware if any ISP command accesses secure region when secure conceal function is active.
     * |        |          |This bit needs to be cleared by writing 1 to it.
     * |        |          |0 = ISP is not accessed secure conceal region
     * |        |          |1 = ISP is accessed secure conceal region
     * |[30]    |FBS       |Flash Bank Selection
     * |        |          |This bit indicate which bank is selected to boot.
     * |        |          |0 = Booting from BANK0.
     * |        |          |1 = Booting from BANK1.
     * @var RMC_T::CYCCTL
     * Offset: 0x4C  RRAM Access Cycle Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[3:0]   |CYCLE     |RRAM Access Cycle Control (Write Protect)
     * |        |          |CHIP power level is PL1:
     * |        |          |0010 = CPU access with two wait cycles if cache miss.
     * |        |          |The HCLK working frequency range is <25 MHz
     * |        |          |0011 = CPU access with three wait cycles if cache miss.
     * |        |          |The optimized HCLK working frequency range is 25~50 MHz
     * |        |          |0100 = CPU access with four wait cycles if cache miss.
     * |        |          |The optimized HCLK working frequency range is 50~72 MHz
     * |        |          |Others = Reserved
     * |        |          |CHIP power level is PL2: TBD
     * |        |          |CHIP power level is PL3:
     * |        |          |0001 = CPU access with one wait cycle if cache miss.
     * |        |          |The HCLK working frequency range is <6 MHz
     * |        |          |0010 = CPU access with two wait cycles if cache miss.
     * |        |          |The optimized HCLK working frequency range is 6~12 MHz
     * |        |          |Others = Reserved
     * |        |          |Note: This bit is write protected. Refer to the SYS_REGLCTL register.
     * @var RMC_T::XOMR0STS
     * Offset: 0xD0  XOM Region 0 Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |SIZE      |XOM Region 0 Size
     * |        |          |SIZE is the page number of XOM Region 0 must be page-aligned..
     * |[31:8]  |BASE      |XOM Region 0 Base Address
     * |        |          |BASE is the base address of XOM Region 0 must be page-aligned..
     * @var RMC_T::XOMR1STS
     * Offset: 0xD4  XOM Region 1 Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |SIZE      |XOM Region 1 Size
     * |        |          |SIZE is the page number of XOM Region 1 must be page-aligned..
     * |[31:8]  |BASE      |XOM Region 1 Base Address
     * |        |          |BASE is the base address of XOM Region 1 must be page-aligned..
     * @var RMC_T::XOMR2STS
     * Offset: 0xD8  XOM Region 2 Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |SIZE      |XOM Region 2 Size
     * |        |          |SIZE is the page number of XOM Region 2 must be page-aligned..
     * |[31:8]  |BASE      |XOM Region 2 Base Address
     * |        |          |BASE is the base address of XOM Region 2 must be page-aligned..
     * @var RMC_T::XOMR3STS
     * Offset: 0xDC  XOM Region 3 Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[7:0]   |SIZE      |XOM Region 3 Size
     * |        |          |SIZE is the page number of XOM Region 3 must be page-aligned.
     * |[31:8]  |BASE      |XOM Region 3 Base Address
     * |        |          |BASE is the base address of XOM Region 3 must be page-aligned.
     * @var RMC_T::XOMSTS
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
     * |        |          |0 = Sucess.
     * |        |          |1 = Fail.
     * @var RMC_T::APWPROT0
     * Offset: 0x110  APROM Write Protect Register0
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |APPROEN0  |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[1]     |APPROEN1  |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[2]     |APPROEN2  |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[3]     |APPROEN3  |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[4]     |APPROEN4  |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[5]     |APPROEN5  |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[6]     |APPROEN6  |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[7]     |APPROEN7  |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[8]     |APPROEN8  |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[9]     |APPROEN9  |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[10]    |APPROEN10 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[11]    |APPROEN11 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[12]    |APPROEN12 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[13]    |APPROEN13 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[14]    |APPROEN14 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[15]    |APPROEN15 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[16]    |APPROEN16 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[17]    |APPROEN17 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[18]    |APPROEN18 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[19]    |APPROEN19 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[20]    |APPROEN20 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[21]    |APPROEN21 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[22]    |APPROEN22 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[23]    |APPROEN23 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[24]    |APPROEN24 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[25]    |APPROEN25 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[26]    |APPROEN26 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[27]    |APPROEN27 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[28]    |APPROEN28 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[29]    |APPROEN29 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[30]    |APPROEN30 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[31]    |APPROEN31 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * @var RMC_T::APWPROT1
     * Offset: 0x114  APROM Write Protect Register1
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |APPROEN32 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[1]     |APPROEN33 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[2]     |APPROEN34 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[3]     |APPROEN35 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[4]     |APPROEN36 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[5]     |APPROEN37 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[6]     |APPROEN38 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[7]     |APPROEN39 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[8]     |APPROEN40 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[9]     |APPROEN41 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[10]    |APPROEN42 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[11]    |APPROEN43 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[12]    |APPROEN44 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[13]    |APPROEN45 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[14]    |APPROEN46 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[15]    |APPROEN47 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[16]    |APPROEN48 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[17]    |APPROEN49 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[18]    |APPROEN50 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[19]    |APPROEN51 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[20]    |APPROEN52 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[21]    |APPROEN53 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[22]    |APPROEN54 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[23]    |APPROEN55 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[24]    |APPROEN56 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[25]    |APPROEN57 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[26]    |APPROEN58 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[27]    |APPROEN59 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[28]    |APPROEN60 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[29]    |APPROEN61 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[30]    |APPROEN62 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * |[31]    |APPROEN63 |APROM Protect enable
     * |        |          |This bit indicates which APROM region is protected.
     * |        |          |0 = APROM region n is not protected.
     * |        |          |1 = APROM region n is protected.
     * |        |          |Note: APROM protect region is 0x0 + n*(0x2000) to 0x1fff + n*(0x2000)
     * @var RMC_T::APWPKEEP
     * Offset: 0x118  APROM Write Protect Keep Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |APWPKEEP0 |APROM Write Protect Keep 0
     * |        |          |0x55AA = APWPROT0 register is be locked.
     * |        |          |others = APWPROT0 register is free.
     * |[31:16] |APWPKEEP1 |APROM Write Protect Keep 1
     * |        |          |0x55AA = APWPROT1 register is be locked.
     * |        |          |others = APWPROT1 register is free.
     * @var RMC_T::SCACT
     * Offset: 0x11C  APROM Secure Conceal Active Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |SCACT     |Secure Conceal Function Active
     * |        |          |0 = secure conceal function inactive.
     * |        |          |1 = secure conceal function active.
     * |        |          |Note: secure conceal function active will base on this bit and setting of CONFIG6 is all 0.
     * |        |          |Note: After SCACT is set to 1, the secure conceal function is active and cannot be disable by software
     * |        |          |So read SCACT will always get 1 after set this bit.
     */
    __IO uint32_t ISPCTL;                /*!< [0x0000] ISP Control Register                                             */
    __IO uint32_t ISPADDR;               /*!< [0x0004] ISP Address Register                                             */
    __IO uint32_t ISPDAT;                /*!< [0x0008] ISP Data Register                                                */
    __IO uint32_t ISPCMD;                /*!< [0x000c] ISP Command Register                                             */
    __IO uint32_t ISPTRG;                /*!< [0x0010] ISP Trigger Control Register                                     */
    __I  uint32_t DFBA;                  /*!< [0x0014] Data RRAM Base Address                                           */
    __IO uint32_t FTCTL;                 /*!< [0x0018] RRAM Access Time Control Register                                */
    __I  uint32_t RESERVE0[9];
    __IO uint32_t ISPSTS;                /*!< [0x0040] ISP Status Register                                              */
    __I  uint32_t RESERVE1[2];
    __IO uint32_t CYCCTL;                /*!< [0x004c] RRAM Access Cycle Control Register                               */
    __I  uint32_t RESERVE2[32];
    __I  uint32_t XOMR0STS;              /*!< [0x00d0] XOM Region 0 Status Register                                     */
    __I  uint32_t XOMR1STS;              /*!< [0x00d4] XOM Region 1 Status Register                                     */
    __I  uint32_t XOMR2STS;              /*!< [0x00d8] XOM Region 2 Status Register                                     */
    __I  uint32_t XOMR3STS;              /*!< [0x00dc] XOM Region 3 Status Register                                     */
    __I  uint32_t XOMSTS;                /*!< [0x00e0] XOM Status Register                                              */
    __I  uint32_t RESERVE3[11];
    __IO uint32_t APWPROT0;              /*!< [0x0110] APROM Write Protect Register0                                    */
    __IO uint32_t APWPROT1;              /*!< [0x0114] APROM Write Protect Register1                                    */
    __IO uint32_t APWPKEEP;              /*!< [0x0118] APROM Write Protect Keep Register                                */
    __IO uint32_t SCACT;                 /*!< [0x011c] APROM Secure Conceal Active Register                             */

} RMC_T;

/**
    @addtogroup RMC_CONST RMC Bit Field Definition
    Constant Definitions for RMC Controller
@{ */

#define RMC_ISPCTL_ISPEN_Pos             (0)                                               /*!< RMC_T::ISPCTL: ISPEN Position          */
#define RMC_ISPCTL_ISPEN_Msk             (0x1ul << RMC_ISPCTL_ISPEN_Pos)                   /*!< RMC_T::ISPCTL: ISPEN Mask              */

#define RMC_ISPCTL_BS_Pos                (1)                                               /*!< RMC_T::ISPCTL: BS Position             */
#define RMC_ISPCTL_BS_Msk                (0x1ul << RMC_ISPCTL_BS_Pos)                      /*!< RMC_T::ISPCTL: BS Mask                 */

#define RMC_ISPCTL_APUEN_Pos             (3)                                               /*!< RMC_T::ISPCTL: APUEN Position          */
#define RMC_ISPCTL_APUEN_Msk             (0x1ul << RMC_ISPCTL_APUEN_Pos)                   /*!< RMC_T::ISPCTL: APUEN Mask              */

#define RMC_ISPCTL_CFGUEN_Pos            (4)                                               /*!< RMC_T::ISPCTL: CFGUEN Position         */
#define RMC_ISPCTL_CFGUEN_Msk            (0x1ul << RMC_ISPCTL_CFGUEN_Pos)                  /*!< RMC_T::ISPCTL: CFGUEN Mask             */

#define RMC_ISPCTL_LDUEN_Pos             (5)                                               /*!< RMC_T::ISPCTL: LDUEN Position          */
#define RMC_ISPCTL_LDUEN_Msk             (0x1ul << RMC_ISPCTL_LDUEN_Pos)                   /*!< RMC_T::ISPCTL: LDUEN Mask              */

#define RMC_ISPCTL_ISPFF_Pos             (6)                                               /*!< RMC_T::ISPCTL: ISPFF Position          */
#define RMC_ISPCTL_ISPFF_Msk             (0x1ul << RMC_ISPCTL_ISPFF_Pos)                   /*!< RMC_T::ISPCTL: ISPFF Mask              */

#define RMC_ISPCTL_INTEN_Pos             (24)                                              /*!< RMC_T::ISPCTL: INTEN Position          */
#define RMC_ISPCTL_INTEN_Msk             (0x1ul << RMC_ISPCTL_INTEN_Pos)                   /*!< RMC_T::ISPCTL: INTEN Mask              */

#define RMC_ISPADDR_ISPADDR_Pos          (0)                                               /*!< RMC_T::ISPADDR: ISPADDR Position       */
#define RMC_ISPADDR_ISPADDR_Msk          (0xfffffffful << RMC_ISPADDR_ISPADDR_Pos)         /*!< RMC_T::ISPADDR: ISPADDR Mask           */

#define RMC_ISPDAT_ISPDAT_Pos            (0)                                               /*!< RMC_T::ISPDAT: ISPDAT Position         */
#define RMC_ISPDAT_ISPDAT_Msk            (0xfffffffful << RMC_ISPDAT_ISPDAT_Pos)           /*!< RMC_T::ISPDAT: ISPDAT Mask             */

#define RMC_ISPCMD_CMD_Pos               (0)                                               /*!< RMC_T::ISPCMD: CMD Position            */
#define RMC_ISPCMD_CMD_Msk               (0x7ful << RMC_ISPCMD_CMD_Pos)                    /*!< RMC_T::ISPCMD: CMD Mask                */

#define RMC_ISPTRG_ISPGO_Pos             (0)                                               /*!< RMC_T::ISPTRG: ISPGO Position          */
#define RMC_ISPTRG_ISPGO_Msk             (0x1ul << RMC_ISPTRG_ISPGO_Pos)                   /*!< RMC_T::ISPTRG: ISPGO Mask              */

#define RMC_DFBA_DFBA_Pos                (0)                                               /*!< RMC_T::DFBA: DFBA Position             */
#define RMC_DFBA_DFBA_Msk                (0xfffffffful << RMC_DFBA_DFBA_Pos)               /*!< RMC_T::DFBA: DFBA Mask                 */

#define RMC_FTCTL_CACHEINV_Pos           (9)                                               /*!< RMC_T::FTCTL: CACHEINV Position        */
#define RMC_FTCTL_CACHEINV_Msk           (0x1ul << RMC_FTCTL_CACHEINV_Pos)                 /*!< RMC_T::FTCTL: CACHEINV Mask            */

#define RMC_ISPSTS_ISPBUSY_Pos           (0)                                               /*!< RMC_T::ISPSTS: ISPBUSY Position        */
#define RMC_ISPSTS_ISPBUSY_Msk           (0x1ul << RMC_ISPSTS_ISPBUSY_Pos)                 /*!< RMC_T::ISPSTS: ISPBUSY Mask            */

#define RMC_ISPSTS_CBS_Pos               (2)                                               /*!< RMC_T::ISPSTS: CBS Position            */
#define RMC_ISPSTS_CBS_Msk               (0x1ul << RMC_ISPSTS_CBS_Pos)                     /*!< RMC_T::ISPSTS: CBS Mask                */

#define RMC_ISPSTS_ISPFF_Pos             (6)                                               /*!< RMC_T::ISPSTS: ISPFF Position          */
#define RMC_ISPSTS_ISPFF_Msk             (0x1ul << RMC_ISPSTS_ISPFF_Pos)                   /*!< RMC_T::ISPSTS: ISPFF Mask              */

#define RMC_ISPSTS_ALLONE_Pos            (7)                                               /*!< RMC_T::ISPSTS: ALLONE Position         */
#define RMC_ISPSTS_ALLONE_Msk            (0x1ul << RMC_ISPSTS_ALLONE_Pos)                  /*!< RMC_T::ISPSTS: ALLONE Mask             */

#define RMC_ISPSTS_VECMAP_Pos            (9)                                               /*!< RMC_T::ISPSTS: VECMAP Position         */
#define RMC_ISPSTS_VECMAP_Msk            (0x7ffful << RMC_ISPSTS_VECMAP_Pos)               /*!< RMC_T::ISPSTS: VECMAP Mask             */

#define RMC_ISPSTS_INTFLAG_Pos           (24)                                              /*!< RMC_T::ISPSTS: INTFLAG Position        */
#define RMC_ISPSTS_INTFLAG_Msk           (0x1ul << RMC_ISPSTS_INTFLAG_Pos)                 /*!< RMC_T::ISPSTS: INTFLAG Mask            */

#define RMC_ISPSTS_SCFF_Pos              (25)                                              /*!< RMC_T::ISPSTS: SCFF Position           */
#define RMC_ISPSTS_SCFF_Msk              (0x1ul << RMC_ISPSTS_SCFF_Pos)                    /*!< RMC_T::ISPSTS: SCFF Mask               */

#define RMC_ISPSTS_FBS_Pos               (30)                                              /*!< RMC_T::ISPSTS: FBS Position            */
#define RMC_ISPSTS_FBS_Msk               (0x1ul << RMC_ISPSTS_FBS_Pos)                     /*!< RMC_T::ISPSTS: FBS Mask                */

#define RMC_CYCCTL_CYCLE_Pos             (0)                                               /*!< RMC_T::CYCCTL: CYCLE Position          */
#define RMC_CYCCTL_CYCLE_Msk             (0xful << RMC_CYCCTL_CYCLE_Pos)                   /*!< RMC_T::CYCCTL: CYCLE Mask              */

#define RMC_XOMR0STS_SIZE_Pos            (0)                                               /*!< RMC_T::XOMR0STS: SIZE Position         */
#define RMC_XOMR0STS_SIZE_Msk            (0xfful << RMC_XOMR0STS_SIZE_Pos)                 /*!< RMC_T::XOMR0STS: SIZE Mask             */

#define RMC_XOMR0STS_BASE_Pos            (8)                                               /*!< RMC_T::XOMR0STS: BASE Position         */
#define RMC_XOMR0STS_BASE_Msk            (0xfffffful << RMC_XOMR0STS_BASE_Pos)             /*!< RMC_T::XOMR0STS: BASE Mask             */

#define RMC_XOMR1STS_SIZE_Pos            (0)                                               /*!< RMC_T::XOMR1STS: SIZE Position         */
#define RMC_XOMR1STS_SIZE_Msk            (0xfful << RMC_XOMR1STS_SIZE_Pos)                 /*!< RMC_T::XOMR1STS: SIZE Mask             */

#define RMC_XOMR1STS_BASE_Pos            (8)                                               /*!< RMC_T::XOMR1STS: BASE Position         */
#define RMC_XOMR1STS_BASE_Msk            (0xfffffful << RMC_XOMR1STS_BASE_Pos)             /*!< RMC_T::XOMR1STS: BASE Mask             */

#define RMC_XOMR2STS_SIZE_Pos            (0)                                               /*!< RMC_T::XOMR2STS: SIZE Position         */
#define RMC_XOMR2STS_SIZE_Msk            (0xfful << RMC_XOMR2STS_SIZE_Pos)                 /*!< RMC_T::XOMR2STS: SIZE Mask             */

#define RMC_XOMR2STS_BASE_Pos            (8)                                               /*!< RMC_T::XOMR2STS: BASE Position         */
#define RMC_XOMR2STS_BASE_Msk            (0xfffffful << RMC_XOMR2STS_BASE_Pos)             /*!< RMC_T::XOMR2STS: BASE Mask             */

#define RMC_XOMR3STS_SIZE_Pos            (0)                                               /*!< RMC_T::XOMR3STS: SIZE Position         */
#define RMC_XOMR3STS_SIZE_Msk            (0xfful << RMC_XOMR3STS_SIZE_Pos)                 /*!< RMC_T::XOMR3STS: SIZE Mask             */

#define RMC_XOMR3STS_BASE_Pos            (8)                                               /*!< RMC_T::XOMR3STS: BASE Position         */
#define RMC_XOMR3STS_BASE_Msk            (0xfffffful << RMC_XOMR3STS_BASE_Pos)             /*!< RMC_T::XOMR3STS: BASE Mask             */

#define RMC_XOMSTS_XOMR0ON_Pos           (0)                                               /*!< RMC_T::XOMSTS: XOMR0ON Position        */
#define RMC_XOMSTS_XOMR0ON_Msk           (0x1ul << RMC_XOMSTS_XOMR0ON_Pos)                 /*!< RMC_T::XOMSTS: XOMR0ON Mask            */

#define RMC_XOMSTS_XOMR1ON_Pos           (1)                                               /*!< RMC_T::XOMSTS: XOMR1ON Position        */
#define RMC_XOMSTS_XOMR1ON_Msk           (0x1ul << RMC_XOMSTS_XOMR1ON_Pos)                 /*!< RMC_T::XOMSTS: XOMR1ON Mask            */

#define RMC_XOMSTS_XOMR2ON_Pos           (2)                                               /*!< RMC_T::XOMSTS: XOMR2ON Position        */
#define RMC_XOMSTS_XOMR2ON_Msk           (0x1ul << RMC_XOMSTS_XOMR2ON_Pos)                 /*!< RMC_T::XOMSTS: XOMR2ON Mask            */

#define RMC_XOMSTS_XOMR3ON_Pos           (3)                                               /*!< RMC_T::XOMSTS: XOMR3ON Position        */
#define RMC_XOMSTS_XOMR3ON_Msk           (0x1ul << RMC_XOMSTS_XOMR3ON_Pos)                 /*!< RMC_T::XOMSTS: XOMR3ON Mask            */

#define RMC_XOMSTS_XOMPEF_Pos            (4)                                               /*!< RMC_T::XOMSTS: XOMPEF Position         */
#define RMC_XOMSTS_XOMPEF_Msk            (0x1ul << RMC_XOMSTS_XOMPEF_Pos)                  /*!< RMC_T::XOMSTS: XOMPEF Mask             */

#define RMC_APWPROT0_APPROEN0_Pos        (0)                                               /*!< RMC_T::APWPROT0: APPROEN0 Position     */
#define RMC_APWPROT0_APPROEN0_Msk        (0x1ul << RMC_APWPROT0_APPROEN0_Pos)              /*!< RMC_T::APWPROT0: APPROEN0 Mask         */

#define RMC_APWPROT0_APPROEN1_Pos        (1)                                               /*!< RMC_T::APWPROT0: APPROEN1 Position     */
#define RMC_APWPROT0_APPROEN1_Msk        (0x1ul << RMC_APWPROT0_APPROEN1_Pos)              /*!< RMC_T::APWPROT0: APPROEN1 Mask         */

#define RMC_APWPROT0_APPROEN2_Pos        (2)                                               /*!< RMC_T::APWPROT0: APPROEN2 Position     */
#define RMC_APWPROT0_APPROEN2_Msk        (0x1ul << RMC_APWPROT0_APPROEN2_Pos)              /*!< RMC_T::APWPROT0: APPROEN2 Mask         */

#define RMC_APWPROT0_APPROEN3_Pos        (3)                                               /*!< RMC_T::APWPROT0: APPROEN3 Position     */
#define RMC_APWPROT0_APPROEN3_Msk        (0x1ul << RMC_APWPROT0_APPROEN3_Pos)              /*!< RMC_T::APWPROT0: APPROEN3 Mask         */

#define RMC_APWPROT0_APPROEN4_Pos        (4)                                               /*!< RMC_T::APWPROT0: APPROEN4 Position     */
#define RMC_APWPROT0_APPROEN4_Msk        (0x1ul << RMC_APWPROT0_APPROEN4_Pos)              /*!< RMC_T::APWPROT0: APPROEN4 Mask         */

#define RMC_APWPROT0_APPROEN5_Pos        (5)                                               /*!< RMC_T::APWPROT0: APPROEN5 Position     */
#define RMC_APWPROT0_APPROEN5_Msk        (0x1ul << RMC_APWPROT0_APPROEN5_Pos)              /*!< RMC_T::APWPROT0: APPROEN5 Mask         */

#define RMC_APWPROT0_APPROEN6_Pos        (6)                                               /*!< RMC_T::APWPROT0: APPROEN6 Position     */
#define RMC_APWPROT0_APPROEN6_Msk        (0x1ul << RMC_APWPROT0_APPROEN6_Pos)              /*!< RMC_T::APWPROT0: APPROEN6 Mask         */

#define RMC_APWPROT0_APPROEN7_Pos        (7)                                               /*!< RMC_T::APWPROT0: APPROEN7 Position     */
#define RMC_APWPROT0_APPROEN7_Msk        (0x1ul << RMC_APWPROT0_APPROEN7_Pos)              /*!< RMC_T::APWPROT0: APPROEN7 Mask         */

#define RMC_APWPROT0_APPROEN8_Pos        (8)                                               /*!< RMC_T::APWPROT0: APPROEN8 Position     */
#define RMC_APWPROT0_APPROEN8_Msk        (0x1ul << RMC_APWPROT0_APPROEN8_Pos)              /*!< RMC_T::APWPROT0: APPROEN8 Mask         */

#define RMC_APWPROT0_APPROEN9_Pos        (9)                                               /*!< RMC_T::APWPROT0: APPROEN9 Position     */
#define RMC_APWPROT0_APPROEN9_Msk        (0x1ul << RMC_APWPROT0_APPROEN9_Pos)              /*!< RMC_T::APWPROT0: APPROEN9 Mask         */

#define RMC_APWPROT0_APPROEN10_Pos       (10)                                              /*!< RMC_T::APWPROT0: APPROEN10 Position    */
#define RMC_APWPROT0_APPROEN10_Msk       (0x1ul << RMC_APWPROT0_APPROEN10_Pos)             /*!< RMC_T::APWPROT0: APPROEN10 Mask        */

#define RMC_APWPROT0_APPROEN11_Pos       (11)                                              /*!< RMC_T::APWPROT0: APPROEN11 Position    */
#define RMC_APWPROT0_APPROEN11_Msk       (0x1ul << RMC_APWPROT0_APPROEN11_Pos)             /*!< RMC_T::APWPROT0: APPROEN11 Mask        */

#define RMC_APWPROT0_APPROEN12_Pos       (12)                                              /*!< RMC_T::APWPROT0: APPROEN12 Position    */
#define RMC_APWPROT0_APPROEN12_Msk       (0x1ul << RMC_APWPROT0_APPROEN12_Pos)             /*!< RMC_T::APWPROT0: APPROEN12 Mask        */

#define RMC_APWPROT0_APPROEN13_Pos       (13)                                              /*!< RMC_T::APWPROT0: APPROEN13 Position    */
#define RMC_APWPROT0_APPROEN13_Msk       (0x1ul << RMC_APWPROT0_APPROEN13_Pos)             /*!< RMC_T::APWPROT0: APPROEN13 Mask        */

#define RMC_APWPROT0_APPROEN14_Pos       (14)                                              /*!< RMC_T::APWPROT0: APPROEN14 Position    */
#define RMC_APWPROT0_APPROEN14_Msk       (0x1ul << RMC_APWPROT0_APPROEN14_Pos)             /*!< RMC_T::APWPROT0: APPROEN14 Mask        */

#define RMC_APWPROT0_APPROEN15_Pos       (15)                                              /*!< RMC_T::APWPROT0: APPROEN15 Position    */
#define RMC_APWPROT0_APPROEN15_Msk       (0x1ul << RMC_APWPROT0_APPROEN15_Pos)             /*!< RMC_T::APWPROT0: APPROEN15 Mask        */

#define RMC_APWPROT0_APPROEN16_Pos       (16)                                              /*!< RMC_T::APWPROT0: APPROEN16 Position    */
#define RMC_APWPROT0_APPROEN16_Msk       (0x1ul << RMC_APWPROT0_APPROEN16_Pos)             /*!< RMC_T::APWPROT0: APPROEN16 Mask        */

#define RMC_APWPROT0_APPROEN17_Pos       (17)                                              /*!< RMC_T::APWPROT0: APPROEN17 Position    */
#define RMC_APWPROT0_APPROEN17_Msk       (0x1ul << RMC_APWPROT0_APPROEN17_Pos)             /*!< RMC_T::APWPROT0: APPROEN17 Mask        */

#define RMC_APWPROT0_APPROEN18_Pos       (18)                                              /*!< RMC_T::APWPROT0: APPROEN18 Position    */
#define RMC_APWPROT0_APPROEN18_Msk       (0x1ul << RMC_APWPROT0_APPROEN18_Pos)             /*!< RMC_T::APWPROT0: APPROEN18 Mask        */

#define RMC_APWPROT0_APPROEN19_Pos       (19)                                              /*!< RMC_T::APWPROT0: APPROEN19 Position    */
#define RMC_APWPROT0_APPROEN19_Msk       (0x1ul << RMC_APWPROT0_APPROEN19_Pos)             /*!< RMC_T::APWPROT0: APPROEN19 Mask        */

#define RMC_APWPROT0_APPROEN20_Pos       (20)                                              /*!< RMC_T::APWPROT0: APPROEN20 Position    */
#define RMC_APWPROT0_APPROEN20_Msk       (0x1ul << RMC_APWPROT0_APPROEN20_Pos)             /*!< RMC_T::APWPROT0: APPROEN20 Mask        */

#define RMC_APWPROT0_APPROEN21_Pos       (21)                                              /*!< RMC_T::APWPROT0: APPROEN21 Position    */
#define RMC_APWPROT0_APPROEN21_Msk       (0x1ul << RMC_APWPROT0_APPROEN21_Pos)             /*!< RMC_T::APWPROT0: APPROEN21 Mask        */

#define RMC_APWPROT0_APPROEN22_Pos       (22)                                              /*!< RMC_T::APWPROT0: APPROEN22 Position    */
#define RMC_APWPROT0_APPROEN22_Msk       (0x1ul << RMC_APWPROT0_APPROEN22_Pos)             /*!< RMC_T::APWPROT0: APPROEN22 Mask        */

#define RMC_APWPROT0_APPROEN23_Pos       (23)                                              /*!< RMC_T::APWPROT0: APPROEN23 Position    */
#define RMC_APWPROT0_APPROEN23_Msk       (0x1ul << RMC_APWPROT0_APPROEN23_Pos)             /*!< RMC_T::APWPROT0: APPROEN23 Mask        */

#define RMC_APWPROT0_APPROEN24_Pos       (24)                                              /*!< RMC_T::APWPROT0: APPROEN24 Position    */
#define RMC_APWPROT0_APPROEN24_Msk       (0x1ul << RMC_APWPROT0_APPROEN24_Pos)             /*!< RMC_T::APWPROT0: APPROEN24 Mask        */

#define RMC_APWPROT0_APPROEN25_Pos       (25)                                              /*!< RMC_T::APWPROT0: APPROEN25 Position    */
#define RMC_APWPROT0_APPROEN25_Msk       (0x1ul << RMC_APWPROT0_APPROEN25_Pos)             /*!< RMC_T::APWPROT0: APPROEN25 Mask        */

#define RMC_APWPROT0_APPROEN26_Pos       (26)                                              /*!< RMC_T::APWPROT0: APPROEN26 Position    */
#define RMC_APWPROT0_APPROEN26_Msk       (0x1ul << RMC_APWPROT0_APPROEN26_Pos)             /*!< RMC_T::APWPROT0: APPROEN26 Mask        */

#define RMC_APWPROT0_APPROEN27_Pos       (27)                                              /*!< RMC_T::APWPROT0: APPROEN27 Position    */
#define RMC_APWPROT0_APPROEN27_Msk       (0x1ul << RMC_APWPROT0_APPROEN27_Pos)             /*!< RMC_T::APWPROT0: APPROEN27 Mask        */

#define RMC_APWPROT0_APPROEN28_Pos       (28)                                              /*!< RMC_T::APWPROT0: APPROEN28 Position    */
#define RMC_APWPROT0_APPROEN28_Msk       (0x1ul << RMC_APWPROT0_APPROEN28_Pos)             /*!< RMC_T::APWPROT0: APPROEN28 Mask        */

#define RMC_APWPROT0_APPROEN29_Pos       (29)                                              /*!< RMC_T::APWPROT0: APPROEN29 Position    */
#define RMC_APWPROT0_APPROEN29_Msk       (0x1ul << RMC_APWPROT0_APPROEN29_Pos)             /*!< RMC_T::APWPROT0: APPROEN29 Mask        */

#define RMC_APWPROT0_APPROEN30_Pos       (30)                                              /*!< RMC_T::APWPROT0: APPROEN30 Position    */
#define RMC_APWPROT0_APPROEN30_Msk       (0x1ul << RMC_APWPROT0_APPROEN30_Pos)             /*!< RMC_T::APWPROT0: APPROEN30 Mask        */

#define RMC_APWPROT0_APPROEN31_Pos       (31)                                              /*!< RMC_T::APWPROT0: APPROEN31 Position    */
#define RMC_APWPROT0_APPROEN31_Msk       (0x1ul << RMC_APWPROT0_APPROEN31_Pos)             /*!< RMC_T::APWPROT0: APPROEN31 Mask        */

#define RMC_APWPROT1_APPROEN32_Pos       (0)                                               /*!< RMC_T::APWPROT1: APPROEN32 Position    */
#define RMC_APWPROT1_APPROEN32_Msk       (0x1ul << RMC_APWPROT1_APPROEN32_Pos)             /*!< RMC_T::APWPROT1: APPROEN32 Mask        */

#define RMC_APWPROT1_APPROEN33_Pos       (1)                                               /*!< RMC_T::APWPROT1: APPROEN33 Position    */
#define RMC_APWPROT1_APPROEN33_Msk       (0x1ul << RMC_APWPROT1_APPROEN33_Pos)             /*!< RMC_T::APWPROT1: APPROEN33 Mask        */

#define RMC_APWPROT1_APPROEN34_Pos       (2)                                               /*!< RMC_T::APWPROT1: APPROEN34 Position    */
#define RMC_APWPROT1_APPROEN34_Msk       (0x1ul << RMC_APWPROT1_APPROEN34_Pos)             /*!< RMC_T::APWPROT1: APPROEN34 Mask        */

#define RMC_APWPROT1_APPROEN35_Pos       (3)                                               /*!< RMC_T::APWPROT1: APPROEN35 Position    */
#define RMC_APWPROT1_APPROEN35_Msk       (0x1ul << RMC_APWPROT1_APPROEN35_Pos)             /*!< RMC_T::APWPROT1: APPROEN35 Mask        */

#define RMC_APWPROT1_APPROEN36_Pos       (4)                                               /*!< RMC_T::APWPROT1: APPROEN36 Position    */
#define RMC_APWPROT1_APPROEN36_Msk       (0x1ul << RMC_APWPROT1_APPROEN36_Pos)             /*!< RMC_T::APWPROT1: APPROEN36 Mask        */

#define RMC_APWPROT1_APPROEN37_Pos       (5)                                               /*!< RMC_T::APWPROT1: APPROEN37 Position    */
#define RMC_APWPROT1_APPROEN37_Msk       (0x1ul << RMC_APWPROT1_APPROEN37_Pos)             /*!< RMC_T::APWPROT1: APPROEN37 Mask        */

#define RMC_APWPROT1_APPROEN38_Pos       (6)                                               /*!< RMC_T::APWPROT1: APPROEN38 Position    */
#define RMC_APWPROT1_APPROEN38_Msk       (0x1ul << RMC_APWPROT1_APPROEN38_Pos)             /*!< RMC_T::APWPROT1: APPROEN38 Mask        */

#define RMC_APWPROT1_APPROEN39_Pos       (7)                                               /*!< RMC_T::APWPROT1: APPROEN39 Position    */
#define RMC_APWPROT1_APPROEN39_Msk       (0x1ul << RMC_APWPROT1_APPROEN39_Pos)             /*!< RMC_T::APWPROT1: APPROEN39 Mask        */

#define RMC_APWPROT1_APPROEN40_Pos       (8)                                               /*!< RMC_T::APWPROT1: APPROEN40 Position    */
#define RMC_APWPROT1_APPROEN40_Msk       (0x1ul << RMC_APWPROT1_APPROEN40_Pos)             /*!< RMC_T::APWPROT1: APPROEN40 Mask        */

#define RMC_APWPROT1_APPROEN41_Pos       (9)                                               /*!< RMC_T::APWPROT1: APPROEN41 Position    */
#define RMC_APWPROT1_APPROEN41_Msk       (0x1ul << RMC_APWPROT1_APPROEN41_Pos)             /*!< RMC_T::APWPROT1: APPROEN41 Mask        */

#define RMC_APWPROT1_APPROEN42_Pos       (10)                                              /*!< RMC_T::APWPROT1: APPROEN42 Position    */
#define RMC_APWPROT1_APPROEN42_Msk       (0x1ul << RMC_APWPROT1_APPROEN42_Pos)             /*!< RMC_T::APWPROT1: APPROEN42 Mask        */

#define RMC_APWPROT1_APPROEN43_Pos       (11)                                              /*!< RMC_T::APWPROT1: APPROEN43 Position    */
#define RMC_APWPROT1_APPROEN43_Msk       (0x1ul << RMC_APWPROT1_APPROEN43_Pos)             /*!< RMC_T::APWPROT1: APPROEN43 Mask        */

#define RMC_APWPROT1_APPROEN44_Pos       (12)                                              /*!< RMC_T::APWPROT1: APPROEN44 Position    */
#define RMC_APWPROT1_APPROEN44_Msk       (0x1ul << RMC_APWPROT1_APPROEN44_Pos)             /*!< RMC_T::APWPROT1: APPROEN44 Mask        */

#define RMC_APWPROT1_APPROEN45_Pos       (13)                                              /*!< RMC_T::APWPROT1: APPROEN45 Position    */
#define RMC_APWPROT1_APPROEN45_Msk       (0x1ul << RMC_APWPROT1_APPROEN45_Pos)             /*!< RMC_T::APWPROT1: APPROEN45 Mask        */

#define RMC_APWPROT1_APPROEN46_Pos       (14)                                              /*!< RMC_T::APWPROT1: APPROEN46 Position    */
#define RMC_APWPROT1_APPROEN46_Msk       (0x1ul << RMC_APWPROT1_APPROEN46_Pos)             /*!< RMC_T::APWPROT1: APPROEN46 Mask        */

#define RMC_APWPROT1_APPROEN47_Pos       (15)                                              /*!< RMC_T::APWPROT1: APPROEN47 Position    */
#define RMC_APWPROT1_APPROEN47_Msk       (0x1ul << RMC_APWPROT1_APPROEN47_Pos)             /*!< RMC_T::APWPROT1: APPROEN47 Mask        */

#define RMC_APWPROT1_APPROEN48_Pos       (16)                                              /*!< RMC_T::APWPROT1: APPROEN48 Position    */
#define RMC_APWPROT1_APPROEN48_Msk       (0x1ul << RMC_APWPROT1_APPROEN48_Pos)             /*!< RMC_T::APWPROT1: APPROEN48 Mask        */

#define RMC_APWPROT1_APPROEN49_Pos       (17)                                              /*!< RMC_T::APWPROT1: APPROEN49 Position    */
#define RMC_APWPROT1_APPROEN49_Msk       (0x1ul << RMC_APWPROT1_APPROEN49_Pos)             /*!< RMC_T::APWPROT1: APPROEN49 Mask        */

#define RMC_APWPROT1_APPROEN50_Pos       (18)                                              /*!< RMC_T::APWPROT1: APPROEN50 Position    */
#define RMC_APWPROT1_APPROEN50_Msk       (0x1ul << RMC_APWPROT1_APPROEN50_Pos)             /*!< RMC_T::APWPROT1: APPROEN50 Mask        */

#define RMC_APWPROT1_APPROEN51_Pos       (19)                                              /*!< RMC_T::APWPROT1: APPROEN51 Position    */
#define RMC_APWPROT1_APPROEN51_Msk       (0x1ul << RMC_APWPROT1_APPROEN51_Pos)             /*!< RMC_T::APWPROT1: APPROEN51 Mask        */

#define RMC_APWPROT1_APPROEN52_Pos       (20)                                              /*!< RMC_T::APWPROT1: APPROEN52 Position    */
#define RMC_APWPROT1_APPROEN52_Msk       (0x1ul << RMC_APWPROT1_APPROEN52_Pos)             /*!< RMC_T::APWPROT1: APPROEN52 Mask        */

#define RMC_APWPROT1_APPROEN53_Pos       (21)                                              /*!< RMC_T::APWPROT1: APPROEN53 Position    */
#define RMC_APWPROT1_APPROEN53_Msk       (0x1ul << RMC_APWPROT1_APPROEN53_Pos)             /*!< RMC_T::APWPROT1: APPROEN53 Mask        */

#define RMC_APWPROT1_APPROEN54_Pos       (22)                                              /*!< RMC_T::APWPROT1: APPROEN54 Position    */
#define RMC_APWPROT1_APPROEN54_Msk       (0x1ul << RMC_APWPROT1_APPROEN54_Pos)             /*!< RMC_T::APWPROT1: APPROEN54 Mask        */

#define RMC_APWPROT1_APPROEN55_Pos       (23)                                              /*!< RMC_T::APWPROT1: APPROEN55 Position    */
#define RMC_APWPROT1_APPROEN55_Msk       (0x1ul << RMC_APWPROT1_APPROEN55_Pos)             /*!< RMC_T::APWPROT1: APPROEN55 Mask        */

#define RMC_APWPROT1_APPROEN56_Pos       (24)                                              /*!< RMC_T::APWPROT1: APPROEN56 Position    */
#define RMC_APWPROT1_APPROEN56_Msk       (0x1ul << RMC_APWPROT1_APPROEN56_Pos)             /*!< RMC_T::APWPROT1: APPROEN56 Mask        */

#define RMC_APWPROT1_APPROEN57_Pos       (25)                                              /*!< RMC_T::APWPROT1: APPROEN57 Position    */
#define RMC_APWPROT1_APPROEN57_Msk       (0x1ul << RMC_APWPROT1_APPROEN57_Pos)             /*!< RMC_T::APWPROT1: APPROEN57 Mask        */

#define RMC_APWPROT1_APPROEN58_Pos       (26)                                              /*!< RMC_T::APWPROT1: APPROEN58 Position    */
#define RMC_APWPROT1_APPROEN58_Msk       (0x1ul << RMC_APWPROT1_APPROEN58_Pos)             /*!< RMC_T::APWPROT1: APPROEN58 Mask        */

#define RMC_APWPROT1_APPROEN59_Pos       (27)                                              /*!< RMC_T::APWPROT1: APPROEN59 Position    */
#define RMC_APWPROT1_APPROEN59_Msk       (0x1ul << RMC_APWPROT1_APPROEN59_Pos)             /*!< RMC_T::APWPROT1: APPROEN59 Mask        */

#define RMC_APWPROT1_APPROEN60_Pos       (28)                                              /*!< RMC_T::APWPROT1: APPROEN60 Position    */
#define RMC_APWPROT1_APPROEN60_Msk       (0x1ul << RMC_APWPROT1_APPROEN60_Pos)             /*!< RMC_T::APWPROT1: APPROEN60 Mask        */

#define RMC_APWPROT1_APPROEN61_Pos       (29)                                              /*!< RMC_T::APWPROT1: APPROEN61 Position    */
#define RMC_APWPROT1_APPROEN61_Msk       (0x1ul << RMC_APWPROT1_APPROEN61_Pos)             /*!< RMC_T::APWPROT1: APPROEN61 Mask        */

#define RMC_APWPROT1_APPROEN62_Pos       (30)                                              /*!< RMC_T::APWPROT1: APPROEN62 Position    */
#define RMC_APWPROT1_APPROEN62_Msk       (0x1ul << RMC_APWPROT1_APPROEN62_Pos)             /*!< RMC_T::APWPROT1: APPROEN62 Mask        */

#define RMC_APWPROT1_APPROEN63_Pos       (31)                                              /*!< RMC_T::APWPROT1: APPROEN63 Position    */
#define RMC_APWPROT1_APPROEN63_Msk       (0x1ul << RMC_APWPROT1_APPROEN63_Pos)             /*!< RMC_T::APWPROT1: APPROEN63 Mask        */

#define RMC_APWPKEEP_APWPKEEP0_Pos       (0)                                               /*!< RMC_T::APWPKEEP: APWPKEEP0 Position    */
#define RMC_APWPKEEP_APWPKEEP0_Msk       (0xfffful << RMC_APWPKEEP_APWPKEEP0_Pos)          /*!< RMC_T::APWPKEEP: APWPKEEP0 Mask        */

#define RMC_APWPKEEP_APWPKEEP1_Pos       (16)                                              /*!< RMC_T::APWPKEEP: APWPKEEP1 Position    */
#define RMC_APWPKEEP_APWPKEEP1_Msk       (0xfffful << RMC_APWPKEEP_APWPKEEP1_Pos)          /*!< RMC_T::APWPKEEP: APWPKEEP1 Mask        */

#define RMC_SCACT_SCACT_Pos              (0)                                               /*!< RMC_T::SCACT: SCACT Position           */
#define RMC_SCACT_SCACT_Msk              (0x1ul << RMC_SCACT_SCACT_Pos)                    /*!< RMC_T::SCACT: SCACT Mask               */

/**@}*/ /* RMC_CONST */
/**@}*/ /* end of RMC register group */


/**@}*/ /* end of REGISTER group */
