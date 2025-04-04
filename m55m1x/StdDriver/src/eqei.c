/**************************************************************************//**
 * @file     eqei.c
 * @version  V1.00
 * @brief    EQEI driver source file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/

#include "NuMicro.h"

/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup EQEI_Driver EQEI Driver
  @{
*/

/** @addtogroup EQEI_EXPORTED_FUNCTIONS EQEI Exported Functions
  @{
*/

/**
  * @brief      Close EQEI function
  * @param[in]  eqei         The pointer of the specified EQEI module.
  * @details    This function reset EQEI configuration and stop EQEI counting.
  */
void EQEI_Close(EQEI_T *eqei)
{
    /* Reset EQEI configuration */
    eqei->CTL = (uint32_t)0;
}

/**
  * @brief      Disable EQEI interrupt
  * @param[in]  eqei         The pointer of the specified EQEI module.
  * @param[in]  u32IntSel   Interrupt type selection.
  *                         - \ref EQEI_CTL_DIRIEN_Msk   : Direction change interrupt
  *                         - \ref EQEI_CTL_OVUNIEN_Msk  : Counter overflow or underflow interrupt
  *                         - \ref EQEI_CTL_CMPIEN_Msk   : Compare-match interrupt
  *                         - \ref EQEI_CTL_IDXIEN_Msk   : Index detected interrupt
  * @details    This function disable EQEI specified interrupt.
  */
void EQEI_DisableInt(EQEI_T *eqei, uint32_t u32IntSel)
{
    /* Disable EQEI specified interrupt */
    EQEI_DISABLE_INT(eqei, u32IntSel);
}

/**
  * @brief      Enable EQEI interrupt
  * @param[in]  eqei         The pointer of the specified EQEI module.
  * @param[in]  u32IntSel   Interrupt type selection.
  *                         - \ref EQEI_CTL_DIRIEN_Msk   : Direction change interrupt
  *                         - \ref EQEI_CTL_OVUNIEN_Msk  : Counter overflow or underflow interrupt
  *                         - \ref EQEI_CTL_CMPIEN_Msk   : Compare-match interrupt
  *                         - \ref EQEI_CTL_IDXIEN_Msk   : Index detected interrupt
  * @details    This function enable EQEI specified interrupt.
  */
void EQEI_EnableInt(EQEI_T *eqei, uint32_t u32IntSel)
{
    /* Enable EQEI specified interrupt */
    EQEI_ENABLE_INT(eqei, u32IntSel);
}

/**
  * @brief      Open EQEI in specified mode and enable input
  * @param[in]  eqei         The pointer of the specified EQEI module.
  * @param[in]  u32Mode     EQEI counting mode.
  *                         - \ref EQEI_CTL_X4_FREE_COUNTING_MODE
  *                         - \ref EQEI_CTL_X2_FREE_COUNTING_MODE
  *                         - \ref EQEI_CTL_X4_COMPARE_COUNTING_MODE
  *                         - \ref EQEI_CTL_X2_COMPARE_COUNTING_MODE
  *                         - \ref EQEI_CTL_PHASE_COUNTING_MODE_TYPE1
  *                         - \ref EQEI_CTL_PHASE_COUNTING_MODE_TYPE2
  *                         - \ref EQEI_CTL_DIRECTIONAL_COUNTING_MODE
  * @param[in]  u32Value    The counter maximum value in compare-counting mode.
  * @details    This function set EQEI in specified mode and enable input.
  */
void EQEI_Open(EQEI_T *eqei, uint32_t u32Mode, uint32_t u32Value)
{
    /* Set EQEI function configuration */
    /* Set EQEI counting mode */
    /* Enable IDX, QEA and QEB input to EQEI controller */
    eqei->CTL = (eqei->CTL & (~EQEI_CTL_MODE_Msk)) | ((u32Mode) | EQEI_CTL_CHAEN_Msk | EQEI_CTL_CHBEN_Msk | EQEI_CTL_IDXEN_Msk);

    /* Set EQEI maximum count value in in compare-counting mode */
    eqei->CNTMAX = u32Value;
}

/**
  * @brief      Start EQEI function
  * @param[in]  eqei     The pointer of the specified EQEI module.
  * @details    This function enable EQEI function and start EQEI counting.
  */
void EQEI_Start(EQEI_T *eqei)
{
    /* Enable EQEI controller function */
    eqei->CTL |= EQEI_CTL_EQEIEN_Msk;
}

/**
  * @brief      Stop EQEI function
  * @param[in]  eqei     The pointer of the specified EQEI module.
  * @details    This function disable EQEI function and stop EQEI counting.
  */
void EQEI_Stop(EQEI_T *eqei)
{
    /* Disable EQEI controller function */
    eqei->CTL &= (~EQEI_CTL_EQEIEN_Msk);
}

/** @} end of group EQEI_EXPORTED_FUNCTIONS */
/** @} end of group EQEI_Driver */
/** @} end of group Standard_Driver */
