#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>
#include <_CACHED_KSTACK_LIST.h>
#include <_MMPFN.h>
#include <_RTL_BITMAP.h>

//0xb0 bytes (sizeof)
struct _MI_SYSTEM_NODE_INFORMATION
{
    union _SLIST_HEADER PagedPoolSListHead;                                 //0x0
    union _SLIST_HEADER NonPagedPoolSListHead[3];                           //0x8
    union _SLIST_HEADER NonPagedPoolSListHeadNx[3];                         //0x20
    struct _CACHED_KSTACK_LIST CachedKernelStacks[2];                       //0x38
    ULONG NonPagedPoolLowestPage;                                           //0x68
    ULONG NonPagedPoolHighestPage;                                          //0x6c
    ULONG AllocatedNonPagedPool;                                            //0x70
    ULONG PartialLargePoolRegions;                                          //0x74
    ULONG PagesInPartialLargePoolRegions;                                   //0x78
    ULONG CachedNonPagedPoolCount;                                          //0x7c
    ULONG NonPagedPoolSpinLock;                                             //0x80
    struct _MMPFN* CachedNonPagedPool;                                      //0x84
    VOID* NonPagedPoolFirstVa;                                              //0x88
    VOID* NonPagedPoolLastVa;                                               //0x8c
    struct _RTL_BITMAP NonPagedBitMap[3];                                   //0x90
    ULONG NonPagedHint[2];                                                  //0xa8
};
/* Used in */
// _MI_HARDWARE_STATE

