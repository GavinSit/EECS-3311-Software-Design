/*
 * Code for class EV_TOOL_BAR_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1973.h"
#include <windows.h>
#include "eif_helpers.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9747
static EIF_INTEGER_32 inline_F67_9747 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (EIF_INTEGER_32) (SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4))
	;
}
#define INLINE_F67_9747
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TOOL_BAR_IMP}.on_erase_background */
void F1990_24681 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,arg1);
	RTLR(4,arg2);
	RTLIU(5);
	
	RTGC;
	loc1 = F1990_24738(Current);
	RTCT0("bk_brush /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc2 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R10490[Dtype(RTCW(loc2))-409])(loc2, Current, arg1, arg2, loc1);
	F519_14213(RTCW(loc1));
	F1912_22507(Current);
	tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 1L)));
	F214_11244(Current, tp1);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.make */
void F1990_24682 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,loc1);
	RTLIU(7);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1962,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 2L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_60_) = (EIF_REFERENCE) tr1;
	F1721_19435(Current);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,911,0xFF01,1967,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F912_3515(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_59_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(24, 1).id);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_36_) = (EIF_REFERENCE) tr1;
	tr1 = F1721_19440(Current);
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
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1667,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1973_1859_2, (EIF_POINTER) _A1973_1859_2, (EIF_POINTER)(F1990_24743),tr2, 1, 1);
	}
	F969_4172(RTCW(tr1), tr5);
	tr1 = F1721_19440(Current);
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
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1667,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1973_1858_2, (EIF_POINTER) _A1973_1858_2, (EIF_POINTER)(F1990_24742),tr2, 1, 1);
	}
	F969_4172(RTCW(tr1), tr5);
	tr1 = F1721_19440(Current);
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
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1667,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1973_1861_2, (EIF_POINTER) _A1973_1861_2, (EIF_POINTER)(F1990_24745),tr2, 1, 1);
	}
	F969_4172(RTCW(tr1), tr5);
	tr1 = F1721_19441(Current);
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
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1667,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1973_1860_2, (EIF_POINTER) _A1973_1860_2, (EIF_POINTER)(F1990_24744),tr2, 1, 1);
	}
	F969_4172(RTCW(tr1), tr5);
	loc1 = RTLNS(eif_new_type(1922, 0x01).id, 1922, _OBJSIZ_8_2_0_2_0_2_0_0_);
	tr1 = RTOUCR(249,F1970_24036, (Current));
	F1923_22870(RTCW(loc1), tr1, Current);
	F1928_22951(Current, loc1, ((EIF_INTEGER_32) 0L));
	ti4_1 = F1912_22496(Current);
	ti4_2 = eif_bit_not(((EIF_INTEGER_32) 32768L));
	ti4_1 = eif_bit_and(ti4_1,ti4_2);
	F1912_22522(Current, ti4_1);
	F1970_24029(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_61_34_6_11_0_0_);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 8L),((EIF_INTEGER_32) 1L));
	tp3 = (EIF_POINTER) (LPARAM)((ti4_1));
	loc2 = inline_F67_9747(tp1, ((EIF_INTEGER_32) 1108L), tp2, tp3);
	F1989_24674(Current);
	F1989_24672(Current);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.bar */
EIF_REFERENCE F1990_24683 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	
	
	Result = *(EIF_REFERENCE *)(Current + _REFACS_49_);
	return RTRV(eif_new_type(1922, 0x00), Result);
}

/* {EV_TOOL_BAR_IMP}.ev_children */
EIF_REFERENCE F1990_24684 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_60_);
}


/* {EV_TOOL_BAR_IMP}.parent_imp */
EIF_REFERENCE F1990_24685 (EIF_REFERENCE Current)
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
	loc1 = F1990_24683(Current);
	RTCT0("l_bar /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
	if ((EIF_BOOLEAN)(tr1 == RTOUCR(249,F1970_24036, (Current)))) {
		RTLE;
		return (EIF_REFERENCE) NULL;
	} else {
		Result = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
		RTLE;
		return RTRV(eif_new_type(1970, 0x00), Result);
	}/* NOTREACHED */
	
}

/* {EV_TOOL_BAR_IMP}.x_position */
EIF_INTEGER_32 F1990_24686 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc4);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTGC;
	if (F1990_24688(Current)) {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_49_) != NULL)) {
			loc3 = F1990_24683(Current);
			RTCT0("l_bar /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			loc1 = F1912_22491(RTCW(loc3));
			loc2 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
			ti4_1 = F1408_17327(RTCW(loc1));
			ti4_2 = F1408_17329(RTCW(loc1));
			F1906_22334(RTCW(loc2), ti4_1, ti4_2);
			loc4 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_3_);
			RTCT0("l_parent /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			F1906_22345(RTCW(loc2), loc4);
			ti4_1 = F1906_22336(RTCW(loc2));
			RTLE;
			return (EIF_INTEGER_32) ti4_1;
		} else {
			RTLE;
			return (EIF_INTEGER_32) F1912_22484(Current);
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_36_);
		Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_0_);
	}
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_IMP}.y_position */
EIF_INTEGER_32 F1990_24687 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc4);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTGC;
	if (F1990_24688(Current)) {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_49_) != NULL)) {
			loc3 = F1990_24683(Current);
			RTCT0("l_bar /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			loc1 = F1912_22491(RTCW(loc3));
			loc2 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
			ti4_1 = F1408_17327(RTCW(loc1));
			ti4_2 = F1408_17329(RTCW(loc1));
			F1906_22334(RTCW(loc2), ti4_1, ti4_2);
			loc4 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_3_);
			RTCT0("l_parent /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			F1906_22345(RTCW(loc2), loc4);
			ti4_1 = F1906_22337(RTCW(loc2));
			RTLE;
			return (EIF_INTEGER_32) ti4_1;
		} else {
			RTLE;
			return (EIF_INTEGER_32) F1912_22485(Current);
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_36_);
		Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_0_);
	}
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_IMP}.is_show_requested */
EIF_BOOLEAN F1990_24688 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F1990_24683(Current);
	RTCT0("l_bar /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	ti4_1 = F1912_22496(RTCW(loc1));
	Result = F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 268435456L));
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_IMP}.separator_width */
EIF_INTEGER_32 F1990_24690 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
}

/* {EV_TOOL_BAR_IMP}.show */
void F1990_24693 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	loc2 = F1990_24683(Current);
	RTCT0("l_bar /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_8_2_0_2_0_0_);
	F1970_24159(Current, tp1, ((EIF_INTEGER_32) 5L));
	loc1 = F1990_24685(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1725_19528(RTCW(loc1), ((EIF_INTEGER_32) 3L), Current, (EIF_BOOLEAN) 0);
	}
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.hide */
void F1990_24694 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	loc2 = F1990_24683(Current);
	RTCT0("l_bar /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_8_2_0_2_0_0_);
	F1970_24159(Current, tp1, ((EIF_INTEGER_32) 0L));
	loc1 = F1990_24685(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1725_19528(RTCW(loc1), ((EIF_INTEGER_32) 3L), Current, (EIF_BOOLEAN) 0);
	}
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.destroy */
void F1990_24697 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLIU(7);
	
	RTGC;
	tr1 = F1990_24685(Current);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tr1 = F1696_18976(loc2);
		tr2 = F1696_18976(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15472[Dtype(RTCW(tr1))-1634])(tr1, tr2);
	}
	loc1 = F1990_24683(Current);
	RTCT0("l_bar /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1913_22726(RTCW(loc1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_57_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		F1852_20977(Current, loc3);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_58_);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		F1852_20979(Current, loc4);
	}
	F1696_18991(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.enable_sensitive */
void F1990_24698 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1990_24700(Current, (EIF_BOOLEAN) 0);
	F1970_24060(Current);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.disable_sensitive */
void F1990_24699 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1990_24700(Current, (EIF_BOOLEAN) 1);
	F1970_24059(Current);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.set_insensitive */
void F1990_24700 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc3);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	tb1 = F736_2537(RTCW(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
		loc3 = F951_4084(RTCW(loc1));
		F951_4104(RTCW(loc1));
		for (;;) {
			tb1 = F882_3332(RTCW(loc1));
			if (tb1) break;
			loc2 = F951_4078(RTCW(loc1));
			if (arg1) {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R19623[Dtype(RTCW(loc2))-1963])(loc2);
			} else {
				tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R19625[Dtype(RTCW(loc2))-1963])(loc2);
				if ((EIF_BOOLEAN) !tb2) {
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R19624[Dtype(RTCW(loc2))-1963])(loc2);
				}
			}
			F951_4106(RTCW(loc1));
		}
		F951_4109(RTCW(loc1), loc3);
	}
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.insert_item */
void F1990_24701 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc3);
	RTLR(1,arg1);
	RTLR(2,loc5);
	RTLR(3,loc6);
	RTLR(4,loc1);
	RTLR(5,loc4);
	RTLR(6,loc2);
	RTLR(7,Current);
	RTLR(8,tr1);
	RTLR(9,tr2);
	RTLR(10,tr3);
	RTLIU(11);
	
	RTGC;
	loc3 = arg1;
	loc3 = RTRV(eif_new_type(1967, 0x00), loc3);
	loc5 = arg1;
	loc5 = RTRV(eif_new_type(1966, 0x00), loc5);
	loc6 = arg1;
	loc6 = RTRV(eif_new_type(1965, 0x00), loc6);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != NULL) || (EIF_BOOLEAN)(loc5 != NULL))) {
		loc1 = RTLNS(eif_new_type(1353, 0x01).id, 1353, _OBJSIZ_0_1_0_0_0_1_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O10968[Dtype(arg1)-404]);
		F1354_16112(RTCW(loc1), ((EIF_INTEGER_32) -1L), ti4_1);
	}
	if ((EIF_BOOLEAN)(loc6 != NULL)) {
		loc1 = RTLNS(eif_new_type(1353, 0x01).id, 1353, _OBJSIZ_0_1_0_0_0_1_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O10968[Dtype(arg1)-404]);
		F1354_16110(RTCW(loc1), ((EIF_INTEGER_32) -1L), ti4_1);
	}
	loc4 = arg1;
	loc4 = RTRV(eif_new_type(1963, 0x00), loc4);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		loc1 = RTLNS(eif_new_type(1353, 0x01).id, 1353, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1354_16115(RTCW(loc1));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O10968[Dtype(arg1)-404]);
		F1354_16123(RTCW(loc1), ti4_1);
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 == NULL) && (EIF_BOOLEAN)(loc5 == NULL)) && (EIF_BOOLEAN)(loc6 == NULL)) && (EIF_BOOLEAN)(loc4 == NULL))) {
		loc1 = RTLNS(eif_new_type(1353, 0x01).id, 1353, _OBJSIZ_0_1_0_0_0_1_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O10968[Dtype(arg1)-404]);
		F1354_16109(RTCW(loc1), ((EIF_INTEGER_32) -1L), ti4_1);
	}
	RTCT0("but /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R19620[Dtype(RTCW(arg1))-1963])(arg1);
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R19627[Dtype(RTCW(arg1))-1963])(arg1);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O19621[Dtype(arg1)-1962]);
		F1354_16122(RTCW(loc1), ti4_1);
	} else {
		if ((EIF_BOOLEAN)(loc4 == NULL)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R19627[Dtype(RTCW(arg1))-1963])(arg1);
			F1354_16122(RTCW(loc1), ((EIF_INTEGER_32) -1L));
		}
	}
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc5 != NULL)) {
		tb2 = *(EIF_BOOLEAN *)(RTCW(loc5)+ _CHROFF_34_14_);
		tb1 = tb2;
	}
	if (tb1) {
		ti4_1 = eif_bit_or(((EIF_INTEGER_32) 1L),((EIF_INTEGER_32) 4L));
		F1354_16124(RTCW(loc1), ti4_1);
	}
	if ((EIF_BOOLEAN)(loc4 == NULL)) {
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19619[Dtype(RTCW(arg1))-1963])(arg1);
		tb1 = F737_2537(RTCW(loc2));
		if ((EIF_BOOLEAN) !tb1) {
			if ((EIF_BOOLEAN)(F1990_24727(Current) == ((EIF_INTEGER_32) 1L))) {
				F1990_24725(Current);
			}
			{
				static EIF_TYPE_INDEX typarr0[] = {1193,0xFF01,1564,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNSP2(typres0.id,EO_REF,((EIF_INTEGER_32) 1L),sizeof(EIF_REFERENCE), EIF_FALSE);
				RT_SPECIAL_COUNT(tr2) = 1L;
				memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
			}
			*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE) loc2;
			RTAR(tr2,loc2);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F1194_3091)(tr2);
			F1928_22987(Current, tr1);
			F1354_16127(RTCW(loc1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_61_34_6_8_));
		} else {
			if (F1990_24726(Current)) {
				{
					static EIF_TYPE_INDEX typarr0[] = {1193,0xFF01,1560,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr2 = RTLNSP2(typres0.id,EO_REF,((EIF_INTEGER_32) 1L),sizeof(EIF_REFERENCE), EIF_FALSE);
					RT_SPECIAL_COUNT(tr2) = 1L;
					memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
				}
				tr3 = RTMS_EX_H("",0,0);
				*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE) tr3;
				RTAR(tr2,tr3);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F1194_3091)(tr2);
				F1928_22987(Current, tr1);
				F1354_16127(RTCW(loc1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_61_34_6_8_));
			}
			ti4_1 = F1354_16119(RTCW(loc1));
			ti4_2 = eif_bit_not(((EIF_INTEGER_32) 64L));
			ti4_1 = eif_bit_and(ti4_1,ti4_2);
			F1354_16125(RTCW(loc1), ti4_1);
		}
	}
	F1928_22984(Current, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)), loc1);
	F1928_22953(Current);
	tb1 = '\01';
	if (!(EIF_BOOLEAN) !F1912_22467(Current)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R19622[Dtype(RTCW(arg1))-1963])(arg1);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O10968[Dtype(arg1)-404]);
		F1928_22957(Current, ti4_1);
	}
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_61_26_)) {
		F1725_19528(Current, ((EIF_INTEGER_32) 3L), Current, (EIF_BOOLEAN) 0);
	}
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.remove_item */
void F1990_24702 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	loc1 = F852_3258(RTCW(tr1), arg1, ((EIF_INTEGER_32) 1L));
	ti4_1 = F1990_24705(Current, arg1);
	F1928_22988(Current, ti4_1);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_61_26_)) {
		F1725_19528(Current, ((EIF_INTEGER_32) 3L), Current, (EIF_BOOLEAN) 0);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R19626[Dtype(RTCW(arg1))-1963])(arg1);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.internal_get_index */
EIF_INTEGER_32 F1990_24705 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_61_34_6_11_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O10968[Dtype(arg1)-404]);
	tp2 = (EIF_POINTER) (WPARAM)((ti4_1));
	tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
	Result = inline_F67_9747(tp1, ((EIF_INTEGER_32) 1049L), tp2, tp3);
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_IMP}.compute_minimum_width */
void F1990_24706 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (RTOUCB(EIF_INTEGER_32,269,F500_14112, (Current)) >= ((EIF_INTEGER_32) 262215L))) {
		ti4_1 = F1929_23016(Current);
		F1724_19511(Current, ti4_1, arg1);
	} else {
		loc1 = F1990_24728(Current);
		ti4_1 = F1717_19424(Current);
		ti4_2 = F1929_23013(Current);
		ti4_3 = F1990_24690(Current);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc1) * ti4_2) + (EIF_INTEGER_32) (loc1 * ti4_3));
		F1724_19511(Current, loc1, arg1);
	}
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.compute_minimum_height */
void F1990_24707 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) (RTOUCB(EIF_INTEGER_32,269,F500_14112, (Current)) >= ((EIF_INTEGER_32) 262215L))) {
		ti4_1 = F1929_23017(Current);
		F1724_19512(Current, ti4_1, arg1);
	} else {
		ti4_1 = F1929_23014(Current);
		F1724_19512(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 4L)), arg1);
	}
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.compute_minimum_size */
void F1990_24708 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1990_24707(Current, arg1);
	F1990_24706(Current, arg1);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.internal_reset_button */
void F1990_24709 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_61_26_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tb1 = '\0';
	if (F1912_22468(Current)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_27_);
		tb1 = (EIF_BOOLEAN)(tr1 == NULL);
	}
	if (tb1) {
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		F1912_22534(Current);
	}
	loc1 = F1990_24705(Current, arg1);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	F1990_24702(Current, arg1);
	F1990_24701(Current, arg1, loc1);
	if (loc2) {
		F1912_22535(Current);
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_61_26_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	F1725_19528(Current, ((EIF_INTEGER_32) 3L), Current, (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.is_dockable_source */
EIF_BOOLEAN F1990_24711 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_61_8_);
	loc1 = F1990_24712(Current, arg1, arg2);
	loc1 = RTRV(eif_new_type(1964, 0x00), loc1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = *(EIF_BOOLEAN *)(RTCW(loc1) + O16349[Dtype(loc1)-1725]);
		tb1 = tb2;
	}
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_IMP}.find_item_at_position */
EIF_REFERENCE F1990_24712 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	loc1 = F1929_23015(Current, arg1, arg2);
	tb1 = '\0';
	if ((EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
		ti4_1 = F951_4094(RTCW(tr1));
		tb1 = (EIF_BOOLEAN) (loc1 < ti4_1);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
		Result = F951_4079(RTCW(tr1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_IMP}.internal_propagate_pointer_press */
void F1990_24713 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc5);
	RTLR(7,loc2);
	RTLIU(8);
	
	RTGC;
	loc1 = F1990_24712(Current, arg2, arg3);
	loc1 = RTRV(eif_new_type(1964, 0x00), loc1);
	loc4 = F1970_24088(Current, arg2, arg3);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb4 = *(EIF_BOOLEAN *)(RTCW(loc1) + O16349[Dtype(loc1)-1725]);
		tb3 = tb4;
	}
	if (tb3) {
		tb2 = (EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 1L));
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN) !F1726_19534(Current);
	}
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_61_24_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		ti4_1 = F1906_22336(RTCW(loc4));
		ti4_2 = F1906_22337(RTCW(loc4));
		tr1 = F1696_18976(RTCW(loc1));
		F1727_19577(Current, arg2, arg3, ((EIF_INTEGER_32) 1L), tr8_1, tr8_2, tr8_3, ti4_1, ti4_2, tr1);
	}
	tb1 = '\0';
	tb2 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = (EIF_BOOLEAN) !F1956_23717(Current);
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN) !F1969_23990(Current);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F1696_18976(RTCW(loc1));
			tr1 = F1581_17667(RTCW(tr1));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,8,1475,1508,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 9, 1);
			}
			tr3 = F1696_18976(RTCW(loc1));
			ti4_1 = F1990_24748(Current, tr3);
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = (EIF_INTEGER_32) (arg2 - ti4_1);
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
			((EIF_TYPED_VALUE *)tr2+3)->it_i4 = arg4;
			((EIF_TYPED_VALUE *)tr2+4)->it_r8 = (EIF_REAL_64) 0.0;
			((EIF_TYPED_VALUE *)tr2+5)->it_r8 = (EIF_REAL_64) 0.0;
			((EIF_TYPED_VALUE *)tr2+6)->it_r8 = (EIF_REAL_64) 0.0;
			ti4_1 = F1906_22336(RTCW(loc4));
			((EIF_TYPED_VALUE *)tr2+7)->it_i4 = ti4_1;
			ti4_1 = F1906_22337(RTCW(loc4));
			((EIF_TYPED_VALUE *)tr2+8)->it_i4 = ti4_1;
			F977_14409(RTCW(tr1), tr2);
		}
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_61_24_)) {
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tb4 = *(EIF_BOOLEAN *)(RTCW(loc1) + O16525[Dtype(loc1)-1750]);
			tb3 = tb4;
		}
		if (tb3) {
			tb2 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_61_22_);
		}
		if (tb2) {
			tr1 = F1790_20206(RTCW(loc1));
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb1) {
			ti4_1 = F1906_22336(RTCW(loc4));
			ti4_2 = F1906_22337(RTCW(loc4));
			F1957_23761(RTCW(loc1), arg2, arg3, arg4, ti4_1, ti4_2);
			tu1_1 = *(EIF_NATURAL_8 *)(RTCW(loc1) + O19557[Dtype(loc1)-1955]);
			if ((EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 3U))) {
				F1912_22507(Current);
			}
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_53_);
			loc5 = tr1;
			if (EIF_TEST(loc5)) {
				ti4_1 = F1906_22336(RTCW(loc4));
				ti4_2 = F1906_22337(RTCW(loc4));
				F1957_23761(loc5, arg2, arg3, arg4, ti4_1, ti4_2);
			}
		}
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_61_20_) == *(EIF_BOOLEAN *)(Current+ _CHROFF_61_23_))) {
			ti4_1 = F1906_22336(RTCW(loc4));
			ti4_2 = F1906_22337(RTCW(loc4));
			F1969_23985(Current, arg2, arg3, arg4, ti4_1, ti4_2);
			if ((EIF_BOOLEAN)(*(EIF_NATURAL_8 *)(Current+ _CHROFF_61_31_) == ((EIF_NATURAL_8) 3U))) {
				F1912_22507(Current);
			}
		}
	}
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_61_19_)) {
		tr1 = F1593_17703(RTCV(F1696_18976(Current)));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,8,1475,1508,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0.id, 9, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg2;
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
		((EIF_TYPED_VALUE *)tr2+3)->it_i4 = arg4;
		((EIF_TYPED_VALUE *)tr2+4)->it_r8 = (EIF_REAL_64) 0.0;
		((EIF_TYPED_VALUE *)tr2+5)->it_r8 = (EIF_REAL_64) 0.0;
		((EIF_TYPED_VALUE *)tr2+6)->it_r8 = (EIF_REAL_64) 0.0;
		ti4_1 = F1906_22336(RTCW(loc4));
		((EIF_TYPED_VALUE *)tr2+7)->it_i4 = ti4_1;
		ti4_1 = F1906_22337(RTCW(loc4));
		((EIF_TYPED_VALUE *)tr2+8)->it_i4 = ti4_1;
		F977_14409(RTCW(tr1), tr2);
	}
	loc2 = F1990_24712(Current, arg2, arg3);
	loc2 = RTRV(eif_new_type(1964, 0x00), loc2);
	if ((EIF_BOOLEAN) !loc3) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != NULL) && (EIF_BOOLEAN)(loc1 == loc2))) {
			tr1 = F1696_18976(RTCW(loc2));
			tr1 = F1581_17667(RTCW(tr1));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,8,1475,1508,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 9, 1);
			}
			tr3 = F1696_18976(RTCW(loc2));
			ti4_1 = F1990_24748(Current, tr3);
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = (EIF_INTEGER_32) (arg2 - ti4_1);
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
			((EIF_TYPED_VALUE *)tr2+3)->it_i4 = arg4;
			((EIF_TYPED_VALUE *)tr2+4)->it_r8 = (EIF_REAL_64) 0.0;
			((EIF_TYPED_VALUE *)tr2+5)->it_r8 = (EIF_REAL_64) 0.0;
			((EIF_TYPED_VALUE *)tr2+6)->it_r8 = (EIF_REAL_64) 0.0;
			ti4_1 = F1906_22336(RTCW(loc4));
			((EIF_TYPED_VALUE *)tr2+7)->it_i4 = ti4_1;
			ti4_1 = F1906_22337(RTCW(loc4));
			((EIF_TYPED_VALUE *)tr2+8)->it_i4 = ti4_1;
			F977_14409(RTCW(tr1), tr2);
		}
	}
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.internal_propagate_pointer_double_press */
void F1990_24714 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTGC;
	loc1 = F1990_24712(Current, arg2, arg3);
	loc1 = RTRV(eif_new_type(1964, 0x00), loc1);
	loc2 = F1970_24088(Current, arg2, arg3);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = F1696_18976(RTCW(loc1));
		tr1 = F1581_17668(RTCW(tr1));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,8,1475,1508,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0.id, 9, 1);
		}
		tr3 = F1696_18976(RTCW(loc1));
		ti4_1 = F1990_24748(Current, tr3);
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = (EIF_INTEGER_32) (arg2 - ti4_1);
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
		((EIF_TYPED_VALUE *)tr2+3)->it_i4 = arg4;
		((EIF_TYPED_VALUE *)tr2+4)->it_r8 = (EIF_REAL_64) 0.0;
		((EIF_TYPED_VALUE *)tr2+5)->it_r8 = (EIF_REAL_64) 0.0;
		((EIF_TYPED_VALUE *)tr2+6)->it_r8 = (EIF_REAL_64) 0.0;
		ti4_1 = F1906_22336(RTCW(loc2));
		((EIF_TYPED_VALUE *)tr2+7)->it_i4 = ti4_1;
		ti4_1 = F1906_22337(RTCW(loc2));
		((EIF_TYPED_VALUE *)tr2+8)->it_i4 = ti4_1;
		F977_14409(RTCW(tr1), tr2);
	}
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.button_associated_with_id */
EIF_REFERENCE F1990_24715 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLIU(3);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	F951_4104(RTCW(loc2));
	for (;;) {
		tb1 = '\01';
		if (!loc1) {
			tb2 = F882_3332(RTCW(loc2));
			tb1 = tb2;
		}
		if (tb1) break;
		loc3 = F951_4078(RTCW(loc2));
		loc3 = RTRV(eif_new_type(1964, 0x00), loc3);
		loc1 = '\0';
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc3) + O10968[Dtype(loc3)-404]);
			loc1 = (EIF_BOOLEAN)(ti4_1 == arg1);
		}
		F951_4106(RTCW(loc2));
	}
	RTCT0("button_with_command_id_exists", EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) loc3;
}

/* {EV_TOOL_BAR_IMP}.on_button_clicked */
void F1990_24716 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTGC;
	loc1 = F1990_24715(Current, arg1);
	loc2 = loc1;
	loc2 = RTRV(eif_new_type(1966, 0x00), loc2);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tb1 = F1928_22977(Current, arg1);
		F1967_23978(RTCW(loc2), tb1);
	}
	loc3 = loc1;
	loc3 = RTRV(eif_new_type(1967, 0x00), loc3);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		tb2 = *(EIF_BOOLEAN *)(RTCW(loc3)+ _CHROFF_35_13_);
		tb1 = tb2;
	}
	if (tb1) {
		F1968_23983(RTCW(loc3));
		tr1 = F1735_19662(RTCW(loc3));
		tr2 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_18_);
		if ((EIF_BOOLEAN)(tr1 == tr2)) {
			F1968_23981(RTCW(loc3));
		}
	}
	tr1 = F1696_18976(RTCW(loc1));
	tr1 = F1580_17663(RTCW(tr1));
	F977_14409(RTCW(tr1), NULL);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.button_tooltip_text */
EIF_REFERENCE F1990_24717 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	loc1 = F1990_24715(Current, arg1);
	tr1 = F516_14185(RTCW(loc1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {EV_TOOL_BAR_IMP}.setup_image_list */
void F1990_24720 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = F1852_20976(Current, arg1, arg2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_57_) = (EIF_REFERENCE) tr1;
	tr1 = F1852_20978(Current, arg1, arg2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_58_) = (EIF_REFERENCE) tr1;
	F1929_23021(Current, *(EIF_REFERENCE *)(Current + _REFACS_57_));
	F1929_23023(Current, *(EIF_REFERENCE *)(Current + _REFACS_58_));
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.enable_false_image_list */
void F1990_24722 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_61_27_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_TOOL_BAR_IMP}.disable_false_image_list */
void F1990_24723 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_61_27_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_TOOL_BAR_IMP}.remove_image_list */
void F1990_24724 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_REFERENCE *)(Current + _REFACS_57_) = (EIF_REFERENCE) NULL;
	*(EIF_REFERENCE *)(Current + _REFACS_58_) = (EIF_REFERENCE) NULL;
	F1929_23021(Current, NULL);
	F1929_23023(Current, NULL);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.update_buttons_with_no_text */
void F1990_24725 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	loc1 = F951_4084(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	F951_4104(RTCW(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
		tb1 = F852_3270(RTCW(tr1));
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
		tr1 = F951_4078(RTCW(tr1));
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19619[Dtype(RTCW(tr1))-1963])(tr1);
		tb2 = F737_2537(RTCW(tr1));
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
			loc2 = F951_4078(RTCW(tr1));
			loc2 = RTRV(eif_new_type(1963, 0x00), loc2);
			if ((EIF_BOOLEAN)(loc2 == NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
				tr1 = F951_4078(RTCW(tr1));
				F1990_24709(Current, tr1);
			}
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
		F951_4106(RTCW(tr1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	F951_4109(RTCW(tr1), loc1);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.a_child_has_text */
EIF_BOOLEAN F1990_24726 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	loc1 = F951_4084(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	F951_4104(RTCW(tr1));
	for (;;) {
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
		tb2 = F852_3270(RTCW(tr1));
		if (!tb2) {
			tb1 = Result;
		}
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
		tr1 = F951_4078(RTCW(tr1));
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19619[Dtype(RTCW(tr1))-1963])(tr1);
		Result = F737_2537(RTCW(tr1));
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
		F951_4106(RTCW(tr1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	F951_4109(RTCW(tr1), loc1);
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_IMP}.children_with_text */
EIF_INTEGER_32 F1990_24727 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	loc1 = F951_4084(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	F951_4104(RTCW(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
		tb1 = F852_3270(RTCW(tr1));
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
		tr1 = F951_4078(RTCW(tr1));
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19619[Dtype(RTCW(tr1))-1963])(tr1);
		tb2 = F737_2537(RTCW(tr1));
		if ((EIF_BOOLEAN) !tb2) {
			Result++;
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
		F951_4106(RTCW(tr1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	F951_4109(RTCW(tr1), loc1);
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_IMP}.separator_count */
EIF_INTEGER_32 F1990_24728 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_61_34_6_3_);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	F951_4104(RTCW(loc1));
	for (;;) {
		tb1 = F882_3332(RTCW(loc1));
		if (tb1) break;
		loc3 = F951_4078(RTCW(loc1));
		loc3 = RTRV(eif_new_type(1963, 0x00), loc3);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			Result++;
		}
		F951_4106(RTCW(loc1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	F951_4108(RTCW(tr1), loc2);
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_IMP}.wel_move_and_resize */
void F1990_24729 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F1990_24683(Current);
	RTCT0("l_bar /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	ti4_1 = F1970_24043(Current);
	F1922_22866(RTCW(loc1), arg1, arg2, arg3, ti4_1, arg5);
	F1928_22952(Current);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.wel_resize */
void F1990_24730 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F1990_24683(Current);
	RTCT0("l_bar /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	ti4_1 = F1970_24043(Current);
	F1912_22543(RTCW(loc1), arg1, ti4_1);
	F1928_22952(Current);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.wel_move */
void F1990_24731 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F1990_24683(Current);
	RTCT0("l_bar /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1912_22542(RTCW(loc1), arg1, arg2);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.wel_set_parent */
void F1990_24732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	loc1 = F1990_24683(Current);
	RTCT0("l_bar /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1912_22525(RTCW(loc1), arg1);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.on_mouse_move */
void F1990_24733 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc3);
	RTLIU(7);
	
	RTGC;
	loc1 = F1990_24712(Current, arg2, arg3);
	loc1 = RTRV(eif_new_type(1964, 0x00), loc1);
	loc2 = F1970_24088(Current, arg2, arg3);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tb1) {
		tr1 = F177_10616(RTCW(loc1));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,7,1475,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0.id, 8, 1);
		}
		tr3 = F1696_18976(RTCW(loc1));
		ti4_1 = F1990_24748(Current, tr3);
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = (EIF_INTEGER_32) (arg2 - ti4_1);
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
		((EIF_TYPED_VALUE *)tr2+3)->it_r8 = (EIF_REAL_64) 0.0;
		((EIF_TYPED_VALUE *)tr2+4)->it_r8 = (EIF_REAL_64) 0.0;
		((EIF_TYPED_VALUE *)tr2+5)->it_r8 = (EIF_REAL_64) 0.0;
		ti4_1 = F1906_22336(RTCW(loc2));
		((EIF_TYPED_VALUE *)tr2+6)->it_i4 = ti4_1;
		ti4_1 = F1906_22337(RTCW(loc2));
		((EIF_TYPED_VALUE *)tr2+7)->it_i4 = ti4_1;
		F977_14409(RTCW(tr1), tr2);
	}
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_53_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_42_);
		tb1 = (EIF_BOOLEAN)(tr1 == NULL);
	}
	if (tb1) {
		ti4_1 = F1906_22336(RTCW(loc2));
		ti4_2 = F1906_22337(RTCW(loc2));
		F1956_23722(loc3, arg2, arg3, ti4_1, ti4_2);
	}
	F1970_24092(Current, arg1, arg2, arg3);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.on_key_down */
void F1990_24734 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1970_24103(Current, arg1);
	F1970_24106(Current, arg1, arg2);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.on_left_button_double_click */
void F1990_24735 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F1990_24712(Current, arg2, arg3);
	loc1 = RTRV(eif_new_type(1967, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1912_22507(Current);
	}
	F1969_23994(Current, arg1, arg2, arg3);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.on_tbn_dropdown */
void F1990_24736 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	ti4_1 = F1355_16144(RTCW(arg1));
	loc1 = F1990_24715(Current, ti4_1);
	loc1 = RTRV(eif_new_type(1965, 0x00), loc1);
	RTCT0("dropdown_notify_only_happen_on_dropdown_button", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = F1696_18976(RTCW(loc1));
	tr1 = F1580_17664(RTCW(tr1));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,1475,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0.id, 1, 1);
	}
	F977_14409(RTCW(tr1), tr2);
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.default_style */
static EIF_INTEGER_32 F1990_24737_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 426)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 268435456L),((EIF_INTEGER_32) 1073741824L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 33554432L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 67108864L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 256L));
	Result = eif_bit_or(ti4_1,((EIF_INTEGER_32) 64L));
	if ((EIF_BOOLEAN) (RTOUCB(EIF_INTEGER_32,269,F500_14112, (Current)) >= ((EIF_INTEGER_32) 262214L))) {
		tb1 = F1910_22408(RTCV(F1956_23756(Current)));
		if ((EIF_BOOLEAN) !tb1) {
			ti4_1 = eif_bit_or(Result,((EIF_INTEGER_32) 2048L));
			Result = (EIF_INTEGER_32) ti4_1;
		}
	}
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1990_24737 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,426,F1990_24737_body,(Current));
}

/* {EV_TOOL_BAR_IMP}.background_brush */
EIF_REFERENCE F1990_24738 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	if (F1296_15099(Current)) {
		Result = RTLNS(eif_new_type(1320, 0x01).id, 1320, _OBJSIZ_0_2_0_3_0_1_0_0_);
		tr1 = F1970_24145(Current);
		F1321_15590(RTCW(Result), tr1);
	}
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_IMP}.add_radio_button */
void F1990_24742 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + O15014[Dtype(arg1)-1595]);
	loc1 = RTRV(eif_new_type(1967, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_59_);
		tb1 = F736_2537(RTCW(tr1));
		if ((EIF_BOOLEAN) !tb1) {
			F1968_23982(RTCW(loc1));
		}
		F1735_19664(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_59_));
	}
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.add_button */
void F1990_24743 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + O15014[Dtype(arg1)-1595]);
	loc1 = RTRV(eif_new_type(1962, 0x00), loc1);
	RTCT0("implementation_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R19622[Dtype(RTCW(loc1))-1963])(loc1);
	if ((EIF_BOOLEAN) !tb1) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1) + O10968[Dtype(loc1)-404]);
		F1928_22957(Current, ti4_1);
	}
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.remove_radio_button */
void F1990_24744 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + O15014[Dtype(arg1)-1595]);
	loc1 = RTRV(eif_new_type(1967, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1735_19665(RTCW(loc1));
		F1968_23981(RTCW(loc1));
	}
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.add_toggle_button */
void F1990_24745 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + O15014[Dtype(arg1)-1595]);
	loc1 = RTRV(eif_new_type(1966, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_34_14_);
		if (tb1) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_34_20_6_2_);
			F1928_22954(Current, ti4_1);
		}
	}
	RTLE;
}

/* {EV_TOOL_BAR_IMP}.insertion_position */
EIF_INTEGER_32 F1990_24746 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	tr1 = F1627_18194(RTCV(RTOUCR(276,F321_12809, (Current))));
	loc1 = F1169_14635(RTCW(tr1));
	ti4_1 = F1970_24044(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ti4_1);
	ti4_1 = F1970_24043(Current);
	loc2 = F1929_23015(Current, loc1, (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)));
	tb1 = '\0';
	if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
		ti4_1 = F951_4094(RTCW(tr1));
		tb1 = (EIF_BOOLEAN) (loc2 < ti4_1);
	}
	if (tb1) {
		RTLE;
		return (EIF_INTEGER_32) loc2;
	} else {
		tb1 = '\0';
		if ((EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) -1L))) {
			tb1 = (EIF_BOOLEAN) (loc2 >= (EIF_INTEGER_32) -F1717_19424(Current));
		}
		if (tb1) {
			Result = eif_abs_int32 (loc2);
		} else {
			if ((EIF_BOOLEAN)(loc2 == (EIF_INTEGER_32) ((EIF_INTEGER_32) -F1717_19424(Current) - ((EIF_INTEGER_32) 1L)))) {
				Result = F1717_19424(Current);
				Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_IMP}.block_selection_for_docking */
void F1990_24747 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1912_22507(Current);
}

/* {EV_TOOL_BAR_IMP}.child_x */
EIF_INTEGER_32 F1990_24748 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc2 = RTRV(eif_new_type(1964, 0x00), loc2);
	RTCT0("but /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	ti4_1 = F1990_24705(Current, loc2);
	loc1 = F1928_22979(Current, ti4_1);
	ti4_1 = F1408_17326(RTCW(loc1));
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

/* {EV_TOOL_BAR_IMP}.child_y */
EIF_INTEGER_32 F1990_24749 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc2 = RTRV(eif_new_type(1964, 0x00), loc2);
	RTCT0("but /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	ti4_1 = F1990_24705(Current, loc2);
	loc1 = F1928_22979(Current, ti4_1);
	ti4_1 = F1408_17328(RTCW(loc1));
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

/* {EV_TOOL_BAR_IMP}.child_x_absolute */
EIF_INTEGER_32 F1990_24750 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc2 = RTRV(eif_new_type(1964, 0x00), loc2);
	RTCT0("but /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	ti4_1 = F1990_24705(Current, loc2);
	loc1 = F1928_22979(Current, ti4_1);
	Result = F1970_24044(Current);
	ti4_1 = F1408_17326(RTCW(loc1));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_IMP}.child_y_absolute */
EIF_INTEGER_32 F1990_24751 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc2 = RTRV(eif_new_type(1964, 0x00), loc2);
	RTCT0("but /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	ti4_1 = F1990_24705(Current, loc2);
	loc1 = F1928_22979(Current, ti4_1);
	Result = F1970_24045(Current);
	ti4_1 = F1408_17328(RTCW(loc1));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	RTLE;
	return Result;
}

/* {EV_TOOL_BAR_IMP}.child_width */
EIF_INTEGER_32 F1990_24752 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc2 = RTRV(eif_new_type(1964, 0x00), loc2);
	RTCT0("but /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	ti4_1 = F1990_24705(Current, loc2);
	loc1 = F1928_22979(Current, ti4_1);
	ti4_1 = F1408_17332(RTCW(loc1));
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

/* {EV_TOOL_BAR_IMP}.child_height */
EIF_INTEGER_32 F1990_24753 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc2 = RTRV(eif_new_type(1964, 0x00), loc2);
	RTCT0("but /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	ti4_1 = F1990_24705(Current, loc2);
	loc1 = F1928_22979(Current, ti4_1);
	ti4_1 = F1408_17333(RTCW(loc1));
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

void EIF_Minit1973 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
