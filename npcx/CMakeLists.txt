#
# Copyright (c) 2020 Nuvoton Technology Corporation.
#
# SPDX-License-Identifier: Apache-2.0
#

zephyr_include_directories_ifdef(CONFIG_SOC_FAMILY_NPCX .)

zephyr_include_directories_ifdef(CONFIG_SOC_FAMILY_NPCX common)
zephyr_include_directories_ifdef(CONFIG_SOC_FAMILY_NPCX modules)
zephyr_include_directories_ifdef(CONFIG_SOC_SERIES_NPCX7 npcx7)