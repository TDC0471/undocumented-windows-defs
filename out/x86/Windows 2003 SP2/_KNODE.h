#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>
#include <_flags.h>
#include <_SINGLE_LIST_ENTRY.h>

//0x40 bytes (sizeof)
struct _KNODE
{
    union _SLIST_HEADER DeadStackList;                                      //0x0
    union _SLIST_HEADER PfnDereferenceSListHead;                            //0x8
    ULONG ProcessorMask;                                                    //0x10
    UCHAR Color;                                                            //0x14
    UCHAR Seed;                                                             //0x15
    UCHAR NodeNumber;                                                       //0x16
    struct _flags Flags;                                                    //0x17
    ULONG MmShiftedColor;                                                   //0x18
    ULONG FreeCount[2];                                                     //0x1c
    struct _SINGLE_LIST_ENTRY* PfnDeferredList;                             //0x24
};
/* Used in */
// _KPRCB

