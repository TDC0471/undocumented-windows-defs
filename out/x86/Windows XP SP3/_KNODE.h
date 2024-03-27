#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_flags.h>

//0x30 bytes (sizeof)
struct _KNODE
{
    ULONG ProcessorMask;                                                    //0x0
    ULONG Color;                                                            //0x4
    ULONG MmShiftedColor;                                                   //0x8
    ULONG FreeCount[2];                                                     //0xc
    union _SLIST_HEADER DeadStackList;                                      //0x18
    union _SLIST_HEADER PfnDereferenceSListHead;                            //0x20
    struct _SINGLE_LIST_ENTRY* PfnDeferredList;                             //0x28
    UCHAR Seed;                                                             //0x2c
    struct _flags Flags;                                                    //0x2d
};
/* Used in */
// _KPRCB

