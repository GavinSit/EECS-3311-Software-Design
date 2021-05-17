/*
 * Code for class ETF_CMD_LINE_ROOT_INTERFACE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "et1343.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_CMD_LINE_ROOT_INTERFACE}.make */
void F566_14269 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc1);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,tr2);
	RTLIU(10);
	
	RTGC;
	tr1 = RTOUCR(151,F565_2415, (Current));
	loc3 = F919_3191(RTCW(tr1), ((EIF_INTEGER_32) 0L));
	loc2 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(loc2));
	F566_14270(Current);
	if ((EIF_BOOLEAN) (F565_2432(Current) >= ((EIF_INTEGER_32) 1L))) {
		tr1 = RTOUCR(151,F565_2415, (Current));
		loc1 = F919_3191(RTCW(tr1), ((EIF_INTEGER_32) 1L));
		if (RTEQ(loc1, RTMS_EX_H("-help",5,1751822960))) {
			if ((EIF_BOOLEAN)(F565_2432(Current) == ((EIF_INTEGER_32) 1L))) {
				loc2 = F566_14276(Current, loc3);
			} else {
				tr1 = F566_14279(Current, loc1);
				loc2 = F566_14273(Current, tr1, loc3);
			}
		} else {
			if (RTEQ(loc1, RTMS_EX_H("-version",8,1408017262))) {
				if ((EIF_BOOLEAN)(F565_2432(Current) == ((EIF_INTEGER_32) 1L))) {
					loc2 = F566_14275(Current);
				} else {
					tr1 = F566_14279(Current, loc1);
					loc2 = F566_14273(Current, tr1, loc3);
				}
			} else {
				if (RTEQ(loc1, RTMS_EX_H("-g",2,11623))) {
					if ((EIF_BOOLEAN)(F565_2432(Current) == ((EIF_INTEGER_32) 1L))) {
						F265_11874(Current);
					} else {
						tr1 = F566_14279(Current, loc1);
						loc2 = F566_14273(Current, tr1, loc3);
					}
				} else {
					if (RTEQ(loc1, RTMS_EX_H("-i",2,11625))) {
						if ((EIF_BOOLEAN)(F565_2432(Current) == ((EIF_INTEGER_32) 1L))) {
							*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							F566_14294(Current);
						} else {
							tr1 = F566_14279(Current, loc1);
							loc2 = F566_14273(Current, tr1, loc3);
						}
					} else {
						if (RTEQ(loc1, RTMS_EX_H("-b",2,11618))) {
							if ((EIF_BOOLEAN)(F565_2432(Current) == ((EIF_INTEGER_32) 2L))) {
								tr1 = RTOUCR(151,F565_2415, (Current));
								loc4 = F919_3191(RTCW(tr1), ((EIF_INTEGER_32) 2L));
								*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
								loc2 = F566_14295(Current, loc4);
							} else {
								if ((EIF_BOOLEAN)(F565_2432(Current) == ((EIF_INTEGER_32) 3L))) {
									tr1 = RTOUCR(151,F565_2415, (Current));
									loc4 = F919_3191(RTCW(tr1), ((EIF_INTEGER_32) 2L));
									tr1 = RTOUCR(151,F565_2415, (Current));
									loc5 = F919_3191(RTCW(tr1), ((EIF_INTEGER_32) 3L));
									*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
									loc6 = RTLNS(eif_new_type(101, 0x01).id, 101, _OBJSIZ_2_1_0_0_0_0_0_0_);
									F102_10096(RTCW(loc6), loc4);
									tb1 = *(EIF_BOOLEAN *)(RTCW(loc6)+ _CHROFF_2_0_);
									if ((EIF_BOOLEAN) !tb1) {
										loc7 = RTLNS(eif_new_type(1291, 0x01).id, 1291, _OBJSIZ_3_7_2_4_1_1_2_1_);
										F1291_4901(RTCW(loc7), loc5);
										tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3549[Dtype(RTCW(loc7))-1291])(loc7);
										if ((EIF_BOOLEAN) !tb1) {
											F102_10097(RTCW(loc6));
											F566_14296(Current, loc6, loc7);
										} else {
											tr1 = RTMS_EX_H("Error: output file ",19,1480130080);
											tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, loc5);
											tr2 = RTMS_EX_H(" already exists!",16,322015009);
											loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
										}
									} else {
										loc2 = *(EIF_REFERENCE *)(RTCW(loc6));
									}
								} else {
									tr1 = F566_14279(Current, loc1);
									loc2 = F566_14273(Current, tr1, loc3);
								}
							}
						} else {
							tr1 = RTMS_EX_H("-l",2,11628);
							if ((EIF_BOOLEAN) (RTEQ(loc1, RTMS_EX_H("-w",2,11639)) || RTEQ(loc1, tr1))) {
								tb1 = '\01';
								tb2 = '\0';
								if (RTEQ(loc1, RTMS_EX_H("-w",2,11639))) {
									tb3 = '\01';
									if (!(EIF_BOOLEAN)(F565_2432(Current) == ((EIF_INTEGER_32) 4L))) {
										tb3 = (EIF_BOOLEAN)(F565_2432(Current) == ((EIF_INTEGER_32) 5L));
									}
									tb2 = tb3;
								}
								if (!tb2) {
									tb2 = '\0';
									if (RTEQ(loc1, RTMS_EX_H("-l",2,11628))) {
										tb3 = '\01';
										if (!(EIF_BOOLEAN)(F565_2432(Current) == ((EIF_INTEGER_32) 2L))) {
											tb3 = (EIF_BOOLEAN)(F565_2432(Current) == ((EIF_INTEGER_32) 3L));
										}
										tb2 = tb3;
									}
									tb1 = tb2;
								}
								if (tb1) {
									if (RTEQ(loc1, RTMS_EX_H("-w",2,11639))) {
										F566_14298(Current, loc3);
										tr1 = RTOUCR(151,F565_2415, (Current));
										loc4 = F919_3191(RTCW(tr1), ((EIF_INTEGER_32) 4L));
										if ((EIF_BOOLEAN)(F565_2432(Current) == ((EIF_INTEGER_32) 5L))) {
											tr1 = RTOUCR(151,F565_2415, (Current));
											loc5 = F919_3191(RTCW(tr1), ((EIF_INTEGER_32) 5L));
										} else {
											loc5 = RTMS_EX_H("",0,0);
										}
									} else {
										*(EIF_BOOLEAN *)(Current+ _CHROFF_7_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
										tr1 = RTOUCR(151,F565_2415, (Current));
										loc4 = F919_3191(RTCW(tr1), ((EIF_INTEGER_32) 2L));
										if ((EIF_BOOLEAN)(F565_2432(Current) == ((EIF_INTEGER_32) 3L))) {
											tr1 = RTOUCR(151,F565_2415, (Current));
											loc5 = F919_3191(RTCW(tr1), ((EIF_INTEGER_32) 3L));
										} else {
											loc5 = RTMS_EX_H("",0,0);
										}
									}
									tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
									tb1 = F743_2537(RTCW(tr1));
									if (tb1) {
										loc6 = RTLNS(eif_new_type(101, 0x01).id, 101, _OBJSIZ_2_1_0_0_0_0_0_0_);
										F102_10096(RTCW(loc6), loc4);
										tb1 = *(EIF_BOOLEAN *)(RTCW(loc6)+ _CHROFF_2_0_);
										if ((EIF_BOOLEAN) !tb1) {
											tb1 = F743_2537(RTCW(loc5));
											if ((EIF_BOOLEAN) !tb1) {
												loc7 = RTLNS(eif_new_type(1291, 0x01).id, 1291, _OBJSIZ_3_7_2_4_1_1_2_1_);
												F1291_4901(RTCW(loc7), loc5);
												tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3549[Dtype(RTCW(loc7))-1291])(loc7);
												if ((EIF_BOOLEAN) !tb1) {
													F1291_4973(RTCW(loc7));
													tr1 = RTOUCR(0,F1_24, (Current));
													F125_141(RTCW(tr1), loc7);
													*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
													F102_10097(RTCW(loc6));
													F566_14297(Current, loc6);
													F125_142(RTCV(RTOUCR(0,F1_24, (Current))));
												} else {
													tr1 = RTMS_EX_H("Error: output file ",19,1480130080);
													tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, loc5);
													tr2 = RTMS_EX_H(" already exists!",16,322015009);
													loc2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
												}
											} else {
												*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
												F102_10097(RTCW(loc6));
												F566_14297(Current, loc6);
											}
										} else {
											loc2 = *(EIF_REFERENCE *)(RTCW(loc6));
										}
									} else {
										loc2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
									}
								} else {
									tr1 = F566_14279(Current, loc1);
									loc2 = F566_14273(Current, tr1, loc3);
								}
							} else {
								tr1 = F566_14278(Current, loc1);
								loc2 = F566_14273(Current, tr1, loc3);
							}
						}
					}
				}
			}
		}
	} else {
		tr1 = F566_14277(Current);
		loc2 = F566_14273(Current, tr1, loc3);
	}
	tb1 = F743_2537(RTCW(loc2));
	if ((EIF_BOOLEAN) !tb1) {
		tr1 = RTOUCR(0,F1_24, (Current));
		F1_27(RTCW(tr1), loc2);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc2)+ _LNGOFF_1_1_0_2_);
		tc1 = (eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2556[Dtype(RTCW(loc2))-849])(loc2, ti4_1));
		if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012')) {
			tr1 = RTOUCR(0,F1_24, (Current));
			tr2 = RTMS_EX_H("\012",1,10);
			F1_27(RTCW(tr1), tr2);
		}
	}
	RTLE;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.initialize_attributes */
void F566_14270 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNSMART(eif_new_type(1560, 1).id);
	F1558_6510(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1560, 1).id);
	F1558_6510(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_new_type(1560, 1).id);
	F1558_6510(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.ref_msg */
EIF_REFERENCE F566_14272 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = RTMS_EX_H("Run \'",5,1970781223);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, arg1);
	tr2 = RTMS_EX_H(" -help\' to see more details",27,49958515);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	RTLE;
	return Result;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.error */
EIF_REFERENCE F566_14273 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,arg2);
	RTLR(4,Current);
	RTLIU(5);
	
	RTGC;
	tr1 = RTMS_EX_H("\012",1,10);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(arg1))-1560])(arg1, tr1);
	tr1 = F566_14272(Current, arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(Result))-1560])(Result, tr1);
	RTLE;
	return Result;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.version_msg */
EIF_REFERENCE F566_14275 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = RTMS_EX_H("Eiffel Testing Framework (ETF) Version: ",40,1280104224);
	tr2 = RTOUCR(166,F566_14305, (Current));
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, tr2);
	RTLE;
	return Result;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.usage_msg */
EIF_REFERENCE F566_14276 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = RTMS_EX_H("The executable ",15,1532101408);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, arg1);
	tr2 = RTMS_EX_H(" may be invoked as: \012",21,1268642314);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("\011",1,9);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, arg1);
	tr2 = RTMS_EX_H(" -help \012",8,1058872074);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("\011",1,9);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, arg1);
	tr2 = RTMS_EX_H(" -version \012",11,980604682);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("\011",1,9);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, arg1);
	tr2 = RTMS_EX_H(" -i \012",5,762109962);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("\011",1,9);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, arg1);
	tr2 = RTMS_EX_H(" -b     input.txt [output.txt] \012",32,712034826);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("\011",1,9);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, arg1);
	tr2 = RTMS_EX_H(" -w m n input.txt [output.txt] \012",32,594754058);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("\011",1,9);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, arg1);
	tr2 = RTMS_EX_H(" -l     input.txt [output.txt] \012",32,1385238282);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("where \012",7,1889704458);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H(" ====================================\012",38,1768257290);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("  Option \012",10,246873354);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("    -g  gui mode: run the ETF project as a GUI \012",48,1189626890);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("\012",1,10);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("    -i  interactive mode: read the event trace from console \012",61,1727018250);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("\012",1,10);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("    -b  batch mode: read the event trace from file \'input.txt\' \012",64,222490634);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("        Note. An output file is specified to log results of a large input file. \012",81,2082839562);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("\012",1,10);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("    -w  window mode: same as batch mode, except that only results of the \012",74,762492170);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("        m^th to (n-1)^th input commands, when m > 0 and n > 0, are logged into the output file. \012",97,2003548170);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("        Use negative numbers -1, -2, etc., to denote the last, 2nd last, etc, input commands. \012",95,1775393290);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("        Constraints: 1. if m <= 0, then n <= 0 \012",48,52780554);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("                     2. if m >  0, then n >  0 \012",48,1748364298);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("                     3. m <= n \012",32,1840712714);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("        Note. A window with valid start \'m\' and end \'n\' has the log: \012",70,19432714);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("              S_m C_m S_m+1 C_m+1 ... S_n Cn S_n+1 \012",52,994834186);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("              where S_i and S_i+1, m <= i <= n, denote the starting and resulting states of command C_i \012",105,1035250186);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("        Note. When m = n, only the starting state of the input command denoted by \'m\' is logged. \012",98,1849868042);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("        Examples. Use \'1   1\' as the window to log the initial state. \012",71,25638154);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("                  Use \'1   2\' as the window to log the 1st command and its starting and resulting states. \012",107,274818826);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("                  Use \'2   2\' as the window to log the starting state of the 2st command. \012",91,1428214794);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("                  Use \'-1 -1\' as the window to log the resulting state of the 2nd last command. \012",97,849895946);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("                  Use \'-1  0\' as the window to log the last command and its starting and resulting states. \012",108,1198890250);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("                  Use \'0   0\' as the window to log the final state. \012",69,960330250);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("                  Use \'m   _\' (m > 0) as the window to log the m^th to the last commands. \012",91,283412490);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("                  Use \'m   _\' (m < 0) as the window to log the m^th last to the last commands. \012",96,1863070218);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("\012",1,10);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H("    -l last mode: a special case of the -w mode with the window specified as \'-1 0\' or \'-1 _\'. \012",96,1158132746);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	tr2 = RTMS_EX_H(" ====================================",37,325673789);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	RTLE;
	return Result;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.flag_missing_msg */
EIF_REFERENCE F566_14277 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTMS_EX_H("Error: a mode is not specified",30,1950526820);
	RTLE;
	return Result;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.invalid_flag_msg */
EIF_REFERENCE F566_14278 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = RTMS_EX_H("Error: \'",8,1553419047);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, arg1);
	tr2 = RTMS_EX_H("\' is not a valid mode",21,747234149);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	RTLE;
	return Result;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.wrong_arguments_for_mode */
EIF_REFERENCE F566_14279 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTGC;
	tr1 = RTMS_EX_H("Error: wrong number of arguments for the \'",42,656967975);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(tr1)-1560])(tr1, arg1);
	tr2 = RTMS_EX_H("\' mode",6,1912939621);
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
	RTLE;
	return Result;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.start_of_window_not_valid */
EIF_REFERENCE F566_14281 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTMS_EX_H("Error: the start of window is not a valid integer",49,413789554);
	RTLE;
	return Result;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.neg_start_pos_end_window_msg */
EIF_REFERENCE F566_14282 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTMS_EX_H("Error: when the start of a window is non-positive, its end must be a non-positive number",88,1366194290);
	RTLE;
	return Result;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.end_of_window_not_valid */
EIF_REFERENCE F566_14283 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTMS_EX_H("Error: the end of window is neither a valid integer nor \'_\'",59,305326119);
	RTLE;
	return Result;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.invalid_window_msg */
EIF_REFERENCE F566_14284 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(1);
	RTLR(0,Result);
	RTLIU(1);
	
	RTGC;
	Result = RTMS_EX_H("Error: a window [start, end) should be such that start <= end",61,84240484);
	RTLE;
	return Result;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.handle_interactive_mode */
void F566_14294 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLR(5,tr3);
	RTLR(6,loc6);
	RTLR(7,loc4);
	RTLR(8,loc5);
	RTLR(9,tr4);
	RTLR(10,tr5);
	RTLIU(11);
	
	RTGC;
	loc3 = RTLNS(eif_new_type(259, 0x01).id, 259, _OBJSIZ_3_1_0_0_0_0_0_0_);
	F259_11823(RTCW(loc3));
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_2_);
	tr1 = F371_13167(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	tr1 = RTOUCR(0,F1_24, (Current));
	F1_27(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_5_));
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		if (loc2) break;
		tr1 = RTOUCR(0,F1_24, (Current));
		tr2 = RTMS_EX_H("->",2,11582);
		F1_27(RTCW(tr1), tr2);
		F125_181(RTCV(RTOUCR(0,F1_24, (Current))));
		loc1 = F125_136(RTCV(RTOUCR(0,F1_24, (Current))));
		if (RTEQ(loc1, RTMS_EX_H("quit",4,1903520116))) {
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			if (RTEQ(loc1, RTMS_EX_H("man",3,7168366))) {
				tr1 = RTOUCR(0,F1_24, (Current));
				tr2 = RTOUCR(167,F566_14304, (Current));
				tr3 = RTMS_EX_H("\012",1,10);
				tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr2))-1560])(tr2, tr3);
				F1_27(RTCW(tr1), tr2);
			} else {
				loc6 = RTLNS(eif_new_type(261, 0x01).id, 261, _OBJSIZ_2_0_0_0_0_0_0_0_);
				F261_11832(RTCW(loc6));
				loc4 = RTLNS(eif_new_type(354, 0x01).id, 354, _OBJSIZ_3_1_0_0_0_0_0_0_);
				F354_13102(RTCW(loc4), loc1, loc6);
				loc5 = RTLNS(eif_new_type(370, 0x01).id, 370, _OBJSIZ_3_0_0_0_0_0_0_0_);
				F371_13165(RTCW(loc5));
				tr1 = *(EIF_REFERENCE *)(RTCW(loc4) + _REFACS_2_);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,1475,0xFF01,370,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr2 = RTLNTS(typres0.id, 2, 0);
				}
				((EIF_TYPED_VALUE *)tr2+1)->it_r = loc5;
				RTAR(tr2,loc5);
				
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,1552,0xFF01,0xFFF9,1,1475,0xFF01,1560,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr5= RTLNRF(typres0.id, (EIF_POINTER) __A1280_35_2, (EIF_POINTER) _A1280_35_2, (EIF_POINTER)(F369_13159),tr2, 1, 1);
				}
				F88_9987(RTCW(tr1), tr5);
				F354_13111(RTCW(loc4));
				tb1 = *(EIF_BOOLEAN *)(RTCW(loc4)+ _CHROFF_3_0_);
				if (tb1) {
					tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + _REFACS_1_);
					tr2 = RTMS_EX_H("\012",1,10);
					tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
				} else {
					F259_11831(RTCW(loc3), loc1);
					tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_2_);
					tr1 = F371_13167(RTCW(tr1));
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
				}
				tr1 = RTOUCR(0,F1_24, (Current));
				F1_27(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_5_));
			}
		}
	}
	RTLE;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.handle_batch_mode */
EIF_REFERENCE F566_14295 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(5);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,Current);
	RTLIU(5);
	
	RTGC;
	Result = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(Result));
	loc1 = RTLNS(eif_new_type(101, 0x01).id, 101, _OBJSIZ_2_1_0_0_0_0_0_0_);
	F102_10096(RTCW(loc1), arg1);
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_2_0_);
	if ((EIF_BOOLEAN) !tb1) {
		F102_10097(RTCW(loc1));
		tr1 = F102_10095(RTCW(loc1));
		F566_14302(Current, tr1);
		Result = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		RTLE;
		return (EIF_REFERENCE) Result;
	} else {
		Result = *(EIF_REFERENCE *)(RTCW(loc1));
		RTLE;
		return (EIF_REFERENCE) Result;
	}/* NOTREACHED */
	
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.handle_batch_file_mode */
void F566_14296 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc3);
	RTLR(1,loc4);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,arg2);
	RTLR(6,Current);
	RTLIU(7);
	
	RTGC;
	loc3 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(loc3));
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	loc4 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2163[Dtype(RTCW(tr1))-849])(tr1);
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3146[Dtype(loc4)-1026])(loc4);
		if (tb1) break;
		loc1++;
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 100L))) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc4)-1026])(loc4);
			tr2 = RTMS_EX_H("\012",1,10);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc3))-1560])(loc3, tr1);
			F566_14299(Current, loc3, arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R4643[Dtype(RTCW(loc3))-1560])(loc3);
			loc2++;
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		} else {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc4)-1026])(loc4);
			tr2 = RTMS_EX_H("\012",1,10);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc3))-1560])(loc3, tr1);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R3147[Dtype(loc4)-1026])(loc4);
	}
	if ((EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 100L))) {
		F566_14299(Current, loc3, arg2);
	}
	RTLE;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.handle_window_mode */
void F566_14297 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,loc4);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	loc3 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2269[Dtype(RTCW(tr1))-818])(tr1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_5_)) {
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_2_) = (EIF_INTEGER_32) loc3;
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_3_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
	} else {
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_2_) <= ((EIF_INTEGER_32) 0L))) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_2_)) + ((EIF_INTEGER_32) 1L));
		}
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_4_)) {
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_3_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
		} else {
			if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_3_) <= ((EIF_INTEGER_32) 0L))) {
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_3_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_3_)) + ((EIF_INTEGER_32) 1L));
			}
		}
	}
	loc2 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(loc2));
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = RTLNSMART(eif_new_type(1560, 1).id);
	F1558_6510(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	loc4 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2163[Dtype(RTCW(tr1))-849])(tr1);
	for (;;) {
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3146[Dtype(loc4)-1026])(loc4);
		if (tb1) break;
		loc1++;
		if ((EIF_BOOLEAN) (loc1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_3_))) {
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3145[Dtype(loc4)-1026])(loc4);
			tr2 = RTMS_EX_H("\012",1,10);
			tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4821[Dtype(RTCW(loc2))-1560])(loc2, tr1);
			F566_14300(Current, loc1, loc2);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R4643[Dtype(RTCW(loc2))-1560])(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) R3147[Dtype(loc4)-1026])(loc4);
	}
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_2_) == (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L))) && (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_3_) == (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L))))) {
		tr1 = RTOUCR(0,F1_24, (Current));
		F125_145(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_6_));
	}
	RTLE;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.validate_window_spec */
void F566_14298 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(1560, 0x01).id, 1560, _OBJSIZ_1_1_0_3_0_0_0_0_);
	F1558_6510(RTCW(loc1));
	tr1 = RTOUCR(151,F565_2415, (Current));
	tr1 = F919_3191(RTCW(tr1), ((EIF_INTEGER_32) 2L));
	tb1 = F1558_6541(RTCW(tr1));
	if (tb1) {
		tr1 = RTOUCR(151,F565_2415, (Current));
		tr1 = F919_3191(RTCW(tr1), ((EIF_INTEGER_32) 2L));
		ti4_1 = F1558_6575(RTCW(tr1));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_2_) = (EIF_INTEGER_32) ti4_1;
		tb1 = '\01';
		tr1 = RTOUCR(151,F565_2415, (Current));
		tr1 = F919_3191(RTCW(tr1), ((EIF_INTEGER_32) 3L));
		tb2 = F1558_6541(RTCW(tr1));
		if (!tb2) {
			tr1 = RTOUCR(151,F565_2415, (Current));
			tr1 = F919_3191(RTCW(tr1), ((EIF_INTEGER_32) 3L));
			tb1 = RTEQ(tr1, RTMS_EX_H("_",1,95));
		}
		if (tb1) {
			tr1 = RTOUCR(151,F565_2415, (Current));
			tr1 = F919_3191(RTCW(tr1), ((EIF_INTEGER_32) 3L));
			tb1 = F1558_6541(RTCW(tr1));
			if (tb1) {
				tr1 = RTOUCR(151,F565_2415, (Current));
				tr1 = F919_3191(RTCW(tr1), ((EIF_INTEGER_32) 3L));
				ti4_1 = F1558_6575(RTCW(tr1));
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_3_) = (EIF_INTEGER_32) ti4_1;
			} else {
				tr1 = RTOUCR(151,F565_2415, (Current));
				tr1 = F919_3191(RTCW(tr1), ((EIF_INTEGER_32) 3L));
				if (RTEQ(tr1, RTMS_EX_H("_",1,95))) {
					*(EIF_BOOLEAN *)(Current+ _CHROFF_7_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			}
			if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_4_) || (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_2_) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_3_)))) {
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_2_) <= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_3_) > ((EIF_INTEGER_32) 0L)))) {
					tr1 = F566_14282(Current);
					loc1 = F566_14273(Current, tr1, arg1);
				}
			} else {
				tr1 = F566_14284(Current);
				loc1 = F566_14273(Current, tr1, arg1);
			}
		} else {
			tr1 = F566_14283(Current);
			loc1 = F566_14273(Current, tr1, arg1);
		}
	} else {
		tr1 = F566_14281(Current);
		loc1 = F566_14273(Current, tr1, arg1);
	}
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) loc1;
	RTLE;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.batch_file_mode_make_a_step */
void F566_14299 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTGC;
	F566_14302(Current, arg1);
	F1291_4973(RTCW(arg2));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3562[Dtype(RTCW(arg2))-1291])(arg2, *(EIF_REFERENCE *)(Current + _REFACS_5_));
	F1291_4988(RTCW(arg2));
	RTLE;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.window_mode_make_a_step */
void F566_14300 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_2_) - ((EIF_INTEGER_32) 1L)))) {
		F566_14302(Current, arg2);
		F566_14301(Current);
	} else {
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_2_) == arg1) && (EIF_BOOLEAN)(arg1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_3_)))) {
			if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_2_) > ((EIF_INTEGER_32) 1L))) {
				tr1 = RTOUCR(0,F1_24, (Current));
				F125_145(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_6_));
			} else {
				loc1 = RTLNS(eif_new_type(259, 0x01).id, 259, _OBJSIZ_3_1_0_0_0_0_0_0_);
				F259_11823(RTCW(loc1));
				tr1 = RTOUCR(0,F1_24, (Current));
				tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
				tr2 = F371_13167(RTCW(tr2));
				F125_145(RTCW(tr1), tr2);
			}
		} else {
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_2_) <= arg1) && (EIF_BOOLEAN) (arg1 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_3_)))) {
				F566_14302(Current, arg2);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_2_)) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_6_0_2_) > ((EIF_INTEGER_32) 1L)))) {
					tr1 = RTOUCR(0,F1_24, (Current));
					F125_145(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_6_));
				}
				tr1 = RTOUCR(0,F1_24, (Current));
				F125_145(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_5_));
			} else {
				F566_14303(Current, arg2);
			}
		}
	}
	RTLE;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.retrieve_context_state_from_exec_log */
void F566_14301 (EIF_REFERENCE Current)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	tr2 = RTMS_EX_H("->",2,11582);
	loc1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R4692[Dtype(RTCW(tr1))-1560])(tr1, tr2, ((EIF_INTEGER_32) 1L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	loc2 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R4747[Dtype(RTCW(tr1))-1560])(tr1, (EIF_CHARACTER_8) '\012', loc1);
	tr1 = RTLNSMART(eif_new_type(1560, 1).id);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr3)+ _LNGOFF_1_1_0_2_);
	tr2 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4722[Dtype(RTCW(tr2))-1560])(tr2, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)), ti4_1);
	F1559_6607(RTCW(tr1), tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.exec */
void F566_14302 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(259, 0x01).id, 259, _OBJSIZ_3_1_0_0_0_0_0_0_);
	F259_11823(RTCW(loc1));
	tr1 = RTLNSMART(eif_new_type(1560, 1).id);
	F1558_6510(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	F259_11830(RTCW(loc1), arg1, *(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_));
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_3_0_);
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
		tr1 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
		tr2 = RTMS_EX_H("\012",1,10);
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4721[Dtype(RTCW(tr1))-1560])(tr1, tr2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	} else {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
		tr1 = *(EIF_REFERENCE *)(RTCW(tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.exec_without_log */
void F566_14303 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTGC;
	loc1 = RTLNS(eif_new_type(259, 0x01).id, 259, _OBJSIZ_3_1_0_0_0_0_0_0_);
	F259_11823(RTCW(loc1));
	tr1 = RTLNSMART(eif_new_type(1560, 1).id);
	F1558_6510(RTCW(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	F259_11831(RTCW(loc1), arg1);
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_3_0_);
	if ((EIF_BOOLEAN) !tb1) {
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTLE;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.man_page */

EIF_REFERENCE F566_14304 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (167,RTMS_EX_H("test(\012    p_threshold: THRESHOLD = 1 .. 101\012)\012play\012abort\012move(\012    dir: DIRECTION = {N, NE, E, SE, S, SW, W, NW}\012)\012land\012liftoff\012pass\012wormhole\012status",148,244070515));
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.etf_version */

EIF_REFERENCE F566_14305 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (166,RTMS_EX_H("1.14 (2019-10-12)",17,877892905));
}

void EIF_Minit1343 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
