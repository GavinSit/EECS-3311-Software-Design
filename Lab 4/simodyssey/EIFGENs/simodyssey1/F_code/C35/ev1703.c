/*
 * Code for class EV_CLIPBOARD_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1703.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CLIPBOARD_IMP}.make */
void F1710_19220 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1564, 1).id);
	F1558_6510(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_CLIPBOARD_IMP}.destroy */
void F1710_19221 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1696_18991(Current, (EIF_BOOLEAN) 1);
}

void EIF_Minit1703 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
