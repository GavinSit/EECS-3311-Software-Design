/*
 * Code for class WEL_GDIP_STARTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1021.h"
#include <windows.h>
#include "wel_gdi_plus.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F63_9680
static EIF_POINTER inline_F63_9680 (void)
{
	return (EIF_POINTER) LoadLibrary (L"gdiplus.dll");
	;
}
#define INLINE_F63_9680
#endif
#ifndef INLINE_F63_9681
static EIF_POINTER inline_F63_9681 (EIF_POINTER arg1)
{
	{
				GdiplusStartupInput gdiplusStartupInput = {1, NULL, FALSE, FALSE};
		   		ULONG_PTR gdiplusToken;
			  	FARPROC GdiplusStartup = NULL;
				HMODULE user32_module = (HMODULE) arg1;
				
				GdiplusStartup = GetProcAddress (user32_module, "GdiplusStartup");
				if (GdiplusStartup) {
					(FUNCTION_CAST_TYPE(GpStatus, WINAPI, (ULONG_PTR *, const GdiplusStartupInput *,  GdiplusStartupOutput *)) GdiplusStartup)					
								(&gdiplusToken, &gdiplusStartupInput, NULL);
				}
				return (EIF_POINTER) gdiplusToken;
   			}
	;
}
#define INLINE_F63_9681
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_GDIP_STARTER}.gdi_plus_init */
static void F63_9675_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	RTLD;
	
	RTOUDV(336)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	if (F63_9679(Current)) {
		loc1 = RTOUCB(EIF_POINTER,337,F63_9678, (Current));
	}
	RTOTE;
	RTLE;
	RTEE;
#undef Result
}

void F63_9675 (EIF_REFERENCE Current)
{
	GTCX
	RTOUCP(336,F63_9675_body,(Current));
}

/* {WEL_GDIP_STARTER}.gdi_plus_handle */
static EIF_POINTER F63_9677_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_POINTER)
	RTOUDB(EIF_POINTER, 338)

	
	RTEV;
	RTOTP;
	Result = inline_F63_9680();
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_POINTER F63_9677 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_POINTER,338,F63_9677_body,(Current));
}

/* {WEL_GDIP_STARTER}.gdi_plus_token */
static EIF_POINTER F63_9678_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTLD;
	
#define Result RTOTRB(EIF_POINTER)
	RTOUDB(EIF_POINTER, 337)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	if (F63_9679(Current)) {
		tp1 = RTOUCB(EIF_POINTER,338,F63_9677, (Current));
		Result = inline_F63_9681(tp1);
	}
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_POINTER F63_9678 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_POINTER,337,F63_9678_body,(Current));
}

/* {WEL_GDIP_STARTER}.is_gdi_plus_installed */
EIF_BOOLEAN F63_9679 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = RTOUCB(EIF_POINTER,338,F63_9677, (Current));
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp3 = tp2;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tp1 != tp3);
	RTLE;
	return Result;
}

/* {WEL_GDIP_STARTER}.c_load_gdip_dll */
EIF_POINTER F63_9680 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F63_9680 ();
	return Result;
}

/* {WEL_GDIP_STARTER}.c_gdi_plus_startup */
EIF_POINTER F63_9681 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F63_9681 ((EIF_POINTER) arg1);
	return Result;
}

void EIF_Minit1021 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
