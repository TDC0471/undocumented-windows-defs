#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _ARM64_DBGKD_CONTROL_SET
{
    ULONG Continue;                                                         //0x0
    ULONG TraceFlag;                                                        //0x4
    ULONGLONG CurrentSymbolStart;                                           //0x8
    ULONGLONG CurrentSymbolEnd;                                             //0x10
};
/* Used in */
// _DBGKD_ANY_CONTROL_SET

