/**************************************************************************//**
 * @file     crypto.c
 * @version  V1.00
 * @brief    CRYPTO driver source file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/
#include <stdio.h>
#include <string.h>
#include "NuMicro.h"

/** @cond HIDDEN_SYMBOLS */
#if ENABLE_DEBUG
    #define CRYPTO_DBGMSG   printf
#else
    #define CRYPTO_DBGMSG(...)   do { } while (0)       /* disable debug */
#endif
/** @endcond HIDDEN_SYMBOLS */


/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup CRYPTO_Driver CRYPTO Driver
  @{
*/

/** @cond HIDDEN_SYMBOLS */
static uint32_t g_AES_CTL[1];
/** @endcond HIDDEN_SYMBOLS */



/** @addtogroup CRYPTO_EXPORTED_FUNCTIONS CRYPTO Exported Functions
  @{
*/
/**
  * @brief  Open PRNG function
  * @param[in]  crypto   Reference to Crypto module.
  * @param[in]  u32KeySize is PRNG key size, including:
  *         - \ref PRNG_KEY_SIZE_128
  *         - \ref PRNG_KEY_SIZE_163
  *         - \ref PRNG_KEY_SIZE_192
  *         - \ref PRNG_KEY_SIZE_224
  *         - \ref PRNG_KEY_SIZE_233
  *         - \ref PRNG_KEY_SIZE_255
  *         - \ref PRNG_KEY_SIZE_256
  * @param[in]  u32SeedReload is PRNG seed reload or not, including:
  *         - \ref PRNG_SEED_CONT
  *         - \ref PRNG_SEED_RELOAD
  * @param[in]  u32Seed  The new seed. Only valid when u32SeedReload is PRNG_SEED_RELOAD.
  * @return None
  */
void PRNG_Open(CRYPTO_T *crypto, uint32_t u32KeySize, uint32_t u32SeedReload, uint32_t u32Seed)
{
    if (u32SeedReload)
    {
        crypto->PRNG_SEED = u32Seed;
    }

    crypto->PRNG_CTL = (u32KeySize << CRYPTO_PRNG_CTL_KEYSZ_Pos) |
                       (u32SeedReload << CRYPTO_PRNG_CTL_SEEDRLD_Pos);
}

/**
  * @brief  Start to generate one PRNG key.
  * @param[in]  crypto   Reference to Crypto module.
  * @return None
  */
void PRNG_Start(CRYPTO_T *crypto)
{
    crypto->PRNG_CTL |= CRYPTO_PRNG_CTL_START_Msk;
}

/**
  * @brief  Read the PRNG key.
  * @param[in]   crypto        Reference to Crypto module.
  * @param[out]  u32RandKey  The key buffer to store newly generated PRNG key.
  * @return None
  */
void PRNG_Read(CRYPTO_T *crypto, uint32_t u32RandKey[])
{
    uint32_t  i, wcnt;
    uint32_t au32WcntTbl[7] = {4, 6, 6, 7, 8, 8, 8};

    wcnt = (((crypto->PRNG_CTL & CRYPTO_PRNG_CTL_KEYSZ_Msk) >> CRYPTO_PRNG_CTL_KEYSZ_Pos));

    if (wcnt > 6) return;
    else wcnt = au32WcntTbl[wcnt];

    for (i = 0U; i < wcnt; i++)
    {
        u32RandKey[i] = crypto->PRNG_KEY[i];
    }

    crypto->PRNG_CTL &= ~CRYPTO_PRNG_CTL_SEEDRLD_Msk;
}

/**
  * @brief  Open AES encrypt/decrypt function.
  * @param[in]  crypto         Reference to Crypto module.
  * @param[in]  u32Channel   AES channel. Must be 0.
  * @param[in]  u32EncDec    1: AES encode;  0: AES decode
  * @param[in]  u32OpMode    AES operation mode, including:
  *         - \ref AES_MODE_ECB
  *         - \ref AES_MODE_CBC
  *         - \ref AES_MODE_CFB
  *         - \ref AES_MODE_OFB
  *         - \ref AES_MODE_CTR
  *         - \ref AES_MODE_CBC_CS1
  *         - \ref AES_MODE_CBC_CS2
  *         - \ref AES_MODE_CBC_CS3
  *         - \ref AES_MODE_GCM
  *         - \ref AES_MODE_CCM
  * @param[in]  u32KeySize is AES key size, including:
  *         - \ref AES_KEY_SIZE_128
  *         - \ref AES_KEY_SIZE_192
  *         - \ref AES_KEY_SIZE_256
  * @param[in]  u32SwapType is AES input/output data swap control, including:
  *         - \ref AES_NO_SWAP
  *         - \ref AES_OUT_SWAP
  *         - \ref AES_IN_SWAP
  *         - \ref AES_IN_OUT_SWAP
  * @return None
  */
void AES_Open(CRYPTO_T *crypto, uint32_t u32Channel, uint32_t u32EncDec,
              uint32_t u32OpMode, uint32_t u32KeySize, uint32_t u32SwapType)
{
    crypto->AES_CTL =  // (u32Channel << CRYPTO_AES_CTL_CHANNEL_Pos) |
        (u32EncDec << CRYPTO_AES_CTL_ENCRYPTO_Pos) |
        (u32OpMode << CRYPTO_AES_CTL_OPMODE_Pos) |
        (u32KeySize << CRYPTO_AES_CTL_KEYSZ_Pos) |
        (u32SwapType << CRYPTO_AES_CTL_OUTSWAP_Pos);
    g_AES_CTL[u32Channel] = crypto->AES_CTL;
}

/**
  * @brief  Start AES encrypt/decrypt
  * @param[in]  crypto        Reference to Crypto module.
  * @param[in]  u32Channel  AES channel. Must be 0.
  * @param[in]  u32DMAMode  AES DMA control, including:
  *         - \ref CRYPTO_DMA_ONE_SHOT   One shot AES encrypt/decrypt.
  *         - \ref CRYPTO_DMA_CONTINUE   Continuous AES encrypt/decrypt.
  *         - \ref CRYPTO_DMA_LAST       Last AES encrypt/decrypt of a series of AES_Start.
  * @return None
  */
void AES_Start(CRYPTO_T *crypto, uint32_t u32Channel, uint32_t u32DMAMode)
{
    crypto->AES_CTL = g_AES_CTL[u32Channel];
    crypto->AES_CTL |= CRYPTO_AES_CTL_START_Msk | (u32DMAMode << CRYPTO_AES_CTL_DMALAST_Pos);
}

/**
  * @brief  Set AES keys
  * @param[in]  crypto      Reference to Crypto module.
  * @param[in]  u32Channel  AES channel. Must be 0.
  * @param[in]  au32Keys    An word array contains AES keys.
  * @param[in]  u32KeySize is AES key size, including:
  *         - \ref AES_KEY_SIZE_128
  *         - \ref AES_KEY_SIZE_192
  *         - \ref AES_KEY_SIZE_256
  * @return None
  */
void AES_SetKey(CRYPTO_T *crypto, uint32_t u32Channel, uint32_t au32Keys[], uint32_t u32KeySize)
{
    uint32_t  i, wcnt;
    void    *key_reg_addr;
    uint32_t *u32p_key_reg;

    key_reg_addr = (void *)((uint32_t)&crypto->AES_KEY[0] + (u32Channel * 0x3CUL));
    wcnt = 4UL + u32KeySize * 2UL;
    u32p_key_reg = (uint32_t *)key_reg_addr;

    for (i = 0U; i < wcnt; i++)
    {
        outpw(u32p_key_reg, au32Keys[i]);
        u32p_key_reg++;
    }
}



/**
  * @brief  Set AES initial vectors
  * @param[in]  crypto        Reference to Crypto module.
  * @param[in]  u32Channel    AES channel. Must be 0.
  * @param[in]  au32IV        A four entry word array contains AES initial vectors.
  * @return None
  */
void AES_SetInitVect(CRYPTO_T *crypto, uint32_t u32Channel, uint32_t au32IV[])
{
    uint32_t  i;
    void   *iv_reg_addr;
    uint32_t *u32p_iv_reg;
    iv_reg_addr = (void *)((uint32_t)&crypto->AES_IV[0] + (u32Channel * 0x3CUL));
    u32p_iv_reg = (uint32_t *)iv_reg_addr;

    for (i = 0U; i < 4U; i++)
    {
        outpw(u32p_iv_reg, au32IV[i]);
        u32p_iv_reg++;
    }
}

/**
  * @brief  Set AES DMA transfer configuration.
  * @param[in]  crypto       Reference to Crypto module.
  * @param[in]  u32Channel   AES channel. Must be 0.
  * @param[in]  u32SrcAddr   AES DMA source address
  * @param[in]  u32DstAddr   AES DMA destination address
  * @param[in]  u32TransCnt  AES DMA transfer byte count
  * @return None
  */
void AES_SetDMATransfer(CRYPTO_T *crypto, uint32_t u32Channel, uint32_t u32SrcAddr,
                        uint32_t u32DstAddr, uint32_t u32TransCnt)
{
    void *reg_addr;

    reg_addr = (void *)((uint32_t)&crypto->AES_SADDR + (u32Channel * 0x3CUL));
    outpw(reg_addr, u32SrcAddr);

    reg_addr = (void *)((uint32_t)&crypto->AES_DADDR + (u32Channel * 0x3CUL));
    outpw(reg_addr, u32DstAddr);

    reg_addr = (void *)((uint32_t)&crypto->AES_CNT + (u32Channel * 0x3CUL));
    outpw(reg_addr, u32TransCnt);
}


/**
  * @brief  Open SHA encrypt function.
  * @param[in]  crypto      Reference to Crypto module.
  * @param[in]  u32OpMode   SHA operation mode, including:
  *         - \ref SHA_MODE_SHA1
  *         - \ref SHA_MODE_SHA224
  *         - \ref SHA_MODE_SHA256
  *         - \ref SHA_MODE_SHA384
  *         - \ref SHA_MODE_SHA512
  * @param[in]  u32SwapType is SHA input/output data swap control, including:
  *         - \ref SHA_NO_SWAP
  *         - \ref SHA_OUT_SWAP
  *         - \ref SHA_IN_SWAP
  *         - \ref SHA_IN_OUT_SWAP
  * @param[in]  hmac_key_len   HMAC key byte count
  * @return None
  */
void SHA_Open(CRYPTO_T *crypto, uint32_t u32OpMode, uint32_t u32SwapType, uint32_t hmac_key_len)
{
    crypto->HMAC_CTL = (u32OpMode << CRYPTO_HMAC_CTL_OPMODE_Pos) |
                       (u32SwapType << CRYPTO_HMAC_CTL_OUTSWAP_Pos);

    if (hmac_key_len != 0UL)
    {
        crypto->HMAC_KEYCNT = hmac_key_len;
        crypto->HMAC_CTL |= CRYPTO_HMAC_CTL_HMACEN_Msk;
    }
}

/**
  * @brief  Start SHA encrypt
  * @param[in]  crypto        Reference to Crypto module.
  * @param[in]  u32DMAMode    TDES DMA control, including:
  *         - \ref CRYPTO_DMA_ONE_SHOT   One shot SHA encrypt.
  *         - \ref CRYPTO_DMA_CONTINUE   Continuous SHA encrypt.
  *         - \ref CRYPTO_DMA_LAST       Last SHA encrypt of a series of SHA_Start.
  * @return None
  */
void SHA_Start(CRYPTO_T *crypto, uint32_t u32DMAMode)
{
    crypto->HMAC_CTL &= ~(0x7UL << CRYPTO_HMAC_CTL_DMALAST_Pos);
    crypto->HMAC_CTL |= CRYPTO_HMAC_CTL_START_Msk | (u32DMAMode << CRYPTO_HMAC_CTL_DMALAST_Pos);
}

/**
  * @brief  Set SHA DMA transfer
  * @param[in]  crypto       Reference to Crypto module.
  * @param[in]  u32SrcAddr   SHA DMA source address
  * @param[in]  u32TransCnt  SHA DMA transfer byte count
  * @return None
  */
void SHA_SetDMATransfer(CRYPTO_T *crypto, uint32_t u32SrcAddr, uint32_t u32TransCnt)
{
    crypto->HMAC_SADDR = u32SrcAddr;
    crypto->HMAC_DMACNT = u32TransCnt;
}

/**
  * @brief  Read the SHA digest.
  * @param[in]  crypto      Reference to Crypto module.
  * @param[out]  u32Digest  The SHA encrypt output digest.
  * @return None
  */
void SHA_Read(CRYPTO_T *crypto, uint32_t u32Digest[])
{
    uint32_t  i, wcnt;
    uint32_t  reg_addr;

    i = (crypto->HMAC_CTL & CRYPTO_HMAC_CTL_OPMODE_Msk) >> CRYPTO_HMAC_CTL_OPMODE_Pos;

    if (i == SHA_MODE_SHA1)
    {
        wcnt = 5UL;
    }
    else if (i == SHA_MODE_SHA224)
    {
        wcnt = 7UL;
    }
    else if (i == SHA_MODE_SHA256)
    {
        wcnt = 8UL;
    }
    else if (i == SHA_MODE_SHA384)
    {
        wcnt = 12UL;
    }
    else
    {
        /* SHA_MODE_SHA512 */
        wcnt = 16UL;
    }

    reg_addr = (uint32_t) & (crypto->HMAC_DGST[0]);

    for (i = 0UL; i < wcnt; i++)
    {
        u32Digest[i] = inpw(reg_addr);
        reg_addr += 4UL;
    }
}

/** @} end of group CRYPTO_EXPORTED_FUNCTIONS */
/** @} end of group CRYPTO_Driver */
/** @} end of group Standard_Driver */
