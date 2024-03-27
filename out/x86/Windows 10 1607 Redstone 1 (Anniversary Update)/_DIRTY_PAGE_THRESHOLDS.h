#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _DIRTY_PAGE_THRESHOLDS
{
    ULONG DirtyPageThreshold;                                               //0x0
    ULONG DirtyPageThresholdTop;                                            //0x4
    ULONG DirtyPageThresholdBottom;                                         //0x8
    ULONG DirtyPageTarget;                                                  //0xc
    ULONGLONG AggregateAvailablePages;                                      //0x10
    ULONGLONG AggregateDirtyPages;                                          //0x18
    ULONG AvailableHistory;                                                 //0x20
};
/* Used in */
// _LOG_HANDLE_CONTEXT

