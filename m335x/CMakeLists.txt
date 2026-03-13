# SPDX-License-Identifier: Apache-2.0
#
# Copyright (c) 2026 Nuvoton Technology Corporation.

zephyr_include_directories(StdDriver/inc)
zephyr_include_directories(Devices/M3351/Include)
zephyr_include_directories(dt-bindings/pinctrl)

zephyr_sources_ifdef(CONFIG_SOC_SERIES_M335X Devices/M3351/Source/system_M3351.c)

add_subdirectory(StdDriver)
