#pragma once
/* ------------------ */

#include <_IOMMU_DMA_LOGICAL_ALLOCATOR.h>
#include <_IOMMU_DMA_LOGICAL_ALLOCATOR_CAPABILITIES.h>

//0x28 bytes (sizeof)
struct _IOMMU_DMA_LOGICAL_ALLOCATOR_OPERATIONS_V1
{
    LONG (*AllocateLogicalAddress)(struct _IOMMU_DMA_LOGICAL_ALLOCATOR* arg1, ULONGLONG* arg2, ULONGLONG arg3, ULONGLONG* arg4, ULONGLONG* arg5, ULONGLONG* arg6); //0x0
    LONG (*FreeLogicalAddress)(struct _IOMMU_DMA_LOGICAL_ALLOCATOR* arg1, ULONGLONG arg2); //0x8
    LONG (*ReserveLogicalAddress)(struct _IOMMU_DMA_LOGICAL_ALLOCATOR* arg1, ULONGLONG arg2, ULONGLONG arg3); //0x10
    struct _IOMMU_DMA_LOGICAL_ALLOCATOR_CAPABILITIES (*QueryCapabilities)(struct _IOMMU_DMA_LOGICAL_ALLOCATOR* arg1); //0x18
    VOID (*CleanUp)(struct _IOMMU_DMA_LOGICAL_ALLOCATOR* arg1);             //0x20
};
/* Used in */
// _IOMMU_DMA_LOGICAL_ALLOCATOR

