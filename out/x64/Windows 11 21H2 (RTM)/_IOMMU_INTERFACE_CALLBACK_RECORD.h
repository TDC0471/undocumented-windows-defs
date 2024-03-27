#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IOMMU_INTERFACE_STATE_CHANGE.h>
#include <_IOMMU_DMA_DEVICE.h>

//0x30 bytes (sizeof)
struct _IOMMU_INTERFACE_CALLBACK_RECORD
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    VOID (*CallbackRoutine)(struct _IOMMU_INTERFACE_STATE_CHANGE* arg1, VOID* arg2); //0x10
    VOID* CallbackContext;                                                  //0x18
    struct _IOMMU_DMA_DEVICE* DmaDevice;                                    //0x20
    struct _IOMMU_INTERFACE_STATE_CHANGE LastReportedState;                 //0x28
};
/* Used in */
// _IOMMU_DMA_DEVICE

