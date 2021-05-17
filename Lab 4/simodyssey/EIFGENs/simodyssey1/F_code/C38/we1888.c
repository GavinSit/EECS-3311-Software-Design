/*
 * Code for class WEL_WINDOW_POS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1888.h"
#include <winpos.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_WINDOW_POS}.hwnd */
EIF_POINTER F1905_22298 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_POINTER) (EIF_POINTER) cwel_windowpos_get_hwnd(((WINDOWPOS*) tp1));
}

/* {WEL_WINDOW_POS}.x */
EIF_INTEGER_32 F1905_22300 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_windowpos_get_x(((WINDOWPOS*) tp1));
}

/* {WEL_WINDOW_POS}.y */
EIF_INTEGER_32 F1905_22301 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_windowpos_get_y(((WINDOWPOS*) tp1));
}

/* {WEL_WINDOW_POS}.width */
EIF_INTEGER_32 F1905_22302 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_windowpos_get_width(((WINDOWPOS*) tp1));
}

/* {WEL_WINDOW_POS}.height */
EIF_INTEGER_32 F1905_22303 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_windowpos_get_height(((WINDOWPOS*) tp1));
}

/* {WEL_WINDOW_POS}.flags */
EIF_INTEGER_32 F1905_22304 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_windowpos_get_flags(((WINDOWPOS*) tp1));
}

/* {WEL_WINDOW_POS}.set_x */
void F1905_22305 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_windowpos_set_x(((WINDOWPOS*) tp1), ((int) arg1));
}

/* {WEL_WINDOW_POS}.set_y */
void F1905_22306 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_windowpos_set_y(((WINDOWPOS*) tp1), ((int) arg1));
}

/* {WEL_WINDOW_POS}.set_width */
void F1905_22307 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_windowpos_set_width(((WINDOWPOS*) tp1), ((int) arg1));
}

/* {WEL_WINDOW_POS}.set_height */
void F1905_22308 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_windowpos_set_height(((WINDOWPOS*) tp1), ((int) arg1));
}

/* {WEL_WINDOW_POS}.set_flags */
void F1905_22309 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_windowpos_set_flags(((WINDOWPOS*) tp1), ((UINT) arg1));
}

/* {WEL_WINDOW_POS}.set_hwnd */
void F1905_22310 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_windowpos_set_hwnd(((WINDOWPOS*) tp1), ((HWND) arg1));
}

/* {WEL_WINDOW_POS}.structure_size */
static EIF_INTEGER_32 F1905_22318_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 293)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (WINDOWPOS);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1905_22318 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,293,F1905_22318_body,(Current));
}

/* {WEL_WINDOW_POS}.c_size_of_windowpos */
EIF_INTEGER_32 F1905_22319 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (WINDOWPOS);
	return Result;
}

/* {WEL_WINDOW_POS}.cwel_windowpos_set_hwnd */
void F1905_22320 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_windowpos_set_hwnd(((WINDOWPOS*) arg1), ((HWND) arg2));
}

/* {WEL_WINDOW_POS}.cwel_windowpos_set_x */
void F1905_22322 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_windowpos_set_x(((WINDOWPOS*) arg1), ((int) arg2));
}

/* {WEL_WINDOW_POS}.cwel_windowpos_set_y */
void F1905_22323 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_windowpos_set_y(((WINDOWPOS*) arg1), ((int) arg2));
}

/* {WEL_WINDOW_POS}.cwel_windowpos_set_width */
void F1905_22324 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_windowpos_set_width(((WINDOWPOS*) arg1), ((int) arg2));
}

/* {WEL_WINDOW_POS}.cwel_windowpos_set_height */
void F1905_22325 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_windowpos_set_height(((WINDOWPOS*) arg1), ((int) arg2));
}

/* {WEL_WINDOW_POS}.cwel_windowpos_set_flags */
void F1905_22326 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_windowpos_set_flags(((WINDOWPOS*) arg1), ((UINT) arg2));
}

/* {WEL_WINDOW_POS}.cwel_windowpos_get_hwnd */
EIF_POINTER F1905_22327 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_windowpos_get_hwnd(((WINDOWPOS*) arg1));
	return Result;
}

/* {WEL_WINDOW_POS}.cwel_windowpos_get_x */
EIF_INTEGER_32 F1905_22329 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_windowpos_get_x(((WINDOWPOS*) arg1));
	return Result;
}

/* {WEL_WINDOW_POS}.cwel_windowpos_get_y */
EIF_INTEGER_32 F1905_22330 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_windowpos_get_y(((WINDOWPOS*) arg1));
	return Result;
}

/* {WEL_WINDOW_POS}.cwel_windowpos_get_width */
EIF_INTEGER_32 F1905_22331 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_windowpos_get_width(((WINDOWPOS*) arg1));
	return Result;
}

/* {WEL_WINDOW_POS}.cwel_windowpos_get_height */
EIF_INTEGER_32 F1905_22332 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_windowpos_get_height(((WINDOWPOS*) arg1));
	return Result;
}

/* {WEL_WINDOW_POS}.cwel_windowpos_get_flags */
EIF_INTEGER_32 F1905_22333 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_windowpos_get_flags(((WINDOWPOS*) arg1));
	return Result;
}

void EIF_Minit1888 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
