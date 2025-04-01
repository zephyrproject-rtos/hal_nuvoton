# SPDX-License-Identifier: Apache-2.0
#
# Copyright (c) 2025 Nuvoton Technology Corporation.

zephyr_include_directories(StdDriver/inc)
zephyr_include_directories(StdDriver/drv_emac)
zephyr_include_directories(Devices/M55M1/Include)
zephyr_include_directories(dt-bindings/pinctrl)

zephyr_sources_ifdef(CONFIG_SOC_SERIES_M55M1X Devices/M55M1/Source/system_M55M1.c)

add_subdirectory(StdDriver)
