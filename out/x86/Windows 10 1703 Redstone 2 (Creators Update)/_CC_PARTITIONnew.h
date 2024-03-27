#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_SHARED_CACHE_MAP_LIST_CURSOR.h>
#include <_EX_PUSH_LOCK.h>
#include <_KEVENT.h>
#include <_LAZY_WRITER.h>
#include <_DIRTY_PAGE_STATISTICS.h>
#include <_DIRTY_PAGE_THRESHOLDS.h>
#include <_WRITE_BEHIND_THROUGHPUT.h>
#include <_LARGE_INTEGER.h>
#include <_ASYNC_READ_THREAD_STATS.h>

//0x280 bytes (sizeof)
struct _CC_PARTITION
{
    SHORT NodeTypeCode;                                                     //0x0
    SHORT NodeByteSize;                                                     //0x2
    ULONG MasterLock;                                                       //0x40
    ULONG WorkQueueLock;                                                    //0x80
    USHORT PartitionID;                                                     //0x84
    struct _LIST_ENTRY PartitionLinks;                                      //0x88
    struct _LIST_ENTRY CleanSharedCacheMapList;                             //0x90
    struct _LIST_ENTRY CleanSharedCacheMapWithLogHandleList;                //0x98
    struct _SHARED_CACHE_MAP_LIST_CURSOR DirtySharedCacheMapList;           //0xa0
    struct _SHARED_CACHE_MAP_LIST_CURSOR LazyWriterCursor;                  //0xac
    struct _LIST_ENTRY DirtySharedCacheMapWithLogHandleList;                //0xb8
    struct _EX_PUSH_LOCK ChangeSharedCacheMapFileLock;                      //0xc0
    ULONG ConsecutiveWorklessLazyScanCount;                                 //0xc4
    UCHAR ForcedDisableLazywriteScan;                                       //0xc8
    ULONG NumberWorkerThreads;                                              //0xcc
    ULONG NumberActiveWorkerThreads;                                        //0xd0
    struct _LIST_ENTRY IdleWorkerThreadList;                                //0xd4
    struct _LIST_ENTRY FastTeardownWorkQueue;                               //0xdc
    struct _LIST_ENTRY ExpressWorkQueue;                                    //0xe4
    struct _LIST_ENTRY RegularWorkQueue;                                    //0xec
    struct _LIST_ENTRY PostTickWorkQueue;                                   //0xf4
    struct _LIST_ENTRY IdleExtraWriteBehindThreadList;                      //0xfc
    ULONG ActiveExtraWriteBehindThreads;                                    //0x104
    ULONG MaxExtraWriteBehindThreads;                                       //0x108
    UCHAR QueueThrottle;                                                    //0x10c
    ULONG PostTickWorkItemCount;                                            //0x110
    ULONG ThreadsActiveBeforeThrottle;                                      //0x114
    ULONG ExtraWBThreadsActiveBeforeThrottle;                               //0x118
    ULONG ExecutingWriteBehindWorkItems;                                    //0x11c
    ULONG ExecutingHighPriorityWorkItem;                                    //0x120
    struct _KEVENT LowMemoryEvent;                                          //0x124
    struct _KEVENT PowerEvent;                                              //0x134
    struct _KEVENT PeriodicEvent;                                           //0x144
    struct _KEVENT WaitingForTeardownEvent;                                 //0x154
    struct _KEVENT CoalescingFlushEvent;                                    //0x164
    ULONG PagesYetToWrite;                                                  //0x174
    struct _LAZY_WRITER LazyWriter;                                         //0x178
    struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;                      //0x1c8
    struct _DIRTY_PAGE_THRESHOLDS DirtyPageThresholds;                      //0x1d8
    struct _WRITE_BEHIND_THROUGHPUT* ThroughputStats;                       //0x200
    LONG ThroughputTrend;                                                   //0x204
    ULONGLONG AverageAvailablePages;                                        //0x208
    ULONGLONG AverageDirtyPages;                                            //0x210
    ULONGLONG PagesSkippedDueToHotSpot;                                     //0x218
    union _LARGE_INTEGER PrevRegularQueueItemRunTime;                       //0x220
    union _LARGE_INTEGER PrevExtraWBThreadCheckTime;                        //0x228
    UCHAR AddExtraWriteBehindThreads;                                       //0x230
    UCHAR RemoveExtraThreadPending;                                         //0x231
    struct _LIST_ENTRY DeferredWrites;                                      //0x234
    ULONG DeferredWriteSpinLock;                                            //0x240
    struct _LIST_ENTRY* IdleAsyncReadWorkerThreadList;                      //0x244
    ULONG* NumberActiveAsyncReadWorkerThreads;                              //0x248
    ULONG* NumberActiveCompleteAsyncReadWorkItems;                          //0x24c
    struct _LIST_ENTRY* AsyncReadWorkQueue;                                 //0x250
    struct _LIST_ENTRY* AsyncReadCompletionWorkQueue;                       //0x254
    struct _KEVENT* NewAsyncReadRequestEvent;                               //0x258
    struct _ASYNC_READ_THREAD_STATS* ReaderThreadsStats;                    //0x25c
    struct _EX_PUSH_LOCK AsyncReadWorkQueueLock;                            //0x260
};
/* Used in */
// _SHARED_CACHE_MAP
// _WORK_QUEUE_ENTRY

