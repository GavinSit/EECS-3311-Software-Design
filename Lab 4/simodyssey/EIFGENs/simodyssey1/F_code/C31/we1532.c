/*
 * Code for class WEL_MENU_BAR_INFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1532.h"
#include <windows.h>
#include <rect.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1394_16889
static EIF_POINTER inline_F1394_16889 (EIF_POINTER arg1)
{
	return (EIF_POINTER) ((& (((MENUBARINFO *)(arg1))->rcBar) ))
	;
}
#define INLINE_F1394_16889
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_MENU_BAR_INFO}.make */
void F1394_16884 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) sizeof (MENUBARINFO);
	(((MENUBARINFO *)tp1)->cbSize = (DWORD)(ti4_1));
	RTLE;
}

/* {WEL_MENU_BAR_INFO}.rc_bar */
EIF_REFERENCE F1394_16885 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(1407, 0x01).id, 1407, _OBJSIZ_0_1_0_0_0_1_0_0_);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp1 = inline_F1394_16889(tp1);
	F1296_15096(RTCW(Result), tp1);
	RTLE;
	return Result;
}

/* {WEL_MENU_BAR_INFO}.structure_size */
static EIF_INTEGER_32 F1394_16886_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 403)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (MENUBARINFO);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1394_16886 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,403,F1394_16886_body,(Current));
}

/* {WEL_MENU_BAR_INFO}.c_size_of_menubarinfo */
EIF_INTEGER_32 F1394_16887 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (MENUBARINFO);
	return Result;
}

/* {WEL_MENU_BAR_INFO}.cwel_menubarinfo_set_cbsize */
void F1394_16888 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((MENUBARINFO *)arg1)->cbSize = (DWORD)(arg2));
	
}

/* {WEL_MENU_BAR_INFO}.cwel_menubarinfo_get_rcbar */
EIF_POINTER F1394_16889 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F1394_16889 ((EIF_POINTER) arg1);
	return Result;
}

void EIF_Minit1532 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
