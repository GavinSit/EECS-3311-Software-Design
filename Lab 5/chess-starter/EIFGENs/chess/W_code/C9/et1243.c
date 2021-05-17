/*
 * Code for class ETF_TYPE_CONSTRAINTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1243_12908(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1243_12909(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1243_12910(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1243_12911(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1243_12912(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1243_12913(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1243_12914(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1243(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_TYPE_CONSTRAINTS}.is_size */
EIF_TYPED_VALUE F1243_12908 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_size";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1242, Current, 0, 1, 19155);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1242, Current, 19155);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("comment(\"etf_v: SIZE = 5 .. 8\")", EX_PRE);
		tr1 = RTMS_EX_H("etf_v: SIZE = 5 .. 8",20,2112129592);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10630, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 5L) <= arg1) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 8L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("Result = (5 <= etf_v) and then (etf_v <= 8)", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (((EIF_INTEGER_32) 5L) <= arg1)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 8L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_square */
EIF_TYPED_VALUE F1243_12909 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_square";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1242, Current, 0, 1, 19156);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1242, Current, 19156);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,218,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1242, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("comment(\"etf_v: SQUARE = TUPLE[x: 1 .. 8; y: 1 .. 8]\")", EX_PRE);
		tr1 = RTMS_EX_H("etf_v: SQUARE = TUPLE[x: 1 .. 8; y: 1 .. 8]",43,172781661);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10630, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	ti4_1 = eif_integer_32_item(RTCW(arg1),1);
	if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_1)) {
		ti4_1 = eif_integer_32_item(RTCW(arg1),1);
		tb3 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 8L));
	}
	if (tb3) {
		ti4_1 = eif_integer_32_item(RTCW(arg1),2);
		tb2 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_1);
	}
	if (tb2) {
		ti4_1 = eif_integer_32_item(RTCW(arg1),2);
		tb1 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 8L));
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("Result = (1 <= etf_v.x) and then (etf_v.x <= 8) and then (1 <= etf_v.y) and then (etf_v.y <= 8)", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		ti4_1 = eif_integer_32_item(RTCW(arg1),1);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_1))) {
			ti4_1 = eif_integer_32_item(RTCW(arg1),1);
			tb3 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 8L));
		}
		if (tb3) {
			ti4_1 = eif_integer_32_item(RTCW(arg1),2);
			tb2 = (EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= ti4_1);
		}
		if (tb2) {
			ti4_1 = eif_integer_32_item(RTCW(arg1),2);
			tb1 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 8L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.enum_items */
EIF_TYPED_VALUE F1243_12910 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enum_items";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1242, Current, 0, 0, 19157);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1242, Current, 19157);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80003A7, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,935,218,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.enum_items_inverse */
EIF_TYPED_VALUE F1243_12911 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enum_items_inverse";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1242, Current, 0, 0, 19158);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1242, Current, 19158);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000217, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,535,0xFF01,232,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.evt_param_types_table */
EIF_TYPED_VALUE F1243_12912 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "evt_param_types_table";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(19);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,tr3);
	RTLR(7,ur2);
	RTLR(8,loc2);
	RTLR(9,tr4);
	RTLR(10,tr5);
	RTLR(11,tr6);
	RTLR(12,tr7);
	RTLR(13,tr8);
	RTLR(14,tr9);
	RTLR(15,ur3);
	RTLR(16,loc3);
	RTLR(17,loc4);
	RTLR(18,loc5);
	RTLIU(19);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1242, Current, 5, 0, 19159);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1242, Current, 19159);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800019C, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,412,0xFF01,412,0xFF01,1227,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2214, "compare_objects", Result))(Result);
	RTHOOK(3);
	RTDBGAL(1, 0xF800019C, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,412,0xFF01,1227,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2214, "compare_objects", loc1))(loc1);
	RTHOOK(5);
	tr1 = RTLN(eif_new_type(1240, 0x01).id);
	tr2 = RTMS_EX_H("SIZE",4,1397316165);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1236, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	ui4_2 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10618, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(5,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10621, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(5,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("size",4,1936292453);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc1))(loc1, ur1x, ur2x);
	RTHOOK(6);
	ur1 = RTCCL(loc1);
	tr1 = RTMS_EX_H("play",4,1886151033);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(7);
	RTDBGAL(2, 0xF800019C, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,412,0xFF01,1227,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(7,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2214, "compare_objects", loc2))(loc2);
	RTHOOK(9);
	tr1 = RTLN(eif_new_type(1240, 0x01).id);
	tr2 = RTMS_EX_H("SQUARE",6,1594150981);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1235, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {276,0xFF01,1033,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 2L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(1033, 0x01).id);
	tr8 = RTMS_EX_H("x",1,120);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1236, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10618, Dtype(tr9)))(tr9, ui4_1x, ui4_2x);
	RTNHOOK(9,1);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7694, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(9,2);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(1033, 0x01).id);
	tr8 = RTMS_EX_H("y",1,121);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1236, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10618, Dtype(tr9)))(tr9, ui4_1x, ui4_2x);
	RTNHOOK(9,3);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7694, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(9,4);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(10616, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(9,5);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10621, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(9,6);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("square",6,48807781);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc2))(loc2, ur1x, ur2x);
	RTHOOK(10);
	ur1 = RTCCL(loc2);
	tr1 = RTMS_EX_H("move_king",9,1275501927);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(11);
	RTDBGAL(3, 0xF800019C, 0, 0); /* loc3 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,412,0xFF01,1227,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(11,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(12);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2214, "compare_objects", loc3))(loc3);
	RTHOOK(13);
	tr1 = RTLN(eif_new_type(1240, 0x01).id);
	tr2 = RTMS_EX_H("SQUARE",6,1594150981);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1235, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {276,0xFF01,1033,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 2L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(1033, 0x01).id);
	tr8 = RTMS_EX_H("x",1,120);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1236, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10618, Dtype(tr9)))(tr9, ui4_1x, ui4_2x);
	RTNHOOK(13,1);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7694, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(13,2);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(1033, 0x01).id);
	tr8 = RTMS_EX_H("y",1,121);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1236, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10618, Dtype(tr9)))(tr9, ui4_1x, ui4_2x);
	RTNHOOK(13,3);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7694, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(13,4);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(10616, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(13,5);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10621, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(13,6);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("square",6,48807781);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc3))(loc3, ur1x, ur2x);
	RTHOOK(14);
	ur1 = RTCCL(loc3);
	tr1 = RTMS_EX_H("move_knight",11,558940532);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(15);
	RTDBGAL(4, 0xF800019C, 0, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,412,0xFF01,1227,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(15,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(16);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2214, "compare_objects", loc4))(loc4);
	RTHOOK(17);
	ur1 = RTCCL(loc4);
	tr1 = RTMS_EX_H("undo",4,1970168943);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(18);
	RTDBGAL(5, 0xF800019C, 0, 0); /* loc5 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,412,0xFF01,1227,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(18,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(19);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2214, "compare_objects", loc5))(loc5);
	RTHOOK(20);
	ur1 = RTCCL(loc5);
	tr1 = RTMS_EX_H("redo",4,1919247471);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
}

/* {ETF_TYPE_CONSTRAINTS}.evt_param_types_list */
EIF_TYPED_VALUE F1243_12913 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "evt_param_types_list";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(19);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,tr3);
	RTLR(7,ur2);
	RTLR(8,loc2);
	RTLR(9,tr4);
	RTLR(10,tr5);
	RTLR(11,tr6);
	RTLR(12,tr7);
	RTLR(13,tr8);
	RTLR(14,tr9);
	RTLR(15,ur3);
	RTLR(16,loc3);
	RTLR(17,loc4);
	RTLR(18,loc5);
	RTLIU(19);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1242, Current, 5, 0, 19160);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1242, Current, 19160);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800019C, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,412,0xFF01,929,0xFF01,1227,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2214, "compare_objects", Result))(Result);
	RTHOOK(3);
	RTDBGAL(1, 0xF80003A1, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,929,0xFF01,1227,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2763, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2214, "compare_objects", loc1))(loc1);
	RTHOOK(5);
	tr1 = RTLN(eif_new_type(1240, 0x01).id);
	tr2 = RTMS_EX_H("SIZE",4,1397316165);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1236, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	ui4_2 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10618, Dtype(tr3)))(tr3, ui4_1x, ui4_2x);
	RTNHOOK(5,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10621, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(5,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", loc1))(loc1, ur1x);
	RTHOOK(6);
	ur1 = RTCCL(loc1);
	tr1 = RTMS_EX_H("play",4,1886151033);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(7);
	RTDBGAL(2, 0xF80003A1, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,929,0xFF01,1227,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2763, Dtype(tr1)))(tr1);
	RTNHOOK(7,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2214, "compare_objects", loc2))(loc2);
	RTHOOK(9);
	tr1 = RTLN(eif_new_type(1240, 0x01).id);
	tr2 = RTMS_EX_H("SQUARE",6,1594150981);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1235, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {276,0xFF01,1033,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 2L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(1033, 0x01).id);
	tr8 = RTMS_EX_H("x",1,120);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1236, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10618, Dtype(tr9)))(tr9, ui4_1x, ui4_2x);
	RTNHOOK(9,1);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7694, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(9,2);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(1033, 0x01).id);
	tr8 = RTMS_EX_H("y",1,121);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1236, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10618, Dtype(tr9)))(tr9, ui4_1x, ui4_2x);
	RTNHOOK(9,3);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7694, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(9,4);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(10616, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(9,5);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10621, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(9,6);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", loc2))(loc2, ur1x);
	RTHOOK(10);
	ur1 = RTCCL(loc2);
	tr1 = RTMS_EX_H("move_king",9,1275501927);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(11);
	RTDBGAL(3, 0xF80003A1, 0, 0); /* loc3 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,929,0xFF01,1227,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2763, Dtype(tr1)))(tr1);
	RTNHOOK(11,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(12);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2214, "compare_objects", loc3))(loc3);
	RTHOOK(13);
	tr1 = RTLN(eif_new_type(1240, 0x01).id);
	tr2 = RTMS_EX_H("SQUARE",6,1594150981);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1235, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {276,0xFF01,1033,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 2L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(1033, 0x01).id);
	tr8 = RTMS_EX_H("x",1,120);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1236, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10618, Dtype(tr9)))(tr9, ui4_1x, ui4_2x);
	RTNHOOK(13,1);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7694, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(13,2);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(1033, 0x01).id);
	tr8 = RTMS_EX_H("y",1,121);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1236, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10618, Dtype(tr9)))(tr9, ui4_1x, ui4_2x);
	RTNHOOK(13,3);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7694, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(13,4);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(10616, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(13,5);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(10621, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(13,6);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", loc3))(loc3, ur1x);
	RTHOOK(14);
	ur1 = RTCCL(loc3);
	tr1 = RTMS_EX_H("move_knight",11,558940532);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(15);
	RTDBGAL(4, 0xF80003A1, 0, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,929,0xFF01,1227,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2763, Dtype(tr1)))(tr1);
	RTNHOOK(15,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(16);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2214, "compare_objects", loc4))(loc4);
	RTHOOK(17);
	ur1 = RTCCL(loc4);
	tr1 = RTMS_EX_H("undo",4,1970168943);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(18);
	RTDBGAL(5, 0xF80003A1, 0, 0); /* loc5 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,929,0xFF01,1227,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2763, Dtype(tr1)))(tr1);
	RTNHOOK(18,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(19);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2214, "compare_objects", loc5))(loc5);
	RTHOOK(20);
	ur1 = RTCCL(loc5);
	tr1 = RTMS_EX_H("redo",4,1919247471);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
}

/* {ETF_TYPE_CONSTRAINTS}.comment */
EIF_TYPED_VALUE F1243_12914 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "comment";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1242, Current, 0, 1, 19161);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1242, Current, 19161);
	RTCC(arg1, 1242, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

void EIF_Minit1243 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
