/*
 * Code for class EV_MULTI_COLUMN_LIST
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1675.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MULTI_COLUMN_LIST}.row_height */
EIF_INTEGER_32 F1682_18850 (EIF_REFERENCE Current)
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
	Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_65_27_6_13_);
	RTLE;
	return Result;
}

/* {EV_MULTI_COLUMN_LIST}.implementation */
EIF_REFERENCE F1682_18878 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EV_MULTI_COLUMN_LIST}.create_implementation */
void F1682_18879 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1991, 0x01).id, 1991, _OBJSIZ_65_27_6_14_0_2_0_3_);
	F1992_24801(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1675 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
