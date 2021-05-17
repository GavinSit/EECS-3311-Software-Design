/*
 * Code for class FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fi182.h"
#include "eif_file.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FILE}.make_with_name */
void F1291_4901 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	F1291_5062(Current, arg1);
	*(EIF_INTEGER_32 *)(Current + O3783[dtype-1290]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O3644[dtype-1290]) = (EIF_POINTER) tp2;
	tr1 = RTLNSMART(eif_new_type(1560, 1).id);
	F1558_6510(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O3535[dtype-1289]) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FILE}.item */
EIF_CHARACTER_8 F1291_4913 (EIF_REFERENCE Current)
{
	GTCX
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R3588[dtype-1291])(Current);
	Result = *(EIF_CHARACTER_8 *)(Current + O3534[dtype-1289]);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2360[dtype-911])(Current);
	RTLE;
	return Result;
}

/* {FILE}.descriptor_available */
EIF_BOOLEAN F1291_4916 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O3792[Dtype(Current)-1290]);
}


/* {FILE}.count */
EIF_INTEGER_32 F1291_4931 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3549[dtype-1291])(Current)) {
		if ((EIF_BOOLEAN) !F1291_4962(Current)) {
			F1291_5070(Current);
			Result = F946_3801(RTCV(RTOUCR(17,F1291_5068, (Current))));
		} else {
			tp1 = *(EIF_POINTER *)(Current + O3644[dtype-1290]);
			Result = (EIF_INTEGER_32) eif_file_size((FILE*) tp1);
			RTLE;
			return (EIF_INTEGER_32) Result;
		}
	}
	RTLE;
	return Result;
}

/* {FILE}.after */
EIF_BOOLEAN F1291_4932 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\0';
	if ((EIF_BOOLEAN) !F1291_4960(Current)) {
		tb1 = '\01';
		if (!(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3656[dtype-1291])(Current)) {
			tb1 = (EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[dtype-818])(Current) == ((EIF_INTEGER_32) 0L));
		}
		Result = tb1;
	}
	RTLE;
	return Result;
}

/* {FILE}.before */
EIF_BOOLEAN F1291_4933 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) F1291_4960(Current);
}

/* {FILE}.off */
EIF_BOOLEAN F1291_4934 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = '\01';
	tb1 = '\01';
	if (!((EIF_BOOLEAN)((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[dtype-818])(Current) == ((EIF_INTEGER_32) 0L)))) {
		tb1 = F1291_4960(Current);
	}
	if (!tb1) {
		Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3656[dtype-1291])(Current);
	}
	RTLE;
	return Result;
}

/* {FILE}.end_of_file */
EIF_BOOLEAN F1291_4935 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O3644[Dtype(Current)-1290]);
	return (EIF_BOOLEAN) (EIF_BOOLEAN) EIF_TEST(eif_file_feof((FILE*) tp1));
}

/* {FILE}.exists */
EIF_BOOLEAN F1291_4936 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (F1291_4960(Current)) {
		tp1 = *(EIF_POINTER *)(RTCV(F1291_5060(Current))+ _PTROFF_0_1_0_1_0_0_);
		Result = (EIF_BOOLEAN) EIF_TEST(eif_file_exists((EIF_FILENAME) tp1));
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return Result;
}

/* {FILE}.is_readable */
EIF_BOOLEAN F1291_4939 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1291_5070(Current);
	Result = F946_3828(RTCV(RTOUCR(17,F1291_5068, (Current))));
	RTLE;
	return Result;
}

/* {FILE}.is_closed */
EIF_BOOLEAN F1291_4960 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3783[Dtype(Current)-1290]) == ((EIF_INTEGER_32) 0L));
}

/* {FILE}.is_open_read */
EIF_BOOLEAN F1291_4961 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3783[dtype-1290]) == ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3783[dtype-1290]) == ((EIF_INTEGER_32) 4L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3783[dtype-1290]) == ((EIF_INTEGER_32) 5L)));
}

/* {FILE}.is_open_write */
EIF_BOOLEAN F1291_4962 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3783[dtype-1290]) == ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3783[dtype-1290]) == ((EIF_INTEGER_32) 4L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3783[dtype-1290]) == ((EIF_INTEGER_32) 5L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3783[dtype-1290]) == ((EIF_INTEGER_32) 3L)));
}

/* {FILE}.extendible */
EIF_BOOLEAN F1291_4965 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3783[Dtype(Current)-1290]) >= ((EIF_INTEGER_32) 2L));
}

/* {FILE}.open_read */
void F1291_4971 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F1291_5060(Current))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32)) R3725[dtype-1291])(Current, tp1, ((EIF_INTEGER_32) 0L));
	*(EIF_POINTER *)(Current + O3644[dtype-1290]) = (EIF_POINTER) tp1;
	*(EIF_INTEGER_32 *)(Current + O3783[dtype-1290]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTLE;
}

/* {FILE}.open_write */
void F1291_4972 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F1291_5060(Current))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32)) R3725[dtype-1291])(Current, tp1, ((EIF_INTEGER_32) 1L));
	*(EIF_POINTER *)(Current + O3644[dtype-1290]) = (EIF_POINTER) tp1;
	*(EIF_INTEGER_32 *)(Current + O3783[dtype-1290]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTLE;
}

/* {FILE}.open_append */
void F1291_4973 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCV(F1291_5060(Current))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32)) R3725[dtype-1291])(Current, tp1, ((EIF_INTEGER_32) 2L));
	*(EIF_POINTER *)(Current + O3644[dtype-1290]) = (EIF_POINTER) tp1;
	*(EIF_INTEGER_32 *)(Current + O3783[dtype-1290]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	RTLE;
}

/* {FILE}.close */
void F1291_4988 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER)) R3726[dtype-1291])(Current, *(EIF_POINTER *)(Current + O3644[dtype-1290]));
	*(EIF_INTEGER_32 *)(Current + O3783[dtype-1290]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	*(EIF_POINTER *)(Current + O3644[dtype-1290]) = (EIF_POINTER) tp2;
	*(EIF_BOOLEAN *)(Current + O3792[dtype-1290]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {FILE}.start */
void F1291_4989 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O3644[Dtype(Current)-1290]);
	eif_file_go((FILE*) tp1, (EIF_INTEGER) ((EIF_INTEGER_32) 0L));
}

/* {FILE}.forth */
void F1291_4991 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O3644[dtype-1290]);
	eif_file_move((FILE*) tp1, (EIF_INTEGER) ((EIF_INTEGER_32) 1L));
	tp1 = *(EIF_POINTER *)(Current + O3644[dtype-1290]);
	tc1 = F1291_5077(Current, tp1);
	eif_do_nothing_value.it_c1 = tc1;
	if ((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3656[dtype-1291])(Current)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2360[dtype-911])(Current);
	}
	RTLE;
}

/* {FILE}.back */
void F1291_4992 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O3644[Dtype(Current)-1290]);
	eif_file_move((FILE*) tp1, (EIF_INTEGER) ((EIF_INTEGER_32) -1L));
}

/* {FILE}.new_cursor */
EIF_REFERENCE F1291_4997 (EIF_REFERENCE Current)
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
	Result = RTLNS(eif_new_type(1282, 0x01).id, 1282, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tr1 = F1291_5060(Current);
	F1283_4444(RTCW(Result), tr1);
	RTLE;
	return Result;
}

/* {FILE}.extend */
void F1291_4998 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R3564[Dtype(Current)-1291])(Current, arg1);
}

/* {FILE}.put_string */
void F1291_5010 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
		tp1 = *(EIF_POINTER *)(Current + O3644[Dtype(Current)-1290]);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		eif_file_ps((FILE*) tp1, (char*) loc1, (EIF_INTEGER) ti4_1);
	}
	RTLE;
}

/* {FILE}.putstring */
void F1291_5011 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
		tp1 = *(EIF_POINTER *)(Current + O3644[Dtype(Current)-1290]);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		eif_file_ps((FILE*) tp1, (char*) loc1, (EIF_INTEGER) ti4_1);
	}
	RTLE;
}

/* {FILE}.put_managed_pointer */
void F1291_5012 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O3644[Dtype(Current)-1290]);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp2,arg2);
	eif_file_ps((FILE*) tp1, (char*) tp2, (EIF_INTEGER) arg3);
	RTLE;
}

/* {FILE}.put_character */
void F1291_5013 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O3644[Dtype(Current)-1290]);
	eif_file_pc((FILE*) tp1, (EIF_CHARACTER) arg1);
}

/* {FILE}.put_new_line */
void F1291_5015 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O3644[Dtype(Current)-1290]);
	eif_file_tnwl((FILE*) tp1);
}

/* {FILE}.wipe_out */
void F1291_5033 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R3682[Dtype(Current)-1291])(Current);
	F1291_4988(Current);
	RTLE;
}

/* {FILE}.read_character */
void F1291_5041 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current + O3644[dtype-1290]);
	tc1 = F1291_5077(Current, tp1);
	*(EIF_CHARACTER_8 *)(Current + O3534[dtype-1289]) = (EIF_CHARACTER_8) tc1;
	RTLE;
}

/* {FILE}.read_line */
void F1291_5045 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc5);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLIU(3);
	
	RTGC;
	loc5 = *(EIF_REFERENCE *)(Current + O3535[dtype-1289]);
	loc3 = *(EIF_REFERENCE *)(RTCW(loc5));
	loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4682[Dtype(RTCW(loc5))-1560])(loc5);
	for (;;) {
		if (loc4) break;
		tp1 = *(EIF_POINTER *)(Current + O3644[dtype-1290]);
		loc2 += (EIF_INTEGER_32) eif_file_gs((FILE*) tp1, (char*) loc3, (EIF_INTEGER) loc1, (EIF_INTEGER) loc2);
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			F1561_6779(RTCW(loc5), loc1);
			if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 2048L))) {
				F1561_6763(RTCW(loc5), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1024L)));
			} else {
				F809_2558(RTCW(loc5));
			}
			loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4682[Dtype(RTCW(loc5))-1560])(loc5);
			loc2--;
			loc3 = *(EIF_REFERENCE *)(RTCW(loc5));
		} else {
			F1561_6779(RTCW(loc5), loc2);
			loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTLE;
}

/* {FILE}.read_stream */
void F1291_5048 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	loc2 = *(EIF_REFERENCE *)(Current + O3535[dtype-1289]);
	F1561_6763(RTCW(loc2), arg1);
	loc1 = *(EIF_REFERENCE *)(RTCW(loc2));
	tp1 = *(EIF_POINTER *)(Current + O3644[dtype-1290]);
	ti4_1 = (EIF_INTEGER_32) eif_file_gss((FILE*) tp1, (char*) loc1, (EIF_INTEGER) arg1);
	F1561_6779(RTCW(loc2), ti4_1);
	RTLE;
}

/* {FILE}.file_open */
EIF_POINTER F1291_5057 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	Result = (EIF_POINTER) eif_file_open((EIF_FILENAME) arg1, (int) arg2);
	
	return Result;
}

/* {FILE}.file_close */
void F1291_5058 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_file_close((FILE*) arg1);
	
}

/* {FILE}.internal_name_pointer */
EIF_REFERENCE F1291_5060 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O3729[Dtype(Current)-1290]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		RTCT0("internal_name_pointer_set", EX_CHECK);
			RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {FILE}.set_name */
void F1291_5062 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O3727[dtype-1290]) = (EIF_REFERENCE) arg1;
	tr1 = RTOUCR(17,F1291_5068, (Current));
	tr1 = F946_3814(RTCW(tr1), arg1, *(EIF_REFERENCE *)(Current + O3729[dtype-1290]));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O3729[dtype-1290]) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {FILE}.buffered_file_info */
static EIF_REFERENCE F1291_5068_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(17)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(945, 0x01).id, 945, _OBJSIZ_3_2_0_0_0_0_0_0_);
	F946_3797(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1291_5068 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(17,F1291_5068_body,(Current));
}

/* {FILE}.read_data_buffer */
static EIF_REFERENCE F1291_5069_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(18)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(547, 0x01).id, 547, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F548_1895(RTCW(tr1), ((EIF_INTEGER_32) 256L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1291_5069 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(18,F1291_5069_body,(Current));
}

/* {FILE}.set_buffer */
void F1291_5070 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTGC;
	tr1 = RTOUCR(17,F1291_5068, (Current));
	tr2 = *(EIF_REFERENCE *)(Current + O3727[Dtype(Current)-1290]);
	tr3 = F1291_5060(Current);
	F946_3844(RTCW(tr1), tr2, tr3);
	RTLE;
}

/* {FILE}.file_gc */
EIF_CHARACTER_8 F1291_5077 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	
	
	EIF_ENTER_C;Result = (EIF_CHARACTER_8) eif_file_gc((FILE*) arg1);
	
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {FILE}.file_gs */
EIF_INTEGER_32 F1291_5078 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_gs((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3, (EIF_INTEGER) arg4);
	
	return Result;
}

/* {FILE}.file_gss */
EIF_INTEGER_32 F1291_5079 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_gss((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3);
	
	return Result;
}

/* {FILE}.file_size */
EIF_INTEGER_32 F1291_5085 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) eif_file_size((FILE*) arg1);
	
	return Result;
}

/* {FILE}.file_tnwl */
void F1291_5095 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	eif_file_tnwl((FILE*) arg1);
	
}

/* {FILE}.file_ps */
void F1291_5097 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	eif_file_ps((FILE*) arg1, (char*) arg2, (EIF_INTEGER) arg3);
	
}

/* {FILE}.file_pc */
void F1291_5098 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_CHARACTER_8 arg2)
{
	GTCX
	
	eif_file_pc((FILE*) arg1, (EIF_CHARACTER) arg2);
	
}

/* {FILE}.file_go */
void F1291_5099 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	eif_file_go((FILE*) arg1, (EIF_INTEGER) arg2);
	
}

/* {FILE}.file_move */
void F1291_5101 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	eif_file_move((FILE*) arg1, (EIF_INTEGER) arg2);
	
}

/* {FILE}.file_feof */
EIF_BOOLEAN F1291_5102 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_file_feof((FILE*) arg1));
	
	return Result;
}

/* {FILE}.file_exists */
EIF_BOOLEAN F1291_5103 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(eif_file_exists((EIF_FILENAME) arg1));
	
	return Result;
}

/* {FILE}.set_read_mode */
void F1291_5125 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O3783[Dtype(Current)-1290]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {FILE}.set_write_mode */
void F1291_5126 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O3783[Dtype(Current)-1290]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
}

void EIF_Minit182 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
