#include "zig.h"
zig_extern zig_u32 fib46(zig_void);
/*
zig_extern zig_c_ulong RemoveVectoredExceptionHandler(zig_void * const a0);
zig_extern zig_noreturn ExitProcess(zig_c_uint const a0);
zig_extern zig_void * GetCurrentProcess(zig_void);
zig_extern zig_c_int K32EnumProcessModules(zig_void * const a0, zig_O_os_windows_HMODULE__opaque_4600 * * const a1, zig_u32 const a2, zig_u32 * const a3);
zig_extern zig_c_int K32GetModuleInformation(zig_void * const a0, zig_O_os_windows_HMODULE__opaque_4600 * const a1, zig_S_os_windows_MODULEINFO__4606 * const a2, zig_u32 const a3);
zig_extern zig_u32 K32GetModuleFileNameExW(zig_void * const a0, zig_O_os_windows_HMODULE__opaque_4600 * const a1, zig_u16 * const a2, zig_u32 const a3);
zig_extern zig_u16 RtlCaptureStackBackTrace(zig_u32 const a0, zig_u32 const a1, zig_void * * const a2, zig_u32 * const a3);
zig_extern zig_void AcquireSRWLockExclusive(zig_S_os_windows_SRWLOCK__2390 * const a0);
zig_extern zig_c_int WriteFile(zig_void * const a0, zig_u8 const * const a1, zig_u32 const a2, zig_u32 * const a3, zig_S_os_windows_OVERLAPPED__6551 * const a4);
zig_extern zig_u16 GetLastError(zig_void);
zig_extern zig_u32 GetCurrentThreadId(zig_void);
zig_extern zig_u32 GetFullPathNameW(zig_u16 const * const a0, zig_u32 const a1, zig_u16 * const a2, zig_u16 * * const a3);
zig_extern zig_c_int GetConsoleScreenBufferInfo(zig_void * const a0, zig_S_os_windows_CONSOLE_SCREEN_BUFFER_INFO__6976 * const a1);
zig_extern zig_void ReleaseSRWLockExclusive(zig_S_os_windows_SRWLOCK__2390 * const a0);
zig_extern zig_u32 RtlWaitOnAddress(zig_void const * const a0, zig_void const * const a1, zig_usize const a2, zig_i64 const * const a3);
zig_extern zig_u32 FormatMessageW(zig_u32 const a0, zig_void * const a1, zig_u16 const a2, zig_u32 const a3, zig_u16 * const a4, zig_u32 const a5, zig_O_os_windows_va_list__opaque_7147 * * const a6);
zig_extern zig_u32 NtLockFile(zig_void * const a0, zig_void * const a1, zig_F_fn_28_2aanyopaque_2c_20_2aos_windows_IO_STATUS_BLOCK_2c_20u32_29_20callconv_28_C_29_20void * const a2, zig_void * const a3, zig_S_os_windows_IO_STATUS_BLOCK__7797 * const a4, zig_i64 const * const a5, zig_i64 const * const a6, zig_u32 * const a7, zig_u8 const a8, zig_u8 const a9);
zig_extern zig_u32 NtClose(zig_void * const a0);
zig_extern zig_c_int GetFileSizeEx(zig_void * const a0, zig_i64 * const a1);
zig_extern zig_c_int ReadFile(zig_void * const a0, zig_u8 * const a1, zig_u32 const a2, zig_u32 * const a3, zig_S_os_windows_OVERLAPPED__6551 * const a4);
zig_extern zig_u32 GetCurrentDirectoryW(zig_u32 const a0, zig_u16 * const a1);
zig_extern zig_c_int SetConsoleTextAttribute(zig_void * const a0, zig_u16 const a1);
zig_extern zig_void * VirtualAlloc(zig_void * const a0, zig_usize const a1, zig_u32 const a2, zig_u32 const a3);
zig_extern zig_c_int VirtualFree(zig_void * const a0, zig_usize const a1, zig_u32 const a2);
zig_extern zig_u8 RtlEqualUnicodeString(zig_S_os_windows_UNICODE_STRING__6447 const * const a0, zig_S_os_windows_UNICODE_STRING__6447 const * const a1, zig_u8 const a2);
zig_extern zig_c_int GetFileInformationByHandleEx(zig_void * const a0, zig_u32 const a1, zig_void * const a2, zig_u32 const a3);
zig_extern zig_c_int GetConsoleMode(zig_void * const a0, zig_u32 * const a1);
zig_extern zig_u32 NtCreateFile(zig_void * * const a0, zig_u32 const a1, zig_S_os_windows_OBJECT_ATTRIBUTES__8131 * const a2, zig_S_os_windows_IO_STATUS_BLOCK__7797 * const a3, zig_i64 * const a4, zig_u32 const a5, zig_u32 const a6, zig_u32 const a7, zig_u32 const a8, zig_void * const a9, zig_u32 const a10);
zig_extern zig_c_int SetFilePointerEx(zig_void * const a0, zig_i64 const a1, zig_i64 * const a2, zig_u32 const a3);
*/