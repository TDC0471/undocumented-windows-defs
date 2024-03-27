#pragma once
/* ------------------ */

#include <_FAULT_INFORMATION_X64_FLAGS.h>
#include <_FAULT_INFORMATION_ARM64_TYPE.h>

//0x20 bytes (sizeof)
struct _FAULT_INFORMATION_X64
{
    VOID* DomainHandle;                                                     //0x0
    VOID* FaultAddress;                                                     //0x4
    struct _FAULT_INFORMATION_X64_FLAGS Flags;                              //0x8
    enum _FAULT_INFORMATION_ARM64_TYPE Type;                                //0xc
    ULONGLONG IommuBaseAddress;                                             //0x10
    ULONG PciSegment;                                                       //0x18
};
/* Used in */
// _FAULT_INFORMATION

