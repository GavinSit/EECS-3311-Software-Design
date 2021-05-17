/*
 * Code for class WEL_RICH_EDIT_FILE_LOADER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1556.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_RICH_EDIT_FILE_LOADER}.read_buffer */
void F1418_17581 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current);
	RTCT0("l_buffer_attached", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = F756_2749(RTCW(tr1));
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_0_1_0_0_);
		F1293_5162(RTCW(tr1), loc1, ((EIF_INTEGER_32) 0L), ti4_1);
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O3548[Dtype(tr1)-1289]);
		F1284_4473(RTCW(loc1), tp1, ti4_1);
	} else {
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
		F1284_4473(RTCW(loc1), tp1, ((EIF_INTEGER_32) 0L));
	}
	RTLE;
}

/* {WEL_RICH_EDIT_FILE_LOADER}.finish_action */
void F1418_17582 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1291_4988(RTCW(tr1));
	RTLE;
}

void EIF_Minit1556 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
