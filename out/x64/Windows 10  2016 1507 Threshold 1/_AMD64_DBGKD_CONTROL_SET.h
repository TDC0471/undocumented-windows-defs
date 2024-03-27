#pragma once
/* ------------------ */


//0x1c bytes (sizeof)
struct _AMD64_DBGKD_CONTROL_SET
{
    ULONG TraceFlag;                                                        //0x0
    ULONGLONG Dr7;                                                          //0x4
    ULONGLONG CurrentSymbolStart;                                           //0xc
    ULONGLONG CurrentSymbolEnd;                                             //0x14
};
/* Used in */
// _DBGKD_ANY_CONTROL_SET
// _DBGKD_CONTINUE2

