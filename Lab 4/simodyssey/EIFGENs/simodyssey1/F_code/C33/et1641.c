/*
 * Code for class ETF_MAIN_WINDOW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1641.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_MAIN_WINDOW}.user_create_interface_objects */
void F1647_18552 (EIF_REFERENCE Current)
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
	tr1 = RTLNSMART(eif_new_type(76, 1).id);
	F77_9912(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_32_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1291, 1).id);
	tr2 = RTOUCR(189,F1647_18556, (Current));
	F1291_4901(RTCW(tr1), tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_33_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_16_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_32_);
	tr2 = *(EIF_REFERENCE *)(RTCW(tr2));
	tr2 = F101_10090(RTCW(tr2));
	F1659_18687(RTCW(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_17_);
	tr2 = RTMS_EX_H("List of commands: \012",19,1672378378);
	F1659_18687(RTCW(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_17_);
	tr2 = RTMS_EX_H("================= \012",19,1331660554);
	F1659_18687(RTCW(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_17_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_32_);
	tr2 = RTOUCR(190,F77_9915, (RTCW(tr2)));
	F1659_18687(RTCW(tr1), tr2);
	RTLE;
}

/* {ETF_MAIN_WINDOW}.user_initialization */
void F1647_18553 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {ETF_MAIN_WINDOW}.session_file_path */

EIF_REFERENCE F1647_18556 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (189,RTMS_EX_H("./session.txt",13,1379049588));
}

/* {ETF_MAIN_WINDOW}.clear_display */
void F1647_18557 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_16_);
	tr2 = RTMS_EX_H("",0,0);
	F1622_18116(RTCW(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_17_);
	tr2 = RTMS_EX_H("",0,0);
	F1622_18116(RTCW(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tr2 = RTMS_EX_H("",0,0);
	F1622_18116(RTCW(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
	tr2 = RTMS_EX_H("",0,0);
	F1622_18116(RTCW(tr1), tr2);
	RTLE;
}

/* {ETF_MAIN_WINDOW}.display_history */
void F1647_18558 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R2292[Dtype(RTCW(arg1))-911])(arg1);
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2306[Dtype(RTCW(arg1))-911])(arg1);
		if (tb1) break;
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2258[Dtype(RTCW(arg1))-818])(arg1);
		F1659_18688(RTCW(tr1), tr2);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[Dtype(RTCW(arg1))-818])(arg1);
		if ((EIF_BOOLEAN) (loc1 < ti4_1)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_18_);
			tr2 = RTMS_EX_H("\012",1,10);
			F1659_18688(RTCW(tr1), tr2);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R2308[Dtype(RTCW(arg1))-911])(arg1);
		loc1++;
	}
	RTLE;
}

/* {ETF_MAIN_WINDOW}.command_return_key_pressed */
void F1647_18559 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1647_18560(Current);
}

/* {ETF_MAIN_WINDOW}.execute_pressed */
void F1647_18560 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
	tr1 = F1622_18115(RTCW(tr1));
	loc1 = F1558_6566(RTCW(tr1));
	F1647_18563(Current, loc1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_32_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_8_0_);
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_32_);
		tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_3_);
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[Dtype(RTCW(tr1))-818])(tr1);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
			F1291_5033(RTCW(tr1));
		}
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
		F1291_4973(RTCW(tr1));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
		tr2 = RTMS_EX_H("\012",1,10);
		tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(loc1))-1560])(loc1, tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3562[Dtype(RTCW(tr1))-1291])(tr1, tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_33_);
		F1291_4988(RTCW(tr1));
	}
	RTLE;
}

/* {ETF_MAIN_WINDOW}.reset_pressed */
void F1647_18561 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_32_);
	F77_9914(RTCW(tr1));
	F1647_18557(Current);
	RTLE;
}

/* {ETF_MAIN_WINDOW}.load_pressed */
void F1647_18562 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(101, 0x01).id, 101, _OBJSIZ_2_1_0_0_0_0_0_0_);
	tr1 = RTOUCR(189,F1647_18556, (Current));
	F102_10096(RTCW(loc1), tr1);
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_2_0_);
	if (tb1) {
		F1647_18557(Current);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_17_);
		tr2 = *(EIF_REFERENCE *)(RTCW(loc1));
		F1659_18687(RTCW(tr1), tr2);
	} else {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_32_);
		tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_3_);
		tb1 = F736_2537(RTCW(tr1));
		if ((EIF_BOOLEAN) !tb1) {
			F1647_18561(Current);
		}
		F102_10097(RTCW(loc1));
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2163[Dtype(RTCW(tr1))-849])(tr1);
		loc2 = (EIF_REFERENCE) tr1;
		for (;;) {
			tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3146[Dtype(loc2)-1026])(loc2);
			if (tb1) break;
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc2)-1026])(loc2);
			F1647_18563(Current, tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R3147[Dtype(loc2)-1026])(loc2);
		}
	}
	RTLE;
}

/* {ETF_MAIN_WINDOW}.execute_command */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1647_18563 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTLD;
	RTXD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,arg1);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLR(8,saved_except);
	RTLIU(9);
	RTXSLS;
	
	RTEV;
	RTGC;
	RTE_T
	tr1 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(tr1));
	loc1 = (EIF_REFERENCE) tr1;
	if ((EIF_BOOLEAN) !loc2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_32_);
		F77_9913(RTCW(tr1), arg1);
		F1647_18557(Current);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_32_);
		tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_3_);
		F1647_18558(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_17_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_32_);
		tr2 = *(EIF_REFERENCE *)(RTCW(tr2) + _REFACS_1_);
		F1659_18687(RTCW(tr1), tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_16_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_32_);
		tr2 = *(EIF_REFERENCE *)(RTCW(tr2) + _REFACS_2_);
		F1659_18687(RTCW(tr1), tr2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_32_);
		tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_8_0_);
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_12_);
			F1622_18116(RTCW(tr1), arg1);
		}
	} else {
		tr1 = RTMS_EX_H("\012There was a problem:\012",22,2119957514);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc1))-1560])(loc1, tr1);
		ti4_1 = F463_1392(Current);
		tr1 = F463_1382(Current, ti4_1);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			tr1 = RTMS_EX_H("  ",2,8224);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, loc3);
			tr2 = RTMS_EX_H("\012",1,10);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc1))-1560])(loc1, tr1);
		}
		tr1 = F463_1389(Current);
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			tr1 = RTMS_EX_H("  Tag: ",7,624003616);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, loc4);
			tr2 = RTMS_EX_H("\012",1,10);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc1))-1560])(loc1, tr1);
		}
		tr1 = F463_1393(Current);
		loc5 = tr1;
		if (EIF_TEST(loc5)) {
			tr1 = RTMS_EX_H("\012Here is the stack trace\012",25,1258650890);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc1))-1560])(loc1, tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc1))-1560])(loc1, loc5);
			tr1 = RTMS_EX_H("\012End of stack trace...\012",23,1629292298);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc1))-1560])(loc1, tr1);
		}
		F1647_18557(Current);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_32_);
		tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_3_);
		F1647_18558(Current, tr1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_17_);
		F1659_18687(RTCW(tr1), loc1);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_16_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_32_);
		tr2 = *(EIF_REFERENCE *)(RTCW(tr2) + _REFACS_2_);
		F1659_18687(RTCW(tr1), tr2);
	}
	RTE_E
	RTXSC;
	RTS_SRR
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

void EIF_Minit1641 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
