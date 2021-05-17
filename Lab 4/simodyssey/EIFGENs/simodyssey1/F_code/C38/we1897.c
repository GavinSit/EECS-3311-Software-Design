/*
 * Code for class WEL_DIALOG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1897.h"
#include <disptchr.h>
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

/* {WEL_DIALOG}.setup_dialog */
void F1914_22790 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_DIALOG}.on_ok */
void F1914_22793 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R18953[Dtype(Current)-1914])(Current, ((EIF_INTEGER_32) 1L));
}

/* {WEL_DIALOG}.on_cancel */
void F1914_22794 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R18953[Dtype(Current)-1914])(Current, ((EIF_INTEGER_32) 2L));
}

/* {WEL_DIALOG}.on_abort */
void F1914_22795 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R18953[Dtype(Current)-1914])(Current, ((EIF_INTEGER_32) 3L));
}

/* {WEL_DIALOG}.on_retry */
void F1914_22796 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R18953[Dtype(Current)-1914])(Current, ((EIF_INTEGER_32) 4L));
}

/* {WEL_DIALOG}.on_ignore */
void F1914_22797 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R18953[Dtype(Current)-1914])(Current, ((EIF_INTEGER_32) 5L));
}

/* {WEL_DIALOG}.on_yes */
void F1914_22798 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R18953[Dtype(Current)-1914])(Current, ((EIF_INTEGER_32) 6L));
}

/* {WEL_DIALOG}.on_no */
void F1914_22799 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R18953[Dtype(Current)-1914])(Current, ((EIF_INTEGER_32) 7L));
}

/* {WEL_DIALOG}.register_dialog */
void F1914_22800 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(422,F285_12089, (Current));
	F489_1934(RTCW(tr1), Current);
	RTLE;
}

/* {WEL_DIALOG}.process_message */
EIF_POINTER F1914_22804 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = F1913_22765(Current, arg1, arg2, arg3, arg4);
	if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 272L))) {
		F1914_22807(Current);
	}
	RTLE;
	return Result;
}

/* {WEL_DIALOG}.on_wm_control_id_command */
void F1914_22805 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	{
		/* INLINED CODE (WEL_COMPOSITE_WINDOW.on_control_id_command) */
		/* END INLINED CODE */
	}
	;
	switch (arg1) {
		case 1L:
			F1914_22793(Current);
			break;
		case 2L:
			F1914_22794(Current);
			break;
		case 3L:
			F1914_22795(Current);
			break;
		case 4L:
			F1914_22796(Current);
			break;
		case 5L:
			F1914_22797(Current);
			break;
		case 6L:
			F1914_22798(Current);
			break;
		case 7L:
			F1914_22799(Current);
			break;
	}
	RTLE;
}

/* {WEL_DIALOG}.on_wm_menu_command */
void F1914_22806 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R18913[Dtype(Current)-1914])(Current, arg1);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 2L))) {
		F1914_22794(Current);
	}
	RTLE;
}

/* {WEL_DIALOG}.on_wm_init_dialog */
void F1914_22807 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O18967[dtype-1913]);
	F912_3534(RTCW(tr1));
	for (;;) {
		tr1 = *(EIF_REFERENCE *)(Current + O18967[dtype-1913]);
		tb1 = F912_3528(RTCW(tr1));
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + O18967[dtype-1913]);
		loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(RTCW(tr1))-818])(tr1);
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1) + O19029[Dtype(loc1)-1925]);
		tp1 = (EIF_POINTER) GetDlgItem(((HWND) tp1), ((int) ti4_1));
		F1296_15100(RTCW(loc1), tp1);
		F1912_22637(RTCW(loc1));
		F1926_22919(RTCW(loc1));
		tr1 = *(EIF_REFERENCE *)(Current + O18967[dtype-1913]);
		F912_3536(RTCW(tr1));
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R18952[dtype-1914])(Current);
	RTLE;
}

/* {WEL_DIALOG}.class_name */
static EIF_REFERENCE F1914_22809_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(423)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1914_22809 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(423,F1914_22809_body,(Current));
}

/* {WEL_DIALOG}.cwel_dialog_procedure_address */
EIF_POINTER F1914_22813 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_dialog_procedure_address;
	return Result;
}

void EIF_Minit1897 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
