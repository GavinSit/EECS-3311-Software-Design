/*
 * Code for class EV_CHECKABLE_MENU_ITEM_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1880.h"
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

/* {EV_CHECKABLE_MENU_ITEM_IMP}.on_draw_menu_item_left_part */
void F1897_22128 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,loc10);
	RTLR(5,tr1);
	RTLR(6,loc11);
	RTLIU(7);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1));
	loc2 = F1904_22283(RTCW(arg1));
	loc3 = F1904_22279(RTCW(arg1));
	loc4 = F1408_17326(RTCW(loc2));
	loc5 = F1408_17328(RTCW(loc2));
	loc6 = F1408_17331(RTCW(loc2));
	ti4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = eif_bit_and(loc3,ti4_1);
	loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	ti4_1 = ((EIF_INTEGER_32) 4L);
	ti4_1 = eif_bit_and(loc3,ti4_1);
	loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	ti4_1 = ((EIF_INTEGER_32) 8L);
	ti4_1 = eif_bit_and(loc3,ti4_1);
	loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	loc10 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1408_17321(RTCW(loc10), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN)(F1743_19689(Current) != NULL)) {
		if (loc7) {
			F1408_17334(RTCW(loc10), loc4, loc5, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + *(EIF_INTEGER_32 *)(Current + O20175[dtype-2010])) - ((EIF_INTEGER_32) 2L)), loc6);
			tr1 = F1836_20729(Current);
			F2011_25506(Current, loc1, loc10, tr1);
			F1408_17334(RTCW(loc10), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + *(EIF_INTEGER_32 *)(Current + O20175[dtype-2010])) - ((EIF_INTEGER_32) 2L)), loc5, (EIF_INTEGER_32) (loc4 + *(EIF_INTEGER_32 *)(Current + O20175[dtype-2010])), loc6);
			tr1 = F1836_20729(Current);
			F2011_25506(Current, loc1, loc10, tr1);
		} else {
			F1408_17334(RTCW(loc10), loc4, loc5, (EIF_INTEGER_32) (loc4 + *(EIF_INTEGER_32 *)(Current + O20175[dtype-2010])), loc6);
			tr1 = F1836_20720(Current);
			F2011_25506(Current, loc1, loc10, tr1);
		}
		F1897_22131(Current, loc1, loc2, loc9, loc7, loc8);
	} else {
		F1408_17334(RTCW(loc10), loc4, loc5, (EIF_INTEGER_32) (loc4 + *(EIF_INTEGER_32 *)(Current + O20175[dtype-2010])), loc6);
		if (loc7) {
			loc11 = F1836_20729(Current);
		} else {
			loc11 = F1836_20720(Current);
		}
		F2011_25506(Current, loc1, loc10, loc11);
		if (loc9) {
			F1897_22130(Current, loc1, loc10, loc7, loc8);
		}
	}
	RTLE;
}

/* {EV_CHECKABLE_MENU_ITEM_IMP}.draw_check_mark */
void F1897_22130 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3, EIF_BOOLEAN arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc7);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,arg2);
	RTLR(5,loc1);
	RTLR(6,loc2);
	RTLR(7,loc6);
	RTLR(8,tr2);
	RTLR(9,arg1);
	RTLR(10,loc5);
	RTLIU(11);
	
	RTGC;
	loc7 = *(EIF_REFERENCE *)(Current + O20163[dtype-2010]);
	RTCT0("l_real_text /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc7 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = F502_14140(Current);
	loc4 = F1885_21704(RTCW(tr1), loc7);
	loc3 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	ti4_1 = F1408_17332(RTCW(arg2));
	F1408_17321(RTCW(loc3), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1, loc4);
	loc1 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
	F1307_15413(RTCW(loc1));
	loc2 = RTLNS(eif_new_type(1319, 0x01).id, 1319, _OBJSIZ_0_3_0_3_0_2_0_0_);
	ti4_1 = F1408_17332(RTCW(arg2));
	ti4_2 = F1408_17333(RTCW(arg2));
	F1320_15566(RTCW(loc2), loc1, ti4_1, ti4_2);
	F1306_15265(RTCW(loc1), loc2);
	ti4_1 = ((EIF_INTEGER_32) 2L);
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R18333[dtype-2011])(Current);
	F1306_15291(RTCW(loc1), loc3, ti4_1, ti4_2);
	if (arg3) {
		loc6 = F1836_20729(Current);
	} else {
		loc6 = F1836_20720(Current);
	}
	tb1 = '\0';
	if ((EIF_BOOLEAN) (arg4 && (EIF_BOOLEAN) !arg3)) {
		tr1 = F1836_20720(Current);
		tr2 = F1836_20731(Current);
		tb2 = F1829_20497(RTCW(tr1), tr2);
		tb1 = tb2;
	}
	if (tb1) {
		F1306_15252(RTCW(arg1), loc6);
		tr1 = F1836_20738(Current);
		F1306_15253(RTCW(arg1), tr1);
		ti4_1 = F1408_17326(RTCW(arg2));
		ti4_2 = F1408_17328(RTCW(arg2));
		ti4_3 = F1408_17333(RTCW(arg2));
		ti4_4 = F1408_17332(RTCW(arg2));
		ti4_5 = ((EIF_INTEGER_32) 13369376L);
		F1306_15311(RTCW(arg1), (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ti4_1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ti4_2) + (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 - loc4) / ((EIF_INTEGER_32) 2L))), ti4_4, loc4, loc1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_5);
		tr1 = RTOUCR(458,F279_12030, (Current));
		F1306_15253(RTCW(arg1), tr1);
		tr1 = RTOUCR(459,F279_12029, (Current));
		F1306_15252(RTCW(arg1), tr1);
		ti4_1 = F1408_17326(RTCW(arg2));
		ti4_2 = F1408_17328(RTCW(arg2));
		ti4_3 = F1408_17333(RTCW(arg2));
		ti4_4 = F1408_17332(RTCW(arg2));
		ti4_5 = ((EIF_INTEGER_32) 8913094L);
		F1306_15311(RTCW(arg1), ti4_1, (EIF_INTEGER_32) (ti4_2 + (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 - loc4) / ((EIF_INTEGER_32) 2L))), ti4_4, loc4, loc1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_5);
		tr1 = F1836_20733(Current);
		F1306_15253(RTCW(arg1), tr1);
		tr1 = RTOUCR(458,F279_12030, (Current));
		F1306_15252(RTCW(arg1), tr1);
		ti4_1 = F1408_17326(RTCW(arg2));
		ti4_2 = F1408_17328(RTCW(arg2));
		ti4_3 = F1408_17333(RTCW(arg2));
		ti4_4 = F1408_17332(RTCW(arg2));
		ti4_5 = ((EIF_INTEGER_32) 15597702L);
		F1306_15311(RTCW(arg1), ti4_1, (EIF_INTEGER_32) (ti4_2 + (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 - loc4) / ((EIF_INTEGER_32) 2L))), ti4_4, loc4, loc1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_5);
	} else {
		if (arg4) {
			loc5 = F1836_20733(Current);
			tr1 = F1836_20729(Current);
			tb1 = F1829_20497(RTCW(loc5), tr1);
			if (tb1) {
				loc5 = F1836_20738(Current);
			}
		} else {
			if (arg3) {
				loc5 = F1836_20730(Current);
			} else {
				loc5 = F1836_20723(Current);
			}
		}
		F1306_15252(RTCW(arg1), loc6);
		F1306_15253(RTCW(arg1), loc5);
		ti4_1 = F1408_17326(RTCW(arg2));
		ti4_2 = F1408_17328(RTCW(arg2));
		ti4_3 = F1408_17333(RTCW(arg2));
		ti4_4 = F1408_17332(RTCW(arg2));
		ti4_5 = ((EIF_INTEGER_32) 13369376L);
		F1306_15311(RTCW(arg1), ti4_1, (EIF_INTEGER_32) (ti4_2 + (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 - loc4) / ((EIF_INTEGER_32) 2L))), ti4_4, loc4, loc1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_5);
	}
	F1306_15271(RTCW(loc1));
	F519_14213(RTCW(loc1));
	F519_14213(RTCW(loc2));
	RTLE;
}

/* {EV_CHECKABLE_MENU_ITEM_IMP}.draw_pixmap */
void F1897_22131 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3, EIF_BOOLEAN arg4, EIF_BOOLEAN arg5)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc5);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc6);
	RTLR(4,tr1);
	RTLR(5,arg1);
	RTLR(6,loc8);
	RTLR(7,loc1);
	RTLR(8,loc9);
	RTLR(9,loc7);
	RTLIU(10);
	
	RTGC;
	loc5 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	ti4_1 = F1408_17326(RTCW(arg2));
	ti4_2 = F1408_17328(RTCW(arg2));
	ti4_3 = F1408_17326(RTCW(arg2));
	ti4_4 = *(EIF_INTEGER_32 *)(Current + O20175[Dtype(Current)-2010]);
	ti4_5 = F1408_17331(RTCW(arg2));
	F1408_17321(RTCW(loc5), ti4_1, ti4_2, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 + ti4_4) - ((EIF_INTEGER_32) 2L)), ti4_5);
	if (arg3) {
		loc6 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
		tr1 = F1836_20720(Current);
		tr1 = F1897_22133(Current, tr1);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O17154[Dtype(tr1)-1828]);
		F1829_20491(RTCW(loc6), ti4_1);
		ti4_1 = ((EIF_INTEGER_32) 2L);
		ti4_2 = ((EIF_INTEGER_32) 15L);
		F1306_15290(RTCW(arg1), loc5, ti4_1, ti4_2);
	} else {
		if ((EIF_BOOLEAN) (arg4 && (EIF_BOOLEAN) !arg5)) {
			loc6 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
			tr1 = F1836_20729(Current);
			tr1 = F1897_22133(Current, tr1);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O17154[Dtype(tr1)-1828]);
			F1829_20491(RTCW(loc6), ti4_1);
		}
	}
	F1296_15104(RTCW(loc5));
	loc8 = F1743_19689(Current);
	RTCT0("l_pixmap_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc8 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc2 = F1408_17328(RTCW(arg2));
	ti4_1 = F1408_17331(RTCW(arg2));
	ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R11094[Dtype(RTCW(loc8))-1871])(loc8);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + ti4_1) - ti4_2) - ((EIF_INTEGER_32) 2L)) / ((EIF_INTEGER_32) 2L));
	loc3 = F1408_17326(RTCW(arg2));
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + loc3);
	if (arg3) {
		loc2++;
		loc3++;
	}
	if (arg5) {
		loc4 = ((EIF_INTEGER_32) 32L);
	} else {
		loc4 = ((EIF_INTEGER_32) 0L);
	}
	loc1 = F2011_25520(Current, loc8);
	tb1 = '\0';
	if (arg5) {
		tr1 = RTOUCR(460,F1897_22132, (Current));
		loc9 = tr1;
		tb1 = EIF_TEST(loc9);
	}
	if (tb1) {
		if (arg4) {
			loc6 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
			tr1 = F1836_20729(Current);
			tr1 = F1897_22133(Current, tr1);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O17154[Dtype(tr1)-1828]);
			F1829_20491(RTCW(loc6), ti4_1);
		} else {
			loc6 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
			tr1 = F1836_20720(Current);
			tr1 = F1897_22133(Current, tr1);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O17154[Dtype(tr1)-1828]);
			F1829_20491(RTCW(loc6), ti4_1);
		}
		loc7 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11078[Dtype(RTCW(loc8))-1871])(loc8);
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R11082[Dtype(RTCW(loc8))-1871])(loc8);
		F62_9668(loc9, loc7, loc1, arg1, loc3, loc2, loc6, tb1);
		F519_14210(RTCW(loc7));
	} else {
		F1306_15284(RTCW(arg1), NULL, loc1, loc3, loc2, loc4);
	}
	F519_14210(RTCW(loc1));
	RTLE;
}

/* {EV_CHECKABLE_MENU_ITEM_IMP}.disabled_image */
static EIF_REFERENCE F1897_22132_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(460)

	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	loc1 = RTLNS(eif_new_type(62, 0x01).id, 62, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tb1 = F63_9679(RTCW(loc1));
	if (tb1) {
		tr1 = RTLNS(eif_new_type(61, 0x01).id, 61, _OBJSIZ_0_0_0_0_0_0_0_0_);
		Result = (EIF_REFERENCE) tr1;
	}
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1897_22132 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(460,F1897_22132_body,(Current));
}

/* {EV_CHECKABLE_MENU_ITEM_IMP}.contrast_color */
EIF_REFERENCE F1897_22133 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20488(RTCW(Result));
	ti4_1 = F1829_20494(RTCW(arg1));
	if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 220L))) {
		ti4_1 = F1829_20494(RTCW(arg1));
		F1829_20500(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 20L)));
	} else {
		ti4_1 = F1829_20494(RTCW(arg1));
		ti4_1 = eif_max_int32 ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 20L)),((EIF_INTEGER_32) 0L));
		F1829_20500(RTCW(Result), ti4_1);
	}
	ti4_1 = F1829_20495(RTCW(arg1));
	if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 220L))) {
		ti4_1 = F1829_20495(RTCW(arg1));
		F1829_20501(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 20L)));
	} else {
		ti4_1 = F1829_20495(RTCW(arg1));
		ti4_1 = eif_max_int32 ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 20L)),((EIF_INTEGER_32) 0L));
		F1829_20501(RTCW(Result), ti4_1);
	}
	ti4_1 = F1829_20496(RTCW(arg1));
	if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 220L))) {
		ti4_1 = F1829_20496(RTCW(arg1));
		F1829_20502(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 20L)));
	} else {
		ti4_1 = F1829_20496(RTCW(arg1));
		ti4_1 = eif_max_int32 ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 20L)),((EIF_INTEGER_32) 0L));
		F1829_20502(RTCW(Result), ti4_1);
	}
	RTLE;
	return Result;
}

void EIF_Minit1880 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
