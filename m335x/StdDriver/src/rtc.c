/**************************************************************************//**
 * @file     rtc.c
 * @version  V1.00
 * @brief    RTC driver source file
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2025 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/

#include "NuMicro.h"

/** @cond HIDDEN_SYMBOLS */

/*---------------------------------------------------------------------------------------------------------*/
/* Macro, type and constant definitions                                                                    */
/*---------------------------------------------------------------------------------------------------------*/
#define RTC_GLOBALS

/*---------------------------------------------------------------------------------------------------------*/
/* Global file scope (static) variables                                                                    */
/*---------------------------------------------------------------------------------------------------------*/
static volatile uint32_t g_u32hiYear;
static volatile uint32_t g_u32loYear;
static volatile uint32_t g_u32hiMonth;
static volatile uint32_t g_u32loMonth;
static volatile uint32_t g_u32hiDay;
static volatile uint32_t g_u32loDay;
static volatile uint32_t g_u32hiHour;
static volatile uint32_t g_u32loHour;
static volatile uint32_t g_u32hiMin;
static volatile uint32_t g_u32loMin;
static volatile uint32_t g_u32hiSec;
static volatile uint32_t g_u32loSec;

/** @endcond HIDDEN_SYMBOLS */

/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup RTC_Driver RTC Driver
  @{
*/

/** @addtogroup RTC_EXPORTED_FUNCTIONS RTC Exported Functions
  @{
*/

/**
  * @brief      Initialize RTC module and start counting
  *
  * @param[in]  sPt     Specify the time property and current date and time. It includes:           \n
  *                     u32Year: Year value, range between 2000 ~ 2099.                             \n
  *                     u32Month: Month value, range between 1 ~ 12.                                \n
  *                     u32Day: Day value, range between 1 ~ 31.                                    \n
  *                     u32DayOfWeek: Day of the week. [RTC_SUNDAY / RTC_MONDAY / RTC_TUESDAY /
  *                                                     RTC_WEDNESDAY / RTC_THURSDAY / RTC_FRIDAY /
  *                                                     RTC_SATURDAY]                               \n
  *                     u32Hour: Hour value, range between 0 ~ 23.                                  \n
  *                     u32Minute: Minute value, range between 0 ~ 59.                              \n
  *                     u32Second: Second value, range between 0 ~ 59.                              \n
  *                     u32TimeScale: [RTC_CLOCK_12 / RTC_CLOCK_24]                                 \n
  *                     u8AmPm: [RTC_AM / RTC_PM]                                                   \n
  *
  * @retval  0: SUCCESS
  * @retval -1: Initialize RTC module fail
  *
  * @details    This function is used to: \n
  *                 1. Write initial key to let RTC start count.  \n
  *                 2. Input parameter indicates start date/time. \n
  *                 3. User has to make sure that parameters of RTC date/time are reasonable. \n
  * @note       Null pointer for using default starting date/time.
  */
int32_t RTC_Open(S_RTC_TIME_DATA_T *sPt)
{
    uint32_t u32TimeOutCount = SystemCoreClock; /* 1 second time-out */

    RTC->INIT = RTC_INIT_KEY;

    if (RTC->INIT != RTC_INIT_ACTIVE_Msk)
    {
        RTC->INIT = RTC_INIT_KEY;

        while (RTC->INIT != RTC_INIT_ACTIVE_Msk)
        {
            if (--u32TimeOutCount == 0)
            {
                return RTC_ERR_TIMEOUT;
            }
        }
    }

    if ((sPt != ((void *)0)) && (RTC->INIT == RTC_INIT_ACTIVE_Msk))
    {
        /* Set RTC date and time */
        RTC_SetDateAndTime(sPt);
    }

    return RTC_OK;
}

/**
  * @brief      Disable RTC Clock
  *
  *
  *
  * @details    This API will disable RTC peripheral clock and stops RTC counting.
  */
void RTC_Close(void)
{
    CLK->APBCLK0 &= ~CLK_APBCLK0_RTCCKEN_Msk;
}

/**
  * @brief      Set 32K Frequency Compensation Data
  *
  * @param[in]  i32FrequencyX10000  Specify the RTC clock X10000, ex: 327736512 means 32773.6512.
  *
  * @retval     RTC_OK              RTC operation OK.
  * @retval     RTC_ERR_TIMEOUT     RTC operation abort due to timeout error.
  *
  * @details    This API is used to compensate the 32 kHz frequency by current LXT frequency for RTC application.
  */
int32_t RTC_32KCalibration(int32_t i32FrequencyX10000)
{
    int32_t i32RegInt;
    int32_t i32RegFra;

    /* Compute integer and fraction for RTC FCR register */
    i32RegInt = (i32FrequencyX10000 / 10000) - (int32_t)RTC_FCR_REFERENCE;
    i32RegFra = ((((i32FrequencyX10000 % 10000)) * 64) + 5000) / 10000;

    if (i32RegFra >= 0x40)
    {
        i32RegFra = 0x0;
        i32RegInt++;
    }

    /* Judge Integer part is reasonable */
    if ((i32RegInt >= 0) && (i32RegInt <= 31))
    {
        uint32_t u32TimeOutCnt;

        u32TimeOutCnt = SystemCoreClock << 1; /* 2 second time-out */

        while ((RTC->FREQADJ & RTC_FREQADJ_FCRBUSY_Msk) == RTC_FREQADJ_FCRBUSY_Msk)
        {
            if (--u32TimeOutCnt == 0)
            {
                return RTC_ERR_TIMEOUT;
            }
        }

        uint32_t regInt = (uint32_t)i32RegInt;  /* safe: range 0..31 */
        uint32_t regFra = (uint32_t)i32RegFra;  /* safe: range 0..63 */
        uint32_t regFREQADJ = ((regInt & 0x1FU) << 8) | (regFra & 0x3FU);
        RTC->FREQADJ = regFREQADJ;

        u32TimeOutCnt = SystemCoreClock << 1; /* 2 second time-out */

        while ((RTC->FREQADJ & RTC_FREQADJ_FCRBUSY_Msk) == RTC_FREQADJ_FCRBUSY_Msk)
        {
            if (--u32TimeOutCnt == 0)
            {
                return RTC_ERR_TIMEOUT;
            }
        }

    }

    return RTC_OK;
}

/**
  * @brief      Get Current RTC Date and Time
  *
  * @param[out] sPt     The returned pointer is specified the current RTC value. It includes: \n
  *                     u32Year: Year value                                                   \n
  *                     u32Month: Month value                                                 \n
  *                     u32Day: Day value                                                     \n
  *                     u32DayOfWeek: Day of week                                             \n
  *                     u32Hour: Hour value                                                   \n
  *                     u32Minute: Minute value                                               \n
  *                     u32Second: Second value                                               \n
  *                     u32TimeScale: [RTC_CLOCK_12 / RTC_CLOCK_24]                           \n
  *                     u8AmPm: [RTC_AM / RTC_PM]                                             \n
  *
  *
  * @details    This API is used to get the current RTC date and time value.
  */
void RTC_GetDateAndTime(S_RTC_TIME_DATA_T *sPt)
{
    uint32_t u32Tmp;

    sPt->u32TimeScale = RTC->CLKFMT & RTC_CLKFMT_24HEN_Msk;     /* 12/24-hour */
    sPt->u32DayOfWeek = RTC->WEEKDAY & RTC_WEEKDAY_WEEKDAY_Msk; /* Day of the week */

    /* Get [Date digit] data */
    g_u32hiYear  = (RTC->CAL & RTC_CAL_TENYEAR_Msk) >> RTC_CAL_TENYEAR_Pos;
    g_u32loYear  = (RTC->CAL & RTC_CAL_YEAR_Msk) >> RTC_CAL_YEAR_Pos;
    g_u32hiMonth = (RTC->CAL & RTC_CAL_TENMON_Msk) >> RTC_CAL_TENMON_Pos;
    g_u32loMonth = (RTC->CAL & RTC_CAL_MON_Msk) >> RTC_CAL_MON_Pos;
    g_u32hiDay   = (RTC->CAL & RTC_CAL_TENDAY_Msk) >> RTC_CAL_TENDAY_Pos;
    g_u32loDay   = (RTC->CAL & RTC_CAL_DAY_Msk) >> RTC_CAL_DAY_Pos;

    /* Get [Time digit] data */
    g_u32hiHour = (RTC->TIME & RTC_TIME_TENHR_Msk) >> RTC_TIME_TENHR_Pos;
    g_u32loHour = (RTC->TIME & RTC_TIME_HR_Msk) >> RTC_TIME_HR_Pos;
    g_u32hiMin  = (RTC->TIME & RTC_TIME_TENMIN_Msk) >> RTC_TIME_TENMIN_Pos;
    g_u32loMin  = (RTC->TIME & RTC_TIME_MIN_Msk) >> RTC_TIME_MIN_Pos;
    g_u32hiSec  = (RTC->TIME & RTC_TIME_TENSEC_Msk) >> RTC_TIME_TENSEC_Pos;
    g_u32loSec  = (RTC->TIME & RTC_TIME_SEC_Msk) >> RTC_TIME_SEC_Pos;

    /* Compute to 20XX year */
    u32Tmp  = (g_u32hiYear * 10UL);
    u32Tmp += g_u32loYear;
    sPt->u32Year = u32Tmp + RTC_YEAR2000;

    /* Compute 0~12 month */
    u32Tmp = (g_u32hiMonth * 10UL);
    sPt->u32Month = u32Tmp + g_u32loMonth;

    /* Compute 0~31 day */
    u32Tmp = (g_u32hiDay * 10UL);
    sPt->u32Day =  u32Tmp  + g_u32loDay;

    /* Compute 12/24 hour */
    if (sPt->u32TimeScale == RTC_CLOCK_12)
    {
        u32Tmp = (g_u32hiHour * 10UL);
        u32Tmp += g_u32loHour;
        sPt->u32Hour = u32Tmp;          /* AM: 1~12. PM: 21~32. */

        if (sPt->u32Hour >= 21UL)
        {
            sPt->u32AmPm  = RTC_PM;
            sPt->u32Hour -= 20UL;
        }
        else
        {
            sPt->u32AmPm = RTC_AM;
        }

        u32Tmp  = (g_u32hiMin  * 10UL);
        u32Tmp += g_u32loMin;
        sPt->u32Minute = u32Tmp;

        u32Tmp  = (g_u32hiSec  * 10UL);
        u32Tmp += g_u32loSec;
        sPt->u32Second = u32Tmp;
    }
    else
    {
        u32Tmp  = (g_u32hiHour * 10UL);
        u32Tmp += g_u32loHour;
        sPt->u32Hour = u32Tmp;

        u32Tmp  = (g_u32hiMin * 10UL);
        u32Tmp +=  g_u32loMin;
        sPt->u32Minute = u32Tmp;

        u32Tmp  = (g_u32hiSec * 10UL);
        u32Tmp += g_u32loSec;
        sPt->u32Second = u32Tmp;
    }
}

/**
  * @brief      Get RTC Alarm Date and Time
  *
  * @param[out] sPt     The returned pointer is specified the RTC alarm value. It includes: \n
  *                     u32Year: Year value                                                 \n
  *                     u32Month: Month value                                               \n
  *                     u32Day: Day value                                                   \n
  *                     u32DayOfWeek: Day of week                                           \n
  *                     u32Hour: Hour value                                                 \n
  *                     u32Minute: Minute value                                             \n
  *                     u32Second: Second value                                             \n
  *                     u32TimeScale: [RTC_CLOCK_12 / RTC_CLOCK_24]                         \n
  *                     u8AmPm: [RTC_AM / RTC_PM]                                           \n
  *
  *
  * @details    This API is used to get the RTC alarm date and time setting.
  */
void RTC_GetAlarmDateAndTime(S_RTC_TIME_DATA_T *sPt)
{
    uint32_t u32Tmp;

    sPt->u32TimeScale = RTC->CLKFMT & RTC_CLKFMT_24HEN_Msk;     /* 12/24-hour */
    sPt->u32DayOfWeek = RTC->WEEKDAY & RTC_WEEKDAY_WEEKDAY_Msk; /* Day of the week */

    /* Get alarm [Date digit] data */

    g_u32hiYear  = (RTC->CALM & RTC_CALM_TENYEAR_Msk) >> RTC_CALM_TENYEAR_Pos;
    g_u32loYear  = (RTC->CALM & RTC_CALM_YEAR_Msk) >> RTC_CALM_YEAR_Pos;
    g_u32hiMonth = (RTC->CALM & RTC_CALM_TENMON_Msk) >> RTC_CALM_TENMON_Pos;
    g_u32loMonth = (RTC->CALM & RTC_CALM_MON_Msk) >> RTC_CALM_MON_Pos;
    g_u32hiDay   = (RTC->CALM & RTC_CALM_TENDAY_Msk) >> RTC_CALM_TENDAY_Pos;
    g_u32loDay   = (RTC->CALM & RTC_CALM_DAY_Msk) >> RTC_CALM_DAY_Pos;

    /* Get alarm [Time digit] data */

    g_u32hiHour = (RTC->TALM & RTC_TALM_TENHR_Msk) >> RTC_TALM_TENHR_Pos;
    g_u32loHour = (RTC->TALM & RTC_TALM_HR_Msk) >> RTC_TALM_HR_Pos;
    g_u32hiMin  = (RTC->TALM & RTC_TALM_TENMIN_Msk) >> RTC_TALM_TENMIN_Pos;
    g_u32loMin  = (RTC->TALM & RTC_TALM_MIN_Msk) >> RTC_TALM_MIN_Pos;
    g_u32hiSec  = (RTC->TALM & RTC_TALM_TENSEC_Msk) >> RTC_TALM_TENSEC_Pos;
    g_u32loSec  = (RTC->TALM & RTC_TALM_SEC_Msk) >> RTC_TALM_SEC_Pos;

    /* Compute to 20XX year */
    u32Tmp  = (g_u32hiYear * 10UL);
    u32Tmp += g_u32loYear;
    sPt->u32Year = u32Tmp + RTC_YEAR2000;

    /* Compute 0~12 month */
    u32Tmp = (g_u32hiMonth * 10UL);
    sPt->u32Month = u32Tmp + g_u32loMonth;

    /* Compute 0~31 day */
    u32Tmp = (g_u32hiDay * 10UL);
    sPt->u32Day = u32Tmp + g_u32loDay;

    /* Compute 12/24 hour */
    if (sPt->u32TimeScale == RTC_CLOCK_12)
    {
        u32Tmp  = (g_u32hiHour * 10UL);
        u32Tmp += g_u32loHour;
        sPt->u32Hour = u32Tmp;          /* AM: 1~12. PM: 21~32. */

        if (sPt->u32Hour >= 21UL)
        {
            sPt->u32AmPm  = RTC_PM;
            sPt->u32Hour -= 20UL;
        }
        else
        {
            sPt->u32AmPm = RTC_AM;
        }

        u32Tmp  = (g_u32hiMin * 10UL);
        u32Tmp += g_u32loMin;
        sPt->u32Minute = u32Tmp;

        u32Tmp  = (g_u32hiSec * 10UL);
        u32Tmp += g_u32loSec;
        sPt->u32Second = u32Tmp;

    }
    else
    {
        u32Tmp  = (g_u32hiHour * 10UL);
        u32Tmp +=  g_u32loHour;
        sPt->u32Hour = u32Tmp;

        u32Tmp  = (g_u32hiMin * 10UL);
        u32Tmp += g_u32loMin;
        sPt->u32Minute = u32Tmp;

        u32Tmp  = (g_u32hiSec * 10UL);
        u32Tmp += g_u32loSec;
        sPt->u32Second = u32Tmp;
    }
}

/**
  * @brief      Update Current RTC Date and Time
  *
  * @param[in]  sPt     Specify the time property and current date and time. It includes:           \n
  *                     u32Year: Year value, range between 2000 ~ 2099.                             \n
  *                     u32Month: Month value, range between 1 ~ 12.                                \n
  *                     u32Day: Day value, range between 1 ~ 31.                                    \n
  *                     u32DayOfWeek: Day of the week. [RTC_SUNDAY / RTC_MONDAY / RTC_TUESDAY /
  *                                                     RTC_WEDNESDAY / RTC_THURSDAY / RTC_FRIDAY /
  *                                                     RTC_SATURDAY]                               \n
  *                     u32Hour: Hour value, range between 0 ~ 23.                                  \n
  *                     u32Minute: Minute value, range between 0 ~ 59.                              \n
  *                     u32Second: Second value, range between 0 ~ 59.                              \n
  *                     u32TimeScale: [RTC_CLOCK_12 / RTC_CLOCK_24]                                 \n
  *                     u8AmPm: [RTC_AM / RTC_PM]                                                   \n
  *
  *
  * @details    This API is used to update current date and time to RTC.
  */
void RTC_SetDateAndTime(S_RTC_TIME_DATA_T *sPt)
{
    if (sPt != ((void *) 0))
    {
        /*-----------------------------------------------------------------------------------------------------*/
        /* Set RTC 24/12 hour setting and Day of the Week                                                      */
        /*-----------------------------------------------------------------------------------------------------*/

        if (sPt->u32TimeScale == RTC_CLOCK_12)
        {
            RTC->CLKFMT &= ~RTC_CLKFMT_24HEN_Msk;

            /*-------------------------------------------------------------------------------------------------*/
            /* Important, range of 12-hour PM mode is 21 up to 32                                               */
            /*-------------------------------------------------------------------------------------------------*/
            if (sPt->u32AmPm == RTC_PM)
            {
                sPt->u32Hour += 20UL;
            }
        }
        else
        {
            RTC->CLKFMT |= RTC_CLKFMT_24HEN_Msk;
        }

        /* Set Day of the Week */

        RTC->WEEKDAY = sPt->u32DayOfWeek;

        /*-----------------------------------------------------------------------------------------------------*/
        /* Set RTC Current Date and Time                                                                       */
        /*-----------------------------------------------------------------------------------------------------*/
        uint32_t u32RegCAL = 0;
        uint32_t u32RegTIME = 0;

        u32RegCAL  = (((sPt->u32Year - RTC_YEAR2000) / 10UL) << RTC_CAL_TENYEAR_Pos);
        u32RegCAL |= (((sPt->u32Year - RTC_YEAR2000) % 10UL) << RTC_CAL_YEAR_Pos);
        u32RegCAL |= ((sPt->u32Month  / 10UL) << RTC_CAL_TENMON_Pos);
        u32RegCAL |= ((sPt->u32Month  % 10UL) << RTC_CAL_MON_Pos);
        u32RegCAL |= ((sPt->u32Day    / 10UL) << RTC_CAL_TENDAY_Pos);
        u32RegCAL |= (sPt->u32Day     % 10UL);

        u32RegTIME  = ((sPt->u32Hour   / 10UL) << RTC_TIME_TENHR_Pos);
        u32RegTIME |= ((sPt->u32Hour   % 10UL) << RTC_TIME_HR_Pos);
        u32RegTIME |= ((sPt->u32Minute / 10UL) << RTC_TIME_TENMIN_Pos);
        u32RegTIME |= ((sPt->u32Minute % 10UL) << RTC_TIME_MIN_Pos);
        u32RegTIME |= ((sPt->u32Second / 10UL) << RTC_TIME_TENSEC_Pos);
        u32RegTIME |= (sPt->u32Second % 10UL);

        /*-----------------------------------------------------------------------------------------------------*/
        /* Set RTC Calender and Time Loading                                                                   */
        /*-----------------------------------------------------------------------------------------------------*/

        RTC->CAL  = (uint32_t)u32RegCAL;

        RTC->TIME = (uint32_t)u32RegTIME;
    }
}

/**
  * @brief      Update RTC Alarm Date and Time
  *
  * @param[in]  sPt     Specify the time property and alarm date and time. It includes:             \n
  *                     u32Year: Year value, range between 2000 ~ 2099.                             \n
  *                     u32Month: Month value, range between 1 ~ 12.                                \n
  *                     u32Day: Day value, range between 1 ~ 31.                                    \n
  *                     u32DayOfWeek: Day of the week. [RTC_SUNDAY / RTC_MONDAY / RTC_TUESDAY /
  *                                                     RTC_WEDNESDAY / RTC_THURSDAY / RTC_FRIDAY /
  *                                                     RTC_SATURDAY]                               \n
  *                     u32Hour: Hour value, range between 0 ~ 23.                                  \n
  *                     u32Minute: Minute value, range between 0 ~ 59.                              \n
  *                     u32Second: Second value, range between 0 ~ 59.                              \n
  *                     u32TimeScale: [RTC_CLOCK_12 / RTC_CLOCK_24]                                 \n
  *                     u8AmPm: [RTC_AM / RTC_PM]                                                   \n
  *
  *
  * @details    This API is used to update alarm date and time setting to RTC.
  */
void RTC_SetAlarmDateAndTime(S_RTC_TIME_DATA_T *sPt)
{
    if (sPt != ((void *) 0))
    {
        /*-----------------------------------------------------------------------------------------------------*/
        /* Set RTC 24/12 hour setting and Day of the Week                                                      */
        /*-----------------------------------------------------------------------------------------------------*/

        if (sPt->u32TimeScale == RTC_CLOCK_12)
        {
            RTC->CLKFMT &= ~RTC_CLKFMT_24HEN_Msk;

            /*-------------------------------------------------------------------------------------------------*/
            /* Important, range of 12-hour PM mode is 21 up to 32                                               */
            /*-------------------------------------------------------------------------------------------------*/
            if (sPt->u32AmPm == RTC_PM)
            {
                sPt->u32Hour += 20UL;
            }
        }
        else
        {
            RTC->CLKFMT |= RTC_CLKFMT_24HEN_Msk;
        }

        /*-----------------------------------------------------------------------------------------------------*/
        /* Set RTC Alarm Date and Time                                                                         */
        /*-----------------------------------------------------------------------------------------------------*/
        uint32_t u32RegCALM;
        uint32_t u32RegTALM;

        u32RegCALM  = (((sPt->u32Year - RTC_YEAR2000) / 10UL) << RTC_CAL_TENYEAR_Pos);
        u32RegCALM |= (((sPt->u32Year - RTC_YEAR2000) % 10UL) << RTC_CAL_YEAR_Pos);
        u32RegCALM |= ((sPt->u32Month  / 10UL) << RTC_CAL_TENMON_Pos);
        u32RegCALM |= ((sPt->u32Month  % 10UL) << RTC_CAL_MON_Pos);
        u32RegCALM |= ((sPt->u32Day    / 10UL) << RTC_CAL_TENDAY_Pos);
        u32RegCALM |= (sPt->u32Day    % 10UL);

        u32RegTALM  = ((sPt->u32Hour   / 10UL) << RTC_TIME_TENHR_Pos);
        u32RegTALM |= ((sPt->u32Hour   % 10UL) << RTC_TIME_HR_Pos);
        u32RegTALM |= ((sPt->u32Minute / 10UL) << RTC_TIME_TENMIN_Pos);
        u32RegTALM |= ((sPt->u32Minute % 10UL) << RTC_TIME_MIN_Pos);
        u32RegTALM |= ((sPt->u32Second / 10UL) << RTC_TIME_TENSEC_Pos);
        u32RegTALM |= (sPt->u32Second % 10UL);


        RTC->CALM = (uint32_t)u32RegCALM;

        RTC->TALM = (uint32_t)u32RegTALM;
    }
}

/**
  * @brief      Update RTC Current Date
  *
  * @param[in]  u32Year         The year calendar digit of current RTC setting.
  * @param[in]  u32Month        The month calendar digit of current RTC setting.
  * @param[in]  u32Day          The day calendar digit of current RTC setting.
  * @param[in]  u32DayOfWeek    The Day of the week. [RTC_SUNDAY / RTC_MONDAY / RTC_TUESDAY /
  *                                                   RTC_WEDNESDAY / RTC_THURSDAY / RTC_FRIDAY /
  *                                                   RTC_SATURDAY]
  *
  *
  * @details    This API is used to update current date to RTC.
  */
void RTC_SetDate(uint32_t u32Year, uint32_t u32Month, uint32_t u32Day, uint32_t u32DayOfWeek)
{
    uint32_t u32RegCAL;

    u32RegCAL  = (((u32Year - RTC_YEAR2000) / 10UL) << RTC_CAL_TENYEAR_Pos);
    u32RegCAL |= (((u32Year - RTC_YEAR2000) % 10UL) << RTC_CAL_YEAR_Pos);
    u32RegCAL |= ((u32Month / 10UL) << RTC_CAL_TENMON_Pos);
    u32RegCAL |= ((u32Month % 10UL) << RTC_CAL_MON_Pos);
    u32RegCAL |= ((u32Day   / 10UL) << RTC_CAL_TENDAY_Pos);
    u32RegCAL |= (u32Day   % 10UL);

    /* Set Day of the Week */

    RTC->WEEKDAY = u32DayOfWeek & RTC_WEEKDAY_WEEKDAY_Msk;

    /* Set RTC Calender Loading */

    RTC->CAL = (uint32_t)u32RegCAL;
}

/**
  * @brief      Update RTC Current Time
  *
  * @param[in]  u32Hour         The hour time digit of current RTC setting.
  * @param[in]  u32Minute       The minute time digit of current RTC setting.
  * @param[in]  u32Second       The second time digit of current RTC setting.
  * @param[in]  u32TimeMode     The 24-Hour / 12-Hour Time Scale Selection. [RTC_CLOCK_12 / RTC_CLOCK_24]
  * @param[in]  u32AmPm         12-hour time scale with AM and PM indication. Only Time Scale select 12-hour used. [RTC_AM / RTC_PM]
  *
  *
  * @details    This API is used to update current time to RTC.
  */
void RTC_SetTime(uint32_t u32Hour, uint32_t u32Minute, uint32_t u32Second, uint32_t u32TimeMode, uint32_t u32AmPm)
{
    uint32_t u32RegTIME;
    uint32_t u32Hour_temp = u32Hour;

    /* Important, range of 12-hour PM mode is 21 up to 32 */
    if ((u32TimeMode == RTC_CLOCK_12) && (u32AmPm == RTC_PM))
    {
        u32Hour_temp += 20UL;
    }

    u32RegTIME  = ((u32Hour_temp   / 10UL) << RTC_TIME_TENHR_Pos);
    u32RegTIME |= ((u32Hour_temp   % 10UL) << RTC_TIME_HR_Pos);
    u32RegTIME |= ((u32Minute / 10UL) << RTC_TIME_TENMIN_Pos);
    u32RegTIME |= ((u32Minute % 10UL) << RTC_TIME_MIN_Pos);
    u32RegTIME |= ((u32Second / 10UL) << RTC_TIME_TENSEC_Pos);
    u32RegTIME |= (u32Second % 10UL);

    /*-----------------------------------------------------------------------------------------------------*/
    /* Set RTC 24/12 hour setting and Day of the Week                                                      */
    /*-----------------------------------------------------------------------------------------------------*/

    if (u32TimeMode == RTC_CLOCK_12)
    {
        RTC->CLKFMT &= ~RTC_CLKFMT_24HEN_Msk;
    }
    else
    {
        RTC->CLKFMT |= RTC_CLKFMT_24HEN_Msk;
    }


    RTC->TIME = (uint32_t)u32RegTIME;
}

/**
  * @brief      Update RTC Alarm Date
  *
  * @param[in]  u32Year         The year calendar digit of RTC alarm setting.
  * @param[in]  u32Month        The month calendar digit of RTC alarm setting.
  * @param[in]  u32Day          The day calendar digit of RTC alarm setting.
  *
  *
  * @details    This API is used to update alarm date setting to RTC.
  */
void RTC_SetAlarmDate(uint32_t u32Year, uint32_t u32Month, uint32_t u32Day)
{
    uint32_t u32RegCALM;

    u32RegCALM  = ((u32Year - RTC_YEAR2000) / 10UL) << RTC_CAL_TENYEAR_Pos;
    u32RegCALM |= (((u32Year - RTC_YEAR2000) % 10UL) << RTC_CAL_YEAR_Pos);
    u32RegCALM |= ((u32Month / 10UL) << RTC_CAL_TENMON_Pos);
    u32RegCALM |= ((u32Month % 10UL) << RTC_CAL_MON_Pos);
    u32RegCALM |= ((u32Day   / 10UL) << RTC_CAL_TENDAY_Pos);
    u32RegCALM |= (u32Day   % 10UL);



    /* Set RTC Alarm Date */
    RTC->CALM = (uint32_t)u32RegCALM;
}

/**
  * @brief      Update RTC Alarm Time
  *
  * @param[in]  u32Hour         The hour time digit of RTC alarm setting.
  * @param[in]  u32Minute       The minute time digit of RTC alarm setting.
  * @param[in]  u32Second       The second time digit of RTC alarm setting.
  * @param[in]  u32TimeMode     The 24-Hour / 12-Hour Time Scale Selection. [RTC_CLOCK_12 / RTC_CLOCK_24]
  * @param[in]  u32AmPm         12-hour time scale with AM and PM indication. Only Time Scale select 12-hour used. [RTC_AM / RTC_PM]
  *
  *
  * @details    This API is used to update alarm time setting to RTC.
  */
void RTC_SetAlarmTime(uint32_t u32Hour, uint32_t u32Minute, uint32_t u32Second, uint32_t u32TimeMode, uint32_t u32AmPm)
{
    uint32_t u32RegTALM;
    uint32_t u32Hour_temp = u32Hour;

    /* Important, range of 12-hour PM mode is 21 up to 32 */
    if ((u32TimeMode == RTC_CLOCK_12) && (u32AmPm == RTC_PM))
    {
        u32Hour_temp += 20UL;
    }

    u32RegTALM  = ((u32Hour_temp   / 10UL) << RTC_TIME_TENHR_Pos);
    u32RegTALM |= ((u32Hour_temp   % 10UL) << RTC_TIME_HR_Pos);
    u32RegTALM |= ((u32Minute / 10UL) << RTC_TIME_TENMIN_Pos);
    u32RegTALM |= ((u32Minute % 10UL) << RTC_TIME_MIN_Pos);
    u32RegTALM |= ((u32Second / 10UL) << RTC_TIME_TENSEC_Pos);
    u32RegTALM |= (u32Second % 10UL);

    /*-----------------------------------------------------------------------------------------------------*/
    /* Set RTC 24/12 hour setting and Day of the Week                                                      */
    /*-----------------------------------------------------------------------------------------------------*/

    if (u32TimeMode == RTC_CLOCK_12)
    {
        RTC->CLKFMT &= ~RTC_CLKFMT_24HEN_Msk;
    }
    else
    {
        RTC->CLKFMT |= RTC_CLKFMT_24HEN_Msk;
    }

    /* Set RTC Alarm Time */

    RTC->TALM = (uint32_t)u32RegTALM;
}

/**
  * @brief      Set RTC Alarm Date Mask Function
  *
  * @param[in]  u8IsTenYMsk     1: enable 10-Year digit alarm mask; 0: disabled.
  * @param[in]  u8IsYMsk        1: enable 1-Year digit alarm mask; 0: disabled.
  * @param[in]  u8IsTenMMsk     1: enable 10-Mon digit alarm mask; 0: disabled.
  * @param[in]  u8IsMMsk        1: enable 1-Mon digit alarm mask; 0: disabled.
  * @param[in]  u8IsTenDMsk     1: enable 10-Day digit alarm mask; 0: disabled.
  * @param[in]  u8IsDMsk        1: enable 1-Day digit alarm mask; 0: disabled.
  *
  *
  * @details    This API is used to enable or disable RTC alarm date mask function.
  */
void RTC_SetAlarmDateMask(uint8_t u8IsTenYMsk, uint8_t u8IsYMsk, uint8_t u8IsTenMMsk, uint8_t u8IsMMsk, uint8_t u8IsTenDMsk, uint8_t u8IsDMsk)
{

    RTC->CAMSK = ((uint32_t)u8IsTenYMsk << RTC_CAMSK_MTENYEAR_Pos) |
                 ((uint32_t)u8IsYMsk    << RTC_CAMSK_MYEAR_Pos) |
                 ((uint32_t)u8IsTenMMsk << RTC_CAMSK_MTENMON_Pos) |
                 ((uint32_t)u8IsMMsk    << RTC_CAMSK_MMON_Pos) |
                 ((uint32_t)u8IsTenDMsk << RTC_CAMSK_MTENDAY_Pos) |
                 ((uint32_t)u8IsDMsk    << RTC_CAMSK_MDAY_Pos);
}

/**
  * @brief      Set RTC Alarm Time Mask Function
  *
  * @param[in]  u8IsTenHMsk     1: enable 10-Hour digit alarm mask; 0: disabled.
  * @param[in]  u8IsHMsk        1: enable 1-Hour digit alarm mask; 0: disabled.
  * @param[in]  u8IsTenMMsk     1: enable 10-Min digit alarm mask; 0: disabled.
  * @param[in]  u8IsMMsk        1: enable 1-Min digit alarm mask; 0: disabled.
  * @param[in]  u8IsTenSMsk     1: enable 10-Sec digit alarm mask; 0: disabled.
  * @param[in]  u8IsSMsk        1: enable 1-Sec digit alarm mask; 0: disabled.
  *
  *
  * @details    This API is used to enable or disable RTC alarm time mask function.
  */
void RTC_SetAlarmTimeMask(uint8_t u8IsTenHMsk, uint8_t u8IsHMsk, uint8_t u8IsTenMMsk, uint8_t u8IsMMsk, uint8_t u8IsTenSMsk, uint8_t u8IsSMsk)
{

    RTC->TAMSK = ((uint32_t)u8IsTenHMsk << RTC_TAMSK_MTENHR_Pos) |
                 ((uint32_t)u8IsHMsk    << RTC_TAMSK_MHR_Pos) |
                 ((uint32_t)u8IsTenMMsk << RTC_TAMSK_MTENMIN_Pos) |
                 ((uint32_t)u8IsMMsk    << RTC_TAMSK_MMIN_Pos) |
                 ((uint32_t)u8IsTenSMsk << RTC_TAMSK_MTENSEC_Pos) |
                 ((uint32_t)u8IsSMsk    << RTC_TAMSK_MSEC_Pos);
}

/**
  * @brief      Get Day of the Week
  *
  *
  * @retval     0   RTC_SUNDAY
  * @retval     1   RTC_MONDAY
  * @retval     2   RTC_TUESDAY
  * @retval     3   RTC_WEDNESDAY
  * @retval     4   RTC_THURSDAY
  * @retval     5   RTC_FRIDAY
  * @retval     6   RTC_SATURDAY
  *
  * @details    This API is used to get day of the week of current RTC date.
  */
uint32_t RTC_GetDayOfWeek(void)
{
    return (RTC->WEEKDAY & RTC_WEEKDAY_WEEKDAY_Msk);
}

/**
  * @brief      Set RTC Tick Period Time
  *
  * @param[in]  u32TickSelection    It is used to set the RTC tick period time for Periodic Time Tick request. \n
  *                                 It consists of:
  *                                     - \ref RTC_TICK_1_SEC     : Time tick is 1 second
  *                                     - \ref RTC_TICK_1_2_SEC   : Time tick is 1/2 second
  *                                     - \ref RTC_TICK_1_4_SEC   : Time tick is 1/4 second
  *                                     - \ref RTC_TICK_1_8_SEC   : Time tick is 1/8 second
  *                                     - \ref RTC_TICK_1_16_SEC  : Time tick is 1/16 second
  *                                     - \ref RTC_TICK_1_32_SEC  : Time tick is 1/32 second
  *                                     - \ref RTC_TICK_1_64_SEC  : Time tick is 1/64 second
  *                                     - \ref RTC_TICK_1_128_SEC : Time tick is 1/128 second
  *
  *
  * @details    This API is used to set RTC tick period time for each tick interrupt.
  */
void RTC_SetTickPeriod(uint32_t u32TickSelection)
{
    RTC->TICK = (RTC->TICK & ~RTC_TICK_TICK_Msk) | u32TickSelection;
}

/**
  * @brief      Enable RTC Interrupt
  *
  * @param[in]  u32IntFlagMask      Specify the interrupt source. It consists of:
  *                                     - \ref RTC_INTEN_ALMIEN_Msk   : Alarm interrupt
  *                                     - \ref RTC_INTEN_TICKIEN_Msk  : Tick interrupt
  *
  *
  * @details    This API is used to enable the specify RTC interrupt function.
  */
void RTC_EnableInt(uint32_t u32IntFlagMask)
{

    RTC->INTEN |= u32IntFlagMask;
}

/**
  * @brief      Disable RTC Interrupt
  *
  * @param[in]  u32IntFlagMask      Specify the interrupt source. It consists of:
  *                                     - \ref RTC_INTEN_ALMIEN_Msk   : Alarm interrupt
  *                                     - \ref RTC_INTEN_TICKIEN_Msk  : Tick interrupt
  *
  * @details    This API is used to disable the specify RTC interrupt function.
  */
void RTC_DisableInt(uint32_t u32IntFlagMask)
{

    RTC->INTEN  &= ~u32IntFlagMask;

    RTC->INTSTS = u32IntFlagMask;
}

/**
  * @brief      Set RTC Clock Source
  *
  * @param[in]  u32ClkSrc       u32ClkSrc is the RTC clock source. It could be
  *                             - \ref RTC_CLOCK_SOURCE_LXT
  *                             - \ref RTC_CLOCK_SOURCE_LIRC
  *
  * @retval     RTC_CLOCK_SOURCE_LXT
  * @retval     RTC_CLOCK_SOURCE_LIRC
  *
  * @details    This API is used to get the setting of RTC clock source.
  *             User must to enable the selected clock source by themselves executing perform this API.
  */
uint32_t RTC_SetClockSource(uint32_t u32ClkSrc)
{
    if (u32ClkSrc == RTC_CLOCK_SOURCE_LXT)
    {
        /* RTC clock source is external LXT */
        RTC->LXTCTL &= ~RTC_LXTCTL_RTCCKSEL_Msk;

        return RTC_CLOCK_SOURCE_LXT;
    }
    else
    {
        /* Set the default RTC clock source is LIRC */
        RTC->LXTCTL |= RTC_LXTCTL_RTCCKSEL_Msk;

        return RTC_CLOCK_SOURCE_LIRC;
    }
}


/** @} end of group RTC_EXPORTED_FUNCTIONS */
/** @} end of group RTC_Driver */
/** @} end of group Standard_Driver */
