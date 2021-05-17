/*
 * Code for class EV_DIALOG_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1755.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DIALOG_I}.default_push_button */
EIF_REFERENCE F1766_19966 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_58_);
}

/* {EV_DIALOG_I}.default_cancel_button */
EIF_REFERENCE F1766_19967 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_59_);
}

/* {EV_DIALOG_I}.current_push_button */
EIF_REFERENCE F1766_19968 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_60_) != NULL)) {
		RTLE;
		return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_60_);
	} else {
		RTLE;
		return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_58_);
	}/* NOTREACHED */
	
}

/* {EV_DIALOG_I}.set_default_push_button */
void F1766_19969 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_60_) == NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_58_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			F1664_18770(loc1);
		}
		F1664_18769(RTCW(arg1));
	} else {
	}
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_58_) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {EV_DIALOG_I}.remove_default_push_button */
void F1766_19970 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_60_) == NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_58_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			F1664_18770(loc1);
		}
	} else {
	}
	*(EIF_REFERENCE *)(Current + _REFACS_58_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {EV_DIALOG_I}.set_default_cancel_button */
void F1766_19971 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_59_) = (EIF_REFERENCE) arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16715[Dtype(Current)-1984])(Current);
	RTLE;
}

/* {EV_DIALOG_I}.remove_default_cancel_button */
void F1766_19972 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_REFERENCE *)(Current + _REFACS_59_) = (EIF_REFERENCE) NULL;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16716[Dtype(Current)-1984])(Current);
	RTLE;
}

/* {EV_DIALOG_I}.dialog_key_press_action */
void F1766_19977 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLIU(6);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(RTCV(F415_13417(Current)) + _REFACS_1_);
	tb1 = '\0';
	tb2 = '\0';
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_28_);
		tb2 = (EIF_BOOLEAN)(tr1 == NULL);
	}
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_47_);
		tb1 = (EIF_BOOLEAN)(tr1 == NULL);
	}
	if (tb1) {
		loc1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 42L))) {
			tr1 = F1766_19967(Current);
			loc3 = tr1;
			tb1 = EIF_TEST(loc3);
		}
		if (tb1) {
			tb1 = F1631_18291(loc3);
			if (tb1) {
				tr1 = F1591_17697(loc3);
				F977_14409(RTCW(tr1), NULL);
			}
		} else {
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 41L))) {
				tr1 = F1766_19968(Current);
				loc4 = tr1;
				tb1 = EIF_TEST(loc4);
			}
			if (tb1) {
				tb1 = '\0';
				tb2 = F1631_18291(loc4);
				if (tb2) {
					tb2 = F1632_18309(loc4);
					tb1 = (EIF_BOOLEAN) !tb2;
				}
				if (tb1) {
					tr1 = F1591_17697(loc4);
					F977_14409(RTCW(tr1), NULL);
				}
			}
		}
	}
	RTLE;
}

/* {EV_DIALOG_I}.set_current_push_button */
void F1766_19981 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(3,arg1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	tr1 = F1766_19968(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1664_18770(loc1);
	}
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tb1 = F1664_18768(RTCW(arg1));
		if ((EIF_BOOLEAN) !tb1) {
			F1664_18769(RTCW(arg1));
		}
		if ((EIF_BOOLEAN)(arg1 != *(EIF_REFERENCE *)(Current + _REFACS_58_))) {
			RTAR(Current, arg1);
			*(EIF_REFERENCE *)(Current + _REFACS_60_) = (EIF_REFERENCE) arg1;
		} else {
			*(EIF_REFERENCE *)(Current + _REFACS_60_) = (EIF_REFERENCE) NULL;
		}
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_60_) = (EIF_REFERENCE) NULL;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_58_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			F1664_18769(loc2);
		}
	}
	RTLE;
}

void EIF_Minit1755 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
