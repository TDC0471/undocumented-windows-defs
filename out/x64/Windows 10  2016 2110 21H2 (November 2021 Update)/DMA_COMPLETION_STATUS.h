#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum DMA_COMPLETION_STATUS
{
    DmaComplete = 0,
    DmaAborted = 1,
    DmaError = 2,
    DmaCancelled = 3
};
/* Used in */
// _DMA_OPERATIONS
// _HALP_DMA_CHANNEL

