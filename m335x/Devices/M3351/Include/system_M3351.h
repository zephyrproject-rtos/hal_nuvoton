/**************************************************************************//**
 * @file     system_M3351.h
 * @version  V1.00
 * @brief    CMSIS Device System Header File for NuMicro M3351
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2025 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/


#ifndef __SYSTEM_M3351_H__
#define __SYSTEM_M3351_H__

#define USING_UART0    1

#include <stdint.h>

#if __has_include("partition_M3351.h")
    #include "partition_M3351.h"                  /* User defined setup for Secure/Non-Secure Zones */
#else
    #include "partition_M3351_template.h"         /* Default setup for Secure/Non-Secure Zones */
#endif

#if __has_include("mpu_config_M3351.h")
    #include "mpu_config_M3351.h"                  /* User defined setup for MPU regions */
#else
    #include "mpu_config_M3351_template.h"         /* Default setup for MPU regions */
#endif

/*---------------------------------------------------------------------------------------------------------*/
/* Macro Definition                                                                                        */
/*---------------------------------------------------------------------------------------------------------*/
#define NVT_UNUSED(x)           (void)(x)       /*!< To suppress the unused parameter warnings      */
#ifndef DEBUG_PORT_UART_IDX
    #define DEBUG_PORT_UART_IDX     0
#endif

#ifndef CHECK_SCU_VIOLATION
    #define CHECK_SCU_VIOLATION     0               /*!< Set default SCU violation check disabled */
#endif

#define PASTER(x, y, z)         x ## y ## z
#define EVAL_MACRO(x, y, z)     PASTER(x, y, z)

#ifndef DEBUG_PORT
    #define DEBUG_PORT              EVAL_MACRO(UART, DEBUG_PORT_UART_IDX, )                     // UARTn
#endif

#define DEBUG_PORT_MODULE       EVAL_MACRO(UART, DEBUG_PORT_UART_IDX, _MODULE)              // UARTn_MODULE
#define DEBUG_PORT_IRQn         EVAL_MACRO(UART, DEBUG_PORT_UART_IDX, _IRQn)                // UARTn_IRQn
#define DEBUG_PORT_IRQHandler   EVAL_MACRO(UART, DEBUG_PORT_UART_IDX, _IRQHandler)          // UARTn_IRQHandler
#define DEBUG_PORT_RST          EVAL_MACRO(UART, DEBUG_PORT_UART_IDX, _RST)                 // UARTn_RST
#define DEBUG_PORT_FIFO_SIZE    EVAL_MACRO(UART, DEBUG_PORT_UART_IDX, _FIFO_SIZE)           // UARTn_FIFO_SIZE
#define DEBUG_PORT_CLKSEL       EVAL_MACRO(CLK_CLKSEL1_UART, DEBUG_PORT_UART_IDX, SEL_HIRC) // CLK_CLKSELm_UARTnSEL_HIRC
#define DEBUG_PORT_CLKDIV       EVAL_MACRO(CLK_CLKDIV0_UART, DEBUG_PORT_UART_IDX, )         // CLK_CLKDIVm_UARTn


#define __PC()                                                \
    __extension__({                                           \
        register unsigned int current_pc;                     \
        __asm volatile("mov %0, pc" : "=r"(current_pc) : : ); \
        current_pc;                                           \
    })    /*!< Current program counter            */

/*----------------------------------------------------------------------------
  Define clocks
 *----------------------------------------------------------------------------*/

#ifndef __HSI
    #define __HSI           (144000000UL)       /*!< PLL default output is 144 MHz                  */
#endif

#ifndef __HXT
    #define __HXT           (12000000UL)        /*!< External Crystal Clock Frequency               */
#endif

#ifndef __LXT
    #define __LXT           (32768UL)           /*!< External Crystal Clock Frequency 32.768 KHz    */
#endif

#define __HIRC          (48000000UL)        /*!< Internal 48 MHz RC Oscillator Frequency        */
#define __LIRC          (38400UL)           /*!< Internal 32 KHz RC Oscillator Frequency        */

#define __SYS_OSC_CLK   (    ___HSI)        /*!< Main Oscillator Frequency                      */
#define __SYSTEM_CLOCK  (1UL*__HXT)

#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3L)
    #if defined (__ICCARM__)
        #define __NONSECURE_ENTRY       __cmse_nonsecure_entry
        /* The IAR compiler's optimization may remove weak functions, so the __weak attribute is omitted. */
        #define __NONSECURE_ENTRY_WEAK  __cmse_nonsecure_entry
        #define __NONSECURE_CALL        __cmse_nonsecure_call
    #else
        #define __NONSECURE_ENTRY       __attribute__ ((cmse_nonsecure_entry))
        #define __NONSECURE_ENTRY_WEAK  __attribute__ ((cmse_nonsecure_entry, weak))
        #define __NONSECURE_CALL        __attribute__ ((cmse_nonsecure_call))
    #endif
#else
    #define __NONSECURE_ENTRY
    #define __NONSECURE_ENTRY_WEAK
    #define __NONSECURE_CALL
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern uint32_t CyclesPerUs;              /*!< Cycles per micro second              */
extern uint32_t SystemCoreClock;          /*!< System Clock Frequency (Core Clock)  */
extern uint32_t PllClock;                 /*!< PLL Output Clock Frequency           */

/**
  \brief Exception / Interrupt Handler Function Prototype
*/
typedef void(*VECTOR_TABLE_Type)(void);

/**
  \brief Setup the microcontroller system.

   Initialize the System and update the SystemCoreClock variable.
 */
extern void SystemInit(void);


/**
  \brief  Update SystemCoreClock variable.

   Updates the SystemCoreClock with current core Clock retrieved from cpu registers.
 */
extern void SystemCoreClockUpdate(void);

#if !defined(NVT_CMSE_NON_SECURE) && !defined(NVT_DBG_UART_OFF)
/**
 * \brief  Set debug UART multi-function pins
 */
extern void SetDebugUartMFP(void);

/**
 * \brief  Set debug UART clock source and enable module clock.
 */
extern void SetDebugUartCLK(void);

/**
 * \brief  Initialize debug UART to 115200-8n1
 */
extern void InitDebugUart(void);

#endif /* NVT_DBG_UART_OFF */

/**
 * \brief  Initialize MPU Region according to mpu_config_M3351.h and user defined table
 */
extern int32_t InitPreDefMPURegion(const ARM_MPU_Region_t *psMPURegion, uint32_t u32RegionCnt);

#ifdef __cplusplus
}
#endif

#endif /* __SYSTEM_M3351_H__ */
