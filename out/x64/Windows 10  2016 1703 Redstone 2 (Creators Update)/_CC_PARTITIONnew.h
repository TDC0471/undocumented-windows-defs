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

//0x3c0 bytes (sizeof)
struct _CC_PARTITION
{
    SHORT NodeTypeCode;                                                     //0x0
    SHORT NodeByteSize;                                                     //0x2
    ULONGLONG MasterLock;                                                   //0x40
    ULONGLONG WorkQueueLock;                                                //0x80
    USHORT PartitionID;                                                     //0x88
    struct _LIST_ENTRY PartitionLinks;                                      //0x90
    struct _LIST_ENTRY CleanSharedCacheMapList;                             //0xa0
    struct _LIST_ENTRY CleanSharedCacheMapWithLogHandleList;                //0xb0
    struct _SHARED_CACHE_MAP_LIST_CURSOR DirtySharedCacheMapList;           //0xc0
    struct _SHARED_CACHE_MAP_LIST_CURSOR LazyWriterCursor;                  //0xd8
    struct _LIST_ENTRY DirtySharedCacheMapWithLogHandleList;                //0xf0
    struct _EX_PUSH_LOCK ChangeSharedCacheMapFileLock;                      //0x100
    ULONG ConsecutiveWorklessLazyScanCount;                                 //0x108
    UCHAR ForcedDisableLazywriteScan;                                       //0x10c
    ULONG NumberWorkerThreads;                                              //0x110
    ULONG NumberActiveWorkerThreads;                                        //0x114
    struct _LIST_ENTRY IdleWorkerThreadList;                                //0x118
    struct _LIST_ENTRY FastTeardownWorkQueue;                               //0x128
    struct _LIST_ENTRY ExpressWorkQueue;                                    //0x138
    struct _LIST_ENTRY RegularWorkQueue;                                    //0x148
    struct _LIST_ENTRY PostTickWorkQueue;                                   //0x158
    struct _LIST_ENTRY IdleExtraWriteBehindThreadList;                      //0x168
    ULONG ActiveExtraWriteBehindThreads;                                    //0x178
    ULONG MaxExtraWriteBehindThreads;                                       //0x17c
    UCHAR QueueThrottle;                                                    //0x180
    ULONG PostTickWorkItemCount;                                            //0x184
    ULONG ThreadsActiveBeforeThrottle;                                      //0x188
    ULONG ExtraWBThreadsActiveBeforeThrottle;                               //0x18c
    ULONG ExecutingWriteBehindWorkItems;                                    //0x190
    ULONG ExecutingHighPriorityWorkItem;                                    //0x194
    struct _KEVENT LowMemoryEvent;                                          //0x198
    struct _KEVENT PowerEvent;                                              //0x1b0
    struct _KEVENT PeriodicEvent;                                           //0x1c8
    struct _KEVENT WaitingForTeardownEvent;                                 //0x1e0
    struct _KEVENT CoalescingFlushEvent;                                    //0x1f8
    ULONG PagesYetToWrite;                                                  //0x210
    struct _LAZY_WRITER LazyWriter;                                         //0x218
    struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;                      //0x2a0
    struct _DIRTY_PAGE_THRESHOLDS DirtyPageThresholds;                      //0x2b8
    struct _WRITE_BEHIND_THROUGHPUT* ThroughputStats;                       //0x2f0
    LONG ThroughputTrend;                                                   //0x2f8
    ULONGLONG AverageAvailablePages;                                        //0x300
    ULONGLONG AverageDirtyPages;                                            //0x308
    ULONGLONG PagesSkippedDueToHotSpot;                                     //0x310
    union _LARGE_INTEGER PrevRegularQueueItemRunTime;                       //0x318
    union _LARGE_INTEGER PrevExtraWBThreadCheckTime;                        //0x320
    UCHAR AddExtraWriteBehindThreads;                                       //0x328
    UCHAR RemoveExtraThreadPending;                                         //0x329
    struct _LIST_ENTRY DeferredWrites;                                      //0x330
    ULONGLONG DeferredWriteSpinLock;                                        //0x340
    struct _LIST_ENTRY* IdleAsyncReadWorkerThreadList;                      //0x348
    ULONG* NumberActiveAsyncReadWorkerThreads;                              //0x350
    ULONG* NumberActiveCompleteAsyncReadWorkItems;                          //0x358
    struct _LIST_ENTRY* AsyncReadWorkQueue;                                 //0x360
    struct _LIST_ENTRY* AsyncReadCompletionWorkQueue;                       //0x368
    struct _KEVENT* NewAsyncReadRequestEvent;                               //0x370
    struct _ASYNC_READ_THREAD_STATS* ReaderThreadsStats;                    //0x378
    struct _EX_PUSH_LOCK AsyncReadWorkQueueLock;                            //0x380
};
/* Used in */
// _SHARED_CACHE_MAP
// _WORK_QUEUE_ENTRY

