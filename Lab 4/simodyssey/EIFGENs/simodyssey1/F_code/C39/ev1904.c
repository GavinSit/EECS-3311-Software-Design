/*
 * Code for class EV_POPUP_MENU_HANDLER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1904.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_POPUP_MENU_HANDLER}.make_with_menu */
void F1921_22851 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) arg1;
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1073741824L);
		tr1 = RTMS_EX_H("EV_POPUT_MENU_HANDLER",21,2061869650);
		F1917_22822(Current, arg2, tr1);
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13565952L);
		tr1 = RTMS_EX_H("EV_POPUP_MENU_HANDLER",21,1232429650);
		F1917_22823(Current, tr1);
	}
	RTLE;
}

/* {EV_POPUP_MENU_HANDLER}.default_style */
EIF_INTEGER_32 F1921_22852 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_2_0_2_);
}


/* {EV_POPUP_MENU_HANDLER}.on_menu_command */
void F1921_22854 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	F1722_19467(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_POPUP_MENU_HANDLER}.default_process_message */
void F1921_22855 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1911_22458(Current, arg1, arg2, arg3)) {
		{
			/* INLINED CODE (WEL_WINDOW.default_process_message) */
			/* END INLINED CODE */
		}
		;
	}
	RTLE;
}

/* {EV_POPUP_MENU_HANDLER}.on_menu_char */
void F1921_22856 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	tp1 = F1722_19450(RTCW(tr1), arg1, arg2);
	F214_11244(Current, tp1);
	RTLE;
}

/* {EV_POPUP_MENU_HANDLER}.class_requires_icon */
EIF_BOOLEAN F1921_22857 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

void EIF_Minit1904 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
