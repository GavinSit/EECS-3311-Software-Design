/*
 * Code for class EV_MULTI_COLUMN_LIST_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1975.h"
#include <windows.h>
#include "eif_helpers.h"

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

/* {EV_MULTI_COLUMN_LIST_IMP}.make */
void F1992_24801 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1959,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_51_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1668,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 2L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_63_) = (EIF_REFERENCE) tr1;
	tr1 = RTOUCR(249,F1970_24036, (Current));
	F1936_23157(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	F1721_19435(Current);
	F1768_19984(Current);
	F1970_24029(Current);
	loc1 = RTLNS(eif_new_type(1360, 0x01).id, 1360, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F1361_16278(RTCW(loc1));
	F1361_16292(RTCW(loc1), ((EIF_INTEGER_32) -2L));
	tr1 = RTMS_EX_H("",0,0);
	F1361_16290(RTCW(loc1), tr1);
	F1936_23192(Current, loc1, ((EIF_INTEGER_32) 0L));
	tr1 = RTLNS(eif_new_type(1359, 0x01).id, 1359, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F1360_16236(RTCW(tr1));
	F1936_23195(Current, tr1);
	tr1 = RTLNS(eif_new_type(1359, 0x01).id, 1359, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F1360_16236(RTCW(tr1));
	F1936_23195(Current, tr1);
	tr1 = F1936_23171(Current, ((EIF_INTEGER_32) 1L));
	ti4_1 = F1906_22337(RTCW(tr1));
	tr1 = F1936_23171(Current, ((EIF_INTEGER_32) 0L));
	ti4_2 = F1906_22337(RTCW(tr1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_12_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ti4_2);
	F1936_23198(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_13_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_12_);
	if ((EIF_BOOLEAN) (RTOUCB(EIF_INTEGER_32,269,F500_14112, (Current)) >= ((EIF_INTEGER_32) 262214L))) {
		ti4_1 = F1936_23175(Current);
		F1936_23178(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 32L)) + ((EIF_INTEGER_32) 1024L)));
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.row_height */
EIF_INTEGER_32 F1992_24804 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_13_);
}


/* {EV_MULTI_COLUMN_LIST_IMP}.enable_sensitive */
void F1992_24813 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1970_24060(Current);
	F1912_22563(Current);
	F1912_22562(Current);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.disable_sensitive */
void F1992_24814 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1970_24059(Current);
	F1912_22563(Current);
	F1912_22562(Current);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.set_background_color */
void F1992_24818 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	*(EIF_REFERENCE *)(Current + _REFACS_60_) = (EIF_REFERENCE) loc1;
	F1936_23189(Current, loc1);
	F1936_23188(Current, loc1);
	if (F1912_22468(Current)) {
		F1912_22563(Current);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.set_foreground_color */
void F1992_24819 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	*(EIF_REFERENCE *)(Current + _REFACS_61_) = (EIF_REFERENCE) loc1;
	F1936_23190(Current, loc1);
	if (F1912_22468(Current)) {
		F1912_22563(Current);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.column_count */
EIF_INTEGER_32 F1992_24820 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_9_);
}

/* {EV_MULTI_COLUMN_LIST_IMP}.expand_column_count_to */
void F1992_24822 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1992_24823(Current);
	for (;;) {
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_9_) == arg1)) break;
		F1992_24824(Current);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.resize_first_column */
void F1992_24823 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_9_) == ((EIF_INTEGER_32) 1L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_53_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_2_3_0_0_);
		if ((EIF_BOOLEAN) (ti4_1 >= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_9_))) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_53_);
			loc1 = F858_3260(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_9_));
		} else {
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
		}
		F1936_23179(Current, loc1, ((EIF_INTEGER_32) 0L));
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.add_column */
void F1992_24824 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_53_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_2_3_0_0_);
	if ((EIF_BOOLEAN) (ti4_1 >= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_9_) + ((EIF_INTEGER_32) 1L)))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_53_);
		loc2 = F858_3260(RTCW(tr1), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_9_) + ((EIF_INTEGER_32) 1L)));
	} else {
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_52_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_2_3_0_0_);
	if ((EIF_BOOLEAN) (ti4_1 >= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_9_) + ((EIF_INTEGER_32) 1L)))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_52_);
		loc3 = F852_3260(RTCW(tr1), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_9_) + ((EIF_INTEGER_32) 1L)));
	}
	loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_9_);
	loc1 = RTLNS(eif_new_type(1360, 0x01).id, 1360, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F1361_16278(RTCW(loc1));
	F1361_16292(RTCW(loc1), loc2);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		F1361_16290(RTCW(loc1), loc3);
	} else {
		tr1 = RTMS_EX_H("",0,0);
		F1361_16290(RTCW(loc1), tr1);
	}
	F1936_23192(Current, loc1, loc4);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.find_item_at_position */
EIF_REFERENCE F1992_24828 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	loc2 = RTLNS(eif_new_type(1362, 0x01).id, 1362, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1363_16333(RTCW(loc2), loc1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_65_27_6_14_0_0_);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_0_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4114L), tp2, tp3);
	tb1 = '\01';
	ti4_1 = F1363_16335(RTCW(loc2));
	if (!F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 4L))) {
		ti4_1 = F1363_16335(RTCW(loc2));
		tb1 = F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 2L));
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
		ti4_1 = F1363_16336(RTCW(loc2));
		Result = F951_4080(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.insert_item */
void F1992_24831 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLR(6,loc4);
	RTLIU(7);
	
	RTGC;
	loc1 = F1696_18976(RTCW(arg1));
	ti4_1 = F951_4094(RTCW(loc1));
	if ((EIF_BOOLEAN) (ti4_1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_9_))) {
		ti4_1 = F951_4094(RTCW(loc1));
		F1992_24822(Current, ti4_1);
	} else {
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_9_) == ((EIF_INTEGER_32) 1L))) {
			F1992_24823(Current);
		}
	}
	F951_4104(RTCW(loc1));
	tb1 = F882_3332(RTCW(loc1));
	if (tb1) {
		loc3 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1558_6510(RTCW(loc3));
	} else {
		loc3 = F951_4078(RTCW(loc1));
		F951_4106(RTCW(loc1));
	}
	loc2 = RTLNS(eif_new_type(1359, 0x01).id, 1359, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F1360_16237(RTCW(loc2), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), loc3);
	F1936_23195(Current, loc2);
	for (;;) {
		tb1 = F882_3332(RTCW(loc1));
		if (tb1) break;
		loc2 = RTLNS(eif_new_type(1359, 0x01).id, 1359, _OBJSIZ_1_1_0_0_0_1_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1) + O3095[Dtype(loc1)-950]);
		tr1 = F951_4078(RTCW(loc1));
		F1360_16237(RTCW(loc2), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 0L), tr1);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_65_27_6_14_0_0_);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
		tp3 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_1_1_0_0_0_0_);
		inline_F67_9749(tp1, ((EIF_INTEGER_32) 4172L), tp2, tp3);
		F951_4106(RTCW(loc1));
	}
	tr1 = F1800_20234(RTCW(arg1));
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		F1992_24845(Current, arg2, loc4);
	}
	F1912_22563(Current);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.remove_item */
void F1992_24833 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
	loc1 = F852_3258(RTCW(tr1), arg1, ((EIF_INTEGER_32) 1L));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	F1936_23197(Current, loc1);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.set_item_text */
void F1992_24834 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,arg2);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLIU(7);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1359, 0x01).id, 1359, _OBJSIZ_1_1_0_0_0_1_0_0_);
	ti4_1 = F1992_24837(Current, arg1);
	F1360_16237(RTCW(loc1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 0L), arg2);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L))) {
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_21_);
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tb1) {
		loc2 = *(EIF_REFERENCE *)(Current + _REFACS_64_);
		RTCT0("l_image_list /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc3 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_21_);
		RTCT0("l_internal_pixmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1300_15156(RTCW(loc2), loc3);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc2)+ _LNGOFF_4_3_0_3_);
		F1360_16253(RTCW(loc1), ti4_1);
	}
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_65_27_6_14_0_0_);
	tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
	tp3 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_1_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4172L), tp2, tp3);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.on_item_added_at */
void F1992_24835 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg3 > F1992_24820(Current))) {
		F1992_24822(Current, arg3);
	}
	F1992_24834(Current, arg1, arg2, arg3);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		tr1 = F1696_18976(RTCW(arg1));
		ti4_1 = F951_4094(RTCW(tr1));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		tr1 = F1696_18976(RTCW(arg1));
		tr1 = F951_4079(RTCW(tr1), loc1);
		F1992_24834(Current, arg1, tr1, loc1);
		loc1++;
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.on_item_removed_at */
void F1992_24836 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg3;
	for (;;) {
		tr1 = F1696_18976(RTCW(arg1));
		ti4_1 = F951_4094(RTCW(tr1));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		tr1 = F1696_18976(RTCW(arg1));
		tr1 = F951_4079(RTCW(tr1), loc1);
		F1992_24834(Current, arg1, tr1, loc1);
		loc1++;
	}
	tr1 = RTMS_EX_H("",0,0);
	tr2 = F1696_18976(RTCW(arg1));
	ti4_2 = F951_4094(RTCW(tr2));
	F1992_24834(Current, arg1, tr1, (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.internal_get_index */
EIF_INTEGER_32 F1992_24837 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
	Result = F852_3258(RTCW(tr1), arg1, ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.internal_is_selected */
EIF_BOOLEAN F1992_24838 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
	loc1 = F852_3258(RTCW(tr1), arg1, ((EIF_INTEGER_32) 1L));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	ti4_1 = F1936_23170(Current, loc1, ((EIF_INTEGER_32) 2L));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTLE;
	return (EIF_BOOLEAN) F1258_14781(Current, loc1, ((EIF_INTEGER_32) 2L));
}

/* {EV_MULTI_COLUMN_LIST_IMP}.internal_select */
void F1992_24839 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
	loc1 = F852_3258(RTCW(tr1), arg1, ((EIF_INTEGER_32) 1L));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	loc2 = RTLNS(eif_new_type(1359, 0x01).id, 1359, _OBJSIZ_1_1_0_0_0_1_0_0_);
	tr1 = RTMS_EX_H("",0,0);
	F1360_16237(RTCW(loc2), ((EIF_INTEGER_32) 8L), loc1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), tr1);
	F1360_16250(RTCW(loc2), (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) + ((EIF_INTEGER_32) 1L)));
	F1360_16257(RTCW(loc2), (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) + ((EIF_INTEGER_32) 1L)));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_65_27_6_14_0_0_);
	tp2 = (EIF_POINTER) (WPARAM)((loc1));
	tp3 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_1_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4139L), tp2, tp3);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.internal_deselect */
void F1992_24840 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
	loc1 = F852_3258(RTCW(tr1), arg1, ((EIF_INTEGER_32) 1L));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	loc2 = RTLNS(eif_new_type(1359, 0x01).id, 1359, _OBJSIZ_1_1_0_0_0_1_0_0_);
	tr1 = RTMS_EX_H("",0,0);
	F1360_16237(RTCW(loc2), ((EIF_INTEGER_32) 8L), loc1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), tr1);
	F1360_16250(RTCW(loc2), ((EIF_INTEGER_32) 0L));
	F1360_16257(RTCW(loc2), (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) + ((EIF_INTEGER_32) 1L)));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_65_27_6_14_0_0_);
	tp2 = (EIF_POINTER) (WPARAM)((loc1));
	tp3 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_1_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4139L), tp2, tp3);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.set_default_minimum_size */
void F1992_24841 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(501, 0x01).id, 501, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc1 = F502_14137(RTCW(tr1));
	ti4_1 = F1885_21700(RTCW(loc1));
	ti4_1 = eif_abs_int32 (ti4_1);
	ti4_2 = F1885_21701(RTCW(loc1));
	ti4_2 = eif_abs_int32 (ti4_2);
	F1724_19513(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 20L)) + ((EIF_INTEGER_32) 7L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 * ((EIF_INTEGER_32) 5L)) + ((EIF_INTEGER_32) 7L)), (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.setup_image_list */
void F1992_24842 (EIF_REFERENCE Current)
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
	F1300_15153(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_5_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_6_));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_64_) = (EIF_REFERENCE) tr1;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_12_) < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_6_))) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_13_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_6_);
	}
	F1936_23187(Current, *(EIF_REFERENCE *)(Current + _REFACS_64_));
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.set_row_pixmap */
void F1992_24845 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,arg2);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_64_) == NULL)) {
		F1992_24842(Current);
	}
	loc3 = *(EIF_REFERENCE *)(Current + _REFACS_64_);
	RTCT0("l_image_list /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1300_15156(RTCW(loc3), arg2);
	loc1 = *(EIF_INTEGER_32 *)(RTCW(loc3)+ _LNGOFF_4_3_0_3_);
	loc2 = F1936_23174(Current, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 0L));
	F1360_16253(RTCW(loc2), loc1);
	F1936_23196(Current, loc2);
	F1912_22563(Current);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.wipe_out */
void F1992_24847 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
	F951_4104(RTCW(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
		tb1 = F736_2537(RTCW(tr1));
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
		loc1 = F951_4078(RTCW(tr1));
		{
			/* INLINED CODE (EV_ITEM_IMP.on_orphaned) */
			/* END INLINED CODE */
		}
		;
		tb2 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_38_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_38_);
			ti4_1 = F951_4094(RTCW(tr1));
			tb2 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_38_);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1668,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 2, 0);
			}
			tr3 = F1696_18976(RTCW(loc1));
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		}
		F1960_23835(RTCW(loc1), NULL);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_63_);
		tr2 = F1696_18976(RTCW(loc1));
		tb2 = F951_4085(RTCW(tr1), tr2);
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = F172_10569(RTCW(loc1));
				F977_14409(RTCW(tr1), NULL);
			}
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
				tr1 = F161_10371(Current);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1668,0xFFFF};
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
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_63_);
			tr2 = F1696_18976(RTCW(loc1));
			F951_4126(RTCW(tr1), tr2);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2263[Dtype(RTCW(tr1))-818])(tr1);
	}
	F1936_23198(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.internal_propagate_pointer_press */
void F1992_24851 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
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
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc5);
	RTLR(6,loc2);
	RTLIU(7);
	
	RTGC;
	loc1 = F1992_24828(Current, arg2, arg3);
	loc4 = F1970_24088(Current, arg2, arg3);
	tb1 = '\0';
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 != NULL) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_65_11_)) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_65_10_))) {
		tb1 = (EIF_BOOLEAN) !F1969_23990(Current);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
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
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg2;
			ti4_1 = F1992_24853(Current, loc1);
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = (EIF_INTEGER_32) (arg3 - ti4_1);
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
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb4 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_27_2_);
		tb3 = tb4;
	}
	if (tb3) {
		tb2 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_65_15_);
	}
	if (tb2) {
		tr1 = F1790_20206(RTCW(loc1));
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tb1) {
		ti4_1 = F1906_22336(RTCW(loc4));
		ti4_2 = F1906_22337(RTCW(loc4));
		F1957_23761(RTCW(loc1), arg2, arg3, arg4, ti4_1, ti4_2);
		tu1_1 = *(EIF_NATURAL_8 *)(RTCW(loc1)+ _CHROFF_27_8_);
		if ((EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 3U))) {
			F1912_22507(Current);
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_59_);
		loc5 = tr1;
		if (EIF_TEST(loc5)) {
			ti4_1 = F1906_22336(RTCW(loc4));
			ti4_2 = F1906_22337(RTCW(loc4));
			F1957_23761(loc5, arg2, arg3, arg4, ti4_1, ti4_2);
		}
	}
	if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_65_13_) == *(EIF_BOOLEAN *)(Current+ _CHROFF_65_16_))) {
		ti4_1 = F1906_22336(RTCW(loc4));
		ti4_2 = F1906_22337(RTCW(loc4));
		F1969_23985(Current, arg2, arg3, arg4, ti4_1, ti4_2);
		if ((EIF_BOOLEAN)(*(EIF_NATURAL_8 *)(Current+ _CHROFF_65_24_) == ((EIF_NATURAL_8) 3U))) {
			F1912_22507(Current);
		}
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_65_12_) && *(EIF_BOOLEAN *)(Current+ _CHROFF_65_14_))) {
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
	loc2 = F1992_24828(Current, arg2, arg3);
	if ((EIF_BOOLEAN) !loc3) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != NULL) && (EIF_BOOLEAN)(loc1 == loc2)) && *(EIF_BOOLEAN *)(Current+ _CHROFF_65_14_))) {
			tr1 = F1696_18976(RTCW(loc2));
			tr1 = F1581_17667(RTCW(tr1));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,8,1475,1508,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 9, 1);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg2;
			ti4_1 = F1992_24853(Current, loc2);
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = (EIF_INTEGER_32) (arg3 - ti4_1);
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
	F1969_24009(Current);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.internal_propagate_pointer_double_press */
void F1992_24852 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	loc1 = F1992_24828(Current, arg2, arg3);
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
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg2;
		ti4_1 = F1992_24853(Current, loc1);
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

/* {EV_MULTI_COLUMN_LIST_IMP}.relative_y */
EIF_INTEGER_32 F1992_24853 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	ti4_1 = F1960_23832(RTCW(arg1));
	loc1 = F1936_23171(Current, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
	ti4_1 = F1906_22337(RTCW(loc1));
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.process_message */
EIF_POINTER F1992_24854 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	switch (arg2) {
		case 277L:
			F1992_24857(Current);
			break;
		default:
			Result = F1912_22635(Current, arg1, arg2, arg3, arg4);
			break;
	}
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.on_notify */
void F1992_24855 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	{
		/* INLINED CODE (WEL_WINDOW.on_notify) */
		/* END INLINED CODE */
	}
	;
	loc1 = RTLNS(eif_new_type(1873, 0x01).id, 1873, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tb1 = F1874_21499(RTCW(loc1));
	if (tb1) {
		ti4_1 = F1903_22268(RTCW(arg2));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -327L))) {
			F1992_24856(Current, arg2);
		}
	} else {
		ti4_1 = F1903_22268(RTCW(arg2));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -321L))) {
			F1992_24856(Current, arg2);
		}
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.column_width_update_and_fire_actions */
void F1992_24856 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1363, 0x01).id, 1363, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1364_16346(RTCW(loc1), arg1);
	ti4_1 = F1364_16348(RTCW(loc1));
	ti4_1 = F1936_23169(Current, ti4_1);
	ti4_2 = F1364_16348(RTCW(loc1));
	F1768_20013(Current, ti4_1, (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0.id, 2, 1);
		}
		ti4_1 = F1364_16348(RTCW(loc1));
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		F977_14409(RTCW(tr1), tr2);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.on_wm_vscroll */
void F1992_24857 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_65_20_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.on_erase_background */
void F1992_24859 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc6);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc2);
	RTLR(6,arg1);
	RTLIU(7);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_65_20_)) {
		if (F1912_22467(Current)) {
			loc6 = F1936_23166(Current);
		} else {
			loc6 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
			F1829_20490(RTCW(loc6), ((EIF_INTEGER_32) 15L));
		}
		loc4 = RTLNS(eif_new_type(1320, 0x01).id, 1320, _OBJSIZ_0_2_0_3_0_1_0_0_);
		F1321_15590(RTCW(loc4), loc6);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
		ti4_1 = F951_4094(RTCW(tr1));
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (F1936_23162(Current) + F1936_23160(Current)) + ((EIF_INTEGER_32) 1L)) > ti4_1)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
			tb1 = F736_2537(RTCW(tr1));
			if (tb1) {
				loc3 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
				ti4_1 = F1408_17330(RTCV(F1912_22490(Current)));
				ti4_2 = F1408_17331(RTCV(F1912_22490(Current)));
				F1408_17321(RTCW(loc3), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1, ti4_2);
			} else {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
				ti4_1 = F951_4094(RTCW(tr1));
				loc2 = F1936_23172(Current, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
				loc3 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
				ti4_1 = F1408_17331(RTCW(loc2));
				ti4_2 = F1408_17330(RTCV(F1912_22490(Current)));
				ti4_3 = F1408_17331(RTCV(F1912_22490(Current)));
				F1408_17321(RTCW(loc3), ((EIF_INTEGER_32) 0L), ti4_1, ti4_2, ti4_3);
			}
			F1306_15298(RTCW(arg1), loc3, loc4);
		}
		loc3 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
		ti4_1 = F1408_17326(RTCV(F1912_22490(Current)));
		ti4_2 = F1408_17328(RTCV(F1912_22490(Current)));
		ti4_3 = F1408_17326(RTCV(F1912_22490(Current)));
		ti4_4 = F1408_17331(RTCV(F1912_22490(Current)));
		F1408_17321(RTCW(loc3), ti4_1, ti4_2, (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 2L)), ti4_4);
		F1306_15298(RTCW(arg1), loc3, loc4);
		ti4_1 = F1936_23162(Current);
		loc2 = F1936_23172(Current, ti4_1);
		loc3 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
		ti4_1 = F1408_17326(RTCV(F1912_22490(Current)));
		ti4_2 = F1408_17328(RTCW(loc2));
		ti4_3 = F1408_17330(RTCV(F1912_22490(Current)));
		ti4_4 = F1408_17328(RTCW(loc2));
		F1408_17321(RTCW(loc3), ti4_1, ti4_2, ti4_3, (EIF_INTEGER_32) (ti4_4 - ((EIF_INTEGER_32) 2L)));
		F1306_15298(RTCW(arg1), loc3, loc4);
		loc3 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
		ti4_1 = F1408_17330(RTCW(loc2));
		ti4_2 = F1408_17328(RTCV(F1912_22490(Current)));
		ti4_3 = F1408_17330(RTCV(F1912_22490(Current)));
		ti4_4 = F1408_17331(RTCV(F1912_22490(Current)));
		F1408_17321(RTCW(loc3), ti4_1, ti4_2, ti4_3, ti4_4);
		F1306_15298(RTCW(arg1), loc3, loc4);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_64_) != NULL)) {
			loc1 = F1936_23162(Current);
			for (;;) {
				tb1 = '\01';
				if (!(EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) (F1936_23162(Current) + F1936_23160(Current)))) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
					ti4_1 = F951_4094(RTCW(tr1));
					tb1 = (EIF_BOOLEAN) (loc1 > (EIF_INTEGER_32) ((EIF_INTEGER_32) (F1936_23162(Current) + ti4_1) - ((EIF_INTEGER_32) 1L)));
				}
				if (tb1) break;
				loc2 = F1936_23172(Current, loc1);
				if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_5_) < F1768_19992(Current, ((EIF_INTEGER_32) 1L)))) {
					loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_5_);
					loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 2L));
				} else {
					loc5 = F1768_19992(Current, ((EIF_INTEGER_32) 1L));
				}
				loc3 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
				ti4_1 = F1408_17326(RTCW(loc2));
				ti4_2 = F1408_17328(RTCW(loc2));
				ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_65_27_6_6_);
				ti4_4 = F1408_17331(RTCW(loc2));
				F1408_17321(RTCW(loc3), ti4_1, (EIF_INTEGER_32) (ti4_2 + ti4_3), loc5, ti4_4);
				F1306_15298(RTCW(arg1), loc3, loc4);
				loc1++;
			}
		}
		F519_14213(RTCW(loc4));
		F1912_22507(Current);
		tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 1L)));
		F214_11244(Current, tp1);
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.background_color_internal */
EIF_REFERENCE F1992_24860 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
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

/* {EV_MULTI_COLUMN_LIST_IMP}.default_style */
EIF_INTEGER_32 F1992_24861 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 1073741824L) + ((EIF_INTEGER_32) 268435456L)) + ((EIF_INTEGER_32) 131072L)) + ((EIF_INTEGER_32) 65536L)) + ((EIF_INTEGER_32) 8388608L)) + ((EIF_INTEGER_32) 33554432L)) + ((EIF_INTEGER_32) 1L)) + ((EIF_INTEGER_32) 8L)) + ((EIF_INTEGER_32) 4L)) + ((EIF_INTEGER_32) 67108864L)) + ((EIF_INTEGER_32) 64L));
}

/* {EV_MULTI_COLUMN_LIST_IMP}.default_ex_style */
EIF_INTEGER_32 F1992_24862 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1024L);
}

/* {EV_MULTI_COLUMN_LIST_IMP}.on_lvn_columnclick */
void F1992_24863 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	tr1 = F1577_17653(RTCV(F1696_18976(Current)));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 1);
	}
	ti4_1 = F1362_16318(RTCW(arg1));
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	F977_14409(RTCW(tr1), tr2);
	F1912_22507(Current);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.on_lvn_itemchanged */
void F1992_24864 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTGC;
	tb1 = '\0';
	ti4_1 = F1362_16321(RTCW(arg1));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 8L))) {
		ti4_1 = F1362_16318(RTCW(arg1));
		tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		tb1 = '\0';
		ti4_1 = F1362_16319(RTCW(arg1));
		if (F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 2L))) {
			ti4_1 = F1362_16320(RTCW(arg1));
			tb1 = (EIF_BOOLEAN) !F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 2L));
		}
		if (tb1) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_65_19_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
			ti4_1 = F1362_16317(RTCW(arg1));
			loc1 = F951_4080(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = F172_10567(RTCW(loc1));
				F977_14409(RTCW(tr1), NULL);
			}
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
				tr1 = F161_10369(Current);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1668,0xFFFF};
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
			tb1 = '\0';
			ti4_1 = F1362_16320(RTCW(arg1));
			if (F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 2L))) {
				ti4_1 = F1362_16319(RTCW(arg1));
				tb1 = (EIF_BOOLEAN) !F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 2L));
			}
			if (tb1) {
				*(EIF_BOOLEAN *)(Current+ _CHROFF_65_19_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
				ti4_1 = F1362_16317(RTCW(arg1));
				loc1 = F951_4080(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
				tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
				if ((EIF_BOOLEAN)(tr1 != NULL)) {
					tr1 = F172_10569(RTCW(loc1));
					F977_14409(RTCW(tr1), NULL);
				}
				if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
					tr1 = F161_10371(Current);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1668,0xFFFF};
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
		}
	}
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.on_key_down */
void F1992_24865 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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

/* {EV_MULTI_COLUMN_LIST_IMP}.on_size */
void F1992_24866 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_65_20_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	{
		/* INLINED CODE (WEL_WINDOW.on_size) */
		/* END INLINED CODE */
	}
	;
	F1970_24130(Current, arg1, arg2, arg3);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.on_mouse_move */
void F1992_24867 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTGC;
	loc1 = F1992_24828(Current, arg2, arg3);
	loc2 = F1970_24088(Current, arg2, arg3);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = F1696_18976(RTCW(loc1));
		tr1 = F1581_17666(RTCW(tr1));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,7,1475,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0.id, 8, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg2;
		ti4_1 = F1992_24853(Current, loc1);
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_59_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		ti4_1 = F1906_22336(RTCW(loc2));
		ti4_2 = F1906_22337(RTCW(loc2));
		F1956_23722(loc3, arg2, arg3, ti4_1, ti4_2);
	}
	F1970_24092(Current, arg1, arg2, arg3);
	RTLE;
}

/* {EV_MULTI_COLUMN_LIST_IMP}.destroy */
void F1992_24869 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1992_24847(Current);
	F1989_24676(Current);
	RTLE;
}

void EIF_Minit1975 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
