/*
 * Code for class EV_COMBO_BOX_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1990.h"
#include <windows.h>
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

/* {EV_COMBO_BOX_IMP}.make */
void F2007_25232 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1958,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 2L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_56_) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_69_25_6_10_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = RTOUCR(249,F1970_24036, (Current));
	ti4_1 = F2007_25291(Current);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	F1912_22614(Current, tr1, NULL, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L)), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 50L), ((EIF_INTEGER_32) -1L), tp2);
	F1750_19724(Current);
	F1721_19435(Current);
	F1696_18990(Current, (EIF_BOOLEAN) 0);
	F1733_19652(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_69_25_6_14_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	tr1 = RTLNSMART(eif_new_type(24, 1).id);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_41_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1937, 0).id);
	F1938_23254(RTCW(tr1), Current);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_66_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1950, 0).id);
	F1951_23463(RTCW(tr1), Current);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_65_) = (EIF_REFERENCE) tr1;
	F2006_25179(Current);
	F2007_25233(Current);
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.initialize_hints */
void F2007_25233 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1784_20194(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_69_25_6_13_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.text_alignment */
EIF_INTEGER_32 F2007_25234 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_69_25_6_14_);
}


/* {EV_COMBO_BOX_IMP}.align_text_center */
void F2007_25235 (EIF_REFERENCE Current)
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
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_69_25_6_14_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	tb1 = '\0';
	if (F2006_25183(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_65_);
		loc1 = tr1;
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		F1951_23466(loc1);
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.align_text_right */
void F2007_25236 (EIF_REFERENCE Current)
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
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_69_25_6_14_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	tb1 = '\0';
	if (F2006_25183(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_65_);
		loc1 = tr1;
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		F1951_23467(loc1);
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.align_text_left */
void F2007_25237 (EIF_REFERENCE Current)
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
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_69_25_6_14_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	tb1 = '\0';
	if (F2006_25183(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_65_);
		loc1 = tr1;
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		F1951_23468(loc1);
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.height */
EIF_INTEGER_32 F2007_25240 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1408_17333(RTCV(F1912_22491(Current)));
	RTLE;
	return Result;
}

/* {EV_COMBO_BOX_IMP}.text */
EIF_REFERENCE F2007_25241 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN) !F2006_25183(Current)) {
		loc1 = F2007_25244(Current);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = F1622_18115(RTCW(loc1));
			RTLE;
			return (EIF_REFERENCE) tr1;
		} else {
			tr1 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F1558_6510(RTCW(tr1));
			RTLE;
			return (EIF_REFERENCE) tr1;
		}
	} else {
		RTLE;
		return (EIF_REFERENCE) F1940_23303(Current);
	}/* NOTREACHED */
	
}

/* {EV_COMBO_BOX_IMP}.item_height */
EIF_INTEGER_32 F2007_25242 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_45_) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_45_);
		tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
		Result = F1886_21722(RTCW(tr1));
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_46_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			Result = F1885_21701(loc1);
			RTLE;
			return (EIF_INTEGER_32) Result;
		}
	}
	RTLE;
	return Result;
}

/* {EV_COMBO_BOX_IMP}.is_selected */
EIF_BOOLEAN F2007_25243 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (F1937_23232(Current)) {
		ti4_1 = F1937_23233(Current);
		Result = (EIF_BOOLEAN) ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)) == ti4_1));
	}
	RTLE;
	return Result;
}

/* {EV_COMBO_BOX_IMP}.selected_item */
EIF_REFERENCE F2007_25244 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if (F1937_23232(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_56_);
		ti4_1 = F1937_23233(Current);
		loc1 = F951_4080(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_16_);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_COMBO_BOX_IMP}.has_focus */
EIF_BOOLEAN F2007_25246 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_66_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = F1912_22474(loc1);
		Result = tb1;
	}
	tb1 = '\0';
	tb2 = '\0';
	if ((EIF_BOOLEAN) !Result) {
		tb2 = F2006_25183(Current);
	}
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_65_);
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		Result = F1912_22474(loc2);
		RTLE;
		return (EIF_BOOLEAN) Result;
	}
	RTLE;
	return Result;
}

/* {EV_COMBO_BOX_IMP}.set_focus */
void F2007_25247 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN) !F2007_25246(Current)) {
		if (F2006_25183(Current)) {
			F1912_22517(Current);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_66_);
			loc1 = tr1;
			if (EIF_TEST(loc1)) {
				F1912_22517(loc1);
			}
		}
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.select_item */
void F2007_25248 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1937_23229(Current, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)));
	F2007_25295(Current);
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.deselect_item */
void F2007_25249 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	F2007_25250(Current);
}

/* {EV_COMBO_BOX_IMP}.clear_selection */
void F2007_25250 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1937_23230(Current);
	F2007_25295(Current);
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.set_editable */
void F2007_25251 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (arg1) {
		F2007_25279(Current);
	} else {
		F2007_25278(Current);
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.wel_set_caret_position */
void F2007_25252 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	if (F2006_25183(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_65_);
		loc1 = tr1;
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		F1947_23361(loc1, arg1);
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.set_tooltip */
void F2007_25253 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	F516_14186(Current, arg1);
	tb1 = '\0';
	if (F2006_25183(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_65_);
		loc1 = tr1;
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		F516_14186(loc1, arg1);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_66_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		F516_14186(loc2, arg1);
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.set_text */
void F2007_25260 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F1940_23304(Current, arg1);
}

/* {EV_COMBO_BOX_IMP}.setup_image_list */
void F2007_25261 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1299, 0).id);
	F1300_15153(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_69_25_6_5_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_69_25_6_6_));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_55_) = (EIF_REFERENCE) tr1;
	F1939_23286(Current, *(EIF_REFERENCE *)(Current + _REFACS_55_));
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.set_pixmap_of_child */
void F2007_25263 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_28_);
	F1356_16165(RTCW(loc1), arg3);
	F1356_16166(RTCW(loc1), arg3);
	F1356_16163(RTCW(loc1), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	F1939_23290(Current, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	F1939_23289(Current, loc1);
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.internal_select_item */
void F2007_25265 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = F2007_25268(Current, arg1);
	F2007_25248(Current, ti4_1);
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.internal_is_selected */
EIF_BOOLEAN F2007_25266 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = F2007_25268(Current, arg1);
	Result = F2007_25243(Current, ti4_1);
	RTLE;
	return Result;
}

/* {EV_COMBO_BOX_IMP}.internal_deselect_item */
void F2007_25267 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = F2007_25268(Current, arg1);
	F2007_25249(Current, ti4_1);
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.internal_get_index */
EIF_INTEGER_32 F2007_25268 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_56_);
	Result = F852_3258(RTCW(tr1), arg1, ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {EV_COMBO_BOX_IMP}.get_item_position */
EIF_REFERENCE F2007_25269 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	Result = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1906_22334(RTCW(Result), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_56_);
	loc1 = F951_4080(RTCW(tr1), (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)));
	tb1 = F1959_23800(RTCW(loc1));
	if (tb1) {
		ti4_1 = F1937_23237(Current);
		ti4_2 = F2007_25242(Current);
		F1906_22340(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 - ti4_1) * ti4_2));
	}
	RTLE;
	return Result;
}

/* {EV_COMBO_BOX_IMP}.visible_count */
EIF_INTEGER_32 F2007_25270 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F1937_23235(Current);
	loc2 = F1408_17331(RTCW(loc1));
	ti4_1 = F1408_17328(RTCW(loc1));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - ti4_1);
	Result = F1937_23238(Current);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 / Result);
	RTLE;
	return Result;
}

/* {EV_COMBO_BOX_IMP}.on_set_focus */
void F2007_25271 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLIU(8);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_64_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		loc2 = *(EIF_REFERENCE *)(RTCV(RTOUCR(241,F1970_24037, (Current))));
		tr1 = RTOUCR(241,F1970_24037, (Current));
		F489_1934(RTCW(tr1), Current);
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_17_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F251_11718(RTCV(F1956_23756(Current)));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,0,0,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = eif_final_id(Y15892,Y15892_gen_type,Dftype(Current),1695);
					typarr0[5] = l_type.annotations | 0xFF00;
					typarr0[6] = l_type.id;
				}
				
				typres0 = eif_compound_id(Dftype(Current), typarr0);
				tr2 = RTLNTS(typres0.id, 2, 0);
			}
			tr3 = F1696_18976(Current);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		}
		tb1 = '\0';
		if (F2006_25183(Current)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_65_);
			loc3 = tr1;
			tb1 = EIF_TEST(loc3);
		}
		if (tb1) {
			tp1 = *(EIF_POINTER *)(loc3+ _PTROFF_7_3_0_4_0_0_);
			F1982_24475(RTCW(loc1), tp1);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_66_);
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				tp1 = *(EIF_POINTER *)(loc4+ _PTROFF_7_2_0_3_0_0_);
				F1982_24475(RTCW(loc1), tp1);
			}
		}
		tr1 = F1956_23756(Current);
		F1910_22399(RTCW(tr1), loc1);
		if ((EIF_BOOLEAN)(loc2 != Current)) {
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_31_) != NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_31_);
				F977_14409(RTCW(tr1), NULL);
			}
		}
	}
	if (F2007_25246(Current)) {
		F1970_24116(Current);
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.on_kill_focus */
void F2007_25272 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) !F2007_25246(Current)) {
		F1970_24114(Current);
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.propagate_key_event_to_toplevel_window */
EIF_BOOLEAN F2007_25273 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1939_23281(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {EV_COMBO_BOX_IMP}.internal_propagate_pointer_press */
void F2007_25274 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc1 = F1970_24088(Current, arg2, arg3);
	ti4_1 = F1906_22336(RTCW(loc1));
	ti4_2 = F1906_22337(RTCW(loc1));
	F1969_23985(Current, arg2, arg3, arg4, ti4_1, ti4_2);
	if ((EIF_BOOLEAN)(arg4 != ((EIF_INTEGER_32) 3L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_64_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			F1982_24513(loc2);
		}
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.internal_propagate_pointer_double_press */
void F2007_25275 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	
	
	RTGC;
}

/* {EV_COMBO_BOX_IMP}.find_item_at_position */
EIF_REFERENCE F2007_25276 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

/* {EV_COMBO_BOX_IMP}.recreate_combo_box */
void F2007_25277 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F1970_24073(Current);
	loc1 = RTRV(eif_new_type(1911, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		loc1 = RTOUCR(249,F1970_24036, (Current));
		loc1 = RTRV(eif_new_type(1911, 0x00), loc1);
	}
	loc2 = F1970_24046(Current);
	loc3 = F1970_24047(Current);
	loc4 = F1723_19499(Current);
	loc5 = F1723_19500(Current);
	F1912_22576(Current);
	ti4_1 = F2007_25291(Current);
	ti4_1 = eif_bit_or(ti4_1,arg1);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	F1912_22614(Current, loc1, NULL, ti4_1, loc2, loc3, loc4, loc5, ((EIF_INTEGER_32) 0L), tp2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_69_25_6_10_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	F2007_25281(Current);
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.set_read_only */
void F2007_25278 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	if (F2006_25183(Current)) {
		loc1 = F1912_22467(Current);
		loc2 = F2007_25244(Current);
		loc3 = F516_14185(Current);
		tr1 = RTMS_EX_H("",0,0);
		F2007_25253(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_65_) = (EIF_REFERENCE) NULL;
		F2007_25277(Current, ((EIF_INTEGER_32) 3L));
		tr1 = RTLNSMART(eif_new_type(1937, 0).id);
		F1938_23254(RTCW(tr1), Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_66_) = (EIF_REFERENCE) tr1;
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_45_) != NULL)) {
			F2007_25288(Current, *(EIF_REFERENCE *)(Current + _REFACS_45_));
		} else {
			F1750_19724(Current);
		}
		if ((EIF_BOOLEAN) !loc1) {
			F1970_24059(Current);
		}
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			F1620_18108(RTCW(loc2));
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_63_) != NULL)) {
			tr1 = F1715_19379(Current);
			F2007_25286(Current, tr1);
		}
		F2007_25253(Current, loc3);
		switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_69_25_6_14_)) {
			case 1L:
				F2007_25237(Current);
				break;
			case 2L:
				F2007_25235(Current);
				break;
			case 3L:
				F2007_25236(Current);
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.set_read_write */
void F2007_25279 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN) !F2006_25183(Current)) {
		loc1 = F1912_22467(Current);
		loc2 = F2007_25244(Current);
		loc3 = F516_14185(Current);
		F2007_25277(Current, ((EIF_INTEGER_32) 2L));
		tr1 = RTLNSMART(eif_new_type(1937, 0).id);
		F1938_23254(RTCW(tr1), Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_66_) = (EIF_REFERENCE) tr1;
		tr1 = RTLNSMART(eif_new_type(1950, 0).id);
		F1951_23463(RTCW(tr1), Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_65_) = (EIF_REFERENCE) tr1;
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_45_) != NULL)) {
			F2007_25288(Current, *(EIF_REFERENCE *)(Current + _REFACS_45_));
		} else {
			F1750_19724(Current);
		}
		if ((EIF_BOOLEAN) !loc1) {
			F1970_24059(Current);
		}
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			F1620_18108(RTCW(loc2));
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_63_) != NULL)) {
			tr1 = F1715_19379(Current);
			F2007_25286(Current, tr1);
		}
		F2007_25253(Current, loc3);
		switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_69_25_6_14_)) {
			case 1L:
				F2007_25237(Current);
				break;
			case 2L:
				F2007_25235(Current);
				break;
			case 3L:
				F2007_25236(Current);
				break;
			default:
				break;
		}
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.read_only */
EIF_BOOLEAN F2007_25280 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1912_22496(Current);
	Result = F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 3L));
	RTLE;
	return Result;
}

/* {EV_COMBO_BOX_IMP}.internal_copy_list */
void F2007_25281 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_56_);
	loc1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O3095[Dtype(tr1)-950]);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_56_);
	F951_4104(RTCW(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_56_);
		tb1 = F882_3332(RTCW(tr1));
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_56_);
		tr1 = F951_4078(RTCW(tr1));
		tr1 = F1959_23780(RTCW(tr1));
		F1939_23287(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_56_);
		loc2 = F951_4078(RTCW(tr1));
		tb2 = *(EIF_BOOLEAN *)(RTCW(loc2)+ _CHROFF_30_6_);
		if (tb2) {
			if ((EIF_BOOLEAN) !loc3) {
				F1939_23286(Current, *(EIF_REFERENCE *)(Current + _REFACS_55_));
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			ti4_1 = F1959_23796(RTCW(loc2));
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc2)+ _LNGOFF_30_12_6_2_);
			F2007_25263(Current, loc2, ti4_1, ti4_2);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_56_);
		F951_4106(RTCW(tr1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_56_);
	F951_4108(RTCW(tr1), loc1);
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.insert_item */
void F2007_25282 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
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
	tr1 = F1959_23780(RTCW(arg1));
	F1939_23288(Current, tr1, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.on_cben_insert_item */
void F2007_25283 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tb1 = '\0';
	ti4_1 = F1356_16157(RTCW(arg1));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		tb1 = (EIF_BOOLEAN)(F1717_19424(Current) == ((EIF_INTEGER_32) 1L));
	}
	if (tb1) {
		F2007_25248(Current, ((EIF_INTEGER_32) 1L));
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_69_25_6_13_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.refresh_item */
void F2007_25284 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	ti4_1 = F1959_23796(RTCW(arg1));
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_28_);
	F1939_23283(Current, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), tr1);
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.remove_item */
void F2007_25285 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F2007_25268(Current, arg1);
	F1937_23226(Current, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.set_foreground_color */
void F2007_25286 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	F1970_24067(Current, arg1);
	if (F1912_22468(Current)) {
		tb1 = '\0';
		if (F2006_25183(Current)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_65_);
			loc1 = tr1;
			tb1 = EIF_TEST(loc1);
		}
		if (tb1) {
			F1912_22563(loc1);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_66_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			F1912_22563(loc2);
		}
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.set_background_color */
void F2007_25287 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	F1970_24066(Current, arg1);
	if (F1912_22468(Current)) {
		tb1 = '\0';
		if (F2006_25183(Current)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_65_);
			loc1 = tr1;
			tb1 = EIF_TEST(loc1);
		}
		if (tb1) {
			F1912_22563(loc1);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_66_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			F1912_22563(loc2);
		}
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.set_font */
void F2007_25288 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	F1750_19723(Current, arg1);
	F2006_25180(Current);
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.on_key_down */
void F2007_25289 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc4);
	RTLR(3,loc5);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	F1970_24103(Current, arg1);
	F1970_24106(Current, arg1, arg2);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 13L))) {
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_56_);
		F951_4104(RTCW(loc1));
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			tb1 = '\01';
			ti4_1 = F951_4094(RTCW(loc1));
			if (!(EIF_BOOLEAN)(loc2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
				tb1 = loc3;
			}
			if (tb1) break;
			loc4 = F951_4078(RTCW(loc1));
			loc4 = F1959_23782(RTCW(loc4));
			loc5 = F2007_25241(Current);
			F1565_6979(RTCW(loc4));
			F1565_6979(RTCW(loc5));
			if (F1_10(Current, loc4, loc5)) {
				if ((EIF_BOOLEAN) !F2007_25243(Current, loc2)) {
					F2007_25248(Current, loc2);
				}
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			tb2 = F852_3270(RTCW(loc1));
			if ((EIF_BOOLEAN) !tb2) {
				F951_4106(RTCW(loc1));
			}
			loc2++;
		}
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_10_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
			F977_14409(RTCW(tr1), NULL);
		}
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.on_erase_background */
void F2007_25290 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1912_22507(Current);
	tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 1L)));
	F214_11244(Current, tp1);
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.default_style */
EIF_INTEGER_32 F2007_25291 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 1073741824L),((EIF_INTEGER_32) 268435456L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 131072L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 65536L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 2097152L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 64L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 33554432L));
	Result = eif_bit_or(ti4_1,((EIF_INTEGER_32) 67108864L));
	return Result;
}

/* {EV_COMBO_BOX_IMP}.on_cbn_selchange */
void F2007_25295 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc2);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTGC;
	if (F1937_23232(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_56_);
		ti4_1 = F1937_23233(Current);
		loc1 = F951_4079(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
	} else {
		loc1 = (EIF_REFERENCE) NULL;
	}
	if ((EIF_BOOLEAN) !F1_10(Current, *(EIF_REFERENCE *)(Current + _REFACS_67_), loc1)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_67_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			loc2 = *(EIF_REFERENCE *)(loc3 + _REFACS_1_);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				F977_14409(RTCW(loc2), NULL);
			}
			loc2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,1669,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLNTS(typres0.id, 2, 0);
				}
				tr2 = *(EIF_REFERENCE *)(loc3 + _REFACS_16_);
				((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
				RTAR(tr1,tr2);
				F977_14409(RTCW(loc2), tr1);
			}
		}
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_67_) = (EIF_REFERENCE) loc1;
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			loc2 = *(EIF_REFERENCE *)(RTCW(loc1));
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				F977_14409(RTCW(loc2), NULL);
			}
			loc2 = *(EIF_REFERENCE *)(Current);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,1669,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLNTS(typres0.id, 2, 0);
				}
				tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_16_);
				((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
				RTAR(tr1,tr2);
				F977_14409(RTCW(loc2), tr1);
			}
		}
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.on_cbn_editchange */
void F2007_25296 (EIF_REFERENCE Current)
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
	tr1 = F2007_25241(Current);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_68_);
	if ((EIF_BOOLEAN) !F1_10(Current, tr1, tr2)) {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_4_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			F977_14409(RTCW(tr1), NULL);
		}
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_69_25_6_13_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	}
	tr1 = F2007_25241(Current);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_68_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.on_cbn_dropdown */
void F2007_25297 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc6);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc5);
	RTLR(6,loc7);
	RTLR(7,loc8);
	RTLIU(8);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_66_);
	RTCT0("l_combo /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_69_25_6_7_);
	if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) -1L))) {
		if ((EIF_BOOLEAN)(F1717_19424(Current) == ((EIF_INTEGER_32) 0L))) {
			loc3 = F1912_22483(RTCW(loc2));
		} else {
			loc6 = RTLNS(eif_new_type(1626, 0x01).id, 1626, _OBJSIZ_2_0_0_0_0_0_0_0_);
			F1596_17742(RTCW(loc6));
			ti4_1 = F1912_22482(RTCW(loc2));
			ti4_2 = F1912_22483(RTCW(loc2));
			loc1 = F1970_24088(Current, (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)), (EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 2L)));
			tr1 = *(EIF_REFERENCE *)(RTCW(loc6) + _REFACS_1_);
			ti4_1 = F1906_22336(RTCW(loc1));
			ti4_2 = F1906_22337(RTCW(loc1));
			tr1 = F1954_23592(RTCW(tr1), ti4_1, ti4_2);
			loc3 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_0_0_3_);
		}
	}
	loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_69_25_6_8_);
	if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
		loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_69_25_6_13_);
		if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
			loc5 = F1926_22911(Current);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_56_);
			loc7 = F951_4087(RTCW(tr1));
			for (;;) {
				tb1 = F1081_4373(loc7);
				if (tb1) break;
				tr1 = F1081_4364(loc7);
				tr1 = F1959_23783(RTCW(tr1));
				loc8 = tr1;
				if (EIF_TEST(loc8)) {
					ti4_1 = F1614_18068(loc8);
					tr1 = F1081_4364(loc7);
					tr1 = F1959_23782(RTCW(tr1));
					ti4_2 = F1885_21703(RTCW(loc5), tr1);
					ti4_1 = eif_max_int32 (loc4,(EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 10L)) + ti4_2));
					loc4 = (EIF_INTEGER_32) ti4_1;
				} else {
					tr1 = F1081_4364(loc7);
					tr1 = F1959_23782(RTCW(tr1));
					ti4_1 = F1885_21703(RTCW(loc5), tr1);
					ti4_1 = eif_max_int32 (loc4,ti4_1);
					loc4 = (EIF_INTEGER_32) ti4_1;
				}
				F1081_4379(loc7);
			}
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_69_25_6_13_) = (EIF_INTEGER_32) loc4;
		}
		ti4_1 = F1970_24041(Current);
		ti4_1 = eif_max_int32 (loc4,ti4_1);
		loc4 = (EIF_INTEGER_32) ti4_1;
	}
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		F977_14409(RTCW(tr1), NULL);
	}
	ti4_1 = F1912_22482(RTCW(loc2));
	F1912_22543(RTCW(loc2), ti4_1, loc3);
	tp1 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_7_2_0_3_0_0_);
	tp2 = (EIF_POINTER) (WPARAM)((loc4));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 352L), tp2, tp3);
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.on_cbn_closeup */
void F2007_25298 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		F977_14409(RTCW(tr1), NULL);
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.wel_set_selection */
void F2007_25299 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	if (F2006_25183(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_65_);
		loc1 = tr1;
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		F1947_23360(loc1, arg1, arg2);
	}
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.destroy */
void F2007_25302 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1716_19419(Current);
	F1989_24676(Current);
	RTLE;
}

/* {EV_COMBO_BOX_IMP}.wel_text_item */
EIF_POINTER F2007_25303 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_65_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tp1 = *(EIF_POINTER *)(loc1+ _PTROFF_7_3_0_4_0_0_);
		RTLE;
		return (EIF_POINTER) tp1;
	}
	RTLE;
	return (EIF_POINTER) 0;
}

void EIF_Minit1990 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
