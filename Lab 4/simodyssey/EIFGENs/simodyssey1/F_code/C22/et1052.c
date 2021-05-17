/*
 * Code for class reference ETF_SIMODYSSEY_ACCESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1052.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_SIMODYSSEY_ACCESS}.m */
static EIF_REFERENCE F99_10069_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(168)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(100, 0x01).id, 100, _OBJSIZ_6_3_0_0_0_0_0_0_);
	F101_10070(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F99_10069 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(168,F99_10069_body,(Current));
}

void EIF_Minit1052 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
