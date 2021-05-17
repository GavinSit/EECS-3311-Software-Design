/*
 * Code for class EV_DIALOG_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1968.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DIALOG_IMP}.make */
void F1985_24580 (EIF_REFERENCE Current)
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
	tr1 = F1984_24570(Current);
	tr2 = RTMS_EX_H("_AS_DIALOG",10,1293759815);
	tr1 = F1565_6940(RTCW(tr1), tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_78_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1564, 1).id);
	F1558_6510(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_79_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,999,0xFF01,1604,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F1000_3924(RTCW(tr1), ((EIF_INTEGER_32) 10L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_56_) = (EIF_REFERENCE) tr1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_25_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F1984_24549(Current);
	RTLE;
}

/* {EV_DIALOG_IMP}.title_name */
EIF_REFERENCE F1985_24581 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTMS_EX_H("EV_DIALOG_WINDOW",16,177747287);
	RTLE;
	return Result;
}

/* {EV_DIALOG_IMP}.make_with_real_dialog */
void F1985_24583 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_25_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	F1985_24580(Current);
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_38_);
	loc1 = RTRV(eif_final_id(Y15892,Y15892_gen_type,Dftype(Current),1695), loc1);
	RTCT0("l_interface /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1696_18970(Current, loc1);
	F1696_18990(Current, (EIF_BOOLEAN) 0);
	F1985_24605(Current, arg1);
	F1985_24600(Current, arg1);
	F1986_24622(RTCW(arg1));
	tr1 = F1956_23756(Current);
	F1910_22396(RTCW(tr1), Current);
	F1985_24606(Current, arg1);
	tr1 = F1696_18976(Current);
	F1596_17748(RTCW(tr1), Current);
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_DIALOG_IMP}.is_closeable */
EIF_BOOLEAN F1985_24584 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_81_26_);
}


/* {EV_DIALOG_IMP}.enable_closeable */
void F1985_24588 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_26_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_DIALOG_IMP}.disable_closeable */
void F1985_24589 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_26_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_DIALOG_IMP}.set_x_position */
void F1985_24590 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1982_24458(Current, arg1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_25_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {EV_DIALOG_IMP}.set_y_position */
void F1985_24591 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1982_24459(Current, arg1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_25_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {EV_DIALOG_IMP}.set_position */
void F1985_24592 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1723_19482(Current, arg1, arg2);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_25_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {EV_DIALOG_IMP}.show_relative_to_window */
void F1985_24594 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_21_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_80_) = (EIF_REFERENCE) arg1;
	F1985_24604(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16681[Dtype(RTCW(tr1))-1984])(tr1, arg1);
	RTLE;
}

/* {EV_DIALOG_IMP}.show */
void F1985_24595 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1984_24557(Current)) {
		F1912_22526(Current, *(EIF_REFERENCE *)(Current + _REFACS_76_));
		F1985_24601(Current);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_81_25_)) {
			F1985_24602(Current);
		}
		*(EIF_BOOLEAN *)(Current+ _CHROFF_81_25_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
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
			tr1 = F1648_18565(RTCV(F1696_18976(Current)));
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
		F1982_24486(Current);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_81_21_)) {
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_12_) != NULL)) {
				tr1 = F246_11660(Current);
				F977_14409(RTCW(tr1), NULL);
			}
			*(EIF_BOOLEAN *)(Current+ _CHROFF_81_21_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	}
	RTLE;
}

/* {EV_DIALOG_IMP}.destroy_implementation */
void F1985_24598 (EIF_REFERENCE Current)
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
	F1696_18991(Current, (EIF_BOOLEAN) 1);
	F1982_24470(Current);
	RTLE;
}

/* {EV_DIALOG_IMP}.on_destroy */
void F1985_24599 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_80_) != NULL)) {
	} else {
		F1982_24495(Current);
	}
	RTLE;
}

/* {EV_DIALOG_IMP}.move_children */
void F1985_24600 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = F1977_24333(RTCW(arg1));
	loc1 = RTRV(eif_new_type(1969, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19735[Dtype(RTCW(loc1))-1972])(loc1, Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19743[Dtype(RTCW(loc1))-1972])(loc1, Current);
	}
	RTLE;
}

/* {EV_DIALOG_IMP}.update_style */
void F1985_24601 (EIF_REFERENCE Current)
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
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_81_15_)) {
		ti4_1 = F1258_14779(RTCW(loc2), loc1, ((EIF_INTEGER_32) 262144L));
		loc1 = (EIF_INTEGER_32) ti4_1;
		ti4_1 = F1258_14779(RTCW(loc2), loc1, ((EIF_INTEGER_32) 65536L));
		loc1 = (EIF_INTEGER_32) ti4_1;
	} else {
		ti4_1 = F1258_14780(RTCW(loc2), loc1, ((EIF_INTEGER_32) 262144L));
		loc1 = (EIF_INTEGER_32) ti4_1;
		ti4_1 = F1258_14780(RTCW(loc2), loc1, ((EIF_INTEGER_32) 65536L));
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_81_26_)) {
		ti4_1 = F1258_14779(RTCW(loc2), loc1, ((EIF_INTEGER_32) 524288L));
		loc1 = (EIF_INTEGER_32) ti4_1;
	} else {
		ti4_1 = F1258_14780(RTCW(loc2), loc1, ((EIF_INTEGER_32) 524288L));
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	ti4_1 = F1258_14779(RTCW(loc2), loc1, ((EIF_INTEGER_32) 131072L));
	loc1 = (EIF_INTEGER_32) ti4_1;
	F1912_22522(Current, loc1);
	RTLE;
}

/* {EV_DIALOG_IMP}.center_dialog */
void F1985_24602 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,loc4);
	RTLR(2,loc5);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
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
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_80_);
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		tb2 = F1632_18308(loc5);
		tb1 = tb2;
	}
	if (tb1) {
		loc1 = F1614_18064(loc5);
		ti4_1 = F1614_18068(loc5);
		ti4_2 = F1970_24041(Current);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) / ((EIF_INTEGER_32) 2L)));
		loc2 = F1614_18065(loc5);
		ti4_1 = F1614_18069(loc5);
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
	F1985_24592(Current, loc1, loc2);
	RTLE;
}

/* {EV_DIALOG_IMP}.promote_to_modeless_dialog */
void F1985_24604 (EIF_REFERENCE Current)
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
	loc1 = RTLNS(eif_new_type(1987, 0x01).id, 1987, _OBJSIZ_85_32_6_14_0_3_0_3_);
	F1986_24610(RTCW(loc1), Current);
	tr1 = F1696_18976(Current);
	F1596_17748(RTCW(tr1), loc1);
	RTLE;
}

/* {EV_DIALOG_IMP}.copy_ui_from_from_real_dialog */
void F1985_24605 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_80_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_78_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1385, 1).id);
	F1386_16704(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_78_));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_64_) = (EIF_REFERENCE) tr1;
	tb1 = F1696_18987(RTCW(arg1));
	F1696_18985(Current, ((EIF_INTEGER_8) 0L), tb1);
	tr1 = F1984_24554(RTCW(arg1));
	F1984_24566(Current, tr1);
	ti4_1 = F1970_24046(RTCW(arg1));
	ti4_2 = F1970_24047(RTCW(arg1));
	F1985_24592(Current, ti4_1, ti4_2);
	tr1 = RTLNSMART(eif_new_type(1636, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_55_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_55_);
	F1984_24577(Current, tr1, *(EIF_REFERENCE *)(Current + _REFACS_55_));
	tr1 = RTLNSMART(eif_new_type(1636, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_54_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_54_);
	F1984_24577(Current, tr1, *(EIF_REFERENCE *)(Current + _REFACS_54_));
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_77_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F1982_24465(RTCW(arg1));
		F1982_24464(Current, loc1);
	}
	tb1 = F1696_18975(RTCW(arg1));
	F1696_18991(Current, tb1);
	ti4_1 = F1912_22497(RTCW(arg1));
	F1912_22523(Current, ti4_1);
	RTLE;
}

/* {EV_DIALOG_IMP}.copy_attributes_from_real_dialog */
void F1985_24606 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(23);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLR(9,loc7);
	RTLR(10,loc8);
	RTLR(11,loc9);
	RTLR(12,loc10);
	RTLR(13,loc11);
	RTLR(14,loc12);
	RTLR(15,loc13);
	RTLR(16,loc14);
	RTLR(17,loc15);
	RTLR(18,loc16);
	RTLR(19,loc17);
	RTLR(20,loc18);
	RTLR(21,loc19);
	RTLR(22,loc20);
	RTLIU(23);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_56_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_56_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_57_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_57_) = (EIF_REFERENCE) loc1;
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_48_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_48_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_50_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_50_) = (EIF_REFERENCE) tr1;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_85_0_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_0_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_69_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_67_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_71_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_69_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_40_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_40_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_10_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) loc2;
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_62_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_62_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_18_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		RTAR(Current, loc3);
		*(EIF_REFERENCE *)(Current + _REFACS_18_) = (EIF_REFERENCE) loc3;
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_15_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_15_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_49_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_49_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_19_);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		RTAR(Current, loc4);
		*(EIF_REFERENCE *)(Current + _REFACS_19_) = (EIF_REFERENCE) loc4;
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_52_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_52_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_34_);
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		RTAR(Current, loc5);
		*(EIF_REFERENCE *)(Current + _REFACS_34_) = (EIF_REFERENCE) loc5;
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_35_);
	loc6 = tr1;
	if (EIF_TEST(loc6)) {
		RTAR(Current, loc6);
		*(EIF_REFERENCE *)(Current + _REFACS_35_) = (EIF_REFERENCE) loc6;
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_70_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_68_) = (EIF_REFERENCE) tr1;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_85_17_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_17_) = (EIF_BOOLEAN) tb1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_85_32_6_3_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_81_32_6_3_) = (EIF_INTEGER_32) ti4_1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_60_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_60_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_59_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_59_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_58_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_58_) = (EIF_REFERENCE) tr1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_85_32_6_10_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_81_32_6_8_) = (EIF_INTEGER_32) ti4_1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_39_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_39_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_81_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_79_) = (EIF_REFERENCE) tr1;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_85_11_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_11_) = (EIF_BOOLEAN) tb1;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_85_14_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_14_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_78_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_76_) = (EIF_REFERENCE) tr1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_85_32_6_11_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_81_32_6_9_) = (EIF_INTEGER_32) ti4_1;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_85_26_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_26_) = (EIF_BOOLEAN) tb1;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_85_20_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_20_) = (EIF_BOOLEAN) tb1;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_85_6_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_6_) = (EIF_BOOLEAN) tb1;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_85_7_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_7_) = (EIF_BOOLEAN) tb1;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_85_4_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_4_) = (EIF_BOOLEAN) tb1;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_85_3_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_3_) = (EIF_BOOLEAN) tb1;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_85_5_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_5_) = (EIF_BOOLEAN) tb1;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_85_19_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_19_) = (EIF_BOOLEAN) tb1;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_85_13_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_13_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_76_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_74_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_31_);
	loc7 = tr1;
	if (EIF_TEST(loc7)) {
		RTAR(Current, loc7);
		*(EIF_REFERENCE *)(Current + _REFACS_31_) = (EIF_REFERENCE) loc7;
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_32_);
	loc8 = tr1;
	if (EIF_TEST(loc8)) {
		RTAR(Current, loc8);
		*(EIF_REFERENCE *)(Current + _REFACS_32_) = (EIF_REFERENCE) loc8;
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_33_);
	loc9 = tr1;
	if (EIF_TEST(loc9)) {
		RTAR(Current, loc9);
		*(EIF_REFERENCE *)(Current + _REFACS_33_) = (EIF_REFERENCE) loc9;
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_85_32_6_13_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_81_32_6_11_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_85_32_6_12_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_81_32_6_10_) = (EIF_INTEGER_32) ti4_1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_11_);
	loc10 = tr1;
	if (EIF_TEST(loc10)) {
		RTAR(Current, loc10);
		*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) loc10;
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_6_);
	loc11 = tr1;
	if (EIF_TEST(loc11)) {
		RTAR(Current, loc11);
		*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) loc11;
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_45_);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_45_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_46_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_46_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_16_);
	loc12 = tr1;
	if (EIF_TEST(loc12)) {
		RTAR(Current, loc12);
		*(EIF_REFERENCE *)(Current + _REFACS_16_) = (EIF_REFERENCE) loc12;
	}
	ti2_1 = *(EIF_INTEGER_16 *)(RTCW(arg1)+ _I16OFF_85_32_4_);
	*(EIF_INTEGER_16 *)(Current+ _I16OFF_81_32_4_) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = *(EIF_INTEGER_16 *)(RTCW(arg1)+ _I16OFF_85_32_5_);
	*(EIF_INTEGER_16 *)(Current+ _I16OFF_81_32_5_) = (EIF_INTEGER_16) ti2_1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_67_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_65_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_25_);
	loc13 = tr1;
	if (EIF_TEST(loc13)) {
		RTAR(Current, loc13);
		*(EIF_REFERENCE *)(Current + _REFACS_25_) = (EIF_REFERENCE) loc13;
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_27_);
	loc14 = tr1;
	if (EIF_TEST(loc14)) {
		RTAR(Current, loc14);
		*(EIF_REFERENCE *)(Current + _REFACS_27_) = (EIF_REFERENCE) loc14;
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_26_);
	loc15 = tr1;
	if (EIF_TEST(loc15)) {
		RTAR(Current, loc15);
		*(EIF_REFERENCE *)(Current + _REFACS_26_) = (EIF_REFERENCE) loc15;
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_28_);
	loc16 = tr1;
	if (EIF_TEST(loc16)) {
		RTAR(Current, loc16);
		*(EIF_REFERENCE *)(Current + _REFACS_28_) = (EIF_REFERENCE) loc16;
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_30_);
	loc17 = tr1;
	if (EIF_TEST(loc17)) {
		RTAR(Current, loc17);
		*(EIF_REFERENCE *)(Current + _REFACS_30_) = (EIF_REFERENCE) loc17;
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_24_);
	loc18 = tr1;
	if (EIF_TEST(loc18)) {
		RTAR(Current, loc18);
		*(EIF_REFERENCE *)(Current + _REFACS_24_) = (EIF_REFERENCE) loc18;
	}
	ti2_1 = *(EIF_INTEGER_16 *)(RTCW(arg1)+ _I16OFF_85_32_2_);
	*(EIF_INTEGER_16 *)(Current+ _I16OFF_81_32_2_) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = *(EIF_INTEGER_16 *)(RTCW(arg1)+ _I16OFF_85_32_3_);
	*(EIF_INTEGER_16 *)(Current+ _I16OFF_81_32_3_) = (EIF_INTEGER_16) ti2_1;
	tu1_1 = *(EIF_NATURAL_8 *)(RTCW(arg1)+ _CHROFF_85_27_);
	*(EIF_NATURAL_8 *)(Current+ _CHROFF_81_27_) = (EIF_NATURAL_8) tu1_1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_74_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_72_) = (EIF_REFERENCE) tr1;
	tu1_1 = *(EIF_NATURAL_8 *)(RTCW(arg1)+ _CHROFF_85_28_);
	*(EIF_NATURAL_8 *)(Current+ _CHROFF_81_28_) = (EIF_NATURAL_8) tu1_1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_75_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_73_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_36_);
	loc19 = tr1;
	if (EIF_TEST(loc19)) {
		RTAR(Current, loc19);
		*(EIF_REFERENCE *)(Current + _REFACS_36_) = (EIF_REFERENCE) loc19;
	}
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_85_1_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_1_) = (EIF_BOOLEAN) tb1;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_85_2_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_2_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_12_);
	loc20 = tr1;
	if (EIF_TEST(loc20)) {
		RTAR(Current, loc20);
		*(EIF_REFERENCE *)(Current + _REFACS_12_) = (EIF_REFERENCE) loc20;
	}
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_85_15_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_15_) = (EIF_BOOLEAN) tb1;
	ti1_1 = *(EIF_INTEGER_8 *)(RTCW(arg1)+ _CHROFF_85_31_);
	*(EIF_INTEGER_8 *)(Current+ _CHROFF_81_31_) = (EIF_INTEGER_8) ti1_1;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_85_25_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_25_) = (EIF_BOOLEAN) tb1;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_85_21_);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_81_21_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_63_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_63_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {EV_DIALOG_IMP}.process_message */
EIF_POINTER F1985_24607 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 16L))) {
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
	} else {
		RTLE;
		return (EIF_POINTER) F1913_22766(Current, arg1, arg2, arg3, arg4);
	}
	RTLE;
	return (EIF_POINTER) 0;
}

void EIF_Minit1968 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
