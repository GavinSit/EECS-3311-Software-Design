/*
 * Code for class EV_WINDOW_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1965.h"
#include <windows.h>
#include <winx.h>
#include "wel.h"
#include "eif_helpers.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9749
static void inline_F67_9749 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4)
	;
}
#define INLINE_F67_9749
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WINDOW_IMP}.title_name */
EIF_REFERENCE F1982_24434 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTMS_EX_H("",0,0);
	RTLE;
	return Result;
}

/* {EV_WINDOW_IMP}.is_top_level */
EIF_BOOLEAN F1982_24435 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_WINDOW_IMP}.make */
void F1982_24436 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R19860[dtype-1981])(Current)) {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19859[dtype-1981])(Current);
		F1917_22823(Current, tr1);
	} else {
		tr1 = RTOUCR(239,F1910_22395, (RTCV(F1956_23756(Current))));
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19859[dtype-1981])(Current);
		F1917_22822(Current, tr1, tr2);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,999,0xFF01,1604,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F1000_3924(RTCW(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O16682[dtype-1762]) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1636, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O16654[dtype-1762]) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1636, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O16655[dtype-1762]) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current + O16661[dtype-1762]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_BOOLEAN *)(Current + O16685[dtype-1762]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F1971_24161(Current);
	tr1 = F1956_23756(Current);
	F1910_22396(RTCW(tr1), Current);
	F1982_24438(Current);
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_WINDOW_IMP}.class_style */
static EIF_INTEGER_32 F1982_24437_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 240)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1982_24437 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,240,F1982_24437_body,(Current));
}

/* {EV_WINDOW_IMP}.init_bars */
void F1982_24438 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16654[dtype-1762]);
	loc1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(1974, 0x00), loc1);
	tr1 = *(EIF_REFERENCE *)(Current + O16655[dtype-1762]);
	loc2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_3_);
	loc2 = RTRV(eif_new_type(1974, 0x00), loc2);
	RTCT0("ub_imp /= Void and lb_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 != NULL) && (EIF_BOOLEAN)(loc2 != NULL))) {
		RTCK0;
	} else {
		RTCF0;
	}
	{
		/* INLINED CODE (EV_WIDGET_I.on_parented) */
		/* END INLINED CODE */
	}
	;
	{
		/* INLINED CODE (EV_WIDGET_I.on_parented) */
		/* END INLINED CODE */
	}
	;
	F1912_22525(RTCW(loc1), Current);
	F1912_22525(RTCW(loc2), Current);
	F1974_24303(RTCW(loc1), Current);
	F1974_24303(RTCW(loc2), Current);
	RTLE;
}

/* {EV_WINDOW_IMP}.client_y */
EIF_INTEGER_32 F1982_24439 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	Result = F1971_24163(Current);
	tr1 = *(EIF_REFERENCE *)(Current + O16654[dtype-1762]);
	tb1 = F736_2537(RTCW(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + O16654[dtype-1762]);
		ti4_1 = F1614_18071(RTCW(tr1));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) + ((EIF_INTEGER_32) 1L));
	}
	ti4_1 = F1970_24043(Current);
	ti4_1 = eif_min_int32 (Result,ti4_1);
	Result = (EIF_INTEGER_32) ti4_1;
	RTLE;
	return Result;
}

/* {EV_WINDOW_IMP}.client_height */
EIF_INTEGER_32 F1982_24440 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	Result = F1971_24165(Current);
	ti4_1 = F1982_24439(Current);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	tr1 = *(EIF_REFERENCE *)(Current + O16655[dtype-1762]);
	tb1 = F736_2537(RTCW(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + O16655[dtype-1762]);
		ti4_1 = F1614_18071(RTCW(tr1));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result - ti4_1) - ((EIF_INTEGER_32) 1L));
	}
	ti4_1 = eif_max_int32 (Result,((EIF_INTEGER_32) 0L));
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

/* {EV_WINDOW_IMP}.screen_x */
EIF_INTEGER_32 F1982_24441 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1970_24046(Current);
}

/* {EV_WINDOW_IMP}.screen_y */
EIF_INTEGER_32 F1982_24442 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1970_24047(Current);
}

/* {EV_WINDOW_IMP}.maximum_height */
EIF_INTEGER_32 F1982_24443 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O19895[Dtype(Current)-1981]);
}


/* {EV_WINDOW_IMP}.maximum_width */
EIF_INTEGER_32 F1982_24444 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O19894[Dtype(Current)-1981]);
}


/* {EV_WINDOW_IMP}.top_level_window_imp */
EIF_REFERENCE F1982_24446 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) Current;
}

/* {EV_WINDOW_IMP}.menu_bar */
EIF_REFERENCE F1982_24447 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O19893[Dtype(Current)-1981]);
}


/* {EV_WINDOW_IMP}.lock_update */
void F1982_24448 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1763_19931(Current);
	F1912_22534(Current);
	RTLE;
}

/* {EV_WINDOW_IMP}.unlock_update */
void F1982_24449 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1763_19932(Current);
	F1912_22535(Current);
	RTLE;
}

/* {EV_WINDOW_IMP}.insert */
void F1982_24450 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	F1977_24337(Current, arg1);
	ti4_1 = F1970_24046(Current);
	ti4_2 = F1970_24047(Current);
	ti4_3 = F1970_24041(Current);
	ti4_4 = F1970_24043(Current);
	F1723_19497(Current, ti4_1, ti4_2, ti4_3, ti4_4, (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_WINDOW_IMP}.set_default_minimum_size */
void F1982_24451 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1725_19527(Current, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), (EIF_BOOLEAN) 0);
	F1982_24461(Current, ((EIF_INTEGER_32) 32000L));
	F1982_24462(Current, ((EIF_INTEGER_32) 32000L));
	RTLE;
}

/* {EV_WINDOW_IMP}.disable_user_resize */
void F1982_24452 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O16661[dtype-1762]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16669[dtype-1981])(Current);
	RTLE;
}

/* {EV_WINDOW_IMP}.forbid_resize */
void F1982_24454 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = F1912_22496(Current);
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 65536L),((EIF_INTEGER_32) 131072L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 262144L));
	ti4_1 = F1258_14780(Current, loc1, ti4_1);
	loc1 = (EIF_INTEGER_32) ti4_1;
	if ((EIF_BOOLEAN) !F1763_19917(Current)) {
		ti4_1 = F1258_14780(Current, loc1, ((EIF_INTEGER_32) 4194304L));
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	F1982_24514(Current, loc1);
	RTLE;
}

/* {EV_WINDOW_IMP}.set_x_position */
void F1982_24458 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16311[Dtype(Current)-1722]);
	F25_8974(RTCW(tr1));
	ti4_1 = F1970_24047(Current);
	F1723_19495(Current, arg1, ti4_1);
	RTLE;
}

/* {EV_WINDOW_IMP}.set_y_position */
void F1982_24459 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16311[Dtype(Current)-1722]);
	F25_8974(RTCW(tr1));
	ti4_1 = F1970_24046(Current);
	F1723_19495(Current, ti4_1, arg1);
	RTLE;
}

/* {EV_WINDOW_IMP}.set_parent_imp */
void F1982_24460 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc1 = arg1;
		loc1 = RTRV(eif_new_type(1911, 0x00), loc1);
		F1912_22525(Current, loc1);
	} else {
		F1912_22525(Current, NULL);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.set_maximum_width */
void F1982_24461 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O19894[Dtype(Current)-1981]) = (EIF_INTEGER_32) arg1;
	if ((EIF_BOOLEAN) (arg1 < F1723_19499(Current))) {
		ti4_1 = F1723_19500(Current);
		F1723_19498(Current, arg1, ti4_1);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.set_maximum_height */
void F1982_24462 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O19895[Dtype(Current)-1981]) = (EIF_INTEGER_32) arg1;
	if ((EIF_BOOLEAN) (arg1 < F1723_19500(Current))) {
		ti4_1 = F1723_19499(Current);
		F1723_19498(Current, ti4_1, arg1);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.set_title */
void F1982_24463 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	tr1 = F1_14(arg1);
	F1912_22526(Current, tr1);
	RTLE;
}

/* {EV_WINDOW_IMP}.set_menu_bar */
void F1982_24464 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O19893[Dtype(Current)-1981]) = (EIF_REFERENCE) arg1;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	loc1 = RTRV(eif_new_type(1315, 0x00), loc1);
	RTCT0("mb_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1913_22717(Current, loc1);
	loc2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	loc2 = RTRV(eif_new_type(1730, 0x00), loc2);
	RTCT0("implementation_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1731_19633(RTCW(loc2), Current);
	F1982_24477(Current, (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_WINDOW_IMP}.remove_menu_bar */
void F1982_24465 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19893[dtype-1981]);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		loc1 = *(EIF_REFERENCE *)(loc2 + _REFACS_1_);
		loc1 = RTRV(eif_new_type(1730, 0x00), loc1);
		RTCT0("implementation_not_void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1731_19633(RTCW(loc1), NULL);
		*(EIF_REFERENCE *)(Current + O19893[dtype-1981]) = (EIF_REFERENCE) NULL;
		F1913_22718(Current);
		F1982_24477(Current, (EIF_BOOLEAN) 0);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.has_focus */
EIF_BOOLEAN F1982_24466 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = F1898_22158(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 == Current);
	RTLE;
	return Result;
}

/* {EV_WINDOW_IMP}.connect_accelerator */
void F1982_24467 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		loc1 = RTRV(eif_new_type(1711, 0x00), loc1);
		RTCT0("acc_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = *(EIF_REFERENCE *)(Current + O16682[Dtype(Current)-1762]);
		ti4_1 = F1711_19241(RTCW(loc1));
		F1000_3970(RTCW(tr1), arg1, ti4_1);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.disconnect_accelerator */
void F1982_24468 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		loc1 = RTRV(eif_new_type(1711, 0x00), loc1);
		RTCT0("acc_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = *(EIF_REFERENCE *)(Current + O16682[Dtype(Current)-1762]);
		ti4_1 = F1711_19241(RTCW(loc1));
		F1000_3976(RTCW(tr1), ti4_1);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.on_wm_setting_change */
void F1982_24469 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	F1913_22762(Current);
	tr1 = *(EIF_REFERENCE *)(Current + O19893[Dtype(Current)-1981]);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		loc1 = *(EIF_REFERENCE *)(loc2 + _REFACS_1_);
		loc1 = RTRV(eif_new_type(1730, 0x00), loc1);
		RTCT0("mb_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1722_19451(RTCW(loc1));
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.wel_destroy_window */
void F1982_24470 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1912_22643(Current, (EIF_BOOLEAN) 0);
}

/* {EV_WINDOW_IMP}.ev_apply_new_size */
void F1982_24471 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	F1723_19497(Current, arg1, arg2, arg3, arg4, arg5);
	tr1 = F1977_24333(Current);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		ti4_1 = F1971_24162(Current);
		ti4_2 = F1982_24439(Current);
		ti4_3 = F1971_24164(Current);
		ti4_4 = F1982_24440(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_BOOLEAN)) R16318[Dtype(loc2)-1972])(loc2, ti4_1, ti4_2, ti4_3, ti4_4, (EIF_BOOLEAN) 1);
	}
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O19893[dtype-1981]) != NULL)) {
		F1913_22727(Current);
	}
	tr1 = *(EIF_REFERENCE *)(Current + O16654[dtype-1762]);
	tb1 = F736_2537(RTCW(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + O16654[dtype-1762]);
		loc1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_3_);
		loc1 = RTRV(eif_new_type(1974, 0x00), loc1);
		RTCT0("bar_imp_not_void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		ti4_1 = F1971_24164(Current);
		ti4_2 = F1982_24439(Current);
		F1723_19483(RTCW(loc1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1, ti4_2);
	}
	tr1 = *(EIF_REFERENCE *)(Current + O16655[dtype-1762]);
	tb1 = F736_2537(RTCW(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + O16655[dtype-1762]);
		loc1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_3_);
		loc1 = RTRV(eif_new_type(1974, 0x00), loc1);
		RTCT0("bar_imp_not_void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		ti4_1 = F1982_24439(Current);
		ti4_2 = F1982_24440(Current);
		ti4_3 = F1971_24164(Current);
		ti4_4 = F1725_19524(RTCW(loc1));
		F1723_19483(RTCW(loc1), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) + ((EIF_INTEGER_32) 1L)), ti4_3, ti4_4);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.on_menu_command */
void F1982_24472 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19893[Dtype(Current)-1981]);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		loc1 = *(EIF_REFERENCE *)(loc2 + _REFACS_1_);
		loc1 = RTRV(eif_new_type(1730, 0x00), loc1);
		RTCT0("menu_bar_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1722_19467(RTCW(loc1), arg1);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.on_menu_opened */
void F1982_24473 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,arg1);
	RTLIU(5);
	
	RTGC;
	tb1 = '\0';
	if (F1913_22706(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + O19893[Dtype(Current)-1981]);
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		loc1 = *(EIF_REFERENCE *)(loc2 + _REFACS_1_);
		loc1 = RTRV(eif_new_type(1730, 0x00), loc1);
		RTCT0("menu_bar_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1722_19466(RTCW(loc1), arg1);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.set_last_focused_widget */
void F1982_24475 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	*(EIF_POINTER *)(Current + O19864[Dtype(Current)-1981]) = (EIF_POINTER) arg1;
}

/* {EV_WINDOW_IMP}.compute_minimum_width */
void F1982_24476 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = F1408_17332(RTCV(F1982_24479(Current)));
	tb1 = '\0';
	tr1 = F1977_24333(Current);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[Dtype(loc2)-1871])(loc2);
		tb1 = tb2;
	}
	if (tb1) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16402[Dtype(loc2)-1730])(loc2);
		loc1 += ti4_1;
	}
	F1725_19525(Current, loc1, arg1);
	RTLE;
}

/* {EV_WINDOW_IMP}.compute_minimum_height */
void F1982_24477 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = F1408_17333(RTCV(F1982_24479(Current)));
	tb1 = '\0';
	tr1 = F1977_24333(Current);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[Dtype(loc2)-1871])(loc2);
		tb1 = tb2;
	}
	if (tb1) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16403[Dtype(loc2)-1730])(loc2);
		loc1 += ti4_1;
	}
	F1725_19526(Current, loc1, arg1);
	RTLE;
}

/* {EV_WINDOW_IMP}.compute_minimum_size */
void F1982_24478 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc3 = F1982_24479(Current);
	loc1 = F1408_17332(RTCW(loc3));
	loc2 = F1408_17333(RTCW(loc3));
	tb1 = '\0';
	tr1 = F1977_24333(Current);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[Dtype(loc4)-1871])(loc4);
		tb1 = tb2;
	}
	if (tb1) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16402[Dtype(loc4)-1730])(loc4);
		loc1 += ti4_1;
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16403[Dtype(loc4)-1730])(loc4);
		loc2 += ti4_1;
	}
	F1725_19527(Current, loc1, loc2, arg1);
	RTLE;
}

/* {EV_WINDOW_IMP}.extra_minimum_rect */
EIF_REFERENCE F1982_24479 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	loc1 = F1912_22490(Current);
	Result = F1912_22491(Current);
	ti4_1 = F1408_17332(RTCW(Result));
	ti4_2 = F1408_17332(RTCW(loc1));
	ti4_3 = F1408_17333(RTCW(Result));
	ti4_4 = F1408_17333(RTCW(loc1));
	F1408_17334(RTCW(Result), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ti4_2), (EIF_INTEGER_32) (ti4_3 - ti4_4));
	RTLE;
	return Result;
}

/* {EV_WINDOW_IMP}.set_top_level_window_imp */
void F1982_24481 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EV_WINDOW_IMP}.default_style */
EIF_INTEGER_32 F1982_24482 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 0x80000000L) + ((EIF_INTEGER_32) 0L)) + ((EIF_INTEGER_32) 4194304L)) + ((EIF_INTEGER_32) 33554432L)) + ((EIF_INTEGER_32) 67108864L)) + ((EIF_INTEGER_32) 262144L));
}

/* {EV_WINDOW_IMP}.default_ex_style */
EIF_INTEGER_32 F1982_24483 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 65536L);
}

/* {EV_WINDOW_IMP}.default_process_message */
void F1982_24484 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 33L))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R19869[Dtype(Current)-1981])(Current, arg2, arg3);
	} else {
		F1971_24210(Current, arg1, arg2, arg3);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.show */
void F1982_24486 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O19889[dtype-1981])) {
		*(EIF_BOOLEAN *)(Current + O19889[dtype-1981]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		F1982_24524(Current, NULL);
	}
	F1982_24521(Current);
	RTLE;
}

/* {EV_WINDOW_IMP}.hide */
void F1982_24487 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1912_22513(Current);
	*(EIF_BOOLEAN *)(Current + O19867[Dtype(Current)-1981]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {EV_WINDOW_IMP}.on_show */
void F1982_24489 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (F1913_22706(Current)) {
		F1913_22727(Current);
	}
	tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_0_2_);
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_0_);
		tr1 = *(EIF_REFERENCE *)(Current + O16311[dtype-1722]);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_1_);
		F1912_22542(Current, ti4_1, ti4_2);
	}
	ti4_1 = F1970_24041(Current);
	ti4_1 = eif_min_int32 (ti4_1,*(EIF_INTEGER_32 *)(Current + O19894[dtype-1981]));
	ti4_2 = F1970_24043(Current);
	ti4_2 = eif_min_int32 (ti4_2,*(EIF_INTEGER_32 *)(Current + O19895[dtype-1981]));
	F1912_22543(Current, ti4_1, ti4_2);
	RTLE;
}

/* {EV_WINDOW_IMP}.on_hide */
void F1982_24490 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	{
		/* INLINED CODE (WEL_WINDOW.on_hide) */
		/* END INLINED CODE */
	}
	;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O9438[dtype-245]) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O9438[dtype-245]);
		F977_14409(RTCW(tr1), NULL);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.on_size */
void F1982_24491 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O15892[dtype-1695]) != NULL)) {
		ti4_1 = ((EIF_INTEGER_32) 1L);
		tb1 = (EIF_BOOLEAN)(arg1 != ti4_1);
	}
	if (tb1) {
		loc2 = F1912_22491(Current);
		ti4_1 = F1408_17332(RTCW(loc2));
		ti4_2 = F1408_17333(RTCW(loc2));
		F1723_19485(Current, ti4_1, ti4_2);
		tr1 = *(EIF_REFERENCE *)(Current + O16654[dtype-1762]);
		tb1 = F736_2537(RTCW(tr1));
		if ((EIF_BOOLEAN) !tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + O16654[dtype-1762]);
			loc1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_3_);
			loc1 = RTRV(eif_new_type(1974, 0x00), loc1);
			RTCT0("bar_imp_not_void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			ti4_1 = F1971_24164(Current);
			ti4_2 = F1982_24439(Current);
			F1723_19483(RTCW(loc1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1, ti4_2);
		}
		tr1 = F1977_24333(Current);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			ti4_1 = F1971_24162(Current);
			ti4_2 = F1982_24439(Current);
			ti4_3 = F1971_24164(Current);
			ti4_4 = F1982_24440(Current);
			F1723_19483(loc3, ti4_1, ti4_2, ti4_3, ti4_4);
		}
		tr1 = *(EIF_REFERENCE *)(Current + O16655[dtype-1762]);
		tb1 = F736_2537(RTCW(tr1));
		if ((EIF_BOOLEAN) !tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + O16655[dtype-1762]);
			loc1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_3_);
			loc1 = RTRV(eif_new_type(1974, 0x00), loc1);
			RTCT0("bar_imp_not_void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			ti4_1 = F1982_24439(Current);
			ti4_2 = F1982_24440(Current);
			ti4_3 = F1971_24164(Current);
			ti4_4 = F1725_19524(RTCW(loc1));
			F1723_19483(RTCW(loc1), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) + ((EIF_INTEGER_32) 1L)), ti4_3, ti4_4);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R19868[dtype-1981])(Current, arg2, arg3);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.execute_resize_actions */
void F1982_24492 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	F1970_24131(Current, arg1, arg2);
}

/* {EV_WINDOW_IMP}.on_move */
void F1982_24493 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O15892[dtype-1695]) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O15892[dtype-1695]);
		tr1 = F1594_17717(RTCW(tr1));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,1475,1508,1508,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0.id, 5, 1);
		}
		ti4_1 = F1970_24046(Current);
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ti4_1;
		ti4_1 = F1970_24047(Current);
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ti4_1;
		ti4_1 = F1723_19499(Current);
		((EIF_TYPED_VALUE *)tr2+3)->it_i4 = ti4_1;
		ti4_1 = F1723_19500(Current);
		((EIF_TYPED_VALUE *)tr2+4)->it_i4 = ti4_1;
		F977_14409(RTCW(tr1), tr2);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.on_get_min_max_info */
void F1982_24494 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	ti4_1 = F1725_19523(Current);
	ti4_2 = F1725_19524(Current);
	F1906_22334(RTCW(loc1), ti4_1, ti4_2);
	loc2 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1906_22334(RTCW(loc2), *(EIF_INTEGER_32 *)(Current + O19894[dtype-1981]), *(EIF_INTEGER_32 *)(Current + O19895[dtype-1981]));
	F1409_17374(RTCW(arg1), loc1);
	F1409_17375(RTCW(arg1), loc2);
	RTLE;
}

/* {EV_WINDOW_IMP}.on_destroy */
void F1982_24495 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	{
		/* INLINED CODE (EV_CONTAINER_IMP.on_destroy) */
		/* END INLINED CODE */
	}
	;
	tb1 = '\0';
	tb2 = '\0';
	tr1 = F1970_24073(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb3 = F1970_24048(loc1);
		tb2 = (EIF_BOOLEAN) !tb3;
	}
	if (tb2) {
		tb2 = F1912_22467(loc1);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R16434[Dtype(loc1)-1964])(loc1);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.on_wm_close */
void F1982_24496 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O9432[Dtype(Current)-245]) != NULL)) {
		tr1 = F246_11656(Current);
		F977_14409(RTCW(tr1), NULL);
	}
	F214_11245(Current, (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_WINDOW_IMP}.on_wm_mouseactivate */
void F1982_24497 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	F1910_22427(RTCV(F1956_23756(Current)));
	loc1 = (EIF_INTEGER_32) HIWORD((arg2));
	if ((EIF_BOOLEAN) !F1982_24466(Current)) {
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 513L))) {
			loc2 = F1982_24500(Current, ((EIF_INTEGER_32) 1L));
		} else {
			if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 516L))) {
				loc2 = F1982_24500(Current, ((EIF_INTEGER_32) 3L));
			} else {
				loc2 = (EIF_REFERENCE) NULL;
			}
		}
	}
	*(EIF_BOOLEAN *)(Current + O19876[dtype-1981]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\0';
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 516L))) {
			tb3 = F1982_24498(Current, loc2);
		}
		if (!(tb3)) {
			tb3 = '\0';
			if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 513L))) {
				tb3 = F1982_24499(Current, loc2);
			}
			tb2 = tb3;
		}
		if (!tb2) {
			tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_47_);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb1) {
			ti4_1 = ((EIF_INTEGER_32) 3L);
			tp1 = (EIF_POINTER) (LRESULT)((ti4_1));
			F214_11244(Current, tp1);
			F1912_22507(Current);
			*(EIF_BOOLEAN *)(Current + O19876[dtype-1981]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			tb1 = '\0';
			if ((EIF_BOOLEAN) !F1982_24466(Current)) {
				tb1 = (EIF_BOOLEAN) !F1982_24499(Current, loc2);
			}
			if (tb1) {
				F1910_22426(RTCV(F1956_23756(Current)));
			}
		} else {
			tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_47_);
			if ((EIF_BOOLEAN)(tr1 == NULL)) {
				F1982_24513(Current);
			}
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_47_);
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			F1982_24513(Current);
		} else {
			ti4_1 = ((EIF_INTEGER_32) 3L);
			tp1 = (EIF_POINTER) (LRESULT)((ti4_1));
			F214_11244(Current, tp1);
			F1912_22507(Current);
			*(EIF_BOOLEAN *)(Current + O19876[dtype-1981]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			if ((EIF_BOOLEAN) !F1982_24466(Current)) {
				F1910_22426(RTCV(F1956_23756(Current)));
			}
		}
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.widget_has_pick */
EIF_BOOLEAN F1982_24498 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tb1 = F1751_19756(RTCW(arg1));
		RTLE;
		return (EIF_BOOLEAN) tb1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {EV_WINDOW_IMP}.widget_has_drag */
EIF_BOOLEAN F1982_24499 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tb1 = F1751_19757(RTCW(arg1));
		RTLE;
		return (EIF_BOOLEAN) tb1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {EV_WINDOW_IMP}.pnd_source_at_pointer_position */
EIF_REFERENCE F1982_24500 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc2);
	RTLR(1,loc1);
	RTLR(2,loc3);
	RTLR(3,loc7);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,Result);
	RTLR(7,loc4);
	RTLR(8,loc5);
	RTLR(9,loc6);
	RTLIU(10);
	
	RTGC;
	loc2 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1906_22334(RTCW(loc2), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	F1906_22341(RTCW(loc2));
	loc1 = F1906_22342(RTCW(loc2));
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		loc3 = loc1;
		loc3 = RTRV(eif_new_type(1969, 0x00), loc3);
		if ((EIF_BOOLEAN)(loc3 == NULL)) {
			loc7 = loc1;
			loc7 = RTRV(eif_new_type(1950, 0x00), loc7);
			if ((EIF_BOOLEAN)(loc7 != NULL)) {
				loc3 = F1951_23464(RTCW(loc7));
			}
		}
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			tb2 = F1751_19758(RTCW(loc3));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			tb1 = '\01';
			tb2 = '\0';
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L))) {
				tb3 = F1751_19757(RTCW(loc3));
				tb2 = tb3;
			}
			if (!(tb2)) {
				tb2 = '\0';
				if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 3L))) {
					tb3 = F1751_19756(RTCW(loc3));
					tb2 = tb3;
				}
				tb1 = tb2;
			}
			if (tb1) {
				tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_47_);
				if ((EIF_BOOLEAN)(tr1 == NULL)) {
					ti4_1 = F1906_22336(RTCW(loc2));
					ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16398[Dtype(RTCW(loc3))-1730])(loc3);
					ti4_3 = F1906_22337(RTCW(loc2));
					ti4_4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16399[Dtype(RTCW(loc3))-1730])(loc3);
					ti4_5 = F1906_22336(RTCW(loc2));
					ti4_6 = F1906_22337(RTCW(loc2));
					F1751_19776(RTCW(loc3), (EIF_INTEGER_32) (ti4_1 - ti4_2), (EIF_INTEGER_32) (ti4_3 - ti4_4), ti4_5, ti4_6);
				}
				tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + O16500[Dtype(loc3)-1750]);
				if ((EIF_BOOLEAN)(tr1 != NULL)) {
					Result = (EIF_REFERENCE) loc3;
				}
				F1751_19743(RTCW(loc3));
				{
					static EIF_TYPE_INDEX typarr0[] = {1720,0xFF01,1667,0xFF01,1957,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc4 = loc3;
					loc4 = RTRV(typres0, loc4);
				}
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					ti4_1 = F1906_22336(RTCW(loc2));
					ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16271[Dtype(RTCW(loc4))-1730])(loc4);
					ti4_3 = F1906_22337(RTCW(loc2));
					ti4_4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16272[Dtype(RTCW(loc4))-1730])(loc4);
					loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R16270[Dtype(RTCW(loc4))-1730])(loc4, (EIF_INTEGER_32) (ti4_1 - ti4_2), (EIF_INTEGER_32) (ti4_3 - ti4_4));
					loc5 = RTRV(eif_new_type(1957, 0x00), loc5);
					if ((EIF_BOOLEAN)(loc5 != NULL)) {
						ti4_1 = F1906_22336(RTCW(loc2));
						ti4_2 = F1906_22337(RTCW(loc2));
						F1751_19776(RTCW(loc5), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1, ti4_2);
						tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + O16500[Dtype(loc5)-1750]);
						if ((EIF_BOOLEAN)(tr1 != NULL)) {
							loc6 = *(EIF_REFERENCE *)(RTCW(loc5) + O15892[Dtype(loc5)-1695]);
							loc6 = RTRV(eif_new_type(1630, 0x00), loc6);
							tb1 = '\01';
							if (!(EIF_BOOLEAN)(loc6 == NULL)) {
								tb2 = '\0';
								if ((EIF_BOOLEAN)(loc6 != NULL)) {
									tb3 = F1631_18291(RTCW(loc6));
									tb2 = tb3;
								}
								tb1 = tb2;
							}
							if (tb1) {
								Result = (EIF_REFERENCE) loc5;
							}
						}
						F1751_19743(RTCW(loc5));
					}
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_WINDOW_IMP}.on_wm_window_pos_changing */
void F1982_24501 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLIU(3);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O19876[dtype-1981])) {
		loc1 = RTLNS(eif_new_type(1904, 0x01).id, 1904, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1296_15096(RTCW(loc1), arg1);
		loc2 = RTLNS(eif_new_type(244, 0x01).id, 244, _OBJSIZ_0_0_0_0_0_0_0_0_);
		loc3 = F1905_22304(RTCW(loc1));
		ti4_1 = ((EIF_INTEGER_32) 4L);
		ti4_1 = F1258_14779(Current, loc3, ti4_1);
		loc3 = (EIF_INTEGER_32) ti4_1;
		F1905_22309(RTCW(loc1), loc3);
	}
	*(EIF_BOOLEAN *)(Current + O19876[dtype-1981]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {EV_WINDOW_IMP}.on_wm_ncactivate */
EIF_POINTER F1982_24502 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc6);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTGC;
	loc4 = (EIF_INTEGER_32) (rt_int_ptr) arg2;
	loc6 = *(EIF_REFERENCE *)(Current + O15892[dtype-1695]);
	loc6 = RTRV(eif_new_type(1642, 0x00), loc6);
	if ((EIF_BOOLEAN)(loc6 != NULL)) {
		loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = F1956_23756(Current);
		loc1 = F1910_22404(RTCW(tr1), (EIF_BOOLEAN) 0);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[Dtype(RTCW(loc1))-911])(loc1);
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[Dtype(RTCW(loc1))-911])(loc1);
			if (tb1) break;
			loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2290[Dtype(RTCW(loc1))-911])(loc1);
			loc3 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_3_);
			loc3 = RTRV(eif_new_type(1981, 0x00), loc3);
			RTCT0("not_void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2290[Dtype(RTCW(loc1))-911])(loc1);
			loc2 = RTRV(eif_new_type(1643, 0x00), loc2);
			tb2 = '\0';
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				tp1 = *(EIF_POINTER *)(RTCW(loc3) + O12527[Dtype(loc3)-1295]);
				tb2 = (EIF_BOOLEAN)(arg3 == tp1);
			}
			if (tb2) {
				loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[Dtype(RTCW(loc1))-911])(loc1);
		}
		if (loc5) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[Dtype(RTCW(loc1))-911])(loc1);
			for (;;) {
				tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[Dtype(RTCW(loc1))-911])(loc1);
				if (tb2) break;
				loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2290[Dtype(RTCW(loc1))-911])(loc1);
				loc3 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_3_);
				loc3 = RTRV(eif_new_type(1981, 0x00), loc3);
				RTCT0("not_void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2290[Dtype(RTCW(loc1))-911])(loc1);
				loc2 = RTRV(eif_new_type(1643, 0x00), loc2);
				tb3 = '\0';
				tb4 = '\0';
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					tp1 = *(EIF_POINTER *)(RTCW(loc3) + O12527[Dtype(loc3)-1295]);
					tb4 = (EIF_BOOLEAN)(tp1 != *(EIF_POINTER *)(Current + O12527[dtype-1295]));
				}
				if (tb4) {
					tb3 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O12527[dtype-1295]) != arg3);
				}
				if (tb3) {
					tp1 = *(EIF_POINTER *)(RTCW(loc3) + O12527[Dtype(loc3)-1295]);
					tp2 = (EIF_POINTER) (WPARAM)((loc4));
					tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) -1L)));
					inline_F67_9749(tp1, ((EIF_INTEGER_32) 134L), tp2, tp3);
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[Dtype(RTCW(loc1))-911])(loc1);
			}
		}
	}
	tp1 = (EIF_POINTER) (WPARAM)((loc4));
	Result = F1912_22636(Current, arg1, ((EIF_INTEGER_32) 134L), tp1, arg3);
	F1912_22507(Current);
	RTLE;
	return Result;
}

/* {EV_WINDOW_IMP}.window_process_message */
EIF_POINTER F1982_24503 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	switch (arg2) {
		case 134L:
			ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg4;
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L))) {
				tp1 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
				Result = F1912_22636(Current, arg1, arg2, arg3, tp1);
				F1912_22507(Current);
			} else {
				loc2 = Current;
				loc2 = RTRV(eif_new_type(1987, 0x00), loc2);
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) arg3;
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
						tb1 = '\01';
						tb2 = '\01';
						tb3 = '\01';
						tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_47_);
						if (!(EIF_BOOLEAN)(tr1 != NULL)) {
							tb4 = *(EIF_BOOLEAN *)(RTCV(F1956_23756(Current))+ _CHROFF_48_9_);
							tb3 = tb4;
						}
						if (!tb3) {
							tb3 = *(EIF_BOOLEAN *)(RTCV(F1956_23756(Current))+ _CHROFF_48_10_);
							tb2 = tb3;
						}
						if (!tb2) {
							tb2 = *(EIF_BOOLEAN *)(RTCV(F1956_23756(Current))+ _CHROFF_48_11_);
							tb1 = tb2;
						}
						if (tb1) {
							F1912_22507(Current);
							*(EIF_BOOLEAN *)(Current + O19876[dtype-1981]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							F1910_22424(RTCV(F1956_23756(Current)));
						}
					} else {
						tb1 = *(EIF_BOOLEAN *)(RTCV(F1956_23756(Current))+ _CHROFF_48_11_);
						if (tb1) {
							F1912_22507(Current);
							F1910_22427(RTCV(F1956_23756(Current)));
						}
					}
				}
				Result = F1982_24502(Current, arg1, arg3, arg4);
			}
			break;
		case 6L:
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) R19874[dtype-1981])(Current, arg3, arg4);
			break;
		case 279L:
			loc1 = RTLNS(eif_new_type(1315, 0x01).id, 1315, _OBJSIZ_0_1_0_0_0_1_0_0_);
			F1296_15096(RTCW(loc1), arg3);
			F1982_24473(Current, loc1);
			break;
		case 289L:
			tr1 = F1956_23756(Current);
			F1714_19283(RTCW(tr1), (EIF_BOOLEAN) 0);
			F1982_24505(Current, arg4);
			break;
		default:
			Result = F1912_22634(Current, arg1, arg2, arg3, arg4);
			break;
	}
	RTLE;
	return Result;
}

/* {EV_WINDOW_IMP}.window_on_wm_activate */
void F1982_24504 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) HIWORD((arg1));
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	ti4_1 = ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) LOWORD((arg1)) != ti4_1)) {
		if ((EIF_BOOLEAN) !loc1) {
			tr1 = F1956_23756(Current);
			F1910_22399(RTCW(tr1), Current);
			tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_17_);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = F251_11718(RTCV(F1956_23756(Current)));
				{
					EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,0,0,0xFFFF};
					EIF_TYPE typres0;
					{
						EIF_TYPE l_type;
						l_type = eif_final_id(Y15892,Y15892_gen_type,dftype,1695);
						typarr0[5] = l_type.annotations | 0xFF00;
						typarr0[6] = l_type.id;
					}
					
					typres0 = eif_compound_id(dftype, typarr0);
					tr2 = RTLNTS(typres0.id, 2, 0);
				}
				tr3 = F1696_18976(Current);
				((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
				RTAR(tr2,tr3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
			}
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11069[dtype-412]) != NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + O11069[dtype-412]);
				F977_14409(RTCW(tr1), NULL);
			}
			tp1 = *(EIF_POINTER *)(Current + O19864[dtype-1981]);
			if ((EIF_BOOLEAN) EIF_TEST(IsWindow(((HWND) tp1)))) {
				tr1 = F1898_22150(Current, *(EIF_POINTER *)(Current + O19864[dtype-1981]));
				loc2 = tr1;
				if (EIF_TEST(loc2)) {
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R18689[Dtype(loc2)-1914])(loc2);
					F1912_22507(Current);
				}
			}
		}
	} else {
		F1970_24116(Current);
		tr1 = F1956_23756(Current);
		F1910_22399(RTCW(tr1), NULL);
		tr1 = RTOUCR(241,F1970_24037, (Current));
		F489_1934(RTCW(tr1), NULL);
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_18_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F251_11720(RTCV(F1956_23756(Current)));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,0,0,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = eif_final_id(Y15892,Y15892_gen_type,dftype,1695);
					typarr0[5] = l_type.annotations | 0xFF00;
					typarr0[6] = l_type.id;
				}
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr2 = RTLNTS(typres0.id, 2, 0);
			}
			tr3 = F1696_18976(Current);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O11071[dtype-412]) != NULL)) {
			tr1 = F413_13384(Current);
			F977_14409(RTCW(tr1), NULL);
		}
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.fire_dialog_show_actions */
void F1982_24505 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLIU(3);
	
	RTGC;
	loc1 = F1910_22403(RTCV(F1956_23756(Current)));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[Dtype(RTCW(loc1))-911])(loc1);
	for (;;) {
		tb1 = '\01';
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2291[Dtype(RTCW(loc1))-911])(loc1);
		if (!tb2) {
			tb1 = loc3;
		}
		if (tb1) break;
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2290[Dtype(RTCW(loc1))-911])(loc1);
		loc2 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_3_);
		loc2 = RTRV(eif_new_type(1986, 0x00), loc2);
		tb2 = '\0';
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tp1 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_85_32_6_14_0_0_);
			tb2 = (EIF_BOOLEAN)(tp1 == arg1);
		}
		if (tb2) {
			tb2 = *(EIF_BOOLEAN *)(RTCW(loc2)+ _CHROFF_85_21_);
			if (tb2) {
				F1987_24647(RTCW(loc2));
			}
			loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[Dtype(RTCW(loc1))-911])(loc1);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.has_title_bar */
EIF_BOOLEAN F1982_24507 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_BOOLEAN) 0;
}

/* {EV_WINDOW_IMP}.on_dpi_changed */
void F1982_24510 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O15892[dtype-1695]) != NULL)) {
		loc2 = F1912_22491(Current);
		ti4_1 = F1408_17332(RTCW(loc2));
		ti4_2 = F1408_17333(RTCW(loc2));
		F1723_19485(Current, ti4_1, ti4_2);
		tr1 = *(EIF_REFERENCE *)(Current + O16654[dtype-1762]);
		tb1 = F736_2537(RTCW(tr1));
		if ((EIF_BOOLEAN) !tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + O16654[dtype-1762]);
			loc1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_3_);
			loc1 = RTRV(eif_new_type(1974, 0x00), loc1);
			RTCT0("bar_imp_not_void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			ti4_1 = F1971_24164(Current);
			ti4_2 = F1982_24439(Current);
			F1723_19483(RTCW(loc1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1, ti4_2);
		}
		tr1 = F1977_24333(Current);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			ti4_1 = F1971_24162(Current);
			ti4_2 = F1982_24439(Current);
			ti4_3 = F1971_24164(Current);
			ti4_4 = F1982_24440(Current);
			F1723_19483(loc3, ti4_1, ti4_2, ti4_3, ti4_4);
		}
		tr1 = *(EIF_REFERENCE *)(Current + O16655[dtype-1762]);
		tb1 = F736_2537(RTCW(tr1));
		if ((EIF_BOOLEAN) !tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + O16655[dtype-1762]);
			loc1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_3_);
			loc1 = RTRV(eif_new_type(1974, 0x00), loc1);
			RTCT0("bar_imp_not_void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			ti4_1 = F1982_24439(Current);
			ti4_2 = F1982_24440(Current);
			ti4_3 = F1971_24164(Current);
			ti4_4 = F1725_19524(RTCW(loc1));
			F1723_19483(RTCW(loc1), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) + ((EIF_INTEGER_32) 1L)), ti4_3, ti4_4);
		}
		ti4_1 = F1971_24164(Current);
		ti4_2 = F1982_24440(Current);
		F1982_24511(Current, arg1, ti4_1, ti4_2);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.execute_dpi_actions */
void F1982_24511 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	F1970_24131(Current, arg2, arg3);
}

/* {EV_WINDOW_IMP}.allow_movement */
void F1982_24512 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O19876[Dtype(Current)-1981]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_WINDOW_IMP}.move_to_foreground */
void F1982_24513 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O19876[dtype-1981]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = (EIF_POINTER) HWND_TOP;
	loc1 = (EIF_BOOLEAN) EIF_TEST(SetWindowPos(((HWND) tp1), ((HWND) tp2), ((int) ((EIF_INTEGER_32) 0L)), ((int) ((EIF_INTEGER_32) 0L)), ((int) ((EIF_INTEGER_32) 0L)), ((int) ((EIF_INTEGER_32) 0L)), ((UINT) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ((EIF_INTEGER_32) 2L)))));
	RTLE;
}

/* {EV_WINDOW_IMP}.set_style_and_redraw */
void F1982_24514 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1912_22522(Current, arg1);
	F1725_19528(Current, ((EIF_INTEGER_32) 3L), Current, (EIF_BOOLEAN) 0);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16563[Dtype(Current)-1871])(Current)) {
		F1912_22563(Current);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.next_tabstop_widget */
EIF_REFERENCE F1982_24515 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(7);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,arg1);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLR(6,Result);
	RTLIU(7);
	
	RTGC;
	loc3 = *(EIF_REFERENCE *)(Current + O19844[Dtype(Current)-1976]);
	RTCT0("l_item /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc1 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(1969, 0x00), loc1);
	RTCT0("w /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	if (arg3) {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN)) R19758[Dtype(RTCW(loc1))-1972])(loc1, arg1, ((EIF_INTEGER_32) 1L), arg3);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		loc2 = *(EIF_REFERENCE *)(RTCW(loc1) + O15892[Dtype(loc1)-1695]);
		loc2 = RTRV(eif_new_type(1632, 0x00), loc2);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15462[Dtype(RTCW(loc2))-1634])(loc2);
			Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN)) R19758[Dtype(RTCW(loc1))-1972])(loc1, arg1, ti4_1, arg3);
		} else {
			Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN)) R19758[Dtype(RTCW(loc1))-1972])(loc1, arg1, ((EIF_INTEGER_32) 1L), arg3);
			RTLE;
			return (EIF_REFERENCE) Result;
		}
	}
	RTLE;
	return Result;
}

/* {EV_WINDOW_IMP}.title_height */
EIF_INTEGER_32 F1982_24516 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R19877[Dtype(Current)-1981])(Current)) {
		RTLE;
		return (EIF_INTEGER_32) F1849_20932(Current);
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_WINDOW_IMP}.frame_height */
EIF_INTEGER_32 F1982_24517 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O16661[dtype-1762])) {
		RTLE;
		return (EIF_INTEGER_32) F1849_20908(Current);
	} else {
		if (*(EIF_BOOLEAN *)(Current + O16685[dtype-1762])) {
			RTLE;
			return (EIF_INTEGER_32) F1849_20904(Current);
		}
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_WINDOW_IMP}.frame_width */
EIF_INTEGER_32 F1982_24518 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O16661[dtype-1762])) {
		RTLE;
		return (EIF_INTEGER_32) F1849_20907(Current);
	} else {
		if (*(EIF_BOOLEAN *)(Current + O16685[dtype-1762])) {
			RTLE;
			return (EIF_INTEGER_32) F1849_20903(Current);
		}
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_WINDOW_IMP}.class_requires_icon */
EIF_BOOLEAN F1982_24520 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_WINDOW_IMP}.show_internal */
void F1982_24521 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16563[dtype-1871])(Current)) {
		*(EIF_BOOLEAN *)(Current + O19867[dtype-1981]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R19888[dtype-1981])(Current);
		ShowWindow(((HWND) tp1), ((int) ti4_1));
		if ((EIF_BOOLEAN)(F1977_24333(Current) != NULL)) {
			tr1 = F1977_24333(Current);
			F1725_19528(Current, ((EIF_INTEGER_32) 3L), tr1, (EIF_BOOLEAN) 0);
		}
		if (*(EIF_BOOLEAN *)(Current + O19867[dtype-1981])) {
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O9436[dtype-245]) != NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + O9436[dtype-245]);
				F977_14409(RTCW(tr1), NULL);
			}
			*(EIF_BOOLEAN *)(Current + O19867[dtype-1981]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.show_flags */
EIF_INTEGER_32 F1982_24522 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
}

/* {EV_WINDOW_IMP}.switch_between_parented_window */
void F1982_24524 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,loc6);
	RTLR(2,loc8);
	RTLR(3,loc7);
	RTLR(4,loc10);
	RTLR(5,tr1);
	RTLR(6,arg1);
	RTLR(7,loc1);
	RTLIU(8);
	
	RTGC;
	loc2 = F1970_24041(Current);
	loc3 = F1970_24043(Current);
	loc4 = F1982_24441(Current);
	loc5 = F1982_24442(Current);
	loc6 = *(EIF_REFERENCE *)(Current + O19844[dtype-1976]);
	F1982_24525(Current, loc6);
	loc8 = *(EIF_REFERENCE *)(Current + O16655[dtype-1762]);
	F1982_24525(Current, loc8);
	loc7 = *(EIF_REFERENCE *)(Current + O16654[dtype-1762]);
	F1982_24525(Current, loc7);
	loc10 = *(EIF_REFERENCE *)(Current + O19893[dtype-1981]);
	if ((EIF_BOOLEAN)(loc10 != NULL)) {
		F1982_24465(Current);
	}
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	loc9 = (EIF_INTEGER_32) DestroyWindow(((HWND) tp1));
	tr1 = F1956_23756(Current);
	F1910_22397(RTCW(tr1), Current);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		loc1 = RTRV(eif_new_type(1911, 0x00), loc1);
		RTCT0("not_void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = RTMS_EX_H("",0,0);
		F1917_22822(Current, loc1, tr1);
		*(EIF_REFERENCE *)(Current + O18635[dtype-1911]) = (EIF_REFERENCE) NULL;
	} else {
		tr1 = RTMS_EX_H("",0,0);
		F1917_22823(Current, tr1);
	}
	tr1 = F1956_23756(Current);
	F1910_22396(RTCW(tr1), Current);
	F1723_19473(Current, loc2, loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R16407[dtype-1981])(Current, loc4, loc5);
	F1982_24526(Current, loc6, Current);
	F1982_24526(Current, loc8, Current);
	F1982_24526(Current, loc7, Current);
	if ((EIF_BOOLEAN)(loc10 != NULL)) {
		F1982_24464(Current, loc10);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.clear_parent */
void F1982_24525 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		loc1 = RTRV(eif_new_type(1969, 0x00), loc1);
		RTCT0("not_void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = RTOUCR(239,F1910_22395, (RTCV(F1956_23756(Current))));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19743[Dtype(RTCW(loc1))-1972])(loc1, tr1);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.set_widget_parent */
void F1982_24526 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		loc1 = RTRV(eif_new_type(1969, 0x00), loc1);
		RTCT0("l_widget_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19743[Dtype(RTCW(loc1))-1972])(loc1, arg2);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.get_wm_hscroll_code */
EIF_INTEGER_32 F1982_24528 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GET_WM_HSCROLL_CODE(((WPARAM) arg1), ((LPARAM) arg2));
}

/* {EV_WINDOW_IMP}.get_wm_hscroll_hwnd */
EIF_POINTER F1982_24529 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_POINTER) (EIF_POINTER) GET_WM_HSCROLL_HWND(((WPARAM) arg1), ((LPARAM) arg2));
}

/* {EV_WINDOW_IMP}.get_wm_hscroll_pos */
EIF_INTEGER_32 F1982_24530 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwin_get_wm_hscroll_pos(((WPARAM) arg1), ((LPARAM) arg2));
}

/* {EV_WINDOW_IMP}.get_wm_vscroll_code */
EIF_INTEGER_32 F1982_24531 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GET_WM_VSCROLL_CODE(((WPARAM) arg1), ((LPARAM) arg2));
}

/* {EV_WINDOW_IMP}.get_wm_vscroll_hwnd */
EIF_POINTER F1982_24532 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_POINTER) (EIF_POINTER) GET_WM_VSCROLL_HWND(((WPARAM) arg1), ((LPARAM) arg2));
}

/* {EV_WINDOW_IMP}.get_wm_vscroll_pos */
EIF_INTEGER_32 F1982_24533 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwin_get_wm_vscroll_pos(((WPARAM) arg1), ((LPARAM) arg2));
}

/* {EV_WINDOW_IMP}.destroy */
void F1982_24535 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1696_18975(Current)) {
		tr1 = F1956_23756(Current);
		F1910_22397(RTCW(tr1), Current);
		F1977_24339(Current, NULL);
		F1696_18991(Current, (EIF_BOOLEAN) 1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R19862[Dtype(Current)-1981])(Current);
	}
	RTLE;
}

/* {EV_WINDOW_IMP}.is_shown_by_default */
EIF_BOOLEAN F1982_24536 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_BOOLEAN) 0;
}

void EIF_Minit1965 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
