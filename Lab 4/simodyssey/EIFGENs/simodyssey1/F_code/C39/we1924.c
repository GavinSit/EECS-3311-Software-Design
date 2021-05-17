/*
 * Code for class WEL_BUTTON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1924.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_BUTTON}.make */
void F1941_23308 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R18790[dtype-1916])(Current);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	F1912_22614(Current, arg1, arg2, ti4_1, arg3, arg4, arg5, arg6, arg7, tp2);
	*(EIF_INTEGER_32 *)(Current + O19029[dtype-1925]) = (EIF_INTEGER_32) arg7;
	RTLE;
}

/* {WEL_BUTTON}.foreground_color */
EIF_REFERENCE F1941_23309 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20490(RTCW(tr1), ((EIF_INTEGER_32) 8L));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {WEL_BUTTON}.background_color */
EIF_REFERENCE F1941_23310 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20490(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {WEL_BUTTON}.on_bn_clicked */
void F1941_23311 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_BUTTON}.process_notification */
void F1941_23312 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R19352[Dtype(Current)-1941])(Current);
	} else {
		{
			/* INLINED CODE (WEL_CONTROL.default_process_notification) */
			/* END INLINED CODE */
		}
		;
	}
	RTLE;
}

/* {WEL_BUTTON}.class_name */
static EIF_REFERENCE F1941_23313_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRR
	RTOUDR(446)

	
	RTEV;
	RTGC;
	RTOTP;
	Result = RTMS32_EX_H("B\000\000\000u\000\000\000t\000\000\000t\000\000\000o\000\000\000n\000\000\000",6,2084447598);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1941_23313 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(446,F1941_23313_body,(Current));
}

void EIF_Minit1924 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
