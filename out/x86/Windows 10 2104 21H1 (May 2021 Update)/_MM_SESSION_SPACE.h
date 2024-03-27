#pragma once
/* ------------------ */

#include <_MM_SESSION_SPACE_FLAGS.h>
#include <_LIST_ENTRY.h>
#include <_RTL_AVL_TREE.h>
#include <_KGATE.h>
#include <_RTL_BALANCED_NODE.h>
#include <_MM_PAGED_POOL_INFO.h>
#include <_MMSESSION.h>
#include <_MMSUPPORT_FULL.h>
#include <_MMWSL_INSTANCE.h>
#include <_MI_SESSION_DRIVER_UNLOAD.h>
#include <_MMPTE.h>
#include <_EX_PUSH_LOCK.h>
#include <_MI_SYSTEM_PTE_TYPE.h>
#include <_IO_SESSION_STATE.h>
#include <_KEVENT.h>
#include <_EJOB.h>

//0x7000 bytes (sizeof)
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
    ULONG SessionPageDirectoryIndex;                                        //0x18
    volatile ULONG NonPagablePages;                                         //0x1c
    volatile ULONG CommittedPages;                                          //0x20
    VOID* PagedPoolStart;                                                   //0x24
    VOID* PagedPoolEnd;                                                     //0x28
    VOID* SessionObject;                                                    //0x2c
    VOID* SessionObjectHandle;                                              //0x30
    struct _RTL_AVL_TREE ImageTree;                                         //0x34
    ULONG LocaleId;                                                         //0x38
    ULONG AttachCount;                                                      //0x3c
    struct _KGATE AttachGate;                                               //0x40
    struct _LIST_ENTRY WsListEntry;                                         //0x50
    struct _RTL_BALANCED_NODE WsTreeEntry;                                  //0x58
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0x64
    struct _MMSESSION Session;                                              //0x70
    ULONGLONG CombineDomain;                                                //0x88
    struct _MMSUPPORT_FULL Vm;                                              //0xc0
    struct _MMWSL_INSTANCE WorkingSetList;                                  //0x1c0
    VOID* HeapState;                                                        //0x1d8
    struct _MI_SESSION_DRIVER_UNLOAD DriverUnload;                          //0x1dc
    ULONG TopLevelPteLockBits[128];                                         //0x1e0
    struct _MMPTE PageTables[1024];                                         //0x3e0
    struct _EX_PUSH_LOCK SessionPteLock;                                    //0x23e0
    LONG PoolBigEntriesInUse;                                               //0x23e4
    volatile LONG PagedPoolPdeCount;                                        //0x23e8
    ULONG DynamicSessionPdeCount;                                           //0x23ec
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;                               //0x23f0
    VOID* PoolTrackTableExpansion;                                          //0x2424
    ULONG PoolTrackTableExpansionSize;                                      //0x2428
    VOID* PoolTrackBigPages;                                                //0x242c
    ULONG PoolTrackBigPagesSize;                                            //0x2430
    struct _RTL_AVL_TREE PermittedFaultsTree;                               //0x2434
    enum _IO_SESSION_STATE IoState;                                         //0x2438
    ULONG IoStateSequence;                                                  //0x243c
    struct _KEVENT IoNotificationEvent;                                     //0x2440
    struct _EJOB* ServerSilo;                                               //0x2450
    ULONGLONG CreateTime;                                                   //0x2458
    UCHAR PoolTags[16384];                                                  //0x3000
};
/* Used in */
// _EPROCESS

