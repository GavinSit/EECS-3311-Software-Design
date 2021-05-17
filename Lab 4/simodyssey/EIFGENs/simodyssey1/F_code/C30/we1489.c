/*
 * Code for class WEL_MSGBOXPARAMS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1489.h"
#include <msgboxpa.h>
#include <wel.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_MSGBOXPARAMS}.make_basic */
void F1350_16060 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_POINTER tp5;
	EIF_POINTER tp6;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,arg2);
	RTLR(2,loc2);
	RTLR(3,arg3);
	RTLR(4,arg1);
	RTLR(5,Current);
	RTLR(6,tr1);
	RTLIU(7);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F944_3738(RTCW(loc1), arg2);
	loc2 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F944_3738(RTCW(loc2), arg3);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		loc3 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	} else {
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		loc3 = tp1;
	}
	F1337_15830(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tr1 = RTOUCR(418,F217_11265, (RTCV(RTOUCR(502,F1350_16063, (Current)))));
	tp2 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
	tp3 = F944_3745(RTCW(loc1));
	tp4 = F944_3745(RTCW(loc2));
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp5 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp6 = tp5;
	ti4_1 = (EIF_INTEGER_32) MAKELANGID(((USHORT) arg5), ((USHORT) arg6));
	cwel_msgboxparams_set(((LPMSGBOXPARAMS) tp1), ((HWND) loc3), ((HINSTANCE) tp2), ((LPCTSTR) tp3), ((LPCTSTR) tp4), ((DWORD) arg4), ((LPCTSTR) tp6), ((DWORD) ti4_1));
	RTLE;
}

/* {WEL_MSGBOXPARAMS}.structure_size */
EIF_INTEGER_32 F1350_16062 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) sizeof (MSGBOXPARAMS);
}

/* {WEL_MSGBOXPARAMS}.a_main_arguments */
static EIF_REFERENCE F1350_16063_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(502)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(216, 0x01).id, 216, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1350_16063 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(502,F1350_16063_body,(Current));
}

/* {WEL_MSGBOXPARAMS}.cwel_msgboxparams_set */
void F1350_16064 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_POINTER arg5, EIF_INTEGER_32 arg6, EIF_POINTER arg7, EIF_INTEGER_32 arg8)
{
	GTCX
	
	
	cwel_msgboxparams_set(((LPMSGBOXPARAMS) arg1), ((HWND) arg2), ((HINSTANCE) arg3), ((LPCTSTR) arg4), ((LPCTSTR) arg5), ((DWORD) arg6), ((LPCTSTR) arg7), ((DWORD) arg8));
}

/* {WEL_MSGBOXPARAMS}.c_size_of_msgboxparams */
EIF_INTEGER_32 F1350_16065 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (MSGBOXPARAMS);
	return Result;
}

/* {WEL_MSGBOXPARAMS}.cwin_make_lang_id */
EIF_INTEGER_32 F1350_16067 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) MAKELANGID(((USHORT) arg1), ((USHORT) arg2));
	return Result;
}

void EIF_Minit1489 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
