/*
 * Code for class EV_WEL_CONTROL_CONTAINER_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1908.h"
#include <windows.h>
#include <winx.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WEL_CONTROL_CONTAINER_IMP}.make */
void F1925_22879 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = RTOUCR(249,F1970_24036, (Current));
	tr2 = RTMS_EX_H("",0,0);
	F1917_22822(Current, tr1, tr2);
	RTLE;
}

/* {EV_WEL_CONTROL_CONTAINER_IMP}.is_displayed */
EIF_BOOLEAN F1925_22880 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\0';
	if (F1296_15099(Current)) {
		Result = F1912_22468(Current);
	}
	RTLE;
	return Result;
}

/* {EV_WEL_CONTROL_CONTAINER_IMP}.class_style */
static EIF_INTEGER_32 F1925_22882_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 321)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1925_22882 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,321,F1925_22882_body,(Current));
}

/* {EV_WEL_CONTROL_CONTAINER_IMP}.default_style */
EIF_INTEGER_32 F1925_22883 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 1073741824L),((EIF_INTEGER_32) 33554432L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 67108864L));
	Result = eif_bit_or(ti4_1,((EIF_INTEGER_32) 268435456L));
	return Result;
}

/* {EV_WEL_CONTROL_CONTAINER_IMP}.default_ex_style */
EIF_INTEGER_32 F1925_22884 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 65536L);
}

/* {EV_WEL_CONTROL_CONTAINER_IMP}.on_erase_background */
void F1925_22886 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	
	
	F1925_22888(Current, arg1, arg2);
}

/* {EV_WEL_CONTROL_CONTAINER_IMP}.clear_background */
void F1925_22888 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLR(5,arg2);
	RTLR(6,tr3);
	RTLR(7,loc3);
	RTLIU(8);
	
	RTGC;
	tr1 = F1971_24176(Current);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
		tr2 = F1925_22898(Current);
		tr3 = F1970_24145(Current);
		loc1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R10489[Dtype(RTCW(tr1))-409])(tr1, tr2, arg1, arg2, loc2, tr3);
	}
	if ((EIF_BOOLEAN) !loc1) {
		tr1 = F1971_24179(Current);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
			tr2 = F1925_22898(Current);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R10490[Dtype(RTCW(tr1))-409])(tr1, tr2, arg1, arg2, loc3);
			F519_14213(loc3);
			loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	if (loc1) {
		F1912_22507(Current);
		tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 1L)));
		F214_11244(Current, tp1);
	}
	RTLE;
}

/* {EV_WEL_CONTROL_CONTAINER_IMP}.is_resized_width_larger */
EIF_BOOLEAN F1925_22889 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current + O19013[Dtype(Current)-1924]);
	tu1_1 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 1U));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 != (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {EV_WEL_CONTROL_CONTAINER_IMP}.is_resized_height_larger */
EIF_BOOLEAN F1925_22890 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current + O19013[Dtype(Current)-1924]);
	tu1_1 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 2U));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 != (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {EV_WEL_CONTROL_CONTAINER_IMP}.on_window_pos_changing */
void F1925_22894 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_8 loc2 = (EIF_NATURAL_8) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	ti4_1 = F1905_22304(RTCW(arg1));
	ti4_1 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		loc1 = F1912_22490(Current);
		ti4_1 = F1905_22302(RTCW(arg1));
		ti4_2 = F1408_17332(RTCW(loc1));
		if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
			loc2 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 1U);
		}
		ti4_1 = F1905_22303(RTCW(arg1));
		ti4_2 = F1408_17333(RTCW(loc1));
		if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
			tu1_1 = eif_bit_or(loc2,((EIF_NATURAL_8) 2U));
			loc2 = (EIF_NATURAL_8) tu1_1;
		}
		*(EIF_NATURAL_8 *)(Current + O19013[Dtype(Current)-1924]) = (EIF_NATURAL_8) loc2;
	}
	F1912_22507(Current);
	RTLE;
}

/* {EV_WEL_CONTROL_CONTAINER_IMP}.on_window_pos_changed */
void F1925_22895 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = F1905_22304(RTCW(arg1));
	ti4_1 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		loc1 = F1905_22302(RTCW(arg1));
		loc2 = F1905_22303(RTCW(arg1));
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		tp2 = tp1;
		F1296_15100(RTCW(arg1), tp2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18749[dtype-1914])(Current, ((EIF_INTEGER_32) 0L), loc1, loc2);
	}
	*(EIF_NATURAL_8 *)(Current + O19013[dtype-1924]) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	F1912_22507(Current);
	*(EIF_BOOLEAN *)(Current + O18816[dtype-1911]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {EV_WEL_CONTROL_CONTAINER_IMP}.on_dpi_changed */
void F1925_22896 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EV_WEL_CONTROL_CONTAINER_IMP}.current_as_container */
EIF_REFERENCE F1925_22898 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = Current;
	loc1 = RTRV(eif_new_type(1970, 0x00), loc1);
	RTCT0("l_result /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {EV_WEL_CONTROL_CONTAINER_IMP}.set_is_theme_background_requested */
void F1925_22900 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O19020[Dtype(Current)-1924]) = (EIF_BOOLEAN) arg1;
}

/* {EV_WEL_CONTROL_CONTAINER_IMP}.get_wm_hscroll_code */
EIF_INTEGER_32 F1925_22902 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GET_WM_HSCROLL_CODE(((WPARAM) arg1), ((LPARAM) arg2));
}

/* {EV_WEL_CONTROL_CONTAINER_IMP}.get_wm_hscroll_hwnd */
EIF_POINTER F1925_22903 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_POINTER) (EIF_POINTER) GET_WM_HSCROLL_HWND(((WPARAM) arg1), ((LPARAM) arg2));
}

/* {EV_WEL_CONTROL_CONTAINER_IMP}.get_wm_hscroll_pos */
EIF_INTEGER_32 F1925_22904 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwin_get_wm_hscroll_pos(((WPARAM) arg1), ((LPARAM) arg2));
}

/* {EV_WEL_CONTROL_CONTAINER_IMP}.get_wm_vscroll_code */
EIF_INTEGER_32 F1925_22905 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GET_WM_VSCROLL_CODE(((WPARAM) arg1), ((LPARAM) arg2));
}

/* {EV_WEL_CONTROL_CONTAINER_IMP}.get_wm_vscroll_hwnd */
EIF_POINTER F1925_22906 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_POINTER) (EIF_POINTER) GET_WM_VSCROLL_HWND(((WPARAM) arg1), ((LPARAM) arg2));
}

/* {EV_WEL_CONTROL_CONTAINER_IMP}.get_wm_vscroll_pos */
EIF_INTEGER_32 F1925_22907 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwin_get_wm_vscroll_pos(((WPARAM) arg1), ((LPARAM) arg2));
}

void EIF_Minit1908 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
