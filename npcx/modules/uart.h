/* Copyright 2020 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef _NPCX_UART_H
#define _NPCX_UART_H

/******************************************************************************/
/* UART register definitions */
#define NPCX_UTBUF(base_addr)                 REG8((base_addr) + 0x000)
#define NPCX_URBUF(base_addr)                 REG8((base_addr) + 0x002)
#define NPCX_UICTRL(base_addr)                REG8((base_addr) + 0x004)
#define NPCX_USTAT(base_addr)                 REG8((base_addr) + 0x006)
#define NPCX_UFRS(base_addr)                  REG8((base_addr) + 0x008)
#define NPCX_UMDSL(base_addr)                 REG8((base_addr) + 0x00A)
#define NPCX_UBAUD(base_addr)                 REG8((base_addr) + 0x00C)
#define NPCX_UPSR(base_addr)                  REG8((base_addr) + 0x00E)
/* UART registers only used for FIFO mode */
#define NPCX_UFTSTS(base_addr)                REG8((base_addr) + 0x020)
#define NPCX_UFRSTS(base_addr)                REG8((base_addr) + 0x022)
#define NPCX_UFTCTL(base_addr)                REG8((base_addr) + 0x024)
#define NPCX_UFRCTL(base_addr)                REG8((base_addr) + 0x026)

/* UART register fields */
#define NPCX_UICTRL_TBE                       0
#define NPCX_UICTRL_RBF                       1
#define NPCX_UICTRL_ETI                       5
#define NPCX_UICTRL_ERI                       6
#define NPCX_UICTRL_EEI                       7

#define NPCX_USTAT_PE                         0
#define NPCX_USTAT_FE                         1
#define NPCX_USTAT_DOE                        2
#define NPCX_USTAT_ERR                        3
#define NPCX_USTAT_BKD                        4
#define NPCX_USTAT_RB9                        5
#define NPCX_USTAT_XMIP                       6

#define NPCX_UFRS_CHAR_FIELD                  FIELD(0, 2)
#define NPCX_UFRS_STP                         2
#define NPCX_UFRS_XB9                         3
#define NPCX_UFRS_PSEL_FIELD                  FIELD(4, 2)
#define NPCX_UFRS_PEN                         6

/* UART FIFO register fields */
#define NPCX_UMDSL_FIFO_MD                    0

#define NPCX_UFTSTS_TEMPTY_LVL                FIELD(0, 5)
#define NPCX_UFTSTS_TEMPTY_LVL_STS            5
#define NPCX_UFTSTS_TFIFO_EMPTY_STS           6
#define NPCX_UFTSTS_NXMIP                     7

#define NPCX_UFRSTS_RFULL_LVL_STS             5
#define NPCX_UFRSTS_RFIFO_NEMPTY_STS          6
#define NPCX_UFRSTS_ERR                       7

#define NPCX_UFTCTL_TEMPTY_LVL_SEL            FIELD(0, 5)
#define NPCX_UFTCTL_TEMPTY_LVL_EN             5
#define NPCX_UFTCTL_TEMPTY_EN                 6
#define NPCX_UFTCTL_NXMIPEN                   7

#define NPCX_UFRCTL_RFULL_LVL_SEL             FIELD(0, 5)
#define NPCX_UFRCTL_RFULL_LVL_EN              5
#define NPCX_UFRCTL_RNEMPTY_EN                6
#define NPCX_UFRCTL_ERR_EN                    7

/******************************************************************************/
/* UART Tx FIFO macro functions */
/* Enable UART Tx FIFO empty interrupt */
#define NPCX_UART_TX_FIFO_EMPTY_INT_EN(n)      \
		(SET_BIT(NPCX_UFTCTL(n), NPCX_UFTCTL_TEMPTY_EN))
/* True if UART Tx FIFO empty interrupt is enabled */
#define NPCX_UART_TX_FIFO_EMPTY_INT_IS_EN(n)   \
		(IS_BIT_SET(NPCX_UFTCTL(n), NPCX_UFTCTL_TEMPTY_EN))
/* Disable UART Tx FIFO empty interrupt */
#define NPCX_UART_TX_FIFO_EMPTY_INT_DIS(n)     \
		(CLEAR_BIT(NPCX_UFTCTL(n), NPCX_UFTCTL_TEMPTY_EN))
/* True if the Tx FIFO is not completely full */
#define NPCX_UART_TX_FIFO_IS_READY(n)          \
		(!(GET_FIELD(NPCX_UFTSTS(n), NPCX_UFTSTS_TEMPTY_LVL) == 0))
/*
 * True if Tx is in progress
 * (i.e. FIFO is not empty or last byte in TSFT (Transmit Shift register)
 * is not sent)
 */
#define NPCX_UART_TX_FIFO_IN_XMIT(n)           \
		(!IS_BIT_SET(NPCX_UFTSTS(n), NPCX_UFTSTS_NXMIP))


/* UART Rx FIFO macro functions */
/*
 * Enable to generate interrupt when there is at least one byte
 * in the receive FIFO
 */
#define NPCX_UART_RX_FIFO_NO_EMPTY_INT_EN(n)    \
		(SET_BIT(NPCX_UFRCTL(n), NPCX_UFRCTL_RNEMPTY_EN))

#define NPCX_UART_RX_FIFO_NO_EMPTY_INT_DIS(n)   \
		(CLEAR_BIT(NPCX_UFRCTL(n), NPCX_UFRCTL_RNEMPTY_EN))

#define NPCX_UART_RX_FIFO_NO_EMPTY_INT_IS_EN(n) \
		(IS_BIT_SET(NPCX_UFRCTL(n), NPCX_UFRCTL_RNEMPTY_EN))

/* True if at least one byte is in the receive FIFO */
#define NPCX_UART_RX_FIFO_IS_AVAILABLE(n)      \
		(IS_BIT_SET(NPCX_UFRSTS(n), NPCX_UFRSTS_RFIFO_NEMPTY_STS))

#endif /* _NPCX_UART_H */
