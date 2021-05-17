/*
 * Code for class EV_PIXMAP_IMP_WIDGET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1976.h"
#include <windows.h>
#include "wel.h"
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

/* {EV_PIXMAP_IMP_WIDGET}.make_with_drawable */
void F1993_24872 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(14);
	RTLR(0,loc3);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLR(7,loc7);
	RTLR(8,loc2);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,loc10);
	RTLR(12,tr2);
	RTLR(13,loc1);
	RTLIU(14);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O15892[Dtype(arg1)-1695]);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		F1696_18970(Current, loc3);
	} else {
	}
	tr1 = F1715_19380(RTCW(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_58_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O19506[Dtype(arg1)-1951]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_56_) = (EIF_REFERENCE) tr1;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1) + O19504[Dtype(arg1)-1951]);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_70_16_) = (EIF_BOOLEAN) tb1;
	tr1 = F1715_19379(RTCW(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_57_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O19489[Dtype(arg1)-1951]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_53_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_53_);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		F519_14211(loc4);
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O16495[Dtype(arg1)-1749]);
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		RTAR(Current, loc5);
		*(EIF_REFERENCE *)(Current + _REFACS_38_) = (EIF_REFERENCE) loc5;
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O16496[Dtype(arg1)-1749]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_39_) = (EIF_REFERENCE) tr1;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1) + O19494[Dtype(arg1)-1951]);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_70_14_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O19488[Dtype(arg1)-1951]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_52_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_52_);
	loc6 = tr1;
	if (EIF_TEST(loc6)) {
		F519_14211(loc6);
	}
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1) + O19495[Dtype(arg1)-1951]);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_70_15_) = (EIF_BOOLEAN) tb1;
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1) + O19491[Dtype(arg1)-1951]);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_70_11_) = (EIF_BOOLEAN) tb1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O19490[Dtype(arg1)-1951]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_54_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_54_);
	loc7 = tr1;
	if (EIF_TEST(loc7)) {
		F519_14211(loc7);
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O19507[Dtype(arg1)-1951]);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_70_27_6_6_) = (EIF_INTEGER_32) ti4_1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O19505[Dtype(arg1)-1951]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_55_) = (EIF_REFERENCE) tr1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O19478[Dtype(arg1)-1951]);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_70_27_6_5_) = (EIF_INTEGER_32) ti4_1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O19542[Dtype(arg1)-1954]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_64_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_64_);
	F519_14211(RTCW(tr1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O19539[Dtype(arg1)-1954]);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_70_27_6_7_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O19540[Dtype(arg1)-1954]);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_70_27_6_8_) = (EIF_INTEGER_32) ti4_1;
	loc2 = *(EIF_REFERENCE *)(RTCW(arg1) + O19534[Dtype(arg1)-1954]);
	RTCT0("l_internal_bitmap /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F519_14211(RTCW(loc2));
	RTAR(Current, loc2);
	*(EIF_REFERENCE *)(Current + _REFACS_61_) = (EIF_REFERENCE) loc2;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O19535[Dtype(arg1)-1954]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_62_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_62_);
	loc8 = tr1;
	if (EIF_TEST(loc8)) {
		F519_14211(loc8);
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O19530[Dtype(arg1)-1954]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_59_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_59_);
	loc9 = tr1;
	if (EIF_TEST(loc9)) {
		F519_14211(loc9);
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O19541[Dtype(arg1)-1954]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_63_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_63_);
	loc10 = tr1;
	if (EIF_TEST(loc10)) {
		F519_14211(loc10);
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O19531[Dtype(arg1)-1954]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_60_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O16500[Dtype(arg1)-1750]);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_40_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O16501[Dtype(arg1)-1750]);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_41_) = (EIF_REFERENCE) tr1;
	tr1 = RTOUCR(249,F1970_24036, (Current));
	tr2 = RTMS_EX_H("EV_PIXMAP",9,2004455248);
	F1917_22822(Current, tr1, tr2);
	F1723_19470(Current);
	F1970_24061(Current);
	loc1 = Current;
	loc1 = RTRV(eif_new_type(1983, 0x00), loc1);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1970_24055(Current);
	}
	F414_13401(Current, arg1);
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15921[Dtype(RTCW(arg1))-1871])(arg1);
	if (tb1) {
		F1989_24673(Current);
	} else {
		F1989_24674(Current);
	}
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15920[Dtype(RTCW(arg1))-1871])(arg1);
	if (tb1) {
		F1989_24671(Current);
	} else {
		F1989_24672(Current);
	}
	F1696_18990(Current, (EIF_BOOLEAN) 0);
	F1696_18973(RTCW(arg1));
	RTLE;
}

/* {EV_PIXMAP_IMP_WIDGET}.make */
void F1993_24873 (EIF_REFERENCE Current)
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
	tr1 = RTOUCR(249,F1970_24036, (Current));
	tr2 = RTMS_EX_H("EV_PIXMAP",9,2004455248);
	F1917_22822(Current, tr1, tr2);
	F1955_23633(Current);
	F1696_18990(Current, (EIF_BOOLEAN) 0);
	F1970_24029(Current);
	RTLE;
}

/* {EV_PIXMAP_IMP_WIDGET}.stretch */
void F1993_24876 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1955_23645(Current, arg1, arg2);
	F1993_24902(Current);
	RTLE;
}

/* {EV_PIXMAP_IMP_WIDGET}.set_size */
void F1993_24877 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1955_23646(Current, arg1, arg2);
	F1993_24902(Current);
	RTLE;
}

/* {EV_PIXMAP_IMP_WIDGET}.draw_point */
void F1993_24882 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1952_23518(Current, arg1, arg2);
	F1993_24902(Current);
	RTLE;
}

/* {EV_PIXMAP_IMP_WIDGET}.draw_segment */
void F1993_24884 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1952_23525(Current, arg1, arg2, arg3, arg4);
	F1993_24902(Current);
	RTLE;
}

/* {EV_PIXMAP_IMP_WIDGET}.copy_pixmap */
void F1993_24896 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	F1955_23666(Current, arg1);
	F1912_22564(Current);
	RTLE;
}

/* {EV_PIXMAP_IMP_WIDGET}.destroy */
void F1993_24897 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1955_23665(Current);
	F1989_24676(Current);
	RTLE;
}

/* {EV_PIXMAP_IMP_WIDGET}.class_background */
static EIF_REFERENCE F1993_24898_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(358)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1320, 0x01).id, 1320, _OBJSIZ_0_2_0_3_0_1_0_0_);
	tp1 = F1_33(Current);
	F1317_15540(RTCW(tr1), tp1);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1993_24898 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(358,F1993_24898_body,(Current));
}

/* {EV_PIXMAP_IMP_WIDGET}.on_erase_background */
void F1993_24899 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1912_22507(Current);
	tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 1L)));
	F214_11244(Current, tp1);
	RTLE;
}

/* {EV_PIXMAP_IMP_WIDGET}.on_paint */
void F1993_24900 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc18 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc23 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc24 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc25 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(21);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg2);
	RTLR(4,loc14);
	RTLR(5,loc23);
	RTLR(6,loc24);
	RTLR(7,loc12);
	RTLR(8,loc2);
	RTLR(9,loc1);
	RTLR(10,loc13);
	RTLR(11,loc22);
	RTLR(12,arg1);
	RTLR(13,loc17);
	RTLR(14,loc19);
	RTLR(15,loc20);
	RTLR(16,loc21);
	RTLR(17,loc25);
	RTLR(18,loc3);
	RTLR(19,loc15);
	RTLR(20,loc16);
	RTLIU(21);
	
	RTGC;
	if ((EIF_BOOLEAN)(F1970_24039(Current) != NULL)) {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_7_) != NULL)) {
			tr1 = F307_12624(Current);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,1475,1508,1508,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr2 = RTLNTS(typres0.id, 5, 1);
			}
			ti4_1 = F1408_17327(RTCW(arg2));
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ti4_1;
			ti4_1 = F1408_17329(RTCW(arg2));
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ti4_1;
			ti4_1 = F1408_17332(RTCW(arg2));
			((EIF_TYPED_VALUE *)tr2+3)->it_i4 = ti4_1;
			ti4_1 = F1408_17333(RTCW(arg2));
			((EIF_TYPED_VALUE *)tr2+4)->it_i4 = ti4_1;
			F977_14409(RTCW(tr1), tr2);
		}
		loc14 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
		tb1 = '\0';
		tr1 = F1970_24073(Current);
		loc23 = tr1;
		if (EIF_TEST(loc23)) {
			tr1 = *(EIF_REFERENCE *)(loc23 + O19682[Dtype(loc23)-1969]);
			loc24 = tr1;
			tb1 = EIF_TEST(loc24);
		}
		if (tb1) {
			loc12 = RTLNS(eif_new_type(1320, 0x01).id, 1320, _OBJSIZ_0_2_0_3_0_1_0_0_);
			F1321_15590(RTCW(loc12), loc24);
		} else {
			loc12 = RTLNS(eif_new_type(1320, 0x01).id, 1320, _OBJSIZ_0_2_0_3_0_1_0_0_);
			tr1 = F1970_24145(Current);
			F1321_15590(RTCW(loc12), tr1);
		}
		loc2 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_64_);
		loc9 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_70_27_6_7_);
		loc8 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_70_27_6_8_);
		loc10 = F1723_19499(Current);
		loc11 = F1723_19500(Current);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc10 - loc8) / ((EIF_INTEGER_32) 2L));
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc11 - loc9) / ((EIF_INTEGER_32) 2L));
		loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + loc8);
		loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + loc9);
		loc13 = RTOUCR(326,F468_13503, (Current));
		F1408_17334(RTCW(loc13), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), loc10, loc11);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_62_) == NULL)) {
			RTCT0("l_bitmap /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			loc22 = RTLNS(eif_new_type(1400, 0x01).id, 1400, _OBJSIZ_0_1_0_1_0_1_0_0_);
			F1401_17039(RTCW(loc22), loc1, loc2, ((EIF_INTEGER_32) 0L));
			tb1 = '\0';
			tb2 = '\0';
			if ((EIF_BOOLEAN)(loc22 != NULL)) {
				tr1 = F1401_17040(RTCW(loc22));
				ti4_1 = F1403_17084(RTCW(tr1));
				tb2 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 32L));
			}
			if (tb2) {
				tb2 = '\01';
				tp1 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_0_3_0_3_0_1_);
				{
					/* INLINED CODE (ANY.default_pointer) */
					tp2 = (EIF_POINTER)  0;
					/* END INLINED CODE */
				}
				if (!(EIF_BOOLEAN)(tp1 != tp2)) {
					tb3 = *(EIF_BOOLEAN *)(RTCW(loc2)+ _CHROFF_0_2_);
					tb2 = tb3;
				}
				tb1 = tb2;
			}
			if (tb1) {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R10490[Dtype(RTCW(loc14))-409])(loc14, Current, arg1, loc13, loc12);
				loc17 = RTLNS(eif_new_type(1378, 0x01).id, 1378, _OBJSIZ_0_1_0_0_0_1_0_0_);
				F1379_16577(RTCW(loc17));
				loc18 = F1306_15312(RTCW(arg1), loc5, loc4, loc8, loc9, loc1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), loc8, loc9, loc17);
				F1296_15104(RTCW(loc17));
			} else {
				loc19 = RTLNS(eif_new_type(1321, 0x01).id, 1321, _OBJSIZ_0_2_0_3_0_1_0_0_);
				F1322_15607(RTCW(loc19), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), loc10, loc11);
				loc20 = RTLNS(eif_new_type(1321, 0x01).id, 1321, _OBJSIZ_0_2_0_3_0_1_0_0_);
				F1322_15607(RTCW(loc20), loc5, loc4, loc6, loc7);
				loc21 = F1322_15610(RTCW(loc19), loc20, ((EIF_INTEGER_32) 4L));
				F1306_15274(RTCW(arg1), loc21);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R10490[Dtype(RTCW(loc14))-409])(loc14, Current, arg1, loc13, loc12);
				F1306_15275(RTCW(arg1));
				F519_14213(RTCW(loc19));
				F519_14213(RTCW(loc20));
				F519_14213(RTCW(loc21));
				F1306_15311(RTCW(arg1), loc5, loc4, loc8, loc9, loc1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 13369376L));
			}
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_62_);
			loc25 = tr1;
			if (EIF_TEST(loc25)) {
				loc3 = *(EIF_REFERENCE *)(Current + _REFACS_59_);
				loc15 = RTLNS(eif_new_type(1319, 0x01).id, 1319, _OBJSIZ_0_3_0_3_0_2_0_0_);
				F1320_15566(RTCW(loc15), loc1, loc10, loc11);
				loc16 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
				F1307_15414(RTCW(loc16), loc1);
				F1306_15265(RTCW(loc16), loc15);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R10490[Dtype(RTCW(loc14))-409])(loc14, Current, loc16, loc13, loc12);
				ti4_1 = (EIF_INTEGER_32) MAKEROP4(SRCCOPY, 0xAA0029);
				F1306_15313(RTCW(loc16), loc5, loc4, loc8, loc9, loc1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), loc25, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1);
				F1306_15311(RTCW(arg1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), loc10, loc11, loc16, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 13369376L));
				F1306_15271(RTCW(loc16));
				F519_14213(RTCW(loc16));
				F519_14213(RTCW(loc15));
			} else {
			}
		}
		F519_14213(RTCW(loc12));
	}
	RTLE;
}

/* {EV_PIXMAP_IMP_WIDGET}.on_size */
void F1993_24901 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1993_24902(Current);
	F1970_24130(Current, arg1, arg2, arg3);
	RTLE;
}

/* {EV_PIXMAP_IMP_WIDGET}.update_display */
void F1993_24902 (EIF_REFERENCE Current)
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
	RTLE;
}

/* {EV_PIXMAP_IMP_WIDGET}.translate_coordinates */
EIF_REFERENCE F1993_24903 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	loc1 = F1970_24088(Current, arg1, arg2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,1475,1508,1508,1508,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 5, 1);
	}
	ti4_1 = F1723_19499(Current);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_70_27_6_8_);
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = (EIF_INTEGER_32) (arg1 - (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) / ((EIF_INTEGER_32) 2L)));
	ti4_1 = F1723_19500(Current);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_70_27_6_7_);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = (EIF_INTEGER_32) (arg2 - (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) / ((EIF_INTEGER_32) 2L)));
	ti4_1 = F1906_22336(RTCW(loc1));
	((EIF_TYPED_VALUE *)tr1+3)->it_i4 = ti4_1;
	ti4_1 = F1906_22337(RTCW(loc1));
	((EIF_TYPED_VALUE *)tr1+4)->it_i4 = ti4_1;
	Result = (EIF_REFERENCE) tr1;
	RTLE;
	return Result;
}

/* {EV_PIXMAP_IMP_WIDGET}.on_left_button_down */
void F1993_24904 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1912_22517(Current);
	F1970_24078(Current, arg1, arg2, arg3);
	RTLE;
}

/* {EV_PIXMAP_IMP_WIDGET}.on_middle_button_down */
void F1993_24905 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1912_22517(Current);
	F1970_24079(Current, arg1, arg2, arg3);
	RTLE;
}

/* {EV_PIXMAP_IMP_WIDGET}.on_right_button_down */
void F1993_24906 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1912_22517(Current);
	F1970_24080(Current, arg1, arg2, arg3);
	RTLE;
}

/* {EV_PIXMAP_IMP_WIDGET}.on_parented */
void F1993_24908 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_70_20_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_PIXMAP_IMP_WIDGET}.on_orphaned */
void F1993_24909 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_70_20_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_PIXMAP_IMP_WIDGET}.default_style */
EIF_INTEGER_32 F1993_24910 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 1073741824L) + ((EIF_INTEGER_32) 268435456L)) + ((EIF_INTEGER_32) 33554432L)) + ((EIF_INTEGER_32) 67108864L));
}

/* {EV_PIXMAP_IMP_WIDGET}.class_style */
static EIF_INTEGER_32 F1993_24911_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 359)

	
	RTEV;
	RTGC;
	RTOTP;
	Result = eif_bit_or(((EIF_INTEGER_32) 8L),((EIF_INTEGER_32) 32L));
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1993_24911 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,359,F1993_24911_body,(Current));
}

void EIF_Minit1976 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
