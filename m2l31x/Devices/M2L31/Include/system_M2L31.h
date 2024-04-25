/**************************************************************************//**
 * @file     system_M2L31.h
 * @version  V0.10
 * @brief    System Setting Header File
 *
 * @note
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
 ****************************************************************************/

#ifndef __SYSTEM_M2L31_H__
#define __SYSTEM_M2L31_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

/*---------------------------------------------------------------------------------------------------------*/
/* Macro Definition                                                                                        */
/*---------------------------------------------------------------------------------------------------------*/
#ifndef DEBUG_PORT
#define DEBUG_PORT      UART0       /*!< Select Debug Port which is used for retarget.c to output debug message to UART */
#endif

/*----------------------------------------------------------------------------
  Define clocks
 *----------------------------------------------------------------------------*/
#define __HXT       (12000000UL)    /*!< External Crystal Clock Frequency     */
#define __LIRC      (   32000UL)    /*!< Internal 32.0KHz RC Oscillator Frequency */
#define __HIRC      (12000000UL)    /*!< Internal 48M RC Oscillator Frequency */
#define __HIRC48    (48000000UL)    /*!< Internal 48M RC Oscillator Frequency */
#define __MIRC      ( 4000000UL)    /*!< Internal 4M RC Oscillator Frequency */
#define __LXT       (   32768UL)    /*!< External Crystal Clock Frequency 32.768KHz */
#define __HSI       (72000000UL)    /*!< Default output is 72MHz for PLL */

extern uint32_t SystemCoreClock;    /*!< System Clock Frequency (Core Clock)  */
extern uint32_t CyclesPerUs;        /*!< Cycles per micro second              */
extern uint32_t PllClock;           /*!< PLL Output Clock Frequency           */


/**
 * Initialize the system
 *
 * @param  none
 * @return none
 *
 * @brief  Setup the micro controller system.
 *         Initialize the System and update the SystemCoreClock variable.
 */
extern void SystemInit(void);

/**
 * Update SystemCoreClock variable
 *
 * @param  none
 * @return none
 *
 * @brief  Updates the SystemCoreClock with current core Clock
 *         retrieved from cpu registers.
 */
extern void SystemCoreClockUpdate(void);

/**
 * Set UART0 default multi function pin
 *
 * @param  none
 * @return none
 *
 * @brief  The initialization of uart0 default multiple-function pin.
 */
extern void Uart0DefaultMPF(void);

/**
 * Check if debug message finished
 *
 * @param    None
 *
 * @retval   1: Message is finished
 * @retval   0: Message is transmitting.
 *
 * @details  Check if message finished (FIFO empty of debug port)
 */
extern int IsDebugFifoEmpty(void);


#ifdef __cplusplus
}
#endif

#endif /* __SYSTEM_M2L31_H__ */
