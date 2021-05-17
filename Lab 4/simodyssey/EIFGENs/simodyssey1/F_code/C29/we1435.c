/*
 * Code for class WEL_ANY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1435.h"
#include <wel.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_ANY}.make_by_pointer */
void F1296_15096 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_POINTER *)(Current + O12527[dtype-1295]) = (EIF_POINTER) arg1;
	*(EIF_BOOLEAN *)(Current + O12528[dtype-1295]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {WEL_ANY}.item */
EIF_POINTER F1296_15097 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
}


/* {WEL_ANY}.shared */
EIF_BOOLEAN F1296_15098 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O12528[Dtype(Current)-1295]);
}


/* {WEL_ANY}.exists */
EIF_BOOLEAN F1296_15099 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp3 = tp2;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tp1 != tp3);
	RTLE;
	return Result;
}

/* {WEL_ANY}.set_item */
void F1296_15100 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	*(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]) = (EIF_POINTER) arg1;
}

/* {WEL_ANY}.set_shared */
void F1296_15101 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O12528[Dtype(Current)-1295]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {WEL_ANY}.set_unshared */
void F1296_15102 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current + O12528[Dtype(Current)-1295]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {WEL_ANY}.dispose */
void F1296_15104 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tb1 = '\0';
	if (F1296_15099(Current)) {
		tb1 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O12528[dtype-1295]);
	}
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R12534[dtype-1296])(Current);
	}
	RTLE;
}

/* {WEL_ANY}.cwel_integer_to_pointer */
EIF_POINTER F1296_15106 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_integer_to_pointer(((EIF_INTEGER) arg1));
	return Result;
}

void EIF_Minit1435 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
