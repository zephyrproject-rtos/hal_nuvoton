/* Copyright 2020 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef _NPCX_MFT_H
#define _NPCX_MFT_H

/******************************************************************************/
/* Multi-Function Timer (MFT) register definitions */
#define NPCX_TCNT1(base_addr)                REG16((base_addr) + 0x000)
#define NPCX_TCRA(base_addr)                 REG16((base_addr) + 0x002)
#define NPCX_TCRB(base_addr)                 REG16((base_addr) + 0x004)
#define NPCX_TCNT2(base_addr)                REG16((base_addr) + 0x006)
#define NPCX_TPRSC(base_addr)                 REG8((base_addr) + 0x008)
#define NPCX_TCKC(base_addr)                  REG8((base_addr) + 0x00A)
#define NPCX_TMCTRL(base_addr)                REG8((base_addr) + 0x00C)
#define NPCX_TECTRL(base_addr)                REG8((base_addr) + 0x00E)
#define NPCX_TECLR(base_addr)                 REG8((base_addr) + 0x010)
#define NPCX_TIEN(base_addr)                  REG8((base_addr) + 0x012)
#define NPCX_TWUEN(base_addr)                 REG8((base_addr) + 0x01A)
#define NPCX_TCFG(base_addr)                  REG8((base_addr) + 0x01C)

/* MFT register fields */
#define NPCX_TMCTRL_MDSEL_FIELD               FIELD(0, 3)
#define NPCX_TCKC_LOW_PWR                     7
#define NPCX_TCKC_PLS_ACC_CLK                 6
#define NPCX_TCKC_C1CSEL_FIELD                FIELD(0, 3)
#define NPCX_TCKC_C2CSEL_FIELD                FIELD(3, 3)
#define NPCX_TMCTRL_TAEN                      5
#define NPCX_TMCTRL_TBEN                      6
#define NPCX_TMCTRL_TAEDG                     3
#define NPCX_TMCTRL_TBEDG                     4
#define NPCX_TCFG_TADBEN                      6
#define NPCX_TCFG_TBDBEN                      7
#define NPCX_TECTRL_TAPND                     0
#define NPCX_TECTRL_TBPND                     1
#define NPCX_TECTRL_TCPND                     2
#define NPCX_TECTRL_TDPND                     3
#define NPCX_TECLR_TACLR                      0
#define NPCX_TECLR_TBCLR                      1
#define NPCX_TECLR_TCCLR                      2
#define NPCX_TECLR_TDCLR                      3
#define NPCX_TIEN_TAIEN                       0
#define NPCX_TIEN_TBIEN                       1
#define NPCX_TIEN_TCIEN                       2
#define NPCX_TIEN_TDIEN                       3
#define NPCX_TWUEN_TAWEN                      0
#define NPCX_TWUEN_TBWEN                      1
#define NPCX_TWUEN_TCWEN                      2
#define NPCX_TWUEN_TDWEN                      3

/******************************************************************************/
/* MFT macro functions */

/******************************************************************************/
/* MFT enumeration */

#endif /* _NPCX_MFT_H */
