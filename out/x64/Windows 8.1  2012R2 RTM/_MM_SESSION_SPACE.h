#pragma once
/* ------------------ */

#include <_MM_SESSION_SPACE_FLAGS.h>
#include <_LIST_ENTRY.h>
#include <_KGATE.h>
#include <_GENERAL_LOOKASIDE.h>
#include <_MMSESSION.h>
#include <_MM_PAGED_POOL_INFO.h>
#include <_MMSUPPORT.h>
#include <_MMWSLE.h>
#include <_MI_SESSION_DRIVER_UNLOAD.h>
#include <_POOL_DESCRIPTOR.h>
#include <_MMPTE.h>
#include <_FAST_MUTEX.h>
#include <_RTL_BITMAP.h>
#include <_MI_SPECIAL_POOL.h>
#include <_MI_SYSTEM_PTE_TYPE.h>
#include <_IO_SESSION_STATE.h>
#include <_KEVENT.h>

//0x2000 bytes (sizeof)
struct _MM_SESSION_SPACE
{
    volatile LONG ReferenceCount;                                           //0x0
    union
    {
        ULONG LongFlags;                                                    //0x4
        struct _MM_SESSION_SPACE_FLAGS Flags;                               //0x4
    } u;                                                                    //0x4
    ULONG SessionId;                                                        //0x8
    volatile LONG ProcessReferenceToSession;                                //0xc
    struct _LIST_ENTRY ProcessList;                                         //0x10
    ULONGLONG SessionPageDirectoryIndex;                                    //0x20
    volatile ULONGLONG NonPagablePages;                                     //0x28
    volatile ULONGLONG CommittedPages;                                      //0x30
    VOID* PagedPoolStart;                                                   //0x38
    VOID* PagedPoolEnd;                                                     //0x40
    VOID* SessionObject;                                                    //0x48
    VOID* SessionObjectHandle;                                              //0x50
    ULONG SessionPoolAllocationFailures[4];                                 //0x58
    struct _LIST_ENTRY ImageList;                                           //0x68
    ULONG LocaleId;                                                         //0x78
    ULONG AttachCount;                                                      //0x7c
    struct _KGATE AttachGate;                                               //0x80
    struct _LIST_ENTRY WsListEntry;                                         //0x98
    struct _GENERAL_LOOKASIDE Lookaside[21];                                //0xc0
    struct _MMSESSION Session;                                              //0xb40
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0xb98
    struct _MMSUPPORT Vm;                                                   //0xc00
    struct _MMWSLE* Wsle;                                                   //0xcd8
    struct _MI_SESSION_DRIVER_UNLOAD DriverUnload;                          //0xce0
    struct _POOL_DESCRIPTOR PagedPool;                                      //0xd00
    struct _MMPTE PageDirectory;                                            //0x1e40
    struct _FAST_MUTEX SessionVaLock;                                       //0x1e48
    struct _RTL_BITMAP DynamicVaBitMap;                                     //0x1e80
    ULONG DynamicVaHint;                                                    //0x1e90
    struct _MI_SPECIAL_POOL SpecialPool;                                    //0x1e98
    struct _FAST_MUTEX SessionPteLock;                                      //0x1ee8
    LONG PoolBigEntriesInUse;                                               //0x1f20
    ULONG PagedPoolPdeCount;                                                //0x1f24
    ULONG SpecialPoolPdeCount;                                              //0x1f28
    ULONG DynamicSessionPdeCount;                                           //0x1f2c
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;                               //0x1f30
    VOID* PoolTrackTableExpansion;                                          //0x1f98
    ULONGLONG PoolTrackTableExpansionSize;                                  //0x1fa0
    VOID* PoolTrackBigPages;                                                //0x1fa8
    ULONGLONG PoolTrackBigPagesSize;                                        //0x1fb0
    enum _IO_SESSION_STATE IoState;                                         //0x1fb8
    ULONG IoStateSequence;                                                  //0x1fbc
    struct _KEVENT IoNotificationEvent;                                     //0x1fc0
};
