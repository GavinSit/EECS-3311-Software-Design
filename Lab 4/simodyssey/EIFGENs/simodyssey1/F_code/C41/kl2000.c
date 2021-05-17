/*
 * Code for class KL_PATHNAME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl2000.h"
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

/* {KL_PATHNAME}.is_relative */
EIF_BOOLEAN F2017_25585 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_);
}


/* {KL_PATHNAME}.item */
EIF_REFERENCE F2017_25588 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = F919_3191(RTCW(tr1), arg1);
	RTCT0("s_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = (EIF_REFERENCE) loc1;
	RTLE;
	return Result;
}

/* {KL_PATHNAME}.drive */
EIF_REFERENCE F2017_25589 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {KL_PATHNAME}.hostname */
EIF_REFERENCE F2017_25590 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {KL_PATHNAME}.sharename */
EIF_REFERENCE F2017_25591 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {KL_PATHNAME}.count */
EIF_INTEGER_32 F2017_25592 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_1_0_0_);
}


/* {KL_PATHNAME}.copy */
void F2017_25602 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	eif_builtin_ANY_standard_copy (Current, arg1);
	tr1 = RTOUCR(222,F538_14245, (Current));
	tr1 = F1267_14962(RTCW(tr1), *(EIF_REFERENCE *)(Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit2000 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
