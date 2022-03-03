/*
 * File: gradingSystem_MBD.h
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

#ifndef RTW_HEADER_gradingSystem_MBD_h_
#define RTW_HEADER_gradingSystem_MBD_h_
#include <stddef.h>
#include <string.h>
#ifndef gradingSystem_MBD_COMMON_INCLUDES_
# define gradingSystem_MBD_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* gradingSystem_MBD_COMMON_INCLUDES_ */

#include "gradingSystem_MBD_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  uint8_T Merge;                       /* '<Root>/Merge' */
} B_gradingSystem_MBD_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_gradingSystem_MBD_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Output[256];                  /* '<Root>/Output' */
} ExtY_gradingSystem_MBD_T;

/* Real-time Model Data Structure */
struct tag_RTM_gradingSystem_MBD_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_gradingSystem_MBD_T gradingSystem_MBD_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_gradingSystem_MBD_T gradingSystem_MBD_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_gradingSystem_MBD_T gradingSystem_MBD_Y;

/* Model entry point functions */
extern void gradingSystem_MBD_initialize(void);
extern void gradingSystem_MBD_step(void);
extern void gradingSystem_MBD_terminate(void);

/* Real-time Model object */
extern RT_MODEL_gradingSystem_MBD_T *const gradingSystem_MBD_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
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
 * '<Root>' : 'gradingSystem_MBD'
 * '<S1>'   : 'gradingSystem_MBD/If Action Subsystem'
 * '<S2>'   : 'gradingSystem_MBD/If Action Subsystem1'
 * '<S3>'   : 'gradingSystem_MBD/If Action Subsystem2'
 * '<S4>'   : 'gradingSystem_MBD/If Action Subsystem3'
 * '<S5>'   : 'gradingSystem_MBD/If Action Subsystem4'
 */
#endif                                 /* RTW_HEADER_gradingSystem_MBD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
