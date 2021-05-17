/*
 * Code for class EV_RADIO_MENU_ITEM_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1997.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_RADIO_MENU_ITEM_IMP}.make */
void F2014_25539 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F2011_25467(Current);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_26_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {EV_RADIO_MENU_ITEM_IMP}.is_selected */
EIF_BOOLEAN F2014_25540 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_26_8_);
}


/* {EV_RADIO_MENU_ITEM_IMP}.disable_select */
void F2014_25541 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_26_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_RADIO_MENU_ITEM_IMP}.enable_select */
void F2014_25542 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc1);
	RTLR(5,loc4);
	RTLIU(6);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_14_);
	loc2 = tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_25_);
	loc3 = tr1;
	if ((EIF_BOOLEAN) (EIF_TEST(loc2) && EIF_TEST(loc3))) {
		loc1 = F912_3521(loc2);
		F912_3534(loc2);
		for (;;) {
			tb1 = F912_3528(loc2);
			if (tb1) break;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(loc2)-818])(loc2);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_26_14_6_2_);
			F1316_15505(loc3, ti4_1);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(loc2)-818])(loc2);
			F2014_25541(RTCW(tr1));
			F912_3536(loc2);
		}
		F912_3540(loc2, loc1);
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_26_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tb2 = '\0';
	if (F2011_25489(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_25_);
		loc4 = tr1;
		tb2 = EIF_TEST(loc4);
	}
	if (tb2) {
		F1316_15504(loc4, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_26_14_6_2_));
	}
	RTLE;
}

/* {EV_RADIO_MENU_ITEM_IMP}.on_activate */
void F2014_25544 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F2014_25542(Current);
	F2011_25517(Current);
	RTLE;
}

/* {EV_RADIO_MENU_ITEM_IMP}.check_mark_bitmap_constant */
EIF_INTEGER_32 F2014_25545 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = ((EIF_INTEGER_32) 2L);
	RTLE;
	return Result;
}

void EIF_Minit1997 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
