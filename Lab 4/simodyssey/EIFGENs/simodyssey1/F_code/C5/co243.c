/*
 * Code for class CONSOLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co243.h"
#include "eif_console.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CONSOLE}.make_open_stdin */
void F1820_7031 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	F1291_4901(Current, arg1);
	tp1 = (EIF_POINTER) console_def(((EIF_INTEGER_32) 0L));
	*(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_) = (EIF_POINTER) tp1;
	F1291_5125(Current);
	RTLE;
}

/* {CONSOLE}.make_open_stdout */
void F1820_7032 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	F1291_4901(Current, arg1);
	tp1 = (EIF_POINTER) console_def(((EIF_INTEGER_32) 1L));
	*(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_) = (EIF_POINTER) tp1;
	F1291_5126(Current);
	RTLE;
}

/* {CONSOLE}.make_open_stderr */
void F1820_7033 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	F1291_4901(Current, arg1);
	tp1 = (EIF_POINTER) console_def(((EIF_INTEGER_32) 2L));
	*(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_) = (EIF_POINTER) tp1;
	F1291_5126(Current);
	RTLE;
}

/* {CONSOLE}.end_of_file */
EIF_BOOLEAN F1820_7034 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_);
	return (EIF_BOOLEAN) (EIF_BOOLEAN) EIF_TEST(console_eof((FILE*) tp1));
}

/* {CONSOLE}.exists */
EIF_BOOLEAN F1820_7035 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {CONSOLE}.count */
EIF_INTEGER_32 F1820_7036 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {CONSOLE}.dispose */
void F1820_7037 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {CONSOLE}.back */
void F1820_7038 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {CONSOLE}.new_cursor */
EIF_REFERENCE F1820_7039 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (F1291_4961(Current)) {
		tr1 = RTLNS(eif_new_type(1282, 0x01).id, 1282, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1283_4445(RTCW(tr1));
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNS(eif_new_type(1282, 0x01).id, 1282, _OBJSIZ_0_1_0_0_0_1_0_0_);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}/* NOTREACHED */
	
}

/* {CONSOLE}.read_line */
void F1820_7044 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1820_7046(Current);
}

/* {CONSOLE}.read_line_thread_aware */
void F1820_7046 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,loc7);
	RTLIU(3);
	
	RTGC;
	loc4 = *(EIF_REFERENCE *)(Current);
	loc7 = RTOUCR(18,F1291_5069, (Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R4801[Dtype(RTCW(loc4))-1560])(loc4);
	loc1 = F548_1915(RTCW(loc7));
	for (;;) {
		if (loc3) break;
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_);
		tp2 = F548_1913(RTCW(loc7));
		loc2 = F1820_7087(Current, tp1, tp2, loc1, ((EIF_INTEGER_32) 0L));
		loc5 = *(EIF_INTEGER_32 *)(RTCW(loc4)+ _LNGOFF_1_1_0_2_);
		loc6 = eif_min_int32 (loc2,loc1);
		loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + loc6);
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc2 <= loc1);
		F1561_6763(RTCW(loc4), loc6);
		F1561_6779(RTCW(loc4), loc6);
		ti4_1 = eif_min_int32 (loc2,loc1);
		F548_1908(RTCW(loc7), loc4, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 1L)), ti4_1);
	}
	RTLE;
}

/* {CONSOLE}.read_stream */
void F1820_7047 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	F1820_7049(Current, arg1);
}

/* {CONSOLE}.read_stream_thread_aware */
void F1820_7049 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLIU(3);
	
	RTGC;
	loc3 = *(EIF_REFERENCE *)(Current);
	loc2 = RTOUCR(18,F1291_5069, (Current));
	F548_1921(RTCW(loc2), arg1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_);
	tp2 = F548_1913(RTCW(loc2));
	loc1 = F1820_7089(Current, tp1, tp2, arg1);
	F548_1921(RTCW(loc2), loc1);
	F1561_6763(RTCW(loc3), loc1);
	F1561_6779(RTCW(loc3), loc1);
	F548_1910(RTCW(loc2), loc3);
	RTLE;
}

/* {CONSOLE}.read_character */
void F1820_7053 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_);
	tc1 = F1820_7083(Current, tp1);
	*(EIF_CHARACTER_8 *)(Current+ _CHROFF_3_0_) = (EIF_CHARACTER_8) tc1;
	RTLE;
}

/* {CONSOLE}.put_character */
void F1820_7056 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_);
	console_pc((FILE*) tp1, (EIF_CHARACTER) arg1);
}

/* {CONSOLE}.put_string */
void F1820_7058 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		loc1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		console_ps((FILE*) tp1, (char*) loc1, (EIF_INTEGER) ti4_1);
	}
	RTLE;
}

/* {CONSOLE}.putstring */
void F1820_7059 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		loc1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		console_ps((FILE*) tp1, (char*) loc1, (EIF_INTEGER) ti4_1);
	}
	RTLE;
}

/* {CONSOLE}.put_new_line */
void F1820_7066 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_7_2_4_1_0_);
	console_tnwl((FILE*) tp1);
}

/* {CONSOLE}.is_empty */
EIF_BOOLEAN F1820_7068 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {CONSOLE}.console_def */
EIF_POINTER F1820_7069 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) console_def(arg1);
	
	return Result;
}

/* {CONSOLE}.console_eof */
EIF_BOOLEAN F1820_7074 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(console_eof((FILE*) arg1));
	
	return Result;
}

/* {CONSOLE}.console_ps */
void F1820_7076 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	console_ps((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3);
	
}

/* {CONSOLE}.console_pc */
void F1820_7078 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_CHARACTER_8 arg2)
{
	GTCX
	
	console_pc((FILE*) arg1, (EIF_CHARACTER) arg2);
	
}

/* {CONSOLE}.console_tnwl */
void F1820_7081 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	console_tnwl((FILE*) arg1);
	
}

/* {CONSOLE}.console_readchar */
EIF_CHARACTER_8 F1820_7083 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_CHARACTER_8) console_readchar((FILE*) arg1);
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {CONSOLE}.console_readline */
EIF_INTEGER_32 F1820_7087 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_INTEGER_32) console_readline((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3, (EIF_INTEGER) arg4);
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {CONSOLE}.console_readstream */
EIF_INTEGER_32 F1820_7089 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_INTEGER_32) console_readstream((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3);
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {CONSOLE}.file_close */
void F1820_7090 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	console_file_close((FILE*) arg1);
	
}

void EIF_Minit243 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
