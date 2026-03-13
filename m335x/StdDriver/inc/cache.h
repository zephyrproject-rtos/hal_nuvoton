/**************************************************************************//**
 * @file     cache.h
 * @version  V1.00
 * @brief    CACHE Driver Header File
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2025 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/
#ifndef __CACHE_H__
#define __CACHE_H__

#ifdef __cplusplus
extern "C"
{
#endif


/** @addtogroup Standard_Driver Standard Driver
    @{
*/

/** @addtogroup CACHE_Driver CACHE Driver
    @{
*/

/** @addtogroup CACHE_EXPORTED_CONSTANTS CACHE Exported Constants
    @{
*/
#define CACHE_PARITY_ERROR_NO_ACTION        (0 << CACHE_CTL_PERRRD_Pos)     /*!< No action when cache parity check error.   \hideinitializer */
#define CACHE_PARITY_ERROR_CACHE_MISS       (1 << CACHE_CTL_PERRRD_Pos)     /*!< Cache miss when cache parity check error.  \hideinitializer */
/** @} */ /* end of group CACHE_EXPORTED_CONSTANTS */

/** @addtogroup CACHE_EXPORTED_FUNCTIONS CACHE Exported Functions
    @{
*/

/*---------------------------------------------------------------------------------------------------------*/
/*  Define Macros and functions                                                                            */
/*---------------------------------------------------------------------------------------------------------*/


/**
 * @brief Enable the cache.
 * @details This function sets the CACHEEN bit of the CACHE_CTL register to enable the cache.
 * @param[in] None
 * @return    None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_Enable(void)
{
    __DSB();
    CACHE->CTL |= CACHE_CTL_CACHEEN_Msk;
    __ISB();
}

/**
 * @brief Disable the cache.
 * @details This function clears the CACHEEN bit of the CACHE_CTL register to disable the cache.
 * @param[in] None
 * @return    None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_Disable(void)
{
    __DSB();
    CACHE->CTL &= ~CACHE_CTL_CACHEEN_Msk;
    __ISB();
}

/**
 * @brief Check if the cache is busy.
 * @details This function checks the BUSY bit of the CACHE_STS register to determine if the cache is busy.
 * @param[in] None
 * @return    1: Busy, 0: Not busy
 * \hideinitializer
 */
__STATIC_INLINE uint8_t CACHE_IsBusy(void)
{
    return (CACHE->STS & CACHE_STS_BUSY_Msk) ? 1 : 0;
}

/**
 * @brief Enable the hit monitor.
 * @details This function sets the HITMEN bit of the CACHE_CTL register to enable the hit monitor.
 * @param[in] None
 * @return    None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_EnableHitMonitor(void)
{
    __DSB();
    CACHE->CTL |= CACHE_CTL_HITMEN_Msk;
    __ISB();
}

/**
 * @brief Disable the hit monitor.
 * @details This function clears the HITMEN bit of the CACHE_CTL register to disable the hit monitor.
 * @param[in] None
 * @return    None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_DisableHitMonitor(void)
{
    __DSB();
    CACHE->CTL &= ~CACHE_CTL_HITMEN_Msk;
    __ISB();
}

/**
 * @brief Enable the miss monitor.
 * @details This function sets the MISSMEN bit of the CACHE_CTL register to enable the miss monitor.
 * @param[in] None
 * @return    None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_EnableMissMonitor(void)
{
    __DSB();
    CACHE->CTL |= CACHE_CTL_MISSMEN_Msk;
    __ISB();
}

/**
 * @brief Disable the miss monitor.
 * @details This function clears the MISSMEN bit of the CACHE_CTL register to disable the miss monitor.
 * @param[in] None
 * @return    None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_DisableMissMonitor(void)
{
    __DSB();
    CACHE->CTL &= ~CACHE_CTL_MISSMEN_Msk;
    __ISB();
}

/**
 * @brief Reset the hit monitor counter.
 * @details This function sets the HITMRST bit of the CACHE_CTL register to reset the hit monitor counter.
 * @param[in] None
 * @return    None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_ResetHitMonitor(void)
{
    __DSB();
    CACHE->CTL |= CACHE_CTL_HITMRST_Msk;
    __ISB();
}

/**
 * @brief Reset the miss monitor counter.
 * @details This function sets the MISSMRST bit of the CACHE_CTL register to reset the miss monitor counter.
 * @param[in] None
 * @return    None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_ResetMissMonitor(void)
{
    __DSB();
    CACHE->CTL |= CACHE_CTL_MISSMRST_Msk;
    __ISB();
}

/**
 * @brief Get the current value of the hit monitor counter.
 * @details This function reads the CACHE_HIT register to get the current value of the hit monitor counter.
 * @param[in] None
 * @return    The hit monitor counter value.
 * \hideinitializer
 */
__STATIC_INLINE uint32_t CACHE_GetHitCount(void)
{
    return CACHE->HIT;
}

/**
 * @brief Get the current value of the miss monitor counter.
 * @details This function reads the CACHE_MISS register to get the current value of the miss monitor counter.
 * @param[in] None
 * @return    The miss monitor counter value.
 * \hideinitializer
 */
__STATIC_INLINE uint32_t CACHE_GetMissCount(void)
{
    return CACHE->MISS;
}

/**
 * @brief Flush the cache.
 * @details This function performs a cache flush by disabling and re-enabling the cache. It ensures that the cache is not busy before re-enabling.
 * If the cache is not enabled, the function returns immediately.
 * @param[in] None
 * @return    None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_Flush(void)
{
    // Check if CACHE is enabled
    if ((CACHE->CTL & CACHE_CTL_CACHEEN_Msk) == 0U)
    {
        // Since the CACHE is disabled, there is no need to flush.
        return;
    }

    // Disable CACHE
    CACHE_Disable();

    // Wait until CACHE is not busy
    while (CACHE_IsBusy())
    {
        // Wait for BUSY flag to clear
    }

    // Re-enable CACHE
    CACHE_Enable();
}

/**
 * @brief Enable the parity check.
 * @details This function sets the CACHEPEN bit of the CACHE_CTL register to enable the parity check.
 * @param[in] None
 * @return    None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_EnableParityCheck(void)
{
    __DSB();
    CACHE->CTL |= CACHE_CTL_CACHEPEN_Msk;
    __ISB();
}

/**
 * @brief Disable the parity check.
 * @details This function clears the CACHEPEN bit of the CACHE_CTL register to disable the parity check.
 * @param[in] None
 * @return    None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_DisableParityCheck(void)
{
    __DSB();
    CACHE->CTL &= ~CACHE_CTL_CACHEPEN_Msk;
    __ISB();
}

/**
 * @brief Enable the parity check interrupt.
 * @details This function sets the CACHEPEN bit of the CACHE_CTL register to enable the parity check interrupt.
 * @param[in] None
 * @return    None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_EnableParityCheckInt(void)
{
    __DSB();
    CACHE->CTL |= CACHE_CTL_PERRIEN_Msk;
    __ISB();
}

/**
 * @brief Disable the parity check interrupt.
 * @details This function clears the CACHEPEN bit of the CACHE_CTL register to disable the parity check interrupt.
 * @param[in] None
 * @return    None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_DisableParityCheckInt(void)
{
    __DSB();
    CACHE->CTL &= ~CACHE_CTL_PERRIEN_Msk;
    __ISB();
}

/**
 * @brief Set the parity error action.
 * @details This function reads the CACHE_CTL register to get the parity error action.
 * @param[in] u32ParityErrorAction Parity error action.
 *                                 - \ref CACHE_PARITY_ERROR_NO_ACTION
 *                                 - \ref CACHE_PARITY_ERROR_CACHE_MISS
 * @return    None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_SetParityErrorAction(uint32_t u32ParityErrorAction)
{
    __DSB();
    CACHE->CTL = ((CACHE->CTL & ~CACHE_CTL_PERRRD_Msk) | u32ParityErrorAction);
    __ISB();
}

/**
 * @brief Get the parity error action.
 * @details This function reads the CACHE_CTL register to get the parity error action.
 * @param[in] None
 * @return    CACHE_PARITY_ERROR_NO_ACTION:  No action
 *            CACHE_PARITY_ERROR_CACHE_MISS: CACHE miss
 * \hideinitializer
 */
__STATIC_INLINE uint32_t CACHE_GetParityErrorAction(void)
{
    return (CACHE->CTL & CACHE_CTL_PERRRD_Msk);
}

/**
 * @brief Get the parity error status.
 * @details This function reads the CACHE_STS register to get the parity error status.
 * @param[in] None
 * @return    0: No CACHE parity error, 1: CACHE parity error occur
 * \hideinitializer
 */
__STATIC_INLINE uint32_t CACHE_GetParityErrorStatus(void)
{
    return ((CACHE->STS & CACHE_STS_PERRIF_Msk) >> CACHE_STS_PERRIF_Pos);
}

/**
 * @brief Clear the parity error status.
 * @details This function writes 1 to the PERRIF bit of the CACHE_STS register to clear the parity error status.
 * @param[in] None
 * @return    None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_ClrParityErrorStatus(void)
{
    __DSB();
    CACHE->STS = CACHE_STS_PERRIF_Msk;
    __ISB();
}

/**
 * @brief Get the address of parity error.
 * @details This function reads the CACHE_ERRADDR register to get the address of parity error.
 * @param[in] None
 * @return    The address of parity error.
 * \hideinitializer
 */
__STATIC_INLINE uint32_t CACHE_GetParityErrorAddr(void)
{
    return CACHE->ERRADDR;
}

/** @} end of group CACHE_EXPORTED_FUNCTIONS */
/** @} end of group CACHE_Driver */
/** @} end of group Standard_Driver */

#ifdef __cplusplus
}
#endif


#endif /* __CACHE_H__ */
