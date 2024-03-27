#pragma once
/* ------------------ */

#include <_ISRDPCSTATS_SEQUENCE.h>

//0x60 bytes (sizeof)
struct _ISRDPCSTATS
{
    ULONGLONG IsrTime;                                                      //0x0
    ULONGLONG IsrTimeStart;                                                 //0x8
    ULONGLONG IsrCount;                                                     //0x10
    ULONGLONG DpcTime;                                                      //0x18
    ULONGLONG DpcTimeStart;                                                 //0x20
    ULONGLONG DpcCount;                                                     //0x28
    UCHAR IsrActive;                                                        //0x30
    UCHAR Reserved[7];                                                      //0x31
    struct _ISRDPCSTATS_SEQUENCE DpcWatchdog;                               //0x38
};
/* Used in */
// _KINTERRUPT

