#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>
#include <_CACHED_KSTACK_LIST.h>
#include <_MI_DYNAMIC_BITMAP.h>
#include <_MMPFN.h>
#include <_RTL_BITMAP_EX.h>

//0x1a0 bytes (sizeof)
struct _MI_SYSTEM_NODE_INFORMATION
{
    union _SLIST_HEADER PagedPoolSListHead;                                 //0x0
    union _SLIST_HEADER NonPagedPoolSListHead[3];                           //0x10
    union _SLIST_HEADER NonPagedPoolSListHeadNx[3];                         //0x40
    struct _CACHED_KSTACK_LIST CachedKernelStacks[2];                       //0x70
    ULONGLONG NonPagedBitMapMaximum;                                        //0xb0
    struct _MI_DYNAMIC_BITMAP DynamicBitMapNonPagedPool;                    //0xb8
    ULONGLONG NonPagedPoolLowestPage;                                       //0x108
    ULONGLONG NonPagedPoolHighestPage;                                      //0x110
    ULONGLONG AllocatedNonPagedPool;                                        //0x118
    ULONGLONG PartialLargePoolRegions;                                      //0x120
    ULONGLONG PagesInPartialLargePoolRegions;                               //0x128
    ULONGLONG CachedNonPagedPoolCount;                                      //0x130
    ULONGLONG NonPagedPoolSpinLock;                                         //0x138
    struct _MMPFN* CachedNonPagedPool;                                      //0x140
    VOID* NonPagedPoolFirstVa;                                              //0x148
    VOID* NonPagedPoolLastVa;                                               //0x150
    struct _RTL_BITMAP_EX NonPagedBitMap[3];                                //0x158
    ULONGLONG NonPagedHint[2];                                              //0x188
};
/* Used in */
// _MI_HARDWARE_STATE
