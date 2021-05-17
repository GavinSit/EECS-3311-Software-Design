/*
 * Code for class WEL_SHARED_MEMORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1440.h"
#include "wel.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_SHARED_MEMORY}.destroy_item */
void F1301_15173 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_2_0_0_0_1_);
	loc1 = (EIF_POINTER) GlobalFree((tp1));
	RTLE;
}

/* {WEL_SHARED_MEMORY}.global_free */
EIF_POINTER F1301_15177 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) GlobalFree((arg1));
	return Result;
}

void EIF_Minit1440 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
