/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PID.h
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

#ifndef RTW_HEADER_PID_h_
#define RTW_HEADER_PID_h_
#include <stddef.h>
#include <string.h>
#ifndef PID_COMMON_INCLUDES_
#define PID_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* PID_COMMON_INCLUDES_ */

#include "PID_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay1_DSTATE;            /* '<Root>/Unit Delay1' */
  real32_T UnitDelay_DSTATE;           /* '<Root>/Unit Delay' */
} DW_PID_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T ek;                           /* '<Root>/e(k)' */
} ExtU_PID_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T yk;                         /* '<Root>/y(k)' */
} ExtY_PID_T;

/* Real-time Model Data Structure */
struct tag_RTM_PID_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_PID_T PID_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_PID_T PID_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_PID_T PID_Y;

/* Model entry point functions */
extern void PID_initialize(void);
extern void PID_step(void);
extern void PID_terminate(void);

/* Real-time Model object */
extern RT_MODEL_PID_T *const PID_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/DifferentialGain' : Eliminated nontunable gain of 1
 * Block '<Root>/IntegralGain' : Eliminated nontunable gain of 1
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'PID'
 */
#endif                                 /* RTW_HEADER_PID_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
