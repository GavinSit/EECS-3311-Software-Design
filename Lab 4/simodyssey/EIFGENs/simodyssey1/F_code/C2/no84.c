/*
 * Code for class NO_MORE_MEMORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "no84.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NO_MORE_MEMORY}.code */
EIF_INTEGER_32 F443_1493 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_1_) == ((EIF_INTEGER_32) 15L))) {
		RTLE;
		return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_1_);
	} else {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	}/* NOTREACHED */
	
}

/* {NO_MORE_MEMORY}.tag */
static EIF_REFERENCE F443_1494_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(19)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1567, 0x01).id, 1567, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("No more memory.",15,1839906350);
	F1568_7010(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F443_1494 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(19,F443_1494_body,(Current));
}

/* {NO_MORE_MEMORY}.set_code */
void F443_1495 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F443_1493(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_1_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

void EIF_Minit84 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
