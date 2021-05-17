/*
 * Code for class EV_MULTI_COLUMN_LIST_ROW_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1943.h"
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9780
static EIF_INTEGER_32 inline_F67_9780 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	return GetScrollInfo((HWND) arg1, (int) arg2, (LPSCROLLINFO) arg3);
	;
}
#define INLINE_F67_9780
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.make */
void F1960_23818 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1696_18990(Current, (EIF_BOOLEAN) 1);
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.is_selected */
EIF_BOOLEAN F1960_23819 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = F1992_24838(loc1, Current);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.tooltip */
EIF_REFERENCE F1960_23820 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_25_) == NULL)) {
		tr1 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1558_6510(RTCW(tr1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_25_);
		Result = F1_14(tr1);
	}
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.enable_select */
void F1960_23821 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1992_24839(loc1, Current);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.disable_select */
void F1960_23822 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1992_24840(loc1, Current);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.x_position */
EIF_INTEGER_32 F1960_23824 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		loc1 = RTLNS(eif_new_type(1347, 0x01).id, 1347, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1348_15994(RTCW(loc1));
		F1348_16002(RTCW(loc1), ((EIF_INTEGER_32) 4L));
		tp1 = *(EIF_POINTER *)(loc3+ _PTROFF_65_27_6_14_0_0_);
		tp2 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_0_0_0_);
		loc2 = inline_F67_9780(tp1, ((EIF_INTEGER_32) 0L), tp2);
		ti4_1 = F1348_15997(RTCW(loc1));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	}
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.y_position */
EIF_INTEGER_32 F1960_23825 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		tr1 = *(EIF_REFERENCE *)(loc3 + _REFACS_35_);
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			Result = F1960_23832(Current);
			ti4_1 = F1682_18850(loc4);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L)) * ti4_1);
			loc1 = RTLNS(eif_new_type(1347, 0x01).id, 1347, _OBJSIZ_0_1_0_0_0_1_0_0_);
			F1348_15994(RTCW(loc1));
			F1348_16002(RTCW(loc1), ((EIF_INTEGER_32) 4L));
			tp1 = *(EIF_POINTER *)(loc3+ _PTROFF_65_27_6_14_0_0_);
			tp2 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_0_0_0_);
			loc2 = inline_F67_9780(tp1, ((EIF_INTEGER_32) 1L), tp2);
			ti4_1 = F1348_15997(RTCW(loc1));
			ti4_2 = F1682_18850(loc4);
			Result -= (EIF_INTEGER_32) (ti4_1 * ti4_2);
		}
	}
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.screen_x */
EIF_INTEGER_32 F1960_23826 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = F1970_24044(loc1);
		ti4_1 = F1960_23824(Current);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	}
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.screen_y */
EIF_INTEGER_32 F1960_23827 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = F1970_24045(loc1);
		ti4_1 = F1960_23825(Current);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	}
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.width */
EIF_INTEGER_32 F1960_23828 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		ti4_1 = F1970_24041(loc1);
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.height */
EIF_INTEGER_32 F1960_23829 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(loc1 + _REFACS_35_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			ti4_1 = F1682_18850(loc2);
			RTLE;
			return (EIF_INTEGER_32) ti4_1;
		}
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.minimum_width */
EIF_INTEGER_32 F1960_23830 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		{
			/* INLINED CODE (WEL_WINDOW.minimal_width) */
			ti4_1 = (EIF_INTEGER_32)  0;
			/* END INLINED CODE */
		}
		ti4_1 = ti4_1;
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.minimum_height */
EIF_INTEGER_32 F1960_23831 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(loc1 + _REFACS_35_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			ti4_1 = F1682_18850(loc2);
			RTLE;
			return (EIF_INTEGER_32) ti4_1;
		}
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.index */
EIF_INTEGER_32 F1960_23832 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		ti4_1 = F1992_24837(loc1, Current);
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.parent_imp */
EIF_REFERENCE F1960_23833 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_26_);
}


/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.on_parented */
void F1960_23834 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.set_parent_imp */
void F1960_23835 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTAR(Current, arg1);
		*(EIF_REFERENCE *)(Current + _REFACS_26_) = (EIF_REFERENCE) arg1;
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_26_) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.set_pixmap */
void F1960_23836 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	tr1 = F1_14(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_21_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(loc1 + _REFACS_51_);
		ti4_1 = F852_3258(RTCW(tr1), Current, ((EIF_INTEGER_32) 1L));
		F1992_24845(loc1, ti4_1, arg1);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.on_item_added_at */
void F1960_23838 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1992_24835(loc1, Current, arg1, arg2);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_ROW_IMP}.on_item_removed_at */
void F1960_23839 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1992_24836(loc1, Current, arg1, arg2);
	}
	RTLE;
}

void EIF_Minit1943 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
