#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _DBGKD_SET_INTERNAL_BREAKPOINT32
{
    ULONG BreakpointAddress;                                                //0x0
    ULONG Flags;                                                            //0x4
};
/* Used in */
// _DBGKD_MANIPULATE_STATE32

