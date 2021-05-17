/*
 * Code for class WEL_ABSTRACT_DISPATCHER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1890.h"
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_ABSTRACT_DISPATCHER}.make */
void F1907_22356 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	{
		/* INLINED CODE (ANY.do_nothing) */
		tr1 = F304_12407(Current);
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {WEL_ABSTRACT_DISPATCHER}.set_exception_callback */
void F1907_22357 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {WEL_ABSTRACT_DISPATCHER}.window_procedure */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_POINTER F1907_22359 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER EIF_VOLATILE loc2 = (EIF_POINTER) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_VOLATILE EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	RTXD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc6);
	RTLR(3,tr1);
	RTLR(4,saved_except);
	RTLIU(5);
	RTXSLS;
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN) !loc5) {
		loc1 = F1898_22150(Current, arg1);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tb1 = F1296_15099(RTCW(loc1));
			if (tb1) {
				F214_11246(RTCW(loc1));
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				Result = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER, EIF_POINTER)) R18807[Dtype(RTCW(loc1))-1914])(loc1, arg1, arg2, arg3, arg4);
				tb1 = F214_11241(RTCW(loc1));
				if (tb1) {
					loc2 = F214_11242(RTCW(loc1));
					loc3 = F214_11241(RTCW(loc1));
				}
				tb1 = F214_11243(RTCW(loc1));
				if (tb1) {
					Result = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER, EIF_POINTER)) R18808[Dtype(RTCW(loc1))-1914])(loc1, arg1, arg2, arg3, arg4);
				}
				if (loc3) {
					Result = (EIF_POINTER) loc2;
				}
				F214_11247(RTCW(loc1));
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			} else {
				Result = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER, EIF_POINTER)) R18808[Dtype(RTCW(loc1))-1914])(loc1, arg1, arg2, arg3, arg4);
			}
		} else {
			Result = (EIF_POINTER) DefWindowProc(((HWND) arg1), ((UINT) arg2), ((WPARAM) arg3), ((LPARAM) arg4));
		}
	} else {
		Result = (EIF_POINTER) DefWindowProc(((HWND) arg1), ((UINT) arg2), ((WPARAM) arg3), ((LPARAM) arg4));
		loc6 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(loc6 != NULL)) {
			tr1 = F1907_22361(Current);
			(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(loc6)+ _PTROFF_4_2_0_3_0_0_))(
				*(EIF_POINTER *)(RTCW(loc6)+ _PTROFF_4_2_0_3_0_1_),
				*(EIF_REFERENCE *)(RTCW(loc6) + _REFACS_1_), tr1);
		}
	}
	RTE_E
	RTXSC;
	RTS_SRR
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 != NULL) && loc4)) {
		F214_11247(RTCW(loc1));
		loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTLE;
	return Result;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WEL_ABSTRACT_DISPATCHER}.dialog_procedure */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_POINTER F1907_22360 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER EIF_VOLATILE loc2 = (EIF_POINTER) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	EIF_VOLATILE EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	RTXD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc5);
	RTLR(4,saved_except);
	RTLIU(5);
	RTXSLS;
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN) !loc4) {
		if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 272L))) {
			loc1 = F285_12088(Current);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				tr1 = RTOUCR(422,F285_12089, (Current));
				F489_1934(RTCW(tr1), NULL);
				F214_11246(RTCW(loc1));
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				F1296_15100(RTCW(loc1), arg1);
				F1912_22637(RTCW(loc1));
				Result = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER, EIF_POINTER)) R18807[Dtype(RTCW(loc1))-1914])(loc1, arg1, arg2, arg3, arg4);
				F214_11247(RTCW(loc1));
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			Result = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 1L)));
		} else {
			loc1 = F1898_22150(Current, arg1);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				tb2 = F1296_15099(RTCW(loc1));
				tb1 = tb2;
			}
			if (tb1) {
				F214_11246(RTCW(loc1));
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				loc2 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER, EIF_POINTER)) R18807[Dtype(RTCW(loc1))-1914])(loc1, arg1, arg2, arg3, arg4);
				tb1 = F214_11241(RTCW(loc1));
				if (tb1) {
					Result = F214_11242(RTCW(loc1));
				} else {
					tb1 = F214_11243(RTCW(loc1));
					if ((EIF_BOOLEAN) !tb1) {
						Result = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 1L)));
					} else {
						Result = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 0L)));
					}
				}
				F214_11247(RTCW(loc1));
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		}
	} else {
		Result = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 0L)));
		loc5 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			tr1 = F1907_22361(Current);
			(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(loc5)+ _PTROFF_4_2_0_3_0_0_))(
				*(EIF_POINTER *)(RTCW(loc5)+ _PTROFF_4_2_0_3_0_1_),
				*(EIF_REFERENCE *)(RTCW(loc5) + _REFACS_1_), tr1);
		}
	}
	RTE_E
	RTXSC;
	RTS_SRR
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 != NULL) && loc3)) {
		F214_11247(RTCW(loc1));
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTLE;
	return Result;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WEL_ABSTRACT_DISPATCHER}.new_exception */
EIF_REFERENCE F1907_22361 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = RTOUCR(11,F423_1381, (Current));
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1134[Dtype(RTCW(tr1))-378])(tr1);
	RTCT0("l_exception_attached", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {WEL_ABSTRACT_DISPATCHER}.cwin_def_window_proc */
EIF_POINTER F1907_22362 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) DefWindowProc(((HWND) arg1), ((UINT) arg2), ((WPARAM) arg3), ((LPARAM) arg4));
	return Result;
}

void EIF_Minit1890 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
