/*
 * Code for class EV_TREE_NODE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1944.h"
#include <windows.h>
#include "cctrl.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9748
static int inline_F67_9748 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (int) (SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4))
	;
}
#define INLINE_F67_9748
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TREE_NODE_IMP}.make */
void F1961_23845 (EIF_REFERENCE Current)
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
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1960,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 1L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_33_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1564, 1).id);
	F1564_6847(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_31_) = (EIF_REFERENCE) tr1;
	F1410_17386(Current);
	F1410_17398(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ((EIF_INTEGER_32) 8L)) + ((EIF_INTEGER_32) 16L)));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_35_7_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_35_13_6_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	F1410_17404(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_35_13_6_3_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_35_13_6_3_));
	F1721_19435(Current);
	{
		static EIF_TYPE_INDEX typarr0[] = {950,0xFF01,1960,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 1L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_32_) = (EIF_REFERENCE) tr1;
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_TREE_NODE_IMP}.parent_imp */
EIF_REFERENCE F1961_23846 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_34_);
}


/* {EV_TREE_NODE_IMP}.top_parent_imp */
EIF_REFERENCE F1961_23847 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	Result = F1793_20216(Current);
	RTLE;
	return RTRV(eif_new_type(1994, 0x00), Result);
}

/* {EV_TREE_NODE_IMP}.pixmap */
EIF_REFERENCE F1961_23848 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,loc4);
	RTLR(4,loc3);
	RTLR(5,loc2);
	RTLR(6,tr1);
	RTLIU(7);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_35_7_)) {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_22_) == NULL)) {
			Result = RTLNS(eif_new_type(1652, 0x01).id, 1652, _OBJSIZ_6_3_0_1_0_0_0_0_);
			F1596_17742(RTCW(Result));
			loc1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_3_);
			loc1 = RTRV(eif_new_type(1871, 0x00), loc1);
			RTCT0("pix_imp /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			loc4 = F1961_23847(Current);
			loc4 = RTRV(eif_new_type(1994, 0), loc4);
			RTCT0("l_top_parent_imp /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			loc3 = *(EIF_REFERENCE *)(RTCW(loc4) + O20034[Dtype(loc4)-1994]);
			RTCT0("image_list /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			loc2 = F1299_15130(RTCW(loc3), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_35_13_6_3_), ((EIF_INTEGER_32) 0L));
			tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_2_);
			ti4_1 = F1002_3929(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_35_13_6_3_));
			F1872_21387(RTCW(loc1), ti4_1);
			F519_14209(RTCW(loc2));
			F1872_21259(RTCW(loc1), loc2);
			F519_14210(RTCW(loc2));
		} else {
			Result = *(EIF_REFERENCE *)(Current + _REFACS_22_);
			RTLE;
			return (EIF_REFERENCE) Result;
		}
	}
	RTLE;
	return Result;
}

/* {EV_TREE_NODE_IMP}.is_selected */
EIF_BOOLEAN F1961_23849 (EIF_REFERENCE Current)
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
	tr1 = F1961_23847(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = F1931_23064(loc1, Current);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {EV_TREE_NODE_IMP}.ev_children */
EIF_REFERENCE F1961_23851 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_33_);
}


/* {EV_TREE_NODE_IMP}.is_parent */
EIF_BOOLEAN F1961_23852 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	tr1 = F1961_23847(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = F1931_23069(loc1, Current);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_32_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			Result = F736_2537(loc2);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
		} else {
		}
	}
	RTLE;
	return Result;
}

/* {EV_TREE_NODE_IMP}.set_parent_imp */
void F1961_23853 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTAR(Current, arg1);
		*(EIF_REFERENCE *)(Current + _REFACS_34_) = (EIF_REFERENCE) arg1;
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_34_) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {EV_TREE_NODE_IMP}.destroy */
void F1961_23854 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1958_23770(Current);
	*(EIF_REFERENCE *)(Current + _REFACS_32_) = (EIF_REFERENCE) NULL;
	RTLE;
}

/* {EV_TREE_NODE_IMP}.enable_select */
void F1961_23855 (EIF_REFERENCE Current)
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
	tr1 = F1961_23847(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1931_23079(loc1, Current);
	}
	RTLE;
}

/* {EV_TREE_NODE_IMP}.disable_select */
void F1961_23856 (EIF_REFERENCE Current)
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
	tr1 = F1961_23847(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1931_23080(loc1, Current);
	}
	RTLE;
}

/* {EV_TREE_NODE_IMP}.wel_text */
EIF_REFERENCE F1961_23858 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_31_);
	loc1 = tr1;
	if ((EIF_TRUE)) {
		tr1 = F1_14(loc1);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1558_6510(RTCW(tr1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

/* {EV_TREE_NODE_IMP}.wel_set_text */
void F1961_23861 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	tr1 = F1558_6569(RTCW(arg1));
	tr1 = F1_14(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_31_) = (EIF_REFERENCE) tr1;
	F1410_17398(Current, ((EIF_INTEGER_32) 1L));
	F1410_17400(Current, arg1);
	loc1 = F1961_23847(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1995_24957(RTCW(loc1), Current);
	}
	RTLE;
}

/* {EV_TREE_NODE_IMP}.x_position */
EIF_INTEGER_32 F1961_23862 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = F1793_20215(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = F1961_23864(Current);
		ti4_1 = F1614_18066(loc1);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	}
	RTLE;
	return Result;
}

/* {EV_TREE_NODE_IMP}.y_position */
EIF_INTEGER_32 F1961_23863 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = F1793_20215(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = F1961_23865(Current);
		ti4_1 = F1614_18067(loc1);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	}
	RTLE;
	return Result;
}

/* {EV_TREE_NODE_IMP}.screen_x */
EIF_INTEGER_32 F1961_23864 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1961_23897(Current);
	Result = F1408_17326(RTCV(RTOUCR(416,F1961_23896, (Current))));
	RTLE;
	return Result;
}

/* {EV_TREE_NODE_IMP}.screen_y */
EIF_INTEGER_32 F1961_23865 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1961_23897(Current);
	Result = F1408_17328(RTCV(RTOUCR(416,F1961_23896, (Current))));
	RTLE;
	return Result;
}

/* {EV_TREE_NODE_IMP}.width */
EIF_INTEGER_32 F1961_23866 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1961_23897(Current);
	Result = F1408_17332(RTCV(RTOUCR(416,F1961_23896, (Current))));
	RTLE;
	return Result;
}

/* {EV_TREE_NODE_IMP}.height */
EIF_INTEGER_32 F1961_23867 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1961_23897(Current);
	Result = F1408_17333(RTCV(RTOUCR(416,F1961_23896, (Current))));
	RTLE;
	return Result;
}

/* {EV_TREE_NODE_IMP}.minimum_width */
EIF_INTEGER_32 F1961_23868 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1961_23866(Current);
}

/* {EV_TREE_NODE_IMP}.minimum_height */
EIF_INTEGER_32 F1961_23869 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1961_23867(Current);
}

/* {EV_TREE_NODE_IMP}.find_item_at_position */
EIF_REFERENCE F1961_23872 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

/* {EV_TREE_NODE_IMP}.on_parented */
void F1961_23875 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(F1793_20215(Current) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
		loc1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O3095[Dtype(tr1)-950]);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
		F951_4104(RTCW(tr1));
		for (;;) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
			tb1 = F852_3270(RTCW(tr1));
			if (tb1) break;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
			tr1 = F951_4078(RTCW(tr1));
			F1961_23875(RTCW(tr1));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
			F951_4106(RTCW(tr1));
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
		F951_4108(RTCW(tr1), loc1);
		F1961_23882(Current);
	}
	RTLE;
}

/* {EV_TREE_NODE_IMP}.on_orphaned */
void F1961_23876 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_35_7_) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_22_) != NULL))) {
		tr1 = F1961_23848(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_22_) = (EIF_REFERENCE) tr1;
	}
	F1961_23877(Current);
	RTLE;
}

/* {EV_TREE_NODE_IMP}.remove_all_direct_references */
void F1961_23877 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
	loc1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O3095[Dtype(tr1)-950]);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
	F951_4104(RTCW(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
		tb1 = F852_3270(RTCW(tr1));
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
		tr1 = F951_4078(RTCW(tr1));
		F1961_23877(RTCW(tr1));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
		F951_4106(RTCW(tr1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
	F951_4108(RTCW(tr1), loc1);
	RTLE;
}

/* {EV_TREE_NODE_IMP}.set_pixmap */
void F1961_23880 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1596_17745(loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_22_) = (EIF_REFERENCE) NULL;
	}
	tr1 = F1_14(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_22_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_35_7_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if ((EIF_BOOLEAN)(F1961_23847(Current) != NULL)) {
		F1961_23882(Current);
	}
	RTLE;
}

/* {EV_TREE_NODE_IMP}.set_pixmap_in_parent */
void F1961_23882 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,loc4);
	RTLIU(6);
	
	RTGC;
	loc2 = F1961_23847(Current);
	RTCT0("root_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_35_7_)) {
		loc1 = *(EIF_REFERENCE *)(RTCW(loc2) + O20034[Dtype(loc2)-1994]);
		if ((EIF_BOOLEAN)(loc1 == NULL)) {
			F1995_24964(RTCW(loc2));
			loc1 = *(EIF_REFERENCE *)(RTCW(loc2) + O20034[Dtype(loc2)-1994]);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_22_);
		loc3 = tr1;
		loc4 = loc1;
		if ((EIF_BOOLEAN) (EIF_TEST(loc3) && EIF_TEST(loc4))) {
			F1300_15156(loc4, loc3);
			ti4_1 = *(EIF_INTEGER_32 *)(loc4+ _LNGOFF_4_3_0_3_);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_35_13_6_3_) = (EIF_INTEGER_32) ti4_1;
			F1596_17745(loc3);
			*(EIF_REFERENCE *)(Current + _REFACS_22_) = (EIF_REFERENCE) NULL;
		}
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_35_13_6_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	F1410_17404(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_35_13_6_3_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_35_13_6_3_));
	F1931_23093(RTCW(loc2), Current);
	RTLE;
}

/* {EV_TREE_NODE_IMP}.set_pnd_original_parent */
void F1961_23886 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = F1961_23847(Current);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_30_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {EV_TREE_NODE_IMP}.set_internal_children */
void F1961_23888 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_32_) = (EIF_REFERENCE) arg1;
}

/* {EV_TREE_NODE_IMP}.relative_position */
EIF_REFERENCE F1961_23889 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	loc1 = (EIF_REFERENCE) Current;
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == NULL)) break;
		loc1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_34_);
		loc1 = RTRV(eif_new_type(1960, 0x00), loc1);
		loc2++;
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	Result = (EIF_REFERENCE) tr1;
	loc3 = F1961_23847(Current);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		ti4_1 = F1931_23063(RTCW(loc3));
		
		eif_put_integer_32_item(RTCW(Result),1,(EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * loc2) + ((EIF_INTEGER_32) 1L)));
		
		eif_put_integer_32_item(RTCW(Result),2,((EIF_INTEGER_32) 0L));
	}
	RTLE;
	return Result;
}

/* {EV_TREE_NODE_IMP}.insert_item */
void F1961_23890 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	tr1 = F1961_23847(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
			tp1 = F1410_17390(Current);
			tp2 = (EIF_POINTER) TVI_FIRST;
			F1995_24950(loc1, arg1, tp1, tp2, arg2);
		} else {
			tp1 = F1410_17390(Current);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
			tr1 = F951_4080(RTCW(tr1), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
			tp2 = F1410_17390(RTCW(tr1));
			F1995_24950(loc1, arg1, tp1, tp2, arg2);
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_32_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			F951_4108(loc2, arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2707[Dtype(loc2)-950])(loc2, arg1);
		} else {
		}
	}
	RTLE;
}

/* {EV_TREE_NODE_IMP}.remove_item */
void F1961_23891 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	tr1 = F1961_23847(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1995_24951(loc1, arg1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_32_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2225[Dtype(loc2)-950])(loc2, arg1);
		} else {
		}
	}
	RTLE;
}

/* {EV_TREE_NODE_IMP}.bounds_rect */
static EIF_REFERENCE F1961_23896_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(416)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1408_17321(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1961_23896 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(416,F1961_23896_body,(Current));
}

/* {EV_TREE_NODE_IMP}.load_bounds_rect */
void F1961_23897 (EIF_REFERENCE Current)
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
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	loc3 = F1961_23847(Current);
	if ((EIF_BOOLEAN)(loc3 == NULL)) {
		tr1 = RTOUCR(416,F1961_23896, (Current));
		F1408_17334(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	} else {
		loc1 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1408_17321(RTCW(loc1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
		ti4_1 = (EIF_INTEGER_32) (rt_int_ptr) F1410_17390(Current);
		F1408_17335(RTCW(loc1), ti4_1);
		loc2 = F1793_20216(Current);
		RTCT0("l_parent_tree /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tp1 = *(EIF_POINTER *)(RTCW(loc3) + O12527[Dtype(loc3)-1295]);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 1L)));
		tp3 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_0_0_0_);
		if (EIF_TEST (inline_F67_9748(tp1, ((EIF_INTEGER_32) 4356L), tp2, tp3))) {
			tr1 = RTOUCR(416,F1961_23896, (Current));
			ti4_1 = F1970_24044(RTCW(loc2));
			ti4_2 = F1408_17326(RTCW(loc1));
			ti4_3 = F1970_24045(RTCW(loc2));
			ti4_4 = F1408_17328(RTCW(loc1));
			ti4_5 = F1970_24044(RTCW(loc2));
			ti4_6 = F1408_17330(RTCW(loc1));
			ti4_7 = F1970_24045(RTCW(loc2));
			ti4_8 = F1408_17331(RTCW(loc1));
			F1408_17334(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ti4_2), (EIF_INTEGER_32) (ti4_3 + ti4_4), (EIF_INTEGER_32) (ti4_5 + ti4_6), (EIF_INTEGER_32) (ti4_7 + ti4_8));
		} else {
			tr1 = RTOUCR(416,F1961_23896, (Current));
			F1408_17334(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
		}
	}
	RTLE;
}

void EIF_Minit1944 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
