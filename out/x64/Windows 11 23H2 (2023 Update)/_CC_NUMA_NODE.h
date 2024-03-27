#pragma once
/* ------------------ */

#include <_CC_NUMA_TYPE.h>
#include <_CC_PARTITION.h>
#include <_PRIVATE_VOLUME_CACHEMAP.h>
#include <_LIST_ENTRY.h>
#include <_LARGE_INTEGER.h>
#include <_KEVENT.h>
#include <_ASYNC_READ_THREAD_STATS.h>
#include <_ASYNC_LAZYWRITE_THREAD_STATS.h>

//0x1b8 bytes (sizeof)
struct _CC_NUMA_NODE
{
    SHORT NodeTypeCode;                                                     //0x0
    SHORT NodeByteSize;                                                     //0x2
    enum _CC_NUMA_TYPE NumaNodeType;                                        //0x4
    struct _CC_PARTITION* Partition;                                        //0x8
    struct _PRIVATE_VOLUME_CACHEMAP* PrivateVolumeCacheMap;                 //0x10
    ULONG NodeNumber;                                                       //0x18
    struct _LIST_ENTRY NodeList;                                            //0x20
    ULONG NumberActiveWorkerThreads;                                        //0x30
    struct _LIST_ENTRY IdleWorkerThreadList;                                //0x38
    struct _LIST_ENTRY FastTeardownWorkQueue;                               //0x48
    struct _LIST_ENTRY ExpressWorkQueue;                                    //0x58
    struct _LIST_ENTRY RegularWorkQueue;                                    //0x68
    struct _LIST_ENTRY CleanCachemapUninitWorkQueue;                        //0x78
    struct _LIST_ENTRY IdleExtraWriteBehindThreadList;                      //0x88
    ULONG ActiveExtraWriteBehindThreads;                                    //0x98
    struct _LIST_ENTRY IdleCacheMapUninitThreadList;                        //0xa0
    ULONG ActiveCacheMapUninitThreads;                                      //0xb0
    ULONG ThreadsActiveBeforeThrottle;                                      //0xb4
    ULONG ExtraWBThreadsActiveBeforeThrottle;                               //0xb8
    ULONG ExecutingWriteBehindWorkItems;                                    //0xbc
    ULONG ExecutingHighPriorityWorkItem;                                    //0xc0
    UCHAR QueueThrottle;                                                    //0xc4
    LONG ThroughputTrend;                                                   //0xc8
    union _LARGE_INTEGER PrevRegularQueueItemRunTime;                       //0xd0
    union _LARGE_INTEGER PrevExtraWBThreadCheckTime;                        //0xd8
    UCHAR AddExtraWriteBehindThreads;                                       //0xe0
    UCHAR RemoveExtraThreadPending;                                         //0xe1
    struct _LIST_ENTRY* IdleAsyncReadWorkerThreadList;                      //0xe8
    ULONG* NumberActiveAsyncReadWorkerThreads;                              //0xf0
    ULONG* NumberActiveCompleteAsyncReadWorkItems;                          //0xf8
    struct _LIST_ENTRY* AsyncReadWorkQueue;                                 //0x100
    struct _LIST_ENTRY* AsyncReadCompletionWorkQueue;                       //0x108
    struct _KEVENT* NewAsyncReadRequestEvent;                               //0x110
    struct _ASYNC_READ_THREAD_STATS* ReaderThreadsStats;                    //0x118
    struct _LIST_ENTRY IdleAsyncLazywriteWorkerThreadList;                  //0x120
    ULONG NumberActiveAsyncLazywriteWorkerThreads;                          //0x130
    struct _LIST_ENTRY AsyncLazywriteWorkQueue;                             //0x138
    struct _KEVENT NewAsyncLazywriteRequestEvent;                           //0x148
    struct _ASYNC_LAZYWRITE_THREAD_STATS LazywriterThreadsStats;            //0x160
    struct _LIST_ENTRY IdleCompleteAsyncLazywriteWorkerThreadList;          //0x190
    ULONG NumberActiveCompleteAsyncLazywriteWorkers;                        //0x1a0
    struct _LIST_ENTRY AsyncLazywriteCompletionWorkQueue;                   //0x1a8
};
/* Used in */
// _CC_PARTITION
// _PRIVATE_VOLUME_CACHEMAP
// _WORK_QUEUE_ENTRY

