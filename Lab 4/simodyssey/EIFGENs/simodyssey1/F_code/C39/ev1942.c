/*
 * Code for class EV_LIST_ITEM_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1942.h"
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9747
static EIF_INTEGER_32 inline_F67_9747 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (EIF_INTEGER_32) (SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4))
	;
}
#define INLINE_F67_9747
#endif
#ifndef INLINE_F67_9748
static int inline_F67_9748 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (int) (SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4))
	;
}
#define INLINE_F67_9748
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_LIST_ITEM_IMP}.make */
void F1959_23778 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1564, 1).id);
	F1564_6847(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_26_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1359, 1).id);
	F1360_16236(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_27_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1355, 1).id);
	F1337_15830(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_28_) = (EIF_REFERENCE) tr1;
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_LIST_ITEM_IMP}.wel_set_text */
void F1959_23779 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = F1558_6569(RTCW(arg1));
	tr1 = F1_14(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_26_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {EV_LIST_ITEM_IMP}.wel_text */
EIF_REFERENCE F1959_23780 (EIF_REFERENCE Current)
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
	if ((EIF_TRUE)) {
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

/* {EV_LIST_ITEM_IMP}.text */
EIF_REFERENCE F1959_23782 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_27_);
	Result = F1360_16242(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_LIST_ITEM_IMP}.pixmap */
EIF_REFERENCE F1959_23783 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,loc4);
	RTLR(4,tr1);
	RTLR(5,loc5);
	RTLR(6,loc2);
	RTLR(7,loc3);
	RTLIU(8);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_30_6_)) {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_17_) == NULL)) {
			Result = RTLNS(eif_new_type(1652, 0x01).id, 1652, _OBJSIZ_6_3_0_1_0_0_0_0_);
			F1596_17742(RTCW(Result));
			loc1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_3_);
			loc1 = RTRV(eif_new_type(1871, 0x00), loc1);
			RTCT0("pix_imp /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tb1 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				tr1 = *(EIF_REFERENCE *)(loc4 + O16793[Dtype(loc4)-1776]);
				loc5 = tr1;
				tb1 = EIF_TEST(loc5);
			}
			if (tb1) {
				loc2 = F1299_15130(loc5, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_30_12_6_2_), ((EIF_INTEGER_32) 0L));
				tr1 = *(EIF_REFERENCE *)(loc5 + _REFACS_2_);
				ti4_1 = F1002_3929(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_30_12_6_2_));
				F1872_21387(RTCW(loc1), ti4_1);
				F519_14209(RTCW(loc2));
				F1872_21259(RTCW(loc1), loc2);
				F519_14210(RTCW(loc2));
			} else {
			}
		} else {
			loc3 = *(EIF_REFERENCE *)(Current + _REFACS_17_);
			RTLE;
			return (EIF_REFERENCE) loc3;
		}
	}
	RTLE;
	return Result;
}

/* {EV_LIST_ITEM_IMP}.is_selected */
EIF_BOOLEAN F1959_23784 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R16796[Dtype(loc1)-1990])(loc1, Current);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {EV_LIST_ITEM_IMP}.set_text */
void F1959_23785 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	F1959_23779(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_27_);
	F1360_16251(RTCW(tr1), arg1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_28_);
	F1356_16164(RTCW(tr1), arg1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16805[Dtype(loc1)-1990])(loc1, Current);
	}
	RTLE;
}

/* {EV_LIST_ITEM_IMP}.enable_select */
void F1959_23786 (EIF_REFERENCE Current)
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
	tb1 = '\0';
	if ((EIF_BOOLEAN) !F1959_23784(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
		loc1 = tr1;
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16798[Dtype(loc1)-1990])(loc1, Current);
	}
	RTLE;
}

/* {EV_LIST_ITEM_IMP}.disable_select */
void F1959_23787 (EIF_REFERENCE Current)
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
	tb1 = '\0';
	if (F1959_23784(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
		loc1 = tr1;
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16797[Dtype(loc1)-1990])(loc1, Current);
	}
	RTLE;
}

/* {EV_LIST_ITEM_IMP}.x_position */
EIF_INTEGER_32 F1959_23788 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = F1959_23790(Current);
		ti4_1 = F1970_24044(loc1);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	}
	RTLE;
	return Result;
}

/* {EV_LIST_ITEM_IMP}.y_position */
EIF_INTEGER_32 F1959_23789 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = F1959_23791(Current);
		ti4_1 = F1970_24045(loc1);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	}
	RTLE;
	return Result;
}

/* {EV_LIST_ITEM_IMP}.screen_x */
EIF_INTEGER_32 F1959_23790 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1959_23813(Current);
	Result = F1408_17326(RTCV(RTOUCR(484,F1959_23812, (Current))));
	RTLE;
	return Result;
}

/* {EV_LIST_ITEM_IMP}.screen_y */
EIF_INTEGER_32 F1959_23791 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1959_23813(Current);
	Result = F1408_17328(RTCV(RTOUCR(484,F1959_23812, (Current))));
	RTLE;
	return Result;
}

/* {EV_LIST_ITEM_IMP}.width */
EIF_INTEGER_32 F1959_23792 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1959_23813(Current);
	Result = F1408_17332(RTCV(RTOUCR(484,F1959_23812, (Current))));
	RTLE;
	return Result;
}

/* {EV_LIST_ITEM_IMP}.height */
EIF_INTEGER_32 F1959_23793 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1959_23813(Current);
	Result = F1408_17333(RTCV(RTOUCR(484,F1959_23812, (Current))));
	RTLE;
	return Result;
}

/* {EV_LIST_ITEM_IMP}.minimum_width */
EIF_INTEGER_32 F1959_23794 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1959_23792(Current);
}

/* {EV_LIST_ITEM_IMP}.minimum_height */
EIF_INTEGER_32 F1959_23795 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1959_23793(Current);
}

/* {EV_LIST_ITEM_IMP}.index */
EIF_INTEGER_32 F1959_23796 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R16799[Dtype(loc1)-1990])(loc1, Current);
		RTLE;
		return (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_LIST_ITEM_IMP}.parent_imp */
EIF_REFERENCE F1959_23797 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_29_);
}


/* {EV_LIST_ITEM_IMP}.set_parent_imp */
void F1959_23798 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_29_) = (EIF_REFERENCE) arg1;
}

/* {EV_LIST_ITEM_IMP}.relative_y */
EIF_INTEGER_32 F1959_23799 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		ti4_1 = F1959_23796(Current);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R16800[Dtype(loc1)-1990])(loc1, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
		Result = F1906_22337(RTCW(tr1));
	}
	RTLE;
	return Result;
}

/* {EV_LIST_ITEM_IMP}.is_displayed */
EIF_BOOLEAN F1959_23800 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc6);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
	loc6 = tr1;
	if (EIF_TEST(loc6)) {
		loc1 = F1959_23796(Current);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16803[Dtype(loc6)-1990])(loc6);
		loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16804[Dtype(loc6)-1990])(loc6);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc3);
		loc4 = loc6;
		loc4 = RTRV(eif_new_type(2006, 0x00), loc4);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			loc5 = F1939_23281(RTCW(loc4));
		} else {
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (loc5 && (EIF_BOOLEAN) (loc1 >= loc2)) && (EIF_BOOLEAN) (loc1 < loc3));
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {EV_LIST_ITEM_IMP}.set_pixmap */
void F1959_23803 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_17_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1596_17745(loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_17_) = (EIF_REFERENCE) NULL;
	}
	tr1 = F1_14(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_17_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_30_6_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_29_) != NULL)) {
		F1959_23805(Current);
	}
	RTLE;
}

/* {EV_LIST_ITEM_IMP}.set_pixmap_in_parent */
void F1959_23805 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
	RTCT0("l_parent_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_30_6_)) {
		loc1 = *(EIF_REFERENCE *)(RTCW(loc2) + O16793[Dtype(loc2)-1776]);
		if ((EIF_BOOLEAN)(loc1 == NULL)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R16794[Dtype(RTCW(loc2))-1990])(loc2);
			loc1 = *(EIF_REFERENCE *)(RTCW(loc2) + O16793[Dtype(loc2)-1776]);
		}
		RTCT0("image_list /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_17_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			F1300_15156(RTCW(loc1), loc3);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_4_3_0_3_);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_30_12_6_2_) = (EIF_INTEGER_32) ti4_1;
			F1596_17745(loc3);
			*(EIF_REFERENCE *)(Current + _REFACS_17_) = (EIF_REFERENCE) NULL;
		}
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_30_12_6_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	ti4_1 = F1959_23796(Current);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_30_12_6_2_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R16801[Dtype(RTCW(loc2))-1990])(loc2, Current, ti4_1, ti4_2);
	RTLE;
}

/* {EV_LIST_ITEM_IMP}.on_parented */
void F1959_23808 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_29_) != NULL) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_17_) != NULL))) {
		F1959_23805(Current);
	}
	RTLE;
}

/* {EV_LIST_ITEM_IMP}.on_orphaned */
void F1959_23809 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_30_6_) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_17_) == NULL))) {
		tr1 = F1959_23783(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_17_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {EV_LIST_ITEM_IMP}.destroy */
void F1959_23811 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1958_23770(Current);
}

/* {EV_LIST_ITEM_IMP}.bounds_rect */
static EIF_REFERENCE F1959_23812_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(484)

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

EIF_REFERENCE F1959_23812 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(484,F1959_23812_body,(Current));
}

/* {EV_LIST_ITEM_IMP}.load_bounds_rect */
void F1959_23813 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc3);
	RTLR(1,loc6);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLR(6,loc7);
	RTLIU(7);
	
	RTGC;
	loc3 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1408_17321(RTCW(loc3), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	loc6 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
	loc1 = loc6;
	loc1 = RTRV(eif_new_type(1990, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		loc2 = loc6;
		loc2 = RTRV(eif_new_type(2006, 0x00), loc2);
		if ((EIF_BOOLEAN)(loc2 == NULL)) {
			tr1 = RTOUCR(484,F1959_23812, (Current));
			F1408_17334(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
		} else {
			loc4 = F1716_19394(RTCW(loc2), *(EIF_REFERENCE *)(Current + _REFACS_16_), ((EIF_INTEGER_32) 1L));
			tp1 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_69_25_6_15_0_0_);
			tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
			tp3 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_0_0_0_);
			loc5 = inline_F67_9747(tp1, ((EIF_INTEGER_32) 340L), tp2, tp3);
			tp1 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_69_25_6_15_0_0_);
			tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
			tp3 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_0_0_0_);
			if (EIF_TEST (inline_F67_9748(tp1, ((EIF_INTEGER_32) 338L), tp2, tp3))) {
				tr1 = RTOUCR(484,F1959_23812, (Current));
				ti4_1 = F1408_17326(RTCW(loc3));
				ti4_2 = F1408_17328(RTCW(loc3));
				ti4_3 = F1408_17330(RTCW(loc3));
				ti4_4 = F1408_17328(RTCW(loc3));
				F1408_17334(RTCW(tr1), ti4_1, (EIF_INTEGER_32) (ti4_2 + (EIF_INTEGER_32) (loc4 * loc5)), ti4_3, (EIF_INTEGER_32) (ti4_4 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)) * loc5))));
			} else {
				tr1 = RTOUCR(484,F1959_23812, (Current));
				F1408_17334(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
			}
		}
	} else {
		tr1 = F1791_20211(Current);
		loc7 = tr1;
		if (EIF_TEST(loc7)) {
			RTCT0("l_parent_imp /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc6 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_61_27_6_12_0_0_);
			ti4_1 = F1716_19394(RTCW(loc6), *(EIF_REFERENCE *)(Current + _REFACS_16_), ((EIF_INTEGER_32) 1L));
			tp2 = (EIF_POINTER) (WPARAM)((ti4_1));
			tp3 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_0_0_0_);
			if (EIF_TEST (inline_F67_9748(tp1, ((EIF_INTEGER_32) 4110L), tp2, tp3))) {
				tr1 = RTOUCR(484,F1959_23812, (Current));
				ti4_1 = F1614_18066(loc7);
				ti4_2 = F1408_17326(RTCW(loc3));
				ti4_3 = F1614_18067(loc7);
				ti4_4 = F1408_17328(RTCW(loc3));
				ti4_5 = F1614_18066(loc7);
				ti4_6 = F1408_17330(RTCW(loc3));
				ti4_7 = F1614_18067(loc7);
				ti4_8 = F1408_17331(RTCW(loc3));
				F1408_17334(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ti4_2), (EIF_INTEGER_32) (ti4_3 + ti4_4), (EIF_INTEGER_32) (ti4_5 + ti4_6), (EIF_INTEGER_32) (ti4_7 + ti4_8));
			} else {
				tr1 = RTOUCR(484,F1959_23812, (Current));
				F1408_17334(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
			}
		}
	}
	RTLE;
}

void EIF_Minit1942 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
