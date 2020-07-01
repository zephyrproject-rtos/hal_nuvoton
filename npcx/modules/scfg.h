/* Copyright 2020 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef _NPCX_SCFG_H
#define _NPCX_SCFG_H

/******************************************************************************/
/* System Configuration (SCFG) register definitions */
#define NPCX_DEVCNT(base_addr)                REG8((base_addr) + 0x000)
#define NPCX_STRPST(base_addr)                REG8((base_addr) + 0x001)
#define NPCX_RSTCTL(base_addr)                REG8((base_addr) + 0x002)
#define NPCX_DEV_CTL4(base_addr)              REG8((base_addr) + 0x006)
#define NPCX_DEVALT(base_addr, n)             REG8((base_addr) + 0x010 + (n))
#define NPCX_LFCGCALCNT(base_addr)            REG8((base_addr) + 0x021)
#define NPCX_PUPD_EN0(base_addr)              REG8((base_addr) + 0x028)
#define NPCX_PUPD_EN1(base_addr)              REG8((base_addr) + 0x029)
#define NPCX_SCFG_VER                         REG8((base_addr) + 0x02F)
#define NPCX_LV_GPIO_CTL_ADDR(base_addr, n)   (((n) < 5) ? \
					          ((base_addr) + 0x02A + (n)) :\
					          ((base_addr) + 0x026))
#define NPCX_LV_GPIO_CTL(base_addr, n)        REG8(NPCX_LV_GPIO_CTL_ADDR \
						                 (base_addr, n))
#define TEST_BKSL(base_addr)                  REG8((base_addr) + 0x037)
#define TEST0(base_addr)                      REG8((base_addr) + 0x038)
#define BLKSEL(base_addr)                     0

/* SCFG register fields */
#define NPCX_DEVCNT_F_SPI_TRIS                6
#define NPCX_DEVCNT_HIF_TYP_SEL_FIELD         FIELD(2, 2)
#define NPCX_DEVCNT_JEN1_HEN                  5
#define NPCX_DEVCNT_JEN0_HEN                  4
#define NPCX_STRPST_TRIST                     1
#define NPCX_STRPST_TEST                      2
#define NPCX_STRPST_JEN1                      4
#define NPCX_STRPST_JEN0                      5
#define NPCX_STRPST_SPI_COMP                  7
#define NPCX_RSTCTL_VCC1_RST_STS              0
#define NPCX_RSTCTL_DBGRST_STS                1
#define NPCX_RSTCTL_VCC1_RST_SCRATCH          3
#define NPCX_RSTCTL_LRESET_PLTRST_MODE        5
#define NPCX_RSTCTL_HIPRST_MODE               6
#define NPCX_DEV_CTL4_F_SPI_SLLK              2
#define NPCX_DEV_CTL4_SPI_SP_SEL              4
#define NPCX_DEV_CTL4_WP_IF                   5
#define NPCX_DEV_CTL4_VCC1_RST_LK             6
#define NPCX_DEVPU0_I2C0_0_PUE                0
#define NPCX_DEVPU0_I2C0_1_PUE                1
#define NPCX_DEVPU0_I2C1_0_PUE                2
#define NPCX_DEVPU0_I2C2_0_PUE                4
#define NPCX_DEVPU0_I2C3_0_PUE                6
#define NPCX_DEVPU1_F_SPI_PUD_EN              7

/* DEVALT */
/* pin-mux for SPI/FIU */
#define NPCX_DEVALT0_SPIP_SL                  0
#define NPCX_DEVALT0_GPIO_NO_SPIP             3
#define NPCX_DEVALT0_F_SPI_CS1_2              4
#define NPCX_DEVALT0_F_SPI_CS1_1              5
#define NPCX_DEVALT0_F_SPI_QUAD               6
#define NPCX_DEVALT0_NO_F_SPI                 7

/* pin-mux for LPC/eSPI */
#define NPCX_DEVALT1_KBRST_SL                 0
#define NPCX_DEVALT1_A20M_SL                  1
#define NPCX_DEVALT1_SMI_SL                   2
#define NPCX_DEVALT1_EC_SCI_SL                3
#define NPCX_DEVALT1_NO_PWRGD                 4
#define NPCX_DEVALT1_RST_OUT_SL               5
#define NPCX_DEVALT1_CLKRN_SL                 6
#define NPCX_DEVALT1_NO_LPC_ESPI              7

/* pin-mux for I2C */
#define NPCX_DEVALT2_I2C0_0_SL                0
#define NPCX_DEVALT2_I2C7_0_SL                1
#define NPCX_DEVALT2_I2C1_0_SL                2
#define NPCX_DEVALT2_I2C6_0_SL                3
#define NPCX_DEVALT2_I2C2_0_SL                4
#define NPCX_DEVALT2_I2C5_0_SL                5
#define NPCX_DEVALT2_I2C3_0_SL                6
#define NPCX_DEVALT2_I2C4_0_SL                7
#define NPCX_DEVALT6_I2C6_1_SL                5
#define NPCX_DEVALT6_I2C5_1_SL                6
#define NPCX_DEVALT6_I2C4_1_SL                7

/* pin-mux for PS2 */
#define NPCX_DEVALT3_PS2_0_SL                 0
#define NPCX_DEVALT3_PS2_1_SL                 1
#define NPCX_DEVALT3_PS2_2_SL                 2
#define NPCX_DEVALT3_PS2_3_SL                 3
#define NPCX_DEVALTC_PS2_3_SL2                3

/* pin-mux for Tacho */
#define NPCX_DEVALT3_TA1_SL1                  4
#define NPCX_DEVALT3_TB1_SL1                  5
#define NPCX_DEVALT3_TA2_SL1                  6
#define NPCX_DEVALT3_TB2_SL1                  7
#define NPCX_DEVALTC_TA1_SL2                  4
#define NPCX_DEVALTC_TB1_SL2                  5
#define NPCX_DEVALTC_TA2_SL2                  6
#define NPCX_DEVALTC_TB2_SL2                  7

/* pin-mux for PWM */
#define NPCX_DEVALT4_PWM0_SL                  0
#define NPCX_DEVALT4_PWM1_SL                  1
#define NPCX_DEVALT4_PWM2_SL                  2
#define NPCX_DEVALT4_PWM3_SL                  3
#define NPCX_DEVALT4_PWM4_SL                  4
#define NPCX_DEVALT4_PWM5_SL                  5
#define NPCX_DEVALT4_PWM6_SL                  6
#define NPCX_DEVALT4_PWM7_SL                  7

/* pin-mux for JTAG */
#define NPCX_DEVALT5_TRACE_EN                 0
#define NPCX_DEVALT5_NJEN1_EN                 1
#define NPCX_DEVALT5_NJEN0_EN                 2

/* pin-mux for ADC */
#define NPCX_DEVALT6_ADC0_SL                  0
#define NPCX_DEVALT6_ADC1_SL                  1
#define NPCX_DEVALT6_ADC2_SL                  2
#define NPCX_DEVALT6_ADC3_SL                  3
#define NPCX_DEVALT6_ADC4_SL                  4
#define NPCX_DEVALTF_ADC5_SL                  0
#define NPCX_DEVALTF_ADC6_SL                  1
#define NPCX_DEVALTF_ADC7_SL                  2
#define NPCX_DEVALTF_ADC8_SL                  3
#define NPCX_DEVALTF_ADC9_SL                  4

/* pin-mux for Keyboard */
#define NPCX_DEVALT7_NO_KSI0_SL               0
#define NPCX_DEVALT7_NO_KSI1_SL               1
#define NPCX_DEVALT7_NO_KSI2_SL               2
#define NPCX_DEVALT7_NO_KSI3_SL               3
#define NPCX_DEVALT7_NO_KSI4_SL               4
#define NPCX_DEVALT7_NO_KSI5_SL               5
#define NPCX_DEVALT7_NO_KSI6_SL               6
#define NPCX_DEVALT7_NO_KSI7_SL               7
#define NPCX_DEVALT8_NO_KSO00_SL              0
#define NPCX_DEVALT8_NO_KSO01_SL              1
#define NPCX_DEVALT8_NO_KSO02_SL              2
#define NPCX_DEVALT8_NO_KSO03_SL              3
#define NPCX_DEVALT8_NO_KSO04_SL              4
#define NPCX_DEVALT8_NO_KSO05_SL              5
#define NPCX_DEVALT8_NO_KSO06_SL              6
#define NPCX_DEVALT8_NO_KSO07_SL              7
#define NPCX_DEVALT9_NO_KSO08_SL              0
#define NPCX_DEVALT9_NO_KSO09_SL              1
#define NPCX_DEVALT9_NO_KSO10_SL              2
#define NPCX_DEVALT9_NO_KSO11_SL              3
#define NPCX_DEVALT9_NO_KSO12_SL              4
#define NPCX_DEVALT9_NO_KSO13_SL              5
#define NPCX_DEVALT9_NO_KSO14_SL              6
#define NPCX_DEVALT9_NO_KSO15_SL              7
#define NPCX_DEVALTA_NO_KSO16_SL              0
#define NPCX_DEVALTA_NO_KSO17_SL              1

/* pin-mux for PSL */
#define NPCX_DEVALTD_PSL_IN1_AHI              0
#define NPCX_DEVALTD_NPSL_IN1_SL              1
#define NPCX_DEVALTD_PSL_IN2_AHI              2
#define NPCX_DEVALTD_NPSL_IN2_SL              3
#define NPCX_DEVALTD_PSL_IN3_AHI              4
#define NPCX_DEVALTD_PSL_IN3_SL               5
#define NPCX_DEVALTD_PSL_IN4_AHI              6
#define NPCX_DEVALTD_PSL_IN4_SL               7

/* pin-mux for Others */
#define NPCX_DEVALTA_32K_OUT_SL               2
#define NPCX_DEVALTA_32KCLKIN_SL              3
#define NPCX_DEVALTA_NO_VCC1_RST              4
#define NPCX_DEVALTA_UART2_SL                 5
#define NPCX_DEVALTA_NO_PECI_EN               6
#define NPCX_DEVALTA_UART_SL1                 7
#define NPCX_DEVALTC_UART_SL2                 0
#define NPCX_DEVALTC_SHI_SL                   1

/* SHI module version 2 enable bit */
#define NPCX_DEVALTF_SHI_NEW                  7

/* pin-mux for WoV */
#define NPCX_DEVALTE_WOV_SL                   0
#define NPCX_DEVALTE_I2S_SL                   1
#define NPCX_DEVALTE_DMCLK_FAST               2

/* Others bit definitions */
#define NPCX_LFCGCALCNT_LPREG_CTL_EN          1

/******************************************************************************/
/* SCFG structure/macro functions */
/* Structure for pin-muxing */
struct npcx_alt {
	uint8_t group     : 4;
	uint8_t bit       : 3;
	uint8_t inverted  : 1;
};

/* Structure for low voltage control */
struct npcx_lvol {
	uint8_t ctrl      : 5;
	uint8_t bit       : 3;
};

struct gpio_lvol_map {
	struct npcx_gpio gpio;
	struct npcx_lvol lvol;
};

/* Macro functions for constructions */
#define NPCX_LVOL(ctl, pin) ((struct npcx_lvol) {.ctrl = ctl, .bit = pin})

/******************************************************************************/
/* SCFG enumeration */
/* ALT Groups */
enum {
	ALT_GROUP_0,
	ALT_GROUP_1,
	ALT_GROUP_2,
	ALT_GROUP_3,
	ALT_GROUP_4,
	ALT_GROUP_5,
	ALT_GROUP_6,
	ALT_GROUP_7,
	ALT_GROUP_8,
	ALT_GROUP_9,
	ALT_GROUP_A,
	ALT_GROUP_B,
	ALT_GROUP_C,
	ALT_GROUP_D,
	ALT_GROUP_E,
	ALT_GROUP_F,
	ALT_GROUP_COUNT
};

#endif /* _NPCX_SCFG_H */
