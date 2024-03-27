#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _DBGKD_WRITE_BREAKPOINT64
{
    ULONGLONG BreakPointAddress;                                            //0x0
    ULONG BreakPointHandle;                                                 //0x8
};
/* Used in */
// _DBGKD_MANIPULATE_STATE64

