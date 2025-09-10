/******************************************************************************
 * @file     llsi.h
 * @version  V3.00
 * @brief    LED Light Strip Interface(LLSI) driver header file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (c) 2024 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/
#ifndef __LLSI_H__
#define __LLSI_H__

#ifdef __cplusplus
extern "C"
{
#endif


/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup LLSI_Driver LLSI Driver
  @{
*/

/** @addtogroup LLSI_EXPORTED_STRUCTS LLSI Exported Structs
  @{
*/
typedef struct
{
    uint32_t u32BusClock;           /*!< Bus clock */
    uint32_t u32TransferTimeNsec;   /*!< Transfer time in nano second */
    uint32_t u32T0HTimeNsec;        /*!< T0H time in nano second */
    uint32_t u32T1HTimeNsec;        /*!< T1H time in nano second */
    uint32_t u32ResetTimeNsec;      /*!< Reset time in nano second */
} S_LLSI_TIME_INFO_T;

typedef struct
{
    uint32_t u32LLSIMode;           /*!< Transfer mode */
    uint32_t u32OutputFormat;       /*!< Output format */
    S_LLSI_TIME_INFO_T sTimeInfo;   /*!< Timing information */
    uint32_t u32PCNT;               /*!< Frame size */
    uint32_t u32IDOS;               /*!< Idle output state */
} S_LLSI_CONFIG_T;

/*@}*/ /* end of group LLSI_EXPORTED_STRUCTS */

/** @addtogroup LLSI_EXPORTED_CONSTANTS LLSI Exported Constants
  @{
*/

/* LLSI Mode */
#define LLSI_MODE_SW                (0 << LLSI_CTL_LLSIMODE_Pos)    /*!< Software mode \hideinitializer */
#define LLSI_MODE_PDMA              (1 << LLSI_CTL_LLSIMODE_Pos)    /*!< PDMA mode \hideinitializer */

/* LLSI Output Format */
#define LLSI_FORMAT_RGB             (0 << LLSI_CTL_OFDEF_Pos)       /*!< Output RGB format \hideinitializer */
#define LLSI_FORMAT_GRB             (1 << LLSI_CTL_OFDEF_Pos)       /*!< Output GRB format \hideinitializer */

/* LLSI Idle Output State */
#define LLSI_IDLE_LOW               (0 << LLSI_OCTL_IDOS_Pos)       /*!< Idle output low \hideinitializer */
#define LLSI_IDLE_HIGH              (1 << LLSI_OCTL_IDOS_Pos)       /*!< Idle output high \hideinitializer */

/* LLSI Interrupt Mask */
#define LLSI_UNDFL_INT_MASK         (0x001)                         /*!< Underflow interrupt mask \hideinitializer */
#define LLSI_FEND_INT_MASK          (0x002)                         /*!< Frame end interrupt mask \hideinitializer */
#define LLSI_RSTC_INT_MASK          (0x004)                         /*!< Reset command interrupt mask \hideinitializer */
#define LLSI_EMP_INT_MASK           (0x008)                         /*!< FIFO empty interrupt mask \hideinitializer */
#define LLSI_FUL_INT_MASK           (0x010)                         /*!< FIFO full interrupt mask \hideinitializer */
#define LLSI_TXTH_INT_MASK          (0x020)                         /*!< TX threshold interrupt mask \hideinitializer */

/*@}*/ /* end of group LLSI_EXPORTED_CONSTANTS */


/** @addtogroup LLSI_EXPORTED_FUNCTIONS LLSI Exported Functions
  @{
*/

/**
  * @brief      Set LLSI last data transmit.
  * @param[in]  llsi The pointer of the specified LLSI module.
  * @return     None.
  * @details    Set LDT (LLSI_STATUS[8]) to set LLSI last data transmit.
  */
#define LLSI_SET_LAST_DATA(llsi)   ((llsi)->STATUS |= LLSI_STATUS_LDT_Msk)

/**
  * @brief      Get the TX FIFO empty flag.
  * @param[in]  llsi The pointer of the specified LLSI module.
  * @retval     0 TX FIFO is not empty.
  * @retval     1 TX FIFO is empty.
  * @details    Read EMPIF bit of LLSI_STATUS register to get the TX FIFO empty flag.
  */
#define LLSI_GET_TX_FIFO_EMPTY_FLAG(llsi)   (((llsi)->STATUS & LLSI_STATUS_EMPIF_Msk) >> LLSI_STATUS_EMPIF_Pos)

/**
  * @brief      Get the TX FIFO full flag.
  * @param[in]  llsi The pointer of the specified LLSI module.
  * @retval     0 TX FIFO is not full.
  * @retval     1 TX FIFO is full.
  * @details    Read FULIF bit of LLSI_STATUS register to get the TX FIFO full flag.
  */
#define LLSI_GET_TX_FIFO_FULL_FLAG(llsi)   (((llsi)->STATUS & LLSI_STATUS_FULIF_Msk) >> LLSI_STATUS_FULIF_Pos)

/**
  * @brief      Write datum to DATA register.
  * @param[in]  llsi The pointer of the specified LLSI module.
  * @param[in]  u32TxData The datum which user attempt to transfer through LLSI bus.
  * @return     None.
  * @details    Write u32TxData to LLSI_DATA register.
  */
#define LLSI_WRITE_DATA(llsi, u32TxData)   ((llsi)->DATA = (u32TxData))

/**
  * @brief      Set LLSI idle low.
  * @param[in]  llsi The pointer of the specified LLSI module.
  * @return     None.
  * @details    Clear IDOS (LLSI_OCTL[0]) to set LLSI idle low.
  */
#define LLSI_SET_IDLE_LOW(llsi)   ((llsi)->OCTL &= ~LLSI_OCTL_IDOS_Msk)

/**
  * @brief      Set LLSI idle high.
  * @param[in]  llsi The pointer of the specified LLSI module.
  * @return     None.
  * @details    Set IDOS (LLSI_OCTL[0]) to set LLSI idle high.
  */
#define LLSI_SET_IDLE_HIGH(llsi)   ((llsi)->OCTL |= LLSI_OCTL_IDOS_Msk)

/**
  * @brief      Set LLSI RGB format.
  * @param[in]  llsi The pointer of the specified LLSI module.
  * @return     None.
  * @details    Clear OFDEF (LLSI_CTL[12]) to set LLSI RGB format.
  */
#define LLSI_SET_RGB_FORMAT(llsi)   ((llsi)->CTL &= ~LLSI_CTL_OFDEF_Msk)

/**
  * @brief      Set LLSI GRB format.
  * @param[in]  llsi The pointer of the specified LLSI module.
  * @return     None.
  * @details    Set OFDEF (LLSI_CTL[12]) to set LLSI GRB format.
  */
#define LLSI_SET_GRB_FORMAT(llsi)   ((llsi)->CTL |= LLSI_CTL_OFDEF_Msk)

/**
  * @brief      Set LLSI software mode.
  * @param[in]  llsi The pointer of the specified LLSI module.
  * @return     None.
  * @details    Clear LLSIMODE (LLSI_CTL[8]) to set LLSI software mode.
  */
#define LLSI_SET_SW_MODE(llsi)   ((llsi)->CTL &= ~LLSI_CTL_LLSIMODE_Msk)

/**
  * @brief      Set LLSI PDMA mode.
  * @param[in]  llsi The pointer of the specified LLSI module.
  * @return     None.
  * @details    Set LLSIMODE (LLSI_CTL[8]) to set LLSI PDMA mode.
  */
#define LLSI_SET_PDMA_MODE(llsi)   ((llsi)->CTL |= LLSI_CTL_LLSIMODE_Msk)

/**
  * @brief      Enable LLSI reset command function.
  * @param[in]  llsi The pointer of the specified LLSI module.
  * @return     None.
  * @details    Set RSTCEN (LLSI_CTL[1]) to enable LLSI reset command function.
  */
#define LLSI_ENABLE_RESET_COMMAND(llsi)   ((llsi)->CTL |= LLSI_CTL_RSTCEN_Msk)

/**
  * @brief      Disable LLSI reset command function.
  * @param[in]  llsi The pointer of the specified LLSI module.
  * @return     None.
  * @details    Clear RSTCEN (LLSI_CTL[1]) to disable LLSI reset command function.
  */
#define LLSI_DISABLE_RESET_COMMAND(llsi)   ((llsi)->CTL &= ~LLSI_CTL_RSTCEN_Msk)

/**
  * @brief      Enable LLSI controller.
  * @param[in]  llsi The pointer of the specified LLSI module.
  * @return     None.
  * @details    Set LLSIEN (LLSI_CTL[0]) to enable LLSI controller.
  */
#define LLSI_ENABLE(llsi)   ((llsi)->CTL |= LLSI_CTL_LLSIEN_Msk)

/**
  * @brief      Disable LLSI controller.
  * @param[in]  llsi The pointer of the specified LLSI module.
  * @return     None.
  * @details    Clear LLSIEN (LLSI_CTL[0]) to disable LLSI controller.
  */
#define LLSI_DISABLE(llsi)   ((llsi)->CTL &= ~LLSI_CTL_LLSIEN_Msk)



/* Function prototype declaration */
void LLSI_Open(LLSI_T *llsi, uint32_t u32LLSIMode, uint32_t u32OutputFormat, uint32_t u32BusClock, uint32_t u32TransferTimeNsec, uint32_t u32T0HTimeNsec, uint32_t u32T1HTimeNsec, uint32_t u32ResetTimeNsec, uint32_t u32PCNT, uint32_t u32IDOS);
void LLSI_Close(LLSI_T *llsi);
void LLSI_GetTimeInfo(LLSI_T *llsi, S_LLSI_TIME_INFO_T *sPt);
void LLSI_SetFIFO(LLSI_T *llsi, uint32_t u32TxThreshold);
void LLSI_EnableInt(LLSI_T *llsi, uint32_t u32Mask);
void LLSI_DisableInt(LLSI_T *llsi, uint32_t u32Mask);
uint32_t LLSI_GetIntFlag(LLSI_T *llsi, uint32_t u32Mask);
void LLSI_ClearIntFlag(LLSI_T *llsi, uint32_t u32Mask);


/*@}*/ /* end of group LLSI_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group LLSI_Driver */

/*@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif //__LLSI_H__
