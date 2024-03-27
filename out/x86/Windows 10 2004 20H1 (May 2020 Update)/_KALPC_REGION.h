#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KALPC_SECTION.h>
#include <_KALPC_VIEW.h>

//0x30 bytes (sizeof)
struct _KALPC_REGION
{
    struct _LIST_ENTRY RegionListEntry;                                     //0x0
    struct _KALPC_SECTION* Section;                                         //0x8
    ULONG Offset;                                                           //0xc
    ULONG Size;                                                             //0x10
    ULONG ViewSize;                                                         //0x14
    union
    {
        struct
        {
            ULONG Secure:1;                                                 //0x18
        } s1;                                                               //0x18
    } u1;                                                                   //0x18
    ULONG NumberOfViews;                                                    //0x1c
    struct _LIST_ENTRY ViewListHead;                                        //0x20
    struct _KALPC_VIEW* ReadOnlyView;                                       //0x28
    struct _KALPC_VIEW* ReadWriteView;                                      //0x2c
};
/* Used in */
// _KALPC_VIEW

