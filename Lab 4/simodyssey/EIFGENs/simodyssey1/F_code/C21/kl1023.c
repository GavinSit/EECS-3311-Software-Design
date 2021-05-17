/*
 * Code for class KL_ANY_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl1023.h"
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

/* {KL_ANY_ROUTINES}.same_types */
EIF_BOOLEAN F65_9687 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = RTCCL(arg2);
	Result = (EIF_BOOLEAN) eif_builtin_ANY_same_type (arg1, tr1);
	RTLE;
	return Result;
}

void EIF_Minit1023 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
