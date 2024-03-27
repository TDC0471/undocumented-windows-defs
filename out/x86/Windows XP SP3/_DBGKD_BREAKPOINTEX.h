#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _DBGKD_BREAKPOINTEX
{
    ULONG BreakPointCount;                                                  //0x0
    LONG ContinueStatus;                                                    //0x4
};
/* Used in */
// _DBGKD_MANIPULATE_STATE32
// _DBGKD_MANIPULATE_STATE64

