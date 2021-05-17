/*
 * Code for class EV_BOX_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1957.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_BOX_IMP}.make */
void F1974_24281 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLIU(6);
	
	RTGC;
	F1925_22879(Current);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1969,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 2L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_63_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_64_19_) = (EIF_BOOLEAN) EIF_FALSE;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_11_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	F1971_24161(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
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
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1631,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1957_1811_2, (EIF_POINTER) _A1957_1811_2, (EIF_POINTER)(F1974_24295),tr2, 1, 1);
	}
	F969_4172(RTCW(tr1), tr5);
	tr1 = F222_11465(Current);
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
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1631,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1957_1812_2, (EIF_POINTER) _A1957_1812_2, (EIF_POINTER)(F1974_24296),tr2, 1, 1);
	}
	F969_4172(RTCW(tr1), tr5);
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_BOX_IMP}.client_width */
EIF_INTEGER_32 F1974_24282 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (F1970_24049(Current)) {
		ti4_1 = F1408_17332(RTCV(F1912_22490(Current)));
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_);
		Result = eif_max_int32 ((EIF_INTEGER_32) (ti4_1 - (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_2)),((EIF_INTEGER_32) 0L));
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_2_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_);
		Result = eif_max_int32 ((EIF_INTEGER_32) (ti4_1 - (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_2)),((EIF_INTEGER_32) 0L));
	}
	RTLE;
	return Result;
}

/* {EV_BOX_IMP}.client_height */
EIF_INTEGER_32 F1974_24283 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (F1970_24049(Current)) {
		ti4_1 = F1408_17333(RTCV(F1912_22490(Current)));
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_);
		Result = eif_max_int32 ((EIF_INTEGER_32) (ti4_1 - (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_2)),((EIF_INTEGER_32) 0L));
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_4_0_3_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_);
		Result = eif_max_int32 ((EIF_INTEGER_32) (ti4_1 - (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_2)),((EIF_INTEGER_32) 0L));
	}
	RTLE;
	return Result;
}

/* {EV_BOX_IMP}.is_homogeneous */
EIF_BOOLEAN F1974_24284 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_64_19_);
}


/* {EV_BOX_IMP}.padding */
EIF_INTEGER_32 F1974_24285 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_11_);
}


/* {EV_BOX_IMP}.border_width */
EIF_INTEGER_32 F1974_24286 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_);
}


/* {EV_BOX_IMP}.total_spacing */
EIF_INTEGER_32 F1974_24287 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_11_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_8_);
	ti4_1 = eif_max_int32 ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)),((EIF_INTEGER_32) 0L));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result * ti4_1);
	RTLE;
	return Result;
}

/* {EV_BOX_IMP}.compute_childexpand_nb */
void F1974_24289 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_9_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_8_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		loc1 = F957_4084(loc2);
		F957_4104(loc2);
		for (;;) {
			tb1 = F858_3270(loc2);
			if (tb1) break;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_63_);
			ti4_1 = F957_4078(loc2);
			tr1 = F951_4079(RTCW(tr1), ti4_1);
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[Dtype(RTCW(tr1))-1871])(tr1);
			if (tb2) {
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_9_))--;
			}
			F957_4106(loc2);
		}
		F957_4109(loc2, loc1);
	}
	RTLE;
}

/* {EV_BOX_IMP}.is_item_expanded */
EIF_BOOLEAN F1974_24292 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,arg1);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		loc1 = RTRV(eif_new_type(1969, 0x00), loc1);
		RTCT0("valid_cast", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_63_);
		ti4_1 = F852_3258(RTCW(tr1), loc1, ((EIF_INTEGER_32) 1L));
		Result = F957_4085(RTCW(loc2), ti4_1);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	}
	RTLE;
	return Result;
}

/* {EV_BOX_IMP}.set_child_expandable */
void F1974_24293 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc6);
	RTLR(5,loc1);
	RTLIU(6);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc2 = RTRV(eif_new_type(1969, 0x00), loc2);
	RTCT0("valid_cast", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_63_);
	loc4 = F852_3258(RTCW(tr1), loc2, ((EIF_INTEGER_32) 1L));
	loc6 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	if (arg2) {
		if ((EIF_BOOLEAN)(loc6 != NULL)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2225[Dtype(RTCW(loc6))-950])(loc6, (EIF_REFERENCE) &loc4);
			tb1 = F744_2537(RTCW(loc6));
			if (tb1) {
				loc6 = (EIF_REFERENCE) NULL;
				*(EIF_REFERENCE *)(Current + _REFACS_61_) = (EIF_REFERENCE) NULL;
			}
		}
	} else {
		if ((EIF_BOOLEAN)(loc6 == NULL)) {
			{
				static EIF_TYPE_INDEX typarr0[] = {956,1508,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				loc6 = RTLNSMART(typres0.id);
			}
			F957_4073(RTCW(loc6), ((EIF_INTEGER_32) 1L));
			RTAR(Current, loc6);
			*(EIF_REFERENCE *)(Current + _REFACS_61_) = (EIF_REFERENCE) loc6;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(loc6))-818])(loc6, (EIF_REFERENCE) &loc4);
		} else {
			loc1 = (EIF_REFERENCE) loc6;
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			F957_4104(RTCW(loc1));
			for (;;) {
				if (loc5) break;
				tb1 = F888_3332(RTCW(loc1));
				if (tb1) {
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(loc1))-818])(loc1, (EIF_REFERENCE) &loc4);
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					loc3 = F957_4078(RTCW(loc1));
					if ((EIF_BOOLEAN) (loc4 < loc3)) {
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2707[Dtype(RTCW(loc1))-950])(loc1, (EIF_REFERENCE) &loc4);
						loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					} else {
						if ((EIF_BOOLEAN) (loc4 > loc3)) {
							F957_4106(RTCW(loc1));
						} else {
							loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						}
					}
				}
			}
		}
	}
	F1725_19528(Current, ((EIF_INTEGER_32) 3L), Current, (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_BOX_IMP}.removed_so_update_non_expandable_children */
void F1974_24295 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(1969, 0x00), loc1);
	RTCT0("child_implementation_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_63_);
	loc2 = F852_3258(RTCW(tr1), loc1, ((EIF_INTEGER_32) 1L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2225[Dtype(loc3)-950])(loc3, (EIF_REFERENCE) &loc2);
		tb1 = F744_2537(loc3);
		if (tb1) {
			*(EIF_REFERENCE *)(Current + _REFACS_61_) = (EIF_REFERENCE) NULL;
		} else {
			F957_4104(loc3);
			for (;;) {
				tb1 = F858_3270(loc3);
				if (tb1) break;
				ti4_1 = F957_4078(loc3);
				if ((EIF_BOOLEAN) (loc2 < ti4_1)) {
					ti4_1 = F957_4078(loc3);
					ti4_2 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2262[Dtype(loc3)-911])(loc3, (EIF_REFERENCE) &ti4_2);
				}
				F957_4106(loc3);
			}
		}
	}
	RTLE;
}

/* {EV_BOX_IMP}.added_so_update_non_expandable_children */
void F1974_24296 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(1969, 0x00), loc1);
	RTCT0("child_implementation_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_63_);
	loc2 = F852_3258(RTCW(tr1), loc1, ((EIF_INTEGER_32) 1L));
	loc3 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		F957_4104(RTCW(loc3));
		for (;;) {
			tb1 = F858_3270(RTCW(loc3));
			if (tb1) break;
			ti4_1 = F957_4078(RTCW(loc3));
			if ((EIF_BOOLEAN) (ti4_1 >= loc2)) {
				ti4_1 = F957_4078(RTCW(loc3));
				ti4_2 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2262[Dtype(RTCW(loc3))-911])(loc3, (EIF_REFERENCE) &ti4_2);
			}
			F957_4106(RTCW(loc3));
		}
	}
	RTLE;
}

/* {EV_BOX_IMP}.rest */
EIF_INTEGER_32 F1974_24297 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
			return (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		} else {
			return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
	}/* NOTREACHED */
	
}

/* {EV_BOX_IMP}.ev_children */
EIF_REFERENCE F1974_24298 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_63_);
}


/* {EV_BOX_IMP}.top_level_window_imp */
EIF_REFERENCE F1974_24299 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_51_);
}


/* {EV_BOX_IMP}.set_insensitive */
void F1974_24300 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_63_);
	tb1 = F736_2537(RTCW(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_63_);
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

/* {EV_BOX_IMP}.enable_sensitive */
void F1974_24301 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1974_24300(Current, (EIF_BOOLEAN) 0);
	F1970_24060(Current);
	RTLE;
}

/* {EV_BOX_IMP}.disable_sensitive */
void F1974_24302 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1974_24300(Current, (EIF_BOOLEAN) 1);
	F1970_24059(Current);
	RTLE;
}

/* {EV_BOX_IMP}.set_top_level_window_imp */
void F1974_24303 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_51_) = (EIF_REFERENCE) arg1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_63_);
	tb1 = F736_2537(RTCW(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_63_);
		F951_4104(RTCW(loc1));
		for (;;) {
			tb1 = F882_3332(RTCW(loc1));
			if (tb1) break;
			tr1 = F951_4078(RTCW(loc1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19735[Dtype(RTCW(tr1))-1972])(tr1, arg1);
			F951_4106(RTCW(loc1));
		}
	}
	RTLE;
}

/* {EV_BOX_IMP}.set_item_size */
void F1974_24306 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	RTLIU(1);
	
	RTGC;
	if (arg6) {
		F1723_19483(RTCW(arg1), arg2, arg3, arg4, arg5);
	} else {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_BOOLEAN)) R16318[Dtype(RTCW(arg1))-1972])(arg1, arg2, arg3, arg4, arg5, (EIF_BOOLEAN) 1);
	}
	RTLE;
}

void EIF_Minit1957 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
