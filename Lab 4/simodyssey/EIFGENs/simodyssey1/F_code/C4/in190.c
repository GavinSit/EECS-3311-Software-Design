/*
 * Code for class reference INTEGER_8
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in190.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_8}.is_less */
EIF_BOOLEAN F1478_5512 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1478, 0x00).id, 1478, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_INTEGER_8 *)tr1 = arg1;
	Result = F1477_5453(Current, tr1);
	RTLE;
	return Result;
}

/* {INTEGER_8}.plus */
EIF_INTEGER_8 F1478_5513 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1478, 0x00).id, 1478, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_INTEGER_8 *)tr1 = arg1;
	tr1 = F1477_5463(Current, tr1);
	Result = *(EIF_INTEGER_8 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_8}.opposite */
EIF_INTEGER_8 F1478_5518 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return *(EIF_INTEGER_8 *)F1477_5468(Current);
}

/* {INTEGER_8}.integer_quotient */
EIF_INTEGER_8 F1478_5519 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1478, 0x00).id, 1478, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_INTEGER_8 *)tr1 = arg1;
	tr1 = F1477_5469(Current, tr1);
	Result = *(EIF_INTEGER_8 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_8}.integer_remainder */
EIF_INTEGER_8 F1478_5520 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1478, 0x00).id, 1478, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_INTEGER_8 *)tr1 = arg1;
	tr1 = F1477_5470(Current, tr1);
	Result = *(EIF_INTEGER_8 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_8}.as_natural_64 */
EIF_NATURAL_64 F1478_5525 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F1477_5479(Current);
}

/* {INTEGER_8}.as_integer_32 */
EIF_INTEGER_32 F1478_5528 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1477_5482(Current);
}

/* {INTEGER_8}.to_character_8 */
EIF_CHARACTER_8 F1478_5532 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F1477_5498(Current);
}

/* {INTEGER_8}.bit_and */
EIF_INTEGER_8 F1478_5534 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1478, 0x00).id, 1478, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_INTEGER_8 *)tr1 = arg1;
	tr1 = F1477_5500(Current, tr1);
	Result = *(EIF_INTEGER_8 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_8}.bit_or */
EIF_INTEGER_8 F1478_5535 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1478, 0x00).id, 1478, _OBJSIZ_0_1_0_0_0_0_0_0_);
	*(EIF_INTEGER_8 *)tr1 = arg1;
	tr1 = F1477_5501(Current, tr1);
	Result = *(EIF_INTEGER_8 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_8}.bit_not */
EIF_INTEGER_8 F1478_5537 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return *(EIF_INTEGER_8 *)F1477_5503(Current);
}

/* {INTEGER_8}.bit_shift_left */
EIF_INTEGER_8 F1478_5538 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return *(EIF_INTEGER_8 *)F1477_5505(Current, arg1);
}

void EIF_Minit190 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
