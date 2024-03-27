#pragma once
/* ------------------ */

#include <_FAULT_INFORMATION_X64_FLAGS.h>
#include <_FAULT_INFORMATION_ARM64_TYPE.h>

//0x28 bytes (sizeof)
struct _FAULT_INFORMATION_X64
{
    VOID* DomainHandle;                                                     //0x0
    VOID* FaultAddress;                                                     //0x8
    struct _FAULT_INFORMATION_X64_FLAGS Flags;                              //0x10
    enum _FAULT_INFORMATION_ARM64_TYPE Type;                                //0x14
    ULONGLONG IommuBaseAddress;                                             //0x18
    ULONG PciSegment;                                                       //0x20
};
/* Used in */
// _FAULT_INFORMATION

