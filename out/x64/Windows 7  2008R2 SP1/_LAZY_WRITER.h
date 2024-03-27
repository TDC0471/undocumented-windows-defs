#pragma once
/* ------------------ */

#include <_KDPC.h>
#include <_KTIMER.h>

//0x88 bytes (sizeof)
struct _LAZY_WRITER
{
    struct _KDPC ScanDpc;                                                   //0x0
    struct _KTIMER ScanTimer;                                               //0x40
    UCHAR ScanActive;                                                       //0x80
    UCHAR OtherWork;                                                        //0x81
    UCHAR PendingTeardownScan;                                              //0x82
    UCHAR PendingPeriodicScan;                                              //0x83
    UCHAR PendingLowMemoryScan;                                             //0x84
    UCHAR PendingPowerScan;                                                 //0x85
};
