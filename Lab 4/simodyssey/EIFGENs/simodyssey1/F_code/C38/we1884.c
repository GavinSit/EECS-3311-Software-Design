/*
 * Code for class WEL_WINDOW_ENUMERATOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1884.h"
#include <windows.h>
#include "wel_enum_child_windows.h"
#include "../C38/we1884.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_WINDOW_ENUMERATOR}.enumerate */
EIF_REFERENCE F1901_22218 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O12527[Dtype(arg1)-1295]);
	Result = F1901_22219(Current, tp1);
	RTLE;
	return Result;
}

/* {WEL_WINDOW_ENUMERATOR}.enumerate_hwnd */
EIF_REFERENCE F1901_22219 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1911,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 950, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	F951_4073(RTCW(Result), ((EIF_INTEGER_32) 1L));
	RTAR(Current, Result);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) Result;
	F1901_22226(Current, Current, (EIF_POINTER) F1901_22224, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) NULL;
	RTLE;
	return Result;
}

/* {WEL_WINDOW_ENUMERATOR}.enumerate_child_windows_callback */
void F1901_22224 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		if ((EIF_BOOLEAN) EIF_TEST(IsWindow(((HWND) arg1)))) {
			loc1 = F1898_22150(Current, arg1);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				tb2 = F1296_15099(RTCW(loc1));
				tb1 = tb2;
			}
			if (tb1) {
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(loc2)-818])(loc2, loc1);
			}
		}
	}
	RTLE;
}

/* {WEL_WINDOW_ENUMERATOR}.cwel_enum_child_windows_procedure */
void F1901_22226 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,arg1);
	RTLIU(1);
	
	{
		EIF_OBJECT larg1 = &arg1;
		EIF_POINTER larg2 = arg2;
		EIF_POINTER larg3 = arg3;cwel_enum_child_windows_procedure((EIF_OBJECT) larg1, (EIF_POINTER) larg2, (HWND) larg3);
		
	}
	RTLE;
}

void EIF_Minit1884 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
