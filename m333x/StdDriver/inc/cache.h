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
 * @return None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_Enable(void)
{
    CACHE->CTL |= CACHE_CTL_CACHEEN_Msk;
}

/**
 * @brief Disable the cache.
 * @details This function clears the CACHEEN bit of the CACHE_CTL register to disable the cache.
 * @param[in] None
 * @return None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_Disable(void)
{
    CACHE->CTL &= ~CACHE_CTL_CACHEEN_Msk;
}

/**
 * @brief Check if the cache is busy.
 * @details This function checks the BUSY bit of the CACHE_STS register to determine if the cache is busy.
 * @param[in] None
 * @return 1 if busy, 0 otherwise.
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
 * @return None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_EnableHitMonitor(void)
{
    CACHE->CTL |= CACHE_CTL_HITMEN_Msk;
}

/**
 * @brief Disable the hit monitor.
 * @details This function clears the HITMEN bit of the CACHE_CTL register to disable the hit monitor.
 * @param[in] None
 * @return None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_DisableHitMonitor(void)
{
    CACHE->CTL &= ~CACHE_CTL_HITMEN_Msk;
}

/**
 * @brief Enable the miss monitor.
 * @details This function sets the MISSMEN bit of the CACHE_CTL register to enable the miss monitor.
 * @param[in] None
 * @return None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_EnableMissMonitor(void)
{
    CACHE->CTL |= CACHE_CTL_MISSMEN_Msk;
}

/**
 * @brief Disable the miss monitor.
 * @details This function clears the MISSMEN bit of the CACHE_CTL register to disable the miss monitor.
 * @param[in] None
 * @return None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_DisableMissMonitor(void)
{
    CACHE->CTL &= ~CACHE_CTL_MISSMEN_Msk;
}

/**
 * @brief Reset the hit monitor counter.
 * @details This function sets the HITMRST bit of the CACHE_CTL register to reset the hit monitor counter.
 * @param[in] None
 * @return None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_ResetHitMonitor(void)
{
    CACHE->CTL |= CACHE_CTL_HITMRST_Msk;
}

/**
 * @brief Reset the miss monitor counter.
 * @details This function sets the MISSMRST bit of the CACHE_CTL register to reset the miss monitor counter.
 * @param[in] None
 * @return None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_ResetMissMonitor(void)
{
    CACHE->CTL |= CACHE_CTL_MISSMRST_Msk;
}

/**
 * @brief Get the current value of the hit monitor counter.
 * @details This function reads the CACHE_HIT register to get the current value of the hit monitor counter.
 * @param[in] None
 * @return The hit monitor counter value.
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
 * @return The miss monitor counter value.
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
 * @return None
 * \hideinitializer
 */
__STATIC_INLINE void CACHE_Flush(void)
{
    // Check if CACHE is enabled
    if((CACHE->CTL & CACHE_CTL_CACHEEN_Msk) == 0)
    {
        return; // CACHE is not enabled, flush operation not meaningful
    }

    // Disable CACHE
    CACHE_Disable();

    // Wait until CACHE is not busy
    while(CACHE_IsBusy())
    {
        // Wait for BUSY flag to clear
    }

    // Re-enable CACHE
    CACHE_Enable();
}


/*@}*/ /* end of group CACHE_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group CACHE_Driver */

/*@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif


#endif /* __CACHE_H__ */
