/*
 * Code for class EV_CHECK_MENU_ITEM_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1995.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CHECK_MENU_ITEM_IMP}.make */
void F2012_25524 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F2011_25467(Current);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_25_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {EV_CHECK_MENU_ITEM_IMP}.is_selected */
EIF_BOOLEAN F2012_25525 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_25_8_);
}


/* {EV_CHECK_MENU_ITEM_IMP}.enable_select */
void F2012_25526 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_25_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tb1 = '\0';
	if (F2011_25489(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_24_);
		loc1 = tr1;
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		F1316_15504(loc1, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_25_14_6_2_));
	}
	RTLE;
}

/* {EV_CHECK_MENU_ITEM_IMP}.disable_select */
void F2012_25527 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_25_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tb1 = '\0';
	if (F2011_25489(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_24_);
		loc1 = tr1;
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		F1316_15505(loc1, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_25_14_6_2_));
	}
	RTLE;
}

/* {EV_CHECK_MENU_ITEM_IMP}.on_activate */
void F2012_25529 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1739_19677(Current);
	F2011_25517(Current);
	RTLE;
}

/* {EV_CHECK_MENU_ITEM_IMP}.check_mark_bitmap_constant */
EIF_INTEGER_32 F2012_25530 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = ((EIF_INTEGER_32) 1L);
	RTLE;
	return Result;
}

void EIF_Minit1995 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
