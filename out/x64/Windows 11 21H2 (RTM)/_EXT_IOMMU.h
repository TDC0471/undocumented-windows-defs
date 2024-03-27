#pragma once
/* ------------------ */

#include <_EXT_IOMMU_KNOWN_IOMMU_TYPE.h>
#include <_EXT_IOMMU_CAPABILITIES.h>
#include <_EXT_IOMMU_FUNCTION_TABLE.h>

//0xa8 bytes (sizeof)
struct _EXT_IOMMU
{
    VOID* Context;                                                          //0x0
    enum _EXT_IOMMU_KNOWN_IOMMU_TYPE Type;                                  //0x8
    union _EXT_IOMMU_CAPABILITIES Capabilities;                             //0x10
    ULONG MaxOutputAddressWidth;                                            //0x18
    struct
    {
        USHORT PciSegment:1;                                                //0x1c
    } Flags;                                                                //0x1c
    USHORT PciSegmentNumber;                                                //0x1e
    struct _EXT_IOMMU_FUNCTION_TABLE FunctionTable;                         //0x20
};
/* Used in */
// _EXT_IOMMU_DEVICE
// _EXT_IOMMU_FUNCTION_TABLE

