/*
 * Code for class WEL_NM_CUSTOM_DRAW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1527.h"
#include <commctrl.h>
#include "commctrl.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_NM_CUSTOM_DRAW}.dwdrawstage */
EIF_INTEGER_32 F1389_16807 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((NMCUSTOMDRAW *)tp1)->dwDrawStage);
}

/* {WEL_NM_CUSTOM_DRAW}.hdc */
EIF_REFERENCE F1389_16808 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	loc1 = (EIF_POINTER) (((NMCUSTOMDRAW *)tp1)->hdc);
	tr1 = RTLNS(eif_new_type(1311, 0x01).id, 1311, _OBJSIZ_7_2_0_3_0_8_0_0_);
	F1296_15096(RTCW(tr1), loc1);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {WEL_NM_CUSTOM_DRAW}.structure_size */
static EIF_INTEGER_32 F1389_16813_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 412)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (NMCUSTOMDRAW);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1389_16813 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,412,F1389_16813_body,(Current));
}

/* {WEL_NM_CUSTOM_DRAW}.c_size_of_nm_customdraw */
EIF_INTEGER_32 F1389_16814 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (NMCUSTOMDRAW);
	return Result;
}

/* {WEL_NM_CUSTOM_DRAW}.cwel_nm_customdraw_get_dwdrawstage */
EIF_INTEGER_32 F1389_16816 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((NMCUSTOMDRAW *)arg1)->dwDrawStage);
	
	return Result;
}

/* {WEL_NM_CUSTOM_DRAW}.cwel_nm_customdraw_get_hdc */
EIF_POINTER F1389_16817 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) (((NMCUSTOMDRAW *)arg1)->hdc);
	
	return Result;
}

void EIF_Minit1527 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
