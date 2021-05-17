/*
 * Code for class WEL_REGION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1461.h"
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

/* {WEL_REGION}.make_empty */
void F1322_15602 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = (EIF_POINTER) CreateRectRgn(((int) ((EIF_INTEGER_32) 0L)), ((int) ((EIF_INTEGER_32) 0L)), ((int) ((EIF_INTEGER_32) 0L)), ((int) ((EIF_INTEGER_32) 0L)));
	*(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]) = (EIF_POINTER) tp1;
	{
		/* INLINED CODE (WEL_GDI_ANY.gdi_make) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {WEL_REGION}.make_rect */
void F1322_15607 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = (EIF_POINTER) CreateRectRgn(((int) arg1), ((int) arg2), ((int) arg3), ((int) arg4));
	*(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]) = (EIF_POINTER) tp1;
	{
		/* INLINED CODE (WEL_GDI_ANY.gdi_make) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {WEL_REGION}.make_rect_indirect */
void F1322_15608 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) CreateRectRgnIndirect(((RECT *) tp1));
	*(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]) = (EIF_POINTER) tp1;
	{
		/* INLINED CODE (WEL_GDI_ANY.gdi_make) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {WEL_REGION}.is_equal */
EIF_BOOLEAN F1322_15609 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	Result = (EIF_BOOLEAN) EIF_TEST(EqualRgn(((HRGN) tp1), ((HRGN) tp2)));
	RTLE;
	return Result;
}

/* {WEL_REGION}.combine */
EIF_REFERENCE F1322_15610 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNS(eif_new_type(1321, 0x01).id, 1321, _OBJSIZ_0_2_0_3_0_1_0_0_);
	F1322_15602(RTCW(Result));
	tp1 = *(EIF_POINTER *)(RTCW(Result) + O12527[Dtype(Result)-1295]);
	tp2 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	tp3 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	CombineRgn(((HRGN) tp1), ((HRGN) tp2), ((HRGN) tp3), ((int) arg2));
	RTLE;
	return Result;
}

/* {WEL_REGION}.cwin_create_rect_rgn */
EIF_POINTER F1322_15619 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) CreateRectRgn(((int) arg1), ((int) arg2), ((int) arg3), ((int) arg4));
	return Result;
}

/* {WEL_REGION}.cwin_create_rect_rgn_indirect */
EIF_POINTER F1322_15620 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) CreateRectRgnIndirect(((RECT *) arg1));
	return Result;
}

/* {WEL_REGION}.cwin_equal_rgn */
EIF_BOOLEAN F1322_15621 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(EqualRgn(((HRGN) arg1), ((HRGN) arg2)));
	return Result;
}

/* {WEL_REGION}.cwin_combine_rgn */
void F1322_15622 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	
	
	CombineRgn(((HRGN) arg1), ((HRGN) arg2), ((HRGN) arg3), ((int) arg4));
}

void EIF_Minit1461 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
