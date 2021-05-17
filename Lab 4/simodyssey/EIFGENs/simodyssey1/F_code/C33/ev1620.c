/*
 * Code for class EV_DRAWABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1620.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DRAWABLE}.enable_dashed_line_style */
void F1625_18147 (EIF_REFERENCE Current)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16952[Dtype(RTCW(tr1))-1871])(tr1);
	RTLE;
}

/* {EV_DRAWABLE}.draw_point */
void F1625_18151 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R16958[Dtype(RTCW(tr1))-1871])(tr1, arg1, arg2);
	RTLE;
}

/* {EV_DRAWABLE}.draw_segment */
void F1625_18157 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R16964[Dtype(RTCW(tr1))-1871])(tr1, arg1, arg2, arg3, arg4);
	RTLE;
}

/* {EV_DRAWABLE}.set_invert_mode */
void F1625_18173 (EIF_REFERENCE Current)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R16946[Dtype(RTCW(tr1))-1871])(tr1, ((EIF_INTEGER_32) 2L));
	RTLE;
}

void EIF_Minit1620 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
