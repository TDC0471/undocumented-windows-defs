#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _DMA_TRANSFER_INFO_V2
{
    ULONG MapRegisterCount;                                                 //0x0
    ULONG ScatterGatherElementCount;                                        //0x4
    ULONG ScatterGatherListSize;                                            //0x8
    ULONG LogicalPageCount;                                                 //0xc
};
/* Used in */
// _DMA_TRANSFER_INFO

