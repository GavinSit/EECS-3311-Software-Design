/*
 * Code for class WEL_SHARED_TEMPORARY_OBJECTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1308.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_SHARED_TEMPORARY_OBJECTS}.wel_rect */
static EIF_REFERENCE F468_13503_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(326)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1408_17321(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F468_13503 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(326,F468_13503_body,(Current));
}

/* {WEL_SHARED_TEMPORARY_OBJECTS}.wel_string */
static EIF_REFERENCE F468_13504_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(435)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F944_3739(RTCW(tr1), ((EIF_INTEGER_32) 256L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F468_13504 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(435,F468_13504_body,(Current));
}

/* {WEL_SHARED_TEMPORARY_OBJECTS}.wel_string_from_string */
EIF_REFERENCE F468_13506 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
	if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 10000L))) {
		Result = RTOUCR(435,F468_13504, (Current));
		F944_3753(RTCW(Result), arg1);
	} else {
		Result = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F944_3738(RTCW(Result), arg1);
		RTLE;
		return (EIF_REFERENCE) Result;
	}
	RTLE;
	return Result;
}

void EIF_Minit1308 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
