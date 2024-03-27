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

//0x338 bytes (sizeof)
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
    ULONGLONG LastTime;                                                     //0x60
    ULONG SampleRate;                                                       //0x68
    ULONG LastTemp;                                                         //0x6c
    struct _KTIMER PassiveTimer;                                            //0x70
    struct _KDPC PassiveDpc;                                                //0xb0
    struct _THERMAL_INFORMATION_EX Info;                                    //0xf0
    union _LARGE_INTEGER InfoLastUpdateTime;                                //0x148
    struct _THERMAL_POLICY Policy;                                          //0x150
    UCHAR PolicyDriver;                                                     //0x168
    ULONGLONG LastActiveStartTime;                                          //0x170
    ULONGLONG LastPassiveStartTime;                                         //0x178
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x180
    struct _POP_RW_LOCK Lock;                                               //0x1a0
    struct _KEVENT ZoneStopped;                                             //0x1b0
    struct _KEVENT TemperatureUpdated;                                      //0x1c8
    ULONG InstanceId;                                                       //0x1e0
    struct _POP_THERMAL_TELEMETRY_TRACKER TelemetryTracker;                 //0x1e8
};
