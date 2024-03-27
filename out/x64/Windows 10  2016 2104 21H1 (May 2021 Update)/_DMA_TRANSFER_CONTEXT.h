#pragma once
/* ------------------ */

#include <_DMA_TRANSFER_CONTEXT_V1.h>

//0x60 bytes (sizeof)
struct _DMA_TRANSFER_CONTEXT
{
    ULONG Version;                                                          //0x0
    struct _DMA_TRANSFER_CONTEXT_V1 V1;                                     //0x8
};
/* Used in */
// _ADAPTER_OBJECT

