/*
 * Code for class EV_LITE_ACTION_SEQUENCE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev2003.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_LITE_ACTION_SEQUENCE}.call */
void F977_14409 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	if ((EIF_BOOLEAN) (F951_4094(Current) > ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(210,F415_13420, (Current))) + _REFACS_1_);
		tr1 = F1713_19262(RTCW(tr1));
		F1714_19331(RTCW(tr1));
		F976_4199(Current, arg1);
	}
	RTLE;
}

void EIF_Minit2003 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
