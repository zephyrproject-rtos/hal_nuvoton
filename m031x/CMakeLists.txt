# SPDX-License-Identifier: Apache-2.0
#
# Copyright (c) 2026 Nuvoton Technology Corporation.

zephyr_include_directories(StdDriver/inc)
zephyr_include_directories(Devices/M031X/Include)
zephyr_include_directories(dt-bindings/pinctrl)

zephyr_sources_ifdef(CONFIG_SOC_SERIES_M031X Devices/M031X/Source/system_M031X.c)

add_subdirectory(StdDriver)
