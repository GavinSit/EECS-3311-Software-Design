/*
 * Code for class NATURAL_16
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na216.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NATURAL_16}.is_less */
EIF_BOOLEAN F1506_6118 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
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
	tr1 = RTLNS(eif_new_type(1505, 0x00).id, 1505, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_NATURAL_16 *)tr1 = arg1;
	Result = F1504_6062(Current, tr1);
	RTLE;
	return Result;
}

/* {NATURAL_16}.plus */
EIF_NATURAL_16 F1506_6119 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1505, 0x00).id, 1505, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_NATURAL_16 *)tr1 = arg1;
	tr1 = F1504_6071(Current, tr1);
	Result = *(EIF_NATURAL_16 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_16}.integer_quotient */
EIF_NATURAL_16 F1506_6124 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1505, 0x00).id, 1505, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_NATURAL_16 *)tr1 = arg1;
	tr1 = F1504_6077(Current, tr1);
	Result = *(EIF_NATURAL_16 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_16}.integer_remainder */
EIF_NATURAL_16 F1506_6125 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1505, 0x00).id, 1505, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_NATURAL_16 *)tr1 = arg1;
	tr1 = F1504_6078(Current, tr1);
	Result = *(EIF_NATURAL_16 *)(tr1);
	RTLE;
	return Result;
}

/* {NATURAL_16}.as_natural_8 */
EIF_NATURAL_8 F1506_6127 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_8) F1504_6084(Current);
}

/* {NATURAL_16}.as_natural_32 */
EIF_NATURAL_32 F1506_6129 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_32) F1504_6086(Current);
}

/* {NATURAL_16}.as_natural_64 */
EIF_NATURAL_64 F1506_6130 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_NATURAL_64) F1504_6087(Current);
}

/* {NATURAL_16}.as_integer_32 */
EIF_INTEGER_32 F1506_6133 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1504_6090(Current);
}

/* {NATURAL_16}.to_character_8 */
EIF_CHARACTER_8 F1506_6137 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_8) F1504_6105(Current);
}

/* {NATURAL_16}.to_character_32 */
EIF_CHARACTER_32 F1506_6138 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_CHARACTER_32) F1504_6106(Current);
}

void EIF_Minit216 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
