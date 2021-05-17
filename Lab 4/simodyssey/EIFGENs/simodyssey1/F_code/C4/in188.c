/*
 * Code for class INTEGER_8_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in188.h"
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

/* {INTEGER_8_REF}.hash_code */
EIF_INTEGER_32 F1477_5446 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_INTEGER_32) ti1_1;
	Result = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (Result)));
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.is_less */
EIF_BOOLEAN F1477_5453 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	ti1_2 = *(EIF_INTEGER_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti1_1 < ti1_2);
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.is_equal */
EIF_BOOLEAN F1477_5454 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	ti1_2 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti1_1 == ti1_2);
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.set_item */
void F1477_5455 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_) = (EIF_INTEGER_8) arg1;
}

/* {INTEGER_8_REF}.plus */
EIF_REFERENCE F1477_5463 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	ti1_1 = *(EIF_INTEGER_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	F1477_5455(RTCW(Result), (EIF_INTEGER_8) (*(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_) + ti1_1));
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.opposite */
EIF_REFERENCE F1477_5468 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	F1477_5455(RTCW(Result), (EIF_INTEGER_8) -*(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_));
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.integer_quotient */
EIF_REFERENCE F1477_5469 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	ti1_1 = *(EIF_INTEGER_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	F1477_5455(RTCW(Result), (EIF_INTEGER_8) (*(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_) / ti1_1));
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.integer_remainder */
EIF_REFERENCE F1477_5470 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	ti1_1 = *(EIF_INTEGER_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	F1477_5455(RTCW(Result), (EIF_INTEGER_8) (*(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_) % ti1_1));
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.as_natural_64 */
EIF_NATURAL_64 F1477_5479 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_NATURAL_64) ti1_1;
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.as_integer_32 */
EIF_INTEGER_32 F1477_5482 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_INTEGER_32) ti1_1;
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.to_natural_64 */
EIF_NATURAL_64 F1477_5487 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) (FUNCTION_CAST(EIF_NATURAL_64, (EIF_REFERENCE)) R4040[Dtype(Current)-1476])(Current);
}

/* {INTEGER_8_REF}.to_integer */
EIF_INTEGER_32 F1477_5490 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4043[Dtype(Current)-1476])(Current);
}

/* {INTEGER_8_REF}.to_integer_32 */
EIF_INTEGER_32 F1477_5491 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4043[Dtype(Current)-1476])(Current);
}

/* {INTEGER_8_REF}.to_character_8 */
EIF_CHARACTER_8 F1477_5498 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_CHARACTER_8) ti1_1;
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.bit_and */
EIF_REFERENCE F1477_5500 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	ti1_2 = *(EIF_INTEGER_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	ti1_1 = eif_bit_and(ti1_1,ti1_2);
	F1477_5455(RTCW(Result), ti1_1);
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.bit_or */
EIF_REFERENCE F1477_5501 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	ti1_2 = *(EIF_INTEGER_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	ti1_1 = eif_bit_or(ti1_1,ti1_2);
	F1477_5455(RTCW(Result), ti1_1);
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.bit_not */
EIF_REFERENCE F1477_5503 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	ti1_1 = eif_bit_not(ti1_1);
	F1477_5455(RTCW(Result), ti1_1);
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.bit_shift_left */
EIF_REFERENCE F1477_5505 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNSMART(Dftype(Current));
	F1_29(RTCW(Result));
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	ti1_1 = eif_bit_shift_left(ti1_1,arg1);
	F1477_5455(RTCW(Result), ti1_1);
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.bit_test */
EIF_BOOLEAN F1477_5507 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
	ti1_2 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 1L);
	ti1_2 = eif_bit_shift_left(ti1_2,arg1);
	ti1_1 = eif_bit_and(ti1_1,ti1_2);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti1_1 != (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L));
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.set_bit */
EIF_INTEGER_8 F1477_5508 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (arg1) {
		ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
		ti1_2 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 1L);
		ti1_2 = eif_bit_shift_left(ti1_2,arg2);
		Result = eif_bit_or(ti1_1,ti1_2);
	} else {
		ti1_1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_);
		ti1_2 = (EIF_INTEGER_8) ((EIF_INTEGER_32) 1L);
		ti1_2 = eif_bit_shift_left(ti1_2,arg2);
		ti1_2 = eif_bit_not(ti1_2);
		Result = eif_bit_and(ti1_1,ti1_2);
	}
	RTLE;
	return Result;
}

/* {INTEGER_8_REF}.out */
EIF_REFERENCE F1477_5510 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1559_6605(RTCW(Result), ((EIF_INTEGER_32) 4L));
	F1561_6736(RTCW(Result), *(EIF_INTEGER_8 *)(Current+ _CHROFF_0_0_));
	RTLE;
	return Result;
}

void EIF_Minit188 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
