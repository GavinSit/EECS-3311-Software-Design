/*
 * Code for class WEL_API
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "we1025.h"
#include <windows.h>
#include <winspool.h>
#include "wel.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F67_9707
static int inline_F67_9707 (EIF_POINTER arg1)
{
	return (int) (SetForegroundWindow ((HWND)arg1))
	;
}
#define INLINE_F67_9707
#endif
#ifndef INLINE_F67_9716
static EIF_POINTER inline_F67_9716 (void)
{
	return (EIF_POINTER) GetFocus();
	;
}
#define INLINE_F67_9716
#endif
#ifndef INLINE_F67_9719
static int inline_F67_9719 (EIF_POINTER arg1)
{
	return EIF_TEST(DestroyWindow((HWND) arg1));
	;
}
#define INLINE_F67_9719
#endif
#ifndef INLINE_F67_9729
static EIF_POINTER inline_F67_9729 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_POINTER) (MonitorFromRect((LPCRECT) arg1, (DWORD) arg2))
	;
}
#define INLINE_F67_9729
#endif
#ifndef INLINE_F67_9731
static int inline_F67_9731 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return (int) (GetMonitorInfo ((HMONITOR) arg1, (LPMONITORINFO) arg2))
	;
}
#define INLINE_F67_9731
#endif
#ifndef INLINE_F67_9732
static int inline_F67_9732 (EIF_POINTER arg1)
{
	return (int) (GetCaretPos ((LPPOINT) arg1))
	;
}
#define INLINE_F67_9732
#endif
#ifndef INLINE_F67_9734
static int inline_F67_9734 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return EIF_TEST(EndDialog((HWND) arg1, (INT_PTR) arg2));
	;
}
#define INLINE_F67_9734
#endif
#ifndef INLINE_F67_9735
static EIF_INTEGER_32 inline_F67_9735 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return (EIF_INTEGER_32) (SetMenu ((HWND) arg1, (HMENU) arg2))
	;
}
#define INLINE_F67_9735
#endif
#ifndef INLINE_F67_9736
static EIF_INTEGER_32 inline_F67_9736 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_POINTER arg6, EIF_POINTER arg7)
{
	return (EIF_INTEGER) TrackPopupMenu((HMENU) arg1, (UINT) arg2, (int) arg3, (int) arg4, (int) arg5, (HWND) arg6, (RECT *) arg7);
	;
}
#define INLINE_F67_9736
#endif
#ifndef INLINE_F67_9738
static EIF_INTEGER_32 inline_F67_9738 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	return (EIF_INTEGER_32) (GetMenuBarInfo((HWND) arg1, (LONG) arg2, (LONG) arg3, (PMENUBARINFO) arg4))
	;
}
#define INLINE_F67_9738
#endif
#ifndef INLINE_F67_9739
static EIF_INTEGER_32 inline_F67_9739 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	return (EIF_INTEGER_32) (GetMenuItemRect((HWND) arg1, (HMENU) arg2, (UINT) arg3, (RECT *) arg4))
	;
}
#define INLINE_F67_9739
#endif
#ifndef INLINE_F67_9742
static int inline_F67_9742 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (int) (PostMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4))
	;
}
#define INLINE_F67_9742
#endif
#ifndef INLINE_F67_9743
static void inline_F67_9743 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	PostMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4)
	;
}
#define INLINE_F67_9743
#endif
#ifndef INLINE_F67_9746
static EIF_POINTER inline_F67_9746 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (EIF_POINTER) (SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4))
	;
}
#define INLINE_F67_9746
#endif
#ifndef INLINE_F67_9747
static EIF_INTEGER_32 inline_F67_9747 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (EIF_INTEGER_32) (SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4))
	;
}
#define INLINE_F67_9747
#endif
#ifndef INLINE_F67_9748
static int inline_F67_9748 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return (int) (SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4))
	;
}
#define INLINE_F67_9748
#endif
#ifndef INLINE_F67_9749
static void inline_F67_9749 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	SendMessage ((HWND) arg1, (UINT) arg2, (WPARAM) arg3, (LPARAM) arg4)
	;
}
#define INLINE_F67_9749
#endif
#ifndef INLINE_F67_9751
static EIF_INTEGER_32 inline_F67_9751 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	return (EIF_INTEGER_32) (DragQueryFile ((HDROP) arg1, (UINT) arg2, (LPTSTR) arg3, (UINT) arg4))
	;
}
#define INLINE_F67_9751
#endif
#ifndef INLINE_F67_9756
static EIF_INTEGER_32 inline_F67_9756 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER* arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6, EIF_INTEGER_32 arg7)
{
	return (EIF_INTEGER) DuplicateHandle (
	(HANDLE) arg1,
	(HANDLE) arg2,
	(HANDLE) arg3,
	(LPHANDLE) arg4,
	(DWORD) arg5,
	(BOOL) arg6,
	(DWORD) arg7);
	;
}
#define INLINE_F67_9756
#endif
#ifndef INLINE_F67_9757
static EIF_INTEGER_32 inline_F67_9757 (EIF_POINTER arg1)
{
	return (EIF_INTEGER) CloseHandle ((HANDLE) arg1);
	;
}
#define INLINE_F67_9757
#endif
#ifndef INLINE_F67_9758
static EIF_POINTER inline_F67_9758 (void)
{
	return (EIF_POINTER) GetCurrentProcess();
	;
}
#define INLINE_F67_9758
#endif
#ifndef INLINE_F67_9762
static EIF_INTEGER_32 inline_F67_9762 (EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	return (EIF_INTEGER) MsgWaitForMultipleObjectsEx(
	(DWORD) arg1,
	(LPHANDLE) arg2,
	(DWORD) arg3,
	(DWORD) arg4,
	(DWORD) arg5);
	;
}
#define INLINE_F67_9762
#endif
#ifndef INLINE_F67_9780
static EIF_INTEGER_32 inline_F67_9780 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	return GetScrollInfo((HWND) arg1, (int) arg2, (LPSCROLLINFO) arg3);
	;
}
#define INLINE_F67_9780
#endif
#ifndef INLINE_F67_9785
static int inline_F67_9785 (EIF_POINTER arg1)
{
	return EIF_TEST(ClosePrinter((HANDLE) arg1));
	;
}
#define INLINE_F67_9785
#endif
#ifndef INLINE_F67_9786
static EIF_INTEGER_32 inline_F67_9786 (EIF_CHARACTER_32 arg1)
{
	return (EIF_INTEGER_32) VkKeyScan ((TCHAR) arg1);
	;
}
#define INLINE_F67_9786
#endif
#ifndef INLINE_F67_9788
static EIF_POINTER inline_F67_9788 (EIF_POINTER arg1)
{
	return (EIF_POINTER) LoadLibrary ((LPCTSTR) arg1);
	;
}
#define INLINE_F67_9788
#endif
#ifndef INLINE_F67_9789
static int inline_F67_9789 (EIF_POINTER arg1)
{
	return (BOOL) FreeLibrary ((HMODULE) arg1);
	;
}
#define INLINE_F67_9789
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_API}.set_foreground_window */
EIF_BOOLEAN F67_9707 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = EIF_TEST(inline_F67_9707 ((EIF_POINTER) arg1));
	return Result;
}

/* {WEL_API}.set_window_text */
void F67_9708 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	
	
	SetWindowText(((HWND) arg1), ((LPCTSTR) arg2));
}

/* {WEL_API}.get_window_text */
EIF_INTEGER_32 F67_9709 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) GetWindowText(((HWND) arg1), ((LPTSTR) arg2), ((int) arg3));
	return Result;
}

/* {WEL_API}.set_parent */
EIF_POINTER F67_9710 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) SetParent(((HWND) arg1), ((HWND) arg2));
	return Result;
}

/* {WEL_API}.set_window_pos */
EIF_BOOLEAN F67_9712 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6, EIF_INTEGER_32 arg7)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = (EIF_BOOLEAN) EIF_TEST(SetWindowPos(((HWND) arg1), ((HWND) arg2), ((int) arg3), ((int) arg4), ((int) arg5), ((int) arg6), ((UINT) arg7)));
	return Result;
}

/* {WEL_API}.get_focus */
EIF_POINTER F67_9716 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F67_9716 ();
	return Result;
}

/* {WEL_API}.destroy_window */
EIF_BOOLEAN F67_9719 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = EIF_TEST(inline_F67_9719 ((EIF_POINTER) arg1));
	return Result;
}

/* {WEL_API}.loword */
EIF_INTEGER_32 F67_9723 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) LOWORD((arg1));
	return Result;
}

/* {WEL_API}.hiword */
EIF_INTEGER_32 F67_9724 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = (EIF_INTEGER_32) HIWORD((arg1));
	return Result;
}

/* {WEL_API}.lparam */
EIF_POINTER F67_9726 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) (LPARAM)((arg1));
	return Result;
}

/* {WEL_API}.monitor_from_rect */
EIF_POINTER F67_9729 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F67_9729 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	return Result;
}

/* {WEL_API}.get_monitor_info */
EIF_BOOLEAN F67_9731 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = EIF_TEST(inline_F67_9731 ((EIF_POINTER) arg1, (EIF_POINTER) arg2));
	return Result;
}

/* {WEL_API}.get_caret_pos */
EIF_BOOLEAN F67_9732 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = EIF_TEST(inline_F67_9732 ((EIF_POINTER) arg1));
	return Result;
}

/* {WEL_API}.end_dialog */
EIF_BOOLEAN F67_9734 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = EIF_TEST(inline_F67_9734 ((EIF_POINTER) arg1, (EIF_POINTER) arg2));
	return Result;
}

/* {WEL_API}.set_menu */
EIF_INTEGER_32 F67_9735 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F67_9735 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
	return Result;
}

/* {WEL_API}.track_popup_menu */
EIF_INTEGER_32 F67_9736 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_POINTER arg6, EIF_POINTER arg7)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F67_9736 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32) arg4, (EIF_INTEGER_32) arg5, (EIF_POINTER) arg6, (EIF_POINTER) arg7);
	return Result;
}

/* {WEL_API}.get_menu_bar_info */
EIF_INTEGER_32 F67_9738 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F67_9738 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4);
	return Result;
}

/* {WEL_API}.get_menu_item_rect */
EIF_INTEGER_32 F67_9739 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F67_9739 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4);
	return Result;
}

/* {WEL_API}.set_window_long */
EIF_POINTER F67_9740 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = (EIF_POINTER) SetWindowLongPtr(((HWND) arg1), ((int) arg2), ((LONG_PTR) arg3));
	return Result;
}

/* {WEL_API}.post_message_result */
EIF_BOOLEAN F67_9742 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = EIF_TEST(inline_F67_9742 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_POINTER) arg3, (EIF_POINTER) arg4));
	return Result;
}

/* {WEL_API}.post_message */
void F67_9743 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	
	
	inline_F67_9743 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_POINTER) arg3, (EIF_POINTER) arg4);
}

/* {WEL_API}.send_message_result */
EIF_POINTER F67_9746 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F67_9746 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_POINTER) arg3, (EIF_POINTER) arg4);
	return Result;
}

/* {WEL_API}.send_message_result_integer */
EIF_INTEGER_32 F67_9747 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F67_9747 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_POINTER) arg3, (EIF_POINTER) arg4);
	return Result;
}

/* {WEL_API}.send_message_result_boolean */
EIF_BOOLEAN F67_9748 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = EIF_TEST(inline_F67_9748 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_POINTER) arg3, (EIF_POINTER) arg4));
	return Result;
}

/* {WEL_API}.send_message */
void F67_9749 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	GTCX
	
	
	inline_F67_9749 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_POINTER) arg3, (EIF_POINTER) arg4);
}

/* {WEL_API}.drag_query_file */
EIF_INTEGER_32 F67_9751 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F67_9751 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_POINTER) arg3, (EIF_INTEGER_32) arg4);
	return Result;
}

/* {WEL_API}.duplicate_handle */
EIF_INTEGER_32 F67_9756 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER* arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6, EIF_INTEGER_32 arg7)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F67_9756 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_POINTER*) arg4, (EIF_INTEGER_32) arg5, (EIF_BOOLEAN) arg6, (EIF_INTEGER_32) arg7);
	return Result;
}

/* {WEL_API}.close_handle */
EIF_INTEGER_32 F67_9757 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F67_9757 ((EIF_POINTER) arg1);
	return Result;
}

/* {WEL_API}.get_current_process */
EIF_POINTER F67_9758 (EIF_REFERENCE Current)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F67_9758 ();
	return Result;
}

/* {WEL_API}.msg_wait_for_multiple_objects_ex */
EIF_INTEGER_32 F67_9762 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	EIF_ENTER_C;
	Result = inline_F67_9762 ((EIF_INTEGER_32) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32) arg4, (EIF_INTEGER_32) arg5);
	EIF_EXIT_C;
	RTGC;
	return Result;
}

/* {WEL_API}.get_scroll_info */
EIF_INTEGER_32 F67_9780 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F67_9780 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_POINTER) arg3);
	return Result;
}

/* {WEL_API}.close_printer */
EIF_BOOLEAN F67_9785 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = EIF_TEST(inline_F67_9785 ((EIF_POINTER) arg1));
	return Result;
}

/* {WEL_API}.vk_key_scan */
EIF_INTEGER_32 F67_9786 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	
	
	Result = inline_F67_9786 ((EIF_CHARACTER_32) arg1);
	return Result;
}

/* {WEL_API}.load_module */
EIF_POINTER F67_9788 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	
	
	Result = inline_F67_9788 ((EIF_POINTER) arg1);
	return Result;
}

/* {WEL_API}.free_module */
EIF_BOOLEAN F67_9789 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	
	
	Result = EIF_TEST(inline_F67_9789 ((EIF_POINTER) arg1));
	return Result;
}

void EIF_Minit1025 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
