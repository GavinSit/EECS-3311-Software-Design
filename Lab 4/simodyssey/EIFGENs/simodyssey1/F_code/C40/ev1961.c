/*
 * Code for class EV_FRAME_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1961.h"
#include <windows.h>
#include "wel.h"
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

/* {EV_FRAME_IMP}.make */
void F1978_24349 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	F1925_22879(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_64_25_6_12_0_0_);
	tr2 = RTMS_EX_H("Button",6,2084447598);
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_REFERENCE)) R10485[Dtype(RTCW(tr1))-409])(tr1, tp1, tr2);
	*(EIF_POINTER *)(Current+ _PTROFF_64_25_6_12_0_2_) = (EIF_POINTER) tp1;
	F1750_19724(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_11_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	ti4_1 = F1760_19888(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_4_) = (EIF_INTEGER_32) ti4_1;
	F1971_24161(Current);
	RTLE;
}

/* {EV_FRAME_IMP}.frame_style */
EIF_INTEGER_32 F1978_24350 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_11_);
}


/* {EV_FRAME_IMP}.client_x */
EIF_INTEGER_32 F1978_24351 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1978_24371(Current);
}

/* {EV_FRAME_IMP}.client_y */
EIF_INTEGER_32 F1978_24352 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_9_);
	ti4_2 = F1978_24372(Current);
	Result = eif_max_int32 (ti4_1,ti4_2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_5_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	RTLE;
	return Result;
}

/* {EV_FRAME_IMP}.client_width */
EIF_INTEGER_32 F1978_24353 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1970_24041(Current);
	ti4_2 = F1978_24351(Current);
	ti4_3 = F1978_24371(Current);
	Result = eif_max_int32 ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) - ti4_3),((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {EV_FRAME_IMP}.client_height */
EIF_INTEGER_32 F1978_24354 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1970_24043(Current);
	ti4_2 = F1978_24352(Current);
	ti4_3 = F1978_24371(Current);
	Result = eif_max_int32 ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) - ti4_3),((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {EV_FRAME_IMP}.set_font */
void F1978_24355 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	F1750_19723(Current, arg1);
	F1978_24360(Current);
	F1725_19528(Current, ((EIF_INTEGER_32) 3L), Current, (EIF_BOOLEAN) 0);
	F1912_22563(Current);
	RTLE;
}

/* {EV_FRAME_IMP}.enable_sensitive */
void F1978_24356 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1977_24334(Current);
	F1912_22563(Current);
	RTLE;
}

/* {EV_FRAME_IMP}.disable_sensitive */
void F1978_24357 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1977_24335(Current);
	F1912_22563(Current);
	RTLE;
}

/* {EV_FRAME_IMP}.set_text */
void F1978_24359 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4659[Dtype(RTCW(arg1))-1560])(arg1);
	if (tb1) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_10_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_9_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		F1747_19709(Current, arg1);
	} else {
		F1747_19709(Current, arg1);
		F1978_24360(Current);
	}
	F1725_19528(Current, ((EIF_INTEGER_32) 3L), Current, (EIF_BOOLEAN) 0);
	F1912_22563(Current);
	RTLE;
}

/* {EV_FRAME_IMP}.update_text_size */
void F1978_24360 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,loc4);
	RTLIU(6);
	
	RTGC;
	loc3 = F1747_19708(Current);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
	F1565_6929(RTCW(loc3), tw1);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
	F1565_6952(RTCW(loc3), tw1);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_38_) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_38_);
		loc1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
		loc1 = RTRV(eif_new_type(1885, 0x00), loc1);
		RTCT0("font_not_void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc2 = F1886_21737(RTCW(loc1), loc3);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_39_);
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			loc2 = F1885_21706(loc4, loc3);
		}
	}
	RTCT0("t /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	ti4_1 = eif_integer_32_item(RTCW(loc2),1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_10_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = eif_integer_32_item(RTCW(loc2),2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_9_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {EV_FRAME_IMP}.set_default_minimum_size */
void F1978_24361 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1978_24371(Current);
	F1725_19527(Current, (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ((EIF_INTEGER_32) 7L)), (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_1), (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_FRAME_IMP}.align_text_center */
void F1978_24363 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1748_19714(Current);
	F1912_22563(Current);
	RTLE;
}

/* {EV_FRAME_IMP}.align_text_left */
void F1978_24364 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1748_19716(Current);
	F1912_22563(Current);
	RTLE;
}

/* {EV_FRAME_IMP}.set_top_level_window_imp */
void F1978_24366 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_53_) = (EIF_REFERENCE) arg1;
	tr1 = F1977_24333(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19735[Dtype(loc1)-1972])(loc1, arg1);
	}
	RTLE;
}

/* {EV_FRAME_IMP}.compute_minimum_width */
void F1978_24367 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tb1 = '\0';
	tr1 = F1977_24333(Current);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[Dtype(loc2)-1871])(loc2);
		tb1 = tb2;
	}
	if (tb1) {
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16402[Dtype(loc2)-1730])(loc2);
	}
	ti4_1 = F1978_24351(Current);
	ti4_2 = F1978_24371(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ti4_1) + ti4_2);
	ti4_1 = eif_max_int32 (loc1,(EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_10_) + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ((EIF_INTEGER_32) 7L))));
	loc1 = (EIF_INTEGER_32) ti4_1;
	F1725_19525(Current, loc1, arg1);
	RTLE;
}

/* {EV_FRAME_IMP}.compute_minimum_height */
void F1978_24368 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tb1 = '\0';
	tr1 = F1977_24333(Current);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[Dtype(loc2)-1871])(loc2);
		tb1 = tb2;
	}
	if (tb1) {
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16403[Dtype(loc2)-1730])(loc2);
	}
	ti4_1 = F1978_24352(Current);
	ti4_2 = F1978_24371(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ti4_1) + ti4_2);
	F1725_19526(Current, loc1, arg1);
	RTLE;
}

/* {EV_FRAME_IMP}.compute_minimum_size */
void F1978_24369 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tb1 = '\0';
	tr1 = F1977_24333(Current);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[Dtype(loc3)-1871])(loc3);
		tb1 = tb2;
	}
	if (tb1) {
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16402[Dtype(loc3)-1730])(loc3);
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16403[Dtype(loc3)-1730])(loc3);
	}
	ti4_1 = F1978_24351(Current);
	ti4_2 = F1978_24371(Current);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + ti4_1) + ti4_2);
	ti4_1 = F1978_24352(Current);
	ti4_2 = F1978_24371(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ti4_1) + ti4_2);
	ti4_1 = eif_max_int32 (loc2,(EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_10_) + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ((EIF_INTEGER_32) 7L))));
	loc2 = (EIF_INTEGER_32) ti4_1;
	F1725_19527(Current, loc2, loc1, arg1);
	RTLE;
}

/* {EV_FRAME_IMP}.top_level_window_imp */
EIF_REFERENCE F1978_24370 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_53_);
}


/* {EV_FRAME_IMP}.total_border_width */
EIF_INTEGER_32 F1978_24371 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1978_24372(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_5_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	RTLE;
	return Result;
}

/* {EV_FRAME_IMP}.frame_style_border_width */
EIF_INTEGER_32 F1978_24372 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_11_)) {
		case 1L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			break;
		case 2L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			break;
		case 3L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			break;
		case 4L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTLE;
	return Result;
}

/* {EV_FRAME_IMP}.on_erase_background */
void F1978_24376 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_64_16_)) {
		F1925_22888(Current, arg1, arg2);
	} else {
		F1912_22507(Current);
		tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 1L)));
		F214_11244(Current, tp1);
	}
	RTLE;
}

/* {EV_FRAME_IMP}.on_paint */
void F1978_24377 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc15 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(15);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,loc12);
	RTLR(3,arg1);
	RTLR(4,loc13);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLR(7,arg2);
	RTLR(8,loc7);
	RTLR(9,loc16);
	RTLR(10,tr1);
	RTLR(11,loc8);
	RTLR(12,loc17);
	RTLR(13,loc10);
	RTLR(14,loc14);
	RTLIU(15);
	
	RTGC;
	loc15 = F1849_20946(RTCV(RTOUCR(250,F476_13915, (Current))));
	loc9 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
	if (loc15) {
		loc12 = (EIF_REFERENCE) arg1;
	} else {
		loc12 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
		F1307_15414(RTCW(loc12), arg1);
		loc13 = RTLNS(eif_new_type(1319, 0x01).id, 1319, _OBJSIZ_0_3_0_3_0_2_0_0_);
		ti4_1 = F1970_24041(Current);
		ti4_2 = F1970_24043(Current);
		F1320_15566(RTCW(loc13), arg1, ti4_1, ti4_2);
		F1306_15265(RTCW(loc12), loc13);
		F519_14212(RTCW(loc13));
	}
	loc3 = F1723_19499(Current);
	loc4 = F1723_19500(Current);
	switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_11_)) {
		case 1L:
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			break;
		case 2L:
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			break;
		case 3L:
			loc1 = (EIF_INTEGER_32) EDGE_ETCHED;
			break;
		case 4L:
			loc1 = (EIF_INTEGER_32) EDGE_BUMP;
			break;
		default:
			break;
	}
	loc5 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1408_17321(RTCW(loc5), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	loc6 = F1971_24179(Current);
	RTCT0("bk_brush /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc6 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R10490[Dtype(RTCW(loc9))-409])(loc9, Current, loc12, arg2, loc6);
	if ((EIF_BOOLEAN)(F1748_19712(Current) == ((EIF_INTEGER_32) 1L))) {
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	} else {
		if ((EIF_BOOLEAN)(F1748_19712(Current) == ((EIF_INTEGER_32) 2L))) {
			loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_10_);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - loc2) / ((EIF_INTEGER_32) 2L));
		} else {
			if ((EIF_BOOLEAN)(F1748_19712(Current) == ((EIF_INTEGER_32) 3L))) {
				loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_10_);
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - loc2) - ((EIF_INTEGER_32) 7L));
			}
		}
	}
	F1408_17334(RTCW(loc5), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_9_) / ((EIF_INTEGER_32) 2L)), loc3, loc4);
	if (F1912_22467(Current)) {
		loc11 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		loc11 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	}
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_32) EDGE_ETCHED)) {
		tb2 = F1910_22408(RTCV(F1956_23756(Current)));
		tb1 = tb2;
	}
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R10488[Dtype(RTCW(loc9))-409])(loc9, *(EIF_POINTER *)(Current+ _PTROFF_64_25_6_12_0_2_), loc12, ((EIF_INTEGER_32) 4L), loc11, loc5, NULL, loc6);
	} else {
		ti4_1 = (EIF_INTEGER_32) BF_RECT;
		F504_14166(Current, loc12, loc5, loc1, ti4_1);
		ti4_1 = eif_bit_and(loc1,((EIF_INTEGER_32) 1L));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			loc7 = F1896_22123(Current);
			F1306_15261(RTCW(loc12), loc7);
			F1306_15293(RTCW(loc12), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_9_) / ((EIF_INTEGER_32) 2L)), loc3, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_9_) / ((EIF_INTEGER_32) 2L)));
			F1306_15293(RTCW(loc12), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_9_) / ((EIF_INTEGER_32) 2L)), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L)));
			F1306_15266(RTCW(loc12));
			F519_14213(RTCW(loc7));
		}
	}
	F1408_17334(RTCW(loc5), loc2, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc2 + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_10_)), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_9_));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R10490[Dtype(RTCW(loc9))-409])(loc9, Current, loc12, loc5, loc6);
	F519_14213(RTCW(loc6));
	tb1 = F737_2537(RTCV(F1747_19708(Current)));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_38_);
		loc16 = tr1;
		if (EIF_TEST(loc16)) {
			loc8 = *(EIF_REFERENCE *)(loc16 + _REFACS_1_);
			loc8 = RTRV(eif_new_type(1885, 0x00), loc8);
			RTCT0("font_not_void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc8 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tr1 = *(EIF_REFERENCE *)(RTCW(loc8) + _REFACS_2_);
			F1306_15264(RTCW(loc12), tr1);
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_39_);
			loc17 = tr1;
			if (EIF_TEST(loc17)) {
				F1306_15264(RTCW(loc12), loc17);
			}
		}
		tr1 = F1970_24146(Current);
		F1306_15253(RTCW(loc12), tr1);
		tr1 = F1970_24145(Current);
		F1306_15252(RTCW(loc12), tr1);
		loc10 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1408_17321(RTCW(loc10), loc2, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc2 + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_10_)), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_25_6_9_));
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_57_) != NULL)) {
			loc14 = *(EIF_REFERENCE *)(Current + _REFACS_57_);
		} else {
			loc14 = RTLNS(eif_new_type(72, 0x01).id, 72, _OBJSIZ_0_0_0_0_0_0_0_0_);
			loc14 = F73_9890(RTCW(loc14));
			loc14 = *(EIF_REFERENCE *)(RTCW(loc14) + _REFACS_1_);
			loc14 = RTRV(eif_new_type(1829, 0x00), loc14);
		}
		RTCT0("color_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc14 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_64_25_6_12_0_2_);
		tr1 = F1747_19708(Current);
		tb1 = F1912_22467(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN, EIF_REFERENCE, EIF_REFERENCE)) R10496[Dtype(RTCW(loc9))-409])(loc9, tp1, loc12, ((EIF_INTEGER_32) 4L), ((EIF_INTEGER_32) 2L), tr1, ((EIF_INTEGER_32) 1L), tb1, loc10, loc14);
	}
	if ((EIF_BOOLEAN) !loc15) {
		ti4_1 = F1408_17326(RTCW(arg2));
		ti4_2 = F1408_17328(RTCW(arg2));
		ti4_3 = F1408_17332(RTCW(arg2));
		ti4_4 = F1408_17333(RTCW(arg2));
		ti4_5 = F1408_17326(RTCW(arg2));
		ti4_6 = F1408_17328(RTCW(arg2));
		F1306_15311(RTCW(arg1), ti4_1, ti4_2, ti4_3, ti4_4, loc12, ti4_5, ti4_6, ((EIF_INTEGER_32) 13369376L));
	}
	F1306_15272(RTCW(loc12));
	F519_14213(RTCW(loc12));
	F1912_22507(Current);
	RTLE;
}

/* {EV_FRAME_IMP}.on_size */
void F1978_24378 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1912_22564(Current);
	F1977_24345(Current, arg1, arg2, arg3);
	RTLE;
}

/* {EV_FRAME_IMP}.on_wm_theme_changed */
void F1978_24379 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER)) R10486[Dtype(RTCW(tr1))-409])(tr1, *(EIF_POINTER *)(Current+ _PTROFF_64_25_6_12_0_2_));
	F1910_22406(RTCV(F1956_23756(Current)));
	tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_64_25_6_12_0_0_);
	tr2 = RTMS_EX_H("Button",6,2084447598);
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_REFERENCE)) R10485[Dtype(RTCW(tr1))-409])(tr1, tp1, tr2);
	*(EIF_POINTER *)(Current+ _PTROFF_64_25_6_12_0_2_) = (EIF_POINTER) tp1;
	RTLE;
}

void EIF_Minit1961 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
