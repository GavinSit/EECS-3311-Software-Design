/*
 * Code for class WEL_MSG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1535.h"
#include <msg.h>
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

/* {WEL_MSG}.user_generated */
EIF_BOOLEAN F1397_16921 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_2_0_1_0_0_);
	switch ((EIF_INTEGER_32) cwel_msg_get_message((tp1))) {
		case 512L:
			break;
		case 522L:
			break;
		case 513L:
			break;
		case 514L:
			break;
		case 515L:
			break;
		case 519L:
			break;
		case 520L:
			break;
		case 521L:
			break;
		case 516L:
			break;
		case 517L:
			break;
		case 518L:
			break;
		case 256L:
			break;
		case 257L:
			break;
		case 260L:
			break;
		case 261L:
			break;
		default:
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			break;
	}
	RTLE;
	return Result;
}

/* {WEL_MSG}.quit */
EIF_BOOLEAN F1397_16924 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_2_0_1_0_0_);
	ti4_1 = (EIF_INTEGER_32) cwel_msg_get_message((tp1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 18L));
	RTLE;
	return Result;
}

/* {WEL_MSG}.peek_all */
void F1397_16934 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_2_0_1_0_0_);
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp2 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp3 = tp2;
	tb1 = (EIF_BOOLEAN) EIF_TEST(PeekMessage(((MSG *) tp1), ((HWND) tp3), ((UINT) ((EIF_INTEGER_32) 0L)), ((UINT) ((EIF_INTEGER_32) 0L)), ((UINT) ((EIF_INTEGER_32) 1L))));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_) = (EIF_BOOLEAN) tb1;
	RTLE;
}

/* {WEL_MSG}.dispatch */
void F1397_16936 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_2_0_1_0_0_);
	ti4_1 = (EIF_INTEGER_32) DispatchMessage(((MSG *) tp1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_2_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTLE;
}

/* {WEL_MSG}.translate */
void F1397_16937 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_2_0_1_0_0_);
	tb1 = (EIF_BOOLEAN) EIF_TEST(TranslateMessage(((MSG *) tp1)));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_) = (EIF_BOOLEAN) tb1;
	RTLE;
}

/* {WEL_MSG}.process_dialog_message */
void F1397_16942 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_2_0_1_0_0_);
	tb1 = (EIF_BOOLEAN) EIF_TEST(IsDialogMessage(((HWND) arg1), ((MSG *) tp1)));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_) = (EIF_BOOLEAN) tb1;
	RTLE;
}

/* {WEL_MSG}.structure_size */
static EIF_INTEGER_32 F1397_16943_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 366)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (MSG);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1397_16943 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,366,F1397_16943_body,(Current));
}

/* {WEL_MSG}.c_size_of_msg */
EIF_INTEGER_32 F1397_16944 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (MSG);
	return Result;
}

/* {WEL_MSG}.cwin_peek_message */
EIF_BOOLEAN F1397_16946 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(PeekMessage(((MSG *) arg1), ((HWND) arg2), ((UINT) arg3), ((UINT) arg4), ((UINT) arg5)));
	return Result;
}

/* {WEL_MSG}.cwin_translate_message */
EIF_BOOLEAN F1397_16947 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(TranslateMessage(((MSG *) arg1)));
	return Result;
}

/* {WEL_MSG}.cwin_dispatch_message */
EIF_INTEGER_32 F1397_16950 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) DispatchMessage(((MSG *) arg1));
	return Result;
}

/* {WEL_MSG}.cwin_is_dialog_message */
EIF_BOOLEAN F1397_16951 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(IsDialogMessage(((HWND) arg1), ((MSG *) arg2)));
	return Result;
}

/* {WEL_MSG}.cwel_msg_get_message */
EIF_INTEGER_32 F1397_16958 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_msg_get_message((arg1));
	return Result;
}

void EIF_Minit1535 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
