# SPDX-License-Identifier: Apache-2.0
#
# Copyright (c) 2020 Linumiz
# Author: Saravanan Sekar <saravanan@linumiz.com>

add_subdirectory_ifdef(CONFIG_SOC_SERIES_M48X m48x)

add_subdirectory_ifdef(CONFIG_HAS_NPCX_HAL npcx)

if(CONFIG_CLOCK_NPCX_OSC_CYCLES_PER_SEC)
  zephyr_compile_definitions( -DOSC_CLK_VAL=${CONFIG_CLOCK_NPCX_OSC_CYCLES_PER_SEC} )
endif()

if(CONFIG_SYS_CLOCK_HW_CYCLES_PER_SEC)
  zephyr_compile_definitions( -DCORE_CLK_VAL=${CONFIG_SYS_CLOCK_HW_CYCLES_PER_SEC} )
endif()
