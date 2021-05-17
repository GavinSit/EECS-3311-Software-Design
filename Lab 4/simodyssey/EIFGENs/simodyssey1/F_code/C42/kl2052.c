/*
 * Code for class KL_ARRAY_ROUTINES [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl2052.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_ARRAY_ROUTINES}.cloned_array */
EIF_REFERENCE F1269_14962 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	
	
	tr1 = F1_14(arg1);
	return (EIF_REFERENCE) tr1;
}

/* {KL_ARRAY_ROUTINES}.subcopy */
void F1269_14963 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN) (arg3 <= arg4)) {
		F925_3215(RTCW(arg1), arg2, arg3, arg4, arg5);
	}
	RTLE;
}

void EIF_Minit2052 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
