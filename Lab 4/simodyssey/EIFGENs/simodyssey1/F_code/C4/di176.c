/*
 * Code for class DIRECTORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "di176.h"
#include "eif_dir.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DIRECTORY}.close */
void F1289_4646 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O3469[dtype-1288]);
	eif_dir_close(tp1);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O3469[dtype-1288]) = (EIF_POINTER) tp2;
	*(EIF_INTEGER_32 *)(Current + O3475[dtype-1288]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTLE;
}

/* {DIRECTORY}.is_closed */
EIF_BOOLEAN F1289_4658 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3475[Dtype(Current)-1288]) == ((EIF_INTEGER_32) 1L));
}

/* {DIRECTORY}.dispose */
void F1289_4669 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) !F1289_4658(Current)) {
		F1289_4646(Current);
	}
	RTLE;
}

/* {DIRECTORY}.dir_close */
void F1289_4686 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_dir_close(arg1);
	
}

void EIF_Minit176 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
