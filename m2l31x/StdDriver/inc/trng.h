/**************************************************************************//**
 * @file     trng.h
 * @version  V3.00
 * @brief    M2L31 series TRNG driver header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/
#ifndef __TRNG_H__
#define __TRNG_H__

#ifdef __cplusplus
extern "C"
{
#endif

/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup TRNG_Driver TRNG Driver
  @{
*/


/** @addtogroup TRNG_EXPORTED_CONSTANTS TRNG Exported Constants
  @{
*/

/*----------------------------------------------------------------------------------------------*/
/*  TRNG_CTL constant definitions.                                                              */
/*----------------------------------------------------------------------------------------------*/

#define TRNG_CTL_MODE_ENTROPY   (0 << TRNG_CTL_MODE_Pos)    /*!< TRNG MODE for ENTROPY \hideinitializer */
#define TRNG_CTL_MODE_NRBG      (1 << TRNG_CTL_MODE_Pos)    /*!< TRNG MODE for NRBG    \hideinitializer */
#define TRNG_CTL_MODE_DRBG      (2 << TRNG_CTL_MODE_Pos)    /*!< TRNG MODE for DRBG    \hideinitializer */

#define TRNG_CTL_KATSEL_INSTANT (0 << TRNG_CTL_KATSEL_Pos)  /*!< TRNG Known Answer Test for Instantiation \hideinitializer */
#define TRNG_CTL_KATSEL_RESEED  (1 << TRNG_CTL_KATSEL_Pos)  /*!< TRNG Known Answer Test for Reseed        \hideinitializer */
#define TRNG_CTL_KATSEL_UPDATE  (2 << TRNG_CTL_KATSEL_Pos)  /*!< TRNG Known Answer Test for Generation    \hideinitializer */

/*@}*/ /* end of group TRNG_EXPORTED_CONSTANTS */

/** @addtogroup TRNG_EXPORTED_FUNCTIONS TRNG Exported Functions
  @{
*/


int32_t TRNG_Open(void);
int32_t TRNG_GenWord(uint32_t *u32RndNum);
int32_t TRNG_GenBignum(uint8_t u8BigNum[], int32_t i32Len);
int32_t TRNG_GenBignumHex(char cBigNumHex[], int32_t i32Len);


/*@}*/ /* end of group TRNG_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group TRNG_Driver */

/*@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif  /* __TRNG_H__ */
