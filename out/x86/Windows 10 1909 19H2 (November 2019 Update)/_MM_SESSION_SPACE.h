#pragma once
/* ------------------ */

#include <_MM_SESSION_SPACE_FLAGS.h>
#include <_LIST_ENTRY.h>
#include <_RTL_AVL_TREE.h>
#include <_KGATE.h>
#include <_MM_PAGED_POOL_INFO.h>
#include <_MMSESSION.h>
#include <_MMSUPPORT_FULL.h>
#include <_MMWSL_INSTANCE.h>
#include <_POOL_DESCRIPTOR.h>
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
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0x58
    struct _MMSESSION Session;                                              //0x64
    ULONGLONG CombineDomain;                                                //0x78
    struct _MMSUPPORT_FULL Vm;                                              //0x80
    struct _MMWSL_INSTANCE WorkingSetList;                                  //0x180
    VOID* HeapState;                                                        //0x198
    struct _POOL_DESCRIPTOR PagedPool;                                      //0x1c0
    struct _MI_SESSION_DRIVER_UNLOAD DriverUnload;                          //0x2c0
    ULONG TopLevelPteLockBits[128];                                         //0x2c4
    struct _MMPTE PageTables[1024];                                         //0x4c8
    struct _EX_PUSH_LOCK SessionPteLock;                                    //0x24c8
    LONG PoolBigEntriesInUse;                                               //0x24cc
    volatile LONG PagedPoolPdeCount;                                        //0x24d0
    ULONG DynamicSessionPdeCount;                                           //0x24d4
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;                               //0x24d8
    VOID* PoolTrackTableExpansion;                                          //0x250c
    ULONG PoolTrackTableExpansionSize;                                      //0x2510
    VOID* PoolTrackBigPages;                                                //0x2514
    ULONG PoolTrackBigPagesSize;                                            //0x2518
    struct _RTL_AVL_TREE PermittedFaultsTree;                               //0x251c
    enum _IO_SESSION_STATE IoState;                                         //0x2520
    ULONG IoStateSequence;                                                  //0x2524
    struct _KEVENT IoNotificationEvent;                                     //0x2528
    struct _EJOB* ServerSilo;                                               //0x2538
    ULONGLONG CreateTime;                                                   //0x2540
    UCHAR PoolTags[16384];                                                  //0x3000
};
/* Used in */
// _EPROCESS

