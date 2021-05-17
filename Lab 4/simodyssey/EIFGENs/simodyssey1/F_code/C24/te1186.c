/*
 * Code for class TEST
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "te1186.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

void F270_2 (EIF_REFERENCE Current, EIF_REFERENCE parent)
{
	GTCX
	uint32 offset_position = 0;
	RTLD;
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,parent);
	RTLIU(2);
	
	HEADER(Current)->ov_flags |= EO_COMP;
	offset_position = + _OBJSIZ_7_2_0_2_0_0_0_0_ + OVERHEAD;
	*(EIF_REFERENCE *) (Current + _REFACS_6_) = Current + offset_position;
	HEADER(Current + offset_position)->ov_flags = EO_EXP;
	
	RT_DFS(HEADER(Current + offset_position), eif_new_type(103, 0x00).id);
	HEADER(Current + offset_position)->ov_size = offset_position + (Current - parent);
	RTLE;
}

/* {TEST}.make */
void F270_11932 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1556,0xFF01,0xFFF9,0,1475,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRF(typres0.id, (EIF_POINTER) __A1186_78, (EIF_POINTER) _A1186_78, (EIF_POINTER)(F270_11934),tr1, 1, 0);
	}
	F269_11905(Current, tr2);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1556,0xFF01,0xFFF9,0,1475,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRF(typres0.id, (EIF_POINTER) __A1186_79, (EIF_POINTER) _A1186_79, (EIF_POINTER)(F270_11935),tr1, 1, 0);
	}
	F269_11905(Current, tr2);
	RTLE;
}

/* {TEST}.t1 */
EIF_BOOLEAN F270_11934 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = RTMS_EX_H("t1: test direction utility",26,2030849401);
	F269_11910(Current, tr1);
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	tb5 = '\0';
	tb6 = '\0';
	tr1 = (Current+ _OBJSIZ_7_2_0_2_0_0_0_0_ + OVERHEAD);
	tr1 = F104_10107(RTCW(tr1), ((EIF_INTEGER_32) 1L));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ((EIF_INTEGER_32) -1L);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	if (RTEQ(tr1, tr2)) {
		tr1 = (Current+ _OBJSIZ_7_2_0_2_0_0_0_0_ + OVERHEAD);
		tr1 = F104_10107(RTCW(tr1), ((EIF_INTEGER_32) 2L));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0.id, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ((EIF_INTEGER_32) -1L);
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1L);
		tb6 = RTEQ(tr1, tr2);
	}
	if (tb6) {
		tr1 = (Current+ _OBJSIZ_7_2_0_2_0_0_0_0_ + OVERHEAD);
		tr1 = F104_10107(RTCW(tr1), ((EIF_INTEGER_32) 3L));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0.id, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ((EIF_INTEGER_32) 0L);
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1L);
		tb5 = RTEQ(tr1, tr2);
	}
	if (tb5) {
		tr1 = (Current+ _OBJSIZ_7_2_0_2_0_0_0_0_ + OVERHEAD);
		tr1 = F104_10107(RTCW(tr1), ((EIF_INTEGER_32) 4L));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0.id, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ((EIF_INTEGER_32) 1L);
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 1L);
		tb4 = RTEQ(tr1, tr2);
	}
	if (tb4) {
		tr1 = (Current+ _OBJSIZ_7_2_0_2_0_0_0_0_ + OVERHEAD);
		tr1 = F104_10107(RTCW(tr1), ((EIF_INTEGER_32) 5L));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0.id, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ((EIF_INTEGER_32) 1L);
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 0L);
		tb3 = RTEQ(tr1, tr2);
	}
	if (tb3) {
		tr1 = (Current+ _OBJSIZ_7_2_0_2_0_0_0_0_ + OVERHEAD);
		tr1 = F104_10107(RTCW(tr1), ((EIF_INTEGER_32) 6L));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0.id, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ((EIF_INTEGER_32) 1L);
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) -1L);
		tb2 = RTEQ(tr1, tr2);
	}
	if (tb2) {
		tr1 = (Current+ _OBJSIZ_7_2_0_2_0_0_0_0_ + OVERHEAD);
		tr1 = F104_10107(RTCW(tr1), ((EIF_INTEGER_32) 7L));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0.id, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ((EIF_INTEGER_32) 0L);
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) -1L);
		tb1 = RTEQ(tr1, tr2);
	}
	if (tb1) {
		tr1 = (Current+ _OBJSIZ_7_2_0_2_0_0_0_0_ + OVERHEAD);
		tr1 = F104_10107(RTCW(tr1), ((EIF_INTEGER_32) 8L));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0.id, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ((EIF_INTEGER_32) -1L);
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) -1L);
		Result = RTEQ(tr1, tr2);
	}
	RTLE;
	return Result;
}

/* {TEST}.t2 */
EIF_BOOLEAN F270_11935 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTMS_EX_H("t2: ",4,1949448736);
	F269_11910(Current, tr1);
	RTLE;
	return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

void EIF_Minit1186 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
