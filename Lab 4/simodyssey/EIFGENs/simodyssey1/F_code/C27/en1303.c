/*
 * Code for class ENTITY_STAR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "en1303.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ENTITY_STAR}.make */
void F419_13474 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F416_13421(Current, arg1, arg2);
	if ((arg1 == (EIF_CHARACTER_8) '*')) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	} else {
		if ((arg1 == (EIF_CHARACTER_8) 'Y')) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		}
	}
	RTLE;
}

/* {ENTITY_STAR}.get_luminosity */
EIF_INTEGER_32 F419_13476 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_2_);
}

/* {ENTITY_STAR}.is_equal */
EIF_BOOLEAN F419_13477 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	tc2 = *(EIF_CHARACTER_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	Result = tc1 == tc2;
	RTLE;
	return Result;
}

void EIF_Minit1303 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
