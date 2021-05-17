/*
 * Code for class EV_TEXTABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1617.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TEXTABLE}.make_with_text */
void F1622_18114 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	F1596_17742(Current);
	F1622_18116(Current, arg1);
	RTLE;
}

/* {EV_TEXTABLE}.text */
EIF_REFERENCE F1622_18115 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O15014[Dtype(Current)-1595]);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R16471[Dtype(RTCW(tr1))-1809])(tr1);
	RTLE;
	return Result;
}

/* {EV_TEXTABLE}.set_text */
void F1622_18116 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	if (uarg) {
		for (;;) {
			int has_wait_condition = 0;
			RTCT("not_destroyed", EX_PRE);
			RTTE((EIF_BOOLEAN) !(FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R15013[dtype-1596])(Current), label_1);
			RTCK;
			RTCT("a_text_not_void", EX_PRE);
			RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
			RTCK;
			RTCT("no_carriage_returns", EX_PRE);
			tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '\015';
			if (RTS_CI (EIF_TRUE, arg1)) {
				RTS_BI (arg1);
				tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_NATURAL_32)) R4663[Dtype(RTCW(arg1))-1560])(arg1, tu4_1);
				RTS_EI;
			} else {
				RTS_AC (1, arg1);
				RTS_AA (tu4_1, it_n4, SK_UINT32, 1);
				RTS_CALL (R4663[Dtype(arg1)-1560], eif_scr10, 0, &(tb1));
			}
			has_wait_condition = uarg1;
			RTTE((EIF_BOOLEAN) !tb1, label_1);
			RTCK;
			has_wait_condition = 0;
			RTJB;
label_1:
			if (!has_wait_condition) break;
			RTCK;
			RTS_RF;
		}
		RTCF;
	}
body:;
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(1557, 0x01),loc1);
	if ((loc1) && RTS_OS (Current, loc1)) loc1 = (EIF_REFERENCE) 0;
	if (EIF_TEST(loc1)) {
		tr1 = *(EIF_REFERENCE *)(Current + O15014[dtype-1595]);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16472[Dtype(RTCW(tr1))-1809])(tr1, loc1);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + O15014[dtype-1595]);
		tr2 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
		F1564_6854(RTCW(tr2), arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R16472[Dtype(RTCW(tr1))-1809])(tr1, tr2);
	}
	if (uarg) {
		RTS_RD;
	}
	RTLE;
}

void EIF_Minit1617 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
