#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_LIST_ENTRY.h>
#include <_DEVICE_POWER_STATE.h>
#include <_POWER_CHANNEL_SUMMARY.h>

//0x98 bytes (sizeof)
struct _DEVICE_OBJECT_POWER_EXTENSION
{
    volatile ULONG IdleCount;                                               //0x0
    volatile ULONG BusyCount;                                               //0x4
    ULONG TotalBusyCount;                                                   //0x8
    ULONG ConservationIdleTime;                                             //0xc
    ULONG PerformanceIdleTime;                                              //0x10
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x18
    struct _LIST_ENTRY IdleList;                                            //0x20
    UCHAR DeviceType;                                                       //0x30
    enum _DEVICE_POWER_STATE IdleState;                                     //0x34
    enum _DEVICE_POWER_STATE CurrentState;                                  //0x38
    struct _LIST_ENTRY NotifySourceList;                                    //0x40
    struct _LIST_ENTRY NotifyTargetList;                                    //0x50
    struct _POWER_CHANNEL_SUMMARY PowerChannelSummary;                      //0x60
    struct _LIST_ENTRY Volume;                                              //0x80
    union
    {
        struct
        {
            ULONG IdleTime;                                                 //0x90
            ULONG NonIdleTime;                                              //0x94
        } Disk;                                                             //0x90
    } Specific;                                                             //0x90
};
/* Used in */
// _DEVOBJ_EXTENSION

