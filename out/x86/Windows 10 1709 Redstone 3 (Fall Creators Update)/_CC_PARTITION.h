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

//0x280 bytes (sizeof)
struct _CC_PARTITION
{
    SHORT NodeTypeCode;                                                     //0x0
    SHORT NodeByteSize;                                                     //0x2
    struct _EPARTITION* PartitionObject;                                    //0x4
    struct _LIST_ENTRY CleanSharedCacheMapList;                             //0x8
    struct _LIST_ENTRY CleanSharedCacheMapWithLogHandleList;                //0x10
    struct _SHARED_CACHE_MAP_LIST_CURSOR DirtySharedCacheMapList;           //0x18
    struct _SHARED_CACHE_MAP_LIST_CURSOR LazyWriteCursor;                   //0x24
    struct _LIST_ENTRY DirtySharedCacheMapWithLogHandleList;                //0x30
    ULONG PrivateLock;                                                      //0x40
    ULONG ConsecutiveWorklessLazyScanCount;                                 //0x44
    UCHAR ForcedDisableLazywriteScan;                                       //0x48
    ULONG WorkQueueLock;                                                    //0x80
    ULONG NumberWorkerThreads;                                              //0x84
    ULONG NumberActiveWorkerThreads;                                        //0x88
    struct _LIST_ENTRY IdleWorkerThreadList;                                //0x8c
    struct _LIST_ENTRY FastTeardownWorkQueue;                               //0x94
    struct _LIST_ENTRY ExpressWorkQueue;                                    //0x9c
    struct _LIST_ENTRY RegularWorkQueue;                                    //0xa4
    struct _LIST_ENTRY PostTickWorkQueue;                                   //0xac
    struct _LIST_ENTRY IdleExtraWriteBehindThreadList;                      //0xb4
    ULONG ActiveExtraWriteBehindThreads;                                    //0xbc
    ULONG MaxExtraWriteBehindThreads;                                       //0xc0
    UCHAR QueueThrottle;                                                    //0xc4
    ULONG PostTickWorkItemCount;                                            //0xc8
    ULONG ThreadsActiveBeforeThrottle;                                      //0xcc
    ULONG ExtraWBThreadsActiveBeforeThrottle;                               //0xd0
    ULONG ExecutingWriteBehindWorkItems;                                    //0xd4
    ULONG ExecutingHighPriorityWorkItem;                                    //0xd8
    struct _KEVENT LowMemoryEvent;                                          //0xdc
    struct _KEVENT PowerEvent;                                              //0xec
    struct _KEVENT PeriodicEvent;                                           //0xfc
    struct _KEVENT WaitingForTeardownEvent;                                 //0x10c
    struct _KEVENT CoalescingFlushEvent;                                    //0x11c
    ULONG PagesYetToWrite;                                                  //0x12c
    struct _LAZY_WRITER LazyWriter;                                         //0x130
    struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;                      //0x180
    struct _DIRTY_PAGE_THRESHOLDS DirtyPageThresholds;                      //0x190
    struct _WRITE_BEHIND_THROUGHPUT* ThroughputStats;                       //0x1b8
    LONG ThroughputTrend;                                                   //0x1bc
    ULONGLONG AverageAvailablePages;                                        //0x1c0
    ULONGLONG AverageDirtyPages;                                            //0x1c8
    ULONGLONG PagesSkippedDueToHotSpot;                                     //0x1d0
    union _LARGE_INTEGER PrevRegularQueueItemRunTime;                       //0x1d8
    union _LARGE_INTEGER PrevExtraWBThreadCheckTime;                        //0x1e0
    UCHAR AddExtraWriteBehindThreads;                                       //0x1e8
    UCHAR RemoveExtraThreadPending;                                         //0x1e9
    struct _LIST_ENTRY DeferredWrites;                                      //0x1ec
    ULONG DeferredWriteSpinLock;                                            //0x200
    struct _LIST_ENTRY* IdleAsyncReadWorkerThreadList;                      //0x204
    ULONG* NumberActiveAsyncReadWorkerThreads;                              //0x208
    ULONG* NumberActiveCompleteAsyncReadWorkItems;                          //0x20c
    struct _LIST_ENTRY* AsyncReadWorkQueue;                                 //0x210
    struct _LIST_ENTRY* AsyncReadCompletionWorkQueue;                       //0x214
    struct _KEVENT* NewAsyncReadRequestEvent;                               //0x218
    struct _ASYNC_READ_THREAD_STATS* ReaderThreadsStats;                    //0x21c
    struct _EX_PUSH_LOCK AsyncReadWorkQueueLock;                            //0x220
    struct _LIST_ENTRY VacbFreeHighPriorityList;                            //0x224
    ULONG NumberOfFreeHighPriorityVacbs;                                    //0x22c
    struct _ETHREAD* LowPriWorkerThread;                                    //0x230
    struct _SHARED_CACHE_MAP* LowPriSharedCacheMap;                         //0x234
    LONG LowPriOldCpuPriority;                                              //0x238
    enum _IO_PRIORITY_HINT LowPriOldIoPriority;                             //0x23c
    struct _EX_PUSH_LOCK LowPriorityWorkerThreadLock;                       //0x240
    ULONG MaxNumberOfWriteBehindThreads;                                    //0x244
    UCHAR CoalescingState;                                                  //0x248
    UCHAR RundownStarted;                                                   //0x249
    LONG RefCount;                                                          //0x24c
    struct _KEVENT ExitEvent;                                               //0x250
    struct _KEVENT FinalDereferenceEvent;                                   //0x260
    VOID* LazyWriteScanThreadHandle;                                        //0x270
};
/* Used in */
// _DEFERRED_WRITE
// _SHARED_CACHE_MAP
// _WORK_QUEUE_ENTRY

