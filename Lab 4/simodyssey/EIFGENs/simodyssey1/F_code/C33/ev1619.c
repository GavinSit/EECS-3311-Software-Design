/*
 * Code for class EV_FONTABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1619.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_FONTABLE}.set_font */
void F1624_18129 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16491[Dtype(RTCW(tr1))-1871])(tr1, arg1);
	RTLE;
}

void EIF_Minit1619 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
