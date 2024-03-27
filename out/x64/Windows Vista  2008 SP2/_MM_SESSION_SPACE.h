#pragma once
/* ------------------ */

#include <_MM_SESSION_SPACE_FLAGS.h>
#include <_LIST_ENTRY.h>
#include <_LARGE_INTEGER.h>
#include <_KGATE.h>
#include <_GENERAL_LOOKASIDE.h>
#include <_MMSESSION.h>
#include <_MM_PAGED_POOL_INFO.h>
#include <_MMSUPPORT.h>
#include <_MMWSLE.h>
#include <_DRIVER_OBJECT.h>
#include <_POOL_DESCRIPTOR.h>
#include <_MMPTE.h>
#include <_KGUARDED_MUTEX.h>
#include <_RTL_BITMAP.h>
#include <_MI_SPECIAL_POOL.h>
#include <_MI_SYSTEM_PTE_TYPE.h>

//0x1e00 bytes (sizeof)
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
    union _LARGE_INTEGER LastProcessSwappedOutTime;                         //0x20
    ULONGLONG SessionPageDirectoryIndex;                                    //0x28
    volatile ULONGLONG NonPagablePages;                                     //0x30
    volatile ULONGLONG CommittedPages;                                      //0x38
    VOID* PagedPoolStart;                                                   //0x40
    VOID* PagedPoolEnd;                                                     //0x48
    VOID* SessionObject;                                                    //0x50
    VOID* SessionObjectHandle;                                              //0x58
    volatile LONG ResidentProcessCount;                                     //0x60
    volatile LONG ImageLoadingCount;                                        //0x64
    ULONG SessionPoolAllocationFailures[4];                                 //0x68
    struct _LIST_ENTRY ImageList;                                           //0x78
    ULONG LocaleId;                                                         //0x88
    ULONG AttachCount;                                                      //0x8c
    struct _KGATE AttachGate;                                               //0x90
    struct _LIST_ENTRY WsListEntry;                                         //0xa8
    struct _GENERAL_LOOKASIDE Lookaside[21];                                //0xc0
    struct _MMSESSION Session;                                              //0xb40
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0xb98
    struct _MMSUPPORT Vm;                                                   //0xc00
    struct _MMWSLE* Wsle;                                                   //0xc68
    VOID (* volatileDriverUnload)(struct _DRIVER_OBJECT* arg1);             //0xc70
    struct _POOL_DESCRIPTOR PagedPool;                                      //0xc78
    struct _MMPTE PageDirectory;                                            //0x1cc0
    struct _KGUARDED_MUTEX SessionVaLock;                                   //0x1cc8
    struct _RTL_BITMAP DynamicVaBitMap;                                     //0x1d00
    ULONG DynamicVaHint;                                                    //0x1d10
    struct _MI_SPECIAL_POOL SpecialPool;                                    //0x1d18
    struct _KGUARDED_MUTEX SessionPteLock;                                  //0x1d48
    LONG PoolBigEntriesInUse;                                               //0x1d80
    ULONG PagedPoolPdeCount;                                                //0x1d84
    ULONG SpecialPoolPdeCount;                                              //0x1d88
    ULONG DynamicSessionPdeCount;                                           //0x1d8c
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;                               //0x1d90
    VOID* PoolTrackTableExpansion;                                          //0x1dd8
    ULONGLONG PoolTrackTableExpansionSize;                                  //0x1de0
    VOID* PoolTrackBigPages;                                                //0x1de8
    ULONGLONG PoolTrackBigPagesSize;                                        //0x1df0
};
