/* Copyright 2020 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef _NPCX_ADC_H
#define _NPCX_ADC_H

/******************************************************************************/
/* ADC register definitions */
#define NPCX_ADCSTS(base_addr)               REG16((base_addr) + 0x000)
#define NPCX_ADCCNF(base_addr)               REG16((base_addr) + 0x002)
#define NPCX_ATCTL(base_addr)                REG16((base_addr) + 0x004)
#define NPCX_ASCADD(base_addr)               REG16((base_addr) + 0x006)
#define NPCX_ADCCS(base_addr)                REG16((base_addr) + 0x008)
#define NPCX_CHNDAT(base_addr, ch)           REG16((base_addr) + 0x040 + (2L*(ch)))
#define NPCX_ADCCNF2(base_addr)              REG16((base_addr) + 0x020)
#define NPCX_GENDLY(base_addr)               REG16((base_addr) + 0x022)
#define NPCX_MEAST(base_addr)                REG16((base_addr) + 0x026)

/* ADC register fields */
#define NPCX_ATCTL_SCLKDIV_FIELD              FIELD(0, 6)
#define NPCX_ATCTL_DLY_FIELD                  FIELD(8, 3)
#define NPCX_ASCADD_SADDR_FIELD               FIELD(0, 5)
#define NPCX_ADCSTS_EOCEV                     0
#define NPCX_ADCSTS_EOCCEV                    1
#define NPCX_ADCCNF_ADCMD_FIELD               FIELD(1, 2)
#define NPCX_ADCCNF_ADCRPTC                   3
#define NPCX_ADCCNF_INTECEN                   6
#define NPCX_ADCCNF_START                     4
#define NPCX_ADCCNF_ADCEN                     0
#define NPCX_ADCCNF_STOP                      11
#define NPCX_CHNDAT_CHDAT_FIELD               FIELD(0, 10)
#define NPCX_CHNDAT_NEW                       15
#define NPCX_THRCTL_THEN                      15
#define NPCX_THRCTL_L_H                       14
#define NPCX_THRCTL_CHNSEL                    FIELD(10, 4)
#define NPCX_THRCTL_THRVAL                    FIELD(0, 10)
#define NPCX_THRCTS_ADC_WKEN                  15
#define NPCX_THRCTS_THR3_IEN                  10
#define NPCX_THRCTS_THR2_IEN                  9
#define NPCX_THRCTS_THR1_IEN                  8
#define NPCX_THRCTS_ADC_EVENT                 7
#define NPCX_THRCTS_THR3_STS                  2
#define NPCX_THRCTS_THR2_STS                  1
#define NPCX_THRCTS_THR1_STS                  0
#define NPCX_THR_DCTL_THRD_EN                 15
#define NPCX_THR_DCTL_THR_DVAL                FIELD(0, 10)

/******************************************************************************/
/* ADC macro functions */
#define NPCX_ADC_CLK                          2000000 /* Operate in 2MHz */
#define NPCX_ADC_REGULAR_DLY                  0x02 /* 010 */
/* Maximum time we allow for an ADC conversion */
#define ADC_TIMEOUT_US                        USEC_PER_SEC
#define ADC_REGULAR_ADCCNF2                   0x8B07
#define ADC_REGULAR_GENDLY                    0x0100
#define ADC_REGULAR_MEAST                     0x0001

/******************************************************************************/
/* ADC enumeration */

/* ADC input channel select */
enum npcx_adc_input_channel {
	NPCX_ADC_CH0 = 0,
	NPCX_ADC_CH1,
	NPCX_ADC_CH2,
	NPCX_ADC_CH3,
	NPCX_ADC_CH4,
	NPCX_ADC_CH5,
	NPCX_ADC_CH6,
	NPCX_ADC_CH7,
	NPCX_ADC_CH8,
	NPCX_ADC_CH9,
	NPCX_ADC_CH_COUNT
};

/* ADC conversion mode */
enum npcx_adc_conversion_mode {
	ADC_CHN_CONVERSION_MODE   = 0,
	ADC_SCAN_CONVERSION_MODE  = 1
};

#endif /* _NPCX_ADC_H */
