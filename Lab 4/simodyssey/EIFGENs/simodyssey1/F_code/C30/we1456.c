/*
 * Code for class WEL_GDI_ANY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1456.h"
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

/* {WEL_GDI_ANY}.make_by_pointer */
void F1317_15540 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	F1296_15096(Current, arg1);
	{
		/* INLINED CODE (WEL_GDI_ANY.gdi_make) */
		/* END INLINED CODE */
	}
	;
	RTLE;
}

/* {WEL_GDI_ANY}.gdi_make */
void F1317_15541 (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
}

/* {WEL_GDI_ANY}.gdi_objects_count */
EIF_INTEGER_32 F1317_15542 (EIF_REFERENCE Current)
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
	tr1 = RTOUCR(434,F1317_15547, (Current));
	Result = *(EIF_INTEGER_32 *)(RTCW(tr1) + O1718[Dtype(tr1)-488]);
	RTLE;
	return Result;
}

/* {WEL_GDI_ANY}.destroy_item */
void F1317_15543 (EIF_REFERENCE Current)
{
	GTCX
	
	
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R12944[Dtype(Current)-1316])(Current);
}

/* {WEL_GDI_ANY}.delete_gdi_object */
void F1317_15544 (EIF_REFERENCE Current)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTGC;
	{
		/* INLINED CODE (ANY.default_pointer) */
		tp1 = (EIF_POINTER)  0;
		/* END INLINED CODE */
	}
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O12527[dtype-1295]) != tp1)) {
		tp1 = *(EIF_POINTER *)(Current + O12527[dtype-1295]);
		loc1 = (EIF_BOOLEAN) EIF_TEST(DeleteObject(((HGDIOBJ) tp1)));
		{
			/* INLINED CODE (ANY.default_pointer) */
			tp1 = (EIF_POINTER)  0;
			/* END INLINED CODE */
		}
		tp2 = tp1;
		*(EIF_POINTER *)(Current + O12527[dtype-1295]) = (EIF_POINTER) tp2;
	}
	RTLE;
}

/* {WEL_GDI_ANY}.increase_gdi_objects_count */
void F1317_15545 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = RTOUCR(434,F1317_15547, (Current));
	tr2 = RTOUCR(434,F1317_15547, (Current));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2) + O1718[Dtype(tr2)-488]);
	F490_1935(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {WEL_GDI_ANY}.decrease_gdi_objects_count */
void F1317_15546 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTGC;
	tr1 = RTOUCR(434,F1317_15547, (Current));
	tr2 = RTOUCR(434,F1317_15547, (Current));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2) + O1718[Dtype(tr2)-488]);
	F490_1935(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
	RTLE;
}

/* {WEL_GDI_ANY}.gdi_objects_count_cell */
static EIF_REFERENCE F1317_15547_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(434)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEV;
	RTGC;
	RTOTP;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,489,1508,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 489, _OBJSIZ_0_0_0_1_0_0_0_0_);
	}
	F490_1934(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	Result = (EIF_REFERENCE) tr1;
	RTOTE;
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1317_15547 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(434,F1317_15547_body,(Current));
}

/* {WEL_GDI_ANY}.cwin_delete_object */
EIF_BOOLEAN F1317_15548 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(DeleteObject(((HGDIOBJ) arg1)));
	return Result;
}

void EIF_Minit1456 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
