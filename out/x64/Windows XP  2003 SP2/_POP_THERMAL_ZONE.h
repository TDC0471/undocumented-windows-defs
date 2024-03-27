#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KTIMER.h>
#include <_KDPC.h>
#include <_POP_ACTION_TRIGGER.h>
#include <_IRP.h>
#include <_THERMAL_INFORMATION.h>

//0x120 bytes (sizeof)
struct _POP_THERMAL_ZONE
{
    struct _LIST_ENTRY Link;                                                //0x0
    UCHAR State;                                                            //0x10
    UCHAR Flags;                                                            //0x11
    UCHAR Mode;                                                             //0x12
    UCHAR PendingMode;                                                      //0x13
    UCHAR ActivePoint;                                                      //0x14
    UCHAR PendingActivePoint;                                               //0x15
    LONG Throttle;                                                          //0x18
    ULONGLONG LastTime;                                                     //0x20
    ULONG SampleRate;                                                       //0x28
    ULONG LastTemp;                                                         //0x2c
    struct _KTIMER PassiveTimer;                                            //0x30
    struct _KDPC PassiveDpc;                                                //0x70
    struct _POP_ACTION_TRIGGER OverThrottled;                               //0xb0
    struct _IRP* Irp;                                                       //0xc0
    struct _THERMAL_INFORMATION Info;                                       //0xc8
};
