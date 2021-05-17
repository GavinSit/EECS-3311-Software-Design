/*
 * Code for class WEL_BITMAP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1459.h"
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

/* {WEL_BITMAP}.make_compatible */
void F1320_15566 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	tp1 = (EIF_POINTER) CreateCompatibleBitmap(((HDC) tp1), ((int) arg2), ((int) arg3));
	*(EIF_POINTER *)(Current+ _PTROFF_0_3_0_3_0_0_) = (EIF_POINTER) tp1;
	{
		/* INLINED CODE (WEL_GDI_ANY.gdi_make) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {WEL_BITMAP}.make_by_dib */
void F1320_15567 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg2) + _REFACS_1_);
	tp2 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) CBM_INIT;
	tp3 = F1402_17066(RTCW(arg2));
	tp4 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_2_1_0_1_0_0_);
	tp1 = (EIF_POINTER) CreateDIBitmap(((HDC) tp1), ((BITMAPINFOHEADER *) tp2), ((DWORD) ti4_1), ((void *) tp3), ((BITMAPINFO *) tp4), ((UINT) arg3));
	*(EIF_POINTER *)(Current+ _PTROFF_0_3_0_3_0_0_) = (EIF_POINTER) tp1;
	{
		/* INLINED CODE (WEL_GDI_ANY.gdi_make) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {WEL_BITMAP}.make_by_bitmap */
void F1320_15568 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_3_0_3_0_0_);
	ti4_1 = F1320_15572(RTCW(arg1));
	ti4_2 = F1320_15573(RTCW(arg1));
	tp1 = (EIF_POINTER) CopyImage(((HANDLE) tp1), ((UINT) ((EIF_INTEGER_32) 0L)), ((int) ti4_1), ((int) ti4_2), ((UINT) ((EIF_INTEGER_32) 0L)));
	*(EIF_POINTER *)(Current+ _PTROFF_0_3_0_3_0_0_) = (EIF_POINTER) tp1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	tb1 = '\01';
	tb2 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_0_2_);
	if (!tb2) {
		tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_3_0_3_0_1_);
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp2 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		tb1 = (EIF_BOOLEAN)(tp1 != tp2);
	}
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_0_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	{
		/* INLINED CODE (WEL_GDI_ANY.gdi_make) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {WEL_BITMAP}.make_direct */
void F1320_15570 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg5);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(547, 0x01).id, 547, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F548_1894(RTCW(loc1), arg5);
	tp1 = F548_1913(RTCW(loc1));
	tp1 = (EIF_POINTER) CreateBitmap(((int) arg1), ((int) arg2), ((UINT) arg3), ((UINT) arg4), ((CONST VOID *) tp1));
	*(EIF_POINTER *)(Current+ _PTROFF_0_3_0_3_0_0_) = (EIF_POINTER) tp1;
	{
		/* INLINED CODE (WEL_GDI_ANY.gdi_make) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {WEL_BITMAP}.width */
EIF_INTEGER_32 F1320_15572 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1380_16601(RTCV(F1320_15574(Current)));
	RTLE;
	return Result;
}

/* {WEL_BITMAP}.height */
EIF_INTEGER_32 F1320_15573 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1380_16602(RTCV(F1320_15574(Current)));
	RTLE;
	return Result;
}

/* {WEL_BITMAP}.log_bitmap */
EIF_REFERENCE F1320_15574 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1379, 0x01).id, 1379, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1380_16599(RTCW(tr1), Current);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {WEL_BITMAP}.load_item */
void F1320_15578 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = (EIF_POINTER) LoadBitmap(((HINSTANCE) arg1), ((LPCTSTR) arg2));
	*(EIF_POINTER *)(Current+ _PTROFF_0_3_0_3_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_BITMAP}.cwin_create_compatible_bitmap */
EIF_POINTER F1320_15579 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) CreateCompatibleBitmap(((HDC) arg1), ((int) arg2), ((int) arg3));
	return Result;
}

/* {WEL_BITMAP}.cwin_create_di_bitmap */
EIF_POINTER F1320_15580 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_POINTER arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) CreateDIBitmap(((HDC) arg1), ((BITMAPINFOHEADER *) arg2), ((DWORD) arg3), ((void *) arg4), ((BITMAPINFO *) arg5), ((UINT) arg6));
	return Result;
}

/* {WEL_BITMAP}.cwin_load_bitmap */
EIF_POINTER F1320_15583 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) LoadBitmap(((HINSTANCE) arg1), ((LPCTSTR) arg2));
	return Result;
}

/* {WEL_BITMAP}.cwin_copy_image */
EIF_POINTER F1320_15584 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) CopyImage(((HANDLE) arg1), ((UINT) arg2), ((int) arg3), ((int) arg4), ((UINT) arg5));
	return Result;
}

/* {WEL_BITMAP}.cwin_create_bitmap */
EIF_POINTER F1320_15586 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_POINTER arg5)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) CreateBitmap(((int) arg1), ((int) arg2), ((UINT) arg3), ((UINT) arg4), ((CONST VOID *) arg5));
	return Result;
}

/* {WEL_BITMAP}.cbm_init */
EIF_INTEGER_32 F1320_15588 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) CBM_INIT;
	return Result;
}

void EIF_Minit1459 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
