#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_LIST_ENTRY.h>
#include <_POP_DEVICE_IDLE_TYPE.h>
#include <_DEVICE_POWER_STATE.h>

//0x58 bytes (sizeof)
struct _DEVICE_OBJECT_POWER_EXTENSION
{
    volatile ULONG IdleCount;                                               //0x0
    volatile ULONG BusyCount;                                               //0x4
    volatile ULONG BusyReference;                                           //0x8
    ULONG TotalBusyCount;                                                   //0xc
    ULONG ConservationIdleTime;                                             //0x10
    ULONG PerformanceIdleTime;                                              //0x14
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x18
    struct _LIST_ENTRY IdleList;                                            //0x20
    enum _POP_DEVICE_IDLE_TYPE IdleType;                                    //0x30
    enum _DEVICE_POWER_STATE IdleState;                                     //0x34
    enum _DEVICE_POWER_STATE CurrentState;                                  //0x38
    struct _LIST_ENTRY Volume;                                              //0x40
    union
    {
        struct
        {
            ULONG IdleTime;                                                 //0x50
            ULONG NonIdleTime;                                              //0x54
        } Disk;                                                             //0x50
    } Specific;                                                             //0x50
};
/* Used in */
// _DEVOBJ_EXTENSION

