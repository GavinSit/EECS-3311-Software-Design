/*
 * Code for class EV_COLORIZABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1606.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_COLORIZABLE}.set_foreground_color */
void F1611_18035 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16219[Dtype(RTCW(tr1))-1871])(tr1, arg1);
	RTLE;
}

/* {EV_COLORIZABLE}.set_background_color */
void F1611_18036 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16220[Dtype(RTCW(tr1))-1871])(tr1, arg1);
	RTLE;
}

void EIF_Minit1606 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
