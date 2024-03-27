#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>
#include <_GROUP_AFFINITY.h>
#include <_flags.h>
#include <_CACHED_KSTACK_LIST.h>

//0xc0 bytes (sizeof)
struct _KNODE
{
    union _SLIST_HEADER PagedPoolSListHead;                                 //0x0
    union _SLIST_HEADER NonPagedPoolSListHead[3];                           //0x10
    struct _GROUP_AFFINITY Affinity;                                        //0x40
    ULONG ProximityId;                                                      //0x50
    USHORT NodeNumber;                                                      //0x54
    USHORT PrimaryNodeNumber;                                               //0x56
    UCHAR MaximumProcessors;                                                //0x58
    UCHAR Color;                                                            //0x59
    struct _flags Flags;                                                    //0x5a
    UCHAR NodePad0;                                                         //0x5b
    ULONG Seed;                                                             //0x5c
    ULONG MmShiftedColor;                                                   //0x60
    volatile ULONGLONG FreeCount[2];                                        //0x68
    ULONG Right;                                                            //0x78
    ULONG Left;                                                             //0x7c
    struct _CACHED_KSTACK_LIST CachedKernelStacks;                          //0x80
    LONG ParkLock;                                                          //0xa0
    ULONG NodePad1;                                                         //0xa4
};
/* Used in */
// _KPRCB

