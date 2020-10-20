/*
 * File: test_ref_model.c
 *
 * Code generated for Simulink model 'test_ref_model'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Fri Sep 18 16:15:22 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "test_ref_model.h"
#include "test_ref_model_private.h"

/* Output and update for referenced model: 'test_ref_model' */
void test_ref_model(const int32_T *rtu_In1, int32_T *rty_Out1, int32_T rtp_a,
                    int32_T rtp_b)
{
  /* Product: '<Root>/Product' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  Sum: '<Root>/Add'
   */
  *rty_Out1 = (*rtu_In1 + rtp_a) * rtp_b;
}

/* Model initialize function */
void test_ref_model_initialize(const char_T **rt_errorStatus,
  RT_MODEL_test_ref_model_T *const test_ref_model_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(test_ref_model_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
