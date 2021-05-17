/*
 * Code for class WEL_WND_CLASS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1524.h"
#include <string.h>
#include <wndclass.h>
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

/* {WEL_WND_CLASS}.make */
void F1386_16704 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	F1337_15830(Current);
	F1386_16716(Current, ((EIF_INTEGER_32) 0L));
	F1386_16726(Current);
	F1386_16719(Current, ((EIF_INTEGER_32) 0L));
	F1386_16717(Current, ((EIF_INTEGER_32) 0L));
	tr1 = RTOUCR(281,F217_11264, (RTCV(RTOUCR(424,F1386_16743, (Current)))));
	F1386_16718(Current, tr1);
	F1386_16727(Current);
	F1386_16728(Current);
	F1386_16729(Current);
	F1386_16730(Current);
	F1386_16724(Current, arg1);
	RTLE;
}

/* {WEL_WND_CLASS}.set_style */
void F1386_16716 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
	cwel_wnd_class_set_style((tp1), (arg1));
}

/* {WEL_WND_CLASS}.set_window_extra */
void F1386_16717 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
	cwel_wnd_class_set_wnd_extra((tp1), (arg1));
}

/* {WEL_WND_CLASS}.set_instance */
void F1386_16718 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_0_0_0_);
	cwel_wnd_class_set_instance((tp1), (tp2));
	RTLE;
}

/* {WEL_WND_CLASS}.set_class_extra */
void F1386_16719 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
	cwel_wnd_class_set_cls_extra((tp1), (arg1));
}

/* {WEL_WND_CLASS}.set_window_procedure */
void F1386_16720 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
	cwel_wnd_class_set_wnd_proc((tp1), (arg1));
}

/* {WEL_WND_CLASS}.set_icon */
void F1386_16721 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_2_0_3_0_0_);
	cwel_wnd_class_set_icon((tp1), (tp2));
	F1296_15101(RTCW(arg1));
	RTLE;
}

/* {WEL_WND_CLASS}.set_cursor */
void F1386_16722 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_2_0_3_0_0_);
	cwel_wnd_class_set_cursor((tp1), (tp2));
	F1296_15101(RTCW(arg1));
	RTLE;
}

/* {WEL_WND_CLASS}.set_background */
void F1386_16723 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_2_0_3_0_0_);
	cwel_wnd_class_set_background((tp1), (tp2));
	RTLE;
}

/* {WEL_WND_CLASS}.set_class_name */
void F1386_16724 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
	tp2 = F944_3745(RTCW(loc1));
	cwel_wnd_class_set_class_name((tp1), (tp2));
	RTLE;
}

/* {WEL_WND_CLASS}.set_menu_name */
void F1386_16725 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
	tp2 = F944_3745(RTCW(loc1));
	cwel_wnd_class_set_menu_name((tp1), (tp2));
	RTLE;
}

/* {WEL_WND_CLASS}.unset_window_procedure */
void F1386_16726 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp3 = tp2;
	cwel_wnd_class_set_wnd_proc((tp1), (tp3));
	RTLE;
}

/* {WEL_WND_CLASS}.unset_icon */
void F1386_16727 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp3 = tp2;
	cwel_wnd_class_set_icon((tp1), (tp3));
	RTLE;
}

/* {WEL_WND_CLASS}.unset_cursor */
void F1386_16728 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp3 = tp2;
	cwel_wnd_class_set_cursor((tp1), (tp3));
	RTLE;
}

/* {WEL_WND_CLASS}.unset_background */
void F1386_16729 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp3 = tp2;
	cwel_wnd_class_set_background((tp1), (tp3));
	RTLE;
}

/* {WEL_WND_CLASS}.unset_menu_name */
void F1386_16730 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp3 = tp2;
	cwel_wnd_class_set_menu_name((tp1), (tp3));
	RTLE;
}

/* {WEL_WND_CLASS}.registered */
EIF_BOOLEAN F1386_16731 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	ti4_1 = RTOUCB(EIF_INTEGER_32,425,F1386_16740, (Current));
	tp1 = calloc((size_t)((EIF_INTEGER_32) 1L), (size_t) ti4_1);
	loc1 = (EIF_POINTER) tp1;
	if ((EIF_BOOLEAN)(loc1 != loc2)) {
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_0_) == ((EIF_INTEGER_32) 0L))) {
			Result = '\01';
			{
				/* INLINED CODE (ANY.default_pointer) */
				tp1 = (EIF_POINTER)  0;
				/* END INLINED CODE */
			}
			tp2 = tp1;
			tp3 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
			tp3 = (EIF_POINTER) cwel_wnd_class_get_class_name(((WNDCLASS*) tp3));
			if (!(EIF_BOOLEAN) EIF_TEST(GetClassInfo(((HINSTANCE) tp2), ((LPCTSTR) tp3), ((WNDCLASS *) loc1)))) {
				tr1 = RTOUCR(281,F217_11264, (RTCV(RTOUCR(424,F1386_16743, (Current)))));
				tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
				tp2 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
				tp2 = (EIF_POINTER) cwel_wnd_class_get_class_name(((WNDCLASS*) tp2));
				Result = (EIF_BOOLEAN) EIF_TEST(GetClassInfo(((HINSTANCE) tp1), ((LPCTSTR) tp2), ((WNDCLASS *) loc1)));
			}
		} else {
			Result = '\01';
			{
				/* INLINED CODE (ANY.default_pointer) */
				tp1 = (EIF_POINTER)  0;
				/* END INLINED CODE */
			}
			tp2 = tp1;
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_0_);
			tp3 = (EIF_POINTER) cwel_integer_to_pointer(((EIF_INTEGER) ti4_1));
			if (!(EIF_BOOLEAN) EIF_TEST(GetClassInfo(((HINSTANCE) tp2), ((LPCTSTR) tp3), ((WNDCLASS *) loc1)))) {
				tr1 = RTOUCR(281,F217_11264, (RTCV(RTOUCR(424,F1386_16743, (Current)))));
				tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_0_0_0_);
				ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_0_);
				tp2 = (EIF_POINTER) cwel_integer_to_pointer(((EIF_INTEGER) ti4_1));
				Result = (EIF_BOOLEAN) EIF_TEST(GetClassInfo(((HINSTANCE) tp1), ((LPCTSTR) tp2), ((WNDCLASS *) loc1)));
			}
		}
		free(loc1);
	}
	RTLE;
	return Result;
}

/* {WEL_WND_CLASS}.register */
void F1386_16738 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_1_0_1_0_0_);
	ti4_1 = (EIF_INTEGER_32) RegisterClass(((WNDCLASS *) tp1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {WEL_WND_CLASS}.structure_size */
static EIF_INTEGER_32 F1386_16740_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 425)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (WNDCLASS);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1386_16740 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,425,F1386_16740_body,(Current));
}

/* {WEL_WND_CLASS}.main_args */
static EIF_REFERENCE F1386_16743_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(424)

	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTEV;
	RTGC;
	RTOTP;
	tr1 = RTLNS(eif_new_type(216, 0x01).id, 216, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1386_16743 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(424,F1386_16743_body,(Current));
}

/* {WEL_WND_CLASS}.c_size_of_wnd_class */
EIF_INTEGER_32 F1386_16744 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (WNDCLASS);
	return Result;
}

/* {WEL_WND_CLASS}.cwel_wnd_class_set_style */
void F1386_16745 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_wnd_class_set_style((arg1), (arg2));
}

/* {WEL_WND_CLASS}.cwel_wnd_class_set_wnd_extra */
void F1386_16746 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_wnd_class_set_wnd_extra((arg1), (arg2));
}

/* {WEL_WND_CLASS}.cwel_wnd_class_set_cls_extra */
void F1386_16747 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_wnd_class_set_cls_extra((arg1), (arg2));
}

/* {WEL_WND_CLASS}.cwel_wnd_class_set_instance */
void F1386_16748 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_wnd_class_set_instance((arg1), (arg2));
}

/* {WEL_WND_CLASS}.cwel_wnd_class_set_wnd_proc */
void F1386_16749 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_wnd_class_set_wnd_proc((arg1), (arg2));
}

/* {WEL_WND_CLASS}.cwel_wnd_class_set_icon */
void F1386_16750 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_wnd_class_set_icon((arg1), (arg2));
}

/* {WEL_WND_CLASS}.cwel_wnd_class_set_background */
void F1386_16751 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_wnd_class_set_background((arg1), (arg2));
}

/* {WEL_WND_CLASS}.cwel_wnd_class_set_cursor */
void F1386_16752 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_wnd_class_set_cursor((arg1), (arg2));
}

/* {WEL_WND_CLASS}.cwel_wnd_class_set_class_name */
void F1386_16753 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_wnd_class_set_class_name((arg1), (arg2));
}

/* {WEL_WND_CLASS}.cwel_wnd_class_set_menu_name */
void F1386_16754 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_wnd_class_set_menu_name((arg1), (arg2));
}

/* {WEL_WND_CLASS}.cwel_wnd_class_get_class_name */
EIF_POINTER F1386_16764 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_wnd_class_get_class_name(((WNDCLASS*) arg1));
	return Result;
}

/* {WEL_WND_CLASS}.cwin_register_class */
EIF_INTEGER_32 F1386_16765 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) RegisterClass(((WNDCLASS *) arg1));
	return Result;
}

/* {WEL_WND_CLASS}.cwin_get_class_info */
EIF_BOOLEAN F1386_16767 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(GetClassInfo(((HINSTANCE) arg1), ((LPCTSTR) arg2), ((WNDCLASS *) arg3)));
	return Result;
}

void EIF_Minit1524 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
