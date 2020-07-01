/* Copyright 2020 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef _NPCX_PWM_H
#define _NPCX_PWM_H

/******************************************************************************/
/* PWM register definitions */
#define NPCX_PRSC(base_addr)                 REG16((base_addr) + 0x000)
#define NPCX_CTR(base_addr)                  REG16((base_addr) + 0x002)
#define NPCX_PWMCTL(base_addr)                REG8((base_addr) + 0x004)
#define NPCX_DCR(base_addr)                  REG16((base_addr) + 0x006)
#define NPCX_PWMCTLEX(base_addr)              REG8((base_addr) + 0x00C)

/* PWM register fields */
#define NPCX_PWMCTL_INVP                      0
#define NPCX_PWMCTL_CKSEL                     1
#define NPCX_PWMCTL_HB_DC_CTL_FIELD           FIELD(2, 2)
#define NPCX_PWMCTL_PWR                       7
#define NPCX_PWMCTLEX_FCK_SEL_FIELD           FIELD(4, 2)
#define NPCX_PWMCTLEX_OD_OUT                  7

/******************************************************************************/
/* PWM macro functions */

/* 16-bit prescaler in NPCX PWM modules */
#define NPCX_PWM_MAX_PRESCALER      (1UL << (16))

/* 16-bit period cycles in NPCX PWM modules */
#define NPCX_PWM_MAX_PERIOD_CYCLES  (1UL << (16))

/******************************************************************************/
/* PWM enumeration */

/* PWM clock source */
enum {
	NPCX_PWM_CLOCK_APB2_LFCLK  = 0,
	NPCX_PWM_CLOCK_FX          = 1,
	NPCX_PWM_CLOCK_FR          = 2,
	NPCX_PWM_CLOCK_RESERVED    = 3,
	NPCX_PWM_CLOCK_UNDEF       = 0xFF
};

/* PWM heartbeat mode */
enum {
	NPCX_PWM_HBM_NORMAL    = 0,
	NPCX_PWM_HBM_25        = 1,
	NPCX_PWM_HBM_50        = 2,
	NPCX_PWM_HBM_100       = 3,
	NPCX_PWM_HBM_UNDEF     = 0xFF
};

#endif /* _NPCX_PWM_H */
