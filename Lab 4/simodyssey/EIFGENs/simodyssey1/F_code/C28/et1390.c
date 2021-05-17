/*
 * Code for class ETF_COMMAND_INTERFACE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1390.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_COMMAND_INTERFACE}.make */
void F1172_14683 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg3);
	RTLIU(4);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1560, 1).id);
	F1558_6510(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) arg1;
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg3;
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {ETF_COMMAND_INTERFACE}.out */
EIF_REFERENCE F1172_14688 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {ETF_COMMAND_INTERFACE}.etf_event_argument_out */
EIF_REFERENCE F1172_14691 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,arg1);
	RTLR(5,loc2);
	RTLR(6,arg2);
	RTLR(7,arg3);
	RTLIU(8);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(Result));
	tb1 = '\0';
	tr1 = F353_13099(Current);
	tr1 = F999_3929(RTCW(tr1), arg1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F999_3929(loc1, arg2);
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		tr1 = RTCCL(arg3);
		Result = F1172_14692(Current, loc2, tr1);
	} else {
	}
	RTLE;
	return Result;
}

/* {ETF_COMMAND_INTERFACE}.etf_arg_out */
EIF_REFERENCE F1172_14692 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	struct eif_ex_1410 sloc5;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) sloc5.data;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	memset (&sloc5.overhead, 0, OVERHEAD + _OBJSIZ_1_0_0_1_0_0_0_0_);
	sloc5.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc5.overhead, eif_new_type(1256, 0x00).id);
	RTLI(17);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLR(6,arg2);
	RTLR(7,tr2);
	RTLR(8,loc3);
	RTLR(9,loc4);
	RTLR(10,loc5);
	RTLR(11,loc6);
	RTLR(12,loc7);
	RTLR(13,loc8);
	RTLR(14,loc9);
	RTLR(15,loc10);
	RTLR(16,loc12);
	RTLIU(17);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(Result));
	loc1 = F1172_14695(Current, arg1);
	loc2 = loc1;
	loc2 = RTRV(eif_new_type(348, 0x01),loc2);
	if (EIF_TEST(loc2)) {
		tr1 = RTMS_EX_H("\"",1,34);
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(RTCW(arg2))-0])(arg2);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
		tr2 = RTMS_EX_H("\"",1,34);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	} else {
		loc3 = loc1;
		loc3 = RTRV(eif_new_type(347, 0x01),loc3);
		if (EIF_TEST(loc3)) {
			tr1 = RTMS_EX_H("\'",1,39);
			tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(RTCW(arg2))-0])(arg2);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
			tr2 = RTMS_EX_H("\'",1,39);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
		} else {
			loc4 = loc1;
			loc4 = RTRV(eif_new_type(346, 0x01),loc4);
			tr1 = RTCCL(arg2);
			RTOE(eif_new_type(1256, 0x00), tr1, loc5, tb1);
			if ((EIF_BOOLEAN) (EIF_TEST(loc4) && tb1)) {
				tr1 = F1257_14758(loc5);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
			} else {
				loc6 = loc1;
				loc6 = RTRV(eif_new_type(339, 0x01),loc6);
				loc7 = RTCCL(arg2);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,918,0xFF01,0,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc7 = RTRV(typres0,loc7);
				}
				if ((EIF_BOOLEAN) (EIF_TEST(loc6) && EIF_TEST(loc7))) {
					tr1 = F1172_14693(Current, loc6, loc7);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				} else {
					loc8 = loc1;
					loc8 = RTRV(eif_new_type(351, 0x01),loc8);
					loc9 = RTCCL(arg2);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,1475,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						loc9 = RTRV(typres0,loc9);
					}
					if ((EIF_BOOLEAN) (EIF_TEST(loc8) && EIF_TEST(loc9))) {
						tr1 = F1172_14694(Current, loc8, loc9);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
					} else {
						tb1 = '\0';
						loc10 = loc1;
						loc10 = RTRV(eif_new_type(350, 0x01),loc10);
						tr1 = RTCCL(arg2);
						RTOB(*(EIF_INTEGER_32 *), eif_new_type(1508, 0x00), tr1, loc11, tb2);
						if ((EIF_BOOLEAN) (EIF_TEST(loc10) && tb2)) {
							tr1 = F353_13098(Current);
							tr1 = F1000_3929(RTCW(tr1), loc11);
							loc12 = tr1;
							tb1 = EIF_TEST(loc12);
						}
						if (tb1) {
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, loc12);
						} else {
							tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(RTCW(arg2))-0])(arg2);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
						}
					}
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {ETF_COMMAND_INTERFACE}.etf_array_arg_out */
EIF_REFERENCE F1172_14693 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(7);
	RTLR(0,Result);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,arg1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,Current);
	RTLIU(7);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(Result));
	tr1 = RTMS_EX_H("<<",2,15420);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	loc1 = *(EIF_INTEGER_32 *)(RTCW(arg2) + O2664[Dtype(arg2)-918]);
	for (;;) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2) + O2663[Dtype(arg2)-918]);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2252[Dtype(RTCW(arg2))-849])(arg2, (EIF_REFERENCE) &loc1);
		tr3 = RTCCL(tr2);
		tr1 = F1172_14692(Current, tr1, tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2) + O2663[Dtype(arg2)-918]);
		if ((EIF_BOOLEAN) (loc1 < ti4_2)) {
			tr1 = RTMS_EX_H(", ",2,11296);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
		}
		loc1++;
	}
	tr1 = RTMS_EX_H(">>",2,15934);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	RTLE;
	return Result;
}

/* {ETF_COMMAND_INTERFACE}.etf_tuple_arg_out */
EIF_REFERENCE F1172_14694 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(7);
	RTLR(0,Result);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,loc2);
	RTLR(4,arg1);
	RTLR(5,tr2);
	RTLR(6,Current);
	RTLIU(7);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(Result));
	tr1 = RTMS_EX_H("[",1,91);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		ti4_1 = (EIF_INTEGER_32) eif_builtin_TUPLE_count (arg2);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		tr1 = F1476_5317(RTCW(arg2), loc1);
		loc2 = RTCCL(tr1);
		loc2 = RTRV(eif_new_type(0, 0x01),loc2);
		if ((loc2) && RTS_OS (Current, loc2)) loc2 = (EIF_REFERENCE) 0;
		if (EIF_TEST(loc2)) {
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
			tr1 = F919_3191(RTCW(tr1), loc1);
			tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
			tr2 = RTCCL(loc2);
			tr1 = F1172_14692(Current, tr1, tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
		}
		ti4_2 = F1476_5348(RTCW(arg2));
		if ((EIF_BOOLEAN) (loc1 < ti4_2)) {
			tr1 = RTMS_EX_H(", ",2,11296);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
		}
		loc1++;
	}
	tr1 = RTMS_EX_H("]",1,93);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	RTLE;
	return Result;
}

/* {ETF_COMMAND_INTERFACE}.retrieve_named_type_if_necessary */
EIF_REFERENCE F1172_14695 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(349, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(loc1 + _REFACS_1_);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		RTLE;
		return (EIF_REFERENCE) arg1;
	}/* NOTREACHED */
	
}

void EIF_Minit1390 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
