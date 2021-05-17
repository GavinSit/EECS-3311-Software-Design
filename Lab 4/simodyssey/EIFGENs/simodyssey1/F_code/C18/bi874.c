/*
 * Code for class BILINEAR [NATURAL_64]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi874.h"

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
EIF_BOOLEAN F633_2710 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\01';
	if (!F895_3333(Current)) {
		Result = F895_3332(Current);
	}
	RTLE;
	return Result;
}

/* {BILINEAR}.search */
void F633_2713 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tb1 = '\0';
	if (F895_3333(Current)) {
		tb1 = (EIF_BOOLEAN) !F750_2537(Current);
	}
	if (tb1) {
		F964_4106(Current);
	}
	F619_2604(Current, arg1);
	RTLE;
}

void EIF_Minit874 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
