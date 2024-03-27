#pragma once
/* ------------------ */


//0x1c bytes (sizeof)
struct _DBGKD_GET_INTERNAL_BREAKPOINT32
{
    ULONG BreakpointAddress;                                                //0x0
    ULONG Flags;                                                            //0x4
    ULONG Calls;                                                            //0x8
    ULONG MaxCallsPerPeriod;                                                //0xc
    ULONG MinInstructions;                                                  //0x10
    ULONG MaxInstructions;                                                  //0x14
    ULONG TotalInstructions;                                                //0x18
};
/* Used in */
// _DBGKD_MANIPULATE_STATE32

