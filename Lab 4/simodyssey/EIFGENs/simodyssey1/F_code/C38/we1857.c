/*
 * Code for class WEL_SYSTEM_PARAMETERS_INFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1857.h"
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

/* {WEL_SYSTEM_PARAMETERS_INFO}.has_flat_menu */
EIF_BOOLEAN F1874_21498 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (F500_14106(Current)) {
		loc2 = (EIF_BOOLEAN) EIF_TEST(SystemParametersInfo((((EIF_INTEGER_32) 4130L)), (((EIF_INTEGER_32) 0L)), ((EIF_INTEGER_32 *) &(loc1)), (((EIF_INTEGER_32) 0L))));
		if (loc2) {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L));
		}
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {WEL_SYSTEM_PARAMETERS_INFO}.has_drag_full_windows */
EIF_BOOLEAN F1874_21499 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tb1 = '\01';
	if (!(EIF_BOOLEAN) !F500_14093(Current)) {
		tb1 = F1874_21500(Current);
	}
	if (tb1) {
		loc2 = (EIF_BOOLEAN) EIF_TEST(SystemParametersInfo((((EIF_INTEGER_32) 38L)), (((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32 *) &(loc1)), (((EIF_INTEGER_32) 0L))));
		if (loc2) {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L));
		}
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {WEL_SYSTEM_PARAMETERS_INFO}.has_windows95_plus */
EIF_BOOLEAN F1874_21500 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (F500_14093(Current)) {
		loc1 = (EIF_BOOLEAN) EIF_TEST(SystemParametersInfo((((EIF_INTEGER_32) 92L)), (((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32 *) &(loc2)), (((EIF_INTEGER_32) 0L))));
		if (loc1) {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L));
		}
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {WEL_SYSTEM_PARAMETERS_INFO}.get_non_client_metrics */
EIF_REFERENCE F1874_21501 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTLNS(eif_new_type(1383, 0x01).id, 1383, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1384_16662(RTCW(Result));
	ti4_1 = RTOUCB(EIF_INTEGER_32,312,F1384_16678, (RTCW(Result)));
	tp1 = *(EIF_POINTER *)(RTCW(Result)+ _PTROFF_0_1_0_0_0_0_);
	loc1 = (EIF_BOOLEAN) EIF_TEST(SystemParametersInfo((((EIF_INTEGER_32) 41L)), (ti4_1), (tp1), (((EIF_INTEGER_32) 0L))));
	RTLE;
	return Result;
}

/* {WEL_SYSTEM_PARAMETERS_INFO}.c_system_parameters_info */
EIF_BOOLEAN F1874_21504 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(SystemParametersInfo((arg1), (arg2), (arg3), (arg4)));
	return Result;
}

void EIF_Minit1857 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
