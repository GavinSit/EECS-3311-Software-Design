/*
 * Code for class WEL_RICH_EDIT_STREAM_OUT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1552.h"
#include "../C32/we1552.h"
#include "estream.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_RICH_EDIT_STREAM_OUT}.make */
void F1414_17556 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1413_17535(Current);
	cwel_set_editstream_out_procedure_address(((EIF_POINTER) F1414_17559));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_2_0_1_0_0_);
	cwel_editstream_set_pfncallback_out((tp1));
	RTLE;
}

/* {WEL_RICH_EDIT_STREAM_OUT}.internal_callback */
EIF_INTEGER_32 F1414_17559 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		loc1 = RTLNSMART(eif_new_type(1283, 0).id);
		F1284_4471(RTCW(loc1), arg1, arg2);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	} else {
		F1284_4473(RTCW(loc1), arg1, arg2);
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R14845[Dtype(Current)-1414])(Current);
	RTLE;
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_);
}

/* {WEL_RICH_EDIT_STREAM_OUT}.cwel_editstream_set_pfncallback_out */
void F1414_17560 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	cwel_editstream_set_pfncallback_out((arg1));
}

/* {WEL_RICH_EDIT_STREAM_OUT}.cwel_set_editstream_out_procedure_address */
void F1414_17561 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	cwel_set_editstream_out_procedure_address((arg1));
}

void EIF_Minit1552 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
