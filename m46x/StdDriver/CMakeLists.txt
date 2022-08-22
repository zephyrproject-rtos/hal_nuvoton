# SPDX-License-Identifier: Apache-2.0
#
# Copyright (c) 2022 Nuvoton Technology Corporation.

zephyr_library_sources_ifdef(CONFIG_HAS_NUMAKER_HAL src/sys.c)
