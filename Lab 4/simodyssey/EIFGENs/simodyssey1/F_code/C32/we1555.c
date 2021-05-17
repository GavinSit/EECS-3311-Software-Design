/*
 * Code for class WEL_RICH_EDIT_STREAM_IN
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1555.h"
#include "../C32/we1555.h"
#include <estream.h>
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

/* {WEL_RICH_EDIT_STREAM_IN}.make */
void F1417_17571 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1413_17535(Current);
	cwel_set_editstream_in_procedure_address(((EIF_POINTER) F1417_17574));
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	cwel_editstream_set_pfncallback_in((tp1));
	RTLE;
}

/* {WEL_RICH_EDIT_STREAM_IN}.internal_callback */
EIF_INTEGER_32 F1417_17574 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		loc1 = RTLNSMART(eif_new_type(1283, 0).id);
		F1284_4471(RTCW(loc1), arg1, arg2);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	} else {
		F1284_4473(RTCW(loc1), arg1, arg2);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R14854[Dtype(Current)-1417])(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_0_1_0_0_);
	cwel_set_integer_reference_value(((LONG FAR *) arg3), ((int) ti4_1));
	RTLE;
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_);
}

/* {WEL_RICH_EDIT_STREAM_IN}.cwel_set_integer_reference_value */
void F1417_17576 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_set_integer_reference_value(((LONG FAR *) arg1), ((int) arg2));
}

/* {WEL_RICH_EDIT_STREAM_IN}.cwel_editstream_set_pfncallback_in */
void F1417_17577 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	cwel_editstream_set_pfncallback_in((arg1));
}

/* {WEL_RICH_EDIT_STREAM_IN}.cwel_set_editstream_in_procedure_address */
void F1417_17578 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	cwel_set_editstream_in_procedure_address((arg1));
}

void EIF_Minit1555 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
