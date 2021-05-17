/*
 * Code for class EV_PIXMAP_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1855.h"
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

/* {EV_PIXMAP_IMP}.make */
void F1872_21252 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	F1872_21281(Current);
	F1872_21283(Current);
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_PIXMAP_IMP}.init_file_drop_actions */
void F1872_21255 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EV_PIXMAP_IMP}.set_with_resource */
void F1872_21259 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	F1872_21391(Current);
	F1872_21390(Current);
	tr1 = arg1;
	*(EIF_REFERENCE *)(Current + _REFACS_38_) = RTRV(eif_new_type(1323, 0), tr1);
	RTAR(Current, tr1);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_38_) == NULL)) {
		tr1 = arg1;
		*(EIF_REFERENCE *)(Current + _REFACS_39_) = RTRV(eif_new_type(1849, 0), tr1);
		RTAR(Current, tr1);
	}
	F519_14211(RTCW(arg1));
	F1872_21395(Current);
	RTLE;
}

/* {EV_PIXMAP_IMP}.set_with_default */
void F1872_21260 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1872_21391(Current);
	F1872_21390(Current);
	tr1 = RTLNSMART(eif_new_type(1421, 0).id);
	F1422_5225(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_41_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_42_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {EV_PIXMAP_IMP}.gdi_compact */
void F1872_21265 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_41_) != NULL)) {
		F1872_21391(Current);
		F1872_21390(Current);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_42_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
}

/* {EV_PIXMAP_IMP}.update_content */
void F1872_21267 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_42_8_)) {
		F1872_21391(Current);
		F1872_21390(Current);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_41_) != NULL)) {
			F1871_21247(Current);
		}
		*(EIF_BOOLEAN *)(Current+ _CHROFF_42_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {EV_PIXMAP_IMP}.icon */
EIF_REFERENCE F1872_21268 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1872_21267(Current);
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_38_);
}

/* {EV_PIXMAP_IMP}.cursor */
EIF_REFERENCE F1872_21269 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1872_21267(Current);
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_39_);
}

/* {EV_PIXMAP_IMP}.get_bitmap */
EIF_REFERENCE F1872_21270 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	F1872_21267(Current);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_38_) != NULL) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_39_) != NULL)) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_36_) == NULL)) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_40_) == NULL)) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_37_) == NULL))) {
		F1872_21396(Current);
		F1872_21390(Current);
	} else {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_36_) == NULL)) {
			loc1 = F1872_21389(Current);
			ti4_1 = F519_14208(RTCW(loc1));
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_3_) = (EIF_INTEGER_32) ti4_1;
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + _REFACS_36_) = (EIF_REFERENCE) loc1;
		}
	}
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_36_);
	RTCT0("l_private_bitmap /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F519_14211(RTCW(loc1));
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {EV_PIXMAP_IMP}.get_mask_bitmap */
EIF_REFERENCE F1872_21271 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	F1872_21267(Current);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_38_) != NULL) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_39_) != NULL)) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_36_) == NULL)) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_40_) == NULL)) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_37_) == NULL))) {
		F1872_21396(Current);
		F1872_21390(Current);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_37_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F519_14211(loc1);
		RTLE;
		return (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_PIXMAP_IMP}.has_mask */
EIF_BOOLEAN F1872_21272 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1872_21267(Current);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_38_) != NULL) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_39_) != NULL))) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_37_) != NULL);
	}/* NOTREACHED */
	
}

/* {EV_PIXMAP_IMP}.palette */
EIF_REFERENCE F1872_21273 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1872_21267(Current);
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_40_);
}

/* {EV_PIXMAP_IMP}.stretch */
void F1872_21274 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc8);
	RTLR(4,loc3);
	RTLR(5,loc5);
	RTLR(6,loc2);
	RTLR(7,loc4);
	RTLIU(8);
	
	RTGC;
	F1872_21267(Current);
	loc6 = F1872_21275(Current);
	loc7 = F1872_21276(Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_36_) == NULL)) {
		F1872_21396(Current);
		F1872_21390(Current);
	}
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_36_);
	RTCT0("tmp_bitmap /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = F1872_21394(Current, loc1, arg1, arg2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_36_) = (EIF_REFERENCE) tr1;
	F519_14210(RTCW(loc1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_37_);
	loc8 = tr1;
	if (EIF_TEST(loc8)) {
		loc3 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
		F1307_15413(RTCW(loc3));
		F1306_15265(RTCW(loc3), loc8);
		loc5 = (EIF_REFERENCE) loc8;
		F1306_15265(RTCW(loc3), loc5);
		loc2 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
		F1307_15413(RTCW(loc2));
		F1306_15254(RTCW(loc2));
		loc4 = RTLNS(eif_new_type(1319, 0x01).id, 1319, _OBJSIZ_0_3_0_3_0_2_0_0_);
		F1320_15566(RTCW(loc4), loc2, arg1, arg2);
		F519_14209(RTCW(loc4));
		RTAR(Current, loc4);
		*(EIF_REFERENCE *)(Current + _REFACS_37_) = (EIF_REFERENCE) loc4;
		F1306_15265(RTCW(loc2), loc4);
		F1306_15315(RTCW(loc2), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), arg1, arg2, loc3, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), loc6, loc7, ((EIF_INTEGER_32) 13369376L));
		F1306_15271(RTCW(loc3));
		F519_14213(RTCW(loc3));
		F1306_15271(RTCW(loc2));
		F519_14213(RTCW(loc2));
		F519_14210(RTCW(loc5));
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_1_) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_2_) = (EIF_INTEGER_32) arg2;
	RTLE;
}

/* {EV_PIXMAP_IMP}.width */
EIF_INTEGER_32 F1872_21275 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1872_21267(Current);
	RTLE;
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_1_);
}

/* {EV_PIXMAP_IMP}.height */
EIF_INTEGER_32 F1872_21276 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1872_21267(Current);
	RTLE;
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_2_);
}

/* {EV_PIXMAP_IMP}.is_tabable_to */
EIF_BOOLEAN F1872_21278 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_42_9_);
	Result = eif_bit_test(EIF_NATURAL_8,tu1_1,((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP}.is_tabable_from */
EIF_BOOLEAN F1872_21279 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_42_9_);
	Result = eif_bit_test(EIF_NATURAL_8,tu1_1,((EIF_INTEGER_32) 2L));
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP}.enable_tabable_from */
void F1872_21280 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_42_9_);
	tu1_1 = eif_set_bit(EIF_NATURAL_8,tu1_1,(EIF_BOOLEAN) 1,((EIF_INTEGER_32) 2L));
	*(EIF_NATURAL_8 *)(Current+ _CHROFF_42_9_) = (EIF_NATURAL_8) tu1_1;
	RTLE;
}

/* {EV_PIXMAP_IMP}.disable_tabable_from */
void F1872_21281 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_42_9_);
	tu1_1 = eif_set_bit(EIF_NATURAL_8,tu1_1,(EIF_BOOLEAN) 0,((EIF_INTEGER_32) 2L));
	*(EIF_NATURAL_8 *)(Current+ _CHROFF_42_9_) = (EIF_NATURAL_8) tu1_1;
	RTLE;
}

/* {EV_PIXMAP_IMP}.enable_tabable_to */
void F1872_21282 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_42_9_);
	tu1_1 = eif_set_bit(EIF_NATURAL_8,tu1_1,(EIF_BOOLEAN) 1,((EIF_INTEGER_32) 1L));
	*(EIF_NATURAL_8 *)(Current+ _CHROFF_42_9_) = (EIF_NATURAL_8) tu1_1;
	RTLE;
}

/* {EV_PIXMAP_IMP}.disable_tabable_to */
void F1872_21283 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_42_9_);
	tu1_1 = eif_set_bit(EIF_NATURAL_8,tu1_1,(EIF_BOOLEAN) 0,((EIF_INTEGER_32) 1L));
	*(EIF_NATURAL_8 *)(Current+ _CHROFF_42_9_) = (EIF_NATURAL_8) tu1_1;
	RTLE;
}

/* {EV_PIXMAP_IMP}.widget_imp_at_pointer_position */
EIF_REFERENCE F1872_21284 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

/* {EV_PIXMAP_IMP}.set_size */
void F1872_21290 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1872_21392(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R17007[Dtype(RTCW(tr1))-1871])(tr1, arg1, arg2);
	RTLE;
}

/* {EV_PIXMAP_IMP}.draw_point */
void F1872_21295 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1872_21392(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R16958[Dtype(RTCW(tr1))-1871])(tr1, arg1, arg2);
	RTLE;
}

/* {EV_PIXMAP_IMP}.draw_segment */
void F1872_21301 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1872_21392(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R16964[Dtype(RTCW(tr1))-1871])(tr1, arg1, arg2, arg3, arg4);
	RTLE;
}

/* {EV_PIXMAP_IMP}.enable_dashed_line_style */
void F1872_21319 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1872_21392(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16952[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_PIXMAP_IMP}.set_drawing_mode */
void F1872_21326 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1872_21392(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R16946[Dtype(RTCW(tr1))-1871])(tr1, arg1);
	RTLE;
}

/* {EV_PIXMAP_IMP}.set_font */
void F1872_21327 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	F1872_21392(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16491[Dtype(RTCW(tr1))-1871])(tr1, arg1);
	RTLE;
}

/* {EV_PIXMAP_IMP}.update_buttons */
void F1872_21332 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	RTGC;
}

/* {EV_PIXMAP_IMP}.disable_capture */
void F1872_21334 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1872_21393(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16551[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_PIXMAP_IMP}.draw_rubber_band */
void F1872_21336 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1872_21393(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16544[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_PIXMAP_IMP}.enable_capture */
void F1872_21337 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1872_21393(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16550[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_PIXMAP_IMP}.erase_rubber_band */
void F1872_21339 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1872_21393(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16545[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_PIXMAP_IMP}.real_pointed_target */
EIF_REFERENCE F1872_21340 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	F1872_21393(Current);
	Result = F1696_18976(Current);
	Result = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_3_);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16543[Dtype(RTCW(Result))-1871])(Result);
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP}.set_pointer_style */
void F1872_21341 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	F1872_21393(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16548[Dtype(RTCW(tr1))-1871])(tr1, arg1);
	RTLE;
}

/* {EV_PIXMAP_IMP}.internal_set_pointer_style */
void F1872_21342 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	F1872_21393(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16549[Dtype(RTCW(tr1))-1871])(tr1, arg1);
	RTLE;
}

/* {EV_PIXMAP_IMP}.background_color_internal */
EIF_REFERENCE F1872_21344 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTLNS(eif_new_type(1602, 0x01).id, 1602, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	tr4_3 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	F1603_17889(RTCW(Result), tr4_1, tr4_2, tr4_3);
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP}.foreground_color_internal */
EIF_REFERENCE F1872_21347 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTLNS(eif_new_type(1602, 0x01).id, 1602, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	tr4_3 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	F1603_17889(RTCW(Result), tr4_1, tr4_2, tr4_3);
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP}.has_focus */
EIF_BOOLEAN F1872_21348 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_PIXMAP_IMP}.hide */
void F1872_21349 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1872_21393(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16566[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_PIXMAP_IMP}.is_displayed */
EIF_BOOLEAN F1872_21350 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_PIXMAP_IMP}.is_sensitive */
EIF_BOOLEAN F1872_21352 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_PIXMAP_IMP}.is_show_requested */
EIF_BOOLEAN F1872_21353 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (F1696_18975(Current)) {
		tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[Dtype(RTCW(tr1))-1871])(tr1);
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP}.minimum_height */
EIF_INTEGER_32 F1872_21354 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1872_21276(Current);
}

/* {EV_PIXMAP_IMP}.minimum_width */
EIF_INTEGER_32 F1872_21355 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1872_21275(Current);
}

/* {EV_PIXMAP_IMP}.parent */
EIF_REFERENCE F1872_21356 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) NULL;
}

/* {EV_PIXMAP_IMP}.has_parent */
EIF_BOOLEAN F1872_21357 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_PIXMAP_IMP}.parent_is_sensitive */
EIF_BOOLEAN F1872_21358 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_PIXMAP_IMP}.pointer_style */
EIF_REFERENCE F1872_21360 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	F1872_21393(Current);
	Result = F1696_18976(Current);
	Result = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_3_);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16557[Dtype(RTCW(Result))-1871])(Result);
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP}.screen_x */
EIF_INTEGER_32 F1872_21361 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1872_21393(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16398[Dtype(RTCW(tr1))-1730])(tr1);
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP}.screen_y */
EIF_INTEGER_32 F1872_21362 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1872_21393(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16399[Dtype(RTCW(tr1))-1730])(tr1);
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP}.set_background_color */
void F1872_21363 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	F1872_21392(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16220[Dtype(RTCW(tr1))-1871])(tr1, arg1);
	RTLE;
}

/* {EV_PIXMAP_IMP}.set_focus */
void F1872_21364 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1872_21393(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16568[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_PIXMAP_IMP}.set_foreground_color */
void F1872_21365 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	F1872_21392(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16219[Dtype(RTCW(tr1))-1871])(tr1, arg1);
	RTLE;
}

/* {EV_PIXMAP_IMP}.set_minimum_height */
void F1872_21366 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1872_21393(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R16575[Dtype(RTCW(tr1))-1871])(tr1, arg1);
	RTLE;
}

/* {EV_PIXMAP_IMP}.set_minimum_size */
void F1872_21367 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1872_21393(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R16576[Dtype(RTCW(tr1))-1871])(tr1, arg1, arg2);
	RTLE;
}

/* {EV_PIXMAP_IMP}.set_minimum_width */
void F1872_21368 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1872_21393(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R16574[Dtype(RTCW(tr1))-1871])(tr1, arg1);
	RTLE;
}

/* {EV_PIXMAP_IMP}.show */
void F1872_21370 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1872_21393(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16567[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_PIXMAP_IMP}.x_position */
EIF_INTEGER_32 F1872_21372 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1872_21393(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16396[Dtype(RTCW(tr1))-1730])(tr1);
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP}.y_position */
EIF_INTEGER_32 F1872_21373 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1872_21393(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16397[Dtype(RTCW(tr1))-1730])(tr1);
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP}.on_parented */
void F1872_21374 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1872_21393(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16578[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_PIXMAP_IMP}.destroy */
void F1872_21376 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1696_18990(Current, (EIF_BOOLEAN) 0);
	F1696_18991(Current, (EIF_BOOLEAN) 1);
	F1872_21390(Current);
	F1872_21391(Current);
	RTLE;
}

/* {EV_PIXMAP_IMP}.copy_pixmap */
void F1872_21377 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(12);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,loc4);
	RTLR(4,tr1);
	RTLR(5,loc3);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLR(10,loc2);
	RTLR(11,loc9);
	RTLIU(12);
	
	RTGC;
	F1872_21390(Current);
	F1872_21391(Current);
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(1871, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_41_);
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			tr1 = F1_14(loc4);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_41_) = (EIF_REFERENCE) tr1;
		}
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_42_12_6_1_);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_1_) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_42_12_6_2_);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_2_) = (EIF_INTEGER_32) ti4_1;
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_36_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_36_) = (EIF_REFERENCE) tr1;
		loc3 = *(EIF_REFERENCE *)(Current + _REFACS_36_);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			F519_14211(RTCW(loc3));
			ti4_1 = F519_14208(RTCW(loc3));
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_3_) = (EIF_INTEGER_32) ti4_1;
		}
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_37_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_37_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_37_);
		loc5 = tr1;
		if (EIF_TEST(loc5)) {
			F519_14211(loc5);
		}
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_38_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_38_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_38_);
		loc6 = tr1;
		if (EIF_TEST(loc6)) {
			F519_14211(loc6);
		}
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_39_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_39_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_39_);
		loc7 = tr1;
		if (EIF_TEST(loc7)) {
			F519_14211(loc7);
		}
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_40_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_40_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_40_);
		loc8 = tr1;
		if (EIF_TEST(loc8)) {
			F519_14211(loc8);
		}
		F414_13401(Current, loc1);
		tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_42_8_);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_42_8_) = (EIF_BOOLEAN) tb1;
	} else {
		loc2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		loc2 = RTRV(eif_new_type(413, 0x00), loc2);
		RTCT0("other_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11078[Dtype(RTCW(loc2))-1871])(loc2);
		RTCT0("l_private_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTAR(Current, loc3);
		*(EIF_REFERENCE *)(Current + _REFACS_36_) = (EIF_REFERENCE) loc3;
		ti4_1 = F519_14208(RTCW(loc3));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_3_) = (EIF_INTEGER_32) ti4_1;
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11082[Dtype(RTCW(loc2))-1871])(loc2);
		if (tb1) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11079[Dtype(RTCW(loc2))-1871])(loc2);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_37_) = (EIF_REFERENCE) tr1;
		}
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11083[Dtype(RTCW(loc2))-1871])(loc2);
		loc9 = tr1;
		if (EIF_TEST(loc9)) {
			RTAR(Current, loc9);
			*(EIF_REFERENCE *)(Current + _REFACS_40_) = (EIF_REFERENCE) loc9;
			F519_14211(loc9);
		}
		ti4_1 = F1320_15572(RTCW(loc3));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_1_) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = F1320_15573(RTCW(loc3));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_2_) = (EIF_INTEGER_32) ti4_1;
		F414_13401(Current, loc2);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_42_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	tb1 = F1609_18022(RTCW(arg1));
	if (tb1) {
		F1872_21280(Current);
	} else {
		F1872_21281(Current);
	}
	tb1 = F1609_18021(RTCW(arg1));
	if (tb1) {
		F1872_21282(Current);
	} else {
		F1872_21283(Current);
	}
	RTLE;
}

/* {EV_PIXMAP_IMP}.pixmap_filename */
EIF_REFERENCE F1872_21378 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_41_);
}


/* {EV_PIXMAP_IMP}.set_private_bitmap_id */
void F1872_21387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_3_) = (EIF_INTEGER_32) arg1;
}

/* {EV_PIXMAP_IMP}.update_fields */
void F1872_21388 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_POINTER arg5, EIF_POINTER arg6)
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
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(12);
	RTLR(0,loc7);
	RTLR(1,Current);
	RTLR(2,loc8);
	RTLR(3,loc9);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLR(6,loc1);
	RTLR(7,loc3);
	RTLR(8,loc10);
	RTLR(9,loc6);
	RTLR(10,loc2);
	RTLR(11,tr1);
	RTLIU(12);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		switch (arg2) {
			case 2L:
				loc7 = RTLNSMART(eif_new_type(1323, 0).id);
				F1317_15540(RTCW(loc7), arg5);
				RTAR(Current, loc7);
				*(EIF_REFERENCE *)(Current + _REFACS_38_) = (EIF_REFERENCE) loc7;
				F1296_15102(RTCW(loc7));
				F519_14209(RTCW(loc7));
				F1872_21395(Current);
				break;
			case 3L:
				loc8 = RTLNSMART(eif_new_type(1319, 0).id);
				F1317_15540(RTCW(loc8), arg5);
				RTAR(Current, loc8);
				*(EIF_REFERENCE *)(Current + _REFACS_36_) = (EIF_REFERENCE) loc8;
				ti4_1 = F519_14208(RTCW(loc8));
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_3_) = (EIF_INTEGER_32) ti4_1;
				F1296_15102(RTCW(loc8));
				F519_14209(RTCW(loc8));
				loc9 = RTLNSMART(eif_new_type(1319, 0).id);
				F1317_15540(RTCW(loc9), arg6);
				RTAR(Current, loc9);
				*(EIF_REFERENCE *)(Current + _REFACS_37_) = (EIF_REFERENCE) loc9;
				F1296_15102(RTCW(loc9));
				F519_14209(RTCW(loc9));
				ti4_1 = F1320_15572(RTCW(loc8));
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_1_) = (EIF_INTEGER_32) ti4_1;
				ti4_1 = F1320_15573(RTCW(loc8));
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_2_) = (EIF_INTEGER_32) ti4_1;
				break;
			case 0L:
				loc4 = RTLNS(eif_new_type(1402, 0x01).id, 1402, _OBJSIZ_0_1_0_0_0_1_0_0_);
				F1403_17080(RTCW(loc4));
				F1403_17092(RTCW(loc4), arg3);
				F1403_17093(RTCW(loc4), arg4);
				F1403_17094(RTCW(loc4), ((EIF_INTEGER_32) 1L));
				F1403_17095(RTCW(loc4), ((EIF_INTEGER_32) 32L));
				F1403_17096(RTCW(loc4), ((EIF_INTEGER_32) 0L));
				loc5 = RTLNS(eif_new_type(1400, 0x01).id, 1400, _OBJSIZ_0_1_0_1_0_1_0_0_);
				F1401_17038(RTCW(loc5), loc4, ((EIF_INTEGER_32) 0L));
				loc1 = RTLNS(eif_new_type(1401, 0x01).id, 1401, _OBJSIZ_2_1_0_1_0_1_0_0_);
				F1402_17062(RTCW(loc1), loc5, arg5, (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * arg3) * arg4));
				loc3 = RTLNS(eif_new_type(1310, 0x01).id, 1310, _OBJSIZ_6_2_0_3_0_7_0_0_);
				F1311_15448(RTCW(loc3));
				loc8 = RTLNSMART(eif_new_type(1319, 0).id);
				ti4_1 = ((EIF_INTEGER_32) 0L);
				F1320_15567(RTCW(loc8), loc3, loc1, ti4_1);
				RTAR(Current, loc8);
				*(EIF_REFERENCE *)(Current + _REFACS_36_) = (EIF_REFERENCE) loc8;
				ti4_1 = F519_14208(RTCW(loc8));
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_3_) = (EIF_INTEGER_32) ti4_1;
				F519_14209(RTCW(loc8));
				F1311_15449(RTCW(loc3));
				ti4_1 = F1320_15572(RTCW(loc8));
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_1_) = (EIF_INTEGER_32) ti4_1;
				ti4_1 = F1320_15573(RTCW(loc8));
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_2_) = (EIF_INTEGER_32) ti4_1;
				loc10 = *(EIF_REFERENCE *)(RTCW(loc1));
				RTAR(Current, loc10);
				*(EIF_REFERENCE *)(Current + _REFACS_40_) = (EIF_REFERENCE) loc10;
				F1296_15101(RTCW(loc10));
				F519_14209(RTCW(loc10));
				F1296_15104(RTCW(loc1));
				loc1 = (EIF_REFERENCE) NULL;
				F1296_15102(RTCW(loc10));
				{
					/* INLINED CODE (ANY.default_pointer) */
					tp1 = (EIF_POINTER)  0;
					/* END INLINED CODE */
				}
				if ((EIF_BOOLEAN)(arg6 != tp1)) {
					loc4 = RTLNS(eif_new_type(1402, 0x01).id, 1402, _OBJSIZ_0_1_0_0_0_1_0_0_);
					F1403_17080(RTCW(loc4));
					F1403_17092(RTCW(loc4), arg3);
					F1403_17093(RTCW(loc4), arg4);
					F1403_17094(RTCW(loc4), ((EIF_INTEGER_32) 1L));
					F1403_17095(RTCW(loc4), ((EIF_INTEGER_32) 1L));
					F1403_17096(RTCW(loc4), ((EIF_INTEGER_32) 0L));
					F1403_17100(RTCW(loc4), ((EIF_INTEGER_32) 2L));
					F1403_17101(RTCW(loc4), ((EIF_INTEGER_32) 2L));
					loc5 = RTLNS(eif_new_type(1400, 0x01).id, 1400, _OBJSIZ_0_1_0_1_0_1_0_0_);
					F1401_17038(RTCW(loc5), loc4, ((EIF_INTEGER_32) 2L));
					loc6 = F1401_17042(RTCW(loc5), ((EIF_INTEGER_32) 0L));
					F1400_17024(RTCW(loc6), ((EIF_INTEGER_32) 0L));
					F1400_17025(RTCW(loc6), ((EIF_INTEGER_32) 0L));
					F1400_17026(RTCW(loc6), ((EIF_INTEGER_32) 0L));
					F1400_17027(RTCW(loc6), ((EIF_INTEGER_32) 0L));
					loc6 = F1401_17042(RTCW(loc5), ((EIF_INTEGER_32) 1L));
					F1400_17024(RTCW(loc6), ((EIF_INTEGER_32) 255L));
					F1400_17025(RTCW(loc6), ((EIF_INTEGER_32) 255L));
					F1400_17026(RTCW(loc6), ((EIF_INTEGER_32) 255L));
					F1400_17027(RTCW(loc6), ((EIF_INTEGER_32) 255L));
					loc1 = RTLNS(eif_new_type(1401, 0x01).id, 1401, _OBJSIZ_2_1_0_1_0_1_0_0_);
					F1402_17062(RTCW(loc1), loc5, arg6, (EIF_INTEGER_32) (((EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 31L)) / ((EIF_INTEGER_32) 32L))))) * arg4));
					loc2 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
					F1307_15413(RTCW(loc2));
					loc9 = RTLNSMART(eif_new_type(1319, 0).id);
					ti4_1 = ((EIF_INTEGER_32) 0L);
					F1320_15567(RTCW(loc9), loc2, loc1, ti4_1);
					RTAR(Current, loc9);
					*(EIF_REFERENCE *)(Current + _REFACS_37_) = (EIF_REFERENCE) loc9;
					F519_14209(RTCW(loc9));
					F1306_15272(RTCW(loc2));
					F519_14213(RTCW(loc2));
					tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
					F519_14209(RTCW(tr1));
					F1296_15104(RTCW(loc1));
					loc1 = (EIF_REFERENCE) NULL;
				}
				break;
			default:
				RTEC(EN_WHEN);
		}
	} else {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_42_7_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_PIXMAP_IMP}.new_empty_bitmap */
EIF_REFERENCE F1872_21389 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	Result = RTLNS(eif_new_type(1319, 0x01).id, 1319, _OBJSIZ_0_3_0_3_0_2_0_0_);
	ti4_1 = F1872_21275(Current);
	ti4_2 = F1872_21276(Current);
	tr1 = RTMS_EX_H("\377",1,255);
	F1320_15570(RTCW(Result), ti4_1, ti4_2, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L), tr1);
	F519_14209(RTCW(Result));
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP}.reset_resource_content */
void F1872_21390 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_38_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F519_14210(loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_38_) = (EIF_REFERENCE) NULL;
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_39_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			F519_14210(loc2);
			*(EIF_REFERENCE *)(Current + _REFACS_39_) = (EIF_REFERENCE) NULL;
		}
	}
	RTLE;
}

/* {EV_PIXMAP_IMP}.reset_bitmap_content */
void F1872_21391 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_36_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F519_14210(loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_36_) = (EIF_REFERENCE) NULL;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_37_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		F519_14210(loc2);
		*(EIF_REFERENCE *)(Current + _REFACS_37_) = (EIF_REFERENCE) NULL;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_40_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		F519_14210(loc3);
		*(EIF_REFERENCE *)(Current + _REFACS_40_) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {EV_PIXMAP_IMP}.promote_to_drawable */
void F1872_21392 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1696_18975(Current)) {
		loc1 = RTLNS(eif_new_type(1954, 0x01).id, 1954, _OBJSIZ_51_17_6_5_0_0_0_0_);
		F1955_23623(RTCW(loc1), Current);
		tr1 = F1696_18976(Current);
		F1596_17748(RTCW(tr1), loc1);
		F1696_18973(Current);
	}
	RTLE;
}

/* {EV_PIXMAP_IMP}.promote_to_widget */
void F1872_21393 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1696_18975(Current)) {
		loc1 = RTLNS(eif_new_type(1992, 0x01).id, 1992, _OBJSIZ_70_27_6_11_0_2_0_3_);
		F1955_23623(RTCW(loc1), Current);
		tr1 = F1696_18976(Current);
		F1596_17748(RTCW(tr1), loc1);
		F1696_18973(Current);
	}
	RTLE;
}

/* {EV_PIXMAP_IMP}.stretch_wel_bitmap */
EIF_REFERENCE F1872_21394 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc6);
	RTLR(1,arg1);
	RTLR(2,loc3);
	RTLR(3,loc2);
	RTLR(4,loc1);
	RTLR(5,Current);
	RTLIU(6);
	
	RTGC;
	loc6 = RTLNS(eif_new_type(1310, 0x01).id, 1310, _OBJSIZ_6_2_0_3_0_7_0_0_);
	F1311_15448(RTCW(loc6));
	loc4 = F1320_15572(RTCW(arg1));
	loc5 = F1320_15573(RTCW(arg1));
	loc3 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
	F1307_15414(RTCW(loc3), loc6);
	F1306_15265(RTCW(loc3), arg1);
	F1306_15255(RTCW(loc6));
	loc2 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
	F1307_15414(RTCW(loc2), loc6);
	loc1 = RTLNS(eif_new_type(1319, 0x01).id, 1319, _OBJSIZ_0_3_0_3_0_2_0_0_);
	F1320_15566(RTCW(loc1), loc6, arg2, arg3);
	F519_14209(RTCW(loc1));
	F1306_15265(RTCW(loc2), loc1);
	F1306_15257(RTCW(loc2), ((EIF_INTEGER_32) 3L));
	ti4_1 = ((EIF_INTEGER_32) 13369376L);
	F1306_15315(RTCW(loc2), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), arg2, arg3, loc3, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), loc4, loc5, ti4_1);
	F1306_15271(RTCW(loc2));
	F519_14213(RTCW(loc2));
	F1306_15271(RTCW(loc3));
	F519_14213(RTCW(loc3));
	F1311_15449(RTCW(loc6));
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {EV_PIXMAP_IMP}.retrieve_pixmap_size */
void F1872_21395 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc4);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_38_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		loc1 = F1323_15636(loc3);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_39_);
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			loc1 = F1323_15636(loc4);
		} else {
		}
	}
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	} else {
		F1399_16989(RTCW(loc1));
		loc2 = F1399_16980(RTCW(loc1));
		ti4_1 = F1320_15572(RTCW(loc2));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_1_) = (EIF_INTEGER_32) ti4_1;
		tb1 = F1399_16984(RTCW(loc1));
		if ((EIF_BOOLEAN) !tb1) {
			ti4_1 = F1320_15573(RTCW(loc2));
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L));
		} else {
			ti4_1 = F1320_15573(RTCW(loc2));
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_2_) = (EIF_INTEGER_32) ti4_1;
		}
		F1296_15104(RTCW(loc1));
	}
	RTLE;
}

/* {EV_PIXMAP_IMP}.retrieve_icon_information */
void F1872_21396 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(13);
	RTLR(0,loc12);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc13);
	RTLR(5,loc7);
	RTLR(6,loc4);
	RTLR(7,loc2);
	RTLR(8,loc3);
	RTLR(9,loc10);
	RTLR(10,loc8);
	RTLR(11,loc11);
	RTLR(12,loc9);
	RTLIU(13);
	
	RTGC;
	tr1 = F1872_21268(Current);
	loc12 = tr1;
	if (EIF_TEST(loc12)) {
		loc1 = F1323_15636(loc12);
	} else {
		tr1 = F1872_21269(Current);
		loc13 = tr1;
		if (EIF_TEST(loc13)) {
			loc1 = F1323_15636(loc13);
		}
	}
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = RTMS_EX_H("Unable to retrieve icon information",35,1607440750);
		F463_1400(Current, tr1);
	}
	RTCT0("icon_info /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1399_16989(RTCW(loc1));
	tb1 = F1399_16984(RTCW(loc1));
	if ((EIF_BOOLEAN) !tb1) {
		loc7 = F1399_16980(RTCW(loc1));
		loc5 = F1320_15572(RTCW(loc7));
		loc6 = F1320_15573(RTCW(loc7));
		loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 / ((EIF_INTEGER_32) 2L));
		loc4 = RTLNS(eif_new_type(1310, 0x01).id, 1310, _OBJSIZ_6_2_0_3_0_7_0_0_);
		F1311_15448(RTCW(loc4));
		loc2 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
		F1307_15414(RTCW(loc2), loc4);
		F1306_15265(RTCW(loc2), loc7);
		loc3 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
		F1307_15414(RTCW(loc3), loc4);
		loc10 = RTLNSMART(eif_new_type(1319, 0).id);
		F1320_15566(RTCW(loc10), loc3, loc5, loc6);
		RTAR(Current, loc10);
		*(EIF_REFERENCE *)(Current + _REFACS_36_) = (EIF_REFERENCE) loc10;
		ti4_1 = F519_14208(RTCW(loc10));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_3_) = (EIF_INTEGER_32) ti4_1;
		F519_14209(RTCW(loc10));
		loc8 = F1872_21270(Current);
		F1306_15265(RTCW(loc3), loc8);
		ti4_1 = ((EIF_INTEGER_32) 13369376L);
		F1306_15311(RTCW(loc3), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), loc5, loc6, loc2, ((EIF_INTEGER_32) 0L), loc6, ti4_1);
		F1306_15271(RTCW(loc3));
		F519_14210(RTCW(loc8));
		loc11 = RTLNSMART(eif_new_type(1319, 0).id);
		F1320_15566(RTCW(loc11), loc3, loc5, loc6);
		F519_14209(RTCW(loc11));
		RTAR(Current, loc11);
		*(EIF_REFERENCE *)(Current + _REFACS_37_) = (EIF_REFERENCE) loc11;
		loc8 = F1872_21271(Current);
		RTCT0("a_wel_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc8 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1306_15265(RTCW(loc3), loc8);
		ti4_1 = ((EIF_INTEGER_32) 3342344L);
		F1306_15311(RTCW(loc3), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), loc5, loc6, loc2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1);
		F1306_15271(RTCW(loc3));
		F519_14213(RTCW(loc3));
		F519_14210(RTCW(loc8));
		F1306_15271(RTCW(loc2));
		F519_14213(RTCW(loc2));
		F1311_15449(RTCW(loc4));
	} else {
		loc10 = F1399_16981(RTCW(loc1));
		RTAR(Current, loc10);
		*(EIF_REFERENCE *)(Current + _REFACS_36_) = (EIF_REFERENCE) loc10;
		ti4_1 = F519_14208(RTCW(loc10));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_42_12_6_3_) = (EIF_INTEGER_32) ti4_1;
		F519_14211(RTCW(loc10));
		loc11 = RTLNSMART(eif_new_type(1319, 0).id);
		tr1 = F1399_16980(RTCW(loc1));
		F1320_15568(RTCW(loc11), tr1);
		RTAR(Current, loc11);
		*(EIF_REFERENCE *)(Current + _REFACS_37_) = (EIF_REFERENCE) loc11;
		F519_14209(RTCW(loc11));
		loc9 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
		F1307_15413(RTCW(loc9));
		F1306_15265(RTCW(loc9), loc11);
		ti4_1 = F1320_15572(RTCW(loc11));
		ti4_2 = F1320_15573(RTCW(loc11));
		F1306_15317(RTCW(loc9), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1, ti4_2, ((EIF_INTEGER_32) 5570569L));
		F1306_15271(RTCW(loc9));
		F519_14213(RTCW(loc9));
	}
	F1399_17002(RTCW(loc1));
	RTLE;
}

/* {EV_PIXMAP_IMP}.disable_initialized */
void F1872_21397 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1696_18990(Current, (EIF_BOOLEAN) 0);
}

/* {EV_PIXMAP_IMP}.dib_colors_constants */
static EIF_REFERENCE F1872_21407_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(261)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(500, 0x01).id, 500, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1872_21407 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(261,F1872_21407_body,(Current));
}

/* {EV_PIXMAP_IMP}.raster_operations_constants */
static EIF_REFERENCE F1872_21408_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(262)

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

EIF_REFERENCE F1872_21408 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(262,F1872_21408_body,(Current));
}

void EIF_Minit1855 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
