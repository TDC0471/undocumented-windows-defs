#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>
#include <_SLIST_HEADER.h>
#include <_MMINPAGE_SUPPORT.h>
#include <_MMPTE.h>

//0xb0 bytes (sizeof)
struct _MI_PAGING_IO_STATE
{
    struct _RTL_AVL_TREE PageFileHead;                                      //0x0
    volatile LONG PageFileHeadSpinLock;                                     //0x8
    LONG PrefetchSeekThreshold;                                             //0xc
    ULONG InPageSinglePages;                                                //0x10
    union _SLIST_HEADER InPageSupportSListHead[2];                          //0x20
    union _SLIST_HEADER ReservedInPageSupportSListHead[2];                  //0x40
    UCHAR InPageSupportSListMinimum[2];                                     //0x60
    struct _MMINPAGE_SUPPORT* FirstReservedInPageBlock[2];                  //0x68
    struct _MMINPAGE_SUPPORT* LastReservedInPageBlock[2];                   //0x78
    struct _MMPTE* ReservedPtes;                                            //0x88
    ULONGLONG ReservedPtesLock;                                             //0x90
    ULONG ReservedPtesBitBuffer;                                            //0x98
    volatile LONG DelayPageFaults;                                          //0x9c
    ULONG FileCompressionBoundary;                                          //0xa0
    UCHAR MdlsAdjusted;                                                     //0xa4
};
/* Used in */
// _MI_SYSTEM_INFORMATION

