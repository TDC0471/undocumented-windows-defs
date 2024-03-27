#pragma once
/* ------------------ */


//0x78 bytes (sizeof)
struct _VI_CANCEL_GLOBALS
{
    ULONGLONG CancelLock;                                                   //0x0
    ULONGLONG IssueLock;                                                    //0x8
    LONG Counters[25];                                                      //0x10
};
