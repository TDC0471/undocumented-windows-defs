#pragma once
/* ------------------ */

#include <_MM_SESSION_SPACE_FLAGS.h>
#include <_LIST_ENTRY.h>
#include <_RTL_AVL_TREE.h>
#include <_KGATE.h>
#include <_MM_PAGED_POOL_INFO.h>
#include <_GENERAL_LOOKASIDE.h>
#include <_MMSESSION.h>
#include <_MMSUPPORT_FULL.h>
#include <_MMWSL_INSTANCE.h>
#include <_MMSUPPORT_AGGREGATION.h>
#include <_POOL_DESCRIPTOR.h>
#include <_MI_SESSION_DRIVER_UNLOAD.h>
#include <_MMPTE.h>
#include <_EX_PUSH_LOCK.h>
#include <_RTL_BITMAP_EX.h>
#include <_MI_SPECIAL_POOL.h>
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
    ULONG SessionPoolAllocationFailures[4];                                 //0x58
    struct _RTL_AVL_TREE ImageTree;                                         //0x68
    ULONG LocaleId;                                                         //0x70
    ULONG AttachCount;                                                      //0x74
    struct _KGATE AttachGate;                                               //0x78
    struct _LIST_ENTRY WsListEntry;                                         //0x90
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0xa0
    struct _GENERAL_LOOKASIDE Lookaside[21];                                //0x100
    struct _MMSESSION Session;                                              //0xb80
    struct _MMSUPPORT_FULL Vm;                                              //0xbc0
    struct _MMWSL_INSTANCE WorkingSetList;                                  //0xd00
    struct _MMSUPPORT_AGGREGATION AggregateSessionWs;                       //0xd40
    VOID* HeapState;                                                        //0xd60
    struct _POOL_DESCRIPTOR PagedPool;                                      //0xd80
    struct _MI_SESSION_DRIVER_UNLOAD DriverUnload;                          //0x1ec0
    ULONG TopLevelPteLockBits[32];                                          //0x1ec8
    struct _MMPTE PageDirectory;                                            //0x1f48
    struct _EX_PUSH_LOCK SessionVaLock;                                     //0x1f50
    struct _RTL_BITMAP_EX DynamicVaBitMap;                                  //0x1f58
    ULONGLONG DynamicVaHint;                                                //0x1f68
    struct _MI_SPECIAL_POOL SpecialPool;                                    //0x1f70
    struct _EX_PUSH_LOCK SessionPteLock;                                    //0x1fb0
    LONG PoolBigEntriesInUse;                                               //0x1fb8
    ULONG PagedPoolPdeCount;                                                //0x1fbc
    ULONG SpecialPoolPdeCount;                                              //0x1fc0
    ULONG DynamicSessionPdeCount;                                           //0x1fc4
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;                               //0x1fc8
    VOID* PoolTrackTableExpansion;                                          //0x2028
    ULONGLONG PoolTrackTableExpansionSize;                                  //0x2030
    VOID* PoolTrackBigPages;                                                //0x2038
    ULONGLONG PoolTrackBigPagesSize;                                        //0x2040
    struct _RTL_AVL_TREE PermittedFaultsTree;                               //0x2048
    enum _IO_SESSION_STATE IoState;                                         //0x2050
    ULONG IoStateSequence;                                                  //0x2054
    struct _KEVENT IoNotificationEvent;                                     //0x2058
    struct _EJOB* ServerSilo;                                               //0x2070
    ULONGLONG CreateTime;                                                   //0x2078
    UCHAR PoolTags[8192];                                                   //0x3000
};
/* Used in */
// _EPROCESS

