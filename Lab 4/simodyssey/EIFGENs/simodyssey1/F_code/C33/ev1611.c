/*
 * Code for class EV_DOCKABLE_TARGET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1611.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DOCKABLE_TARGET}.veto_dock_function */
EIF_REFERENCE F1616_18081 (EIF_REFERENCE Current)
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
	Result = *(EIF_REFERENCE *)(RTCW(tr1) + O16453[Dtype(tr1)-1735]);
	RTLE;
	return Result;
}

/* {EV_DOCKABLE_TARGET}.is_docking_enabled */
EIF_BOOLEAN F1616_18082 (EIF_REFERENCE Current)
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
	Result = *(EIF_BOOLEAN *)(RTCW(tr1) + O16454[Dtype(tr1)-1735]);
	RTLE;
	return Result;
}

void EIF_Minit1611 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
