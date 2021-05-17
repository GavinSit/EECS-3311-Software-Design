/*
 * Code for class WEL_COLOR_MATRIX
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we999.h"
#include "wel_gdi_plus.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F41_9159
static void inline_F41_9159 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_32 arg4)
{
	{
	((ColorMatrix*)arg1)->m[arg2][arg3] = arg4;
}
	;
}
#define INLINE_F41_9159
#endif
#ifndef INLINE_F41_9160
static EIF_REAL_32 inline_F41_9160 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return (EIF_REAL_32) (((ColorMatrix*)arg1)->m[arg2][arg3])
	;
}
#define INLINE_F41_9160
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_COLOR_MATRIX}.make */
void F41_9151 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1283, 1).id);
	ti4_1 = F41_9154(Current);
	F1284_4468(RTCW(tr1), ti4_1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WEL_COLOR_MATRIX}.set_m */
void F41_9152 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = F41_9157(Current);
	inline_F41_9159(tp1, arg2, arg3, arg1);
	RTLE;
}

/* {WEL_COLOR_MATRIX}.set_m_row */
void F41_9153 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
	tr4_1 = F922_3191(RTCW(arg1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 0L)));
	F41_9152(Current, tr4_1, arg2, ((EIF_INTEGER_32) 0L));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
	tr4_1 = F922_3191(RTCW(arg1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
	F41_9152(Current, tr4_1, arg2, ((EIF_INTEGER_32) 1L));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
	tr4_1 = F922_3191(RTCW(arg1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L)));
	F41_9152(Current, tr4_1, arg2, ((EIF_INTEGER_32) 2L));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
	tr4_1 = F922_3191(RTCW(arg1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 3L)));
	F41_9152(Current, tr4_1, arg2, ((EIF_INTEGER_32) 3L));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
	tr4_1 = F922_3191(RTCW(arg1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 4L)));
	F41_9152(Current, tr4_1, arg2, ((EIF_INTEGER_32) 4L));
	RTLE;
}

/* {WEL_COLOR_MATRIX}.structure_size */
EIF_INTEGER_32 F41_9154 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) sizeof (ColorMatrix);
}

/* {WEL_COLOR_MATRIX}.m */
EIF_REAL_32 F41_9155 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = F41_9157(Current);
	Result = inline_F41_9160(tp1, arg1, arg2);
	RTLE;
	return Result;
}

/* {WEL_COLOR_MATRIX}.item */
EIF_POINTER F41_9157 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
	RTLE;
	return Result;
}

/* {WEL_COLOR_MATRIX}.c_set_m */
void F41_9159 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_32 arg4)
{
	GTCX
	
	
	inline_F41_9159 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_REAL_32) arg4);
}

/* {WEL_COLOR_MATRIX}.c_m */
EIF_REAL_32 F41_9160 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	
	
	Result = inline_F41_9160 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3);
	return Result;
}

/* {WEL_COLOR_MATRIX}.c_size_of_color_matrix */
EIF_INTEGER_32 F41_9161 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (ColorMatrix);
	return Result;
}

void EIF_Minit999 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
