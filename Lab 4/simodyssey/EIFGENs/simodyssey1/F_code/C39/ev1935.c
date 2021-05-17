/*
 * Code for class EV_DRAWABLE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1935.h"
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

/* {EV_DRAWABLE_IMP}.make */
void F1952_23490 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	F1750_19724(Current);
	if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O19509[dtype-1951]) != NULL)) {
		tr1 = RTLNS(eif_new_type(1602, 0x01).id, 1602, _OBJSIZ_2_0_0_0_0_0_0_0_);
		tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
		tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
		tr4_3 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
		F1603_17889(RTCW(tr1), tr4_1, tr4_2, tr4_3);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O19509[dtype-1951]) = (EIF_REFERENCE) tr1;
	}
	if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O19508[dtype-1951]) != NULL)) {
		tr1 = RTLNS(eif_new_type(1602, 0x01).id, 1602, _OBJSIZ_2_0_0_0_0_0_0_0_);
		tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
		tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
		tr4_3 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
		F1603_17889(RTCW(tr1), tr4_1, tr4_2, tr4_3);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O19508[dtype-1951]) = (EIF_REFERENCE) tr1;
	}
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19472[dtype-1952])(Current);
	F1306_15255(RTCW(tr1));
	F1952_23507(Current, ((EIF_INTEGER_32) 0L));
	F1952_23548(Current);
	F1952_23547(Current);
	F1952_23506(Current, ((EIF_INTEGER_32) 1L));
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_DRAWABLE_IMP}.get_dc */
void F1952_23492 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_DRAWABLE_IMP}.release_dc */
void F1952_23493 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_DRAWABLE_IMP}.background_color_internal */
EIF_REFERENCE F1952_23495 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O19509[Dtype(Current)-1951]);
}


/* {EV_DRAWABLE_IMP}.foreground_color_internal */
EIF_REFERENCE F1952_23496 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O19508[Dtype(Current)-1951]);
}


/* {EV_DRAWABLE_IMP}.line_width */
EIF_INTEGER_32 F1952_23497 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O19507[Dtype(Current)-1951]);
}


/* {EV_DRAWABLE_IMP}.drawing_mode */
EIF_INTEGER_32 F1952_23498 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O19478[dtype-1951]) == ((EIF_INTEGER_32) 13L))) {
		RTLE;
		return (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O19478[dtype-1951]) == ((EIF_INTEGER_32) 7L))) {
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O19478[dtype-1951]) == ((EIF_INTEGER_32) 6L))) {
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			} else {
				if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O19478[dtype-1951]) == ((EIF_INTEGER_32) 9L))) {
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				} else {
					if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O19478[dtype-1951]) == ((EIF_INTEGER_32) 15L))) {
						RTLE;
						return (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
					}
				}
			}
		}
	}
	RTLE;
	return Result;
}

/* {EV_DRAWABLE_IMP}.clip_area */
EIF_REFERENCE F1952_23499 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O19506[Dtype(Current)-1951]);
}


/* {EV_DRAWABLE_IMP}.tile */
EIF_REFERENCE F1952_23500 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O19505[Dtype(Current)-1951]);
}


/* {EV_DRAWABLE_IMP}.dashed_line_style */
EIF_BOOLEAN F1952_23501 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O19504[Dtype(Current)-1951]);
}


/* {EV_DRAWABLE_IMP}.set_background_color */
void F1952_23504 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	loc1 = RTRV(eif_new_type(1829, 0x00), loc1);
	RTCT0("a_color_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc2 = *(EIF_REFERENCE *)(RTCV(F1715_19380(Current)) + _REFACS_1_);
	loc2 = RTRV(eif_new_type(1829, 0x00), loc2);
	RTCT0("background_color_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_2_1_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc2)+ _LNGOFF_2_1_0_0_);
	if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_2_1_0_0_);
		F1829_20498(RTCW(loc2), ti4_1);
		*(EIF_BOOLEAN *)(Current + O19494[Dtype(Current)-1951]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {EV_DRAWABLE_IMP}.set_foreground_color */
void F1952_23505 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	loc1 = RTRV(eif_new_type(1829, 0x00), loc1);
	RTCT0("a_color_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	loc2 = *(EIF_REFERENCE *)(RTCV(F1715_19379(Current)) + _REFACS_1_);
	loc2 = RTRV(eif_new_type(1829, 0x00), loc2);
	RTCT0("foreground_color_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_2_1_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc2)+ _LNGOFF_2_1_0_0_);
	if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_2_1_0_0_);
		F1829_20498(RTCW(loc2), ti4_1);
		*(EIF_BOOLEAN *)(Current + O19495[dtype-1951]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		*(EIF_BOOLEAN *)(Current + O19491[dtype-1951]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		*(EIF_BOOLEAN *)(Current + O19492[dtype-1951]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {EV_DRAWABLE_IMP}.set_line_width */
void F1952_23506 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O19507[dtype-1951]) = (EIF_INTEGER_32) arg1;
	*(EIF_BOOLEAN *)(Current + O19491[dtype-1951]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {EV_DRAWABLE_IMP}.set_drawing_mode */
void F1952_23507 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	switch (arg1) {
		case 0L:
			*(EIF_INTEGER_32 *)(Current + O19478[dtype-1951]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
			break;
		case 1L:
			*(EIF_INTEGER_32 *)(Current + O19478[dtype-1951]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
			break;
		case 2L:
			*(EIF_INTEGER_32 *)(Current + O19478[dtype-1951]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
			break;
		case 3L:
			*(EIF_INTEGER_32 *)(Current + O19478[dtype-1951]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
			break;
		case 4L:
			*(EIF_INTEGER_32 *)(Current + O19478[dtype-1951]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
			break;
		default:
			break;
	}
	{
		/* INLINED CODE (EV_DRAWABLE_IMP.get_dc) */
		/* END INLINED CODE */
	}
	;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19472[dtype-1952])(Current);
	F1306_15256(RTCW(tr1), *(EIF_INTEGER_32 *)(Current + O19478[dtype-1951]));
	{
		/* INLINED CODE (EV_DRAWABLE_IMP.release_dc) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {EV_DRAWABLE_IMP}.enable_dashed_line_style */
void F1952_23513 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O19504[dtype-1951]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	*(EIF_BOOLEAN *)(Current + O19491[dtype-1951]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {EV_DRAWABLE_IMP}.disable_dashed_line_style */
void F1952_23514 (EIF_REFERENCE Current)
{
	GTCX
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	*(EIF_BOOLEAN *)(Current + O19504[dtype-1951]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	*(EIF_BOOLEAN *)(Current + O19491[dtype-1951]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {EV_DRAWABLE_IMP}.set_font */
void F1952_23515 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O16495[dtype-1749]) = (EIF_REFERENCE) arg1;
	tr1 = *(EIF_REFERENCE *)(Current + O16495[dtype-1749]);
	loc1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
	loc1 = RTRV(eif_new_type(1885, 0x00), loc1);
	*(EIF_REFERENCE *)(Current + O16496[dtype-1749]) = (EIF_REFERENCE) NULL;
	*(EIF_BOOLEAN *)(Current + O19493[dtype-1951]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTLE;
}

/* {EV_DRAWABLE_IMP}.draw_point */
void F1952_23518 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O19491[dtype-1951])) {
		F1952_23548(Current);
	}
	{
		/* INLINED CODE (EV_DRAWABLE_IMP.get_dc) */
		/* END INLINED CODE */
	}
	;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19472[dtype-1952])(Current);
	tr2 = F1952_23544(Current);
	F1306_15292(RTCW(tr1), arg1, arg2, tr2);
	{
		/* INLINED CODE (EV_DRAWABLE_IMP.release_dc) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {EV_DRAWABLE_IMP}.draw_segment */
void F1952_23525 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O19491[dtype-1951])) {
		F1952_23548(Current);
	}
	{
		/* INLINED CODE (EV_DRAWABLE_IMP.get_dc) */
		/* END INLINED CODE */
	}
	;
	tr1 = F1952_23568(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tr1 = F1952_23570(Current);
		F1332_15702(loc1, tr1, arg1, arg2, arg3, arg4);
	} else {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19472[dtype-1952])(Current);
		F1306_15296(RTCW(tr1), arg1, arg2);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19472[dtype-1952])(Current);
		F1306_15295(RTCW(tr1), arg3, arg4);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19472[dtype-1952])(Current);
		tr2 = F1952_23544(Current);
		F1306_15292(RTCW(tr1), arg3, arg4, tr2);
	}
	{
		/* INLINED CODE (EV_DRAWABLE_IMP.release_dc) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {EV_DRAWABLE_IMP}.wel_font */
EIF_REFERENCE F1952_23542 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O16495[dtype-1749]) != NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + O16495[dtype-1749]);
		loc1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
		loc1 = RTRV(eif_new_type(1885, 0x00), loc1);
		RTCT0("font_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
		RTLE;
		return (EIF_REFERENCE) tr1;
	} else {
		loc2 = *(EIF_REFERENCE *)(Current + O16496[dtype-1749]);
		RTCT0("l_private_wel_font /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTLE;
		return (EIF_REFERENCE) loc2;
	}/* NOTREACHED */
	
}

/* {EV_DRAWABLE_IMP}.wel_bg_color */
EIF_REFERENCE F1952_23543 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(RTCV(F1715_19380(Current)) + _REFACS_1_);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1828, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		RTCT0("False", EX_CHECK);
			RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_DRAWABLE_IMP}.wel_fg_color */
EIF_REFERENCE F1952_23544 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(RTCV(F1715_19379(Current)) + _REFACS_1_);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1828, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTLE;
		return (EIF_REFERENCE) loc1;
	} else {
		RTCT0("False", EX_CHECK);
			RTCF0;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {EV_DRAWABLE_IMP}.our_background_brush */
EIF_REFERENCE F1952_23545 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTGC;
	tr1 = RTOUCR(285,F403_13235, (Current));
	tr2 = F1952_23543(Current);
	Result = F536_14238(RTCW(tr1), NULL, tr2);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O19494[dtype-1951])) {
		*(EIF_BOOLEAN *)(Current + O19494[dtype-1951]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + O19488[dtype-1951]) = (EIF_REFERENCE) Result;
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O19488[dtype-1951]);
		loc1 = tr1;
		if ((EIF_BOOLEAN) (EIF_TEST(loc1) && (EIF_BOOLEAN)(Result != loc1))) {
			F519_14210(loc1);
			RTAR(Current, Result);
			*(EIF_REFERENCE *)(Current + O19488[dtype-1951]) = (EIF_REFERENCE) Result;
		}
	}
	RTLE;
	return Result;
}

/* {EV_DRAWABLE_IMP}.reset_brush */
void F1952_23547 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTGC;
	{
		/* INLINED CODE (EV_DRAWABLE_IMP.get_dc) */
		/* END INLINED CODE */
	}
	;
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O19495[dtype-1951])) {
		loc3 = *(EIF_REFERENCE *)(Current + O19489[dtype-1951]);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			F519_14210(RTCW(loc3));
			*(EIF_REFERENCE *)(Current + O19489[dtype-1951]) = (EIF_REFERENCE) NULL;
		}
		tr1 = *(EIF_REFERENCE *)(Current + O19505[dtype-1951]);
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			loc1 = *(EIF_REFERENCE *)(loc4 + _REFACS_3_);
			loc1 = RTRV(eif_new_type(413, 0x00), loc1);
			RTCT0("pix_imp /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11078[Dtype(RTCW(loc1))-1871])(loc1);
			tr1 = RTOUCR(285,F403_13235, (Current));
			loc3 = F536_14238(RTCW(tr1), loc2, NULL);
			F519_14210(RTCW(loc2));
		} else {
			tr1 = RTOUCR(285,F403_13235, (Current));
			tr2 = F1952_23544(Current);
			loc3 = F536_14238(RTCW(tr1), NULL, tr2);
		}
		*(EIF_BOOLEAN *)(Current + O19495[dtype-1951]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTCT0("l_internal_brush /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTAR(Current, loc3);
	*(EIF_REFERENCE *)(Current + O19489[dtype-1951]) = (EIF_REFERENCE) loc3;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19472[dtype-1952])(Current);
	tb1 = F1306_15208(RTCW(tr1));
	if (tb1) {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19472[dtype-1952])(Current);
		F1306_15267(RTCW(tr1));
	}
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19472[dtype-1952])(Current);
	F1306_15262(RTCW(tr1), loc3);
	{
		/* INLINED CODE (EV_DRAWABLE_IMP.release_dc) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {EV_DRAWABLE_IMP}.reset_pen */
void F1952_23548 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTGC;
	{
		/* INLINED CODE (EV_DRAWABLE_IMP.get_dc) */
		/* END INLINED CODE */
	}
	;
	loc4 = *(EIF_INTEGER_32 *)(Current + O19507[dtype-1951]);
	if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
		F1952_23549(Current);
	} else {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19472[dtype-1952])(Current);
		tb1 = F1306_15207(RTCW(tr1));
		if (tb1) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19472[dtype-1952])(Current);
			F1306_15266(RTCW(tr1));
		}
		loc2 = *(EIF_REFERENCE *)(Current + O19490[dtype-1951]);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O19491[dtype-1951])) {
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				F519_14210(RTCW(loc2));
				*(EIF_REFERENCE *)(Current + O19490[dtype-1951]) = (EIF_REFERENCE) NULL;
			}
			if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 1L))) {
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			} else {
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 65536L);
			}
			if (*(EIF_BOOLEAN *)(Current + O19504[dtype-1951])) {
				ti4_1 = eif_bit_or(loc1,((EIF_INTEGER_32) 2L));
				loc1 = (EIF_INTEGER_32) ti4_1;
			}
			loc3 = RTOUCR(399,F1952_23564, (Current));
			F1381_16638(RTCW(loc3), ((EIF_INTEGER_32) 0L));
			F1381_16636(RTCW(loc3), ((EIF_INTEGER_32) 0L));
			tr1 = F1952_23544(Current);
			F1381_16637(RTCW(loc3), tr1);
			tr1 = RTOUCR(400,F403_13234, (Current));
			loc2 = F537_14240(RTCW(tr1), loc1, loc4, loc3);
			RTAR(Current, loc2);
			*(EIF_REFERENCE *)(Current + O19490[dtype-1951]) = (EIF_REFERENCE) loc2;
			*(EIF_BOOLEAN *)(Current + O19491[dtype-1951]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		RTCT0("l_internal_pen /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19472[dtype-1952])(Current);
		F1306_15261(RTCW(tr1), loc2);
	}
	{
		/* INLINED CODE (EV_DRAWABLE_IMP.release_dc) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {EV_DRAWABLE_IMP}.remove_pen */
void F1952_23549 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	{
		/* INLINED CODE (EV_DRAWABLE_IMP.get_dc) */
		/* END INLINED CODE */
	}
	;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19472[dtype-1952])(Current);
	tb1 = F1306_15207(RTCW(tr1));
	if (tb1) {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19472[dtype-1952])(Current);
		F1306_15266(RTCW(tr1));
	}
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19472[dtype-1952])(Current);
	tr2 = RTOUCR(401,F1952_23563, (Current));
	F1306_15261(RTCW(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + O19490[dtype-1951]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		*(EIF_BOOLEAN *)(Current + O19491[dtype-1951]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		F519_14210(loc1);
		*(EIF_REFERENCE *)(Current + O19490[dtype-1951]) = (EIF_REFERENCE) NULL;
	}
	{
		/* INLINED CODE (EV_DRAWABLE_IMP.release_dc) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {EV_DRAWABLE_IMP}.destroy */
void F1952_23552 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O19489[dtype-1951]);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		F519_14210(loc1);
		*(EIF_REFERENCE *)(Current + O19489[dtype-1951]) = (EIF_REFERENCE) NULL;
	}
	tr1 = *(EIF_REFERENCE *)(Current + O19490[dtype-1951]);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		F519_14210(loc2);
		*(EIF_REFERENCE *)(Current + O19490[dtype-1951]) = (EIF_REFERENCE) NULL;
	}
	tr1 = *(EIF_REFERENCE *)(Current + O19488[dtype-1951]);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		F519_14210(loc3);
		*(EIF_REFERENCE *)(Current + O19488[dtype-1951]) = (EIF_REFERENCE) NULL;
	}
	F1696_18991(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_DRAWABLE_IMP}.empty_pen */
static EIF_REFERENCE F1952_23563_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(401)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1318, 0x01).id, 1318, _OBJSIZ_0_2_0_3_0_1_0_0_);
	tr2 = F1952_23544(Current);
	F1319_15553(RTCW(tr1), ((EIF_INTEGER_32) 5L), ((EIF_INTEGER_32) 1L), tr2);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1952_23563 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(401,F1952_23563_body,(Current));
}

/* {EV_DRAWABLE_IMP}.reusable_log_brush */
static EIF_REFERENCE F1952_23564_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(399)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(1380, 0x01).id, 1380, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tr2 = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	F1829_20488(RTCW(tr2));
	F1381_16631(RTCW(tr1), ((EIF_INTEGER_32) 0L), tr2, ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1952_23564 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(399,F1952_23564_body,(Current));
}

/* {EV_DRAWABLE_IMP}.wel_set_font */
void F1952_23565 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EV_DRAWABLE_IMP}.is_gdip_installed */
static EIF_BOOLEAN F1952_23567_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRB(EIF_BOOLEAN)
	RTOUDB(EIF_BOOLEAN, 402)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(62, 0x01).id, 62, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = F63_9679(RTCW(tr1));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_BOOLEAN F1952_23567 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_BOOLEAN,402,F1952_23567_body,(Current));
}

/* {EV_DRAWABLE_IMP}.gdip_graphics */
EIF_REFERENCE F1952_23568 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tb1 = '\0';
	if (*(EIF_BOOLEAN *)(Current + O19477[dtype-1951])) {
		tb1 = RTOUCB(EIF_BOOLEAN,402,F1952_23567, (Current));
	}
	if (tb1) {
		Result = RTLNS(eif_new_type(1331, 0x01).id, 1331, _OBJSIZ_0_1_0_0_0_2_0_0_);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R19472[dtype-1952])(Current);
		F1332_15700(RTCW(Result), tr1);
		F1332_15722(RTCW(Result), ((EIF_INTEGER_32) 5L));
	}
	RTLE;
	return Result;
}

/* {EV_DRAWABLE_IMP}.gdip_pen */
EIF_REFERENCE F1952_23570 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	loc1 = F1952_23544(Current);
	Result = RTLNS(eif_new_type(1327, 0x01).id, 1327, _OBJSIZ_0_1_0_0_0_2_0_0_);
	tr1 = RTLNS(eif_new_type(30, 0x01).id, 30, _OBJSIZ_0_0_0_0_0_0_1_0_);
	ti4_1 = F1829_20494(RTCW(loc1));
	ti4_2 = F1829_20495(RTCW(loc1));
	ti4_3 = F1829_20496(RTCW(loc1));
	F31_9006(RTCW(tr1), ti4_1, ti4_2, ti4_3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O19507[dtype-1951]);
	tr4_1 = (EIF_REAL_32) (ti4_1);
	F1328_15668(RTCW(Result), tr1, tr4_1);
	if (*(EIF_BOOLEAN *)(Current + O19504[dtype-1951])) {
		F1328_15669(RTCW(Result), ((EIF_INTEGER_32) 2L));
	}
	F1328_15670(RTCW(Result), ((EIF_INTEGER_32) 2L));
	RTLE;
	return Result;
}

void EIF_Minit1935 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
