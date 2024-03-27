#pragma once
/* ------------------ */

#include <_DMA_ADAPTER_INFO_V1.h>

//0x18 bytes (sizeof)
struct _DMA_ADAPTER_INFO
{
    ULONG Version;                                                          //0x0
    struct _DMA_ADAPTER_INFO_V1 V1;                                         //0x4
};
/* Used in */
// _DMA_OPERATIONS

