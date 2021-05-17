/*
 * Code for class EV_MENU_ITEM_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1994.h"
#include <windows.h>
#include "eif_helpers.h"
#include "eif_object_id.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9739
static EIF_INTEGER_32 inline_F67_9739 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	return (EIF_INTEGER_32) (GetMenuItemRect((HWND) arg1, (HMENU) arg2, (UINT) arg3, (RECT *) arg4))
	;
}
#define INLINE_F67_9739
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MENU_ITEM_IMP}.make */
void F2011_25467 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F405_13268(Current);
	*(EIF_BOOLEAN *)(Current + O20189[Dtype(Current)-2010]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	tr1 = RTMS_EX_H("",0,0);
	F2011_25470(Current, tr1);
	RTLE;
}

/* {EV_MENU_ITEM_IMP}.text */
EIF_REFERENCE F2011_25468 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F2011_25483(Current);
}

/* {EV_MENU_ITEM_IMP}.object_id */
EIF_INTEGER_32 F2011_25469 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O20164[dtype-2010]) == ((EIF_INTEGER_32) 0L))) {
		ti4_1 = F518_871(Current, Current);
		*(EIF_INTEGER_32 *)(Current + O20164[dtype-2010]) = (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O20164[dtype-2010]);
}

/* {EV_MENU_ITEM_IMP}.set_text */
void F2011_25470 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16478[Dtype(Current)-1809])(Current, arg1);
}

/* {EV_MENU_ITEM_IMP}.is_sensitive */
EIF_BOOLEAN F2011_25471 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O20189[Dtype(Current)-2010]);
}


/* {EV_MENU_ITEM_IMP}.enable_sensitive */
void F2011_25472 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O20189[dtype-2010]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tb1 = '\0';
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16436[dtype-1871])(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + O20188[dtype-2010]);
		loc1 = tr1;
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		F1316_15506(loc1, *(EIF_INTEGER_32 *)(Current + O10968[dtype-404]));
	}
	RTLE;
}

/* {EV_MENU_ITEM_IMP}.disable_sensitive */
void F2011_25473 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O20189[dtype-2010]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tb1 = '\0';
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16436[dtype-1871])(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + O20188[dtype-2010]);
		loc1 = tr1;
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		F1316_15508(loc1, *(EIF_INTEGER_32 *)(Current + O10968[dtype-404]));
	}
	RTLE;
}

/* {EV_MENU_ITEM_IMP}.set_parent_imp */
void F2011_25474 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O20188[Dtype(Current)-2010]) = (EIF_REFERENCE) arg1;
}

/* {EV_MENU_ITEM_IMP}.x_position */
EIF_INTEGER_32 F2011_25475 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O20188[dtype-2010]);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1730, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		Result = F2011_25477(Current);
		ti4_1 = F1731_19609(loc1);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O20188[dtype-2010]);
		loc2 = tr1;
		loc2 = RTRV(eif_new_type(2014, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			Result = F2011_25477(Current);
			ti4_1 = F2011_25477(loc2);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
		} else {
		}
	}
	RTLE;
	return Result;
}

/* {EV_MENU_ITEM_IMP}.y_position */
EIF_INTEGER_32 F2011_25476 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O20188[dtype-2010]);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1730, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		Result = F2011_25478(Current);
		ti4_1 = F1731_19610(loc1);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O20188[dtype-2010]);
		loc2 = tr1;
		loc2 = RTRV(eif_new_type(2014, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			Result = F2011_25478(Current);
			ti4_1 = F2011_25478(loc2);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
		} else {
		}
	}
	RTLE;
	return Result;
}

/* {EV_MENU_ITEM_IMP}.screen_x */
EIF_INTEGER_32 F2011_25477 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R20186[Dtype(Current)-2010])(Current);
	Result = F1408_17326(RTCV(RTOUCR(265,F2011_25521, (Current))));
	RTLE;
	return Result;
}

/* {EV_MENU_ITEM_IMP}.screen_y */
EIF_INTEGER_32 F2011_25478 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R20186[Dtype(Current)-2010])(Current);
	Result = F1408_17328(RTCV(RTOUCR(265,F2011_25521, (Current))));
	RTLE;
	return Result;
}

/* {EV_MENU_ITEM_IMP}.width */
EIF_INTEGER_32 F2011_25479 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R20186[Dtype(Current)-2010])(Current);
	Result = F1408_17330(RTCV(RTOUCR(265,F2011_25521, (Current))));
	ti4_1 = F1408_17326(RTCV(RTOUCR(265,F2011_25521, (Current))));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	RTLE;
	return Result;
}

/* {EV_MENU_ITEM_IMP}.height */
EIF_INTEGER_32 F2011_25480 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R20186[Dtype(Current)-2010])(Current);
	Result = F1408_17331(RTCV(RTOUCR(265,F2011_25521, (Current))));
	ti4_1 = F1408_17328(RTCV(RTOUCR(265,F2011_25521, (Current))));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	RTLE;
	return Result;
}

/* {EV_MENU_ITEM_IMP}.minimum_width */
EIF_INTEGER_32 F2011_25481 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {EV_MENU_ITEM_IMP}.minimum_height */
EIF_INTEGER_32 F2011_25482 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {EV_MENU_ITEM_IMP}.wel_text */
EIF_REFERENCE F2011_25483 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O20163[Dtype(Current)-2010]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1_14(loc1);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1558_6510(RTCW(tr1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

/* {EV_MENU_ITEM_IMP}.real_text */
EIF_REFERENCE F2011_25484 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O20163[Dtype(Current)-2010]);
}


/* {EV_MENU_ITEM_IMP}.wel_set_text */
void F2011_25485 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4657[Dtype(RTCW(arg1))-1560])(arg1);
		if (tb1) {
			tr1 = F1558_6569(RTCW(arg1));
			tr1 = F1_14(tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O20163[dtype-2010]) = (EIF_REFERENCE) tr1;
		} else {
			tr1 = F1558_6569(RTCW(arg1));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O20163[dtype-2010]) = (EIF_REFERENCE) tr1;
		}
	}
	tr1 = *(EIF_REFERENCE *)(Current + O20188[dtype-2010]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1722_19451(loc1);
	}
	RTLE;
}

/* {EV_MENU_ITEM_IMP}.parent_imp */
EIF_REFERENCE F2011_25487 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O20188[Dtype(Current)-2010]);
}


/* {EV_MENU_ITEM_IMP}.parent */
EIF_REFERENCE F2011_25488 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O20188[Dtype(Current)-2010]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(loc1 + O15892[Dtype(loc1)-1695]);
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		RTLE;
		return (EIF_REFERENCE) loc2;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_MENU_ITEM_IMP}.has_parent */
EIF_BOOLEAN F2011_25489 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + O20188[dtype-2010]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = F1316_15510(loc1, *(EIF_INTEGER_32 *)(Current + O10968[dtype-404]));
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {EV_MENU_ITEM_IMP}.set_pixmap */
void F2011_25491 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	F1743_19690(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(Current + O20188[dtype-2010]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		ti4_1 = F1716_19394(loc1, *(EIF_REFERENCE *)(Current + O15892[dtype-1695]), ((EIF_INTEGER_32) 1L));
		F1722_19465(loc1, Current, ti4_1);
		F1722_19451(loc1);
	}
	RTLE;
}

/* {EV_MENU_ITEM_IMP}.dispose */
void F2011_25493 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O20164[dtype-2010]) != ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O20164[dtype-2010]);
		eif_object_id_free(ti4_1);
		*(EIF_INTEGER_32 *)(Current + O20164[dtype-2010]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
}

/* {EV_MENU_ITEM_IMP}.top_level_window_imp */
EIF_REFERENCE F2011_25494 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O20188[Dtype(Current)-2010]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		loc2 = loc1;
		loc2 = RTRV(eif_new_type(2014, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			tr1 = F2011_25494(loc2);
			RTLE;
			return (EIF_REFERENCE) tr1;
		} else {
			loc3 = loc1;
			loc3 = RTRV(eif_new_type(1730, 0x01),loc3);
			if (EIF_TEST(loc3)) {
				tr1 = F1731_19632(loc3);
				RTLE;
				return (EIF_REFERENCE) tr1;
			} else {
				RTCT0("parent_was_menu_or_bar", EX_CHECK);
					RTCF0;
			}
		}
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_MENU_ITEM_IMP}.plain_text */
EIF_REFERENCE F2011_25495 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F2011_25498(Current, (EIF_BOOLEAN) 1);
}

/* {EV_MENU_ITEM_IMP}.plain_text_without_ampersands */
EIF_REFERENCE F2011_25496 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F2011_25498(Current, (EIF_BOOLEAN) 0);
}

/* {EV_MENU_ITEM_IMP}.accelerator_text */
EIF_REFERENCE F2011_25497 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(F2011_25468(Current) != NULL)) {
		tr1 = F2011_25468(Current);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\011';
		loc1 = F1564_6858(RTCW(tr1), tw1, ((EIF_INTEGER_32) 1L));
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
			tr1 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F1558_6510(RTCW(tr1));
			RTLE;
			return (EIF_REFERENCE) tr1;
		} else {
			tr1 = F2011_25468(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(F2011_25468(Current))+ _LNGOFF_1_1_0_2_);
			Result = F1565_6984(RTCW(tr1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), ti4_1);
		}
	} else {
		Result = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1558_6510(RTCW(Result));
		RTLE;
		return (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {EV_MENU_ITEM_IMP}.internal_plain_text */
EIF_REFERENCE F2011_25498 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(F2011_25468(Current) != NULL)) {
		Result = F1_14(F2011_25468(Current));
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\011';
		loc1 = F1564_6858(RTCW(Result), tw1, ((EIF_INTEGER_32) 1L));
		if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
			tr1 = F1565_6984(RTCW(Result), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
			Result = (EIF_REFERENCE) tr1;
		}
		if ((EIF_BOOLEAN) !arg1) {
			RTLE;
			return (EIF_REFERENCE) F2011_25519(Current, Result);
		}
	} else {
		Result = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1558_6510(RTCW(Result));
		RTLE;
		return (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {EV_MENU_ITEM_IMP}.set_accelerator_text_position */
void F2011_25499 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O20174[Dtype(Current)-2010]) = (EIF_INTEGER_32) arg1;
}

/* {EV_MENU_ITEM_IMP}.set_plain_text_position */
void F2011_25500 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O20175[Dtype(Current)-2010]) = (EIF_INTEGER_32) arg1;
}

/* {EV_MENU_ITEM_IMP}.desired_height */
EIF_INTEGER_32 F2011_25501 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O20163[Dtype(Current)-2010]);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		tr1 = F502_14140(Current);
		loc2 = F1885_21704(RTCW(tr1), loc3);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 4L));
		tr1 = F1743_19689(Current);
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11094[Dtype(loc4)-1871])(loc4);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 4L));
			ti4_1 = eif_max_int32 (loc2,loc1);
			RTLE;
			return (EIF_INTEGER_32) ti4_1;
		} else {
			RTLE;
			return (EIF_INTEGER_32) loc2;
		}
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_MENU_ITEM_IMP}.on_measure_item */
void F2011_25502 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O20188[Dtype(Current)-2010]);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(2014, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		F2015_25553(loc1, arg1);
	} else {
		F2011_25507(Current, arg1);
	}
	RTLE;
}

/* {EV_MENU_ITEM_IMP}.on_draw_item */
void F2011_25503 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O20188[Dtype(Current)-2010]);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(2014, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		F2011_25508(Current, arg1);
	} else {
		F2011_25510(Current, arg1);
	}
	RTLE;
}

/* {EV_MENU_ITEM_IMP}.plain_text_position */
EIF_INTEGER_32 F2011_25505 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O20175[Dtype(Current)-2010]);
}


/* {EV_MENU_ITEM_IMP}.erase_background */
void F2011_25506 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg3);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLIU(4);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1320, 0x01).id, 1320, _OBJSIZ_0_2_0_3_0_1_0_0_);
	F1321_15590(RTCW(loc1), arg3);
	F1306_15298(RTCW(arg1), arg2, loc1);
	F519_14213(RTCW(loc1));
	RTLE;
}

/* {EV_MENU_ITEM_IMP}.on_measure_menu_bar_item */
void F2011_25507 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLR(4,loc5);
	RTLR(5,arg1);
	RTLIU(6);
	
	RTGC;
	tr1 = F502_14140(Current);
	tr2 = F2011_25496(Current);
	loc2 = F1885_21703(RTCW(tr1), tr2);
	loc1 = F2011_25497(Current);
	tb1 = F737_2537(RTCW(loc1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = F502_14140(Current);
		tr2 = RTMS_EX_H(" ",1,32);
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr2)-1560])(tr2, loc1);
		loc3 = F1885_21703(RTCW(tr1), tr2);
	}
	tr1 = F1743_19689(Current);
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		loc4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11093[Dtype(loc5)-1871])(loc5);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 4L));
	}
	F1398_16967(RTCW(arg1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + loc2) + loc3));
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R20171[Dtype(Current)-2010])(Current);
	F1398_16968(RTCW(arg1), ti4_1);
	F2011_25499(Current, ((EIF_INTEGER_32) 0L));
	F2011_25500(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + loc2) + loc3));
	RTLE;
}

/* {EV_MENU_ITEM_IMP}.on_draw_menu_item */
void F2011_25508 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc11 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc12 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,loc16);
	RTLR(5,tr1);
	RTLR(6,loc5);
	RTLR(7,loc4);
	RTLR(8,loc13);
	RTLR(9,tr2);
	RTLIU(10);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1));
	loc2 = F1904_22283(RTCW(arg1));
	loc6 = F1408_17326(RTCW(loc2));
	loc9 = F1408_17330(RTCW(loc2));
	loc7 = F1408_17328(RTCW(loc2));
	loc8 = F1408_17331(RTCW(loc2));
	ti4_1 = F1904_22279(RTCW(arg1));
	ti4_2 = ((EIF_INTEGER_32) 1L);
	ti4_1 = eif_bit_and(ti4_1,ti4_2);
	loc11 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	ti4_1 = F1904_22279(RTCW(arg1));
	ti4_2 = ((EIF_INTEGER_32) 4L);
	ti4_1 = eif_bit_and(ti4_1,ti4_2);
	loc12 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R20179[dtype-2010])(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(Current + O20163[dtype-2010]);
	loc16 = tr1;
	if (EIF_TEST(loc16)) {
		if (loc11) {
			loc5 = F1836_20729(Current);
			if (loc12) {
				loc4 = F1836_20733(Current);
				tb1 = F1829_20497(RTCW(loc4), loc5);
				if (tb1) {
					loc4 = F1836_20738(Current);
				}
			} else {
				loc4 = F1836_20730(Current);
			}
		} else {
			loc5 = F1836_20720(Current);
			loc4 = F1836_20723(Current);
		}
		loc13 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1408_17321(RTCW(loc13), (EIF_INTEGER_32) (loc6 + *(EIF_INTEGER_32 *)(Current + O20175[dtype-2010])), loc7, loc9, loc8);
		F2011_25506(Current, loc1, loc13, loc5);
		tr1 = F502_14140(Current);
		F1306_15264(RTCW(loc1), tr1);
		F1306_15255(RTCW(loc1));
		F1306_15252(RTCW(loc1), loc5);
		loc10 = F1408_17333(RTCW(loc2));
		tr1 = F502_14140(Current);
		ti4_1 = F1885_21704(RTCW(tr1), loc16);
		loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc10 - ti4_1) / ((EIF_INTEGER_32) 2L))));
		loc3 = ((EIF_INTEGER_32) 0L);
		ti4_1 = F1904_22279(RTCW(arg1));
		ti4_2 = ((EIF_INTEGER_32) 256L);
		ti4_1 = eif_bit_and(ti4_1,ti4_2);
		if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
			ti4_1 = ((EIF_INTEGER_32) 1048576L);
			ti4_1 = eif_bit_or(loc3,ti4_1);
			loc3 = (EIF_INTEGER_32) ti4_1;
		}
		tr1 = F502_14140(Current);
		tr2 = RTMS_EX_H("o",1,111);
		loc15 = F1885_21703(RTCW(tr1), tr2);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O20174[dtype-2010]) == ((EIF_INTEGER_32) 0L))) {
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 - loc15);
		} else {
			loc14 = *(EIF_INTEGER_32 *)(Current + O20174[dtype-2010]);
			loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 + loc14) - loc15);
		}
		if ((EIF_BOOLEAN) (loc12 && (EIF_BOOLEAN) !loc11)) {
			tr1 = F1836_20720(Current);
			tr2 = F1836_20731(Current);
			tb1 = F1829_20497(RTCW(tr1), tr2);
			if (tb1) {
				tr1 = F1836_20738(Current);
				F1306_15253(RTCW(loc1), tr1);
				F1408_17334(RTCW(loc13), (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + loc6) + *(EIF_INTEGER_32 *)(Current + O20175[dtype-2010])), (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + loc10), loc14, loc8);
				tr1 = F2011_25495(Current);
				F1306_15278(RTCW(loc1), tr1, loc13, loc3);
				F1408_17334(RTCW(loc13), (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + loc6) + *(EIF_INTEGER_32 *)(Current + O20174[dtype-2010])), (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + loc10), loc9, loc8);
				tr1 = F2011_25497(Current);
				ti4_1 = ((EIF_INTEGER_32) 0L);
				ti4_2 = ((EIF_INTEGER_32) 64L);
				ti4_1 = eif_bit_or(ti4_1,ti4_2);
				F1306_15278(RTCW(loc1), tr1, loc13, ti4_1);
			}
			tr1 = F1836_20733(Current);
			F1306_15253(RTCW(loc1), tr1);
			F1408_17334(RTCW(loc13), (EIF_INTEGER_32) (loc6 + *(EIF_INTEGER_32 *)(Current + O20175[dtype-2010])), loc10, loc14, loc8);
			tr1 = F2011_25495(Current);
			F1306_15278(RTCW(loc1), tr1, loc13, loc3);
			tb1 = F737_2537(RTCV(F2011_25497(Current)));
			if ((EIF_BOOLEAN) !tb1) {
				F1408_17334(RTCW(loc13), (EIF_INTEGER_32) (loc6 + *(EIF_INTEGER_32 *)(Current + O20174[dtype-2010])), loc10, loc9, loc8);
				tr1 = F2011_25497(Current);
				ti4_1 = ((EIF_INTEGER_32) 0L);
				ti4_2 = ((EIF_INTEGER_32) 64L);
				ti4_1 = eif_bit_or(ti4_1,ti4_2);
				F1306_15278(RTCW(loc1), tr1, loc13, ti4_1);
			}
		} else {
			F1306_15252(RTCW(loc1), loc5);
			F1306_15253(RTCW(loc1), loc4);
			F1408_17334(RTCW(loc13), (EIF_INTEGER_32) (loc6 + *(EIF_INTEGER_32 *)(Current + O20175[dtype-2010])), loc10, loc14, loc8);
			tr1 = F2011_25495(Current);
			F1306_15278(RTCW(loc1), tr1, loc13, loc3);
			tb1 = F737_2537(RTCV(F2011_25497(Current)));
			if ((EIF_BOOLEAN) !tb1) {
				F1408_17334(RTCW(loc13), (EIF_INTEGER_32) (loc6 + *(EIF_INTEGER_32 *)(Current + O20174[dtype-2010])), loc10, loc9, loc8);
				tr1 = F2011_25497(Current);
				ti4_1 = ((EIF_INTEGER_32) 0L);
				ti4_2 = ((EIF_INTEGER_32) 64L);
				ti4_1 = eif_bit_or(ti4_1,ti4_2);
				F1306_15278(RTCW(loc1), tr1, loc13, ti4_1);
			}
		}
		F1306_15270(RTCW(loc1));
	}
	RTLE;
}

/* {EV_MENU_ITEM_IMP}.on_draw_menu_item_left_part */
void F2011_25509 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc10 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc11 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,loc13);
	RTLR(5,loc9);
	RTLR(6,tr1);
	RTLR(7,loc15);
	RTLR(8,loc4);
	RTLR(9,loc16);
	RTLR(10,loc14);
	RTLIU(11);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1));
	loc2 = F1904_22283(RTCW(arg1));
	loc3 = F1904_22279(RTCW(arg1));
	loc6 = F1408_17326(RTCW(loc2));
	loc7 = F1408_17328(RTCW(loc2));
	loc8 = F1408_17331(RTCW(loc2));
	ti4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = eif_bit_and(loc3,ti4_1);
	loc10 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	ti4_1 = ((EIF_INTEGER_32) 4L);
	ti4_1 = eif_bit_and(loc3,ti4_1);
	loc11 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	loc13 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1408_17321(RTCW(loc13), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	tb1 = '\0';
	tb2 = '\0';
	if (loc11) {
		tb2 = (EIF_BOOLEAN)(F1743_19689(Current) != NULL);
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN) !loc10;
	}
	if (tb1) {
		loc9 = F1836_20720(Current);
	} else {
		loc9 = F1836_20729(Current);
	}
	if (loc10) {
		F1408_17334(RTCW(loc13), loc6, loc7, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 + *(EIF_INTEGER_32 *)(Current + O20175[dtype-2010])) - ((EIF_INTEGER_32) 2L)), loc8);
		F2011_25506(Current, loc1, loc13, loc9);
		F1408_17334(RTCW(loc13), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 + *(EIF_INTEGER_32 *)(Current + O20175[dtype-2010])) - ((EIF_INTEGER_32) 2L)), loc7, (EIF_INTEGER_32) (loc6 + *(EIF_INTEGER_32 *)(Current + O20175[dtype-2010])), loc8);
		tr1 = F1836_20729(Current);
		F2011_25506(Current, loc1, loc13, tr1);
	} else {
		F1408_17334(RTCW(loc13), loc6, loc7, (EIF_INTEGER_32) (loc6 + *(EIF_INTEGER_32 *)(Current + O20175[dtype-2010])), loc8);
		tr1 = F1836_20720(Current);
		F2011_25506(Current, loc1, loc13, tr1);
	}
	tr1 = F1743_19689(Current);
	loc15 = tr1;
	if (EIF_TEST(loc15)) {
		if (loc11) {
			loc12 = ((EIF_INTEGER_32) 32L);
		} else {
			loc12 = ((EIF_INTEGER_32) 0L);
		}
		loc5 = F1408_17333(RTCW(loc2));
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11094[Dtype(loc15)-1871])(loc15);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 - ti4_1) - ((EIF_INTEGER_32) 2L)) / ((EIF_INTEGER_32) 2L)));
		loc6++;
		loc4 = F2011_25520(Current, loc15);
		tb1 = '\0';
		if (loc11) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R20181[dtype-2010])(Current);
			loc16 = tr1;
			tb1 = EIF_TEST(loc16);
		}
		if (tb1) {
			loc14 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11078[Dtype(loc15)-1871])(loc15);
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11082[Dtype(loc15)-1871])(loc15);
			F62_9668(loc16, loc14, loc4, loc1, loc6, loc5, loc9, tb1);
			F519_14210(RTCW(loc14));
		} else {
			F1306_15284(RTCW(loc1), NULL, loc4, loc6, loc5, loc12);
		}
		F519_14210(RTCW(loc4));
	}
	RTLE;
}

/* {EV_MENU_ITEM_IMP}.on_draw_menu_bar_item */
void F2011_25510 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc11 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc12 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc17 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc20 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc23 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc24 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(14);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,loc16);
	RTLR(5,loc15);
	RTLR(6,loc22);
	RTLR(7,tr1);
	RTLR(8,loc13);
	RTLR(9,loc23);
	RTLR(10,loc21);
	RTLR(11,loc24);
	RTLR(12,loc5);
	RTLR(13,loc19);
	RTLIU(14);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1));
	loc2 = F1904_22283(RTCW(arg1));
	loc4 = F1904_22279(RTCW(arg1));
	loc6 = F1408_17326(RTCW(loc2));
	loc9 = F1408_17330(RTCW(loc2));
	loc7 = F1408_17328(RTCW(loc2));
	loc8 = F1408_17331(RTCW(loc2));
	ti4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = eif_bit_and(loc4,ti4_1);
	loc11 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	ti4_1 = ((EIF_INTEGER_32) 4L);
	ti4_1 = eif_bit_and(loc4,ti4_1);
	loc12 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	loc17 = *(EIF_INTEGER_32 *)(Current + O20175[dtype-2010]);
	loc18 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc9 - loc6) - loc17) / ((EIF_INTEGER_32) 2L));
	loc20 = F1874_21498(Current);
	if (loc20) {
		if (loc11) {
			loc16 = F1836_20742(Current);
			loc15 = F1836_20730(Current);
		} else {
			loc16 = F1836_20743(Current);
			loc15 = F1836_20723(Current);
		}
	} else {
		loc16 = F1836_20720(Current);
		loc15 = F1836_20723(Current);
	}
	F2011_25506(Current, loc1, loc2, loc16);
	if ((EIF_BOOLEAN) !loc20) {
		if (loc11) {
			ti4_1 = ((EIF_INTEGER_32) 2L);
			ti4_2 = ((EIF_INTEGER_32) 15L);
			F1306_15290(RTCW(loc1), loc2, ti4_1, ti4_2);
		} else {
			ti4_1 = ((EIF_INTEGER_32) 64L);
			ti4_1 = eif_bit_and(loc4,ti4_1);
			if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
				ti4_1 = ((EIF_INTEGER_32) 4L);
				ti4_2 = ((EIF_INTEGER_32) 15L);
				F1306_15290(RTCW(loc1), loc2, ti4_1, ti4_2);
			}
		}
	}
	tr1 = F1743_19689(Current);
	loc22 = tr1;
	if (EIF_TEST(loc22)) {
		if (loc12) {
			loc3 = ((EIF_INTEGER_32) 32L);
		} else {
			loc3 = ((EIF_INTEGER_32) 0L);
		}
		loc14 = F1408_17333(RTCW(loc2));
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11094[Dtype(loc22)-1871])(loc22);
		loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc14 - ti4_1) / ((EIF_INTEGER_32) 2L)));
		loc13 = F2011_25520(Current, loc22);
		tb1 = '\0';
		if (loc12) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R20181[dtype-2010])(Current);
			loc23 = tr1;
			tb1 = EIF_TEST(loc23);
		}
		if (tb1) {
			loc21 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11078[Dtype(loc22)-1871])(loc22);
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11082[Dtype(loc22)-1871])(loc22);
			F62_9668(loc23, loc21, loc13, loc1, loc6, loc14, loc16, tb1);
			F519_14210(RTCW(loc21));
		} else {
			F1306_15284(RTCW(loc1), NULL, loc13, (EIF_INTEGER_32) (loc6 + loc18), loc14, loc3);
		}
		F519_14210(RTCW(loc13));
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11093[Dtype(loc22)-1871])(loc22);
		loc18 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc18 + ti4_1) + ((EIF_INTEGER_32) 4L));
	}
	tr1 = *(EIF_REFERENCE *)(Current + O20163[dtype-2010]);
	loc24 = tr1;
	if (EIF_TEST(loc24)) {
		tr1 = F502_14140(Current);
		F1306_15264(RTCW(loc1), tr1);
		F1306_15252(RTCW(loc1), loc16);
		F1306_15253(RTCW(loc1), loc15);
		loc10 = F1408_17333(RTCW(loc2));
		tr1 = F502_14140(Current);
		ti4_1 = F1885_21704(RTCW(tr1), loc24);
		loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc10 - ti4_1) / ((EIF_INTEGER_32) 2L))));
		loc5 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1408_17321(RTCW(loc5), (EIF_INTEGER_32) (loc6 + loc18), loc10, loc9, loc8);
		ti4_1 = ((EIF_INTEGER_32) 64L);
		ti4_2 = ((EIF_INTEGER_32) 0L);
		loc3 = eif_bit_or(ti4_1,ti4_2);
		ti4_1 = ((EIF_INTEGER_32) 256L);
		ti4_1 = eif_bit_and(loc4,ti4_1);
		if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
			ti4_1 = ((EIF_INTEGER_32) 1048576L);
			ti4_1 = eif_bit_or(loc3,ti4_1);
			loc3 = (EIF_INTEGER_32) ti4_1;
		}
		loc19 = F1_14(F2011_25495(Current));
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
		F1565_6952(RTCW(loc19), tw1);
		tr1 = F2011_25497(Current);
		F1565_6938(RTCW(loc19), tr1);
		if (loc12) {
			F1306_15280(RTCW(loc1), loc19, loc5, loc3);
		} else {
			F1306_15278(RTCW(loc1), loc19, loc5, loc3);
		}
		F1306_15270(RTCW(loc1));
	}
	RTLE;
}

/* {EV_MENU_ITEM_IMP}.disabled_image */
static EIF_REFERENCE F2011_25511_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(277)

	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	loc1 = RTLNS(eif_new_type(62, 0x01).id, 62, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tb1 = F63_9679(RTCW(loc1));
	if (tb1) {
		tr1 = RTLNS(eif_new_type(61, 0x01).id, 61, _OBJSIZ_0_0_0_0_0_0_0_0_);
		Result = (EIF_REFERENCE) tr1;
	}
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F2011_25511 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(277,F2011_25511_body,(Current));
}

/* {EV_MENU_ITEM_IMP}.set_capture */
void F2011_25512 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_MENU_ITEM_IMP}.release_capture */
void F2011_25513 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_MENU_ITEM_IMP}.parent_is_sensitive */
EIF_BOOLEAN F2011_25516 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O20188[Dtype(Current)-2010]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16286[Dtype(loc1)-1730])(loc1);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {EV_MENU_ITEM_IMP}.on_activate */
void F2011_25517 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O9239[dtype-220]) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O9239[dtype-220]);
		F977_14409(RTCW(tr1), NULL);
	}
	RTLE;
}

/* {EV_MENU_ITEM_IMP}.remove_ampersands */
EIF_REFERENCE F2011_25519 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	F1564_6847(RTCW(Result), ti4_1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '&';
	loc2 = F1564_6858(RTCW(arg1), tw1, loc1);
	for (;;) {
		if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
		tr1 = F1565_6984(RTCW(arg1), loc1, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
		F1565_6938(RTCW(Result), tr1);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '&';
		loc2 = F1564_6858(RTCW(arg1), tw1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	tr1 = F1565_6984(RTCW(arg1), loc1, ti4_1);
	F1565_6938(RTCW(Result), tr1);
	RTLE;
	return Result;
}

/* {EV_MENU_ITEM_IMP}.extract_icon */
EIF_REFERENCE F2011_25520 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	loc2 = arg1;
	loc2 = RTRV(eif_new_type(1871, 0x01),loc2);
	if (EIF_TEST(loc2)) {
		loc1 = F1872_21268(loc2);
	}
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F519_14211(RTCW(loc1));
	} else {
		loc1 = F414_13404(RTCW(arg1));
		F519_14209(RTCW(loc1));
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {EV_MENU_ITEM_IMP}.bounds_rect */
static EIF_REFERENCE F2011_25521_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(265)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1408_17321(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F2011_25521 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(265,F2011_25521_body,(Current));
}

/* {EV_MENU_ITEM_IMP}.load_bounds_rect */
void F2011_25522 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O20188[dtype-2010]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		tp2 = tp1;
		tp3 = *(EIF_POINTER *)(loc1 + O12527[Dtype(loc1)-1295]);
		ti4_1 = F1716_19394(loc1, *(EIF_REFERENCE *)(Current + O15892[dtype-1695]), ((EIF_INTEGER_32) 1L));
		tp4 = *(EIF_POINTER *)(RTCV(RTOUCR(265,F2011_25521, (Current)))+ _PTROFF_0_1_0_0_0_0_);
		if ((EIF_BOOLEAN)(inline_F67_9739(tp2, tp3, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), tp4) == ((EIF_INTEGER_32) 0L))) {
			tr1 = RTOUCR(265,F2011_25521, (Current));
			F1408_17334(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
		}
	} else {
		tr1 = RTOUCR(265,F2011_25521, (Current));
		F1408_17334(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	}
	RTLE;
}

void EIF_Minit1994 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
