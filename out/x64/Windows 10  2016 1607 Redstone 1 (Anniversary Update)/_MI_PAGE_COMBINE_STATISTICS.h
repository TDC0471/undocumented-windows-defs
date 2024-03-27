#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _MI_PAGE_COMBINE_STATISTICS
{
    ULONGLONG PagesScannedActive;                                           //0x0
    ULONGLONG PagesScannedStandby;                                          //0x8
    ULONGLONG PagesCombined;                                                //0x10
    ULONG CombineScanCount;                                                 //0x18
    LONG CombinedBlocksInUse;                                               //0x1c
    LONG SumCombinedBlocksReferenceCount;                                   //0x20
};
/* Used in */
// _MI_PAGE_COMBINING_SUPPORT

