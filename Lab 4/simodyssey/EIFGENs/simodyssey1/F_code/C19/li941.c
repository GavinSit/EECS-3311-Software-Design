/*
 * Code for class LINKED_QUEUE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li941.h"
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

/* {LINKED_QUEUE}.make */
void F918_3575 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {LINKED_QUEUE}.item */
EIF_REFERENCE F918_3577 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	RTCT0("attached active as a", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1718[Dtype(loc1)-488])(loc1);
	RTLE;
	return Result;
}

/* {LINKED_QUEUE}.extend */
void F918_3579 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	F912_3541(Current, tr1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {LINKED_QUEUE}.linear_representation */
EIF_REFERENCE F918_3581 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2164,Y2164_gen_type,dftype,548);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc1 = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3081[Dtype(RTCW(loc1))-950])(loc1, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_));
	F912_3534(Current);
	for (;;) {
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) break;
		tr1 = F912_3517(Current);
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(loc1))-818])(loc1, tr2);
		F912_3536(Current);
	}
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2164,Y2164_gen_type,dftype,548);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		Result = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3081[Dtype(RTCW(Result))-950])(Result, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2307[Dtype(RTCW(loc1))-911])(loc1);
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2359[Dtype(RTCW(loc1))-911])(loc1);
		if (tb1) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(RTCW(loc1))-818])(loc1);
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(Result))-818])(Result, tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2360[Dtype(RTCW(loc1))-911])(loc1);
	}
	RTLE;
	return Result;
}

/* {LINKED_QUEUE}.copy */
void F918_3583 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		eif_builtin_ANY_standard_copy (Current, arg1);
		tb1 = F736_2537(RTCW(arg1));
		if ((EIF_BOOLEAN) !tb1) {
			F912_3560(Current);
			loc1 = F912_3521(RTCW(arg1));
			F912_3534(RTCW(arg1));
			for (;;) {
				tb1 = F912_3528(RTCW(arg1));
				if (tb1) break;
				tr1 = F912_3517(RTCW(arg1));
				tr2 = RTCCL(tr1);
				F912_3542(Current, tr2);
				F912_3536(Current);
				F912_3536(RTCW(arg1));
			}
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				F912_3540(RTCW(arg1), loc1);
			}
		}
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {LINKED_QUEUE}.prune */
void F918_3584 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit941 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
