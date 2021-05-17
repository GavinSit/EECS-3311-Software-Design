/*
 * Code for class FORMAT_INTEGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fo30.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FORMAT_INTEGER}.make */
void F271_761 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F271_780(Current);
	*(EIF_INTEGER_32 *)(Current + O767[Dtype(Current)-270]) = (EIF_INTEGER_32) arg1;
	F271_801(Current);
	F271_798(Current);
	F271_793(Current);
	RTLE;
}

/* {FORMAT_INTEGER}.centered */
EIF_BOOLEAN F271_770 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O769[Dtype(Current)-270]) == ((EIF_INTEGER_32) 2L));
}

/* {FORMAT_INTEGER}.left_justified */
EIF_BOOLEAN F271_771 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O769[Dtype(Current)-270]) == ((EIF_INTEGER_32) 1L));
}

/* {FORMAT_INTEGER}.show_sign_negative */
EIF_BOOLEAN F271_774 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O771[Dtype(Current)-270]) == ((EIF_INTEGER_32) 3L));
}

/* {FORMAT_INTEGER}.show_sign_positive */
EIF_BOOLEAN F271_775 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O771[Dtype(Current)-270]) == ((EIF_INTEGER_32) 2L));
}

/* {FORMAT_INTEGER}.show_sign */
EIF_BOOLEAN F271_776 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O771[Dtype(Current)-270]) == ((EIF_INTEGER_32) 0L));
}

/* {FORMAT_INTEGER}.ignore_sign */
EIF_BOOLEAN F271_777 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O771[Dtype(Current)-270]) == ((EIF_INTEGER_32) 1L));
}

/* {FORMAT_INTEGER}.no_separator */
EIF_BOOLEAN F271_778 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_1_) == (EIF_CHARACTER_8) '\000');
}

/* {FORMAT_INTEGER}.blank_fill */
void F271_780 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_0_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ' ';
}

/* {FORMAT_INTEGER}.right_justify */
void F271_793 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O769[Dtype(Current)-270]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
}

/* {FORMAT_INTEGER}.sign_negative_only */
void F271_798 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O771[Dtype(Current)-270]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
}

/* {FORMAT_INTEGER}.sign_normal */
void F271_801 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("- +",3,2957355);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FORMAT_INTEGER}.split */
EIF_REFERENCE F271_818 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1559_6605(RTCW(Result), *(EIF_INTEGER_32 *)(Current + O767[Dtype(Current)-270]));
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 3L))) break;
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 3L))) break;
			tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(arg1))-849])(arg1, loc1));
			F1561_6720(RTCW(Result), tc1);
			loc1--;
			loc2++;
		}
		F1561_6720(RTCW(Result), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_1_));
	}
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(arg1))-849])(arg1, loc1));
		F1561_6720(RTCW(Result), tc1);
		loc1--;
	}
	RTLE;
	return Result;
}

/* {FORMAT_INTEGER}.process_sign */
EIF_REFERENCE F271_819 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	Result = (EIF_REFERENCE) arg1;
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current + O773[dtype-270]) && (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) -1L)))) {
		F1561_6720(RTCW(Result), (EIF_CHARACTER_8) '(');
		F1561_6746(RTCW(Result), (EIF_CHARACTER_8) ')');
	}
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\0';
	tb4 = '\01';
	if (!F271_774(Current)) {
		tb4 = F271_776(Current);
	}
	if (tb4) {
		tb3 = (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) -1L));
	}
	if (!(tb3)) {
		tb3 = '\0';
		tb4 = '\01';
		if (!F271_775(Current)) {
			tb4 = F271_776(Current);
		}
		if (tb4) {
			tb3 = (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L));
		}
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = '\0';
		if (F271_776(Current)) {
			tb2 = (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L));
		}
		tb1 = tb2;
	}
	if (tb1) {
		loc1 = F271_821(Current, arg2);
	}
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		if (*(EIF_BOOLEAN *)(Current + O770[dtype-270])) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, loc1);
		} else {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4818[Dtype(RTCW(Result))-1560])(Result, loc1);
		}
	}
	RTLE;
	return Result;
}

/* {FORMAT_INTEGER}.sign_size */
EIF_INTEGER_32 F271_820 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result / ((EIF_INTEGER_32) 3L));
	RTLE;
	return Result;
}

/* {FORMAT_INTEGER}.sign_value */
EIF_REFERENCE F271_821 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	loc1 = F271_820(Current);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 * (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L))) + ((EIF_INTEGER_32) 1L));
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = F271_820(Current);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4722[Dtype(RTCW(tr1))-1560])(tr1, loc1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ti4_1) - ((EIF_INTEGER_32) 1L)));
	RTLE;
	return Result;
}

/* {FORMAT_INTEGER}.justify */
EIF_REFERENCE F271_822 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	Result = (EIF_REFERENCE) arg1;
	if ((EIF_BOOLEAN) !F271_770(Current)) {
		loc1 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		F1559_6605(RTCW(loc1), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O767[dtype-270]) - ti4_1));
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4682[Dtype(RTCW(loc1))-1560])(loc1);
			if ((EIF_BOOLEAN) (loc3 > ti4_1)) break;
			F1561_6746(RTCW(loc1), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_0_));
			loc3++;
		}
		if (F271_771(Current)) {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, loc1);
		} else {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4818[Dtype(RTCW(Result))-1560])(Result, loc1);
		}
	} else {
		loc4 = *(EIF_INTEGER_32 *)(Current + O767[dtype-270]);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - ti4_2) / ((EIF_INTEGER_32) 2L));
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc4) + ti4_2) < *(EIF_INTEGER_32 *)(Current + O767[dtype-270]))) {
			loc1 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F1559_6605(RTCW(loc1), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)));
		} else {
			loc1 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
			F1559_6605(RTCW(loc1), loc4);
		}
		loc2 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1559_6605(RTCW(loc2), loc4);
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4682[Dtype(RTCW(loc2))-1560])(loc2);
			if ((EIF_BOOLEAN) (loc3 > ti4_2)) break;
			F1561_6746(RTCW(loc1), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_0_));
			F1561_6746(RTCW(loc2), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_0_));
			loc3++;
		}
		ti4_3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4682[Dtype(RTCW(loc1))-1560])(loc1);
		if ((EIF_BOOLEAN)(loc3 == ti4_3)) {
			F1561_6746(RTCW(loc1), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_1_0_));
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4818[Dtype(RTCW(Result))-1560])(Result, loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, loc2);
	}
	RTLE;
	return Result;
}

void EIF_Minit30 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
