/*
 * Code for class EV_NOTEBOOK_TAB_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1799.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_NOTEBOOK_TAB_IMP}.make */
void F1810_20350 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1696_18990(Current, (EIF_BOOLEAN) 1);
}

/* {EV_NOTEBOOK_TAB_IMP}.set_pixmap */
void F1810_20352 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,arg1);
	RTLIU(5);
	
	RTGC;
	tb1 = '\0';
	tr1 = F1810_20357(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		F1973_24268(loc1, loc2, arg1);
	}
	RTLE;
}

/* {EV_NOTEBOOK_TAB_IMP}.wel_text */
EIF_REFERENCE F1810_20354 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	tb1 = '\0';
	tr1 = F1810_20357(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		tr1 = F1973_24271(loc1, loc2);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1558_6510(RTCW(tr1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

/* {EV_NOTEBOOK_TAB_IMP}.wel_set_text */
void F1810_20356 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,arg1);
	RTLIU(5);
	
	RTGC;
	tb1 = '\0';
	tr1 = F1810_20357(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		F1973_24266(loc1, loc2, arg1);
	}
	RTLE;
}

/* {EV_NOTEBOOK_TAB_IMP}.notebook_imp */
EIF_REFERENCE F1810_20357 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = *(EIF_REFERENCE *)(loc1 + _REFACS_3_);
		RTLE;
		return RTRV(eif_new_type(1972, 0x00), Result);
	}
	RTLE;
	return Result;
}

/* {EV_NOTEBOOK_TAB_IMP}.destroy */
void F1810_20358 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1696_18991(Current, (EIF_BOOLEAN) 1);
}

void EIF_Minit1799 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
