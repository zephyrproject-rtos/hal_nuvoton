# SPDX-License-Identifier: Apache-2.0
#
# Copyright (c) 2022 Nuvoton Technology Corporation.

zephyr_library_sources_ifdef(CONFIG_HAS_NUMAKER_HAL src/sys.c)

zephyr_library_sources(src/clk.c)
zephyr_library_sources_ifdef(CONFIG_HAS_NUMAKER_GPIO src/gpio.c)
zephyr_library_sources_ifdef(CONFIG_HAS_NUMAKER_UART src/uart.c)
zephyr_library_sources_ifdef(CONFIG_HAS_NUMAKER_FMC src/fmc.c)
