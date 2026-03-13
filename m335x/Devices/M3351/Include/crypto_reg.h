/**************************************************************************//**
 * @file     crypto_reg.h
 * @version  V1.00
 * @brief    CRYPTO register definition header file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __CRYPTO_REG_H__
#define __CRYPTO_REG_H__

#if defined ( __CC_ARM   )
    #pragma anon_unions
#endif
/**
    @addtogroup REGISTER Control Register
    @{
*/

/**
    @addtogroup CRYPTO Cryptographic Accelerator (CRYPTO)
    Memory Mapped Structure for CRYPTO Controller
    @{
*/

typedef struct
{


    /**
     * @var CRYPTO_T::INTEN
     * Offset: 0x00  Crypto Interrupt Enable Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |AESIEN    |AES Interrupt Enable Bit
     * |        |          |0 = AES interrupt Disabled.
     * |        |          |1 = AES interrupt Enabled.
     * |        |          |Note: In DMA mode, an interrupt will be triggered when an amount of data set in AES_DMA_CNT is fed into the AES engine.
     * |        |          |In Non-DMA mode, an interrupt will be triggered when the AES engine finishes the operation.
     * |[1]     |AESEIEN   |AES Error Flag Enable Bit
     * |        |          |0 = AES error interrupt flag Disabled.
     * |        |          |1 = AES error interrupt flag Enabled.
     * |[16]    |PRNGIEN   |PRNG Interrupt Enable Bit
     * |        |          |0 = PRNG interrupt Disabled.
     * |        |          |1 = PRNG interrupt Enabled.
     * |[17]    |PRNGEIEN  |PRNG Error Flag Enable Bit
     * |        |          |0 = PRNG error interrupt flag Disabled.
     * |        |          |1 = PRNG error interrupt flag Enabled.
     * |[24]    |HMACIEN   |SHA/HMAC Interrupt Enable Bit
     * |        |          |0 = SHA/HMAC interrupt Disabled.
     * |        |          |1 = SHA/HMAC interrupt Enabled.
     * |        |          |Note: In DMA mode, an interrupt will be triggered when an amount of data set in HMAC_DMA_CNT is fed into the SHA/HMAC engine
     * |        |          |In Non-DMA mode, an interrupt will be triggered when the SHA/HMAC engine finishes the operation.
     * |[25]    |HMACEIEN  |SHA/HMAC Error Interrupt Enable Bit
     * |        |          |0 = SHA/HMAC error interrupt flag Disabled.
     * |        |          |1 = HMAC error interrupt flag Enabled.
     * @var CRYPTO_T::INTSTS
     * Offset: 0x04  Crypto Interrupt Flag
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |AESIF     |AES Finish Interrupt Flag
     * |        |          |0 = No AES interrupt.
     * |        |          |1 = AES done interrupt.
     * |        |          |Note: This bit is cleared by writing 1, and it has no effect by writing 0.
     * |[1]     |AESEIF    |AES Error Flag
     * |        |          |This register includes operating and setting error
     * |        |          |The detail flag is shown in CRYPTO_AES_STS register.
     * |        |          |0 = No AES error.
     * |        |          |1 = AES error interrupt.
     * |        |          |Note: This bit is cleared by writing 1, and it has no effect by writing 0.
     * |[16]    |PRNGIF    |PRNG Finish Interrupt Flag
     * |        |          |0 = No PRNG interrupt.
     * |        |          |1 = PRNG done interrupt.
     * |        |          |Note: This bit is cleared by writing 1, and it has no effect by writing 0.
     * |[17]    |PRNGEIF   |PRNG Error Flag
     * |        |          |This register includes operating and setting error
     * |        |          |The detail flag is shown in CRYPTO_PRNG_STS register.
     * |        |          |0 = No PRNG error.
     * |        |          |1 = PRNG error interrupt.
     * |        |          |Note: This bit is cleared by writing 1, and it has no effect by writing 0.
     * |[24]    |HMACIF    |SHA/HMAC Finish Interrupt Flag
     * |        |          |0 = No SHA/HMAC interrupt.
     * |        |          |1 = SHA/HMAC operation done interrupt.
     * |        |          |Note: This bit is cleared by writing 1, and it has no effect by writing 0.
     * |[25]    |HMACEIF   |SHA/HMAC Error Flag
     * |        |          |This register includes operating and setting error
     * |        |          |The detail flag is shown in CRYPTO_HMAC_STS register.
     * |        |          |0 = No SHA/HMAC error.
     * |        |          |1 = SHA/HMAC error interrupt.
     * |        |          |Note: This bit is cleared by writing 1, and it has no effect by writing 0.
     * @var CRYPTO_T::PRNG_CTL
     * Offset: 0x08  PRNG Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |START     |Start PRNG Engine
     * |        |          |0 = Stop PRNG engine.
     * |        |          |1 = Generate new key and store the new key to register CRYPTO_PRNG_KEYx, which will be cleared when the new key is generated.
     * |[1]     |SEEDRLD   |Reload New Seed for PRNG Engine
     * |        |          |0 = Generating key based on the current seed.
     * |        |          |1 = Reload new seed.
     * |[5:2]   |KEYSZ     |PRNG Generate Key Size
     * |        |          |0000 = 128 bits.
     * |        |          |0001 = 163 bits.
     * |        |          |0010 = 192 bits.
     * |        |          |0011 = 224 bits.
     * |        |          |0100 = 233 bits.
     * |        |          |0101 = 255 bits.
     * |        |          |0110 = 256 bits.
     * |        |          |Others = Reserved.
     * |[8]     |BUSY      |PRNG Busy (Read Only)
     * |        |          |0 = PRNG engine is idle.
     * |        |          |1 = PRNG engine is generating CRYPTO_PRNG_KEYx.
     * |[16]    |SEEDSRC   |Seed Source
     * |        |          |0 = Seed is from TRNG.
     * |        |          |1 = Seed is from PRNG seed register.
     * |        |          |Note: When SEEDRLD is set to 0, this bit (SEEDSRC) is meaningless.
     * @var CRYPTO_T::PRNG_SEED
     * Offset: 0x0C  Seed for PRNG
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |SEED      |Seed for PRNG (Write Only)
     * |        |          |The bits store the seed for PRNG engine.
     * |        |          |Note: In TRNG+PRNG mode, the seed is from TRNG engine, and it will not be stored in this register.
     * @var CRYPTO_T::PRNG_KEY[8]
     * Offset: 0x10~0x2C  PRNG Generated Key Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |KEY       |Store PRNG Generated Key (Read Only)
     * |        |          |The bits store the key that is generated by PRNG.
     * @var CRYPTO_T::PRNG_STS
     * Offset: 0x30  PRNG Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |BUSY      |PRNG Busy Flag
     * |        |          |0 = PRNG engine is idle.
     * |        |          |1 = PRNG engine is generating CRYPTO_PRNG_KEYx.
     * |[18]    |TRNGERR   |True Random Number Generator Error Flag
     * |        |          |0 = No error.
     * |        |          |1 = Getting random number or seed failed.
     * @var CRYPTO_T::AES_GCM_IVCNT[2]
     * Offset: 0x80  AES GCM IV Byte Count Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |CNT       |AES GCM IV   Byte Count
     * |        |          |The bit   length of IV is 64 bits for AES GCM mode
     * |        |          |The CRYPTO_AES_GCM_IVCNT[0] keeps the   low weight byte count of initial vector (i.e., len(IV)[34:3]) of AES GCM mode   and can be read and written.
     * |        |          |The CRYPTO_AES_GCM_IVCNT[1] keeps the   high weight byte count of initial vector (i.e., len(IV)[64:35]) of AES GCM   mode and can be read and written.
     * @var CRYPTO_T::AES_GCM_ACNT[2]
     * Offset: 0x88  AES GCM A Byte Count Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |CNT       |AES GCM A Byte   Count
     * |        |          |The bit   length of A is 64 bits for AES GCM mode
     * |        |          |The CRYPTO_AES_GCM_ACNT[0] keeps the low   weight byte count of the additional authenticated data (i.e., len(A)[34:3]) of   AES GCM mode and can be read and written.
     * |        |          |The CRYPTO_AES_GCM_ACNT[1] keeps the high   weight byte count of the additional authenticated data (i.e., len(A)[63:35]) of   AES GCM mode and can be read and written.
     * @var CRYPTO_T::AES_GCM_PCNT[2]
     * Offset: 0x90  AES GCM P Byte Count Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |CNT       |AES GCM P Byte   Count
     * |        |          |The bit length of Por C is 39 bits for AES GCM mode
     * |        |          |The CRYPTO_AES_GCM_PCNT[0] keeps   the low weight byte count of the plaintext or ciphertext (i.e.,   len(P)[34:3] or len(C)[34:3]) of AES GCM mode and can be read and   written.
     * |        |          |The CRYPTO_AES_GCM_PCNT[1] keeps   the high weight byte count of the plaintext or ciphertext (i.e.,   len(P)[38:35] or len(C)[38:35]) of AES GCM mode and can be read and   written.
     * |        |          |The bit length of Por C is 64 bits for AES CCM mode
     * |        |          |The CRYPTO_AES_GCM_PCNT[0] keeps   the low weight byte count of the plaintext or ciphertext (i.e.,   len(P)[34:3] or len(C)[34:3]) of AES GCM mode and can be read and   written.
     * |        |          |The CRYPTO_AES_GCM_PCNT1   keeps   the high weight byte count of the plaintext or ciphertext (i.e., len(P)[63:35]   or len(C)[63:35]) of AES CCM mode and can be read and written.
     * @var CRYPTO_T::AES_FBADDR
     * Offset: 0xA0  AES DMA Feedback Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |FBADDR    |AES DMA Feedback Address
     * |        |          |In DMA cascade mode, software can update DMA feedback address register for automatically reading and writing feedback values via DMA
     * |        |          |The FBADDR keeps the feedback address of the feedback data for the next cascade operation
     * |        |          |Based on the feedback address, the AES accelerator can read the feedback data of the last cascade operation from system memory space and write the feedback data of the current cascade operation to system memory space
     * |        |          |The start of feedback address should be located at word boundary
     * |        |          |In other words, bit 1 and 0 of FBADDR are ignored.
     * |        |          |FBADDR can be read and written.
     * |        |          |In DMA mode, software can update the next CRYPTO_AES_FBADDR before triggering START.
     * @var CRYPTO_T::AES_CTL
     * Offset: 0x100  AES Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |START     |AES Engine Start
     * |        |          |0 = No effect.
     * |        |          |1 = Start AES engine. BUSY flag will be set.
     * |        |          |Note: This bit is always 0 when it is read back.
     * |[1]     |STOP      |AES Engine Stop
     * |        |          |0 = No effect.
     * |        |          |1 = Stop AES engine.
     * |        |          |Note: This bit is always 0 when it is read back.
     * |[3:2]   |KEYSZ     |AES Key Size
     * |        |          |This bit defines three different key size for AES operation.
     * |        |          |2’b00 = 128 bits key.
     * |        |          |2’b01 = 192 bits key.
     * |        |          |2’b10 = 256 bits key.
     * |        |          |2’b11 = Reserved.
     * |        |          |If the AES accelerator is operating and the corresponding flag BUSY is 1, updating this register has no effect.
     * |[5]     |DMALAST   |AES Last Block
     * |        |          |In DMA mode, this bit must be set as beginning the last DMA cascade round.
     * |        |          |In Non-DMA mode, this bit must be set when feeding in the last block of data in ECB, CBC, CTR, OFB, and CFB mode, and feeding in the (last-1) block of data at CBC-CS1, CBC-CS2, and CBC-CS3 mode.
     * |        |          |This bit is always 0 when it is read back, and must be written again once START is triggered.
     * |[6]     |DMACSCAD  |AES Engine DMA with Cascade Mode
     * |        |          |0 = DMA cascade function Disabled.
     * |        |          |1 = In DMA cascade mode, software can update DMA source address register, destination address register, and byte count register during a cascade operation, without finishing the accelerator operation.
     * |        |          |Note: The last two blocks of AES-CBC-CS1/2/3 must be in the last cascade operation.
     * |[7]     |DMAEN     |AES Engine DMA Enable Bit
     * |        |          |0 = AES DMA engine Disabled.
     * |        |          |The AES engine operates in Non-DMA mode. The data need to be written in CRYPTO_AES_DATIN.
     * |        |          |1 = AES_DMA engine Enabled.
     * |        |          |The AES engine operates in DMA mode, and data movement from memory to the engine is done by DMA logic.
     * |[15:8]  |OPMODE    |AES Engine Operation Modes
     * |        |          |0x00 = ECB (Electronic Codebook Mode)  0x01 = CBC (Cipher Block Chaining Mode).
     * |        |          |0x02 = CFB (Cipher Feedback Mode).
     * |        |          |0x03 = OFB (Output Feedback Mode).
     * |        |          |0x04 = CTR (Counter Mode).
     * |        |          |0x10 = CBC-CS1 (CBC Ciphertext-Stealing 1 Mode).
     * |        |          |0x11 = CBC-CS2 (CBC Ciphertext-Stealing 2 Mode).
     * |        |          |0x12 = CBC-CS3 (CBC Ciphertext-Stealing 3 Mode).
     * |        |          |0x20 = GCM (Galois/Counter Mode).
     * |        |          |0x22 = CCM (Counter with CBC-MAC Mode).
     * |[16]    |ENCRYPTO  |AES Encryption/Decryption
     * |        |          |0 = AES engine executes decryption operation.
     * |        |          |1 = AES engine executes encryption operation.
     * |[20]    |FBIN      |Feedback Input to AES Via DMA Automatically
     * |        |          |0 = DMA automatic feedback input function Disabled.
     * |        |          |1 = DMA automatic feedback input function Enabled when DMAEN = 1.
     * |[21]    |FBOUT     |Feedback Output From AES Via DMA Automatically
     * |        |          |0 = DMA automatic feedback output function Disabled.
     * |        |          |1 = DMA automatic feedback output function Enabled when DMAEN = 1.
     * |[22]    |OUTSWAP   |AES Engine Output Data Swap
     * |        |          |0 = Keep the original order.
     * |        |          |1 = The order that CPU reads data from the accelerator will be changed from {byte3, byte2, byte1, byte0} to {byte0, byte1, byte2, byte3}.
     * |[23]    |INSWAP    |AES Engine Input Data Swap
     * |        |          |0 = Keep the original order.
     * |        |          |1 = The order that CPU feeds data to the accelerator will be changed from {byte3, byte2, byte1, byte0} to {byte0, byte1, byte2, byte3}.
     * |[24]    |KOUTSWAP  |AES Engine Output Key and Initial Vector Swap
     * |        |          |0 = Keep the original order.
     * |        |          |1 = The order that CPU reads key and initial vector from the accelerator will be changed from {byte3, byte2, byte1, byte0} to {byte0, byte1, byte2, byte3}.
     * |[25]    |KINSWAP   |AES Engine Input Key and Initial Vector Swap
     * |        |          |0 = Keep the original order.
     * |        |          |1 = The order that CPU feeds key and initial vector to the accelerator will be changed from {byte3, byte2, byte1, byte0} to {byte0, byte1, byte2, byte3}.
     * |[30:26] |KEYUNPRT  |Unprotect Key
     * |        |          |Writing 0 to CRYPTO_AES_CTL[31] and “10110” to CRYPTO_AES_CTL[30:26] is to unprotect the AES key.
     * |        |          |The KEYUNPRT can be read and written
     * |        |          |When it is written as the AES engine is operating, BUSY flag is 1, there would be no effect on KEYUNPRT.
     * |[31]    |KEYPRT    |Protect Key
     * |        |          |Read as a flag to reflect KEYPRT.
     * |        |          |0 = No effect.
     * |        |          |1 = Protect the content of the AES key from reading
     * |        |          |The return value for reading CRYPTO_AES_KEYx is not the content of the registers CRYPTO_AES_KEYx
     * |        |          |Once it is set, it can be cleared by asserting KEYUNPRT
     * |        |          |The key content would be cleared as well.
     * @var CRYPTO_T::AES_STS
     * Offset: 0x104  AES Engine Flag
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |BUSY      |AES Engine Busy
     * |        |          |0 = The AES engine is idle or finished.
     * |        |          |1 = The AES engine is under processing.
     * |[8]     |INBUFEMPTY|AES Input Buffer Empty
     * |        |          |0 = There are some data in input buffer waiting for the AES engine to process.
     * |        |          |1 = AES input buffer is empty
     * |        |          |Software needs to feed data to the AES engine
     * |        |          |Otherwise, the AES engine will be pending to wait for input data.
     * |[9]     |INBUFFULL |AES Input Buffer Full Flag
     * |        |          |0 = AES input buffer is not full. Software can feed the data into the AES engine.
     * |        |          |1 = AES input buffer is full
     * |        |          |Software cannot feed data to the AES engine
     * |        |          |Otherwise, the flag INBUFERR will be set to 1.
     * |[10]    |INBUFERR  |AES Input Buffer Error Flag
     * |        |          |0 = No error.
     * |        |          |1 = Error happened during feeding data to the AES engine.
     * |[12]    |CNTERR    |CRYPTO_AES_CNT Setting Error
     * |        |          |0 = No error in CRYPTO_AES_CNT setting.
     * |        |          |1 = CRYPTO_AES_CNT is 0 if DMAEN (CRYPTO_AES_CTL[7]) is enabled.
     * |[16]    |OUTBUFEMPTY|AES Out Buffer Empty
     * |        |          |0 = AES output buffer is not empty. There are some valid data kept in output buffer.
     * |        |          |1 = AES output buffer is empty
     * |        |          |Software cannot get data from CRYPTO_AES_DATOUT
     * |        |          |Otherwise, the flag OUTBUFERR will be set to 1 since the output buffer is empty.
     * |[17]    |OUTBUFFULL|AES Out Buffer Full Flag
     * |        |          |0 = AES output buffer is not full.
     * |        |          |1 = AES output buffer is full, and software needs to get data from CRYPTO_AES_DATOUT
     * |        |          |Otherwise, the AES engine will be pending since the output buffer is full.
     * |[18]    |OUTBUFERR |AES Out Buffer Error Flag
     * |        |          |0 = No error.
     * |        |          |1 = Error happened during getting the result from AES engine.
     * |[20]    |BUSERR    |AES DMA Access Bus Error Flag
     * |        |          |0 = No error.
     * |        |          |1 = Bus error will stop DMA operation and AES engine.
     * @var CRYPTO_T::AES_DATIN
     * Offset: 0x108  AES Engine Data Input Port Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |DATIN     |AES Engine Input Port
     * |        |          |CPU feeds data to AES engine through this port by checking CRYPTO_AES_STS. Feed data as INBUFFULL is 0.
     * @var CRYPTO_T::AES_DATOUT
     * Offset: 0x10C  AES Engine Data Output Port Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |DATOUT    |AES Engine Output Port
     * |        |          |CPU gets results from the AES engine through this port by checking CRYPTO_AES_STS
     * |        |          |Get data as OUTBUFEMPTY is 0.
     * @var CRYPTO_T::AES_KEY[8]
     * Offset: 0x110  AES Key Word Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |KEY       |CRYPTO_AES_KEYx
     * |        |          |The KEY keeps the security key for AES operation.
     * |        |          |x = 0, 1..7.
     * |        |          |The security key for AES accelerator can be 128, 192, or 256 bits and four, six, or eight 32-bit registers are to store each security key.
     * |        |          |{CRYPTO_AES_KEY3, CRYPTO_AES_KEY2, CRYPTO_AES_KEY1, CRYPTO_AES_KEY0} stores the 128-bit security key for AES operation.
     * |        |          |{CRYPTO_AES_KEY5, CRYPTO_AES_KEY4, CRYPTO_AES_KEY3, CRYPTO_AES_KEY2, CRYPTO_AES_KEY1, CRYPTO_AES_KEY0} stores the 192-bit security key for AES operation.
     * |        |          |{CRYPTO_AES_KEY7, CRYPTO_AES_KEY6, CRYPTO_AES_KEY5, CRYPTO_AES_KEY4, CRYPTO_AES_KEY3, CRYPTO_AES_KEY2, CRYPTO_AES_KEY1, CRYPTO_AES_KEY0} stores the 256-bit security key for AES operation.
     * @var CRYPTO_T::AES_IV[4]
     * Offset: 0x130  AES Initial Vector Word Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |IV        |AES Initial Vectors
     * |        |          |x = 0, 1..3.
     * |        |          |Four initial vectors (CRYPTO_AES_IV0, CRYPTO_AES_IV1, CRYPTO_AES_IV2, and CRYPTO_AES_IV3) are for AES operating in CBC, CFB, and OFB mode
     * |        |          |Four registers (CRYPTO_AES_IV0, CRYPTO_AES_IV1, CRYPTO_AES_IV2, and CRYPTO_AES_IV3) act as Nonce counter when the AES engine is operating in CTR mode.
     * @var CRYPTO_T::AES_SADDR
     * Offset: 0x140  AES DMA Source Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |SADDR     |AES DMA Source Address
     * |        |          |The AES accelerator supports DMA function to transfer the plain text between system memory space and embedded FIFO
     * |        |          |The SADDR keeps the source address of the data buffer where the source text is stored
     * |        |          |Based on the source address, the AES accelerator can read the plain text (encryption) / cipher text (decryption) from system memory space and do AES operation
     * |        |          |The start of source address should be located at word boundary
     * |        |          |In other words, bit 1 and 0 of SADDR are ignored.
     * |        |          |SADDR can be read and written
     * |        |          |Writing to SADDR while the AES accelerator is operating doesn’t affect the current AES operation
     * |        |          |But the value of SADDR will be updated later on
     * |        |          |Consequently, software can prepare the DMA source address for the next AES operation.
     * |        |          |In DMA mode, software can update the next CRYPTO_AES_SADDR before triggering START.
     * |        |          |The value of CRYPTO_AES_SADDR and CRYPTO_AES_DADDR can be the same.
     * @var CRYPTO_T::AES_DADDR
     * Offset: 0x144  AES DMA Destination Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |DADDR     |AES DMA Destination Address
     * |        |          |The AES accelerator supports DMA function to transfer the cipher text between system memory space and embedded FIFO
     * |        |          |The DADDR keeps the destination address of the data buffer where the engine output’s text will be stored
     * |        |          |Based on the destination address, the AES accelerator can write the cipher text (encryption) / plain text (decryption) back to system memory space after the AES operation is finished
     * |        |          |The start of destination address should be located at word boundary
     * |        |          |In other words, bit 1 and 0 of DADDR are ignored.
     * |        |          |DADDR can be read and written
     * |        |          |Writing to DADDR while the AES accelerator is operating doesn’t affect the current AES operation
     * |        |          |But the value of DADDR will be updated later on
     * |        |          |Consequently, software can prepare the destination address for the next AES operation.
     * |        |          |In DMA mode, software can update the next CRYPTO_AES_DADDR before triggering START.
     * |        |          |The value of CRYPTO_AES_SADDR and CRYPTO_AES_DADDR can be the same.
     * @var CRYPTO_T::AES_CNT
     * Offset: 0x148  AES Byte Count Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |CNT       |AES Byte   Count
     * |        |          |The   CRYPTO_AES_CNT keeps the byte count of source text that is for the AES engine   operating in DMA mode
     * |        |          |The CRYPTO_AES_CNT is 32-bit and the maximum of byte   count is 4G bytes.
     * |        |          |CRYPTO_AES_CNT   can be read and written
     * |        |          |Writing to CRYPTO_AES_CNT while the AES accelerator   is operating doesn’t affect the current AES operation
     * |        |          |But the value of   CRYPTO_AES_CNT will be updated later on
     * |        |          |Consequently, software can prepare   the byte count of data for the next AES operation.
     * |        |          |According   to CBC-CS1, CBC-CS2, and CBC-CS3 standard, the count of operation data must   be more than 16 bytes
     * |        |          |Operations that are qual to or less than one block   will output unexpected result.
     * |        |          |In   Non-DMA ECB, CBC, CFB, OFB, CTR, CCM and GCM mode, CRYPTO_AES_CNT must be set as byte count for the   last block of data before feeding in the last block of data
     * |        |          |In Non-DMA   CBC-CS1, CBC-CS2, and CBC-CS3 mode, CRYPTO_AES_CNT must be set as byte count   for the last two blocks of data before feeding in the last two blocks of   data.
     * |        |          |In AES   GCM mode without DMA cascade function, the value of CRYPTO_AES_CNT is equal to the total value of {CRYPTO_AES_GCM_IVCNT1,   CRYPTO_AES_GCM_IVCNT0}, {CRYPTO_AES_GCM_ACNT1, CRYPTO_AES_GCM_ACNT0} and {CRYPTO_AES_GCM_PCNT1,   CRYPTO_AES_GCM_PCNT0}.
     * |        |          |In AES   GCM mode with DMA cascade function, the value of CRYPTO_AES_CNT represents the byte count of source text in this cascade function
     * |        |          |Thus, the value of CRYPTO_AES_CNT is less than or equal to the total value of {CRYPTO_AES_GCM_IVCNT1,   CRYPTO_AES_GCM_IVCNT0}, {CRYPTO_AES_GCM_ACNT1, CRYPTO_AES_GCM_ACNT0} and {CRYPTO_AES_GCM_PCNT1,   CRYPTO_AES_GCM_PCNT0} and must be block alignment.
     * |        |          |In AES CCM   mode without DMA cascade function, the value of CRYPTO_AES_CNT is equal to the total value of {CRYPTO_AES_GCM_ACNT1,   CRYPTO_AES_GCM_ACNT0} and {CRYPTO_AES_GCM_PCNT1, CRYPTO_AES_GCM_PCNT0}.
     * |        |          |In AES   CCM mode with DMA cascade function, the value of CRYPTO_AES_CNT represents the byte count of source text in this cascade function
     * |        |          |Thus, the value of CRYPTO_AES_CNT is less than or equal to the total value of {CRYPTO_AES_GCM_ACNT1,   CRYPTO_AES_GCM_ACNT0} and {CRYPTO_AES_GCM_PCNT1, CRYPTO_AES_GCM_PCNT0} and   must be block alignment, except for the last block of plaintext or   ciphertext.
     * @var CRYPTO_T::HMAC_CTL
     * Offset: 0x300  SHA/HMAC Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |START     |SHA/HMAC Engine Start
     * |        |          |0 = No effect.
     * |        |          |1 = Start SHA/HMAC engine. BUSY flag will be set.
     * |        |          |Note: This bit is always 0 when it is read back.
     * |[1]     |STOP      |SHA/HMAC Engine Stop
     * |        |          |0 = No effect.
     * |        |          |1 = Stop SHA/HMAC engine.
     * |        |          |Note: This bit is always 0 when it is read back.
     * |[4]     |DMAFIRST  |SHA/HMAC First Block in Cascade function
     * |        |          |This bit must be set as feeding in first byte of data.
     * |[5]     |DMALAST   |SHA/HMAC Last Block
     * |        |          |This bit must be set as feeding in last byte of data.
     * |[6]     |DMACSCAD  |SHA/HMAC Engine DMA with Cascade Mode
     * |        |          |0 = DMA cascade function Disabled.
     * |        |          |1 = In DMA cascade mode, software can update DMA source address register, destination address register, and byte count register during a cascade operation, without finishing the accelerator operation.
     * |[7]     |DMAEN     |SHA/HMAC Engine DMA Enable Bit
     * |        |          |0 = SHA/HMAC DMA engine Disabled.
     * |        |          |SHA/HMAC engine operates in Non-DMA mode. The data need to be written in CRYPTO_HMAC_DATIN.
     * |        |          |1 = SHA/HMAC DMA engine Enabled.
     * |        |          |SHA/HMAC engine operates in DMA mode, and data movement from memory to the engine is done by DMA logic.
     * |[10:8]  |OPMODE    |SHA/HMAC Engine Operation Modes
     * |        |          |0x0xx: SHA1-160
     * |        |          |0x100: SHA2-256
     * |        |          |0x101: SHA2-224
     * |        |          |0x110: SHA2-512
     * |        |          |0x111: SHA2-384
     * |        |          |Note: These bits can be read and written. But writing to them wouldn’t take effect as BUSY is 1.
     * |        |          |Note: When MD5EN=1, SHA/HMAC only execute MD5 and then generate 128 bits digest.
     * |[11]    |HMACEN    |HMAC_SHA Engine Operating Mode
     * |        |          |0 = Execute SHA function.
     * |        |          |1 = Execute HMAC function.
     * |[14]    |MD5EN     |MD5 Engine Enable Bit
     * |        |          |0 = Execute other function.
     * |        |          |1 = Execute MD5 function.
     * |[20]    |FBIN      |Feedback Input to SHA/HMAC Via DMA Automatically
     * |        |          |0 = DMA automatic feedback input function Disabled.
     * |        |          |1 = DMA automatic feedback input function Enabled when DMAEN = 1.
     * |[21]    |FBOUT     |Feedback Output From SHA/HMAC Via DMA Automatically
     * |        |          |0 = DMA automatic feedback output function Disabled.
     * |        |          |1 = DMA automatic feedback output function Enabled when DMAEN = 1.
     * |[22]    |OUTSWAP   |SHA/HMAC Engine Output Data Swap
     * |        |          |0 = Keep the original order.
     * |        |          |1 = The order that CPU feeds data to the accelerator will be changed from {byte3, byte2, byte1, byte0} to {byte0, byte1, byte2, byte3}.
     * |[23]    |INSWAP    |SHA/HMAC Engine Input Data Swap
     * |        |          |0 = Keep the original order.
     * |        |          |1 = The order that CPU feeds data to the accelerator will be changed from {byte3, byte2, byte1, byte0} to {byte0, byte1, byte2, byte3}.
     * @var CRYPTO_T::HMAC_STS
     * Offset: 0x304  SHA/HMAC Status Flag
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |BUSY      |SHA/HMAC Engine Busy
     * |        |          |0 = SHA/HMAC engine is idle or finished.
     * |        |          |1 = SHA/HMAC engine is busy.
     * |[1]     |DMABUSY   |SHA/HMAC Engine DMA Busy Flag
     * |        |          |0 = SHA/HMAC DMA engine is idle or finished.
     * |        |          |1 = SHA/HMAC DMA engine is busy.
     * |[8]     |DMAERR    |SHA/HMAC Engine DMA Error Flag
     * |        |          |0 = Show the SHA/HMAC engine access normal.
     * |        |          |1 = Show the SHA/HMAC engine access error.
     * |[16]    |DATINREQ  |SHA/HMAC Non-DMA Mode Data Input Request
     * |        |          |0 = No effect.
     * |        |          |1 = Request SHA/HMAC Non-DMA mode data input.
     * @var CRYPTO_T::HMAC_DGST[16]
     * Offset: 0x308~0x344  SHA/HMAC Output Feedback Data
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |DGST      |SHA/HMAC Output Feedback Data Output Register
     * |        |          |For SHA-160, the digest is stored in CRYPTO_HMAC_DGST0 ~ CRYPTO_HMAC_DGST4.
     * |        |          |For SHA-224, the digest is stored in CRYPTO_HMAC_DGST0 ~ CRYPTO_HMAC_DGST6.
     * |        |          |For SHA-256, the digest is stored in CRYPTO_HMAC_DGST0 ~ CRYPTO_HMAC_DGST7.
     * |        |          |For SHA-384, the digest is stored in CRYPTO_HMAC_DGST0 ~ CRYPTO_HMAC_DGST11.
     * |        |          |For SHA-512, the digest is stored in CRYPTO_HMAC_DGST0 ~ CRYPTO_HMAC_DGST15.
     * @var CRYPTO_T::HMAC_KEYCNT
     * Offset: 0x348  SHA/HMAC Key Byte Count Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |KEYCNT    |SHA/HMAC Key Byte Count
     * |        |          |The CRYPTO_HMAC_KEYCNT keeps the byte count of key that SHA/HMAC engine operates
     * |        |          |The register is 32-bit and the maximum byte count is 4G bytes
     * |        |          |It can be read and written.
     * |        |          |Writing to the register CRYPTO_HMAC_KEYCNT as the SHA/HMAC accelerator operating doesn’t affect the current SHA/HMAC operation
     * |        |          |But the value of CRYPTO_HMAC_KEYCNT will be updated later on
     * |        |          |Consequently, software can prepare the key count for the next SHA/HMAC operation.
     * @var CRYPTO_T::HMAC_SADDR
     * Offset: 0x34C  SHA/HMAC DMA Source Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |SADDR     |SHA/HMAC DMA Source Address
     * |        |          |The SHA/HMAC accelerator supports DMA function to transfer the plain text between system memory space and embedded FIFO
     * |        |          |The CRYPTO_HMAC_SADDR keeps the source address of the data buffer where the source text is stored
     * |        |          |Based on the source address, the SHA/HMAC accelerator can read the plain text from system memory space and do SHA/HMAC operation
     * |        |          |The start of source address should be located at word boundary
     * |        |          |In other words, bit 1 and 0 of CRYPTO_HMAC_SADDR are ignored.
     * |        |          |CRYPTO_HMAC_SADDR can be read and written
     * |        |          |Writing to CRYPTO_HMAC_SADDR while the SHA/HMAC accelerator is operating doesn’t affect the current SHA/HMAC operation
     * |        |          |But the value of CRYPTO_HMAC_SADDR will be updated later on
     * |        |          |Consequently, software can prepare the DMA source address for the next SHA/HMAC operation.
     * |        |          |In DMA mode, software can update the next CRYPTO_HMAC_SADDR before triggering START.
     * |        |          |CRYPTO_HMAC_SADDR and CRYPTO_HMAC_DADDR can be the same in the value.
     * @var CRYPTO_T::HMAC_DMACNT
     * Offset: 0x350  SHA/HMAC Byte Count Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |DMACNT    |SHA/HMAC Operation Byte Count
     * |        |          |The CRYPTO_HMAC_DMACNT keeps the byte count of source text that is for the SHA/HMAC engine operating in DMA mode
     * |        |          |The CRYPTO_HMAC_DMACNT is 32-bit and the maximum of byte count is 4G bytes.
     * |        |          |CRYPTO_HMAC_DMACNT can be read and written
     * |        |          |Writing to CRYPTO_HMAC_DMACNT while the SHA/HMAC accelerator is operating doesn’t affect the current SHA/HMAC operation
     * |        |          |But the value of CRYPTO_HMAC_DMACNT will be updated later on
     * |        |          |Consequently, software can prepare the byte count of data for the next SHA/HMAC operation.
     * |        |          |In Non-DMA mode, CRYPTO_HMAC_DMACNT must be set as the byte count of the last block before feeding in the last block of data.
     * @var CRYPTO_T::HMAC_DATIN
     * Offset: 0x354  SHA/HMAC Engine Non-DMA Mode Data Input Port Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |DATIN     |SHA/HMAC Engine Input Port
     * |        |          |CPU feeds data to SHA/HMAC engine through this port by checking CRYPTO_HMAC_STS
     * |        |          |Feed data as DATINREQ is 1.
     * @var CRYPTO_T::HMAC_FBADDR
     * Offset: 0x4FC  SHA/HMAC DMA Feedback Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |FBADDR    |SHA/HMAC DMA Feedback Address
     * |        |          |In DMA cascade mode, software can update DMA feedback address register for automatically reading and writing feedback values via DMA
     * |        |          |The FBADDR keeps the feedback address of the feedback data for the next cascade operation
     * |        |          |Based on the feedback address, the SHA/HMAC accelerator can read the feedback data of the last cascade operation from system memory space and write the feedback data of the current cascade operation to system memory space
     * |        |          |The start of feedback address should be located at word boundary
     * |        |          |In other words, bit 1 and 0 of FBADDR are ignored.
     * |        |          |FBADDR can be read and written.
     * |        |          |In DMA mode, software can update the next CRYPTO_HMAC_FBADDR before triggering START.
     */
    __IO uint32_t INTEN;                 /*!< [0x0000] Crypto Interrupt Enable Control Register                         */
    __IO uint32_t INTSTS;                /*!< [0x0004] Crypto Interrupt Flag                                            */
    __IO uint32_t PRNG_CTL;              /*!< [0x0008] PRNG Control Register                                            */
    __O  uint32_t PRNG_SEED;             /*!< [0x000c] Seed for PRNG                                                    */
    __I  uint32_t PRNG_KEY[8];           /*!< [0x0010] PRNG Generated Key0~7                                            */
    __I  uint32_t PRNG_STS;              /*!< [0x0030] PRNG Status Register                                             */
    __I  uint32_t RESERVE0[19];
    __IO uint32_t AES_GCM_IVCNT[2];      /*!< [0x0080] AES GCM IV Byte Count Register 0~1                               */
    __IO uint32_t AES_GCM_ACNT[2];       /*!< [0x0088] AES GCM A Byte Count Register 0~1                                */
    __IO uint32_t AES_GCM_PCNT[2];       /*!< [0x0090] AES GCM P Byte Count Register 0~1                                */
    __I  uint32_t RESERVE1[2];
    __IO uint32_t AES_FBADDR;            /*!< [0x00a0] AES DMA Feedback Address Register                                */
    __I  uint32_t RESERVE2[23];
    __IO uint32_t AES_CTL;               /*!< [0x0100] AES Control Register                                             */
    __I  uint32_t AES_STS;               /*!< [0x0104] AES Engine Flag                                                  */
    __IO uint32_t AES_DATIN;             /*!< [0x0108] AES Engine Data Input Port Register                              */
    __I  uint32_t AES_DATOUT;            /*!< [0x010c] AES Engine Data Output Port Register                             */
    __IO uint32_t AES_KEY[8];            /*!< [0x0110] AES Key Word 0~7 Register                                        */
    __IO uint32_t AES_IV[4];             /*!< [0x0130] AES Initial Vector Word 0~3 Register                             */
    __IO uint32_t AES_SADDR;             /*!< [0x0140] AES DMA Source Address Register                                  */
    __IO uint32_t AES_DADDR;             /*!< [0x0144] AES DMA Destination Address Register                             */
    __IO uint32_t AES_CNT;               /*!< [0x0148] AES Byte Count Register                                          */
    __I  uint32_t RESERVE3[109];
    __IO uint32_t HMAC_CTL;              /*!< [0x0300] SHA/HMAC Control Register                                        */
    __I  uint32_t HMAC_STS;              /*!< [0x0304] SHA/HMAC Status Flag                                             */
    __I  uint32_t HMAC_DGST[16];         /*!< [0x0308] SHA/HMAC Output Digest Data 0~15                                 */
    __IO uint32_t HMAC_KEYCNT;           /*!< [0x0348] SHA/HMAC Key Byte Count Register                                 */
    __IO uint32_t HMAC_SADDR;            /*!< [0x034c] SHA/HMAC DMA Source Address Register                             */
    __IO uint32_t HMAC_DMACNT;           /*!< [0x0350] SHA/HMAC Byte Count Register                                     */
    __IO uint32_t HMAC_DATIN;            /*!< [0x0354] SHA/HMAC Engine Non-DMA Mode Data Input Port Register            */
    __I  uint32_t RESERVE4[105];
    __IO uint32_t HMAC_FBADDR;           /*!< [0x04fc] SHA/HMAC DMA Feedback Address Register                           */

} CRYPTO_T;

/**
    @addtogroup CRYPTO_CONST CRYPTO Bit Field Definition
    Constant Definitions for CRYPTO Controller
@{ */

#define CRYPTO_INTEN_AESIEN_Pos          (0)                                               /*!< CRYPTO_T::INTEN: AESIEN Position       */
#define CRYPTO_INTEN_AESIEN_Msk          (0x1ul << CRYPTO_INTEN_AESIEN_Pos)                /*!< CRYPTO_T::INTEN: AESIEN Mask           */

#define CRYPTO_INTEN_AESEIEN_Pos         (1)                                               /*!< CRYPTO_T::INTEN: AESEIEN Position      */
#define CRYPTO_INTEN_AESEIEN_Msk         (0x1ul << CRYPTO_INTEN_AESEIEN_Pos)               /*!< CRYPTO_T::INTEN: AESEIEN Mask          */

#define CRYPTO_INTEN_PRNGIEN_Pos         (16)                                              /*!< CRYPTO_T::INTEN: PRNGIEN Position      */
#define CRYPTO_INTEN_PRNGIEN_Msk         (0x1ul << CRYPTO_INTEN_PRNGIEN_Pos)               /*!< CRYPTO_T::INTEN: PRNGIEN Mask          */

#define CRYPTO_INTEN_PRNGEIEN_Pos        (17)                                              /*!< CRYPTO_T::INTEN: PRNGEIEN Position     */
#define CRYPTO_INTEN_PRNGEIEN_Msk        (0x1ul << CRYPTO_INTEN_PRNGEIEN_Pos)              /*!< CRYPTO_T::INTEN: PRNGEIEN Mask         */

#define CRYPTO_INTEN_HMACIEN_Pos         (24)                                              /*!< CRYPTO_T::INTEN: HMACIEN Position      */
#define CRYPTO_INTEN_HMACIEN_Msk         (0x1ul << CRYPTO_INTEN_HMACIEN_Pos)               /*!< CRYPTO_T::INTEN: HMACIEN Mask          */

#define CRYPTO_INTEN_HMACEIEN_Pos        (25)                                              /*!< CRYPTO_T::INTEN: HMACEIEN Position     */
#define CRYPTO_INTEN_HMACEIEN_Msk        (0x1ul << CRYPTO_INTEN_HMACEIEN_Pos)              /*!< CRYPTO_T::INTEN: HMACEIEN Mask         */

#define CRYPTO_INTSTS_AESIF_Pos          (0)                                               /*!< CRYPTO_T::INTSTS: AESIF Position       */
#define CRYPTO_INTSTS_AESIF_Msk          (0x1ul << CRYPTO_INTSTS_AESIF_Pos)                /*!< CRYPTO_T::INTSTS: AESIF Mask           */

#define CRYPTO_INTSTS_AESEIF_Pos         (1)                                               /*!< CRYPTO_T::INTSTS: AESEIF Position      */
#define CRYPTO_INTSTS_AESEIF_Msk         (0x1ul << CRYPTO_INTSTS_AESEIF_Pos)               /*!< CRYPTO_T::INTSTS: AESEIF Mask          */

#define CRYPTO_INTSTS_PRNGIF_Pos         (16)                                              /*!< CRYPTO_T::INTSTS: PRNGIF Position      */
#define CRYPTO_INTSTS_PRNGIF_Msk         (0x1ul << CRYPTO_INTSTS_PRNGIF_Pos)               /*!< CRYPTO_T::INTSTS: PRNGIF Mask          */

#define CRYPTO_INTSTS_PRNGEIF_Pos        (17)                                              /*!< CRYPTO_T::INTSTS: PRNGEIF Position     */
#define CRYPTO_INTSTS_PRNGEIF_Msk        (0x1ul << CRYPTO_INTSTS_PRNGEIF_Pos)              /*!< CRYPTO_T::INTSTS: PRNGEIF Mask         */

#define CRYPTO_INTSTS_HMACIF_Pos         (24)                                              /*!< CRYPTO_T::INTSTS: HMACIF Position      */
#define CRYPTO_INTSTS_HMACIF_Msk         (0x1ul << CRYPTO_INTSTS_HMACIF_Pos)               /*!< CRYPTO_T::INTSTS: HMACIF Mask          */

#define CRYPTO_INTSTS_HMACEIF_Pos        (25)                                              /*!< CRYPTO_T::INTSTS: HMACEIF Position     */
#define CRYPTO_INTSTS_HMACEIF_Msk        (0x1ul << CRYPTO_INTSTS_HMACEIF_Pos)              /*!< CRYPTO_T::INTSTS: HMACEIF Mask         */

#define CRYPTO_PRNG_CTL_START_Pos        (0)                                               /*!< CRYPTO_T::PRNG_CTL: START Position     */
#define CRYPTO_PRNG_CTL_START_Msk        (0x1ul << CRYPTO_PRNG_CTL_START_Pos)              /*!< CRYPTO_T::PRNG_CTL: START Mask         */

#define CRYPTO_PRNG_CTL_SEEDRLD_Pos      (1)                                               /*!< CRYPTO_T::PRNG_CTL: SEEDRLD Position   */
#define CRYPTO_PRNG_CTL_SEEDRLD_Msk      (0x1ul << CRYPTO_PRNG_CTL_SEEDRLD_Pos)            /*!< CRYPTO_T::PRNG_CTL: SEEDRLD Mask       */

#define CRYPTO_PRNG_CTL_KEYSZ_Pos        (2)                                               /*!< CRYPTO_T::PRNG_CTL: KEYSZ Position     */
#define CRYPTO_PRNG_CTL_KEYSZ_Msk        (0xful << CRYPTO_PRNG_CTL_KEYSZ_Pos)              /*!< CRYPTO_T::PRNG_CTL: KEYSZ Mask         */

#define CRYPTO_PRNG_CTL_BUSY_Pos         (8)                                               /*!< CRYPTO_T::PRNG_CTL: BUSY Position      */
#define CRYPTO_PRNG_CTL_BUSY_Msk         (0x1ul << CRYPTO_PRNG_CTL_BUSY_Pos)               /*!< CRYPTO_T::PRNG_CTL: BUSY Mask          */

#define CRYPTO_PRNG_CTL_SEEDSRC_Pos      (16)                                              /*!< CRYPTO_T::PRNG_CTL: SEEDSRC Position   */
#define CRYPTO_PRNG_CTL_SEEDSRC_Msk      (0x1ul << CRYPTO_PRNG_CTL_SEEDSRC_Pos)            /*!< CRYPTO_T::PRNG_CTL: SEEDSRC Mask       */

#define CRYPTO_PRNG_SEED_SEED_Pos        (0)                                               /*!< CRYPTO_T::PRNG_SEED: SEED Position     */
#define CRYPTO_PRNG_SEED_SEED_Msk        (0xfffffffful << CRYPTO_PRNG_SEED_SEED_Pos)       /*!< CRYPTO_T::PRNG_SEED: SEED Mask         */

#define CRYPTO_PRNG_KEY0_KEY_Pos         (0)                                               /*!< CRYPTO_T::PRNG_KEY0: KEY Position      */
#define CRYPTO_PRNG_KEY0_KEY_Msk         (0xfffffffful << CRYPTO_PRNG_KEY0_KEY_Pos)        /*!< CRYPTO_T::PRNG_KEY0: KEY Mask          */

#define CRYPTO_PRNG_KEY1_KEY_Pos         (0)                                               /*!< CRYPTO_T::PRNG_KEY1: KEY Position      */
#define CRYPTO_PRNG_KEY1_KEY_Msk         (0xfffffffful << CRYPTO_PRNG_KEY1_KEY_Pos)        /*!< CRYPTO_T::PRNG_KEY1: KEY Mask          */

#define CRYPTO_PRNG_KEY2_KEY_Pos         (0)                                               /*!< CRYPTO_T::PRNG_KEY2: KEY Position      */
#define CRYPTO_PRNG_KEY2_KEY_Msk         (0xfffffffful << CRYPTO_PRNG_KEY2_KEY_Pos)        /*!< CRYPTO_T::PRNG_KEY2: KEY Mask          */

#define CRYPTO_PRNG_KEY3_KEY_Pos         (0)                                               /*!< CRYPTO_T::PRNG_KEY3: KEY Position      */
#define CRYPTO_PRNG_KEY3_KEY_Msk         (0xfffffffful << CRYPTO_PRNG_KEY3_KEY_Pos)        /*!< CRYPTO_T::PRNG_KEY3: KEY Mask          */

#define CRYPTO_PRNG_KEY4_KEY_Pos         (0)                                               /*!< CRYPTO_T::PRNG_KEY4: KEY Position      */
#define CRYPTO_PRNG_KEY4_KEY_Msk         (0xfffffffful << CRYPTO_PRNG_KEY4_KEY_Pos)        /*!< CRYPTO_T::PRNG_KEY4: KEY Mask          */

#define CRYPTO_PRNG_KEY5_KEY_Pos         (0)                                               /*!< CRYPTO_T::PRNG_KEY5: KEY Position      */
#define CRYPTO_PRNG_KEY5_KEY_Msk         (0xfffffffful << CRYPTO_PRNG_KEY5_KEY_Pos)        /*!< CRYPTO_T::PRNG_KEY5: KEY Mask          */

#define CRYPTO_PRNG_KEY6_KEY_Pos         (0)                                               /*!< CRYPTO_T::PRNG_KEY6: KEY Position      */
#define CRYPTO_PRNG_KEY6_KEY_Msk         (0xfffffffful << CRYPTO_PRNG_KEY6_KEY_Pos)        /*!< CRYPTO_T::PRNG_KEY6: KEY Mask          */

#define CRYPTO_PRNG_KEY7_KEY_Pos         (0)                                               /*!< CRYPTO_T::PRNG_KEY7: KEY Position      */
#define CRYPTO_PRNG_KEY7_KEY_Msk         (0xfffffffful << CRYPTO_PRNG_KEY7_KEY_Pos)        /*!< CRYPTO_T::PRNG_KEY7: KEY Mask          */

#define CRYPTO_PRNG_STS_BUSY_Pos         (0)                                               /*!< CRYPTO_T::PRNG_STS: BUSY Position      */
#define CRYPTO_PRNG_STS_BUSY_Msk         (0x1ul << CRYPTO_PRNG_STS_BUSY_Pos)               /*!< CRYPTO_T::PRNG_STS: BUSY Mask          */

#define CRYPTO_PRNG_STS_TRNGERR_Pos      (18)                                              /*!< CRYPTO_T::PRNG_STS: TRNGERR Position   */
#define CRYPTO_PRNG_STS_TRNGERR_Msk      (0x1ul << CRYPTO_PRNG_STS_TRNGERR_Pos)            /*!< CRYPTO_T::PRNG_STS: TRNGERR Mask       */

#define CRYPTO_AES_GCM_IVCNT0_CNT_Pos    (0)                                               /*!< CRYPTO_T::AES_GCM_IVCNT0: CNT Position */
#define CRYPTO_AES_GCM_IVCNT0_CNT_Msk    (0xfffffffful << CRYPTO_AES_GCM_IVCNT0_CNT_Pos)   /*!< CRYPTO_T::AES_GCM_IVCNT0: CNT Mask     */

#define CRYPTO_AES_GCM_IVCNT1_CNT_Pos    (0)                                               /*!< CRYPTO_T::AES_GCM_IVCNT1: CNT Position */
#define CRYPTO_AES_GCM_IVCNT1_CNT_Msk    (0x1ffffffful << CRYPTO_AES_GCM_IVCNT1_CNT_Pos)   /*!< CRYPTO_T::AES_GCM_IVCNT1: CNT Mask     */

#define CRYPTO_AES_GCM_ACNT0_CNT_Pos     (0)                                               /*!< CRYPTO_T::AES_GCM_ACNT0: CNT Position  */
#define CRYPTO_AES_GCM_ACNT0_CNT_Msk     (0xfffffffful << CRYPTO_AES_GCM_ACNT0_CNT_Pos)    /*!< CRYPTO_T::AES_GCM_ACNT0: CNT Mask      */

#define CRYPTO_AES_GCM_ACNT1_CNT_Pos     (0)                                               /*!< CRYPTO_T::AES_GCM_ACNT1: CNT Position  */
#define CRYPTO_AES_GCM_ACNT1_CNT_Msk     (0x1ffffffful << CRYPTO_AES_GCM_ACNT1_CNT_Pos)    /*!< CRYPTO_T::AES_GCM_ACNT1: CNT Mask      */

#define CRYPTO_AES_GCM_PCNT0_CNT_Pos     (0)                                               /*!< CRYPTO_T::AES_GCM_PCNT0: CNT Position  */
#define CRYPTO_AES_GCM_PCNT0_CNT_Msk     (0xfffffffful << CRYPTO_AES_GCM_PCNT0_CNT_Pos)    /*!< CRYPTO_T::AES_GCM_PCNT0: CNT Mask      */

#define CRYPTO_AES_GCM_PCNT1_CNT_Pos     (0)                                               /*!< CRYPTO_T::AES_GCM_PCNT1: CNT Position  */
#define CRYPTO_AES_GCM_PCNT1_CNT_Msk     (0x1ffffffful << CRYPTO_AES_GCM_PCNT1_CNT_Pos)    /*!< CRYPTO_T::AES_GCM_PCNT1: CNT Mask      */

#define CRYPTO_AES_FBADDR_FBADDR_Pos     (0)                                               /*!< CRYPTO_T::AES_FBADDR: FBADDR Position  */
#define CRYPTO_AES_FBADDR_FBADDR_Msk     (0xfffffffful << CRYPTO_AES_FBADDR_FBADDR_Pos)    /*!< CRYPTO_T::AES_FBADDR: FBADDR Mask      */

#define CRYPTO_AES_CTL_START_Pos         (0)                                               /*!< CRYPTO_T::AES_CTL: START Position      */
#define CRYPTO_AES_CTL_START_Msk         (0x1ul << CRYPTO_AES_CTL_START_Pos)               /*!< CRYPTO_T::AES_CTL: START Mask          */

#define CRYPTO_AES_CTL_STOP_Pos          (1)                                               /*!< CRYPTO_T::AES_CTL: STOP Position       */
#define CRYPTO_AES_CTL_STOP_Msk          (0x1ul << CRYPTO_AES_CTL_STOP_Pos)                /*!< CRYPTO_T::AES_CTL: STOP Mask           */

#define CRYPTO_AES_CTL_KEYSZ_Pos         (2)                                               /*!< CRYPTO_T::AES_CTL: KEYSZ Position      */
#define CRYPTO_AES_CTL_KEYSZ_Msk         (0x3ul << CRYPTO_AES_CTL_KEYSZ_Pos)               /*!< CRYPTO_T::AES_CTL: KEYSZ Mask          */

#define CRYPTO_AES_CTL_DMALAST_Pos       (5)                                               /*!< CRYPTO_T::AES_CTL: DMALAST Position    */
#define CRYPTO_AES_CTL_DMALAST_Msk       (0x1ul << CRYPTO_AES_CTL_DMALAST_Pos)             /*!< CRYPTO_T::AES_CTL: DMALAST Mask        */

#define CRYPTO_AES_CTL_DMACSCAD_Pos      (6)                                               /*!< CRYPTO_T::AES_CTL: DMACSCAD Position   */
#define CRYPTO_AES_CTL_DMACSCAD_Msk      (0x1ul << CRYPTO_AES_CTL_DMACSCAD_Pos)            /*!< CRYPTO_T::AES_CTL: DMACSCAD Mask       */

#define CRYPTO_AES_CTL_DMAEN_Pos         (7)                                               /*!< CRYPTO_T::AES_CTL: DMAEN Position      */
#define CRYPTO_AES_CTL_DMAEN_Msk         (0x1ul << CRYPTO_AES_CTL_DMAEN_Pos)               /*!< CRYPTO_T::AES_CTL: DMAEN Mask          */

#define CRYPTO_AES_CTL_OPMODE_Pos        (8)                                               /*!< CRYPTO_T::AES_CTL: OPMODE Position     */
#define CRYPTO_AES_CTL_OPMODE_Msk        (0xfful << CRYPTO_AES_CTL_OPMODE_Pos)             /*!< CRYPTO_T::AES_CTL: OPMODE Mask         */

#define CRYPTO_AES_CTL_ENCRYPTO_Pos      (16)                                              /*!< CRYPTO_T::AES_CTL: ENCRYPTO Position   */
#define CRYPTO_AES_CTL_ENCRYPTO_Msk      (0x1ul << CRYPTO_AES_CTL_ENCRYPTO_Pos)            /*!< CRYPTO_T::AES_CTL: ENCRYPTO Mask       */

#define CRYPTO_AES_CTL_FBIN_Pos          (20)                                              /*!< CRYPTO_T::AES_CTL: FBIN Position       */
#define CRYPTO_AES_CTL_FBIN_Msk          (0x1ul << CRYPTO_AES_CTL_FBIN_Pos)                /*!< CRYPTO_T::AES_CTL: FBIN Mask           */

#define CRYPTO_AES_CTL_FBOUT_Pos         (21)                                              /*!< CRYPTO_T::AES_CTL: FBOUT Position      */
#define CRYPTO_AES_CTL_FBOUT_Msk         (0x1ul << CRYPTO_AES_CTL_FBOUT_Pos)               /*!< CRYPTO_T::AES_CTL: FBOUT Mask          */

#define CRYPTO_AES_CTL_OUTSWAP_Pos       (22)                                              /*!< CRYPTO_T::AES_CTL: OUTSWAP Position    */
#define CRYPTO_AES_CTL_OUTSWAP_Msk       (0x1ul << CRYPTO_AES_CTL_OUTSWAP_Pos)             /*!< CRYPTO_T::AES_CTL: OUTSWAP Mask        */

#define CRYPTO_AES_CTL_INSWAP_Pos        (23)                                              /*!< CRYPTO_T::AES_CTL: INSWAP Position     */
#define CRYPTO_AES_CTL_INSWAP_Msk        (0x1ul << CRYPTO_AES_CTL_INSWAP_Pos)              /*!< CRYPTO_T::AES_CTL: INSWAP Mask         */

#define CRYPTO_AES_CTL_KOUTSWAP_Pos      (24)                                              /*!< CRYPTO_T::AES_CTL: KOUTSWAP Position   */
#define CRYPTO_AES_CTL_KOUTSWAP_Msk      (0x1ul << CRYPTO_AES_CTL_KOUTSWAP_Pos)            /*!< CRYPTO_T::AES_CTL: KOUTSWAP Mask       */

#define CRYPTO_AES_CTL_KINSWAP_Pos       (25)                                              /*!< CRYPTO_T::AES_CTL: KINSWAP Position    */
#define CRYPTO_AES_CTL_KINSWAP_Msk       (0x1ul << CRYPTO_AES_CTL_KINSWAP_Pos)             /*!< CRYPTO_T::AES_CTL: KINSWAP Mask        */

#define CRYPTO_AES_CTL_KEYUNPRT_Pos      (26)                                              /*!< CRYPTO_T::AES_CTL: KEYUNPRT Position   */
#define CRYPTO_AES_CTL_KEYUNPRT_Msk      (0x1ful << CRYPTO_AES_CTL_KEYUNPRT_Pos)           /*!< CRYPTO_T::AES_CTL: KEYUNPRT Mask       */

#define CRYPTO_AES_CTL_KEYPRT_Pos        (31)                                              /*!< CRYPTO_T::AES_CTL: KEYPRT Position     */
#define CRYPTO_AES_CTL_KEYPRT_Msk        (0x1ul << CRYPTO_AES_CTL_KEYPRT_Pos)              /*!< CRYPTO_T::AES_CTL: KEYPRT Mask         */

#define CRYPTO_AES_STS_BUSY_Pos          (0)                                               /*!< CRYPTO_T::AES_STS: BUSY Position       */
#define CRYPTO_AES_STS_BUSY_Msk          (0x1ul << CRYPTO_AES_STS_BUSY_Pos)                /*!< CRYPTO_T::AES_STS: BUSY Mask           */

#define CRYPTO_AES_STS_INBUFEMPTY_Pos    (8)                                               /*!< CRYPTO_T::AES_STS: INBUFEMPTY Position */
#define CRYPTO_AES_STS_INBUFEMPTY_Msk    (0x1ul << CRYPTO_AES_STS_INBUFEMPTY_Pos)          /*!< CRYPTO_T::AES_STS: INBUFEMPTY Mask     */

#define CRYPTO_AES_STS_INBUFFULL_Pos     (9)                                               /*!< CRYPTO_T::AES_STS: INBUFFULL Position  */
#define CRYPTO_AES_STS_INBUFFULL_Msk     (0x1ul << CRYPTO_AES_STS_INBUFFULL_Pos)           /*!< CRYPTO_T::AES_STS: INBUFFULL Mask      */

#define CRYPTO_AES_STS_INBUFERR_Pos      (10)                                              /*!< CRYPTO_T::AES_STS: INBUFERR Position   */
#define CRYPTO_AES_STS_INBUFERR_Msk      (0x1ul << CRYPTO_AES_STS_INBUFERR_Pos)            /*!< CRYPTO_T::AES_STS: INBUFERR Mask       */

#define CRYPTO_AES_STS_CNTERR_Pos        (12)                                              /*!< CRYPTO_T::AES_STS: CNTERR Position     */
#define CRYPTO_AES_STS_CNTERR_Msk        (0x1ul << CRYPTO_AES_STS_CNTERR_Pos)              /*!< CRYPTO_T::AES_STS: CNTERR Mask         */

#define CRYPTO_AES_STS_OUTBUFEMPTY_Pos   (16)                                              /*!< CRYPTO_T::AES_STS: OUTBUFEMPTY Position*/
#define CRYPTO_AES_STS_OUTBUFEMPTY_Msk   (0x1ul << CRYPTO_AES_STS_OUTBUFEMPTY_Pos)         /*!< CRYPTO_T::AES_STS: OUTBUFEMPTY Mask    */

#define CRYPTO_AES_STS_OUTBUFFULL_Pos    (17)                                              /*!< CRYPTO_T::AES_STS: OUTBUFFULL Position */
#define CRYPTO_AES_STS_OUTBUFFULL_Msk    (0x1ul << CRYPTO_AES_STS_OUTBUFFULL_Pos)          /*!< CRYPTO_T::AES_STS: OUTBUFFULL Mask     */

#define CRYPTO_AES_STS_OUTBUFERR_Pos     (18)                                              /*!< CRYPTO_T::AES_STS: OUTBUFERR Position  */
#define CRYPTO_AES_STS_OUTBUFERR_Msk     (0x1ul << CRYPTO_AES_STS_OUTBUFERR_Pos)           /*!< CRYPTO_T::AES_STS: OUTBUFERR Mask      */

#define CRYPTO_AES_STS_BUSERR_Pos        (20)                                              /*!< CRYPTO_T::AES_STS: BUSERR Position     */
#define CRYPTO_AES_STS_BUSERR_Msk        (0x1ul << CRYPTO_AES_STS_BUSERR_Pos)              /*!< CRYPTO_T::AES_STS: BUSERR Mask         */

#define CRYPTO_AES_DATIN_DATIN_Pos       (0)                                               /*!< CRYPTO_T::AES_DATIN: DATIN Position    */
#define CRYPTO_AES_DATIN_DATIN_Msk       (0xfffffffful << CRYPTO_AES_DATIN_DATIN_Pos)      /*!< CRYPTO_T::AES_DATIN: DATIN Mask        */

#define CRYPTO_AES_DATOUT_DATOUT_Pos     (0)                                               /*!< CRYPTO_T::AES_DATOUT: DATOUT Position  */
#define CRYPTO_AES_DATOUT_DATOUT_Msk     (0xfffffffful << CRYPTO_AES_DATOUT_DATOUT_Pos)    /*!< CRYPTO_T::AES_DATOUT: DATOUT Mask      */

#define CRYPTO_AES_KEY0_KEY_Pos          (0)                                               /*!< CRYPTO_T::AES_KEY0: KEY Position       */
#define CRYPTO_AES_KEY0_KEY_Msk          (0xfffffffful << CRYPTO_AES_KEY0_KEY_Pos)         /*!< CRYPTO_T::AES_KEY0: KEY Mask           */

#define CRYPTO_AES_KEY1_KEY_Pos          (0)                                               /*!< CRYPTO_T::AES_KEY1: KEY Position       */
#define CRYPTO_AES_KEY1_KEY_Msk          (0xfffffffful << CRYPTO_AES_KEY1_KEY_Pos)         /*!< CRYPTO_T::AES_KEY1: KEY Mask           */

#define CRYPTO_AES_KEY2_KEY_Pos          (0)                                               /*!< CRYPTO_T::AES_KEY2: KEY Position       */
#define CRYPTO_AES_KEY2_KEY_Msk          (0xfffffffful << CRYPTO_AES_KEY2_KEY_Pos)         /*!< CRYPTO_T::AES_KEY2: KEY Mask           */

#define CRYPTO_AES_KEY3_KEY_Pos          (0)                                               /*!< CRYPTO_T::AES_KEY3: KEY Position       */
#define CRYPTO_AES_KEY3_KEY_Msk          (0xfffffffful << CRYPTO_AES_KEY3_KEY_Pos)         /*!< CRYPTO_T::AES_KEY3: KEY Mask           */

#define CRYPTO_AES_KEY4_KEY_Pos          (0)                                               /*!< CRYPTO_T::AES_KEY4: KEY Position       */
#define CRYPTO_AES_KEY4_KEY_Msk          (0xfffffffful << CRYPTO_AES_KEY4_KEY_Pos)         /*!< CRYPTO_T::AES_KEY4: KEY Mask           */

#define CRYPTO_AES_KEY5_KEY_Pos          (0)                                               /*!< CRYPTO_T::AES_KEY5: KEY Position       */
#define CRYPTO_AES_KEY5_KEY_Msk          (0xfffffffful << CRYPTO_AES_KEY5_KEY_Pos)         /*!< CRYPTO_T::AES_KEY5: KEY Mask           */

#define CRYPTO_AES_KEY6_KEY_Pos          (0)                                               /*!< CRYPTO_T::AES_KEY6: KEY Position       */
#define CRYPTO_AES_KEY6_KEY_Msk          (0xfffffffful << CRYPTO_AES_KEY6_KEY_Pos)         /*!< CRYPTO_T::AES_KEY6: KEY Mask           */

#define CRYPTO_AES_KEY7_KEY_Pos          (0)                                               /*!< CRYPTO_T::AES_KEY7: KEY Position       */
#define CRYPTO_AES_KEY7_KEY_Msk          (0xfffffffful << CRYPTO_AES_KEY7_KEY_Pos)         /*!< CRYPTO_T::AES_KEY7: KEY Mask           */

#define CRYPTO_AES_IV0_IV_Pos            (0)                                               /*!< CRYPTO_T::AES_IV0: IV Position         */
#define CRYPTO_AES_IV0_IV_Msk            (0xfffffffful << CRYPTO_AES_IV0_IV_Pos)           /*!< CRYPTO_T::AES_IV0: IV Mask             */

#define CRYPTO_AES_IV1_IV_Pos            (0)                                               /*!< CRYPTO_T::AES_IV1: IV Position         */
#define CRYPTO_AES_IV1_IV_Msk            (0xfffffffful << CRYPTO_AES_IV1_IV_Pos)           /*!< CRYPTO_T::AES_IV1: IV Mask             */

#define CRYPTO_AES_IV2_IV_Pos            (0)                                               /*!< CRYPTO_T::AES_IV2: IV Position         */
#define CRYPTO_AES_IV2_IV_Msk            (0xfffffffful << CRYPTO_AES_IV2_IV_Pos)           /*!< CRYPTO_T::AES_IV2: IV Mask             */

#define CRYPTO_AES_IV3_IV_Pos            (0)                                               /*!< CRYPTO_T::AES_IV3: IV Position         */
#define CRYPTO_AES_IV3_IV_Msk            (0xfffffffful << CRYPTO_AES_IV3_IV_Pos)           /*!< CRYPTO_T::AES_IV3: IV Mask             */

#define CRYPTO_AES_SADDR_SADDR_Pos       (0)                                               /*!< CRYPTO_T::AES_SADDR: SADDR Position    */
#define CRYPTO_AES_SADDR_SADDR_Msk       (0xfffffffful << CRYPTO_AES_SADDR_SADDR_Pos)      /*!< CRYPTO_T::AES_SADDR: SADDR Mask        */

#define CRYPTO_AES_DADDR_DADDR_Pos       (0)                                               /*!< CRYPTO_T::AES_DADDR: DADDR Position    */
#define CRYPTO_AES_DADDR_DADDR_Msk       (0xfffffffful << CRYPTO_AES_DADDR_DADDR_Pos)      /*!< CRYPTO_T::AES_DADDR: DADDR Mask        */

#define CRYPTO_AES_CNT_CNT_Pos           (0)                                               /*!< CRYPTO_T::AES_CNT: CNT Position        */
#define CRYPTO_AES_CNT_CNT_Msk           (0xfffffffful << CRYPTO_AES_CNT_CNT_Pos)          /*!< CRYPTO_T::AES_CNT: CNT Mask            */

#define CRYPTO_HMAC_CTL_START_Pos        (0)                                               /*!< CRYPTO_T::HMAC_CTL: START Position     */
#define CRYPTO_HMAC_CTL_START_Msk        (0x1ul << CRYPTO_HMAC_CTL_START_Pos)              /*!< CRYPTO_T::HMAC_CTL: START Mask         */

#define CRYPTO_HMAC_CTL_STOP_Pos         (1)                                               /*!< CRYPTO_T::HMAC_CTL: STOP Position      */
#define CRYPTO_HMAC_CTL_STOP_Msk         (0x1ul << CRYPTO_HMAC_CTL_STOP_Pos)               /*!< CRYPTO_T::HMAC_CTL: STOP Mask          */

#define CRYPTO_HMAC_CTL_DMAFIRST_Pos     (4)                                               /*!< CRYPTO_T::HMAC_CTL: DMAFIRST Position  */
#define CRYPTO_HMAC_CTL_DMAFIRST_Msk     (0x1ul << CRYPTO_HMAC_CTL_DMAFIRST_Pos)           /*!< CRYPTO_T::HMAC_CTL: DMAFIRST Mask      */

#define CRYPTO_HMAC_CTL_DMALAST_Pos      (5)                                               /*!< CRYPTO_T::HMAC_CTL: DMALAST Position   */
#define CRYPTO_HMAC_CTL_DMALAST_Msk      (0x1ul << CRYPTO_HMAC_CTL_DMALAST_Pos)            /*!< CRYPTO_T::HMAC_CTL: DMALAST Mask       */

#define CRYPTO_HMAC_CTL_DMACSCAD_Pos     (6)                                               /*!< CRYPTO_T::HMAC_CTL: DMACSCAD Position  */
#define CRYPTO_HMAC_CTL_DMACSCAD_Msk     (0x1ul << CRYPTO_HMAC_CTL_DMACSCAD_Pos)           /*!< CRYPTO_T::HMAC_CTL: DMACSCAD Mask      */

#define CRYPTO_HMAC_CTL_DMAEN_Pos        (7)                                               /*!< CRYPTO_T::HMAC_CTL: DMAEN Position     */
#define CRYPTO_HMAC_CTL_DMAEN_Msk        (0x1ul << CRYPTO_HMAC_CTL_DMAEN_Pos)              /*!< CRYPTO_T::HMAC_CTL: DMAEN Mask         */

#define CRYPTO_HMAC_CTL_OPMODE_Pos       (8)                                               /*!< CRYPTO_T::HMAC_CTL: OPMODE Position    */
#define CRYPTO_HMAC_CTL_OPMODE_Msk       (0x7ul << CRYPTO_HMAC_CTL_OPMODE_Pos)             /*!< CRYPTO_T::HMAC_CTL: OPMODE Mask        */

#define CRYPTO_HMAC_CTL_HMACEN_Pos       (11)                                              /*!< CRYPTO_T::HMAC_CTL: HMACEN Position    */
#define CRYPTO_HMAC_CTL_HMACEN_Msk       (0x1ul << CRYPTO_HMAC_CTL_HMACEN_Pos)             /*!< CRYPTO_T::HMAC_CTL: HMACEN Mask        */

#define CRYPTO_HMAC_CTL_MD5EN_Pos        (14)                                              /*!< CRYPTO_T::HMAC_CTL: MD5EN Position     */
#define CRYPTO_HMAC_CTL_MD5EN_Msk        (0x1ul << CRYPTO_HMAC_CTL_MD5EN_Pos)              /*!< CRYPTO_T::HMAC_CTL: MD5EN Mask         */

#define CRYPTO_HMAC_CTL_FBIN_Pos         (20)                                              /*!< CRYPTO_T::HMAC_CTL: FBIN Position      */
#define CRYPTO_HMAC_CTL_FBIN_Msk         (0x1ul << CRYPTO_HMAC_CTL_FBIN_Pos)               /*!< CRYPTO_T::HMAC_CTL: FBIN Mask          */

#define CRYPTO_HMAC_CTL_FBOUT_Pos        (21)                                              /*!< CRYPTO_T::HMAC_CTL: FBOUT Position     */
#define CRYPTO_HMAC_CTL_FBOUT_Msk        (0x1ul << CRYPTO_HMAC_CTL_FBOUT_Pos)              /*!< CRYPTO_T::HMAC_CTL: FBOUT Mask         */

#define CRYPTO_HMAC_CTL_OUTSWAP_Pos      (22)                                              /*!< CRYPTO_T::HMAC_CTL: OUTSWAP Position   */
#define CRYPTO_HMAC_CTL_OUTSWAP_Msk      (0x1ul << CRYPTO_HMAC_CTL_OUTSWAP_Pos)            /*!< CRYPTO_T::HMAC_CTL: OUTSWAP Mask       */

#define CRYPTO_HMAC_CTL_INSWAP_Pos       (23)                                              /*!< CRYPTO_T::HMAC_CTL: INSWAP Position    */
#define CRYPTO_HMAC_CTL_INSWAP_Msk       (0x1ul << CRYPTO_HMAC_CTL_INSWAP_Pos)             /*!< CRYPTO_T::HMAC_CTL: INSWAP Mask        */

#define CRYPTO_HMAC_STS_BUSY_Pos         (0)                                               /*!< CRYPTO_T::HMAC_STS: BUSY Position      */
#define CRYPTO_HMAC_STS_BUSY_Msk         (0x1ul << CRYPTO_HMAC_STS_BUSY_Pos)               /*!< CRYPTO_T::HMAC_STS: BUSY Mask          */

#define CRYPTO_HMAC_STS_DMABUSY_Pos      (1)                                               /*!< CRYPTO_T::HMAC_STS: DMABUSY Position   */
#define CRYPTO_HMAC_STS_DMABUSY_Msk      (0x1ul << CRYPTO_HMAC_STS_DMABUSY_Pos)            /*!< CRYPTO_T::HMAC_STS: DMABUSY Mask       */

#define CRYPTO_HMAC_STS_DMAERR_Pos       (8)                                               /*!< CRYPTO_T::HMAC_STS: DMAERR Position    */
#define CRYPTO_HMAC_STS_DMAERR_Msk       (0x1ul << CRYPTO_HMAC_STS_DMAERR_Pos)             /*!< CRYPTO_T::HMAC_STS: DMAERR Mask        */

#define CRYPTO_HMAC_STS_DATINREQ_Pos     (16)                                              /*!< CRYPTO_T::HMAC_STS: DATINREQ Position  */
#define CRYPTO_HMAC_STS_DATINREQ_Msk     (0x1ul << CRYPTO_HMAC_STS_DATINREQ_Pos)           /*!< CRYPTO_T::HMAC_STS: DATINREQ Mask      */

#define CRYPTO_HMAC_DGST0_DGST_Pos       (0)                                               /*!< CRYPTO_T::HMAC_DGST0: DGST Position    */
#define CRYPTO_HMAC_DGST0_DGST_Msk       (0xfffffffful << CRYPTO_HMAC_DGST0_DGST_Pos)      /*!< CRYPTO_T::HMAC_DGST0: DGST Mask        */

#define CRYPTO_HMAC_DGST1_DGST_Pos       (0)                                               /*!< CRYPTO_T::HMAC_DGST1: DGST Position    */
#define CRYPTO_HMAC_DGST1_DGST_Msk       (0xfffffffful << CRYPTO_HMAC_DGST1_DGST_Pos)      /*!< CRYPTO_T::HMAC_DGST1: DGST Mask        */

#define CRYPTO_HMAC_DGST2_DGST_Pos       (0)                                               /*!< CRYPTO_T::HMAC_DGST2: DGST Position    */
#define CRYPTO_HMAC_DGST2_DGST_Msk       (0xfffffffful << CRYPTO_HMAC_DGST2_DGST_Pos)      /*!< CRYPTO_T::HMAC_DGST2: DGST Mask        */

#define CRYPTO_HMAC_DGST3_DGST_Pos       (0)                                               /*!< CRYPTO_T::HMAC_DGST3: DGST Position    */
#define CRYPTO_HMAC_DGST3_DGST_Msk       (0xfffffffful << CRYPTO_HMAC_DGST3_DGST_Pos)      /*!< CRYPTO_T::HMAC_DGST3: DGST Mask        */

#define CRYPTO_HMAC_DGST4_DGST_Pos       (0)                                               /*!< CRYPTO_T::HMAC_DGST4: DGST Position    */
#define CRYPTO_HMAC_DGST4_DGST_Msk       (0xfffffffful << CRYPTO_HMAC_DGST4_DGST_Pos)      /*!< CRYPTO_T::HMAC_DGST4: DGST Mask        */

#define CRYPTO_HMAC_DGST5_DGST_Pos       (0)                                               /*!< CRYPTO_T::HMAC_DGST5: DGST Position    */
#define CRYPTO_HMAC_DGST5_DGST_Msk       (0xfffffffful << CRYPTO_HMAC_DGST5_DGST_Pos)      /*!< CRYPTO_T::HMAC_DGST5: DGST Mask        */

#define CRYPTO_HMAC_DGST6_DGST_Pos       (0)                                               /*!< CRYPTO_T::HMAC_DGST6: DGST Position    */
#define CRYPTO_HMAC_DGST6_DGST_Msk       (0xfffffffful << CRYPTO_HMAC_DGST6_DGST_Pos)      /*!< CRYPTO_T::HMAC_DGST6: DGST Mask        */

#define CRYPTO_HMAC_DGST7_DGST_Pos       (0)                                               /*!< CRYPTO_T::HMAC_DGST7: DGST Position    */
#define CRYPTO_HMAC_DGST7_DGST_Msk       (0xfffffffful << CRYPTO_HMAC_DGST7_DGST_Pos)      /*!< CRYPTO_T::HMAC_DGST7: DGST Mask        */

#define CRYPTO_HMAC_DGST8_DGST_Pos       (0)                                               /*!< CRYPTO_T::HMAC_DGST8: DGST Position    */
#define CRYPTO_HMAC_DGST8_DGST_Msk       (0xfffffffful << CRYPTO_HMAC_DGST8_DGST_Pos)      /*!< CRYPTO_T::HMAC_DGST8: DGST Mask        */

#define CRYPTO_HMAC_DGST9_DGST_Pos       (0)                                               /*!< CRYPTO_T::HMAC_DGST9: DGST Position    */
#define CRYPTO_HMAC_DGST9_DGST_Msk       (0xfffffffful << CRYPTO_HMAC_DGST9_DGST_Pos)      /*!< CRYPTO_T::HMAC_DGST9: DGST Mask        */

#define CRYPTO_HMAC_DGST10_DGST_Pos      (0)                                               /*!< CRYPTO_T::HMAC_DGST10: DGST Position   */
#define CRYPTO_HMAC_DGST10_DGST_Msk      (0xfffffffful << CRYPTO_HMAC_DGST10_DGST_Pos)     /*!< CRYPTO_T::HMAC_DGST10: DGST Mask       */

#define CRYPTO_HMAC_DGST11_DGST_Pos      (0)                                               /*!< CRYPTO_T::HMAC_DGST11: DGST Position   */
#define CRYPTO_HMAC_DGST11_DGST_Msk      (0xfffffffful << CRYPTO_HMAC_DGST11_DGST_Pos)     /*!< CRYPTO_T::HMAC_DGST11: DGST Mask       */

#define CRYPTO_HMAC_DGST12_DGST_Pos      (0)                                               /*!< CRYPTO_T::HMAC_DGST12: DGST Position   */
#define CRYPTO_HMAC_DGST12_DGST_Msk      (0xfffffffful << CRYPTO_HMAC_DGST12_DGST_Pos)     /*!< CRYPTO_T::HMAC_DGST12: DGST Mask       */

#define CRYPTO_HMAC_DGST13_DGST_Pos      (0)                                               /*!< CRYPTO_T::HMAC_DGST13: DGST Position   */
#define CRYPTO_HMAC_DGST13_DGST_Msk      (0xfffffffful << CRYPTO_HMAC_DGST13_DGST_Pos)     /*!< CRYPTO_T::HMAC_DGST13: DGST Mask       */

#define CRYPTO_HMAC_DGST14_DGST_Pos      (0)                                               /*!< CRYPTO_T::HMAC_DGST14: DGST Position   */
#define CRYPTO_HMAC_DGST14_DGST_Msk      (0xfffffffful << CRYPTO_HMAC_DGST14_DGST_Pos)     /*!< CRYPTO_T::HMAC_DGST14: DGST Mask       */

#define CRYPTO_HMAC_DGST15_DGST_Pos      (0)                                               /*!< CRYPTO_T::HMAC_DGST15: DGST Position   */
#define CRYPTO_HMAC_DGST15_DGST_Msk      (0xfffffffful << CRYPTO_HMAC_DGST15_DGST_Pos)     /*!< CRYPTO_T::HMAC_DGST15: DGST Mask       */

#define CRYPTO_HMAC_KEYCNT_KEYCNT_Pos    (0)                                               /*!< CRYPTO_T::HMAC_KEYCNT: KEYCNT Position */
#define CRYPTO_HMAC_KEYCNT_KEYCNT_Msk    (0xfffffffful << CRYPTO_HMAC_KEYCNT_KEYCNT_Pos)   /*!< CRYPTO_T::HMAC_KEYCNT: KEYCNT Mask     */

#define CRYPTO_HMAC_SADDR_SADDR_Pos      (0)                                               /*!< CRYPTO_T::HMAC_SADDR: SADDR Position   */
#define CRYPTO_HMAC_SADDR_SADDR_Msk      (0xfffffffful << CRYPTO_HMAC_SADDR_SADDR_Pos)     /*!< CRYPTO_T::HMAC_SADDR: SADDR Mask       */

#define CRYPTO_HMAC_DMACNT_DMACNT_Pos    (0)                                               /*!< CRYPTO_T::HMAC_DMACNT: DMACNT Position */
#define CRYPTO_HMAC_DMACNT_DMACNT_Msk    (0xfffffffful << CRYPTO_HMAC_DMACNT_DMACNT_Pos)   /*!< CRYPTO_T::HMAC_DMACNT: DMACNT Mask     */

#define CRYPTO_HMAC_DATIN_DATIN_Pos      (0)                                               /*!< CRYPTO_T::HMAC_DATIN: DATIN Position   */
#define CRYPTO_HMAC_DATIN_DATIN_Msk      (0xfffffffful << CRYPTO_HMAC_DATIN_DATIN_Pos)     /*!< CRYPTO_T::HMAC_DATIN: DATIN Mask       */

#define CRYPTO_HMAC_FBADDR_FBADDR_Pos    (0)                                               /*!< CRYPTO_T::HMAC_FBADDR: FBADDR Position */
#define CRYPTO_HMAC_FBADDR_FBADDR_Msk    (0xfffffffful << CRYPTO_HMAC_FBADDR_FBADDR_Pos)   /*!< CRYPTO_T::HMAC_FBADDR: FBADDR Mask     */

/** @} CRYPTO_CONST */
/** @} end of CRYPTO register group */
/** @} end of REGISTER group */

#if defined ( __CC_ARM   )
    #pragma no_anon_unions
#endif
#endif /* __CRYPTO_REG_H__ */
