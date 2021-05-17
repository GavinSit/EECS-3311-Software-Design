/*
 * Code for class EV_RICH_TEXT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1993.h"
#include <windows.h>
#include "redit.h"
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

/* {EV_RICH_TEXT_IMP}.make */
void F2010_25361 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLIU(7);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,973,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F974_14399(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_51_) = (EIF_REFERENCE) tr1;
	loc1 = RTLNS(eif_new_type(1310, 0x01).id, 1310, _OBJSIZ_6_2_0_3_0_7_0_0_);
	F1311_15448(RTCW(loc1));
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_6_2_0_3_0_0_);
	loc2 = (EIF_INTEGER_32) GetDeviceCaps(((HDC) tp1), ((int) ((EIF_INTEGER_32) 88L)));
	F1311_15449(RTCW(loc1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_88_33_6_31_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 / ((EIF_INTEGER_32) 2L));
	tr1 = RTLNSMART(eif_new_type(24, 1).id);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_37_) = (EIF_REFERENCE) tr1;
	F1873_21414(Current);
	RTAR(Current, Current);
	*(EIF_REFERENCE *)(Current + _REFACS_52_) = (EIF_REFERENCE) Current;
	F2009_25325(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_3_);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1993_2147_2, (EIF_POINTER) _A1993_2147_2, (EIF_POINTER)(F2010_25407),tr2, 1, 1);
	}
	F969_4172(RTCW(tr1), tr5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_4_);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1993_2147_2, (EIF_POINTER) _A1993_2147_2, (EIF_POINTER)(F2010_25407),tr2, 1, 1);
	}
	F969_4172(RTCW(tr1), tr5);
	F1949_23430(Current);
	RTLE;
}

/* {EV_RICH_TEXT_IMP}.initialize_text_widget */
void F2010_25362 (EIF_REFERENCE Current)
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
	F1945_23334(Current, tr1, tr2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) -1L));
	F1912_22548(Current);
	F1750_19724(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_88_33_6_32_0_0_);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 1L)));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 1L)));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1226L), tp2, tp3);
	F1947_23358(Current, ((EIF_INTEGER_32) 2560000L));
	F1949_23424(Current, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (((EIF_INTEGER_32) 64L) + ((EIF_INTEGER_32) 128L)));
	RTLE;
}

/* {EV_RICH_TEXT_IMP}.default_style */
static EIF_INTEGER_32 F2010_25363_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 255)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 268435456L) + ((EIF_INTEGER_32) 1073741824L)) + ((EIF_INTEGER_32) 8388608L)) + ((EIF_INTEGER_32) 2097152L)) + ((EIF_INTEGER_32) 32768L)) + ((EIF_INTEGER_32) 8192L)) + ((EIF_INTEGER_32) 4L)) + ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 4096L)) + ((EIF_INTEGER_32) 65536L)) + ((EIF_INTEGER_32) 256L));
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F2010_25363 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,255,F2010_25363_body,(Current));
}

/* {EV_RICH_TEXT_IMP}.default_ex_style */
EIF_INTEGER_32 F2010_25364 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 512L);
}

/* {EV_RICH_TEXT_IMP}.is_replacing_nl_by_crnl */
EIF_BOOLEAN F2010_25365 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_RICH_TEXT_IMP}.text */
EIF_REFERENCE F2010_25366 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	ti4_1 = F1912_22494(Current);
	tr1 = F1949_23413(Current, ti4_1);
	Result = F944_3743(RTCW(tr1));
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc2 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		tw1 = F1565_6904(RTCW(Result), loc1);
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
		if ((EIF_BOOLEAN)(tw1 == tw2)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
			F1565_6925(RTCW(Result), tw1, loc1);
		}
		loc1++;
	}
	RTLE;
	return Result;
}

/* {EV_RICH_TEXT_IMP}.tab_width */
EIF_INTEGER_32 F2010_25389 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_88_33_6_31_);
}


/* {EV_RICH_TEXT_IMP}.set_text */
void F2010_25394 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1418, 0x01).id, 1418, _OBJSIZ_2_2_0_2_0_1_0_0_);
	tr1 = F2010_25425(Current, arg1);
	F1419_17583(RTCW(loc1), tr1);
	F1413_17540(RTCW(loc1), (EIF_BOOLEAN) 1);
	F2010_25408(Current, loc1);
	F1413_17543(RTCW(loc1));
	RTLE;
}

/* {EV_RICH_TEXT_IMP}.disable_word_wrapping */
void F2010_25404 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F2010_25405(Current, (EIF_BOOLEAN) 0);
}

/* {EV_RICH_TEXT_IMP}.internal_change_word_wrapping */
void F2010_25405 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,tr2);
	RTLR(5,loc5);
	RTLR(6,loc1);
	RTLIU(7);
	
	RTGC;
	F2010_25412(Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		F976_4204(RTCW(tr1));
	}
	loc2 = RTLNS(eif_new_type(1415, 0x01).id, 1415, _OBJSIZ_2_2_0_1_0_1_0_0_);
	F1416_17566(RTCW(loc2));
	F1949_23439(Current, loc2);
	loc3 = F1416_17567(RTCW(loc2));
	F1416_17568(RTCW(loc2));
	loc4 = F2006_25183(Current);
	F1912_22576(Current);
	if (arg1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_81_);
		tr2 = RTMS_EX_H("",0,0);
		ti4_1 = RTOUCB(EIF_INTEGER_32,255,F2010_25363, (Current));
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		tp2 = tp1;
		F1912_22614(Current, tr1, tr2, ti4_1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), tp2);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_81_);
		tr2 = RTMS_EX_H("",0,0);
		ti4_1 = RTOUCB(EIF_INTEGER_32,255,F2010_25363, (Current));
		ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 1048576L));
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		tp2 = tp1;
		F1912_22614(Current, tr1, tr2, ti4_1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), tp2);
	}
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 64L),((EIF_INTEGER_32) 128L));
	F1949_23424(Current, ((EIF_INTEGER_32) 1L), ti4_1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_88_33_6_32_0_0_);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 1L)));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 1L)));
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 1226L), tp2, tp3);
	F1947_23358(Current, ((EIF_INTEGER_32) 2560000L));
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_41_) != NULL)) {
		F1750_19723(Current, *(EIF_REFERENCE *)(Current + _REFACS_41_));
	} else {
		F1750_19724(Current);
	}
	tr1 = F1970_24073(Current);
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		F1725_19528(loc5, ((EIF_INTEGER_32) 3L), Current, (EIF_BOOLEAN) 0);
	}
	tr1 = F1715_19380(Current);
	F2010_25419(Current, tr1);
	F1949_23430(Current);
	loc1 = RTLNS(eif_new_type(1418, 0x01).id, 1418, _OBJSIZ_2_2_0_2_0_1_0_0_);
	F1419_17583(RTCW(loc1), loc3);
	F2010_25410(Current, loc1);
	F1413_17543(RTCW(loc1));
	ti4_1 = F2009_25340(Current);
	ti4_2 = F2009_25340(Current);
	F2006_25200(Current, ti4_1, ti4_2);
	F1947_23351(Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		F976_4206(RTCW(tr1));
	}
	F2006_25189(Current, loc4);
	F2010_25413(Current);
	if (arg1) {
		F1912_22548(Current);
	} else {
		F1912_22547(Current);
	}
	RTLE;
}

/* {EV_RICH_TEXT_IMP}.update_tab_positions */
void F2010_25407 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc6);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
	ti4_1 = F957_4094(RTCW(tr1));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		F2010_25412(Current);
		loc6 = RTLNS(eif_new_type(1310, 0x01).id, 1310, _OBJSIZ_6_2_0_3_0_7_0_0_);
		F1311_15448(RTCW(loc6));
		tp1 = *(EIF_POINTER *)(RTCW(loc6)+ _PTROFF_6_2_0_3_0_0_);
		loc4 = (EIF_INTEGER_32) GetDeviceCaps(((HDC) tp1), ((int) ((EIF_INTEGER_32) 88L)));
		F1311_15449(RTCW(loc6));
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_88_33_6_31_);
		loc5 = (EIF_INTEGER_32) MulDiv(((int) ((EIF_INTEGER_32) 1440L)), ((int) ti4_1), ((int) loc4));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,924,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			loc1 = RTLNS(typres0.id, 924, _OBJSIZ_1_1_0_2_0_0_0_0_);
		}
		F925_3186(RTCW(loc1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 32L));
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 32L))) break;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
			ti4_1 = F957_4094(RTCW(tr1));
			if ((EIF_BOOLEAN) (ti4_1 >= loc2)) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
				ti4_1 = F957_4079(RTCW(tr1), loc2);
				loc3 += (EIF_INTEGER_32) MulDiv(((int) ((EIF_INTEGER_32) 1440L)), ((int) ti4_1), ((int) loc4));
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
				tb1 = F858_3270(RTCW(tr1));
				if ((EIF_BOOLEAN) !tb1) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
					F957_4106(RTCW(tr1));
				}
			} else {
				loc3 += loc5;
			}
			F925_3210(RTCW(loc1), loc3, loc2);
			loc2++;
		}
		ti4_1 = F2009_25340(Current);
		F1949_23416(Current, ((EIF_INTEGER_32) 0L), ti4_1);
		F1949_23420(Current, loc1);
		F2010_25413(Current);
		F1912_22563(Current);
	}
	RTLE;
}

/* {EV_RICH_TEXT_IMP}.text_stream_in */
void F2010_25408 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	F1949_23436(Current, arg1);
	F2010_25407(Current, ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {EV_RICH_TEXT_IMP}.insert_rtf_stream_in */
void F2010_25410 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	F1949_23441(Current, arg1);
	F2010_25407(Current, ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {EV_RICH_TEXT_IMP}.safe_store_caret */
void F2010_25412 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_88_26_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_88_25_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	ti4_1 = F2006_25205(Current);
	ti4_2 = F2009_25340(Current);
	ti4_1 = eif_min_int32 (ti4_1,ti4_2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_88_33_6_27_) = (EIF_INTEGER_32) ti4_1;
	if (F1949_23403(Current)) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_88_26_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		ti4_1 = F1949_23399(Current);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_88_33_6_28_) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = F1949_23400(Current);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_88_33_6_29_) = (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
}

/* {EV_RICH_TEXT_IMP}.safe_restore_caret */
void F2010_25413 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_88_33_6_27_);
	ti4_2 = F2009_25340(Current);
	ti4_1 = eif_min_int32 (ti4_1,ti4_2);
	F1949_23417(Current, ti4_1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_88_26_)) {
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_88_33_6_30_) < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_88_33_6_29_))) {
			F1949_23416(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_88_33_6_28_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_88_33_6_29_));
		} else {
			F1949_23416(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_88_33_6_29_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_88_33_6_28_));
		}
	} else {
		F1949_23417(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_88_33_6_27_));
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_88_25_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {EV_RICH_TEXT_IMP}.set_background_color */
void F2010_25419 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	loc1 = RTRV(eif_new_type(1829, 0x00), loc1);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_85_) = (EIF_REFERENCE) loc1;
	RTCT0("l_background_color_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1949_23427(Current, loc1);
	if (F1912_22468(Current)) {
		F1912_22563(Current);
	}
	RTLE;
}

/* {EV_RICH_TEXT_IMP}.on_en_selchange */
void F2010_25421 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_88_25_)) {
		ti4_1 = F1406_17186(RTCW(arg2));
		ti4_2 = F1406_17187(RTCW(arg2));
		if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_88_26_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			ti4_1 = F2006_25205(Current);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_88_33_6_30_) = (EIF_INTEGER_32) ti4_1;
		}
		if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_88_27_)) {
				*(EIF_BOOLEAN *)(Current+ _CHROFF_88_27_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_7_) != NULL)) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,65534,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr2 = RTLNTS(typres0.id, 2, 0);
					}
					F977_14409(RTCW(tr1), tr2);
				}
			}
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_6_) != NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,1508,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr2 = RTLNTS(typres0.id, 2, 1);
				}
				ti4_1 = F1406_17186(RTCW(arg2));
				ti4_2 = F2009_25340(Current);
				ti4_1 = eif_min_int32 ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),(EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
				((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ti4_1;
				F977_14409(RTCW(tr1), tr2);
			}
		} else {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_88_27_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_7_) != NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,65534,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr2 = RTLNTS(typres0.id, 2, 0);
				}
				F977_14409(RTCW(tr1), tr2);
			}
		}
	}
	RTLE;
}

/* {EV_RICH_TEXT_IMP}.convert_string */
EIF_REFERENCE F2010_25425 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,loc6);
	RTLIU(2);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
	tb1 = '\0';
	if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
		tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(RTCW(arg1))-1560])(arg1, ((EIF_INTEGER_32) 1L));
		tu4_2 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '\012';
		tb1 = (EIF_BOOLEAN)(tu4_1 == tu4_2);
	}
	if (tb1) {
		loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc3)) break;
		tb1 = '\0';
		tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(RTCW(arg1))-1560])(arg1, loc1);
		tu4_2 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '\012';
		if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
			tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(RTCW(arg1))-1560])(arg1, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
			tu4_2 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '\015';
			tb1 = (EIF_BOOLEAN)(tu4_1 != tu4_2);
		}
		if (tb1) {
			loc4++;
		}
		loc1++;
	}
	if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
		loc6 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		tw1 = (EIF_CHARACTER_32) loc5;
		F1564_6848(RTCW(loc6), tw1, (EIF_INTEGER_32) (loc3 + loc4));
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
			tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(RTCW(arg1))-1560])(arg1, ((EIF_INTEGER_32) 1L));
			tu4_2 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '\012';
			if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
				F1565_6925(RTCW(loc6), tw1, loc2);
				loc2++;
			}
			tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(RTCW(arg1))-1560])(arg1, ((EIF_INTEGER_32) 1L));
			F1565_6926(RTCW(loc6), tu4_1, loc2);
		}
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc3)) break;
			tb1 = '\0';
			tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(RTCW(arg1))-1560])(arg1, loc1);
			tu4_2 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '\012';
			if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
				tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(RTCW(arg1))-1560])(arg1, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
				tu4_2 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '\015';
				tb1 = (EIF_BOOLEAN)(tu4_1 != tu4_2);
			}
			if (tb1) {
				loc2++;
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
				F1565_6925(RTCW(loc6), tw1, loc2);
			}
			loc2++;
			tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(RTCW(arg1))-1560])(arg1, loc1);
			F1565_6926(RTCW(loc6), tu4_1, loc2);
			loc1++;
		}
	}
	if ((EIF_BOOLEAN)(loc6 == NULL)) {
		RTLE;
		return (EIF_REFERENCE) arg1;
	} else {
		RTLE;
		return (EIF_REFERENCE) loc6;
	}/* NOTREACHED */
	
}

/* {EV_RICH_TEXT_IMP}.destroy */
void F2010_25429 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1912_22576(Current);
	F1696_18991(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_RICH_TEXT_IMP}.class_name */
static EIF_REFERENCE F2010_25430_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(256)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) RICHEDIT_CLASS;
	F944_3740(RTCW(tr1), tp1);
	Result = F944_3743(RTCW(tr1));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F2010_25430 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(256,F2010_25430_body,(Current));
}

/* {EV_RICH_TEXT_IMP}.on_erase_background */
void F2010_25431 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit1993 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
