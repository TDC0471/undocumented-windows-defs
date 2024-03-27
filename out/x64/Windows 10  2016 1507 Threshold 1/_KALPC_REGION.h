#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KALPC_SECTION.h>
#include <_KALPC_VIEW.h>

//0x58 bytes (sizeof)
struct _KALPC_REGION
{
    struct _LIST_ENTRY RegionListEntry;                                     //0x0
    struct _KALPC_SECTION* Section;                                         //0x10
    ULONGLONG Offset;                                                       //0x18
    ULONGLONG Size;                                                         //0x20
    ULONGLONG ViewSize;                                                     //0x28
    union
    {
        struct
        {
            ULONG Secure:1;                                                 //0x30
        } s1;                                                               //0x30
    } u1;                                                                   //0x30
    ULONG NumberOfViews;                                                    //0x34
    struct _LIST_ENTRY ViewListHead;                                        //0x38
    struct _KALPC_VIEW* ReadOnlyView;                                       //0x48
    struct _KALPC_VIEW* ReadWriteView;                                      //0x50
};
/* Used in */
// _KALPC_VIEW

