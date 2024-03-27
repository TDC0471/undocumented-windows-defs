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

//0x100 bytes (sizeof)
struct _MI_PARTITION_SEGMENTS
{
    volatile LONG SegmentListLock;                                          //0x0
    ULONG DeleteOnCloseCount;                                               //0x4
    volatile LONGLONG FsControlAreaCount;                                   //0x8
    volatile LONGLONG PfControlAreaCount;                                   //0x10
    struct _KEVENT DeleteSubsectionCleanup;                                 //0x18
    struct _KEVENT UnusedSegmentCleanup;                                    //0x28
    ULONG SubsectionDeletePtes;                                             //0x38
    struct _MMDEREFERENCE_SEGMENT_HEADER DereferenceSegmentHeader;          //0x3c
    struct _LIST_ENTRY DeleteOnCloseList;                                   //0x58
    struct _KTIMER DeleteOnCloseTimer;                                      //0x60
    UCHAR DeleteOnCloseTimerActive;                                         //0x88
    struct _LIST_ENTRY UnusedSegmentList;                                   //0x8c
    struct _LIST_ENTRY UnusedSubsectionList;                                //0x94
    struct _LIST_ENTRY DeleteSubsectionList;                                //0x9c
    struct _KEVENT ControlAreaDeleteEvent;                                  //0xa4
    struct _SINGLE_LIST_ENTRY ControlAreaDeleteList;                        //0xb4
    struct _MI_PTE_CHAIN_HEAD FreeSystemCache;                              //0xb8
    struct _KEVENT CloneDereferenceEvent;                                   //0xd0
    union _SLIST_HEADER CloneProtosSListHead;                               //0xe0
    struct _EX_PUSH_LOCK SystemCacheInitLock;                               //0xe8
};
/* Used in */
// _MI_PARTITION

