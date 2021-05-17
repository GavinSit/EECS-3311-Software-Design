/*
 * Code for class EV_TEXT_COMPONENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1653.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TEXT_COMPONENT}.disable_edit */
void F1659_18685 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_BOOLEAN)) R16834[Dtype(RTCW(tr1))-2000])(tr1, (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_TEXT_COMPONENT}.insert_text */
void F1659_18687 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16836[Dtype(RTCW(tr1))-2000])(tr1, arg1);
	RTLE;
}

/* {EV_TEXT_COMPONENT}.append_text */
void F1659_18688 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16837[Dtype(RTCW(tr1))-2000])(tr1, arg1);
	RTLE;
}

void EIF_Minit1653 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
