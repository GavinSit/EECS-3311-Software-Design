/*
 * Code for class WEL_PRINTER_INFO_2
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1481.h"
#include <windows.h>
#include <winspool.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1342_15914
static EIF_INTEGER_32 inline_F1342_15914 (void)
{
	return sizeof(PRINTER_INFO_2);
	;
}
#define INLINE_F1342_15914
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_PRINTER_INFO_2}.structure_size */
EIF_INTEGER_32 F1342_15913 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F1342_15914();
}

/* {WEL_PRINTER_INFO_2}.c_structure_size */
EIF_INTEGER_32 F1342_15914 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F1342_15914 ();
	return Result;
}

void EIF_Minit1481 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
