/*
 * Code for class WEL_PARAGRAPH_FORMAT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1549.h"
#include <parafmt.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_PARAGRAPH_FORMAT}.make */
void F1411_17431 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R13210[dtype-1337])(Current);
	cwel_paraformat_set_cbsize((tp1), (ti4_1));
	RTLE;
}

/* {WEL_PARAGRAPH_FORMAT}.mask */
EIF_INTEGER_32 F1411_17432 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_paraformat_get_dwmask((tp1));
}

/* {WEL_PARAGRAPH_FORMAT}.set_alignment */
void F1411_17444 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1411_17452(Current, ((EIF_INTEGER_32) 8L));
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	cwel_paraformat_set_walignment((tp1), (arg1));
	RTLE;
}

/* {WEL_PARAGRAPH_FORMAT}.set_tabulations */
void F1411_17448 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	F1411_17452(Current, ((EIF_INTEGER_32) 16L));
	tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
	ti4_1 = F925_3198(RTCW(arg1));
	cwel_paraformat_set_ctabcount((tp1), (ti4_1));
	loc1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
	for (;;) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		ti4_2 = F925_3191(RTCW(arg1), loc1);
		cwel_paraformat_set_rgxtabs((tp1), (ti4_2), (loc2));
		loc1++;
		loc2++;
	}
	RTLE;
}

/* {WEL_PARAGRAPH_FORMAT}.set_mask */
void F1411_17451 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	cwel_paraformat_set_dwmask((tp1), (arg1));
}

/* {WEL_PARAGRAPH_FORMAT}.add_mask */
void F1411_17452 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1411_17432(Current);
	ti4_1 = F1258_14779(Current, ti4_1, arg1);
	F1411_17451(Current, ti4_1);
	RTLE;
}

/* {WEL_PARAGRAPH_FORMAT}.structure_size */
static EIF_INTEGER_32 F1411_17455_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 449)

	
	RTEV;
	RTOTP;
	Result = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R14748[Dtype(Current)-1410])(Current);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1411_17455 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,449,F1411_17455_body,(Current));
}

/* {WEL_PARAGRAPH_FORMAT}.c_size_of_paraformat */
EIF_INTEGER_32 F1411_17457 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (PARAFORMAT);
	return Result;
}

/* {WEL_PARAGRAPH_FORMAT}.cwel_paraformat_set_cbsize */
void F1411_17458 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_paraformat_set_cbsize((arg1), (arg2));
}

/* {WEL_PARAGRAPH_FORMAT}.cwel_paraformat_set_dwmask */
void F1411_17459 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_paraformat_set_dwmask((arg1), (arg2));
}

/* {WEL_PARAGRAPH_FORMAT}.cwel_paraformat_set_walignment */
void F1411_17464 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_paraformat_set_walignment((arg1), (arg2));
}

/* {WEL_PARAGRAPH_FORMAT}.cwel_paraformat_set_ctabcount */
void F1411_17465 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_paraformat_set_ctabcount((arg1), (arg2));
}

/* {WEL_PARAGRAPH_FORMAT}.cwel_paraformat_set_rgxtabs */
void F1411_17466 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	
	
	cwel_paraformat_set_rgxtabs((arg1), (arg2), (arg3));
}

/* {WEL_PARAGRAPH_FORMAT}.cwel_paraformat_get_dwmask */
EIF_INTEGER_32 F1411_17467 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_paraformat_get_dwmask((arg1));
	return Result;
}

void EIF_Minit1549 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
