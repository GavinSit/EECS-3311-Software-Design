/*
 * Code for class WEL_GDIP_IMAGE_ENCODER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F969_8836(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F969_8837(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8838(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8839(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8840(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8841(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8842(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8843(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8844(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8845(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8846(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8847(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8848(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8849(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8850(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8851(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8852(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8853(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_8854(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F969_8855(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit969(void);

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

/* {WEL_GDIP_IMAGE_ENCODER}.make */
void F969_8836 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 15137);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 15137);
	RTCC(arg1, 968, l_feature_name, 1, eif_new_type(991, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6627, 0xF80003DF, 0); /* guid */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(6627, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6627, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
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
#undef up1
#undef arg1
}

/* {WEL_GDIP_IMAGE_ENCODER}.guid */
EIF_TYPED_VALUE F969_8837 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6627,Dtype(Current)));
	return r;
}


/* {WEL_GDIP_IMAGE_ENCODER}.find_encoder */
EIF_TYPED_VALUE F969_8838 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "find_encoder";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,Current);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 968, Current, 2, 0, 15139);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 15139);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0xF80005BF, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(1471, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0xF800010E, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13158, "all_image_encoders", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2292, "start", loc1))(loc1);
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2306, "after", loc1))(loc1)).it_b);
		if (!tb2) {
			tb1 = (EIF_BOOLEAN)(Result != NULL);
		}
		if (tb1) break;
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2258, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6599, "format_id", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6627, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTEQ(tr2, tr1)) {
			RTHOOK(6);
			RTDBGAL(0, 0xF80003C7, 0,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2258, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2308, "forth", loc1))(loc1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {WEL_GDIP_IMAGE_ENCODER}.bmp */
EIF_TYPED_VALUE F969_8839 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "bmp";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 15140);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 15140);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80003C8, 0,0); /* Result */
	tr1 = RTMS_EX_H("image/bmp",9,203750768);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6645, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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
#undef up1
#undef ur1
}

/* {WEL_GDIP_IMAGE_ENCODER}.jpg */
EIF_TYPED_VALUE F969_8840 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "jpg";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 15141);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 15141);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80003C8, 0,0); /* Result */
	tr1 = RTMS_EX_H("image/jpeg",10,755092839);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6645, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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
#undef up1
#undef ur1
}

/* {WEL_GDIP_IMAGE_ENCODER}.gif */
EIF_TYPED_VALUE F969_8841 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "gif";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 15142);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 15142);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80003C8, 0,0); /* Result */
	tr1 = RTMS_EX_H("image/gif",9,204077414);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6645, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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
#undef up1
#undef ur1
}

/* {WEL_GDIP_IMAGE_ENCODER}.tiff */
EIF_TYPED_VALUE F969_8842 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tiff";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 15143);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 15143);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80003C8, 0,0); /* Result */
	tr1 = RTMS_EX_H("image/tiff",10,922406502);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6645, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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
#undef up1
#undef ur1
}

/* {WEL_GDIP_IMAGE_ENCODER}.png */
EIF_TYPED_VALUE F969_8843 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "png";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 15144);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 15144);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80003C8, 0,0); /* Result */
	tr1 = RTMS_EX_H("image/png",9,204668519);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6645, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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
#undef up1
#undef ur1
}

/* {WEL_GDIP_IMAGE_ENCODER}.compression */
RTOID (F969_8844)
EIF_TYPED_VALUE F969_8844 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "compression";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 tu2_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F969_8844);
	dtype = Dtype(Current);

	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 15145);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 15145);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80003DF, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(991, 0x01).id);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) -526552163L);
	uu4_1 = tu4_1;
	tu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) -13100L);
	uu2_1 = tu2_1;
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 17646L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 142L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 186L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 63L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 191L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 139L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 228L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 252L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 88L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6824, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

/* {WEL_GDIP_IMAGE_ENCODER}.color_depth */
RTOID (F969_8845)
EIF_TYPED_VALUE F969_8845 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "color_depth";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_16 tu2_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F969_8845);
	dtype = Dtype(Current);

	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 15146);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 15146);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80003DF, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(991, 0x01).id);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1711829077L);
	tu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) -21146L);
	uu2_1 = tu2_1;
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 19580L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 154L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 24L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 56L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 162L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 49L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 11L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 131L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 55L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6824, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

/* {WEL_GDIP_IMAGE_ENCODER}.scan_method */
RTOID (F969_8846)
EIF_TYPED_VALUE F969_8846 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "scan_method";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F969_8846);
	dtype = Dtype(Current);

	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 15147);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 15147);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80003DF, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(991, 0x01).id);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 978200161L);
	uu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 12553L);
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 20054L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 133L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 54L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 66L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 193L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 86L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 231L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 220L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 250L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6824, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

/* {WEL_GDIP_IMAGE_ENCODER}.version */
RTOID (F969_8847)
EIF_TYPED_VALUE F969_8847 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "version";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_16 tu2_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F969_8847);
	dtype = Dtype(Current);

	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 15148);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 15148);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80003DF, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(991, 0x01).id);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 617712758L);
	tu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) -32438L);
	uu2_1 = tu2_1;
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 16804L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 191L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 83L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 28L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 33L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 156L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 204L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 247L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 151L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6824, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

/* {WEL_GDIP_IMAGE_ENCODER}.render_method */
RTOID (F969_8848)
EIF_TYPED_VALUE F969_8848 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "render_method";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F969_8848);
	dtype = Dtype(Current);

	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 15149);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 15149);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80003DF, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(991, 0x01).id);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 1833092410L);
	uu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 8858L);
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 18469L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 139L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 183L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 92L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 153L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 226L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 185L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 168L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 184L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6824, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

/* {WEL_GDIP_IMAGE_ENCODER}.quality */
RTOID (F969_8849)
EIF_TYPED_VALUE F969_8849 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "quality";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_16 tu2_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F969_8849);
	dtype = Dtype(Current);

	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 15150);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 15150);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80003DF, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(991, 0x01).id);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 492561589L);
	tu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) -1462L);
	uu2_1 = tu2_1;
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 17709L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 156L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 221L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 93L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 179L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 81L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 5L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 231L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 235L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6824, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

/* {WEL_GDIP_IMAGE_ENCODER}.transformation */
RTOID (F969_8850)
EIF_TYPED_VALUE F969_8850 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "transformation";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 tu2_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F969_8850);
	dtype = Dtype(Current);

	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 15151);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 15151);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80003DF, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(991, 0x01).id);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) -1928416559L);
	uu4_1 = tu4_1;
	tu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) -23154L);
	uu2_1 = tu2_1;
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 20136L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 170L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 20L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 16L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 116L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 183L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 182L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 249L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6824, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

/* {WEL_GDIP_IMAGE_ENCODER}.luminance_table */
RTOID (F969_8851)
EIF_TYPED_VALUE F969_8851 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "luminance_table";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F969_8851);
	dtype = Dtype(Current);

	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 15152);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 15152);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80003DF, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(991, 0x01).id);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) -307020850L);
	uu4_1 = tu4_1;
	uu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 614L);
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 19063L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 185L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 4L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 39L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 33L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 96L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 153L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 231L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 23L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6824, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

/* {WEL_GDIP_IMAGE_ENCODER}.chrominance_table */
RTOID (F969_8852)
EIF_TYPED_VALUE F969_8852 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "chrominance_table";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F969_8852);
	dtype = Dtype(Current);

	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 15153);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 15153);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80003DF, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(991, 0x01).id);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) -219916836L);
	uu4_1 = tu4_1;
	uu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 2483L);
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 17174L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 130L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 96L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 103L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 106L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 218L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 50L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 72L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 28L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6824, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

/* {WEL_GDIP_IMAGE_ENCODER}.save_flag */
RTOID (F969_8853)
EIF_TYPED_VALUE F969_8853 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "save_flag";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_16 tu2_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F969_8853);
	dtype = Dtype(Current);

	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 15154);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 15154);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80003DF, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(991, 0x01).id);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 690120444L);
	tu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) -21440L);
	uu2_1 = tu2_1;
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 18367L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 140L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 252L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 168L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 91L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 137L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 166L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 85L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 222L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6824, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

/* {WEL_GDIP_IMAGE_ENCODER}.is_valid */
EIF_TYPED_VALUE F969_8854 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_BOOLEAN tb9;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 15155);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 15155);
	RTCC(arg1, 968, l_feature_name, 1, eif_new_type(991, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_guid_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	tb4 = '\01';
	tb5 = '\01';
	tb6 = '\01';
	tb7 = '\01';
	tb8 = '\01';
	tb9 = '\01';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6639, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (!RTEQ(arg1, tr1)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6634, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb9 = RTEQ(arg1, tr1);
	}
	if (!tb9) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6635, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb8 = RTEQ(arg1, tr1);
	}
	if (!tb8) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6636, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb7 = RTEQ(arg1, tr1);
	}
	if (!tb7) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6637, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb6 = RTEQ(arg1, tr1);
	}
	if (!tb6) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6638, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb5 = RTEQ(arg1, tr1);
	}
	if (!tb5) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6640, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb4 = RTEQ(arg1, tr1);
	}
	if (!tb4) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6641, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb3 = RTEQ(arg1, tr1);
	}
	if (!tb3) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6642, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb2 = RTEQ(arg1, tr1);
	}
	if (!tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6643, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb1 = RTEQ(arg1, tr1);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef arg1
}

/* {WEL_GDIP_IMAGE_ENCODER}.find_encoder_with */
EIF_TYPED_VALUE F969_8855 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "find_encoder_with";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc3);
	RTLR(5,tr2);
	RTLR(6,ur1);
	RTLR(7,Result);
	RTLR(8,Current);
	RTLIU(9);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 968, Current, 3, 1, 15156);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 15156);
	RTCC(arg1, 968, l_feature_name, 1, eif_new_type(229, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_mini_type_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(2, 0xF80005BF, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(1471, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(1, 0xF800010E, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13158, "all_image_encoders", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2292, "start", loc1))(loc1);
	for (;;) {
		RTHOOK(5);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2306, "after", loc1))(loc1)).it_b);
		if (!tb2) {
			tb1 = (EIF_BOOLEAN)(loc3 != NULL);
		}
		if (tb1) break;
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2258, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6604, "mime_type", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,2);
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4687, "same_string_general", tr2))(tr2, ur1x)).it_b);
		if (tb2) {
			RTHOOK(7);
			RTDBGAL(3, 0xF80003C7, 0, 0); /* loc3 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2258, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
		}
		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2308, "forth", loc1))(loc1);
	}
	RTHOOK(9);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTHOOK(10);
		RTDBGAL(0, 0xF80003C8, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(968, 0x01).id);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6599, "format_id", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6626, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(10,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

void EIF_Minit969 (void)
{
	GTCX
	RTOTS (8844,F969_8844)
	RTOTS (8845,F969_8845)
	RTOTS (8846,F969_8846)
	RTOTS (8847,F969_8847)
	RTOTS (8848,F969_8848)
	RTOTS (8849,F969_8849)
	RTOTS (8850,F969_8850)
	RTOTS (8851,F969_8851)
	RTOTS (8852,F969_8852)
	RTOTS (8853,F969_8853)
}


#ifdef __cplusplus
}
#endif
