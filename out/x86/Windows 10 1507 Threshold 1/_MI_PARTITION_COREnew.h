#pragma once
/* ------------------ */

#include <_MI_PARTITION_FLAGS.h>
#include <_MI_PARTITION.h>
#include <_LIST_ENTRY.h>
#include <_MI_NODE_INFORMATION.h>
#include <_MDL.h>
#include <_PHYSICAL_MEMORY_DESCRIPTOR.h>
#include <_MI_PARTITION_STATISTICS.h>
#include <_KEVENT.h>
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
    ULONG ReferenceCount;                                                   //0x8
    struct _MI_PARTITION* ParentPartition;                                  //0xc
    struct _LIST_ENTRY ListEntry;                                           //0x10
    struct _MI_NODE_INFORMATION* NodeInformation;                           //0x18
    struct _MDL* MdlPhysicalMemoryBlock;                                    //0x1c
    struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryNodeRuns;                     //0x20
    struct _MI_PARTITION_STATISTICS Stats;                                  //0x24
    struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryRuns;                         //0x74
    struct _KEVENT ExitEvent;                                               //0x78
    VOID* SystemThreadHandles[5];                                           //0x88
    VOID* PartitionObject;                                                  //0x9c
    VOID* PartitionObjectHandle;                                            //0xa0
    struct _EX_PUSH_LOCK DynamicMemoryPushLock;                             //0xa4
    volatile LONG DynamicMemoryLock;                                        //0xa8
    struct _KEVENT TemporaryMemoryEvent;                                    //0xac
    struct _KEVENT* MemoryEvents[11];                                       //0xbc
};
/* Used in */
// _MI_PARTITION

