#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>
#include <_GROUP_AFFINITY.h>
#include <_flags.h>
#include <_CACHED_KSTACK_LIST.h>

//0x80 bytes (sizeof)
struct _KNODE
{
    union _SLIST_HEADER PagedPoolSListHead;                                 //0x0
    union _SLIST_HEADER NonPagedPoolSListHead[3];                           //0x8
    struct _GROUP_AFFINITY Affinity;                                        //0x20
    ULONG ProximityId;                                                      //0x2c
    USHORT NodeNumber;                                                      //0x30
    USHORT PrimaryNodeNumber;                                               //0x32
    UCHAR MaximumProcessors;                                                //0x34
    UCHAR Color;                                                            //0x35
    struct _flags Flags;                                                    //0x36
    UCHAR NodePad0;                                                         //0x37
    ULONG Seed;                                                             //0x38
    ULONG MmShiftedColor;                                                   //0x3c
    volatile ULONG FreeCount[2];                                            //0x40
    struct _CACHED_KSTACK_LIST CachedKernelStacks;                          //0x48
    LONG ParkLock;                                                          //0x60
    ULONG NodePad1;                                                         //0x64
};
/* Used in */
// _KPRCB

