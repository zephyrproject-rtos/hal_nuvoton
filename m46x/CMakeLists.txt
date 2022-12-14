# SPDX-License-Identifier: Apache-2.0
#
# Copyright (c) 2022 Nuvoton Technology Corporation.

zephyr_include_directories(StdDriver/inc)
zephyr_include_directories(StdDriver/drv_emac)
zephyr_include_directories(Devices/M460/Include)
zephyr_include_directories(dt-bindings/pinctrl)

zephyr_sources_ifdef(CONFIG_SOC_SERIES_M46X Devices/M460/Source/system_M460.c)

add_subdirectory(StdDriver)
