/* Copyright 2020 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef _NPCX_MIWU_H
#define _NPCX_MIWU_H

/******************************************************************************/
/* MIWU register definitions */
#define NPCX_WKEDG_ADDR(base_addr, n)    ((base_addr) + 0x00 + \
					      ((n) * 2L) + ((n) < 5 ? 0 : 0x1E))
#define NPCX_WKAEDG_ADDR(base_addr, n)   ((base_addr) + 0x01 + \
					      ((n) * 2L) + ((n) < 5 ? 0 : 0x1E))
#define NPCX_WKPND_ADDR(base_addr, n)    ((base_addr) + 0x0A + \
					      ((n) * 4L) + ((n) < 5 ? 0 : 0x10))
#define NPCX_WKPCL_ADDR(base_addr, n)    ((base_addr) + 0x0C + \
					      ((n) * 4L) + ((n) < 5 ? 0 : 0x10))
#define NPCX_WKEN_ADDR(base_addr, n)     ((base_addr) + 0x1E + \
					      ((n) * 2L) + ((n) < 5 ? 0 : 0x12))
#define NPCX_WKINEN_ADDR(base_addr, n)   ((base_addr) + 0x1F + \
					     ((n) * 2L) + ((n) < 5 ? 0 : 0x12))
#define NPCX_WKMOD_ADDR(base_addr, n)    ((base_addr) + 0x70 + (n))

#define NPCX_WKEDG(base_addr, n)         REG8(NPCX_WKEDG_ADDR(base_addr, n))
#define NPCX_WKAEDG(base_addr, n)        REG8(NPCX_WKAEDG_ADDR(base_addr, n))
#define NPCX_WKPND(base_addr, n)         REG8(NPCX_WKPND_ADDR(base_addr, n))
#define NPCX_WKPCL(base_addr, n)         REG8(NPCX_WKPCL_ADDR(base_addr, n))
#define NPCX_WKEN(base_addr, n)          REG8(NPCX_WKEN_ADDR(base_addr, n))
#define NPCX_WKINEN(base_addr, n)        REG8(NPCX_WKINEN_ADDR(base_addr, n))
#define NPCX_WKMOD(base_addr, n)         REG8(NPCX_WKMOD_ADDR(base_addr, n))

/******************************************************************************/
/* MIWU structure/macro functions */
/* Structure for MIWU WUI item */
struct npcx_wui {
	uint8_t table : 2;
	uint8_t group : 3;
	uint8_t bit   : 3;
};

/* Macro functions for constructions */
#define NPCX_WUI(tbl, grp, idx) ((struct npcx_wui) { .table = tbl, \
						.group = grp, .bit = idx })

/******************************************************************************/
/* MIWU enumeration */
/* MIWU Tables */
enum {
	NPCX_MIWU_TABLE_0,
	NPCX_MIWU_TABLE_1,
	NPCX_MIWU_TABLE_2,
	NPCX_MIWU_TABLE_COUNT
};

/* MIWU Groups */
enum {
	NPCX_MIWU_GROUP_1,
	NPCX_MIWU_GROUP_2,
	NPCX_MIWU_GROUP_3,
	NPCX_MIWU_GROUP_4,
	NPCX_MIWU_GROUP_5,
	NPCX_MIWU_GROUP_6,
	NPCX_MIWU_GROUP_7,
	NPCX_MIWU_GROUP_8,
	NPCX_MIWU_GROUP_COUNT
};

#endif /* _NPCX_MIWU_H */
