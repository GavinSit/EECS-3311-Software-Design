/*
 * Code for class EV_PICK_AND_DROPABLE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1939.h"
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

/* {EV_PICK_AND_DROPABLE_IMP}.transport_executing */
EIF_BOOLEAN F1956_23717 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current + O19553[dtype-1955]) || *(EIF_BOOLEAN *)(Current + O19554[dtype-1955]));
}

/* {EV_PICK_AND_DROPABLE_IMP}.enable_transport */
void F1956_23718 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_NATURAL_8 *)(Current + O19555[dtype-1955]) = (EIF_NATURAL_8) ((EIF_NATURAL_8) 1U);
	*(EIF_BOOLEAN *)(Current + O16525[dtype-1750]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.pnd_press */
void F1956_23720 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	switch (*(EIF_NATURAL_8 *)(Current + O19555[Dtype(Current)-1955])) {
		case 1U:
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			F1956_23724(Current, arg1, arg2, arg3, (EIF_BOOLEAN) 1, tr8_1, tr8_2, (EIF_REAL_64) 0.5, arg4, arg5, (EIF_BOOLEAN) 0);
			break;
		case 2U:
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			F1956_23726(Current, arg1, arg2, arg3, tr8_1, tr8_2, tr8_3, arg4, arg5);
			break;
		default:
			break;
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.check_drag_and_drop_release */
void F1956_23721 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if (F1751_19757(Current)) {
		F1910_22421(RTCV(F1956_23756(Current)));
		if ((EIF_BOOLEAN)(*(EIF_NATURAL_8 *)(Current + O19555[dtype-1955]) == ((EIF_NATURAL_8) 2U))) {
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			F1956_23726(Current, arg1, arg2, ((EIF_INTEGER_32) 1L), tr8_1, tr8_2, tr8_3, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
		} else {
			tb1 = '\0';
			if (*(EIF_BOOLEAN *)(Current + O10095[dtype-300])) {
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19565[dtype-1958])(Current);
				loc1 = tr1;
				tb1 = EIF_TEST(loc1);
			}
			if (tb1) {
				F1982_24513(loc1);
			}
		}
		*(EIF_INTEGER_32 *)(Current + O10097[dtype-300]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		*(EIF_INTEGER_32 *)(Current + O10098[dtype-300]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		*(EIF_BOOLEAN *)(Current + O10095[dtype-300]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.pnd_motion */
void F1956_23722 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current + O10095[dtype-300])) {
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + O16500[dtype-1750]);
		loc1 = RTCCL(tr1);
		if (EIF_TEST(loc1)) {
			tb2 = '\01';
			ti4_1 = *(EIF_INTEGER_32 *)(Current + O10097[dtype-300]);
			ti4_1 = eif_abs_int32 ((EIF_INTEGER_32) (ti4_1 - arg1));
			if (!(EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 3L))) {
				ti4_1 = *(EIF_INTEGER_32 *)(Current + O10098[dtype-300]);
				ti4_1 = eif_abs_int32 ((EIF_INTEGER_32) (ti4_1 - arg2));
				tb2 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 3L));
			}
			tb1 = tb2;
		}
		if (tb1) {
			tr1 = RTCCL(loc1);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + O10097[dtype-300]);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + O10098[dtype-300]);
			tr8_1 = *(EIF_REAL_64 *)(Current + O10099[dtype-300]);
			tr8_2 = *(EIF_REAL_64 *)(Current + O10100[dtype-300]);
			tr8_3 = *(EIF_REAL_64 *)(Current + O10101[dtype-300]);
			ti4_3 = *(EIF_INTEGER_32 *)(Current + O10097[dtype-300]);
			ti4_4 = *(EIF_INTEGER_32 *)(Current + O10098[dtype-300]);
			F1956_23725(Current, tr1, ti4_1, ti4_2, ((EIF_INTEGER_32) 1L), tr8_1, tr8_2, tr8_3, (EIF_INTEGER_32) (arg3 + (EIF_INTEGER_32) (ti4_3 - arg1)), (EIF_INTEGER_32) (arg4 + (EIF_INTEGER_32) (ti4_4 - arg2)));
			*(EIF_BOOLEAN *)(Current + O10095[dtype-300]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	} else {
		switch (*(EIF_NATURAL_8 *)(Current + O19557[dtype-1955])) {
			case 3U:
				tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
				tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
				F1751_19770(Current, arg1, arg2, tr8_1, tr8_2, (EIF_REAL_64) 0.5, arg3, arg4);
				break;
			default:
				break;
		}
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.escape_pnd */
void F1956_23723 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_47_);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		if ((EIF_BOOLEAN)(loc1 == Current)) {
			F1910_22424(RTCV(F1956_23756(Current)));
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			F1956_23726(RTCW(loc1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 2L), tr8_1, tr8_2, tr8_3, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
		} else {
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R19548[Dtype(RTCW(loc1))-1958])(loc1);
		}
	} else {
		F1910_22424(RTCV(F1956_23756(Current)));
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.start_transport */
void F1956_23724 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_REAL_64 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_BOOLEAN arg10)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTGC;
	F1910_22424(RTCV(F1956_23756(Current)));
	tb1 = '\0';
	if (F1751_19756(Current)) {
		tb1 = (EIF_BOOLEAN)(arg3 != ((EIF_INTEGER_32) 3L));
	}
	if (tb1) {
	} else {
		F1751_19776(Current, arg1, arg2, arg8, arg9);
		loc2 = *(EIF_REFERENCE *)(Current + O16500[dtype-1750]);
		F1751_19743(Current);
		tb1 = *(EIF_BOOLEAN *)(RTCV(F1956_23756(Current))+ _CHROFF_48_8_);
		if ((EIF_BOOLEAN) !tb1) {
			tb1 = '\0';
			tb2 = '\01';
			if (!F1751_19758(Current)) {
				tb2 = F1751_19759(Current);
			}
			if (tb2) {
				tb1 = (EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 3L));
			}
			if (tb1) {
				tb1 = '\0';
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					tb1 = F1751_19759(Current);
				}
				if (tb1) {
					{
						EIF_TYPE_INDEX typarr0[] = {0xFFF9,10,1475,0xFF01,0,0xFF01,0,1508,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
						EIF_TYPE typres0;
						typarr0[4] = dftype;
						
						typres0 = eif_compound_id(dftype, typarr0);
						tr1 = RTLNTS(typres0.id, 11, 0);
					}
					((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
					RTAR(tr1,Current);
					((EIF_TYPED_VALUE *)tr1+2)->it_r = loc2;
					RTAR(tr1,loc2);
					((EIF_TYPED_VALUE *)tr1+3)->it_i4 = arg1;
					((EIF_TYPED_VALUE *)tr1+4)->it_i4 = arg2;
					((EIF_TYPED_VALUE *)tr1+5)->it_i4 = arg3;
					((EIF_TYPED_VALUE *)tr1+6)->it_r8 = arg5;
					((EIF_TYPED_VALUE *)tr1+7)->it_r8 = arg6;
					((EIF_TYPED_VALUE *)tr1+8)->it_r8 = arg7;
					((EIF_TYPED_VALUE *)tr1+9)->it_i4 = arg8;
					((EIF_TYPED_VALUE *)tr1+10)->it_i4 = arg9;
					
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr2= RTLNRF(typres0.id, (EIF_POINTER) __A1939_255, (EIF_POINTER) _A1939_255, (EIF_POINTER)(F1956_23725),tr1, 1, 0);
					}
					loc1 = (EIF_REFERENCE) tr2;
				}
				tr1 = F1956_23756(Current);
				tr2 = F1696_18976(Current);
				tr3 = RTCCL(loc2);
				F1714_19349(RTCW(tr1), arg1, arg2, arg8, arg9, tr2, tr3, loc1, arg10);
			} else {
				tb1 = '\0';
				tb2 = '\0';
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					tb2 = F1751_19756(Current);
				}
				if (tb2) {
					tb1 = (EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 3L));
				}
				if (tb1) {
					tr1 = RTCCL(loc2);
					F1956_23725(Current, tr1, arg1, arg2, arg3, arg5, arg6, arg7, arg8, arg9);
				} else {
					tb1 = '\0';
					tb2 = '\0';
					if ((EIF_BOOLEAN)(loc2 != NULL)) {
						tb2 = F1751_19757(Current);
					}
					if (tb2) {
						tb1 = (EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L));
					}
					if (tb1) {
						tr1 = RTCCL(loc2);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + O16500[dtype-1750]) = (EIF_REFERENCE) tr1;
						if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O10095[dtype-300])) {
							*(EIF_INTEGER_32 *)(Current + O10097[dtype-300]) = (EIF_INTEGER_32) arg1;
							*(EIF_INTEGER_32 *)(Current + O10098[dtype-300]) = (EIF_INTEGER_32) arg2;
							*(EIF_REAL_64 *)(Current + O10099[dtype-300]) = (EIF_REAL_64) arg5;
							*(EIF_REAL_64 *)(Current + O10100[dtype-300]) = (EIF_REAL_64) arg6;
							*(EIF_REAL_64 *)(Current + O10101[dtype-300]) = (EIF_REAL_64) arg7;
							*(EIF_BOOLEAN *)(Current + O10095[dtype-300]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							F1910_22420(RTCV(F1956_23756(Current)));
						}
					}
				}
			}
		}
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.real_start_transport */
void F1956_23725 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_REAL_64 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9)
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
	EIF_INTEGER_16 ti2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLR(6,loc2);
	RTLR(7,loc4);
	RTLIU(8);
	
	RTGC;
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\0';
	if (F1751_19757(Current)) {
		tb3 = (EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 1L));
	}
	if (!(tb3)) {
		tb3 = '\0';
		if (F1751_19756(Current)) {
			tb3 = (EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 3L));
		}
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = '\0';
		if (F1751_19758(Current)) {
			tb2 = (EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 3L));
		}
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = RTCCL(arg1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O16500[dtype-1750]) = (EIF_REFERENCE) tr1;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19565[dtype-1958])(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O19566[dtype-1955]) = (EIF_REFERENCE) tr1;
		tr1 = F1696_18976(Current);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R12520[Dtype(RTCW(tr1))-1634])(tr1);
		F976_4204(RTCW(tr1));
		tr1 = F1956_23756(Current);
		F1910_22417(RTCW(tr1), Current);
		F1751_19777(Current, (EIF_BOOLEAN) 1);
		loc3 = RTLNS(eif_new_type(1605, 0x01).id, 1605, _OBJSIZ_2_0_0_0_0_0_0_0_);
		F1596_17742(RTCW(loc3));
		tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_1_);
		tr1 = F1713_19262(RTCW(tr1));
		tr1 = F251_11690(RTCW(tr1));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = arg1;
		RTAR(tr2,arg1);
		F978_14410(RTCW(tr1), tr2);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O10549[dtype-319]) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + O10549[dtype-319]);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 3, 1);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg2;
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
			F977_14409(RTCW(tr1), tr2);
		}
		tb1 = '\01';
		if (!F1751_19756(Current)) {
			tb1 = F1751_19758(Current);
		}
		if (tb1) {
			*(EIF_BOOLEAN *)(Current + O19553[dtype-1955]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			*(EIF_BOOLEAN *)(Current + O19554[dtype-1955]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		ti2_1 = (EIF_INTEGER_16) arg8;
		*(EIF_INTEGER_16 *)(Current + O10574[dtype-320]) = (EIF_INTEGER_16) ti2_1;
		ti2_1 = (EIF_INTEGER_16) arg9;
		*(EIF_INTEGER_16 *)(Current + O10575[dtype-320]) = (EIF_INTEGER_16) ti2_1;
		if (F1751_19732(Current)) {
			loc1 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
			ti2_1 = *(EIF_INTEGER_16 *)(Current + O16530[dtype-1750]);
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			ti2_1 = *(EIF_INTEGER_16 *)(Current + O16531[dtype-1750]);
			ti4_2 = (EIF_INTEGER_32) ti2_1;
			F1906_22334(RTCW(loc1), ti4_1, ti4_2);
			loc2 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
			F1906_22334(RTCW(loc2), arg8, arg9);
			loc4 = F1906_22342(RTCW(loc2));
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				F1906_22344(RTCW(loc1), loc4);
			} else {
				loc4 = Current;
				loc4 = RTRV(eif_new_type(1911, 0x00), loc4);
				RTCT0("l_win_not_void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				F1906_22344(RTCW(loc1), loc4);
			}
			tr1 = F1956_23756(Current);
			ti4_1 = F1906_22336(RTCW(loc1));
			ti4_2 = F1906_22337(RTCW(loc1));
			F1714_19342(RTCW(tr1), ti4_1, ti4_2);
		} else {
			tr1 = F1956_23756(Current);
			F1714_19342(RTCW(tr1), arg8, arg9);
		}
		*(EIF_NATURAL_8 *)(Current + O19555[dtype-1955]) = (EIF_NATURAL_8) ((EIF_NATURAL_8) 2U);
		*(EIF_NATURAL_8 *)(Current + O19557[dtype-1955]) = (EIF_NATURAL_8) ((EIF_NATURAL_8) 3U);
		tr1 = *(EIF_REFERENCE *)(Current + O10105[dtype-300]);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O19562[dtype-1955]) = (EIF_REFERENCE) tr1;
		tr1 = F1956_23756(Current);
		F1910_22430(RTCW(tr1), ((EIF_INTEGER_32) 1L));
		tr1 = RTOUCR(206,F1714_19338, (RTCV(F1956_23756(Current))));
		tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
		F1954_23618(RTCW(tr1));
		tr1 = F1751_19772(Current);
		F1751_19771(Current, tr1);
		F1956_23746(Current);
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.end_transport */
void F1956_23726 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_16 ti2_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,loc6);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc7);
	RTLR(5,loc8);
	RTLR(6,loc1);
	RTLR(7,loc5);
	RTLR(8,loc2);
	RTLR(9,tr2);
	RTLR(10,loc3);
	RTLIU(11);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19566[dtype-1955]);
	loc6 = tr1;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_NATURAL_8 *)(Current + O19555[dtype-1955]) == ((EIF_NATURAL_8) 2U)) && EIF_TEST(loc6))) {
		ti2_1 = (EIF_INTEGER_16) arg7;
		*(EIF_INTEGER_16 *)(Current + O10574[dtype-320]) = (EIF_INTEGER_16) ti2_1;
		ti2_1 = (EIF_INTEGER_16) arg8;
		*(EIF_INTEGER_16 *)(Current + O10575[dtype-320]) = (EIF_INTEGER_16) ti2_1;
		F1751_19777(Current, (EIF_BOOLEAN) 0);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R16551[dtype-1871])(Current);
		tr1 = F1956_23756(Current);
		F1910_22430(RTCW(tr1), ((EIF_INTEGER_32) 0L));
		*(EIF_NATURAL_8 *)(Current + O19556[dtype-1955]) = (EIF_NATURAL_8) ((EIF_NATURAL_8) 0U);
		*(EIF_NATURAL_8 *)(Current + O19557[dtype-1955]) = (EIF_NATURAL_8) ((EIF_NATURAL_8) 0U);
		F1956_23744(Current);
		tr1 = F1751_19782(Current);
		F1714_19348(RTCW(tr1), arg7, arg8);
		loc4 = Current;
		loc4 = RTRV(eif_new_type(2005, 0x00), loc4);
		tr1 = *(EIF_REFERENCE *)(Current + O19562[dtype-1955]);
		loc7 = tr1;
		if (EIF_TEST(loc7)) {
			F301_12337(Current, loc7);
		} else {
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				tr1 = RTOUCR(235,F71_9846, (RTCV(RTOUCR(242,F321_12796, (Current)))));
				F301_12337(Current, tr1);
			} else {
				tr1 = RTOUCR(234,F71_9843, (RTCV(RTOUCR(242,F321_12796, (Current)))));
				F301_12337(Current, tr1);
			}
		}
		loc8 = loc4;
		if (EIF_TEST(loc8)) {
			F2006_25223(loc8);
		}
		F1910_22418(RTCV(F1956_23756(Current)));
		F1910_22423(RTCV(F1956_23756(Current)));
		loc1 = RTLNS(eif_new_type(1605, 0x01).id, 1605, _OBJSIZ_2_0_0_0_0_0_0_0_);
		F1596_17742(RTCW(loc1));
		loc5 = *(EIF_REFERENCE *)(Current + O16500[dtype-1750]);
		RTCT0("l_pebble /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 3L)) && *(EIF_BOOLEAN *)(Current + O19553[dtype-1955])) || (EIF_BOOLEAN) ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L)) && *(EIF_BOOLEAN *)(Current + O19554[dtype-1955])))) {
			loc2 = F1956_23728(Current, arg1, arg2);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				tr1 = F1587_17684(RTCW(loc2));
				tr2 = RTCCL(loc5);
				tb1 = F978_14412(RTCW(tr1), tr2);
				if (tb1) {
					F1910_22413(RTCV(F1956_23756(Current)));
					tr1 = F1587_17684(RTCW(loc2));
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,0,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr2 = RTLNTS(typres0.id, 2, 0);
					}
					((EIF_TYPED_VALUE *)tr2+1)->it_r = loc5;
					RTAR(tr2,loc5);
					F978_14410(RTCW(tr1), tr2);
					tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
					tr1 = F1713_19262(RTCW(tr1));
					tr1 = F251_11692(RTCW(tr1));
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,0,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr2 = RTLNTS(typres0.id, 2, 0);
					}
					((EIF_TYPED_VALUE *)tr2+1)->it_r = loc5;
					RTAR(tr2,loc5);
					F978_14410(RTCW(tr1), tr2);
					F1910_22414(RTCV(F1956_23756(Current)));
				} else {
					tr1 = RTCCL(loc5);
					F1956_23727(Current, tr1);
				}
			} else {
				tr1 = RTCCL(loc5);
				F1956_23727(Current, tr1);
			}
		} else {
			tr1 = RTCCL(loc5);
			F1956_23727(Current, tr1);
		}
		loc3 = loc2;
		loc3 = RTRV(eif_new_type(1294, 0x00), loc3);
		tr1 = F320_12786(Current);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,1294,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = loc3;
		RTAR(tr2,loc3);
		F977_14409(RTCW(tr1), tr2);
		F1956_23718(Current);
		tr1 = F1696_18976(Current);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R12520[Dtype(RTCW(tr1))-1634])(tr1);
		F976_4206(RTCW(tr1));
		F1982_24512(loc6);
		*(EIF_REFERENCE *)(Current + O19566[dtype-1955]) = (EIF_REFERENCE) NULL;
		*(EIF_BOOLEAN *)(Current + O19554[dtype-1955]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		*(EIF_BOOLEAN *)(Current + O19553[dtype-1955]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		*(EIF_NATURAL_8 *)(Current + O19555[dtype-1955]) = (EIF_NATURAL_8) ((EIF_NATURAL_8) 1U);
		F1751_19743(Current);
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.call_cancel_actions */
void F1956_23727 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_5_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = F251_11694(RTCV(F1956_23756(Current)));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = arg1;
		RTAR(tr2,arg1);
		F978_14410(RTCW(tr1), tr2);
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.pointed_target_from_position */
EIF_REFERENCE F1956_23728 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc6);
	RTLR(1,loc7);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,Result);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLR(7,tr1);
	RTLIU(8);
	
	RTGC;
	loc6 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1906_22334(RTCW(loc6), arg1, arg2);
	loc7 = Current;
	loc7 = RTRV(eif_new_type(1911, 0x01),loc7);
	if (EIF_TEST(loc7)) {
		F1906_22344(RTCW(loc6), loc7);
	} else {
		F1906_22341(RTCW(loc6));
	}
	loc1 = F1956_23730(Current, loc6);
	Result = (EIF_REFERENCE) loc1;
	loc2 = loc1;
	loc2 = RTRV(eif_new_type(1631, 0x00), loc2);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		loc3 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_3_);
		loc3 = *(EIF_REFERENCE *)(RTCW(loc3) + O16559[Dtype(loc3)-1751]);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			ti2_1 = *(EIF_INTEGER_16 *)(Current + O10574[dtype-320]);
			loc4 = (EIF_INTEGER_32) ti2_1;
			ti4_1 = F1614_18066(RTCW(loc2));
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - ti4_1);
			ti2_1 = *(EIF_INTEGER_16 *)(Current + O10575[dtype-320]);
			loc5 = (EIF_INTEGER_32) ti2_1;
			ti4_1 = F1614_18067(RTCW(loc2));
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - ti4_1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr1 = RTLNTS(typres0.id, 3, 1);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_i4 = loc4;
			((EIF_TYPED_VALUE *)tr1+2)->it_i4 = loc5;
			Result = F1554_6501(RTCW(loc3), tr1);
		}
	}
	RTLE;
	return Result;
}

/* {EV_PICK_AND_DROPABLE_IMP}.real_pointed_target */
EIF_REFERENCE F1956_23729 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1906_22334(RTCW(loc1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	F1906_22341(RTCW(loc1));
	RTLE;
	return (EIF_REFERENCE) F1956_23730(Current, loc1);
}

/* {EV_PICK_AND_DROPABLE_IMP}.real_pointed_target_at */
EIF_REFERENCE F1956_23730 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_POINTER loc11 = (EIF_POINTER) 0;
	EIF_POINTER loc12 = (EIF_POINTER) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(15);
	RTLR(0,loc3);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,loc10);
	RTLR(4,tr1);
	RTLR(5,loc13);
	RTLR(6,loc14);
	RTLR(7,Current);
	RTLR(8,loc8);
	RTLR(9,loc9);
	RTLR(10,loc1);
	RTLR(11,loc5);
	RTLR(12,loc6);
	RTLR(13,loc7);
	RTLR(14,Result);
	RTLIU(15);
	
	RTGC;
	loc3 = F1906_22342(RTCW(arg1));
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		loc2 = loc3;
		loc2 = RTRV(eif_new_type(1969, 0x00), loc2);
		loc10 = loc3;
		loc10 = RTRV(eif_new_type(1912, 0x00), loc10);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc10 != NULL)) {
			tb2 = '\01';
			if (!(EIF_BOOLEAN)(loc2 == NULL)) {
				tr1 = F1970_24039(RTCW(loc2));
				tb2 = (EIF_BOOLEAN)(tr1 != NULL);
			}
			tb1 = tb2;
		}
		if (tb1) {
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				loc13 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
				ti4_1 = F1906_22336(RTCW(arg1));
				ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16398[Dtype(RTCW(loc2))-1730])(loc2);
				ti4_3 = F1906_22337(RTCW(arg1));
				ti4_4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16399[Dtype(RTCW(loc2))-1730])(loc2);
				F1906_22334(RTCW(loc13), (EIF_INTEGER_32) (ti4_1 - ti4_2), (EIF_INTEGER_32) (ti4_3 - ti4_4));
			} else {
				loc13 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
				ti4_1 = F1906_22336(RTCW(arg1));
				ti4_2 = F1912_22484(RTCW(loc10));
				ti4_3 = F1906_22337(RTCW(arg1));
				ti4_4 = F1912_22485(RTCW(loc10));
				F1906_22334(RTCW(loc13), (EIF_INTEGER_32) (ti4_1 - ti4_2), (EIF_INTEGER_32) (ti4_3 - ti4_4));
			}
			loc11 = F1913_22716(RTCW(loc10), loc13);
			if ((EIF_BOOLEAN)(loc11 != loc12)) {
				loc14 = F1898_22150(Current, loc11);
				if ((EIF_BOOLEAN)(loc14 != NULL)) {
					loc2 = loc14;
					loc2 = RTRV(eif_new_type(1969, 0x00), loc2);
				}
			}
		}
		if ((EIF_BOOLEAN)(loc2 == NULL)) {
			loc8 = loc3;
			loc8 = RTRV(eif_new_type(1937, 0x00), loc8);
			if ((EIF_BOOLEAN)(loc8 != NULL)) {
				loc2 = F1938_23255(RTCW(loc8));
			} else {
				loc9 = loc3;
				loc9 = RTRV(eif_new_type(1950, 0x00), loc9);
				if ((EIF_BOOLEAN)(loc9 != NULL)) {
					loc2 = F1951_23464(RTCW(loc9));
				}
			}
		}
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			loc1 = F1696_18976(RTCW(loc2));
			loc4 = F1294_4724(RTCW(loc1));
			{
				static EIF_TYPE_INDEX typarr0[] = {1720,0xFF01,1667,0xFF01,1957,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc5 = loc2;
				loc5 = RTRV(typres0, loc5);
			}
			if ((EIF_BOOLEAN)(loc5 != NULL)) {
				ti4_1 = F1906_22336(RTCW(arg1));
				ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16271[Dtype(RTCW(loc5))-1730])(loc5);
				ti4_3 = F1906_22337(RTCW(arg1));
				ti4_4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16272[Dtype(RTCW(loc5))-1730])(loc5);
				loc6 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R16270[Dtype(RTCW(loc5))-1730])(loc5, (EIF_INTEGER_32) (ti4_1 - ti4_2), (EIF_INTEGER_32) (ti4_3 - ti4_4));
				loc6 = RTRV(eif_new_type(1957, 0x00), loc6);
				if ((EIF_BOOLEAN)(loc6 != NULL)) {
					tr1 = F1696_18976(RTCW(loc6));
					tr1 = F1587_17684(RTCW(tr1));
					tb1 = F736_2537(RTCW(tr1));
					if ((EIF_BOOLEAN) !tb1) {
						loc7 = F1696_18976(RTCW(loc6));
						loc7 = RTRV(eif_new_type(1630, 0x00), loc7);
						tb1 = '\01';
						if (!(EIF_BOOLEAN)(loc7 == NULL)) {
							tb2 = '\0';
							if ((EIF_BOOLEAN)(loc7 != NULL)) {
								tb3 = F1631_18291(RTCW(loc7));
								tb2 = tb3;
							}
							tb1 = tb2;
						}
						if (tb1) {
							tr1 = F1696_18976(RTCW(loc6));
							loc4 = F1294_4724(RTCW(tr1));
						}
					}
				}
			}
		}
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc4 != ((EIF_INTEGER_32) 0L))) {
			tr1 = RTOUCR(272,F321_12795, (Current));
			tb2 = F1002_3931(RTCW(tr1), loc4);
			tb1 = tb2;
		}
		if (tb1) {
			tr1 = F1696_18976(Current);
			Result = F1294_4725(RTCW(tr1), loc4);
			RTLE;
			return RTRV(eif_new_type(1627, 0x00), Result);
		}
	}
	RTLE;
	return Result;
}

/* {EV_PICK_AND_DROPABLE_IMP}.set_pointer_style */
void F1956_23741 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1956_23717(Current)) {
		F301_12337(Current, arg1);
	}
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O19562[Dtype(Current)-1955]) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.draw_rubber_band */
void F1956_23743 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1714_19344(RTCV(F1956_23756(Current)));
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.erase_rubber_band */
void F1956_23744 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1714_19345(RTCV(F1956_23756(Current)));
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.enable_capture */
void F1956_23745 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1956_23746(Current);
}

/* {EV_PICK_AND_DROPABLE_IMP}.internal_enable_capture */
void F1956_23746 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R19570[Dtype(Current)-1958])(Current);
}

/* {EV_PICK_AND_DROPABLE_IMP}.disable_capture */
void F1956_23747 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R19571[Dtype(Current)-1958])(Current);
}

/* {EV_PICK_AND_DROPABLE_IMP}.application_imp */
EIF_REFERENCE F1956_23756 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F1751_19782(Current);
	loc1 = RTRV(eif_new_type(1909, 0x00), loc1);
	RTCT0("l_result /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

void EIF_Minit1939 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
