/*
 * Code for class WEL_TOOL_INFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1885.h"
#include <toolinfo.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TOOL_INFO}.make */
void F1902_22228 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1337_15830(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	ti4_1 = RTOUCB(EIF_INTEGER_32,461,F1902_22247, (Current));
	cwel_toolinfo_set_cbsize((tp1), (ti4_1));
	tr1 = RTOUCR(418,F217_11265, (RTCV(RTOUCR(462,F1902_22249, (Current)))));
	F1902_22243(Current, tr1);
	RTLE;
}

/* {WEL_TOOL_INFO}.set_flags */
void F1902_22238 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	cwel_toolinfo_set_uflags((tp1), (arg1));
}

/* {WEL_TOOL_INFO}.set_id_with_window */
void F1902_22240 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	cwel_toolinfo_set_uid((tp1), (tp2));
	RTLE;
}

/* {WEL_TOOL_INFO}.set_instance */
void F1902_22243 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	cwel_toolinfo_set_hinst((tp1), (tp2));
	RTLE;
}

/* {WEL_TOOL_INFO}.set_text */
void F1902_22244 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNSMART(eif_new_type(944, 0).id);
	F944_3738(RTCW(loc1), arg1);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	tp2 = F944_3745(RTCW(loc1));
	cwel_toolinfo_set_lpsztext((tp1), (tp2));
	RTLE;
}

/* {WEL_TOOL_INFO}.structure_size */
static EIF_INTEGER_32 F1902_22247_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 461)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (TOOLINFO);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1902_22247 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,461,F1902_22247_body,(Current));
}

/* {WEL_TOOL_INFO}.main_args */
static EIF_REFERENCE F1902_22249_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(462)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(216, 0x01).id, 216, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1902_22249 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(462,F1902_22249_body,(Current));
}

/* {WEL_TOOL_INFO}.c_size_of_toolinfo */
EIF_INTEGER_32 F1902_22250 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (TOOLINFO);
	return Result;
}

/* {WEL_TOOL_INFO}.cwel_toolinfo_set_cbsize */
void F1902_22251 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_toolinfo_set_cbsize((arg1), (arg2));
}

/* {WEL_TOOL_INFO}.cwel_toolinfo_set_uflags */
void F1902_22252 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_toolinfo_set_uflags((arg1), (arg2));
}

/* {WEL_TOOL_INFO}.cwel_toolinfo_set_uid */
void F1902_22254 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_toolinfo_set_uid((arg1), (arg2));
}

/* {WEL_TOOL_INFO}.cwel_toolinfo_set_hinst */
void F1902_22256 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_toolinfo_set_hinst((arg1), (arg2));
}

/* {WEL_TOOL_INFO}.cwel_toolinfo_set_lpsztext */
void F1902_22257 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_toolinfo_set_lpsztext((arg1), (arg2));
}

void EIF_Minit1885 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
