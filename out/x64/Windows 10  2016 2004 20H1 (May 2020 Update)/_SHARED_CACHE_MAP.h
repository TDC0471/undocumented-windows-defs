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
#include <_LOGGED_STREAM_CALLBACK_V1.h>
#include <_LOGGED_STREAM_CALLBACK_V2.h>
#include <_CACHE_UNINITIALIZE_EVENT.h>
#include <_FAST_MUTEX.h>
#include <_PRIVATE_CACHE_MAP.h>
#include <_VOLUME_CACHE_MAP.h>
#include <_CC_PARTITION.h>

//0x228 bytes (sizeof)
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
    LONG Status;                                                            //0x9c
    struct _MBCB* Mbcb;                                                     //0xa0
    VOID* Section;                                                          //0xa8
    struct _KEVENT* CreateEvent;                                            //0xb0
    struct _KEVENT* WaitOnActiveCount;                                      //0xb8
    ULONG PagesToWrite;                                                     //0xc0
    LONGLONG BeyondLastFlush;                                               //0xc8
    struct _CACHE_MANAGER_CALLBACKS* Callbacks;                             //0xd0
    VOID* LazyWriteContext;                                                 //0xd8
    struct _LIST_ENTRY PrivateList;                                         //0xe0
    union
    {
        struct _LOGGED_STREAM_CALLBACK_V1 V1;                               //0xf0
        struct _LOGGED_STREAM_CALLBACK_V2 V2;                               //0xf0
    };
    union _LARGE_INTEGER LargestLSN;                                        //0x100
    ULONG DirtyPageThreshold;                                               //0x108
    ULONG LazyWritePassCount;                                               //0x10c
    struct _CACHE_UNINITIALIZE_EVENT* UninitializeEvent;                    //0x110
    struct _FAST_MUTEX BcbLock;                                             //0x118
    union _LARGE_INTEGER LastUnmapBehindOffset;                             //0x150
    struct _KEVENT Event;                                                   //0x158
    union _LARGE_INTEGER HighWaterMappingOffset;                            //0x170
    struct _PRIVATE_CACHE_MAP PrivateCacheMap;                              //0x178
    VOID* WriteBehindWorkQueueEntry;                                        //0x1f0
    struct _VOLUME_CACHE_MAP* VolumeCacheMap;                               //0x1f8
    ULONG ProcImagePathHash;                                                //0x200
    ULONG WritesInProgress;                                                 //0x204
    ULONG AsyncReadRequestCount;                                            //0x208
    struct _CC_PARTITION* Partition;                                        //0x210
    ULONG InternalRefCount;                                                 //0x218
    ULONG NumMappedVacb;                                                    //0x21c
    ULONG NumActiveVacb;                                                    //0x220
};
/* Used in */
// _CC_PARTITION
// _VACB
// _WORK_QUEUE_ENTRY

