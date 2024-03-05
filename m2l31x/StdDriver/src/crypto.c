/**************************************************************************//**
 * @file     crypto.c
 * @version  V3.00
 * @brief  Cryptographic Accelerator driver source file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

#include <stdio.h>
#include <string.h>
#include "NuMicro.h"

#define ENABLE_DEBUG    0

#if ENABLE_DEBUG
#define CRPT_DBGMSG   printf
#else
#define CRPT_DBGMSG(...)   do { } while (0)       /* disable debug */
#endif

#if defined(__ICCARM__)
# pragma diag_suppress=Pm073, Pm143        /* Misra C rule 14.7 */
#endif


/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup CRYPTO_Driver CRYPTO Driver
  @{
*/


/** @addtogroup CRYPTO_EXPORTED_FUNCTIONS CRYPTO Exported Functions
  @{
*/

/* // @cond HIDDEN_SYMBOLS */

/* // @endcond HIDDEN_SYMBOLS */

/**
  * @brief  Open PRNG function
  * @param[in]  crpt         The pointer of CRPT module
  * @param[in]  u32KeySize   it is PRNG key size, including:
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
void PRNG_Open(CRPT_T *crpt, uint32_t u32KeySize, uint32_t u32SeedReload, uint32_t u32Seed)
{
    if(u32SeedReload)
    {
        crpt->PRNG_SEED = u32Seed;
    }

    crpt->PRNG_CTL = (u32KeySize << CRPT_PRNG_CTL_KEYSZ_Pos) |
                     (u32SeedReload << CRPT_PRNG_CTL_SEEDRLD_Pos) | PRNG_CTL_SEEDSRC_SEEDREG;
}

/**
  * @brief  Start to generate one PRNG key.
  * @param[in]  crpt         The pointer of CRPT module
  * @retval  0 Generate PRNG key success.
  * @retval -1 Generate PRNG key time-out.
  */
int32_t PRNG_Start(CRPT_T *crpt)
{
	  int32_t i32TimeOutCnt = SystemCoreClock; 
    crpt->PRNG_CTL |= CRPT_PRNG_CTL_START_Msk;

    /* Waiting for PRNG Busy */
    while(crpt->PRNG_CTL & CRPT_PRNG_CTL_BUSY_Msk)
    {
        if( i32TimeOutCnt-- <= 0)
        {
            return -1;
        }
    }
    return 0;
}

/**
  * @brief  Read the PRNG key.
  * @param[in]   crpt         The pointer of CRPT module
  * @param[out]  u32RandKey  The key buffer to store newly generated PRNG key.
  * @return None
  */
void PRNG_Read(CRPT_T *crpt, uint32_t u32RandKey[])
{
    uint32_t  i, wcnt;
    uint32_t au32WcntTbl[7] = {4, 6, 6, 7, 8, 8, 8};

    wcnt = ((crpt->PRNG_CTL & CRPT_PRNG_CTL_KEYSZ_Msk) >> CRPT_PRNG_CTL_KEYSZ_Pos);
    if( wcnt > 6 ) return;
    else wcnt = au32WcntTbl[wcnt];

    for(i = 0U; i < wcnt; i++)
    {
        u32RandKey[i] = crpt->PRNG_KEY[i];
    }

    crpt->PRNG_CTL &= ~CRPT_PRNG_CTL_SEEDRLD_Msk;
}


/**
  * @brief  Open AES encrypt/decrypt function.
  * @param[in]  crpt         The pointer of CRPT module
  * @param[in]  u32Channel   AES channel. Must be 0~3.
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
void AES_Open(CRPT_T *crpt, uint32_t u32Channel, uint32_t u32EncDec,
              uint32_t u32OpMode, uint32_t u32KeySize, uint32_t u32SwapType)
{
    (void)u32Channel;

    crpt->AES_CTL = (u32EncDec << CRPT_AES_CTL_ENCRPT_Pos) |
                    (u32OpMode << CRPT_AES_CTL_OPMODE_Pos) |
                    (u32KeySize << CRPT_AES_CTL_KEYSZ_Pos) |
                    (u32SwapType << CRPT_AES_CTL_OUTSWAP_Pos);

}

/**
  * @brief  Start AES encrypt/decrypt
  * @param[in]  crpt        The pointer of CRPT module
  * @param[in]  u32Channel  AES channel. Must be 0~3.
  * @param[in]  u32DMAMode  AES DMA control, including:
  *         - \ref CRYPTO_DMA_ONE_SHOT   One shot AES encrypt/decrypt.
  *         - \ref CRYPTO_DMA_CONTINUE   Continuous AES encrypt/decrypt.
  *         - \ref CRYPTO_DMA_LAST       Last AES encrypt/decrypt of a series of AES_Start.
  * @return None
  */
void AES_Start(CRPT_T *crpt, uint32_t u32Channel, uint32_t u32DMAMode)
{
    (void)u32Channel;

    crpt->AES_CTL |= CRPT_AES_CTL_START_Msk | (u32DMAMode << CRPT_AES_CTL_DMALAST_Pos);
}

/**
  * @brief  Set AES keys
  * @param[in]  crpt        The pointer of CRPT module
  * @param[in]  u32Channel  AES channel. Must be 0~3.
  * @param[in]  au32Keys    An word array contains AES keys.
  * @param[in]  u32KeySize is AES key size, including:
  *         - \ref AES_KEY_SIZE_128
  *         - \ref AES_KEY_SIZE_192
  *         - \ref AES_KEY_SIZE_256
  * @return None
  */
void AES_SetKey(CRPT_T *crpt, uint32_t u32Channel, uint32_t au32Keys[], uint32_t u32KeySize)
{
    uint32_t  i, wcnt, key_reg_addr;

    (void) u32Channel;

    key_reg_addr = (uint32_t)&crpt->AES_KEY[0];
    wcnt = 4UL + u32KeySize * 2UL;

    for(i = 0U; i < wcnt; i++)
    {
        outpw(key_reg_addr, au32Keys[i]);
        key_reg_addr += 4UL;
    }
}

/**
  * @brief  Set AES initial vectors
  * @param[in]  crpt        The pointer of CRPT module
  * @param[in]  u32Channel  AES channel. Must be 0~3.
  * @param[in]  au32IV      A four entry word array contains AES initial vectors.
  * @return None
  */
void AES_SetInitVect(CRPT_T *crpt, uint32_t u32Channel, uint32_t au32IV[])
{
    uint32_t  i, key_reg_addr;

    (void) u32Channel;

    key_reg_addr = (uint32_t)&crpt->AES_IV[0];

    for(i = 0U; i < 4U; i++)
    {
        outpw(key_reg_addr, au32IV[i]);
        key_reg_addr += 4UL;
    }
}

/**
  * @brief  Set AES DMA transfer configuration.
  * @param[in]  crpt         The pointer of CRPT module
  * @param[in]  u32Channel   AES channel. Must be 0~3.
  * @param[in]  u32SrcAddr   AES DMA source address
  * @param[in]  u32DstAddr   AES DMA destination address
  * @param[in]  u32TransCnt  AES DMA transfer byte count
  * @return None
  */
void AES_SetDMATransfer(CRPT_T *crpt, uint32_t u32Channel, uint32_t u32SrcAddr,
                        uint32_t u32DstAddr, uint32_t u32TransCnt)
{
    (void) u32Channel;

    crpt->AES_SADDR = u32SrcAddr;
    crpt->AES_DADDR = u32DstAddr;
    crpt->AES_CNT   = u32TransCnt;

}


/**@}*/ /* end of group CRYPTO_EXPORTED_FUNCTIONS */

/**@}*/ /* end of group CRYPTO_Driver */

/**@}*/ /* end of group Standard_Driver */
