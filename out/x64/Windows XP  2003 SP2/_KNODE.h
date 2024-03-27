#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>
#include <_flags.h>
#include <_SLIST_ENTRY.h>

//0x40 bytes (sizeof)
struct _KNODE
{
    struct _SLIST_HEADER DeadStackList;                                     //0x0
    union
    {
        struct _SLIST_HEADER PfnDereferenceSListHead;                       //0x10
        struct
        {
            ULONGLONG Alignment;                                            //0x10
            ULONGLONG ProcessorMask;                                        //0x18
        };
    };
    UCHAR Color;                                                            //0x20
    UCHAR Seed;                                                             //0x21
    UCHAR NodeNumber;                                                       //0x22
    struct _flags Flags;                                                    //0x23
    ULONG MmShiftedColor;                                                   //0x24
    ULONGLONG FreeCount[2];                                                 //0x28
    struct _SLIST_ENTRY* PfnDeferredList;                                   //0x38
};
/* Used in */
// _KPRCB

