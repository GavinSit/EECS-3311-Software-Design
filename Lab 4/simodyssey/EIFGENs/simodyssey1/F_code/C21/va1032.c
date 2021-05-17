/*
 * Code for class VALUE_SINGLETON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "va1032.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

void F74_2 (EIF_REFERENCE Current, EIF_REFERENCE parent)
{
	GTCX
	uint32 offset_position = 0;
	RTLD;
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,parent);
	RTLIU(2);
	
	HEADER(Current)->ov_flags |= EO_COMP;
	offset_position = + _OBJSIZ_1_0_0_0_0_0_0_0_ + OVERHEAD;
	*(EIF_REFERENCE *) (Current) = Current + offset_position;
	HEADER(Current + offset_position)->ov_flags = EO_EXP;
	
	RT_DFS(HEADER(Current + offset_position), eif_new_type(1256, 0x00).id);
	HEADER(Current + offset_position)->ov_size = offset_position + (Current - parent);
	nstcall = -1, F1257_14734(Current + offset_position);
	RTLE;
}

void EIF_Minit1032 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
