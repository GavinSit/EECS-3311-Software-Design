/*
 * Code for class EV_VERTICAL_BOX_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1958.h"
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

/* {EV_VERTICAL_BOX_IMP}.set_homogeneous */
void F1975_24309 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_64_19_) = (EIF_BOOLEAN) arg1;
	F1725_19528(Current, ((EIF_INTEGER_32) 2L), Current, (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_VERTICAL_BOX_IMP}.set_padding */
void F1975_24310 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_11_) = (EIF_INTEGER_32) arg1;
	F1725_19528(Current, ((EIF_INTEGER_32) 2L), Current, (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_VERTICAL_BOX_IMP}.set_border_width */
void F1975_24311 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_) = (EIF_INTEGER_32) arg1;
	F1725_19528(Current, ((EIF_INTEGER_32) 3L), Current, (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_VERTICAL_BOX_IMP}.on_size */
void F1975_24312 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1974_24283(Current);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_);
	F1975_24314(Current, (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_2)), (EIF_BOOLEAN) 1);
	F1970_24130(Current, arg1, arg2, arg3);
	RTLE;
}

/* {EV_VERTICAL_BOX_IMP}.ev_apply_new_size */
void F1975_24313 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1723_19497(Current, arg1, arg2, arg3, arg4, arg5);
	ti4_1 = F1974_24283(Current);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_);
	F1975_24314(Current, (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_2)), (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_VERTICAL_BOX_IMP}.set_children_height */
void F1975_24314 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,loc12);
	RTLR(4,loc16);
	RTLR(5,loc3);
	RTLR(6,tr1);
	RTLR(7,tr2);
	RTLIU(8);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_8_) != ((EIF_INTEGER_32) 0L))) {
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_63_);
		loc2 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
		loc12 = F951_4084(RTCW(loc1));
		loc9 = F1974_24282(Current);
		loc10 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_);
		loc11 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_11_);
		loc7 = F1974_24287(Current);
		loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 - (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc10)) - loc7);
		if (F1925_22890(Current)) {
			loc16 = *(EIF_REFERENCE *)(Current + _REFACS_62_);
			if ((EIF_BOOLEAN)(loc16 == NULL)) {
				{
					static EIF_TYPE_INDEX typarr0[] = {950,0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc16 = RTLNSMART(typres0.id);
				}
				ti4_1 = F951_4094(RTCW(loc1));
				F951_4073(RTCW(loc16), ti4_1);
				RTAR(Current, loc16);
				*(EIF_REFERENCE *)(Current + _REFACS_62_) = (EIF_REFERENCE) loc16;
			} else {
				tb1 = F736_2537(RTCW(loc16));
				if ((EIF_BOOLEAN) !tb1) {
					{
						static EIF_TYPE_INDEX typarr0[] = {950,0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						loc16 = RTLNSMART(typres0.id);
					}
					ti4_1 = F951_4094(RTCW(loc1));
					F951_4073(RTCW(loc16), ti4_1);
				}
			}
		}
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_64_19_)) {
			loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_8_);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 / loc4);
			loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_8_);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % loc5);
			loc6 = (EIF_INTEGER_32) loc10;
			F951_4104(RTCW(loc1));
			for (;;) {
				tb1 = F882_3332(RTCW(loc1));
				if (tb1) break;
				loc3 = F951_4078(RTCW(loc1));
				tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[Dtype(RTCW(loc3))-1871])(loc3);
				if (tb2) {
					loc8 = F1974_24297(Current, loc5);
					loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + loc8);
					ti4_1 = eif_max_int32 ((EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L)),((EIF_INTEGER_32) 0L));
					loc5 = (EIF_INTEGER_32) ti4_1;
					if ((EIF_BOOLEAN)(loc16 != NULL)) {
						{
							EIF_TYPE_INDEX typarr0[] = {0xFFF9,7,1475,0xFF01,0,0xFF01,1969,1508,1508,1508,1508,1493,0xFFFF};
							EIF_TYPE typres0;
							typarr0[4] = dftype;
							
							typres0 = eif_compound_id(dftype, typarr0);
							tr1 = RTLNTS(typres0.id, 8, 0);
						}
						((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
						RTAR(tr1,Current);
						((EIF_TYPED_VALUE *)tr1+2)->it_r = loc3;
						RTAR(tr1,loc3);
						((EIF_TYPED_VALUE *)tr1+3)->it_i4 = loc10;
						((EIF_TYPED_VALUE *)tr1+4)->it_i4 = loc6;
						ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16402[Dtype(RTCW(loc3))-1730])(loc3);
						ti4_1 = eif_max_int32 (ti4_1,loc9);
						((EIF_TYPED_VALUE *)tr1+5)->it_i4 = ti4_1;
						((EIF_TYPED_VALUE *)tr1+6)->it_i4 = loc8;
						((EIF_TYPED_VALUE *)tr1+7)->it_b = arg2;
						
						{
							static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
							EIF_TYPE typres0;
							static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
							
							typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							tr2= RTLNRF(typres0.id, (EIF_POINTER) __A1958_1824, (EIF_POINTER) _A1958_1824, (EIF_POINTER)(F1974_24306),tr1, 1, 0);
						}
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(loc16))-818])(loc16, tr2);
					} else {
						ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16402[Dtype(RTCW(loc3))-1730])(loc3);
						ti4_1 = eif_max_int32 (ti4_1,loc9);
						F1974_24306(Current, loc3, loc10, loc6, ti4_1, loc8, arg2);
					}
					loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 + loc11) + loc8);
				}
				F951_4106(RTCW(loc1));
			}
			loc6 -= loc11;
		} else {
			loc13 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_12_);
			loc13 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 - loc13);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_9_);
			loc14 = eif_max_int32 (ti4_1,((EIF_INTEGER_32) 1L));
			if ((EIF_BOOLEAN) (loc13 >= ((EIF_INTEGER_32) 0L))) {
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc13 / loc14);
				loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc13 % loc14);
			} else {
				loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			loc6 = (EIF_INTEGER_32) loc10;
			F951_4104(RTCW(loc1));
			if ((EIF_BOOLEAN)(loc2 == NULL)) {
				loc15 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,956,1508,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc2 = RTLNS(typres0.id, 956, _OBJSIZ_1_1_0_1_0_0_0_0_);
				}
				F957_4073(RTCW(loc2), ((EIF_INTEGER_32) 0L));
			} else {
				F957_4104(RTCW(loc2));
				loc15 = F957_4078(RTCW(loc2));
			}
			for (;;) {
				tb2 = F882_3332(RTCW(loc1));
				if (tb2) break;
				loc3 = F951_4078(RTCW(loc1));
				tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[Dtype(RTCW(loc3))-1871])(loc3);
				if (tb3) {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1) + O3095[Dtype(loc1)-950]);
					if ((EIF_BOOLEAN)(ti4_1 != loc15)) {
						loc8 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16403[Dtype(RTCW(loc3))-1730])(loc3);
						ti4_1 = F1974_24297(Current, loc5);
						loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 + loc4) + ti4_1);
						if ((EIF_BOOLEAN) (loc5 > ((EIF_INTEGER_32) 0L))) {
							loc5--;
						} else {
							if ((EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 0L))) {
								loc5++;
							}
						}
					} else {
						loc8 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16403[Dtype(RTCW(loc3))-1730])(loc3);
						tb3 = F858_3269(RTCW(loc2));
						if (tb3) {
							loc15 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
						} else {
							F957_4106(RTCW(loc2));
							loc15 = F957_4078(RTCW(loc2));
						}
					}
					if ((EIF_BOOLEAN)(loc16 != NULL)) {
						{
							EIF_TYPE_INDEX typarr0[] = {0xFFF9,7,1475,0xFF01,0,0xFF01,1969,1508,1508,1508,1508,1493,0xFFFF};
							EIF_TYPE typres0;
							typarr0[4] = dftype;
							
							typres0 = eif_compound_id(dftype, typarr0);
							tr1 = RTLNTS(typres0.id, 8, 0);
						}
						((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
						RTAR(tr1,Current);
						((EIF_TYPED_VALUE *)tr1+2)->it_r = loc3;
						RTAR(tr1,loc3);
						((EIF_TYPED_VALUE *)tr1+3)->it_i4 = loc10;
						((EIF_TYPED_VALUE *)tr1+4)->it_i4 = loc6;
						ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16402[Dtype(RTCW(loc3))-1730])(loc3);
						ti4_1 = eif_max_int32 (ti4_1,loc9);
						((EIF_TYPED_VALUE *)tr1+5)->it_i4 = ti4_1;
						((EIF_TYPED_VALUE *)tr1+6)->it_i4 = loc8;
						((EIF_TYPED_VALUE *)tr1+7)->it_b = arg2;
						
						{
							static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
							EIF_TYPE typres0;
							static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
							
							typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							tr2= RTLNRF(typres0.id, (EIF_POINTER) __A1958_1824, (EIF_POINTER) _A1958_1824, (EIF_POINTER)(F1974_24306),tr1, 1, 0);
						}
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(loc16))-818])(loc16, tr2);
					} else {
						ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16402[Dtype(RTCW(loc3))-1730])(loc3);
						ti4_1 = eif_max_int32 (ti4_1,loc9);
						F1974_24306(Current, loc3, loc10, loc6, ti4_1, loc8, arg2);
					}
					loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 + loc11) + loc8);
				} else {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1) + O3095[Dtype(loc1)-950]);
					if ((EIF_BOOLEAN)(ti4_1 == loc15)) {
						tb3 = F858_3269(RTCW(loc2));
						if (tb3) {
							loc15 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
						} else {
							F957_4106(RTCW(loc2));
							loc15 = F957_4078(RTCW(loc2));
						}
					}
				}
				F951_4106(RTCW(loc1));
			}
		}
		tb3 = F951_4099(RTCW(loc1), loc12);
		if (tb3) {
			F951_4109(RTCW(loc1), loc12);
		}
		if ((EIF_BOOLEAN)(loc16 != NULL)) {
			F951_4105(RTCW(loc16));
			for (;;) {
				tb3 = F882_3333(RTCW(loc16));
				if (tb3) break;
				tr1 = F951_4078(RTCW(loc16));
				(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_3_0_0_))(
					*(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_3_0_1_),
					*(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_));
				F951_4107(RTCW(loc16));
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2226[Dtype(RTCW(loc16))-950])(loc16);
		}
	}
	RTLE;
}

/* {EV_VERTICAL_BOX_IMP}.compute_minimum_width */
void F1975_24315 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_8_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
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
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[Dtype(RTCW(loc2))-1871])(loc2);
			if (tb2) {
				loc5++;
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16402[Dtype(RTCW(loc2))-1730])(loc2);
				ti4_1 = eif_max_int32 (loc4,ti4_1);
				loc4 = (EIF_INTEGER_32) ti4_1;
			}
			F951_4106(RTCW(loc1));
		}
		tb2 = F951_4099(RTCW(loc1), loc3);
		if (tb2) {
			F951_4109(RTCW(loc1), loc3);
		}
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_8_) = (EIF_INTEGER_32) loc5;
	F1974_24289(Current);
	F1725_19525(Current, (EIF_INTEGER_32) (loc4 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_))), arg1);
	RTLE;
}

/* {EV_VERTICAL_BOX_IMP}.compute_minimum_height */
void F1975_24316 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc3);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_8_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_63_);
	tb1 = F736_2537(RTCW(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_63_);
		loc3 = F951_4084(RTCW(loc1));
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_64_19_)) {
			F951_4104(RTCW(loc1));
			for (;;) {
				tb1 = F882_3332(RTCW(loc1));
				if (tb1) break;
				loc2 = F951_4078(RTCW(loc1));
				tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[Dtype(RTCW(loc2))-1871])(loc2);
				if (tb2) {
					loc5++;
					ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16403[Dtype(RTCW(loc2))-1730])(loc2);
					ti4_1 = eif_max_int32 (loc4,ti4_1);
					loc4 = (EIF_INTEGER_32) ti4_1;
				}
				F951_4106(RTCW(loc1));
			}
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_8_) = (EIF_INTEGER_32) loc5;
			F1974_24289(Current);
			ti4_1 = F1974_24287(Current);
			ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_);
			F1725_19526(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 * loc5) + ti4_1) + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_2)), arg1);
		} else {
			F951_4104(RTCW(loc1));
			for (;;) {
				tb2 = F882_3332(RTCW(loc1));
				if (tb2) break;
				loc2 = F951_4078(RTCW(loc1));
				tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[Dtype(RTCW(loc2))-1871])(loc2);
				if (tb3) {
					ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16403[Dtype(RTCW(loc2))-1730])(loc2);
					loc4 += ti4_1;
					loc5++;
				}
				F951_4106(RTCW(loc1));
			}
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_12_) = (EIF_INTEGER_32) loc4;
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_8_) = (EIF_INTEGER_32) loc5;
			F1974_24289(Current);
			ti4_1 = F1974_24287(Current);
			ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_);
			F1725_19526(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + ti4_1) + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_2)), arg1);
		}
		tb3 = F951_4099(RTCW(loc1), loc3);
		if (tb3) {
			F951_4109(RTCW(loc1), loc3);
		}
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_12_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		F1725_19526(Current, (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_)), arg1);
	}
	RTLE;
}

/* {EV_VERTICAL_BOX_IMP}.compute_minimum_size */
void F1975_24317 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc3);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_8_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_63_);
	tb1 = F736_2537(RTCW(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_63_);
		loc3 = F951_4084(RTCW(loc1));
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_64_19_)) {
			F951_4104(RTCW(loc1));
			for (;;) {
				tb1 = F882_3332(RTCW(loc1));
				if (tb1) break;
				loc2 = F951_4078(RTCW(loc1));
				tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[Dtype(RTCW(loc2))-1871])(loc2);
				if (tb2) {
					loc6++;
					ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16402[Dtype(RTCW(loc2))-1730])(loc2);
					ti4_1 = eif_max_int32 (loc5,ti4_1);
					loc5 = (EIF_INTEGER_32) ti4_1;
					ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16403[Dtype(RTCW(loc2))-1730])(loc2);
					ti4_1 = eif_max_int32 (loc4,ti4_1);
					loc4 = (EIF_INTEGER_32) ti4_1;
				}
				F951_4106(RTCW(loc1));
			}
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_8_) = (EIF_INTEGER_32) loc6;
			F1974_24289(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_);
			ti4_2 = F1974_24287(Current);
			ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_);
			F1725_19527(Current, (EIF_INTEGER_32) (loc5 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_1)), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 * loc6) + ti4_2) + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_3)), arg1);
		} else {
			F951_4104(RTCW(loc1));
			for (;;) {
				tb2 = F882_3332(RTCW(loc1));
				if (tb2) break;
				loc2 = F951_4078(RTCW(loc1));
				tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[Dtype(RTCW(loc2))-1871])(loc2);
				if (tb3) {
					loc6++;
					ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16402[Dtype(RTCW(loc2))-1730])(loc2);
					ti4_1 = eif_max_int32 (loc5,ti4_1);
					loc5 = (EIF_INTEGER_32) ti4_1;
					ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16403[Dtype(RTCW(loc2))-1730])(loc2);
					loc4 += ti4_1;
				}
				F951_4106(RTCW(loc1));
			}
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_12_) = (EIF_INTEGER_32) loc4;
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_8_) = (EIF_INTEGER_32) loc6;
			F1974_24289(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_);
			ti4_2 = F1974_24287(Current);
			ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_);
			F1725_19527(Current, (EIF_INTEGER_32) (loc5 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_1)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + ti4_2) + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_3)), arg1);
		}
		tb3 = F951_4099(RTCW(loc1), loc3);
		if (tb3) {
			F951_4109(RTCW(loc1), loc3);
		}
	} else {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_12_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		F1725_19527(Current, (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_)), (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_)), arg1);
	}
	RTLE;
}

void EIF_Minit1958 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
