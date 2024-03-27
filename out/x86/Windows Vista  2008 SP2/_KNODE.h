#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>
#include <_flags.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_CACHED_KSTACK_LIST.h>

//0x80 bytes (sizeof)
struct _KNODE
{
    union _SLIST_HEADER PagedPoolSListHead;                                 //0x0
    union _SLIST_HEADER NonPagedPoolSListHead[3];                           //0x8
    union _SLIST_HEADER PfnDereferenceSListHead;                            //0x20
    ULONG ProcessorMask;                                                    //0x28
    UCHAR Color;                                                            //0x2c
    UCHAR Seed;                                                             //0x2d
    UCHAR NodeNumber;                                                       //0x2e
    struct _flags Flags;                                                    //0x2f
    ULONG MmShiftedColor;                                                   //0x30
    ULONG FreeCount[2];                                                     //0x34
    struct _SINGLE_LIST_ENTRY* volatile PfnDeferredList;                    //0x3c
    struct _CACHED_KSTACK_LIST CachedKernelStacks;                          //0x40
};
/* Used in */
// _KPRCB

