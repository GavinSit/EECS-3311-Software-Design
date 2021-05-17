/*
 * Code for class WEL_GRAPHICAL_RESOURCE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1462.h"
#include <wel.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_GRAPHICAL_RESOURCE}.make_by_icon_info */
void F1323_15632 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_2_2_0_2_0_0_);
	tp1 = (EIF_POINTER) CreateIconIndirect(((ICONINFO *) tp1));
	*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_3_0_0_) = (EIF_POINTER) tp1;
	{
		/* INLINED CODE (WEL_GDI_ANY.gdi_make) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {WEL_GRAPHICAL_RESOURCE}.make_by_predefined_id */
void F1323_15635 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1314_15473(Current, arg1);
	{
		/* INLINED CODE (WEL_GDI_ANY.gdi_make) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {WEL_GRAPHICAL_RESOURCE}.get_icon_info */
EIF_REFERENCE F1323_15636 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1398, 0x01).id, 1398, _OBJSIZ_2_2_0_2_0_1_0_0_);
	F1337_15830(RTCW(loc1));
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_2_0_3_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_2_2_0_2_0_0_);
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) GetIconInfo(((HICON) tp1), ((ICONINFO *) tp2)) != ((EIF_INTEGER_32) 0L))) {
		F1399_16979(RTCW(loc1));
		RTLE;
		return (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) 0;
}

/* {WEL_GRAPHICAL_RESOURCE}.delete_gdi_object */
void F1323_15638 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_3_0_0_) != loc1)) {
		loc2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R13030[Dtype(Current)-1323])(Current);
		if ((EIF_BOOLEAN) !loc2) {
		}
		*(EIF_POINTER *)(Current+ _PTROFF_0_2_0_3_0_0_) = (EIF_POINTER) loc1;
	}
	RTLE;
}

/* {WEL_GRAPHICAL_RESOURCE}.cwin_get_icon_info */
EIF_INTEGER_32 F1323_15642 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GetIconInfo(((HICON) arg1), ((ICONINFO *) arg2));
	return Result;
}

/* {WEL_GRAPHICAL_RESOURCE}.cwin_create_icon_indirect */
EIF_POINTER F1323_15643 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) CreateIconIndirect(((ICONINFO *) arg1));
	return Result;
}

void EIF_Minit1462 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
