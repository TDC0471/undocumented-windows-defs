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

//0x1c8 bytes (sizeof)
struct _MI_PARTITION_CORE
{
    USHORT PartitionId;                                                     //0x0
    union
    {
        ULONG LongFlags;                                                    //0x4
        struct _MI_PARTITION_FLAGS Flags;                                   //0x4
    } u;                                                                    //0x4
    ULONG Signature;                                                        //0x8
    UCHAR MemoryConfigurationChanged;                                       //0xc
    ULONGLONG ReferenceCount;                                               //0x10
    struct _MI_PARTITION* ParentPartition;                                  //0x18
    struct _LIST_ENTRY ListEntry;                                           //0x20
    struct _MI_NODE_INFORMATION* NodeInformation;                           //0x30
    struct _RTL_AVL_TREE PageRoot;                                          //0x38
    struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryNodeRuns;                     //0x40
    ULONGLONG MemoryBlockReferences;                                        //0x48
    struct _WORK_QUEUE_ITEM PfnUnmapWorkItem;                               //0x50
    ULONGLONG PfnUnmapCount;                                                //0x70
    VOID* PfnUnmapWaitList;                                                 //0x78
    struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryRuns;                         //0x80
    struct _KEVENT ExitEvent;                                               //0x88
    VOID* SystemThreadHandles[5];                                           //0xa0
    VOID* PartitionObject;                                                  //0xc8
    VOID* PartitionObjectHandle;                                            //0xd0
    struct _EX_PUSH_LOCK PartitionSystemThreadsLock;                        //0xd8
    struct _EX_PUSH_LOCK DynamicMemoryPushLock;                             //0xe0
    volatile LONG DynamicMemoryLock;                                        //0xe8
    UCHAR PfnUnmapActive;                                                   //0xec
    struct _KEVENT TemporaryMemoryEvent;                                    //0xf0
    VOID* RootDirectory;                                                    //0x108
    VOID* KernelObjectsDirectory;                                           //0x110
    struct _KEVENT* MemoryEvents[11];                                       //0x118
    VOID* MemoryEventHandles[11];                                           //0x170
};
/* Used in */
// _MI_PARTITION

