/**************************************************************************//**
 * @file     system_m3331.c
 * @version  V2.00
 * @brief    System Setting Source File
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (c) 2024 Nuvoton Technology Corp. All rights reserved.
 ******************************************************************************/
#if defined (__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)       /* ARM Compiler 6 */
    #include <arm_cmse.h>
#endif

#include <stdio.h>
#include <stdint.h>
#include "NuMicro.h"
#include "partition_m3331.h"

extern void *__Vectors;                   /* see startup file */


/*----------------------------------------------------------------------------
  Clock Variable definitions
 *----------------------------------------------------------------------------*/
uint32_t SystemCoreClock  = __HSI;              /*!< System Clock Frequency (Core Clock) */
uint32_t CyclesPerUs      = (__HSI / 1000000UL);/*!< Cycles per micro second             */
uint32_t PllClock         = __HSI;              /*!< PLL Output Clock Frequency          */

void FMC_NSBA_Setup(void);
void SCU_Setup(void);
void NSC_Init(void);
void TZ_SAU_Setup(void);


#if defined (__ARM_FEATURE_CMSE) &&  (__ARM_FEATURE_CMSE == 3U)
    extern void SCU_IRQHandler(void);
#else
    extern void SCU_IRQHandler(void)__attribute__((noreturn));
#endif


#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)

/**
 * @brief    Setup Non-secure boundary
 *
 * @details  This function is used to set Non-secure boundary according to
 *           the configuration of partition header file
 */
void FMC_NSBA_Setup(void)
{
    /* Skip NSBA Setupt according config */
    if(FMC_INIT_NSBA == 0)
        return;

    /* Check if NSBA value with current active NSBA */
    if(SCU->FNSADDR != FMC_SECURE_ROM_SIZE)
    {
        /* Unlock Protected Register */
        SYS_UnlockReg();

        /* Enable ISP and config update */
        FMC->ISPCTL = FMC_ISPCTL_ISPEN_Msk | FMC_ISPCTL_CFGUEN_Msk;

        /* Config Base of NSBA */
        FMC->ISPADDR = FMC_NSCBA_BASE ;

        /* Read Non-secure base address config */
        FMC->ISPCMD = FMC_ISPCMD_READ;
        FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;
        while(FMC->ISPTRG);

        /* Setting NSBA when it is empty */
        if(FMC->ISPDAT != 0xfffffffful)
        {
            /* Erase old setting */
            FMC->ISPCMD = FMC_ISPCMD_CFG_ERASE;
            FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;
            while(FMC->ISPTRG);
        }

        /* Set new base */
        FMC->ISPDAT = FMC_SECURE_ROM_SIZE;
        FMC->ISPCMD = FMC_ISPCMD_PROGRAM;
        FMC->ISPTRG = FMC_ISPTRG_ISPGO_Msk;
        while(FMC->ISPTRG);

        /* Force Chip Reset to valid new setting */
        SYS->IPRST0 = SYS_IPRST0_CHIPRST_Msk;


    }

}

#define NVIC_ITNS_CONF(IRQn)    (NVIC->ITNS[(IRQn >> 5UL)] |= (uint32_t)(1 << (IRQn & 0x1FUL)))

/**
  \brief   Setup SCU Configuration Unit
  \details

 */
void SCU_Setup(void)
{
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

    SCU->EINTNS = SCU_INIT_EINTNS_VAL;

    /* Set Non-secure SRAM */
    switch(SCU_SECURE_SRAM_SIZE)
    {
        case     0x0:
            SCU->SRAMNSSET = 0xFFFFFFF;
            break;
        case  0x2000:
            SCU->SRAMNSSET = 0xFFFFFFE;
            break;
        case  0x4000:
            SCU->SRAMNSSET = 0xFFFFFFC;
            break;
        case  0x6000:
            SCU->SRAMNSSET = 0xFFFFFF8;
            break;
        case  0x8000:
            SCU->SRAMNSSET = 0xFFFFFF0;
            break;
        case  0xA000:
            SCU->SRAMNSSET = 0xFFFFFE0;
            break;
        case  0xC000:
            SCU->SRAMNSSET = 0xFFFFFC0;
            break;
        case  0xE000:
            SCU->SRAMNSSET = 0xFFFFF80;
            break;
        case 0x10000:
            SCU->SRAMNSSET = 0xFFFFF00;
            break;

        case 0x12000:
            SCU->SRAMNSSET = 0xFFFFE00;
            break;
        case 0x14000:
            SCU->SRAMNSSET = 0xFFFFC00;
            break;
        case 0x16000:
            SCU->SRAMNSSET = 0xFFFF800;
            break;
        case 0x18000:
            SCU->SRAMNSSET = 0xFFFF000;
            break;
        case 0x1A000:
            SCU->SRAMNSSET = 0xFFFE000;
            break;
        case 0x1C000:
            SCU->SRAMNSSET = 0xFFFC000;
            break;
        case 0x1E000:
            SCU->SRAMNSSET = 0xFFF8000;
            break;
        case 0x20000:
            SCU->SRAMNSSET = 0xFFF0000;
            break;

        case 0x24000:
            SCU->SRAMNSSET = 0xFFE0000;
            break;
        case 0x28000:
            SCU->SRAMNSSET = 0xFFC0000;
            break;
        case 0x2C000:
            SCU->SRAMNSSET = 0xFF80000;
            break;
        case 0x30000:
            SCU->SRAMNSSET = 0xFF00000;
            break;
        case 0x34000:
            SCU->SRAMNSSET = 0xFE00000;
            break;
        case 0x38000:
            SCU->SRAMNSSET = 0xFC00000;
            break;
        case 0x3C000:
            SCU->SRAMNSSET = 0xF800000;
            break;
        case 0x40000:
            SCU->SRAMNSSET = 0xF000000;
            break;

        case 0x44000:
            SCU->SRAMNSSET = 0xE000000;
            break;
        case 0x48000:
            SCU->SRAMNSSET = 0xC000000;
            break;
        case 0x4C000:
            SCU->SRAMNSSET = 0x8000000;
            break;
        default:
            SCU->SRAMNSSET = 0x0000000;
            break;
    }

    /* Set interrupt to non-secure according to PNNSET settings */
    if(SCU_INIT_PNSSET0_VAL & BIT8)  NVIC_ITNS_CONF(PDMA0_IRQn);    /* Int of PDMA0_INT    */
    if(SCU_INIT_PNSSET0_VAL & BIT13) NVIC_ITNS_CONF(SDH0_IRQn);     /* Int of SDH0_INT     */
    if(SCU_INIT_PNSSET0_VAL & BIT24)  NVIC_ITNS_CONF(PDMA1_IRQn);   /* Int of PDMA1_INT    */
    if(SCU_INIT_PNSSET0_VAL & BIT25) NVIC_ITNS_CONF(USBD20_IRQn);   /* Int of HSUSBD_INT   */
    if(SCU_INIT_PNSSET0_VAL & BIT26)
    {
        NVIC_ITNS_CONF(USBH_IRQn);     /* Int of USBH_INT     */
        NVIC_ITNS_CONF(HSUSBH_IRQn);   /* Int of HSUSBH_INT   */
    }
    if(SCU_INIT_PNSSET0_VAL & BIT27) NVIC_ITNS_CONF(PDCI_IRQn);     /* Int of PDCI_INT      */

    if(SCU_INIT_PNSSET1_VAL & BIT0)
    {
        NVIC_ITNS_CONF(CANFD00_IRQn);  /* Int of CANFD0_INT0  */
        NVIC_ITNS_CONF(CANFD01_IRQn);  /* Int of CANFD0_INT1  */
    }
    if(SCU_INIT_PNSSET1_VAL & BIT4)
    {
        NVIC_ITNS_CONF(CANFD10_IRQn);  /* Int of CANFD1_INT0  */
        NVIC_ITNS_CONF(CANFD11_IRQn);  /* Int of CANFD1_INT1  */
    }
    if(SCU_INIT_PNSSET1_VAL & BIT17) NVIC_ITNS_CONF(CRC_IRQn);      /* Int of CRC_INT      */
    if(SCU_INIT_PNSSET2_VAL & BIT1)  NVIC_ITNS_CONF(RTC_IRQn);      /* Int of RTC_INT      */
    if(SCU_INIT_PNSSET2_VAL & BIT2)  NVIC_ITNS_CONF(WDT1_IRQn);     /* Int of WDT1_INT     */
    if(SCU_INIT_PNSSET2_VAL & BIT3)
    {
        NVIC_ITNS_CONF(EADC00_IRQn);    /* Int of EADC0_INT0   */
        NVIC_ITNS_CONF(EADC01_IRQn);    /* Int of EADC0_INT1   */
        NVIC_ITNS_CONF(EADC02_IRQn);    /* Int of EADC0_INT2   */
        NVIC_ITNS_CONF(EADC03_IRQn);    /* Int of EADC0_INT3   */
    }
    if(SCU_INIT_PNSSET2_VAL & BIT5)  NVIC_ITNS_CONF(ACMP01_IRQn);   /* Int of ACMP01_INT   */
    if(SCU_INIT_PNSSET2_VAL & BIT8)  NVIC_ITNS_CONF(I2S0_IRQn);     /* Int of I2S0_INT     */
    if(SCU_INIT_PNSSET2_VAL & BIT15) NVIC_ITNS_CONF(USBOTG20_IRQn); /* Int of HSOTG_INT    */
    if(SCU_INIT_PNSSET2_VAL & BIT16)
    {
        NVIC_ITNS_CONF(TMR0_IRQn);      /* Int of TMR0_INT     */
        NVIC_ITNS_CONF(TMR1_IRQn);      /* Int of TMR1_INT     */
    }
    if(SCU_INIT_PNSSET2_VAL & BIT17)
    {
        NVIC_ITNS_CONF(TMR2_IRQn);      /* Int of TMR2_INT     */
        NVIC_ITNS_CONF(TMR3_IRQn);      /* Int of TMR3_INT     */
    }
    if(SCU_INIT_PNSSET2_VAL & BIT24)
    {
        NVIC_ITNS_CONF(BRAKE0_IRQn);    /* Int of BREAK0_INT   */
        NVIC_ITNS_CONF(EPWM0P0_IRQn);   /* Int of EPWM0_P0_INT */
        NVIC_ITNS_CONF(EPWM0P1_IRQn);   /* Int of EPWM0_P1_INT */
        NVIC_ITNS_CONF(EPWM0P2_IRQn);   /* Int of EPWM0_P2_INT */
    }
    if(SCU_INIT_PNSSET2_VAL & BIT25)
    {
        NVIC_ITNS_CONF(BRAKE1_IRQn);    /* Int of BREAK1_INT   */
        NVIC_ITNS_CONF(EPWM1P0_IRQn);   /* Int of EPWM1_P0_INT */
        NVIC_ITNS_CONF(EPWM1P1_IRQn);   /* Int of EPWM1_P1_INT */
        NVIC_ITNS_CONF(EPWM1P2_IRQn);   /* Int of EPWM1_P2_INT */
    }
    if(SCU_INIT_PNSSET2_VAL & BIT26) NVIC_ITNS_CONF(BPWM0_IRQn);    /* Int of BPWM0_INT    */
    if(SCU_INIT_PNSSET2_VAL & BIT27) NVIC_ITNS_CONF(BPWM1_IRQn);    /* Int of BPWM1_INT    */
    if(SCU_INIT_PNSSET2_VAL & BIT28) NVIC_ITNS_CONF(BPWM2_IRQn);    /* Int of BPWM2_INT    */
    if(SCU_INIT_PNSSET2_VAL & BIT29) NVIC_ITNS_CONF(BPWM3_IRQn);    /* Int of BPWM3_INT    */
    if(SCU_INIT_PNSSET2_VAL & BIT30) NVIC_ITNS_CONF(BPWM4_IRQn);    /* Int of BPWM4_INT    */
    if(SCU_INIT_PNSSET2_VAL & BIT31) NVIC_ITNS_CONF(BPWM5_IRQn);    /* Int of BPWM5_INT    */
    if(SCU_INIT_PNSSET3_VAL & BIT0)  NVIC_ITNS_CONF(QSPI0_IRQn);    /* Int of QSPI0_INT    */
    if(SCU_INIT_PNSSET3_VAL & BIT1)  NVIC_ITNS_CONF(SPI0_IRQn);     /* Int of SPI0_INT     */
    if(SCU_INIT_PNSSET3_VAL & BIT2)  NVIC_ITNS_CONF(SPI1_IRQn);     /* Int of SPI1_INT     */
    if(SCU_INIT_PNSSET3_VAL & BIT3)  NVIC_ITNS_CONF(SPI2_IRQn);     /* Int of SPI2_INT     */
    if(SCU_INIT_PNSSET3_VAL & BIT16) NVIC_ITNS_CONF(UART0_IRQn);    /* Int of UART0_INT    */
    if(SCU_INIT_PNSSET3_VAL & BIT17) NVIC_ITNS_CONF(UART1_IRQn);    /* Int of UART1_INT    */
    if(SCU_INIT_PNSSET3_VAL & BIT18) NVIC_ITNS_CONF(UART2_IRQn);    /* Int of UART2_INT    */
    if(SCU_INIT_PNSSET3_VAL & BIT19) NVIC_ITNS_CONF(UART3_IRQn);    /* Int of UART3_INT    */
    if(SCU_INIT_PNSSET3_VAL & BIT20) NVIC_ITNS_CONF(UART4_IRQn);    /* Int of UART4_INT    */
    if(SCU_INIT_PNSSET4_VAL & BIT0)  NVIC_ITNS_CONF(I2C0_IRQn);     /* Int of I2C0_INT     */
    if(SCU_INIT_PNSSET4_VAL & BIT1)  NVIC_ITNS_CONF(I2C1_IRQn);     /* Int of I2C1_INT     */
    if(SCU_INIT_PNSSET4_VAL & BIT2)  NVIC_ITNS_CONF(I2C2_IRQn);     /* Int of I2C2_INT     */
    if(SCU_INIT_PNSSET4_VAL & BIT6)  NVIC_ITNS_CONF(I3C0_IRQn);     /* Int of I3C0_INT     */
    if(SCU_INIT_PNSSET4_VAL & BIT8)
    {
        NVIC_ITNS_CONF(LLSI0_IRQn);     /* Int of LLSI0_INT    */
        NVIC_ITNS_CONF(LLSI2_IRQn);     /* Int of LLSI2_INT    */
        NVIC_ITNS_CONF(LLSI4_IRQn);     /* Int of LLSI4_INT    */
        NVIC_ITNS_CONF(LLSI6_IRQn);     /* Int of LLSI5_INT    */
        NVIC_ITNS_CONF(LLSI8_IRQn);     /* Int of LLSI6_INT    */
    }
    if(SCU_INIT_PNSSET4_VAL & BIT9)
    {
        NVIC_ITNS_CONF(LLSI1_IRQn);     /* Int of LLSI1_INT    */
        NVIC_ITNS_CONF(LLSI3_IRQn);     /* Int of LLSI3_INT    */
        NVIC_ITNS_CONF(LLSI5_IRQn);     /* Int of LLSI5_INT    */
        NVIC_ITNS_CONF(LLSI7_IRQn);     /* Int of LLSI7_INT    */
        NVIC_ITNS_CONF(LLSI9_IRQn);     /* Int of LLSI9_INT    */
    }
    if(SCU_INIT_PNSSET4_VAL & BIT10) NVIC_ITNS_CONF(ELLSI0_IRQn);   /* Int of ELLSI0_INT   */
    if(SCU_INIT_PNSSET4_VAL & BIT24) NVIC_ITNS_CONF(WWDT1_IRQn);    /* Int of WWDT1_INT    */
    if(SCU_INIT_PNSSET5_VAL & BIT16) NVIC_ITNS_CONF(EQEI0_IRQn);    /* Int of EQEI0_INT    */
    if(SCU_INIT_PNSSET5_VAL & BIT20) NVIC_ITNS_CONF(ECAP0_IRQn);    /* Int of ECAP0_INT    */
    if(SCU_INIT_PNSSET6_VAL & BIT16) NVIC_ITNS_CONF(USCI0_IRQn);    /* Int of USCI0_INT    */
    if(SCU_INIT_PNSSET6_VAL & BIT17) NVIC_ITNS_CONF(USCI1_IRQn);    /* Int of USCI1_INT    */
    if(SCU_INIT_IONSSET_VAL & BIT0)  NVIC_ITNS_CONF(GPA_IRQn);      /* Int of PA           */
    if(SCU_INIT_IONSSET_VAL & BIT1)  NVIC_ITNS_CONF(GPB_IRQn);      /* Int of PB           */
    if(SCU_INIT_IONSSET_VAL & BIT2)  NVIC_ITNS_CONF(GPC_IRQn);      /* Int of PC           */
    if(SCU_INIT_IONSSET_VAL & BIT3)  NVIC_ITNS_CONF(GPD_IRQn);      /* Int of PD           */
    if(SCU_INIT_IONSSET_VAL & BIT4)  NVIC_ITNS_CONF(GPE_IRQn);      /* Int of PE           */
    if(SCU_INIT_IONSSET_VAL & BIT5)  NVIC_ITNS_CONF(GPF_IRQn);      /* Int of PF           */
    if(SCU_INIT_IONSSET_VAL & BIT6)  NVIC_ITNS_CONF(GPG_IRQn);      /* Int of PG           */
    if(SCU_INIT_IONSSET_VAL & BIT7)  NVIC_ITNS_CONF(GPH_IRQn);      /* Int of PH           */
    if(SCU_INIT_EINTNS_VAL & BIT0)   NVIC_ITNS_CONF(EINT0_IRQn);    /* Int of EINT0        */
    if(SCU_INIT_EINTNS_VAL & BIT1)   NVIC_ITNS_CONF(EINT1_IRQn);    /* Int of EINT1        */
    if(SCU_INIT_EINTNS_VAL & BIT2)   NVIC_ITNS_CONF(EINT2_IRQn);    /* Int of EINT2        */
    if(SCU_INIT_EINTNS_VAL & BIT3)   NVIC_ITNS_CONF(EINT3_IRQn);    /* Int of EINT3        */
    if(SCU_INIT_EINTNS_VAL & BIT4)   NVIC_ITNS_CONF(EINT4_IRQn);    /* Int of EINT4        */
    if(SCU_INIT_EINTNS_VAL & BIT5)   NVIC_ITNS_CONF(EINT5_IRQn);    /* Int of EINT5        */
    if(SCU_INIT_EINTNS_VAL & BIT6)   NVIC_ITNS_CONF(EINT6_IRQn);    /* Int of EINT6        */
    if(SCU_INIT_EINTNS_VAL & BIT7)   NVIC_ITNS_CONF(EINT7_IRQn);    /* Int of EINT7        */

    /* Enable SCU Int status */
    SCU->SVIEN = (uint32_t)(-1);
    NVIC_EnableIRQ(SCU_IRQn);

}


#if defined( __ICCARM__ )
    __WEAK
#else
    __attribute__((weak))
#endif
void SCU_IRQHandler(void)
{
    char const *master[] = {"CPU", 0, "PDMA0", 0, "SDH0", "HSUSBD", "HSUSBH", "CRC"};
    char const *ipname[] = {"FLASH", "SRAM0", "SRAM1", "SRAM2", "APB0", "APB1", "EBI", "SYS",
                            "FMC", "PDMA0", "CRC", "CANFD0", "CANFD1", "SCU", "GPIO", "HSUSBH",
                            "HSUSBD", "SDH0", "CACHE", "PDCI", "PDMA1"
                           };
    const uint8_t info[] = {0x40, 0x48, 0x50, 0x58, 0x60, 0x68, 0x70, 0x78,
                            0x80, 0x88, 0x90, 0x98, 0xA0, 0xA8, 0xB0, 0xB8,
                            0xC0, 0xC8, 0xD0, 0xD8, 0xE0
                           };
    uint32_t u32Reg, u32Addr;
    uint32_t i;

    /* TrustZone access policy */
    u32Reg = SCU->SVINTSTS;
    if(u32Reg)
    {

        /* Get violation address and source */
        for(i = 0; i < sizeof(ipname); i++)
        {
            if(u32Reg & (1 << i))
            {
                u32Addr = M32(SCU_BASE + info[i] + 4);
                printf("  %s(0x%08x) Alarm! illegal access by %s\n", ipname[i], u32Addr, master[M32(SCU_BASE + info[i])]);
                SCU->SVINTSTS = (1 << i);
                break;
            }

        }
    }
}


/**
  \brief   Setup a Nonsecure callable Region
  \details The base and limit of Nonsecure callable region is dependent on the
           application code size.
 */
void NSC_Init(void)
{
    uint32_t u32Region;
    uint32_t u32Base, u32Limit;

#if defined (__ICCARM__)
# pragma section = "NSC"
    u32Base = (uint32_t)__section_begin("NSC");
    u32Limit = (uint32_t)__section_end("NSC");
#elif defined(__ARMCC_VERSION)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"
    extern uint32_t Image$$NSC_ROM$$XO$$Base[];
    extern uint32_t Image$$NSC_ROM$$XO$$Limit[];
    u32Base = (uint32_t)Image$$NSC_ROM$$XO$$Base;
    u32Limit = (uint32_t)Image$$NSC_ROM$$XO$$Limit;
#pragma clang diagnostic pop
#else
    extern uint32_t __start_NSC[];
    extern uint32_t __end_NSC[];
    u32Base = (uint32_t)__start_NSC;
    u32Limit = (uint32_t)__end_NSC;
#endif

    /* SAU region 4 is dedicated for NSC */
    u32Region = 4;
    SAU->RNR  = (u32Region & SAU_RNR_REGION_Msk);
    SAU->RBAR = (u32Base & SAU_RBAR_BADDR_Msk);
    SAU->RLAR = (u32Limit & SAU_RLAR_LADDR_Msk) |
                ((1ul << SAU_RLAR_NSC_Pos)  & SAU_RLAR_NSC_Msk) | 1ul;

}

/**
  \brief   Setup a SAU Region
  \details Writes the region information contained in SAU_Region to the
           registers SAU_RNR, SAU_RBAR, and SAU_RLAR
 */
void TZ_SAU_Setup(void)
{

#if defined (__SAU_PRESENT) && (__SAU_PRESENT == 1U)

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

    /* repeat this for all possible SAU regions */


#if defined (SAU_INIT_CTRL) && (SAU_INIT_CTRL == 1U)
    SAU->CTRL = ((SAU_INIT_CTRL_ENABLE << SAU_CTRL_ENABLE_Pos) & SAU_CTRL_ENABLE_Msk) |
                ((SAU_INIT_CTRL_ALLNS  << SAU_CTRL_ALLNS_Pos)  & SAU_CTRL_ALLNS_Msk)   ;
#endif

#endif /* defined (__SAU_PRESENT) && (__SAU_PRESENT == 1U) */

#if defined (SCB_CSR_AIRCR_INIT) && (SCB_CSR_AIRCR_INIT == 1U)
    SCB->SCR   = (SCB->SCR   & ~(SCB_SCR_SLEEPDEEPS_Msk)) |
                 ((SCB_CSR_DEEPSLEEPS_VAL     << SCB_SCR_SLEEPDEEPS_Pos)     & SCB_SCR_SLEEPDEEPS_Msk);

    SCB->AIRCR = (0x05FA << 16) |
                 ((SCB_AIRCR_SYSRESETREQS_VAL << SCB_AIRCR_SYSRESETREQS_Pos) & SCB_AIRCR_SYSRESETREQS_Msk) |
                 ((SCB_AIRCR_BFHFNMINS_VAL    << SCB_AIRCR_BFHFNMINS_Pos)    & SCB_AIRCR_BFHFNMINS_Msk)    |
                 ((SCB_AIRCR_PRIS_VAL         << SCB_AIRCR_PRIS_Pos)         & SCB_AIRCR_PRIS_Msk);



#endif /* defined (SCB_CSR_AIRCR_INIT) && (SCB_CSR_AIRCR_INIT == 1U) */

#if defined (SCB_ICSR_INIT) && (SCB_ICSR_INIT == 1U)
    SCB->ICSR  = (SCB->ICSR  & ~(SCB_ICSR_STTNS_Msk)) |
                 ((SCB_ICSR_STTNS_VAL         << SCB_ICSR_STTNS_Pos)         & SCB_ICSR_STTNS_Msk);
#endif /* defined (SCB_ICSR_INIT) && (SCB_ICSR_INIT == 1U) */

    /* repeat this for all possible ITNS elements */

    /* Initial Nonsecure callable region */
    NSC_Init();
}
#else
#if defined( __ICCARM__ )
    __WEAK
#else
    __attribute__((weak))
#endif
void SCU_IRQHandler(void)
{
    while(1);
}
#endif


/**
 * @brief    Update the Variable SystemCoreClock
 *
 * @details  This function is used to update the variable SystemCoreClock
 *           and must be called whenever the core clock is changed.
 */
void SystemCoreClockUpdate(void)
{
    /* Update PLL Clock */
    PllClock = CLK_GetPLLClockFreq();

    /* Update System Core Clock */
    SystemCoreClock = CLK_GetCPUFreq();

    /* Update Cycles per micro second */
    CyclesPerUs = (SystemCoreClock + 500000UL) / 1000000UL;
}



/**
 * @brief    System Initialization
 *
 * @details  The necessary initialization of system. Global variables are forbidden here.
 */
void SystemInit(void)
{

#if defined(__SECURE_CODE) || !defined(__NONSECURE_CODE)
    /* Keep Cortex-M33 CONTROL register reset value */
    __set_CONTROL(0);
    __ISB();

    /* Enable CACHE. NOTE: Data coherence must be care about when using FMC ISP. */
    CACHE_S->CTL |= CACHE_CTL_CACHEEN_Msk;

    /* HXT filter select */
    outpw(0x400002D4, 0x00FF8800);

    /* Initial default LXT Gain mode */
    RTC_LXTGainInit();
#endif

    if(IS_SECURE())
    {
        /* Unlock protected registers */
        do
        {
            SYS->REGLCTL = 0x59;
            SYS->REGLCTL = 0x16;
            SYS->REGLCTL = 0x88;
        }
        while(!SYS->REGLCTL);
    }
    /* FPU settings ------------------------------------------------------------*/
#if (__FPU_PRESENT == 1U) && (__FPU_USED == 1U)
    SCB->CPACR |= ((3UL << 10 * 2) |               /* set CP10 Full Access */
                   (3UL << 11 * 2));               /* set CP11 Full Access */
#endif

#if defined (__VTOR_PRESENT) && (__VTOR_PRESENT == 1U)
    SCB->VTOR = (uint32_t) &__Vectors;
#endif

#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3)
    if(IS_SECURE())
    {
        TZ_SAU_Setup();
        SCU_Setup();
        FMC_NSBA_Setup();
    }
#endif

}


#if USE_ASSERT

/**
 * @brief      Assert Error Message
 *
 * @param[in]  file  the source file name
 * @param[in]  line  line number
 *
 * @details    The function prints the source file name and line number where
 *             the ASSERT_PARAM() error occurs, and then stops in an infinite loop.
 */
void AssertError(uint8_t * file, uint32_t line)
{

    printf("[%s] line %d : wrong parameters.\r\n", file, line);

    /* Infinite loop */
    while(1) ;
}
#endif


#if (defined(__ICCARM__) && (__VER__ >= 7080000) && (__VER__ < 8020000))

#if  (__ARM_FEATURE_CMSE == 3U)
/**
  \brief   Get Process Stack Pointer (non-secure)
  \details Returns the current value of the non-secure Process Stack Pointer (PSP) when in secure state.
  \return               PSP Register value
 */
uint32_t __TZ_get_PSP_NS(void)
{
    register uint32_t result;

    __ASM volatile("MRS %0, psp_ns"  : "=r"(result));
    return(result);
}


/**
  \brief   Set Process Stack Pointer (non-secure)
  \details Assigns the given value to the non-secure Process Stack Pointer (PSP) when in secure state.
  \param [in]    topOfProcStack  Process Stack Pointer value to set
 */
void __TZ_set_PSP_NS(uint32_t topOfProcStack)
{
    __ASM volatile("MSR psp_ns, %0" : : "r"(topOfProcStack));
}



/**
  \brief   Get Main Stack Pointer (non-secure)
  \details Returns the current value of the non-secure Main Stack Pointer (MSP) when in secure state.
  \return               MSP Register value
 */
int32_t __TZ_get_MSP_NS(void)
{
    register uint32_t result;

    __ASM volatile("MRS %0, msp_ns" : "=r"(result));
    return(result);
}



/**
  \brief   Set Main Stack Pointer (non-secure)
  \details Assigns the given value to the non-secure Main Stack Pointer (MSP) when in secure state.
  \param [in]    topOfMainStack  Main Stack Pointer value to set
 */
void __TZ_set_MSP_NS(uint32_t topOfMainStack)
{
    __ASM volatile("MSR msp_ns, %0" : : "r"(topOfMainStack));
}



/**
  \brief   Get Priority Mask (non-secure)
  \details Returns the current state of the non-secure priority mask bit from the Priority Mask Register when in secure state.
  \return               Priority Mask value
 */
uint32_t __TZ_get_PRIMASK_NS(void)
{
    uint32_t result;

    __ASM volatile("MRS %0, primask_ns" : "=r"(result));
    return(result);
}



/**
  \brief   Set Priority Mask (non-secure)
  \details Assigns the given value to the non-secure Priority Mask Register when in secure state.
  \param [in]    priMask  Priority Mask
 */
void __TZ_set_PRIMASK_NS(uint32_t priMask)
{
    __ASM volatile("MSR primask_ns, %0" : : "r"(priMask) : "memory");
}


#endif


#endif

/**
  \brief   Get current program counter
  \details Return current program counter to know current executing address
 */

uint32_t __PC()
{
    uint32_t result;

    __ASM volatile("MOV %0, pc" : "=r"(result));
    return(result);
}
