/*
 * File: simulinkOSC.cpp
 *
 *
 *   --- THIS FILE GENERATED BY S-FUNCTION BUILDER: 3.0 ---
 *
 *   This file is an S-function produced by the S-Function
 *   Builder which only recognizes certain fields.  Changes made
 *   outside these fields will be lost the next time the block is
 *   used to load, edit, and resave this file. This file will be overwritten
 *   by the S-function Builder block. If you want to edit this file by hand, 
 *   you must change it only in the area defined as:  
 *
 *        %%%-SFUNWIZ_defines_Changes_BEGIN
 *        #define NAME 'replacement text' 
 *        %%% SFUNWIZ_defines_Changes_END
 *
 *   DO NOT change NAME--Change the 'replacement text' only.
 *
 *   For better compatibility with the Simulink Coder, the
 *   "wrapper" S-function technique is used.  This is discussed
 *   in the Simulink Coder's Manual in the Chapter titled,
 *   "Wrapper S-functions".
 *
 *  -------------------------------------------------------------------------
 * | See matlabroot/simulink/src/sfuntmpl_doc.c for a more detailed template |
 *  ------------------------------------------------------------------------- 
 *
 * Created: Wed Apr 17 14:32:06 2019
 */

#define S_FUNCTION_LEVEL 2
#define S_FUNCTION_NAME simulinkOSC
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
/* %%%-SFUNWIZ_defines_Changes_BEGIN --- EDIT HERE TO _END */
#define NUM_INPUTS            5
/* Input Port  0 */
#define IN_PORT_0_NAME        bnNose
#define INPUT_0_WIDTH         1
#define INPUT_DIMS_0_COL      1
#define INPUT_0_DTYPE         real_T
#define INPUT_0_COMPLEX       COMPLEX_NO
#define IN_0_FRAME_BASED      FRAME_NO
#define IN_0_BUS_BASED        0
#define IN_0_BUS_NAME         
#define IN_0_DIMS             1-D
#define INPUT_0_FEEDTHROUGH   0
#define IN_0_ISSIGNED         0
#define IN_0_WORDLENGTH       8
#define IN_0_FIXPOINTSCALING  1
#define IN_0_FRACTIONLENGTH   9
#define IN_0_BIAS             0
#define IN_0_SLOPE            0.125
/* Input Port  1 */
#define IN_PORT_1_NAME        bnMouth
#define INPUT_1_WIDTH         1
#define INPUT_DIMS_1_COL      1
#define INPUT_1_DTYPE         real_T
#define INPUT_1_COMPLEX       COMPLEX_NO
#define IN_1_FRAME_BASED      FRAME_NO
#define IN_1_BUS_BASED        0
#define IN_1_BUS_NAME         
#define IN_1_DIMS             1-D
#define INPUT_1_FEEDTHROUGH   0
#define IN_1_ISSIGNED         0
#define IN_1_WORDLENGTH       8
#define IN_1_FIXPOINTSCALING  1
#define IN_1_FRACTIONLENGTH   9
#define IN_1_BIAS             0
#define IN_1_SLOPE            0.125
/* Input Port  2 */
#define IN_PORT_2_NAME        duration
#define INPUT_2_WIDTH         1
#define INPUT_DIMS_2_COL      1
#define INPUT_2_DTYPE         real_T
#define INPUT_2_COMPLEX       COMPLEX_NO
#define IN_2_FRAME_BASED      FRAME_NO
#define IN_2_BUS_BASED        0
#define IN_2_BUS_NAME         
#define IN_2_DIMS             1-D
#define INPUT_2_FEEDTHROUGH   0
#define IN_2_ISSIGNED         0
#define IN_2_WORDLENGTH       8
#define IN_2_FIXPOINTSCALING  1
#define IN_2_FRACTIONLENGTH   9
#define IN_2_BIAS             0
#define IN_2_SLOPE            0.125
/* Input Port  3 */
#define IN_PORT_3_NAME        ampNose
#define INPUT_3_WIDTH         1
#define INPUT_DIMS_3_COL      1
#define INPUT_3_DTYPE         real_T
#define INPUT_3_COMPLEX       COMPLEX_NO
#define IN_3_FRAME_BASED      FRAME_NO
#define IN_3_BUS_BASED        0
#define IN_3_BUS_NAME         
#define IN_3_DIMS             1-D
#define INPUT_3_FEEDTHROUGH   0
#define IN_3_ISSIGNED         0
#define IN_3_WORDLENGTH       8
#define IN_3_FIXPOINTSCALING  1
#define IN_3_FRACTIONLENGTH   9
#define IN_3_BIAS             0
#define IN_3_SLOPE            0.125
/* Input Port  4 */
#define IN_PORT_4_NAME        ampMouth
#define INPUT_4_WIDTH         1
#define INPUT_DIMS_4_COL      1
#define INPUT_4_DTYPE         real_T
#define INPUT_4_COMPLEX       COMPLEX_NO
#define IN_4_FRAME_BASED      FRAME_NO
#define IN_4_BUS_BASED        0
#define IN_4_BUS_NAME         
#define IN_4_DIMS             1-D
#define INPUT_4_FEEDTHROUGH   0
#define IN_4_ISSIGNED         0
#define IN_4_WORDLENGTH       8
#define IN_4_FIXPOINTSCALING  1
#define IN_4_FRACTIONLENGTH   9
#define IN_4_BIAS             0
#define IN_4_SLOPE            0.125

#define NUM_OUTPUTS           0

#define NPARAMS               4
/* Parameter 0 */
#define PARAMETER_0_NAME      server
#define PARAMETER_0_DTYPE     uint16_T
#define PARAMETER_0_COMPLEX   COMPLEX_NO
/* Parameter 1 */
#define PARAMETER_1_NAME      port
#define PARAMETER_1_DTYPE     uint16_T
#define PARAMETER_1_COMPLEX   COMPLEX_NO
/* Parameter 2 */
#define PARAMETER_2_NAME      pathsyndefs
#define PARAMETER_2_DTYPE     uint16_T
#define PARAMETER_2_COMPLEX   COMPLEX_NO
/* Parameter 3 */
#define PARAMETER_3_NAME      pathwavs
#define PARAMETER_3_DTYPE     uint16_T
#define PARAMETER_3_COMPLEX   COMPLEX_NO

#define SAMPLE_TIME_0         INHERITED_SAMPLE_TIME
#define NUM_DISC_STATES       1
#define DISC_STATES_IC        [0]
#define NUM_CONT_STATES       0
#define CONT_STATES_IC        [0]

#define SFUNWIZ_GENERATE_TLC  0
#define SOURCEFILES           "__SFB__simulinkOSC_mycode.cpp__SFB__oscpack_1_1_0/build/Release/oscpack.lib__SFB__C:\Program Files\MATLAB\R2018b\sys\lcc64\lcc64\lib64\ws2_32.lib__SFB__C:\Program Files\MATLAB\R2018b\sys\lcc64\lcc64\lib64\winmm.lib"
#define PANELINDEX            8
#define USE_SIMSTRUCT         0
#define SHOW_COMPILE_STEPS    0
#define CREATE_DEBUG_MEXFILE  0
#define SAVE_CODE_ONLY        0
#define SFUNWIZ_REVISION      3.0
/* %%%-SFUNWIZ_defines_Changes_END --- EDIT HERE TO _BEGIN */
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
#include "simstruc.h"

#define PARAM_DEF0(S) ssGetSFcnParam(S, 0)
#define PARAM_DEF1(S) ssGetSFcnParam(S, 1)
#define PARAM_DEF2(S) ssGetSFcnParam(S, 2)
#define PARAM_DEF3(S) ssGetSFcnParam(S, 3)

#define IS_PARAM_UINT16(pVal) (mxIsNumeric(pVal) && !mxIsLogical(pVal) &&\
!mxIsEmpty(pVal) && !mxIsSparse(pVal) && !mxIsComplex(pVal) && mxIsUint16(pVal))

extern void simulinkOSC_Start_wrapper(real_T *xD,
			void **pW,
			const uint16_T *server, const int_T p_width0,
			const uint16_T *port, const int_T p_width1,
			const uint16_T *pathsyndefs, const int_T p_width2,
			const uint16_T *pathwavs, const int_T p_width3);
extern void simulinkOSC_Outputs_wrapper(const real_T *xD,
			void **pW,
			const uint16_T *server, const int_T p_width0,
			const uint16_T *port, const int_T p_width1,
			const uint16_T *pathsyndefs, const int_T p_width2,
			const uint16_T *pathwavs, const int_T p_width3);
extern void simulinkOSC_Update_wrapper(const real_T *bnNose,
			const real_T *bnMouth,
			const real_T *duration,
			const real_T *ampNose,
			const real_T *ampMouth,
			real_T *xD,
			void **pW,
			const uint16_T *server, const int_T p_width0,
			const uint16_T *port, const int_T p_width1,
			const uint16_T *pathsyndefs, const int_T p_width2,
			const uint16_T *pathwavs, const int_T p_width3);
extern void simulinkOSC_Terminate_wrapper(real_T *xD,
			void **pW,
			const uint16_T *server, const int_T p_width0,
			const uint16_T *port, const int_T p_width1,
			const uint16_T *pathsyndefs, const int_T p_width2,
			const uint16_T *pathwavs, const int_T p_width3);
/*====================*
 * S-function methods *
 *====================*/
#define MDL_CHECK_PARAMETERS
#if defined(MDL_CHECK_PARAMETERS) && defined(MATLAB_MEX_FILE)
/* Function: mdlCheckParameters =============================================
 * Abstract:
 *     Verify parameter definitions and types.
 */
static void mdlCheckParameters(SimStruct *S)
{
    int paramIndex  = 0;
    bool invalidParam = false;
    /* All parameters must match the S-function Builder Dialog */

    {
        const mxArray *pVal0 = ssGetSFcnParam(S, 0);
        if (!IS_PARAM_UINT16(pVal0)) {
            invalidParam = true;
            paramIndex = 0;
            goto EXIT_POINT;
        }
    }

    {
        const mxArray *pVal1 = ssGetSFcnParam(S, 1);
        if (!IS_PARAM_UINT16(pVal1)) {
            invalidParam = true;
            paramIndex = 1;
            goto EXIT_POINT;
        }
    }

    {
        const mxArray *pVal2 = ssGetSFcnParam(S, 2);
        if (!IS_PARAM_UINT16(pVal2)) {
            invalidParam = true;
            paramIndex = 2;
            goto EXIT_POINT;
        }
    }

    {
        const mxArray *pVal3 = ssGetSFcnParam(S, 3);
        if (!IS_PARAM_UINT16(pVal3)) {
            invalidParam = true;
            paramIndex = 3;
            goto EXIT_POINT;
        }
    }


    EXIT_POINT:
    if (invalidParam) {
        char parameterErrorMsg[1024];
        sprintf(parameterErrorMsg, "The data type and or complexity of parameter %d does not match the "
                "information specified in the S-function Builder dialog. "
                "For non-double parameters you will need to cast them using int8, int16, "
                "int32, uint8, uint16, uint32 or boolean.", paramIndex + 1);
        ssSetErrorStatus(S, parameterErrorMsg);
    }
    return;
}
#endif /* MDL_CHECK_PARAMETERS */
/* Function: mdlInitializeSizes ===============================================
 * Abstract:
 *   Setup sizes of the various vectors.
 */
static void mdlInitializeSizes(SimStruct *S)
{

    DECL_AND_INIT_DIMSINFO(inputDimsInfo);
    DECL_AND_INIT_DIMSINFO(outputDimsInfo);
    ssSetNumSFcnParams(S, NPARAMS); /* Number of expected parameters */
    #if defined(MATLAB_MEX_FILE)
    if (ssGetNumSFcnParams(S) == ssGetSFcnParamsCount(S)) {
        mdlCheckParameters(S);
        if (ssGetErrorStatus(S) != NULL) {
            return;
        }
    } else {
        return; /* Parameter mismatch will be reported by Simulink */
    }
    #endif

    ssSetArrayLayoutForCodeGen(S, SS_COLUMN_MAJOR);

    ssSetSimStateCompliance(S, DISALLOW_SIM_STATE);

    ssSetNumContStates(S, NUM_CONT_STATES);
    ssSetNumDiscStates(S, NUM_DISC_STATES);


    if (!ssSetNumInputPorts(S, NUM_INPUTS)) return;
    /* Input Port 0 */
    ssSetInputPortWidth(S, 0, INPUT_0_WIDTH);
    ssSetInputPortDataType(S, 0, SS_DOUBLE);
    ssSetInputPortComplexSignal(S, 0, INPUT_0_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 0, INPUT_0_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 0, 1); /*direct input signal access*/

    /* Input Port 1 */
    ssSetInputPortWidth(S, 1, INPUT_1_WIDTH);
    ssSetInputPortDataType(S, 1, SS_DOUBLE);
    ssSetInputPortComplexSignal(S, 1, INPUT_1_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 1, INPUT_1_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 1, 1); /*direct input signal access*/

    /* Input Port 2 */
    ssSetInputPortWidth(S, 2, INPUT_2_WIDTH);
    ssSetInputPortDataType(S, 2, SS_DOUBLE);
    ssSetInputPortComplexSignal(S, 2, INPUT_2_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 2, INPUT_2_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 2, 1); /*direct input signal access*/

    /* Input Port 3 */
    ssSetInputPortWidth(S, 3, INPUT_3_WIDTH);
    ssSetInputPortDataType(S, 3, SS_DOUBLE);
    ssSetInputPortComplexSignal(S, 3, INPUT_3_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 3, INPUT_3_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 3, 1); /*direct input signal access*/

    /* Input Port 4 */
    ssSetInputPortWidth(S, 4, INPUT_4_WIDTH);
    ssSetInputPortDataType(S, 4, SS_DOUBLE);
    ssSetInputPortComplexSignal(S, 4, INPUT_4_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 4, INPUT_4_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 4, 1); /*direct input signal access*/


    if (!ssSetNumOutputPorts(S, NUM_OUTPUTS)) return;
    ssSetNumPWork(S, 2);

    ssSetNumSampleTimes(S, 1);
    ssSetNumRWork(S, 0);
    ssSetNumIWork(S, 0);
    ssSetNumModes(S, 0);
    ssSetNumNonsampledZCs(S, 0);

    ssSetSimulinkVersionGeneratedIn(S, "9.2");

    /* Take care when specifying exception free code - see sfuntmpl_doc.c */
    ssSetOptions(S, (SS_OPTION_EXCEPTION_FREE_CODE |
                     SS_OPTION_WORKS_WITH_CODE_REUSE));
}

/* Function: mdlInitializeSampleTimes =========================================
 * Abstract:
 *    Specifiy  the sample time.
 */
static void mdlInitializeSampleTimes(SimStruct *S)
{
    ssSetSampleTime(S, 0, SAMPLE_TIME_0);
    ssSetModelReferenceSampleTimeDefaultInheritance(S);
    ssSetOffsetTime(S, 0, 0.0);
}
#define MDL_INITIALIZE_CONDITIONS
/* Function: mdlInitializeConditions ========================================
 * Abstract:
 *    Initialize the states
 */
static void mdlInitializeConditions(SimStruct *S)
{
    real_T *xD = ssGetRealDiscStates(S);

    /* Warning: parameters not of type double used as IC will be replaced with 0.0 */

    xD[0] = 0;
}

#define MDL_SET_INPUT_PORT_DATA_TYPE
static void mdlSetInputPortDataType(SimStruct *S, int port, DTypeId dType)
{
    ssSetInputPortDataType(S, 0, dType);
}

#define MDL_SET_OUTPUT_PORT_DATA_TYPE
static void mdlSetOutputPortDataType(SimStruct *S, int port, DTypeId dType)
{
    ssSetOutputPortDataType(S, 0, dType);
}

#define MDL_SET_DEFAULT_PORT_DATA_TYPES
static void mdlSetDefaultPortDataTypes(SimStruct *S)
{
    ssSetInputPortDataType(S, 0, SS_DOUBLE);
    ssSetOutputPortDataType(S, 0, SS_DOUBLE);
}

#define MDL_SET_WORK_WIDTHS
#if defined(MDL_SET_WORK_WIDTHS) && defined(MATLAB_MEX_FILE)

static void mdlSetWorkWidths(SimStruct *S)
{

    const char_T *rtParamNames[] = {"P1","P2","P3","P4"};
    ssRegAllTunableParamsAsRunTimeParams(S, rtParamNames);

}

#endif

#define MDL_START  /* Change to #undef to remove function */
#if defined(MDL_START)
/* Function: mdlStart =======================================================
 * Abstract:
 *    This function is called once at start of model execution. If you
 *    have states that should be initialized once, this is the place
 *    to do it.
 */
static void mdlStart(SimStruct *S)
{
    void **pW = ssGetPWork(S);
    real_T *xD = ssGetDiscStates(S);
    const int_T   p_width0  = mxGetNumberOfElements(PARAM_DEF0(S));
    const int_T   p_width1  = mxGetNumberOfElements(PARAM_DEF1(S));
    const int_T   p_width2  = mxGetNumberOfElements(PARAM_DEF2(S));
    const int_T   p_width3  = mxGetNumberOfElements(PARAM_DEF3(S));
    const uint16_T *server = (const uint16_T *) mxGetData(PARAM_DEF0(S));
    const uint16_T *port = (const uint16_T *) mxGetData(PARAM_DEF1(S));
    const uint16_T *pathsyndefs = (const uint16_T *) mxGetData(PARAM_DEF2(S));
    const uint16_T *pathwavs = (const uint16_T *) mxGetData(PARAM_DEF3(S));
    
    simulinkOSC_Start_wrapper(xD, pW, server, p_width0, port, p_width1, pathsyndefs, p_width2, pathwavs, p_width3);
}
#endif /*  MDL_START */

/* Function: mdlOutputs =======================================================
 *
 */
static void mdlOutputs(SimStruct *S, int_T tid)
{
    void **pW = ssGetPWork(S);
    const real_T *xD = ssGetDiscStates(S);
    const int_T   p_width0  = mxGetNumberOfElements(PARAM_DEF0(S));
    const int_T   p_width1  = mxGetNumberOfElements(PARAM_DEF1(S));
    const int_T   p_width2  = mxGetNumberOfElements(PARAM_DEF2(S));
    const int_T   p_width3  = mxGetNumberOfElements(PARAM_DEF3(S));
    const uint16_T *server = (const uint16_T *) mxGetData(PARAM_DEF0(S));
    const uint16_T *port = (const uint16_T *) mxGetData(PARAM_DEF1(S));
    const uint16_T *pathsyndefs = (const uint16_T *) mxGetData(PARAM_DEF2(S));
    const uint16_T *pathwavs = (const uint16_T *) mxGetData(PARAM_DEF3(S));
    
    simulinkOSC_Outputs_wrapper(xD, pW, server, p_width0, port, p_width1, pathsyndefs, p_width2, pathwavs, p_width3);

}

#define MDL_UPDATE  /* Change to #undef to remove function */
#if defined(MDL_UPDATE)
/* Function: mdlUpdate ======================================================
 * Abstract:
 *    This function is called once for every major integration time step.
 *    Discrete states are typically updated here, but this function is
 *    useful for performing any tasks that should only take place once per
 *    integration step.
 */
static void mdlUpdate(SimStruct *S, int_T tid)
{
    void **pW = ssGetPWork(S);
    const real_T *bnNose = (real_T *) ssGetInputPortRealSignal(S, 0);
    const real_T *bnMouth = (real_T *) ssGetInputPortRealSignal(S, 1);
    const real_T *duration = (real_T *) ssGetInputPortRealSignal(S, 2);
    const real_T *ampNose = (real_T *) ssGetInputPortRealSignal(S, 3);
    const real_T *ampMouth = (real_T *) ssGetInputPortRealSignal(S, 4);
    real_T *xD = ssGetDiscStates(S);
    const int_T   p_width0  = mxGetNumberOfElements(PARAM_DEF0(S));
    const int_T   p_width1  = mxGetNumberOfElements(PARAM_DEF1(S));
    const int_T   p_width2  = mxGetNumberOfElements(PARAM_DEF2(S));
    const int_T   p_width3  = mxGetNumberOfElements(PARAM_DEF3(S));
    const uint16_T *server = (const uint16_T *) mxGetData(PARAM_DEF0(S));
    const uint16_T *port = (const uint16_T *) mxGetData(PARAM_DEF1(S));
    const uint16_T *pathsyndefs = (const uint16_T *) mxGetData(PARAM_DEF2(S));
    const uint16_T *pathwavs = (const uint16_T *) mxGetData(PARAM_DEF3(S));
    
    simulinkOSC_Update_wrapper(bnNose, bnMouth, duration, ampNose, ampMouth, xD, pW, server, p_width0, port, p_width1, pathsyndefs, p_width2, pathwavs, p_width3);

}
#endif /* MDL_UPDATE */
/* Function: mdlTerminate =====================================================
 * Abstract:
 *    In this function, you should perform any actions that are necessary
 *    at the termination of a simulation.  For example, if memory was
 *    allocated in mdlStart, this is the place to free it.
 */
static void mdlTerminate(SimStruct *S)
{
    void **pW = ssGetPWork(S);
    real_T *xD = ssGetDiscStates(S);
    const int_T   p_width0  = mxGetNumberOfElements(PARAM_DEF0(S));
    const int_T   p_width1  = mxGetNumberOfElements(PARAM_DEF1(S));
    const int_T   p_width2  = mxGetNumberOfElements(PARAM_DEF2(S));
    const int_T   p_width3  = mxGetNumberOfElements(PARAM_DEF3(S));
    const uint16_T *server = (const uint16_T *) mxGetData(PARAM_DEF0(S));
    const uint16_T *port = (const uint16_T *) mxGetData(PARAM_DEF1(S));
    const uint16_T *pathsyndefs = (const uint16_T *) mxGetData(PARAM_DEF2(S));
    const uint16_T *pathwavs = (const uint16_T *) mxGetData(PARAM_DEF3(S));
    
    simulinkOSC_Terminate_wrapper(xD, pW, server, p_width0, port, p_width1, pathsyndefs, p_width2, pathwavs, p_width3);

}


#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif



