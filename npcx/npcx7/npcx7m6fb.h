/* Copyright 2020 The Chromium OS Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef NPCX7M6FB_H
#define NPCX7M6FB_H

#ifdef __cplusplus
extern "C" {
#endif

#include "reg_type.h"
#include "reg_access.h"

/******************************************************************************/
/*
 * IRQ Mapping in in NPCX7M6FB soc
 */
#define NPCX_IRQ_0                       0
#define NPCX_IRQ_1                       1
#define NPCX_IRQ_2                       2
#define NPCX_IRQ_3                       3
#define NPCX_IRQ_4                       4
#define NPCX_IRQ_5                       5
#define NPCX_IRQ_6                       6
#define NPCX_IRQ_7                       7
#define NPCX_IRQ_8                       8
#define NPCX_IRQ_9                       9
#define NPCX_IRQ_10                      10
#define NPCX_IRQ_11                      11
#define NPCX_IRQ_12                      12
#define NPCX_IRQ_13                      13
#define NPCX_IRQ_14                      14
#define NPCX_IRQ_15                      15
#define NPCX_IRQ_16                      16
#define NPCX_IRQ_17                      17
#define NPCX_IRQ_18                      18
#define NPCX_IRQ_19                      19
#define NPCX_IRQ_20                      20
#define NPCX_IRQ_21                      21
#define NPCX_IRQ_22                      22
#define NPCX_IRQ_23                      23
#define NPCX_IRQ_24                      24
#define NPCX_IRQ_25                      25
#define NPCX_IRQ_26                      26
#define NPCX_IRQ_27                      27
#define NPCX_IRQ_28                      28
#define NPCX_IRQ_29                      29
#define NPCX_IRQ_30                      30
#define NPCX_IRQ_31                      31
#define NPCX_IRQ_32                      32
#define NPCX_IRQ_33                      33
#define NPCX_IRQ_34                      34
#define NPCX_IRQ_35                      35
#define NPCX_IRQ_36                      36
#define NPCX_IRQ_37                      37
#define NPCX_IRQ_38                      38
#define NPCX_IRQ_39                      39
#define NPCX_IRQ_40                      40
#define NPCX_IRQ_41                      41
#define NPCX_IRQ_42                      42
#define NPCX_IRQ_43                      43
#define NPCX_IRQ_44                      44
#define NPCX_IRQ_45                      45
#define NPCX_IRQ_46                      46
#define NPCX_IRQ_47                      47
#define NPCX_IRQ_48                      48
#define NPCX_IRQ_49                      49
#define NPCX_IRQ_50                      50
#define NPCX_IRQ_51                      51
#define NPCX_IRQ_52                      52
#define NPCX_IRQ_53                      53
#define NPCX_IRQ_54                      54
#define NPCX_IRQ_55                      55
#define NPCX_IRQ_56                      56
#define NPCX_IRQ_57                      57
#define NPCX_IRQ_58                      58
#define NPCX_IRQ_59                      59
#define NPCX_IRQ_60                      60
#define NPCX_IRQ_61                      61
#define NPCX_IRQ_62                      62
#define NPCX_IRQ_63                      63

#define NPCX_IRQ0_NOUSED                 NPCX_IRQ_0
#define NPCX_IRQ1_NOUSED                 NPCX_IRQ_1
#define NPCX_IRQ_KBSCAN                  NPCX_IRQ_2
#define NPCX_IRQ_PM_CHAN_OBE             NPCX_IRQ_3
#define NPCX_IRQ_PECI                    NPCX_IRQ_4
#define NPCX_IRQ5_NOUSED                 NPCX_IRQ_5
#define NPCX_IRQ_PORT80                  NPCX_IRQ_6
#define NPCX_IRQ_MTC_WKINTAD_0           NPCX_IRQ_7
#define NPCX_IRQ_SMB8                    NPCX_IRQ_8
#define NPCX_IRQ_MFT_1                   NPCX_IRQ_9
#define NPCX_IRQ_ADC                     NPCX_IRQ_10
#define NPCX_IRQ_WKINTEFGH_0             NPCX_IRQ_11
#define NPCX_IRQ_CDMA                    NPCX_IRQ_12
#define NPCX_IRQ_SMB1                    NPCX_IRQ_13
#define NPCX_IRQ_SMB2                    NPCX_IRQ_14
#define NPCX_IRQ_WKINTC_0                NPCX_IRQ_15
#define NPCX_IRQ_SMB7                    NPCX_IRQ_16
#define NPCX_IRQ_ITIM16_3                NPCX_IRQ_17
#define NPCX_IRQ_SHI                     NPCX_IRQ_18
#define NPCX_IRQ_ESPI                    NPCX_IRQ_18
#define NPCX_IRQ_SMB5                    NPCX_IRQ_19
#define NPCX_IRQ_SMB6                    NPCX_IRQ_20
#define NPCX_IRQ_PS2                     NPCX_IRQ_21
#define NPCX_IRQ_WOV                     NPCX_IRQ_22
#define NPCX_IRQ_MFT_2                   NPCX_IRQ_23
#define NPCX_IRQ_SHM                     NPCX_IRQ_24
#define NPCX_IRQ_KBC_IBF                 NPCX_IRQ_25
#define NPCX_IRQ_PM_CHAN_IBF             NPCX_IRQ_26
#define NPCX_IRQ_ITIM16_2                NPCX_IRQ_27
#define NPCX_IRQ_ITIM16_1                NPCX_IRQ_28
#define NPCX_IRQ29_NOUSED                NPCX_IRQ_29
#define NPCX_IRQ30_NOUSED                NPCX_IRQ_30
#define NPCX_IRQ_TWD_WKINTB_0            NPCX_IRQ_31
#define NPCX_IRQ_UART2                   NPCX_IRQ_32
#define NPCX_IRQ_UART                    NPCX_IRQ_33
#define NPCX_IRQ34_NOUSED                NPCX_IRQ_34
#define NPCX_IRQ35_NOUSED                NPCX_IRQ_35
#define NPCX_IRQ_SMB3                    NPCX_IRQ_36
#define NPCX_IRQ_SMB4                    NPCX_IRQ_37
#define NPCX_IRQ38_NOUSED                NPCX_IRQ_38
#define NPCX_IRQ39_NOUSED                NPCX_IRQ_39
#define NPCX_IRQ40_NOUSED                NPCX_IRQ_40
#define NPCX_IRQ_MFT_3                   NPCX_IRQ_41
#define NPCX_IRQ42_NOUSED                NPCX_IRQ_42
#define NPCX_IRQ_ITIM16_4                NPCX_IRQ_43
#define NPCX_IRQ_ITIM16_5                NPCX_IRQ_44
#define NPCX_IRQ_ITIM16_6                NPCX_IRQ_45
#define NPCX_IRQ_ITIM32                  NPCX_IRQ_46
#define NPCX_IRQ_WKINTA_1                NPCX_IRQ_47
#define NPCX_IRQ_WKINTB_1                NPCX_IRQ_48
#define NPCX_IRQ_KSI_WKINTC_1            NPCX_IRQ_49
#define NPCX_IRQ_WKINTD_1                NPCX_IRQ_50
#define NPCX_IRQ_WKINTE_1                NPCX_IRQ_51
#define NPCX_IRQ_WKINTF_1                NPCX_IRQ_52
#define NPCX_IRQ_WKINTG_1                NPCX_IRQ_53
#define NPCX_IRQ_WKINTH_1                NPCX_IRQ_54
#define NPCX_IRQ55_NOUSED                NPCX_IRQ_55
#define NPCX_IRQ_KBC_OBE                 NPCX_IRQ_56
#define NPCX_IRQ_SPI                     NPCX_IRQ_57
#define NPCX_IRQ58_NOUSED                NPCX_IRQ_58
#define NPCX_IRQ_WKINTFG_2               NPCX_IRQ_59
#define NPCX_IRQ_WKINTA_2                NPCX_IRQ_60
#define NPCX_IRQ_WKINTB_2                NPCX_IRQ_61
#define NPCX_IRQ_WKINTC_2                NPCX_IRQ_62
#define NPCX_IRQ_WKINTD_2                NPCX_IRQ_63

#define NPCX_IRQ_COUNT                   64

/******************************************************************************/
/*
 * Modules Register Definitions in NPCX7M6FB soc
 */
#include "modules/adc.h"
#include "modules/clock.h"
#include "modules/espi.h"
#include "modules/gpio.h"
#include "modules/host.h"
#include "modules/i2c.h"
#include "modules/itim.h"
#include "modules/kbscan.h"
#include "modules/mft.h"
#include "modules/miwu.h"
#include "modules/pwm.h"
#include "modules/scfg.h"
#include "modules/uart.h"
#include "modules/watchdog.h"

#endif /* NPCX7M6FB_H */
