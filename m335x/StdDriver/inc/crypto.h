/**************************************************************************//**
 * @file     crypto.h
 * @version  V3.10
 * @brief    Cryptographic Accelerator driver header file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/

#ifndef __CRYPTO_H__
#define __CRYPTO_H__

#ifdef __cplusplus
extern "C"
{
#endif

/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup CRYPTO_Driver CRYPTO Driver
  @{
*/

/** @addtogroup CRYPTO_EXPORTED_CONSTANTS CRYPTO Exported Constants
  @{
*/

#define PRNG_KEY_SIZE_128       0UL    /*!< PRNG select 128-bit key length           \hideinitializer */
#define PRNG_KEY_SIZE_163       1UL    /*!< PRNG select 163-bit key length           \hideinitializer */
#define PRNG_KEY_SIZE_192       2UL    /*!< PRNG select 192-bit key length           \hideinitializer */
#define PRNG_KEY_SIZE_224       3UL    /*!< PRNG select 224-bit key length           \hideinitializer */
#define PRNG_KEY_SIZE_233       4UL    /*!< PRNG select 233-bit key length           \hideinitializer */
#define PRNG_KEY_SIZE_255       5UL    /*!< PRNG select 255-bit key length           \hideinitializer */
#define PRNG_KEY_SIZE_256       6UL    /*!< PRNG select 256-bit key length           \hideinitializer */

#define PRNG_SEED_CONT          0UL     /*!< PRNG using current seed                 \hideinitializer */
#define PRNG_SEED_RELOAD        1UL     /*!< PRNG reload new seed                    \hideinitializer */

#define AES_KEY_SIZE_128        0UL     /*!< AES select 128-bit key length           \hideinitializer */
#define AES_KEY_SIZE_192        1UL     /*!< AES select 192-bit key length           \hideinitializer */
#define AES_KEY_SIZE_256        2UL     /*!< AES select 256-bit key length           \hideinitializer */

#define AES_MODE_ECB            0UL     /*!< AES select ECB mode                     \hideinitializer */
#define AES_MODE_CBC            1UL     /*!< AES select CBC mode                     \hideinitializer */
#define AES_MODE_CFB            2UL     /*!< AES select CFB mode                     \hideinitializer */
#define AES_MODE_OFB            3UL     /*!< AES select OFB mode                     \hideinitializer */
#define AES_MODE_CTR            4UL     /*!< AES select CTR mode                     \hideinitializer */
#define AES_MODE_CBC_CS1        0x10UL  /*!< AES select CBC CS1 mode                 \hideinitializer */
#define AES_MODE_CBC_CS2        0x11UL  /*!< AES select CBC CS2 mode                 \hideinitializer */
#define AES_MODE_CBC_CS3        0x12UL  /*!< AES select CBC CS3 mode                 \hideinitializer */
#define AES_MODE_GCM            0x20UL  /*!< AES select GCM (Galois/Counter Mode)    \hideinitializer */
#define AES_MODE_CCM            0x22UL  /*!< AES select CCM (Counter with CBC-MAC Mode)   \hideinitializer */

#define AES_NO_SWAP             0UL     /*!< AES do not swap input and output data   \hideinitializer */
#define AES_OUT_SWAP            1UL     /*!< AES swap output data                    \hideinitializer */
#define AES_IN_SWAP             2UL     /*!< AES swap input data                     \hideinitializer */
#define AES_IN_OUT_SWAP         3UL     /*!< AES swap both input and output data     \hideinitializer */

#define SHA_MODE_SEL_SHA1       0UL     /*!< SHA engine select SHA1                  \hideinitializer */
#define SHA_MODE_SEL_SHA2       0UL     /*!< SHA engine select SHA2                  \hideinitializer */
#define SHA_MODE_SEL_SHA3       1UL     /*!< SHA engine select SHA3                  \hideinitializer */
#define SHA_MODE_SEL_SM3        2UL     /*!< SHA engine select SM3                   \hideinitializer */
#define SHA_MODE_SEL_MD5        4UL     /*!< SHA engine select MD5                   \hideinitializer */

#define SHA_MODE_SHA1           0UL     /*!< SHA select SHA-1 160-bit                \hideinitializer */
#define SHA_MODE_SHA224         5UL     /*!< SHA select SHA-224 224-bit              \hideinitializer */
#define SHA_MODE_SHA256         4UL     /*!< SHA select SHA-256 256-bit              \hideinitializer */
#define SHA_MODE_SHA384         7UL     /*!< SHA select SHA-384 384-bit              \hideinitializer */
#define SHA_MODE_SHA512         6UL     /*!< SHA select SHA-512 512-bit              \hideinitializer */

#define HMAC_MODE_SHA224        (13UL)    /*!< HMAC select SHA-224 224-bit              \hideinitializer */
#define HMAC_MODE_SHA256        (12UL)    /*!< HMAC select SHA-256 256-bit              \hideinitializer */
#define HMAC_MODE_SHA384        (15UL)    /*!< HMAC select SHA-384 384-bit              \hideinitializer */
#define HMAC_MODE_SHA512        (14UL)    /*!< HMAC select SHA-512 512-bit              \hideinitializer */

#define SHA_NO_SWAP             0UL     /*!< SHA do not swap input and output data   \hideinitializer */
#define SHA_OUT_SWAP            1UL     /*!< SHA swap output data                    \hideinitializer */
#define SHA_IN_SWAP             2UL     /*!< SHA swap input data                     \hideinitializer */
#define SHA_IN_OUT_SWAP         3UL     /*!< SHA swap both input and output data     \hideinitializer */

#define CRYPTO_DMA_FIRST        0x4UL   /*!< Do first encrypt/decrypt in DMA cascade         \hideinitializer */
#define CRYPTO_DMA_ONE_SHOT     0x5UL   /*!< Do one shot encrypt/decrypt with DMA            \hideinitializer */
#define CRYPTO_DMA_CONTINUE     0x6UL   /*!< Do continuous encrypt/decrypt in DMA cascade    \hideinitializer */
#define CRYPTO_DMA_LAST         0x7UL   /*!< Do last encrypt/decrypt in DMA cascade          \hideinitializer */


/** @} end of group CRYPTO_EXPORTED_CONSTANTS */


/** @addtogroup CRYPTO_EXPORTED_MACROS CRYPTO Exported Macros
  @{
*/
/**
  * @brief This macro enables PRNG interrupt.
  * @param crypto     Specified crypto module
  * @return None
  * \hideinitializer
  */
#define PRNG_ENABLE_INT(crypto)       ((crypto)->INTEN |= CRYPTO_INTEN_PRNGIEN_Msk)

/**
  * @brief This macro disables PRNG interrupt.
  * @param crypto     Specified crypto module
  * @return None
  * \hideinitializer
  */
#define PRNG_DISABLE_INT(crypto)      ((crypto)->INTEN &= ~CRYPTO_INTEN_PRNGIEN_Msk)

/**
  * @brief This macro gets PRNG interrupt flag.
  * @param crypto     Specified crypto module
  * @return PRNG interrupt flag.
  * \hideinitializer
  */
#define PRNG_GET_INT_FLAG(crypto)     ((crypto)->INTSTS & CRYPTO_INTSTS_PRNGIF_Msk)

/**
  * @brief This macro clears PRNG interrupt flag.
  * @param crypto     Specified crypto module
  * @return None
  * \hideinitializer
  */
#define PRNG_CLR_INT_FLAG(crypto)     ((crypto)->INTSTS = CRYPTO_INTSTS_PRNGIF_Msk)

/**
  * @brief This macro enables AES interrupt.
  * @param crypto     Specified crypto module
  * @return None
  * \hideinitializer
  */
#define AES_ENABLE_INT(crypto)        ((crypto)->INTEN |= (CRYPTO_INTEN_AESIEN_Msk|CRYPTO_INTEN_AESEIEN_Msk))

/**
  * @brief This macro disables AES interrupt.
  * @param crypto     Specified crypto module
  * @return None
  * \hideinitializer
  */
#define AES_DISABLE_INT(crypto)       ((crypto)->INTEN &= ~(CRYPTO_INTEN_AESIEN_Msk|CRYPTO_INTEN_AESEIEN_Msk))

/**
  * @brief This macro gets AES interrupt flag.
  * @param crypto     Specified crypto module
  * @return AES interrupt flag.
  * \hideinitializer
  */
#define AES_GET_INT_FLAG(crypto)      ((crypto)->INTSTS & (CRYPTO_INTSTS_AESIF_Msk|CRYPTO_INTSTS_AESEIF_Msk))

/**
  * @brief This macro clears AES interrupt flag.
  * @param crypto     Specified crypto module
  * @return None
  * \hideinitializer
  */
#define AES_CLR_INT_FLAG(crypto)      ((crypto)->INTSTS = (CRYPTO_INTSTS_AESIF_Msk|CRYPTO_INTSTS_AESEIF_Msk))

/**
  * @brief This macro enables AES key protection.
  * @param crypto     Specified crypto module
  * @return None
  * \hideinitializer
  */
#define AES_ENABLE_KEY_PROTECT(crypto)  ((crypto)->AES_CTL |= CRYPTO_AES_CTL_KEYPRT_Msk)

/**
  * @brief This macro disables AES key protection.
  * @param crypto     Specified crypto module
  * @return None
  * \hideinitializer
  */
#define AES_DISABLE_KEY_PROTECT(crypto) ((crypto)->AES_CTL = ((crypto)->AES_CTL & ~CRYPTO_AES_CTL_KEYPRT_Msk) | (0x16UL<<CRYPTO_AES_CTL_KEYUNPRT_Pos))

/**
  * @brief This macro enables SHA interrupt.
  * @param crypto     Specified crypto module
  * @return None
  * \hideinitializer
  */
#define SHA_ENABLE_INT(crypto)        ((crypto)->INTEN |= (CRYPTO_INTEN_HMACIEN_Msk|CRYPTO_INTEN_HMACEIEN_Msk))

/**
  * @brief This macro disables SHA interrupt.
  * @param crypto     Specified crypto module
  * @return None
  * \hideinitializer
  */
#define SHA_DISABLE_INT(crypto)       ((crypto)->INTEN &= ~(CRYPTO_INTEN_HMACIEN_Msk|CRYPTO_INTEN_HMACEIEN_Msk))

/**
  * @brief This macro gets SHA interrupt flag.
  * @param crypto     Specified crypto module
  * @return SHA interrupt flag.
  * \hideinitializer
  */
#define SHA_GET_INT_FLAG(crypto)      ((crypto)->INTSTS & (CRYPTO_INTSTS_HMACIF_Msk|CRYPTO_INTSTS_HMACEIF_Msk))

/**
  * @brief This macro clears SHA interrupt flag.
  * @param crypto     Specified crypto module
  * @return None
  * \hideinitializer
  */
#define SHA_CLR_INT_FLAG(crypto)      ((crypto)->INTSTS = (CRYPTO_INTSTS_HMACIF_Msk|CRYPTO_INTSTS_HMACEIF_Msk))


/** @} end of group CRYPTO_EXPORTED_MACROS */


/** @addtogroup CRYPTO_EXPORTED_FUNCTIONS CRYPTO Exported Functions
  @{
*/
void PRNG_Open(CRYPTO_T *crypto, uint32_t u32KeySize, uint32_t u32SeedReload, uint32_t u32Seed);
void PRNG_Start(CRYPTO_T *crypto);
void PRNG_Read(CRYPTO_T *crypto, uint32_t u32RandKey[]);

void AES_Open(CRYPTO_T *crypto, uint32_t u32Channel, uint32_t u32EncDec, uint32_t u32OpMode, uint32_t u32KeySize, uint32_t u32SwapType);
void AES_Start(CRYPTO_T *crypto, uint32_t u32Channel, uint32_t u32DMAMode);
void AES_SetKey(CRYPTO_T *crypto, uint32_t u32Channel, uint32_t au32Keys[], uint32_t u32KeySize);
void AES_SetInitVect(CRYPTO_T *crypto, uint32_t u32Channel, uint32_t au32IV[]);
void AES_SetDMATransfer(CRYPTO_T *crypto, uint32_t u32Channel, uint32_t u32SrcAddr, uint32_t u32DstAddr, uint32_t u32TransCnt);

void SHA_Open(CRYPTO_T *crypto, uint32_t u32OpMode, uint32_t u32SwapType, uint32_t hmac_key_len);
void SHA_Start(CRYPTO_T *crypto, uint32_t u32DMAMode);
void SHA_SetDMATransfer(CRYPTO_T *crypto, uint32_t u32SrcAddr, uint32_t u32TransCnt);
void SHA_Read(CRYPTO_T *crypto, uint32_t u32Digest[]);


void Hex2Reg(char input[], uint32_t volatile reg[]);
void Reg2Hex(int32_t count, uint32_t volatile reg[], char output[]);
void Hex2RegEx(char input[], uint32_t volatile reg[], int shift);


/** @} end of group CRYPTO_EXPORTED_FUNCTIONS */

/** @} end of group CRYPTO_Driver */

/** @} end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif  /* __CRYPTO_H__ */
