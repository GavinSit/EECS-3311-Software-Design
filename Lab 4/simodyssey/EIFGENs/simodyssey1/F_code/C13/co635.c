/*
 * Code for class COLLECTION [REAL_64]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co635.h"

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
void F644_2474 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2216[Dtype(RTCW(arg1))-715])(arg1);
	F958_4104(RTCW(loc1));
	for (;;) {
		tb1 = '\01';
		if (!(EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2218[dtype-818])(Current)) {
			tb2 = F859_3270(RTCW(loc1));
			tb1 = tb2;
		}
		if (tb1) break;
		tr8_1 = F958_4078(RTCW(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[dtype-818])(Current, (EIF_REFERENCE) &tr8_1);
		F958_4106(RTCW(loc1));
	}
	RTLE;
}

void EIF_Minit635 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
