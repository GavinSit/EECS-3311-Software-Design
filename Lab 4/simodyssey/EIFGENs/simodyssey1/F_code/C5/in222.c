/*
 * Code for class INTEGER_16
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in222.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_16}.is_less */
EIF_BOOLEAN F1512_6307 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
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
	tr1 = RTLNS(eif_new_type(1511, 0x00).id, 1511, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_INTEGER_16 *)tr1 = arg1;
	Result = F1510_6248(Current, tr1);
	RTLE;
	return Result;
}

/* {INTEGER_16}.plus */
EIF_INTEGER_16 F1512_6308 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1511, 0x00).id, 1511, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_INTEGER_16 *)tr1 = arg1;
	tr1 = F1510_6258(Current, tr1);
	Result = *(EIF_INTEGER_16 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_16}.opposite */
EIF_INTEGER_16 F1512_6313 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return *(EIF_INTEGER_16 *)F1510_6263(Current);
}

/* {INTEGER_16}.integer_quotient */
EIF_INTEGER_16 F1512_6314 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1511, 0x00).id, 1511, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_INTEGER_16 *)tr1 = arg1;
	tr1 = F1510_6264(Current, tr1);
	Result = *(EIF_INTEGER_16 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_16}.integer_remainder */
EIF_INTEGER_16 F1512_6315 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1511, 0x00).id, 1511, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_INTEGER_16 *)tr1 = arg1;
	tr1 = F1510_6265(Current, tr1);
	Result = *(EIF_INTEGER_16 *)(tr1);
	RTLE;
	return Result;
}

/* {INTEGER_16}.as_natural_64 */
EIF_NATURAL_64 F1512_6320 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F1510_6274(Current);
}

/* {INTEGER_16}.as_integer_32 */
EIF_INTEGER_32 F1512_6323 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1510_6277(Current);
}

/* {INTEGER_16}.to_character_8 */
EIF_CHARACTER_8 F1512_6327 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F1510_6293(Current);
}

/* {INTEGER_16}.bit_and */
EIF_INTEGER_16 F1512_6329 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1511, 0x00).id, 1511, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_INTEGER_16 *)tr1 = arg1;
	tr1 = F1510_6295(Current, tr1);
	Result = *(EIF_INTEGER_16 *)(tr1);
	RTLE;
	return Result;
}

void EIF_Minit222 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
