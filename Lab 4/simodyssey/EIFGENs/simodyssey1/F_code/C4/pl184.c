/*
 * Code for class PLAIN_TEXT_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pl184.h"
#include "eif_file.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PLAIN_TEXT_FILE}.put_integer */
void F1292_5178 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = c_outi(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3562[Dtype(Current)-1291])(Current, tr1);
	RTLE;
}

/* {PLAIN_TEXT_FILE}.putint */
void F1292_5179 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = c_outi(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3562[Dtype(Current)-1291])(Current, tr1);
	RTLE;
}

/* {PLAIN_TEXT_FILE}.read_to_string */
EIF_INTEGER_32 F1292_5210 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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

void EIF_Minit184 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
