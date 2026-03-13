/**************************************************************************//**
 * @file     gpio.c
 * @version  V1.00
 * @brief    GPIO driver source file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/

#include "NuMicro.h"

/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup GPIO_Driver GPIO Driver
  @{
*/

/** @addtogroup GPIO_EXPORTED_FUNCTIONS GPIO Exported Functions
  @{
*/

/**
 * @brief       Set GPIO operation mode
 *
 * @param[in]   port        GPIO port. It could be PA, PB, PC, PD, PE, PF, PG or PH.
 * @param[in]   u32PinMask  The single or multiple pins of specified GPIO port.
 *                          It could be BIT0 ~ BIT15 for PA, PB, PD and PE GPIO port.
 *                          It could be BIT0 ~ BIT14 for PC GPIO port.
 *                          It could be BIT0 ~ BIT11 or BIT14 for PF GPIO port.
 *                          It could be BIT2 ~ BIT4 or BIT9 ~ BIT15 for PG GPIO port.
 *                          It could be BIT4 ~ BIT11 for PH GPIO port.
 * @param[in]   u32Mode     Operation mode.  It could be \n
 *                          GPIO_MODE_INPUT, GPIO_MODE_OUTPUT, GPIO_MODE_OPEN_DRAIN, GPIO_MODE_QUASI.
 *
 * @details     This function is used to set specified GPIO operation mode.
 */
void GPIO_SetMode(GPIO_T *port, uint32_t u32PinMask, uint32_t u32Mode)
{
    uint32_t i;

    for (i = 0UL; i < GPIO_PIN_MAX; i++)
    {
        if ((u32PinMask & (1UL << i)) == (1UL << i))
        {
            port->MODE = (port->MODE & ~(0x3UL << (i << 1))) | (u32Mode << (i << 1));
        }
    }
}

/**
 * @brief       Enable GPIO interrupt
 *
 * @param[in]   port        GPIO port. It could be PA, PB, PC, PD, PE, PF, PG or PH.
 * @param[in]   u32Pin      The single or multiple pins of specified GPIO port.
 *                          It could be 0 ~ 15 for PA, PB, PD and PE GPIO port.
 *                          It could be 0 ~ 14 for PC GPIO port.
 *                          It could be 0 ~ 11 or 14 for PF GPIO port.
 *                          It could be 2 ~ 4 or 9 ~ 15 for PG GPIO port.
 *                          It could be 4 ~ 11 for PH GPIO port.
 * @param[in]   u32IntAttribs   The interrupt attribute of specified GPIO pin. It could be \n
 *                              GPIO_INT_RISING, GPIO_INT_FALLING, GPIO_INT_BOTH_EDGE, GPIO_INT_HIGH, GPIO_INT_LOW.
 *
 * @details     This function is used to enable specified GPIO pin interrupt.
 */
void GPIO_EnableInt(GPIO_T *port, uint32_t u32Pin, uint32_t u32IntAttribs)
{
    port->INTTYPE = (port->INTTYPE & ~(1UL << u32Pin)) | (((u32IntAttribs >> 24) & 0xFFUL) << u32Pin);
    port->INTEN = (port->INTEN & ~(0x00010001UL << u32Pin)) | ((u32IntAttribs & 0xFFFFFFUL) << u32Pin);
}


/**
 * @brief       Disable GPIO interrupt
 *
 * @param[in]   port        GPIO port. It could be PA, PB, PC, PD, PE, PF, PG or PH.
 * @param[in]   u32Pin      The single or multiple pins of specified GPIO port.
 *                          It could be 0 ~ 15 for PA, PB, PD and PE GPIO port.
 *                          It could be 0 ~ 14 for PC GPIO port.
 *                          It could be 0 ~ 11 or 14 for PF GPIO port.
 *                          It could be 2 ~ 4 or 9 ~ 15 for PG GPIO port.
 *                          It could be 4 ~ 11 for PH GPIO port.
 *
 * @details     This function is used to disable specified GPIO pin interrupt.
 */
void GPIO_DisableInt(GPIO_T *port, uint32_t u32Pin)
{
    port->INTTYPE &= ~(1UL << u32Pin);
    port->INTEN &= ~((0x00010001UL) << u32Pin);
}

/**
 * @brief       Set GPIO slew rate control
 *
 * @param[in]   port        GPIO port. It could be PA, PB, PC, PD, PE, PF, PG or PH.
 * @param[in]   u32PinMask  The single or multiple pins of specified GPIO port.
 *                          It could be BIT0 ~ BIT15 for PA, PB, PD and PE GPIO port.
 *                          It could be BIT0 ~ BIT14 for PC GPIO port.
 *                          It could be BIT0 ~ BIT11 or BIT14 for PF GPIO port.
 *                          It could be BIT2 ~ BIT4 or BIT9 ~ BIT15 for PG GPIO port.
 *                          It could be BIT4 ~ BIT11 for PH GPIO port.
 * @param[in]   u32Mode     Slew rate mode. \ref GPIO_SLEWCTL_NORMAL
 *                                          \ref GPIO_SLEWCTL_HIGH
 *
 * @details     This function is used to set specified GPIO operation mode.
 */
void GPIO_SetSlewCtl(GPIO_T *port, uint32_t u32PinMask, uint32_t u32Mode)
{
    uint32_t i;

    for (i = 0UL; i < GPIO_PIN_MAX; i++)
    {
        if (u32PinMask & (1UL << i))
        {
            port->SLEWCTL = (port->SLEWCTL & ~(0x3UL << (i << 1))) | (u32Mode << (i << 1));
        }
    }
}

/**
 * @brief       Set GPIO Pull-up and Pull-down control
 *
 * @param[in]   port        GPIO port. It could be PA, PB, PC, PD, PE, PF, PG or PH.
 * @param[in]   u32PinMask  The single or multiple pins of specified GPIO port.
 *                          It could be BIT0 ~ BIT15 for PA, PB, PD and PE GPIO port.
 *                          It could be BIT0 ~ BIT14 for PC GPIO port.
 *                          It could be BIT0 ~ BIT11 or BIT14 for PF GPIO port.
 *                          It could be BIT2 ~ BIT4 or BIT9 ~ BIT15 for PG GPIO port.
 *                          It could be BIT4 ~ BIT11 for PH GPIO port.
 * @param[in]   u32Mode     The pin mode of specified GPIO pin. It could be
 *                                \ref GPIO_PUSEL_DISABLE
 *                                \ref GPIO_PUSEL_PULL_UP
 *                                \ref GPIO_PUSEL_PULL_DOWN
 *
 * @details     Set the pin mode of specified GPIO pin.
 */
void GPIO_SetPullCtl(GPIO_T *port, uint32_t u32PinMask, uint32_t u32Mode)
{
    uint32_t i;

    for (i = 0UL; i < GPIO_PIN_MAX; i++)
    {
        if (u32PinMask & (1UL << i))
        {
            port->PUSEL = (port->PUSEL & ~(0x3UL << (i << 1))) | (u32Mode << (i << 1));
        }
    }
}

/**
 * @brief       Enable External GPIO interrupt
 *
 * @param[in]   u32EINTn    The specified EINT.
 *                          It could be 0 ~ 7 for EINT0, EINT1, EINT2, EINT3, EINT4, EINT5, EINT6 and EINT7.
 * @param[in]   u32IntAttribs   The interrupt attribute of specified EINT. It could be \n
 *                              GPIO_INT_EDETCTL_DISABLE, GPIO_INT_EDETCTL_RISING, GPIO_INT_EDETCTL_FALLING, \n
 *                              GPIO_INT_EDETCTL_BOTH_EDGE.
 *
 * @details     This function is used to enable specified EINT interrupt.
 * \hideinitializer
 */
void GPIO_EnableEINT(uint32_t u32EINTn, uint32_t u32IntAttribs)
{
    GPIO->EINT[u32EINTn].EDETCTL = (u32IntAttribs & GPIO_INT_EDETCTL_EDETCTL_Msk);
    GPIO->EINT[u32EINTn].EDINTEN |= GPIO_INT_EDINTEN_EDIEN_Msk;
}

/**
 * @brief       Disable External GPIO interrupt
 *
 * @param[in]   u32EINTn    The specified EINT.
 *                          It could be 0 ~ 7 for EINT0, EINT1, EINT2, EINT3, EINT4, EINT5, EINT6 and EINT7.
 *
 * @details     This function is used to disable specified EINT interrupt.
 * \hideinitializer
 */
void GPIO_DisableEINT(uint32_t u32EINTn)
{
    GPIO->EINT[u32EINTn].EDETCTL &= ~(GPIO_INT_EDETCTL_EDETCTL_Msk);
    GPIO->EINT[u32EINTn].EDINTEN &= ~(GPIO_INT_EDINTEN_EDIEN_Msk);
}

/** @} end of group GPIO_EXPORTED_FUNCTIONS */
/** @} end of group GPIO_Driver */
/** @} end of group Standard_Driver */
