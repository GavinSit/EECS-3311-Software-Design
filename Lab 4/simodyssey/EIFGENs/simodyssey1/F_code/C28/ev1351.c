/*
 * Code for class EV_PND_ACTION_SEQUENCE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1351.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PND_ACTION_SEQUENCE}.call */
void F978_14410 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_10_2_0_1_)) {
			case 1L:
				tr1 = eif_boxed_item(arg1,1);
				tr2 = RTCCL(tr1);
				if (F978_14415(Current, tr2)) {
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1552,0xFFF9,1,1475,0xFF01,0,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
						loc1 = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
					}
					ti4_1 = F951_4094(Current);
					F951_4073(RTCW(loc1), ti4_1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2223[Dtype(RTCW(loc1))-818])(loc1, Current);
					tr1 = F976_4221(Current);
					F916_3564(RTCW(tr1), (EIF_BOOLEAN) 0);
					F951_4104(RTCW(loc1));
					for (;;) {
						tb1 = '\01';
						ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1) + O3095[Dtype(loc1)-950]);
						ti4_2 = F951_4094(RTCW(loc1));
						if (!(EIF_BOOLEAN) (ti4_1 > ti4_2)) {
							tb2 = F916_3562(RTCV(F976_4221(Current)));
							tb1 = tb2;
						}
						if (tb1) break;
						tr1 = F951_4078(RTCW(loc1));
						tb2 = F1552_6466(RTCW(tr1), arg1);
						if (tb2) {
							tr1 = F951_4078(RTCW(loc1));
							F1552_6475(RTCW(tr1), arg1);
						}
						F951_4106(RTCW(loc1));
					}
					F916_3566(RTCV(F976_4221(Current)));
				}
				break;
			case 2L:
				tr1 = F976_4223(Current);
				F918_3579(RTCW(tr1), arg1);
				break;
			case 3L:
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTLE;
}

/* {EV_PND_ACTION_SEQUENCE}.accepts_pebble */
EIF_BOOLEAN F978_14412 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTGC;
	tr1 = RTCCL(arg1);
	if (F978_14415(Current, tr1)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = arg1;
		RTAR(tr1,arg1);
		loc2 = (EIF_REFERENCE) tr1;
		loc1 = F951_4084(Current);
		F951_4104(Current);
		for (;;) {
			tb1 = '\01';
			if (!Result) {
				tb1 = F882_3332(Current);
			}
			if (tb1) break;
			tr1 = F951_4078(Current);
			Result = F1552_6466(RTCW(tr1), loc2);
			F951_4106(Current);
		}
		F951_4109(Current, loc1);
	}
	RTLE;
	return Result;
}

/* {EV_PND_ACTION_SEQUENCE}.veto_pebble_function_result */
EIF_BOOLEAN F978_14415 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,arg1);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = arg1;
		RTAR(tr1,arg1);
		loc1 = (EIF_REFERENCE) tr1;
		Result = '\0';
		tb1 = F1552_6466(loc2, loc1);
		if (tb1) {
			tb1 = F1555_6507(loc2, loc1);
			Result = tb1;
		}
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return Result;
}

void EIF_Minit1351 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
