#pragma once
/* ------------------ */

#include <_POP_POLICY_DEVICE.h>
#include <_LIST_ENTRY.h>
#include <POWER_POLICY_DEVICE_TYPE.h>
#include <_UNICODE_STRING.h>
#include <_DEVICE_OBJECT.h>
#include <_IRP.h>
#include <_KTIMER.h>
#include <_KDPC.h>
#include <_THERMAL_INFORMATION_EX.h>
#include <_LARGE_INTEGER.h>
#include <_THERMAL_POLICY.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_POP_RW_LOCK.h>
#include <_KEVENT.h>
#include <_POP_THERMAL_TELEMETRY_TRACKER.h>

//0x2b8 bytes (sizeof)
struct _POP_THERMAL_ZONE
{
    union
    {
        struct _POP_POLICY_DEVICE PolicyDevice;                             //0x0
        struct
        {
            struct _LIST_ENTRY Link;                                        //0x0
            enum POWER_POLICY_DEVICE_TYPE DeviceType;                       //0x8
            VOID* Notification;                                             //0xc
            struct _UNICODE_STRING Name;                                    //0x10
            struct _DEVICE_OBJECT* Device;                                  //0x18
            struct _IRP* Irp;                                               //0x1c
        };
    };
    UCHAR State;                                                            //0x20
    UCHAR Flags;                                                            //0x21
    UCHAR Removing;                                                         //0x22
    UCHAR Mode;                                                             //0x23
    UCHAR PendingMode;                                                      //0x24
    UCHAR ActivePoint;                                                      //0x25
    UCHAR PendingActivePoint;                                               //0x26
    UCHAR Critical;                                                         //0x27
    UCHAR ThermalStandby;                                                   //0x28
    UCHAR OverThrottled;                                                    //0x29
    LONG HighPrecisionThrottle;                                             //0x2c
    LONG Throttle;                                                          //0x30
    LONG PendingThrottle;                                                   //0x34
    ULONG ThrottleReasons;                                                  //0x38
    ULONGLONG LastTime;                                                     //0x40
    ULONG SampleRate;                                                       //0x48
    ULONG LastTemp;                                                         //0x4c
    struct _KTIMER PassiveTimer;                                            //0x50
    struct _KDPC PassiveDpc;                                                //0x78
    struct _THERMAL_INFORMATION_EX Info;                                    //0x98
    union _LARGE_INTEGER InfoLastUpdateTime;                                //0xf0
    struct _THERMAL_POLICY Policy;                                          //0xf8
    UCHAR PolicyDriver;                                                     //0x110
    ULONGLONG LastActiveStartTime;                                          //0x118
    ULONGLONG LastPassiveStartTime;                                         //0x120
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x128
    struct _POP_RW_LOCK Lock;                                               //0x138
    struct _KEVENT ZoneStopped;                                             //0x140
    struct _KEVENT TemperatureUpdated;                                      //0x150
    ULONG InstanceId;                                                       //0x160
    struct _POP_THERMAL_TELEMETRY_TRACKER TelemetryTracker;                 //0x168
};
