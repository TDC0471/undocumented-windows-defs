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
#include <_POP_THERMAL_ZONE_METRICS.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_POP_RW_LOCK.h>
#include <_KEVENT.h>

//0x170 bytes (sizeof)
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
    LONG HighPrecisionThrottle;                                             //0x28
    LONG Throttle;                                                          //0x2c
    LONG PendingThrottle;                                                   //0x30
    ULONG ThrottleReasons;                                                  //0x34
    ULONGLONG LastTime;                                                     //0x38
    ULONG SampleRate;                                                       //0x40
    ULONG LastTemp;                                                         //0x44
    struct _KTIMER PassiveTimer;                                            //0x48
    struct _KDPC PassiveDpc;                                                //0x70
    struct _THERMAL_INFORMATION_EX Info;                                    //0x90
    union _LARGE_INTEGER InfoLastUpdateTime;                                //0xe0
    struct _THERMAL_POLICY Policy;                                          //0xe8
    UCHAR PolicyDriver;                                                     //0xfc
    struct _POP_THERMAL_ZONE_METRICS Metrics;                               //0x100
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x130
    struct _POP_RW_LOCK Lock;                                               //0x140
    struct _KEVENT ZoneStopped;                                             //0x148
    struct _KEVENT TemperatureUpdated;                                      //0x158
    ULONG InstanceId;                                                       //0x168
};
