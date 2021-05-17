/*
 * Code for class MA_DECIMAL_TEXT_PARSER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1018_7905(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7906(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7907(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7908(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7909(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7910(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7911(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7912(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7913(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7914(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7915(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7916(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7917(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7918(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7919(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7920(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7921(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7922(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7923(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7924(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7925(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7926(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7927(EIF_REFERENCE);
extern void F1018_7928(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1018_7929(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1018_7930(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1018_7931(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1018_7932(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1018_7933(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1018_7934(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1018_7935(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1018_7936(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1018_7937(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1018_7938(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1018_7939(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1018_7940(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1018_7941(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1018_7942(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1018_7943(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1018_7944(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1018_7945(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7946(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7947(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7948(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7949(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7950(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7951(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7952(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7953(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7954(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7955(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7956(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7957(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7958(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7959(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7960(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7961(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7962(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7963(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1018_7964(EIF_REFERENCE);
extern void F1018_8998(EIF_REFERENCE, int);
extern void EIF_Minit1018(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MA_DECIMAL_TEXT_PARSER}.sign */
EIF_TYPED_VALUE F1018_7905 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5598,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.exponent_sign */
EIF_TYPED_VALUE F1018_7906 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5599,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.state */
EIF_TYPED_VALUE F1018_7907 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5600,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.error_code */
EIF_TYPED_VALUE F1018_7908 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5601,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.coefficient_begin */
EIF_TYPED_VALUE F1018_7909 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5602,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.coefficient_end */
EIF_TYPED_VALUE F1018_7910 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5603,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.coefficient_count */
EIF_TYPED_VALUE F1018_7911 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "coefficient_count";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 0, 14109);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14109);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5603, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5602, dtype));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {MA_DECIMAL_TEXT_PARSER}.fractional_part_count */
EIF_TYPED_VALUE F1018_7912 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "fractional_part_count";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 0, 14110);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14110);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5611, dtype));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5603, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5611, dtype));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ti4_2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {MA_DECIMAL_TEXT_PARSER}.exponent_as_double */
EIF_TYPED_VALUE F1018_7913 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(5606,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.exponent_begin */
EIF_TYPED_VALUE F1018_7914 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5607,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.exponent_end */
EIF_TYPED_VALUE F1018_7915 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5608,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.exponent_significant_digits */
EIF_TYPED_VALUE F1018_7916 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5609,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.exponent_count */
EIF_TYPED_VALUE F1018_7917 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "exponent_count";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 0, 14115);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14115);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5609, dtype));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {MA_DECIMAL_TEXT_PARSER}.decimal_point_index */
EIF_TYPED_VALUE F1018_7918 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5611,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.last_parsed */
EIF_TYPED_VALUE F1018_7919 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5612,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.error */
EIF_TYPED_VALUE F1018_7920 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "error";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 0, 14118);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14118);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5649, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {MA_DECIMAL_TEXT_PARSER}.is_comma_allowed */
EIF_TYPED_VALUE F1018_7921 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5613,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.is_infinity */
EIF_TYPED_VALUE F1018_7922 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_infinity";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 0, 14120);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14120);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5117, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb2) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5640, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {MA_DECIMAL_TEXT_PARSER}.is_nan */
EIF_TYPED_VALUE F1018_7923 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_nan";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 0, 14121);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14121);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5117, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb2) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5637, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {MA_DECIMAL_TEXT_PARSER}.is_snan */
EIF_TYPED_VALUE F1018_7924 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_snan";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 0, 14122);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14122);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5117, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb2) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5638, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {MA_DECIMAL_TEXT_PARSER}.has_point */
EIF_TYPED_VALUE F1018_7925 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "has_point";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 0, 14123);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14123);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5611, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {MA_DECIMAL_TEXT_PARSER}.has_exponent */
EIF_TYPED_VALUE F1018_7926 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "has_exponent";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 0, 14124);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14124);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5607, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {MA_DECIMAL_TEXT_PARSER}.decimal_point_is_comma */
EIF_TYPED_VALUE F1018_7927 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5619,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.parse */
void F1018_7928 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "parse";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 1, 14126);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14126);
	RTCC(arg1, 1017, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr1);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5621, dtype))(Current, ur1x, ur2x, ub1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("last_decimal_not_void_when_no_error", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5117, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("last_parsed_string_affected", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5612, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ub1
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.parse_with_decimal_point_comma */
void F1018_7929 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "parse_with_decimal_point_comma";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,tr1);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 1, 14127);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14127);
	RTCC(arg1, 1017, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(5613, dtype));
		tb1 = tb2;
		in_assertion = 0;
	}
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr1);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5621, dtype))(Current, ur1x, ur2x, ub1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("no_mode_change", EX_POST);
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(5613, dtype));
		if ((EIF_BOOLEAN)(tb2 == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("last_parsed_string_affected", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5612, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("last_decimal_not_void_when_no_error", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5117, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb3) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb2 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb2) {
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
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ub1
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.parse_ctx */
void F1018_7930 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "parse_ctx";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_b = * (EIF_BOOLEAN *) arg3x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,tr1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_BOOL,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	
	RTEAA(l_feature_name, 1017, Current, 1, 3, 14128);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14128);
	RTCC(arg1, 1017, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTCC(arg2, 1017, l_feature_name, 2, eif_new_type(1056, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(5613, dtype));
		tb1 = tb2;
		in_assertion = 0;
	}
	RTHOOK(3);
	RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(5613, dtype));
	loc1 = (EIF_BOOLEAN) tb2;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5613, 0x04000000, 1); /* is_comma_allowed */
	*(EIF_BOOLEAN *)(Current + RTWA(5613, dtype)) = (EIF_BOOLEAN) arg3;
	RTHOOK(5);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5622, dtype))(Current, ur1x, ur2x);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 5613, 0x04000000, 1); /* is_comma_allowed */
	*(EIF_BOOLEAN *)(Current + RTWA(5613, dtype)) = (EIF_BOOLEAN) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("no_mode_change", EX_POST);
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(5613, dtype));
		if ((EIF_BOOLEAN)(tb2 == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("last_parsed_string_affected", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5612, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("last_decimal_not_void_when_no_error", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5117, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb3) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb2 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb2) {
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
#undef up1
#undef ur1
#undef ur2
#undef arg3
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.parse_and_create_last_decimal */
void F1018_7931 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "parse_and_create_last_decimal";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 2, 14129);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14129);
	RTCC(arg1, 1017, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTCC(arg2, 1017, l_feature_name, 2, eif_new_type(1056, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5623, dtype))(Current, ur1x);
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5117, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 5116, 0xF800041F, 0); /* last_decimal */
		tr1 = RTLNSMART(RTWCT(5116, dtype, Dftype(Current)).id);
		ur1 = RTCCL(Current);
		ur2 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6301, Dtype(tr1)))(tr1, ur1x, ur2x);
		RTNHOOK(3,1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(5116, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 5116, 0xF800041F, 0); /* last_decimal */
		*(EIF_REFERENCE *)(Current + RTWA(5116, dtype)) = (EIF_REFERENCE) NULL;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("last_parsed_is_s", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5612, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("last_decimal_created_if_no_error", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5117, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb1) {
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
#undef up1
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.decimal_parse */
void F1018_7932 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "decimal_parse";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 1017, Current, 3, 1, 14130);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14130);
	RTCC(arg1, 1017, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5636, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5598, 0x10000000, 1); /* sign */
	*(EIF_INTEGER_32 *)(Current + RTWA(5598, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5599, 0x10000000, 1); /* exponent_sign */
	*(EIF_INTEGER_32 *)(Current + RTWA(5599, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5606, 0x20000000, 1); /* exponent_as_double */
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current + RTWA(5606, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(6);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(7);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 5602, 0x10000000, 1); /* coefficient_begin */
	*(EIF_INTEGER_32 *)(Current + RTWA(5602, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 5603, 0x10000000, 1); /* coefficient_end */
	*(EIF_INTEGER_32 *)(Current + RTWA(5603, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(10);
	RTDBGAA(Current, dtype, 5607, 0x10000000, 1); /* exponent_begin */
	*(EIF_INTEGER_32 *)(Current + RTWA(5607, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(11);
	RTDBGAA(Current, dtype, 5608, 0x10000000, 1); /* exponent_end */
	*(EIF_INTEGER_32 *)(Current + RTWA(5608, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(12);
	RTDBGAA(Current, dtype, 5609, 0x10000000, 1); /* exponent_significant_digits */
	*(EIF_INTEGER_32 *)(Current + RTWA(5609, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(13);
	RTDBGAA(Current, dtype, 5611, 0x10000000, 1); /* decimal_point_index */
	*(EIF_INTEGER_32 *)(Current + RTWA(5611, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(14);
	RTDBGAA(Current, dtype, 5619, 0x04000000, 1); /* decimal_point_is_comma */
	*(EIF_BOOLEAN *)(Current + RTWA(5619, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		RTHOOK(15);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5649, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ti4_2) || (EIF_BOOLEAN) (loc2 > loc3))) break;
		RTHOOK(16);
		RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
		ui4_1 = loc2;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2556, "item", arg1))(arg1, ui4_1x)).it_c1);
		loc1 = (EIF_CHARACTER_8) tc1;
		RTHOOK(17);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype));
		switch (ti4_3) {
			case 1L:
				RTHOOK(18);
				uc1 = loc1;
				ui4_1 = loc2;
				ur1 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5624, dtype))(Current, uc1x, ui4_1x, ur1x);
				break;
			case 10L:
				RTHOOK(19);
				uc1 = loc1;
				ui4_1 = loc2;
				ur1 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5626, dtype))(Current, uc1x, ui4_1x, ur1x);
				break;
			case 6L:
				RTHOOK(20);
				uc1 = loc1;
				ui4_1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5627, dtype))(Current, uc1x, ui4_1x);
				break;
			case 4L:
				RTHOOK(21);
				uc1 = loc1;
				ui4_1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5628, dtype))(Current, uc1x, ui4_1x);
				break;
			case 7L:
				RTHOOK(22);
				uc1 = loc1;
				ui4_1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5629, dtype))(Current, uc1x, ui4_1x);
				break;
			case 11L:
				RTHOOK(23);
				uc1 = loc1;
				ui4_1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5630, dtype))(Current, uc1x, ui4_1x);
				break;
			case 8L:
				RTHOOK(24);
				uc1 = loc1;
				ui4_1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5631, dtype))(Current, uc1x, ui4_1x);
				break;
			case 12L:
				RTHOOK(25);
				uc1 = loc1;
				ui4_1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5632, dtype))(Current, uc1x, ui4_1x);
				break;
			case 13L:
				RTHOOK(26);
				uc1 = loc1;
				ui4_1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5633, dtype))(Current, uc1x, ui4_1x);
				break;
			case 9L:
				RTHOOK(27);
				uc1 = loc1;
				ui4_1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5634, dtype))(Current, uc1x, ui4_1x);
				break;
			case 2L:
			case 3L:
			case 5L:
				RTHOOK(28);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) loc3;
				break;
			default:
				RTHOOK(29);
				RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
				ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5649, dtype))(Current)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_3;
				break;
		}
		RTHOOK(30);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTHOOK(31);
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype));
	switch (ti4_3) {
		case 1L:
		case 4L:
		case 10L:
		case 11L:
		case 12L:
		case 13L:
			RTHOOK(32);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5649, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_3;
			break;
	}
	RTHOOK(33);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5619, dtype));
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(5613, dtype));
	if ((EIF_BOOLEAN) (tb1 && (EIF_BOOLEAN) !tb2)) {
		RTHOOK(34);
		RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5649, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_3;
	}
	RTHOOK(35);
	RTDBGAA(Current, dtype, 5612, 0xF80000E8, 0); /* last_parsed */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5612, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(36);
		RTCT("last_parsed_is_s", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5612, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(37);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.process_start */
void F1018_7933 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "process_start";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,tr1);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 3, 14131);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14131);
	RTCC(arg3, 1017, l_feature_name, 3, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_start", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5636, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_in_s", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(4768, "count", arg3));
			tb1 = (EIF_BOOLEAN) (arg2 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(5);
			RTDBGAA(Current, dtype, 5602, 0x10000000, 1); /* coefficient_begin */
			*(EIF_INTEGER_32 *)(Current + RTWA(5602, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(6);
			RTDBGAA(Current, dtype, 5603, 0x10000000, 1); /* coefficient_end */
			*(EIF_INTEGER_32 *)(Current + RTWA(5603, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(7);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5641, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case (EIF_CHARACTER_8) '+':
		case (EIF_CHARACTER_8) '-':
			RTHOOK(8);
			if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-')) {
				RTHOOK(9);
				RTDBGAA(Current, dtype, 5598, 0x10000000, 1); /* sign */
				*(EIF_INTEGER_32 *)(Current + RTWA(5598, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
			} else {
				RTHOOK(10);
				RTDBGAA(Current, dtype, 5598, 0x10000000, 1); /* sign */
				*(EIF_INTEGER_32 *)(Current + RTWA(5598, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			}
			RTHOOK(11);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5645, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case (EIF_CHARACTER_8) 'N':
		case (EIF_CHARACTER_8) 'n':
			RTHOOK(12);
			ur1 = RTCCL(arg3);
			ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
			ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(4768, "count", arg3));
			ui4_2 = ti4_1;
			tr1 = RTMS_EX_H("an",2,24942);
			ur2 = tr1;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5635, dtype))(Current, ur1x, ui4_1x, ui4_2x, ur2x)).it_b);
			if (tb1) {
				RTHOOK(13);
				RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5637, dtype))(Current)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(14);
				RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5649, dtype))(Current)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
				RTHOOK(15);
				RTDBGAA(Current, dtype, 5601, 0x10000000, 1); /* error_code */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5650, dtype))(Current)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(5601, dtype)) = (EIF_INTEGER_32) ti4_1;
			}
			break;
		case (EIF_CHARACTER_8) 'S':
		case (EIF_CHARACTER_8) 's':
			RTHOOK(16);
			ur1 = RTCCL(arg3);
			ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
			ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(4768, "count", arg3));
			ui4_2 = ti4_1;
			tr1 = RTMS_EX_H("nan",3,7233902);
			ur2 = tr1;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5635, dtype))(Current, ur1x, ui4_1x, ui4_2x, ur2x)).it_b);
			if (tb1) {
				RTHOOK(17);
				RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5638, dtype))(Current)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(18);
				RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5649, dtype))(Current)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
				RTHOOK(19);
				RTDBGAA(Current, dtype, 5601, 0x10000000, 1); /* error_code */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5650, dtype))(Current)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(5601, dtype)) = (EIF_INTEGER_32) ti4_1;
			}
			break;
		case (EIF_CHARACTER_8) 'I':
		case (EIF_CHARACTER_8) 'i':
			RTHOOK(20);
			ur1 = RTCCL(arg3);
			ui4_1 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5625, dtype))(Current, ur1x, ui4_1x);
			break;
		case (EIF_CHARACTER_8) '.':
			RTHOOK(21);
			RTDBGAA(Current, dtype, 5602, 0x10000000, 1); /* coefficient_begin */
			*(EIF_INTEGER_32 *)(Current + RTWA(5602, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(22);
			RTDBGAA(Current, dtype, 5603, 0x10000000, 1); /* coefficient_end */
			*(EIF_INTEGER_32 *)(Current + RTWA(5603, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(23);
			RTDBGAA(Current, dtype, 5611, 0x10000000, 1); /* decimal_point_index */
			*(EIF_INTEGER_32 *)(Current + RTWA(5611, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(24);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5639, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTHOOK(25);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5649, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(26);
			RTDBGAA(Current, dtype, 5601, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5651, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5601, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(27);
		RTCT("next_state", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5117, dtype))(Current)).it_b);
		if (!tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype));
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5636, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(28);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.handle_i */
void F1018_7934 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "handle_i";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,tr1);
	RTLR(3,ur2);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 2, 14132);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14132);
	RTCC(arg1, 1017, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_in_s", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
			tb1 = (EIF_BOOLEAN) (arg2 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
	ui4_2 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L));
	tr1 = RTMS_EX_H("nf",2,28262);
	ur2 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5635, dtype))(Current, ur1x, ui4_1x, ui4_2x, ur2x)).it_b);
	if (tb1) {
		RTHOOK(4);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
		if (!((EIF_BOOLEAN)((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - arg2) + ((EIF_INTEGER_32) 1L)) == ((EIF_INTEGER_32) 3L)))) {
			ur1 = RTCCL(arg1);
			ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 3L));
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
			ui4_2 = ti4_1;
			tr1 = RTMS_EX_H("inity",5,1853211257);
			ur2 = tr1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5635, dtype))(Current, ur1x, ui4_1x, ui4_2x, ur2x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(5);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5640, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(6);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5649, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(7);
			RTDBGAA(Current, dtype, 5601, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5650, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5601, dtype)) = (EIF_INTEGER_32) ti4_1;
		}
	} else {
		RTHOOK(8);
		RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5649, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		RTDBGAA(Current, dtype, 5601, 0x10000000, 1); /* error_code */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5650, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(5601, dtype)) = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("definition", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5117, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			tb2 = '\0';
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5614, dtype))(Current)).it_b);
			if (tb3) {
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype));
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5640, dtype))(Current)).it_i4);
				tb2 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
			}
			tb1 = tb2;
		}
		if (tb1) {
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
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.process_sign */
void F1018_7935 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "process_sign";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 3, 14133);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14133);
	RTCC(arg3, 1017, l_feature_name, 3, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_sign", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5645, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_in_s", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(4768, "count", arg3));
			tb1 = (EIF_BOOLEAN) (arg2 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	switch (arg1) {
		case (EIF_CHARACTER_8) 'I':
		case (EIF_CHARACTER_8) 'i':
			RTHOOK(5);
			ur1 = RTCCL(arg3);
			ui4_1 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5625, dtype))(Current, ur1x, ui4_1x);
			break;
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(6);
			RTDBGAA(Current, dtype, 5602, 0x10000000, 1); /* coefficient_begin */
			*(EIF_INTEGER_32 *)(Current + RTWA(5602, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(7);
			RTDBGAA(Current, dtype, 5603, 0x10000000, 1); /* coefficient_end */
			*(EIF_INTEGER_32 *)(Current + RTWA(5603, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(8);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5641, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case (EIF_CHARACTER_8) '.':
			RTHOOK(9);
			RTDBGAA(Current, dtype, 5602, 0x10000000, 1); /* coefficient_begin */
			*(EIF_INTEGER_32 *)(Current + RTWA(5602, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(10);
			RTDBGAA(Current, dtype, 5603, 0x10000000, 1); /* coefficient_end */
			*(EIF_INTEGER_32 *)(Current + RTWA(5603, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(11);
			RTDBGAA(Current, dtype, 5611, 0x10000000, 1); /* decimal_point_index */
			*(EIF_INTEGER_32 *)(Current + RTWA(5611, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(12);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5639, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTHOOK(13);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5649, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(14);
			RTDBGAA(Current, dtype, 5601, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5651, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5601, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ur1
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.process_integer_part */
void F1018_7936 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "process_integer_part";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 2, 14134);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14134);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_integer_part", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5641, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			RTDBGAA(Current, dtype, 5603, 0x10000000, 1); /* coefficient_end */
			(*(EIF_INTEGER_32 *)(Current + RTWA(5603, dtype)))++;
			break;
		case (EIF_CHARACTER_8) 'E':
		case (EIF_CHARACTER_8) 'e':
			RTHOOK(4);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5647, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case (EIF_CHARACTER_8) '.':
			RTHOOK(5);
			RTDBGAA(Current, dtype, 5603, 0x10000000, 1); /* coefficient_end */
			(*(EIF_INTEGER_32 *)(Current + RTWA(5603, dtype)))++;
			RTHOOK(6);
			RTDBGAA(Current, dtype, 5611, 0x10000000, 1); /* decimal_point_index */
			*(EIF_INTEGER_32 *)(Current + RTWA(5611, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(7);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5642, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case (EIF_CHARACTER_8) ',':
			RTHOOK(8);
			RTDBGAA(Current, dtype, 5603, 0x10000000, 1); /* coefficient_end */
			(*(EIF_INTEGER_32 *)(Current + RTWA(5603, dtype)))++;
			RTHOOK(9);
			RTDBGAA(Current, dtype, 5611, 0x10000000, 1); /* decimal_point_index */
			*(EIF_INTEGER_32 *)(Current + RTWA(5611, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(10);
			RTDBGAA(Current, dtype, 5619, 0x04000000, 1); /* decimal_point_is_comma */
			*(EIF_BOOLEAN *)(Current + RTWA(5619, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(11);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5646, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTHOOK(12);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5649, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(13);
			RTDBGAA(Current, dtype, 5601, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5652, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5601, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.process_starting_point */
void F1018_7937 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "process_starting_point";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 2, 14135);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14135);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_starting_point", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5639, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			RTDBGAA(Current, dtype, 5602, 0x10000000, 1); /* coefficient_begin */
			*(EIF_INTEGER_32 *)(Current + RTWA(5602, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(4);
			RTDBGAA(Current, dtype, 5603, 0x10000000, 1); /* coefficient_end */
			*(EIF_INTEGER_32 *)(Current + RTWA(5603, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(5);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5643, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTHOOK(6);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5649, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(7);
			RTDBGAA(Current, dtype, 5601, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5651, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5601, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.process_point */
void F1018_7938 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "process_point";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 2, 14136);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14136);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_point", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5642, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			RTDBGAA(Current, dtype, 5603, 0x10000000, 1); /* coefficient_end */
			(*(EIF_INTEGER_32 *)(Current + RTWA(5603, dtype)))++;
			RTHOOK(4);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5643, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case (EIF_CHARACTER_8) 'E':
		case (EIF_CHARACTER_8) 'e':
			RTHOOK(5);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5647, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTHOOK(6);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5649, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(7);
			RTDBGAA(Current, dtype, 5601, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5651, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5601, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.process_comma */
void F1018_7939 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "process_comma";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 2, 14137);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14137);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_comma", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5646, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			RTDBGAA(Current, dtype, 5603, 0x10000000, 1); /* coefficient_end */
			(*(EIF_INTEGER_32 *)(Current + RTWA(5603, dtype)))++;
			RTHOOK(4);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5643, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTHOOK(5);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5649, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(6);
			RTDBGAA(Current, dtype, 5601, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5651, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5601, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.process_fractional_part */
void F1018_7940 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "process_fractional_part";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 2, 14138);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14138);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_fractional_part", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5643, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			RTDBGAA(Current, dtype, 5603, 0x10000000, 1); /* coefficient_end */
			(*(EIF_INTEGER_32 *)(Current + RTWA(5603, dtype)))++;
			break;
		case (EIF_CHARACTER_8) 'E':
		case (EIF_CHARACTER_8) 'e':
			RTHOOK(4);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5647, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTHOOK(5);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5649, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(6);
			RTDBGAA(Current, dtype, 5601, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5653, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5601, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.process_start_exponent */
void F1018_7941 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "process_start_exponent";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 2, 14139);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14139);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_start_exponent", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5647, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			RTDBGAA(Current, dtype, 5606, 0x20000000, 1); /* exponent_as_double */
			ti4_1 = (EIF_INTEGER_32) (arg1);
			ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '0');
			tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 - ti4_2));
			*(EIF_REAL_64 *)(Current + RTWA(5606, dtype)) = (EIF_REAL_64) tr8_1;
			RTHOOK(4);
			RTDBGAA(Current, dtype, 5607, 0x10000000, 1); /* exponent_begin */
			*(EIF_INTEGER_32 *)(Current + RTWA(5607, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(5);
			RTDBGAA(Current, dtype, 5608, 0x10000000, 1); /* exponent_end */
			*(EIF_INTEGER_32 *)(Current + RTWA(5608, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(6);
			tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5606, dtype));
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_1, tr8_2)) {
				RTHOOK(7);
				RTDBGAA(Current, dtype, 5609, 0x10000000, 1); /* exponent_significant_digits */
				*(EIF_INTEGER_32 *)(Current + RTWA(5609, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			}
			RTHOOK(8);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5644, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case (EIF_CHARACTER_8) '+':
		case (EIF_CHARACTER_8) '-':
			RTHOOK(9);
			if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-')) {
				RTHOOK(10);
				RTDBGAA(Current, dtype, 5599, 0x10000000, 1); /* exponent_sign */
				*(EIF_INTEGER_32 *)(Current + RTWA(5599, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
			} else {
				RTHOOK(11);
				RTDBGAA(Current, dtype, 5599, 0x10000000, 1); /* exponent_sign */
				*(EIF_INTEGER_32 *)(Current + RTWA(5599, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			}
			RTHOOK(12);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5648, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTHOOK(13);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5649, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(14);
			RTDBGAA(Current, dtype, 5601, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5654, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5601, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.process_exponent_sign */
void F1018_7942 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "process_exponent_sign";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 2, 14140);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14140);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_exponent_sign", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5648, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			RTDBGAA(Current, dtype, 5606, 0x20000000, 1); /* exponent_as_double */
			ti4_1 = (EIF_INTEGER_32) (arg1);
			ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '0');
			tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 - ti4_2));
			*(EIF_REAL_64 *)(Current + RTWA(5606, dtype)) = (EIF_REAL_64) tr8_1;
			RTHOOK(4);
			RTDBGAA(Current, dtype, 5607, 0x10000000, 1); /* exponent_begin */
			*(EIF_INTEGER_32 *)(Current + RTWA(5607, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(5);
			RTDBGAA(Current, dtype, 5608, 0x10000000, 1); /* exponent_end */
			*(EIF_INTEGER_32 *)(Current + RTWA(5608, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(6);
			tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5606, dtype));
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_1, tr8_2)) {
				RTHOOK(7);
				RTDBGAA(Current, dtype, 5609, 0x10000000, 1); /* exponent_significant_digits */
				*(EIF_INTEGER_32 *)(Current + RTWA(5609, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			}
			RTHOOK(8);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5644, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTHOOK(9);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5649, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(10);
			RTDBGAA(Current, dtype, 5601, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5654, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5601, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.process_exponent */
void F1018_7943 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "process_exponent";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1017, Current, 0, 2, 14141);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14141);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_exponent", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5644, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			RTDBGAA(Current, dtype, 5606, 0x20000000, 1); /* exponent_as_double */
			tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5606, dtype));
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 10L));
			ti4_1 = (EIF_INTEGER_32) (arg1);
			ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '0');
			tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) (ti4_1 - ti4_2)));
			*(EIF_REAL_64 *)(Current + RTWA(5606, dtype)) = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * tr8_2) + tr8_3);
			RTHOOK(4);
			RTDBGAA(Current, dtype, 5608, 0x10000000, 1); /* exponent_end */
			(*(EIF_INTEGER_32 *)(Current + RTWA(5608, dtype)))++;
			RTHOOK(5);
			tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(5606, dtype));
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_1, tr8_2)) {
				RTHOOK(6);
				RTDBGAA(Current, dtype, 5609, 0x10000000, 1); /* exponent_significant_digits */
				(*(EIF_INTEGER_32 *)(Current + RTWA(5609, dtype)))++;
			}
			RTHOOK(7);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5644, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTHOOK(8);
			RTDBGAA(Current, dtype, 5600, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5649, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5600, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(9);
			RTDBGAA(Current, dtype, 5601, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5654, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(5601, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.case_insensitive_substring_equal */
EIF_TYPED_VALUE F1018_7944 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "case_insensitive_substring_equal";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg4);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 1017, Current, 2, 4, 14142);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1017, Current, 14142);
	RTCC(arg1, 1017, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTCC(arg4, 1017, l_feature_name, 4, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("t_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg2;
	RTHOOK(4);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg4 + RTVA(4768, "count", arg4));
			tb3 = (EIF_BOOLEAN) (loc2 > ti4_1);
		}
		if (!tb3) {
			tb2 = (EIF_BOOLEAN) (loc1 > arg3);
		}
		if (!tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5376, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2556, "item", arg1))(arg1, ui4_1x)).it_c1);
			uc1 = tc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5308, "as_lower", tr1))(tr1, uc1x)).it_c1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5376, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,2);
			ui4_1 = loc2;
			tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2556, "item", arg4))(arg4, ui4_1x)).it_c1);
			uc1 = tc2;
			tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5308, "as_lower", tr1))(tr1, uc1x)).it_c1);
			tb1 = (EIF_BOOLEAN)(tc1 != tc2);
		}
		if (tb1) break;
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
		RTHOOK(7);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTHOOK(8);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb2 = '\0';
	if ((EIF_BOOLEAN) (loc1 > arg3)) {
		ti4_1 = *(EIF_INTEGER_32 *)(arg4 + RTVA(4768, "count", arg4));
		tb2 = (EIF_BOOLEAN) (loc2 > ti4_1);
	}
	Result = (EIF_BOOLEAN) tb2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("definition", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5597, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		ui4_1 = arg2;
		ui4_2 = arg3;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4722, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(9,2);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4703, "as_lower", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr3);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4703, "as_lower", arg4))(arg4)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur2 = RTCCL(tr2);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5822, "same_string", tr1))(tr1, ur1x, ur2x)).it_b);
		if ((EIF_BOOLEAN)(Result == tb2)) {
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
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.state_start */
EIF_TYPED_VALUE F1018_7945 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_nan */
EIF_TYPED_VALUE F1018_7946 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_snan */
EIF_TYPED_VALUE F1018_7947 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_starting_point */
EIF_TYPED_VALUE F1018_7948 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_infinity */
EIF_TYPED_VALUE F1018_7949 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_integer_part */
EIF_TYPED_VALUE F1018_7950 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_point */
EIF_TYPED_VALUE F1018_7951 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_fractional_part */
EIF_TYPED_VALUE F1018_7952 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_exponent */
EIF_TYPED_VALUE F1018_7953 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_sign */
EIF_TYPED_VALUE F1018_7954 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_comma */
EIF_TYPED_VALUE F1018_7955 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_start_exponent */
EIF_TYPED_VALUE F1018_7956 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_exponent_sign */
EIF_TYPED_VALUE F1018_7957 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_error */
EIF_TYPED_VALUE F1018_7958 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.error_invalid_value */
EIF_TYPED_VALUE F1018_7959 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 101L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.error_invalid_character */
EIF_TYPED_VALUE F1018_7960 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 102L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.error_invalid_character_in_integer_part */
EIF_TYPED_VALUE F1018_7961 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 103L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.error_invalid_character_in_decimal_part */
EIF_TYPED_VALUE F1018_7962 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 104L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.error_invalid_character_in_exponent */
EIF_TYPED_VALUE F1018_7963 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 105L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.error_invalid_state */
EIF_TYPED_VALUE F1018_7964 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}._invariant */
void F1018_8998 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 1017, Current, 0, 8997);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("decimal_point_is_comma_implies_has_fractional_part", Current);
	tb1 = '\01';
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(5619, dtype));
	if (tb2) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5617, dtype))(Current)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit1018 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
