/**************************************************************************//**
 * @file     scu.h
 * @version  V3.00
 * @brief    Security Configuration Unit Driver Header File
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (c) 2025 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __SCU_H__
#define __SCU_H__

#ifdef __cplusplus
extern "C"
{
#endif


/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup SCU_Driver SCU Driver
  @{
*/

/** @addtogroup SCU_EXPORTED_CONSTANTS SCU Exported Constants
  @{
*/




/**
 * @details  Non-secure Attribution Definition.
 */
typedef enum NSATTR
{
    /******  PNNSET0 **********************************************************************************/
    PDMA0_Attr  =    8,
    SDH0_Attr   =   13,
    EBI_Attr    =   16,
    PDMA1_Attr  =   24,
    HSUSBD_Attr =   25,
    HSUSBH_Attr =   26,
    PDCI_Attr   =   27,

    /******  PNNSET1 **********************************************************************************/
    CANFD0_Attr = 32,
    CANFD1_Attr = 32 + 4,
    CRC_Attr    = 32 + 17,
    CACHE_Attr  = 32 + 22,

    /******  PNNSET2 **********************************************************************************/
    RTC_Attr    = 64 + 1,
    WDT1_Attr   = 64 + 2,
    EADC0_Attr  = 64 + 3,
    ACMP01_Attr = 64 + 5,
    I2S0_Attr   = 64 + 8,
    HSOTG_Attr  = 64 + 15,
    TMR01_Attr  = 64 + 16,
    TMR23_Attr  = 64 + 17,
    EPWM0_Attr  = 64 + 24,
    EPWM1_Attr  = 64 + 25,
    BPWM0_Attr  = 64 + 26,
    BPWM1_Attr  = 64 + 27,
    BPWM2_Attr  = 64 + 28,
    BPWM3_Attr  = 64 + 29,
    BPWM4_Attr  = 64 + 30,
    BPWM5_Attr  = 64 + 31,

    /******  PNNSET3 **********************************************************************************/
    QSPI0_Attr  = 96 + 0,
    SPI0_Attr   = 96 + 1,
    SPI1_Attr   = 96 + 2,
    SPI2_Attr   = 96 + 3,
    UART0_Attr  = 96 + 16,
    UART1_Attr  = 96 + 17,
    UART2_Attr  = 96 + 18,
    UART3_Attr  = 96 + 19,
    UART4_Attr  = 96 + 20,

    /******  PNNSET4 **********************************************************************************/
    I2C0_Attr   = 128 + 0,
    I2C1_Attr   = 128 + 1,
    I2C2_Attr   = 128 + 2,
    I3C0_Attr   = 128 + 6,
    LLSI0_Attr  = 128 + 8,
    LLSI1_Attr  = 128 + 9,
    ELLSI0_Attr = 128 + 10,
    WWDT1_Attr  = 128 + 24,

    /******  PNNSET5 **********************************************************************************/
    EQEI0_Attr  = 160 + 16,
    ECAP0_Attr  = 160 + 20,

    /******  PNNSET6 **********************************************************************************/
    USCI0_Attr  = 192 + 16,
    USCI1_Attr  = 192 + 17


} NSATTR_T;


/**@}*/ /* end of group SCU_EXPORTED_CONSTANTS */


/** @addtogroup SCU_EXPORTED_FUNCTIONS SCU Exported Functions
  @{
*/

/**
  * @brief      Set peripheral non-secure attribution
  *
  * @param[in]  nsattr     The secure/non-secure attribution of specified module.
                           The possible value could be refer to \ref NSATTR.
  *
  * @return     None
  *
  * @details    This macro is used to set a peripheral to be non-secure peripheral.
  *
  */
#define SCU_SET_PNSSET(nsattr)   { SCU->PNSSET[(nsattr)/32] |= (1 << ((nsattr) & 0x1ful)); }

/**
 * @brief       Get peripheral secure/non-secure attribution
 *
  * @param[in]  nsattr     The secure/non-secure attribution of specified module.
                           The possible value could be refer to \ref NSATTR.
 *
 * @return      The secure/non-secure attribution of specified peripheral.
 * @retval      0 The peripheral is secure
 * @retval      1 The peripheral is non-secure
 *
 * @details     This macro gets the peripheral secure/non-secure attribution.
 */
#define SCU_GET_PNSSET(nsattr)   ((SCU->PNSSET[(nsattr)/32] >> ((nsattr) & 0x1ful)) & 1ul)


/**
 * @brief       Set secure/non-secure attribution of specified GPIO pin
 *
 * @param[in]   port        GPIO Port. It could be PA, PB, PC, PD, PE, PF, PG and PH.
 * @param[in]   bitmask     Bit mask of each bit. 0 is secure. 1 is non-secure.
 *
 * @return      None
 *
 * @details     This macro sets GPIO pin secure/non-secure attribution.
 */
#define SCU_SET_IONSSET(port, mask)   (SCU->IONSSET[((uint32_t)(port)-(GPIOA_BASE))/0x40] = (mask))


/**
 * @brief       Get secure/non-secure attribution of specified GPIO port
 *
 * @param[in]   port        GPIO Port. It could be PA, PB, PC, PD, PE, PF, PG and PH.
 *
 * @return      The secure/non-secure attribution of the port.
 * @retval      0 The relative bit of specified IO port is secure
 * @retval      1 The relative bit of specified IO port is non-secure
 *
 * @details     This macro gets IO secure/non-secure attribution of specified IO port.
 */
#define SCU_GET_IONSSET(port)   (SCU->IONSSET[((uint32_t)(port) - (GPIOA_BASE))/0x40])


/**
 * @brief       Enable sercure violation interrupts
 *
 * @param[in]   mask    The mask of each secure violation interrupt source
 *              - \ref SCU_SVIEN_FLASHIEN_Msk
 *              - \ref SCU_SVIEN_SRAM0IEN_Msk
 *              - \ref SCU_SVIEN_SRAM1IEN_Msk
 *              - \ref SCU_SVIEN_SRAM2IEN_Msk
 *              - \ref SCU_SVIEN_APB0IEN_Msk
 *              - \ref SCU_SVIEN_APB1IEN_Msk
 *              - \ref SCU_SVIEN_EBIIEN_Msk
 *              - \ref SCU_SVIEN_SYSIEN_Msk
 *              - \ref SCU_SVIEN_FMCIEN_Msk
 *              - \ref SCU_SVIEN_PDMA0IEN_Msk
 *              - \ref SCU_SVIEN_CRCIEN_Msk
 *              - \ref SCU_SVIEN_CANFD0IEN_Msk
 *              - \ref SCU_SVIEN_CANFD1IEN_Msk
 *              - \ref SCU_SVIEN_SCUIEN_Msk
 *              - \ref SCU_SVIEN_GPIOIEN_Msk
 *              - \ref SCU_SVIEN_HSUSBHIEN_Msk
 *              - \ref SCU_SVIEN_HSUSBDIEN_Msk
 *              - \ref SCU_SVIEN_SDH0IEN_Msk
 *              - \ref SCU_SVIEN_CACHEIEN_Msk
 *              - \ref SCU_SVIEN_PDCIIEN_Msk
 *              - \ref SCU_SVIEN_PDMA1IEN_Msk
 *
 * @return      None
 *
 * @details     This macro is used to enable secure violation interrupt of SCU.
 *              The secure violation interrupt could be used to detect attack of secure elements.
 */
#define SCU_ENABLE_INT(mask)    (SCU->SVIEN |= (mask))


/**
 * @brief       Disable secure violation interrupts
 *
 * @param[in]   mask    The mask of each secure violation interrupt source
 *              - \ref SCU_SVIEN_FLASHIEN_Msk
 *              - \ref SCU_SVIEN_SRAM0IEN_Msk
 *              - \ref SCU_SVIEN_SRAM1IEN_Msk
 *              - \ref SCU_SVIEN_SRAM2IEN_Msk
 *              - \ref SCU_SVIEN_APB0IEN_Msk
 *              - \ref SCU_SVIEN_APB1IEN_Msk
 *              - \ref SCU_SVIEN_EBIIEN_Msk
 *              - \ref SCU_SVIEN_SYSIEN_Msk
 *              - \ref SCU_SVIEN_FMCIEN_Msk
 *              - \ref SCU_SVIEN_PDMA0IEN_Msk
 *              - \ref SCU_SVIEN_CRCIEN_Msk
 *              - \ref SCU_SVIEN_CANFD0IEN_Msk
 *              - \ref SCU_SVIEN_CANFD1IEN_Msk
 *              - \ref SCU_SVIEN_SCUIEN_Msk
 *              - \ref SCU_SVIEN_GPIOIEN_Msk
 *              - \ref SCU_SVIEN_HSUSBHIEN_Msk
 *              - \ref SCU_SVIEN_HSUSBDIEN_Msk
 *              - \ref SCU_SVIEN_SDH0IEN_Msk
 *              - \ref SCU_SVIEN_CACHEIEN_Msk
 *              - \ref SCU_SVIEN_PDCIIEN_Msk
 *              - \ref SCU_SVIEN_PDMA1IEN_Msk
 *
 * @return      None
 *
 * @details     This macro is used to disable secure violation interrupt of SCU.
 *
 */
#define SCU_DISABLE_INT(mask)    (SCU->SVIEN &= (~(mask)))


/**
  * @brief    Get secure violation interrupt status
  *
  * @param    mask  The interrupt flag mask bit
  *
  * @return   The value of SCU_SVINTSTS register
  *
  * @details  Return interrupt flag of SCU_SVINTSTS register.
  *
  */
#define SCU_GET_INT_FLAG(mask)         (SCU->SVINTSTS&(mask))

/**
  * @brief      Clear secure violation interrupt flag
  *
  * @param[in]  flag The combination of the specified interrupt flags.
  *             Each bit corresponds to a interrupt source.
  *             This parameter decides which interrupt flags will be cleared.
  *             - \ref SCU_SVINTSTS_FLASHIF_Msk
  *             - \ref SCU_SVINTSTS_SRAM0IF_Msk
  *             - \ref SCU_SVINTSTS_SRAM1IF_Msk
  *             - \ref SCU_SVINTSTS_SRAM2IF_Msk
  *             - \ref SCU_SVINTSTS_APB0IF_Msk
  *             - \ref SCU_SVINTSTS_APB1IF_Msk
  *             - \ref SCU_SVINTSTS_EBIIF_Msk
  *             - \ref SCU_SVINTSTS_SYSIF_Msk
  *             - \ref SCU_SVINTSTS_FMCIF_Msk
  *             - \ref SCU_SVINTSTS_PDMA0IF_Msk
  *             - \ref SCU_SVINTSTS_CRCIF_Msk
  *             - \ref SCU_SVINTSTS_CANFD0IF_Msk
  *             - \ref SCU_SVINTSTS_CANFD1IF_Msk
  *             - \ref SCU_SVINTSTS_SCUIF_Msk
  *             - \ref SCU_SVINTSTS_GPIOIF_Msk
  *             - \ref SCU_SVINTSTS_HSUSBHIF_Msk
  *             - \ref SCU_SVINTSTS_HSUSBDIF_Msk
  *             - \ref SCU_SVINTSTS_SDH0IF_Msk
  *             - \ref SCU_SVINTSTS_CACHEIF_Msk
  *             - \ref SCU_SVINTSTS_PDCIIF_Msk
  *             - \ref SCU_SVINTSTS_PDMA1IF_Msk
  *
  * @return     None
  *
  * @details    Clear SCU related interrupt flags specified by flag parameter.
  *
  */
#define SCU_CLR_INT_FLAG(flag)     (SCU->SVINTSTS = (flag))



/**
  * @brief      Control the behavior of non-secure monitor when CPU is in idle state.
  *
  * @param[in]  opt Option for behavior control of non-secure monitor when CPU in idle.
  *              - true     The counter keeps counting when CPU is in idle.
                 - false    The counter will stop when CPU is in idle.
  *
  * @return     None
  *
  * @details    To control non-secure monitor counter when CPU is in idle.
  *
  */
#define SCU_NSM_IDLE_ON(opt)    ((opt)?(SCU->NSMCTL |= SCU_NSMCTL_IDLEON_Msk):(SCU->NSMCTL &= ~SCU_NSMCTL_IDLEON_Msk))

/**
  * @brief      Control the behavior of non-secure monitor when CPU is in debug state.
  *
  * @param[in]  opt Option for behavior control of non-secure monitor when CPU in debug.
  *              - true     The counter keeps counting when CPU is in debug.
                 - false    The counter will stop when CPU is in debug.
  *
  * @return     None
  *
  * @details    To control non-secure monitor counter when CPU is in debug.
  *
  */
#define SCU_NSM_DBG_ON(opt)    ((opt)?(SCU->NSMCTL |= SCU_NSMCTL_DBGON_Msk):(SCU->NSMCTL &= ~SCU_NSMCTL_DBGON_Msk))


/* Declare these inline functions here to avoid MISRA C 2004 rule 8.1 error */
__STATIC_INLINE void SCU_NSMConfig(uint32_t u32Ticks, uint32_t u32Prescale);
__STATIC_INLINE void SCU_TimerConfig(uint32_t u32Ticks, uint32_t u32Prescale);


/**
  * @brief      Config non-secure monitor to detect timeout in non-secure state.
  *
  * @param[in]  u32Ticks       A specified period for timeout in non-secure state
  * @param[in]  u32Prescale    A pre-scale divider to non-secure monitor clock

  *
  * @return     None
  *
  * @details    This function is used to configure non-secure monitor. If the CPU state stay in non-secure state for
  *             a specified period. The non-secure monitor will timeout and assert an interrupt. Otherwise, the
  *             non-secure monitor will auto clear whenever returning to secure state. This could be used to avoid
  *             CPU state in non-secure state too long time for security purpose. User must enable SCU_IRQn if interrupt
  *             is necessary.
  *
  */
__STATIC_INLINE void SCU_NSMConfig(uint32_t u32Ticks, uint32_t u32Prescale)
{

    SCU->NSMLOAD = u32Ticks;
    SCU->NSMVAL  = 0ul;
    SCU->NSMCTL  = SCU_NSMCTL_AUTORLD_Msk | SCU_NSMCTL_NSMIEN_Msk | (u32Prescale & 0xfful);
}


/**
  * @brief      Config non-secure monitor to be a timer.
  *
  * @param[in]  u32Ticks       A specified period for timer interrupt.
  * @param[in]  u32Prescale    A pre-scale divider to timer clock source.

  *
  * @return     None
  *
  * @details    This function is used to configure non-secure monitor as a timer. In other words, the timer counter
  *             keeps counting even CPU is in secure state.
  *
  */
__STATIC_INLINE void SCU_TimerConfig(uint32_t u32Ticks, uint32_t u32Prescale)
{

    SCU->NSMLOAD = u32Ticks;
    SCU->NSMVAL  = 0ul;
    SCU->NSMCTL  = SCU_NSMCTL_AUTORLD_Msk | SCU_NSMCTL_NSMIEN_Msk | SCU_NSMCTL_TMRMOD_Msk | (u32Prescale & 0xfful);
}




/**@}*/ /* end of group SCU_EXPORTED_FUNCTIONS */

/**@}*/ /* end of group SCU_Driver */

/**@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif /* __SCU_H__ */
