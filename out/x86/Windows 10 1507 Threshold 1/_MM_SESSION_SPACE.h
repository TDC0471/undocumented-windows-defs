#pragma once
/* ------------------ */

#include <_MM_SESSION_SPACE_FLAGS.h>
#include <_LIST_ENTRY.h>
#include <_RTL_AVL_TREE.h>
#include <_KGATE.h>
#include <_GENERAL_LOOKASIDE.h>
#include <_MMSESSION.h>
#include <_MM_PAGED_POOL_INFO.h>
#include <_MMSUPPORT.h>
#include <_MMWSLE.h>
#include <_MI_SESSION_DRIVER_UNLOAD.h>
#include <_POOL_DESCRIPTOR.h>
#include <_MMPTE.h>
#include <_MI_SPECIAL_POOL.h>
#include <_EX_PUSH_LOCK.h>
#include <_MI_SYSTEM_PTE_TYPE.h>
#include <_IO_SESSION_STATE.h>
#include <_KEVENT.h>
#include <_ESILO.h>

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
    ULONG SessionPageDirectoryIndex;                                        //0x18
    volatile ULONG NonPagablePages;                                         //0x1c
    volatile ULONG CommittedPages;                                          //0x20
    VOID* PagedPoolStart;                                                   //0x24
    VOID* PagedPoolEnd;                                                     //0x28
    VOID* SessionObject;                                                    //0x2c
    VOID* SessionObjectHandle;                                              //0x30
    ULONG SessionPoolAllocationFailures[4];                                 //0x34
    struct _RTL_AVL_TREE ImageTree;                                         //0x44
    ULONG LocaleId;                                                         //0x48
    ULONG AttachCount;                                                      //0x4c
    struct _KGATE AttachGate;                                               //0x50
    struct _LIST_ENTRY WsListEntry;                                         //0x60
    struct _GENERAL_LOOKASIDE Lookaside[24];                                //0x80
    struct _MMSESSION Session;                                              //0xc80
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0xc94
    struct _MMSUPPORT Vm;                                                   //0xcb0
    struct _MMWSLE* Wsle;                                                   //0xd30
    struct _MI_SESSION_DRIVER_UNLOAD DriverUnload;                          //0xd34
    struct _POOL_DESCRIPTOR PagedPool;                                      //0xd40
    struct _MMPTE* PageTables;                                              //0x1e80
    ULONG PagedPoolBitBuffer[32];                                           //0x1e84
    struct _MI_SPECIAL_POOL SpecialPool;                                    //0x1f08
    struct _EX_PUSH_LOCK SessionPteLock;                                    //0x1f50
    LONG PoolBigEntriesInUse;                                               //0x1f54
    ULONG PagedPoolPdeCount;                                                //0x1f58
    ULONG SpecialPoolPdeCount;                                              //0x1f5c
    ULONG DynamicSessionPdeCount;                                           //0x1f60
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;                               //0x1f64
    VOID* PoolTrackTableExpansion;                                          //0x1f98
    ULONG PoolTrackTableExpansionSize;                                      //0x1f9c
    VOID* PoolTrackBigPages;                                                //0x1fa0
    ULONG PoolTrackBigPagesSize;                                            //0x1fa4
    enum _IO_SESSION_STATE IoState;                                         //0x1fa8
    ULONG IoStateSequence;                                                  //0x1fac
    struct _KEVENT IoNotificationEvent;                                     //0x1fb0
    struct _ESILO* ServerSilo;                                              //0x1fc0
    ULONGLONG CreateTime;                                                   //0x1fc8
};
