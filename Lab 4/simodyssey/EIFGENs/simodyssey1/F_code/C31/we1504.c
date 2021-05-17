/*
 * Code for class WEL_OS_VERSION_INFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1504.h"
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1365_16370
static void inline_F1365_16370 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	((OSVERSIONINFO *) arg1)->dwOSVersionInfoSize = (DWORD) arg2;
	;
}
#define INLINE_F1365_16370
#endif
#ifndef INLINE_F1365_16369
static EIF_INTEGER_32 inline_F1365_16369 (void)
{
	return sizeof(OSVERSIONINFO);
	;
}
#define INLINE_F1365_16369
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_OS_VERSION_INFO}.make */
void F1365_16357 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	if (F1296_15099(Current)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
		ti4_1 = F1365_16368(Current);
		inline_F1365_16370(tp1, ti4_1);
	}
	RTLE;
}

/* {WEL_OS_VERSION_INFO}.structure_size */
EIF_INTEGER_32 F1365_16368 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) inline_F1365_16369();
}

/* {WEL_OS_VERSION_INFO}.c_structure_size */
EIF_INTEGER_32 F1365_16369 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F1365_16369 ();
	return Result;
}

/* {WEL_OS_VERSION_INFO}.c_set_struct_size */
void F1365_16370 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	inline_F1365_16370 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
}

void EIF_Minit1504 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
