/*
 * Code for class EV_MULTI_COLUMN_LIST_ROW_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1789.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MULTI_COLUMN_LIST_ROW_I}.pixmap */
EIF_REFERENCE F1800_20234 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_21_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = F1_14(loc1);
		tb1 = '\0';
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			ti4_1 = F1614_18068(loc1);
			ti4_2 = *(EIF_INTEGER_32 *)(loc2+ _LNGOFF_65_27_6_5_);
			tb2 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
		}
		if (tb2) {
			ti4_1 = F1614_18069(loc1);
			ti4_2 = *(EIF_INTEGER_32 *)(loc2+ _LNGOFF_65_27_6_6_);
			tb1 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
		}
		if (tb1) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc2+ _LNGOFF_65_27_6_5_);
			ti4_2 = *(EIF_INTEGER_32 *)(loc2+ _LNGOFF_65_27_6_6_);
			F1653_18638(RTCW(Result), ti4_1, ti4_2);
		}
	}
	RTLE;
	return Result;
}

void EIF_Minit1789 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
