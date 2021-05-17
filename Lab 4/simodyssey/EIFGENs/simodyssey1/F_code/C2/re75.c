/*
 * Code for class RESUMPTION_FAILURE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re75.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RESUMPTION_FAILURE}.code */
EIF_INTEGER_32 F434_1479 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
}

/* {RESUMPTION_FAILURE}.tag */
static EIF_REFERENCE F434_1480_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(122)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1567, 0x01).id, 1567, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("Resumption attempt failed.",26,952477998);
	F1568_7010(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F434_1480 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(122,F434_1480_body,(Current));
}

void EIF_Minit75 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
