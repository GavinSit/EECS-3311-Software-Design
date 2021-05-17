/*
 * Code for class EV_WIDGET_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1297.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WIDGET_ACTION_SEQUENCES_I}.file_drop_actions */
EIF_REFERENCE F413_13359 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11046[dtype-412]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,976,0xFF01,0xFFF9,1,1475,0xFF01,881,0xFF01,1564,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			Result = RTLNS(typres0.id, 976, _OBJSIZ_9_2_0_2_0_0_0_0_);
		}
		F976_4196(RTCW(Result));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11047[dtype-1871])(Current, Result);
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + O11046[dtype-412]) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_ACTION_SEQUENCES_I}.pointer_motion_actions */
EIF_REFERENCE F413_13362 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11049[dtype-412]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		Result = RTLNS(eif_new_type(994, 0x01).id, 994, _OBJSIZ_9_2_0_2_0_0_0_0_);
		F976_4196(RTCW(Result));
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + O11049[dtype-412]) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_ACTION_SEQUENCES_I}.pointer_button_press_actions */
EIF_REFERENCE F413_13364 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11051[dtype-412]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		Result = RTLNS(eif_new_type(997, 0x01).id, 997, _OBJSIZ_9_2_0_2_0_0_0_0_);
		F976_4196(RTCW(Result));
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + O11051[dtype-412]) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_ACTION_SEQUENCES_I}.pointer_button_press_actions_internal */
static EIF_REFERENCE F413_13365_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F413_13365 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O11051[Dtype(Current)-412]);
	if (!r) {
		if (RTAT(eif_new_type(997, 0))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r = (F413_13365_body (Current));
			*(EIF_REFERENCE *)(Current + O11051[Dtype(Current)-412]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WIDGET_ACTION_SEQUENCES_I}.pointer_double_press_actions_internal */
static EIF_REFERENCE F413_13367_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F413_13367 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O11053[Dtype(Current)-412]);
	if (!r) {
		if (RTAT(eif_new_type(997, 0))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r = (F413_13367_body (Current));
			*(EIF_REFERENCE *)(Current + O11053[Dtype(Current)-412]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WIDGET_ACTION_SEQUENCES_I}.pointer_button_release_actions_internal */
static EIF_REFERENCE F413_13369_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F413_13369 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O11055[Dtype(Current)-412]);
	if (!r) {
		if (RTAT(eif_new_type(997, 0))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r = (F413_13369_body (Current));
			*(EIF_REFERENCE *)(Current + O11055[Dtype(Current)-412]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WIDGET_ACTION_SEQUENCES_I}.mouse_wheel_actions */
EIF_REFERENCE F413_13372 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11059[dtype-412]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		Result = RTLNS(eif_new_type(989, 0x01).id, 989, _OBJSIZ_9_2_0_2_0_0_0_0_);
		F976_4196(RTCW(Result));
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + O11059[dtype-412]) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_ACTION_SEQUENCES_I}.key_press_actions */
EIF_REFERENCE F413_13376 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11063[dtype-412]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		Result = RTLNS(eif_new_type(988, 0x01).id, 988, _OBJSIZ_9_2_0_2_0_0_0_0_);
		F976_4196(RTCW(Result));
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + O11063[dtype-412]) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_ACTION_SEQUENCES_I}.key_press_string_actions */
EIF_REFERENCE F413_13378 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11065[dtype-412]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		Result = RTLNS(eif_new_type(990, 0x01).id, 990, _OBJSIZ_9_2_0_2_0_0_0_0_);
		F976_4196(RTCW(Result));
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + O11065[dtype-412]) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_ACTION_SEQUENCES_I}.key_release_actions */
EIF_REFERENCE F413_13380 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11067[dtype-412]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		Result = RTLNS(eif_new_type(988, 0x01).id, 988, _OBJSIZ_9_2_0_2_0_0_0_0_);
		F976_4196(RTCW(Result));
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + O11067[dtype-412]) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_ACTION_SEQUENCES_I}.focus_in_actions */
EIF_REFERENCE F413_13382 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11069[dtype-412]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		Result = RTLNS(eif_new_type(996, 0x01).id, 996, _OBJSIZ_9_2_0_2_0_0_0_0_);
		F976_4196(RTCW(Result));
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + O11069[dtype-412]) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_ACTION_SEQUENCES_I}.focus_out_actions */
EIF_REFERENCE F413_13384 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O11071[dtype-412]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		Result = RTLNS(eif_new_type(996, 0x01).id, 996, _OBJSIZ_9_2_0_2_0_0_0_0_);
		F976_4196(RTCW(Result));
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + O11071[dtype-412]) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

void EIF_Minit1297 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
