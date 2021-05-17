/*
 * Code for class COUNTABLE_SEQUENCE [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co823.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {COUNTABLE_SEQUENCE}.index */
EIF_INTEGER_32 F735_2756 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_);
}


/* {COUNTABLE_SEQUENCE}.item */
EIF_INTEGER_32 F735_2757 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R2268[Dtype(Current)-1027])(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_));
}

/* {COUNTABLE_SEQUENCE}.after */
EIF_BOOLEAN F735_2758 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {COUNTABLE_SEQUENCE}.extendible */
EIF_BOOLEAN F735_2759 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {COUNTABLE_SEQUENCE}.forth */
void F735_2764 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_))++;
}

/* {COUNTABLE_SEQUENCE}.start */
void F735_2765 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {COUNTABLE_SEQUENCE}.extend */
void F735_2766 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	
	
	RTGC;
}

/* {COUNTABLE_SEQUENCE}.linear_representation */
EIF_REFERENCE F735_2768 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,912,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2164,Y2164_gen_type,Dftype(Current),548);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0.id, 912, _OBJSIZ_2_3_0_1_0_0_0_0_);
	}
	F913_3515(RTCW(tr1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

void EIF_Minit823 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
