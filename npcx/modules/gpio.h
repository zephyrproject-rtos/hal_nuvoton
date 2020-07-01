/* Copyright 2020 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef _NPCX_GPIO_H
#define _NPCX_GPIO_H

/******************************************************************************/
/* GPIO register definitions */
#define NPCX_PDOUT(base_addr)                 REG8((base_addr) + 0x000)
#define NPCX_PDIN(base_addr)                  REG8((base_addr) + 0x001)
#define NPCX_PDIR(base_addr)                  REG8((base_addr) + 0x002)
#define NPCX_PPULL(base_addr)                 REG8((base_addr) + 0x003)
#define NPCX_PPUD(base_addr)                  REG8((base_addr) + 0x004)
#define NPCX_PENVDD(base_addr)                REG8((base_addr) + 0x005)
#define NPCX_PTYPE(base_addr)                 REG8((base_addr) + 0x006)
#define NPCX_PLOCK_CTL(base_addr)             REG8((base_addr) + 0x007)

/******************************************************************************/
/* GPIO structure/macro functions */

/* Structures for mapping GPIO, low voltage controller and so on */
struct npcx_gpio {
	uint8_t port  : 5;
	uint8_t bit   : 3;
};

/* Macro functions for constructions */
#define NPCX_GPIO(grp, pin) ((struct npcx_gpio) {.port = grp, .bit = pin})

/******************************************************************************/
/* GPIO enumeration */

/* GPIO ports */
enum {
	NPCX_GPIO_PORT_0,
	NPCX_GPIO_PORT_1,
	NPCX_GPIO_PORT_2,
	NPCX_GPIO_PORT_3,
	NPCX_GPIO_PORT_4,
	NPCX_GPIO_PORT_5,
	NPCX_GPIO_PORT_6,
	NPCX_GPIO_PORT_7,
	NPCX_GPIO_PORT_8,
	NPCX_GPIO_PORT_9,
	NPCX_GPIO_PORT_A,
	NPCX_GPIO_PORT_B,
	NPCX_GPIO_PORT_C,
	NPCX_GPIO_PORT_D,
	NPCX_GPIO_PORT_E,
	NPCX_GPIO_PORT_F,
	NPCX_GPIO_PORT_COUNT
};

#endif /* _NPCX_GPIO_H */
