/*
 * File: bitWiseAss.c
 *
 * Code generated for Simulink model 'bitWiseAss'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Feb 26 09:03:58 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "bitWiseAss.h"
#include "bitWiseAss_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_bitWiseAss_T bitWiseAss_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_bitWiseAss_T bitWiseAss_Y;

/* Real-time model */
RT_MODEL_bitWiseAss_T bitWiseAss_M_;
RT_MODEL_bitWiseAss_T *const bitWiseAss_M = &bitWiseAss_M_;

/* Model step function */
void bitWiseAss_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise AND'
   *  S-Function (sfix_bitop): '<Root>/Bitwise NAND'
   */
  bitWiseAss_Y.Out1 = (int8_T)(bitWiseAss_U.In1 & bitWiseAss_U.In2);

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOR'
   *  S-Function (sfix_bitop): '<Root>/Bitwise OR'
   */
  bitWiseAss_Y.Out2 = (int8_T)(bitWiseAss_U.In1 | bitWiseAss_U.In2);

  /* Outport: '<Root>/Out3' incorporates:
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOR'
   */
  bitWiseAss_Y.Out3 = (int8_T)~bitWiseAss_Y.Out2;

  /* Outport: '<Root>/Out4' incorporates:
   *  S-Function (sfix_bitop): '<Root>/Bitwise NAND'
   */
  bitWiseAss_Y.Out4 = (int8_T)~bitWiseAss_Y.Out1;

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise XOR'
   */
  bitWiseAss_Y.Out5 = (int8_T)(bitWiseAss_U.In1 ^ bitWiseAss_U.In2);

  /* Outport: '<Root>/Out6' incorporates:
   *  Inport: '<Root>/In1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOT'
   */
  bitWiseAss_Y.Out6 = (int8_T)~bitWiseAss_U.In1;
}

/* Model initialize function */
void bitWiseAss_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(bitWiseAss_M, (NULL));

  /* external inputs */
  (void)memset(&bitWiseAss_U, 0, sizeof(ExtU_bitWiseAss_T));

  /* external outputs */
  (void) memset((void *)&bitWiseAss_Y, 0,
                sizeof(ExtY_bitWiseAss_T));
}

/* Model terminate function */
void bitWiseAss_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
