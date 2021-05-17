/*
 * Code for class EV_SHARED_GDI_OBJECTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1287.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SHARED_GDI_OBJECTS}.allocated_pens */
static EIF_REFERENCE F403_13234_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(400)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(536, 0x01).id, 536, _OBJSIZ_1_0_0_5_0_0_0_0_);
	F276_12006(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F403_13234 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(400,F403_13234_body,(Current));
}

/* {EV_SHARED_GDI_OBJECTS}.allocated_brushes */
static EIF_REFERENCE F403_13235_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(285)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(535, 0x01).id, 535, _OBJSIZ_1_0_0_5_0_0_0_0_);
	F276_12006(RTCW(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F403_13235 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(285,F403_13235_body,(Current));
}

void EIF_Minit1287 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
