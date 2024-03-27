#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>
#include <_flags.h>
#include <_SLIST_ENTRY.h>
#include <_CACHED_KSTACK_LIST.h>

//0xc0 bytes (sizeof)
struct _KNODE
{
    union _SLIST_HEADER PagedPoolSListHead;                                 //0x0
    union _SLIST_HEADER NonPagedPoolSListHead[3];                           //0x10
    union _SLIST_HEADER PfnDereferenceSListHead;                            //0x40
    ULONGLONG ProcessorMask;                                                //0x50
    UCHAR Color;                                                            //0x58
    UCHAR Seed;                                                             //0x59
    UCHAR NodeNumber;                                                       //0x5a
    struct _flags Flags;                                                    //0x5b
    ULONG MmShiftedColor;                                                   //0x5c
    ULONGLONG FreeCount[2];                                                 //0x60
    struct _SLIST_ENTRY* volatile PfnDeferredList;                          //0x70
    ULONG Right;                                                            //0x78
    ULONG Left;                                                             //0x7c
    struct _CACHED_KSTACK_LIST CachedKernelStacks;                          //0x80
};
/* Used in */
// _KPRCB

