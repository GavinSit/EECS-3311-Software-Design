/*
 * Code for class DYNAMIC_CHAIN [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "dy812.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DYNAMIC_CHAIN}.extendible */
EIF_BOOLEAN F879_3316 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {DYNAMIC_CHAIN}.prunable */
EIF_BOOLEAN F879_3317 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {DYNAMIC_CHAIN}.prune */
void F879_3323 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2301[dtype-911])(Current, (EIF_REFERENCE) &arg1);
	if ((EIF_BOOLEAN) !F618_2608(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2263[dtype-818])(Current);
	}
	RTLE;
}

void EIF_Minit812 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
