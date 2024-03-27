#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_POOL_TYPE.h>
#include <_LOOKASIDE_LIST_EX.h>
#include <_LIST_ENTRY.h>

//0x48 bytes (sizeof)
struct _GENERAL_LOOKASIDE_POOL
{
    union
    {
        union _SLIST_HEADER ListHead;                                       //0x0
        struct _SINGLE_LIST_ENTRY SingleListHead;                           //0x0
    };
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
    union
    {
        VOID* (*AllocateEx)(enum _POOL_TYPE arg1, ULONG arg2, ULONG arg3, struct _LOOKASIDE_LIST_EX* arg4); //0x28
        VOID* (*Allocate)(enum _POOL_TYPE arg1, ULONG arg2, ULONG arg3);    //0x28
    };
    union
    {
        VOID (*FreeEx)(VOID* arg1, struct _LOOKASIDE_LIST_EX* arg2);        //0x2c
        VOID (*Free)(VOID* arg1);                                           //0x2c
    };
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
// _KPRCB
// _LOOKASIDE_LIST_EX

