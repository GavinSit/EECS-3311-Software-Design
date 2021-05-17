/*
 * Code for class WEL_TOOL_BAR_BUTTON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1493.h"
#include "eif_misc.h"
#include <tbbutton.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TOOL_BAR_BUTTON}.make_button */
void F1354_16109 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 0L),((EIF_INTEGER_32) 64L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 16L));
	F1354_16125(Current, ti4_1);
	F1354_16124(Current, ((EIF_INTEGER_32) 4L));
	F1354_16122(Current, arg1);
	F1354_16123(Current, arg2);
	RTLE;
}

/* {WEL_TOOL_BAR_BUTTON}.make_drop_down_button */
void F1354_16110 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 0L),((EIF_INTEGER_32) 64L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 8L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 16L));
	F1354_16125(Current, ti4_1);
	F1354_16124(Current, ((EIF_INTEGER_32) 4L));
	F1354_16122(Current, arg1);
	F1354_16123(Current, arg2);
	RTLE;
}

/* {WEL_TOOL_BAR_BUTTON}.make_check */
void F1354_16112 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	ti4_1 = eif_bit_or(((EIF_INTEGER_32) 2L),((EIF_INTEGER_32) 64L));
	ti4_1 = eif_bit_or(ti4_1,((EIF_INTEGER_32) 16L));
	F1354_16125(Current, ti4_1);
	F1354_16124(Current, ((EIF_INTEGER_32) 4L));
	F1354_16122(Current, arg1);
	F1354_16123(Current, arg2);
	RTLE;
}

/* {WEL_TOOL_BAR_BUTTON}.make_separator */
void F1354_16115 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	F1354_16125(Current, ((EIF_INTEGER_32) 1L));
	RTLE;
}

/* {WEL_TOOL_BAR_BUTTON}.style */
EIF_INTEGER_32 F1354_16119 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) cwel_tbbutton_get_fsstyle((tp1));
}

/* {WEL_TOOL_BAR_BUTTON}.set_bitmap_index */
void F1354_16122 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_tbbutton_set_ibitmap((tp1), (arg1));
}

/* {WEL_TOOL_BAR_BUTTON}.set_command_id */
void F1354_16123 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_tbbutton_set_idcommand((tp1), (arg1));
}

/* {WEL_TOOL_BAR_BUTTON}.set_state */
void F1354_16124 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_tbbutton_set_fsstate((tp1), (arg1));
}

/* {WEL_TOOL_BAR_BUTTON}.set_style */
void F1354_16125 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_tbbutton_set_fsstyle((tp1), (arg1));
}

/* {WEL_TOOL_BAR_BUTTON}.set_string_index */
void F1354_16127 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	cwel_tbbutton_set_istring((tp1), (arg1));
}

/* {WEL_TOOL_BAR_BUTTON}.structure_size */
static EIF_INTEGER_32 F1354_16128_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 490)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (TBBUTTON);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1354_16128 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,490,F1354_16128_body,(Current));
}

/* {WEL_TOOL_BAR_BUTTON}.c_size_of_tbbutton */
EIF_INTEGER_32 F1354_16129 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (TBBUTTON);
	return Result;
}

/* {WEL_TOOL_BAR_BUTTON}.cwel_tbbutton_set_ibitmap */
void F1354_16130 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_tbbutton_set_ibitmap((arg1), (arg2));
}

/* {WEL_TOOL_BAR_BUTTON}.cwel_tbbutton_set_idcommand */
void F1354_16131 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_tbbutton_set_idcommand((arg1), (arg2));
}

/* {WEL_TOOL_BAR_BUTTON}.cwel_tbbutton_set_fsstate */
void F1354_16132 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_tbbutton_set_fsstate((arg1), (arg2));
}

/* {WEL_TOOL_BAR_BUTTON}.cwel_tbbutton_set_fsstyle */
void F1354_16133 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_tbbutton_set_fsstyle((arg1), (arg2));
}

/* {WEL_TOOL_BAR_BUTTON}.cwel_tbbutton_set_istring */
void F1354_16135 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_tbbutton_set_istring((arg1), (arg2));
}

/* {WEL_TOOL_BAR_BUTTON}.cwel_tbbutton_get_fsstyle */
EIF_INTEGER_32 F1354_16139 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) cwel_tbbutton_get_fsstyle((arg1));
	return Result;
}

void EIF_Minit1493 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
