#pragma once
/* ------------------ */

#include <_KTIMER.h>

//0x48 bytes (sizeof)
struct _LAZY_WRITER
{
    struct _KTIMER ScanTimer;                                               //0x0
    UCHAR TimerInitialized;                                                 //0x40
    UCHAR ScanActive;                                                       //0x41
    UCHAR OtherWork;                                                        //0x42
    UCHAR PendingTeardownScan;                                              //0x43
    UCHAR PendingPeriodicScan;                                              //0x44
    UCHAR PendingLowMemoryScan;                                             //0x45
    UCHAR PendingPowerScan;                                                 //0x46
    UCHAR PendingCoalescingFlushScan;                                       //0x47
};
/* Used in */
// _CC_PARTITION
// _PRIVATE_VOLUME_CACHEMAP

