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

//0x200 bytes (sizeof)
struct _MI_PARTITION_SEGMENTS
{
    volatile LONG SegmentListLock;                                          //0x0
    ULONG DeleteOnCloseCount;                                               //0x4
    volatile LONGLONG FsControlAreaCount;                                   //0x8
    volatile LONGLONG PfControlAreaCount;                                   //0x10
    volatile LONGLONG CloneHeaderCount;                                     //0x18
    struct _KEVENT DeleteSubsectionCleanup;                                 //0x20
    struct _KEVENT UnusedSegmentCleanup;                                    //0x30
    ULONG SubsectionDeletePtes;                                             //0x40
    struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend;                     //0x44
    struct _MMDEREFERENCE_SEGMENT_HEADER DereferenceSegmentHeader;          //0x78
    struct _LIST_ENTRY DeleteOnCloseList;                                   //0xa4
    struct _KTIMER DeleteOnCloseTimer;                                      //0xb0
    UCHAR DeleteOnCloseTimerActive;                                         //0xd8
    UCHAR SegmentDereferenceThreadExists;                                   //0xd9
    ULONG UnusedSegmentPagedPool;                                           //0xdc
    struct _LIST_ENTRY UnusedSegmentList;                                   //0xe0
    struct _LIST_ENTRY UnusedSubsectionList;                                //0xe8
    struct _LIST_ENTRY DeleteSubsectionList;                                //0xf0
    struct _KEVENT ControlAreaDeleteEvent;                                  //0xf8
    struct _SINGLE_LIST_ENTRY ControlAreaDeleteList;                        //0x108
    struct _MI_PTE_CHAIN_HEAD FreeSystemCache;                              //0x110
    struct _KEVENT CloneDereferenceEvent;                                   //0x128
    union _SLIST_HEADER CloneProtosSListHead;                               //0x138
    struct _EX_PUSH_LOCK SystemCacheInitLock;                               //0x140
    ULONG PagefileExtensionWaiters;                                         //0x144
    ULONG PagefileExtensionRequests;                                        //0x148
    struct _KEVENT PagefileExtensionWaitEvent;                              //0x14c
    struct _MI_CROSS_PARTITION_CHARGES SharedCharges[7];                    //0x15c
    struct _KEVENT* SharedChargesDrainEvent;                                //0x1cc
    struct _KEVENT* ControlAreasDrainEvent;                                 //0x1d0
    struct _KEVENT* CloneHeaderDrainEvent;                                  //0x1d4
    struct _EX_RUNDOWN_REF_CACHE_AWARE* ProbeRundownReference;              //0x1d8
};
/* Used in */
// _MI_PARTITION

