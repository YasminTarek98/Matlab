/*
 * File: trafficLight_SF.c
 *
 * Code generated for Simulink model 'trafficLight_SF'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Mar  3 14:05:25 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "trafficLight_SF.h"
#include "trafficLight_SF_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define trafficLight_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define trafficLight_SF_IN_GoGreen     ((uint8_T)1U)
#define trafficLight_SF_IN_GoRed       ((uint8_T)2U)
#define trafficLight_SF_IN_GoYellow    ((uint8_T)3U)

/* Block states (default storage) */
DW_trafficLight_SF_T trafficLight_SF_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_trafficLight_SF_T trafficLight_SF_Y;

/* Real-time model */
RT_MODEL_trafficLight_SF_T trafficLight_SF_M_;
RT_MODEL_trafficLight_SF_T *const trafficLight_SF_M = &trafficLight_SF_M_;

/* Model step function */
void trafficLight_SF_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (trafficLight_SF_DW.temporalCounter_i1 < 2047U) {
    trafficLight_SF_DW.temporalCounter_i1++;
  }

  if (trafficLight_SF_DW.is_active_c3_trafficLight_SF == 0U) {
    trafficLight_SF_DW.is_active_c3_trafficLight_SF = 1U;
    trafficLight_SF_DW.is_c3_trafficLight_SF = trafficLight_SF_IN_GoRed;
    trafficLight_SF_DW.temporalCounter_i1 = 0U;

    /* Outport: '<Root>/Out1' */
    trafficLight_SF_Y.Out1 = 1.0;

    /* Outport: '<Root>/Out2' */
    trafficLight_SF_Y.Out2 = 0.0;

    /* Outport: '<Root>/Out3' */
    trafficLight_SF_Y.Out3 = 0.0;
  } else {
    switch (trafficLight_SF_DW.is_c3_trafficLight_SF) {
     case trafficLight_SF_IN_GoGreen:
      /* Outport: '<Root>/Out1' */
      trafficLight_SF_Y.Out1 = 0.0;

      /* Outport: '<Root>/Out2' */
      trafficLight_SF_Y.Out2 = 0.0;

      /* Outport: '<Root>/Out3' */
      trafficLight_SF_Y.Out3 = 1.0;
      if (trafficLight_SF_DW.temporalCounter_i1 >= 1500U) {
        trafficLight_SF_DW.is_c3_trafficLight_SF = trafficLight_SF_IN_GoRed;
        trafficLight_SF_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Out1' */
        trafficLight_SF_Y.Out1 = 1.0;

        /* Outport: '<Root>/Out2' */
        trafficLight_SF_Y.Out2 = 0.0;

        /* Outport: '<Root>/Out3' */
        trafficLight_SF_Y.Out3 = 0.0;
      }
      break;

     case trafficLight_SF_IN_GoRed:
      /* Outport: '<Root>/Out1' */
      trafficLight_SF_Y.Out1 = 1.0;

      /* Outport: '<Root>/Out2' */
      trafficLight_SF_Y.Out2 = 0.0;

      /* Outport: '<Root>/Out3' */
      trafficLight_SF_Y.Out3 = 0.0;
      if (trafficLight_SF_DW.temporalCounter_i1 >= 1500U) {
        trafficLight_SF_DW.is_c3_trafficLight_SF = trafficLight_SF_IN_GoYellow;
        trafficLight_SF_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Out1' */
        trafficLight_SF_Y.Out1 = 0.0;

        /* Outport: '<Root>/Out2' */
        trafficLight_SF_Y.Out2 = 1.0;

        /* Outport: '<Root>/Out3' */
        trafficLight_SF_Y.Out3 = 0.0;
      }
      break;

     default:
      /* Outport: '<Root>/Out1' */
      trafficLight_SF_Y.Out1 = 0.0;

      /* Outport: '<Root>/Out2' */
      trafficLight_SF_Y.Out2 = 1.0;

      /* Outport: '<Root>/Out3' */
      trafficLight_SF_Y.Out3 = 0.0;
      if (trafficLight_SF_DW.temporalCounter_i1 >= 150U) {
        trafficLight_SF_DW.is_c3_trafficLight_SF = trafficLight_SF_IN_GoGreen;
        trafficLight_SF_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Out1' */
        trafficLight_SF_Y.Out1 = 0.0;

        /* Outport: '<Root>/Out2' */
        trafficLight_SF_Y.Out2 = 0.0;

        /* Outport: '<Root>/Out3' */
        trafficLight_SF_Y.Out3 = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void trafficLight_SF_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(trafficLight_SF_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&trafficLight_SF_DW, 0,
                sizeof(DW_trafficLight_SF_T));

  /* external outputs */
  (void) memset((void *)&trafficLight_SF_Y, 0,
                sizeof(ExtY_trafficLight_SF_T));

  /* SystemInitialize for Chart: '<Root>/Chart' */
  trafficLight_SF_DW.temporalCounter_i1 = 0U;
  trafficLight_SF_DW.is_active_c3_trafficLight_SF = 0U;
  trafficLight_SF_DW.is_c3_trafficLight_SF = trafficLight_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void trafficLight_SF_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
