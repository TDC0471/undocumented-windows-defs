#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>
#include <_SLIST_HEADER.h>

//0x50 bytes (sizeof)
struct _MI_PAGING_IO_STATE
{
    struct _RTL_AVL_TREE PageFileHead;                                      //0x0
    volatile LONG PageFileHeadSpinLock;                                     //0x8
    LONG PrefetchSeekThreshold;                                             //0xc
    union _SLIST_HEADER InPageSupportSListHead[2];                          //0x10
    UCHAR InPageSupportSListMinimum[2];                                     //0x30
    ULONG InPageSinglePages;                                                //0x34
    volatile LONG DelayPageFaults;                                          //0x38
    ULONG FileCompressionBoundary;                                          //0x3c
    UCHAR MdlsAdjusted;                                                     //0x40
};
/* Used in */
// _MI_SYSTEM_INFORMATION

