/*
 * Code for class WEL_RESIZING_SUPPORT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1215.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_RESIZING_SUPPORT}.silly_window */
EIF_REFERENCE F304_12407 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(RTCV(RTOUCR(420,F304_12409, (Current))));
	RTLE;
	return Result;
}

/* {WEL_RESIZING_SUPPORT}.silly_window_cell */
static EIF_REFERENCE F304_12409_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(420)

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,488,0xFF01,1917,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 488, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	tr2 = RTLNS(eif_new_type(1917, 0x01).id, 1917, _OBJSIZ_7_2_0_2_0_2_0_0_);
	tr3 = RTMS_EX_H("WEL Silly Window",16,787402615);
	F1917_22823(RTCW(tr2), tr3);
	F489_1934(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F304_12409 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(420,F304_12409_body,(Current));
}

void EIF_Minit1215 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
