#pragma once
/* ------------------ */

#include <_DMA_ADAPTER_INFO_V1.h>
#include <_DMA_ADAPTER_INFO_CRASHDUMP.h>

//0x58 bytes (sizeof)
struct _DMA_ADAPTER_INFO
{
    ULONG Version;                                                          //0x0
    union
    {
        struct _DMA_ADAPTER_INFO_V1 V1;                                     //0x8
        struct _DMA_ADAPTER_INFO_CRASHDUMP Crashdump;                       //0x8
    };
};
/* Used in */
// _DMA_OPERATIONS

