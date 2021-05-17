/*
 * Code for class SHARED_INFORMATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1045_10048(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1045_10049(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1045_10050(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1045_10051(EIF_REFERENCE);
static EIF_TYPED_VALUE F1045_10052_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1045_10052(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1045_10053(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1045_10054(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1045_10055(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1045_10056(EIF_REFERENCE);
extern void F1045_10057(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1045_10058(EIF_REFERENCE);
extern void F1045_10059(EIF_REFERENCE);
extern void F1045_10060(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1045_10061(EIF_REFERENCE);
extern void F1045_10062(EIF_REFERENCE);
extern void EIF_Minit1045(void);

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

/* {SHARED_INFORMATION}.make */
void F1045_10048 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1044, Current, 0, 0, 16399);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1044, Current, 16399);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7838, 0x10000000, 1); /* planet_id */
	*(EIF_INTEGER_32 *)(Current + RTWA(7838, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7839, 0x10000000, 1); /* stationary_id */
	*(EIF_INTEGER_32 *)(Current + RTWA(7839, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -2L);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 7840, 0x10000000, 1); /* num_entites */
	*(EIF_INTEGER_32 *)(Current + RTWA(7840, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {SHARED_INFORMATION}.number_rows */
EIF_TYPED_VALUE F1045_10049 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	return r;
}

/* {SHARED_INFORMATION}.number_columns */
EIF_TYPED_VALUE F1045_10050 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	return r;
}

/* {SHARED_INFORMATION}.number_of_stationary_items */
EIF_TYPED_VALUE F1045_10051 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	return r;
}

/* {SHARED_INFORMATION}.planet_threshold */
static EIF_TYPED_VALUE F1045_10052_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "planet_threshold";
	RTEX;
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
	
	RTEAA(l_feature_name, 1044, Current, 0, 0, 16403);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1044, Current, 16403);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
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

EIF_TYPED_VALUE F1045_10052 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7836,Dtype(Current)));
	return r;
}


/* {SHARED_INFORMATION}.max_capacity */
EIF_TYPED_VALUE F1045_10053 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {SHARED_INFORMATION}.planet_id */
EIF_TYPED_VALUE F1045_10054 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7838,Dtype(Current)));
	return r;
}


/* {SHARED_INFORMATION}.stationary_id */
EIF_TYPED_VALUE F1045_10055 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7839,Dtype(Current)));
	return r;
}


/* {SHARED_INFORMATION}.num_entites */
EIF_TYPED_VALUE F1045_10056 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7840,Dtype(Current)));
	return r;
}


/* {SHARED_INFORMATION}.set_planet_threshold */
void F1045_10057 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_planet_threshold";
	RTEX;
#define arg1 arg1x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1044, Current, 0, 1, 16408);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1044, Current, 16408);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_threshold", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) < arg1) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 101L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7836, 0x10000000, 1); /* planet_threshold */
	*(EIF_INTEGER_32 *)(Current + RTWA(7836, dtype)) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {SHARED_INFORMATION}.planet_increment */
void F1045_10058 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "planet_increment";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1044, Current, 0, 0, 16409);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1044, Current, 16409);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7838, 0x10000000, 1); /* planet_id */
	(*(EIF_INTEGER_32 *)(Current + RTWA(7838, dtype)))++;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7846, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {SHARED_INFORMATION}.stationary_increment */
void F1045_10059 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "stationary_increment";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1044, Current, 0, 0, 16410);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1044, Current, 16410);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7839, 0x10000000, 1); /* stationary_id */
	(*(EIF_INTEGER_32 *)(Current + RTWA(7839, dtype)))--;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7846, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {SHARED_INFORMATION}.reset */
void F1045_10060 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reset";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1044, Current, 0, 0, 16411);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1044, Current, 16411);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7838, 0x10000000, 1); /* planet_id */
	*(EIF_INTEGER_32 *)(Current + RTWA(7838, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7839, 0x10000000, 1); /* stationary_id */
	*(EIF_INTEGER_32 *)(Current + RTWA(7839, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -2L);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 7840, 0x10000000, 1); /* num_entites */
	*(EIF_INTEGER_32 *)(Current + RTWA(7840, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {SHARED_INFORMATION}.number_of_entities */
EIF_TYPED_VALUE F1045_10061 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "number_of_entities";
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
	
	RTEAA(l_feature_name, 1044, Current, 0, 0, 16412);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1044, Current, 16412);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7840, dtype));
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

/* {SHARED_INFORMATION}.entites_increment */
void F1045_10062 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "entites_increment";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1044, Current, 0, 0, 16413);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1044, Current, 16413);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7840, 0x10000000, 1); /* num_entites */
	(*(EIF_INTEGER_32 *)(Current + RTWA(7840, dtype)))++;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit1045 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
