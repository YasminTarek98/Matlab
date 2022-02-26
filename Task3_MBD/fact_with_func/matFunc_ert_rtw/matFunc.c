/*
 * File: matFunc.c
 *
 * Code generated for Simulink model 'matFunc'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Feb 26 09:33:23 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "matFunc.h"
#include "matFunc_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_matFunc_T matFunc_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_matFunc_T matFunc_Y;

/* Real-time model */
RT_MODEL_matFunc_T matFunc_M_;
RT_MODEL_matFunc_T *const matFunc_M = &matFunc_M_;

/* Model step function */
void matFunc_step(void)
{
  int32_T i;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/In1'
   */
  matFunc_Y.Out1 = 1.0;
  for (i = 0; i < (int32_T)matFunc_U.In1; i++) {
    matFunc_Y.Out1 *= 1.0 + (real_T)i;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */
}

/* Model initialize function */
void matFunc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(matFunc_M, (NULL));

  /* external inputs */
  matFunc_U.In1 = 0.0;

  /* external outputs */
  matFunc_Y.Out1 = 0.0;
}

/* Model terminate function */
void matFunc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
