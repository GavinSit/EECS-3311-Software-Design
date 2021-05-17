/*
 * Code for class EV_WEL_TOOLTIPABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1335.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WEL_TOOLTIPABLE}.tooltip */
EIF_REFERENCE F516_14185 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11797[dtype-515]) == NULL)) {
		tr1 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1558_6510(RTCW(tr1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O11797[dtype-515]);
		Result = F1_14(tr1);
	}
	RTLE;
	return Result;
}

/* {EV_WEL_TOOLTIPABLE}.set_tooltip */
void F516_14186 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1605, 0x01).id, 1605, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F1596_17742(RTCW(loc1));
	loc1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	loc1 = F1713_19262(RTCW(loc1));
	loc1 = RTRV(eif_new_type(1909, 0x00), loc1);
	RTCT0("l_app_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4659[Dtype(RTCW(arg1))-1560])(arg1);
	if ((EIF_BOOLEAN) !tb1) {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11796[dtype-515]) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + O11796[dtype-515]);
			F1902_22244(RTCW(tr1), arg1);
			tb1 = '\01';
			if (!(EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11797[dtype-515]) == NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + O11797[dtype-515]);
				tb2 = F737_2537(RTCW(tr1));
				tb1 = tb2;
			}
			if (tb1) {
				tr1 = RTOUCR(270,F1910_22432, (RTCW(loc1)));
				F1927_22943(RTCW(tr1), *(EIF_REFERENCE *)(Current + O11796[dtype-515]));
			} else {
				tr1 = RTOUCR(270,F1910_22432, (RTCW(loc1)));
				F1927_22946(RTCW(tr1), *(EIF_REFERENCE *)(Current + O11796[dtype-515]));
			}
		} else {
			loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11798[dtype-1934])(Current);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				tr1 = RTLNSMART(eif_new_type(1901, 0).id);
				F1902_22228(RTCW(tr1));
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + O11796[dtype-515]) = (EIF_REFERENCE) tr1;
				tr1 = *(EIF_REFERENCE *)(Current + O11796[dtype-515]);
				F1902_22244(RTCW(tr1), arg1);
				tr1 = *(EIF_REFERENCE *)(Current + O11796[dtype-515]);
				F1902_22238(RTCW(tr1), (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) + ((EIF_INTEGER_32) 1L)));
				tr1 = *(EIF_REFERENCE *)(Current + O11796[dtype-515]);
				F1902_22240(RTCW(tr1), loc2);
				tr1 = RTOUCR(270,F1910_22432, (RTCW(loc1)));
				F1927_22943(RTCW(tr1), *(EIF_REFERENCE *)(Current + O11796[dtype-515]));
			}
		}
	} else {
		tb1 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11797[dtype-515]) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + O11797[dtype-515]);
			tb2 = F737_2537(RTCW(tr1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCT0("tool_info_not_void", EX_CHECK);
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11796[dtype-515]) != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tr1 = RTOUCR(270,F1910_22432, (RTCW(loc1)));
			F1927_22945(RTCW(tr1), *(EIF_REFERENCE *)(Current + O11796[dtype-515]));
		}
	}
	tr1 = F1558_6569(RTCW(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O11797[dtype-515]) = (EIF_REFERENCE) tr1;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11797[dtype-515]) == arg1)) {
		tr1 = F1558_6569(RTCW(arg1));
		tr1 = F1_14(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O11797[dtype-515]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {EV_WEL_TOOLTIPABLE}.tooltip_window */
EIF_REFERENCE F516_14189 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) NULL;
}

void EIF_Minit1335 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
