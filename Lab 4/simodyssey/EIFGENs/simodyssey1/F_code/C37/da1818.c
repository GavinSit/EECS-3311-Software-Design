/*
 * Code for class DATE_TIME_CODE_STRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da1818.h"
#include <math.h>
#include "eif_helpers.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE_TIME_CODE_STRING}.make */
void F1835_20690 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,arg1);
	RTLR(4,loc5);
	RTLR(5,loc6);
	RTLR(6,tr2);
	RTLR(7,loc7);
	RTLIU(8);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,999,0xFF01,1169,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F1000_3924(RTCW(tr1), ((EIF_INTEGER_32) 20L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc4 = RTLNS(eif_new_type(330, 0x01).id, 330, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = F331_12902(RTCW(loc4));
	tr1 = F1_14(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = F331_12903(RTCW(loc4));
	tr1 = F1_14(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (loc2 >= ti4_1)) break;
		loc3 = F1834_20687(Current, arg1, loc2);
		loc5 = F1834_20688(Current, arg1, loc2, loc3);
		ti4_2 = eif_abs_int32 (loc3);
		loc3 = (EIF_INTEGER_32) ti4_2;
		loc6 = eif_boxed_item(loc5,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4837[Dtype(RTCW(loc6))-1560])(loc6);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L))) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTLNS(eif_new_type(1169, 0x01).id, 1169, _OBJSIZ_2_2_0_5_0_0_0_0_);
			F1170_14646(RTCW(tr2), loc6);
			F1000_3970(RTCW(tr1), tr2, loc1);
			loc1++;
		}
		loc7 = eif_boxed_item(loc5,2);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L))) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTLNS(eif_new_type(1169, 0x01).id, 1169, _OBJSIZ_2_2_0_5_0_0_0_0_);
			F1170_14646(RTCW(tr2), loc7);
			F1000_3970(RTCW(tr1), tr2, loc1);
			loc1++;
			*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
	}
	tr1 = RTLNS(eif_new_type(86, 0x01).id, 86, _OBJSIZ_1_1_0_1_0_0_0_0_);
	F87_9957(RTCW(tr1));
	ti4_2 = F87_9961(RTCW(tr1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_2_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 100L)) * ((EIF_INTEGER_32) -100L));
	RTLE;
}

/* {DATE_TIME_CODE_STRING}.create_string */
EIF_REFERENCE F1835_20701 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(8);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,loc2);
	RTLR(4,loc7);
	RTLR(5,Current);
	RTLR(6,tr1);
	RTLR(7,loc6);
	RTLIU(8);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1559_6605(RTCW(Result), ((EIF_INTEGER_32) 1L));
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	loc2 = *(EIF_REFERENCE *)(RTCW(arg1));
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc7 = F1000_3929(RTCW(tr1), loc4);
	for (;;) {
		if ((EIF_BOOLEAN)(loc7 == NULL)) break;
		loc5 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_2_2_0_4_);
		switch (loc5) {
			case 1L:
				ti4_1 = F950_14379(RTCW(loc1));
				tr1 = c_outi(ti4_1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				break;
			case 2L:
				loc3 = F950_14379(RTCW(loc1));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					tr1 = RTMS_EX_H("0",1,48);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				}
				tr1 = c_outi(loc3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				break;
			case 3L:
				loc3 = F1879_21574(RTCW(loc1));
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr1 = F919_3191(RTCW(tr1), loc3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				break;
			case 4L:
				ti4_1 = F950_14381(RTCW(loc1));
				loc6 = c_outi(ti4_1);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, loc6);
				} else {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
						tr1 = RTMS_EX_H("000",3,3158064);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, loc6);
					} else {
						ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
						if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
							tr1 = RTMS_EX_H("00",2,12336);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, loc6);
						} else {
							ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
							if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
								tr1 = RTMS_EX_H("0",1,48);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, loc6);
							}
						}
					}
				}
				break;
			case 5L:
				ti4_1 = F950_14381(RTCW(loc1));
				loc6 = c_outi(ti4_1);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 2L))) {
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4793[Dtype(RTCW(loc6))-1560])(loc6, ((EIF_INTEGER_32) 2L));
				} else {
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R4825[Dtype(RTCW(Result))-1560])(Result, (EIF_CHARACTER_8) '0');
					}
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, loc6);
				break;
			case 6L:
				ti4_1 = F950_14380(RTCW(loc1));
				tr1 = c_outi(ti4_1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				break;
			case 7L:
				loc3 = F950_14380(RTCW(loc1));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					tr1 = RTMS_EX_H("0",1,48);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				}
				tr1 = c_outi(loc3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				break;
			case 8L:
				loc3 = F950_14380(RTCW(loc1));
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
				tr1 = F919_3191(RTCW(tr1), loc3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				break;
			case 9L:
				ti4_1 = F330_12876(RTCW(loc2));
				tr1 = c_outi(ti4_1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				break;
			case 10L:
				loc3 = F330_12876(RTCW(loc2));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					tr1 = RTMS_EX_H("0",1,48);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				}
				tr1 = c_outi(loc3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				break;
			case 11L:
			case 12L:
				loc3 = F330_12876(RTCW(loc2));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 12L))) {
					if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
					}
				} else {
					if ((EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 12L))) {
						loc3 -= ((EIF_INTEGER_32) 12L);
					}
				}
				tb1 = '\0';
				ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 12U);
				if ((EIF_BOOLEAN)(loc5 == ti4_1)) {
					tb1 = (EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L));
				}
				if (tb1) {
					tr1 = RTMS_EX_H("0",1,48);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				}
				tr1 = c_outi(loc3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				break;
			case 13L:
				ti4_1 = F330_12877(RTCW(loc2));
				tr1 = c_outi(ti4_1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				break;
			case 14L:
				loc3 = F330_12877(RTCW(loc2));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					tr1 = RTMS_EX_H("0",1,48);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				}
				tr1 = c_outi(loc3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				break;
			case 15L:
				ti4_1 = F330_12878(RTCW(loc2));
				tr1 = c_outi(ti4_1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				break;
			case 16L:
				loc3 = F330_12878(RTCW(loc2));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 10L))) {
					tr1 = RTMS_EX_H("0",1,48);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				}
				tr1 = c_outi(loc3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				break;
			case 17L:
				tr8_1 = *(EIF_REAL_64 *)(RTCW(loc2)+ _R64OFF_0_0_0_1_0_0_0_0_);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_2_2_0_0_);
				tr8_2 = (EIF_REAL_64) (ti4_1);
				tr1 = RTLNS(eif_new_type(1496, 0x00).id, 1496, _OBJSIZ_0_0_0_0_0_0_0_1_);
				*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) (tr8_1 * (EIF_REAL_64) pow ((EIF_REAL_64) (((EIF_INTEGER_32) 10L)), (EIF_REAL_64) (tr8_2)));
				loc3 = F1495_5835(RTCW(tr1));
				loc6 = c_outi(loc3);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
				ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_2_2_0_0_);
				if ((EIF_BOOLEAN) (ti4_1 < ti4_2)) {
					tr1 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_2_2_0_0_);
					ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
					F1559_6606(RTCW(tr1), (EIF_CHARACTER_8) '0', (EIF_INTEGER_32) (ti4_1 - ti4_2));
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, loc6);
				break;
			case 24L:
				loc3 = F330_12876(RTCW(loc2));
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 12L))) {
					tr1 = RTMS_EX_H("AM",2,16717);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				} else {
					tr1 = RTMS_EX_H("PM",2,20557);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				}
				break;
			default:
				tr1 = *(EIF_REFERENCE *)(RTCW(loc7));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
				break;
		}
		loc4++;
		tr1 = *(EIF_REFERENCE *)(Current);
		loc7 = F1000_3929(RTCW(tr1), loc4);
	}
	RTLE;
	return Result;
}

/* {DATE_TIME_CODE_STRING}.create_date_string */
EIF_REFERENCE F1835_20702 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1881, 0x01).id, 1881, _OBJSIZ_2_0_0_2_0_0_0_1_);
	F1882_21632(RTCW(tr1), arg1);
	Result = F1835_20701(Current, tr1);
	RTLE;
	return Result;
}

/* {DATE_TIME_CODE_STRING}.create_time_string */
EIF_REFERENCE F1835_20703 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1881, 0x01).id, 1881, _OBJSIZ_2_0_0_2_0_0_0_1_);
	ti4_1 = F330_12876(RTCW(arg1));
	ti4_2 = F330_12877(RTCW(arg1));
	tr8_1 = F330_12881(RTCW(arg1));
	F1882_21630(RTCW(loc1), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L), ti4_1, ti4_2, tr8_1);
	RTLE;
	return (EIF_REFERENCE) F1835_20701(Current, loc1);
}

void EIF_Minit1818 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
