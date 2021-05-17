/*
 * Code for class WEL_WORD_OPERATIONS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1310.h"
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F470_13514
static EIF_POINTER inline_F470_13514 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER) (rt_uint_ptr) MAKELONG(arg1, arg2);
	;
}
#define INLINE_F470_13514
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_WORD_OPERATIONS}.cwin_lo_word */
EIF_INTEGER_32 F470_13512 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) LOWORD((arg1));
	return Result;
}

/* {WEL_WORD_OPERATIONS}.cwin_hi_word */
EIF_INTEGER_32 F470_13513 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) HIWORD((arg1));
	return Result;
}

/* {WEL_WORD_OPERATIONS}.cwin_make_long */
EIF_POINTER F470_13514 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F470_13514 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2);
	return Result;
}

void EIF_Minit1310 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
