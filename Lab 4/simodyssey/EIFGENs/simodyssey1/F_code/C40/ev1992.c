/*
 * Code for class EV_TEXT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1992.h"
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

/* {EV_TEXT_IMP}.make */
void F2009_25325 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R20122[Dtype(Current)-2008])(Current);
	F2006_25179(Current);
	F1947_23362(Current);
	RTLE;
}

/* {EV_TEXT_IMP}.initialize_text_widget */
void F2009_25326 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
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
	F1945_23334(Current, tr1, tr2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	F1912_22548(Current);
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 197L), tp2, tp3);
	F1750_19724(Current);
	RTLE;
}

/* {EV_TEXT_IMP}.is_replacing_nl_by_crnl */
EIF_BOOLEAN F2009_25328 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_TEXT_IMP}.text */
EIF_REFERENCE F2009_25330 (EIF_REFERENCE Current)
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
		tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
		tp2 = F944_3745(RTCW(loc2));
		loc3 = (EIF_INTEGER_32) GetWindowText(((HWND) tp1), ((LPTSTR) tp2), ((int) loc1));
		tr1 = F945_14355(RTCW(loc2));
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1564_6847(RTCW(tr1), ((EIF_INTEGER_32) 0L));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

/* {EV_TEXT_IMP}.set_text */
void F2009_25331 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F945_14350(RTCW(loc1), arg1);
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = F944_3745(RTCW(loc1));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 12L), tp2, tp3);
	tp1 = *(EIF_POINTER *)(RTCV(RTOUCR(249,F1970_24036, (Current)))+ _PTROFF_7_2_0_2_0_0_);
	ti4_1 = eif_bit_shift_left(((EIF_INTEGER_32) 768L),((EIF_INTEGER_32) 16L));
	tp2 = (EIF_POINTER) (WPARAM)((ti4_1));
	tp3 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 273L), tp2, tp3);
	RTLE;
}

/* {EV_TEXT_IMP}.insert_text */
void F2009_25334 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	loc1 = F2006_25205(Current);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16830[dtype-2007])(Current)) {
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R20100[dtype-2007])(Current);
		loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R20101[dtype-2007])(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R20092[dtype-2006])(Current, loc1, loc1);
	}
	loc4 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F945_14350(RTCW(loc4), arg1);
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = F944_3745(RTCW(loc4));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 194L), tp2, tp3);
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16830[dtype-2007])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R20092[dtype-2006])(Current, loc2, loc3);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R20091[dtype-2006])(Current, loc1);
	RTLE;
}

/* {EV_TEXT_IMP}.text_length */
EIF_INTEGER_32 F2009_25340 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O20124[dtype-2008])) {
		Result = F2006_25188(Current);
		*(EIF_INTEGER_32 *)(Current + O20123[dtype-2008]) = (EIF_INTEGER_32) Result;
		*(EIF_BOOLEAN *)(Current + O20124[dtype-2008]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		loc1 = (EIF_INTEGER_32) GetWindowTextLength(((HWND) tp1));
		if ((EIF_BOOLEAN)(loc1 != *(EIF_INTEGER_32 *)(Current + O20125[dtype-2008]))) {
			Result = F2006_25188(Current);
			*(EIF_INTEGER_32 *)(Current + O20123[dtype-2008]) = (EIF_INTEGER_32) Result;
			*(EIF_INTEGER_32 *)(Current + O20125[dtype-2008]) = (EIF_INTEGER_32) loc1;
		} else {
			Result = *(EIF_INTEGER_32 *)(Current + O20123[dtype-2008]);
			RTLE;
			return (EIF_INTEGER_32) Result;
		}
	}
	RTLE;
	return Result;
}

/* {EV_TEXT_IMP}.disable_word_wrapping */
void F2009_25342 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F2009_25358(Current, ((EIF_INTEGER_32) 1048576L));
}

/* {EV_TEXT_IMP}.append_text */
void F2009_25343 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	loc1 = F2006_25205(Current);
	ti4_1 = F1912_22494(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R20091[dtype-2006])(Current, ti4_1);
	loc2 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F945_14350(RTCW(loc2), arg1);
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = F944_3745(RTCW(loc2));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 194L), tp2, tp3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R20091[dtype-2006])(Current, loc1);
	RTLE;
}

/* {EV_TEXT_IMP}.ignore_character_code */
EIF_BOOLEAN F2009_25346 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
	return (EIF_BOOLEAN) 0;
}

/* {EV_TEXT_IMP}.background_brush */
EIF_REFERENCE F2009_25350 (EIF_REFERENCE Current)
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
	tb1 = '\01';
	if (!F2006_25183(Current)) {
		tb1 = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O19682[Dtype(Current)-1969]) != NULL);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1715_19380(Current)) + _REFACS_1_);
		loc1 = tr1;
		loc1 = RTRV(eif_new_type(1829, 0x01),loc1);
		if (EIF_TEST(loc1)) {
			tr1 = RTLNS(eif_new_type(1320, 0x01).id, 1320, _OBJSIZ_0_2_0_3_0_1_0_0_);
			F1321_15590(RTCW(tr1), loc1);
			RTLE;
			return (EIF_REFERENCE) tr1;
		}
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_TEXT_IMP}.default_style */
EIF_INTEGER_32 F2009_25351 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 1073741824L) + ((EIF_INTEGER_32) 268435456L)) + ((EIF_INTEGER_32) 131072L)) + ((EIF_INTEGER_32) 65536L)) + ((EIF_INTEGER_32) 8388608L)) + ((EIF_INTEGER_32) 0L)) + ((EIF_INTEGER_32) 4L)) + ((EIF_INTEGER_32) 4096L)) + ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 33554432L)) + ((EIF_INTEGER_32) 67108864L)) + ((EIF_INTEGER_32) 256L));
}

/* {EV_TEXT_IMP}.default_ex_style */
EIF_INTEGER_32 F2009_25352 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 512L);
}

/* {EV_TEXT_IMP}.is_multiline */
EIF_BOOLEAN F2009_25353 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_TEXT_IMP}.on_en_change */
void F2009_25354 (EIF_REFERENCE Current)
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
	*(EIF_BOOLEAN *)(Current + O20124[Dtype(Current)-2008]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {EV_TEXT_IMP}.enable */
void F2009_25355 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	EnableWindow(((HWND) tp1), ((BOOL) (EIF_BOOLEAN) 1));
}

/* {EV_TEXT_IMP}.disable */
void F2009_25356 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	EnableWindow(((HWND) tp1), ((BOOL) (EIF_BOOLEAN) 0));
}

/* {EV_TEXT_IMP}.on_key_down */
void F2009_25357 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	if (F1947_23346(Current)) {
		F1970_24103(Current, arg1);
	}
	F1970_24106(Current, arg1, arg2);
	RTLE;
}

/* {EV_TEXT_IMP}.recreate_current */
void F2009_25358 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc7);
	RTLR(2,loc8);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTGC;
	loc6 = F1912_22467(Current);
	loc7 = F516_14185(Current);
	loc8 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16471[dtype-1809])(Current);
	loc9 = F2006_25185(Current);
	loc10 = F1947_23346(Current);
	tr1 = RTMS_EX_H("",0,0);
	F516_14186(Current, tr1);
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
	tr1 = RTMS_EX_H("",0,0);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R19744[dtype-1972])(Current);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	F1912_22614(Current, loc1, tr1, (EIF_INTEGER_32) (ti4_1 + arg1), loc2, loc3, loc4, loc5, ((EIF_INTEGER_32) 0L), tp2);
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 197L), tp2, tp3);
	F1912_22548(Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O16495[dtype-1749]) != NULL)) {
		F1750_19723(Current, *(EIF_REFERENCE *)(Current + O16495[dtype-1749]));
	} else {
		F1750_19724(Current);
	}
	if ((EIF_BOOLEAN) !loc6) {
		F1970_24059(Current);
	}
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O19683[dtype-1969]) != NULL)) {
		tr1 = F1715_19379(Current);
		F1970_24067(Current, tr1);
	}
	F516_14186(Current, loc7);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16472[dtype-1809])(Current, loc8);
	F2006_25190(Current, loc9);
	if (loc10) {
		F1947_23356(Current);
	}
	RTLE;
}

void EIF_Minit1992 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
