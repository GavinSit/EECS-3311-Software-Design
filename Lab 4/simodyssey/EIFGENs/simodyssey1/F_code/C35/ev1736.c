/*
 * Code for class EV_INTERNALLY_PROCESSED_TEXTABLE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1736.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_INTERNALLY_PROCESSED_TEXTABLE_IMP}.text */
EIF_REFERENCE F1747_19708 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16479[Dtype(Current)-1809])(Current);
	Result = F1747_19711(Current, tr1);
	RTLE;
	return Result;
}

/* {EV_INTERNALLY_PROCESSED_TEXTABLE_IMP}.set_text */
void F1747_19709 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = F1747_19710(Current, arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16478[Dtype(Current)-1809])(Current, tr1);
	RTLE;
}

/* {EV_INTERNALLY_PROCESSED_TEXTABLE_IMP}.escaped_text */
EIF_REFERENCE F1747_19710 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,loc4);
	RTLIU(2);
	
	RTGC;
	ti4_1 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '&');
	loc3 = (EIF_NATURAL_32) ti4_1;
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4681[Dtype(RTCW(arg1))-1560])(arg1);
	loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_NATURAL_32, EIF_INTEGER_32)) R4648[Dtype(RTCW(arg1))-1560])(arg1, loc3, ((EIF_INTEGER_32) 1L));
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		loc4 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1564_6847(RTCW(loc4), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)));
		F1565_6937(RTCW(loc4), arg1);
		for (;;) {
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			ti4_1 = F1558_6515(RTCW(loc4), loc3, loc1);
			loc1 = (EIF_INTEGER_32) ti4_1;
			if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '&';
				F1565_6957(RTCW(loc4), tw1, loc1);
				loc2++;
				loc1 += ((EIF_INTEGER_32) 2L);
			} else {
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			}
		}
		RTLE;
		return (EIF_REFERENCE) loc4;
	} else {
		RTLE;
		return (EIF_REFERENCE) arg1;
	}/* NOTREACHED */
	
}

/* {EV_INTERNALLY_PROCESSED_TEXTABLE_IMP}.unescaped_text */
EIF_REFERENCE F1747_19711 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	RTLIU(1);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	for (;;) {
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '&';
		ti4_1 = F1564_6858(RTCW(arg1), tw1, loc1);
		loc1 = (EIF_INTEGER_32) ti4_1;
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
			F1565_6958(RTCW(arg1), loc1);
			loc2--;
			loc1++;
		} else {
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		}
	}
	RTLE;
	return (EIF_REFERENCE) arg1;
}

void EIF_Minit1736 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
