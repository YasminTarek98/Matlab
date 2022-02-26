/*
 * File: calcMBD.c
 *
 * Code generated for Simulink model 'calcMBD'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Feb 26 09:15:29 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "calcMBD.h"
#include "calcMBD_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_calcMBD_T calcMBD_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_calcMBD_T calcMBD_Y;

/* Real-time model */
RT_MODEL_calcMBD_T calcMBD_M_;
RT_MODEL_calcMBD_T *const calcMBD_M = &calcMBD_M_;

/* Model step function */
void calcMBD_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<Root>/Add'
   */
  calcMBD_Y.Out1 = calcMBD_U.In1 + calcMBD_U.In2;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<Root>/Subtract'
   */
  calcMBD_Y.Out2 = calcMBD_U.In1 - calcMBD_U.In2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<Root>/Product'
   */
  calcMBD_Y.Out3 = calcMBD_U.In1 * calcMBD_U.In2;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<Root>/Divide'
   */
  calcMBD_Y.Out4 = calcMBD_U.In1 / calcMBD_U.In2;
}

/* Model initialize function */
void calcMBD_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(calcMBD_M, (NULL));

  /* external inputs */
  (void)memset(&calcMBD_U, 0, sizeof(ExtU_calcMBD_T));

  /* external outputs */
  (void) memset((void *)&calcMBD_Y, 0,
                sizeof(ExtY_calcMBD_T));
}

/* Model terminate function */
void calcMBD_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
