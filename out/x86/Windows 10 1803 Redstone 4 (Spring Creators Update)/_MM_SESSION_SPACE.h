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
#include <_POOL_DESCRIPTOR.h>
#include <_MI_SESSION_DRIVER_UNLOAD.h>
#include <_MMPTE.h>
#include <_MI_SPECIAL_POOL.h>
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
    ULONG SessionPoolAllocationFailures[4];                                 //0x34
    struct _RTL_AVL_TREE ImageTree;                                         //0x44
    ULONG LocaleId;                                                         //0x48
    ULONG AttachCount;                                                      //0x4c
    struct _KGATE AttachGate;                                               //0x50
    struct _LIST_ENTRY WsListEntry;                                         //0x60
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0x68
    struct _GENERAL_LOOKASIDE Lookaside[24];                                //0xc0
    struct _MMSESSION Session;                                              //0xcc0
    struct _MMSUPPORT_FULL Vm;                                              //0xd00
    struct _MMWSL_INSTANCE WorkingSetList;                                  //0xdc0
    VOID* HeapState;                                                        //0xdd8
    struct _POOL_DESCRIPTOR PagedPool;                                      //0xe00
    struct _MI_SESSION_DRIVER_UNLOAD DriverUnload;                          //0x1f40
    ULONG TopLevelPteLockBits[128];                                         //0x1f44
    struct _MMPTE PageTables[1024];                                         //0x2148
    ULONG PagedPoolBitBuffer[32];                                           //0x4148
    struct _MI_SPECIAL_POOL SpecialPool;                                    //0x41c8
    struct _EX_PUSH_LOCK SessionPteLock;                                    //0x4208
    LONG PoolBigEntriesInUse;                                               //0x420c
    ULONG PagedPoolPdeCount;                                                //0x4210
    ULONG SpecialPoolPdeCount;                                              //0x4214
    ULONG DynamicSessionPdeCount;                                           //0x4218
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;                               //0x421c
    VOID* PoolTrackTableExpansion;                                          //0x4250
    ULONG PoolTrackTableExpansionSize;                                      //0x4254
    VOID* PoolTrackBigPages;                                                //0x4258
    ULONG PoolTrackBigPagesSize;                                            //0x425c
    struct _RTL_AVL_TREE PermittedFaultsTree;                               //0x4260
    enum _IO_SESSION_STATE IoState;                                         //0x4264
    ULONG IoStateSequence;                                                  //0x4268
    struct _KEVENT IoNotificationEvent;                                     //0x426c
    struct _EJOB* ServerSilo;                                               //0x427c
    ULONGLONG CreateTime;                                                   //0x4280
    UCHAR PoolTags[8192];                                                   //0x5000
};
/* Used in */
// _EPROCESS

