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
#include <_MI_SESSION_DRIVER_UNLOAD.h>
#include <_POOL_DESCRIPTOR.h>
#include <_MMPTE.h>
#include <_MI_SPECIAL_POOL.h>
#include <_EX_PUSH_LOCK.h>
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
    struct _MMSUPPORT_FULL Vm;                                              //0xcc0
    struct _MI_SESSION_DRIVER_UNLOAD DriverUnload;                          //0xd48
    struct _POOL_DESCRIPTOR PagedPool;                                      //0xd80
    struct _MMPTE* PageTables;                                              //0x1ec0
    ULONG PagedPoolBitBuffer[32];                                           //0x1ec4
    struct _MI_SPECIAL_POOL SpecialPool;                                    //0x1f48
    struct _EX_PUSH_LOCK SessionPteLock;                                    //0x1f90
    LONG PoolBigEntriesInUse;                                               //0x1f94
    ULONG PagedPoolPdeCount;                                                //0x1f98
    ULONG SpecialPoolPdeCount;                                              //0x1f9c
    ULONG DynamicSessionPdeCount;                                           //0x1fa0
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;                               //0x1fa4
    VOID* PoolTrackTableExpansion;                                          //0x1fdc
    ULONG PoolTrackTableExpansionSize;                                      //0x1fe0
    VOID* PoolTrackBigPages;                                                //0x1fe4
    ULONG PoolTrackBigPagesSize;                                            //0x1fe8
    enum _IO_SESSION_STATE IoState;                                         //0x1fec
    ULONG IoStateSequence;                                                  //0x1ff0
    struct _KEVENT IoNotificationEvent;                                     //0x1ff4
    struct _EJOB* ServerSilo;                                               //0x2004
    ULONGLONG CreateTime;                                                   //0x2008
    UCHAR PoolTags[8192];                                                   //0x3000
};
/* Used in */
// _EPROCESS

