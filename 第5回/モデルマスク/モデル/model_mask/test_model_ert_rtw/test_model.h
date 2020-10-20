/*
 * File: test_model.h
 *
 * Code generated for Simulink model 'test_model'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Fri Sep 18 16:15:30 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_test_model_h_
#define RTW_HEADER_test_model_h_
#ifndef test_model_COMMON_INCLUDES_
# define test_model_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* test_model_COMMON_INCLUDES_ */

#include "test_model_types.h"

/* Child system includes */
#include "test_ref_model.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
# define rtmGetErrorStatusPointer(rtm) ((const char_T **)(&((rtm)->errorStatus)))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  MdlrefDW_test_ref_model_T Model_InstanceData;/* '<Root>/Model' */
} DW_test_model_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  int32_T In1;                         /* '<Root>/In1' */
} ExtU_test_model_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  int32_T Out1;                        /* '<Root>/Out1' */
} ExtY_test_model_T;

/* Real-time Model Data Structure */
struct tag_RTM_test_model_T {
  const char_T *errorStatus;
};

/* Block states (default storage) */
extern DW_test_model_T test_model_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_test_model_T test_model_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_test_model_T test_model_Y;

/* Model entry point functions */
extern void test_model_initialize(void);
extern void test_model_step(void);
extern void test_model_terminate(void);

/* Real-time Model object */
extern RT_MODEL_test_model_T *const test_model_M;

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
 * '<Root>' : 'test_model'
 */
#endif                                 /* RTW_HEADER_test_model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
