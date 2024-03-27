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

//0x158 bytes (sizeof)
struct _MI_PARTITION_CORE
{
    USHORT PartitionId;                                                     //0x0
    union
    {
        ULONG LongFlags;                                                    //0x4
        struct _MI_PARTITION_FLAGS Flags;                                   //0x4
    } u;                                                                    //0x4
    ULONGLONG ReferenceCount;                                               //0x8
    struct _MI_PARTITION* ParentPartition;                                  //0x10
    struct _LIST_ENTRY ListEntry;                                           //0x18
    struct _MI_NODE_INFORMATION* NodeInformation;                           //0x28
    struct _MDL* MdlPhysicalMemoryBlock;                                    //0x30
    struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryNodeRuns;                     //0x38
    ULONGLONG MemoryBlockReferences;                                        //0x40
    struct _WORK_QUEUE_ITEM PfnUnmapWorkItem;                               //0x48
    UCHAR PfnUnmapActive;                                                   //0x68
    ULONGLONG PfnUnmapCount;                                                //0x70
    VOID* PfnUnmapWaitList;                                                 //0x78
    struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryRuns;                         //0x80
    struct _KEVENT ExitEvent;                                               //0x88
    VOID* SystemThreadHandles[5];                                           //0xa0
    VOID* PartitionObject;                                                  //0xc8
    VOID* PartitionObjectHandle;                                            //0xd0
    struct _EX_PUSH_LOCK DynamicMemoryPushLock;                             //0xd8
    volatile LONG DynamicMemoryLock;                                        //0xe0
    struct _KEVENT TemporaryMemoryEvent;                                    //0xe8
    struct _KEVENT* MemoryEvents[11];                                       //0x100
};
/* Used in */
// _MI_PARTITION

