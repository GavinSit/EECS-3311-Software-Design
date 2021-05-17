/*
 * Code for class EV_HELP_CONTEXTABLE_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1697.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_HELP_CONTEXTABLE_I}.help_context */
EIF_REFERENCE F1704_19116 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,loc4);
	RTLIU(6);
	
	RTGC;
	loc1 = Current;
	loc1 = RTRV(eif_new_type(1751, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		for (;;) {
			if (loc2) break;
			Result = *(EIF_REFERENCE *)(RTCW(loc1) + O15998[Dtype(loc1)-1703]);
			tb1 = '\0';
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16555[Dtype(RTCW(loc1))-1871])(loc1);
			loc3 = tr1;
			if (EIF_TEST(loc3)) {
				tr1 = *(EIF_REFERENCE *)(loc3 + _REFACS_3_);
				loc4 = tr1;
				tb1 = (EIF_TRUE);
			}
			if (tb1) {
				loc1 = (EIF_REFERENCE) loc4;
			} else {
				loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	}
	RTLE;
	return Result;
}

void EIF_Minit1697 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
