#pragma once
/* ------------------ */

#include <_FAULT_INFORMATION.h>

//0x10 bytes (sizeof)
struct _DEVICE_FAULT_CONFIGURATION
{
    VOID (*FaultHandler)(VOID* arg1, struct _FAULT_INFORMATION* arg2);      //0x0
    VOID* FaultContext;                                                     //0x8
};
/* Used in */
// _DMA_IOMMU_INTERFACE

