/**************************************************************************//**
 * @file     crc.h
 * @version  V3.00
 * @brief    Cyclic Redundancy Check(CRC) driver header file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (c) 2024 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __CRC_H__
#define __CRC_H__

#ifdef __cplusplus
extern "C"
{
#endif


/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup CRC_Driver CRC Driver
  @{
*/

/** @addtogroup CRC_EXPORTED_CONSTANTS CRC Exported Constants
  @{
*/
/*---------------------------------------------------------------------------------------------------------*/
/*  CRC Polynomial Mode Constant Definitions                                                               */
/*---------------------------------------------------------------------------------------------------------*/
#define CRC_CCITT           (0UL << CRC_CTL_CRCMODE_Pos) /*!<CRC Polynomial Mode - CCITT \hideinitializer */
#define CRC_8               (1UL << CRC_CTL_CRCMODE_Pos) /*!<CRC Polynomial Mode - CRC8 \hideinitializer */
#define CRC_16              (2UL << CRC_CTL_CRCMODE_Pos) /*!<CRC Polynomial Mode - CRC16 \hideinitializer */
#define CRC_32              (3UL << CRC_CTL_CRCMODE_Pos) /*!<CRC Polynomial Mode - CRC32 \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  Checksum, Write data Constant Definitions                                                              */
/*---------------------------------------------------------------------------------------------------------*/
#define CRC_CHECKSUM_COM    (CRC_CTL_CHKSFMT_Msk)       /*!<CRC Checksum Complement \hideinitializer */
#define CRC_CHECKSUM_RVS    (CRC_CTL_CHKSREV_Msk)       /*!<CRC Checksum Reverse \hideinitializer */
#define CRC_WDATA_COM       (CRC_CTL_DATFMT_Msk)        /*!<CRC Write Data Complement \hideinitializer */
#define CRC_WDATA_RVS       (CRC_CTL_DATREV_Msk)        /*!<CRC Write Data Reverse \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/*  CPU Write Data Length Constant Definitions                                                             */
/*---------------------------------------------------------------------------------------------------------*/
#define CRC_CPU_WDATA_8     (0UL << CRC_CTL_DATLEN_Pos) /*!<CRC CPU Write Data length is 8-bit \hideinitializer */
#define CRC_CPU_WDATA_16    (1UL << CRC_CTL_DATLEN_Pos) /*!<CRC CPU Write Data length is 16-bit \hideinitializer */
#define CRC_CPU_WDATA_32    (2UL << CRC_CTL_DATLEN_Pos) /*!<CRC CPU Write Data length is 32-bit \hideinitializer */

/**@}*/ /* end of group CRC_EXPORTED_CONSTANTS */


/** @addtogroup CRC_EXPORTED_FUNCTIONS CRC Exported Functions
  @{
*/

/**
  * @brief      Set CRC Seed Value
  *
  * @param[in]  u32Seed     Seed value
  *
  * @return     None
  *
  * @details    This macro is used to set CRC seed value.
  *
  * @note       User must to perform CRC_CHKSINIT(CRC_CTL[1] CRC Engine Reset) to reload the new seed value
  *             to CRC controller.
  * \hideinitializer
  */
#define CRC_SET_SEED(u32Seed)   do{ CRC->SEED = (u32Seed); CRC->CTL |= CRC_CTL_CHKSINIT_Msk; }while(0)

/**
 * @brief       Get CRC Seed Value
 *
  * @param      None
 *
 * @return      CRC seed value
 *
 * @details     This macro gets the current CRC seed value.
 * \hideinitializer
 */
#define CRC_GET_SEED()          (CRC->SEED)

/**
 * @brief       CRC Write Data
 *
 * @param[in]   u32Data     Write data
 *
 * @return      None
 *
 * @details    User can write data directly to CRC Write Data Register(CRC_DAT) by this macro to perform CRC operation.
 * \hideinitializer
 */
#define CRC_WRITE_DATA(u32Data) (CRC->DAT = (u32Data))

/**
  * @brief      Set CRC Polynomial Value
  *
  * @param[in]  u32Polynomial   Polynomial value
  *
  * @return     None
  *
  * @details    This macro is used to set CRC polynomial value.
  *
  * @note       User must to set CRC polynomial value for specified CRC operarion.
  * \hideinitializer
  */
#define CRC_SET_POLYNOMIAL(u32Polynomial)   (CRC->POLYNOMIAL = (u32Polynomial))

/**
 * @brief       Enable CRC DMA Interrupt
 *
 * @param       None
 *
 * @return      None
 *
 * @details     This macro is used to enable the CRC DMA interrupt.
 * \hideinitializer
 */
#define CRC_ENABLE_DMA_INT()                (CRC->DMACTL |= CRC_DMACTL_INTEN_Msk)

/**
 * @brief       Disable CRC DMA Interrupt
 *
 * @param       None
 *
 * @return      None
 *
 * @details     This macro is used to disable the CRC DMA interrupt.
 * \hideinitializer
 */
#define CRC_DISABLE_DMA_INT()               (CRC->DMACTL &= ~(CRC_DMACTL_INTEN_Msk))

/**
 * @brief       Abort CRC DMA Operation
 *
 * @param       None
 *
 * @return      None
 *
 * @details     This macro is used to abort the CRC DMA operation.
 * \hideinitializer
 */
#define CRC_DMA_ABORT()                     (CRC->DMACTL |= CRC_DMACTL_ABORT_Msk)

/**
 * @brief       Abort CRC DMA Operation
 *
 * @param       None
 *
 * @return      None
 *
 * @details     This macro is used to abort the CRC DMA operation.
 * \hideinitializer
 */
#define CRC_DMA_ABORT()                     (CRC->DMACTL |= CRC_DMACTL_ABORT_Msk)

/**
 * @brief       Pause CRC DMA Operation
 *
 * @param       None
 *
 * @return      None
 *
 * @details     This macro is used to pause the CRC DMA operation.
 * \hideinitializer
 */
#define CRC_DMA_PAUSE()                     (CRC->DMACTL |= CRC_DMACTL_PAUSE_Msk)

/**
 * @brief       Resume CRC DMA Operation
 *
 * @param       None
 *
 * @return      None
 *
 * @details     This macro is used to resume the CRC DMA operation.
 * \hideinitializer
 */
#define CRC_DMA_RESUME()                    (CRC->DMACTL &= ~CRC_DMACTL_PAUSE_Msk)

/**
 * @brief       Check if CRC DMA Pasused
 *
 * @param       None
 *
 * @retval      0   CRC DMA operation in progress
 * @retval      1   CRC DMA operation Paused
 *
 * @details     This macro is used to check if CRC DMA operation is Pasused.
 * \hideinitializer
 */
 #define CRC_IS_DMA_PAUSE(crc)               ((CRC->DMACTL & CRC_DMACTL_PAUSE_Msk)? 1 : 0)

/**
 * @brief       Start CRC DMA Operation
 *
 * @param       None
 *
 * @return      None
 *
 * @details     This macro is used to start the CRC DMA operation.
 * \hideinitializer
 */
#define CRC_DMA_START()                     (CRC->DMACTL |= CRC_DMACTL_START_Msk)

/**
 * @brief       Set CRC DMA Source Address
 *
 * @param       None
 *
 * @return      None
 *
 * @details     This macro is used to set the source address for CRC DMA operation.
 * @note        This source addrese must be word-aligned(4-bytes), and should be aligned to 16 words(64-bytes) for Flash XOM region.
 * \hideinitializer
 */
#define CRC_SET_DMA_SADDR(u32Addr)          (CRC->SADDR = (u32Addr))

/**
 * @brief       Set CRC DMA Size
 *
 * @param       None
 *
 * @return      None
 *
 * @details     This macro is used to set the operation byte count for CRC DMA operation.
 * @note        This operation size must be word-aligned(4-bytes), and should be aligned to 16 words64-bytes) for Flash XOM region.
 * \hideinitializer
 */
#define CRC_SET_DMA_SIZE(u32Cnt)            (CRC->DMACNT = (u32Cnt))

/**
 * @brief       Set CRC DMA Word Count
 *
 * @param       None
 *
 * @return      None
 *
 * @details     This macro is used to set the operation word count for CRC DMA operation.
 * @note        This operation size must be word-aligned(4-bytes), and should be aligned to 16 words64-bytes) for Flash XOM region.
 * \hideinitializer
 */
#define CRC_SET_DMA_WORD_CNT(u32WordCnt)    (CRC->DMACNT = ((u32WordCnt) << CRC_DMACNT_DMACNT_Pos))

/**
 * @brief       Get CRC DMA Operation Status
 *
  * @param      None
 *
 * @return      CRC DMA Statuse
 *
 * @details     This macro gets the current CRC DMA operation status.
 * \hideinitializer
 */
#define CRC_GET_DMA_STATUS()                (CRC->DMASTS)


void CRC_Open(uint32_t u32Mode, uint32_t u32Attribute, uint32_t u32Seed, uint32_t u32DataLen);
uint32_t CRC_GetChecksum(void);

/**@}*/ /* end of group CRC_EXPORTED_FUNCTIONS */

/**@}*/ /* end of group CRC_Driver */

/**@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif /* __CRC_H__ */
