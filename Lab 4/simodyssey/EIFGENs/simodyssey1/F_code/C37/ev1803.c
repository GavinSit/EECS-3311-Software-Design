/*
 * Code for class EV_KEY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1803.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_KEY}.default_create */
void F1814_20378 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	{
		/* INLINED CODE (ANY.default_create) */
		/* END INLINED CODE */
	}
	;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 41L);
	RTLE;
}

/* {EV_KEY}.make_with_code */
void F1814_20379 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1814_20378(Current);
	F1814_20381(Current, arg1);
	RTLE;
}

/* {EV_KEY}.set_code */
void F1814_20381 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) arg1;
}

/* {EV_KEY}.text */
EIF_REFERENCE F1814_20388 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = RTOUCR(225,F335_13028, (Current));
	Result = F919_3192(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_));
	Result = (EIF_REFERENCE) Result;
	RTLE;
	return Result;
}

/* {EV_KEY}.out */
EIF_REFERENCE F1814_20389 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = RTOUCR(225,F335_13028, (Current));
	tr1 = F919_3192(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_));
	Result = F1558_6564(RTCW(tr1));
	RTLE;
	return Result;
}

void EIF_Minit1803 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
