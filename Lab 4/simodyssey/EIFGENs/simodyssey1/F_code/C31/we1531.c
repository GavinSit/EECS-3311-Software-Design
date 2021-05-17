/*
 * Code for class WEL_TRACK_MOUSE_EVENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1531.h"
#include "trackmouseevent.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TRACK_MOUSE_EVENT}.make */
void F1393_16866 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	ti4_1 = RTOUCB(EIF_INTEGER_32,405,F1393_16871, (Current));
	cwel_trackmouseevent_set_cbsize(((TRACKMOUSEEVENT*) tp1), ((DWORD) ti4_1));
	RTLE;
}

/* {WEL_TRACK_MOUSE_EVENT}.structure_size */
static EIF_INTEGER_32 F1393_16871_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 405)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (TRACKMOUSEEVENT);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1393_16871 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,405,F1393_16871_body,(Current));
}

/* {WEL_TRACK_MOUSE_EVENT}.set_dwflags */
void F1393_16872 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_trackmouseevent_set_dwflags(((TRACKMOUSEEVENT*) tp1), ((DWORD) arg1));
}

/* {WEL_TRACK_MOUSE_EVENT}.set_hwndtrack */
void F1393_16873 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_trackmouseevent_set_hwndtrack(((TRACKMOUSEEVENT*) tp1), ((HWND) arg1));
}

/* {WEL_TRACK_MOUSE_EVENT}.c_size_of_trackmouseevent */
EIF_INTEGER_32 F1393_16875 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (TRACKMOUSEEVENT);
	return Result;
}

/* {WEL_TRACK_MOUSE_EVENT}.cwel_trackmouseevent_set_cbsize */
void F1393_16880 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_trackmouseevent_set_cbsize(((TRACKMOUSEEVENT*) arg1), ((DWORD) arg2));
}

/* {WEL_TRACK_MOUSE_EVENT}.cwel_trackmouseevent_set_hwndtrack */
void F1393_16881 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_trackmouseevent_set_hwndtrack(((TRACKMOUSEEVENT*) arg1), ((HWND) arg2));
}

/* {WEL_TRACK_MOUSE_EVENT}.cwel_trackmouseevent_set_dwflags */
void F1393_16882 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_trackmouseevent_set_dwflags(((TRACKMOUSEEVENT*) arg1), ((DWORD) arg2));
}

void EIF_Minit1531 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
