/**************************************************************************//**
 * @file     epwm.h
 * @version  V3.00
 * @brief    Keep EPWM driver interface to utilize PWM header file and macro
 *
 * @copyright SPDX-License-Identifier: Apache-2.0
 * @copyright Copyright (C) 2026 Nuvoton Technology Corp. All rights reserved.
 *****************************************************************************/
#ifndef __EPWM_H__
#define __EPWM_H__

#ifdef __cplusplus
extern "C"
{
#endif


/** @addtogroup Standard_Driver Standard Driver
  @{
*/

/** @addtogroup EPWM_Driver EPWM Driver
  @{
*/

/** @addtogroup EPWM_EXPORTED_CONSTANTS PWM Exported Constants
  @{
*/

#define EPWM_T 				PWM_T
#define EPWM_POLCTL_PINV0_Pos 		PWM_POLCTL_PINV0_Pos

#define EPWM0				PWM0
#define EPWM1				PWM1

#define EPWM_CAPTURE_INT_FALLING_LATCH	PWM_CAPTURE_INT_FALLING_LATCH
#define EPWM_CAPTURE_INT_RISING_LATCH	PWM_CAPTURE_INT_RISING_LATCH
#define EPWM_CAPIF_CFLIF0_Pos		PWM_CAPIF_CFLIF0_Pos
#define EPWM_CAPIF_CRLIF0_Pos		PWM_CAPIF_CRLIF0_Pos

#define EPWM_GET_CAPTURE_RISING_DATA	PWM_GET_CAPTURE_RISING_DATA
#define EPWM_GET_CAPTURE_FALLING_DATA	PWM_GET_CAPTURE_FALLING_DATA
#define EPWM_CAPIF_CFLIF0_Msk		PWM_CAPIF_CFLIF0_Msk
#define EPWM_CAPIF_CRLIF0_Msk		PWM_CAPIF_CRLIF0_Msk

#define CLK_CLKSEL2_EPWM0SEL_Msk	CLK_CLKSEL2_PWM0SEL_Msk
#define CLK_CLKSEL2_EPWM1SEL_Msk	CLK_CLKSEL2_PWM1SEL_Msk

/** @} end of group PWM_EXPORTED_CONSTANTS */

/** @addtogroup EPWM_EXPORTED_FUNCTIONS
  @{
*/

/*---------------------------------------------------------------------------------------------------------*/
/* Define EPWM functions prototype                                                                          */
/*---------------------------------------------------------------------------------------------------------*/
#define EPWM_ConfigCaptureChannel	PWM_ConfigCaptureChannel
#define EPWM_ConfigOutputChannel	PWM_ConfigOutputChannel
#define EPWM_Start			PWM_Start
#define EPWM_Stop			PWM_Stop
#define EPWM_ForceStop			PWM_ForceStop
#define EPWM_EnableADCTrigger		PWM_EnableADCTrigger
#define EPWM_DisableADCTrigger		PWM_DisableADCTrigger
#define EPWM_ClearADCTriggerFlag	PWM_ClearADCTriggerFlag
#define EPWM_GetADCTriggerFlag		PWM_GetADCTriggerFlag
#define EPWM_EnableDACTrigger		PWM_EnableDACTrigger
#define EPWM_DisableDACTrigger		PWM_DisableDACTrigger
#define EPWM_ClearDACTriggerFlag	PWM_ClearDACTriggerFlag
#define EPWM_GetDACTriggerFlag		PWM_GetDACTriggerFlag
#define EPWM_EnableFaultBrake		PWM_EnableFaultBrake
#define EPWM_EnableCapture		PWM_EnableCapture
#define EPWM_DisableCapture		PWM_DisableCapture
#define EPWM_EnableOutput		PWM_EnableOutput
#define EPWM_DisableOutput		PWM_DisableOutput
#define EPWM_EnablePDMA			PWM_EnablePDMA
#define EPWM_DisablePDMA		PWM_DisablePDMA
#define EPWM_EnableDeadZone		PWM_EnableDeadZone
#define EPWM_DisableDeadZone		PWM_DisableDeadZone
#define EPWM_EnableCaptureInt		PWM_EnableCaptureInt
#define EPWM_DisableCaptureInt		PWM_DisableCaptureInt
#define EPWM_ClearCaptureIntFlag	PWM_ClearCaptureIntFlag
#define EPWM_GetCaptureIntFlag		PWM_GetCaptureIntFlag
#define EPWM_EnableDutyInt		PWM_EnableDutyInt
#define EPWM_DisableDutyInt		PWM_DisableDutyInt
#define EPWM_ClearDutyIntFlag		PWM_ClearDutyIntFlag
#define EPWM_GetDutyIntFlag		PWM_GetDutyIntFlag
#define EPWM_EnableFaultBrakeInt	PWM_EnableFaultBrakeInt
#define EPWM_DisableFaultBrakeInt	PWM_DisableFaultBrakeInt
#define EPWM_ClearFaultBrakeIntFlag	PWM_ClearFaultBrakeIntFlag
#define EPWM_GetFaultBrakeIntFlag	PWM_GetFaultBrakeIntFlag
#define EPWM_EnablePeriodInt		PWM_EnablePeriodInt
#define EPWM_DisablePeriodInt		PWM_DisablePeriodInt
#define EPWM_ClearPeriodIntFlag		PWM_ClearPeriodIntFlag
#define EPWM_GetPeriodIntFlag		PWM_GetPeriodIntFlag
#define EPWM_EnableZeroInt		PWM_EnableZeroInt
#define EPWM_DisableZeroInt		PWM_DisableZeroInt
#define EPWM_ClearZeroIntFlag		PWM_ClearZeroIntFlag
#define EPWM_GetZeroIntFlag		PWM_GetZeroIntFlag
#define EPWM_EnableLoadMode		PWM_EnableLoadMode
#define EPWM_DisableLoadMode		PWM_DisableLoadMode
#define EPWM_SetClockSource		PWM_SetClockSource
#define EPWM_EnableBrakeNoiseFilter	PWM_EnableBrakeNoiseFilter
#define EPWM_DisableBrakeNoiseFilter	PWM_DisableBrakeNoiseFilter
#define EPWM_EnableBrakePinInverse	PWM_EnableBrakePinInverse
#define EPWM_DisableBrakePinInverse	PWM_DisableBrakePinInverse
#define EPWM_SetBrakePinSource		PWM_SetBrakePinSource
#define EPWM_GetWrapAroundFlag		PWM_GetWrapAroundFlag
#define EPWM_ClearWrapAroundFlag	PWM_ClearWrapAroundFlag
#define EPWM_EnableAcc			PWM_EnableAcc
#define EPWM_DisableAcc			PWM_DisableAcc
#define EPWM_EnableAccInt		PWM_EnableAccInt
#define EPWM_DisableAccInt		PWM_DisableAccInt
#define EPWM_ClearAccInt		PWM_ClearAccInt
#define EPWM_GetAccInt			PWM_GetAccInt
#define EPWM_EnableAccPDMA		PWM_EnableAccPDMA
#define EPWM_DisableAccPDMA		PWM_DisableAccPDMA
#define EPWM_EnableAccStopMode		PWM_EnableAccStopMode
#define EPWM_DisableAccStopMode		PWM_DisableAccStopMode
#define EPWM_EnableExtEventTrigger	PWM_EnableExtEventTrigger
#define EPWM_DisableExtEventTrigger	PWM_DisableExtEventTrigger

/** @} end of group EPWM_EXPORTED_FUNCTIONS */
/** @} end of group EPWM_Driver */
/** @} end of group Standard_Driver */

#ifdef __cplusplus
}
#endif

#endif //__EPWM_H__
