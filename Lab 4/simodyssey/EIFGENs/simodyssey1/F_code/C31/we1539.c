/*
 * Code for class WEL_BITMAP_INFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1539.h"
#include <wel.h>
#include <bmpinfo.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1401_17057
static EIF_NATURAL_32 inline_F1401_17057 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	union {
					RGBQUAD rgb;
					EIF_NATURAL_32 n32;
				} xconvert;
				xconvert.rgb = ((BITMAPINFO*) arg1)->bmiColors[arg2];
				return xconvert.n32;
	;
}
#define INLINE_F1401_17057
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_BITMAP_INFO}.make */
void F1401_17038 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg2;
	F1337_15830(Current);
	F1401_17044(Current, arg1);
	RTLE;
}

/* {WEL_BITMAP_INFO}.make_by_dc */
void F1401_17039 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_POINTER tp5;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	F1337_15830(Current);
	loc1 = RTLNS(eif_new_type(1402, 0x01).id, 1402, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1403_17080(RTCW(loc1));
	F1401_17044(Current, loc1);
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	tp2 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_0_3_0_3_0_0_);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp3 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp4 = tp3;
	tp5 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	GetDIBits(((HDC) tp1), ((HBITMAP) tp2), ((UINT) ((EIF_INTEGER_32) 0L)), ((UINT) ((EIF_INTEGER_32) 0L)), ((VOID *) tp4), ((BITMAPINFO *) tp5), ((UINT) arg3));
	ti4_1 = F1403_17091(RTCV(F1401_17040(Current)));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) > ((EIF_INTEGER_32) 0L))) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
		ti4_1 = F1401_17046(Current);
		tr1 = RTLNS(eif_new_type(1550, 0x00).id, 1550, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)tr1 = tp1;
		tp1 = F1519_6441(RTCW(tr1), ti4_1);
		*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) tp1;
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == tp1)) {
			tr1 = RTLNS(eif_new_type(462, 0x01).id, 462, _OBJSIZ_0_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("No more memory",14,904766585);
			F463_1400(RTCW(tr1), tr2);
		}
	}
	RTLE;
}

/* {WEL_BITMAP_INFO}.header */
EIF_REFERENCE F1401_17040 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(1402, 0x01).id, 1402, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (EIF_POINTER) cwel_bitmap_info_get_header(((BITMAPINFO*) tp1));
	F1296_15096(RTCW(Result), tp1);
	RTLE;
	return Result;
}

/* {WEL_BITMAP_INFO}.rgb_quad */
EIF_REFERENCE F1401_17042 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(1399, 0x01).id, 1399, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (EIF_POINTER) cwel_bitmap_info_get_rgb_quad((tp1), (arg1));
	F1296_15096(RTCW(Result), tp1);
	RTLE;
	return Result;
}

/* {WEL_BITMAP_INFO}.rgb_quad_natural */
EIF_NATURAL_32 F1401_17043 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	return (EIF_NATURAL_32) inline_F1401_17057(tp1, arg1);
}

/* {WEL_BITMAP_INFO}.set_bitmap_info_header */
void F1401_17044 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	cwel_bitmap_info_set_header((tp1), (tp2));
	RTLE;
}

/* {WEL_BITMAP_INFO}.structure_size */
EIF_INTEGER_32 F1401_17046 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = (EIF_INTEGER_32) sizeof (BITMAPINFO);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_);
	ti4_2 = (EIF_INTEGER_32) sizeof (RGBQUAD);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)) * ti4_2)));
	RTLE;
	return Result;
}

/* {WEL_BITMAP_INFO}.c_size_of_bitmap_info */
EIF_INTEGER_32 F1401_17048 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (BITMAPINFO);
	return Result;
}

/* {WEL_BITMAP_INFO}.c_size_of_rgb_quad */
EIF_INTEGER_32 F1401_17049 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (RGBQUAD);
	return Result;
}

/* {WEL_BITMAP_INFO}.cwel_bitmap_info_set_header */
void F1401_17051 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_bitmap_info_set_header((arg1), (arg2));
}

/* {WEL_BITMAP_INFO}.cwel_bitmap_info_get_header */
EIF_POINTER F1401_17055 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_bitmap_info_get_header(((BITMAPINFO*) arg1));
	return Result;
}

/* {WEL_BITMAP_INFO}.cwel_bitmap_info_get_rgb_quad */
EIF_POINTER F1401_17056 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_bitmap_info_get_rgb_quad((arg1), (arg2));
	return Result;
}

/* {WEL_BITMAP_INFO}.cwel_bitmap_info_get_rgb_quad_natural */
EIF_NATURAL_32 F1401_17057 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	
	
	Result = inline_F1401_17057 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	return Result;
}

/* {WEL_BITMAP_INFO}.cwin_get_di_bits */
void F1401_17058 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_POINTER arg5, EIF_POINTER arg6, EIF_INTEGER_32 arg7)
{
	GTCX
	
	
	GetDIBits(((HDC) arg1), ((HBITMAP) arg2), ((UINT) arg3), ((UINT) arg4), ((VOID *) arg5), ((BITMAPINFO *) arg6), ((UINT) arg7));
}

void EIF_Minit1539 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
