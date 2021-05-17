/*
 * Code for class WEL_TOOLTIP_TEXT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1529.h"
#include <tooltipt.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TOOLTIP_TEXT}.make_by_nmhdr */
void F1391_16829 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	F1296_15096(Current, tp1);
	RTLE;
}

/* {WEL_TOOLTIP_TEXT}.set_text */
void F1391_16835 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNSMART(eif_new_type(944, 0).id);
	F944_3738(RTCW(loc1), arg1);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_1_1_0_0_0_0_);
	tp2 = F944_3745(RTCW(loc1));
	cwel_tooltiptext_set_lpsztext((tp1), (tp2));
	RTLE;
}

/* {WEL_TOOLTIP_TEXT}.structure_size */
static EIF_INTEGER_32 F1391_16840_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 408)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (TOOLTIPTEXT);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1391_16840 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,408,F1391_16840_body,(Current));
}

/* {WEL_TOOLTIP_TEXT}.c_size_of_tooltiptext */
EIF_INTEGER_32 F1391_16843 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (TOOLTIPTEXT);
	return Result;
}

/* {WEL_TOOLTIP_TEXT}.cwel_tooltiptext_set_lpsztext */
void F1391_16845 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_tooltiptext_set_lpsztext((arg1), (arg2));
}

void EIF_Minit1529 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
