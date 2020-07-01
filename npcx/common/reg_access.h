/* Copyright 2020 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef _NUVOTON_NPCX_REG_ACCESS_H
#define _NUVOTON_NPCX_REG_ACCESS_H

/******************************************************************************/
/*
 * Register Access Macro Functions
 */
/* Reg access functions */
#define REG32_ADDR(addr) ((volatile uint32_t *)(addr))
#define REG16_ADDR(addr) ((volatile uint16_t *)(addr))
#define REG8_ADDR(addr)  ((volatile uint8_t  *)(addr))

#define REG32(addr) (*REG32_ADDR(addr))
#define REG16(addr) (*REG16_ADDR(addr))
#define REG8(addr)  (*REG8_ADDR(addr))

/* Reg bit functions */
#define BIT(n)                      (1UL << (n))
#define SET_BIT(reg, bit)           ((reg) |= (0x1 << (bit)))
#define CLEAR_BIT(reg, bit)         ((reg) &= (~(0x1 << (bit))))
#define IS_BIT_SET(reg, bit)        ((reg >> bit) & (0x1))
#define UPDATE_BIT(reg, bit, cond)  {	if (cond) \
						SET_BIT(reg, bit); \
					else \
						CLEAR_BIT(reg, bit); }

/* Reg field functions */
#define GET_POS_FIELD(pos, size)    pos
#define GET_SIZE_FIELD(pos, size)   size
#define FIELD_POS(field)            GET_POS_##field
#define FIELD_SIZE(field)           GET_SIZE_##field

/* Read field functions */
#define GET_FIELD(reg, field) \
	_GET_FIELD_(reg, FIELD_POS(field), FIELD_SIZE(field))
#define _GET_FIELD_(reg, f_pos, f_size) (((reg)>>(f_pos)) & ((1<<(f_size))-1))

/* Write field functions */
#define SET_FIELD(reg, field, value) \
	_SET_FIELD_(reg, FIELD_POS(field), FIELD_SIZE(field), value)
#define _SET_FIELD_(reg, f_pos, f_size, value) \
	((reg) = ((reg) & (~(((1 << (f_size))-1) << (f_pos)))) \
			| ((value) << (f_pos)))

#endif /* _NUVOTON_NPCX_REG_ACCESS_H */
