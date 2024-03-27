#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>
#include <_SLIST_HEADER.h>

//0x38 bytes (sizeof)
struct _MI_PAGING_IO_STATE
{
    struct _RTL_AVL_TREE PageFileHead;                                      //0x0
    volatile LONG PageFileHeadSpinLock;                                     //0x4
    LONG PrefetchSeekThreshold;                                             //0x8
    union _SLIST_HEADER InPageSupportSListHead[2];                          //0x10
    UCHAR InPageSupportSListMinimum[2];                                     //0x20
    ULONG InPageSinglePages;                                                //0x24
    volatile LONG DelayPageFaults;                                          //0x28
    ULONG FileCompressionBoundary;                                          //0x2c
    UCHAR MdlsAdjusted;                                                     //0x30
};
/* Used in */
// _MI_SYSTEM_INFORMATION

