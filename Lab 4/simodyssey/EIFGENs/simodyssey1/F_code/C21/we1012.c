/*
 * Code for class WEL_ERROR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1012.h"
#include <windows.h>
#include <tchar.h>
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F54_9295
static EIF_POINTER inline_F54_9295 (EIF_INTEGER_32 arg1)
{
	{
LPVOID result;
FormatMessage( 
	FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
	NULL,
	arg1,
	MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), // Default language
	(LPTSTR) &result,
	0,
	NULL 
	);
return result;
}
	;
}
#define INLINE_F54_9295
#endif
#ifndef INLINE_F54_9294
static void inline_F54_9294 (EIF_POINTER arg1)
{
	LocalFree((HLOCAL) arg1);
	;
}
#define INLINE_F54_9294
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_ERROR}.last_error_code */
EIF_INTEGER_32 F54_9288 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) GetLastError();
}

/* {WEL_ERROR}.display_last_error */
void F54_9289 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	ti4_1 = F54_9288(Current);
	loc1 = F54_9290(Current, ti4_1);
	tr1 = RTMS32_EX_H("\012\000\000\000G\000\000\000e\000\000\000t\000\000\000L\000\000\000a\000\000\000s\000\000\000t\000\000\000E\000\000\000r\000\000\000r\000\000\000o\000\000\000r\000\000\000 \000\000\000r\000\000\000e\000\000\000t\000\000\000u\000\000\000r\000\000\000n\000\000\000e\000\000\000d\000\000\000 \000\000\000",23,1791164192);
	tr2 = c_outi(F54_9288(Current));
	tr1 = F1565_6940(tr1, tr2);
	tr2 = RTMS_EX_H("\012",1,10);
	tr1 = F1565_6940(RTCW(tr1), tr2);
	F1565_6938(RTCW(loc1), tr1);
	loc2 = RTLNS(eif_new_type(1258, 0x01).id, 1258, _OBJSIZ_0_0_0_3_0_0_0_0_);
	F1259_14782(RTCW(loc2));
	tr1 = RTMS_EX_H("WEL_ERROR Dialog",16,238364007);
	F1259_14783(RTCW(loc2), NULL, loc1, tr1);
	RTLE;
}

/* {WEL_ERROR}.text_for_error_code */
EIF_REFERENCE F54_9290 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	loc2 = inline_F54_9295(arg1);
	if ((EIF_BOOLEAN)(loc2 != loc3)) {
		loc1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F945_14351(RTCW(loc1), loc2);
		Result = F944_3743(RTCW(loc1));
		inline_F54_9294(loc2);
	} else {
		Result = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1558_6510(RTCW(Result));
		RTLE;
		return (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {WEL_ERROR}.reset_last_error_code */
void F54_9291 (EIF_REFERENCE Current)
{
	GTCX
	
	
	SetLastError(((DWORD) ((EIF_INTEGER_32) 0L)));
}

/* {WEL_ERROR}.cwin_set_last_error_code */
void F54_9292 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	SetLastError(((DWORD) arg1));
}

/* {WEL_ERROR}.cwin_get_last_error_code */
EIF_INTEGER_32 F54_9293 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GetLastError();
	return Result;
}

/* {WEL_ERROR}.cwin_local_free */
void F54_9294 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	inline_F54_9294 ((EIF_POINTER) arg1);
}

/* {WEL_ERROR}.cwin_error_text */
EIF_POINTER F54_9295 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F54_9295 ((EIF_INTEGER_32) arg1);
	return Result;
}

void EIF_Minit1012 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
