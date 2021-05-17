/*
 * Code for class BILINEAR [REAL_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi442.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BILINEAR}.off */
EIF_BOOLEAN F623_2710 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\01';
	if (!F885_3333(Current)) {
		Result = F885_3332(Current);
	}
	RTLE;
	return Result;
}

/* {BILINEAR}.search */
void F623_2713 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tb1 = '\0';
	if (F885_3333(Current)) {
		tb1 = (EIF_BOOLEAN) !F741_2537(Current);
	}
	if (tb1) {
		F954_4106(Current);
	}
	F610_2604(Current, arg1);
	RTLE;
}

void EIF_Minit442 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
