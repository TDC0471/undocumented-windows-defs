#pragma once
/* ------------------ */

#include <_MI_PARTITION_FLAGS.h>
#include <_MI_PARTITION.h>
#include <_LIST_ENTRY.h>
#include <_MI_NODE_INFORMATION.h>
#include <_MDL.h>
#include <_PHYSICAL_MEMORY_DESCRIPTOR.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_KEVENT.h>
#include <_EX_PUSH_LOCK.h>

//0xb8 bytes (sizeof)
struct _MI_PARTITION_CORE
{
    USHORT PartitionId;                                                     //0x0
    union
    {
        ULONG LongFlags;                                                    //0x4
        struct _MI_PARTITION_FLAGS Flags;                                   //0x4
    } u;                                                                    //0x4
    ULONG ReferenceCount;                                                   //0x8
    struct _MI_PARTITION* ParentPartition;                                  //0xc
    struct _LIST_ENTRY ListEntry;                                           //0x10
    struct _MI_NODE_INFORMATION* NodeInformation;                           //0x18
    struct _MDL* MdlPhysicalMemoryBlock;                                    //0x1c
    struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryNodeRuns;                     //0x20
    ULONG MemoryBlockReferences;                                            //0x24
    struct _WORK_QUEUE_ITEM PfnUnmapWorkItem;                               //0x28
    UCHAR PfnUnmapActive;                                                   //0x38
    ULONG PfnUnmapCount;                                                    //0x3c
    VOID* PfnUnmapWaitList;                                                 //0x40
    struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryRuns;                         //0x44
    struct _KEVENT ExitEvent;                                               //0x48
    VOID* SystemThreadHandles[5];                                           //0x58
    VOID* PartitionObject;                                                  //0x6c
    VOID* PartitionObjectHandle;                                            //0x70
    struct _EX_PUSH_LOCK DynamicMemoryPushLock;                             //0x74
    volatile LONG DynamicMemoryLock;                                        //0x78
    struct _KEVENT TemporaryMemoryEvent;                                    //0x7c
    struct _KEVENT* MemoryEvents[11];                                       //0x8c
};
/* Used in */
// _MI_PARTITION

