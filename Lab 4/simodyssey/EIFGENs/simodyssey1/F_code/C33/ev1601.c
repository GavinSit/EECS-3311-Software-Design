/*
 * Code for class EV_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1601.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ENVIRONMENT}.application */
EIF_REFERENCE F1606_17957 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1713_19260(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_ENVIRONMENT}.create_interface_objects */
void F1606_17968 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_ENVIRONMENT}.create_implementation */
void F1606_17969 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(211,F1596_17754, (Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1696_18990(RTCW(tr1), (EIF_BOOLEAN) 0);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1696_18985(RTCW(tr1), ((EIF_INTEGER_8) 5L), (EIF_BOOLEAN) 0);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1696_18985(RTCW(tr1), ((EIF_INTEGER_8) 4L), (EIF_BOOLEAN) 0);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1696_18985(RTCW(tr1), ((EIF_INTEGER_8) 0L), (EIF_BOOLEAN) 0);
	RTLE;
}

void EIF_Minit1601 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
