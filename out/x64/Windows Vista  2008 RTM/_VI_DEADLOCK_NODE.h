#pragma once
/* ------------------ */

#include <_VI_DEADLOCK_NODE.h>
#include <_LIST_ENTRY.h>
#include <_VI_DEADLOCK_RESOURCE.h>
#include <_VI_DEADLOCK_THREAD.h>

//0xd0 bytes (sizeof)
struct _VI_DEADLOCK_NODE
{
    struct _VI_DEADLOCK_NODE* Parent;                                       //0x0
    struct _LIST_ENTRY ChildrenList;                                        //0x8
    struct _LIST_ENTRY SiblingsList;                                        //0x18
    union
    {
        struct _LIST_ENTRY ResourceList;                                    //0x28
        struct _LIST_ENTRY FreeListEntry;                                   //0x28
    };
    struct _VI_DEADLOCK_RESOURCE* Root;                                     //0x38
    struct _VI_DEADLOCK_THREAD* ThreadEntry;                                //0x40
    union
    {
        ULONG Active:1;                                                     //0x48
        ULONG OnlyTryAcquireUsed:1;                                         //0x48
        ULONG ReleasedOutOfOrder:1;                                         //0x48
        ULONG SequenceNumber:29;                                            //0x48
        ULONG Whole;                                                        //0x48
    } u1;                                                                   //0x48
    VOID* StackTrace[8];                                                    //0x50
    VOID* ParentStackTrace[8];                                              //0x90
};
/* Used in */
// _VI_DEADLOCK_GLOBALS
// _VI_DEADLOCK_NODE
// _VI_DEADLOCK_THREAD

