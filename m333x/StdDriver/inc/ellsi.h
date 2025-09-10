/******************************************************************************
 * @file     ellsi.h
 * @version  V3.00
 * @brief    Enhanced LED Light Strip Interface(ELLSI) driver header file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (c) 2024 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/
#ifndef __ELLSI_H__
#define __ELLSI_H__

#ifdef __cplusplus
extern "C"
{
#endif


/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup ELLSI_Driver ELLSI Driver
  @{
*/

/** @addtogroup ELLSI_EXPORTED_STRUCTS ELLSI Exported Structs
  @{
*/
typedef struct
{
    uint32_t u32BusClock;           /*!< Bus clock */
    uint32_t u32TransferTimeNsec;   /*!< Transfer time in nano second */
    uint32_t u32T0HTimeNsec;        /*!< T0H time in nano second */
    uint32_t u32T1HTimeNsec;        /*!< T1H time in nano second */
    uint32_t u32ResetTimeNsec;      /*!< Reset time in nano second */
    uint32_t u32EnterHTimeNsec;     /*!< Enter command high time in nano second */
    uint32_t u32EnterLTimeNsec;     /*!< Enter command low time in nano second */
    uint32_t u32GetHTimeNsec;       /*!< Get high pulse time in nano second */
    uint32_t u32GetHTolTimeNsec;    /*!< Get high pulse tolerance time in nano second */
    uint32_t u32CmdTimeoutTimeNsec; /*!< Command timeout time in nano second */
    uint32_t u32FBH0TimeNsec;       /*!< Feedback command high 0 time in nano second */
    uint32_t u32FBL0TimeNsec;       /*!< Feedback command low 0 time in nano second */
    uint32_t u32FBH1TimeNsec;       /*!< Feedback command high 1 time in nano second */
    uint32_t u32FBL1TimeNsec;       /*!< Feedback command low 1 time in nano second */
    uint32_t u32FBCNT0TimeNsec;     /*!< Feedback count 0 time in nano second */
    uint32_t u32FBCNT0TolTimeNsec;  /*!< Feedback count 0 tolerance time in nano second */
    uint32_t u32FBCNT1TimeNsec;     /*!< Feedback count 1 time in nano second */
    uint32_t u32FBCNT1TolTimeNsec;  /*!< Feedback count 1 tolerance time in nano second */
    uint32_t u32FBID0TimeNsec;      /*!< Feedback ID 0 time in nano second */
    uint32_t u32FBID0TolTimeNsec;   /*!< Feedback ID 0 tolerance time in nano second */
    uint32_t u32FBID1TimeNsec;      /*!< Feedback ID 1 time in nano second */
    uint32_t u32FBID1TolTimeNsec;   /*!< Feedback ID 1 tolerance time in nano second */
    uint32_t u32TH20TimeNsec;       /*!< TH20 command high time in nano second */
    uint32_t u32WKPULSETimeNsec;    /*!< Wakeup pulse time in nano second */
    uint32_t u32WKWPERTimeNsec;     /*!< Wakeup wait time in nano second */
} S_ELLSI_TIME_INFO_T;

typedef struct
{
    uint32_t u32ELLSIMode;          /*!< Transfer mode */
    uint32_t u32OutputFormat;       /*!< Output format */
    S_ELLSI_TIME_INFO_T sTimeInfo;  /*!< Timing information */
    uint32_t u32PCNT;               /*!< Frame size */
    uint32_t u32IDOS;               /*!< Idle output state */
} S_ELLSI_CONFIG_T;

typedef struct
{
    uint8_t BledDimming : 5;        /*!< BLED Dimming. Default: 0x1F */
    uint8_t reserved0 : 1;          /*!< Reserved */
    uint8_t SS0 : 1;                /*!< SS0: Set if PWM counter Reset or not. Default: 0 */
    uint8_t SS1 : 1;                /*!< SS1: Low bit of Imax. Default: 0 */
    uint8_t RledDimming : 5;        /*!< RLED Dimming. Default: 0x1F */
    uint8_t SEL_CUR : 1;            /*!< SEL_CUR: Set the response of LED bulb in Feedback Mode */
    uint8_t SS2 : 1;                /*!< SS2: High bit of Imax. Default: 0 */
    uint8_t SS3 : 1;                /*!< SS3: Set Update LED Setting time. Default: 0 */
    uint8_t GledDimming : 5;        /*!< GLED Dimming. Default: 0x1F */
    uint8_t reserved1 : 1;          /*!< Reserved */
    uint8_t SS4 : 1;                /*!< SS4: Low bit of setting PWM Frequency. Default: 1 */
    uint8_t SS5 : 1;                /*!< SS5: High bit of setting PWM Frequency. Default: 1 */
} S_ELLSI_TH20SET_DATA_T;

/*@}*/ /* end of group ELLSI_EXPORTED_STRUCTS */

/** @addtogroup ELLSI_EXPORTED_CONSTANTS ELLSI Exported Constants
  @{
*/

#define ELLSI_MAX_STRIP_CNT         (15)                            /*!< The max number of strips \hideinitializer */

#define ID(x)                       (x)                             /*!< Strip ID number  \hideinitializer */

#define FB1                         (0)                             /*!< Feedback register 1  \hideinitializer */
#define FB2                         (1)                             /*!< Feedback register 2  \hideinitializer */
#define FB3                         (2)                             /*!< Feedback register 3  \hideinitializer */
#define FB4                         (3)                             /*!< Feedback register 4  \hideinitializer */
#define FB5                         (4)                             /*!< Feedback register 5  \hideinitializer */
#define FB6                         (5)                             /*!< Feedback register 6  \hideinitializer */
#define FB7                         (6)                             /*!< Feedback register 7  \hideinitializer */
#define FB8                         (7)                             /*!< Feedback register 8  \hideinitializer */
#define FB9                         (8)                             /*!< Feedback register 9  \hideinitializer */
#define FB10                        (9)                             /*!< Feedback register 10  \hideinitializer */
#define FB11                        (10)                            /*!< Feedback register 11  \hideinitializer */
#define FB12                        (11)                            /*!< Feedback register 12  \hideinitializer */
#define FB13                        (12)                            /*!< Feedback register 13  \hideinitializer */
#define FB14                        (13)                            /*!< Feedback register 14  \hideinitializer */
#define FB15                        (14)                            /*!< Feedback register 15  \hideinitializer */

/* ELLSI Mode */
#define ELLSI_MODE_SW               (0 << ELLSI_CTL_ELLSIMODE_Pos)  /*!< Software mode \hideinitializer */
#define ELLSI_MODE_PDMA             (1 << ELLSI_CTL_ELLSIMODE_Pos)  /*!< PDMA mode \hideinitializer */

/* ELLSI Output Format */
#define ELLSI_FORMAT_RGB            (0 << ELLSI_CTL_OFDEF_Pos)      /*!< Output RGB format \hideinitializer */
#define ELLSI_FORMAT_GRB            (1 << ELLSI_CTL_OFDEF_Pos)      /*!< Output GRB format \hideinitializer */

/* ELLSI Idle Output State */
#define ELLSI_IDLE_LOW              (0 << ELLSI_OCTL_IDOS_Pos)      /*!< Idle output low \hideinitializer */
#define ELLSI_IDLE_HIGH             (1 << ELLSI_OCTL_IDOS_Pos)      /*!< Idle output high \hideinitializer */

/* ELLSI Interrupt Mask */
#define ELLSI_UNDFL_INT_MASK        (0x001)                         /*!< Underflow interrupt mask \hideinitializer */
#define ELLSI_FEND_INT_MASK         (0x002)                         /*!< Frame end interrupt mask \hideinitializer */
#define ELLSI_RSTC_INT_MASK         (0x004)                         /*!< Reset command interrupt mask \hideinitializer */
#define ELLSI_EMP_INT_MASK          (0x008)                         /*!< FIFO empty interrupt mask \hideinitializer */
#define ELLSI_FUL_INT_MASK          (0x010)                         /*!< FIFO full interrupt mask \hideinitializer */
#define ELLSI_TXTH_INT_MASK         (0x020)                         /*!< TX threshold interrupt mask \hideinitializer */

/* ELLSI Command Interrupt Mask */
#define ELLSI_CMDDONE_MASK          (0x000001)                      /*!< Normal command done interrupt mask \hideinitializer */
#define ELLSI_FBDONE_MASK           (0x000002)                      /*!< Feedback command done interrupt mask \hideinitializer */
#define ELLSI_TH20DONE_MASK         (0x000004)                      /*!< TH20 command done interrupt mask \hideinitializer */
#define ELLSI_SETIDLONG_MASK        (0x000008)                      /*!< Set ID get pulse long interrupt mask \hideinitializer */
#define ELLSI_CHKIDLONG_MASK        (0x000010)                      /*!< Check ID get pulse long interrupt mask \hideinitializer */
#define ELLSI_SETIDSHORT_MASK       (0x000020)                      /*!< Set ID get pulse short interrupt mask \hideinitializer */
#define ELLSI_CHKIDSHORT_MASK       (0x000040)                      /*!< Check ID get pulse short interrupt mask \hideinitializer */
#define ELLSI_SETGETOV_MASK         (0x000080)                      /*!< Set ID get pulse overflow interrupt mask \hideinitializer */
#define ELLSI_CHKGETOV_MASK         (0x000100)                      /*!< Check ID get pulse overflow interrupt mask \hideinitializer */
#define ELLSI_SETGETUN_MASK         (0x000200)                      /*!< Set ID Get pulse underflow interrupt mask \hideinitializer */
#define ELLSI_CHKGETUN_MASK         (0x000400)                      /*!< Check ID get pulse underflow interrupt mask \hideinitializer */
#define ELLSI_FBC0LONG_MASK         (0x000800)                      /*!< Feedback count 0 pulse long interrupt mask \hideinitializer */
#define ELLSI_FBC0SHORT_MASK        (0x001000)                      /*!< Feedback count 0 pulse short interrupt mask \hideinitializer */
#define ELLSI_FBC1LONG_MASK         (0x002000)                      /*!< Feedback count 1 pulse long interrupt mask \hideinitializer */
#define ELLSI_FBC1SHORT_MASK        (0x004000)                      /*!< Feedback count 1 pulse short interrupt mask \hideinitializer */
#define ELLSI_FBID0LONG_MASK        (0x008000)                      /*!< Feedback ID 0 pulse long interrupt mask \hideinitializer */
#define ELLSI_FBID0SHORT_MASK       (0x010000)                      /*!< Feedback ID 0 pulse short interrupt mask \hideinitializer */
#define ELLSI_FBID1LONG_MASK        (0x020000)                      /*!< Feedback ID 1 pulse long interrupt mask \hideinitializer */
#define ELLSI_FBID1SHORT_MASK       (0x040000)                      /*!< Feedback ID 1 pulse short interrupt mask \hideinitializer */
#define ELLSI_ASETIDOV_MASK         (0x080000)                      /*!< AUTO SET mode feedback ID overflow interrupt mask \hideinitializer */
#define ELLSI_ASETDONE_MASK         (0x100000)                      /*!< AUTO SET mode done interrupt mask \hideinitializer */
#define ELLSI_ATHDONE_MASK          (0x200000)                      /*!< AUTO TH20 SET mode done interrupt mask \hideinitializer */
#define ELLSI_FBPOV_MASK            (0x400000)                      /*!< Feedback pixel count overflow interrupt mask \hideinitializer */

/* ELLSI Command Mode */
#define ELLSI_CMDMODE_LLSI          (0x0 << ELLSI_CTL_CMDMODE_Pos)  /*!< LLSI mode \hideinitializer */
#define ELLSI_CMDMODE_NORMAL_CMD    (0x1 << ELLSI_CTL_CMDMODE_Pos)  /*!< Normal command mode \hideinitializer */
#define ELLSI_CMDMODE_AUTO_SET      (0x2 << ELLSI_CTL_CMDMODE_Pos)  /*!< AUTO SET mode \hideinitializer */
#define ELLSI_CMDMODE_AUTO_TH20SET  (0x3 << ELLSI_CTL_CMDMODE_Pos)  /*!< AUTO TH20 SET mode \hideinitializer */

/* ELLSI Special Command */
#define ELLSI_SPECMD_NORMAL_CMD     (0x0 << ELLSI_CMD_SPECMD_Pos)   /*!< Normal command or no command \hideinitializer */
#define ELLSI_SPECMD_FB_COUNT_CMD   (0x1 << ELLSI_CMD_SPECMD_Pos)   /*!< Feedback count command \hideinitializer */
#define ELLSI_SPECMD_FB_ID_CMD      (0x2 << ELLSI_CMD_SPECMD_Pos)   /*!< Feedback ID command \hideinitializer */
#define ELLSI_SPECMD_TH20SET_CMD    (0x3 << ELLSI_CMD_SPECMD_Pos)   /*!< TH20 SET command \hideinitializer */
#define ELLSI_SPECMD_SEND_DATA      (0x4 << ELLSI_CMD_SPECMD_Pos)   /*!< Send Data \hideinitializer */

/* ELLSI Normal Command Mode */
#define ELLSI_CMD_SET_ID            (0x1 << ELLSI_CMD_CMD_Pos)      /*!< Set ID command \hideinitializer */
#define ELLSI_CMD_CLR_ID            (0x2 << ELLSI_CMD_CMD_Pos)      /*!< Clear ID command \hideinitializer */
#define ELLSI_CMD_CHK_ID            (0x3 << ELLSI_CMD_CMD_Pos)      /*!< Check ID command \hideinitializer */
#define ELLSI_CMD_SPE_ID            (0x4 << ELLSI_CMD_CMD_Pos)      /*!< Specify ID command \hideinitializer */

/*---------------------------------------------------------------------------------------------------------*/
/* ELLSI Define Error Code                                                                                */
/*---------------------------------------------------------------------------------------------------------*/
#define ELLSI_TIMEOUT               SystemCoreClock                 /*!< ELLSI time-out counter (1 second time-out) \hideinitializer */
#define ELLSI_OK                    ( 0L)                           /*!< ELLSI operation OK \hideinitializer */
#define ELLSI_ERR_FAIL              (-1L)                           /*!< ELLSI operation failed \hideinitializer */
#define ELLSI_ERR_TIMEOUT           (-2L)                           /*!< ELLSI operation abort due to timeout error \hideinitializer */

/*@}*/ /* end of group ELLSI_EXPORTED_CONSTANTS */


/** @addtogroup ELLSI_EXPORTED_FUNCTIONS ELLSI Exported Functions
  @{
*/

/**
  * @brief      Set ELLSI last data transmit.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Set LDT (ELLSI_STATUS[8]) to set ELLSI last data transmit.
  */
#define ELLSI_SET_LAST_DATA(ellsi)   ((ellsi)->STATUS |= ELLSI_STATUS_LDT_Msk)

/**
  * @brief      Get the TX FIFO empty flag.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @retval     0 TX FIFO is not empty.
  * @retval     1 TX FIFO is empty.
  * @details    Read EMPIF bit of ELLSI_STATUS register to get the TX FIFO empty flag.
  */
#define ELLSI_GET_TX_FIFO_EMPTY_FLAG(ellsi)   (((ellsi)->STATUS & ELLSI_STATUS_EMPIF_Msk) >> ELLSI_STATUS_EMPIF_Pos)

/**
  * @brief      Get the TX FIFO full flag.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @retval     0 TX FIFO is not full.
  * @retval     1 TX FIFO is full.
  * @details    Read FULIF bit of ELLSI_STATUS register to get the TX FIFO full flag.
  */
#define ELLSI_GET_TX_FIFO_FULL_FLAG(ellsi)   (((ellsi)->STATUS & ELLSI_STATUS_FULIF_Msk) >> ELLSI_STATUS_FULIF_Pos)

/**
  * @brief      Write datum to DATA register.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32TxData The datum which user attempt to transfer through ELLSI bus.
  * @return     None.
  * @details    Write u32TxData to ELLSI_DATA register.
  */
#define ELLSI_WRITE_DATA(ellsi, u32TxData)   ((ellsi)->DATA = (u32TxData))

/**
  * @brief      Set ELLSI idle low.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Clear IDOS (ELLSI_OCTL[0]) to set ELLSI idle low.
  */
#define ELLSI_SET_IDLE_LOW(ellsi)   ((ellsi)->OCTL &= ~ELLSI_OCTL_IDOS_Msk)

/**
  * @brief      Set ELLSI idle high.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Set IDOS (ELLSI_OCTL[0]) to set ELLSI idle high.
  */
#define ELLSI_SET_IDLE_HIGH(ellsi)   ((ellsi)->OCTL |= ELLSI_OCTL_IDOS_Msk)

/**
  * @brief      Set ELLSI RGB format.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Clear OFDEF (ELLSI_CTL[12]) to set ELLSI RGB format.
  */
#define ELLSI_SET_RGB_FORMAT(ellsi)   ((ellsi)->CTL &= ~ELLSI_CTL_OFDEF_Msk)

/**
  * @brief      Set ELLSI GRB format.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Set OFDEF (ELLSI_CTL[12]) to set ELLSI GRB format.
  */
#define ELLSI_SET_GRB_FORMAT(ellsi)   ((ellsi)->CTL |= ELLSI_CTL_OFDEF_Msk)

/**
  * @brief      Set ELLSI software mode.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Clear ELLSIMODE (ELLSI_CTL[8]) to set ELLSI software mode.
  */
#define ELLSI_SET_SW_MODE(ellsi)   ((ellsi)->CTL &= ~ELLSI_CTL_ELLSIMODE_Msk)

/**
  * @brief      Set ELLSI PDMA mode.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Set ELLSIMODE (ELLSI_CTL[8]) to set ELLSI PDMA mode.
  */
#define ELLSI_SET_PDMA_MODE(ellsi)   ((ellsi)->CTL |= ELLSI_CTL_ELLSIMODE_Msk)

/**
  * @brief      Enable ELLSI reset command function.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Set RSTCEN (ELLSI_CTL[1]) to enable ELLSI reset command function.
  */
#define ELLSI_ENABLE_RESET_COMMAND(ellsi)   ((ellsi)->CTL |= ELLSI_CTL_RSTCEN_Msk)

/**
  * @brief      Disable ELLSI reset command function.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Clear RSTCEN (ELLSI_CTL[1]) to disable ELLSI reset command function.
  */
#define ELLSI_DISABLE_RESET_COMMAND(ellsi)   ((ellsi)->CTL &= ~ELLSI_CTL_RSTCEN_Msk)

/**
  * @brief      Enable ELLSI controller.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Set ELLSIEN (ELLSI_CTL[0]) to enable ELLSI controller.
  */
#define ELLSI_ENABLE(ellsi)   ((ellsi)->CTL |= ELLSI_CTL_ELLSIEN_Msk)

/**
  * @brief      Disable ELLSI controller.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Clear ELLSIEN (ELLSI_CTL[0]) to disable ELLSI controller.
  */
#define ELLSI_DISABLE(ellsi)   ((ellsi)->CTL &= ~ELLSI_CTL_ELLSIEN_Msk)

/**
  * @brief      Set ELLSI command mode.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32CmdMode The mask for set command mode. Valid values are:
  *                      - \ref ELLSI_CMDMODE_LLSI
  *                      - \ref ELLSI_CMDMODE_NORMAL_CMD
  *                      - \ref ELLSI_CMDMODE_AUTO_SET
  *                      - \ref ELLSI_CMDMODE_AUTO_TH20SET
  * @return     None.
  * @details    Set CMDMODE (ELLSI_CTL[25:24]) to set ELLSI command mode.
  */
#define ELLSI_SET_CMD_MODE(ellsi, u32CmdMode)   ((ellsi)->CTL = (ellsi)->CTL & ~ELLSI_CTL_CMDMODE_Msk | (u32CmdMode))

/**
  * @brief      Set ELLSI special command.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32SpeCmd The mask for set special command. Valid values are:
  *                     - \ref ELLSI_SPECMD_NORMAL_CMD
  *                     - \ref ELLSI_SPECMD_FB_COUNT_CMD
  *                     - \ref ELLSI_SPECMD_FB_ID_CMD
  *                     - \ref ELLSI_SPECMD_TH20SET_CMD
  *                     - \ref ELLSI_SPECMD_SEND_DATA
  * @return     None.
  * @details    Set SPECMD (ELLSI_CMD[15:12]) to set ELLSI special command.
  */
#define ELLSI_SET_SPECMD(ellsi, u32SpeCmd)   ((ellsi)->CMD = (ellsi)->CMD & ~ELLSI_CMD_SPECMD_Msk | (u32SpeCmd))

/**
  * @brief      Set ELLSI ID command.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32Cmd The mask for set, clear, check or specify ID command. Valid values are:
  *                  - \ref ELLSI_CMD_SET_ID
  *                  - \ref ELLSI_CMD_CLR_ID
  *                  - \ref ELLSI_CMD_CHK_ID
  *                  - \ref ELLSI_CMD_SPE_ID
  * @return     None.
  * @details    Set CMD (ELLSI_CMD[7:4]) to set ELLSI ID command.
  */
#define ELLSI_SET_CMD(ellsi, u32Cmd)   ((ellsi)->CMD = (ellsi)->CMD & ~ELLSI_CMD_CMD_Msk | (u32Cmd))

/**
  * @brief      Set ELLSI ID.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32ID The 4-bit strip ID.
  * @return     None.
  * @details    The strip ID can be 1 ~ 15.
  */
#define ELLSI_SET_ID(ellsi, u32ID)   ((ellsi)->CMD = (ellsi)->CMD & ~ELLSI_CMD_ID_Msk | ((u32ID) << ELLSI_CMD_ID_Pos))

/**
  * @brief      Set ELLSI normal command of specified ID.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32Cmd The mask for set, clear, check or specify ID command. Valid values are:
  *                  - \ref ELLSI_CMD_SET_ID
  *                  - \ref ELLSI_CMD_CLR_ID
  *                  - \ref ELLSI_CMD_CHK_ID
  *                  - \ref ELLSI_CMD_SPE_ID
  * @param[in]  u32ID The 4-bit strip ID. It can be 1 ~ 15.
  * @return     None.
  * @details    Set CMD (ELLSI_CMD[7:4]) and ID (ELLSI_CMD[3:0]) to set ELLSI normal command of specified ID.
  */
#define ELLSI_SET_NORMAL_CMD(ellsi, u32Cmd, u32ID)   ((ellsi)->CMD = ((ellsi)->CMD & ~(ELLSI_CMD_SPECMD_Msk | ELLSI_CMD_CMD_Msk | ELLSI_CMD_ID_Msk)) | ELLSI_SPECMD_NORMAL_CMD | (u32Cmd) | (u32ID))

/**
  * @brief      Set ELLSI command go bit to start the command.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Set CMDGO (ELLSI_CMD[8]) to set command go bit.
  */
#define ELLSI_SET_CMD_GO(ellsi)   ((ellsi)->CMD |= ELLSI_CMD_CMDGO_Msk)

/**
  * @brief      Get the command state.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @retval     0 The command is done.
  * @retval     1 The command is not done.
  * @details    This macro will return the command go flag of ELLSI controller.
  */
#define ELLSI_CMD_IS_DONE(ellsi)   (((ellsi)->CMD & ELLSI_CMD_CMDGO_Msk) >> ELLSI_CMD_CMDGO_Pos)

/**
  * @brief      Get the Normal command done flag.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @retval     0 The Normal command is not done.
  * @retval     1 The Normal command is done.
  * @details    This macro will return the Normal command done flag of ELLSI controller.
  */
#define ELLSI_NORMAL_CMD_IS_DONE(ellsi)   (((ellsi)->CMDSTS & ELLSI_CMDSTS_CMDDONE_Msk) >> ELLSI_CMDSTS_CMDDONE_Pos)

/**
  * @brief      Clear the Normal command done flag.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Write 1 to CMDDONE bit of ELLSI_CMDSTS register to clear the Normal command done flag.
  */
#define ELLSI_CLR_NORMAL_CMD_INT_FLAG(ellsi)   ((ellsi)->CMDSTS = ELLSI_CMDSTS_CMDDONE_Msk)

/**
  * @brief      Get the Feedback command done flag.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @retval     0 The Feedback command is not done.
  * @retval     1 The Feedback command is done.
  * @details    This macro will return the Feedback command done flag of ELLSI controller.
  */
#define ELLSI_FEEDBACK_CMD_IS_DONE(ellsi)   (((ellsi)->CMDSTS & ELLSI_CMDSTS_FBDONE_Msk) >> ELLSI_CMDSTS_FBDONE_Pos)

/**
  * @brief      Clear the Feedback command done flag.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Write 1 to FBDONE bit of ELLSI_CMDSTS register to clear the Feedback command done flag.
  */
#define ELLSI_CLR_FEEDBACK_CMD_INT_FLAG(ellsi)   ((ellsi)->CMDSTS = ELLSI_CMDSTS_FBDONE_Msk)

/**
  * @brief      Get the TH20 SET command done flag.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @retval     0 The TH20 SET command is not done.
  * @retval     1 The TH20 SET command is done.
  * @details    This macro will return the TH20 SET command done flag of ELLSI controller.
  */
#define ELLSI_TH20SET_CMD_IS_DONE(ellsi)   (((ellsi)->CMDSTS & ELLSI_CMDSTS_TH20DONE_Msk) >> ELLSI_CMDSTS_TH20DONE_Pos)

/**
  * @brief      Clear the TH20 SET command done flag.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Write 1 to TH20DONE bit of ELLSI_CMDSTS register to clear the TH20 SET command done flag.
  */
#define ELLSI_CLR_TH20SET_CMD_INT_FLAG(ellsi)   ((ellsi)->CMDSTS = ELLSI_CMDSTS_TH20DONE_Msk)

/**
  * @brief      Get the AUTO SET mode done flag.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @retval     0 The AUTO SET mode is not done.
  * @retval     1 The AUTO SET mode is done.
  * @details    This macro will return the AUTO SET mode done flag of ELLSI controller.
  */
#define ELLSI_AUTO_SET_IS_DONE(ellsi)   (((ellsi)->CMDSTS & ELLSI_CMDSTS_ASETDONE_Msk) >> ELLSI_CMDSTS_ASETDONE_Pos)

/**
  * @brief      Clear the AUTO SET mode done flag.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Write 1 to ASETDONE bit of ELLSI_CMDSTS register to clear the AUTO SET mode done flag.
  */
#define ELLSI_CLR_AUTO_SET_INT_FLAG(ellsi)   ((ellsi)->CMDSTS = ELLSI_CMDSTS_ASETDONE_Msk)

/**
  * @brief      Get the AUTO TH20 SET mode done flag.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @retval     0 The AUTO TH20 SET mode is not done.
  * @retval     1 The AUTO TH20 SET mode is done.
  * @details    This macro will return the AUTO TH20 SET mode done flag of ELLSI controller.
  */
#define ELLSI_AUTO_TH20SET_IS_DONE(ellsi)   (((ellsi)->CMDSTS & ELLSI_CMDSTS_ATHDONE_Msk) >> ELLSI_CMDSTS_ATHDONE_Pos)

/**
  * @brief      Clear the AUTO TH20 SET mode done flag.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Write 1 to ATHDONE bit of ELLSI_CMDSTS register to clear the AUTO TH20 SET mode done flag.
  */
#define ELLSI_CLR_AUTO_TH20SET_INT_FLAG(ellsi)   ((ellsi)->CMDSTS = ELLSI_CMDSTS_ATHDONE_Msk)

/**
  * @brief      Get the ID count.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @retval     The number of feedback pulse.
  * @details    Read IDCNT bit of ELLSI_CMDSTS register to get the ID count.
  */
#define ELLSI_GET_ID_COUNT(ellsi)   (((ellsi)->CMDSTS & ELLSI_CMDSTS_IDCNT_Msk) >> ELLSI_CMDSTS_IDCNT_Pos)

/**
  * @brief      Set the ID count.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32IDCnt The number of ID count.
  * @retval     None.
  * @details    Set IDCNT (ELLSI_CMDSTS[31:28]) to set the ID count.
  */
#define ELLSI_SET_ID_COUNT(ellsi, u32IDCnt)   ((ellsi)->CMDSTS = ((ellsi)->CMDSTS & ~ELLSI_CMDSTS_IDCNT_Msk) | (u32IDCnt << ELLSI_CMDSTS_IDCNT_Pos))

/**
  * @brief      Get the feedback pixel count.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32ID The 4-bit strip ID. It can be 1 ~ 15.
  * @retval     The number of feedback pixel count. It can be 1 ~ 1023.
  * @retval     -1 Unknown strip ID number.
  * @details    Read FBPCNT bit of ELLSI_FBPCNTn register to get the feedback pixel count of IDn.
  */
__STATIC_INLINE uint32_t ELLSI_GET_FB_COUNT(ELLSI_T *ellsi, uint32_t u32ID)
{
    uint32_t i;
    uint32_t u32FBPCNT;

    if((u32ID == 0) || (u32ID >= 16))
        return -1;

    for(i = 0; i < ELLSI_MAX_STRIP_CNT; i++)
    {
        u32FBPCNT = ellsi->FB[i].FBPCNT;

        if(i == (u32ID - 1))
            break;
    }

    return u32FBPCNT & ELLSI_FBPCNT_FBPCNT_Msk;
}

/**
  * @brief      Set the feedback pixel count.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32ID The 4-bit strip ID. It can be 1 ~ 15.
  * @param[in]  u32IDCnt The number of feedback pixel count.
  * @retval     The number of feedback pixel count. It can be 1 ~ 1023.
  * @retval     -1 Set strip ID number failed.
  * @details    Set FBPCNT (ELLSI_FBPCNTn[9:0]) to set the feedback pixel count of IDn.
  */
__STATIC_INLINE uint32_t ELLSI_SET_FB_COUNT(ELLSI_T *ellsi, uint32_t u32ID, uint32_t u32IDCnt)
{
    uint32_t i;
    uint32_t *u32FBPCNT;

    if((u32ID == 0) || (u32ID >= 16))
        return -1;

    for(i = 0; i < ELLSI_MAX_STRIP_CNT; i++)
    {
        u32FBPCNT = (uint32_t *)((uint32_t)&ellsi->FB[i].FBPCNT);

        if(i == (u32ID - 1))
        {
            *u32FBPCNT = u32IDCnt;
            break;
        }
    }

    return *u32FBPCNT & ELLSI_FBPCNT_FBPCNT_Msk;
}

/**
  * @brief      Get the feedback pixel current.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32ID The 4-bit strip ID. It can be 1 ~ 15.
  * @retval     0  The current feedback from the LED is 5mA.
  * @retval     1  The current feedback from the LED is 12mA.
  * @retval     -1 Unknown strip ID number.
  * @details    Read FBPCUR bit of ELLSI_FBPCNTn register to get the feedback pixel current of IDn.
  */
__STATIC_INLINE uint32_t ELLSI_GET_FB_CURRENT(ELLSI_T *ellsi, uint32_t u32ID)
{
    uint32_t i;
    uint32_t u32FBPCUR;

    if((u32ID == 0) || (u32ID >= 16))
        return -1;

    for(i = 0; i < ELLSI_MAX_STRIP_CNT; i++)
    {
        u32FBPCUR = ellsi->FB[i].FBPCNT;

        if(i == (u32ID - 1))
            break;
    }

    return (u32FBPCUR & ELLSI_FBPCNT_FBPCUR_Msk) >> ELLSI_FBPCNT_FBPCUR_Pos;
}

/**
  * @brief      Get the feedback strip ID.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32ID The 4-bit strip ID. It can be 1 ~ 15.
  * @retval     0  The 32-bit feedback strip ID.
  * @retval     -1 Unknown strip ID number.
  * @details    Read FBSID bit of ELLSI_FBSIDn register to get the feedback strip ID of IDn.
  */
__STATIC_INLINE uint32_t ELLSI_GET_FB_ID(ELLSI_T *ellsi, uint32_t u32ID)
{
    uint32_t i;
    uint32_t u32FBSID;

    if((u32ID == 0) || (u32ID >= 16))
        return -1;

    for(i = 0; i < ELLSI_MAX_STRIP_CNT; i++)
    {
        u32FBSID = ellsi->FB[i].FBSID;

        if(i == (u32ID - 1))
            break;
    }

    return u32FBSID;
}

/**
  * @brief      Enable force TH20 command.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Set TH20FCMD (ELLSI_TCCTL[24]) to enable force TH20 command.
  */
#define ELLSI_ENABLE_FORCE_TH20_COMMAND(ellsi)   ((ellsi)->TCCTL |= ELLSI_TCCTL_TH20FCMD_Msk)

/**
  * @brief      Disable force TH20 command.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Clear TH20FCMD (ELLSI_TCCTL[24]) to disable force TH20 command.
  */
#define ELLSI_DISABLE_FORCE_TH20_COMMAND(ellsi)   ((ellsi)->TCCTL &= ~ELLSI_TCCTL_TH20FCMD_Msk)

/**
  * @brief      Enable ELLSI Power-down command.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Set PDCMD (ELLSI_CMD[16]) to enable ELLSI Power-down command.
  */
#define ELLSI_ENABLE_PD_COMMAND(ellsi)   ((ellsi)->CMD |= ELLSI_CMD_PDCMD_Msk)

/**
  * @brief      Disable ELLSI Power-down command.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Clear PDCMD (ELLSI_CMD[16]) to disable ELLSI Power-down command.
  */
#define ELLSI_DISABLE_PD_COMMAND(ellsi)   ((ellsi)->CMD &= ~ELLSI_CMD_PDCMD_Msk)

/**
  * @brief      Enable ELLSI Wakeup command.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Set WKCMD (ELLSI_CMD[17]) to enable ELLSI Wakeup command.
  */
#define ELLSI_ENABLE_WK_COMMAND(ellsi)   ((ellsi)->CMD |= ELLSI_CMD_WKCMD_Msk)

/**
  * @brief      Disable ELLSI Wakeup command.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return     None.
  * @details    Clear WKCMD (ELLSI_CMD[17]) to disable ELLSI Wakeup command.
  */
#define ELLSI_DISABLE_WK_COMMAND(ellsi)   ((ellsi)->CMD &= ~ELLSI_CMD_WKCMD_Msk)



/* Function prototype declaration */
void ELLSI_Open(ELLSI_T *ellsi, uint32_t u32ELLSIMode, uint32_t u32OutputFormat, uint32_t u32BusClock, uint32_t u32TransferTimeNsec, uint32_t u32T0HTimeNsec, uint32_t u32T1HTimeNsec, uint32_t u32ResetTimeNsec, uint32_t u32PCNT, uint32_t u32IDOS);
void ELLSI_Config_Y_Cable(ELLSI_T *ellsi, S_ELLSI_TIME_INFO_T *sPt);
void ELLSI_SetTH20Data(ELLSI_T *ellsi, S_ELLSI_TH20SET_DATA_T *sPt);
int32_t ELLSI_WaitCmdStsDone(ELLSI_T *ellsi, uint32_t u32Mask);
void ELLSI_Close(ELLSI_T *ellsi);
void ELLSI_GetTimeInfo(ELLSI_T *ellsi, S_ELLSI_TIME_INFO_T *sPt);
void ELLSI_SetFIFO(ELLSI_T *ellsi, uint32_t u32TxThreshold);
void ELLSI_EnableInt(ELLSI_T *ellsi, uint32_t u32Mask);
void ELLSI_DisableInt(ELLSI_T *ellsi, uint32_t u32Mask);
uint32_t ELLSI_GetIntFlag(ELLSI_T *ellsi, uint32_t u32Mask);
void ELLSI_ClearIntFlag(ELLSI_T *ellsi, uint32_t u32Mask);
void ELLSI_EnableCmdInt(ELLSI_T *ellsi, uint32_t u32Mask);
void ELLSI_DisableCmdInt(ELLSI_T *ellsi, uint32_t u32Mask);
uint32_t ELLSI_GetCmdIntFlag(ELLSI_T *ellsi, uint32_t u32Mask);
void ELLSI_ClearCmdIntFlag(ELLSI_T *ellsi, uint32_t u32Mask);
uint32_t ELLSI_GetOverflowFlag(ELLSI_T *ellsi, uint32_t u32ID);
void ELLSI_ClearOverflowFlag(ELLSI_T *ellsi, uint32_t u32ID);


/*@}*/ /* end of group ELLSI_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group ELLSI_Driver */

/*@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif //__ELLSI_H__
