/*
 * Code for class OPERATING_SYSTEM_FAILURE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "op72.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {OPERATING_SYSTEM_FAILURE}.code */
EIF_INTEGER_32 F431_1471 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
}

/* {OPERATING_SYSTEM_FAILURE}.tag */
static EIF_REFERENCE F431_1473_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(121)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1567, 0x01).id, 1567, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("Operating system error.",23,407134510);
	F1568_7010(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F431_1473 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(121,F431_1473_body,(Current));
}

/* {OPERATING_SYSTEM_FAILURE}.set_error_code */
void F431_1474 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_1_) = (EIF_INTEGER_32) arg1;
}

void EIF_Minit72 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
