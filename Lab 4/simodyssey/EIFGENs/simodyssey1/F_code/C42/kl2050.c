/*
 * Code for class KL_SPECIAL_ROUTINES [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl2050.h"
#include "eif_built_in.h"

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
EIF_REFERENCE F79_9916 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
		EIF_TYPE_INDEX typarr0[] = {0xFF01,1205,0xFFF8,1,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNSP2(typres0.id,0,arg1,sizeof(EIF_BOOLEAN), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {KL_SPECIAL_ROUTINES}.to_special */
EIF_REFERENCE F79_9919 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	
	
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	return (EIF_REFERENCE) tr1;
}

/* {KL_SPECIAL_ROUTINES}.force */
void F79_9921 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	RTLIU(1);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (arg1);
	if ((EIF_BOOLEAN) (arg3 < ti4_1)) {
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_BOOLEAN *)RTCW(arg1) + (arg3)) = arg2;
		/* END INLINED CODE */
		;
	} else {
		ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (arg1);
		F1206_3104(RTCW(arg1), arg2, ti4_1, arg3);
	}
	RTLE;
}

/* {KL_SPECIAL_ROUTINES}.aliased_resized_area */
EIF_REFERENCE F79_9924 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
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
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_capacity (arg1);
	if ((EIF_BOOLEAN) (arg2 > ti4_1)) {
		tr1 = F1206_3117(arg1, arg2);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		RTLE;
		return (EIF_REFERENCE) arg1;
	}/* NOTREACHED */
	
}

void EIF_Minit2050 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
