/*
 * Code for class EV_LIST_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1974.h"
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

/* {EV_LIST_IMP}.make */
void F1991_24756 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1958,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 2L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_50_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1669,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 2L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_60_) = (EIF_REFERENCE) tr1;
	F1721_19435(Current);
	tr1 = RTOUCR(249,F1970_24036, (Current));
	F1936_23157(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	loc1 = RTLNS(eif_new_type(1360, 0x01).id, 1360, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F1361_16278(RTCW(loc1));
	F1936_23191(Current, loc1);
	ti4_1 = RTOUCB(EIF_INTEGER_32,410,F1991_24788, (Current));
	F1936_23178(Current, ti4_1);
	F1970_24029(Current);
	F1733_19652(Current);
	if ((EIF_BOOLEAN) (RTOUCB(EIF_INTEGER_32,269,F500_14112, (Current)) >= ((EIF_INTEGER_32) 262214L))) {
		ti4_1 = F1936_23175(Current);
		F1936_23178(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 32L)));
	}
	RTLE;
}

/* {EV_LIST_IMP}.selected_items */
EIF_REFERENCE F1991_24759 (EIF_REFERENCE Current)
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
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_61_20_)) {
		tr1 = F1991_24796(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_60_) = (EIF_REFERENCE) tr1;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_61_20_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	Result = F1_14(tr1);
	RTLE;
	return Result;
}

/* {EV_LIST_IMP}.clear_selection */
void F1991_24763 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_61_20_)) {
		tr1 = F1991_24796(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_60_) = (EIF_REFERENCE) tr1;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_61_20_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	F951_4104(RTCW(loc1));
	for (;;) {
		tb1 = F882_3332(RTCW(loc1));
		if (tb1) break;
		loc2 = F951_4078(RTCW(loc1));
		loc2 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_3_);
		loc2 = RTRV(eif_new_type(1958, 0x00), loc2);
		RTCT0("list_item_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1991_24781(Current, loc2);
		F951_4106(RTCW(loc1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2226[Dtype(RTCW(tr1))-950])(tr1);
	RTLE;
}

/* {EV_LIST_IMP}.enable_sensitive */
void F1991_24767 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1912_22467(Current)) {
		loc2 = *(EIF_REFERENCE *)(Current + _REFACS_59_);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			F951_4104(RTCW(loc2));
			for (;;) {
				tb1 = F852_3270(RTCW(loc2));
				if (tb1) break;
				loc1 = F951_4078(RTCW(loc2));
				loc1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
				loc1 = RTRV(eif_new_type(1958, 0x00), loc1);
				RTCT0("item_imp /= Void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_16_);
				if (F1716_19399(Current, tr1)) {
					F1991_24780(Current, loc1);
				}
				F951_4106(RTCW(loc2));
			}
			*(EIF_BOOLEAN *)(Current+ _CHROFF_61_20_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
		F1970_24060(Current);
		F1912_22563(Current);
		F1912_22562(Current);
	}
	RTLE;
}

/* {EV_LIST_IMP}.disable_sensitive */
void F1991_24768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (F1912_22467(Current)) {
		if ((EIF_BOOLEAN)(F1991_24759(Current) != NULL)) {
			tr1 = F1_14(F1991_24759(Current));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_59_) = (EIF_REFERENCE) tr1;
		}
		F1970_24059(Current);
		F1991_24763(Current);
		F1912_22563(Current);
		F1912_22562(Current);
	}
	RTLE;
}

/* {EV_LIST_IMP}.set_background_color */
void F1991_24769 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	*(EIF_REFERENCE *)(Current + _REFACS_56_) = (EIF_REFERENCE) loc1;
	F1936_23189(Current, loc1);
	if (F1912_22468(Current)) {
		F1912_22563(Current);
	}
	RTLE;
}

/* {EV_LIST_IMP}.set_foreground_color */
void F1991_24770 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	*(EIF_REFERENCE *)(Current + _REFACS_57_) = (EIF_REFERENCE) loc1;
	F1936_23190(Current, loc1);
	if (F1912_22468(Current)) {
		F1912_22563(Current);
	}
	RTLE;
}

/* {EV_LIST_IMP}.internal_propagate_pointer_press */
void F1991_24771 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
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
	loc1 = F1991_24786(Current, arg2, arg3);
	loc4 = F1970_24088(Current, arg2, arg3);
	tb1 = '\0';
	tb2 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = (EIF_BOOLEAN) !F1956_23717(Current);
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN) !F1969_23990(Current);
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F177_10618(RTCW(loc1));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,8,1475,1508,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 9, 1);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg2;
			ti4_1 = F1959_23799(RTCW(loc1));
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
		tb4 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_30_2_);
		tb3 = tb4;
	}
	if (tb3) {
		tb2 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_61_16_);
	}
	if (tb2) {
		tr1 = F1791_20211(RTCW(loc1));
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tb1) {
		ti4_1 = F1906_22336(RTCW(loc4));
		ti4_2 = F1906_22337(RTCW(loc4));
		F1957_23761(RTCW(loc1), arg2, arg3, arg4, ti4_1, ti4_2);
		tu1_1 = *(EIF_NATURAL_8 *)(RTCW(loc1)+ _CHROFF_30_9_);
		if ((EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 3U))) {
			F1912_22507(Current);
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_55_);
		loc5 = tr1;
		if (EIF_TEST(loc5)) {
			ti4_1 = F1906_22336(RTCW(loc4));
			ti4_2 = F1906_22337(RTCW(loc4));
			F1957_23761(loc5, arg2, arg3, arg4, ti4_1, ti4_2);
		}
	}
	if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_61_14_) == *(EIF_BOOLEAN *)(Current+ _CHROFF_61_17_))) {
		ti4_1 = F1906_22336(RTCW(loc4));
		ti4_2 = F1906_22337(RTCW(loc4));
		F1969_23985(Current, arg2, arg3, arg4, ti4_1, ti4_2);
		if ((EIF_BOOLEAN)(*(EIF_NATURAL_8 *)(Current+ _CHROFF_61_24_) == ((EIF_NATURAL_8) 3U))) {
			F1912_22507(Current);
		}
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_61_13_) && *(EIF_BOOLEAN *)(Current+ _CHROFF_61_15_))) {
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
	loc2 = F1991_24786(Current, arg2, arg3);
	if ((EIF_BOOLEAN) !loc3) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != NULL) && (EIF_BOOLEAN)(loc1 == loc2)) && *(EIF_BOOLEAN *)(Current+ _CHROFF_61_15_))) {
			tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_3_);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = F177_10618(RTCW(loc2));
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,8,1475,1508,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr2 = RTLNTS(typres0.id, 9, 1);
				}
				((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg2;
				ti4_1 = F1959_23799(RTCW(loc2));
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
	}
	F1969_24009(Current);
	RTLE;
}

/* {EV_LIST_IMP}.internal_propagate_pointer_double_press */
void F1991_24772 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
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
	loc1 = F1991_24786(Current, arg2, arg3);
	loc2 = F1970_24088(Current, arg2, arg3);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F177_10620(RTCW(loc1));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,8,1475,1508,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr2 = RTLNTS(typres0.id, 9, 1);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg2;
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
	}
	RTLE;
}

/* {EV_LIST_IMP}.set_pixmap_of_child */
void F1991_24773 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_27_);
	F1360_16253(RTCW(loc1), arg3);
	F1360_16247(RTCW(loc1), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	F1936_23196(Current, loc1);
	F1936_23179(Current, ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {EV_LIST_IMP}.insert_item */
void F1991_24775 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1359, 0x01).id, 1359, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F1360_16236(RTCW(loc1));
	tr1 = F1959_23782(RTCW(arg1));
	F1360_16251(RTCW(loc1), tr1);
	F1360_16247(RTCW(loc1), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	F1360_16253(RTCW(loc1), ((EIF_INTEGER_32) 0L));
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_27_);
	F1360_16247(RTCW(tr1), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	F1936_23195(Current, loc1);
	F1936_23179(Current, ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {EV_LIST_IMP}.refresh_item */
void F1991_24776 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_27_);
	F1936_23196(Current, tr1);
	F1936_23179(Current, ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {EV_LIST_IMP}.remove_item */
void F1991_24777 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
	loc1 = F852_3258(RTCW(tr1), arg1, ((EIF_INTEGER_32) 1L));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	F1936_23197(Current, loc1);
	F1936_23179(Current, ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {EV_LIST_IMP}.internal_get_index */
EIF_INTEGER_32 F1991_24778 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
	Result = F852_3258(RTCW(tr1), arg1, ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {EV_LIST_IMP}.internal_is_selected */
EIF_BOOLEAN F1991_24779 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
	loc1 = F852_3258(RTCW(tr1), arg1, ((EIF_INTEGER_32) 1L));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	ti4_1 = F1936_23170(Current, loc1, ((EIF_INTEGER_32) 2L));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTLE;
	return (EIF_BOOLEAN) F1258_14781(Current, loc1, ((EIF_INTEGER_32) 2L));
}

/* {EV_LIST_IMP}.internal_select_item */
void F1991_24780 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
	loc1 = F852_3258(RTCW(tr1), arg1, ((EIF_INTEGER_32) 1L));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	loc2 = RTLNS(eif_new_type(1359, 0x01).id, 1359, _OBJSIZ_1_1_0_0_0_1_0_0_);
	tr1 = RTMS_EX_H("",0,0);
	F1360_16237(RTCW(loc2), ((EIF_INTEGER_32) 8L), loc1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), tr1);
	F1360_16250(RTCW(loc2), (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) + ((EIF_INTEGER_32) 1L)));
	F1360_16257(RTCW(loc2), (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) + ((EIF_INTEGER_32) 1L)));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_61_27_6_12_0_0_);
	tp2 = (EIF_POINTER) (WPARAM)((loc1));
	tp3 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_1_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4139L), tp2, tp3);
	RTLE;
}

/* {EV_LIST_IMP}.internal_deselect_item */
void F1991_24781 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
	loc1 = F852_3258(RTCW(tr1), arg1, ((EIF_INTEGER_32) 1L));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	loc2 = RTLNS(eif_new_type(1359, 0x01).id, 1359, _OBJSIZ_1_1_0_0_0_1_0_0_);
	tr1 = RTMS_EX_H("",0,0);
	F1360_16237(RTCW(loc2), ((EIF_INTEGER_32) 8L), loc1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), tr1);
	F1360_16250(RTCW(loc2), ((EIF_INTEGER_32) 0L));
	F1360_16257(RTCW(loc2), (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) + ((EIF_INTEGER_32) 1L)));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_61_27_6_12_0_0_);
	tp2 = (EIF_POINTER) (WPARAM)((loc1));
	tp3 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_1_1_0_0_0_0_);
	inline_F67_9749(tp1, ((EIF_INTEGER_32) 4139L), tp2, tp3);
	RTLE;
}

/* {EV_LIST_IMP}.set_default_minimum_size */
void F1991_24782 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F1885_21699(RTCV(F1926_22911(Current)));
	ti4_1 = F1407_17202(RTCW(loc1));
	ti4_1 = eif_abs_int32 (ti4_1);
	ti4_2 = F1407_17200(RTCW(loc1));
	ti4_2 = eif_abs_int32 (ti4_2);
	F1724_19513(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 15L)) + ((EIF_INTEGER_32) 7L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 * ((EIF_INTEGER_32) 3L)) + ((EIF_INTEGER_32) 7L)), (EIF_BOOLEAN) 0);
	F1296_15104(RTCW(loc1));
	RTLE;
}

/* {EV_LIST_IMP}.wipe_out */
void F1991_24783 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
	F951_4104(RTCW(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
		tb1 = F736_2537(RTCW(tr1));
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
		loc1 = F951_4078(RTCW(tr1));
		F1959_23809(RTCW(loc1));
		tb2 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_36_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_36_);
			ti4_1 = F951_4094(RTCW(tr1));
			tb2 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_36_);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1669,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr2 = RTLNTS(typres0.id, 2, 0);
			}
			tr3 = F1696_18976(RTCW(loc1));
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		}
		F1959_23798(RTCW(loc1), NULL);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
		tr2 = F1696_18976(RTCW(loc1));
		tb2 = F951_4085(RTCW(tr1), tr2);
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = F155_10294(RTCW(loc1));
				F977_14409(RTCW(tr1), NULL);
			}
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
				tr1 = F138_10152(Current);
				F977_14409(RTCW(tr1), NULL);
			}
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
			tr2 = F1696_18976(RTCW(loc1));
			F951_4126(RTCW(tr1), tr2);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2263[Dtype(RTCW(tr1))-818])(tr1);
	}
	F1936_23198(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_61_27_6_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	F1936_23179(Current, ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {EV_LIST_IMP}.setup_image_list */
void F1991_24784 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = F1852_20974(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_61_27_6_5_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_61_27_6_6_));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_49_) = (EIF_REFERENCE) tr1;
	F1936_23187(Current, *(EIF_REFERENCE *)(Current + _REFACS_49_));
	RTLE;
}

/* {EV_LIST_IMP}.find_item_at_position */
EIF_REFERENCE F1991_24786 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_61_27_6_12_0_0_);
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
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
		ti4_1 = F1363_16336(RTCW(loc2));
		Result = F951_4080(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
	return Result;
}

/* {EV_LIST_IMP}.default_style */
static EIF_INTEGER_32 F1991_24787_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 411)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 268435456L) + ((EIF_INTEGER_32) 1073741824L)) + ((EIF_INTEGER_32) 131072L)) + ((EIF_INTEGER_32) 65536L)) + ((EIF_INTEGER_32) 8388608L)) + ((EIF_INTEGER_32) 33554432L)) + ((EIF_INTEGER_32) 8L)) + ((EIF_INTEGER_32) 16384L)) + ((EIF_INTEGER_32) 1L)) + ((EIF_INTEGER_32) 4L)) + ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 33554432L));
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1991_24787 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,411,F1991_24787_body,(Current));
}

/* {EV_LIST_IMP}.default_ex_style */
static EIF_INTEGER_32 F1991_24788_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 410)

	
	RTEV;
	RTGC;
	RTOTP;
	Result = eif_bit_or(((EIF_INTEGER_32) 1024L),((EIF_INTEGER_32) 65536L));
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1991_24788 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,410,F1991_24788_body,(Current));
}

/* {EV_LIST_IMP}.on_lvn_itemchanged */
void F1991_24789 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	if (F1912_22467(Current)) {
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
				*(EIF_BOOLEAN *)(Current+ _CHROFF_61_20_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
				ti4_1 = F1362_16317(RTCW(arg1));
				loc1 = F951_4080(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
				loc2 = F1696_18976(RTCW(loc1));
				tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
				if ((EIF_BOOLEAN)(tr1 != NULL)) {
					tr1 = F155_10292(RTCW(loc1));
					F977_14409(RTCW(tr1), NULL);
				}
				if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
					tr1 = F138_10151(Current);
					F977_14409(RTCW(tr1), NULL);
				}
			} else {
				tb1 = '\0';
				ti4_1 = F1362_16320(RTCW(arg1));
				if (F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 2L))) {
					ti4_1 = F1362_16319(RTCW(arg1));
					tb1 = (EIF_BOOLEAN) !F1258_14781(Current, ti4_1, ((EIF_INTEGER_32) 2L));
				}
				if (tb1) {
					*(EIF_BOOLEAN *)(Current+ _CHROFF_61_20_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
					ti4_1 = F1362_16317(RTCW(arg1));
					loc1 = F951_4080(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
					loc2 = F1696_18976(RTCW(loc1));
					tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
					if ((EIF_BOOLEAN)(tr1 != NULL)) {
						tr1 = F155_10294(RTCW(loc1));
						F977_14409(RTCW(tr1), NULL);
					}
					if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
						tr1 = F138_10152(Current);
						F977_14409(RTCW(tr1), NULL);
					}
				}
			}
		}
	}
	RTLE;
}

/* {EV_LIST_IMP}.on_key_down */
void F1991_24790 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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

/* {EV_LIST_IMP}.on_size */
void F1991_24791 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	{
		/* INLINED CODE (WEL_WINDOW.on_size) */
		/* END INLINED CODE */
	}
	;
	F1970_24130(Current, arg1, arg2, arg3);
	RTLE;
}

/* {EV_LIST_IMP}.on_mouse_move */
void F1991_24792 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	loc1 = F1991_24786(Current, arg2, arg3);
	loc2 = F1970_24088(Current, arg2, arg3);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F177_10616(RTCW(loc1));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,7,1475,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr2 = RTLNTS(typres0.id, 8, 1);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg2;
			ti4_1 = F1959_23799(RTCW(loc1));
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
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_55_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		ti4_1 = F1906_22336(RTCW(loc2));
		ti4_2 = F1906_22337(RTCW(loc2));
		F1956_23722(loc3, arg2, arg3, ti4_1, ti4_2);
	}
	F1970_24092(Current, arg1, arg2, arg3);
	RTLE;
}

/* {EV_LIST_IMP}.background_color_internal */
EIF_REFERENCE F1991_24793 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_56_);
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

/* {EV_LIST_IMP}.retrieve_selected_items */
EIF_REFERENCE F1991_24796 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc3);
	RTLR(3,loc4);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1669,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNSMART(typres0.id);
	}
	ti4_1 = F1936_23161(Current);
	F951_4073(RTCW(Result), ti4_1);
	loc3 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
	loc4 = F1936_23164(Current);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == F1936_23161(Current))) break;
		ti4_1 = F925_3192(RTCW(loc4), loc1);
		loc2 = F951_4080(RTCW(loc3), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		loc2 = (EIF_REFERENCE) loc2;
		tr1 = F1696_18976(RTCW(loc2));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(Result))-818])(Result, tr1);
		loc1++;
	}
	RTLE;
	return Result;
}

/* {EV_LIST_IMP}.destroy */
void F1991_24798 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1991_24783(Current);
	F1989_24676(Current);
	RTLE;
}

void EIF_Minit1974 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
