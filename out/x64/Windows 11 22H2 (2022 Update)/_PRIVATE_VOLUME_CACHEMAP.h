#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_CC_PARTITION.h>
#include <_VOLUME_CACHE_MAP.h>
#include <_LIST_ENTRY.h>
#include <_CC_NUMA_NODE.h>
#include <_SHARED_CACHE_MAP_LIST_CURSOR.h>
#include <_KEVENT.h>
#include <_LAZY_WRITER.h>
#include <_DIRTY_PAGE_STATISTICS.h>
#include <_DIRTY_PAGE_THRESHOLDS.h>
#include <_WRITE_BEHIND_THROUGHPUT.h>
#include <_EX_PUSH_LOCK.h>
#include <_CC_LWS_PACKET.h>
#include <_LARGE_INTEGER.h>

//0x680 bytes (sizeof)
struct _PRIVATE_VOLUME_CACHEMAP
{
    SHORT NodeTypeCode;                                                     //0x0
    SHORT NodeByteSize;                                                     //0x2
    ULONG UseCount;                                                         //0x4
    LONGLONG RefCount;                                                      //0x8
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x10
    ULONG VolumeId;                                                         //0x18
    struct _CC_PARTITION* Partition;                                        //0x20
    struct _VOLUME_CACHE_MAP* VolumeCacheMap;                               //0x28
    struct _LIST_ENTRY NumaNodeList;                                        //0x30
    struct _CC_NUMA_NODE* NumaNodeBlock[64];                                //0x40
    struct _LIST_ENTRY PartitionVolumeLinks;                                //0x240
    struct _LIST_ENTRY VolumeCacheMapLinks;                                 //0x250
    struct _LIST_ENTRY CleanSharedCacheMapList;                             //0x260
    struct _LIST_ENTRY CleanSharedCacheMapWithLogHandleList;                //0x270
    struct _SHARED_CACHE_MAP_LIST_CURSOR DirtySharedCacheMapList;           //0x280
    struct _SHARED_CACHE_MAP_LIST_CURSOR LazyWriteCursor;                   //0x298
    struct _LIST_ENTRY DirtySharedCacheMapWithLogHandleList;                //0x2b0
    ULONG ConsecutiveWorklessLazyScanCount;                                 //0x2c0
    UCHAR ForcedDisableLazywriteScan;                                       //0x2c4
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
    ULONG MaxNumberOfWriteBehindThreads;                                    //0x490
    UCHAR CoalescingState;                                                  //0x494
    UCHAR InitComplete;                                                     //0x495
    struct _KEVENT ExitEvent;                                               //0x498
    struct _KEVENT FinalDereferenceEvent;                                   //0x4b0
    VOID* LazyWriteScanThreadHandle;                                        //0x4c8
    struct _CC_LWS_PACKET LWSPacket;                                        //0x4d0
    struct _LIST_ENTRY ExternalCacheList;                                   //0x4e0
    ULONG ThroughputIdx;                                                    //0x4f0
    ULONGLONG AvgPagesPerSecond;                                            //0x4f8
    ULONGLONG ThroughputHistory[32];                                        //0x500
    ULONG DirtyThresholdInSeconds;                                          //0x600
    ULONG DirtyPageTargetInSeconds;                                         //0x604
    struct _LIST_ENTRY QuickLWSThreadList;                                  //0x608
    struct _KEVENT QuickLazyScanEvent;                                      //0x618
    union _LARGE_INTEGER PrevLazyWriteScanTime;                             //0x630
    ULONG AsyncLazywriteQueueDepth;                                         //0x638
    ULONG MaxAsyncLazywriteCompletionWorkers;                               //0x63c
    ULONG Flags;                                                            //0x640
};
/* Used in */
// _CC_FLUSH_PACKET
// _CC_LWS_PACKET
// _CC_NUMA_NODE
// _DEFERRED_WRITE
// _SHARED_CACHE_MAP
// _WORK_QUEUE_ENTRY

