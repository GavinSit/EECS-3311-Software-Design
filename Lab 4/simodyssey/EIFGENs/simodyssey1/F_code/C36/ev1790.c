/*
 * Code for class EV_TOOL_BAR_BUTTON_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1790.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TOOL_BAR_BUTTON_I}.update_for_pick_and_drop */
void F1801_20247 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	if (arg1) {
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		if (*(EIF_BOOLEAN *)(Current + O19635[dtype-1964])) {
			tr1 = *(EIF_REFERENCE *)(RTCV(F1751_19782(Current)) + _REFACS_47_);
			loc1 = tr1;
			tb3 = EIF_TEST(loc1);
		}
		if (tb3) {
			tr1 = *(EIF_REFERENCE *)(loc1 + O16500[Dtype(loc1)-1750]);
			loc2 = RTCCL(tr1);
			tb2 = EIF_TEST(loc2);
		}
		if (tb2) {
			tr1 = F1587_17684(RTCV(F1696_18976(Current)));
			tr2 = RTCCL(loc2);
			tb2 = F978_14412(RTCW(tr1), tr2);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			*(EIF_BOOLEAN *)(Current + O16936[dtype-1800]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			F1965_23950(Current);
		}
	} else {
		if (*(EIF_BOOLEAN *)(Current + O16936[dtype-1800])) {
			*(EIF_BOOLEAN *)(Current + O16936[dtype-1800]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			F1965_23949(Current);
		}
	}
	RTLE;
}

void EIF_Minit1790 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
