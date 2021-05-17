/*
 * Code for class WEL_GDIP_GRAYSCALE_IMAGE_DRAWER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1020.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_GDIP_GRAYSCALE_IMAGE_DRAWER}.draw_grayscale_bitmap */
void F62_9667 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,loc1);
	RTLR(7,arg2);
	RTLIU(8);
	
	RTGC;
	loc2 = RTLNS(eif_new_type(1330, 0x01).id, 1330, _OBJSIZ_0_1_0_0_0_2_0_0_);
	F1331_15689(RTCW(loc2));
	F1331_15690(RTCW(loc2));
	tr1 = F62_9671(Current);
	F1331_15692(RTCW(loc2), tr1);
	loc5 = F1333_15774(RTCW(arg1));
	loc6 = F1333_15775(RTCW(arg1));
	loc3 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1408_17321(RTCW(loc3), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), loc5, loc6);
	loc4 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1408_17321(RTCW(loc4), arg3, arg4, (EIF_INTEGER_32) (arg3 + loc5), (EIF_INTEGER_32) (arg4 + loc6));
	loc1 = RTLNS(eif_new_type(1331, 0x01).id, 1331, _OBJSIZ_0_1_0_0_0_2_0_0_);
	F1332_15700(RTCW(loc1), arg2);
	F1332_15706(RTCW(loc1), arg1, loc4, loc3, ((EIF_INTEGER_32) 2L), loc2);
	F1332_15726(RTCW(loc1));
	F1296_15104(RTCW(loc4));
	F1296_15104(RTCW(loc3));
	F1331_15694(RTCW(loc2));
	RTLE;
}

/* {WEL_GDIP_GRAYSCALE_IMAGE_DRAWER}.draw_grayscale_bitmap_or_icon_with_memory_buffer */
void F62_9668 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_REFERENCE arg6, EIF_BOOLEAN arg7)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,arg3);
	RTLR(5,arg6);
	RTLR(6,arg2);
	RTLIU(7);
	
	RTGC;
	loc1 = F1320_15574(RTCW(arg1));
	tb1 = '\0';
	tb2 = '\0';
	if ((EIF_BOOLEAN) !arg7) {
		ti4_1 = F1380_16605(RTCW(loc1));
		tb2 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 32L));
	}
	if (tb2) {
		tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_3_0_3_0_1_);
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp2 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		tb1 = (EIF_BOOLEAN)(tp1 != tp2);
	}
	if (tb1) {
		loc2 = RTLNS(eif_new_type(1333, 0x01).id, 1333, _OBJSIZ_1_1_0_0_0_2_0_0_);
		F1334_15805(RTCW(loc2), arg1);
		F62_9670(Current, loc2, arg3, arg4, arg5, arg6);
		F1296_15104(RTCW(loc2));
	} else {
		F62_9669(Current, arg2, arg3, arg4, arg5, arg6);
	}
	F1296_15104(RTCW(loc1));
	RTLE;
}

/* {WEL_GDIP_GRAYSCALE_IMAGE_DRAWER}.draw_grayscale_icon_with_memory_buffer */
void F62_9669 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,arg5);
	RTLR(4,Current);
	RTLIU(5);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1333, 0x01).id, 1333, _OBJSIZ_1_1_0_0_0_2_0_0_);
	F1334_15801(RTCW(loc1), arg1);
	F62_9670(Current, loc1, arg2, arg3, arg4, arg5);
	F1296_15104(RTCW(loc1));
	RTLE;
}

/* {WEL_GDIP_GRAYSCALE_IMAGE_DRAWER}.draw_grayscale_bitmap_with_memory_buffer */
void F62_9670 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,arg2);
	RTLR(3,loc2);
	RTLR(4,arg5);
	RTLR(5,loc3);
	RTLR(6,tr1);
	RTLR(7,Current);
	RTLIU(8);
	
	RTGC;
	loc4 = F1333_15774(RTCW(arg1));
	loc5 = F1333_15775(RTCW(arg1));
	loc1 = RTLNS(eif_new_type(1306, 0x01).id, 1306, _OBJSIZ_6_2_0_3_0_7_0_0_);
	F1307_15414(RTCW(loc1), arg2);
	loc2 = RTLNS(eif_new_type(1319, 0x01).id, 1319, _OBJSIZ_0_3_0_3_0_2_0_0_);
	F1320_15566(RTCW(loc2), arg2, loc4, loc5);
	F1306_15265(RTCW(loc1), loc2);
	F1306_15252(RTCW(loc1), arg5);
	loc3 = RTLNS(eif_new_type(1320, 0x01).id, 1320, _OBJSIZ_0_2_0_3_0_1_0_0_);
	F1321_15590(RTCW(loc3), arg5);
	tr1 = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1408_17321(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), loc4, loc5);
	F1306_15298(RTCW(loc1), tr1, loc3);
	F519_14213(RTCW(loc3));
	F62_9667(Current, arg1, loc1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	F519_14212(RTCW(loc2));
	F1306_15311(RTCW(arg2), arg3, arg4, loc4, loc5, loc1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 13369376L));
	RTLE;
}

/* {WEL_GDIP_GRAYSCALE_IMAGE_DRAWER}.disabled_color_matrix */
EIF_REFERENCE F62_9671 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = F62_9673(Current);
	tr2 = F62_9672(Current);
	Result = F62_9674(Current, tr1, tr2);
	RTLE;
	return Result;
}

/* {WEL_GDIP_GRAYSCALE_IMAGE_DRAWER}.disabled_color_matrix_1 */
EIF_REFERENCE F62_9672 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	Result = RTLNS(eif_new_type(40, 0x01).id, 40, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F41_9151(RTCW(Result));
	{
		static EIF_TYPE_INDEX typarr0[] = {1196,1481,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 5L),sizeof(EIF_REAL_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 5L;
	}
	*((EIF_REAL_32 *)tr2+0) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.2125;
	*((EIF_REAL_32 *)tr2+1) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.2125;
	*((EIF_REAL_32 *)tr2+2) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.2125;
	*((EIF_REAL_32 *)tr2+3) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.0;
	*((EIF_REAL_32 *)tr2+4) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.0;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F1197_3091)(tr2);
	F41_9153(RTCW(Result), tr1, ((EIF_INTEGER_32) 0L));
	{
		static EIF_TYPE_INDEX typarr0[] = {1196,1481,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 5L),sizeof(EIF_REAL_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 5L;
	}
	*((EIF_REAL_32 *)tr2+0) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.2577;
	*((EIF_REAL_32 *)tr2+1) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.2577;
	*((EIF_REAL_32 *)tr2+2) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.2577;
	*((EIF_REAL_32 *)tr2+3) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.0;
	*((EIF_REAL_32 *)tr2+4) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.0;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F1197_3091)(tr2);
	F41_9153(RTCW(Result), tr1, ((EIF_INTEGER_32) 1L));
	{
		static EIF_TYPE_INDEX typarr0[] = {1196,1481,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 5L),sizeof(EIF_REAL_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 5L;
	}
	*((EIF_REAL_32 *)tr2+0) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.0361;
	*((EIF_REAL_32 *)tr2+1) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.0361;
	*((EIF_REAL_32 *)tr2+2) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.0361;
	*((EIF_REAL_32 *)tr2+3) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.0;
	*((EIF_REAL_32 *)tr2+4) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.0;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F1197_3091)(tr2);
	F41_9153(RTCW(Result), tr1, ((EIF_INTEGER_32) 2L));
	{
		static EIF_TYPE_INDEX typarr0[] = {1196,1481,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 5L),sizeof(EIF_REAL_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 5L;
	}
	*((EIF_REAL_32 *)tr2+0) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.0;
	*((EIF_REAL_32 *)tr2+1) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.0;
	*((EIF_REAL_32 *)tr2+2) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.0;
	*((EIF_REAL_32 *)tr2+3) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 1.0;
	*((EIF_REAL_32 *)tr2+4) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.0;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F1197_3091)(tr2);
	F41_9153(RTCW(Result), tr1, ((EIF_INTEGER_32) 3L));
	{
		static EIF_TYPE_INDEX typarr0[] = {1196,1481,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 5L),sizeof(EIF_REAL_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 5L;
	}
	*((EIF_REAL_32 *)tr2+0) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.38;
	*((EIF_REAL_32 *)tr2+1) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.38;
	*((EIF_REAL_32 *)tr2+2) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.38;
	*((EIF_REAL_32 *)tr2+3) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.0;
	*((EIF_REAL_32 *)tr2+4) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 1.0;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F1197_3091)(tr2);
	F41_9153(RTCW(Result), tr1, ((EIF_INTEGER_32) 4L));
	RTLE;
	return Result;
}

/* {WEL_GDIP_GRAYSCALE_IMAGE_DRAWER}.disabled_color_matrix_2 */
EIF_REFERENCE F62_9673 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	Result = RTLNS(eif_new_type(40, 0x01).id, 40, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F41_9151(RTCW(Result));
	{
		static EIF_TYPE_INDEX typarr0[] = {1196,1481,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 5L),sizeof(EIF_REAL_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 5L;
	}
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	*((EIF_REAL_32 *)tr2+0) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+1) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+2) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+3) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+4) = (EIF_REAL_32) tr4_1;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F1197_3091)(tr2);
	F41_9153(RTCW(Result), tr1, ((EIF_INTEGER_32) 0L));
	{
		static EIF_TYPE_INDEX typarr0[] = {1196,1481,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 5L),sizeof(EIF_REAL_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 5L;
	}
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+0) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	*((EIF_REAL_32 *)tr2+1) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+2) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+3) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+4) = (EIF_REAL_32) tr4_1;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F1197_3091)(tr2);
	F41_9153(RTCW(Result), tr1, ((EIF_INTEGER_32) 1L));
	{
		static EIF_TYPE_INDEX typarr0[] = {1196,1481,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 5L),sizeof(EIF_REAL_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 5L;
	}
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+0) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+1) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	*((EIF_REAL_32 *)tr2+2) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+3) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+4) = (EIF_REAL_32) tr4_1;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F1197_3091)(tr2);
	F41_9153(RTCW(Result), tr1, ((EIF_INTEGER_32) 2L));
	{
		static EIF_TYPE_INDEX typarr0[] = {1196,1481,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 5L),sizeof(EIF_REAL_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 5L;
	}
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+0) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+1) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+2) = (EIF_REAL_32) tr4_1;
	*((EIF_REAL_32 *)tr2+3) = (EIF_REAL_32) (EIF_REAL_32) (EIF_REAL_64) 0.7;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+4) = (EIF_REAL_32) tr4_1;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F1197_3091)(tr2);
	F41_9153(RTCW(Result), tr1, ((EIF_INTEGER_32) 3L));
	{
		static EIF_TYPE_INDEX typarr0[] = {1196,1481,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 5L),sizeof(EIF_REAL_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 5L;
	}
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+0) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+1) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+2) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+3) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+4) = (EIF_REAL_32) tr4_1;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F1197_3091)(tr2);
	F41_9153(RTCW(Result), tr1, ((EIF_INTEGER_32) 4L));
	RTLE;
	return Result;
}

/* {WEL_GDIP_GRAYSCALE_IMAGE_DRAWER}.mulitply_color_matrix */
EIF_REFERENCE F62_9674 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REAL_32 loc5 = (EIF_REAL_32) 0;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Result);
	RTLR(1,loc4);
	RTLR(2,Current);
	RTLR(3,arg1);
	RTLR(4,arg2);
	RTLIU(5);
	
	RTGC;
	Result = RTLNS(eif_new_type(40, 0x01).id, 40, _OBJSIZ_1_0_0_0_0_0_0_0_);
	F41_9151(RTCW(Result));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,921,1481,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		loc4 = RTLNS(typres0.id, 921, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	F922_3186(RTCW(loc4), (EIF_REAL_32) (EIF_REAL_64) 0.0, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L));
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 4L))) break;
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 4L))) break;
			tr4_1 = F41_9155(RTCW(arg1), loc3, loc2);
			F922_3210(RTCW(loc4), tr4_1, loc3);
			loc3++;
		}
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 4L))) break;
			loc5 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
			loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			for (;;) {
				if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 4L))) break;
				tr4_1 = F41_9155(RTCW(arg2), loc1, loc3);
				tr4_2 = F922_3191(RTCW(loc4), loc3);
				loc5 += (EIF_REAL_32) (tr4_1 * tr4_2);
				loc3++;
			}
			F41_9152(RTCW(Result), loc5, loc1, loc2);
			loc1++;
		}
		loc2++;
	}
	RTLE;
	return Result;
}

void EIF_Minit1020 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
