/*
 * Code for class WEL_GDIP_ANY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1464.h"
#include "wel_gdi_plus.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1325_15655
static void inline_F1325_15655 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	{
	static FARPROC GdipFree = NULL;
	if (!GdipFree) {
		GdipFree = GetProcAddress ((HMODULE)arg1, "GdipFree");
	}
	if (GdipFree) {
		(FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (void *)) GdipFree) ((void *) arg2);
	}
}
	;
}
#define INLINE_F1325_15655
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_GDIP_ANY}.default_create */
void F1325_15650 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1325_15651(Current);
}

/* {WEL_GDIP_ANY}.initialize_gdi_plus */
void F1325_15651 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = RTOUCB(EIF_POINTER,338,F63_9677, (RTCV(RTOUCR(474,F1325_15656, (Current)))));
	*(EIF_POINTER *)(Current + O13039[Dtype(Current)-1324]) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_GDIP_ANY}.destroy_item */
void F1325_15654 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O13039[dtype-1324]) != loc1)) {
		tp1 = *(EIF_POINTER *)(Current + O13039[dtype-1324]);
		tp2 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		inline_F1325_15655(tp1, tp2);
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		tp2 = tp1;
		*(EIF_POINTER *)(Current + O12527[dtype-1295]) = (EIF_POINTER) tp2;
	}
	RTLE;
}

/* {WEL_GDIP_ANY}.c_gdip_free */
void F1325_15655 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	inline_F1325_15655 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
}

/* {WEL_GDIP_ANY}.gdi_plus_starter */
static EIF_REFERENCE F1325_15656_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(474)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(62, 0x01).id, 62, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	tb1 = F63_9679(RTCW(Result));
	if (tb1) {
		RTOUCP(336,F63_9675, (RTCW(Result)));
	}
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1325_15656 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(474,F1325_15656_body,(Current));
}

void EIF_Minit1464 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
