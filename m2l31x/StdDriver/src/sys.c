/**************************************************************************//**
 * @file     sys.c
 * @version  V1.0
 * @brief    M2L31 series SYS driver source file
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2023 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/

#include "NuMicro.h"

#ifdef __cplusplus
extern "C"
{
#endif

/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup SYS_Driver SYS Driver
  @{
*/

int32_t g_SYS_i32ErrCode = 0;   /*!< SYS global error code */

/** @addtogroup SYS_EXPORTED_FUNCTIONS SYS Exported Functions
  @{
*/

/**
  * @brief      Clear reset source
  * @param[in]  u32Src is system reset source. Including :
  *             - \ref SYS_RSTSTS_CPULKRF_Msk
  *             - \ref SYS_RSTSTS_CPURF_Msk
  *             - \ref SYS_RSTSTS_HRESETRF_Msk
  *             - \ref SYS_RSTSTS_SYSRF_Msk
  *             - \ref SYS_RSTSTS_BODRF_Msk
  *             - \ref SYS_RSTSTS_LVRF_Msk
  *             - \ref SYS_RSTSTS_WDTRF_Msk
  *             - \ref SYS_RSTSTS_PINRF_Msk
  *             - \ref SYS_RSTSTS_PORF_Msk
  * @return     None
  * @details    This function clear the selected system reset source.
  */
void SYS_ClearResetSrc(uint32_t u32Src)
{
    SYS->RSTSTS |= u32Src;
}

/**
  * @brief      Get Brown-out detector output status
  * @param      None
  * @retval     0 System voltage is higher than BODVL setting or BODEN is 0.
  * @retval     1 System voltage is lower than BODVL setting.
  * @details    This function get Brown-out detector output status.
  */
uint32_t SYS_GetBODStatus(void)
{
    return ((SYS->BODCTL & SYS_BODCTL_BODOUT_Msk) >> SYS_BODCTL_BODOUT_Pos);
}

/**
  * @brief      Get reset status register value
  * @param      None
  * @return     Reset source
  * @details    This function get the system reset status register value.
  */
uint32_t SYS_GetResetSrc(void)
{
    return (SYS->RSTSTS);
}

/**
  * @brief      Check if register is locked nor not
  * @param      None
  * @retval     0 Write-protection function is disabled.
  *             1 Write-protection function is enabled.
  * @details    This function check register write-protection bit setting.
  */
uint32_t SYS_IsRegLocked(void)
{
    return (SYS->REGLCTL & 1UL) ? 0UL : 1UL;
}

/**
  * @brief      Get product ID
  * @param      None
  * @return     Product ID
  * @details    This function get product ID.
  */
uint32_t  SYS_ReadPDID(void)
{
    return SYS->PDID;
}

/**
  * @brief      Reset chip with chip reset
  * @param      None
  * @return     None
  * @details    This function reset chip with chip reset.
  *             The register write-protection function should be disabled before using this function.
  */
void SYS_ResetChip(void)
{
    SYS->IPRST0 |= SYS_IPRST0_CHIPRST_Msk;
}

/**
  * @brief      Reset chip with CPU reset
  * @param      None
  * @return     None
  * @details    This function reset CPU with CPU reset.
  *             The register write-protection function should be disabled before using this function.
  */
void SYS_ResetCPU(void)
{
    SYS->IPRST0 |= SYS_IPRST0_CPURST_Msk;
}

/**
  * @brief      Reset selected module
  * @param[in]  u32ModuleIndex is module index. Including :
  *             - \ref ACMP01_RST
  *             - \ref ACMP2_RST
  *             - \ref CANFD0_RST
  *             - \ref CANFD1_RST
  *             - \ref CHIP_RST
  *             - \ref CPU_RST
  *             - \ref CRC_RST
  *             - \ref CRPT_RST
  *             - \ref DAC_RST
  *             - \ref EADC0_RST
  *             - \ref EBI_RST
  *             - \ref ECAP0_RST
  *             - \ref ECAP1_RST
  *             - \ref EPWM0_RST
  *             - \ref EPWM1_RST
  *             - \ref EQEI0_RST
  *             - \ref EQEI1_RST
  *             - \ref GPIO_RST
  *             - \ref I2C0_RST
  *             - \ref I2C1_RST
  *             - \ref I2C2_RST
  *             - \ref I2C3_RST
  *             - \ref LPADC0_RST
  *             - \ref LPGPIO_RST
  *             - \ref LPI2C0_RST
  *             - \ref LPPDMA0_RST
  *             - \ref LPSPI0_RST
  *             - \ref LPSRAM_RST
  *             - \ref LPTMR0_RST
  *             - \ref LPTMR1_RST
  *             - \ref LPUART0_RST
  *             - \ref OPA_RST
  *             - \ref OTG_RST
  *             - \ref PDMA0_RST
  *             - \ref PWM0_RST
  *             - \ref PWM1_RST
  *             - \ref QSPI0_RST
  *             - \ref SPI0_RST
  *             - \ref SPI1_RST
  *             - \ref SPI2_RST
  *             - \ref SPI3_RST
  *             - \ref TK_RST
  *             - \ref TMR0_RST
  *             - \ref TMR1_RST
  *             - \ref TMR2_RST
  *             - \ref TMR3_RST
  *             - \ref TRNG_RST
  *             - \ref TTMR0_RST
  *             - \ref TTMR1_RST
  *             - \ref UART0_RST
  *             - \ref UART1_RST
  *             - \ref UART2_RST
  *             - \ref UART3_RST
  *             - \ref UART4_RST
  *             - \ref UART5_RST
  *             - \ref UART6_RST
  *             - \ref UART7_RST
  *             - \ref USBD_RST
  *             - \ref USBH_RST
  *             - \ref USCI0_RST
  *             - \ref USCI1_RST
  *             - \ref UTCPD0_RST
  *             - \ref WDT_RST
  *             - \ref WWDT_RST
  * @return     None
  * @details    This function reset selected module.
  */
void SYS_ResetModule(uint32_t u32ModuleIndex)
{
    uint32_t u32tmpVal = 0UL, u32tmpAddr = 0UL;

    if ((u32ModuleIndex & 0x80000000UL) == 0x80000000)
    {
        /* Support the IP RESET register NOT NEAR SYS_IPRST0 */
        if (((u32ModuleIndex & 0xFF000000UL) >> 24UL) == 0x80UL)
            /* 0x80UL for LPSCC_IPRST0 */
            u32tmpAddr = (uint32_t)&LPSCC->IPRST0;
    }
    else
    {
        /* Support the IP RESET register NEAR SYS_IPRST0 */
        u32tmpAddr = (uint32_t)&SYS->IPRST0 + ((u32ModuleIndex >> 24UL));
    }

    /* Generate reset signal to the corresponding module */
    u32tmpVal = (1UL << (u32ModuleIndex & 0x00ffffffUL));
    *(uint32_t *)u32tmpAddr |= u32tmpVal;

    /* Release corresponding module from reset state */
    u32tmpVal = ~(1UL << (u32ModuleIndex & 0x00ffffffUL));
    *(uint32_t *)u32tmpAddr &= u32tmpVal;
}

/**
  * @brief      Enable and configure Brown-out detector function
  * @param[in]  i32Mode is reset or interrupt mode. Including :
  *             - \ref SYS_BODCTL_BOD_RST_EN
  *             - \ref SYS_BODCTL_BOD_INTERRUPT_EN
  * @param[in]  u32BODLevel is Brown-out voltage level. Including :
  *             - \ref SYS_BODCTL_BODVL_3_0V
  *             - \ref SYS_BODCTL_BODVL_2_8V
  *             - \ref SYS_BODCTL_BODVL_2_6V
  *             - \ref SYS_BODCTL_BODVL_2_4V
  *             - \ref SYS_BODCTL_BODVL_2_2V
  *             - \ref SYS_BODCTL_BODVL_2_0V
  *             - \ref SYS_BODCTL_BODVL_1_8V
  *             - \ref SYS_BODCTL_BODVL_1_6V
  *             - \ref SYS_BODCTL_BODVL_1_5V
  * @return     None
  * @details    This function configure Brown-out detector reset or interrupt mode, enable Brown-out function and set Brown-out voltage level.
  *             The register write-protection function should be disabled before using this function.
  */
void SYS_EnableBOD(int32_t i32Mode, uint32_t u32BODLevel)
{
    /* Enable Brown-out Detector function */
    SYS->BODCTL |= SYS_BODCTL_BODEN_Msk;

    /* Enable Brown-out interrupt or reset function */
    SYS->BODCTL = (SYS->BODCTL & ~SYS_BODCTL_BODRSTEN_Msk) | (uint32_t)i32Mode;

    /* Select Brown-out Detector threshold voltage */
    SYS->BODCTL = (SYS->BODCTL & ~SYS_BODCTL_BODVL_Msk) | u32BODLevel;
}

/**
  * @brief      Disable Brown-out detector function
  * @param      None
  * @return     None
  * @details    This function disable Brown-out detector function.
  *             The register write-protection function should be disabled before using this function.
  */
void SYS_DisableBOD(void)
{
    SYS->BODCTL &= ~SYS_BODCTL_BODEN_Msk;
}

/**
  * @brief      Set Power Level
  * @param[in]  u32PowerLevel is power level setting. Including :
  *             - \ref SYS_PLCTL_PLSEL_PL1
  *             - \ref SYS_PLCTL_PLSEL_PL2
  * @return     Setting success or not
  * @retval     0                   Success
  * @retval     SYS_TIMEOUT_ERR     Failed due to Power level register is busy
  * @details    This function select power level.
  *             The register write-protection function should be disabled before using this function.
  */
int32_t SYS_SetPowerLevel(uint32_t u32PowerLevel)
{
    int32_t i32TimeOutCnt = 400;

    /* Set power voltage level */
    SYS->PLCTL = (SYS->PLCTL & (~SYS_PLCTL_PLSEL_Msk)) | (u32PowerLevel);
    while((SYS->PLSTS & SYS_PLSTS_PLCBUSY_Msk) == SYS_PLSTS_PLCBUSY_Msk)
    {
        if(i32TimeOutCnt-- <= 0)
        {
            return SYS_TIMEOUT_ERR;
        }
    }
    return 0;
}

/**
  * @brief      Set Reference Voltage
  * @param[in]  u32VRefCTL is reference voltage setting. Including :
  *             - \ref SYS_VREFCTL_VREF_PIN
  *             - \ref SYS_VREFCTL_VREF_1_6V
  *             - \ref SYS_VREFCTL_VREF_2_0V
  *             - \ref SYS_VREFCTL_VREF_2_5V
  *             - \ref SYS_VREFCTL_VREF_3_0V
  * @return     None
  * @details    This function select reference voltage.
  *             The register write-protection function should be disabled before using this function.
  */
void SYS_SetVRef(uint32_t u32VRefCTL)
{
    /* Set reference voltage */
    SYS->VREFCTL = (SYS->VREFCTL & (~SYS_VREFCTL_VREFCTL_Msk)) | (u32VRefCTL);
}

/**
  * @brief      Set System SRAM Power Mode
  * @param[in]  u32SRAMSel is SRAM region selection. Including :
  *             - \ref SYS_SRAMPC0_SRAM0PM_Msk
  *             - \ref SYS_SRAMPC0_SRAM1PM_Msk
  *             - \ref SYS_SRAMPC0_SRAM2PM_Msk
  *             - \ref SYS_SRAMPC0_SRAM3PM_Msk
  *             - \ref SYS_SRAMPC0_SRAM4PM_Msk
  *             - \ref SYS_SRAMPC0_SRAM5PM_Msk
  *             - \ref SYS_SRAMPC0_SRAM6PM_Msk
  * @param[in]  u32PowerMode is SRAM power mode. Including :
  *             - \ref SYS_SRAMPC0_SRAM_NORMAL
  *             - \ref SYS_SRAMPC0_SRAM_RETENTION
  *             - \ref SYS_SRAMPC0_SRAM_SHUT_DOWN
  * @return     Setting success or not
  * @retval     0                   Success
  * @retval     SYS_TIMEOUT_ERR     Failed due to SRAM power register is busy
  * @details    This function set system SRAM power mode.
  *             The register write-protection function should be disabled before using this function.
  */
int32_t SYS_SetSSRAMPowerMode(uint32_t u32SRAMSel, uint32_t u32PowerMode)
{
    int32_t i32TimeOutCnt;
    uint32_t u32SRAMSelPos = SYS_SRAMPC0_SRAM0PM_Pos;

    /* Get system SRAM power mode setting position */
    while(u32SRAMSelPos <= SYS_SRAMPC0_SRAM6PM_Pos)
    {
        if(u32SRAMSel & (BIT0 << u32SRAMSelPos))
        {
            break;
        }
        else
        {
            u32SRAMSelPos++;
        }
    }

    /* Set system SRAM power mode setting */
    SYS->SRAMPC0 = (SYS->SRAMPC0 & (~u32SRAMSel)) | (u32PowerMode << u32SRAMSelPos);
    i32TimeOutCnt = 400;
    while((SYS->SRAMPC0 & SYS_SRAMPC0_PCBUSY_Msk) == SYS_SRAMPC0_PCBUSY_Msk)
    {
        if(i32TimeOutCnt-- <= 0)
        {
            return SYS_TIMEOUT_ERR;
        }
    }
    return 0;
}

/*@}*/ /* end of group SYS_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group SYS_Driver */

/*@}*/ /* end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

/*** (C) COPYRIGHT 2023 Nuvoton Technology Corp. ***/
