/*
 * Code for class RAW_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ra183.h"
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

/* {RAW_FILE}.read_to_managed_pointer */
void F1293_5162 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
	tp1 = RTPOF(tp1,arg2);
	tp2 = *(EIF_POINTER *)(Current + O3644[dtype-1290]);
	ti4_1 = (EIF_INTEGER_32) fread((void*) tp1, (size_t) ((EIF_INTEGER_32) 1L), (size_t) arg3, (FILE*) tp2);
	*(EIF_INTEGER_32 *)(Current + O3548[dtype-1289]) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {RAW_FILE}.read_to_string */
EIF_INTEGER_32 F1293_5163 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O3644[Dtype(Current)-1290]);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	/* INLINED CODE (SPECIAL.item_address) */
	tp2 = RTCW(tr1) + (rt_uint_ptr)(EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)) * sizeof(EIF_CHARACTER_8);
	/* END INLINED CODE */
	tp2 = tp2;
	Result = (EIF_INTEGER_32) eif_file_gss((FILE*) tp1, (char*) tp2, (EIF_INTEGER) arg3);
	F1560_6659(RTCW(arg1));
	RTLE;
	return Result;
}

/* {RAW_FILE}.file_fread */
EIF_INTEGER_32 F1293_5164 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) fread((void*) arg1, (size_t) arg2, (size_t) arg3, (FILE*) arg4);
	
	return Result;
}

/* {RAW_FILE}.file_open */
EIF_POINTER F1293_5170 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) eif_file_binary_open((EIF_FILENAME) arg1, (int) arg2);
	
	return Result;
}

void EIF_Minit183 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
