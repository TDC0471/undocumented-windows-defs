#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IO_RESOURCE_DESCRIPTOR.h>
#include <_DEVICE_OBJECT.h>
#include <_ARBITER_REQUEST_SOURCE.h>
#include <_INTERFACE_TYPE.h>
#include <_CM_PARTIAL_RESOURCE_DESCRIPTOR.h>
#include <_ARBITER_RESULT.h>

//0x38 bytes (sizeof)
struct _ARBITER_LIST_ENTRY
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONG AlternativeCount;                                                 //0x8
    struct _IO_RESOURCE_DESCRIPTOR* Alternatives;                           //0xc
    struct _DEVICE_OBJECT* PhysicalDeviceObject;                            //0x10
    enum _ARBITER_REQUEST_SOURCE RequestSource;                             //0x14
    ULONG Flags;                                                            //0x18
    LONG WorkSpace;                                                         //0x1c
    enum _INTERFACE_TYPE InterfaceType;                                     //0x20
    ULONG SlotNumber;                                                       //0x24
    ULONG BusNumber;                                                        //0x28
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* Assignment;                     //0x2c
    struct _IO_RESOURCE_DESCRIPTOR* SelectedAlternative;                    //0x30
    enum _ARBITER_RESULT Result;                                            //0x34
};
/* Used in */
// _ARBITER_ALLOCATION_STATE

