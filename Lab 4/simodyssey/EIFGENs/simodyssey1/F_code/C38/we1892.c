/*
 * Code for class WEL_APPLICATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1892.h"
#include "wel.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F292_12247
static EIF_INTEGER_32 inline_F292_12247 (void)
{
	return (EIF_INTEGER_32) (DWLP_DLGPROC)
	;
}
#define INLINE_F292_12247
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_APPLICATION}.is_dialog */
EIF_BOOLEAN F1909_22375 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = inline_F292_12247();
	tp1 = (EIF_POINTER) GetWindowLongPtr(((HWND) arg1), ((int) ti4_1));
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

/* {WEL_APPLICATION}.init_instance */
void F1909_22380 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_APPLICATION}.dispatcher */
static EIF_REFERENCE F1909_22383_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(266)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1907, 0x01).id, 1907, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F1908_22363(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1909_22383 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(266,F1909_22383_body,(Current));
}

void EIF_Minit1892 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
