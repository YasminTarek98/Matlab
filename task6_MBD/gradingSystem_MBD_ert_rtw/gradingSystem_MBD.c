/*
 * File: gradingSystem_MBD.c
 *
 * Code generated for Simulink model 'gradingSystem_MBD'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Mar  3 19:09:49 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "gradingSystem_MBD.h"
#include "gradingSystem_MBD_private.h"

/* Block signals (default storage) */
B_gradingSystem_MBD_T gradingSystem_MBD_B;

/* External inputs (root inport signals with default storage) */
ExtU_gradingSystem_MBD_T gradingSystem_MBD_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_gradingSystem_MBD_T gradingSystem_MBD_Y;

/* Real-time model */
RT_MODEL_gradingSystem_MBD_T gradingSystem_MBD_M_;
RT_MODEL_gradingSystem_MBD_T *const gradingSystem_MBD_M = &gradingSystem_MBD_M_;

/* Model step function */
void gradingSystem_MBD_step(void)
{
  /* If: '<Root>/If' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S2>/Constant'
   *  Inport: '<Root>/Input'
   */
  if (gradingSystem_MBD_U.Input >= 93.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    gradingSystem_MBD_B.Merge = 65U;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  } else {
    if ((gradingSystem_MBD_U.Input >= 85.0) && (gradingSystem_MBD_U.Input < 93.0))
    {
      /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S2>/Action Port'
       */
      gradingSystem_MBD_B.Merge = 66U;

      /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
    }
  }

  /* End of If: '<Root>/If' */

  /* If: '<Root>/If1' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S4>/Constant'
   *  Inport: '<Root>/Input'
   */
  if ((gradingSystem_MBD_U.Input >= 75.0) && (gradingSystem_MBD_U.Input < 85.0))
  {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    gradingSystem_MBD_B.Merge = 67U;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem2' */
  } else {
    if ((gradingSystem_MBD_U.Input >= 60.0) && (gradingSystem_MBD_U.Input < 75.0))
    {
      /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem3' incorporates:
       *  ActionPort: '<S4>/Action Port'
       */
      gradingSystem_MBD_B.Merge = 68U;

      /* End of Outputs for SubSystem: '<Root>/If Action Subsystem3' */
    }
  }

  /* End of If: '<Root>/If1' */

  /* If: '<Root>/If2' incorporates:
   *  Constant: '<S5>/Constant'
   *  Inport: '<Root>/Input'
   */
  if (gradingSystem_MBD_U.Input < 60.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    gradingSystem_MBD_B.Merge = 70U;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem4' */
  }

  /* End of If: '<Root>/If2' */

  /* ASCIIToString: '<Root>/ASCII to String' incorporates:
   *  Outport: '<Root>/Output'
   */
  gradingSystem_MBD_Y.Output[0] = (int8_T)gradingSystem_MBD_B.Merge;
  gradingSystem_MBD_Y.Output[1] = '\x00';
}

/* Model initialize function */
void gradingSystem_MBD_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(gradingSystem_MBD_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &gradingSystem_MBD_B), 0,
                sizeof(B_gradingSystem_MBD_T));

  /* external inputs */
  gradingSystem_MBD_U.Input = 0.0;

  /* external outputs */
  (void) memset(&gradingSystem_MBD_Y.Output[0], 0,
                256U*sizeof(char_T));
}

/* Model terminate function */
void gradingSystem_MBD_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
