/*
 * Code for class WEL_COMMAND_EXEC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1002.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_COMMAND_EXEC}.execute */
void F44_9188 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1810, 0x01).id, 1810, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F1811_20360(RTCW(loc1), arg1, arg2, arg3, arg4);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1));
	(RTNA((RTCW(tr1), tr2)));
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTCCL(*(EIF_REFERENCE *)(Current + _REFACS_1_));
	(RTNA((RTCW(tr1), tr2)));
	RTLE;
}

void EIF_Minit1002 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
