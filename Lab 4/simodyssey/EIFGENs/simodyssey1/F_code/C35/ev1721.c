/*
 * Code for class EV_SENSITIVE_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1721.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SENSITIVE_I}.user_is_sensitive */
EIF_BOOLEAN F1732_19638 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tb1 = '\01';
	if (!(EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16436[dtype-1871])(Current)) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16435[dtype-1871])(Current);
	}
	if (tb1) {
		RTLE;
		return (EIF_BOOLEAN) (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16437[dtype-1871])(Current);
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {EV_SENSITIVE_I}.internal_non_sensitive */
EIF_BOOLEAN F1732_19639 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O16430[Dtype(Current)-1731]);
}


void EIF_Minit1721 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
