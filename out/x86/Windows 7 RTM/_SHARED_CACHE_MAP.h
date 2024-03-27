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
#include <_CACHE_UNINITIALIZE_EVENT.h>
#include <_KGUARDED_MUTEX.h>
#include <_PRIVATE_CACHE_MAP.h>
#include <_VOLUME_CACHE_MAP.h>

//0x158 bytes (sizeof)
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
    VOID* LogHandle;                                                        //0x98
    VOID (*FlushToLsnRoutine)(VOID* arg1, union _LARGE_INTEGER arg2);       //0x9c
    ULONG DirtyPageThreshold;                                               //0xa0
    ULONG LazyWritePassCount;                                               //0xa4
    struct _CACHE_UNINITIALIZE_EVENT* UninitializeEvent;                    //0xa8
    struct _KGUARDED_MUTEX BcbLock;                                         //0xac
    union _LARGE_INTEGER LastUnmapBehindOffset;                             //0xd0
    struct _KEVENT Event;                                                   //0xd8
    union _LARGE_INTEGER HighWaterMappingOffset;                            //0xe8
    struct _PRIVATE_CACHE_MAP PrivateCacheMap;                              //0xf0
    VOID* WriteBehindWorkQueueEntry;                                        //0x148
    struct _VOLUME_CACHE_MAP* VolumeCacheMap;                               //0x14c
    ULONG ProcImagePathHash;                                                //0x150
    ULONG WritesInProgress;                                                 //0x154
};
/* Used in */
// _VACB
// _WORK_QUEUE_ENTRY

