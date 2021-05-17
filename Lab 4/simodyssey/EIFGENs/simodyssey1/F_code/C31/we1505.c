/*
 * Code for class WEL_DLG_TEMPLATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1505.h"
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_DLG_TEMPLATE}.make_with_global_alloc */
void F1366_16375 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	ti4_1 = RTOUCB(EIF_INTEGER_32,457,F1366_16393, (Current));
	tp1 = (EIF_POINTER) GlobalAlloc(((UINT) ((EIF_INTEGER_32) 64L)), ((size_t) ti4_1));
	*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_0_0_0_) = (EIF_POINTER) tp1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_0_0_0_) == tp1)) {
		tr1 = RTLNS(eif_new_type(462, 0x01).id, 462, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("No more memory",14,904766585);
		F463_1400(RTCW(tr1), tr2);
	}
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {WEL_DLG_TEMPLATE}.set_style */
void F1366_16383 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_2_0_0_0_0_);
		(((DLGTEMPLATE *)tp1)->style = (DWORD)(arg1));
	} else {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_2_0_0_0_0_);
		tp1 = (EIF_POINTER) GlobalLock(((HGLOBAL) tp1));
		(((DLGTEMPLATE *)tp1)->style = (DWORD)(arg1));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_2_0_0_0_0_);
		(void) GlobalUnlock(((HGLOBAL) tp1));
	}
	RTLE;
}

/* {WEL_DLG_TEMPLATE}.destroy_item */
void F1366_16392 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_)) {
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_0_0_0_) != tp1)) {
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_2_0_0_0_0_);
			tp1 = (EIF_POINTER) GlobalFree(((HGLOBAL) tp1));
			*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_0_0_0_) = (EIF_POINTER) tp1;
		}
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		tp2 = tp1;
		*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_0_0_0_) = (EIF_POINTER) tp2;
	} else {
		F1337_15837(Current);
	}
	RTLE;
}

/* {WEL_DLG_TEMPLATE}.structure_size */
static EIF_INTEGER_32 F1366_16393_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 457)

	
	RTEV;
	RTGC;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (DLGTEMPLATE);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1024L));
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1366_16393 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,457,F1366_16393_body,(Current));
}

/* {WEL_DLG_TEMPLATE}.cwin_global_alloc */
EIF_POINTER F1366_16395 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) GlobalAlloc(((UINT) arg1), ((size_t) arg2));
	return Result;
}

/* {WEL_DLG_TEMPLATE}.cwin_global_free */
EIF_POINTER F1366_16396 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) GlobalFree(((HGLOBAL) arg1));
	return Result;
}

/* {WEL_DLG_TEMPLATE}.cwin_global_lock */
EIF_POINTER F1366_16397 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) GlobalLock(((HGLOBAL) arg1));
	return Result;
}

/* {WEL_DLG_TEMPLATE}.cwin_global_unlock */
void F1366_16398 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	(void) GlobalUnlock(((HGLOBAL) arg1));
}

/* {WEL_DLG_TEMPLATE}.c_size_of_dlgtemplate */
EIF_INTEGER_32 F1366_16399 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (DLGTEMPLATE);
	return Result;
}

/* {WEL_DLG_TEMPLATE}.cwel_dlgtemplate_set_style */
void F1366_16407 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((DLGTEMPLATE *)arg1)->style = (DWORD)(arg2));
	
}

void EIF_Minit1505 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
