#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KTIMER.h>
#include <_KDPC.h>
#include <_POP_ACTION_TRIGGER.h>
#include <_IRP.h>
#include <_THERMAL_INFORMATION_EX.h>
#include <_LARGE_INTEGER.h>
#include <_POP_THERMAL_ZONE_METRICS.h>

//0x1d0 bytes (sizeof)
struct _POP_THERMAL_ZONE
{
    struct _LIST_ENTRY Link;                                                //0x0
    UCHAR State;                                                            //0x10
    UCHAR Flags;                                                            //0x11
    UCHAR Mode;                                                             //0x12
    UCHAR PendingMode;                                                      //0x13
    UCHAR ActivePoint;                                                      //0x14
    UCHAR PendingActivePoint;                                               //0x15
    LONG HighPrecisionThrottle;                                             //0x18
    LONG Throttle;                                                          //0x1c
    LONG PendingThrottle;                                                   //0x20
    ULONGLONG ThrottleStartTime;                                            //0x28
    ULONGLONG LastTime;                                                     //0x30
    ULONG SampleRate;                                                       //0x38
    ULONG LastTemp;                                                         //0x3c
    struct _KTIMER PassiveTimer;                                            //0x40
    struct _KDPC PassiveDpc;                                                //0x80
    struct _POP_ACTION_TRIGGER OverThrottled;                               //0xc0
    struct _IRP* Irp;                                                       //0xd8
    struct _THERMAL_INFORMATION_EX Info;                                    //0xe0
    union _LARGE_INTEGER InfoLastUpdateTime;                                //0x130
    struct _POP_THERMAL_ZONE_METRICS Metrics;                               //0x138
};
