/*
 * Code for class ETF_TYPE_CONSTRAINTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1262.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_TYPE_CONSTRAINTS}.enum_items */
EIF_REFERENCE F353_13097 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1000,1508,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 1000, _OBJSIZ_5_3_0_9_0_0_0_0_);
	}
	F1001_3924(RTCW(Result), ((EIF_INTEGER_32) 10L));
	tr1 = RTMS_EX_H("N",1,78);
	F1001_3972(RTCW(Result), ((EIF_INTEGER_32) 1L), tr1);
	tr1 = RTMS_EX_H("NE",2,20037);
	F1001_3972(RTCW(Result), ((EIF_INTEGER_32) 2L), tr1);
	tr1 = RTMS_EX_H("E",1,69);
	F1001_3972(RTCW(Result), ((EIF_INTEGER_32) 3L), tr1);
	tr1 = RTMS_EX_H("SE",2,21317);
	F1001_3972(RTCW(Result), ((EIF_INTEGER_32) 4L), tr1);
	tr1 = RTMS_EX_H("S",1,83);
	F1001_3972(RTCW(Result), ((EIF_INTEGER_32) 5L), tr1);
	tr1 = RTMS_EX_H("SW",2,21335);
	F1001_3972(RTCW(Result), ((EIF_INTEGER_32) 6L), tr1);
	tr1 = RTMS_EX_H("W",1,87);
	F1001_3972(RTCW(Result), ((EIF_INTEGER_32) 7L), tr1);
	tr1 = RTMS_EX_H("NW",2,20055);
	F1001_3972(RTCW(Result), ((EIF_INTEGER_32) 8L), tr1);
	RTLE;
	return Result;
}

/* {ETF_TYPE_CONSTRAINTS}.enum_items_inverse */
EIF_REFERENCE F353_13098 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,999,0xFF01,1560,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 999, _OBJSIZ_6_3_0_8_0_0_0_0_);
	}
	F1000_3924(RTCW(Result), ((EIF_INTEGER_32) 10L));
	tr1 = RTMS_EX_H("N",1,78);
	F1000_3972(RTCW(Result), tr1, ((EIF_INTEGER_32) 1L));
	tr1 = RTMS_EX_H("NE",2,20037);
	F1000_3972(RTCW(Result), tr1, ((EIF_INTEGER_32) 2L));
	tr1 = RTMS_EX_H("E",1,69);
	F1000_3972(RTCW(Result), tr1, ((EIF_INTEGER_32) 3L));
	tr1 = RTMS_EX_H("SE",2,21317);
	F1000_3972(RTCW(Result), tr1, ((EIF_INTEGER_32) 4L));
	tr1 = RTMS_EX_H("S",1,83);
	F1000_3972(RTCW(Result), tr1, ((EIF_INTEGER_32) 5L));
	tr1 = RTMS_EX_H("SW",2,21335);
	F1000_3972(RTCW(Result), tr1, ((EIF_INTEGER_32) 6L));
	tr1 = RTMS_EX_H("W",1,87);
	F1000_3972(RTCW(Result), tr1, ((EIF_INTEGER_32) 7L));
	tr1 = RTMS_EX_H("NW",2,20055);
	F1000_3972(RTCW(Result), tr1, ((EIF_INTEGER_32) 8L));
	RTLE;
	return Result;
}

/* {ETF_TYPE_CONSTRAINTS}.evt_param_types_table */
EIF_REFERENCE F353_13099 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(17);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc2);
	RTLR(7,loc3);
	RTLR(8,loc4);
	RTLR(9,tr4);
	RTLR(10,tr5);
	RTLR(11,tr6);
	RTLR(12,loc5);
	RTLR(13,loc6);
	RTLR(14,loc7);
	RTLR(15,loc8);
	RTLR(16,loc9);
	RTLIU(17);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,998,0xFF01,998,0xFF01,337,0xFF01,1560,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		Result = RTLNS(typres0.id, 998, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	F999_3924(RTCW(Result), ((EIF_INTEGER_32) 10L));
	F575_2465(RTCW(Result));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,998,0xFF01,337,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTLNS(typres0.id, 998, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	F999_3924(RTCW(loc1), ((EIF_INTEGER_32) 10L));
	F575_2465(RTCW(loc1));
	tr1 = RTLNS(eif_new_type(349, 0x01).id, 349, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("THRESHOLD",9,347959364);
	tr3 = RTLNS(eif_new_type(342, 0x01).id, 342, _OBJSIZ_0_0_0_2_0_0_0_0_);
	F343_13047(RTCW(tr3), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 101L));
	F350_13071(RTCW(tr1), tr2, tr3);
	tr2 = RTMS_EX_H("p_threshold",11,333314916);
	F999_3972(RTCW(loc1), tr1, tr2);
	tr1 = RTMS_EX_H("test",4,1952805748);
	F999_3972(RTCW(Result), loc1, tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,998,0xFF01,337,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc2 = RTLNS(typres0.id, 998, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	F999_3924(RTCW(loc2), ((EIF_INTEGER_32) 10L));
	F575_2465(RTCW(loc2));
	tr1 = RTMS_EX_H("play",4,1886151033);
	F999_3972(RTCW(Result), loc2, tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,998,0xFF01,337,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc3 = RTLNS(typres0.id, 998, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	F999_3924(RTCW(loc3), ((EIF_INTEGER_32) 10L));
	F575_2465(RTCW(loc3));
	tr1 = RTMS_EX_H("abort",5,1652215924);
	F999_3972(RTCW(Result), loc3, tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,998,0xFF01,337,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc4 = RTLNS(typres0.id, 998, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	F999_3924(RTCW(loc4), ((EIF_INTEGER_32) 10L));
	F575_2465(RTCW(loc4));
	tr1 = RTLNS(eif_new_type(349, 0x01).id, 349, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("DIRECTION",9,1752762446);
	tr3 = RTLNS(eif_new_type(350, 0x01).id, 350, _OBJSIZ_1_0_0_0_0_0_0_0_);
	{
		static EIF_TYPE_INDEX typarr0[] = {1193,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,((EIF_INTEGER_32) 8L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 8L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr6 = RTMS_EX_H("N",1,78);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("NE",2,20037);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("E",1,69);
	*((EIF_REFERENCE *)tr5+2) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("SE",2,21317);
	*((EIF_REFERENCE *)tr5+3) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("S",1,83);
	*((EIF_REFERENCE *)tr5+4) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("SW",2,21335);
	*((EIF_REFERENCE *)tr5+5) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("W",1,87);
	*((EIF_REFERENCE *)tr5+6) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("NW",2,20055);
	*((EIF_REFERENCE *)tr5+7) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F1194_3091)(tr5);
	F351_13077(RTCW(tr3), tr4);
	F350_13071(RTCW(tr1), tr2, tr3);
	tr2 = RTMS_EX_H("dir",3,6580594);
	F999_3972(RTCW(loc4), tr1, tr2);
	tr1 = RTMS_EX_H("move",4,1836021349);
	F999_3972(RTCW(Result), loc4, tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,998,0xFF01,337,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc5 = RTLNS(typres0.id, 998, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	F999_3924(RTCW(loc5), ((EIF_INTEGER_32) 10L));
	F575_2465(RTCW(loc5));
	tr1 = RTMS_EX_H("land",4,1818324580);
	F999_3972(RTCW(Result), loc5, tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,998,0xFF01,337,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc6 = RTLNS(typres0.id, 998, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	F999_3924(RTCW(loc6), ((EIF_INTEGER_32) 10L));
	F575_2465(RTCW(loc6));
	tr1 = RTMS_EX_H("liftoff",7,684384358);
	F999_3972(RTCW(Result), loc6, tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,998,0xFF01,337,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc7 = RTLNS(typres0.id, 998, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	F999_3924(RTCW(loc7), ((EIF_INTEGER_32) 10L));
	F575_2465(RTCW(loc7));
	tr1 = RTMS_EX_H("pass",4,1885434739);
	F999_3972(RTCW(Result), loc7, tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,998,0xFF01,337,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc8 = RTLNS(typres0.id, 998, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	F999_3924(RTCW(loc8), ((EIF_INTEGER_32) 10L));
	F575_2465(RTCW(loc8));
	tr1 = RTMS_EX_H("wormhole",8,2038174821);
	F999_3972(RTCW(Result), loc8, tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,998,0xFF01,337,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc9 = RTLNS(typres0.id, 998, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	F999_3924(RTCW(loc9), ((EIF_INTEGER_32) 10L));
	F575_2465(RTCW(loc9));
	tr1 = RTMS_EX_H("status",6,1862012275);
	F999_3972(RTCW(Result), loc9, tr1);
	RTLE;
	return Result;
}

/* {ETF_TYPE_CONSTRAINTS}.evt_param_types_list */
EIF_REFERENCE F353_13100 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(17);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc2);
	RTLR(7,loc3);
	RTLR(8,loc4);
	RTLR(9,tr4);
	RTLR(10,tr5);
	RTLR(11,tr6);
	RTLR(12,loc5);
	RTLR(13,loc6);
	RTLR(14,loc7);
	RTLR(15,loc8);
	RTLR(16,loc9);
	RTLIU(17);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,998,0xFF01,911,0xFF01,337,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		Result = RTLNS(typres0.id, 998, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	F999_3924(RTCW(Result), ((EIF_INTEGER_32) 10L));
	F575_2465(RTCW(Result));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,911,0xFF01,337,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTLNS(typres0.id, 911, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F912_3515(RTCW(loc1));
	F575_2465(RTCW(loc1));
	tr1 = RTLNS(eif_new_type(349, 0x01).id, 349, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("THRESHOLD",9,347959364);
	tr3 = RTLNS(eif_new_type(342, 0x01).id, 342, _OBJSIZ_0_0_0_2_0_0_0_0_);
	F343_13047(RTCW(tr3), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 101L));
	F350_13071(RTCW(tr1), tr2, tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(loc1))-818])(loc1, tr1);
	tr1 = RTMS_EX_H("test",4,1952805748);
	F999_3972(RTCW(Result), loc1, tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,911,0xFF01,337,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc2 = RTLNS(typres0.id, 911, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F912_3515(RTCW(loc2));
	F575_2465(RTCW(loc2));
	tr1 = RTMS_EX_H("play",4,1886151033);
	F999_3972(RTCW(Result), loc2, tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,911,0xFF01,337,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc3 = RTLNS(typres0.id, 911, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F912_3515(RTCW(loc3));
	F575_2465(RTCW(loc3));
	tr1 = RTMS_EX_H("abort",5,1652215924);
	F999_3972(RTCW(Result), loc3, tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,911,0xFF01,337,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc4 = RTLNS(typres0.id, 911, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F912_3515(RTCW(loc4));
	F575_2465(RTCW(loc4));
	tr1 = RTLNS(eif_new_type(349, 0x01).id, 349, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("DIRECTION",9,1752762446);
	tr3 = RTLNS(eif_new_type(350, 0x01).id, 350, _OBJSIZ_1_0_0_0_0_0_0_0_);
	{
		static EIF_TYPE_INDEX typarr0[] = {1193,0xFF01,1560,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,((EIF_INTEGER_32) 8L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 8L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr6 = RTMS_EX_H("N",1,78);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("NE",2,20037);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("E",1,69);
	*((EIF_REFERENCE *)tr5+2) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("SE",2,21317);
	*((EIF_REFERENCE *)tr5+3) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("S",1,83);
	*((EIF_REFERENCE *)tr5+4) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("SW",2,21335);
	*((EIF_REFERENCE *)tr5+5) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("W",1,87);
	*((EIF_REFERENCE *)tr5+6) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("NW",2,20055);
	*((EIF_REFERENCE *)tr5+7) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F1194_3091)(tr5);
	F351_13077(RTCW(tr3), tr4);
	F350_13071(RTCW(tr1), tr2, tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(loc4))-818])(loc4, tr1);
	tr1 = RTMS_EX_H("move",4,1836021349);
	F999_3972(RTCW(Result), loc4, tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,911,0xFF01,337,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc5 = RTLNS(typres0.id, 911, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F912_3515(RTCW(loc5));
	F575_2465(RTCW(loc5));
	tr1 = RTMS_EX_H("land",4,1818324580);
	F999_3972(RTCW(Result), loc5, tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,911,0xFF01,337,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc6 = RTLNS(typres0.id, 911, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F912_3515(RTCW(loc6));
	F575_2465(RTCW(loc6));
	tr1 = RTMS_EX_H("liftoff",7,684384358);
	F999_3972(RTCW(Result), loc6, tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,911,0xFF01,337,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc7 = RTLNS(typres0.id, 911, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F912_3515(RTCW(loc7));
	F575_2465(RTCW(loc7));
	tr1 = RTMS_EX_H("pass",4,1885434739);
	F999_3972(RTCW(Result), loc7, tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,911,0xFF01,337,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc8 = RTLNS(typres0.id, 911, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F912_3515(RTCW(loc8));
	F575_2465(RTCW(loc8));
	tr1 = RTMS_EX_H("wormhole",8,2038174821);
	F999_3972(RTCW(Result), loc8, tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,911,0xFF01,337,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc9 = RTLNS(typres0.id, 911, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F912_3515(RTCW(loc9));
	F575_2465(RTCW(loc9));
	tr1 = RTMS_EX_H("status",6,1862012275);
	F999_3972(RTCW(Result), loc9, tr1);
	RTLE;
	return Result;
}

void EIF_Minit1262 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
