/*
 * Code for class BILINEAR [POINTER]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi380.h"

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
EIF_BOOLEAN F622_2710 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\01';
	if (!F884_3333(Current)) {
		Result = F884_3332(Current);
	}
	RTLE;
	return Result;
}

/* {BILINEAR}.search */
void F622_2713 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tb1 = '\0';
	if (F884_3333(Current)) {
		tb1 = (EIF_BOOLEAN) !F739_2537(Current);
	}
	if (tb1) {
		F953_4106(Current);
	}
	F608_2604(Current, arg1);
	RTLE;
}

void EIF_Minit380 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
