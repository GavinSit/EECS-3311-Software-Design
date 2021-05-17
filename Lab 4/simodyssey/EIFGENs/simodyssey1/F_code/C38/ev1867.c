/*
 * Code for class EV_PARAGRAPH_FORMAT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1867.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PARAGRAPH_FORMAT_IMP}.make */
void F1884_21683 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1411_17431(Current);
	F1411_17444(Current, ((EIF_INTEGER_32) 1L));
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_PARAGRAPH_FORMAT_IMP}.set_alignment */
void F1884_21689 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L))) {
		F1411_17444(Current, ((EIF_INTEGER_32) 1L));
	} else {
		if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 2L))) {
			F1411_17444(Current, ((EIF_INTEGER_32) 3L));
		} else {
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 3L))) {
				F1411_17444(Current, ((EIF_INTEGER_32) 2L));
			} else {
				if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 4L))) {
					F1411_17444(Current, ((EIF_INTEGER_32) 4L));
				} else {
				}
			}
		}
	}
	RTLE;
}

void EIF_Minit1867 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
