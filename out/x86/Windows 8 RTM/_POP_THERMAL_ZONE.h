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

//0x150 bytes (sizeof)
struct _POP_THERMAL_ZONE
{
    struct _LIST_ENTRY Link;                                                //0x0
    UCHAR State;                                                            //0x8
    UCHAR Flags;                                                            //0x9
    UCHAR Mode;                                                             //0xa
    UCHAR PendingMode;                                                      //0xb
    UCHAR ActivePoint;                                                      //0xc
    UCHAR PendingActivePoint;                                               //0xd
    LONG HighPrecisionThrottle;                                             //0x10
    LONG Throttle;                                                          //0x14
    LONG PendingThrottle;                                                   //0x18
    ULONGLONG ThrottleStartTime;                                            //0x20
    ULONGLONG LastTime;                                                     //0x28
    ULONG SampleRate;                                                       //0x30
    ULONG LastTemp;                                                         //0x34
    struct _KTIMER PassiveTimer;                                            //0x38
    struct _KDPC PassiveDpc;                                                //0x60
    struct _POP_ACTION_TRIGGER OverThrottled;                               //0x80
    struct _IRP* Irp;                                                       //0x90
    struct _THERMAL_INFORMATION_EX Info;                                    //0x94
    union _LARGE_INTEGER InfoLastUpdateTime;                                //0xe0
    struct _POP_THERMAL_ZONE_METRICS Metrics;                               //0xe8
};
