#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_LIST_ENTRY.h>
#include <_DEVICE_POWER_STATE.h>
#include <_POWER_CHANNEL_SUMMARY.h>

//0x4c bytes (sizeof)
struct _DEVICE_OBJECT_POWER_EXTENSION
{
    LONG IdleCount;                                                         //0x0
    ULONG ConservationIdleTime;                                             //0x4
    ULONG PerformanceIdleTime;                                              //0x8
    struct _DEVICE_OBJECT* DeviceObject;                                    //0xc
    struct _LIST_ENTRY IdleList;                                            //0x10
    UCHAR DeviceType;                                                       //0x18
    enum _DEVICE_POWER_STATE State;                                         //0x1c
    struct _LIST_ENTRY NotifySourceList;                                    //0x20
    struct _LIST_ENTRY NotifyTargetList;                                    //0x28
    struct _POWER_CHANNEL_SUMMARY PowerChannelSummary;                      //0x30
    struct _LIST_ENTRY Volume;                                              //0x44
};
/* Used in */
// _DEVOBJ_EXTENSION

