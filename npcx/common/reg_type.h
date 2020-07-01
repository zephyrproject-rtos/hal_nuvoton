/* Copyright 2020 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef _NUVOTON_NPCX_REG_TYPE_H
#define _NUVOTON_NPCX_REG_TYPE_H

#include <stdint.h>

/******************************************************************************/
/*
 * Register Type Definitions
 */

#ifdef __cplusplus
extern "C" {
#endif

/* ADC device instance */
typedef  uint8_t *adc_inst_t;
/* CDCG device instance */
typedef  uint8_t *cdcg_inst_t;
/* ESPI device instance */
typedef  uint8_t *espi_inst_t;
/* GPIO device instance */
typedef  uint8_t *gpio_inst_t;
/* ITIM device instance */
typedef  uint8_t *itim_inst_t;
/* MIWU device instance */
typedef  uint8_t *miwu_inst_t;
/* PMC device instance */
typedef  uint8_t *pmc_inst_t;
/* PWM device instance */
typedef  uint8_t *pwm_inst_t;
/* SCFG device instance */
typedef  uint8_t *scfg_inst_t;
/* SMB device instance */
typedef  uint8_t *smb_inst_t;
/* TWD device instance */
typedef  uint8_t *twd_inst_t;
/* UART device instance */
typedef  uint8_t *uart_inst_t;
/* WDT device instance */
typedef  uint8_t *wdt_inst_t;


#ifdef __cplusplus
}
#endif



#endif /* _NUVOTON_NPCX_REG_TYPE_H */
