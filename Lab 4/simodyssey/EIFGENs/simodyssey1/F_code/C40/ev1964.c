/*
 * Code for class EV_SCROLLABLE_AREA_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1964.h"
#include <windows.h>
#include "eif_helpers.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SCROLLABLE_AREA_IMP}.make */
void F1981_24410 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1979_24383(Current);
	tr1 = RTLNSMART(eif_new_type(1863, 0).id);
	F1864_21054(RTCW(tr1), Current, ((EIF_INTEGER_32) 50L), ((EIF_INTEGER_32) 50L), ((EIF_INTEGER_32) 10L), ((EIF_INTEGER_32) 30L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_51_) = (EIF_REFERENCE) tr1;
	F1912_22554(Current);
	F1912_22556(Current);
	F1912_22552(Current);
	F1912_22551(Current);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_64_19_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_64_20_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {EV_SCROLLABLE_AREA_IMP}.show_horizontal_scroll_bar */
void F1981_24415 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_64_19_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F1912_22549(Current);
	RTLE;
}

/* {EV_SCROLLABLE_AREA_IMP}.show_vertical_scroll_bar */
void F1981_24417 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_64_20_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	F1912_22548(Current);
	RTLE;
}

/* {EV_SCROLLABLE_AREA_IMP}.hide_vertical_scroll_bar */
void F1981_24418 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current+ _CHROFF_64_20_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	F1912_22551(Current);
	RTLE;
}

/* {EV_SCROLLABLE_AREA_IMP}.internal_show_vertical_scroll_bar */
void F1981_24419 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_64_20_)) {
		F1981_24417(Current);
	}
	RTLE;
}

/* {EV_SCROLLABLE_AREA_IMP}.internal_show_horizontal_scroll_bar */
void F1981_24420 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_64_19_)) {
		F1981_24415(Current);
	}
	RTLE;
}

/* {EV_SCROLLABLE_AREA_IMP}.default_style */
EIF_INTEGER_32 F1981_24426 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	ti4_1 = F1980_24407(Current);
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 2097152L));
	Result = eif_bit_or(ti4_1,((EIF_INTEGER_32) 1048576L));
	RTLE;
	return Result;
}

/* {EV_SCROLLABLE_AREA_IMP}.default_ex_style */
EIF_INTEGER_32 F1981_24427 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	RTGC;
	Result = eif_bit_or(((EIF_INTEGER_32) 65536L),((EIF_INTEGER_32) 0L));
	return Result;
}

/* {EV_SCROLLABLE_AREA_IMP}.ev_apply_new_size */
void F1981_24428 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1980_24404(Current, arg1, arg2, arg3, arg4, arg5);
	if ((EIF_BOOLEAN)(F1977_24333(Current) == NULL)) {
		F1912_22551(Current);
		F1912_22552(Current);
	}
	RTLE;
}

/* {EV_SCROLLABLE_AREA_IMP}.on_size_requested */
void F1981_24430 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc10);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc9);
	RTLIU(4);
	
	RTGC;
	tb1 = '\0';
	tr1 = F1977_24333(Current);
	loc10 = tr1;
	if (EIF_TEST(loc10)) {
		tb1 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_64_21_);
	}
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_64_21_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		loc9 = *(EIF_REFERENCE *)(Current + _REFACS_51_);
		RTCT0("l_scroller /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc9 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		loc6 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16400[Dtype(loc10)-1730])(loc10);
		loc5 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16401[Dtype(loc10)-1730])(loc10);
		loc3 = F1971_24164(Current);
		loc4 = F1971_24165(Current);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 - loc3);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - loc4);
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
			F1981_24420(Current);
			loc4 = F1971_24165(Current);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - loc4);
			if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
				F1981_24419(Current);
			} else {
				F1912_22551(Current);
			}
			loc3 = F1971_24164(Current);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 - loc3);
		} else {
			F1912_22552(Current);
			loc4 = F1971_24165(Current);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - loc4);
			if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
				F1981_24419(Current);
			} else {
				F1912_22551(Current);
			}
			loc3 = F1971_24164(Current);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 - loc3);
		}
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
			loc7 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16396[Dtype(loc10)-1730])(loc10);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) -loc7 + loc3) > loc6)) {
				loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc2;
			}
			ti4_1 = eif_min_int32 (loc7,((EIF_INTEGER_32) 0L));
			loc7 = (EIF_INTEGER_32) ti4_1;
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_64_19_)) {
				ti4_1 = eif_abs_int32 (loc7);
				F1913_22720(Current, ti4_1);
				F1913_22722(Current, ((EIF_INTEGER_32) 0L), loc6);
				F1864_21075(RTCW(loc9), loc3);
			}
			if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
				loc8 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16397[Dtype(loc10)-1730])(loc10);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) -loc8 + loc4) > loc5)) {
					loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc1;
				}
				ti4_1 = eif_min_int32 (loc8,((EIF_INTEGER_32) 0L));
				loc8 = (EIF_INTEGER_32) ti4_1;
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_64_20_)) {
					F1913_22723(Current, ((EIF_INTEGER_32) 0L), loc5);
					ti4_1 = eif_abs_int32 (loc8);
					F1913_22721(Current, ti4_1);
					F1864_21076(RTCW(loc9), loc4);
				}
			} else {
				loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc1 / ((EIF_INTEGER_32) 2L));
			}
		} else {
			loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc2 / ((EIF_INTEGER_32) 2L));
			if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
				loc8 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R16397[Dtype(loc10)-1730])(loc10);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) -loc8 + loc4) > loc5)) {
					loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc1;
				}
				ti4_1 = eif_min_int32 (loc8,((EIF_INTEGER_32) 0L));
				loc8 = (EIF_INTEGER_32) ti4_1;
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_64_20_)) {
					F1913_22723(Current, ((EIF_INTEGER_32) 0L), loc5);
					ti4_1 = eif_abs_int32 (loc8);
					F1913_22721(Current, ti4_1);
					F1864_21076(RTCW(loc9), loc4);
				}
			} else {
				loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc1 / ((EIF_INTEGER_32) 2L));
			}
		}
		if (arg1) {
			F1723_19483(loc10, loc7, loc8, loc6, loc5);
		} else {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_BOOLEAN)) R16318[Dtype(loc10)-1972])(loc10, loc7, loc8, loc6, loc5, (EIF_BOOLEAN) 1);
		}
		*(EIF_BOOLEAN *)(Current+ _CHROFF_64_21_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {EV_SCROLLABLE_AREA_IMP}.process_message */
EIF_POINTER F1981_24431 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 277L)) || (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 276L)))) {
		loc1 = (EIF_INTEGER_32) LOWORD((arg3));
		ti4_1 = F1970_24158(Current, loc1);
		loc1 = (EIF_INTEGER_32) ti4_1;
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 7L)) || (EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 8L)))) {
			loc2 = (EIF_INTEGER_32) HIWORD((arg3));
		}
	}
	switch (arg2) {
		case 277L:
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
			loc3 = tr1;
			if (EIF_TEST(loc3)) {
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLNTS(typres0.id, 3, 1);
				}
				((EIF_TYPED_VALUE *)tr1+1)->it_i4 = loc1;
				((EIF_TYPED_VALUE *)tr1+2)->it_i4 = loc2;
				F977_14409(loc3, tr1);
			}
			break;
		case 276L:
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,1475,1508,1508,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLNTS(typres0.id, 3, 1);
				}
				((EIF_TYPED_VALUE *)tr1+1)->it_i4 = loc1;
				((EIF_TYPED_VALUE *)tr1+2)->it_i4 = loc2;
				F977_14409(loc4, tr1);
			}
			break;
	}
	RTLE;
	return (EIF_POINTER) F1913_22766(Current, arg1, arg2, arg3, arg4);
}

void EIF_Minit1964 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
