#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _DMA_INTERRUPT_TYPE
{
    InterruptTypeCompletion = 0,
    InterruptTypeError = 1,
    InterruptTypeCancelled = 2
};
/* Used in */
// _DMA_FUNCTION_TABLE
// _HALP_DMA_CHANNEL

