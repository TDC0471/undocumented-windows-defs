#pragma once
/* ------------------ */

#include <_EPARTITION.h>
#include <_LIST_ENTRY.h>
#include <_SHARED_CACHE_MAP_LIST_CURSOR.h>
#include <_KEVENT.h>
#include <_LAZY_WRITER.h>
#include <_DIRTY_PAGE_STATISTICS.h>
#include <_DIRTY_PAGE_THRESHOLDS.h>
#include <_WRITE_BEHIND_THROUGHPUT.h>
#include <_LARGE_INTEGER.h>
#include <_ASYNC_READ_THREAD_STATS.h>
#include <_EX_PUSH_LOCK.h>
#include <_ETHREAD.h>
#include <_SHARED_CACHE_MAP.h>
#include <_IO_PRIORITY_HINT.h>

//0x440 bytes (sizeof)
struct _CC_PARTITION
{
    SHORT NodeTypeCode;                                                     //0x0
    SHORT NodeByteSize;                                                     //0x2
    struct _EPARTITION* PartitionObject;                                    //0x8
    struct _LIST_ENTRY CleanSharedCacheMapList;                             //0x10
    struct _LIST_ENTRY CleanSharedCacheMapWithLogHandleList;                //0x20
    struct _SHARED_CACHE_MAP_LIST_CURSOR DirtySharedCacheMapList;           //0x30
    struct _SHARED_CACHE_MAP_LIST_CURSOR LazyWriteCursor;                   //0x48
    struct _LIST_ENTRY DirtySharedCacheMapWithLogHandleList;                //0x60
    ULONGLONG PrivateLock;                                                  //0x80
    ULONG ConsecutiveWorklessLazyScanCount;                                 //0x88
    UCHAR ForcedDisableLazywriteScan;                                       //0x8c
    ULONGLONG WorkQueueLock;                                                //0xc0
    ULONG NumberWorkerThreads;                                              //0xc8
    ULONG NumberActiveWorkerThreads;                                        //0xcc
    struct _LIST_ENTRY IdleWorkerThreadList;                                //0xd0
    struct _LIST_ENTRY FastTeardownWorkQueue;                               //0xe0
    struct _LIST_ENTRY ExpressWorkQueue;                                    //0xf0
    struct _LIST_ENTRY RegularWorkQueue;                                    //0x100
    struct _LIST_ENTRY PostTickWorkQueue;                                   //0x110
    struct _LIST_ENTRY CleanCachemapUninitWorkQueue;                        //0x120
    struct _LIST_ENTRY IdleExtraWriteBehindThreadList;                      //0x130
    ULONG ActiveExtraWriteBehindThreads;                                    //0x140
    ULONG MaxExtraWriteBehindThreads;                                       //0x144
    struct _LIST_ENTRY IdleCacheMapUninitThreadList;                        //0x148
    ULONG ActiveCacheMapUninitThreads;                                      //0x158
    ULONG MaxCacheMapUninitThreads;                                         //0x15c
    UCHAR QueueThrottle;                                                    //0x160
    ULONG PostTickWorkItemCount;                                            //0x164
    ULONG ThreadsActiveBeforeThrottle;                                      //0x168
    ULONG ExtraWBThreadsActiveBeforeThrottle;                               //0x16c
    ULONG ExecutingWriteBehindWorkItems;                                    //0x170
    ULONG ExecutingHighPriorityWorkItem;                                    //0x174
    struct _KEVENT LowMemoryEvent;                                          //0x178
    struct _KEVENT PowerEvent;                                              //0x190
    struct _KEVENT PeriodicEvent;                                           //0x1a8
    struct _KEVENT WaitingForTeardownEvent;                                 //0x1c0
    struct _KEVENT CoalescingFlushEvent;                                    //0x1d8
    ULONG PagesYetToWrite;                                                  //0x1f0
    struct _LAZY_WRITER LazyWriter;                                         //0x1f8
    struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;                      //0x280
    struct _DIRTY_PAGE_THRESHOLDS DirtyPageThresholds;                      //0x298
    struct _WRITE_BEHIND_THROUGHPUT* ThroughputStats;                       //0x2d0
    LONG ThroughputTrend;                                                   //0x2d8
    ULONGLONG AverageAvailablePages;                                        //0x2e0
    ULONGLONG AverageDirtyPages;                                            //0x2e8
    ULONGLONG PagesSkippedDueToHotSpot;                                     //0x2f0
    union _LARGE_INTEGER PrevRegularQueueItemRunTime;                       //0x2f8
    union _LARGE_INTEGER PrevExtraWBThreadCheckTime;                        //0x300
    UCHAR AddExtraWriteBehindThreads;                                       //0x308
    UCHAR RemoveExtraThreadPending;                                         //0x309
    struct _LIST_ENTRY DeferredWrites;                                      //0x310
    ULONGLONG DeferredWriteSpinLock;                                        //0x340
    struct _LIST_ENTRY* IdleAsyncReadWorkerThreadList;                      //0x348
    ULONG* NumberActiveAsyncReadWorkerThreads;                              //0x350
    ULONG* NumberActiveCompleteAsyncReadWorkItems;                          //0x358
    struct _LIST_ENTRY* AsyncReadWorkQueue;                                 //0x360
    struct _LIST_ENTRY* AsyncReadCompletionWorkQueue;                       //0x368
    struct _KEVENT* NewAsyncReadRequestEvent;                               //0x370
    struct _ASYNC_READ_THREAD_STATS* ReaderThreadsStats;                    //0x378
    struct _EX_PUSH_LOCK AsyncReadWorkQueueLock;                            //0x380
    struct _LIST_ENTRY VacbFreeHighPriorityList;                            //0x388
    ULONG NumberOfFreeHighPriorityVacbs;                                    //0x398
    struct _ETHREAD* LowPriWorkerThread;                                    //0x3a0
    struct _SHARED_CACHE_MAP* LowPriSharedCacheMap;                         //0x3a8
    LONG LowPriOldCpuPriority;                                              //0x3b0
    enum _IO_PRIORITY_HINT LowPriOldIoPriority;                             //0x3b4
    struct _EX_PUSH_LOCK LowPriorityWorkerThreadLock;                       //0x3b8
    ULONG MaxNumberOfWriteBehindThreads;                                    //0x3c0
    UCHAR CoalescingState;                                                  //0x3c4
    UCHAR ActivePartition;                                                  //0x3c5
    UCHAR RundownPhase;                                                     //0x3c6
    LONGLONG RefCount;                                                      //0x3c8
    struct _KEVENT ExitEvent;                                               //0x3d0
    struct _KEVENT FinalDereferenceEvent;                                   //0x3e8
    VOID* LazyWriteScanThreadHandle;                                        //0x400
};
/* Used in */
// _DEFERRED_WRITE
// _SHARED_CACHE_MAP
// _WORK_QUEUE_ENTRY

