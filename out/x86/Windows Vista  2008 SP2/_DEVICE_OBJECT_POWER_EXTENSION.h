#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_LIST_ENTRY.h>
#include <_DEVICE_POWER_STATE.h>
#include <_POWER_CHANNEL_SUMMARY.h>

//0x60 bytes (sizeof)
struct _DEVICE_OBJECT_POWER_EXTENSION
{
    volatile ULONG IdleCount;                                               //0x0
    volatile ULONG BusyCount;                                               //0x4
    ULONG TotalBusyCount;                                                   //0x8
    ULONG ConservationIdleTime;                                             //0xc
    ULONG PerformanceIdleTime;                                              //0x10
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x14
    struct _LIST_ENTRY IdleList;                                            //0x18
    UCHAR DeviceType;                                                       //0x20
    enum _DEVICE_POWER_STATE IdleState;                                     //0x24
    enum _DEVICE_POWER_STATE CurrentState;                                  //0x28
    struct _LIST_ENTRY NotifySourceList;                                    //0x2c
    struct _LIST_ENTRY NotifyTargetList;                                    //0x34
    struct _POWER_CHANNEL_SUMMARY PowerChannelSummary;                      //0x3c
    struct _LIST_ENTRY Volume;                                              //0x50
    union
    {
        struct
        {
            ULONG IdleTime;                                                 //0x58
            ULONG NonIdleTime;                                              //0x5c
        } Disk;                                                             //0x58
    } Specific;                                                             //0x58
};
/* Used in */
// _DEVOBJ_EXTENSION

