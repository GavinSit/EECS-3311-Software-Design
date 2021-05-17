/*
 * Code for class OPERATING_SYSTEM_SIGNAL_FAILURE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "op73.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {OPERATING_SYSTEM_SIGNAL_FAILURE}.code */
EIF_INTEGER_32 F432_1475 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
}

/* {OPERATING_SYSTEM_SIGNAL_FAILURE}.tag */
static EIF_REFERENCE F432_1477_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(29)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1567, 0x01).id, 1567, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("Operating system signal.",24,1715740462);
	F1568_7010(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F432_1477 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(29,F432_1477_body,(Current));
}

/* {OPERATING_SYSTEM_SIGNAL_FAILURE}.set_signal_code */
void F432_1478 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_1_) = (EIF_INTEGER_32) arg1;
}

void EIF_Minit73 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
