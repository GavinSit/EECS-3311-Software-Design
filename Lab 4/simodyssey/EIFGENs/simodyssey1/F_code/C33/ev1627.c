/*
 * Code for class EV_CONTAINER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1627.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CONTAINER}.item */
EIF_REFERENCE F1633_18330 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16581[Dtype(RTCW(tr1))-1972])(tr1);
	RTLE;
	return Result;
}

/* {EV_CONTAINER}.extend */
void F1633_18339 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16588[Dtype(RTCW(tr1))-1972])(tr1, arg1);
	RTLE;
}

/* {EV_CONTAINER}.put */
void F1633_18340 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16589[Dtype(RTCW(tr1))-1972])(tr1, arg1);
	RTLE;
}

/* {EV_CONTAINER}.client_width */
EIF_INTEGER_32 F1633_18344 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16585[Dtype(RTCW(tr1))-1972])(tr1);
	RTLE;
	return Result;
}

/* {EV_CONTAINER}.client_height */
EIF_INTEGER_32 F1633_18345 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16586[Dtype(RTCW(tr1))-1972])(tr1);
	RTLE;
	return Result;
}

/* {EV_CONTAINER}.cl_extend */
void F1633_18362 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R15469[Dtype(Current)-1634])(Current, arg1);
}

void EIF_Minit1627 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
