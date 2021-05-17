/*
 * Code for class BILINEAR [INTEGER_16]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi712.h"

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
EIF_BOOLEAN F629_2710 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\01';
	if (!F891_3333(Current)) {
		Result = F891_3332(Current);
	}
	RTLE;
	return Result;
}

/* {BILINEAR}.search */
void F629_2713 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tb1 = '\0';
	if (F891_3333(Current)) {
		tb1 = (EIF_BOOLEAN) !F747_2537(Current);
	}
	if (tb1) {
		F960_4106(Current);
	}
	F616_2604(Current, arg1);
	RTLE;
}

void EIF_Minit712 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
