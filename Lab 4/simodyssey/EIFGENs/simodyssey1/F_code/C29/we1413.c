/*
 * Code for class WEL_BIT_OPERATIONS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1413.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_BIT_OPERATIONS}.set_flag */
EIF_INTEGER_32 F1258_14779 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	
	
	ti4_1 = eif_bit_or(arg1,arg2);
	return (EIF_INTEGER_32) ti4_1;
}

/* {WEL_BIT_OPERATIONS}.clear_flag */
EIF_INTEGER_32 F1258_14780 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	ti4_1 = eif_bit_not(arg2);
	Result = eif_bit_and(arg1,ti4_1);
	return Result;
}

/* {WEL_BIT_OPERATIONS}.flag_set */
EIF_BOOLEAN F1258_14781 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	RTGC;
	ti4_1 = eif_bit_and(arg1,arg2);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg2);
	return Result;
}

void EIF_Minit1413 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
