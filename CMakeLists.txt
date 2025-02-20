# SPDX-License-Identifier: Apache-2.0
#
# Copyright (c) 2020 Linumiz
# Author: Saravanan Sekar <saravanan@linumiz.com>

add_subdirectory_ifdef(CONFIG_SOC_SERIES_M48X m48x)
add_subdirectory_ifdef(CONFIG_SOC_SERIES_M46X m46x)
add_subdirectory_ifdef(CONFIG_SOC_SERIES_M2L31X m2l31x)
add_subdirectory_ifdef(CONFIG_SOC_SERIES_M55M1X m55m1x)
