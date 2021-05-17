/*
 * Code for class EV_TEXT_COMPONENT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1989.h"
#include <windows.h>

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
#ifndef INLINE_F67_9732
static int inline_F67_9732 (EIF_POINTER arg1)
{
	return (int) (GetCaretPos ((LPPOINT) arg1))
	;
}
#define INLINE_F67_9732
#endif
#ifndef INLINE_F67_9747
static EIF_INTEGER_32 inline_F67_9747 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (EIF_INTEGER_32) (SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4))
	;
}
#define INLINE_F67_9747
#endif
#ifndef INLINE_F470_13514
static EIF_POINTER inline_F470_13514 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER) (rt_uint_ptr) MAKELONG(arg1, arg2);
	;
}
#define INLINE_F470_13514
#endif
#ifndef INLINE_F67_9746
static EIF_POINTER inline_F67_9746 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (EIF_POINTER) (SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4))
	;
}
#define INLINE_F67_9746
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TEXT_COMPONENT_IMP}.make */
void F2006_25179 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(501, 0x01).id, 501, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = F502_14137(RTCW(tr1));
	F1926_22912(Current, tr1);
	F1970_24029(Current);
	RTLE;
}

/* {EV_TEXT_COMPONENT_IMP}.set_default_minimum_size */
void F2006_25180 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F2006_25198(Current);
	ti4_2 = F1750_19722(Current);
	F1724_19513(Current, (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 4L)), (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 9L)), (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_TEXT_COMPONENT_IMP}.is_editable */
EIF_BOOLEAN F2006_25183 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R20095[Dtype(Current)-2006])(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {EV_TEXT_COMPONENT_IMP}.is_replacing_nl_by_crnl */
EIF_BOOLEAN F2006_25184 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_TEXT_COMPONENT_IMP}.caret_position */
EIF_INTEGER_32 F2006_25185 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = F2006_25205(Current);
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R20103[dtype-2006])(Current, ti4_1);
	Result = F945_14364(RTCW(loc1));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R20083[dtype-2006])(Current)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
		ti4_1 = F945_14365(RTCW(loc1), tw1);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	}
	RTLE;
	return Result;
}

/* {EV_TEXT_COMPONENT_IMP}.text_length */
EIF_INTEGER_32 F2006_25188 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R20102[dtype-2006])(Current);
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R20103[dtype-2006])(Current, ti4_1);
	Result = F945_14364(RTCW(loc1));
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R20083[dtype-2006])(Current)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
		ti4_1 = F945_14365(RTCW(loc1), tw1);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	}
	RTLE;
	return Result;
}

/* {EV_TEXT_COMPONENT_IMP}.set_editable */
void F2006_25189 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (arg1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R20097[dtype-2006])(Current);
	} else {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R20096[dtype-2006])(Current);
	}
	RTLE;
}

/* {EV_TEXT_COMPONENT_IMP}.set_caret_position */
void F2006_25190 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F2006_25191(Current, arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R20091[Dtype(Current)-2006])(Current, ti4_1);
	RTLE;
}

/* {EV_TEXT_COMPONENT_IMP}.actual_position_from_caret_position */
EIF_INTEGER_32 F2006_25191 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc3);
	RTLIU(3);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R20102[dtype-2006])(Current);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R20102[dtype-2006])(Current);
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R20103[dtype-2006])(Current, ti4_1);
		loc3 = *(EIF_REFERENCE *)(RTCW(loc2));
		loc6 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R20083[dtype-2006])(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc5 > loc1)) break;
			tu2_1 = F1284_4480(RTCW(loc3), (EIF_INTEGER_32) (loc5 * ((EIF_INTEGER_32) 2L)));
			loc7 = (EIF_NATURAL_32) tu2_1;
			loc5++;
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc7 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 55296L)) || (EIF_BOOLEAN) (loc7 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 57344L)))) {
				tb1 = '\01';
				tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '\012';
				if (!(EIF_BOOLEAN)(loc7 != tu4_1)) {
					tb1 = (EIF_BOOLEAN) !loc6;
				}
				if (tb1) {
					loc4++;
					if ((EIF_BOOLEAN)(loc4 == arg1)) {
						Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
						loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
					}
				} else {
				}
			} else {
				if ((EIF_BOOLEAN) (loc5 <= loc1)) {
					loc5++;
					loc4++;
					if ((EIF_BOOLEAN)(loc4 == arg1)) {
						Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 2L));
						loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
					}
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_TEXT_COMPONENT_IMP}.insert_text */
void F2006_25195 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc2 = F2006_25205(Current);
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16471[dtype-1809])(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (F2006_25185(Current) > ti4_1)) {
		tr1 = F1558_6569(RTCW(arg1));
		F1565_6938(RTCW(loc1), tr1);
	} else {
		tr1 = F1558_6569(RTCW(arg1));
		ti4_1 = F2006_25185(Current);
		F1565_6956(RTCW(loc1), tr1, ti4_1);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16472[dtype-1809])(Current, loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R20091[dtype-2006])(Current, loc2);
	RTLE;
}

/* {EV_TEXT_COMPONENT_IMP}.append_text */
void F2006_25196 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	loc2 = F2006_25205(Current);
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16471[dtype-1809])(Current);
	F1565_6937(RTCW(loc1), arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16472[dtype-1809])(Current, loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R20091[dtype-2006])(Current, loc2);
	RTLE;
}

/* {EV_TEXT_COMPONENT_IMP}.maximum_character_width */
EIF_INTEGER_32 F2006_25198 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1310, 0x01).id, 1310, _OBJSIZ_6_2_0_3_0_7_0_0_);
	F1311_15448(RTCW(loc1));
	tr1 = RTLNS(eif_new_type(501, 0x01).id, 501, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = F502_14137(RTCW(tr1));
	F1306_15264(RTCW(loc1), tr1);
	tr1 = RTMS_EX_H("W",1,87);
	loc2 = F1306_15225(RTCW(loc1), tr1);
	F1306_15270(RTCW(loc1));
	F1311_15450(RTCW(loc1));
	ti4_1 = F1405_17173(RTCW(loc2));
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

/* {EV_TEXT_COMPONENT_IMP}.select_region */
void F2006_25200 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	F2006_25201(Current, arg1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)));
}

/* {EV_TEXT_COMPONENT_IMP}.set_selection */
void F2006_25201 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = F2006_25191(Current, arg1);
	loc2 = F2006_25191(Current, arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R20092[Dtype(Current)-2006])(Current, loc1, loc2);
	RTLE;
}

/* {EV_TEXT_COMPONENT_IMP}.wel_text_item */
EIF_POINTER F2006_25204 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_POINTER) *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
}

/* {EV_TEXT_COMPONENT_IMP}.internal_wel_caret_position */
EIF_INTEGER_32 F2006_25205 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc6);
	RTLIU(3);
	
	RTGC;
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R20089[dtype-2006])(Current);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 176L), (EIF_INTEGER_32 *) &(loc2), (EIF_INTEGER_32 *) &(loc3));
	Result = (EIF_INTEGER_32) loc3;
	if ((EIF_BOOLEAN)(loc2 != loc3)) {
		loc1 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1906_22334(RTCW(loc1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_0_0_0_);
		loc5 = EIF_TEST (inline_F67_9732(tp1));
		if (loc5) {
			loc6 = Current;
			loc6 = RTRV(eif_new_type(1948, 0x01),loc6);
			if (EIF_TEST(loc6)) {
				tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
				{
					/* INLINED CODE (ANY.default_pointer) */
					tp2 = (EIF_POINTER)  0;
					/* END INLINED CODE */
				}
				tp3 = tp2;
				tp4 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_0_0_0_);
				Result = inline_F67_9747(tp1, ((EIF_INTEGER_32) 215L), tp3, tp4);
			} else {
				tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R20089[dtype-2006])(Current);
				{
					/* INLINED CODE (ANY.default_pointer) */
					tp2 = (EIF_POINTER)  0;
					/* END INLINED CODE */
				}
				tp3 = tp2;
				ti4_1 = F1906_22336(RTCW(loc1));
				ti4_2 = F1906_22337(RTCW(loc1));
				tp4 = inline_F470_13514(ti4_1, ti4_2);
				loc4 = inline_F67_9746(tp1, ((EIF_INTEGER_32) 215L), tp3, tp4);
				Result = (EIF_INTEGER_32) LOWORD((loc4));
				RTLE;
				return (EIF_INTEGER_32) Result;
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_TEXT_COMPONENT_IMP}.wel_background_color */
EIF_REFERENCE F2006_25219 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19682[Dtype(Current)-1969]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		tr1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
		F1829_20489(RTCW(tr1), ((EIF_INTEGER_32) 255L), ((EIF_INTEGER_32) 255L), ((EIF_INTEGER_32) 255L));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

/* {EV_TEXT_COMPONENT_IMP}.wel_foreground_color */
EIF_REFERENCE F2006_25220 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19683[Dtype(Current)-1969]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		tr1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
		F1829_20489(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

/* {EV_TEXT_COMPONENT_IMP}.background_color_internal */
EIF_REFERENCE F2006_25221 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19682[Dtype(Current)-1969]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1696_18976(loc1);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		if (F1912_22467(Current)) {
			tr1 = RTLNS(eif_new_type(72, 0x01).id, 72, _OBJSIZ_0_0_0_0_0_0_0_0_);
			Result = F73_9888(RTCW(tr1));
		} else {
			tr1 = RTLNS(eif_new_type(72, 0x01).id, 72, _OBJSIZ_0_0_0_0_0_0_0_0_);
			Result = F73_9887(RTCW(tr1));
		}
	}
	RTLE;
	return Result;
}

/* {EV_TEXT_COMPONENT_IMP}.disable_context_menu */
void F2006_25223 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O20104[Dtype(Current)-2005]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_TEXT_COMPONENT_IMP}.enable_context_menu */
void F2006_25224 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O20104[Dtype(Current)-2005]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_TEXT_COMPONENT_IMP}.tab_action */
void F2006_25225 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tb1 = F1910_22388(RTCV(F1956_23756(Current)));
	if (tb1) {
		if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R20107[Dtype(Current)-2006])(Current)) {
			F1912_22507(Current);
		}
	} else {
		F1970_24102(Current, arg1);
	}
	RTLE;
}

/* {EV_TEXT_COMPONENT_IMP}.is_multiline */
EIF_BOOLEAN F2006_25226 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_TEXT_COMPONENT_IMP}.default_process_message */
void F2006_25227 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 123L))) {
		F2006_25228(Current);
	} else {
		F1970_24087(Current, arg1, arg2, arg3);
	}
	RTLE;
}

/* {EV_TEXT_COMPONENT_IMP}.allow_pick_and_drop */
void F2006_25228 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_47_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		F1912_22507(Current);
	} else {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O16500[dtype-1750]) != NULL)) {
			F1912_22507(Current);
		} else {
			if (*(EIF_BOOLEAN *)(Current + O20104[dtype-2005])) {
				F1912_22507(Current);
			}
		}
	}
	F2006_25224(Current);
	RTLE;
}

void EIF_Minit1989 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
