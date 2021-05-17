/*
 * Code for class EV_WIDGET_LIST_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1743.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WIDGET_LIST_I}.update_for_pick_and_drop */
void F1754_19843 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = F1716_19390(Current);
	F1716_19400(Current);
	for (;;) {
		if (F1716_19393(Current)) break;
		tr1 = *(EIF_REFERENCE *)(RTCV(F1716_19388(Current)) + _REFACS_3_);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_BOOLEAN)) R16580[Dtype(RTCW(tr1))-1871])(tr1, arg1);
		F1716_19402(Current);
	}
	F1716_19404(Current, loc1);
	RTLE;
}

void EIF_Minit1743 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
