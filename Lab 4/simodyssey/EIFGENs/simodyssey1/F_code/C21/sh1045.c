/*
 * Code for class SHARED_INFORMATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sh1045.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SHARED_INFORMATION}.make */
void F93_10048 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -2L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {SHARED_INFORMATION}.set_planet_threshold */
void F93_10057 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) arg1;
}

/* {SHARED_INFORMATION}.planet_increment */
void F93_10058 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_))++;
	F93_10062(Current);
	RTLE;
}

/* {SHARED_INFORMATION}.stationary_increment */
void F93_10059 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_2_))--;
	F93_10062(Current);
	RTLE;
}

/* {SHARED_INFORMATION}.reset */
void F93_10060 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -2L);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTLE;
}

/* {SHARED_INFORMATION}.entites_increment */
void F93_10062 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_3_))++;
}

void EIF_Minit1045 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
