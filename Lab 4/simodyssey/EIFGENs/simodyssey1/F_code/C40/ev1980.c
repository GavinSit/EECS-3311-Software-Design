/*
 * Code for class EV_SEPARATOR_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1980.h"
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SEPARATOR_IMP}.make */
void F1997_24995 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = RTOUCR(249,F1970_24036, (Current));
	tr2 = RTMS_EX_H("EV_SEPARATOR",12,1521255762);
	F1917_22822(Current, tr1, tr2);
	F1970_24029(Current);
	F1989_24674(Current);
	F1989_24672(Current);
	RTLE;
}

/* {EV_SEPARATOR_IMP}.background_brush */
EIF_REFERENCE F1997_24996 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	if (F1296_15099(Current)) {
		Result = RTLNS(eif_new_type(1320, 0x01).id, 1320, _OBJSIZ_0_2_0_3_0_1_0_0_);
		tr1 = F1970_24145(Current);
		F1321_15590(RTCW(Result), tr1);
	}
	RTLE;
	return Result;
}

/* {EV_SEPARATOR_IMP}.default_style */
EIF_INTEGER_32 F1997_24997 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 1073741824L) + ((EIF_INTEGER_32) 268435456L)) + ((EIF_INTEGER_32) 33554432L)) + ((EIF_INTEGER_32) 67108864L));
}

/* {EV_SEPARATOR_IMP}.on_erase_background */
void F1997_24998 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1912_22507(Current);
	tp1 = (EIF_POINTER) (LRESULT)((((EIF_INTEGER_32) 1L)));
	F214_11244(Current, tp1);
	RTLE;
}

/* {EV_SEPARATOR_IMP}.on_size */
void F1997_24999 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(F1970_24039(Current) != NULL)) {
		F1912_22564(Current);
	}
	F1970_24130(Current, arg1, arg2, arg3);
	RTLE;
}

void EIF_Minit1980 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
