/*
 * Code for class KL_STDERR_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl1384.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_STDERR_FILE}.make */
void F1164_14573 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {KL_STDERR_FILE}.eol */

EIF_REFERENCE F1164_14575 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (319,RTMS_EX_H("\012",1,10));
}

/* {KL_STDERR_FILE}.put_character */
void F1164_14577 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(320,F1164_14580, (Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R3564[Dtype(RTCW(tr1))-1291])(tr1, arg1);
	RTLE;
}

/* {KL_STDERR_FILE}.put_string */
void F1164_14578 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	tr1 = RTOUCR(244,F1156_14541, (Current));
	loc1 = F1266_14945(RTCW(tr1), arg1);
	tr1 = RTOUCR(320,F1164_14580, (Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3562[Dtype(RTCW(tr1))-1291])(tr1, loc1);
	RTLE;
}

/* {KL_STDERR_FILE}.console */
static EIF_REFERENCE F1164_14580_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(320)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	Result = RTOUCR(128,F125_118, (RTCV(RTOUCR(0,F1_24, (Current)))));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1164_14580 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(320,F1164_14580_body,(Current));
}

void EIF_Minit1384 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
