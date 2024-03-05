/**************************************************************************//**
 * @file     rng.h
 * @version  V3.00
 * @brief    Random Number Generator Interface Controller (rng) driver header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __RNG_H__
#define __RNG_H__

#ifdef __cplusplus
extern "C"
{
#endif

/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup RNG_Driver RNG Driver
  @{
*/

/** @addtogroup RNG_EXPORTED_CONSTANTS RNG Exported Constants
  @{
*/

/**@}*/ /* end of group RNG_EXPORTED_CONSTANTS */


/** @addtogroup RNG_EXPORTED_FUNCTIONS RNG Exported Functions
  @{
*/

int32_t RNG_Open(void);
int32_t RNG_Random(uint32_t *pu32Buf, int32_t i32WordCnt);
int32_t RNG_EntropyPoll(uint8_t* pu8Out, int32_t i32Len);

/**@}*/ /* end of group RNG_EXPORTED_FUNCTIONS */

/**@}*/ /* end of group RNG_Driver */

/**@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif /* __RNG_H__ */

