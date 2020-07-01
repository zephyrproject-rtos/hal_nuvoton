/* Copyright 2020 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef _NPCX_WATCHDOG_H
#define _NPCX_WATCHDOG_H

/******************************************************************************/
/* Timer Watchdog (TWD) register definitions */
#define NPCX_TWCFG(base_addr)                  REG8((base_addr) + 0x000)
#define NPCX_TWCP(base_addr)                   REG8((base_addr) + 0x002)
#define NPCX_TWDT0(base_addr)                 REG16((base_addr) + 0x004)
#define NPCX_T0CSR(base_addr)                  REG8((base_addr) + 0x006)
#define NPCX_WDCNT(base_addr)                  REG8((base_addr) + 0x008)
#define NPCX_WDSDM(base_addr)                  REG8((base_addr) + 0x00A)
#define NPCX_TWMT0(base_addr)                 REG16((base_addr) + 0x00C)
#define NPCX_TWMWD(base_addr)                  REG8((base_addr) + 0x00E)
#define NPCX_WDCP(base_addr)                   REG8((base_addr) + 0x010)

/* TWD register fields */
#define NPCX_TWCFG_LTWCFG                      0
#define NPCX_TWCFG_LTWCP                       1
#define NPCX_TWCFG_LTWDT0                      2
#define NPCX_TWCFG_LWDCNT                      3
#define NPCX_TWCFG_WDCT0I                      4
#define NPCX_TWCFG_WDSDME                      5
#define NPCX_T0CSR_RST                         0
#define NPCX_T0CSR_TC                          1
#define NPCX_T0CSR_WDLTD                       3
#define NPCX_T0CSR_WDRST_STS                   4
#define NPCX_T0CSR_WD_RUN                      5
#define NPCX_T0CSR_TESDIS                      7

/******************************************************************************/
/* TWD macro functions */

/******************************************************************************/
/* TWD enumeration */

#endif /* _NPCX_WATCHDOG_H */
