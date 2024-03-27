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

//0x420 bytes (sizeof)
struct _POP_THERMAL_ZONE
{
    union
    {
        struct _POP_POLICY_DEVICE PolicyDevice;                             //0x0
        struct
        {
            struct _LIST_ENTRY Link;                                        //0x0
            enum POWER_POLICY_DEVICE_TYPE DeviceType;                       //0x10
            VOID* Notification;                                             //0x18
            struct _UNICODE_STRING Name;                                    //0x20
            struct _DEVICE_OBJECT* Device;                                  //0x30
            struct _IRP* Irp;                                               //0x38
        };
    };
    UCHAR State;                                                            //0x40
    UCHAR Flags;                                                            //0x41
    UCHAR Removing;                                                         //0x42
    UCHAR Mode;                                                             //0x43
    UCHAR PendingMode;                                                      //0x44
    UCHAR ActivePoint;                                                      //0x45
    UCHAR PendingActivePoint;                                               //0x46
    UCHAR Critical;                                                         //0x47
    UCHAR ThermalStandby;                                                   //0x48
    UCHAR OverThrottled;                                                    //0x49
    LONG HighPrecisionThrottle;                                             //0x4c
    LONG Throttle;                                                          //0x50
    LONG PendingThrottle;                                                   //0x54
    ULONG ThrottleReasons;                                                  //0x58
    ULONGLONG LastPassiveTime;                                              //0x60
    ULONG SampleRate;                                                       //0x68
    ULONG LastTemp;                                                         //0x6c
    struct _THERMAL_INFORMATION_EX Info;                                    //0x70
    struct _THERMAL_POLICY Policy;                                          //0xcc
    UCHAR PolicyDriver;                                                     //0xe4
    ULONG PollingRate;                                                      //0xe8
    ULONGLONG LastTemperatureTime;                                          //0xf0
    ULONGLONG LastActiveStartTime;                                          //0xf8
    ULONGLONG LastPassiveStartTime;                                         //0x100
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x108
    struct _KTIMER2 ZoneUpdateTimer;                                        //0x128
    struct _POP_RW_LOCK Lock;                                               //0x1b0
    struct _KEVENT ZoneStopped;                                             //0x1c0
    struct _KEVENT TemperatureUpdated;                                      //0x1d8
    ULONG InstanceId;                                                       //0x1f0
    struct _POP_THERMAL_TELEMETRY_TRACKER TelemetryTracker;                 //0x1f8
    struct _UNICODE_STRING Description;                                     //0x410
};
