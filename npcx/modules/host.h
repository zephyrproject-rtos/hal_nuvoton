/* Copyright 2020 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef _NPCX_HOST_H
#define _NPCX_HOST_H

/******************************************************************************/
/* Host-EC Interface register definitions */

/* Keyboard/Mouse Interface Controller (KBC) Registers */
#define NPCX_HICTRL(base_addr)           REG8((base_addr) + 0x000)
#define NPCX_HIIRQC(base_addr)           REG8((base_addr) + 0x002)
#define NPCX_HIKMST(base_addr)           REG8((base_addr) + 0x004)
#define NPCX_HIKDO(base_addr)            REG8((base_addr) + 0x006)
#define NPCX_HIMDO(base_addr)            REG8((base_addr) + 0x008)
#define NPCX_KBCVER(base_addr)           REG8((base_addr) + 0x009)
#define NPCX_HIKMDI(base_addr)           REG8((base_addr) + 0x00A)
#define NPCX_SHIKMDI(base_addr)          REG8((base_addr) + 0x00B)

/* KBC register field */
#define NPCX_HICTRL_OBFKIE               0 /* Automatic Serial IRQ1 for KBC */
#define NPCX_HICTRL_OBFMIE               1 /* Automatic Serial IRQ12 for Mouse*/
#define NPCX_HICTRL_OBECIE               2 /* KBC OBE interrupt enable */
#define NPCX_HICTRL_IBFCIE               3 /* KBC IBF interrupt enable */
#define NPCX_HICTRL_PMIHIE               4 /* Automatic Serial IRQ11 for PMC1 */
#define NPCX_HICTRL_PMIOCIE              5 /* PMC1 OBE interrupt enable */
#define NPCX_HICTRL_PMICIE               6 /* PMC1 IBF interrupt enable */
#define NPCX_HICTRL_FW_OBF               7 /* Firmware control over OBF */

#define NPCX_HIKMST_OBF                  0 /* KB output buffer is full */

/******************************************************************************/
/* Power Management Channel (PM Channel) register definitions */
#define NPCX_HIPMST(base_addr)           REG8((base_addr) + 0x000)
#define NPCX_HIPMDO(base_addr)           REG8((base_addr) + 0x002)
#define NPCX_HIPMDI(base_addr)           REG8((base_addr) + 0x004)
#define NPCX_SHIPMDI(base_addr)          REG8((base_addr) + 0x005)
#define NPCX_HIPMDOC(base_addr)          REG8((base_addr) + 0x006)
#define NPCX_HIPMDOM(base_addr)          REG8((base_addr) + 0x008)
#define NPCX_HIPMDIC(base_addr)          REG8((base_addr) + 0x00A)
#define NPCX_HIPMCTL(base_addr)          REG8((base_addr) + 0x00C)
#define NPCX_HIPMCTL2(base_addr)         REG8((base_addr) + 0x00D)
#define NPCX_HIPMIC(base_addr)           REG8((base_addr) + 0x00E)
#define NPCX_HIPMIE(base_addr)           REG8((base_addr) + 0x010)

/* PM Channel register fields */
#define NPCX_HIPMIE_SCIE                 1
#define NPCX_HIPMIE_SMIE                 2
#define NPCX_HIPMCTL_IBFIE               0
#define NPCX_HIPMCTL_SCIPOL              6
#define NPCX_HIPMST_F0                   2 /* EC_LPC_CMDR_BUSY */
#define NPCX_HIPMST_ST0                  4 /* EC_LPC_CMDR_ACPI_BRST */
#define NPCX_HIPMST_ST1                  5 /* EC_LPC_CMDR_SCI */
#define NPCX_HIPMST_ST2                  6 /* EC_LPC_CMDR_SMI */
#define NPCX_HIPMIC_SMIB                 1
#define NPCX_HIPMIC_SCIB                 2
#define NPCX_HIPMIC_SMIPOL               6

/******************************************************************************/
/* SuperI/O Internal Bus (SIB) register definitions */
#define NPCX_IHIOA                      REG16(NPCX_SIB_BASE_ADDR + 0x000)
#define NPCX_IHD                         REG8(NPCX_SIB_BASE_ADDR + 0x002)
#define NPCX_LKSIOHA                    REG16(NPCX_SIB_BASE_ADDR + 0x004)
#define NPCX_SIOLV                      REG16(NPCX_SIB_BASE_ADDR + 0x006)
#define NPCX_CRSMAE                     REG16(NPCX_SIB_BASE_ADDR + 0x008)
#define NPCX_SIBCTRL                     REG8(NPCX_SIB_BASE_ADDR + 0x00A)
#define NPCX_C2H_VER                     REG8(NPCX_SIB_BASE_ADDR + 0x00E)
/* SIB register fields  */
#define NPCX_SIBCTRL_CSAE                0
#define NPCX_SIBCTRL_CSRD                1
#define NPCX_SIBCTRL_CSWR                2
#define NPCX_LKSIOHA_LKCFG               0
#define NPCX_LKSIOHA_LKHIKBD             11
#define NPCX_CRSMAE_CFGAE                0
#define NPCX_CRSMAE_HIKBDAE              11

/******************************************************************************/
/* Host-EC Interface macro functions */



/******************************************************************************/
/* Host-EC Interface enumeration */
/*
 * PM Channel enumeration
 */
enum PM_CHANNEL_T {
	PM_CHAN_1,
	PM_CHAN_2,
	PM_CHAN_3,
	PM_CHAN_4
};

#endif /* _NPCX_HOST_H */
