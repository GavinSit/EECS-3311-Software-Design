/*
 * Code for class WEL_COM_ISTREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1431.h"
#include <Objidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1282_15045
static void inline_F1282_15045 (EIF_POINTER arg1)
{
	{
	IStream *l_item = (IStream *)arg1;
	l_item->Release();
}
	;
}
#define INLINE_F1282_15045
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_COM_ISTREAM}.dispose */
void F1282_15040 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_1_0_0_0_0_0_) != tp1)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_0_0_0_0_0_);
		inline_F1282_15045(tp1);
	}
	RTLE;
}

/* {WEL_COM_ISTREAM}.c_release */
void F1282_15045 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	inline_F1282_15045 ((EIF_POINTER) arg1);
}

void EIF_Minit1431 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
