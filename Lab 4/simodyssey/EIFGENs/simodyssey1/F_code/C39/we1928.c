/*
 * Code for class WEL_STATIC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1928.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_STATIC}.make */
void F1945_23334 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7)
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

/* {WEL_STATIC}.foreground_color */
EIF_REFERENCE F1945_23335 (EIF_REFERENCE Current)
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

/* {WEL_STATIC}.background_color */
EIF_REFERENCE F1945_23336 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20490(RTCW(tr1), ((EIF_INTEGER_32) 15L));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {WEL_STATIC}.class_name */
static EIF_REFERENCE F1945_23338_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRR
	RTOUDR(441)

	
	RTEV;
	RTGC;
	RTOTP;
	Result = RTMS32_EX_H("S\000\000\000t\000\000\000a\000\000\000t\000\000\000i\000\000\000c\000\000\000",6,1799094627);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1945_23338 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(441,F1945_23338_body,(Current));
}

/* {WEL_STATIC}.default_style */
static EIF_INTEGER_32 F1945_23339_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 333)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 268435456L) + ((EIF_INTEGER_32) 1073741824L)) + ((EIF_INTEGER_32) 131072L)) + ((EIF_INTEGER_32) 65536L)) + ((EIF_INTEGER_32) 0L));
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1945_23339 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,333,F1945_23339_body,(Current));
}

void EIF_Minit1928 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
