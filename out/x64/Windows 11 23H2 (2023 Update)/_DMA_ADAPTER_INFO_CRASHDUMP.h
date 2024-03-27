#pragma once
/* ------------------ */

#include <_DEVICE_DESCRIPTION.h>

//0x50 bytes (sizeof)
struct _DMA_ADAPTER_INFO_CRASHDUMP
{
    struct _DEVICE_DESCRIPTION DeviceDescription;                           //0x0
    ULONGLONG DeviceIdSize;                                                 //0x40
    VOID* DeviceId;                                                         //0x48
};
/* Used in */
// _DMA_ADAPTER_INFO

