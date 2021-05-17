/*
 * Code for class FILE_ITERATION_CURSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fi170.h"
#include "eif_console.h"
#include "eif_file.h"
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FILE_ITERATION_CURSOR}.make_empty */
void F1283_4443 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {FILE_ITERATION_CURSOR}.make_open_read */
void F1283_4444 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (EIF_POINTER) eif_file_open((EIF_FILENAME) tp1, (int) ((EIF_INTEGER_32) 0L));
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_) = (EIF_POINTER) tp1;
	F1283_4449(Current);
	RTLE;
}

/* {FILE_ITERATION_CURSOR}.make_open_stdin */
void F1283_4445 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = (EIF_POINTER) console_def(((EIF_INTEGER_32) 0L));
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_) = (EIF_POINTER) tp1;
	F1283_4449(Current);
	RTLE;
}

/* {FILE_ITERATION_CURSOR}.character */
EIF_CHARACTER_8 F1283_4446 (EIF_REFERENCE Current)
{
	GTCX
	EIF_NATURAL_8 tu1_1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_CHARACTER_8) tu1_1;
	RTLE;
	return Result;
}

/* {FILE_ITERATION_CURSOR}.after */
EIF_BOOLEAN F1283_4448 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp3 = tp2;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tp1 == tp3);
	RTLE;
	return Result;
}

/* {FILE_ITERATION_CURSOR}.forth */
void F1283_4449 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) fread((void*) (EIF_NATURAL_8 *) &(*(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_)), (size_t) ((EIF_INTEGER_32) 1L), (size_t) ((EIF_INTEGER_32) 1L), (FILE*) tp1) != ((EIF_INTEGER_32) 1L))) {
		F1283_4450(Current);
	}
	RTLE;
}

/* {FILE_ITERATION_CURSOR}.close */
void F1283_4450 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_) != tp1)) {
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
		eif_file_close((FILE*) tp1);
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		tp2 = tp1;
		*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_) = (EIF_POINTER) tp2;
	}
	RTLE;
}

void EIF_Minit170 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
