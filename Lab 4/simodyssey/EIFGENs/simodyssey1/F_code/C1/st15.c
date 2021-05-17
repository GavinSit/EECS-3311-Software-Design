/*
 * Code for class STD_FILES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st15.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STD_FILES}.input */
static EIF_REFERENCE F125_116_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(126)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1819, 0x01).id, 1819, _OBJSIZ_3_7_2_4_1_1_2_1_);
	tr2 = RTMS_EX_H("stdin",5,1953620846);
	F1820_7031(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F125_116 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(126,F125_116_body,(Current));
}

/* {STD_FILES}.output */
static EIF_REFERENCE F125_117_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(127)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1819, 0x01).id, 1819, _OBJSIZ_3_7_2_4_1_1_2_1_);
	tr2 = RTMS_EX_H("stdout",6,1912016244);
	F1820_7032(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F125_117 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(127,F125_117_body,(Current));
}

/* {STD_FILES}.error */
static EIF_REFERENCE F125_118_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(128)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1819, 0x01).id, 1819, _OBJSIZ_3_7_2_4_1_1_2_1_);
	tr2 = RTMS_EX_H("stderr",6,1911360114);
	F1820_7033(RTCW(tr1), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F125_118 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(128,F125_118_body,(Current));
}

/* {STD_FILES}.standard_default */
EIF_REFERENCE F125_120 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(Result == NULL)) {
		Result = RTOUCR(127,F125_117, (Current));
		RTLE;
		return (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

/* {STD_FILES}.last_string */
EIF_REFERENCE F125_136 (EIF_REFERENCE Current)
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
	tr1 = RTOUCR(126,F125_116, (Current));
	Result = *(EIF_REFERENCE *)(RTCW(tr1) + O3535[Dtype(tr1)-1289]);
	RTLE;
	return Result;
}

/* {STD_FILES}.set_file_default */
void F125_141 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
}

/* {STD_FILES}.set_output_default */
void F125_142 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(127,F125_117, (Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {STD_FILES}.put_character */
void F125_143 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = F125_120(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R3564[Dtype(RTCW(tr1))-1291])(tr1, arg1);
	RTLE;
}

/* {STD_FILES}.put_string */
void F125_145 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = F125_120(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3562[Dtype(RTCW(tr1))-1291])(tr1, arg1);
	RTLE;
}

/* {STD_FILES}.put_integer */
void F125_151 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = F125_120(Current);
	F1292_5178(RTCW(tr1), arg1);
	RTLE;
}

/* {STD_FILES}.put_boolean */
void F125_162 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if (arg1) {
		tr1 = RTMS_EX_H("True",4,1416787301);
		F125_145(Current, tr1);
	} else {
		tr1 = RTMS_EX_H("False",5,1635034981);
		F125_145(Current, tr1);
	}
	RTLE;
}

/* {STD_FILES}.put_new_line */
void F125_164 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = F125_120(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R3560[Dtype(RTCW(tr1))-1291])(tr1);
	RTLE;
}

/* {STD_FILES}.read_line */
void F125_181 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(126,F125_116, (Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R3604[Dtype(RTCW(tr1))-1291])(tr1);
	RTLE;
}

void EIF_Minit15 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
