/*
 * Code for class EV_DIALOG_IMP_MODELESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1971.h"
#include <disptchr.h>
#include <wel.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DIALOG_IMP_MODELESS}.is_show_requested */
EIF_BOOLEAN F1988_24654 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (F1696_18975(Current)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[Dtype(RTCW(tr1))-1871])(tr1);
	} else {
		ti4_1 = F1912_22496(Current);
		Result = F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 268435456L));
	}
	RTLE;
	return Result;
}

/* {EV_DIALOG_IMP_MODELESS}.show_relative_to_window */
void F1988_24656 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	if (F1296_15099(Current)) {
		if ((EIF_BOOLEAN)(arg1 != *(EIF_REFERENCE *)(Current + _REFACS_82_))) {
			F1986_24626(Current);
			tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16681[Dtype(RTCW(tr1))-1984])(tr1, arg1);
			RTAR(Current, arg1);
			*(EIF_REFERENCE *)(Current + _REFACS_82_) = (EIF_REFERENCE) arg1;
			loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
			loc1 = RTRV(eif_new_type(1911, 0x00), loc1);
		} else {
			F1982_24521(Current);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_12_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
			F977_14409(RTCW(tr1), NULL);
		}
	} else {
		loc2 = F1696_18976(Current);
		loc2 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_3_);
		loc2 = *(EIF_REFERENCE *)(RTCW(loc2) + O19893[Dtype(loc2)-1981]);
		RTAR(Current, arg1);
		*(EIF_REFERENCE *)(Current + _REFACS_82_) = (EIF_REFERENCE) arg1;
		loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		loc1 = RTRV(eif_new_type(1911, 0x00), loc1);
		F1988_24662(Current, loc1, ((EIF_INTEGER_32) 0L), NULL);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_12_) != NULL)) {
			tr1 = F246_11660(Current);
			F977_14409(RTCW(tr1), NULL);
		}
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tr1 = F1696_18976(Current);
			F1643_18475(RTCW(tr1), loc2);
		}
	}
	RTLE;
}

/* {EV_DIALOG_IMP_MODELESS}.show */
void F1988_24657 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1986_24626(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16567[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_DIALOG_IMP_MODELESS}.terminate */
void F1988_24658 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_85_32_6_6_) = (EIF_INTEGER_32) arg1;
	F1912_22643(Current, (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_DIALOG_IMP_MODELESS}.hide */
void F1988_24659 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	RTCT0("parent_window /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_82_) != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	if (F1982_24466(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_82_);
		tb4 = F1596_17746(RTCW(tr1));
		tb3 = (EIF_BOOLEAN) !tb4;
	}
	if (tb3) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_82_);
		tb3 = F1632_18308(RTCW(tr1));
		tb2 = tb3;
	}
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_82_);
		tb2 = F1631_18291(RTCW(tr1));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_82_);
		F1632_18313(RTCW(tr1));
	}
	F1986_24626(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16566[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_DIALOG_IMP_MODELESS}.destroy */
void F1988_24660 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	RTCT0("parent_window /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_82_) != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	if (F1982_24466(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_82_);
		tb4 = F1596_17746(RTCW(tr1));
		tb3 = (EIF_BOOLEAN) !tb4;
	}
	if (tb3) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_82_);
		tb3 = F1632_18308(RTCW(tr1));
		tb2 = tb3;
	}
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_82_);
		tb2 = F1631_18291(RTCW(tr1));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_82_);
		F1632_18313(RTCW(tr1));
	}
	F1984_24561(Current);
	RTLE;
}

/* {EV_DIALOG_IMP_MODELESS}.setup_dialog */
void F1988_24661 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1986_24629(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_85_32_6_6_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTLE;
}

/* {EV_DIALOG_IMP_MODELESS}.internal_dialog_make */
void F1988_24662 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	RTCT0("a_parent /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc1 = RTLNS(eif_new_type(1303, 0x01).id, 1303, _OBJSIZ_0_2_0_0_0_1_0_0_);
	F1304_15195(RTCW(loc1));
	F1914_22800(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_85_32_6_6_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = RTOUCR(281,F217_11264, (RTCV(RTOUCR(282,F1912_22620, (Current)))));
	tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
	tp2 = *(EIF_POINTER *)(RTCV(RTOUCR(283,F1986_24625, (Current)))+ _PTROFF_0_2_0_0_0_0_);
	tp3 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	tp4 = (EIF_POINTER) cwel_dialog_procedure_address;
	loc2 = (EIF_POINTER) CreateDialogIndirect(((HINSTANCE) tp1), ((LPCDLGTEMPLATE) tp2), ((HWND) tp3), ((DLGPROC) tp4));
	F1982_24521(Current);
	RTLE;
}

/* {EV_DIALOG_IMP_MODELESS}.cwin_create_dialog_indirect */
EIF_POINTER F1988_24663 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) CreateDialogIndirect(((HINSTANCE) arg1), ((LPCDLGTEMPLATE) arg2), ((HWND) arg3), ((DLGPROC) arg4));
	return Result;
}

void EIF_Minit1971 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
