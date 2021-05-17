/*
 * Code for class NATURAL_16_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na215.h"
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

/* {NATURAL_16_REF}.hash_code */
EIF_INTEGER_32 F1504_6055 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_INTEGER_32) tu2_1;
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.is_less */
EIF_BOOLEAN F1504_6062 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = *(EIF_NATURAL_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu2_1 < tu2_2);
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.is_equal */
EIF_BOOLEAN F1504_6063 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tu2_1 = *(EIF_NATURAL_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	tu2_2 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu2_1 == tu2_2);
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.set_item */
void F1504_6064 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	
	
	*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) = (EIF_NATURAL_16) arg1;
}

/* {NATURAL_16_REF}.plus */
EIF_REFERENCE F1504_6071 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
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
	tu2_1 = *(EIF_NATURAL_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	F1504_6064(RTCW(Result), (EIF_NATURAL_16) (*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) + tu2_1));
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.integer_quotient */
EIF_REFERENCE F1504_6077 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
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
	tu2_1 = *(EIF_NATURAL_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	F1504_6064(RTCW(Result), (EIF_NATURAL_16) (*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) / tu2_1));
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.integer_remainder */
EIF_REFERENCE F1504_6078 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
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
	tu2_1 = *(EIF_NATURAL_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	F1504_6064(RTCW(Result), (EIF_NATURAL_16) (*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) % tu2_1));
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.as_natural_8 */
EIF_NATURAL_8 F1504_6084 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_NATURAL_8) tu2_1;
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.as_natural_32 */
EIF_NATURAL_32 F1504_6086 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_NATURAL_32) tu2_1;
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.as_natural_64 */
EIF_NATURAL_64 F1504_6087 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_NATURAL_64) tu2_1;
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.as_integer_32 */
EIF_INTEGER_32 F1504_6090 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_INTEGER_32) tu2_1;
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.to_natural_32 */
EIF_NATURAL_32 F1504_6094 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_32) (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R4391[Dtype(Current)-1503])(Current);
}

/* {NATURAL_16_REF}.to_natural_64 */
EIF_NATURAL_64 F1504_6095 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) (FUNCTION_CAST(EIF_NATURAL_64, (EIF_REFERENCE)) R4392[Dtype(Current)-1503])(Current);
}

/* {NATURAL_16_REF}.to_integer_32 */
EIF_INTEGER_32 F1504_6098 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4395[Dtype(Current)-1503])(Current);
}

/* {NATURAL_16_REF}.to_hex_string */
EIF_REFERENCE F1504_6102 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) / ((EIF_INTEGER_32) 4L));
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1559_6606(RTCW(Result), (EIF_CHARACTER_8) '0', loc1);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	loc2 = (EIF_INTEGER_32) tu2_1;
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		ti4_1 = eif_bit_and(loc2,((EIF_INTEGER_32) 15L));
		tr1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = ti4_1;
		tc1 = F1507_6196(RTCW(tr1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2255[Dtype(RTCW(Result))-918])(Result, (EIF_REFERENCE) &tc1, (EIF_REFERENCE) &loc1);
		ti4_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 4L));
		loc2 = (EIF_INTEGER_32) ti4_1;
		loc1--;
	}
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.to_character_8 */
EIF_CHARACTER_8 F1504_6105 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_CHARACTER_8) tu2_1;
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.to_character_32 */
EIF_CHARACTER_32 F1504_6106 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_CHARACTER_32) tu2_1;
	RTLE;
	return Result;
}

/* {NATURAL_16_REF}.out */
EIF_REFERENCE F1504_6117 (EIF_REFERENCE Current)
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
	F1559_6605(RTCW(Result), ((EIF_INTEGER_32) 5L));
	F1561_6740(RTCW(Result), *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_));
	RTLE;
	return Result;
}

void EIF_Minit215 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
