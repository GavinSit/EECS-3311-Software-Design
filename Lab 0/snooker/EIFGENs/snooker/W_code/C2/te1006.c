/*
 * Code for class TEST_SNOOKER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1006_7665(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1006_7666(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1006_7667(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1006_7668(EIF_REFERENCE);
extern void F1006_7669(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1006_7670(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1006_7671(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1006_7672(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1006_7673(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1006_7674(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1006_7675(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1006_7676(EIF_REFERENCE);
extern void F1006_7677(EIF_REFERENCE);
extern void F1006_7678(EIF_REFERENCE);
extern void F1006_7679(EIF_REFERENCE);
extern void F1006_7680(EIF_REFERENCE);
extern void F1006_7681(EIF_REFERENCE);
extern void F1006_7682(EIF_REFERENCE);
extern void EIF_Minit1006(void);
extern EIF_REFERENCE _A1006_90();
extern EIF_REFERENCE _A1006_84();
extern EIF_REFERENCE _A1006_95();
extern EIF_REFERENCE _A1006_89();
extern EIF_REFERENCE _A1006_94();
extern EIF_REFERENCE _A1006_88();
extern EIF_REFERENCE _A1006_93();
extern EIF_REFERENCE _A1006_87();
extern EIF_REFERENCE _A1006_92();
extern EIF_REFERENCE _A1006_86();
extern EIF_REFERENCE _A1006_91();
extern EIF_REFERENCE _A1006_85();
extern EIF_REFERENCE _A1006_96();

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

/* {TEST_SNOOKER}.test_ball_point */
EIF_TYPED_VALUE F1006_7665 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_TRUE;
	return r;
}

/* {TEST_SNOOKER}.test_snooker */
EIF_TYPED_VALUE F1006_7666 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_TRUE;
	return r;
}

/* {TEST_SNOOKER}.test_ball_point_violation */
EIF_TYPED_VALUE F1006_7667 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_TRUE;
	return r;
}

/* {TEST_SNOOKER}.test_snooker_violation */
EIF_TYPED_VALUE F1006_7668 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_TRUE;
	return r;
}

/* {TEST_SNOOKER}.make */
void F1006_7669 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1005, Current, 0, 0, 13893);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 13893);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5426, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,186,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
		RTAR(tr1,Current);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,899,0xFF01,0xFFF9,0,186,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1006_84, (EIF_POINTER)(0),5431, 0, 0, 1, -1, tr1, 0);
		}
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5175, dtype))(Current, ur1x);
		RTHOOK(3);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,186,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
		RTAR(tr1,Current);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,899,0xFF01,0xFFF9,0,186,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1006_85, (EIF_POINTER)(0),5432, 0, 0, 1, -1, tr1, 0);
		}
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5175, dtype))(Current, ur1x);
		RTHOOK(4);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,186,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
		RTAR(tr1,Current);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,899,0xFF01,0xFFF9,0,186,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1006_86, (EIF_POINTER)(0),5433, 0, 0, 1, -1, tr1, 0);
		}
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5175, dtype))(Current, ur1x);
	}
	RTHOOK(5);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5427, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(6);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,186,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
		RTAR(tr1,Current);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,899,0xFF01,0xFFF9,0,186,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1006_87, (EIF_POINTER)(0),5434, 0, 0, 1, -1, tr1, 0);
		}
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5175, dtype))(Current, ur1x);
		RTHOOK(7);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,186,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
		RTAR(tr1,Current);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,899,0xFF01,0xFFF9,0,186,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1006_88, (EIF_POINTER)(0),5435, 0, 0, 1, -1, tr1, 0);
		}
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5175, dtype))(Current, ur1x);
		RTHOOK(8);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,186,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
		RTAR(tr1,Current);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,899,0xFF01,0xFFF9,0,186,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1006_89, (EIF_POINTER)(0),5436, 0, 0, 1, -1, tr1, 0);
		}
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5175, dtype))(Current, ur1x);
		RTHOOK(9);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,186,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
		RTAR(tr1,Current);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,899,0xFF01,0xFFF9,0,186,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1006_90, (EIF_POINTER)(0),5437, 0, 0, 1, -1, tr1, 0);
		}
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5175, dtype))(Current, ur1x);
	}
	RTHOOK(10);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5428, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(11);
		tr1 = RTMS_EX_H("x_precondition",14,19301998);
		ur1 = tr1;
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,186,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
		RTAR(tr2,Current);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,250,0xFF01,0xFFF9,0,186,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1006_91, (EIF_POINTER)(0),5438, 0, 0, 1, -1, tr2, 0);
		}
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5176, dtype))(Current, ur1x, ur2x);
		RTHOOK(12);
		tr1 = RTMS_EX_H("y_precondition",14,226661998);
		ur1 = tr1;
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,186,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
		RTAR(tr2,Current);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,250,0xFF01,0xFFF9,0,186,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1006_92, (EIF_POINTER)(0),5439, 0, 0, 1, -1, tr2, 0);
		}
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5176, dtype))(Current, ur1x, ur2x);
		RTHOOK(13);
		tr1 = RTMS_EX_H("y_cue_precondition",18,34783342);
		ur1 = tr1;
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,186,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
		RTAR(tr2,Current);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,250,0xFF01,0xFFF9,0,186,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1006_93, (EIF_POINTER)(0),5440, 0, 0, 1, -1, tr2, 0);
		}
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5176, dtype))(Current, ur1x, ur2x);
	}
	RTHOOK(14);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5429, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(15);
		tr1 = RTMS_EX_H("delta_safe",10,193280613);
		ur1 = tr1;
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,186,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
		RTAR(tr2,Current);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,250,0xFF01,0xFFF9,0,186,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1006_94, (EIF_POINTER)(0),5441, 0, 0, 1, -1, tr2, 0);
		}
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5176, dtype))(Current, ur1x, ur2x);
		RTHOOK(16);
		tr1 = RTMS_EX_H("not_red",7,1350796132);
		ur1 = tr1;
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,186,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
		RTAR(tr2,Current);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,250,0xFF01,0xFFF9,0,186,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1006_95, (EIF_POINTER)(0),5442, 0, 0, 1, -1, tr2, 0);
		}
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5176, dtype))(Current, ur1x, ur2x);
		RTHOOK(17);
		tr1 = RTMS_EX_H("not_red",7,1350796132);
		ur1 = tr1;
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,186,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
		RTAR(tr2,Current);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,250,0xFF01,0xFFF9,0,186,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1006_96, (EIF_POINTER)(0),5443, 0, 0, 1, -1, tr2, 0);
		}
		ur2 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5176, dtype))(Current, ur1x, ur2x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
#undef ur2
}

/* {TEST_SNOOKER}.t1 */
EIF_TYPED_VALUE F1006_7670 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "t1";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,ur2);
	RTLR(8,loc2);
	RTLIU(9);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1005, Current, 2, 0, 13894);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 13894);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("t1: create a snooker ball point; then move it by delta",54,1192948321);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5180, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF8000409, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("10.8",4,825241144);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(2,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("7.6",3,3616310);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(2,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(2,3);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5961, "x", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("10.8",4,825241144);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(3,1);
	if (RTEQ(tr1, tr2)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5962, "y", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = RTLN(eif_new_type(1031, 0x00).id);
		tr3 = RTMS_EX_H("7.6",3,3616310);
		ur1 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
		RTNHOOK(3,2);
		tb1 = RTEQ(tr1, tr2);
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_CHECK) {
		RTHOOK(4);
		RTCT("Result", EX_CHECK);
		if (Result) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(5);
	RTDBGAL(2, 0xF8000409, 0, 0); /* loc2 */
	tr2 = RTLN(eif_new_type(1032, 0x00).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("140.8",5,875949112);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	tr4 = RTMS_EX_H("19.9",4,825830969);
	((EIF_TYPED_VALUE *)tr3+2)->it_r = tr4;
	RTAR(tr3,tr4);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5956, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(5,1);
	ur1 = RTCCL(tr2);
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5964, 1033))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(6);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) !RTEQ(loc1, loc2);
	if (RTAL & CK_CHECK) {
		RTHOOK(7);
		RTCT("Result", EX_CHECK);
		if (Result) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(8);
	RTDBGAL(2, 0xF8000409, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("10.8",4,825241144);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(8,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("7.6",3,3616310);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(8,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(8,3);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) RTEQ(loc1, loc2);
	if (RTAL & CK_CHECK) {
		RTHOOK(10);
		RTCT("Result", EX_CHECK);
		if (Result) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ur2
}

/* {TEST_SNOOKER}.t2 */
EIF_TYPED_VALUE F1006_7671 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "t2";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,ur2);
	RTLR(8,loc2);
	RTLIU(9);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1005, Current, 2, 0, 13895);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 13895);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("t2: create two unequal ball points; equality check",50,512350571);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5180, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF8000409, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("10.7",4,825241143);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(2,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("7.6",3,3616310);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(2,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(2,3);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0xF8000409, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("177.8",5,926739512);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(3,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("356.9",5,893134905);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(3,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(3,3);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTLN(eif_new_type(1031, 0x00).id);
	tr2 = RTMS_EX_H("167.1",5,909962289);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(4,1);
	ur1 = RTCCL(tr1);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("349.3",5,876554291);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur2x);
	RTNHOOK(4,2);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5966, "cue_delta", loc1))(loc1, ur1x, ur2x);
	RTHOOK(5);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) RTEQ(loc1, loc2);
	if (RTAL & CK_CHECK) {
		RTHOOK(6);
		RTCT("Result", EX_CHECK);
		if (Result) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef ur2
}

/* {TEST_SNOOKER}.t3 */
EIF_TYPED_VALUE F1006_7672 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "t3";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,ur2);
	RTLR(7,loc1);
	RTLR(8,tr4);
	RTLR(9,loc3);
	RTLIU(10);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1005, Current, 3, 0, 13896);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 13896);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("t3: distance from a snooker ball point to the pocket",52,1744195956);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5180, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000409, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5413, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5412, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("<br>",4,1013084734);
	tr2 = RTMS_EX_H("pocket is top-left: [117.8, 356.9]",34,254803549);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5184, dtype))(Current, ur1x);
	RTHOOK(4);
	RTDBGAL(1, 0xF8000409, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("10.8",4,825241144);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(4,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("7.6",3,3616310);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(4,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(4,3);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ur1 = RTCCL(loc2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5965, "distance", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTLN(eif_new_type(1032, 0x00).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("167",3,3225143);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	tr4 = RTMS_EX_H("349.3",5,876554291);
	((EIF_TYPED_VALUE *)tr3+2)->it_r = tr4;
	RTAR(tr3,tr4);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5956, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(5,1);
	Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
	if (RTAL & CK_CHECK) {
		RTHOOK(6);
		RTCT("Result", EX_CHECK);
		if (Result) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(7);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ur1 = RTCCL(loc1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5965, "distance", loc2))(loc2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTLN(eif_new_type(1032, 0x00).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = RTMS_EX_H("-167",4,758199863);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	tr4 = RTMS_EX_H("-349.3",6,965027891);
	((EIF_TYPED_VALUE *)tr3+2)->it_r = tr4;
	RTAR(tr3,tr4);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5956, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(7,1);
	Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
	if (RTAL & CK_CHECK) {
		RTHOOK(8);
		RTCT("Result", EX_CHECK);
		if (Result) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(9);
	RTDBGAL(3, 0xF8000408, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1032, 0x00).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("-167",4,758199863);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("-349.3",6,965027891);
	((EIF_TYPED_VALUE *)tr2+2)->it_r = tr3;
	RTAR(tr2,tr3);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5956, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(9,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ur1 = RTCCL(loc1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5965, "distance", loc2))(loc2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_BOOLEAN) RTEQ(loc3, tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
}

/* {TEST_SNOOKER}.t5 */
EIF_TYPED_VALUE F1006_7673 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "t5";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(12);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,ur2);
	RTLR(8,loc3);
	RTLR(9,loc1);
	RTLR(10,loc4);
	RTLR(11,tr5);
	RTLIU(12);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1005, Current, 4, 0, 13897);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 13897);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("t5: test snooker table with delta impulse to blue ball",54,817817196);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5180, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000409, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("88.9",4,943205945);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(2,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("178.45",6,1039312437);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(2,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(2,3);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF8000409, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("50",2,13616);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(3,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("100",3,3223600);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(3,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(3,3);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(1, 0xF80003EC, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1004, 0x01).id);
	ur1 = RTCCL(loc2);
	ur2 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5415, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(4,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = '\0';
	tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5419, "terminated", loc1))(loc1)).it_b);
	if ((EIF_BOOLEAN) !tb3) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5416, "blue", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5961, "x", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTLN(eif_new_type(1031, 0x00).id);
		tr3 = RTMS_EX_H("88.9",4,943205945);
		ur1 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(5,2);
		tb2 = RTEQ(tr2, tr1);
	}
	if (tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5416, "blue", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,3);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5962, "y", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTLN(eif_new_type(1031, 0x00).id);
		tr3 = RTMS_EX_H("178.45",6,1039312437);
		ur1 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(5,4);
		tb1 = RTEQ(tr2, tr1);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTHOOK(6);
	RTDBGAL(4, 0xF8000408, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(1032, 0x00).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("1",1,49);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("1",1,49);
	((EIF_TYPED_VALUE *)tr2+2)->it_r = tr3;
	RTAR(tr2,tr3);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5956, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(6,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	ur1 = RTCCL(loc4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5420, "impulse_blue", loc1))(loc1, ur1x);
	RTHOOK(8);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5416, "blue", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr3 = RTLN(eif_new_type(1032, 0x00).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNTS(typres0.id, 3, 0);
	}
	tr5 = RTMS_EX_H("89.9",4,943271481);
	((EIF_TYPED_VALUE *)tr4+1)->it_r = tr5;
	RTAR(tr4,tr5);
	tr5 = RTMS_EX_H("179.45",6,1056089653);
	((EIF_TYPED_VALUE *)tr4+2)->it_r = tr5;
	RTAR(tr4,tr5);
	ur1 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5956, Dtype(tr3)))(tr3, ur1x);
	RTNHOOK(8,1);
	ur1 = RTCCL(tr3);
	tr2 = RTLN(eif_new_type(1033, 0x01).id);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5964, 1033))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_BOOLEAN) RTEQ(tr1, tr3);
	if (RTAL & CK_CHECK) {
		RTHOOK(9);
		RTCT("Result", EX_CHECK);
		if (Result) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ur2
}

/* {TEST_SNOOKER}.t6 */
EIF_TYPED_VALUE F1006_7674 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "t6";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(12);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,ur2);
	RTLR(8,loc3);
	RTLR(9,loc1);
	RTLR(10,loc4);
	RTLR(11,tr5);
	RTLIU(12);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1005, Current, 4, 0, 13898);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 13898);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("t6: test snooker table with red impulse",39,1419174245);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5180, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000409, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("88.9",4,943205945);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(2,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("178.45",6,1039312437);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(2,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(2,3);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF8000409, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("50.1",4,892350001);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(3,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("100.1",5,808840241);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(3,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(3,3);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(1, 0xF80003EC, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1004, 0x01).id);
	ur1 = RTCCL(loc2);
	ur2 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5415, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(4,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = '\0';
	tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5419, "terminated", loc1))(loc1)).it_b);
	if ((EIF_BOOLEAN) !tb3) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5417, "red", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5961, "x", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTLN(eif_new_type(1031, 0x00).id);
		tr3 = RTMS_EX_H("50.1",4,892350001);
		ur1 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(5,2);
		tb2 = RTEQ(tr2, tr1);
	}
	if (tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5417, "red", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,3);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5962, "y", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTLN(eif_new_type(1031, 0x00).id);
		tr3 = RTMS_EX_H("100.1",5,808840241);
		ur1 = tr3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(5,4);
		tb1 = RTEQ(tr2, tr1);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTHOOK(6);
	RTDBGAL(4, 0xF8000408, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(1032, 0x00).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("1.1",3,3223089);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("1.1",3,3223089);
	((EIF_TYPED_VALUE *)tr2+2)->it_r = tr3;
	RTAR(tr2,tr3);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5956, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(6,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	ur1 = RTCCL(loc4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5421, "impulse_red", loc1))(loc1, ur1x);
	RTHOOK(8);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5417, "red", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr3 = RTLN(eif_new_type(1032, 0x00).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNTS(typres0.id, 3, 0);
	}
	tr5 = RTMS_EX_H("51.2",4,892415538);
	((EIF_TYPED_VALUE *)tr4+1)->it_r = tr5;
	RTAR(tr4,tr5);
	tr5 = RTMS_EX_H("101.2",5,808905778);
	((EIF_TYPED_VALUE *)tr4+2)->it_r = tr5;
	RTAR(tr4,tr5);
	ur1 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5956, Dtype(tr3)))(tr3, ur1x);
	RTNHOOK(8,1);
	ur1 = RTCCL(tr3);
	tr2 = RTLN(eif_new_type(1033, 0x01).id);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5964, 1033))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_BOOLEAN) RTEQ(tr1, tr3);
	if (RTAL & CK_CHECK) {
		RTHOOK(9);
		RTCT("Result", EX_CHECK);
		if (Result) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ur2
}

/* {TEST_SNOOKER}.t7 */
EIF_TYPED_VALUE F1006_7675 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "t7";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(15);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,ur2);
	RTLR(8,loc3);
	RTLR(9,loc1);
	RTLR(10,loc5);
	RTLR(11,tr5);
	RTLR(12,tr6);
	RTLR(13,loc4);
	RTLR(14,ur3);
	RTLIU(15);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1005, Current, 5, 0, 13899);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 13899);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("t7: multi move of blue snooker ball with termination",52,1367453038);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5180, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000409, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("88.9",4,943205945);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(2,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("178.45",6,1039312437);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(2,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(2,3);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF8000409, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("50.1",4,892350001);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(3,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("100.1",5,808840241);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(3,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(3,3);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(1, 0xF80003EC, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1004, 0x01).id);
	ur1 = RTCCL(loc2);
	ur2 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5415, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(4,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(5, 0xF80000F8, 0, 0); /* loc5 */
	ui4_1 = ((EIF_INTEGER_32) 3L);
	{
		static EIF_TYPE_INDEX typarr0[] = {276,0xFF01,1032,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr2) = 3L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	tr4 = RTLN(eif_new_type(1032, 0x00).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNTS(typres0.id, 3, 0);
	}
	tr6 = RTMS_EX_H("41",2,13361);
	((EIF_TYPED_VALUE *)tr5+1)->it_r = tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("67",2,13879);
	((EIF_TYPED_VALUE *)tr5+2)->it_r = tr6;
	RTAR(tr5,tr6);
	ur1 = tr5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5956, Dtype(tr4)))(tr4, ur1x);
	RTNHOOK(5,1);
	tr3 = RTCCL(tr4);
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr4 = RTLN(eif_new_type(1032, 0x00).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNTS(typres0.id, 3, 0);
	}
	tr6 = RTMS_EX_H("46",2,13366);
	((EIF_TYPED_VALUE *)tr5+1)->it_r = tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("68",2,13880);
	((EIF_TYPED_VALUE *)tr5+2)->it_r = tr6;
	RTAR(tr5,tr6);
	ur1 = tr5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5956, Dtype(tr4)))(tr4, ur1x);
	RTNHOOK(5,2);
	tr3 = RTCCL(tr4);
	*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr4 = RTLN(eif_new_type(1032, 0x00).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNTS(typres0.id, 3, 0);
	}
	tr6 = RTMS_EX_H("1.9",3,3223097);
	((EIF_TYPED_VALUE *)tr5+1)->it_r = tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("43.45",5,859065397);
	((EIF_TYPED_VALUE *)tr5+2)->it_r = tr6;
	RTAR(tr5,tr6);
	ur1 = tr5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5956, Dtype(tr4)))(tr4, ur1x);
	RTNHOOK(5,3);
	tr3 = RTCCL(tr4);
	*((EIF_REFERENCE *)tr2+2) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr2)))(tr2).it_r;
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(4, 0xF8000408, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(1032, 0x00).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("46",2,13366);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("68",2,13880);
	((EIF_TYPED_VALUE *)tr2+2)->it_r = tr3;
	RTAR(tr2,tr3);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5956, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(6,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	ur1 = RTCCL(loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5424, "multi_move_blue", loc1))(loc1, ur1x);
	RTHOOK(8);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5416, "blue", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5418, "pocket", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTEQ(tr1, tr2)) {
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5419, "terminated", loc1))(loc1)).it_b);
		tb2 = tb3;
	}
	if (tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5422, "maximum", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb1 = RTEQ(tr1, loc4);
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_CHECK) {
		RTHOOK(9);
		RTCT("Result", EX_CHECK);
		if (Result) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(10);
	tr1 = RTMS_EX_H("max is wrong",12,1383422567);
	ur1 = tr1;
	ur2 = RTCCL(loc4);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5422, "maximum", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5185, dtype))(Current, ur1x, ur2x, ur3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
}

/* {TEST_SNOOKER}.t8 */
EIF_TYPED_VALUE F1006_7676 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "t8";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(14);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,ur2);
	RTLR(8,loc4);
	RTLR(9,loc3);
	RTLR(10,loc1);
	RTLR(11,loc5);
	RTLR(12,tr5);
	RTLR(13,tr6);
	RTLIU(14);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1005, Current, 5, 0, 13900);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 13900);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("t8: multi move of blue and hit red. No termination",50,2044358510);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5180, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000409, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("88.9",4,943205945);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(2,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("178.45",6,1039312437);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(2,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(2,3);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(4, 0xF8000409, 0, 0); /* loc4 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(23, "deep_twin", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(3, 0xF8000409, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("50.1",4,892350001);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(4,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("100.1",5,808840241);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(4,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(4,3);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(1, 0xF80003EC, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1004, 0x01).id);
	ur1 = RTCCL(loc2);
	ur2 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5415, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(5,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(5, 0xF80000F8, 0, 0); /* loc5 */
	ui4_1 = ((EIF_INTEGER_32) 3L);
	{
		static EIF_TYPE_INDEX typarr0[] = {276,0xFF01,1032,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr2) = 3L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	tr4 = RTLN(eif_new_type(1032, 0x00).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNTS(typres0.id, 3, 0);
	}
	tr6 = RTMS_EX_H("-1.5",4,758197813);
	((EIF_TYPED_VALUE *)tr5+1)->it_r = tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("-8.45",5,942897717);
	((EIF_TYPED_VALUE *)tr5+2)->it_r = tr6;
	RTAR(tr5,tr6);
	ur1 = tr5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5956, Dtype(tr4)))(tr4, ur1x);
	RTNHOOK(6,1);
	tr3 = RTCCL(tr4);
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr4 = RTLN(eif_new_type(1032, 0x00).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNTS(typres0.id, 3, 0);
	}
	tr6 = RTMS_EX_H("-16.7",5,825979959);
	((EIF_TYPED_VALUE *)tr5+1)->it_r = tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("-69",3,2963001);
	((EIF_TYPED_VALUE *)tr5+2)->it_r = tr6;
	RTAR(tr5,tr6);
	ur1 = tr5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5956, Dtype(tr4)))(tr4, ur1x);
	RTNHOOK(6,2);
	tr3 = RTCCL(tr4);
	*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr4 = RTLN(eif_new_type(1032, 0x00).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNTS(typres0.id, 3, 0);
	}
	tr6 = RTMS_EX_H("-20.6",5,842363958);
	((EIF_TYPED_VALUE *)tr5+1)->it_r = tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("-0.9",4,758132281);
	((EIF_TYPED_VALUE *)tr5+2)->it_r = tr6;
	RTAR(tr5,tr6);
	ur1 = tr5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5956, Dtype(tr4)))(tr4, ur1x);
	RTNHOOK(6,3);
	tr3 = RTCCL(tr4);
	*((EIF_REFERENCE *)tr2+2) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr2)))(tr2).it_r;
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	ur1 = RTCCL(loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5424, "multi_move_blue", loc1))(loc1, ur1x);
	RTHOOK(8);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5416, "blue", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTEQ(tr1, loc4)) {
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5419, "terminated", loc1))(loc1)).it_b);
		tb2 = (EIF_BOOLEAN) !tb3;
	}
	if (tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5422, "maximum", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb1 = RTEQ(tr1, NULL);
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_CHECK) {
		RTHOOK(9);
		RTCT("Result", EX_CHECK);
		if (Result) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
}

/* {TEST_SNOOKER}.t10 */
void F1006_7677 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "t10";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1005, Current, 1, 0, 13901);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 13901);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("t10: violate x_precondition of a snooker ball out of table",58,2032783461);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5180, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF8000409, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("-0.01",5,808678961);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(2,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("356.9",5,893134905);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(2,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(2,3);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
}

/* {TEST_SNOOKER}.t11 */
void F1006_7678 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "t11";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1005, Current, 1, 0, 13902);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 13902);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("t11: violate y_precondition of a snooker ball out of table",58,1187071845);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5180, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF8000409, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("177.8",5,926739512);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(2,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("356.91",6,1009676081);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(2,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(2,3);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
}

/* {TEST_SNOOKER}.t12 */
void F1006_7679 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "t12";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1005, Current, 1, 0, 13903);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 13903);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("t12: violate with impulse delta out of table",44,840817253);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5180, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(1, 0xF8000409, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("177.8",5,926739512);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(2,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("356.9",5,893134905);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(2,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(2,3);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTLN(eif_new_type(1031, 0x00).id);
	tr2 = RTMS_EX_H("0",1,48);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	ur1 = RTCCL(tr1);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("0.00001",7,1436185905);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur2x);
	RTNHOOK(3,2);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5966, "cue_delta", loc1))(loc1, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
}

/* {TEST_SNOOKER}.t20 */
void F1006_7680 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "t20";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,ur2);
	RTLR(8,loc3);
	RTLR(9,loc1);
	RTLR(10,loc4);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1005, Current, 4, 0, 13904);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 13904);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("t20: test snooker table violate delta safe impulse",50,1349852517);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5180, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000409, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("88.9",4,943205945);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(2,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("178.45",6,1039312437);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(2,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(2,3);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF8000409, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("50",2,13616);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(3,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("100",3,3223600);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(3,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(3,3);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(1, 0xF80003EC, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1004, 0x01).id);
	ur1 = RTCCL(loc2);
	ur2 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5415, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(4,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(4, 0xF8000408, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(1032, 0x00).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("200",3,3289136);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("300",3,3354672);
	((EIF_TYPED_VALUE *)tr2+2)->it_r = tr3;
	RTAR(tr2,tr3);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5956, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(5,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	ur1 = RTCCL(loc4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5420, "impulse_blue", loc1))(loc1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef ur1
#undef ur2
}

/* {TEST_SNOOKER}.t21 */
void F1006_7681 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "t21";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,ur2);
	RTLR(8,loc3);
	RTLR(9,loc1);
	RTLR(10,loc4);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1005, Current, 4, 0, 13905);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 13905);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("t21: test snooker table: blue and red do not collide",52,1531208293);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5180, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000409, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("88.9",4,943205945);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(2,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("178.45",6,1039312437);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(2,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(2,3);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF8000409, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("50",2,13616);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(3,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("100",3,3223600);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(3,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(3,3);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(1, 0xF80003EC, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1004, 0x01).id);
	ur1 = RTCCL(loc2);
	ur2 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5415, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(4,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(4, 0xF8000408, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(1032, 0x00).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("-38.9",5,859665465);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("-78.45",6,1031448117);
	((EIF_TYPED_VALUE *)tr2+2)->it_r = tr3;
	RTAR(tr2,tr3);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5956, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(5,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	ur1 = RTCCL(loc4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5420, "impulse_blue", loc1))(loc1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef ur1
#undef ur2
}

/* {TEST_SNOOKER}.t22 */
void F1006_7682 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "t22";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,ur2);
	RTLR(8,loc3);
	RTLR(9,loc1);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1005, Current, 3, 0, 13906);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 13906);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("t22: contract exception if blue set to hit red",46,882473060);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5180, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000409, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("88.9",4,943205945);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(2,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("178.45",6,1039312437);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(2,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(2,3);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF8000409, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTLN(eif_new_type(1031, 0x00).id);
	tr3 = RTMS_EX_H("50.1",4,892350001);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(3,1);
	ur1 = RTCCL(tr2);
	tr3 = RTLN(eif_new_type(1031, 0x00).id);
	tr4 = RTMS_EX_H("100.1",5,808840241);
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5889, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(3,2);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5959, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(3,3);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(1, 0xF80003EC, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1004, 0x01).id);
	ur1 = RTCCL(loc2);
	ur2 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5415, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(4,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	tr1 = RTLN(eif_new_type(1032, 0x00).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("-1.5",4,758197813);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("-8.45",5,942897717);
	((EIF_TYPED_VALUE *)tr2+2)->it_r = tr3;
	RTAR(tr2,tr3);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5956, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(5,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5420, "impulse_blue", loc1))(loc1, ur1x);
	RTHOOK(6);
	tr1 = RTLN(eif_new_type(1032, 0x00).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("-16.7",5,825979959);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("-69",3,2963001);
	((EIF_TYPED_VALUE *)tr2+2)->it_r = tr3;
	RTAR(tr2,tr3);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5956, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(6,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5420, "impulse_blue", loc1))(loc1, ur1x);
	RTHOOK(7);
	tr1 = RTLN(eif_new_type(1032, 0x00).id);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = RTMS_EX_H("-20.6",5,842363958);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("-0.9",4,758132281);
	((EIF_TYPED_VALUE *)tr2+2)->it_r = tr3;
	RTAR(tr2,tr3);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5956, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(7,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5420, "impulse_blue", loc1))(loc1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ur1
#undef ur2
}

void EIF_Minit1006 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
