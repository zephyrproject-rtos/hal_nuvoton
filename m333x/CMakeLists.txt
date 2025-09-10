# SPDX-License-Identifier: Apache-2.0
#
# Copyright (c) 2025 Nuvoton Technology Corporation.

zephyr_include_directories(StdDriver/inc)
zephyr_include_directories(Devices/M3331/Include)
zephyr_include_directories(dt-bindings/pinctrl)

zephyr_sources_ifdef(CONFIG_SOC_SERIES_M333X Devices/M3331/Source/system_m3331.c)

add_subdirectory(StdDriver)
