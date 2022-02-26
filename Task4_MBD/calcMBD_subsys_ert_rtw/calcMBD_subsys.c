/*
 * File: calcMBD_subsys.c
 *
 * Code generated for Simulink model 'calcMBD_subsys'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Feb 26 09:25:08 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "calcMBD_subsys.h"
#include "calcMBD_subsys_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_calcMBD_subsys_T calcMBD_subsys_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_calcMBD_subsys_T calcMBD_subsys_Y;

/* Real-time model */
RT_MODEL_calcMBD_subsys_T calcMBD_subsys_M_;
RT_MODEL_calcMBD_subsys_T *const calcMBD_subsys_M = &calcMBD_subsys_M_;

/* Output and update for atomic system: '<Root>/basicCalc' */
void calcMBD_subsys_basicCalc(real_T rtu_In1, real_T rtu_In2, real_T *rty_Out1,
  real_T *rty_Out2, real_T *rty_Out3, real_T *rty_Out4)
{
  /* Sum: '<S1>/Add' */
  *rty_Out1 = rtu_In1 + rtu_In2;

  /* Product: '<S1>/Divide' */
  *rty_Out4 = rtu_In1 / rtu_In2;

  /* Product: '<S1>/Product' */
  *rty_Out3 = rtu_In1 * rtu_In2;

  /* Sum: '<S1>/Subtract' */
  *rty_Out2 = rtu_In1 - rtu_In2;
}

/* Model step function */
void calcMBD_subsys_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/basicCalc' */

  /* Inport: '<Root>/In1' incorporates:
   *  Inport: '<Root>/In2'
   *  Outport: '<Root>/Out1'
   *  Outport: '<Root>/Out2'
   *  Outport: '<Root>/Out3'
   *  Outport: '<Root>/Out4'
   */
  calcMBD_subsys_basicCalc(calcMBD_subsys_U.In1, calcMBD_subsys_U.In2,
    &calcMBD_subsys_Y.Out1, &calcMBD_subsys_Y.Out2, &calcMBD_subsys_Y.Out3,
    &calcMBD_subsys_Y.Out4);

  /* End of Outputs for SubSystem: '<Root>/basicCalc' */
}

/* Model initialize function */
void calcMBD_subsys_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(calcMBD_subsys_M, (NULL));

  /* external inputs */
  (void)memset(&calcMBD_subsys_U, 0, sizeof(ExtU_calcMBD_subsys_T));

  /* external outputs */
  (void) memset((void *)&calcMBD_subsys_Y, 0,
                sizeof(ExtY_calcMBD_subsys_T));
}

/* Model terminate function */
void calcMBD_subsys_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
