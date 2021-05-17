/*
 * Code for class EIFFEL_RUNTIME_PANIC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ei79.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EIFFEL_RUNTIME_PANIC}.code */
EIF_INTEGER_32 F438_1485 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_1_) == ((EIF_INTEGER_32) 25L))) {
		RTLE;
		return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_1_);
	} else {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
	}/* NOTREACHED */
	
}

/* {EIFFEL_RUNTIME_PANIC}.tag */
static EIF_REFERENCE F438_1486_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(132)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1567, 0x01).id, 1567, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("Eiffel run-time panic.",22,15510062);
	F1568_7010(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F438_1486 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(132,F438_1486_body,(Current));
}

/* {EIFFEL_RUNTIME_PANIC}.set_code */
void F438_1487 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F438_1485(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_1_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

void EIF_Minit79 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
