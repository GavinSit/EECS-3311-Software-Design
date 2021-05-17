/*
 * Code for class EV_IMAGE_LIST_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1439.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_IMAGE_LIST_IMP}.make_with_size */
void F1300_15153 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	F1299_15116(Current, arg1, arg2, ((EIF_INTEGER_32) 32L), (EIF_BOOLEAN) 1);
	F1300_15154(Current);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,999,0xFF01,0xFFF9,2,1475,1508,1508,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F1000_3924(RTCW(tr1), ((EIF_INTEGER_32) 4L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1000,1508,0xFF01,1421,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F1001_3924(RTCW(tr1), ((EIF_INTEGER_32) 4L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1001,1508,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F1002_3924(RTCW(tr1), ((EIF_INTEGER_32) 4L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1001,1508,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F1002_3924(RTCW(tr1), ((EIF_INTEGER_32) 4L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {EV_IMAGE_LIST_IMP}.add_transparent_pixmap */
void F1300_15154 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLIU(6);
	
	RTGC;
	loc3 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
	F1307_15413(RTCW(loc3));
	loc1 = RTLNS(eif_new_type(1319, 0x01).id, 1319, _OBJSIZ_0_3_0_3_0_2_0_0_);
	F1320_15566(RTCW(loc1), loc3, ((EIF_INTEGER_32) 16L), ((EIF_INTEGER_32) 16L));
	loc2 = RTLNS(eif_new_type(1319, 0x01).id, 1319, _OBJSIZ_0_3_0_3_0_2_0_0_);
	F1320_15566(RTCW(loc2), loc3, ((EIF_INTEGER_32) 16L), ((EIF_INTEGER_32) 16L));
	F1306_15265(RTCW(loc3), loc1);
	ti4_1 = ((EIF_INTEGER_32) 16711778L);
	F1306_15317(RTCW(loc3), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 16L), ((EIF_INTEGER_32) 16L), ti4_1);
	F1306_15271(RTCW(loc3));
	loc4 = RTLNS(eif_new_type(1398, 0x01).id, 1398, _OBJSIZ_2_2_0_2_0_1_0_0_);
	F1337_15830(RTCW(loc4));
	F1399_16993(RTCW(loc4), loc2);
	F1399_16992(RTCW(loc4), loc1);
	F1399_16994(RTCW(loc4), (EIF_BOOLEAN) 1);
	loc5 = RTLNS(eif_new_type(1323, 0x01).id, 1323, _OBJSIZ_0_2_0_3_0_1_0_0_);
	F1323_15632(RTCW(loc5), loc4);
	F1299_15127(Current, loc5);
	F1399_17002(RTCW(loc4));
	F519_14213(RTCW(loc1));
	F519_14213(RTCW(loc2));
	F519_14213(RTCW(loc3));
	RTLE;
}

/* {EV_IMAGE_LIST_IMP}.pixmap_position */
void F1300_15155 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(1871, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		loc2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_41_);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tb2 = F1001_3931(RTCW(tr1), loc2);
			tb1 = tb2;
		}
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = F1001_3929(RTCW(tr1), loc2);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ti4_1;
		} else {
			tb1 = '\0';
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_42_12_6_3_);
			if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_42_12_6_3_);
				tb2 = F1002_3931(RTCW(tr1), ti4_1);
				tb1 = tb2;
			}
			if (tb1) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_42_12_6_3_);
				ti4_1 = F1002_3929(RTCW(tr1), ti4_1);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ti4_1;
			}
		}
	}
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) == ((EIF_INTEGER_32) -1L))) {
		F1300_15159(Current, arg1);
	}
	RTLE;
}

/* {EV_IMAGE_LIST_IMP}.add_pixmap */
void F1300_15156 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(1871, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		loc2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_41_);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tb1 = F1001_3931(RTCW(tr1), loc2);
			if (tb1) {
				tr1 = *(EIF_REFERENCE *)(Current);
				ti4_1 = F1001_3929(RTCW(tr1), loc2);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ti4_1;
			} else {
				loc3 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_36_);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					loc4 = F519_14208(RTCW(loc3));
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					tb1 = F1002_3931(RTCW(tr1), loc4);
					if (tb1) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						ti4_1 = F1002_3929(RTCW(tr1), loc4);
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ti4_1;
					} else {
						F1300_15158(Current, arg1);
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						F1002_3970(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_), loc4);
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
						F1002_3970(RTCW(tr1), loc4, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_));
						tr1 = *(EIF_REFERENCE *)(Current);
						F1001_3970(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_), loc2);
					}
				} else {
					F1300_15158(Current, arg1);
					tr1 = *(EIF_REFERENCE *)(Current);
					F1001_3970(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_), loc2);
				}
			}
		} else {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_42_12_6_3_);
			if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
				loc4 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_42_12_6_3_);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tb1 = F1002_3931(RTCW(tr1), loc4);
				if (tb1) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					ti4_1 = F1002_3929(RTCW(tr1), loc4);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ti4_1;
				} else {
					F1300_15158(Current, arg1);
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					F1002_3970(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_), loc4);
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
					F1002_3970(RTCW(tr1), loc4, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_));
				}
			} else {
				F1300_15158(Current, arg1);
			}
		}
	} else {
		F1300_15158(Current, arg1);
	}
	RTLE;
}

/* {EV_IMAGE_LIST_IMP}.extend_pixmap */
void F1300_15157 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(1871, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		loc2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_41_);
	}
	F1300_15160(Current, arg1);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		F1001_3970(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_), loc2);
	} else {
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			loc3 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_36_);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_);
				ti4_2 = F519_14208(RTCW(loc3));
				F1002_3970(RTCW(tr1), ti4_1, ti4_2);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
				ti4_1 = F519_14208(RTCW(loc3));
				ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_);
				F1002_3970(RTCW(tr1), ti4_1, ti4_2);
			}
		}
	}
	RTLE;
}

/* {EV_IMAGE_LIST_IMP}.internal_add_pixmap */
void F1300_15158 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc5);
	RTLR(1,arg1);
	RTLR(2,loc4);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLR(6,loc3);
	RTLIU(7);
	
	RTGC;
	loc5 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc5 = RTRV(eif_new_type(413, 0x00), loc5);
	RTCT0("pixmap_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc5 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc4 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11080[Dtype(RTCW(loc5))-1871])(loc5);
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11081[Dtype(RTCW(loc5))-1871])(loc5);
	}
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		loc2 = F414_13404(RTCW(loc5));
		F519_14209(RTCW(loc2));
	} else {
		F519_14211(RTCW(loc2));
	}
	loc1 = F519_14208(RTCW(loc2));
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		tb2 = F1000_3931(RTCW(loc4), loc1);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		F1299_15127(Current, loc2);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNTS(typres0.id, 3, 1);
		}
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_);
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 1L);
		F1000_3970(RTCW(loc4), tr1, loc1);
	} else {
		loc3 = F1000_3929(RTCW(loc4), loc1);
		RTCT0("loc_tuple /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		ti4_1 = eif_integer_32_item(RTCW(loc3),1);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ti4_1;
	}
	F519_14210(RTCW(loc2));
	RTLE;
}

/* {EV_IMAGE_LIST_IMP}.internal_pixmap_position */
void F1300_15159 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc5);
	RTLR(1,arg1);
	RTLR(2,loc4);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTGC;
	loc5 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc5 = RTRV(eif_new_type(413, 0x00), loc5);
	RTCT0("pixmap_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc5 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc4 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11080[Dtype(RTCW(loc5))-1871])(loc5);
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11081[Dtype(RTCW(loc5))-1871])(loc5);
	}
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		loc1 = F519_14208(RTCW(loc2));
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
			tb2 = F1000_3931(RTCW(loc4), loc1);
			tb1 = tb2;
		}
		if (tb1) {
			loc3 = F1000_3929(RTCW(loc4), loc1);
			RTCT0("loc_tuple /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			ti4_1 = eif_integer_32_item(RTCW(loc3),1);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_) = (EIF_INTEGER_32) ti4_1;
		}
	}
	RTLE;
}

/* {EV_IMAGE_LIST_IMP}.internal_extend_pixmap */
void F1300_15160 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc4);
	RTLR(1,arg1);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTGC;
	loc4 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc4 = RTRV(eif_new_type(413, 0x00), loc4);
	RTCT0("pixmap_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc3 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11080[Dtype(RTCW(loc4))-1871])(loc4);
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11081[Dtype(RTCW(loc4))-1871])(loc4);
		loc2 = RTRV(eif_new_type(1322, 0x00), loc2);
	}
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		loc1 = F519_14208(RTCW(loc2));
		F1299_15127(Current, loc2);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNTS(typres0.id, 3, 1);
		}
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_);
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 1L);
		F1000_3970(RTCW(loc3), tr1, loc1);
	} else {
		F1300_15161(Current, arg1);
	}
	RTLE;
}

/* {EV_IMAGE_LIST_IMP}.add_pixmap_bitmap */
void F1300_15161 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,loc7);
	RTLR(8,loc6);
	RTLIU(9);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc2 = RTRV(eif_new_type(413, 0x00), loc2);
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		RTCT0("pixmap_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
	}
	tb1 = '\01';
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11094[Dtype(RTCW(loc2))-1871])(loc2);
	if (!((EIF_BOOLEAN)(ti4_1 != *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_)))) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11093[Dtype(RTCW(loc2))-1871])(loc2);
		tb1 = (EIF_BOOLEAN)(ti4_1 != *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_));
	}
	if (tb1) {
		loc1 = RTLNS(eif_new_type(1652, 0x01).id, 1652, _OBJSIZ_6_3_0_1_0_0_0_0_);
		F1596_17742(RTCW(loc1));
		F1653_18642(RTCW(loc1), arg1);
		F1653_18638(RTCW(loc1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_4_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_5_));
		loc2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
		loc2 = RTRV(eif_new_type(413, 0x00), loc2);
		RTCT0("pixmap_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
	}
	loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11078[Dtype(RTCW(loc2))-1871])(loc2);
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11082[Dtype(RTCW(loc2))-1871])(loc2);
	if (tb1) {
		loc4 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11079[Dtype(RTCW(loc2))-1871])(loc2);
		RTCT0("mask_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc5 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
		F1307_15413(RTCW(loc5));
		F1306_15265(RTCW(loc5), loc4);
		loc7 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
		F1307_15414(RTCW(loc7), loc5);
		loc6 = RTLNS(eif_new_type(1319, 0x01).id, 1319, _OBJSIZ_0_3_0_3_0_2_0_0_);
		ti4_1 = F1320_15572(RTCW(loc4));
		ti4_2 = F1320_15573(RTCW(loc4));
		F1320_15566(RTCW(loc6), loc7, ti4_1, ti4_2);
		F519_14209(RTCW(loc6));
		F1306_15265(RTCW(loc7), loc6);
		ti4_1 = F1320_15572(RTCW(loc4));
		ti4_2 = F1320_15573(RTCW(loc4));
		F1306_15317(RTCW(loc7), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1, ti4_2, ((EIF_INTEGER_32) 16711778L));
		ti4_1 = F1320_15572(RTCW(loc4));
		ti4_2 = F1320_15573(RTCW(loc4));
		F1306_15311(RTCW(loc7), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1, ti4_2, loc5, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 6684742L));
		F1306_15271(RTCW(loc5));
		F519_14213(RTCW(loc5));
		F1306_15271(RTCW(loc7));
		F519_14213(RTCW(loc7));
		F1299_15124(Current, loc3, loc6);
		F519_14210(RTCW(loc6));
		F519_14210(RTCW(loc4));
		loc4 = (EIF_REFERENCE) NULL;
	} else {
		F1299_15122(Current, loc3);
	}
	F519_14210(RTCW(loc3));
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1596_17745(RTCW(loc1));
		loc1 = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {EV_IMAGE_LIST_IMP}.raster_constants */
static EIF_REFERENCE F1300_15166_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(469)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(234, 0x01).id, 234, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1300_15166 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(469,F1300_15166_body,(Current));
}

void EIF_Minit1439 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
