#pragma once
/* ------------------ */

#include <_WAIT_CONTEXT_BLOCK.h>

//0x58 bytes (sizeof)
struct _DMA_TRANSFER_CONTEXT_V1
{
    LONG DmaState;                                                          //0x0
    ULONG TransferState;                                                    //0x4
    struct _WAIT_CONTEXT_BLOCK Wcb;                                         //0x8
    VOID* HalWcb;                                                           //0x50
};
/* Used in */
// _DMA_TRANSFER_CONTEXT

