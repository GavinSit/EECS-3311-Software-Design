/*
 * Code for class EV_PIXMAP_IMP_LOADER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1854.h"
#include "../C38/ev1855.h"
#include "load_pixmap.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PIXMAP_IMP_LOADER}.effective_load_file */
void F1871_21247 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	F1872_21397(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_41_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_42_7_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		tb1 = F1422_5235(loc2);
		if (tb1) {
			{
				/* INLINED CODE (ANY.default_pointer) */
				tp1 = (EIF_POINTER)  0;
				/* END INLINED CODE */
			}
			tp2 = tp1;
			c_ev_load_pixmap((void*) Current, (EIF_FILENAME) tp2, (void*) (EIF_POINTER) F1872_21388);
		} else {
			loc1 = F1422_5268(loc2);
			tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
			c_ev_load_pixmap((void*) Current, (EIF_FILENAME) tp1, (void*) (EIF_POINTER) F1872_21388);
		}
	} else {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_42_7_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_42_7_)) {
		tr1 = RTMS_EX_H("Unable to load the file",23,1186931813);
		F463_1400(Current, tr1);
	}
	RTLE;
}

/* {EV_PIXMAP_IMP_LOADER}.c_ev_load_pixmap */
void F1871_21250 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	
	c_ev_load_pixmap((void*) arg1, (EIF_FILENAME) arg2, (void*) arg3);
	
}

void EIF_Minit1854 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
