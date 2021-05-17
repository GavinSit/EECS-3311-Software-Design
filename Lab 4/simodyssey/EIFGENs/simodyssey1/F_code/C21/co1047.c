/*
 * Code for class reference CONTROLLER_ACCESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co1047.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CONTROLLER_ACCESS}.controller */
static EIF_REFERENCE F94_10063_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(171)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(90, 0x01).id, 90, _OBJSIZ_9_1_0_0_0_0_0_0_ + OVERHEAD +_OBJSIZ_0_0_0_0_0_0_0_0_);
	F91_9991(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F94_10063 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(171,F94_10063_body,(Current));
}

void EIF_Minit1047 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
