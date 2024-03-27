#pragma once
/* ------------------ */

#include <_DMA_OPERATIONS.h>

//0x10 bytes (sizeof)
struct _DMA_ADAPTER
{
    USHORT Version;                                                         //0x0
    USHORT Size;                                                            //0x2
    struct _DMA_OPERATIONS* DmaOperations;                                  //0x8
};
/* Used in */
// _DMA_OPERATIONS
// _HALP_DMA_ADAPTER_OBJECT
// _HALP_DMA_CHANNEL

