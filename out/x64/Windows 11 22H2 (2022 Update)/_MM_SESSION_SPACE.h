#pragma once
/* ------------------ */

#include <_MM_SESSION_SPACE_FLAGS.h>
#include <_LIST_ENTRY.h>
#include <_RTL_AVL_TREE.h>
#include <_KGATE.h>
#include <_EPROCESS.h>
#include <_RTL_BALANCED_NODE.h>
#include <_MMSUPPORT_FULL.h>
#include <_MMWSL_INSTANCE.h>
#include <_MMSUPPORT_AGGREGATION.h>
#include <_MI_SESSION_DRIVER_UNLOAD.h>
#include <_MMPTE.h>
#include <_IO_SESSION_STATE.h>
#include <_KEVENT.h>
#include <_EJOB.h>

//0x340 bytes (sizeof)
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
    VOID* SessionObject;                                                    //0x30
    VOID* SessionObjectHandle;                                              //0x38
    struct _RTL_AVL_TREE ImageTree;                                         //0x40
    ULONG LocaleId;                                                         //0x48
    ULONG AttachCount;                                                      //0x4c
    struct _KGATE AttachGate;                                               //0x50
    struct _EPROCESS* AttachersUsingPxeCopies[2];                           //0x68
    struct _LIST_ENTRY WsListEntry;                                         //0x78
    struct _RTL_BALANCED_NODE WsTreeEntry;                                  //0x88
    ULONGLONG CombineDomain;                                                //0xa0
    struct _MMSUPPORT_FULL Vm;                                              //0xc0
    struct _MMWSL_INSTANCE WorkingSetList;                                  //0x200
    struct _MMSUPPORT_AGGREGATION AggregateSessionWs;                       //0x240
    struct _MI_SESSION_DRIVER_UNLOAD DriverUnload;                          //0x260
    ULONG TopLevelPteLockBits[32];                                          //0x268
    struct _MMPTE PageTables[1];                                            //0x2e8
    enum _IO_SESSION_STATE IoState;                                         //0x2f0
    ULONG IoStateSequence;                                                  //0x2f4
    struct _KEVENT IoNotificationEvent;                                     //0x2f8
    struct _EJOB* ServerSilo;                                               //0x310
    ULONGLONG CreateTime;                                                   //0x318
};
/* Used in */
// _EPROCESS

