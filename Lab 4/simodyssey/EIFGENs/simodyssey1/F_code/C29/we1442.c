/*
 * Code for class WEL_DLL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1442.h"
#include <windows.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9788
static EIF_POINTER inline_F67_9788 (EIF_POINTER arg1)
{
	return (EIF_POINTER) LoadLibrary ((LPCTSTR) arg1);
	;
}
#define INLINE_F67_9788
#endif
#ifndef INLINE_F67_9789
static int inline_F67_9789 (EIF_POINTER arg1)
{
	return (BOOL) FreeLibrary ((HMODULE) arg1);
	;
}
#define INLINE_F67_9789
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_DLL}.make */
void F1303_15186 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F944_3738(RTCW(loc1), arg1);
	tp1 = F944_3745(RTCW(loc1));
	tp1 = inline_F67_9788(tp1);
	*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_0_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_DLL}.make_permanent */
void F1303_15187 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(547, 0x01).id, 547, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F548_1894(RTCW(loc1), arg1);
	tp1 = F548_1913(RTCW(loc1));
	tp1 = (EIF_POINTER) eif_load_dll(((char *) tp1));
	*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_0_0_0_) = (EIF_POINTER) tp1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {WEL_DLL}.destroy_item */
void F1303_15191 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_2_0_0_0_0_);
		loc2 = EIF_TEST (inline_F67_9789(tp1));
	}
	*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_0_0_0_) = (EIF_POINTER) loc1;
	RTLE;
}

/* {WEL_DLL}.cwin_permanent_load_library */
EIF_POINTER F1303_15193 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) eif_load_dll(((char *) arg1));
	return Result;
}

void EIF_Minit1442 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
