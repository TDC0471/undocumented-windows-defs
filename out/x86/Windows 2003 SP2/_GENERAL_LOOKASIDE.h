#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>
#include <_POOL_TYPE.h>
#include <_LIST_ENTRY.h>

//0x80 bytes (sizeof)
struct _GENERAL_LOOKASIDE
{
    union _SLIST_HEADER ListHead;                                           //0x0
    USHORT Depth;                                                           //0x8
    USHORT MaximumDepth;                                                    //0xa
    ULONG TotalAllocates;                                                   //0xc
    union
    {
        ULONG AllocateMisses;                                               //0x10
        ULONG AllocateHits;                                                 //0x10
    };
    ULONG TotalFrees;                                                       //0x14
    union
    {
        ULONG FreeMisses;                                                   //0x18
        ULONG FreeHits;                                                     //0x18
    };
    enum _POOL_TYPE Type;                                                   //0x1c
    ULONG Tag;                                                              //0x20
    ULONG Size;                                                             //0x24
    VOID* (*Allocate)(enum _POOL_TYPE arg1, ULONG arg2, ULONG arg3);        //0x28
    VOID (*Free)(VOID* arg1);                                               //0x2c
    struct _LIST_ENTRY ListEntry;                                           //0x30
    ULONG LastTotalAllocates;                                               //0x38
    union
    {
        ULONG LastAllocateMisses;                                           //0x3c
        ULONG LastAllocateHits;                                             //0x3c
    };
    ULONG Future[2];                                                        //0x40
};
/* Used in */
// _MM_SESSION_SPACE
// _NPAGED_LOOKASIDE_LIST
// _PAGED_LOOKASIDE_LIST
// _PP_LOOKASIDE_LIST

