/*
 * Code for class MESSAGE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "me1174.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MESSAGE}.msg_not_in_mission */
EIF_REFERENCE F257_11785 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTMS_EX_H("  Negative on that request:no mission in progress.",50,643653166);
	RTLE;
	return Result;
}

/* {MESSAGE}.msg_already_in_game */
EIF_REFERENCE F257_11786 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTMS_EX_H("  To start a new mission, please abort the current one first.",61,377117998);
	RTLE;
	return Result;
}

/* {MESSAGE}.msg_first_run */
EIF_REFERENCE F257_11787 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTMS_EX_H("  Welcome! Try test(30)",23,190486569);
	RTLE;
	return Result;
}

/* {MESSAGE}.msg_no_life */
EIF_REFERENCE F257_11788 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = RTMS_EX_H("  Explorer found no life as we know it at Sector:",49,1528771386);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, arg1);
	RTLE;
	return Result;
}

/* {MESSAGE}.msg_found_life */
EIF_REFERENCE F257_11789 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTMS_EX_H("  Tranquility base here - we\'ve got a life!",43,383285793);
	RTLE;
	return Result;
}

/* {MESSAGE}.msg_no_wormhole */
EIF_REFERENCE F257_11790 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = RTMS_EX_H("  Explorer couldn\'t find wormhole at Sector:",44,1980323898);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, arg1);
	RTLE;
	return Result;
}

/* {MESSAGE}.msg_planet_died */
EIF_REFERENCE F257_11791 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTMS_EX_H("  Planet got devoured by blackhole (id: -1) at Sector:3:3",57,1980005683);
	RTLE;
	return Result;
}

/* {MESSAGE}.msg_out_of_fuel */
EIF_REFERENCE F257_11792 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = RTMS_EX_H("  Explorer got lost in space - out of fuel at Sector:",53,1993885498);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, arg1);
	RTLE;
	return Result;
}

/* {MESSAGE}.msg_abort */
EIF_REFERENCE F257_11793 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTMS_EX_H("  Mission aborted. Try test(30)",31,439955497);
	RTLE;
	return Result;
}

/* {MESSAGE}.msg_game_over */
EIF_REFERENCE F257_11794 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTMS_EX_H("  The game has ended. You can start a new game.",47,1555731758);
	RTLE;
	return Result;
}

/* {MESSAGE}.msg_blackhole */
EIF_REFERENCE F257_11795 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLIU(2);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr1 = RTMS_EX_H("  Explorer got devoured by blackhole (id: -1) at Sector:3:3",59,429780275);
	F1559_6607(RTCW(Result), tr1);
	RTLE;
	return Result;
}

/* {MESSAGE}.msg_status_update */
EIF_REFERENCE F257_11796 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr1 = RTMS_EX_H("  Explorer status report:",25,1116645178);
	F1559_6607(RTCW(Result), tr1);
	if ((EIF_BOOLEAN) !arg4) {
		tr1 = RTMS_EX_H("Traveling at cruise speed at ",29,1561588000);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	} else {
		tr1 = RTMS_EX_H("Stationary on planet surface at ",32,1750296864);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, arg1);
	tr1 = RTMS_EX_H("\012  Life units left:",19,894659898);
	tr2 = c_outi(arg3);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
	tr2 = RTMS_EX_H(", Fuel units left:",18,1601382202);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = c_outi(arg2);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	RTLE;
	return Result;
}

/* {MESSAGE}.msg_cannot_move_area_full */
EIF_REFERENCE F257_11797 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTMS_EX_H("  Cannot transfer to new location as it is full.",48,251732014);
	RTLE;
	return Result;
}

/* {MESSAGE}.msg_currently_landed */
EIF_REFERENCE F257_11798 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = RTMS_EX_H("  Negative on that request:you are currently landed at Sector:",62,1580234554);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, arg1);
	RTLE;
	return Result;
}

/* {MESSAGE}.msg_no_unvisited_planet */
EIF_REFERENCE F257_11799 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = RTMS_EX_H("  Negative on that request:no unvisited attached planet at Sector:",66,1276988218);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, arg1);
	RTLE;
	return Result;
}

/* {MESSAGE}.msg_no_yellow_dwarf */
EIF_REFERENCE F257_11800 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = RTMS_EX_H("  Negative on that request:no yellow dwarf at Sector:",53,175392314);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, arg1);
	RTLE;
	return Result;
}

/* {MESSAGE}.msg_no_planet_to_land */
EIF_REFERENCE F257_11801 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = RTMS_EX_H("  Negative on that request:no planets at Sector:",48,1861836602);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, arg1);
	RTLE;
	return Result;
}

/* {MESSAGE}.msg_already_landed */
EIF_REFERENCE F257_11802 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = RTMS_EX_H("  Negative on that request:already landed on a planet at Sector:",64,1351955258);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, arg1);
	RTLE;
	return Result;
}

/* {MESSAGE}.msg_not_on_planet */
EIF_REFERENCE F257_11803 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = RTMS_EX_H("  Negative on that request:you are not on a planet at Sector:",61,987376954);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, arg1);
	RTLE;
	return Result;
}

/* {MESSAGE}.msg_lift_off */
EIF_REFERENCE F257_11804 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTGC;
	tr1 = RTMS_EX_H("  Explorer has lifted off from planet at Sector:",48,2085447994);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, arg1);
	RTLE;
	return Result;
}

void EIF_Minit1174 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
