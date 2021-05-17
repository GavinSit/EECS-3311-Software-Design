/*
 * Code for class ARRAY [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar249.h"
#include "eif_built_in.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ARRAY}.make_empty */
void F919_3185 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O2664[dtype-918]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_INTEGER_32 *)(Current + O2663[dtype-918]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2154[dtype-519])(Current, ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {ARRAY}.make_filled */
void F919_3186 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O2664[dtype-918]) = (EIF_INTEGER_32) arg2;
	*(EIF_INTEGER_32 *)(Current + O2663[dtype-918]) = (EIF_INTEGER_32) arg3;
	if ((EIF_BOOLEAN) (arg2 <= arg3)) {
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	}
	tr1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2155[dtype-519])(Current, tr1, loc1);
	RTLE;
}

/* {ARRAY}.make */
void F919_3187 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O2664[dtype-918]) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current + O2663[dtype-918]) = (EIF_INTEGER_32) arg2;
	if ((EIF_BOOLEAN) (arg1 <= arg2)) {
		tr1 = RTLNTY2(eif_final_id(Y2164,Y2164_gen_type,Dftype(Current),548), 0x00);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3887[Dtype(tr1)-1422])(tr1);
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2155[dtype-519])(Current, tr2, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)));
	} else {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2154[dtype-519])(Current, ((EIF_INTEGER_32) 0L));
	}
	RTLE;
}

/* {ARRAY}.make_from_special */
void F919_3189 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2161[dtype-519])(Current, arg1);
	*(EIF_INTEGER_32 *)(Current + O2664[dtype-918]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(arg1))-1193])(arg1);
	*(EIF_INTEGER_32 *)(Current + O2663[dtype-918]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {ARRAY}.item */
EIF_REFERENCE F919_3191 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, (EIF_INTEGER_32) (arg1 - *(EIF_INTEGER_32 *)(Current + O2664[Dtype(Current)-918])));
	RTLE;
	return Result;
}

/* {ARRAY}.at */
EIF_REFERENCE F919_3192 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, (EIF_INTEGER_32) (arg1 - *(EIF_INTEGER_32 *)(Current + O2664[Dtype(Current)-918])));
	RTLE;
	return Result;
}

/* {ARRAY}.new_cursor */
EIF_REFERENCE F919_3195 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,1112,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2164,Y2164_gen_type,Dftype(Current),548);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0.id, 1112, _OBJSIZ_2_0_0_3_0_0_0_0_);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3237[Dtype(RTCW(tr1))-1112])(tr1, Current);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {ARRAY}.lower */
EIF_INTEGER_32 F919_3196 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O2664[Dtype(Current)-918]);
}


/* {ARRAY}.upper */
EIF_INTEGER_32 F919_3197 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O2663[Dtype(Current)-918]);
}


/* {ARRAY}.count */
EIF_INTEGER_32 F919_3198 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O2663[dtype-918]) - *(EIF_INTEGER_32 *)(Current + O2664[dtype-918])) + ((EIF_INTEGER_32) 1L));
}

/* {ARRAY}.capacity */
EIF_INTEGER_32 F919_3199 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O2663[dtype-918]) - *(EIF_INTEGER_32 *)(Current + O2664[dtype-918])) + ((EIF_INTEGER_32) 1L));
}

/* {ARRAY}.is_equal */
EIF_BOOLEAN F919_3201 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		tb1 = '\0';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O2664[Dtype(arg1)-918]);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2664[dtype-918]) == ti4_1)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O2663[Dtype(arg1)-918]);
			tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2663[dtype-918]) == ti4_1);
		}
		if (tb2) {
			tb2 = *(EIF_BOOLEAN *)(RTCW(arg1) + O2212[Dtype(arg1)-574]);
			tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O2212[dtype-574]) == tb2);
		}
		if (tb1) {
			if (*(EIF_BOOLEAN *)(Current + O2212[dtype-574])) {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				loc1 = *(EIF_INTEGER_32 *)(Current + O2664[dtype-918]);
				for (;;) {
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !Result || (EIF_BOOLEAN) (loc1 > *(EIF_INTEGER_32 *)(Current + O2663[dtype-918])))) break;
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2252[dtype-849])(Current, (EIF_REFERENCE) &loc1);
					tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2252[Dtype(RTCW(arg1))-849])(arg1, (EIF_REFERENCE) &loc1);
					Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
					loc1++;
				}
			} else {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[dtype-818])(Current);
				Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R2571[Dtype(RTCW(tr1))-1193])(tr1, tr2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1);
			}
		}
	}
	RTLE;
	return Result;
}

/* {ARRAY}.valid_index */
EIF_BOOLEAN F919_3206 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O2664[dtype-918]);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + O2663[dtype-918]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 <= arg1) && (EIF_BOOLEAN) (arg1 <= ti4_2));
	return Result;
}

/* {ARRAY}.extendible */
EIF_BOOLEAN F919_3207 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {ARRAY}.put */
void F919_3210 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTCCL(arg1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O2664[Dtype(Current)-918]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2572[Dtype(RTCW(tr1))-1193])(tr1, tr2, (EIF_INTEGER_32) (arg2 - ti4_1));
	RTLE;
}

/* {ARRAY}.force */
void F919_3212 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLIU(6);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O2664[dtype-918]);
	loc3 = eif_min_int32 (ti4_1,arg2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O2663[dtype-918]);
	loc4 = eif_max_int32 (ti4_1,arg2);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - loc3) + ((EIF_INTEGER_32) 1L));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O2663[dtype-918]);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + O2664[dtype-918]);
	loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))) || (EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2662[dtype-918])(Current)) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2276[dtype-818])(Current);
		ti4_1 = eif_max_int32 (loc2,ti4_1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2154[dtype-519])(Current, ti4_1);
		if ((EIF_BOOLEAN) (loc3 < *(EIF_INTEGER_32 *)(Current + O2664[dtype-918]))) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2574[Dtype(RTCW(tr1))-1193])(tr1, tr2);
			if ((EIF_BOOLEAN) !loc7) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = RTLNTY2(eif_final_id(Y2164,Y2164_gen_type,dftype,548), 0x00);
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3887[Dtype(tr2)-1422])(tr2);
				tr3 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R2576[Dtype(RTCW(tr1))-1193])(tr1, tr3, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
			}
		} else {
			if ((EIF_BOOLEAN) !loc7) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = RTLNTY2(eif_final_id(Y2164,Y2164_gen_type,dftype,548), 0x00);
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3887[Dtype(tr2)-1422])(tr2);
				tr3 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R2576[Dtype(RTCW(tr1))-1193])(tr1, tr3, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 2L)));
			}
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2574[Dtype(RTCW(tr1))-1193])(tr1, tr2);
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current);
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2080[Dtype(RTCW(tr1))-1193])(tr1);
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2276[dtype-818])(Current);
			ti4_1 = eif_max_int32 (loc2,(EIF_INTEGER_32) (loc1 + ti4_1));
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2589[Dtype(RTCW(tr1))-1193])(tr1, ti4_1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2161[dtype-519])(Current, tr1);
		}
		if ((EIF_BOOLEAN) (loc3 < *(EIF_INTEGER_32 *)(Current + O2664[dtype-918]))) {
			loc6 = *(EIF_INTEGER_32 *)(Current + O2664[dtype-918]);
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 - loc3);
			loc5 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2272[dtype-818])(Current);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc7 && (EIF_BOOLEAN) (loc6 > loc5))) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = RTLNTY2(eif_final_id(Y2164,Y2164_gen_type,dftype,548), 0x00);
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3887[Dtype(tr2)-1422])(tr2);
				tr3 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R2576[Dtype(RTCW(tr1))-1193])(tr1, tr3, loc5, (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L)));
			}
			tr1 = *(EIF_REFERENCE *)(Current);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R2580[Dtype(RTCW(tr1))-1193])(tr1, ((EIF_INTEGER_32) 0L), loc6, loc5);
			if ((EIF_BOOLEAN) !loc7) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = RTLNTY2(eif_final_id(Y2164,Y2164_gen_type,dftype,548), 0x00);
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3887[Dtype(tr2)-1422])(tr2);
				tr3 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R2576[Dtype(RTCW(tr1))-1193])(tr1, tr3, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L)));
			}
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2572[Dtype(RTCW(tr1))-1193])(tr1, tr2, ((EIF_INTEGER_32) 0L));
		} else {
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(tr1))-1193])(tr1);
			if ((EIF_BOOLEAN) (loc2 > ti4_1)) {
				if ((EIF_BOOLEAN) !loc7) {
					tr1 = *(EIF_REFERENCE *)(Current);
					tr2 = RTLNTY2(eif_final_id(Y2164,Y2164_gen_type,dftype,548), 0x00);
					tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3887[Dtype(tr2)-1422])(tr2);
					tr3 = RTCCL(tr2);
					tr4 = *(EIF_REFERENCE *)(Current);
					ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(tr4))-1193])(tr4);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R2576[Dtype(RTCW(tr1))-1193])(tr1, tr3, ti4_1, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 2L)));
				}
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2574[Dtype(RTCW(tr1))-1193])(tr1, tr2);
			} else {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = RTCCL(arg1);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + O2664[dtype-918]);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2572[Dtype(RTCW(tr1))-1193])(tr1, tr2, (EIF_INTEGER_32) (arg2 - ti4_1));
			}
		}
	}
	*(EIF_INTEGER_32 *)(Current + O2664[dtype-918]) = (EIF_INTEGER_32) loc3;
	*(EIF_INTEGER_32 *)(Current + O2663[dtype-918]) = (EIF_INTEGER_32) loc4;
	RTLE;
}

/* {ARRAY}.subcopy */
void F919_3215 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O2664[Dtype(arg1)-918]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R2579[Dtype(RTCW(tr1))-1193])(tr1, tr2, (EIF_INTEGER_32) (arg2 - ti4_1), (EIF_INTEGER_32) (arg4 - *(EIF_INTEGER_32 *)(Current + O2664[Dtype(Current)-918])), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {ARRAY}.grow */
void F919_3229 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 > (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2272[dtype-818])(Current))) {
		tr1 = RTLNTY2(eif_final_id(Y2164,Y2164_gen_type,Dftype(Current),548), 0x00);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3887[Dtype(tr1)-1422])(tr1);
		tr2 = RTCCL(tr1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O2664[dtype-918]);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + O2663[dtype-918]);
		ti4_3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2272[dtype-818])(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R2655[dtype-918])(Current, tr2, ti4_1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + arg1) - ti4_3));
	}
	RTLE;
}

/* {ARRAY}.conservative_resize_with_default */
void F919_3231 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2662[dtype-918])(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTCCL(arg1);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2590[Dtype(RTCW(tr1))-1193])(tr1, tr2, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L)));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2161[dtype-519])(Current, tr1);
		*(EIF_INTEGER_32 *)(Current + O2664[dtype-918]) = (EIF_INTEGER_32) arg2;
		*(EIF_INTEGER_32 *)(Current + O2663[dtype-918]) = (EIF_INTEGER_32) arg3;
	} else {
		loc2 = eif_min_int32 (arg2,*(EIF_INTEGER_32 *)(Current + O2664[dtype-918]));
		loc3 = eif_max_int32 (arg3,*(EIF_INTEGER_32 *)(Current + O2663[dtype-918]));
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - loc2) + ((EIF_INTEGER_32) 1L));
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(tr1))-1193])(tr1);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTCCL(arg1);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2590[Dtype(RTCW(tr1))-1193])(tr1, tr2, loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2161[dtype-519])(Current, tr1);
		}
		if ((EIF_BOOLEAN) (loc2 < *(EIF_INTEGER_32 *)(Current + O2664[dtype-918]))) {
			loc4 = *(EIF_INTEGER_32 *)(Current + O2664[dtype-918]);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc2);
			tr1 = *(EIF_REFERENCE *)(Current);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R2580[Dtype(RTCW(tr1))-1193])(tr1, ((EIF_INTEGER_32) 0L), loc4, (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O2663[dtype-918]) - *(EIF_INTEGER_32 *)(Current + O2664[dtype-918])) + ((EIF_INTEGER_32) 1L)));
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R2576[Dtype(RTCW(tr1))-1193])(tr1, tr2, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L)));
		}
		*(EIF_INTEGER_32 *)(Current + O2664[dtype-918]) = (EIF_INTEGER_32) loc2;
		*(EIF_INTEGER_32 *)(Current + O2663[dtype-918]) = (EIF_INTEGER_32) loc3;
	}
	RTLE;
}

/* {ARRAY}.linear_representation */
EIF_REFERENCE F919_3238 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
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
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2272[dtype-818])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3081[Dtype(RTCW(loc1))-950])(loc1, ti4_1);
	loc2 = *(EIF_INTEGER_32 *)(Current + O2664[dtype-918]);
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 > *(EIF_INTEGER_32 *)(Current + O2663[dtype-918]))) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2252[dtype-849])(Current, (EIF_REFERENCE) &loc2);
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(loc1))-818])(loc1, tr2);
		loc2++;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {ARRAY}.copy */
void F919_3239 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tr1 = F1_14(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2161[Dtype(Current)-519])(Current, tr1);
	}
	RTLE;
}

/* {ARRAY}.extend */
void F919_3242 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {ARRAY}.empty_area */
EIF_BOOLEAN F919_3243 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2080[Dtype(RTCW(tr1))-1193])(tr1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

void EIF_Minit249 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
