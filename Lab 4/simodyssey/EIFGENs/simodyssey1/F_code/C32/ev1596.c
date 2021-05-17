/*
 * Code for class EV_POINTER_STYLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1596.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_POINTER_STYLE}.make_predefined */
void F1601_17843 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1596_17742(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1706_19138(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_POINTER_STYLE}.set_x_hotspot */
void F1601_17846 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1706_19139(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_POINTER_STYLE}.set_y_hotspot */
void F1601_17847 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1706_19140(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_POINTER_STYLE}.x_hotspot */
EIF_INTEGER_32 F1601_17848 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1706_19146(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_POINTER_STYLE}.y_hotspot */
EIF_INTEGER_32 F1601_17849 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1706_19147(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_POINTER_STYLE}.width */
EIF_INTEGER_32 F1601_17850 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1706_19144(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_POINTER_STYLE}.height */
EIF_INTEGER_32 F1601_17851 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1706_19145(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_POINTER_STYLE}.copy */
void F1601_17852 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL)) {
		F1596_17742(Current);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1706_19149(RTCW(tr1), arg1);
	ti4_1 = F1601_17848(RTCW(arg1));
	F1601_17846(Current, ti4_1);
	ti4_1 = F1601_17849(RTCW(arg1));
	F1601_17847(Current, ti4_1);
	RTLE;
}

/* {EV_POINTER_STYLE}.is_equal */
EIF_BOOLEAN F1601_17853 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		Result = '\0';
		ti4_1 = F1601_17851(RTCW(arg1));
		ti4_2 = F1601_17850(RTCW(arg1));
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (F1601_17850(Current) * ti4_1) == (EIF_INTEGER_32) (ti4_2 * F1601_17851(Current)))) {
			tb1 = '\0';
			ti4_1 = F1601_17848(RTCW(arg1));
			if ((EIF_BOOLEAN)(ti4_1 == F1601_17848(Current))) {
				ti4_1 = F1601_17849(RTCW(arg1));
				tb1 = (EIF_BOOLEAN)(ti4_1 == F1601_17849(Current));
			}
			Result = tb1;
		}
	}
	RTLE;
	return Result;
}

/* {EV_POINTER_STYLE}.create_interface_objects */
void F1601_17854 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_POINTER_STYLE}.create_implementation */
void F1601_17855 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1705, 0x01).id, 1705, _OBJSIZ_4_1_0_0_0_0_0_0_);
	F1706_19134(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1596 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
