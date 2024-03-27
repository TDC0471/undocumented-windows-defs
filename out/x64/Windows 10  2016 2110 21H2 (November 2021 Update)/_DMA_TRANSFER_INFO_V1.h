#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _DMA_TRANSFER_INFO_V1
{
    ULONG MapRegisterCount;                                                 //0x0
    ULONG ScatterGatherElementCount;                                        //0x4
    ULONG ScatterGatherListSize;                                            //0x8
};
/* Used in */
// _DMA_TRANSFER_INFO

