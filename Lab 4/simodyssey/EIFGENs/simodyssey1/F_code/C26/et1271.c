/*
 * Code for class ETF_VALUE_ARG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1271.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

void F362_2 (EIF_REFERENCE Current, EIF_REFERENCE parent)
{
	GTCX
	uint32 offset_position = 0;
	RTLD;
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,parent);
	RTLIU(2);
	
	HEADER(Current)->ov_flags |= EO_COMP;
	offset_position = + _OBJSIZ_2_0_0_0_0_0_0_0_ + OVERHEAD;
	*(EIF_REFERENCE *) (Current + _REFACS_1_) = Current + offset_position;
	HEADER(Current + offset_position)->ov_flags = EO_EXP;
	
	RT_DFS(HEADER(Current + offset_position), eif_new_type(1256, 0x00).id);
	HEADER(Current + offset_position)->ov_size = offset_position + (Current - parent);
	nstcall = -1, F1257_14734(Current + offset_position);
	RTLE;
}

/* {ETF_VALUE_ARG}.make */
void F362_13132 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	tr1 = RTLNS(eif_new_type(1256, 0x00).id, 1256, _OBJSIZ_1_0_0_1_0_0_0_0_);
	F1257_14735(RTCW(tr1), arg1);
	tr1 = (tr1);
	RTXA(tr1, (Current+ _OBJSIZ_2_0_0_0_0_0_0_0_ + OVERHEAD));
	RTLE;
}

/* {ETF_VALUE_ARG}.out */
EIF_REFERENCE F362_13134 (EIF_REFERENCE Current)
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
	tr1 = (Current+ _OBJSIZ_2_0_0_0_0_0_0_0_ + OVERHEAD);
	Result = F1257_14758(RTCW(tr1));
	RTLE;
	return Result;
}

void EIF_Minit1271 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
