# SPDX-License-Identifier: Apache-2.0
#
# Copyright (c) 2024 Nuvoton Technology Corporation.

zephyr_include_directories(StdDriver/inc)
zephyr_include_directories(Devices/M2L31/Include)
zephyr_include_directories(dt-bindings/pinctrl)

zephyr_sources_ifdef(CONFIG_SOC_SERIES_M2L31X Devices/M2L31/Source/system_M2L31.c)

add_subdirectory(StdDriver)
