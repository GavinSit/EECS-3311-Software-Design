/*
 * Code for class EV_BOX
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1630.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_BOX}.border_width */
EIF_INTEGER_32 F1636_18389 (EIF_REFERENCE Current)
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
	Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_64_26_6_10_);
	RTLE;
	return Result;
}

/* {EV_BOX}.padding */
EIF_INTEGER_32 F1636_18391 (EIF_REFERENCE Current)
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
	Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_64_26_6_11_);
	RTLE;
	return Result;
}

/* {EV_BOX}.is_item_expanded */
EIF_BOOLEAN F1636_18392 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	Result = F1974_24292(RTCW(tr1), arg1);
	RTLE;
	return Result;
}

/* {EV_BOX}.enable_homogeneous */
void F1636_18393 (EIF_REFERENCE Current)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_BOOLEAN)) R16624[Dtype(RTCW(tr1))-1974])(tr1, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_BOX}.set_border_width */
void F1636_18395 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R16625[Dtype(RTCW(tr1))-1974])(tr1, arg1);
	RTLE;
}

/* {EV_BOX}.set_padding */
void F1636_18397 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R16626[Dtype(RTCW(tr1))-1974])(tr1, arg1);
	RTLE;
}

/* {EV_BOX}.disable_item_expand */
void F1636_18399 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	F1974_24293(RTCW(tr1), arg1, (EIF_BOOLEAN) 0);
	RTLE;
}

void EIF_Minit1630 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
