/*
 * Code for class WEL_TMPF_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1106_10662(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1106_10663(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1106_10664(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1106_10665(EIF_REFERENCE);
extern void EIF_Minit1106(void);

#ifdef __cplusplus
}
#endif

#include "wel.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TMPF_CONSTANTS}.tmpf_fixed_pitch */
EIF_TYPED_VALUE F1106_10662 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tmpf_fixed_pitch";
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
	
	RTEAA(l_feature_name, 1105, Current, 0, 0, 17007);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1105, Current, 17007);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TMPF_FIXED_PITCH;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TMPF_CONSTANTS}.tmpf_vector */
EIF_TYPED_VALUE F1106_10663 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tmpf_vector";
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
	
	RTEAA(l_feature_name, 1105, Current, 0, 0, 17008);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1105, Current, 17008);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TMPF_VECTOR;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TMPF_CONSTANTS}.tmpf_device */
EIF_TYPED_VALUE F1106_10664 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tmpf_device";
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
	
	RTEAA(l_feature_name, 1105, Current, 0, 0, 17005);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1105, Current, 17005);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TMPF_DEVICE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TMPF_CONSTANTS}.tmpf_truetype */
EIF_TYPED_VALUE F1106_10665 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tmpf_truetype";
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
	
	RTEAA(l_feature_name, 1105, Current, 0, 0, 17006);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1105, Current, 17006);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TMPF_TRUETYPE;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

void EIF_Minit1106 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
