/*
 * Code for class EV_NOTEBOOK
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1629.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_NOTEBOOK}.select_item */
void F1635_18379 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	F1973_24265(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_NOTEBOOK}.implementation */
EIF_REFERENCE F1635_18386 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EV_NOTEBOOK}.create_implementation */
void F1635_18387 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1972, 0x01).id, 1972, _OBJSIZ_63_23_6_12_0_3_0_3_);
	F1973_24218(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1629 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
