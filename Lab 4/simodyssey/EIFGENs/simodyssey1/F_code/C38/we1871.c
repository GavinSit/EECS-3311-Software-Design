/*
 * Code for class WEL_CHARACTER_FORMAT2
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1871.h"
#include "redit.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_CHARACTER_FORMAT2}.c_structure_size */
EIF_INTEGER_32 F1888_21835 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) sizeof (CHARFORMAT2);
	return Result;
}

/* {WEL_CHARACTER_FORMAT2}.weight */
EIF_INTEGER_32 F1888_21836 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	
	
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	return (EIF_INTEGER_32) (EIF_INTEGER_32) (((CHARFORMAT2 *)tp1)->wWeight);
}

/* {WEL_CHARACTER_FORMAT2}.background_color */
EIF_REFERENCE F1888_21838 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(1828, 0x01).id, 1828, _OBJSIZ_0_0_0_1_0_0_0_0_);
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ti4_1 = (EIF_INTEGER_32) (((CHARFORMAT2 *)tp1)->crBackColor);
	F1829_20491(RTCW(Result), ti4_1);
	RTLE;
	return Result;
}

/* {WEL_CHARACTER_FORMAT2}.set_background_color */
void F1888_21841 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTGC;
	F1887_21807(Current, ((EIF_INTEGER_32) 67108864L));
	F1887_21811(Current, ((EIF_INTEGER_32) 67108864L));
	tp1 = *(EIF_POINTER *)(Current + O12527[Dtype(Current)-1295]);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O17154[Dtype(arg1)-1828]);
	(((CHARFORMAT2 *)tp1)->crBackColor = (EIF_INTEGER)(ti4_1));
	RTLE;
}

/* {WEL_CHARACTER_FORMAT2}.cwel_charformat_get_crbackcolor */
EIF_INTEGER_32 F1888_21846 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((CHARFORMAT2 *)arg1)->crBackColor);
	
	return Result;
}

/* {WEL_CHARACTER_FORMAT2}.cwel_charformat_set_crbackcolor */
void F1888_21847 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	
	(((CHARFORMAT2 *)arg1)->crBackColor = (EIF_INTEGER)(arg2));
	
}

/* {WEL_CHARACTER_FORMAT2}.cwel_charformat_get_wweight */
EIF_INTEGER_32 F1888_21848 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	Result = (EIF_INTEGER_32) (((CHARFORMAT2 *)arg1)->wWeight);
	
	return Result;
}

void EIF_Minit1871 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
