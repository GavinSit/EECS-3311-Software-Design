/*
 * Code for class EV_NOTEBOOK_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1956.h"
#include <windows.h>
#include <winx.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9749
static void inline_F67_9749 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4)
	;
}
#define INLINE_F67_9749
#endif
#ifndef INLINE_F470_13514
static EIF_POINTER inline_F470_13514 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER) (rt_uint_ptr) MAKELONG(arg1, arg2);
	;
}
#define INLINE_F470_13514
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_NOTEBOOK_IMP}.make */
void F1973_24218 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1969,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 2L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_61_) = (EIF_REFERENCE) tr1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_63_23_6_11_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	F1733_19652(Current);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_63_23_6_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = RTOUCR(249,F1970_24036, (Current));
	F1930_23025(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_63_23_6_12_0_0_);
	tr2 = RTMS_EX_H("Tab",3,5529954);
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_REFERENCE)) R10485[Dtype(RTCW(tr1))-409])(tr1, tp1, tr2);
	*(EIF_POINTER *)(Current+ _PTROFF_63_23_6_12_0_2_) = (EIF_POINTER) tp1;
	F1971_24161(Current);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_63_17_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.top_level_window_imp */
EIF_REFERENCE F1973_24219 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_62_);
}


/* {EV_NOTEBOOK_IMP}.count */
EIF_INTEGER_32 F1973_24221 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	Result = F951_4094(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_NOTEBOOK_IMP}.current_page */
EIF_INTEGER_32 F1973_24222 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1930_23030(Current);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {EV_NOTEBOOK_IMP}.set_default_minimum_size */
void F1973_24227 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1973_24278(Current);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_63_23_6_11_) == ((EIF_INTEGER_32) 3L)) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_63_23_6_11_) == ((EIF_INTEGER_32) 4L)))) {
		ti4_1 = F1973_24246(Current);
		F1725_19526(Current, ti4_1, (EIF_BOOLEAN) 0);
	} else {
		ti4_1 = F1973_24246(Current);
		F1725_19525(Current, ti4_1, (EIF_BOOLEAN) 0);
	}
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.set_current_page */
void F1973_24229 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	F1930_23034(Current, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)));
}

/* {EV_NOTEBOOK_IMP}.set_insensitive */
void F1973_24230 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN)((EIF_BOOLEAN) !F1912_22467(Current) != arg1)) {
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > F1973_24221(Current))) break;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
			loc2 = F951_4079(RTCW(tr1), loc1);
			if (arg1) {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R16434[Dtype(RTCW(loc2))-1964])(loc2);
			} else {
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R16433[Dtype(RTCW(loc2))-1964])(loc2);
			}
			loc1++;
		}
	}
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.enable_sensitive */
void F1973_24231 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1973_24230(Current, (EIF_BOOLEAN) 0);
	F1970_24060(Current);
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.disable_sensitive */
void F1973_24232 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1973_24230(Current, (EIF_BOOLEAN) 1);
	F1970_24059(Current);
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.set_font */
void F1973_24233 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_37_) = (EIF_REFERENCE) arg1;
	F1973_24278(Current);
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.set_top_level_window_imp */
void F1973_24234 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_62_) = (EIF_REFERENCE) arg1;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > F1973_24221(Current))) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
		loc2 = F951_4079(RTCW(tr1), loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19735[Dtype(RTCW(loc2))-1972])(loc2, arg1);
		loc1++;
	}
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.get_child_index */
EIF_INTEGER_32 F1973_24235 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc3 = F1973_24221(Current);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 || (EIF_BOOLEAN)(Result == loc3))) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
		loc2 = F951_4079(RTCW(tr1), (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L)));
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 == loc2);
		Result++;
	}
	if ((EIF_BOOLEAN) !loc1) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTLE;
	return Result;
}

/* {EV_NOTEBOOK_IMP}.compute_minimum_width */
void F1973_24238 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc3 = F1973_24221(Current);
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
		loc1 = F951_4079(RTCW(tr1), loc2);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16402[Dtype(RTCW(loc1))-1730])(loc1);
		ti4_1 = eif_max_int32 (ti4_1,loc4);
		loc4 = (EIF_INTEGER_32) ti4_1;
		loc2++;
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_63_23_6_11_) == ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_63_23_6_11_) == ((EIF_INTEGER_32) 1L)))) {
		ti4_1 = F1973_24246(Current);
		F1725_19525(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + ti4_1) + ((EIF_INTEGER_32) 4L)), arg1);
	} else {
		F1725_19525(Current, (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 6L)), arg1);
	}
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.compute_minimum_height */
void F1973_24239 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > F1973_24221(Current))) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
		loc2 = F951_4079(RTCW(tr1), loc1);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16403[Dtype(RTCW(loc2))-1730])(loc2);
		ti4_1 = eif_max_int32 (ti4_1,loc3);
		loc3 = (EIF_INTEGER_32) ti4_1;
		loc1++;
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_63_23_6_11_) == ((EIF_INTEGER_32) 3L)) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_63_23_6_11_) == ((EIF_INTEGER_32) 4L)))) {
		ti4_1 = F1973_24246(Current);
		F1725_19526(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + ti4_1) + ((EIF_INTEGER_32) 4L)), arg1);
	} else {
		F1725_19526(Current, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 6L)), arg1);
	}
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.compute_minimum_size */
void F1973_24240 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > F1973_24221(Current))) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
		loc2 = F951_4079(RTCW(tr1), loc1);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16402[Dtype(RTCW(loc2))-1730])(loc2);
		ti4_1 = eif_max_int32 (ti4_1,loc3);
		loc3 = (EIF_INTEGER_32) ti4_1;
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16403[Dtype(RTCW(loc2))-1730])(loc2);
		ti4_1 = eif_max_int32 (ti4_1,loc4);
		loc4 = (EIF_INTEGER_32) ti4_1;
		loc1++;
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_63_23_6_11_) == ((EIF_INTEGER_32) 3L)) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_63_23_6_11_) == ((EIF_INTEGER_32) 4L)))) {
		ti4_1 = F1973_24246(Current);
		F1725_19527(Current, (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 6L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + ti4_1) + ((EIF_INTEGER_32) 4L)), arg1);
	} else {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_63_23_6_11_) == ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_63_23_6_11_) == ((EIF_INTEGER_32) 2L)))) {
			ti4_1 = F1973_24246(Current);
			F1725_19527(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + ti4_1) + ((EIF_INTEGER_32) 4L)), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 6L)), arg1);
		}
	}
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.ev_apply_new_size */
void F1973_24241 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1723_19497(Current, arg1, arg2, arg3, arg4, arg5);
	F1973_24242(Current, (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.resize_children */
void F1973_24242 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc2 = F1930_23028(Current);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > F1973_24221(Current))) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
		loc3 = F951_4079(RTCW(tr1), loc1);
		if (arg1) {
			ti4_1 = F1408_17327(RTCW(loc2));
			ti4_2 = F1408_17329(RTCW(loc2));
			ti4_3 = F1408_17332(RTCW(loc2));
			ti4_4 = F1408_17333(RTCW(loc2));
			F1723_19483(RTCW(loc3), ti4_1, ti4_2, ti4_3, ti4_4);
		} else {
			ti4_1 = F1408_17327(RTCW(loc2));
			ti4_2 = F1408_17329(RTCW(loc2));
			ti4_3 = F1408_17332(RTCW(loc2));
			ti4_4 = F1408_17333(RTCW(loc2));
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16563[Dtype(RTCW(loc3))-1871])(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_BOOLEAN)) R16318[Dtype(RTCW(loc3))-1972])(loc3, ti4_1, ti4_2, ti4_3, ti4_4, tb1);
		}
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16562[Dtype(RTCW(loc3))-1871])(loc3);
		if ((EIF_BOOLEAN) !tb1) {
			ti4_1 = F1408_17327(RTCW(loc2));
			ti4_2 = F1408_17329(RTCW(loc2));
			ti4_3 = F1408_17332(RTCW(loc2));
			ti4_4 = F1408_17333(RTCW(loc2));
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16563[Dtype(RTCW(loc3))-1871])(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_BOOLEAN)) R16324[Dtype(RTCW(loc3))-1972])(loc3, ti4_1, ti4_2, ti4_3, ti4_4, tb1);
		}
		loc1++;
	}
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.default_style */
EIF_INTEGER_32 F1973_24243 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 1073741824L) + ((EIF_INTEGER_32) 131072L)) + ((EIF_INTEGER_32) 65536L)) + ((EIF_INTEGER_32) 268435456L)) + ((EIF_INTEGER_32) 33554432L)) + ((EIF_INTEGER_32) 67108864L)) + ((EIF_INTEGER_32) 0L));
}

/* {EV_NOTEBOOK_IMP}.default_ex_style */
EIF_INTEGER_32 F1973_24244 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 65536L);
}

/* {EV_NOTEBOOK_IMP}.tab_height */
EIF_INTEGER_32 F1973_24246 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_63_23_6_11_) == ((EIF_INTEGER_32) 3L))) {
		Result = F1408_17328(RTCV(F1930_23028(Current)));
		ti4_1 = F1408_17328(RTCV(F1912_22490(Current)));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	} else {
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_63_23_6_11_) == ((EIF_INTEGER_32) 1L))) {
			Result = F1408_17326(RTCV(F1930_23028(Current)));
			ti4_1 = F1408_17326(RTCV(F1912_22490(Current)));
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
		} else {
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_63_23_6_11_) == ((EIF_INTEGER_32) 4L))) {
				Result = F1408_17331(RTCV(F1912_22490(Current)));
				ti4_1 = F1408_17331(RTCV(F1930_23028(Current)));
				Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
			} else {
				if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_63_23_6_11_) == ((EIF_INTEGER_32) 2L))) {
					Result = F1408_17330(RTCV(F1912_22490(Current)));
					ti4_1 = F1408_17330(RTCV(F1930_23028(Current)));
					Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
				} else {
					RTLE;
					return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_NOTEBOOK_IMP}.hide_current_selection */
void F1973_24247 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F1930_23031(Current);
	loc1 = RTRV(eif_new_type(1969, 0x00), loc1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = F1296_15099(RTCW(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		tp1 = *(EIF_POINTER *)(RTCW(loc1) + O12527[Dtype(loc1)-1295]);
		F1970_24159(RTCW(loc1), tp1, ((EIF_INTEGER_32) 0L));
	}
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.on_size */
void F1973_24248 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1973_24242(Current, (EIF_BOOLEAN) 1);
	F1970_24130(Current, arg1, arg2, arg3);
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.on_tcn_selchange */
void F1973_24249 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = F1930_23031(Current);
	loc1 = RTRV(eif_new_type(1969, 0x00), loc1);
	RTCT0("ww /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tp1 = *(EIF_POINTER *)(RTCW(loc1) + O12527[Dtype(loc1)-1295]);
	F1970_24159(RTCW(loc1), tp1, ((EIF_INTEGER_32) 5L));
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		tr1 = F147_10262(Current);
		F977_14409(RTCW(tr1), NULL);
	}
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.get_wm_hscroll_code */
EIF_INTEGER_32 F1973_24250 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GET_WM_HSCROLL_CODE(((WPARAM) arg1), ((LPARAM) arg2));
}

/* {EV_NOTEBOOK_IMP}.get_wm_hscroll_hwnd */
EIF_POINTER F1973_24251 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_POINTER) (EIF_POINTER) GET_WM_HSCROLL_HWND(((WPARAM) arg1), ((LPARAM) arg2));
}

/* {EV_NOTEBOOK_IMP}.get_wm_hscroll_pos */
EIF_INTEGER_32 F1973_24252 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwin_get_wm_hscroll_pos(((WPARAM) arg1), ((LPARAM) arg2));
}

/* {EV_NOTEBOOK_IMP}.get_wm_vscroll_code */
EIF_INTEGER_32 F1973_24253 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GET_WM_VSCROLL_CODE(((WPARAM) arg1), ((LPARAM) arg2));
}

/* {EV_NOTEBOOK_IMP}.get_wm_vscroll_hwnd */
EIF_POINTER F1973_24254 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_POINTER) (EIF_POINTER) GET_WM_VSCROLL_HWND(((WPARAM) arg1), ((LPARAM) arg2));
}

/* {EV_NOTEBOOK_IMP}.get_wm_vscroll_pos */
EIF_INTEGER_32 F1973_24255 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwin_get_wm_vscroll_pos(((WPARAM) arg1), ((LPARAM) arg2));
}

/* {EV_NOTEBOOK_IMP}.disable_notebook_assertions */
void F1973_24257 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_63_17_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
}

/* {EV_NOTEBOOK_IMP}.enable_notebook_assertions */
void F1973_24258 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_63_17_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_NOTEBOOK_IMP}.ev_children */
EIF_REFERENCE F1973_24260 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_61_);
}


/* {EV_NOTEBOOK_IMP}.i_th */
EIF_REFERENCE F1973_24261 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	Result = F951_4079(RTCW(Result), arg1);
	Result = F1696_18976(RTCW(Result));
	RTLE;
	return Result;
}

/* {EV_NOTEBOOK_IMP}.insert_i_th */
void F1973_24262 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,loc1);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16578[Dtype(RTCW(tr1))-1871])(tr1);
	loc3 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc3 = RTRV(eif_new_type(1969, 0x00), loc3);
	RTCT0("v_imp_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	F951_4108(RTCW(tr1), arg2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2707[Dtype(RTCW(tr1))-950])(tr1, loc3);
	loc2 = loc3;
	loc2 = RTRV(eif_new_type(1911, 0x00), loc2);
	RTCT0("wel_win_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc1 = RTLNS(eif_new_type(1899, 0x01).id, 1899, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F1900_22194(RTCW(loc1));
	tr1 = RTMS_EX_H("",0,0);
	F1900_22201(RTCW(loc1), tr1);
	F1900_22202(RTCW(loc1), loc2);
	F1973_24257(Current);
	F1930_23037(Current, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)), loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19743[Dtype(RTCW(loc3))-1972])(loc3, Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19735[Dtype(RTCW(loc3))-1972])(loc3, *(EIF_REFERENCE *)(Current + _REFACS_62_));
	if ((EIF_BOOLEAN)(F1973_24264(Current) != arg2)) {
		tp1 = *(EIF_POINTER *)(RTCW(loc3) + O12527[Dtype(loc3)-1295]);
		F1970_24159(RTCW(loc3), tp1, ((EIF_INTEGER_32) 0L));
	}
	F1973_24258(Current);
	F1725_19528(Current, ((EIF_INTEGER_32) 3L), loc3, (EIF_BOOLEAN) 0);
	tr1 = F222_11465(Current);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y16584,Y16584_gen_type,Dftype(Current),1752);
			typarr0[5] = l_type.annotations | 0xFF00;
			typarr0[6] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = arg1;
	RTAR(tr2,arg1);
	F977_14409(RTCW(tr1), tr2);
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.remove_i_th */
void F1973_24263 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTGC;
	tr1 = F1973_24261(Current, arg1);
	loc1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(1969, 0x00), loc1);
	RTCT0("v_imp_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc2 = loc1;
	loc2 = RTRV(eif_new_type(1911, 0x00), loc2);
	RTCT0("wel_win_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_59_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1631,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	tr3 = F1696_18976(RTCW(loc1));
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	F951_4108(RTCW(tr1), arg1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_61_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2263[Dtype(RTCW(tr1))-818])(tr1);
	F1973_24257(Current);
	if ((EIF_BOOLEAN)(F1973_24264(Current) == arg1)) {
		if ((EIF_BOOLEAN) (F1973_24264(Current) > ((EIF_INTEGER_32) 1L))) {
			ti4_1 = F1973_24264(Current);
			F1973_24229(Current, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
		} else {
			if ((EIF_BOOLEAN) (F1973_24221(Current) > F1973_24264(Current))) {
				ti4_1 = F1973_24264(Current);
				F1973_24229(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
			}
		}
	}
	F1930_23038(Current, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16567[Dtype(RTCW(loc1))-1871])(loc1);
	tr1 = RTOUCR(249,F1970_24036, (Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19743[Dtype(RTCW(loc1))-1972])(loc1, tr1);
	F1973_24258(Current);
	F1725_19528(Current, ((EIF_INTEGER_32) 3L), loc1, (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.selected_item_index */
EIF_INTEGER_32 F1973_24264 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F1973_24222(Current);
}

/* {EV_NOTEBOOK_IMP}.select_item */
void F1973_24265 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc2 = RTRV(eif_new_type(1969, 0x00), loc2);
	RTCT0("child_imp_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc1 = F1973_24235(Current, loc2);
	if ((EIF_BOOLEAN)(loc1 != F1973_24264(Current))) {
		F1930_23034(Current, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
	}
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.set_item_text */
void F1973_24266 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,arg2);
	RTLIU(5);
	
	RTGC;
	loc3 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc3 = RTRV(eif_new_type(1969, 0x00), loc3);
	RTCT0("item_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc2 = F1973_24235(Current, loc3);
	loc1 = RTLNS(eif_new_type(1899, 0x01).id, 1899, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F1900_22194(RTCW(loc1));
	F1900_22201(RTCW(loc1), arg2);
	F1900_22200(RTCW(loc1), ((EIF_INTEGER_32) 1L));
	F1930_23036(Current, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)), loc1);
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.set_item_pixmap */
void F1973_24268 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,arg2);
	RTLR(5,loc4);
	RTLIU(6);
	
	RTGC;
	loc3 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc3 = RTRV(eif_new_type(1969, 0x00), loc3);
	RTCT0("item_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc2 = F1973_24235(Current, loc3);
	loc1 = RTLNS(eif_new_type(1899, 0x01).id, 1899, _OBJSIZ_1_1_0_0_0_1_0_0_);
	F1900_22194(RTCW(loc1));
	F1900_22200(RTCW(loc1), ((EIF_INTEGER_32) 2L));
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		loc4 = *(EIF_REFERENCE *)(Current + _REFACS_60_);
		if ((EIF_BOOLEAN)(loc4 == NULL)) {
			loc4 = F1852_20974(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_63_23_6_5_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_63_23_6_6_));
			RTAR(Current, loc4);
			*(EIF_REFERENCE *)(Current + _REFACS_60_) = (EIF_REFERENCE) loc4;
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_63_23_6_12_0_0_);
			tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
			tp3 = *(EIF_POINTER *)(RTCW(loc4)+ _PTROFF_4_3_0_6_0_0_);
			inline_F67_9749(tp1, ((EIF_INTEGER_32) 4867L), tp2, tp3);
		}
		F1300_15156(RTCW(loc4), arg2);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc4)+ _LNGOFF_4_3_0_3_);
		F1900_22203(RTCW(loc1), ti4_1);
	} else {
		F1900_22203(RTCW(loc1), ((EIF_INTEGER_32) -1L));
	}
	F1930_23036(Current, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)), loc1);
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.item_text */
EIF_REFERENCE F1973_24271 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	loc3 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc3 = RTRV(eif_new_type(1969, 0x00), loc3);
	RTCT0("item_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc2 = F1973_24235(Current, loc3);
	loc1 = F1930_23032(Current, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L)));
	tr1 = F1900_22197(RTCW(loc1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {EV_NOTEBOOK_IMP}.on_erase_background */
void F1973_24273 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTGC;
	tb1 = F1910_22408(RTCV(F1956_23756(Current)));
	if (tb1) {
		F1912_22507(Current);
		tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 1L)));
		F214_11244(Current, tp1);
	} else {
		F1930_23050(Current, arg1, arg2);
	}
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.on_wm_theme_changed */
void F1973_24274 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER)) R10486[Dtype(RTCW(tr1))-409])(tr1, *(EIF_POINTER *)(Current+ _PTROFF_63_23_6_12_0_2_));
	F1910_22406(RTCV(F1956_23756(Current)));
	tr1 = *(EIF_REFERENCE *)(RTCV(F1956_23756(Current)) + _REFACS_41_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_63_23_6_12_0_0_);
	tr2 = RTMS_EX_H("Tab",3,5529954);
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_REFERENCE)) R10485[Dtype(RTCW(tr1))-409])(tr1, tp1, tr2);
	*(EIF_POINTER *)(Current+ _PTROFF_63_23_6_12_0_2_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {EV_NOTEBOOK_IMP}.next_tabstop_widget */
EIF_REFERENCE F1973_24275 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc4);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTGC;
	loc4 = F1973_24276(Current, arg1, arg2, arg3);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc4 == NULL)) {
		tb1 = F1912_22467(Current);
	}
	if (tb1) {
		F1716_19403(Current, arg2);
		for (;;) {
			tb1 = '\01';
			if (!F1716_19393(Current)) {
				tb1 = (EIF_BOOLEAN)(loc4 != NULL);
			}
			if (tb1) break;
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_63_23_6_3_) == F1973_24264(Current))) {
				loc1 = F1716_19388(Current);
				RTCT0("w /= Void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				loc2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
				loc2 = RTRV(eif_new_type(1969, 0x00), loc2);
				RTCT0("w_imp /= Void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				if (arg3) {
					loc4 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN)) R19758[Dtype(RTCW(loc2))-1972])(loc2, arg1, ((EIF_INTEGER_32) 1L), arg3);
				} else {
					loc3 = *(EIF_REFERENCE *)(RTCW(loc2) + O15892[Dtype(loc2)-1695]);
					loc3 = RTRV(eif_new_type(1632, 0x00), loc3);
					if ((EIF_BOOLEAN)(loc3 != NULL)) {
						ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15462[Dtype(RTCW(loc3))-1634])(loc3);
						loc4 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN)) R19758[Dtype(RTCW(loc2))-1972])(loc2, arg1, ti4_1, arg3);
					} else {
						loc4 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN)) R19758[Dtype(RTCW(loc2))-1972])(loc2, arg1, ((EIF_INTEGER_32) 1L), arg3);
					}
				}
			}
			if ((EIF_BOOLEAN)(loc4 == NULL)) {
				if (arg3) {
					F1716_19402(Current);
				} else {
					F1716_19401(Current);
				}
			}
		}
	}
	if ((EIF_BOOLEAN)(loc4 == NULL)) {
		loc4 = F1970_24151(Current, arg1, arg2, arg3);
	}
	RTCT0("l_result /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) loc4;
}

/* {EV_NOTEBOOK_IMP}.return_current_if_next_tabstop_widget */
EIF_REFERENCE F1973_24276 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(F1696_18976(Current) != arg1)) {
		tb1 = '\01';
		if (!((EIF_BOOLEAN) (arg3 && (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))))) {
			tb2 = '\0';
			if ((EIF_BOOLEAN) !arg3) {
				tb2 = (EIF_BOOLEAN) (arg2 < F1973_24264(Current));
			}
			tb1 = tb2;
		}
		if (tb1) {
			if (F1970_24152(Current)) {
				RTLE;
				return (EIF_REFERENCE) Current;
			}
		}
	} else {
		RTLE;
		return (EIF_REFERENCE) F1970_24150(Current, arg1, arg2, arg3);
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_NOTEBOOK_IMP}.internal_set_font */
void F1973_24278 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_63_23_6_11_) == ((EIF_INTEGER_32) 3L)) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_63_23_6_11_) == ((EIF_INTEGER_32) 4L)))) {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_37_) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_37_);
			loc1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
			loc1 = RTRV(eif_new_type(1885, 0x00), loc1);
			RTCT0("valid_font", EX_CHECK);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
			F1926_22912(Current, tr1);
		} else {
			F1750_19724(Current);
		}
	} else {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_63_23_6_12_0_0_);
		tp2 = (EIF_POINTER) (WPARAM)((((EIF_INTEGER_32) 0L)));
		tp3 = inline_F470_13514(((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 0L));
		inline_F67_9749(tp1, ((EIF_INTEGER_32) 48L), tp2, tp3);
	}
	F1725_19528(Current, ((EIF_INTEGER_32) 3L), Current, (EIF_BOOLEAN) 0);
	RTLE;
}

void EIF_Minit1956 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
