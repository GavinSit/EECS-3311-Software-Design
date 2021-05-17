/*
 * Code for class WEL_WINDOWS_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1881.h"
#include <windows.h>
#include "windows.h"
#include <wel_windows_routines.h>
#include <wel.h>
#include "wel.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1898_22182
static void inline_F1898_22182 (EIF_POINTER* arg1)
{
	{
	FARPROC get_console_window_proc = NULL;
	HMODULE kernel32_module = LoadLibrary (L"kernel32.dll");
	if (kernel32_module) {
		get_console_window_proc = GetProcAddress (kernel32_module, "GetConsoleWindow");
		if (get_console_window_proc) {
			*arg1 = (FUNCTION_CAST_TYPE(HWND,WINAPI,(void)) get_console_window_proc) ();
		}
	}
}
	;
}
#define INLINE_F1898_22182
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_WINDOWS_ROUTINES}.is_window */
EIF_BOOLEAN F1898_22149 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(IsWindow(((HWND) arg1)));
	return Result;
}

/* {WEL_WINDOWS_ROUTINES}.window_of_item */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_REFERENCE F1898_22150 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTED;
	EIF_POINTER EIF_VOLATILE loc1 = (EIF_POINTER) 0;
	EIF_POINTER EIF_VOLATILE loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc5 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN EIF_VOLATILE loc6 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_POINTER  EIF_VOLATILE tp1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	RTXD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,saved_except);
	RTLIU(3);
	RTXSLS;
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN) !loc6) {
		loc1 = (EIF_POINTER) GetWindowLongPtr(((HWND) arg1), ((int) ((EIF_INTEGER_32) -21L)));
		if ((EIF_BOOLEAN)(loc1 != loc2)) {
			loc3 = (EIF_INTEGER_32) GetWindowThreadProcessId(((HWND) arg1), ((LPDWORD) (EIF_INTEGER_32 *) &(loc5)));
			loc4 = (EIF_INTEGER_32) GetCurrentProcessId();
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc5 == loc4)) {
				tb1 = (EIF_BOOLEAN)(loc1 != RTOUCB(EIF_POINTER,374,F1898_22181, (Current)));
			}
			if (tb1) {
				loc7 = (EIF_INTEGER_32) (rt_int_ptr) loc1;
				Result = F1827_20473(Current, loc7);
				tb1 = '\0';
				if ((EIF_BOOLEAN)(Result != NULL)) {
					tp1 = *(EIF_POINTER *)(RTCW(Result) + O12527[Dtype(Result)-1295]);
					tb1 = (EIF_BOOLEAN)(tp1 != arg1);
				}
				if (tb1) {
					Result = (EIF_REFERENCE) NULL;
				}
			}
		}
	} else {
		Result = (EIF_REFERENCE) NULL;
	}
	RTE_E
	RTXSC;
	RTS_SRR
	loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTLE;
	return Result;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WEL_WINDOWS_ROUTINES}.key_down */
EIF_BOOLEAN F1898_22152 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) EIF_TEST(cwel_key_down(((int) arg1)));
}

/* {WEL_WINDOWS_ROUTINES}.foreground_window */
EIF_REFERENCE F1898_22158 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = (EIF_POINTER) GetForegroundWindow();
	if ((EIF_BOOLEAN)(loc1 != loc2)) {
		RTLE;
		return (EIF_REFERENCE) F1898_22150(Current, loc1);
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {WEL_WINDOWS_ROUTINES}.cwin_get_dlg_item */
EIF_POINTER F1898_22162 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) GetDlgItem(((HWND) arg1), ((int) arg2));
	return Result;
}

/* {WEL_WINDOWS_ROUTINES}.cwel_key_down */
EIF_BOOLEAN F1898_22169 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(cwel_key_down(((int) arg1)));
	return Result;
}

/* {WEL_WINDOWS_ROUTINES}.cwin_get_foreground_window */
EIF_POINTER F1898_22174 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) GetForegroundWindow();
	return Result;
}

/* {WEL_WINDOWS_ROUTINES}.cwin_get_window */
EIF_POINTER F1898_22175 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) GetWindow(((HWND) arg1), ((UINT) arg2));
	return Result;
}

/* {WEL_WINDOWS_ROUTINES}.cwin_get_window_long */
EIF_POINTER F1898_22176 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) GetWindowLongPtr(((HWND) arg1), ((int) arg2));
	return Result;
}

/* {WEL_WINDOWS_ROUTINES}.cwin_set_window_long */
void F1898_22177 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	
	
	SetWindowLongPtr(((HWND) arg1), ((int) arg2), ((LONG_PTR) arg3));
}

/* {WEL_WINDOWS_ROUTINES}.cwin_get_window_thread_process_id */
EIF_INTEGER_32 F1898_22179 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32* arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GetWindowThreadProcessId(((HWND) arg1), ((LPDWORD) arg2));
	return Result;
}

/* {WEL_WINDOWS_ROUTINES}.cwin_get_current_process_id */
EIF_INTEGER_32 F1898_22180 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GetCurrentProcessId();
	return Result;
}

/* {WEL_WINDOWS_ROUTINES}.cwin_console_window_data */
static EIF_POINTER F1898_22181_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTLD;
	
#define Result RTOTRB(EIF_POINTER)
	RTOUDB(EIF_POINTER, 374)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	inline_F1898_22182((EIF_POINTER *) &(loc1));
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		Result = (EIF_POINTER) GetWindowLongPtr(((HWND) loc1), ((int) ((EIF_INTEGER_32) -21L)));
	}
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_POINTER F1898_22181 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_POINTER,374,F1898_22181_body,(Current));
}

/* {WEL_WINDOWS_ROUTINES}.cwin_get_console_hwnd */
void F1898_22182 (EIF_REFERENCE Current, EIF_POINTER* arg1)
{
	GTCX
	
	
	inline_F1898_22182 ((EIF_POINTER*) arg1);
}

void EIF_Minit1881 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
