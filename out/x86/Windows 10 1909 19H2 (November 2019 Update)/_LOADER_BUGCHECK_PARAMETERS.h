#pragma once
/* ------------------ */


//0x14 bytes (sizeof)
struct _LOADER_BUGCHECK_PARAMETERS
{
    ULONG BugcheckCode;                                                     //0x0
    ULONG BugcheckParameter1;                                               //0x4
    ULONG BugcheckParameter2;                                               //0x8
    ULONG BugcheckParameter3;                                               //0xc
    ULONG BugcheckParameter4;                                               //0x10
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

