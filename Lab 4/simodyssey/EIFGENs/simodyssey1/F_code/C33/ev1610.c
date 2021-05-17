/*
 * Code for class EV_POSITIONABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1610.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_POSITIONABLE}.set_x_position */
void F1615_18074 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R16405[Dtype(RTCW(tr1))-1981])(tr1, arg1);
	RTLE;
}

/* {EV_POSITIONABLE}.set_y_position */
void F1615_18075 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R16406[Dtype(RTCW(tr1))-1981])(tr1, arg1);
	RTLE;
}

/* {EV_POSITIONABLE}.set_size */
void F1615_18079 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	F1723_19473(RTCW(tr1), arg1, arg2);
	RTLE;
}

void EIF_Minit1610 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
