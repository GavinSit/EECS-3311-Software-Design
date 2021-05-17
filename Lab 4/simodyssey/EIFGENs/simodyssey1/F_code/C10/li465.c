/*
 * Code for class LINEAR [NATURAL_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li465.h"

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
EIF_BOOLEAN F611_2602 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F955_4104(Current);
	if ((EIF_BOOLEAN) !F856_3270(Current)) {
		F955_4110(Current, arg1);
	}
	Result = F611_2608(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {LINEAR}.index_of */
EIF_INTEGER_32 F611_2603 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current + O2212[Dtype(Current)-574]) && EIF_TRUE)) {
		F955_4104(Current);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			tb1 = '\01';
			if (!F611_2608(Current)) {
				tb1 = (EIF_BOOLEAN)(loc1 == arg2);
			}
			if (tb1) break;
			if ((F955_4078(Current) == arg1)) {
				loc1++;
			}
			F955_4106(Current);
			loc2++;
		}
	} else {
		F955_4104(Current);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			tb2 = '\01';
			if (!F611_2608(Current)) {
				tb2 = (EIF_BOOLEAN)(loc1 == arg2);
			}
			if (tb2) break;
			if ((EIF_BOOLEAN)(F955_4078(Current) == arg1)) {
				loc1++;
			}
			F955_4106(Current);
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
void F611_2604 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O2212[Dtype(Current)-574])) {
		for (;;) {
			tb1 = '\01';
			if (!F611_2608(Current)) {
				tb1 = (arg1 == F955_4078(Current));
			}
			if (tb1) break;
			F955_4106(Current);
		}
	} else {
		for (;;) {
			tb2 = '\01';
			if (!F611_2608(Current)) {
				tb2 = (EIF_BOOLEAN)(arg1 == F955_4078(Current));
			}
			if (tb2) break;
			F955_4106(Current);
		}
	}
	RTLE;
}

/* {LINEAR}.exhausted */
EIF_BOOLEAN F611_2608 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F856_3270(Current);
}

/* {LINEAR}.off */
EIF_BOOLEAN F611_2610 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\01';
	if (!F742_2537(Current)) {
		Result = F886_3332(Current);
	}
	RTLE;
	return Result;
}

/* {LINEAR}.do_all */
void F611_2613 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_NATURAL_8 tu1_1;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc1);
	RTLR(4,arg1);
	RTLIU(5);
	
	RTGC;
	loc3 = Current;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,705,0,0,0xFFFF};
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
		loc1 = F955_4084(loc3);
	}
	F955_4104(Current);
	for (;;) {
		if (F886_3332(Current)) break;
		tu1_1 = F955_4078(Current);
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_NATURAL_8)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), tu1_1);
		F955_4106(Current);
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != NULL) && (EIF_BOOLEAN)(loc1 != NULL))) {
		F955_4109(RTCW(loc2), loc1);
	}
	RTLE;
}

/* {LINEAR}.linear_representation */
EIF_REFERENCE F611_2617 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) Current;
}

void EIF_Minit465 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
