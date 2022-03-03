/*
 * File: factorial_SF.h
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

#ifndef RTW_HEADER_factorial_SF_h_
#define RTW_HEADER_factorial_SF_h_
#include <stddef.h>
#ifndef factorial_SF_COMMON_INCLUDES_
# define factorial_SF_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* factorial_SF_COMMON_INCLUDES_ */

#include "factorial_SF_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_factorial_SF_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
} ExtY_factorial_SF_T;

/* Real-time Model Data Structure */
struct tag_RTM_factorial_SF_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_factorial_SF_T factorial_SF_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_factorial_SF_T factorial_SF_Y;

/* Model entry point functions */
extern void factorial_SF_initialize(void);
extern void factorial_SF_step(void);
extern void factorial_SF_terminate(void);

/* Real-time Model object */
extern RT_MODEL_factorial_SF_T *const factorial_SF_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Display' : Unused code path elimination
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
 * '<Root>' : 'factorial_SF'
 * '<S1>'   : 'factorial_SF/Chart'
 */
#endif                                 /* RTW_HEADER_factorial_SF_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
