/*
 * Code for class WEL_ICON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1463.h"
#include <wel.h>
#include <winuser.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1324_15647
static EIF_POINTER inline_F1324_15647 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return LoadImage((HINSTANCE)arg1, MAKEINTRESOURCE(arg2), IMAGE_ICON, 0, 0, LR_SHARED | LR_DEFAULTSIZE);
	;
}
#define INLINE_F1324_15647
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_ICON}.load_item */
void F1324_15645 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = inline_F1324_15647(arg1, arg2);
	*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_3_0_0_) = (EIF_POINTER) tp1;
	RTLE;
}

/* {WEL_ICON}.destroy_resource */
EIF_BOOLEAN F1324_15646 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_2_0_3_0_0_);
	return (EIF_BOOLEAN) (EIF_BOOLEAN) EIF_TEST(DestroyIcon(((HICON) tp1)));
}

/* {WEL_ICON}.cwin_load_icon_image */
EIF_POINTER F1324_15647 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F1324_15647 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
	return Result;
}

/* {WEL_ICON}.cwin_destroy_icon */
EIF_BOOLEAN F1324_15648 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(DestroyIcon(((HICON) arg1)));
	return Result;
}

void EIF_Minit1463 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
