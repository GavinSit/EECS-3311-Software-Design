/*
 * Code for class EV_GAUGE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1982.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_GAUGE_IMP}.make */
void F1999_25005 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(850, 1).id);
	F850_3137(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 100L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_50_) = (EIF_REFERENCE) tr1;
	F2001_25027(Current);
	F1970_24029(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
	tr1 = F851_3182(RTCW(tr1));
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = Current;
	RTAR(tr2,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A1982_793, (EIF_POINTER) _A1982_793, (EIF_POINTER)(F1999_25014),tr2, 1, 0);
	}
	F969_4172(RTCW(tr1), tr3);
	RTLE;
}

/* {EV_GAUGE_IMP}.initialize_gauge_control */
void F1999_25006 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F2001_25053(Current, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 100L));
	F2001_25051(Current, ((EIF_INTEGER_32) 1L));
	F2001_25050(Current, ((EIF_INTEGER_32) 10L));
	F2001_25052(Current, ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {EV_GAUGE_IMP}.set_range */
void F1999_25014 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_1_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_50_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_0_);
	F2001_25053(Current, ti4_1, ti4_2);
	RTLE;
}

/* {EV_GAUGE_IMP}.on_scroll */
void F1999_25015 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	RTGC;
}

/* {EV_GAUGE_IMP}.on_key_down */
void F1999_25016 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1970_24103(Current, arg1);
	F1970_24106(Current, arg1, arg2);
	RTLE;
}

void EIF_Minit1982 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
