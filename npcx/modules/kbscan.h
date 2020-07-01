/* Copyright 2020 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef _NPCX_KBSCAN_H
#define _NPCX_KBSCAN_H

/******************************************************************************/
/* Keyboard Scan (KBSCAN) register definitions */
#define NPCX_KBSIN(base_addr)                 REG8((base_addr) + 0x04)
#define NPCX_KBSINPU(base_addr)               REG8((base_addr) + 0x05)
#define NPCX_KBSOUT0(base_addr)              REG16((base_addr) + 0x06)
#define NPCX_KBSOUT1(base_addr)              REG16((base_addr) + 0x08)
#define NPCX_KBS_BUF_INDX(base_addr)          REG8((base_addr) + 0x0A)
#define NPCX_KBS_BUF_DATA(base_addr)          REG8((base_addr) + 0x0B)
#define NPCX_KBSEVT(base_addr)                REG8((base_addr) + 0x0C)
#define NPCX_KBSCTL(base_addr)                REG8((base_addr) + 0x0D)
#define NPCX_KBS_CFG_INDX(base_addr)          REG8((base_addr) + 0x0E)
#define NPCX_KBS_CFG_DATA(base_addr)          REG8((base_addr) + 0x0F)

/* KBSCAN register fields */
#define NPCX_KBSBUFINDX                       0
#define NPCX_KBSDONE                          0
#define NPCX_KBSERR                           1
#define NPCX_KBSSTART                         0
#define NPCX_KBSMODE                          1
#define NPCX_KBSIEN                           2
#define NPCX_KBSINC                           3
#define NPCX_KBHDRV_FIELD                     FIELD(6, 2)
#define NPCX_KBSCFGINDX                       0

/******************************************************************************/
/* KBSCAN macro functions */
#define NPCX_KB_ROW_NUM  8  /* Rows numbers of keyboard matrix */
#define NPCX_KB_COL_NUM  18 /* Columns numbers of keyboard matrix */
/* Mask of rows of keyboard matrix */
#define NPCX_KB_ROW_MASK ((1<<KB_ROW_NUM) - 1)

/******************************************************************************/
/* KBSCAN enumeration */

#endif /* _NPCX_KBSCAN_H */
