#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KALPC_SECTION.h>
#include <_KALPC_VIEW.h>

//0x60 bytes (sizeof)
struct _KALPC_REGION
{
    union
    {
        struct
        {
            ULONG Secure:1;                                                 //0x0
        } s1;                                                               //0x0
    } u1;                                                                   //0x0
    struct _LIST_ENTRY RegionListEntry;                                     //0x8
    struct _KALPC_SECTION* Section;                                         //0x18
    ULONGLONG Offset;                                                       //0x20
    ULONGLONG Size;                                                         //0x28
    ULONGLONG ViewSize;                                                     //0x30
    struct _KALPC_VIEW* ReadOnlyView;                                       //0x38
    struct _KALPC_VIEW* ReadWriteView;                                      //0x40
    ULONG NumberOfViews;                                                    //0x48
    struct _LIST_ENTRY ViewListHead;                                        //0x50
};
/* Used in */
// _KALPC_VIEW

