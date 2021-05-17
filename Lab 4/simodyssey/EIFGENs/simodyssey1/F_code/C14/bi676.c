/*
 * Code for class BILINEAR [INTEGER_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi676.h"

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
EIF_BOOLEAN F628_2710 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\01';
	if (!F890_3333(Current)) {
		Result = F890_3332(Current);
	}
	RTLE;
	return Result;
}

/* {BILINEAR}.search */
void F628_2713 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tb1 = '\0';
	if (F890_3333(Current)) {
		tb1 = (EIF_BOOLEAN) !F746_2537(Current);
	}
	if (tb1) {
		F959_4106(Current);
	}
	F615_2604(Current, arg1);
	RTLE;
}

void EIF_Minit676 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
