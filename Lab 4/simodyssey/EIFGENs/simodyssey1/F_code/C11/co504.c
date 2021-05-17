/*
 * Code for class COLLECTION [CHARACTER_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co504.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {COLLECTION}.fill */
void F642_2474 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2216[Dtype(RTCW(arg1))-715])(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[Dtype(RTCW(loc1))-911])(loc1);
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2218[dtype-818])(Current)) {
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2291[Dtype(RTCW(loc1))-911])(loc1);
			tb1 = tb2;
		}
		if (tb1) break;
		tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2290[Dtype(RTCW(loc1))-911])(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[dtype-818])(Current, (EIF_REFERENCE) &tc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[Dtype(RTCW(loc1))-911])(loc1);
	}
	RTLE;
}

void EIF_Minit504 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
