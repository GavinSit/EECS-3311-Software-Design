/*
 * Code for class WEL_RADIO_BUTTON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1926_23318(EIF_REFERENCE);
extern void EIF_Minit1926(void);

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

/* {WEL_RADIO_BUTTON}.default_style */
RTOID (F1926_23318)
EIF_TYPED_VALUE F1926_23318 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_style";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, F1926_23318);
	dtype = Dtype(Current);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1925, Current, 0, 0, 29461);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1925, Current, 29461);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10126, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10123, dtype))(Current)).it_i4);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10142, dtype))(Current)).it_i4);
	ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11028, dtype))(Current)).it_i4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) + ti4_3) + ti4_4);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef Result
}

void EIF_Minit1926 (void)
{
	GTCX
	RTOTS (23318,F1926_23318)
}


#ifdef __cplusplus
}
#endif
