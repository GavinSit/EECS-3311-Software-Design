/*
 * Code for class HEAP_PRIORITY_QUEUE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "he2043.h"
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

/* {HEAP_PRIORITY_QUEUE}.item */
EIF_REFERENCE F819_2563 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	RTLE;
	return (EIF_REFERENCE) F819_2587(Current, ((EIF_INTEGER_32) 1L));
}

/* {HEAP_PRIORITY_QUEUE}.count */
EIF_INTEGER_32 F819_2566 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(tr1))-1193])(tr1);
	RTLE;
	return Result;
}

/* {HEAP_PRIORITY_QUEUE}.capacity */
EIF_INTEGER_32 F819_2567 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2080[Dtype(RTCW(tr1))-1193])(tr1);
	RTLE;
	return Result;
}

/* {HEAP_PRIORITY_QUEUE}.extendible */
EIF_BOOLEAN F819_2570 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F789_2551(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {HEAP_PRIORITY_QUEUE}.is_equal */
EIF_BOOLEAN F819_2573 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		tb1 = '\0';
		tb2 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_1_0_);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) == tb2)) {
			ti4_1 = F819_2566(RTCW(arg1));
			tb1 = (EIF_BOOLEAN)(F819_2566(Current) == ti4_1);
		}
		if (tb1) {
			loc1 = F1_14(Current);
			loc2 = F1_14(arg1);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			for (;;) {
				tb1 = '\01';
				if (!(EIF_BOOLEAN) !Result) {
					tb2 = F736_2537(RTCW(loc1));
					tb1 = tb2;
				}
				if (tb1) break;
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
					tr1 = F819_2563(RTCW(loc1));
					tr2 = F819_2563(RTCW(loc2));
					Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
				} else {
					tr1 = F819_2563(RTCW(loc1));
					tr2 = F819_2563(RTCW(loc2));
					Result = (EIF_BOOLEAN) RTCEQ(tr1, tr2);
				}
				F819_2579(RTCW(loc1));
				F819_2579(RTCW(loc2));
			}
		}
	}
	RTLE;
	return Result;
}

/* {HEAP_PRIORITY_QUEUE}.put */
void F819_2575 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTGC;
	loc1 = F819_2566(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 1L))) {
			tr1 = F819_2587(Current, (EIF_INTEGER_32) (loc1 / ((EIF_INTEGER_32) 2L)));
			tr2 = RTCCL(tr1);
			tr3 = RTCCL(arg1);
			tb1 = (EIF_BOOLEAN) !F819_2591(Current, tr2, tr3);
		}
		if (tb1) break;
		tr1 = F819_2587(Current, (EIF_INTEGER_32) (loc1 / ((EIF_INTEGER_32) 2L)));
		tr2 = RTCCL(tr1);
		F819_2589(Current, tr2, loc1);
		loc1 /= ((EIF_INTEGER_32) 2L);
	}
	tr1 = RTCCL(arg1);
	F819_2589(Current, tr1, loc1);
	RTLE;
}

/* {HEAP_PRIORITY_QUEUE}.extend */
void F819_2576 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	tr1 = RTCCL(arg1);
	F819_2575(Current, tr1);
	RTLE;
}

/* {HEAP_PRIORITY_QUEUE}.copy */
void F819_2577 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = F1_14(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {HEAP_PRIORITY_QUEUE}.remove */
void F819_2579 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLIU(6);
	
	RTGC;
	loc4 = F819_2566(Current);
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc3 = F819_2587(Current, (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)));
		for (;;) {
			if ((EIF_BOOLEAN) (loc5 || (EIF_BOOLEAN) (loc1 > (EIF_INTEGER_32) (loc4 / ((EIF_INTEGER_32) 2L))))) break;
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc1);
			tb1 = '\0';
			if ((EIF_BOOLEAN) (loc2 < loc4)) {
				tr1 = F819_2587(Current, loc2);
				tr2 = RTCCL(tr1);
				tr3 = F819_2587(Current, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
				tr4 = RTCCL(tr3);
				tb1 = F819_2591(Current, tr2, tr4);
			}
			if (tb1) {
				loc2++;
			}
			tr1 = RTCCL(loc3);
			tr2 = F819_2587(Current, loc2);
			tr3 = RTCCL(tr2);
			loc5 = F819_2591(Current, tr1, tr3);
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) !loc5;
			if ((EIF_BOOLEAN) !loc5) {
				tr1 = F819_2587(Current, loc2);
				tr2 = RTCCL(tr1);
				F819_2588(Current, tr2, loc1);
				loc1 = (EIF_INTEGER_32) loc2;
			}
		}
		tr1 = RTCCL(loc3);
		F819_2588(Current, tr1, loc1);
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2586[Dtype(RTCW(tr1))-1193])(tr1, ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {HEAP_PRIORITY_QUEUE}.grow */
void F819_2582 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2080[Dtype(RTCW(tr1))-1193])(tr1);
	if ((EIF_BOOLEAN) (arg1 > ti4_1)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2589[Dtype(RTCW(tr1))-1193])(tr1, arg1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {HEAP_PRIORITY_QUEUE}.linear_representation */
EIF_REFERENCE F819_2584 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	loc1 = F1_14(Current);
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
		Result = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = F819_2566(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3081[Dtype(RTCW(Result))-950])(Result, ti4_1);
	for (;;) {
		tb1 = F736_2537(RTCW(loc1));
		if (tb1) break;
		tr1 = F819_2563(RTCW(loc1));
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(Result))-818])(Result, tr2);
		F819_2579(RTCW(loc1));
	}
	RTLE;
	return Result;
}

/* {HEAP_PRIORITY_QUEUE}.i_th */
EIF_REFERENCE F819_2587 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(tr1))-849])(tr1, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)));
	RTLE;
	return Result;
}

/* {HEAP_PRIORITY_QUEUE}.put_i_th */
void F819_2588 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2572[Dtype(RTCW(tr1))-1193])(tr1, tr2, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {HEAP_PRIORITY_QUEUE}.force_i_th */
void F819_2589 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2573[Dtype(RTCW(tr1))-1193])(tr1, tr2, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {HEAP_PRIORITY_QUEUE}.safe_less_than */
EIF_BOOLEAN F819_2591 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 != NULL) && (EIF_BOOLEAN)(arg2 != NULL))) {
		tr1 = RTCCL(arg2);
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R1384[Dtype(RTCW(arg1))-485])(arg1, tr1);
	} else {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == NULL) && (EIF_BOOLEAN)(arg2 != NULL))) {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	}
	RTLE;
	return Result;
}

void EIF_Minit2043 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
