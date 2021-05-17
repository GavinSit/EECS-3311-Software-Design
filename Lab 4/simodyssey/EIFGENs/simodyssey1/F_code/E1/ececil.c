#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"
#include "eoffsets.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* MISMATCH_INFORMATION wipe_out */
void A159_97 (EIF_REFERENCE Current)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE)) F999_3978)(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A159_161 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_POINTER)) F1008_4051)(Current, arg1, arg2);
}

	/* MISMATCH_INFORMATION set_string_versions */
void A159_162 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) F1008_4052)(Current, arg1, arg2);
}

	/* ETF_GUI_OUTPUT_HANDLER log_error */
void _A1279_35_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* ETF_GUI_OUTPUT_HANDLER log_error */
void __A1279_35_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* ETF_EVENT [G#1] execute */
void _A2021_36_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, closed [2].it_r);
}

	/* ETF_EVENT [G#1] execute */
void __A2021_36_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2, closed [2].it_r);
}

	/* ETF_CMD_LINE_OUTPUT_HANDLER log_empty */
void _A1280_34_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* ETF_CMD_LINE_OUTPUT_HANDLER log_empty */
void __A1280_34_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* ETF_CMD_LINE_OUTPUT_HANDLER log_error */
void _A1280_35_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* ETF_CMD_LINE_OUTPUT_HANDLER log_error */
void __A1280_35_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* ETF_CMD_LINE_OUTPUT_HANDLER log_command */
void _A1280_40_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* ETF_CMD_LINE_OUTPUT_HANDLER log_command */
void __A1280_40_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* TEST t1 */
EIF_BOOLEAN _A1186_78 ( EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r);
}

	/* TEST t1 */
EIF_BOOLEAN __A1186_78 ( EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	return f_ptr (closed [1].it_r);
}

	/* TEST t2 */
EIF_BOOLEAN _A1186_79 ( EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r);
}

	/* TEST t2 */
EIF_BOOLEAN __A1186_79 ( EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	return f_ptr (closed [1].it_r);
}

	/* EV_ACCELERATOR_LIST enable_item_parented */
void _A1350_152_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_ACCELERATOR_LIST enable_item_parented */
void __A1350_152_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_ACCELERATOR_LIST disable_item_parented */
void _A1350_153_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_ACCELERATOR_LIST disable_item_parented */
void __A1350_153_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_TREE_ITEM_CHECK_ACTION_SEQUENCE wrapper */
void _A1352_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, closed [2].it_r);
}

	/* EV_TREE_ITEM_CHECK_ACTION_SEQUENCE wrapper */
void __A1352_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2, closed [2].it_r);
}

	/* EV_VALUE_CHANGE_ACTION_SEQUENCE wrapper */
void _A1353_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_i4, closed [2].it_r);
}

	/* EV_VALUE_CHANGE_ACTION_SEQUENCE wrapper */
void __A1353_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2)
{
	f_ptr (closed [1].it_r, op_2, closed [2].it_r);
}

	/* EV_MULTI_COLUMN_LIST_ROW_SELECT_ACTION_SEQUENCE wrapper */
void _A1354_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, closed [2].it_r);
}

	/* EV_MULTI_COLUMN_LIST_ROW_SELECT_ACTION_SEQUENCE wrapper */
void __A1354_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2, closed [2].it_r);
}

	/* EV_COLUMN_ACTION_SEQUENCE wrapper */
void _A1355_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_i4, closed [2].it_r);
}

	/* EV_COLUMN_ACTION_SEQUENCE wrapper */
void __A1355_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2)
{
	f_ptr (closed [1].it_r, op_2, closed [2].it_r);
}

	/* EV_SCROLL_ACTION_SEQUENCE wrapper */
void _A1356_184_2_3 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_i4, open [2].it_i4, closed [2].it_r);
}

	/* EV_SCROLL_ACTION_SEQUENCE wrapper */
void __A1356_184_2_3 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2, EIF_INTEGER_32 op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3, closed [2].it_r);
}

	/* EV_MENU_ITEM_SELECT_ACTION_SEQUENCE wrapper */
void _A1357_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, closed [2].it_r);
}

	/* EV_MENU_ITEM_SELECT_ACTION_SEQUENCE wrapper */
void __A1357_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2, closed [2].it_r);
}

	/* EV_NEW_ITEM_ACTION_SEQUENCE wrapper */
void _A1358_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, closed [2].it_r);
}

	/* EV_NEW_ITEM_ACTION_SEQUENCE wrapper */
void __A1358_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2, closed [2].it_r);
}

	/* EV_DOCKABLE_SOURCE_ACTION_SEQUENCE wrapper */
void _A1359_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, closed [2].it_r);
}

	/* EV_DOCKABLE_SOURCE_ACTION_SEQUENCE wrapper */
void __A1359_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2, closed [2].it_r);
}

	/* EV_PND_FINISHED_ACTION_SEQUENCE wrapper */
void _A1360_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, closed [2].it_r);
}

	/* EV_PND_FINISHED_ACTION_SEQUENCE wrapper */
void __A1360_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2, closed [2].it_r);
}

	/* EV_KEY_ACTION_SEQUENCE wrapper */
void _A1361_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, closed [2].it_r);
}

	/* EV_KEY_ACTION_SEQUENCE wrapper */
void __A1361_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2, closed [2].it_r);
}

	/* EV_INTEGER_ACTION_SEQUENCE wrapper */
void _A1362_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_i4, closed [2].it_r);
}

	/* EV_INTEGER_ACTION_SEQUENCE wrapper */
void __A1362_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2)
{
	f_ptr (closed [1].it_r, op_2, closed [2].it_r);
}

	/* EV_KEY_STRING_ACTION_SEQUENCE wrapper */
void _A1363_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, closed [2].it_r);
}

	/* EV_KEY_STRING_ACTION_SEQUENCE wrapper */
void __A1363_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2, closed [2].it_r);
}

	/* EV_DPI_ACTION_SEQUENCE wrapper */
void _A1364_184_2_3_4_5_6 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_i4, open [2].it_i4, open [3].it_i4, open [4].it_i4, open [5].it_i4, closed [2].it_r);
}

	/* EV_DPI_ACTION_SEQUENCE wrapper */
void __A1364_184_2_3_4_5_6 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2, EIF_INTEGER_32 op_3, EIF_INTEGER_32 op_4, EIF_INTEGER_32 op_5, EIF_INTEGER_32 op_6)
{
	f_ptr (closed [1].it_r, op_2, op_3, op_4, op_5, op_6, closed [2].it_r);
}

	/* EV_GEOMETRY_ACTION_SEQUENCE wrapper */
void _A1365_184_2_3_4_5 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_i4, open [2].it_i4, open [3].it_i4, open [4].it_i4, closed [2].it_r);
}

	/* EV_GEOMETRY_ACTION_SEQUENCE wrapper */
void __A1365_184_2_3_4_5 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2, EIF_INTEGER_32 op_3, EIF_INTEGER_32 op_4, EIF_INTEGER_32 op_5)
{
	f_ptr (closed [1].it_r, op_2, op_3, op_4, op_5, closed [2].it_r);
}

	/* EV_PND_START_ACTION_SEQUENCE wrapper */
void _A1366_184_2_3 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_i4, open [2].it_i4, closed [2].it_r);
}

	/* EV_PND_START_ACTION_SEQUENCE wrapper */
void __A1366_184_2_3 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2, EIF_INTEGER_32 op_3)
{
	f_ptr (closed [1].it_r, op_2, op_3, closed [2].it_r);
}

	/* EV_POINTER_MOTION_ACTION_SEQUENCE wrapper */
void _A1367_184_2_3_4_5_6_7_8 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REAL_64, EIF_REAL_64, EIF_REAL_64, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_i4, open [2].it_i4, open [3].it_r8, open [4].it_r8, open [5].it_r8, open [6].it_i4, open [7].it_i4, closed [2].it_r);
}

	/* EV_POINTER_MOTION_ACTION_SEQUENCE wrapper */
void __A1367_184_2_3_4_5_6_7_8 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REAL_64, EIF_REAL_64, EIF_REAL_64, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2, EIF_INTEGER_32 op_3, EIF_REAL_64 op_4, EIF_REAL_64 op_5, EIF_REAL_64 op_6, EIF_INTEGER_32 op_7, EIF_INTEGER_32 op_8)
{
	f_ptr (closed [1].it_r, op_2, op_3, op_4, op_5, op_6, op_7, op_8, closed [2].it_r);
}

	/* EV_PND_MOTION_ACTION_SEQUENCE wrapper */
void _A1368_184_2_3_4 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_i4, open [2].it_i4, open [3].it_r, closed [2].it_r);
}

	/* EV_PND_MOTION_ACTION_SEQUENCE wrapper */
void __A1368_184_2_3_4 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2, EIF_INTEGER_32 op_3, EIF_REFERENCE op_4)
{
	f_ptr (closed [1].it_r, op_2, op_3, op_4, closed [2].it_r);
}

	/* EV_NOTIFY_ACTION_SEQUENCE wrapper */
void _A1369_183 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EV_NOTIFY_ACTION_SEQUENCE wrapper */
void __A1369_183 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EV_NOTIFY_ACTION_SEQUENCE call */
void _A1369_182 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EV_NOTIFY_ACTION_SEQUENCE call */
void __A1369_182 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EV_POINTER_BUTTON_ACTION_SEQUENCE wrapper */
void _A1370_184_2_3_4_5_6_7_8_9 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REAL_64, EIF_REAL_64, EIF_REAL_64, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_i4, open [2].it_i4, open [3].it_i4, open [4].it_r8, open [5].it_r8, open [6].it_r8, open [7].it_i4, open [8].it_i4, closed [2].it_r);
}

	/* EV_POINTER_BUTTON_ACTION_SEQUENCE wrapper */
void __A1370_184_2_3_4_5_6_7_8_9 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REAL_64, EIF_REAL_64, EIF_REAL_64, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2, EIF_INTEGER_32 op_3, EIF_INTEGER_32 op_4, EIF_REAL_64 op_5, EIF_REAL_64 op_6, EIF_REAL_64 op_7, EIF_INTEGER_32 op_8, EIF_INTEGER_32 op_9)
{
	f_ptr (closed [1].it_r, op_2, op_3, op_4, op_5, op_6, op_7, op_8, op_9, closed [2].it_r);
}

	/* ETF_DUMMY etf_dummy */
void _A1392_60 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_DUMMY etf_dummy */
void __A1392_60 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_STATUS_INTERFACE status */
void _A1393_60 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_STATUS_INTERFACE status */
void __A1393_60 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_WORMHOLE_INTERFACE wormhole */
void _A1395_60 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_WORMHOLE_INTERFACE wormhole */
void __A1395_60 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_LIFTOFF_INTERFACE liftoff */
void _A1397_60 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_LIFTOFF_INTERFACE liftoff */
void __A1397_60 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_ABORT_INTERFACE abort */
void _A1399_60 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_ABORT_INTERFACE abort */
void __A1399_60 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_PLAY_INTERFACE play */
void _A1401_60 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_PLAY_INTERFACE play */
void __A1401_60 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_TEST_INTERFACE test */
void _A1403_61_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_i4);
}

	/* ETF_TEST_INTERFACE test */
void __A1403_61_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32), EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* ETF_PASS_INTERFACE pass */
void _A1405_60 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_PASS_INTERFACE pass */
void __A1405_60 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_LAND_INTERFACE land */
void _A1407_60 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_LAND_INTERFACE land */
void __A1407_60 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_MOVE_INTERFACE move */
void _A1409_61_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_i4);
}

	/* ETF_MOVE_INTERFACE move */
void __A1409_61_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32), EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* WEL_FONT_FAMILY_ENUMERATOR update_current */
void A1432_42 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER)) F1286_15062)(Current, arg1, arg2, arg3, arg4);
}

	/* HASH_TABLE [G#1, G#2] put */
void _A413_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r, closed [3].it_r);
}

	/* HASH_TABLE [G#1, INTEGER_32] put */
void _A536_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	EIF_REFERENCE arg2 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (3);
	
	RTLR(0,closed [1].it_r);
	RTLR(2,arg2);
	RTLR(1,closed [2].it_r);
	RTLIU(3);
	arg2 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)arg2 = closed [3].it_i4;
	f_ptr (closed [1].it_r, closed [2].it_r, arg2);
	RTLE;
}

	/* HASH_TABLE [INTEGER_32, G#2] put */
void _A936_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	EIF_REFERENCE arg1 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (3);
	
	RTLR(0,closed [1].it_r);
	RTLR(2,closed [3].it_r);
	RTLR(1,arg1);
	RTLIU(3);
	arg1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)arg1 = closed [2].it_i4;
	f_ptr (closed [1].it_r, arg1, closed [3].it_r);
	RTLE;
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] put */
void _A601_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, closed [3].it_i4);
}

	/* HASH_TABLE [G#1, POINTER] put */
void _A2026_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	EIF_REFERENCE arg2 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (3);
	
	RTLR(0,closed [1].it_r);
	RTLR(2,arg2);
	RTLR(1,closed [2].it_r);
	RTLIU(3);
	arg2 = RTLNS(eif_new_type(1550, 0x00).id, 1550, _OBJSIZ_0_0_0_0_0_1_0_0_);
	*(EIF_POINTER *)arg2 = closed [3].it_p;
	f_ptr (closed [1].it_r, closed [2].it_r, arg2);
	RTLE;
}

	/* HASH_TABLE [NATURAL_32, POINTER] put */
void _A887_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_NATURAL_32, EIF_POINTER), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_n4, closed [3].it_p);
}

	/* HASH_TABLE [G#1, G#2] put */
void __A413_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r, closed [3].it_r);
}

	/* HASH_TABLE [G#1, INTEGER_32] put */
void __A536_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	EIF_REFERENCE arg2 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (3);
	
	RTLR(0,closed [1].it_r);
	RTLR(2,arg2);
	RTLR(1,closed [2].it_r);
	RTLIU(3);
	arg2 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)arg2 = closed [3].it_i4;
	f_ptr (closed [1].it_r, closed [2].it_r, arg2);
	RTLE;
}

	/* HASH_TABLE [INTEGER_32, G#2] put */
void __A936_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	EIF_REFERENCE arg1 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (3);
	
	RTLR(0,closed [1].it_r);
	RTLR(2,closed [3].it_r);
	RTLR(1,arg1);
	RTLIU(3);
	arg1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)arg1 = closed [2].it_i4;
	f_ptr (closed [1].it_r, arg1, closed [3].it_r);
	RTLE;
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] put */
void __A601_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_i4, closed [3].it_i4);
}

	/* HASH_TABLE [G#1, POINTER] put */
void __A2026_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	EIF_REFERENCE arg2 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (3);
	
	RTLR(0,closed [1].it_r);
	RTLR(2,arg2);
	RTLR(1,closed [2].it_r);
	RTLIU(3);
	arg2 = RTLNS(eif_new_type(1550, 0x00).id, 1550, _OBJSIZ_0_0_0_0_0_1_0_0_);
	*(EIF_POINTER *)arg2 = closed [3].it_p;
	f_ptr (closed [1].it_r, closed [2].it_r, arg2);
	RTLE;
}

	/* HASH_TABLE [NATURAL_32, POINTER] put */
void __A887_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_NATURAL_32, EIF_POINTER), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_n4, closed [3].it_p);
}

	/* HASH_TABLE [G#1, G#2] remove */
void _A413_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* HASH_TABLE [G#1, INTEGER_32] remove */
void _A536_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	EIF_REFERENCE arg1 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (2);
	
	RTLR(0,closed [1].it_r);
	RTLR(1,arg1);
	RTLIU(2);
	arg1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)arg1 = closed [2].it_i4;
	f_ptr (closed [1].it_r, arg1);
	RTLE;
}

	/* HASH_TABLE [INTEGER_32, G#2] remove */
void _A936_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] remove */
void _A601_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_i4);
}

	/* HASH_TABLE [G#1, POINTER] remove */
void _A2026_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	EIF_REFERENCE arg1 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (2);
	
	RTLR(0,closed [1].it_r);
	RTLR(1,arg1);
	RTLIU(2);
	arg1 = RTLNS(eif_new_type(1550, 0x00).id, 1550, _OBJSIZ_0_0_0_0_0_1_0_0_);
	*(EIF_POINTER *)arg1 = closed [2].it_p;
	f_ptr (closed [1].it_r, arg1);
	RTLE;
}

	/* HASH_TABLE [NATURAL_32, POINTER] remove */
void _A887_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_POINTER), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* HASH_TABLE [G#1, G#2] remove */
void __A413_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* HASH_TABLE [G#1, INTEGER_32] remove */
void __A536_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	EIF_REFERENCE arg1 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (2);
	
	RTLR(0,closed [1].it_r);
	RTLR(1,arg1);
	RTLIU(2);
	arg1 = RTLNS(eif_new_type(1508, 0x00).id, 1508, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)arg1 = closed [2].it_i4;
	f_ptr (closed [1].it_r, arg1);
	RTLE;
}

	/* HASH_TABLE [INTEGER_32, G#2] remove */
void __A936_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] remove */
void __A601_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_i4);
}

	/* HASH_TABLE [G#1, POINTER] remove */
void __A2026_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	EIF_REFERENCE arg1 = (EIF_REFERENCE) 0;
	GTCX
	RTLD;
	RTLI (2);
	
	RTLR(0,closed [1].it_r);
	RTLR(1,arg1);
	RTLIU(2);
	arg1 = RTLNS(eif_new_type(1550, 0x00).id, 1550, _OBJSIZ_0_0_0_0_0_1_0_0_);
	*(EIF_POINTER *)arg1 = closed [2].it_p;
	f_ptr (closed [1].it_r, arg1);
	RTLE;
}

	/* HASH_TABLE [NATURAL_32, POINTER] remove */
void __A887_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_POINTER), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_p);
}

	/* WEL_RICH_EDIT_STREAM_OUT internal_callback */
EIF_INTEGER_32 A1552_76 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32)) F1414_17559)(Current, arg1, arg2);
}

	/* WEL_RICH_EDIT_STREAM_IN internal_callback */
EIF_INTEGER_32 A1555_76 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	return (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER)) F1417_17574)(Current, arg1, arg2, arg3);
}

	/* EV_WINDOW_I connect_accelerator */
void _A1752_263_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_WINDOW_I connect_accelerator */
void __A1752_263_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_WINDOW_I disconnect_accelerator */
void _A1752_264_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_WINDOW_I disconnect_accelerator */
void __A1752_264_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* ETF_MAIN_WINDOW_IMP command_return_key_pressed */
void _A1640_318 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP command_return_key_pressed */
void __A1640_318 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP execute_pressed */
void _A1640_319 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP execute_pressed */
void __A1640_319 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP reset_pressed */
void _A1640_320 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP reset_pressed */
void __A1640_320 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP load_pressed */
void _A1640_321 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP load_pressed */
void __A1640_321 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP destroy_and_exit_if_last */
void _A1640_262 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP destroy_and_exit_if_last */
void __A1640_262 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* EV_DIALOG dialog_key_press_action */
void _A1642_310_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_DIALOG dialog_key_press_action */
void __A1642_310_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_DIALOG destroy */
void _A1642_262 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* EV_DIALOG destroy */
void __A1642_262 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* EV_MESSAGE_DIALOG on_button_press */
void _A1644_351 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EV_MESSAGE_DIALOG on_button_press */
void __A1644_351 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EV_MESSAGE_DIALOG on_key_press */
void _A1644_352_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_MESSAGE_DIALOG on_key_press */
void __A1644_352_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_CHECKABLE_TREE is_item_checked */
EIF_BOOLEAN _A1684_308_2 ( EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_CHECKABLE_TREE is_item_checked */
EIF_BOOLEAN __A1684_308_2 ( EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	return f_ptr (closed [1].it_r, op_2);
}

	/* EV_APPLICATION_I contextual_help */
void _A1707_301_2_3_4_5_6_7_8_9 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REAL_64, EIF_REAL_64, EIF_REAL_64, EIF_INTEGER_32, EIF_INTEGER_32), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_i4, open [2].it_i4, open [3].it_i4, open [4].it_r8, open [5].it_r8, open [6].it_r8, open [7].it_i4, open [8].it_i4);
}

	/* EV_APPLICATION_I contextual_help */
void __A1707_301_2_3_4_5_6_7_8_9 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REAL_64, EIF_REAL_64, EIF_REAL_64, EIF_INTEGER_32, EIF_INTEGER_32), EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2, EIF_INTEGER_32 op_3, EIF_INTEGER_32 op_4, EIF_REAL_64 op_5, EIF_REAL_64 op_6, EIF_REAL_64 op_7, EIF_INTEGER_32 op_8, EIF_INTEGER_32 op_9)
{
	f_ptr (closed [1].it_r, op_2, op_3, op_4, op_5, op_6, op_7, op_8, op_9);
}

	/* EV_APPLICATION_I safe_destroy */
void _A1707_33 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* EV_APPLICATION_I safe_destroy */
void __A1707_33 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* EV_APPLICATION_I inline-agent#1 of create_target_menu */
EIF_BOOLEAN _A1707_306_2_3 ( EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) F1714_25843)(closed [1].it_r, open [1].it_r, open [2].it_r);
}

	/* EV_APPLICATION_I inline-agent#1 of create_target_menu */
EIF_BOOLEAN __A1707_306_2_3 ( EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3)
{
	return (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) F1714_25843)(closed [1].it_r, op_2, op_3);
}

	/* EV_APPLICATION_I inline-agent#2 of create_target_menu */
void _A1707_307_2_3_4 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) F1714_25844)(closed [1].it_r, open [1].it_r, open [2].it_r, open [3].it_r);
}

	/* EV_APPLICATION_I inline-agent#2 of create_target_menu */
void __A1707_307_2_3_4 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2, EIF_REFERENCE op_3, EIF_REFERENCE op_4)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) F1714_25844)(closed [1].it_r, op_2, op_3, op_4);
}

	/* EV_APPLICATION_I help_handler */
void _A1707_298 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* EV_APPLICATION_I help_handler */
void __A1707_298 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* EV_APPLICATION_I enable_contextual_help */
void _A1707_243 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* EV_APPLICATION_I enable_contextual_help */
void __A1707_243 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* EV_PND_ACTION_SEQUENCE call */
void _A1351_183 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EV_PND_ACTION_SEQUENCE call */
void __A1351_183 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EV_MENU_ITEM_LIST_IMP inline-agent#1 of menu_item_clicked */
EIF_BOOLEAN _A1711_244_2 ( EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) F1722_25846)(closed [1].it_r, open [1].it_r, closed [2].it_i4);
}

	/* EV_MENU_ITEM_LIST_IMP inline-agent#1 of menu_item_clicked */
EIF_BOOLEAN __A1711_244_2 ( EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	return (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) F1722_25846)(closed [1].it_r, op_2, closed [2].it_i4);
}

	/* EV_MENU_ITEM_LIST_IMP inline-agent#1 of menu_opened */
EIF_BOOLEAN _A1711_245_2 ( EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) F1722_25847)(closed [1].it_r, open [1].it_r, closed [2].it_r);
}

	/* EV_MENU_ITEM_LIST_IMP inline-agent#1 of menu_opened */
EIF_BOOLEAN __A1711_245_2 ( EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	return (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) F1722_25847)(closed [1].it_r, op_2, closed [2].it_r);
}

	/* EV_DOCKABLE_SOURCE_I close_dockable_dialog */
void _A1715_100 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EV_DOCKABLE_SOURCE_I close_dockable_dialog */
void __A1715_100 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EV_CHECKABLE_TREE_I get_state */
void _A1761_271_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r, closed [2].it_r);
}

	/* EV_CHECKABLE_TREE_I get_state */
void __A1761_271_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2, closed [2].it_r);
}

	/* EV_PIXMAP_IMP_LOADER update_fields */
void A1854_96 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_POINTER arg5, EIF_POINTER arg6)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_POINTER, EIF_POINTER)) F1872_21388)(Current, arg1, arg2, arg3, arg4, arg5, arg6);
}

	/* EV_PIXMAP_IMP refresh_color_depth */
void _A1855_466 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* EV_PIXMAP_IMP refresh_color_depth */
void __A1855_466 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* EV_FONT_IMP update_preferred_faces */
void _A1869_192_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_FONT_IMP update_preferred_faces */
void __A1869_192_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* WEL_WINDOW_ENUMERATOR enumerate_hwnd_callback */
void A1884_146 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTNR) (Current);
}

	/* WEL_WINDOW_ENUMERATOR enumerate_child_windows_callback */
void A1884_145 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER)) F1901_22224)(Current, arg1);
}

	/* WEL_DISPATCHER window_procedure */
EIF_POINTER A1891_367 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER, EIF_POINTER)) F1907_22359)(Current, arg1, arg2, arg3, arg4);
}

	/* WEL_DISPATCHER dialog_procedure */
EIF_POINTER A1891_368 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32, EIF_POINTER, EIF_POINTER)) F1907_22360)(Current, arg1, arg2, arg3, arg4);
}

	/* EV_APPLICATION_IMP on_exception_action */
void _A1893_271_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_APPLICATION_IMP on_exception_action */
void __A1893_271_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_PICK_AND_DROPABLE_IMP real_start_transport */
void _A1939_255 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REAL_64, EIF_REAL_64, EIF_REAL_64, EIF_INTEGER_32, EIF_INTEGER_32), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r, closed [3].it_i4, closed [4].it_i4, closed [5].it_i4, closed [6].it_r8, closed [7].it_r8, closed [8].it_r8, closed [9].it_i4, closed [10].it_i4);
}

	/* EV_PICK_AND_DROPABLE_IMP real_start_transport */
void __A1939_255 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REAL_64, EIF_REAL_64, EIF_REAL_64, EIF_INTEGER_32, EIF_INTEGER_32), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r, closed [3].it_i4, closed [4].it_i4, closed [5].it_i4, closed [6].it_r8, closed [7].it_r8, closed [8].it_r8, closed [9].it_i4, closed [10].it_i4);
}

	/* EV_WIDGET_IMP enable_drag_accept_files */
void _A1953_754 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* EV_WIDGET_IMP enable_drag_accept_files */
void __A1953_754 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* EV_WIDGET_IMP disable_drag_accept_files */
void _A1953_755 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* EV_WIDGET_IMP disable_drag_accept_files */
void __A1953_755 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* EV_CONTAINER_IMP disable_widget_sensitivity */
void _A1954_813_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_CONTAINER_IMP disable_widget_sensitivity */
void __A1954_813_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_CONTAINER_IMP add_radio_button */
void _A1954_810_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_CONTAINER_IMP add_radio_button */
void __A1954_810_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_CONTAINER_IMP enable_widget_sensitivity */
void _A1954_812_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_CONTAINER_IMP enable_widget_sensitivity */
void __A1954_812_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_CONTAINER_IMP remove_radio_button */
void _A1954_811_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_CONTAINER_IMP remove_radio_button */
void __A1954_811_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_BOX_IMP removed_so_update_non_expandable_children */
void _A1957_1811_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_BOX_IMP removed_so_update_non_expandable_children */
void __A1957_1811_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_BOX_IMP added_so_update_non_expandable_children */
void _A1957_1812_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_BOX_IMP added_so_update_non_expandable_children */
void __A1957_1812_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_VERTICAL_BOX_IMP set_item_size */
void _A1958_1824 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_BOOLEAN), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r, closed [3].it_i4, closed [4].it_i4, closed [5].it_i4, closed [6].it_i4, closed [7].it_b);
}

	/* EV_VERTICAL_BOX_IMP set_item_size */
void __A1958_1824 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_BOOLEAN), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r, closed [3].it_i4, closed [4].it_i4, closed [5].it_i4, closed [6].it_i4, closed [7].it_b);
}

	/* EV_HORIZONTAL_BOX_IMP set_item_size */
void _A1959_1824 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_BOOLEAN), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r, closed [3].it_i4, closed [4].it_i4, closed [5].it_i4, closed [6].it_i4, closed [7].it_b);
}

	/* EV_HORIZONTAL_BOX_IMP set_item_size */
void __A1959_1824 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_BOOLEAN), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r, closed [3].it_i4, closed [4].it_i4, closed [5].it_i4, closed [6].it_i4, closed [7].it_b);
}

	/* EV_DIALOG_IMP_COMMON copy_box_attributes */
void _A1969_1881 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, closed [2].it_r, closed [3].it_r);
}

	/* EV_DIALOG_IMP_COMMON copy_box_attributes */
void __A1969_1881 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r, closed [2].it_r, closed [3].it_r);
}

	/* EV_TOOL_BAR_IMP add_button */
void _A1973_1859_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_TOOL_BAR_IMP add_button */
void __A1973_1859_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_TOOL_BAR_IMP add_radio_button */
void _A1973_1858_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_TOOL_BAR_IMP add_radio_button */
void __A1973_1858_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_TOOL_BAR_IMP add_toggle_button */
void _A1973_1861_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_TOOL_BAR_IMP add_toggle_button */
void __A1973_1861_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_TOOL_BAR_IMP remove_radio_button */
void _A1973_1860_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EV_TOOL_BAR_IMP remove_radio_button */
void __A1973_1860_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* EV_GAUGE_IMP set_range */
void _A1982_793 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r);
}

	/* EV_GAUGE_IMP set_range */
void __A1982_793 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	f_ptr (closed [1].it_r);
}

	/* EV_RICH_TEXT_IMP update_tab_positions */
void _A1993_2147_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	f_ptr (closed [1].it_r, open [1].it_i4);
}

	/* EV_RICH_TEXT_IMP update_tab_positions */
void __A1993_2147_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_INTEGER_32), EIF_TYPED_VALUE * closed, EIF_INTEGER_32 op_2)
{
	f_ptr (closed [1].it_r, op_2);
}

	/* STRING_8 is_empty */
EIF_BOOLEAN _A233_162_1 ( EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	return (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) F743_2537)(open [1].it_r);
}

	/* STRING_8 is_empty */
EIF_BOOLEAN __A233_162_1 ( EIF_BOOLEAN(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_1)
{
	return (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) F743_2537)(op_1);
}


#ifdef __cplusplus
}
#endif
