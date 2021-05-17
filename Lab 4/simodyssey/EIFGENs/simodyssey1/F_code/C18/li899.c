/*
 * Code for class LINKED_LIST_ITERATION_CURSOR [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li899.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LINKED_LIST_ITERATION_CURSOR}.item */
EIF_BOOLEAN F1080_4352 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		RTLE;
		return (EIF_BOOLEAN) F1061_4324(Current);
	} else {
		RTCT0("active_attached", EX_CHECK);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			RTCK0;
		} else {
			RTCF0;
		}
		Result = *(EIF_BOOLEAN *)(loc1+ _CHROFF_1_0_);
	}
	RTLE;
	return Result;
}

/* {LINKED_LIST_ITERATION_CURSOR}.after */
EIF_BOOLEAN F1080_4353 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		RTLE;
		return (EIF_BOOLEAN) F1076_4342(Current);
	} else {
		Result = '\01';
		if (!(EIF_BOOLEAN) !F1076_4344(Current)) {
			Result = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL);
		}
	}
	RTLE;
	return Result;
}

/* {LINKED_LIST_ITERATION_CURSOR}.start */
void F1080_4354 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1076_4349(Current);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr1 = *(EIF_REFERENCE *)(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {LINKED_LIST_ITERATION_CURSOR}.forth */
void F1080_4355 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	F1076_4350(Current);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			loc2 = tr1;
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_1_)) || (EIF_BOOLEAN) !EIF_TEST(loc2))) break;
			tr1 = *(EIF_REFERENCE *)(loc2);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
			loc1++;
		}
	}
	RTLE;
}

/* {LINKED_LIST_ITERATION_CURSOR}.target */
EIF_REFERENCE F1080_4356 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit899 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
