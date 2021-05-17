/*
 * Code for class EV_TOOL_BAR_SEPARATOR_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1947.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TOOL_BAR_SEPARATOR_IMP}.make */
void F1964_23913 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F405_13268(Current);
	F1696_18990(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_TOOL_BAR_SEPARATOR_IMP}.x_position */
EIF_INTEGER_32 F1964_23914 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {EV_TOOL_BAR_SEPARATOR_IMP}.y_position */
EIF_INTEGER_32 F1964_23915 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {EV_TOOL_BAR_SEPARATOR_IMP}.screen_x */
EIF_INTEGER_32 F1964_23916 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {EV_TOOL_BAR_SEPARATOR_IMP}.screen_y */
EIF_INTEGER_32 F1964_23917 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {EV_TOOL_BAR_SEPARATOR_IMP}.width */
EIF_INTEGER_32 F1964_23918 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {EV_TOOL_BAR_SEPARATOR_IMP}.height */
EIF_INTEGER_32 F1964_23919 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {EV_TOOL_BAR_SEPARATOR_IMP}.minimum_width */
EIF_INTEGER_32 F1964_23920 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {EV_TOOL_BAR_SEPARATOR_IMP}.minimum_height */
EIF_INTEGER_32 F1964_23921 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_INTEGER_32) 0;
}

/* {EV_TOOL_BAR_SEPARATOR_IMP}.parent_imp */
EIF_REFERENCE F1964_23922 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_22_);
}


/* {EV_TOOL_BAR_SEPARATOR_IMP}.set_parent_imp */
void F1964_23923 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTAR(Current, arg1);
		*(EIF_REFERENCE *)(Current + _REFACS_22_) = (EIF_REFERENCE) arg1;
		F1928_22953(RTCW(arg1));
	} else {
		*(EIF_REFERENCE *)(Current + _REFACS_22_) = (EIF_REFERENCE) NULL;
	}
	RTLE;
}

/* {EV_TOOL_BAR_SEPARATOR_IMP}.text */
EIF_REFERENCE F1964_23924 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	RTLIU(1);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(1564, 0x01).id, 1564, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(tr1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {EV_TOOL_BAR_SEPARATOR_IMP}.has_pixmap */
EIF_BOOLEAN F1964_23925 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {EV_TOOL_BAR_SEPARATOR_IMP}.set_pixmap_in_parent */
void F1964_23926 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_TOOL_BAR_SEPARATOR_IMP}.is_sensitive */
EIF_BOOLEAN F1964_23927 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {EV_TOOL_BAR_SEPARATOR_IMP}.update_for_pick_and_drop */
void F1964_23928 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EV_TOOL_BAR_SEPARATOR_IMP}.disable_sensitive */
void F1964_23929 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_TOOL_BAR_SEPARATOR_IMP}.enable_sensitive */
void F1964_23930 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {EV_TOOL_BAR_SEPARATOR_IMP}.internal_non_sensitive */
EIF_BOOLEAN F1964_23931 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {EV_TOOL_BAR_SEPARATOR_IMP}.restore_private_pixmaps */
void F1964_23932 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

void EIF_Minit1947 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
