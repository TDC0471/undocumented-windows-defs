#pragma once
/* ------------------ */

#include <_VI_DEADLOCK_NODE.h>
#include <_LIST_ENTRY.h>
#include <_VI_DEADLOCK_RESOURCE.h>
#include <_VI_DEADLOCK_THREAD.h>

//0x6c bytes (sizeof)
struct _VI_DEADLOCK_NODE
{
    struct _VI_DEADLOCK_NODE* Parent;                                       //0x0
    struct _LIST_ENTRY ChildrenList;                                        //0x4
    struct _LIST_ENTRY SiblingsList;                                        //0xc
    union
    {
        struct _LIST_ENTRY ResourceList;                                    //0x14
        struct _LIST_ENTRY FreeListEntry;                                   //0x14
    };
    struct _VI_DEADLOCK_RESOURCE* Root;                                     //0x1c
    struct _VI_DEADLOCK_THREAD* ThreadEntry;                                //0x20
    union
    {
        ULONG Active:1;                                                     //0x24
        ULONG OnlyTryAcquireUsed:1;                                         //0x24
        ULONG ReleasedOutOfOrder:1;                                         //0x24
        ULONG SequenceNumber:29;                                            //0x24
        ULONG Whole;                                                        //0x24
    } u1;                                                                   //0x24
    LONG ChildrenCount;                                                     //0x28
    VOID* StackTrace[8];                                                    //0x2c
    VOID* ParentStackTrace[8];                                              //0x4c
};
/* Used in */
// _VI_DEADLOCK_GLOBALS
// _VI_DEADLOCK_NODE
// _VI_DEADLOCK_THREAD
