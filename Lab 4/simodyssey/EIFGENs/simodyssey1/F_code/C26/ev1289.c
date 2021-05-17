/*
 * Code for class EV_ID_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1289.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ID_IMP}.make_id */
void F405_13268 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(363,F405_13270, (Current));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O1718[Dtype(tr1)-488]);
	*(EIF_INTEGER_32 *)(Current + O10968[dtype-404]) = (EIF_INTEGER_32) ti4_1;
	tr1 = RTOUCR(363,F405_13270, (Current));
	F490_1934(RTCW(tr1), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O10968[dtype-404]) + ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {EV_ID_IMP}.counter */
static EIF_REFERENCE F405_13270_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(363)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,489,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 489, _OBJSIZ_0_0_0_1_0_0_0_0_);
	}
	F490_1934(RTCW(tr1), ((EIF_INTEGER_32) 1L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F405_13270 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(363,F405_13270_body,(Current));
}

void EIF_Minit1289 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
