/**************************************************************************//**
 * @file     cache_reg.h
 * @version  V1.00
 * @brief    CACHE register definition header file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2025 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

#ifndef __CACHE_REG_H__
#define __CACHE_REG_H__

#if defined ( __CC_ARM   )
    #pragma anon_unions
#endif

/**
    @addtogroup REGISTER Control Register
    @{
*/

/**
    @addtogroup CACHE Cache Controller (CACHE)
    Memory Mapped Structure for Cache Controller
    @{
*/

typedef struct
{
    /**
     * @var CACHE_T::CTL
     * Offset: 0x00  CACHE Control Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |CACHEEN   |Cache Enable Bit
     * |        |          |0 = cache disabled.
     * |        |          |1 = cache enabled.
     * |[8]     |HITMEN    |Hit Monitor Enable Bit
     * |        |          |0: cache hit monitor stops counting and does not reset.
     * |        |          |1: cache hit monitor enable.
     * |[9]     |MISSMEN   |Miss Monitor Enable Bit
     * |        |          |0: cache miss monitor stops counting and does not reset.
     * |        |          |1: cache miss monitor enable.
     * |[10]    |HITMRST   |HIT monitor reset
     * |        |          |0: no effect.
     * |        |          |1: reset the cache hit monitor.
     * |[11]    |MISSMRST  |Miss monitor reset
     * |        |          |0: no effect.
     * |        |          |1: reset the cache miss monitor.
     * |[16]    |PERRIEN   |CACHE Parity Check Error Interrupt Enable Bit
     * |        |          |0 = CACHE parity check error interrupt Disabled.
     * |        |          |1 = CACHE parity check error interrupt Enabled.
     * @var CACHE_T::STS
     * Offset: 0x04  CACHE Status Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[0]     |BUSY      |Cache Busy Flag (Read Only)
     * |        |          |0 = cache not busy on a invalidate operation.
     * |        |          |1 = cache executing a invalidate operation.
     * |[16]    |PERRIF    |CACHE Parity Check Error Flag
     * |        |          |This bit indicates the CACHE parity error occurred. Write 1 to clear this to 0.
     * |        |          |0 = No CACHE parity error.
     * |        |          |1 = CACHE parity error occur.
     * @var CACHE_T::HIT
     * Offset: 0x08  CACHE Hit Monitor Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |Cachehitmonitor|Cache hit monitor counter.
     * @var CACHE_T::MISS
     * Offset: 0x0C  CACHE Miss Monitor Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     * |[31:0]  |ERRADDR   |CACHE Parity Error Address
     * |        |          |This register shows CACHE parity error in accessing which word address.
     * @var CACHE_T::ERRADDR
     * Offset: 0x10  CACHE Parity Check Error Address Register
     * ---------------------------------------------------------------------------------------------------
     * |Bits    |Field     |Descriptions
     * | :----: | :----:   | :---- |
     */
    __IO uint32_t CTL;                   /*!< [0x0000] CACHE Control Register                                           */
    __IO uint32_t STS;                   /*!< [0x0004] CACHE Status Register                                            */
    __I  uint32_t HIT;                   /*!< [0x0008] CACHE Hit Monitor Register                                       */
    __I  uint32_t MISS;                  /*!< [0x000c] CACHE Miss Monitor Register                                      */
    __IO uint32_t ERRADDR;               /*!< [0x0010] CACHE Parity Check Error Address Register                        */
    __I  uint32_t Reserved[11];
    __IO uint32_t PARITY;                /*!< [0x0040] CACHE Parity Test Control Register (Only for Testing)            */

} CACHE_T;

/**
    @addtogroup CACHE_CONST CACHE Bit Field Definition
    Constant Definitions for CACHE Controller
    @{
*/

#define CACHE_CTL_CACHEEN_Pos            (0)                                               /*!< CACHE_T::CTL: CACHEEN Position         */
#define CACHE_CTL_CACHEEN_Msk            (0x1UL << CACHE_CTL_CACHEEN_Pos)                  /*!< CACHE_T::CTL: CACHEEN Mask             */

#define CACHE_CTL_HITMEN_Pos             (8)                                               /*!< CACHE_T::CTL: HITMEN Position          */
#define CACHE_CTL_HITMEN_Msk             (0x1UL << CACHE_CTL_HITMEN_Pos)                   /*!< CACHE_T::CTL: HITMEN Mask              */

#define CACHE_CTL_MISSMEN_Pos            (9)                                               /*!< CACHE_T::CTL: MISSMEN Position         */
#define CACHE_CTL_MISSMEN_Msk            (0x1UL << CACHE_CTL_MISSMEN_Pos)                  /*!< CACHE_T::CTL: MISSMEN Mask             */

#define CACHE_CTL_HITMRST_Pos            (10)                                              /*!< CACHE_T::CTL: HITMRST Position         */
#define CACHE_CTL_HITMRST_Msk            (0x1UL << CACHE_CTL_HITMRST_Pos)                  /*!< CACHE_T::CTL: HITMRST Mask             */

#define CACHE_CTL_MISSMRST_Pos           (11)                                              /*!< CACHE_T::CTL: MISSMRST Position        */
#define CACHE_CTL_MISSMRST_Msk           (0x1UL << CACHE_CTL_MISSMRST_Pos)                 /*!< CACHE_T::CTL: MISSMRST Mask            */

#define CACHE_CTL_PERRIEN_Pos            (16)                                              /*!< CACHE_T::CTL: PERRIEN Position         */
#define CACHE_CTL_PERRIEN_Msk            (0x1UL << CACHE_CTL_PERRIEN_Pos)                  /*!< CACHE_T::CTL: PERRIEN Mask             */

#define CACHE_CTL_CACHEPEN_Pos           (24)                                              /*!< CACHE_T::CTL: CACHEPEN Position        */
#define CACHE_CTL_CACHEPEN_Msk           (0x1UL << CACHE_CTL_CACHEPEN_Pos)                 /*!< CACHE_T::CTL: CACHEPEN Mask            */

#define CACHE_CTL_PERRRD_Pos             (25)                                              /*!< CACHE_T::CTL: PERRRD Position          */
#define CACHE_CTL_PERRRD_Msk             (0x1UL << CACHE_CTL_PERRRD_Pos)                   /*!< CACHE_T::CTL: PERRRD Mask              */

#define CACHE_STS_BUSY_Pos               (0)                                               /*!< CACHE_T::STS: BUSY Position            */
#define CACHE_STS_BUSY_Msk               (0x1UL << CACHE_STS_BUSY_Pos)                     /*!< CACHE_T::STS: BUSY Mask                */

#define CACHE_STS_PERRIF_Pos             (16)                                              /*!< CACHE_T::STS: PERRIF Position          */
#define CACHE_STS_PERRIF_Msk             (0x1UL << CACHE_STS_PERRIF_Pos)                   /*!< CACHE_T::STS: PERRIF Mask              */

#define CACHE_HIT_Cachehitmonitor_Pos    (0)                                               /*!< CACHE_T::HIT: Cachehitmonitor Position */
#define CACHE_HIT_Cachehitmonitor_Msk    (0xffffffffUL << CACHE_HIT_Cachehitmonitor_Pos)   /*!< CACHE_T::HIT: Cachehitmonitor Mask     */

#define CACHE_MISS_ERRADDR_Pos           (0)                                               /*!< CACHE_T::MISS: ERRADDR Position        */
#define CACHE_MISS_ERRADDR_Msk           (0xffffffffUL << CACHE_MISS_ERRADDR_Pos)          /*!< CACHE_T::MISS: ERRADDR Mask            */

#define CACHE_PARITY_CTTPB_Pos           (16)
#define CACHE_PARITY_CTTPB_Msk           (0x1UL << CACHE_PARITY_CTTPB_Pos)

#define CACHE_PARITY_CDTPB_Pos           (8)
#define CACHE_PARITY_CDTPB_Msk           (0x3UL << CACHE_PARITY_CDTPB_Pos)

#define CACHE_PARITY_CPTEN_Pos           (0)
#define CACHE_PARITY_CPTEN_Msk           (0x1UL << CACHE_PARITY_CPTEN_Pos)

/** @} end of CACHE_CONST group */
/** @} end of CACHE register group */
/** @} end of REGISTER group */

#if defined ( __CC_ARM   )
    #pragma no_anon_unions
#endif

#endif /* __CACHE_REG_H__ */
