/*
 * Code for class EV_REGION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1592.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_REGION}.copy */
void F1597_17768 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL)) {
		F1596_17742(Current);
	}
	tb1 = F1596_17746(RTCW(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F1698_19013(RTCW(tr1), arg1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		F1698_19015(RTCW(tr1));
	}
	RTLE;
}

/* {EV_REGION}.is_equal */
EIF_BOOLEAN F1597_17769 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tb1 = '\0';
		tb2 = F1596_17746(RTCW(arg1));
		if (tb2) {
			tb1 = F1596_17746(Current);
		}
		if (tb1) {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			Result = F1698_19014(RTCW(tr1), arg1);
		}
	}
	RTLE;
	return Result;
}

/* {EV_REGION}.create_interface_objects */
void F1597_17770 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_REGION}.create_implementation */
void F1597_17771 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1697, 0x01).id, 1697, _OBJSIZ_1_3_0_3_0_1_0_0_);
	F1698_19007(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1592 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
