/*
 * Code for class EV_DIALOG_IMP_MODAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1970.h"
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

/* {EV_DIALOG_IMP_MODAL}.show_relative_to_window */
void F1987_24645 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	F1986_24626(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16681[Dtype(RTCW(tr1))-1984])(tr1, arg1);
	RTLE;
}

/* {EV_DIALOG_IMP_MODAL}.hide */
void F1987_24646 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (F1970_24049(Current)) {
		F1986_24626(Current);
		tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R16566[Dtype(RTCW(tr1))-1871])(tr1);
	}
	RTLE;
}

/* {EV_DIALOG_IMP_MODAL}.execute_show_actions */
void F1987_24647 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_12_) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
		F977_14409(RTCW(tr1), NULL);
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_85_21_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {EV_DIALOG_IMP_MODAL}.terminate */
void F1987_24648 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_85_32_6_6_) = (EIF_INTEGER_32) arg1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_82_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(loc1 + _REFACS_3_);
		F1977_24334(RTCW(tr1));
	}
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_85_32_6_14_0_0_);
	EndDialog(((HWND) tp1), ((INT_PTR) arg1));
	RTLE;
}

/* {EV_DIALOG_IMP_MODAL}.cwin_end_dialog */
void F1987_24652 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	EndDialog(((HWND) arg1), ((INT_PTR) arg2));
}

void EIF_Minit1970 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
