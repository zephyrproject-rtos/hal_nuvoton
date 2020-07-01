/* Copyright 2020 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef _NPCX_ESPI_H
#define _NPCX_ESPI_H

/******************************************************************************/
/* ESPI register definitions */
#define NPCX_ESPIID(base_addr)           REG32((base_addr) + 0X00)
#define NPCX_ESPICFG(base_addr)          REG32((base_addr) + 0X04)
#define NPCX_ESPISTS(base_addr)          REG32((base_addr) + 0X08)
#define NPCX_ESPIIE(base_addr)           REG32((base_addr) + 0X0C)
#define NPCX_ESPIWE(base_addr)           REG32((base_addr) + 0X10)
#define NPCX_VWREGIDX(base_addr)         REG32((base_addr) + 0X14)
#define NPCX_VWREGDATA(base_addr)        REG32((base_addr) + 0X18)
#define NPCX_OOBCTL(base_addr)           REG32((base_addr) + 0X24)
#define NPCX_FLASHRXRDHEAD(base_addr)    REG32((base_addr) + 0X28)
#define NPCX_FLASHTXWRHEAD(base_addr)    REG32((base_addr) + 0X2C)
#define NPCX_FLASHCFG(base_addr)         REG32((base_addr) + 0X34)
#define NPCX_FLASHCTL(base_addr)         REG32((base_addr) + 0X38)
#define NPCX_ESPIERR(base_addr)          REG32((base_addr) + 0X3C)

/* eSPI Virtual Wire channel registers */
#define NPCX_VWEVSM(ch)                  REG32((base_addr) + 0x100 + (4*(ch)))
#define NPCX_VWEVMS(ch)                  REG32((base_addr) + 0x140 + (4*(ch)))
#define NPCX_VWCTL                       REG32((base_addr) + 0x2FC)

/* eSPI register fields */
#define NPCX_ESPICFG_PCHANEN             0
#define NPCX_ESPICFG_VWCHANEN            1
#define NPCX_ESPICFG_OOBCHANEN           2
#define NPCX_ESPICFG_FLASHCHANEN         3
#define NPCX_ESPICFG_IOMODE_FIELD        FIELD(8, 9)
#define NPCX_ESPICFG_MAXFREQ_FIELD       FIELD(10, 12)
#define NPCX_ESPICFG_PCCHN_SUPP          24
#define NPCX_ESPICFG_VWCHN_SUPP          25
#define NPCX_ESPICFG_OOBCHN_SUPP         26
#define NPCX_ESPICFG_FLASHCHN_SUPP       27
#define NPCX_ESPIIE_IBRSTIE              0
#define NPCX_ESPIIE_CFGUPDIE             1
#define NPCX_ESPIIE_BERRIE               2
#define NPCX_ESPIIE_OOBRXIE              3
#define NPCX_ESPIIE_FLASHRXIE            4
#define NPCX_ESPIIE_SFLASHRDIE           5
#define NPCX_ESPIIE_PERACCIE             6
#define NPCX_ESPIIE_DFRDIE               7
#define NPCX_ESPIIE_VWUPDIE              8
#define NPCX_ESPIIE_ESPIRSTIE            9
#define NPCX_ESPIIE_PLTRSTIE             10
#define NPCX_ESPIIE_AMERRIE              15
#define NPCX_ESPIIE_AMDONEIE             16
#define NPCX_ESPIIE_BMTXDONEIE           19
#define NPCX_ESPIIE_PBMRXIE              20
#define NPCX_ESPIIE_PMSGRXIE             21
#define NPCX_ESPIIE_BMBURSTERRIE         22
#define NPCX_ESPIIE_BMBURSTDONEIE        23
#define NPCX_ESPIWE_IBRSTWE              0
#define NPCX_ESPIWE_CFGUPDWE             1
#define NPCX_ESPIWE_BERRWE               2
#define NPCX_ESPIWE_OOBRXWE              3
#define NPCX_ESPIWE_FLASHRXWE            4
#define NPCX_ESPIWE_PERACCWE             6
#define NPCX_ESPIWE_DFRDWE               7
#define NPCX_ESPIWE_VWUPDWE              8
#define NPCX_ESPIWE_ESPIRSTWE            9
#define NPCX_ESPIWE_PBMRXWE              20
#define NPCX_ESPIWE_PMSGRXWE             21
#define NPCX_ESPISTS_IBRST               0
#define NPCX_ESPISTS_CFGUPD              1
#define NPCX_ESPISTS_BERR                2
#define NPCX_ESPISTS_OOBRX               3
#define NPCX_ESPISTS_FLASHRX             4
#define NPCX_ESPISTS_SFLASHRD            5
#define NPCX_ESPISTS_PERACC              6
#define NPCX_ESPISTS_DFRD                7
#define NPCX_ESPISTS_VWUPD               8
#define NPCX_ESPISTS_ESPIRST             9
#define NPCX_ESPISTS_PLTRST              10
#define NPCX_ESPISTS_AMERR               15
#define NPCX_ESPISTS_AMDONE              16
#define NPCX_ESPISTS_VWUPDW              17
#define NPCX_ESPISTS_BMTXDONE            19
#define NPCX_ESPISTS_PBMRX               20
#define NPCX_ESPISTS_PMSGRX              21
#define NPCX_ESPISTS_BMBURSTERR          22
#define NPCX_ESPISTS_BMBURSTDONE         23
#define NPCX_ESPISTS_ESPIRST_LVL         24
/* eSPI Virtual Wire channel register fields */
#define NPCX_VWEVSM_WIRE                 FIELD(0, 4)
#define NPCX_VWEVMS_WIRE                 FIELD(0, 4)
#define NPCX_VWEVSM_VALID                FIELD(4, 4)
#define NPCX_VWEVMS_VALID                FIELD(4, 4)

/******************************************************************************/
/* ESPI macro functions */
/* Macro functions for eSPI CFG & IE */
#define IS_SLAVE_CHAN_ENABLE(ch)         IS_BIT_SET(NPCX_ESPICFG, ch)
#define IS_HOST_CHAN_EN(ch)              IS_BIT_SET(NPCX_ESPICFG, (ch+4))
#define ENABLE_ESPI_CHAN(ch)             SET_BIT(NPCX_ESPICFG, ch)
#define DISABLE_ESPI_CHAN(ch)            CLEAR_BIT(NPCX_ESPICFG, ch)
/* ESPI Slave Channel Support Definitions */
#define ESPI_SUPP_CH_PC                  BIT(NPCX_ESPICFG_PCCHN_SUPP)
#define ESPI_SUPP_CH_VM                  BIT(NPCX_ESPICFG_VWCHN_SUPP)
#define ESPI_SUPP_CH_OOB                 BIT(NPCX_ESPICFG_OOBCHN_SUPP)
#define ESPI_SUPP_CH_FLASH               BIT(NPCX_ESPICFG_FLASHCHN_SUPP)
#define ESPI_SUPP_CH_ALL                 (ESPI_SUPP_CH_PC | ESPI_SUPP_CH_VM | \
					  ESPI_SUPP_CH_OOB | ESPI_SUPP_CH_FLASH)
/* ESPI Interrupts Enable Definitions */
#define ESPIIE_IBRST                     BIT(NPCX_ESPIIE_IBRSTIE)
#define ESPIIE_CFGUPD                    BIT(NPCX_ESPIIE_CFGUPDIE)
#define ESPIIE_BERR                      BIT(NPCX_ESPIIE_BERRIE)
#define ESPIIE_OOBRX                     BIT(NPCX_ESPIIE_OOBRXIE)
#define ESPIIE_FLASHRX                   BIT(NPCX_ESPIIE_FLASHRXIE)
#define ESPIIE_SFLASHRD                  BIT(NPCX_ESPIIE_SFLASHRDIE)
#define ESPIIE_PERACC                    BIT(NPCX_ESPIIE_PERACCIE)
#define ESPIIE_DFRD                      BIT(NPCX_ESPIIE_DFRDIE)
#define ESPIIE_VWUPD                     BIT(NPCX_ESPIIE_VWUPDIE)
#define ESPIIE_ESPIRST                   BIT(NPCX_ESPIIE_ESPIRSTIE)
#define ESPIIE_PLTRST                    BIT(NPCX_ESPIIE_PLTRSTIE)
#define ESPIIE_AMERR                     BIT(NPCX_ESPIIE_AMERRIE)
#define ESPIIE_AMDONE                    BIT(NPCX_ESPIIE_AMDONEIE)
#define ESPIIE_BMTXDONE                  BIT(NPCX_ESPIIE_BMTXDONEIE)
#define ESPIIE_PBMRX                     BIT(NPCX_ESPIIE_PBMRXIE)
#define ESPIIE_PMSGRX                    BIT(NPCX_ESPIIE_PMSGRXIE)
#define ESPIIE_BMBURSTERR                BIT(NPCX_ESPIIE_BMBURSTERRIE)
#define ESPIIE_BMBURSTDONE               BIT(NPCX_ESPIIE_BMBURSTDONEIE)
/* eSPI Interrupts for VW */
#define ESPIIE_VW                        (ESPIIE_VWUPD | ESPIIE_PLTRST)
/* eSPI Interrupts for Generic */
#define ESPIIE_GENERIC                   (ESPIIE_IBRST | ESPIIE_CFGUPD | \
					  ESPIIE_BERR | ESPIIE_ESPIRST)
/* ESPI Wake-up Enable Definitions */
#define ESPIWE_IBRST                     BIT(NPCX_ESPIWE_IBRSTWE)
#define ESPIWE_CFGUPD                    BIT(NPCX_ESPIWE_CFGUPDWE)
#define ESPIWE_BERR                      BIT(NPCX_ESPIWE_BERRWE)
#define ESPIWE_OOBRX                     BIT(NPCX_ESPIWE_OOBRXWE)
#define ESPIWE_FLASHRX                   BIT(NPCX_ESPIWE_FLASHRXWE)
#define ESPIWE_PERACC                    BIT(NPCX_ESPIWE_PERACCWE)
#define ESPIWE_DFRD                      BIT(NPCX_ESPIWE_DFRDWE)
#define ESPIWE_VWUPD                     BIT(NPCX_ESPIWE_VWUPDWE)
#define ESPIWE_ESPIRST                   BIT(NPCX_ESPIWE_ESPIRSTWE)
#define ESPIWE_PBMRX                     BIT(NPCX_ESPIWE_PBMRXWE)
#define ESPIWE_PMSGRX                    BIT(NPCX_ESPIWE_PMSGRXWE)
/* eSPI  Wake-up enable for VW */
#define ESPIWE_VW                        ESPIWE_VWUPD
/* eSPI  Wake-up enable for Generic */
#define ESPIWE_GENERIC                   (ESPIWE_IBRST | ESPIWE_CFGUPD | \
					  ESPIWE_BERR)
/* Macro functions for eSPI VW */
#define ESPI_VWEVMS_NUM                  12
#define ESPI_VWEVSM_NUM                  10
#define ESPI_VW_IDX_WIRE_NUM             4
/* Determine Virtual Wire type */
#define VM_TYPE(i)              ((i >= 0   && i <=  1) ? ESPI_VW_TYPE_INT_EV : \
				 (i >= 2   && i <=  7) ? ESPI_VW_TYPE_SYS_EV : \
				 (i >= 64  && i <= 127) ? ESPI_VW_TYPE_PLT : \
				 (i >= 128 && i <= 255) ? ESPI_VW_TYPE_GPIO : \
							ESPI_VW_TYPE_NONE)

/* Bit field manipulation for VWEVMS Value */
#define VWEVMS_INX(i)                ((i<<8)  & 0x00007F00)
#define VWEVMS_INX_EN(n)             ((n<<15) & 0x00008000)
#define VWEVMS_PLTRST_EN(p)          ((p<<17) & 0x00020000)
#define VWEVMS_INT_EN(e)             ((e<<18) & 0x00040000)
#define VWEVMS_ESPIRST_EN(r)         ((r<<19) & 0x00080000)
#define VWEVMS_WK_EN(e)              ((e<<20) & 0x00100000)
#define VWEVMS_INTWK_EN(e)           (VWEVMS_INT_EN(e) | VWEVMS_WK_EN(e))
#define VWEVMS_FIELD(i, n, p, e, r)  (VWEVMS_INX(i) | VWEVMS_INX_EN(n) | \
				VWEVMS_PLTRST_EN(p) | VWEVMS_INTWK_EN(e) | \
				VWEVMS_ESPIRST_EN(r))
#define VWEVMS_IDX_GET(reg)          (((reg & 0x00007F00)>>8))

/* Bit field manipulation for VWEVSM Value */
#define VWEVSM_VALID_N(v)            ((v<<4)  & 0x000000F0)
#define VWEVSM_INX(i)                ((i<<8)  & 0x00007F00)
#define VWEVSM_INX_EN(n)             ((n<<15) & 0x00008000)
#define VWEVSM_DIRTY(d)              ((d<<16) & 0x00010000)
#define VWEVSM_PLTRST_EN(p)          ((p<<17) & 0x00020000)
#define VWEVSM_CDRST_EN(c)           ((c<<19) & 0x00080000)
#define VWEVSM_FIELD(i, n, v, p, c)  (VWEVSM_INX(i) | VWEVSM_INX_EN(n) | \
				VWEVSM_VALID_N(v) | VWEVSM_PLTRST_EN(p) |\
				VWEVSM_CDRST_EN(c))
#define VWEVSM_IDX_GET(reg)          (((reg & 0x00007F00)>>8))

/* define macro to handle SMI/SCI Virtual Wire */
/* Read SMI VWire status from VWEVSM(offset 2) register. */
#define SMI_STATUS_MASK    ((uint8_t) (NPCX_VWEVSM(2) & 0x00000002))
/*
 * Read SCI VWire status from VWEVSM(offset 2) register.
 * Left shift 2 to meet the SCIB field in HIPMIC register.
 */
#define SCI_STATUS_MASK    (((uint8_t) (NPCX_VWEVSM(2) & 0x00000001)) << 2)
#define SCIB_MASK(v)       (v << NPCX_HIPMIC_SCIB)
#define SMIB_MASK(v)       (v << NPCX_HIPMIC_SMIB)
#define NPCX_VW_SCI(level)  ((NPCX_HIPMIC(PM_CHAN_1) & 0xF9) | \
				SMI_STATUS_MASK | SCIB_MASK(level))
#define NPCX_VW_SMI(level)  ((NPCX_HIPMIC(PM_CHAN_1) & 0xF9) | \
				SCI_STATUS_MASK | SMIB_MASK(level))

#if (FMCLK <= 33000000)
#define NPCX_ESPI_MAXFREQ_MAX	NPCX_ESPI_MAXFREQ_33
#else
#define NPCX_ESPI_MAXFREQ_MAX	NPCX_ESPI_MAXFREQ_50
#endif
/******************************************************************************/
/* ESPI enumeration */
/* eSPI enumeration */
/* eSPI channels */
enum {
	NPCX_ESPI_CH_PC = 0,
	NPCX_ESPI_CH_VW,
	NPCX_ESPI_CH_OOB,
	NPCX_ESPI_CH_FLASH,
	NPCX_ESPI_CH_COUNT,
	NPCX_ESPI_CH_GENERIC,
	NPCX_ESPI_CH_NONE = 0xFF
};

/* eSPI IO modes */
enum {
	NPCX_ESPI_IO_MODE_SINGLE = 0,
	NPCX_ESPI_IO_MODE_DUAL   = 1,
	NPCX_ESPI_IO_MODE_Quad   = 2,
	NPCX_ESPI_IO_MODE_ALL    = 3,
	NPCX_ESPI_IO_MODE_NONE   = 0xFF
};

/* eSPI max supported frequency */
enum {
	NPCX_ESPI_MAXFREQ_20   = 0,
	NPCX_ESPI_MAXFREQ_25   = 1,
	NPCX_ESPI_MAXFREQ_33   = 2,
	NPCX_ESPI_MAXFREQ_50   = 3,
	NPCX_ESPI_MAXFREQ_NOOE = 0xFF
};

/* VW types */
enum {
	ESPI_VW_TYPE_INT_EV,            /* Interrupt event */
	ESPI_VW_TYPE_SYS_EV,            /* System Event */
	ESPI_VW_TYPE_PLT,               /* Platform specific */
	ESPI_VW_TYPE_GPIO,              /* General Purpose I/O Expander */
	ESPI_VW_TYPE_NUM,
	ESPI_VW_TYPE_NONE = 0xFF
};

#endif /* _NPCX_ESPI_H */
