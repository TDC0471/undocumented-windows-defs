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

//0x1d80 bytes (sizeof)
struct _MM_SESSION_SPACE
{
    struct _MM_SESSION_SPACE* GlobalVirtualAddress;                         //0x0
    LONG ReferenceCount;                                                    //0x8
    union
    {
        ULONG LongFlags;                                                    //0xc
        struct _MM_SESSION_SPACE_FLAGS Flags;                               //0xc
    } u;                                                                    //0xc
    ULONG SessionId;                                                        //0x10
    struct _LIST_ENTRY ProcessList;                                         //0x18
    union _LARGE_INTEGER LastProcessSwappedOutTime;                         //0x28
    ULONGLONG SessionPageDirectoryIndex;                                    //0x30
    ULONGLONG NonPagablePages;                                              //0x38
    ULONGLONG CommittedPages;                                               //0x40
    VOID* PagedPoolStart;                                                   //0x48
    VOID* PagedPoolEnd;                                                     //0x50
    struct _MMPTE* PagedPoolBasePde;                                        //0x58
    ULONG Color;                                                            //0x60
    LONG ResidentProcessCount;                                              //0x64
    ULONG SessionPoolAllocationFailures[4];                                 //0x68
    struct _LIST_ENTRY ImageList;                                           //0x78
    ULONG LocaleId;                                                         //0x88
    ULONG AttachCount;                                                      //0x8c
    struct _KEVENT AttachEvent;                                             //0x90
    struct _EPROCESS* LastProcess;                                          //0xa8
    LONG ProcessReferenceToSession;                                         //0xb0
    struct _LIST_ENTRY WsListEntry;                                         //0xb8
    struct _GENERAL_LOOKASIDE Lookaside[21];                                //0x100
    struct _MMSESSION Session;                                              //0xb80
    struct _KGUARDED_MUTEX PagedPoolMutex;                                  //0xbe8
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0xc20
    struct _MMSUPPORT Vm;                                                   //0xc60
    struct _MMWSLE* Wsle;                                                   //0xcb8
    VOID (*Win32KDriverUnload)(struct _DRIVER_OBJECT* arg1);                //0xcc0
    struct _POOL_DESCRIPTOR PagedPool;                                      //0xcc8
    struct _MMPTE PageDirectory;                                            //0x1d10
    struct _MMPTE* SpecialPoolFirstPte;                                     //0x1d18
    struct _MMPTE* SpecialPoolLastPte;                                      //0x1d20
    struct _MMPTE* NextPdeForSpecialPoolExpansion;                          //0x1d28
    struct _MMPTE* LastPdeForSpecialPoolExpansion;                          //0x1d30
    ULONGLONG SpecialPagesInUse;                                            //0x1d38
    LONG ImageLoadingCount;                                                 //0x1d40
};
/* Used in */
// _MM_SESSION_SPACE

