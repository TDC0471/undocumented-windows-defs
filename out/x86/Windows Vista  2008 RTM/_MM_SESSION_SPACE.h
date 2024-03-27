#pragma once
/* ------------------ */

#include <_MM_SESSION_SPACE_FLAGS.h>
#include <_LIST_ENTRY.h>
#include <_LARGE_INTEGER.h>
#include <_KEVENT.h>
#include <_GENERAL_LOOKASIDE.h>
#include <_MMSESSION.h>
#include <_MM_PAGED_POOL_INFO.h>
#include <_MMSUPPORT.h>
#include <_MMWSLE.h>
#include <_DRIVER_OBJECT.h>
#include <_POOL_DESCRIPTOR.h>
#include <_MMPTE.h>
#include <_MI_SPECIAL_POOL.h>
#include <_KGUARDED_MUTEX.h>
#include <_MI_SYSTEM_PTE_TYPE.h>
#include <_RTL_BITMAP.h>

//0x1e80 bytes (sizeof)
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
    union _LARGE_INTEGER LastProcessSwappedOutTime;                         //0x18
    ULONG SessionPageDirectoryIndex;                                        //0x20
    volatile ULONG NonPagablePages;                                         //0x24
    volatile ULONG CommittedPages;                                          //0x28
    VOID* PagedPoolStart;                                                   //0x2c
    VOID* PagedPoolEnd;                                                     //0x30
    VOID* SessionObject;                                                    //0x34
    VOID* SessionObjectHandle;                                              //0x38
    volatile LONG ResidentProcessCount;                                     //0x3c
    volatile LONG ImageLoadingCount;                                        //0x40
    ULONG SessionPoolAllocationFailures[4];                                 //0x44
    struct _LIST_ENTRY ImageList;                                           //0x54
    ULONG LocaleId;                                                         //0x5c
    ULONG AttachCount;                                                      //0x60
    struct _KEVENT AttachEvent;                                             //0x64
    struct _LIST_ENTRY WsListEntry;                                         //0x74
    struct _GENERAL_LOOKASIDE Lookaside[25];                                //0x80
    struct _MMSESSION Session;                                              //0xd00
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0xd38
    struct _MMSUPPORT Vm;                                                   //0xd70
    struct _MMWSLE* Wsle;                                                   //0xdb8
    VOID (* volatileDriverUnload)(struct _DRIVER_OBJECT* arg1);             //0xdbc
    struct _POOL_DESCRIPTOR PagedPool;                                      //0xdc0
    struct _MMPTE* PageTables;                                              //0x1df4
    struct _MI_SPECIAL_POOL SpecialPool;                                    //0x1df8
    struct _KGUARDED_MUTEX SessionPteLock;                                  //0x1e10
    LONG PoolBigEntriesInUse;                                               //0x1e30
    ULONG PagedPoolPdeCount;                                                //0x1e34
    ULONG SpecialPoolPdeCount;                                              //0x1e38
    ULONG DynamicSessionPdeCount;                                           //0x1e3c
    struct _MMPTE SessionPteFreeHead;                                       //0x1e40
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;                               //0x1e44
    VOID* PoolTrackTableExpansion;                                          //0x1e54
    ULONG PoolTrackTableExpansionSize;                                      //0x1e58
    VOID* PoolTrackBigPages;                                                //0x1e5c
    ULONG PoolTrackBigPagesSize;                                            //0x1e60
    struct _RTL_BITMAP SessionPoolPdes;                                     //0x1e64
};
