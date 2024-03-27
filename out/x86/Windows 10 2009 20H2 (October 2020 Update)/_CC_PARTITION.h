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

//0x2c0 bytes (sizeof)
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
    struct _LIST_ENTRY CleanCachemapUninitWorkQueue;                        //0xb4
    struct _LIST_ENTRY IdleExtraWriteBehindThreadList;                      //0xbc
    ULONG ActiveExtraWriteBehindThreads;                                    //0xc4
    ULONG MaxExtraWriteBehindThreads;                                       //0xc8
    struct _LIST_ENTRY IdleCacheMapUninitThreadList;                        //0xcc
    ULONG ActiveCacheMapUninitThreads;                                      //0xd4
    ULONG MaxCacheMapUninitThreads;                                         //0xd8
    UCHAR QueueThrottle;                                                    //0xdc
    ULONG PostTickWorkItemCount;                                            //0xe0
    ULONG ThreadsActiveBeforeThrottle;                                      //0xe4
    ULONG ExtraWBThreadsActiveBeforeThrottle;                               //0xe8
    ULONG ExecutingWriteBehindWorkItems;                                    //0xec
    ULONG ExecutingHighPriorityWorkItem;                                    //0xf0
    struct _KEVENT LowMemoryEvent;                                          //0xf4
    struct _KEVENT PowerEvent;                                              //0x104
    struct _KEVENT PeriodicEvent;                                           //0x114
    struct _KEVENT WaitingForTeardownEvent;                                 //0x124
    struct _KEVENT CoalescingFlushEvent;                                    //0x134
    ULONG PagesYetToWrite;                                                  //0x144
    struct _LAZY_WRITER LazyWriter;                                         //0x148
    struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;                      //0x198
    struct _DIRTY_PAGE_THRESHOLDS DirtyPageThresholds;                      //0x1a8
    struct _WRITE_BEHIND_THROUGHPUT* ThroughputStats;                       //0x1d0
    LONG ThroughputTrend;                                                   //0x1d4
    ULONGLONG AverageAvailablePages;                                        //0x1d8
    ULONGLONG AverageDirtyPages;                                            //0x1e0
    ULONGLONG PagesSkippedDueToHotSpot;                                     //0x1e8
    union _LARGE_INTEGER PrevRegularQueueItemRunTime;                       //0x1f0
    union _LARGE_INTEGER PrevExtraWBThreadCheckTime;                        //0x1f8
    UCHAR AddExtraWriteBehindThreads;                                       //0x200
    UCHAR RemoveExtraThreadPending;                                         //0x201
    struct _LIST_ENTRY DeferredWrites;                                      //0x204
    ULONG DeferredWriteSpinLock;                                            //0x240
    struct _LIST_ENTRY* IdleAsyncReadWorkerThreadList;                      //0x244
    ULONG* NumberActiveAsyncReadWorkerThreads;                              //0x248
    ULONG* NumberActiveCompleteAsyncReadWorkItems;                          //0x24c
    struct _LIST_ENTRY* AsyncReadWorkQueue;                                 //0x250
    struct _LIST_ENTRY* AsyncReadCompletionWorkQueue;                       //0x254
    struct _KEVENT* NewAsyncReadRequestEvent;                               //0x258
    struct _ASYNC_READ_THREAD_STATS* ReaderThreadsStats;                    //0x25c
    struct _EX_PUSH_LOCK AsyncReadWorkQueueLock;                            //0x260
    struct _LIST_ENTRY VacbFreeHighPriorityList;                            //0x264
    ULONG NumberOfFreeHighPriorityVacbs;                                    //0x26c
    struct _ETHREAD* LowPriWorkerThread;                                    //0x270
    struct _SHARED_CACHE_MAP* LowPriSharedCacheMap;                         //0x274
    LONG LowPriOldCpuPriority;                                              //0x278
    enum _IO_PRIORITY_HINT LowPriOldIoPriority;                             //0x27c
    struct _EX_PUSH_LOCK LowPriorityWorkerThreadLock;                       //0x280
    ULONG MaxNumberOfWriteBehindThreads;                                    //0x284
    UCHAR CoalescingState;                                                  //0x288
    UCHAR ActivePartition;                                                  //0x289
    UCHAR RundownPhase;                                                     //0x28a
    LONG RefCount;                                                          //0x28c
    struct _KEVENT ExitEvent;                                               //0x290
    struct _KEVENT FinalDereferenceEvent;                                   //0x2a0
    VOID* LazyWriteScanThreadHandle;                                        //0x2b0
};
/* Used in */
// _DEFERRED_WRITE
// _SHARED_CACHE_MAP
// _WORK_QUEUE_ENTRY

