#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_LIST_ENTRY.h>
#include <_POP_DEVICE_IDLE_TYPE.h>
#include <_DEVICE_POWER_STATE.h>
#include <_POP_COOLING_EXTENSION.h>

//0x60 bytes (sizeof)
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
    struct _POP_COOLING_EXTENSION* CoolingExtension;                        //0x40
    struct _LIST_ENTRY Volume;                                              //0x48
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

