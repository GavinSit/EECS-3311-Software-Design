/*
 * Code for class EV_TAB_CONTROLABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1604.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TAB_CONTROLABLE}.is_tabable_to */
EIF_BOOLEAN F1609_18021 (EIF_REFERENCE Current)
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
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15920[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
	return Result;
}

/* {EV_TAB_CONTROLABLE}.is_tabable_from */
EIF_BOOLEAN F1609_18022 (EIF_REFERENCE Current)
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
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15921[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
	return Result;
}

void EIF_Minit1604 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
