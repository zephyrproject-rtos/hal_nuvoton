/**************************************************************************//**
 * @file     trng.c
 * @version  V3.00
 * @brief    M2L31 series TRNG driver source file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/

#include <stdio.h>
#include "NuMicro.h"

/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup TRNG_Driver TRNG Driver
  @{
*/

/** @addtogroup TRNG_EXPORTED_FUNCTIONS TRNG Exported Functions
  @{
*/

/**
  * @brief Initialize TRNG hardware.
  * @return  TRNG hardware enable success or failed.
  * @retval  0   Success
  * @retval  -1  Time-out. TRNG hardware may not be enabled.
  */
int32_t TRNG_Open(void)
{
    uint32_t u32TimeOutCount;

    /* Reset TRNG */
    SYS->IPRST1 |= SYS_IPRST1_TRNGRST_Msk;
    SYS->IPRST1 ^= SYS_IPRST1_TRNGRST_Msk;

    /* Enable TRNG Power */
    TRNG->CTL = TRNG_CTL_LDOEN_Msk;

    /* Waiting for ready */
    u32TimeOutCount = SystemCoreClock;
    while((TRNG->STS & (TRNG_STS_LDORDY_Msk)) == 0)
    {
        if(--u32TimeOutCount == 0) return -1; /* Time-out error */
    }

    /* Eanble TRNG and release reset */
    TRNG->CTL = TRNG_CTL_TRNGEN_Msk | TRNG_CTL_LDOEN_Msk | TRNG_CTL_NRST_Msk;

    /* Waiting for ready */
    u32TimeOutCount = SystemCoreClock;
    while ((TRNG->STS & (TRNG_STS_TRNGRDY_Msk)) == 0)
    {
        if(--u32TimeOutCount == 0) return -1; /* Time-out error */
    }

    TRNG->CTL = TRNG_CTL_TRNGEN_Msk | TRNG_CTL_LDOEN_Msk | TRNG_CTL_NRST_Msk | TRNG_CTL_INSTANT_Msk |
                TRNG_CTL_RESEED_Msk | TRNG_CTL_UPDATE_Msk | TRNG_CTL_START_Msk;

    /* Waiting for DVIF */
    u32TimeOutCount = SystemCoreClock;
    while((TRNG->STS & (TRNG_STS_DVIF_Msk)) == 0)
    {
        if(--u32TimeOutCount == 0) return -1; /* Time-out error */
    }

    return 0;
}

/**
  * @brief   Generate a 32-bits random number word.
  * @param[out]  u32RndNum    The output 32-bits word random number.
  *
  * @return  Success or time-out.
  * @retval  0   Success
  * @retval  -1  Time-out. TRNG hardware may not be enabled.
  */
int32_t TRNG_GenWord(uint32_t *u32RndNum)
{
    uint32_t   i, u32Reg, timeout;

    *u32RndNum = 0;

    TRNG->CTL |= TRNG_CTL_START_Msk;

    for(timeout = SystemCoreClock; timeout > 0; timeout--)
    {
        if(TRNG->STS & TRNG_STS_DVIF_Msk)
            break;
    }

    if(timeout == 0)
        return -1;

    *u32RndNum = TRNG->DATA[0];

    return 0;
}

/**
  * @brief   Generate a big number in binary format.
  * @param[out]  u8BigNum  The output big number.
  * @param[in]   i32Len    Request bit length of the output big number. It must be multiple of 8.
  *
  * @return  Success or time-out.
  * @retval  0   Success
  * @retval  -1  Time-out. TRNG hardware may not be enabled.
  */
int32_t TRNG_GenBignum(uint8_t u8BigNum[], int32_t i32Len)
{
    uint32_t   i, j, u32Reg, timeout;

    for (i = 0; i < i32Len/8; i++)
    {
        /* Get 32 random bits */
        if((i & 0x3) == 0)
        {
            TRNG->CTL |= TRNG_CTL_START_Msk;

            /* Return fail when timeout */
            for(timeout = (CLK_GetHCLKFreq() / 100); timeout > 0; timeout--)
            {
                if(TRNG->CTL & TRNG_STS_DVIF_Msk)
                    break;
            }

            if(timeout == 0)
                return -1;

            u32Reg = TRNG->DATA[0];
            j = 0;
        }

        u8BigNum[i] = (u32Reg >> (j * 8)) & 0xff;
        j++;
    }

    return 0;
}

/**
  * @brief   Generate a big number in hex format.
  * @param[out]  cBigNumHex  The output hex format big number.
  * @param[in]   i32Len      Request bit length of the output big number. It must be multiple of 8.
  *
  * @return  Success or time-out.
  * @retval  0   Success
  * @retval  -1  Time-out. TRNG hardware may not be enabled.
  */
int32_t TRNG_GenBignumHex(char cBigNumHex[], int32_t i32Len)
{
    uint32_t   i, j, u32Reg, timeout, ch,cl;

    for(i = 0; i < i32Len / 8; i++)
    {
        /* Get 32 random bits */
        if((i & 0x3) == 0)
        {
            TRNG->CTL |= TRNG_CTL_START_Msk;

            /* Return fail when timeout */
            for(timeout = (CLK_GetHCLKFreq() / 100); timeout > 0; timeout--)
            {
                if(TRNG->CTL & TRNG_STS_DVIF_Msk)
                    break;
            }

            if(timeout == 0)
                return -1;

            u32Reg = TRNG->DATA[0];
            j = 0;
        }

        ch = ((u32Reg >> (j * 8)) & 0xf0) >> 4;
        cl = (u32Reg >> (j * 8)) & 0x0f;
        j++;

        if(ch >= 0xa)
            cBigNumHex[i * 2] = ch - 0xa + 'a';
        else
            cBigNumHex[i * 2] = ch + '0';

        if(cl >= 0xa)
            cBigNumHex[i * 2 + 1] = cl - 0xa + 'a';
        else
            cBigNumHex[i * 2 + 1] = cl + '0';

    }

    return 0;
}

/*@}*/ /* end of group TRNG_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group TRNG_Driver */

/*@}*/ /* end of group Standard_Driver */

/*** (C) COPYRIGHT 2023 Nuvoton Technology Corp. ***/

