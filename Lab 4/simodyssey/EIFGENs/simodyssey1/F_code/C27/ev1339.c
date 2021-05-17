/*
 * Code for class EV_GDI_ALLOCATED_BRUSHES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1339.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_GDI_ALLOCATED_BRUSHES}.get */
EIF_REFERENCE F536_14238 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLR(4,Result);
	RTLR(5,tr1);
	RTLR(6,loc2);
	RTLIU(7);
	
	RTGC;
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_))++;
	loc1 = RTOUCR(487,F536_14239, (Current));
	F1517_17617(RTCW(loc1), arg1, arg2);
	if (F276_12013(Current, loc1)) {
		Result = F276_12015(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_));
	} else {
		tr1 = F1_14(loc1);
		loc1 = (EIF_REFERENCE) tr1;
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			Result = RTLNS(eif_new_type(1320, 0x01).id, 1320, _OBJSIZ_0_2_0_3_0_1_0_0_);
			F1321_15592(RTCW(Result), arg1);
		} else {
			loc2 = (EIF_REFERENCE) arg2;
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				Result = RTLNS(eif_new_type(1320, 0x01).id, 1320, _OBJSIZ_0_2_0_3_0_1_0_0_);
				F1321_15590(RTCW(Result), loc2);
			} else {
				RTCT0("color_not_void", EX_CHECK);
					RTCF0;
			}
		}
		F519_14209(RTCW(Result));
		F1516_17607(RTCW(loc1), Result);
		F1516_17606(RTCW(loc1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_));
		F276_12014(Current, loc1);
	}
	RTLE;
	return Result;
}

/* {EV_GDI_ALLOCATED_BRUSHES}.reusable_search_object */
static EIF_REFERENCE F536_14239_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(487)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1516, 0x01).id, 1516, _OBJSIZ_2_0_0_6_0_0_0_0_);
	F1517_17609(RTCW(tr1), NULL, NULL);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F536_14239 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(487,F536_14239_body,(Current));
}

void EIF_Minit1339 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
