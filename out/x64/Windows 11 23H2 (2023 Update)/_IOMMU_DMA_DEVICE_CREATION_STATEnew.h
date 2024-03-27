#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _IOMMU_DMA_DEVICE_CREATION_STATE
{
    DmaDeviceCreationStateRemapping = 0,
    DmaDeviceCreationStateSvm = 1,
    DmaDeviceCreationStateUnblocked = 2,
    DmaDeviceCreationStateAtsOnly = 3,
    DmaDeviceCreationStateMax = 4
};
/* Used in */
// _IOMMU_DMA_DEVICE

