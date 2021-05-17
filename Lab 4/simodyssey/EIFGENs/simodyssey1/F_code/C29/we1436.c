/*
 * Code for class WEL_PRINTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1436.h"
#include <windows.h>
#include <winspool.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9785
static int inline_F67_9785 (EIF_POINTER arg1)
{
	return EIF_TEST(ClosePrinter((HANDLE) arg1));
	;
}
#define INLINE_F67_9785
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_PRINTER}.destroy_item */
void F1297_15110 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	if (EIF_TEST (inline_F67_9785(tp1))) {
	}
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_) = (EIF_POINTER) tp2;
	RTLE;
}

void EIF_Minit1436 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
