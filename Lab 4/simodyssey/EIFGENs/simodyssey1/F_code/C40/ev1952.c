/*
 * Code for class EV_PICK_AND_DROPABLE_ITEM_HOLDER_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1952.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PICK_AND_DROPABLE_ITEM_HOLDER_IMP}.pnd_press */
void F1969_23985 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	switch (*(EIF_NATURAL_8 *)(Current + O19555[Dtype(Current)-1955])) {
		case 1U:
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			F1956_23724(Current, arg1, arg2, arg3, (EIF_BOOLEAN) 1, tr8_1, tr8_2, (EIF_REAL_64) 0.5, arg4, arg5, (EIF_BOOLEAN) 0);
			tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_47_);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tb1 = '\01';
				tb2 = '\0';
				if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L))) {
					tb2 = F1751_19757(Current);
				}
				if (!(tb2)) {
					tb2 = '\0';
					tb3 = '\0';
					if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 3L))) {
						tb3 = F1751_19756(Current);
					}
					if (tb3) {
						tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_47_);
						tb2 = (EIF_BOOLEAN)(tr1 != NULL);
					}
					tb1 = tb2;
				}
				if (tb1) {
					F1969_24015(Current);
				}
			}
			break;
		case 2U:
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			F1956_23726(Current, arg1, arg2, arg3, tr8_1, tr8_2, (EIF_REAL_64) 0.5, arg4, arg5);
			if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L))) {
				F1969_24008(Current);
			}
			F1969_24016(Current);
			break;
		default:
			break;
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_ITEM_HOLDER_IMP}.escape_pnd */
void F1969_23986 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O19664[dtype-1968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current + O19662[dtype-1968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_REFERENCE *)(Current + O19663[dtype-1968]) = (EIF_REFERENCE) NULL;
	F1910_22424(RTCV(F1956_23756(Current)));
	tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_47_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		F1956_23726(loc1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 2L), tr8_1, tr8_2, tr8_3, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_ITEM_HOLDER_IMP}.on_middle_button_down */
void F1969_23987 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R19654[dtype-1989])(Current, arg1, arg2, arg3, ((EIF_INTEGER_32) 2L));
	loc1 = F1970_24088(Current, arg2, arg3);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_10_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = F251_11704(RTCV(F1956_23756(Current)));
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,1475,0xFF01,0,0,1508,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y15892,Y15892_gen_type,dftype,1695);
				typarr0[5] = l_type.annotations | 0xFF00;
				typarr0[6] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr2 = RTLNTS(typres0.id, 5, 0);
		}
		tr3 = F1696_18976(Current);
		((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
		RTAR(tr2,tr3);
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 2L);
		ti4_1 = F1906_22336(RTCW(loc1));
		((EIF_TYPED_VALUE *)tr2+3)->it_i4 = ti4_1;
		ti4_1 = F1906_22337(RTCW(loc1));
		((EIF_TYPED_VALUE *)tr2+4)->it_i4 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
	}
	tr1 = *(EIF_REFERENCE *)(Current + O11051[dtype-412]);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,8,1475,1508,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 9, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg2;
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg3;
		((EIF_TYPED_VALUE *)tr1+3)->it_i4 = ((EIF_INTEGER_32) 3L);
		((EIF_TYPED_VALUE *)tr1+4)->it_r8 = (EIF_REAL_64) 0.0;
		((EIF_TYPED_VALUE *)tr1+5)->it_r8 = (EIF_REAL_64) 0.0;
		((EIF_TYPED_VALUE *)tr1+6)->it_r8 = (EIF_REAL_64) 0.0;
		ti4_1 = F1906_22336(RTCW(loc1));
		((EIF_TYPED_VALUE *)tr1+7)->it_i4 = ti4_1;
		ti4_1 = F1906_22337(RTCW(loc1));
		((EIF_TYPED_VALUE *)tr1+8)->it_i4 = ti4_1;
		F977_14409(loc2, tr1);
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_ITEM_HOLDER_IMP}.item_is_in_pnd */
EIF_BOOLEAN F1969_23990 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19663[Dtype(Current)-1968]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = '\01';
		tb1 = *(EIF_BOOLEAN *)(loc1 + O19553[Dtype(loc1)-1955]);
		if (!tb1) {
			tb1 = *(EIF_BOOLEAN *)(loc1 + O19554[Dtype(loc1)-1955]);
			Result = tb1;
		}
	}
	RTLE;
	return Result;
}

/* {EV_PICK_AND_DROPABLE_ITEM_HOLDER_IMP}.on_right_button_down */
void F1969_23991 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc3);
	RTLIU(7);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O19644[dtype-1968]) = (EIF_BOOLEAN) *(EIF_BOOLEAN *)(Current + O19664[dtype-1968]);
	loc1 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1906_22334(RTCW(loc1), arg2, arg3);
	loc1 = F1970_24088(Current, arg2, arg3);
	tb1 = '\01';
	if (!((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O19664[dtype-1968]) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O19553[dtype-1955])) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O19554[dtype-1955])))) {
		tb2 = '\0';
		tb3 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + O19663[dtype-1968]);
		loc2 = tr1;
		if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current + O19664[dtype-1968]) && EIF_TEST(loc2))) {
			tb4 = *(EIF_BOOLEAN *)(loc2 + O19553[Dtype(loc2)-1955]);
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) {
			tb3 = *(EIF_BOOLEAN *)(loc2 + O19554[Dtype(loc2)-1955]);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_10_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F251_11704(RTCV(F1956_23756(Current)));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,1475,0xFF01,0,0,1508,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = eif_final_id(Y15892,Y15892_gen_type,dftype,1695);
					typarr0[5] = l_type.annotations | 0xFF00;
					typarr0[6] = l_type.id;
				}
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr2 = RTLNTS(typres0.id, 5, 0);
			}
			tr3 = F1696_18976(Current);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 3L);
			ti4_1 = F1906_22336(RTCW(loc1));
			((EIF_TYPED_VALUE *)tr2+3)->it_i4 = ti4_1;
			ti4_1 = F1906_22337(RTCW(loc1));
			((EIF_TYPED_VALUE *)tr2+4)->it_i4 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		}
		tr1 = *(EIF_REFERENCE *)(Current + O11051[dtype-412]);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,8,1475,1508,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNTS(typres0.id, 9, 1);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg2;
			((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg3;
			((EIF_TYPED_VALUE *)tr1+3)->it_i4 = ((EIF_INTEGER_32) 3L);
			((EIF_TYPED_VALUE *)tr1+4)->it_r8 = (EIF_REAL_64) 0.0;
			((EIF_TYPED_VALUE *)tr1+5)->it_r8 = (EIF_REAL_64) 0.0;
			((EIF_TYPED_VALUE *)tr1+6)->it_r8 = (EIF_REAL_64) 0.0;
			ti4_1 = F1906_22336(RTCW(loc1));
			((EIF_TYPED_VALUE *)tr1+7)->it_i4 = ti4_1;
			ti4_1 = F1906_22337(RTCW(loc1));
			((EIF_TYPED_VALUE *)tr1+8)->it_i4 = ti4_1;
			F977_14409(loc3, tr1);
		}
		*(EIF_BOOLEAN *)(Current + O19643[dtype-1968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R19654[dtype-1989])(Current, arg1, arg2, arg3, ((EIF_INTEGER_32) 3L));
	*(EIF_BOOLEAN *)(Current + O19643[dtype-1968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current + O19644[dtype-1968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_ITEM_HOLDER_IMP}.on_left_button_down */
void F1969_23992 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc3);
	RTLIU(7);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O19663[dtype-1968]) != NULL) || *(EIF_BOOLEAN *)(Current + O19662[dtype-1968]))) {
		F1912_22507(Current);
	}
	loc1 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1906_22334(RTCW(loc1), arg2, arg3);
	loc1 = F1970_24088(Current, arg2, arg3);
	tb1 = '\01';
	if (!((EIF_BOOLEAN) !(EIF_BOOLEAN) ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current + O19664[dtype-1968]) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O19553[dtype-1955])) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O19554[dtype-1955])))) {
		tb2 = '\0';
		tb3 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + O19663[dtype-1968]);
		loc2 = tr1;
		if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current + O19664[dtype-1968]) && EIF_TEST(loc2))) {
			tb4 = *(EIF_BOOLEAN *)(loc2 + O19553[Dtype(loc2)-1955]);
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) {
			tb3 = *(EIF_BOOLEAN *)(loc2 + O19554[Dtype(loc2)-1955]);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_10_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = F251_11704(RTCV(F1956_23756(Current)));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,1475,0xFF01,0,0,1508,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = eif_final_id(Y15892,Y15892_gen_type,dftype,1695);
					typarr0[5] = l_type.annotations | 0xFF00;
					typarr0[6] = l_type.id;
				}
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr2 = RTLNTS(typres0.id, 5, 0);
			}
			tr3 = F1696_18976(Current);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1L);
			ti4_1 = F1906_22336(RTCW(loc1));
			((EIF_TYPED_VALUE *)tr2+3)->it_i4 = ti4_1;
			ti4_1 = F1906_22337(RTCW(loc1));
			((EIF_TYPED_VALUE *)tr2+4)->it_i4 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		}
		tr1 = *(EIF_REFERENCE *)(Current + O11051[dtype-412]);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,8,1475,1508,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNTS(typres0.id, 9, 1);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg2;
			((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg3;
			((EIF_TYPED_VALUE *)tr1+3)->it_i4 = ((EIF_INTEGER_32) 1L);
			((EIF_TYPED_VALUE *)tr1+4)->it_r8 = (EIF_REAL_64) 0.0;
			((EIF_TYPED_VALUE *)tr1+5)->it_r8 = (EIF_REAL_64) 0.0;
			((EIF_TYPED_VALUE *)tr1+6)->it_r8 = (EIF_REAL_64) 0.0;
			ti4_1 = F1906_22336(RTCW(loc1));
			((EIF_TYPED_VALUE *)tr1+7)->it_i4 = ti4_1;
			ti4_1 = F1906_22337(RTCW(loc1));
			((EIF_TYPED_VALUE *)tr1+8)->it_i4 = ti4_1;
			F977_14409(loc3, tr1);
		}
		*(EIF_BOOLEAN *)(Current + O19643[dtype-1968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	tb1 = F1612_18041(RTCV(F1696_18976(Current)));
	if (tb1) {
		loc1 = F1970_24088(Current, arg2, arg3);
		ti4_1 = F1906_22336(RTCW(loc1));
		ti4_2 = F1906_22337(RTCW(loc1));
		F1727_19571(Current, arg2, arg3, ((EIF_INTEGER_32) 1L), ti4_1, ti4_2);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R19654[dtype-1989])(Current, arg1, arg2, arg3, ((EIF_INTEGER_32) 1L));
	*(EIF_BOOLEAN *)(Current + O19643[dtype-1968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_ITEM_HOLDER_IMP}.on_left_button_up */
void F1969_23993 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,loc4);
	RTLIU(8);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1906_22334(RTCW(loc1), arg2, arg3);
	loc1 = F1970_24088(Current, arg2, arg3);
	if (*(EIF_BOOLEAN *)(Current + O19665[dtype-1968])) {
		loc2 = Current;
		loc2 = RTRV(eif_new_type(1989, 0x00), loc2);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			ti4_1 = F1906_22336(RTCW(loc1));
			ti4_2 = F1906_22337(RTCW(loc1));
			F1727_19574(RTCW(loc2), arg2, arg3, ((EIF_INTEGER_32) 1L), tr8_1, tr8_2, tr8_3, ti4_1, ti4_2);
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O19663[dtype-1968]);
		loc3 = tr1;
		if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current + O19664[dtype-1968]) && EIF_TEST(loc3))) {
			F1957_23763(loc3, arg2, arg3);
		} else {
			if (*(EIF_BOOLEAN *)(Current + O19662[dtype-1968])) {
				F1956_23721(Current, arg2, arg3);
				*(EIF_BOOLEAN *)(Current + O19662[dtype-1968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			} else {
				F1727_19573(Current, arg2, arg3);
			}
		}
	}
	tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_12_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = F251_11708(RTCV(F1956_23756(Current)));
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,1475,0xFF01,0,0,1508,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y15892,Y15892_gen_type,dftype,1695);
				typarr0[5] = l_type.annotations | 0xFF00;
				typarr0[6] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr2 = RTLNTS(typres0.id, 5, 0);
		}
		tr3 = F1696_18976(Current);
		((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
		RTAR(tr2,tr3);
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1L);
		ti4_1 = F1906_22336(RTCW(loc1));
		((EIF_TYPED_VALUE *)tr2+3)->it_i4 = ti4_1;
		ti4_1 = F1906_22337(RTCW(loc1));
		((EIF_TYPED_VALUE *)tr2+4)->it_i4 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
	}
	tr1 = *(EIF_REFERENCE *)(Current + O11055[dtype-412]);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,8,1475,1508,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 9, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg2;
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg3;
		((EIF_TYPED_VALUE *)tr1+3)->it_i4 = ((EIF_INTEGER_32) 1L);
		((EIF_TYPED_VALUE *)tr1+4)->it_r8 = (EIF_REAL_64) 0.0;
		((EIF_TYPED_VALUE *)tr1+5)->it_r8 = (EIF_REAL_64) 0.0;
		((EIF_TYPED_VALUE *)tr1+6)->it_r8 = (EIF_REAL_64) 0.0;
		ti4_1 = F1906_22336(RTCW(loc1));
		((EIF_TYPED_VALUE *)tr1+7)->it_i4 = ti4_1;
		ti4_1 = F1906_22337(RTCW(loc1));
		((EIF_TYPED_VALUE *)tr1+8)->it_i4 = ti4_1;
		F977_14409(loc4, tr1);
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_ITEM_HOLDER_IMP}.on_left_button_double_click */
void F1969_23994 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	F1969_23997(Current, arg1, arg2, arg3, ((EIF_INTEGER_32) 1L));
}

/* {EV_PICK_AND_DROPABLE_ITEM_HOLDER_IMP}.on_middle_button_double_click */
void F1969_23995 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	F1969_23997(Current, arg1, arg2, arg3, ((EIF_INTEGER_32) 2L));
}

/* {EV_PICK_AND_DROPABLE_ITEM_HOLDER_IMP}.on_right_button_double_click */
void F1969_23996 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	F1969_23997(Current, arg1, arg2, arg3, ((EIF_INTEGER_32) 3L));
}

/* {EV_PICK_AND_DROPABLE_ITEM_HOLDER_IMP}.button_double_click_received */
void F1969_23997 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1906_22334(RTCW(loc1), arg2, arg3);
	loc1 = F1970_24088(Current, arg2, arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R19655[dtype-1989])(Current, arg1, arg2, arg3, arg4);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_11_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = F251_11706(RTCV(F1956_23756(Current)));
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,1475,0xFF01,0,0,1508,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y15892,Y15892_gen_type,dftype,1695);
				typarr0[5] = l_type.annotations | 0xFF00;
				typarr0[6] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr2 = RTLNTS(typres0.id, 5, 0);
		}
		tr3 = F1696_18976(Current);
		((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
		RTAR(tr2,tr3);
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg4;
		ti4_1 = F1906_22336(RTCW(loc1));
		((EIF_TYPED_VALUE *)tr2+3)->it_i4 = ti4_1;
		ti4_1 = F1906_22337(RTCW(loc1));
		((EIF_TYPED_VALUE *)tr2+4)->it_i4 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
	}
	tr1 = *(EIF_REFERENCE *)(Current + O11053[dtype-412]);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,8,1475,1508,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 9, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg2;
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg3;
		((EIF_TYPED_VALUE *)tr1+3)->it_i4 = arg4;
		((EIF_TYPED_VALUE *)tr1+4)->it_r8 = (EIF_REAL_64) 0.0;
		((EIF_TYPED_VALUE *)tr1+5)->it_r8 = (EIF_REAL_64) 0.0;
		((EIF_TYPED_VALUE *)tr1+6)->it_r8 = (EIF_REAL_64) 0.0;
		ti4_1 = F1906_22336(RTCW(loc1));
		((EIF_TYPED_VALUE *)tr1+7)->it_i4 = ti4_1;
		ti4_1 = F1906_22337(RTCW(loc1));
		((EIF_TYPED_VALUE *)tr1+8)->it_i4 = ti4_1;
		F977_14409(loc2, tr1);
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_ITEM_HOLDER_IMP}.discard_press_event */
void F1969_24008 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O19659[Dtype(Current)-1968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_PICK_AND_DROPABLE_ITEM_HOLDER_IMP}.keep_press_event */
void F1969_24009 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O19659[Dtype(Current)-1968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_PICK_AND_DROPABLE_ITEM_HOLDER_IMP}.set_item_source */
void F1969_24014 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O19663[Dtype(Current)-1968]) = (EIF_REFERENCE) arg1;
}

/* {EV_PICK_AND_DROPABLE_ITEM_HOLDER_IMP}.set_parent_source_true */
void F1969_24015 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O19662[Dtype(Current)-1968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_PICK_AND_DROPABLE_ITEM_HOLDER_IMP}.set_parent_source_false */
void F1969_24016 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O19662[Dtype(Current)-1968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_PICK_AND_DROPABLE_ITEM_HOLDER_IMP}.set_item_source_true */
void F1969_24017 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O19664[Dtype(Current)-1968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_PICK_AND_DROPABLE_ITEM_HOLDER_IMP}.set_item_source_false */
void F1969_24018 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O19664[Dtype(Current)-1968]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

void EIF_Minit1952 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
