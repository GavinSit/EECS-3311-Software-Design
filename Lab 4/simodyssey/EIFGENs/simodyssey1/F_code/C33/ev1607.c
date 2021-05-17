/*
 * Code for class EV_DOCKABLE_SOURCE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1607.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DOCKABLE_SOURCE}.is_dockable */
EIF_BOOLEAN F1612_18041 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	Result = *(EIF_BOOLEAN *)(RTCW(tr1) + O16349[Dtype(tr1)-1725]);
	RTLE;
	return Result;
}

/* {EV_DOCKABLE_SOURCE}.real_source */
EIF_REFERENCE F1612_18042 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	Result = *(EIF_REFERENCE *)(RTCW(tr1) + O16348[Dtype(tr1)-1725]);
	RTLE;
	return Result;
}

void EIF_Minit1607 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
