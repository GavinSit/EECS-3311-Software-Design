/*
 * Code for class WEL_TOOL_BAR_BITMAP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1477.h"
#include <tbaddbmp.h>
#include "eif_object_id.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TOOL_BAR_BITMAP}.structure_size */
static EIF_INTEGER_32 F1338_15855_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 519)

	
	RTEV;
	RTOTP;
	Result = (EIF_INTEGER_32) sizeof (TBADDBITMAP);
	RTOTE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F1338_15855 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,519,F1338_15855_body,(Current));
}

/* {WEL_TOOL_BAR_BITMAP}.destroy_item */
void F1338_15857 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTGC;
	F1337_15837(Current);
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_2_0_0_);
	tr1 = (EIF_REFERENCE) eif_id_object(ti4_1);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1319, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		tb2 = *(EIF_BOOLEAN *)(loc1+ _CHROFF_0_0_);
		tb1 = tb2;
	}
	if (tb1) {
		F519_14210(loc1);
	}
	RTLE;
}

/* {WEL_TOOL_BAR_BITMAP}.c_size_of_tbaddbitmap */
EIF_INTEGER_32 F1338_15858 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (TBADDBITMAP);
	return Result;
}

void EIF_Minit1477 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
