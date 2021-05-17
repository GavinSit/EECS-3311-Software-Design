/*
 * Code for class EV_APPLICATION_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1707.h"
#include "eif_memory.h"
#include "eif_built_in.h"
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

/* {EV_APPLICATION_I}.make */
void F1714_19277 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF05,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 25L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	if ((EIF_BOOLEAN) eif_builtin_PLATFORM_is_thread_capable) {
		tr1 = RTLNSMART(eif_new_type(1284, 0).id);
		F1285_4708(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_32_) = (EIF_REFERENCE) tr1;
		tr1 = RTLNSMART(eif_new_type(1284, 0).id);
		F1285_4708(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_33_) = (EIF_REFERENCE) tr1;
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1001,1508,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F1002_3924(RTCW(tr1), ((EIF_INTEGER_32) 8L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_26_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,956,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F957_4073(RTCW(tr1), ((EIF_INTEGER_32) 8L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_25_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNS(eif_new_type(318, 0x01).id, 318, _OBJSIZ_0_0_0_0_0_0_0_0_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_31_) = (EIF_REFERENCE) tr1;
	loc1 = RTLNS(eif_new_type(1813, 0x01).id, 1813, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1814_20379(RTCW(loc1), ((EIF_INTEGER_32) 27L));
	tr1 = RTLNSMART(eif_new_type(1604, 1).id);
	F1605_17936(RTCW(tr1), loc1, (EIF_BOOLEAN) 0, (EIF_BOOLEAN) 0, (EIF_BOOLEAN) 0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_29_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1604, 1).id);
	F1605_17936(RTCW(tr1), loc1, (EIF_BOOLEAN) 0, (EIF_BOOLEAN) 0, (EIF_BOOLEAN) 1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_30_) = (EIF_REFERENCE) tr1;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRF(typres0.id, (EIF_POINTER) __A1707_298, (EIF_POINTER) _A1707_298, (EIF_POINTER)(F1714_19372),tr1, 1, 0);
	}
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + _REFACS_38_) = (EIF_REFERENCE) tr2;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRF(typres0.id, (EIF_POINTER) __A1707_243, (EIF_POINTER) _A1707_243, (EIF_POINTER)(F1714_19317),tr1, 1, 0);
	}
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + _REFACS_39_) = (EIF_REFERENCE) tr2;
	F1714_19308(Current, *(EIF_REFERENCE *)(Current + _REFACS_29_));
	F1714_19309(Current, *(EIF_REFERENCE *)(Current + _REFACS_30_));
	tr1 = RTOUCR(203,F1714_19366, (Current));
	F492_1934(RTCW(tr1), (EIF_BOOLEAN) 1);
	tr1 = F251_11687(Current);
	F977_14409(RTCW(tr1), NULL);
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_48_14_0_0_) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	F1714_19306(Current, (EIF_BOOLEAN) 1);
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_APPLICATION_I}.process_event_queue */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1714_19283 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc2 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_INTEGER_32  EIF_VOLATILE ti4_2;
	EIF_INTEGER_32  EIF_VOLATILE ti4_3;
	EIF_INTEGER_32  EIF_VOLATILE ti4_4;
	EIF_INTEGER_32  EIF_VOLATILE ti4_5;
	EIF_INTEGER_32  EIF_VOLATILE ti4_6;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	EIF_BOOLEAN  EIF_VOLATILE tb3;
	RTLD;
	RTXD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc6);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc5);
	RTLR(7,saved_except);
	RTLIU(8);
	RTXSLS;
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
		F1910_22441(Current);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_48_2_)) {
			*(EIF_NATURAL_32 *)(Current+ _LNGOFF_48_14_0_0_) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
		} else {
			if ((EIF_BOOLEAN) (arg1 && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_48_1_))) {
				(*(EIF_NATURAL_32 *)(Current+ _LNGOFF_48_14_0_0_)) += (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				if ((EIF_BOOLEAN)(*(EIF_NATURAL_32 *)(Current+ _LNGOFF_48_14_0_0_) == ((EIF_NATURAL_32) 1500U))) {
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_48_3_)) {
						plsc();
						eif_mem_coalesc();
					}
					*(EIF_NATURAL_32 *)(Current+ _LNGOFF_48_14_0_0_) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
				}
			} else {
				*(EIF_NATURAL_32 *)(Current+ _LNGOFF_48_14_0_0_) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
			}
		}
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN) !F1696_18975(Current)) {
			tb2 = (EIF_BOOLEAN)(loc1 != NULL);
		}
		if (tb2) {
			tb1 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_48_1_);
		}
		if (tb1) {
			if (F1714_19325(Current)) {
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_24_) == NULL)) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					ti4_1 = F951_4094(RTCW(tr1));
					if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						tr1 = F951_4077(RTCW(tr1));
						tr1 = F1_14(tr1);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + _REFACS_24_) = (EIF_REFERENCE) tr1;
						loc6 = *(EIF_REFERENCE *)(Current + _REFACS_24_);
					}
				} else {
					tb1 = '\0';
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_48_0_)) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_24_);
						ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
						tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
					}
					if (tb1) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_24_);
						tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						ti4_1 = F951_4094(RTCW(tr2));
						tr1 = F1194_3115(RTCW(tr1), ti4_1);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + _REFACS_24_) = (EIF_REFERENCE) tr1;
					} else {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_24_);
						tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						ti4_1 = F951_4094(RTCW(tr2));
						tr1 = F1194_3117(tr1, ti4_1);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + _REFACS_24_) = (EIF_REFERENCE) tr1;
					}
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_24_);
					tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					tr2 = F951_4077(RTCW(tr2));
					tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					ti4_1 = F951_4094(RTCW(tr3));
					/* INLINED CODE (SPECIAL.copy_data) */
					sp_copy_data(RTCW(tr1),tr2,((EIF_INTEGER_32) 0L),((EIF_INTEGER_32) 0L),ti4_1);
					RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), ((EIF_INTEGER_32) 0L) + ti4_1);
					/* END INLINED CODE */
					;
					loc6 = *(EIF_REFERENCE *)(Current + _REFACS_24_);
				}
				if ((EIF_BOOLEAN)(loc6 != NULL)) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) R2226[Dtype(RTCW(tr1))-950])(tr1);
				}
				F1714_19326(Current);
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			if (F1714_19322(Current)) {
				loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_23_) == NULL)) {
					ti4_1 = F951_4094(RTCW(loc1));
					if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
						tr1 = F951_4077(RTCW(loc1));
						tr1 = F1_14(tr1);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + _REFACS_23_) = (EIF_REFERENCE) tr1;
						loc5 = *(EIF_REFERENCE *)(Current + _REFACS_23_);
					}
				} else {
					tb1 = '\0';
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_48_0_)) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_23_);
						ti4_1 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (tr1);
						tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
					}
					if (tb1) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_23_);
						ti4_1 = F951_4094(RTCW(loc1));
						tr1 = F1194_3115(RTCW(tr1), ti4_1);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + _REFACS_23_) = (EIF_REFERENCE) tr1;
					} else {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_23_);
						ti4_1 = F951_4094(RTCW(loc1));
						tr1 = F1194_3117(tr1, ti4_1);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + _REFACS_23_) = (EIF_REFERENCE) tr1;
					}
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_23_);
					tr2 = F951_4077(RTCW(loc1));
					ti4_1 = F951_4094(RTCW(loc1));
					/* INLINED CODE (SPECIAL.copy_data) */
					sp_copy_data(RTCW(tr1),tr2,((EIF_INTEGER_32) 0L),((EIF_INTEGER_32) 0L),ti4_1);
					RT_SPECIAL_COUNT(tr1) = eif_max_int32(RT_SPECIAL_COUNT(tr1), ((EIF_INTEGER_32) 0L) + ti4_1);
					/* END INLINED CODE */
					;
					loc5 = *(EIF_REFERENCE *)(Current + _REFACS_23_);
				}
				F1714_19323(Current);
				loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			*(EIF_BOOLEAN *)(Current+ _CHROFF_48_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			if ((EIF_BOOLEAN)(loc6 != NULL)) {
				loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				loc8 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc6);
				for (;;) {
					tb1 = '\01';
					if (!(EIF_BOOLEAN)(loc7 == loc8)) {
						tb1 = F1696_18975(Current);
					}
					if (tb1) break;
					/* INLINED CODE (SPECIAL.item) */
					tr2 = *((EIF_REFERENCE *)RTCW(loc6) + (loc7));
					/* END INLINED CODE */
					tr1 = tr2;
					F1714_19285(Current, tr1);
					loc7++;
				}
				F1194_3120(RTCW(loc6));
			}
			if ((EIF_BOOLEAN)(loc5 != NULL)) {
				loc8 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc5);
				loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				for (;;) {
					tb2 = '\01';
					if (!(EIF_BOOLEAN)(loc7 == loc8)) {
						tb2 = F1696_18975(Current);
					}
					if (tb2) break;
					tr1 = 
						/* INLINED CODE (SPECIAL.item) */
						*((EIF_REFERENCE *)RTCW(loc5) + (loc7))
						/* END INLINED CODE */;
					(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_3_0_0_))(
						*(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_4_2_0_3_0_1_),
						*(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_));
					loc7++;
				}
				F1194_3120(RTCW(loc5));
			}
			*(EIF_BOOLEAN *)(Current+ _CHROFF_48_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			tb3 = '\0';
			if (arg1) {
				tb3 = (EIF_BOOLEAN) !F1696_18975(Current);
			}
			if (tb3) {
				F1910_22441(Current);
				tb3 = '\0';
				if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_48_1_)) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					ti4_1 = F951_4094(RTCW(tr1));
					tb3 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
				}
				if (tb3) {
					F1910_22445(Current, ((EIF_INTEGER_32) 20L));
				}
			}
		}
	} else {
		if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 1L))) {
			tr1 = F1714_19363(Current);
			F1714_19358(Current, tr1);
		}
	}
	RTE_E
	RTXSC;
	RTS_SRR
	*(EIF_BOOLEAN *)(Current+ _CHROFF_48_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (loc3) {
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		F1714_19326(Current);
	}
	if (loc2) {
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		F1714_19323(Current);
	}
	if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
		loc4++;
		RTER;
	}
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {EV_APPLICATION_I}.call_separate_action */
void F1714_19285 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	if (RTS_CI (EIF_FALSE, arg1)) {
		RTS_BI (arg1);
		F1553_6497(RTCW(arg1), NULL);
		RTS_EI;
	} else {
		RTS_AC (1, arg1);
		RTS_AA (NULL, it_r, SK_REF, 1);
		RTS_CALL (F1553_6497, eif_scr6, 0, NULL);
	}
	if (uarg) {
		RTS_RD;
	}
	RTLE;
}

/* {EV_APPLICATION_I}.set_invoke_garbage_collection_when_inactive */
void F1714_19306 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_48_3_) = (EIF_BOOLEAN) arg1;
}

/* {EV_APPLICATION_I}.set_captured_widget */
void F1714_19307 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_28_) = (EIF_REFERENCE) arg1;
}

/* {EV_APPLICATION_I}.set_help_accelerator */
void F1714_19308 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_29_) = (EIF_REFERENCE) arg1;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_38_) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
		tr1 = F1605_17937(RTCW(tr1));
		tb2 = F951_4085(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_38_));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_29_);
		tr1 = F1605_17937(RTCW(tr1));
		F969_4172(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_38_));
	}
	RTLE;
}

/* {EV_APPLICATION_I}.set_contextual_help_accelerator */
void F1714_19309 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_30_) = (EIF_REFERENCE) arg1;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_39_) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_30_);
		tr1 = F1605_17937(RTCW(tr1));
		tb2 = F951_4085(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_39_));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_30_);
		tr1 = F1605_17937(RTCW(tr1));
		F969_4172(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_39_));
	}
	RTLE;
}

/* {EV_APPLICATION_I}.set_locked_window */
void F1714_19311 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_27_) = (EIF_REFERENCE) arg1;
}

/* {EV_APPLICATION_I}.enable_contextual_help */
void F1714_19317 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	tr1 = F1714_19335(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_28_) = (EIF_REFERENCE) loc1;
		tr1 = F1593_17703(loc1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_37_) = (EIF_REFERENCE) tr1;
		tr1 = F1593_17703(loc1);
		F969_4184(RTCW(tr1));
		tr1 = F1593_17703(loc1);
		tr2 = RTOUCR(204,F1714_19374, (Current));
		F976_4200(RTCW(tr1), tr2);
		tr1 = F1632_18301(loc1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_36_) = (EIF_REFERENCE) tr1;
		tr1 = RTLNS(eif_new_type(70, 0x01).id, 70, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr1 = RTOUCR(205,F71_9845, (RTCW(tr1)));
		F1632_18322(loc1, tr1);
		F1632_18314(loc1);
	}
	RTLE;
}

/* {EV_APPLICATION_I}.display_help_for_widget */
void F1714_19318 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	loc1 = F1610_18029(RTCW(arg1));
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_31_);
		tr2 = F1554_6501(RTCW(loc1), NULL);
		F319_12783(RTCW(tr1), tr2);
	}
	RTLE;
}

/* {EV_APPLICATION_I}.try_idle_lock */
EIF_BOOLEAN F1714_19322 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_32_) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_32_);
		Result = F1285_4712(RTCW(tr1));
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return Result;
}

/* {EV_APPLICATION_I}.idle_unlock */
void F1714_19323 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_32_) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_32_);
		F1285_4713(RTCW(tr1));
	}
	RTLE;
}

/* {EV_APPLICATION_I}.kamikaze_lock */
void F1714_19324 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_33_) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
		F1285_4711(RTCW(tr1));
	}
	RTLE;
}

/* {EV_APPLICATION_I}.try_kamikaze_lock */
EIF_BOOLEAN F1714_19325 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_33_) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
		Result = F1285_4712(RTCW(tr1));
	} else {
		RTLE;
		return (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTLE;
	return Result;
}

/* {EV_APPLICATION_I}.kamikaze_unlock */
void F1714_19326 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_33_) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
		F1285_4713(RTCW(tr1));
	}
	RTLE;
}

/* {EV_APPLICATION_I}.do_once_on_idle */
void F1714_19329 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	F1714_19324(Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = F951_4085(RTCW(tr1), arg1);
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(tr1))-818])(tr1, arg1);
	}
	if ((EIF_BOOLEAN) !F1714_19365(Current)) {
		F1910_22436(Current);
	}
	F1714_19326(Current);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
}

/* {EV_APPLICATION_I}.increase_action_sequence_call_counter */
void F1714_19331 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(*(EIF_NATURAL_32 *)(Current+ _LNGOFF_48_14_0_1_)) += (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
}

/* {EV_APPLICATION_I}.focused_widget */
EIF_REFERENCE F1714_19335 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTGC;
	loc1 = F1910_22403(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[Dtype(RTCW(loc1))-911])(loc1);
	for (;;) {
		tb1 = '\01';
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2291[Dtype(RTCW(loc1))-911])(loc1);
		if (!tb2) {
			tb1 = (EIF_BOOLEAN)(Result != NULL);
		}
		if (tb1) break;
		loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2290[Dtype(RTCW(loc1))-911])(loc1);
		tb2 = F1632_18309(RTCW(loc2));
		if (tb2) {
			tb2 = F1639_18409(RTCW(loc2));
			if (tb2) {
				tr1 = F1633_18330(RTCW(loc2));
				Result = F1714_19377(Current, tr1);
			} else {
				Result = (EIF_REFERENCE) loc2;
			}
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[Dtype(RTCW(loc1))-911])(loc1);
	}
	RTLE;
	return Result;
}

/* {EV_APPLICATION_I}.pnd_screen */
static EIF_REFERENCE F1714_19338_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(206)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1626, 0x01).id, 1626, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F1596_17742(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	F1625_18147(RTCW(Result));
	tr1 = RTOUCR(207,F73_9865, (RTCV(RTOUCR(208,F1714_19339, (Current)))));
	F1611_18035(RTCW(Result), tr1);
	F1625_18173(RTCW(Result));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1714_19338 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(206,F1714_19338_body,(Current));
}

/* {EV_APPLICATION_I}.stock_colors */
static EIF_REFERENCE F1714_19339_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(208)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(72, 0x01).id, 72, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1714_19339 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(208,F1714_19339_body,(Current));
}

/* {EV_APPLICATION_I}.set_x_y_origin */
void F1714_19342 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_0_2_) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_0_3_) = (EIF_INTEGER_32) arg2;
	RTLE;
}

/* {EV_APPLICATION_I}.draw_rubber_band */
void F1714_19344 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(206,F1714_19338, (Current));
	F1625_18157(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_0_2_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_0_3_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_0_4_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_0_5_));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_48_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTLE;
}

/* {EV_APPLICATION_I}.erase_rubber_band */
void F1714_19345 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_48_4_)) {
		tr1 = RTOUCR(206,F1714_19338, (Current));
		F1625_18157(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_0_2_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_0_3_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_0_4_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_0_5_));
		*(EIF_BOOLEAN *)(Current+ _CHROFF_48_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {EV_APPLICATION_I}.set_pnd_pointer_coords */
void F1714_19348 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_0_4_) = (EIF_INTEGER_32) arg1;
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_48_14_0_5_) = (EIF_INTEGER_32) arg2;
	RTLE;
}

/* {EV_APPLICATION_I}.create_target_menu */
void F1714_19349 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_REFERENCE arg6, EIF_REFERENCE arg7, EIF_BOOLEAN arg8)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc13 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc16 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCFDT;
	RTLD;
	
	RTLI(27);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,loc14);
	RTLR(3,loc5);
	RTLR(4,loc1);
	RTLR(5,loc10);
	RTLR(6,tr1);
	RTLR(7,tr2);
	RTLR(8,tr3);
	RTLR(9,tr4);
	RTLR(10,loc2);
	RTLR(11,loc3);
	RTLR(12,loc18);
	RTLR(13,arg6);
	RTLR(14,loc6);
	RTLR(15,arg7);
	RTLR(16,loc19);
	RTLR(17,loc7);
	RTLR(18,loc9);
	RTLR(19,loc8);
	RTLR(20,loc11);
	RTLR(21,loc12);
	RTLR(22,loc20);
	RTLR(23,arg5);
	RTLR(24,loc17);
	RTLR(25,loc21);
	RTLR(26,loc22);
	RTLIU(27);
	
	RTGC;
	loc4 = *(EIF_REFERENCE *)(Current + _REFACS_26_);
	loc14 = RTLNS(eif_new_type(1693, 0x01).id, 1693, _OBJSIZ_6_1_0_1_0_0_0_0_);
	F1596_17742(RTCW(loc14));
	loc5 = RTLNS(eif_new_type(1293, 0x01).id, 1293, _OBJSIZ_0_0_0_1_0_0_0_0_);
	loc1 = F1002_3937(RTCW(loc4));
	F1002_3963(RTCW(loc4));
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1556,0xFF01,0xFFF9,2,1475,0xFF01,71,0xFF01,71,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4= RTLNRF(typres0.id, (EIF_POINTER) __A1707_306_2_3, (EIF_POINTER) _A1707_306_2_3, (EIF_POINTER)(0),tr1, 1, 2);
	}
	loc10 = (EIF_REFERENCE) tr4;
	for (;;) {
		tb1 = F1002_3958(RTCW(loc4));
		if (tb1) break;
		ti4_1 = F1002_3935(RTCW(loc4));
		loc2 = F1294_4725(RTCW(loc5), ti4_1);
		loc2 = RTRV(eif_new_type(1294, 0x00), loc2);
		loc3 = loc2;
		loc3 = RTRV(eif_new_type(1627, 0x00), loc3);
		tb2 = '\0';
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			tb3 = '\01';
			if (!(EIF_BOOLEAN)(loc3 == NULL)) {
				tb4 = F1596_17746(RTCW(loc3));
				tb3 = (EIF_BOOLEAN) !tb4;
			}
			tb2 = tb3;
		}
		if (tb2) {
			tb2 = '\0';
			loc18 = RTCCL(arg6);
			if (EIF_TEST(loc18)) {
				tr1 = F1587_17684(RTCW(loc2));
				tr2 = RTCCL(loc18);
				tb3 = F978_14412(RTCW(tr1), tr2);
				tb2 = tb3;
			}
			if (tb2) {
				loc6 = loc2;
				loc6 = RTRV(eif_new_type(1630, 0x00), loc6);
				tb2 = '\0';
				if ((EIF_BOOLEAN)(loc6 != NULL)) {
					tb3 = '\0';
					tb4 = F1596_17746(RTCW(loc6));
					if ((EIF_BOOLEAN) !tb4) {
						tb4 = F1631_18291(RTCW(loc6));
						tb3 = (EIF_BOOLEAN) !tb4;
					}
					tb2 = tb3;
				}
				if ((EIF_BOOLEAN) !tb2) {
					loc16 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc13 && (EIF_BOOLEAN)(arg7 != NULL))) {
						tr1 = RTLNS(eif_new_type(1676, 0x01).id, 1676, _OBJSIZ_6_0_0_1_0_0_0_0_);
						tr2 = RTMS_EX_H("Pick",4,1349084011);
						F1677_18824(RTCW(tr1), tr2, arg7);
						F1630_18264(RTCW(loc14), tr1);
						loc13 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					}
					tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + O12507[Dtype(loc2)-1294]);
					loc19 = tr1;
					if (EIF_TEST(loc19)) {
						{
							static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,0,0xFFFF};
							EIF_TYPE typres0;
							static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
							
							typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							tr1 = RTLNTS(typres0.id, 2, 0);
						}
						((EIF_TYPED_VALUE *)tr1+1)->it_r = loc18;
						RTAR(tr1,loc18);
						loc7 = F1554_6501(loc19, tr1);
					}
					if ((EIF_BOOLEAN)(loc7 != NULL)) {
						F72_9863(RTCW(loc7), loc2);
						{
							static EIF_TYPE_INDEX typarr0[] = {0xFF01,485,0xFF01,71,0xFFFF};
							EIF_TYPE typres0;
							static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
							
							typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							loc9 = RTLNS(typres0.id, 485, _OBJSIZ_2_0_0_0_0_0_0_0_);
						}
						F486_1569(RTCW(loc9), loc7, loc10);
						if ((EIF_BOOLEAN)(loc8 == NULL)) {
							{
								static EIF_TYPE_INDEX typarr0[] = {0xFF01,716,0xFF01,485,0xFF01,71,0xFFFF};
								EIF_TYPE typres0;
								static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
								
								typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
								loc8 = RTLNS(typres0.id, 716, _OBJSIZ_4_1_0_1_0_0_0_0_);
							}
							F717_2955(RTCW(loc8), loc9);
						} else {
							F717_2967(RTCW(loc8), loc9);
						}
						loc7 = (EIF_REFERENCE) NULL;
					}
				}
			}
		}
		F1002_3964(RTCW(loc4));
	}
	if (loc16) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,71,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc11 = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		F951_4073(RTCW(loc11), ((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN)(loc8 != NULL)) {
			{
				EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				typarr0[4] = dftype;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNTS(typres0.id, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
			RTAR(tr1,Current);
			
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,3,1475,0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFF01,716,0xFF01,485,0xFF01,71,0xFF01,950,0xFF01,71,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr4= RTLNRF(typres0.id, (EIF_POINTER) __A1707_307_2_3_4, (EIF_POINTER) _A1707_307_2_3_4, (EIF_POINTER)(0),tr1, 1, 3);
			}
			loc12 = (EIF_REFERENCE) tr4;
			(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(loc12)+ _PTROFF_4_2_0_3_0_0_))(
				*(EIF_POINTER *)(RTCW(loc12)+ _PTROFF_4_2_0_3_0_1_),
				*(EIF_REFERENCE *)(RTCW(loc12) + _REFACS_1_), loc12, loc8, loc11);
		}
		loc15 = F1630_18253(RTCW(loc14));
		tr1 = F1628_18224(RTCW(arg5));
		loc20 = tr1;
		if (EIF_TEST(loc20)) {
			loc17 = (EIF_REFERENCE) RTCCL(arg6);
			RTCT0("l_pebble /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc17 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			tr1 = RTCCL(loc17);
			(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(loc20+ _PTROFF_4_2_0_3_0_0_))(
				*(EIF_POINTER *)(loc20+ _PTROFF_4_2_0_3_0_1_),
				*(EIF_REFERENCE *)(loc20 + _REFACS_1_), loc14, loc11, arg5, tr1);
		} else {
			F951_4104(RTCW(loc11));
			for (;;) {
				tb2 = F882_3332(RTCW(loc11));
				if (tb2) break;
				tr1 = F951_4078(RTCW(loc11));
				tr1 = *(EIF_REFERENCE *)(RTCW(tr1));
				loc21 = tr1;
				if (EIF_TEST(loc21)) {
					loc17 = (EIF_REFERENCE) RTCCL(arg6);
					RTCT0("l_pebble /= Void", EX_CHECK);
					if ((EIF_BOOLEAN)(loc17 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					tr1 = RTLNS(eif_new_type(1676, 0x01).id, 1676, _OBJSIZ_6_0_0_1_0_0_0_0_);
					tr2 = F951_4078(RTCW(loc11));
					tr2 = F72_9859(RTCW(tr2));
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,1475,0xFF01,977,0xFFF9,1,1475,0xFF01,0,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr3 = RTLNTS(typres0.id, 3, 0);
					}
					tr4 = F1587_17684(loc21);
					((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
					RTAR(tr3,tr4);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,0,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr4 = RTLNTS(typres0.id, 2, 0);
					}
					((EIF_TYPED_VALUE *)tr4+1)->it_r = loc17;
					RTAR(tr4,loc17);
					((EIF_TYPED_VALUE *)tr3+2)->it_r = tr4;
					RTAR(tr3,tr4);
					
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr4= RTLNRF(typres0.id, (EIF_POINTER) __A1351_183, (EIF_POINTER) _A1351_183, (EIF_POINTER)(F978_14410),tr3, 1, 0);
					}
					F1677_18824(RTCW(tr1), tr2, tr4);
					F1630_18264(RTCW(loc14), tr1);
				}
				F951_4106(RTCW(loc11));
			}
		}
		tb3 = '\0';
		tb4 = F1596_17746(RTCW(loc14));
		if ((EIF_BOOLEAN) !tb4) {
			ti4_1 = F1630_18253(RTCW(loc14));
			tb3 = (EIF_BOOLEAN) (ti4_1 > loc15);
		}
		if (tb3) {
			F1694_18957(RTCW(loc14), NULL, (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 3L)), (EIF_INTEGER_32) (arg4 - ((EIF_INTEGER_32) 3L)));
		} else {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg7 != NULL) && (EIF_BOOLEAN) !arg8)) {
				(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg7)+ _PTROFF_4_2_0_3_0_0_))(
					*(EIF_POINTER *)(RTCW(arg7)+ _PTROFF_4_2_0_3_0_1_),
					*(EIF_REFERENCE *)(RTCW(arg7) + _REFACS_1_));
			}
		}
	} else {
		tr1 = F1628_18224(RTCW(arg5));
		loc22 = tr1;
		if (EIF_TEST(loc22)) {
			loc14 = RTLNS(eif_new_type(1693, 0x01).id, 1693, _OBJSIZ_6_1_0_1_0_0_0_0_);
			F1596_17742(RTCW(loc14));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,71,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
			}
			F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 0L));
			tr2 = RTCCL(arg6);
			(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(loc22+ _PTROFF_4_2_0_3_0_0_))(
				*(EIF_POINTER *)(loc22+ _PTROFF_4_2_0_3_0_1_),
				*(EIF_REFERENCE *)(loc22 + _REFACS_1_), loc14, tr1, arg5, tr2);
			tb3 = '\0';
			tb4 = '\0';
			tb5 = F1596_17746(RTCW(loc14));
			if ((EIF_BOOLEAN) !tb5) {
				ti4_1 = F1630_18253(RTCW(loc14));
				tb4 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
			}
			if (tb4) {
				tb3 = (EIF_BOOLEAN) !F1910_22388(Current);
			}
			if (tb3) {
				F1694_18957(RTCW(loc14), NULL, (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 3L)), (EIF_INTEGER_32) (arg4 - ((EIF_INTEGER_32) 3L)));
			}
		}
	}
	tb3 = F1002_3960(RTCW(loc4), loc1);
	if (tb3) {
		F1002_3965(RTCW(loc4), loc1);
	}
	RTLE;
}

/* {EV_APPLICATION_I}.set_tab_navigation_state */
void F1714_19352 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	
	
	*(EIF_NATURAL_8 *)(Current+ _CHROFF_48_12_) = (EIF_NATURAL_8) arg1;
}

/* {EV_APPLICATION_I}.call_post_launch_actions */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1714_19357 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	RTLD;
	RTXD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,saved_except);
	RTLIU(3);
	RTXSLS;
	
	RTEV;
	RTGC;
	RTE_T
	if ((EIF_BOOLEAN) !loc1) {
		tr1 = F251_11685(Current);
		F977_14409(RTCW(tr1), NULL);
	} else {
		tr1 = F1714_19363(Current);
		F1714_19358(Current, tr1);
	}
	RTE_E
	RTXSC;
	RTS_SRR
	if ((EIF_BOOLEAN) !loc1) {
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTER;
	}
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {EV_APPLICATION_I}.on_exception_action */
void F1714_19358 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,tr2);
	RTLR(5,arg1);
	RTLR(6,loc1);
	RTLIU(7);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_27_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		F1643_18478(loc2);
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_28_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		F1632_18315(loc3);
	}
	tb1 = '\0';
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_48_5_) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_8_) != NULL))) {
		tb2 = F736_2537(RTCV(F251_11698(Current)));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_48_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		tr1 = F251_11698(Current);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,1475,0xFF01,423,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = arg1;
		RTAR(tr2,arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3112[Dtype(RTCW(tr1))-975])(tr1, tr2);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_48_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		loc1 = RTLNSMART(eif_new_type(1647, 0).id);
		F1596_17742(RTCW(loc1));
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_34_) = (EIF_REFERENCE) loc1;
		F1714_19359(Current, loc1, arg1);
	}
	RTLE;
}

/* {EV_APPLICATION_I}.raise_default_exception_dialog */
void F1714_19359 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	RTCFDT;
	RTLD;
	
	RTLI(19);
	RTLR(0,loc1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc6);
	RTLR(5,loc4);
	RTLR(6,loc10);
	RTLR(7,loc11);
	RTLR(8,loc9);
	RTLR(9,loc3);
	RTLR(10,arg1);
	RTLR(11,loc5);
	RTLR(12,loc7);
	RTLR(13,Current);
	RTLR(14,tr2);
	RTLR(15,tr3);
	RTLR(16,loc8);
	RTLR(17,loc13);
	RTLR(18,loc12);
	RTLIU(19);
	
	RTGC;
	loc1 = F424_1423(RTCW(arg2));
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tr1 = F1_14(loc1);
		loc1 = (EIF_REFERENCE) tr1;
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
		F1565_6963(RTCW(loc1), tw1);
	}
	loc2 = RTLNS(eif_new_type(1659, 0x01).id, 1659, _OBJSIZ_5_2_0_1_0_0_0_0_);
	F1596_17742(RTCW(loc2));
	F1660_18713(RTCW(loc2));
	F1659_18685(RTCW(loc2));
	loc6 = RTLNS(eif_new_type(1601, 0x01).id, 1601, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F1596_17742(RTCW(loc6));
	F1602_17866(RTCW(loc6), ((EIF_INTEGER_32) 4L));
	F1624_18129(RTCW(loc2), loc6);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1622_18116(RTCW(loc2), loc1);
	} else {
		tr1 = RTMS_EX_H("No trace available.",19,2146208046);
		F1622_18116(RTCW(loc2), tr1);
	}
	loc4 = RTLNS(eif_new_type(1636, 0x01).id, 1636, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F1596_17742(RTCW(loc4));
	loc10 = RTLNS(eif_new_type(1637, 0x01).id, 1637, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F1596_17742(RTCW(loc10));
	F1636_18395(RTCW(loc10), ((EIF_INTEGER_32) 5L));
	F1636_18397(RTCW(loc10), ((EIF_INTEGER_32) 5L));
	tr1 = RTLNS(eif_new_type(70, 0x01).id, 70, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = RTOUCR(209,F71_9838, (RTCW(tr1)));
	tr1 = F1_14(tr1);
	F1630_18264(RTCW(loc10), tr1);
	tr1 = F852_3255(RTCW(loc10));
	F1636_18399(RTCW(loc10), tr1);
	tr1 = F852_3255(RTCW(loc10));
	F1632_18325(RTCW(tr1), ((EIF_INTEGER_32) 32L), ((EIF_INTEGER_32) 32L));
	loc11 = RTLNS(eif_new_type(1653, 0x01).id, 1653, _OBJSIZ_5_2_0_1_0_0_0_0_);
	F1596_17742(RTCW(loc11));
	F1623_18126(RTCW(loc11));
	tr1 = RTMS_EX_H("The following uncaught exception has occurred:\012\012Click Ignore to continue or Quit to exit the application",104,940859246);
	F1622_18116(RTCW(loc11), tr1);
	F1630_18264(RTCW(loc10), loc11);
	F1630_18264(RTCW(loc4), loc10);
	F1636_18399(RTCW(loc4), loc10);
	loc9 = RTLNS(eif_new_type(1639, 0x01).id, 1639, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F1596_17742(RTCW(loc9));
	loc3 = RTLNS(eif_new_type(1637, 0x01).id, 1637, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F1596_17742(RTCW(loc3));
	F1633_18339(RTCW(loc9), loc3);
	F1636_18397(RTCW(loc3), ((EIF_INTEGER_32) 5L));
	F1636_18395(RTCW(loc3), ((EIF_INTEGER_32) 5L));
	F1630_18264(RTCW(loc3), loc2);
	tr1 = RTMS_EX_H("Exception Trace",15,1881935717);
	F1622_18116(RTCW(loc9), tr1);
	F1630_18264(RTCW(loc4), loc9);
	F1633_18339(RTCW(arg1), loc4);
	loc5 = RTLNS(eif_new_type(1637, 0x01).id, 1637, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F1596_17742(RTCW(loc5));
	F1630_18264(RTCW(loc4), loc5);
	F1636_18399(RTCW(loc4), loc5);
	loc7 = RTLNS(eif_new_type(1663, 0x01).id, 1663, _OBJSIZ_6_2_0_1_0_0_0_0_);
	tr1 = RTMS_EX_H("Ignore",6,1997112421);
	F1622_18114(RTCW(loc7), tr1);
	tr1 = F1591_17697(RTCW(loc7));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,1647,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = arg1;
	RTAR(tr2,arg1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,0,1475,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A1642_262, (EIF_POINTER) _A1642_262, (EIF_POINTER)(F1643_18464),tr2, 1, 0);
	}
	F969_4172(RTCW(tr1), tr3);
	tr1 = RTLNS(eif_new_type(1638, 0x01).id, 1638, _OBJSIZ_6_3_0_1_0_0_0_0_);
	F1596_17742(RTCW(tr1));
	F1630_18264(RTCW(loc5), tr1);
	F1630_18264(RTCW(loc5), loc7);
	F1636_18399(RTCW(loc5), loc7);
	loc8 = RTLNS(eif_new_type(1663, 0x01).id, 1663, _OBJSIZ_6_2_0_1_0_0_0_0_);
	tr1 = RTMS_EX_H("Quit",4,1366649204);
	F1622_18114(RTCW(loc8), tr1);
	ti4_1 = F1614_18070(RTCW(loc7));
	F1632_18323(RTCW(loc8), ti4_1);
	tr1 = F1591_17697(RTCW(loc8));
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
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A1707_33, (EIF_POINTER) _A1707_33, (EIF_POINTER)(F1696_18973),tr2, 1, 0);
	}
	F969_4172(RTCW(tr1), tr3);
	F1630_18264(RTCW(loc5), loc8);
	F1636_18399(RTCW(loc5), loc8);
	F1636_18395(RTCW(loc5), ((EIF_INTEGER_32) 5L));
	F1636_18397(RTCW(loc5), ((EIF_INTEGER_32) 5L));
	tr1 = F424_1421(RTCW(arg2));
	loc13 = tr1;
	if (EIF_TEST(loc13)) {
		loc12 = (EIF_REFERENCE) loc13;
	} else {
		loc12 = RTMS_EX_H("",0,0);
	}
	tr1 = RTMS32_EX_H("U\000\000\000n\000\000\000c\000\000\000a\000\000\000u\000\000\000g\000\000\000h\000\000\000t\000\000\000 \000\000\000E\000\000\000x\000\000\000c\000\000\000e\000\000\000p\000\000\000t\000\000\000i\000\000\000o\000\000\000n\000\000\000:\000\000\000 \000\000\000",20,182364448);
	tr1 = F1565_6940(tr1, loc12);
	F1643_18473(RTCW(arg1), tr1);
	F1632_18324(RTCW(arg1), ((EIF_INTEGER_32) 350L));
	F1615_18079(RTCW(arg1), ((EIF_INTEGER_32) 500L), ((EIF_INTEGER_32) 300L));
	F1645_18500(RTCW(arg1));
	F1632_18313(RTCW(loc7));
	RTLE;
}

/* {EV_APPLICATION_I}.new_exception */
EIF_REFERENCE F1714_19363 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tr1 = RTOUCR(11,F423_1381, (Current));
	loc1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1134[Dtype(RTCW(tr1))-378])(tr1);
	RTCT0("l_result /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {EV_APPLICATION_I}.is_gui_thread */
EIF_BOOLEAN F1714_19365 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(203,F1714_19366, (Current));
	Result = *(EIF_BOOLEAN *)(RTCW(tr1) + O1718[Dtype(tr1)-488]);
	RTLE;
	return Result;
}

/* {EV_APPLICATION_I}.is_gui_thread_cell */
static EIF_REFERENCE F1714_19366_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(203)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,491,1493,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 491, _OBJSIZ_0_1_0_0_0_0_0_0_);
	}
	F492_1934(RTCW(tr1), (EIF_BOOLEAN) 0);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1714_19366 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(203,F1714_19366_body,(Current));
}

/* {EV_APPLICATION_I}.help_handler */
void F1714_19372 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = F1714_19335(Current);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		F1714_19318(Current, loc1);
	}
	RTLE;
}

/* {EV_APPLICATION_I}.contextual_help_procedure */
static EIF_REFERENCE F1714_19374_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCFDD;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(204)
	dftype = Dftype(Current);

	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLIU(5);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,8,1475,1508,1508,1508,1496,1496,1496,1508,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4= RTLNRF(typres0.id, (EIF_POINTER) __A1707_301_2_3_4_5_6_7_8_9, (EIF_POINTER) _A1707_301_2_3_4_5_6_7_8_9, (EIF_POINTER)(F1714_19375),tr1, 1, 8);
	}
	Result = (EIF_REFERENCE) tr4;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1714_19374 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(204,F1714_19374_body,(Current));
}

/* {EV_APPLICATION_I}.contextual_help */
void F1714_19375 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L))) {
		F1714_19376(Current);
		loc1 = F1627_18196(RTCV(RTOUCR(206,F1714_19338, (Current))));
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			F1714_19318(Current, loc1);
		}
	}
	RTLE;
}

/* {EV_APPLICATION_I}.disable_contextual_help */
void F1714_19376 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_28_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_37_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			tr1 = F1593_17703(loc1);
			F852_3275(RTCW(tr1), loc2);
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_36_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			F1632_18322(loc1, loc3);
		}
		F1632_18315(loc1);
	} else {
	}
	RTLE;
}

/* {EV_APPLICATION_I}.focused_widget_from_container */
EIF_REFERENCE F1714_19377 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,loc4);
	RTLR(5,loc2);
	RTLR(6,tr1);
	RTLR(7,Result);
	RTLIU(8);
	
	RTGC;
	tb1 = F1632_18309(RTCW(arg1));
	if (tb1) {
		RTLE;
		return (EIF_REFERENCE) arg1;
	} else {
		loc1 = arg1;
		loc1 = RTRV(eif_new_type(1632, 0x00), loc1);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			{
				static EIF_TYPE_INDEX typarr0[] = {851,0xFF01,1631,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc3 = loc1;
				loc3 = RTRV(typres0, loc3);
			}
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				loc4 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2264[Dtype(RTCW(loc3))-911])(loc3);
			}
			loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2216[Dtype(RTCW(loc1))-715])(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[Dtype(RTCW(loc2))-911])(loc2);
			for (;;) {
				tb1 = '\01';
				tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2291[Dtype(RTCW(loc2))-911])(loc2);
				if (!tb2) {
					tb1 = (EIF_BOOLEAN)(Result != NULL);
				}
				if (tb1) break;
				tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2290[Dtype(RTCW(loc2))-911])(loc2);
				Result = F1714_19377(Current, tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[Dtype(RTCW(loc2))-911])(loc2);
			}
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTCT0("cursor /= Void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2266[Dtype(RTCW(loc3))-911])(loc3, loc4);
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_APPLICATION_I}.inline-agent#1 of create_target_menu */
EIF_BOOLEAN F1714_25843 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,arg2);
	RTLIU(5);
	
	RTGC;
	tb1 = '\0';
	tr1 = F72_9859(RTCW(arg1));
	loc1 = tr1;
	if ((EIF_TRUE)) {
		tr1 = F72_9859(RTCW(arg2));
		loc2 = tr1;
		tb1 = (EIF_TRUE);
	}
	if (tb1) {
		tb1 = F1564_6875(loc1, loc2);
		RTLE;
		return (EIF_BOOLEAN) tb1;
	}
	RTLE;
	return (EIF_BOOLEAN) 0;
}

/* {EV_APPLICATION_I}.inline-agent#2 of create_target_menu */
void F1714_25844 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,arg3);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		tr1 = *(EIF_REFERENCE *)(RTCW(arg2) + _REFACS_2_);
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), arg1, tr1, arg3);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg2));
		tr1 = *(EIF_REFERENCE *)(RTCW(tr1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(arg3))-818])(arg3, tr1);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg2) + _REFACS_3_);
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), arg1, tr1, arg3);
	}
	RTLE;
}

void EIF_Minit1707 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
