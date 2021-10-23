# SPDX-License-Identifier: Apache-2.0
#
# Copyright (c) 2020 Linumiz
# Author: Saravanan Sekar <saravanan@linumiz.com>

zephyr_library_sources_ifdef(CONFIG_HAS_NUMICRO_HAL src/sys.c)

zephyr_library_sources(src/clk.c)
zephyr_library_sources(src/gpio.c)
zephyr_library_sources_ifdef(CONFIG_HAS_NUMICRO_UART src/uart.c)
