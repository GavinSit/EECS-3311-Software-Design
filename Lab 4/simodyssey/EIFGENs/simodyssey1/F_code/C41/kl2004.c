/*
 * Code for class KL_SPECIAL_ROUTINES [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl2004.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_SPECIAL_ROUTINES}.make */
EIF_REFERENCE F78_9916 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,1193,0xFFF8,1,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNSP2(typres0.id,EO_REF,arg1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {KL_SPECIAL_ROUTINES}.to_special */
EIF_REFERENCE F78_9919 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	
	
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	return (EIF_REFERENCE) tr1;
}

/* {KL_SPECIAL_ROUTINES}.force */
void F78_9921 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(arg1))-1193])(arg1);
	if ((EIF_BOOLEAN) (arg3 < ti4_1)) {
		tr1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R2572[Dtype(RTCW(arg1))-1193])(arg1, tr1, arg3);
	} else {
		tr1 = RTCCL(arg2);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2079[Dtype(RTCW(arg1))-1193])(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R2576[Dtype(RTCW(arg1))-1193])(arg1, tr1, ti4_1, arg3);
	}
	RTLE;
}

/* {KL_SPECIAL_ROUTINES}.aliased_resized_area */
EIF_REFERENCE F78_9924 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2080[Dtype(RTCW(arg1))-1193])(arg1);
	if ((EIF_BOOLEAN) (arg2 > ti4_1)) {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2589[Dtype(RTCW(arg1))-1193])(arg1, arg2);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		RTLE;
		return (EIF_REFERENCE) arg1;
	}/* NOTREACHED */
	
}

void EIF_Minit2004 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
