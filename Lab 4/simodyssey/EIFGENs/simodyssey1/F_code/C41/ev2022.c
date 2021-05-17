/*
 * Code for class EV_GDI_ALLOCATED_OBJECTS [G#1, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev2022.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_GDI_ALLOCATED_OBJECTS}.default_create */
void F276_12006 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTGC;
	tr1 = RTLNSMART(eif_final_id(Y9770,Y9770_gen_type,Dftype(Current),275).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R2628[Dtype(RTCW(tr1))-918])(tr1, loc1, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 32L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {EV_GDI_ALLOCATED_OBJECTS}.has_object */
EIF_BOOLEAN F276_12013 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483646L);
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3816[Dtype(RTCW(arg1))-1420])(arg1);
	for (;;) {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) != ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_)))) break;
		tr1 = *(EIF_REFERENCE *)(Current);
		loc3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2252[Dtype(RTCW(tr1))-849])(tr1, (EIF_REFERENCE) &loc1);
		RTCT0("curr_item /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tb1 = '\0';
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3816[Dtype(RTCW(loc3))-1420])(loc3);
		if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
			tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R11[Dtype(RTCW(arg1))-0])(arg1, loc3);
			tb1 = tb2;
		}
		if (tb1) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) loc1;
		} else {
			loc4 = F1516_17604(RTCW(loc3));
			if ((EIF_BOOLEAN) (loc4 < loc7)) {
				loc7 = (EIF_INTEGER_32) loc4;
				loc6 = (EIF_INTEGER_32) loc1;
			}
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (loc4 > loc5))) {
				F276_12016(Current, loc1, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)));
				if ((EIF_BOOLEAN)(loc6 == loc1)) {
					loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
				}
				if ((EIF_BOOLEAN)(loc6 == (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)))) {
					loc6 = (EIF_INTEGER_32) loc1;
				}
			}
		}
		loc1++;
		loc5 = (EIF_INTEGER_32) loc4;
	}
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) !Result) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_4_) = (EIF_INTEGER_32) loc6;
	}
	RTLE;
	return Result;
}

/* {EV_GDI_ALLOCATED_OBJECTS}.add_to_allocated_objects */
void F276_12014 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) == ((EIF_INTEGER_32) 32L))) {
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_4_);
		tr1 = *(EIF_REFERENCE *)(Current);
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2252[Dtype(RTCW(tr1))-849])(tr1, (EIF_REFERENCE) &loc1);
		RTCT0("l_item /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		F1516_17608(RTCW(loc2));
	} else {
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_))++;
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	}
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2255[Dtype(RTCW(tr1))-918])(tr1, arg1, (EIF_REFERENCE) &loc1);
	RTLE;
}

/* {EV_GDI_ALLOCATED_OBJECTS}.get_previously_allocated_object */
EIF_REFERENCE F276_12015 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTGC;
	RTCT0("attached allocated_objects.item (real_object_index) as real_object", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2252[Dtype(RTCW(tr1))-849])(tr1, (EIF_REFERENCE) &arg1);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	F1516_17606(loc1, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_));
	RTCT0("attached {H} real_object.item as l_result", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(loc1);
	loc2 = tr1;
	loc2 = RTRV(eif_final_id(Y9782,Y9782_gen_type,dftype,275),loc2);
	if (EIF_TEST(loc2)) {
		RTCK0;
	} else {
		RTCF0;
	}
	Result = (EIF_REFERENCE) loc2;
	F519_14211(loc2);
	RTLE;
	return Result;
}

/* {EV_GDI_ALLOCATED_OBJECTS}.swap_allocated_objects */
void F276_12016 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2252[Dtype(RTCW(tr1))-849])(tr1, (EIF_REFERENCE) &arg1);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2252[Dtype(RTCW(tr1))-849])(tr1, (EIF_REFERENCE) &arg2);
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2255[Dtype(RTCW(tr1))-918])(tr1, loc1, (EIF_REFERENCE) &arg2);
	tr1 = *(EIF_REFERENCE *)(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2255[Dtype(RTCW(tr1))-918])(tr1, loc2, (EIF_REFERENCE) &arg1);
	RTLE;
}

void EIF_Minit2022 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
