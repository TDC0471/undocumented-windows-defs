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
#include <_EX_RUNDOWN_REF_CACHE_AWARE.h>

//0x340 bytes (sizeof)
struct _MI_PARTITION_SEGMENTS
{
    volatile LONG SegmentListLock;                                          //0x0
    ULONG DeleteOnCloseCount;                                               //0x4
    volatile LONGLONG FsControlAreaCount;                                   //0x8
    volatile LONGLONG PfControlAreaCount;                                   //0x10
    volatile LONGLONG CloneHeaderCount;                                     //0x18
    struct _KEVENT DeleteSubsectionCleanup;                                 //0x20
    struct _KEVENT UnusedSegmentCleanup;                                    //0x38
    ULONGLONG SubsectionDeletePtes;                                         //0x50
    struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend;                     //0x58
    struct _MMDEREFERENCE_SEGMENT_HEADER DereferenceSegmentHeader;          //0xb0
    struct _LIST_ENTRY DeleteOnCloseList;                                   //0x100
    struct _KTIMER DeleteOnCloseTimer;                                      //0x110
    UCHAR DeleteOnCloseTimerActive;                                         //0x150
    UCHAR SegmentDereferenceThreadExists;                                   //0x151
    VOID* SegmentDereferenceActiveControlArea;                              //0x158
    ULONGLONG UnusedSegmentPagedPool;                                       //0x160
    struct _LIST_ENTRY UnusedSegmentList;                                   //0x168
    struct _LIST_ENTRY UnusedSubsectionList;                                //0x178
    struct _LIST_ENTRY DeleteSubsectionList;                                //0x188
    struct _KEVENT ControlAreaDeleteEvent;                                  //0x198
    struct _SINGLE_LIST_ENTRY ControlAreaDeleteList;                        //0x1b0
    struct _MI_PTE_CHAIN_HEAD FreeSystemCache;                              //0x1b8
    struct _KEVENT CloneDereferenceEvent;                                   //0x1d0
    union _SLIST_HEADER CloneProtosSListHead;                               //0x1f0
    struct _EX_PUSH_LOCK SystemCacheInitLock;                               //0x200
    ULONG PagefileExtensionWaiters;                                         //0x208
    ULONG PagefileExtensionRequests;                                        //0x20c
    struct _KEVENT PagefileExtensionWaitEvent;                              //0x210
    struct _MI_CROSS_PARTITION_CHARGES SharedCharges[7];                    //0x228
    struct _KEVENT* SharedChargesDrainEvent;                                //0x308
    struct _KEVENT* ControlAreasDrainEvent;                                 //0x310
    struct _KEVENT* CloneHeaderDrainEvent;                                  //0x318
    struct _EX_RUNDOWN_REF_CACHE_AWARE* ProbeRundownReference;              //0x320
};
/* Used in */
// _MI_PARTITION

