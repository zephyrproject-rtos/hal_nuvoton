/* Copyright 2020 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef _NPCX_I2C_H
#define _NPCX_I2C_H

/******************************************************************************/
/* SMBus register definitions */
#define NPCX_SMBSDA(base_addr)                REG8((base_addr) + 0x000)
#define NPCX_SMBST(base_addr)                 REG8((base_addr) + 0x002)
#define NPCX_SMBCST(base_addr)                REG8((base_addr) + 0x004)
#define NPCX_SMBCTL1(base_addr)               REG8((base_addr) + 0x006)
#define NPCX_SMBADDR1(base_addr)              REG8((base_addr) + 0x008)
#define NPCX_SMBTMR_ST(base_addr)             REG8((base_addr) + 0x009)
#define NPCX_SMBCTL2(base_addr)               REG8((base_addr) + 0x00A)
#define NPCX_SMBTMR_EN(base_addr)             REG8((base_addr) + 0x00B)
#define NPCX_SMBADDR2(base_addr)              REG8((base_addr) + 0x00C)
#define NPCX_SMBCTL3(base_addr)               REG8((base_addr) + 0x00E)
/* SMB Registers in bank 0 */
#define NPCX_SMBADDR3(base_addr)              REG8((base_addr) + 0x010)
#define NPCX_SMBADDR7(base_addr)              REG8((base_addr) + 0x011)
#define NPCX_SMBADDR4(base_addr)              REG8((base_addr) + 0x012)
#define NPCX_SMBADDR8(base_addr)              REG8((base_addr) + 0x013)
#define NPCX_SMBADDR5(base_addr)              REG8((base_addr) + 0x014)
#define NPCX_SMBADDR6(base_addr)              REG8((base_addr) + 0x016)
#define NPCX_SMBCST2(base_addr)               REG8((base_addr) + 0x018)
#define NPCX_SMBCST3(base_addr)               REG8((base_addr) + 0x019)
#define NPCX_SMBCTL4(base_addr)               REG8((base_addr) + 0x01A)
#define NPCX_SMBSCLLT(base_addr)              REG8((base_addr) + 0x01C)
#define NPCX_SMBFIF_CTL(base_addr)            REG8((base_addr) + 0x01D)
#define NPCX_SMBSCLHT(base_addr)              REG8((base_addr) + 0x01E)
/* SMB Registers in bank 1 */
#define NPCX_SMBFIF_CTS(base_addr)            REG8((base_addr) + 0x010)
#define NPCX_SMBTXF_CTL(base_addr)            REG8((base_addr) + 0x012)
#define NPCX_SMB_T_OUT(base_addr)             REG8((base_addr) + 0x014)
/*
 * These two registers are the same as in bank 0
 * #define NPCX_SMBCST2(base_addr)            REG8((base_addr) + 0x018)
 * #define NPCX_SMBCST3(base_addr)            REG8((base_addr) + 0x019)
 */
#define NPCX_SMBTXF_STS(base_addr)            REG8((base_addr) + 0x01A)
#define NPCX_SMBRXF_STS(base_addr)            REG8((base_addr) + 0x01C)
#define NPCX_SMBRXF_CTL(base_addr)            REG8((base_addr) + 0x01E)

/* SMBus register fields */
#define NPCX_SMBST_XMIT                       0
#define NPCX_SMBST_MASTER                     1
#define NPCX_SMBST_NMATCH                     2
#define NPCX_SMBST_STASTR                     3
#define NPCX_SMBST_NEGACK                     4
#define NPCX_SMBST_BER                        5
#define NPCX_SMBST_SDAST                      6
#define NPCX_SMBST_SLVSTP                     7
#define NPCX_SMBCST_BUSY                      0
#define NPCX_SMBCST_BB                        1
#define NPCX_SMBCST_MATCH                     2
#define NPCX_SMBCST_GCMATCH                   3
#define NPCX_SMBCST_TSDA                      4
#define NPCX_SMBCST_TGSCL                     5
#define NPCX_SMBCST_MATCHAF                   6
#define NPCX_SMBCST_ARPMATCH                  7
#define NPCX_SMBCST2_MATCHA1F                 0
#define NPCX_SMBCST2_MATCHA2F                 1
#define NPCX_SMBCST2_MATCHA3F                 2
#define NPCX_SMBCST2_MATCHA4F                 3
#define NPCX_SMBCST2_MATCHA5F                 4
#define NPCX_SMBCST2_MATCHA6F                 5
#define NPCX_SMBCST2_MATCHA7F                 6
#define NPCX_SMBCST2_INTSTS                   7
#define NPCX_SMBCST3_MATCHA8F                 0
#define NPCX_SMBCST3_MATCHA9F                 1
#define NPCX_SMBCST3_MATCHA10F                2
#define NPCX_SMBCTL1_START                    0
#define NPCX_SMBCTL1_STOP                     1
#define NPCX_SMBCTL1_INTEN                    2
#define NPCX_SMBCTL1_ACK                      4
#define NPCX_SMBCTL1_GCMEN                    5
#define NPCX_SMBCTL1_NMINTE                   6
#define NPCX_SMBCTL1_STASTRE                  7
#define NPCX_SMBCTL2_ENABLE                   0
#define NPCX_SMBCTL2_SCLFRQ7_FIELD            FIELD(1, 7)
#define NPCX_SMBCTL3_ARPMEN                   2
#define NPCX_SMBCTL3_SCLFRQ2_FIELD            FIELD(0, 2)
#define NPCX_SMBCTL3_IDL_START                3
#define NPCX_SMBCTL3_400K                     4
#define NPCX_SMBCTL3_BNK_SEL                  5
#define NPCX_SMBCTL3_SDA_LVL                  6
#define NPCX_SMBCTL3_SCL_LVL                  7
#define NPCX_SMBCTL4_HLDT_FIELD               FIELD(0, 6)
#define NPCX_SMBCTL4_LVL_WE                   7
#define NPCX_SMBADDR1_SAEN                    7
#define NPCX_SMBADDR2_SAEN                    7
#define NPCX_SMBADDR3_SAEN                    7
#define NPCX_SMBADDR4_SAEN                    7
#define NPCX_SMBADDR5_SAEN                    7
#define NPCX_SMBADDR6_SAEN                    7
#define NPCX_SMBADDR7_SAEN                    7
#define NPCX_SMBADDR8_SAEN                    7
#define NPCX_SMBSEL_SMB4SEL                   4
#define NPCX_SMBSEL_SMB5SEL                   5
#define NPCX_SMBSEL_SMB6SEL                   6
#define NPCX_SMBFIF_CTS_RXF_TXE               1
#define NPCX_SMBFIF_CTS_CLR_FIFO              6

#define NPCX_SMBFIF_CTL_FIFO_EN               4

#define NPCX_SMBRXF_STS_RX_THST               6

/* RX FIFO threshold */
#define NPCX_SMBRXF_CTL_RX_THR                FIELD(0, 6)
/*
 * In master receiving mode, last byte in FIFO should send ACK or NACK
 */
#define NPCX_SMBRXF_CTL_LAST                  7


/******************************************************************************/
/* SMBus macro functions */

/******************************************************************************/
/* SMBus enumeration */
/*
 * SMB enumeration
 * I2C port definitions.
 */
enum {
	NPCX_I2C_PORT0_0  = 0, /* I2C port 0, bus 0 */
	NPCX_I2C_PORT1_0,      /* I2C port 1, bus 0 */
	NPCX_I2C_PORT2_0,      /* I2C port 2, bus 0 */
	NPCX_I2C_PORT3_0,      /* I2C port 3, bus 0 */
	NPCX_I2C_PORT4_0,      /* I2C port 4, bus 0 */
	NPCX_I2C_PORT4_1,      /* I2C port 4, bus 1 */
	NPCX_I2C_PORT5_0,      /* I2C port 5, bus 0 */
	NPCX_I2C_PORT5_1,      /* I2C port 5, bus 1 */
	NPCX_I2C_PORT6_0,      /* I2C port 6, bus 0 */
	NPCX_I2C_PORT6_1,      /* I2C port 6, bus 1 */
	NPCX_I2C_PORT7_0,      /* I2C port 7, bus 0 */
	NPCX_I2C_COUNT,
};

#endif /* _NPCX_I2C_H */
