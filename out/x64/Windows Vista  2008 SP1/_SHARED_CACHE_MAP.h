#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_LIST_ENTRY.h>
#include <_VACB.h>
#include <_EX_FAST_REF.h>
#include <_MBCB.h>
#include <_KEVENT.h>
#include <_CACHE_MANAGER_CALLBACKS.h>
#include <_CACHE_UNINITIALIZE_EVENT.h>
#include <_PRIVATE_CACHE_MAP.h>
#include <_VOLUME_CACHE_MAP.h>

//0x1d0 bytes (sizeof)
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
    struct _VACB* volatile ActiveVacb;                                      //0x68
    VOID* volatile NeedToZero;                                              //0x70
    ULONG ActivePage;                                                       //0x78
    ULONG NeedToZeroPage;                                                   //0x7c
    ULONGLONG ActiveVacbSpinLock;                                           //0x80
    ULONG VacbActiveCount;                                                  //0x88
    ULONG DirtyPages;                                                       //0x8c
    struct _LIST_ENTRY SharedCacheMapLinks;                                 //0x90
    ULONG Flags;                                                            //0xa0
    LONG Status;                                                            //0xa4
    struct _MBCB* Mbcb;                                                     //0xa8
    VOID* Section;                                                          //0xb0
    struct _KEVENT* CreateEvent;                                            //0xb8
    struct _KEVENT* WaitOnActiveCount;                                      //0xc0
    ULONG PagesToWrite;                                                     //0xc8
    LONGLONG BeyondLastFlush;                                               //0xd0
    struct _CACHE_MANAGER_CALLBACKS* Callbacks;                             //0xd8
    VOID* LazyWriteContext;                                                 //0xe0
    struct _LIST_ENTRY PrivateList;                                         //0xe8
    VOID* LogHandle;                                                        //0xf8
    VOID (*FlushToLsnRoutine)(VOID* arg1, union _LARGE_INTEGER arg2);       //0x100
    ULONG DirtyPageThreshold;                                               //0x108
    ULONG LazyWritePassCount;                                               //0x10c
    struct _CACHE_UNINITIALIZE_EVENT* UninitializeEvent;                    //0x110
    struct _VACB* NeedToZeroVacb;                                           //0x118
    ULONGLONG BcbSpinLock;                                                  //0x120
    VOID* Reserved;                                                         //0x128
    struct _KEVENT Event;                                                   //0x130
    union _LARGE_INTEGER HighWaterMappingOffset;                            //0x148
    struct _PRIVATE_CACHE_MAP PrivateCacheMap;                              //0x150
    VOID* WriteBehindWorkQueueEntry;                                        //0x1b8
    struct _VOLUME_CACHE_MAP* VolumeCacheMap;                               //0x1c0
    ULONG ProcImagePathHash;                                                //0x1c8
    ULONG MappedWritesInProgress;                                           //0x1cc
};
/* Used in */
// _VACB
// _WORK_QUEUE_ENTRY

