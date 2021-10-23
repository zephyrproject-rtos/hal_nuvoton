# SPDX-License-Identifier: Apache-2.0
#
# Copyright (c) 2020 Linumiz
# Author: Saravanan Sekar <saravanan@linumiz.com>

zephyr_include_directories(StdDriver/inc)
zephyr_include_directories(Device/Nuvoton/M2351/Include)

zephyr_sources_ifdef(CONFIG_SOC_SERIES_M2351 Device/Nuvoton/M2351/Source/system_M2351.c)

add_subdirectory(StdDriver)
