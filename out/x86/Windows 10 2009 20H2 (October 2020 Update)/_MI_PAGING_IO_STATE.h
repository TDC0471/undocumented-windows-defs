#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>
#include <_SLIST_HEADER.h>
#include <_MMINPAGE_SUPPORT.h>
#include <_MMPTE.h>

//0x60 bytes (sizeof)
struct _MI_PAGING_IO_STATE
{
    struct _RTL_AVL_TREE PageFileHead;                                      //0x0
    volatile LONG PageFileHeadSpinLock;                                     //0x4
    LONG PrefetchSeekThreshold;                                             //0x8
    ULONG InPageSinglePages;                                                //0xc
    union _SLIST_HEADER InPageSupportSListHead[2];                          //0x10
    union _SLIST_HEADER ReservedInPageSupportSListHead[2];                  //0x20
    UCHAR InPageSupportSListMinimum[2];                                     //0x30
    struct _MMINPAGE_SUPPORT* FirstReservedInPageBlock[2];                  //0x34
    struct _MMINPAGE_SUPPORT* LastReservedInPageBlock[2];                   //0x3c
    struct _MMPTE* ReservedPtes;                                            //0x44
    ULONG ReservedPtesLock;                                                 //0x48
    ULONG ReservedPtesBitBuffer;                                            //0x4c
    volatile LONG DelayPageFaults;                                          //0x50
    ULONG FileCompressionBoundary;                                          //0x54
    UCHAR MdlsAdjusted;                                                     //0x58
};
/* Used in */
// _MI_SYSTEM_INFORMATION

