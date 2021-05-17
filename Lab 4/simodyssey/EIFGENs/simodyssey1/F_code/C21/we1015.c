/*
 * Code for class WEL_SCALING_EXTERNALS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1015.h"
#include <wel_scaling_api.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F57_9630
static int inline_F57_9630 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	#ifdef _MSC_VER  
	FARPROC SetProcessDpiAwareness = NULL;
	HMODULE user32_module = (HMODULE) arg1;
			
	SetProcessDpiAwareness = GetProcAddress (user32_module, "SetProcessDpiAwareness");
	if (SetProcessDpiAwareness) {
		return EIF_TEST((FUNCTION_CAST_TYPE(HRESULT, WINAPI, (PROCESS_DPI_AWARENESS)) SetProcessDpiAwareness) (arg2));
	} else {
		return EIF_FALSE;
	}
#else
	return EIF_FALSE;
#endif
	;
}
#define INLINE_F57_9630
#endif
#ifndef INLINE_F57_9631
static EIF_INTEGER_32 inline_F57_9631 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	#ifdef _MSC_VER  
	FARPROC GetProcessDpiAwareness = NULL;
	HMODULE user32_module = (HMODULE) arg1;
					
	GetProcessDpiAwareness = GetProcAddress (user32_module, "GetProcessDpiAwareness");
	if (GetProcessDpiAwareness) {
		return (FUNCTION_CAST_TYPE(HRESULT, WINAPI, (HANDLE, PROCESS_DPI_AWARENESS * )) GetProcessDpiAwareness) (arg2, arg3);
	} else {
		return 0;
	}
#else
	return 0;
#endif
	;
}
#define INLINE_F57_9631
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_SCALING_EXTERNALS}.default_create */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F57_9618 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	RTLD;
	RTXD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,saved_except);
	RTLIU(2);
	RTXSLS;
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN) !loc1) {
		F57_9619(Current);
	}
	RTE_E
	RTXSC;
	RTS_SRR
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WEL_SCALING_EXTERNALS}.initialize_scaling */
void F57_9619 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1302, 0x01).id, 1302, _OBJSIZ_0_2_0_0_0_1_0_0_);
	tr1 = RTMS_EX_H("Shcore.dll",10,2028743276);
	F1303_15187(RTCW(loc1), tr1);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_2_0_0_0_0_);
	*(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_SCALING_EXTERNALS}.is_scaling_installed */
EIF_BOOLEAN F57_9624 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_);
	Result = !tp1;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTLE;
	return Result;
}

/* {WEL_SCALING_EXTERNALS}.set_process_per_monitor_dpi_aware */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F57_9628 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_POINTER  EIF_VOLATILE tp1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTLD;
	RTXD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,saved_except);
	RTLIU(2);
	RTXSLS;
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN) !loc4) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_);
		tb1 = !tp1;
		if ((EIF_BOOLEAN) !tb1) {
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_0_0_0_0_0_);
			loc1 = EIF_TEST (inline_F57_9630(tp1, ((EIF_INTEGER_32) 2L)));
		}
	}
	RTE_E
	RTXSC;
	RTS_SRR
	loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WEL_SCALING_EXTERNALS}.c_set_process_dpi_awareness */
EIF_BOOLEAN F57_9630 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = EIF_TEST(inline_F57_9630 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2));
	return Result;
}

/* {WEL_SCALING_EXTERNALS}.c_get_process_dpi_awareness */
EIF_INTEGER_32 F57_9631 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F57_9631 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32*) arg3);
	return Result;
}

void EIF_Minit1015 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
