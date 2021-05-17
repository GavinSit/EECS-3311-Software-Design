/*
 * Code for class EV_ACCELERATOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1600.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ACCELERATOR}.make_with_key_combination */
void F1605_17936 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2, EIF_BOOLEAN arg3, EIF_BOOLEAN arg4)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	F1596_17742(Current);
	F1605_17943(Current, arg1);
	if (arg2) {
		F1605_17948(Current);
	}
	if (arg3) {
		F1605_17946(Current);
	}
	if (arg4) {
		F1605_17944(Current);
	}
	RTLE;
}

/* {EV_ACCELERATOR}.actions */
EIF_REFERENCE F1605_17937 (EIF_REFERENCE Current)
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
	Result = F1711_19233(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_ACCELERATOR}.key */
EIF_REFERENCE F1605_17939 (EIF_REFERENCE Current)
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
	Result = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_2_);
	RTLE;
	return Result;
}

/* {EV_ACCELERATOR}.shift_required */
EIF_BOOLEAN F1605_17940 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_3_3_);
	RTLE;
	return Result;
}

/* {EV_ACCELERATOR}.alt_required */
EIF_BOOLEAN F1605_17941 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_3_2_);
	RTLE;
	return Result;
}

/* {EV_ACCELERATOR}.control_required */
EIF_BOOLEAN F1605_17942 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_3_1_);
	RTLE;
	return Result;
}

/* {EV_ACCELERATOR}.set_key */
void F1605_17943 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1712_19251(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_ACCELERATOR}.enable_shift_required */
void F1605_17944 (EIF_REFERENCE Current)
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
	F1712_19252(RTCW(tr1));
	RTLE;
}

/* {EV_ACCELERATOR}.enable_alt_required */
void F1605_17946 (EIF_REFERENCE Current)
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
	F1712_19254(RTCW(tr1));
	RTLE;
}

/* {EV_ACCELERATOR}.enable_control_required */
void F1605_17948 (EIF_REFERENCE Current)
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
	F1712_19256(RTCW(tr1));
	RTLE;
}

/* {EV_ACCELERATOR}.is_equal */
EIF_BOOLEAN F1605_17950 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	tr1 = F1605_17939(Current);
	tr2 = F1605_17939(RTCW(arg1));
	tb3 = (EIF_BOOLEAN) eif_builtin_ANY_is_equal (tr1, tr2);
	if (tb3) {
		tb3 = F1605_17941(RTCW(arg1));
		tb2 = (EIF_BOOLEAN)(F1605_17941(Current) == tb3);
	}
	if (tb2) {
		tb2 = F1605_17940(RTCW(arg1));
		tb1 = (EIF_BOOLEAN)(F1605_17940(Current) == tb2);
	}
	if (tb1) {
		tb1 = F1605_17942(RTCW(arg1));
		Result = (EIF_BOOLEAN)(F1605_17942(Current) == tb1);
	}
	RTLE;
	return Result;
}

/* {EV_ACCELERATOR}.text */
EIF_REFERENCE F1605_17951 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	Result = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1564_6847(RTCW(Result), ((EIF_INTEGER_32) 0L));
	if (F1605_17942(Current)) {
		tr1 = RTMS_EX_H("Ctrl+",5,1954170411);
		tr1 = F1558_6569(tr1);
		F1565_6938(RTCW(Result), tr1);
	}
	if (F1605_17941(Current)) {
		tr1 = RTMS_EX_H("Alt+",4,1097626667);
		tr1 = F1558_6569(tr1);
		F1565_6938(RTCW(Result), tr1);
	}
	if (F1605_17940(Current)) {
		tr1 = RTMS_EX_H("Shift+",6,1932305451);
		tr1 = F1558_6569(tr1);
		F1565_6938(RTCW(Result), tr1);
	}
	loc1 = F1814_20388(RTCV(F1605_17939(Current)));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		F1565_6979(RTCW(loc1));
	}
	F1565_6938(RTCW(Result), loc1);
	RTLE;
	return Result;
}

/* {EV_ACCELERATOR}.out */
EIF_REFERENCE F1605_17952 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = F1558_6564(RTCV(F1605_17951(Current)));
	RTLE;
	return Result;
}

/* {EV_ACCELERATOR}.create_interface_objects */
void F1605_17954 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_ACCELERATOR}.create_implementation */
void F1605_17955 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1711, 0x01).id, 1711, _OBJSIZ_3_5_0_0_0_0_0_0_);
	F1712_19246(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1600 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
