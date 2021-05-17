/*
 * Code for class EV_SHARED_TRANSPORT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1212.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SHARED_TRANSPORT_IMP}.widget_imp_at_pointer_position */
EIF_REFERENCE F301_12329 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,loc2);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1905, 0x01).id, 1905, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1906_22334(RTCW(loc1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L));
	F1906_22341(RTCW(loc1));
	loc2 = F1906_22342(RTCW(loc1));
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		Result = loc2;
		Result = RTRV(eif_new_type(1969, 0x00), Result);
		if ((EIF_BOOLEAN)(Result == NULL)) {
			loc3 = loc2;
			loc3 = RTRV(eif_new_type(1950, 0x00), loc3);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				Result = F1951_23464(RTCW(loc3));
				RTLE;
				return (EIF_REFERENCE) Result;
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_SHARED_TRANSPORT_IMP}.internal_set_pointer_style */
void F301_12337 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,loc1);
	RTLR(4,loc4);
	RTLR(5,tr1);
	RTLR(6,loc3);
	RTLIU(7);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O10105[dtype-300]) = (EIF_REFERENCE) arg1;
	loc2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	loc2 = RTRV(eif_new_type(1705, 0x00), loc2);
	RTCT0("not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_1_);
	F519_14211(RTCW(loc1));
	tr1 = *(EIF_REFERENCE *)(Current + O10103[dtype-300]);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		F519_14210(loc4);
		*(EIF_REFERENCE *)(Current + O10103[dtype-300]) = (EIF_REFERENCE) NULL;
	}
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + O10103[dtype-300]) = (EIF_REFERENCE) loc1;
	loc3 = Current;
	loc3 = RTRV(eif_new_type(1969, 0x00), loc3);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		tb2 = F1296_15099(RTCW(loc3));
		tb1 = tb2;
	}
	if (tb1) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R16563[Dtype(RTCW(loc3))-1871])(loc3);
		if (tb1) {
			F1850_20952(RTCW(loc1));
		}
	} else {
		F1850_20952(RTCW(loc1));
	}
	RTLE;
}

void EIF_Minit1212 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
