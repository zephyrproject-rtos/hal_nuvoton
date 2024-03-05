/**************************************************************************//**
 * @file     lpgpio.c
 * @version  V1.00
 * @brief    LPGPIO driver source file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/

#include "NuMicro.h"

/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup LPGPIO_Driver LPGPIO Driver
  @{
*/

/** @addtogroup LPGPIO_EXPORTED_FUNCTIONS LPGPIO Exported Functions
  @{
*/

/**
 * @brief       Set LPGPIO operation mode
 *
 * @param[in]   port        LPGPIO port. It could be \ref LPGPIO.
 * @param[in]   u32PinMask  The single or multiple pins of specified LPGPIO port.
 *                          It could be \ref BIT0 ~ \ref BIT7 for LPGPIO pin 0 ~ pin 7.
 * @param[in]   u32Mode     Operation mode.  It could be
 *                          - \ref LPGPIO_MODE_INPUT
 *                          - \ref LPGPIO_MODE_OUTPUT
 *
 * @return      None
 *
 * @details     This function is used to set specified LPGPIO operation mode.
 */
void LPGPIO_SetMode(LPGPIO_T *port, uint32_t u32PinMask, uint32_t u32Mode)
{
    uint32_t i;

    for(i = 0ul; i < LPGPIO_PIN_MAX; i++)
    {
        if((u32PinMask & (BIT0 << i))==(BIT0 << i))
        {
            port->MODE = (port->MODE & ~(BIT0 << i)) | (u32Mode << i);
        }
    }
}

/*@}*/ /* end of group LPGPIO_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group LPGPIO_Driver */

/*@}*/ /* end of group Standard_Driver */

/*** (C) COPYRIGHT 2023 Nuvoton Technology Corp. ***/
