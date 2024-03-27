#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _LOADER_BUGCHECK_PARAMETERS
{
    ULONG BugcheckCode;                                                     //0x0
    ULONGLONG BugcheckParameter1;                                           //0x8
    ULONGLONG BugcheckParameter2;                                           //0x10
    ULONGLONG BugcheckParameter3;                                           //0x18
    ULONGLONG BugcheckParameter4;                                           //0x20
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

