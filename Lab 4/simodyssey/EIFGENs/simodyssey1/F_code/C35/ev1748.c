/*
 * Code for class EV_CELL_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1748.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CELL_I}.extend */
void F1759_19880 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F1977_24339(Current, arg1);
}

/* {EV_CELL_I}.update_for_pick_and_drop */
void F1759_19881 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current + O19844[Dtype(Current)-1976]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(loc1 + _REFACS_3_);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_BOOLEAN)) R16580[Dtype(RTCW(tr1))-1871])(tr1, arg1);
	}
	RTLE;
}

void EIF_Minit1748 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
