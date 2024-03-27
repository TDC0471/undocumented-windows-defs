#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _KSYSTEM_TIME
{
    ULONG LowPart;                                                          //0x0
    LONG High1Time;                                                         //0x4
    LONG High2Time;                                                         //0x8
};
/* Used in */
// _KUSER_SHARED_DATA

