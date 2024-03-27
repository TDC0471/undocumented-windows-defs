#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _WOW64_SHARED_INFORMATION
{
    SharedNtdll32LdrInitializeThunk = 0,
    SharedNtdll32KiUserExceptionDispatcher = 1,
    SharedNtdll32KiUserApcDispatcher = 2,
    SharedNtdll32KiUserCallbackDispatcher = 3,
    SharedNtdll32LdrHotPatchRoutine = 4,
    SharedNtdll32ExpInterlockedPopEntrySListFault = 5,
    SharedNtdll32ExpInterlockedPopEntrySListResume = 6,
    SharedNtdll32ExpInterlockedPopEntrySListEnd = 7,
    SharedNtdll32Reserved2 = 8,
    Wow64SharedPageEntriesCount = 9
};
