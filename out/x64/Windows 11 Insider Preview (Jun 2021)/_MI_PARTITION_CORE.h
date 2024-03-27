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
#include <_SLIST_HEADER.h>

//0x1d0 bytes (sizeof)
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
    struct _RTL_AVL_TREE PageRoot;                                          //0x18
    struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryNodeRuns;                     //0x20
    ULONGLONG MemoryBlockReferences;                                        //0x28
    struct _WORK_QUEUE_ITEM PfnUnmapWorkItem;                               //0x30
    ULONGLONG PfnUnmapCount;                                                //0x50
    VOID* PfnUnmapWaitList;                                                 //0x58
    struct _PHYSICAL_MEMORY_DESCRIPTOR* MemoryRuns;                         //0x60
    struct _KEVENT ExitEvent;                                               //0x68
    VOID* SystemThreadHandles[6];                                           //0x80
    struct _EPARTITION* PartitionObject;                                    //0xb0
    struct _EX_PUSH_LOCK PartitionSystemThreadsLock;                        //0xb8
    struct _EX_PUSH_LOCK DynamicMemoryPushLock;                             //0xc0
    volatile LONG DynamicMemoryLock;                                        //0xc8
    UCHAR PfnUnmapActive;                                                   //0xcc
    struct _KEVENT TemporaryMemoryEvent;                                    //0xd0
    VOID* RootDirectory;                                                    //0xe8
    VOID* KernelObjectsDirectory;                                           //0xf0
    struct _KEVENT* MemoryEvents[11];                                       //0xf8
    VOID* MemoryEventHandles[11];                                           //0x150
    ULONGLONG TotalHugeIoRanges;                                            //0x1a8
    ULONGLONG NonChargedSecurePages;                                        //0x1b0
    union _SLIST_HEADER FreeKernelShadowStackCacheEntries;                  //0x1c0
};
/* Used in */
// _MI_PARTITION

