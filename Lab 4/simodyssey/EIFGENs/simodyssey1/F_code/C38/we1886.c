/*
 * Code for class WEL_NMHDR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1886.h"
#include <nmhdr.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_NMHDR}.window_from */
EIF_REFERENCE F1903_22266 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	loc1 = (EIF_POINTER) cwel_nmhdr_get_hwndfrom(((NMHDR*) tp1));
	if ((EIF_BOOLEAN)(loc1 != loc2)) {
		RTLE;
		return (EIF_REFERENCE) F1898_22150(Current, loc1);
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {WEL_NMHDR}.code */
EIF_INTEGER_32 F1903_22268 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_nmhdr_get_code((tp1));
}

/* {WEL_NMHDR}.structure_size */
static EIF_INTEGER_32 F1903_22269_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 407)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (NMHDR);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1903_22269 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,407,F1903_22269_body,(Current));
}

/* {WEL_NMHDR}.c_size_of_nmhdr */
EIF_INTEGER_32 F1903_22270 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (NMHDR);
	return Result;
}

/* {WEL_NMHDR}.cwel_nmhdr_get_hwndfrom */
EIF_POINTER F1903_22271 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_nmhdr_get_hwndfrom(((NMHDR*) arg1));
	return Result;
}

/* {WEL_NMHDR}.cwel_nmhdr_get_code */
EIF_INTEGER_32 F1903_22273 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_nmhdr_get_code((arg1));
	return Result;
}

void EIF_Minit1886 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
