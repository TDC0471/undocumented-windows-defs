#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _HALP_DMA_ADAPTER_ALLOCATION_STATE
{
    HalpDmaAdapterAllocationStateNone = 0,
    HalpDmaAdapterAllocateChannel = 1,
    HalpDmaAdapterAllocateMapRegisters = 2,
    HalpDmaAdapterAllocateChannelRemapResources = 3,
    HalpDmaAdapterAllocationStateComplete = 4,
    HalpDmaAdapterAllocationStateMax = 5
};
/* Used in */
// _ADAPTER_OBJECT

