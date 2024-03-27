#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>
#include <_POOL_TYPE.h>
#include <_LIST_ENTRY.h>

//0x80 bytes (sizeof)
struct _GENERAL_LOOKASIDE
{
    struct _SLIST_HEADER ListHead;                                          //0x0
    USHORT Depth;                                                           //0x10
    USHORT MaximumDepth;                                                    //0x12
    ULONG TotalAllocates;                                                   //0x14
    union
    {
        ULONG AllocateMisses;                                               //0x18
        ULONG AllocateHits;                                                 //0x18
    };
    ULONG TotalFrees;                                                       //0x1c
    union
    {
        ULONG FreeMisses;                                                   //0x20
        ULONG FreeHits;                                                     //0x20
    };
    enum _POOL_TYPE Type;                                                   //0x24
    ULONG Tag;                                                              //0x28
    ULONG Size;                                                             //0x2c
    VOID* (*Allocate)(enum _POOL_TYPE arg1, ULONGLONG arg2, ULONG arg3);    //0x30
    VOID (*Free)(VOID* arg1);                                               //0x38
    struct _LIST_ENTRY ListEntry;                                           //0x40
    ULONG LastTotalAllocates;                                               //0x50
    union
    {
        ULONG LastAllocateMisses;                                           //0x54
        ULONG LastAllocateHits;                                             //0x54
    };
    ULONG Future[2];                                                        //0x58
};
/* Used in */
// _MM_SESSION_SPACE
// _NPAGED_LOOKASIDE_LIST
// _PAGED_LOOKASIDE_LIST
// _PP_LOOKASIDE_LIST

