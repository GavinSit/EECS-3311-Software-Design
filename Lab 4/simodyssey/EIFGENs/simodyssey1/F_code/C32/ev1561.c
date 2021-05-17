/*
 * Code for class EV_GDI_PEN
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1561.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_GDI_PEN}.make_with_values */
void F1518_17618 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	
	
	F1518_17627(Current, arg1, arg2, arg3);
}

/* {EV_GDI_PEN}.hash_code */
EIF_INTEGER_32 F1518_17619 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REAL_32 loc1 = (EIF_REAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) == ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_5_);
		loc1 = (EIF_REAL_32) (ti4_1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_7_);
		tr4_1 = (EIF_REAL_32) (ti4_1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_6_);
		tr4_2 = (EIF_REAL_32) (ti4_1);
		loc1 = (EIF_REAL_32) (EIF_REAL_32) ((EIF_REAL_32) ((EIF_REAL_32) ((EIF_REAL_32) 262144.0 * loc1) + (EIF_REAL_32) ((EIF_REAL_32) 4096.0 * tr4_1)) + (EIF_REAL_32) ((EIF_REAL_32) 64.0 * tr4_2));
		tr4_1 = eif_abs_real32 (loc1);
		tr1 = RTLNS(eif_new_type(1481, 0x00).id, 1481, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)tr1 = tr4_1;
		ti4_1 = F1480_5567(RTCW(tr1));
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_4_);
		ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
		ti4_1 = eif_abs_int32 ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (ti4_2 * ((EIF_INTEGER_32) 2L))) + ti4_3));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ti4_1;
	}
	RTLE;
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
}

/* {EV_GDI_PEN}.is_equal */
EIF_BOOLEAN F1518_17626 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_3_);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_) == ti4_1)) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_4_);
		tb3 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_4_) == ti4_1);
	}
	if (tb3) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_5_);
		tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_5_) == ti4_1);
	}
	if (tb2) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_7_);
		tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_7_) == ti4_1);
	}
	if (tb1) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_6_);
		Result = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_6_) == ti4_1);
	}
	RTLE;
	return Result;
}

/* {EV_GDI_PEN}.set_values */
void F1518_17627 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg3);
	RTLIU(3);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_4_) = (EIF_INTEGER_32) arg2;
	loc1 = F1381_16634(RTCW(arg3));
	ti4_1 = F1829_20494(RTCW(loc1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_5_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = F1829_20496(RTCW(loc1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_6_) = (EIF_INTEGER_32) ti4_1;
	ti4_1 = F1829_20495(RTCW(loc1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_7_) = (EIF_INTEGER_32) ti4_1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

void EIF_Minit1561 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
