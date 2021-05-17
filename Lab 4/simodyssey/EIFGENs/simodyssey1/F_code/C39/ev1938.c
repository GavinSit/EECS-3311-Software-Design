/*
 * Code for class EV_PIXMAP_IMP_DRAWABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1938.h"
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

/* {EV_PIXMAP_IMP_DRAWABLE}.make_with_simple */
void F1955_23623 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	F1696_18985(Current, ((EIF_INTEGER_8) 0L), (EIF_BOOLEAN) 1);
	F1955_23625(Current, arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R15887[dtype-1697])(Current);
	F1696_18985(Current, ((EIF_INTEGER_8) 1L), (EIF_BOOLEAN) 0);
	F1955_23626(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(Current + O19542[dtype-1954]);
	tb1 = F1306_15209(RTCW(tr1));
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + O19542[dtype-1954]);
		F1306_15269(RTCW(tr1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + O19541[dtype-1954]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(Current + O19542[dtype-1954]);
		F1306_15260(RTCW(tr1), loc1);
	}
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.promote_from_simple */
void F1955_23625 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,loc5);
	RTLR(3,Current);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,tr1);
	RTLR(7,loc7);
	RTLR(8,loc1);
	RTLR(9,loc6);
	RTLIU(10);
	
	RTGC;
	loc2 = F1872_21270(RTCW(arg1));
	loc5 = RTLNSMART(eif_new_type(1319, 0).id);
	F1320_15568(RTCW(loc5), loc2);
	RTAR(Current, loc5);
	*(EIF_REFERENCE *)(Current + O19534[dtype-1954]) = (EIF_REFERENCE) loc5;
	F519_14210(RTCW(loc2));
	F519_14209(RTCW(loc5));
	tb1 = F1872_21272(RTCW(arg1));
	if (tb1) {
		loc3 = F1872_21271(RTCW(arg1));
		RTCT0("other_mask_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc4 = RTLNSMART(eif_new_type(1319, 0).id);
		F1320_15568(RTCW(loc4), loc3);
		F519_14210(RTCW(loc3));
		F519_14209(RTCW(loc4));
		RTAR(Current, loc4);
		*(EIF_REFERENCE *)(Current + O19535[dtype-1954]) = (EIF_REFERENCE) loc4;
	}
	tr1 = F1872_21273(RTCW(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O19541[dtype-1954]) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + O19541[dtype-1954]);
	loc7 = tr1;
	if (EIF_TEST(loc7)) {
		F519_14211(loc7);
	}
	loc1 = RTLNS(eif_new_type(1310, 0x01).id, 1310, _OBJSIZ_6_2_0_3_0_7_0_0_);
	F1311_15448(RTCW(loc1));
	tr1 = RTLNSMART(eif_new_type(1306, 1).id);
	F1307_15414(RTCW(tr1), loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O19542[dtype-1954]) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + O19542[dtype-1954]);
	F519_14209(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + O19542[dtype-1954]);
	F1306_15265(RTCW(tr1), loc5);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		loc6 = RTLNSMART(eif_new_type(1306, 0).id);
		F1307_15414(RTCW(loc6), loc1);
		F519_14209(RTCW(loc6));
		F1306_15265(RTCW(loc6), loc4);
		RTAR(Current, loc6);
		*(EIF_REFERENCE *)(Current + O19530[dtype-1954]) = (EIF_REFERENCE) loc6;
	}
	F1311_15449(RTCW(loc1));
	F414_13401(Current, arg1);
	ti4_1 = F1320_15572(RTCW(loc5));
	*(EIF_INTEGER_32 *)(Current + O19540[dtype-1954]) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = F1320_15573(RTCW(loc5));
	*(EIF_INTEGER_32 *)(Current + O19539[dtype-1954]) = (EIF_INTEGER_32) ti4_1;
	F1696_18973(RTCW(arg1));
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.copy_tab_status */
void F1955_23626 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tb1 = F1872_21279(RTCW(arg1));
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R15924[dtype-1871])(Current);
	} else {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R15925[dtype-1871])(Current);
	}
	tb1 = F1872_21278(RTCW(arg1));
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R15922[dtype-1871])(Current);
	} else {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R15923[dtype-1871])(Current);
	}
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.adapt_from_simple */
void F1955_23627 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	F1955_23625(Current, arg1);
	F1955_23626(Current, arg1);
	*(EIF_BOOLEAN *)(Current + O19491[dtype-1951]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current + O19494[dtype-1951]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current + O19495[dtype-1951]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	F1952_23548(Current);
	F1952_23547(Current);
	tr1 = *(EIF_REFERENCE *)(Current + O19542[dtype-1954]);
	F1306_15255(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + O19542[dtype-1954]);
	tb1 = F1306_15209(RTCW(tr1));
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + O19542[dtype-1954]);
		F1306_15269(RTCW(tr1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + O19541[dtype-1954]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(Current + O19542[dtype-1954]);
		F1306_15260(RTCW(tr1), loc1);
	}
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.make */
void F1955_23633 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R15925[dtype-1871])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R15923[dtype-1871])(Current);
	F1952_23490(Current);
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.dc */
EIF_REFERENCE F1955_23636 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O19542[Dtype(Current)-1954]);
}


/* {EV_PIXMAP_IMP_DRAWABLE}.icon */
EIF_REFERENCE F1955_23638 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.cursor */
EIF_REFERENCE F1955_23639 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.get_bitmap */
EIF_REFERENCE F1955_23640 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19542[dtype-1954]);
	F1306_15271(RTCW(tr1));
	loc1 = *(EIF_REFERENCE *)(Current + O19534[dtype-1954]);
	RTCT0("l_internal_bitmap /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = RTLNS(eif_new_type(1319, 0x01).id, 1319, _OBJSIZ_0_3_0_3_0_2_0_0_);
	F1320_15568(RTCW(Result), loc1);
	F519_14209(RTCW(Result));
	tr1 = *(EIF_REFERENCE *)(Current + O19542[dtype-1954]);
	F1306_15265(RTCW(tr1), loc1);
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.get_mask_bitmap */
EIF_REFERENCE F1955_23641 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19530[dtype-1954]);
	loc1 = tr1;
	tr1 = *(EIF_REFERENCE *)(Current + O19535[dtype-1954]);
	loc2 = tr1;
	if ((EIF_BOOLEAN) (EIF_TEST(loc1) && EIF_TEST(loc2))) {
		F1306_15271(loc1);
		Result = RTLNS(eif_new_type(1319, 0x01).id, 1319, _OBJSIZ_0_3_0_3_0_2_0_0_);
		F1320_15568(RTCW(Result), loc2);
		F519_14209(RTCW(Result));
		F1306_15265(loc1, loc2);
	}
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.has_mask */
EIF_BOOLEAN F1955_23642 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O19535[Dtype(Current)-1954]) != NULL);
}

/* {EV_PIXMAP_IMP_DRAWABLE}.palette */
EIF_REFERENCE F1955_23643 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O19541[Dtype(Current)-1954]);
}


/* {EV_PIXMAP_IMP_DRAWABLE}.stretch */
void F1955_23645 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	loc1 = F1955_23668(Current);
	tr1 = F1696_18976(Current);
	F1872_21377(RTCW(loc1), tr1);
	F1872_21274(RTCW(loc1), arg1, arg2);
	F1955_23627(Current, loc1);
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.set_size */
void F1955_23646 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,loc1);
	RTLR(4,loc5);
	RTLR(5,loc2);
	RTLR(6,loc4);
	RTLIU(7);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19542[dtype-1954]);
	tb1 = F1306_15212(RTCW(tr1));
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + O19542[dtype-1954]);
		F1306_15271(RTCW(tr1));
	}
	loc3 = *(EIF_REFERENCE *)(Current + O19534[dtype-1954]);
	RTCT0("l_internal_bitmap /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = F1952_23545(Current);
	loc1 = F1955_23670(Current, loc3, arg1, arg2, tr1);
	F519_14210(RTCW(loc3));
	*(EIF_REFERENCE *)(Current + O19534[dtype-1954]) = (EIF_REFERENCE) NULL;
	loc3 = (EIF_REFERENCE) loc1;
	RTAR(Current, loc3);
	*(EIF_REFERENCE *)(Current + O19534[dtype-1954]) = (EIF_REFERENCE) loc3;
	tr1 = *(EIF_REFERENCE *)(Current + O19542[dtype-1954]);
	F1306_15265(RTCW(tr1), loc3);
	tb1 = '\0';
	if (F1955_23642(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + O19530[dtype-1954]);
		loc5 = tr1;
		tb1 = EIF_TEST(loc5);
	}
	if (tb1) {
		loc2 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
		F1307_15414(RTCW(loc2), loc5);
		loc1 = RTLNS(eif_new_type(1319, 0x01).id, 1319, _OBJSIZ_0_3_0_3_0_2_0_0_);
		F1320_15566(RTCW(loc1), loc2, arg1, arg2);
		F519_14209(RTCW(loc1));
		F1306_15265(RTCW(loc2), loc1);
		loc4 = *(EIF_REFERENCE *)(Current + O19535[dtype-1954]);
		RTCT0("l_internal_mask_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1306_15317(RTCW(loc2), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), arg1, arg2, ((EIF_INTEGER_32) 16711778L));
		ti4_1 = F1320_15572(RTCW(loc4));
		ti4_2 = F1320_15573(RTCW(loc4));
		F1306_15311(RTCW(loc2), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1, ti4_2, loc5, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 13369376L));
		F1306_15271(RTCW(loc2));
		F519_14213(RTCW(loc2));
		F1306_15271(loc5);
		F519_14210(RTCW(loc4));
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + O19535[dtype-1954]) = (EIF_REFERENCE) loc1;
		F1306_15265(loc5, loc1);
	}
	ti4_1 = F1320_15572(RTCW(loc3));
	*(EIF_INTEGER_32 *)(Current + O19540[dtype-1954]) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = F1320_15573(RTCW(loc3));
	*(EIF_INTEGER_32 *)(Current + O19539[dtype-1954]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.width */
EIF_INTEGER_32 F1955_23648 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O19540[Dtype(Current)-1954]);
}


/* {EV_PIXMAP_IMP_DRAWABLE}.height */
EIF_INTEGER_32 F1955_23649 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O19539[Dtype(Current)-1954]);
}


/* {EV_PIXMAP_IMP_DRAWABLE}.init_file_drop_actions */
void F1955_23652 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.is_tabable_to */
EIF_BOOLEAN F1955_23656 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current + O19533[Dtype(Current)-1954]);
	Result = eif_bit_test(EIF_NATURAL_8,tu1_1,((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.is_tabable_from */
EIF_BOOLEAN F1955_23657 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current + O19533[Dtype(Current)-1954]);
	Result = eif_bit_test(EIF_NATURAL_8,tu1_1,((EIF_INTEGER_32) 2L));
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.enable_tabable_from */
void F1955_23658 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current + O19533[dtype-1954]);
	tu1_1 = eif_set_bit(EIF_NATURAL_8,tu1_1,(EIF_BOOLEAN) 1,((EIF_INTEGER_32) 2L));
	*(EIF_NATURAL_8 *)(Current + O19533[dtype-1954]) = (EIF_NATURAL_8) tu1_1;
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.disable_tabable_from */
void F1955_23659 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current + O19533[dtype-1954]);
	tu1_1 = eif_set_bit(EIF_NATURAL_8,tu1_1,(EIF_BOOLEAN) 0,((EIF_INTEGER_32) 2L));
	*(EIF_NATURAL_8 *)(Current + O19533[dtype-1954]) = (EIF_NATURAL_8) tu1_1;
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.enable_tabable_to */
void F1955_23660 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current + O19533[dtype-1954]);
	tu1_1 = eif_set_bit(EIF_NATURAL_8,tu1_1,(EIF_BOOLEAN) 1,((EIF_INTEGER_32) 1L));
	*(EIF_NATURAL_8 *)(Current + O19533[dtype-1954]) = (EIF_NATURAL_8) tu1_1;
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.disable_tabable_to */
void F1955_23661 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current + O19533[dtype-1954]);
	tu1_1 = eif_set_bit(EIF_NATURAL_8,tu1_1,(EIF_BOOLEAN) 0,((EIF_INTEGER_32) 1L));
	*(EIF_NATURAL_8 *)(Current + O19533[dtype-1954]) = (EIF_NATURAL_8) tu1_1;
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.destroy */
void F1955_23665 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLIU(6);
	
	RTGC;
	F1696_18990(Current, (EIF_BOOLEAN) 0);
	tr1 = *(EIF_REFERENCE *)(Current + O19542[dtype-1954]);
	F519_14210(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + O19534[dtype-1954]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F519_14210(loc1);
		*(EIF_REFERENCE *)(Current + O19534[dtype-1954]) = (EIF_REFERENCE) NULL;
	}
	tb1 = '\0';
	if (F1955_23642(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + O19530[dtype-1954]);
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		F519_14210(loc2);
		tr1 = *(EIF_REFERENCE *)(Current + O19535[dtype-1954]);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			F519_14210(loc3);
		}
		*(EIF_REFERENCE *)(Current + O19535[dtype-1954]) = (EIF_REFERENCE) NULL;
	}
	tr1 = *(EIF_REFERENCE *)(Current + O19541[dtype-1954]);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		F519_14210(loc4);
		*(EIF_REFERENCE *)(Current + O19541[dtype-1954]) = (EIF_REFERENCE) NULL;
	}
	F1952_23552(Current);
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.copy_pixmap */
void F1955_23666 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	*(EIF_REFERENCE *)(Current + O19535[Dtype(Current)-1954]) = (EIF_REFERENCE) NULL;
	loc1 = F1955_23668(Current);
	F1872_21377(RTCW(loc1), arg1);
	F1955_23627(Current, loc1);
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.create_simple_pixmap */
EIF_REFERENCE F1955_23668 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,loc2);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1652, 0x01).id, 1652, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F1596_17742(RTCW(loc1));
	loc2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
	loc2 = RTRV(eif_new_type(1871, 0x00), loc2);
	RTCT0("l_result /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) loc2;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.promote_to_widget */
void F1955_23669 (EIF_REFERENCE Current)
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
	loc1 = RTLNS(eif_new_type(1992, 0x01).id, 1992, _OBJSIZ_70_27_6_11_0_2_0_3_);
	F1993_24872(RTCW(loc1), Current);
	tr1 = F1696_18976(Current);
	F1596_17748(RTCW(tr1), loc1);
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.resize_wel_bitmap */
EIF_REFERENCE F1955_23670 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REFERENCE arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc6);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,loc3);
	RTLR(4,loc2);
	RTLR(5,Current);
	RTLR(6,tr1);
	RTLR(7,arg4);
	RTLIU(8);
	
	RTGC;
	loc6 = RTLNS(eif_new_type(1310, 0x01).id, 1310, _OBJSIZ_6_2_0_3_0_7_0_0_);
	F1311_15448(RTCW(loc6));
	loc1 = RTLNS(eif_new_type(1319, 0x01).id, 1319, _OBJSIZ_0_3_0_3_0_2_0_0_);
	F1320_15566(RTCW(loc1), loc6, arg2, arg3);
	F519_14209(RTCW(loc1));
	loc4 = F1320_15572(RTCW(arg1));
	loc5 = F1320_15573(RTCW(arg1));
	loc3 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
	F1307_15414(RTCW(loc3), loc6);
	F1306_15265(RTCW(loc3), arg1);
	loc2 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
	F1307_15414(RTCW(loc2), loc6);
	F1306_15265(RTCW(loc2), loc1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 > loc4) || (EIF_BOOLEAN) (arg3 > loc5))) {
		tr1 = RTOUCR(326,F468_13503, (Current));
		F1408_17334(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), arg2, arg3);
		tr1 = RTOUCR(326,F468_13503, (Current));
		F1306_15298(RTCW(loc2), tr1, arg4);
	}
	F1306_15311(RTCW(loc2), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), loc4, loc5, loc3, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 13369376L));
	F1306_15271(RTCW(loc2));
	F519_14213(RTCW(loc2));
	loc2 = (EIF_REFERENCE) NULL;
	F1306_15271(RTCW(loc3));
	F519_14213(RTCW(loc3));
	loc3 = (EIF_REFERENCE) NULL;
	F1311_15449(RTCW(loc6));
	loc6 = (EIF_REFERENCE) NULL;
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.widget_imp_at_pointer_position */
EIF_REFERENCE F1955_23671 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.on_parented */
void F1955_23672 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1955_23669(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16578[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.disable_capture */
void F1955_23673 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	F1955_23669(Current);
	loc1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(1992, 0x00), loc1);
	RTCT0("new_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1970_24063(RTCW(loc1));
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.draw_rubber_band */
void F1955_23677 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1955_23669(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16544[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.enable_capture */
void F1955_23678 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	F1955_23669(Current);
	loc1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(1992, 0x00), loc1);
	RTCT0("new_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1970_24062(RTCW(loc1));
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.update_buttons */
void F1955_23683 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	RTGC;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.erase_rubber_band */
void F1955_23684 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1955_23669(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16545[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.real_pointed_target */
EIF_REFERENCE F1955_23685 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	F1955_23669(Current);
	Result = F1696_18976(Current);
	Result = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_3_);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16543[Dtype(RTCW(Result))-1871])(Result);
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.set_pointer_style */
void F1955_23686 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	F1955_23669(Current);
	loc1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(1992, 0x00), loc1);
	RTCT0("new_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1956_23741(RTCW(loc1), arg1);
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.internal_set_pointer_style */
void F1955_23687 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	F1955_23669(Current);
	loc1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(1871, 0x00), loc1);
	RTCT0("new_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1872_21342(RTCW(loc1), arg1);
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.has_focus */
EIF_BOOLEAN F1955_23691 (EIF_REFERENCE Current)
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
	F1955_23669(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16564[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.hide */
void F1955_23692 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1955_23669(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16566[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.is_displayed */
EIF_BOOLEAN F1955_23693 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.is_sensitive */
EIF_BOOLEAN F1955_23694 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.is_show_requested */
EIF_BOOLEAN F1955_23695 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.minimum_height */
EIF_INTEGER_32 F1955_23696 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O19539[Dtype(Current)-1954]);
}

/* {EV_PIXMAP_IMP_DRAWABLE}.minimum_width */
EIF_INTEGER_32 F1955_23697 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O19540[Dtype(Current)-1954]);
}

/* {EV_PIXMAP_IMP_DRAWABLE}.parent */
EIF_REFERENCE F1955_23698 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) NULL;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.has_parent */
EIF_BOOLEAN F1955_23699 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.parent_is_sensitive */
EIF_BOOLEAN F1955_23701 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.pointer_style */
EIF_REFERENCE F1955_23703 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	F1955_23669(Current);
	Result = F1696_18976(Current);
	Result = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_3_);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16557[Dtype(RTCW(Result))-1871])(Result);
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.screen_x */
EIF_INTEGER_32 F1955_23704 (EIF_REFERENCE Current)
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
	F1955_23669(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16398[Dtype(RTCW(tr1))-1730])(tr1);
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.screen_y */
EIF_INTEGER_32 F1955_23705 (EIF_REFERENCE Current)
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
	F1955_23669(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16399[Dtype(RTCW(tr1))-1730])(tr1);
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.set_focus */
void F1955_23706 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1955_23669(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16568[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.set_minimum_height */
void F1955_23707 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1955_23669(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R16575[Dtype(RTCW(tr1))-1871])(tr1, arg1);
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.set_minimum_size */
void F1955_23708 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1955_23669(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R16576[Dtype(RTCW(tr1))-1871])(tr1, arg1, arg2);
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.set_minimum_width */
void F1955_23709 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1955_23669(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R16574[Dtype(RTCW(tr1))-1871])(tr1, arg1);
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.show */
void F1955_23711 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1955_23669(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16567[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.x_position */
EIF_INTEGER_32 F1955_23713 (EIF_REFERENCE Current)
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
	F1955_23669(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16396[Dtype(RTCW(tr1))-1730])(tr1);
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP_DRAWABLE}.y_position */
EIF_INTEGER_32 F1955_23714 (EIF_REFERENCE Current)
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
	F1955_23669(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16397[Dtype(RTCW(tr1))-1730])(tr1);
	RTLE;
	return Result;
}

void EIF_Minit1938 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
