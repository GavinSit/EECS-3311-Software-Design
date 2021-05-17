/*
 * Code for class EV_FONT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1597.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_FONT}.family */
EIF_INTEGER_32 F1602_17858 (EIF_REFERENCE Current)
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
	Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_4_2_0_4_);
	RTLE;
	return Result;
}

/* {EV_FONT}.weight */
EIF_INTEGER_32 F1602_17860 (EIF_REFERENCE Current)
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
	Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_4_2_0_3_);
	RTLE;
	return Result;
}

/* {EV_FONT}.shape */
EIF_INTEGER_32 F1602_17861 (EIF_REFERENCE Current)
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
	Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_4_2_0_2_);
	RTLE;
	return Result;
}

/* {EV_FONT}.height_in_points */
EIF_INTEGER_32 F1602_17863 (EIF_REFERENCE Current)
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
	Result = F1886_21723(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_FONT}.preferred_families */
EIF_REFERENCE F1602_17865 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
	RTLE;
	return Result;
}

/* {EV_FONT}.set_family */
void F1602_17866 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	F1886_21724(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_FONT}.string_size */
EIF_REFERENCE F1602_17881 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1886_21737(RTCW(tr1), arg1);
	RTLE;
	return Result;
}

/* {EV_FONT}.is_equal */
EIF_BOOLEAN F1602_17882 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	ti4_1 = F1602_17858(RTCW(arg1));
	if ((EIF_BOOLEAN)(F1602_17858(Current) == ti4_1)) {
		ti4_1 = F1602_17860(RTCW(arg1));
		tb2 = (EIF_BOOLEAN)(F1602_17860(Current) == ti4_1);
	}
	if (tb2) {
		ti4_1 = F1602_17861(RTCW(arg1));
		tb1 = (EIF_BOOLEAN)(F1602_17861(Current) == ti4_1);
	}
	if (tb1) {
		ti4_1 = F1602_17863(RTCW(arg1));
		Result = (EIF_BOOLEAN)(F1602_17863(Current) == ti4_1);
	}
	RTLE;
	return Result;
}

/* {EV_FONT}.copy */
void F1602_17883 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL)) {
		F1596_17742(Current);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1886_21729(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_FONT}.create_interface_objects */
void F1602_17886 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_FONT}.create_implementation */
void F1602_17887 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1885, 0x01).id, 1885, _OBJSIZ_4_2_0_5_0_0_0_0_);
	F1886_21717(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1597 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
