/**************************************************************************//**
 * @file     ellsi.c
 * @version  V3.00
 * @brief    Enhanced LED Light Strip Interface(ELLSI) driver source file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (c) 2024 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/
#include "NuMicro.h"

/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup ELLSI_Driver ELLSI Driver
  @{
*/


/** @addtogroup ELLSI_EXPORTED_FUNCTIONS ELLSI Exported Functions
  @{
*/

/**
  * @brief  This function make ELLSI module be ready to transfer.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32ELLSIMode Decides the transfer mode. (ELLSI_MODE_SW, ELLSI_MODE_PDMA)
  *                          When u32ELLSIMode is neither ELLSI_MODE_SW nor ELLSI_MODE_PDMA, it can be used to decide the ELLSI configuration.
  * @param[in]  u32OutputFormat Decides the output format of ELLSI transaction. (ELLSI_FORMAT_RGB, ELLSI_FORMAT_GRB)
  * @param[in]  u32BusClock The expected frequency of ELLSI bus clock in Hz.
  * @param[in]  u32TransferTimeNsec The expected period of ELLSI data transfer time in nano second.
  * @param[in]  u32T0HTimeNsec The expected period of ELLSI T0H data time in nano second.
  * @param[in]  u32T1HTimeNsec The expected period of ELLSI T1H data time in nano second.
  * @param[in]  u32ResetTimeNsec The expected period of ELLSI reset command time in nano second.
  * @param[in]  u32PCNT Decides a frame size.
  * @param[in]  u32IDOS Decides the idle output state. (ELLSI_IDLE_LOW, ELLSI_IDLE_HIGH)
  * @return None
  * @details By default, the ELLSI uses software mode for transmission, the output format is RGB, and the idle state is low.
  *          The actual clock rate may be different from the target ELLSI clock rate.
  *          For example, if the ELLSI source clock rate is 12 MHz and the target ELLSI bus clock rate is 7 MHz, the
  *          actual ELLSI clock rate will be 6 MHz.
  * @note If u32BusClock = 0, DIVIDER setting will be set to the maximum value.
  * @note If u32BusClock >= PCLK clock frequency, DIVIDER will be set to 0.
  */
void ELLSI_Open(ELLSI_T *ellsi,
                uint32_t u32ELLSIMode,
                uint32_t u32OutputFormat,
                uint32_t u32BusClock,
                uint32_t u32TransferTimeNsec,
                uint32_t u32T0HTimeNsec,
                uint32_t u32T1HTimeNsec,
                uint32_t u32ResetTimeNsec,
                uint32_t u32PCNT,
                uint32_t u32IDOS)
{
    uint32_t u32PCLKFreq = 0, u32Tmp1, u32Tmp2;
    uint32_t u32Div, u32Period, u32T0H, u32T1H, u32ResetPeriod;
    S_ELLSI_CONFIG_T *sPt;

    /* Check if u32ELLSIMode is set for transfer mode or ELLSI configuration */
    if((u32ELLSIMode != ELLSI_MODE_SW) && (u32ELLSIMode != ELLSI_MODE_PDMA))
    {
        sPt = (S_ELLSI_CONFIG_T *)u32ELLSIMode;

        u32ELLSIMode = sPt->u32ELLSIMode;
        u32OutputFormat = sPt->u32OutputFormat;
        u32BusClock = sPt->sTimeInfo.u32BusClock;
        u32TransferTimeNsec = sPt->sTimeInfo.u32TransferTimeNsec;
        u32T0HTimeNsec = sPt->sTimeInfo.u32T0HTimeNsec;
        u32T1HTimeNsec = sPt->sTimeInfo.u32T1HTimeNsec;
        u32ResetTimeNsec = sPt->sTimeInfo.u32ResetTimeNsec;
        u32PCNT = sPt->u32PCNT;
        u32IDOS = sPt->u32IDOS;
    }

    /* Get PCLK clock frequency */
    if((ellsi == ELLSI0) || (ellsi == ELLSI0_NS))
        u32PCLKFreq = CLK_GetPCLK0Freq();

    /* Default setting: software mode, RGB format, idle ouput low. */
    ellsi->CTL = (u32ELLSIMode) | (u32OutputFormat);
    ellsi->PCNT = u32PCNT;
    ellsi->OCTL = u32IDOS;

    if(u32BusClock >= u32PCLKFreq)
    {
        /* Set DIVIDER = 0 */
        u32Div = 0;
        ellsi->CLKDIV = 0;
    }
    else if(u32BusClock == 0)
    {
        /* Set DIVIDER to the maximum value 0xFF. f_ellsi = f_ellsi_clk_src / (DIVIDER + 1) */
        u32Div = 0xFF;
        ellsi->CLKDIV |= ELLSI_CLKDIV_DIVIDER_Msk;
    }
    else
    {
        u32Div = (((u32PCLKFreq * 10) / u32BusClock + 5) / 10) - 1; /* Round to the nearest integer */
        if(u32Div > 0xFF)
        {
            u32Div = 0xFF;
            ellsi->CLKDIV |= ELLSI_CLKDIV_DIVIDER_Msk;
        }
        else
        {
            ellsi->CLKDIV = (ellsi->CLKDIV & (~ELLSI_CLKDIV_DIVIDER_Msk)) | (u32Div << ELLSI_CLKDIV_DIVIDER_Pos);
        }
    }

    u32Tmp1 = (u32PCLKFreq * 10) / 1000000;
    u32Tmp2 = 1000 * (u32Div + 1);

    u32Period = (u32Tmp1 * u32TransferTimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32Period > 0xFF)
    {
        u32Period = 0xFF;
        ellsi->PERIOD |= ELLSI_PERIOD_PERIOD_Msk;
    }
    else
    {
        ellsi->PERIOD = (ellsi->PERIOD & (~ELLSI_PERIOD_PERIOD_Msk)) | (u32Period << ELLSI_PERIOD_PERIOD_Pos);
    }

    u32T0H = (u32Tmp1 * u32T0HTimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32T0H > 0xFF)
    {
        u32T0H = 0xFF;
        ellsi->DUTY |= ELLSI_DUTY_T0H_Msk;
    }
    else
    {
        ellsi->DUTY = (ellsi->DUTY & (~ELLSI_DUTY_T0H_Msk)) | (u32T0H << ELLSI_DUTY_T0H_Pos);
    }

    u32T1H = (u32Tmp1 * u32T1HTimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32T1H > 0xFF)
    {
        u32T1H = 0xFF;
        ellsi->DUTY |= ELLSI_DUTY_T1H_Msk;
    }
    else
    {
        ellsi->DUTY = (ellsi->DUTY & (~ELLSI_DUTY_T1H_Msk)) | (u32T1H << ELLSI_DUTY_T1H_Pos);
    }

    u32ResetPeriod = (u32Tmp1 * u32ResetTimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32ResetPeriod > 0xFFFF)
    {
        u32ResetPeriod = 0xFFFF;
        ellsi->RSTPERIOD |= ELLSI_RSTPERIOD_RSTPERIOD_Msk;
    }
    else
    {
        ellsi->RSTPERIOD = (ellsi->RSTPERIOD & (~ELLSI_RSTPERIOD_RSTPERIOD_Msk)) | (u32ResetPeriod << ELLSI_RSTPERIOD_RSTPERIOD_Pos);
    }

    /* Enable ELLSI */
    ellsi->CTL |= ELLSI_CTL_ELLSIEN_Msk;
}

/**
  * @brief  This function configures ELLSI module for Y-cable.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]    sPt Specify the time information for Y-cable. It includes:
  *                   u32EnterHTimeNsec: The expected period of ELLSI enter command high time in nano second.
  *                   u32EnterLTimeNsec: The expected period of ELLSI enter command low time in nano second.
  *                   u32GetHTimeNsec: The expected period of ELLSI get high pulse time in nano second.
  *                   u32GetHTolTimeNsec: The expected period of ELLSI get high pulse tolerance time in nano second.
  *                   u32CmdTimeoutTimeNsec: The expected period of ELLSI command timeout time in nano second.
  *                   u32FBH0TimeNsec: The expected period of ELLSI feedback command high 0 time in nano second.
  *                   u32FBL0TimeNsec: The expected period of ELLSI feedback command low 0 time in nano second.
  *                   u32FBH1TimeNsec: The expected period of ELLSI feedback command high 1 time in nano second.
  *                   u32FBL1TimeNsec: The expected period of ELLSI feedback command low 1 time in nano second.
  *                   u32FBCNT0TimeNsec: The expected period of ELLSI feedback count 0 time in nano second.
  *                   u32FBCNT0TolTimeNsec: The expected period of ELLSI feedback count 0 tolerance time in nano second.
  *                   u32FBCNT1TimeNsec: The expected period of ELLSI feedback count 1 time in nano second.
  *                   u32FBCNT1TolTimeNsec: The expected period of ELLSI feedback count 1 tolerance time in nano second.
  *                   u32FBID0TimeNsec: The expected period of ELLSI feedback ID 0 time in nano second.
  *                   u32FBID0TolTimeNsec: The expected period of ELLSI feedback ID 0 tolerance time in nano second.
  *                   u32FBID1TimeNsec: The expected period of ELLSI feedback ID 1 time in nano second.
  *                   u32FBID1TolTimeNsec: The expected period of ELLSI feedback ID 1 tolerance time in nano second.
  *                   u32TH20TimeNsec: The expected period of ELLSI TH20 command high time in nano second.
  *                   u32WKPULSETimeNsec: The expected period of ELLSI wakeup pulse time in nano second.
  *                   u32WKWPERTimeNsec: The expected period of ELLSI wakeup wait time in nano second.
  * @return None
  * @details By default, the ELLSI uses 1 MHz as ELLSI command clock rate.
  */
void ELLSI_Config_Y_Cable(ELLSI_T *ellsi, S_ELLSI_TIME_INFO_T *sPt)
{
    uint32_t u32PCLKFreq = 0, u32Tmp1, u32Tmp2;
    uint32_t u32ELLSICmdFreq = 1000000, u32Div, u32CmdDiv;
    uint32_t u32EnterHI, u32EnterLO;
    uint32_t u32GetHI, u32GetHITol, u32CmdTimeout;
    uint32_t u32FBCmdH0, u32FBCmdL0, u32FBCmdH1, u32FBCmdL1;
    uint32_t u32FBCnt0, u32FBC0Tol, u32FBCnt1, u32FBC1Tol;
    uint32_t u32FBID0, u32FBID0Tol, u32FBID1, u32FBID1Tol;
    uint32_t u32TH20HI;
    uint32_t u32WakeupPulse, u32WakeupWaitPeriod;

    /* Get PCLK clock frequency */
    if((ellsi == ELLSI0) || (ellsi == ELLSI0_NS))
        u32PCLKFreq = CLK_GetPCLK0Freq();

    u32Div = ellsi->CLKDIV & ELLSI_CLKDIV_DIVIDER_Msk;
    
    /* f_ellsi_cmd = f_ellsi_clk_src / (DIVIDER + 1) / (CMDDIV + 1) */
    u32CmdDiv = (((u32PCLKFreq * 10) / u32ELLSICmdFreq / (u32Div + 1) + 5) / 10) - 1; /* Round to the nearest integer */
    if(u32CmdDiv > 0xFF)
    {
        u32CmdDiv = 0xFF;
        ellsi->CLKDIV |= ELLSI_CLKDIV_CMDDIV_Msk;
    }
    else
    {
        ellsi->CLKDIV = (ellsi->CLKDIV & (~ELLSI_CLKDIV_CMDDIV_Msk)) | (u32CmdDiv << ELLSI_CLKDIV_CMDDIV_Pos);
    }

    u32Tmp1 = (u32PCLKFreq * 10) / 1000000;
    u32Tmp2 = 1000 * (u32Div + 1) * (u32CmdDiv + 1);

    u32EnterHI = (u32Tmp1 * sPt->u32EnterHTimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32EnterHI > 0xFF)
    {
        u32EnterHI = 0xFF;
        ellsi->CMDCTL |= ELLSI_CMDCTL_ENTERHI_Msk;
    }
    else
    {
        ellsi->CMDCTL = (ellsi->CMDCTL & (~ELLSI_CMDCTL_ENTERHI_Msk)) | (u32EnterHI << ELLSI_CMDCTL_ENTERHI_Pos);
    }

    u32EnterLO = (u32Tmp1 * sPt->u32EnterLTimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32EnterLO > 0xFF)
    {
        u32EnterLO = 0xFF;
        ellsi->CMDCTL |= ELLSI_CMDCTL_ENTERLO_Msk;
    }
    else
    {
        ellsi->CMDCTL = (ellsi->CMDCTL & (~ELLSI_CMDCTL_ENTERLO_Msk)) | (u32EnterLO << ELLSI_CMDCTL_ENTERLO_Pos);
    }

    u32GetHI = (u32Tmp1 * sPt->u32GetHTimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32GetHI > 0xFF)
    {
        u32GetHI = 0xFF;
        ellsi->CMDGPP |= ELLSI_CMDGPP_GETHIP_Msk;
    }
    else
    {
        ellsi->CMDGPP = (ellsi->CMDGPP & (~ELLSI_CMDGPP_GETHIP_Msk)) | (u32GetHI << ELLSI_CMDGPP_GETHIP_Pos);
    }

    u32GetHITol = (u32Tmp1 * sPt->u32GetHTolTimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32GetHITol > 0xF)
    {
        u32GetHITol = 0xF;
        ellsi->CMDGPP |= ELLSI_CMDGPP_GETHITOL_Msk;
    }
    else
    {
        ellsi->CMDGPP = (ellsi->CMDGPP & (~ELLSI_CMDGPP_GETHITOL_Msk)) | (u32GetHITol << ELLSI_CMDGPP_GETHITOL_Pos);
    }

    u32CmdTimeout = (u32Tmp1 * sPt->u32CmdTimeoutTimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32CmdTimeout > 0xFFFF)
    {
        u32CmdTimeout = 0xFFFF;
        ellsi->CMDGPP |= ELLSI_CMDGPP_CMDTOP_Msk;
    }
    else
    {
        ellsi->CMDGPP = (ellsi->CMDGPP & (~ELLSI_CMDGPP_CMDTOP_Msk)) | (u32CmdTimeout << ELLSI_CMDGPP_CMDTOP_Pos);
    }

    u32FBCmdH0 = (u32Tmp1 * sPt->u32FBH0TimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32FBCmdH0 > 0xFF)
    {
        u32FBCmdH0 = 0xFF;
        ellsi->FBCCTL |= ELLSI_FBCCTL_FBHIP0_Msk;
    }
    else
    {
        ellsi->FBCCTL = (ellsi->FBCCTL & (~ELLSI_FBCCTL_FBHIP0_Msk)) | (u32FBCmdH0 << ELLSI_FBCCTL_FBHIP0_Pos);
    }

    u32FBCmdL0 = (u32Tmp1 * sPt->u32FBL0TimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32FBCmdL0 > 0xFF)
    {
        u32FBCmdL0 = 0xFF;
        ellsi->FBCCTL |= ELLSI_FBCCTL_FBLOP0_Msk;
    }
    else
    {
        ellsi->FBCCTL = (ellsi->FBCCTL & (~ELLSI_FBCCTL_FBLOP0_Msk)) | (u32FBCmdL0 << ELLSI_FBCCTL_FBLOP0_Pos);
    }

    u32FBCmdH1 = (u32Tmp1 * sPt->u32FBH1TimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32FBCmdH1 > 0xFF)
    {
        u32FBCmdH1 = 0xFF;
        ellsi->FBCCTL |= ELLSI_FBCCTL_FBHIP1_Msk;
    }
    else
    {
        ellsi->FBCCTL = (ellsi->FBCCTL & (~ELLSI_FBCCTL_FBHIP1_Msk)) | (u32FBCmdH1 << ELLSI_FBCCTL_FBHIP1_Pos);
    }

    u32FBCmdL1 = (u32Tmp1 * sPt->u32FBL1TimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32FBCmdL1 > 0xFF)
    {
        u32FBCmdL1 = 0xFF;
        ellsi->FBCCTL |= ELLSI_FBCCTL_FBLOP1_Msk;
    }
    else
    {
        ellsi->FBCCTL = (ellsi->FBCCTL & (~ELLSI_FBCCTL_FBLOP1_Msk)) | (u32FBCmdL1 << ELLSI_FBCCTL_FBLOP1_Pos);
    }

    u32FBCnt0 = (u32Tmp1 * sPt->u32FBCNT0TimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32FBCnt0 > 0xFF)
    {
        u32FBCnt0 = 0xFF;
        ellsi->FBCTCTL |= ELLSI_FBCTCTL_FBCNT0_Msk;
    }
    else
    {
        ellsi->FBCTCTL = (ellsi->FBCTCTL & (~ELLSI_FBCTCTL_FBCNT0_Msk)) | (u32FBCnt0 << ELLSI_FBCTCTL_FBCNT0_Pos);
    }

    u32FBC0Tol = (u32Tmp1 * sPt->u32FBCNT0TolTimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32FBC0Tol > 0xF)
    {
        u32FBC0Tol = 0xF;
        ellsi->FBCTCTL |= ELLSI_FBCTCTL_FBC0TOL_Msk;
    }
    else
    {
        ellsi->FBCTCTL = (ellsi->FBCTCTL & (~ELLSI_FBCTCTL_FBC0TOL_Msk)) | (u32FBC0Tol << ELLSI_FBCTCTL_FBC0TOL_Pos);
    }

    u32FBCnt1 = (u32Tmp1 * sPt->u32FBCNT1TimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32FBCnt1 > 0xFF)
    {
        u32FBCnt1 = 0xFF;
        ellsi->FBCTCTL |= ELLSI_FBCTCTL_FBCNT1_Msk;
    }
    else
    {
        ellsi->FBCTCTL = (ellsi->FBCTCTL & (~ELLSI_FBCTCTL_FBCNT1_Msk)) | (u32FBCnt1 << ELLSI_FBCTCTL_FBCNT1_Pos);
    }

    u32FBC1Tol = (u32Tmp1 * sPt->u32FBCNT1TolTimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32FBC1Tol > 0xF)
    {
        u32FBC1Tol = 0xF;
        ellsi->FBCTCTL |= ELLSI_FBCTCTL_FBC1TOL_Msk;
    }
    else
    {
        ellsi->FBCTCTL = (ellsi->FBCTCTL & (~ELLSI_FBCTCTL_FBC1TOL_Msk)) | (u32FBC1Tol << ELLSI_FBCTCTL_FBC1TOL_Pos);
    }

    u32FBID0 = (u32Tmp1 * sPt->u32FBID0TimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32FBID0 > 0xFF)
    {
        u32FBID0 = 0xFF;
        ellsi->FBIDTCTL |= ELLSI_FBIDTCTL_FBID0_Msk;
    }
    else
    {
        ellsi->FBIDTCTL = (ellsi->FBIDTCTL & (~ELLSI_FBIDTCTL_FBID0_Msk)) | (u32FBID0 << ELLSI_FBIDTCTL_FBID0_Pos);
    }

    u32FBID0Tol = (u32Tmp1 * sPt->u32FBID0TolTimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32FBID0Tol > 0xF)
    {
        u32FBID0Tol = 0xF;
        ellsi->FBIDTCTL |= ELLSI_FBIDTCTL_FBID0TOL_Msk;
    }
    else
    {
        ellsi->FBIDTCTL = (ellsi->FBIDTCTL & (~ELLSI_FBIDTCTL_FBID0TOL_Msk)) | (u32FBID0Tol << ELLSI_FBIDTCTL_FBID0TOL_Pos);
    }

    u32FBID1 = (u32Tmp1 * sPt->u32FBID1TimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32FBID1 > 0xFF)
    {
        u32FBID1 = 0xFF;
        ellsi->FBIDTCTL |= ELLSI_FBIDTCTL_FBID1_Msk;
    }
    else
    {
        ellsi->FBIDTCTL = (ellsi->FBIDTCTL & (~ELLSI_FBIDTCTL_FBID1_Msk)) | (u32FBID1 << ELLSI_FBIDTCTL_FBID1_Pos);
    }

    u32FBID1Tol = (u32Tmp1 * sPt->u32FBID1TolTimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32FBID1Tol > 0xF)
    {
        u32FBID1Tol = 0xF;
        ellsi->FBIDTCTL |= ELLSI_FBIDTCTL_FBID1TOL_Msk;
    }
    else
    {
        ellsi->FBIDTCTL = (ellsi->FBIDTCTL & (~ELLSI_FBIDTCTL_FBID1TOL_Msk)) | (u32FBID1Tol << ELLSI_FBIDTCTL_FBID1TOL_Pos);
    }

    u32TH20HI = (u32Tmp1 * sPt->u32TH20TimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32TH20HI > 0xFF)
    {
        u32TH20HI = 0xFF;
        ellsi->TCTCTL |= ELLSI_TCTCTL_TH20HI_Msk;
    }
    else
    {
        ellsi->TCTCTL = (ellsi->TCTCTL & (~ELLSI_TCTCTL_TH20HI_Msk)) | (u32TH20HI << ELLSI_TCTCTL_TH20HI_Pos);
    }

    u32WakeupPulse = (u32Tmp1 * sPt->u32WKPULSETimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32WakeupPulse > 0xFFFF)
    {
        u32WakeupPulse = 0xFFFF;
        ellsi->WKTCTL |= ELLSI_WKTCTL_WKPULSE_Msk;
    }
    else
    {
        ellsi->WKTCTL = (ellsi->WKTCTL & (~ELLSI_WKTCTL_WKPULSE_Msk)) | (u32WakeupPulse << ELLSI_WKTCTL_WKPULSE_Pos);
    }

    u32WakeupWaitPeriod = (u32Tmp1 * sPt->u32WKWPERTimeNsec / u32Tmp2 + 5) / 10; /* Round to the nearest integer */
    if(u32WakeupWaitPeriod > 0xFFFF)
    {
        u32WakeupWaitPeriod = 0xFFFF;
        ellsi->WKTCTL |= ELLSI_WKTCTL_WKWPER_Msk;
    }
    else
    {
        ellsi->WKTCTL = (ellsi->WKTCTL & (~ELLSI_WKTCTL_WKWPER_Msk)) | (u32WakeupWaitPeriod << ELLSI_WKTCTL_WKWPER_Pos);
    }
}

/**
  * @brief  This function set 24-bit TH20 command data.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]    sPt Specify the TH20 SET 24-bit Data. It includes:
  *                   BledDimming: BLED Dimming, default should be set to 0x1F.
  *                   SS0: Set if PWM counter Reset or not, default should be set to 0.
  *                   SS1: Low bit of Imax, default should be set to 0.
  *                   BledDimming: RLED Dimming, default should be set to 0x1F.
  *                   SEL_CUR: Set the response of LED bulb in Feedback Mode.
  *                   SS2: High bit of Imax, default should be set to 0.
  *                   SS3: Set Update LED Setting time, default should be set to 0.
  *                   GledDimming: GLED Dimming, default should be set to 0x1F.
  *                   SS4: Low bit of setting PWM Frequency, default should be set to 1.
  *                   SS5: High bit of setting PWM Frequency, default should be set to 1.
  * @return None
  * @details 
  */
void ELLSI_SetTH20Data(ELLSI_T *ellsi, S_ELLSI_TH20SET_DATA_T *sPt)
{
    ellsi->TCCTL = 0;
    ellsi->TCCTL |= (sPt->BledDimming << 0);
    ellsi->TCCTL |= (sPt->reserved0 << 5);
    ellsi->TCCTL |= (sPt->SS0 << 6);
    ellsi->TCCTL |= (sPt->SS1 << 7);
    ellsi->TCCTL |= (sPt->RledDimming << 8);
    ellsi->TCCTL |= (sPt->SEL_CUR << 13);
    ellsi->TCCTL |= (sPt->SS2 << 14);
    ellsi->TCCTL |= (sPt->SS3 << 15);
    ellsi->TCCTL |= (sPt->GledDimming << 16);
    ellsi->TCCTL |= (sPt->reserved1 << 21);
    ellsi->TCCTL |= (sPt->SS4 << 22);
    ellsi->TCCTL |= (sPt->SS5 << 23);
}

/**
  * @brief  Wait normal command done flag occur and then write 1 to clear.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32Mask The combination of related command done flag bits.
  *                     Each bit corresponds to a command done flag bit.
  *                     This parameter decides which flags will be waited and cleared. It is combination of:
  *                       - \ref ELLSI_CMDDONE_MASK
  *                       - \ref ELLSI_FBDONE_MASK
  *                       - \ref ELLSI_TH20DONE_MASK
  *                       - \ref ELLSI_ASETDONE_MASK
  *                       - \ref ELLSI_ATHDONE_MASK
  * @return     ELLSI_OK           ELLSI operation OK.
  * @return     ELLSI_ERR_TIMEOUT  ELLSI operation abort due to timeout error.
  * @details Wait and clear u32Mask parameter of ELLSI_CMDSTS register to start next command transfer.
  */
int32_t ELLSI_WaitCmdStsDone(ELLSI_T *ellsi, uint32_t u32Mask)
{
    uint32_t u32TimeOutCnt;

    /* Wait and clear normal command done flag */
    if((u32Mask & ELLSI_CMDDONE_MASK) == ELLSI_CMDDONE_MASK)
    {
        u32TimeOutCnt = ELLSI_TIMEOUT;
        while(!(ellsi->CMDSTS & ELLSI_CMDSTS_CMDDONE_Msk))
        {
            if(--u32TimeOutCnt == 0) return ELLSI_ERR_TIMEOUT;
        }

        ellsi->CMDSTS = ELLSI_CMDSTS_CMDDONE_Msk;

        u32TimeOutCnt = ELLSI_TIMEOUT;
        while(ellsi->CMDSTS & ELLSI_CMDSTS_CMDDONE_Msk)
        {
            if(--u32TimeOutCnt == 0) return ELLSI_ERR_TIMEOUT;
        }
    }

    /* Wait and clear feedback command done flag */
    if((u32Mask & ELLSI_FBDONE_MASK) == ELLSI_FBDONE_MASK)
    {
        u32TimeOutCnt = ELLSI_TIMEOUT;
        while(!(ellsi->CMDSTS & ELLSI_CMDSTS_FBDONE_Msk))
        {
            if(--u32TimeOutCnt == 0) return ELLSI_ERR_TIMEOUT;
        }

        ellsi->CMDSTS = ELLSI_CMDSTS_FBDONE_Msk;

        u32TimeOutCnt = ELLSI_TIMEOUT;
        while(ellsi->CMDSTS & ELLSI_CMDSTS_FBDONE_Msk)
        {
            if(--u32TimeOutCnt == 0) return ELLSI_ERR_TIMEOUT;
        }
    }

    /* Wait and clear TH20 command done flag */
    if((u32Mask & ELLSI_TH20DONE_MASK) == ELLSI_TH20DONE_MASK)
    {
        u32TimeOutCnt = ELLSI_TIMEOUT;
        while(!(ellsi->CMDSTS & ELLSI_CMDSTS_TH20DONE_Msk))
        {
            if(--u32TimeOutCnt == 0) return ELLSI_ERR_TIMEOUT;
        }

        ellsi->CMDSTS = ELLSI_CMDSTS_TH20DONE_Msk;

        u32TimeOutCnt = ELLSI_TIMEOUT;
        while(ellsi->CMDSTS & ELLSI_CMDSTS_TH20DONE_Msk)
        {
            if(--u32TimeOutCnt == 0) return ELLSI_ERR_TIMEOUT;
        }
    }

    /* Wait and clear AUTO SET mode done flag */
    if((u32Mask & ELLSI_ASETDONE_MASK) == ELLSI_ASETDONE_MASK)
    {
        u32TimeOutCnt = ELLSI_TIMEOUT;
        while(!(ellsi->CMDSTS & ELLSI_CMDSTS_ASETDONE_Msk))
        {
            if(--u32TimeOutCnt == 0) return ELLSI_ERR_TIMEOUT;
        }

        ellsi->CMDSTS = ELLSI_CMDSTS_ASETDONE_Msk;

        u32TimeOutCnt = ELLSI_TIMEOUT;
        while(ellsi->CMDSTS & ELLSI_CMDSTS_ASETDONE_Msk)
        {
            if(--u32TimeOutCnt == 0) return ELLSI_ERR_TIMEOUT;
        }
    }

    /* Wait and clear AUTO TH20 SET mode done flag */
    if((u32Mask & ELLSI_ATHDONE_MASK) == ELLSI_ATHDONE_MASK)
    {
        u32TimeOutCnt = ELLSI_TIMEOUT;
        while(!(ellsi->CMDSTS & ELLSI_CMDSTS_ATHDONE_Msk))
        {
            if(--u32TimeOutCnt == 0) return ELLSI_ERR_TIMEOUT;
        }

        ellsi->CMDSTS = ELLSI_CMDSTS_ATHDONE_Msk;

        u32TimeOutCnt = ELLSI_TIMEOUT;
        while(ellsi->CMDSTS & ELLSI_CMDSTS_ATHDONE_Msk)
        {
            if(--u32TimeOutCnt == 0) return ELLSI_ERR_TIMEOUT;
        }
    }

    return ELLSI_OK;
}

/**
  * @brief  Disable ELLSI controller.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @return None
  * @details Clear ELLSIEN bit of ELLSI_CTL register to disable ELLSI transfer control.
  */
void ELLSI_Close(ELLSI_T *ellsi)
{
    ellsi->CTL &= ~ELLSI_CTL_ELLSIEN_Msk;
}

/**
  * @brief  Get current ELLSI time information.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[out]   sPt The returned pointer is specified the current ELLSI value. It includes:
  *                   u32BusClock: Bus clock.
  *                   u32TransferTimeNsec: Transfer time in nano second.
  *                   u32T0HTimeNsec: T0H time in nano second.
  *                   u32T1HTimeNsec: T1H time in nano second.
  *                   u32ResetTimeNsec: Reset time in nano second.
  *                   u32EnterHTimeNsec: Enter command high time in nano second.
  *                   u32EnterLTimeNsec: Enter command low time in nano second.
  *                   u32GetHTimeNsec: Get high pulse time in nano second.
  *                   u32GetHTolTimeNsec: Get high pulse tolerance time in nano second.
  *                   u32CmdTimeoutTimeNsec: Command timeout time in nano second.
  *                   u32FBH0TimeNsec: Feedback command high 0 time in nano second.
  *                   u32FBL0TimeNsec: Feedback command low 0 time in nano second.
  *                   u32FBH1TimeNsec: Feedback command high 1 time in nano second.
  *                   u32FBL1TimeNsec: Feedback command low 1 time in nano second.
  *                   u32FBCNT0TimeNsec: Feedback count 0 time in nano second.
  *                   u32FBCNT0TolTimeNsec: Feedback count 0 tolerance time in nano second.
  *                   u32FBCNT1TimeNsec: Feedback count 1 time in nano second.
  *                   u32FBCNT1TolTimeNsec: Feedback count 1 tolerance time in nano second.
  *                   u32FBID0TimeNsec: Feedback ID 0 time in nano second.
  *                   u32FBID0TolTimeNsec: Feedback ID 0 tolerance time in nano second.
  *                   u32FBID1TimeNsec: Feedback ID 1 time in nano second.
  *                   u32FBID1TolTimeNsec: Feedback ID 1 tolerance time in nano second.
  *                   u32TH20TimeNsec: TH20 command time in nano second.
  *                   u32WKPULSETimeNsec: Wakeup pulse time in nano second.
  *                   u32WKWPERTimeNsec: Wakeup wait time in nano second.
  * @return None
  * @details This API is used to get the current ELLSI time information.
  */
void ELLSI_GetTimeInfo(ELLSI_T *ellsi, S_ELLSI_TIME_INFO_T *sPt)
{
    uint32_t u32PCLKFreq = 0, u32Tmp;
    uint32_t u32Div, u32CmdDiv, u32Period, u32T0H, u32T1H, u32ResetPeriod;
    uint32_t u32EnterHI, u32EnterLO;
    uint32_t u32GetHI, u32GetHITol, u32CmdTimeout;
    uint32_t u32FBCmdH0, u32FBCmdL0, u32FBCmdH1, u32FBCmdL1;
    uint32_t u32FBCnt0, u32FBC0Tol, u32FBCnt1, u32FBC1Tol;
    uint32_t u32FBID0, u32FBID0Tol, u32FBID1, u32FBID1Tol;
    uint32_t u32TH20HI;
    uint32_t u32WakeupPulse, u32WakeupWaitPeriod;

    /* Get PCLK clock frequency */
    if((ellsi == ELLSI0) || (ellsi == ELLSI0_NS))
        u32PCLKFreq = CLK_GetPCLK0Freq();

    /* Get time data */
    u32Div = (ellsi->CLKDIV & ELLSI_CLKDIV_DIVIDER_Msk) >> ELLSI_CLKDIV_DIVIDER_Pos;
    u32Period = (ellsi->PERIOD & ELLSI_PERIOD_PERIOD_Msk) >> ELLSI_PERIOD_PERIOD_Pos;
    u32T0H = (ellsi->DUTY & ELLSI_DUTY_T0H_Msk) >> ELLSI_DUTY_T0H_Pos;
    u32T1H = (ellsi->DUTY & ELLSI_DUTY_T1H_Msk) >> ELLSI_DUTY_T1H_Pos;
    u32ResetPeriod = (ellsi->RSTPERIOD & ELLSI_RSTPERIOD_RSTPERIOD_Msk) >> ELLSI_RSTPERIOD_RSTPERIOD_Pos;
    u32CmdDiv = (ellsi->CLKDIV & ELLSI_CLKDIV_CMDDIV_Msk) >> ELLSI_CLKDIV_CMDDIV_Pos;
    u32EnterHI = (ellsi->CMDCTL & ELLSI_CMDCTL_ENTERHI_Msk) >> ELLSI_CMDCTL_ENTERHI_Pos;
    u32EnterLO = (ellsi->CMDCTL & ELLSI_CMDCTL_ENTERLO_Msk) >> ELLSI_CMDCTL_ENTERLO_Pos;
    u32GetHI = (ellsi->CMDGPP & ELLSI_CMDGPP_GETHIP_Msk) >> ELLSI_CMDGPP_GETHIP_Pos;
    u32GetHITol = (ellsi->CMDGPP & ELLSI_CMDGPP_GETHITOL_Msk) >> ELLSI_CMDGPP_GETHITOL_Pos;
    u32CmdTimeout = (ellsi->CMDGPP & ELLSI_CMDGPP_CMDTOP_Msk) >> ELLSI_CMDGPP_CMDTOP_Pos;
    u32FBCmdH0 = (ellsi->FBCCTL & ELLSI_FBCCTL_FBHIP0_Msk) >> ELLSI_FBCCTL_FBHIP0_Pos;
    u32FBCmdL0 = (ellsi->FBCCTL & ELLSI_FBCCTL_FBLOP0_Msk) >> ELLSI_FBCCTL_FBLOP0_Pos;
    u32FBCmdH1 = (ellsi->FBCCTL & ELLSI_FBCCTL_FBHIP1_Msk) >> ELLSI_FBCCTL_FBHIP1_Pos;
    u32FBCmdL1 = (ellsi->FBCCTL & ELLSI_FBCCTL_FBLOP1_Msk) >> ELLSI_FBCCTL_FBLOP1_Pos;
    u32FBCnt0 = (ellsi->FBCTCTL & ELLSI_FBCTCTL_FBCNT0_Msk) >> ELLSI_FBCTCTL_FBCNT0_Pos;
    u32FBC0Tol = (ellsi->FBCTCTL & ELLSI_FBCTCTL_FBC0TOL_Msk) >> ELLSI_FBCTCTL_FBC0TOL_Pos;
    u32FBCnt1 = (ellsi->FBCTCTL & ELLSI_FBCTCTL_FBCNT1_Msk) >> ELLSI_FBCTCTL_FBCNT1_Pos;
    u32FBC1Tol = (ellsi->FBCTCTL & ELLSI_FBCTCTL_FBC1TOL_Msk) >> ELLSI_FBCTCTL_FBC1TOL_Pos;
    u32FBID0 = (ellsi->FBIDTCTL & ELLSI_FBIDTCTL_FBID0_Msk) >> ELLSI_FBIDTCTL_FBID0_Pos;
    u32FBID0Tol = (ellsi->FBIDTCTL & ELLSI_FBIDTCTL_FBID0TOL_Msk) >> ELLSI_FBIDTCTL_FBID0TOL_Pos;
    u32FBID1 = (ellsi->FBIDTCTL & ELLSI_FBIDTCTL_FBID1_Msk) >> ELLSI_FBIDTCTL_FBID1_Pos;
    u32FBID1Tol = (ellsi->FBIDTCTL & ELLSI_FBIDTCTL_FBID1TOL_Msk) >> ELLSI_FBIDTCTL_FBID1TOL_Pos;
    u32TH20HI = (ellsi->TCTCTL & ELLSI_TCTCTL_TH20HI_Msk) >> ELLSI_TCTCTL_TH20HI_Pos;
    u32WakeupPulse = (ellsi->WKTCTL & ELLSI_WKTCTL_WKPULSE_Msk) >> ELLSI_WKTCTL_WKPULSE_Pos;
    u32WakeupWaitPeriod = (ellsi->WKTCTL & ELLSI_WKTCTL_WKWPER_Msk) >> ELLSI_WKTCTL_WKWPER_Pos;

    /* Compute ELLSI time information */
    sPt->u32BusClock = u32PCLKFreq / (u32Div + 1);

    u32Tmp = u32PCLKFreq / 1000;
    sPt->u32TransferTimeNsec = u32Period * 1000000 / u32Tmp * (u32Div + 1);
    sPt->u32T0HTimeNsec = u32T0H * 1000000 / u32Tmp * (u32Div + 1);
    sPt->u32T1HTimeNsec = u32T1H * 1000000 / u32Tmp * (u32Div + 1);
    sPt->u32ResetTimeNsec = u32ResetPeriod * 1000000 / u32Tmp * (u32Div + 1);
    sPt->u32EnterHTimeNsec = u32EnterHI * 1000000 / u32Tmp * (u32Div + 1) * (u32CmdDiv + 1);
    sPt->u32EnterLTimeNsec = u32EnterLO * 1000000 / u32Tmp * (u32Div + 1) * (u32CmdDiv + 1);
    sPt->u32GetHTimeNsec = u32GetHI * 1000000 / u32Tmp * (u32Div + 1) * (u32CmdDiv + 1);
    sPt->u32GetHTolTimeNsec = u32GetHITol * 1000000 / u32Tmp * (u32Div + 1) * (u32CmdDiv + 1);
    sPt->u32CmdTimeoutTimeNsec = u32CmdTimeout * 1000000 / u32Tmp * (u32Div + 1) * (u32CmdDiv + 1);
    sPt->u32FBH0TimeNsec = u32FBCmdH0 * 1000000 / u32Tmp * (u32Div + 1) * (u32CmdDiv + 1);
    sPt->u32FBL0TimeNsec = u32FBCmdL0 * 1000000 / u32Tmp * (u32Div + 1) * (u32CmdDiv + 1);
    sPt->u32FBH1TimeNsec = u32FBCmdH1 * 1000000 / u32Tmp * (u32Div + 1) * (u32CmdDiv + 1);
    sPt->u32FBL1TimeNsec = u32FBCmdL1 * 1000000 / u32Tmp * (u32Div + 1) * (u32CmdDiv + 1);
    sPt->u32FBCNT0TimeNsec = u32FBCnt0 * 1000000 / u32Tmp * (u32Div + 1) * (u32CmdDiv + 1);
    sPt->u32FBCNT0TolTimeNsec = u32FBC0Tol * 1000000 / u32Tmp * (u32Div + 1) * (u32CmdDiv + 1);
    sPt->u32FBCNT1TimeNsec = u32FBCnt1 * 1000000 / u32Tmp * (u32Div + 1) * (u32CmdDiv + 1);
    sPt->u32FBCNT1TolTimeNsec = u32FBC1Tol * 1000000 / u32Tmp * (u32Div + 1) * (u32CmdDiv + 1);
    sPt->u32FBID0TimeNsec = u32FBID0 * 1000000 / u32Tmp * (u32Div + 1) * (u32CmdDiv + 1);
    sPt->u32FBID0TolTimeNsec = u32FBID0Tol * 1000000 / u32Tmp * (u32Div + 1) * (u32CmdDiv + 1);
    sPt->u32FBID1TimeNsec = u32FBID1 * 1000000 / u32Tmp * (u32Div + 1) * (u32CmdDiv + 1);
    sPt->u32FBID1TolTimeNsec = u32FBID1Tol * 1000000 / u32Tmp * (u32Div + 1) * (u32CmdDiv + 1);
    sPt->u32TH20TimeNsec = u32TH20HI * 1000000 / u32Tmp * (u32Div + 1) * (u32CmdDiv + 1);
    sPt->u32WKPULSETimeNsec = u32WakeupPulse * 1000000 / u32Tmp * (u32Div + 1) * (u32CmdDiv + 1);
    sPt->u32WKWPERTimeNsec = u32WakeupWaitPeriod * 100000 / u32Tmp * 10 * (u32Div + 1) * (u32CmdDiv + 1);
}

/**
  * @brief  Configure FIFO threshold setting.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32TxThreshold Decides the TX FIFO threshold. It could be 0 ~ 3.
  * @return None
  * @details Set TX FIFO threshold configuration.
  */
void ELLSI_SetFIFO(ELLSI_T *ellsi, uint32_t u32TxThreshold)
{
    ellsi->CTL = (ellsi->CTL & ~ELLSI_CTL_TXTH_Msk) | (u32TxThreshold << ELLSI_CTL_TXTH_Pos);
}

/**
  * @brief  Enable interrupt function.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32Mask The combination of all related interrupt enable bits.
  *                     Each bit corresponds to a interrupt enable bit.
  *                     This parameter decides which interrupts will be enabled. It is combination of:
  *                       - \ref ELLSI_UNDFL_INT_MASK
  *                       - \ref ELLSI_FEND_INT_MASK
  *                       - \ref ELLSI_RSTC_INT_MASK
  *                       - \ref ELLSI_EMP_INT_MASK
  *                       - \ref ELLSI_FUL_INT_MASK
  *                       - \ref ELLSI_TXTH_INT_MASK
  *
  * @return None
  * @details Enable ELLSI related interrupts specified by u32Mask parameter.
  */
void ELLSI_EnableInt(ELLSI_T *ellsi, uint32_t u32Mask)
{
    /* Enable underflow interrupt flag */
    if((u32Mask & ELLSI_UNDFL_INT_MASK) == ELLSI_UNDFL_INT_MASK)
        ellsi->CTL |= ELLSI_CTL_UNDFLINTEN_Msk;

    /* Enable frame end interrupt flag */
    if((u32Mask & ELLSI_FEND_INT_MASK) == ELLSI_FEND_INT_MASK)
        ellsi->CTL |= ELLSI_CTL_FENDINTEN_Msk;

    /* Enable reset command interrupt flag */
    if((u32Mask & ELLSI_RSTC_INT_MASK) == ELLSI_RSTC_INT_MASK)
        ellsi->CTL |= ELLSI_CTL_RSTCINTEN_Msk;

    /* Enable FIFO empty interrupt flag */
    if((u32Mask & ELLSI_EMP_INT_MASK) == ELLSI_EMP_INT_MASK)
        ellsi->CTL |= ELLSI_CTL_EMPINTEN_Msk;

    /* Enable FIFO full interrupt flag */
    if((u32Mask & ELLSI_FUL_INT_MASK) == ELLSI_FUL_INT_MASK)
        ellsi->CTL |= ELLSI_CTL_FULINTEN_Msk;

    /* Enable TX threshold interrupt flag */
    if((u32Mask & ELLSI_TXTH_INT_MASK) == ELLSI_TXTH_INT_MASK)
        ellsi->CTL |= ELLSI_CTL_TXTHIEN_Msk;
}

/**
  * @brief  Disable interrupt function.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32Mask The combination of all related interrupt enable bits.
  *                     Each bit corresponds to a interrupt bit.
  *                     This parameter decides which interrupts will be disabled. It is combination of:
  *                       - \ref ELLSI_UNDFL_INT_MASK
  *                       - \ref ELLSI_FEND_INT_MASK
  *                       - \ref ELLSI_RSTC_INT_MASK
  *                       - \ref ELLSI_EMP_INT_MASK
  *                       - \ref ELLSI_FUL_INT_MASK
  *                       - \ref ELLSI_TXTH_INT_MASK
  *
  * @return None
  * @details Disable ELLSI related interrupts specified by u32Mask parameter.
  */
void ELLSI_DisableInt(ELLSI_T *ellsi, uint32_t u32Mask)
{
    /* Disable underflow interrupt flag */
    if((u32Mask & ELLSI_UNDFL_INT_MASK) == ELLSI_UNDFL_INT_MASK)
        ellsi->CTL &= ~ELLSI_CTL_UNDFLINTEN_Msk;

    /* Disable frame end interrupt flag */
    if((u32Mask & ELLSI_FEND_INT_MASK) == ELLSI_FEND_INT_MASK)
        ellsi->CTL &= ~ELLSI_CTL_FENDINTEN_Msk;

    /* Disable reset command interrupt flag */
    if((u32Mask & ELLSI_RSTC_INT_MASK) == ELLSI_RSTC_INT_MASK)
        ellsi->CTL &= ~ELLSI_CTL_RSTCINTEN_Msk;

    /* Disable FIFO empty interrupt flag */
    if((u32Mask & ELLSI_EMP_INT_MASK) == ELLSI_EMP_INT_MASK)
        ellsi->CTL &= ~ELLSI_CTL_EMPINTEN_Msk;

    /* Disable FIFO full interrupt flag */
    if((u32Mask & ELLSI_FUL_INT_MASK) == ELLSI_FUL_INT_MASK)
        ellsi->CTL &= ~ELLSI_CTL_FULINTEN_Msk;

    /* Disable TX FIFO threshold interrupt flag */
    if((u32Mask & ELLSI_TXTH_INT_MASK) == ELLSI_TXTH_INT_MASK)
        ellsi->CTL &= ~ELLSI_CTL_TXTHIEN_Msk;
}

/**
  * @brief  Get interrupt flag.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32Mask The combination of all related interrupt sources.
  *                     Each bit corresponds to a interrupt source.
  *                     This parameter decides which interrupt flags will be read. It is combination of:
  *                       - \ref ELLSI_UNDFL_INT_MASK
  *                       - \ref ELLSI_FEND_INT_MASK
  *                       - \ref ELLSI_RSTC_INT_MASK
  *                       - \ref ELLSI_EMP_INT_MASK
  *                       - \ref ELLSI_FUL_INT_MASK
  *                       - \ref ELLSI_TXTH_INT_MASK
  *
  * @return Interrupt flags of selected sources.
  * @details Get ELLSI related interrupt flags specified by u32Mask parameter.
  */
uint32_t ELLSI_GetIntFlag(ELLSI_T *ellsi, uint32_t u32Mask)
{
    uint32_t u32IntFlag = 0;

    /* Check underflow interrupt flag */
    if((u32Mask & ELLSI_UNDFL_INT_MASK) && (ellsi->STATUS & ELLSI_STATUS_UNDFLIF_Msk))
        u32IntFlag |= ELLSI_UNDFL_INT_MASK;

    /* Check frame end interrupt flag */
    if((u32Mask & ELLSI_FEND_INT_MASK) && (ellsi->STATUS & ELLSI_STATUS_FENDIF_Msk))
        u32IntFlag |= ELLSI_FEND_INT_MASK;

    /* Check reset command interrupt flag */
    if((u32Mask & ELLSI_RSTC_INT_MASK) && (ellsi->STATUS & ELLSI_STATUS_RSTCIF_Msk))
        u32IntFlag |= ELLSI_RSTC_INT_MASK;

    /* Check FIFO empty interrupt flag */
    if((u32Mask & ELLSI_EMP_INT_MASK) && (ellsi->STATUS & ELLSI_STATUS_EMPIF_Msk))
        u32IntFlag |= ELLSI_EMP_INT_MASK;

    /* Check FIFO full interrupt flag */
    if((u32Mask & ELLSI_FUL_INT_MASK) && (ellsi->STATUS & ELLSI_STATUS_FULIF_Msk))
        u32IntFlag |= ELLSI_FUL_INT_MASK;

    /* Check TX FIFO threshold interrupt flag */
    if((u32Mask & ELLSI_TXTH_INT_MASK) && (ellsi->STATUS & ELLSI_STATUS_TXTHIF_Msk))
        u32IntFlag |= ELLSI_TXTH_INT_MASK;

    return u32IntFlag;
}

/**
  * @brief  Clear interrupt flag.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32Mask The combination of all related interrupt sources.
  *                     Each bit corresponds to a interrupt source.
  *                     This parameter decides which interrupt flags will be cleared. It could be the combination of:
  *                       - \ref ELLSI_UNDFL_INT_MASK
  *                       - \ref ELLSI_FEND_INT_MASK
  *                       - \ref ELLSI_RSTC_INT_MASK
  *
  * @return None
  * @details Clear ELLSI related interrupt flags specified by u32Mask parameter.
  */
void ELLSI_ClearIntFlag(ELLSI_T *ellsi, uint32_t u32Mask)
{
    if(u32Mask & ELLSI_UNDFL_INT_MASK)
        ellsi->STATUS = ELLSI_STATUS_UNDFLIF_Msk; /* Clear underflow interrupt flag */

    if(u32Mask & ELLSI_FEND_INT_MASK)
        ellsi->STATUS = ELLSI_STATUS_FENDIF_Msk; /* Clear frame end interrupt flag */

    if(u32Mask & ELLSI_RSTC_INT_MASK)
        ellsi->STATUS = ELLSI_STATUS_RSTCIF_Msk; /* Clear reset command interrupt flag */
}

/**
  * @brief  Enable command interrupt function.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32Mask The combination of all related command interrupt enable bits.
  *                     Each bit corresponds to a command interrupt enable bit.
  *                     This parameter decides which command interrupts will be enabled. It is combination of:
  *                       - \ref ELLSI_CMDDONE_MASK
  *                       - \ref ELLSI_FBDONE_MASK
  *                       - \ref ELLSI_TH20DONE_MASK
  *                       - \ref ELLSI_SETIDLONG_MASK
  *                       - \ref ELLSI_CHKIDLONG_MASK
  *                       - \ref ELLSI_SETIDSHORT_MASK
  *                       - \ref ELLSI_CHKIDSHORT_MASK
  *                       - \ref ELLSI_SETGETOV_MASK
  *                       - \ref ELLSI_CHKGETOV_MASK
  *                       - \ref ELLSI_SETGETUN_MASK
  *                       - \ref ELLSI_CHKGETUN_MASK
  *                       - \ref ELLSI_FBC0LONG_MASK
  *                       - \ref ELLSI_FBC0SHORT_MASK
  *                       - \ref ELLSI_FBC1LONG_MASK
  *                       - \ref ELLSI_FBC1SHORT_MASK
  *                       - \ref ELLSI_FBID0LONG_MASK
  *                       - \ref ELLSI_FBID0SHORT_MASK
  *                       - \ref ELLSI_FBID1LONG_MASK
  *                       - \ref ELLSI_FBID1SHORT_MASK
  *                       - \ref ELLSI_ASETIDOV_MASK
  *                       - \ref ELLSI_ASETDONE_MASK
  *                       - \ref ELLSI_ATHDONE_MASK
  *                       - \ref ELLSI_FBPOV_MASK
  *
  * @return None
  * @details Enable ELLSI related command interrupts specified by u32Mask parameter.
  */
void ELLSI_EnableCmdInt(ELLSI_T *ellsi, uint32_t u32Mask)
{
    /* Enable normal command done interrupt flag */
    if((u32Mask & ELLSI_CMDDONE_MASK) == ELLSI_CMDDONE_MASK)
        ellsi->CTL |= ELLSI_CTL_NCMDDIEN_Msk;

    /* Enable feedback command done interrupt flag */
    if((u32Mask & ELLSI_FBDONE_MASK) == ELLSI_FBDONE_MASK)
        ellsi->CTL |= ELLSI_CTL_FBSTSIEN_Msk;

    /* Enable TH20 command done interrupt flag */
    if((u32Mask & ELLSI_TH20DONE_MASK) == ELLSI_TH20DONE_MASK)
        ellsi->CTL |= ELLSI_CTL_NCMDDIEN_Msk;

    /* Enable set ID get pulse long interrupt flag */
    if((u32Mask & ELLSI_SETIDLONG_MASK) == ELLSI_SETIDLONG_MASK)
        ellsi->CTL |= ELLSI_CTL_RSPIEN_Msk;

    /* Enable check ID get pulse long interrupt flag */
    if((u32Mask & ELLSI_CHKIDLONG_MASK) == ELLSI_CHKIDLONG_MASK)
        ellsi->CTL |= ELLSI_CTL_RSPIEN_Msk;

    /* Enable set ID get pulse short interrupt flag */
    if((u32Mask & ELLSI_SETIDSHORT_MASK) == ELLSI_SETIDSHORT_MASK)
        ellsi->CTL |= ELLSI_CTL_RSPIEN_Msk;

    /* Enable check ID get pulse short interrupt flag */
    if((u32Mask & ELLSI_CHKIDSHORT_MASK) == ELLSI_CHKIDSHORT_MASK)
        ellsi->CTL |= ELLSI_CTL_RSPIEN_Msk;

    /* Enable set ID get pulse overflow interrupt flag */
    if((u32Mask & ELLSI_SETGETOV_MASK) == ELLSI_SETGETOV_MASK)
        ellsi->CTL |= ELLSI_CTL_RSPIEN_Msk;

    /* Enable check ID get pulse overflow interrupt flag */
    if((u32Mask & ELLSI_CHKGETOV_MASK) == ELLSI_CHKGETOV_MASK)
        ellsi->CTL |= ELLSI_CTL_RSPIEN_Msk;

    /* Enable set ID Get pulse underflow interrupt flag */
    if((u32Mask & ELLSI_SETGETUN_MASK) == ELLSI_SETGETUN_MASK)
        ellsi->CTL |= ELLSI_CTL_RSPIEN_Msk;

    /* Enable check ID get pulse underflow interrupt flag */
    if((u32Mask & ELLSI_CHKGETUN_MASK) == ELLSI_CHKGETUN_MASK)
        ellsi->CTL |= ELLSI_CTL_RSPIEN_Msk;

    /* Enable feedback count 0 pulse long interrupt flag */
    if((u32Mask & ELLSI_FBC0LONG_MASK) == ELLSI_FBC0LONG_MASK)
        ellsi->CTL |= ELLSI_CTL_RSPIEN_Msk;

    /* Enable feedback count 0 pulse short interrupt flag */
    if((u32Mask & ELLSI_FBC0SHORT_MASK) == ELLSI_FBC0SHORT_MASK)
        ellsi->CTL |= ELLSI_CTL_RSPIEN_Msk;

    /* Enable feedback count 1 pulse long interrupt flag */
    if((u32Mask & ELLSI_FBC1LONG_MASK) == ELLSI_FBC1LONG_MASK)
        ellsi->CTL |= ELLSI_CTL_RSPIEN_Msk;

    /* Enable feedback count 1 pulse short interrupt flag */
    if((u32Mask & ELLSI_FBC1SHORT_MASK) == ELLSI_FBC1SHORT_MASK)
        ellsi->CTL |= ELLSI_CTL_RSPIEN_Msk;

    /* Enable feedback ID 0 pulse long interrupt flag */
    if((u32Mask & ELLSI_FBID0LONG_MASK) == ELLSI_FBID0LONG_MASK)
        ellsi->CTL |= ELLSI_CTL_RSPIEN_Msk;

    /* Enable feedback ID 0 pulse short interrupt flag */
    if((u32Mask & ELLSI_FBID0SHORT_MASK) == ELLSI_FBID0SHORT_MASK)
        ellsi->CTL |= ELLSI_CTL_RSPIEN_Msk;

    /* Enable feedback ID 1 pulse long interrupt flag */
    if((u32Mask & ELLSI_FBID1LONG_MASK) == ELLSI_FBID1LONG_MASK)
        ellsi->CTL |= ELLSI_CTL_RSPIEN_Msk;

    /* Enable feedback ID 1 pulse short interrupt flag */
    if((u32Mask & ELLSI_FBID1SHORT_MASK) == ELLSI_FBID1SHORT_MASK)
        ellsi->CTL |= ELLSI_CTL_RSPIEN_Msk;

    /* Enable AUTO SET mode feedback ID overflow interrupt flag */
    if((u32Mask & ELLSI_ASETIDOV_MASK) == ELLSI_ASETIDOV_MASK)
        ellsi->CTL |= ELLSI_CTL_ASETIEN_Msk;

    /* Enable AUTO SET mode done interrupt flag */
    if((u32Mask & ELLSI_ASETDONE_MASK) == ELLSI_ASETDONE_MASK)
        ellsi->CTL |= ELLSI_CTL_ASETIEN_Msk;

    /* Enable AUTO TH20 SET mode done interrupt flag */
    if((u32Mask & ELLSI_ATHDONE_MASK) == ELLSI_ATHDONE_MASK)
        ellsi->CTL |= ELLSI_CTL_ATHIEN_Msk;

    /* Enable feedback pixel count overflow interrupt flag */
    if((u32Mask & ELLSI_FBPOV_MASK) == ELLSI_FBPOV_MASK)
        ellsi->CTL |= ELLSI_CTL_FBSTSIEN_Msk;
}

/**
  * @brief  Disable command interrupt function.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32Mask The combination of all related command interrupt enable bits.
  *                     Each bit corresponds to a command interrupt bit.
  *                     This parameter decides which command interrupts will be disabled. It is combination of:
  *                       - \ref ELLSI_CMDDONE_MASK
  *                       - \ref ELLSI_FBDONE_MASK
  *                       - \ref ELLSI_TH20DONE_MASK
  *                       - \ref ELLSI_SETIDLONG_MASK
  *                       - \ref ELLSI_CHKIDLONG_MASK
  *                       - \ref ELLSI_SETIDSHORT_MASK
  *                       - \ref ELLSI_CHKIDSHORT_MASK
  *                       - \ref ELLSI_SETGETOV_MASK
  *                       - \ref ELLSI_CHKGETOV_MASK
  *                       - \ref ELLSI_SETGETUN_MASK
  *                       - \ref ELLSI_CHKGETUN_MASK
  *                       - \ref ELLSI_FBC0LONG_MASK
  *                       - \ref ELLSI_FBC0SHORT_MASK
  *                       - \ref ELLSI_FBC1LONG_MASK
  *                       - \ref ELLSI_FBC1SHORT_MASK
  *                       - \ref ELLSI_FBID0LONG_MASK
  *                       - \ref ELLSI_FBID0SHORT_MASK
  *                       - \ref ELLSI_FBID1LONG_MASK
  *                       - \ref ELLSI_FBID1SHORT_MASK
  *                       - \ref ELLSI_ASETIDOV_MASK
  *                       - \ref ELLSI_ASETDONE_MASK
  *                       - \ref ELLSI_ATHDONE_MASK
  *                       - \ref ELLSI_FBPOV_MASK
  *
  * @return None
  * @details Disable ELLSI related command interrupts specified by u32Mask parameter.
  */
void ELLSI_DisableCmdInt(ELLSI_T *ellsi, uint32_t u32Mask)
{
    /* Disable normal command done interrupt flag */
    if((u32Mask & ELLSI_CMDDONE_MASK) == ELLSI_CMDDONE_MASK)
        ellsi->CTL &= ~ELLSI_CTL_NCMDDIEN_Msk;

    /* Disable feedback command done interrupt flag */
    if((u32Mask & ELLSI_FBDONE_MASK) == ELLSI_FBDONE_MASK)
        ellsi->CTL &= ~ELLSI_CTL_FBSTSIEN_Msk;

    /* Disable TH20 command done interrupt flag */
    if((u32Mask & ELLSI_TH20DONE_MASK) == ELLSI_TH20DONE_MASK)
        ellsi->CTL &= ~ELLSI_CTL_NCMDDIEN_Msk;

    /* Disable set ID get pulse long interrupt flag */
    if((u32Mask & ELLSI_SETIDLONG_MASK) == ELLSI_SETIDLONG_MASK)
        ellsi->CTL &= ~ELLSI_CTL_RSPIEN_Msk;

    /* Disable check ID get pulse long interrupt flag */
    if((u32Mask & ELLSI_CHKIDLONG_MASK) == ELLSI_CHKIDLONG_MASK)
        ellsi->CTL &= ~ELLSI_CTL_RSPIEN_Msk;

    /* Disable set ID get pulse short interrupt flag */
    if((u32Mask & ELLSI_SETIDSHORT_MASK) == ELLSI_SETIDSHORT_MASK)
        ellsi->CTL &= ~ELLSI_CTL_RSPIEN_Msk;

    /* Disable check ID get pulse short interrupt flag */
    if((u32Mask & ELLSI_CHKIDSHORT_MASK) == ELLSI_CHKIDSHORT_MASK)
        ellsi->CTL &= ~ELLSI_CTL_RSPIEN_Msk;

    /* Disable set ID get pulse overflow interrupt flag */
    if((u32Mask & ELLSI_SETGETOV_MASK) == ELLSI_SETGETOV_MASK)
        ellsi->CTL &= ~ELLSI_CTL_RSPIEN_Msk;

    /* Disable check ID get pulse overflow interrupt flag */
    if((u32Mask & ELLSI_CHKGETOV_MASK) == ELLSI_CHKGETOV_MASK)
        ellsi->CTL &= ~ELLSI_CTL_RSPIEN_Msk;

    /* Disable set ID Get pulse underflow interrupt flag */
    if((u32Mask & ELLSI_SETGETUN_MASK) == ELLSI_SETGETUN_MASK)
        ellsi->CTL &= ~ELLSI_CTL_RSPIEN_Msk;

    /* Disable check ID get pulse underflow interrupt flag */
    if((u32Mask & ELLSI_CHKGETUN_MASK) == ELLSI_CHKGETUN_MASK)
        ellsi->CTL &= ~ELLSI_CTL_RSPIEN_Msk;

    /* Disable feedback count 0 pulse long interrupt flag */
    if((u32Mask & ELLSI_FBC0LONG_MASK) == ELLSI_FBC0LONG_MASK)
        ellsi->CTL &= ~ELLSI_CTL_RSPIEN_Msk;

    /* Disable feedback count 0 pulse short interrupt flag */
    if((u32Mask & ELLSI_FBC0SHORT_MASK) == ELLSI_FBC0SHORT_MASK)
        ellsi->CTL &= ~ELLSI_CTL_RSPIEN_Msk;

    /* Disable feedback count 1 pulse long interrupt flag */
    if((u32Mask & ELLSI_FBC1LONG_MASK) == ELLSI_FBC1LONG_MASK)
        ellsi->CTL &= ~ELLSI_CTL_RSPIEN_Msk;

    /* Disable feedback count 1 pulse short interrupt flag */
    if((u32Mask & ELLSI_FBC1SHORT_MASK) == ELLSI_FBC1SHORT_MASK)
        ellsi->CTL &= ~ELLSI_CTL_RSPIEN_Msk;

    /* Disable feedback ID 0 pulse long interrupt flag */
    if((u32Mask & ELLSI_FBID0LONG_MASK) == ELLSI_FBID0LONG_MASK)
        ellsi->CTL &= ~ELLSI_CTL_RSPIEN_Msk;

    /* Disable feedback ID 0 pulse short interrupt flag */
    if((u32Mask & ELLSI_FBID0SHORT_MASK) == ELLSI_FBID0SHORT_MASK)
        ellsi->CTL &= ~ELLSI_CTL_RSPIEN_Msk;

    /* Disable feedback ID 1 pulse long interrupt flag */
    if((u32Mask & ELLSI_FBID1LONG_MASK) == ELLSI_FBID1LONG_MASK)
        ellsi->CTL &= ~ELLSI_CTL_RSPIEN_Msk;

    /* Disable feedback ID 1 pulse short interrupt flag */
    if((u32Mask & ELLSI_FBID1SHORT_MASK) == ELLSI_FBID1SHORT_MASK)
        ellsi->CTL &= ~ELLSI_CTL_RSPIEN_Msk;

    /* Disable AUTO SET mode feedback ID overflow interrupt flag */
    if((u32Mask & ELLSI_ASETIDOV_MASK) == ELLSI_ASETIDOV_MASK)
        ellsi->CTL &= ~ELLSI_CTL_ASETIEN_Msk;

    /* Disable AUTO SET mode done interrupt flag */
    if((u32Mask & ELLSI_ASETDONE_MASK) == ELLSI_ASETDONE_MASK)
        ellsi->CTL &= ~ELLSI_CTL_ASETIEN_Msk;

    /* Disable AUTO TH20 SET mode done interrupt flag */
    if((u32Mask & ELLSI_ATHDONE_MASK) == ELLSI_ATHDONE_MASK)
        ellsi->CTL &= ~ELLSI_CTL_ATHIEN_Msk;

    /* Disable feedback pixel count overflow interrupt flag */
    if((u32Mask & ELLSI_FBPOV_MASK) == ELLSI_FBPOV_MASK)
        ellsi->CTL &= ~ELLSI_CTL_FBSTSIEN_Msk;
}

/**
  * @brief  Get command interrupt flag.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32Mask The combination of all related command interrupt sources.
  *                     Each bit corresponds to a command interrupt source.
  *                     This parameter decides which command interrupt flags will be read. It is combination of:
  *                       - \ref ELLSI_CMDDONE_MASK
  *                       - \ref ELLSI_FBDONE_MASK
  *                       - \ref ELLSI_TH20DONE_MASK
  *                       - \ref ELLSI_SETIDLONG_MASK
  *                       - \ref ELLSI_CHKIDLONG_MASK
  *                       - \ref ELLSI_SETIDSHORT_MASK
  *                       - \ref ELLSI_CHKIDSHORT_MASK
  *                       - \ref ELLSI_SETGETOV_MASK
  *                       - \ref ELLSI_CHKGETOV_MASK
  *                       - \ref ELLSI_SETGETUN_MASK
  *                       - \ref ELLSI_CHKGETUN_MASK
  *                       - \ref ELLSI_FBC0LONG_MASK
  *                       - \ref ELLSI_FBC0SHORT_MASK
  *                       - \ref ELLSI_FBC1LONG_MASK
  *                       - \ref ELLSI_FBC1SHORT_MASK
  *                       - \ref ELLSI_FBID0LONG_MASK
  *                       - \ref ELLSI_FBID0SHORT_MASK
  *                       - \ref ELLSI_FBID1LONG_MASK
  *                       - \ref ELLSI_FBID1SHORT_MASK
  *                       - \ref ELLSI_ASETIDOV_MASK
  *                       - \ref ELLSI_ASETDONE_MASK
  *                       - \ref ELLSI_ATHDONE_MASK
  *
  * @return Command interrupt flags of selected sources.
  * @details Get ELLSI related command interrupt flags specified by u32Mask parameter.
  */
uint32_t ELLSI_GetCmdIntFlag(ELLSI_T *ellsi, uint32_t u32Mask)
{
    uint32_t u32IntFlag = 0;

    /* Check normal command done interrupt flag */
    if((u32Mask & ELLSI_CMDDONE_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_CMDDONE_Msk))
        u32IntFlag |= ELLSI_CMDDONE_MASK;

    /* Check feedback command done interrupt flag */
    if((u32Mask & ELLSI_FBDONE_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_FBDONE_Msk))
        u32IntFlag |= ELLSI_FBDONE_MASK;

    /* Check TH20 command done interrupt flag */
    if((u32Mask & ELLSI_TH20DONE_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_TH20DONE_Msk))
        u32IntFlag |= ELLSI_TH20DONE_MASK;

    /* Check set ID get pulse long interrupt flag */
    if((u32Mask & ELLSI_SETIDLONG_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_SETIDLONG_Msk))
        u32IntFlag |= ELLSI_SETIDLONG_MASK;

    /* Check check ID get pulse long interrupt flag */
    if((u32Mask & ELLSI_CHKIDLONG_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_CHKIDLONG_Msk))
        u32IntFlag |= ELLSI_CHKIDLONG_MASK;

    /* Check set ID get pulse short interrupt flag */
    if((u32Mask & ELLSI_SETIDSHORT_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_SETIDSHORT_Msk))
        u32IntFlag |= ELLSI_SETIDSHORT_MASK;

    /* Check check ID get pulse short interrupt flag */
    if((u32Mask & ELLSI_CHKIDSHORT_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_CHKIDSHORT_Msk))
        u32IntFlag |= ELLSI_CHKIDSHORT_MASK;

    /* Check set ID get pulse overflow interrupt flag */
    if((u32Mask & ELLSI_SETGETOV_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_SETGETOV_Msk))
        u32IntFlag |= ELLSI_SETGETOV_MASK;

    /* Check check ID get pulse overflow interrupt flag */
    if((u32Mask & ELLSI_CHKGETOV_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_CHKGETOV_Msk))
        u32IntFlag |= ELLSI_CHKGETOV_MASK;

    /* Check set ID Get pulse underflow interrupt flag */
    if((u32Mask & ELLSI_SETGETUN_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_SETGETUN_Msk))
        u32IntFlag |= ELLSI_SETGETUN_MASK;

    /* Check check ID get pulse underflow interrupt flag */
    if((u32Mask & ELLSI_CHKGETUN_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_CHKGETUN_Msk))
        u32IntFlag |= ELLSI_CHKGETUN_MASK;

    /* Check feedback count 0 pulse long interrupt flag */
    if((u32Mask & ELLSI_FBC0LONG_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_FBC0LONG_Msk))
        u32IntFlag |= ELLSI_FBC0LONG_MASK;

    /* Check feedback count 0 pulse short interrupt flag */
    if((u32Mask & ELLSI_FBC0SHORT_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_FBC0SHORT_Msk))
        u32IntFlag |= ELLSI_FBC0SHORT_MASK;

    /* Check feedback count 1 pulse long interrupt flag */
    if((u32Mask & ELLSI_FBC1LONG_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_FBC1LONG_Msk))
        u32IntFlag |= ELLSI_FBC1LONG_MASK;

    /* Check feedback count 1 pulse short interrupt flag */
    if((u32Mask & ELLSI_FBC1SHORT_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_FBC1SHORT_Msk))
        u32IntFlag |= ELLSI_FBC1SHORT_MASK;

    /* Check feedback ID 0 pulse long interrupt flag */
    if((u32Mask & ELLSI_FBID0LONG_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_FBID0LONG_Msk))
        u32IntFlag |= ELLSI_FBID0LONG_MASK;

    /* Check feedback ID 0 pulse short interrupt flag */
    if((u32Mask & ELLSI_FBID0SHORT_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_FBID0SHORT_Msk))
        u32IntFlag |= ELLSI_FBID0SHORT_MASK;

    /* Check feedback ID 1 pulse long interrupt flag */
    if((u32Mask & ELLSI_FBID1LONG_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_FBID1LONG_Msk))
        u32IntFlag |= ELLSI_FBID1LONG_MASK;

    /* Check feedback ID 1 pulse short interrupt flag */
    if((u32Mask & ELLSI_FBID1SHORT_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_FBID1SHORT_Msk))
        u32IntFlag |= ELLSI_FBID1SHORT_MASK;

    /* Check AUTO SET mode feedback ID overflow interrupt flag */
    if((u32Mask & ELLSI_ASETIDOV_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_ASETIDOV_Msk))
        u32IntFlag |= ELLSI_ASETIDOV_MASK;

    /* Check AUTO SET mode done interrupt flag */
    if((u32Mask & ELLSI_ASETDONE_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_ASETDONE_Msk))
        u32IntFlag |= ELLSI_ASETDONE_MASK;

    /* Check AUTO TH20 SET mode done interrupt flag */
    if((u32Mask & ELLSI_ATHDONE_MASK) && (ellsi->CMDSTS & ELLSI_CMDSTS_ATHDONE_Msk))
        u32IntFlag |= ELLSI_ATHDONE_MASK;

    return u32IntFlag;
}

/**
  * @brief  Clear command interrupt flag.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32Mask The combination of all related command interrupt sources.
  *                     Each bit corresponds to a command interrupt source.
  *                     This parameter decides which command interrupt flags will be cleared. It could be the combination of:
  *                       - \ref ELLSI_CMDDONE_MASK
  *                       - \ref ELLSI_FBDONE_MASK
  *                       - \ref ELLSI_TH20DONE_MASK
  *                       - \ref ELLSI_SETIDLONG_MASK
  *                       - \ref ELLSI_CHKIDLONG_MASK
  *                       - \ref ELLSI_SETIDSHORT_MASK
  *                       - \ref ELLSI_CHKIDSHORT_MASK
  *                       - \ref ELLSI_SETGETOV_MASK
  *                       - \ref ELLSI_CHKGETOV_MASK
  *                       - \ref ELLSI_SETGETUN_MASK
  *                       - \ref ELLSI_CHKGETUN_MASK
  *                       - \ref ELLSI_FBC0LONG_MASK
  *                       - \ref ELLSI_FBC0SHORT_MASK
  *                       - \ref ELLSI_FBC1LONG_MASK
  *                       - \ref ELLSI_FBC1SHORT_MASK
  *                       - \ref ELLSI_FBID0LONG_MASK
  *                       - \ref ELLSI_FBID0SHORT_MASK
  *                       - \ref ELLSI_FBID1LONG_MASK
  *                       - \ref ELLSI_FBID1SHORT_MASK
  *                       - \ref ELLSI_ASETIDOV_MASK
  *                       - \ref ELLSI_ASETDONE_MASK
  *                       - \ref ELLSI_ATHDONE_MASK
  *
  * @return None
  * @details Clear ELLSI related command interrupt flags specified by u32Mask parameter.
  */
void ELLSI_ClearCmdIntFlag(ELLSI_T *ellsi, uint32_t u32Mask)
{
    if(u32Mask & ELLSI_CMDDONE_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_CMDDONE_Msk; /* Clear normal command done interrupt flag */

    if(u32Mask & ELLSI_FBDONE_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_FBDONE_Msk; /* Clear feedback command done interrupt flag */

    if(u32Mask & ELLSI_TH20DONE_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_TH20DONE_Msk; /* Clear TH20 command done interrupt flag */

    if(u32Mask & ELLSI_SETIDLONG_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_SETIDLONG_Msk; /* Clear set ID get pulse long interrupt flag */

    if(u32Mask & ELLSI_CHKIDLONG_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_CHKIDLONG_Msk; /* Clear check ID get pulse long interrupt flag */

    if(u32Mask & ELLSI_SETIDSHORT_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_SETIDSHORT_Msk; /* Clear set ID get pulse short interrupt flag */

    if(u32Mask & ELLSI_CHKIDSHORT_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_CHKIDSHORT_Msk; /* Clear check ID get pulse short interrupt flag */

    if(u32Mask & ELLSI_SETGETOV_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_SETGETOV_Msk; /* Clear set ID get pulse overflow interrupt flag */

    if(u32Mask & ELLSI_CHKGETOV_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_CHKGETOV_Msk; /* Clear check ID get pulse overflow interrupt flag */

    if(u32Mask & ELLSI_SETGETUN_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_SETGETUN_Msk; /* Clear set ID Get pulse underflow interrupt flag */

    if(u32Mask & ELLSI_CHKGETUN_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_CHKGETUN_Msk; /* Clear check ID get pulse underflow interrupt flag */

    if(u32Mask & ELLSI_FBC0LONG_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_FBC0LONG_Msk; /* Clear feedback count 0 pulse long interrupt flag */

    if(u32Mask & ELLSI_FBC0SHORT_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_FBC0SHORT_Msk; /* Clear feedback count 0 pulse short interrupt flag */

    if(u32Mask & ELLSI_FBC1LONG_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_FBC1LONG_Msk; /* Clear feedback count 1 pulse long interrupt flag */

    if(u32Mask & ELLSI_FBC1SHORT_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_FBC1SHORT_Msk; /* Clear feedback count 1 pulse short interrupt flag */

    if(u32Mask & ELLSI_FBID0LONG_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_FBID0LONG_Msk; /* Clear feedback ID 0 pulse long interrupt flag */

    if(u32Mask & ELLSI_FBID0SHORT_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_FBID0SHORT_Msk; /* Clear feedback ID 0 pulse short interrupt flag */

    if(u32Mask & ELLSI_FBID1LONG_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_FBID1LONG_Msk; /* Clear feedback ID 1 pulse long interrupt flag */

    if(u32Mask & ELLSI_FBID1SHORT_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_FBID1SHORT_Msk; /* Clear feedback ID 1 pulse short interrupt flag */

    if(u32Mask & ELLSI_ASETIDOV_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_ASETIDOV_Msk; /* Clear AUTO SET mode feedback ID overflow interrupt flag */

    if(u32Mask & ELLSI_ASETDONE_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_ASETDONE_Msk; /* Clear AUTO SET mode done interrupt flag */

    if(u32Mask & ELLSI_ATHDONE_MASK)
        ellsi->CMDSTS = ELLSI_CMDSTS_ATHDONE_Msk; /* Clear AUTO TH20 SET mode done interrupt flag */
}

/**
  * @brief  Get feedback pixel count overflow interrupt flag.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32ID The 4-bit strip ID. It can be 1 ~ 15.
  * @return     0  The feedback pixel count not exceeds 1024.
  * @return     1  The feedback pixel count exceeds 1024.
  * @return     -1 Unknown strip ID number.
  * @details Get ELLSI feedback pixel count overflow interrupt flag specified by u32ID parameter.
  */
uint32_t ELLSI_GetOverflowFlag(ELLSI_T *ellsi, uint32_t u32ID)
{
    uint32_t i;
    uint32_t FBPOV;

    if((u32ID == 0) || (u32ID >= 16))
        return -1;

    for(i = 0; i < ELLSI_MAX_STRIP_CNT; i++)
    {
        FBPOV = ellsi->FB[i].FBPCNT;

        if(i == (u32ID - 1))
            break;
    }

    return (FBPOV & ELLSI_FBPCNT_FBPOV_Msk) >> ELLSI_FBPCNT_FBPOV_Pos;
}

/**
  * @brief  Clear feedback pixel count overflow interrupt flag.
  * @param[in]  ellsi The pointer of the specified ELLSI module.
  * @param[in]  u32ID The 4-bit strip ID. It can be 1 ~ 15.
  * @return None
  * @details Clear ELLSI feedback pixel count overflow interrupt flag specified by u32ID parameter.
  */
void ELLSI_ClearOverflowFlag(ELLSI_T *ellsi, uint32_t u32ID)
{
    uint32_t i;
    uint32_t *FBPOV;

    for(i = 0; i < ELLSI_MAX_STRIP_CNT; i++)
    {
        FBPOV = (uint32_t *)((uint32_t)&ellsi->FB[i].FBPCNT);

        if(i == (u32ID - 1))
            *FBPOV = *FBPOV & ELLSI_FBPCNT_FBPOV_Msk;
    }
}

/*@}*/ /* end of group ELLSI_EXPORTED_FUNCTIONS */

/*@}*/ /* end of group ELLSI_Driver */

/*@}*/ /* end of group Standard_Driver */
