#pragma once
/* ------------------ */

#include <_CONTROL_AREA.h>
#include <_SEGMENT_FLAGS.h>
#include <_MMEXTEND_INFO.h>
#include <_EX_PUSH_LOCK.h>
#include <_MSUBSECTION.h>

//0x28 bytes (sizeof)
struct _MAPPED_FILE_SEGMENT
{
    struct _CONTROL_AREA* ControlArea;                                      //0x0
    ULONG TotalNumberOfPtes;                                                //0x4
    struct _SEGMENT_FLAGS SegmentFlags;                                     //0x8
    ULONG NumberOfCommittedPages;                                           //0xc
    ULONGLONG SizeOfSegment;                                                //0x10
    union
    {
        struct _MMEXTEND_INFO* ExtendInfo;                                  //0x18
        VOID* BasedAddress;                                                 //0x18
    };
    struct _EX_PUSH_LOCK SegmentLock;                                       //0x1c
    struct _MSUBSECTION* LastSubsectionHint;                                //0x20
};
