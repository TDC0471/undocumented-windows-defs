#pragma once
/* ------------------ */

#include <_ETHREAD.h>
#include <_KEVENT.h>
#include <_SLIST_HEADER.h>
#include <_RTL_BITMAP.h>
#include <_EPROCESS.h>

//0x80 bytes (sizeof)
struct _MI_PARTITION_STORES
{
    union
    {
        LONG FlushCompleting:1;                                             //0x0
        LONG FlushInProgress:31;                                            //0x0
        volatile LONG Long;                                                 //0x0
    } WriteAllStoreHintedPages;                                             //0x0
    ULONG VirtualPageFileNumber;                                            //0x4
    ULONG Registered;                                                       //0x8
    ULONG ReadClusterSizeMax;                                               //0xc
    ULONG EvictFlushRequestCount;                                           //0x10
    ULONG ModifiedWriteDisableCount;                                        //0x14
    ULONG WriteIssueFailures;                                               //0x18
    volatile LONG EvictFlushLock;                                           //0x1c
    struct _ETHREAD* EvictionThread;                                        //0x20
    struct _KEVENT EvictEvent;                                              //0x28
    union _SLIST_HEADER WriteSupportSListHead;                              //0x40
    struct _KEVENT EvictFlushCompleteEvent;                                 //0x50
    struct _RTL_BITMAP* ModifiedWriteFailedBitmap;                          //0x68
    struct _EPROCESS* StoreProcess;                                         //0x70
};
/* Used in */
// _MI_PARTITION
