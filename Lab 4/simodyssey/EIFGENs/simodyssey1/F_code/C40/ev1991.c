/*
 * Code for class EV_TEXT_FIELD_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1991.h"
#include <windows.h>
#include "wel.h"
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

/* {EV_TEXT_FIELD_IMP}.make */
void F2008_25306 (EIF_REFERENCE Current)
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
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_56_20_6_8_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	tr1 = RTOUCR(249,F1970_24036, (Current));
	tr2 = RTMS_EX_H("",0,0);
	F1945_23334(Current, tr1, tr2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	F1750_19724(Current);
	F2006_25179(Current);
	F1947_23362(Current);
	RTLE;
}

/* {EV_TEXT_FIELD_IMP}.set_text */
void F2008_25307 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F944_3738(RTCW(loc1), arg1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_56_20_6_9_0_0_);
	tp2 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = F944_3745(RTCW(loc1));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 12L), tp2, tp3);
	ti4_1 = F1912_22496(Current);
	ti4_1 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 4L));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		tp1 = *(EIF_POINTER *)(RTCV(RTOUCR(249,F1970_24036, (Current)))+ _PTROFF_7_2_0_2_0_0_);
		ti4_1 = eif_bit_shift_left(((EIF_INTEGER_32) 768L),((EIF_INTEGER_32) 16L));
		tp2 = (EIF_POINTER) (WPARAM)((ti4_1));
		tp3 = *(EIF_POINTER *)(Current+ _PTROFF_56_20_6_9_0_0_);
		inline_F67_9749(tp1, ((EIF_INTEGER_32) 273L), tp2, tp3);
	}
	RTLE;
}

/* {EV_TEXT_FIELD_IMP}.text */
EIF_REFERENCE F2008_25308 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = F1912_22494(Current);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		loc1++;
		loc2 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F944_3739(RTCW(loc2), loc1);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_56_20_6_9_0_0_);
		tp2 = F944_3745(RTCW(loc2));
		loc3 = (EIF_INTEGER_32) GetWindowText(((HWND) tp1), ((LPTSTR) tp2), ((int) loc1));
		tr1 = F944_3743(RTCW(loc2));
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1564_6847(RTCW(tr1), ((EIF_INTEGER_32) 0L));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

/* {EV_TEXT_FIELD_IMP}.text_alignment */
EIF_INTEGER_32 F2008_25309 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_56_20_6_8_);
}


/* {EV_TEXT_FIELD_IMP}.align_text_center */
void F2008_25310 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_56_20_6_8_) != ((EIF_INTEGER_32) 2L))) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_56_20_6_8_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		F2008_25315(Current);
	}
	RTLE;
}

/* {EV_TEXT_FIELD_IMP}.align_text_left */
void F2008_25312 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_56_20_6_8_) != ((EIF_INTEGER_32) 1L))) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_56_20_6_8_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		F2008_25315(Current);
	}
	RTLE;
}

/* {EV_TEXT_FIELD_IMP}.default_style */
EIF_INTEGER_32 F2008_25314 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 1073741824L),((EIF_INTEGER_32) 268435456L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 65536L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 131072L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 128L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 33554432L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 67108864L));
	Result = eif_bit_or(ti4_1,((EIF_INTEGER_32) 4L));
	switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_56_20_6_8_)) {
		case 1L:
			ti4_1 = eif_bit_or(Result,((EIF_INTEGER_32) 0L));
			Result = (EIF_INTEGER_32) ti4_1;
			break;
		case 3L:
			ti4_1 = eif_bit_or(Result,((EIF_INTEGER_32) 2L));
			Result = (EIF_INTEGER_32) ti4_1;
			break;
		case 2L:
			ti4_1 = eif_bit_or(Result,((EIF_INTEGER_32) 1L));
			Result = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTLE;
	return Result;
}

/* {EV_TEXT_FIELD_IMP}.recreate_current */
void F2008_25315 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc10 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc8);
	RTLR(1,Current);
	RTLR(2,loc7);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTGC;
	loc8 = F2008_25308(Current);
	loc7 = F516_14185(Current);
	loc6 = F1912_22467(Current);
	loc9 = F2006_25205(Current);
	loc10 = F1947_23346(Current);
	tr1 = RTMS_EX_H("",0,0);
	F516_14186(Current, tr1);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_49_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		loc1 = RTOUCR(249,F1970_24036, (Current));
	}
	loc2 = F1970_24046(Current);
	loc3 = F1970_24047(Current);
	loc4 = F1723_19499(Current);
	loc5 = F1723_19500(Current);
	F1912_22576(Current);
	tr1 = RTMS_EX_H("",0,0);
	F1945_23334(Current, loc1, tr1, loc2, loc3, loc4, loc5, ((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_39_) != NULL)) {
		F2008_25321(Current, *(EIF_REFERENCE *)(Current + _REFACS_39_));
	} else {
		F1750_19724(Current);
	}
	if ((EIF_BOOLEAN) !loc6) {
		F1970_24059(Current);
	}
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_54_) != NULL)) {
		tr1 = F1715_19379(Current);
		F1970_24067(Current, tr1);
	}
	F516_14186(Current, loc7);
	F1912_22526(Current, loc8);
	F1947_23361(Current, loc9);
	if (loc10) {
		F1947_23356(Current);
	}
	RTLE;
}

/* {EV_TEXT_FIELD_IMP}.ignore_character_code */
EIF_BOOLEAN F2008_25316 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 13L)) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 9L)));
}

/* {EV_TEXT_FIELD_IMP}.on_key_down */
void F2008_25317 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 27L))) {
		tr1 = F1970_24035(Current);
		loc1 = tr1;
		loc1 = RTRV(eif_new_type(1647, 0x01),loc1);
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		F1912_22507(Current);
	}
	F1970_24106(Current, arg1, arg2);
	if ((EIF_BOOLEAN) !F1696_18975(Current)) {
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 13L))) {
			tb1 = F2006_25183(Current);
		}
		if (tb1) {
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_6_) != NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
				F977_14409(RTCW(tr1), NULL);
			}
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_49_);
		loc2 = tr1;
		loc2 = RTRV(eif_new_type(2000, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			F2001_25092(loc2, arg1, arg2);
		}
	}
	RTLE;
}

/* {EV_TEXT_FIELD_IMP}.on_en_change */
void F2008_25318 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		F977_14409(RTCW(tr1), NULL);
	}
	RTLE;
}

/* {EV_TEXT_FIELD_IMP}.enable */
void F2008_25319 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_56_20_6_9_0_0_);
	EnableWindow(((HWND) tp1), ((BOOL) (EIF_BOOLEAN) 1));
}

/* {EV_TEXT_FIELD_IMP}.disable */
void F2008_25320 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_56_20_6_9_0_0_);
	EnableWindow(((HWND) tp1), ((BOOL) (EIF_BOOLEAN) 0));
}

/* {EV_TEXT_FIELD_IMP}.set_font */
void F2008_25321 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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

/* {EV_TEXT_FIELD_IMP}.next_dlgtabitem */
EIF_POINTER F2008_25322 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTGC;
	tr1 = RTOUCR(251,F1970_24148, (Current));
	F490_1934(RTCW(tr1), ((EIF_INTEGER_32) -1L));
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_49_);
	loc2 = RTRV(eif_new_type(2000, 0x00), loc2);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		loc3 = F1696_18976(RTCW(loc2));
	} else {
		loc3 = F1696_18976(Current);
	}
	if ((EIF_BOOLEAN) !arg3) {
		loc1 = F1970_24149(Current, loc3, ((EIF_INTEGER_32) 0L), (EIF_BOOLEAN) 0);
	} else {
		loc1 = F1970_24149(Current, loc3, ((EIF_INTEGER_32) 1L), (EIF_BOOLEAN) 1);
	}
	tp1 = *(EIF_POINTER *)(RTCW(loc1) + O12527[Dtype(loc1)-1295]);
	RTLE;
	return (EIF_POINTER) tp1;
}

void EIF_Minit1991 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
