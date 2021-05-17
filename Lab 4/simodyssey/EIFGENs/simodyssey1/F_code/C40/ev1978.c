/*
 * Code for class EV_TREE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1978.h"
#include <windows.h>
#include "cctrl.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9746
static EIF_POINTER inline_F67_9746 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (EIF_POINTER) (SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4))
	;
}
#define INLINE_F67_9746
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

/* {EV_TREE_IMP}.make */
void F1995_24945 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1721_19435(Current);
	F1771_20040(Current);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1002,0xFF01,1960,1550,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F1003_3924(RTCW(tr1), ((EIF_INTEGER_32) 1L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O20025[dtype-1994]) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1960,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 1L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O20038[dtype-1994]) = (EIF_REFERENCE) tr1;
	tr1 = RTOUCR(249,F1970_24036, (Current));
	F1931_23058(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	F1970_24029(Current);
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_TREE_IMP}.ev_children */
EIF_REFERENCE F1995_24947 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O20038[Dtype(Current)-1994]);
}


/* {EV_TREE_IMP}.selected_item_imp */
EIF_REFERENCE F1995_24949 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if (F1931_23071(Current)) {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 9L)));
		tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
		loc1 = inline_F67_9746(tp1, ((EIF_INTEGER_32) 4362L), tp2, tp3);
		tr1 = *(EIF_REFERENCE *)(Current + O20025[dtype-1994]);
		Result = F1003_3930(RTCW(tr1), loc1);
		RTLE;
		return RTRV(eif_new_type(1960, 0x00), Result);
	} else {
		RTLE;
		return (EIF_REFERENCE) NULL;
	}/* NOTREACHED */
	
}

/* {EV_TREE_IMP}.general_insert_item */
void F1995_24950 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1356, 0x01).id, 1356, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F1337_15830(RTCW(loc1));
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(arg2 == tp1)) {
		F1357_16203(RTCW(loc1));
	} else {
		F1357_16197(RTCW(loc1), arg2);
	}
	F1357_16198(RTCW(loc1), arg3);
	F1357_16199(RTCW(loc1), arg1);
	F1931_23090(Current, loc1);
	tr1 = *(EIF_REFERENCE *)(Current + O20025[dtype-1994]);
	F1003_3971(RTCW(tr1), arg1, *(EIF_POINTER *)(Current + O19158[dtype-1930]));
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_32_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		F951_4104(loc2);
		for (;;) {
			tb1 = F882_3332(loc2);
			if (tb1) break;
			tr1 = F951_4078(loc2);
			tp1 = F1410_17390(RTCW(arg1));
			tp2 = (EIF_POINTER) TVI_LAST;
			F1995_24950(Current, tr1, tp1, tp2, arg4);
			F951_4106(loc2);
		}
		tr1 = F1961_23847(RTCW(arg1));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			F1961_23888(RTCW(arg1), NULL);
		}
	}
	F1912_22563(Current);
	RTLE;
}

/* {EV_TREE_IMP}.general_remove_item */
void F1995_24951 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F1995_24952(Current, arg1, ((EIF_INTEGER_32) 0L));
}

/* {EV_TREE_IMP}.internal_general_remove_item */
void F1995_24952 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O20033[dtype-1994]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tb1 = F1961_23852(RTCW(arg1));
	if (tb1) {
		loc1 = F1995_24953(Current, arg1);
		F951_4104(RTCW(loc1));
		for (;;) {
			tb1 = F882_3332(RTCW(loc1));
			if (tb1) break;
			tr1 = F951_4078(RTCW(loc1));
			F1995_24952(Current, tr1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)));
			F951_4106(RTCW(loc1));
		}
		F1961_23888(RTCW(arg1), loc1);
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1960,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 0L));
		F1961_23888(RTCW(arg1), tr1);
	}
	if ((EIF_BOOLEAN)(arg1 == F1995_24949(Current))) {
		tr1 = F153_10282(RTCW(arg1));
		F977_14409(RTCW(tr1), NULL);
		tr1 = F277_12020(Current);
		F977_14409(RTCW(tr1), NULL);
	}
	tr1 = *(EIF_REFERENCE *)(Current + O20025[dtype-1994]);
	tp1 = F1410_17390(RTCW(arg1));
	F1003_3976(RTCW(tr1), tp1);
	F1931_23091(Current, arg1);
	F1912_22563(Current);
	if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L))) {
		*(EIF_BOOLEAN *)(Current + O20033[dtype-1994]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {EV_TREE_IMP}.get_children */
EIF_REFERENCE F1995_24953 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1960,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F951_4073(RTCW(Result), ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
		tp3 = (EIF_POINTER) (LPARAM)((((EIF_INTEGER_32) 0L)));
		loc1 = inline_F67_9746(tp1, ((EIF_INTEGER_32) 4362L), tp2, tp3);
	} else {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 4L)));
		tp3 = F1410_17390(RTCW(arg1));
		loc1 = inline_F67_9746(tp1, ((EIF_INTEGER_32) 4362L), tp2, tp3);
	}
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		tr1 = *(EIF_REFERENCE *)(Current + O20025[dtype-1994]);
		loc3 = F1003_3930(RTCW(tr1), loc1);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(Result))-818])(Result, loc3);
		}
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 1L)));
		tp1 = inline_F67_9746(tp1, ((EIF_INTEGER_32) 4362L), tp2, loc1);
		loc1 = (EIF_POINTER) tp1;
	}
	RTLE;
	return Result;
}

/* {EV_TREE_IMP}.insert_item */
void F1995_24955 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		tp2 = tp1;
		tp3 = (EIF_POINTER) TVI_FIRST;
		F1995_24950(Current, arg1, tp2, tp3, arg2);
	} else {
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		tp2 = tp1;
		tr1 = *(EIF_REFERENCE *)(Current + O20038[Dtype(Current)-1994]);
		tr1 = F951_4080(RTCW(tr1), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
		tp3 = F1410_17390(RTCW(tr1));
		F1995_24950(Current, arg1, tp2, tp3, arg2);
	}
	RTLE;
}

/* {EV_TREE_IMP}.remove_item */
void F1995_24956 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	F1995_24951(Current, arg1);
	F1912_22563(Current);
	RTLE;
}

/* {EV_TREE_IMP}.notify_item_info */
void F1995_24957 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_35_13_6_4_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4415L), tp2, tp3);
	RTLE;
}

/* {EV_TREE_IMP}.find_item_at_position */
EIF_REFERENCE F1995_24960 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1906_22334(RTCW(loc1), arg1, arg2);
	loc2 = RTLNS(eif_new_type(1357, 0x01).id, 1357, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1358_16212(RTCW(loc2), loc1);
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_0_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4369L), tp2, tp3);
	tb1 = '\01';
	ti4_1 = F1358_16214(RTCW(loc2));
	if (!F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 4L))) {
		ti4_1 = F1358_16214(RTCW(loc2));
		tb1 = F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 2L));
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + O20025[dtype-1994]);
		tp1 = F1358_16215(RTCW(loc2));
		Result = F1003_3930(RTCW(tr1), tp1);
	}
	RTLE;
	return Result;
}

/* {EV_TREE_IMP}.process_message */
EIF_POINTER F1995_24962 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 277L)) || (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 276L)))) {
		loc1 = (EIF_INTEGER_32) LOWORD((arg3));
		ti4_1 = F1970_24158(Current, loc1);
		loc1 = (EIF_INTEGER_32) ti4_1;
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 7L)) || (EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 8L)))) {
			loc2 = (EIF_INTEGER_32) HIWORD((arg3));
		}
	}
	switch (arg2) {
		case 277L:
			tr1 = *(EIF_REFERENCE *)(Current + O9982[dtype-288]);
			loc3 = tr1;
			if (EIF_TEST(loc3)) {
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLNTS(typres0.id, 3, 1);
				}
				((EIF_TYPED_VALUE *)tr1+1)->it_i4 = loc1;
				((EIF_TYPED_VALUE *)tr1+2)->it_i4 = loc2;
				F977_14409(loc3, tr1);
			}
			break;
		case 276L:
			tr1 = *(EIF_REFERENCE *)(Current + O9983[dtype-288]);
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLNTS(typres0.id, 3, 1);
				}
				((EIF_TYPED_VALUE *)tr1+1)->it_i4 = loc1;
				((EIF_TYPED_VALUE *)tr1+2)->it_i4 = loc2;
				F977_14409(loc4, tr1);
			}
			break;
		default:
			Result = F1912_22635(Current, arg1, arg2, arg3, arg4);
			break;
	}
	RTLE;
	return Result;
}

/* {EV_TREE_IMP}.setup_image_list */
void F1995_24964 (EIF_REFERENCE Current)
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
	tr1 = F1852_20974(Current, *(EIF_INTEGER_32 *)(Current + O16438[dtype-1732]), *(EIF_INTEGER_32 *)(Current + O16439[dtype-1732]));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O20034[dtype-1994]) = (EIF_REFERENCE) tr1;
	F1931_23086(Current, *(EIF_REFERENCE *)(Current + O20034[dtype-1994]));
	RTLE;
}

/* {EV_TREE_IMP}.internal_propagate_pointer_press */
void F1995_24966 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,tr2);
	RTLR(6,loc7);
	RTLR(7,loc2);
	RTLIU(8);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_47_);
	loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	loc1 = F1995_24960(Current, arg2, arg3);
	loc3 = F1970_24088(Current, arg2, arg3);
	tb1 = '\0';
	tb2 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = (EIF_BOOLEAN) !F1956_23717(Current);
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN) !F1969_23990(Current);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_5_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			loc4 = F1961_23889(RTCW(loc1));
			tr1 = F177_10618(RTCW(loc1));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,8,1475,1508,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 9, 1);
			}
			ti4_1 = eif_integer_32_item(RTCW(loc4),1);
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - ti4_1) + ((EIF_INTEGER_32) 1L));
			ti4_1 = eif_integer_32_item(RTCW(loc4),2);
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = (EIF_INTEGER_32) (arg3 - ti4_1);
			((EIF_TYPED_VALUE *)tr2+3)->it_i4 = arg4;
			((EIF_TYPED_VALUE *)tr2+4)->it_r8 = (EIF_REAL_64) 0.0;
			((EIF_TYPED_VALUE *)tr2+5)->it_r8 = (EIF_REAL_64) 0.0;
			((EIF_TYPED_VALUE *)tr2+6)->it_r8 = (EIF_REAL_64) 0.0;
			ti4_1 = F1906_22336(RTCW(loc3));
			((EIF_TYPED_VALUE *)tr2+7)->it_i4 = ti4_1;
			ti4_1 = F1906_22337(RTCW(loc3));
			((EIF_TYPED_VALUE *)tr2+8)->it_i4 = ti4_1;
			F977_14409(RTCW(tr1), tr2);
		}
		loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb4 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_35_3_);
		tb3 = tb4;
	}
	if (tb3) {
		tb2 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O19662[dtype-1968]);
	}
	if (tb2) {
		tr1 = F1793_20214(RTCW(loc1));
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tb1) {
		ti4_1 = F1906_22336(RTCW(loc3));
		ti4_2 = F1906_22337(RTCW(loc3));
		F1957_23761(RTCW(loc1), arg2, arg3, arg4, ti4_1, ti4_2);
		tu1_1 = *(EIF_NATURAL_8 *)(RTCW(loc1)+ _CHROFF_35_10_);
		if ((EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 3U))) {
			F1912_22507(Current);
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O19663[dtype-1968]);
		loc7 = tr1;
		if (EIF_TEST(loc7)) {
			ti4_1 = F1906_22336(RTCW(loc3));
			ti4_2 = F1906_22337(RTCW(loc3));
			F1957_23761(loc7, arg2, arg3, arg4, ti4_1, ti4_2);
		}
	}
	if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O19644[dtype-1968]) == *(EIF_BOOLEAN *)(Current + O19664[dtype-1968]))) {
		ti4_1 = F1906_22336(RTCW(loc3));
		ti4_2 = F1906_22337(RTCW(loc3));
		F1969_23985(Current, arg2, arg3, arg4, ti4_1, ti4_2);
		if ((EIF_BOOLEAN)(*(EIF_NATURAL_8 *)(Current + O19557[dtype-1955]) == ((EIF_NATURAL_8) 3U))) {
			F1912_22507(Current);
		}
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O19643[dtype-1968]) && *(EIF_BOOLEAN *)(Current + O19659[dtype-1968]))) {
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
		ti4_1 = F1906_22336(RTCW(loc3));
		((EIF_TYPED_VALUE *)tr2+7)->it_i4 = ti4_1;
		ti4_1 = F1906_22337(RTCW(loc3));
		((EIF_TYPED_VALUE *)tr2+8)->it_i4 = ti4_1;
		F977_14409(RTCW(tr1), tr2);
	}
	loc2 = F1995_24960(Current, arg2, arg3);
	if ((EIF_BOOLEAN) !loc5) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != NULL) && (EIF_BOOLEAN)(loc1 == loc2)) && *(EIF_BOOLEAN *)(Current + O19659[dtype-1968]))) {
			loc4 = F1961_23889(RTCW(loc2));
			tr1 = F177_10618(RTCW(loc2));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,8,1475,1508,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 9, 1);
			}
			ti4_1 = eif_integer_32_item(RTCW(loc4),1);
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - ti4_1) + ((EIF_INTEGER_32) 1L));
			ti4_1 = eif_integer_32_item(RTCW(loc4),2);
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = (EIF_INTEGER_32) (arg3 - ti4_1);
			((EIF_TYPED_VALUE *)tr2+3)->it_i4 = arg4;
			((EIF_TYPED_VALUE *)tr2+4)->it_r8 = (EIF_REAL_64) 0.0;
			((EIF_TYPED_VALUE *)tr2+5)->it_r8 = (EIF_REAL_64) 0.0;
			((EIF_TYPED_VALUE *)tr2+6)->it_r8 = (EIF_REAL_64) 0.0;
			ti4_1 = F1906_22336(RTCW(loc3));
			((EIF_TYPED_VALUE *)tr2+7)->it_i4 = ti4_1;
			ti4_1 = F1906_22337(RTCW(loc3));
			((EIF_TYPED_VALUE *)tr2+8)->it_i4 = ti4_1;
			F977_14409(RTCW(tr1), tr2);
		}
	}
	F1969_24009(Current);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 3L))) {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_47_);
		tb1 = (EIF_BOOLEAN)(loc6 != (EIF_BOOLEAN)(tr1 != NULL));
	}
	if (tb1) {
		F1912_22507(Current);
	}
	RTLE;
}

/* {EV_TREE_IMP}.internal_propagate_pointer_double_press */
void F1995_24967 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	loc1 = F1995_24960(Current, arg2, arg3);
	loc2 = F1970_24088(Current, arg2, arg3);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		loc3 = F1961_23889(RTCW(loc1));
		tr1 = F177_10620(RTCW(loc1));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,8,1475,1508,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0.id, 9, 1);
		}
		ti4_1 = eif_integer_32_item(RTCW(loc3),1);
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - ti4_1) + ((EIF_INTEGER_32) 1L));
		ti4_1 = eif_integer_32_item(RTCW(loc3),2);
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = (EIF_INTEGER_32) (arg3 - ti4_1);
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

/* {EV_TREE_IMP}.default_style */
EIF_INTEGER_32 F1995_24968 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 1073741824L),((EIF_INTEGER_32) 268435456L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 131072L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 65536L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 8388608L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 2L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 1L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 4L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 16L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 32L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 2048L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 33554432L));
	Result = eif_bit_or(ti4_1,((EIF_INTEGER_32) 67108864L));
	return Result;
}

/* {EV_TREE_IMP}.on_tvn_selchanging */
void F1995_24969 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O18635[dtype-1911]);
	loc1 = tr1;
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current + O20033[dtype-1994]) && EIF_TEST(loc1))) {
		tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 1L)));
		F214_11244(loc1, tp1);
	}
	RTLE;
}

/* {EV_TREE_IMP}.on_tvn_selchanged */
void F1995_24970 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLIU(6);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O20025[Dtype(Current)-1994]);
	tr1 = F1359_16227(RTCW(arg1));
	loc2 = F1410_17390(RTCW(tr1));
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc2 != tp1)) {
		loc3 = F1003_3929(RTCW(loc1), loc2);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			tr1 = F153_10282(RTCW(loc3));
			F977_14409(RTCW(tr1), NULL);
			tr1 = F277_12020(Current);
			F977_14409(RTCW(tr1), NULL);
		}
	}
	tr1 = F1359_16226(RTCW(arg1));
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		loc2 = F1410_17390(loc4);
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(loc2 != tp1)) {
			loc3 = F1003_3929(RTCW(loc1), loc2);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				tr1 = F153_10280(RTCW(loc3));
				F977_14409(RTCW(tr1), NULL);
				tr1 = F277_12018(Current);
				F977_14409(RTCW(tr1), NULL);
			}
		}
	}
	RTLE;
}

/* {EV_TREE_IMP}.on_tvn_itemexpanded */
void F1995_24974 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O20037[dtype-1994])) {
		loc1 = F1359_16226(RTCW(arg1));
		RTCT0("l_new_item /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = *(EIF_REFERENCE *)(Current + O20025[dtype-1994]);
		tp1 = F1410_17390(RTCW(loc1));
		tr1 = F1003_3930(RTCW(tr1), tp1);
		loc1 = (EIF_REFERENCE) tr1;
		RTCT0("l_new_item /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc2 = loc1;
		loc2 = RTRV(eif_new_type(1960, 0x00), loc2);
		RTCT0("l_item /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		ti4_1 = F1359_16225(RTCW(arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			tr1 = F1696_18976(RTCW(loc2));
			tr1 = F1574_17644(RTCW(tr1));
			F977_14409(RTCW(tr1), NULL);
		} else {
			ti4_1 = F1359_16225(RTCW(arg1));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
				tr1 = F1696_18976(RTCW(loc2));
				tr1 = F1574_17643(RTCW(tr1));
				F977_14409(RTCW(tr1), NULL);
			}
		}
	}
	RTLE;
}

/* {EV_TREE_IMP}.on_key_down */
void F1995_24975 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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

/* {EV_TREE_IMP}.on_mouse_move */
void F1995_24976 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,loc4);
	RTLIU(7);
	
	RTGC;
	loc1 = F1995_24960(Current, arg2, arg3);
	loc2 = F1970_24088(Current, arg2, arg3);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		loc3 = F1961_23889(RTCW(loc1));
		tr1 = F177_10616(RTCW(loc1));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,7,1475,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0.id, 8, 1);
		}
		ti4_1 = eif_integer_32_item(RTCW(loc3),1);
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - ti4_1) + ((EIF_INTEGER_32) 1L));
		ti4_1 = eif_integer_32_item(RTCW(loc3),2);
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = (EIF_INTEGER_32) (arg3 - ti4_1);
		((EIF_TYPED_VALUE *)tr2+3)->it_r8 = (EIF_REAL_64) 0.0;
		((EIF_TYPED_VALUE *)tr2+4)->it_r8 = (EIF_REAL_64) 0.0;
		((EIF_TYPED_VALUE *)tr2+5)->it_r8 = (EIF_REAL_64) 0.0;
		ti4_1 = F1906_22336(RTCW(loc2));
		((EIF_TYPED_VALUE *)tr2+6)->it_i4 = ti4_1;
		ti4_1 = F1906_22337(RTCW(loc2));
		((EIF_TYPED_VALUE *)tr2+7)->it_i4 = ti4_1;
		F977_14409(RTCW(tr1), tr2);
	}
	tr1 = *(EIF_REFERENCE *)(Current + O19663[Dtype(Current)-1968]);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		ti4_1 = F1906_22336(RTCW(loc2));
		ti4_2 = F1906_22337(RTCW(loc2));
		F1956_23722(loc4, arg2, arg3, ti4_1, ti4_2);
	}
	F1970_24092(Current, arg1, arg2, arg3);
	RTLE;
}

/* {EV_TREE_IMP}.on_erase_background */
void F1995_24977 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	
	
	F1912_22507(Current);
}

/* {EV_TREE_IMP}.background_color_internal */
EIF_REFERENCE F1995_24978 (EIF_REFERENCE Current)
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
		tr1 = RTLNS(eif_new_type(72, 0x01).id, 72, _OBJSIZ_0_0_0_0_0_0_0_0_);
		Result = F73_9888(RTCW(tr1));
	}
	RTLE;
	return Result;
}

/* {EV_TREE_IMP}.set_background_color */
void F1995_24979 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	loc1 = RTRV(eif_new_type(1829, 0), loc1);
	RTCT0("l_background_color_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + O19682[Dtype(Current)-1969]) = (EIF_REFERENCE) loc1;
	F1931_23088(Current, loc1);
	if (F1912_22468(Current)) {
		F1912_22563(Current);
	}
	RTLE;
}

/* {EV_TREE_IMP}.set_foreground_color */
void F1995_24980 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	loc1 = RTRV(eif_new_type(1829, 0), loc1);
	RTCT0("l_foreground_color_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + O19683[Dtype(Current)-1969]) = (EIF_REFERENCE) loc1;
	F1931_23089(Current, loc1);
	if (F1912_22468(Current)) {
		F1912_22563(Current);
	}
	RTLE;
}

/* {EV_TREE_IMP}.destroy */
void F1995_24981 (EIF_REFERENCE Current)
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

void EIF_Minit1978 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
