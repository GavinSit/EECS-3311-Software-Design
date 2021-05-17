/*
 * Code for class WEL_MSG_FILTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1511.h"
#include <msgfilter.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_MSG_FILTER}.make_from_nmhdr */
void F1373_16508 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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

/* {WEL_MSG_FILTER}.structure_size */
static EIF_INTEGER_32 F1373_16512_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 451)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (MSGFILTER);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1373_16512 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,451,F1373_16512_body,(Current));
}

/* {WEL_MSG_FILTER}.c_size_of_msgfilter */
EIF_INTEGER_32 F1373_16513 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (MSGFILTER);
	return Result;
}

void EIF_Minit1511 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
