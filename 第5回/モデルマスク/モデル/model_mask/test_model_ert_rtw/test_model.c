/*
 * File: test_model.c
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

#include "test_model.h"
#include "test_model_private.h"

/* Block states (default storage) */
DW_test_model_T test_model_DW;

/* External inputs (root inport signals with default storage) */
ExtU_test_model_T test_model_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_test_model_T test_model_Y;

/* Real-time model */
RT_MODEL_test_model_T test_model_M_;
RT_MODEL_test_model_T *const test_model_M = &test_model_M_;

/* Model step function */
void test_model_step(void)
{
  /* ModelReference: '<Root>/Model' incorporates:
   *  Inport: '<Root>/In1'
   *  Outport: '<Root>/Out1'
   */
  test_ref_model(&test_model_U.In1, &test_model_Y.Out1, 5, 2);
}

/* Model initialize function */
void test_model_initialize(void)
{
  /* Model Initialize function for ModelReference Block: '<Root>/Model' */
  test_ref_model_initialize(rtmGetErrorStatusPointer(test_model_M),
    &(test_model_DW.Model_InstanceData.rtm));
}

/* Model terminate function */
void test_model_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
