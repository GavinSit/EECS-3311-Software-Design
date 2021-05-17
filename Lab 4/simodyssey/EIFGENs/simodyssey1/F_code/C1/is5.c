/*
 * Code for class ISE_SCOOP_RUNTIME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "is5.h"
#include "eif_macros.h"
#include "eif_scoop.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F106_45
static EIF_NATURAL_16 inline_F106_45 (EIF_POINTER arg1)
{
	return RTS_PID(arg1)
	;
}
#define INLINE_F106_45
#endif
#ifndef INLINE_F106_46
static void inline_F106_46 (EIF_NATURAL_16 arg1)
{
	eif_scoop_set_is_impersonation_allowed (arg1, EIF_FALSE)
	;
}
#define INLINE_F106_46
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ISE_SCOOP_RUNTIME}.pin_to_thread */
void F106_43 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_16 tu2_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu2_1 = inline_F106_45(Current);
	inline_F106_46(tu2_1);
	RTLE;
}

/* {ISE_SCOOP_RUNTIME}.c_region_id */
EIF_NATURAL_16 F106_45 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	
	
	Result = inline_F106_45 ((EIF_POINTER) arg1);
	return Result;
}

/* {ISE_SCOOP_RUNTIME}.c_disable_impersonation */
void F106_46 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	
	
	inline_F106_46 ((EIF_NATURAL_16) arg1);
}

void EIF_Minit5 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
