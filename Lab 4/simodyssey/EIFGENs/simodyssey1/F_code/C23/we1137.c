/*
 * Code for class WEL_RETURN_VALUE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1137.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_RETURN_VALUE}.has_return_value */
EIF_BOOLEAN F214_11241 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O9024[dtype-213]);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc1);
		if ((EIF_BOOLEAN) (ti4_1 >= *(EIF_INTEGER_32 *)(Current + O9023[dtype-213]))) {
			/* INLINED CODE (SPECIAL.item) */
			tb2 = *((EIF_BOOLEAN *)RTCW(loc1) + ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O9023[dtype-213]) - ((EIF_INTEGER_32) 1L))));
			/* END INLINED CODE */
			tb1 = tb2;
			RTLE;
			return (EIF_BOOLEAN) tb1;
		} else {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	}/* NOTREACHED */
	
}

/* {WEL_RETURN_VALUE}.message_return_value */
EIF_POINTER F214_11242 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O9025[dtype-213]);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		/* INLINED CODE (SPECIAL.item) */
		tp2 = *((EIF_POINTER *)RTCW(loc1) + ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O9023[dtype-213]) - ((EIF_INTEGER_32) 1L))));
		/* END INLINED CODE */
		tp1 = tp2;
		RTLE;
		return (EIF_POINTER) tp1;
	}
	RTLE;
	return (EIF_POINTER) 0;
}

/* {WEL_RETURN_VALUE}.default_processing */
EIF_BOOLEAN F214_11243 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O9026[dtype-213]);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc1);
		if ((EIF_BOOLEAN) (ti4_1 >= *(EIF_INTEGER_32 *)(Current + O9023[dtype-213]))) {
			/* INLINED CODE (SPECIAL.item) */
			tb2 = *((EIF_BOOLEAN *)RTCW(loc1) + ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O9023[dtype-213]) - ((EIF_INTEGER_32) 1L))));
			/* END INLINED CODE */
			tb1 = tb2;
			RTLE;
			return (EIF_BOOLEAN) tb1;
		} else {
			RTLE;
			return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}/* NOTREACHED */
	
}

/* {WEL_RETURN_VALUE}.set_message_return_value */
void F214_11244 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O9024[dtype-213]);
	loc2 = *(EIF_REFERENCE *)(Current + O9025[dtype-213]);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {1205,1493,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc1 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 2L),sizeof(EIF_BOOLEAN), EIF_TRUE);
		}
		F1206_3083(RTCW(loc1), (EIF_BOOLEAN) 0, ((EIF_INTEGER_32) 2L));
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + O9024[dtype-213]) = (EIF_REFERENCE) loc1;
	}
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		tp1 = F1_33(Current);
		{
			static EIF_TYPE_INDEX typarr0[] = {1195,1550,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 2L),sizeof(EIF_POINTER), EIF_TRUE);
		}
		F1196_3083(RTCW(loc2), tp1, ((EIF_INTEGER_32) 2L));
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current + O9025[dtype-213]) = (EIF_REFERENCE) loc2;
	}
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc1);
	if ((EIF_BOOLEAN) (ti4_1 < *(EIF_INTEGER_32 *)(Current + O9023[dtype-213]))) {
		tr1 = F1206_3118(RTCW(loc1), (EIF_BOOLEAN) 0, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O9023[dtype-213]) + ((EIF_INTEGER_32) 2L)));
		loc1 = (EIF_REFERENCE) tr1;
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		tp2 = tp1;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O9023[dtype-213]);
		tr1 = F1196_3118(RTCW(loc2), tp2, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L)));
		loc2 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + O9024[dtype-213]) = (EIF_REFERENCE) loc1;
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current + O9025[dtype-213]) = (EIF_REFERENCE) loc2;
	}
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_POINTER *)RTCW(loc2) + ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O9023[dtype-213]) - ((EIF_INTEGER_32) 1L)))) = arg1;
	/* END INLINED CODE */
	;
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_BOOLEAN *)RTCW(loc1) + ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O9023[dtype-213]) - ((EIF_INTEGER_32) 1L)))) = (EIF_BOOLEAN) 1;
	/* END INLINED CODE */
	;
	RTLE;
}

/* {WEL_RETURN_VALUE}.set_default_processing */
void F214_11245 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + O9026[dtype-213]);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {1205,1493,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			loc1 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 2L),sizeof(EIF_BOOLEAN), EIF_TRUE);
		}
		F1206_3083(RTCW(loc1), (EIF_BOOLEAN) 0, ((EIF_INTEGER_32) 2L));
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + O9026[dtype-213]) = (EIF_REFERENCE) loc1;
	}
	ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc1);
	if ((EIF_BOOLEAN) (ti4_1 < *(EIF_INTEGER_32 *)(Current + O9023[dtype-213]))) {
		tr1 = F1206_3118(RTCW(loc1), (EIF_BOOLEAN) 0, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O9023[dtype-213]) + ((EIF_INTEGER_32) 2L)));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + O9026[dtype-213]) = (EIF_REFERENCE) loc1;
	}
	/* INLINED CODE (SPECIAL.put) */
	*((EIF_BOOLEAN *)RTCW(loc1) + ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O9023[dtype-213]) - ((EIF_INTEGER_32) 1L)))) = arg1;
	/* END INLINED CODE */
	;
	RTLE;
}

/* {WEL_RETURN_VALUE}.increment_level */
void F214_11246 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	(*(EIF_INTEGER_32 *)(Current + O9023[dtype-213]))++;
	tb1 = '\0';
	if (F214_11241(Current)) {
		tr1 = *(EIF_REFERENCE *)(Current + O9024[dtype-213]);
		loc1 = tr1;
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		/* INLINED CODE (SPECIAL.put) */
		*((EIF_BOOLEAN *)loc1 + ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O9023[dtype-213]) - ((EIF_INTEGER_32) 1L)))) = (EIF_BOOLEAN) 0;
		/* END INLINED CODE */
		;
	}
	if ((EIF_BOOLEAN) !F214_11243(Current)) {
		F214_11245(Current, (EIF_BOOLEAN) 1);
	}
	RTLE;
}

/* {WEL_RETURN_VALUE}.decrement_level */
void F214_11247 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	
	
	(*(EIF_INTEGER_32 *)(Current + O9023[dtype-213]))--;
}

void EIF_Minit1137 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
