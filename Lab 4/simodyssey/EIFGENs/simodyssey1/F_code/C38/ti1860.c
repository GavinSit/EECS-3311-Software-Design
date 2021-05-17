/*
 * Code for class TIME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ti1860.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TIME}.make */
void F1877_21517 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F330_12885(Current, arg1);
	F330_12886(Current, arg2);
	F330_12887(Current, arg3);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) tr8_1;
	RTLE;
}

/* {TIME}.make_fine */
void F1877_21518 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REAL_64 arg3)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) arg3;
	F1877_21517(Current, arg1, arg2, loc1);
	tr8_1 = (EIF_REAL_64) (loc1);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) (EIF_REAL_64) (arg3 - tr8_1);
	RTLE;
}

/* {TIME}.make_now */
void F1877_21519 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(86, 0x01).id, 86, _OBJSIZ_1_1_0_1_0_0_0_0_);
	F87_9957(RTCW(loc1));
	ti4_1 = F87_9964(RTCW(loc1));
	ti4_2 = F87_9965(RTCW(loc1));
	ti4_3 = F87_9966(RTCW(loc1));
	F1877_21517(Current, ti4_1, ti4_2, ti4_3);
	ti4_1 = F87_9967(RTCW(loc1));
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (ti4_1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 1000L)));
	RTLE;
}

/* {TIME}.is_less */
EIF_BOOLEAN F1877_21527 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	loc2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	Result = '\01';
	if (!((EIF_BOOLEAN) (loc1 < loc2))) {
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc1 == loc2)) {
			tb2 = '\0';
			tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_1_0_0_0_0_);
			if ((EIF_BOOLEAN) eif_is_less_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_), tr8_1)) {
				tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_0_0_0_1_0_0_0_0_);
				tb2 = (EIF_BOOLEAN) eif_is_greater_real_64 ((EIF_REAL_64) (tr8_1 - *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_)), (EIF_REAL_64) 1.0e-10);
			}
			tb1 = tb2;
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {TIME}.out */
EIF_REFERENCE F1877_21544 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = F328_12866(Current);
	Result = F1877_21545(Current, tr1);
	RTLE;
	return Result;
}

/* {TIME}.formatted_out */
EIF_REFERENCE F1877_21545 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1834, 0x01).id, 1834, _OBJSIZ_4_2_0_1_0_0_0_0_);
	F1835_20690(RTCW(tr1), arg1);
	Result = F1835_20703(RTCW(tr1), Current);
	RTLE;
	return Result;
}

void EIF_Minit1860 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
