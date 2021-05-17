/*
 * Code for class WEL_GDIP_RECT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we995.h"
#include "wel_gdi_plus.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F37_9100
static void inline_F37_9100 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	{
	((GpRect *)arg1)->X = (EIF_INTEGER)arg2;
}
	;
}
#define INLINE_F37_9100
#endif
#ifndef INLINE_F37_9101
static void inline_F37_9101 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	{
	((GpRect *)arg1)->Y = (EIF_INTEGER)arg2;
}
	;
}
#define INLINE_F37_9101
#endif
#ifndef INLINE_F37_9102
static void inline_F37_9102 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	{
	((GpRect *)arg1)->Width = (EIF_INTEGER)arg2;			
}
	;
}
#define INLINE_F37_9102
#endif
#ifndef INLINE_F37_9103
static void inline_F37_9103 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	{
	((GpRect *)arg1)->Height = (EIF_INTEGER)arg2;
}
	;
}
#define INLINE_F37_9103
#endif
#ifndef INLINE_F37_9104
static EIF_INTEGER_32 inline_F37_9104 (EIF_POINTER arg1)
{
	return (EIF_INTEGER_32) (((GpRect *)arg1)->X)
	;
}
#define INLINE_F37_9104
#endif
#ifndef INLINE_F37_9105
static EIF_INTEGER_32 inline_F37_9105 (EIF_POINTER arg1)
{
	return (EIF_INTEGER_32) (((GpRect *)arg1)->Y)
	;
}
#define INLINE_F37_9105
#endif
#ifndef INLINE_F37_9106
static EIF_INTEGER_32 inline_F37_9106 (EIF_POINTER arg1)
{
	return (EIF_INTEGER_32) (((GpRect *)arg1)->Width)
	;
}
#define INLINE_F37_9106
#endif
#ifndef INLINE_F37_9107
static EIF_INTEGER_32 inline_F37_9107 (EIF_POINTER arg1)
{
	return (EIF_INTEGER_32) (((GpRect *)arg1)->Height)
	;
}
#define INLINE_F37_9107
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_GDIP_RECT}.make */
void F37_9086 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1283, 1).id);
	ti4_1 = F37_9092(Current);
	F1284_4468(RTCW(tr1), ti4_1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WEL_GDIP_RECT}.make_with_size */
void F37_9087 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F37_9086(Current);
	F37_9088(Current, arg1);
	F37_9089(Current, arg2);
	F37_9090(Current, arg3);
	F37_9091(Current, arg4);
	RTLE;
}

/* {WEL_GDIP_RECT}.set_x */
void F37_9088 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = F37_9097(Current);
	inline_F37_9100(tp1, arg1);
	RTLE;
}

/* {WEL_GDIP_RECT}.set_y */
void F37_9089 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = F37_9097(Current);
	inline_F37_9101(tp1, arg1);
	RTLE;
}

/* {WEL_GDIP_RECT}.set_width */
void F37_9090 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = F37_9097(Current);
	inline_F37_9102(tp1, arg1);
	RTLE;
}

/* {WEL_GDIP_RECT}.set_height */
void F37_9091 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = F37_9097(Current);
	inline_F37_9103(tp1, arg1);
	RTLE;
}

/* {WEL_GDIP_RECT}.structure_size */
EIF_INTEGER_32 F37_9092 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) sizeof (GpRect);
}

/* {WEL_GDIP_RECT}.x */
EIF_INTEGER_32 F37_9093 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = F37_9097(Current);
	Result = inline_F37_9104(tp1);
	RTLE;
	return Result;
}

/* {WEL_GDIP_RECT}.y */
EIF_INTEGER_32 F37_9094 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = F37_9097(Current);
	Result = inline_F37_9105(tp1);
	RTLE;
	return Result;
}

/* {WEL_GDIP_RECT}.width */
EIF_INTEGER_32 F37_9095 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = F37_9097(Current);
	Result = inline_F37_9106(tp1);
	RTLE;
	return Result;
}

/* {WEL_GDIP_RECT}.height */
EIF_INTEGER_32 F37_9096 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = F37_9097(Current);
	Result = inline_F37_9107(tp1);
	RTLE;
	return Result;
}

/* {WEL_GDIP_RECT}.item */
EIF_POINTER F37_9097 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
	RTLE;
	return Result;
}

/* {WEL_GDIP_RECT}.c_size_of_gp_rect */
EIF_INTEGER_32 F37_9099 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (GpRect);
	return Result;
}

/* {WEL_GDIP_RECT}.c_set_x */
void F37_9100 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	inline_F37_9100 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
}

/* {WEL_GDIP_RECT}.c_set_y */
void F37_9101 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	inline_F37_9101 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
}

/* {WEL_GDIP_RECT}.c_set_width */
void F37_9102 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	inline_F37_9102 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
}

/* {WEL_GDIP_RECT}.c_set_height */
void F37_9103 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	inline_F37_9103 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
}

/* {WEL_GDIP_RECT}.c_x */
EIF_INTEGER_32 F37_9104 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F37_9104 ((EIF_POINTER) arg1);
	return Result;
}

/* {WEL_GDIP_RECT}.c_y */
EIF_INTEGER_32 F37_9105 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F37_9105 ((EIF_POINTER) arg1);
	return Result;
}

/* {WEL_GDIP_RECT}.c_width */
EIF_INTEGER_32 F37_9106 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F37_9106 ((EIF_POINTER) arg1);
	return Result;
}

/* {WEL_GDIP_RECT}.c_height */
EIF_INTEGER_32 F37_9107 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F37_9107 ((EIF_POINTER) arg1);
	return Result;
}

void EIF_Minit995 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
