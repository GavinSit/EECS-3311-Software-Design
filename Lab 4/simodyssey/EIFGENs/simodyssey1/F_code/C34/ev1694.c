/*
 * Code for class EV_PIXEL_BUFFER_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1694.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PIXEL_BUFFER_IMP}.make */
void F1701_19049 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	if (RTOUCB(EIF_BOOLEAN,356,F1701_19072, (Current))) {
		tr1 = RTLNSMART(eif_new_type(1333, 0).id);
		F1334_15798(RTCW(tr1), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		tr1 = RTLNSMART(eif_new_type(1652, 0).id);
		F1596_17742(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	}
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_PIXEL_BUFFER_IMP}.destroy */
void F1701_19050 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	F1696_18992(Current, (EIF_BOOLEAN) 1);
	if (RTOUCB(EIF_BOOLEAN,356,F1701_19072, (Current))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			F1333_15780(loc1);
		}
	}
	F1696_18991(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_PIXEL_BUFFER_IMP}.get_pixel */
EIF_NATURAL_32 F1701_19066 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_NATURAL_32 arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTGC;
	if (RTOUCB(EIF_BOOLEAN,356,F1701_19072, (Current))) {
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		tu4_1 = F1334_15811(RTCW(loc1), arg1, arg2);
		RTLE;
		return (EIF_NATURAL_32) tu4_1;
	}
	RTLE;
	return (EIF_NATURAL_32) 0;
}

/* {EV_PIXEL_BUFFER_IMP}.is_gdi_plus_installed */
static EIF_BOOLEAN F1701_19072_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
#define Result RTOTRB(EIF_BOOLEAN)
	RTOUDB(EIF_BOOLEAN, 356)

	RTLI(1);
	RTLR(0,loc1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	loc1 = RTLNS(eif_new_type(62, 0x01).id, 62, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = F63_9679(RTCW(loc1));
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_BOOLEAN F1701_19072 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_BOOLEAN,356,F1701_19072_body,(Current));
}

void EIF_Minit1694 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
