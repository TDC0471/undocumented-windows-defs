#pragma once
/* ------------------ */

#include <_EPARTITION.h>
#include <_LIST_ENTRY.h>
#include <_KEVENT.h>
#include <_CC_NUMA_NODE.h>
#include <_SHARED_CACHE_MAP_LIST_CURSOR.h>
#include <_LAZY_WRITER.h>
#include <_DIRTY_PAGE_STATISTICS.h>
#include <_DIRTY_PAGE_THRESHOLDS.h>
#include <_WRITE_BEHIND_THROUGHPUT.h>
#include <_EX_PUSH_LOCK.h>
#include <_ETHREAD.h>
#include <_SHARED_CACHE_MAP.h>
#include <_IO_PRIORITY_HINT.h>
#include <_CC_LWS_PACKET.h>

//0x540 bytes (sizeof)
struct _CC_PARTITION
{
    SHORT NodeTypeCode;                                                     //0x0
    SHORT NodeByteSize;                                                     //0x2
    struct _EPARTITION* PartitionObject;                                    //0x8
    struct _LIST_ENTRY NumaNodeList;                                        //0x10
    struct _LIST_ENTRY VolumeList;                                          //0x20
    ULONG VolumeCount;                                                      //0x30
    struct _KEVENT LastVolumeEvent;                                         //0x38
    struct _CC_NUMA_NODE* NumaNodeBlock[64];                                //0x50
    struct _LIST_ENTRY CleanSharedCacheMapList;                             //0x250
    struct _LIST_ENTRY CleanSharedCacheMapWithLogHandleList;                //0x260
    struct _SHARED_CACHE_MAP_LIST_CURSOR DirtySharedCacheMapList;           //0x270
    struct _SHARED_CACHE_MAP_LIST_CURSOR LazyWriteCursor;                   //0x288
    struct _LIST_ENTRY DirtySharedCacheMapWithLogHandleList;                //0x2a0
    ULONGLONG PrivateLock;                                                  //0x2c0
    ULONG ConsecutiveWorklessLazyScanCount;                                 //0x2c8
    UCHAR ForcedDisableLazywriteScan;                                       //0x2cc
    ULONGLONG WorkQueueLock;                                                //0x300
    ULONG NumberWorkerThreads;                                              //0x308
    struct _LIST_ENTRY PostTickWorkQueue;                                   //0x310
    ULONG MaxExtraWriteBehindThreads;                                       //0x320
    ULONG MaxCacheMapUninitThreads;                                         //0x324
    UCHAR QueueThrottle;                                                    //0x328
    ULONG PostTickWorkItemCount;                                            //0x32c
    struct _KEVENT LowMemoryEvent;                                          //0x330
    struct _KEVENT PowerEvent;                                              //0x348
    struct _KEVENT WaitingForTeardownEvent;                                 //0x360
    struct _KEVENT CoalescingFlushEvent;                                    //0x378
    ULONG PagesYetToWrite;                                                  //0x390
    struct _LAZY_WRITER LazyWriter;                                         //0x398
    struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;                      //0x3e0
    struct _DIRTY_PAGE_THRESHOLDS DirtyPageThresholds;                      //0x3f8
    struct _WRITE_BEHIND_THROUGHPUT* ThroughputStats;                       //0x430
    ULONGLONG AverageAvailablePages;                                        //0x438
    ULONGLONG AverageDirtyPages;                                            //0x440
    ULONGLONG PagesSkippedDueToHotSpot;                                     //0x448
    struct _LIST_ENTRY DeferredWrites;                                      //0x450
    ULONGLONG DeferredWriteSpinLock;                                        //0x480
    struct _EX_PUSH_LOCK AsyncReadWorkQueueLock;                            //0x488
    struct _LIST_ENTRY VacbFreeHighPriorityList;                            //0x490
    ULONG NumberOfFreeHighPriorityVacbs;                                    //0x4a0
    struct _ETHREAD* LowPriWorkerThread;                                    //0x4a8
    struct _SHARED_CACHE_MAP* LowPriSharedCacheMap;                         //0x4b0
    LONG LowPriOldCpuPriority;                                              //0x4b8
    enum _IO_PRIORITY_HINT LowPriOldIoPriority;                             //0x4bc
    struct _EX_PUSH_LOCK LowPriorityWorkerThreadLock;                       //0x4c0
    ULONG MaxNumberOfWriteBehindThreads;                                    //0x4c8
    UCHAR CoalescingState;                                                  //0x4cc
    UCHAR ActivePartition;                                                  //0x4cd
    UCHAR RundownPhase;                                                     //0x4ce
    LONGLONG RefCount;                                                      //0x4d0
    struct _KEVENT ExitEvent;                                               //0x4d8
    struct _KEVENT FinalDereferenceEvent;                                   //0x4f0
    VOID* LazyWriteScanThreadHandle;                                        //0x508
    struct _CC_LWS_PACKET LWSPacket;                                        //0x510
};
/* Used in */
// _CC_EXTERNAL_CACHE_INFO
// _CC_LWS_PACKET
// _CC_NUMA_NODE
// _DEFERRED_WRITE
// _PRIVATE_VOLUME_CACHEMAP
// _SHARED_CACHE_MAP
// _WORK_QUEUE_ENTRY

