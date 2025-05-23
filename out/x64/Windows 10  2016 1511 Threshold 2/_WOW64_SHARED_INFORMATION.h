#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _WOW64_SHARED_INFORMATION
{
    SharedNtdll32LdrInitializeThunk = 0,
    SharedNtdll32KiUserExceptionDispatcher = 1,
    SharedNtdll32KiUserApcDispatcher = 2,
    SharedNtdll32KiUserCallbackDispatcher = 3,
    SharedNtdll32RtlUserThreadStart = 4,
    SharedNtdll32pQueryProcessDebugInformationRemote = 5,
    SharedNtdll32BaseAddress = 6,
    SharedNtdll32LdrSystemDllInitBlock = 7,
    Wow64SharedPageEntriesCount = 8
};
