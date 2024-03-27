#pragma once
/* ------------------ */


//0x14 bytes (sizeof)
struct _DMA_ADAPTER_INFO_V1
{
    ULONG ReadDmaCounterAvailable;                                          //0x0
    ULONG ScatterGatherLimit;                                               //0x4
    ULONG DmaAddressWidth;                                                  //0x8
    ULONG Flags;                                                            //0xc
    ULONG MinimumTransferUnit;                                              //0x10
};
/* Used in */
// _DMA_ADAPTER_INFO

