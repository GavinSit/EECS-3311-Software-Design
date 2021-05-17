/*
 * Code for class EV_CHECKABLE_TREE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1979.h"
#include <windows.h>
#include "eif_misc.h"
#include "commctrl.h"

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
#ifndef INLINE_F67_9743
static void inline_F67_9743 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	PostMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4)
	;
}
#define INLINE_F67_9743
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CHECKABLE_TREE_IMP}.make */
void F1996_24983 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1995_24945(Current);
	ti4_1 = F1995_24968(Current);
	F1912_22522(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 256L)));
	RTLE;
}

/* {EV_CHECKABLE_TREE_IMP}.is_item_checked */
EIF_BOOLEAN F1996_24984 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(1960, 0x00), loc1);
	RTCT0("item_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc2 = F1410_17387(RTCW(loc1));
	loc3 = F1410_17388(RTCW(loc1));
	F1410_17398(RTCW(loc1), ((EIF_INTEGER_32) 8L));
	ti4_1 = F1410_17391(RTCW(loc1));
	ti4_2 = (EIF_INTEGER_32) INDEXTOSTATEIMAGEMASK(((UINT) ((EIF_INTEGER_32) 2L)));
	Result = F1258_14781(Current, ti4_1, ti4_2);
	F1410_17398(RTCW(loc1), loc2);
	F1410_17408(RTCW(loc1), loc3);
	RTLE;
	return Result;
}

/* {EV_CHECKABLE_TREE_IMP}.on_nm_click */
void F1996_24987 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc4);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	loc3 = (EIF_INTEGER_32) GetMessagePos();
	loc1 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1906_22334(RTCW(loc1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_11_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_12_));
	loc2 = RTLNS(eif_new_type(1357, 0x01).id, 1357, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1358_16212(RTCW(loc2), loc1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_64_26_6_13_0_0_);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_0_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4369L), tp2, tp3);
	ti4_1 = F1358_16214(RTCW(loc2));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 64L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
		tp1 = F1358_16215(RTCW(loc2));
		loc4 = F1003_3930(RTCW(tr1), tp1);
		loc4 = loc4;
		loc4 = RTRV(eif_new_type(1960, 0x00), loc4);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_64_26_6_13_0_0_);
		ti4_1 = RTOUCB(EIF_INTEGER_32,414,F1996_24992, (Current));
		tp2 = F1358_16215(RTCW(loc2));
		tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
		inline_F67_9743(tp1, ti4_1, tp2, tp3);
	}
	RTLE;
}

/* {EV_CHECKABLE_TREE_IMP}.on_left_button_down */
void F1996_24988 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_11_) = (EIF_INTEGER_32) arg2;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_12_) = (EIF_INTEGER_32) arg3;
	RTLE;
}

/* {EV_CHECKABLE_TREE_IMP}.process_message */
EIF_POINTER F1996_24991 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg2 == RTOUCB(EIF_INTEGER_32,414,F1996_24992, (Current)))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
		loc1 = F1003_3930(RTCW(tr1), arg3);
		loc1 = loc1;
		loc1 = RTRV(eif_new_type(1960, 0x00), loc1);
		RTCT0("tree_node /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = F1696_18976(RTCW(loc1));
		if (F1996_24984(Current, tr1)) {
			ti4_1 = F1410_17387(RTCW(loc1));
			ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 8L));
			F1410_17398(RTCW(loc1), ti4_1);
			F1410_17408(RTCW(loc1), ((EIF_INTEGER_32) 61440L));
			ti4_1 = (EIF_INTEGER_32) INDEXTOSTATEIMAGEMASK(((UINT) ((EIF_INTEGER_32) 1L)));
			F1410_17402(RTCW(loc1), ti4_1);
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1687,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr2 = RTLNTS(typres0.id, 2, 0);
				}
				tr3 = F1696_18976(RTCW(loc1));
				((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
				RTAR(tr2,tr3);
				F977_14409(RTCW(tr1), tr2);
			}
		} else {
			ti4_1 = F1410_17387(RTCW(loc1));
			ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 8L));
			F1410_17398(RTCW(loc1), ti4_1);
			F1410_17408(RTCW(loc1), ((EIF_INTEGER_32) 61440L));
			ti4_1 = (EIF_INTEGER_32) INDEXTOSTATEIMAGEMASK(((UINT) ((EIF_INTEGER_32) 2L)));
			F1410_17402(RTCW(loc1), ti4_1);
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1687,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr2 = RTLNTS(typres0.id, 2, 0);
				}
				tr3 = F1696_18976(RTCW(loc1));
				((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
				RTAR(tr2,tr3);
				F977_14409(RTCW(tr1), tr2);
			}
		}
	} else {
		RTLE;
		return (EIF_POINTER) F1995_24962(Current, arg1, arg2, arg3, arg4);
	}
	RTLE;
	return (EIF_POINTER) 0;
}

/* {EV_CHECKABLE_TREE_IMP}.um_checkable_tree_state_change */
static EIF_INTEGER_32 F1996_24992_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 414)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1024L) + ((EIF_INTEGER_32) 1L));
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1996_24992 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,414,F1996_24992_body,(Current));
}

void EIF_Minit1979 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
