/**************************************************************************//**
 * @file     rng.c
 * @version  V3.00
 * @brief    Show how to get true random number.
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

#include <stdio.h>
#include "NuMicro.h"

/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup RNG_Driver RNG Driver
  @{
*/

/** @addtogroup RNG_EXPORTED_FUNCTIONS RNG Exported Functions
  @{
*/

/**
 *  @brief      Open random number generator
 *
 *  @return      0  Successful
 *              -1  Failed
 *
 *  @details    The function is used to disable rng interrupt.
 */
int32_t RNG_Open(void)
{
    int32_t i;
    int32_t timeout = 0x1000000;

    /* TRNG LDO Enable */
    TRNG->CTL |= TRNG_CTL_LDOEN_Msk;

    /* Waiting for ready */
    i = 0;
    while((TRNG->STS & (TRNG_STS_LDORDY_Msk)) != (TRNG_STS_LDORDY_Msk))
    {
        if(i++ > timeout)
        {
            /* LDO ready timeout */
            return -1;
        }
    }

    /* TRNG Enable */
    TRNG->CTL |= TRNG_CTL_NRST_Msk | TRNG_CTL_TRNGEN_Msk;

    /* Waiting for ready */
    i = 0;
    while((TRNG->STS & (TRNG_STS_TRNGRDY_Msk)) != (TRNG_STS_TRNGRDY_Msk))
    {
        if(i++ > timeout)
        {
            /* TRNG ready timeout */
            return -1;
        }
    }

    return 0;
}


/**
 *  @brief      Get random words
 *
 *  @param[in]  pu32Buf Buffer pointer to store the random number
 *
 *  @param[in]  i32WordCnt  Buffer size in word count. i32WordCnt must <= 8
 *
 *  @return     Word count of random number in buffer
 *
 *  @details    The function is used to generate random numbers
 */
int32_t RNG_Random(uint32_t *pu32Buf, int32_t i32WordCnt)
{
    int32_t i;
    int32_t timeout = 0x10000;

    i = 0;
    do
    {
        /* Start DRBG */
        TRNG->CTL |= TRNG_CTL_MODE_DRBG | TRNG_CTL_START_Msk;

        /* Waiting for Busy */
        while((TRNG->STS & TRNG_STS_DVIF_Msk) == 0)
        {
            if(timeout-- < 0)
                return 0;
        }

        pu32Buf[i++] = TRNG->DATA[0];
        if(--i32WordCnt <= 0) break;
        pu32Buf[i++] = TRNG->DATA[1];
        if(--i32WordCnt <= 0) break;
        pu32Buf[i++] = TRNG->DATA[2];
        if(--i32WordCnt <= 0) break;
        pu32Buf[i++] = TRNG->DATA[3];
        if(--i32WordCnt <= 0) break;

    }
    while(i32WordCnt);

    return i;
}

/**
 *  @brief      To generate entropy from hardware entropy source (TRNG)
 *
 *  @param[in]  pu8Out     Output buffer for the entropy
 *  @param[in]  i32Len     Entropy length in bytes
 *  @return     -1       Failed
 *               Others  The bytes in pu8Out buffer
 *
 *  @details    The function is used to generate entropy from TRNG.
 */
int32_t RNG_EntropyPoll(uint8_t* pu8Out, int32_t i32Len)
{
    int32_t timeout;
    int32_t i,cnt, len;
    uint32_t u32Entropy;

    if((TRNG->STS & (TRNG_STS_LDORDY_Msk | TRNG_STS_TRNGRDY_Msk)) != (TRNG_STS_LDORDY_Msk | TRNG_STS_TRNGRDY_Msk))
    {
        /* TRNG is not in active */
        printf("trng is not active\n");
        return -1;
    }

    len = i32Len;
    cnt = (len + 3) / 4;
    for(i = 0; i < cnt; i++)
    {
        /* Trigger entropy generate */
        TRNG->CTL |= TRNG_CTL_START_Msk;

        timeout = SystemCoreClock;
        while((TRNG->STS & TRNG_STS_DVIF_Msk) == 0)
        {
            if(timeout-- <= 0)
            {
                /* Timeout error */
                printf("timeout\n");
                return -1;
            }
        }
        /* Get one byte entroy */
        u32Entropy = TRNG->DATA[0];
        *pu8Out++ = u32Entropy & 0xff;
        if(len-- <= 0) break;
        *pu8Out++ = (u32Entropy >>  8) & 0xff;
        if(len-- <= 0) break;
        *pu8Out++ = (u32Entropy >> 16) & 0xff;
        if(len-- <= 0) break;
        *pu8Out++ = (u32Entropy >> 24) & 0xff;
        if(len-- <= 0) break;
    }

    return i32Len;
}

/**@}*/ /* end of group RNG_EXPORTED_FUNCTIONS */

/**@}*/ /* end of group RNG_Driver */

/**@}*/ /* end of group Standard_Driver */

