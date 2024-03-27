#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_LIST_ENTRY.h>
#include <_POP_DEVICE_IDLE_TYPE.h>
#include <_DEVICE_POWER_STATE.h>
#include <_POP_COOLING_EXTENSION.h>

//0x44 bytes (sizeof)
struct _DEVICE_OBJECT_POWER_EXTENSION
{
    volatile ULONG IdleCount;                                               //0x0
    volatile ULONG BusyCount;                                               //0x4
    volatile ULONG BusyReference;                                           //0x8
    ULONG TotalBusyCount;                                                   //0xc
    ULONG ConservationIdleTime;                                             //0x10
    ULONG PerformanceIdleTime;                                              //0x14
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x18
    struct _LIST_ENTRY IdleList;                                            //0x1c
    enum _POP_DEVICE_IDLE_TYPE IdleType;                                    //0x24
    enum _DEVICE_POWER_STATE IdleState;                                     //0x28
    enum _DEVICE_POWER_STATE CurrentState;                                  //0x2c
    struct _POP_COOLING_EXTENSION* CoolingExtension;                        //0x30
    struct _LIST_ENTRY Volume;                                              //0x34
    union
    {
        struct
        {
            ULONG IdleTime;                                                 //0x3c
            ULONG NonIdleTime;                                              //0x40
        } Disk;                                                             //0x3c
    } Specific;                                                             //0x3c
};
/* Used in */
// _DEVOBJ_EXTENSION

