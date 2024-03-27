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

//0x400 bytes (sizeof)
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
    struct _LIST_ENTRY IdleExtraWriteBehindThreadList;                      //0x120
    ULONG ActiveExtraWriteBehindThreads;                                    //0x130
    ULONG MaxExtraWriteBehindThreads;                                       //0x134
    UCHAR QueueThrottle;                                                    //0x138
    ULONG PostTickWorkItemCount;                                            //0x13c
    ULONG ThreadsActiveBeforeThrottle;                                      //0x140
    ULONG ExtraWBThreadsActiveBeforeThrottle;                               //0x144
    ULONG ExecutingWriteBehindWorkItems;                                    //0x148
    ULONG ExecutingHighPriorityWorkItem;                                    //0x14c
    struct _KEVENT LowMemoryEvent;                                          //0x150
    struct _KEVENT PowerEvent;                                              //0x168
    struct _KEVENT PeriodicEvent;                                           //0x180
    struct _KEVENT WaitingForTeardownEvent;                                 //0x198
    struct _KEVENT CoalescingFlushEvent;                                    //0x1b0
    ULONG PagesYetToWrite;                                                  //0x1c8
    struct _LAZY_WRITER LazyWriter;                                         //0x1d0
    struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;                      //0x258
    struct _DIRTY_PAGE_THRESHOLDS DirtyPageThresholds;                      //0x270
    struct _WRITE_BEHIND_THROUGHPUT* ThroughputStats;                       //0x2a8
    LONG ThroughputTrend;                                                   //0x2b0
    ULONGLONG AverageAvailablePages;                                        //0x2b8
    ULONGLONG AverageDirtyPages;                                            //0x2c0
    ULONGLONG PagesSkippedDueToHotSpot;                                     //0x2c8
    union _LARGE_INTEGER PrevRegularQueueItemRunTime;                       //0x2d0
    union _LARGE_INTEGER PrevExtraWBThreadCheckTime;                        //0x2d8
    UCHAR AddExtraWriteBehindThreads;                                       //0x2e0
    UCHAR RemoveExtraThreadPending;                                         //0x2e1
    struct _LIST_ENTRY DeferredWrites;                                      //0x2e8
    ULONGLONG DeferredWriteSpinLock;                                        //0x300
    struct _LIST_ENTRY* IdleAsyncReadWorkerThreadList;                      //0x308
    ULONG* NumberActiveAsyncReadWorkerThreads;                              //0x310
    ULONG* NumberActiveCompleteAsyncReadWorkItems;                          //0x318
    struct _LIST_ENTRY* AsyncReadWorkQueue;                                 //0x320
    struct _LIST_ENTRY* AsyncReadCompletionWorkQueue;                       //0x328
    struct _KEVENT* NewAsyncReadRequestEvent;                               //0x330
    struct _ASYNC_READ_THREAD_STATS* ReaderThreadsStats;                    //0x338
    struct _EX_PUSH_LOCK AsyncReadWorkQueueLock;                            //0x340
    struct _LIST_ENTRY VacbFreeHighPriorityList;                            //0x348
    ULONG NumberOfFreeHighPriorityVacbs;                                    //0x358
    struct _ETHREAD* LowPriWorkerThread;                                    //0x360
    struct _SHARED_CACHE_MAP* LowPriSharedCacheMap;                         //0x368
    LONG LowPriOldCpuPriority;                                              //0x370
    enum _IO_PRIORITY_HINT LowPriOldIoPriority;                             //0x374
    struct _EX_PUSH_LOCK LowPriorityWorkerThreadLock;                       //0x378
    ULONG MaxNumberOfWriteBehindThreads;                                    //0x380
    UCHAR CoalescingState;                                                  //0x384
    UCHAR ActivePartition;                                                  //0x385
    UCHAR RundownPhase;                                                     //0x386
    LONGLONG RefCount;                                                      //0x388
    struct _KEVENT ExitEvent;                                               //0x390
    struct _KEVENT FinalDereferenceEvent;                                   //0x3a8
    VOID* LazyWriteScanThreadHandle;                                        //0x3c0
};
/* Used in */
// _DEFERRED_WRITE
// _SHARED_CACHE_MAP
// _WORK_QUEUE_ENTRY

