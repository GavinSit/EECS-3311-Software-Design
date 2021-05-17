/*
 * Code for class EV_WIDGET_LIST_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1955.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WIDGET_LIST_IMP}.insert_i_th */
void F1972_24211 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16578[Dtype(RTCW(tr1))-1871])(tr1);
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	loc1 = RTRV(eif_new_type(1969, 0x00), loc1);
	RTCT0("v_imp_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16258[dtype-1730])(Current);
	F951_4108(RTCW(tr1), arg2);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16258[dtype-1730])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2707[Dtype(RTCW(tr1))-950])(tr1, loc1);
	loc2 = Current;
	loc2 = RTRV(eif_new_type(1911, 0x00), loc2);
	RTCT0("wel_win_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19743[Dtype(RTCW(loc1))-1972])(loc1, loc2);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16342[dtype-1972])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19735[Dtype(RTCW(loc1))-1972])(loc1, tr1);
	tr1 = F222_11465(Current);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y16584,Y16584_gen_type,Dftype(Current),1752);
			typarr0[5] = l_type.annotations | 0xFF00;
			typarr0[6] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = arg1;
	RTAR(tr2,arg1);
	F977_14409(RTCW(tr1), tr2);
	F1725_19528(Current, ((EIF_INTEGER_32) 3L), Current, (EIF_BOOLEAN) 0);
	RTLE;
}

/* {EV_WIDGET_LIST_IMP}.remove_i_th */
void F1972_24212 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTGC;
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R16227[dtype-1730])(Current, arg1);
	RTCT0("v /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
	loc2 = RTRV(eif_new_type(1969, 0x00), loc2);
	RTCT0("v_imp_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	tr1 = *(EIF_REFERENCE *)(Current + O19801[dtype-1970]);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1631,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	tr3 = F1696_18976(RTCW(loc2));
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16258[dtype-1730])(Current);
	F951_4108(RTCW(tr1), arg1);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16258[dtype-1730])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2263[Dtype(RTCW(tr1))-818])(tr1);
	F1725_19528(Current, ((EIF_INTEGER_32) 3L), Current, (EIF_BOOLEAN) 0);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19681[Dtype(RTCW(loc2))-1972])(loc2, NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R16579[Dtype(RTCW(loc2))-1871])(loc2);
	RTLE;
}

/* {EV_WIDGET_LIST_IMP}.index_of_child */
EIF_INTEGER_32 F1972_24214 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O15892[Dtype(arg1)-1695]);
	Result = F1716_19394(Current, tr1, ((EIF_INTEGER_32) 1L));
	RTLE;
	return Result;
}

/* {EV_WIDGET_LIST_IMP}.next_tabstop_widget */
EIF_REFERENCE F1972_24215 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,loc5);
	RTLR(3,arg1);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLIU(7);
	
	RTGC;
	loc4 = F1716_19390(Current);
	loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN)) R19759[Dtype(Current)-1972])(Current, arg1, arg2, arg3);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc5 == NULL)) {
		tb1 = F1912_22467(Current);
	}
	if (tb1) {
		F1716_19403(Current, arg2);
		for (;;) {
			tb1 = '\01';
			if (!F1716_19393(Current)) {
				tb1 = (EIF_BOOLEAN)(loc5 != NULL);
			}
			if (tb1) break;
			loc1 = F1716_19388(Current);
			RTCT0("w /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			loc2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
			loc2 = RTRV(eif_new_type(1969, 0x00), loc2);
			RTCT0("w_imp /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			if (arg3) {
				loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN)) R19758[Dtype(RTCW(loc2))-1972])(loc2, arg1, ((EIF_INTEGER_32) 1L), arg3);
			} else {
				loc3 = *(EIF_REFERENCE *)(RTCW(loc2) + O15892[Dtype(loc2)-1695]);
				loc3 = RTRV(eif_new_type(1632, 0x00), loc3);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15462[Dtype(RTCW(loc3))-1634])(loc3);
					loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN)) R19758[Dtype(RTCW(loc2))-1972])(loc2, arg1, ti4_1, arg3);
				} else {
					loc5 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN)) R19758[Dtype(RTCW(loc2))-1972])(loc2, arg1, ((EIF_INTEGER_32) 1L), arg3);
				}
			}
			if ((EIF_BOOLEAN)(loc5 == NULL)) {
				if (arg3) {
					F1716_19402(Current);
				} else {
					F1716_19401(Current);
				}
			}
		}
	}
	if ((EIF_BOOLEAN)(loc5 == NULL)) {
		loc5 = F1970_24151(Current, arg1, arg2, arg3);
	}
	F1716_19404(Current, loc4);
	RTCT0("l_result /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc5 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) loc5;
}

void EIF_Minit1955 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
