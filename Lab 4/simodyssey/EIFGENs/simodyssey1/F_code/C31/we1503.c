/*
 * Code for class WEL_NM_HEADER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1503.h"
#include "wel.h"
#include <commctrl.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_NM_HEADER}.make_by_nmhdr */
void F1364_16346 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	F1296_15096(Current, tp1);
	RTLE;
}

/* {WEL_NM_HEADER}.iitem */
EIF_INTEGER_32 F1364_16348 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((NMHEADER *)tp1)->iItem);
}

/* {WEL_NM_HEADER}.structure_size */
static EIF_INTEGER_32 F1364_16351_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 466)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (NMHEADER);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1364_16351 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,466,F1364_16351_body,(Current));
}

/* {WEL_NM_HEADER}.c_size_of_nm_header */
EIF_INTEGER_32 F1364_16352 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (NMHEADER);
	return Result;
}

/* {WEL_NM_HEADER}.cwel_nmheader_get_iitem */
EIF_INTEGER_32 F1364_16354 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((NMHEADER *)arg1)->iItem);
	
	return Result;
}

void EIF_Minit1503 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
