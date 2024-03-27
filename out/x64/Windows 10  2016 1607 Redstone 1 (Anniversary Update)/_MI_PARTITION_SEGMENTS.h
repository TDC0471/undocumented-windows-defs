#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_MMDEREFERENCE_SEGMENT_HEADER.h>
#include <_LIST_ENTRY.h>
#include <_KTIMER.h>
#include <_SINGLE_LIST_ENTRY.h>

//0x180 bytes (sizeof)
struct _MI_PARTITION_SEGMENTS
{
    struct _KEVENT DeleteSubsectionCleanup;                                 //0x0
    struct _KEVENT UnusedSegmentCleanup;                                    //0x18
    ULONGLONG SubsectionDeletePtes;                                         //0x30
    struct _MMDEREFERENCE_SEGMENT_HEADER DereferenceSegmentHeader;          //0x38
    struct _LIST_ENTRY DeleteOnCloseList;                                   //0x68
    struct _KTIMER DeleteOnCloseTimer;                                      //0x78
    UCHAR DeleteOnCloseTimerActive;                                         //0xb8
    ULONG DeleteOnCloseCount;                                               //0xbc
    struct _LIST_ENTRY UnusedSegmentList;                                   //0xc0
    struct _LIST_ENTRY UnusedSubsectionList;                                //0xd0
    struct _LIST_ENTRY DeleteSubsectionList;                                //0xe0
    struct _KEVENT ControlAreaDeleteEvent;                                  //0xf0
    struct _SINGLE_LIST_ENTRY ControlAreaDeleteList;                        //0x108
    volatile LONG SegmentListLock;                                          //0x140
    volatile LONGLONG ControlAreaCount;                                     //0x148
};
/* Used in */
// _MI_PARTITION

