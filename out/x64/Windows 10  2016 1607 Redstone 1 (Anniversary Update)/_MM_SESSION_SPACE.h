#pragma once
/* ------------------ */

#include <_MM_SESSION_SPACE_FLAGS.h>
#include <_LIST_ENTRY.h>
#include <_RTL_AVL_TREE.h>
#include <_KGATE.h>
#include <_GENERAL_LOOKASIDE.h>
#include <_MMSESSION.h>
#include <_MM_PAGED_POOL_INFO.h>
#include <_MMSUPPORT_FULL.h>
#include <_MMSUPPORT_AGGREGATION.h>
#include <_MI_SESSION_DRIVER_UNLOAD.h>
#include <_POOL_DESCRIPTOR.h>
#include <_MMPTE.h>
#include <_EX_PUSH_LOCK.h>
#include <_RTL_BITMAP.h>
#include <_MI_SPECIAL_POOL.h>
#include <_MI_SYSTEM_PTE_TYPE.h>
#include <_IO_SESSION_STATE.h>
#include <_KEVENT.h>
#include <_EJOB.h>

//0x4000 bytes (sizeof)
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
    struct _RTL_AVL_TREE ImageTree;                                         //0x68
    ULONG LocaleId;                                                         //0x70
    ULONG AttachCount;                                                      //0x74
    struct _KGATE AttachGate;                                               //0x78
    struct _LIST_ENTRY WsListEntry;                                         //0x90
    struct _GENERAL_LOOKASIDE Lookaside[21];                                //0xc0
    struct _MMSESSION Session;                                              //0xb40
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0xb60
    struct _MMSUPPORT_FULL Vm;                                              //0xbc0
    struct _MMSUPPORT_AGGREGATION AggregateSessionWs;                       //0xd00
    struct _MI_SESSION_DRIVER_UNLOAD DriverUnload;                          //0xd20
    struct _POOL_DESCRIPTOR PagedPool;                                      //0xd40
    struct _MMPTE PageDirectory;                                            //0x1e80
    struct _EX_PUSH_LOCK SessionVaLock;                                     //0x1e88
    struct _RTL_BITMAP DynamicVaBitMap;                                     //0x1e90
    ULONG DynamicVaHint;                                                    //0x1ea0
    struct _MI_SPECIAL_POOL SpecialPool;                                    //0x1ea8
    struct _EX_PUSH_LOCK SessionPteLock;                                    //0x1ef8
    LONG PoolBigEntriesInUse;                                               //0x1f00
    ULONG PagedPoolPdeCount;                                                //0x1f04
    ULONG SpecialPoolPdeCount;                                              //0x1f08
    ULONG DynamicSessionPdeCount;                                           //0x1f0c
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;                               //0x1f10
    VOID* PoolTrackTableExpansion;                                          //0x1f78
    ULONGLONG PoolTrackTableExpansionSize;                                  //0x1f80
    VOID* PoolTrackBigPages;                                                //0x1f88
    ULONGLONG PoolTrackBigPagesSize;                                        //0x1f90
    enum _IO_SESSION_STATE IoState;                                         //0x1f98
    ULONG IoStateSequence;                                                  //0x1f9c
    struct _KEVENT IoNotificationEvent;                                     //0x1fa0
    struct _EJOB* ServerSilo;                                               //0x1fb8
    ULONGLONG CreateTime;                                                   //0x1fc0
    UCHAR PoolTags[8192];                                                   //0x2000
};
/* Used in */
// _EPROCESS
