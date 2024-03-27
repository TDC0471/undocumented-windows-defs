#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CM_PARTIAL_RESOURCE_DESCRIPTOR.h>
#include <_CM_PARTIAL_RESOURCE_LIST.h>
#include <_DEVICE_OBJECT.h>
#include <_IO_RESOURCE_DESCRIPTOR.h>
#include <_ARBITER_CONFLICT_INFO.h>

//0x20 bytes (sizeof)
struct _ARBITER_PARAMETERS
{
    union
    {
        struct
        {
            struct _LIST_ENTRY* ArbitrationList;                            //0x0
            ULONG AllocateFromCount;                                        //0x8
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* AllocateFrom;           //0x10
        } TestAllocation;                                                   //0x0
        struct
        {
            struct _LIST_ENTRY* ArbitrationList;                            //0x0
            ULONG AllocateFromCount;                                        //0x8
            struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* AllocateFrom;           //0x10
        } RetestAllocation;                                                 //0x0
        struct
        {
            struct _LIST_ENTRY* ArbitrationList;                            //0x0
        } BootAllocation;                                                   //0x0
        struct
        {
            struct _CM_PARTIAL_RESOURCE_LIST** AllocatedResources;          //0x0
        } QueryAllocatedResources;                                          //0x0
        struct
        {
            struct _DEVICE_OBJECT* PhysicalDeviceObject;                    //0x0
            struct _IO_RESOURCE_DESCRIPTOR* ConflictingResource;            //0x8
            ULONG* ConflictCount;                                           //0x10
            struct _ARBITER_CONFLICT_INFO** Conflicts;                      //0x18
        } QueryConflict;                                                    //0x0
        struct
        {
            struct _LIST_ENTRY* ArbitrationList;                            //0x0
        } QueryArbitrate;                                                   //0x0
        struct
        {
            struct _DEVICE_OBJECT* ReserveDevice;                           //0x0
        } AddReserved;                                                      //0x0
    } Parameters;                                                           //0x0
};
/* Used in */
// _ARBITER_INTERFACE

