#pragma once
/* ------------------ */

#include <_HALP_DMA_TRANSLATION_BUFFER.h>

//0x10 bytes (sizeof)
struct _HALP_DMA_TRANSLATION_BUFFER_POSITION
{
    struct _HALP_DMA_TRANSLATION_BUFFER* Buffer;                            //0x0
    ULONG Offset;                                                           //0x8
};
/* Used in */
// _HALP_DMA_ADAPTER_OBJECT

