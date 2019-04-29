
/*
 * Include Files
 *
 */
#if defined(MATLAB_MEX_FILE)
#include "tmwtypes.h"
#include "simstruc_types.h"
#else
#include "rtwtypes.h"
#endif



/* %%%-SFUNWIZ_wrapper_includes_Changes_BEGIN --- EDIT HERE TO _END */
#include <math.h>
#include <string>
#include <iostream>
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define u_width 1

/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
/* extern double func(double a); */
extern void myStart(void **pW,
             const uint16_T *server, const int_T p_width0,
             const uint16_T *port, const int_T p_width1,
             const uint16_T *pathsyndefs, const int_T p_width2,
             const uint16_T *pathwavs, const int_T p_width3);

extern void myUpdate(const real_T *bnNose, const real_T *bnMouth,
              const real_T *duration, const real_T *ampNose,
              const real_T *ampMouth,
              void **pW,
              const uint16_T *server, const int_T p_width0,
              const uint16_T *port, const int_T p_width1,
              const uint16_T *pathsyndefs, const int_T p_width2,
              const uint16_T *pathwavs, const int_T p_width3);

void myTerminate(void **pW,
			const uint16_T *server, const int_T p_width0,
			const uint16_T *port, const int_T p_width1,
			const uint16_T *pathsyndefs, const int_T p_width2,
			const uint16_T *pathwavs, const int_T p_width3);
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Start function
 *
 */
void simulinkOSC_Start_wrapper(real_T *xD,
			void **pW,
			const uint16_T *server, const int_T p_width0,
			const uint16_T *port, const int_T p_width1,
			const uint16_T *pathsyndefs, const int_T p_width2,
			const uint16_T *pathwavs, const int_T p_width3)
{
/* %%%-SFUNWIZ_wrapper_Start_Changes_BEGIN --- EDIT HERE TO _END */
/*
 * Custom Start code goes here.
 */

myStart(pW, server, p_width0, port, p_width1, pathsyndefs, p_width2, pathwavs, p_width3);
/* %%%-SFUNWIZ_wrapper_Start_Changes_END --- EDIT HERE TO _BEGIN */
}
/*
 * Output function
 *
 */
void simulinkOSC_Outputs_wrapper(const real_T *xD,
			void **pW,
			const uint16_T *server, const int_T p_width0,
			const uint16_T *port, const int_T p_width1,
			const uint16_T *pathsyndefs, const int_T p_width2,
			const uint16_T *pathwavs, const int_T p_width3)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
/* This sample sets the output equal to the input
      y0[0] = u0[0]; 
 For complex signals use: y0[0].re = u0[0].re; 
      y0[0].im = u0[0].im;
      y1[0].re = u1[0].re;
      y1[0].im = u1[0].im;
 */
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
 * Updates function
 *
 */
void simulinkOSC_Update_wrapper(const real_T *bnNose,
			const real_T *bnMouth,
			const real_T *duration,
			const real_T *ampNose,
			const real_T *ampMouth,
			real_T *xD,
			void **pW,
			const uint16_T *server, const int_T p_width0,
			const uint16_T *port, const int_T p_width1,
			const uint16_T *pathsyndefs, const int_T p_width2,
			const uint16_T *pathwavs, const int_T p_width3)
{
/* %%%-SFUNWIZ_wrapper_Update_Changes_BEGIN --- EDIT HERE TO _END */
/*
 * Code example
 *   xD[0] = u0[0];
 */
 
myUpdate(bnNose, bnMouth, duration, ampNose, ampMouth,
              pW,
              server, p_width0, port, p_width1,
              pathsyndefs, p_width2, pathwavs, p_width3);
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}
/*
 * Terminate function
 *
 */
void simulinkOSC_Terminate_wrapper(real_T *xD,
			void **pW,
			const uint16_T *server, const int_T p_width0,
			const uint16_T *port, const int_T p_width1,
			const uint16_T *pathsyndefs, const int_T p_width2,
			const uint16_T *pathwavs, const int_T p_width3)
{
/* %%%-SFUNWIZ_wrapper_Terminate_Changes_BEGIN --- EDIT HERE TO _END */
/*
 * Custom Terminate code goes here.
 */

myTerminate(pW, server, p_width0, port, p_width1, pathsyndefs, p_width2, pathwavs, p_width3);
/* %%%-SFUNWIZ_wrapper_Terminate_Changes_END --- EDIT HERE TO _BEGIN */
}

