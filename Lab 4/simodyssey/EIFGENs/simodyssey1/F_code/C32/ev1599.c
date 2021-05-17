/*
 * Code for class EV_CLIPBOARD
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1599.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CLIPBOARD}.create_interface_objects */
void F1604_17934 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_CLIPBOARD}.create_implementation */
void F1604_17935 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1709, 0x01).id, 1709, _OBJSIZ_2_2_0_0_0_0_0_0_);
	F1710_19220(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1599 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
