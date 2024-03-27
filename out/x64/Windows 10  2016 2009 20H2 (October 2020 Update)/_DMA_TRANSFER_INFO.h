#pragma once
/* ------------------ */

#include <_DMA_TRANSFER_INFO_V1.h>
#include <_DMA_TRANSFER_INFO_V2.h>

//0x14 bytes (sizeof)
struct _DMA_TRANSFER_INFO
{
    ULONG Version;                                                          //0x0
    union
    {
        struct _DMA_TRANSFER_INFO_V1 V1;                                    //0x4
        struct _DMA_TRANSFER_INFO_V2 V2;                                    //0x4
    };
};
/* Used in */
// _DMA_OPERATIONS

