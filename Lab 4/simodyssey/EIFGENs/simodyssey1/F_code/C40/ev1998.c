/*
 * Code for class EV_MENU_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1998.h"
#include <windows.h>
#include <wel.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9739
static EIF_INTEGER_32 inline_F67_9739 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	return (EIF_INTEGER_32) (GetMenuItemRect((HWND) arg1, (HMENU) arg2, (UINT) arg3, (RECT *) arg4))
	;
}
#define INLINE_F67_9739
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MENU_IMP}.make */
void F2015_25547 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
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
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 2L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_18_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {911,0xFF01,2013,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F912_3515(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_17_) = (EIF_REFERENCE) tr1;
	F1722_19449(Current);
	F1316_15484(Current);
	F405_13268(Current);
	F2011_25467(Current);
	RTLE;
}

/* {EV_MENU_IMP}.disable_sensitive */
void F2015_25548 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_30_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	F2015_25551(Current, (EIF_BOOLEAN) 1);
	tb1 = '\0';
	if (F2015_25556(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		ti4_1 = F1716_19394(loc2, *(EIF_REFERENCE *)(Current + _REFACS_14_), ((EIF_INTEGER_32) 1L));
		F1316_15509(loc2, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
		loc1 = loc2;
		loc1 = RTRV(eif_new_type(1730, 0x00), loc1);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_6_);
			loc3 = tr1;
			if (EIF_TEST(loc3)) {
				F1913_22727(loc3);
			}
		}
	}
	RTLE;
}

/* {EV_MENU_IMP}.enable_sensitive */
void F2015_25549 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_30_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F2015_25551(Current, (EIF_BOOLEAN) 0);
	tb1 = '\0';
	if (F2015_25556(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		ti4_1 = F1716_19394(loc2, *(EIF_REFERENCE *)(Current + _REFACS_14_), ((EIF_INTEGER_32) 1L));
		F1316_15507(loc2, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
		loc1 = loc2;
		loc1 = RTRV(eif_new_type(1730, 0x00), loc1);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_6_);
			loc3 = tr1;
			if (EIF_TEST(loc3)) {
				F1913_22727(loc3);
			}
		}
	}
	RTLE;
}

/* {EV_MENU_IMP}.set_insensitive */
void F2015_25551 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
	tb1 = F736_2537(RTCW(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
		loc3 = F951_4084(RTCW(loc1));
		F951_4104(RTCW(loc1));
		for (;;) {
			tb1 = F882_3332(RTCW(loc1));
			if (tb1) break;
			loc2 = F951_4078(RTCW(loc1));
			if (arg1) {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R16434[Dtype(RTCW(loc2))-1964])(loc2);
			} else {
				tb2 = *(EIF_BOOLEAN *)(RTCW(loc2) + O16430[Dtype(loc2)-1731]);
				if ((EIF_BOOLEAN) !tb2) {
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R16433[Dtype(RTCW(loc2))-1964])(loc2);
				}
			}
			F951_4106(RTCW(loc1));
		}
		F951_4109(RTCW(loc1), loc3);
	}
	RTLE;
}

/* {EV_MENU_IMP}.show_at */
void F2015_25552 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN) (F1717_19424(Current) > ((EIF_INTEGER_32) 0L))) {
		loc1 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1906_22334(RTCW(loc1), arg2, arg3);
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			loc2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
			loc2 = RTRV(eif_new_type(1911, 0x00), loc2);
		}
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			F1906_22344(RTCW(loc1), loc2);
		} else {
			loc2 = F1906_22342(RTCW(loc1));
			loc2 = RTRV(eif_new_type(1911, 0x00), loc2);
		}
		loc3 = RTLNS(eif_new_type(1920, 0x01).id, 1920, _OBJSIZ_8_2_0_3_0_2_0_0_);
		F1921_22851(RTCW(loc3), Current, loc2);
		ti4_1 = F1906_22336(RTCW(loc1));
		ti4_2 = F1906_22337(RTCW(loc1));
		F1316_15501(Current, ti4_1, ti4_2, loc3);
		F1913_22726(RTCW(loc3));
	}
	RTLE;
}

/* {EV_MENU_IMP}.on_measure_menu_item */
void F2015_25553 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLR(4,loc10);
	RTLR(5,arg1);
	RTLIU(6);
	
	RTGC;
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	tr1 = F502_14140(Current);
	tr2 = RTMS_EX_H("o",1,111);
	loc6 = F1885_21703(RTCW(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
	F951_4104(RTCW(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
		tb1 = F882_3332(RTCW(tr1));
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
		loc1 = F951_4078(RTCW(tr1));
		tr1 = F502_14140(Current);
		tr2 = F2011_25496(RTCW(loc1));
		ti4_1 = F1885_21703(RTCW(tr1), tr2);
		ti4_1 = eif_max_int32 (loc2,ti4_1);
		loc2 = (EIF_INTEGER_32) ti4_1;
		tr1 = F502_14140(Current);
		tr2 = F2011_25497(RTCW(loc1));
		ti4_1 = F1885_21703(RTCW(tr1), tr2);
		ti4_1 = eif_max_int32 (loc3,ti4_1);
		loc3 = (EIF_INTEGER_32) ti4_1;
		tr1 = F1743_19689(RTCW(loc1));
		loc10 = tr1;
		if (EIF_TEST(loc10)) {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11093[Dtype(loc10)-1871])(loc10);
			ti4_1 = eif_max_int32 (loc4,ti4_1);
			loc4 = (EIF_INTEGER_32) ti4_1;
		}
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R20171[Dtype(RTCW(loc1))-2010])(loc1);
		ti4_1 = eif_max_int32 (loc5,ti4_1);
		loc5 = (EIF_INTEGER_32) ti4_1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
		F951_4106(RTCW(tr1));
	}
	loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 6L));
	if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
		loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + loc2);
	} else {
		loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 + loc2) + loc6);
		loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 + loc3);
	}
	F1398_16967(RTCW(arg1), (EIF_INTEGER_32) (loc7 + loc6));
	F1398_16968(RTCW(arg1), loc5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
	F951_4104(RTCW(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
		tb2 = F882_3332(RTCW(tr1));
		if (tb2) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
		tr1 = F951_4078(RTCW(tr1));
		F2011_25500(RTCW(tr1), loc8);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
		tr1 = F951_4078(RTCW(tr1));
		F2011_25499(RTCW(tr1), loc9);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
		F951_4106(RTCW(tr1));
	}
	RTLE;
}

/* {EV_MENU_IMP}.update_parent_size */
void F2015_25554 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_MENU_IMP}.wel_set_text */
void F2015_25555 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,loc4);
	RTLIU(7);
	
	RTGC;
	tr1 = F1558_6569(RTCW(arg1));
	tr1 = F1_14(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_28_) = (EIF_REFERENCE) tr1;
	tb1 = '\0';
	if (F2015_25556(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
		loc3 = tr1;
		tb1 = EIF_TEST(loc3);
	}
	if (tb1) {
		loc1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F944_3738(RTCW(loc1), arg1);
		tr1 = F1696_18976(loc3);
		tr2 = F1696_18976(Current);
		loc2 = F1630_18250(RTCW(tr1), tr2, ((EIF_INTEGER_32) 1L));
		tp1 = *(EIF_POINTER *)(loc3 + O12527[Dtype(loc3)-1295]);
		tp2 = *(EIF_POINTER *)(Current+ _PTROFF_30_14_6_7_0_0_);
		tp3 = F944_3745(RTCW(loc1));
		ModifyMenu(((HMENU) tp1), ((UINT) (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))), ((UINT) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 1024L) + ((EIF_INTEGER_32) 0L)) + ((EIF_INTEGER_32) 16L))), ((UINT_PTR) tp2), ((LPCTSTR) tp3));
		tr1 = F2011_25494(Current);
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			tp1 = *(EIF_POINTER *)(loc4 + O12527[Dtype(loc4)-1295]);
			DrawMenuBar(((HWND) tp1));
		}
	}
	RTLE;
}

/* {EV_MENU_IMP}.has_parent */
EIF_BOOLEAN F2015_25556 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_29_) != NULL);
}

/* {EV_MENU_IMP}.find_item_at_position */
EIF_REFERENCE F2015_25560 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

/* {EV_MENU_IMP}.dispose */
void F2015_25564 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F2011_25493(Current);
	F1296_15104(Current);
	RTLE;
}

/* {EV_MENU_IMP}.destroy */
void F2015_25565 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1630_18277(RTCV(F1696_18976(Current)));
	F1958_23770(Current);
	F1316_15519(Current);
	RTLE;
}

/* {EV_MENU_IMP}.load_bounds_rect */
void F2015_25566 (EIF_REFERENCE Current)
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
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
	loc1 = RTRV(eif_new_type(1730, 0x00), loc1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_6_);
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		tp1 = *(EIF_POINTER *)(loc2 + O12527[Dtype(loc2)-1295]);
		tp2 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_7_2_0_1_0_0_);
		ti4_1 = F1716_19394(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_14_), ((EIF_INTEGER_32) 1L));
		tp3 = *(EIF_POINTER *)(RTCV(RTOUCR(265,F2011_25521, (Current)))+ _PTROFF_0_1_0_0_0_0_);
		if ((EIF_BOOLEAN)(inline_F67_9739(tp1, tp2, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), tp3) == ((EIF_INTEGER_32) 0L))) {
			tr1 = RTOUCR(265,F2011_25521, (Current));
			F1408_17334(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
		}
	} else {
		F2011_25522(Current);
	}
	RTLE;
}

void EIF_Minit1998 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
