#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_LIST_ENTRY.h>
#include <_DEVICE_POWER_STATE.h>
#include <_POWER_CHANNEL_SUMMARY.h>

//0x80 bytes (sizeof)
struct _DEVICE_OBJECT_POWER_EXTENSION
{
    LONG IdleCount;                                                         //0x0
    ULONG ConservationIdleTime;                                             //0x4
    ULONG PerformanceIdleTime;                                              //0x8
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x10
    struct _LIST_ENTRY IdleList;                                            //0x18
    UCHAR DeviceType;                                                       //0x28
    enum _DEVICE_POWER_STATE State;                                         //0x2c
    struct _LIST_ENTRY NotifySourceList;                                    //0x30
    struct _LIST_ENTRY NotifyTargetList;                                    //0x40
    struct _POWER_CHANNEL_SUMMARY PowerChannelSummary;                      //0x50
    struct _LIST_ENTRY Volume;                                              //0x70
};
/* Used in */
// _DEVOBJ_EXTENSION

