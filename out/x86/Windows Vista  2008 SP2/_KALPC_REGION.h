#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KALPC_SECTION.h>
#include <_KALPC_VIEW.h>

//0x30 bytes (sizeof)
struct _KALPC_REGION
{
    union
    {
        struct
        {
            ULONG Secure:1;                                                 //0x0
        } s1;                                                               //0x0
    } u1;                                                                   //0x0
    struct _LIST_ENTRY RegionListEntry;                                     //0x4
    struct _KALPC_SECTION* Section;                                         //0xc
    ULONG Offset;                                                           //0x10
    ULONG Size;                                                             //0x14
    ULONG ViewSize;                                                         //0x18
    struct _KALPC_VIEW* ReadOnlyView;                                       //0x1c
    struct _KALPC_VIEW* ReadWriteView;                                      //0x20
    ULONG NumberOfViews;                                                    //0x24
    struct _LIST_ENTRY ViewListHead;                                        //0x28
};
/* Used in */
// _KALPC_VIEW

