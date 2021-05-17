/*
 * Code for class LINEAR [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li264.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LINEAR}.has */
EIF_BOOLEAN F605_2602 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[dtype-911])(Current);
	if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2291[dtype-911])(Current)) {
		tr1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2301[dtype-911])(Current, tr1);
	}
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2305[dtype-911])(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {LINEAR}.index_of */
EIF_INTEGER_32 F605_2603 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current + O2212[dtype-574]) && (EIF_BOOLEAN)(arg1 != NULL))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[dtype-911])(Current);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			tb1 = '\01';
			if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2305[dtype-911])(Current)) {
				tb1 = (EIF_BOOLEAN)(loc1 == arg2);
			}
			if (tb1) break;
			if (RTEQ((FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2290[dtype-911])(Current), arg1)) {
				loc1++;
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[dtype-911])(Current);
			loc2++;
		}
	} else {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[dtype-911])(Current);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			tb2 = '\01';
			if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2305[dtype-911])(Current)) {
				tb2 = (EIF_BOOLEAN)(loc1 == arg2);
			}
			if (tb2) break;
			if (RTCEQ((FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2290[dtype-911])(Current), arg1)) {
				loc1++;
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[dtype-911])(Current);
			loc2++;
		}
	}
	if ((EIF_BOOLEAN)(loc1 == arg2)) {
		RTLE;
		return (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {LINEAR}.search */
void F605_2604 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O2212[dtype-574])) {
		for (;;) {
			tb1 = '\01';
			if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2305[dtype-911])(Current)) {
				tb1 = RTEQ(arg1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2290[dtype-911])(Current));
			}
			if (tb1) break;
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[dtype-911])(Current);
		}
	} else {
		for (;;) {
			tb2 = '\01';
			if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2305[dtype-911])(Current)) {
				tb2 = RTCEQ(arg1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2290[dtype-911])(Current));
			}
			if (tb2) break;
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[dtype-911])(Current);
		}
	}
	RTLE;
}

/* {LINEAR}.exhausted */
EIF_BOOLEAN F605_2608 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2291[Dtype(Current)-911])(Current);
}

/* {LINEAR}.off */
EIF_BOOLEAN F605_2610 (EIF_REFERENCE Current)
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
	if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2210[dtype-715])(Current)) {
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-911])(Current);
	}
	RTLE;
	return Result;
}

/* {LINEAR}.do_all */
void F605_2613 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc1);
	RTLR(4,arg1);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTGC;
	loc3 = Current;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,699,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2164,Y2164_gen_type,dftype,548);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc3 = RTRV(typres0,loc3);
	}
	if (EIF_TEST(loc3)) {
		loc2 = (EIF_REFERENCE) loc3;
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2264[Dtype(loc3)-911])(loc3);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[dtype-911])(Current);
	for (;;) {
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-911])(Current)) break;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2290[dtype-911])(Current);
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[dtype-911])(Current);
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != NULL) && (EIF_BOOLEAN)(loc1 != NULL))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(RTCW(loc2))-911])(loc2, loc1);
	}
	RTLE;
}

/* {LINEAR}.linear_representation */
EIF_REFERENCE F605_2617 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) Current;
}

void EIF_Minit264 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
