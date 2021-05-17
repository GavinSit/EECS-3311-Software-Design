/*
 * Code for class EV_SIZEABLE_PRIMITIVE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1713.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SIZEABLE_PRIMITIVE_IMP}.ev_set_minimum_width */
void F1724_19511 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16293[dtype-1972])(Current) != arg1)) {
		F1723_19486(Current, arg1);
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16312[dtype-1972])(Current);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			F1725_19528(RTCW(loc1), ((EIF_INTEGER_32) 1L), Current, arg2);
		}
	}
	RTLE;
}

/* {EV_SIZEABLE_PRIMITIVE_IMP}.ev_set_minimum_height */
void F1724_19512 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16294[dtype-1972])(Current) != arg1)) {
		F1723_19487(Current, arg1);
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16312[dtype-1972])(Current);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			F1725_19528(RTCW(loc1), ((EIF_INTEGER_32) 2L), Current, arg2);
		}
	}
	RTLE;
}

/* {EV_SIZEABLE_PRIMITIVE_IMP}.ev_set_minimum_size */
void F1724_19513 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLIU(2);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16293[dtype-1972])(Current);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != arg1);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16294[dtype-1972])(Current);
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != arg2);
	F1723_19488(Current, arg1, arg2);
	loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16312[dtype-1972])(Current);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		if ((EIF_BOOLEAN) (loc1 && loc2)) {
			F1725_19528(RTCW(loc3), ((EIF_INTEGER_32) 3L), Current, arg3);
		} else {
			if (loc1) {
				F1725_19528(RTCW(loc3), ((EIF_INTEGER_32) 1L), Current, arg3);
			} else {
				if (loc2) {
					F1725_19528(RTCW(loc3), ((EIF_INTEGER_32) 2L), Current, arg3);
				}
			}
		}
	}
	RTLE;
}

void EIF_Minit1713 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
