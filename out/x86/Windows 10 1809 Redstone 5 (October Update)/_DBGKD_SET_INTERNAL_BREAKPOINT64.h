#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _DBGKD_SET_INTERNAL_BREAKPOINT64
{
    ULONGLONG BreakpointAddress;                                            //0x0
    ULONG Flags;                                                            //0x8
};
/* Used in */
// _DBGKD_MANIPULATE_STATE64

