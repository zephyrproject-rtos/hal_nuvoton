/* Copyright 2020 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef _NPCX_CLOCK_H
#define _NPCX_CLOCK_H

/******************************************************************************/
/* Clock controller register definitions */

/* High Frequency Clock Generator (HFCG) registers */
#define NPCX_HFCGCTRL(base_addr)              REG8((base_addr) + 0x000)
#define NPCX_HFCGML(base_addr)                REG8((base_addr) + 0x002)
#define NPCX_HFCGMH(base_addr)                REG8((base_addr) + 0x004)
#define NPCX_HFCGN(base_addr)                 REG8((base_addr) + 0x006)
#define NPCX_HFCGP(base_addr)                 REG8((base_addr) + 0x008)
#define NPCX_HFCBCD(base_addr)                REG8((base_addr) + 0x010)
#define NPCX_HFCBCD1(base_addr)               REG8((base_addr) + 0x012)
#define NPCX_HFCBCD2(base_addr)               REG8((base_addr) + 0x014)

/* HFCG register fields */
#define NPCX_HFCGCTRL_LOAD                    0
#define NPCX_HFCGCTRL_LOCK                    2
#define NPCX_HFCGCTRL_CLK_CHNG                7

/******************************************************************************/
/* Low Frequency Clock Generator (LFCG) registers */
#define NPCX_LFCGCTL(base_addr)               REG8((base_addr) + 0x100)
#define NPCX_HFRDI(base_addr)                REG16((base_addr) + 0x102)
#define NPCX_HFRDF(base_addr)                REG16((base_addr) + 0x104)
#define NPCX_FRCDIV(base_addr)               REG16((base_addr) + 0x106)
#define NPCX_DIVCOR1(base_addr)              REG16((base_addr) + 0x108)
#define NPCX_DIVCOR2(base_addr)              REG16((base_addr) + 0x10A)
#define NPCX_LFCGCTL2(base_addr)              REG8((base_addr) + 0x114)

/* LFCG register fields */
#define NPCX_LFCGCTL_XTCLK_VAL                7
#define NPCX_LFCGCTL2_XT_OSC_SL_EN            6

/******************************************************************************/
/* Power Management Controller (PMC) Registers */
#define NPCX_PMCSR(base_addr)                 REG8((base_addr) + 0x000)
#define NPCX_ENIDL_CTL(base_addr)             REG8((base_addr) + 0x003)
#define NPCX_DISIDL_CTL(base_addr)            REG8((base_addr) + 0x004)
#define NPCX_DISIDL_CTL1(base_addr)           REG8((base_addr) + 0x005)
#define NPCX_PWDWN_CTL_ADDR(base_addr, n)     (((n) < 6) ? \
			                       ((base_addr) + 0x008 + (n)) : \
			                       ((base_addr) + 0x024))
#define NPCX_PWDWN_CTL(base_addr, n)          REG8(NPCX_PWDWN_CTL_ADDR \
		                               (base_addr, n))
#define NPCX_RAM_PD(base_addr, n)             REG8((base_addr) + 0x020 + n)

/* PMC register fields */
#define NPCX_PMCSR_DI_INSTW                   0
#define NPCX_PMCSR_DHF                        1
#define NPCX_PMCSR_IDLE                       2
#define NPCX_PMCSR_NWBI                       3
#define NPCX_PMCSR_OHFC                       6
#define NPCX_PMCSR_OLFC                       7
#define NPCX_DISIDL_CTL_RAM_DID               5
#define NPCX_ENIDL_CTL_ADC_LFSL               7
#define NPCX_ENIDL_CTL_LP_WK_CTL              6
#define NPCX_ENIDL_CTL_PECI_ENI               2
#define NPCX_ENIDL_CTL_ADC_ACC_DIS            1
#define NPCX_PWDWN_CTL1_KBS_PD                0
#define NPCX_PWDWN_CTL1_SDP_PD                1
#define NPCX_PWDWN_CTL1_FIU_PD                2
#define NPCX_PWDWN_CTL1_PS2_PD                3
#define NPCX_PWDWN_CTL1_UART_PD               4
#define NPCX_PWDWN_CTL1_MFT1_PD               5
#define NPCX_PWDWN_CTL1_MFT2_PD               6
#define NPCX_PWDWN_CTL1_MFT3_PD               7
#define NPCX_PWDWN_CTL2_PWM0_PD               0
#define NPCX_PWDWN_CTL2_PWM1_PD               1
#define NPCX_PWDWN_CTL2_PWM2_PD               2
#define NPCX_PWDWN_CTL2_PWM3_PD               3
#define NPCX_PWDWN_CTL2_PWM4_PD               4
#define NPCX_PWDWN_CTL2_PWM5_PD               5
#define NPCX_PWDWN_CTL2_PWM6_PD               6
#define NPCX_PWDWN_CTL2_PWM7_PD               7
#define NPCX_PWDWN_CTL3_SMB0_PD               0
#define NPCX_PWDWN_CTL3_SMB1_PD               1
#define NPCX_PWDWN_CTL3_SMB2_PD               2
#define NPCX_PWDWN_CTL3_SMB3_PD               3
#define NPCX_PWDWN_CTL3_SMB4_PD               4
#define NPCX_PWDWN_CTL3_GMDA_PD               7
#define NPCX_PWDWN_CTL4_ITIM1_PD              0
#define NPCX_PWDWN_CTL4_ITIM2_PD              1
#define NPCX_PWDWN_CTL4_ITIM3_PD              2
#define NPCX_PWDWN_CTL4_ADC_PD                4
#define NPCX_PWDWN_CTL4_PECI_PD               5
#define NPCX_PWDWN_CTL4_PWM6_PD               6
#define NPCX_PWDWN_CTL4_SPIP_PD               7
#define NPCX_PWDWN_CTL5_SHI_PD                1
#define NPCX_PWDWN_CTL5_MRFSH_DIS             2
#define NPCX_PWDWN_CTL5_C2HACC_PD             3
#define NPCX_PWDWN_CTL5_SHM_REG_PD            4
#define NPCX_PWDWN_CTL5_SHM_PD                5
#define NPCX_PWDWN_CTL5_DP80_PD               6
#define NPCX_PWDWN_CTL5_MSWC_PD               7
#define NPCX_PWDWN_CTL6_ITIM4_PD              0
#define NPCX_PWDWN_CTL6_ITIM5_PD              1
#define NPCX_PWDWN_CTL6_ITIM6_PD              2
#define NPCX_PWDWN_CTL6_ESPI_PD               7
#define NPCX_PWDWN_CTL7_SMB5_PD               0
#define NPCX_PWDWN_CTL7_SMB6_PD               1
#define NPCX_PWDWN_CTL7_SMB7_PD               2
#define NPCX_PWDWN_CTL7_ITIM64_PD             5
#define NPCX_PWDWN_CTL7_UART2_PD              6
#define NPCX_PWDWN_CTL7_WOV_PD                7

/******************************************************************************/
/* Clock controller macro functions */
/*
 * NPCX7 and later series clock tree:
 * (Please refer Figure 58. for more information.)
 *
 * Suggestion:
 * - OSC_CLK >= 80MHz, XF_RANGE should be 1, else 0.
 * - CORE_CLK > 66MHz, AHB6DIV should be 1, else 0.
 * - CORE_CLK > 50MHz, FIUDIV should be 1, else 0.
 */

/* Target OSC_CLK freq */
#define OSC_CLK   OSC_CLK_VAL
/* Core domain clock */
#define CORE_CLK  CORE_CLK_VAL
/* Low Frequency clock */
#define LFCLK     32768
/* Core clock prescaler */
#define FPRED ((OSC_CLK / CORE_CLK) - 1 )

/* FMUL clock */
#if (OSC_CLK >= 80000000)
#define FMCLK (OSC_CLK / 2) /* FMUL clock = OSC_CLK/2 if OSC_CLK >= 80MHz */
#else
#define FMCLK OSC_CLK /* FMUL clock = OSC_CLK */
#endif

/* APBs source clock */
#define APBSRC_CLK OSC_CLK
/* APB1 clock divider, default value (APB1 clock = OSC_CLK/6) */
#define APB1DIV (CONFIG_CLOCK_NPCX_APB1_PRESCALER - 1)
/* APB2 clock divider, default value (APB2 clock = OSC_CLK/6) */
#define APB2DIV (CONFIG_CLOCK_NPCX_APB2_PRESCALER - 1)
/* APB3 clock divider, default value (APB3 clock = OSC_CLK/6) */
#define APB3DIV (CONFIG_CLOCK_NPCX_APB3_PRESCALER - 1)

/* AHB6 clock */
#if (CORE_CLK > 66000000)
#define AHB6DIV 1 /* AHB6_CLK = CORE_CLK/2 if CORE_CLK > 66MHz */
#else
#define AHB6DIV 0 /* AHB6_CLK = CORE_CLK */
#endif
/* FIU clock divider */
#if (CORE_CLK > 50000000)
#define FIUDIV 1 /* FIU_CLK = CORE_CLK/2 */
#else
#define FIUDIV 0 /* FIU_CLK = CORE_CLK */
#endif

/* Get APB clock freq */
#define NPCX_APB_CLOCK(no) (APBSRC_CLK / (APB##no##DIV + 1))

/*
 * Frequency multiplier M/N value definitions according to the requested
 * OSC_CLK (Unit:Hz).
 */
#if (OSC_CLK > 80000000)
#define HFCGN    0x82 /* Set XF_RANGE as 1 if OSC_CLK >= 80MHz */
#else
#define HFCGN    0x02
#endif
#if   (OSC_CLK == 100000000)
#define HFCGMH   0x0B
#define HFCGML   0xEC
#elif (OSC_CLK == 90000000)
#define HFCGMH   0x0A
#define HFCGML   0xBA
#elif (OSC_CLK == 80000000)
#define HFCGMH   0x09
#define HFCGML   0x89
#elif (OSC_CLK == 66000000)
#define HFCGMH   0x0F
#define HFCGML   0xBC
#elif (OSC_CLK == 50000000)
#define HFCGMH   0x0B
#define HFCGML   0xEC
#elif (OSC_CLK == 48000000)
#define HFCGMH   0x0B
#define HFCGML   0x72
#elif (OSC_CLK == 40000000)
#define HFCGMH   0x09
#define HFCGML   0x89
#elif (OSC_CLK == 33000000)
#define HFCGMH   0x07
#define HFCGML   0xDE
#elif (OSC_CLK == 30000000)
#define HFCGMH   0x07
#define HFCGML   0x27
#elif (OSC_CLK == 26000000)
#define HFCGMH   0x06
#define HFCGML   0x33
#else
#error "Unsupported OSC_CLK Frequency"
#endif

#endif /* _NPCX_CLOCK_H */
