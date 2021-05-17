/*
 * Code for class SHARED_INFORMATION_ACCESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sh1041.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SHARED_INFORMATION_ACCESS}.shared_info */
static EIF_REFERENCE F90_9990_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(170)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(92, 0x01).id, 92, _OBJSIZ_0_0_0_4_0_0_0_0_);
	F93_10048(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F90_9990 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(170,F90_9990_body,(Current));
}

void EIF_Minit1041 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
