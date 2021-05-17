/*
 * Code for class WEL_BLEND_FUNCTION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1517.h"
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_BLEND_FUNCTION}.make */
void F1379_16577 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	F1379_16582(Current, ((EIF_INTEGER_32) 0L));
	F1379_16584(Current, ((EIF_INTEGER_32) 0L));
	F1379_16586(Current, ((EIF_INTEGER_32) 255L));
	F1379_16588(Current, ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {WEL_BLEND_FUNCTION}.structure_size */
EIF_INTEGER_32 F1379_16580 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) sizeof (BLENDFUNCTION);
}

/* {WEL_BLEND_FUNCTION}.set_blend_op */
void F1379_16582 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	(((BLENDFUNCTION *)tp1)->BlendOp = (BYTE)(arg1));
}

/* {WEL_BLEND_FUNCTION}.set_blend_flags */
void F1379_16584 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	(((BLENDFUNCTION *)tp1)->BlendFlags = (BYTE)(arg1));
}

/* {WEL_BLEND_FUNCTION}.set_source_constant_alpha */
void F1379_16586 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	(((BLENDFUNCTION *)tp1)->SourceConstantAlpha = (BYTE)(arg1));
}

/* {WEL_BLEND_FUNCTION}.set_alpha_format */
void F1379_16588 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	(((BLENDFUNCTION *)tp1)->AlphaFormat = (BYTE)(arg1));
}

/* {WEL_BLEND_FUNCTION}.c_size_of_blend_function */
EIF_INTEGER_32 F1379_16589 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (BLENDFUNCTION);
	return Result;
}

/* {WEL_BLEND_FUNCTION}.c_set_blend_op */
void F1379_16590 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((BLENDFUNCTION *)arg1)->BlendOp = (BYTE)(arg2));
	
}

/* {WEL_BLEND_FUNCTION}.c_set_blend_flags */
void F1379_16592 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((BLENDFUNCTION *)arg1)->BlendFlags = (BYTE)(arg2));
	
}

/* {WEL_BLEND_FUNCTION}.c_set_source_constant_alpha */
void F1379_16594 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((BLENDFUNCTION *)arg1)->SourceConstantAlpha = (BYTE)(arg2));
	
}

/* {WEL_BLEND_FUNCTION}.c_set_alpha_format */
void F1379_16596 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((BLENDFUNCTION *)arg1)->AlphaFormat = (BYTE)(arg2));
	
}

void EIF_Minit1517 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
