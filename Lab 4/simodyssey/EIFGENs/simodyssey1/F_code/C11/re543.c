/*
 * Code for class READABLE_INDEXABLE_ITERATION_CURSOR [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re543.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.make */
void F1071_4330 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(126, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		tu4_1 = *(EIF_NATURAL_32 *)(loc1);
		*(EIF_NATURAL_32 *)(Current + O3215[dtype-1062]) = (EIF_NATURAL_32) tu4_1;
	} else {
		*(EIF_NATURAL_32 *)(Current + O3215[dtype-1062]) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	}
	*(EIF_INTEGER_32 *)(Current + O3220[dtype-1062]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_BOOLEAN *)(Current + O3219[dtype-1062]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.target_index */
EIF_INTEGER_32 F1071_4332 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3223[Dtype(Current)-1062]);
}


/* {READABLE_INDEXABLE_ITERATION_CURSOR}.first_index */
EIF_INTEGER_32 F1071_4333 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3222[Dtype(Current)-1062]);
}


/* {READABLE_INDEXABLE_ITERATION_CURSOR}.last_index */
EIF_INTEGER_32 F1071_4334 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3221[Dtype(Current)-1062]);
}


/* {READABLE_INDEXABLE_ITERATION_CURSOR}.step */
EIF_INTEGER_32 F1071_4335 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3220[Dtype(Current)-1062]);
}


/* {READABLE_INDEXABLE_ITERATION_CURSOR}.after */
EIF_BOOLEAN F1071_4342 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	Result = '\01';
	if (!(EIF_BOOLEAN) !F1071_4344(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R2560[Dtype(RTCW(tr1))-849])(tr1, *(EIF_INTEGER_32 *)(Current + O3223[Dtype(Current)-1062]));
		Result = (EIF_BOOLEAN) !tb1;
	}
	RTLE;
	return Result;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.is_reversed */
EIF_BOOLEAN F1071_4343 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O3219[Dtype(Current)-1062]);
}


/* {READABLE_INDEXABLE_ITERATION_CURSOR}.is_valid */
EIF_BOOLEAN F1071_4344 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	Result = '\01';
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(126, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		tu4_1 = *(EIF_NATURAL_32 *)(loc1);
		Result = (EIF_BOOLEAN)(tu4_1 == *(EIF_NATURAL_32 *)(Current + O3215[Dtype(Current)-1062]));
	}
	RTLE;
	return Result;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.start */
void F1071_4349 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	if (*(EIF_BOOLEAN *)(Current + O3219[dtype-1062])) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2558[Dtype(RTCW(loc1))-849])(loc1);
		*(EIF_INTEGER_32 *)(Current + O3222[dtype-1062]) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2557[Dtype(RTCW(loc1))-849])(loc1);
		*(EIF_INTEGER_32 *)(Current + O3221[dtype-1062]) = (EIF_INTEGER_32) ti4_1;
	} else {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2558[Dtype(RTCW(loc1))-849])(loc1);
		*(EIF_INTEGER_32 *)(Current + O3221[dtype-1062]) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2557[Dtype(RTCW(loc1))-849])(loc1);
		*(EIF_INTEGER_32 *)(Current + O3222[dtype-1062]) = (EIF_INTEGER_32) ti4_1;
	}
	*(EIF_INTEGER_32 *)(Current + O3223[dtype-1062]) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O3222[dtype-1062]);
	RTLE;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.forth */
void F1071_4350 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O3219[dtype-1062])) {
		(*(EIF_INTEGER_32 *)(Current + O3223[dtype-1062])) -= *(EIF_INTEGER_32 *)(Current + O3220[dtype-1062]);
	} else {
		(*(EIF_INTEGER_32 *)(Current + O3223[dtype-1062])) += *(EIF_INTEGER_32 *)(Current + O3220[dtype-1062]);
	}
	RTLE;
}

/* {READABLE_INDEXABLE_ITERATION_CURSOR}.target */
EIF_REFERENCE F1071_4351 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit543 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
