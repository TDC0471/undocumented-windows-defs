#pragma once
/* ------------------ */

#include <_MM_SESSION_SPACE_FLAGS.h>
#include <_MM_SESSION_SPACE.h>
#include <_LIST_ENTRY.h>
#include <_LARGE_INTEGER.h>
#include <_MMPTE.h>
#include <_FAST_MUTEX.h>
#include <_MM_PAGED_POOL_INFO.h>
#include <_KEVENT.h>
#include <_EPROCESS.h>
#include <_MMSUPPORT.h>
#include <_MMWSLE.h>
#include <_ERESOURCE.h>
#include <_MMSESSION.h>
#include <_DRIVER_OBJECT.h>
#include <_ETHREAD.h>
#include <_POOL_DESCRIPTOR.h>

//0x1278 bytes (sizeof)
struct _MM_SESSION_SPACE
{
    ULONG ReferenceCount;                                                   //0x0
    union
    {
        ULONG LongFlags;                                                    //0x4
        struct _MM_SESSION_SPACE_FLAGS Flags;                               //0x4
    } u;                                                                    //0x4
    ULONG SessionId;                                                        //0x8
    ULONG SessionPageDirectoryIndex;                                        //0xc
    struct _MM_SESSION_SPACE* GlobalVirtualAddress;                         //0x10
    struct _LIST_ENTRY ProcessList;                                         //0x14
    ULONG NonPagedPoolBytes;                                                //0x1c
    ULONG PagedPoolBytes;                                                   //0x20
    ULONG NonPagedPoolAllocations;                                          //0x24
    ULONG PagedPoolAllocations;                                             //0x28
    ULONG NonPagablePages;                                                  //0x2c
    ULONG CommittedPages;                                                   //0x30
    union _LARGE_INTEGER LastProcessSwappedOutTime;                         //0x38
    struct _MMPTE* PageTables;                                              //0x40
    struct _FAST_MUTEX PagedPoolMutex;                                      //0x44
    VOID* PagedPoolStart;                                                   //0x64
    VOID* PagedPoolEnd;                                                     //0x68
    struct _MMPTE* PagedPoolBasePde;                                        //0x6c
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0x70
    ULONG Color;                                                            //0x94
    ULONG ProcessOutSwapCount;                                              //0x98
    struct _LIST_ENTRY ImageList;                                           //0x9c
    struct _MMPTE* GlobalPteEntry;                                          //0xa4
    ULONG CopyOnWriteCount;                                                 //0xa8
    ULONG SessionPoolAllocationFailures[4];                                 //0xac
    ULONG AttachCount;                                                      //0xbc
    struct _KEVENT AttachEvent;                                             //0xc0
    struct _EPROCESS* LastProcess;                                          //0xd0
    struct _MMSUPPORT Vm;                                                   //0xd8
    struct _MMWSLE* Wsle;                                                   //0x118
    struct _ERESOURCE WsLock;                                               //0x11c
    struct _LIST_ENTRY WsListEntry;                                         //0x154
    struct _MMSESSION Session;                                              //0x15c
    struct _DRIVER_OBJECT Win32KDriverObject;                               //0x198
    struct _ETHREAD* WorkingSetLockOwner;                                   //0x240
    struct _POOL_DESCRIPTOR PagedPool;                                      //0x244
    LONG ProcessReferenceToSession;                                         //0x126c
    ULONG LocaleId;                                                         //0x1270
};
/* Used in */
// _MM_SESSION_SPACE

