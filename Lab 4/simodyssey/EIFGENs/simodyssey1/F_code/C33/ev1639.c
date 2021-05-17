/*
 * Code for class EV_TITLED_WINDOW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1639.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TITLED_WINDOW}.initialize */
void F1645_18495 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTOUCR(223,F71_9841, (RTCV(RTOUCR(224,F1295_15095, (Current)))));
	F1645_18507(Current, tr1);
	F1643_18452(Current);
	RTLE;
}

/* {EV_TITLED_WINDOW}.raise */
void F1645_18500 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F1984_24559(RTCW(tr1));
	RTLE;
}

/* {EV_TITLED_WINDOW}.set_icon_pixmap */
void F1645_18507 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	F1984_24566(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_TITLED_WINDOW}.implementation */
EIF_REFERENCE F1645_18508 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EV_TITLED_WINDOW}.create_implementation */
void F1645_18509 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1983, 0x01).id, 1983, _OBJSIZ_77_30_6_12_0_3_0_3_);
	F1984_24549(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit1639 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
