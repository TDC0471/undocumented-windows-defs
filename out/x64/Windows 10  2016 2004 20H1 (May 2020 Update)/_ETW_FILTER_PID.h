#pragma once
/* ------------------ */


//0x24 bytes (sizeof)
struct _ETW_FILTER_PID
{
    ULONG Count;                                                            //0x0
    ULONG Pids[8];                                                          //0x4
};
/* Used in */
// _ETW_FILTER_HEADER

