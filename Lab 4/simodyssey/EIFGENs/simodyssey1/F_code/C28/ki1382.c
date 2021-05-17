/*
 * Code for class KI_TEXT_OUTPUT_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ki1382.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KI_TEXT_OUTPUT_STREAM}.put_line */
void F1162_14563 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R12082[Dtype(Current)-1162])(Current, arg1);
	F1162_14564(Current);
	RTLE;
}

/* {KI_TEXT_OUTPUT_STREAM}.put_new_line */
void F1162_14564 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R12102[dtype-1162])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R12082[dtype-1162])(Current, tr1);
	RTLE;
}

void EIF_Minit1382 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
