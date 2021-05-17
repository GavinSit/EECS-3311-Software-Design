/*
 * Code for class DYNAMIC_CHAIN [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "dy566.h"

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
EIF_BOOLEAN F873_3316 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {DYNAMIC_CHAIN}.prunable */
EIF_BOOLEAN F873_3317 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {DYNAMIC_CHAIN}.prune */
void F873_3323 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2301[dtype-911])(Current, (EIF_REFERENCE) &arg1);
	if ((EIF_BOOLEAN) !F613_2608(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2263[dtype-818])(Current);
	}
	RTLE;
}

void EIF_Minit566 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
