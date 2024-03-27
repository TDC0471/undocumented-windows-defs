#pragma once
/* ------------------ */


//0x38 bytes (sizeof)
struct _DIRTY_PAGE_THRESHOLDS
{
    ULONGLONG DirtyPageThreshold;                                           //0x0
    ULONGLONG DirtyPageThresholdTop;                                        //0x8
    ULONGLONG DirtyPageThresholdBottom;                                     //0x10
    ULONG DirtyPageTarget;                                                  //0x18
    ULONGLONG AggregateAvailablePages;                                      //0x20
    ULONGLONG AggregateDirtyPages;                                          //0x28
    ULONG AvailableHistory;                                                 //0x30
};
/* Used in */
// _CC_PARTITION
// _LOG_HANDLE_CONTEXT

