#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_LIST_ENTRY.h>
#include <_VACB.h>
#include <_FILE_OBJECT.h>
#include <_MBCB.h>
#include <_KEVENT.h>
#include <_CACHE_MANAGER_CALLBACKS.h>
#include <_CACHE_UNINITIALIZE_EVENT.h>
#include <_EX_PUSH_LOCK.h>
#include <_PRIVATE_CACHE_MAP.h>

//0x138 bytes (sizeof)
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
    struct _FILE_OBJECT* FileObject;                                        //0x44
    struct _VACB* volatile ActiveVacb;                                      //0x48
    VOID* volatile NeedToZero;                                              //0x4c
    ULONG ActivePage;                                                       //0x50
    ULONG NeedToZeroPage;                                                   //0x54
    ULONG ActiveVacbSpinLock;                                               //0x58
    ULONG VacbActiveCount;                                                  //0x5c
    ULONG DirtyPages;                                                       //0x60
    struct _LIST_ENTRY SharedCacheMapLinks;                                 //0x64
    ULONG Flags;                                                            //0x6c
    LONG Status;                                                            //0x70
    struct _MBCB* Mbcb;                                                     //0x74
    VOID* Section;                                                          //0x78
    struct _KEVENT* CreateEvent;                                            //0x7c
    struct _KEVENT* WaitOnActiveCount;                                      //0x80
    ULONG PagesToWrite;                                                     //0x84
    LONGLONG BeyondLastFlush;                                               //0x88
    struct _CACHE_MANAGER_CALLBACKS* Callbacks;                             //0x90
    VOID* LazyWriteContext;                                                 //0x94
    struct _LIST_ENTRY PrivateList;                                         //0x98
    VOID* LogHandle;                                                        //0xa0
    VOID (*FlushToLsnRoutine)(VOID* arg1, union _LARGE_INTEGER arg2);       //0xa4
    ULONG DirtyPageThreshold;                                               //0xa8
    ULONG LazyWritePassCount;                                               //0xac
    struct _CACHE_UNINITIALIZE_EVENT* UninitializeEvent;                    //0xb0
    struct _VACB* NeedToZeroVacb;                                           //0xb4
    ULONG BcbSpinLock;                                                      //0xb8
    VOID* Reserved;                                                         //0xbc
    struct _KEVENT Event;                                                   //0xc0
    struct _EX_PUSH_LOCK VacbPushLock;                                      //0xd0
    struct _PRIVATE_CACHE_MAP PrivateCacheMap;                              //0xd8
    VOID* WriteBehindWorkQueueEntry;                                        //0x130
};
/* Used in */
// _VACB

