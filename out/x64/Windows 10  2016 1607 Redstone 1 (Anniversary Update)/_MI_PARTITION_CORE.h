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

//0x160 bytes (sizeof)
struct _MI_PARTITION_CORE
{
    USHORT PartitionId;                                                     //0x0
    union
    {
        ULONG LongFlags;                                                    //0x4
        struct _MI_PARTITION_FLAGS Flags;                                   //0x4
    } u;                                                                    //0x4
    ULONG Signature;                                                        //0x8
    ULONGLONG ReferenceCount;                                               //0x10
    struct _MI_PARTITION* ParentPartition;                                  //0x18
    struct _LIST_ENTRY ListEntry;                                           //0x20
    struct _MI_NODE_INFORMATION* NodeInformation;                           //0x30
    struct _RTL_AVL_TREE PageRoot;                                          //0x38
    struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryNodeRuns;                     //0x40
    ULONGLONG MemoryBlockReferences;                                        //0x48
    struct _WORK_QUEUE_ITEM PfnUnmapWorkItem;                               //0x50
    UCHAR PfnUnmapActive;                                                   //0x70
    ULONGLONG PfnUnmapCount;                                                //0x78
    VOID* PfnUnmapWaitList;                                                 //0x80
    struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryRuns;                         //0x88
    struct _KEVENT ExitEvent;                                               //0x90
    VOID* SystemThreadHandles[5];                                           //0xa8
    VOID* PartitionObject;                                                  //0xd0
    VOID* PartitionObjectHandle;                                            //0xd8
    struct _EX_PUSH_LOCK DynamicMemoryPushLock;                             //0xe0
    volatile LONG DynamicMemoryLock;                                        //0xe8
    struct _KEVENT TemporaryMemoryEvent;                                    //0xf0
    struct _KEVENT* MemoryEvents[11];                                       //0x108
};
/* Used in */
// _MI_PARTITION

