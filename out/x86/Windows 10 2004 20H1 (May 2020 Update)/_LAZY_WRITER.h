#pragma once
/* ------------------ */

#include <_KDPC.h>
#include <_KTIMER.h>

//0x50 bytes (sizeof)
struct _LAZY_WRITER
{
    struct _KDPC ScanDpc;                                                   //0x0
    struct _KTIMER ScanTimer;                                               //0x20
    UCHAR ScanActive;                                                       //0x48
    UCHAR OtherWork;                                                        //0x49
    UCHAR PendingTeardownScan;                                              //0x4a
    UCHAR PendingPeriodicScan;                                              //0x4b
    UCHAR PendingLowMemoryScan;                                             //0x4c
    UCHAR PendingPowerScan;                                                 //0x4d
    UCHAR PendingCoalescingFlushScan;                                       //0x4e
};
/* Used in */
// _CC_PARTITION

