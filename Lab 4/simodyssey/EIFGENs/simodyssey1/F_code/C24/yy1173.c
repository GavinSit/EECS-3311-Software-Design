/*
 * Code for class YY_FILE_BUFFER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "yy1173.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {YY_FILE_BUFFER}.make */
void F256_11773 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	ti4_1 = RTOUCB(EIF_INTEGER_32,193,F255_11770, (Current));
	F256_11774(Current, arg1, ti4_1);
	RTLE;
}

/* {YY_FILE_BUFFER}.make_with_size */
void F256_11774 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) arg2;
	tr1 = F255_11768(Current, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	F256_11778(Current, arg1);
	RTLE;
}

/* {YY_FILE_BUFFER}.set_file */
void F256_11778 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	F256_11779(Current, arg1, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_));
}

/* {YY_FILE_BUFFER}.set_file_with_size */
void F256_11779 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R10525[Dtype(RTCW(arg1))-1274])(arg1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_) = (EIF_BOOLEAN) tb1;
	F255_11764(Current);
	if ((EIF_BOOLEAN) (arg2 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_))) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) arg2;
		tr1 = *(EIF_REFERENCE *)(Current);
		F1280_15030(RTCW(tr1), (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L)));
	}
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTLE;
}

/* {YY_FILE_BUFFER}.fill */
void F256_11782 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_))) {
		F255_11766(Current);
		loc3 = *(EIF_REFERENCE *)(Current);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ti4_1);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R10519[Dtype(RTCW(tr1))-1274])(tr1);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R10525[Dtype(RTCW(tr1))-1274])(tr1);
			if ((EIF_BOOLEAN) !tb1) {
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_))++;
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R10528[Dtype(RTCW(tr1))-1274])(tr1));
				ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_);
				F1280_15024(RTCW(loc3), tc1, ti4_1);
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		} else {
			loc2 = F1280_15027(RTCW(loc3), *(EIF_REFERENCE *)(Current + _REFACS_1_), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) + ((EIF_INTEGER_32) 1L)), loc1);
			if ((EIF_BOOLEAN) (loc2 < loc1)) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R10525[Dtype(RTCW(tr1))-1274])(tr1);
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_) = (EIF_BOOLEAN) tb1;
			}
			if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_)) += loc2;
		}
		F1280_15024(RTCW(loc3), (EIF_CHARACTER_8) '\000', (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) + ((EIF_INTEGER_32) 1L)));
		F1280_15024(RTCW(loc3), (EIF_CHARACTER_8) '\000', (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) + ((EIF_INTEGER_32) 2L)));
	} else {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

void EIF_Minit1173 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
