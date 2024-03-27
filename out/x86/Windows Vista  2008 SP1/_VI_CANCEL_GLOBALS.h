#pragma once
/* ------------------ */


//0x6c bytes (sizeof)
struct _VI_CANCEL_GLOBALS
{
    ULONG CancelLock;                                                       //0x0
    ULONG IssueLock;                                                        //0x4
    LONG Counters[25];                                                      //0x8
};
