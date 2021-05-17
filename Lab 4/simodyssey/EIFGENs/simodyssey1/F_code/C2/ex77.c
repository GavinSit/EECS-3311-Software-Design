/*
 * Code for class EXCEPTION_IN_SIGNAL_HANDLER_FAILURE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex77.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXCEPTION_IN_SIGNAL_HANDLER_FAILURE}.code */
EIF_INTEGER_32 F436_1483 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
}

/* {EXCEPTION_IN_SIGNAL_HANDLER_FAILURE}.tag */
static EIF_REFERENCE F436_1484_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(27)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1567, 0x01).id, 1567, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("Exception in signal handler.",28,160980270);
	F1568_7010(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F436_1484 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(27,F436_1484_body,(Current));
}

void EIF_Minit77 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
