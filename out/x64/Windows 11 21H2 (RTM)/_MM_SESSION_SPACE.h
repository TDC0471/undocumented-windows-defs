#pragma once
/* ------------------ */

#include <_MM_SESSION_SPACE_FLAGS.h>
#include <_LIST_ENTRY.h>
#include <_RTL_AVL_TREE.h>
#include <_KGATE.h>
#include <_RTL_BALANCED_NODE.h>
#include <_MM_PAGED_POOL_INFO.h>
#include <_MMSUPPORT_FULL.h>
#include <_MMWSL_INSTANCE.h>
#include <_MMSUPPORT_AGGREGATION.h>
#include <_MI_SESSION_DRIVER_UNLOAD.h>
#include <_EX_PUSH_LOCK.h>
#include <_RTL_BITMAP_EX.h>
#include <_MMPTE.h>
#include <_IO_SESSION_STATE.h>
#include <_KEVENT.h>
#include <_EJOB.h>

//0x3c0 bytes (sizeof)
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
    volatile ULONGLONG NonPagablePages;                                     //0x20
    volatile ULONGLONG CommittedPages;                                      //0x28
    VOID* PagedPoolStart;                                                   //0x30
    VOID* PagedPoolEnd;                                                     //0x38
    VOID* SessionObject;                                                    //0x40
    VOID* SessionObjectHandle;                                              //0x48
    struct _RTL_AVL_TREE ImageTree;                                         //0x50
    ULONG LocaleId;                                                         //0x58
    ULONG AttachCount;                                                      //0x5c
    struct _KGATE AttachGate;                                               //0x60
    struct _LIST_ENTRY WsListEntry;                                         //0x78
    struct _RTL_BALANCED_NODE WsTreeEntry;                                  //0x88
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0xa0
    ULONGLONG CombineDomain;                                                //0xb8
    struct _MMSUPPORT_FULL Vm;                                              //0xc0
    struct _MMWSL_INSTANCE WorkingSetList;                                  //0x200
    struct _MMSUPPORT_AGGREGATION AggregateSessionWs;                       //0x240
    VOID* HeapState;                                                        //0x260
    struct _MI_SESSION_DRIVER_UNLOAD DriverUnload;                          //0x268
    ULONG TopLevelPteLockBits[32];                                          //0x270
    struct _EX_PUSH_LOCK SessionVaLock;                                     //0x2f0
    struct _RTL_BITMAP_EX DynamicVaBitMap;                                  //0x2f8
    ULONGLONG DynamicVaHint;                                                //0x308
    struct _MMPTE PageTables[1];                                            //0x310
    LONG PoolBigEntriesInUse;                                               //0x318
    volatile LONG PagedPoolPdeCount;                                        //0x31c
    ULONG DynamicSessionPdeCount;                                           //0x320
    VOID* PoolTrackTableExpansion;                                          //0x328
    ULONGLONG PoolTrackTableExpansionSize;                                  //0x330
    VOID* PoolTrackBigPages;                                                //0x338
    ULONGLONG PoolTrackBigPagesSize;                                        //0x340
    struct _RTL_AVL_TREE PermittedFaultsTree;                               //0x348
    enum _IO_SESSION_STATE IoState;                                         //0x350
    ULONG IoStateSequence;                                                  //0x354
    struct _KEVENT IoNotificationEvent;                                     //0x358
    struct _EJOB* ServerSilo;                                               //0x370
    ULONGLONG CreateTime;                                                   //0x378
    VOID* PoolTags;                                                         //0x380
};
/* Used in */
// _EPROCESS

