#pragma once
/* ------------------ */

#include <_POP_POLICY_DEVICE.h>
#include <_LIST_ENTRY.h>
#include <POWER_POLICY_DEVICE_TYPE.h>
#include <_UNICODE_STRING.h>
#include <_DEVICE_OBJECT.h>
#include <_IRP.h>
#include <_THERMAL_INFORMATION_EX.h>
#include <_THERMAL_POLICY.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_KTIMER2.h>
#include <_POP_RW_LOCK.h>
#include <_KEVENT.h>
#include <_POP_THERMAL_TELEMETRY_TRACKER.h>

//0x2e8 bytes (sizeof)
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
    ULONGLONG LastPassiveTime;                                              //0x40
    ULONG SampleRate;                                                       //0x48
    ULONG LastTemp;                                                         //0x4c
    struct _THERMAL_INFORMATION_EX Info;                                    //0x50
    struct _THERMAL_POLICY Policy;                                          //0xac
    UCHAR PolicyDriver;                                                     //0xc4
    ULONG PollingRate;                                                      //0xc8
    ULONGLONG LastTemperatureTime;                                          //0xd0
    ULONGLONG LastActiveStartTime;                                          //0xd8
    ULONGLONG LastPassiveStartTime;                                         //0xe0
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0xe8
    struct _KTIMER2 ZoneUpdateTimer;                                        //0xf8
    struct _POP_RW_LOCK Lock;                                               //0x150
    struct _KEVENT ZoneStopped;                                             //0x158
    struct _KEVENT TemperatureUpdated;                                      //0x168
    ULONG InstanceId;                                                       //0x178
    struct _POP_THERMAL_TELEMETRY_TRACKER TelemetryTracker;                 //0x180
    struct _UNICODE_STRING Description;                                     //0x2e0
};
