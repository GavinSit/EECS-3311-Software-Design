/*
 * Code for class EV_SINGLE_CHILD_CONTAINER_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1960.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SINGLE_CHILD_CONTAINER_IMP}.count */
EIF_INTEGER_32 F1977_24330 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O19844[Dtype(Current)-1976]) != NULL)) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTLE;
	return (EIF_INTEGER_32) 0;
}

/* {EV_SINGLE_CHILD_CONTAINER_IMP}.item */
EIF_REFERENCE F1977_24332 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O19844[Dtype(Current)-1976]);
}


/* {EV_SINGLE_CHILD_CONTAINER_IMP}.item_imp */
EIF_REFERENCE F1977_24333 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19844[Dtype(Current)-1976]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		Result = *(EIF_REFERENCE *)(loc1 + _REFACS_3_);
		RTLE;
		return RTRV(eif_new_type(1969, 0x00), Result);
	}
	RTLE;
	return Result;
}

/* {EV_SINGLE_CHILD_CONTAINER_IMP}.enable_sensitive */
void F1977_24334 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tb1 = '\0';
	tr1 = F1977_24333(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = *(EIF_BOOLEAN *)(loc1 + O16430[Dtype(loc1)-1731]);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R16433[Dtype(loc1)-1964])(loc1);
	}
	F1970_24060(Current);
	RTLE;
}

/* {EV_SINGLE_CHILD_CONTAINER_IMP}.disable_sensitive */
void F1977_24335 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = F1977_24333(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R16434[Dtype(loc1)-1964])(loc1);
	}
	F1970_24059(Current);
	RTLE;
}

/* {EV_SINGLE_CHILD_CONTAINER_IMP}.remove */
void F1977_24336 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19844[dtype-1976]);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tr1 = *(EIF_REFERENCE *)(Current + O19801[dtype-1970]);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1631,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = loc2;
		RTAR(tr2,loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		loc1 = F1977_24333(Current);
		loc1 = RTRV(eif_new_type(1969, 0x00), loc1);
		RTCT0("v_imp_not_void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		*(EIF_REFERENCE *)(Current + O19844[dtype-1976]) = (EIF_REFERENCE) NULL;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19681[Dtype(RTCW(loc1))-1972])(loc1, NULL);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R16579[Dtype(RTCW(loc1))-1871])(loc1);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O15892[dtype-1695]) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCV(F1696_18976(Current)) + _REFACS_3_);
			F1725_19528(Current, ((EIF_INTEGER_32) 3L), tr1, (EIF_BOOLEAN) 0);
		}
	}
	RTLE;
}

/* {EV_SINGLE_CHILD_CONTAINER_IMP}.insert */
void F1977_24337 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
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
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19681[Dtype(RTCW(loc1))-1972])(loc1, Current);
		RTAR(Current, arg1);
		*(EIF_REFERENCE *)(Current + O19844[Dtype(Current)-1976]) = (EIF_REFERENCE) arg1;
		F1725_19528(Current, ((EIF_INTEGER_32) 3L), Current, (EIF_BOOLEAN) 0);
		tr1 = F222_11465(Current);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,1631,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = arg1;
		RTAR(tr2,arg1);
		F977_14409(RTCW(tr1), tr2);
	}
	RTLE;
}

/* {EV_SINGLE_CHILD_CONTAINER_IMP}.replace */
void F1977_24339 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	F1977_24336(Current);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R19842[Dtype(Current)-1977])(Current, arg1);
	}
	RTLE;
}

/* {EV_SINGLE_CHILD_CONTAINER_IMP}.index_of_child */
EIF_INTEGER_32 F1977_24342 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {EV_SINGLE_CHILD_CONTAINER_IMP}.next_tabstop_widget */
EIF_REFERENCE F1977_24343 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_BOOLEAN arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	loc3 = F1970_24150(Current, arg1, arg2, arg3);
	tb1 = '\0';
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 == NULL) && (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O19844[Dtype(Current)-1976]) != NULL))) {
		tb1 = F1912_22467(Current);
	}
	if (tb1) {
		loc1 = F1977_24333(Current);
		RTCT0("w /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		if (arg3) {
			loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN)) R19758[Dtype(RTCW(loc1))-1972])(loc1, arg1, ((EIF_INTEGER_32) 1L), arg3);
		} else {
			loc2 = *(EIF_REFERENCE *)(RTCW(loc1) + O15892[Dtype(loc1)-1695]);
			loc2 = RTRV(eif_new_type(1632, 0x00), loc2);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R15462[Dtype(RTCW(loc2))-1634])(loc2);
				loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN)) R19758[Dtype(RTCW(loc1))-1972])(loc1, arg1, ti4_1, arg3);
			} else {
				loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN)) R19758[Dtype(RTCW(loc1))-1972])(loc1, arg1, ((EIF_INTEGER_32) 1L), arg3);
			}
		}
	}
	if ((EIF_BOOLEAN)(loc3 == NULL)) {
		loc3 = F1970_24151(Current, arg1, arg2, arg3);
	}
	RTCT0("l_result /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) loc3;
}

/* {EV_SINGLE_CHILD_CONTAINER_IMP}.on_size */
void F1977_24345 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = F1977_24333(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R19770[dtype-1972])(Current);
		ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R19771[dtype-1972])(Current);
		ti4_3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16585[dtype-1972])(Current);
		ti4_4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16586[dtype-1972])(Current);
		F1723_19483(loc1, ti4_1, ti4_2, ti4_3, ti4_4);
	}
	F1970_24130(Current, arg1, arg2, arg3);
	RTLE;
}

/* {EV_SINGLE_CHILD_CONTAINER_IMP}.ev_apply_new_size */
void F1977_24346 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	F1723_19497(Current, arg1, arg2, arg3, arg4, arg5);
	tr1 = F1977_24333(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R19770[dtype-1972])(Current);
		ti4_2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R19771[dtype-1972])(Current);
		ti4_3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16585[dtype-1972])(Current);
		ti4_4 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16586[dtype-1972])(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_BOOLEAN)) R16318[Dtype(loc1)-1972])(loc1, ti4_1, ti4_2, ti4_3, ti4_4, (EIF_BOOLEAN) 1);
	}
	RTLE;
}

void EIF_Minit1960 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
