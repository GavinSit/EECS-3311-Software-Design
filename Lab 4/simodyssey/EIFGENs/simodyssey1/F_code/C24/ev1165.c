/*
 * Code for class EV_WINDOW_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1165.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WINDOW_ACTION_SEQUENCES_I}.close_request_actions */
EIF_REFERENCE F246_11656 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O9432[dtype-245]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		Result = RTLNS(eif_new_type(996, 0x01).id, 996, _OBJSIZ_9_2_0_2_0_0_0_0_);
		F976_4196(RTCW(Result));
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + O9432[dtype-245]) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {EV_WINDOW_ACTION_SEQUENCES_I}.move_actions */
EIF_REFERENCE F246_11658 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O9434[dtype-245]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		Result = RTLNS(eif_new_type(992, 0x01).id, 992, _OBJSIZ_9_2_0_2_0_0_0_0_);
		F976_4196(RTCW(Result));
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + O9434[dtype-245]) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {EV_WINDOW_ACTION_SEQUENCES_I}.show_actions */
EIF_REFERENCE F246_11660 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O9436[dtype-245]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		Result = RTLNS(eif_new_type(996, 0x01).id, 996, _OBJSIZ_9_2_0_2_0_0_0_0_);
		F976_4196(RTCW(Result));
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + O9436[dtype-245]) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

void EIF_Minit1165 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
