#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_LIST_ENTRY.h>
#include <_VACB.h>
#include <_EX_FAST_REF.h>
#include <_EX_PUSH_LOCK.h>
#include <_MBCB.h>
#include <_KEVENT.h>
#include <_CACHE_MANAGER_CALLBACKS.h>
#include <_CACHE_MANAGER_CALLBACKS_EX.h>
#include <_LOGGED_STREAM_CALLBACK_V1.h>
#include <_LOGGED_STREAM_CALLBACK_V2.h>
#include <_CACHE_UNINITIALIZE_EVENT.h>
#include <_FAST_MUTEX.h>
#include <_PRIVATE_CACHE_MAP.h>
#include <_VOLUME_CACHE_MAP.h>
#include <_CC_PARTITION.h>
#include <_PRIVATE_VOLUME_CACHEMAP.h>

//0x260 bytes (sizeof)
struct _SHARED_CACHE_MAP
{
    SHORT NodeTypeCode;                                                     //0x0
    SHORT NodeByteSize;                                                     //0x2
    ULONG OpenCount;                                                        //0x4
    union _LARGE_INTEGER FileSize;                                          //0x8
    struct _LIST_ENTRY BcbList;                                             //0x10
    union _LARGE_INTEGER SectionSize;                                       //0x20
    union _LARGE_INTEGER ValidDataLength;                                   //0x28
    union _LARGE_INTEGER ValidDataGoal;                                     //0x30
    struct _VACB* InitialVacbs[4];                                          //0x38
    struct _VACB** Vacbs;                                                   //0x58
    struct _EX_FAST_REF FileObjectFastRef;                                  //0x60
    struct _EX_PUSH_LOCK VacbLock;                                          //0x68
    ULONG DirtyPages;                                                       //0x70
    struct _LIST_ENTRY LoggedStreamLinks;                                   //0x78
    struct _LIST_ENTRY SharedCacheMapLinks;                                 //0x88
    ULONG Flags;                                                            //0x98
    ULONG Flags2;                                                           //0x9c
    LONG Status;                                                            //0xa0
    struct _MBCB* Mbcb;                                                     //0xa8
    VOID* Section;                                                          //0xb0
    struct _KEVENT* CreateEvent;                                            //0xb8
    struct _KEVENT* WaitOnActiveCount;                                      //0xc0
    ULONG PagesToWrite;                                                     //0xc8
    LONGLONG BeyondLastFlush;                                               //0xd0
    union
    {
        struct _CACHE_MANAGER_CALLBACKS* Callbacks;                         //0xd8
        struct _CACHE_MANAGER_CALLBACKS_EX* CallbacksEx;                    //0xd8
    };
    VOID* LazyWriteContext;                                                 //0xe0
    struct _LIST_ENTRY PrivateList;                                         //0xe8
    union
    {
        struct _LOGGED_STREAM_CALLBACK_V1 V1;                               //0xf8
        struct _LOGGED_STREAM_CALLBACK_V2 V2;                               //0xf8
    };
    union _LARGE_INTEGER LargestLSN;                                        //0x108
    ULONG DirtyPageThreshold;                                               //0x110
    ULONG LazyWritePassCount;                                               //0x114
    struct _CACHE_UNINITIALIZE_EVENT* UninitializeEvent;                    //0x118
    struct _FAST_MUTEX BcbLock;                                             //0x120
    union _LARGE_INTEGER LastUnmapBehindOffset;                             //0x158
    struct _KEVENT Event;                                                   //0x160
    union _LARGE_INTEGER HighWaterMappingOffset;                            //0x178
    struct _PRIVATE_CACHE_MAP PrivateCacheMap;                              //0x180
    VOID* WriteBehindWorkQueueEntry;                                        //0x1f8
    struct _VOLUME_CACHE_MAP* VolumeCacheMap;                               //0x200
    ULONG ProcImagePathHash;                                                //0x208
    ULONG WritesInProgress;                                                 //0x20c
    ULONG AsyncReadRequestCount;                                            //0x210
    struct _CC_PARTITION* Partition;                                        //0x218
    ULONG InternalRefCount;                                                 //0x220
    ULONG NumMappedVacb;                                                    //0x224
    ULONG NumActiveVacb;                                                    //0x228
    ULONG IdealNodeForWriteBehind;                                          //0x22c
    ULONG IdealNodeNumber;                                                  //0x230
    struct _LIST_ENTRY VolSharedCacheMapLinks;                              //0x238
    struct _LIST_ENTRY VolLoggedStreamLinks;                                //0x248
    struct _PRIVATE_VOLUME_CACHEMAP* PrivateVolumeCacheMap;                 //0x258
};
/* Used in */
// _BCB
// _CC_FLUSH_PACKET
// _CC_PARTITION
// _VACB
// _WORK_QUEUE_ENTRY

