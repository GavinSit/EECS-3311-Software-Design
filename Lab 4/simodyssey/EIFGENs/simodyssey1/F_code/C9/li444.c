/*
 * Code for class LIST [REAL_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li444.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LIST}.is_equal */
EIF_BOOLEAN F885_3331 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN)(Current == arg1)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		Result = '\0';
		tb1 = '\0';
		tb2 = F741_2537(RTCW(arg1));
		if ((EIF_BOOLEAN)(F741_2537(Current) == tb2)) {
			tb2 = *(EIF_BOOLEAN *)(RTCW(arg1) + O2212[Dtype(arg1)-574]);
			tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O2212[dtype-574]) == tb2);
		}
		if (tb1) {
			ti4_1 = F954_4094(RTCW(arg1));
			Result = (EIF_BOOLEAN)(F954_4094(Current) == ti4_1);
		}
		tb1 = '\0';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !F741_2537(Current);
		}
		if (tb1) {
			tb1 = '\0';
			tr1 = F954_4084(Current);
			loc1 = tr1;
			if ((EIF_TRUE)) {
				tr1 = F954_4084(RTCW(arg1));
				loc2 = tr1;
				tb1 = (EIF_TRUE);
			}
			if (tb1) {
				F954_4104(Current);
				F954_4104(RTCW(arg1));
				for (;;) {
					tb1 = '\01';
					if (!F885_3332(Current)) {
						tb1 = (EIF_BOOLEAN) !Result;
					}
					if (tb1) break;
					if (*(EIF_BOOLEAN *)(Current + O2212[dtype-574])) {
						tr4_1 = F954_4078(Current);
						tr4_2 = F954_4078(RTCW(arg1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) eif_is_equal_real_32 (tr4_1, tr4_2);
					} else {
						tr4_1 = F954_4078(Current);
						tr4_2 = F954_4078(RTCW(arg1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) eif_is_equal_real_32 (tr4_1, tr4_2);
					}
					F954_4106(Current);
					F954_4106(RTCW(arg1));
				}
				F954_4109(Current, loc1);
				F954_4109(RTCW(arg1), loc2);
			} else {
			}
		} else {
			tb2 = '\0';
			tb3 = '\0';
			if (F741_2537(Current)) {
				tb4 = F741_2537(RTCW(arg1));
				tb3 = tb4;
			}
			if (tb3) {
				tb3 = *(EIF_BOOLEAN *)(RTCW(arg1) + O2212[Dtype(arg1)-574]);
				tb2 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O2212[dtype-574]) == tb3);
			}
			if (tb2) {
				RTLE;
				return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	}
	RTLE;
	return Result;
}

/* {LIST}.after */
EIF_BOOLEAN F885_3332 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	ti4_2 = F954_4094(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
	RTLE;
	return Result;
}

/* {LIST}.before */
EIF_BOOLEAN F885_3333 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ((EIF_INTEGER_32) 0L));
}

void EIF_Minit444 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
