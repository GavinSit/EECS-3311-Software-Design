/*
 * Code for class TREE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "tr2041.h"
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

/* {TREE}.count */
EIF_INTEGER_32 F715_2786 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F716_2952(Current);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {TREE}.is_equal */
EIF_BOOLEAN F715_2787 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(Current == arg1)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		Result = '\0';
		tb1 = '\0';
		tb2 = F715_2798(RTCW(arg1));
		if ((EIF_BOOLEAN)(F715_2798(Current) == tb2)) {
			tb2 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_4_0_);
			tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_) == tb2);
		}
		if (tb1) {
			ti4_1 = ((EIF_INTEGER_32) 2L);
			Result = (EIF_BOOLEAN)(((EIF_INTEGER_32) 2L) == ti4_1);
		}
		tb1 = '\0';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !F715_2798(Current);
		}
		if (tb1) {
			Result = F715_2837(Current, Current, arg1);
			RTLE;
			return (EIF_BOOLEAN) Result;
		}
	}
	RTLE;
	return Result;
}

/* {TREE}.node_is_equal */
EIF_BOOLEAN F715_2788 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_)) {
		tr1 = *(EIF_REFERENCE *)(Current + O1718[dtype-488]);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + O1718[Dtype(arg1)-488]);
		Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O1718[dtype-488]);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + O1718[Dtype(arg1)-488]);
		Result = (EIF_BOOLEAN) RTCEQ(tr1, tr2);
	}
	RTLE;
	return Result;
}

/* {TREE}.child_readable */
EIF_BOOLEAN F715_2790 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) !F715_2795(Current)) {
		Result = (EIF_BOOLEAN)(F716_2915(Current) != NULL);
	}
	RTLE;
	return Result;
}

/* {TREE}.child_off */
EIF_BOOLEAN F715_2795 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\01';
	if (!F715_2796(Current)) {
		Result = F716_2921(Current);
	}
	RTLE;
	return Result;
}

/* {TREE}.child_before */
EIF_BOOLEAN F715_2796 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_) == ((EIF_INTEGER_32) 0L));
}

/* {TREE}.is_empty */
EIF_BOOLEAN F715_2798 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {TREE}.linear_representation */
EIF_REFERENCE F715_2825 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2164,Y2164_gen_type,Dftype(Current),548);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		loc1 = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = F715_2786(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3081[Dtype(RTCW(loc1))-950])(loc1, ti4_1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[Dtype(RTCW(loc1))-911])(loc1);
	tr1 = *(EIF_REFERENCE *)(Current + O1718[Dtype(Current)-488]);
	tr2 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(loc1))-818])(loc1, tr2);
	F716_2948(Current, loc1);
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {TREE}.copy */
void F715_2827 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc4);
	RTLIU(4);
	
	RTGC;
	loc3 = F716_2949(Current, arg1);
	tb1 = F716_2922(RTCW(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		F715_2838(Current, arg1, loc3);
	}
	eif_builtin_ANY_standard_copy (Current, loc3);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 2L))) break;
		F716_2932(Current, loc1);
		loc4 = F716_2915(Current);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			F715_2832(RTCW(loc4), Current);
		}
		loc1++;
	}
	F716_2932(Current, loc2);
	RTLE;
}

/* {TREE}.attach_to_parent */
void F715_2832 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
}

/* {TREE}.tree_is_equal */
EIF_BOOLEAN F715_2837 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(15);
	RTLR(0,loc9);
	RTLR(1,arg1);
	RTLR(2,loc10);
	RTLR(3,arg2);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,loc5);
	RTLR(7,Current);
	RTLR(8,loc6);
	RTLR(9,loc7);
	RTLR(10,loc8);
	RTLR(11,loc1);
	RTLR(12,loc2);
	RTLR(13,loc3);
	RTLR(14,loc4);
	RTLIU(15);
	
	RTGC;
	loc9 = F716_2916(RTCW(arg1));
	loc10 = F716_2916(RTCW(arg2));
	tb1 = '\0';
	tb2 = F716_2922(RTCW(arg1));
	if (tb2) {
		tb2 = F716_2922(RTCW(arg2));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O1718[Dtype(arg1)-488]);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg2) + O1718[Dtype(arg2)-488]);
		Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
	} else {
		tb1 = F716_2922(RTCW(arg1));
		tb2 = F716_2922(RTCW(arg2));
		if (((tb1) != (tb2))) {
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,914,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				typarr0[3] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				loc5 = RTLNS(typres0.id, 914, _OBJSIZ_2_3_0_1_0_0_0_0_);
			}
			F912_3515(RTCW(loc5));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,914,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				typarr0[3] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				loc6 = RTLNS(typres0.id, 914, _OBJSIZ_2_3_0_1_0_0_0_0_);
			}
			F912_3515(RTCW(loc6));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,916,1508,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc7 = RTLNS(typres0.id, 916, _OBJSIZ_2_3_0_1_0_0_0_0_);
			}
			F913_3515(RTCW(loc7));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,916,1508,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc8 = RTLNS(typres0.id, 916, _OBJSIZ_2_3_0_1_0_0_0_0_);
			}
			F913_3515(RTCW(loc8));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_4_1_0_0_);
			F917_3565(RTCW(loc7), ti4_1);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_4_1_0_0_);
			F917_3565(RTCW(loc8), ti4_1);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			loc1 = (EIF_REFERENCE) arg1;
			loc2 = (EIF_REFERENCE) arg2;
			F716_2928(RTCW(loc1));
			F716_2928(RTCW(loc2));
			for (;;) {
				tb1 = '\01';
				if (!(EIF_BOOLEAN) !Result) {
					tb2 = '\0';
					tb3 = F716_2921(RTCW(loc1));
					if (tb3) {
						tb3 = F736_2537(RTCW(loc5));
						tb2 = tb3;
					}
					tb1 = tb2;
				}
				if (tb1) break;
				tb2 = '\0';
				tb3 = '\0';
				tb4 = F715_2790(RTCW(loc1));
				if (tb4) {
					tb4 = F715_2790(RTCW(loc2));
					tb3 = tb4;
				}
				if (tb3) {
					ti4_1 = ((EIF_INTEGER_32) 2L);
					ti4_2 = ((EIF_INTEGER_32) 2L);
					tb2 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
				}
				if (tb2) {
					Result = F715_2788(RTCW(loc1), loc2);
					loc3 = F716_2915(RTCW(loc1));
					loc4 = F716_2915(RTCW(loc2));
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 == NULL) || (EIF_BOOLEAN)(loc4 == NULL))) {
					} else {
						tb2 = '\01';
						tb3 = F716_2922(RTCW(loc3));
						if (!tb3) {
							tb3 = F716_2922(RTCW(loc4));
							tb2 = tb3;
						}
						if ((EIF_BOOLEAN) !tb2) {
							F915_3565(RTCW(loc5), loc1);
							F915_3565(RTCW(loc6), loc2);
							loc1 = (EIF_REFERENCE) loc3;
							loc2 = (EIF_REFERENCE) loc4;
							Result = F715_2788(RTCW(loc1), loc2);
							ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_4_1_0_0_);
							F917_3565(RTCW(loc7), ti4_1);
							ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc2)+ _LNGOFF_4_1_0_0_);
							F917_3565(RTCW(loc8), ti4_1);
							F716_2928(RTCW(loc1));
							F716_2928(RTCW(loc2));
						} else {
							tb2 = F716_2922(RTCW(loc3));
							tb3 = F716_2922(RTCW(loc4));
							if (((tb2) != (tb3))) {
								Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							} else {
								Result = F715_2788(RTCW(loc3), loc4);
							}
						}
					}
				} else {
					tb2 = '\01';
					ti4_1 = ((EIF_INTEGER_32) 2L);
					ti4_2 = ((EIF_INTEGER_32) 2L);
					if (!(EIF_BOOLEAN)(ti4_1 != ti4_2)) {
						tb3 = F715_2790(RTCW(loc1));
						tb4 = F715_2790(RTCW(loc2));
						tb2 = ((tb3) != (tb4));
					}
					if (tb2) {
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					}
				}
				tb2 = F716_2921(RTCW(loc1));
				if ((EIF_BOOLEAN) !tb2) {
					F716_2930(RTCW(loc1));
					F716_2930(RTCW(loc2));
				} else {
					for (;;) {
						tb2 = '\01';
						tb3 = F736_2537(RTCW(loc5));
						if (!tb3) {
							tb3 = F716_2921(RTCW(loc1));
							tb2 = (EIF_BOOLEAN) !tb3;
						}
						if (tb2) break;
						loc1 = F915_3562(RTCW(loc5));
						loc2 = F915_3562(RTCW(loc6));
						F716_2930(RTCW(loc1));
						F716_2930(RTCW(loc2));
						F915_3566(RTCW(loc5));
						F915_3566(RTCW(loc6));
						F917_3566(RTCW(loc7));
						F917_3566(RTCW(loc8));
					}
				}
			}
			if ((EIF_BOOLEAN) !Result) {
				for (;;) {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_2_3_0_0_);
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) break;
					ti4_2 = F917_3562(RTCW(loc7));
					F716_2932(RTCW(loc1), ti4_2);
					ti4_2 = F917_3562(RTCW(loc8));
					F716_2932(RTCW(loc2), ti4_2);
					loc1 = F915_3562(RTCW(loc5));
					loc2 = F915_3562(RTCW(loc6));
					F915_3566(RTCW(loc5));
					F915_3566(RTCW(loc6));
					F917_3566(RTCW(loc7));
					F917_3566(RTCW(loc8));
				}
				ti4_2 = F917_3562(RTCW(loc7));
				F716_2932(RTCW(loc1), ti4_2);
				ti4_2 = F917_3562(RTCW(loc8));
				F716_2932(RTCW(loc2), ti4_2);
				F917_3566(RTCW(loc7));
				F917_3566(RTCW(loc8));
			}
		}
	}
	F716_2927(RTCW(arg1), loc9);
	F716_2927(RTCW(arg2), loc10);
	RTLE;
	return Result;
}

/* {TREE}.tree_copy */
void F715_2838 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc6);
	RTLR(1,Current);
	RTLR(2,loc7);
	RTLR(3,loc8);
	RTLR(4,loc9);
	RTLR(5,arg1);
	RTLR(6,arg2);
	RTLR(7,loc2);
	RTLR(8,loc3);
	RTLR(9,loc5);
	RTLR(10,loc4);
	RTLIU(11);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,914,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc6 = RTLNS(typres0.id, 914, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F912_3515(RTCW(loc6));
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,914,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc7 = RTLNS(typres0.id, 914, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F912_3515(RTCW(loc7));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,916,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc8 = RTLNS(typres0.id, 916, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F913_3515(RTCW(loc8));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,916,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc9 = RTLNS(typres0.id, 916, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F913_3515(RTCW(loc9));
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_4_0_);
	if (tb1) {
		F575_2465(RTCW(arg2));
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_4_1_0_0_);
	F917_3565(RTCW(loc9), ti4_1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc2 = (EIF_REFERENCE) arg1;
	loc3 = (EIF_REFERENCE) arg2;
	for (;;) {
		tb1 = '\0';
		ti4_1 = ((EIF_INTEGER_32) 2L);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb2 = F736_2537(RTCW(loc6));
			tb1 = tb2;
		}
		if (tb1) break;
		F716_2932(RTCW(loc2), loc1);
		F716_2932(RTCW(loc3), loc1);
		tb2 = F715_2790(RTCW(loc2));
		if (tb2) {
			loc5 = F716_2915(RTCW(loc2));
			if ((EIF_BOOLEAN)(loc5 == NULL)) {
			} else {
				loc4 = F716_2949(Current, loc5);
				F716_2937(RTCW(loc3), loc4);
				tb2 = F716_2922(RTCW(loc5));
				if ((EIF_BOOLEAN) !tb2) {
					F915_3565(RTCW(loc6), loc2);
					F915_3565(RTCW(loc7), loc3);
					F917_3565(RTCW(loc8), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
					loc2 = (EIF_REFERENCE) loc5;
					loc3 = (EIF_REFERENCE) loc4;
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc2)+ _LNGOFF_4_1_0_0_);
					F917_3565(RTCW(loc9), ti4_1);
					loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
			}
		}
		ti4_1 = ((EIF_INTEGER_32) 2L);
		if ((EIF_BOOLEAN) (loc1 <= ti4_1)) {
			loc1++;
		} else {
			for (;;) {
				tb2 = '\01';
				tb3 = F736_2537(RTCW(loc6));
				if (!tb3) {
					ti4_1 = ((EIF_INTEGER_32) 2L);
					tb2 = (EIF_BOOLEAN) (loc1 <= ti4_1);
				}
				if (tb2) break;
				ti4_1 = F917_3562(RTCW(loc9));
				F716_2932(RTCW(loc2), ti4_1);
				ti4_1 = F917_3562(RTCW(loc9));
				F716_2932(RTCW(loc3), ti4_1);
				loc2 = F915_3562(RTCW(loc6));
				loc3 = F915_3562(RTCW(loc7));
				loc1 = F917_3562(RTCW(loc8));
				F915_3566(RTCW(loc6));
				F915_3566(RTCW(loc7));
				F917_3566(RTCW(loc8));
				F917_3566(RTCW(loc9));
			}
		}
	}
	ti4_1 = F917_3562(RTCW(loc9));
	F716_2932(RTCW(arg1), ti4_1);
	ti4_1 = F917_3562(RTCW(loc9));
	F716_2932(RTCW(arg2), ti4_1);
	F917_3566(RTCW(loc9));
	RTLE;
}

void EIF_Minit2041 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
