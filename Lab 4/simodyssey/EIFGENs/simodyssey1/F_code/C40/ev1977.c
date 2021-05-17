/*
 * Code for class EV_LABEL_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1977.h"
#include <math.h>
#include "eif_helpers.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_LABEL_IMP}.make */
void F1994_24920 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	RTAOMS(24919,1);
	tr1 = RTOUCR(249,F1970_24036, (Current));
	RTCOMS(tr2,24919,0,"",0,0);
	F1945_23334(Current, tr1, tr2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	F1750_19724(Current);
	F1989_24674(Current);
	F1989_24672(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_18_6_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_18_6_9_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	F1970_24029(Current);
	RTLE;
}

/* {EV_LABEL_IMP}.set_text */
void F1994_24923 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	tb1 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_49_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = F1558_6555(loc1, arg1);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			F1994_24935(Current);
		} else {
			F1994_24936(Current, arg1);
		}
		F1747_19709(Current, arg1);
		if (F1912_22468(Current)) {
			F1912_22563(Current);
		}
	}
	RTLE;
}

/* {EV_LABEL_IMP}.set_font */
void F1994_24924 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_37_) == NULL)) {
		tr1 = F1750_19721(Current);
		tb2 = F1602_17882(RTCW(tr1), arg1);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		F1750_19723(Current, arg1);
		if ((EIF_BOOLEAN) (F1946_23340(Current) > ((EIF_INTEGER_32) 0L))) {
			tr1 = F1747_19708(Current);
			F1994_24936(Current, tr1);
		}
		if (F1912_22468(Current)) {
			F1912_22563(Current);
		}
	}
	RTLE;
}

/* {EV_LABEL_IMP}.align_text_center */
void F1994_24925 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1748_19714(Current);
	if (F1912_22468(Current)) {
		F1912_22563(Current);
	}
	RTLE;
}

/* {EV_LABEL_IMP}.align_text_left */
void F1994_24927 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1748_19716(Current);
	if (F1912_22468(Current)) {
		F1912_22563(Current);
	}
	RTLE;
}

/* {EV_LABEL_IMP}.set_default_minimum_size */
void F1994_24935 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	RTAOMS(24934,1);
	RTCOMS(tr1,24934,0," ",1,32);
	F1994_24936(Current, tr1);
	RTLE;
}

/* {EV_LABEL_IMP}.accommodate_text */
void F1994_24936 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REAL_32 loc4 = (EIF_REAL_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REAL_32 tr4_4;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc5);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,arg1);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_38_);
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		loc1 = F1885_21706(loc5, arg1);
	} else {
		tr1 = F1750_19721(Current);
		loc1 = F1602_17881(RTCW(tr1), arg1);
	}
	loc2 = eif_integer_32_item(RTCW(loc1),1);
	loc3 = eif_integer_32_item(RTCW(loc1),2);
	loc4 = *(EIF_REAL_32 *)(Current+ _R32OFF_55_18_6_12_0_);
	if ((EIF_BOOLEAN) !eif_is_equal_real_32 (loc4, (EIF_REAL_32) (EIF_REAL_64) 0.0)) {
		tr4_1 = (EIF_REAL_32) (loc2);
		tr4_2 = (EIF_REAL_32) sin((double) loc4);
		tr4_3 = (EIF_REAL_32) (loc3);
		tr4_4 = (EIF_REAL_32) cos((double) loc4);
		tr1 = RTLNS(eif_new_type(1481, 0x00).id, 1481, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) ((EIF_REAL_32) (tr4_1 * tr4_2) + (EIF_REAL_32) (tr4_3 * tr4_4));
		ti4_1 = F1480_5568(RTCW(tr1));
		loc3 = (EIF_INTEGER_32) ti4_1;
		tr4_1 = (EIF_REAL_32) (loc2);
		tr4_2 = (EIF_REAL_32) cos((double) loc4);
		tr4_3 = (EIF_REAL_32) (loc3);
		tr4_4 = (EIF_REAL_32) sin((double) loc4);
		tr1 = RTLNS(eif_new_type(1481, 0x00).id, 1481, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) ((EIF_REAL_32) (tr4_1 * tr4_2) + (EIF_REAL_32) (tr4_3 * tr4_4));
		ti4_1 = F1480_5568(RTCW(tr1));
		loc2 = (EIF_INTEGER_32) ti4_1;
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_18_6_10_) = (EIF_INTEGER_32) loc3;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_18_6_11_) = (EIF_INTEGER_32) loc2;
	ti4_1 = eif_abs_int32 (loc2);
	ti4_2 = eif_abs_int32 (loc3);
	F1724_19513(Current, ti4_1, ti4_2, (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_LABEL_IMP}.default_style */
EIF_INTEGER_32 F1994_24937 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 268435456L),((EIF_INTEGER_32) 1073741824L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 256L));
	Result = eif_bit_or(ti4_1,((EIF_INTEGER_32) 13L));
	return Result;
}

/* {EV_LABEL_IMP}.on_draw_item */
void F1994_24938 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc12 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc13 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_CHARACTER_32 tw1;
	RTLD;
	
	RTLI(14);
	RTLR(0,loc9);
	RTLR(1,Current);
	RTLR(2,loc8);
	RTLR(3,loc1);
	RTLR(4,arg1);
	RTLR(5,loc5);
	RTLR(6,loc14);
	RTLR(7,tr1);
	RTLR(8,loc2);
	RTLR(9,loc11);
	RTLR(10,loc4);
	RTLR(11,loc6);
	RTLR(12,loc7);
	RTLR(13,loc10);
	RTLIU(14);
	
	RTGC;
	loc9 = F1970_24145(Current);
	loc8 = RTLNS(eif_new_type(1320, 0x01).id, 1320, _OBJSIZ_0_2_0_3_0_1_0_0_);
	F1321_15590(RTCW(loc8), loc9);
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1));
	loc5 = F1904_22283(RTCW(arg1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_49_);
	loc14 = tr1;
	if (EIF_TEST(loc14)) {
		loc12 = F1849_20946(RTCV(RTOUCR(250,F476_13915, (Current))));
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
		ti4_1 = F1564_6868(loc14, tw1);
		loc13 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
		if (loc12) {
			loc2 = (EIF_REFERENCE) loc1;
		} else {
			loc2 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
			F1307_15414(RTCW(loc2), loc1);
			loc11 = RTLNS(eif_new_type(1319, 0x01).id, 1319, _OBJSIZ_0_3_0_3_0_2_0_0_);
			ti4_1 = F1408_17332(RTCW(loc5));
			ti4_2 = F1408_17333(RTCW(loc5));
			F1320_15566(RTCW(loc11), loc1, ti4_1, ti4_2);
			F1306_15265(RTCW(loc2), loc11);
			F519_14212(RTCW(loc11));
		}
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
		switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_18_6_4_)) {
			case 1L:
				ti4_1 = eif_bit_or(loc3,((EIF_INTEGER_32) 0L));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 3L:
				ti4_1 = eif_bit_or(loc3,((EIF_INTEGER_32) 2L));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			default:
				ti4_1 = eif_bit_or(loc3,((EIF_INTEGER_32) 1L));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
		}
		if (loc13) {
			ti4_1 = eif_bit_or(loc3,((EIF_INTEGER_32) 32L));
			loc3 = (EIF_INTEGER_32) ti4_1;
			switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_18_6_9_)) {
				case 1L:
					ti4_1 = eif_bit_or(loc3,((EIF_INTEGER_32) 0L));
					loc3 = (EIF_INTEGER_32) ti4_1;
					break;
				case 2L:
					ti4_1 = eif_bit_or(loc3,((EIF_INTEGER_32) 8L));
					loc3 = (EIF_INTEGER_32) ti4_1;
					break;
				default:
					ti4_1 = eif_bit_or(loc3,((EIF_INTEGER_32) 4L));
					loc3 = (EIF_INTEGER_32) ti4_1;
					break;
			}
			loc4 = (EIF_REFERENCE) loc5;
		} else {
			switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_18_6_9_)) {
				case 1L:
					loc4 = (EIF_REFERENCE) loc5;
					break;
				case 2L:
					loc4 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
					ti4_1 = F1408_17326(RTCW(loc5));
					ti4_2 = F1408_17331(RTCW(loc5));
					ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_18_6_10_);
					ti4_4 = F1408_17330(RTCW(loc5));
					ti4_5 = F1408_17331(RTCW(loc5));
					F1408_17321(RTCW(loc4), ti4_1, (EIF_INTEGER_32) (ti4_2 - ti4_3), ti4_4, ti4_5);
					break;
				default:
					loc4 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
					ti4_1 = F1408_17326(RTCW(loc5));
					ti4_2 = F1408_17328(RTCW(loc5));
					ti4_3 = F1408_17333(RTCW(loc5));
					ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_55_18_6_10_);
					ti4_5 = F1408_17330(RTCW(loc5));
					ti4_6 = F1408_17331(RTCW(loc5));
					F1408_17321(RTCW(loc4), ti4_1, (EIF_INTEGER_32) (ti4_2 + (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 - ti4_4) / ((EIF_INTEGER_32) 2L))), ti4_5, ti4_6);
					break;
			}
		}
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R10490[Dtype(RTCW(tr1))-409])(tr1, Current, loc2, loc5, loc8);
		loc6 = *(EIF_REFERENCE *)(Current + _REFACS_38_);
		if ((EIF_BOOLEAN)(loc6 == NULL)) {
			loc7 = *(EIF_REFERENCE *)(RTCV(F1750_19721(Current)) + _REFACS_1_);
			loc7 = RTRV(eif_new_type(1885, 0x00), loc7);
			RTCT0("l_font_imp /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc7 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			loc6 = *(EIF_REFERENCE *)(RTCW(loc7) + _REFACS_2_);
		}
		F1306_15264(RTCW(loc2), loc6);
		loc10 = *(EIF_REFERENCE *)(RTCV(F1715_19379(Current)) + _REFACS_1_);
		loc10 = RTRV(eif_new_type(1829, 0x00), loc10);
		RTCT0("l_color_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc10 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1306_15253(RTCW(loc2), loc10);
		F1306_15255(RTCW(loc2));
		if ((EIF_BOOLEAN) !F1912_22467(Current)) {
			F1306_15280(RTCW(loc2), loc14, loc4, loc3);
		} else {
			F1306_15278(RTCW(loc2), loc14, loc4, loc3);
		}
		if ((EIF_BOOLEAN) !loc12) {
			ti4_1 = F1408_17326(RTCW(loc5));
			ti4_2 = F1408_17328(RTCW(loc5));
			ti4_3 = F1408_17332(RTCW(loc5));
			ti4_4 = F1408_17333(RTCW(loc5));
			F1306_15311(RTCW(loc1), ti4_1, ti4_2, ti4_3, ti4_4, loc2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 13369376L));
		}
		F1306_15272(RTCW(loc2));
		F519_14213(RTCW(loc2));
	} else {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R10490[Dtype(RTCW(tr1))-409])(tr1, Current, loc1, loc5, loc8);
	}
	F519_14213(RTCW(loc8));
	RTLE;
}

/* {EV_LABEL_IMP}.on_erase_background */
void F1994_24939 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	
	
	F1912_22507(Current);
}

/* {EV_LABEL_IMP}.on_size */
void F1994_24940 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(F1970_24039(Current) != NULL)) {
		F1912_22564(Current);
	}
	F1970_24130(Current, arg1, arg2, arg3);
	RTLE;
}

void EIF_Minit1977 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
