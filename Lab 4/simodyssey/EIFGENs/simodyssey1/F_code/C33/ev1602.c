/*
 * Code for class EV_APPLICATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1602.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_APPLICATION}.initialize */
void F1607_17970 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(105, 0x01).id, 105, _OBJSIZ_0_0_0_0_0_0_0_0_);
	F106_43(RTCW(loc1));
	F1607_17999(Current, ((EIF_INTEGER_32) 500L));
	F1596_17751(Current);
	RTLE;
}

/* {EV_APPLICATION}.windows */
EIF_REFERENCE F1607_17971 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = F1910_22403(RTCW(tr1));
	RTLE;
	return Result;
}

/* {EV_APPLICATION}.locked_window */
EIF_REFERENCE F1607_17972 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_27_);
	RTLE;
	return Result;
}

/* {EV_APPLICATION}.launch */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1607_17981 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	RTS_SDC;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	RTLD;
	RTXD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,saved_except);
	RTLIU(4);
	RTXSLS;
	
	RTEV;
	RTGC;
	RTE_T
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tr1 = RTLNSMART(eif_new_type(514, 4).id);
	RTS_PA (tr1);
	RTS_AC (1, tr1);
	RTS_AA (Current, it_r, SK_REF, 1);
	RTS_CALL (F515_14180, eif_scr6, 0, NULL);
	loc1 = (EIF_REFERENCE) tr1;
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) loc1;
	F1607_18010(Current, loc1);
	RTE_E
	RTXSC;
	RTS_SRR
	*(EIF_BOOLEAN *)(Current+ _CHROFF_4_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	/* NOTREACHED */
	RTE_EE
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {EV_APPLICATION}.tooltip_delay */
EIF_INTEGER_32 F1607_17990 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_48_14_0_6_);
	RTLE;
	return Result;
}

/* {EV_APPLICATION}.set_tooltip_delay */
void F1607_17999 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1910_22429(RTCW(tr1), arg1);
	RTLE;
}

/* {EV_APPLICATION}.register_window */
void F1607_18004 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTGC;
	tb1 = '\0';
	tb2 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb3 = F951_4085(RTCW(tr1), arg1);
	if ((EIF_BOOLEAN) !tb3) {
		tb3 = F1596_17746(RTCW(arg1));
		tb2 = (EIF_BOOLEAN) !tb3;
	}
	if (tb2) {
		tb2 = F1632_18307(RTCW(arg1));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2222[Dtype(RTCW(tr1))-818])(tr1, arg1);
	}
	RTLE;
}

/* {EV_APPLICATION}.unregister_window */
void F1607_18005 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	tb1 = '\01';
	tb2 = F1596_17746(RTCW(arg1));
	if (!tb2) {
		tb2 = F1632_18307(RTCW(arg1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		F951_4104(RTCW(tr1));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		F951_4126(RTCW(tr1), arg1);
	}
	RTLE;
}

/* {EV_APPLICATION}.implementation */
EIF_REFERENCE F1607_18007 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EV_APPLICATION}.create_interface_objects */
void F1607_18008 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_APPLICATION}.create_implementation */
void F1607_18009 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1605, 0x01).id, 1605, _OBJSIZ_2_0_0_0_0_0_0_0_);
	F1596_17742(RTCW(loc1));
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr1 = F1713_19262(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,0xFF01,1642,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	F951_4073(RTCW(tr1), ((EIF_INTEGER_32) 1L));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {EV_APPLICATION}.internal_launch_application */
void F1607_18010 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	F1714_19357(RTCW(tr1));
	if (RTS_CI (EIF_FALSE, arg1)) {
		RTS_BI (arg1);
		F515_14181(RTCW(arg1));
		RTS_EI;
	} else {
		RTS_AC (0, arg1);
		RTS_CALL (F515_14181, eif_scr7, 0, NULL);
	}
	if (uarg) {
		RTS_RD;
	}
	RTLE;
}

void EIF_Minit1602 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
