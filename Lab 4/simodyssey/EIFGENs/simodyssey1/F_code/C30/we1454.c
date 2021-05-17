/*
 * Code for class WEL_ACCELERATORS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1454.h"
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

/* {WEL_ACCELERATORS}.load_item */
void F1315_15478 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = (EIF_POINTER) LoadAccelerators(((HINSTANCE) arg1), ((LPCTSTR) arg2));
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_ACCELERATORS}.destroy_item */
void F1315_15479 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
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
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_) != tp1)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
		DestroyAcceleratorTable(((HACCEL) tp1));
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		tp2 = tp1;
		*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_) = (EIF_POINTER) tp2;
	}
	RTLE;
}

/* {WEL_ACCELERATORS}.cwin_load_accelerators */
EIF_POINTER F1315_15480 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) LoadAccelerators(((HINSTANCE) arg1), ((LPCTSTR) arg2));
	return Result;
}

/* {WEL_ACCELERATORS}.cwin_destroy_accelerator_table */
void F1315_15481 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	DestroyAcceleratorTable(((HACCEL) arg1));
}

void EIF_Minit1454 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
