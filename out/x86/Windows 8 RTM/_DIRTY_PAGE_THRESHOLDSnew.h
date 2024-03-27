#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _DIRTY_PAGE_THRESHOLDS
{
    ULONG DirtyPageThreshold;                                               //0x0
    ULONG DirtyPageThresholdTop;                                            //0x4
    ULONG DirtyPageThresholdBottom;                                         //0x8
    ULONG DirtyPageTarget;                                                  //0xc
};
/* Used in */
// _LOG_HANDLE_CONTEXT

