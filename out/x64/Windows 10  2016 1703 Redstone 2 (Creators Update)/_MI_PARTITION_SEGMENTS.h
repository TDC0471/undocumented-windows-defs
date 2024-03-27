#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_MMDEREFERENCE_SEGMENT_HEADER.h>
#include <_LIST_ENTRY.h>
#include <_KTIMER.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_MI_PTE_CHAIN_HEAD.h>
#include <_SLIST_HEADER.h>
#include <_EX_PUSH_LOCK.h>
#include <_MI_CROSS_PARTITION_CHARGES.h>

//0x240 bytes (sizeof)
struct _MI_PARTITION_SEGMENTS
{
    volatile LONG SegmentListLock;                                          //0x0
    ULONG DeleteOnCloseCount;                                               //0x4
    volatile LONGLONG FsControlAreaCount;                                   //0x8
    volatile LONGLONG PfControlAreaCount;                                   //0x10
    struct _KEVENT DeleteSubsectionCleanup;                                 //0x18
    struct _KEVENT UnusedSegmentCleanup;                                    //0x30
    ULONGLONG SubsectionDeletePtes;                                         //0x48
    struct _MMDEREFERENCE_SEGMENT_HEADER DereferenceSegmentHeader;          //0x50
    struct _LIST_ENTRY DeleteOnCloseList;                                   //0x80
    struct _KTIMER DeleteOnCloseTimer;                                      //0x90
    UCHAR DeleteOnCloseTimerActive;                                         //0xd0
    struct _LIST_ENTRY UnusedSegmentList;                                   //0xd8
    struct _LIST_ENTRY UnusedSubsectionList;                                //0xe8
    struct _LIST_ENTRY DeleteSubsectionList;                                //0xf8
    struct _KEVENT ControlAreaDeleteEvent;                                  //0x108
    struct _SINGLE_LIST_ENTRY ControlAreaDeleteList;                        //0x120
    struct _MI_PTE_CHAIN_HEAD FreeSystemCache;                              //0x128
    struct _KEVENT CloneDereferenceEvent;                                   //0x140
    union _SLIST_HEADER CloneProtosSListHead;                               //0x160
    struct _EX_PUSH_LOCK SystemCacheInitLock;                               //0x170
    struct _MI_CROSS_PARTITION_CHARGES SharedCharges[4];                    //0x178
    struct _KEVENT* SharedChargesDrainEvent;                                //0x1f8
    struct _KEVENT* PagefileControlAreasDrainEvent;                         //0x200
};
/* Used in */
// _MI_PARTITION

