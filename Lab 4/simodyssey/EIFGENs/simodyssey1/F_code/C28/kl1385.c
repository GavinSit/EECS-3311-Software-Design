/*
 * Code for class KL_STDOUT_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl1385.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_STDOUT_FILE}.eol */

EIF_REFERENCE F1165_14583 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (317,RTMS_EX_H("\012",1,10));
}

/* {KL_STDOUT_FILE}.put_character */
void F1165_14585 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(318,F1165_14588, (Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R3564[Dtype(RTCW(tr1))-1291])(tr1, arg1);
	RTLE;
}

/* {KL_STDOUT_FILE}.put_string */
void F1165_14586 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = RTOUCR(318,F1165_14588, (Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3562[Dtype(RTCW(tr1))-1291])(tr1, loc1);
	RTLE;
}

/* {KL_STDOUT_FILE}.console */
static EIF_REFERENCE F1165_14588_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(318)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	Result = RTOUCR(127,F125_117, (RTCV(RTOUCR(0,F1_24, (Current)))));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1165_14588 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(318,F1165_14588_body,(Current));
}

void EIF_Minit1385 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
