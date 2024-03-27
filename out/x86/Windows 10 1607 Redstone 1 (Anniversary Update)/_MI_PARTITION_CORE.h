#pragma once
/* ------------------ */

#include <_MI_PARTITION_FLAGS.h>
#include <_MI_PARTITION.h>
#include <_LIST_ENTRY.h>
#include <_MI_NODE_INFORMATION.h>
#include <_RTL_AVL_TREE.h>
#include <_PHYSICAL_MEMORY_DESCRIPTOR.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_KEVENT.h>
#include <_EX_PUSH_LOCK.h>

//0xbc bytes (sizeof)
struct _MI_PARTITION_CORE
{
    USHORT PartitionId;                                                     //0x0
    union
    {
        ULONG LongFlags;                                                    //0x4
        struct _MI_PARTITION_FLAGS Flags;                                   //0x4
    } u;                                                                    //0x4
    ULONG Signature;                                                        //0x8
    ULONG ReferenceCount;                                                   //0xc
    struct _MI_PARTITION* ParentPartition;                                  //0x10
    struct _LIST_ENTRY ListEntry;                                           //0x14
    struct _MI_NODE_INFORMATION* NodeInformation;                           //0x1c
    struct _RTL_AVL_TREE PageRoot;                                          //0x20
    struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryNodeRuns;                     //0x24
    ULONG MemoryBlockReferences;                                            //0x28
    struct _WORK_QUEUE_ITEM PfnUnmapWorkItem;                               //0x2c
    UCHAR PfnUnmapActive;                                                   //0x3c
    ULONG PfnUnmapCount;                                                    //0x40
    VOID* PfnUnmapWaitList;                                                 //0x44
    struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryRuns;                         //0x48
    struct _KEVENT ExitEvent;                                               //0x4c
    VOID* SystemThreadHandles[5];                                           //0x5c
    VOID* PartitionObject;                                                  //0x70
    VOID* PartitionObjectHandle;                                            //0x74
    struct _EX_PUSH_LOCK DynamicMemoryPushLock;                             //0x78
    volatile LONG DynamicMemoryLock;                                        //0x7c
    struct _KEVENT TemporaryMemoryEvent;                                    //0x80
    struct _KEVENT* MemoryEvents[11];                                       //0x90
};
/* Used in */
// _MI_PARTITION

