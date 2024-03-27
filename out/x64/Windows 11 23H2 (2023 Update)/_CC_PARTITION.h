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

//0x580 bytes (sizeof)
struct _CC_PARTITION
{
    SHORT NodeTypeCode;                                                     //0x0
    SHORT NodeByteSize;                                                     //0x2
    struct _EPARTITION* PartitionObject;                                    //0x8
    struct _LIST_ENTRY NumaNodeList;                                        //0x10
    struct _LIST_ENTRY VolumeList;                                          //0x20
    ULONG VolumeCount;                                                      //0x30
    struct _KEVENT LastVolumeEvent;                                         //0x38
    struct _LIST_ENTRY DeletedVolumeList;                                   //0x50
    struct _LIST_ENTRY DeletePVCMWorkerThreadList;                          //0x60
    struct _CC_NUMA_NODE* NumaNodeBlock[64];                                //0x70
    struct _LIST_ENTRY CleanSharedCacheMapList;                             //0x270
    struct _LIST_ENTRY CleanSharedCacheMapWithLogHandleList;                //0x280
    struct _SHARED_CACHE_MAP_LIST_CURSOR DirtySharedCacheMapList;           //0x290
    struct _SHARED_CACHE_MAP_LIST_CURSOR LazyWriteCursor;                   //0x2a8
    struct _LIST_ENTRY DirtySharedCacheMapWithLogHandleList;                //0x2c0
    ULONGLONG PrivateLock;                                                  //0x300
    ULONG ConsecutiveWorklessLazyScanCount;                                 //0x308
    UCHAR ForcedDisableLazywriteScan;                                       //0x30c
    ULONGLONG WorkQueueLock;                                                //0x340
    ULONG NumberWorkerThreads;                                              //0x348
    struct _LIST_ENTRY PostTickWorkQueue;                                   //0x350
    ULONG MaxExtraWriteBehindThreads;                                       //0x360
    ULONG MaxCacheMapUninitThreads;                                         //0x364
    ULONG PostTickWorkItemCount;                                            //0x368
    struct _KEVENT LowMemoryEvent;                                          //0x370
    struct _KEVENT PowerEvent;                                              //0x388
    struct _KEVENT WaitingForTeardownEvent;                                 //0x3a0
    struct _KEVENT CoalescingFlushEvent;                                    //0x3b8
    ULONG PagesYetToWrite;                                                  //0x3d0
    struct _LAZY_WRITER LazyWriter;                                         //0x3d8
    struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;                      //0x420
    struct _DIRTY_PAGE_THRESHOLDS DirtyPageThresholds;                      //0x438
    struct _WRITE_BEHIND_THROUGHPUT* ThroughputStats;                       //0x470
    ULONGLONG AverageAvailablePages;                                        //0x478
    ULONGLONG AverageDirtyPages;                                            //0x480
    ULONGLONG PagesSkippedDueToHotSpot;                                     //0x488
    struct _LIST_ENTRY DeferredWrites;                                      //0x490
    ULONGLONG DeferredWriteSpinLock;                                        //0x4c0
    struct _EX_PUSH_LOCK AsyncReadWorkQueueLock;                            //0x4c8
    struct _LIST_ENTRY VacbFreeHighPriorityList;                            //0x4d0
    ULONG NumberOfFreeHighPriorityVacbs;                                    //0x4e0
    struct _ETHREAD* LowPriWorkerThread;                                    //0x4e8
    struct _SHARED_CACHE_MAP* LowPriSharedCacheMap;                         //0x4f0
    LONG LowPriOldCpuPriority;                                              //0x4f8
    enum _IO_PRIORITY_HINT LowPriOldIoPriority;                             //0x4fc
    struct _EX_PUSH_LOCK LowPriorityWorkerThreadLock;                       //0x500
    ULONG MaxNumberOfWriteBehindThreads;                                    //0x508
    UCHAR CoalescingState;                                                  //0x50c
    UCHAR ActivePartition;                                                  //0x50d
    UCHAR RundownPhase;                                                     //0x50e
    LONGLONG RefCount;                                                      //0x510
    struct _KEVENT ExitEvent;                                               //0x518
    struct _KEVENT FinalDereferenceEvent;                                   //0x530
    VOID* LazyWriteScanThreadHandle;                                        //0x548
    struct _CC_LWS_PACKET LWSPacket;                                        //0x550
};
/* Used in */
// _CC_FLUSH_PACKET
// _CC_LWS_PACKET
// _CC_NUMA_NODE
// _DEFERRED_WRITE
// _PRIVATE_VOLUME_CACHEMAP
// _SHARED_CACHE_MAP
// _WORK_QUEUE_ENTRY

