#pragma once
/* ------------------ */

#include <_CONTROL_AREA.h>
#include <_MMEXTEND_INFO.h>
#include <_EX_PUSH_LOCK.h>
#include <_SEGMENT_FLAGS.h>
#include <_MSUBSECTION.h>

//0x40 bytes (sizeof)
struct _MAPPED_FILE_SEGMENT
{
    struct _CONTROL_AREA* ControlArea;                                      //0x0
    ULONG TotalNumberOfPtes;                                                //0x8
    ULONG NonExtendedPtes;                                                  //0xc
    ULONGLONG NumberOfCommittedPages;                                       //0x10
    ULONGLONG SizeOfSegment;                                                //0x18
    union
    {
        struct _MMEXTEND_INFO* ExtendInfo;                                  //0x20
        VOID* BasedAddress;                                                 //0x20
    };
    struct _EX_PUSH_LOCK SegmentLock;                                       //0x28
    struct _SEGMENT_FLAGS SegmentFlags;                                     //0x30
    struct _MSUBSECTION* LastSubsectionHint;                                //0x38
};
