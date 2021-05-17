/*
 * Code for class ETF_INPUT_HANDLER_INTERFACE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1263.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_INPUT_HANDLER_INTERFACE}.make_without_running */
void F354_13102 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLIU(4);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,87,0xFF01,0xFFF9,1,1475,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F88_9984(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	RTLE;
}

/* {ETF_INPUT_HANDLER_INTERFACE}.etf_evt_out */
EIF_REFERENCE F354_13104 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,loc3);
	RTLR(3,Result);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	loc2 = eif_boxed_item(arg1,1);
	loc3 = eif_boxed_item(arg1,2);
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(Result));
	tr1 = RTMS_EX_H("(",1,40);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(loc2))-1560])(loc2, tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	loc1 = *(EIF_INTEGER_32 *)(RTCW(loc3)+ _LNGOFF_1_1_0_1_);
	for (;;) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc3)+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		tr1 = F919_3191(RTCW(loc3), loc1);
		tr1 = *(EIF_REFERENCE *)(RTCW(tr1));
		tb1 = F743_2537(RTCW(tr1));
		if (tb1) {
			tr1 = F919_3191(RTCW(loc3), loc1);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(RTCW(tr1))-0])(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
		} else {
			tr1 = F919_3191(RTCW(loc3), loc1);
			tr1 = *(EIF_REFERENCE *)(RTCW(tr1));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
		}
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc3)+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN) (loc1 < ti4_2)) {
			tr1 = RTMS_EX_H(", ",2,11296);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
		}
		loc1++;
	}
	tr1 = RTMS_EX_H(")",1,41);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	RTLE;
	return Result;
}

/* {ETF_INPUT_HANDLER_INTERFACE}.input_cmds_syntax_err_msg */

EIF_REFERENCE F354_13109 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (173,RTMS_EX_H("Syntax Error: specification of command executions cannot be parsed",66,187532644));
}

/* {ETF_INPUT_HANDLER_INTERFACE}.input_cmds_type_err_msg */

EIF_REFERENCE F354_13110 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (174,RTMS_EX_H("Type Error: specification of command executions is not type-correct",67,295559028));
}

/* {ETF_INPUT_HANDLER_INTERFACE}.parse_and_validate_input_string */
void F354_13111 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,loc2);
	RTLR(7,tr3);
	RTLR(8,tr4);
	RTLIU(9);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1894, 0x01).id, 1894, _OBJSIZ_52_4_0_52_1_0_0_0_);
	tr1 = F353_13100(Current);
	tr2 = F353_13097(Current);
	F1895_22103(RTCW(loc1), tr1, tr2);
	F1895_22118(RTCW(loc1), *(EIF_REFERENCE *)(Current));
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_47_);
	tb1 = F743_2537(RTCW(tr1));
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_46_);
		loc3 = F354_13113(Current, tr1);
		tb1 = F743_2537(RTCW(loc3));
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_46_);
			tr1 = F919_3195(RTCW(tr1));
			loc4 = (EIF_REFERENCE) tr1;
			for (;;) {
				tb1 = F1081_4373(loc4);
				if (tb1) break;
				tr1 = F1081_4364(loc4);
				loc2 = F354_13112(Current, tr1);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				F261_11835(RTCW(tr1), loc2);
				F1081_4379(loc4);
			}
		} else {
			*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1560,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 2, 0);
			}
			tr3 = RTOUCR(174,F354_13110, (Current));
			tr4 = RTMS_EX_H("\012",1,10);
			tr3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr3))-1560])(tr3, tr4);
			tr3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr3))-1560])(tr3, loc3);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			F88_9988(RTCW(tr1), tr2);
		}
	} else {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1560,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		tr3 = RTOUCR(173,F354_13109, (Current));
		tr4 = RTMS_EX_H("\012",1,10);
		tr3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr3))-1560])(tr3, tr4);
		tr4 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_47_);
		tr3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr3))-1560])(tr3, tr4);
		((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
		RTAR(tr2,tr3);
		F88_9988(RTCW(tr1), tr2);
	}
	RTLE;
}

/* {ETF_INPUT_HANDLER_INTERFACE}.evt_to_cmd */
EIF_REFERENCE F354_13112 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,Current);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLR(8,loc4);
	RTLR(9,Result);
	RTLR(10,loc5);
	RTLIU(11);
	
	RTGC;
	loc1 = eif_boxed_item(arg1,1);
	loc2 = eif_boxed_item(arg1,2);
	loc3 = RTLNS(eif_new_type(1173, 0x01).id, 1173, _OBJSIZ_6_1_0_0_0_0_0_0_);
	tr1 = RTMS_EX_H("dummy",5,1970873721);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,1475,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 1, 1);
	}
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1174_14698(RTCW(loc3), tr1, tr2, tr3);
	if (RTEQ(loc1, RTMS_EX_H("test",4,1952805748))) {
		tb1 = '\0';
		tb2 = '\0';
		tr1 = F919_3191(RTCW(loc2), ((EIF_INTEGER_32) 1L));
		loc4 = tr1;
		loc4 = RTRV(eif_new_type(366, 0x01),loc4);
		if (EIF_TEST(loc4)) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc4+ _LNGOFF_1_0_0_0_);
			tb2 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_1);
		}
		if (tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc4+ _LNGOFF_1_0_0_0_);
			tb1 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 101L));
		}
		if (tb1) {
			Result = RTLNS(eif_new_type(1185, 0x01).id, 1185, _OBJSIZ_6_1_0_0_0_0_0_0_);
			tr1 = RTMS_EX_H("test",4,1952805748);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,1508,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 2, 1);
			}
			ti4_1 = *(EIF_INTEGER_32 *)(loc4+ _LNGOFF_1_0_0_0_);
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ti4_1;
			tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			F1185_14715(RTCW(Result), tr1, tr2, tr3);
		} else {
			RTLE;
			return (EIF_REFERENCE) loc3;
		}
	} else {
		if (RTEQ(loc1, RTMS_EX_H("play",4,1886151033))) {
			Result = RTLNS(eif_new_type(1183, 0x01).id, 1183, _OBJSIZ_6_1_0_0_0_0_0_0_);
			tr1 = RTMS_EX_H("play",4,1886151033);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,1475,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 1, 1);
			}
			tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			F1183_14712(RTCW(Result), tr1, tr2, tr3);
		} else {
			if (RTEQ(loc1, RTMS_EX_H("abort",5,1652215924))) {
				Result = RTLNS(eif_new_type(1181, 0x01).id, 1181, _OBJSIZ_6_1_0_0_0_0_0_0_);
				tr1 = RTMS_EX_H("abort",5,1652215924);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,1475,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr2 = RTLNTS(typres0.id, 1, 1);
				}
				tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				F1181_14709(RTCW(Result), tr1, tr2, tr3);
			} else {
				if (RTEQ(loc1, RTMS_EX_H("move",4,1836021349))) {
					tb1 = '\0';
					tr1 = F919_3191(RTCW(loc2), ((EIF_INTEGER_32) 1L));
					loc5 = tr1;
					loc5 = RTRV(eif_new_type(367, 0x01),loc5);
					if (EIF_TEST(loc5)) {
						tb2 = '\01';
						tb3 = '\01';
						tb4 = '\01';
						tb5 = '\01';
						tb6 = '\01';
						tb7 = '\01';
						tb8 = '\01';
						ti4_1 = *(EIF_INTEGER_32 *)(loc5+ _LNGOFF_1_0_0_0_);
						if (!(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
							ti4_1 = *(EIF_INTEGER_32 *)(loc5+ _LNGOFF_1_0_0_0_);
							tb8 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
						}
						if (!tb8) {
							ti4_1 = *(EIF_INTEGER_32 *)(loc5+ _LNGOFF_1_0_0_0_);
							tb7 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L));
						}
						if (!tb7) {
							ti4_1 = *(EIF_INTEGER_32 *)(loc5+ _LNGOFF_1_0_0_0_);
							tb6 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L));
						}
						if (!tb6) {
							ti4_1 = *(EIF_INTEGER_32 *)(loc5+ _LNGOFF_1_0_0_0_);
							tb5 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 5L));
						}
						if (!tb5) {
							ti4_1 = *(EIF_INTEGER_32 *)(loc5+ _LNGOFF_1_0_0_0_);
							tb4 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 6L));
						}
						if (!tb4) {
							ti4_1 = *(EIF_INTEGER_32 *)(loc5+ _LNGOFF_1_0_0_0_);
							tb3 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 7L));
						}
						if (!tb3) {
							ti4_1 = *(EIF_INTEGER_32 *)(loc5+ _LNGOFF_1_0_0_0_);
							tb2 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 8L));
						}
						tb1 = tb2;
					}
					if (tb1) {
						Result = RTLNS(eif_new_type(1191, 0x01).id, 1191, _OBJSIZ_6_1_0_0_0_0_0_0_);
						tr1 = RTMS_EX_H("move",4,1836021349);
						{
							static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,1508,0xFFFF};
							EIF_TYPE typres0;
							static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
							
							typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							tr2 = RTLNTS(typres0.id, 2, 1);
						}
						ti4_1 = *(EIF_INTEGER_32 *)(loc5+ _LNGOFF_1_0_0_0_);
						((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ti4_1;
						tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						F1191_14725(RTCW(Result), tr1, tr2, tr3);
					} else {
						Result = (EIF_REFERENCE) loc3;
					}
				} else {
					if (RTEQ(loc1, RTMS_EX_H("land",4,1818324580))) {
						Result = RTLNS(eif_new_type(1189, 0x01).id, 1189, _OBJSIZ_6_1_0_0_0_0_0_0_);
						tr1 = RTMS_EX_H("land",4,1818324580);
						{
							static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,1475,0xFFFF};
							EIF_TYPE typres0;
							static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
							
							typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							tr2 = RTLNTS(typres0.id, 1, 1);
						}
						tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						F1189_14722(RTCW(Result), tr1, tr2, tr3);
					} else {
						if (RTEQ(loc1, RTMS_EX_H("liftoff",7,684384358))) {
							Result = RTLNS(eif_new_type(1179, 0x01).id, 1179, _OBJSIZ_6_1_0_0_0_0_0_0_);
							tr1 = RTMS_EX_H("liftoff",7,684384358);
							{
								static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,1475,0xFFFF};
								EIF_TYPE typres0;
								static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
								
								typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
								tr2 = RTLNTS(typres0.id, 1, 1);
							}
							tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
							F1179_14706(RTCW(Result), tr1, tr2, tr3);
						} else {
							if (RTEQ(loc1, RTMS_EX_H("pass",4,1885434739))) {
								Result = RTLNS(eif_new_type(1187, 0x01).id, 1187, _OBJSIZ_6_1_0_0_0_0_0_0_);
								tr1 = RTMS_EX_H("pass",4,1885434739);
								{
									static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,1475,0xFFFF};
									EIF_TYPE typres0;
									static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
									
									typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
									tr2 = RTLNTS(typres0.id, 1, 1);
								}
								tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
								F1187_14719(RTCW(Result), tr1, tr2, tr3);
							} else {
								if (RTEQ(loc1, RTMS_EX_H("wormhole",8,2038174821))) {
									Result = RTLNS(eif_new_type(1177, 0x01).id, 1177, _OBJSIZ_6_1_0_0_0_0_0_0_);
									tr1 = RTMS_EX_H("wormhole",8,2038174821);
									{
										static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,1475,0xFFFF};
										EIF_TYPE typres0;
										static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
										
										typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
										tr2 = RTLNTS(typres0.id, 1, 1);
									}
									tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
									F1177_14703(RTCW(Result), tr1, tr2, tr3);
								} else {
									if (RTEQ(loc1, RTMS_EX_H("status",6,1862012275))) {
										Result = RTLNS(eif_new_type(1175, 0x01).id, 1175, _OBJSIZ_6_1_0_0_0_0_0_0_);
										tr1 = RTMS_EX_H("status",6,1862012275);
										{
											static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,1475,0xFFFF};
											EIF_TYPE typres0;
											static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
											
											typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
											tr2 = RTLNTS(typres0.id, 1, 1);
										}
										tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
										F1175_14700(RTCW(Result), tr1, tr2, tr3);
									} else {
										RTLE;
										return (EIF_REFERENCE) loc3;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {ETF_INPUT_HANDLER_INTERFACE}.find_invalid_evt_trace */
EIF_REFERENCE F354_13113 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(11);
	RTLR(0,Result);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,loc5);
	RTLR(4,Current);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,loc6);
	RTLR(8,tr1);
	RTLR(9,tr2);
	RTLR(10,loc7);
	RTLIU(11);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(Result));
	loc1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
	for (;;) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		loc2 = F919_3191(RTCW(arg1), loc1);
		loc5 = F354_13104(Current, loc2);
		loc3 = eif_boxed_item(loc2,1);
		loc4 = eif_boxed_item(loc2,2);
		if (RTEQ(loc3, RTMS_EX_H("test",4,1952805748))) {
			tb1 = '\0';
			tb2 = '\0';
			tb3 = '\0';
			ti4_2 = F919_3198(RTCW(loc4));
			if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 1L))) {
				tr1 = F919_3191(RTCW(loc4), ((EIF_INTEGER_32) 1L));
				loc6 = tr1;
				loc6 = RTRV(eif_new_type(366, 0x01),loc6);
				tb3 = EIF_TEST(loc6);
			}
			if (tb3) {
				ti4_2 = *(EIF_INTEGER_32 *)(loc6+ _LNGOFF_1_0_0_0_);
				tb2 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_2);
			}
			if (tb2) {
				ti4_2 = *(EIF_INTEGER_32 *)(loc6+ _LNGOFF_1_0_0_0_);
				tb1 = (EIF_BOOLEAN) (ti4_2 <= ((EIF_INTEGER_32) 101L));
			}
			if ((EIF_BOOLEAN) !tb1) {
				tb1 = F743_2537(RTCW(Result));
				if ((EIF_BOOLEAN) !tb1) {
					tr1 = RTMS_EX_H("\012",1,10);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				}
				tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(loc5))-1560])(loc5, tr1);
				tr2 = RTMS_EX_H("test(p_threshold: THRESHOLD = 1 .. 101)",39,650139945);
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
			}
		} else {
			if (RTEQ(loc3, RTMS_EX_H("play",4,1886151033))) {
			} else {
				if (RTEQ(loc3, RTMS_EX_H("abort",5,1652215924))) {
				} else {
					if (RTEQ(loc3, RTMS_EX_H("move",4,1836021349))) {
						tb1 = '\0';
						tb2 = '\0';
						ti4_2 = F919_3198(RTCW(loc4));
						if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 1L))) {
							tr1 = F919_3191(RTCW(loc4), ((EIF_INTEGER_32) 1L));
							loc7 = tr1;
							loc7 = RTRV(eif_new_type(367, 0x01),loc7);
							tb2 = EIF_TEST(loc7);
						}
						if (tb2) {
							tb2 = '\01';
							tb3 = '\01';
							tb4 = '\01';
							tb5 = '\01';
							tb6 = '\01';
							tb7 = '\01';
							tb8 = '\01';
							ti4_2 = *(EIF_INTEGER_32 *)(loc7+ _LNGOFF_1_0_0_0_);
							if (!(EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 1L))) {
								ti4_2 = *(EIF_INTEGER_32 *)(loc7+ _LNGOFF_1_0_0_0_);
								tb8 = (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 2L));
							}
							if (!tb8) {
								ti4_2 = *(EIF_INTEGER_32 *)(loc7+ _LNGOFF_1_0_0_0_);
								tb7 = (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 3L));
							}
							if (!tb7) {
								ti4_2 = *(EIF_INTEGER_32 *)(loc7+ _LNGOFF_1_0_0_0_);
								tb6 = (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 4L));
							}
							if (!tb6) {
								ti4_2 = *(EIF_INTEGER_32 *)(loc7+ _LNGOFF_1_0_0_0_);
								tb5 = (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 5L));
							}
							if (!tb5) {
								ti4_2 = *(EIF_INTEGER_32 *)(loc7+ _LNGOFF_1_0_0_0_);
								tb4 = (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 6L));
							}
							if (!tb4) {
								ti4_2 = *(EIF_INTEGER_32 *)(loc7+ _LNGOFF_1_0_0_0_);
								tb3 = (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 7L));
							}
							if (!tb3) {
								ti4_2 = *(EIF_INTEGER_32 *)(loc7+ _LNGOFF_1_0_0_0_);
								tb2 = (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 8L));
							}
							tb1 = tb2;
						}
						if ((EIF_BOOLEAN) !tb1) {
							tb1 = F743_2537(RTCW(Result));
							if ((EIF_BOOLEAN) !tb1) {
								tr1 = RTMS_EX_H("\012",1,10);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
							}
							tr1 = RTMS_EX_H(" does not conform to declaration ",33,1347883296);
							tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(loc5))-1560])(loc5, tr1);
							tr2 = RTMS_EX_H("move(dir: DIRECTION = {N, NE, E, SE, S, SW, W, NW})",51,240346665);
							tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
						}
					} else {
						if (RTEQ(loc3, RTMS_EX_H("land",4,1818324580))) {
						} else {
							if (RTEQ(loc3, RTMS_EX_H("liftoff",7,684384358))) {
							} else {
								if (RTEQ(loc3, RTMS_EX_H("pass",4,1885434739))) {
								} else {
									if (RTEQ(loc3, RTMS_EX_H("wormhole",8,2038174821))) {
									} else {
										if (RTEQ(loc3, RTMS_EX_H("status",6,1862012275))) {
										} else {
											tb1 = F743_2537(RTCW(Result));
											if ((EIF_BOOLEAN) !tb1) {
												tr1 = RTMS_EX_H("\012",1,10);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
											}
											tr1 = RTMS_EX_H("Error: unknown event name ",26,1919922208);
											tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, loc3);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		loc1++;
	}
	RTLE;
	return Result;
}

void EIF_Minit1263 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
