# SPDX-License-Identifier: Apache-2.0
#
# Copyright (c) 2024 Nuvoton Technology Corporation.

zephyr_library_sources(src/clk.c)
zephyr_library_sources_ifdef(CONFIG_HAS_NUMAKER_HAL src/sys.c)
zephyr_library_sources_ifdef(CONFIG_HAS_NUMAKER_RMC src/rmc.c)
zephyr_library_sources_ifdef(CONFIG_HAS_NUMAKER_GPIO src/gpio.c)
zephyr_library_sources_ifdef(CONFIG_HAS_NUMAKER_UART src/uart.c)
zephyr_library_sources_ifdef(CONFIG_HAS_NUMAKER_I2C src/i2c.c)
zephyr_library_sources_ifdef(CONFIG_HAS_NUMAKER_SPI src/spi.c)
zephyr_library_sources_ifdef(CONFIG_HAS_NUMAKER_SPI src/qspi.c)
zephyr_library_sources_ifdef(CONFIG_HAS_NUMAKER_PWM src/epwm.c)
zephyr_library_sources_ifdef(CONFIG_HAS_NUMAKER_USBD src/usbd.c)
zephyr_library_sources_ifdef(CONFIG_HAS_NUMAKER_CANFD src/canfd.c)
zephyr_library_sources_ifdef(CONFIG_HAS_NUMAKER_ADC src/eadc.c)
zephyr_library_sources_ifdef(CONFIG_HAS_NUMAKER_RTC src/rtc.c)
zephyr_library_sources_ifdef(CONFIG_HAS_NUMAKER_TMR src/timer.c)
