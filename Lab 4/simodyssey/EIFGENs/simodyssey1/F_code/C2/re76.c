/*
 * Code for class RESCUE_FAILURE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re76.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RESCUE_FAILURE}.code */
EIF_INTEGER_32 F435_1481 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
}

/* {RESCUE_FAILURE}.tag */
static EIF_REFERENCE F435_1482_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(115)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1567, 0x01).id, 1567, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("Exception in rescue clause.",27,1724914478);
	F1568_7010(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F435_1482 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(115,F435_1482_body,(Current));
}

void EIF_Minit76 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
