/*
 * File: factorial_SF.c
 *
 * Code generated for Simulink model 'factorial_SF'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Mar  3 14:43:29 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "factorial_SF.h"
#include "factorial_SF_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_factorial_SF_T factorial_SF_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_factorial_SF_T factorial_SF_Y;

/* Real-time model */
RT_MODEL_factorial_SF_T factorial_SF_M_;
RT_MODEL_factorial_SF_T *const factorial_SF_M = &factorial_SF_M_;

/* Model step function */
void factorial_SF_step(void)
{
  real_T data;

  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/Input'
   */
  factorial_SF_Y.Output = 1.0;
  data = factorial_SF_U.Input;
  do {
    factorial_SF_Y.Output *= data;
    data--;
  } while (data > 1.0);
}

/* Model initialize function */
void factorial_SF_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(factorial_SF_M, (NULL));

  /* external inputs */
  factorial_SF_U.Input = 0.0;

  /* external outputs */
  factorial_SF_Y.Output = 0.0;
}

/* Model terminate function */
void factorial_SF_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
