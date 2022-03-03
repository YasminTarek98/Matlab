/*
 * File: trafficLight_SF.h
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

#ifndef RTW_HEADER_trafficLight_SF_h_
#define RTW_HEADER_trafficLight_SF_h_
#include <stddef.h>
#include <string.h>
#ifndef trafficLight_SF_COMMON_INCLUDES_
# define trafficLight_SF_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* trafficLight_SF_COMMON_INCLUDES_ */

#include "trafficLight_SF_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint16_T temporalCounter_i1;         /* '<Root>/Chart' */
  uint8_T is_active_c3_trafficLight_SF;/* '<Root>/Chart' */
  uint8_T is_c3_trafficLight_SF;       /* '<Root>/Chart' */
} DW_trafficLight_SF_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
} ExtY_trafficLight_SF_T;

/* Real-time Model Data Structure */
struct tag_RTM_trafficLight_SF_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_trafficLight_SF_T trafficLight_SF_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_trafficLight_SF_T trafficLight_SF_Y;

/* Model entry point functions */
extern void trafficLight_SF_initialize(void);
extern void trafficLight_SF_step(void);
extern void trafficLight_SF_terminate(void);

/* Real-time Model object */
extern RT_MODEL_trafficLight_SF_T *const trafficLight_SF_M;

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
 * '<Root>' : 'trafficLight_SF'
 * '<S1>'   : 'trafficLight_SF/Chart'
 */
#endif                                 /* RTW_HEADER_trafficLight_SF_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
