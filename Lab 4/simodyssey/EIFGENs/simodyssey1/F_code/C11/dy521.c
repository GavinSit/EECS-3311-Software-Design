/*
 * Code for class DYNAMIC_CHAIN [CHARACTER_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "dy521.h"

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
EIF_BOOLEAN F872_3316 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {DYNAMIC_CHAIN}.prunable */
EIF_BOOLEAN F872_3317 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {DYNAMIC_CHAIN}.prune */
void F872_3323 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F956_4110(Current, arg1);
	if ((EIF_BOOLEAN) !F612_2608(Current)) {
		F956_4127(Current);
	}
	RTLE;
}

void EIF_Minit521 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
