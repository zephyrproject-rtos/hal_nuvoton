/**************************************************************************//**
 * @file     i3c_reg.h
 * @version  V1.00
 * @brief    I3C register definition header file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2024 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/

#ifndef __I3C_REG_H__
#define __I3C_REG_H__

#if defined ( __CC_ARM   )
    #pragma anon_unions
#endif

/**
    @addtogroup REGISTER Control Register
    @{
*/

/**
    @addtogroup I3C I3C Serial Interface Controller (I3C)
    Memory Mapped Structure for I3C Controller
    @{
*/


typedef struct
{
    union
    {
        __IO uint32_t WORD1;        /*!< I3C Target Mode Extended Command Word 1 Register */
        __IO uint32_t CFG;          /*!< Extended Command Configuration */
    };
    union
    {
        __IO uint32_t WORD2;        /*!< I3C Target Mode Extended Command Word 2 Register*/
        __IO uint32_t DATA;         /*!< Data Lenght and Defining Byte for Non HDR-BT Transfer */
        __IO uint32_t BTBYTES;      /*!< Command Bytes for HDR-BT Transfer */
    };
    union
    {
        __IO uint32_t WORD3;        /*!< I3C Target Mode Extended Command Word 3 Register*/
        __IO uint32_t BTRDLEN;      /*!< Data Lenght of HDR-BT Transfer Read Command */
    };
} EXTCMD_T;


typedef struct
{
    union
    {
        __I uint32_t CHAR1;             /*!< I3C Target Device Characteristic 1 Register */
        __I uint32_t PIDMSB;            /*!< The MSB 32-bit Value of Provisional ID */
    };
    union
    {
        __I uint32_t CHAR2;             /*!< I3C Target Device Characteristic 2 Register */
        __I uint32_t PIDLSB;            /*!< The LSB 16-bit Value of Provisional ID */
    };
    union
    {
        __I uint32_t CHAR3;             /*!< I3C Target Device Characteristic 3 Register */
        __I uint32_t BCRDCR;            /*!< Bus Characteristic and Device Characteristic Value */
    };
    union
    {
        __I uint32_t CHAR4;             /*!< I3C Target Device Characteristic 4 Register */
        __I uint32_t DADDR;             /*!< Dynamic Address */
    };
} TGTCHAR_T;


typedef struct
{
    __IO uint32_t ADDR;                 /*!< I3C Virtual Target Address Register */
    __IO uint32_t MID;                  /*!< I3C Virtual Target MIPI Manufacturer ID Register */
    __IO uint32_t PID;                  /*!< I3C Virtual Target Provisional ID Register */
    __IO uint32_t CHAR;                 /*!< I3C Virtual Target Characteristic Register */

    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE[4];           /*!< Reserved */
    /// @endcond //HIDDEN_SYMBOLS
} VTGTCFG_T;


typedef struct
{
    __IO uint32_t DEVCTL;               /*!< [0x0000] I3C Device Control Register */
    __IO uint32_t DEVADDR;              /*!< [0x0004] I3C Device Address Register */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE0;             /*!< [0x0008] Reserved */
    /// @endcond //HIDDEN_SYMBOLS
    __O uint32_t CMDQUE;                /*!< [0x000c] I3C Command Queue Port Register */
    __I uint32_t RESPQUE;               /*!< [0x0010] I3C Response Queue Port Register */
    //    union
    //    {
    //        __I uint32_t CTRRESP;           /*!< [0x0010] I3C Controller Response Data Structure Register */
    //        __I uint32_t TGTRESP;           /*!< [0x0010] I3C Targer Response Data Structure Register */
    //    };
    __IO uint32_t TXRXDAT;              /*!< [0x0014] I3C Transmit and Receive Data Port Register */
    union
    {
        __I uint32_t IBISTS;            /*!< [0x0018] I3C Controller In-Band Interrupt Queue Status Register */
        __I uint32_t IBIQUE;            /*!< [0x0018] I3C Controller In-Band Interrupt Queue Data Register */
    };
    __IO uint32_t QUETHCTL;             /*!< [0x001c] I3C Queue Threshold Control Register */
    __IO uint32_t DBTHCTL;              /*!< [0x0020] I3C Data Buffer Threshold Control Register */
    __IO uint32_t IBIQCTL;              /*!< [0x0024] I3C Controller IBI Queue Control Register */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE1[3];          /*!< [0x0028] ~ [0x0030] Reserved */
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t RSTCTL;               /*!< [0x0034] I3C Reset Control Register */
    __IO uint32_t SLVEVNTS;             /*!< [0x0038] I3C Target Event Status Register */
    __IO uint32_t INTSTS;               /*!< [0x003c] I3C Interrupt Status Register */
    __IO uint32_t INTSTSEN;             /*!< [0x0040] I3C Interrupt Status Enable Register */
    __IO uint32_t INTEN;                /*!< [0x0044] I3C Interrupt Signal Enable Register */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE2;             /*!< [0x0048] Reserved */
    /// @endcond //HIDDEN_SYMBOLS
    __I  uint32_t QUESTSLV;             /*!< [0x004c] I3C Queue Status Level Register */
    __I  uint32_t DBSTSLV;              /*!< [0x0050] I3C Data Buffer Status Level Register */
    __I  uint32_t PRESENTS;             /*!< [0x0054] I3C Present State Register */
    __I  uint32_t CCCDEVS;              /*!< [0x0058] I3C Target Device Operating Status Register */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE3[5];          /*!< [0x005c] ~ [0x006c] Reserved */
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t SLVMID;               /*!< [0x0070] I3C Target MIPI Manufacturer ID Register */
    __IO uint32_t SLVPID;               /*!< [0x0074] I3C Target Normal Provisional ID Register */
    __IO uint32_t SLVCHAR;              /*!< [0x0078] I3C Target Characteristic Register */
    __I  uint32_t SLVMXLEN;             /*!< [0x007c] I3C Target Maximum Write/Read Length Register */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE4;             /*!< [0x0080] Reserved */
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t MXDS;                 /*!< [0x0084] I3C Target Maximum Data Speed Register */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE5;             /*!< [0x0088] Reserved */
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t SIR;                  /*!< [0x008c] I3C Target Interrupt Request Control Register */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE6;             /*!< [0x0090] Reserved */
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t SIRDAT;               /*!< [0x0094] I3C Target Interrupt Request Data Register */
    __IO uint32_t SIRRESP;              /*!< [0x0098] I3C Target Interrupt Request Response Register */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE7[2];          /*!< [0x009c] ~ [0x00a0] Reserved */
    /// @endcond //HIDDEN_SYMBOLS
    __I  uint32_t INSTSTS;              /*!< [0x00a4] I3C Target Instant Status Register */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE8[2];          /*!< [0x00a8] ~ [0x00ac] Reserved */
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t DEVCTLE;              /*!< [0x00b0] I3C Device Control Extended Register */
    __IO uint32_t SCLOD;                /*!< [0x00b4] I3C Controller Open Drain SCL Timing Register */
    __IO uint32_t SCLPP;                /*!< [0x00b8] I3C Controller Push Pull SCL Timing Register */
    __IO uint32_t SCLFM;                /*!< [0x00bc] I3C Controller I2C Fast Mode SCL Timing Register */
    __IO uint32_t SCLFMP;               /*!< [0x00c0] I3C Controller I2C Fast Mode Plus SCL Timing Register */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE9;             /*!< [0x00c4] Reserved */
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t SCLEXTLO;             /*!< [0x00c8] I3C Controller SCL Extended Low Count Timing Register */
    __IO uint32_t SCLEXTTB;             /*!< [0x00cc] I3C Controller SCL Termination Bit Low Count Timing Register */
    __IO uint32_t SDAHOLD;              /*!< [0x00d0] I3C Controller SDA Hold And Mode Switch Delay Timing Register */
    __IO uint32_t BUSFAT;               /*!< [0x00d4] I3C Bus Free And Available Timing Register */
    __IO uint32_t BUSIDLET;             /*!< [0x00d8] I3C Target Bus Idle Timing Register */
    __IO uint32_t SCLLOWTO;             /*!< [0x00dc] I3C Controller SCL Low Timeout Register */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE10[3];         /*!< [0x00e0] ~ [0x00e8] Reserved */
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t RELSDA;               /*!< [0x00ec] I3C Target Release SDA Timing Register */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE11;            /*!< [0x00f0] Reserved */
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t BTDELY;               /*!< [0x00f4] I3C HDR-BT Delay Byte Counter Register */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE12[14];        /*!< [0x00f8] ~ [0x012c] Reserved */
    /// @endcond //HIDDEN_SYMBOLS
    __O  uint32_t EXTDAT[8];            /*!< [0x0130] ~ [0x014c] I3C Target Mode Extended Cpmmand 0 ~ 7 Transfer Data Port Register */
    __I  uint32_t EXTTXTHS;             /*!< [0x0150] I3C Target Mode Extended Command Transmit Threshold Status Register */
    __I  uint32_t EXTDBSL[4];           /*!< [0x0154] ~ [0x0160] I3C Target Mode Extended Command Transmit Data Buffer Status Level Register 0 ~ 3 */
    EXTCMD_T      EXTCMD[8];            /*!< [0x0164] ~ [0x01c0] I3C Target Mode Extended Command 0 ~ 7 Register */
    __IO uint32_t EXTDBRST;             /*!< [0x01c4] I3C Target Mode Extended Command Transmit Data Buffer Reset Register */
    __I  uint32_t EXTCMDFS;             /*!< [0x01c8] I3C Target Mode Extended Command Finished Status Register */
    __IO uint32_t EXTTHLD;              /*!< [0x01cc] I3C Target Mode Extended Command Transmit and Receive Response Threshold Register */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE13[4];         /*!< [0x01d0] ~ [0x01dc] Reserved */
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t GRPASTS[4];           /*!< [0x01e0] ~ [0x01ec] I3C Target Mode Group Address 0 ~ 3 Status Register */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE14[4];         /*!< [0x01f0] ~ [0x01fc] Reserved */
    /// @endcond //HIDDEN_SYMBOLS
    TGTCHAR_T     TGTCHAR[7];           /*!< [0x0200] ~ [0x026c] I3C Target Device 1 ~ 7 Characteristic Register */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE15[4];         /*!< [0x0270] ~ [0x027c] Reserved */
    /// @endcond //HIDDEN_SYMBOLS
    __IO uint32_t TGTCFG[7];            /*!< [0x0280] ~ [0x0298] I3C Target Device 1 ~ 7 Configuration Register */
    /// @cond HIDDEN_SYMBOLS
    __I  uint32_t RESERVE16[153];       /*!< [0x029c] ~ [0x04fc] Reserved */
    /// @endcond //HIDDEN_SYMBOLS
    VTGTCFG_T     VTGTCFG[4];           /*!< [0x0500] ~ [0x056c] I3C Virtual Target 1 ~ 4 Configuration Register */

} I3C_T;

/**
    @addtogroup I3C_CONST I3C Bit Field Definition
    Constant Definitions for I3C Controller
    @{
*/

#define I3C_DEVCTL_IBAINCL_Pos          (0U)
#define I3C_DEVCTL_IBAINCL_Msk          (0x1UL << I3C_DEVCTL_IBAINCL_Pos)

#define I3C_DEVCTL_PENDINT_Pos          (3U)
#define I3C_DEVCTL_PENDINT_Msk          (0xFUL << I3C_DEVCTL_PENDINT_Pos)

#define I3C_DEVCTL_HJCTL_Pos            (8U)
#define I3C_DEVCTL_HJCTL_Msk            (0x1UL << I3C_DEVCTL_HJCTL_Pos)

#define I3C_DEVCTL_TSCEN_Pos            (11U)
#define I3C_DEVCTL_TSCEN_Msk            (0x1UL << I3C_DEVCTL_TSCEN_Pos)

#define I3C_DEVCTL_TSCAUTO_Pos          (12U)
#define I3C_DEVCTL_TSCAUTO_Msk          (0x1UL << I3C_DEVCTL_TSCAUTO_Pos)

#define I3C_DEVCTL_TSCCLR_Pos           (15U)
#define I3C_DEVCTL_TSCCLR_Msk           (0x1UL << I3C_DEVCTL_TSCCLR_Pos)

#define I3C_DEVCTL_IBIPSIZE_Pos         (16U)
#define I3C_DEVCTL_IBIPSIZE_Msk         (0xFFUL << I3C_DEVCTL_IBIPSIZE_Pos)

#define I3C_DEVCTL_IDLECNT_Pos          (24U)
#define I3C_DEVCTL_IDLECNT_Msk          (0x3UL << I3C_DEVCTL_IDLECNT_Pos)

#define I3C_DEVCTL_TPECEN_Pos           (26U)
#define I3C_DEVCTL_TPECEN_Msk           (0x1UL << I3C_DEVCTL_TPECEN_Pos)

#define I3C_DEVCTL_ADAPTIVE_Pos         (27U)
#define I3C_DEVCTL_ADAPTIVE_Msk         (0x1UL << I3C_DEVCTL_ADAPTIVE_Pos)

#define I3C_DEVCTL_DMAEN_Pos            (28U)
#define I3C_DEVCTL_DMAEN_Msk            (0x1UL << I3C_DEVCTL_DMAEN_Pos)

#define I3C_DEVCTL_ABORT_Pos            (29U)
#define I3C_DEVCTL_ABORT_Msk            (0x1UL << I3C_DEVCTL_ABORT_Pos)

#define I3C_DEVCTL_RESUME_Pos           (30U)
#define I3C_DEVCTL_RESUME_Msk           (0x1UL << I3C_DEVCTL_RESUME_Pos)

#define I3C_DEVCTL_ENABLE_Pos           (31U)
#define I3C_DEVCTL_ENABLE_Msk           (0x1UL << I3C_DEVCTL_ENABLE_Pos)

#define I3C_DEVADDR_SA_Pos              (0U)
#define I3C_DEVADDR_SA_Msk              (0x7FUL << I3C_DEVADDR_SA_Pos)

#define I3C_DEVADDR_SAVALID_Pos         (15U)
#define I3C_DEVADDR_SAVALID_Msk         (0x1UL << I3C_DEVADDR_SAVALID_Pos)

#define I3C_DEVADDR_DA_Pos              (16U)
#define I3C_DEVADDR_DA_Msk              (0x7FUL << I3C_DEVADDR_DA_Pos)

#define I3C_DEVADDR_DAVALID_Pos         (31U)
#define I3C_DEVADDR_DAVALID_Msk         (0x1UL << I3C_DEVADDR_DAVALID_Pos)

#define I3C_CMDQUE_CMDQUE_Pos           (0U)
#define I3C_CMDQUE_CMDQUE_Msk           (0xFFFFFFFFUL << I3C_CMDQUE_CMDQUE_Pos)

#define I3C_RESPQUE_RESPQUE_Pos         (0U)
#define I3C_RESPQUE_RESPQUE_Msk         (0xFFFFFFFFUL << I3C_RESPQUE_RESPQUE_Pos)

#define I3C_TXRXDAT_DAT_Pos             (0U)
#define I3C_TXRXDAT_DAT_Msk             (0xFFFFFFFFUL << I3C_TXRXDAT_DAT_Pos)

#define I3C_IBISTS_DATLEN_Pos           (0U)
#define I3C_IBISTS_DATLEN_Msk           (0xFFUL << I3C_IBISTS_DATLEN_Pos)

#define I3C_IBISTS_IBIID_Pos            (8U)
#define I3C_IBISTS_IBIID_Msk            (0xFFUL << I3C_IBISTS_IBIID_Pos)

#define I3C_IBISTS_IBISTS_Pos           (28U)
#define I3C_IBISTS_IBISTS_Msk           (0xFUL << I3C_IBISTS_IBISTS_Pos)

#define I3C_IBIQUE_IBIDAT_Pos           (0U)
#define I3C_IBIQUE_IBIDAT_Msk           (0xFFFFFFFFUL << I3C_IBIQUE_IBIDAT_Pos)

#define I3C_QUETHCTL_CMDETH_Pos         (0U)
#define I3C_QUETHCTL_CMDETH_Msk         (0xFFUL << I3C_QUETHCTL_CMDETH_Pos)

#define I3C_QUETHCTL_RESPTH_Pos         (8U)
#define I3C_QUETHCTL_RESPTH_Msk         (0xFFUL << I3C_QUETHCTL_RESPTH_Pos)

#define I3C_QUETHCTL_IBIDATTH_Pos       (16U)
#define I3C_QUETHCTL_IBIDATTH_Msk       (0xFFUL << I3C_QUETHCTL_IBIDATTH_Pos)

#define I3C_QUETHCTL_IBISTSTH_Pos       (24U)
#define I3C_QUETHCTL_IBISTSTH_Msk       (0xFFUL << I3C_QUETHCTL_IBISTSTH_Pos)

#define I3C_DBTHCTL_TXTH_Pos            (0U)
#define I3C_DBTHCTL_TXTH_Msk            (0x7UL << I3C_DBTHCTL_TXTH_Pos)

#define I3C_DBTHCTL_RXTH_Pos            (8U)
#define I3C_DBTHCTL_RXTH_Msk            (0x7UL << I3C_DBTHCTL_RXTH_Pos)

#define I3C_DBTHCTL_TXSTATH_Pos         (16U)
#define I3C_DBTHCTL_TXSTATH_Msk         (0x7UL << I3C_DBTHCTL_TXSTATH_Pos)

#define I3C_DBTHCTL_RXSTATH_Pos         (24U)
#define I3C_DBTHCTL_RXSTATH_Msk         (0x7UL << I3C_DBTHCTL_RXSTATH_Pos)

#define I3C_IBIQCTL_HJREJ_Pos           (0U)
#define I3C_IBIQCTL_HJREJ_Msk           (0x1UL << I3C_IBIQCTL_HJREJ_Pos)

#define I3C_IBIQCTL_MRREJ_Pos           (1U)
#define I3C_IBIQCTL_MRREJ_Msk           (0x1UL << I3C_IBIQCTL_MRREJ_Pos)

#define I3C_IBIQCTL_SIRREJ_Pos          (3U)
#define I3C_IBIQCTL_SIRREJ_Msk          (0x1UL << I3C_IBIQCTL_SIRREJ_Pos)

#define I3C_RSTCTL_SWRST_Pos            (0U)
#define I3C_RSTCTL_SWRST_Msk            (0x1UL << I3C_RSTCTL_SWRST_Pos)

#define I3C_RSTCTL_CMDRST_Pos           (1U)
#define I3C_RSTCTL_CMDRST_Msk           (0x1UL << I3C_RSTCTL_CMDRST_Pos)

#define I3C_RSTCTL_RESPRST_Pos          (2U)
#define I3C_RSTCTL_RESPRST_Msk          (0x1UL << I3C_RSTCTL_RESPRST_Pos)

#define I3C_RSTCTL_TXRST_Pos            (3U)
#define I3C_RSTCTL_TXRST_Msk            (0x1UL << I3C_RSTCTL_TXRST_Pos)

#define I3C_RSTCTL_RXRST_Pos            (4U)
#define I3C_RSTCTL_RXRST_Msk            (0x1UL << I3C_RSTCTL_RXRST_Pos)

#define I3C_RSTCTL_IBIQRST_Pos          (5U)
#define I3C_RSTCTL_IBIQRST_Msk          (0x1UL << I3C_RSTCTL_IBIQRST_Pos)

#define I3C_RSTCTL_BUSRSTPT_Pos         (28U)
#define I3C_RSTCTL_BUSRSTPT_Msk         (0x7UL << I3C_RSTCTL_BUSRSTPT_Pos)

#define I3C_RSTCTL_BUSRST_Pos           (31U)
#define I3C_RSTCTL_BUSRST_Msk           (0x1UL << I3C_RSTCTL_BUSRST_Pos)

#define I3C_SLVEVNTS_SIREN_Pos          (0U)
#define I3C_SLVEVNTS_SIREN_Msk          (0x1UL << I3C_SLVEVNTS_SIREN_Pos)

#define I3C_SLVEVNTS_MREN_Pos           (1U)
#define I3C_SLVEVNTS_MREN_Msk           (0x1UL << I3C_SLVEVNTS_MREN_Pos)

#define I3C_SLVEVNTS_HJEN_Pos           (3U)
#define I3C_SLVEVNTS_HJEN_Msk           (0x1UL << I3C_SLVEVNTS_HJEN_Pos)

#define I3C_SLVEVNTS_ACTSTSTS_Pos       (4U)
#define I3C_SLVEVNTS_ACTSTSTS_Msk       (0x3UL << I3C_SLVEVNTS_ACTSTSTS_Pos)

#define I3C_SLVEVNTS_MRLUPD_Pos         (6U)
#define I3C_SLVEVNTS_MRLUPD_Msk         (0x1UL << I3C_SLVEVNTS_MRLUPD_Pos)

#define I3C_SLVEVNTS_MWLUPD_Pos         (7U)
#define I3C_SLVEVNTS_MWLUPD_Msk         (0x1UL << I3C_SLVEVNTS_MWLUPD_Pos)

#define I3C_INTSTS_TXTH_Pos             (0U)
#define I3C_INTSTS_TXTH_Msk             (0x1UL << I3C_INTSTS_TXTH_Pos)

#define I3C_INTSTS_RXTH_Pos             (1U)
#define I3C_INTSTS_RXTH_Msk             (0x1UL << I3C_INTSTS_RXTH_Pos)

#define I3C_INTSTS_IBITH_Pos            (2U)
#define I3C_INTSTS_IBITH_Msk            (0x1UL << I3C_INTSTS_IBITH_Pos)

#define I3C_INTSTS_CMDRDY_Pos           (3U)
#define I3C_INTSTS_CMDRDY_Msk           (0x1UL << I3C_INTSTS_CMDRDY_Pos)

#define I3C_INTSTS_RESPRDY_Pos          (4U)
#define I3C_INTSTS_RESPRDY_Msk          (0x1UL << I3C_INTSTS_RESPRDY_Pos)

#define I3C_INTSTS_TFRABORT_Pos         (5U)
#define I3C_INTSTS_TFRABORT_Msk         (0x1UL << I3C_INTSTS_TFRABORT_Pos)

#define I3C_INTSTS_CCCUPD_Pos           (6U)
#define I3C_INTSTS_CCCUPD_Msk           (0x1UL << I3C_INTSTS_CCCUPD_Pos)

#define I3C_INTSTS_DAA_Pos              (8U)
#define I3C_INTSTS_DAA_Msk              (0x1UL << I3C_INTSTS_DAA_Pos)

#define I3C_INTSTS_TFRERR_Pos           (9U)
#define I3C_INTSTS_TFRERR_Msk           (0x1UL << I3C_INTSTS_TFRERR_Pos)

#define I3C_INTSTS_DEFTGTS_Pos          (10U)
#define I3C_INTSTS_DEFTGTS_Msk          (0x1UL << I3C_INTSTS_DEFTGTS_Pos)

#define I3C_INTSTS_READREQ_Pos          (11U)
#define I3C_INTSTS_READREQ_Msk          (0x1UL << I3C_INTSTS_READREQ_Pos)

#define I3C_INTSTS_IBIUPD_Pos           (12U)
#define I3C_INTSTS_IBIUPD_Msk           (0x1UL << I3C_INTSTS_IBIUPD_Pos)

#define I3C_INTSTS_BUSOWNER_Pos         (13U)
#define I3C_INTSTS_BUSOWNER_Msk         (0x1UL << I3C_INTSTS_BUSOWNER_Pos)

#define I3C_INTSTS_BUSRSTDN_Pos         (15U)
#define I3C_INTSTS_BUSRSTDN_Msk         (0x1UL << I3C_INTSTS_BUSRSTDN_Pos)

#define I3C_INTSTS_STADET_Pos           (16U)
#define I3C_INTSTS_STADET_Msk           (0x1UL << I3C_INTSTS_STADET_Pos)

#define I3C_INTSTS_RSTPTDET_Pos         (17U)
#define I3C_INTSTS_RSTPTDET_Msk         (0x1UL << I3C_INTSTS_RSTPTDET_Pos)

#define I3C_INTSTS_GRPADDRA_Pos         (18U)
#define I3C_INTSTS_GRPADDRA_Msk         (0x1UL << I3C_INTSTS_GRPADDRA_Pos)

#define I3C_INTSTS_SDARES_Pos           (19U)
#define I3C_INTSTS_SDARES_Msk           (0x1UL << I3C_INTSTS_SDARES_Pos)

#define I3C_INTSTS_EXTFINS_Pos          (20U)
#define I3C_INTSTS_EXTFINS_Msk          (0x1UL << I3C_INTSTS_EXTFINS_Pos)

#define I3C_INTSTS_EXTTXTH_Pos          (21U)
#define I3C_INTSTS_EXTTXTH_Msk          (0x1UL << I3C_INTSTS_EXTTXTH_Pos)

#define I3C_INTSTSEN_TXTH_Pos           (0U)
#define I3C_INTSTSEN_TXTH_Msk           (0x1UL << I3C_INTSTSEN_TXTH_Pos)

#define I3C_INTSTSEN_RXTH_Pos           (1U)
#define I3C_INTSTSEN_RXTH_Msk           (0x1UL << I3C_INTSTSEN_RXTH_Pos)

#define I3C_INTSTSEN_IBITH_Pos          (2U)
#define I3C_INTSTSEN_IBITH_Msk          (0x1UL << I3C_INTSTSEN_IBITH_Pos)

#define I3C_INTSTSEN_CMDRDY_Pos         (3U)
#define I3C_INTSTSEN_CMDRDY_Msk         (0x1UL << I3C_INTSTSEN_CMDRDY_Pos)

#define I3C_INTSTSEN_RESPRDY_Pos        (4U)
#define I3C_INTSTSEN_RESPRDY_Msk        (0x1UL << I3C_INTSTSEN_RESPRDY_Pos)

#define I3C_INTSTSEN_TFRABORT_Pos       (5U)
#define I3C_INTSTSEN_TFRABORT_Msk       (0x1UL << I3C_INTSTSEN_TFRABORT_Pos)

#define I3C_INTSTSEN_CCCUPD_Pos         (6U)
#define I3C_INTSTSEN_CCCUPD_Msk         (0x1UL << I3C_INTSTSEN_CCCUPD_Pos)

#define I3C_INTSTSEN_DAA_Pos            (8U)
#define I3C_INTSTSEN_DAA_Msk            (0x1UL << I3C_INTSTSEN_DAA_Pos)

#define I3C_INTSTSEN_TFRERR_Pos         (9U)
#define I3C_INTSTSEN_TFRERR_Msk         (0x1UL << I3C_INTSTSEN_TFRERR_Pos)

#define I3C_INTSTSEN_DEFTGTS_Pos        (10U)
#define I3C_INTSTSEN_DEFTGTS_Msk        (0x1UL << I3C_INTSTSEN_DEFTGTS_Pos)

#define I3C_INTSTSEN_READREQ_Pos        (11U)
#define I3C_INTSTSEN_READREQ_Msk        (0x1UL << I3C_INTSTSEN_READREQ_Pos)

#define I3C_INTSTSEN_IBIUPD_Pos         (12U)
#define I3C_INTSTSEN_IBIUPD_Msk         (0x1UL << I3C_INTSTSEN_IBIUPD_Pos)

#define I3C_INTSTSEN_BUSOWNER_Pos       (13U)
#define I3C_INTSTSEN_BUSOWNER_Msk       (0x1UL << I3C_INTSTSEN_BUSOWNER_Pos)

#define I3C_INTSTSEN_BUSRSTDN_Pos       (15U)
#define I3C_INTSTSEN_BUSRSTDN_Msk       (0x1UL << I3C_INTSTSEN_BUSRSTDN_Pos)

#define I3C_INTSTSEN_STADET_Pos         (16U)
#define I3C_INTSTSEN_STADET_Msk         (0x1UL << I3C_INTSTSEN_STADET_Pos)

#define I3C_INTSTSEN_RSTPTDET_Pos       (17U)
#define I3C_INTSTSEN_RSTPTDET_Msk       (0x1UL << I3C_INTSTSEN_RSTPTDET_Pos)

#define I3C_INTSTSEN_GRPADDRA_Pos       (18U)
#define I3C_INTSTSEN_GRPADDRA_Msk       (0x1UL << I3C_INTSTSEN_GRPADDRA_Pos)

#define I3C_INTSTSEN_SDARES_Pos         (19U)
#define I3C_INTSTSEN_SDARES_Msk         (0x1UL << I3C_INTSTSEN_SDARES_Pos)

#define I3C_INTSTSEN_EXTFINS_Pos        (20U)
#define I3C_INTSTSEN_EXTFINS_Msk        (0x1UL << I3C_INTSTSEN_EXTFINS_Pos)

#define I3C_INTSTSEN_EXTTXTH_Pos        (21U)
#define I3C_INTSTSEN_EXTTXTH_Msk        (0x1UL << I3C_INTSTSEN_EXTTXTH_Pos)

#define I3C_INTEN_TXTH_Pos              (0U)
#define I3C_INTEN_TXTH_Msk              (0x1UL << I3C_INTEN_TXTH_Pos)

#define I3C_INTEN_RXTH_Pos              (1U)
#define I3C_INTEN_RXTH_Msk              (0x1UL << I3C_INTEN_RXTH_Pos)

#define I3C_INTEN_IBITH_Pos             (2U)
#define I3C_INTEN_IBITH_Msk             (0x1UL << I3C_INTEN_IBITH_Pos)

#define I3C_INTEN_CMDRDY_Pos            (3U)
#define I3C_INTEN_CMDRDY_Msk            (0x1UL << I3C_INTEN_CMDRDY_Pos)

#define I3C_INTEN_RESPRDY_Pos           (4U)
#define I3C_INTEN_RESPRDY_Msk           (0x1UL << I3C_INTEN_RESPRDY_Pos)

#define I3C_INTEN_TFRABORT_Pos          (5U)
#define I3C_INTEN_TFRABORT_Msk          (0x1UL << I3C_INTEN_TFRABORT_Pos)

#define I3C_INTEN_CCCUPD_Pos            (6U)
#define I3C_INTEN_CCCUPD_Msk            (0x1UL << I3C_INTEN_CCCUPD_Pos)

#define I3C_INTEN_DAA_Pos               (8U)
#define I3C_INTEN_DAA_Msk               (0x1UL << I3C_INTEN_DAA_Pos)

#define I3C_INTEN_TFRERR_Pos            (9U)
#define I3C_INTEN_TFRERR_Msk            (0x1UL << I3C_INTEN_TFRERR_Pos)

#define I3C_INTEN_DEFTGTS_Pos           (10U)
#define I3C_INTEN_DEFTGTS_Msk           (0x1UL << I3C_INTEN_DEFTGTS_Pos)

#define I3C_INTEN_READREQ_Pos           (11U)
#define I3C_INTEN_READREQ_Msk           (0x1UL << I3C_INTEN_READREQ_Pos)

#define I3C_INTEN_IBIUPD_Pos            (12U)
#define I3C_INTEN_IBIUPD_Msk            (0x1UL << I3C_INTEN_IBIUPD_Pos)

#define I3C_INTEN_BUSOWNER_Pos          (13U)
#define I3C_INTEN_BUSOWNER_Msk          (0x1UL << I3C_INTEN_BUSOWNER_Pos)

#define I3C_INTEN_BUSRSTDN_Pos          (15U)
#define I3C_INTEN_BUSRSTDN_Msk          (0x1UL << I3C_INTEN_BUSRSTDN_Pos)

#define I3C_INTEN_STADET_Pos            (16U)
#define I3C_INTEN_STADET_Msk            (0x1UL << I3C_INTEN_STADET_Pos)

#define I3C_INTEN_RSTPTDET_Pos          (17U)
#define I3C_INTEN_RSTPTDET_Msk          (0x1UL << I3C_INTEN_RSTPTDET_Pos)

#define I3C_INTEN_GRPADDRA_Pos          (18U)
#define I3C_INTEN_GRPADDRA_Msk          (0x1UL << I3C_INTEN_GRPADDRA_Pos)

#define I3C_INTEN_SDARES_Pos            (19U)
#define I3C_INTEN_SDARES_Msk            (0x1UL << I3C_INTEN_SDARES_Pos)

#define I3C_INTEN_EXTFINS_Pos           (20U)
#define I3C_INTEN_EXTFINS_Msk           (0x1UL << I3C_INTEN_EXTFINS_Pos)

#define I3C_INTEN_EXTTXTH_Pos           (21U)
#define I3C_INTEN_EXTTXTH_Msk           (0x1UL << I3C_INTEN_EXTTXTH_Pos)

#define I3C_QUESTSLV_CMDELOC_Pos        (0U)
#define I3C_QUESTSLV_CMDELOC_Msk        (0xFFUL << I3C_QUESTSLV_CMDELOC_Pos)

#define I3C_QUESTSLV_RESPLV_Pos         (8U)
#define I3C_QUESTSLV_RESPLV_Msk         (0xFFUL << I3C_QUESTSLV_RESPLV_Pos)

#define I3C_QUESTSLV_IBIBUFLV_Pos       (16U)
#define I3C_QUESTSLV_IBIBUFLV_Msk       (0xFFUL << I3C_QUESTSLV_IBIBUFLV_Pos)

#define I3C_QUESTSLV_IBISCNT_Pos        (24U)
#define I3C_QUESTSLV_IBISCNT_Msk        (0x1FUL << I3C_QUESTSLV_IBISCNT_Pos)

#define I3C_DBSTSLV_TXELV_Pos           (0U)
#define I3C_DBSTSLV_TXELV_Msk           (0xFFUL << I3C_DBSTSLV_TXELV_Pos)

#define I3C_DBSTSLV_RXLV_Pos            (16U)
#define I3C_DBSTSLV_RXLV_Msk            (0xFFUL << I3C_DBSTSLV_RXLV_Pos)

#define I3C_PRESENTS_CTRACTS_Pos        (2U)
#define I3C_PRESENTS_CTRACTS_Msk        (0x1UL << I3C_PRESENTS_CTRACTS_Pos)

#define I3C_PRESENTS_TFRTYPE_Pos        (8U)
#define I3C_PRESENTS_TFRTYPE_Msk        (0x3FUL << I3C_PRESENTS_TFRTYPE_Pos)

#define I3C_PRESENTS_CTRTFRS_Pos        (16U)
#define I3C_PRESENTS_CTRTFRS_Msk        (0x3FUL << I3C_PRESENTS_CTRTFRS_Pos)

#define I3C_PRESENTS_TID_Pos            (24U)
#define I3C_PRESENTS_TID_Msk            (0xFUL << I3C_PRESENTS_TID_Pos)

#define I3C_PRESENTS_CTRIDLES_Pos       (28U)
#define I3C_PRESENTS_CTRIDLES_Msk       (0x1UL << I3C_PRESENTS_CTRIDLES_Pos)

#define I3C_CCCDEVS_PENDINT_Pos         (0U)
#define I3C_CCCDEVS_PENDINT_Msk         (0xFUL << I3C_CCCDEVS_PENDINT_Pos)

#define I3C_CCCDEVS_PROTERR_Pos         (5U)
#define I3C_CCCDEVS_PROTERR_Msk         (0x1UL << I3C_CCCDEVS_PROTERR_Pos)

#define I3C_CCCDEVS_ACTMODE_Pos         (6U)
#define I3C_CCCDEVS_ACTMODE_Msk         (0x3UL << I3C_CCCDEVS_ACTMODE_Pos)

#define I3C_CCCDEVS_UDFERR_Pos          (8U)
#define I3C_CCCDEVS_UDFERR_Msk          (0x1UL << I3C_CCCDEVS_UDFERR_Pos)

#define I3C_CCCDEVS_SLVBUSY_Pos         (9U)
#define I3C_CCCDEVS_SLVBUSY_Msk         (0x1UL << I3C_CCCDEVS_SLVBUSY_Pos)

#define I3C_CCCDEVS_OVFERR_Pos          (10U)
#define I3C_CCCDEVS_OVFERR_Msk          (0x1UL << I3C_CCCDEVS_OVFERR_Pos)

#define I3C_CCCDEVS_DATNRDY_Pos         (11U)
#define I3C_CCCDEVS_DATNRDY_Msk         (0x1UL << I3C_CCCDEVS_DATNRDY_Pos)

#define I3C_CCCDEVS_BFNAVAIL_Pos        (12U)
#define I3C_CCCDEVS_BFNAVAIL_Msk        (0x1UL << I3C_CCCDEVS_BFNAVAIL_Pos)

#define I3C_CCCDEVS_FRAMEERR_Pos        (13U)
#define I3C_CCCDEVS_FRAMEERR_Msk        (0x1UL << I3C_CCCDEVS_FRAMEERR_Pos)

#define I3C_SLVMID_PIDTYPE_Pos          (0U)
#define I3C_SLVMID_PIDTYPE_Msk          (0x1UL << I3C_SLVMID_PIDTYPE_Pos)

#define I3C_SLVMID_MID_Pos              (1U)
#define I3C_SLVMID_MID_Msk              (0x7FFFUL << I3C_SLVMID_MID_Pos)

#define I3C_SLVPID_ADDLMEAN_Pos         (0U)
#define I3C_SLVPID_ADDLMEAN_Msk         (0xFFFUL << I3C_SLVPID_ADDLMEAN_Pos)

#define I3C_SVLPID_INSTID_Pos           (12U)
#define I3C_SVLPID_INSTID_Msk           (0xFUL << I3C_SVLPID_INSTID_Pos)

#define I3C_SLVPID_PARTID_Pos           (16U)
#define I3C_SLVPID_PARTID_Msk           (0xFFFFUL << I3C_SLVPID_PARTID_Pos)

#define I3C_SLVCHAR_MXDSLIMT_Pos        (0U)
#define I3C_SLVCHAR_MXDSLIMT_Msk        (0x1UL << I3C_SLVCHAR_MXDSLIMT_Pos)

#define I3C_SLVCHAR_IBICAP_Pos          (1U)
#define I3C_SLVCHAR_IBICAP_Msk          (0x1UL << I3C_SLVCHAR_IBICAP_Pos)

#define I3C_SLVCHAR_IBIPL_Pos           (2U)
#define I3C_SLVCHAR_IBIPL_Msk           (0x1UL << I3C_SLVCHAR_IBIPL_Pos)

#define I3C_SLVCHAR_OLINECAP_Pos        (3U)
#define I3C_SLVCHAR_OLINECAP_Msk        (0x1UL << I3C_SLVCHAR_OLINECAP_Pos)

#define I3C_SLVCHAR_BRIDGEID_Pos        (4U)
#define I3C_SLVCHAR_BRIDGEID_Msk        (0x1UL << I3C_SLVCHAR_BRIDGEID_Pos)

#define I3C_SLVCHAR_HDRCAP_Pos          (5U)
#define I3C_SLVCHAR_HDRCAP_Msk          (0x1UL << I3C_SLVCHAR_HDRCAP_Pos)

#define I3C_SLVCHAR_DEVROLE_Pos         (6U)
#define I3C_SLVCHAR_DEVROLE_Msk         (0x3UL << I3C_SLVCHAR_DEVROLE_Pos)

#define I3C_SLVCHAR_DCR_Pos             (8U)
#define I3C_SLVCHAR_DCR_Msk             (0xFFUL << I3C_SLVCHAR_DCR_Pos)

#define I3C_SLVCHAR_HDRCAPV_Pos         (16U)
#define I3C_SLVCHAR_HDRCAPV_Msk         (0xFFUL << I3C_SLVCHAR_HDRCAPV_Pos)

#define I3C_SLVMXLEN_MWL_Pos            (0U)
#define I3C_SLVMXLEN_MWL_Msk            (0xFFFFUL << I3C_SLVMXLEN_MWL_Pos)

#define I3C_SLVMXLEN_MRL_Pos            (16U)
#define I3C_SLVMXLEN_MRL_Msk            (0xFFFFUL << I3C_SLVMXLEN_MRL_Pos)

#define I3C_MXDS_MXWR_Pos               (0U)
#define I3C_MXDS_MXWR_Msk               (0x7UL << I3C_MXDS_MXWR_Pos)

#define I3C_MXDS_DEFBYTE_Pos            (3U)
#define I3C_MXDS_DEFBYTE_Msk            (0x1UL << I3C_MXDS_DEFBYTE_Pos)

#define I3C_MXDS_MXRD_Pos               (8U)
#define I3C_MXDS_MXRD_Msk               (0x7UL << I3C_MXDS_MXRD_Pos)

#define I3C_MXDS_STPPERM_Pos            (19U)
#define I3C_MXDS_STPPERM_Msk            (0x1UL << I3C_MXDS_STPPERM_Pos)

#define I3C_MXDS_ACTST_Pos              (24U)
#define I3C_MXDS_ACTST_Msk              (0x3UL << I3C_MXDS_ACTST_Pos)

#define I3C_MXDS_SETACTST_Pos           (26U)
#define I3C_MXDS_SETACTST_Msk           (0x1UL << I3C_MXDS_SETACTST_Pos)

#define I3C_SIR_EN_Pos                  (0U)
#define I3C_SIR_EN_Msk                  (0x1UL << I3C_SIR_EN_Pos)

#define I3C_SIR_CTL_Pos                 (1U)
#define I3C_SIR_CTL_Msk                 (0x3UL << I3C_SIR_CTL_Pos)

#define I3C_SIR_MR_Pos                  (3U)
#define I3C_SIR_MR_Msk                  (0x1UL << I3C_SIR_MR_Pos)

#define I3C_SIR_TS_Pos                  (4U)
#define I3C_SIR_TS_Msk                  (0x1UL << I3C_SIR_TS_Pos)

#define I3C_SIR_CE3REC_Pos              (7U)
#define I3C_SIR_CE3REC_Msk              (0x1UL << I3C_SIR_CE3REC_Pos)

#define I3C_SIR_MDB_Pos                 (8U)
#define I3C_SIR_MDB_Msk                 (0xFFUL << I3C_SIR_MDB_Pos)

#define I3C_SIR_DATLEN_Pos              (16U)
#define I3C_SIR_DATLEN_Msk              (0xFFUL << I3C_SIR_DATLEN_Pos)

#define I3C_SIR_TGTIDX_Pos              (28U)
#define I3C_SIR_TGTIDX_Msk              (0xFUL << I3C_SIR_TGTIDX_Pos)

#define I3C_SIRDAT_DAT0_Pos             (0U)
#define I3C_SIRDAT_DAT0_Msk             (0xFFUL << I3C_SIRDAT_DAT0_Pos)

#define I3C_SIRDAT_DAT1_Pos             (8U)
#define I3C_SIRDAT_DAT1_Msk             (0xFFUL << I3C_SIRDAT_DAT1_Pos)

#define I3C_SIRDAT_DAT2_Pos             (16U)
#define I3C_SIRDAT_DAT2_Msk             (0xFFUL << I3C_SIRDAT_DAT2_Pos)

#define I3C_SIRDAT_DAT3_Pos             (24U)
#define I3C_SIRDAT_DAT3_Msk             (0xFFUL << I3C_SIRDAT_DAT3_Pos)

#define I3C_SIRRESP_IBISTS_Pos          (0U)
#define I3C_SIRRESP_IBISTS_Msk          (0x7UL << I3C_SIRRESP_IBISTS_Pos)

#define I3C_SIRRESP_DATLEN_Pos          (8U)
#define I3C_SIRRESP_DATLEN_Msk          (0xFFFFUL << I3C_SIRRESP_DATLEN_Pos)

#define I3C_INSTSTS_INTERSTS_Pos        (0U)
#define I3C_INSTSTS_INTERSTS_Msk        (0x3FUL << I3C_INSTSTS_INTERSTS_Pos)

#define I3C_INSTSTS_CCCING_Pos          (6U)
#define I3C_INSTSTS_CCCING_Msk          (0x1UL << I3C_INSTSTS_CCCING_Pos)

#define I3C_INSTSTS_WRING_Pos           (7U)
#define I3C_INSTSTS_WRING_Msk           (0x1UL << I3C_INSTSTS_WRING_Pos)

#define I3C_INSTSTS_WAKEUP_Pos          (8U)
#define I3C_INSTSTS_WAKEUP_Msk          (0x1UL << I3C_INSTSTS_WAKEUP_Pos)

#define I3C_DEVCTLE_OPERMODE_Pos        (0U)
#define I3C_DEVCTLE_OPERMODE_Msk        (0x3UL << I3C_DEVCTLE_OPERMODE_Pos)

#define I3C_DEVCTLE_MRACKCTL_Pos        (3U)
#define I3C_DEVCTLE_MRACKCTL_Msk        (0x1UL << I3C_DEVCTLE_MRACKCTL_Pos)

#define I3C_SCLOD_ODLCNT_Pos            (0U)
#define I3C_SCLOD_ODLCNT_Msk            (0xFFUL << I3C_SCLOD_ODLCNT_Pos)

#define I3C_SCLOD_ODHCNT_Pos            (16U)
#define I3C_SCLOD_ODHCNT_Msk            (0xFFUL << I3C_SCLOD_ODHCNT_Pos)

#define I3C_SCLPP_PPLCNT_Pos            (0U)
#define I3C_SCLPP_PPLCNT_Msk            (0xFFUL << I3C_SCLPP_PPLCNT_Pos)

#define I3C_SCLPP_PPHCNT_Pos            (16U)
#define I3C_SCLPP_PPHCNT_Msk            (0xFFUL << I3C_SCLPP_PPHCNT_Pos)

#define I3C_SCLFM_FMLCNT_Pos            (0U)
#define I3C_SCLFM_FMLCNT_Msk            (0xFFFFUL << I3C_SCLFM_FMLCNT_Pos)

#define I3C_SCLFM_FMHCNT_Pos            (16U)
#define I3C_SCLFM_FMHCNT_Msk            (0xFFFFUL << I3C_SCLFM_FMHCNT_Pos)

#define I3C_SCLFMP_FMPLCNT_Pos          (0U)
#define I3C_SCLFMP_FMPLCNT_Msk          (0xFFFFUL << I3C_SCLFMP_FMPLCNT_Pos)

#define I3C_SCLFMP_FMPHCNT_Pos          (16U)
#define I3C_SCLFMP_FMPHCNT_Msk          (0xFFUL << I3C_SCLFMP_FMPHCNT_Pos)

#define I3C_SCLEXTLO_EXTLCNT1_Pos       (0U)
#define I3C_SCLEXTLO_EXTLCNT1_Msk       (0xFFUL << I3C_SCLEXTLO_EXTLCNT1_Pos)

#define I3C_SCLEXTLO_EXTLCNT2_Pos       (8U)
#define I3C_SCLEXTLO_EXTLCNT2_Msk       (0xFFUL << I3C_SCLEXTLO_EXTLCNT2_Pos)

#define I3C_SCLEXTLO_EXTLCNT3_Pos       (16U)
#define I3C_SCLEXTLO_EXTLCNT3_Msk       (0xFFUL << I3C_SCLEXTLO_EXTLCNT3_Pos)

#define I3C_SCLEXTLO_EXTLCNT4_Pos       (24U)
#define I3C_SCLEXTLO_EXTLCNT4_Msk       (0xFFUL << I3C_SCLEXTLO_EXTLCNT4_Pos)

#define I3C_SCLEXTTB_TERMCNT_Pos        (0U)
#define I3C_SCLEXTTB_TERMCNTM_Msk       (0xFUL << I3C_SCLEXTTB_TERMCNT_Pos)

#define I3C_SCLEXTTB_STPCNT_Pos         (28U)
#define I3C_SCLEXTTB_STPCNT_Msk         (0xFUL << I3C_SCLEXTTB_STPCNT_Pos)

#define I3C_SDAHOLD_SDAOPDLY_Pos        (0U)
#define I3C_SDAHOLD_SDAOPDLY_Msk        (0x7UL << I3C_SDAHOLD_SDAOPDLY_Pos)

#define I3C_SDAHOLD_SDAPODLY_Pos        (8U)
#define I3C_SDAHOLD_SDAPODLY_Msk        (0x7UL << I3C_SDAHOLD_SDAPODLY_Pos)

#define I3C_SDAHOLD_TXHOLD_Pos          (16U)
#define I3C_SDAHOLD_TXHOLD_Msk          (0x7UL << I3C_SDAHOLD_TXHOLD_Pos)

#define I3C_BUSFAT_FREETC_Pos           (0U)
#define I3C_BUSFAT_FREETC_Msk           (0xFFFFUL << I3C_BUSFAT_FREETC_Pos)

#define I3C_BUSFAT_AVAILTC_Pos          (16U)
#define I3C_BUSFAT_AVAILTC_Msk          (0xFFFFUL << I3C_BUSFAT_AVAILTC_Pos)

#define I3C_BUSIDLET_IDLETC_Pos         (0U)
#define I3C_BUSIDLET_IDLETC_Msk         (0xFFFFFUL << I3C_BUSIDLET_IDLETC_Pos)

#define I3C_SCLLOWTO_LOWCNT_Pos         (0U)
#define I3C_SCLLOWTO_LOWCNT_Msk         (0x3FFFFFFUL << I3C_SCLLOWTO_LOWCNT_Pos)

#define I3C_RELSDA_RELSDATC_Pos         (0U)
#define I3C_RELSDA_RELSDATC_Msk         (0xFFFFFUL << I3C_RELSDA_RELSDATC_Pos)

#define I3C_BTDELY_DLYBCNT_Pos          (0U)
#define I3C_BTDELY_DLYBCNT_Msk          (0x7FFUL << I3C_BTDELY_DLYBCNT_Pos)

#define I3C_EXTDAT_EXTDAT_Pos           (0U)
#define I3C_EXTDAT_EXTDAT_Msk           (0xFFFFFFFFUL << I3C_EXTDAT_EXTDAT_Pos)

#define I3C_EXTTXTHS_ECMDTTS0_Pos       (0U)
#define I3C_EXTTXTHS_ECMDTTS0_Msk       (0x1UL << I3C_EXTTXTHS_ECMDTTS0_Pos)

#define I3C_EXTTXTHS_ECMDTTS1_Pos       (1U)
#define I3C_EXTTXTHS_ECMDTTS1_Msk       (0x1UL << I3C_EXTTXTHS_ECMDTTS1_Pos)

#define I3C_EXTTXTHS_ECMDTTS2_Pos       (2U)
#define I3C_EXTTXTHS_ECMDTTS2_Msk       (0x1UL << I3C_EXTTXTHS_ECMDTTS2_Pos)

#define I3C_EXTTXTHS_ECMDTTS3_Pos       (3U)
#define I3C_EXTTXTHS_ECMDTTS3_Msk       (0x1UL << I3C_EXTTXTHS_ECMDTTS3_Pos)

#define I3C_EXTTXTHS_ECMDTTS4_Pos       (4U)
#define I3C_EXTTXTHS_ECMDTTS4_Msk       (0x1UL << I3C_EXTTXTHS_ECMDTTS4_Pos)

#define I3C_EXTTXTHS_ECMDTTS5_Pos       (5U)
#define I3C_EXTTXTHS_ECMDTTS5_Msk       (0x1UL << I3C_EXTTXTHS_ECMDTTS5_Pos)

#define I3C_EXTTXTHS_ECMDTTS6_Pos       (6U)
#define I3C_EXTTXTHS_ECMDTTS6_Msk       (0x1UL << I3C_EXTTXTHS_ECMDTTS6_Pos)

#define I3C_EXTTXTHS_ECMDTTS7_Pos       (7U)
#define I3C_EXTTXTHS_ECMDTTS7_Msk       (0x1UL << I3C_EXTTXTHS_ECMDTTS7_Pos)

#define I3C_EXTDBSL0_TDBE0LVL_Pos       (0U)
#define I3C_EXTDBSL0_TDBE0LVL_Msk       (0xFFUL << I3C_EXTDBSL0_TDBE0LVL_Pos)

#define I3C_EXTDBSL0_TDBE1LVL_Pos       (16U)
#define I3C_EXTDBSL0_TDBE1LVL_Msk       (0xFFUL << I3C_EXTDBSL0_TDBE1LVL_Pos)

#define I3C_EXTDBSL1_TDBE2LVL_Pos       (0U)
#define I3C_EXTDBSL1_TDBE2LVL_Msk       (0xFFUL << I3C_EXTDBSL1_TDBE2LVL_Pos)

#define I3C_EXTDBSL1_TDBE3LVL_Pos       (16U)
#define I3C_EXTDBSL1_TDBE3LVL_Msk       (0xFFUL << I3C_EXTDBSL1_TDBE3LVL_Pos)

#define I3C_EXTDBSL2_TDBE4LVL_Pos       (0U)
#define I3C_EXTDBSL2_TDBE4LVL_Msk       (0xFFUL << I3C_EXTDBSL2_TDBE4LVL_Pos)

#define I3C_EXTDBSL2_TDBE5LVL_Pos       (16U)
#define I3C_EXTDBSL2_TDBE5LVL_Msk       (0xFFUL << I3C_EXTDBSL2_TDBE5LVL_Pos)

#define I3C_EXTDBSL3_TDBE6LVL_Pos       (0U)
#define I3C_EXTDBSL3_TDBE6LVL_Msk       (0xFFUL << I3C_EXTDBSL3_TDBE6LVL_Pos)

#define I3C_EXTDBSL3_TDBE7LVL_Pos       (16U)
#define I3C_EXTDBSL3_TDBE7LVL_Msk       (0xFFUL << I3C_EXTDBSL3_TDBE7LVL_Pos)

#define I3C_EXTCMDW1_CMDWORD1_Pos       (0U)
#define I3C_EXTCMDW1_CMDWORD1_Msk       (0xFFFFFFFFUL << I3C_EXTCMDW1_CMDWORD1_Pos)

#define I3C_EXTCMDW2_CMDWORD2_Pos       (0U)
#define I3C_EXTCMDW2_CMDWORD2_Msk       (0xFFFFFFFFUL << I3C_EXTCMDW2_CMDWORD2_Pos)

#define I3C_EXTCMDW3_CMDWORD3_Pos       (0U)
#define I3C_EXTCMDW3_CMDWORD3_Msk       (0xFFFFFFFFUL << I3C_EXTCMDW3_CMDWORD3_Pos)

#define I3C_EXTDBRST_EXT0RST_Pos        (0U)
#define I3C_EXTDBRST_EXT0RST_Msk        (0x1UL << I3C_EXTDBRST_EXT0RST_Pos)

#define I3C_EXTDBRST_EXT1RST_Pos        (1U)
#define I3C_EXTDBRST_EXT1RST_Msk        (0x1UL << I3C_EXTDBRST_EXT1RST_Pos)

#define I3C_EXTDBRST_EXT2RST_Pos        (2U)
#define I3C_EXTDBRST_EXT2RST_Msk        (0x1UL << I3C_EXTDBRST_EXT2RST_Pos)

#define I3C_EXTDBRST_EXT3RST_Pos        (3U)
#define I3C_EXTDBRST_EXT3RST_Msk        (0x1UL << I3C_EXTDBRST_EXT3RST_Pos)

#define I3C_EXTDBRST_EXT4RST_Pos        (4U)
#define I3C_EXTDBRST_EXT4RST_Msk        (0x1UL << I3C_EXTDBRST_EXT4RST_Pos)

#define I3C_EXTDBRST_EXT5RST_Pos        (5U)
#define I3C_EXTDBRST_EXT5RST_Msk        (0x1UL << I3C_EXTDBRST_EXT5RST_Pos)

#define I3C_EXTDBRST_EXT6RST_Pos        (6U)
#define I3C_EXTDBRST_EXT6RST_Msk        (0x1UL << I3C_EXTDBRST_EXT6RST_Pos)

#define I3C_EXTDBRST_EXT7RST_Pos        (7U)
#define I3C_EXTDBRST_EXT7RST_Msk        (0x1UL << I3C_EXTDBRST_EXT7RST_Pos)

#define I3C_EXTCMDFS_ECMD0FIN_Pos       (0U)
#define I3C_EXTCMDFS_ECMD0FIN_Msk       (0x1UL << I3C_EXTCMDFS_ECMD0FIN_Pos)

#define I3C_EXTCMDFS_ECMD1FIN_Pos       (1U)
#define I3C_EXTCMDFS_ECMD1FIN_Msk       (0x1UL << I3C_EXTCMDFS_ECMD1FIN_Pos)

#define I3C_EXTCMDFS_ECMD2FIN_Pos       (2U)
#define I3C_EXTCMDFS_ECMD2FIN_Msk       (0x1UL << I3C_EXTCMDFS_ECMD2FIN_Pos)

#define I3C_EXTCMDFS_ECMD3FIN_Pos       (3U)
#define I3C_EXTCMDFS_ECMD3FIN_Msk       (0x1UL << I3C_EXTCMDFS_ECMD3FIN_Pos)

#define I3C_EXTCMDFS_ECMD4FIN_Pos       (4U)
#define I3C_EXTCMDFS_ECMD4FIN_Msk       (0x1UL << I3C_EXTCMDFS_ECMD4FIN_Pos)

#define I3C_EXTCMDFS_ECMD5FIN_Pos       (5U)
#define I3C_EXTCMDFS_ECMD5FIN_Msk       (0x1UL << I3C_EXTCMDFS_ECMD5FIN_Pos)

#define I3C_EXTCMDFS_ECMD6FIN_Pos       (6U)
#define I3C_EXTCMDFS_ECMD6FIN_Msk       (0x1UL << I3C_EXTCMDFS_ECMD6FIN_Pos)

#define I3C_EXTCMDFS_ECMD7FIN_Pos       (7U)
#define I3C_EXTCMDFS_ECMD7FIN_Msk       (0x1UL << I3C_EXTCMDFS_ECMD7FIN_Pos)

#define I3C_EXTTHLD_RXRSPTH_Pos         (0U)
#define I3C_EXTTHLD_RXRSPTH_Msk         (0x7UL << I3C_EXTTHLD_RXRSPTH_Pos)

#define I3C_EXTTHLD_TXEBTH_Pos          (8U)
#define I3C_EXTTHLD_TXEBTH_Msk          (0x7UL << I3C_EXTTHLD_TXEBTH_Pos)

#define I3C_GRPASTS_GRPADDR_Pos         (0U)
#define I3C_GRPASTS_GRPADDR_Msk         (0x7FUL << I3C_GRPASTS_GRPADDR_Pos)

#define I3C_GRPASTS_GRPAVLD0_Pos        (8U)
#define I3C_GRPASTS_GRPAVLD0_Msk        (0x1UL << I3C_GRPASTS_GRPAVLD0_Pos)

#define I3C_GRPASTS_GRPAVLD1_Pos        (9U)
#define I3C_GRPASTS_GRPAVLD1_Msk        (0x1UL << I3C_GRPASTS_GRPAVLD1_Pos)

#define I3C_GRPASTS_GRPAVLD2_Pos        (10U)
#define I3C_GRPASTS_GRPAVLD2_Msk        (0x1UL << I3C_GRPASTS_GRPAVLD2_Pos)

#define I3C_GRPASTS_GRPAVLD3_Pos        (11U)
#define I3C_GRPASTS_GRPAVLD3_Msk        (0x1UL << I3C_GRPASTS_GRPAVLD3_Pos)

#define I3C_GRPASTS_GRPAVLD4_Pos        (12U)
#define I3C_GRPASTS_GRPAVLD4_Msk        (0x1UL << I3C_GRPASTS_GRPAVLD4_Pos)

#define I3C_TGTCHAR1_PIDMSB_Pos         (0U)
#define I3C_TGTCHAR1_PIDMSB_Msk         (0xFFFFFFFFUL << I3C_TGTCHAR1_PIDMSB_Pos)

#define I3C_TGTCHAR2_PIDLSB_Pos         (0U)
#define I3C_TGTCHAR2_PIDLSB_Msk         (0xFFFFUL << I3C_TGTCHAR2_PIDLSB_Pos)

#define I3C_TGTCHAR3_DCR_Pos            (0U)
#define I3C_TGTCHAR3_DCR_Msk            (0xFFUL << I3C_TGTCHAR3_DCR_Pos)

#define I3C_TGTCHAR3_BCR_Pos            (8U)
#define I3C_TGTCHAR3_BCR_Msk            (0xFFUL << I3C_TGTCHAR3_BCR_Pos)

#define I3C_TGTCHAR4_DADDR_Pos          (0U)
#define I3C_TGTCHAR4_DADDR_Msk          (0xFFUL << I3C_TGTCHAR4_DADDR_Pos)

#define I3C_TGTCFG_SADDR_Pos            (0U)
#define I3C_TGTCFG_SADDR_Msk            (0x7FUL << I3C_TGTCFG_SADDR_Pos)

#define I3C_TGTCFG_IBIPECEN_Pos         (11U)
#define I3C_TGTCFG_IBIPECEN_Msk         (0x1UL << I3C_TGTCFG_IBIPECEN_Pos)

#define I3C_TGTCFG_IBIWMDB_Pos          (12U)
#define I3C_TGTCFG_IBIWMDB_Msk          (0x1UL << I3C_TGTCFG_IBIWMDB_Pos)

#define I3C_TGTCFG_SIRREJ_Pos           (13U)
#define I3C_TGTCFG_SIRREJ_Msk           (0x1UL << I3C_TGTCFG_SIRREJ_Pos)

#define I3C_TGTCFG_MRREJ_Pos            (14U)
#define I3C_TGTCFG_MRREJ_Msk            (0x1UL << I3C_TGTCFG_MRREJ_Pos)

#define I3C_TGTCFG_DADDR_Pos            (16U)
#define I3C_TGTCFG_DADDR_Msk            (0x7FUL << I3C_TGTCFG_DADDR_Pos)

#define I3C_TGTCFG_DAOPBIT_Pos          (23U)
#define I3C_TGTCFG_DAOPBIT_Msk          (0x1UL << I3C_TGTCFG_DAOPBIT_Pos)

#define I3C_TGTCFG_NACKRTY_Pos          (29U)
#define I3C_TGTCFG_NACKRTY_Msk          (0x3UL << I3C_TGTCFG_NACKRTY_Pos)

#define I3C_TGTCFG_DEVTYPE_Pos          (31U)
#define I3C_TGTCFG_DEVTYPE_Msk          (0x1UL << I3C_TGTCFG_DEVTYPE_Pos)

#define I3C_VTGTADDR_SADDR_Pos          (0U)
#define I3C_VTGTADDR_SADDR_Msk          (0x7FUL << I3C_VTGTADDR_SADDR_Pos)

#define I3C_VTGTADDR_SAVALID_Pos        (7U)
#define I3C_VTGTADDR_SAVALID_Msk        (0x1UL << I3C_VTGTADDR_SAVALID_Pos)

#define I3C_VTGTADDR_DADDR_Pos          (8U)
#define I3C_VTGTADDR_DADDR_Msk          (0x7FUL << I3C_VTGTADDR_DADDR_Pos)

#define I3C_VTGTADDR_DAVALID_Pos        (15U)
#define I3C_VTGTADDR_DAVALID_Msk        (0x1UL << I3C_VTGTADDR_DAVALID_Pos)

#define I3C_VTGTADDR_ENABLE_Pos         (31U)
#define I3C_VTGTADDR_ENABLE_Msk         (0x1UL << I3C_VTGTADDR_ENABLE_Pos)

#define I3C_VTGTMID_PIDTYPE_Pos         (0U)
#define I3C_VTGTMID_PIDTYPE_Msk         (0x1UL << I3C_VTGTMID_PIDTYPE_Pos)

#define I3C_VTGTMID_MID_Pos             (1U)
#define I3C_VTGTMID_MID_Msk             (0x7FFFUL << I3C_VTGTMID_MID_Pos)

#define I3C_VTGTPID_ADDLMEAN_Pos        (0U)
#define I3C_VTGTPID_ADDLMEAN_Msk        (0xFFFUL << I3C_VTGTPID_ADDLMEAN_Pos)

#define I3C_VTGTPID_INSTID_Pos          (12U)
#define I3C_VTGTPID_INSTID_Msk          (0xFUL << I3C_VTGTPID_INSTID_Pos)

#define I3C_VTGTPID_PARTID_Pos          (16U)
#define I3C_VTGTPID_PARTID_Msk          (0xFFFFUL << I3C_VTGTPID_PARTID_Pos)

#define I3C_VTGTCHAR_MXDSLIMT_Pos       (0U)
#define I3C_VTGTCHAR_MXDSLIMT_Msk       (0x1UL << I3C_VTGTCHAR_MXDSLIMT_Pos)

#define I3C_VTGTCHAR_IBICAP_Pos         (1U)
#define I3C_VTGTCHAR_IBICAP_Msk         (0x1UL << I3C_VTGTCHAR_IBICAP_Pos)

#define I3C_VTGTCHAR_IBIPL_Pos          (2U)
#define I3C_VTGTCHAR_IBIPL_Msk          (0x1UL << I3C_VTGTCHAR_IBIPL_Pos)

#define I3C_VTGTCHAR_OLINECAP_Pos       (3U)
#define I3C_VTGTCHAR_OLINECAP_Msk       (0x1UL << I3C_VTGTCHAR_OLINECAP_Pos)

#define I3C_VTGTCHAR_BRIDGEID_Pos       (4U)
#define I3C_VTGTCHAR_BRIDGEID_Msk       (0x1UL << I3C_VTGTCHAR_BRIDGEID_Pos)

#define I3C_VTGTCHAR_HDRCAP_Pos         (5U)
#define I3C_VTGTCHAR_HDRCAP_Msk         (0x1UL << I3C_VTGTCHAR_HDRCAP_Pos)

#define I3C_VTGTCHAR_DEVROLE_Pos        (6U)
#define I3C_VTGTCHAR_DEVROLE_Msk        (0x3UL << I3C_VTGTCHAR_DEVROLE_Pos)

#define I3C_VTGTCHAR_DCR_Pos            (8U)
#define I3C_VTGTCHAR_DCR_Msk            (0xFFUL << I3C_VTGTCHAR_DCR_Pos)

#define I3C_VTGTCHAR_HDRCAPV_Pos        (16U)
#define I3C_VTGTCHAR_HDRCAPV_Msk        (0xFFUL << I3C_VTGTCHAR_HDRCAPV_Pos)

/** @} I3C_CONST */
/** @} end of I3C register group */
/** @} end of REGISTER group */

#if defined ( __CC_ARM   )
    #pragma no_anon_unions
#endif

#endif /* __I3C_REG_H__ */

