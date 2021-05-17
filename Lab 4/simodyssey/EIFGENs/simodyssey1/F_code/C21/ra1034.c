/*
 * Code for class RANDOM_GENERATOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ra1034.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RANDOM_GENERATOR}.make_debug */
void F76_9900 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1027, 1).id);
	F1028_4236(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current);
	F1028_4237(RTCW(tr1), ((EIF_INTEGER_32) 900L));
	RTLE;
}

/* {RANDOM_GENERATOR}.num */
EIF_INTEGER_32 F76_9901 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = F735_2757(RTCW(tr1));
	RTLE;
	return Result;
}

/* {RANDOM_GENERATOR}.forth */
void F76_9902 (EIF_REFERENCE Current)
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
	F735_2764(RTCW(tr1));
	RTLE;
}

void EIF_Minit1034 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
