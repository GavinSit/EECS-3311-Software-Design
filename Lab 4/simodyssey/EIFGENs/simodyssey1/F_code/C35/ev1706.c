/*
 * Code for class EV_ENVIRONMENT_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1706.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ENVIRONMENT_I}.application */
EIF_REFERENCE F1713_19260 (EIF_REFERENCE Current)
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
	tr1 = RTOPCF(19271,F1713_19271, (Current));
	tr1 = F1713_19273(Current, tr1);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1713, 0x01),loc1);
	if ((loc1) && RTS_OS (Current, loc1)) loc1 = (EIF_REFERENCE) 0;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(loc1 + O15892[Dtype(loc1)-1695]);
		RTLE;
		return (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_ENVIRONMENT_I}.application_i */
EIF_REFERENCE F1713_19262 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tb1 = '\0';
	tr1 = RTOPCF(19271,F1713_19271, (Current));
	tr1 = F1713_19273(Current, tr1);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1713, 0x01),loc1);
	if ((loc1) && RTS_OS (Current, loc1)) loc1 = (EIF_REFERENCE) 0;
	if (EIF_TEST(loc1)) {
		tb2 = F1696_18975(loc1);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		tr1 = RTOPCF(19271,F1713_19271, (Current));
		Result = F1713_19274(Current, tr1);
	}
	RTLE;
	return Result;
}

/* {EV_ENVIRONMENT_I}.application_cell */
static EIF_REFERENCE F1713_19271_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOPP (19271);
#define Result RTOPR(19271)
	RTOC_GLOBAL(Result);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF05,488,0xFF04,1713,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 488, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	RTS_PP (tr1);
	RTS_BI (tr1);
	F489_1934(RTCW(tr1), NULL);
	RTS_EI;
	Result = (EIF_REFERENCE) tr1;
	RTOPE (19271);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1713_19271 (EIF_REFERENCE Current)
{
	GTCX
	return RTOPCF(19271,F1713_19271_body,(Current));
}

/* {EV_ENVIRONMENT_I}.application_cell_item */
EIF_REFERENCE F1713_19273 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
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
	if (RTS_CI (EIF_TRUE, arg1)) {
		RTS_BI (arg1);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		RTS_EI;
	} else {
		RTS_AC (0, arg1);
		RTS_CALL (NULL, eif_sca8, 0, &(tr1));
	}
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {EV_ENVIRONMENT_I}.new_application_i */
EIF_REFERENCE F1713_19274 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,Result);
	RTLR(7,loc4);
	RTLIU(8);
	
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	if (uarg) {
		for (;;) {
			int has_wait_condition = 0;
			RTCT("same_processor_as_application", EX_PRE);
			tb1 = '\01';
			if (RTS_CI (EIF_TRUE, arg1)) {
				RTS_BI (arg1);
				tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
				RTS_EI;
			} else {
				RTS_AC (0, arg1);
				RTS_CALL (NULL, eif_sca8, 0, &(tr1));
			}
			loc1 = tr1;
			if (!((EIF_BOOLEAN) !EIF_TEST(loc1))) {
				loc2 = loc1;
				loc2 = RTRV(eif_new_type(1713, 0x01),loc2);
				if ((loc2) && RTS_OS (Current, loc2)) loc2 = (EIF_REFERENCE) 0;
				tb1 = EIF_TEST(loc2);
			}
			has_wait_condition = uarg1;
			RTTE(tb1, label_1);
			RTCK;
			has_wait_condition = 0;
			RTJB;
label_1:
			if (!has_wait_condition) break;
			RTCK;
			RTS_RF;
		}
		RTCF;
	}
body:;
	if (RTS_CI (EIF_TRUE, arg1)) {
		RTS_BI (arg1);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		RTS_EI;
	} else {
		RTS_AC (0, arg1);
		RTS_CALL (NULL, eif_sca8, 0, &(tr1));
	}
	loc3 = tr1;
	if ((EIF_BOOLEAN) !EIF_TEST(loc3)) {
		Result = RTLNS(eif_new_type(1909, 0x01).id, 1909, _OBJSIZ_48_14_0_7_0_2_0_0_);
		F1910_22385(RTCW(Result));
		if (RTS_CI (EIF_FALSE, arg1)) {
			RTS_BI (arg1);
			F489_1934(RTCW(arg1), Result);
			RTS_EI;
		} else {
			RTS_AC (1, arg1);
			RTS_AA (Result, it_r, SK_REF, 1);
			RTS_CALL (F489_1934, eif_scr6, 0, NULL);
		}
	} else {
		loc4 = loc3;
		loc4 = RTRV(eif_new_type(1713, 0x01),loc4);
		if ((loc4) && RTS_OS (Current, loc4)) loc4 = (EIF_REFERENCE) 0;
		if (EIF_TEST(loc4)) {
			tb1 = F1696_18975(loc4);
			if (tb1) {
				Result = RTLNS(eif_new_type(1909, 0x01).id, 1909, _OBJSIZ_48_14_0_7_0_2_0_0_);
				F1910_22385(RTCW(Result));
				if (RTS_CI (EIF_FALSE, arg1)) {
					RTS_BI (arg1);
					F489_1934(RTCW(arg1), Result);
					RTS_EI;
				} else {
					RTS_AC (1, arg1);
					RTS_AA (Result, it_r, SK_REF, 1);
					RTS_CALL (F489_1934, eif_scr6, 0, NULL);
				}
			} else {
				if (uarg) {
					RTS_RD;
				}
				RTLE;
				return (EIF_REFERENCE) loc4;
			}
		} else {
			RTCT0("is_same_processor", EX_CHECK);
				RTCF0;
		}
	}
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	return Result;
}

/* {EV_ENVIRONMENT_I}.destroy */
void F1713_19275 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1696_18991(Current, (EIF_BOOLEAN) 1);
}

void EIF_Minit1706 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
