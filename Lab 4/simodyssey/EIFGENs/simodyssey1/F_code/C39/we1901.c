/*
 * Code for class WEL_SILLY_WINDOW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1901.h"
#include <windows.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_SILLY_WINDOW}.process_message */
EIF_POINTER F1918_22840 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1025L))) {
		F1918_22841(Current, arg3);
	}
	RTLE;
	return (EIF_POINTER) 0;
}

/* {WEL_SILLY_WINDOW}.on_delayed_move_and_resize */
void F1918_22841 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,loc4);
	RTLR(4,loc5);
	RTLR(5,loc6);
	RTLR(6,tr1);
	RTLIU(7);
	
	RTGC;
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(arg1 != tp1)) {
		loc1 = RTLNS(eif_new_type(1904, 0x01).id, 1904, _OBJSIZ_0_1_0_0_0_1_0_0_);
		F1296_15096(RTCW(loc1), arg1);
		F1296_15102(RTCW(loc1));
		tb1 = '\0';
		tp1 = F1905_22298(RTCW(loc1));
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp2 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		if ((EIF_BOOLEAN)(tp1 != tp2)) {
			tp1 = F1905_22298(RTCW(loc1));
			tb1 = (EIF_BOOLEAN) EIF_TEST(IsWindow(((HWND) tp1)));
		}
		if (tb1) {
			tp1 = F1905_22298(RTCW(loc1));
			loc2 = F1898_22150(Current, tp1);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				tb2 = F1296_15099(RTCW(loc2));
				tb1 = tb2;
			}
			if (tb1) {
				loc4 = loc2;
				loc4 = RTRV(eif_new_type(1936, 0x01),loc4);
				loc5 = loc2;
				loc5 = RTRV(eif_new_type(1946, 0x01),loc5);
				if ((EIF_BOOLEAN) (EIF_TEST(loc4) || EIF_TEST(loc5))) {
					ti4_1 = F1905_22300(RTCW(loc1));
					ti4_2 = F1905_22301(RTCW(loc1));
					ti4_3 = F1905_22302(RTCW(loc1));
					ti4_4 = F1905_22303(RTCW(loc1));
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_BOOLEAN)) R18713[Dtype(RTCW(loc2))-1914])(loc2, ti4_1, ti4_2, (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L)), ti4_4, (EIF_BOOLEAN) 0);
					ti4_1 = F1905_22300(RTCW(loc1));
					ti4_2 = F1905_22301(RTCW(loc1));
					ti4_3 = F1905_22302(RTCW(loc1));
					ti4_4 = F1905_22303(RTCW(loc1));
					ti4_5 = F1905_22304(RTCW(loc1));
					ti4_5 = eif_bit_and(ti4_5,((EIF_INTEGER_32) 8L));
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_BOOLEAN)) R18713[Dtype(RTCW(loc2))-1914])(loc2, ti4_1, ti4_2, ti4_3, ti4_4, (EIF_BOOLEAN)(ti4_5 == ((EIF_INTEGER_32) 0L)));
					loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					ti4_1 = F1912_22482(RTCW(loc2));
					ti4_2 = F1905_22302(RTCW(loc1));
					if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
						ti4_1 = F1905_22302(RTCW(loc1));
						ti4_2 = F1905_22303(RTCW(loc1));
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R18749[Dtype(RTCW(loc2))-1914])(loc2, ((EIF_INTEGER_32) 0L), ti4_1, ti4_2);
						ti4_1 = F1905_22304(RTCW(loc1));
						ti4_1 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 2L));
						if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
							ti4_1 = F1905_22300(RTCW(loc1));
							ti4_2 = F1905_22301(RTCW(loc1));
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R18750[Dtype(RTCW(loc2))-1914])(loc2, ti4_1, ti4_2);
						}
						loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					}
				}
				if (loc3) {
					tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + O18635[Dtype(loc2)-1911]);
					loc6 = tr1;
					if (EIF_TEST(loc6)) {
						F1912_22563(loc6);
					}
					F1912_22563(RTCW(loc2));
				}
			}
		}
		F1296_15104(RTCW(loc1));
	}
	RTLE;
}

void EIF_Minit1901 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
