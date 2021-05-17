/*
 * Code for class DYNAMIC_CHAIN [POINTER]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "dy386.h"

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
EIF_BOOLEAN F869_3316 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {DYNAMIC_CHAIN}.prunable */
EIF_BOOLEAN F869_3317 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {DYNAMIC_CHAIN}.prune */
void F869_3323 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F953_4110(Current, arg1);
	if ((EIF_BOOLEAN) !F608_2608(Current)) {
		F953_4127(Current);
	}
	RTLE;
}

void EIF_Minit386 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
