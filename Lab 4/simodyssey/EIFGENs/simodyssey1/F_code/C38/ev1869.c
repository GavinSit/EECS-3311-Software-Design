/*
 * Code for class EV_FONT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1869.h"
#include "wel.h"
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

/* {EV_FONT_IMP}.make */
void F1886_21717 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLIU(6);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1884, 1).id);
	tr2 = RTOUCR(258,F1886_21745, (Current));
	F1885_21695(RTCW(tr1), tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	tr1 = F1407_17216(RTCV(RTOUCR(258,F1886_21745, (Current))));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,972,0xFF01,1564,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F973_14399(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_3_);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1564,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1869_192_2, (EIF_POINTER) _A1869_192_2, (EIF_POINTER)(F1886_21747),tr2, 1, 1);
	}
	F969_4172(RTCW(tr1), tr5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_4_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(RTCW(tr2) + _REFACS_3_);
	tr2 = F951_4081(RTCW(tr2));
	F969_4172(RTCW(tr1), tr2);
	tb1 = F1407_17206(RTCV(RTOUCR(258,F1886_21745, (Current))));
	ti4_1 = F1886_21760(Current, tb1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_2_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = F1407_17205(RTCV(RTOUCR(258,F1886_21745, (Current))));
	ti4_1 = F1886_21759(Current, ti4_1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_3_) = (EIF_INTEGER_32) ti4_1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	tr1 = RTOUCR(258,F1886_21745, (Current));
	F1886_21753(Current, tr1);
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_FONT_IMP}.family */
EIF_INTEGER_32 F1886_21718 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_4_);
}


/* {EV_FONT_IMP}.weight */
EIF_INTEGER_32 F1886_21720 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_3_);
}


/* {EV_FONT_IMP}.shape */
EIF_INTEGER_32 F1886_21721 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_2_);
}


/* {EV_FONT_IMP}.height */
EIF_INTEGER_32 F1886_21722 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	Result = F1885_21701(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_FONT_IMP}.height_in_points */
EIF_INTEGER_32 F1886_21723 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	Result = F1885_21702(RTCW(tr1));
	Result = eif_abs_int32 (Result);
	RTLE;
	return Result;
}

/* {EV_FONT_IMP}.set_family */
void F1886_21724 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(259,F1886_21744, (Current));
	F1407_17199(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_2_));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_4_) = (EIF_INTEGER_32) arg1;
	F1886_21748(Current);
	RTLE;
}

/* {EV_FONT_IMP}.set_weight */
void F1886_21725 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tr1 = RTOUCR(259,F1886_21744, (Current));
	F1407_17199(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_2_));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_3_) = (EIF_INTEGER_32) arg1;
	switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_3_)) {
		case 6L:
			tr1 = RTOUCR(259,F1886_21744, (Current));
			F1407_17245(RTCW(tr1), ((EIF_INTEGER_32) 100L));
			break;
		case 7L:
			tr1 = RTOUCR(259,F1886_21744, (Current));
			F1407_17245(RTCW(tr1), ((EIF_INTEGER_32) 400L));
			break;
		case 8L:
			tr1 = RTOUCR(259,F1886_21744, (Current));
			F1407_17245(RTCW(tr1), ((EIF_INTEGER_32) 700L));
			break;
		case 9L:
			tr1 = RTOUCR(259,F1886_21744, (Current));
			F1407_17245(RTCW(tr1), ((EIF_INTEGER_32) 900L));
			break;
		default:
			break;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr2 = RTOUCR(259,F1886_21744, (Current));
	F1885_21698(RTCW(tr1), tr2);
	RTLE;
}

/* {EV_FONT_IMP}.set_shape */
void F1886_21726 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	tr1 = RTOUCR(259,F1886_21744, (Current));
	F1407_17199(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_2_));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_2_) = (EIF_INTEGER_32) arg1;
	switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_2_)) {
		case 10L:
			F1407_17247(RTCV(RTOUCR(259,F1886_21744, (Current))));
			break;
		case 11L:
			F1407_17246(RTCV(RTOUCR(259,F1886_21744, (Current))));
			break;
		default:
			break;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr2 = RTOUCR(259,F1886_21744, (Current));
	F1885_21698(RTCW(tr1), tr2);
	RTLE;
}

/* {EV_FONT_IMP}.copy_font */
void F1886_21729 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc4);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,Current);
	RTLR(6,loc3);
	RTLIU(7);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	loc4 = tr1;
	loc4 = RTRV(eif_new_type(1885, 0x01),loc4);
	if (EIF_TEST(loc4)) {
		loc1 = *(EIF_REFERENCE *)(loc4 + _REFACS_2_);
		loc1 = F1885_21699(RTCW(loc1));
		loc2 = RTLNS(eif_new_type(1884, 0x01).id, 1884, _OBJSIZ_0_2_0_3_0_1_0_0_);
		F1885_21695(RTCW(loc2), loc1);
		F1886_21743(Current, loc2);
		F1296_15104(RTCW(loc1));
	} else {
	}
	loc3 = F1602_17865(RTCW(arg1));
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != loc3)) {
		F1707_19187(Current, loc3);
	}
	RTLE;
}

/* {EV_FONT_IMP}.string_width */
EIF_INTEGER_32 F1886_21736 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		Result = F1885_21703(RTCW(tr1), arg1);
	}
	RTLE;
	return Result;
}

/* {EV_FONT_IMP}.string_size */
EIF_REFERENCE F1886_21737 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	Result = F1885_21705(RTCW(tr1), arg1);
	ti4_1 = eif_integer_32_item(RTCW(Result),4);
	
	eif_put_integer_32_item(RTCW(Result),4,(EIF_INTEGER_32) (((EIF_INTEGER_32) 0L) - ti4_1));
	RTLE;
	return Result;
}

/* {EV_FONT_IMP}.set_by_wel_font */
void F1886_21743 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
	loc1 = RTOUCR(259,F1886_21744, (Current));
	F1407_17199(RTCW(loc1), arg1);
	tb1 = F1407_17206(RTCW(loc1));
	ti4_1 = F1886_21760(Current, tb1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_2_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = F1407_17205(RTCW(loc1));
	ti4_1 = F1886_21759(Current, ti4_1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_3_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = F1407_17214(RTCW(loc1));
	ti4_2 = F1407_17213(RTCW(loc1));
	ti4_1 = F1886_21758(Current, ti4_1, ti4_2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_4_) = (EIF_INTEGER_32) ti4_1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F969_4184(RTCW(tr1));
	tr1 = F1407_17216(RTCW(loc1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F969_4172(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_3_));
	RTLE;
}

/* {EV_FONT_IMP}.wel_log_font */
static EIF_REFERENCE F1886_21744_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(259)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1406, 0x01).id, 1406, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tr2 = F502_14137(Current);
	F1407_17197(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1886_21744 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(259,F1886_21744_body,(Current));
}

/* {EV_FONT_IMP}.default_wel_log_font */
static EIF_REFERENCE F1886_21745_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(258)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1406, 0x01).id, 1406, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tr2 = F502_14137(Current);
	F1407_17197(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	ti4_1 = F1407_17214(RTCW(Result));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_0_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = F1407_17213(RTCW(Result));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_1_) = (EIF_INTEGER_32) ti4_1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1886_21745 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(258,F1886_21745_body,(Current));
}

/* {EV_FONT_IMP}.destroy */
void F1886_21746 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	F519_14213(RTCW(tr1));
	F1696_18991(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_FONT_IMP}.update_preferred_faces */
void F1886_21747 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(259,F1886_21744, (Current));
	F1407_17199(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_2_));
	F1886_21748(Current);
	RTLE;
}

/* {EV_FONT_IMP}.update_font_face */
void F1886_21748 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc5);
	RTLR(4,loc6);
	RTLR(5,tr2);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLIU(8);
	
	RTGC;
	switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_4_)) {
		case 1L:
			tr1 = RTOUCR(259,F1886_21744, (Current));
			F1407_17275(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_0_));
			tr1 = RTOUCR(259,F1886_21744, (Current));
			F1407_17271(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_1_));
			break;
		case 2L:
			F1407_17277(RTCV(RTOUCR(259,F1886_21744, (Current))));
			F1407_17274(RTCV(RTOUCR(259,F1886_21744, (Current))));
			break;
		case 3L:
			F1407_17278(RTCV(RTOUCR(259,F1886_21744, (Current))));
			F1407_17274(RTCV(RTOUCR(259,F1886_21744, (Current))));
			break;
		case 4L:
			F1407_17280(RTCV(RTOUCR(259,F1886_21744, (Current))));
			F1407_17273(RTCV(RTOUCR(259,F1886_21744, (Current))));
			break;
		case 5L:
			F1407_17279(RTCV(RTOUCR(259,F1886_21744, (Current))));
			F1407_17273(RTCV(RTOUCR(259,F1886_21744, (Current))));
			break;
		default:
			break;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = F736_2537(RTCW(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F951_4104(RTCW(tr1));
		for (;;) {
			tb1 = '\01';
			if (!loc2) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tb2 = F882_3332(RTCW(tr1));
				tb1 = tb2;
			}
			if (tb1) break;
			loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			loc1 = F951_4078(RTCW(loc1));
			loc1 = F1_14(loc1);
			tr1 = F1287_15070(RTCV(RTOUCR(260,F1886_21762, (Current))));
			loc2 = F951_4085(RTCW(tr1), loc1);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			F951_4106(RTCW(tr1));
		}
		if ((EIF_BOOLEAN) (loc2 && (EIF_BOOLEAN)(loc1 != NULL))) {
			tr1 = RTOUCR(259,F1886_21744, (Current));
			F1407_17283(RTCW(tr1), loc1);
			tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(260,F1886_21762, (Current))));
			loc5 = tr1;
			if (EIF_TEST(loc5)) {
				tr1 = F999_3929(loc5, loc1);
				loc6 = tr1;
				if (EIF_TEST(loc6)) {
					tr1 = RTOUCR(259,F1886_21744, (Current));
					ti4_1 = F1404_17147(loc6);
					F1407_17252(RTCW(tr1), ti4_1);
				}
			}
		} else {
			tr1 = RTOUCR(259,F1886_21744, (Current));
			tr2 = RTMS_EX_H("",0,0);
			F1407_17283(RTCW(tr1), tr2);
		}
	} else {
		tr1 = RTOUCR(259,F1886_21744, (Current));
		tr2 = RTMS_EX_H("",0,0);
		F1407_17283(RTCW(tr1), tr2);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr2 = RTOUCR(259,F1886_21744, (Current));
	F1885_21698(RTCW(tr1), tr2);
	tr1 = RTOUCR(259,F1886_21744, (Current));
	F1407_17199(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_2_));
	if (loc2) {
		loc3 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
		F1307_15413(RTCW(loc3));
		F1306_15264(RTCW(loc3), *(EIF_REFERENCE *)(Current + _REFACS_2_));
		loc4 = RTLNS(eif_new_type(1403, 0x01).id, 1403, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1404_17126(RTCW(loc4), loc3);
		tr1 = RTOUCR(259,F1886_21744, (Current));
		ti4_1 = F1404_17147(RTCW(loc4));
		F1407_17252(RTCW(tr1), ti4_1);
		F1306_15272(RTCW(loc3));
		{
			/* INLINED CODE (WEL_MEMORY_DC.release) */
			/* END INLINED CODE */
		}
		;
		tr1 = RTLNSMART(eif_new_type(1884, 1).id);
		tr2 = RTOUCR(259,F1886_21744, (Current));
		F1885_21695(RTCW(tr1), tr2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
		tr1 = RTOUCR(259,F1886_21744, (Current));
		F1407_17199(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_2_));
	}
	tr1 = F1407_17216(RTCV(RTOUCR(259,F1886_21744, (Current))));
	tr1 = F1_14(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = RTOUCR(259,F1886_21744, (Current));
	F1886_21753(Current, tr1);
	RTLE;
}

/* {EV_FONT_IMP}.update_internal_is_proportional */
void F1886_21753 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = F1407_17213(RTCW(arg1));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		ti4_1 = F1407_17214(RTCW(arg1));
		*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) !(EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) FF_MODERN);
	} else {
		ti4_1 = F1407_17213(RTCW(arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			ti4_1 = F1407_17213(RTCW(arg1));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
				*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	}
	RTLE;
}

/* {EV_FONT_IMP}.convert_font_family */
EIF_INTEGER_32 F1886_21758 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_0_))) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) FF_ROMAN)) {
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) FF_SWISS)) {
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			} else {
				if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) FF_MODERN)) {
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
				} else {
					if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) FF_SCRIPT)) {
						RTLE;
						return (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
					} else {
						RTLE;
						return (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					}
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_FONT_IMP}.convert_font_weight */
EIF_INTEGER_32 F1886_21759 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	switch (arg1) {
		case 1L:
		case 2L:
		case 3L:
		case 4L:
		case 5L:
		case 6L:
		case 7L:
		case 8L:
		case 9L:
		case 10L:
		case 11L:
		case 12L:
		case 13L:
		case 14L:
		case 15L:
		case 16L:
		case 17L:
		case 18L:
		case 19L:
		case 20L:
		case 21L:
		case 22L:
		case 23L:
		case 24L:
		case 25L:
		case 26L:
		case 27L:
		case 28L:
		case 29L:
		case 30L:
		case 31L:
		case 32L:
		case 33L:
		case 34L:
		case 35L:
		case 36L:
		case 37L:
		case 38L:
		case 39L:
		case 40L:
		case 41L:
		case 42L:
		case 43L:
		case 44L:
		case 45L:
		case 46L:
		case 47L:
		case 48L:
		case 49L:
		case 50L:
		case 51L:
		case 52L:
		case 53L:
		case 54L:
		case 55L:
		case 56L:
		case 57L:
		case 58L:
		case 59L:
		case 60L:
		case 61L:
		case 62L:
		case 63L:
		case 64L:
		case 65L:
		case 66L:
		case 67L:
		case 68L:
		case 69L:
		case 70L:
		case 71L:
		case 72L:
		case 73L:
		case 74L:
		case 75L:
		case 76L:
		case 77L:
		case 78L:
		case 79L:
		case 80L:
		case 81L:
		case 82L:
		case 83L:
		case 84L:
		case 85L:
		case 86L:
		case 87L:
		case 88L:
		case 89L:
		case 90L:
		case 91L:
		case 92L:
		case 93L:
		case 94L:
		case 95L:
		case 96L:
		case 97L:
		case 98L:
		case 99L:
		case 100L:
		case 101L:
		case 102L:
		case 103L:
		case 104L:
		case 105L:
		case 106L:
		case 107L:
		case 108L:
		case 109L:
		case 110L:
		case 111L:
		case 112L:
		case 113L:
		case 114L:
		case 115L:
		case 116L:
		case 117L:
		case 118L:
		case 119L:
		case 120L:
		case 121L:
		case 122L:
		case 123L:
		case 124L:
		case 125L:
		case 126L:
		case 127L:
		case 128L:
		case 129L:
		case 130L:
		case 131L:
		case 132L:
		case 133L:
		case 134L:
		case 135L:
		case 136L:
		case 137L:
		case 138L:
		case 139L:
		case 140L:
		case 141L:
		case 142L:
		case 143L:
		case 144L:
		case 145L:
		case 146L:
		case 147L:
		case 148L:
		case 149L:
		case 150L:
		case 151L:
		case 152L:
		case 153L:
		case 154L:
		case 155L:
		case 156L:
		case 157L:
		case 158L:
		case 159L:
		case 160L:
		case 161L:
		case 162L:
		case 163L:
		case 164L:
		case 165L:
		case 166L:
		case 167L:
		case 168L:
		case 169L:
		case 170L:
		case 171L:
		case 172L:
		case 173L:
		case 174L:
		case 175L:
		case 176L:
		case 177L:
		case 178L:
		case 179L:
		case 180L:
		case 181L:
		case 182L:
		case 183L:
		case 184L:
		case 185L:
		case 186L:
		case 187L:
		case 188L:
		case 189L:
		case 190L:
		case 191L:
		case 192L:
		case 193L:
		case 194L:
		case 195L:
		case 196L:
		case 197L:
		case 198L:
		case 199L:
		case 200L:
		case 201L:
		case 202L:
		case 203L:
		case 204L:
		case 205L:
		case 206L:
		case 207L:
		case 208L:
		case 209L:
		case 210L:
		case 211L:
		case 212L:
		case 213L:
		case 214L:
		case 215L:
		case 216L:
		case 217L:
		case 218L:
		case 219L:
		case 220L:
		case 221L:
		case 222L:
		case 223L:
		case 224L:
		case 225L:
		case 226L:
		case 227L:
		case 228L:
		case 229L:
		case 230L:
		case 231L:
		case 232L:
		case 233L:
		case 234L:
		case 235L:
		case 236L:
		case 237L:
		case 238L:
		case 239L:
		case 240L:
		case 241L:
		case 242L:
		case 243L:
		case 244L:
		case 245L:
		case 246L:
		case 247L:
		case 248L:
		case 249L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
			break;
		case 250L:
		case 251L:
		case 252L:
		case 253L:
		case 254L:
		case 255L:
		case 256L:
		case 257L:
		case 258L:
		case 259L:
		case 260L:
		case 261L:
		case 262L:
		case 263L:
		case 264L:
		case 265L:
		case 266L:
		case 267L:
		case 268L:
		case 269L:
		case 270L:
		case 271L:
		case 272L:
		case 273L:
		case 274L:
		case 275L:
		case 276L:
		case 277L:
		case 278L:
		case 279L:
		case 280L:
		case 281L:
		case 282L:
		case 283L:
		case 284L:
		case 285L:
		case 286L:
		case 287L:
		case 288L:
		case 289L:
		case 290L:
		case 291L:
		case 292L:
		case 293L:
		case 294L:
		case 295L:
		case 296L:
		case 297L:
		case 298L:
		case 299L:
		case 300L:
		case 301L:
		case 302L:
		case 303L:
		case 304L:
		case 305L:
		case 306L:
		case 307L:
		case 308L:
		case 309L:
		case 310L:
		case 311L:
		case 312L:
		case 313L:
		case 314L:
		case 315L:
		case 316L:
		case 317L:
		case 318L:
		case 319L:
		case 320L:
		case 321L:
		case 322L:
		case 323L:
		case 324L:
		case 325L:
		case 326L:
		case 327L:
		case 328L:
		case 329L:
		case 330L:
		case 331L:
		case 332L:
		case 333L:
		case 334L:
		case 335L:
		case 336L:
		case 337L:
		case 338L:
		case 339L:
		case 340L:
		case 341L:
		case 342L:
		case 343L:
		case 344L:
		case 345L:
		case 346L:
		case 347L:
		case 348L:
		case 349L:
		case 350L:
		case 351L:
		case 352L:
		case 353L:
		case 354L:
		case 355L:
		case 356L:
		case 357L:
		case 358L:
		case 359L:
		case 360L:
		case 361L:
		case 362L:
		case 363L:
		case 364L:
		case 365L:
		case 366L:
		case 367L:
		case 368L:
		case 369L:
		case 370L:
		case 371L:
		case 372L:
		case 373L:
		case 374L:
		case 375L:
		case 376L:
		case 377L:
		case 378L:
		case 379L:
		case 380L:
		case 381L:
		case 382L:
		case 383L:
		case 384L:
		case 385L:
		case 386L:
		case 387L:
		case 388L:
		case 389L:
		case 390L:
		case 391L:
		case 392L:
		case 393L:
		case 394L:
		case 395L:
		case 396L:
		case 397L:
		case 398L:
		case 399L:
		case 400L:
		case 401L:
		case 402L:
		case 403L:
		case 404L:
		case 405L:
		case 406L:
		case 407L:
		case 408L:
		case 409L:
		case 410L:
		case 411L:
		case 412L:
		case 413L:
		case 414L:
		case 415L:
		case 416L:
		case 417L:
		case 418L:
		case 419L:
		case 420L:
		case 421L:
		case 422L:
		case 423L:
		case 424L:
		case 425L:
		case 426L:
		case 427L:
		case 428L:
		case 429L:
		case 430L:
		case 431L:
		case 432L:
		case 433L:
		case 434L:
		case 435L:
		case 436L:
		case 437L:
		case 438L:
		case 439L:
		case 440L:
		case 441L:
		case 442L:
		case 443L:
		case 444L:
		case 445L:
		case 446L:
		case 447L:
		case 448L:
		case 449L:
		case 450L:
		case 451L:
		case 452L:
		case 453L:
		case 454L:
		case 455L:
		case 456L:
		case 457L:
		case 458L:
		case 459L:
		case 460L:
		case 461L:
		case 462L:
		case 463L:
		case 464L:
		case 465L:
		case 466L:
		case 467L:
		case 468L:
		case 469L:
		case 470L:
		case 471L:
		case 472L:
		case 473L:
		case 474L:
		case 475L:
		case 476L:
		case 477L:
		case 478L:
		case 479L:
		case 480L:
		case 481L:
		case 482L:
		case 483L:
		case 484L:
		case 485L:
		case 486L:
		case 487L:
		case 488L:
		case 489L:
		case 490L:
		case 491L:
		case 492L:
		case 493L:
		case 494L:
		case 495L:
		case 496L:
		case 497L:
		case 498L:
		case 499L:
		case 500L:
		case 501L:
		case 502L:
		case 503L:
		case 504L:
		case 505L:
		case 506L:
		case 507L:
		case 508L:
		case 509L:
		case 510L:
		case 511L:
		case 512L:
		case 513L:
		case 514L:
		case 515L:
		case 516L:
		case 517L:
		case 518L:
		case 519L:
		case 520L:
		case 521L:
		case 522L:
		case 523L:
		case 524L:
		case 525L:
		case 526L:
		case 527L:
		case 528L:
		case 529L:
		case 530L:
		case 531L:
		case 532L:
		case 533L:
		case 534L:
		case 535L:
		case 536L:
		case 537L:
		case 538L:
		case 539L:
		case 540L:
		case 541L:
		case 542L:
		case 543L:
		case 544L:
		case 545L:
		case 546L:
		case 547L:
		case 548L:
		case 549L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
			break;
		case 550L:
		case 551L:
		case 552L:
		case 553L:
		case 554L:
		case 555L:
		case 556L:
		case 557L:
		case 558L:
		case 559L:
		case 560L:
		case 561L:
		case 562L:
		case 563L:
		case 564L:
		case 565L:
		case 566L:
		case 567L:
		case 568L:
		case 569L:
		case 570L:
		case 571L:
		case 572L:
		case 573L:
		case 574L:
		case 575L:
		case 576L:
		case 577L:
		case 578L:
		case 579L:
		case 580L:
		case 581L:
		case 582L:
		case 583L:
		case 584L:
		case 585L:
		case 586L:
		case 587L:
		case 588L:
		case 589L:
		case 590L:
		case 591L:
		case 592L:
		case 593L:
		case 594L:
		case 595L:
		case 596L:
		case 597L:
		case 598L:
		case 599L:
		case 600L:
		case 601L:
		case 602L:
		case 603L:
		case 604L:
		case 605L:
		case 606L:
		case 607L:
		case 608L:
		case 609L:
		case 610L:
		case 611L:
		case 612L:
		case 613L:
		case 614L:
		case 615L:
		case 616L:
		case 617L:
		case 618L:
		case 619L:
		case 620L:
		case 621L:
		case 622L:
		case 623L:
		case 624L:
		case 625L:
		case 626L:
		case 627L:
		case 628L:
		case 629L:
		case 630L:
		case 631L:
		case 632L:
		case 633L:
		case 634L:
		case 635L:
		case 636L:
		case 637L:
		case 638L:
		case 639L:
		case 640L:
		case 641L:
		case 642L:
		case 643L:
		case 644L:
		case 645L:
		case 646L:
		case 647L:
		case 648L:
		case 649L:
		case 650L:
		case 651L:
		case 652L:
		case 653L:
		case 654L:
		case 655L:
		case 656L:
		case 657L:
		case 658L:
		case 659L:
		case 660L:
		case 661L:
		case 662L:
		case 663L:
		case 664L:
		case 665L:
		case 666L:
		case 667L:
		case 668L:
		case 669L:
		case 670L:
		case 671L:
		case 672L:
		case 673L:
		case 674L:
		case 675L:
		case 676L:
		case 677L:
		case 678L:
		case 679L:
		case 680L:
		case 681L:
		case 682L:
		case 683L:
		case 684L:
		case 685L:
		case 686L:
		case 687L:
		case 688L:
		case 689L:
		case 690L:
		case 691L:
		case 692L:
		case 693L:
		case 694L:
		case 695L:
		case 696L:
		case 697L:
		case 698L:
		case 699L:
		case 700L:
		case 701L:
		case 702L:
		case 703L:
		case 704L:
		case 705L:
		case 706L:
		case 707L:
		case 708L:
		case 709L:
		case 710L:
		case 711L:
		case 712L:
		case 713L:
		case 714L:
		case 715L:
		case 716L:
		case 717L:
		case 718L:
		case 719L:
		case 720L:
		case 721L:
		case 722L:
		case 723L:
		case 724L:
		case 725L:
		case 726L:
		case 727L:
		case 728L:
		case 729L:
		case 730L:
		case 731L:
		case 732L:
		case 733L:
		case 734L:
		case 735L:
		case 736L:
		case 737L:
		case 738L:
		case 739L:
		case 740L:
		case 741L:
		case 742L:
		case 743L:
		case 744L:
		case 745L:
		case 746L:
		case 747L:
		case 748L:
		case 749L:
		case 750L:
		case 751L:
		case 752L:
		case 753L:
		case 754L:
		case 755L:
		case 756L:
		case 757L:
		case 758L:
		case 759L:
		case 760L:
		case 761L:
		case 762L:
		case 763L:
		case 764L:
		case 765L:
		case 766L:
		case 767L:
		case 768L:
		case 769L:
		case 770L:
		case 771L:
		case 772L:
		case 773L:
		case 774L:
		case 775L:
		case 776L:
		case 777L:
		case 778L:
		case 779L:
		case 780L:
		case 781L:
		case 782L:
		case 783L:
		case 784L:
		case 785L:
		case 786L:
		case 787L:
		case 788L:
		case 789L:
		case 790L:
		case 791L:
		case 792L:
		case 793L:
		case 794L:
		case 795L:
		case 796L:
		case 797L:
		case 798L:
		case 799L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
			break;
		case 800L:
		case 801L:
		case 802L:
		case 803L:
		case 804L:
		case 805L:
		case 806L:
		case 807L:
		case 808L:
		case 809L:
		case 810L:
		case 811L:
		case 812L:
		case 813L:
		case 814L:
		case 815L:
		case 816L:
		case 817L:
		case 818L:
		case 819L:
		case 820L:
		case 821L:
		case 822L:
		case 823L:
		case 824L:
		case 825L:
		case 826L:
		case 827L:
		case 828L:
		case 829L:
		case 830L:
		case 831L:
		case 832L:
		case 833L:
		case 834L:
		case 835L:
		case 836L:
		case 837L:
		case 838L:
		case 839L:
		case 840L:
		case 841L:
		case 842L:
		case 843L:
		case 844L:
		case 845L:
		case 846L:
		case 847L:
		case 848L:
		case 849L:
		case 850L:
		case 851L:
		case 852L:
		case 853L:
		case 854L:
		case 855L:
		case 856L:
		case 857L:
		case 858L:
		case 859L:
		case 860L:
		case 861L:
		case 862L:
		case 863L:
		case 864L:
		case 865L:
		case 866L:
		case 867L:
		case 868L:
		case 869L:
		case 870L:
		case 871L:
		case 872L:
		case 873L:
		case 874L:
		case 875L:
		case 876L:
		case 877L:
		case 878L:
		case 879L:
		case 880L:
		case 881L:
		case 882L:
		case 883L:
		case 884L:
		case 885L:
		case 886L:
		case 887L:
		case 888L:
		case 889L:
		case 890L:
		case 891L:
		case 892L:
		case 893L:
		case 894L:
		case 895L:
		case 896L:
		case 897L:
		case 898L:
		case 899L:
		case 900L:
		case 901L:
		case 902L:
		case 903L:
		case 904L:
		case 905L:
		case 906L:
		case 907L:
		case 908L:
		case 909L:
		case 910L:
		case 911L:
		case 912L:
		case 913L:
		case 914L:
		case 915L:
		case 916L:
		case 917L:
		case 918L:
		case 919L:
		case 920L:
		case 921L:
		case 922L:
		case 923L:
		case 924L:
		case 925L:
		case 926L:
		case 927L:
		case 928L:
		case 929L:
		case 930L:
		case 931L:
		case 932L:
		case 933L:
		case 934L:
		case 935L:
		case 936L:
		case 937L:
		case 938L:
		case 939L:
		case 940L:
		case 941L:
		case 942L:
		case 943L:
		case 944L:
		case 945L:
		case 946L:
		case 947L:
		case 948L:
		case 949L:
		case 950L:
		case 951L:
		case 952L:
		case 953L:
		case 954L:
		case 955L:
		case 956L:
		case 957L:
		case 958L:
		case 959L:
		case 960L:
		case 961L:
		case 962L:
		case 963L:
		case 964L:
		case 965L:
		case 966L:
		case 967L:
		case 968L:
		case 969L:
		case 970L:
		case 971L:
		case 972L:
		case 973L:
		case 974L:
		case 975L:
		case 976L:
		case 977L:
		case 978L:
		case 979L:
		case 980L:
		case 981L:
		case 982L:
		case 983L:
		case 984L:
		case 985L:
		case 986L:
		case 987L:
		case 988L:
		case 989L:
		case 990L:
		case 991L:
		case 992L:
		case 993L:
		case 994L:
		case 995L:
		case 996L:
		case 997L:
		case 998L:
		case 999L:
		case 1000L:
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
			break;
		default:
			break;
	}
	return Result;
}

/* {EV_FONT_IMP}.convert_font_shape */
EIF_INTEGER_32 F1886_21760 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	RTGC;
	if (arg1) {
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
	} else {
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	}/* NOTREACHED */
	
}

/* {EV_FONT_IMP}.font_enumerator */
static EIF_REFERENCE F1886_21762_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(260)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1286, 0x01).id, 1286, _OBJSIZ_3_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1886_21762 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(260,F1886_21762_body,(Current));
}

void EIF_Minit1869 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
