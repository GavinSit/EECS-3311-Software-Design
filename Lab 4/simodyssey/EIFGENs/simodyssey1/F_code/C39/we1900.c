/*
 * Code for class WEL_FRAME_WINDOW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1900.h"
#include <disptchr.h>
#include "wel.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_FRAME_WINDOW}.make_child */
void F1917_22822 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTGC;
	F1917_22838(Current);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R18790[Dtype(Current)-1916])(Current);
	ti4_2 = RTOUCB(EIF_INTEGER_32,294,F1917_22833, (Current));
	ti4_3 = RTOUCB(EIF_INTEGER_32,295,F1917_22834, (Current));
	ti4_4 = RTOUCB(EIF_INTEGER_32,296,F1917_22835, (Current));
	ti4_5 = RTOUCB(EIF_INTEGER_32,297,F1917_22836, (Current));
	ti4_6 = RTOUCB(EIF_INTEGER_32,298,F1917_22837, (Current));
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	F1912_22614(Current, arg1, arg2, ti4_1, ti4_2, ti4_3, ti4_4, ti4_5, ti4_6, tp2);
	RTLE;
}

/* {WEL_FRAME_WINDOW}.make_top */
void F1917_22823 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	F1917_22838(Current);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R18790[Dtype(Current)-1916])(Current);
	ti4_2 = RTOUCB(EIF_INTEGER_32,294,F1917_22833, (Current));
	ti4_3 = RTOUCB(EIF_INTEGER_32,295,F1917_22834, (Current));
	ti4_4 = RTOUCB(EIF_INTEGER_32,296,F1917_22835, (Current));
	ti4_5 = RTOUCB(EIF_INTEGER_32,297,F1917_22836, (Current));
	ti4_6 = RTOUCB(EIF_INTEGER_32,298,F1917_22837, (Current));
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	F1912_22614(Current, NULL, arg1, ti4_1, ti4_2, ti4_3, ti4_4, ti4_5, ti4_6, tp2);
	RTLE;
}

/* {WEL_FRAME_WINDOW}.class_icon */
static EIF_REFERENCE F1917_22824_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(299)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1323, 0x01).id, 1323, _OBJSIZ_0_2_0_3_0_1_0_0_);
	tp1 = (EIF_POINTER) IDI_APPLICATION;
	F1323_15635(RTCW(tr1), tp1);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1917_22824 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(299,F1917_22824_body,(Current));
}

/* {WEL_FRAME_WINDOW}.class_cursor */
static EIF_REFERENCE F1917_22825_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(300)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1849, 0x01).id, 1849, _OBJSIZ_0_2_0_3_0_2_0_0_);
	tp1 = (EIF_POINTER) IDC_ARROW;
	F1323_15635(RTCW(tr1), tp1);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1917_22825 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(300,F1917_22825_body,(Current));
}

/* {WEL_FRAME_WINDOW}.class_background */
static EIF_REFERENCE F1917_22826_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(301)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1320, 0x01).id, 1320, _OBJSIZ_0_2_0_3_0_1_0_0_);
	F1321_15589(RTCW(tr1), (EIF_INTEGER_32) (((EIF_INTEGER_32) 5L) + ((EIF_INTEGER_32) 1L)));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1917_22826 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(301,F1917_22826_body,(Current));
}

/* {WEL_FRAME_WINDOW}.class_style */
static EIF_INTEGER_32 F1917_22827_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 302)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) + ((EIF_INTEGER_32) 1L)) + ((EIF_INTEGER_32) 8L));
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1917_22827 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,302,F1917_22827_body,(Current));
}

/* {WEL_FRAME_WINDOW}.class_menu_name */
static EIF_REFERENCE F1917_22828_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(303)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1564_6847(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1917_22828 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(303,F1917_22828_body,(Current));
}

/* {WEL_FRAME_WINDOW}.class_name */
EIF_REFERENCE F1917_22829 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	Result = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr1 = F1_4(Current);
	F1565_6898(RTCW(Result), tr1);
	RTLE;
	return Result;
}

/* {WEL_FRAME_WINDOW}.class_window_procedure */
static EIF_POINTER F1917_22830_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_POINTER)
	RTOUDB(EIF_POINTER, 304)

	
	RTEV;
	RTOTP;
	Result = (EIF_POINTER) cwel_window_procedure_address;
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_POINTER F1917_22830 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_POINTER,304,F1917_22830_body,(Current));
}

/* {WEL_FRAME_WINDOW}.class_requires_icon */
EIF_BOOLEAN F1917_22831 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {WEL_FRAME_WINDOW}.default_style */
static EIF_INTEGER_32 F1917_22832_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 305)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13565952L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1917_22832 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,305,F1917_22832_body,(Current));
}

/* {WEL_FRAME_WINDOW}.default_x */
static EIF_INTEGER_32 F1917_22833_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 294)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0x80000000L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1917_22833 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,294,F1917_22833_body,(Current));
}

/* {WEL_FRAME_WINDOW}.default_y */
static EIF_INTEGER_32 F1917_22834_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 295)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0x80000000L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1917_22834 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,295,F1917_22834_body,(Current));
}

/* {WEL_FRAME_WINDOW}.default_width */
static EIF_INTEGER_32 F1917_22835_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 296)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0x80000000L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1917_22835 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,296,F1917_22835_body,(Current));
}

/* {WEL_FRAME_WINDOW}.default_height */
static EIF_INTEGER_32 F1917_22836_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 297)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0x80000000L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1917_22836 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,297,F1917_22836_body,(Current));
}

/* {WEL_FRAME_WINDOW}.default_id */
static EIF_INTEGER_32 F1917_22837_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 298)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1917_22837 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,298,F1917_22837_body,(Current));
}

/* {WEL_FRAME_WINDOW}.register_class */
void F1917_22838 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1385, 1).id);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R18787[dtype-1914])(Current);
	F1386_16704(RTCW(tr1), tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O18990[dtype-1916]) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + O18990[dtype-1916]);
	tb1 = F1386_16731(RTCW(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + O18990[dtype-1916]);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R18980[dtype-1916])(Current);
		F1386_16716(RTCW(tr1), ti4_1);
		tr1 = *(EIF_REFERENCE *)(Current + O18990[dtype-1916]);
		tp1 = RTOUCB(EIF_POINTER,304,F1917_22830, (Current));
		F1386_16720(RTCW(tr1), tp1);
		if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R18983[dtype-1916])(Current)) {
			tr1 = *(EIF_REFERENCE *)(Current + O18990[dtype-1916]);
			tr2 = RTOUCR(299,F1917_22824, (Current));
			F1386_16721(RTCW(tr1), tr2);
		}
		tr1 = *(EIF_REFERENCE *)(Current + O18990[dtype-1916]);
		tr2 = RTOUCR(300,F1917_22825, (Current));
		F1386_16722(RTCW(tr1), tr2);
		tb1 = '\0';
		if ((EIF_BOOLEAN)((FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R18670[dtype-1914])(Current) == NULL)) {
			tb1 = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R18979[dtype-1916])(Current) != NULL);
		}
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + O18990[dtype-1916]);
			tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R18979[dtype-1916])(Current);
			F1386_16723(RTCW(tr1), tr2);
		}
		tr1 = *(EIF_REFERENCE *)(Current + O18990[dtype-1916]);
		tr2 = RTOUCR(303,F1917_22828, (Current));
		F1386_16725(RTCW(tr1), tr2);
		tr1 = *(EIF_REFERENCE *)(Current + O18990[dtype-1916]);
		F1386_16738(RTCW(tr1));
	}
	RTLE;
}

void EIF_Minit1900 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
