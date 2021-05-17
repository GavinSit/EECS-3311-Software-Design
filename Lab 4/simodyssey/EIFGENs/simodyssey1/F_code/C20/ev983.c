/*
 * Code for class EV_POS_INFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev983.h"
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

/* {EV_POS_INFO}.resize */
void F25_8965 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F25_8968(Current, arg1);
	F25_8969(Current, arg2);
	RTLE;
}

/* {EV_POS_INFO}.move */
void F25_8966 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_4_0_0_) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_4_0_1_) = (EIF_INTEGER_32) arg2;
	RTLE;
}

/* {EV_POS_INFO}.move_and_resize */
void F25_8967 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F25_8966(Current, arg1, arg2);
	F25_8965(Current, arg3, arg4);
	RTLE;
}

/* {EV_POS_INFO}.set_width */
void F25_8968 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	ti4_1 = eif_max_int32 (arg1,*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_4_0_4_));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_4_0_2_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {EV_POS_INFO}.set_height */
void F25_8969 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	ti4_1 = eif_max_int32 (arg1,*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_4_0_5_));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_4_0_3_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {EV_POS_INFO}.set_user_minimum_width */
void F25_8970 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_4_0_4_) = (EIF_INTEGER_32) arg1;
	RTLE;
}

/* {EV_POS_INFO}.set_user_minimum_height */
void F25_8971 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_4_0_5_) = (EIF_INTEGER_32) arg1;
	RTLE;
}

/* {EV_POS_INFO}.set_minimum_width */
void F25_8972 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_4_0_4_) = (EIF_INTEGER_32) arg1;
	}
	RTLE;
}

/* {EV_POS_INFO}.set_minimum_height */
void F25_8973 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_4_0_5_) = (EIF_INTEGER_32) arg1;
	}
	RTLE;
}

/* {EV_POS_INFO}.set_is_positioned */
void F25_8974 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_POS_INFO}.disable_user_min_width_set */
void F25_8975 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_POS_INFO}.disable_user_min_height_set */
void F25_8976 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

void EIF_Minit983 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
