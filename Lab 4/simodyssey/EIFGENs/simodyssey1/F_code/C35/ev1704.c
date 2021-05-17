/*
 * Code for class EV_ACCELERATOR_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1704.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ACCELERATOR_I}.enable_parented */
void F1711_19227 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_ACCELERATOR_I}.disable_parented */
void F1711_19228 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_ACCELERATOR_I}.actions */
EIF_REFERENCE F1711_19233 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL)) {
		tr1 = RTLNSMART(eif_new_type(996, 0).id);
		F976_4196(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_1_);
}

/* {EV_ACCELERATOR_I}.hash_code */
EIF_INTEGER_32 F1711_19241 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_0_0_0_);
	Result = F1711_19242(Current, ti4_1, *(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_), *(EIF_BOOLEAN *)(Current+ _CHROFF_3_2_), *(EIF_BOOLEAN *)(Current+ _CHROFF_3_3_));
	RTLE;
	return Result;
}

/* {EV_ACCELERATOR_I}.hash_code_function */
EIF_INTEGER_32 F1711_19242 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_BOOLEAN arg3, EIF_BOOLEAN arg4)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	Result = (EIF_INTEGER_32) arg1;
	if (arg2) {
		Result += ((EIF_INTEGER_32) 2048L);
	}
	if (arg3) {
		Result += ((EIF_INTEGER_32) 1024L);
	}
	if (arg4) {
		return (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 512L));
	}
	return Result;
}

void EIF_Minit1704 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
