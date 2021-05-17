/*
 * Code for class EV_BOX_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1745.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_BOX_I}.insertion_position */
EIF_INTEGER_32 F1756_19870 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	loc1 = F1716_19390(Current);
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16628[dtype-1974])(Current);
	tb1 = '\0';
	if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L))) {
		tb1 = (EIF_BOOLEAN) (loc2 <= (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16630[dtype-1974])(Current));
	}
	if (tb1) {
		tb1 = '\01';
		tb2 = '\01';
		if (!(EIF_BOOLEAN) (loc2 >= (EIF_INTEGER_32) ((FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16630[dtype-1974])(Current) - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_)))) {
			tb2 = (EIF_BOOLEAN)(F1717_19424(Current) == ((EIF_INTEGER_32) 0L));
		}
		if (!tb2) {
			tb2 = '\0';
			if ((EIF_BOOLEAN)(F1717_19424(Current) == ((EIF_INTEGER_32) 1L))) {
				tr1 = F1717_19423(Current, ((EIF_INTEGER_32) 1L));
				tb2 = (EIF_BOOLEAN)(tr1 == RTOUCR(273,F321_12802, (Current)));
			}
			tb1 = tb2;
		}
		if (tb1) {
			Result = F1717_19424(Current);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
		} else {
			if ((EIF_BOOLEAN) (loc2 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_))) {
				RTLE;
				return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			} else {
				F1716_19400(Current);
				loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_);
				for (;;) {
					if ((EIF_BOOLEAN)(Result != ((EIF_INTEGER_32) -1L))) break;
					loc3 += (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16629[dtype-1974])(Current);
					if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]) == ((EIF_INTEGER_32) 1L))) {
						loc3 += *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_10_);
					} else {
						loc3 += *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_11_);
					}
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= loc4) && (EIF_BOOLEAN) (loc2 <= loc3))) {
						loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - loc4) / ((EIF_INTEGER_32) 2L));
						loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_64_26_6_11_);
						loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + loc5) + (EIF_INTEGER_32) (loc6 / ((EIF_INTEGER_32) 2L)));
						if ((EIF_BOOLEAN) (loc2 > loc6)) {
							Result = *(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]);
							Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
						} else {
							Result = *(EIF_INTEGER_32 *)(Current + O16224[dtype-1715]);
						}
					}
					loc4 = (EIF_INTEGER_32) loc3;
					F1716_19402(Current);
				}
				F1716_19404(Current, loc1);
			}
		}
	}
	RTLE;
	return Result;
}

void EIF_Minit1745 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
