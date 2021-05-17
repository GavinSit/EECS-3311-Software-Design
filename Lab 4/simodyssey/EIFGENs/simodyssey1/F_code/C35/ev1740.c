/*
 * Code for class EV_PICK_AND_DROPABLE_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1740.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PICK_AND_DROPABLE_I}.pebble_positioning_enabled */
EIF_BOOLEAN F1751_19732 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) *(EIF_BOOLEAN *)(Current + O16532[Dtype(Current)-1750]);
}

/* {EV_PICK_AND_DROPABLE_I}.reset_pebble_function */
void F1751_19743 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O16501[dtype-1750]) != NULL)) {
		*(EIF_REFERENCE *)(Current + O16500[dtype-1750]) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_I}.mode_is_pick_and_drop */
EIF_BOOLEAN F1751_19756 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_8 *)(Current + O16533[dtype-1750]) == ((EIF_INTEGER_8) 0L)) || (EIF_BOOLEAN)(*(EIF_INTEGER_8 *)(Current + O16533[dtype-1750]) == ((EIF_INTEGER_8) 3L)));
}

/* {EV_PICK_AND_DROPABLE_I}.mode_is_drag_and_drop */
EIF_BOOLEAN F1751_19757 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_8 *)(Current + O16533[Dtype(Current)-1750]) == ((EIF_INTEGER_8) 1L));
}

/* {EV_PICK_AND_DROPABLE_I}.mode_is_target_menu */
EIF_BOOLEAN F1751_19758 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_8 *)(Current + O16533[Dtype(Current)-1750]) == ((EIF_INTEGER_8) 2L));
}

/* {EV_PICK_AND_DROPABLE_I}.mode_is_configurable_target_menu */
EIF_BOOLEAN F1751_19759 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_8 *)(Current + O16533[Dtype(Current)-1750]) == ((EIF_INTEGER_8) 3L));
}

/* {EV_PICK_AND_DROPABLE_I}.execute */
void F1751_19770 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REAL_64 arg3, EIF_REAL_64 arg4, EIF_REAL_64 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_16 ti2_1;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16545[dtype-1871])(Current);
	ti2_1 = (EIF_INTEGER_16) arg6;
	*(EIF_INTEGER_16 *)(Current + O10574[dtype-320]) = (EIF_INTEGER_16) ti2_1;
	ti2_1 = (EIF_INTEGER_16) arg7;
	*(EIF_INTEGER_16 *)(Current + O10575[dtype-320]) = (EIF_INTEGER_16) ti2_1;
	tr1 = F1751_19782(Current);
	F1714_19348(RTCW(tr1), arg6, arg7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16544[dtype-1871])(Current);
	loc1 = F1751_19772(Current);
	loc2 = loc1;
	loc2 = RTRV(eif_new_type(1627, 0x00), loc2);
	loc3 = RTOUCR(229,F1751_19783, (Current));
	loc3 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_1_);
	loc3 = F1713_19262(RTCW(loc3));
	loc3 = RTRV(eif_new_type(1909, 0x00), loc3);
	RTCT0("application /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_6_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = F251_11696(RTCW(loc3));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,3,1475,1508,1508,1627,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0.id, 4, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg2;
		((EIF_TYPED_VALUE *)tr2+3)->it_r = loc2;
		RTAR(tr2,loc2);
		F977_14409(RTCW(tr1), tr2);
	}
	F1751_19771(Current, loc1);
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_I}.update_pointer_style */
void F1751_19771 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLIU(7);
	
	RTGC;
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + O16500[dtype-1750]);
	loc1 = RTCCL(tr1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 != NULL) && EIF_TEST(loc1))) {
		tr1 = F1587_17684(RTCW(arg1));
		tr2 = RTCCL(loc1);
		tb2 = F978_14412(RTCW(tr1), tr2);
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + O16504[dtype-1750]);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16549[dtype-1871])(Current, loc2);
		} else {
			tr1 = RTOUCR(230,F321_12792, (Current));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16549[dtype-1871])(Current, tr1);
		}
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O16505[dtype-1750]);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16549[dtype-1871])(Current, loc3);
		} else {
			tr1 = RTOUCR(231,F321_12793, (Current));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16549[dtype-1871])(Current, tr1);
		}
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_I}.pointed_target */
EIF_REFERENCE F1751_19772 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16543[dtype-1871])(Current);
	Result = (EIF_REFERENCE) loc1;
	loc2 = loc1;
	loc2 = RTRV(eif_new_type(1631, 0x00), loc2);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		loc3 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_3_);
		loc3 = *(EIF_REFERENCE *)(RTCW(loc3) + O16559[Dtype(loc3)-1751]);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			ti2_1 = *(EIF_INTEGER_16 *)(Current + O10574[dtype-320]);
			loc4 = (EIF_INTEGER_32) ti2_1;
			ti4_1 = F1614_18066(RTCW(loc2));
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - ti4_1);
			ti2_1 = *(EIF_INTEGER_16 *)(Current + O10575[dtype-320]);
			loc5 = (EIF_INTEGER_32) ti2_1;
			ti4_1 = F1614_18067(RTCW(loc2));
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - ti4_1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr1 = RTLNTS(typres0.id, 3, 1);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_i4 = loc4;
			((EIF_TYPED_VALUE *)tr1+2)->it_i4 = loc5;
			Result = F1554_6501(RTCW(loc3), tr1);
		}
	}
	RTLE;
	return Result;
}

/* {EV_PICK_AND_DROPABLE_I}.call_pebble_function */
void F1751_19776 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O16501[dtype-1750]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg1;
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg2;
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4636[Dtype(loc1)-1553])(loc1, tr1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O16500[dtype-1750]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_I}.modify_widget_appearance */
void F1751_19777 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	loc2 = F1910_22403(RTCV(F1751_19782(Current)));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[Dtype(RTCW(loc2))-911])(loc2);
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2291[Dtype(RTCW(loc2))-911])(loc2);
		if (tb1) break;
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2290[Dtype(RTCW(loc2))-911])(loc2);
		loc1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
		loc1 = RTRV(eif_new_type(1981, 0x00), loc1);
		RTCT0("window_implementation_not_void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1763_19941(RTCW(loc1), arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[Dtype(RTCW(loc2))-911])(loc2);
	}
	RTLE;
}

/* {EV_PICK_AND_DROPABLE_I}.application_implementation */
EIF_REFERENCE F1751_19782 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTOUCR(229,F1751_19783, (Current));
	Result = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_1_);
	Result = F1713_19262(RTCW(Result));
	RTLE;
	return Result;
}

/* {EV_PICK_AND_DROPABLE_I}.environment */
static EIF_REFERENCE F1751_19783_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(229)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1605, 0x01).id, 1605, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F1596_17742(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1751_19783 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(229,F1751_19783_body,(Current));
}

void EIF_Minit1740 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
