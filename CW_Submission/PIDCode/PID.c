/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PID.c
 *
 * Code generated for Simulink model 'PID'.
 *
 * Model version                  : 9.0
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Sat Nov 27 02:04:48 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PID.h"
#include "PID_private.h"

/* Block states (default storage) */
DW_PID_T PID_DW;

/* External inputs (root inport signals with default storage) */
ExtU_PID_T PID_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_PID_T PID_Y;

/* Real-time model */
static RT_MODEL_PID_T PID_M_;
RT_MODEL_PID_T *const PID_M = &PID_M_;

/* Model step function */
void PID_step(void)
{
  real32_T rtb_Yik;

  /* Sum: '<Root>/Add1' incorporates:
   *  Gain: '<Root>/SampleTime'
   *  Inport: '<Root>/e(k)'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_Yik = (real32_T)(0.01 * PID_U.ek) + PID_DW.UnitDelay_DSTATE;

  /* Outport: '<Root>/y(k)' incorporates:
   *  Gain: '<Root>/Gain3'
   *  Gain: '<Root>/ProportionalGain'
   *  Inport: '<Root>/e(k)'
   *  Sum: '<Root>/Add'
   *  Sum: '<Root>/Add2'
   *  UnitDelay: '<Root>/Unit Delay1'
   */
  PID_Y.yk = (real32_T)(((real32_T)PID_U.ek - (real32_T)PID_DW.UnitDelay1_DSTATE)
                        * 100.0) + ((real32_T)PID_U.ek + rtb_Yik);

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  PID_DW.UnitDelay_DSTATE = rtb_Yik;

  /* Update for UnitDelay: '<Root>/Unit Delay1' incorporates:
   *  Inport: '<Root>/e(k)'
   */
  PID_DW.UnitDelay1_DSTATE = PID_U.ek;
}

/* Model initialize function */
void PID_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(PID_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&PID_DW, 0,
                sizeof(DW_PID_T));

  /* external inputs */
  PID_U.ek = 0.0;

  /* external outputs */
  PID_Y.yk = 0.0F;
}

/* Model terminate function */
void PID_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
