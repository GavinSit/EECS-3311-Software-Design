/*
 * Code for class WEL_FONT_FAMILY_ENUMERATOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1432.h"
#include "windows.h"
#include "../C29/we1432.h"
#include "enumfont.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_FONT_FAMILY_ENUMERATOR}.make */
void F1286_15057 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTGC;
	cwel_set_enum_font_fam_procedure_address(((EIF_POINTER) F1286_15062));
	F1286_15065(Current, Current);
	F1286_15061(Current, arg1, arg2);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	cwel_set_enum_font_fam_procedure_address((tp2));
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	tr1 = RTLNS(eif_new_type(1550, 0x00).id, 1550, _OBJSIZ_0_0_0_0_0_1_0_0_);
	*(EIF_POINTER *)tr1 = tp2;
	cwel_set_font_family_enumerator_object((tr1));
	RTLE;
}

/* {WEL_FONT_FAMILY_ENUMERATOR}.init_action */
void F1286_15059 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_FONT_FAMILY_ENUMERATOR}.finish_action */
void F1286_15060 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_FONT_FAMILY_ENUMERATOR}.enumerate */
void F1286_15061 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,loc2);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	{
		/* INLINED CODE (WEL_FONT_FAMILY_ENUMERATOR.init_action) */
		/* END INLINED CODE */
	}
	;
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		loc2 = RTLNS(eif_new_type(944, 0x01).id, 944, _OBJSIZ_1_0_0_1_0_0_0_0_);
		F944_3738(RTCW(loc2), arg2);
		loc1 = F944_3745(RTCW(loc2));
	}
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	tp2 = (EIF_POINTER) cwel_enum_font_fam_procedure;
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp3 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp4 = tp3;
	EnumFontFamilies(((HDC) tp1), ((LPCTSTR) loc1), ((FONTENUMPROC) tp2), ((LPARAM) tp4));
	{
		/* INLINED CODE (WEL_FONT_FAMILY_ENUMERATOR.finish_action) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {WEL_FONT_FAMILY_ENUMERATOR}.update_current */
void F1286_15062 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1384, 0x01).id, 1384, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1385_16695(RTCW(loc1), arg1);
	loc2 = RTLNS(eif_new_type(1403, 0x01).id, 1403, _OBJSIZ_0_1_0_0_0_1_0_0_);
	F1296_15096(RTCW(loc2), arg2);
	F1287_15073(Current, loc1, loc2, arg3);
	RTLE;
}

/* {WEL_FONT_FAMILY_ENUMERATOR}.dispose */
void F1286_15063 (EIF_REFERENCE Current)
{
	GTCX
	
	
	cwel_release_font_family_enumerator_object;
}

/* {WEL_FONT_FAMILY_ENUMERATOR}.cwel_set_enum_font_fam_procedure_address */
void F1286_15064 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	cwel_set_enum_font_fam_procedure_address((arg1));
}

/* {WEL_FONT_FAMILY_ENUMERATOR}.cwel_set_font_family_enumerator_object */
void F1286_15065 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	RTLIU(1);
	
	{
		EIF_OBJECT larg1 = &arg1;
		cwel_set_font_family_enumerator_object((larg1));
	}
	RTLE;
}

/* {WEL_FONT_FAMILY_ENUMERATOR}.cwel_release_font_family_enumerator_object */
void F1286_15066 (EIF_REFERENCE Current)
{
	GTCX
	
	
	cwel_release_font_family_enumerator_object;
}

/* {WEL_FONT_FAMILY_ENUMERATOR}.cwel_enum_font_fam_procedure */
EIF_POINTER F1286_15067 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_enum_font_fam_procedure;
	return Result;
}

/* {WEL_FONT_FAMILY_ENUMERATOR}.cwin_enum_font_families */
void F1286_15068 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	
	
	EnumFontFamilies(((HDC) arg1), ((LPCTSTR) arg2), ((FONTENUMPROC) arg3), ((LPARAM) arg4));
}

void EIF_Minit1432 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
