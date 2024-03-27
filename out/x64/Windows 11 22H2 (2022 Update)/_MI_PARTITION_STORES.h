#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_ETHREAD.h>
#include <_SLIST_HEADER.h>
#include <_RTL_BITMAP.h>
#include <_EPROCESS.h>

//0xb0 bytes (sizeof)
struct _MI_PARTITION_STORES
{
    union
    {
        LONG FlushCompleting:1;                                             //0x0
        LONG FlushInProgress:31;                                            //0x0
        volatile LONG Long;                                                 //0x0
    } WriteAllStoreSwapPages;                                               //0x0
    ULONG VirtualPageFileNumber;                                            //0x4
    ULONG Registered;                                                       //0x8
    ULONG ReadClusterSizeMax;                                               //0xc
    ULONG EvictFlushRequestCount;                                           //0x10
    ULONG ModifiedWriteDisableCount;                                        //0x14
    ULONG WriteIssueFailures;                                               //0x18
    ULONG WritesOutstanding;                                                //0x1c
    struct _KEVENT* RundownWrites;                                          //0x20
    volatile LONG EvictFlushLock;                                           //0x28
    struct _ETHREAD* EvictionThread;                                        //0x30
    struct _KEVENT EvictEvent;                                              //0x38
    struct _KEVENT EvictThreadExitEvent;                                    //0x50
    union _SLIST_HEADER WriteSupportSListHead;                              //0x70
    struct _KEVENT EvictFlushCompleteEvent;                                 //0x80
    struct _RTL_BITMAP* ModifiedWriteFailedBitmap;                          //0x98
    struct _EPROCESS* StoreProcess;                                         //0xa0
    volatile LONG MemoryConditionsLock;                                     //0xa8
    ULONG DeleteStoredPages;                                                //0xac
};
/* Used in */
// _MI_PARTITION

