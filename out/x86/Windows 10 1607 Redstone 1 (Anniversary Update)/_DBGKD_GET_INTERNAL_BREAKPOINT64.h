#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _DBGKD_GET_INTERNAL_BREAKPOINT64
{
    ULONGLONG BreakpointAddress;                                            //0x0
    ULONG Flags;                                                            //0x8
    ULONG Calls;                                                            //0xc
    ULONG MaxCallsPerPeriod;                                                //0x10
    ULONG MinInstructions;                                                  //0x14
    ULONG MaxInstructions;                                                  //0x18
    ULONG TotalInstructions;                                                //0x1c
};
/* Used in */
// _DBGKD_MANIPULATE_STATE64

