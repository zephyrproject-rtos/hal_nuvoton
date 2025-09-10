/**************************************************************************//**
 * @file     cache_reg.h
 * @version  V3.00
 * @brief    CACHE register definition header file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright (c) 2025 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
/******************************************************************************/
/*                Device Specific Peripheral registers structures             */
/******************************************************************************/

/** @addtogroup REGISTER Control Register

  @{

*/


/*---------------------- CACHE Controller -------------------------*/
/**
    @addtogroup CACHE Cache Controller (CACHE)
    Memory Mapped Structure for Cache Controller
@{ */
typedef struct
{


    /**
     * @var CACHE_T::CTL
     * Offset: 0x00  CACHE Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CACHEEN   |Cache Enable Bit
     * |        |          |0 = Cache disabled.
     * |        |          |1 = Cache enabled.
     * |[8]     |HITMEN    |Hit Monitor Enable Bit
     * |        |          |0 = Cache hit monitor stops counting and does not reset.
     * |        |          |1 = Cache hit monitor enable.
     * |[9]     |MISSMEN   |Miss Monitor Enable Bit
     * |        |          |0 = Cache miss monitor stops counting and does not reset.
     * |        |          |1 = Cache miss monitor enable.
     * |[10]    |HITMRST   |HIT Monitor reset
     * |        |          |0 = No effect.
     * |        |          |1 = Reset the cache hit monitor.
     * |[11]    |MISSMRST  |Miss Monitor Reset
     * |        |          |0 = No effect.
     * |        |          |1 = Reset the cache miss monitor.
     * @var CACHE_T::STS
     * Offset: 0x04  CACHE Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |BUSY      |Cache Busy Flag
     * |        |          |0 = Cache not busy on a invalidate operation.
     * |        |          |1 = Cache executing a invalidate operation.
     * @var CACHE_T::HIT
     * Offset: 0x08  CACHE Hit Monitor Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |HITCNT    |Cache Hit Monitor Counter.
     * @var CACHE_T::MISS
     * Offset: 0x0C  CACHE Miss Monitor Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[15:0]  |MISSCNT   |Cache Miss Monitor Counter.
     */
    __IO uint32_t CTL;                   /*!< [0x0000] CACHE Control Register                                           */
    __I  uint32_t STS;                   /*!< [0x0004] CACHE Status Register                                            */
    __I  uint32_t HIT;                   /*!< [0x0008] CACHE Hit Monitor Register                                       */
    __I  uint32_t MISS;                  /*!< [0x000c] CACHE Miss Monitor Register                                      */

} CACHE_T;

/**
    @addtogroup CACHE_CONST CACHE Bit Field Definition
    Constant Definitions for CACHE Controller
@{ */

#define CACHE_CTL_CACHEEN_Pos            (0)                                               /*!< CACHE_T::CTL: CACHEEN Position         */
#define CACHE_CTL_CACHEEN_Msk            (0x1ul << CACHE_CTL_CACHEEN_Pos)                  /*!< CACHE_T::CTL: CACHEEN Mask             */

#define CACHE_CTL_HITMEN_Pos             (8)                                               /*!< CACHE_T::CTL: HITMEN Position          */
#define CACHE_CTL_HITMEN_Msk             (0x1ul << CACHE_CTL_HITMEN_Pos)                   /*!< CACHE_T::CTL: HITMEN Mask              */

#define CACHE_CTL_MISSMEN_Pos            (9)                                               /*!< CACHE_T::CTL: MISSMEN Position         */
#define CACHE_CTL_MISSMEN_Msk            (0x1ul << CACHE_CTL_MISSMEN_Pos)                  /*!< CACHE_T::CTL: MISSMEN Mask             */

#define CACHE_CTL_HITMRST_Pos            (10)                                              /*!< CACHE_T::CTL: HITMRST Position         */
#define CACHE_CTL_HITMRST_Msk            (0x1ul << CACHE_CTL_HITMRST_Pos)                  /*!< CACHE_T::CTL: HITMRST Mask             */

#define CACHE_CTL_MISSMRST_Pos           (11)                                              /*!< CACHE_T::CTL: MISSMRST Position        */
#define CACHE_CTL_MISSMRST_Msk           (0x1ul << CACHE_CTL_MISSMRST_Pos)                 /*!< CACHE_T::CTL: MISSMRST Mask            */

#define CACHE_STS_BUSY_Pos               (0)                                               /*!< CACHE_T::STS: BUSY Position            */
#define CACHE_STS_BUSY_Msk               (0x1ul << CACHE_STS_BUSY_Pos)                     /*!< CACHE_T::STS: BUSY Mask                */

#define CACHE_HIT_HITCNT_Pos             (0)                                               /*!< CACHE_T::HIT: HITCNT Position          */
#define CACHE_HIT_HITCNT_Msk             (0xfffffffful << CACHE_HIT_HITCNT_Pos)            /*!< CACHE_T::HIT: HITCNT Mask              */

#define CACHE_MISS_MISSCNT_Pos           (0)                                               /*!< CACHE_T::MISS: MISSCNT Position        */
#define CACHE_MISS_MISSCNT_Msk           (0xfffful << CACHE_MISS_MISSCNT_Pos)              /*!< CACHE_T::MISS: MISSCNT Mask            */

/**@}*/ /* CACHE_CONST */
/**@}*/ /* end of CACHE register group */


/**@}*/ /* end of REGISTER group */
