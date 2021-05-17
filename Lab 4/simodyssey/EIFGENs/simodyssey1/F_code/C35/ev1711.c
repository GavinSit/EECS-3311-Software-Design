/*
 * Code for class EV_MENU_ITEM_LIST_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1711.h"
#include <windows.h>
#include <wel.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F470_13514
static EIF_POINTER inline_F470_13514 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER) (rt_uint_ptr) MAKELONG(arg1, arg2);
	;
}
#define INLINE_F470_13514
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MENU_ITEM_LIST_IMP}.make */
void F1722_19449 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,2010,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 2L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O16291[Dtype(Current)-1721]) = (EIF_REFERENCE) tr1;
	F1721_19435(Current);
	RTLE;
}

/* {EV_MENU_ITEM_LIST_IMP}.on_menu_char */
EIF_POINTER F1722_19450 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,loc4);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg2) + O12527[Dtype(arg2)-1295]);
	if ((EIF_BOOLEAN)(tp1 == *(EIF_POINTER *)(Current + O12527[dtype-1295]))) {
		loc1 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1564_6847(RTCW(loc1), ((EIF_INTEGER_32) 2L));
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '&';
		F1565_6952(RTCW(loc1), tw1);
		tw1 = (EIF_CHARACTER_32) arg1;
		F1565_6952(RTCW(loc1), tw1);
		F1565_6978(RTCW(loc1));
		tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
		loc4 = F951_4084(RTCW(tr1));
		tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
		F951_4104(RTCW(tr1));
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
			tb1 = F882_3332(RTCW(tr1));
			if (tb1) break;
			loc2 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
			loc2 = F951_4078(RTCW(loc2));
			loc2 = F2011_25468(RTCW(loc2));
			loc2 = F1_14(loc2);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				F1565_6978(RTCW(loc2));
				tb2 = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc2)+ _LNGOFF_1_1_0_2_);
				ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
					ti4_1 = F1564_6863(RTCW(loc2), loc1, ((EIF_INTEGER_32) 1L));
					tb2 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
				}
				if (tb2) {
					{
						/* INLINED CODE (ANY.default_pointer) */
						tp1 = (EIF_POINTER)  0;
						/* END INLINED CODE */
					}
					if ((EIF_BOOLEAN)(Result == tp1)) {
						Result = inline_F470_13514(loc3, ((EIF_INTEGER_32) 2L));
					} else {
						ti4_1 = (EIF_INTEGER_32) LOWORD((Result));
						tp1 = inline_F470_13514(ti4_1, ((EIF_INTEGER_32) 3L));
						Result = (EIF_POINTER) tp1;
					}
				}
			}
			tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
			F951_4106(RTCW(tr1));
			loc3++;
		}
		tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
		F951_4109(RTCW(tr1), loc4);
	} else {
		Result = F1722_19463(Current, arg1, arg2);
		RTLE;
		return (EIF_POINTER) Result;
	}
	RTLE;
	return Result;
}

/* {EV_MENU_ITEM_LIST_IMP}.rebuild_control */
void F1722_19451 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	for (;;) {
		if ((EIF_BOOLEAN) (F1316_15503(Current) <= ((EIF_INTEGER_32) 0L))) break;
		F1316_15498(Current, ((EIF_INTEGER_32) 0L));
	}
	tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
	F951_4104(RTCW(tr1));
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
		tb1 = F882_3332(RTCW(tr1));
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
		loc2 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O3095[Dtype(tr1)-950]);
		tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
		tr1 = F951_4078(RTCW(tr1));
		F1722_19455(Current, tr1, loc1);
		tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
		F951_4108(RTCW(tr1), loc2);
		tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
		F951_4106(RTCW(tr1));
		loc1++;
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16282[dtype-1730])(Current);
	RTLE;
}

/* {EV_MENU_ITEM_LIST_IMP}.ev_children */
EIF_REFERENCE F1722_19452 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O16291[Dtype(Current)-1721]);
}


/* {EV_MENU_ITEM_LIST_IMP}.insert_item */
void F1722_19454 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,arg1);
	RTLR(4,loc3);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
	F951_4108(RTCW(tr1), arg2);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(2012, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1722_19457(Current, loc1, arg2);
	} else {
		loc3 = arg1;
		loc3 = RTRV(eif_new_type(2010, 0x00), loc3);
		RTCT0("menu_item_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc2 = loc3;
		loc2 = RTRV(eif_new_type(2014, 0x00), loc2);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			F1722_19458(Current, loc2, arg2);
		} else {
			F1722_19459(Current, loc3, arg2);
		}
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(RTCW(loc3) + O20189[Dtype(loc3)-2010]);
		if (!(EIF_BOOLEAN) !tb2) {
			tb1 = (EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16286[dtype-1730])(Current);
		}
		if (tb1) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R16434[Dtype(RTCW(loc3))-1964])(loc3);
		}
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16282[dtype-1730])(Current);
	RTLE;
}

/* {EV_MENU_ITEM_LIST_IMP}.quick_insert_item */
void F1722_19455 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	loc4 = eif_bit_or(((EIF_INTEGER_32) 1024L),((EIF_INTEGER_32) 256L));
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(2012, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		ti4_1 = eif_bit_or(((EIF_INTEGER_32) 2048L),loc4);
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp2 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		tp3 = tp2;
		ti4_2 = F2011_25469(RTCW(loc1));
		tp4 = (EIF_POINTER) cwel_integer_to_pointer(((EIF_INTEGER) ti4_2));
		InsertMenu(((HMENU) tp1), ((UINT) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))), ((UINT) ti4_1), ((UINT_PTR) tp3), ((LPCTSTR) tp4));
	} else {
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1) + O20189[Dtype(arg1)-2010]);
		if (tb1) {
			ti4_1 = eif_bit_or(loc4,((EIF_INTEGER_32) 0L));
			loc4 = (EIF_INTEGER_32) ti4_1;
		} else {
			ti4_1 = eif_bit_or(loc4,((EIF_INTEGER_32) 1L));
			loc4 = (EIF_INTEGER_32) ti4_1;
		}
		loc2 = arg1;
		loc2 = RTRV(eif_new_type(2014, 0x00), loc2);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
			ti4_1 = eif_bit_or(((EIF_INTEGER_32) 16L),loc4);
			tp2 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_30_14_6_7_0_0_);
			ti4_2 = F2011_25469(RTCW(loc2));
			tp3 = (EIF_POINTER) cwel_integer_to_pointer(((EIF_INTEGER) ti4_2));
			InsertMenu(((HMENU) tp1), ((UINT) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))), ((UINT) ti4_1), ((UINT_PTR) tp2), ((LPCTSTR) tp3));
		} else {
			loc3 = arg1;
			loc3 = RTRV(eif_new_type(1896, 0x00), loc3);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R18323[Dtype(RTCW(loc3))-2011])(loc3);
				tb1 = tb2;
			}
			if (tb1) {
				ti4_1 = eif_bit_or(loc4,((EIF_INTEGER_32) 8L));
				loc4 = (EIF_INTEGER_32) ti4_1;
			}
			tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O10968[Dtype(arg1)-404]);
			tp2 = (EIF_POINTER) cwel_integer_to_pointer(((EIF_INTEGER) ti4_1));
			ti4_1 = F2011_25469(RTCW(arg1));
			tp3 = (EIF_POINTER) cwel_integer_to_pointer(((EIF_INTEGER) ti4_1));
			InsertMenu(((HMENU) tp1), ((UINT) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))), ((UINT) loc4), ((UINT_PTR) tp2), ((LPCTSTR) tp3));
		}
	}
	RTLE;
}

/* {EV_MENU_ITEM_LIST_IMP}.remove_item */
void F1722_19456 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,tr2);
	RTLR(8,loc6);
	RTLIU(9);
	
	RTGC;
	loc2 = arg1;
	loc2 = RTRV(eif_new_type(2010, 0x00), loc2);
	RTCT0("menu_item_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
	loc1 = F852_3258(RTCW(tr1), loc2, ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16286[dtype-1730])(Current)) {
		tb1 = *(EIF_BOOLEAN *)(RTCW(loc2) + O16430[Dtype(loc2)-1731]);
		if ((EIF_BOOLEAN) !tb1) {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R16433[Dtype(RTCW(loc2))-1964])(loc2);
		}
	}
	loc3 = arg1;
	loc3 = RTRV(eif_new_type(2012, 0x00), loc3);
	loc4 = arg1;
	loc4 = RTRV(eif_new_type(2013, 0x00), loc4);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != NULL) || (EIF_BOOLEAN)(loc4 != NULL))) {
		loc5 = *(EIF_REFERENCE *)(Current + O16277[dtype-1721]);
		tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
		F951_4104(RTCW(tr1));
		for (;;) {
			tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
			tr1 = F951_4078(RTCW(tr1));
			if ((EIF_BOOLEAN)(tr1 == loc2)) break;
			tr2 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
			loc3 = F951_4078(RTCW(tr2));
			loc3 = RTRV(eif_new_type(2012, 0x00), loc3);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				loc5 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_25_);
			}
			tr2 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
			F951_4106(RTCW(tr2));
		}
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			F1735_19665(RTCW(loc4));
		} else {
			loc3 = arg1;
			loc3 = RTRV(eif_new_type(2012, 0x00), loc3);
			RTCT0("sep_imp /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tr2 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_25_);
			loc6 = tr2;
			if (EIF_TEST(loc6)) {
				tb1 = F736_2537(loc6);
				if ((EIF_BOOLEAN) !tb1) {
					tr2 = F912_3519(loc6);
					F2014_25542(RTCW(tr2));
					F912_3534(loc6);
					for (;;) {
						tb1 = F736_2537(loc6);
						if (tb1) break;
						tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(loc6)-818])(loc6);
						ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_26_14_6_2_);
						F1316_15505(Current, ti4_1);
						tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(loc6)-818])(loc6);
						F1735_19664(RTCW(tr2), loc5);
					}
				}
				F2013_25534(RTCW(loc3));
			}
		}
	}
	F1316_15498(Current, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
	if ((EIF_BOOLEAN)(F1316_15503(Current) == ((EIF_INTEGER_32) 0L))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R16282[dtype-1730])(Current);
	}
	RTLE;
}

/* {EV_MENU_ITEM_LIST_IMP}.insert_separator_item */
void F1722_19457 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,arg1);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
	F951_4108(RTCW(tr1), (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)));
	for (;;) {
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
		tb2 = F882_3332(RTCW(tr1));
		if (!tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
			tr1 = F951_4078(RTCW(tr1));
			tb1 = F1722_19461(Current, tr1);
		}
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
		loc1 = F951_4078(RTCW(tr1));
		loc1 = RTRV(eif_new_type(2013, 0x00), loc1);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			if ((EIF_BOOLEAN)(loc2 == NULL)) {
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,911,0xFF01,2013,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
					loc2 = RTLNS(typres0.id, 911, _OBJSIZ_2_3_0_1_0_0_0_0_);
				}
				F912_3515(RTCW(loc2));
			} else {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_26_14_6_2_);
				F1316_15505(Current, ti4_1);
				F2014_25541(RTCW(loc1));
			}
			F1735_19664(RTCW(loc1), loc2);
		}
		tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
		F951_4106(RTCW(tr1));
	}
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		F2013_25533(RTCW(arg1), loc2);
	}
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 2048L),((EIF_INTEGER_32) 1024L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 256L));
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp3 = tp2;
	ti4_2 = F2011_25469(RTCW(arg1));
	tp4 = (EIF_POINTER) cwel_integer_to_pointer(((EIF_INTEGER) ti4_2));
	InsertMenu(((HMENU) tp1), ((UINT) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))), ((UINT) ti4_1), ((UINT_PTR) tp3), ((LPCTSTR) tp4));
	RTLE;
}

/* {EV_MENU_ITEM_LIST_IMP}.insert_menu */
void F1722_19458 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 16L),((EIF_INTEGER_32) 1024L));
	loc1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 256L));
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_30_14_6_7_0_0_);
	ti4_1 = F2011_25469(RTCW(arg1));
	tp3 = (EIF_POINTER) cwel_integer_to_pointer(((EIF_INTEGER) ti4_1));
	InsertMenu(((HMENU) tp1), ((UINT) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))), ((UINT) loc1), ((UINT_PTR) tp2), ((LPCTSTR) tp3));
	RTLE;
}

/* {EV_MENU_ITEM_LIST_IMP}.insert_menu_item */
void F1722_19459 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
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
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 1024L),((EIF_INTEGER_32) 256L));
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O10968[Dtype(arg1)-404]);
	tp2 = (EIF_POINTER) cwel_integer_to_pointer(((EIF_INTEGER) ti4_2));
	ti4_2 = F2011_25469(RTCW(arg1));
	tp3 = (EIF_POINTER) cwel_integer_to_pointer(((EIF_INTEGER) ti4_2));
	InsertMenu(((HMENU) tp1), ((UINT) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))), ((UINT) ti4_1), ((UINT_PTR) tp2), ((LPCTSTR) tp3));
	loc2 = arg1;
	loc2 = RTRV(eif_new_type(2013, 0x00), loc2);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		loc1 = F1722_19462(Current, arg2);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_25_);
			if ((EIF_BOOLEAN)(tr1 == NULL)) {
				F2013_25532(RTCW(loc1));
				F2014_25542(RTCW(loc2));
			} else {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc2)+ _LNGOFF_26_14_6_2_);
				F1316_15505(Current, ti4_1);
				F2014_25541(RTCW(loc2));
			}
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_25_);
			F1735_19664(RTCW(loc2), tr1);
		} else {
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O16277[dtype-1721]) == NULL)) {
				{
					static EIF_TYPE_INDEX typarr0[] = {911,0xFF01,2013,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
					tr1 = RTLNSMART(typres0.id);
				}
				F912_3515(RTCW(tr1));
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + O16277[dtype-1721]) = (EIF_REFERENCE) tr1;
				F2014_25542(RTCW(loc2));
			}
			tr1 = F1735_19662(RTCW(loc2));
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				F2014_25541(RTCW(loc2));
			}
			F1735_19664(RTCW(loc2), *(EIF_REFERENCE *)(Current + O16277[dtype-1721]));
		}
	}
	loc3 = arg1;
	loc3 = RTRV(eif_new_type(2011, 0x00), loc3);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		tb1 = *(EIF_BOOLEAN *)(RTCW(loc3)+ _CHROFF_25_8_);
		if (tb1) {
			F2012_25526(RTCW(loc3));
		}
	}
	RTLE;
}

/* {EV_MENU_ITEM_LIST_IMP}.is_menu_separator_imp */
EIF_BOOLEAN F1722_19461 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(2012, 0x01),loc1);
	Result = (EIF_BOOLEAN) EIF_TEST(loc1);
	return Result;
}

/* {EV_MENU_ITEM_LIST_IMP}.separator_imp_by_index */
EIF_REFERENCE F1722_19462 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
	F951_4104(RTCW(tr1));
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
		tb2 = F852_3270(RTCW(tr1));
		if (!tb2) {
			tb1 = (EIF_BOOLEAN)(arg1 == loc1);
		}
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
		loc2 = F951_4078(RTCW(tr1));
		loc2 = RTRV(eif_new_type(2012, 0x00), loc2);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			Result = (EIF_REFERENCE) loc2;
		}
		tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
		F951_4106(RTCW(tr1));
		loc1++;
	}
	RTLE;
	return Result;
}

/* {EV_MENU_ITEM_LIST_IMP}.propagate_on_menu_char */
EIF_POINTER F1722_19463 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,arg2);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
	loc2 = F951_4084(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
	F951_4104(RTCW(tr1));
	for (;;) {
		tb1 = '\01';
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		if (!(EIF_BOOLEAN)(Result != tp1)) {
			tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
			tb2 = F882_3332(RTCW(tr1));
			tb1 = tb2;
		}
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
		loc1 = F951_4078(RTCW(tr1));
		loc1 = RTRV(eif_new_type(2014, 0x00), loc1);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			Result = F1722_19450(RTCW(loc1), arg1, arg2);
		}
		tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
		F951_4106(RTCW(tr1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + O16291[dtype-1721]);
	F951_4109(RTCW(tr1), loc2);
	RTLE;
	return Result;
}

/* {EV_MENU_ITEM_LIST_IMP}.internal_replace */
void F1722_19465 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	F1316_15498(Current, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	F1722_19455(Current, arg1, arg2);
	tr1 = *(EIF_REFERENCE *)(Current + O16291[Dtype(Current)-1721]);
	F951_4108(RTCW(tr1), arg2);
	RTLE;
}

/* {EV_MENU_ITEM_LIST_IMP}.menu_opened */
void F1722_19466 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,loc1);
	RTLIU(8);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,1475,0xFF01,0,0xFF01,1315,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 3, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	((EIF_TYPED_VALUE *)tr1+2)->it_r = arg1;
	RTAR(tr1,arg1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1556,0xFF01,0xFFF9,1,1475,0xFF01,2010,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4= RTLNRF(typres0.id, (EIF_POINTER) __A1711_245_2, (EIF_POINTER) _A1711_245_2, (EIF_POINTER)(0),tr1, 1, 1);
	}
	loc2 = (EIF_REFERENCE) tr4;
	loc1 = F1722_19468(Current, loc2);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + O9239[Dtype(loc1)-220]);
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tb1) {
		tr1 = F221_11463(RTCW(loc1));
		F977_14409(RTCW(tr1), NULL);
	}
	RTLE;
}

/* {EV_MENU_ITEM_LIST_IMP}.menu_item_clicked */
void F1722_19467 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,loc1);
	RTLIU(7);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,1475,0xFF01,0,1508,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 3, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg1;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1556,0xFF01,0xFFF9,1,1475,0xFF01,2010,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4= RTLNRF(typres0.id, (EIF_POINTER) __A1711_244_2, (EIF_POINTER) _A1711_244_2, (EIF_POINTER)(0),tr1, 1, 1);
	}
	loc2 = (EIF_REFERENCE) tr4;
	loc1 = F1722_19468(Current, loc2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R20182[Dtype(RTCW(loc1))-2010])(loc1);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O8429[dtype-182]) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + O8429[dtype-182]);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1676,0xFFFF};
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
	RTLE;
}

/* {EV_MENU_ITEM_LIST_IMP}.menu_item_from_comparator */
EIF_REFERENCE F1722_19468 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,arg1);
	RTLR(5,Result);
	RTLIU(6);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc2 = F1717_19424(Current);
	for (;;) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result != NULL) || (EIF_BOOLEAN) (loc1 > loc2))) break;
		tr1 = *(EIF_REFERENCE *)(Current + O16291[Dtype(Current)-1721]);
		loc4 = F951_4080(RTCW(tr1), loc1);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			loc3 = loc4;
			loc3 = RTRV(eif_new_type(2014, 0x00), loc3);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				Result = F1722_19468(RTCW(loc3), arg1);
			}
			tb1 = '\0';
			if ((EIF_BOOLEAN)(Result == NULL)) {
				tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_3_0_3_0_0_))(
					*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_3_0_3_0_1_),
					*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), loc4);
				tb2 = tb2;
				tb1 = tb2;
			}
			if (tb1) {
				Result = (EIF_REFERENCE) loc4;
			}
		}
		loc1++;
	}
	RTLE;
	return Result;
}

/* {EV_MENU_ITEM_LIST_IMP}.inline-agent#1 of menu_item_clicked */
EIF_BOOLEAN F1722_25846 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O10968[Dtype(arg1)-404]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg2);
	RTLE;
	return Result;
}

/* {EV_MENU_ITEM_LIST_IMP}.inline-agent#1 of menu_opened */
EIF_BOOLEAN F1722_25847 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTGC;
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(2014, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_30_14_6_7_0_0_);
		tp2 = *(EIF_POINTER *)(RTCW(arg2) + O12527[Dtype(arg2)-1295]);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tp1 == tp2);
	}
	RTLE;
	return Result;
}

void EIF_Minit1711 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
