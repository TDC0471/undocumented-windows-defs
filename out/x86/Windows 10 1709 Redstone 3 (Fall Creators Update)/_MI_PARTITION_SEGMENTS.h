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

//0x180 bytes (sizeof)
struct _MI_PARTITION_SEGMENTS
{
    volatile LONG SegmentListLock;                                          //0x0
    ULONG DeleteOnCloseCount;                                               //0x4
    volatile LONGLONG FsControlAreaCount;                                   //0x8
    volatile LONGLONG PfControlAreaCount;                                   //0x10
    struct _KEVENT DeleteSubsectionCleanup;                                 //0x18
    struct _KEVENT UnusedSegmentCleanup;                                    //0x28
    ULONG SubsectionDeletePtes;                                             //0x38
    struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend;                     //0x3c
    struct _MMDEREFERENCE_SEGMENT_HEADER DereferenceSegmentHeader;          //0x70
    struct _LIST_ENTRY DeleteOnCloseList;                                   //0x9c
    struct _KTIMER DeleteOnCloseTimer;                                      //0xa8
    UCHAR DeleteOnCloseTimerActive;                                         //0xd0
    UCHAR SegmentDereferenceThreadExists;                                   //0xd1
    ULONG UnusedSegmentPagedPool;                                           //0xd4
    struct _LIST_ENTRY UnusedSegmentList;                                   //0xd8
    struct _LIST_ENTRY UnusedSubsectionList;                                //0xe0
    struct _LIST_ENTRY DeleteSubsectionList;                                //0xe8
    struct _KEVENT ControlAreaDeleteEvent;                                  //0xf0
    struct _SINGLE_LIST_ENTRY ControlAreaDeleteList;                        //0x100
    struct _MI_PTE_CHAIN_HEAD FreeSystemCache;                              //0x108
    struct _KEVENT CloneDereferenceEvent;                                   //0x120
    union _SLIST_HEADER CloneProtosSListHead;                               //0x130
    struct _EX_PUSH_LOCK SystemCacheInitLock;                               //0x138
    ULONG PagefileExtensionWaiters;                                         //0x13c
    ULONG PagefileExtensionRequests;                                        //0x140
    struct _KEVENT PagefileExtensionWaitEvent;                              //0x144
};
/* Used in */
// _MI_PARTITION

