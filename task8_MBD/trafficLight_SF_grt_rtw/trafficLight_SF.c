/*
 * trafficLight_SF.c
 *
 * Code generation for model "trafficLight_SF".
 *
 * Model version              : 1.1
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Thu Mar  3 13:33:29 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
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

/* Real-time model */
RT_MODEL_trafficLight_SF_T trafficLight_SF_M_;
RT_MODEL_trafficLight_SF_T *const trafficLight_SF_M = &trafficLight_SF_M_;

/* Model step function */
void trafficLight_SF_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (trafficLight_SF_DW.temporalCounter_i1 < 127U) {
    trafficLight_SF_DW.temporalCounter_i1++;
  }

  /* Gateway: Chart */
  /* During: Chart */
  if (trafficLight_SF_DW.is_active_c3_trafficLight_SF == 0U) {
    /* Entry: Chart */
    trafficLight_SF_DW.is_active_c3_trafficLight_SF = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:2' */
    trafficLight_SF_DW.is_c3_trafficLight_SF = trafficLight_SF_IN_GoRed;
    trafficLight_SF_DW.temporalCounter_i1 = 0U;

    /* Entry 'GoRed': '<S1>:1' */
  } else {
    switch (trafficLight_SF_DW.is_c3_trafficLight_SF) {
     case trafficLight_SF_IN_GoGreen:
      /* During 'GoGreen': '<S1>:4' */
      if (trafficLight_SF_DW.temporalCounter_i1 >= 100U) {
        /* Transition: '<S1>:7' */
        trafficLight_SF_DW.is_c3_trafficLight_SF = trafficLight_SF_IN_GoRed;
        trafficLight_SF_DW.temporalCounter_i1 = 0U;

        /* Entry 'GoRed': '<S1>:1' */
      }
      break;

     case trafficLight_SF_IN_GoRed:
      /* During 'GoRed': '<S1>:1' */
      if (trafficLight_SF_DW.temporalCounter_i1 >= 100U) {
        /* Transition: '<S1>:5' */
        trafficLight_SF_DW.is_c3_trafficLight_SF = trafficLight_SF_IN_GoYellow;
        trafficLight_SF_DW.temporalCounter_i1 = 0U;

        /* Entry 'GoYellow': '<S1>:3' */
      }
      break;

     default:
      /* During 'GoYellow': '<S1>:3' */
      if (trafficLight_SF_DW.temporalCounter_i1 >= 20U) {
        /* Transition: '<S1>:6' */
        trafficLight_SF_DW.is_c3_trafficLight_SF = trafficLight_SF_IN_GoGreen;
        trafficLight_SF_DW.temporalCounter_i1 = 0U;

        /* Entry 'GoGreen': '<S1>:4' */
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* Matfile logging */
  rt_UpdateTXYLogVars(trafficLight_SF_M->rtwLogInfo,
                      (&trafficLight_SF_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.1s, 0.0s] */
    if ((rtmGetTFinal(trafficLight_SF_M)!=-1) &&
        !((rtmGetTFinal(trafficLight_SF_M)-trafficLight_SF_M->Timing.taskTime0) >
          trafficLight_SF_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(trafficLight_SF_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++trafficLight_SF_M->Timing.clockTick0)) {
    ++trafficLight_SF_M->Timing.clockTickH0;
  }

  trafficLight_SF_M->Timing.taskTime0 = trafficLight_SF_M->Timing.clockTick0 *
    trafficLight_SF_M->Timing.stepSize0 + trafficLight_SF_M->Timing.clockTickH0 *
    trafficLight_SF_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void trafficLight_SF_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)trafficLight_SF_M, 0,
                sizeof(RT_MODEL_trafficLight_SF_T));
  rtmSetTFinal(trafficLight_SF_M, -1);
  trafficLight_SF_M->Timing.stepSize0 = 0.1;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    trafficLight_SF_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(trafficLight_SF_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(trafficLight_SF_M->rtwLogInfo, (NULL));
    rtliSetLogT(trafficLight_SF_M->rtwLogInfo, "tout");
    rtliSetLogX(trafficLight_SF_M->rtwLogInfo, "");
    rtliSetLogXFinal(trafficLight_SF_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(trafficLight_SF_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(trafficLight_SF_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(trafficLight_SF_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(trafficLight_SF_M->rtwLogInfo, 1);
    rtliSetLogY(trafficLight_SF_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(trafficLight_SF_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(trafficLight_SF_M->rtwLogInfo, (NULL));
  }

  /* states (dwork) */
  (void) memset((void *)&trafficLight_SF_DW, 0,
                sizeof(DW_trafficLight_SF_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(trafficLight_SF_M->rtwLogInfo, 0.0,
    rtmGetTFinal(trafficLight_SF_M), trafficLight_SF_M->Timing.stepSize0,
    (&rtmGetErrorStatus(trafficLight_SF_M)));

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
