/**************************************************************************//**
 * @file     system_M3351.c
 * @version  V1.00
 * @brief    CMSIS Device System Source File for NuMicro M3351
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2025 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

#if defined (__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)       // ARM Compiler 6
    #include <arm_cmse.h>
#endif

#include <stdio.h>
#include "NuMicro.h"

#ifndef FMC_INIT_MIRROR_BOUND
    #define FMC_INIT_MIRROR_BOUND       0x0
#endif

/*----------------------------------------------------------------------------
  Exception / Interrupt Vector table
 *----------------------------------------------------------------------------*/
extern const VECTOR_TABLE_Type __VECTOR_TABLE[];

/*----------------------------------------------------------------------------
  System Core Clock Variable
 *----------------------------------------------------------------------------*/
uint32_t SystemCoreClock = __HSI;                /*!< System Clock Frequency (Core Clock) */
uint32_t CyclesPerUs     = (__HSI / 1000000UL);  /*!< Cycles per micro second             */
uint32_t PllClock        = __HSI;                /*!< PLL Output Clock Frequency          */

void TZ_SAU_Setup(void);
void FMC_NSCBA_Setup(void);
void SCU_Setup(void);
void NSC_Init(uint32_t u32RegionIdx);

#if defined (__ARM_FEATURE_CMSE) &&  (__ARM_FEATURE_CMSE == 3U)
const char *sc_astrMasterName[] =
{
    "", "", "CPU", "PDMA0", "USBH", "CRC",  "CRYPTO"
};

const char *sc_astrSlaveName[]  =
{
    "FLASH", "SRAM0", "SRAM1", "SRAM2",  "APB0",   "APB1", "EBI",  "SYS",
    "FMC",   "PDMA0", "CRC",   "CANFD0", "CANFD1", "SCU",  "GPIO", "USBH",
    "",      "",      "CACHE", "DFLASH", "DFMC"
};
#endif

/*----------------------------------------------------------------------------
  System Core Clock update function
 *----------------------------------------------------------------------------*/
void SystemCoreClockUpdate(void)
{
    /* Update PLL Clock */
    PllClock = CLK_GetPLLClockFreq();

    /* Update System Core Clock */
    SystemCoreClock = CLK_GetCPUFreq();

    /* Update Cycles per micro second */
    CyclesPerUs = (SystemCoreClock + 500000UL) / 1000000UL;
}

#if !defined(NVT_CMSE_NON_SECURE) && !defined(NVT_DBG_UART_OFF)
/**
 * @brief  Set debug UART multi-function pins
 *
 * @param  None
 *
 * @return None
 */
__WEAK void SetDebugUartMFP(void)
{
#if (!defined(DEBUG_ENABLE_SEMIHOST) || (DEBUG_ENABLE_SEMIHOST == 1)) && !defined(OS_USE_SEMIHOSTING)

#if (DEBUG_PORT_UART_IDX == 0)
    /* Set PB12 as UART0 RXD and PB13 as UART0 TXD */
    SET_UART0_RXD_PB12();
    SET_UART0_TXD_PB13();
#else
#warning Need to define UART pins for DEBUG_PORT
#endif

#endif
}

/**
 * @brief    Set debug UART clock source and enable module clock
 *
 * @param    None
 *
 * @return   None
 */
__WEAK void SetDebugUartCLK(void)
{
#if (!defined(DEBUG_ENABLE_SEMIHOST) || (DEBUG_ENABLE_SEMIHOST == 1)) && !defined(OS_USE_SEMIHOSTING)

#if(DEBUG_PORT_UART_IDX  == 0)
    /* Select UART0 clock source from HIRC */
    CLK_SetModuleClock(DEBUG_PORT_MODULE, DEBUG_PORT_CLKSEL, DEBUG_PORT_CLKDIV(1));

    /* Enable UART clock */
    CLK_EnableModuleClock(DEBUG_PORT_MODULE);

    /* Reset UART module */
    SYS_ResetModule(DEBUG_PORT_RST);
#else
#warning Need to config UART clock for DEBUG_PORT
#endif

#endif
}

/**
 * @brief    Initialize debug UART to 115200-8n1
 *
 * @param    None
 *
 * @return   None
 */
__WEAK void InitDebugUart(void)
{
#if (!defined(DEBUG_ENABLE_SEMIHOST) || (DEBUG_ENABLE_SEMIHOST == 1)) && !defined(OS_USE_SEMIHOSTING)
    /* Init UART to 115200-8n1 for print message */
    UART_Open(DEBUG_PORT, 115200);
#endif
}
#endif /* NVT_DBG_UART_OFF */

/**
 * @brief    Init MPU Region
 *
 * @param    psMPURegion        User defined MPU region configuration table
 * @param    u32RegionCnt       Region count of psMPURegion
 *
 * @return   0: Init success
 *           < 0: Init failed
 * @details  Initialize MPU Region according to mpu_config_M3351.h and user defined table
 */
__WEAK int32_t InitPreDefMPURegion(const ARM_MPU_Region_t *psMPURegion, uint32_t u32RegionCnt)
{
    int32_t i32RetCode = 0;

    int32_t i32RegionIdx = 0;
    const uint8_t WTRA   = ARM_MPU_ATTR_MEMORY_(1, 0, 1, 0); // Non-transient, Write-Through, Read-allocate, Not Write-allocate
    const uint8_t WBWARA = ARM_MPU_ATTR_MEMORY_(1, 1, 1, 1); // Non-transient, Write-Back, Read-allocate, Write-allocate

    NVT_UNUSED(WTRA);
    NVT_UNUSED(WBWARA);

#if (MPU_INIT_MEM_ATTRS & BIT0)
    ARM_MPU_SetMemAttr(eMPU_ATTR_DEV_nGnRnE,        ARM_MPU_ATTR(ARM_MPU_ATTR_DEVICE_nGnRnE, ARM_MPU_ATTR_DEVICE_nGnRnE));
#endif

#if (MPU_INIT_MEM_ATTRS & BIT1)
    ARM_MPU_SetMemAttr(eMPU_ATTR_DEV_nGnRE,         ARM_MPU_ATTR(ARM_MPU_ATTR_DEVICE_nGnRE,  ARM_MPU_ATTR_DEVICE_nGnRnE));
#endif

#if (MPU_INIT_MEM_ATTRS & BIT2)
    ARM_MPU_SetMemAttr(eMPU_ATTR_DEV_nGRE,          ARM_MPU_ATTR(ARM_MPU_ATTR_DEVICE_nGRE,   ARM_MPU_ATTR_DEVICE_nGRE));
#endif

#if (MPU_INIT_MEM_ATTRS & BIT3)
    ARM_MPU_SetMemAttr(eMPU_ATTR_DEV_GRE,           ARM_MPU_ATTR(ARM_MPU_ATTR_DEVICE_GRE,    ARM_MPU_ATTR_DEVICE_GRE));
#endif

#if (MPU_INIT_MEM_ATTRS & BIT4)
    ARM_MPU_SetMemAttr(eMPU_ATTR_NON_CACHEABLE,     ARM_MPU_ATTR(ARM_MPU_ATTR_NON_CACHEABLE, ARM_MPU_ATTR_NON_CACHEABLE));
#endif

#if (MPU_INIT_MEM_ATTRS & BIT5)
    ARM_MPU_SetMemAttr(eMPU_ATTR_CACHEABLE_WTRA,    ARM_MPU_ATTR(WTRA, WTRA));
#endif

#if (MPU_INIT_MEM_ATTRS & BIT6)
    ARM_MPU_SetMemAttr(eMPU_ATTR_CACHEABLE_WBWARA,  ARM_MPU_ATTR(WBWARA, WBWARA));
#endif

    i32RegionIdx = 0;

#if (MPU_INIT_REGIONS != 0)

    if (MPU_INIT_REGION(0) != 0)
    {
        //printf("[0] Base: 0x%08X, Limit: 0x%08X\n", MPU_INIT_BASE(0), MPU_INIT_LIMIT(0));
        ARM_MPU_SetRegion(i32RegionIdx, MPU_INIT_RBAR(0, MPU_INIT_BASE(0)), ARM_MPU_RLAR(MPU_INIT_LIMIT(0), MPU_MEM_ATTR(0)));
        i32RegionIdx++;
    }

    if (MPU_INIT_REGION(1) != 0)
    {
        //printf("[1] Base: 0x%08X, Limit: 0x%08X\n", MPU_INIT_BASE(1), MPU_INIT_LIMIT(1));
        ARM_MPU_SetRegion(i32RegionIdx, MPU_INIT_RBAR(1, MPU_INIT_BASE(1)), ARM_MPU_RLAR(MPU_INIT_LIMIT(1), MPU_MEM_ATTR(1)));
        i32RegionIdx++;
    }

    if (MPU_INIT_REGION(2) != 0)
    {
        //printf("[2] Base: 0x%08X, Limit: 0x%08X\n", MPU_INIT_BASE(2), MPU_INIT_LIMIT(2));
        ARM_MPU_SetRegion(i32RegionIdx, MPU_INIT_RBAR(2, MPU_INIT_BASE(2)), ARM_MPU_RLAR(MPU_INIT_LIMIT(2), MPU_MEM_ATTR(2)));
        i32RegionIdx++;
    }

    if (MPU_INIT_REGION(3) != 0)
    {
        //printf("[3] Base: 0x%08X, Limit: 0x%08X\n", MPU_INIT_BASE(3), MPU_INIT_LIMIT(3));
        ARM_MPU_SetRegion(i32RegionIdx, MPU_INIT_RBAR(3, MPU_INIT_BASE(3)), ARM_MPU_RLAR(MPU_INIT_LIMIT(3), MPU_MEM_ATTR(3)));
        i32RegionIdx++;
    }

    if (MPU_INIT_REGION(4) != 0)
    {
        //printf("[4] Base: 0x%08X, Limit: 0x%08X\n", MPU_INIT_BASE(4), MPU_INIT_LIMIT(4));
        ARM_MPU_SetRegion(i32RegionIdx, MPU_INIT_RBAR(4, MPU_INIT_BASE(4)), ARM_MPU_RLAR(MPU_INIT_LIMIT(4), MPU_MEM_ATTR(4)));
        i32RegionIdx++;
    }

    if (MPU_INIT_REGION(5) != 0)
    {
        //printf("[5] Base: 0x%08X, Limit: 0x%08X\n", MPU_INIT_BASE(5), MPU_INIT_LIMIT(5));
        ARM_MPU_SetRegion(i32RegionIdx, MPU_INIT_RBAR(5, MPU_INIT_BASE(5)), ARM_MPU_RLAR(MPU_INIT_LIMIT(5), MPU_MEM_ATTR(5)));
        i32RegionIdx++;
    }

    if (MPU_INIT_REGION(6) != 0)
    {
        //printf("[6] Base: 0x%08X, Limit: 0x%08X\n", MPU_INIT_BASE(6), MPU_INIT_LIMIT(6));
        ARM_MPU_SetRegion(i32RegionIdx, MPU_INIT_RBAR(6, MPU_INIT_BASE(6)), ARM_MPU_RLAR(MPU_INIT_LIMIT(6), MPU_MEM_ATTR(6)));
        i32RegionIdx++;
    }

#endif  // (MPU_INIT_REGIONS != 0)

    if (psMPURegion != NULL)
    {
        //printf("u32RegionCnt: %d, (MPU_REGIONS_MAX - i32RegionIdx): %d\n", u32RegionCnt, (MPU_REGIONS_MAX - i32RegionIdx));

        if (u32RegionCnt < (uint32_t)(MPU_REGIONS_MAX - i32RegionIdx - 1))
            ARM_MPU_Load(i32RegionIdx, psMPURegion, u32RegionCnt);
        else
            return -1;
    }

    // Enable MPU with default priv access to all other regions
    ARM_MPU_Enable(MPU_CTRL_PRIVDEFENA_Msk);

    return i32RetCode;
}

/*----------------------------------------------------------------------------
  System initialization function
 *----------------------------------------------------------------------------*/
//__attribute__((constructor))
void SystemInit(void)
{
#if 0
#if defined (__VTOR_PRESENT) && (__VTOR_PRESENT == 1U)
    SCB->VTOR = (uint32_t)(&__VECTOR_TABLE[0]);
#endif

#ifdef UNALIGNED_SUPPORT_DISABLE
    SCB->CCR |= SCB_CCR_UNALIGN_TRP_Msk;
#endif
#endif

#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
    TZ_SAU_Setup();
    SCU_Setup();
    FMC_NSCBA_Setup();
#endif

    /* Initialize MPU setting and use default configurations. Not suitable in Zephyr.*/
    //InitPreDefMPURegion(NULL, 0);
}

#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
/**
 * @brief    Setup Non-secure boundary
 *
 * @details  This function is used to set Non-secure boundary according to
 *           the configuration of partition header file
 */
void FMC_NSCBA_Setup(void)
{
    uint32_t bForceReset = FALSE;

    /* Skip NSCBA Setup according config */
    if (FMC_INIT_NSCBA == 0)
        return;

    /* Check if NSCBA value with current active NSCBA */
    if ((SCU->FNSADDR != FMC_SECURE_END) ||
            ((FMC->ISPSTS & FMC_ISPSTS_MIRBOUND_Msk) != (FMC_INIT_MIRROR_BOUND << FMC_ISPSTS_MIRBOUND_Pos))
       )
    {
        /* Unlock Protected Register */
        SYS_UnlockReg();

        /* Enable FMC ISP and config update */
        FMC->ISPCTL = FMC_ISPCTL_ISPEN_Msk | FMC_ISPCTL_CFGUEN_Msk;

        /* Config Base of NSCBA */
        FMC->ISPADDR = FMC_NSCBA_BASE;

        /* Read Non-secure base address config */
        FMC->ISPCMD = FMC_ISPCMD_READ;
        FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;

        while (FMC->ISPTRG)
            ;

        /* Setting NSCBA when it is empty */
        if (FMC->ISPDAT != 0xFFFFFFFFul)
        {
            /* Erase old setting */
            FMC->ISPCMD = FMC_ISPCMD_CFG_ERASE;
            FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;

            while (FMC->ISPTRG)
                ;
        }

        /* Set new base */
        FMC->ISPDAT = ((uint32_t)(FMC_INIT_MIRROR_BOUND << 31) | FMC_SECURE_END);
        FMC->ISPCMD = FMC_ISPCMD_PROGRAM;
        FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;

        while (FMC->ISPTRG)
            ;

        bForceReset = TRUE;
    }

    /* Skip NSCBA Setup according config */
#if (DFMC_INIT_NSCBA == 1)
    uint32_t u32Config14, u32NSCBAConfig = ((DFMC_SECURE_END - DFMC_DATA_FLASH_BASE) / 0x1000) - 1;

    /* Check if NSCBA value with current active NSCBA */
    if ((SCU->DFNSADDR & 0xF) != u32NSCBAConfig)
    {
        /* Unlock Protected Register */
        SYS_UnlockReg();

        /* Enable FMC ISP and config update */
        FMC->ISPCTL = FMC_ISPCTL_ISPEN_Msk | FMC_ISPCTL_CFGUEN_Msk;

        /* Config Base of NSCBA */
        FMC->ISPADDR = FMC_USER_CONFIG_14;

        /* Read Non-secure base address config */
        FMC->ISPCMD = FMC_ISPCMD_READ;
        FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;

        while (FMC->ISPTRG)
            ;

        u32Config14 = FMC->ISPDAT;
        //printf("CONFIG14 0x%08X\n", u32Config14);

        if ((u32Config14 & 0x0000006F) == ((DFMC_SECURE_EEPROM << 6) | ((!DFMC_ENABLE_EEPROM) << 5) | u32NSCBAConfig))
            return ;

        /* Setting NSCBA when it is empty */
        if (u32Config14 != 0xFFFFFFFFul)
        {
            /* Erase old setting */
            FMC->ISPCMD = FMC_ISPCMD_CFG_ERASE;
            FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;

            while (FMC->ISPTRG)
                ;
        }

        /* Set new base */
        //FMC->ISPDAT = (u32Config14 & ~0xF) | ((DFMC_SECURE_END - DFMC_DATA_FLASH_BASE) / 0x1000);
        FMC->ISPDAT = ~(0x0000006F) | ((DFMC_SECURE_EEPROM << 6) | ((!DFMC_ENABLE_EEPROM) << 5) | u32NSCBAConfig);
        FMC->ISPCMD = FMC_ISPCMD_PROGRAM;
        FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;

        while (FMC->ISPTRG)
            ;

        bForceReset = TRUE;
    }

#endif

    if (bForceReset)
    {
        /* Force Chip Reset to valid new setting */
        SYS->IPRST0 = SYS_IPRST0_CHIPRST_Msk;
    }
}

#define NVIC_ITNS_CONF(IRQn)    (NVIC->ITNS[(IRQn / 32)] |= (uint32_t)(1 << (IRQn % 32)))

/**
 * @brief    Setup Security Configuration Unit
 */
void SCU_Setup(void)
{
    //SYS_ResetModule(SYS_SCU0RST);
    SCU->PNSSET[0] = SCU_INIT_PNSSET0_VAL;
    SCU->PNSSET[1] = SCU_INIT_PNSSET1_VAL;
    SCU->PNSSET[2] = SCU_INIT_PNSSET2_VAL;
    SCU->PNSSET[3] = SCU_INIT_PNSSET3_VAL;
    SCU->PNSSET[4] = SCU_INIT_PNSSET4_VAL;
    SCU->PNSSET[5] = SCU_INIT_PNSSET5_VAL;
    SCU->PNSSET[6] = SCU_INIT_PNSSET6_VAL;

    SCU->IONSSET[0] = SCU_INIT_IONSSET0_VAL;
    SCU->IONSSET[1] = SCU_INIT_IONSSET1_VAL;
    SCU->IONSSET[2] = SCU_INIT_IONSSET2_VAL;
    SCU->IONSSET[3] = SCU_INIT_IONSSET3_VAL;
    SCU->IONSSET[4] = SCU_INIT_IONSSET4_VAL;
    SCU->IONSSET[5] = SCU_INIT_IONSSET5_VAL;
    SCU->IONSSET[6] = SCU_INIT_IONSSET6_VAL;
    SCU->IONSSET[7] = SCU_INIT_IONSSET7_VAL;

    /* Set Secure/Non-secure SRAM region */
    switch (SCU_SECURE_SRAM_SIZE)
    {
        case     0x0:
            SCU->SRAMNSSET = 0xFFFFF;
            break;

        case  0x2000:
            SCU->SRAMNSSET = 0xFFFFE;
            break;

        case  0x4000:
            SCU->SRAMNSSET = 0xFFFFC;
            break;

        case  0x6000:
            SCU->SRAMNSSET = 0xFFFF8;
            break;

        case  0x8000:
            SCU->SRAMNSSET = 0xFFFF0;
            break;

        case  0xA000:
            SCU->SRAMNSSET = 0xFFFE0;
            break;

        case  0xC000:
            SCU->SRAMNSSET = 0xFFFC0;
            break;

        case  0xE000:
            SCU->SRAMNSSET = 0xFFF80;
            break;

        case 0x10000:
            SCU->SRAMNSSET = 0xFFF00;
            break;

        case 0x12000:
            SCU->SRAMNSSET = 0xFFE00;
            break;

        case 0x14000:
            SCU->SRAMNSSET = 0xFFC00;
            break;

        case 0x16000:
            SCU->SRAMNSSET = 0xFF800;
            break;

        case 0x18000:
            SCU->SRAMNSSET = 0xFF000;
            break;

        case 0x1A000:
            SCU->SRAMNSSET = 0xFE000;
            break;

        case 0x1C000:
            SCU->SRAMNSSET = 0xFC000;
            break;

        case 0x1E000:
            SCU->SRAMNSSET = 0xF8000;
            break;

        case 0x20000:
            SCU->SRAMNSSET = 0xF0000;
            break;

        case 0x22000:
            SCU->SRAMNSSET = 0xE0000;
            break;

        case 0x24000:
            SCU->SRAMNSSET = 0xC0000;
            break;

        case 0x26000:
            SCU->SRAMNSSET = 0x80000;
            break;

        case 0x28000:
            SCU->SRAMNSSET = 0x00000;
            break;

        default:
            SCU->SRAMNSSET = 0x00000;
            break;
    }

    /* Set interrupt to Non-secure according to PNSSETx settings */
    if (SCU_INIT_PNSSET0_VAL & SCU_PNSSET0_PDMA0_Msk)
    {
        NVIC_ITNS_CONF(PDMA0_IRQn);     /* Int of PDMA0_INT         */
    }

    if (SCU_INIT_PNSSET0_VAL & SCU_PNSSET0_USBH_Msk)
    {
        NVIC_ITNS_CONF(USBH_IRQn);      /* Int of USBH_INT          */
    }

    if (SCU_INIT_PNSSET0_VAL & SCU_PNSSET0_EBI_Msk)
    {
        /* EBI does not have IRQ */
    }

    if (SCU_INIT_PNSSET1_VAL & SCU_PNSSET1_CANFD0_Msk)
    {
        NVIC_ITNS_CONF(CANFD00_IRQn);   /* Int of CANFD0_INT0       */
        NVIC_ITNS_CONF(CANFD01_IRQn);   /* Int of CANFD0_INT1       */
    }

    if (SCU_INIT_PNSSET1_VAL & SCU_PNSSET1_CANFD1_Msk)
    {
        NVIC_ITNS_CONF(CANFD10_IRQn);   /* Int of CANFD1_INT0       */
        NVIC_ITNS_CONF(CANFD11_IRQn);   /* Int of CANFD1_INT1       */
    }

    if (SCU_INIT_PNSSET1_VAL & SCU_PNSSET1_CRC_Msk)
    {
        NVIC_ITNS_CONF(CRC_IRQn);       /* Int of CRC_INT           */
    }

    if (SCU_INIT_PNSSET1_VAL & SCU_PNSSET1_CACHE_Msk)
    {
        NVIC_ITNS_CONF(CACHE_IRQn);     /* Int of CACHE_INT         */
    }

    if (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_RTC_Msk)
    {
        NVIC_ITNS_CONF(RTC_IRQn);       /* Int of RTC_INT           */
    }

    if (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_WDT1_Msk)
    {
        NVIC_ITNS_CONF(WDT1_IRQn);      /* Int of WDT1_INT          */
    }

    if (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_EADC0_Msk)
    {
        NVIC_ITNS_CONF(EADC00_IRQn);    /* Int of EADC0_INT0        */
        NVIC_ITNS_CONF(EADC01_IRQn);    /* Int of EADC0_INT1        */
        NVIC_ITNS_CONF(EADC02_IRQn);    /* Int of EADC0_INT2        */
        NVIC_ITNS_CONF(EADC03_IRQn);    /* Int of EADC0_INT3        */
    }

    if (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_ACMP01_Msk)
    {
        NVIC_ITNS_CONF(ACMP01_IRQn);    /* Int of ACMP01_INT        */
    }

    if (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_DAC_Msk)
    {
        NVIC_ITNS_CONF(DAC0_IRQn);      /* Int of DAC0_INT          */
    }

    if (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_EADC1_Msk)
    {
        NVIC_ITNS_CONF(EADC10_IRQn);    /* Int of EADC1_INT0        */
        NVIC_ITNS_CONF(EADC11_IRQn);    /* Int of EADC1_INT1        */
        NVIC_ITNS_CONF(EADC12_IRQn);    /* Int of EADC1_INT2        */
        NVIC_ITNS_CONF(EADC13_IRQn);    /* Int of EADC1_INT3        */
    }

    if (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_TIMER01_Msk)
    {
        NVIC_ITNS_CONF(TIMER0_IRQn);    /* Int of TMR0_INT          */
        NVIC_ITNS_CONF(TIMER1_IRQn);    /* Int of TMR1_INT          */
    }

    if (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_TIMER23_Msk)
    {
        NVIC_ITNS_CONF(TIMER2_IRQn);    /* Int of TMR2_INT          */
        NVIC_ITNS_CONF(TIMER3_IRQn);    /* Int of TMR3_INT          */
    }

    if (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_BPWM0_Msk)
    {
        NVIC_ITNS_CONF(BPWM0_IRQn);     /* Int of BPWM0_INT         */
    }

    if (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_BPWM1_Msk)
    {
        NVIC_ITNS_CONF(BPWM1_IRQn);     /* Int of BPWM1_INT         */
    }

    if (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_PWM0_Msk)
    {
        NVIC_ITNS_CONF(BRAKE0_IRQn);    /* Int of BREAK0_INT        */
        NVIC_ITNS_CONF(PWM0P0_IRQn);    /* Int of EPWM0_P0_INT      */
        NVIC_ITNS_CONF(PWM0P1_IRQn);    /* Int of EPWM0_P1_INT      */
        NVIC_ITNS_CONF(PWM0P2_IRQn);    /* Int of EPWM0_P2_INT      */
    }

    if (SCU_INIT_PNSSET2_VAL & SCU_PNSSET2_PWM1_Msk)
    {
        NVIC_ITNS_CONF(BRAKE1_IRQn);    /* Int of BREAK1_INT        */
        NVIC_ITNS_CONF(PWM1P0_IRQn);    /* Int of EPWM1_P0_INT      */
        NVIC_ITNS_CONF(PWM1P1_IRQn);    /* Int of EPWM1_P1_INT      */
        NVIC_ITNS_CONF(PWM1P2_IRQn);    /* Int of EPWM1_P2_INT      */
    }

    if (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_QSPI0_Msk)
    {
        NVIC_ITNS_CONF(QSPI0_IRQn);     /* Int of QSPI0_INT         */
    }

    if (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_SPI0_Msk)
    {
        NVIC_ITNS_CONF(SPI0_IRQn);      /* Int of SPI0_INT          */
    }

    if (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_SPI1_Msk)
    {
        NVIC_ITNS_CONF(SPI1_IRQn);      /* Int of SPI1_INT          */
    }

    if (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_UART0_Msk)
    {
        NVIC_ITNS_CONF(UART0_IRQn);     /* Int of UART0_INT         */
    }

    if (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_UART1_Msk)
    {
        NVIC_ITNS_CONF(UART1_IRQn);     /* Int of UART1_INT         */
    }

    if (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_UART2_Msk)
    {
        NVIC_ITNS_CONF(UART2_IRQn);     /* Int of UART2_INT         */
    }

    if (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_UART3_Msk)
    {
        NVIC_ITNS_CONF(UART3_IRQn);     /* Int of UART3_INT         */
    }

    if (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_UART4_Msk)
    {
        NVIC_ITNS_CONF(UART4_IRQn);     /* Int of UART4_INT         */
    }

    if (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_UART5_Msk)
    {
        NVIC_ITNS_CONF(UART5_IRQn);     /* Int of UART5_INT         */
    }

    if (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_UART6_Msk)
    {
        NVIC_ITNS_CONF(UART6_IRQn);     /* Int of UART6_INT         */
    }

    if (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_UART7_Msk)
    {
        NVIC_ITNS_CONF(UART7_IRQn);     /* Int of UART7_INT         */
    }

    if (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_UART8_Msk)
    {
        NVIC_ITNS_CONF(UART8_IRQn);     /* Int of UART8_INT         */
    }

    if (SCU_INIT_PNSSET3_VAL & SCU_PNSSET3_UART9_Msk)
    {
        NVIC_ITNS_CONF(UART9_IRQn);     /* Int of UART9_INT         */
    }

    if (SCU_INIT_PNSSET4_VAL & SCU_PNSSET4_I2C0_Msk)
    {
        NVIC_ITNS_CONF(I2C0_IRQn);      /* Int of I2C0_INT          */
    }

    if (SCU_INIT_PNSSET4_VAL & SCU_PNSSET4_I2C1_Msk)
    {
        NVIC_ITNS_CONF(I2C1_IRQn);      /* Int of I2C1_INT          */
    }

    if (SCU_INIT_PNSSET4_VAL & SCU_PNSSET4_I2C2_Msk)
    {
        NVIC_ITNS_CONF(I2C2_IRQn);      /* Int of I2C2_INT          */
    }

    if (SCU_INIT_PNSSET4_VAL & SCU_PNSSET4_I3C0_Msk)
    {
        NVIC_ITNS_CONF(I3C0_IRQn);      /* Int of I3C0_INT          */
    }

    if (SCU_INIT_PNSSET4_VAL & SCU_PNSSET4_LLSI0_Msk)
    {
        NVIC_ITNS_CONF(LLSI0_IRQn);     /* Int of LLSI0_INT         */
        NVIC_ITNS_CONF(LLSI2_IRQn);     /* Int of LLSI2_INT         */
        NVIC_ITNS_CONF(LLSI4_IRQn);     /* Int of LLSI4_INT         */
        NVIC_ITNS_CONF(LLSI6_IRQn);     /* Int of LLSI5_INT         */
        NVIC_ITNS_CONF(LLSI8_IRQn);     /* Int of LLSI6_INT         */
    }

    if (SCU_INIT_PNSSET4_VAL & SCU_PNSSET4_LLSI1_Msk)
    {
        NVIC_ITNS_CONF(LLSI1_IRQn);     /* Int of LLSI1_INT         */
        NVIC_ITNS_CONF(LLSI3_IRQn);     /* Int of LLSI3_INT         */
        NVIC_ITNS_CONF(LLSI5_IRQn);     /* Int of LLSI5_INT         */
        NVIC_ITNS_CONF(LLSI7_IRQn);     /* Int of LLSI7_INT         */
        NVIC_ITNS_CONF(LLSI9_IRQn);     /* Int of LLSI9_INT         */
    }

    if (SCU_INIT_PNSSET4_VAL & SCU_PNSSET4_ELLSI0_Msk)
    {
        NVIC_ITNS_CONF(ELLSI0_IRQn);    /* Int of ELLSI0_INT        */
    }

    if (SCU_INIT_PNSSET4_VAL & SCU_PNSSET4_ELLSI1_Msk)
    {
        NVIC_ITNS_CONF(ELLSI1_IRQn);    /* Int of ELLSI1_INT        */
    }

    if (SCU_INIT_PNSSET4_VAL & SCU_PNSSET4_WWDT1_Msk)
    {
        NVIC_ITNS_CONF(WWDT1_IRQn);     /* Int of WWDT1_INT         */
    }

    if (SCU_INIT_PNSSET5_VAL & SCU_PNSSET5_EQEI0_Msk)
    {
        NVIC_ITNS_CONF(EQEI0_IRQn);     /* Int of EQEI0_INT         */
    }

    if (SCU_INIT_PNSSET5_VAL & SCU_PNSSET5_EQEI1_Msk)
    {
        NVIC_ITNS_CONF(EQEI1_IRQn);     /* Int of EQEI1_INT         */
    }

    if (SCU_INIT_PNSSET5_VAL & SCU_PNSSET5_ECAP0_Msk)
    {
        NVIC_ITNS_CONF(ECAP0_IRQn);     /* Int of ECAP0_INT         */
    }

    if (SCU_INIT_PNSSET5_VAL & SCU_PNSSET5_TRNG_Msk)
    {
        NVIC_ITNS_CONF(TRNG_IRQn);      /* Int of TRNG_INT          */
    }

    if (SCU_INIT_PNSSET5_VAL & SCU_PNSSET6_USBD_Msk)
    {
        NVIC_ITNS_CONF(USBD_IRQn);      /* Int of USBD_INT          */
    }

    if (SCU_INIT_PNSSET6_VAL & SCU_PNSSET6_USCI0_Msk)
    {
        NVIC_ITNS_CONF(USCI0_IRQn);     /* Int of USCI0_INT         */
    }

    if (SCU_INIT_PNSSET6_VAL & SCU_PNSSET6_USCI1_Msk)
    {
        NVIC_ITNS_CONF(USCI1_IRQn);     /* Int of USCI1_INT         */
    }

    if (SCU_INIT_IONSSET_VAL & BIT0)
    {
        NVIC_ITNS_CONF(GPA_IRQn);       /* Int of PA                */
    }

    if (SCU_INIT_IONSSET_VAL & BIT1)
    {
        NVIC_ITNS_CONF(GPB_IRQn);       /* Int of PB                */
    }

    if (SCU_INIT_IONSSET_VAL & BIT2)
    {
        NVIC_ITNS_CONF(GPC_IRQn);       /* Int of PC                */
    }

    if (SCU_INIT_IONSSET_VAL & BIT3)
    {
        NVIC_ITNS_CONF(GPD_IRQn);       /* Int of PD                */
    }

    if (SCU_INIT_IONSSET_VAL & BIT4)
    {
        NVIC_ITNS_CONF(GPE_IRQn);       /* Int of PE                */
    }

    if (SCU_INIT_IONSSET_VAL & BIT5)
    {
        NVIC_ITNS_CONF(GPF_IRQn);       /* Int of PF                */
    }

    if (SCU_INIT_IONSSET_VAL & BIT6)
    {
        NVIC_ITNS_CONF(GPG_IRQn);       /* Int of PG                */
    }

    if (SCU_INIT_IONSSET_VAL & BIT7)
    {
        NVIC_ITNS_CONF(GPH_IRQn);       /* Int of PH                */
    }

    if (SCU_INIT_EINTNS_VAL & BIT0)
    {
        NVIC_ITNS_CONF(EINT0_IRQn);     /* Int of EINT0             */
    }

    if (SCU_INIT_EINTNS_VAL & BIT1)
    {
        NVIC_ITNS_CONF(EINT1_IRQn);     /* Int of EINT1             */
    }

    if (SCU_INIT_EINTNS_VAL & BIT2)
    {
        NVIC_ITNS_CONF(EINT2_IRQn);     /* Int of EINT2             */
    }

    if (SCU_INIT_EINTNS_VAL & BIT3)
    {
        NVIC_ITNS_CONF(EINT3_IRQn);     /* Int of EINT3             */
    }

    if (SCU_INIT_EINTNS_VAL & BIT4)
    {
        NVIC_ITNS_CONF(EINT4_IRQn);     /* Int of EINT4             */
    }

    if (SCU_INIT_EINTNS_VAL & BIT5)
    {
        NVIC_ITNS_CONF(EINT5_IRQn);     /* Int of EINT5             */
    }

    if (SCU_INIT_EINTNS_VAL & BIT6)
    {
        NVIC_ITNS_CONF(EINT6_IRQn);     /* Int of EINT6             */
    }

    if (SCU_INIT_EINTNS_VAL & BIT7)
    {
        NVIC_ITNS_CONF(EINT7_IRQn);     /* Int of EINT7             */
    }

    /* Enable SCU Int status */
    SCU->SVIEN = (uint32_t)(-1);
    NVIC_EnableIRQ(SCU_IRQn);
}

#define VSRC_NULL   (0)
#define VSRC_FLASH  (SCU_BASE + 0x40)     // 0
#define VSRC_SRAM0  (SCU_BASE + 0x48)     // 1
#define VSRC_SRAM1  (SCU_BASE + 0x50)     // 2
#define VSRC_SRAM2  (SCU_BASE + 0x58)     // 3
#define VSRC_APB0   (SCU_BASE + 0x60)     // 4
#define VSRC_APB1   (SCU_BASE + 0x68)     // 5
#define VSRC_EBI    (SCU_BASE + 0x70)     // 6
#define VSRC_SYS    (SCU_BASE + 0x78)     // 7
#define VSRC_FMC    (SCU_BASE + 0x80)     // 8
#define VSRC_PDMA0  (SCU_BASE + 0x88)     // 9
#define VSRC_CRC    (SCU_BASE + 0x90)     // 10
#define VSRC_CANFD0 (SCU_BASE + 0x98)     // 11
#define VSRC_CANFD1 (SCU_BASE + 0xA0)     // 12
#define VSRC_SCU    (SCU_BASE + 0xA8)     // 13
#define VSRC_GPIO   (SCU_BASE + 0xB0)     // 14
#define VSRC_USBH   (SCU_BASE + 0xB8)     // 15
#define VSRC_CACHE  (SCU_BASE + 0xD0)     // 18
#define VSRC_DFLASH (SCU_BASE + 0xD8)     // 19
#define VSRC_DFMC   (SCU_BASE + 0xE0)     // 20

#define VA_NULL     (0)
#define VA_FLASH    (SCU_BASE + 0x44)     // 0
#define VA_SRAM0    (SCU_BASE + 0x4C)     // 1
#define VA_SRAM1    (SCU_BASE + 0x54)     // 2
#define VA_SRAM2    (SCU_BASE + 0x5C)     // 3
#define VA_APB0     (SCU_BASE + 0x64)     // 4
#define VA_APB1     (SCU_BASE + 0x6C)     // 5
#define VA_EBI      (SCU_BASE + 0x74)     // 6
#define VA_SYS      (SCU_BASE + 0x7C)     // 7
#define VA_FMC      (SCU_BASE + 0x84)     // 8
#define VA_PDMA0    (SCU_BASE + 0x8C)     // 9
#define VA_CRC      (SCU_BASE + 0x94)     // 10
#define VA_CANFD0   (SCU_BASE + 0x9C)     // 11
#define VA_CANFD1   (SCU_BASE + 0xA4)     // 12
#define VA_SCU      (SCU_BASE + 0xAC)     // 13
#define VA_GPIO     (SCU_BASE + 0xB4)     // 14
#define VA_USBH     (SCU_BASE + 0xBC)     // 15
#define VA_CACHE    (SCU_BASE + 0xD4)     // 18
#define VA_DFLASH   (SCU_BASE + 0xDC)     // 19
#define VA_DFMC     (SCU_BASE + 0xE4)     // 20

static const uint32_t s_au32VSrcIdx[32] =
{
    VSRC_FLASH, VSRC_SRAM0, VSRC_SRAM1, VSRC_SRAM2,  VSRC_APB0,   VSRC_APB1, VSRC_EBI,  VSRC_SYS,
    VSRC_FMC,   VSRC_PDMA0, VSRC_CRC,   VSRC_CANFD0, VSRC_CANFD1, VSRC_SCU,  VSRC_GPIO, VSRC_USBH,
    VSRC_NULL,  VSRC_NULL,  VSRC_CACHE, VSRC_DFLASH, VSRC_DFMC
};

#if (CHECK_SCU_VIOLATION == 1)
static const uint32_t s_au32VAddrIdx[32] =
{
    VA_FLASH, VA_SRAM0, VA_SRAM1, VA_SRAM2,  VA_APB0,   VA_APB1, VA_EBI,  VA_SYS,
    VA_FMC,   VA_PDMA0, VA_CRC,   VA_CANFD0, VA_CANFD1, VA_SCU,  VA_GPIO, VA_USBH,
    VA_NULL,  VA_NULL,  VA_CACHE, VA_DFLASH, VA_DFMC
};

static const char *s_astrMasterName[] =
{
    "", "", "CPU", "PDMA0", "USBH", "CRC",  "CRYPTO"
};

static const char *s_astrSlaveName[] =
{
    "FLASH", "SRAM0", "SRAM1", "SRAM2",  "APB0",   "APB1", "EBI",  "SYS",
    "FMC",   "PDMA0", "CRC",   "CANFD0", "CANFD1", "SCU",  "GPIO", "USBH",
    "",      "",      "CACHE", "DFLASH", "DFMC"
};
#endif

__WEAK void SCU_IRQHandler(void)
{
    uint32_t u32Reg;
    uint32_t i;

    /* Check slave peripherals security violation interrupt */
    u32Reg = SCU->SVINTSTS;

    if (u32Reg)
    {
        /* Get violation address and source */
        for (i = 0; i < (sizeof(s_au32VSrcIdx) / sizeof(s_au32VSrcIdx[0])); i++)
        {
            if (u32Reg & (1 << i))
            {
                if (s_au32VSrcIdx[i] != VSRC_NULL)
                {
#if (CHECK_SCU_VIOLATION == 1)
                    printf("[Warning] Secure violation: %s access %s@0x%08X illegallly.\n", s_astrMasterName[M32(s_u32VSrcIdx[i])], s_astrSlaveName[i], M32(s_au32VAddrIdx[i]));
#endif
                    SCU->SVINTSTS = (1 << i);
                }
                else
                {
                    // Invalid SCU violation interrupt
                }
            }
        }
    }
}

/**
 * @brief   Setup a Nonsecure callable Region
 *
 * @details The base and limit of Nonsecure callable region is dependent on the
 *          application code size.
 */
void NSC_Init(uint32_t u32RegionIdx)
{
    uint32_t u32Base = 0,
             u32Limit = 0;

#if defined (__ICCARM__)
# pragma section = "Veneer$$CMSE"
    u32Base  = (uint32_t)__section_begin("Veneer$$CMSE");
    u32Limit = (uint32_t)__section_end("Veneer$$CMSE");
#elif defined(__ARMCC_VERSION)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"
    extern uint32_t Image$$NSC_ROM$$XO$$Base [];
    extern uint32_t Image$$NSC_ROM$$XO$$Limit[];
    u32Base  = (uint32_t)Image$$NSC_ROM$$XO$$Base;
    u32Limit = (uint32_t)Image$$NSC_ROM$$XO$$Limit;
#pragma clang diagnostic pop
#else
    extern uint32_t __start_NSC[];
    extern uint32_t __end_NSC[];
    u32Base  = (uint32_t)__start_NSC;
    u32Limit = (uint32_t)__end_NSC;
#endif

    if (u32Limit > 0)
    {
        SAU->RNR  = (u32RegionIdx & SAU_RNR_REGION_Msk);
        SAU->RBAR = (u32Base & SAU_RBAR_BADDR_Msk);
        SAU->RLAR = (u32Limit & SAU_RLAR_LADDR_Msk) |
                    (SAU_RLAR_NSC_Msk | 1ul);
    }
}

/**
 * @brief   Setup a SAU Region
 *
 * @details Writes the region information contained in SAU_Region to the
 *          registers SAU_RNR, SAU_RBAR, and SAU_RLAR
 */
void TZ_SAU_Setup(void)
{
#if defined (__SAUREGION_PRESENT) && (__SAUREGION_PRESENT == 1U)

#if (SAU_INIT_CTRL == 1) && (SAU_INIT_CTRL_ENABLE == 1)
#if defined (SAU_INIT_REGION0) && (SAU_INIT_REGION0 == 1U)
    SAU_INIT_REGION(0);
#endif

#if defined (SAU_INIT_REGION1) && (SAU_INIT_REGION1 == 1U)
    SAU_INIT_REGION(1);
#endif

#if defined (SAU_INIT_REGION2) && (SAU_INIT_REGION2 == 1U)
    SAU_INIT_REGION(2);
#endif

#if defined (SAU_INIT_REGION3) && (SAU_INIT_REGION3 == 1U)
    SAU_INIT_REGION(3);
#endif

#if defined (SAU_INIT_REGION4) && (SAU_INIT_REGION4 == 1U)
    SAU_INIT_REGION(4);
#endif

#if defined (SAU_INIT_REGION5) && (SAU_INIT_REGION5 == 1U)
    SAU_INIT_REGION(5);
#endif

#if defined (SAU_INIT_REGION6) && (SAU_INIT_REGION6 == 1U)
    SAU_INIT_REGION(6);
#endif

#if defined (SAU_INIT_REGION7) && (SAU_INIT_REGION7 == 1U)
    SAU_INIT_REGION(7);
#endif
#endif

#endif /* defined (__SAUREGION_PRESENT) && (__SAUREGION_PRESENT == 1U) */

#if defined (SAU_INIT_CTRL) && (SAU_INIT_CTRL == 1U)
    SAU->CTRL = ((SAU_INIT_CTRL_ENABLE << SAU_CTRL_ENABLE_Pos) & SAU_CTRL_ENABLE_Msk) |
                ((SAU_INIT_CTRL_ALLNS  << SAU_CTRL_ALLNS_Pos)  & SAU_CTRL_ALLNS_Msk)   ;
#endif

#if defined (SCB_CSR_AIRCR_INIT) && (SCB_CSR_AIRCR_INIT == 1U)
    SCB->SCR   = (SCB->SCR   & ~(SCB_SCR_SLEEPDEEPS_Msk)) |
                 ((SCB_CSR_DEEPSLEEPS_VAL     << SCB_SCR_SLEEPDEEPS_Pos)     & SCB_SCR_SLEEPDEEPS_Msk);

    SCB->AIRCR = (0x05FA << SCB_AIRCR_VECTKEY_Pos) |
                 ((SCB_AIRCR_SYSRESETREQS_VAL << SCB_AIRCR_SYSRESETREQS_Pos) & SCB_AIRCR_SYSRESETREQS_Msk) |
                 ((SCB_AIRCR_BFHFNMINS_VAL    << SCB_AIRCR_BFHFNMINS_Pos)    & SCB_AIRCR_BFHFNMINS_Msk)    |
                 ((SCB_AIRCR_PRIS_VAL         << SCB_AIRCR_PRIS_Pos)         & SCB_AIRCR_PRIS_Msk);

#endif /* defined (SCB_CSR_AIRCR_INIT) && (SCB_CSR_AIRCR_INIT == 1U) */

#if (((defined (__FPU_USED) && (__FPU_USED == 1U))              || \
      (defined (__ARM_FEATURE_MVE) && (__ARM_FEATURE_MVE > 0))) && \
      (defined (TZ_FPU_NS_USAGE) && (TZ_FPU_NS_USAGE == 1U)))

    SCB->NSACR = (SCB->NSACR & ~(SCB_NSACR_CP10_Msk | SCB_NSACR_CP11_Msk)) |
                 ((SCB_NSACR_CP10_11_VAL << SCB_NSACR_CP10_Pos) & (SCB_NSACR_CP10_Msk | SCB_NSACR_CP11_Msk));

    FPU->FPCCR = (FPU->FPCCR & ~(FPU_FPCCR_TS_Msk | FPU_FPCCR_CLRONRETS_Msk | FPU_FPCCR_CLRONRET_Msk)) |
                 ((FPU_FPCCR_TS_VAL        << FPU_FPCCR_TS_Pos) & FPU_FPCCR_TS_Msk) |
                 ((FPU_FPCCR_CLRONRETS_VAL << FPU_FPCCR_CLRONRETS_Pos) & FPU_FPCCR_CLRONRETS_Msk) |
                 ((FPU_FPCCR_CLRONRET_VAL  << FPU_FPCCR_CLRONRET_Pos) & FPU_FPCCR_CLRONRET_Msk);
#endif

#if defined (SCB_ICSR_INIT) && (SCB_ICSR_INIT == 1U)
    SCB->ICSR  = (SCB->ICSR  & ~(SCB_ICSR_STTNS_Msk)) |
                 ((SCB_ICSR_STTNS_VAL         << SCB_ICSR_STTNS_Pos)         & SCB_ICSR_STTNS_Msk);
#endif /* defined (SCB_ICSR_INIT) && (SCB_ICSR_INIT == 1U) */

    /* Repeat this for all possible ITNS elements */

    /* Initial NonSecure Callable region */
    NSC_Init(4);    /* SAU region 4 is dedicated for NSC */
}

#else

__WEAK void SCU_IRQHandler(void)
{
}

#endif /* defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U) */
