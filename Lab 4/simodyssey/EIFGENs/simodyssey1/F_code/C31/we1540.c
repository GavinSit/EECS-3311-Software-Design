/*
 * Code for class WEL_DIB
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1540.h"
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_DIB}.make_with_info_and_data */
void F1402_17062 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	ti4_1 = F1401_17046(RTCW(arg1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 + ti4_1);
	F1337_15830(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = F1401_17046(RTCW(arg1));
	memcpy((void *)tp1, (const void *) tp2, (size_t) ti4_1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
	ti4_1 = F1401_17046(RTCW(arg1));
	tp1 = RTPOF(tp1,ti4_1);
	memcpy((void *)tp1, (const void *) arg2, (size_t) arg3);
	tr1 = RTLNSMART(eif_new_type(1402, 1).id);
	F1403_17080(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = RTOUCB(EIF_INTEGER_32,357,F1403_17102, (RTCW(tr2)));
	F1337_15833(RTCW(tr1), tp1, ti4_1);
	tr1 = F1402_17072(Current);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {WEL_DIB}.color_count */
EIF_INTEGER_32 F1402_17063 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1403_17091(RTCW(tr1));
	RTLE;
	return Result;
}

/* {WEL_DIB}.item_bits */
EIF_POINTER F1402_17066 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = RTOUCB(EIF_INTEGER_32,357,F1403_17102, (RTCW(tr1)));
	ti4_2 = F1402_17063(Current);
	ti4_3 = RTOUCB(EIF_INTEGER_32,360,F1402_17078, (Current));
	Result = RTPOF(tp1,(EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (ti4_2 * ti4_3)));
	RTLE;
	return Result;
}

/* {WEL_DIB}.structure_size */
EIF_INTEGER_32 F1402_17069 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_0_);
}


/* {WEL_DIB}.destroy_item */
void F1402_17070 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_0_0_);
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current);
		F519_14210(RTCW(tr1));
	}
	F1337_15837(Current);
	RTLE;
}

/* {WEL_DIB}.i_th_quad */
EIF_REFERENCE F1402_17071 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	Result = RTLNS(eif_new_type(1399, 0x01).id, 1399, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1400_17019(RTCW(Result));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = RTOUCB(EIF_INTEGER_32,357,F1403_17102, (RTCW(tr1)));
	ti4_2 = RTOUCB(EIF_INTEGER_32,360,F1402_17078, (Current));
	tp1 = RTPOF(tp1,(EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (arg1 * ti4_2)));
	ti4_1 = RTOUCB(EIF_INTEGER_32,360,F1402_17078, (Current));
	F1337_15833(RTCW(Result), tp1, ti4_1);
	RTLE;
	return Result;
}

/* {WEL_DIB}.new_palette */
EIF_REFERENCE F1402_17072 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	loc1 = F1402_17063(Current);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTLE;
		return (EIF_REFERENCE) F1402_17073(Current);
	} else {
		tb1 = '\01';
		if (!F1402_17075(Current)) {
			tb1 = F1402_17076(Current);
		}
		if (tb1) {
			RTLE;
			return (EIF_REFERENCE) F1402_17074(Current);
		} else {
			Result = RTLNS(eif_new_type(1317, 0x01).id, 1317, _OBJSIZ_0_2_0_3_0_1_0_0_);
			tr1 = RTLNS(eif_new_type(1367, 0x01).id, 1367, _OBJSIZ_0_1_0_1_0_1_0_0_);
			F1368_16438(RTCW(tr1), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L));
			F1318_15549(RTCW(Result), tr1);
		}
	}
	RTLE;
	return Result;
}

/* {WEL_DIB}.new_palette_all_but_24_bits */
EIF_REFERENCE F1402_17073 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,loc4);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTGC;
	loc5 = F1402_17063(Current);
	loc3 = RTLNS(eif_new_type(1367, 0x01).id, 1367, _OBJSIZ_0_1_0_1_0_1_0_0_);
	F1368_16438(RTCW(loc3), ((EIF_INTEGER_32) 768L), loc5);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == loc5)) break;
		loc4 = F1402_17071(Current, loc1);
		loc2 = RTLNS(eif_new_type(1366, 0x01).id, 1366, _OBJSIZ_0_1_0_0_0_1_0_0_);
		ti4_1 = F1400_17020(RTCW(loc4));
		ti4_2 = F1400_17021(RTCW(loc4));
		ti4_3 = F1400_17022(RTCW(loc4));
		F1367_16419(RTCW(loc2), ti4_1, ti4_2, ti4_3, ((EIF_INTEGER_32) 0L));
		F1368_16444(RTCW(loc3), loc1, loc2);
		loc1++;
	}
	tr1 = RTLNS(eif_new_type(1317, 0x01).id, 1317, _OBJSIZ_0_2_0_3_0_1_0_0_);
	F1318_15549(RTCW(tr1), loc3);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {WEL_DIB}.new_palette_24_bits */
EIF_REFERENCE F1402_17074 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc6);
	RTLR(1,loc5);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc6 = RTLNS(eif_new_type(1367, 0x01).id, 1367, _OBJSIZ_0_1_0_1_0_1_0_0_);
	F1368_16438(RTCW(loc6), ((EIF_INTEGER_32) 768L), ((EIF_INTEGER_32) 256L));
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 256L))) break;
		loc5 = RTLNS(eif_new_type(1366, 0x01).id, 1366, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1367_16419(RTCW(loc5), loc2, loc3, loc4, ((EIF_INTEGER_32) 0L));
		F1368_16444(RTCW(loc6), loc1, loc5);
		loc2 += ((EIF_INTEGER_32) 32L);
		if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 256L))) {
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			loc3 += ((EIF_INTEGER_32) 32L);
			if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 256L))) {
				loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				loc4 += ((EIF_INTEGER_32) 64L);
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 256L))) {
					loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
			}
		}
		loc1++;
	}
	tr1 = RTLNS(eif_new_type(1317, 0x01).id, 1317, _OBJSIZ_0_2_0_3_0_1_0_0_);
	F1318_15549(RTCW(tr1), loc6);
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {WEL_DIB}.has_24_bits */
EIF_BOOLEAN F1402_17075 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = F1403_17084(RTCW(tr1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 24L));
	RTLE;
	return Result;
}

/* {WEL_DIB}.has_32_bits */
EIF_BOOLEAN F1402_17076 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = F1403_17084(RTCW(tr1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 32L));
	RTLE;
	return Result;
}

/* {WEL_DIB}.rgb_quad_size */
static EIF_INTEGER_32 F1402_17078_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 360)

	RTLI(1);
	RTLR(0,loc1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	loc1 = RTLNS(eif_new_type(1399, 0x01).id, 1399, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1400_17019(RTCW(loc1));
	Result = RTOUCB(EIF_INTEGER_32,361,F1400_17028, (RTCW(loc1)));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1402_17078 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,360,F1402_17078_body,(Current));
}

void EIF_Minit1540 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
