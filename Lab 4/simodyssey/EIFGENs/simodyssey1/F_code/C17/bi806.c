/*
 * Code for class BILINEAR [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi806.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BILINEAR}.off */
EIF_BOOLEAN F632_2710 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\01';
	if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2359[dtype-911])(Current)) {
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[dtype-911])(Current);
	}
	RTLE;
	return Result;
}

/* {BILINEAR}.search */
void F632_2713 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tb1 = '\0';
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2359[dtype-911])(Current)) {
		tb1 = (EIF_BOOLEAN) !F749_2537(Current);
	}
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[dtype-911])(Current);
	}
	F618_2604(Current, arg1);
	RTLE;
}

void EIF_Minit806 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
