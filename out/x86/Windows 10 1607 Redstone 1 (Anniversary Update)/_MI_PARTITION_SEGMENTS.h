#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_MMDEREFERENCE_SEGMENT_HEADER.h>
#include <_LIST_ENTRY.h>
#include <_KTIMER.h>
#include <_SINGLE_LIST_ENTRY.h>

//0x100 bytes (sizeof)
struct _MI_PARTITION_SEGMENTS
{
    struct _KEVENT DeleteSubsectionCleanup;                                 //0x0
    struct _KEVENT UnusedSegmentCleanup;                                    //0x10
    ULONG SubsectionDeletePtes;                                             //0x20
    struct _MMDEREFERENCE_SEGMENT_HEADER DereferenceSegmentHeader;          //0x24
    struct _LIST_ENTRY DeleteOnCloseList;                                   //0x40
    struct _KTIMER DeleteOnCloseTimer;                                      //0x48
    UCHAR DeleteOnCloseTimerActive;                                         //0x70
    ULONG DeleteOnCloseCount;                                               //0x74
    struct _LIST_ENTRY UnusedSegmentList;                                   //0x78
    struct _LIST_ENTRY UnusedSubsectionList;                                //0x80
    struct _LIST_ENTRY DeleteSubsectionList;                                //0x88
    struct _KEVENT ControlAreaDeleteEvent;                                  //0x90
    struct _SINGLE_LIST_ENTRY ControlAreaDeleteList;                        //0xa0
    volatile LONG SegmentListLock;                                          //0xc0
    volatile LONGLONG ControlAreaCount;                                     //0xc8
};
/* Used in */
// _MI_PARTITION

