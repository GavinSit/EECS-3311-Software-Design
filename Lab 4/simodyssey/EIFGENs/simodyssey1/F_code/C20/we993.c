/*
 * Code for class WEL_BITMAP_HELPER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we993.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_BITMAP_HELPER}.half_tone_brush */
EIF_REFERENCE F35_9060 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,loc1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	loc2 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1559_6605(RTCW(loc2), ((EIF_INTEGER_32) 16L));
	F1561_6710(RTCW(loc2));
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 16L))) break;
		tc1 = (EIF_CHARACTER_8) ((EIF_INTEGER_32) 170L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2255[Dtype(RTCW(loc2))-918])(loc2, (EIF_REFERENCE) &tc1, (EIF_REFERENCE) &loc3);
		tc1 = (EIF_CHARACTER_8) ((EIF_INTEGER_32) 85L);
		ti4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2255[Dtype(RTCW(loc2))-918])(loc2, (EIF_REFERENCE) &tc1, (EIF_REFERENCE) &ti4_1);
		loc3 += ((EIF_INTEGER_32) 4L);
	}
	loc1 = RTLNS(eif_new_type(1319, 0x01).id, 1319, _OBJSIZ_0_3_0_3_0_2_0_0_);
	F1320_15570(RTCW(loc1), ((EIF_INTEGER_32) 8L), ((EIF_INTEGER_32) 8L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L), loc2);
	Result = RTLNS(eif_new_type(1320, 0x01).id, 1320, _OBJSIZ_0_2_0_3_0_1_0_0_);
	F1321_15592(RTCW(Result), loc1);
	F519_14213(RTCW(loc1));
	RTLE;
	return Result;
}

void EIF_Minit993 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
