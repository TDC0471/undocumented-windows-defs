#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _DIRTY_PAGE_THRESHOLDS
{
    ULONGLONG DirtyPageThreshold;                                           //0x0
    ULONGLONG DirtyPageThresholdTop;                                        //0x8
    ULONGLONG DirtyPageThresholdBottom;                                     //0x10
    ULONG DirtyPageTarget;                                                  //0x18
};
/* Used in */
// _LOG_HANDLE_CONTEXT

