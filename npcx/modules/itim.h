/* Copyright 2020 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef _NPCX_ITIM_H
#define _NPCX_ITIM_H

/******************************************************************************/
/* Internal 16/32 bits Timer (ITIM) register definitions */
/* ITIM16 registers */
#define NPCX_ITCNT(base_addr)                 REG8((base_addr) + 0x000)
#define NPCX_ITPRE(base_addr)                 REG8((base_addr) + 0x001)
#define NPCX_ITCNT16(base_addr)              REG16((base_addr) + 0x002)
#define NPCX_ITCTS(base_addr)                 REG8((base_addr) + 0x004)

/* ITIM32 registers */
#define NPCX_ITCNT32                         REG32((base_addr) + 0x008)

/* ITIM16 register fields */
#define NPCX_ITCTS_TO_STS                     0
#define NPCX_ITCTS_TO_IE                      2
#define NPCX_ITCTS_TO_WUE                     3
#define NPCX_ITCTS_CKSEL                      4
#define NPCX_ITCTS_ITEN                       7

/******************************************************************************/
/* ITIM macro functions */
#define ITIM16_INT(module)               CONCAT2(NPCX_IRQ_, module)

/******************************************************************************/
/* ITIM enumeration */
enum {
	ITIM16_1,
	ITIM16_2,
	ITIM16_3,
	ITIM16_4,
	ITIM16_5,
	ITIM16_6,
	ITIM32,
	ITIM_MODULE_COUNT,
};

#endif /* _NPCX_ITIM_H */
