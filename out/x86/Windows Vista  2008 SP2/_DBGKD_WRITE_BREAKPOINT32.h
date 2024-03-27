#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _DBGKD_WRITE_BREAKPOINT32
{
    ULONG BreakPointAddress;                                                //0x0
    ULONG BreakPointHandle;                                                 //0x4
};
/* Used in */
// _DBGKD_MANIPULATE_STATE32

