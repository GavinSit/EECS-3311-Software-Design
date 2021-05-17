/*
 * Code for class WEL_STRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1348.h"
#include <tchar.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_STRING}.make_with_newline_conversion */
void F945_14350 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
	F944_3739(Current, ti4_1);
	F945_14366(Current, arg1);
	RTLE;
}

/* {WEL_STRING}.share_from_pointer */
void F945_14351 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F945_14376(Current, arg1);
	F945_14352(Current, arg1, ti4_1);
	RTLE;
}

/* {WEL_STRING}.share_from_pointer_and_count */
void F945_14352 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 / ((EIF_INTEGER_32) 2L));
	tr1 = RTLNSMART(eif_new_type(1283, 1).id);
	F1284_4471(RTCW(tr1), arg1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WEL_STRING}.string_discarding_carriage_return */
EIF_REFERENCE F945_14355 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	struct eif_ex_22 sloc8;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) sloc8.data;
	EIF_POINTER tp1;
	EIF_NATURAL_16 tu2_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	memset (&sloc8.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc8.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc8.overhead, eif_new_type(130, 0x00).id);
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,Result);
	RTLR(3,loc8);
	RTLIU(4);
	
	RTGC;
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tp1 = F944_3745(Current);
	loc4 = F945_14377(Current, tp1);
	loc1 = *(EIF_REFERENCE *)(Current);
	loc7 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '\015';
	Result = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1564_6847(RTCW(Result), loc4);
	for (;;) {
		if ((EIF_BOOLEAN)(loc2 == loc4)) break;
		tu2_1 = F1284_4480(RTCW(loc1), (EIF_INTEGER_32) (loc2 * ((EIF_INTEGER_32) 2L)));
		loc6 = (EIF_NATURAL_32) tu2_1;
		if ((EIF_BOOLEAN)(loc6 == loc7)) {
			F131_673(RTCW(loc8), loc1, loc5, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 0, Result);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			loc3++;
		}
		loc2++;
	}
	if ((EIF_BOOLEAN) (loc5 < loc4)) {
		F131_673(RTCW(loc8), loc1, loc5, (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L)), (EIF_BOOLEAN) 0, Result);
	}
	RTLE;
	return Result;
}

/* {WEL_STRING}.character_capacity */
EIF_INTEGER_32 F945_14361 (EIF_REFERENCE Current)
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
	Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_1_0_0_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result / ((EIF_INTEGER_32) 2L));
	RTLE;
	return Result;
}

/* {WEL_STRING}.character_size */
EIF_INTEGER_32 F945_14363 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
}

/* {WEL_STRING}.unicode_character_count */
EIF_INTEGER_32 F945_14364 (EIF_REFERENCE Current)
{
	GTCX
	struct eif_ex_22 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_INTEGER_32 ti4_1;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(130, 0x00).id);
	
	ti4_1 = F131_631(RTCW(loc1), *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) * ((EIF_INTEGER_32) 2L)));
	return (EIF_INTEGER_32) ti4_1;
}

/* {WEL_STRING}.occurrences */
EIF_INTEGER_32 F945_14365 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_16 loc4 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_16 loc5 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 * ((EIF_INTEGER_32) 2L));
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		loc3 = (EIF_NATURAL_32) arg1;
		loc2 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
			for (;;) {
				if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
				loc1 -= ((EIF_INTEGER_32) 2L);
				tu2_1 = F1284_4480(RTCW(loc2), loc1);
				tu4_1 = (EIF_NATURAL_32) tu2_1;
				if ((EIF_BOOLEAN)(tu4_1 == loc3)) {
					Result++;
				}
			}
		} else {
			tu4_1 = eif_bit_shift_right(loc3,((EIF_INTEGER_32) 10L));
			loc4 = (EIF_NATURAL_16) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 55232L) + tu4_1));
			tu4_1 = eif_bit_and(loc3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 1023L));
			loc5 = (EIF_NATURAL_16) ((EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 56320L) + tu4_1));
			for (;;) {
				if ((EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 2L))) break;
				loc1 -= ((EIF_INTEGER_32) 2L);
				tb1 = '\0';
				tu2_1 = F1284_4480(RTCW(loc2), loc1);
				if ((EIF_BOOLEAN)(tu2_1 == loc5)) {
					tu2_1 = F1284_4480(RTCW(loc2), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 2L)));
					tb1 = (EIF_BOOLEAN)(tu2_1 == loc4);
				}
				if (tb1) {
					Result++;
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {WEL_STRING}.set_string_with_newline_conversion */
void F945_14366 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	struct eif_ex_22 sloc8;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) sloc8.data;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	memset (&sloc8.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc8.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc8.overhead, eif_new_type(130, 0x00).id);
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc7);
	RTLR(2,Current);
	RTLR(3,loc8);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
	tb1 = '\0';
	if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
		tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(RTCW(arg1))-1560])(arg1, ((EIF_INTEGER_32) 1L));
		tu4_2 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '\012';
		tb1 = (EIF_BOOLEAN)(tu4_1 == tu4_2);
	}
	if (tb1) {
		loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc3)) break;
		tb1 = '\0';
		tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(RTCW(arg1))-1560])(arg1, loc1);
		tu4_2 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '\012';
		if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
			tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(RTCW(arg1))-1560])(arg1, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
			tu4_2 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '\015';
			tb1 = (EIF_BOOLEAN)(tu4_1 != tu4_2);
		}
		if (tb1) {
			loc4++;
		}
		loc1++;
	}
	loc7 = *(EIF_REFERENCE *)(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + loc4);
	loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc4) + ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) 2L));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_0_1_0_0_);
	if ((EIF_BOOLEAN) (ti4_1 < loc5)) {
		F1284_4558(RTCW(loc7), loc5);
	}
	if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(RTCW(arg1))-1560])(arg1, loc1);
		tu4_2 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '\012';
		if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
			tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '\015';
			tu2_1 = (EIF_NATURAL_16) tu4_1;
			F1284_4500(RTCW(loc7), tu2_1, loc2);
			loc2 += ((EIF_INTEGER_32) 2L);
			tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '\012';
			tu2_1 = (EIF_NATURAL_16) tu4_1;
			F1284_4500(RTCW(loc7), tu2_1, loc2);
			loc2 += ((EIF_INTEGER_32) 2L);
			loc6++;
			loc1++;
		}
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc3)) break;
			tb1 = '\0';
			tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(RTCW(arg1))-1560])(arg1, loc1);
			tu4_2 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '\012';
			if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
				tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[Dtype(RTCW(arg1))-1560])(arg1, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
				tu4_2 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '\015';
				tb1 = (EIF_BOOLEAN)(tu4_1 != tu4_2);
			}
			if (tb1) {
				tr1 = RTOUCR(139,F944_3758, (Current));
				F131_663(RTCW(loc8), arg1, loc6, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)), loc7, loc2, tr1);
				tr1 = RTOUCR(139,F944_3758, (Current));
				loc2 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O1718[Dtype(tr1)-488]);
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ((EIF_INTEGER_32) 2L)));
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_0_1_0_0_);
				if ((EIF_BOOLEAN) (ti4_1 < loc2)) {
					F1284_4558(RTCW(loc7), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)));
				}
				tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '\015';
				tu2_1 = (EIF_NATURAL_16) tu4_1;
				F1284_4500(RTCW(loc7), tu2_1, (EIF_INTEGER_32) (loc2 - (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ((EIF_INTEGER_32) 2L))));
				tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '\012';
				tu2_1 = (EIF_NATURAL_16) tu4_1;
				F1284_4500(RTCW(loc7), tu2_1, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 2L)));
				loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			}
			loc1++;
		}
		if ((EIF_BOOLEAN) (loc6 <= loc3)) {
			tr1 = RTOUCR(139,F944_3758, (Current));
			F131_663(RTCW(loc8), arg1, loc6, loc3, loc7, loc2, tr1);
			tr1 = RTOUCR(139,F944_3758, (Current));
			loc2 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O1718[Dtype(tr1)-488]);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L));
		} else {
			F1284_4500(RTCW(loc7), (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L), loc2);
		}
	} else {
		F944_3753(Current, arg1);
	}
	RTLE;
}

/* {WEL_STRING}.set_count */
void F945_14367 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) 2L));
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_1_0_0_);
	if ((EIF_BOOLEAN) (ti4_1 < loc1)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		F1284_4558(RTCW(tr1), loc1);
	}
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) arg1;
	RTLE;
}

/* {WEL_STRING}.buffer_length */
EIF_INTEGER_32 F945_14376 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	
	
	RTGC;
	loc1 = (EIF_NATURAL_64) _tcslen(((wchar_t*) arg1));
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 2L);
	loc1 = (EIF_NATURAL_64) (EIF_NATURAL_64) (loc1 * tu8_1);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 2147483647L);
	if ((EIF_BOOLEAN) (loc1 <= tu8_1)) {
		ti4_1 = (EIF_INTEGER_32) loc1;
		return (EIF_INTEGER_32) ti4_1;
	} else {
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483647L);
	}/* NOTREACHED */
	
}

/* {WEL_STRING}.string_length */
EIF_INTEGER_32 F945_14377 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F945_14376(Current, arg1);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result / ((EIF_INTEGER_32) 2L));
	RTLE;
	return Result;
}

/* {WEL_STRING}.c_strlen */
EIF_NATURAL_64 F945_14378 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	
	
	Result = (EIF_NATURAL_64) _tcslen(((wchar_t*) arg1));
	return Result;
}

void EIF_Minit1348 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
