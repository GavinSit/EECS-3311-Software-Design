/*
 * Code for class EV_DYNAMIC_LIST_I [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev2020.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DYNAMIC_LIST_I}.interface_item */
EIF_REFERENCE F1716_19387 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_REFERENCE) (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R16227[dtype-1730])(Current, *(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]));
}

/* {EV_DYNAMIC_LIST_I}.item */
EIF_REFERENCE F1716_19388 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_REFERENCE) (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R16227[dtype-1730])(Current, *(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]));
}

/* {EV_DYNAMIC_LIST_I}.cursor */
EIF_REFERENCE F1716_19390 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]);
	tb1 = '\0';
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		tb1 = (EIF_BOOLEAN) (loc2 <= (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16232[dtype-1730])(Current));
	}
	if (tb1) {
		loc1 = F1716_19388(Current);
	}
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,540,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y16257,Y16257_gen_type,Dftype(Current),1715);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 540, _OBJSIZ_1_2_0_0_0_0_0_0_);
	}
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16232[dtype-1730])(Current);
	F541_14264(RTCW(Result), loc1, (EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 0L)), (EIF_BOOLEAN) (loc2 > ti4_1));
	RTLE;
	return Result;
}

/* {EV_DYNAMIC_LIST_I}.off */
EIF_BOOLEAN F1716_19393 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\01';
	if (!((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]) == ((EIF_INTEGER_32) 0L)))) {
		Result = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]) == (EIF_INTEGER_32) ((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16232[dtype-1730])(Current) + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
	return Result;
}

/* {EV_DYNAMIC_LIST_I}.index_of */
EIF_INTEGER_32 F1716_19394 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))) {
				tb1 = (EIF_BOOLEAN) (loc1 > (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16232[dtype-1730])(Current));
			}
			if (tb1) break;
			if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R16227[dtype-1730])(Current, loc1) == arg1)) {
				Result = (EIF_INTEGER_32) loc1;
			}
			loc1++;
		}
	}
	RTLE;
	return Result;
}

/* {EV_DYNAMIC_LIST_I}.has */
EIF_BOOLEAN F1716_19399 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		tb1 = '\01';
		if (!Result) {
			tb1 = (EIF_BOOLEAN) (loc1 > (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16232[dtype-1730])(Current));
		}
		if (tb1) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R16227[dtype-1730])(Current, loc1);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 == arg1);
		loc1++;
	}
	RTLE;
	return Result;
}

/* {EV_DYNAMIC_LIST_I}.start */
void F1716_19400 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O16224[Dtype(Current)-1715]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {EV_DYNAMIC_LIST_I}.back */
void F1716_19401 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	(*(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]))--;
}

/* {EV_DYNAMIC_LIST_I}.forth */
void F1716_19402 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	(*(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]))++;
}

/* {EV_DYNAMIC_LIST_I}.go_i_th */
void F1716_19403 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]) = (EIF_INTEGER_32) arg1;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]) < ((EIF_INTEGER_32) 0L))) {
		*(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]) > (EIF_INTEGER_32) ((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16232[dtype-1730])(Current) + ((EIF_INTEGER_32) 1L)))) {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16232[dtype-1730])(Current);
			*(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		}
	}
	RTLE;
}

/* {EV_DYNAMIC_LIST_I}.go_to */
void F1716_19404 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {540,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y16257,Y16257_gen_type,dftype,1715);
			typarr0[1] = l_type.annotations | 0xFF00;
			typarr0[2] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc1 = arg1;
		loc1 = RTRV(typres0, loc1);
	}
	RTCT0("dlc_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_1_0_);
	if (tb1) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16232[dtype-1730])(Current);
		*(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	} else {
		tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_1_1_);
		if (tb1) {
			*(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		} else {
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
			loc2 = tr1;
			if (EIF_TEST(loc2)) {
				ti4_1 = F1716_19394(Current, loc2, ((EIF_INTEGER_32) 1L));
				*(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]) = (EIF_INTEGER_32) ti4_1;
			} else {
			}
		}
	}
	RTLE;
}

/* {EV_DYNAMIC_LIST_I}.append */
void F1716_19406 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[Dtype(RTCW(arg1))-911])(arg1);
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2291[Dtype(RTCW(arg1))-911])(arg1);
		if (tb1) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(RTCW(arg1))-818])(arg1);
		F1716_19407(Current, tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[Dtype(RTCW(arg1))-911])(arg1);
	}
	RTLE;
}

/* {EV_DYNAMIC_LIST_I}.extend */
void F1716_19407 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16232[dtype-1730])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R16255[dtype-1730])(Current, arg1, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]) == (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16232[dtype-1730])(Current))) {
		(*(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]))++;
	}
	RTLE;
}

/* {EV_DYNAMIC_LIST_I}.replace */
void F1716_19408 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R16256[dtype-1730])(Current, *(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R16255[dtype-1730])(Current, arg1, *(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]));
	RTLE;
}

/* {EV_DYNAMIC_LIST_I}.put_left */
void F1716_19411 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R16255[dtype-1730])(Current, arg1, *(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]));
	(*(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]))++;
	RTLE;
}

/* {EV_DYNAMIC_LIST_I}.put_i_th */
void F1716_19412 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R16255[dtype-1730])(Current, arg1, arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R16256[dtype-1730])(Current, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {EV_DYNAMIC_LIST_I}.prune */
void F1716_19415 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F1716_19394(Current, arg1, ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		if ((EIF_BOOLEAN) (loc1 <= *(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]))) {
			(*(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]))--;
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R16256[dtype-1730])(Current, loc1);
	}
	RTLE;
}

/* {EV_DYNAMIC_LIST_I}.remove */
void F1716_19416 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R16256[dtype-1730])(Current, *(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]));
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]) > (EIF_INTEGER_32) ((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16232[dtype-1730])(Current) + ((EIF_INTEGER_32) 1L)))) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16232[dtype-1730])(Current);
		*(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	}
	RTLE;
}

/* {EV_DYNAMIC_LIST_I}.wipe_out */
void F1716_19419 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16232[Dtype(Current)-1730])(Current);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		F1716_19403(Current, loc1);
		F1716_19416(Current);
		loc1--;
	}
	F1716_19403(Current, loc1);
	RTLE;
}

void EIF_Minit2020 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
