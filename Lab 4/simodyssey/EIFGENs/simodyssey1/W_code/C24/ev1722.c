/*
 * Code for class EV_ITEM_PIXMAP_SCALER_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1722_19648(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1722_19649(EIF_REFERENCE);
extern void F1722_19650(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1722_19652(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1722_19653(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1722_19654(EIF_REFERENCE);
static EIF_TYPED_VALUE F1722_19655_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1722_19655(EIF_REFERENCE);
extern void EIF_Minit1722(void);

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

/* {EV_ITEM_PIXMAP_SCALER_I}.pixmaps_width */
EIF_TYPED_VALUE F1722_19648 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(16438,Dtype(Current)));
	return r;
}


/* {EV_ITEM_PIXMAP_SCALER_I}.pixmaps_height */
EIF_TYPED_VALUE F1722_19649 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(16439,Dtype(Current)));
	return r;
}


/* {EV_ITEM_PIXMAP_SCALER_I}.set_pixmaps_size */
void F1722_19650 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_pixmaps_size";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1721, Current, 0, 2, 26288);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1721, Current, 26288);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(16438, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(16439, dtype));
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 != arg1) || (EIF_BOOLEAN)(ti4_2 != arg2))) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 16438, 0x10000000, 1); /* pixmaps_width */
		*(EIF_INTEGER_32 *)(Current + RTWA(16438, dtype)) = (EIF_INTEGER_32) arg1;
		RTHOOK(3);
		RTDBGAA(Current, dtype, 16439, 0x10000000, 1); /* pixmaps_height */
		*(EIF_INTEGER_32 *)(Current + RTWA(16439, dtype)) = (EIF_INTEGER_32) arg2;
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16441, dtype))(Current);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("width_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(16438, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("height_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(16439, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
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
#undef arg2
#undef arg1
}

/* {EV_ITEM_PIXMAP_SCALER_I}.initialize_pixmaps */
void F1722_19652 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "initialize_pixmaps";
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
	
	RTEAA(l_feature_name, 1721, Current, 0, 0, 26289);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1721, Current, 26289);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 16438, 0x10000000, 1); /* pixmaps_width */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16443, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(16438, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 16439, 0x10000000, 1); /* pixmaps_height */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16444, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(16439, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_ITEM_PIXMAP_SCALER_I}.default_pixmaps_width */
EIF_TYPED_VALUE F1722_19653 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	return r;
}

/* {EV_ITEM_PIXMAP_SCALER_I}.default_pixmaps_height */
EIF_TYPED_VALUE F1722_19654 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	return r;
}

/* {EV_ITEM_PIXMAP_SCALER_I}.interface */
static EIF_TYPED_VALUE F1722_19655_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "interface";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1721, Current, 0, 0, 26285);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1721, Current, 26285);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

EIF_TYPED_VALUE F1722_19655 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(15892,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(15892, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F1722_19655_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(15892,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1722 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
