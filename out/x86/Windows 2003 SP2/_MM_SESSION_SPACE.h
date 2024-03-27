#pragma once
/* ------------------ */

#include <_MM_SESSION_SPACE.h>
#include <_MM_SESSION_SPACE_FLAGS.h>
#include <_LIST_ENTRY.h>
#include <_LARGE_INTEGER.h>
#include <_MMPTE.h>
#include <_KEVENT.h>
#include <_EPROCESS.h>
#include <_GENERAL_LOOKASIDE.h>
#include <_MMSESSION.h>
#include <_KGUARDED_MUTEX.h>
#include <_MM_PAGED_POOL_INFO.h>
#include <_MMSUPPORT.h>
#include <_MMWSLE.h>
#include <_DRIVER_OBJECT.h>
#include <_POOL_DESCRIPTOR.h>

//0x1ec0 bytes (sizeof)
struct _MM_SESSION_SPACE
{
    struct _MM_SESSION_SPACE* GlobalVirtualAddress;                         //0x0
    LONG ReferenceCount;                                                    //0x4
    union
    {
        ULONG LongFlags;                                                    //0x8
        struct _MM_SESSION_SPACE_FLAGS Flags;                               //0x8
    } u;                                                                    //0x8
    ULONG SessionId;                                                        //0xc
    struct _LIST_ENTRY ProcessList;                                         //0x10
    union _LARGE_INTEGER LastProcessSwappedOutTime;                         //0x18
    ULONG SessionPageDirectoryIndex;                                        //0x20
    ULONG NonPagablePages;                                                  //0x24
    ULONG CommittedPages;                                                   //0x28
    VOID* PagedPoolStart;                                                   //0x2c
    VOID* PagedPoolEnd;                                                     //0x30
    struct _MMPTE* PagedPoolBasePde;                                        //0x34
    ULONG Color;                                                            //0x38
    LONG ResidentProcessCount;                                              //0x3c
    ULONG SessionPoolAllocationFailures[4];                                 //0x40
    struct _LIST_ENTRY ImageList;                                           //0x50
    ULONG LocaleId;                                                         //0x58
    ULONG AttachCount;                                                      //0x5c
    struct _KEVENT AttachEvent;                                             //0x60
    struct _EPROCESS* LastProcess;                                          //0x70
    LONG ProcessReferenceToSession;                                         //0x74
    struct _LIST_ENTRY WsListEntry;                                         //0x78
    struct _GENERAL_LOOKASIDE Lookaside[26];                                //0x80
    struct _MMSESSION Session;                                              //0xd80
    struct _KGUARDED_MUTEX PagedPoolMutex;                                  //0xdc0
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0xde0
    struct _MMSUPPORT Vm;                                                   //0xe00
    struct _MMWSLE* Wsle;                                                   //0xe48
    VOID (*Win32KDriverUnload)(struct _DRIVER_OBJECT* arg1);                //0xe4c
    struct _POOL_DESCRIPTOR PagedPool;                                      //0xe50
    struct _MMPTE* PageTables;                                              //0x1e80
    LONG ImageLoadingCount;                                                 //0x1e84
};
/* Used in */
// _MM_SESSION_SPACE

