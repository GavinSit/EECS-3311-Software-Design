/*
 * Code for class EV_WIDGET_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1741.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WIDGET_I}.internal_pointer_style */
EIF_REFERENCE F1752_19789 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16557[Dtype(Current)-1871])(Current);
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		loc1 = Current;
		loc1 = RTRV(eif_new_type(1658, 0x00), loc1);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			Result = RTOUCR(235,F71_9846, (RTCV(RTOUCR(242,F321_12796, (Current)))));
		} else {
			Result = RTOUCR(234,F71_9843, (RTCV(RTOUCR(242,F321_12796, (Current)))));
		}
	} else {
		RTLE;
		return (EIF_REFERENCE) loc2;
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_I}.disable_default_processing_on_key */
EIF_BOOLEAN F1752_19811 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + O16561[Dtype(Current)-1751]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(loc1+ _PTROFF_4_3_0_3_0_0_))(
			*(EIF_POINTER *)(loc1+ _PTROFF_4_3_0_3_0_1_),
			*(EIF_REFERENCE *)(loc1 + _REFACS_1_), arg1);
		tb1 = tb1;
		Result = (EIF_BOOLEAN) !tb1;
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_I}.on_parented */
void F1752_19812 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_WIDGET_I}.on_orphaned */
void F1752_19813 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit1741 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
