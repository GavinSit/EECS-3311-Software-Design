/*
 * Code for class EV_THEME_WINDOW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1903.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_THEME_WINDOW}.on_wm_theme_changed */
void F1920_22849 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1605, 0x01).id, 1605, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F1596_17742(RTCW(loc1));
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr1 = F1713_19262(RTCW(tr1));
	tr1 = F251_11722(RTCW(tr1));
	F977_14409(RTCW(tr1), NULL);
	RTLE;
}

/* {EV_THEME_WINDOW}.on_wm_syscolor_change */
void F1920_22850 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	F1913_22763(Current);
	loc1 = RTLNS(eif_new_type(1605, 0x01).id, 1605, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F1596_17742(RTCW(loc1));
	loc2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	loc2 = F1713_19262(RTCW(loc2));
	tr1 = F251_11724(RTCW(loc2));
	F977_14409(RTCW(tr1), NULL);
	RTLE;
}

void EIF_Minit1903 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
