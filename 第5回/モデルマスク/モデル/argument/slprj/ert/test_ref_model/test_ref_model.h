/*
 * File: test_ref_model.h
 *
 * Code generated for Simulink model 'test_ref_model'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Tue Sep 22 18:00:57 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_test_ref_model_h_
#define RTW_HEADER_test_ref_model_h_
#ifndef test_ref_model_COMMON_INCLUDES_
# define test_ref_model_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* test_ref_model_COMMON_INCLUDES_ */

#include "test_ref_model_types.h"

/* Real-time Model Data Structure */
struct tag_RTM_test_ref_model_T {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_test_ref_model_T rtm;
} MdlrefDW_test_ref_model_T;

/* Model reference registration function */
extern void test_ref_model_initialize(const char_T **rt_errorStatus,
  RT_MODEL_test_ref_model_T *const test_ref_model_M);
extern void test_ref_model(const int32_T *rtu_In1, int32_T *rty_Out1, int32_T
  rtp_a, int32_T rtp_b);

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
 * '<Root>' : 'test_ref_model'
 */
#endif                                 /* RTW_HEADER_test_ref_model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
