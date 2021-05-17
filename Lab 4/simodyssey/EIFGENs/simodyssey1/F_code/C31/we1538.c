/*
 * Code for class WEL_RGB_QUAD
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1538.h"
#include <rgbquad.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_RGB_QUAD}.make */
void F1400_17019 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	F1400_17024(Current, ((EIF_INTEGER_32) 0L));
	F1400_17025(Current, ((EIF_INTEGER_32) 0L));
	F1400_17026(Current, ((EIF_INTEGER_32) 0L));
	F1400_17027(Current, ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {WEL_RGB_QUAD}.red */
EIF_INTEGER_32 F1400_17020 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_rgb_quad_get_rgb_red((tp1));
}

/* {WEL_RGB_QUAD}.green */
EIF_INTEGER_32 F1400_17021 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_rgb_quad_get_rgb_green((tp1));
}

/* {WEL_RGB_QUAD}.blue */
EIF_INTEGER_32 F1400_17022 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_rgb_quad_get_rgb_blue((tp1));
}

/* {WEL_RGB_QUAD}.set_red */
void F1400_17024 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_rgb_quad_set_rgb_red((tp1), (arg1));
}

/* {WEL_RGB_QUAD}.set_green */
void F1400_17025 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_rgb_quad_set_rgb_green((tp1), (arg1));
}

/* {WEL_RGB_QUAD}.set_blue */
void F1400_17026 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_rgb_quad_set_rgb_blue((tp1), (arg1));
}

/* {WEL_RGB_QUAD}.set_reserved */
void F1400_17027 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_rgb_quad_set_rgb_reserved((tp1), (arg1));
}

/* {WEL_RGB_QUAD}.structure_size */
static EIF_INTEGER_32 F1400_17028_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 361)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (RGBQUAD);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1400_17028 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,361,F1400_17028_body,(Current));
}

/* {WEL_RGB_QUAD}.c_size_of_rgb_quad */
EIF_INTEGER_32 F1400_17029 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (RGBQUAD);
	return Result;
}

/* {WEL_RGB_QUAD}.cwel_rgb_quad_set_rgb_red */
void F1400_17030 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_rgb_quad_set_rgb_red((arg1), (arg2));
}

/* {WEL_RGB_QUAD}.cwel_rgb_quad_set_rgb_green */
void F1400_17031 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_rgb_quad_set_rgb_green((arg1), (arg2));
}

/* {WEL_RGB_QUAD}.cwel_rgb_quad_set_rgb_blue */
void F1400_17032 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_rgb_quad_set_rgb_blue((arg1), (arg2));
}

/* {WEL_RGB_QUAD}.cwel_rgb_quad_set_rgb_reserved */
void F1400_17033 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_rgb_quad_set_rgb_reserved((arg1), (arg2));
}

/* {WEL_RGB_QUAD}.cwel_rgb_quad_get_rgb_red */
EIF_INTEGER_32 F1400_17034 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_rgb_quad_get_rgb_red((arg1));
	return Result;
}

/* {WEL_RGB_QUAD}.cwel_rgb_quad_get_rgb_green */
EIF_INTEGER_32 F1400_17035 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_rgb_quad_get_rgb_green((arg1));
	return Result;
}

/* {WEL_RGB_QUAD}.cwel_rgb_quad_get_rgb_blue */
EIF_INTEGER_32 F1400_17036 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_rgb_quad_get_rgb_blue((arg1));
	return Result;
}

void EIF_Minit1538 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
