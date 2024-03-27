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
#include <_MMSUPPORT_AGGREGATION.h>
#include <_MI_SESSION_DRIVER_UNLOAD.h>
#include <_MMPTE.h>
#include <_EX_PUSH_LOCK.h>
#include <_RTL_BITMAP_EX.h>
#include <_MI_SYSTEM_PTE_TYPE.h>
#include <_IO_SESSION_STATE.h>
#include <_KEVENT.h>
#include <_EJOB.h>

//0x5000 bytes (sizeof)
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
    struct _RTL_AVL_TREE ImageTree;                                         //0x58
    ULONG LocaleId;                                                         //0x60
    ULONG AttachCount;                                                      //0x64
    struct _KGATE AttachGate;                                               //0x68
    struct _LIST_ENTRY WsListEntry;                                         //0x80
    struct _RTL_BALANCED_NODE WsTreeEntry;                                  //0x90
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0xa8
    struct _MMSESSION Session;                                              //0xc0
    ULONGLONG CombineDomain;                                                //0xe0
    struct _MMSUPPORT_FULL Vm;                                              //0x100
    struct _MMWSL_INSTANCE WorkingSetList;                                  //0x240
    struct _MMSUPPORT_AGGREGATION AggregateSessionWs;                       //0x280
    VOID* HeapState;                                                        //0x2a0
    struct _MI_SESSION_DRIVER_UNLOAD DriverUnload;                          //0x2a8
    ULONG TopLevelPteLockBits[32];                                          //0x2b0
    struct _MMPTE PageDirectory;                                            //0x330
    struct _EX_PUSH_LOCK SessionVaLock;                                     //0x338
    struct _RTL_BITMAP_EX DynamicVaBitMap;                                  //0x340
    ULONGLONG DynamicVaHint;                                                //0x350
    struct _EX_PUSH_LOCK SessionPteLock;                                    //0x358
    LONG PoolBigEntriesInUse;                                               //0x360
    volatile LONG PagedPoolPdeCount;                                        //0x364
    ULONG DynamicSessionPdeCount;                                           //0x368
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;                               //0x370
    VOID* PoolTrackTableExpansion;                                          //0x3d0
    ULONGLONG PoolTrackTableExpansionSize;                                  //0x3d8
    VOID* PoolTrackBigPages;                                                //0x3e0
    ULONGLONG PoolTrackBigPagesSize;                                        //0x3e8
    struct _RTL_AVL_TREE PermittedFaultsTree;                               //0x3f0
    enum _IO_SESSION_STATE IoState;                                         //0x3f8
    ULONG IoStateSequence;                                                  //0x3fc
    struct _KEVENT IoNotificationEvent;                                     //0x400
    struct _EJOB* ServerSilo;                                               //0x418
    ULONGLONG CreateTime;                                                   //0x420
    UCHAR PoolTags[16384];                                                  //0x1000
};
/* Used in */
// _EPROCESS

