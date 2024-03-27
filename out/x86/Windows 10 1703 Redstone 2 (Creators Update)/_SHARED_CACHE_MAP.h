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

//0x178 bytes (sizeof)
struct _SHARED_CACHE_MAP
{
    SHORT NodeTypeCode;                                                     //0x0
    SHORT NodeByteSize;                                                     //0x2
    ULONG OpenCount;                                                        //0x4
    union _LARGE_INTEGER FileSize;                                          //0x8
    struct _LIST_ENTRY BcbList;                                             //0x10
    union _LARGE_INTEGER SectionSize;                                       //0x18
    union _LARGE_INTEGER ValidDataLength;                                   //0x20
    union _LARGE_INTEGER ValidDataGoal;                                     //0x28
    struct _VACB* InitialVacbs[4];                                          //0x30
    struct _VACB** Vacbs;                                                   //0x40
    struct _EX_FAST_REF FileObjectFastRef;                                  //0x44
    struct _EX_PUSH_LOCK VacbLock;                                          //0x48
    ULONG DirtyPages;                                                       //0x4c
    struct _LIST_ENTRY LoggedStreamLinks;                                   //0x50
    struct _LIST_ENTRY SharedCacheMapLinks;                                 //0x58
    ULONG Flags;                                                            //0x60
    LONG Status;                                                            //0x64
    struct _MBCB* Mbcb;                                                     //0x68
    VOID* Section;                                                          //0x6c
    struct _KEVENT* CreateEvent;                                            //0x70
    struct _KEVENT* WaitOnActiveCount;                                      //0x74
    ULONG PagesToWrite;                                                     //0x78
    LONGLONG BeyondLastFlush;                                               //0x80
    struct _CACHE_MANAGER_CALLBACKS* Callbacks;                             //0x88
    VOID* LazyWriteContext;                                                 //0x8c
    struct _LIST_ENTRY PrivateList;                                         //0x90
    union
    {
        struct _LOGGED_STREAM_CALLBACK_V1 V1;                               //0x98
        struct _LOGGED_STREAM_CALLBACK_V2 V2;                               //0x98
    };
    union _LARGE_INTEGER LargestLSN;                                        //0xa0
    ULONG DirtyPageThreshold;                                               //0xa8
    ULONG LazyWritePassCount;                                               //0xac
    struct _CACHE_UNINITIALIZE_EVENT* UninitializeEvent;                    //0xb0
    struct _FAST_MUTEX BcbLock;                                             //0xb4
    union _LARGE_INTEGER LastUnmapBehindOffset;                             //0xd8
    struct _KEVENT Event;                                                   //0xe0
    union _LARGE_INTEGER HighWaterMappingOffset;                            //0xf0
    struct _PRIVATE_CACHE_MAP PrivateCacheMap;                              //0xf8
    VOID* WriteBehindWorkQueueEntry;                                        //0x160
    struct _VOLUME_CACHE_MAP* VolumeCacheMap;                               //0x164
    ULONG ProcImagePathHash;                                                //0x168
    ULONG WritesInProgress;                                                 //0x16c
    ULONG AsyncReadRequestCount;                                            //0x170
    struct _CC_PARTITION* Partition;                                        //0x174
};
/* Used in */
// _VACB
// _WORK_QUEUE_ENTRY

