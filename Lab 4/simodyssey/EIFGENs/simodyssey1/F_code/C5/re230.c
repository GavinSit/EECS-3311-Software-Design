/*
 * Code for class READABLE_STRING_GENERAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re230.h"
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

/* {READABLE_STRING_GENERAL}.make_empty */
void F1558_6510 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4642[Dtype(Current)-1560])(Current, ((EIF_INTEGER_32) 0L));
}

/* {READABLE_STRING_GENERAL}.index_of */
EIF_INTEGER_32 F1558_6513 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[dtype-1560])(Current);
	if ((EIF_BOOLEAN) (arg2 <= loc2)) {
		loc1 = (EIF_INTEGER_32) arg2;
		for (;;) {
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (loc1 > loc2)) {
				tb1 = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4645[dtype-1560])(Current, loc1) == arg1);
			}
			if (tb1) break;
			loc1++;
		}
		if ((EIF_BOOLEAN) (loc1 <= loc2)) {
			RTLE;
			return (EIF_INTEGER_32) loc1;
		}
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {READABLE_STRING_GENERAL}.index_of_code */
EIF_INTEGER_32 F1558_6515 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[dtype-1560])(Current);
	if ((EIF_BOOLEAN) (arg2 <= loc2)) {
		loc1 = (EIF_INTEGER_32) arg2;
		for (;;) {
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (loc1 > loc2)) {
				tb1 = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[dtype-1560])(Current, loc1) == arg1);
			}
			if (tb1) break;
			loc1++;
		}
		if ((EIF_BOOLEAN) (loc1 <= loc2)) {
			RTLE;
			return (EIF_INTEGER_32) loc1;
		}
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {READABLE_STRING_GENERAL}.hash_code */
EIF_INTEGER_32 F1558_6519 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = *(EIF_INTEGER_32 *)(Current + O4734[dtype-1557]);
	if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[dtype-1560])(Current);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			ti4_1 = eif_bit_shift_left(((EIF_INTEGER_32) (Result % ((EIF_INTEGER_32) 8388593L))),((EIF_INTEGER_32) 8L));
			tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4645[dtype-1560])(Current, loc1);
			ti4_2 = (EIF_INTEGER_32) (tw1);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
			loc1++;
		}
		*(EIF_INTEGER_32 *)(Current + O4734[dtype-1557]) = (EIF_INTEGER_32) Result;
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.case_insensitive_hash_code */
EIF_INTEGER_32 F1558_6520 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	Result = *(EIF_INTEGER_32 *)(Current + O4735[dtype-1557]);
	if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[dtype-1560])(Current);
		loc1 = RTOUCR(119,F1558_6601, (Current));
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 > loc3)) break;
			ti4_1 = eif_bit_shift_left(((EIF_INTEGER_32) (Result % ((EIF_INTEGER_32) 8388593L))),((EIF_INTEGER_32) 8L));
			tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4645[dtype-1560])(Current, loc2);
			tw1 = F128_229(RTCW(loc1), tw1);
			ti4_2 = (EIF_INTEGER_32) (tw1);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
			loc2++;
		}
		*(EIF_INTEGER_32 *)(Current + O4735[dtype-1557]) = (EIF_INTEGER_32) Result;
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.valid_index */
EIF_BOOLEAN F1558_6522 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
		Result = (EIF_BOOLEAN) (arg1 <= (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(Current)-1560])(Current));
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_whitespace */
EIF_BOOLEAN F1558_6528 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[dtype-1560])(Current);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4661[dtype-1560])(Current, ((EIF_INTEGER_32) 1L), ti4_1);
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.has_code */
EIF_BOOLEAN F1558_6531 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[dtype-1560])(Current);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (loc1 > loc2)) {
				tb1 = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[dtype-1560])(Current, loc1) == arg1);
			}
			if (tb1) break;
			loc1++;
		}
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 <= loc2);
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {READABLE_STRING_GENERAL}.is_real_64 */
EIF_BOOLEAN F1558_6537 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTOUCR(155,F1558_6599, (Current));
	F386_1346(RTCW(loc1), Current, ((EIF_INTEGER_32) 101L));
	tb1 = F386_1339(RTCW(loc1));
	RTLE;
	return (EIF_BOOLEAN) tb1;
}

/* {READABLE_STRING_GENERAL}.is_integer */
EIF_BOOLEAN F1558_6541 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F1558_6595(Current, ((EIF_INTEGER_32) 3L));
}

/* {READABLE_STRING_GENERAL}.is_integer_32 */
EIF_BOOLEAN F1558_6542 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F1558_6595(Current, ((EIF_INTEGER_32) 3L));
}

/* {READABLE_STRING_GENERAL}.is_integer_64 */
EIF_BOOLEAN F1558_6543 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F1558_6595(Current, ((EIF_INTEGER_32) 4L));
}

/* {READABLE_STRING_GENERAL}.is_case_insensitive_equal */
EIF_BOOLEAN F1558_6552 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(Current)-1560])(Current);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			Result = '\01';
			if (!(EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
				Result = F1558_6553(Current, arg1, ((EIF_INTEGER_32) 1L), loc1, ((EIF_INTEGER_32) 1L));
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.same_caseless_characters */
EIF_BOOLEAN F1558_6553 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 loc5 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc6 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc3 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) ((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[dtype-1560])(Current) - arg4) + ((EIF_INTEGER_32) 1L)))) {
		loc4 = RTOUCR(119,F1558_6601, (Current));
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc1 = (EIF_INTEGER_32) arg4;
		loc2 = (EIF_INTEGER_32) arg2;
		loc3 += loc1;
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == loc3)) break;
			loc5 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4645[dtype-1560])(Current, loc1);
			loc6 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4645[Dtype(RTCW(arg1))-1560])(arg1, loc2);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc5 != loc6)) {
				tw1 = F128_229(RTCW(loc4), loc5);
				tw2 = F128_229(RTCW(loc4), loc6);
				tb1 = (EIF_BOOLEAN)(tw1 != tw2);
			}
			if (tb1) {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
			}
			loc1++;
			loc2++;
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.same_string */
EIF_BOOLEAN F1558_6555 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(Current)-1560])(Current);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			Result = '\01';
			if (!(EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
				Result = F1558_6556(Current, arg1, ((EIF_INTEGER_32) 1L), loc1, ((EIF_INTEGER_32) 1L));
			}
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.same_characters */
EIF_BOOLEAN F1558_6556 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc3 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) ((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[dtype-1560])(Current) - arg4) + ((EIF_INTEGER_32) 1L)))) {
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc1 = (EIF_INTEGER_32) arg4;
		loc2 = (EIF_INTEGER_32) arg2;
		loc3 += loc1;
		for (;;) {
			if ((EIF_BOOLEAN)(loc1 == loc3)) break;
			tw1 = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4645[Dtype(RTCW(arg1))-1560])(arg1, loc2);
			if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4645[dtype-1560])(Current, loc1) != tw1)) {
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
			}
			loc1++;
			loc2++;
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.as_string_8_conversion */
EIF_REFERENCE F1558_6564 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F1558_6566(Current);
}

/* {READABLE_STRING_GENERAL}.as_string_8 */
EIF_REFERENCE F1558_6566 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	loc4 = Current;
	loc4 = RTRV(eif_new_type(1560, 0x01),loc4);
	if (EIF_TEST(loc4)) {
		RTLE;
		return (EIF_REFERENCE) loc4;
	} else {
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[dtype-1560])(Current);
		Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1559_6605(RTCW(Result), loc2);
		F1561_6779(RTCW(Result), loc2);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			loc3 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[dtype-1560])(Current, loc1);
			tb1 = F1559_6642(RTCW(Result), loc3);
			if (tb1) {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32, EIF_INTEGER_32)) R4772[Dtype(RTCW(Result))-1560])(Result, loc3, loc1);
			} else {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32, EIF_INTEGER_32)) R4772[Dtype(RTCW(Result))-1560])(Result, (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L), loc1);
			}
			loc1++;
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.as_string_32 */
EIF_REFERENCE F1558_6569 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	loc3 = Current;
	loc3 = RTRV(eif_new_type(1564, 0x01),loc3);
	if (EIF_TEST(loc3)) {
		RTLE;
		return (EIF_REFERENCE) loc3;
	} else {
		loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[dtype-1560])(Current);
		Result = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1564_6847(RTCW(Result), loc2);
		F1565_6986(RTCW(Result), loc2);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			tu4_1 = (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4644[dtype-1560])(Current, loc1);
			F1565_6926(RTCW(Result), tu4_1, loc1);
			loc1++;
		}
	}
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.to_integer */
EIF_INTEGER_32 F1558_6575 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTOUCR(156,F1558_6598, (Current));
	F387_1365(RTCW(loc1), Current, ((EIF_INTEGER_32) 0L));
	ti4_1 = F387_1370(RTCW(loc1));
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

/* {READABLE_STRING_GENERAL}.to_integer_32 */
EIF_INTEGER_32 F1558_6576 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTOUCR(156,F1558_6598, (Current));
	F387_1365(RTCW(loc1), Current, ((EIF_INTEGER_32) 0L));
	ti4_1 = F387_1370(RTCW(loc1));
	RTLE;
	return (EIF_INTEGER_32) ti4_1;
}

/* {READABLE_STRING_GENERAL}.to_integer_64 */
EIF_INTEGER_64 F1558_6577 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_64 ti8_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTOUCR(156,F1558_6598, (Current));
	F387_1365(RTCW(loc1), Current, ((EIF_INTEGER_32) 0L));
	ti8_1 = F387_1371(RTCW(loc1));
	RTLE;
	return (EIF_INTEGER_64) ti8_1;
}

/* {READABLE_STRING_GENERAL}.to_real_64 */
EIF_REAL_64 F1558_6586 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTOUCR(155,F1558_6599, (Current));
	F386_1346(RTCW(loc1), Current, ((EIF_INTEGER_32) 0L));
	tr8_1 = F386_1343(RTCW(loc1));
	RTLE;
	return (EIF_REAL_64) tr8_1;
}

/* {READABLE_STRING_GENERAL}.split */
EIF_REFERENCE F1558_6588 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	loc4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[dtype-1560])(Current);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[3] = Dftype(Current);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		loc1 = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F951_4073(RTCW(loc1), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)));
	if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc2 > loc4)) break;
			loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_32, EIF_INTEGER_32)) R4646[dtype-1560])(Current, arg1, loc2);
			if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
				loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
			}
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4722[dtype-1560])(Current, loc2, (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(loc1))-818])(loc1, tr1);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
		}
		if ((EIF_BOOLEAN)(loc3 == loc4)) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4726[dtype-1560])(Current, ((EIF_INTEGER_32) 0L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(loc1))-818])(loc1, tr1);
		}
	} else {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4726[dtype-1560])(Current, ((EIF_INTEGER_32) 0L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(loc1))-818])(loc1, tr1);
	}
	Result = (EIF_REFERENCE) loc1;
	RTLE;
	return Result;
}

/* {READABLE_STRING_GENERAL}.is_valid_integer_or_natural */
EIF_BOOLEAN F1558_6595 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTOUCR(156,F1558_6598, (Current));
	F387_1357(RTCW(loc1), arg1);
	F387_1365(RTCW(loc1), Current, arg1);
	tb1 = F387_1364(RTCW(loc1));
	RTLE;
	return (EIF_BOOLEAN) tb1;
}

/* {READABLE_STRING_GENERAL}.c_string_provider */
static EIF_REFERENCE F1558_6597_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(157)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(547, 0x01).id, 547, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F548_1895(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1558_6597 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(157,F1558_6597_body,(Current));
}

/* {READABLE_STRING_GENERAL}.ctoi_convertor */
static EIF_REFERENCE F1558_6598_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(156)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(386, 0x01).id, 386, _OBJSIZ_2_3_0_3_0_0_2_0_);
	F387_1356(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H(" ",1,32);
	F384_1301(RTCW(Result), tr1);
	tr1 = RTMS_EX_H(" ",1,32);
	F384_1302(RTCW(Result), tr1);
	F384_1300(RTCW(Result), (EIF_BOOLEAN) 1);
	F384_1299(RTCW(Result), (EIF_BOOLEAN) 1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1558_6598 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(156,F1558_6598_body,(Current));
}

/* {READABLE_STRING_GENERAL}.ctor_convertor */
static EIF_REFERENCE F1558_6599_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(155)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(385, 0x01).id, 385, _OBJSIZ_2_6_0_4_0_0_0_3_);
	F386_1333(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	tr1 = RTMS_EX_H(" ",1,32);
	F384_1301(RTCW(Result), tr1);
	tr1 = RTMS_EX_H(" ",1,32);
	F384_1302(RTCW(Result), tr1);
	F384_1300(RTCW(Result), (EIF_BOOLEAN) 1);
	F384_1299(RTCW(Result), (EIF_BOOLEAN) 1);
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1558_6599 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(155,F1558_6599_body,(Current));
}

/* {READABLE_STRING_GENERAL}.character_properties */
static EIF_REFERENCE F1558_6601_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(119)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(127, 0x01).id, 127, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1558_6601 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(119,F1558_6601_body,(Current));
}

void EIF_Minit230 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
