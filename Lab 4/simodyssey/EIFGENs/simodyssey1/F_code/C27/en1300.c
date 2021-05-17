/*
 * Code for class ENTITY_ALPHABET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "en1300.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ENTITY_ALPHABET}.make */
void F416_13421 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_CHARACTER_8 *)(Current + O11108[dtype-415]) = (EIF_CHARACTER_8) arg1;
	*(EIF_INTEGER_32 *)(Current + O11109[dtype-415]) = (EIF_INTEGER_32) arg2;
	RTLE;
}

/* {ENTITY_ALPHABET}.out */
EIF_REFERENCE F416_13425 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = RTMS_EX_H("[",1,91);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O11109[dtype-415]);
	tr2 = c_outi(ti4_1);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
	tr2 = RTMS_EX_H(",",1,44);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tc1 = *(EIF_CHARACTER_8 *)(Current + O11108[dtype-415]);
	tr2 = c_outc(tc1);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("]",1,93);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	RTLE;
	return Result;
}

/* {ENTITY_ALPHABET}.is_equal */
EIF_BOOLEAN F416_13426 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current + O11108[Dtype(Current)-415]);
	tc2 = *(EIF_CHARACTER_8 *)(RTCW(arg1) + O11108[Dtype(arg1)-415]);
	Result = tc1 == tc2;
	RTLE;
	return Result;
}

/* {ENTITY_ALPHABET}.is_stationary */
EIF_BOOLEAN F416_13427 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current + O11108[dtype-415]) == (EIF_CHARACTER_8) 'W') || (EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current + O11108[dtype-415]) == (EIF_CHARACTER_8) 'Y')) || (EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current + O11108[dtype-415]) == (EIF_CHARACTER_8) '*')) || (EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current + O11108[dtype-415]) == (EIF_CHARACTER_8) 'O'))) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {ENTITY_ALPHABET}.set_sector_place */
void F416_13428 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O11110[Dtype(Current)-415]) = (EIF_INTEGER_32) arg1;
}

void EIF_Minit1300 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
