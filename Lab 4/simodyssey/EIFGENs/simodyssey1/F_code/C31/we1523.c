/*
 * Code for class WEL_ENUM_LOG_FONT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1523.h"
#include <enumlf.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_ENUM_LOG_FONT}.make_with_pointer */
void F1385_16695 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	ti4_1 = RTOUCB(EIF_INTEGER_32,427,F1385_16699, (Current));
	F1337_15833(Current, arg1, ti4_1);
	RTLE;
}

/* {WEL_ENUM_LOG_FONT}.log_font */
EIF_REFERENCE F1385_16696 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(1406, 0x01).id, 1406, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp1 = (EIF_POINTER) cwel_enumlogfont_get_elflogfont(((ENUMLOGFONT*) tp1));
	F1407_17198(RTCW(Result), tp1);
	RTLE;
	return Result;
}

/* {WEL_ENUM_LOG_FONT}.structure_size */
static EIF_INTEGER_32 F1385_16699_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 427)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (ENUMLOGFONT);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1385_16699 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,427,F1385_16699_body,(Current));
}

/* {WEL_ENUM_LOG_FONT}.c_size_of_enumlogfont */
EIF_INTEGER_32 F1385_16700 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (ENUMLOGFONT);
	return Result;
}

/* {WEL_ENUM_LOG_FONT}.cwel_enumlogfont_get_elflogfont */
EIF_POINTER F1385_16701 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_enumlogfont_get_elflogfont(((ENUMLOGFONT*) arg1));
	return Result;
}

void EIF_Minit1523 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
