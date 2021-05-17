/*
 * Code for class ACTIVE_INTEGER_INTERVAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ac150.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ACTIVE_INTEGER_INTERVAL}.extend */
void F851_3177 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	F851_3178(Current, arg1);
}

/* {ACTIVE_INTEGER_INTERVAL}.put */
void F851_3178 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 < ti4_1) || (EIF_BOOLEAN) (arg1 > ti4_2));
	F850_3156(Current, arg1);
	if (loc1) {
		F851_3183(Current);
	}
	RTLE;
}

/* {ACTIVE_INTEGER_INTERVAL}.resize */
void F851_3179 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 != arg1) || (EIF_BOOLEAN)(ti4_2 != arg2));
	F850_3157(Current, arg1, arg2);
	if (loc1) {
		F851_3183(Current);
	}
	RTLE;
}

/* {ACTIVE_INTEGER_INTERVAL}.copy */
void F851_3181 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		F850_3165(Current, arg1);
		F851_3183(Current);
	}
	RTLE;
}

/* {ACTIVE_INTEGER_INTERVAL}.change_actions */
EIF_REFERENCE F851_3182 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(Result == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,975,0xFF01,0xFFF9,0,1475,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 975, _OBJSIZ_9_2_0_2_0_0_0_0_);
		}
		F976_4196(RTCW(Result));
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {ACTIVE_INTEGER_INTERVAL}.on_change */
void F851_3183 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,1475,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 1, 1);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(loc1)-975])(loc1, tr1);
	}
	RTLE;
}

void EIF_Minit150 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
