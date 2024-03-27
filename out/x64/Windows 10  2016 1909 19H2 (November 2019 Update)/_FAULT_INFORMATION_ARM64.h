#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_FAULT_INFORMATION_ARM64_FLAGS.h>
#include <_FAULT_INFORMATION_ARM64_TYPE.h>

//0x28 bytes (sizeof)
struct _FAULT_INFORMATION_ARM64
{
    VOID* DomainHandle;                                                     //0x0
    VOID* FaultAddress;                                                     //0x8
    struct _DEVICE_OBJECT* PhysicalDeviceObject;                            //0x10
    ULONG InputMappingId;                                                   //0x18
    struct _FAULT_INFORMATION_ARM64_FLAGS Flags;                            //0x1c
    enum _FAULT_INFORMATION_ARM64_TYPE Type;                                //0x20
};
/* Used in */
// _FAULT_INFORMATION

