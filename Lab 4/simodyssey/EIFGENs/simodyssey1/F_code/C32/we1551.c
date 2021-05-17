/*
 * Code for class WEL_RICH_EDIT_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1551.h"
#include "estream.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_RICH_EDIT_STREAM}.make */
void F1413_17535 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1337_15830(Current);
	F1413_17545(Current);
	F1413_17539(Current, ((EIF_INTEGER_32) 0L));
	RTLE;
}

/* {WEL_RICH_EDIT_STREAM}.set_error */
void F1413_17539 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	cwel_editstream_set_dwerror((tp1), (arg1));
}

/* {WEL_RICH_EDIT_STREAM}.set_is_unicode_data */
void F1413_17540 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) arg1;
}

/* {WEL_RICH_EDIT_STREAM}.init_action */
void F1413_17541 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_RICH_EDIT_STREAM}.finish_action */
void F1413_17542 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_RICH_EDIT_STREAM}.release_stream */
void F1413_17543 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1413_17546(Current);
}

/* {WEL_RICH_EDIT_STREAM}.structure_size */
static EIF_INTEGER_32 F1413_17544_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 447)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (EDITSTREAM);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1413_17544 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,447,F1413_17544_body,(Current));
}

/* {WEL_RICH_EDIT_STREAM}.record_current_in_cookie */
void F1413_17545 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	loc1 = (EIF_POINTER) eif_protect(((EIF_REFERENCE) Current));
	F1413_17548(Current, loc1);
	RTLE;
}

/* {WEL_RICH_EDIT_STREAM}.free_current_from_cookie */
void F1413_17546 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	tp1 = F1413_17547(Current);
	eif_wean(((EIF_OBJECT) tp1));
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	tp2 = tp1;
	F1413_17548(Current, tp2);
	RTLE;
}

/* {WEL_RICH_EDIT_STREAM}.cookie */
EIF_POINTER F1413_17547 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	return (EIF_POINTER) (EIF_POINTER) cwel_editstream_get_dwcookie((tp1));
}

/* {WEL_RICH_EDIT_STREAM}.set_cookie */
void F1413_17548 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	cwel_editstream_set_dwcookie((tp1), (arg1));
}

/* {WEL_RICH_EDIT_STREAM}.c_protect_cookie */
EIF_POINTER F1413_17549 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) eif_protect(((EIF_REFERENCE) arg1));
	return Result;
}

/* {WEL_RICH_EDIT_STREAM}.c_free_cookie */
void F1413_17550 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	
	
	eif_wean(((EIF_OBJECT) arg1));
}

/* {WEL_RICH_EDIT_STREAM}.c_size_of_editstream */
EIF_INTEGER_32 F1413_17551 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (EDITSTREAM);
	return Result;
}

/* {WEL_RICH_EDIT_STREAM}.cwel_editstream_set_dwcookie */
void F1413_17552 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	cwel_editstream_set_dwcookie((arg1), (arg2));
}

/* {WEL_RICH_EDIT_STREAM}.cwel_editstream_set_dwerror */
void F1413_17553 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	
	cwel_editstream_set_dwerror((arg1), (arg2));
}

/* {WEL_RICH_EDIT_STREAM}.cwel_editstream_get_dwcookie */
EIF_POINTER F1413_17554 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) cwel_editstream_get_dwcookie((arg1));
	return Result;
}

void EIF_Minit1551 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
