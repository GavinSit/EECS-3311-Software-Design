/*
 * Code for class EV_REGION_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1691.h"
#include <wel.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_REGION_IMP}.make */
void F1698_19007 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1322_15602(Current);
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_REGION_IMP}.copy_region */
void F1698_19013 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	loc1 = RTRV(eif_new_type(1697, 0x00), loc1);
	RTCT0("l_region_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_3_0_3_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_1_3_0_3_0_0_);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp3 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp4 = tp3;
	CombineRgn(((HRGN) tp1), ((HRGN) tp2), ((HRGN) tp4), ((int) ((EIF_INTEGER_32) 3L)));
	RTLE;
}

/* {EV_REGION_IMP}.is_region_equal */
EIF_BOOLEAN F1698_19014 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		loc1 = RTRV(eif_new_type(1697, 0x00), loc1);
		RTCT0("l_region_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTLE;
		return (EIF_BOOLEAN) F1322_15609(Current, loc1);
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {EV_REGION_IMP}.destroy */
void F1698_19015 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1696_18992(Current, (EIF_BOOLEAN) 1);
	F1696_18991(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

void EIF_Minit1691 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
