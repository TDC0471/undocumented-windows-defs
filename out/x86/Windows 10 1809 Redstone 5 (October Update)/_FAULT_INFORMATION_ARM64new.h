#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_FAULT_INFORMATION_ARM64_FLAGS.h>
#include <_FAULT_INFORMATION_ARM64_TYPE.h>

//0x18 bytes (sizeof)
struct _FAULT_INFORMATION_ARM64
{
    VOID* DomainHandle;                                                     //0x0
    VOID* FaultAddress;                                                     //0x4
    struct _DEVICE_OBJECT* PhysicalDeviceObject;                            //0x8
    ULONG InputMappingId;                                                   //0xc
    struct _FAULT_INFORMATION_ARM64_FLAGS Flags;                            //0x10
    enum _FAULT_INFORMATION_ARM64_TYPE Type;                                //0x14
};
/* Used in */
// _FAULT_INFORMATION

