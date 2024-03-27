#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_MMPAGE_FILE_EXPANSION.h>
#include <_MMDEREFERENCE_SEGMENT_HEADER.h>
#include <_LIST_ENTRY.h>
#include <_KTIMER.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_MI_PTE_CHAIN_HEAD.h>
#include <_SLIST_HEADER.h>
#include <_EX_PUSH_LOCK.h>
#include <_MI_CROSS_PARTITION_CHARGES.h>

//0x300 bytes (sizeof)
struct _MI_PARTITION_SEGMENTS
{
    volatile LONG SegmentListLock;                                          //0x0
    ULONG DeleteOnCloseCount;                                               //0x4
    volatile LONGLONG FsControlAreaCount;                                   //0x8
    volatile LONGLONG PfControlAreaCount;                                   //0x10
    struct _KEVENT DeleteSubsectionCleanup;                                 //0x18
    struct _KEVENT UnusedSegmentCleanup;                                    //0x30
    ULONGLONG SubsectionDeletePtes;                                         //0x48
    struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend;                     //0x50
    struct _MMDEREFERENCE_SEGMENT_HEADER DereferenceSegmentHeader;          //0xa8
    struct _LIST_ENTRY DeleteOnCloseList;                                   //0xf8
    struct _KTIMER DeleteOnCloseTimer;                                      //0x108
    UCHAR DeleteOnCloseTimerActive;                                         //0x148
    UCHAR SegmentDereferenceThreadExists;                                   //0x149
    ULONGLONG UnusedSegmentPagedPool;                                       //0x150
    struct _LIST_ENTRY UnusedSegmentList;                                   //0x158
    struct _LIST_ENTRY UnusedSubsectionList;                                //0x168
    struct _LIST_ENTRY DeleteSubsectionList;                                //0x178
    struct _KEVENT ControlAreaDeleteEvent;                                  //0x188
    struct _SINGLE_LIST_ENTRY ControlAreaDeleteList;                        //0x1a0
    struct _MI_PTE_CHAIN_HEAD FreeSystemCache;                              //0x1a8
    struct _KEVENT CloneDereferenceEvent;                                   //0x1c0
    union _SLIST_HEADER CloneProtosSListHead;                               //0x1e0
    struct _EX_PUSH_LOCK SystemCacheInitLock;                               //0x1f0
    ULONG PagefileExtensionWaiters;                                         //0x1f8
    ULONG PagefileExtensionRequests;                                        //0x1fc
    struct _KEVENT PagefileExtensionWaitEvent;                              //0x200
    struct _MI_CROSS_PARTITION_CHARGES SharedCharges[5];                    //0x218
    struct _KEVENT* SharedChargesDrainEvent;                                //0x2b8
    struct _KEVENT* PagefileControlAreasDrainEvent;                         //0x2c0
};
/* Used in */
// _MI_PARTITION

