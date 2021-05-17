/*
 * Code for class ETF_GUI
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1050.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_GUI}.make_and_launch */
void F98_10065 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1606, 0x01).id, 1606, _OBJSIZ_4_1_0_0_0_0_0_0_);
	F1596_17742(RTCW(loc1));
	F98_10066(Current);
	F98_10067(Current);
	F1607_17981(RTCW(loc1));
	RTLE;
}

/* {ETF_GUI}.user_create_interface_objects */
void F98_10066 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1646, 1).id);
	F1596_17742(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {ETF_GUI}.user_initialization */
void F98_10067 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	F1643_18479(RTCW(tr1));
	RTLE;
}

void EIF_Minit1050 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
