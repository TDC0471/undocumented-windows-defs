#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_IO_RESOURCE_DESCRIPTOR.h>
#include <_ARBITER_CONFLICT_INFO.h>

//0x10 bytes (sizeof)
struct _ARBITER_QUERY_CONFLICT_PARAMETERS
{
    struct _DEVICE_OBJECT* PhysicalDeviceObject;                            //0x0
    struct _IO_RESOURCE_DESCRIPTOR* ConflictingResource;                    //0x4
    ULONG* ConflictCount;                                                   //0x8
    struct _ARBITER_CONFLICT_INFO** Conflicts;                              //0xc
};
/* Used in */
// _ARBITER_INSTANCE
// _ARBITER_PARAMETERS

