/*
 * Code for class ROOT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ro1345.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ROOT}.switch */
EIF_INTEGER_32 F568_14314 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
}

/* {ROOT}.add_tests */
void F568_14315 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(269, 0x01).id, 269, _OBJSIZ_7_2_0_2_0_0_0_0_ + OVERHEAD +_OBJSIZ_0_0_0_0_0_0_0_0_);
	F270_11932(RTCW(tr1));
	F268_11894(Current, tr1);
	RTLE;
}

void EIF_Minit1345 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
