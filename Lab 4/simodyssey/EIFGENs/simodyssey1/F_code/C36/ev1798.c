/*
 * Code for class EV_NOTEBOOK_TAB_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1798.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_NOTEBOOK_TAB_I}.enable_select */
void F1809_20347 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc2 = tr1;
	if ((EIF_BOOLEAN) (EIF_TEST(loc1) && EIF_TEST(loc2))) {
		F1635_18379(loc1, loc2);
	}
	RTLE;
}

void EIF_Minit1798 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
