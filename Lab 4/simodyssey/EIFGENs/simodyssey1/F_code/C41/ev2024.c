/*
 * Code for class EV_ITEM_LIST_IMP [G#1, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev2024.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ITEM_LIST_IMP}.make */
void F1721_19435 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1696_18990(Current, (EIF_BOOLEAN) 1);
}

/* {EV_ITEM_LIST_IMP}.insert_i_th */
void F1721_19436 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTGC;
	F1717_19425(Current, arg1, arg2);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O15014[Dtype(arg1)-1595]);
	loc1 = tr1;
	loc1 = RTRV(eif_final_id(Y16259,Y16259_gen_type,dftype,1716),loc1);
	if (EIF_TEST(loc1)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19577[Dtype(loc1)-1958])(loc1, Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R16266[Dtype(Current)-1730])(Current, loc1, arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R19578[Dtype(loc1)-1958])(loc1);
		tr1 = F1721_19440(Current);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1667,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		tr3 = F1696_18976(loc1);
		((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
		RTAR(tr2,tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
	}
	RTLE;
}

/* {EV_ITEM_LIST_IMP}.remove_i_th */
void F1721_19437 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTGC;
	tr1 = F1717_19423(Current, arg1);
	tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + O15014[Dtype(tr1)-1595]);
	loc1 = tr1;
	loc1 = RTRV(eif_final_id(Y16259,Y16259_gen_type,dftype,1716),loc1);
	if (EIF_TEST(loc1)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R19579[Dtype(loc1)-1958])(loc1);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O16274[dtype-1720]) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + O16274[dtype-1720]);
			ti4_1 = F951_4094(RTCW(tr1));
			tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + O16274[dtype-1720]);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1667,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 2, 0);
			}
			tr3 = F1696_18976(loc1);
			((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
			RTAR(tr2,tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16267[dtype-1730])(Current, loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19577[Dtype(loc1)-1958])(loc1, NULL);
	}
	F1717_19426(Current, arg1);
	RTLE;
}

/* {EV_ITEM_LIST_IMP}.new_item_actions */
EIF_REFERENCE F1721_19440 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O16273[dtype-1720]) == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {976,0xFF01,0xFFF9,1,1475,0xFF01,1667,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSMART(typres0.id);
		}
		F976_4196(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O16273[dtype-1720]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O16273[dtype-1720]);
}

/* {EV_ITEM_LIST_IMP}.remove_item_actions */
EIF_REFERENCE F1721_19441 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O16274[dtype-1720]) == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {976,0xFF01,0xFFF9,1,1475,0xFF01,1667,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSMART(typres0.id);
		}
		F976_4196(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O16274[dtype-1720]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O16274[dtype-1720]);
}

void EIF_Minit2024 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
