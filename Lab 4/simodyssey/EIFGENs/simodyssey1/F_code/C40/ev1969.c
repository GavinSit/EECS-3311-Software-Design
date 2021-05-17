/*
 * Code for class EV_DIALOG_IMP_COMMON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1969.h"
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DIALOG_IMP_COMMON}.make_with_dialog_window */
void F1986_24610 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,976,0xFF01,0xFFF9,0,1475,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F976_4196(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_84_) = (EIF_REFERENCE) tr1;
	RTCT0("a_other_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_81_32_6_3_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_85_32_6_3_) = (EIF_INTEGER_32) ti4_1;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_83_) = (EIF_REFERENCE) arg1;
	F1986_24627(Current);
	tr1 = F1696_18976(RTCW(arg1));
	F1643_18476(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_38_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_38_) = (EIF_REFERENCE) loc1;
	} else {
	}
	RTLE;
}

/* {EV_DIALOG_IMP_COMMON}.is_closeable */
EIF_BOOLEAN F1986_24611 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_85_26_);
}


/* {EV_DIALOG_IMP_COMMON}.enable_closeable */
void F1986_24615 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_85_26_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_DIALOG_IMP_COMMON}.disable_closeable */
void F1986_24616 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_85_26_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_DIALOG_IMP_COMMON}.forbid_resize */
void F1986_24617 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1986_24623(Current);
}

/* {EV_DIALOG_IMP_COMMON}.destroy_implementation */
void F1986_24622 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = F1956_23756(Current);
	F1910_22397(RTCW(tr1), Current);
	F1986_24631(Current);
	F1696_18991(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_DIALOG_IMP_COMMON}.update_style_and_minimum_size */
void F1986_24623 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1986_24632(Current);
	F1725_19528(Current, ((EIF_INTEGER_32) 3L), Current, (EIF_BOOLEAN) 0);
	if (F1984_24557(Current)) {
		F1912_22563(Current);
	}
	RTLE;
}

/* {EV_DIALOG_IMP_COMMON}.dlg_template */
static EIF_REFERENCE F1986_24625_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(283)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1365, 0x01).id, 1365, _OBJSIZ_0_2_0_0_0_1_0_0_);
	F1366_16375(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	ti4_1 = F1984_24572(Current);
	F1366_16383(RTCW(Result), ti4_1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1986_24625 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(283,F1986_24625_body,(Current));
}

/* {EV_DIALOG_IMP_COMMON}.promote_to_dialog_window */
void F1986_24626 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1984, 0x01).id, 1984, _OBJSIZ_81_32_6_12_0_3_0_3_);
	F1985_24583(RTCW(loc1), Current);
	RTLE;
}

/* {EV_DIALOG_IMP_COMMON}.copy_attributes */
void F1986_24627 (EIF_REFERENCE Current)
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
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(24);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,loc10);
	RTLR(12,loc11);
	RTLR(13,loc12);
	RTLR(14,loc13);
	RTLR(15,loc14);
	RTLR(16,loc15);
	RTLR(17,loc16);
	RTLR(18,loc17);
	RTLR(19,loc18);
	RTLR(20,loc19);
	RTLR(21,loc20);
	RTLR(22,tr2);
	RTLR(23,tr3);
	RTLIU(24);
	
	RTGC;
	RTAOMS(24626,1);
	RTCT0("other_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_83_) != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,911,0xFF01,1925,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F912_3515(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_65_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_55_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_55_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_54_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_54_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_78_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_80_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_64_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_66_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_56_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_56_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_57_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_57_) = (EIF_REFERENCE) loc1;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_48_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_48_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_50_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_50_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_81_0_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_85_0_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_67_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_69_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_69_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_71_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tb1 = F1696_18987(RTCW(tr1));
	F1696_18985(Current, ((EIF_INTEGER_8) 0L), tb1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_40_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_40_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_10_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) loc2;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_62_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_62_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_18_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		RTAR(Current, loc3);
		*(EIF_REFERENCE *)(Current + _REFACS_18_) = (EIF_REFERENCE) loc3;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_15_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_15_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = F1984_24554(RTCW(tr1));
	F1984_24566(Current, tr1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_49_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_49_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_19_);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		RTAR(Current, loc4);
		*(EIF_REFERENCE *)(Current + _REFACS_19_) = (EIF_REFERENCE) loc4;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_52_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_52_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_34_);
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		RTAR(Current, loc5);
		*(EIF_REFERENCE *)(Current + _REFACS_34_) = (EIF_REFERENCE) loc5;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_35_);
	loc6 = tr1;
	if (EIF_TEST(loc6)) {
		RTAR(Current, loc6);
		*(EIF_REFERENCE *)(Current + _REFACS_35_) = (EIF_REFERENCE) loc6;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_68_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_70_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_81_17_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_85_17_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_81_32_6_3_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_85_32_6_3_) = (EIF_INTEGER_32) ti4_1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_60_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_60_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_58_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_58_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_59_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_59_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_81_32_6_8_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_85_32_6_10_) = (EIF_INTEGER_32) ti4_1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_39_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_39_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_79_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_81_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_81_11_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_85_11_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_81_14_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_85_14_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_76_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_78_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_81_32_6_9_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_85_32_6_11_) = (EIF_INTEGER_32) ti4_1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_81_26_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_85_26_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tb1 = F1696_18975(RTCW(tr1));
	F1696_18991(Current, tb1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_81_20_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_85_20_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_81_6_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_85_6_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_81_7_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_85_7_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_81_4_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_85_4_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_81_3_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_85_3_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_81_5_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_85_5_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_81_19_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_85_19_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_81_13_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_85_13_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_74_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_76_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_31_);
	loc7 = tr1;
	if (EIF_TEST(loc7)) {
		RTAR(Current, loc7);
		*(EIF_REFERENCE *)(Current + _REFACS_31_) = (EIF_REFERENCE) loc7;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_32_);
	loc8 = tr1;
	if (EIF_TEST(loc8)) {
		RTAR(Current, loc8);
		*(EIF_REFERENCE *)(Current + _REFACS_32_) = (EIF_REFERENCE) loc8;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_33_);
	loc9 = tr1;
	if (EIF_TEST(loc9)) {
		RTAR(Current, loc9);
		*(EIF_REFERENCE *)(Current + _REFACS_33_) = (EIF_REFERENCE) loc9;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_81_32_6_11_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_85_32_6_13_) = (EIF_INTEGER_32) ti4_1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_81_32_6_10_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_85_32_6_12_) = (EIF_INTEGER_32) ti4_1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_75_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_77_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_11_);
	loc10 = tr1;
	if (EIF_TEST(loc10)) {
		RTAR(Current, loc10);
		*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) loc10;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_6_);
	loc11 = tr1;
	if (EIF_TEST(loc11)) {
		RTAR(Current, loc11);
		*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) loc11;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_45_);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_45_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_46_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_46_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_16_);
	loc12 = tr1;
	if (EIF_TEST(loc12)) {
		RTAR(Current, loc12);
		*(EIF_REFERENCE *)(Current + _REFACS_16_) = (EIF_REFERENCE) loc12;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	ti2_1 = *(EIF_INTEGER_16 *)(RTCW(tr1)+ _I16OFF_81_32_4_);
	*(EIF_INTEGER_16 *)(Current+ _I16OFF_85_32_4_) = (EIF_INTEGER_16) ti2_1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	ti2_1 = *(EIF_INTEGER_16 *)(RTCW(tr1)+ _I16OFF_81_32_5_);
	*(EIF_INTEGER_16 *)(Current+ _I16OFF_85_32_5_) = (EIF_INTEGER_16) ti2_1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_65_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_67_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_25_);
	loc13 = tr1;
	if (EIF_TEST(loc13)) {
		RTAR(Current, loc13);
		*(EIF_REFERENCE *)(Current + _REFACS_25_) = (EIF_REFERENCE) loc13;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_27_);
	loc14 = tr1;
	if (EIF_TEST(loc14)) {
		RTAR(Current, loc14);
		*(EIF_REFERENCE *)(Current + _REFACS_27_) = (EIF_REFERENCE) loc14;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_26_);
	loc15 = tr1;
	if (EIF_TEST(loc15)) {
		RTAR(Current, loc15);
		*(EIF_REFERENCE *)(Current + _REFACS_26_) = (EIF_REFERENCE) loc15;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_28_);
	loc16 = tr1;
	if (EIF_TEST(loc16)) {
		RTAR(Current, loc16);
		*(EIF_REFERENCE *)(Current + _REFACS_28_) = (EIF_REFERENCE) loc16;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_30_);
	loc17 = tr1;
	if (EIF_TEST(loc17)) {
		RTAR(Current, loc17);
		*(EIF_REFERENCE *)(Current + _REFACS_30_) = (EIF_REFERENCE) loc17;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_24_);
	loc18 = tr1;
	if (EIF_TEST(loc18)) {
		RTAR(Current, loc18);
		*(EIF_REFERENCE *)(Current + _REFACS_24_) = (EIF_REFERENCE) loc18;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	ti2_1 = *(EIF_INTEGER_16 *)(RTCW(tr1)+ _I16OFF_81_32_2_);
	*(EIF_INTEGER_16 *)(Current+ _I16OFF_85_32_2_) = (EIF_INTEGER_16) ti2_1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	ti2_1 = *(EIF_INTEGER_16 *)(RTCW(tr1)+ _I16OFF_81_32_3_);
	*(EIF_INTEGER_16 *)(Current+ _I16OFF_85_32_3_) = (EIF_INTEGER_16) ti2_1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tu1_1 = *(EIF_NATURAL_8 *)(RTCW(tr1)+ _CHROFF_81_27_);
	*(EIF_NATURAL_8 *)(Current+ _CHROFF_85_27_) = (EIF_NATURAL_8) tu1_1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_12_);
	loc19 = tr1;
	if (EIF_TEST(loc19)) {
		RTAR(Current, loc19);
		*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) loc19;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_72_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_74_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tu1_1 = *(EIF_NATURAL_8 *)(RTCW(tr1)+ _CHROFF_81_28_);
	*(EIF_NATURAL_8 *)(Current+ _CHROFF_85_28_) = (EIF_NATURAL_8) tu1_1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_73_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_75_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_36_);
	loc20 = tr1;
	if (EIF_TEST(loc20)) {
		RTAR(Current, loc20);
		*(EIF_REFERENCE *)(Current + _REFACS_36_) = (EIF_REFERENCE) loc20;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_81_1_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_85_1_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_63_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_63_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_81_2_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_85_2_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_81_15_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_85_15_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	ti1_1 = *(EIF_INTEGER_8 *)(RTCW(tr1)+ _CHROFF_81_31_);
	*(EIF_INTEGER_8 *)(Current+ _CHROFF_85_31_) = (EIF_INTEGER_8) ti1_1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_81_25_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_85_25_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_81_21_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_85_21_) = (EIF_BOOLEAN) tb1;
	RTCOMS(tr1,24626,0,"\011\011\011\011The `post_creation_update_actions are only here to enable the use of upper and lower bars\012\011\011\011\011in the implementation of dialogs. Without this, upgrading the dialog\'s implementation\012\011\011\011\011whith items in the bars caused problems internally.",239,1312867630);
	{
		/* INLINED CODE (REFACTORING_HELPER.fixme) */
		/* END INLINED CODE */
	}
	;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_84_);
	tb1 = F736_2537(RTCW(tr1));
	if (tb1) {
		tr1 = RTLNSMART(eif_new_type(1636, 1).id);
		F1596_17742(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_54_) = (EIF_REFERENCE) tr1;
		tr1 = RTLNSMART(eif_new_type(1636, 1).id);
		F1596_17742(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_55_) = (EIF_REFERENCE) tr1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_84_);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,1475,0xFF01,0,0xFF01,1636,0xFF01,1636,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr2 = RTLNTS(typres0.id, 4, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
		RTAR(tr2,Current);
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
		tr3 = *(EIF_REFERENCE *)(RTCW(tr3) + _REFACS_54_);
		((EIF_TYPED_VALUE *)tr2+2)->it_r = tr3;
		RTAR(tr2,tr3);
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_54_);
		((EIF_TYPED_VALUE *)tr2+3)->it_r = tr3;
		RTAR(tr2,tr3);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr3= RTLNRF(typres0.id, (EIF_POINTER) __A1969_1881, (EIF_POINTER) _A1969_1881, (EIF_POINTER)(F1984_24577),tr2, 1, 0);
		}
		F969_4172(RTCW(tr1), tr3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_84_);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,1475,0xFF01,0,0xFF01,1636,0xFF01,1636,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr2 = RTLNTS(typres0.id, 4, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
		RTAR(tr2,Current);
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
		tr3 = *(EIF_REFERENCE *)(RTCW(tr3) + _REFACS_55_);
		((EIF_TYPED_VALUE *)tr2+2)->it_r = tr3;
		RTAR(tr2,tr3);
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_55_);
		((EIF_TYPED_VALUE *)tr2+3)->it_r = tr3;
		RTAR(tr2,tr3);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr3= RTLNRF(typres0.id, (EIF_POINTER) __A1969_1881, (EIF_POINTER) _A1969_1881, (EIF_POINTER)(F1984_24577),tr2, 1, 0);
		}
		F969_4172(RTCW(tr1), tr3);
	}
	RTLE;
}

/* {EV_DIALOG_IMP_COMMON}.setup_dialog */
void F1986_24629 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTGC;
	RTCT0("other_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_83_) != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1986_24627(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_84_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, NULL);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_84_);
	F969_4184(RTCW(tr1));
	F1912_22526(Current, *(EIF_REFERENCE *)(Current + _REFACS_78_));
	F1986_24630(Current);
	F1986_24632(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	tr1 = F1984_24554(RTCW(tr1));
	F1984_24566(Current, tr1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_85_25_)) {
		F1986_24633(Current);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_85_25_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
		ti4_1 = F1970_24046(RTCW(tr1));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
		ti4_2 = F1970_24047(RTCW(tr1));
		F1723_19482(Current, ti4_1, ti4_2);
	}
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tr1 = F1766_19966(Current);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tb4 = F1632_18307(loc2);
		tb3 = tb4;
	}
	if (tb3) {
		tb3 = F1631_18291(loc2);
		tb2 = tb3;
	}
	if (tb2) {
		tr1 = F1766_19966(Current);
		loc3 = tr1;
		tb1 = EIF_TEST(loc3);
	}
	if (tb1) {
		loc1 = *(EIF_REFERENCE *)(loc3 + _REFACS_3_);
		loc1 = RTRV(eif_new_type(2001, 0x00), loc1);
		RTCT0("button_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1766_19969(Current, loc3);
		F1912_22517(RTCW(loc1));
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	F1985_24598(RTCW(tr1));
	tr1 = F1956_23756(Current);
	F1910_22396(RTCW(tr1), Current);
	RTLE;
}

/* {EV_DIALOG_IMP_COMMON}.move_children */
void F1986_24630 (EIF_REFERENCE Current)
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
	RTCT0("other_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_83_) != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_83_);
	loc1 = F1977_24333(RTCW(tr1));
	loc1 = RTRV(eif_new_type(1969, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19735[Dtype(RTCW(loc1))-1972])(loc1, Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19743[Dtype(RTCW(loc1))-1972])(loc1, Current);
	}
	RTLE;
}

/* {EV_DIALOG_IMP_COMMON}.wel_destroy_window */
void F1986_24631 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R18953[Dtype(Current)-1914])(Current, ((EIF_INTEGER_32) 2L));
}

/* {EV_DIALOG_IMP_COMMON}.update_style */
void F1986_24632 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc2 = RTLNS(eif_new_type(1257, 0x01).id, 1257, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc1 = F1912_22496(Current);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_85_15_)) {
		ti4_1 = F1258_14779(RTCW(loc2), loc1, ((EIF_INTEGER_32) 262144L));
		loc1 = (EIF_INTEGER_32) ti4_1;
	} else {
		ti4_1 = F1258_14780(RTCW(loc2), loc1, ((EIF_INTEGER_32) 262144L));
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_85_26_)) {
		ti4_1 = F1258_14779(RTCW(loc2), loc1, ((EIF_INTEGER_32) 524288L));
		loc1 = (EIF_INTEGER_32) ti4_1;
	} else {
		ti4_1 = F1258_14780(RTCW(loc2), loc1, ((EIF_INTEGER_32) 524288L));
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	ti4_1 = F1258_14780(RTCW(loc2), loc1, ((EIF_INTEGER_32) 131072L));
	loc1 = (EIF_INTEGER_32) ti4_1;
	ti4_1 = F1258_14780(RTCW(loc2), loc1, ((EIF_INTEGER_32) 65536L));
	loc1 = (EIF_INTEGER_32) ti4_1;
	F1912_22522(Current, loc1);
	RTLE;
}

/* {EV_DIALOG_IMP_COMMON}.center_dialog */
void F1986_24633 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,loc4);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc3 = RTLNS(eif_new_type(1626, 0x01).id, 1626, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F1596_17742(RTCW(loc3));
	loc4 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_1_);
	loc4 = RTRV(eif_new_type(1953, 0x00), loc4);
	RTCT0("l_screen_imp_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTCT0("parent_window /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_82_) != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tb1 = '\0';
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_82_) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_82_);
		tb2 = F1632_18308(RTCW(tr1));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_82_);
		loc1 = F1614_18064(RTCW(tr1));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_82_);
		ti4_1 = F1614_18068(RTCW(tr1));
		ti4_2 = F1970_24041(Current);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) / ((EIF_INTEGER_32) 2L)));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_82_);
		loc2 = F1614_18065(RTCW(tr1));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_82_);
		ti4_1 = F1614_18069(RTCW(tr1));
		ti4_2 = F1970_24043(Current);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) / ((EIF_INTEGER_32) 2L)));
	} else {
		loc1 = F1954_23607(RTCW(loc4));
		ti4_1 = F1970_24041(Current);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ti4_1) / ((EIF_INTEGER_32) 2L));
		loc2 = F1954_23608(RTCW(loc4));
		ti4_1 = F1970_24043(Current);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - ti4_1) / ((EIF_INTEGER_32) 2L));
	}
	ti4_1 = F1954_23609(RTCW(loc4));
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + F1970_24041(Current)) > ti4_1)) {
		loc1 = F1954_23609(RTCW(loc4));
		ti4_1 = F1970_24041(Current);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ti4_1);
	}
	ti4_1 = F1954_23611(RTCW(loc4));
	if ((EIF_BOOLEAN) (loc1 < ti4_1)) {
		loc1 = F1954_23611(RTCW(loc4));
	}
	ti4_1 = F1954_23610(RTCW(loc4));
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + F1970_24043(Current)) > ti4_1)) {
		loc2 = F1954_23610(RTCW(loc4));
		ti4_1 = F1970_24043(Current);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - ti4_1);
	}
	ti4_1 = F1954_23612(RTCW(loc4));
	if ((EIF_BOOLEAN) (loc2 < ti4_1)) {
		loc2 = F1954_23612(RTCW(loc4));
	}
	F1723_19482(Current, loc1, loc2);
	RTLE;
}

/* {EV_DIALOG_IMP_COMMON}.on_wm_command */
void F1986_24634 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,loc2);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) LOWORD((arg1)) == ((EIF_INTEGER_32) 2L))) {
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		tb1 = (EIF_BOOLEAN)(arg2 == tp1);
	}
	if (tb1) {
		loc3 = *(EIF_REFERENCE *)(RTCV(RTOUCR(241,F1970_24037, (Current))));
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			F1970_24097(RTCW(loc3), ((EIF_INTEGER_32) 27L));
		}
	} else {
		tb1 = '\01';
		if (!(EIF_BOOLEAN)((EIF_INTEGER_32) HIWORD((arg1)) == ((EIF_INTEGER_32) 0L))) {
			tb2 = '\0';
			if ((EIF_BOOLEAN)((EIF_INTEGER_32) LOWORD((arg1)) == ((EIF_INTEGER_32) 1L))) {
				{
					/* INLINED CODE (ANY.default_pointer) */
					tp1 = (EIF_POINTER)  0;
					/* END INLINED CODE */
				}
				tb2 = (EIF_BOOLEAN)(arg2 == tp1);
			}
			tb1 = tb2;
		}
		if (tb1) {
			loc3 = *(EIF_REFERENCE *)(RTCV(RTOUCR(241,F1970_24037, (Current))));
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19565[Dtype(RTCW(loc3))-1958])(loc3);
				loc1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(241,F1970_24037, (Current))));
				loc1 = RTRV(eif_new_type(2007, 0x00), loc1);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					tr1 = F234_11536(RTCW(loc1));
					F977_14409(RTCW(tr1), NULL);
				}
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19565[Dtype(RTCW(loc3))-1958])(loc3);
				if ((EIF_BOOLEAN)(tr1 == loc2)) {
					F1970_24097(RTCW(loc3), ((EIF_INTEGER_32) 13L));
				}
			}
		} else {
			F1913_22750(Current, arg1, arg2);
		}
	}
	RTLE;
}

/* {EV_DIALOG_IMP_COMMON}.process_message */
EIF_POINTER F1986_24635 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	switch (arg2) {
		case 272L:
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R18952[Dtype(Current)-1914])(Current);
			break;
		case 310L:
			F1986_24636(Current, arg3, arg4);
			break;
		case 16L:
			F1970_24097(Current, ((EIF_INTEGER_32) 27L));
			tb1 = '\0';
			if ((EIF_BOOLEAN) !F1696_18975(Current)) {
				tb1 = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_10_) != NULL);
			}
			if (tb1) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
				F977_14409(RTCW(tr1), NULL);
			}
			F214_11245(Current, (EIF_BOOLEAN) 0);
			break;
		default:
			Result = F1913_22766(Current, arg1, arg2, arg3, arg4);
			break;
	}
	RTLE;
	return Result;
}

/* {EV_DIALOG_IMP_COMMON}.on_wm_ctlcolordialog */
void F1986_24636 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1312, 0x01).id, 1312, _OBJSIZ_8_2_0_3_0_8_0_0_);
	F1313_15461(RTCW(loc1), Current, arg1);
	tr1 = F1970_24145(Current);
	F1306_15252(RTCW(loc1), tr1);
	tr1 = F1970_24146(Current);
	F1306_15253(RTCW(loc1), tr1);
	loc2 = F1971_24179(Current);
	RTCT0("l_background_brush /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_0_2_0_3_0_0_);
	F214_11244(Current, tp1);
	RTLE;
}

/* {EV_DIALOG_IMP_COMMON}.window_on_wm_activate */
void F1986_24638 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1982_24504(Current, arg1, arg2);
	ti4_1 = ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) LOWORD((arg1)) == ti4_1)) {
		tb1 = F1639_18407(RTCV(F1696_18976(Current)));
		if ((EIF_BOOLEAN) !tb1) {
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_35_) != NULL)) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_35_);
				F977_14409(RTCW(tr1), NULL);
			}
		}
	}
	RTLE;
}

void EIF_Minit1969 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
