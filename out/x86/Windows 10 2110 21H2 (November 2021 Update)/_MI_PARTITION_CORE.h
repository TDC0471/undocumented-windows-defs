#pragma once
/* ------------------ */

#include <_MI_PARTITION_FLAGS.h>
#include <_MI_NODE_INFORMATION.h>
#include <_RTL_AVL_TREE.h>
#include <_PHYSICAL_MEMORY_DESCRIPTOR.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_KEVENT.h>
#include <_EPARTITION.h>
#include <_EX_PUSH_LOCK.h>

//0xe8 bytes (sizeof)
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
    struct _MI_NODE_INFORMATION* NodeInformation;                           //0x10
    struct _RTL_AVL_TREE PageRoot;                                          //0x14
    struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryNodeRuns;                     //0x18
    ULONG MemoryBlockReferences;                                            //0x1c
    struct _WORK_QUEUE_ITEM PfnUnmapWorkItem;                               //0x20
    ULONG PfnUnmapCount;                                                    //0x30
    VOID* PfnUnmapWaitList;                                                 //0x34
    struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryRuns;                         //0x38
    struct _KEVENT ExitEvent;                                               //0x3c
    VOID* SystemThreadHandles[6];                                           //0x4c
    struct _EPARTITION* PartitionObject;                                    //0x64
    struct _EX_PUSH_LOCK PartitionSystemThreadsLock;                        //0x68
    struct _EX_PUSH_LOCK DynamicMemoryPushLock;                             //0x6c
    volatile LONG DynamicMemoryLock;                                        //0x70
    UCHAR PfnUnmapActive;                                                   //0x74
    struct _KEVENT TemporaryMemoryEvent;                                    //0x78
    VOID* RootDirectory;                                                    //0x88
    VOID* KernelObjectsDirectory;                                           //0x8c
    struct _KEVENT* MemoryEvents[11];                                       //0x90
    VOID* MemoryEventHandles[11];                                           //0xbc
};
/* Used in */
// _MI_PARTITION

