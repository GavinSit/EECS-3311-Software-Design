/*
 * Code for class EV_DYNAMIC_LIST_IMP [G#1, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev2025.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DYNAMIC_LIST_IMP}.i_th */
EIF_REFERENCE F1717_19423 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTGC;
	RTCT0("attached ev_children.i_th (i) as l_item and then attached {like item} l_item.interface as l_result", EX_CHECK);
	tb1 = '\0';
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16258[Dtype(Current)-1730])(Current);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2252[Dtype(RTCW(tr1))-849])(tr1, (EIF_REFERENCE) &arg1);
	loc1 = tr1;
	if ((EIF_TRUE)) {
		tr1 = *(EIF_REFERENCE *)(loc1 + O15892[Dtype(loc1)-1695]);
		loc2 = tr1;
		loc2 = RTRV(eif_final_id(Y16223,Y16223_gen_type,dftype,1715),loc2);
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = (EIF_REFERENCE) loc2;
	RTLE;
	return Result;
}

/* {EV_DYNAMIC_LIST_IMP}.count */
EIF_INTEGER_32 F1717_19424 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16258[Dtype(Current)-1730])(Current);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[Dtype(RTCW(tr1))-818])(tr1);
	RTLE;
	return Result;
}

/* {EV_DYNAMIC_LIST_IMP}.insert_i_th */
void F1717_19425 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	RTCT0("attached {G_IMP} v.implementation as l_item", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O15014[Dtype(arg1)-1595]);
	loc1 = tr1;
	loc1 = RTRV(eif_final_id(Y16259,Y16259_gen_type,Dftype(Current),1716),loc1);
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16258[dtype-1730])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2679[Dtype(RTCW(tr1))-911])(tr1, arg2);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16258[dtype-1730])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2707[Dtype(RTCW(tr1))-950])(tr1, loc1);
	RTLE;
}

/* {EV_DYNAMIC_LIST_IMP}.remove_i_th */
void F1717_19426 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16258[dtype-1730])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2679[Dtype(RTCW(tr1))-911])(tr1, arg1);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16258[dtype-1730])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2263[Dtype(RTCW(tr1))-818])(tr1);
	RTLE;
}

void EIF_Minit2025 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
